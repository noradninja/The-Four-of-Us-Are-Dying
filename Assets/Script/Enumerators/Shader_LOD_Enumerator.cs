using UnityEngine;
using UnityEngine.Rendering;

public class Shader_LOD_Enumerator : MonoBehaviour
{
    public enum LODState
    {
        Full,
        Reduced,
        VertexOnly,
        Disabled
    }

    [Header("References")]
    public GameObject player;
    public bool enableShaderLOD = true;
    public bool isFoliage;

    public LODState shaderLOD;

    private Material replacementMaterial;       // Shared cached (VertexOnly)
    private Material originalMaterial;          // Shared original
    private Material reducedOriginalMaterial;   // Shared cached clone (Reduced)
    private Texture originalTexture;
    private Texture originalSecondTexture;
    private Renderer thisRenderer;
    private bool shadowCaster;

    // Cached per-object thresholds (SQUARED) after size adjustment
    private float tFullSqr;
    private float tReducedSqr;
    private float tVertexOnlySqr;

    void Start()
    {
        thisRenderer = GetComponent<Renderer>();
        if (thisRenderer == null) return;

        // IMPORTANT: sharedMaterial does NOT create a per-object instance
        originalMaterial = thisRenderer.sharedMaterial;

        originalTexture = originalMaterial != null ? originalMaterial.mainTexture : null;
        originalSecondTexture = originalMaterial != null ? originalMaterial.GetTexture("_MetallicGlossMap") : null;

        shadowCaster = thisRenderer.shadowCastingMode == ShadowCastingMode.On;

        if (player == null) player = GameObject.FindGameObjectWithTag("Player");

        if (LODManager.Instance != null)
        {
            // Reduced variant of original (normalmap OFF) - shared cached
            reducedOriginalMaterial = LODManager.Instance.GetOrCreateReducedOriginalMaterial(originalMaterial);

            // Grab original tiling/offset for _MainTex, and bake into replacement material cache key
            Vector2 tiling = Vector2.one;
            Vector2 offset = Vector2.zero;
            float cutoff = 0.5f;

            if (originalMaterial != null)
            {
                tiling = originalMaterial.GetTextureScale("_MainTex");
                offset = originalMaterial.GetTextureOffset("_MainTex");

                if (originalMaterial.HasProperty("_Cutoff"))
                    cutoff = originalMaterial.GetFloat("_Cutoff");
            }

            // VertexOnly replacement material - shared cached
            // Rules:
            //  - leavesOn = isFoliage
            //  - alphaOn = ON
            //  - ambientOn = NEVER ON for VertexOnly
            replacementMaterial = LODManager.Instance.GetOrCreateReplacementMaterial(
                originalTexture,
                originalSecondTexture,
                tiling,
                offset,
                cutoff,
                true,       // alphaOn
                isFoliage,  // leavesOn
                false       // ambientOn (forced off)
            );
        }

        CacheSizeAdjustedThresholds();

        if (LODManager.Instance != null)
            LODManager.Instance.Register(this);
    }

    // PUBLIC: called by manager button
    public void RebuildThresholdCache()
    {
        if (thisRenderer == null)
            thisRenderer = GetComponent<Renderer>();

        if (thisRenderer == null) return;

        CacheSizeAdjustedThresholds();
    }

    private void CacheSizeAdjustedThresholds()
    {
        // Fallback defaults if manager missing
        float baseFull = 4f;
        float baseReduced = 5f;
        float baseVertex = 7f;

        if (LODManager.Instance != null)
        {
            baseFull = LODManager.Instance.fullDistance;
            baseReduced = LODManager.Instance.reducedDistance;
            baseVertex = LODManager.Instance.vertexOnlyDistance;
        }

        // Largest horizontal bound (world-space AABB)
        Bounds b = thisRenderer.bounds;
        float halfHorizontal = 0.5f * Mathf.Max(b.size.x, b.size.z);

        float full = baseFull + halfHorizontal;
        float reduced = baseReduced + halfHorizontal;
        float vertex = baseVertex + halfHorizontal;

        tFullSqr = full * full;
        tReducedSqr = reduced * reduced;
        tVertexOnlySqr = vertex * vertex;
    }

    // Called from LODManager
    public void UpdateLOD(float currentDistSqr, float farClipSqr)
    {
        if (!enableShaderLOD) return;

        LODState newState;

        if (currentDistSqr <= tFullSqr)
            newState = LODState.Full;
        else if (currentDistSqr <= tReducedSqr)
            newState = LODState.Reduced;
        else if (currentDistSqr <= tVertexOnlySqr)
            newState = LODState.VertexOnly;
        else
            newState = LODState.Disabled;

        if (newState != shaderLOD)
        {
            shaderLOD = newState;
            ApplySettings();
        }
    }

    private void ApplySettings()
    {
        switch (shaderLOD)
        {
            case LODState.Full:
                thisRenderer.enabled = true;
                thisRenderer.sharedMaterial = originalMaterial;
                if (shadowCaster) thisRenderer.shadowCastingMode = ShadowCastingMode.On;
                break;

            case LODState.Reduced:
                thisRenderer.enabled = true;
                thisRenderer.sharedMaterial = (reducedOriginalMaterial != null) ? reducedOriginalMaterial : originalMaterial;
                if (shadowCaster) thisRenderer.shadowCastingMode = ShadowCastingMode.Off;
                break;

            case LODState.VertexOnly:
                thisRenderer.enabled = true;
                thisRenderer.sharedMaterial = replacementMaterial;
                if (shadowCaster) thisRenderer.shadowCastingMode = ShadowCastingMode.Off;
                break;

            case LODState.Disabled:
                thisRenderer.enabled = false;
                if (shadowCaster) thisRenderer.shadowCastingMode = ShadowCastingMode.Off;
                break;
        }
    }

    private void OnDestroy()
    {
        if (LODManager.Instance != null)
            LODManager.Instance.Unregister(this);
    }
}
