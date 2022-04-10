using System.Collections;
using System.Collections.Generic;
using UnityEngine;
// [ExecuteInEditMode]
[RequireComponent(typeof(Camera))]
public class SAI2x : MonoBehaviour {
	public Material material;
	// Use this for initialization
	void Start () {
		
	}
	
	// Update is called once per frame
	void Update () {
		
	}
	private void OnRenderImage(RenderTexture source, RenderTexture destination)
	{
		Graphics.Blit(source, destination, material);;
	}
}
