using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.UI;

public class TitleScreenOptionsManager : MonoBehaviour {
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
	public Text slot1;
	public Text slot2;
	public Text slot3;
	public GameObject ButtonManager;
	public GameObject menuManager;
	
	public GameObject audioManager;
	public Image BGMLevel;
	public Image SFXLevel;
	public Image sensitivityLevel;

	public float timer = 0.0f;
	private float delay = 0.1f;
	public float BGMToSave = 1.0f;
	public float SFXToSave = 1.0f;
	public float SensitivityToSave = 1.0f;
	public List<AudioClip> clipList;
	public AudioSource audioSource;
	public GameObject currentSelection;
	public Animation anim;

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
		
		BGMLevel.fillAmount = BGMToSave;
		SFXLevel.fillAmount = SFXToSave;
		sensitivityLevel.fillAmount = SensitivityToSave;
		//clipList = audioManager.GetComponent<AudioManager>().SFXList;
	}
	
	// Update is called once per frame
	void Update () {
	
		if ((menuManager.GetComponent<StartMenuManagerInputs>().optionEnabled == true)){
			timer = timer += 0.01f;
		if (timer > delay){
			//Decrement slot by -1 if you press up
			if (Input.GetKeyDown (joystick1 + UP)){
				//audioSource.PlayOneShot(clipList[2]);
				if (selectedSlot == 1){
					//set slot to 3 if you are at slot 1 to wrap selection
					selectedSlot = 3;
				}
				else selectedSlot -=1;
				//set the color of the selected slot
				setColor();
				//animateButtons();
			}
			
			//Increment slot by +1 if you press down
			if (Input.GetKeyDown (joystick1 + DOWN)){
				//audioSource.PlayOneShot(clipList[3]);
				if (selectedSlot == 3){
					//set slot to 2 if you are at slot 1 to wrap selection
					selectedSlot = 1;
				}
				else selectedSlot += 1;
			
				//set the color of the selected slot
				setColor();
				//animateButtons();
			}

			}
			if (Input.GetKeyDown (joystick1 + LEFT)){
				//audioSource.PlayOneShot(clipList[3]);
				if (selectedSlot == 1){
					BGMLevel.fillAmount -= 0.1f;
					BGMToSave = BGMLevel.fillAmount;
					PlayerPrefs.SetInt("SavedOnce", 1);
				}
				if (selectedSlot == 2){
					SFXLevel.fillAmount -= 0.1f;
					SFXToSave = SFXLevel.fillAmount;
					PlayerPrefs.SetInt("SavedOnce", 1);
				}
				if (selectedSlot == 3){
					sensitivityLevel.fillAmount -= 0.05f;
					SensitivityToSave = sensitivityLevel.fillAmount*1.5f;
					PlayerPrefs.SetInt("SavedOnce", 1);
				}
			}
			if (Input.GetKeyDown (joystick1 + RIGHT)){
				//audioSource.PlayOneShot(clipList[2]);
				if (selectedSlot == 1){
					BGMLevel.fillAmount += 0.1f;
					BGMToSave = BGMLevel.fillAmount;
					PlayerPrefs.SetInt("SavedOnce", 1);
					
				}
				if (selectedSlot == 2){
					SFXLevel.fillAmount += 0.1f;
					SFXToSave = SFXLevel.fillAmount;
					PlayerPrefs.SetInt("SavedOnce", 1);
				}
				if (selectedSlot == 3){
					sensitivityLevel.fillAmount += 0.05f;
					SensitivityToSave = sensitivityLevel.fillAmount*1.5f;
					PlayerPrefs.SetInt("SavedOnce", 1);
					
				}
			}
			PlayerPrefs.SetFloat("SavedBGM", BGMToSave);
			PlayerPrefs.SetFloat("SavedSFX", SFXToSave);
			PlayerPrefs.SetFloat("SavedSensitivity", SensitivityToSave);
		}
	}		


//this method checks which slot is currently selected and changes the colors of all the slots to give you a hilight 
//on the selected slot
	void setColor(){
		
		if (selectedSlot==1){
			slot1.color = hilightColor;
			slot2.color = baseColor;
			slot3.color = baseColor;
		}
		if (selectedSlot==2){
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
		void animateButtons(){
		if (selectedSlot == 3){
			currentSelection = GameObject.Find("Sensitivity_Text");
			//anim. =currentSelection.GetComponent<Animation>();
			//anim.PLay("Menu_Bounce_Legacy");
			if (anim.IsPlaying("Menu_Bounce_Legacy")){
				print("Playing Sensitivity");
			}
		}
		if (selectedSlot == 2){
			currentSelection = GameObject.Find("SFX_Text");
			//anim. =currentSelection.GetComponent<Animation>();
			//anim.PLay("Menu_Bounce_Legacy");
			if (anim.IsPlaying("Menu_Bounce_Legacy")){
				print("Playing SFX");
			}
		}
		if (selectedSlot == 1){
			currentSelection = GameObject.Find("BGM_Text");
			//anim. =currentSelection.GetComponent<Animation>();
			//anim.PLay("Menu_Bounce_Legacy");
			if (anim.IsPlaying("Menu_Bounce_Legacy")){
				print("Playing BGM");
			}
		}
	}
}