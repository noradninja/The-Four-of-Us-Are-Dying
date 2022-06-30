using System.Collections;
using System.Collections.Generic;
using System.Net.Mime;
using UnityEngine;
using UnityEngine.UI;
using UnityEngine.PSVita;

public class GetDeviceModel : MonoBehaviour {

	public static string currentDeviceModel;
	public Text deviceModelUIText;

	// Use this for initialization
	void Start ()
	{
		if (!Application.isEditor)
		{
			if (UnityEngine.PSVita.PSVitaInput.WirelesslyControlled())
			{
				currentDeviceModel = "Playstation Vita TV";
			}
			else currentDeviceModel = "Playstation Vita";
		}
		else currentDeviceModel = "Unity Editor";
		deviceModelUIText.text = ("Device Type: " + currentDeviceModel);
	}
}
