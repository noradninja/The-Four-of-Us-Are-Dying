using UnityEngine;



[RequireComponent(typeof(Camera))]
public class FXAA : MonoBehaviour
{
    public Material material;
    public RenderTexture rt;
    public float Sharpness = 4.0f;
    public float Threshold = 0.2f;

    static readonly int sharpnessString = Shader.PropertyToID("_Sharpness");
    static readonly int thresholdString = Shader.PropertyToID("_Threshold");
  // [ImageEffectOpaque]
    public void OnRenderImage(RenderTexture source, RenderTexture destination)
    {
        material.SetFloat(sharpnessString, Sharpness);
        material.SetFloat(thresholdString, Threshold);

        Graphics.Blit(source, rt, material);
        Graphics.Blit(rt, destination);
    }
}