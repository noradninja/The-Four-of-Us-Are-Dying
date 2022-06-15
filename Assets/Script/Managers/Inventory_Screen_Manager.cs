using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.UI;

public class Inventory_Screen_Manager : MonoBehaviour {
	public Text battText;
	public Text medText;
	public Text stimText;
	public RawImage inventoryMat;
	public GameObject inventoryCam;
	public static bool inventoryOn = false;
	public bool delayButton = false;
	// private  string VITA = "joystick button ";
 //    private  int SELECT = 6;
	private float tempAlpha;
	private float time;

	// Use this for initialization
	private void Start () {
		inventoryOn = false;
		inventoryMat.color = new Color (1,1,1, 0);
		inventoryCam.SetActive(false);
		// if (Application.isEditor){
		// 	//because the DS3 registers the buttons differently in Windows 
		// 	SELECT = 9;
  //       }
	}
	
	// Update is called once per frame
	private void Update () {
	
		//this is for in-editor testing
		if (Application.isEditor){
			if (Input.GetKeyDown(KeyCode.Space) && !delayButton && !PlayerController.isMap){
				if (!inventoryOn){
					StartCoroutine(CrossFade(0, 1, 0.5f));
					inventoryOn = true;
					delayButton = true;
            		StartCoroutine(ButtonDelayTimer(0.5f));
				}
				else if (inventoryOn && !delayButton && !PlayerController.isMap){
					StartCoroutine(CrossFade(1, 0, 0.5f));
					inventoryOn = false;
					delayButton = true;
            		StartCoroutine(ButtonDelayTimer(0.5f));
				}
			}
		}
		//this is for PSTV	
		if (Input.GetButtonDown("Select") && !delayButton && !PlayerController.isMap){
			if (!inventoryOn){
				StartCoroutine(CrossFade(0, 1, 0.5f));
				inventoryOn = true;
				delayButton = true;
				StartCoroutine(ButtonDelayTimer(0.5f));
			}
			else if (inventoryOn && !delayButton && !PlayerController.isMap){
				StartCoroutine(CrossFade(1, 0, 0.5f));
				inventoryOn = false;
				delayButton = true;
				StartCoroutine(ButtonDelayTimer(0.5f));
			}
		}
		

		//get touch input, and enable/disable the inventory screen
		foreach (Touch touch in Input.touches) {
			if (touch.fingerId == 0){
				if (Input.GetTouch(0).phase == TouchPhase.Began){
					if (!inventoryOn && !delayButton && !PlayerController.isMap){
						StartCoroutine(CrossFade(0, 1, 0.5f));
						inventoryOn = true;
						delayButton = true;
            			StartCoroutine(ButtonDelayTimer(0.5f));
					}
					else if (inventoryOn && !delayButton && !PlayerController.isMap){
						StartCoroutine(CrossFade(1, 0, 0.5f));
						inventoryOn = false;
						delayButton = true;
            			StartCoroutine(ButtonDelayTimer(0.5f));
					}
				}
			}
		}

		if (!inventoryOn) return;
		if (battText.text !=InventoryManager.batteryCount.ToString()){
			battText.text =InventoryManager.batteryCount.ToString();
		}
		if (medText.text !=InventoryManager.medCount.ToString()){
			medText.text =InventoryManager.medCount.ToString();
		}
		if (stimText.text !=InventoryManager.stimCount.ToString()){
			stimText.text =InventoryManager.stimCount.ToString();
		}
	}

	private IEnumerator CrossFade (float startValue, float endValue, float duration){
		time = 0.0f;
		if (inventoryCam.activeSelf == false){
			inventoryCam.SetActive(true);
		}
		while (time < duration){
			tempAlpha = Mathf.Lerp (startValue, endValue, time/duration);
			time += Time.deltaTime;
			inventoryMat.color = new Color (1,1,1, tempAlpha);
			yield return null;
		}
		inventoryMat.color = new Color (1,1,1, endValue);
		if (inventoryMat.color.a <= 0){
			inventoryCam.SetActive(false);
			//print("Inventory Cam disabled");
		}
	}

	private IEnumerator ButtonDelayTimer(float delay){
		yield return new WaitForSeconds(delay);
		delayButton = false;
    }
}
