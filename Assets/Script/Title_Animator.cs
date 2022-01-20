using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.UI;

public class Title_Animator : MonoBehaviour {

public bool isEnabled = false;
public RawImage fadeImage;
public float fadeAmount;
public float fadeDelay;

public RawImage fadeImage2;
public float fadeAmount2;
public float fadeDelay2;
public RawImage fadeImage3;
public float fadeAmount3;
public float fadeDelay3;
public Image fillImage;
public float fillAmount;
public float fillDelay;

	// Use this for initialization
	void Start () {
		//UnityEditor.EditorPrefs.SetBool("DeveloperMode", false);
		StartCoroutine(delay(1, 0, 3.0f));
		if(!Application.isEditor){
			QualitySettings.vSyncCount = 2;
		}
	}
	
	// Update is called once per frame
	void Update () {
		
	}
	IEnumerator delay(float startValue, float endValue, float duration){
		float time = 0.0f;
		
		while (time < duration){
			time += Time.deltaTime;
        	yield return null;
		}
		time = duration;
		StartCoroutine(fade2(new Color(0,0,0,1),new Color (0,0,0,0) , fadeDelay2));
		while (time < duration + 0.75f){
			time += Time.deltaTime;
        	yield return null;
		}
		time = duration+ 0.75f;
		StartCoroutine(wipe(1, 0, fillDelay));
	}
		IEnumerator wipe(float startValue, float endValue, float duration){
		float time = 0.0f;
		StartCoroutine(fade(new Color(0,0,0,1),new Color (0,0,0,0) , fadeDelay));
		while (time < duration){
			fillAmount = Mathf.Lerp (startValue, endValue, time/duration);
			fillImage.fillAmount = fillAmount;
			time += Time.deltaTime;
        	yield return null;
		}
		fillImage.fillAmount = endValue;
		fillImage.gameObject.SetActive(false);
		StartCoroutine(fade3(new Color(0,0,0,1),new Color (0,0,0,0) , fadeDelay3));	
	}
	IEnumerator fade(Color startValue, Color endValue, float duration){
		float time = 0.0f;
		while (time < duration){
			fadeImage.color = Color.Lerp (startValue, endValue, time/duration);
			time += Time.deltaTime;
        	yield return null;
		}
		fadeImage.color = endValue;
		fadeImage.gameObject.SetActive(false);
	}
	IEnumerator fade2(Color startValue, Color endValue, float duration){
		float time = 0.0f;
		while (time < duration){
			fadeImage2.color = Color.Lerp (startValue, endValue, time/duration);
			time += Time.deltaTime;
        	yield return null;
		}
		fadeImage2.color = endValue;
		fadeImage2.gameObject.SetActive(false);
	}
	IEnumerator fade3(Color startValue, Color endValue, float duration){
			float time = 0.0f;
			while (time < duration){
				fadeImage3.color = Color.Lerp (startValue, endValue, time/duration);
				time += Time.deltaTime;
				yield return null;
			}
			fadeImage3.color = endValue;
			fadeImage3.gameObject.SetActive(false);
		}

}
