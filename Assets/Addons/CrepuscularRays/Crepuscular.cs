using System.Collections;
using System.Collections.Generic;
using UnityEngine;

[RequireComponent(typeof(Camera)), ExecuteInEditMode]
[AddComponentMenu("Effects/Crepuscular Rays", -1)]
public class Crepuscular : MonoBehaviour
{

	public Material material;
	public GameObject myLight;
	static readonly int blurTexString = Shader.PropertyToID("_BlurTex");

	// Start is called before the first frame update
	void Start()
    {
        
    }
  [ImageEffectOpaque]

	private void OnRenderImage(RenderTexture source, RenderTexture destination)
	{
		var blurTex = RenderTexture.GetTemporary(Mathf.RoundToInt(Screen.width /8f), Mathf.RoundToInt(Screen.height /8f), 0, source.format);
		material.SetVector("_LightPos", GetComponent<Camera>().WorldToViewportPoint(transform.position - myLight.transform.forward));
		Graphics.Blit(source, blurTex, material, 0);
		material.SetTexture(blurTexString, blurTex);
		RenderTexture.ReleaseTemporary(blurTex);
		Graphics.Blit(source, destination, material, 1);
	}

	// Update is called once per frame
	void Update()
    {
        
    }
}
