using System.Collections;
using System.Collections.Generic;
using UnityEngine;
[ExecuteInEditMode]
public class SetShadowResolution : MonoBehaviour {

	public int resolution;
	public Light thisLight;
	void Awake () {
        	thisLight.shadowCustomResolution = resolution;
	}
}
