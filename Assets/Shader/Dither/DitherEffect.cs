/*Please do support www.bitshiftprogrammer.com by joining the facebook page : fb.com/BitshiftProgrammer
Legal Stuff:
This code is free to use no restrictions but attribution would be appreciated.
Any damage caused either partly or completly due to usage of this stuff is not my responsibility*/
using UnityEngine;
[ExecuteInEditMode, ImageEffectAllowedInSceneView, RequireComponent(typeof(Camera))]
public class DitherEffect : MonoBehaviour
{
    public Material ditherMat;
    [Range(0.0f, 1.0f)]
    public float ditherStrength = 0.1f;
    [Range(1, 32)]
    public int colourDepth = 4;

    private void OnRenderImage(RenderTexture src, RenderTexture dest)
    {
        ditherMat.SetFloat("_DitherStrength", ditherStrength);
        ditherMat.SetInt("_ColourDepth", colourDepth);
        Graphics.Blit(src, dest, ditherMat);
    }
}
