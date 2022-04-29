using System.Collections;
using System.Collections.Generic;
using UnityEngine;

[RequireComponent(typeof(Camera)), ExecuteInEditMode]
[AddComponentMenu("Effects/Crepuscular Rays", -1)]
public class Crepuscular : MonoBehaviour
{

	public Material material;
	public GameObject mainLight;
	static readonly int blurTexString = Shader.PropertyToID("_BlurTex");
	[Range(0, 20)]
	public int blurSize = 3;
	[Range(1, 16)]
	public int resolutionDivisor = 1;

	private static readonly int LightPos = Shader.PropertyToID("_LightPos");
	private static readonly int Parameter = Shader.PropertyToID("_Parameter");


	// Start is called before the first frame update
	void Start()
    {
      
    }

	//[ImageEffectOpaque]
	private void OnRenderImage(RenderTexture source, RenderTexture destination)
	{
		var blurTex = RenderTexture.GetTemporary(Mathf.RoundToInt(128), Mathf.RoundToInt(64), 0, source.format);
		material.SetVector(LightPos, GetComponent<Camera>().WorldToViewportPoint(transform.position - mainLight.transform.forward)); 
		Graphics.Blit(source, blurTex, material, 0);
		material.SetTexture(blurTexString, blurTex);

		float widthMod = 1.0f / resolutionDivisor;
	if (blurSize > 0){
		for(int i = 0; i < 1; i++) {
                float iterationOffs = (i*1.0f);
                material.SetVector (Parameter, new Vector4 (blurSize * widthMod + iterationOffs, -blurSize * widthMod - iterationOffs, 0.0f, 0.0f));

                // vertical blur
                RenderTexture rt2 = RenderTexture.GetTemporary(128, 64, 0, source.format);
                rt2.filterMode = FilterMode.Bilinear;
                Graphics.Blit (blurTex, rt2, material, 1);
                RenderTexture.ReleaseTemporary (blurTex);
                blurTex = rt2;

                // horizontal blur
                rt2 = RenderTexture.GetTemporary(Mathf.RoundToInt(128), Mathf.RoundToInt(64), 0, source.format);
                rt2.filterMode = FilterMode.Bilinear;
                Graphics.Blit (blurTex, rt2, material, 2);
                RenderTexture.ReleaseTemporary (blurTex);
                blurTex = rt2;
		}
	}
		RenderTexture.ReleaseTemporary(blurTex);
		Graphics.Blit(source, destination, material, 3);
	}

	// Update is called once per frame
	void Update()
    {
        
    }
}
