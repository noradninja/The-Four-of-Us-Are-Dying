using UnityEngine;
using UnityEngine.Rendering;

// [ExecuteInEditMode]
//simple class to disable normal maps when the player is >= a specified distance
//I set it just beyond the distance of the flashlight, because you won't see them that far away anyway
public class Shader_LOD_Enumerator : MonoBehaviour
{

	public GameObject player;
	public float[] LOD_distance;
	public bool enableShaderLOD = true;
	public bool enableCulling = true;
	private float distance;
	private Vector3 viewPos;
	private Vector3 thisPos;
	private Vector3 playerPos;
	private int tick = 0;
	private Renderer thisRenderer;
	private Camera mainCam;

	private void Start()
	{
		thisRenderer = this.GetComponent<Renderer>();
		mainCam = Camera.main;
	}
	// Update is called once per frame
	//TODO: write this so its a subscriber fired event so we don't need this logic running on every object, cause that's fucking smart
	private void Update()
	{
		//is it an odd frame
		if (tick != 2)
			tick++;
		else //it's an even frame
		{
			HalfUpdate();
			tick = 0;
		}
	}

	private void HalfUpdate()
	{
		thisPos = new Vector3(this.transform.position.x, 0f, this.transform.position.z);
		playerPos = new Vector3(player.transform.position.x, 0f, player.transform.position.z);
		distance = Vector3.Distance(thisPos, playerPos);//how far are we from the player
		viewPos = mainCam.WorldToViewportPoint(this.transform.position);//where are we located in relation to the camera frustrum
		if (enableShaderLOD) //check if we enabled this; if not skip to culling
		{
			if (distance == LOD_distance[0]) //first LOD 
			{
				thisRenderer.sharedMaterial.DisableKeyword("_NORMALMAP"); //drop normalmap
				thisRenderer.shadowCastingMode = ShadowCastingMode.Off; //disable shadows
				Resources.UnloadUnusedAssets(); //unload normal map
			}
			if (distance == LOD_distance[1]) //second LOD
			{
				//drop MOAR map
				thisRenderer.sharedMaterial.DisableKeyword("_METALLICGLOSSMAP"); 
				thisRenderer.sharedMaterial.DisableKeyword("_SPECGLOSSMAP");
				Resources.UnloadUnusedAssets(); //unload MOAR map
			}

			if (distance < LOD_distance[1] && distance > LOD_distance[0]) //transition back to second LOD
			{
				//enable MOAR map keywords
				thisRenderer.sharedMaterial.EnableKeyword("_METALLICGLOSSMAP"); 
				thisRenderer.sharedMaterial.EnableKeyword("_SPECGLOSSMAP"); 
			}

			if (distance < LOD_distance[0]) //no LOD
			{
				thisRenderer.sharedMaterial.EnableKeyword("_NORMALMAP"); //enable normal map
				thisRenderer.shadowCastingMode = ShadowCastingMode.On; //enable shadows
			}
		}
		//we are implementing fonrt/back frustrum culling ourselves here,
		//because Unity's occlusion culling method is RAM hungry
		//if the object is past the far clip plane or behind us
		// disable it's renderer so we arent even considering sending it to the GPU
		if (!enableCulling) return;
		if (distance >= mainCam.farClipPlane || viewPos.z < -0.25f)
		{
			thisRenderer.enabled = false;
		}
		else thisRenderer.enabled = true;
	}
	
}
