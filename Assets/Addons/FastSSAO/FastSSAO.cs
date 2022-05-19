using UnityEngine;

[RequireComponent(typeof(Camera))]
[ExecuteInEditMode]
public class FastSSAO : MonoBehaviour
{
    [Range(0, 3)]
    public float Intensity = 1;

    [Range(0, 3)]
    public float BlurAmount = 1;

    [Range(0, 1)]
    public float Radius = 1;

    [Range(0, 4)]
    public float Area = 1;

    public bool FastMode;

    public Material material;

    public Camera cam;

    static readonly int blurTexString = Shader.PropertyToID("_BlurTex");
    static readonly int instensityString = Shader.PropertyToID("_Intensity");
    static readonly int blurAmountString = Shader.PropertyToID("_BlurAmount");
    static readonly int radiusString = Shader.PropertyToID("_Radius");
    static readonly int areaString = Shader.PropertyToID("_Area");

    static readonly string fastKeyword = "FAST";

    private void Awake()
    {
        // cam = GetComponent<Camera>();
        cam.depthTextureMode = DepthTextureMode.Depth;
    }
  [ImageEffectOpaque]
    private void OnRenderImage(RenderTexture source, RenderTexture destination)
    {
        material.SetFloat(instensityString, Intensity);
        //material.SetFloat(blurAmountString, BlurAmount);
        material.SetFloat(radiusString, Radius * 0.5f);
        material.SetFloat(areaString, Area + 0.1f);
        if (FastMode)
            material.EnableKeyword(fastKeyword);
        else
            material.DisableKeyword(fastKeyword);

        var blurTex = RenderTexture.GetTemporary(128, 128, 0, source.format);
       // var temp1 = RenderTexture.GetTemporary(Mathf.RoundToInt(Screen.width /8f), Mathf.RoundToInt(Screen.height /8f), 0, source.format);
        //var temp1 = RenderTexture.GetTemporary(Mathf.RoundToInt(Screen.width /16f), Mathf.RoundToInt(Screen.height /16f), 0, source.format);

        Graphics.Blit(source, blurTex, material, 0);
        //Graphics.Blit(blurTex, temp1, material, 1);
        // Graphics.Blit(temp, temp1, material, 1);
        // RenderTexture.ReleaseTemporary(temp);
        material.SetTexture(blurTexString, blurTex);
        RenderTexture.ReleaseTemporary(blurTex);
        //RenderTexture.ReleaseTemporary(temp1);

        Graphics.Blit(source, destination, material, 2);
    }
}
