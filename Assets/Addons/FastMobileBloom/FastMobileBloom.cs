using UnityEngine;

[ExecuteInEditMode]
[RequireComponent(typeof(Camera))]
[AddComponentMenu("Image Effects/FastMobileBloom")]
public class FastMobileBloom : MonoBehaviour
{
	[Range(0.0f, 1.5f)] public float threshold = 0.25f;

	[Range(0.00f, 4.0f)] public float intensity = 1.0f;
	[Range(0.25f, 5.5f)] public float blurSize = 1.0f;
	[Range(1, 4)] public int blurIterations = 2;

	public Material fastBloomMaterial = null;

	void OnRenderImage(RenderTexture source, RenderTexture destination)
	{
		int rtW = 128;
		int rtH = 73;
		
		//initial downsample
		RenderTexture rt = RenderTexture.GetTemporary(rtW, rtH, 0, source.format);
		rt.DiscardContents();

		fastBloomMaterial.SetFloat("_Spread", blurSize);
		fastBloomMaterial.SetVector("_ThresholdParams", new Vector2(1.0f, -threshold));
		Graphics.Blit(source, rt, fastBloomMaterial, 0);


		// //downscale
		// for(int i = 0; i < blurIterations - 1; i++)
		// {
		// 	RenderTexture rt2 = RenderTexture.GetTemporary(128, 73, 0, source.format);
		// 	rt2.DiscardContents();

		// 	fastBloomMaterial.SetFloat("_Spread", blurSize);
		// 	Graphics.Blit(rt, rt2, fastBloomMaterial, 1);
		// 	RenderTexture.ReleaseTemporary(rt);
		// 	rt = rt2;
		// }
		//upscale
		// for(int i = 0; i < blurIterations - 1; i++)
		// {
		// 	RenderTexture rt2 = RenderTexture.GetTemporary(128, 73, 0, source.format);
		// 	rt2.DiscardContents();

		// 	fastBloomMaterial.SetFloat("_Spread", blurSize);
		// 	Graphics.Blit(rt, rt2, fastBloomMaterial, 2);
		// 	RenderTexture.ReleaseTemporary(rt);
		// 	rt = rt2;
		// 	RenderTexture.ReleaseTemporary(rt2);
		// }

		fastBloomMaterial.SetFloat("_BloomIntensity", intensity);
		fastBloomMaterial.SetTexture("_BloomTex", rt);
		Graphics.Blit(source, destination, fastBloomMaterial, 3);

		RenderTexture.ReleaseTemporary(rt);
	}
}
