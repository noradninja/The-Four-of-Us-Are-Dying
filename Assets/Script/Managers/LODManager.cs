using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using Unity.Jobs;
using Unity.Collections;

public class LODManager : MonoBehaviour
{
    public static LODManager Instance { get; private set; }

    [Header("Global LOD Settings")]
    public Shader refShader;
    public int batchSize = 50;
    public int farClipOffset;
    [HideInInspector] public int unloadEveryXCycles = 5;

    [Header("Global LOD Thresholds (meters)")]
    public float fullDistance = 4f;
    public float reducedDistance = 5f;
    public float vertexOnlyDistance = 7f;

    private readonly List<Shader_LOD_Enumerator> enumerators = new List<Shader_LOD_Enumerator>();
    private Transform playerTransform;
    private Camera mainCam;
    private float farClipSqr;

    private NativeArray<Vector2> enumeratorPositions;
    private NativeArray<float> distSqrArray;

    private JobHandle lodJobHandle;
    private bool isJobScheduled = false;

    private int currentBatchIndex = 0;
    private int cycleCount = 0;

    // Track what we actually scheduled so Apply uses the same range
    private int scheduledStartIndex = 0;
    private int scheduledCount = 0;

    // ===== Shared replacement material cache (VertexOnly) =====
    private readonly Dictionary<ReplacementKey, Material> _replacementCache =
        new Dictionary<ReplacementKey, Material>(256);

    private struct ReplacementKey
    {
        public int shaderId;
        public int mainTexId;
        public int moarTexId;

        public int tilingX1000_X;
        public int tilingX1000_Y;
        public int offsetX1000_X;
        public int offsetX1000_Y;

        public int cutoffX1000;
        public int flags;

        public ReplacementKey(
            Shader shader,
            Texture mainTex,
            Texture moarTex,
            Vector2 tiling,
            Vector2 offset,
            float cutoff,
            int flags)
        {
            shaderId = shader != null ? shader.GetInstanceID() : 0;
            mainTexId = mainTex != null ? mainTex.GetInstanceID() : 0;
            moarTexId = moarTex != null ? moarTex.GetInstanceID() : 0;

            tilingX1000_X = Mathf.RoundToInt(tiling.x * 1000f);
            tilingX1000_Y = Mathf.RoundToInt(tiling.y * 1000f);
            offsetX1000_X = Mathf.RoundToInt(offset.x * 1000f);
            offsetX1000_Y = Mathf.RoundToInt(offset.y * 1000f);

            cutoffX1000 = Mathf.RoundToInt(Mathf.Clamp01(cutoff) * 1000f);

            this.flags = flags;
        }
    }

    // ===== Original material reduced-variant cache =====
    private readonly Dictionary<int, Material> _reducedOriginalCache =
        new Dictionary<int, Material>(256);

    private static void SetToggleKeyword(Material mat, string keyword, bool enabled)
    {
        if (enabled) mat.EnableKeyword(keyword);
        else mat.DisableKeyword(keyword);
    }

    public Material GetOrCreateReplacementMaterial(
        Texture mainTex,
        Texture moarTex,
        Vector2 mainTexTiling,
        Vector2 mainTexOffset,
        float cutoff,
        bool alphaOn,
        bool leavesOn,
        bool ambientOn)
    {
        if (refShader == null) return null;

        int flags = 0;
        if (alphaOn) flags |= 1 << 0;
        if (leavesOn) flags |= 1 << 1;
        if (ambientOn) flags |= 1 << 2;

        var key = new ReplacementKey(refShader, mainTex, moarTex, mainTexTiling, mainTexOffset, cutoff, flags);

        Material mat;
        if (_replacementCache.TryGetValue(key, out mat) && mat != null)
            return mat;

        mat = new Material(refShader);
        mat.name = "LOD_SHARED_REPL_" + key.mainTexId + "_" + key.moarTexId + "_" + key.flags +
                   "_T" + key.tilingX1000_X + "x" + key.tilingX1000_Y +
                   "_O" + key.offsetX1000_X + "x" + key.offsetX1000_Y +
                   "_C" + key.cutoffX1000;

        if (mainTex != null) mat.mainTexture = mainTex;
        if (moarTex != null) mat.SetTexture("_MetallicGlossMap", moarTex);

        mat.SetTextureScale("_MainTex", mainTexTiling);
        mat.SetTextureOffset("_MainTex", mainTexOffset);
        mat.SetTextureScale("_MetallicGlossMap", mainTexTiling);
        mat.SetTextureOffset("_MetallicGlossMap", mainTexOffset);

        if (mat.HasProperty("_Cutoff"))
            mat.SetFloat("_Cutoff", Mathf.Clamp01(cutoff));

        SetToggleKeyword(mat, "ALPHA_ON", alphaOn);
        SetToggleKeyword(mat, "WIGGLE_ON", leavesOn);
        SetToggleKeyword(mat, "AMBIENT_ON", ambientOn);

        mat.SetFloat("_AlphaOn", alphaOn ? 1f : 0f);
        mat.SetFloat("_LeavesOn", leavesOn ? 1f : 0f);
        mat.SetFloat("_AmbientOn", ambientOn ? 1f : 0f);

        _replacementCache[key] = mat;
        return mat;
    }

    public Material GetOrCreateReducedOriginalMaterial(Material originalShared)
    {
        if (originalShared == null) return null;

        int id = originalShared.GetInstanceID();

        Material mat;
        if (_reducedOriginalCache.TryGetValue(id, out mat) && mat != null)
            return mat;

        mat = new Material(originalShared);
        mat.name = originalShared.name + "_LOD_Reduced";
        mat.DisableKeyword("_NORMALMAP");

        _reducedOriginalCache[id] = mat;
        return mat;
    }

    private void Awake()
    {
        if (Instance != null && Instance != this)
        {
            Destroy(gameObject);
            return;
        }

        Instance = this;
        mainCam = Camera.main;
    }

    private void Start()
    {
        if (enumerators.Count > 0 && enumerators[0] != null && enumerators[0].player != null)
            playerTransform = enumerators[0].player.transform;

        if (mainCam != null)
        {
            float far = mainCam.farClipPlane + farClipOffset;
            farClipSqr = far * far;
        }
    }

    private void Update()
    {
        if (playerTransform == null || mainCam == null) return;

        // 1) RECOVER RESULTS
        if (isJobScheduled)
        {
            lodJobHandle.Complete();
            ApplyLODResultsScheduledRange();
            isJobScheduled = false;

            // Advance batch AFTER applying the batch we scheduled
            currentBatchIndex++;

            if (currentBatchIndex * batchSize >= enumerators.Count)
            {
                currentBatchIndex = 0;
                cycleCount++;

                if (cycleCount >= unloadEveryXCycles)
                {
                    cycleCount = 0;
                    //Resources.UnloadUnusedAssets();
                }
            }
        }

        // Ensure arrays exist and match current enumerator count
        EnsureNativeArraysMatch();

        if (enumerators.Count == 0) return;

        // Compute batch for THIS frame
        int startIndex = currentBatchIndex * batchSize;
        if (startIndex >= enumerators.Count)
        {
            // Safety: reset if something changed and we landed out of range
            currentBatchIndex = 0;
            startIndex = 0;
        }

        int endIndex = Mathf.Min(startIndex + batchSize, enumerators.Count);
        int count = endIndex - startIndex;
        if (count <= 0) return;

        // Fill positions for this batch only
        for (int i = startIndex; i < endIndex; i++)
        {
            var e = enumerators[i];
            if (e != null)
            {
                Vector3 p = e.transform.position;
                enumeratorPositions[i] = new Vector2(p.x, p.z);
            }
        }

        Vector2 playerPos2D = new Vector2(playerTransform.position.x, playerTransform.position.z);

        // Slice only the batch that is valid right now
        NativeSlice<Vector2> batchPositions = enumeratorPositions.Slice(startIndex, count);
        NativeSlice<float> batchDistSqrArray = distSqrArray.Slice(startIndex, count);

        // Record what we scheduled (critical!)
        scheduledStartIndex = startIndex;
        scheduledCount = count;

        LODJob lodJob = new LODJob
        {
            playerPos = playerPos2D,
            positions = batchPositions,
            distSqrArray = batchDistSqrArray
        };

        lodJobHandle = lodJob.Schedule(count, 1);
        isJobScheduled = true;
    }

    private void ApplyLODResultsScheduledRange()
    {
        // Clamp to actual array length in case something changed
        int maxLen = distSqrArray.IsCreated ? distSqrArray.Length : 0;
        if (maxLen == 0) return;

        int start = Mathf.Clamp(scheduledStartIndex, 0, maxLen);
        int end = Mathf.Clamp(scheduledStartIndex + scheduledCount, 0, maxLen);

        // Also clamp against enumerator list size
        int enumMax = enumerators.Count;
        if (enumMax == 0) return;
        end = Mathf.Min(end, enumMax);

        for (int i = start; i < end; i++)
        {
            var e = enumerators[i];
            if (e != null)
            {
                e.UpdateLOD(distSqrArray[i], farClipSqr);
            }
        }
    }

    private void EnsureNativeArraysMatch()
    {
        int needed = enumerators.Count;

        if (!enumeratorPositions.IsCreated || !distSqrArray.IsCreated ||
            enumeratorPositions.Length != needed || distSqrArray.Length != needed)
        {
            ResizeNativeArrays(needed);
        }
    }

    private void ResizeNativeArrays(int newCount)
    {
        // Never resize while a job is running
        if (isJobScheduled)
        {
            lodJobHandle.Complete();
            isJobScheduled = false;
        }

        if (enumeratorPositions.IsCreated) enumeratorPositions.Dispose();
        if (distSqrArray.IsCreated) distSqrArray.Dispose();

        if (newCount < 0) newCount = 0;

        enumeratorPositions = new NativeArray<Vector2>(newCount, Allocator.Persistent);
        distSqrArray = new NativeArray<float>(newCount, Allocator.Persistent);

        // Reset batch state so indices don't point at old ranges
        currentBatchIndex = 0;
        scheduledStartIndex = 0;
        scheduledCount = 0;
    }

    public void Register(Shader_LOD_Enumerator e)
    {
        if (e == null) return;

        if (!enumerators.Contains(e))
        {
            // Ensure no jobs running while we mutate lists/arrays
            if (isJobScheduled)
            {
                lodJobHandle.Complete();
                isJobScheduled = false;
            }

            enumerators.Add(e);
            ResizeNativeArrays(enumerators.Count);

            if (playerTransform == null && e.player != null)
                playerTransform = e.player.transform;
        }
    }

    public void Unregister(Shader_LOD_Enumerator e)
    {
        if (e == null) return;

        if (enumerators.Contains(e))
        {
            if (isJobScheduled)
            {
                lodJobHandle.Complete();
                isJobScheduled = false;
            }

            enumerators.Remove(e);
            ResizeNativeArrays(enumerators.Count);
        }
    }

    public void RebuildAllEnumeratorThresholds(bool rescanScene = true)
    {
        if (isJobScheduled)
        {
            lodJobHandle.Complete();
            isJobScheduled = false;
        }

        if (rescanScene)
        {
            enumerators.Clear();
            var found = GameObject.FindObjectsOfType<Shader_LOD_Enumerator>();
            for (int i = 0; i < found.Length; i++)
            {
                if (found[i] != null && !enumerators.Contains(found[i]))
                    enumerators.Add(found[i]);
            }
        }

        for (int i = 0; i < enumerators.Count; i++)
        {
            if (enumerators[i] != null)
                enumerators[i].RebuildThresholdCache();
        }

        ResizeNativeArrays(enumerators.Count);

        if (playerTransform == null && enumerators.Count > 0 && enumerators[0] != null && enumerators[0].player != null)
            playerTransform = enumerators[0].player.transform;
    }

    private void OnDisable()
    {
        // Important for playmode reloads / domain reload edge cases
        DisposeNativeArrays();
    }

    private void OnDestroy()
    {
        DisposeNativeArrays();

        foreach (var kv in _replacementCache)
            if (kv.Value != null) Destroy(kv.Value);
        _replacementCache.Clear();

        foreach (var kv in _reducedOriginalCache)
            if (kv.Value != null) Destroy(kv.Value);
        _reducedOriginalCache.Clear();
    }

    private void DisposeNativeArrays()
    {
        if (isJobScheduled)
        {
            lodJobHandle.Complete();
            isJobScheduled = false;
        }

        if (enumeratorPositions.IsCreated) enumeratorPositions.Dispose();
        if (distSqrArray.IsCreated) distSqrArray.Dispose();

        scheduledStartIndex = 0;
        scheduledCount = 0;
        currentBatchIndex = 0;
    }

    struct LODJob : IJobParallelFor
    {
        public Vector2 playerPos;
        public NativeSlice<Vector2> positions;
        public NativeSlice<float> distSqrArray;

        public void Execute(int index)
        {
            Vector2 thisPos2D = positions[index];
            float distSqr = (playerPos - thisPos2D).sqrMagnitude;
            distSqrArray[index] = distSqr;
        }
    }
}
