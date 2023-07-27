using System;
using UnityEngine;
using UnityEngine.Rendering;

// [ExecuteInEditMode]
//simple class to disable normal maps when the player is >= a specified distance
//I set it just beyond the distance of the flashlight, because you won't see them that far away anyway
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
    private Vector3 playerPos;
    private Vector3 thisPos;
    private Renderer thisRenderer;
    private Vector3 viewPos;

    private void Awake()
    {
        thisRenderer = this.GetComponent<Renderer>();
        if (thisRenderer.shadowCastingMode == ShadowCastingMode.On)
        {
            shadowCaster = true;
        }
        else
        {
            shadowCaster = false;
        }
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
        if (tick != 30)
            tick++;
        else
        {
            thisPos = this.transform.position;
            playerPos = player.transform.position;
            distance = Vector3.Distance(thisPos, playerPos); //how far are we from the player
            tick = 0;
            TickUpdate();
        }
    }

    private void TickUpdate()
    {
        if (!enableShaderLOD) return; //check if we enabled this; if not, dump
        if (distance <= LOD_Distance[1]) //set LODState here based on distance
        {
            if (distance <= LOD_Distance[0])
            {
                shaderLOD = LODState.Full;
            }
            else shaderLOD = LODState.Reduced; //LOD0 if < [0] else LOD1
        }
        else shaderLOD = LODState.VertexOnly; //LOD2

        switch (shaderLOD)
        {
            case LODState.Full:
                if (thisRenderer.sharedMaterial != originalMaterial) thisRenderer.sharedMaterial = originalMaterial;
                thisRenderer.sharedMaterial.EnableKeyword("_NORMALMAP"); //enable normalmap
                if (shadowCaster) thisRenderer.shadowCastingMode = ShadowCastingMode.On; //enable shadows
                break;
            case LODState.Reduced:
                if (thisRenderer.sharedMaterial != originalMaterial) thisRenderer.sharedMaterial = originalMaterial;
                thisRenderer.sharedMaterial.DisableKeyword("_NORMALMAP"); //drop normalmap
                thisRenderer.shadowCastingMode = ShadowCastingMode.Off; //disable shadows
                break;
            case LODState.VertexOnly:
                thisRenderer.sharedMaterial = replacementMaterial;
                thisRenderer.shadowCastingMode = ShadowCastingMode.Off; //disable shadows
                break;
        }
    }
}