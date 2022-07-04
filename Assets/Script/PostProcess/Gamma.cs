using UnityEngine;
using System.Collections;
using UnityStandardAssets.ImageEffects;

[ExecuteInEditMode]
[AddComponentMenu("Image Effects/Color Adjustments/Gamma")]
public class Gamma : PostEffectsBase {
	public enum ColorCorrectionMode {
		Simple = 0,
		Advanced = 1
	}

	[HideInInspector]
	public AnimationCurve channels = AnimationCurve.Linear(0f, 0f, 1f, 1f);

	public bool useDepthCorrection = true;

	private Material ccMaterial;
	private Material ccDepthMaterial;
	private Material selectiveCcMaterial;

	private Texture2D rgbChannelTex;
	private Texture2D rgbDepthChannelTex;
	private Texture2D zCurveTex;

	public float gamma = 1.0f;

	[HideInInspector]
	public ColorCorrectionMode mode;
	[HideInInspector]
	public bool updateTextures = true;

	public Shader colorCorrectionCurvesShader = null;
	public Shader simpleColorCorrectionCurvesShader = null;

	private bool updateTexturesOnStartup = true;
	
	float oldGamma;


	new void Start() {
		base.Start();
		updateTexturesOnStartup = true;
		oldGamma = -1f;
	}

	void Awake() { }


	public override bool CheckResources() {
		CheckSupport(mode == ColorCorrectionMode.Advanced);

		ccMaterial = CheckShaderAndCreateMaterial(simpleColorCorrectionCurvesShader, ccMaterial);
		ccDepthMaterial = CheckShaderAndCreateMaterial(colorCorrectionCurvesShader, ccDepthMaterial);

		if(!rgbChannelTex)
			rgbChannelTex = new Texture2D(256, 4, TextureFormat.ARGB32, false, true);
		if(!rgbDepthChannelTex)
			rgbDepthChannelTex = new Texture2D(256, 4, TextureFormat.ARGB32, false, true);
		if(!zCurveTex)
			zCurveTex = new Texture2D(256, 1, TextureFormat.ARGB32, false, true);

		rgbChannelTex.hideFlags = HideFlags.DontSave;
		rgbDepthChannelTex.hideFlags = HideFlags.DontSave;
		zCurveTex.hideFlags = HideFlags.DontSave;

		rgbChannelTex.wrapMode = TextureWrapMode.Clamp;
		rgbDepthChannelTex.wrapMode = TextureWrapMode.Clamp;
		zCurveTex.wrapMode = TextureWrapMode.Clamp;

		if(!isSupported)
			ReportAutoDisable();
		return isSupported;
	}

	public void UpdateParameters() {
		CheckResources(); // textures might not be created if we're tweaking UI while disabled

		if(channels != null) {
			for(float i = 0.0f;i <= 1.0f;i += 1.0f / 255.0f) {
				float ch = Mathf.Clamp(channels.Evaluate(i), 0.0f, 1.0f);

				rgbChannelTex.SetPixel((int)Mathf.Floor(i * 255.0f), 0, new Color(ch, ch, ch) * gamma);
				rgbChannelTex.SetPixel((int)Mathf.Floor(i * 255.0f), 1, new Color(ch, ch, ch) * gamma);
				rgbChannelTex.SetPixel((int)Mathf.Floor(i * 255.0f), 2, new Color(ch, ch, ch) * gamma);

				float zC = Mathf.Clamp(channels.Evaluate(i), 0.0f, 1.0f);

				zCurveTex.SetPixel((int)Mathf.Floor(i * 255.0f), 0, new Color(zC, zC, zC) * gamma);

				ch = Mathf.Clamp(channels.Evaluate(i), 0.0f, 1.0f);

				rgbDepthChannelTex.SetPixel((int)Mathf.Floor(i * 255.0f), 0, new Color(ch, ch, ch) * gamma);
				rgbDepthChannelTex.SetPixel((int)Mathf.Floor(i * 255.0f), 1, new Color(ch, ch, ch) * gamma);
				rgbDepthChannelTex.SetPixel((int)Mathf.Floor(i * 255.0f), 2, new Color(ch, ch, ch) * gamma);
			}

			rgbChannelTex.Apply();
			rgbDepthChannelTex.Apply();
			zCurveTex.Apply();
		}
	}
	
	void Update(){
		if(oldGamma != gamma){
			oldGamma = gamma;
			UpdateParameters();
		}
	}

	void OnRenderImage(RenderTexture source, RenderTexture destination) {
		if(CheckResources() == false) {
			Graphics.Blit(source, destination);
			return;
		}

		if(updateTexturesOnStartup) {
			UpdateParameters();
			updateTexturesOnStartup = false;
		}

		if(useDepthCorrection)
			GetComponent<Camera>().depthTextureMode |= DepthTextureMode.Depth;

		RenderTexture renderTarget2Use = destination;

		if(useDepthCorrection) {
			ccDepthMaterial.SetTexture("_RgbTex", rgbChannelTex);
			ccDepthMaterial.SetTexture("_ZCurve", zCurveTex);
			ccDepthMaterial.SetTexture("_RgbDepthTex", rgbDepthChannelTex);
			ccDepthMaterial.SetFloat("_Saturation", 1f);

			Graphics.Blit(source, renderTarget2Use, ccDepthMaterial);
		}
		else {
			ccMaterial.SetTexture("_RgbTex", rgbChannelTex);
			ccMaterial.SetFloat("_Saturation", 1f);

			Graphics.Blit(source, renderTarget2Use, ccMaterial);
		}
	}
}