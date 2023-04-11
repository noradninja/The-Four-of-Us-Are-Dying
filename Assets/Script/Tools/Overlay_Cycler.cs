using System.Collections;
using System.Collections.Generic;
using Kino;
using UnityEngine;
using UnityStandardAssets.ImageEffects;
using UnityEngine.UI;

public class Overlay_Cycler : MonoBehaviour
{
	public static bool delayButton = false;
	public GameObject mainCamera;
	public GameObject lightningManager;
	public GameObject rainParticles;
	public GameObject splashParticles;
	public Text postText;
	public enum cycleState
	{
		rawRender,
		combinedOcclusion,
		godRays,
		bokeh,
		lightningFlash,
		lightningContrast,
		sai2x,
		grain,
		combined
		
	}
	public cycleState currentOverlay = cycleState.combined;
	// Use this for initialization
	void Start () {
		VitaInputManager.Instance.OnSelect += SelectEvent;
	}
	
	// Update is called once per frame
	void Update () {
		
	}

	private void SelectEvent()
	{
		if (!delayButton)
		{
			if (currentOverlay == cycleState.combined)
			{
				currentOverlay = cycleState.rawRender;
				postText.text = "Raw Render";
				delayButton = true;
				StartCoroutine(ButtonDelayTimer(0.5f));
			}
			else if (currentOverlay == cycleState.rawRender)
			{
				currentOverlay = cycleState.combinedOcclusion;
				postText.text = "Raw + Ambient Occlusion";
				delayButton = true;
				StartCoroutine(ButtonDelayTimer(0.5f));
			}
			else if (currentOverlay == cycleState.combinedOcclusion)
			{
				currentOverlay = cycleState.godRays;
				postText.text = "Raw + Ambient Occlusion + Crepuscular";
				delayButton = true;
				StartCoroutine(ButtonDelayTimer(0.5f));
			}
			else if (currentOverlay == cycleState.godRays)
			{
				currentOverlay = cycleState.bokeh;
				postText.text = "Raw + Ambient Occlusion + Crepuscular + Bokeh";
				delayButton = true;
				StartCoroutine(ButtonDelayTimer(0.5f));
			}
			else if (currentOverlay == cycleState.bokeh)
			{
				currentOverlay = cycleState.lightningFlash;
				postText.text = "Raw + Ambient Occlusion + Crepuscular + Bokeh + Lightning Flash";
				delayButton = true;
				StartCoroutine(ButtonDelayTimer(0.5f));
			}
			else if (currentOverlay == cycleState.lightningFlash)
			{
				currentOverlay = cycleState.lightningContrast;
				postText.text = "Raw + Ambient Occlusion + Crepuscular + Bokeh + Lightning Flash + Lightning Shadows";
				delayButton = true;
				StartCoroutine(ButtonDelayTimer(0.5f));
			}
			else if (currentOverlay == cycleState.lightningContrast)
			{
				currentOverlay = cycleState.sai2x;
				postText.text = "Raw + Ambient Occlusion + Crepuscular + Bokeh + Lightning Flash + Lightning Shadows + 2xSAI";

				delayButton = true;
				StartCoroutine(ButtonDelayTimer(0.5f));
			}
			else if (currentOverlay == cycleState.sai2x)

			{
				currentOverlay = cycleState.grain;
				postText.text = "Raw + Ambient Occlusion + Crepuscular + Bokeh + Lightning Flash + Lightning Shadows + 2xSAI + Grain";

				delayButton = true;
				StartCoroutine(ButtonDelayTimer(0.5f));
			}
			else if (currentOverlay == cycleState.grain)
			{
				currentOverlay = cycleState.combined;
				postText.text = "Full Render";
				delayButton = true;
				StartCoroutine(ButtonDelayTimer(0.5f));
			}
	}

		switch (currentOverlay)
		{
			
			case cycleState.rawRender:
				mainCamera.GetComponent<FastSSAO>().enabled = false; //disable SSAO
				mainCamera.GetComponent<Crepuscular>().enabled = false; //disable godrays
				mainCamera.GetComponent<Bokeh>().enabled = false; //disable bokeh
				lightningManager.GetComponent<Weather_Manager>().enabled = false; //disable lightning
				mainCamera.GetComponent<Contrast_Manager>().enabled = false; //disable lightning contrast
				mainCamera.GetComponent<FXAA>().enabled = false; //disable AA
				mainCamera.GetComponent<NoiseAndGrain>().enabled = false; //disable grain
				break;
			case cycleState.combinedOcclusion:
				mainCamera.GetComponent<FastSSAO>().enabled = true; //disable SSAO
				break;
			case cycleState.godRays:
				// mainCamera.GetComponent<FastSSAO>().enabled = false; //disable SSAO
				mainCamera.GetComponent<Crepuscular>().enabled = true; //disable godrays
				break;
			case cycleState.bokeh:
				// mainCamera.GetComponent<Crepuscular>().enabled = false; //disable godrays
				mainCamera.GetComponent<Bokeh>().enabled = true; //disable bokeh
				break;
			case cycleState.lightningFlash:
				// mainCamera.GetComponent<Bokeh>().enabled = false; //disable bokeh
				lightningManager.GetComponent<Weather_Manager>().enabled = true; //disable lightning
				break;
			case cycleState.lightningContrast:
				mainCamera.GetComponent<Contrast_Manager>().enabled = true; //disable lightning contrast
				break;
			case cycleState.sai2x:
				// lightningManager.GetComponent<Weather_Manager>().enabled = false; //disable lightning
				// mainCamera.GetComponent<Contrast_Manager>().enabled = false; //disable lightning contrast
				mainCamera.GetComponent<FXAA>().enabled = true; //disable AA
				break;
			case cycleState.grain:
				// mainCamera.GetComponent<FXAA>().enabled = false; //disable AA
				mainCamera.GetComponent<NoiseAndGrain>().enabled = true; //disable grain
				break;
			case cycleState.combined:
				mainCamera.GetComponent<FastSSAO>().enabled = true; //disable SSAO
				mainCamera.GetComponent<Crepuscular>().enabled = true; //disable godrays
				mainCamera.GetComponent<Bokeh>().enabled = true; //disable bokeh
				lightningManager.GetComponent<Weather_Manager>().enabled = true; //disable lightning
				mainCamera.GetComponent<Contrast_Manager>().enabled = true; //disable lightning contrast
				mainCamera.GetComponent<FXAA>().enabled = true; //disable AA
				mainCamera.GetComponent<NoiseAndGrain>().enabled = true; //disable grain
				break;
		}
	}
	public static IEnumerator ButtonDelayTimer(float delay){
		yield return new WaitForSeconds(delay);
		delayButton = false;
	}
}


