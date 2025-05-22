using System.Collections;
using System.Collections.Generic;
using UnityEngine;
// [ExecuteInEditMode]
[RequireComponent(typeof(Camera))]
public class EPX : MonoBehaviour {
	public Material material;

	private void OnRenderImage(RenderTexture source, RenderTexture destination)
	{
		source.filterMode = FilterMode.Point;
		Graphics.Blit(source, destination, material, 0);
	}
}
