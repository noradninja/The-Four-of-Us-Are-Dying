using System;
using System.Collections;
using System.Collections.Generic;
using System.Text;
using UnityEngine;
using UnityEngine.UI;
using TMPro;
using TrueClouds;
using UnityEngine.Serialization;

//TODO: Extract flashlight handling and stamina handling to their own classes
//TODO: UI should handle fadein/out on its own upon L/R press
//TODO: Normal map lerp should be done with Animation Events as opposed to coroutines 
//TODO: Convert joystick handling over to subscriber pattern
public class PlayerController : MonoBehaviour
{
    public CharacterController characterController;
    public bool fadeDynamicRunning = false;
    public float health;
    public float speed = 3;
    public float stamina = 100f;
    public float rechargeDelay;
    public float stimCooldown = 0f;
    public GameObject staminaObject;
    private float _walkSpeed;
    public Animator animator;
    
    // camera and rotation
    public Transform cameraRig;
    public Transform Camera;
    public Camera camObject;
    public GameObject mapCamera;
    public float UpLimit = -50;
    public float downLimit = 50;
    
    //flashlight
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
    public GameObject lightRoot;
    public static GameObject currentTarget;
    public Quaternion storedLightRotation;
    public Quaternion endLightRotation;
   // public float lightCharge = 100f;
    public Color colorStart;
    public Color colorEnd;
    public Color colorTransparent;
    public float lightDuration = 1.0f;
    public float lookSensitivity = 5f;
    public float flashlightCharge = 1.0f;
    //public bool FlashlightController.FlashlightDisabled;
   
    public TextMeshProUGUI batteryText;
  
    [FormerlySerializedAs("SSAOScript")] public GameObject ssaoScript;
    [FormerlySerializedAs("BokehScript")] public GameObject bokehScript;
    public GameObject enabledText;
    public float lerpRate = 1.0f;
 
    
    // gravity
    private readonly float gravity = 9.87f;
    private float _verticalSpeed = 0;
    private float verticalMove;
    private float horizontalRotation;
    private float horizontalCamRotation;
    private float verticalCamRotation;
    private Quaternion savedRotation;
    private Vector3 savedPosition;
    private bool isPaused;
   
    public SkinnedMeshRenderer skinnedRenderer;
    private float walkStart;

    //states
    public bool lightFocusing;
    public bool isRunning;
    public bool isWalking;
    public static bool isStimulant = false;
    public bool isLerping;
    public bool isCharging;
    public static bool isMap;
    public bool lightMovement = true;
    public static bool delayButton = false;
    public float cooldownValue;
 
    //map/menu
    public CanvasGroup pausePanel;
    public RawImage mapPanel;
    public Camera mapCam;
    public GameObject mapIndicator;

    //overlay
    public GameObject perfOverlay;
    public GameObject fpsOverlay;
    public CanvasGroup UICanvasGroup;
    public float currentCharge;
    private static readonly int CrossFade = Shader.PropertyToID("_CrossFade");
    private static readonly int IsRunning = Animator.StringToHash("isRunning");
    private static readonly int IsWalking = Animator.StringToHash("isWalking");
    private static readonly int IsIdle = Animator.StringToHash("isIdle");
    private static readonly int IsGrab = Animator.StringToHash("isGrab");
    private static readonly int PainValue = Shader.PropertyToID("_PainValue");


    private void Awake()
    {
        PauseManager.isPaused = false;
        delayButton = false;
        if (Application.isEditor){
           //
        }

        //LODGroUp.CrossFadeAnimationDuration = 0.25f;
        animator.SetBool("isGrab", false);
        
        cameraRig = Camera.transform.parent.transform; //get the transform of the rig the camera is a child to
        _walkSpeed = speed;
        flashlightCharge = lightChargeObject.GetComponent<Image>().fillAmount;
        cooldownValue = stimCooldown;
         if (ssaoScript.GetComponent<FastSSAO>().enabled == false){      
            ssaoScript.GetComponent<FastSSAO>().enabled = true;
            bokehScript.GetComponent<Kino.Bokeh>().enabled = true;
            // SSAOScript.GetComponent<SAI2x>().enabled = true;
            ssaoScript.GetComponent<FXAA>().enabled = true;
            ssaoScript.GetComponent<Crepuscular>().enabled = true;
            ssaoScript.GetComponent<Kino.Fog>().enabled = true;
            // enabledText.GetComponent<Text>().color = Color.green;
            // enabledText.GetComponent<Text>().text = ("Enabled");
         }
    }

    void Start()
    {
        #region FaceButtonEventSub
        VitaInputManager.Instance.OnCross += CrossEvent;
        VitaInputManager.Instance.OnCrossDown += CrossDownEvent;
        VitaInputManager.Instance.OnCrossUp += CrossUpEvent;

        // VitaInputManager.Instance.OnTriangle += TriangleEvent;
        // VitaInputManager.Instance.OnTriangleDown += TriangleDownEvent;
        // VitaInputManager.Instance.OnTriangleUp += TriangleUpEvent;
        
        // VitaInputManager.Instance.OnSquare += SquareEvent;
        // VitaInputManager.Instance.OnSquareDown += SquareDownEvent;
        // VitaInputManager.Instance.OnSquareUp += SquareUpEvent;
        
        VitaInputManager.Instance.OnCircle += CircleEvent;
        VitaInputManager.Instance.OnCircleDown += CircleDownEvent;
        VitaInputManager.Instance.OnCircleUp += CircleUpEvent;
        #endregion

        #region StartSelectEventSub
        VitaInputManager.Instance.OnStart += StartEvent;
        VitaInputManager.Instance.OnSelect += SelectEvent;
        #endregion

        #region TriggerButtonEventSub
        // VitaInputManager.Instance.OnLTrig += LTrigEvent;
        // VitaInputManager.Instance.OnLTrigDown += LTrigDownEvent;
        // VitaInputManager.Instance.OnLTrigUp += LTrigUpEvent;

        VitaInputManager.Instance.OnRTrig += RTrigEvent;
        VitaInputManager.Instance.OnRTrigDown += RTrigDownEvent;
        VitaInputManager.Instance.OnRTrigUp += RTrigUpEvent;
        #endregion

        #region DpadEventSub
        VitaInputManager.Instance.OnDpadDown += DPadDownKeyDownEvent;
        VitaInputManager.Instance.OnDpadUp += DpadUpKeyDownEvent;
        VitaInputManager.Instance.OnDpadLeft += DpadLeftKeyDownEvent;
        VitaInputManager.Instance.OnDpadRight += DpadRightKeyDownEvent;
        #endregion

    }

    // ReSharper disable once Unity.RedundantEventFunction
    private void OnDisable() //this isnt redundant, ReSharper <-.<-
    {
        // VitaInputManager.Instance.OnCross -= CrossEvent;
        // VitaInputManager.Instance.OnCrossDown -= CrossDownEvent;
        // VitaInputManager.Instance.OnCrossUp -= CrossUpEvent;
    }

    void Update()
    {
        isCharging = FlashlightController.chargeCheck;
        health = InventoryManager.playerHealth; //update health
        //get touch input, and enable/disable the perf overlay
        foreach (Touch touch in Input.touches) {
            if (touch.fingerId == 0){
                if (Input.GetTouch(0).phase == TouchPhase.Began)
                {
                    if (perfOverlay.activeSelf == false)
                    {
                        perfOverlay.SetActive(true);
                        fpsOverlay.SetActive(true);
                    }
                    else
                    {
                        perfOverlay.SetActive(false);
                        fpsOverlay.SetActive(false);
                    }
                }
            }
        }
        
        if(!PauseManager.isPaused){
            Move();
            Rotate();
           // Flashlight();
            Keys();
            if (verticalMove != 0 || horizontalRotation !=0){
                walkStart = skinnedRenderer.material.GetFloat(CrossFade);
                if (walkStart == 0f){   
                    StartCoroutine(WalkLerp(0, 1,  lerpRate));
                }    
            }
            if (lightFocusing && currentTarget != null){
                if (currentTarget.GetComponentInParent<EnemyController>().isPlayerNear == true) 
                    lightMovement = false;
                //rotate player
                var position = currentTarget.transform.position;
                Vector3 dir = position - transform.position;
                Quaternion lookRotation = Quaternion.LookRotation(dir);
                Vector3 rotation = Quaternion.Lerp(transform.rotation, 
                                                    lookRotation, 
                                                    Time.deltaTime * 14f).eulerAngles;
                transform.rotation = Quaternion.Euler(0f, rotation.y, 0f);
              
            }
        }
        
    }
    // private void Flashlight()
    // {
    //     flashlightCharge = lightChargeObject.GetComponent<Image>().fillAmount;
    //     if (flashlightCharge <= 0.05f){
    //        FlashlightController.FlashlightDisabled = true;
    //         flashlightCharge = 0;
    //     }
    //     if (!FlashlightController.HasFlashlight) //no flashlight
    //     {   
    //         lightObject.SetActive(false);
    //         lightRig.SetActive(false);
    //     }
    //     if (FlashlightController.HasFlashlight && FlashlightController.FlashlightOff) //have flashlight but it's off
    //     {
    //         lightObject.SetActive(true); 
    //         lightRig.SetActive(false);
    //     }
    //     if (FlashlightController.HasFlashlight && !FlashlightController.FlashlightOff) //have flashlight and it's on
    //     {
    //         lightObject.SetActive(true);
    //         lightRig.SetActive(true);
    //     }
    // }

    #region FaceButtonEvents
    //cross
    private void CrossEvent()
    {
        VitaDebug.Log("You're holding Cross");
    }

    private void CrossDownEvent()
    {
        if (verticalMove > 0 && !delayButton)
        {
            delayButton = true;
            var eulerAngles = transform.eulerAngles;
            var neededRotation = new Vector3 (eulerAngles.x,
                                            (eulerAngles.y + 180f),
                                            eulerAngles.z); //calc new rotation
            StartCoroutine(QuickTurn(eulerAngles, neededRotation, 1.5f));
        }
    }

    private void CrossUpEvent()
    {
        VitaDebug.Log("You released Cross");
    }
    // //triangle
    // private void TriangleEvent()
    // {
    //     
    // }
    //
    //
    // private void TriangleUpEvent()
    // {
    //     
    // }
    // //square
    // private void SquareEvent()
    // {
    //     
    // }
    //
    // private void SquareDownEvent()
    // {
    //     // //we are adding a battery while the flashlight is not being fired
    //     // if (!delayButton && FlashlightController.HasFlashlight && InventoryManager.batteryCount > 0 && !Input.GetButton("LTRIG"))
    //     // {
    //     //     StopAllCoroutines(); 
    //     //     var currentIntensity = flashlight.intensity;
    //     //     var currentColor = lightBeam.material.color;
    //     // if (flashlightCharge < 1.0f){
    //     //     InventoryManager.batteryCount -= 1;
    //     // //add to charge and set progress bar based on charge amount
    //     //     flashlightCharge += 0.5f;
    //     //         if(flashlight.intensity < 10){ //to rain the light intensity to 10
    //     //             var intensity = flashlight.intensity;
    //     //             var currentEmpty = (10 - intensity);
    //     //             intensity += currentEmpty - 5.0f;
    //     //             flashlight.intensity = intensity;
    //     //         }
    //     //         lightChargeObject.GetComponent<Image>().fillAmount = flashlightCharge;
    //     //     //change text formatting based on number of characters
    //     //         batteryText.text = InventoryManager.batteryCount.ToString("D2");
    //     //     //are we out of power and adding battery?   
    //     //         if (FlashlightController.FlashlightDisabled){
    //     //             StopAllCoroutines();
    //     //             currentCharge = flashlightCharge;
    //     //             if (isStimulant && cooldownValue <= stimCooldown){
    //     //                 StartCoroutine(CountdownStimulant(cooldownValue, 0, cooldownValue));
    //     //             }
    //     //             if (!Input.GetButton("RTRIG")){
    //     //                 StartCoroutine(RechargeStamina(((100-stamina)), stamina));
    //     //             }
    //     //             StartCoroutine(FadeLightStaticInput(colorTransparent,  colorStart, 0.25f, 0, 5, 40, 40, 0.08f, 0.08f));
    //     //            FlashlightController.FlashlightDisabled = false;
    //     //         }
    //     //         if (isCharging){
    //     //             currentCharge = flashlightCharge;
    //     //             StartCoroutine(RechargeFlashlight (currentCharge,  10f * flashlightCharge));
    //     //         }
    //     //     }
    //     //     delayButton = true;
    //     //     StartCoroutine(ButtonDelayTimer(0.25f));
    //     //    
    //     //     if (isStimulant && cooldownValue <= stimCooldown){
    //     //         StartCoroutine(CountdownStimulant(cooldownValue, 0, cooldownValue));
    //     //     }
    //     // }
    //     // //we are adding a battery while the flashlight is being fired
    //     // if (!delayButton && FlashlightController.HasFlashlight && InventoryManager.batteryCount > 0 && Input.GetButton("LTRIG") &&
    //     //     !FlashlightController.FlashlightOff)
    //     // {
    //     //     StopAllCoroutines();
    //     //     currentCharge = flashlightCharge;
    //     //    // StartCoroutine(rechargeFlashlight (currentCharge,  10f * flashlightCharge));
    //     //     if (isStimulant && cooldownValue <= stimCooldown){
    //     //         StartCoroutine(CountdownStimulant(cooldownValue, 0, cooldownValue));
    //     //     }
    //     //     if (!Input.GetButton("RTRIG")){
    //     //         StartCoroutine(RechargeStamina(((100-stamina)), stamina));
    //     //     }
    //     //     StartCoroutine(FadeLightDynamicInput(lightBeam.material.color, colorEnd, lightDuration, flashlight.intensity, 60, 40, 25, 0.08f, 0.040f)); // 'fire' light
    //     //     if (flashlightCharge < 1.0f){
    //     //         InventoryManager.batteryCount -= 1;
    //     //         //add to charge and set progress bar based on charge amount
    //     //         flashlightCharge += 0.5f;
    //     //         if(flashlight.intensity < 10){
    //     //             flashlight.intensity = flashlight.intensity + 5.0f;
    //     //         }
    //     //         lightChargeObject.GetComponent<Image>().fillAmount = flashlightCharge;
    //     //         //change text formatting based on number of characters
    //     //         batteryText.text = InventoryManager.batteryCount.ToString("D2");
    //     //         //are we out of power and adding battery?   
    //     //         if (FlashlightController.FlashlightDisabled){
    //     //             StopAllCoroutines();
    //     //             currentCharge = flashlightCharge;
    //     //             //StartCoroutine(rechargeFlashlight (currentCharge,  10f * flashlightCharge));
    //     //             if (isStimulant && cooldownValue <= stimCooldown){
    //     //                 StartCoroutine(CountdownStimulant(cooldownValue, 0, cooldownValue));
    //     //             }
    //     //             StartCoroutine(FadeLightStaticInput(colorTransparent,  colorStart, 0.25f, 0, 5, 40, 40, 0.08f, 0.08f));
    //     //            FlashlightController.FlashlightDisabled = false;
    //     //             if (!Input.GetButton("RTRIG")){
    //     //                 StartCoroutine(RechargeStamina(((100-stamina)), stamina));
    //     //             }
    //     //         }
    //     //     }
    //     //     delayButton = true;
    //     //     StartCoroutine(ButtonDelayTimer(0.25f));
    //     //     if (isStimulant && cooldownValue <= stimCooldown){
    //     //         StartCoroutine(CountdownStimulant(cooldownValue, 0, cooldownValue));
    //     //     }
    //     //     StartCoroutine(WalkLerp(0, 1,  lerpRate));
    //     //     if(isCharging){
    //     //         StartCoroutine(RechargeFlashlight (currentCharge,  10f));
    //     //     }
    //     // }
    //     
    // }
    //
    // private void SquareUpEvent()
    // {
    //     
    // }
    //circle
    private void CircleEvent()
    {
        
    }

    private void CircleDownEvent()
    {
        if(!isMap && !delayButton){
            mapCamera.SetActive(true);
            delayButton = true;
            StartCoroutine(Fade(mapPanel, 0, 1, 0.5f));
            StartCoroutine(ButtonDelayTimer(0.5f));
        }
        else if(isMap && !delayButton){
            delayButton = true;
            StartCoroutine(Fade(mapPanel, 1, 0, 0.5f));
            StartCoroutine(ButtonDelayTimer(0.5f));
        }
    }

    private void CircleUpEvent()
    {
        
    }
    #endregion
    
    #region StartSelectButtonEvents

    private void StartEvent()
    {
        if (!delayButton)
        {
            if (!PauseManager.isPaused)
            {
                StartCoroutine(FadeScreen(1, 0.5F));
                PauseManager.isPaused = true;
            }
            else
            {
                StartCoroutine(FadeScreen(1, 0.5F));
                PauseManager.isPaused = false;
            }

            delayButton = true;
            StartCoroutine(ButtonDelayTimer(0.5f));
        }
    }

    private void SelectEvent()
    {
         if (GetDeviceModel.currentDeviceModel == "Playstation Vita TV")
         {
             // do PSTV stuff here
         }
    }
    
    
    #endregion

    #region DpadButtonEvents

    private void DpadUpKeyDownEvent()
    {
        if (InventoryManager.medCount > 0 && InventoryManager.playerHealth < 100)
        {
            InventoryManager.medCount -= 1;
            HealMe();
        }
    }

    private void DPadDownKeyDownEvent()
    {
        if (InventoryManager.stimCount > 0 && !isStimulant)
        {
            InventoryManager.stimCount -= 1;
            isStimulant = true;
            stamina = 100f;
            staminaObject.GetComponent<Image>().fillAmount = 1.0f;
            if (animator.GetBool(IsRunning)){
                speed = 5f;
            }
            //Start stim cooldown timer, change walklerp speed- this coroutine will go away
            //when I set it up to be driven by animation events instead
            StartCoroutine(CountdownStimulant(10, 0, stimCooldown));
            StartCoroutine(WalkLerp(0, 1,  lerpRate));
        }
    }
    private void DpadLeftKeyDownEvent()
    {
        if (!delayButton)
        {
            perfOverlay.SetActive(!perfOverlay.activeSelf);
            fpsOverlay.SetActive(!fpsOverlay.activeSelf);
        }
    }

    private void DpadRightKeyDownEvent()
    {
        
    }
    #endregion

    #region TriggerButtonEvents 

    // private void LTrigEvent()
    // {
    //   
    // }
    //
    // private void LTrigUpEvent()
    // {
    //     // if (FlashlightController.HasFlashlight)
    //     // {
    //     //     currentCharge = flashlightCharge;
    //     //     currentTarget = null;
    //     //     StopAllCoroutines();
    //     //     if(!isCharging){
    //     //         StartCoroutine(RechargeFlashlight (currentCharge,  10f));
    //     //     }
    //     //     if (isStimulant && cooldownValue <= stimCooldown){
    //     //         StartCoroutine(CountdownStimulant(cooldownValue, 0, cooldownValue));
    //     //     }
    //     //     if (UICanvasGroup.alpha != 0 && stamina >= 95.0f  && !isStimulant && !isCharging){
    //     //         StartCoroutine(FadeAlpha(UICanvasGroup.alpha, 0.0f, 0.5f, 0.0f));
    //     //     }
    //     //     if (!Input.GetButton("RTRIG")){
    //     //         StartCoroutine(RechargeStamina(((100-stamina)), stamina));
    //     //     }
    //     //     if (!FlashlightController.FlashlightDisabled){
    //     //         float currentIntensity = flashlight.intensity;
    //     //         float currentAngle = flashlight.spotAngle;
    //     //         float currentSize = lightShaft.transform.localScale.x;
    //     //         Color currentColor = lightBeam.material.color;
    //     //         StartCoroutine(FadeLightStaticInput(currentColor, colorStart, 0.25f, currentIntensity, 10, 
    //     //             currentAngle, 40, currentSize, 0.08f));
    //     //     }
    //     //     lightFocusing = false;
    //     //     lightMovement = true;
    //     //     endLightRotation =  lightRoot.transform.localRotation;
    //     //     lightRoot.transform.localRotation = storedLightRotation;
    //     StartCoroutine(WalkLerp(0, 1,  lerpRate));     
    //     StartCoroutine(LerpCam(0.5f));  
    //     if (!isStimulant) StartCoroutine(LerpFocalLength(0.095f,0.087f, 0.5f, 0.5f, 0.5f));
    //     // }
    // }
    //
    // private void LTrigDownEvent()
    // {
    //     // StopAllCoroutines();
    //     // if (FlashlightController.HasFlashlight && FlashlightController.FlashlightDisabled) //light is off b/c dead battery
    //     // {
    //     //     isCharging = false;
    //     //    StartCoroutine(FadeLightStaticInput(colorTransparent, colorStart, 0.25f, 0, 
    //     //         5, 40, 40, 0.08f, 0.08f)); //fade in quick
    //     //     StartCoroutine(FadeLightStaticInput(colorStart, colorTransparent,  0.25f, 
    //     //         5, 0, 40, 40, 0.08f, 0.08f)); //fade out quick
    //     // }
    //     // StartCoroutine(WalkLerp(0, 1,  lerpRate)); 
    //     // if (isStimulant && cooldownValue <= stimCooldown){
    //     //     StartCoroutine(CountdownStimulant(cooldownValue, 0, cooldownValue));
    //     // }
    //     // if (!Input.GetButton("RTRIG")){
    //     //     StartCoroutine(RechargeStamina(((100-stamina)), stamina));
    //     // }
    // }

    private void RTrigEvent()
    {
        if (stamina > 0f){ 
            Run(); //RUN, FORREST, RUN
        }
          
        if (stamina == 0f){
            speed = _walkSpeed;
        }
        if (verticalMove != 0 && stamina > 0f && !isStimulant){
            var oldStamina = stamina;
            stamina -= 0.75f; //full is 100
            if (speed > _walkSpeed){ //speed Starts at 5
                speed -= (speed / (8 * stamina)); //speed loss falls off as you lose stamina and slow down  
            }
            staminaObject.GetComponent<Image>().fillAmount = Mathf.Lerp((oldStamina/100), (stamina/100), 0.1f);
        }
          
        if (stamina < 0){
            stamina = 0;
            speed = _walkSpeed;
        }

        if (camObject.fieldOfView > 50) camObject.fieldOfView = 50; //limit fov change  
    }

    private void RTrigUpEvent()
    {
        isRunning = false;
        // StopAllCoroutines();
        // if (isCharging){
        //     currentCharge = flashlightCharge;
        //     StartCoroutine(RechargeFlashlight (currentCharge,  10f * flashlightCharge));
        // }
        // if (isStimulant && cooldownValue <= stimCooldown){
        //     StartCoroutine(CountdownStimulant(cooldownValue, 0, cooldownValue));
        // }
        speed = _walkSpeed;
        StartCoroutine(RechargeStamina(((100-stamina)), stamina));
        walkStart = skinnedRenderer.material.GetFloat(CrossFade);
        lerpRate = 0.55f;
        StartCoroutine(WalkLerp(0, 1,  lerpRate));   
        animator.SetBool(IsRunning, false);
        lightRig.transform.parent = lightRoot.transform;
        lightRig.transform.localRotation = savedRotation;
        lightRig.transform.localPosition = savedPosition;
        delayButton = false;
        if (UICanvasGroup.alpha != 0 && stamina >= 95.0f  && !isStimulant && !isCharging){
            StartCoroutine(FadeAlpha(UICanvasGroup.alpha, 0.0f, 0.5f, 0.0f));
        }
    }

    private void RTrigDownEvent()
    {
        if (stamina > 0)
        {
            isRunning = true;
            // StopAllCoroutines();
            //  if (isCharging){
            //     currentCharge = flashlightCharge;
            //    StartCoroutine(RechargeFlashlight (currentCharge,  10f * flashlightCharge));
            //  }
            //  if (isStimulant && cooldownValue <= stimCooldown){
            //      StartCoroutine(CountdownStimulant(cooldownValue, 0, cooldownValue));
            //  }
            //
            speed = 5f;
            savedPosition = lightRig.transform.localPosition;
            savedRotation = lightRig.transform.localRotation;
            lightRig.transform.parent = handRig; 
            walkStart = skinnedRenderer.material.GetFloat(CrossFade);
            StartCoroutine(WalkLerp(0, 1,  lerpRate));
            if (UICanvasGroup.alpha < 1){
                StartCoroutine(FadeAlpha(UICanvasGroup.alpha, 1.0f, 0.5f, 0.0f));
            }
        }   
    }
    #endregion
    private void Keys()
    {
    if (!Input.GetButton("RTRIG") && (!Input.GetButton("LTRIG")) && (!Input.GetButtonDown("Square")))
        {
            if (camObject.fieldOfView > 35f){
                camObject.fieldOfView = camObject.fieldOfView - Time.deltaTime * 32;
            }
            if (camObject.fieldOfView < 35f){
                camObject.fieldOfView = camObject.fieldOfView + Time.deltaTime * 32;
            }
            if (UICanvasGroup.alpha != 0 && stamina >= 95.0f && !isStimulant && !isCharging){
                StartCoroutine(FadeAlpha(UICanvasGroup.alpha, 0.0f, 0.5f, 0.0f));
            }
            // if (!isCharging && lightCharge != 100){
            //     currentCharge = flashlightCharge;
            // StartCoroutine(rechargeFlashlight (currentCharge,  10f * flashlightCharge));
            // }
        }
   
    }


    ///////////////////////////Joysticks//////////////////////////////////////
    private void Rotate()
    {
        horizontalRotation = Input.GetAxis("Left Stick Horizontal") * OptionsManagerInputs.sensitivity; //turn

        if (Application.isEditor){ //this is here because the DS3 uses different input axes for the right stick
            horizontalCamRotation = Input.GetAxis("DS3Right Stick Horizontal") * OptionsManagerInputs.sensitivity; //flashlight l/r
            verticalCamRotation = Input.GetAxis("DS3Right Stick Vertical") * OptionsManagerInputs.sensitivity; //flashlight/look u/d
           
        }
        else {
            horizontalCamRotation = Input.GetAxis("Right Stick Horizontal") * OptionsManagerInputs.sensitivity; //flashlight l/r
            verticalCamRotation = Input.GetAxis("Right Stick Vertical") * OptionsManagerInputs.sensitivity; //flashlight/look u/d
        }
        if (lightMovement){
            transform.Rotate(0, horizontalRotation * lookSensitivity, 0);
            mapIndicator.transform.Rotate(0, horizontalRotation * lookSensitivity, 0);
            Camera.Rotate(verticalCamRotation*lookSensitivity/2,horizontalCamRotation*lookSensitivity/2,0);
            lightRig.transform.Rotate(0,-horizontalCamRotation*(lookSensitivity*2),verticalCamRotation*lookSensitivity);
            Vector3 currentLightRotation = lightRig.transform.localEulerAngles;
        if (currentLightRotation.y > 180) {
            currentLightRotation.y -= 360;
        }
        currentLightRotation.x = 0;
        currentLightRotation.y = Mathf.Clamp(currentLightRotation.y, 20, 120); //rain light left/right
        currentLightRotation.z = Mathf.Clamp(currentLightRotation.z, 142, 200); //rain light Up/down
        lightRig.transform.localRotation = Quaternion.Euler(currentLightRotation); 
        }

   
        
        Vector3 currentRotation = Camera.localEulerAngles;
       
        if (currentRotation.x > 180) currentRotation.x -= 360;
        if (currentRotation.y > 180) currentRotation.y -= 360;
        currentRotation.x = Mathf.Clamp(currentRotation.x, UpLimit, downLimit); //rain camera Up/down
        currentRotation.y = Mathf.Clamp(currentRotation.y, 83, 97); //rain camera left/right
        currentRotation.z = 0;

        

        //apply the rotations
        Camera.localRotation = Quaternion.Euler(currentRotation);
       
     
        if (animator.GetBool(IsRunning) == false && animator.GetBool(IsWalking) == false) {
            if (horizontalRotation == 0 ||verticalMove == 0){
                animator.SetBool(IsIdle, true);
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
            StartCoroutine(LerpCam(0.25f));

        }
        if (verticalMove != 0 || horizontalRotation !=0){
            walkStart = skinnedRenderer.material.GetFloat(CrossFade);
              
            if (animator.GetBool(IsWalking) == true){ 
                lerpRate = 0.55f;
                isWalking = true;
                if (walkStart == 0f){
                    StartCoroutine(WalkLerp(0, 1,  lerpRate));
                }
            }    
        }
        //apply gravity to player
        if (characterController.isGrounded) _verticalSpeed = 0;
        else _verticalSpeed -= gravity * Time.deltaTime;

        //apply forward/backward/gravity movement  
        var gravityMove = new Vector3(0, _verticalSpeed, 0);  
        Vector3 move;
        if (lightMovement){
            move = transform.forward * -verticalMove + transform.right * 0;
        }
        else move = transform.forward * -verticalMove + transform.right * horizontalRotation;
        characterController.Move(speed * Time.deltaTime * move + gravityMove * Time.deltaTime);
        if (animator.GetBool(IsRunning) == false ) {
            animator.SetBool(IsWalking, verticalMove != 0 || horizontalRotation !=0);
            animator.SetBool(IsIdle, false);
            walkStart = skinnedRenderer.material.GetFloat(CrossFade);
              
            if (animator.GetBool(IsWalking) == true){ 
                lerpRate = 0.55f;
                if (walkStart == 0f){
                    StartCoroutine(WalkLerp(0, 1,  lerpRate));
                }
            }    

                
        } 
        if (!animator.GetBool(IsWalking) && !animator.GetBool(IsRunning)){
            animator.SetBool(IsIdle, verticalMove == 0);
            isWalking = false;
        }
         
    }

    private void Run()
    {
        if (stamina > 30f){ 
            // //Debug.Log("You're holding down run!");
            camObject.fieldOfView = camObject.fieldOfView + Time.deltaTime * 32; //zoom out
            if (animator.GetBool(IsRunning) == false  && animator.GetBool(IsGrab) == false &&  verticalMove != 0) {
                animator.SetBool(IsRunning, true);
                animator.SetBool(IsWalking, false);  
                lerpRate = 0.275f;     
                StartCoroutine(WalkLerp(0, 1, lerpRate));
            }
        }
        if (stamina <= 30f){ 
            // //Debug.Log("You're very tired!");
            camObject.fieldOfView = camObject.fieldOfView + Time.deltaTime * 32; //zoom out
            if (animator.GetBool(IsRunning) == true  && animator.GetBool(IsGrab) == false &&  verticalMove != 0) {
                animator.SetBool(IsRunning, false);
                animator.SetBool(IsWalking, true);  
                walkStart = skinnedRenderer.material.GetFloat(CrossFade);
                lerpRate = 0.55f;
                if (walkStart == 0f){
                    StartCoroutine(WalkLerp(0, 1,  lerpRate));
                }
            }
        }


        if (verticalMove == 0 && horizontalRotation == 0){
            animator.SetBool(IsRunning, false);
            animator.SetBool(IsWalking, false);
            animator.SetBool(IsIdle, true);
        }
        else if (verticalMove == 0 && horizontalRotation != 0){
            animator.SetBool(IsRunning, false);
            animator.SetBool(IsWalking, true);
            animator.SetBool(IsIdle, false);
        }
    }

    private void Focus()
    {
        ////Debug.Log("You're holding down the focus button!");
        camObject.fieldOfView = camObject.fieldOfView - Time.deltaTime * 32; //zoom in

        // animator.SetBool("isRunning", false);
        // animator.SetBool("isWalking", true); 

    }

    private void HealMe()
    {
        var StartHealth = InventoryManager.playerHealth/100;
        var endHealth = Mathf.Clamp01 (StartHealth + 0.5f);
        StartCoroutine(HealLerp(StartHealth, endHealth, 0.125f));
    }


///////////////////////////Enumerators//////////////////////////////////////
    private IEnumerator HealLerp (float StartValue, float endValue, float duration){
        float time = 0;
        while (time <= duration){
            var swap = Mathf.Lerp(StartValue, endValue, time/duration);
            skinnedRenderer.material.SetFloat(PainValue, swap);
            time += Time.deltaTime;
            yield return null;  
        }
        InventoryManager.playerHealth += 50;
        if (InventoryManager.playerHealth > 100){
            InventoryManager.playerHealth = 100;
        }
        print (InventoryManager.playerHealth); 
    }
    // run lerp for normal map
    private IEnumerator WalkLerp (float StartValue, float endValue, float duration){
        float time = 0;
        while (time <= duration){
            isLerping = true;
            float swap = Mathf.Lerp(StartValue, endValue, time/duration);
            skinnedRenderer.material.SetFloat(CrossFade, swap);
            time += Time.deltaTime;
            yield return null;  
        }
        skinnedRenderer.material.SetFloat(CrossFade, 1);
        time = 0;
        while (time <= duration){
            isLerping = true;
            float swap = Mathf.Lerp(endValue, StartValue, time/duration);
            skinnedRenderer.material.SetFloat(CrossFade, swap);
            time += Time.deltaTime;
            yield return null;  
        }
        skinnedRenderer.material.SetFloat(CrossFade, 0);
        isLerping = false; 
    }

    // private IEnumerator FadeLightDynamicInput (Color StartColor, Color endColor, float duration, float StartIntensity, float endIntensity, float StartAngle, float endAngle, float StartSize, float endSize){
    //     float time = 0;
    //     fadeDynamicRunning = true;
    //     var coneScale = lightShaft.transform.localScale;
    //     while (time <= duration){
    //         lightBeam.material.color = Color.Lerp(StartColor, new Color (endColor.r, endColor.g, endColor.b, endColor.a * flashlightCharge), time/(duration/50)); //lerp the colors from dark to light
    //         lightHaze.material.color = Color.Lerp(StartColor, new Color (endColor.r, endColor.g, endColor.b, endColor.a * flashlightCharge), time/(duration/50)); //lerp the colors from dark to light
    //         flashlight.intensity = Mathf.Lerp(StartIntensity ,endIntensity * flashlightCharge,time/(duration/50));
    //         flashlight.spotAngle = Mathf.Lerp(StartAngle,endAngle,time/(duration/50));
    //         vertlight.intensity = Mathf.Lerp(StartIntensity,endIntensity * flashlightCharge,time/(duration/50));
    //         vertlight.spotAngle = Mathf.Lerp(StartAngle,endAngle,time/(duration/50));
    //         var scalar = Mathf.Lerp(StartSize,endSize,time/(duration/50));
    //         lightShaft.transform.localScale = new Vector3(scalar, lightShaft.transform.localScale.y ,scalar);
    //         var currentCharge = flashlightCharge;
    //         lightChargeObject.GetComponent<Image>().fillAmount = Mathf.Lerp(currentCharge, 0, time/(duration));
    //         time += Time.deltaTime;
    //         yield return null;
    //     }
    //     fadeDynamicRunning = false;
    // }
    //
    // private IEnumerator FadeLightStaticInput (Color StartColor, Color endColor, float duration, float StartIntensity, float endIntensity, float StartAngle, float endAngle, float StartSize, float endSize){
    //     float time = 0;
    //     var coneScale = lightShaft.transform.localScale;
    //     while (time <= duration){
    //         lightBeam.material.color = Color.Lerp(StartColor, endColor, time/(duration/2)); //lerp the colors from dark to light
    //         lightHaze.material.color = Color.Lerp(StartColor, endColor, time/(duration/2)); //lerp the colors from dark to light
    //         flashlight.intensity = Mathf.Lerp(StartIntensity,endIntensity,time/(duration/2));
    //         flashlight.spotAngle = Mathf.Lerp(StartAngle,endAngle,time/(duration/2));
    //         vertlight.intensity = Mathf.Lerp(StartIntensity,endIntensity,time/(duration/2));
    //         vertlight.spotAngle = Mathf.Lerp(StartAngle,endAngle,time/(duration/2));
    //         var scalar = Mathf.Lerp(StartSize,endSize,time/(duration/2));
    //         lightShaft.transform.localScale = new Vector3(scalar, lightShaft.transform.localScale.y ,scalar);
    //         time += Time.deltaTime;
    //         yield return null;
    //     }
    // }

    private IEnumerator LerpCam(float duration){
        float time = 0;
        var localEulerAngles = Camera.localEulerAngles;
        var currentY = localEulerAngles.y;
        var currentX = localEulerAngles.x;
        var eulerAngles = lightRig.transform.localEulerAngles;
        var lightCurrentZ = eulerAngles.z;
        var lightCurrentY = eulerAngles.y;
       
        print("lerpCam");
        
        while (time < duration){
            var newY = Mathf.Lerp(currentY, 90, time/duration);
            var newX = Mathf.Lerp(currentX, 10, time/duration);
            var newYL = Mathf.Lerp(lightCurrentY, 75, time/duration);
            var newZL = Mathf.Lerp(lightCurrentZ, 184, time/duration);

            if (newY > 89.95 && newY < 90.05) newY = 90;
            if (newX > 9.95f && newX < 10.05f) newX = 10;
            if (newYL > 74.95f && newYL < 75.05f) newYL = 75;
            if (newZL > 183.95f && newZL < 184.05f) newZL = 184;

            Vector3 newRotation = new Vector3(newX, newY, Camera.localEulerAngles.z); 
            Vector3 newLightRotation = new Vector3(lightRig.transform.localEulerAngles.x, newYL, newZL);

            Camera.localRotation = Quaternion.Euler(newRotation);
            lightRig.transform.localRotation = Quaternion.Euler(newLightRotation);
           
            time += Time.deltaTime;
            yield return null;
        }
        if (verticalMove != 0 || horizontalRotation !=0){
            walkStart = skinnedRenderer.material.GetFloat(CrossFade);
            if (walkStart == 0f){   
                StartCoroutine(WalkLerp(0, 1,  lerpRate));
            }    
        }
    }

    private IEnumerator Fade(RawImage fadeObject, float StartValue, float endValue, float duration){
        var time = 0.0f;
        while (time < duration){
            fadeObject.color = Color.Lerp (new Color(1,1,1,StartValue), new Color(1,1,1,endValue), time/duration);
            time += Time.deltaTime;
            yield return null;
        }
        fadeObject.color = new Color (1,1,1,endValue);
        switch (isPaused)
        {
            case true:
                isPaused = false;
                break;
            case false:
                isPaused = true;
                break;
        }
        switch (isMap)
        {
            case true:
                isMap = false;
                mapCamera.SetActive(false);
                break;
            case false:
                isMap = true;
                break;
        }
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

    private IEnumerator CountdownStimulant(float StartVal, float endVal, float duration){
        if (Camera.GetComponent<Kino.Bokeh>().focalLength <= 0.90f){
            StartCoroutine(LerpFocalLength (0.090f, 0.125f, 1.0f, 0.15f, 2.0f));
        }
        float time = 0.0f;
        while (time < duration){
            cooldownValue = Mathf.Lerp (StartVal, endVal, time/duration);
            time += Time.deltaTime;
            yield return null;
        }
        cooldownValue = 0;
        cooldownValue = stimCooldown;
        StartCoroutine(LerpFocalLength(0.125f, 0.090f, 0.5f, 0.20f, 2.0f));
        if (!Input.GetButton("RTRIG")){
            StartCoroutine(RechargeStamina(((100-stamina)), stamina));
        }
        isStimulant = false;           
    }

    private IEnumerator RechargeStamina(float duration, float currentStamina){
        var time = 0.0f;
        //yield return new WaitForSeconds(2f); //delay before charge happens
        while (time < duration){
            if (stamina > 97){
                stamina = 100;
            }
            currentStamina = Mathf.Lerp (currentStamina, 100f, time / (duration * 10f) );
            staminaObject.GetComponent<Image>().fillAmount = Mathf.Lerp((currentStamina/100), 1, time / (duration * 10f));
            time += Time.deltaTime;
            stamina = currentStamina;
            yield return null;
        }
        stamina = 100f;
    }

//     private IEnumerator RechargeFlashlight(float currentCharge, float duration){
//         float time = 0.0f;
//         isCharging = true;
//         //yield return new WaitForSeconds(2f); //delay before charge happens
//         while (time < duration){
//             // if (lightChargeObject.GetComponent<Image>().fillAmount > 0.97f){
//             //     flashlightCharge = 1;
//             // }
// //           FlashlightController.lightCharge= Mathf.Lerp (currentCharge, 100f, time / duration );
//             lightChargeObject.GetComponent<Image>().fillAmount = Mathf.Lerp(currentCharge, 1, time / duration);
//             time += Time.deltaTime;
//             yield return null;
//         }
//        FlashlightController.lightCharge= 100;
//         lightChargeObject.GetComponent<Image>().fillAmount = 1;
//         isCharging = false;
//        FlashlightController.FlashlightDisabled = false;
//   
//         var currentIntensity = flashlight.intensity;
//         var currentAngle = flashlight.spotAngle;
//         var currentSize = lightShaft.transform.localScale.x;
//         var currentColor = lightBeam.material.color;
//         StartCoroutine(FadeLightStaticInput(currentColor, colorStart, 0.25f, currentIntensity, 5, 
//             currentAngle, 40, currentSize, 0.08f));
//         StartCoroutine(WalkLerp(0, 1,  lerpRate));
//             
//     }
    public static IEnumerator ButtonDelayTimer(float delay){
        yield return new WaitForSeconds(delay);
        delayButton = false;
    }

    private IEnumerator QuickTurn(Vector3 playerRotation, Vector3 fullTurn, float duration){
        var time = 0.0f;
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

    private IEnumerator LerpFocalLength (float StartValue, float endValue, float endBloom, float endThreshold, float duration){
        var time = 0.0f;
        while (time < duration){
            //float currentBloom = Camera.GetComponent<FastMobileBloom>().intensity;
            // float currentThreshold = Camera.GetComponent<FastMobileBloom>().threshold;
            var currentValue = Mathf.Lerp (StartValue, endValue, time/(duration/4));
            //float bloomIntensity = Mathf.Lerp (currentBloom, endBloom, time/(duration/2));
            //float bloomThreshold = Mathf.Lerp (currentThreshold, endThreshold, time/duration);
            Camera.GetComponent<Kino.Bokeh>().focalLength = currentValue;
            //Camera.GetComponent<FastMobileBloom>().intensity = bloomIntensity;
            // Camera.GetComponent<FastMobileBloom>().threshold = bloomThreshold;
            time += Time.deltaTime;
            yield return null;
        }
        Camera.GetComponent<Kino.Bokeh>().focalLength = endValue;
    }

    private IEnumerator FadeScreen(float targetValue, float duration) {
        var StartValue = pausePanel.alpha;
        float fadeTime = 0;
        //fade out the loadscreen canvas groUp
        while (fadeTime < duration)
        {
            pausePanel.alpha = Mathf.Lerp(StartValue, targetValue, fadeTime / duration);
            fadeTime += Time.deltaTime;
            yield return null;
        }
        pausePanel.alpha = targetValue;
    }
}