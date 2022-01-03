using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.UI;
using UnityEngine.SceneManagement;
public class FadeIn : MonoBehaviour {

	public float duration = 2.0f;
	public RawImage fadeImage;
	public GameObject Target;
	
	private bool ignore = true;
	private const string joystick1 = "joystick button ";
	private const int CROSS = 0;

	// Use this for initialization
	void Start () {
		
	}
	
	// Update is called once per frame
	void Update () {
		if(Input.GetKeyDown(joystick1 + CROSS)){
			StartCoroutine(fade(new Color(0,0,0,0),new Color (0,0,0,1), duration));
			//SceneManager.LoadSceneAsync("EnviroTest");		
		}
	}
	IEnumerator fade(Color startValue, Color endValue, float duration){
		float time = 0.0f;
		while (time < duration){
			fadeImage.color = Color.Lerp (startValue, endValue, time/duration);
			time += Time.deltaTime;
        	yield return null;
		}
		fadeImage.color = endValue;
		SceneManager.LoadSceneAsync("EnviroTest", LoadSceneMode.Single);
	}
}
