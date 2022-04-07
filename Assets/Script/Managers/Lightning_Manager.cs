using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.UI;
using System;

public class Lightning_Manager : MonoBehaviour {

// Properties
public AudioSource audioSource;
public float step = 0.33f;
public int sampleDataLength = 256;
public float scaleFactor = 1;
public Material skyBox;
public Material glowMat;
public Material crepuscularMat;
public float clipLoudness;
public float oldClipLoudness;
public float clipLoudnessB;
private float[] clipSampleData;
private float currentUpdateTime = 0f;
public float contrastHolder;
public Color lerpColor;
 

	public void Awake () {
		clipSampleData = new float[sampleDataLength];
		lerpColor = glowMat.GetColor("_TintColor");
		contrastHolder = crepuscularMat.GetFloat("_Contrast");
	}
	
	public void Update () {
		currentUpdateTime += Time.deltaTime;
		
		if (currentUpdateTime >= step){
			currentUpdateTime = 0f;
		}
		else {
			currentUpdateTime += 0.1f;
		}

			audioSource.clip.GetData(clipSampleData, audioSource.timeSamples);
			oldClipLoudness = clipLoudness;
			clipLoudness = 0f;
			clipLoudnessB = 0f;
			foreach (var sample in clipSampleData){
				// float absSample = Math.Abs(sample);
				if ( sample > 0.1f){
					clipLoudness += sample;
				}
			}
			clipLoudness /= sampleDataLength;
			clipLoudness *= scaleFactor;
			clipLoudness += 0.75f;
			
			clipLoudnessB = Mathf.Lerp(oldClipLoudness, (clipLoudness/2) + UnityEngine.Random.Range(0.1f,0.3f)-0.75F, currentUpdateTime);
			skyBox.SetFloat("_Exposure", clipLoudness);
			lerpColor.a = clipLoudnessB/10;
			glowMat.SetColor("_TintColor", lerpColor);
		}
	}
 


