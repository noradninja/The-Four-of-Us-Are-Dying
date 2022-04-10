using System.Collections;
using System.Collections.Generic;
using UnityEngine;
// [ExecuteInEditMode]
[RequireComponent(typeof(Camera))]
public class SAI2x : MonoBehaviour {
	public Material material;
	static readonly int blurTexString = Shader.PropertyToID("_MainTex");
	// Use this for initialization
	void Start () {
		
	}
	
	// Update is called once per frame
	void Update () {
		
	}
	private void OnRenderImage(RenderTexture source, RenderTexture destination)
	{
		// var blurTex = RenderTexture.GetTemporary(720, 408, 0, RenderTextureFormat.Default);
		source.filterMode = FilterMode.Bilinear;
		Graphics.Blit(source, destination, material, 0);
		// material.SetTexture(blurTexString, blurTex);
		// Graphics.Blit(blurTex, destination);
		// RenderTexture.ReleaseTemporary(blurTex);
	}
}
