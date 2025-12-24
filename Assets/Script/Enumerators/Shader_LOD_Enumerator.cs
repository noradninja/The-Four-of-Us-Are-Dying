using UnityEngine;
using UnityEngine.Rendering;

public class Shader_LOD_Enumerator : MonoBehaviour
{
    private static readonly int Glossiness = Shader.PropertyToID("_Glossiness");
    private static readonly int Metallic = Shader.PropertyToID("_Metallic");
    private static readonly int Roughness = Shader.PropertyToID("_Roughness");
    private static readonly int AlphaOn = Shader.PropertyToID("_AlphaOn");
    private static readonly int Mode = Shader.PropertyToID("__mode");
    public GameObject player;
    public enum LODState { Full, Reduced, VertexOnly }

    [Header("LOD Settings")]
    public float[] LOD_Distance;       // [0]=full, [1]=reduced
    public bool   enableShaderLOD = true;
    public bool   isFoliage;
    public bool   rendererDisable;
    public bool isDisabled;
    public Material replacementMaterial;

    // cached per‐instance
    private Renderer thisRenderer;
    private Material originalMaterial;
    private Texture mainTex;
    private Texture moarTexture;
    private bool     shadowCaster;

    private Mesh originalMesh;
    private Mesh replacementMesh;  // Optional: If you need a replacement mesh
    private MeshFilter meshFilter;

    [HideInInspector] public LODState shaderLOD;

    // Flag to track if resources are loaded
    private bool isResourcesLoaded = false;

    private void Awake()
    {
        // thisRenderer = GetComponent<Renderer>();
        // meshFilter = GetComponent<MeshFilter>(); // Cache the MeshFilter component
        //
        // shadowCaster = thisRenderer.shadowCastingMode == ShadowCastingMode.On;
        // originalMaterial = thisRenderer.sharedMaterial;
        //
        // // Create replacement material
        // replacementMaterial = new Material(Shader.Find("Vita/Standard Mobile VertexLit"));
        // replacementMaterial.SetFloat(Metallic, originalMaterial.GetFloat(Metallic));
        // replacementMaterial.SetFloat(Roughness, originalMaterial.GetFloat(Glossiness));
        // if (originalMaterial.GetFloat(Mode) == 1 || originalMaterial.GetFloat(AlphaOn) == 1) replacementMaterial.SetFloat(AlphaOn, 1); //preserve alpha
        //     else replacementMaterial.SetFloat(AlphaOn, 0); // else disable alpha clip
        // replacementMaterial.SetFloat("_LeavesOn", 0); // Disable movement at distance
        //
        // // Get textures for replacement material
        // mainTex = originalMaterial.mainTexture;
        // moarTexture = originalMaterial.GetTexture("_MetallicGlossMap");
        //
        // // Apply textures to replacement material
        // replacementMaterial.mainTexture = mainTex;
        // replacementMaterial.SetTexture("_MetallicGlossMap", moarTexture);
    }

    private void Start()
    {
        // Register with the manager
        LODManager.Instance.Register(this);
    }

    // Called by LODManager each tick.
    public void UpdateLOD(float distSqr, float farClipSqr)
    {
        if (!enableShaderLOD) return;

        // Check if the Renderer is null (destroyed or not assigned)
        if (thisRenderer == null)
        {
            Debug.LogWarning("Renderer is missing or destroyed. Skipping LOD update.");
            return;
        }

        float fullSqr = LOD_Distance[0] * LOD_Distance[0];
        float reducedSqr = LOD_Distance[1] * LOD_Distance[1];

        // Pick state
        if (distSqr <= fullSqr) shaderLOD = LODState.Full;
        else if (distSqr <= reducedSqr) shaderLOD = LODState.Reduced;
        else shaderLOD = LODState.VertexOnly;

        switch (shaderLOD)
        {
            case LODState.Full:
                if (shadowCaster && thisRenderer.shadowCastingMode != ShadowCastingMode.On)
                    thisRenderer.shadowCastingMode = ShadowCastingMode.On;
                break;

            case LODState.Reduced:
                thisRenderer.enabled = true;
                thisRenderer.sharedMaterial = originalMaterial;
                if (shadowCaster && thisRenderer.shadowCastingMode != ShadowCastingMode.Off)
                    thisRenderer.shadowCastingMode = ShadowCastingMode.Off;
                break;

            case LODState.VertexOnly:
                thisRenderer.sharedMaterial = replacementMaterial;
                if (shadowCaster && thisRenderer.shadowCastingMode != ShadowCastingMode.Off)
                    thisRenderer.shadowCastingMode = ShadowCastingMode.Off;

                if (rendererDisable)
                    thisRenderer.enabled = distSqr < farClipSqr;
                    isDisabled = !thisRenderer.enabled;
                    //EnableRenderer(!isDisabled);
                break;
        }
    }
}