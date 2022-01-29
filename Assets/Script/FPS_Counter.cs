using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.UI;

public class FPS_Counter : MonoBehaviour {

	public float updateInterval = 0.5f; //How often should the number update
	public Text fpsText;
    float accum = 0.0f;
    int frames = 0;
    float timeleft;
    public float fps;
	public float msFrame;

    // Use this for initialization
    void Start()
    {
        timeleft = updateInterval;
    }

    // Update is called once per frame
    void Update()
    {
        timeleft -= Time.deltaTime;
        accum += Time.timeScale / Time.deltaTime;
        ++frames;

        // Interval ended - update GUI text and start new interval
        if (timeleft <= 0.0)
        {
            // display two fractional digits (f2 format)
            fps = (accum / frames);
			msFrame = (1/fps) * 1000; //get ms/frame
            timeleft = updateInterval;
            accum = 0.0f;
            frames = 0;
        }
    }

    void OnGUI()
    {
		
        //Display the fps/ms and round to n decimals
        fpsText.text = (Mathf.Round(fps).ToString("F0") + " FPS / " + msFrame.ToString("F2") + " ms/frame");
		if (Mathf.Round(fps) >= 30.00f){
			fpsText.color = Color.green;
		}
		else if (Mathf.Round(fps) < 30.00f) {
			fpsText.color = Color.red;
		}
    }
}
