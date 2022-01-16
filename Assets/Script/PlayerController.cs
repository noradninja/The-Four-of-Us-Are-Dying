using System;
using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.UI;
using TMPro;

public class PlayerController : MonoBehaviour
{
    
    
    
    public abstract class Command
    {
        public abstract void Execute();
    }
   
    public CharacterController characterController;
    public static bool hasFlashlight = false;
    public static bool flashlightOff = true;
    public float speed = 3;
    private float walkSpeed;
    public Animator animator;
    
    // camera and rotation
    public Transform cameraRig;
    public Transform Camera;
    public Camera camObject;
    public Light flashlight;
    public Light vertlight;
    public GameObject lightRig;
    public GameObject lightObject;
    public GameObject lightShaft;
    public Transform handRig;
    public Transform bodyRig;
    public Renderer lightBeam;
    public Renderer lightHaze;
    public GameObject lightChargeObject;
    public float lightCharge = 100f;
    public Color colorStart;
    public Color colorEnd;
    public Color colorTransparent;
    public float duration = 1.0f;
    public float lookSensitivity = 5f;
    public float upLimit = -50;
    public float downLimit = 50;
    public int batteryCount = 5;
    public TextMeshProUGUI batteryText;
    public float flashlightCharge = 1.0f;
    public bool flashlightDisabled;
    public GameObject SSAOScript;
    public GameObject BokehScript;
    public GameObject enabledText;
    public float lerpRate = 1.0f;
 
    
    // gravity
    private float gravity = 9.87f;
    private float verticalSpeed = 0;
    private const string VITA = "joystick button ";
	private const int LTRIG = 4;
    private const int RTRIG = 5;
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
   private float verticalMove;
    private float horizontalRotation;
    private float horizontalCamRotation;
    private float verticalCamRotation;
    private Quaternion savedRotation;
    private Vector3 savedPosition;
    private bool fire;
    public SkinnedMeshRenderer skinnedRenderer;
    private float walkStart;
   public bool isLerping;
   private bool isPaused;
     private bool isMap;
   public RawImage pausePanel;
   public RawImage mapPanel;
   public Camera mapCam;

    
      private void Awake()
    {
        animator.SetBool("isGrab", false);
        cameraRig = Camera.transform.parent.transform; //get the transform of the righ the camera is a child to
        walkSpeed = speed;
        flashlightCharge = lightChargeObject.GetComponent<Image>().fillAmount;
    }
    
    void Update()
    {   
        
        Flashlight();
        Move();
        Rotate();
        Keys();
    
        if (verticalMove != 0 || horizontalRotation !=0){
        walkStart = skinnedRenderer.material.GetFloat("_CrossFade");
            if (walkStart == 0f){   
                StartCoroutine(walkLerp(0, 1,  lerpRate));
            }    
        
        }
        
    }
    private void Flashlight()
    {
        flashlightCharge = lightChargeObject.GetComponent<Image>().fillAmount;
        if (flashlightCharge <= 0.05f){
            flashlightDisabled = true;
            flashlightCharge = 0;
        }
        if (!hasFlashlight) //no flashlight
        {   
            lightObject.SetActive(false);
            lightRig.SetActive(false);
        }
        if (hasFlashlight && flashlightOff) //have flashlight but it's off
        {
            lightObject.SetActive(true); 
            lightRig.SetActive(false);
        }
        if (hasFlashlight && !flashlightOff) //have flashlight and it's on
        {
            lightObject.SetActive(true);
            lightRig.SetActive(true);
        }
    }
    private void Keys()
    {

///////////////////////////Start/Select//////////////////////////////////////
        if (Input.GetKeyDown(VITA + START)){
            if(!isPaused){
                StartCoroutine(fade(pausePanel, 0, 1, 0.5f));
            }
            else {
                StartCoroutine(fade(pausePanel, 1, 0, 0.5f));
            }
        }
        if (Input.GetKeyDown(VITA + SELECT))
        {   
            //enable/disable SSAO and UI text
            if (SSAOScript.GetComponent<FastSSAO>().enabled){
                SSAOScript.GetComponent<FastSSAO>().enabled = false;
                BokehScript.GetComponent<Kino.Bokeh>().enabled = false;
                enabledText.GetComponent<Text>().color = Color.red;
                enabledText.GetComponent<Text>().text = ("Disabled");

            }
            else {
                SSAOScript.GetComponent<FastSSAO>().enabled = true;
                BokehScript.GetComponent<Kino.Bokeh>().enabled = true;
                enabledText.GetComponent<Text>().color = Color.green;
                enabledText.GetComponent<Text>().text = ("Enabled");
            }
        }

///////////////////////////DPad//////////////////////////////////////
        if (Input.GetKeyDown(VITA + UP)){
            InventoryManager.medCount -= 1;
            if (InventoryManager.playerHealth < 100)
            healMe();
        }

        if (Input.GetKeyDown(VITA + DOWN)){
            InventoryManager.stimCount -= 1;
            //do stimulant stuff here
        }

        if (Input.GetKeyDown(VITA + LEFT)){

        }

        if (Input.GetKeyDown(VITA + RIGHT)){

        }

///////////////////////////Face Buttons//////////////////////////////////////

//turn the flashlight on and off if we have it
        if (Input.GetKeyDown(VITA + TRIANGLE) && hasFlashlight && flashlightCharge > 0.05f && !Input.GetKey(VITA + LTRIG))
        {   
            if (flashlightOff){
                flashlightOff = false;
            }
            else flashlightOff = true;
        }


//if we add batteries
        if (Input.GetKeyDown(VITA + SQUARE) && hasFlashlight && batteryCount > 0 && !Input.GetKey(VITA + LTRIG))
        {   
            float currentIntensity = flashlight.intensity;
            Color currentColor = lightBeam.material.color;
        if (flashlightCharge < 1.0f){
            batteryCount -= 1;
        //add to charge and set progress bar based on charge amount
            flashlightCharge += 0.5f;
                if(flashlight.intensity < 10){ //to constrain the light intensity to 10
                    float currentEmpty = (10 - flashlight.intensity);
                    flashlight.intensity += currentEmpty - 5.0f;
                }
                lightChargeObject.GetComponent<Image>().fillAmount = flashlightCharge;
            //change text formatting based on number of characters
                if (batteryCount < 10){
                    batteryText.text = (" " + batteryCount);
                }
                else batteryText.text = ("" + batteryCount);
            //are we out of power and adding battery?   
                if (flashlightDisabled){
                    StopAllCoroutines();
                    StartCoroutine(FadeLightStaticInput(colorTransparent,  colorStart, 0.25f, 0, 5, 40, 40, 0.08f, 0.08f));
                    flashlightDisabled = false;
                }
            }
        }
//if we add battery while 'firing' flashlight
        if (Input.GetKeyDown(VITA + SQUARE) && hasFlashlight && batteryCount > 0 && Input.GetKey(VITA + LTRIG) && !flashlightOff)
        {   
            StopAllCoroutines();
            StartCoroutine(FadeLightDynamicInput(lightBeam.material.color, colorEnd, duration, flashlight.intensity, 60, 40, 25, 0.08f, 0.040f)); // 'fire' light
            if (flashlightCharge < 1.0f){
            batteryCount -= 1;
            //add to charge and set progress bar based on charge amount
            flashlightCharge += 0.5f;
                if(flashlight.intensity < 10){
                flashlight.intensity = flashlight.intensity + 5.0f;
                }
                lightChargeObject.GetComponent<Image>().fillAmount = flashlightCharge;
            //change text formatting based on number of characters
                if (batteryCount < 10){
                    batteryText.text = (" " + batteryCount);
                }
                else batteryText.text = ("" + batteryCount);
            //are we out of power and adding battery?   
                if (flashlightDisabled){
                    StopAllCoroutines();
                    StartCoroutine(FadeLightStaticInput(colorTransparent,  colorStart, 0.25f, 0, 5, 40, 40, 0.08f, 0.08f));
                    flashlightDisabled = false;
                }
            }
        }


        if (Input.GetKeyDown(VITA + CIRCLE))
        {
            if(!isMap){
                StartCoroutine(fade(mapPanel, 0, 1, 0.5f));
            }
            else {
                StartCoroutine(fade(mapPanel, 1, 0, 0.5f));
            }
        }


//if battery is dead, flicker the light breifly to indicate you should reload flashlight
        if (Input.GetKeyDown(VITA + LTRIG) && hasFlashlight && flashlightCharge < 0.05f)
        {   
                flashlightCharge = 0;
                StartCoroutine(FadeLightStaticInput(colorTransparent, colorStart, 0.25f, 0, 5, 40, 40, 0.08f, 0.08f)); //fade in quick
                StopAllCoroutines();
                StartCoroutine(FadeLightStaticInput(colorStart, colorTransparent,  0.25f, 5, 0, 40, 40, 0.08f, 0.08f)); //fade out quick
                flashlightDisabled = true;
                StartCoroutine(walkLerp(0, 1,  lerpRate));
        }
//if battery is not dead, and we hit the L trigger
        if (Input.GetKeyDown(VITA + LTRIG) && hasFlashlight && flashlightCharge > 0.05f && !flashlightDisabled && !flashlightOff)
        {   
            float currentIntensity = flashlight.intensity;
            Color currentColor = lightBeam.material.color;
            StopAllCoroutines();
            StartCoroutine(FadeLightDynamicInput(currentColor, colorEnd, duration, flashlight.intensity, 60, 40, 25, 0.08f, 0.040f)); // 'fire' light
            StartCoroutine(walkLerp(0, 1,  lerpRate));
        }
//change FOV while we hold the L trigger
        if (Input.GetKey(VITA + LTRIG) && hasFlashlight && flashlightCharge > 0.05f && !flashlightDisabled && !flashlightOff)
        {
            Focus();
            if (camObject.fieldOfView < 30) camObject.fieldOfView = 30; //limit fov change 
        }
//reset the flashlight and camera when we release the L trigger
        if (Input.GetKeyUp(VITA + LTRIG) && hasFlashlight && flashlightCharge > 0.05f)
        {   
            StopAllCoroutines();
            float currentIntensity = flashlight.intensity;
            float currentAngle = flashlight.spotAngle;
            float currentSize = lightShaft.transform.localScale.x;
            Color currentColor = lightBeam.material.color;
            StartCoroutine(FadeLightStaticInput(currentColor, colorStart, 0.25f, currentIntensity, 5, currentAngle, 40, currentSize, 0.08f));
            StartCoroutine(walkLerp(0, 1,  lerpRate));
        }
    
        
     
        if (Input.GetKey(VITA + RTRIG))
        {
           Run(); //RUN, FORREST, RUN
           if (camObject.fieldOfView > 50) camObject.fieldOfView = 50; //limit fov change
        }
        if (Input.GetKeyDown(VITA + RTRIG))
        {
            savedPosition = lightRig.transform.localPosition;
            savedRotation = lightRig.transform.localRotation;
            lightRig.transform.parent = handRig; 
            
        }
        if (Input.GetKeyUp(VITA + RTRIG))
        {   
            animator.SetBool("isRunning", false);
            lightRig.transform.parent = bodyRig;
            lightRig.transform.localRotation = savedRotation;
            lightRig.transform.localPosition = savedPosition;
        }
        else if (!Input.GetKey(VITA + RTRIG) && (!Input.GetKey(VITA + LTRIG)))
        {
            if (camObject.fieldOfView > 40 && camObject.fieldOfView != 40){
                camObject.fieldOfView = camObject.fieldOfView - Time.deltaTime * 32;
                speed = walkSpeed;
            }
            if (camObject.fieldOfView < 40 && camObject.fieldOfView != 40){
                camObject.fieldOfView = camObject.fieldOfView + Time.deltaTime * 32;
            }
        }
   
    }

    ///////////////////////////Joysticks//////////////////////////////////////
    private void Rotate()
    {
        horizontalRotation = Input.GetAxis("Left Stick Horizontal"); //turn

    if (Application.isEditor){ //this is here because the DS3 uses different input axes for the right stick
        horizontalCamRotation = Input.GetAxis("DS3Right Stick Horizontal"); //flashlight l/r
        verticalCamRotation = Input.GetAxis("DS3Right Stick Vertical"); //flashlight/look u/d
       
    }
    else {
        horizontalCamRotation = Input.GetAxis("Right Stick Horizontal"); //flashlight l/r
        verticalCamRotation = Input.GetAxis("Right Stick Vertical"); //flashlight/look u/d
    }
        transform.Rotate(0, horizontalRotation * lookSensitivity, 0);
        Camera.Rotate(verticalCamRotation*lookSensitivity/2,horizontalCamRotation*lookSensitivity/2,0);
        lightRig.transform.Rotate(0,-horizontalCamRotation*(lookSensitivity*2),verticalCamRotation*lookSensitivity);

        Vector3 currentRotation = Camera.localEulerAngles;
        Vector3 currentLightRotation = lightRig.transform.localEulerAngles;

        if (currentRotation.x > 180) currentRotation.x -= 360;
        if (currentRotation.y > 180) currentRotation.y -= 360;
        currentRotation.x = Mathf.Clamp(currentRotation.x, upLimit, downLimit); //constrain camera up/down
        currentRotation.y = Mathf.Clamp(currentRotation.y, 83, 97); //constrain camera left/right
        currentRotation.z = 0;

        if (currentLightRotation.y > 180) currentLightRotation.y -= 360;
        currentLightRotation.x = 0;
        currentLightRotation.y = Mathf.Clamp(currentLightRotation.y, 40, 120); //constrain light left/right
        currentLightRotation.z = Mathf.Clamp(currentLightRotation.z, 142, 200); //constrain light up/down

    //apply the rotations
        Camera.localRotation = Quaternion.Euler(currentRotation);
        lightRig.transform.localRotation = Quaternion.Euler(currentLightRotation);
     
        if (animator.GetBool("isRunning") == false && animator.GetBool("isWalking") == false) {
            if (horizontalRotation == 0 ||verticalMove == 0){
                animator.SetBool("isIdle", true);
            }
            // if (horizontalRotation != 0 || verticalMove != 0){
            //     animator.SetBool("isWalking", true);
            //     animator.SetBool("isIdle", false);
            // };
        } 
    }

    private void Move()
    {
        verticalMove = Input.GetAxis("Left Stick Vertical"); //player walk fwd/bkwd
       
        if (((verticalMove != 0 && (horizontalCamRotation == 0 && verticalCamRotation == 0))) 
        && ((Camera.localEulerAngles.y >= 90.05f || Camera.localEulerAngles.y <= 89.95f) 
        || (Camera.localEulerAngles.x <= 9.95f || Camera.localEulerAngles.x >= 10.05f)))
        {
            StartCoroutine(lerpCam(0.25f));

        }
        if (verticalMove != 0 || horizontalRotation !=0){
            walkStart = skinnedRenderer.material.GetFloat("_CrossFade");
            if (walkStart == 0f){   
                StartCoroutine(walkLerp(0, 1,  lerpRate));
            }    
        }
    //apply gravity to player
        if (characterController.isGrounded) verticalSpeed = 0;
        else verticalSpeed -= gravity * Time.deltaTime;

    //apply forward/backward/gravity movement  
        Vector3 gravityMove = new Vector3(0, verticalSpeed, 0);  
        Vector3 move = transform.forward * -verticalMove + transform.right * 0;
        characterController.Move(speed * Time.deltaTime * move + gravityMove * Time.deltaTime);
        if (animator.GetBool("isRunning") == false ) {
            animator.SetBool("isWalking", verticalMove != 0 || horizontalRotation !=0);
            animator.SetBool("isIdle", false);
                
        } 
        if (!animator.GetBool("isWalking") && !animator.GetBool("isRunning")){
            animator.SetBool("isIdle", verticalMove == 0);
        }
         
    }


    ///////////////////////////Methods//////////////////////////////////////
    private void Run()
    {
        
        Debug.Log("You're holding down run!");
        speed = 5f;
        camObject.fieldOfView = camObject.fieldOfView + Time.deltaTime * 32; //zoom out
        if (animator.GetBool("isRunning") == false  && animator.GetBool("isGrab") == false &&  verticalMove != 0) {
            animator.SetBool("isRunning", true);
            animator.SetBool("isWalking", false);           
        }
        else  if (verticalMove == 0 && horizontalRotation == 0){
            animator.SetBool("isRunning", false);
            animator.SetBool("isWalking", false);
            animator.SetBool("isIdle", true);
        }
        else if (verticalMove == 0 && horizontalRotation != 0){
            animator.SetBool("isRunning", false);
            animator.SetBool("isWalking", true);
            animator.SetBool("isIdle", false);
        }
    }

    private void Focus()
    {
        Debug.Log("You're holding down the focus button!");
        camObject.fieldOfView = camObject.fieldOfView - Time.deltaTime * 32; //zoom in
        // animator.SetBool("isRunning", false);
        // animator.SetBool("isWalking", true); 

    }

    public void healMe()
    {
        float startHealth = InventoryManager.playerHealth/100;
        float endHealth = Mathf.Clamp01 (startHealth + 0.5f);
        StartCoroutine(healLerp(startHealth, endHealth, 0.125f));
    }


///////////////////////////Enumerators//////////////////////////////////////
    IEnumerator healLerp (float startValue, float endValue, float duration){
        float time = 0;
        while (time <= duration){
            float swap = Mathf.Lerp(startValue, endValue, time/duration);
            skinnedRenderer.material.SetFloat("_PainValue", swap);
            time += Time.deltaTime;
            yield return null;  
        }
        InventoryManager.playerHealth += 50;
        print (InventoryManager.playerHealth); 
    }
     IEnumerator walkLerp (float startValue, float endValue, float duration){
        float time = 0;
        while (time <= duration){
            isLerping = true;
            float swap = Mathf.Lerp(startValue, endValue, time/duration);
            skinnedRenderer.material.SetFloat("_CrossFade", swap);
            time += Time.deltaTime;
            yield return null;  
        }
        skinnedRenderer.material.SetFloat("_CrossFade", 1);
        StartCoroutine(walkLerpReverse(1, 0, lerpRate));
    }

    IEnumerator walkLerpReverse(float startValue, float endValue, float duration){
        float time = 0;
        while (time <= duration){
            isLerping = true;
            float swap = Mathf.Lerp(startValue, endValue, time/duration);
            skinnedRenderer.material.SetFloat("_CrossFade", swap);
            time += Time.deltaTime;
            yield return null;  
        }
        skinnedRenderer.material.SetFloat("_CrossFade", 0);
        isLerping = false;  
    }
    IEnumerator FadeLightDynamicInput (Color startColor, Color endColor, float duration, float startIntensity, float endIntensity, float startAngle, float endAngle, float startSize, float endSize){
    float time = 0;
    Vector3 coneScale = lightShaft.transform.localScale;
        while (time <= duration){
            lightBeam.material.color = Color.Lerp(startColor, new Color (endColor.r, endColor.g, endColor.b, endColor.a * flashlightCharge), time/(duration/50)); //lerp the colors from dark to light
            lightHaze.material.color = Color.Lerp(startColor, new Color (endColor.r, endColor.g, endColor.b, endColor.a * flashlightCharge), time/(duration/50)); //lerp the colors from dark to light
            flashlight.intensity = Mathf.Lerp(startIntensity ,endIntensity * flashlightCharge,time/(duration/50));
            flashlight.spotAngle = Mathf.Lerp(startAngle,endAngle,time/(duration/50));
            vertlight.intensity = Mathf.Lerp(startIntensity,endIntensity * flashlightCharge,time/(duration/50));
            vertlight.spotAngle = Mathf.Lerp(startAngle,endAngle,time/(duration/50));
            float scalar = Mathf.Lerp(startSize,endSize,time/(duration/50));
            lightShaft.transform.localScale = new Vector3(scalar, lightShaft.transform.localScale.y ,scalar);
            if (startIntensity <= endIntensity){
                float currentCharge = flashlightCharge;
                lightChargeObject.GetComponent<Image>().fillAmount = Mathf.Lerp(currentCharge, 0, time/(duration));
            }
            time += Time.deltaTime;
            yield return null;
        }
    }
    IEnumerator FadeLightStaticInput (Color startColor, Color endColor, float duration, float startIntensity, float endIntensity, float startAngle, float endAngle, float startSize, float endSize){
    float time = 0;
    Vector3 coneScale = lightShaft.transform.localScale;
        while (time <= duration){
            lightBeam.material.color = Color.Lerp(startColor, endColor, time/(duration/2)); //lerp the colors from dark to light
            lightHaze.material.color = Color.Lerp(startColor, endColor, time/(duration/2)); //lerp the colors from dark to light
            flashlight.intensity = Mathf.Lerp(startIntensity,endIntensity,time/(duration/2));
            flashlight.spotAngle = Mathf.Lerp(startAngle,endAngle,time/(duration/2));
            vertlight.intensity = Mathf.Lerp(startIntensity,endIntensity,time/(duration/2));
            vertlight.spotAngle = Mathf.Lerp(startAngle,endAngle,time/(duration/2));
            float scalar = Mathf.Lerp(startSize,endSize,time/(duration/2));
            lightShaft.transform.localScale = new Vector3(scalar, lightShaft.transform.localScale.y ,scalar);
            time += Time.deltaTime;
            yield return null;
        }
    }

    IEnumerator lerpCam(float duration){
        float time = 0;
        float newY = 0;
        float newX = 0;
        float newZL = 0;
        float newYL = 0;
        float currentY = Camera.localEulerAngles.y;
        float currentX = Camera.localEulerAngles.x;
        float lightCurrentZ = lightRig.transform.localEulerAngles.z;
        float lightCurrentY = lightRig.transform.localEulerAngles.y;
       
        print("lerpCam");
        
        while (time < duration){
            newY = Mathf.Lerp(currentY, 90, time/duration);
            newX = Mathf.Lerp(currentX, 10, time/duration);
            newYL = Mathf.Lerp(lightCurrentY, 90, time/duration);
            newZL = Mathf.Lerp(lightCurrentZ, 180, time/duration);

            if (newY > 89.95 && newY < 90.05) newY = 90;
            if (newX > 9.95f && newX < 10.05f) newX = 10;
            if (newYL > 89.95f && newYL < 90.05f) newYL = 90;
            if (newZL > 179.95f && newZL < 180.05f) newZL = 180;

            Vector3 newRotation = new Vector3(newX, newY, Camera.localEulerAngles.z); 
            Vector3 newLightRotation = new Vector3(lightRig.transform.localEulerAngles.x, newYL, newZL);

            Camera.localRotation = Quaternion.Euler(newRotation);
            lightRig.transform.localRotation = Quaternion.Euler(newLightRotation);
           
            time += Time.deltaTime;
            yield return null;
        }
        if (verticalMove != 0 || horizontalRotation !=0){
            walkStart = skinnedRenderer.material.GetFloat("_CrossFade");
            if (walkStart == 0f){   
                StartCoroutine(walkLerp(0, 1,  lerpRate));
            }    
        }
    }
    IEnumerator fade(RawImage fadeObject, float startValue, float endValue, float duration){
		float time = 0.0f;
		while (time < duration){
			fadeObject.color = Color.Lerp (new Color(1,1,1,startValue), new Color(1,1,1,endValue), time/duration);
			time += Time.deltaTime;
        	yield return null;
		}
		fadeObject.color = new Color (1,1,1,endValue);
        if (isPaused){
            isPaused = false;
        }
        else if (!isPaused){
            isPaused = true;
        }
         if (isMap){
            isMap = false;
        }
        else if (!isMap){
            isMap = true;
        }
	}
}