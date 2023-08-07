using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class Vita_Clock_Setter : MonoBehaviour {
	public enum CpuClock
	{
		High,
		Stock
	}
	public enum GpuClock
	{
		High,
		Medium,
		Stock
	}
	public enum BusClock
	{
		High,
		Medium,
		Stock
	}
	public enum XBarClock
	{
		High,
		Stock
	}
	public CpuClock cpuSpeed = CpuClock.Stock;
	public GpuClock gpuSpeed = GpuClock.Stock;
	public BusClock busSpeed = BusClock.Stock;
	public XBarClock xbarSpeed = XBarClock.Stock;
	private int cpuValue;
	private int gpuValue;
	private int busValue;
	private int xbarValue;
	// Use this in any scene you want to set the clocks for
	void Awake () {
		if(Application.platform.Equals(RuntimePlatform.PSP2)){
			UnityOC.ResetFrequencies(); //restore stock clocks
        }
		switch (cpuSpeed)
		{
			case CpuClock.High:
				cpuValue = 444;
				break;
			case CpuClock.Stock:
				cpuValue = 333;
				break;
		}
		switch (gpuSpeed)
		{
			case GpuClock.High:
				gpuValue = 222;
				break;
			case GpuClock.Medium:
				gpuValue = 166;
				break;
			case GpuClock.Stock:
				gpuValue = 111;
				break;
		}
		switch (busSpeed)
		{
			case BusClock.High:
				busValue = 222;
				break;
			case BusClock.Medium:
				busValue = 166;
				break;
			case BusClock.Stock:
				busValue = 111;
				break;
		}
		switch (xbarSpeed)
		{
			case XBarClock.High:
				xbarValue = 166;
				break;
			case XBarClock.Stock:
				xbarValue = 111;
				break;
		}
		if(Application.platform.Equals(RuntimePlatform.PSP2))
			UnityOC.SetFrequencies(cpuValue, busValue, gpuValue, xbarValue); //apply clocks
	}
}
