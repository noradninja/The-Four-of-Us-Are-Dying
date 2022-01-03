using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.UI;

public class GetRenderPath : MonoBehaviour {

public Camera MainCam;
public Text UIText;
	// Use this for initialization
	void Start () {
		UIText.text = "Rendering Path: " + MainCam.actualRenderingPath;
		print(MainCam.actualRenderingPath);
	}
	
	// Update is called once per frame
	void Update () {
		
	}
}
