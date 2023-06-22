using System;
using System.Collections;
using System.Collections.Generic;
using System.Runtime.CompilerServices;
using UnityEngine;
using UnityEngine.UI;

public class Render_Pipeline_Overlay : MonoBehaviour
{
	public Component [] components;
	public Component currentComponent;
	public Component previousComponent;
	public RenderTexture[] renderTextures;
	public RenderTexture currentRenderTexture;
	public RenderTexture previousRenderTexture;
	public RawImage overlayImage;
	public RawImage overlayBG;
	public int i = 0;
	private int j = 0;
	private int componentLength;
	private int renderTextureLength;
	
	private bool firstPress = false;
	
	void Start ()
	{
		VitaInputManager.Instance.OnDpadRight += OnDpadRightEvent;
		if (currentComponent == null) currentComponent = components[0] ;
		if (currentRenderTexture == null) currentRenderTexture = renderTextures[0];
		EnableAllComponents();		
		componentLength = components.Length;
		renderTextureLength = renderTextures.Length;
		// overlayBG.color = Color.clear;
		// overlayImage.color = Color.clear;
	}

	private void Update()
	{
		// if (i == 0)
		// {
		// 	overlayBG.color = Color.clear;
		// 	overlayImage.color = Color.clear;
		// }
	}

	private void OnDpadRightEvent()
	{
		if (!firstPress)
		{
			DisableAllComponents();
		}
		else if (firstPress)
		{
			if (i > componentLength-1)
			{
				DisableAllComponents();
			}
			else if (i < componentLength)
			{
				previousComponent = currentComponent;
				currentComponent = components[i];
				var currentComp = currentComponent.GetType();
				((MonoBehaviour)GetComponent(currentComp)).enabled = true;
				i++;
			}

			// if (j > renderTextureLength - 1)
			// {
			// 	j = 0;
			// 	overlayImage.texture = null;
			// 	previousRenderTexture = null;
			// 	overlayBG.color = Color.clear;
			// 	overlayImage.color = Color.clear;
			// }
			// else if (j < renderTextureLength)
			// {
			// 	overlayImage.color = Color.white;
			// 	overlayBG.color = new Color(0, 0, 0, 0.5f);
			// 	previousRenderTexture = currentRenderTexture;
			// 	currentRenderTexture = renderTextures[j];
			// 	overlayImage.texture = currentRenderTexture;
			// }
		}
		
	}
	private void DisableAllComponents()
	{
		i = 0;
		currentComponent = components[i];
		previousComponent = null;
		foreach (Component component in components)
		{
			var type = component.GetType();
			((MonoBehaviour)GetComponent(type)).enabled = false;
		}
		if (!firstPress)
		{
			firstPress = true;
		}
	}
	private void EnableAllComponents()
	{
		i = 0;
		currentComponent = components[i];
		previousComponent = null;
		
		foreach (Component component in components)
		{
			var type = component.GetType();
			((MonoBehaviour)GetComponent(type)).enabled = true;
		}
	}
}