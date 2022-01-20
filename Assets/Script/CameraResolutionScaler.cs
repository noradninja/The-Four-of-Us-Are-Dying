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
	public Text vramText;
	public Text ramText;
	private new Camera camera;
	private const string joystick1 = "joystick button ";
	private const int CROSS = 0;
	private const int CIRCLE = 1;
	[SerializeField]
	private bool statsActive = false;
	private RenderTexture renderTex;
	RenderTexture GetTemporaryTexture(int width, int height) {
						RenderTexture temporaryTexture = RenderTexture.GetTemporary(width, height, 0, RenderTextureFormat.Default);
						temporaryTexture.wrapMode = TextureWrapMode.Clamp;
						temporaryTexture.anisoLevel = 0;
						temporaryTexture.filterMode = filterMode;

						return temporaryTexture;
					}
	private Rect originalRect;
	private Rect scaledRect;

	void Start(){
		if(!Application.isEditor) {
			UnityEngine.PSVita.PSVitaVideoPlayer.TransferMemToMonoHeap();
		}
	}
	void Awake(){
		camera = this.GetComponent<Camera>();
	}
	void Update(){
		// if (Input.GetKeyDown(joystick1 + CROSS)){
		// 	if (renderDivisor == 1.0F){
		// 		renderDivisor = 1.334F;
		// 	}
		// 	else if (renderDivisor == 1.334F){
		// 		renderDivisor = 1.5F;
		// 	}
		// 	else if (renderDivisor == 1.5F){
		// 		renderDivisor = 2.0F;
		// 	}
		// 	else renderDivisor = 1.0F;
		// }
		if (Input.GetKeyDown(joystick1 + CIRCLE)){
			if (statsActive) statsActive = false;
			else statsActive = true;
		}

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
		renderTex.DiscardContents();

		if(!Application.isEditor && statsActive) {
		
			float VRAMValue = UnityEngine.PSVita.Diagnostics.GetFreeMemoryCDRAM();
			decimal VRAMFree = Math.Round((decimal)(VRAMValue/1000000), 2);
			decimal calcVRAM = (((128-VRAMFree)/128)*100);
			decimal percentVRAM = Math.Round((decimal)calcVRAM ,2);
			
			float RAMValue = UnityEngine.PSVita.Diagnostics.GetFreeMemoryLPDDR();
			decimal RAMFree = Math.Round((decimal)(RAMValue/1000000), 2);
			decimal calcRAM = (((512-RAMFree)/512)*100);
			decimal percentRAM = Math.Round((decimal)calcRAM ,2);

			vramText.text = ("VRAM: " + VRAMFree + "MB Free / 128MB- " + percentVRAM + "% Used");
			ramText.text = ("RAM: " + RAMFree + "MB Free / 512MB- "+ percentRAM + "% Used");
			if (percentVRAM >= 75){
				vramText.color = Color.red;
			}
			else if(percentVRAM < 75 && percentVRAM > 50){
				vramText.color = Color.yellow;
			}
			else vramText.color = Color.gray;

			if (percentRAM >= 75){
				ramText.color = Color.red;
			}
			else if(percentRAM < 75 && percentRAM > 50){
				ramText.color = Color.yellow;
			}
			else ramText.color = Color.gray;
		}
		if(Application.isEditor && statsActive) {
			vramText.text = ("VRAM: Unavailable");
			ramText.text = (" RAM: Unavailable");
		}
		// if (!statsActive){
		// 	vramText.text = ("");
		// 	ramText.text = ("");
		//}
		
	 }
}
