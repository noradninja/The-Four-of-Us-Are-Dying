/* VitaMeshStreamingManager.cs */

using System.Collections;
using System.Collections.Generic;
using System.IO;
using UnityEngine;

public class VitaMeshStreamingManager : MonoBehaviour
{
    [Header("AssetBundle Settings")] public bool useAssetBundles = true;

    [Tooltip("Relative folder under StreamingAssets where mesh bundles are stored.")]
    public string assetBundleFolder = "AssetBundles/PSVita";

    [Tooltip("If enabled, a mesh request can retry after a previous failed load. Useful while iterating on bundles.")]
    public bool retryFailedLoadsOnNewRequest = true;

    [Header("Unload Settings")] public float unusedGraceSeconds = 20f;

    public float unloadUnusedAssetsInterval = 20f;
    public bool allowUnloadUnusedAssets = true;

    [Header("Streaming Frame Spacing")] public int framesBetweenNewRequests = 5;

    public int framesBetweenCompletedLoads = 5;
    public int framesBetweenUnloadPasses = 90;

    [Header("Debug")] public int loadedMeshCount;

    public int loadingMeshCount;
    public int queuedMeshCount;
    public int referencedMeshCount;
    public int unusedMeshCount;

    [Header("AssetBundle Debug")] public int loadedBundleCount;

    public int loadingBundleCount;
    public int referencedBundleCount;
    public int unusedBundleCount;

    [Header("Mesh Memory Debug")] public int loadedVertexCount;

    public int loadedTriangleCount;
    public float estimatedMeshMB;

    private readonly Dictionary<string, BundleEntry> _bundles =
        new Dictionary<string, BundleEntry>(32);

    private readonly Dictionary<string, MeshEntry> _entries =
        new Dictionary<string, MeshEntry>(128);

    private readonly Queue<string> _pendingLoadQueue =
        new Queue<string>(128);

    private readonly HashSet<string> _queuedLoads =
        new HashSet<string>();

    private int _lastCompletionFrame = -999999;
    private int _lastRequestStartFrame = -999999;
    private int _lastUnloadFrame = -999999;

    private float _nextUnloadTime;
    private bool _unloadInProgress;

    public static VitaMeshStreamingManager Instance { get; private set; }

    private void Awake()
    {
        if (Instance != null && Instance != this)
        {
            Destroy(gameObject);
            return;
        }

        Instance = this;
    }

    private void Update()
    {
        StartQueuedRequests();
        UpdateAsyncRequests();
        UpdateDebugCounts();
        TryUnloadUnusedAssets();
    }

    /*
        Mesh request entry point.

        We use explicit AssetBundle keys:
            schoolhouse_meshes:Schoolhouse_Wall_01

        The manager owns the loaded Mesh reference until all users release it.
    */
    public Mesh RequestMesh(string key)
    {
        if (string.IsNullOrEmpty(key))
            return null;

        MeshEntry entry;

        if (!_entries.TryGetValue(key, out entry))
        {
            entry = new MeshEntry();
            entry.key = key;
            entry.refCount = 0;
            entry.lastReleaseTime = -9999f;

            ParseMeshKey(entry);

            _entries.Add(key, entry);
        }
        else
        {
            /*
                If a previous request failed, we allow a later fresh request to retry.
                This is important while iterating on bundles in the editor.
            */
            if (retryFailedLoadsOnNewRequest && entry.loadFailed && entry.refCount == 0)
            {
                entry.loadFailed = false;
                entry.assetRequest = null;
            }
        }

        entry.refCount++;

        if (useAssetBundles && !string.IsNullOrEmpty(entry.bundleName))
            AddBundleReference(entry.bundleName);

        if (entry.mesh != null)
            return entry.mesh;

        /*
            We queue the load instead of starting it immediately so the Vita does not
            get hit with multiple bundle reads/uploads in the same frame.
        */
        if (entry.assetRequest == null && !entry.loadFailed)
            QueueMeshLoad(key);

        return null;
    }

    public void ReleaseMesh(string key)
    {
        if (string.IsNullOrEmpty(key))
            return;

        MeshEntry entry;

        if (!_entries.TryGetValue(key, out entry))
            return;

        entry.refCount--;

        if (entry.refCount < 0)
            entry.refCount = 0;

        if (useAssetBundles && !string.IsNullOrEmpty(entry.bundleName))
            ReleaseBundleReference(entry.bundleName);

        if (entry.refCount == 0)
            entry.lastReleaseTime = Time.unscaledTime;
    }

    public Mesh GetLoadedMesh(string key)
    {
        if (string.IsNullOrEmpty(key))
            return null;

        MeshEntry entry;

        if (!_entries.TryGetValue(key, out entry))
            return null;

        return entry.mesh;
    }

    public bool IsLoaded(string key)
    {
        return GetLoadedMesh(key) != null;
    }

    public bool IsLoading(string key)
    {
        if (string.IsNullOrEmpty(key))
            return false;

        MeshEntry entry;

        if (!_entries.TryGetValue(key, out entry))
            return false;

        if (entry.assetRequest != null)
            return true;

        if (!string.IsNullOrEmpty(entry.bundleName))
        {
            BundleEntry bundle;

            if (_bundles.TryGetValue(entry.bundleName, out bundle))
                return bundle.request != null;
        }

        return false;
    }

    public bool IsQueued(string key)
    {
        if (string.IsNullOrEmpty(key))
            return false;

        return _queuedLoads.Contains(key);
    }

    /*
        Mesh request debug status.

        This gives the enumerator a readable summary of the manager-side state for
        the active mesh key, so we can tell whether the request is queued, loading,
        failed, missing from the bundle, or actually loaded.
    */
    public string GetMeshDebugStatus(string key)
    {
        if (string.IsNullOrEmpty(key))
            return "No mesh key.";

        MeshEntry entry;

        if (!_entries.TryGetValue(key, out entry))
            return "No MeshEntry exists for key: " + key;

        var status =
            "MeshEntry key=" + key +
            " refCount=" + entry.refCount +
            " hasMesh=" + (entry.mesh != null) +
            " hasAssetRequest=" + (entry.assetRequest != null) +
            " loadFailed=" + entry.loadFailed +
            " bundleName=" + entry.bundleName +
            " assetName=" + entry.assetName +
            " queued=" + _queuedLoads.Contains(key);

        if (!string.IsNullOrEmpty(entry.bundleName))
        {
            BundleEntry bundle;

            if (_bundles.TryGetValue(entry.bundleName, out bundle))
            {
                status +=
                    " | Bundle refCount=" + bundle.refCount +
                    " hasBundle=" + (bundle.bundle != null) +
                    " hasBundleRequest=" + (bundle.request != null) +
                    " bundleFailed=" + bundle.loadFailed;

                if (bundle.assetNames != null)
                    status += " assetCount=" + bundle.assetNames.Length;
            }
            else
            {
                status += " | No BundleEntry exists.";
            }
        }

        return status;
    }

    /*
        Mesh load queue helper.

        We centralize queue insertion so stale requests cannot accidentally create
        duplicate queue entries.
    */
    private void QueueMeshLoad(string key)
    {
        if (string.IsNullOrEmpty(key))
            return;

        if (_queuedLoads.Contains(key))
            return;

        _pendingLoadQueue.Enqueue(key);
        _queuedLoads.Add(key);
    }

    /*
        Mesh key parser.

        Expected:
            bundleName:assetName
    */
    private void ParseMeshKey(MeshEntry entry)
    {
        entry.bundleName = null;
        entry.assetName = null;

        if (!useAssetBundles)
            return;

        if (string.IsNullOrEmpty(entry.key))
            return;

        var split = entry.key.IndexOf(":");

        if (split < 0)
        {
            Debug.LogWarning(
                "VitaMeshStreamingManager expected mesh key in bundle:asset format, got: " +
                entry.key
            );

            return;
        }

        entry.bundleName = entry.key.Substring(0, split);
        entry.assetName = entry.key.Substring(split + 1);

        if (string.IsNullOrEmpty(entry.bundleName) || string.IsNullOrEmpty(entry.assetName))
        {
            entry.bundleName = null;
            entry.assetName = null;
        }
    }

    private void StartQueuedRequests()
    {
        var spacing = Mathf.Max(0, framesBetweenNewRequests);

        if (spacing > 0 && Time.frameCount - _lastRequestStartFrame < spacing)
            return;

        while (_pendingLoadQueue.Count > 0)
        {
            var key = _pendingLoadQueue.Dequeue();
            _queuedLoads.Remove(key);

            MeshEntry entry;

            if (!_entries.TryGetValue(key, out entry))
                continue;

            /*
                If all users released this mesh before its queued load started,
                we skip it entirely.
            */
            if (entry.refCount <= 0)
                continue;

            if (entry.mesh != null || entry.assetRequest != null)
                continue;

            if (entry.loadFailed)
                continue;

            if (useAssetBundles && !string.IsNullOrEmpty(entry.bundleName))
            {
                if (StartAssetBundleMeshRequest(entry))
                {
                    _lastRequestStartFrame = Time.frameCount;
                    return;
                }

                entry.loadFailed = true;
                entry.lastReleaseTime = Time.unscaledTime;

                Debug.LogWarning(
                    "VitaMeshStreamingManager failed to start mesh request: " +
                    entry.key
                );

                return;
            }

            entry.loadFailed = true;
            entry.lastReleaseTime = Time.unscaledTime;

            Debug.LogWarning(
                "VitaMeshStreamingManager only supports AssetBundle mesh loading in this pass. Failed key: " +
                entry.key
            );

            return;
        }
    }

    /*
        AssetBundle mesh request.

        We load the bundle first. Once loaded, we resolve the asset name inside the
        bundle and request the Mesh asset from that bundle.
    */
    private bool StartAssetBundleMeshRequest(MeshEntry entry)
    {
        if (entry == null)
            return false;

        var bundle = GetOrCreateBundle(entry.bundleName);

        if (bundle == null)
            return false;

        if (bundle.loadFailed)
            return false;

        if (bundle.bundle == null)
        {
            if (bundle.request == null)
                if (!StartBundleLoad(bundle))
                    return false;

            /*
                We requeue the mesh key so it can start after the bundle finishes.
                This only happens while the bundle request is genuinely in flight.
            */
            QueueMeshLoad(entry.key);

            return true;
        }

        var resolvedAssetName = ResolveAssetNameInBundle(bundle, entry.assetName);

        if (string.IsNullOrEmpty(resolvedAssetName))
        {
            Debug.LogWarning(
                "VitaMeshStreamingManager could not find mesh asset '" +
                entry.assetName +
                "' in AssetBundle '" +
                entry.bundleName +
                "'."
            );

            return false;
        }

        entry.assetRequest = bundle.bundle.LoadAssetAsync<Mesh>(resolvedAssetName);
        return true;
    }

    /*
        Bundle load start.

        Bundles are loaded from StreamingAssets so they can ship as loose files
        and be loaded on demand at runtime.
    */
    private bool StartBundleLoad(BundleEntry bundle)
    {
        if (bundle == null)
            return false;

        if (bundle.bundle != null || bundle.request != null)
            return true;

        if (bundle.loadFailed)
            return false;

        var bundlePath = GetBundleFilePath(bundle.bundleName);

        if (!File.Exists(bundlePath))
        {
            bundle.loadFailed = true;
            bundle.lastReleaseTime = Time.unscaledTime;

            Debug.LogWarning(
                "VitaMeshStreamingManager could not find AssetBundle file: " +
                bundlePath
            );

            return false;
        }

        bundle.request = AssetBundle.LoadFromFileAsync(bundlePath);
        return true;
    }

    private void UpdateAsyncRequests()
    {
        var spacing = Mathf.Max(0, framesBetweenCompletedLoads);

        if (spacing > 0 && Time.frameCount - _lastCompletionFrame < spacing)
            return;

        if (UpdateOneBundleRequest())
            return;

        if (UpdateOneMeshRequest())
            return;
    }

    /*
        Bundle completion update.

        We complete only one async operation per allowed frame so loading stays
        spread out, which mirrors the texture streaming manager behavior.
    */
    private bool UpdateOneBundleRequest()
    {
        foreach (var kv in _bundles)
        {
            var bundle = kv.Value;

            if (bundle.request == null)
                continue;

            if (!bundle.request.isDone)
                continue;

            bundle.bundle = bundle.request.assetBundle;
            bundle.request = null;

            if (bundle.bundle == null)
            {
                bundle.loadFailed = true;
                bundle.lastReleaseTime = Time.unscaledTime;

                Debug.LogWarning(
                    "VitaMeshStreamingManager failed to load AssetBundle: " +
                    bundle.bundleName
                );
            }
            else
            {
                bundle.loadFailed = false;
                bundle.assetNames = bundle.bundle.GetAllAssetNames();
            }

            _lastCompletionFrame = Time.frameCount;
            return true;
        }

        return false;
    }

    /*
        Mesh completion update.

        When the mesh finishes loading, we store it until all referencing
        enumerators release interest.
    */
    private bool UpdateOneMeshRequest()
    {
        foreach (var kv in _entries)
        {
            var entry = kv.Value;

            if (entry.assetRequest == null)
                continue;

            if (!entry.assetRequest.isDone)
                continue;

            var mesh = entry.assetRequest.asset as Mesh;
            entry.assetRequest = null;

            if (mesh == null)
            {
                entry.loadFailed = true;
                entry.lastReleaseTime = Time.unscaledTime;

                Debug.LogWarning(
                    "VitaMeshStreamingManager failed to load mesh asset: " +
                    entry.key
                );

                _lastCompletionFrame = Time.frameCount;
                return true;
            }

            /*
                If it finished after everyone released it, we still keep the mesh
                only until the next unused cleanup window.
            */
            entry.mesh = mesh;
            entry.loadFailed = false;
            _lastCompletionFrame = Time.frameCount;
            return true;
        }

        return false;
    }

    private BundleEntry GetOrCreateBundle(string bundleName)
    {
        if (string.IsNullOrEmpty(bundleName))
            return null;

        BundleEntry bundle;

        if (_bundles.TryGetValue(bundleName, out bundle))
            return bundle;

        bundle = new BundleEntry();
        bundle.bundleName = bundleName;
        bundle.refCount = 0;
        bundle.lastReleaseTime = -9999f;

        _bundles.Add(bundleName, bundle);

        return bundle;
    }

    private void AddBundleReference(string bundleName)
    {
        var bundle = GetOrCreateBundle(bundleName);

        if (bundle == null)
            return;

        bundle.refCount++;
    }

    private void ReleaseBundleReference(string bundleName)
    {
        if (string.IsNullOrEmpty(bundleName))
            return;

        BundleEntry bundle;

        if (!_bundles.TryGetValue(bundleName, out bundle))
            return;

        bundle.refCount--;

        if (bundle.refCount < 0)
            bundle.refCount = 0;

        if (bundle.refCount == 0)
            bundle.lastReleaseTime = Time.unscaledTime;
    }

    /*
        Bundle asset-name resolver.

        Unity often stores AssetBundle asset names as full project paths such as:
            assets/generated/vitameshstreaming/schoolhouse/wall_01.asset

        The manager requests:
            Wall_01

        So we search the bundle names and match by filename without extension.
    */
    private string ResolveAssetNameInBundle(BundleEntry bundle, string requestedName)
    {
        if (bundle == null || string.IsNullOrEmpty(requestedName))
            return null;

        if (bundle.assetNameLookup == null)
            BuildAssetNameLookup(bundle);

        string resolved;

        if (bundle.assetNameLookup.TryGetValue(requestedName.ToLowerInvariant(), out resolved))
            return resolved;

        return null;
    }

    private void BuildAssetNameLookup(BundleEntry bundle)
    {
        bundle.assetNameLookup = new Dictionary<string, string>();

        if (bundle.assetNames == null)
            return;

        for (var i = 0; i < bundle.assetNames.Length; i++)
        {
            var fullName = bundle.assetNames[i];

            if (string.IsNullOrEmpty(fullName))
                continue;

            var fileName = Path.GetFileNameWithoutExtension(fullName);

            if (string.IsNullOrEmpty(fileName))
                continue;

            var key = fileName.ToLowerInvariant();

            if (!bundle.assetNameLookup.ContainsKey(key))
                bundle.assetNameLookup.Add(key, fullName);
        }
    }

    private string GetBundleFilePath(string bundleName)
    {
        var root = Application.streamingAssetsPath;

        if (!string.IsNullOrEmpty(assetBundleFolder))
            root = Path.Combine(root, assetBundleFolder);

        return Path.Combine(root, bundleName);
    }

    private void TryUnloadUnusedAssets()
    {
        if (!allowUnloadUnusedAssets)
            return;

        if (_unloadInProgress)
            return;

        var frameSpacing = Mathf.Max(0, framesBetweenUnloadPasses);

        if (frameSpacing > 0 && Time.frameCount - _lastUnloadFrame < frameSpacing)
            return;

        if (Time.unscaledTime < _nextUnloadTime)
            return;

        var hasCandidate = false;

        foreach (var kv in _entries)
        {
            var entry = kv.Value;

            if (entry.refCount > 0)
                continue;

            if (Time.unscaledTime - entry.lastReleaseTime < unusedGraceSeconds)
                continue;

            if (entry.mesh != null || entry.assetRequest != null || entry.loadFailed)
            {
                hasCandidate = true;
                break;
            }
        }

        if (!hasCandidate)
            foreach (var kv in _bundles)
            {
                var bundle = kv.Value;

                if (bundle.refCount > 0)
                    continue;

                if (Time.unscaledTime - bundle.lastReleaseTime < unusedGraceSeconds)
                    continue;

                if (bundle.bundle != null || bundle.request != null || bundle.loadFailed)
                {
                    hasCandidate = true;
                    break;
                }
            }

        if (!hasCandidate)
        {
            _nextUnloadTime = Time.unscaledTime + Mathf.Max(1f, unloadUnusedAssetsInterval);
            return;
        }

        _lastUnloadFrame = Time.frameCount;
        StartCoroutine(UnloadUnusedRoutine());
    }

    private IEnumerator UnloadUnusedRoutine()
    {
        _unloadInProgress = true;

        var removeMeshKeys = new List<string>();

        foreach (var kv in _entries)
        {
            var entry = kv.Value;

            if (entry.refCount > 0)
                continue;

            if (Time.unscaledTime - entry.lastReleaseTime < unusedGraceSeconds)
                continue;

            /*
                We remove our managed reference first. Unity can then reclaim the
                actual mesh memory if no MeshFilter or SkinnedMeshRenderer still
                references it. Failed or stale entries are also removed here so
                later requests can recreate clean state.
            */
            entry.mesh = null;
            entry.assetRequest = null;
            removeMeshKeys.Add(kv.Key);
        }

        for (var i = 0; i < removeMeshKeys.Count; i++)
        {
            _queuedLoads.Remove(removeMeshKeys[i]);
            _entries.Remove(removeMeshKeys[i]);
        }

        var removeBundleKeys = new List<string>();

        foreach (var kv in _bundles)
        {
            var bundle = kv.Value;

            if (bundle.refCount > 0)
                continue;

            if (Time.unscaledTime - bundle.lastReleaseTime < unusedGraceSeconds)
                continue;

            if (bundle.bundle != null)
                /*
                    Unload(false) unloads the bundle container but keeps loaded mesh
                    assets alive if something else still references them.
                */
                bundle.bundle.Unload(false);

            bundle.bundle = null;
            bundle.request = null;
            bundle.assetNames = null;
            bundle.assetNameLookup = null;

            removeBundleKeys.Add(kv.Key);
        }

        for (var j = 0; j < removeBundleKeys.Count; j++)
            _bundles.Remove(removeBundleKeys[j]);

        yield return null;

        var op = Resources.UnloadUnusedAssets();

        while (!op.isDone)
            yield return null;

        _nextUnloadTime = Time.unscaledTime + Mathf.Max(1f, unloadUnusedAssetsInterval);
        _unloadInProgress = false;
    }

    /*
        Debug counter update.

        We avoid accessing CPU-side mesh arrays such as triangles, normals, tangents,
        colors, and UVs because imported meshes may have Read/Write disabled. Runtime
        streaming does not need those arrays, so debug stats should not require them.
    */
    private void UpdateDebugCounts()
    {
        var loaded = 0;
        var loading = 0;
        var referenced = 0;
        var unused = 0;

        var vertices = 0;
        var triangles = 0;
        var estimatedBytes = 0f;

        foreach (var kv in _entries)
        {
            var entry = kv.Value;

            if (entry.mesh != null)
            {
                loaded++;

                vertices += entry.mesh.vertexCount;
                triangles += EstimateTriangleCountSafe(entry.mesh);
                estimatedBytes += EstimateMeshBytesSafe(entry.mesh);
            }

            if (entry.assetRequest != null)
                loading++;

            if (entry.refCount > 0)
                referenced++;
            else if (entry.mesh != null)
                unused++;
        }

        loadedMeshCount = loaded;
        loadingMeshCount = loading;
        queuedMeshCount = _queuedLoads.Count;
        referencedMeshCount = referenced;
        unusedMeshCount = unused;

        loadedVertexCount = vertices;
        loadedTriangleCount = triangles;
        estimatedMeshMB = estimatedBytes / (1024f * 1024f);

        var bundlesLoaded = 0;
        var bundlesLoading = 0;
        var bundlesReferenced = 0;
        var bundlesUnused = 0;

        foreach (var kv in _bundles)
        {
            var bundle = kv.Value;

            if (bundle.bundle != null)
                bundlesLoaded++;

            if (bundle.request != null)
                bundlesLoading++;

            if (bundle.refCount > 0)
                bundlesReferenced++;
            else if (bundle.bundle != null)
                bundlesUnused++;
        }

        loadedBundleCount = bundlesLoaded;
        loadingBundleCount = bundlesLoading;
        referencedBundleCount = bundlesReferenced;
        unusedBundleCount = bundlesUnused;
    }

    /*
        Safe triangle counter.

        We use Mesh.GetIndexCount instead of mesh.triangles so debug counting works
        even when Read/Write is disabled on imported meshes.
    */
    private static int EstimateTriangleCountSafe(Mesh mesh)
    {
        if (mesh == null)
            return 0;

        var indexCount = 0;

        for (var i = 0; i < mesh.subMeshCount; i++)
            indexCount += (int)mesh.GetIndexCount(i);

        return indexCount / 3;
    }

    /*
        Safe mesh memory estimator.

        This intentionally avoids accessing CPU-readable mesh arrays. It estimates
        memory from vertex count and index count only, so it works with Read/Write
        disabled meshes.
    */
    private static float EstimateMeshBytesSafe(Mesh mesh)
    {
        if (mesh == null)
            return 0f;

        var vertexCount = mesh.vertexCount;

        var indexCount = 0;

        for (var i = 0; i < mesh.subMeshCount; i++)
            indexCount += (int)mesh.GetIndexCount(i);

        /*
            We use a conservative approximate vertex size. Most of our meshes have
            position, normal, tangent, uv, and maybe color/extra uv data. This is not
            exact, but it is good enough for relative streaming debug.
        */
        const float ApproxBytesPerVertex = 56f;

        var vertexBytes = vertexCount * ApproxBytesPerVertex;

        /*
            Vita-era content should usually fit 16-bit indices, but we estimate high
            using 32-bit indices so the debug number errs on the safe side.
        */
        var indexBytes = indexCount * 4f;

        return vertexBytes + indexBytes;
    }

    private class MeshEntry
    {
        public string assetName;

        public AssetBundleRequest assetRequest;

        public string bundleName;
        public string key;

        public float lastReleaseTime;
        public bool loadFailed;

        public Mesh mesh;
        public int refCount;
    }

    private class BundleEntry
    {
        public Dictionary<string, string> assetNameLookup;

        public string[] assetNames;
        public AssetBundle bundle;
        public string bundleName;
        public float lastReleaseTime;
        public bool loadFailed;

        public int refCount;

        public AssetBundleCreateRequest request;
    }
}