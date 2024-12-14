using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class Light_LOD_Enumerator : MonoBehaviour {
	public enum LODState
	{
		Full,
		Reduced
	}
	public GameObject player;
	public bool enableLightLOD = true;
	public float distance;
	public LODState lightLOD;
	[SerializeField] private int tick;
	[SerializeField] private Light thisLight;
	private Vector3 playerPos;
	private Vector3 thisPos;
	// Use this for initialization
	void Start ()
	{
		thisLight = this.GetComponent<Light>();
		thisLight.shadows = LightShadows.None;
		tick = 0;
	}
	
	// Update is called once per frame
	void Update () {
		if (tick != 15)
			tick++;
		else
		{
			thisPos = this.transform.position;
			playerPos = player.transform.position;
			distance = Vector3.Distance(thisPos, playerPos); //how far are we from the player
			tick = 0;
			TickUpdate();
		}	
	}

	private void TickUpdate()
	{
		if (!enableLightLOD) return; //check if we enabled this; if not, dump
		if (thisLight.type == LightType.Spot)
		{
			lightLOD = distance <= thisLight.range * 1.25f ? LODState.Full : LODState.Reduced; //LOD0 if < [0] else LOD1
		}
		else lightLOD = distance <= thisLight.range ? LODState.Full : LODState.Reduced;
	//set LODState here based on distance

	switch (lightLOD)
		{
			case LODState.Full:
				thisLight.enabled = true;
				break;
			case LODState.Reduced:
				thisLight.enabled = false;
				break;
		}
	}
}
