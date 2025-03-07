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
                                 bool l2,
                                 bool l3,
                                 bool r2,
                                 bool r3,
                                 int r2ID,
                                 int r3ID,
                                 int l2ID,
                                 int l3ID) 
    {
        // Get/pack data for touches
        // Row 0: ID, Row 1: X position, Row 2: Y position
        //Column 0-3: touch 0-3
        Vector3[] touches = new Vector3[4] //stored as [3] Vector3(x,y,ID)
        {
            new Vector3(touchData[1, 0], touchData[2, 0], touchData[0, 0]),
            new Vector3(touchData[1, 1], touchData[2, 1], touchData[0, 1]),
            new Vector3(touchData[1, 2], touchData[2, 2], touchData[0, 2]),
            new Vector3(touchData[1, 3], touchData[2, 3], touchData[0, 3])
        };

        // Variables to store touch locations for each button
        Vector2 l2Position = Vector2.zero;
        Vector2 l3Position = Vector2.zero;
        Vector2 r2Position = Vector2.zero;
        Vector2 r3Position = Vector2.zero;
        // Variables to store ID's
        // Find the touch that matches each button's ID
        foreach (Vector3 touch in touches)
        {
            if (Mathf.Approximately(touch.z, l2ID))
                l2Position = new Vector2(touch.x, touch.y);
            if (Mathf.Approximately(touch.z, l3ID))
                l3Position = new Vector2(touch.x, touch.y);
            if (Mathf.Approximately(touch.z, r2ID))
                r2Position = new Vector2(touch.x, touch.y);
            if (Mathf.Approximately(touch.z, r3ID))
                r3Position = new Vector2(touch.x, touch.y);
        }

        // Display touch information
        if (l2)
        {
            touchTextA.color = Color.green;
            touchTextA.text = "L2 pressed at: " + l2Position.x + ", " + l2Position.y;
        }
        else
        {
            touchTextA.color = Color.gray;
            touchTextA.text = "";
        }

        if (l3)
        {
            touchTextB.color = Color.green;
            touchTextB.text = "L3 pressed at: " + l3Position.x + ", " + l3Position.y;
        }
        else
        {
            touchTextB.color = Color.gray;
            touchTextB.text = "";
        }

        if (r2)
        {
            touchTextC.color = Color.green;
            touchTextC.text = "R2 pressed at: " + r2Position.x + ", " + r2Position.y;
        }
        else
        {
            touchTextC.color = Color.gray;
            touchTextC.text = "";
        }

        if (r3)
        {
            touchTextD.color = Color.green;
            touchTextD.text = "R3 pressed at: " + r3Position.x + ", " + r3Position.y;
        }
        else
        {
            touchTextD.color = Color.gray;
            touchTextD.text = "";
        }
    }
}