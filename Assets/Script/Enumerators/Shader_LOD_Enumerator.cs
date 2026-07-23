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

    private static readonly int _ColorPropertyId = Shader.PropertyToID("_Color");

    [Header("References")] public GameObject player;

    public bool enableShaderLOD = true;
    public bool isFoliage;
    public bool vertexConstraints = true;

    public LODState shaderLOD;

    [Header("Texture LOD")] public bool useTextureLOD = false;

    public string textureLODProperty = "_MainTex";
    public Texture mediumMainTex;

    [Header("Texture AssetBundle LOD")] public bool useTextureBundleGroup = true;

    [Tooltip("Bundle group used to build paths like schoolhouse_low:Wall_Low and schoolhouse_full:Wall_Full.")]
    public string textureBundleGroup = "textures";

    [Tooltip(
        "If true, low/high texture paths are rebuilt from mediumMainTex and textureBundleGroup during initialization.")]
    public bool autoBuildTextureLODPaths = true;

    public string lowTextureBundleSuffix = "_low";
    public string highTextureBundleSuffix = "_full";

    public string lowMainTexResourcesPath;
    public string highMainTexResourcesPath;

    [Header("Mesh AssetBundle Streaming")] public bool useMeshStreaming = false;

    [Tooltip("Bundle group used to build paths like schoolhouse_meshes:Wall_01.")]
    public string meshBundleGroup = "textures";

    public string meshBundleSuffix = "_meshes";

    [Tooltip("Mesh asset name inside the bundle. Usually captured from MeshFilter.sharedMesh.name by the editor tool.")]
    public string meshAssetName;

    [Tooltip("When true, the mesh key is rebuilt from meshBundleGroup and meshAssetName.")]
    public bool autoBuildMeshStreamingKey = true;

    public string meshStreamingKey;

    [Tooltip("Extra distance beyond disable distance before we release the streamed mesh.")]
    public float meshUnloadExtraMeters = 8f;

    [Tooltip("Optional placeholder assigned after the real mesh is released.")]
    public Mesh unloadedPlaceholderMesh;

    [Header("Mesh Streaming Debug")] [SerializeField]
    private bool _meshStreamingHasMeshRequest;

    [SerializeField] private bool _meshStreamingMeshApplied;
    [SerializeField] private bool _meshStreamingUsingPlaceholder;
    [SerializeField] private string _meshStreamingDebugStatus;

    [SerializeField] private Vector3 _cachedMeshLocalBoundsCenter;
    [SerializeField] private Vector3 _cachedMeshLocalBoundsSize;
    [SerializeField] private Vector3 _cachedMeshWorldBoundsCenter;
    [SerializeField] private Vector3 _cachedMeshWorldBoundsSize;

    private string _activeHighTextureLODPath;
    private string _activeLowTextureLODPath;
    private string _activeMeshStreamingKey;
    private Mesh _authoringMesh;

    private int _baseDrawCallCount = 1;
    private Mesh _cachedMesh;

    private bool _deadWorldBlocked = false;
    private bool _desiredEnabled = true;
    private bool _forcedDisabledByFPS = false;
    private bool _hasHighTextureLODRequest;

    private bool _hasLowTextureLODRequest;
    private bool _hasReceivedLODUpdate;
    private bool _isProbablyLightmapStatic = false;
    private float _lastDistSqr = 0f;
    private float _lastHighTextureVisibleTime = -9999f;
    private bool _meshStreamingWaitingLogged;
    private MeshFilter _mf;

    private bool _missingTextureManagerWarned;
    private bool _predictiveBlocked = false;
    private SkinnedMeshRenderer _smr;

    private MeshFilter _streamedMeshFilter;
    private SkinnedMeshRenderer _streamedSkinnedMeshRenderer;

    private MaterialPropertyBlock _textureLODPropertyBlock;
    private bool _usingHighTextureLOD;
    private bool _usingLowTextureLOD;

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
        set { thisRenderer = value; }
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

    public Vector3 CachedMeshWorldBoundsCenter
    {
        get { return _cachedMeshWorldBoundsCenter; }
    }

    public Vector3 CachedMeshWorldBoundsSize
    {
        get { return _cachedMeshWorldBoundsSize; }
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
        CachedRenderer = thisRenderer;

        _mf = GetComponent<MeshFilter>();
        _smr = thisRenderer as SkinnedMeshRenderer;
        _cachedMesh = _mf != null ? _mf.sharedMesh : (_smr != null ? _smr.sharedMesh : null);

        InitializeMeshStreaming();

        if (thisRenderer == null) return;

        originalMaterial = thisRenderer.sharedMaterial;
        originalTexture = originalMaterial != null ? originalMaterial.mainTexture : null;
        originalSecondTexture = originalMaterial != null ? originalMaterial.GetTexture("_MetallicGlossMap") : null;

        InitializeTextureLOD();

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

        ApplyRendererEnableGate();

        if (useTextureLOD)
            ApplyMediumTextureLOD();
    }

    private void Update()
    {
        UpdateTextureLODFromManager();
        UpdateMeshStreamingFromManager();
    }

    private void OnDestroy()
    {
        ReleaseAllTextureLODInterest();
        ReleaseMeshStreamingInterest();

        if (LODManager.Instance != null)
            LODManager.Instance.Unregister(this);
    }

    public void SetDeadWorldBlocked(bool blocked)
    {
        _deadWorldBlocked = blocked;
        ApplyRendererEnableGate();

        if (blocked)
        {
            ReleaseAllTextureLODInterest();
            ApplyMeshStreamingPlaceholder();
            ReleaseMeshStreamingInterest();
        }
    }

    public void SetPredictiveBlocked(bool blocked)
    {
        _predictiveBlocked = blocked;
        ApplyRendererEnableGate();

        if (blocked)
        {
            ReleaseAllTextureLODInterest();
            ApplyMeshStreamingPlaceholder();
            ReleaseMeshStreamingInterest();
        }
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

        ReleaseAllTextureLODInterest();
        ApplyMeshStreamingPlaceholder();
        ReleaseMeshStreamingInterest();
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
        _hasReceivedLODUpdate = true;

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
            switch (shaderLOD)
            {
                case LODState.Full:
                    ApplyHighTextureLOD();
                    break;

                case LODState.Reduced:
                    ReleaseLowTextureLODInterest();
                    RequestHighTextureLOD();
                    ReleaseHighTextureLODInterestIfOutsidePreloadWindow();
                    ApplyMediumTextureLOD();
                    break;

                case LODState.VertexOnly:
                    RequestHighTextureLOD();
                    ReleaseHighTextureLODInterestIfOutsidePreloadWindow();
                    ApplyLowTextureLOD();
                    break;

                case LODState.BlackOnly:
                    ReleaseHighTextureLODInterest();
                    ApplyLowTextureLOD();
                    break;

                case LODState.Disabled:
                    ReleaseAllTextureLODInterest();
                    break;
            }

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

                ReleaseLowTextureLODInterest();
                ApplyHighTextureLOD();
                break;

            case LODState.Reduced:
                _desiredEnabled = true;
                thisRenderer.sharedMaterial =
                    reducedOriginalMaterial != null ? reducedOriginalMaterial : originalMaterial;
                if (shadowCaster) thisRenderer.shadowCastingMode = ShadowCastingMode.Off;

                ReleaseLowTextureLODInterest();
                RequestHighTextureLOD();
                ReleaseHighTextureLODInterestIfOutsidePreloadWindow();
                ApplyMediumTextureLOD();
                break;

            case LODState.VertexOnly:
                _desiredEnabled = true;
                thisRenderer.sharedMaterial = replacementMaterial;
                if (shadowCaster) thisRenderer.shadowCastingMode = ShadowCastingMode.Off;

                RequestHighTextureLOD();
                ReleaseHighTextureLODInterestIfOutsidePreloadWindow();
                ApplyLowTextureLOD();
                break;

            case LODState.BlackOnly:
                _desiredEnabled = true;
                thisRenderer.sharedMaterial = (blackOnlyMaterial != null) ? blackOnlyMaterial : replacementMaterial;
                if (shadowCaster) thisRenderer.shadowCastingMode = ShadowCastingMode.Off;

                ReleaseHighTextureLODInterest();
                ApplyLowTextureLOD();
                break;

            case LODState.Disabled:
                _desiredEnabled = false;
                if (shadowCaster) thisRenderer.shadowCastingMode = ShadowCastingMode.Off;

                ReleaseAllTextureLODInterest();
                break;
        }

        ApplyRendererEnableGate();
    }

    private void InitializeTextureLOD()
    {
        if (!useTextureLOD)
            return;

        if (CachedRenderer == null)
            CachedRenderer = GetComponent<Renderer>();

        if (mediumMainTex == null && CachedRenderer != null && CachedRenderer.sharedMaterial != null)
            if (CachedRenderer.sharedMaterial.HasProperty(textureLODProperty))
                mediumMainTex = CachedRenderer.sharedMaterial.GetTexture(textureLODProperty);

        /*
            We rebuild texture LOD paths from the medium texture and the texture bundle
            group so artists only need to set the group once per renderer/building.
        */
        if (autoBuildTextureLODPaths)
        {
            lowMainTexResourcesPath = BuildTextureLODPath(mediumMainTex, "_Low");
            highMainTexResourcesPath = BuildTextureLODPath(mediumMainTex, "_Full");
        }
        else
        {
            if (string.IsNullOrEmpty(lowMainTexResourcesPath) && mediumMainTex != null)
                lowMainTexResourcesPath = BuildTextureLODPath(mediumMainTex, "_Low");

            if (string.IsNullOrEmpty(highMainTexResourcesPath) && mediumMainTex != null)
                highMainTexResourcesPath = BuildTextureLODPath(mediumMainTex, "_Full");
        }

        if (_textureLODPropertyBlock == null)
            _textureLODPropertyBlock = new MaterialPropertyBlock();

        _hasReceivedLODUpdate = false;

        _usingLowTextureLOD = false;
        _usingHighTextureLOD = false;

        _hasLowTextureLODRequest = false;
        _hasHighTextureLODRequest = false;

        _activeLowTextureLODPath = null;
        _activeHighTextureLODPath = null;

        ApplyMediumTextureLOD();
    }

    /*
        Texture LOD path builder.

        In AssetBundle mode, we generate explicit bundle keys:
            schoolhouse_low:Wall_Low
            schoolhouse_full:Wall_Full

        In Resources mode, we keep the old path format:
            Texture/Wall_Low
            Texture/Wall_Full
    */
    private string BuildTextureLODPath(Texture tex, string textureSuffix)
    {
        if (tex == null)
            return string.Empty;

        var baseTextureName = StripTextureLODSuffix(tex.name);
        var assetName = baseTextureName + textureSuffix;

        if (useTextureBundleGroup && !string.IsNullOrEmpty(textureBundleGroup))
        {
            var bundleSuffix = textureSuffix == "_Full" ? highTextureBundleSuffix : lowTextureBundleSuffix;
            var bundleName = textureBundleGroup + bundleSuffix;

            return bundleName + ":" + assetName;
        }

        return "Texture/" + assetName;
    }

    /*
        Texture LOD base-name cleanup.

        We strip these suffixes so a medium texture accidentally named Wall_Full
        does not generate Wall_Full_Full.
    */
    private string StripTextureLODSuffix(string textureName)
    {
        if (string.IsNullOrEmpty(textureName))
            return string.Empty;

        if (textureName.EndsWith("_Full"))
            return textureName.Substring(0, textureName.Length - "_Full".Length);

        if (textureName.EndsWith("_Low"))
            return textureName.Substring(0, textureName.Length - "_Low".Length);

        return textureName;
    }

    private VitaTextureStreamingManager GetTextureManager()
    {
        var manager = VitaTextureStreamingManager.Instance;

        if (manager == null && !_missingTextureManagerWarned)
        {
            Debug.LogWarning(
                "Texture LOD requested, but no TextureStreamingManager exists in the scene.",
                this
            );

            _missingTextureManagerWarned = true;
        }

        return manager;
    }

    private float GetHighTexturePreloadExtraMeters()
    {
        if (VitaTextureStreamingManager.Instance != null)
            return Mathf.Max(0f, VitaTextureStreamingManager.Instance.highTexturePreloadExtraMeters);

        return 1.5f;
    }

    /*
        High texture request gate.

        We still use distance as the first test, but high resolution textures also
        need to pass the conservative visibility test when that feature is enabled
        in the LOD manager.
    */
    private bool ShouldRequestHighTextureLOD()
    {
        if (!_hasReceivedLODUpdate)
            return false;

        var fullDistance = Mathf.Sqrt(tFullSqr);
        var preloadDistance = fullDistance + GetHighTexturePreloadExtraMeters();
        var preloadSqr = preloadDistance * preloadDistance;

        if (_lastDistSqr > preloadSqr)
            return false;

        return IsHighTextureVisibleOrRecentlyVisible();
    }

    /*
        High texture visibility grace.

        We allow a short grace window after visibility is lost so objects near the
        edge of the camera do not rapidly request and release their high texture.
    */
    private bool IsHighTextureVisibleOrRecentlyVisible()
    {
        if (LODManager.Instance == null)
            return false;

        if (!LODManager.Instance.gateHighTextureLODByVisibility)
            return true;

        var r = CachedRenderer != null ? CachedRenderer : thisRenderer;

        var visible = LODManager.Instance.IsRendererVisibleForHighTextureLOD(r);

        if (visible)
        {
            _lastHighTextureVisibleTime = Time.unscaledTime;
            return true;
        }

        var grace = Mathf.Max(0f, LODManager.Instance.highTextureVisibilityGraceSeconds);

        return Time.unscaledTime - _lastHighTextureVisibleTime <= grace;
    }

    private void ReleaseHighTextureLODInterestIfOutsidePreloadWindow()
    {
        if (ShouldRequestHighTextureLOD())
            return;

        ReleaseHighTextureLODInterest();
    }

    private void RequestLowTextureLOD()
    {
        if (!useTextureLOD || !_hasReceivedLODUpdate)
            return;

        if (string.IsNullOrEmpty(lowMainTexResourcesPath))
            return;

        var manager = GetTextureManager();
        if (manager == null)
            return;

        if (_hasLowTextureLODRequest && _activeLowTextureLODPath == lowMainTexResourcesPath)
            return;

        if (_hasLowTextureLODRequest && !string.IsNullOrEmpty(_activeLowTextureLODPath))
            manager.ReleaseTexture(_activeLowTextureLODPath);

        _activeLowTextureLODPath = lowMainTexResourcesPath;
        _hasLowTextureLODRequest = true;

        manager.RequestTexture(_activeLowTextureLODPath);
    }

    private void RequestHighTextureLOD()
    {
        if (!useTextureLOD || !_hasReceivedLODUpdate)
            return;

        if (!ShouldRequestHighTextureLOD())
            return;

        if (string.IsNullOrEmpty(highMainTexResourcesPath))
            return;

        var manager = GetTextureManager();
        if (manager == null)
            return;

        if (_hasHighTextureLODRequest && _activeHighTextureLODPath == highMainTexResourcesPath)
            return;

        if (_hasHighTextureLODRequest && !string.IsNullOrEmpty(_activeHighTextureLODPath))
            manager.ReleaseTexture(_activeHighTextureLODPath);

        _activeHighTextureLODPath = highMainTexResourcesPath;
        _hasHighTextureLODRequest = true;

        manager.RequestTexture(_activeHighTextureLODPath);
    }

    private void ApplyMediumTextureLOD()
    {
        _usingLowTextureLOD = false;
        _usingHighTextureLOD = false;

        ApplyLoadedTexture(mediumMainTex);
    }

    private void ApplyLowTextureLOD()
    {
        if (!useTextureLOD)
            return;

        RequestLowTextureLOD();

        Texture lowTex = null;

        if (VitaTextureStreamingManager.Instance != null && !string.IsNullOrEmpty(_activeLowTextureLODPath))
            lowTex = VitaTextureStreamingManager.Instance.GetLoadedTexture(_activeLowTextureLODPath);

        if (lowTex != null)
        {
            if (!_usingLowTextureLOD)
            {
                _usingLowTextureLOD = true;
                _usingHighTextureLOD = false;
                ApplyLoadedTexture(lowTex);
            }

            return;
        }

        ApplyMediumTextureLOD();
    }

    private void ApplyHighTextureLOD()
    {
        if (!useTextureLOD)
            return;

        RequestHighTextureLOD();

        Texture highTex = null;

        if (VitaTextureStreamingManager.Instance != null && !string.IsNullOrEmpty(_activeHighTextureLODPath))
            highTex = VitaTextureStreamingManager.Instance.GetLoadedTexture(_activeHighTextureLODPath);

        if (highTex != null)
        {
            if (!_usingHighTextureLOD)
            {
                _usingHighTextureLOD = true;
                _usingLowTextureLOD = false;
                ApplyLoadedTexture(highTex);
            }

            return;
        }

        ApplyMediumTextureLOD();
    }

    private void ReleaseLowTextureLODInterest()
    {
        if (_hasLowTextureLODRequest && VitaTextureStreamingManager.Instance != null &&
            !string.IsNullOrEmpty(_activeLowTextureLODPath))
            VitaTextureStreamingManager.Instance.ReleaseTexture(_activeLowTextureLODPath);

        _hasLowTextureLODRequest = false;
        _activeLowTextureLODPath = null;
        _usingLowTextureLOD = false;
    }

    private void ReleaseHighTextureLODInterest()
    {
        if (_hasHighTextureLODRequest && VitaTextureStreamingManager.Instance != null &&
            !string.IsNullOrEmpty(_activeHighTextureLODPath))
            VitaTextureStreamingManager.Instance.ReleaseTexture(_activeHighTextureLODPath);

        _hasHighTextureLODRequest = false;
        _activeHighTextureLODPath = null;
        _usingHighTextureLOD = false;
    }

    private void ReleaseAllTextureLODInterest()
    {
        ReleaseLowTextureLODInterest();
        ReleaseHighTextureLODInterest();

        if (useTextureLOD)
            ApplyMediumTextureLOD();
    }

    private void UpdateTextureLODFromManager()
    {
        if (!useTextureLOD)
            return;

        if (!_hasReceivedLODUpdate)
        {
            ApplyTextureLODDebugColor();
            return;
        }

        if (shaderLOD == LODState.Full)
        {
            ApplyHighTextureLOD();
            ApplyTextureLODDebugColor();
            return;
        }

        if (shaderLOD == LODState.Reduced)
        {
            RequestHighTextureLOD();
            ReleaseHighTextureLODInterestIfOutsidePreloadWindow();
            ApplyTextureLODDebugColor();
            return;
        }

        if (shaderLOD == LODState.VertexOnly)
        {
            RequestHighTextureLOD();
            ReleaseHighTextureLODInterestIfOutsidePreloadWindow();
            ApplyLowTextureLOD();
            ApplyTextureLODDebugColor();
            return;
        }

        if (shaderLOD == LODState.BlackOnly)
            ApplyLowTextureLOD();

        ApplyTextureLODDebugColor();
    }

    /*
        Texture LOD debug color selection.

        We color the renderer only by the texture that is actually active.
        Pending requests are intentionally ignored so the visualization always
        reflects what is currently bound to the material.
    */
    private Color GetTextureLODDebugColor()
    {
        if (LODManager.Instance == null)
            return Color.white;

        /*
            High resolution texture currently active.
        */
        if (_usingHighTextureLOD)
            return LODManager.Instance.textureDebugHighColor;

        /*
            Low resolution texture currently active.
        */
        if (_usingLowTextureLOD)
            return LODManager.Instance.textureDebugLowColor;

        /*
            If neither high nor low is active, the medium/original texture is active.
        */
        return LODManager.Instance.textureDebugMediumColor;
    }

    /*
        Texture LOD debug color application.

        We use the existing MaterialPropertyBlock path so debug coloring remains
        per-renderer and does not instantiate new materials.
    */
    private void ApplyTextureLODDebugColor()
    {
        if (CachedRenderer == null)
            return;

        if (_textureLODPropertyBlock == null)
            _textureLODPropertyBlock = new MaterialPropertyBlock();

        CachedRenderer.GetPropertyBlock(_textureLODPropertyBlock);

        if (LODManager.Instance != null && LODManager.Instance.enableTextureLODDebugColors)
        {
            _textureLODPropertyBlock.SetColor(_ColorPropertyId, GetTextureLODDebugColor());
        }
        else
        {
            var mat = CachedRenderer.sharedMaterial;

            if (mat != null && mat.HasProperty(_ColorPropertyId))
                _textureLODPropertyBlock.SetColor(_ColorPropertyId, mat.GetColor(_ColorPropertyId));
        }

        CachedRenderer.SetPropertyBlock(_textureLODPropertyBlock);
    }

    private void ApplyLoadedTexture(Texture tex)
    {
        if (!useTextureLOD)
            return;

        if (CachedRenderer == null || tex == null)
            return;

        if (_textureLODPropertyBlock == null)
            _textureLODPropertyBlock = new MaterialPropertyBlock();

        CachedRenderer.GetPropertyBlock(_textureLODPropertyBlock);
        _textureLODPropertyBlock.SetTexture(textureLODProperty, tex);

        if (LODManager.Instance != null && LODManager.Instance.enableTextureLODDebugColors)
        {
            _textureLODPropertyBlock.SetColor(_ColorPropertyId, GetTextureLODDebugColor());
        }
        else
        {
            var mat = CachedRenderer.sharedMaterial;

            if (mat != null && mat.HasProperty(_ColorPropertyId))
                _textureLODPropertyBlock.SetColor(_ColorPropertyId, mat.GetColor(_ColorPropertyId));
        }

        CachedRenderer.SetPropertyBlock(_textureLODPropertyBlock);
    }

    /*
        Mesh streaming initialization.

        We cache the current renderer/mesh components, but we do not blindly capture
        the current scene mesh as the streaming asset name. In stripped/runtime scenes,
        the current mesh may already be a placeholder, so meshAssetName must come from
        the editor setup/build-strip metadata.
    */
    private void InitializeMeshStreaming()
    {
        if (!useMeshStreaming)
            return;

        _streamedMeshFilter = GetComponent<MeshFilter>();
        _streamedSkinnedMeshRenderer = GetComponent<SkinnedMeshRenderer>();

        if (_streamedMeshFilter != null)
            _authoringMesh = _streamedMeshFilter.sharedMesh;
        else if (_streamedSkinnedMeshRenderer != null)
            _authoringMesh = _streamedSkinnedMeshRenderer.sharedMesh;

        /*
            We only auto-fill meshAssetName if it is empty and the current mesh is not
            the configured unloaded placeholder. This keeps a stripped scene from
            accidentally trying to stream the placeholder mesh from the bundle.
        */
        if (string.IsNullOrEmpty(meshAssetName) && _authoringMesh != null)
        {
            var currentIsPlaceholder =
                unloadedPlaceholderMesh != null && _authoringMesh == unloadedPlaceholderMesh;

            if (!currentIsPlaceholder)
                meshAssetName = _authoringMesh.name;
        }

        if (autoBuildMeshStreamingKey)
            meshStreamingKey = BuildMeshStreamingKey();

        CacheMeshStreamingBounds();

        _meshStreamingMeshApplied = !IsUsingMeshStreamingPlaceholder();
        _meshStreamingUsingPlaceholder = IsUsingMeshStreamingPlaceholder();

        if (string.IsNullOrEmpty(meshStreamingKey))
        {
            _meshStreamingDebugStatus =
                "Mesh streaming enabled, but no key could be built. Capture meshAssetName before replacing the scene mesh.";

            Debug.LogWarning(
                _meshStreamingDebugStatus,
                this
            );
        }
        else
        {
            _meshStreamingDebugStatus = "Initialized mesh key: " + meshStreamingKey;
        }
    }

    /*
        Mesh streaming key builder.

        We generate explicit AssetBundle keys:
            schoolhouse_meshes:Wall_01

        The asset name must come from meshAssetName, not from the currently assigned
        MeshFilter mesh, because the current mesh may be a placeholder at runtime.
    */
    private string BuildMeshStreamingKey()
    {
        if (string.IsNullOrEmpty(meshBundleGroup))
            return string.Empty;

        if (string.IsNullOrEmpty(meshAssetName))
            return string.Empty;

        var bundleName = meshBundleGroup + meshBundleSuffix;

        return bundleName + ":" + meshAssetName;
    }

    /*
        Mesh streaming bounds cache.

        We store both local mesh bounds and current renderer world bounds so the later
        build-strip path can keep making distance/visibility choices after the scene
        mesh has been replaced by a placeholder.
    */
    private void CacheMeshStreamingBounds()
    {
        var mesh = GetCurrentStreamingMesh();

        if (mesh != null)
        {
            _cachedMeshLocalBoundsCenter = mesh.bounds.center;
            _cachedMeshLocalBoundsSize = mesh.bounds.size;
        }

        var r = CachedRenderer != null ? CachedRenderer : thisRenderer;

        if (r != null)
        {
            _cachedMeshWorldBoundsCenter = r.bounds.center;
            _cachedMeshWorldBoundsSize = r.bounds.size;
        }
    }

    /*
        Current mesh helper.

        This supports both MeshFilter and SkinnedMeshRenderer.
    */
    private Mesh GetCurrentStreamingMesh()
    {
        if (_streamedMeshFilter != null)
            return _streamedMeshFilter.sharedMesh;

        if (_streamedSkinnedMeshRenderer != null)
            return _streamedSkinnedMeshRenderer.sharedMesh;

        return null;
    }

    /*
        Mesh assignment helper.

        We assign sharedMesh so we do not instantiate per-object mesh copies.
    */
    private void SetCurrentStreamingMesh(Mesh mesh)
    {
        if (_streamedMeshFilter != null)
        {
            _streamedMeshFilter.sharedMesh = mesh;
            _cachedMesh = mesh;
            return;
        }

        if (_streamedSkinnedMeshRenderer != null)
        {
            _streamedSkinnedMeshRenderer.sharedMesh = mesh;
            _cachedMesh = mesh;
        }
    }

    /*
        Placeholder check.

        This lets debug state tell us whether the real mesh is currently absent.
    */
    private bool IsUsingMeshStreamingPlaceholder()
    {
        var current = GetCurrentStreamingMesh();

        if (current == null)
            return true;

        if (unloadedPlaceholderMesh != null && current == unloadedPlaceholderMesh)
            return true;

        return false;
    }

    /*
        Mesh relevance gate.

        We keep mesh loading more conservative than texture loading. Meshes are loaded
        when the object is within the normal disable distance. Meshes are released only
        after the object is farther than disable distance plus an extra buffer.
    */
    private bool ShouldRequestMeshStreamingMesh()
    {
        if (!useMeshStreaming)
            return false;

        if (!_hasReceivedLODUpdate)
            return false;

        if (string.IsNullOrEmpty(meshStreamingKey))
            return false;

        if (_deadWorldBlocked)
            return false;

        if (_predictiveBlocked)
            return false;

        if (_forcedDisabledByFPS)
            return false;

        return _lastDistSqr <= tDisableSqr;
    }

    /*
        Mesh unload gate.

        We unload only after a wider distance than normal renderer disable so we avoid
        mesh churn around the visual LOD thresholds.
    */
    private bool ShouldReleaseMeshStreamingMesh()
    {
        if (!useMeshStreaming)
            return false;

        if (!_hasReceivedLODUpdate)
            return false;

        var disableDistance = Mathf.Sqrt(tDisableSqr);
        var unloadDistance = disableDistance + Mathf.Max(0f, meshUnloadExtraMeters);
        var unloadSqr = unloadDistance * unloadDistance;

        if (_lastDistSqr <= unloadSqr)
            return false;

        return true;
    }

    /*
        Mesh streaming update.

        We request and apply loaded meshes when the object is relevant. When the object
        is safely far away, we swap to a placeholder and release the mesh interest.
    */
    private void UpdateMeshStreamingFromManager()
    {
        if (!useMeshStreaming)
            return;

        /*
            We rebuild the key from the stored meshAssetName every update. This keeps
            the runtime path stable even if the scene mesh is currently a placeholder.
        */
        if (autoBuildMeshStreamingKey)
            meshStreamingKey = BuildMeshStreamingKey();

        if (string.IsNullOrEmpty(meshStreamingKey))
            return;

        if (ShouldRequestMeshStreamingMesh())
        {
            RequestMeshStreamingMesh();
            ApplyLoadedStreamingMesh();
            return;
        }

        if (ShouldReleaseMeshStreamingMesh())
        {
            ApplyMeshStreamingPlaceholder();
            ReleaseMeshStreamingInterest();
        }
    }

    /*
        Mesh request.

        We hold exactly one interest for the current mesh key. If the key changes, we
        release the old interest before requesting the new one.
    */
    private void RequestMeshStreamingMesh()
    {
        if (!useMeshStreaming)
            return;

        if (string.IsNullOrEmpty(meshStreamingKey))
            return;

        var manager = VitaMeshStreamingManager.Instance;

        if (manager == null)
        {
            _meshStreamingDebugStatus =
                "Mesh streaming requested, but no VitaMeshStreamingManager exists in the scene.";

            Debug.LogWarning(
                _meshStreamingDebugStatus,
                this
            );

            return;
        }

        if (_meshStreamingHasMeshRequest && _activeMeshStreamingKey == meshStreamingKey)
            return;

        if (_meshStreamingHasMeshRequest && !string.IsNullOrEmpty(_activeMeshStreamingKey))
            manager.ReleaseMesh(_activeMeshStreamingKey);

        _activeMeshStreamingKey = meshStreamingKey;
        _meshStreamingHasMeshRequest = true;

        manager.RequestMesh(_activeMeshStreamingKey);
        _meshStreamingDebugStatus = manager.GetMeshDebugStatus(_activeMeshStreamingKey);
    }

    /*
        Mesh apply.

        If the requested mesh is loaded, we assign it to the MeshFilter or
        SkinnedMeshRenderer and let the normal LOD renderer gates decide visibility.
    */
    private void ApplyLoadedStreamingMesh()
    {
        if (!useMeshStreaming)
            return;

        if (string.IsNullOrEmpty(_activeMeshStreamingKey))
            return;

        var manager = VitaMeshStreamingManager.Instance;

        if (manager == null)
            return;

        var loadedMesh = manager.GetLoadedMesh(_activeMeshStreamingKey);

        if (loadedMesh == null)
        {
            _meshStreamingDebugStatus = manager.GetMeshDebugStatus(_activeMeshStreamingKey);

            if (!_meshStreamingWaitingLogged)
            {
                _meshStreamingWaitingLogged = true;

                Debug.Log(
                    "Waiting for streamed mesh: " +
                    _activeMeshStreamingKey +
                    "\n" +
                    _meshStreamingDebugStatus,
                    this
                );
            }

            return;
        }

        _meshStreamingWaitingLogged = false;
        _meshStreamingDebugStatus = "Loaded mesh: " + _activeMeshStreamingKey;

        var current = GetCurrentStreamingMesh();

        if (current == loadedMesh)
        {
            _meshStreamingMeshApplied = true;
            _meshStreamingUsingPlaceholder = false;
            return;
        }

        SetCurrentStreamingMesh(loadedMesh);

        _meshStreamingMeshApplied = true;
        _meshStreamingUsingPlaceholder = false;

        CacheMeshStreamingBounds();

        /*
            Once the real mesh is applied, we make sure the normal renderer gate is
            reapplied so a previously placeholder/null mesh can become visible again.
        */
        ApplyRendererEnableGate();
    }

    /*
        Mesh placeholder application.

        We remove the renderer's reference to the streamed mesh before releasing the
        manager reference. This makes the mesh eligible for Unity's unused asset pass.
    */
    private void ApplyMeshStreamingPlaceholder()
    {
        if (!useMeshStreaming)
            return;

        var current = GetCurrentStreamingMesh();

        if (unloadedPlaceholderMesh != null)
        {
            if (current != unloadedPlaceholderMesh)
                SetCurrentStreamingMesh(unloadedPlaceholderMesh);
        }
        else
        {
            if (current != null)
                SetCurrentStreamingMesh(null);
        }

        _meshStreamingMeshApplied = false;
        _meshStreamingUsingPlaceholder = true;
    }

    /*
        Mesh release.

        We release our manager interest so the mesh can be unloaded after the grace
        period once no other objects are using it.
    */
    private void ReleaseMeshStreamingInterest()
    {
        if (_meshStreamingHasMeshRequest &&
            VitaMeshStreamingManager.Instance != null &&
            !string.IsNullOrEmpty(_activeMeshStreamingKey))
            VitaMeshStreamingManager.Instance.ReleaseMesh(_activeMeshStreamingKey);

        _meshStreamingHasMeshRequest = false;
        _activeMeshStreamingKey = null;
        _meshStreamingWaitingLogged = false;
        _meshStreamingDebugStatus = "Released mesh streaming interest.";
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