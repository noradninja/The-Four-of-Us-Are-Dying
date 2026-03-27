using System.Collections.Generic;
using UnityEngine;

[ExecuteInEditMode]
public class ShadowAtlasManager : MonoBehaviour
{
    public const int AtlasWidth = 1024;
    public const int AtlasHeight = 512;
    public const int SlotCount = 5;

    private static readonly int ID_CustomShadowAtlas = Shader.PropertyToID("_CustomShadowAtlas");

    private static readonly int ID_CustomDirWorldToShadow = Shader.PropertyToID("_CustomDirWorldToShadow");
    private static readonly int ID_CustomDirShadowRect = Shader.PropertyToID("_CustomDirShadowRect");
    private static readonly int ID_CustomDirShadowParams = Shader.PropertyToID("_CustomDirShadowParams");

    private static readonly int ID_CustomSpotWorldToShadow0 = Shader.PropertyToID("_CustomSpotWorldToShadow0");
    private static readonly int ID_CustomSpotWorldToShadow1 = Shader.PropertyToID("_CustomSpotWorldToShadow1");
    private static readonly int ID_CustomSpotWorldToShadow2 = Shader.PropertyToID("_CustomSpotWorldToShadow2");
    private static readonly int ID_CustomSpotWorldToShadow3 = Shader.PropertyToID("_CustomSpotWorldToShadow3");

    private static readonly int ID_CustomSpotShadowRect0 = Shader.PropertyToID("_CustomSpotShadowRect0");
    private static readonly int ID_CustomSpotShadowRect1 = Shader.PropertyToID("_CustomSpotShadowRect1");
    private static readonly int ID_CustomSpotShadowRect2 = Shader.PropertyToID("_CustomSpotShadowRect2");
    private static readonly int ID_CustomSpotShadowRect3 = Shader.PropertyToID("_CustomSpotShadowRect3");

    private static readonly int ID_CustomSpotPosRange0 = Shader.PropertyToID("_CustomSpotPosRange0");
    private static readonly int ID_CustomSpotPosRange1 = Shader.PropertyToID("_CustomSpotPosRange1");
    private static readonly int ID_CustomSpotPosRange2 = Shader.PropertyToID("_CustomSpotPosRange2");
    private static readonly int ID_CustomSpotPosRange3 = Shader.PropertyToID("_CustomSpotPosRange3");

    private static readonly int ID_CustomSpotDirCosOuter0 = Shader.PropertyToID("_CustomSpotDirCosOuter0");
    private static readonly int ID_CustomSpotDirCosOuter1 = Shader.PropertyToID("_CustomSpotDirCosOuter1");
    private static readonly int ID_CustomSpotDirCosOuter2 = Shader.PropertyToID("_CustomSpotDirCosOuter2");
    private static readonly int ID_CustomSpotDirCosOuter3 = Shader.PropertyToID("_CustomSpotDirCosOuter3");

    private static readonly int ID_CustomSpotColorStrength0 = Shader.PropertyToID("_CustomSpotColorStrength0");
    private static readonly int ID_CustomSpotColorStrength1 = Shader.PropertyToID("_CustomSpotColorStrength1");
    private static readonly int ID_CustomSpotColorStrength2 = Shader.PropertyToID("_CustomSpotColorStrength2");
    private static readonly int ID_CustomSpotColorStrength3 = Shader.PropertyToID("_CustomSpotColorStrength3");

    private static readonly int ID_CustomSpotShadowParams0 = Shader.PropertyToID("_CustomSpotShadowParams0");
    private static readonly int ID_CustomSpotShadowParams1 = Shader.PropertyToID("_CustomSpotShadowParams1");
    private static readonly int ID_CustomSpotShadowParams2 = Shader.PropertyToID("_CustomSpotShadowParams2");
    private static readonly int ID_CustomSpotShadowParams3 = Shader.PropertyToID("_CustomSpotShadowParams3");

    private static readonly int ID_CustomShadowVP = Shader.PropertyToID("_CustomShadowVP");

    private static readonly Matrix4x4 IdentityMatrix = Matrix4x4.identity;

    [Header("References")] public Transform playerTransform;

    public Camera atlasCamera;

    [Header("Fixed Atlas Lights")] public ShadowAtlasLight mainDirectional;

    public ShadowAtlasLight playerSpotlight;

    [Header("Dynamic Atlas Slots")] public ShadowAtlasLight extraSpotlight1;

    public ShadowAtlasLight extraSpotlight2;
    public ShadowAtlasLight extraSpotlight3;

    [Header("Atlas")] public bool createOnEnable = true;

    public bool clearAtlasOnCreate = true;
    public FilterMode atlasFilterMode = FilterMode.Bilinear;
    public TextureWrapMode atlasWrapMode = TextureWrapMode.Clamp;

    [Header("Debug Preview")] public bool maintainDebugPreviewTexture = true;

    [Header("Culling")] public LayerMask casterMask = ~0;

    [Header("Directional Shadow Framing")] public float directionalOrthoSize = 15.0f;

    public float directionalNear = 0.1f;
    public float directionalFar = 40.0f;
    public Vector3 directionalCenterOffset = Vector3.zero;

    [Header("Dynamic Slot Selection")] public bool enableDynamicSpotSelection = true;

    public int selectionUpdateIntervalFrames = 6;
    public float selectionMaxDistance = 7.0f;
    public float hysteresisDistanceBias = 2.0f;

    [Header("Caster Rendering")] public Shader atlasShadowCasterShader;

    public string replacementTag = "RenderType";

    [Header("Debug")] public bool uploadGlobalsEveryFrame = true;

    public bool forceFullRefresh = false;
    public bool logRefreshes = false;
    public bool logAssignments = false;
    public bool logDynamicSelection = false;

    [SerializeField] private RenderTexture _atlas;

#if UNITY_EDITOR
    [SerializeField] private RenderTexture _atlasDebugTexture;
#endif

    [SerializeField] private ShadowAtlasSlot[] _slots = new ShadowAtlasSlot[SlotCount];

    private int _frameCounter;
    private int _lastSelectionFrame = -999999;

    public RenderTexture AtlasTexture
    {
        get { return _atlas; }
    }

#if UNITY_EDITOR
    public RenderTexture AtlasDebugTexture
    {
        get { return _atlasDebugTexture; }
    }
#endif

    public int CurrentFrameCounter
    {
        get { return _frameCounter; }
    }

    private void LateUpdate()
    {
        _frameCounter++;

        BuildFixedSlots();
        EnsureAtlasCamera();
        EnsureAtlasResources();

        UpdateDynamicSpotSelection(false);
        AssignSlots();
        RenderScheduledLights();

#if UNITY_EDITOR
        if (maintainDebugPreviewTexture)
            RefreshDebugPreviewTexture();
#endif

        if (uploadGlobalsEveryFrame)
            UploadShaderGlobals();
    }

    private void OnEnable()
    {
        BuildFixedSlots();
        EnsureAtlasCamera();

        if (createOnEnable)
            EnsureAtlasResources();

        UpdateDynamicSpotSelection(true);
        AssignSlots();

        if (uploadGlobalsEveryFrame)
            UploadShaderGlobals();
    }

    private void OnDisable()
    {
        RestoreDynamicLightsToUnity();
        RestoreFixedLightsToUnity();
        ClearShaderGlobals();
        ReleaseAtlasResources();
        ReleaseHelperObjects();
    }

    private void OnValidate()
    {
        BuildFixedSlots();
        AssignSlots();

        if (_atlas != null)
            Shader.SetGlobalTexture(ID_CustomShadowAtlas, _atlas);
    }

    /* Rebuilds our fixed atlas tile layout. */
    private void BuildFixedSlots()
    {
        if (_slots == null || _slots.Length != SlotCount)
            _slots = new ShadowAtlasSlot[SlotCount];

        _slots[0] = CreateSlot(0, new RectInt(0, 0, 512, 512), true, "Directional");
        _slots[1] = CreateSlot(1, new RectInt(512, 0, 256, 256), false, "PlayerSpot");
        _slots[2] = CreateSlot(2, new RectInt(768, 0, 256, 256), false, "ExtraSpot1");
        _slots[3] = CreateSlot(3, new RectInt(512, 256, 256, 256), false, "ExtraSpot2");
        _slots[4] = CreateSlot(4, new RectInt(768, 256, 256, 256), false, "ExtraSpot3");
    }

    /* Creates one atlas tile descriptor. */
    private ShadowAtlasSlot CreateSlot(int index, RectInt rect, bool isDirectional, string debugName)
    {
        var slot = new ShadowAtlasSlot();
        slot.index = index;
        slot.pixelRect = rect;
        slot.resolution = rect.width;
        slot.isDirectional = isDirectional;
        slot.debugName = debugName;
        slot.uvScaleOffset = new Vector4(
            rect.width / (float)AtlasWidth,
            rect.height / (float)AtlasHeight,
            rect.x / (float)AtlasWidth,
            rect.y / (float)AtlasHeight
        );
        return slot;
    }

    /* Creates our hidden camera used to render atlas shadow tiles. */
    private void EnsureAtlasCamera()
    {
        if (atlasCamera != null)
            return;

        var go = new GameObject("Shadow Atlas Camera");
        go.hideFlags = HideFlags.HideAndDontSave;

        atlasCamera = go.AddComponent<Camera>();
        atlasCamera.enabled = false;
        atlasCamera.allowHDR = false;
        atlasCamera.allowMSAA = false;
        atlasCamera.useOcclusionCulling = false;
        atlasCamera.clearFlags = CameraClearFlags.SolidColor;
        atlasCamera.backgroundColor = Color.white;
        atlasCamera.orthographic = false;
        atlasCamera.nearClipPlane = 0.05f;
        atlasCamera.farClipPlane = 100.0f;
        atlasCamera.depthTextureMode = DepthTextureMode.None;
        atlasCamera.renderingPath = RenderingPath.Forward;
        atlasCamera.cullingMask = casterMask;
    }

    /* Ensures our atlas resources exist before we render or preview them. */
    private void EnsureAtlasResources()
    {
        EnsureShadowAtlas();

#if UNITY_EDITOR
        if (maintainDebugPreviewTexture)
            EnsureDebugAtlas();
        else
            ReleaseDebugAtlas();
#endif
    }

    /* Creates our live shadow atlas render target. */
    private void EnsureShadowAtlas()
    {
        if (_atlas != null && _atlas.width == AtlasWidth && _atlas.height == AtlasHeight)
            return;

        ReleaseShadowAtlasOnly();

        _atlas = new RenderTexture(AtlasWidth, AtlasHeight, 16, RenderTextureFormat.Shadowmap);
        _atlas.name = "CustomShadowAtlas_1024x512";
        _atlas.useMipMap = false;
        _atlas.autoGenerateMips = false;
        _atlas.filterMode = atlasFilterMode;
        _atlas.wrapMode = atlasWrapMode;
        _atlas.Create();

        Shader.SetGlobalTexture(ID_CustomShadowAtlas, _atlas);

        if (clearAtlasOnCreate)
            ClearWholeAtlas();
    }

    /* Releases all atlas resources. */
    private void ReleaseAtlasResources()
    {
        ReleaseShadowAtlasOnly();

#if UNITY_EDITOR
        ReleaseDebugAtlas();
#endif
    }

    /* Releases only the live shadow atlas. */
    private void ReleaseShadowAtlasOnly()
    {
        if (_atlas == null)
            return;

        _atlas.Release();

#if UNITY_EDITOR
        if (!Application.isPlaying)
            DestroyImmediate(_atlas);
        else
            Destroy(_atlas);
#else
        Destroy(_atlas);
#endif
        _atlas = null;
    }

    /* Releases our hidden helper camera when the manager shuts down. */
    private void ReleaseHelperObjects()
    {
        if (atlasCamera == null)
            return;

        if (atlasCamera.gameObject.hideFlags != HideFlags.HideAndDontSave)
            return;

#if UNITY_EDITOR
        if (!Application.isPlaying)
            DestroyImmediate(atlasCamera.gameObject);
        else
            Destroy(atlasCamera.gameObject);
#else
        Destroy(atlasCamera.gameObject);
#endif
        atlasCamera = null;
    }

    /* Clears the entire atlas to white depth. */
    private void ClearWholeAtlas()
    {
        if (_atlas == null)
            return;

        var previous = RenderTexture.active;
        RenderTexture.active = _atlas;
        GL.Clear(true, true, Color.white);
        RenderTexture.active = previous;
    }

    /* Clears one atlas tile before we redraw it. */
    private void ClearSlot(ShadowAtlasSlot slot)
    {
        if (_atlas == null)
            return;

        var previous = RenderTexture.active;
        RenderTexture.active = _atlas;

        GL.PushMatrix();
        GL.Viewport(new Rect(slot.pixelRect.x, slot.pixelRect.y, slot.pixelRect.width, slot.pixelRect.height));
        GL.Clear(true, true, Color.white);
        GL.PopMatrix();

        RenderTexture.active = previous;
    }

    /* Updates our three dynamic spotlight slots using distance, priority, and hysteresis. */
    private void UpdateDynamicSpotSelection(bool forceUpdate)
    {
        if (!enableDynamicSpotSelection)
            return;

        if (!forceUpdate)
        {
            var interval = Mathf.Max(1, selectionUpdateIntervalFrames);
            if (_frameCounter - _lastSelectionFrame < interval)
                return;
        }

        _lastSelectionFrame = _frameCounter;

        var candidates = GatherDynamicSpotCandidates();

        var slot2 = ChooseBestLightForSlot(extraSpotlight1, candidates);
        if (slot2 != null)
            candidates.Remove(slot2);

        var slot3 = ChooseBestLightForSlot(extraSpotlight2, candidates);
        if (slot3 != null)
            candidates.Remove(slot3);

        var slot4 = ChooseBestLightForSlot(extraSpotlight3, candidates);
        if (slot4 != null)
            candidates.Remove(slot4);

        SetDynamicSlot(ref extraSpotlight1, slot2, 2);
        SetDynamicSlot(ref extraSpotlight2, slot3, 3);
        SetDynamicSlot(ref extraSpotlight3, slot4, 4);
    }

    /* Gathers atlas-eligible spotlight candidates within our dynamic range. */
    private List<ShadowAtlasLight> GatherDynamicSpotCandidates()
    {
        var results = new List<ShadowAtlasLight>();
        var allLights = FindObjectsOfType<ShadowAtlasLight>();

        var maxDistSq = selectionMaxDistance * selectionMaxDistance;

        for (var i = 0; i < allLights.Length; i++)
        {
            var light = allLights[i];

            if (light == null)
                continue;

            if (!light.HasValidLight())
                continue;

            if (light == mainDirectional)
                continue;

            if (light == playerSpotlight)
                continue;

            if (light.lightType != ShadowAtlasLight.AtlasShadowLightType.Spot)
                continue;

            if (light.unityLight == null || light.unityLight.type != LightType.Spot)
                continue;

            if (playerTransform != null)
            {
                var distSq = (playerTransform.position - light.transform.position).sqrMagnitude;
                if (distSq > maxDistSq)
                    continue;
            }

            results.Add(light);
        }

        results.Sort(CompareCandidates);
        return results;
    }

    /* Sorts candidates by priority first, then by distance to the player. */
    private int CompareCandidates(ShadowAtlasLight a, ShadowAtlasLight b)
    {
        var priorityCompare = b.priority.CompareTo(a.priority);
        if (priorityCompare != 0)
            return priorityCompare;

        var da = GetPlayerDistanceSqr(a);
        var db = GetPlayerDistanceSqr(b);
        return da.CompareTo(db);
    }

    /* Gets squared distance from one light to the player. */
    private float GetPlayerDistanceSqr(ShadowAtlasLight light)
    {
        if (light == null || playerTransform == null)
            return float.MaxValue;

        return (playerTransform.position - light.transform.position).sqrMagnitude;
    }

    /* Keeps our current owner unless a challenger is clearly better. */
    private ShadowAtlasLight ChooseBestLightForSlot(ShadowAtlasLight current, List<ShadowAtlasLight> candidates)
    {
        if (candidates == null || candidates.Count == 0)
            return null;

        var best = candidates[0];

        if (current == null)
            return best;

        if (!candidates.Contains(current))
            return best;

        var currentPriority = current.priority;
        var bestPriority = best.priority;

        if (currentPriority > bestPriority)
            return current;

        if (currentPriority < bestPriority)
            return best;

        var currentDist = Mathf.Sqrt(GetPlayerDistanceSqr(current));
        var bestDist = Mathf.Sqrt(GetPlayerDistanceSqr(best));

        if (bestDist + hysteresisDistanceBias < currentDist)
            return best;

        return current;
    }

    /* Updates one dynamic slot and keeps Unity suppression matched to active slot ownership. */
    private void SetDynamicSlot(ref ShadowAtlasLight slotField, ShadowAtlasLight newLight, int atlasSlotIndex)
    {
        var oldLight = slotField;

        if (oldLight == newLight)
        {
            if (newLight != null)
            {
                newLight.atlasSlot = atlasSlotIndex;
                newLight.registered = true;

                if (!newLight.IsUnityLightingSuppressed())
                    newLight.SuppressUnityLighting();
            }

            return;
        }

        if (oldLight != null)
        {
            oldLight.atlasSlot = -1;
            oldLight.registered = false;
            oldLight.RestoreUnityLighting();
        }

        slotField = newLight;

        if (newLight != null)
        {
            newLight.atlasSlot = atlasSlotIndex;
            newLight.registered = true;
            newLight.SuppressUnityLighting();
        }

        if (logDynamicSelection)
        {
            var oldName = oldLight != null ? oldLight.name : "None";
            var newName = newLight != null ? newLight.name : "None";

            Debug.Log(
                "[ShadowAtlasManager] Dynamic slot " +
                atlasSlotIndex +
                " changed from " +
                oldName +
                " to " +
                newName +
                "."
            );
        }
    }

    /* Restores dropped dynamic slot lights to normal Unity lighting. */
    private void RestoreDynamicLightsToUnity()
    {
        if (extraSpotlight1 != null) extraSpotlight1.RestoreUnityLighting();
        if (extraSpotlight2 != null) extraSpotlight2.RestoreUnityLighting();
        if (extraSpotlight3 != null) extraSpotlight3.RestoreUnityLighting();
    }

    /* Restores fixed lights to Unity lighting when our manager shuts down. */
    private void RestoreFixedLightsToUnity()
    {
        if (mainDirectional != null) mainDirectional.RestoreUnityLighting();
        if (playerSpotlight != null) playerSpotlight.RestoreUnityLighting();
    }

    /* Assigns atlas slot metadata to all currently active atlas owners. */
    private void AssignSlots()
    {
        ResetRegistration(mainDirectional);
        ResetRegistration(playerSpotlight);
        ResetRegistration(extraSpotlight1);
        ResetRegistration(extraSpotlight2);
        ResetRegistration(extraSpotlight3);

        if (mainDirectional != null)
            mainDirectional.SuppressUnityLighting();

        if (playerSpotlight != null)
            playerSpotlight.SuppressUnityLighting();

        AssignLightToSlot(mainDirectional, 0, true);
        AssignLightToSlot(playerSpotlight, 1, true);
        AssignLightToSlot(extraSpotlight1, 2, true);
        AssignLightToSlot(extraSpotlight2, 3, true);
        AssignLightToSlot(extraSpotlight3, 4, true);
    }

    /* Clears runtime slot registration data for one light. */
    private void ResetRegistration(ShadowAtlasLight light)
    {
        if (light == null)
            return;

        light.registered = false;
        light.atlasSlot = -1;
    }

    /* Registers a light to a slot and suppresses Unity lighting for active atlas owners. */
    private void AssignLightToSlot(ShadowAtlasLight light, int slotIndex, bool suppressUnityLighting)
    {
        if (light == null)
            return;

        light.registered = true;
        light.atlasSlot = slotIndex;

        if (suppressUnityLighting)
            light.SuppressUnityLighting();

        if (logAssignments)
            Debug.Log(
                "[ShadowAtlasManager] Assigned " +
                light.name +
                " -> slot " +
                slotIndex +
                " (" +
                _slots[slotIndex].debugName +
                ")."
            );
    }

    /* Renders all active atlas owners that need a refresh this frame. */
    private void RenderScheduledLights()
    {
        RenderIfNeeded(mainDirectional, 0, true);
        RenderIfNeeded(playerSpotlight, 1, true);
        RenderIfNeeded(extraSpotlight1, 2, IsNearPlayer(extraSpotlight1));
        RenderIfNeeded(extraSpotlight2, 3, IsNearPlayer(extraSpotlight2));
        RenderIfNeeded(extraSpotlight3, 4, IsNearPlayer(extraSpotlight3));
    }

    /* Renders one light into its atlas tile if its schedule says to update. */
    private void RenderIfNeeded(ShadowAtlasLight light, int slotIndex, bool isNearPlayer)
    {
        if (light == null || !light.HasValidLight())
            return;

        var refresh = ShouldRefreshLight(light, isNearPlayer);
        if (!refresh)
            return;

        if (logRefreshes)
            Debug.Log(
                "[ShadowAtlasManager] Rendering " +
                light.name +
                " into slot " +
                slotIndex +
                " on frame " +
                _frameCounter +
                "."
            );

        var success = false;

        if (light.lightType == ShadowAtlasLight.AtlasShadowLightType.Directional)
            success = RenderDirectionalToSlot(light, _slots[slotIndex]);
        else
            success = RenderSpotToSlot(light, _slots[slotIndex]);

        if (success)
            MarkLightRendered(light);
    }

    /* Decides whether one atlas light needs a shadow refresh this frame. */
    public bool ShouldRefreshLight(ShadowAtlasLight light, bool isNearPlayer)
    {
        if (light == null)
            return false;

        if (!light.HasValidLight())
            return false;

        if (forceFullRefresh)
            return true;

        if (light.forceRefresh)
            return true;

        if (light.dirty)
            return true;

        if (light.TransformChanged())
            return true;

        switch (light.updateMode)
        {
            case ShadowUpdateMode.EveryFrame:
                return true;

            case ShadowUpdateMode.EveryOtherFrame:
                return (_frameCounter + light.frameOffset) % 2 == 0;

            case ShadowUpdateMode.EveryThirdFrame:
                return (_frameCounter + light.frameOffset) % 3 == 0;

            case ShadowUpdateMode.EveryFifthFrame:
                return (_frameCounter + light.frameOffset) % 5 == 0;

            case ShadowUpdateMode.WhenCloseElseHold:
                return isNearPlayer;

            case ShadowUpdateMode.WhenCloseElseEveryFifthFrame:
                if (isNearPlayer)
                    return true;

                return (_frameCounter + light.frameOffset) % 5 == 0;

            case ShadowUpdateMode.Manual:
            default:
                return false;
        }
    }

    /* Checks whether a light is close enough to the player for near-based updates. */
    public bool IsNearPlayer(ShadowAtlasLight light)
    {
        if (light == null || playerTransform == null)
            return false;

        var sqrDist = (playerTransform.position - light.transform.position).sqrMagnitude;
        return sqrDist <= light.GetCloseDistanceSqr();
    }

    /* Marks one light as freshly rendered and updates its cached state. */
    public void MarkLightRendered(ShadowAtlasLight light)
    {
        if (light == null)
            return;

        light.lastRenderedFrame = _frameCounter;
        light.ClearDirty();
        light.CaptureCurrentTransform();
    }

    /* Renders our fixed directional light into its atlas tile. */
    private bool RenderDirectionalToSlot(ShadowAtlasLight light, ShadowAtlasSlot slot)
    {
        if (!PrepareRender(light))
            return false;

        Matrix4x4 gpuProj;
        Matrix4x4 view;
        Matrix4x4 rawVP;
        Matrix4x4 worldToShadowTex;

        BuildDirectionalMatrices(light, out view, out gpuProj, out rawVP, out worldToShadowTex);

        atlasCamera.targetTexture = _atlas;
        atlasCamera.pixelRect =
            new Rect(slot.pixelRect.x, slot.pixelRect.y, slot.pixelRect.width, slot.pixelRect.height);
        atlasCamera.rect = new Rect(
            slot.pixelRect.x / (float)AtlasWidth,
            slot.pixelRect.y / (float)AtlasHeight,
            slot.pixelRect.width / (float)AtlasWidth,
            slot.pixelRect.height / (float)AtlasHeight
        );

        atlasCamera.cullingMask = casterMask;
        atlasCamera.clearFlags = CameraClearFlags.SolidColor;
        atlasCamera.backgroundColor = Color.white;
        atlasCamera.orthographic = true;
        atlasCamera.orthographicSize = directionalOrthoSize;
        atlasCamera.nearClipPlane = directionalNear;
        atlasCamera.farClipPlane = directionalFar;
        atlasCamera.worldToCameraMatrix = view;
        atlasCamera.projectionMatrix = gpuProj;

        Shader.SetGlobalMatrix(ID_CustomShadowVP, rawVP);

        ClearSlot(slot);
        atlasCamera.RenderWithShader(atlasShadowCasterShader, replacementTag);

        return true;
    }

    /* Renders one spotlight into its atlas tile. */
    private bool RenderSpotToSlot(ShadowAtlasLight light, ShadowAtlasSlot slot)
    {
        if (!PrepareRender(light))
            return false;

        var l = light.unityLight;
        if (l == null)
            return false;

        Matrix4x4 gpuProj;
        Matrix4x4 view;
        Matrix4x4 rawVP;
        Matrix4x4 worldToShadowTex;

        BuildSpotMatrices(l, out view, out gpuProj, out rawVP, out worldToShadowTex);

        atlasCamera.targetTexture = _atlas;
        atlasCamera.pixelRect =
            new Rect(slot.pixelRect.x, slot.pixelRect.y, slot.pixelRect.width, slot.pixelRect.height);
        atlasCamera.rect = new Rect(
            slot.pixelRect.x / (float)AtlasWidth,
            slot.pixelRect.y / (float)AtlasHeight,
            slot.pixelRect.width / (float)AtlasWidth,
            slot.pixelRect.height / (float)AtlasHeight
        );

        atlasCamera.cullingMask = casterMask;
        atlasCamera.clearFlags = CameraClearFlags.SolidColor;
        atlasCamera.backgroundColor = Color.white;
        atlasCamera.orthographic = false;
        atlasCamera.fieldOfView = l.spotAngle;
        atlasCamera.aspect = 1.0f;
        atlasCamera.nearClipPlane = 0.05f;
        atlasCamera.farClipPlane = Mathf.Max(0.06f, l.range);
        atlasCamera.worldToCameraMatrix = view;
        atlasCamera.projectionMatrix = gpuProj;

        Shader.SetGlobalMatrix(ID_CustomShadowVP, rawVP);

        ClearSlot(slot);
        atlasCamera.RenderWithShader(atlasShadowCasterShader, replacementTag);

        return true;
    }

    /* Verifies that our render prerequisites are valid. */
    private bool PrepareRender(ShadowAtlasLight light)
    {
        if (_atlas == null)
            return false;

        if (atlasCamera == null)
            return false;

        if (atlasShadowCasterShader == null)
            return false;

        if (!light.HasValidLight())
            return false;

        return true;
    }

    /* Uploads current atlas and light data to the shader globals. */
    public void UploadShaderGlobals()
    {
        if (_atlas != null)
            Shader.SetGlobalTexture(ID_CustomShadowAtlas, _atlas);

        UploadDirectionalGlobals();
        UploadSpotGlobals(0, playerSpotlight, 1);
        UploadSpotGlobals(1, extraSpotlight1, 2);
        UploadSpotGlobals(2, extraSpotlight2, 3);
        UploadSpotGlobals(3, extraSpotlight3, 4);
    }

    /* Uploads our directional atlas light state. */
    private void UploadDirectionalGlobals()
    {
        if (mainDirectional == null || !mainDirectional.HasValidLight())
        {
            Shader.SetGlobalMatrix(ID_CustomDirWorldToShadow, IdentityMatrix);
            Shader.SetGlobalVector(ID_CustomDirShadowRect, Vector4.zero);
            Shader.SetGlobalVector(ID_CustomDirShadowParams, Vector4.zero);
            return;
        }

        Matrix4x4 view;
        Matrix4x4 gpuProj;
        Matrix4x4 rawVP;
        Matrix4x4 worldToShadowTex;

        BuildDirectionalMatrices(mainDirectional, out view, out gpuProj, out rawVP, out worldToShadowTex);

        var slot = _slots[0];

        Shader.SetGlobalMatrix(ID_CustomDirWorldToShadow, worldToShadowTex);
        Shader.SetGlobalVector(ID_CustomDirShadowRect, slot.uvScaleOffset);
        Shader.SetGlobalVector(
            ID_CustomDirShadowParams,
            new Vector4(mainDirectional.shadowStrength, mainDirectional.bias, mainDirectional.normalBias, 1.0f)
        );
    }

    /* Uploads one spotlight atlas light state. */
    private void UploadSpotGlobals(int spotIndex, ShadowAtlasLight light, int slotIndex)
    {
        int idWorldToShadow;
        int idShadowRect;
        int idPosRange;
        int idDirCosOuter;
        int idColorStrength;
        int idShadowParams;

        GetSpotShaderIDs(
            spotIndex,
            out idWorldToShadow,
            out idShadowRect,
            out idPosRange,
            out idDirCosOuter,
            out idColorStrength,
            out idShadowParams
        );

        if (light == null || !light.HasValidLight())
        {
            Shader.SetGlobalMatrix(idWorldToShadow, IdentityMatrix);
            Shader.SetGlobalVector(idShadowRect, Vector4.zero);
            Shader.SetGlobalVector(idPosRange, Vector4.zero);
            Shader.SetGlobalVector(idDirCosOuter, Vector4.zero);
            Shader.SetGlobalVector(idColorStrength, Vector4.zero);
            Shader.SetGlobalVector(idShadowParams, Vector4.zero);
            return;
        }

        var l = light.unityLight;
        var slot = _slots[slotIndex];

        Matrix4x4 view;
        Matrix4x4 gpuProj;
        Matrix4x4 rawVP;
        Matrix4x4 worldToShadowTex;

        BuildSpotMatrices(l, out view, out gpuProj, out rawVP, out worldToShadowTex);

        var pos = l.transform.position;
        var dir = l.transform.forward;
        var c = l.color;
        var intensity = l.intensity;
        var range = l.range;
        var cosOuter = Mathf.Cos(0.5f * l.spotAngle * Mathf.Deg2Rad);

        Shader.SetGlobalMatrix(idWorldToShadow, worldToShadowTex);
        Shader.SetGlobalVector(idShadowRect, slot.uvScaleOffset);
        Shader.SetGlobalVector(idPosRange, new Vector4(pos.x, pos.y, pos.z, range));
        Shader.SetGlobalVector(idDirCosOuter, new Vector4(dir.x, dir.y, dir.z, cosOuter));
        Shader.SetGlobalVector(idColorStrength, new Vector4(c.r, c.g, c.b, intensity));
        Shader.SetGlobalVector(idShadowParams, new Vector4(light.shadowStrength, light.bias, light.normalBias, 1.0f));
    }

    /* Clears our custom shader globals when the manager is disabled. */
    private void ClearShaderGlobals()
    {
        Shader.SetGlobalVector(ID_CustomDirShadowRect, Vector4.zero);
        Shader.SetGlobalVector(ID_CustomDirShadowParams, Vector4.zero);

        Shader.SetGlobalVector(ID_CustomSpotShadowRect0, Vector4.zero);
        Shader.SetGlobalVector(ID_CustomSpotShadowRect1, Vector4.zero);
        Shader.SetGlobalVector(ID_CustomSpotShadowRect2, Vector4.zero);
        Shader.SetGlobalVector(ID_CustomSpotShadowRect3, Vector4.zero);

        Shader.SetGlobalVector(ID_CustomSpotPosRange0, Vector4.zero);
        Shader.SetGlobalVector(ID_CustomSpotPosRange1, Vector4.zero);
        Shader.SetGlobalVector(ID_CustomSpotPosRange2, Vector4.zero);
        Shader.SetGlobalVector(ID_CustomSpotPosRange3, Vector4.zero);

        Shader.SetGlobalVector(ID_CustomSpotDirCosOuter0, Vector4.zero);
        Shader.SetGlobalVector(ID_CustomSpotDirCosOuter1, Vector4.zero);
        Shader.SetGlobalVector(ID_CustomSpotDirCosOuter2, Vector4.zero);
        Shader.SetGlobalVector(ID_CustomSpotDirCosOuter3, Vector4.zero);

        Shader.SetGlobalVector(ID_CustomSpotColorStrength0, Vector4.zero);
        Shader.SetGlobalVector(ID_CustomSpotColorStrength1, Vector4.zero);
        Shader.SetGlobalVector(ID_CustomSpotColorStrength2, Vector4.zero);
        Shader.SetGlobalVector(ID_CustomSpotColorStrength3, Vector4.zero);

        Shader.SetGlobalVector(ID_CustomSpotShadowParams0, Vector4.zero);
        Shader.SetGlobalVector(ID_CustomSpotShadowParams1, Vector4.zero);
        Shader.SetGlobalVector(ID_CustomSpotShadowParams2, Vector4.zero);
        Shader.SetGlobalVector(ID_CustomSpotShadowParams3, Vector4.zero);
    }

    /* Resolves shader property IDs for one spotlight slot. */
    private void GetSpotShaderIDs(
        int spotIndex,
        out int idWorldToShadow,
        out int idShadowRect,
        out int idPosRange,
        out int idDirCosOuter,
        out int idColorStrength,
        out int idShadowParams)
    {
        switch (spotIndex)
        {
            case 0:
                idWorldToShadow = ID_CustomSpotWorldToShadow0;
                idShadowRect = ID_CustomSpotShadowRect0;
                idPosRange = ID_CustomSpotPosRange0;
                idDirCosOuter = ID_CustomSpotDirCosOuter0;
                idColorStrength = ID_CustomSpotColorStrength0;
                idShadowParams = ID_CustomSpotShadowParams0;
                break;

            case 1:
                idWorldToShadow = ID_CustomSpotWorldToShadow1;
                idShadowRect = ID_CustomSpotShadowRect1;
                idPosRange = ID_CustomSpotPosRange1;
                idDirCosOuter = ID_CustomSpotDirCosOuter1;
                idColorStrength = ID_CustomSpotColorStrength1;
                idShadowParams = ID_CustomSpotShadowParams1;
                break;

            case 2:
                idWorldToShadow = ID_CustomSpotWorldToShadow2;
                idShadowRect = ID_CustomSpotShadowRect2;
                idPosRange = ID_CustomSpotPosRange2;
                idDirCosOuter = ID_CustomSpotDirCosOuter2;
                idColorStrength = ID_CustomSpotColorStrength2;
                idShadowParams = ID_CustomSpotShadowParams2;
                break;

            default:
                idWorldToShadow = ID_CustomSpotWorldToShadow3;
                idShadowRect = ID_CustomSpotShadowRect3;
                idPosRange = ID_CustomSpotPosRange3;
                idDirCosOuter = ID_CustomSpotDirCosOuter3;
                idColorStrength = ID_CustomSpotColorStrength3;
                idShadowParams = ID_CustomSpotShadowParams3;
                break;
        }
    }

    /* Builds spotlight projection and shadow matrices. */
    private void BuildSpotMatrices(
        Light spotLight,
        out Matrix4x4 view,
        out Matrix4x4 gpuProj,
        out Matrix4x4 rawVP,
        out Matrix4x4 worldToShadowTex)
    {
        /* Rotates our shadow view so it looks down the spotlight cone rather than backward. */
        var lightWorld =
            Matrix4x4.TRS(
                spotLight.transform.position,
                spotLight.transform.rotation * Quaternion.Euler(0.0f, 180.0f, 0.0f),
                Vector3.one
            );

        view = lightWorld.inverse;

        var proj = Matrix4x4.Perspective(
            spotLight.spotAngle,
            1.0f,
            0.05f,
            Mathf.Max(0.06f, spotLight.range)
        );

        gpuProj = GL.GetGPUProjectionMatrix(proj, true);
        rawVP = gpuProj * view;
        worldToShadowTex = GetShadowTexScaleBias() * rawVP;
    }

    /* Builds directional projection and shadow matrices. */
    private void BuildDirectionalMatrices(
        ShadowAtlasLight dirLight,
        out Matrix4x4 view,
        out Matrix4x4 gpuProj,
        out Matrix4x4 rawVP,
        out Matrix4x4 worldToShadowTex)
    {
        var t = dirLight.transform;

        var center = playerTransform != null
            ? playerTransform.position + directionalCenterOffset
            : directionalCenterOffset;

        var forward = t.forward;
        var cameraPos = center - forward * (directionalFar * 0.5f);

        view = Matrix4x4.TRS(cameraPos, t.rotation, Vector3.one).inverse;

        var proj = Matrix4x4.Ortho(
            -directionalOrthoSize,
            directionalOrthoSize,
            -directionalOrthoSize,
            directionalOrthoSize,
            directionalNear,
            directionalFar
        );

        gpuProj = GL.GetGPUProjectionMatrix(proj, true);
        rawVP = gpuProj * view;
        worldToShadowTex = GetShadowTexScaleBias() * rawVP;
    }

    /* Builds the 0..1 shadow texture remap matrix. */
    private static Matrix4x4 GetShadowTexScaleBias()
    {
        var m = Matrix4x4.identity;
        m.m00 = 0.5f;
        m.m03 = 0.5f;
        m.m11 = 0.5f;
        m.m13 = 0.5f;
        m.m22 = 0.5f;
        m.m23 = 0.5f;
        return m;
    }

    [System.Serializable]
    public struct ShadowAtlasSlot
    {
        public int index;
        public RectInt pixelRect;
        public Vector4 uvScaleOffset;
        public int resolution;
        public bool isDirectional;
        public string debugName;
    }

#if UNITY_EDITOR

    /* Creates our editor-only debug preview copy of the atlas. */
    private void EnsureDebugAtlas()
    {
        if (_atlasDebugTexture != null &&
            _atlasDebugTexture.width == AtlasWidth &&
            _atlasDebugTexture.height == AtlasHeight)
            return;

        ReleaseDebugAtlas();

        _atlasDebugTexture = new RenderTexture(AtlasWidth, AtlasHeight, 0, RenderTextureFormat.ARGB32);
        _atlasDebugTexture.name = "CustomShadowAtlas_Debug_1024x512";
        _atlasDebugTexture.useMipMap = false;
        _atlasDebugTexture.autoGenerateMips = false;
        _atlasDebugTexture.filterMode = FilterMode.Point;
        _atlasDebugTexture.wrapMode = TextureWrapMode.Clamp;
        _atlasDebugTexture.Create();
    }

    /* Releases our editor-only debug preview atlas. */
    private void ReleaseDebugAtlas()
    {
        if (_atlasDebugTexture == null)
            return;

        _atlasDebugTexture.Release();

        if (!Application.isPlaying)
            DestroyImmediate(_atlasDebugTexture);
        else
            Destroy(_atlasDebugTexture);

        _atlasDebugTexture = null;
    }

    /* Copies the live atlas into our editor preview texture. */
    private void RefreshDebugPreviewTexture()
    {
        if (_atlas == null || _atlasDebugTexture == null)
            return;

        Graphics.Blit(_atlas, _atlasDebugTexture);
    }

#endif
}