using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.UI;
using UnityEngine.PSVita;
public class BackTouchTester : MonoBehaviour
{
	public Text touchTextA;
	public Text touchTextB;
	public Text touchTextC;
	public Text touchTextD;

	// Use this for initialization
	void Start () {
		VitaInputManager.Instance.GetSecondaryTouch += OnGetSecondaryTouch; //subscribe to event
		
	}

	//action to be performed on back touch event
	private void OnGetSecondaryTouch(float[,] touchData, 
                                 bool l1, int l1ID,
                                 bool l2, int l2ID,
                                 bool r1, int r1ID,
                                 bool r2, int r2ID) 
    {
        // Get/pack data for touches
        // Row 0: ID, Row 1: X position, Row 2: Y position
        //Column 0-3: touch 0-3
        Vector3[] touches = new Vector3[4]
        {
            new Vector3(touchData[1, 0], touchData[2, 0], touchData[0, 0]),
            new Vector3(touchData[1, 1], touchData[2, 1], touchData[0, 1]),
            new Vector3(touchData[1, 2], touchData[2, 2], touchData[0, 2]),
            new Vector3(touchData[1, 3], touchData[2, 3], touchData[0, 3])
        };

        // Variables to store touch locations for each button
        Vector2 l1Position = Vector2.zero;
        Vector2 l2Position = Vector2.zero;
        Vector2 r1Position = Vector2.zero;
        Vector2 r2Position = Vector2.zero;

        // Find the touch that matches each button's ID
        foreach (Vector3 touch in touches)
        {
            if (touch.z == l1ID)
                l1Position = new Vector2(touch.x, touch.y);
            if (touch.z == l2ID)
                l2Position = new Vector2(touch.x, touch.y);
            if (touch.z == r1ID)
                r1Position = new Vector2(touch.x, touch.y);
            if (touch.z == r2ID)
                r2Position = new Vector2(touch.x, touch.y);
        }

        // Display touch information
        if (l1)
        {
            touchTextA.color = Color.green;
            touchTextA.text = $"TL1 pressed by finger {l1ID} at ({l1Position.x}, {l1Position.y})";
        }
        else
        {
            touchTextA.color = Color.red;
            touchTextA.text = "TL1 NOT pressed";
        }

        if (l2)
        {
            touchTextB.color = Color.green;
            touchTextB.text = $"TL2 pressed by finger {l2ID} at ({l2Position.x}, {l2Position.y})";
        }
        else
        {
            touchTextB.color = Color.red;
            touchTextB.text = "TL2 NOT pressed";
        }

        if (r1)
        {
            touchTextC.color = Color.green;
            touchTextC.text = $"TR1 pressed by finger {r1ID} at ({r1Position.x}, {r1Position.y})";
        }
        else
        {
            touchTextC.color = Color.red;
            touchTextC.text = "TR1 NOT pressed";
        }

        if (r2)
        {
            touchTextD.color = Color.green;
            touchTextD.text = $"TR2 pressed by finger {r2ID} at ({r2Position.x}, {r2Position.y})";
        }
        else
        {
            touchTextD.color = Color.red;
            touchTextD.text = "TR2 NOT pressed";
        }
    }
}