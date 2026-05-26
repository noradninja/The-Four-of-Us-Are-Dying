using UnityEngine;

[RequireComponent(typeof(Camera))]
public class VitaUpscalePresenter : MonoBehaviour
{
    [Header("Presentation Material")] public Material presentMaterial;
    public Texture sourceTexture;
    public string textureProperty = "_MainTex";

    private Camera _cam;

    private void OnEnable()
    {
        _cam = GetComponent<Camera>();

        _cam.clearFlags = CameraClearFlags.SolidColor;
        _cam.backgroundColor = Color.black;
        _cam.cullingMask = 0;
        _cam.depth = 100;
    }

    private void OnPostRender()
    {
        if (presentMaterial == null || sourceTexture == null)
            return;

        presentMaterial.SetTexture(textureProperty, sourceTexture);
        presentMaterial.SetPass(0);

        GL.PushMatrix();
        GL.LoadOrtho();

        GL.Begin(GL.QUADS);

        GL.TexCoord2(0f, 0f);
        GL.Vertex3(0f, 0f, 0f);

        GL.TexCoord2(1f, 0f);
        GL.Vertex3(1f, 0f, 0f);

        GL.TexCoord2(1f, 1f);
        GL.Vertex3(1f, 1f, 0f);

        GL.TexCoord2(0f, 1f);
        GL.Vertex3(0f, 1f, 0f);

        GL.End();

        GL.PopMatrix();
    }
}