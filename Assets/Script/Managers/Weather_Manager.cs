using System;
using UnityEngine;
using DigitalOpus.MB.Core;

public class Weather_Manager : MonoBehaviour
{
    public AudioSource audioSource; // thunder
    public AudioSource audioSourceB; // wind

    public ParticleSystem rainParticleSystem;

    [Range(512, 8192)]
    public int sampleDataLength = 512;

    public float scaleFactor = 1f; // thunder sensitivity (flash strength)
    public float windScaleFactor = 1f; // wind gain

    public Material skyBox;
    public Material crepuscularMat;

    public float clipLoudness = 0f; // thunder envelope-ish
    public float clip2Loudness = 0f; // wind output (mapped)

    public float enviroReflectivity;
    private static readonly int Exposure = Shader.PropertyToID("_Exposure");

    public static float currentInfluence = 0.1f;

    [Range(0.001f, 1.0f)] public float smoothingSpeed = 5f; // smoothing for influence (tree/bush + global)

    // =========================
    // WIND RESPONSE SETTINGS
    // =========================
    [Header("Wind RMS Response (audioSourceB)")]
    [Tooltip("Expected gust peak RMS of wind clip. Used to normalize RMS into 0..1.")]
    public float windExpectedMaxRMS = 0.15f;

    [Tooltip("Perceptual curve. <1 boosts low wind, >1 suppresses low wind.")]
    public float windResponsePow = 0.6f;

    [Header("Wind Output Mapping")]
    [Tooltip("Baseline wind output when RMS is 0. Example: 0.1 keeps some motion.")]
    [Range(0f, 1f)]
    public float windBaseline = 0.1f;

    [Tooltip("Range above baseline. If baseline=0.1 and range=0.9, output spans 0.1..1.0")] [Range(0f, 1f)]
    public float windRange = 0.9f;

    [Header("Influence Remap (from wind output)")]
    public float influenceInMin = 0.01f;

    public float influenceInMax = 1.0f;
    public float influenceOutMin = 0.1f;
    public float influenceOutMax = 0.75f;

    // =========================
    // NEW: RMS smoothing (kills jitter at the source)
    // =========================
    [Header("Wind RMS Smoothing (Attack/Release)")] [Tooltip("Seconds to rise toward gusts. Smaller = snappier.")]
    public float windRmsAttack = 0.08f;

    [Tooltip("Seconds to fall back to calm. Larger = smoother decay.")]
    public float windRmsRelease = 0.35f;

    [Tooltip("Optional: clamps the final smoothed RMS (safety). 0 disables.")]
    public float windRmsClamp = 0f;

    private float windRmsSmoothed = 0f;

    // Debug values for editor tool (updated every frame)
    [NonSerialized] public float debugWindRms = 0f; // raw RMS
    [NonSerialized] public float debugWindRmsSmoothed = 0f; // smoothed RMS
    [NonSerialized] public float debugWind01 = 0f; // normalized 0..1 (after pow)
    [NonSerialized] public float debugWindOut = 0f; // windOut (clip2Loudness)
    [NonSerialized] public float debugInfluenceTarget = 0f; // target influence

    // Sample buffers
    private float[] thunderSamples;
    private float[] windSamples;

    void Start()
    {
        AllocateBuffers();
        currentInfluence = Mathf.Clamp01(currentInfluence);
    }

    private void OnValidate()
    {
        if (Application.isPlaying)
            EnsureBuffers();
    }

    private void AllocateBuffers()
    {
        var n = Mathf.Max(512, sampleDataLength);
        thunderSamples = new float[n];
        windSamples = new float[n];
    }

    private void EnsureBuffers()
    {
        var n = Mathf.Max(512, sampleDataLength);
        if (thunderSamples == null || thunderSamples.Length != n ||
            windSamples == null || windSamples.Length != n)
            AllocateBuffers();
    }

    void Update()
    {
        if (PauseManager.isPaused || Inventory_Screen_Manager.inventoryOn) return;
        if (!audioSource || !audioSource.clip || !audioSourceB || !audioSourceB.clip) return;

        EnsureBuffers();

        var dt = Time.deltaTime;

        // Pull sample windows ending at the playhead (stable)
        ReadWindowEndingAtPlayhead(audioSource, thunderSamples);
        ReadWindowEndingAtPlayhead(audioSourceB, windSamples);

        // =========================
        // THUNDER (unchanged logic)
        // =========================
        clipLoudness = 0f;
        for (var i = 0; i < thunderSamples.Length; i++)
        {
            var a = Mathf.Abs(thunderSamples[i]);
            if (a > 0.1f) clipLoudness += a;
        }

        clipLoudness /= thunderSamples.Length;
        clipLoudness = clipLoudness * scaleFactor + 0.35f;

        // =========================
        // WIND: RMS -> attack/release smooth -> shared mapping
        // =========================
        var windRms = ComputeRms(windSamples);
        debugWindRms = windRms;

        // Attack/release smoothing on RMS to remove jitter BEFORE mapping
        windRmsSmoothed = AttackRelease(windRmsSmoothed, windRms, windRmsAttack, windRmsRelease, dt);
        if (windRmsClamp > 0f) windRmsSmoothed = Mathf.Min(windRmsSmoothed, windRmsClamp);

        debugWindRmsSmoothed = windRmsSmoothed;

        float wind01, windOut, influenceTarget;
        EvaluateWindFromRms(windRmsSmoothed, out wind01, out windOut, out influenceTarget);

        debugWind01 = wind01;
        debugWindOut = windOut;
        debugInfluenceTarget = influenceTarget;

        clip2Loudness = windOut;

        // Smooth influence (shader/foliage value)
        // Using exp smoothing so it's stable across framerates.
        var k = 1f - Mathf.Exp(-dt * Mathf.Max(0.01f, smoothingSpeed));
        currentInfluence = currentInfluence + (influenceTarget - currentInfluence) * k;
        if (crepuscularMat) crepuscularMat.SetFloat("_influence", currentInfluence);
        // Push influence to global
        Shader.SetGlobalFloat("_influence", currentInfluence);

        // =========================
        // Lightning/reflection (unchanged idea)
        // =========================
        enviroReflectivity = clipLoudness;

        RenderSettings.reflectionIntensity =
            ExtensionMethods.Math.Remap(enviroReflectivity, 0.35f, 0.8f, 0.25f, 1.0f);

        if (skyBox)
        {
            skyBox.SetFloat(Exposure,
                ExtensionMethods.Math.Remap(enviroReflectivity, 0.35f, 0.8f, 0.25f, 0.85f));
        }

        // =========================
        // Rain from windOut (mapped wind intensity)
        // =========================
        if (rainParticleSystem)
        {
            var emission = rainParticleSystem.emission;
            emission.rateOverTime = 200 + 500 * clip2Loudness;

            var shape = rainParticleSystem.shape;
            shape.randomDirectionAmount =
                ExtensionMethods.Math.Remap(clip2Loudness, 0f, 1.75f, 0.05f, 0.65f);
        }
    }

    // =========================================================
    // SINGLE SOURCE OF TRUTH: Editor + runtime both call this.
    // =========================================================
    public void EvaluateWindFromRms(float windRms, out float wind01, out float windOut, out float influence)
    {
        // Gain
        var rms = windRms * Mathf.Max(0.0001f, windScaleFactor);

        // Normalize RMS -> 0..1
        var expected = Mathf.Max(1e-6f, windExpectedMaxRMS);
        wind01 = Mathf.Clamp01(rms / expected);

        // Perceptual curve
        wind01 = Mathf.Pow(wind01, Mathf.Max(0.01f, windResponsePow));

        // Baseline mapping (keeps motion when calm)
        var baseVal = Mathf.Clamp01(windBaseline);
        var rangeVal = Mathf.Clamp01(windRange);
        windOut = Mathf.Clamp01(baseVal + rangeVal * wind01);

        // Influence remap
        var t = (windOut - influenceInMin) / Mathf.Max(1e-6f, influenceInMax - influenceInMin);
        influence = Mathf.Lerp(influenceOutMin, influenceOutMax, t);
    }

    // =========================================================
    // Helpers
    // =========================================================
    private void ReadWindowEndingAtPlayhead(AudioSource src, float[] buffer)
    {
        var N = buffer.Length;
        var clipSamples = src.clip.samples;
        if (clipSamples <= 0) return;

        var end = src.timeSamples;
        var start = end - N;

        start %= clipSamples;
        if (start < 0) start += clipSamples;

        src.clip.GetData(buffer, start);
    }

    private static float ComputeRms(float[] x)
    {
        var sumSq = 0.0;
        for (var i = 0; i < x.Length; i++)
        {
            double s = x[i];
            sumSq += s * s;
        }

        return Mathf.Sqrt((float)(sumSq / x.Length));
    }

    private static float AttackRelease(float current, float target, float attack, float release, float dt)
    {
        var tc = target > current ? Mathf.Max(attack, 1e-5f) : Mathf.Max(release, 1e-5f);
        var k = 1f - Mathf.Exp(-dt / tc);
        return current + (target - current) * k;
    }
}