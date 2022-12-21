using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.UI;

public class UI_Fader : MonoBehaviour {

public GameObject Player;
public CanvasGroup UICanvas;
public bool fading;
	// Use this for initialization
	void Start ()
	{
		fading = false;
	}
	
	// Update is called once per frame
	void Update () {
		if (PlayerController.isRunning || PlayerController.lightFocusing){
			if (UICanvas.alpha < 1 && !fading){
				fading = true;
				UICanvas.alpha = Mathf.Lerp(0, 1, 0.5f);
				if (UICanvas.alpha == 1.0f){
					fading = false;
				}
			}
		}
		else {
			fading = true;
			UICanvas.alpha = Mathf.Lerp(1, 0, 1.0f);
			if (UICanvas.alpha == 0.0f){
				fading = false;
			}
		}

	}
}
