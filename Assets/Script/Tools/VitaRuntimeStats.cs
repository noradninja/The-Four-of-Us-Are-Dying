using System.Collections.Generic;
using UnityEngine;
using UnityEngine.Rendering;

public sealed class VitaRuntimeStats : MonoBehaviour
{
    public Camera targetCamera;
    public int scanEveryNFrames = 10;
    public bool useCameraFrustumTest = true;

    public bool showOverlay = true;
    public int fontSize = 14;

    // Global counts
    public int tracked;
    public int enabled;
    public int visible;

    // Shadows
    public int shadowCapableEnabled;
    public int shadowEnabled;
    public int shadowEnabledVisible;

    // RAW visible totals
    public int estDrawsVisible;
    public int estVertsVisible;
    public int estTrisVisible;

    // LOD counts
    public int lodFull;
    public int lodReduced;
    public int lodVertexOnly;
    public int lodBlackOnly;
    public int lodDisabled;

    // RAW per-LOD visible totals
    public int fullDrawsV, fullVertsV, fullTrisV;
    public int reducedDrawsV, reducedVertsV, reducedTrisV;
    public int vertexDrawsV, vertexVertsV, vertexTrisV;
    public int blackDrawsV, blackVertsV, blackTrisV;

    // -------- ESTIMATED (Batch-aware) --------
    public int estVertsFrame;
    public int estShadowVertsFrame;
    public int estDrawCallsFrame;

    public int estFullVerts;
    public int estReducedVerts;
    public int estVertexVerts;
    public int estBlackVerts;

    struct MeshStats
    {
        public int verts;
        public int tris;
        public int subMeshes;
    }

    private Dictionary<Mesh, MeshStats> meshCache = new Dictionary<Mesh, MeshStats>(256);
    private Dictionary<int, bool> uniquePairs = new Dictionary<int, bool>(256);
    private Dictionary<int, bool> uniqueShadowPairs = new Dictionary<int, bool>(128);

    private Plane[] planes = new Plane[6];
    private GUIStyle style;

    void Awake()
    {
        if (targetCamera == null)
            targetCamera = Camera.main;
    }

    void LateUpdate()
    {
        if (scanEveryNFrames <= 0) return;
        if ((Time.frameCount % scanEveryNFrames) != 0) return;
        Scan();
    }

    void ResetTotals()
    {
        tracked = enabled = visible = 0;
        shadowCapableEnabled = shadowEnabled = shadowEnabledVisible = 0;

        estDrawsVisible = estVertsVisible = estTrisVisible = 0;

        lodFull = lodReduced = lodVertexOnly = lodBlackOnly = lodDisabled = 0;

        fullDrawsV = fullVertsV = fullTrisV = 0;
        reducedDrawsV = reducedVertsV = reducedTrisV = 0;
        vertexDrawsV = vertexVertsV = vertexTrisV = 0;
        blackDrawsV = blackVertsV = blackTrisV = 0;

        // EST
        estVertsFrame = 0;
        estShadowVertsFrame = 0;
        estDrawCallsFrame = 0;

        estFullVerts = 0;
        estReducedVerts = 0;
        estVertexVerts = 0;
        estBlackVerts = 0;

        uniquePairs.Clear();
        uniqueShadowPairs.Clear();
    }

    int MakePairKey(Mesh m, Material mat)
    {
        int meshId = m != null ? m.GetInstanceID() : 0;
        int matId = mat != null ? mat.GetInstanceID() : 0;
        return meshId ^ (matId * 3147);
    }

    void Scan()
    {
        ResetTotals();

        LODManager lm = LODManager.Instance;
        if (lm == null) return;

        IList<Shader_LOD_Enumerator> list = lm.Enumerators;
        if (list == null) return;

        Camera cam = targetCamera;

        if (useCameraFrustumTest && cam != null)
            GeometryUtility.CalculateFrustumPlanes(cam, planes);

        int count = list.Count;

        for (int i = 0; i < count; i++)
        {
            Shader_LOD_Enumerator e = list[i];
            if (e == null) continue;

            Renderer r = e.CachedRenderer;
            if (r == null) continue;

            tracked++;

            Shader_LOD_Enumerator.LODState st = e.CurrentState;

            if (st == Shader_LOD_Enumerator.LODState.Full) lodFull++;
            else if (st == Shader_LOD_Enumerator.LODState.Reduced) lodReduced++;
            else if (st == Shader_LOD_Enumerator.LODState.VertexOnly) lodVertexOnly++;
            else if (st == Shader_LOD_Enumerator.LODState.BlackOnly) lodBlackOnly++;
            else if (st == Shader_LOD_Enumerator.LODState.Disabled) lodDisabled++;

            bool isEnabled = r.enabled && r.gameObject.activeInHierarchy;
            if (isEnabled) enabled++;

            bool isVisible = false;

            if (isEnabled)
            {
                if (useCameraFrustumTest && cam != null)
                    isVisible = GeometryUtility.TestPlanesAABB(planes, r.bounds);
                else
                    isVisible = r.isVisible;
            }

            if (isVisible) visible++;

            if (isEnabled && e.WasShadowCaster)
                shadowCapableEnabled++;

            bool shadowsNow = isEnabled && (r.shadowCastingMode == ShadowCastingMode.On);

            if (shadowsNow) shadowEnabled++;
            if (shadowsNow && isVisible) shadowEnabledVisible++;

            if (!isVisible) continue;

            Mesh m = e.CachedMesh;
            if (m == null) continue;

            MeshStats ms = GetMeshStats(m);

            // ---- RAW ----
            estDrawsVisible += ms.subMeshes;
            estVertsVisible += ms.verts;
            estTrisVisible += ms.tris;

            AddToBucketVisible(st, ms);

            // ---- ESTIMATED (Batch-aware) ----
            Material mat = r.sharedMaterial;
            int pairKey = MakePairKey(m, mat);

            if (!uniquePairs.ContainsKey(pairKey))
            {
                uniquePairs.Add(pairKey, true);

                estVertsFrame += ms.verts;
                estDrawCallsFrame += ms.subMeshes;

                if (st == Shader_LOD_Enumerator.LODState.Full)
                    estFullVerts += ms.verts;
                else if (st == Shader_LOD_Enumerator.LODState.Reduced)
                    estReducedVerts += ms.verts;
                else if (st == Shader_LOD_Enumerator.LODState.VertexOnly)
                    estVertexVerts += ms.verts;
                else if (st == Shader_LOD_Enumerator.LODState.BlackOnly)
                    estBlackVerts += ms.verts;
            }

            if (shadowsNow)
            {
                if (!uniqueShadowPairs.ContainsKey(pairKey))
                {
                    uniqueShadowPairs.Add(pairKey, true);
                    estShadowVertsFrame += ms.verts;
                }
            }
        }
    }

    void AddToBucketVisible(Shader_LOD_Enumerator.LODState st, MeshStats ms)
    {
        if (st == Shader_LOD_Enumerator.LODState.Full)
        {
            fullDrawsV += ms.subMeshes;
            fullVertsV += ms.verts;
            fullTrisV += ms.tris;
        }
        else if (st == Shader_LOD_Enumerator.LODState.Reduced)
        {
            reducedDrawsV += ms.subMeshes;
            reducedVertsV += ms.verts;
            reducedTrisV += ms.tris;
        }
        else if (st == Shader_LOD_Enumerator.LODState.VertexOnly)
        {
            vertexDrawsV += ms.subMeshes;
            vertexVertsV += ms.verts;
            vertexTrisV += ms.tris;
        }
        else if (st == Shader_LOD_Enumerator.LODState.BlackOnly)
        {
            blackDrawsV += ms.subMeshes;
            blackVertsV += ms.verts;
            blackTrisV += ms.tris;
        }
    }

    MeshStats GetMeshStats(Mesh m)
    {
        MeshStats ms;

        if (meshCache.TryGetValue(m, out ms))
            return ms;

        ms = new MeshStats();
        ms.verts = m.vertexCount;
        ms.subMeshes = m.subMeshCount;

        int tris = 0;
        int sm = m.subMeshCount;

        for (int s = 0; s < sm; s++)
            tris += (int)(m.GetIndexCount(s) / 3);

        ms.tris = tris;

        meshCache[m] = ms;
        return ms;
    }

    void OnGUI()
    {
        if (!showOverlay) return;

        float areaW = Screen.width * 0.5f;
        float areaH = Screen.height * 0.30f;

        if (style == null)
            style = new GUIStyle(GUI.skin.label);

        style.fontSize = fontSize;

        GUILayout.BeginArea(new Rect(4, 4, areaW, areaH), GUI.skin.box);
        GUILayout.Label("Visible " + visible, style);

        GUILayout.Label("LOD EST Verts:", style);
        GUILayout.Label("Full " + estFullVerts/14 +
                        "  Reduced " + estReducedVerts/14 +
                        "  Vertex " + estVertexVerts/14 +
                        "  Black " + estBlackVerts/14, style);
        

        GUILayout.Label("Visible Verts " + estVertsVisible/14 +
                        "  Tris " + estTrisVisible/14, style);

        GUILayout.EndArea();
    }
}
