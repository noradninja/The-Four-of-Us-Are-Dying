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
	public bool isCharging;
	//GO
	public GameObject lightRig;
	public GameObject lightObject;
	public GameObject lightChargeObject;
	public GameObject lightShaft;
	
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
	public static float lightDuration = 3000.0f;
	public float flashlightCharge;
	private float currentCharge;
	public static float lightCharge = 100f;
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
	void Update () {
		flashlightCharge = lightCharge/100;
		if (flashlightCharge <= 0.05f){
			FlashlightDisabled = true;
			flashlightCharge = 0;
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
		
	}

	private void LTrigUpEvent()
	{
		
	}

	private void LTrigDownEvent()
	{
		
	}
	
	private void SquareEvent()
	{
        
	}
	private void SquareDownEvent()
	{
		//we are adding a battery when not being fired
		if (!delayButton && HasFlashlight && InventoryManager.batteryCount > 0 && !Input.GetButton("LTRIG"))
		{
			
			var currentIntensity = flashlight.intensity;
			var currentColor = lightBeam.material.color;
			if (flashlightCharge < 1.0f)
			{
				InventoryManager.batteryCount -= 1;
				//add to charge and set progress bar based on charge amount
				flashlightCharge += 0.5f;
				if (flashlight.intensity < 10)
				{
					//to rain the light intensity to 10
					var intensity = flashlight.intensity;
					var currentEmpty = (10 - intensity);
					intensity += currentEmpty - 5.0f;
					flashlight.intensity = intensity;
				}

				lightChargeObject.GetComponent<Image>().fillAmount = flashlightCharge;
				//change text formatting based on number of characters
				batteryText.text = InventoryManager.batteryCount.ToString("D2");
				//are we out of power and adding battery?   
				if (FlashlightDisabled)
				{
					//StopAllCoroutines();
					currentCharge = flashlightCharge;

					StartCoroutine(
						FadeLightStaticInput(colorTransparent, colorStart, 0.25f, 0, 5, 40, 40, 0.08f, 0.08f));
					FlashlightDisabled = false;
				}

				if (isCharging)
				{
					currentCharge = flashlightCharge;
					StartCoroutine(RechargeFlashlight(currentCharge, 10f * flashlightCharge));
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
			currentCharge = flashlightCharge;
			
			StartCoroutine(FadeLightDynamicInput(lightBeam.material.color, colorEnd, 
				lightDuration, flashlight.intensity, 60, 40, 25, 
				0.08f, 0.040f)); // 'fire' light
			if (flashlightCharge < 1.0f)
			{
				InventoryManager.batteryCount -= 1;
				//add to charge and set progress bar based on charge amount
				flashlightCharge += 0.5f;
				if (flashlight.intensity < 10)
				{
					flashlight.intensity = flashlight.intensity + 5.0f;
				}

				lightChargeObject.GetComponent<Image>().fillAmount = flashlightCharge;
				//change text formatting based on number of characters
				batteryText.text = InventoryManager.batteryCount.ToString("D2");
				//are we out of power and adding battery?   
				if (FlashlightDisabled)
				{
					currentCharge = flashlightCharge;
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
		if (!delayButton && HasFlashlight && flashlightCharge > 0.05f && !Input.GetButton("LTRIG"))
		{
			FlashlightOff = !FlashlightOff;
			delayButton = true;
			StartCoroutine(ButtonDelayTimer(0.25f));
		}
	}
	private void TriangleUpEvent()
	{
        
	}

	#region Coroutines
	public static IEnumerator ButtonDelayTimer(float delay){
		yield return new WaitForSeconds(delay);
		delayButton = false;
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
		var coneScale = lightShaft.transform.localScale;
		while (time <= duration){
			lightBeam.material.color = Color.Lerp(StartColor, new Color (endColor.r, endColor.g, endColor.b, endColor.a * flashlightCharge), time/(duration/50)); //lerp the colors from dark to light
			lightHaze.material.color = Color.Lerp(StartColor, new Color (endColor.r, endColor.g, endColor.b, endColor.a * flashlightCharge), time/(duration/50)); //lerp the colors from dark to light
			flashlight.intensity = Mathf.Lerp(StartIntensity ,endIntensity * flashlightCharge,time/(duration/50));
			flashlight.spotAngle = Mathf.Lerp(StartAngle,endAngle,time/(duration/50));
			vertlight.intensity = Mathf.Lerp(StartIntensity,endIntensity * flashlightCharge,time/(duration/50));
			vertlight.spotAngle = Mathf.Lerp(StartAngle,endAngle,time/(duration/50));
			var scalar = Mathf.Lerp(StartSize,endSize,time/(duration/50));
			lightShaft.transform.localScale = new Vector3(scalar, lightShaft.transform.localScale.y ,scalar);
			var charge = flashlightCharge;
			lightChargeObject.GetComponent<Image>().fillAmount = Mathf.Lerp(charge, 0, time/(duration));
			time += Time.deltaTime;
			yield return null;
		}
	}
	private IEnumerator RechargeFlashlight(float currentCharge, float duration){
		float time = 0.0f;
		isCharging = true;
		//yield return new WaitForSeconds(2f); //delay before charge happens
		while (time < duration){
			// if (lightChargeObject.GetComponent<Image>().fillAmount > 0.97f){
			//     flashlightCharge = 1;
			// }
			lightCharge= Mathf.Lerp (currentCharge, 100f, time / duration );
			lightChargeObject.GetComponent<Image>().fillAmount = 
				Mathf.Lerp(currentCharge, 1, time / duration);
			time += Time.deltaTime;
			yield return null;
		}
		lightCharge= 100;
		lightChargeObject.GetComponent<Image>().fillAmount = 1;
		isCharging = false;
		FlashlightDisabled = false;
  
		var currentIntensity = flashlight.intensity;
		var currentAngle = flashlight.spotAngle;
		var currentSize = lightShaft.transform.localScale.x;
		var currentColor = lightBeam.material.color;
		StartCoroutine(FadeLightStaticInput(currentColor, colorStart, 0.25f, 
			currentIntensity, 5, currentAngle, 40,
			currentSize, 0.08f));
	}

	#endregion
}
