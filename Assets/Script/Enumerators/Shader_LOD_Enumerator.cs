using System;
using UnityEngine;
using UnityEngine.Rendering;

public class Shader_LOD_Enumerator : MonoBehaviour
{

    public enum LODState
    {
        Full,
        Reduced,
        VertexOnly
    }

    public GameObject player;
    public float[] LOD_Distance;
    public bool enableShaderLOD = true;
    public bool isFoliage;
    public Material replacementMaterial;
    public float distance;

    [SerializeField] private int tick;

    [SerializeField] private Texture albedoTex;

    [SerializeField] private Texture MOARTex;

    [SerializeField] private Material originalMaterial;

    public bool shadowCaster;

    public LODState shaderLOD;
    private Vector2 playerPos;
    private Vector2 thisPos;
    private Renderer thisRenderer;
    private Vector3 viewPos;

    private void Awake()
    {
        thisRenderer = this.GetComponent<Renderer>();
        shadowCaster = thisRenderer.shadowCastingMode == ShadowCastingMode.On;
    }

    private void Start()
    {
        tick = 0;
        //get needed components
        originalMaterial = thisRenderer.sharedMaterial;
        albedoTex = originalMaterial.mainTexture;
        MOARTex = originalMaterial.GetTexture("_MetallicGlossMap");

        //assign materials if not assigned already, and textures for later use
        if (isFoliage) //grab the textures we need from the old mat, disable leaf wiggle
        {
            if (replacementMaterial != null) return;
            replacementMaterial = new Material(Shader.Find("Vita/Lightmapped Vertlit Wind Foliage"));
            replacementMaterial.SetFloat("_LeavesOn", 0);
            replacementMaterial.SetTextureScale("_MainTex", new Vector2(2, 2));
            replacementMaterial.SetTexture("_MOAR", MOARTex);
        }
        else
        {
            if (replacementMaterial != null) return;
            replacementMaterial = new Material(Shader.Find("Vita/Vertex_Lightmap"));
            replacementMaterial.mainTexture = albedoTex;
        }
    }

    private void Update()
    {
        // we only need to do *whatever* FPS/tick times a frame, depending on refresh rate
        if (tick != 6)
            tick++;
        else
        {
            thisPos = new Vector2(this.transform.position.x, this.transform.position.z);
            playerPos = new Vector2(player.transform.position.x, player.transform.position.z);
            distance = Vector2.Distance(thisPos, playerPos); //how far are we from the player
            tick = 0;
            TickUpdate();
        }
    }

    private void TickUpdate()
    { 
        if (distance > Camera.main.farClipPlane)
        {
            thisRenderer.enabled = false;
            return;
        }
        if (!enableShaderLOD) return; //check if we enabled this; if not, dump
       
        thisRenderer.enabled = true;
        
        shaderLOD = distance <= LOD_Distance[1]
            ? distance <= LOD_Distance[0] ? LODState.Full : LODState.Reduced : LODState.VertexOnly; //LOD2

        switch (shaderLOD)
        {
            case LODState.Full:
                //if (thisRenderer.sharedMaterial != originalMaterial) thisRenderer.sharedMaterial = originalMaterial;
                if (!thisRenderer.sharedMaterial.IsKeywordEnabled("_NORMALMAP")) 
                    thisRenderer.sharedMaterial.EnableKeyword("_NORMALMAP"); //enable normalmap
                if (shadowCaster && thisRenderer.shadowCastingMode != ShadowCastingMode.On) 
                    thisRenderer.shadowCastingMode = ShadowCastingMode.On; //enable shadows
                break;
            case LODState.Reduced:
                if (thisRenderer.sharedMaterial != originalMaterial) thisRenderer.sharedMaterial = originalMaterial;
                if (thisRenderer.sharedMaterial.IsKeywordEnabled("_NORMALMAP"))
                    thisRenderer.sharedMaterial.DisableKeyword("_NORMALMAP"); //drop normalmap
                if (shadowCaster && thisRenderer.shadowCastingMode != ShadowCastingMode.Off) 
                    thisRenderer.shadowCastingMode = ShadowCastingMode.Off; //disable shadows
                break;
            case LODState.VertexOnly:
                thisRenderer.sharedMaterial = replacementMaterial;
                if (shadowCaster && thisRenderer.shadowCastingMode != ShadowCastingMode.Off) 
                  thisRenderer.shadowCastingMode = ShadowCastingMode.Off; //disable shadows
                break;
        }
    }
}