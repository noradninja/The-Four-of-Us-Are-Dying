using UnityEngine;
using UnityEngine.Rendering;

public class Shader_LOD_Enumerator : MonoBehaviour
{
    public enum LODState
    {
        Full,
        Reduced,
        VertexOnly,
        BlackOnly,   // NEW
        Disabled
    }

    [Header("References")]
    public GameObject player;
    public bool enableShaderLOD = true;
    public bool isFoliage;

    public LODState shaderLOD;

    private Material replacementMaterial;       // Shared cached (VertexOnly)
    private Material blackOnlyMaterial;         // Shared cached (BlackOnly)
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
    private float tBlackOnlySqr;     // NEW
    private float tDisableSqr;       // NEW

    void Start()
    {
        thisRenderer = GetComponent<Renderer>();
        if (thisRenderer == null) return;

        originalMaterial = thisRenderer.sharedMaterial;

        originalTexture = originalMaterial != null ? originalMaterial.mainTexture : null;
        originalSecondTexture = originalMaterial != null ? originalMaterial.GetTexture("_MetallicGlossMap") : null;

        shadowCaster = thisRenderer.shadowCastingMode == ShadowCastingMode.On;

        if (player == null) player = GameObject.FindGameObjectWithTag("Player");

        if (LODManager.Instance != null)
        {
            reducedOriginalMaterial = LODManager.Instance.GetOrCreateReducedOriginalMaterial(originalMaterial);

            Vector2 tiling = Vector2.one;
            Vector2 offset = Vector2.zero;
            float cutoff = 0.5f;

            if (originalMaterial != null)
            {
                if (originalMaterial.HasProperty("_MainTex"))
                {
                    tiling = originalMaterial.GetTextureScale("_MainTex");
                    offset = originalMaterial.GetTextureOffset("_MainTex");
                }

                if (originalMaterial.HasProperty("_Cutoff"))
                    cutoff = originalMaterial.GetFloat("_Cutoff");
            }

            // VertexOnly: alpha always on, ambient forced off
            replacementMaterial = LODManager.Instance.GetOrCreateReplacementMaterial(
                originalTexture,
                originalSecondTexture,
                tiling,
                offset,
                cutoff,
                true,       // alphaOn
                isFoliage,  // leavesOn
                false       // ambientOn forced OFF
            );

            // BlackOnly: keep cutout if blackShader supports _MainTex/_Cutoff
            blackOnlyMaterial = LODManager.Instance.GetOrCreateBlackMaterial(
                originalTexture,
                tiling,
                offset,
                cutoff,
                true // alphaOn (we want cutout preserved if possible)
            );
        }

        CacheSizeAdjustedThresholds();

        if (LODManager.Instance != null)
            LODManager.Instance.Register(this);
    }

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
        float baseFull = 1.5f;
        float baseReduced = 2.5f;
        float baseVertex = 4.5f;
        float baseBlack = 5f;
        float baseDisable = 7f;

        bool useFarEdge = true;

        if (LODManager.Instance != null)
        {
            baseFull = LODManager.Instance.fullDistance;
            baseReduced = LODManager.Instance.reducedDistance;
            baseVertex = LODManager.Instance.vertexOnlyDistance;
            baseBlack = LODManager.Instance.blackOnlyDistance;
            baseDisable = LODManager.Instance.disableDistance;

            useFarEdge = LODManager.Instance.farEdgeForBounds;
        }

        // Largest horizontal bound (world-space AABB)
        Bounds b = thisRenderer.bounds;
        float halfHorizontal = 0.5f * Mathf.Max(b.size.x, b.size.z);

        // Apply cap from manager
        float cap = 2.0f;
        if (LODManager.Instance != null)
            cap = LODManager.Instance.maxBoundsOffset;

        halfHorizontal = Mathf.Min(halfHorizontal, cap);

        // Determine sign (far vs near edge)
        float sign = useFarEdge ? 1f : -1f;

// Prevent zero / negative thresholds
        const float MinMeters = 0.01f;

        float full = Mathf.Max(MinMeters, baseFull + sign * halfHorizontal);
        float reduced = Mathf.Max(MinMeters, baseReduced + sign * halfHorizontal);
        float vertex = Mathf.Max(MinMeters, baseVertex + sign * halfHorizontal);
        float black = Mathf.Max(MinMeters, baseBlack + sign * halfHorizontal);
        float disable = Mathf.Max(MinMeters, baseDisable + sign * halfHorizontal);

        tFullSqr = full * full;
        tReducedSqr = reduced * reduced;
        tVertexOnlySqr = vertex * vertex;
        tBlackOnlySqr = black * black;
        tDisableSqr = disable * disable;

    }


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
        else if (currentDistSqr <= tBlackOnlySqr)
            newState = LODState.BlackOnly;
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

            case LODState.BlackOnly:
                thisRenderer.enabled = true;
                thisRenderer.sharedMaterial = (blackOnlyMaterial != null) ? blackOnlyMaterial : replacementMaterial;
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
    
    #if UNITY_EDITOR
    [Header("Debug Gizmos")]
    public bool drawLodGizmos = false;
    [Range(24, 128)] public int gizmoSegments = 48;

    private void OnDrawGizmosSelected()
    {
        if (!drawLodGizmos) return;

        Renderer r = thisRenderer != null ? thisRenderer : GetComponent<Renderer>();
        if (r == null) return;

        // Recompute thresholds in editor so the gizmos reflect current manager settings
        float baseFull = 1.5f;
        float baseReduced = 2.5f;
        float baseVertex = 4.5f;
        float baseBlack = 5f;
        float baseDisable = 7f;

        bool useFarEdge = true;
        float cap = 2.0f;

        if (LODManager.Instance != null)
        {
            baseFull = LODManager.Instance.fullDistance;
            baseReduced = LODManager.Instance.reducedDistance;
            baseVertex = LODManager.Instance.vertexOnlyDistance;
            baseBlack = LODManager.Instance.blackOnlyDistance;
            baseDisable = LODManager.Instance.disableDistance;

            useFarEdge = LODManager.Instance.farEdgeForBounds;
            cap = Mathf.Max(0f, LODManager.Instance.maxBoundsOffset);
        }

        Bounds b = r.bounds;
        float halfHorizontal = 0.5f * Mathf.Max(b.size.x, b.size.z);
        halfHorizontal = Mathf.Min(halfHorizontal, cap);

        float sign = useFarEdge ? 1f : -1f;
        const float MinMeters = 0.01f;

        float full    = Mathf.Max(MinMeters, baseFull    + sign * halfHorizontal);
        float reduced = Mathf.Max(MinMeters, baseReduced + sign * halfHorizontal);
        float vertex  = Mathf.Max(MinMeters, baseVertex  + sign * halfHorizontal);
        float black   = Mathf.Max(MinMeters, baseBlack   + sign * halfHorizontal);
        float disable = Mathf.Max(MinMeters, baseDisable + sign * halfHorizontal);

        Vector3 center = r.bounds.center;

        // Draw rings in XZ plane (cheaper + clearer than spheres)
        Gizmos.color = new Color(0.2f, 1f, 0.2f, 1f);   DrawRingXZ(center, full, gizmoSegments);    // green
        Gizmos.color = new Color(1f, 0.85f, 0.2f, 1f);  DrawRingXZ(center, reduced, gizmoSegments); // yellow
        Gizmos.color = new Color(0.2f, 0.7f, 1f, 1f);   DrawRingXZ(center, vertex, gizmoSegments);  // blue
        Gizmos.color = new Color(0.8f, 0.2f, 1f, 1f);   DrawRingXZ(center, black, gizmoSegments);   // purple
        Gizmos.color = new Color(1f, 0.2f, 0.2f, 1f);   DrawRingXZ(center, disable, gizmoSegments); // red

        // Small hint line showing the capped offset amount
        Gizmos.color = Color.white;
        Gizmos.DrawLine(center, center + new Vector3(halfHorizontal, 0f, 0f));
    }

    private static void DrawRingXZ(Vector3 center, float radius, int segments)
    {
        if (radius <= 0f) return;
        if (segments < 8) segments = 8;

        float step = (Mathf.PI * 2f) / segments;

        Vector3 prev = center + new Vector3(radius, 0f, 0f);
        for (int i = 1; i <= segments; i++)
        {
            float a = step * i;
            Vector3 next = center + new Vector3(Mathf.Cos(a) * radius, 0f, Mathf.Sin(a) * radius);
            Gizmos.DrawLine(prev, next);
            prev = next;
        }
    }
    #endif

}
