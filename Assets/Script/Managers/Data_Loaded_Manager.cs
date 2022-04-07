using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.UI;

public class Data_Loaded_Manager : MonoBehaviour {
	public GameObject player;
	public GameObject OptionsManagerInputs;
	public SkinnedMeshRenderer playerBody;
	public List<GameObject> objectList;
	public AudioSource bgmSource;
	public AudioSource sfxSource;
	public AudioSource ambientSource;
	public AudioSource thunderStormSource;
	public AudioSource rainSource;
	public Image SFXLevel;
	// Use this for initialization
	void Start () {
		if (PlayerPrefs.GetInt("hasLoadedFile")==1){
//player
			player.transform.position = SetScenes.playerPosition;
			player.transform.rotation = SetScenes.playerRotation;
			playerBody.material.SetFloat("_PainValue", (SetScenes.playerHealth * 0.01f));
//Inventory
			InventoryManager.playerHealth = SetScenes.playerHealth;
			InventoryManager.batteryCount = SetScenes.playerBatteries;
			InventoryManager.medCount = SetScenes.playerMedkits;
			InventoryManager.stimCount = SetScenes.playerStimulants;
//Settings
			bgmSource.volume = PlayerPrefs.GetFloat("SavedBGM");
			sfxSource.volume = PlayerPrefs.GetFloat("SavedSFX");
			ambientSource.volume = PlayerPrefs.GetFloat("SavedSFX");
			thunderStormSource.volume =  PlayerPrefs.GetFloat("SavedSFX");
			rainSource.volume = PlayerPrefs.GetFloat("SavedSFX") * 0.65f;
			OptionsManagerInputs.GetComponent<OptionsManagerInputs>().SensitivityToSave =  PlayerPrefs.GetFloat("SavedSensitivity");
		}
		PlayerPrefs.SetInt("hasLoadedFile",0);
		PlayerPrefs.Save();
		PauseManager.isPaused = false;	
	}

}
