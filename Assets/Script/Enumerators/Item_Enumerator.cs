using System.Collections;
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
		health,
		stims

	}

//public vars
	public int identifier;
	public bool isActiveObject = false;
	public pickupItem thisItem;
	public int itemValue;
	//public pickupText itemText;
	public Collider player;
	public Animator animator;
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
	private int CROSS = 0;
	private Vector3 screenPosition;
	private Vector3 targetPos;
	private string tempText;
	private Dictionary<string, string> itemTexts;

	private int GetFirstDigit(int number)
	{
		while (true)
		{
			if (number < 10) return number;
			number = (number - (number % 10)) / 10;
		}
	}

	// Use this for initialization
	private void Start ()
    {
		
		if (Application.isEditor){
			CROSS = 2;
		}
        Physics.IgnoreCollision(thisCollider, player.GetComponent<Collider>(), true); //so the player doesn't step 'up' when walking near
	////DICTIONARY//////////////////////////////////////////////////////////////////
	   	itemTexts = new Dictionary<string, string>(); //string itemType, string dialogText
		//TODO: change this so we are parsing a CSV file for the dictionary entries to make changes much easier
	    itemTexts.Add("flashlight", "flashlight");
        itemTexts.Add("battery", "batteries");
        itemTexts.Add("health", "antiseptic");
     	itemTexts.Add("stims", "stimulants");	
	///////////////////////////////////////////////////////////////////////////////
	batteryText.text =InventoryManager.batteryCount.ToString();

	////Check lists to see if we are in it; if not, destroy
		// Meds
		if (GetFirstDigit(identifier) == 1 && SetScenes.MedsRemaining != null){
			if(!SetScenes.MedsRemaining.Contains(identifier)){
				Destroy(targetObject);
			}
		}
		//Batteries
		if (GetFirstDigit(identifier) == 2 && SetScenes.BatteryRemaining != null){
			if(!SetScenes.BatteryRemaining.Contains(identifier)){
				Destroy(targetObject);
			}
		}
		//Light Weapons
		if (GetFirstDigit(identifier) == 3 && SetScenes.LightWepRemaining != null){
			if(!SetScenes.LightWepRemaining.Contains(identifier)){
				Destroy(targetObject);
			}
		}
		//Heavy Weapons
		if (GetFirstDigit(identifier) == 4 && SetScenes.HvyWepRemaining != null){
			if(!SetScenes.HvyWepRemaining.Contains(identifier)){
				Destroy(targetObject);
			}
		}	

    }

    // Update is called once per frame
    void Update (){
		if (Input.GetButtonDown("Cross") && dialogBG.color == dialogOn && isActiveObject){
		
			switch (thisItem){

				case pickupItem.flashlight :
					PlayerController.HasFlashlight = true;
					PlayerController.FlashlightOff = false;
					Destroy(targetObject);
				break;

				case pickupItem.battery :
					// print("That's a battery");
					InventoryManager.batteryCount += 2;
					string currentCount =InventoryManager.batteryCount.ToString();
					batteryText.text = currentCount;
					Destroy(targetObject);
				break;

				case pickupItem.key :
					// print("That's a key");
					//do key shit here
					InventoryManager.keyCount += 1;
					Destroy(targetObject);				
				break;

				case pickupItem.health :
					// print("That's a medkit");
					InventoryManager.medCount += 1;
					Destroy(targetObject);
				break;

				case pickupItem.stims :
					// print("That's a stimulant");
					InventoryManager.stimCount += 1;
					Destroy(targetObject);
				break;
			}
			ClearOsd();
		}
		
	}

    private void OnGUI (){
		if (isActiveObject){
            SetPosition();
        }
    }

    private void OnTriggerEnter (Collider col)
    {
	    if (col != player) return;
	    SetPosition();
	    isActiveObject = true;
	    iconImage.color = iconVisible;
	    OSDText.color = colorOn;
	    dialogBG.color = dialogOn;
	    itemTexts.TryGetValue(thisItem.ToString(), out tempText);
	    OSDText.text = ("Press X to pick up " +  tempText + ".");
    }

    private void OnTriggerExit (Collider col){
		if(col == player){
            ClearOsd();
        }
    }

    private void ClearOsd() //restores OSD to default and resets isActiveObject flag
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
        hilightIcon.transform.position = screenPosition; //set the icon position to the converted screen position of the object
	}
}
