using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class MapController : MonoBehaviour {
	
	public Camera mapCamera;
	public float minZoom;
	public float maxZoom;
	public  Vector3 pos;
	public GameObject mapArrow;
	public GameObject mapContainer;
	private Vector2 previousDistance = new Vector2(0,0);
    private Vector2 currentDistance = new Vector2(0,0);
    private Vector2 midPoint = new Vector2(0,0);
	private Vector2 ScreenSize;
    private Vector3 originalPos;

	// Use this for initialization
	void Start () {
	
	}
	
	// Update is called once per frame
	void Update () {
		
		// if (Input.touchCount==1 && Input.GetTouch(0).phase == TouchPhase.Moved){
		// 	//map pan, only works well with fixed map cam
			
        //     Touch touch = Input.GetTouch(0);    
        //     Vector3 diff = touch.deltaPosition;    
		// 	pos = new Vector3 ( mapCamera.transform.position.x + diff.y * 0.025f, 
		// 						mapCamera.transform.position.y, 
		// 						mapCamera.transform.position.z + diff.x * -0.025f );
        //     mapCamera.transform.position = pos;
        // }
        // // On double tap image will be set at original position and scale
        // else if(Input.touchCount==1 && Input.GetTouch(0).phase == TouchPhase.Began && Input.GetTouch(0).tapCount==2){
		// 		mapCamera.transform.position = new Vector3( mapArrow.transform.position.x, 
		// 													mapCamera.transform.position.y, 
		// 													mapArrow.transform.position.z );
		// }  

		//map zoom with arrow keys for testing
		if (Input.GetKey(KeyCode.LeftArrow)){
			if(mapCamera.orthographicSize < maxZoom){
				mapCamera.orthographicSize = Mathf.Lerp(mapCamera.orthographicSize, maxZoom, 0.125f);
				//keep apparent scale and position the same
				mapContainer.transform.localScale = Vector3.Lerp(mapContainer.transform.localScale,
													new Vector3(5.81875f, 5.81875f, 5.81875f), 0.125f);
				
			}
		}
		if (Input.GetKey(KeyCode.RightArrow)){
			if(mapCamera.orthographicSize > minZoom){
			mapCamera.orthographicSize = Mathf.Lerp(mapCamera.orthographicSize, minZoom, 0.125f);
			//keep apparent scale and position the same
			mapContainer.transform.localScale = Vector3.Lerp(mapContainer.transform.localScale,
												new Vector3(2.27f, 2.27f ,2.27f), 0.125f);
			
			}
		}

		//map zoom with touchscreen
		if (Input.touchCount==2 && Input.GetTouch(0).phase == TouchPhase.Moved && Input.GetTouch(1).phase == TouchPhase.Moved){
			midPoint = new Vector2(((Input.GetTouch(0).position.x + Input.GetTouch(1).position.x)/2), 
									((Input.GetTouch(0).position.y + Input.GetTouch(1).position.y)/2));
			midPoint = Camera.main.ScreenToWorldPoint(midPoint);
			
			currentDistance = Input.GetTouch(0).position - Input.GetTouch(1).position; //current distance between finger touches
			previousDistance = ((Input.GetTouch(0).position - Input.GetTouch(0).deltaPosition) - 
								(Input.GetTouch(1).position - Input.GetTouch(1).deltaPosition)); //difference in previous locations using delta positions
			float touchDelta = currentDistance.magnitude - previousDistance.magnitude;
			
			// Zoom out
			if(touchDelta<0)
			{
				if(mapCamera.orthographicSize <= maxZoom){
				mapCamera.orthographicSize = Mathf.Lerp(mapCamera.orthographicSize, maxZoom, 0.125f);
				//keep apparent scale and position the same
				mapContainer.transform.localScale = Vector3.Lerp(mapContainer.transform.localScale,
													new Vector3(5.9125f, 5.9125f, 5.9125f), 0.125f);
											
				}
			}
			//Zoom in
			else if(touchDelta>0)
			{
				if(mapCamera.orthographicSize >= minZoom){
				mapCamera.orthographicSize = Mathf.Lerp(mapCamera.orthographicSize, minZoom, 0.125f);
				//keep apparent scale and position the same
				mapContainer.transform.localScale = Vector3.Lerp(mapContainer.transform.localScale,
													new Vector3(2.27f, 2.27f ,2.27f), 0.125f);
				
				}
			}
		}
	}
}

