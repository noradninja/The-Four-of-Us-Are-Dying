using UnityEngine;
using System.Collections;

[ExecuteInEditMode]
public class FXAA3_11_ConsoleEffect : MonoBehaviour{
	
	public float m_EdgeThresholdMin = 0.125f;
	public float m_EdgeThreshold = 0.25f;
	public float m_EdgeSharpness = 4.0f;
	public Material material;
	public Shader shader;

		void CreateMaterialIfNeeded()
	{
		if ( shader != null && shader.isSupported )
		{
			material = new Material( shader );
		}
		else
		{
			Debug.LogError( "FXAA is not supported on this device." );
			enabled = false;
			return;
		}
	}

	void Start()
	{
		CreateMaterialIfNeeded();
	}
    // Called by camera to apply image effect
    void OnRenderImage(RenderTexture source, RenderTexture destination)
    {
		// set the variables
		material.SetFloat("_EdgeThresholdMin" , m_EdgeThresholdMin);
		material.SetFloat("_EdgeThreshold" , m_EdgeThreshold);
		material.SetFloat("_EdgeSharpness" , m_EdgeSharpness);
		
		// and render
		Graphics.Blit(source, destination, material);
    }
}
