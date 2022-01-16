using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.UI;

public class Inventory_Screen_Manager : MonoBehaviour {
	public Text battText;
	public Text medText;
	// Use this for initialization
	void Start () {
		
	}
	
	// Update is called once per frame
	void Update () {
		if (battText.text != string.Format("{0:D2}", InventoryManager.batteryCount)){
			battText.text = string.Format("{0:D2}", InventoryManager.batteryCount);
		}
		if (medText.text != string.Format("{0:D2}", InventoryManager.medCount)){
			medText.text = string.Format("{0:D2}", InventoryManager.medCount);
		}
	}
}
