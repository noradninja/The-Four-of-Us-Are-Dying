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
    public float stamina = 100f;
    public float rechargeDelay;
    public float stimCooldown = 0f;
    public GameObject staminaObject;
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
    public float lightDuration = 1.0f;
    public float lookSensitivity = 5f;
    public float upLimit = -50;
    public float downLimit = 50;
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
    private  string VITA = "joystick button ";
	
    private  int CROSS = 0;
	private  int CIRCLE = 1;
	private  int SQUARE = 2;
	private  int TRIANGLE = 3;
	private  int LTRIG = 4;
    private  int RTRIG = 5;
    private  int SELECT = 6;
	private  int START = 7;
	private  float UP = 8;
	private  float RIGHT = 9;
	private  float DOWN = 10;
	private  float LEFT = 11;
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
    public static bool isMap;
    public RawImage pausePanel;
    public RawImage mapPanel;
    public Camera mapCam;
    public GameObject mapIndicator;
    public bool isStimulant = false;
    public float cooldownValue;
    public bool delayButton = false;

    
      private void Awake()
    {
        if (Application.isEditor){
        //because the DS3 registers the buttons differently in Windows
            TRIANGLE = 0;
            CIRCLE = 1;
            CROSS = 2;
            SQUARE = 3;
            int L2TRIG = 4;
            int R2TRIG = 5;
            LTRIG = 6;
            RTRIG = 7;
            START = 8;
            SELECT = 9;
            //these are mapped to L3/R3 because the fucking dpad is a set of axes in Windows ఠ ͟ಠ
            UP = 10;
            DOWN = 11;
        }

        //LODGroup.crossFadeAnimationDuration = 0.25f;
        animator.SetBool("isGrab", false);
        cameraRig = Camera.transform.parent.transform; //get the transform of the righ the camera is a child to
        walkSpeed = speed;
        flashlightCharge = lightChargeObject.GetComponent<Image>().fillAmount;
        cooldownValue = stimCooldown;
         if (SSAOScript.GetComponent<FastSSAO>().enabled == false){      
            SSAOScript.GetComponent<FastSSAO>().enabled = true;
            BokehScript.GetComponent<Kino.Bokeh>().enabled = true;
            SSAOScript.GetComponent<FastMobileBloom>().enabled = true;
            SSAOScript.GetComponent<FXAA>().enabled = true;
            SSAOScript.GetComponent<Crepuscular>().enabled = true;
            SSAOScript.GetComponent<Kino.Fog>().enabled = true;
            enabledText.GetComponent<Text>().color = Color.green;
            enabledText.GetComponent<Text>().text = ("Enabled");
         }
    }

    void Update()
    {  


        Move();
        Rotate();
        Flashlight();
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

//pause
        if (Input.GetKeyDown(VITA + START)  && !delayButton){
            if(!isPaused){
                StartCoroutine(fade(pausePanel, 0, 1, 0.5f));
            }
            else {
                StartCoroutine(fade(pausePanel, 1, 0, 0.5f));
            }
            delayButton = true;
            StartCoroutine(buttonDelayTimer(0.5f));
        }
//select
        if (Input.GetKeyDown(VITA + SELECT))
        {   
            // //enable/disable SSAO and UI text
            // if (SSAOScript.GetComponent<FastSSAO>().enabled){
            //     SSAOScript.GetComponent<FastSSAO>().enabled = false;
            //     BokehScript.GetComponent<Kino.Bokeh>().enabled = false;
            //     SSAOScript.GetComponent<FastMobileBloom>().enabled = false;
            //     SSAOScript.GetComponent<FXAA>().enabled = false;
            //     enabledText.GetComponent<Text>().color = Color.red;
            //     enabledText.GetComponent<Text>().text = ("Disabled");
            // }
            // else {
            //     SSAOScript.GetComponent<FastSSAO>().enabled = true;
            //     BokehScript.GetComponent<Kino.Bokeh>().enabled = true;
            //     SSAOScript.GetComponent<FastMobileBloom>().enabled = true;
            //     SSAOScript.GetComponent<FXAA>().enabled = true;
            //     enabledText.GetComponent<Text>().color = Color.green;
            //     enabledText.GetComponent<Text>().text = ("Enabled");
            // }
        }

///////////////////////////DPad//////////////////////////////////////

//Meds
        if (Input.GetKeyDown(VITA + UP) && InventoryManager.medCount > 0){  
            if (InventoryManager.playerHealth < 100){
                InventoryManager.medCount -= 1;
                healMe();
            }
        }
//Stimutacs
        if (Input.GetKeyDown(VITA + DOWN) && InventoryManager.stimCount > 0 && !isStimulant){
            InventoryManager.stimCount -= 1;
            stamina = 100f;
            staminaObject.GetComponent<Image>().fillAmount = 1.0f;
            isStimulant = true;
             //start stim cooldown timer
            if (animator.GetBool("isRunning")){
                speed = 5f;
            }
            StartCoroutine(countdownStimulant(10, 0, stimCooldown));
            StartCoroutine(walkLerp(0, 1,  lerpRate));
        }

        if (Input.GetKeyDown(VITA + LEFT) && !delayButton){

        }

        if (Input.GetKeyDown(VITA + RIGHT)){//} && !delayButton){
            if (camObject.renderingPath == RenderingPath.DeferredShading){
                camObject.renderingPath = RenderingPath.Forward;
            }
            else camObject.renderingPath = RenderingPath.DeferredShading;
        }

///////////////////////////Face Buttons//////////////////////////////////////

//turn the flashlight on and off if we have it
        if (Input.GetKeyDown(VITA + TRIANGLE)  && !delayButton && hasFlashlight && flashlightCharge > 0.05f && !Input.GetKey(VITA + LTRIG))
        {   
            if (flashlightOff){
                flashlightOff = false;
            }
            else flashlightOff = true;
            delayButton = true;
            StartCoroutine(buttonDelayTimer(0.25f));
        }


//if we add batteries
        if (Input.GetKeyDown(VITA + SQUARE)  && !delayButton && hasFlashlight && InventoryManager.batteryCount > 0 && !Input.GetKey(VITA + LTRIG))
        {   
            float currentIntensity = flashlight.intensity;
            Color currentColor = lightBeam.material.color;
        if (flashlightCharge < 1.0f){
            InventoryManager.batteryCount -= 1;
        //add to charge and set progress bar based on charge amount
            flashlightCharge += 0.5f;
                if(flashlight.intensity < 10){ //to rain the light intensity to 10
                    float currentEmpty = (10 - flashlight.intensity);
                    flashlight.intensity += currentEmpty - 5.0f;
                }
                lightChargeObject.GetComponent<Image>().fillAmount = flashlightCharge;
            //change text formatting based on number of characters
                if (InventoryManager.batteryCount < 10){
                    batteryText.text = (string.Format("{0:D2}", InventoryManager.batteryCount));
                }
                else batteryText.text = (string.Format("{0:D2}", InventoryManager.batteryCount));
            //are we out of power and adding battery?   
                if (flashlightDisabled){
                    StopAllCoroutines();
                    if (isStimulant && cooldownValue <= stimCooldown){
                        StartCoroutine(countdownStimulant(cooldownValue, 0, cooldownValue));
                    }
                    if (!Input.GetKey(VITA + RTRIG)){
                        StartCoroutine(rechargeStamina(rechargeDelay, stamina));
                    }
                    StartCoroutine(FadeLightStaticInput(colorTransparent,  colorStart, 0.25f, 0, 5, 40, 40, 0.08f, 0.08f));
                    flashlightDisabled = false;
                }
            }
             delayButton = true;
            StartCoroutine(buttonDelayTimer(0.25f));
            if (isStimulant && cooldownValue <= stimCooldown){
                StartCoroutine(countdownStimulant(cooldownValue, 0, cooldownValue));
            }
        }
//if we add battery while 'firing' flashlight
        if (Input.GetKeyDown(VITA + SQUARE)  && !delayButton && hasFlashlight && InventoryManager.batteryCount > 0 && Input.GetKey(VITA + LTRIG) && !flashlightOff)
        {   
            StopAllCoroutines();
            if (isStimulant && cooldownValue <= stimCooldown){
                StartCoroutine(countdownStimulant(cooldownValue, 0, cooldownValue));
            }
            if (!Input.GetKey(VITA + RTRIG)){
                StartCoroutine(rechargeStamina(rechargeDelay, stamina));
            }
            StartCoroutine(FadeLightDynamicInput(lightBeam.material.color, colorEnd, lightDuration, flashlight.intensity, 60, 40, 25, 0.08f, 0.040f)); // 'fire' light
            if (flashlightCharge < 1.0f){
            InventoryManager.batteryCount -= 1;
            //add to charge and set progress bar based on charge amount
            flashlightCharge += 0.5f;
                if(flashlight.intensity < 10){
                flashlight.intensity = flashlight.intensity + 5.0f;
                }
                lightChargeObject.GetComponent<Image>().fillAmount = flashlightCharge;
            //change text formatting based on number of characters
                  if (InventoryManager.batteryCount < 10){
                    batteryText.text = (string.Format("{0:D2}", InventoryManager.batteryCount));
                }
                else batteryText.text = (string.Format("{0:D2}", InventoryManager.batteryCount));
            //are we out of power and adding battery?   
                if (flashlightDisabled){
                    StopAllCoroutines();
                    if (isStimulant && cooldownValue <= stimCooldown){
                        StartCoroutine(countdownStimulant(cooldownValue, 0, cooldownValue));
                    }
                    StartCoroutine(FadeLightStaticInput(colorTransparent,  colorStart, 0.25f, 0, 5, 40, 40, 0.08f, 0.08f));
                    flashlightDisabled = false;
                    if (!Input.GetKey(VITA + RTRIG)){
                        StartCoroutine(rechargeStamina(rechargeDelay, stamina));
                    }
                }
            }
            delayButton = true;
            StartCoroutine(buttonDelayTimer(0.25f));
            if (isStimulant && cooldownValue <= stimCooldown){
                StartCoroutine(countdownStimulant(cooldownValue, 0, cooldownValue));
            }
        }

//Map
        if (Input.GetKeyDown(VITA + CIRCLE))
        {
            if(!isMap && !delayButton){
                delayButton = true;
                StartCoroutine(fade(mapPanel, 0, 1, 0.5f));
                StartCoroutine(buttonDelayTimer(0.5f));
            }
            else if(isMap && !delayButton){
                delayButton = true;
                StartCoroutine(fade(mapPanel, 1, 0, 0.5f));
                StartCoroutine(buttonDelayTimer(0.5f));
            }
        }

//quick turnaround- when we hit Cross and down on the left stick at the same time   
        if (Input.GetKeyDown(VITA + CROSS) && verticalMove > 0 && !delayButton){ 
            delayButton = true;
            Vector3 playerRotation =  transform.eulerAngles; //store our rotation
            Vector3 neededRotation = new Vector3 (  transform.eulerAngles.x,
                                                    (transform.eulerAngles.y + 180f),
                                                    transform.eulerAngles.z); //calc new rotation
            StartCoroutine(quickTurn(playerRotation, neededRotation, 1.5f));
        }

///////////////////////////LTRIG//////////////////////////////////////

//if battery is dead, flicker the light breifly to indicate you should reload flashlight
        if (Input.GetKeyDown(VITA + LTRIG) && hasFlashlight && flashlightCharge < 0.05f)
        {   
            flashlightCharge = 0;
            StartCoroutine(FadeLightStaticInput(colorTransparent, colorStart, 0.25f, 0, 
                                                5, 40, 40, 0.08f, 0.08f)); //fade in quick
            StopAllCoroutines();
            if (isStimulant && cooldownValue <= stimCooldown){
                StartCoroutine(countdownStimulant(cooldownValue, 0, cooldownValue));
            }
            if (!Input.GetKey(VITA + RTRIG)){
                StartCoroutine(rechargeStamina(rechargeDelay, stamina));
            }
             StartCoroutine(FadeLightStaticInput(colorStart, colorTransparent,  0.25f, 
                                                5, 0, 40, 40, 0.08f, 0.08f)); //fade out quick
            flashlightDisabled = true;
            StartCoroutine(walkLerp(0, 1,  lerpRate));
        }
//if battery is not dead, and we hit the L trigger
        if (Input.GetKeyDown(VITA + LTRIG) && hasFlashlight && flashlightCharge > 0.05f 
            && !flashlightDisabled && !flashlightOff)
        {   
            float currentIntensity = flashlight.intensity;
            Color currentColor = lightBeam.material.color;
            StopAllCoroutines();
            if (isStimulant && cooldownValue <= stimCooldown){
                StartCoroutine(countdownStimulant(cooldownValue, 0, cooldownValue));
            }
            if (!Input.GetKey(VITA + RTRIG)){
                StartCoroutine(rechargeStamina(rechargeDelay, stamina));
            }
            StartCoroutine(FadeLightDynamicInput(currentColor, colorEnd, lightDuration, 
                                                flashlight.intensity, 60, 40, 25, 0.08f, 0.040f)); // 'fire' light
            StartCoroutine(walkLerp(0, 1,  lerpRate));
        }
//change FOV while we hold the L trigger
        if (Input.GetKey(VITA + LTRIG) && hasFlashlight && flashlightCharge > 0.05f 
        && !flashlightDisabled && !flashlightOff)
        {
            Focus();
            if (camObject.fieldOfView < 30) camObject.fieldOfView = 30; //limit fov change 
        }
//reset the flashlight and camera when we release the L trigger
        if (Input.GetKeyUp(VITA + LTRIG) && hasFlashlight && flashlightCharge > 0.05f)
        {   
            StopAllCoroutines();
            if (isStimulant && cooldownValue <= stimCooldown){
                StartCoroutine(countdownStimulant(cooldownValue, 0, cooldownValue));
            }
            if (!Input.GetKey(VITA + RTRIG)){
                StartCoroutine(rechargeStamina(rechargeDelay, stamina));
            }
            float currentIntensity = flashlight.intensity;
            float currentAngle = flashlight.spotAngle;
            float currentSize = lightShaft.transform.localScale.x;
            Color currentColor = lightBeam.material.color;
            StartCoroutine(FadeLightStaticInput(currentColor, colorStart, 0.25f, currentIntensity, 5, 
                                                currentAngle, 40, currentSize, 0.08f));
            StartCoroutine(walkLerp(0, 1,  lerpRate));
        }
    
        ///////////////////////////RTRIG////////////////////////////////////// 
        if (Input.GetKey(VITA + RTRIG))
        {
            if (stamina > 0f){ 
                    Run(); //RUN, FORREST, RUN
            }
          
            if (stamina == 0f){
                speed = walkSpeed;
            }
            if (verticalMove != 0 && stamina > 0f && !isStimulant){
                float oldStamina = stamina;
                stamina -= 0.25f; //full is 100
                if (speed > walkSpeed){ //speed starts at 5
                    speed -= (speed / (8 * stamina)); //speed loss falls off as you lose stamina and slow down  
                }
                staminaObject.GetComponent<Image>().fillAmount = Mathf.Lerp((oldStamina/100), (stamina/100), 0.1f);
            }
          
            if (stamina < 0){
                stamina = 0;
                speed = walkSpeed;
            }

            if (camObject.fieldOfView > 50) camObject.fieldOfView = 50; //limit fov change  
        }
        if (Input.GetKeyDown(VITA + RTRIG) && stamina > 0f)
        {   
            StopAllCoroutines();
            if (isStimulant && cooldownValue <= stimCooldown){
                StartCoroutine(countdownStimulant(cooldownValue, 0, cooldownValue));
            }
            
            speed = 5f;
            savedPosition = lightRig.transform.localPosition;
            savedRotation = lightRig.transform.localRotation;
            lightRig.transform.parent = handRig; 
            walkStart = skinnedRenderer.material.GetFloat("_CrossFade");
            StartCoroutine(walkLerp(0, 1,  lerpRate));
            
        }
        if (Input.GetKeyUp(VITA + RTRIG))
        {   
            StopAllCoroutines();
            if (isStimulant && cooldownValue <= stimCooldown){
                StartCoroutine(countdownStimulant(cooldownValue, 0, cooldownValue));
            }
            speed = walkSpeed;
            StartCoroutine(rechargeStamina(rechargeDelay, stamina));
            walkStart = skinnedRenderer.material.GetFloat("_CrossFade");
            lerpRate = 0.55f;
            StartCoroutine(walkLerp(0, 1,  lerpRate));   
            animator.SetBool("isRunning", false);
            lightRig.transform.parent = bodyRig;
            lightRig.transform.localRotation = savedRotation;
            lightRig.transform.localPosition = savedPosition;
            delayButton = false;
        }
        else if (!Input.GetKey(VITA + RTRIG) && (!Input.GetKey(VITA + LTRIG)))
        {
            if (camObject.fieldOfView > 40 && camObject.fieldOfView != 40){
                camObject.fieldOfView = camObject.fieldOfView - Time.deltaTime * 32;
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
        mapIndicator.transform.Rotate(0, horizontalRotation * lookSensitivity, 0);
        Camera.Rotate(verticalCamRotation*lookSensitivity/2,horizontalCamRotation*lookSensitivity/2,0);
        lightRig.transform.Rotate(0,-horizontalCamRotation*(lookSensitivity*2),verticalCamRotation*lookSensitivity);

        Vector3 currentRotation = Camera.localEulerAngles;
        Vector3 currentLightRotation = lightRig.transform.localEulerAngles;

        if (currentRotation.x > 180) currentRotation.x -= 360;
        if (currentRotation.y > 180) currentRotation.y -= 360;
        currentRotation.x = Mathf.Clamp(currentRotation.x, upLimit, downLimit); //rain camera up/down
        currentRotation.y = Mathf.Clamp(currentRotation.y, 83, 97); //rain camera left/right
        currentRotation.z = 0;

        if (currentLightRotation.y > 180) currentLightRotation.y -= 360;
        currentLightRotation.x = 0;
        currentLightRotation.y = Mathf.Clamp(currentLightRotation.y, 40, 120); //rain light left/right
        currentLightRotation.z = Mathf.Clamp(currentLightRotation.z, 142, 200); //rain light up/down

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

    ///////////////////////////Methods//////////////////////////////////////

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
              
                if (animator.GetBool("isWalking") == true){ 
                    lerpRate = 0.55f;
                if (walkStart == 0f){
                    StartCoroutine(walkLerp(0, 1,  lerpRate));
                }
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
              walkStart = skinnedRenderer.material.GetFloat("_CrossFade");
              
                if (animator.GetBool("isWalking") == true){ 
                    lerpRate = 0.55f;
                if (walkStart == 0f){
                    StartCoroutine(walkLerp(0, 1,  lerpRate));
                }
            }    

                
        } 
        if (!animator.GetBool("isWalking") && !animator.GetBool("isRunning")){
            animator.SetBool("isIdle", verticalMove == 0);
        }
         
    }

    private void Run()
    {
        if (stamina > 30f){ 
            Debug.Log("You're holding down run!");
            camObject.fieldOfView = camObject.fieldOfView + Time.deltaTime * 32; //zoom out
            if (animator.GetBool("isRunning") == false  && animator.GetBool("isGrab") == false &&  verticalMove != 0) {
                animator.SetBool("isRunning", true);
                animator.SetBool("isWalking", false);  
                lerpRate = 0.275f;     
                StartCoroutine(walkLerp(0, 1, lerpRate));
            }
        }
        if (stamina <= 30f){ 
            Debug.Log("You're very tired!");
            camObject.fieldOfView = camObject.fieldOfView + Time.deltaTime * 32; //zoom out
            if (animator.GetBool("isRunning") == true  && animator.GetBool("isGrab") == false &&  verticalMove != 0) {
                animator.SetBool("isRunning", false);
                animator.SetBool("isWalking", true);  
                walkStart = skinnedRenderer.material.GetFloat("_CrossFade");
                lerpRate = 0.55f;
                if (walkStart == 0f){
                    StartCoroutine(walkLerp(0, 1,  lerpRate));
                }
            }
        }


        if (verticalMove == 0 && horizontalRotation == 0){
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
    // run lerp for normal map
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
        time = 0;
        while (time <= duration){
            isLerping = true;
            float swap = Mathf.Lerp(endValue, startValue, time/duration);
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

 
 IEnumerator countdownStimulant(float startVal, float endVal, float duration){
        if (Camera.GetComponent<Kino.Bokeh>().focalLength <= 0.115f){
            StartCoroutine(lerpFocalLength (0.115f, 0.140f, 1.0f, 0.15f, 2.0f));
        }
        float time = 0.0f;
            while (time < duration){
                cooldownValue = Mathf.Lerp (startVal, endVal, time/duration);
                time += Time.deltaTime;
                yield return null;
            }
            cooldownValue = 0;
            cooldownValue = stimCooldown;
            StartCoroutine(lerpFocalLength(0.140f, 0.115f, 0.5f, 0.20f, 2.0f));
            if (!Input.GetKey(VITA + RTRIG)){
                StartCoroutine(rechargeStamina(rechargeDelay, stamina));
            }
            isStimulant = false;           
    }
    IEnumerator rechargeStamina(float duration, float currentStamina){
        float time = 0.0f;
        //yield return new WaitForSeconds(2f); //delay before charge happens
        while (time < duration){
            currentStamina = Mathf.Lerp (currentStamina, 100f, time / (duration * 100f) );
            staminaObject.GetComponent<Image>().fillAmount = Mathf.Lerp((currentStamina/100), 1, time / (duration * 100f));
            time += Time.deltaTime;
            stamina = currentStamina;
            yield return null;
        }
        stamina = 100f;
    }
   IEnumerator buttonDelayTimer(float delay){
        yield return new WaitForSeconds(delay);
        delayButton = false;
    }

    IEnumerator quickTurn(Vector3 playerRotation, Vector3 fullTurn, float duration){
        float time = 0.0f;
            while (time < duration){
                playerRotation = Vector3.Lerp (playerRotation, fullTurn, time/duration);
                transform.eulerAngles = playerRotation;
                time += Time.deltaTime;
                yield return null;
            }
            transform.eulerAngles = fullTurn;//finalize rotation
            yield return new WaitForSeconds(1.675f);
            delayButton = false;
    }

    IEnumerator lerpFocalLength (float startValue, float endValue, float endBloom, float endThreshold, float duration){
       float time = 0.0f;
            while (time < duration){
                float currentBloom = Camera.GetComponent<FastMobileBloom>().intensity;
                float currentThreshold = Camera.GetComponent<FastMobileBloom>().threshold;
                float currentValue = Mathf.Lerp (startValue, endValue, time/(duration/4));
                float bloomIntensity = Mathf.Lerp (currentBloom, endBloom, time/(duration/2));
                float bloomThreshold = Mathf.Lerp (currentThreshold, endThreshold, time/duration);
                Camera.GetComponent<Kino.Bokeh>().focalLength = currentValue;
                Camera.GetComponent<FastMobileBloom>().intensity = bloomIntensity;
                Camera.GetComponent<FastMobileBloom>().threshold = bloomThreshold;
                time += Time.deltaTime;
                yield return null;
            }
        Camera.GetComponent<Kino.Bokeh>().focalLength = endValue;
    }
}