using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class Depth_Render : MonoBehaviour
{
	public Shader DepthShader;
	// Use this for initialization
	void Start() {
		GetComponent<Camera>().SetReplacementShader (DepthShader, "RenderType");
	}
	
	// Update is called once per frame
	void Update () {
		
	}
}
