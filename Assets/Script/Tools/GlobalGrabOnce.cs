using UnityEngine;
using UnityEngine.Rendering;

[RequireComponent(typeof(Camera))]
public class GlobalGrabOnce : MonoBehaviour
{
    [Header("Global Texture A (e.g. AfterForwardOpaque)")]
    public string globalTextureNameA = "_GlobalGrabTexture";
    public CameraEvent copyEventA = CameraEvent.AfterForwardOpaque;
    public GrabResolution resolutionA = GrabResolution.Full;

    [Header("Global Texture B (e.g. After Everything)")]
    public string globalTextureNameB = "_GlobalGrabTextureAfterAll";
    public CameraEvent copyEventB = CameraEvent.BeforeImageEffects;
    public GrabResolution resolutionB = GrabResolution.Full;

    public FilterMode filterMode = FilterMode.Bilinear;

    public enum GrabResolution
    {
        Full,   // 1
        Half,   // 2
        Quarter // 4
    }

    Camera _cam;

    CommandBuffer _cbA;
    CommandBuffer _cbB;

    RenderTexture _rtA;
    RenderTexture _rtB;

    int _wA, _hA;
    int _wB, _hB;

    void OnEnable()
    {
        _cam = GetComponent<Camera>();
        CreateOrResizeRTs();
        BuildCommandBuffers();
    }

    void OnDisable()
    {
        Cleanup();
    }

    void Update()
    {
        CreateOrResizeRTs();
    }

    int GetDivisor(GrabResolution res)
    {
        switch (res)
        {
            default:
            case GrabResolution.Full: return 1;
            case GrabResolution.Half: return 2;
            case GrabResolution.Quarter: return 4;
        }
    }

    void CreateOrResizeRTs()
    {
        if (_cam == null) return;

        CreateOrResizeSingle(
            resolutionA,
            ref _rtA,
            ref _wA,
            ref _hA,
            globalTextureNameA,
            "GlobalGrabOnceRT_A"
        );

        CreateOrResizeSingle(
            resolutionB,
            ref _rtB,
            ref _wB,
            ref _hB,
            globalTextureNameB,
            "GlobalGrabOnceRT_B"
        );

        // If command buffers already exist, rebuild to bind new RTs
        if (_cbA != null || _cbB != null)
            BuildCommandBuffers();
    }

    void CreateOrResizeSingle(
        GrabResolution resolution,
        ref RenderTexture rt,
        ref int wCache,
        ref int hCache,
        string globalName,
        string debugName
    )
    {
        int div = GetDivisor(resolution);
        int w = Mathf.Max(1, _cam.pixelWidth / div);
        int h = Mathf.Max(1, _cam.pixelHeight / div);

        if (rt != null && w == wCache && h == hCache)
            return;

        wCache = w;
        hCache = h;

        if (rt != null)
        {
            rt.Release();
            DestroyImmediate(rt);
        }

        rt = new RenderTexture(w, h, 0, RenderTextureFormat.ARGB32, RenderTextureReadWrite.Default);
        rt.name = debugName;
        rt.filterMode = filterMode;
        rt.wrapMode = TextureWrapMode.Clamp;
        rt.useMipMap = false;
        rt.autoGenerateMips = false;
        rt.Create();

        Shader.SetGlobalTexture(globalName, rt);
        Shader.SetGlobalVector(globalName + "_TexelSize",
            new Vector4(1f / w, 1f / h, w, h));
    }

    void BuildCommandBuffers()
    {
        if (_cam == null || _rtA == null || _rtB == null)
            return;

        // Remove old
        if (_cbA != null)
        {
            _cam.RemoveCommandBuffer(copyEventA, _cbA);
            _cbA.Release();
        }

        if (_cbB != null)
        {
            _cam.RemoveCommandBuffer(copyEventB, _cbB);
            _cbB.Release();
        }

        // A
        _cbA = new CommandBuffer();
        _cbA.name = "GlobalGrabOnce Copy A";
        _cbA.Blit(BuiltinRenderTextureType.CurrentActive, _rtA);
        _cam.AddCommandBuffer(copyEventA, _cbA);

        // B
        _cbB = new CommandBuffer();
        _cbB.name = "GlobalGrabOnce Copy B";
        _cbB.Blit(BuiltinRenderTextureType.CurrentActive, _rtB);
        _cam.AddCommandBuffer(copyEventB, _cbB);

        // Refresh globals
        Shader.SetGlobalTexture(globalTextureNameA, _rtA);
        Shader.SetGlobalTexture(globalTextureNameB, _rtB);

        Shader.SetGlobalVector(globalTextureNameA + "_TexelSize",
            new Vector4(1f / _wA, 1f / _hA, _wA, _hA));

        Shader.SetGlobalVector(globalTextureNameB + "_TexelSize",
            new Vector4(1f / _wB, 1f / _hB, _wB, _hB));
    }

    void Cleanup()
    {
        if (_cam != null)
        {
            if (_cbA != null) _cam.RemoveCommandBuffer(copyEventA, _cbA);
            if (_cbB != null) _cam.RemoveCommandBuffer(copyEventB, _cbB);
        }

        if (_cbA != null)
        {
            _cbA.Release();
            _cbA = null;
        }

        if (_cbB != null)
        {
            _cbB.Release();
            _cbB = null;
        }

        if (_rtA != null)
        {
            _rtA.Release();
            DestroyImmediate(_rtA);
            _rtA = null;
        }

        if (_rtB != null)
        {
            _rtB.Release();
            DestroyImmediate(_rtB);
            _rtB = null;
        }
    }
}
