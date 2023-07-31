using System.Collections;
using System.Collections.Generic;
using UnityEditor;
using UnityEngine;
using UnityEngine.PSVita;

public class PauseManager : MonoBehaviour {
public static bool isPaused;
public bool isPausedInspector;

	// Update is called once per frame
	void Update ()
	{
		//set isPausedInspector so we can verify state in Editor
		//configure screen dimming to only happen when the game is paused
		isPausedInspector = isPaused;
		if (!Application.isEditor)
		{
			UnityEngine.PSVita.Utility.PowerTick(isPaused
				? UnityEngine.PSVita.Utility.PowerTickType.Default
				: UnityEngine.PSVita.Utility.PowerTickType.DisableDisplayDimming);
		}
	}
}
