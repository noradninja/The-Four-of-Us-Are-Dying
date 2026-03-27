using UnityEngine;

public enum ShadowUpdateMode
{
    EveryFrame,
    EveryOtherFrame,
    EveryThirdFrame,
    EveryFifthFrame,
    WhenCloseElseHold,
    WhenCloseElseEveryFifthFrame,
    Manual
}

[ExecuteInEditMode]
[RequireComponent(typeof(Light))]
public class ShadowAtlasLight : MonoBehaviour
{
    public enum AtlasShadowLightType
    {
        Directional,
        Spot
    }

    [Header("Atlas Settings")] public AtlasShadowLightType lightType = AtlasShadowLightType.Spot;

    public int priority = 0;
    public float closeDistance = 10f;
    public ShadowUpdateMode updateMode = ShadowUpdateMode.WhenCloseElseEveryFifthFrame;
    public int frameOffset = 0;

    [Header("Shadow Settings")] public float shadowStrength = 1f;

    public float bias = 0.001f;
    public float normalBias = 0.02f;

    [Header("Runtime")] [HideInInspector] public int atlasSlot = -1;

    [HideInInspector] public bool registered;
    [HideInInspector] public int lastRenderedFrame;
    [HideInInspector] public bool dirty = true;
    [HideInInspector] public bool forceRefresh = false;

    private Vector3 _lastPos;
    private Quaternion _lastRot;

    private int _originalCullingMask;
    private bool _unityLightingSuppressed;

    public Light unityLight { get; private set; }

    private void Awake()
    {
        CacheLight();
        CacheOriginalCullingMask();
        CaptureCurrentTransform();
    }

    private void OnEnable()
    {
        CacheLight();
        CacheOriginalCullingMask();
    }

    private void OnValidate()
    {
        CacheLight();
        CacheOriginalCullingMask();

        if (unityLight != null)
        {
            if (unityLight.type == LightType.Directional)
                lightType = AtlasShadowLightType.Directional;
            else if (unityLight.type == LightType.Spot)
                lightType = AtlasShadowLightType.Spot;
        }
    }

    private void CacheLight()
    {
        if (unityLight == null)
            unityLight = GetComponent<Light>();
    }

    private void CacheOriginalCullingMask()
    {
        if (unityLight == null)
            return;

        if (!_unityLightingSuppressed)
            _originalCullingMask = unityLight.cullingMask;
    }

    public bool HasValidLight()
    {
        return unityLight != null && enabled && gameObject.activeInHierarchy && unityLight.enabled;
    }

    public float GetCloseDistanceSqr()
    {
        return closeDistance * closeDistance;
    }

    public void CaptureCurrentTransform()
    {
        _lastPos = transform.position;
        _lastRot = transform.rotation;
    }

    public bool TransformChanged()
    {
        return transform.position != _lastPos || transform.rotation != _lastRot;
    }

    public void MarkDirty()
    {
        dirty = true;
    }

    public void ClearDirty()
    {
        dirty = false;
        forceRefresh = false;
    }

    /* Suppresses Unity's normal lighting contribution while our atlas owns this light. */
    public void SuppressUnityLighting()
    {
        if (unityLight == null)
            return;

        if (_unityLightingSuppressed)
            return;

        _originalCullingMask = unityLight.cullingMask;
        unityLight.cullingMask = 0;
        _unityLightingSuppressed = true;
    }

    /* Restores Unity lighting so the light falls back to normal built-in processing. */
    public void RestoreUnityLighting()
    {
        if (unityLight == null)
            return;

        if (!_unityLightingSuppressed)
            return;

        unityLight.cullingMask = _originalCullingMask;
        _unityLightingSuppressed = false;
    }

    public bool IsUnityLightingSuppressed()
    {
        return _unityLightingSuppressed;
    }
}