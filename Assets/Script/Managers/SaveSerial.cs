using System.Collections;
using System.Collections.Generic;
using System;
using System.Runtime.Serialization.Formatters.Binary;
using System.IO;
using UnityEngine;
using UnityEngine.UI;



/*This script serializes a binary file for saving data. For Vita use, dataPath should be formatted as ux0:/data/someDirectoryName/ in the Inspector.
You should also define savePrefix in some fashion, otherwise youre saves will just be based on the number of the slot you've selected*/
public class SaveSerial : MonoBehaviour {
    
	public GameObject saveManager;
	public string dataPath;
	public string savePrefix;
	public string saveFileName;
	public bool hasLoaded;
	public int slotSelector;
// Set up the data we are saving to the file
	public string levelToSave;
	public GameObject player;
	public List<GameObject> medList;
	public List <GameObject> battList;
	public List<GameObject> lwList;
	public List<GameObject> hwList;

	

void Start() {
	SetScenes.sceneToLoad = "LoadScreen";
	levelToSave = this.GetComponent<SceneLoadTrigger>().currentScene; 
//ignore this if we are in the editor

//create directory on the Vita for our save files if it doesn't exist
	if(!Directory.Exists(dataPath)){
		Directory.CreateDirectory(dataPath);
	}
}

 void Update()
 {
	 slotSelector = SetScenes.currentScene == "Title" ? saveManager.GetComponent<LoadManager_Inputs>().selectedSlot : saveManager.GetComponent<SaveManager_Inputs>().selectedSlot;
	 //set save file name based on the slot selected so we know which file we are loading/saving
	saveFileName = (savePrefix + slotSelector + ".sav");
 }
	
//this is the class we are using to store our data we want to save
[System.Serializable]

public class SaveData
	{
		public string savedLevel;
		public float[] playerPosition = new float [3];
		public float[] playerRotation = new float [3];
		public int playerMedkits;
		public int playerStimulants;
		public int playerBatteries;
		public float playerHealth;
		public List<int> collectedMeds = new List<int>();
		public List<int> collectedBattery = new List<int>();
		public List<int> collectedLightWep = new List<int>();
		public List<int> collectedHvyWep = new List<int>();

	}
//create a binary file, copy our data from the game to a SaveData instance
public void Save()
	{
		//data prep
		medList.Clear();
		medList.AddRange(GameObject.FindGameObjectsWithTag("Meds"));
		battList.Clear();
		battList.AddRange(GameObject.FindGameObjectsWithTag("Battery"));
		hwList.Clear();
		hwList.AddRange(GameObject.FindGameObjectsWithTag("Heavy"));
		lwList.Clear();
		lwList.AddRange(GameObject.FindGameObjectsWithTag("Light"));

		var bf = new BinaryFormatter(); 
		var file = File.Create(dataPath + saveFileName);
		var position = player.transform.position;
		var rotation = player.transform.rotation;
		var data = new SaveData();
		//data needed for reloading on game load
		data.savedLevel = levelToSave;
		data.playerPosition[0] = position.x;
		data.playerPosition[1] = position.y;
		data.playerPosition[2] = position.z;
		data.playerRotation[0] = rotation.eulerAngles.x;
		data.playerRotation[1] = rotation.eulerAngles.y;
		data.playerRotation[2] = rotation.eulerAngles.z;
		data.playerBatteries = InventoryManager.batteryCount;
		data.playerMedkits = InventoryManager.medCount;
		data.playerStimulants = InventoryManager.stimCount;
		data.playerHealth = player.GetComponent<PlayerController>().health;

		// //spin through list data to store identifiers
		
		//meds
		for (var i = 0; i < medList.Count; i++){
			data.collectedMeds.Add(medList[i].gameObject.GetComponent<Item_Enumerator>().identifier);
		}
		//batteries
		for (var i = 0; i < battList.Count; i++){
			data.collectedBattery.Add(battList[i].gameObject.GetComponent<Item_Enumerator>().identifier);
		}
		//light weapons
		for (var i = 0; i < lwList.Count; i++){
			data.collectedLightWep.Add(lwList[i].gameObject.GetComponent<Item_Enumerator>().identifier);
		}
		//heavy weapons
		for (var i = 0; i < hwList.Count; i++){
			data.collectedHvyWep.Add(hwList[i].gameObject.GetComponent<Item_Enumerator>().identifier);
		}
		
		bf.Serialize(file, data);
		PlayerPrefs.SetInt("haveSavedGame", 1);
		PlayerPrefs.Save();
		Debug.Log(data.savedLevel + " saved!");
		file.Close();	
	}
//checks if the file exists, if so load the data from it and copy it back to our game
public void Load()
	{
		if (File.Exists(dataPath + saveFileName))
		{
			var bf = new BinaryFormatter();
			var file =  File.Open(dataPath + saveFileName, FileMode.Open);
			var data = (SaveData)bf.Deserialize(file);
			file.Close();
			levelToSave = data.savedLevel;

			Debug.Log (levelToSave);
			hasLoaded = true;
			SetScenes.nextScene = levelToSave;
			SetScenes.playerPosition = new Vector3( data.playerPosition[0], 
													data.playerPosition[1],
													data.playerPosition[2] );
			SetScenes.playerRotation = Quaternion.Euler( data.playerRotation[0], 
														 data.playerRotation[1], 
														 data.playerRotation[2] );
			SetScenes.playerBatteries = data.playerBatteries;
			SetScenes.playerHealth = data.playerHealth;
			SetScenes.playerMedkits = data.playerMedkits;
			SetScenes.playerStimulants = data.playerStimulants;
			SetScenes.MedsRemaining = data.collectedMeds;
			SetScenes.BatteryRemaining = data.collectedBattery;
			SetScenes.LightWepRemaining = data.collectedLightWep;
			SetScenes.HvyWepRemaining = data.collectedHvyWep;
			PlayerPrefs.SetInt("hasLoadedFile",1);
			PlayerPrefs.Save();
		}
		else Debug.Log("No Save File Exists to Load!");
	}
//checks if the file exists, if it does, delete the file and reset our game variables
public void Reset()
	{

		if (File.Exists(dataPath + saveFileName))
		{
			File.Delete(dataPath + saveFileName);
			levelToSave = "";
		}
		else Debug.Log("No Save File Exists to Delete!");
	}

}