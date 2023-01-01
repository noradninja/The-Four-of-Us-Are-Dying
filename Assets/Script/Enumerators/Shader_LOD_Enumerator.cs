using UnityEngine;
using UnityEngine.Rendering;

/* Please note- the Shader LOD only works with my custom Vita Standard shader. You can change the shader keywords
 that are enabled/disabled to make it work with other shaders */
public class Shader_LOD_Enumerator : MonoBehaviour
{

	[SerializeField] GameObject player;
	[SerializeField] int updateIntervalRate = 7;
	[SerializeField] float[] LOD_distance = new float[3]; //set up 3 floats- LOD1, LOD2, cull
	[SerializeField] bool enableShaderLOD = false;
	[SerializeField] bool enableMeshLOD = false;
	[SerializeField] MeshRenderer LOD0;
	[SerializeField] MeshRenderer LOD1;
	[SerializeField] MeshRenderer LOD2;
	
	private float distance;
	private Vector3 thisPos;
	private Vector3 playerPos;
	private Renderer thisRenderer;
	private Camera mainCam;
	private bool LOD2Enabled = false;
	private bool LOD1Enabled = false;
	private bool LOD0Enabled = false;
	
	public static int tick = 0;

	private void Start()
	{
		thisRenderer = this.GetComponent<Renderer>();
		mainCam = Camera.main;
	}
	//TODO: write TickUpdate so its a subscriber fired event so we don't need this logic running on every object, cause that's fucking smart
	private void Update()
	{
		// we only need to do *whatever* FPS/updateIntervalRate times a frame
		if (tick != updateIntervalRate)
			tick++;
		else 
		{
			TickUpdate();
			tick = 0;
		}
	}
	private void Reset() //unused, likely to be removed since it would require renaming all your LODs
	{
 
		if (!mainCam)
			mainCam = Camera.main;
 
		if (!LOD0)
			LOD0 = GetChildByName.getChildGameObject(gameObject, "LOD0").GetComponent<MeshRenderer>();
 
		if (!LOD1)
			LOD1 = GetChildByName.getChildGameObject(gameObject, "LOD1").GetComponent<MeshRenderer>();
 
		if (!LOD2)
			LOD2 = GetChildByName.getChildGameObject(gameObject, "LOD2").GetComponent<MeshRenderer>();
 
		SetLOD();
 
	}
	//enable/disable mesh LOD's
	private void SetLOD()
	{
		if (distance <= LOD_distance[0]) //first LOD
		{
			DisableAll();
			EnableLOD0();
		}
		if (distance > LOD_distance[0] && distance <= LOD_distance[1]) //second LOD
		{
			DisableAll();
			EnableLOD1();
		}
		if (distance > LOD_distance[1] && distance <= LOD_distance[2]) //third LOD
		{
			DisableAll();
			EnableLOD2();
		}
		if (distance > LOD_distance[2]) //disable beyond 2x world chunk distance
		{
			DisableAll();
		}
	}

	private void SetShaderLOD()
	{
		if (distance == LOD_distance[0]) //first LOD 
		{
			ShaderLOD1();
		}
		if (distance == LOD_distance[1]) //second LOD
		{
			ShaderLOD2();
		}

		if (distance < LOD_distance[1] && distance > LOD_distance[0]) //transition back to second LOD
		{
			ShaderLODTransition(); 
		}

		if (distance < LOD_distance[0]) //no LOD
		{
			ShadernoLOD();
		}
	}
	//update mesh and shader LOD's based on tick value so we arent doing this every frame
	private void TickUpdate()
	{
		thisPos = new Vector3(this.transform.position.x, 0f, this.transform.position.z);
		playerPos = new Vector3(player.transform.position.x, 0f, player.transform.position.z);
		distance = Vector3.Distance(playerPos, thisPos);//how far are we from the player

		if (enableShaderLOD) //check if we enabled this; if not skip to culling
		{
			SetShaderLOD();
		}

		if (enableMeshLOD)
		{
			SetLOD();
		}
	}
	
	//methods for mesh LOD's
	private void EnableLOD2()
	{
		LOD2.enabled = true;
	}
 
	private void EnableLOD1()
	{
		LOD1.enabled = true;
	}
 
	private void EnableLOD0()
	{
		LOD0.enabled = true;
	}
 
	void DisableAll()
	{
		LOD0.enabled = false;
		LOD1.enabled = false;
		LOD2.enabled = false;
	}
	
	//methods for shader LOD's

	private void ShadernoLOD()
	{
		thisRenderer.sharedMaterial.EnableKeyword("_NORMALMAP"); //enable normal map
		thisRenderer.shadowCastingMode = ShadowCastingMode.On; //enable shadows
	}

	private void ShaderLOD1()
	{
		thisRenderer.sharedMaterial.DisableKeyword("_NORMALMAP"); //drop normalmap
		thisRenderer.shadowCastingMode = ShadowCastingMode.Off; //disable shadows
		Resources.UnloadUnusedAssets(); //unload normal map
	}

	private void ShaderLOD2()
	{
		//drop MOAR map
		thisRenderer.sharedMaterial.DisableKeyword("_METALLICGLOSSMAP"); 
		thisRenderer.sharedMaterial.DisableKeyword("_SPECGLOSSMAP");
		Resources.UnloadUnusedAssets(); //unload MOAR map
	}

	private void ShaderLODTransition()
	{
		//enable MOAR map keywords
		thisRenderer.sharedMaterial.EnableKeyword("_METALLICGLOSSMAP"); 
		thisRenderer.sharedMaterial.EnableKeyword("_SPECGLOSSMAP");
	}
}
public class GetChildByName : MonoBehaviour
{
	public static GameObject getChildGameObject(GameObject gameObjectToCheck, string nameToLookFor)
	{
		Transform[] ts = gameObjectToCheck.transform.GetComponentsInChildren<Transform>();
		foreach (Transform t in ts) if (t.gameObject.name == nameToLookFor) return t.gameObject;
		return null;
	} 
}

