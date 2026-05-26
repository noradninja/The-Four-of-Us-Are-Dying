using UnityEngine;

[RequireComponent(typeof(Camera))]
[RequireComponent(typeof(GlobalGrabOnce))]
public class VitaCPUUpscaleManager : MonoBehaviour
{
    public enum UpscaleMode
    {
        Point,
        Scale2x
    }

    [Header("Low Resolution Scene Render")]
    public int lowWidth = 480;

    public int lowHeight = 272;
    public int depthBits = 16;

    [Header("Shader Upscale")] public UpscaleMode upscaleMode = UpscaleMode.Scale2x;

    public Material pointPresentMaterial;
    public Material scale2xPresentMaterial;

    [Range(0.0f, 64.0f)] public float scale2xThreshold = 0.05f;

    [Header("Presentation")] public VitaUpscalePresenter presenter;

    private GlobalGrabOnce _grabSource;
    private RenderTexture _sceneRT;

    private Camera _worldCamera;

    private void LateUpdate()
    {
        UpdatePresenterSource();
    }

    private void OnEnable()
    {
        _worldCamera = GetComponent<Camera>();
        _grabSource = GetComponent<GlobalGrabOnce>();

        CreateBuffers();
    }

    private void OnDisable()
    {
        Cleanup();
    }

    private void CreateBuffers()
    {
        Cleanup();

        _sceneRT = new RenderTexture(lowWidth, lowHeight, depthBits, RenderTextureFormat.ARGB32);
        _sceneRT.name = "Vita Low Resolution Scene RT";
        _sceneRT.filterMode = FilterMode.Point;
        _sceneRT.wrapMode = TextureWrapMode.Clamp;
        _sceneRT.useMipMap = false;
        _sceneRT.autoGenerateMips = false;
        _sceneRT.Create();

        _worldCamera.targetTexture = _sceneRT;

        UpdatePresenterSource();
    }

    private void UpdatePresenterSource()
    {
        if (_grabSource == null || presenter == null)
            return;

        var sourceRT = _grabSource._rtB;

        if (sourceRT == null)
            return;

        sourceRT.filterMode = FilterMode.Point;

        if (upscaleMode == UpscaleMode.Scale2x && scale2xPresentMaterial != null)
        {
            scale2xPresentMaterial.SetFloat("_Threshold", scale2xThreshold);
            presenter.presentMaterial = scale2xPresentMaterial;
        }
        else if (pointPresentMaterial != null)
        {
            presenter.presentMaterial = pointPresentMaterial;
        }

        presenter.sourceTexture = sourceRT;
    }

    private void Cleanup()
    {
        if (_worldCamera != null)
            _worldCamera.targetTexture = null;

        if (_sceneRT != null)
        {
            _sceneRT.Release();
            DestroyImmediate(_sceneRT);
            _sceneRT = null;
        }
    }
}