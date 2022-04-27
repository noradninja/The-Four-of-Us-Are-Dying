using UnityEngine;

[ExecuteInEditMode]

// Add this to your main camera//////////////////////////////////////////////////////////////////////////////////////////////
public class CameraResolutionScaler : MonoBehaviour
{
    public enum currentResolution
    {
        [Tooltip("960x544")] Full,
        [Tooltip("720x408")] Mid,
        [Tooltip("640x363")] Low,
        [Tooltip("480x272")] PSP
    }

    public enum internalResolution
    {
        [Tooltip("960x544")] Full,
        [Tooltip("720x408")] Mid,
        [Tooltip("640x363")] Low,
        [Tooltip("480x272")] PSP
    }

    public bool enableInternalResolution = true;
    public internalResolution InternalResolution;
    public currentResolution screenResolution;
    public FilterMode filterMode = FilterMode.Trilinear;
    private new Camera camera;
    private int height;
    private Rect originalRect;
    private float renderDivisor;
    private RenderTexture renderTex;
    private Rect scaledRect;
    private int width;

    private void Awake()
    {
        camera = GetComponent<Camera>();
       
        if (!Application.isEditor)
            switch (screenResolution)
            {
                case currentResolution.Full:
                    Screen.SetResolution(960, 544, true, 60);
                    break;
                case currentResolution.Mid:
                    Screen.SetResolution(720, 408, true, 60);
                    break;
                case currentResolution.Low:
                    Screen.SetResolution(640, 368, true, 60);
                    break;
                case currentResolution.PSP:
                    Screen.SetResolution(480, 272, true, 60);
                    break;
            }
        else
            Application.targetFrameRate = 60;
    }

    private void OnDestroy()
    {
        camera.rect = originalRect;
    }

    private void OnPreRender()
    {
        if (enableInternalResolution)
        {
            switch (InternalResolution)
            {
                case internalResolution.Full:
                    width = 960;
                    height = 544;
                    renderDivisor = 1;
                    break;
                case internalResolution.Mid:
                    width = 720;
                    height = 408;
                    renderDivisor = 1.334f;
                    break;
                case internalResolution.Low:
                    width = 640;
                    height = 368;
                    renderDivisor = 2f;
                    break;
                case internalResolution.PSP:
                    width = 480;
                    height = 272;
                    renderDivisor = 1f; //this gives us a slightly smaller 400x227 resolution for output
                    break;
            }

            originalRect = camera.rect;
            scaledRect.Set(originalRect.x, originalRect.y, originalRect.width / renderDivisor,
                originalRect.height / renderDivisor);
            camera.rect = scaledRect;
        }
    }

    // private void OnRenderImage(RenderTexture src, RenderTexture dest)
    // {
    //     if (!enableInternalResolution) Graphics.Blit(src, dest);
    //     else
    //     {
    //         renderTex = GetTemporaryTexture(width, height);
    //         camera.rect = originalRect;
    //         src.filterMode = filterMode;
    //
    //         Graphics.Blit(src, renderTex);
    //         Graphics.Blit(renderTex, dest);
    //         RenderTexture.ReleaseTemporary(renderTex);
    //     }
    // }

    private RenderTexture GetTemporaryTexture(int width, int height)
    {
        var temporaryTexture = RenderTexture.GetTemporary(width, height);
        temporaryTexture.wrapMode = TextureWrapMode.Clamp;
        temporaryTexture.anisoLevel = 0;
        temporaryTexture.filterMode = filterMode;

        return temporaryTexture;
    }
}