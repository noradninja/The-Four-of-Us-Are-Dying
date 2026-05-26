using System.Collections;
using System.Collections.Generic;
using UnityEditor;
using UnityEngine;
using UnityEngine.Experimental.Rendering;

public class VitaClockSetter : MonoBehaviour
{
    public enum BusClock
    {
        High = 222,
        Medium = 166,
        Stock = 111
    }

    public enum CPUClock
    {
        High = 444,
        Stock = 333
    }

    public enum GPUClock
    {
        High = 222,
        Medium = 166,
        Stock = 111
    }

    public enum XBarClock
    {
        High = 222,
        Stock = 111
    }

    public CPUClock cpuSpeed = CPUClock.Stock;
    public GPUClock gpuSpeed = GPUClock.Stock;
    public BusClock busSpeed = BusClock.Stock;
    public XBarClock xbarSpeed = XBarClock.Stock;

    public bool xferMemToHeap;

    public bool memoryHUD;

    // Use this in any scene you want to set the clocks for
    void Awake()
    {
        if (Application.platform == RuntimePlatform.PSP2)
        {
            UnityOC.ResetFrequencies(); //restore stock clocks
            UnityOC.SetFrequencies((int)cpuSpeed, (int)busSpeed, (int)gpuSpeed, (int)xbarSpeed);

            UnityOC.SetFrequencies( // Pass -1 for any stock values so UnityOC disables it's internal hooks
                cpuSpeed == CPUClock.Stock ? -1 : (int)cpuSpeed,
                busSpeed == BusClock.Stock ? -1 : (int)busSpeed,
                gpuSpeed == GPUClock.Stock ? -1 : (int)gpuSpeed,
                xbarSpeed == XBarClock.Stock ? -1 : (int)xbarSpeed
            );
            if (xferMemToHeap)
            {
                UnityEngine.PSVita.PSVitaVideoPlayer.TransferMemToHeap(); //reclaim 26MB PHYSCONT; no FMV
            }

            if (memoryHUD) UnityEngine.PSVita.Diagnostics.enableHUD = true;
        }
        else Debug.Log("This script only sets clock speeds PSVita/PSTV hardware");
    }
}