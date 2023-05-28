using System.Collections;
using UnityEngine;
using UnityEngine.UI;
using TMPro;
public class FlashlightController : MonoBehaviour {
	//bools
	public static bool HasFlashlight = false;
	public static bool FlashlightOff = true;
	public static bool FlashlightDisabled = true;
	public static bool delayButton = false;
	public static  bool lightFocusing;
	public static bool lightMovement;
	public static bool isCharging;
	public static bool chargeCheck;

	//GO
	public Camera camObject;
	public GameObject lightRoot;
	public GameObject lightRig;
	public GameObject lightObject;
	public GameObject lightChargeObject;
	public GameObject lightShaft;
	public CanvasGroup UICanvasGroup;
	public GameObject playerObject;
	public GameObject currentTarget;
	
	//light
	public Light flashlight;
	public Light vertlight;
	//render
	public Renderer lightBeam;
	public Renderer lightHaze;
	//color
	public Color colorStart;
	public Color colorEnd;
	public Color colorTransparent;
	//float
	public float lightDuration = 300.0f;
	public float currentCharge = 1.0f;
	public Quaternion storedLightRotation;
	
	//UI
	public TextMeshProUGUI batteryText;

	public IEnumerator lightRoutine;
	public IEnumerator chargeRoutine;
	
	
	// Use this for initialization
	void Start () {
	HasFlashlight = false;
	FlashlightOff = false;
	FlashlightDisabled = true;
		//event subs for
		//L Trigger for firing
		VitaInputManager.Instance.OnLTrig += LTrigEvent;
		VitaInputManager.Instance.OnLTrigDown += LTrigDownEvent;
		VitaInputManager.Instance.OnLTrigUp += LTrigUpEvent;
		//square button for adding batteries
		VitaInputManager.Instance.OnSquare += SquareEvent;
		VitaInputManager.Instance.OnSquareDown += SquareDownEvent;
		VitaInputManager.Instance.OnSquareUp += SquareUpEvent;
		//triangle button for toggling on/off
		VitaInputManager.Instance.OnTriangle += TriangleEvent;
		VitaInputManager.Instance.OnTriangleDown += TriangleDownEvent;
		VitaInputManager.Instance.OnTriangleUp += TriangleUpEvent;
	}
	
	// Update is called once per frame
	void Update ()
	{
		
		
		currentTarget = PlayerController.currentTarget;
		if (currentCharge <= 0.05f){
			FlashlightDisabled = true;
			currentCharge = 0;
			print("Flashlight Disabled");
		}
		//lightFocusing = PlayerController.lightFocusing;
		if (lightFocusing && currentTarget != null && !FlashlightDisabled)
		{
			if (currentTarget.GetComponentInParent<EnemyController>().isPlayerNear == true)
			{
				PlayerController.lightMovement = false;
				//rotate flashlight
				var position = currentTarget.transform.position;
				Vector3 lightdir = position - lightRoot.transform.position;
				Quaternion lightlookRotation = Quaternion.LookRotation(lightdir);
				Vector3 lightrotation = Quaternion.Lerp(lightRoot.transform.rotation,
					lightlookRotation,
					Time.deltaTime * 21f).eulerAngles;
				lightRoot.transform.rotation = Quaternion.Euler(lightrotation);
			}
		}
		
	
		if (!HasFlashlight) //no flashlight
		{   
			lightObject.SetActive(false);
			lightRig.SetActive(false);
		}
		if (HasFlashlight && FlashlightOff && !FlashlightDisabled) //have flashlight but it's off
		{
			lightObject.SetActive(true); 
			lightRig.SetActive(false);
		}
		if (HasFlashlight && !FlashlightOff && !FlashlightDisabled) //have flashlight and it's on
		{
			lightObject.SetActive(true);
			lightRig.SetActive(true);
		}

		if (FlashlightDisabled && HasFlashlight)
		{
			lightObject.SetActive(true); 
			lightRig.SetActive(false);
		}
	}

	private void LTrigEvent()
	{
		if (HasFlashlight && currentCharge > 0.05f //light is on and has some charge left
		                  && !FlashlightDisabled && !FlashlightOff)
		{
			PlayerController.lightFocusing = true;
			
			Focus();
		
			if (camObject.fieldOfView < 28) camObject.fieldOfView = 28; //limit fov change 
			if (PlayerController.currentTarget != null) PlayerController.lightMovement = false;
			isCharging = false;
			storedLightRotation = lightRoot.transform.localRotation;
	
			if (!PlayerController.isStimulant) LerpFocalLength(0.087f, 0.095f, 
													0.5f, 0.5f, 0.5f);
            
			// if (UICanvasGroup.alpha < 1.0f){
			// 	StartCoroutine(FadeAlpha(UICanvasGroup.alpha, 1.0f, 0.5f, 0.0f));
			// }
		}
	}

	private void LTrigUpEvent()
	{
		if (HasFlashlight)
		{
			if (lightRoutine != null) StopCoroutine(lightRoutine);
			PlayerController.currentTarget = null;
	
			if (!FlashlightDisabled && currentCharge >= 0.05f){
				float currentIntensity = flashlight.intensity;
				float currentAngle = flashlight.spotAngle;
				float currentSize = lightShaft.transform.localScale.x;
				Color currentColor = lightBeam.material.color;
				lightRoutine = FadeLightStaticInput(currentColor, colorStart, 0.25f, currentIntensity, 5.0f,
					currentAngle, 40, currentSize, 0.08f);
				StartCoroutine(lightRoutine);
				print("Fade Light up");
			}
			if(!isCharging){
				chargeRoutine = RechargeFlashlight (currentCharge,  10f);
				StartCoroutine(chargeRoutine);
				print("Charging");
			}
			PlayerController.lightFocusing = false;
			PlayerController.lightMovement = true;
			//endLightRotation =  lightRoot.transform.localRotation;
			lightRoot.transform.localRotation = storedLightRotation;

		}	
	}

	private void LTrigDownEvent()
	{
		isCharging = false;
		if (lightRoutine != null) StopCoroutine(lightRoutine);
		if (chargeRoutine != null) StopCoroutine(chargeRoutine);
		if (HasFlashlight && FlashlightDisabled) //light is off b/c dead battery
		{
	
			StartCoroutine(FadeLightStaticInput(colorTransparent, colorStart, 0.25f, 0, 
				10, 40, 40, 0.08f, 0.08f)); //fade in quick
			StartCoroutine(FadeLightStaticInput(colorStart, colorTransparent,  0.25f, 
				10, 0, 40, 40, 0.08f, 0.08f)); //fade out quick
		}
		else if (HasFlashlight && !FlashlightDisabled && currentCharge >= 0.05f)
		{
			
			float currentIntensity = flashlight.intensity;
			float currentAngle = flashlight.spotAngle;
			float currentSize = lightShaft.transform.localScale.x;
			Color currentColor = lightBeam.material.color;
			float duration = lightDuration;
			lightRoutine = FadeLightDynamicInput(currentColor, colorEnd, duration, 
				currentIntensity, 25, 40, 25, 0.08f, 0.040f); // 'fire' light
			StartCoroutine(lightRoutine);
			print("Fade Light Down");
		}
		
	}
	
	private void SquareEvent()
	{
        
	}
	private void SquareDownEvent()
	{
		if (InventoryManager.batteryCount > 0 && currentCharge < 1.0f)
		{
			if (lightRoutine != null) StopCoroutine(lightRoutine);
			if (chargeRoutine != null) StopCoroutine(chargeRoutine);
			InventoryManager.batteryCount -= 1;
			currentCharge += 0.5f;
			lightChargeObject.GetComponent<Image>().fillAmount = currentCharge;
			//change text formatting based on number of characters
			batteryText.text = InventoryManager.batteryCount.ToString("D2");
			if (FlashlightDisabled) FlashlightDisabled = false;
			//add to charge and set progress bar based on charge amount
			currentCharge += 0.5f;
			if (currentCharge > 1.0f) currentCharge = 1.0f;
			if (flashlight.intensity < 10) flashlight.intensity = flashlight.intensity + 5.0f;
		}
		//are we out of power and adding battery?   
		if (FlashlightDisabled)
		{
			lightRoutine=
			FadeLightStaticInput(lightBeam.material.color, colorStart, 
					0.25f, flashlight.intensity, 5, 40, 40, 
					0.08f, 0.08f);
			FlashlightDisabled = false;
			StartCoroutine(lightRoutine);
			print("Fade Up on Battery from Dead");
		}
		//we are adding a battery when not being fired
		if (!delayButton && HasFlashlight && !Input.GetButton("LTRIG") && !FlashlightDisabled)
		{
			lightRoutine =
				FadeLightStaticInput(lightBeam.material.color, colorStart, 0.25f, flashlight.intensity, 5, 40, 40, 0.08f, 0.08f);
			StartCoroutine(lightRoutine);
			print("Fade Up on Battery");
			delayButton = true;
			StartCoroutine(ButtonDelayTimer(0.25f));
		}
		//we are adding a battery while the flashlight is being fired
		if (!delayButton && HasFlashlight && Input.GetButton("LTRIG") && !FlashlightDisabled)
		{
			lightRoutine=
			FadeLightDynamicInput(lightBeam.material.color, colorEnd, 
				lightDuration, flashlight.intensity, 15, 40, 25, 
				0.08f, 0.040f); // 'fire' light
			StartCoroutine(lightRoutine);
			print("Fade up on Battery while Alive");
		delayButton = true;
			StartCoroutine(ButtonDelayTimer(0.25f));
		}
	}
	private void SquareUpEvent()
	{
        
	}
	private void TriangleEvent()
	{
        
	}
	private void TriangleDownEvent()
	{
		if (!delayButton && HasFlashlight && currentCharge > 0.05f && !Input.GetButton("LTRIG"))
		{
			FlashlightOff = !FlashlightOff;
			delayButton = true;
			StartCoroutine(ButtonDelayTimer(0.25f));
		}
	}
	private void TriangleUpEvent()
	{
        
	}
	
	#region Methods
	private void Focus()
	{
		////Debug.Log("You're holding down the focus button!");
		camObject.fieldOfView = camObject.fieldOfView - Time.deltaTime * 32; //zoom in

		// animator.SetBool("isRunning", false);
		// animator.SetBool("isWalking", true); 

	}
	#endregion
	
	#region Coroutines
	public static IEnumerator ButtonDelayTimer(float delay){
		yield return new WaitForSeconds(delay);
		delayButton = false;
	}
	private IEnumerator LerpFocalLength (float StartValue, float endValue, float endBloom, float endThreshold, float duration){
		var time = 0.0f;
		while (time < duration){
			
			var currentValue = Mathf.Lerp (StartValue, endValue, time/(duration/4));
			camObject.GetComponent<Kino.Bokeh>().focalLength = currentValue;
			time += Time.deltaTime;
			yield return null;
		}
		camObject.GetComponent<Kino.Bokeh>().focalLength = endValue;
	}
	
	private IEnumerator FadeAlpha (float StartValue, float endValue, float duration, float waitTime){
		yield return new WaitForSeconds(waitTime);
		float time = 0;
		while (time <= duration){
			var swap = Mathf.Lerp(StartValue, endValue, time/duration);
			UICanvasGroup.alpha = swap;
			time += Time.deltaTime;
			yield return null;  
		}
		UICanvasGroup.alpha = endValue;
	}
	
	private IEnumerator FadeLightStaticInput (Color StartColor, Color endColor, float duration, 
		float StartIntensity, float endIntensity, float StartAngle, float endAngle, 
		float StartSize, float endSize){
		float time = 0;
		var coneScale = lightShaft.transform.localScale;
		while (time <= duration){
			lightBeam.material.color = Color.Lerp(StartColor, endColor, time/(duration/2)); //lerp the colors from dark to light
			lightHaze.material.color = Color.Lerp(StartColor, endColor, time/(duration/2)); //lerp the colors from dark to light
			flashlight.intensity = Mathf.Lerp(StartIntensity,endIntensity,time/(duration/2));
			flashlight.spotAngle = Mathf.Lerp(StartAngle,endAngle,time/(duration/2));
			vertlight.intensity = Mathf.Lerp(StartIntensity,endIntensity,time/(duration/2));
			vertlight.spotAngle = Mathf.Lerp(StartAngle,endAngle,time/(duration/2));
			var scalar = Mathf.Lerp(StartSize,endSize,time/(duration/2));
			lightShaft.transform.localScale = new Vector3(scalar, lightShaft.transform.localScale.y ,scalar);
			time += Time.deltaTime;
			yield return null;
		}
	}
	
	private IEnumerator FadeLightDynamicInput (Color StartColor, Color endColor, float duration, 
		float StartIntensity, float endIntensity, float StartAngle, float endAngle,
		float StartSize, float endSize){
		float time = 0;
		//var currentCharge = this.currentCharge; 
		while (time <= duration){
			lightBeam.material.color = Color.Lerp(StartColor, new Color 
													(endColor.r, endColor.g, endColor.b, endColor.a * currentCharge), time/(duration/50)); //lerp the colors from dark to light
			lightHaze.material.color = Color.Lerp(StartColor, new Color 
													(endColor.r, endColor.g, endColor.b, endColor.a * currentCharge), time/(duration/50)); //lerp the colors from dark to light
			flashlight.intensity = Mathf.Lerp(StartIntensity ,endIntensity * currentCharge,time/(duration/50));
			flashlight.spotAngle = Mathf.Lerp(StartAngle,endAngle,time/(duration/50));
			vertlight.intensity = Mathf.Lerp(StartIntensity,endIntensity * currentCharge,time/(duration/50));
			vertlight.spotAngle = Mathf.Lerp(StartAngle,endAngle,time/(duration/50));
			var scalar = Mathf.Lerp(StartSize,endSize,time/(duration/50));
			currentCharge = Mathf.Lerp(currentCharge, 0, time / (duration));
			lightShaft.transform.localScale = new Vector3(scalar, lightShaft.transform.localScale.y ,scalar);
			lightChargeObject.GetComponent<Image>().fillAmount = Mathf.Lerp(currentCharge, 0, time/(duration));
			time += Time.deltaTime;
			yield return null;
		}
	}
	
	private IEnumerator RechargeFlashlight(float charge, float duration){
		float time = 0.0f;
		isCharging = true;
		//yield return new WaitForSeconds(2f); //delay before charge happens
		while (time < duration)
		{
			currentCharge = Mathf.Lerp(charge, 1, time / duration);
			lightChargeObject.GetComponent<Image>().fillAmount = currentCharge;
			time += Time.deltaTime;
			yield return null;
		}
	
		lightChargeObject.GetComponent<Image>().fillAmount = 1;
		isCharging = false;
		FlashlightDisabled = false;
		
		
		
		var currentIntensity = flashlight.intensity;
		var currentAngle = flashlight.spotAngle;
		var currentSize = lightShaft.transform.localScale.x;
		var currentColor = lightBeam.material.color;
		StartCoroutine(FadeLightStaticInput(currentColor, colorStart, 0.25f, 
			currentIntensity, 5.0f, currentAngle, 40,
			currentSize, 0.08f));
		
	}

	#endregion
}
