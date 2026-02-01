using UnityEditor;
using UnityEngine;

[CustomEditor(typeof(LODManager))]
public class LODManagerEditor : Editor
{
    public override void OnInspectorGUI()
    {
        DrawDefaultInspector();

        GUILayout.Space(10);
        EditorGUILayout.LabelField("Tools", EditorStyles.boldLabel);

        if (GUILayout.Button("Rebuild LOD Thresholds (Rescan Scene)"))
        {
            var mgr = (LODManager)target;
            mgr.RebuildAllEnumeratorThresholds(true);

            // Mark dirty so inspector reflects changes if needed
            EditorUtility.SetDirty(mgr);
        }

        if (GUILayout.Button("Rebuild LOD Thresholds (Registered Only)"))
        {
            var mgr = (LODManager)target;
            mgr.RebuildAllEnumeratorThresholds(false);
            EditorUtility.SetDirty(mgr);
        }
    }
}