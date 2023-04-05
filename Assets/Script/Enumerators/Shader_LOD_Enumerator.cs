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
	public bool isFoliage;
	public bool enableCulling = true;
	public Material replacementMaterial;
	public Texture albedoTex;
	public Texture MOARTex;
	private Material originalMaterial;
	public float distance;
	private Vector3 viewPos;
	private Vector3 thisPos;
	private Vector3 playerPos;
	public static int tick = 0;
	private Renderer thisRenderer;
	private Camera mainCam;

	private void Start()
	{
		//get needed components
		thisRenderer = this.GetComponent<Renderer>();
		mainCam = Camera.main;
		originalMaterial = thisRenderer.sharedMaterial;
		albedoTex = originalMaterial.mainTexture;
		
		//assign materials if not assigned already, and textures for later use
		if (isFoliage)//grab the textures we need from the old mat, disable leaf wiggle
		{
			if (replacementMaterial == null)
			{
				replacementMaterial = new Material(Shader.Find("Vita/Lightmapped Vertlit Wind Foliage"));
			}

			MOARTex = originalMaterial.GetTexture("_MetallicGlossMap");
			replacementMaterial.SetTexture("_MOAR", MOARTex);
			replacementMaterial.SetFloat("_LeavesOn", 0);
			replacementMaterial.SetTextureScale("_MainTex", new Vector2(2,2));
			// replacementMaterial.SetColor("_Color", Color.grey);

		}
		else 
		{
			if (replacementMaterial == null)
				replacementMaterial = new Material(Shader.Find("Vita/Vertex_Lightmap"));
		}
		replacementMaterial.mainTexture = albedoTex;
		
	}

	// Update is called once per frame
	//TODO: write this so its a subscriber fired event so we don't need this logic running on every object, cause that's fucking smart
	private void Update()
	{
		// we only need to do *whatever* n times a frame, depending on refresh rate
		if (tick != 6)
			tick++;
		else 
		{
			TickUpdate();
			tick = 0;
		}
	}

	private void TickUpdate()
	{
		thisPos = this.transform.position;
		playerPos = player.transform.position;

		//viewPos = mainCam.WorldToViewportPoint(this.transform.position);//where are we located in relation to the camera frustrum
		//playerPos = new Vector3(viewPos.x, 0f, viewPos.z);
		
		//rewrite below with pythagoreas
		
		distance = Vector3.Distance(thisPos, playerPos);//how far are we from the player
		if (enableShaderLOD) //check if we enabled this; if not skip to culling
		{
			if (distance < LOD_distance[0]) //no LOD- enable all maps/shadowcasting
			{
				if (thisRenderer.sharedMaterial != originalMaterial) thisRenderer.sharedMaterial = originalMaterial;
				thisRenderer.sharedMaterial.EnableKeyword("_NORMALMAP");
				thisRenderer.shadowCastingMode = ShadowCastingMode.On; //enable shadows
			}
			
			if (distance >= LOD_distance[0] && distance <= LOD_distance[1]) //first LOD 
			{
				if (thisRenderer.sharedMaterial != originalMaterial) thisRenderer.sharedMaterial = originalMaterial;
				thisRenderer.sharedMaterial.DisableKeyword("_NORMALMAP"); //drop normalmap
				thisRenderer.shadowCastingMode = ShadowCastingMode.Off; //disable shadows
				//Resources.UnloadUnusedAssets(); //unload normal map
			}

			if (distance > LOD_distance[1]) //second LOD- fog shadow only
			{
				if (thisRenderer.sharedMaterial != replacementMaterial)
				{
					thisRenderer.sharedMaterial = replacementMaterial;
					if (thisRenderer.sharedMaterial == replacementMaterial)
						print("Material swapped on " + thisRenderer.name);
				}
				thisRenderer.shadowCastingMode = ShadowCastingMode.Off; //disable shadows
				//Resources.UnloadUnusedAssets(); //unload
			}
			// if (distance < 0)
			// {
			// 	if (thisRenderer.sharedMaterial != originalMaterial) thisRenderer.sharedMaterial = originalMaterial;
			// 	thisRenderer.sharedMaterial.DisableKeyword("_NORMALMAP"); //drop normalmap
			// 	thisRenderer.shadowCastingMode = ShadowCastingMode.Off; //disable shadows
			// 	//Resources.UnloadUnusedAssets(); //unload normal map
			// }

			// if (distance <= LOD_distance[1] && distance > LOD_distance[0]) //transition to first LOD- drop all secondary maps/shadowcasting
			// {
			// 	if (thisRenderer.sharedMaterial != originalMaterial) thisRenderer.sharedMaterial = originalMaterial;
			// 	thisRenderer.sharedMaterial.DisableKeyword("_NORMALMAP"); //drop normalmap
			// 	thisRenderer.shadowCastingMode = ShadowCastingMode.Off; //disable shadows
			// 	//disable MOAR map keywords
			// 	thisRenderer.sharedMaterial.DisableKeyword("_METALLICGLOSSMAP"); 
			// 	thisRenderer.sharedMaterial.DisableKeyword("_SPECGLOSSMAP"); 
			// 	Resources.UnloadUnusedAssets(); //unload
			// }
		}
		//we are implementing fonrt/back frustrum culling ourselves here,
		//because Unity's occlusion culling method is RAM hungry
		//if the object is past the far clip plane or behind us
		// disable it's renderer so we arent even considering sending it to the GPU
		// if (!enableCulling) return;
		// if (distance >= mainCam.farClipPlane || viewPos.z < -0.25f)
		// {
		// 	thisRenderer.enabled = false;
		// }
		// else thisRenderer.enabled = true;
	}
	
}
