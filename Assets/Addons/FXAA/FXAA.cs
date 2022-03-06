using UnityEngine;


[ExecuteInEditMode]
[RequireComponent(typeof(Camera))]
public class FXAA : MonoBehaviour
{
    public Material material;

    public float Sharpness = 4.0f;
    public float Threshold = 0.2f;

    static readonly int sharpnessString = Shader.PropertyToID("_Sharpness");
    static readonly int thresholdString = Shader.PropertyToID("_Threshold");
    public void OnRenderImage(RenderTexture source, RenderTexture destination)
    {
        material.SetFloat(sharpnessString, Sharpness);
        material.SetFloat(thresholdString, Threshold);
        var blurTex = RenderTexture.GetTemporary(Mathf.RoundToInt(Screen.width /2), 
                                                Mathf.RoundToInt(Screen.height /2));

        Graphics.Blit(source, blurTex, material);
        Graphics.Blit(blurTex, destination);
        RenderTexture.ReleaseTemporary(blurTex);
    }
}