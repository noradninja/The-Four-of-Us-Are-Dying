using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class ClearPlayerPrefs : MonoBehaviour {

	// Use this for initialization
	void Start () {
		PlayerPrefs.DeleteAll();
	}
}
