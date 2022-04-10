using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.UI;

public class Res : MonoBehaviour {
	public Text text;
	// Use this for initialization
	void Start () {
		
		 Resolution[] resolutions = Screen.resolutions;

        // Print the resolutions
        foreach (var res in resolutions)
        {
           text.text += (res.width + "x" + res.height + ", ");
        }
	}
	
	// Update is called once per frame
	void Update () {
		
	}
}
