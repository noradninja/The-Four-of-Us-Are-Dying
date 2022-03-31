using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.UI;

public class Lightning_Manager : MonoBehaviour {

// Properties
public AudioSource audioSource;
public float step = 0.01f;
public int sampleDataLength = 1024;
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

			audioSource.clip.GetData(clipSampleData, audioSource.timeSamples);
			oldClipLoudness = clipLoudness;
			clipLoudness = 0f;
			clipLoudnessB = 0f;
			foreach (var sample in clipSampleData){
				if (Mathf.Abs(sample) > 0.1f){
					clipLoudness += Mathf.Abs(sample);
				}
			}
			clipLoudness /= sampleDataLength;
			clipLoudness *= scaleFactor;
			clipLoudness += 0.75f;
			
			clipLoudnessB = Mathf.Lerp(oldClipLoudness, (clipLoudness/2) + Random.Range(0.1f,0.3f)-0.75F, currentUpdateTime);
			skyBox.SetFloat("_Exposure", clipLoudness);
			lerpColor.a = clipLoudnessB/10;
			contrastHolder = Mathf.Clamp01(clipLoudnessB) * 0.35f + 1.15f;
			glowMat.SetColor("_TintColor", lerpColor);
			//crepuscularMat.SetFloat("_Contrast", contrastHolder);
		}
	}
 
}

