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
	public bool isCharging;
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
	

	
	// Use this for initialization
	void Start () {
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
		
		chargeCheck = isCharging;
		currentTarget = PlayerController.currentTarget;
		
		if (lightFocusing && currentTarget != null)
		{
			if (currentTarget.GetComponentInParent<EnemyController>().isPlayerNear == true)
			{
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
		
		if (currentCharge <= 0.05f){
			FlashlightDisabled = true;
			currentCharge = 0;
		}
		if (!HasFlashlight) //no flashlight
		{   
			lightObject.SetActive(false);
			lightRig.SetActive(false);
		}
		if (HasFlashlight && FlashlightOff) //have flashlight but it's off
		{
			lightObject.SetActive(true); 
			lightRig.SetActive(false);
		}
		if (HasFlashlight && !FlashlightOff) //have flashlight and it's on
		{
			lightObject.SetActive(true);
			lightRig.SetActive(true);
		}
	}

	private void LTrigEvent()
	{
		isCharging = false;
		if (HasFlashlight && currentCharge > 0.05f //light is on and has some charge left
		                                       && !FlashlightDisabled && !FlashlightOff)
		{
			lightFocusing = true;
			Focus();
		
			if (camObject.fieldOfView < 28) camObject.fieldOfView = 28; //limit fov change 
			if (currentTarget != null) lightMovement = false;
			isCharging = false;
			storedLightRotation = lightRoot.transform.localRotation;
			// StartCoroutine(WalkLerp(0, 1,  lerpRate));
			// if (isStimulant && cooldownValue <= stimCooldown){
			// 	StartCoroutine(CountdownStimulant(cooldownValue, 0, cooldownValue));
			// }
			// if (!Input.GetButton("RTRIG")){
			// 	StartCoroutine(RechargeStamina(((100-stamina)), stamina));
			// }
			if (!PlayerController.isStimulant) StartCoroutine(LerpFocalLength(0.087f, 0.095f, 0.5f, 0.5f, 0.5f));
            
			if (UICanvasGroup.alpha < 1){
				StartCoroutine(FadeAlpha(UICanvasGroup.alpha, 1.0f, 0.5f, 0.0f));
			}
		}	
	}

	private void LTrigUpEvent()
	{
		if (HasFlashlight)
		{
			//currentCharge = flashlightCharge;
			currentTarget = null;
			StopAllCoroutines();
		
			// if (isStimulant && cooldownValue <= stimCooldown){
			// 	StartCoroutine(CountdownStimulant(cooldownValue, 0, cooldownValue));
			// }
		
			// if (!Input.GetButton("RTRIG")){
			// 	StartCoroutine(RechargeStamina(((100-stamina)), stamina));
			// }
			if (!FlashlightDisabled){
				float currentIntensity = flashlight.intensity;
				float currentAngle = flashlight.spotAngle;
				float currentSize = lightShaft.transform.localScale.x;
				Color currentColor = lightBeam.material.color;
				StartCoroutine(FadeLightStaticInput(currentColor, colorStart, 0.25f, currentIntensity, 10, 
					currentAngle, 40, currentSize, 0.08f));
			}
			if(!isCharging){
				StartCoroutine(RechargeFlashlight (currentCharge,  10f));
			}
			lightFocusing = false;
			lightMovement = true;
			//endLightRotation =  lightRoot.transform.localRotation;
			lightRoot.transform.localRotation = storedLightRotation;
			// StartCoroutine(WalkLerp(0, 1,  lerpRate));     
			// StartCoroutine(LerpCam(0.5f));  
			// if (!isStimulant) StartCoroutine(LerpFocalLength(0.095f,0.087f, 0.5f, 0.5f, 0.5f));
		}	
	}

	private void LTrigDownEvent()
	{
		isCharging = false;
		StopAllCoroutines();
		if (HasFlashlight && FlashlightDisabled) //light is off b/c dead battery
		{
	
			StartCoroutine(FadeLightStaticInput(colorTransparent, colorStart, 0.25f, 0, 
				5, 40, 40, 0.08f, 0.08f)); //fade in quick
			StartCoroutine(FadeLightStaticInput(colorStart, colorTransparent,  0.25f, 
				5, 0, 40, 40, 0.08f, 0.08f)); //fade out quick
		}
		else if (HasFlashlight && !FlashlightDisabled)
		{
			//StopAllCoroutines();
			float currentIntensity = flashlight.intensity;
			float currentAngle = flashlight.spotAngle;
			float currentSize = lightShaft.transform.localScale.x;
			Color currentColor = lightBeam.material.color;
			float duration = lightDuration;
			StartCoroutine(FadeLightDynamicInput(currentColor, colorEnd, duration, 
				currentIntensity, 10, 40, 25, 0.08f, 0.040f)); // 'fire' light
		}
		// StartCoroutine(WalkLerp(0, 1,  lerpRate)); 
		// if (isStimulant && cooldownValue <= stimCooldown){
		// 	StartCoroutine(CountdownStimulant(cooldownValue, 0, cooldownValue));
		// }
		// if (!Input.GetButton("RTRIG")){
		// 	StartCoroutine(RechargeStamina(((100-stamina)), stamina));
		// }	
	}
	
	private void SquareEvent()
	{
        
	}
	private void SquareDownEvent()
	{
		//we are adding a battery when not being fired
		if (!delayButton && HasFlashlight && InventoryManager.batteryCount > 0 && !Input.GetButton("LTRIG"))
		{
			
		
			if (currentCharge < 1.0f)
			{
				InventoryManager.batteryCount -= 1;
				//add to charge and set progress bar based on charge amount
				currentCharge += 0.5f;
				if (flashlight.intensity < 10)
				{
					//to rain the light intensity to 10
					var intensity = flashlight.intensity;
					var currentEmpty = (10 - intensity);
					intensity += currentEmpty - 5.0f;
					flashlight.intensity = intensity;
				}

				lightChargeObject.GetComponent<Image>().fillAmount = currentCharge;
				//change text formatting based on number of characters
				batteryText.text = InventoryManager.batteryCount.ToString("D2");
				//are we out of power and adding battery?   
				if (FlashlightDisabled)
				{
					//currentCharge = flashlightCharge;

					StartCoroutine(
						FadeLightStaticInput(colorTransparent, colorStart, 0.25f, 0, 5, 40, 40, 0.08f, 0.08f));
					FlashlightDisabled = false;
				}

				if (isCharging)
				{
					//currentCharge = flashlightCharge;
					StartCoroutine(RechargeFlashlight(currentCharge, 10f));
				}
			}

			delayButton = true;
			StartCoroutine(ButtonDelayTimer(0.25f));
		}

		//we are adding a battery while the flashlight is being fired
		if (!delayButton && HasFlashlight && InventoryManager.batteryCount > 0 &&
		    Input.GetButton("LTRIG") &&
		    !FlashlightOff)
		{
		//	currentCharge = flashlightCharge;
			
			StartCoroutine(FadeLightDynamicInput(lightBeam.material.color, colorEnd, 
				lightDuration, flashlight.intensity, 60, 40, 25, 
				0.08f, 0.040f)); // 'fire' light
			if (currentCharge < 1.0f)
			{
				InventoryManager.batteryCount -= 1;
				//add to charge and set progress bar based on charge amount
				currentCharge += 0.5f;
				if (flashlight.intensity < 10)
				{
					flashlight.intensity = flashlight.intensity + 5.0f;
				}

				lightChargeObject.GetComponent<Image>().fillAmount = currentCharge;
				//change text formatting based on number of characters
				batteryText.text = InventoryManager.batteryCount.ToString("D2");
				//are we out of power and adding battery?   
				if (FlashlightDisabled)
				{
					//currentCharge = flashlightCharge;
					StartCoroutine(
						FadeLightStaticInput(colorTransparent, colorStart, 
							0.25f, 0, 5, 40, 40, 
							0.08f, 0.08f));
				FlashlightDisabled = false;
				}
			}

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
			//float currentBloom = Camera.GetComponent<FastMobileBloom>().intensity;
			// float currentThreshold = Camera.GetComponent<FastMobileBloom>().threshold;
			var currentValue = Mathf.Lerp (StartValue, endValue, time/(duration/4));
			//float bloomIntensity = Mathf.Lerp (currentBloom, endBloom, time/(duration/2));
			//float bloomThreshold = Mathf.Lerp (currentThreshold, endThreshold, time/duration);
			camObject.GetComponent<Kino.Bokeh>().focalLength = currentValue;
			//Camera.GetComponent<FastMobileBloom>().intensity = bloomIntensity;
			// Camera.GetComponent<FastMobileBloom>().threshold = bloomThreshold;
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
		if (UICanvasGroup.alpha >= 1.0f){
			StartCoroutine(FadeAlpha(UICanvasGroup.alpha, 0.0f, 0.5f, 0.0f));
		}
		var currentIntensity = flashlight.intensity;
		var currentAngle = flashlight.spotAngle;
		var currentSize = lightShaft.transform.localScale.x;
		var currentColor = lightBeam.material.color;
		StartCoroutine(FadeLightStaticInput(currentColor, colorStart, 0.25f, 
			currentIntensity, 2.5f, currentAngle, 40,
			currentSize, 0.08f));
	}

	#endregion
}
