using System;
using UnityEngine;
using UnityEngine.Rendering;

[ExecuteInEditMode]
public class CameraResolutionScaler : MonoBehaviour
{
 
    // public float downscaleFactor = 2f; // Factor by which to downscale the framebuffer
    // private int width;
    // private int height;
    // private Camera camera;
    // public RenderTexture downscaleTexture;
    // private CommandBuffer downscaleCommandBuffer;
    // private Material blitMaterial;
    //
    // private void Awake()
    // {
    //     camera = GetComponent<Camera>();
    //     blitMaterial = new Material(Shader.Find("Blitter"));
    // }
    // private void OnPreRender() //before we render anything
    // {
    //     width = 512;//Mathf.RoundToInt(camera.pixelWidth / downscaleFactor);
    //     height = 256; //Mathf.RoundToInt(camera.pixelHeight / downscaleFactor);
    //     Rect viewport = new Rect(0, 0, width, height);
    //
    //     camera.pixelRect = viewport;
    //     downscaleCommandBuffer = new CommandBuffer();
    //     camera.AddCommandBuffer(CameraEvent.BeforeForwardOpaque, downscaleCommandBuffer);
    //    
    //     downscaleCommandBuffer.Clear();
    //     downscaleCommandBuffer.SetRenderTarget(downscaleTexture);
    // }
    //
    // private void OnPostRender() //immediately after render but before drawing to framebuffer
    // {
    //     downscaleCommandBuffer.Blit(BuiltinRenderTextureType.CameraTarget, downscaleTexture);
    //     camera.pixelRect = new Rect(0, 0, 960, 544);
    //     downscaleCommandBuffer.SetRenderTarget(BuiltinRenderTextureType.CameraTarget);
    //     downscaleCommandBuffer.Blit(downscaleTexture, BuiltinRenderTextureType.CameraTarget);
    //     camera.RemoveCommandBuffer(CameraEvent.BeforeForwardOpaque, downscaleCommandBuffer); //drop cb
    // }
    public enum currentResolution
    {
        [Tooltip("960x544")] Full,
        [Tooltip("720x408")] Mid,
        [Tooltip("640x363")] Low,
        [Tooltip("480x272")] PSP
    }

    public enum internalResolution
    {
        [Tooltip("960x544")] High,
        [Tooltip("720x408")] Mid,
        [Tooltip("640x363")] Low,
        [Tooltip("480x272")] VeryLow
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
     
    public bool enableInternalResolution = true;
    public internalResolution InternalResolution;
    public currentResolution screenResolution;
    public Material tonemappingMat;
    public FilterMode filterMode = FilterMode.Trilinear;
    public bool enableTonemapping;
    public bool enableColorGrading;
    public gradingFilter GradingFilter;
    [Range(0, 1)] public float userR = 1.0f;
    [Range(0, 1)] public float userG = 1.0f;
    [Range(0, 1)] public float userB = 1.0f;

    [Range(0, 2)]
    public float exposure = 1.0f;
    
    private new Camera camera;
    private Rect originalRect;
    private float renderDivisor;
    private RenderTexture renderTex;
    private Rect scaledRect;
    private int width;
    private int height;
    private Color filterColor;
   
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
                    if (!Application.isEditor) Screen.SetResolution(width,height, true);
                    QualitySettings.vSyncCount = 2;
                    break;
                case currentResolution.Mid:
                    width = 720;
                    height = 408;
                    if (!Application.isEditor) Screen.SetResolution(720, 408, true);
                    QualitySettings.vSyncCount = 2;
                    break;
                case currentResolution.Low:
                    width = 640;
                    height = 368;
                    if (!Application.isEditor) Screen.SetResolution(640, 368, true);
                    QualitySettings.vSyncCount = 2;
                    break;
                case currentResolution.PSP:
                    width = 480;
                    height = 272;
                    if (!Application.isEditor) Screen.SetResolution(480, 272, true);
                    QualitySettings.vSyncCount = 2;
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
                    renderDivisor = 1.75f;
                    break;
                case internalResolution.VeryLow:
                    renderDivisor = 2.0f;
                    break;
            }

            // rect is 0 to 1
            // pixelRect is 0 to renderSize
            originalRect = camera.pixelRect;
            scaledRect.Set(0, 0, width/renderDivisor, height/renderDivisor);
            camera.pixelRect = scaledRect;
        }
    }

    private void OnRenderImage(RenderTexture src, RenderTexture dest)
    {
        if (enableColorGrading) //handle color grading filters
        {
            tonemappingMat.SetFloat("_colorGrading", 1);
            //spin filters, colors directly lifted from Photoshop CS6 Photo Filter tool
            switch (GradingFilter)
            {
                case gradingFilter.Warm:
                    filterColor = new Color(0.66f, 0.54f, 0, 1f);
                    break;
                case gradingFilter.Cool:
                    filterColor = new Color(0, 0.71f, 1, 1f);
                    break;
                case gradingFilter.Sepia:
                    filterColor = new Color(0.67f, 0.48f, 0.2f, 1f);
                    break;
                case gradingFilter.Underwater:
                    filterColor = new Color(0, 0.76f, 0.69f, 1f);
                    break;
                case gradingFilter.Emerald:
                    filterColor = new Color(0.10f, 0.55f, 0.10f, 1f);
                    break;
                case gradingFilter.Hell:
                    filterColor = new Color(0.92f, 0.10f, 0.10f, 1f);
                    break;
                case gradingFilter.User:
                    filterColor = new Color(userR, userG, userB, 1f);
                    break;
            }

            tonemappingMat.SetColor("_gradingColor", filterColor);
        }
        else tonemappingMat.SetFloat("_colorGrading", 0);

        //handle tonemapping
        if (enableTonemapping)
            tonemappingMat.SetFloat("_toneMapping", 1);
        else
            tonemappingMat.SetFloat("_toneMapping", 0);
        tonemappingMat.SetFloat("_exposure", exposure);

        // Luckily, looks like using OnRenderImage automatically makes the camera render to a TempBuffer of the size of the camera.pixelRect 
        if (enableInternalResolution)
        {
            camera.pixelRect = originalRect;
            src.filterMode = filterMode;
            Graphics.Blit(src, dest, tonemappingMat, 0);
        }
        else Graphics.Blit(src, dest, tonemappingMat, 0);
    }
}