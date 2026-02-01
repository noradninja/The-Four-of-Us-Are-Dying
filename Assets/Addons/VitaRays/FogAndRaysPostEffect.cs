using UnityEngine;

[RequireComponent(typeof(Camera))]
public class FogAndRaysPostEffect : MonoBehaviour
{
    public Shader postShader;
    private Material mat;

    public Light mainLight;

    [Header("Fog")]
    public Color fogColor = new Color(0.5f, 0.5f, 0.5f, 1);
    public float fogDensity = 0.02f;

    [Header("Rays")]
    public float rayStrength = 1.0f;
    public float rayFalloff = 1.5f;

    static readonly int _FogColor      = Shader.PropertyToID("_FogColor");
    static readonly int _FogDensity    = Shader.PropertyToID("_FogDensity");
    static readonly int _MainLightDir  = Shader.PropertyToID("_MainLightDir");
    static readonly int _MainLightColor= Shader.PropertyToID("_MainLightColor");
    static readonly int _SunPos        = Shader.PropertyToID("_SunPos");
    static readonly int _RayStrength   = Shader.PropertyToID("_RayStrength");
    static readonly int _RayFalloff    = Shader.PropertyToID("_RayFalloff");

    void OnEnable()
    {
        if (!postShader)
        {
            enabled = false;
            return;
        }

        if (!mat)
            mat = new Material(postShader);
    }

    void OnDisable()
    {
        if (mat)
            DestroyImmediate(mat);
    }

    void OnRenderImage(RenderTexture src, RenderTexture dest)
    {
        if (!mat || !mainLight)
        {
            Graphics.Blit(src, dest);
            return;
        }

        Vector3 lightDir = -mainLight.transform.forward;
        Vector3 sunWorld = transform.position + lightDir * 1000f;
        Vector3 sunVP = GetComponent<Camera>().WorldToViewportPoint(sunWorld);

        mat.SetColor(_FogColor, fogColor);
        mat.SetFloat(_FogDensity, fogDensity);

        mat.SetVector(_MainLightDir, lightDir);
        mat.SetVector(_MainLightColor,
            mainLight.color * mainLight.intensity);

        mat.SetVector(_SunPos,
            new Vector4(sunVP.x, sunVP.y, sunVP.z, 1));

        mat.SetFloat(_RayStrength, rayStrength);
        mat.SetFloat(_RayFalloff, rayFalloff);

        Graphics.Blit(src, dest, mat);
    }
}
