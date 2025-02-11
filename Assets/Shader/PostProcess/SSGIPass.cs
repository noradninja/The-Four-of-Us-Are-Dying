using UnityEngine;

[ExecuteInEditMode]
[RequireComponent(typeof(Camera))]
public class SSGIPass : MonoBehaviour
{
    private static readonly int SsgiTexture = Shader.PropertyToID("_SSGITexture");
    public Shader ssgiShader;
    private Material ssgiMaterial;
    private RenderTexture ssgiRenderTexture;

    void Start()
    {
        if (ssgiShader)
            ssgiMaterial = new Material(ssgiShader);

        // Create a low-res render target for SSGI
        ssgiRenderTexture = new RenderTexture(Screen.width / 2, Screen.height / 2, 0, RenderTextureFormat.Default);
        ssgiRenderTexture.filterMode = FilterMode.Bilinear;
    }

    void OnRenderImage(RenderTexture source, RenderTexture destination)
    {
        if (ssgiMaterial)
        {
            // Apply the SSGI shader to compute indirect lighting
            Graphics.Blit(source, ssgiRenderTexture, ssgiMaterial);
            Shader.SetGlobalTexture(SsgiTexture, ssgiRenderTexture);
        }

        // Pass the original source to the next rendering stage
        Graphics.Blit(source, destination);
    }
}