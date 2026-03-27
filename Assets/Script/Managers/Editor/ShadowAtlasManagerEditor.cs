using UnityEditor;
using UnityEngine;

[CustomEditor(typeof(ShadowAtlasManager))]
public class ShadowAtlasManagerEditor : Editor
{
    private const float DefaultPreviewWidth = 320.0f;
    private const float MinPreviewWidth = 128.0f;
    private const float MaxPreviewWidth = 1024.0f;
    private float _previewWidth = DefaultPreviewWidth;
    private bool _repaintContinuously = true;

    private bool _showAtlasPreview = true;

    public override bool RequiresConstantRepaint()
    {
        if (!_repaintContinuously)
            return false;

        var mgr = (ShadowAtlasManager)target;
        if (mgr == null)
            return false;

        return mgr.AtlasDebugTexture != null || mgr.AtlasTexture != null;
    }

    public override void OnInspectorGUI()
    {
        var mgr = (ShadowAtlasManager)target;

        DrawDefaultInspector();

        EditorGUILayout.Space();
        EditorGUILayout.LabelField("Shadow Atlas Debug", EditorStyles.boldLabel);

        _showAtlasPreview = EditorGUILayout.Foldout(_showAtlasPreview, "Live Atlas Preview", true);
        if (!_showAtlasPreview)
            return;

        _repaintContinuously = EditorGUILayout.Toggle("Live Refresh", _repaintContinuously);
        _previewWidth = EditorGUILayout.Slider("Preview Width", _previewWidth, MinPreviewWidth, MaxPreviewWidth);

        Texture previewTexture = null;

        if (mgr != null)
        {
            if (mgr.AtlasDebugTexture != null)
                previewTexture = mgr.AtlasDebugTexture;
            else
                previewTexture = mgr.AtlasTexture;
        }

        if (previewTexture == null)
        {
            EditorGUILayout.HelpBox("Atlas texture has not been created yet.", MessageType.Info);
            return;
        }

        var atlasAspect = (float)previewTexture.width / previewTexture.height;
        var previewWidth = Mathf.Min(_previewWidth, EditorGUIUtility.currentViewWidth - 40.0f);
        var previewHeight = previewWidth / atlasAspect;

        var previewRect = GUILayoutUtility.GetRect(previewWidth, previewHeight, GUILayout.ExpandWidth(false));

        DrawAtlasPreview(previewRect, previewTexture);
        DrawOverlay(previewRect);

        EditorGUILayout.Space();
        EditorGUILayout.LabelField("Atlas Size", previewTexture.width + " x " + previewTexture.height);

        DrawRuntimeSlotSummary(mgr);
    }

    /* Draws the atlas preview texture in the inspector. */
    private void DrawAtlasPreview(Rect rect, Texture texture)
    {
        if (Event.current.type != EventType.Repaint)
            return;

        EditorGUI.DrawPreviewTexture(
            rect,
            texture,
            null,
            ScaleMode.ScaleToFit
        );
    }

    /* Draws the fixed atlas tile outlines and labels. */
    private void DrawOverlay(Rect rect)
    {
        Handles.BeginGUI();

        var oldColor = Handles.color;
        Handles.color = new Color(0.0f, 1.0f, 0.0f, 0.85f);

        var dirRect = AtlasRectToGuiRect(rect, 0, 0, 512, 512, 1024, 512);
        var spot0Rect = AtlasRectToGuiRect(rect, 512, 0, 256, 256, 1024, 512);
        var spot1Rect = AtlasRectToGuiRect(rect, 768, 0, 256, 256, 1024, 512);
        var spot2Rect = AtlasRectToGuiRect(rect, 512, 256, 256, 256, 1024, 512);
        var spot3Rect = AtlasRectToGuiRect(rect, 768, 256, 256, 256, 1024, 512);

        DrawRectOutline(dirRect, "Dir 512");
        DrawRectOutline(spot0Rect, "Player 256");
        DrawRectOutline(spot1Rect, "Extra1 256");
        DrawRectOutline(spot2Rect, "Extra2 256");
        DrawRectOutline(spot3Rect, "Extra3 256");

        Handles.color = oldColor;
        Handles.EndGUI();
    }

    /* Draws a quick summary of which lights currently occupy the atlas slots. */
    private void DrawRuntimeSlotSummary(ShadowAtlasManager mgr)
    {
        EditorGUILayout.Space();
        EditorGUILayout.LabelField("Active Slot Owners", EditorStyles.boldLabel);

        DrawSlotLine("Slot 0", mgr.mainDirectional);
        DrawSlotLine("Slot 1", mgr.playerSpotlight);
        DrawSlotLine("Slot 2", mgr.extraSpotlight1);
        DrawSlotLine("Slot 3", mgr.extraSpotlight2);
        DrawSlotLine("Slot 4", mgr.extraSpotlight3);
    }

    /* Draws one slot summary line. */
    private void DrawSlotLine(string label, ShadowAtlasLight light)
    {
        var value = light != null ? light.name : "None";
        EditorGUILayout.LabelField(label, value);
    }

    /* Converts atlas pixel coordinates into GUI-space preview coordinates. */
    private static Rect AtlasRectToGuiRect(
        Rect guiRect,
        float atlasX,
        float atlasY,
        float atlasW,
        float atlasH,
        float atlasTotalW,
        float atlasTotalH)
    {
        var xMin = guiRect.x + atlasX / atlasTotalW * guiRect.width;
        var xMax = guiRect.x + (atlasX + atlasW) / atlasTotalW * guiRect.width;

        var yMin = guiRect.y + atlasY / atlasTotalH * guiRect.height;
        var yMax = guiRect.y + (atlasY + atlasH) / atlasTotalH * guiRect.height;

        return Rect.MinMaxRect(xMin, yMin, xMax, yMax);
    }

    /* Draws one rectangular tile outline and label. */
    private static void DrawRectOutline(Rect rect, string label)
    {
        var p0 = new Vector3(rect.xMin, rect.yMin);
        var p1 = new Vector3(rect.xMax, rect.yMin);
        var p2 = new Vector3(rect.xMax, rect.yMax);
        var p3 = new Vector3(rect.xMin, rect.yMax);

        Handles.DrawLine(p0, p1);
        Handles.DrawLine(p1, p2);
        Handles.DrawLine(p2, p3);
        Handles.DrawLine(p3, p0);

        var labelRect = new Rect(rect.xMin + 4.0f, rect.yMin + 2.0f, rect.width - 8.0f, 18.0f);
        GUI.Label(labelRect, label, EditorStyles.whiteMiniLabel);
    }
}