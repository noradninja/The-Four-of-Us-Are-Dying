using UnityEngine;

[ExecuteInEditMode]
[RequireComponent(typeof(Camera))]
public class DepthCullEffect : MonoBehaviour
{
    //public Shader depthCullShader;
    public Material depthCullMaterial;

    /*void Start()
    {
        if (!depthCullShader) return;
        depthCullMaterial = new Material(depthCullShader);
    }*/

    void OnRenderImage(RenderTexture source, RenderTexture destination)
    {
        if (!depthCullMaterial)
        {
            Graphics.Blit(source, destination);
            return;
        }

        // Apply the depth culling shader
        Graphics.Blit(source, destination, depthCullMaterial);
    }
}