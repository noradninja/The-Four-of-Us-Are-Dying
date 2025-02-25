using System.Collections;
using System.Collections.Generic;
using UnityEngine;
// [ExecuteInEditMode]
[RequireComponent(typeof(Camera))]
public class SAI2x : MonoBehaviour {
	public Material material;

	private void OnRenderImage(RenderTexture source, RenderTexture destination)
	{
		source.filterMode = FilterMode.Bilinear;
		Graphics.Blit(source, destination, material, 0);
	}
}
