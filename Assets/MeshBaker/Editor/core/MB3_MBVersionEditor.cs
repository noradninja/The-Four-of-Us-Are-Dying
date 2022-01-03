/**
 *	DLLs cannot interpret preprocessor directives, so this class acts as a "bridge"
 */
using System;
using UnityEngine;
using UnityEditor;
using System.Collections;

namespace DigitalOpus.MB.Core
{

    public enum MB_ReplacePrefabOption
    {
        mbDefault = 0,
        connectToPrefab = 1,
        nameBased = 2,
    }

    public enum MB_PrefabType
    {
        modelPrefabAsset,
        prefabAsset,
        scenePefabInstance,
        isInstanceAndNotAPartOfAnyPrefab,
    }

    public interface MBVersionEditorInterface
    {
        string GetPlatformString();
        void RegisterUndo(UnityEngine.Object o, string s);
        void SetInspectorLabelWidth(float width);
        void UpdateIfDirtyOrScript(SerializedObject so);
        UnityEngine.Object PrefabUtility_GetCorrespondingObjectFromSource(GameObject go);
        bool IsAutoPVRTC(TextureImporterFormat platformFormat, TextureImporterFormat platformDefaultFormat);
        MB_PrefabType GetPrefabType(UnityEngine.Object go);
        void UnpackPrefabInstance(UnityEngine.GameObject go, ref SerializedObject so);
        void ReplacePrefab(GameObject gameObject, string assetPath, MB_ReplacePrefabOption replacePrefabOptions);

        GameObject GetPrefabInstanceRoot(GameObject sceneInstance);

        TextureImporterFormat Map_TextureFormat_2_TextureImporterFormat(TextureFormat texFormat, out bool success);
    }

    public class MBVersionEditor
    {
        private static MBVersionEditorInterface _MBVersion;

        private static MBVersionEditorInterface GetInstance()
        {
            if (_MBVersion == null) _MBVersion = _CreateMBVersionConcrete();
            return _MBVersion;
        }

        private static MBVersionEditorInterface _CreateMBVersionConcrete()
        {
            Type vit = null;
#if EVAL_VERSION
            vit = Type.GetType("DigitalOpus.MB.Core.MBVersionEditorConcrete,Assembly-CSharp-Editor");
#else
            vit = typeof(MBVersionEditorConcrete);
#endif
            return (MBVersionEditorInterface)Activator.CreateInstance(vit);
        }

        public static string GetPlatformString()
        {
            return GetInstance().GetPlatformString();
        }

        public static void RegisterUndo(UnityEngine.Object o, string s)
        {
            GetInstance().RegisterUndo(o, s);
        }

        public static void SetInspectorLabelWidth(float width)
        {
            GetInstance().SetInspectorLabelWidth(width);
        }

        public static void UpdateIfDirtyOrScript(SerializedObject so)
        {
            GetInstance().UpdateIfDirtyOrScript(so);
        }

        public static UnityEngine.Object PrefabUtility_GetCorrespondingObjectFromSource(GameObject go)
        {
            return GetInstance().PrefabUtility_GetCorrespondingObjectFromSource(go);
        }

        public static bool IsAutoPVRTC(TextureImporterFormat platformFormat, TextureImporterFormat platformDefaultFormat)
        {
            return GetInstance().IsAutoPVRTC(platformFormat, platformDefaultFormat);
        }

        public static MB_PrefabType GetPrefabType(UnityEngine.Object go)
        {
            return GetInstance().GetPrefabType(go);
        }

        public static void UnpackPrefabInstance(UnityEngine.GameObject go, ref SerializedObject so)
        {
            GetInstance().UnpackPrefabInstance(go, ref so);
        }

        public static void ReplacePrefab(GameObject gameObject, string assetPath, MB_ReplacePrefabOption replacePrefabOptions)
        {
            GetInstance().ReplacePrefab(gameObject, assetPath, replacePrefabOptions);
        }

        public static GameObject GetPrefabInstanceRoot(GameObject sceneInstance)
        {
            return GetInstance().GetPrefabInstanceRoot(sceneInstance);
        }

        public static TextureImporterFormat Map_TextureFormat_2_TextureImporterFormat(TextureFormat texFormat, out bool success)
        {
            return GetInstance().Map_TextureFormat_2_TextureImporterFormat(texFormat, out success);
        }
    }
}