using System;
using UnityEngine;
using DigitalOpus.MB.Core;

public class Weather_Manager : MonoBehaviour
{
    // Audio sources for processing sample data
    public AudioSource audioSource;   // thunder (keep your existing method)
    public AudioSource audioSourceB;  // wind (RMS)

    // Particle system for rain effects
    public ParticleSystem rainParticleSystem;

    // Audio processing properties
    public int sampleDataLength = 512;
    public float scaleFactor = 1;
    public float windScaleFactor = 1;

    // Materials for skybox, crepuscular light, trees, and bushes
    public Material skyBox;
    public Material crepuscularMat;
    public Material[] treeMats;
    public Material[] bushMats;

    // Variables to store computed audio loudness
    public float clipLoudness = 0;   // thunder (your current method)
    public float clip2Loudness = 0;  // wind (RMS-based)

    // Arrays to hold sample data from the audio clips
    private float[] clipSampleData;
    private float[] clip2SampleData;

    // Environmental reflection and skybox exposure values
    public float enviroReflectivity;
    private static readonly int Exposure = Shader.PropertyToID("_Exposure");

    // Smoothing value for fog (if needed)
    public float fogLerp;

    // Current smoothed _influence value
    public static float currentInfluence = 0.1f;
    // Controls how fast currentInfluence catches up to the target value.
    public float smoothingSpeed = 5f;

    [Header("Wind RMS (audioSourceB only)")]
    [Tooltip("If your wind RMS rarely exceeds ~0.10-0.20, set this to the gust peak so normalized reaches 1.")]
    public float windExpectedMaxRMS = 0.15f;

    [Tooltip("Perceptual curve for wind intensity. <1 boosts low wind, >1 suppresses low wind.")]
    public float windResponsePow = 0.6f;

    void Start()
    {
        clipSampleData = new float[sampleDataLength];
        clip2SampleData = new float[sampleDataLength];
        currentInfluence = 0.1f;
    }

    void Update()
    {
        if (PauseManager.isPaused || Inventory_Screen_Manager.inventoryOn) return;
        if (!audioSource || !audioSource.clip || !audioSourceB || !audioSourceB.clip) return;

        // Reset loudness values for this frame
        clipLoudness = 0f;
        clip2Loudness = 0f;

        // Get the sample data from both audio sources
        audioSource.clip.GetData(clipSampleData, audioSource.timeSamples);
        audioSourceB.clip.GetData(clip2SampleData, audioSourceB.timeSamples);

        // =========================
        // THUNDER (unchanged logic)
        // =========================
        foreach (var sample in clipSampleData)
        {
            if (Math.Abs(sample) > 0.1f)
                clipLoudness += Math.Abs(sample);
        }
        clipLoudness /= sampleDataLength;
        clipLoudness = clipLoudness * scaleFactor + 0.35f;

        // ==========================================
        // WIND (RMS logic ONLY for audioSourceB)
        // ==========================================
        float sumSq = 0f;
        for (int i = 0; i < clip2SampleData.Length; i++)
        {
            float s = clip2SampleData[i];
            sumSq += s * s;
        }

        float windRms = Mathf.Sqrt(sumSq / clip2SampleData.Length);

        // Apply gain
        windRms *= windScaleFactor;

        // Normalize RMS into 0..1 against expected peak
        float wind01 = windRms / Mathf.Max(1e-6f, windExpectedMaxRMS);
        wind01 = Mathf.Clamp01(wind01);

        // Perceptual curve
        wind01 = Mathf.Pow(wind01, Mathf.Max(0.01f, windResponsePow));

        // Keep your old "never zero" behavior (baseline of 0.1)
        clip2Loudness = 0.1f + 0.9f * wind01; // 0 -> 0.1, 1 -> 1.0

        // Map clip2Loudness to target influence (keep your range)
        float targetInfluence = ExtensionMethods.Math.Remap(clip2Loudness, 0.01f, 1.0f, 0.0f, 1.0f);

        // Smoothly interpolate currentInfluence toward the targetInfluence.
        currentInfluence = Mathf.Lerp(currentInfluence, targetInfluence, Time.deltaTime * smoothingSpeed);

        // Update the _influence value for each tree material.
        foreach (var material in treeMats)
            if (material) material.SetFloat("_influence", currentInfluence);

        // Update the _influence value for each bush material.
        foreach (var material in bushMats)
            if (material) material.SetFloat("_influence", currentInfluence);

        // Optional: also feed globally for shaders that read globals
        Shader.SetGlobalFloat("_influence", currentInfluence);

        // ==========================================
        // Lightning / reflections (unchanged behavior)
        // ==========================================
        enviroReflectivity = clipLoudness;
        RenderSettings.reflectionIntensity =
            ExtensionMethods.Math.Remap(enviroReflectivity, 0.35f, 0.8f, 0.25f, 1.0f);

        if (skyBox)
        {
            skyBox.SetFloat(Exposure,
                ExtensionMethods.Math.Remap(enviroReflectivity, 0.35f, 0.8f, 0.25f, 0.85f));
        }

        // Rain uses wind intensity (now RMS-based)
        if (rainParticleSystem)
        {
            var emission = rainParticleSystem.emission;
            emission.rateOverTime = 200 + (1000 * targetInfluence);

            var shapeModule = rainParticleSystem.shape;
            shapeModule.randomDirectionAmount =
                ExtensionMethods.Math.Remap(clip2Loudness, 0f, 1.75f, 0.05f, 0.65f);
        }
    }
}