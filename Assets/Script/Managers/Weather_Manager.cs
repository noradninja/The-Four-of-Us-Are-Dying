using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.UI;
using System;
using DigitalOpus.MB.Core;

public class Weather_Manager : MonoBehaviour {

// Properties
public AudioSource audioSource;
public AudioSource audioSourceB;
public ParticleSystem rainParticleSystem;
public float step = 0.33f;
public int sampleDataLength = 512;
public float scaleFactor = 1;
public float windScaleFactor = 1;
public Material skyBox;
public Material crepuscularMat;
public Material[] treeMats;
public Material[] bushMats;
public float clipLoudness = 0;
public float clip2Loudness = 0;
public float oldClipLoudness = 0;
public float clipLoudnessB;
private float[] clipSampleData;
private float[] clip2SampleData;
public float currentUpdateTime;
public float enviroReflectivity;
private static readonly int Contrast = Shader.PropertyToID("_Contrast");
private static readonly int Exposure = Shader.PropertyToID("_Exposure");
public float fogLerp;
public float startInfluence;
public float endInfluence = 0.25f;
public bool isLerping = false;
public IEnumerator lerpRoutine;



public void Start ()
{
	isLerping = false;
	clipSampleData = new float[sampleDataLength];
	clip2SampleData = new float[sampleDataLength];
	startInfluence = 0.1f;
	endInfluence = 0.2f;
	// lerpRoutine = Lerp(startInfluence, endInfluence, step);
	// StartCoroutine(lerpRoutine);
}
	
	public void Update () {
		if(!PauseManager.isPaused && !Inventory_Screen_Manager.inventoryOn){
			//currentUpdateTime += Time.deltaTime;
			audioSource.clip.GetData(clipSampleData, audioSource.timeSamples);
			audioSourceB.clip.GetData(clip2SampleData, audioSourceB.timeSamples);
			// startInfluence = crepuscularMat.GetFloat("_fogSpeed");
			// endInfluence = ExtensionMethods.Math.Remap(clip2Loudness, 0f, 0.5f, 0.3f, 0.4f);

			foreach (var sample in clipSampleData){
				if (Math.Abs(sample) > 0.1f){
					clipLoudness += Math.Abs(sample);
				}
			}
			foreach (var sample2 in clip2SampleData){
				if (Math.Abs(sample2) > 0.1f){
					clip2Loudness += Math.Abs(sample2);
				}
			}
			
			clipLoudness /= sampleDataLength;
			clip2Loudness /= sampleDataLength;
			clipLoudness *= scaleFactor;
			clip2Loudness *= windScaleFactor;
			clipLoudness += 0.55f;

			// if (!isLerping)
			// {
			// 	if (currentUpdateTime >= step)
			// 	{
			// 		crepuscularMat.SetFloat("_fogSpeed", endInfluence);
			// 		StopCoroutine(lerpRoutine);
			// 		currentUpdateTime = 0.0f;
			// 	}
			// 	lerpRoutine = Lerp(startInfluence, endInfluence, step);
			// 	StartCoroutine(lerpRoutine);
			// }
			
			foreach (var material in treeMats)
			{
				material.SetFloat("_influence", 
					ExtensionMethods.Math.Remap(clip2Loudness, 0f, 0.25f, 
						0.05f, 0.2f));
			}
			foreach (var material in bushMats)
			{

				material.SetFloat("_influence",
					ExtensionMethods.Math.Remap(clip2Loudness, 0f, 0.25f, 
						
						0.03f, 0.08f));
			}
			enviroReflectivity = clipLoudness;
			RenderSettings.reflectionIntensity = 
				ExtensionMethods.Math.Remap(enviroReflectivity, 0.55f,0.8f,
					0.55f, 1.0f);
			skyBox.SetFloat(Exposure, 
						ExtensionMethods.Math.Remap(enviroReflectivity, 0.55f,0.8f, 
							0.55f, 0.85f));
			var emission = rainParticleSystem.emission;
			emission.rateOverTime = 200 + (1000 * clip2Loudness);
			var randomDirectionAmount = rainParticleSystem.shape;
				randomDirectionAmount.randomDirectionAmount = 
					ExtensionMethods.Math.Remap(clip2Loudness, 0f, 1.75f, 
						0.05f, 0.65f);
		}
	}

	public IEnumerator Lerp(float startValue, float endValue, float duration)
	{
		float time = 0.0f;
		while (time < duration)
		{
			isLerping = true;
			fogLerp = Mathf.Lerp(startValue, endValue, time/duration);
			crepuscularMat.SetFloat("_fogSpeed", fogLerp);
			time += Time.deltaTime;
			yield return null;
		}
		crepuscularMat.SetFloat("_fogSpeed", endValue);
        isLerping = false;
	}

}
 


