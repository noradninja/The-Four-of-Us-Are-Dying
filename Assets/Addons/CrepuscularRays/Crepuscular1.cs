using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.Experimental.GlobalIllumination;

[RequireComponent(typeof(Camera))]
[AddComponentMenu("Effects/Crepuscular Rays", -1)]
public class Crepuscular1 : MonoBehaviour
{

	public Material material;
	public GameObject mainLight;
	public GameObject spotLight;
	public RenderTexture spotRT;
	static readonly int blurTexString = Shader.PropertyToID("_BlurTex");
	static readonly int cosAngle = Shader.PropertyToID("_CosAngle");
	static readonly int frameValue = Shader.PropertyToID("_FrameValue");
	[Range(0, 20)]
	public float blurSize = 3;
	[Range(1, 16)]
	public int resolutionDivisor = 1;

	public static readonly int LightPos = Shader.PropertyToID("_LightPos");
	public static readonly int SpotLightPos = Shader.PropertyToID("_spotPos");
	public Vector4 lightVector;
	public Vector4 spotLightVector;
	private static readonly int Parameter = Shader.PropertyToID("_Parameter");
	public float cosineAngle;

	private int tick;

	private static readonly int SpotRT = Shader.PropertyToID("_spotRT");

	// Start is called before the first frame update
	void Start()
    {
      material.SetTexture(SpotRT, spotRT);
    }

	void Update()
	{
		var randomValue = Random.value;

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
			material.SetFloat("_Random", randomValue);
			tick = 0;
			
		}
	}
	
	//[ImageEffectOpaque]
	private void OnRenderImage(RenderTexture source, RenderTexture destination)
	{
		var blurTex = RenderTexture.GetTemporary(128, 128, 0, source.format);
		var maskTex = RenderTexture.GetTemporary(128, 128, 0, source.format);
		//blurTex.filterMode = FilterMode.Point;
		lightVector =GetComponent<Camera>().WorldToViewportPoint(transform.position - mainLight.transform.forward);
		spotLightVector =GetComponent<Camera>().WorldToViewportPoint(transform.position - spotLight.transform.right);

		material.SetVector(LightPos, lightVector);
		material.SetVector(SpotLightPos, spotLightVector);
		this.GetComponent<Camera>().clearFlags = CameraClearFlags.Skybox;
		Graphics.Blit(source, blurTex, material, 0);
		this.GetComponent<Camera>().clearFlags = CameraClearFlags.SolidColor;
		Graphics.Blit(source, destination);
		this.GetComponent<Camera>().clearFlags = CameraClearFlags.Skybox;
		material.SetTexture(blurTexString, blurTex);
		material.SetTexture(SpotRT, maskTex);

		float widthMod = 1.0f / resolutionDivisor;
	if (blurSize > 0){
		for(int i = 0; i < 1; i++) {
                float iterationOffs = (i*1.0f);
                material.SetVector (Parameter, new Vector4 (blurSize * widthMod + iterationOffs, -blurSize * widthMod - iterationOffs, 0.0f, 0.0f));

                // vertical blur
                RenderTexture rt2 = RenderTexture.GetTemporary(128, 128, 0, source.format);
                rt2.filterMode = FilterMode.Bilinear;
                Graphics.Blit (blurTex, rt2, material, 1);
                RenderTexture.ReleaseTemporary (blurTex);
                blurTex = rt2;

                // horizontal blur
                rt2 = RenderTexture.GetTemporary(128, 128, 0, source.format);
                rt2.filterMode = FilterMode.Bilinear;
                Graphics.Blit (blurTex, rt2, material, 2);
                RenderTexture.ReleaseTemporary (blurTex);
                blurTex = rt2;
		}
	}
		RenderTexture.ReleaseTemporary(blurTex);
		Graphics.Blit(source, destination, material, 3);
	}
}
