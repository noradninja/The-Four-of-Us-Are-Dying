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
    private Rect originalRect;
    private float renderDivisor;
    private RenderTexture renderTex;
    private Rect scaledRect;
    private int width;
    private int height;
    
    
    private void Awake()
    {
        camera = GetComponent<Camera>();

        if (!Application.isEditor)
            switch (screenResolution)
            {
                //set resolution and 30Hz vsync
                case currentResolution.Full:
                    Screen.SetResolution(960, 544, true);
                    QualitySettings.vSyncCount = 2;
                    break;
                case currentResolution.Mid:
                    Screen.SetResolution(720, 408, true);
                    QualitySettings.vSyncCount = 2;
                    break;
                case currentResolution.Low:
                    Screen.SetResolution(640, 368, true);
                    QualitySettings.vSyncCount = 2;
                    break;
                case currentResolution.PSP:
                    Screen.SetResolution(480, 272, true);
                    QualitySettings.vSyncCount = 2;
                    break;
            }
        else //disable vsync in Editor
            QualitySettings.vSyncCount = 2;
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

            // rect is 0 to 1
            // pixelRect is 0 to renderSize
            originalRect = camera.pixelRect;
            scaledRect.Set(0, 0, width/renderDivisor,height/renderDivisor);
            camera.pixelRect = scaledRect;
        }
    }

    private void OnRenderImage(RenderTexture src, RenderTexture dest)
    {
        // Luckily, looks like using OnRenderImage automatically makes the camera render to a TempBuffer of the size of the camera.pixelRect 
    
        camera.pixelRect = originalRect;
        src.filterMode = filterMode;
        Graphics.Blit(src, dest); // Blit from the low res to the framebuffer
    }
}