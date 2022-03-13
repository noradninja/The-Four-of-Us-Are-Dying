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

	
	
	[Range(1.0F, 2.0F)]
	[Tooltip ("1= full (960x544), 1.334 = mid (720x408), 1.5 = low (640x368) 2= very low (PSP, 480x272)")]
	public float renderDivisor = 1.0F;
	public FilterMode filterMode = FilterMode.Trilinear;
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
	public bool changeInternalResolution;
	void Awake(){
		camera = this.GetComponent<Camera>();
		if(!Application.isEditor) {
			// UnityEngine.PSVita.PSVitaVideoPlayer.TransferMemToHeap();
            // UnityEngine.PSVita.Utility.SetMonoHeapBehaviours(false, true);
			if (changeInternalResolution){
				Screen.SetResolution(720, 408, true, 60);	
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
		originalRect = camera.rect;
		scaledRect.Set(originalRect.x, originalRect.y, originalRect.width / renderDivisor, originalRect.height / renderDivisor);
		camera.rect = scaledRect;
	}

	void OnRenderImage (RenderTexture src, RenderTexture dest)
	{
		renderTex = GetTemporaryTexture(Mathf.RoundToInt(960/renderDivisor), Mathf.RoundToInt(544/renderDivisor));
		camera.rect = originalRect;
		src.filterMode = filterMode;

		Graphics.Blit(src, renderTex);
		Graphics.Blit(renderTex, dest);
		RenderTexture.ReleaseTemporary(renderTex);
	}
}
