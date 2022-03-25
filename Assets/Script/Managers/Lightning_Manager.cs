using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class Lightning_Manager : MonoBehaviour {

// Properties
public string wavevoid  = "sin"; // possible values: sin, tri(angle), sqr(square), saw(tooth), inv(verted sawtooth), noise (random)
public float baseVal = 0.0f; // start
public float amplitude = 1.0f; // amplitude of the wave
public float phase = 0.0f; // start point inside on wave cycle
public float frequency = 0.5f; // cycle frequency per second
public Light thisLight;
 
// Keep a copy of the original color
private Color originalColor;
public float finalVal;
 
// Store the original color
void Start () {
	
    originalColor = thisLight.color;
}
 
void Update () {
	EvalWave();
	thisLight.color = originalColor * finalVal;
}
 
void EvalWave () {
	float x = (Time.time + phase)*frequency;
	float y;
	
	x = x - Mathf.Floor(x); // normalized value (0..1)
	
		if (wavevoid=="sin") {
			y = Mathf.Sin(x*2*Mathf.PI);
		}
		else if (wavevoid=="tri") {
			if (x < 0.5f)
				y = 4.0f * x - 1.0f;
			else
				y = -4.0f * x + 3.0f;  
		}    
		else if (wavevoid=="sqr") {
			if (x < 0.5f)
				y = 1.0f;
			else
				y = -1.0f;  
		}    
		else if (wavevoid=="saw") {
			y = x;
		}    
		else if (wavevoid=="inv") {
			y = 1.0f - x;
		}    
		else if (wavevoid=="noise") {
			y = 1-x - (Random.value);
		}
		else {
			y = 1.0f;
		}
	finalVal = (y*amplitude)+baseVal;          
	}
}

