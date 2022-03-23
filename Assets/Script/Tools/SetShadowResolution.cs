using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class SetShadowResolution : MonoBehaviour {

	public int resolution;
	public Light thisLight;
	void Start () {
        	thisLight.shadowCustomResolution = resolution;
	}
}
