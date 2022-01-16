using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.UI;

public class GetFrameTiming : MonoBehaviour {
public ulong timing;
	public Text timingText;
	public FrameTiming[] frameTimings;

	// Use this for initialization
	void Start () {
		
	}
	
	// Update is called once per frame
	void Update () {
		FrameTimingManager.CaptureFrameTimings();
		 frameTimings = new FrameTiming[3];
		uint timingsRetrieved = FrameTimingManager.GetLatestTimings(3, frameTimings);
		timing = (frameTimings[0].cpuTimeFrameComplete - frameTimings[1].cpuTimePresentCalled);
		timingText.text = ("Frame Time (ms): " + timing);
	}
}
