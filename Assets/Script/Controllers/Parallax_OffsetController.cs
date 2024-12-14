using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class Parallax_OffsetController : MonoBehaviour
{
	public GameObject objectToRotate;

	public Transform rotationToCopy;

	[Range(-50, 50)] public float rotationOffset;
	
	// Use this for initialization

	// Update is called once per frame
	void Update()
	{
		objectToRotate.GetComponent<Transform>().localRotation = Quaternion.Euler(
			rotationToCopy.rotation.x * rotationOffset,
			rotationToCopy.rotation.y * rotationOffset,
			objectToRotate.GetComponent<Transform>().rotation.z
		);
	}
}
