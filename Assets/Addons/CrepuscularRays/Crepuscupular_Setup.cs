using System;
using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class Crepuscupular_Setup : MonoBehaviour
{

	public Material material;

	public RenderTexture stencilRT;
	// Use this for initialization
	void Start () {
		
	}
	
	// Update is called once per frame
	void Update () {
		
	}
	//[ImageEffectOpaque]
	private void OnRenderImage(RenderTexture source, RenderTexture destination)
	{
		Graphics.Blit(source, stencilRT, material, 0);
	}
}
