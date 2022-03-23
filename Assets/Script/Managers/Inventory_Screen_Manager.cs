using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.UI;

public class Inventory_Screen_Manager : MonoBehaviour {
	public Text battText;
	public Text medText;
	public Text stimText;
	public Material inventoryMat;
	public GameObject inventoryCam;
	public static bool inventoryOn = false;
	public bool delayButton = false;
	private  string VITA = "joystick button ";
    private  int SELECT = 6;

	// Use this for initialization
	void Start () {
		inventoryOn = false;
		inventoryMat.SetFloat("_Alpha", 0f);
		inventoryCam.SetActive(false);
		if (Application.isEditor){
			//because the DS3 registers the buttons differently in Windows 
			SELECT = 9;
        }
	}
	
	// Update is called once per frame
	void Update () {
	
		//this is for in-editor testing
		if (Application.isEditor){
			if (Input.GetKeyDown(KeyCode.Space) && !delayButton && !PlayerController.isMap){
				if (!inventoryOn){
					StartCoroutine(crossFade(0, 1, 0.5f));
					inventoryOn = true;
					delayButton = true;
            		StartCoroutine(buttonDelayTimer(0.5f));
				}
				else if (inventoryOn && !delayButton && !PlayerController.isMap){
					StartCoroutine(crossFade(1, 0, 0.5f));
					inventoryOn = false;
					delayButton = true;
            		StartCoroutine(buttonDelayTimer(0.5f));
				}
			}
		}
		//this is for PSTV	
		if (Input.GetKeyDown(VITA + SELECT) && !delayButton && !PlayerController.isMap){
			if (!inventoryOn){
				StartCoroutine(crossFade(0, 1, 0.5f));
				inventoryOn = true;
				delayButton = true;
				StartCoroutine(buttonDelayTimer(0.5f));
			}
			else if (inventoryOn && !delayButton && !PlayerController.isMap){
				StartCoroutine(crossFade(1, 0, 0.5f));
				inventoryOn = false;
				delayButton = true;
				StartCoroutine(buttonDelayTimer(0.5f));
			}
		}
		

		//get touch input, and enable/disable the inventory screen
		foreach (Touch touch in Input.touches) {
			if (touch.fingerId == 0){
				if (Input.GetTouch(0).phase == TouchPhase.Began){
					if (!inventoryOn && !delayButton && !PlayerController.isMap){
						StartCoroutine(crossFade(0, 1, 0.5f));
						inventoryOn = true;
						delayButton = true;
            			StartCoroutine(buttonDelayTimer(0.5f));
					}
					else if (inventoryOn && !delayButton && !PlayerController.isMap){
						StartCoroutine(crossFade(1, 0, 0.5f));
						inventoryOn = false;
						delayButton = true;
            			StartCoroutine(buttonDelayTimer(0.5f));
					}
				}
			}
		}

		if (inventoryOn){
			if (battText.text != string.Format("{0:D2}", InventoryManager.batteryCount)){
				battText.text = string.Format("{0:D2}", InventoryManager.batteryCount);
			}
			if (medText.text != string.Format("{0:D2}", InventoryManager.medCount)){
				medText.text = string.Format("{0:D2}", InventoryManager.medCount);
			}
			if (stimText.text != string.Format("{0:D2}", InventoryManager.stimCount)){
				stimText.text = string.Format("{0:D2}", InventoryManager.stimCount);
			}
		}
	}

	IEnumerator crossFade (float startValue, float endValue, float duration){
		float time = 0.0f;
		if (inventoryCam.activeSelf == false){
			inventoryCam.SetActive(true);
		}
		while (time < duration){
			float tempAlpha = Mathf.Lerp (startValue, endValue, time/duration);
			time += Time.deltaTime;
			inventoryMat.SetFloat("_Alpha", tempAlpha);
			yield return null;
		}
		inventoryMat.SetFloat("_Alpha", endValue);
		if (inventoryMat.GetFloat("_Alpha") <= 0){
			inventoryCam.SetActive(false);
			print("Inventory Cam disabled");
		}
	}
	IEnumerator buttonDelayTimer(float delay){
		yield return new WaitForSeconds(delay);
		delayButton = false;
    }
}
