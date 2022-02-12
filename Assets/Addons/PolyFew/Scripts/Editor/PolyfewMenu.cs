#if UNITY_EDITOR

using System.Collections.Generic;
using UnityEditor;
using UnityEditor.SceneManagement;
using UnityEngine;

namespace BrainFailProductions.PolyFew
{
    public class PolyfewMenu : MonoBehaviour
    {


        [MenuItem("Window/Brainfail Products/PolyFew/Enable Auto UI Attaching", false, 0)]
        static void EnableAutoUIAttaching()
        {
            //EditorPrefs.DeleteKey("polyfewAutoAttach");return;
            EditorPrefs.SetBool("polyfewAutoAttach", true);
            InspectorAttacher.AttachInspector();
        }

        
        [MenuItem("Window/Brainfail Products/PolyFew/Disable Auto UI Attaching", false, 1)]
        static void DisableAutoUIAttaching()
        {
            EditorPrefs.SetBool("polyfewAutoAttach", false);
        }


        [MenuItem("Window/Brainfail Products/PolyFew/Attach PolyFew to Object", false, 2)]
        static void AttachPolyFewToObject()
        {
            EditorPrefs.SetBool("polyfewAutoAttach", false);
            InspectorAttacher.AttachInspector();
        }


        //[MenuItem("Window/Brainfail Products/PolyFew/Cleanup Missing Scripts")]
        //static void CleanupMissingScripts()
        //{
        //    int sceneCount = UnityEngine.SceneManagement.SceneManager.sceneCount;

        //    for (int a = 0; a < UnityEngine.SceneManagement.SceneManager.sceneCount; a++)
        //    {

        //        var scene = UnityEngine.SceneManagement.SceneManager.GetSceneAt(a);

        //        var rootGameObjects = scene.GetRootGameObjects();

        //        if(rootGameObjects != null && rootGameObjects.Length > 0)
        //        {

        //            List<GameObject> allObjectsinScene = new List<GameObject>();


        //            EditorUtility.DisplayProgressBar("Preprocessing", $"Fetching GameObjects in active scene \"{scene.name}\"", 0);

        //            foreach (var gameObject in rootGameObjects)
        //            {
        //                var childObjects = gameObject.GetComponentsInChildren<Transform>();

        //                if(childObjects != null && childObjects.Length > 0)
        //                {
        //                    foreach(var obj in childObjects)
        //                    {
        //                        if (obj != null) { allObjectsinScene.Add(obj.gameObject); }
        //                    }         
        //                }

        //            }

        //            EditorUtility.ClearProgressBar();


        //            for (int b = 0; b < allObjectsinScene.Count; b++)
        //            {

        //                var gameObject = allObjectsinScene[b];

        //                EditorUtility.DisplayProgressBar("Removing missing script references", $"Inspecting GameObject  {b+1}/{allObjectsinScene.Count} in active scene \"{scene.name}\"", (float)(b) / allObjectsinScene.Count);

        //                // We must use the GetComponents array to actually detect missing components
        //                var components = gameObject.GetComponents<Component>();

        //                // Create a serialized object so that we can edit the component list
        //                var serializedObject = new SerializedObject(gameObject);
        //                // Find the component list property
        //                var prop = serializedObject.FindProperty("m_Component");

        //                // Track how many components we've removed
        //                int r = 0;

        //                // Iterate over all components
        //                for (int c = 0; c < components.Length; c++)
        //                {
        //                    // Check if the ref is null
        //                    if (components[c] == null)
        //                    {
        //                        // If so, remove from the serialized component array
        //                        prop.DeleteArrayElementAtIndex(c - r);
        //                        // Increment removed count
        //                        r++;
        //                    }
        //                }

        //                // Apply our changes to the game object
        //                serializedObject.ApplyModifiedProperties();

        //            }

        //            EditorSceneManager.MarkSceneDirty(scene);

        //            EditorUtility.ClearProgressBar();
        //        }

        //        EditorUtility.ClearProgressBar();
        //    }

        //    EditorUtility.ClearProgressBar();

        //    EditorUtility.DisplayDialog("Operation Completed", "Successfully removed missing script references. Please save all currently open scenes to keep these changes persistent", "Ok");

        //}



#if UNITY_2019_1_OR_NEWER

        [MenuItem("Window/Brainfail Products/PolyFew/Cleanup Missing Scripts")]
        static void CleanupMissingScripts()
        {
            int sceneCount = UnityEngine.SceneManagement.SceneManager.sceneCount;

            for (int a = 0; a < UnityEngine.SceneManagement.SceneManager.sceneCount; a++)
            {

                var scene = UnityEngine.SceneManagement.SceneManager.GetSceneAt(a);

                var rootGameObjects = scene.GetRootGameObjects();

                if (rootGameObjects != null && rootGameObjects.Length > 0)
                {

                    List<GameObject> allObjectsinScene = new List<GameObject>();


                    EditorUtility.DisplayProgressBar("Preprocessing", $"Fetching GameObjects in active scene \"{scene.name}\"", 0);

                    foreach (var gameObject in rootGameObjects)
                    {
                        var childObjects = gameObject.GetComponentsInChildren<Transform>();

                        if (childObjects != null && childObjects.Length > 0)
                        {
                            foreach (var obj in childObjects)
                            {
                                if (obj != null) { allObjectsinScene.Add(obj.gameObject); }
                            }
                        }

                    }

                    EditorUtility.ClearProgressBar();


                    for (int b = 0; b < allObjectsinScene.Count; b++)
                    {

                        var gameObject = allObjectsinScene[b];

                        EditorUtility.DisplayProgressBar("Removing missing script references", $"Inspecting GameObject  {b + 1}/{allObjectsinScene.Count} in active scene \"{scene.name}\"", (float)(b) / allObjectsinScene.Count);

                        GameObjectUtility.RemoveMonoBehavioursWithMissingScript(gameObject);
                    }

                    EditorSceneManager.MarkSceneDirty(scene);

                    EditorUtility.ClearProgressBar();
                }

                EditorUtility.ClearProgressBar();
            }

            EditorUtility.ClearProgressBar();

            EditorUtility.DisplayDialog("Operation Completed", "Successfully removed missing script references. Please save all currently open scenes to keep these changes persistent", "Ok");

        }


        public static void CleanMissingScripts()
        {
            CleanupMissingScripts();
        }
#endif


        [MenuItem("Window/Brainfail Products/PolyFew/Remove All Hidden Scripts")]
        static void RemoveAllPolyFewScripts()
        {
            int sceneCount = UnityEngine.SceneManagement.SceneManager.sceneCount;

            for (int a = 0; a < UnityEngine.SceneManagement.SceneManager.sceneCount; a++)
            {

                var scene = UnityEngine.SceneManagement.SceneManager.GetSceneAt(a);

                var rootGameObjects = scene.GetRootGameObjects();

                if (rootGameObjects != null && rootGameObjects.Length > 0)
                {

                    List<GameObject> allObjectsinScene = new List<GameObject>();


                    EditorUtility.DisplayProgressBar("Preprocessing", $"Fetching GameObjects in active scene \"{scene.name}\"", 0);

                    foreach (var gameObject in rootGameObjects)
                    {
                        var childObjects = gameObject.GetComponentsInChildren<Transform>();

                        if (childObjects != null && childObjects.Length > 0)
                        {
                            foreach (var obj in childObjects)
                            {
                                if (obj != null) { allObjectsinScene.Add(obj.gameObject); }
                            }
                        }

                    }

                    EditorUtility.ClearProgressBar();


                    for (int b = 0; b < allObjectsinScene.Count; b++)
                    {
                        var backupComponent = allObjectsinScene[b].GetComponent<UnityMeshSimplifier.LODBackupComponent>();
                        var objectMatLinks  = allObjectsinScene[b].GetComponent<ObjectMaterialLinks>();

                        EditorUtility.DisplayProgressBar("Removing hidden poly few components", $"Inspecting GameObject  {b + 1}/{allObjectsinScene.Count} in active scene \"{scene.name}\"", (float)(b) / allObjectsinScene.Count);

                        if(backupComponent != null) { DestroyImmediate(backupComponent); }
                        if(objectMatLinks != null)  { DestroyImmediate(objectMatLinks); }
                    }

                    EditorSceneManager.MarkSceneDirty(scene);

                    EditorUtility.ClearProgressBar();
                }

                EditorUtility.ClearProgressBar();
            }

            EditorUtility.ClearProgressBar();

            EditorUtility.DisplayDialog("Operation Completed", "Successfully removed lod backup components. Please save all currently open scenes to keep these changes persistent", "Ok");

        }



#if UNITY_2019_1_OR_NEWER


    [MenuItem("Assets/Brainfail Products/PolyFew/Clean Missing Scripts From Prefabs")]
    public static void CleanMissingScriptsFromFolders()
    {
        string folderPath = null;
        string[] assetPaths = null;

        if (Selection.activeObject != null)
        {
            folderPath = AssetDatabase.GetAssetPath(Selection.activeObject.GetInstanceID());
        }

        if(!string.IsNullOrWhiteSpace(folderPath))
        {
            assetPaths = AssetDatabase.FindAssets("t:GameObject", new string[] { folderPath });
        }

        else
        {
            assetPaths = AssetDatabase.FindAssets("t:GameObject");
        }


        EditorUtility.DisplayProgressBar("Removing missing components", "Please wait...", 0);


        foreach(var guid in assetPaths)
        {
            var path = AssetDatabase.GUIDToAssetPath(guid);
            var obj = AssetDatabase.LoadAssetAtPath<GameObject>(path);

            var type = PrefabUtility.GetPrefabAssetType(obj);


            if (type == PrefabAssetType.Model || type == PrefabAssetType.NotAPrefab || type == PrefabAssetType.Variant)
            {
                continue;
            }

            GameObject prefabRoot = PrefabUtility.LoadPrefabContents(path);

            if (prefabRoot != null)
            {
                Transform transform = prefabRoot.transform;
                var children = transform.GetComponentsInChildren<Transform>();

                foreach (Transform child in children)
                {

                    var hosts = child.GetComponent<PolyFewHost>();
                    if (hosts != null) { DestroyImmediate(hosts); }

                    GameObjectUtility.RemoveMonoBehavioursWithMissingScript(child.gameObject);
                }

                // Save contents back to Prefab Asset and unload contents.
                PrefabUtility.SaveAsPrefabAsset(prefabRoot, path);
                PrefabUtility.UnloadPrefabContents(prefabRoot);
            }
        }

        EditorUtility.ClearProgressBar();
    }



#endif



        public static void RemovePolyFewScripts()
        {
            RemoveAllPolyFewScripts();
        }



        public static bool IsAutoAttachEnabled()
        {
            bool isAutoAttach;

            if (!EditorPrefs.HasKey("polyfewAutoAttach"))
            {
                EditorPrefs.SetBool("polyfewAutoAttach", true);
                isAutoAttach = true;
            }
            else
            {
                isAutoAttach = EditorPrefs.GetBool("polyfewAutoAttach");
            }

            return isAutoAttach;
        }


        #region VALIDATORS

        [MenuItem("Window/Brainfail Products/PolyFew/Enable Auto UI Attaching", true)]
        static bool CheckEnableAttachingButton()
        {
            bool isAutoAttach = IsAutoAttachEnabled();

            if (isAutoAttach) { return false; }
            else { return true; }
        }

        [MenuItem("Window/Brainfail Products/PolyFew/Disable Auto UI Attaching", true)]
        static bool CheckDisableAttachingButton()
        {
            bool isEnableButtOn  = CheckEnableAttachingButton();

            if (isEnableButtOn) { return false; }
            else { return true; }
        }

        #endregion VALIDATORS
    }

}

#endif
