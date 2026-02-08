using UnityEngine;

[RequireComponent(typeof(Camera))]
[AddComponentMenu("Effects/Crepuscular Rays", -1)]
public class Crepuscular : MonoBehaviour
{
    public Material material;
    public GameObject mainLight;

    [Range(1, 16)] public int resolutionDivisor = 1;
    [Range(0, 20)] public float blurSize = 3;

    public enum SampleQuality { S4 = 4, S8 = 8, S16 = 16 }
    public SampleQuality samples = SampleQuality.S8;

    public enum DebugMode
    {
        Off,

        // show intermediate buffers
        RawAccumulation,   // output pass 0 (before blur)
        AfterBlur,         // output after blur passes

        // fog-only outputs (no scene composite)
        FogOnlyRaw,
        FogOnlyBlurred,

        // density debug (requires shader keywords below)
        DensityGrayscale,
        DensityHeatmap
    }

    [Header("Debug")]
    public DebugMode debugMode = DebugMode.Off;

    static readonly int BlurTexID   = Shader.PropertyToID("_BlurTex");
    static readonly int LightPosID  = Shader.PropertyToID("_LightPos");
    static readonly int ParamID     = Shader.PropertyToID("_Parameter");
    static readonly int NoiseTimeID = Shader.PropertyToID("_NoiseTime");   // ✅ NEW

    const string KW_S4  = "CREP_SAMPLES_4";
    const string KW_S8  = "CREP_SAMPLES_8";
    const string KW_S16 = "CREP_SAMPLES_16";

    const string KW_DEBUG_DENSITY = "CREP_DEBUG_DENSITY";
    const string KW_DEBUG_HEATMAP = "CREP_DEBUG_HEATMAP";

    Camera _cam;

    // bounded time to avoid long-session precision issues on Vita
    float _noiseTime;
    const float NOISE_TIME_WRAP = 256f;

    void Awake()
    {
        _cam = GetComponent<Camera>();
        _cam.depthTextureMode |= DepthTextureMode.Depth;
    }

    void SetSampleKeyword()
    {
        material.DisableKeyword(KW_S4);
        material.DisableKeyword(KW_S8);
        material.DisableKeyword(KW_S16);

        switch ((int)samples)
        {
            case 4:  material.EnableKeyword(KW_S4);  break;
            case 8:  material.EnableKeyword(KW_S8);  break;
            case 16: material.EnableKeyword(KW_S16); break;
        }
    }

    void SetDebugKeywords(bool densityGray, bool densityHeatmap)
    {
        material.DisableKeyword(KW_DEBUG_DENSITY);
        material.DisableKeyword(KW_DEBUG_HEATMAP);

        if (densityGray) material.EnableKeyword(KW_DEBUG_DENSITY);
        if (densityHeatmap) material.EnableKeyword(KW_DEBUG_HEATMAP);
    }

    void OnRenderImage(RenderTexture source, RenderTexture destination)
    {
        if (material == null || mainLight == null)
        {
            Graphics.Blit(source, destination);
            return;
        }

        SetSampleKeyword();

        _noiseTime += Time.unscaledDeltaTime;
        if (_noiseTime > NOISE_TIME_WRAP) _noiseTime -= NOISE_TIME_WRAP;
        material.SetFloat(NoiseTimeID, _noiseTime);

        int w = Mathf.Max(8, 1024 / resolutionDivisor);
        int h = Mathf.Max(8, 1024 / resolutionDivisor);

        RenderTexture rtA = RenderTexture.GetTemporary(w, h, 0, source.format);
        RenderTexture rtB = RenderTexture.GetTemporary(w, h, 0, source.format);

        rtA.filterMode = FilterMode.Bilinear;
        rtB.filterMode = FilterMode.Bilinear;

        // Light in viewport space
        Vector4 lightVector = _cam.WorldToViewportPoint(transform.position - mainLight.transform.forward);
        material.SetVector(LightPosID, lightVector);

        // ---- Density debug modes ----
        if (debugMode == DebugMode.DensityGrayscale || debugMode == DebugMode.DensityHeatmap)
        {
            bool heat = (debugMode == DebugMode.DensityHeatmap);
            SetDebugKeywords(densityGray: !heat, densityHeatmap: heat);

            Graphics.Blit(source, rtA, material, 0);
            Graphics.Blit(rtA, destination);

            SetDebugKeywords(false, false);
            RenderTexture.ReleaseTemporary(rtA);
            RenderTexture.ReleaseTemporary(rtB);
            return;
        }

        // Ensure debug keywords are off for normal path
        SetDebugKeywords(false, false);

        // Pass 0: accumulation into rtA
        Graphics.Blit(source, rtA, material, 0);

        if (debugMode == DebugMode.RawAccumulation || debugMode == DebugMode.FogOnlyRaw)
        {
            Graphics.Blit(rtA, destination);
            RenderTexture.ReleaseTemporary(rtA);
            RenderTexture.ReleaseTemporary(rtB);
            return;
        }

        // ---- SINGLE-PASS KAWASE BLUR ----
        // If blur is enabled, blur rtA -> rtB once, then swap so rtA holds blurred result.
        if (blurSize > 0.001f)
        {
            float widthMod = 1.0f / Mathf.Max(1, resolutionDivisor);

            material.SetVector(ParamID, new Vector4(blurSize * widthMod, 0, 0, 0));
            Graphics.Blit(rtA, rtB, material, 1);

            // swap references: rtA becomes blurred
            var tmp = rtA;
            rtA = rtB;
            rtB = tmp;
        }

        if (debugMode == DebugMode.AfterBlur || debugMode == DebugMode.FogOnlyBlurred)
        {
            Graphics.Blit(rtA, destination);
            RenderTexture.ReleaseTemporary(rtA);
            RenderTexture.ReleaseTemporary(rtB);
            return;
        }

        // Provide blurred result to composite
        material.SetTexture(BlurTexID, rtA);

        // Pass 3: composite to destination
        Graphics.Blit(source, destination, material, 3);

        RenderTexture.ReleaseTemporary(rtA);
        RenderTexture.ReleaseTemporary(rtB);
    }
}
