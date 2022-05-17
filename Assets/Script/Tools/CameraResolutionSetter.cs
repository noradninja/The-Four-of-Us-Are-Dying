
using System;
using UnityEngine;

[ExecuteInEditMode]

public class CameraResolutionSetter : MonoBehaviour {
	public enum currentResolution
	{
		[Tooltip("960x544")] Full,
		[Tooltip("720x408")] Mid,
		[Tooltip("640x363")] Low,
		[Tooltip("480x272")] PSP
	}
	private new Camera camera;
	public currentResolution screenResolution;
	private void Start()
	{
		camera = GetComponent<Camera>();
       
		if (!Application.isEditor)
			switch (screenResolution)
			{
				case currentResolution.Full:
					Screen.SetResolution(960, 544, true, 60);
					
					break;
				case currentResolution.Mid:
					Screen.SetResolution(720, 408, true, 60);
					
					break;
				case currentResolution.Low:
					Screen.SetResolution(640, 368, true, 60);
					
					break;
				case currentResolution.PSP:
					Screen.SetResolution(480, 272, true, 60);
					
					break;
			}
	} 
}
