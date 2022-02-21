using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.UI;

public class UI_Fader : MonoBehaviour {

public GameObject Player;
public CanvasGroup UICanvas;
public bool fading;
	// Use this for initialization
	void Start () {
	
	}
	
	// Update is called once per frame
	void Update () {
		if (Player.GetComponent<PlayerController>().isRunning || Player.GetComponent<PlayerController>().lightFocusing){
			if (UICanvas.alpha < 1 && !fading){
				fading = true;
				UICanvas.alpha = Mathf.Lerp(UICanvas.alpha, 1, 5.0f);
				if (UICanvas.alpha == 1.0f){
					fading = false;
				}
			}
		}
		else {
			fading = true;
			UICanvas.alpha = Mathf.Lerp(UICanvas.alpha, 0, 1.0f);
			if (UICanvas.alpha == 0.0f){
				fading = false;
			}
		}

	}
}
