/* TextureStreamingManager.cs */

using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class TextureStreamingManager : MonoBehaviour
{
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

    [Header("Memory Debug")] public float loadedLowTextureMB;
    public float loadedFullTextureMB;
    public float loadedOtherTextureMB;
    public float loadedTotalTextureMB;

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

    public Texture RequestTexture(string path)
    {
        if (string.IsNullOrEmpty(path))
            return null;

        TextureEntry entry;

        if (!_entries.TryGetValue(path, out entry))
        {
            entry = new TextureEntry();
            entry.path = path;
            entry.refCount = 0;
            entry.lastReleaseTime = -9999f;

            _entries.Add(path, entry);
        }

        entry.refCount++;

        if (entry.texture != null)
            return entry.texture;

        /*
            We queue the load instead of starting it immediately so the Vita does not
            get hit with multiple texture reads/uploads in the same frame.
        */
        if (entry.request == null && !entry.loadFailed)
            if (!_queuedLoads.Contains(path))
            {
                _pendingLoadQueue.Enqueue(path);
                _queuedLoads.Add(path);
            }

        return null;
    }

    public void ReleaseTexture(string path)
    {
        if (string.IsNullOrEmpty(path))
            return;

        TextureEntry entry;

        if (!_entries.TryGetValue(path, out entry))
            return;

        entry.refCount--;

        if (entry.refCount < 0)
            entry.refCount = 0;

        if (entry.refCount == 0)
            entry.lastReleaseTime = Time.unscaledTime;
    }

    public Texture GetLoadedTexture(string path)
    {
        if (string.IsNullOrEmpty(path))
            return null;

        TextureEntry entry;

        if (!_entries.TryGetValue(path, out entry))
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

        TextureEntry entry;

        if (!_entries.TryGetValue(path, out entry))
            return false;

        return entry.request != null;
    }

    public bool IsQueued(string path)
    {
        if (string.IsNullOrEmpty(path))
            return false;

        return _queuedLoads.Contains(path);
    }

    private void StartQueuedRequests()
    {
        var spacing = Mathf.Max(0, framesBetweenNewRequests);

        if (spacing > 0 && Time.frameCount - _lastRequestStartFrame < spacing)
            return;

        while (_pendingLoadQueue.Count > 0)
        {
            var path = _pendingLoadQueue.Dequeue();
            _queuedLoads.Remove(path);

            TextureEntry entry;

            if (!_entries.TryGetValue(path, out entry))
                continue;

            /*
                If all users released this texture before its queued load started,
                we skip it entirely.
            */
            if (entry.refCount <= 0)
                continue;

            if (entry.texture != null || entry.request != null || entry.loadFailed)
                continue;

            entry.request = Resources.LoadAsync<Texture>(path);
            _lastRequestStartFrame = Time.frameCount;
            return;
        }
    }

    private void UpdateAsyncRequests()
    {
        var spacing = Mathf.Max(0, framesBetweenCompletedLoads);

        if (spacing > 0 && Time.frameCount - _lastCompletionFrame < spacing)
            return;

        foreach (var kv in _entries)
        {
            var entry = kv.Value;

            if (entry.request == null)
                continue;

            if (!entry.request.isDone)
                continue;

            var tex = entry.request.asset as Texture;
            entry.request = null;

            if (tex == null)
            {
                entry.loadFailed = true;

                Debug.LogWarning(
                    "TextureStreamingManager failed to load texture from Resources path: " +
                    entry.path
                );

                continue;
            }

            /*
                If it finished after everyone released it, we still keep the texture
                only until the next unused cleanup window.
            */
            entry.texture = tex;
            _lastCompletionFrame = Time.frameCount;
            return;
        }
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

        var removeKeys = new List<string>();

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
            removeKeys.Add(kv.Key);
        }

        for (var i = 0; i < removeKeys.Count; i++)
            _entries.Remove(removeKeys[i]);

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

                if (!string.IsNullOrEmpty(entry.path) && entry.path.EndsWith("_Low"))
                    lowMB += mb;
                else if (!string.IsNullOrEmpty(entry.path) && entry.path.EndsWith("_Full"))
                    fullMB += mb;
                else
                    otherMB += mb;
            }

            if (entry.request != null)
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
        public float lastReleaseTime;
        public bool loadFailed;
        public string path;
        public int refCount;
        public ResourceRequest request;
        public Texture texture;
    }
}