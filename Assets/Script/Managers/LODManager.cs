/* LODManager.cs */

using System.Collections.Generic;
using UnityEngine;
using Unity.Jobs;
using Unity.Collections;

public class LODManager : MonoBehaviour
{
    public enum DeadWorldControlMode
    {
        Alive,
        Dead,
        Transition
    }

    [Header("Global LOD Settings")] public Shader refShader;

    public Shader blackShader;
    public int batchSize = 50;
    public int farClipOffset;
    [HideInInspector] public int unloadEveryXCycles = 5;

    [Header("Global LOD Thresholds (meters)")]
    public float fullDistance = 4f;

    public float reducedDistance = 5f;
    public float vertexOnlyDistance = 7f;

    [Tooltip("After VertexOnly: still render, but output solid black (very cheap).")]
    public float blackOnlyDistance = 9f;

    [Tooltip("Beyond this: disable renderer entirely.")]
    public float disableDistance = 12f;

    [Header("Bounds Distance Offset Mode")]
    [Tooltip("FarEdge = add half horizontal size. NearEdge = subtract half horizontal size.")]
    public bool farEdgeForBounds = true;

    [Tooltip("Maximum horizontal size offset (meters) that bounds can contribute to LOD thresholds.")]
    public float maxBoundsOffset = 2.0f;

    [Header("Dead World Control")] public DeadWorldControlMode deadWorldControl = DeadWorldControlMode.Alive;

    [Tooltip("Layer used by the mirrored/dead-world duplicate geometry.")]
    public int deadWorldLayer = 0;

    [Header("Adaptive FPS Culling")] public bool enableAdaptiveFPSCulling = true;

    [Tooltip("If FPS drops below this, we start disabling the furthest renderers.")]
    public float targetFPS = 30f;

    [Tooltip("FPS must rise above (targetFPS + hysteresis) before we start restoring.")]
    public float fpsHysteresis = 2f;

    [Tooltip("How often (seconds) we may cull/restore to avoid thrashing.")]
    public float fpsCullInterval = 0.25f;

    [Tooltip("Max renderers to disable per FPS interval step.")]
    public int maxCullPerStep = 1;

    [Tooltip("Max renderers to restore per FPS interval step.")]
    public int maxRestorePerStep = 1;

    [Header("Predictive Render Budget")] public bool enablePredictiveBudgeting = true;

    public float predictiveSoftCostBudget = 180f;
    public float predictiveHardCostBudget = 220f;
    public float predictiveCostCullInterval = 0.25f;

    [Tooltip("Cost must fall below (soft budget - hysteresis) before predictive restore begins.")]
    public float predictiveCostHysteresis = 10f;

    [Tooltip("Max renderers to disable per predictive step when over soft budget.")]
    public int maxPredictiveCullPerStep = 1;

    [Tooltip("Max renderers to disable per predictive step when over hard budget.")]
    public int maxPredictiveHardCullPerStep = 2;

    [Tooltip("Max renderers to restore per predictive step when safely below budget.")]
    public int maxPredictiveRestorePerStep = 1;

    [Header("Flashlight Cost Estimation")] public Light flashlightLight;

    [Header("Runtime Debug")] [SerializeField]
    private float _estimatedRenderCost = 0f;

    [SerializeField] private float _smoothedEstimatedRenderCost = 0f;
    [SerializeField] private int _estimatedVisibleDrawCalls = 0;

    [Header("Texture LOD Unload")] public bool enableTextureLODUnload = true;
    public float textureUnloadInterval = 10f;
    public float textureUnloadMinFPS = 30f;

    private readonly Dictionary<int, Material> _blackCache =
        new Dictionary<int, Material>(256);

    private readonly List<Shader_LOD_Enumerator> _fpsDisabled = new List<Shader_LOD_Enumerator>(256);
    private readonly List<Shader_LOD_Enumerator> _predictiveDisabled = new List<Shader_LOD_Enumerator>(256);

    private readonly Dictionary<int, Material> _reducedOriginalCache =
        new Dictionary<int, Material>(256);

    private readonly Dictionary<ReplacementKey, Material> _replacementCache =
        new Dictionary<ReplacementKey, Material>(256);

    private readonly List<Shader_LOD_Enumerator> enumerators = new List<Shader_LOD_Enumerator>();

    private Plane[] _frustumPlanes = new Plane[6];

    private DeadWorldControlMode _lastDeadWorldControl;

    private float _nextFPSCullTime = 0f;
    private float _nextPredictiveCostTime = 0f;

    private float _nextTextureUnloadTime;
    private bool _textureUnloadInProgress;

    private int currentBatchIndex = 0;
    private int cycleCount = 0;
    private NativeArray<float> distSqrArray;

    private NativeArray<Vector2> enumeratorPositions;
    private float farClipSqr;
    private bool isJobScheduled = false;

    private JobHandle lodJobHandle;
    private Camera mainCam;

    private Transform playerTransform;
    private int scheduledCount = 0;

    private int scheduledStartIndex = 0;
    public static LODManager Instance { get; private set; }

    public IList<Shader_LOD_Enumerator> Enumerators
    {
        get { return enumerators; }
    }

    public float EstimatedRenderCost
    {
        get { return _estimatedRenderCost; }
    }

    public float SmoothedEstimatedRenderCost
    {
        get { return _smoothedEstimatedRenderCost; }
    }

    public int EstimatedVisibleDrawCalls
    {
        get { return _estimatedVisibleDrawCalls; }
    }

    private void Awake()
    {
        if (Instance != null && Instance != this)
        {
            DisposeNativeArrays();
            Destroy(gameObject);
            return;
        }

        Instance = this;
        mainCam = Camera.main;
        _lastDeadWorldControl = deadWorldControl;
    }

    private void Start()
    {
        if (enumerators.Count > 0 && enumerators[0] != null && enumerators[0].player != null)
            playerTransform = enumerators[0].player.transform;

        if (mainCam != null)
        {
            var far = mainCam.farClipPlane + farClipOffset;
            farClipSqr = far * far;
        }

        ApplyDeadWorldControlGate();
    }

    private void Update()
    {
        if (playerTransform == null || mainCam == null) return;

        if (_lastDeadWorldControl != deadWorldControl)
        {
            _lastDeadWorldControl = deadWorldControl;
            ApplyDeadWorldControlGate();
        }

        if (isJobScheduled)
        {
            lodJobHandle.Complete();

            ApplyLODResultsScheduledRange();
            UpdatePredictiveRenderEstimate();
            TryPredictiveCostCulling();
            TryAdaptiveFPSCulling();
            ApplyDeadWorldControlGate();

            isJobScheduled = false;

            currentBatchIndex++;

            if (currentBatchIndex * batchSize >= enumerators.Count)
            {
                currentBatchIndex = 0;
                cycleCount++;

                if (cycleCount >= unloadEveryXCycles) cycleCount = 0;
            }
        }

        EnsureNativeArraysMatch();

        if (enumerators.Count == 0) return;

        var startIndex = currentBatchIndex * batchSize;
        if (startIndex >= enumerators.Count)
        {
            currentBatchIndex = 0;
            startIndex = 0;
        }

        var endIndex = Mathf.Min(startIndex + batchSize, enumerators.Count);
        var count = endIndex - startIndex;
        if (count <= 0) return;

        for (var i = startIndex; i < endIndex; i++)
        {
            var e = enumerators[i];
            if (e != null)
            {
                var p = e.transform.position;
                enumeratorPositions[i] = new Vector2(p.x, p.z);
            }
        }

        var playerPos2D = new Vector2(playerTransform.position.x, playerTransform.position.z);

        var batchPositions = enumeratorPositions.Slice(startIndex, count);
        var batchDistSqrArray = distSqrArray.Slice(startIndex, count);

        scheduledStartIndex = startIndex;
        scheduledCount = count;

        var lodJob = new LODJob
        {
            playerPos = playerPos2D,
            positions = batchPositions,
            distSqrArray = batchDistSqrArray
        };

        lodJobHandle = lodJob.Schedule(count, 1);
        isJobScheduled = true;

        TryUnloadUnusedTextureLODAssets();
    }

    private void OnDisable()
    {
        DisposeNativeArrays();
    }

    private void OnDestroy()
    {
        DisposeNativeArrays();

        foreach (var kv in _replacementCache)
            if (kv.Value != null)
                Destroy(kv.Value);
        _replacementCache.Clear();

        foreach (var kv in _reducedOriginalCache)
            if (kv.Value != null)
                Destroy(kv.Value);
        _reducedOriginalCache.Clear();

        foreach (var kv in _blackCache)
            if (kv.Value != null)
                Destroy(kv.Value);
        _blackCache.Clear();

        _fpsDisabled.Clear();
        _predictiveDisabled.Clear();
    }

    private void OnApplicationQuit()
    {
        DisposeNativeArrays();
        if (Instance == this) Instance = null;
    }

    private static void SetToggleKeyword(Material mat, string keyword, bool enabled)
    {
        if (mat == null) return;

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
        bool ambientOn,
        bool vertexConstrain)
    {
        if (refShader == null) return null;

        int flags = 0;
        if (alphaOn) flags |= 1 << 0;
        if (leavesOn) flags |= 1 << 1;
        if (ambientOn) flags |= 1 << 2;

        var key = new ReplacementKey(
            refShader,
            mainTex,
            moarTex,
            mainTexTiling,
            mainTexOffset,
            cutoff,
            flags
        );

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

        if (mat.HasProperty("_MetallicGlossMap"))
        {
            mat.SetTextureScale("_MetallicGlossMap", mainTexTiling);
            mat.SetTextureOffset("_MetallicGlossMap", mainTexOffset);
        }

        if (mat.HasProperty("_Cutoff"))
            mat.SetFloat("_Cutoff", Mathf.Clamp01(cutoff));

        SetToggleKeyword(mat, "ALPHA_ON", alphaOn);
        SetToggleKeyword(mat, "WIGGLE_ON", leavesOn);
        SetToggleKeyword(mat, "AMBIENT_ON", ambientOn);
        SetToggleKeyword(mat, "VERTEX_CONSTRAINTS", vertexConstrain);

        if (mat.HasProperty("_AlphaOn")) mat.SetFloat("_AlphaOn", alphaOn ? 1f : 0f);
        if (mat.HasProperty("_LeavesOn")) mat.SetFloat("_LeavesOn", 0f);
        if (mat.HasProperty("_AmbientOn")) mat.SetFloat("_AmbientOn", 0f);
        if (mat.HasProperty("_VertConstraint")) mat.SetFloat("_VertConstraint", vertexConstrain ? 1f : 0f);

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

    public Material GetOrCreateBlackMaterial(Texture mainTex, Vector2 tiling, Vector2 offset, float cutoff,
        bool alphaOn)
    {
        int shaderId = blackShader != null ? blackShader.GetInstanceID() : 0;
        int texId = mainTex != null ? mainTex.GetInstanceID() : 0;
        int cutoffKey = Mathf.RoundToInt(Mathf.Clamp01(cutoff) * 1000f);
        int flags = alphaOn ? 1 : 0;

        int key = shaderId ^ (texId * 486187739) ^ (cutoffKey * 83492791) ^ (flags * 97531) ^
                  (Mathf.RoundToInt(tiling.x * 1000f) * 131) ^
                  (Mathf.RoundToInt(tiling.y * 1000f) * 137) ^
                  (Mathf.RoundToInt(offset.x * 1000f) * 139) ^
                  (Mathf.RoundToInt(offset.y * 1000f) * 149);

        Material mat;
        if (_blackCache.TryGetValue(key, out mat) && mat != null)
            return mat;

        Shader s = blackShader != null ? blackShader : Shader.Find("Unlit/Color");
        if (s == null) return null;

        mat = new Material(s);
        mat.name = "LOD_SHARED_BLACK_" + key;

        if (mainTex != null && mat.HasProperty("_MainTex"))
        {
            mat.SetTexture("_MainTex", mainTex);
            mat.SetTextureScale("_MainTex", tiling);
            mat.SetTextureOffset("_MainTex", offset);
        }

        if (mat.HasProperty("_Cutoff"))
            mat.SetFloat("_Cutoff", Mathf.Clamp01(cutoff));

        SetToggleKeyword(mat, "ALPHA_ON", alphaOn);
        if (mat.HasProperty("_AlphaOn")) mat.SetFloat("_AlphaOn", alphaOn ? 1f : 0f);

        if (mat.HasProperty("_Color"))
            mat.SetColor("_Color", Color.black);

        _blackCache[key] = mat;
        return mat;
    }

    private void ApplyDeadWorldControlGate()
    {
        bool allowCommon;
        bool allowNormal;

        switch (deadWorldControl)
        {
            case DeadWorldControlMode.Dead:
                allowCommon = true;
                allowNormal = false;
                break;

            case DeadWorldControlMode.Alive:
                allowCommon = false;
                allowNormal = true;
                break;

            default:
                allowCommon = true;
                allowNormal = true;
                break;
        }

        for (var i = 0; i < enumerators.Count; i++)
        {
            var e = enumerators[i];
            if (e == null) continue;

            var isCommon = e.gameObject.layer == deadWorldLayer;
            var allowed = isCommon ? allowCommon : allowNormal;
            e.SetDeadWorldBlocked(!allowed);
        }
    }

    private bool IsDeadWorldBlocked(Shader_LOD_Enumerator e)
    {
        return e == null || e.IsDeadWorldBlocked;
    }

    private bool IsEnumeratorPredictivelyEligible(Shader_LOD_Enumerator e)
    {
        if (e == null) return false;
        if (!e.IsRenderEligible) return false;
        if (e.IsForcedDisabledByFPS) return false;
        if (IsDeadWorldBlocked(e)) return false;
        if (e.IsPredictiveBlocked) return false;

        var r = e.CachedRenderer;
        if (r == null) return false;
        if (!r.enabled) return false;

        if (!GeometryUtility.TestPlanesAABB(_frustumPlanes, r.bounds))
            return false;

        return true;
    }

    public void SetDeadWorldControl(DeadWorldControlMode mode)
    {
        deadWorldControl = mode;
        _lastDeadWorldControl = mode;
        ApplyDeadWorldControlGate();
    }

    private void UpdatePredictiveRenderEstimate()
    {
        if (!enablePredictiveBudgeting)
        {
            _estimatedRenderCost = 0f;
            _estimatedVisibleDrawCalls = 0;
            _smoothedEstimatedRenderCost = 0f;
            return;
        }

        if (Time.unscaledTime < _nextPredictiveCostTime)
            return;

        _nextPredictiveCostTime = Time.unscaledTime + Mathf.Max(0.05f, predictiveCostCullInterval);

        if (mainCam == null)
        {
            _estimatedRenderCost = 0f;
            _estimatedVisibleDrawCalls = 0;
            return;
        }

        _frustumPlanes = GeometryUtility.CalculateFrustumPlanes(mainCam);

        var totalCost = 0f;
        var totalDrawCalls = 0;

        var lightPos = Vector3.zero;
        var lightForward = Vector3.forward;
        var lightRange = 0f;
        var outerCos = -1f;

        if (flashlightLight != null)
        {
            lightPos = flashlightLight.transform.position;
            lightForward = flashlightLight.transform.forward;
            lightRange = flashlightLight.range;
            outerCos = Mathf.Cos(flashlightLight.spotAngle * 0.5f * Mathf.Deg2Rad);
        }

        for (var i = 0; i < enumerators.Count; i++)
        {
            var e = enumerators[i];
            if (e == null) continue;
            if (!e.IsRenderEligible) continue;

            var r = e.CachedRenderer;
            if (r == null) continue;

            if (!GeometryUtility.TestPlanesAABB(_frustumPlanes, r.bounds))
                continue;

            totalDrawCalls += e.BaseDrawCallCount;
            totalCost += e.GetEstimatedRenderCost(lightPos, lightForward, lightRange, outerCos);
        }

        _estimatedVisibleDrawCalls = totalDrawCalls;
        _estimatedRenderCost = totalCost;
        _smoothedEstimatedRenderCost = Mathf.Lerp(_smoothedEstimatedRenderCost, totalCost, 0.25f);
    }

    private void TryPredictiveCostCulling()
    {
        if (!enablePredictiveBudgeting) return;
        if (mainCam == null || playerTransform == null) return;

        var cost = _smoothedEstimatedRenderCost;

        var cullCount = 0;
        var restoreCount = 0;

        if (cost > predictiveHardCostBudget)
            cullCount = maxPredictiveHardCullPerStep;
        else if (cost > predictiveSoftCostBudget)
            cullCount = maxPredictiveCullPerStep;
        else if (cost < predictiveSoftCostBudget - predictiveCostHysteresis)
            restoreCount = maxPredictiveRestorePerStep;

        if (cullCount > 0)
        {
            for (var step = 0; step < cullCount; step++)
            {
                Shader_LOD_Enumerator furthest = null;
                var furthestDistSqr = -1f;

                for (var i = 0; i < enumerators.Count; i++)
                {
                    var e = enumerators[i];
                    if (!IsEnumeratorPredictivelyEligible(e))
                        continue;

                    var p = e.transform.position;
                    var dx = p.x - playerTransform.position.x;
                    var dz = p.z - playerTransform.position.z;
                    var distSqr = dx * dx + dz * dz;

                    if (distSqr < e.FPSCullMinThresholdSqr)
                        continue;

                    if (distSqr > furthestDistSqr)
                    {
                        furthestDistSqr = distSqr;
                        furthest = e;
                    }
                }

                if (furthest == null)
                    break;

                furthest.SetPredictiveBlocked(true);

                if (!_predictiveDisabled.Contains(furthest))
                    _predictiveDisabled.Add(furthest);
            }

            return;
        }

        if (restoreCount > 0)
        {
            for (var step = 0; step < restoreCount; step++)
            {
                Shader_LOD_Enumerator nearest = null;
                var nearestDistSqr = float.MaxValue;
                var nearestIndex = -1;

                for (var i = 0; i < _predictiveDisabled.Count; i++)
                {
                    var e = _predictiveDisabled[i];
                    if (e == null)
                    {
                        nearestIndex = i;
                        nearest = null;
                        break;
                    }

                    if (e.IsForcedDisabledByFPS)
                        continue;

                    if (IsDeadWorldBlocked(e))
                        continue;

                    var r = e.CachedRenderer;
                    if (r == null)
                        continue;

                    if (!GeometryUtility.TestPlanesAABB(_frustumPlanes, r.bounds))
                        continue;

                    var p = e.transform.position;
                    var dx = p.x - playerTransform.position.x;
                    var dz = p.z - playerTransform.position.z;
                    var distSqr = dx * dx + dz * dz;

                    if (distSqr > e.BlackOnlyThresholdSqr)
                        continue;

                    if (distSqr < nearestDistSqr)
                    {
                        nearestDistSqr = distSqr;
                        nearest = e;
                        nearestIndex = i;
                    }
                }

                if (nearestIndex >= 0 && nearest == null)
                {
                    _predictiveDisabled.RemoveAt(nearestIndex);
                    step--;
                    continue;
                }

                if (nearest == null)
                    break;

                nearest.SetPredictiveBlocked(false);
                _predictiveDisabled.RemoveAt(nearestIndex);
            }
        }
    }

    private void TryAdaptiveFPSCulling()
    {
        if (!enableAdaptiveFPSCulling) return;
        if (playerTransform == null) return;
        if (Time.unscaledTime < _nextFPSCullTime) return;

        float fps = FPS_Counter.averageFPS;
        if (fps <= 0.01f) return;

        _nextFPSCullTime = Time.unscaledTime + Mathf.Max(0.05f, fpsCullInterval);

        if (fps < targetFPS)
        {
            for (int step = 0; step < maxCullPerStep; step++)
            {
                Shader_LOD_Enumerator furthest = null;
                float furthestDistSqr = -1f;

                for (int i = 0; i < enumerators.Count; i++)
                {
                    Shader_LOD_Enumerator e = enumerators[i];
                    if (e == null) continue;
                    if (e.IsForcedDisabledByFPS) continue;
                    if (IsDeadWorldBlocked(e)) continue;

                    Renderer r = e.CachedRenderer;
                    if (r == null) continue;
                    if (!r.enabled) continue;

                    Vector3 p = e.transform.position;
                    float dx = p.x - playerTransform.position.x;
                    float dz = p.z - playerTransform.position.z;
                    float distSqr = dx * dx + dz * dz;

                    if (distSqr < e.FPSCullMinThresholdSqr)
                        continue;

                    if (distSqr > furthestDistSqr)
                    {
                        furthestDistSqr = distSqr;
                        furthest = e;
                    }
                }

                if (furthest == null)
                    break;

                furthest.ForceDisableByFPS();

                if (!_fpsDisabled.Contains(furthest))
                    _fpsDisabled.Add(furthest);
            }

            return;
        }

        if (fps >= (targetFPS + fpsHysteresis))
        {
            for (int step = 0; step < maxRestorePerStep; step++)
            {
                Shader_LOD_Enumerator nearest = null;
                float nearestDistSqr = float.MaxValue;
                int nearestIndex = -1;

                for (int i = 0; i < _fpsDisabled.Count; i++)
                {
                    Shader_LOD_Enumerator e = _fpsDisabled[i];
                    if (e == null)
                    {
                        nearestIndex = i;
                        nearest = null;
                        break;
                    }

                    if (!e.IsForcedDisabledByFPS)
                        continue;

                    if (IsDeadWorldBlocked(e))
                        continue;

                    Vector3 p = e.transform.position;
                    float dx = p.x - playerTransform.position.x;
                    float dz = p.z - playerTransform.position.z;
                    float distSqr = dx * dx + dz * dz;

                    if (distSqr > e.BlackOnlyThresholdSqr)
                        continue;

                    if (distSqr < nearestDistSqr)
                    {
                        nearestDistSqr = distSqr;
                        nearest = e;
                        nearestIndex = i;
                    }
                }

                if (nearestIndex >= 0 && nearest == null)
                {
                    _fpsDisabled.RemoveAt(nearestIndex);
                    step--;
                    continue;
                }

                if (nearest == null)
                    break;

                nearest.ReleaseFPSDisable();
                _fpsDisabled.RemoveAt(nearestIndex);
            }
        }
    }

    private void ApplyLODResultsScheduledRange()
    {
        int maxLen = distSqrArray.IsCreated ? distSqrArray.Length : 0;
        if (maxLen == 0) return;

        int start = Mathf.Clamp(scheduledStartIndex, 0, maxLen);
        int end = Mathf.Clamp(scheduledStartIndex + scheduledCount, 0, maxLen);

        int enumMax = enumerators.Count;
        if (enumMax == 0) return;
        end = Mathf.Min(end, enumMax);

        for (int i = start; i < end; i++)
        {
            var e = enumerators[i];
            if (e != null)
                e.UpdateLOD(distSqrArray[i], farClipSqr);
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

        currentBatchIndex = 0;
        scheduledStartIndex = 0;
        scheduledCount = 0;
    }

    private void TryUnloadUnusedTextureLODAssets()
    {
        if (!enableTextureLODUnload)
            return;

        if (_textureUnloadInProgress)
            return;

        if (Time.unscaledTime < _nextTextureUnloadTime)
            return;

        if (FPS_Counter.averageFPS > 0.01f && FPS_Counter.averageFPS < textureUnloadMinFPS)
            return;

        _nextTextureUnloadTime = Time.unscaledTime + Mathf.Max(1f, textureUnloadInterval);

        StartCoroutine(UnloadUnusedTextureLODAssetsRoutine());
    }

    private System.Collections.IEnumerator UnloadUnusedTextureLODAssetsRoutine()
    {
        _textureUnloadInProgress = true;

        yield return null;

        var op = Resources.UnloadUnusedAssets();

        while (!op.isDone)
            yield return null;
        print("Textures unloaded!");
        _textureUnloadInProgress = false;
    }

    public void Register(Shader_LOD_Enumerator e)
    {
        if (e == null) return;

        if (!enumerators.Contains(e))
        {
            if (isJobScheduled)
            {
                lodJobHandle.Complete();
                isJobScheduled = false;
            }

            enumerators.Add(e);
            ResizeNativeArrays(enumerators.Count);

            if (playerTransform == null && e.player != null)
                playerTransform = e.player.transform;

            bool allowCommon;
            bool allowNormal;

            switch (deadWorldControl)
            {
                case DeadWorldControlMode.Dead:
                    allowCommon = true;
                    allowNormal = false;
                    break;

                case DeadWorldControlMode.Alive:
                    allowCommon = false;
                    allowNormal = true;
                    break;

                default:
                    allowCommon = true;
                    allowNormal = true;
                    break;
            }

            var isCommon = e.gameObject.layer == deadWorldLayer;
            var allowed = isCommon ? allowCommon : allowNormal;
            e.SetDeadWorldBlocked(!allowed);
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
            _fpsDisabled.Remove(e);
            _predictiveDisabled.Remove(e);
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
            _fpsDisabled.Clear();
            _predictiveDisabled.Clear();

            var found = FindObjectsOfType<Shader_LOD_Enumerator>();
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

        ApplyDeadWorldControlGate();
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

        enumeratorPositions = default(NativeArray<Vector2>);
        distSqrArray = default(NativeArray<float>);

        scheduledStartIndex = 0;
        scheduledCount = 0;
        currentBatchIndex = 0;
    }

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