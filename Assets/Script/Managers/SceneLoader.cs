using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.SceneManagement;
using UnityEngine.UI;
using TMPro;

public class SceneLoader : MonoBehaviour {
	

	AsyncOperation loadingOperation;
	private bool loading = false;
	
	public CanvasGroup canvasGroup;
	public Image progressCounterLeft;
	public Image progressCounterRight;
	public TextMeshProUGUI loaderHint;
	public float fadeDuration;
	public float originalValue;
	public float loadProgress;	
	public float fadeValue;
	public bool loadAtStart = true;
	
	

    void Start() {
		//pull the stored hint text to use on each load
		loaderHint.text = SetScenes.loaderHint;
		//check if we are actually loading
		if (loadAtStart == true){
		StartCoroutine(StartLoad());
		
		}
	}

	void Update(){
		//check if we are actually loading a level to avoid spamming the console with nullrefs 
		if (loading == true){
			//store current fill amount
			originalValue = progressCounterLeft.fillAmount;
			//Store the load progress
			loadProgress = loadingOperation.progress;
			//Change progress counter based on load progress, now with smooth animation between value changes
			progressCounterLeft.fillAmount = Mathf.Lerp(originalValue, loadProgress/0.9f, 0.1f);
			progressCounterRight.fillAmount = Mathf.Lerp(originalValue, loadProgress/0.9f, 0.1f);
		}
	}

   public IEnumerator StartLoad()
    {
		loading = true;
		//load the level, but don't activate it yet
		loadingOperation = SceneManager.LoadSceneAsync(SetScenes.sceneToLoad, LoadSceneMode.Single);
		loadingOperation.allowSceneActivation = false;
		
		while (loadProgress < 0.9f && !loadingOperation.isDone) {
            yield return null;
        }
		
		//after loadProgress hits 0.9, start fading routine
        yield return StartCoroutine(FadeLoadingScreen(fadeValue, fadeDuration));
		
    }

	IEnumerator FadeLoadingScreen(float targetValue, float duration)
    {
        float startValue = canvasGroup.alpha;
        float time = 0;

		//fade out the loadscreen canvas group
        while (time < duration)
        {
            canvasGroup.alpha = Mathf.Lerp(startValue, targetValue, time / duration);
            time += Time.deltaTime;
            yield return null;
        }
		//ensure canva alpha has hit the target
		canvasGroup.alpha = targetValue;
		//activate the scene
		loadingOperation.allowSceneActivation = true;
		//if loading is done, activate the level and unload the loader
		if(loadingOperation.isDone) {
			SceneManager.SetActiveScene(SceneManager.GetSceneByName(SetScenes.sceneToLoad));
			SceneManager.UnloadSceneAsync(SceneManager.GetSceneByName(SetScenes.sceneToUnload));
		}
    
    }
}			