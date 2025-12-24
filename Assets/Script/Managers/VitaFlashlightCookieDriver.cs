using System;
using UnityEngine;
using UnityEngine.Rendering;

public class VitaFlashlightCookieDriver : MonoBehaviour
{
    public Shader depthShader;
    private Camera shadowCam;
    private RenderTexture shadowMap;
    private CommandBuffer shadowCmd;
    public Light spotLight;
    public GameObject lightObject;
    public GameObject thisParent;
    public float activeParent;
    public bool parentIsActive;

    private const int ShadowResolution = 64;

    private static readonly int _CustomSpotShadowMap = Shader.PropertyToID("_CustomSpotShadowMap");
    private static readonly int _CustomSpotMatrix = Shader.PropertyToID("_CustomSpotMatrix");
    private static readonly int _CustomSpotPosition = Shader.PropertyToID("_CustomSpotPosition");
    private static readonly int _CustomSpotDirection = Shader.PropertyToID("_CustomSpotDirection");
    private static readonly int _CustomSpotRange = Shader.PropertyToID("_CustomSpotRange");
    private static readonly int _CustomSpotAngle = Shader.PropertyToID("_CustomSpotAngle");
    private static readonly int _CustomSpotIntensity = Shader.PropertyToID("_CustomSpotIntensity");
    private static readonly int _CustomSpotCookie = Shader.PropertyToID("_CustomSpotCookie");
    private static readonly int _CustomSpotColor = Shader.PropertyToID("_CustomSpotColor");
    private static readonly int _CustomSpotEnabled = Shader.PropertyToID("_CustomSpotEnabled");

    void OnEnable()
    {
        if (spotLight.type != LightType.Spot)
        {
            Debug.LogError("SpotlightShadowCaster requires a Spot light.");
            enabled = false;
            return;
        }

        SetupResources();
        SetupCommandBuffer();
    }

    void SetupResources()
    {
        if (!depthShader) depthShader = Shader.Find("Hidden/Vita/DepthOnlyAlphaClip");

        if (shadowCam == null)
        {
            GameObject camObj = new GameObject("SpotShadowCamera");
            camObj.hideFlags = HideFlags.HideAndDontSave;
            shadowCam = camObj.AddComponent<Camera>();
            shadowCam.enabled = false;
            shadowCam.clearFlags = CameraClearFlags.SolidColor;
            shadowCam.backgroundColor = Color.white;
            shadowCam.orthographic = false;
            shadowCam.renderingPath = RenderingPath.Forward;
        }

        if (shadowMap == null)
        {
            shadowMap = new RenderTexture(ShadowResolution, ShadowResolution, 16, RenderTextureFormat.Shadowmap);
            shadowMap.wrapMode = TextureWrapMode.Clamp;
            shadowMap.filterMode = FilterMode.Bilinear;
            shadowMap.useMipMap = false;
            shadowMap.autoGenerateMips = false;
        }
    }

    void SetupCommandBuffer()
    {
        if (shadowCmd != null)
        {
            shadowCmd.Release();
        }

        shadowCmd = new CommandBuffer { name = "Render Spotlight ShadowMap" };
        spotLight.RemoveAllCommandBuffers();
        spotLight.AddCommandBuffer(LightEvent.BeforeScreenspaceMask, shadowCmd);
    }

    void Update()
    {
        parentIsActive = thisParent.activeSelf;
        activeParent = parentIsActive ? 1f : 0f;
    }

    void LateUpdate()
    {
        bool lightActive = spotLight.enabled && parentIsActive;

        Shader.SetGlobalFloat(_CustomSpotEnabled, lightActive ? 1.0f : 0.0f);

        if (!lightActive)
        {
            Shader.SetGlobalTexture(_CustomSpotShadowMap, Texture2D.blackTexture);
            Shader.SetGlobalTexture(_CustomSpotCookie, Texture2D.blackTexture);
            return;
        }

        if (!shadowCam || !shadowMap || !depthShader) return;

        // Custom projection matrix based on parent rotation and child position
        Vector3 pos = lightObject.transform.position;
        Vector3 dir = thisParent.transform.rotation * Vector3.right;

        Vector3 up = Vector3.up;
        if (Mathf.Abs(Vector3.Dot(dir.normalized, up)) > 0.99f)
            up = Vector3.forward;

        Matrix4x4 view = Matrix4x4.LookAt(pos, pos + dir, up);
        Matrix4x4 proj = Matrix4x4.Perspective(spotLight.spotAngle, 1f, spotLight.shadowNearPlane, spotLight.range);
        Matrix4x4 vp = GL.GetGPUProjectionMatrix(proj, false) * view;

        shadowCmd.Clear();
        shadowCmd.SetRenderTarget(shadowMap);
        shadowCmd.ClearRenderTarget(true, true, Color.white);
        shadowCmd.SetGlobalTexture(_CustomSpotShadowMap, shadowMap);
        shadowCmd.SetGlobalMatrix(_CustomSpotMatrix, vp);

        shadowCam.targetTexture = shadowMap;
        shadowCam.SetReplacementShader(depthShader, "RenderType");
        shadowCam.Render();

        Shader.SetGlobalVector(_CustomSpotPosition, pos);
        Shader.SetGlobalVector(_CustomSpotDirection, -dir);
        Shader.SetGlobalMatrix(_CustomSpotMatrix, vp);
        Shader.SetGlobalFloat(_CustomSpotRange, spotLight.range);
        Shader.SetGlobalFloat(_CustomSpotAngle, Mathf.Deg2Rad * spotLight.spotAngle);
        Shader.SetGlobalFloat(_CustomSpotIntensity, spotLight.intensity);
        Shader.SetGlobalColor(_CustomSpotColor, spotLight.color);

        if (spotLight.cookie != null)
            Shader.SetGlobalTexture(_CustomSpotCookie, spotLight.cookie);
        else
            Shader.SetGlobalTexture(_CustomSpotCookie, Texture2D.blackTexture);
    }

    void OnDisable()
    {
        if (shadowCam)
            DestroyImmediate(shadowCam.gameObject);
        if (shadowMap)
            shadowMap.Release();
        if (shadowCmd != null)
            spotLight.RemoveCommandBuffer(LightEvent.BeforeScreenspaceMask, shadowCmd);
    }

    void OnDrawGizmos()
    {
        if (!lightObject || !thisParent) return;

        Vector3 pos = lightObject.transform.position;
        Vector3 dir = thisParent.transform.rotation * Vector3.right;

        Gizmos.color = Color.yellow;
        Gizmos.DrawRay(pos, dir * 2.0f);

        if (spotLight)
        {
            float angle = spotLight.spotAngle * 0.5f;
            float length = spotLight.range * 0.2f;
            Quaternion rot = Quaternion.LookRotation(dir);
            Vector3 right = rot * Quaternion.Euler(0, angle, 0) * Vector3.forward;
            Vector3 left = rot * Quaternion.Euler(0, -angle, 0) * Vector3.forward;

            Gizmos.color = new Color(1f, 1f, 0f, 0.3f);
            Gizmos.DrawRay(pos, right * length);
            Gizmos.DrawRay(pos, left * length);
        }
    }
}
