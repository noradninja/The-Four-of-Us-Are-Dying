using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.Serialization;

[ExecuteInEditMode]
[RequireComponent(typeof(Camera))]

public class PostProcessingManager : MonoBehaviour {

  	public Material fxaaMaterial;

    public float Sharpness = 4.0f;
    public float Threshold = 0.2f;

    static readonly int sharpnessString = Shader.PropertyToID("_Sharpness");
    static readonly int thresholdString = Shader.PropertyToID("_Threshold");

	// Start distance
	[SerializeField]
	float _startDistance = 1;

	public float startDistance {
		get { return _startDistance; }
		set { _startDistance = value; }
	}

	// Use radial distance
	[SerializeField]
	bool _useRadialDistance;

	public bool useRadialDistance {
		get { return _useRadialDistance; }
		set { _useRadialDistance = value; }
	}

	// Fade-to-skybox flag
	[SerializeField]
	bool _fadeToSkybox;

	public bool fadeToSkybox {
		get { return _fadeToSkybox; }
		set { _fadeToSkybox = value; }
	}
	public Shader fogShader;

	public Material fogMaterial;

	 [Range(0, 3)]
    public float Intensity = 1;

    [Range(0, 3)]
    public float BlurAmount = 1;

    [Range(0, 1)]
    public float Radius = 1;

    [Range(0, 4)]
    public float Area = 1;

    public bool FastMode;

    public Material ssaoMaterial;

    public Camera cam;

    static readonly int blurTexString = Shader.PropertyToID("_BlurTex");
    static readonly int instensityString = Shader.PropertyToID("_Intensity");
    static readonly int blurAmountString = Shader.PropertyToID("_BlurAmount");
    static readonly int radiusString = Shader.PropertyToID("_Radius");
    static readonly int areaString = Shader.PropertyToID("_Area");

    static readonly string fastKeyword = "FAST";
	[Range(0.0f, 1.5f)] public float threshold = 0.25f;

	[Range(0.00f, 4.0f)] public float intensity = 1.0f;
	[Range(0.25f, 5.5f)] public float blurSize = 1.0f;
	[Range(1, 4)] public int blurIterations = 2;

	public Material fastBloomMaterial = null;
	

	// [ImageEffectOpaque]
    public void OnRenderImage(RenderTexture source, RenderTexture destination)
    {
//////////////////////FXAA//////////////////////////////
       fxaaMaterial.SetFloat(sharpnessString, Sharpness);
       fxaaMaterial.SetFloat(thresholdString, Threshold);

        Graphics.Blit(source, destination, fxaaMaterial);
///////////////////SSAO//////////////////////////////////
 ssaoMaterial.SetFloat(instensityString, Intensity);
        //ssaoMaterial.SetFloat(blurAmountString, BlurAmount);
        ssaoMaterial.SetFloat(radiusString, Radius * 0.5f);
        ssaoMaterial.SetFloat(areaString, Area + 0.1f);
        if (FastMode)
            ssaoMaterial.EnableKeyword(fastKeyword);
        else
            ssaoMaterial.DisableKeyword(fastKeyword);

        var blurTex = RenderTexture.GetTemporary(Mathf.RoundToInt(Screen.width /3.1f), Mathf.RoundToInt(Screen.height /3.1f), 0, source.format);
      
        Graphics.Blit(source, blurTex, ssaoMaterial, 0);
        ssaoMaterial.SetTexture(blurTexString, blurTex);
        RenderTexture.ReleaseTemporary(blurTex);
        Graphics.Blit(source, destination, ssaoMaterial, 2);
/////////////////Bloom//////////////////////////////////////////
		int rtW = 128;
		int rtH = 73;
		
		//initial downsample
		RenderTexture rt = RenderTexture.GetTemporary(rtW, rtH, 0, source.format);
		rt.DiscardContents();

		fastBloomMaterial.SetFloat("_Spread", blurSize);
		fastBloomMaterial.SetVector("_ThresholdParams", new Vector2(1.0f, -threshold));
		Graphics.Blit(source, rt, fastBloomMaterial, 0);
		
		fastBloomMaterial.SetFloat("_BloomIntensity", intensity);
		fastBloomMaterial.SetTexture("_BloomTex", rt);
		Graphics.Blit(source, destination, fastBloomMaterial, 3);

		RenderTexture.ReleaseTemporary(rt);

			////////////////////Fog////////////////////////////////
 if (fogMaterial == null)
		{
			fogMaterial = new Material(fogShader);
			fogMaterial.hideFlags = HideFlags.DontSave;
		}

		_startDistance = Mathf.Max(_startDistance, 0.0f);
		fogMaterial.SetFloat("_DistanceOffset", _startDistance);

		var mode = RenderSettings.fogMode;
		if (mode == FogMode.Linear)
		{
			var start = RenderSettings.fogStartDistance;
			var end = RenderSettings.fogEndDistance;
			var invDiff = 1.0f / Mathf.Max(end - start, 1.0e-6f);
			fogMaterial.SetFloat("_LinearGrad", -invDiff);
			fogMaterial.SetFloat("_LinearOffs", end * invDiff);
			fogMaterial.DisableKeyword("FOG_EXP");
			fogMaterial.DisableKeyword("FOG_EXP2");
		}
		else if (mode == FogMode.Exponential)
		{
			const float coeff = 1.4426950408f; // 1/ln(2)
			var density = RenderSettings.fogDensity;
			fogMaterial.SetFloat("_Density", coeff * density);
			fogMaterial.EnableKeyword("FOG_EXP");
			fogMaterial.DisableKeyword("FOG_EXP2");
		}
		else // FogMode.ExponentialSquared
		{
			const float coeff = 1.2011224087f; // 1/sqrt(ln(2))
			var density = RenderSettings.fogDensity;
			fogMaterial.SetFloat("_Density", coeff * density);
			fogMaterial.DisableKeyword("FOG_EXP");
			fogMaterial.EnableKeyword("FOG_EXP2");
		}

		if (_useRadialDistance)
			fogMaterial.EnableKeyword("RADIAL_DIST");
		else
			fogMaterial.DisableKeyword("RADIAL_DIST");

		if (_fadeToSkybox)
		{
			fogMaterial.EnableKeyword("USE_SKYBOX");
			// Transfer the skybox parameters.
			var skybox = RenderSettings.skybox;
			fogMaterial.SetTexture("_SkyCubemap", skybox.GetTexture("_Tex"));
			fogMaterial.SetColor("_SkyTint", skybox.GetColor("_Tint"));
			fogMaterial.SetFloat("_SkyExposure", skybox.GetFloat("_Exposure"));
			fogMaterial.SetFloat("_SkyRotation", skybox.GetFloat("_Rotation"));
		}
		else
		{
			fogMaterial.DisableKeyword("USE_SKYBOX");
			fogMaterial.SetColor("_FogColor", RenderSettings.fogColor);
		}

		// Calculate vectors towards frustum corners.
		var cam = GetComponent<Camera>();
		var camtr = cam.transform;
		var camNear = cam.nearClipPlane;
		var camFar = cam.farClipPlane;

		var tanHalfFov = Mathf.Tan(cam.fieldOfView * Mathf.Deg2Rad / 2);
		var toRight = camtr.right * camNear * tanHalfFov * cam.aspect;
		var toTop = camtr.up * camNear * tanHalfFov;

		var v_tl = camtr.forward * camNear - toRight + toTop;
		var v_tr = camtr.forward * camNear + toRight + toTop;
		var v_br = camtr.forward * camNear + toRight - toTop;
		var v_bl = camtr.forward * camNear - toRight - toTop;

		var v_s = v_tl.magnitude * camFar / camNear;

		// Draw screen quad.
		RenderTexture.active = destination;

		fogMaterial.SetTexture("_MainTex", source);
		fogMaterial.SetPass(0);

		GL.PushMatrix();
		GL.LoadOrtho();
		GL.Begin(GL.QUADS);

		GL.MultiTexCoord2(0, 0, 0);
		GL.MultiTexCoord(1, v_bl.normalized * v_s);
		GL.Vertex3(0, 0, 0.1f);

		GL.MultiTexCoord2(0, 1, 0);
		GL.MultiTexCoord(1, v_br.normalized * v_s);
		GL.Vertex3(1, 0, 0.1f);

		GL.MultiTexCoord2(0, 1, 1);
		GL.MultiTexCoord(1, v_tr.normalized * v_s);
		GL.Vertex3(1, 1, 0.1f);

		GL.MultiTexCoord2(0, 0, 1);
		GL.MultiTexCoord(1, v_tl.normalized * v_s);
		GL.Vertex3(0, 1, 0.1f);

		GL.End();
		GL.PopMatrix();
	}
}
