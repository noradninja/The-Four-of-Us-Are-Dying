using System.Collections.Generic;
using UnityEngine;

[DisallowMultipleComponent]
public class VitaTextureStreamingLODManager : MonoBehaviour
{
    public static VitaTextureStreamingLODManager Instance;

    /*
        Global streaming policy.

        Unity 2018.2 does not expose a runtime setter for streamingMipmapsPriority,
        so this manager only controls whether important objects are allowed to make
        hard mip requests and which mip level each LOD state should request.
    */

    [Header("Global Control")] public bool enableLODTextureStreaming = true;

    public bool includeLightmaps = true;
    public bool importantObjectsUseHardMipRequests = true;

    [Header("Hard Mip Requests For Important Objects")]
    public int fullRequestedMip = 0;

    public int reducedRequestedMip = 1;
    public int vertexOnlyRequestedMip = 2;

    /*
        Debug tint policy.

        We keep debug tinting here so the whole scene can be visualized from one
        manager toggle instead of setting the option on every object.

        This visualizes our requested mip intent. It does not read Unity's actual
        resident mip level, because Unity 2018.2 does not provide a reliable
        per-texture current resident mip readback path for this use case.
    */

    [Header("Debug Tint")] public bool enableMipDebugTint = false;

    public Color mip0Color = Color.blue;
    public Color mip1Color = Color.green;
    public Color mip2Color = Color.yellow;
    public Color autoMipColor = Color.white;
    public Color disabledMipColor = Color.gray;

    [Header("Debug")] public bool debugLogging = false;

    private readonly List<VitaTextureStreamingLODController> registeredControllers =
        new List<VitaTextureStreamingLODController>();

    private Color _lastAutoMipColor;
    private Color _lastDisabledMipColor;

    private bool _lastEnableMipDebugTint;
    private Color _lastMip0Color;
    private Color _lastMip1Color;
    private Color _lastMip2Color;

    private void Awake()
    {
        Instance = this;
        CacheDebugState();
    }

    private void Update()
    {
        /*
            Runtime debug tint refresh.

            We refresh all registered controllers when the manager debug toggle or
            color settings change, so the visualization can be changed live without
            touching every object or waiting for each object to change LOD state.
        */

        if (!DebugStateChanged())
            return;

        CacheDebugState();
        RefreshAllDebugTint();
    }

    private void OnEnable()
    {
        Instance = this;
        CacheDebugState();
    }

    private void OnDisable()
    {
        if (Instance == this)
            Instance = null;
    }

#if UNITY_EDITOR
    private void OnValidate()
    {
        /*
            Editor validation refresh.

            During play mode, OnValidate lets us update debug tint colors from the
            inspector as soon as the manager values are edited.
        */

        fullRequestedMip = Mathf.Max(0, fullRequestedMip);
        reducedRequestedMip = Mathf.Max(0, reducedRequestedMip);
        vertexOnlyRequestedMip = Mathf.Max(0, vertexOnlyRequestedMip);

        if (Application.isPlaying)
            RefreshAllDebugTint();
    }
#endif

    /*
        Register controller.

        Controllers register here so the manager can refresh debug tinting globally.
    */

    public void RegisterController(VitaTextureStreamingLODController controller)
    {
        if (controller == null)
            return;

        if (!registeredControllers.Contains(controller))
            registeredControllers.Add(controller);
    }

    /*
        Unregister controller.
    */

    public void UnregisterController(VitaTextureStreamingLODController controller)
    {
        if (controller == null)
            return;

        registeredControllers.Remove(controller);
    }

    /*
        Refresh all debug tint.

        This can also be called from the context menu in play mode.
    */

    [ContextMenu("Refresh Debug Tint")]
    public void RefreshAllDebugTint()
    {
        for (var i = registeredControllers.Count - 1; i >= 0; i--)
        {
            var controller = registeredControllers[i];

            if (controller == null)
            {
                registeredControllers.RemoveAt(i);
                continue;
            }

            controller.RefreshDebugTintFromManager();
        }
    }

    /*
        Clear all debug tint.

        This is useful if objects have been tinted and we want to immediately
        restore their material _Color values without waiting for another LOD update.
    */

    [ContextMenu("Clear Debug Tint")]
    public void ClearAllDebugTint()
    {
        for (var i = registeredControllers.Count - 1; i >= 0; i--)
        {
            var controller = registeredControllers[i];

            if (controller == null)
            {
                registeredControllers.RemoveAt(i);
                continue;
            }

            controller.ClearDebugTint();
        }
    }

    /*
        Get requested mip.

        Mip 0 is full resolution.
        Mip 1 is half resolution.
        Mip 2 is quarter resolution.
        BlackOnly and Disabled clear hard requests instead of forcing a mip.
    */

    public int GetRequestedMip(VitaTextureStreamingLODState state)
    {
        switch (state)
        {
            case VitaTextureStreamingLODState.Full:
                return Mathf.Max(0, fullRequestedMip);

            case VitaTextureStreamingLODState.Reduced:
                return Mathf.Max(0, reducedRequestedMip);

            case VitaTextureStreamingLODState.VertexOnly:
                return Mathf.Max(0, vertexOnlyRequestedMip);
        }

        return -1;
    }

    private bool DebugStateChanged()
    {
        if (_lastEnableMipDebugTint != enableMipDebugTint)
            return true;

        if (_lastMip0Color != mip0Color)
            return true;

        if (_lastMip1Color != mip1Color)
            return true;

        if (_lastMip2Color != mip2Color)
            return true;

        if (_lastAutoMipColor != autoMipColor)
            return true;

        if (_lastDisabledMipColor != disabledMipColor)
            return true;

        return false;
    }

    private void CacheDebugState()
    {
        _lastEnableMipDebugTint = enableMipDebugTint;
        _lastMip0Color = mip0Color;
        _lastMip1Color = mip1Color;
        _lastMip2Color = mip2Color;
        _lastAutoMipColor = autoMipColor;
        _lastDisabledMipColor = disabledMipColor;
    }
}