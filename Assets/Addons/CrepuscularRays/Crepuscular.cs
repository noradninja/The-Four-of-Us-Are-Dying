using System.Collections;
using System.Collections.Generic;
using UnityEngine;

[RequireComponent(typeof(Camera))]
[AddComponentMenu("Effects/Crepuscular Rays", -1)]
public class Crepuscular : MonoBehaviour
{

	public Material material;
	public GameObject mainLight;
	public RenderTexture stencilRT;
	static readonly int blurTexString = Shader.PropertyToID("_BlurTex");
	static readonly int cosAngle = Shader.PropertyToID("_CosAngle");
	static readonly int frameValue = Shader.PropertyToID("_FrameValue");
	[Range(0, 20)]
	public int blurSize = 3;
	[Range(1, 16)]
	public int resolutionDivisor = 1;

	public static readonly int LightPos = Shader.PropertyToID("_LightPos");
	public Vector4 lightVector;
	private static readonly int Parameter = Shader.PropertyToID("_Parameter");
	public float cosineAngle;

	private int tick;
	// Start is called before the first frame update
	void Start()
    {
      
    }

	void Update()
	{
		var getAngle = material.GetFloat(cosAngle);
		cosineAngle = getAngle;
		if (tick != 3)
		{
			material.SetFloat(frameValue, 1f);
			tick++;
		//print("Wait frame " + tick);
		}
		else

		{
			//print("Depth tick");
			material.SetFloat(frameValue, 0f);
			tick = 0;
			
		}
	}
	
	//[ImageEffectOpaque]
	private void OnRenderImage(RenderTexture source, RenderTexture destination)
	{
		var blurTex = RenderTexture.GetTemporary(128, 128, 0, source.format);
		//blurTex.filterMode = FilterMode.Point;
		lightVector =GetComponent<Camera>().WorldToViewportPoint(transform.position - mainLight.transform.forward);
		material.SetVector(LightPos, lightVector);
		Graphics.Blit(source, blurTex, material, 0);
		material.SetTexture(blurTexString, blurTex);

		float widthMod = 1.0f / resolutionDivisor;
	if (blurSize > 0){
		for(int i = 0; i < 1; i++) {
                float iterationOffs = (i*1.0f);
                material.SetVector (Parameter, new Vector4 (blurSize * widthMod + iterationOffs, -blurSize * widthMod - iterationOffs, 0.0f, 0.0f));

                // vertical blur
                RenderTexture rt2 = RenderTexture.GetTemporary(128, 128, 0, source.format);
                rt2.filterMode = FilterMode.Point;
                Graphics.Blit (blurTex, rt2, material, 1);
                RenderTexture.ReleaseTemporary (blurTex);
                blurTex = rt2;

                // horizontal blur
                rt2 = RenderTexture.GetTemporary(128, 128, 0, source.format);
                rt2.filterMode = FilterMode.Point;
                Graphics.Blit (blurTex, rt2, material, 2);
                RenderTexture.ReleaseTemporary (blurTex);
                blurTex = rt2;
		}
	}
		RenderTexture.ReleaseTemporary(blurTex);
		Graphics.Blit(source, destination, material, 3);
	}
}
