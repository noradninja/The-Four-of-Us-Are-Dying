using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class Cam : MonoBehaviour {
	public GameObject Camera;
	public float speed;
	public Transform targetObject;
	private Vector3 initialPos;
	public Vector3 zoomPos;
	private const string joystick1 = "joystick button ";
	private const int CROSS = 0;
	[SerializeField]
	private bool latch;
	// Use this for initialization
	void Start () {
		initialPos = Camera.transform.position;
		zoomPos = targetObject.position;
	}
	
	// Update is called once per frame
	void Update () {
		if (Input.GetKey(joystick1 + CROSS)){
			Camera.transform.position = Vector3.MoveTowards(Camera.transform.position, zoomPos, speed * Time.deltaTime);
			latch = true;
		}
		if (Input.GetKeyUp(joystick1 + CROSS) && latch){ 
			StartCoroutine(ZoomOut());
		}
	}
	IEnumerator ZoomOut(){
		if (Camera.transform.position != initialPos){
			while (Camera.transform.position != initialPos){
				Camera.transform.position = Vector3.MoveTowards(Camera.transform.position, initialPos, speed * Time.deltaTime);
				yield return null;
			}
			if (Camera.transform.position == initialPos){
				latch = false;
			}
		}
	}
}
