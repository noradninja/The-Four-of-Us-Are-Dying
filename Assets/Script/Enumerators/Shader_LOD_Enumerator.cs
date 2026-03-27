/* Shader_LOD_Enumerator.cs */

using UnityEngine;
using UnityEngine.Rendering;

public class Shader_LOD_Enumerator : MonoBehaviour
{
    public enum LODState
    {
        Full,
        Reduced,
        VertexOnly,
        BlackOnly,
        Disabled
    }

    [Header("References")] public GameObject player;

    public bool enableShaderLOD = true;
    public bool isFoliage;
    public bool vertexConstraints = true;

    public LODState shaderLOD;

    private int _baseDrawCallCount = 1;

    private Mesh _cachedMesh;

    private bool _deadWorldBlocked = false;
    private bool _desiredEnabled = true;

    private bool _forcedDisabledByFPS = false;
    private bool _isProbablyLightmapStatic = false;
    private float _lastDistSqr = 0f;
    private MeshFilter _mf;
    private bool _predictiveBlocked = false;
    private SkinnedMeshRenderer _smr;
    private Material blackOnlyMaterial;
    private Material originalMaterial;
    private Texture originalSecondTexture;
    private Texture originalTexture;
    private Material reducedOriginalMaterial;

    private Material replacementMaterial;
    private bool shadowCaster;
    private float tBlackOnlySqr;
    private float tDisableSqr;
    private float tFPSCullMinSqr;

    private float tFullSqr;
    private Renderer thisRenderer;
    private float tReducedSqr;
    private float tVertexOnlySqr;

    public Renderer CachedRenderer
    {
        get { return thisRenderer; }
    }

    public Mesh CachedMesh
    {
        get { return _cachedMesh; }
    }

    public LODState CurrentState
    {
        get { return shaderLOD; }
    }

    public bool WasShadowCaster
    {
        get { return shadowCaster; }
    }

    public bool IsForcedDisabledByFPS
    {
        get { return _forcedDisabledByFPS; }
    }

    public float LastDistSqr
    {
        get { return _lastDistSqr; }
    }

    public float VertexOnlyThresholdSqr
    {
        get { return tVertexOnlySqr; }
    }

    public float BlackOnlyThresholdSqr
    {
        get { return tBlackOnlySqr; }
    }

    public float FPSCullMinThresholdSqr
    {
        get { return tFPSCullMinSqr; }
    }

    public bool IsDeadWorldBlocked
    {
        get { return _deadWorldBlocked; }
    }

    public bool IsPredictiveBlocked
    {
        get { return _predictiveBlocked; }
    }

    public int BaseDrawCallCount
    {
        get { return _baseDrawCallCount; }
    }

    public bool IsProbablyLightmapStatic
    {
        get { return _isProbablyLightmapStatic; }
    }

    public bool IsRenderEligible
    {
        get
        {
            if (thisRenderer == null) return false;
            if (_forcedDisabledByFPS) return false;
            if (_deadWorldBlocked) return false;
            if (_predictiveBlocked) return false;
            if (!thisRenderer.enabled) return false;
            return true;
        }
    }

    private void Start()
    {
        thisRenderer = GetComponent<Renderer>();
        _mf = GetComponent<MeshFilter>();
        _smr = thisRenderer as SkinnedMeshRenderer;
        _cachedMesh = _mf != null ? _mf.sharedMesh : (_smr != null ? _smr.sharedMesh : null);

        if (thisRenderer == null) return;

        originalMaterial = thisRenderer.sharedMaterial;

        originalTexture = originalMaterial != null ? originalMaterial.mainTexture : null;
        originalSecondTexture = originalMaterial != null ? originalMaterial.GetTexture("_MetallicGlossMap") : null;

        shadowCaster = thisRenderer.shadowCastingMode == ShadowCastingMode.On;

        if (thisRenderer.sharedMaterials != null)
            _baseDrawCallCount = Mathf.Max(1, thisRenderer.sharedMaterials.Length);
        else
            _baseDrawCallCount = 1;

        _isProbablyLightmapStatic = gameObject.isStatic;

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

            replacementMaterial = LODManager.Instance.GetOrCreateReplacementMaterial(
                originalTexture,
                originalSecondTexture,
                tiling,
                offset,
                cutoff,
                true,
                isFoliage,
                false,
                vertexConstraints
            );

            blackOnlyMaterial = LODManager.Instance.GetOrCreateBlackMaterial(
                originalTexture,
                tiling,
                offset,
                cutoff,
                true
            );
        }

        CacheSizeAdjustedThresholds();

        if (LODManager.Instance != null)
            LODManager.Instance.Register(this);

        ApplySettings();
    }

    private void OnDestroy()
    {
        if (LODManager.Instance != null)
            LODManager.Instance.Unregister(this);
    }

    public void SetDeadWorldBlocked(bool blocked)
    {
        _deadWorldBlocked = blocked;
        ApplyRendererEnableGate();
    }

    public void SetPredictiveBlocked(bool blocked)
    {
        _predictiveBlocked = blocked;
        ApplyRendererEnableGate();
    }

    private void ApplyRendererEnableGate()
    {
        if (thisRenderer == null) return;

        if (_forcedDisabledByFPS)
        {
            thisRenderer.enabled = false;
            if (shadowCaster) thisRenderer.shadowCastingMode = ShadowCastingMode.Off;
            return;
        }

        thisRenderer.enabled = _desiredEnabled && !_deadWorldBlocked && !_predictiveBlocked;

        if (!thisRenderer.enabled && shadowCaster)
            thisRenderer.shadowCastingMode = ShadowCastingMode.Off;
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

        Bounds b = thisRenderer.bounds;
        float halfHorizontal = 0.5f * Mathf.Max(b.size.x, b.size.z);

        float cap = 2.0f;
        if (LODManager.Instance != null)
            cap = LODManager.Instance.maxBoundsOffset;

        halfHorizontal = Mathf.Min(halfHorizontal, cap);

        float sign = useFarEdge ? 1f : -1f;
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

        /* We cache a midpoint-derived threshold so both FPS and predictive culling only
           start trimming once an object is already meaningfully far from the player. */
        float mid = 0.25f * (vertex + black);
        tFPSCullMinSqr = mid * mid;
    }

    private float ComputeFlashlightInfluence(
        Vector3 lightPos,
        Vector3 lightForward,
        float lightRange,
        float outerCos)
    {
        if (thisRenderer == null) return 0f;
        if (lightRange <= 0.001f) return 0f;

        var center = thisRenderer.bounds.center;
        var toObj = center - lightPos;

        var dist = toObj.magnitude;
        if (dist > lightRange) return 0f;
        if (dist <= 0.0001f) return 1f;

        var dir = toObj / dist;
        var cosTheta = Vector3.Dot(lightForward, dir);
        if (cosTheta <= outerCos) return 0f;

        var dist01 = 1.0f - Mathf.Clamp01(dist / lightRange);
        dist01 *= dist01;

        var cone01 = Mathf.InverseLerp(outerCos, 1.0f, cosTheta);
        cone01 = Mathf.Clamp01(cone01);

        return dist01 * cone01;
    }

    public float GetEstimatedRenderCost(
        Vector3 lightPos,
        Vector3 lightForward,
        float lightRange,
        float outerCos)
    {
        if (!IsRenderEligible) return 0f;

        var lodWeight = 0f;

        switch (shaderLOD)
        {
            case LODState.Full:
                lodWeight = 1.0f;
                break;

            case LODState.Reduced:
                lodWeight = 0.75f;
                break;

            case LODState.VertexOnly:
                lodWeight = 0.4f;
                break;

            case LODState.BlackOnly:
                lodWeight = 0.2f;
                break;

            default:
                lodWeight = 0f;
                break;
        }

        var baseCost = _baseDrawCallCount * lodWeight;
        var shadowTerm = 0f;

        if (shaderLOD == LODState.Full && shadowCaster)
        {
            if (!_isProbablyLightmapStatic)
            {
                shadowTerm = _baseDrawCallCount * 0.5f;
            }
            else
            {
                var influence = ComputeFlashlightInfluence(
                    lightPos,
                    lightForward,
                    lightRange,
                    outerCos
                );

                shadowTerm = _baseDrawCallCount * 0.25f * influence;
            }
        }

        return baseCost + shadowTerm;
    }

    public void ForceDisableByFPS()
    {
        if (_forcedDisabledByFPS) return;
        _forcedDisabledByFPS = true;
        ApplyRendererEnableGate();
    }

    public void ReleaseFPSDisable()
    {
        if (!_forcedDisabledByFPS) return;
        _forcedDisabledByFPS = false;
        ApplySettings();
    }

    public void UpdateLOD(float currentDistSqr, float farClipSqr)
    {
        if (!enableShaderLOD) return;

        _lastDistSqr = currentDistSqr;

        if (_forcedDisabledByFPS)
        {
            if (currentDistSqr <= tBlackOnlySqr)
            {
                _forcedDisabledByFPS = false;
            }
            else
            {
                ApplyRendererEnableGate();
                return;
            }
        }

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
        else
        {
            ApplyRendererEnableGate();
        }
    }

    private void ApplySettings()
    {
        if (thisRenderer == null) return;

        switch (shaderLOD)
        {
            case LODState.Full:
                _desiredEnabled = true;
                thisRenderer.sharedMaterial = originalMaterial;
                if (shadowCaster) thisRenderer.shadowCastingMode = ShadowCastingMode.On;
                break;

            case LODState.Reduced:
                _desiredEnabled = true;
                thisRenderer.sharedMaterial =
                    reducedOriginalMaterial != null ? reducedOriginalMaterial : originalMaterial;
                if (shadowCaster) thisRenderer.shadowCastingMode = ShadowCastingMode.Off;
                break;

            case LODState.VertexOnly:
                _desiredEnabled = true;
                thisRenderer.sharedMaterial = replacementMaterial;
                if (shadowCaster) thisRenderer.shadowCastingMode = ShadowCastingMode.Off;
                break;

            case LODState.BlackOnly:
                _desiredEnabled = true;
                thisRenderer.sharedMaterial = (blackOnlyMaterial != null) ? blackOnlyMaterial : replacementMaterial;
                if (shadowCaster) thisRenderer.shadowCastingMode = ShadowCastingMode.Off;
                break;

            case LODState.Disabled:
                _desiredEnabled = false;
                if (shadowCaster) thisRenderer.shadowCastingMode = ShadowCastingMode.Off;
                break;
        }

        ApplyRendererEnableGate();
    }

#if UNITY_EDITOR
    [Header("Debug Gizmos")] public bool drawLodGizmos = false;

    [Range(24, 128)] public int gizmoSegments = 48;

    private void OnDrawGizmosSelected()
    {
        if (!drawLodGizmos) return;

        Renderer r = thisRenderer != null ? thisRenderer : GetComponent<Renderer>();
        if (r == null) return;

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

        float full = Mathf.Max(MinMeters, baseFull + sign * halfHorizontal);
        float reduced = Mathf.Max(MinMeters, baseReduced + sign * halfHorizontal);
        float vertex = Mathf.Max(MinMeters, baseVertex + sign * halfHorizontal);
        float black = Mathf.Max(MinMeters, baseBlack + sign * halfHorizontal);
        float disable = Mathf.Max(MinMeters, baseDisable + sign * halfHorizontal);

        Vector3 center = r.bounds.center;

        Gizmos.color = new Color(0.2f, 1f, 0.2f, 1f);
        DrawRingXZ(center, full, gizmoSegments);
        Gizmos.color = new Color(1f, 0.85f, 0.2f, 1f);
        DrawRingXZ(center, reduced, gizmoSegments);
        Gizmos.color = new Color(0.2f, 0.7f, 1f, 1f);
        DrawRingXZ(center, vertex, gizmoSegments);
        Gizmos.color = new Color(0.8f, 0.2f, 1f, 1f);
        DrawRingXZ(center, black, gizmoSegments);
        Gizmos.color = new Color(1f, 0.2f, 0.2f, 1f);
        DrawRingXZ(center, disable, gizmoSegments);

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