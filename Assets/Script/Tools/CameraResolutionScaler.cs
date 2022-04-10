using System;
using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.PSVita;
using UnityEngine.UI;
[ExecuteInEditMode]

// Add this to your main camera//////////////////////////////////////////////////////////////////////////////////////////////
public class CameraResolutionScaler : MonoBehaviour
{
	public enum internalResolution{
		[Tooltip ("960x544")]
		Full,
		[Tooltip ("720x408")]
		Mid,
		[Tooltip ("640x363")]
		Low,
		[Tooltip ("480x272")]
		PSP
	}
	public bool enableInternalResolution = true;
	public internalResolution renderResolution;
	private float renderDivisor;
	private int width;
	private int height;
	private new Camera camera;
	private RenderTexture renderTex;
	RenderTexture GetTemporaryTexture(int width, int height) {
						RenderTexture temporaryTexture = RenderTexture.GetTemporary(width, height);
						temporaryTexture.wrapMode = TextureWrapMode.Clamp;
						temporaryTexture.anisoLevel = 0;
						temporaryTexture.filterMode = filterMode;

						return temporaryTexture;
					}
	private Rect originalRect;
	private Rect scaledRect;
	public enum currentResolution{
		[Tooltip ("960x544")]
		Full,
		[Tooltip ("720x408")]
		Mid,
		[Tooltip ("640x363")]
		Low,
		[Tooltip ("480x272")]
		PSP
	}
	public currentResolution screenResolution;
	public FilterMode filterMode = FilterMode.Trilinear;
	void Awake(){
		camera = this.GetComponent<Camera>();
		if(!Application.isEditor) {
					
				switch (screenResolution){
					case currentResolution.Full:
						Screen.SetResolution(960, 544, true, 30);	
					break;
					case currentResolution.Mid:
						Screen.SetResolution(720, 408, true, 30);
					break;
					case currentResolution.Low:
						Screen.SetResolution(640, 368, true, 30);
					break;
					case currentResolution.PSP:
					Screen.SetResolution(480, 272, true, 30);
					break;
				}
		}
		else {
			QualitySettings.vSyncCount = 0;	
		}
	}
	void Update(){
	
	}
	void OnDestroy ()
	{
		camera.rect = originalRect;
	}

	void OnPreRender ()
	{
		if (enableInternalResolution){
			switch (renderResolution){
				case internalResolution.Full:
							width = 960;
							height = 544;	
							renderDivisor = 1;
						break;
						case internalResolution.Mid:
							width = 720;
							height = 408;
							renderDivisor = 1.334f;
						break;
						case internalResolution.Low:
							width = 640 ;
							height = 368;
							renderDivisor = 2f;
						break;
						case internalResolution.PSP:
							width = 480;
							height = 272;
							renderDivisor = 2f;
						break;
			}
			originalRect = camera.rect;
			scaledRect.Set(originalRect.x, originalRect.y, originalRect.width / renderDivisor, originalRect.height / renderDivisor);
			camera.rect = scaledRect;
		}
	}

	void OnRenderImage (RenderTexture src, RenderTexture dest)
	{
		if (enableInternalResolution){
			renderTex = GetTemporaryTexture(width, height);
			camera.rect = originalRect;
			src.filterMode = filterMode;

			Graphics.Blit(src, renderTex);
			Graphics.Blit(renderTex, dest);
			RenderTexture.ReleaseTemporary(renderTex);
		}
		else{
			Graphics.Blit(src, dest);
		}
	}
}
