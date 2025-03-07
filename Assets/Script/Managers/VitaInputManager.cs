using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.PSVita;


public class VitaInputManager : MonoBehaviour {

	#region SingletonSetup
	
		private static VitaInputManager instance;

		public static VitaInputManager Instance
		{
			get
			{
				if (!instance)
				{
					instance = GameObject.FindObjectOfType(typeof(VitaInputManager)) as VitaInputManager;
					if (!instance)
					{
						VitaDebug.Log("No active VitaInputManager script on any GameObject");
					}
				}

				return instance;
			}
		}
	
	#endregion

	#region Delegates

		public delegate void FaceButtonEvent();

		public delegate void DpadButtonEvent();

		public delegate void TriggerButtonEvent();

		public delegate void StartSelectEvent();

		public delegate void LeftStickEvent(float horizontal, float vertical);

		public delegate void RightStickEvent(float horizontal, float vertical);

		public delegate void RearTouchPadEvent(float [,] touchData, bool tl1,
																	bool tl2,
																	bool tr1,
																	bool tr2,
																	int r2id,
																	int r3id,
																	int l2id,
																	int l3id);
	#endregion
	
	//events

	#region FaceButtonEvents
	
		//cross events
		public event FaceButtonEvent OnCross;
		public event FaceButtonEvent OnCrossDown;
		public event FaceButtonEvent OnCrossUp;
		//square events
		public event FaceButtonEvent OnSquare;
		public event FaceButtonEvent OnSquareDown;
		public event FaceButtonEvent OnSquareUp;
		//triangle events
		public event FaceButtonEvent OnTriangle;
		public event FaceButtonEvent OnTriangleDown;
		public event FaceButtonEvent OnTriangleUp;
		//circle events
		public event FaceButtonEvent OnCircle;
		public event FaceButtonEvent OnCircleDown;
		public event FaceButtonEvent OnCircleUp;
	
	#endregion

	#region DPadEvents

		public event DpadButtonEvent OnDpadUp;
		public event DpadButtonEvent OnDpadDown;
		public event DpadButtonEvent OnDpadLeft;
		public event DpadButtonEvent OnDpadRight;

	#endregion

	#region TriggerEvents

		//L Trigger events
		public event TriggerButtonEvent OnLTrig;
		public event TriggerButtonEvent OnLTrigDown;
		public event TriggerButtonEvent OnLTrigUp;
		//R Trigger events
		public event TriggerButtonEvent OnRTrig;
		public event TriggerButtonEvent OnRTrigDown;
		public event TriggerButtonEvent OnRTrigUp;
	
	#endregion

	#region StartSelectEvents

		public event StartSelectEvent OnStart;
		public event StartSelectEvent OnSelect;

	#endregion

	#region JoystickEvents

		public event LeftStickEvent OnLeftStick;
		public event RightStickEvent OnRightStick;

	#endregion
	
	#region RearTouchpadEvents
		public event RearTouchPadEvent GetSecondaryTouch;

	#endregion
	
	private int previousBackTouchCount = 0; // Tracks the previous frame's touch count
	private int currentBackTouchCount = 0; // Current frame's touch count
	//bool flags for back pad triggers
	private bool TR2;
	private bool TR3;
	private bool TL2;
	private bool TL3;
	
	// Here, we are just checking conditions and invoking events to pass state along
	void Update () {
		
		#region Cross
		
			if (Input.GetButton("Cross"))
			{
				if (OnCross != null)
				{
					OnCross();
				}
			}
			if (Input.GetButtonDown("Cross"))
			{
				if (OnCrossDown != null)
				{
					OnCrossDown();
				}
			}
			if (Input.GetButtonUp("Cross"))
			{
				if (OnCrossUp != null)
				{
					OnCrossUp();
				}
			}
			
		#endregion
		
		#region Square
			
			if (Input.GetButton("Square"))
			{
				if (OnSquare != null)
				{
					OnSquare();
				}
			}
			if (Input.GetButtonDown("Square"))
			{
				if (OnSquareDown != null)
				{
					OnSquareDown();
				}
			}
			if (Input.GetButtonUp("Square"))
			{
				if (OnCrossUp != null)
				{
					OnCrossUp();
				}
			}
			
		#endregion
		
		#region Triangle
			
			if (Input.GetButton("Triangle"))
			{
				if (OnTriangle != null)
				{
					OnTriangle();
				}
			}
			if (Input.GetButtonDown("Triangle"))
			{
				if (OnTriangleDown != null)
				{
					OnTriangleDown();
				}
			}
			if (Input.GetButtonUp("Triangle"))
			{
				if (OnTriangleUp != null)
				{
					OnTriangleUp();
				}
			}
			
		#endregion
		
		#region Circle
			
			if (Input.GetButton("Circle"))
			{
				if (OnCircle != null)
				{
					OnCircle();
				}
			}
			if (Input.GetButtonDown("Circle"))
			{
				if (OnCircleDown != null)
				{
					OnCircleDown();
				}
			}
			if (Input.GetButtonUp("Circle"))
			{
				if (OnCircleUp != null)
				{
					OnCircleUp();
				}
			}
			
		#endregion
		
		#region Dpad
			//add code here
			if (Input.GetButtonDown("Up"))
			{
				if (OnDpadUp != null)
				{
					OnDpadUp();
				}
			}
			if (Input.GetButtonDown("Down"))
			{
				if (OnDpadDown != null)
				{
					OnDpadDown();
				}
			}
			if (Input.GetButtonDown("Left"))
			{
				if (OnDpadLeft != null)
				{
					OnDpadLeft();
				}
			}
			if (Input.GetButtonDown("Right"))
			{
				if (OnDpadRight != null)
				{
					OnDpadRight();
				}
			}
		#endregion

		#region Triggers

			//L Trigger
			if (Input.GetButton("LTRIG"))
			{
				if (OnLTrig != null)
				{
					OnLTrig();
				}
			}
			if (Input.GetButtonDown("LTRIG"))
			{
				if (OnLTrigDown != null)
				{
					OnLTrigDown();
				}
			}
			if (Input.GetButtonUp("LTRIG"))
			{
				if (OnLTrigUp != null)
				{
					OnLTrigUp();
				}
			}
			//R Trigger
			if (Input.GetButton("RTRIG"))
			{
				if (OnRTrig != null)
				{
					OnRTrig();
				}
			}
			if (Input.GetButtonDown("RTRIG"))
			{
				if (OnRTrigDown != null)
				{
					OnRTrigDown();
				}
			}
			if (Input.GetButtonUp("RTRIG"))
			{
				if (OnRTrigUp != null)
				{
					OnRTrigUp();
				}
			}

		#endregion

		#region StartSelect

			if (Input.GetButtonDown("Start"))
			{
				if (OnStart != null)
				{
					OnStart();
				}
			}
			if (Input.GetButtonDown("Select"))
			{
				if (OnSelect != null)
				{
					OnSelect();
				}	
			}

		#endregion

		#region Joysticks

			if (OnLeftStick != null)
			{
				OnLeftStick(Input.GetAxis("Left Stick Horizontal"),
								Input.GetAxis("Left Stick Vertical"));
			}
			if (OnRightStick != null)
			{
				OnRightStick(Input.GetAxis("Right Stick Horizontal"),
								Input.GetAxis("Right Stick Vertical"));
			}

		#endregion

		#region RearTouches

		if (Application.platform == RuntimePlatform.PSP2) // PSV/PSTV only 
		{
		    currentBackTouchCount = PSVitaInput.touchesSecondary.Length;

		    // Trigger only if touch count increases or decreases, but not when it's zero or unchanged
		    if (currentBackTouchCount != previousBackTouchCount)
		    {
		        float[,] dataMatrix = new float[3, 4]; // 3 rows: Finger ID, X, Y
		        bool foundTL2 = false, foundTL3 = false, foundTR2 = false, foundTR3 = false; // Track active touch presence
		        int TL2ID = 255, TL3ID = 255, TR2ID = 255, TR3ID = 255; //initialize with OOB values
		        for (int t = 0; t < currentBackTouchCount && t < 4; t++) // Limit to 4 touches
		        {
		            Touch currentTouch = PSVitaInput.GetSecondaryTouch(t);

		            // Store touch data in the matrix
		            dataMatrix[0, t] = currentTouch.fingerId; // Row 0: Touch ID
		            dataMatrix[1, t] = currentTouch.position.x; // Row 1: X positions
		            dataMatrix[2, t] = currentTouch.position.y; // Row 2: Y positions

		            float x = currentTouch.position.x;
		            float y = currentTouch.position.y;

		            // Check touch positions and update tracking flags
		            if (x >= 0 && x <= 320 && y >= 184 && y <= 368) // TL2, upper left
		            {
		                foundTL2 = true;
		                TL2ID = currentTouch.fingerId;
		            }

		            if (x >= 0 && x <= 320 && y >= 0 && y <= 184) // TL3, lower left
		            {
		                foundTL3 = true;
		                TL3ID = currentTouch.fingerId;
		            }

		            if (x >= 320 && x <= 640 && y >= 184 && y <= 368) // TR2, upper right
		            {
		                foundTR2 = true;
		                TR2ID = currentTouch.fingerId;
		            }

		            if (x >= 320 && x <= 640 && y >= 0 && y <= 184) // TR3, lower right
		            {
		                foundTR3 = true;
		                TR3ID = currentTouch.fingerId;
		            }
		        }

		        // Update boolean states only if there is a change, reset ID to OOB value
		        if (!foundTL2)
		        {
			        TL2 = false;
			        TL2ID = 255;
		        }

		        if (!foundTL3)
		        {
			        TL3 = false;
			        TL3ID = 255;
		        }

		        if (!foundTR2)
		        {
			        TR2 = false;
			        TR2ID = 255;
		        }

		        if (!foundTR3)
		        {
			        TR3 = false;
			        TR3ID = 255;
		        }

		        // If at least one touch is in the region, set it to true
		        if (foundTL2) TL2 = true;
		        if (foundTL3) TL3 = true;
		        if (foundTR2) TR2 = true;
		        if (foundTR3) TR3 = true;

		        // Invoke only when needed
		        if (GetSecondaryTouch != null)
		        {
		            GetSecondaryTouch(dataMatrix, TL2,  
												  TL3,  
												  TR2,
												  TR3, 
												  TR2ID,
												  TR3ID,
												  TL2ID,
												  TL3ID); // Push data to subscribers
		        }
		    }

		    // Update previous touch count for the next frame
		    previousBackTouchCount = currentBackTouchCount;
		}
		#endregion
	}
}
