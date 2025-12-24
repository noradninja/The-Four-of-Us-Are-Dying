using System;
using UnityEngine;
using UnityEngine.Rendering;

[ExecuteInEditMode]
public class SpotlightShadowCaster : MonoBehaviour
{
    public Light spotLight;
    public GameObject lightObject;
    public GameObject thisParent;
    public Shader depthShader;

    private RenderTexture shadowMap;
    private CommandBuffer shadowCmd;

    private const int ShadowResolution = 64;

    private static readonly int _CustomSpotShadowMap = Shader.PropertyToID("_CustomSpotShadowMap");
    private static readonly int _CustomSpotMatrix = Shader.PropertyToID("_CustomSpotMatrix");
    private static readonly int _CustomSpotData0 = Shader.PropertyToID("_CustomSpotData0"); // dir.xyz, intensity
    private static readonly int _CustomSpotData1 = Shader.PropertyToID("_CustomSpotData1"); // pos.xyz, angle(rad)
    private static readonly int _CustomSpotData2 = Shader.PropertyToID("_CustomSpotData2"); // color.rgb, enabled
    private static readonly int _CustomSpotRange = Shader.PropertyToID("_CustomSpotRange"); // (optional legacy)
    private static readonly int _CustomSpotCookie = Shader.PropertyToID("_CustomSpotCookie");

    Vector3 lastDir, lastPos;
    float lastAngle, lastIntensity;
    Color lastColor;
    bool lastEnabled;

    void OnEnable()
    {
        if (!spotLight || spotLight.type != LightType.Spot)
        {
            Debug.LogError("SpotlightShadowCaster requires a valid Spot light.");
            enabled = false;
            return;
        }

        if (!depthShader)
            depthShader = Shader.Find("Hidden/Vita/LinearEyeDepthBlit");

        SetupResources();
        SetupCommandBuffer();
    }

    void SetupResources()
    {
        if (shadowMap == null)
        {
            shadowMap = new RenderTexture(ShadowResolution, ShadowResolution, 0, RenderTextureFormat.Default);
            shadowMap.wrapMode = TextureWrapMode.Clamp;
            shadowMap.filterMode = FilterMode.Bilinear;
            shadowMap.useMipMap = false;
            shadowMap.autoGenerateMips = false;
        }
    }

    void SetupCommandBuffer()
    {
        if (shadowCmd != null)
            shadowCmd.Release();

        shadowCmd = new CommandBuffer { name = "Render Spotlight ShadowMap" };
        spotLight.RemoveAllCommandBuffers();
        spotLight.AddCommandBuffer(LightEvent.BeforeShadowMapPass, shadowCmd);
    }

    void LateUpdate()
    {
        bool isActive = spotLight.enabled && thisParent.activeSelf;
        float enabledFlag = isActive ? 1.0f : 0.0f;

        Vector3 spotDir = thisParent.transform.rotation * lightObject.transform.right;
        Vector3 spotPos = lightObject.transform.position;
        float spotAngle = Mathf.Deg2Rad * spotLight.spotAngle;
        float intensity = spotLight.intensity;
        Color color = spotLight.color;

        bool changed = !ApproximatelyEqual(lastDir, spotDir) ||
                       !ApproximatelyEqual(lastPos, spotPos) ||
                       lastAngle != spotAngle ||
                       lastIntensity != intensity ||
                       lastColor != color ||
                       lastEnabled != isActive;

        if (!isActive)
        {
            Shader.SetGlobalTexture(_CustomSpotShadowMap, Texture2D.blackTexture);
            Shader.SetGlobalTexture(_CustomSpotCookie, Texture2D.blackTexture);
            Shader.SetGlobalVector(_CustomSpotData2, new Vector4(0, 0, 0, 0));
            return;
        }

        if (changed)
        {
            // View matrix and projection matrix
            Matrix4x4 view = Matrix4x4.LookAt(spotPos, spotPos + spotDir, Vector3.up);
            Matrix4x4 proj = Matrix4x4.Perspective(spotLight.spotAngle, 1f, spotLight.shadowNearPlane, spotLight.range);
            Matrix4x4 vp = GL.GetGPUProjectionMatrix(proj, false) * view;

            Shader.SetGlobalMatrix(_CustomSpotMatrix, vp);
            Shader.SetGlobalTexture(_CustomSpotShadowMap, shadowMap);
            Shader.SetGlobalTexture(_CustomSpotCookie, spotLight.cookie ? spotLight.cookie : Texture2D.blackTexture);
            Shader.SetGlobalVector(_CustomSpotData0, new Vector4(spotDir.x, spotDir.y, spotDir.z, intensity));
            Shader.SetGlobalVector(_CustomSpotData1, new Vector4(spotPos.x, spotPos.y, spotPos.z, spotAngle));
            Shader.SetGlobalVector(_CustomSpotData2, new Vector4(color.r, color.g, color.b, enabledFlag));
            Shader.SetGlobalFloat(_CustomSpotRange, spotLight.range); // optional legacy fallback

            lastDir = spotDir;
            lastPos = spotPos;
            lastAngle = spotAngle;
            lastIntensity = intensity;
            lastColor = color;
            lastEnabled = isActive;
        }
    }

    bool ApproximatelyEqual(Vector3 a, Vector3 b)
    {
        return (a - b).sqrMagnitude < 0.0001f;
    }

    void OnDisable()
    {
        if (shadowMap != null)
            shadowMap.Release();
        if (shadowCmd != null)
            spotLight.RemoveCommandBuffer(LightEvent.BeforeShadowMapPass, shadowCmd);
    }

    void OnDrawGizmos()
    {
        if (!lightObject || !thisParent) return;

        Vector3 pos = lightObject.transform.position;
        Vector3 dir = thisParent.transform.rotation * Vector3.right;

        Gizmos.color = Color.yellow;
        Gizmos.DrawRay(pos, dir * 2.0f);
    }
}
