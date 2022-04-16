using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.UI;
using UnityEngine.SceneManagement;
using TMPro;

public class OptionsManagerInputs : MonoBehaviour {
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
	public int previousSlot = 3;
	public Color baseColor;
	public Color hilightColor;
	public TextMeshProUGUI slot1;
	public TextMeshProUGUI slot2;
	public TextMeshProUGUI slot3;
	
	public GameObject menuManager;
	
	//public GameObject audioManager;
	public Image BGMLevel;
	public Image SFXLevel;
	public Image sensitivityLevel;

	public float timer = 0.0f;
	private float delay = 0.1f;
	public float BGMToSave = 1.0f;
	public float SFXToSave = 1.0f;
	public float SensitivityToSave = 1.0f;
	public List<AudioClip> clipList;
	public AudioSource sfxSource;
	public AudioSource bgmSource;
	public AudioSource ambientSource;
	public AudioSource thunderStormSource;
	public AudioSource rainSource;
	public static float sensitivity = 1.0f;
	public GameObject currentSelection;
	public GameObject previousSelection;
	public Animator anim;
	public bool optionEnabled;
	private static readonly int MakeBounce = Animator.StringToHash("MakeBounce");
	private static readonly int SteadyState = Animator.StringToHash("SteadyState");

	// Use this for initialization
	void Start () {
		//set the color of the initially selected slot
		setColor();
		//set BGM/SFX/Sensitivity values from previous changes, if they've never been altered, set default values to 1
		if(PlayerPrefs.HasKey("SavedBGM")){
		BGMToSave = PlayerPrefs.GetFloat("SavedBGM");
		}
		else BGMToSave = 1;

		if(PlayerPrefs.HasKey("SavedSFX")){
		SFXToSave = PlayerPrefs.GetFloat("SavedSFX");
		}
		else SFXToSave = 1;

		if(PlayerPrefs.HasKey("SavedSensitivity")){
		SensitivityToSave = PlayerPrefs.GetFloat("SavedSensitivity");
		}
		else SensitivityToSave = 1;
		sfxSource.volume = SFXToSave;
		bgmSource.volume = BGMToSave;
		BGMLevel.fillAmount = BGMToSave;
		SFXLevel.fillAmount = SFXToSave;
		sensitivityLevel.fillAmount = SensitivityToSave;
		//clipList = audioManager.GetComponent<AudioManager>().SFXList;
	
	}

	
	// Update is called once per frame
	void Update () {
		if (SceneManager.GetActiveScene().name == "Title"){
			optionEnabled = menuManager.GetComponent<Title_Menu_Manager>().optionEnabled;
		}
		else if (SetScenes.currentScene != "Title"){
			optionEnabled = menuManager.GetComponent<Menu_Manager>().optionEnabled;
		}

		if ((optionEnabled == true)){
			timer = timer += 0.01f;
		if (timer > delay){
			//Decrement slot by -1 if you press up
			if (Input.GetKeyDown ($"{joystick1}{UP}"))
			{
				switch (selectedSlot)
				{
					//audioSource.PlayOneShot(clipList[2]);
					case 1:
						previousSlot = selectedSlot;
						//set slot to 3 if you are at slot 1 to wrap selection
						selectedSlot = 3;
						break;
					case 2:
						previousSlot = selectedSlot;
						//set slot to 3 if you are at slot 1 to wrap selection
						selectedSlot = 1;
						break;
					case 3:
						previousSlot = selectedSlot;
						//set slot to 3 if you are at slot 1 to wrap selection
						selectedSlot = 2;
						break;
				}

				//set the color of the selected slot
				setColor();
				//animateButtons();
			}
			
			//Increment slot by +1 if you press down
			if (Input.GetKeyDown ($"{joystick1}{DOWN}"))
			{
				switch (selectedSlot)
				{
					//audioSource.PlayOneShot(clipList[3]);
					case 3:
						//set slot to 1 if you are at slot 3 to wrap selection
						previousSlot = selectedSlot;
						selectedSlot = 1;
						break;
					case 2:
						//set slot to 1 if you are at slot 3 to wrap selection
						previousSlot = selectedSlot;
						selectedSlot = 3;
						break;
					case 1:
						//set slot to 1 if you are at slot 3 to wrap selection
						previousSlot = selectedSlot;
						selectedSlot = 2;
						break;
				}

				//set the color of the selected slot
				setColor();
				//animateButtons();
			}

			}
			if (Input.GetKeyDown ($"{joystick1}{LEFT}")){
				switch (selectedSlot)
				{
					//audioSource.PlayOneShot(clipList[3]);
					case 1:
						BGMLevel.fillAmount -= 0.1f;
						BGMToSave = BGMLevel.fillAmount;
						bgmSource.volume = BGMLevel.fillAmount;
						PlayerPrefs.SetInt("SavedOnce", 1);
						PlayerPrefs.SetFloat("SavedBGM", BGMToSave);
						break;
					case 2:
					{
						SFXLevel.fillAmount -= 0.1f;
						SFXToSave = SFXLevel.fillAmount;
						sfxSource.volume = SFXLevel.fillAmount;
						if (SceneManager.GetActiveScene().name != "Title"){
							ambientSource.volume = SFXLevel.fillAmount;
							thunderStormSource.volume = SFXLevel.fillAmount * 0.75f;
							rainSource.volume = SFXLevel.fillAmount * 0.65f;
						}
						PlayerPrefs.SetInt("SavedOnce", 1);
						PlayerPrefs.SetFloat("SavedSFX", SFXToSave);
						break;
					}
					case 3:
					{
						if (sensitivity > 0.05f){
							sensitivityLevel.fillAmount -= 0.05f;
						} 
						sensitivity = sensitivityLevel.fillAmount;
						SensitivityToSave = sensitivityLevel.fillAmount;
						PlayerPrefs.SetInt("SavedOnce", 1);
						PlayerPrefs.SetFloat("SavedSensitivity", SensitivityToSave);
						break;
					}
				}

				PlayerPrefs.Save();
			}
			if (Input.GetKeyDown ($"{joystick1}{RIGHT}")){
				switch (selectedSlot)
				{
					//audioSource.PlayOneShot(clipList[2]);
					case 1:
						BGMLevel.fillAmount += 0.1f;
						bgmSource.volume = BGMLevel.fillAmount;
						BGMToSave = BGMLevel.fillAmount;
						PlayerPrefs.SetInt("SavedOnce", 1);
						PlayerPrefs.SetFloat("SavedBGM", BGMToSave);
						break;
					case 2:
						SFXLevel.fillAmount += 0.1f;
						SFXToSave = SFXLevel.fillAmount;
						sfxSource.volume = SFXLevel.fillAmount;
						ambientSource.volume = SFXLevel.fillAmount;
						thunderStormSource.volume = SFXLevel.fillAmount * 0.75f;
						rainSource.volume = SFXLevel.fillAmount * 0.65f;
						PlayerPrefs.SetInt("SavedOnce", 1);
						PlayerPrefs.SetFloat("SavedSFX", SFXToSave);
						break;
					case 3:
						sensitivityLevel.fillAmount += 0.05f;
						sensitivity = sensitivityLevel.fillAmount;
						SensitivityToSave = sensitivityLevel.fillAmount*1.5f;
						PlayerPrefs.SetInt("SavedOnce", 1);
						PlayerPrefs.SetFloat("SavedSensitivity", SensitivityToSave);
						break;
				}

				PlayerPrefs.Save();
			}	
		}
	}		


//this method checks which slot is currently selected and changes the colors of all the slots to give you a hilight 
//on the selected slot
	void setColor()
	{
		switch (selectedSlot)
		{
			case 1:
				slot1.color = hilightColor;
				slot2.color = baseColor;
				slot3.color = baseColor;
				break;
			case 2:
				slot1.color = baseColor;
				slot2.color = hilightColor;
				slot3.color = baseColor;
				break;
			case 3:
				slot1.color = baseColor;
				slot2.color = baseColor;
				slot3.color = hilightColor;
				break;
		}
	}
	void animateButtons(){
		switch (selectedSlot)
		{
			case 1:
				currentSelection = GameObject.Find("Item_1");
				previousSelection = GameObject.Find("Item_" + previousSlot);
				anim = currentSelection.GetComponent<Animator>();
				anim.SetTrigger(MakeBounce);
				previousSelection.GetComponent<Animator>().SetTrigger(SteadyState);
				break;
			case 2:
				currentSelection = GameObject.Find("Item_2");
				previousSelection = GameObject.Find("Item_" + previousSlot);
				anim = currentSelection.GetComponent<Animator>();
				anim.SetTrigger(MakeBounce);
				previousSelection.GetComponent<Animator>().SetTrigger(SteadyState);
				break;
			case 3:
				currentSelection = GameObject.Find("Item_3");
				previousSelection = GameObject.Find("Item_" + previousSlot);
				anim = currentSelection.GetComponent<Animator>();
				anim.SetTrigger(MakeBounce);
				previousSelection.GetComponent<Animator>().SetTrigger(SteadyState);
				break;
		}
	}
}