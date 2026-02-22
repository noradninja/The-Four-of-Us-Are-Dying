using System;
using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using DigitalOpus.MB.Core;

public class Weather_Manager : MonoBehaviour 
{
    // Audio sources for processing sample data
    public AudioSource audioSource;
    public AudioSource audioSourceB;

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
    public float clipLoudness = 0;
    public float clip2Loudness = 0;
    
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

    // Start is called before the first frame update
    void Start()
    {
        // Initialize the audio sample data arrays
        clipSampleData = new float[sampleDataLength];
        clip2SampleData = new float[sampleDataLength];
        currentInfluence = 0.1f;
    }

    // Update is called once per frame
    void Update()
    {
        // Check if the game is not paused and no inventory screen is open
        if (!PauseManager.isPaused && !Inventory_Screen_Manager.inventoryOn)
        {
            // Reset loudness values for this frame
            clipLoudness = 0;
            clip2Loudness = 0;

            // Get the sample data from both audio sources
            audioSource.clip.GetData(clipSampleData, audioSource.timeSamples);
            audioSourceB.clip.GetData(clip2SampleData, audioSourceB.timeSamples);

            // Process the first audio source samples to compute clipLoudness
            foreach (var sample in clipSampleData)
            {
                if (Math.Abs(sample) > 0.1f)
                {
                    clipLoudness += Math.Abs(sample);
                }
            }
            // Process the second audio source samples to compute clip2Loudness
            foreach (var sample2 in clip2SampleData)
            {
                if (Math.Abs(sample2) > 0.1f)
                {
                    clip2Loudness += Math.Abs(sample2);
                }
            }

            // Average out the samples
            clipLoudness /= sampleDataLength;
            clip2Loudness /= sampleDataLength;
            
            // Apply scaling factors
            clipLoudness = clipLoudness * scaleFactor + 0.55f;
            clip2Loudness *= windScaleFactor + 0.1f;

            // Map clip2Loudness to a target _influence value.
            // This example remaps clip2Loudness from a range [0, 0.25] to [0.05, 0.2].
            float targetInfluence = ExtensionMethods.Math.Remap(clip2Loudness, 0.01f, 1.0f, 0.125f, 0.75f);

            // Smoothly interpolate currentInfluence toward the targetInfluence.
            currentInfluence = Mathf.Lerp(currentInfluence, targetInfluence, Time.deltaTime * smoothingSpeed);

            // Update the _influence value for each tree material.
            foreach (var material in treeMats)
            {
                material.SetFloat("_influence", currentInfluence);
            }
            // Update the _influence value for each bush material.
            foreach (var material in bushMats)
            {
                material.SetFloat("_influence", currentInfluence);
            }

            // Update environmental reflection and skybox exposure based on clipLoudness.
            enviroReflectivity = clipLoudness;
            RenderSettings.reflectionIntensity = ExtensionMethods.Math.Remap(enviroReflectivity, 0.55f, 0.8f, 0.55f, 1.0f);
            skyBox.SetFloat(Exposure, ExtensionMethods.Math.Remap(enviroReflectivity, 0.55f, 0.8f, 0.55f, 0.85f));

            // Update the rain particle system's emission rate.
            var emission = rainParticleSystem.emission;
            emission.rateOverTime = 200 + (500 * clip2Loudness);

            // Update the rain particle system's random direction amount.
            var shapeModule = rainParticleSystem.shape;
            shapeModule.randomDirectionAmount = ExtensionMethods.Math.Remap(clip2Loudness, 0f, 1.75f, 0.05f, 0.65f);
        }
    }
}
