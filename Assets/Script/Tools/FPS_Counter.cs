using System;
using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.PSVita;
using UnityEngine.UI;
public class FPS_Counter : MonoBehaviour {

	//public float updateInterval = 0.5f; //How often should the number update
	public Text fpsText;
    public int frameRange = 60;
    public float updateInterval = 0.5f;
    public int maxFPS;
    public int minFPS;
    float accum = 0.0f;
    int frames = 0;
    float timeleft;
    int[] fpsBuffer;
	int fpsBufferIndex;
    public float averageFPS;
	public float msFrame;
    public Text vramText;
	public Text ramText;

    // Use this for initialization
void Start(){
		        
        timeleft = updateInterval;
	}
  
    // Update is called once per frame
    void Update()
    {
        timeleft -= Time.unscaledDeltaTime;
        accum += Time.timeScale / Time.unscaledDeltaTime;
        ++frames;
      
        // Interval ended - update GUI text and start new interval
        if (timeleft <= 0.0)
        {
            // display two fractional digits (f2 format)
           // averageFPS = (accum / frames);
			msFrame = (1/averageFPS) * 1000; //get ms/frame
            timeleft = updateInterval;
            accum = 0.0f;
            frames = 0;
            //Display the fps/ms and round to n decimals
            fpsText.text = (Mathf.Clamp(Mathf.RoundToInt(averageFPS),0,99).ToString("F0") + " FPS Average / " + 
                                        msFrame.ToString("F2") + " ms/frame over " + frameRange/30 + " second(s)");
            switch (Application.isEditor)
            {
	            case false:
	            {
		            float VRAMValue = UnityEngine.PSVita.Diagnostics.GetFreeMemoryCDRAM();
		            decimal VRAMFree = Math.Round((decimal)(VRAMValue/1000000), 2);
		            decimal calcVRAM = (((128-VRAMFree)/128)*100);
		            decimal percentVRAM = Math.Round((decimal)calcVRAM ,2);
                
		            float RAMValue = UnityEngine.PSVita.Diagnostics.GetFreeMemoryLPDDR();
		            decimal RAMFree = Math.Round((decimal)(RAMValue/1000000), 2);
		            decimal calcRAM = (((512-RAMFree)/512)*100);
		            decimal percentRAM = Math.Round((decimal)calcRAM ,2);

		            vramText.text = ("VRAM: " + VRAMFree + "MB Free / 128MB- " + percentVRAM + "% Used");
		            ramText.text = ("RAM: " + RAMFree + "MB Free / 512MB- "+ percentRAM + "% Used");
		            if (percentVRAM >= 75){
			            vramText.color = Color.red;
		            }
		            else if(percentVRAM < 75 && percentVRAM > 50){
			            vramText.color = Color.yellow;
		            }
		            else vramText.color = Color.green;

		            if (percentRAM >= 75){
			            ramText.color = Color.red;
		            }
		            else if(percentRAM < 75 && percentRAM > 50){
			            ramText.color = Color.yellow;
		            }
		            else ramText.color = Color.green;

		            break;
	            }
	            case true:
		            vramText.text = ("VRAM: Unavailable");
		            ramText.text = ("RAM: Unavailable");
		            break;
            }
        }
        
        if (fpsBuffer == null || fpsBuffer.Length != frameRange) {
			InitializeBuffer();
		}
		UpdateBuffer();
		CalculateFPS();

		if (Mathf.RoundToInt(averageFPS) >= 30.00f){
			fpsText.color = Color.green;
		}
		else if (Mathf.RoundToInt(averageFPS) < 30.00f) {
			fpsText.color = Color.red;
		}
    }
    void InitializeBuffer () {
		if (frameRange <= 0) {
			frameRange = 1;
		}
		fpsBuffer = new int[frameRange];
		fpsBufferIndex = 0;
	}
   void UpdateBuffer () {
		fpsBuffer[fpsBufferIndex++] = (int)(1f / Time.unscaledDeltaTime);
		if (fpsBufferIndex >= frameRange) {
			fpsBufferIndex = 0;
		}
	}
    void CalculateFPS () {
        int sum = 0;
		int highest = 0;
		int lowest = int.MaxValue;
		for (int i = 0; i < frameRange; i++) {
			int fps = fpsBuffer[i];
			sum += fps;
			if (fps > highest) {
				highest = fps;
			}
			if (fps < lowest) {
				lowest = fps;
			}
		}
		averageFPS = sum / frameRange;
        averageFPS += 1; //fix for off by one error cause I am fucking lazy
		maxFPS = highest;
		minFPS = lowest;
    }
    
}
