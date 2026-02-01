using UnityEngine;

[ExecuteInEditMode]
[RequireComponent(typeof(Camera))]
public class OcclusionMaskRenderer : MonoBehaviour
{
    [Header("Output")]
    public RenderTexture output;
    [Tooltip("If output is null, this script will create and manage one automatically.")]
    public bool autoCreateRT = true;

    [Header("Resolution (only used when autoCreateRT is true)")]
    public int width = 256;
    public int height = 256;
    public RenderTextureFormat format = RenderTextureFormat.ARGB32;
    [Range(0, 24)] public int depthBits = 16;
    public FilterMode filterMode = FilterMode.Bilinear;

    [Header("Mask Rendering")]
    [Tooltip("Clear color. Use white so 'sky' is white.")]
    public Color clearColor = Color.white;

    [Tooltip("Layers to render into the mask (your occluder geometry).")]
    public LayerMask cullingMask = ~0;

    [Tooltip("Replacement shader that draws black (and clips for cutout).")]
    public Shader replacementShader;

    [Tooltip("Tag filter for RenderWithShader. Use \"RenderType\" for Opaque/TransparentCutout filtering. Set empty to force all renderers.")]
    public string replacementTag = "RenderType";

    [Header("When to render")]
    public bool renderEveryFrame = true;
    public bool renderInEditMode = true;

    Camera _cam;
    RenderTexture _ownedRT;

    void OnEnable()
    {
        _cam = GetComponent<Camera>();

        // We only want this camera to render into a texture.
        _cam.enabled = false;

        EnsureRT();

        // Make sure we don't inherit strange settings
        _cam.clearFlags = CameraClearFlags.SolidColor;
        _cam.backgroundColor = clearColor;
    }

    void OnDisable()
    {
        if (_ownedRT != null)
        {
            _ownedRT.Release();
#if UNITY_EDITOR
            DestroyImmediate(_ownedRT);
#else
            Destroy(_ownedRT);
#endif
            _ownedRT = null;
        }
    }

    void Update()
    {
        if (!renderEveryFrame) return;

#if UNITY_EDITOR
        if (!Application.isPlaying && !renderInEditMode) return;
#endif

        RenderMask();
    }

    public void RenderMask()
    {
        if (_cam == null) _cam = GetComponent<Camera>();
        EnsureRT();

        if (output == null)
            return;

        // Configure camera for mask render
        RenderTexture oldTarget = _cam.targetTexture;
        CameraClearFlags oldFlags = _cam.clearFlags;
        Color oldBG = _cam.backgroundColor;
        int oldMask = _cam.cullingMask;

        _cam.targetTexture = output;
        _cam.clearFlags = CameraClearFlags.SolidColor;
        _cam.backgroundColor = clearColor;
        _cam.cullingMask = cullingMask;

        // Render with replacement shader
        if (replacementShader != null)
        {
            // If replacementTag is empty, Unity will render everything using the shader
            _cam.RenderWithShader(replacementShader, string.IsNullOrEmpty(replacementTag) ? "" : replacementTag);
        }
        else
        {
            // Fallback: just clear (white)
            RenderTexture active = RenderTexture.active;
            RenderTexture.active = output;
            GL.Clear(true, true, clearColor);
            RenderTexture.active = active;
        }

        // Restore
        _cam.targetTexture = oldTarget;
        _cam.clearFlags = oldFlags;
        _cam.backgroundColor = oldBG;
        _cam.cullingMask = oldMask;
    }

    void EnsureRT()
    {
        if (!autoCreateRT) return;

        if (output != null) return;

        // Create and own a RT
        if (_ownedRT == null || _ownedRT.width != width || _ownedRT.height != height || _ownedRT.format != format)
        {
            if (_ownedRT != null)
            {
                _ownedRT.Release();
#if UNITY_EDITOR
                DestroyImmediate(_ownedRT);
#else
                Destroy(_ownedRT);
#endif
            }

            _ownedRT = new RenderTexture(width, height, depthBits, format);
            _ownedRT.name = "OcclusionMaskRT";
            _ownedRT.wrapMode = TextureWrapMode.Clamp;
            _ownedRT.filterMode = filterMode;
            _ownedRT.useMipMap = false;
            _ownedRT.autoGenerateMips = false;
            _ownedRT.Create();
        }

        output = _ownedRT;
    }
}
