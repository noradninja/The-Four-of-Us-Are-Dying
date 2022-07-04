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
                    Screen.SetResolution(960, 544, true);
                    QualitySettings.vSyncCount = 0;
                    //Application.targetFrameRate = 25;
                    break;
                case currentResolution.Mid:
                    Screen.SetResolution(720, 408, true);
                    QualitySettings.vSyncCount = 0;
                    //Application.targetFrameRate = 25;
                    break;
                case currentResolution.Low:
                    Screen.SetResolution(640, 368, true);
                    QualitySettings.vSyncCount = 0;
                    //Application.targetFrameRate = 25;
                    break;
                case currentResolution.PSP:
                    Screen.SetResolution(480, 272, true);
                    QualitySettings.vSyncCount = 0;
                    //Application.targetFrameRate = 25;
                    break;
            }
        else 
            QualitySettings.vSyncCount = 0;
            //Application.targetFrameRate = 25;
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
                    renderDivisor = 1.5f;
                    break;
                case internalResolution.PSP:
                    width = 480;
                    height = 272;
                    renderDivisor = 2.0f;
                    break;
            }

            originalRect = camera.rect;
            scaledRect.Set(originalRect.x, originalRect.y, originalRect.width / renderDivisor,
                originalRect.height / renderDivisor);
            camera.rect = scaledRect;
        }
    }

    private void OnRenderImage(RenderTexture src, RenderTexture dest)
    {
        if (!enableInternalResolution) Graphics.Blit(src, dest);
        else
        {
            renderTex = GetTemporaryTexture(width, height);
            camera.rect = originalRect;
            src.filterMode = filterMode;
    
            Graphics.Blit(src, renderTex);
            Graphics.Blit(renderTex, dest);
            RenderTexture.ReleaseTemporary(renderTex);
        }
    }

    private RenderTexture GetTemporaryTexture(int width, int height)
    {
        var temporaryTexture = RenderTexture.GetTemporary(480, 272);
        temporaryTexture.wrapMode = TextureWrapMode.Clamp;
        temporaryTexture.anisoLevel = 0;
        temporaryTexture.filterMode = filterMode;
        //temporaryTexture.useMipMap = false;

        return temporaryTexture;
    }
}