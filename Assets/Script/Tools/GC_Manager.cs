using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.PSVita;

public class GC_Manager : MonoBehaviour {

	// Use this for initialization
	void Start () {
		StartOfLevel();
		UnityEngine.PSVita.PSVitaVideoPlayer.TransferMemToHeap();
		UnityEngine.PSVita.Utility.SetMonoHeapBehaviours(false, true);
	}
	public static void StartOfLevel()
	{
		if (!Application.isEditor){
			// Collect any garbage from level loading.
			System.GC.Collect();
			// Disable GC while we play the level.
			UnityEngine.PSVita.Utility.gcEnable = false;
		}
	}

	public static void EndOfLevel()
	{
		if (!Application.isEditor){
			// Manually trigger a GC, note that we have to enable, then collect.
			UnityEngine.PSVita.Utility.gcEnable = true;
			StartOfLevel();
		}
	}
}
