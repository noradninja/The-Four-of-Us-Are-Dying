using UnityEngine;
using UnityEngine.Rendering;

[RequireComponent(typeof(Camera))]
public class GlobalGrabOnce : MonoBehaviour
{
    public enum GrabResolution
    {
        Full, // 1
        Half, // 2
        Quarter // 4
    }

    [Header("Global Texture A (e.g. AfterForwardOpaque)")]
    public string globalTextureNameA = "_GlobalGrabTexture";

    public CameraEvent copyEventA = CameraEvent.AfterForwardOpaque;
    public GrabResolution resolutionA = GrabResolution.Full;

    [Header("Global Texture B (e.g. After Everything)")]
    public string globalTextureNameB = "_GlobalGrabTextureAfterAll";

    public CameraEvent copyEventB = CameraEvent.BeforeImageEffects;
    public GrabResolution resolutionB = GrabResolution.Full;

    [Header("Optional Processing for Global Texture B")]
    public bool processB = true;

    public Material processBMaterial; // ToneMapping/ColorGrading material (expects _MainTex)

    public FilterMode filterMode = FilterMode.Point;
    public RenderTexture _rtB;

    Camera _cam;

    CommandBuffer _cbA;
    CommandBuffer _cbB;

    RenderTexture _rtA;

    // Temp for processing B (screen -> temp -> processed -> B)
    RenderTexture _rtBTemp;

    int _wA, _hA;
    int _wB, _hB;
    int _wBTemp, _hBTemp;

    private void Update()
    {
        CreateOrResizeRTs();
    }

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

        // Only allocate temp if we are actually processing B
        if (processB && processBMaterial != null)
        {
            CreateOrResizeSingle(
                resolutionB,
                ref _rtBTemp,
                ref _wBTemp,
                ref _hBTemp,
                "_Unused_GlobalGrabOnceTempB",
                "GlobalGrabOnceRT_B_Temp"
            );
        }
        else
        {
            if (_rtBTemp != null)
            {
                _rtBTemp.Release();
                DestroyImmediate(_rtBTemp);
                _rtBTemp = null;
                _wBTemp = _hBTemp = 0;
            }
        }

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
        var w = Mathf.Max(1, 960 / div);
        var h = Mathf.Max(1, 544 / div);

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

        // Only publish globals for the actual A/B textures (skip temps)
        if (!string.IsNullOrEmpty(globalName) && globalName[0] == '_'
                                              && (globalName == globalTextureNameA || globalName == globalTextureNameB))
        {
            Shader.SetGlobalTexture(globalName, rt);
            Shader.SetGlobalVector(globalName + "_TexelSize",
                new Vector4(1f / w, 1f / h, w, h));
        }
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
            _cbA = null;
        }

        if (_cbB != null)
        {
            _cam.RemoveCommandBuffer(copyEventB, _cbB);
            _cbB.Release();
            _cbB = null;
        }

        // A: simple copy
        _cbA = new CommandBuffer();
        _cbA.name = "GlobalGrabOnce Copy A";
        _cbA.Blit(BuiltinRenderTextureType.CurrentActive, _rtA);
        _cam.AddCommandBuffer(copyEventA, _cbA);

        // B: copy or copy+process
        _cbB = new CommandBuffer();
        _cbB.name = (processB && processBMaterial != null) ? "GlobalGrabOnce Copy+Process B" : "GlobalGrabOnce Copy B";

        if (processB && processBMaterial != null)
        {
            // If temp isn't available for some reason, fall back to copy
            if (_rtBTemp != null)
            {
                _cbB.Blit(BuiltinRenderTextureType.CurrentActive, _rtBTemp);
                _cbB.Blit(_rtBTemp, _rtB, processBMaterial);
            }
            else
            {
                _cbB.Blit(BuiltinRenderTextureType.CurrentActive, _rtB);
            }
        }
        else
        {
            _cbB.Blit(BuiltinRenderTextureType.CurrentActive, _rtB);
        }

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

        if (_rtBTemp != null)
        {
            _rtBTemp.Release();
            DestroyImmediate(_rtBTemp);
            _rtBTemp = null;
        }
    }
}