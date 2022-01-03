﻿using System.Collections;
using System.Collections.Generic;
using System.Runtime.Serialization;
using UnityEngine;
using UnityEngine.UI;
using TMPro;

public class Item_Enumerator : MonoBehaviour {

//enums
	public enum pickupItem{

	//data members
		flashlight,
		battery,
		key,
		health

	}

//public vars
	public bool isActiveObject = false;
	public pickupItem thisItem;
	public int itemValue;
	//public pickupText itemText;
	public Collider player;
	public GameObject playerObject;
	public Material playerBody;
	public Collider thisCollider;
	public GameObject targetObject;
	public Camera mainCamera;
	public GameObject pickupTextObject;
	public GameObject hilightIcon;
	public RawImage iconImage;
	public RawImage dialogBG;
	public Color iconVisible = new Vector4(1,1,1,0.5f);
	public Color colorOff = new Vector4(0,0,0,0);
	public Color colorOn = new Vector4(1,1,1,0.75f);
	public Color dialogOn = new Vector4(0,0,0,0.5f);
	public TextMeshProUGUI OSDText;
	public TextMeshProUGUI batteryText;
	public Texture healedTexture;
	
	//private vars
	private const string joystick1 = "joystick button ";
	private const int CROSS = 0;
	private Vector3 screenPosition;
	private Vector3 targetPos;
	private string tempText;
	private Dictionary<string, string> itemTexts;
	// Use this for initialization
	void Start ()
    {
        Physics.IgnoreCollision(thisCollider, player.GetComponent<Collider>(), true); //so the player doesn't step 'up' when walking near
	////DICTIONARY//////////////////////////////////////////////////////////////////
	   	itemTexts = new Dictionary<string, string>();

	    itemTexts.Add("flashlight", "flashlight");
        itemTexts.Add("battery", "batteries");
        itemTexts.Add("health", "antiseptic");
        itemTexts.Add("key", "key");
	///////////////////////////////////////////////////////////////////////////////
    }

    // Update is called once per frame
    void Update (){
			if (Input.GetKeyDown(joystick1 + CROSS) && dialogBG.color == dialogOn && isActiveObject){
				
				switch (thisItem){

					case pickupItem.flashlight :
						PlayerController.hasFlashlight = true;
						PlayerController.flashlightOff = false;
					break;

					case pickupItem.battery :
						print("That's a battery");
						player.GetComponentInParent<PlayerController>().batteryCount += 1;
						batteryText.text = ("" + player.GetComponentInParent<PlayerController>().batteryCount);
					break;

					case pickupItem.key :
						print("That's a key");
						//do key shit here, increase inventory of generic keys
					break;

					case pickupItem.health :
						print("That's a medkit");
						playerObject.BroadcastMessage("healMe"); //todo- crossfade this so it looks nice (gonna need to modify the fsk!*g shader, damnit), actually implement HP
					break;
				}
				targetObject.SetActive(false);
				ClearOSD();
			}
		else return;
	}

	void OnGUI (){
		if (isActiveObject){
            SetPosition();
        }
        else return;
    }

    void OnTriggerEnter (Collider col){
		if(col == player){
            print(player);
            iconImage.color = iconVisible;
            OSDText.color = colorOn;
            dialogBG.color = dialogOn;
			itemTexts.TryGetValue(thisItem.ToString(), out tempText);
            OSDText.text = ("Press X to pick up " +  tempText + ".");
			isActiveObject = true;
			SetPosition();
		}
	}
	void OnTriggerExit (Collider col){
		if(col == player){
            ClearOSD();
        }
    }

    private void ClearOSD() //restores OSD to default and resets isActiveObject flag
    {
        iconImage.color = colorOff;
        OSDText.color = colorOff;
        dialogBG.color = colorOff;
        OSDText.text = ("");
        isActiveObject = false;
    }

    private void SetPosition()
    {
        targetPos = targetObject.transform.position; //get target's position in the world
        screenPosition = mainCamera.WorldToScreenPoint(targetPos); //convert target position to screen space coordinates
        hilightIcon.transform.position = screenPosition; //set the icon position to the converted screen position of the object this script is on    
    }


}
