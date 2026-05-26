/* TextureStreamingManager.cs */

using System.Collections;
using System.Collections.Generic;
using System.IO;
using UnityEngine;

public class TextureStreamingManager : MonoBehaviour
{
    [Header("AssetBundle Settings")] public bool useAssetBundles = true;

    [Tooltip("Relative folder under StreamingAssets where texture bundles are stored.")]
    public string assetBundleFolder = "AssetBundles/PSVita";

    [Tooltip("Used when a request path ends with _Low and does not explicitly specify a bundle.")]
    public string defaultLowTextureBundleName = "textures_low";

    [Tooltip("Used when a request path ends with _Full and does not explicitly specify a bundle.")]
    public string defaultHighTextureBundleName = "textures_full";

    [Tooltip("If enabled, old Resources-style paths like Texture/Wall_Full are converted to bundle:asset keys.")]
    public bool convertResourcesStylePathsToBundles = true;

    [Tooltip("If AssetBundle loading fails, optionally fall back to Resources.LoadAsync for testing.")]
    public bool allowResourcesFallback = false;

    [Header("Unload Settings")] public float unusedGraceSeconds = 15f;

    public float unloadUnusedAssetsInterval = 15f;
    public bool allowUnloadUnusedAssets = true;

    [Header("Streaming Frame Spacing")] public int framesBetweenNewRequests = 5;

    public int framesBetweenCompletedLoads = 5;
    public int framesBetweenUnloadPasses = 60;

    [Header("Texture LOD Distance")] public float highTexturePreloadExtraMeters = 1.5f;

    [Header("Debug")] public int loadedTextureCount;

    public int loadingTextureCount;
    public int queuedTextureCount;
    public int referencedTextureCount;
    public int unusedTextureCount;

    [Header("AssetBundle Debug")] public int loadedBundleCount;

    public int loadingBundleCount;
    public int referencedBundleCount;
    public int unusedBundleCount;

    [Header("Memory Debug")] public float loadedLowTextureMB;
    public float loadedFullTextureMB;
    public float loadedOtherTextureMB;
    public float loadedTotalTextureMB;

    private readonly Dictionary<string, BundleEntry> _bundles =
        new Dictionary<string, BundleEntry>(32);

    private readonly Dictionary<string, TextureEntry> _entries =
        new Dictionary<string, TextureEntry>(128);

    private readonly Queue<string> _pendingLoadQueue =
        new Queue<string>(128);

    private readonly HashSet<string> _queuedLoads =
        new HashSet<string>();

    private int _lastCompletionFrame = -999999;

    private int _lastRequestStartFrame = -999999;
    private int _lastUnloadFrame = -999999;

    private float _nextUnloadTime;
    private bool _unloadInProgress;

    public static TextureStreamingManager Instance { get; private set; }

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
        Texture request entry point.

        We keep the old public API so the LOD enumerators do not need to know
        whether textures are coming from Resources or AssetBundles.
    */
    public Texture RequestTexture(string path)
    {
        if (string.IsNullOrEmpty(path))
            return null;

        var resolvedKey = ResolveRequestKey(path);

        TextureEntry entry;

        if (!_entries.TryGetValue(resolvedKey, out entry))
        {
            entry = new TextureEntry();
            entry.originalPath = path;
            entry.key = resolvedKey;
            entry.refCount = 0;
            entry.lastReleaseTime = -9999f;

            ParseTextureKey(entry);

            _entries.Add(resolvedKey, entry);
        }

        entry.refCount++;

        if (useAssetBundles && !string.IsNullOrEmpty(entry.bundleName))
            AddBundleReference(entry.bundleName);

        if (entry.texture != null)
            return entry.texture;

        /*
            We queue the load instead of starting it immediately so the Vita does not
            get hit with multiple texture reads/uploads in the same frame.
        */
        if (entry.resourcesRequest == null && entry.assetRequest == null && !entry.loadFailed)
            if (!_queuedLoads.Contains(resolvedKey))
            {
                _pendingLoadQueue.Enqueue(resolvedKey);
                _queuedLoads.Add(resolvedKey);
            }

        return null;
    }

    public void ReleaseTexture(string path)
    {
        if (string.IsNullOrEmpty(path))
            return;

        var resolvedKey = ResolveRequestKey(path);

        TextureEntry entry;

        if (!_entries.TryGetValue(resolvedKey, out entry))
            return;

        entry.refCount--;

        if (entry.refCount < 0)
            entry.refCount = 0;

        if (useAssetBundles && !string.IsNullOrEmpty(entry.bundleName))
            ReleaseBundleReference(entry.bundleName);

        if (entry.refCount == 0)
            entry.lastReleaseTime = Time.unscaledTime;
    }

    public Texture GetLoadedTexture(string path)
    {
        if (string.IsNullOrEmpty(path))
            return null;

        var resolvedKey = ResolveRequestKey(path);

        TextureEntry entry;

        if (!_entries.TryGetValue(resolvedKey, out entry))
            return null;

        return entry.texture;
    }

    public bool IsLoaded(string path)
    {
        return GetLoadedTexture(path) != null;
    }

    public bool IsLoading(string path)
    {
        if (string.IsNullOrEmpty(path))
            return false;

        var resolvedKey = ResolveRequestKey(path);

        TextureEntry entry;

        if (!_entries.TryGetValue(resolvedKey, out entry))
            return false;

        if (entry.resourcesRequest != null)
            return true;

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

    public bool IsQueued(string path)
    {
        if (string.IsNullOrEmpty(path))
            return false;

        var resolvedKey = ResolveRequestKey(path);

        return _queuedLoads.Contains(resolvedKey);
    }

    /*
        Request key resolver.

        Explicit AssetBundle syntax:
            bundleName:assetName

        Old Resources-style syntax:
            Texture/Wall_Full
            Texture/Wall_Low

        When conversion is enabled, old paths are routed to the default high/low
        bundles while keeping the asset name derived from the file name.
    */
    private string ResolveRequestKey(string path)
    {
        if (string.IsNullOrEmpty(path))
            return string.Empty;

        if (!useAssetBundles)
            return path;

        if (path.IndexOf(":") >= 0)
            return path;

        if (!convertResourcesStylePathsToBundles)
            return path;

        var assetName = GetFileNameWithoutExtensionSafe(path);

        if (assetName.EndsWith("_Full"))
            return defaultHighTextureBundleName + ":" + assetName;

        if (assetName.EndsWith("_Low"))
            return defaultLowTextureBundleName + ":" + assetName;

        return path;
    }

    /*
        Texture key parser.

        If a key contains "bundle:asset", we treat it as an AssetBundle texture.
        Otherwise, it remains a Resources path for fallback/testing.
    */
    private void ParseTextureKey(TextureEntry entry)
    {
        entry.bundleName = null;
        entry.assetName = null;
        entry.resourcesPath = entry.originalPath;

        if (!useAssetBundles)
            return;

        if (string.IsNullOrEmpty(entry.key))
            return;

        var split = entry.key.IndexOf(":");

        if (split < 0)
            return;

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

            TextureEntry entry;

            if (!_entries.TryGetValue(key, out entry))
                continue;

            /*
                If all users released this texture before its queued load started,
                we skip it entirely.
            */
            if (entry.refCount <= 0)
                continue;

            if (entry.texture != null || entry.resourcesRequest != null || entry.assetRequest != null ||
                entry.loadFailed)
                continue;

            if (useAssetBundles && !string.IsNullOrEmpty(entry.bundleName))
            {
                if (StartAssetBundleTextureRequest(entry))
                {
                    _lastRequestStartFrame = Time.frameCount;
                    return;
                }

                if (!allowResourcesFallback)
                {
                    entry.loadFailed = true;
                    return;
                }
            }

            entry.resourcesRequest = Resources.LoadAsync<Texture>(entry.resourcesPath);
            _lastRequestStartFrame = Time.frameCount;
            return;
        }
    }

    /*
        AssetBundle texture request.

        We load the bundle first. Once it is loaded, we resolve the actual asset
        path inside the bundle, then request the texture from that bundle.
    */
    private bool StartAssetBundleTextureRequest(TextureEntry entry)
    {
        var bundle = GetOrCreateBundle(entry.bundleName);

        if (bundle == null)
            return false;

        if (bundle.bundle == null)
        {
            if (bundle.request == null && !bundle.loadFailed)
                StartBundleLoad(bundle);

            /*
                We requeue the texture key so it can start after the bundle finishes.
            */
            if (!_queuedLoads.Contains(entry.key))
            {
                _pendingLoadQueue.Enqueue(entry.key);
                _queuedLoads.Add(entry.key);
            }

            return true;
        }

        var resolvedAssetName = ResolveAssetNameInBundle(bundle, entry.assetName);

        if (string.IsNullOrEmpty(resolvedAssetName))
            /*Debug.LogWarning(
                "TextureStreamingManager could not find asset '" +
                entry.assetName +
                "' in AssetBundle '" +
                entry.bundleName +
                "'."
            );*/
            return false;

        entry.assetRequest = bundle.bundle.LoadAssetAsync<Texture>(resolvedAssetName);
        return true;
    }

    /*
        Bundle load start.

        Bundles are loaded from StreamingAssets so they can ship as loose files
        and be loaded on demand at runtime.
    */
    private void StartBundleLoad(BundleEntry bundle)
    {
        if (bundle == null)
            return;

        if (bundle.bundle != null || bundle.request != null || bundle.loadFailed)
            return;

        var bundlePath = GetBundleFilePath(bundle.bundleName);

        if (!File.Exists(bundlePath))
        {
            bundle.loadFailed = true;

            Debug.LogWarning(
                "TextureStreamingManager could not find AssetBundle file: " +
                bundlePath
            );

            return;
        }

        bundle.request = AssetBundle.LoadFromFileAsync(bundlePath);
    }

    private void UpdateAsyncRequests()
    {
        var spacing = Mathf.Max(0, framesBetweenCompletedLoads);

        if (spacing > 0 && Time.frameCount - _lastCompletionFrame < spacing)
            return;

        if (UpdateOneBundleRequest())
            return;

        if (UpdateOneTextureRequest())
            return;
    }

    /*
        Bundle completion update.

        We complete only one async operation per allowed frame so loading stays
        spread out, which mirrors the original manager behavior.
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

                Debug.LogWarning(
                    "TextureStreamingManager failed to load AssetBundle: " +
                    bundle.bundleName
                );
            }
            else
            {
                bundle.assetNames = bundle.bundle.GetAllAssetNames();
            }

            _lastCompletionFrame = Time.frameCount;
            return true;
        }

        return false;
    }

    /*
        Texture completion update.

        We support both AssetBundleRequest and ResourceRequest so the same manager
        can be tested during migration.
    */
    private bool UpdateOneTextureRequest()
    {
        foreach (var kv in _entries)
        {
            var entry = kv.Value;

            if (entry.assetRequest != null)
            {
                if (!entry.assetRequest.isDone)
                    continue;

                var tex = entry.assetRequest.asset as Texture;
                entry.assetRequest = null;

                if (tex == null)
                {
                    entry.loadFailed = true;

                    /*Debug.LogWarning(
                        "TextureStreamingManager failed to load texture asset: " +
                        entry.key
                    );*/

                    _lastCompletionFrame = Time.frameCount;
                    return true;
                }

                /*
                    If it finished after everyone released it, we still keep the texture
                    only until the next unused cleanup window.
                */
                entry.texture = tex;
                _lastCompletionFrame = Time.frameCount;
                return true;
            }

            if (entry.resourcesRequest != null)
            {
                if (!entry.resourcesRequest.isDone)
                    continue;

                var tex = entry.resourcesRequest.asset as Texture;
                entry.resourcesRequest = null;

                if (tex == null)
                {
                    entry.loadFailed = true;

                    /*Debug.LogWarning(
                        "TextureStreamingManager failed to load texture from Resources path: " +
                        entry.resourcesPath
                    );*/

                    _lastCompletionFrame = Time.frameCount;
                    return true;
                }

                /*
                    If it finished after everyone released it, we still keep the texture
                    only until the next unused cleanup window.
                */
                entry.texture = tex;
                _lastCompletionFrame = Time.frameCount;
                return true;
            }
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
            assets/textures/school/wall_full.png

        The manager requests:
            Wall_Full

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

    private static string GetFileNameWithoutExtensionSafe(string path)
    {
        if (string.IsNullOrEmpty(path))
            return string.Empty;

        path = path.Replace("\\", "/");

        var slash = path.LastIndexOf("/");

        var file = slash >= 0 ? path.Substring(slash + 1) : path;

        var dot = file.LastIndexOf(".");

        if (dot >= 0)
            file = file.Substring(0, dot);

        return file;
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

            if (entry.texture == null)
                continue;

            if (Time.unscaledTime - entry.lastReleaseTime < unusedGraceSeconds)
                continue;

            hasCandidate = true;
            break;
        }

        if (!hasCandidate)
            foreach (var kv in _bundles)
            {
                var bundle = kv.Value;

                if (bundle.refCount > 0)
                    continue;

                if (bundle.bundle == null)
                    continue;

                if (Time.unscaledTime - bundle.lastReleaseTime < unusedGraceSeconds)
                    continue;

                hasCandidate = true;
                break;
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

        var removeTextureKeys = new List<string>();

        foreach (var kv in _entries)
        {
            var entry = kv.Value;

            if (entry.refCount > 0)
                continue;

            if (entry.texture == null)
                continue;

            if (Time.unscaledTime - entry.lastReleaseTime < unusedGraceSeconds)
                continue;

            /*
                We remove our managed reference first. Unity can then reclaim the
                actual texture memory if no material/property block still references it.
            */
            entry.texture = null;
            removeTextureKeys.Add(kv.Key);
        }

        for (var i = 0; i < removeTextureKeys.Count; i++)
            _entries.Remove(removeTextureKeys[i]);

        var removeBundleKeys = new List<string>();

        foreach (var kv in _bundles)
        {
            var bundle = kv.Value;

            if (bundle.refCount > 0)
                continue;

            if (bundle.bundle == null)
                continue;

            if (Time.unscaledTime - bundle.lastReleaseTime < unusedGraceSeconds)
                continue;

            /*
                Unload(false) unloads the bundle container but keeps loaded assets
                alive if something else still references them.
            */
            bundle.bundle.Unload(false);
            bundle.bundle = null;
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

    private void UpdateDebugCounts()
    {
        var loaded = 0;
        var loading = 0;
        var referenced = 0;
        var unused = 0;

        var lowMB = 0f;
        var fullMB = 0f;
        var otherMB = 0f;

        foreach (var kv in _entries)
        {
            var entry = kv.Value;

            if (entry.texture != null)
            {
                loaded++;

                var mb = EstimateTextureMB(entry.texture);

                if (!string.IsNullOrEmpty(entry.key) && entry.key.EndsWith("_Low"))
                    lowMB += mb;
                else if (!string.IsNullOrEmpty(entry.key) && entry.key.EndsWith("_Full"))
                    fullMB += mb;
                else
                    otherMB += mb;
            }

            if (entry.resourcesRequest != null || entry.assetRequest != null)
                loading++;

            if (entry.refCount > 0)
                referenced++;
            else if (entry.texture != null)
                unused++;
        }

        loadedTextureCount = loaded;
        loadingTextureCount = loading;
        queuedTextureCount = _queuedLoads.Count;
        referencedTextureCount = referenced;
        unusedTextureCount = unused;

        loadedLowTextureMB = lowMB;
        loadedFullTextureMB = fullMB;
        loadedOtherTextureMB = otherMB;
        loadedTotalTextureMB = lowMB + fullMB + otherMB;

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

    private static float EstimateTextureMB(Texture tex)
    {
        if (tex == null)
            return 0f;

        var t2d = tex as Texture2D;
        if (t2d == null)
            return 0f;

        var width = t2d.width;
        var height = t2d.height;

        var bytesPerPixel = 4f;

        switch (t2d.format)
        {
            case TextureFormat.DXT1:
                bytesPerPixel = 0.5f;
                break;

            case TextureFormat.DXT5:
                bytesPerPixel = 1f;
                break;

            case TextureFormat.RGB565:
            case TextureFormat.RGBA4444:
            case TextureFormat.ARGB4444:
                bytesPerPixel = 2f;
                break;

            case TextureFormat.RGB24:
                bytesPerPixel = 3f;
                break;

            case TextureFormat.ARGB32:
            case TextureFormat.RGBA32:
            case TextureFormat.BGRA32:
                bytesPerPixel = 4f;
                break;
        }

        var bytes = width * height * bytesPerPixel;

        /*
            We add roughly 33% for mipmaps.
        */
        if (t2d.mipmapCount > 1)
            bytes *= 1.333f;

        return bytes / (1024f * 1024f);
    }

    private class TextureEntry
    {
        public string assetName;
        public AssetBundleRequest assetRequest;

        public string bundleName;
        public string key;

        public float lastReleaseTime;
        public bool loadFailed;
        public string originalPath;
        public int refCount;

        public string resourcesPath;

        public ResourceRequest resourcesRequest;

        public Texture texture;
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