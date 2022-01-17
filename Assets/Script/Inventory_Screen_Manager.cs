using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.UI;

public class Inventory_Screen_Manager : MonoBehaviour {
	public Text battText;
	public Text medText;
	public Material inventoryMat;
	public GameObject inventoryCam;
	public static bool inventoryOn = false;
	// Use this for initialization
	void Start () {
		
	}
	
	// Update is called once per frame
	void Update () {
	
		//this is for in-editor testing
		if (Application.isEditor){
			if (Input.GetKeyDown(KeyCode.Space)){
				if (!inventoryOn){
					StartCoroutine(crossFade(0, 1, 0.5f));
					inventoryOn = true;
				}
				else if (inventoryOn){
					StartCoroutine(crossFade(1, 0, 0.5f));
					inventoryOn = false;
				}
			}
		}

		//get touch input, and enable/disable the inventory screen
		foreach (Touch touch in Input.touches) {
			if (touch.fingerId == 0){
				if (Input.GetTouch(0).phase == TouchPhase.Began){
					if (!inventoryOn){
						StartCoroutine(crossFade(0, 1, 0.5f));
						inventoryOn = true;
					}
					else if (inventoryOn){
						StartCoroutine(crossFade(1, 0, 0.5f));
						inventoryOn = false;
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
}
