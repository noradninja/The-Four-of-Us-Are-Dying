using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.UI;
using UnityEngine.SceneManagement;

public class StartMenuManagerInputs : MonoBehaviour {
private const string joystick1 = "joystick 1 button ";
	private const int CROSS = 0;
	private const int CIRCLE = 1;
	private const int SQUARE = 2;
	private const int TRIANGLE = 3;
	private const int SELECT = 6;
	private const int START = 7;
	private const int UP = 8;
	private const int RIGHT = 9;
	private const int DOWN = 10;
	private const int LEFT = 11;

	public int selectedSlot = 1;
	public Color baseColor;
	public Color hilightColor;
	public Color selectedColor;
	public Image slot0;
	public Image slot1;
	public Image slot2;
	public GameObject saveManager;
	public GameObject optionsManager;
	public GameObject ButtonManager;
	public CanvasGroup loaderCanvas;
	public CanvasGroup optionCanvas;
	public CanvasGroup loadDialogGroup;
	public float fadeDuration;
	public float targetValue;
	public bool loaderEnabled = false;
	public bool optionEnabled = false;
	public bool menuEnabled = false;
	public float timer = 0.0f;
//	private float delay = 0.1f;
	public float duration = 0.5f;
	AsyncOperation loadingOperation;
	public CanvasGroup canvasGroup;
	public CanvasGroup selectedCanvas;
	public GameObject audioManager;
	public float loadProgress;	
	public bool loading = false;
	public bool loadDialogEnabled = false;
	public bool delayTimer = false;
	public List<AudioClip> clipList;
	public AudioSource audioSource;
	public GameObject currentSelection;
	private Animation anim;

	// Use this for initialization
	void Start () {
		//set the color of the initially selected slot
		SetScenes.sceneToLoad = "LoadScreen";
		SetScenes.nextScene = "Test";
		setColor();
		//EventManager.GetComponent<SaveSerial>();
		//clipList = audioManager.GetComponent<AudioManager>().SFXList;
	}
	
	// Update is called once per frame
	void Update () {
		if (loading == false){
			//reset button colros to defaults
			if (loaderCanvas.alpha == 0){
				saveManager.GetComponent<TitleSaveManagerInputs>().timer = 0.0f;
				saveManager.GetComponent<TitleSaveManagerInputs>().setColor();
				loaderEnabled = false;
				setColor();
				
			}
			if (optionCanvas.alpha == 0){
				optionsManager.GetComponent<TitleScreenOptionsManager>().timer = 0.0f;
				optionEnabled = false;
				setColor();
			}
			if (loadDialogGroup.alpha == 0){
				loadDialogEnabled = false;
				saveManager.GetComponent<TitleSaveManagerInputs>().setColor();
				setColor();
			}

			//change button color when we choose an option
			if (loaderCanvas.alpha > 0){
				selectColor();
				loaderEnabled = true;	
			}
			if (optionCanvas.alpha > 0){
				selectColor();
				optionEnabled = true;
			}
			if (loadDialogGroup.alpha > 0){
				loadDialogEnabled = true;
			}

			if (loaderEnabled == false && optionEnabled == false && menuEnabled == true){
				timer = timer += 0.01f;
				//Decrement slot by -1 if you press up
				if (Input.GetKeyDown ($"{joystick1}{UP}")){
					//audioSource.PlayOneShot(clipList[2]);
					if (selectedSlot == 0){
						//set slot to 2 if you are at slot 1 to wrap selection
						selectedSlot = 2;
					}
					//decrement the slot for each up press
					else selectedSlot -=1;
					//set the color of the selected slot
					setColor();
					//animateButtons();
				}
				
				//Increment slot by +1 if you press down
				if (Input.GetKeyDown ($"{joystick1}{DOWN}")){
					//audioSource.PlayOneShot(clipList[3]);
					if (selectedSlot == 2){
						//set slot to 1 if you are at slot 2 to wrap selection
						selectedSlot = 0;
					}
					//increment the slot by 1 for each down press
					else selectedSlot +=1;
					//set the color of the selected slot
					setColor();
					//animateButtons();
				}
		
				if (Input.GetKeyDown ($"{joystick1}{CROSS}")){
					//audioSource.PlayOneShot(clipList[0]);
					if (selectedSlot == 0){
						//menuEnabled = false;
						selectColor();
						//animateButtons();
						PauseManager.isPaused = false;
						StartCoroutine(StartLoad());
					}
					if (selectedSlot == 1){
						//animateButtons();
						selectedCanvas = optionCanvas;
						timer = 0.0f;
						StartCoroutine(FadeScreen(1 , 0.0F));
					}
					if (selectedSlot == 2){
						//animateButtons();
						selectedCanvas = loaderCanvas;
						timer = 0.0f;
						StartCoroutine(FadeScreen(1 , 0.0F));
					}
				}
					
			}
		}
		//check if we are actually loading a level to avoid spamming the console with nullrefs 
		if (loading==true){
		//Store the load progress
		loadProgress = loadingOperation.progress;

		}
	}		


//this method checks which slot is currently selected and changes the colors of all the slots to give you a hilight 
//on the selected slot
	void setColor()
	{
		switch (selectedSlot)
		{
			case 1:
				slot0.color = baseColor;
				slot1.color = hilightColor;
				slot2.color = baseColor;
				break;
			case 2:
				slot0.color = baseColor;
				slot1.color = baseColor;
				slot2.color = hilightColor;
				break;
			case 0:
				slot0.color = hilightColor;
				slot1.color = baseColor;
				slot2.color = baseColor;
				break;
		}
	}

	void selectColor()
	{
		switch (selectedSlot)
		{
			case 1:
				slot0.color = baseColor;
				slot1.color = selectedColor;
				slot2.color = baseColor;
				break;
			case 2:
				slot0.color = baseColor;
				slot1.color = baseColor;
				slot2.color = selectedColor;
				break;
			case 0:
				slot0.color = selectedColor;
				slot1.color = baseColor;
				slot2.color = baseColor;
				break;
		}
	}
	void animateButtons(){
		switch (selectedSlot)
		{
			case 1:
				currentSelection = GameObject.Find("Options");
				//anim. =currentSelection.GetComponent<Animation>();
				//anim.PLay("Menu_Bounce_Legacy");
				break;
			case 2:
				currentSelection = GameObject.Find("Load_Game");
				//anim. =currentSelection.GetComponent<Animation>();
				//anim.PLay("Menu_Bounce_Legacy");
				break;
		}

		if (selectedSlot != 1 && selectedSlot !=2){
			currentSelection = GameObject.Find("New_Game");
			//anim. =currentSelection.GetComponent<Animation>();
			//anim.PLay("Menu_Bounce_Legacy");
		}	
	}

	IEnumerator StartLoad() {
		loading = true;
		//load the level, but don't activate it yet
		loadingOperation = SceneManager.LoadSceneAsync(SetScenes.sceneToLoad, LoadSceneMode.Single);
		loadingOperation.allowSceneActivation = false;
		
		while (loadProgress < 0.9f && !loadingOperation.isDone) {
            yield return null;
        }
		
		//after loadProgress hits 0.9, start fading routine
        yield return StartCoroutine(FadeLoadingScreen(1, fadeDuration));
		
    }

	IEnumerator FadeLoadingScreen(float targetValue, float duration) {
        float startValue = canvasGroup.alpha;
        float fadeTime = 0;
		//fade out the loadscreen canvas group
        while (fadeTime < duration)
        {
            canvasGroup.alpha = Mathf.Lerp(startValue, targetValue, fadeTime / duration);
            fadeTime += Time.deltaTime;
            yield return null;
        }
		canvasGroup.alpha = targetValue;
		//activate the scene
		loadingOperation.allowSceneActivation = true;
		//if loading is done, activate the level and unload the loader
		if(loadingOperation.isDone) {
			SceneManager.SetActiveScene(SceneManager.GetSceneByName(SetScenes.sceneToLoad));
			SceneManager.UnloadSceneAsync(SceneManager.GetSceneByName(SetScenes.sceneToUnload));
		}
		//load the next scene, which should be the first level
		SetScenes.sceneToLoad = SetScenes.nextScene;	
    }

	IEnumerator FadeScreen(float targetValue, float duration) {
        float startValue = selectedCanvas.alpha;
        float fadeTime = 0;
		//fade out the loadscreen canvas group
        while (fadeTime < duration)
        {
            selectedCanvas.alpha = Mathf.Lerp(startValue, targetValue, fadeTime / duration);
            fadeTime += Time.deltaTime;
            yield return null;
        }
		selectedCanvas.alpha = targetValue;
	}
}