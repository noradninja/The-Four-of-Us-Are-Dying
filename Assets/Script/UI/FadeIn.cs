using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.UI;
using UnityEngine.SceneManagement;
public class FadeIn : MonoBehaviour {

	public float duration = 2.0f;
	public RawImage fadeImage;
	public RawImage Target;
	public CanvasGroup pausePanel;
	public GameObject titleAnimator;
	
	private bool ignore = true;
	private string joystick1 = "joystick button ";
	private int CROSS = 0;
	private bool isReady;

	// Use this for initialization
	void Start () {
		SetScenes.currentScene = "Title";
		PlayerPrefs.SetInt("hasLoadedFile", 0);
		PlayerPrefs.Save();
		
		if (Application.isEditor){
			//because the DS3 registers the buttons differently in Windows
			CROSS = 2;
        }
	}
	
	// Update is called once per frame
	void Update ()
	{
		isReady = titleAnimator.GetComponent<Title_Animator>().isReady;
		if(Input.GetButtonDown("Cross") && isReady){
			// StartCoroutine(fade(new Color(0,0,0,0),new Color (0,0,0,1), duration));
			// if (PlayerPrefs.HasKey("hasSavedOnce")){
			// 	BroadcastMessage("Load");
			// }	
			StartCoroutine(FadeScreen(1 , 0.5F));
			PauseManager.isPaused = true;   
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
	
		// if (!PlayerPrefs.HasKey("haveSavedGame")){
		// 	SetScenes.sceneToLoad = "EnviroTest";
		// 	SceneManager.LoadSceneAsync("LoadScreen", LoadSceneMode.Single);
		// 	print ("Not loaded from Save File");
		// }
	}
	IEnumerator FadeScreen(float targetValue, float duration) {
        float startValue = pausePanel.alpha;
        float fadeTime = 0;
		//fade out the loadscreen canvas group
        while (fadeTime < duration)
        {
            pausePanel.alpha = Mathf.Lerp(startValue, targetValue, fadeTime / duration);
            fadeTime += Time.deltaTime;
            yield return null;
        }
		pausePanel.alpha = targetValue;
	}
}
