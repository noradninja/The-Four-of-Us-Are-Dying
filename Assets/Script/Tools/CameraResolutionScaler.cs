using System;
using UnityEngine;
using UnityEngine.Rendering;

[ExecuteInEditMode]
public class CameraResolutionScaler : MonoBehaviour
{
    public enum currentResolution
    {
        [Tooltip("960x544")] Full,
        [Tooltip("720x408")] Mid,
        [Tooltip("640x363")] Low,
        [Tooltip("480x272")] PSP
    }

    public enum gradingFilter
    {
        Warm,
        Cool,
        Sepia,
        Emerald,
        Underwater,
        Hell,
        User
    }

    public enum internalResolution
    {
        [Tooltip("960x544")] High,
        [Tooltip("720x408")] Mid,
        [Tooltip("640x363")] Low,
        [Tooltip("480x272")] VeryLow
    }

    public bool enableInternalResolution = true;
    public internalResolution InternalResolution;
    public currentResolution screenResolution;
    public Material tonemappingMat;
    public Material upscaleMat;
    public FilterMode filterMode = FilterMode.Point;
    public bool enableTonemapping;
    public bool enableColorGrading;
    public bool enableUpscaling;
    public gradingFilter GradingFilter;
    [Range(0, 1)] public float userR = 1.0f;
    [Range(0, 1)] public float userG = 1.0f;
    [Range(0, 1)] public float userB = 1.0f;

    [Range(0, 2)] public float exposure = 1.0f;

    private new Camera camera;
    private Color filterColor;
    private int height;
    private Rect originalRect;
    private float renderDivisor;
    private RenderTexture renderTex;
    private Rect scaledRect;
    private int width;

    private void Awake()
    {
        camera = GetComponent<Camera>();
        originalRect = camera.pixelRect;
        switch (screenResolution)
        {
            //set resolution and 30Hz vsync
            case currentResolution.Full:
                width = 960;
                height = 544;
                if (!Application.isEditor) Screen.SetResolution(width, height, true);
                QualitySettings.vSyncCount = 1;
                break;
            case currentResolution.Mid:
                width = 720;
                height = 408;
                if (!Application.isEditor) Screen.SetResolution(width, height, true);
                QualitySettings.vSyncCount = 1;
                break;
            case currentResolution.Low:
                width = 640;
                height = 368;
                if (!Application.isEditor) Screen.SetResolution(width, height, true);
                QualitySettings.vSyncCount = 1;
                break;
            case currentResolution.PSP:
                width = 480;
                height = 272;
                if (!Application.isEditor) Screen.SetResolution(width, height, true);
                QualitySettings.vSyncCount = 1;
                break;
        }
    }

    private void OnDisable()
    {
        camera.pixelRect = originalRect;
    }

    private void OnDestroy()
    {
        camera.pixelRect = originalRect;
    }

    private void OnPreRender()
    {
        if (enableInternalResolution)
        {
            switch (InternalResolution) //set up values for RT
            {
                case internalResolution.High:
                    renderDivisor = 1.2f;
                    break;
                case internalResolution.Mid:
                    renderDivisor = 1.5f;
                    break;
                case internalResolution.Low:
                    renderDivisor = 1.6f;
                    break;
                case internalResolution.VeryLow:
                    renderDivisor = 2.0f;
                    break;
            }

            // rect is 0 to 1
            // pixelRect is 0 to renderSize
            originalRect = camera.pixelRect;
            scaledRect.Set(0, 0, width / renderDivisor, height / renderDivisor);
            camera.pixelRect = scaledRect;
        }
    }

    private void OnRenderImage(RenderTexture src, RenderTexture dest)
    {
        src.filterMode = filterMode;
        dest.filterMode = filterMode;

        /* Configure color grading. */
        if (enableColorGrading)
        {
            tonemappingMat.SetFloat("_colorGrading", 1);

            switch (GradingFilter)
            {
                case gradingFilter.Warm:
                    filterColor = new Color(0.66f, 0.54f, 0.0f, 1.0f);
                    break;

                case gradingFilter.Cool:
                    filterColor = new Color(0.0f, 0.71f, 1.0f, 1.0f);
                    break;

                case gradingFilter.Sepia:
                    filterColor = new Color(0.67f, 0.48f, 0.2f, 1.0f);
                    break;

                case gradingFilter.Underwater:
                    filterColor = new Color(0.0f, 0.76f, 0.69f, 1.0f);
                    break;

                case gradingFilter.Emerald:
                    filterColor = new Color(0.10f, 0.55f, 0.10f, 1.0f);
                    break;

                case gradingFilter.Hell:
                    filterColor = new Color(0.92f, 0.10f, 0.10f, 1.0f);
                    break;

                case gradingFilter.User:
                    filterColor = new Color(userR, userG, userB, 1.0f);
                    break;
            }

            tonemappingMat.SetColor("_gradingColor", filterColor);
        }
        else
        {
            tonemappingMat.SetFloat("_colorGrading", 0);
        }

        /* Configure tonemapping. */
        tonemappingMat.SetFloat("_toneMapping", enableTonemapping ? 1.0f : 0.0f);
        tonemappingMat.SetFloat("_exposure", exposure);

        /*
            We first render the tonemapped/color-graded image into a temporary
            render texture. This becomes the input to the optional Scale2x pass.
        */
        var temp = RenderTexture.GetTemporary(
            src.width,
            src.height,
            0,
            src.format
        );

        temp.filterMode = filterMode;

        /* Pass 1: Tonemapping and color grading. */
        Graphics.Blit(src, temp, tonemappingMat, 0);

        /*
            Restore the camera rect before the final presentation to the screen.
            This ensures the final image is displayed at the full target resolution.
        */
        if (enableInternalResolution)
        {
            camera.pixelRect = originalRect;
        }

        /*
            Pass 2: Optional Scale2x upscale.
            The upscale shader should sample with point filtering and perform
            the Scale2x logic in the fragment shader.
        */
        if (enableUpscaling && upscaleMat != null)
        {
            Graphics.Blit(temp, dest, upscaleMat, 0);
        }
        else
        {
            Graphics.Blit(temp, dest);
        }

        RenderTexture.ReleaseTemporary(temp);
    }
}