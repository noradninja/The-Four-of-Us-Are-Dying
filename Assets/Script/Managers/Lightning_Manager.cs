using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.UI;
using System;

public class Lightning_Manager : MonoBehaviour {

// Properties
public AudioSource audioSource;
public float step = 0.33f;
public int sampleDataLength = 512;
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
private static readonly int TintColor = Shader.PropertyToID("_TintColor");
private static readonly int Contrast = Shader.PropertyToID("_Contrast");
private static readonly int Exposure = Shader.PropertyToID("_Exposure");


public void Awake () {
		clipSampleData = new float[sampleDataLength];
		lerpColor = glowMat.GetColor(TintColor);
		contrastHolder = crepuscularMat.GetFloat(Contrast);
	}
	
	public void Update () {
		if(!PauseManager.isPaused && !Inventory_Screen_Manager.inventoryOn){
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
				if (Math.Abs(sample) > 0.1f){
					clipLoudness += Math.Abs(sample);
				}
			}
			clipLoudness /= sampleDataLength;
			clipLoudness *= scaleFactor;
			clipLoudness += 0.75f;
				
			clipLoudnessB = Mathf.Lerp(oldClipLoudness, (clipLoudness/2) + UnityEngine.Random.Range(0.1f,0.3f)-0.75F, currentUpdateTime);
			skyBox.SetFloat(Exposure, clipLoudness);
			lerpColor.a = clipLoudnessB/10;
			glowMat.SetColor(TintColor, lerpColor);
		}
	}
	}
 


