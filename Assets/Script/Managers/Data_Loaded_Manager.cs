using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class Data_Loaded_Manager : MonoBehaviour {
	public GameObject player;
	public SkinnedMeshRenderer playerBody;
	public List<GameObject> objectList;
	// Use this for initialization
	void Start () {
		if (PlayerPrefs.GetInt("hasLoadedFile")==1){
			
			player.transform.position = SetScenes.playerPosition;
			player.transform.rotation = SetScenes.playerRotation;
			InventoryManager.playerHealth = SetScenes.playerHealth;
			InventoryManager.batteryCount = SetScenes.playerBatteries;
			InventoryManager.medCount = SetScenes.playerMedkits;
			InventoryManager.stimCount = SetScenes.playerStimulants;
	
			playerBody.material.SetFloat("_PainValue", (InventoryManager.playerHealth * 0.01f));
			print ("Data Transfered!");
		}
		PlayerPrefs.SetInt("hasLoadedFile",0);
		PauseManager.isPaused = false;	
	}

}
