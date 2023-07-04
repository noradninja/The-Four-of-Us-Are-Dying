using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class SFXController : MonoBehaviour {

	public AudioSource audioSource;
	public AudioClip audioClip;
	public AudioClip[] grassSounds;
	public AudioClip[] roadSounds;
	public AudioClip[] wetRoadSounds;
	public AudioClip[] currentClips;
	public float distance = 0.055f;
	private RaycastHit hit;
	private int i;
	private int tick;
	private int maskValue;

	private void Update()
	{
		if (tick == 5)
		{
			every5FrameUpdate();//TODO: write this so its a subscriber fired event so we can ditch Update()
			tick = 0;
		}
		else tick++;
	}
	private void every5FrameUpdate(){

		if (Physics.Raycast(transform.position, Vector3.down, out hit, distance, 
			    LayerMask.GetMask("Ground"))){
			currentClips = grassSounds;
		}
		else if (Physics.Raycast(transform.position, Vector3.down, out hit, distance, 
        			         LayerMask.GetMask("Water_Decals")))
		{
					//print("Water_Puddle");
        			currentClips = wetRoadSounds;
        }
		else if (Physics.Raycast(transform.position, Vector3.down, out hit, distance,
			         LayerMask.GetMask("Road")))
		{
			currentClips = roadSounds;
		}
		

	}

	private void footstepSound(){
		i = Random.Range(0, currentClips.Length);
		audioClip = currentClips[i];
		audioSource.pitch = Random.Range (0.75f, 1.25f);
		audioSource.PlayOneShot(audioClip);
	}
}
