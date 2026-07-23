using System.Collections.Generic;
using UnityEngine;

public enum VitaTextureStreamingLODState
{
    Full,
    Reduced,
    VertexOnly,
    BlackOnly,
    Disabled
}

[DisallowMultipleComponent]
public class VitaTextureStreamingLODController : MonoBehaviour
{
    private static readonly int MainTexID = Shader.PropertyToID("_MainTex");
    private static readonly int BumpMapID = Shader.PropertyToID("_BumpMap");
    private static readonly int MetallicGlossMapID = Shader.PropertyToID("_MetallicGlossMap");
    private static readonly int OcclusionMapID = Shader.PropertyToID("_OcclusionMap");
    private static readonly int EmissionMapID = Shader.PropertyToID("_EmissionMap");
    private static readonly int DetailAlbedoMapID = Shader.PropertyToID("_DetailAlbedoMap");
    private static readonly int DetailNormalMapID = Shader.PropertyToID("_DetailNormalMap");
    private static readonly int ParallaxMapID = Shader.PropertyToID("_ParallaxMap");

    private static readonly int ColorPropertyID = Shader.PropertyToID("_Color");
    /*
        Object importance.

        We mark buildings, readable surfaces, doors, trim, signs, and hero objects as important.
        Important objects can make hard mip requests when close.
        Normal props and foliage should generally use Unity's default streaming logic.
    */

    [Header("Object Importance")] public bool importantObject = false;

    public bool allowHardMipRequests = true;

    [Header("Texture Collection")] public bool cacheOnAwake = true;

    public bool includeLightmaps = true;
    public bool includeChildRenderers = false;

    [Header("Optional Local Overrides")] public bool overrideManagerPolicy = false;

    public int fullRequestedMip = 0;
    public int reducedRequestedMip = 1;
    public int vertexOnlyRequestedMip = 2;

    [Header("Debug")] public bool debugLogging = false;

    private readonly List<Renderer> cachedRenderers = new List<Renderer>();

    private readonly List<Texture2D> cachedTextures = new List<Texture2D>();

    private MaterialPropertyBlock _debugPropertyBlock;
    private bool hasAppliedState;

    private VitaTextureStreamingLODState lastAppliedState;
    private int lastRequestedMip = -1;
    private bool lastUsedHardMipRequest;

    private void Awake()
    {
        if (cacheOnAwake)
            CacheTextures();
    }

    private void OnEnable()
    {
        //RegisterWithManager();

        if (cachedTextures.Count == 0)
            CacheTextures();

        RefreshDebugTintFromManager();
    }

    private void OnDisable()
    {
        /*
            When this object is disabled, we release hard requests so Unity can reclaim mips.
        */

        ClearHardMipRequests();
        //UnregisterFromManager();
    }

    /*
        Cache textures.

        We collect material textures and optional lightmaps once.
        This avoids scanning shared materials every time the object changes LOD state.
    */

    public void CacheTextures()
    {
        cachedTextures.Clear();
        cachedRenderers.Clear();

        if (includeChildRenderers)
        {
            var childRenderers = GetComponentsInChildren<Renderer>(true);

            for (var i = 0; i < childRenderers.Length; i++)
                if (childRenderers[i] != null)
                    cachedRenderers.Add(childRenderers[i]);
        }
        else
        {
            var r = GetComponent<Renderer>();

            if (r != null)
                cachedRenderers.Add(r);
        }

        for (var i = 0; i < cachedRenderers.Count; i++)
        {
            var r = cachedRenderers[i];

            if (r == null)
                continue;

            CacheRendererMaterialTextures(r);

            if (ShouldIncludeLightmaps())
                CacheRendererLightmapTextures(r);
        }

        // if (debugLogging || GetManagerDebugLogging())
        //     Debug.Log(
        //         "[VitaTextureStreamingLODController] Cached " + cachedTextures.Count + " textures for " +
        //         gameObject.name, this);
    }

    /*
        Apply LOD state.

        We call this from the existing LOD enumerator after the material/shader LOD state changes.
        Unity 2018.2 does not expose a setter for streamingMipmapsPriority, so this controller
        only uses hard mip requests for important objects and clears requests for everything else.
    */

    // public void ApplyForLODState(VitaTextureStreamingLODState state)
    // {
    //     if (!IsSystemEnabled())
    //         return;
    //
    //     if (hasAppliedState && state == lastAppliedState)
    //     {
    //         RefreshDebugTintFromManager();
    //         return;
    //     }
    //
    //     hasAppliedState = true;
    //     lastAppliedState = state;
    //
    //     if (cachedTextures.Count == 0)
    //         CacheTextures();
    //
    //     //var shouldUseHardRequest = ShouldUseHardMipRequest(state);
    //     var requestedMip = GetRequestedMipForState(state);
    //
    //     if (shouldUseHardRequest && requestedMip >= 0)
    //     {
    //         ApplyHardMipRequest(requestedMip);
    //         lastUsedHardMipRequest = true;
    //         lastRequestedMip = requestedMip;
    //     }
    //     else
    //     {
    //         ClearHardMipRequests();
    //         lastUsedHardMipRequest = false;
    //         lastRequestedMip = -1;
    //     }
    //
    //     //ApplyDebugTint(state, lastUsedHardMipRequest ? lastRequestedMip : -1);
    //
    //     if (debugLogging || GetManagerDebugLogging())
    //         Debug.Log(
    //             "[VitaTextureStreamingLODController] " + gameObject.name +
    //             " state=" + state +
    //             " hardMip=" + (lastUsedHardMipRequest ? lastRequestedMip.ToString() : "cleared"),
    //             this
    //         );
    // }

    /*
        Refresh debug tint from manager.

        The manager calls this when its global debug toggle or colors change.
        We reuse the last LOD state and last requested mip so the debug color reflects
        the current texture streaming intent without forcing another LOD transition.
    */

    public void RefreshDebugTintFromManager()
    {
        if (!hasAppliedState)
            return;

        //ApplyDebugTint(lastAppliedState, lastUsedHardMipRequest ? lastRequestedMip : -1);
    }

    /*
        Apply hard mip request.

        We use hard requests only for important objects.
        Mip 0 is full resolution.
    */

    private void ApplyHardMipRequest(int mipLevel)
    {
        if (mipLevel < 0)
            mipLevel = 0;

        for (var i = 0; i < cachedTextures.Count; i++)
        {
            var tex = cachedTextures[i];

            if (tex == null)
                continue;

            tex.requestedMipmapLevel = mipLevel;
        }
    }

    /*
        Clear hard mip requests.

        We return control to Unity's normal mip streaming logic.
    */

    public void ClearHardMipRequests()
    {
        for (var i = 0; i < cachedTextures.Count; i++)
        {
            var tex = cachedTextures[i];

            if (tex == null)
                continue;

            tex.ClearRequestedMipmapLevel();
        }
    }

    /*
        Apply debug tint.

        We tint through MaterialPropertyBlock so each renderer can show its current
        mip request intent without creating material instances.
    */

    // private void ApplyDebugTint(VitaTextureStreamingLODState state, int requestedMip)
    // {
    //     var manager = VitaTextureStreamingLODManager.Instance;
    //
    //     if (manager == null || !manager.enableMipDebugTint)
    //     {
    //         ClearDebugTint();
    //         return;
    //     }
    //
    //     if (_debugPropertyBlock == null)
    //         _debugPropertyBlock = new MaterialPropertyBlock();
    //
    //     var tint = GetDebugTintColor(manager, state, requestedMip);
    //
    //     for (var i = 0; i < cachedRenderers.Count; i++)
    //     {
    //         var r = cachedRenderers[i];
    //
    //         if (r == null)
    //             continue;
    //
    //         r.GetPropertyBlock(_debugPropertyBlock);
    //         _debugPropertyBlock.SetColor(ColorPropertyID, tint);
    //         r.SetPropertyBlock(_debugPropertyBlock);
    //     }
    // }

    /*
        Clear debug tint.

        We restore each renderer's shared material _Color value when manager debug
        tinting is disabled.
    */

    // public void ClearDebugTint()
    // {
    //     if (cachedRenderers.Count == 0)
    //         return;
    //
    //     if (_debugPropertyBlock == null)
    //         _debugPropertyBlock = new MaterialPropertyBlock();
    //
    //     for (var i = 0; i < cachedRenderers.Count; i++)
    //     {
    //         var r = cachedRenderers[i];
    //
    //         if (r == null)
    //             continue;
    //
    //         r.GetPropertyBlock(_debugPropertyBlock);
    //
    //         var mat = r.sharedMaterial;
    //
    //         if (mat != null && mat.HasProperty(ColorPropertyID))
    //             _debugPropertyBlock.SetColor(ColorPropertyID, mat.GetColor(ColorPropertyID));
    //         else
    //             _debugPropertyBlock.SetColor(ColorPropertyID, Color.white);
    //
    //         r.SetPropertyBlock(_debugPropertyBlock);
    //     }
    // }

    /*
        Get debug tint color.

        This maps requested mip intent to a manager-owned color palette.
    */

    // private Color GetDebugTintColor(
    //     VitaTextureStreamingLODManager manager,
    //     VitaTextureStreamingLODState state,
    //     int requestedMip)
    // {
    //     if (state == VitaTextureStreamingLODState.Disabled ||
    //         state == VitaTextureStreamingLODState.BlackOnly)
    //         return manager.disabledMipColor;
    //
    //     if (requestedMip == 0)
    //         return manager.mip0Color;
    //
    //     if (requestedMip == 1)
    //         return manager.mip1Color;
    //
    //     if (requestedMip == 2)
    //         return manager.mip2Color;
    //
    //     return manager.autoMipColor;
    // }

    /*
        Cache material textures.

        We cache the common texture slots used by Standard-style shaders and our Vita shaders.
    */

    private void CacheRendererMaterialTextures(Renderer r)
    {
        var materials = r.sharedMaterials;

        for (var i = 0; i < materials.Length; i++)
        {
            var mat = materials[i];

            if (mat == null)
                continue;

            AddMaterialTexture(mat, MainTexID);
            AddMaterialTexture(mat, BumpMapID);
            AddMaterialTexture(mat, MetallicGlossMapID);
            AddMaterialTexture(mat, OcclusionMapID);
            AddMaterialTexture(mat, EmissionMapID);
            AddMaterialTexture(mat, DetailAlbedoMapID);
            AddMaterialTexture(mat, DetailNormalMapID);
            AddMaterialTexture(mat, ParallaxMapID);
        }
    }

    /*
        Cache lightmap textures.

        We can include lightmaps, but lightmaps are shared atlases.
        One important nearby building can therefore bias the atlas used by other objects.
    */

    private void CacheRendererLightmapTextures(Renderer r)
    {
        if (r.lightmapIndex < 0)
            return;

        var maps = LightmapSettings.lightmaps;

        if (maps == null)
            return;

        if (r.lightmapIndex >= maps.Length)
            return;

        var data = maps[r.lightmapIndex];

        if (data == null)
            return;

        AddTexture(data.lightmapColor);
        AddTexture(data.lightmapDir);
    }

    private void AddMaterialTexture(Material mat, int propertyID)
    {
        if (!mat.HasProperty(propertyID))
            return;

        var tex = mat.GetTexture(propertyID);
        AddTexture(tex as Texture2D);
    }

    private void AddTexture(Texture2D tex)
    {
        if (tex == null)
            return;

        if (!cachedTextures.Contains(tex))
            cachedTextures.Add(tex);
    }

    private bool IsSystemEnabled()
    {
        // var manager = VitaTextureStreamingLODManager.Instance;
        //
        // if (manager == null)
        //     return true;

        return true;
    }

    private bool ShouldIncludeLightmaps()
    {
        // var manager = VitaTextureStreamingLODManager.Instance;
        //
        // if (manager == null)
        //     return includeLightmaps;

        return true;
    }

    // private bool ShouldUseHardMipRequest(VitaTextureStreamingLODState state)
    // {
    //     if (!importantObject)
    //         return false;
    //
    //     if (!allowHardMipRequests)
    //         return false;
    //
    //     if (state == VitaTextureStreamingLODState.BlackOnly || state == VitaTextureStreamingLODState.Disabled)
    //         return false;
    //
    //     var manager = VitaTextureStreamingLODManager.Instance;
    //
    //     if (overrideManagerPolicy || manager == null)
    //         return true;
    //
    //     return manager.importantObjectsUseHardMipRequests;
    // }

    // private int GetRequestedMipForState(VitaTextureStreamingLODState state)
    // {
    //     var manager = VitaTextureStreamingLODManager.Instance;
    //
    //     if (!overrideManagerPolicy && manager != null)
    //         return manager.GetRequestedMip(state);
    //
    //     switch (state)
    //     {
    //         case VitaTextureStreamingLODState.Full:
    //             return Mathf.Max(0, fullRequestedMip);
    //
    //         case VitaTextureStreamingLODState.Reduced:
    //             return Mathf.Max(0, reducedRequestedMip);
    //
    //         case VitaTextureStreamingLODState.VertexOnly:
    //             return Mathf.Max(0, vertexOnlyRequestedMip);
    //     }
    //
    //     return -1;
    // }

    // private bool GetManagerDebugLogging()
    // {
    //     var manager = VitaTextureStreamingLODManager.Instance;
    //
    //     if (manager == null)
    //         return false;
    //
    //     return manager.debugLogging;
    // }

    // private void RegisterWithManager()
    // {
    //     var manager = VitaTextureStreamingLODManager.Instance;
    //
    //     if (manager != null)
    //         manager.RegisterController(this);
    // }

    // private void UnregisterFromManager()
    // {
    //     var manager = VitaTextureStreamingLODManager.Instance;
    //
    //     if (manager != null)
    //         manager.UnregisterController(this);
    // }
}