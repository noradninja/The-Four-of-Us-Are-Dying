using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.UI;
using UnityEngine.SceneManagement;
using TMPro;


public class SaveManager_Inputs : MonoBehaviour {

	private  string joystick1 = "joystick 1 button ";
	private  int CROSS = 0;
	private  int CIRCLE = 1;
	private  int SQUARE = 2;
	private  int TRIANGLE = 3;
	private  int SELECT = 6;
	private  int START = 7;
	private  int UP = 8;
	private  int RIGHT = 9;
	private  int DOWN = 10;
	private  int LEFT = 11;

	public int selectedSlot = 1;
	public int previousSlot = 3;
	public Color baseColor;
	public Color hilightColor;
	public Color loadedColor;
	public Color savedColor;
	public RawImage slot1;
	public RawImage slot2;
	public RawImage slot3;
	AsyncOperation loadingOperation;
	public GameObject sceneManager;
	public GameObject menuManager;
	public CanvasGroup menuGroup;
	public CanvasGroup saveGroup;
	public CanvasGroup loadDialogGroup;
	public GameObject audioManager;
	public float fadeDuration;
	public float targetValue;
	public float loadProgress;	
	public bool loading = false;
	public float timer = 0.0f;
	private float delay = 0.1f;
	public List<AudioClip> clipList;
	public AudioSource audioSource;
	public TextMeshProUGUI slot1Text;
	public TextMeshProUGUI slot2Text;
	public TextMeshProUGUI slot3Text;
	public string slot1String = "No Data";
	public string slot2String = "No Data";
	public string slot3String = "No Data";
	public string dateTime = "";
	public GameObject currentSelection; 
	public GameObject previousSelection;
	private Animator anim;


	// Use this for initialization
	void Start () {
		if (Application.isEditor){
        //because the DS3 registers the buttons differently in Windows
            TRIANGLE = 0;
            CIRCLE = 1;
            CROSS = 2;
            SQUARE = 3;
            START = 8;
            SELECT = 9;
            //these are mapped to L3/R3 because the fucking dpad is a set of axes in Windows ఠ ͟ಠ
            UP = 10;
            DOWN = 11;
        }
		//set the color of the initially selected slot
		setColor();
		//EventManager.GetComponent<SaveSerial>();
		//clipList = audioManager.GetComponent<AudioManager>().SFXList;
		//if we have saved before we stored a short date/time, get those to label slots in loader
			if (PlayerPrefs.HasKey("Slot1")){
			slot1Text.text = PlayerPrefs.GetString("Slot1");
			}
			else slot1Text.text = slot1String;

			if (PlayerPrefs.HasKey("Slot2")){
			slot2Text.text = PlayerPrefs.GetString("Slot2");
			}
			else slot2Text.text = slot2String;

			if (PlayerPrefs.HasKey("Slot3")){
			slot3Text.text = PlayerPrefs.GetString("Slot3");
			}
			else slot3Text.text = slot3String;
	}
	
	// Update is called once per frame
	void Update () {
		dateTime = (System.DateTime.Now.ToShortDateString() + " " + System.DateTime.Now.ToShortTimeString());
		if (menuManager.GetComponent<Menu_Manager>().dialogEnabled == false ){
			menuManager.GetComponent<Menu_Manager>().delayTimer = false;
		}
	if ((menuManager.GetComponent<Menu_Manager>().saverEnabled == true)){
		timer = timer += 0.01f;
		if (timer > delay){
			if (selectedSlot == 1){
			currentSelection = GameObject.Find("Slot_1");
		}
		if (selectedSlot == 2){
			currentSelection = GameObject.Find("Slot_2");
		}
		if (selectedSlot != 1 && selectedSlot !=2){
			currentSelection = GameObject.Find("Slot_3");
		}	
			//Decrement slot by -1 if you press up
			if (Input.GetKeyDown (joystick1 + UP)){
				//audioSource.PlayOneShot(clipList[2]);
				if (selectedSlot == 1){
					previousSlot = selectedSlot;
					//set slot to 3 if you are at slot 1 to wrap selection
					selectedSlot = 3;
					menuManager.GetComponent<Menu_Manager>().selectedSLSlot = 3;

				}
				else if (selectedSlot == 2){
					previousSlot = selectedSlot;
					//set slot to 3 if you are at slot 1 to wrap selection
					selectedSlot = 1;
					menuManager.GetComponent<Menu_Manager>().selectedSLSlot = 2;
				}
				else if (selectedSlot == 3){
					previousSlot = selectedSlot;
					//set slot to 3 if you are at slot 1 to wrap selection
					selectedSlot = 2;
					menuManager.GetComponent<Menu_Manager>().selectedSLSlot = 1;
				}
				
				//set the color of the selected slot
				setColor();
				animateButtons();
			}
			
			//Increment slot by +1 if you press down
			if (Input.GetKeyDown (joystick1 + DOWN)){
				//audioSource.PlayOneShot(clipList[3]);
				if (selectedSlot == 3){
					//set slot to 1 if you are at slot 3 to wrap selection
					previousSlot = selectedSlot;
					selectedSlot = 1;
					menuManager.GetComponent<Menu_Manager>().selectedSLSlot = 1;
				}
				else if (selectedSlot == 2){
					//set slot to 1 if you are at slot 3 to wrap selection
					previousSlot = selectedSlot;
					selectedSlot = 3;
					menuManager.GetComponent<Menu_Manager>().selectedSLSlot = 3;
				}
				else if (selectedSlot == 1){
					//set slot to 1 if you are at slot 3 to wrap selection
					previousSlot = selectedSlot;
					selectedSlot = 2;
					menuManager.GetComponent<Menu_Manager>().selectedSLSlot = 2;
				}
				
				//set the color of the selected slot
				setColor();
				animateButtons();
			}
			//here we are checking to see if the loader dialog is up, and if the selected slot has data- if the text for the slot is "No Data" we won't pull up the confirm dialog
			if (Input.GetKeyDown (joystick1 + CROSS) && menuManager.GetComponent<Menu_Manager>().dialogEnabled == false){
				setLoadedColor();
				loadDialogGroup.alpha = 1;
				//anmi =GameObject.Find ("Confirmation_Load_Dialog").GetComponent<Animator>();
				//anim.SetTrigger("MakeBounce");
				menuManager.GetComponent<Menu_Manager>().dialogEnabled = true;
				StartCoroutine(DialogHandler());
				//audioSource.PlayOneShot(clipList[0]);
			}
			if (Input.GetKeyDown (joystick1 + CROSS) && menuManager.GetComponent<Menu_Manager>().delayTimer == true){
		
			if (menuManager.GetComponent<Menu_Manager>().dialogEnabled == true){
				//Attempt to load file
				sceneManager.BroadcastMessage("Save");
				setColor();
				loadDialogGroup.alpha = 0;
				
				//audioSource.PlayOneShot(clipList[0]);
				if (selectedSlot==1){
						slot1Text.text = "Save A";
					}
					if (selectedSlot==2){
						slot2Text.text = "Save B";
					}
					if (selectedSlot==3){
						slot3Text.text = "Save C";
					}
					PlayerPrefs.SetString("Slot1", slot1Text.text);
					PlayerPrefs.SetString("Slot2", slot2Text.text);
					PlayerPrefs.SetString("Slot3", slot3Text.text);
					PlayerPrefs.Save();
					//anim.SetTrigger("SteadyState");
				}
			}
			if (Input.GetKeyDown (joystick1 + CIRCLE) &&  menuManager.GetComponent<Menu_Manager>().dialogEnabled == true){
				setColor();
				loadDialogGroup.alpha = 0;
				StartCoroutine(DialogHandler());
				// menuManager.GetComponent<Menu_Manager>().dialogEnabled = false;
				// menuManager.GetComponent<Menu_Manager>().delayTimer = false;
			}
			//check if we are actually loading a level to avoid spamming the console with nullrefs 
			if (loading==true){
				//Store the load progress
			loadProgress = loadingOperation.progress;
			}
		}	
	}
}

//this method checks which slot is currently selected and changes the colors of all the slots to give you a hilight 
//on the selected slot
	public void setColor(){
		
		if (selectedSlot==1){
			slot1.color = hilightColor;
			slot2.color = baseColor;
			slot3.color = baseColor;
		}
		else if (selectedSlot==2){
			slot1.color = baseColor;
			slot2.color = hilightColor;
			slot3.color = baseColor;
		}
		else if (selectedSlot==3){
			slot1.color = baseColor;
			slot2.color = baseColor;
			slot3.color = hilightColor;
		}
	}
	void setLoadedColor(){
		
		if (selectedSlot==1){
			slot1.color = savedColor;
			slot2.color = baseColor;
			slot3.color = baseColor;
		}
		else if (selectedSlot==2){
			slot1.color = baseColor;
			slot2.color = savedColor;
			slot3.color = baseColor;
		}
		else if (selectedSlot==3){
			slot1.color = baseColor;
			slot2.color = baseColor;
			slot3.color = savedColor;
		}	
	}
	void setSavedColor(){
		
		if (selectedSlot==1){
			slot1.color = savedColor;
			slot2.color = baseColor;
			slot3.color = baseColor;
		}
		else if (selectedSlot==2){
			slot1.color = baseColor;
			slot2.color = savedColor;
			slot3.color = baseColor;
		}
		else if (selectedSlot==3){
			slot1.color = baseColor;
			slot2.color = baseColor;
			slot3.color = savedColor;
		}
	}
	void animateButtons(){
		if (selectedSlot == 1){
			currentSelection = GameObject.Find("Slot_1");
			previousSelection = GameObject.Find("Slot_" + previousSlot);
			//anmi =currentSelection.GetComponent<Animator>();
			//anim.SetTrigger("MakeBounce");
			//previousSelection.GetComponent<Animator>().SetTrigger("SteadyState");
		}
		if (selectedSlot == 2){
			currentSelection = GameObject.Find("Slot_2");
			previousSelection = GameObject.Find("Slot_" + previousSlot);
			//anmi =currentSelection.GetComponent<Animator>();
			//anim.SetTrigger("MakeBounce");
			//previousSelection.GetComponent<Animator>().SetTrigger("SteadyState");
		}
		if (selectedSlot == 3){
			currentSelection = GameObject.Find("Slot_3");
			previousSelection = GameObject.Find("Slot_" + previousSlot);
			//anmi =currentSelection.GetComponent<Animator>();
			//anim.SetTrigger("MakeBounce");
			//previousSelection.GetComponent<Animator>().SetTrigger("SteadyState");
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
		saveGroup.alpha = 0;
		Time.timeScale = 1;
        float startValue = menuGroup.alpha;
        float time = 0;

		//fade out the loadscreen canvas group
        while (time < duration)
        {
            menuGroup.alpha = Mathf.Lerp(startValue, targetValue, time / duration);
            time += Time.deltaTime;
            yield return null;
        }
		menuGroup.alpha = targetValue;
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
	IEnumerator DialogHandler(){
		float duration = 0.1f;
		float time = 0.0f;
		while (time < duration){
			time += 0.01f;
			//print (time);
            yield return null;
		}
		menuManager.GetComponent<Menu_Manager>().delayTimer = true;
	}
}