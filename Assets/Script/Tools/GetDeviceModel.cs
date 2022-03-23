using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.UI;

public class GetDeviceModel : MonoBehaviour {

	public string currentDeviceModel;
	public Text deviceModelUIText;

	// Use this for initialization
	void Start () {
		currentDeviceModel = SystemInfo.deviceModel + "/" + SystemInfo.deviceType;
		deviceModelUIText.text = ("Device Type: " + currentDeviceModel);
	}
}
