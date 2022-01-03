using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.UI;

public class Fadeout : MonoBehaviour {
	public float duration = 2.0f;
	public RawImage fadeImage;
	private bool ignore = true;


	// Use this for initialization
	
	void Start () {
		//UnityEditor.EditorPrefs.SetBool("DeveloperMode", false);
		StartCoroutine(fade(new Color(0,0,0,1),new Color (0,0,0,0), duration));	
	}
	
	// Update is called once per frame
	void Update () {
	
	}

	IEnumerator fade(Color startValue, Color endValue, float duration){
		float time = 0.0f;
		while (time < duration){
			fadeImage.color = Color.Lerp (startValue, endValue, time/duration);
			time += Time.deltaTime;
        	yield return null;
		}
		fadeImage.color = endValue;
		this.gameObject.SetActive(false);
	}
}
