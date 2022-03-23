using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.SceneManagement;
using UnityEngine.UI;
using TMPro;

public class LoadScreen : MonoBehaviour {
	

	public AsyncOperation loadingOperation;
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
	public bool canLoad = false;
	
	

    void Start() {
		//pull the stored hint text to use on each load
		//loaderHint.text = SetScenes.loaderHint;
		//check if we are actually loading
		if (loadAtStart == true){
			StartCoroutine(StartLoad());
		
		}
	}

	void Update(){
		if (canLoad == true){
			StartCoroutine(FadeLoadingScreen(1,2));
		}
		//check if we are actually loading a level to avoid spamming the console with nullrefs 
		if (loading == true){
			//store current fill amount
			originalValue = progressCounterLeft.fillAmount;
			//Store the load progress
			loadProgress = loadingOperation.progress;
			//Change progress counter based on load progress, now with smooth animation between value changes
			progressCounterLeft.fillAmount = Mathf.Lerp(originalValue, 1-(loadProgress/0.9f), 0.1f);
			//progressCounterRight.fillAmount = Mathf.Lerp(originalValue, loadProgress/0.9f, 0.1f);
			//after loadProgress hits 0.9, start fading routine
			if (loadProgress >=0.9f){
				canLoad = true;
			}
		}
	}

   public IEnumerator StartLoad()
    {
		loading = true;
		//load the level, but don't activate it yet
		loadingOperation = SceneManager.LoadSceneAsync("EnviroTest", LoadSceneMode.Single);
		loadingOperation.allowSceneActivation = false;
		
		while (loadProgress < 0.9f) {
            yield return null;
        }
		

		
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
		progressCounterLeft.fillAmount = 0;
		loadingOperation.allowSceneActivation = true;
		//if loading is done, activate the level and unload the loader
		if(loadingOperation.isDone) {
			SceneManager.SetActiveScene(SceneManager.GetSceneByName("EnviroTest"));
			SceneManager.UnloadSceneAsync(SceneManager.GetSceneByName("LoadScreen"));
		}
    }
}			


	