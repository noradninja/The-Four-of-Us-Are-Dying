using System.Collections;
using System.Collections.Generic;
using System;
using UnityEngine;

//just a class required for the level loader to uncouple it from the levels being loaded
public static class SetScenes {

	public static string sceneToLoad;
	public static string sceneToUnload;
	public static string currentScene;
	public static string nextScene;
	public static string loaderHint;
	public static Vector3 playerPosition;
	public static Quaternion playerRotation;
	public static int playerMedkits;
	public static int playerStimulants;
	public static int playerBatteries;
	public static float playerHealth;
	public static List<int> collectedItems = new List<int>();
}
