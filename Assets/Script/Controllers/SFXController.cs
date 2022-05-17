using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class SFXController : MonoBehaviour {

	public AudioSource audioSource;
	public AudioClip audioClip;
	public AudioClip[] grassSounds;
	public AudioClip[] roadSounds;
	public AudioClip[] currentClips;
	public float distance = 0.055f;
	private RaycastHit hit;
	private int i;
	private int tick;
	private int maskValue;

	private void Update()
	{
		if (tick == 10)
		{
			every10FrameUpdate();//TODO: write this so its a subscriber fired event so we can ditch Update()
			tick = 0;
		}
		else tick++;
	}
	public void every10FrameUpdate(){
		maskValue = (LayerMask.GetMask("Ground"));
		if (Physics.Raycast(transform.position, Vector3.down, out hit, distance, maskValue)){
			//Debug.DrawRay(transform.position, Vector3.down * distance, Color.yellow);
			currentClips = grassSounds;
		}
		else{
			maskValue = (LayerMask.GetMask("Road"));
			if (!Physics.Raycast(transform.position, Vector3.down, out hit, distance, maskValue)) return;
		//	Debug.DrawRay(transform.position, Vector3.down * distance, Color.yellow);
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
