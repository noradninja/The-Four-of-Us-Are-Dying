/* VitaAssetBundleBuilder.cs */

#if UNITY_EDITOR
using System.Collections.Generic;
using System.IO;
using UnityEditor;
using UnityEngine;

public class VitaAssetBundleBuilder : EditorWindow
{
    private const string OutputFolder = "Assets/StreamingAssets/AssetBundles/PSVita";
    private const string GeneratedMeshRoot = "Assets/Generated/VitaMeshStreaming";
    private bool autoBuildMeshStreamingKey = true;
    private bool autoBuildTextureLODPaths = true;

    private string bundleGroup = "schoolhouse";
    private bool enableMeshStreamingOnEnumerators = true;

    private bool enableTextureLODOnEnumerators = true;
    private bool extractInactiveChildren = true;
    private string fullTextureBundleSuffix = "_full";

    private string lowTextureBundleSuffix = "_low";
    private string meshBundleSuffix = "_meshes";

    private bool overwriteExistingGeneratedMeshes = true;

    private void OnGUI()
    {
        GUILayout.Label("LOD AssetBundle Builder", EditorStyles.boldLabel);

        EditorGUILayout.Space();

        bundleGroup = EditorGUILayout.TextField("Bundle Group", bundleGroup);

        EditorGUILayout.Space();

        lowTextureBundleSuffix = EditorGUILayout.TextField("Low Texture Suffix", lowTextureBundleSuffix);
        fullTextureBundleSuffix = EditorGUILayout.TextField("Full Texture Suffix", fullTextureBundleSuffix);
        meshBundleSuffix = EditorGUILayout.TextField("Mesh Bundle Suffix", meshBundleSuffix);

        EditorGUILayout.Space();

        EditorGUILayout.HelpBox(
            "For a group named 'schoolhouse', this can assign/build:\n\n" +
            "Texture bundles:\n" +
            "schoolhouse_low\n" +
            "schoolhouse_full\n\n" +
            "Mesh bundle:\n" +
            "schoolhouse_meshes\n\n" +
            "Generated mesh assets:\n" +
            "Assets/Generated/VitaMeshStreaming/schoolhouse/",
            MessageType.Info
        );

        EditorGUILayout.Space();

        GUILayout.Label("Selected Texture Assignment", EditorStyles.boldLabel);

        if (GUILayout.Button("Assign Selected Textures To Group Bundles"))
            AssignSelectedTextureBundles(bundleGroup, lowTextureBundleSuffix, fullTextureBundleSuffix);

        EditorGUILayout.Space();

        GUILayout.Label("Selected Mesh Asset Assignment", EditorStyles.boldLabel);

        if (GUILayout.Button("Assign Selected Existing Mesh Assets To Group Bundle"))
            AssignSelectedMeshAssetsToBundle(bundleGroup, meshBundleSuffix);

        EditorGUILayout.Space();

        GUILayout.Label("Generate Mesh Assets From Scene Objects", EditorStyles.boldLabel);

        overwriteExistingGeneratedMeshes = EditorGUILayout.Toggle(
            "Overwrite Existing Generated Meshes",
            overwriteExistingGeneratedMeshes
        );

        extractInactiveChildren = EditorGUILayout.Toggle(
            "Include Inactive Children",
            extractInactiveChildren
        );

        if (GUILayout.Button("Extract Mesh Assets From Selected Objects"))
            ExtractMeshAssetsFromSelectedObjects(
                bundleGroup,
                meshBundleSuffix,
                overwriteExistingGeneratedMeshes,
                extractInactiveChildren
            );

        EditorGUILayout.Space();

        GUILayout.Label("Selected Object Setup", EditorStyles.boldLabel);

        enableTextureLODOnEnumerators = EditorGUILayout.Toggle("Enable Texture LOD", enableTextureLODOnEnumerators);
        enableMeshStreamingOnEnumerators =
            EditorGUILayout.Toggle("Enable Mesh Streaming", enableMeshStreamingOnEnumerators);
        autoBuildTextureLODPaths = EditorGUILayout.Toggle("Auto Build Texture Paths", autoBuildTextureLODPaths);
        autoBuildMeshStreamingKey = EditorGUILayout.Toggle("Auto Build Mesh Key", autoBuildMeshStreamingKey);

        if (GUILayout.Button("Apply Group To Selected LOD Enumerators"))
            ApplyGroupToSelectedEnumerators(
                bundleGroup,
                lowTextureBundleSuffix,
                fullTextureBundleSuffix,
                meshBundleSuffix,
                enableTextureLODOnEnumerators,
                enableMeshStreamingOnEnumerators,
                autoBuildTextureLODPaths,
                autoBuildMeshStreamingKey
            );

        if (GUILayout.Button("Capture Mesh Names From Selected Objects"))
            CaptureMeshNamesFromSelectedObjects(bundleGroup, meshBundleSuffix);

        EditorGUILayout.Space();

        GUILayout.Label("Build Bundles Separately", EditorStyles.boldLabel);

        if (GUILayout.Button("Build Texture Bundles For Group"))
            BuildTextureBundlesForGroup(bundleGroup, lowTextureBundleSuffix, fullTextureBundleSuffix);

        if (GUILayout.Button("Build Mesh Bundle For Group"))
            BuildMeshBundleForGroup(bundleGroup, meshBundleSuffix);

        if (GUILayout.Button("Build Texture And Mesh Bundles For Group"))
        {
            BuildTextureBundlesForGroup(bundleGroup, lowTextureBundleSuffix, fullTextureBundleSuffix);
            BuildMeshBundleForGroup(bundleGroup, meshBundleSuffix);
        }

        EditorGUILayout.Space();

        GUILayout.Label("Build / Cleanup", EditorStyles.boldLabel);

        if (GUILayout.Button("Build All Assigned AssetBundles"))
            BuildAllAssignedAssetBundles();

        if (GUILayout.Button("Clear Selected Asset Bundle Names"))
            ClearSelectedAssetBundleNames();
    }

    [MenuItem("PSVita/AssetBundles/LOD Asset Bundle Builder")]
    public static void OpenWindow()
    {
        var window =
            GetWindow<VitaAssetBundleBuilder>("LOD Bundles");

        window.minSize = new Vector2(520f, 540f);
        window.Show();
    }

    /*
        Selected texture assignment.

        We use the provided group name to build bundle names:
            group_low
            group_full

        Then we assign selected textures based on their filename suffix.
    */
    private static void AssignSelectedTextureBundles(
        string group,
        string lowSuffix,
        string fullSuffix)
    {
        if (string.IsNullOrEmpty(group))
        {
            Debug.LogWarning("Bundle group is empty.");
            return;
        }

        var selected = Selection.objects;

        if (selected == null || selected.Length == 0)
        {
            Debug.LogWarning("No assets selected for texture AssetBundle assignment.");
            return;
        }

        var lowBundleName = group + lowSuffix;
        var fullBundleName = group + fullSuffix;

        var assigned = 0;

        for (var i = 0; i < selected.Length; i++)
        {
            var path = AssetDatabase.GetAssetPath(selected[i]);

            if (string.IsNullOrEmpty(path))
                continue;

            var importer = AssetImporter.GetAtPath(path) as TextureImporter;

            if (importer == null)
                continue;

            var assetName = Path.GetFileNameWithoutExtension(path);

            if (assetName.EndsWith("_Full"))
            {
                importer.assetBundleName = fullBundleName;
                assigned++;
            }
            else if (assetName.EndsWith("_Low"))
            {
                importer.assetBundleName = lowBundleName;
                assigned++;
            }
        }

        AssetDatabase.RemoveUnusedAssetBundleNames();
        AssetDatabase.SaveAssets();
        AssetDatabase.Refresh();

        Debug.Log(
            "Assigned " +
            assigned +
            " selected textures to AssetBundles: " +
            lowBundleName +
            " / " +
            fullBundleName
        );
    }

    /*
        Selected mesh assignment.

        This assigns selected existing model/mesh assets to:
            group_meshes

        This does not extract FBX submeshes. For runtime mesh streaming, the
        extraction button below is usually the better workflow.
    */
    private static void AssignSelectedMeshAssetsToBundle(
        string group,
        string meshSuffix)
    {
        if (string.IsNullOrEmpty(group))
        {
            Debug.LogWarning("Bundle group is empty.");
            return;
        }

        var selected = Selection.objects;

        if (selected == null || selected.Length == 0)
        {
            Debug.LogWarning("No assets selected for mesh AssetBundle assignment.");
            return;
        }

        var meshBundleName = group + meshSuffix;

        var assigned = 0;

        for (var i = 0; i < selected.Length; i++)
        {
            var obj = selected[i];

            if (obj == null)
                continue;

            var path = AssetDatabase.GetAssetPath(obj);

            if (string.IsNullOrEmpty(path))
                continue;

            if (!SelectionLooksLikeMeshAsset(path, obj))
                continue;

            var importer = AssetImporter.GetAtPath(path);

            if (importer == null)
                continue;

            importer.assetBundleName = meshBundleName;
            assigned++;
        }

        AssetDatabase.RemoveUnusedAssetBundleNames();
        AssetDatabase.SaveAssets();
        AssetDatabase.Refresh();

        Debug.Log(
            "Assigned " +
            assigned +
            " selected mesh/model assets to AssetBundle: " +
            meshBundleName
        );
    }

    /*
        Generated mesh extraction.

        This is the preferred mesh-streaming workflow. We copy the meshes that are
        currently assigned in the scene into standalone .asset files, assign those
        assets to the group mesh bundle, then store the generated mesh asset name
        on each Shader_LOD_Enumerator.
    */
    private static void ExtractMeshAssetsFromSelectedObjects(
        string group,
        string meshSuffix,
        bool overwriteExisting,
        bool includeInactive)
    {
        if (string.IsNullOrEmpty(group))
        {
            Debug.LogWarning("Bundle group is empty.");
            return;
        }

        var selectedObjects = Selection.gameObjects;

        if (selectedObjects == null || selectedObjects.Length == 0)
        {
            Debug.LogWarning("No GameObjects selected for mesh extraction.");
            return;
        }

        EnsureFolderExists("Assets/Generated");
        EnsureFolderExists(GeneratedMeshRoot);

        var groupFolder = GeneratedMeshRoot + "/" + SanitizeAssetFileName(group);
        EnsureFolderExists(groupFolder);

        var meshBundleName = group + meshSuffix;

        var extracted = 0;
        var skipped = 0;

        var processedMeshes = new HashSet<Mesh>();

        for (var i = 0; i < selectedObjects.Length; i++)
        {
            var enumerators =
                selectedObjects[i].GetComponentsInChildren<Shader_LOD_Enumerator>(includeInactive);

            for (var j = 0; j < enumerators.Length; j++)
            {
                var e = enumerators[j];

                if (e == null)
                    continue;

                var sourceMesh = GetRendererMesh(e);

                if (sourceMesh == null)
                {
                    skipped++;
                    continue;
                }

                /*
                    Built-in primitive meshes and missing/non-asset meshes can still
                    be copied. The generated .asset is what matters for runtime.
                */
                var cleanMeshName = SanitizeAssetFileName(sourceMesh.name);

                if (string.IsNullOrEmpty(cleanMeshName))
                    cleanMeshName = SanitizeAssetFileName(e.gameObject.name + "_Mesh");

                var assetPath = groupFolder + "/" + cleanMeshName + ".asset";

                /*
                    If multiple objects share the same mesh, we only need one generated
                    asset file. All matching enumerators point at the same mesh name.
                */
                if (!processedMeshes.Contains(sourceMesh))
                {
                    var existingMeshAsset = AssetDatabase.LoadAssetAtPath<Mesh>(assetPath);

                    if (existingMeshAsset == null || overwriteExisting)
                    {
                        if (existingMeshAsset != null)
                            AssetDatabase.DeleteAsset(assetPath);

                        var meshCopy = Instantiate(sourceMesh);
                        meshCopy.name = cleanMeshName;

                        AssetDatabase.CreateAsset(meshCopy, assetPath);
                        extracted++;
                    }

                    processedMeshes.Add(sourceMesh);
                }

                var generatedMesh = AssetDatabase.LoadAssetAtPath<Mesh>(assetPath);

                if (generatedMesh == null)
                {
                    skipped++;
                    continue;
                }

                var importer = AssetImporter.GetAtPath(assetPath);

                if (importer != null)
                    importer.assetBundleName = meshBundleName;

                Undo.RecordObject(e, "Extract Mesh Asset For Streaming");

                e.useMeshStreaming = true;
                e.meshBundleGroup = group;
                e.meshBundleSuffix = meshSuffix;
                e.meshAssetName = generatedMesh.name;
                e.meshStreamingKey = meshBundleName + ":" + generatedMesh.name;
                e.autoBuildMeshStreamingKey = true;

                EditorUtility.SetDirty(e);
            }
        }

        AssetDatabase.RemoveUnusedAssetBundleNames();
        AssetDatabase.SaveAssets();
        AssetDatabase.Refresh();

        Debug.Log(
            "Extracted/assigned mesh assets for group '" +
            group +
            "'. New or overwritten assets: " +
            extracted +
            ". Skipped: " +
            skipped +
            ". Bundle: " +
            meshBundleName
        );
    }

    /*
        Mesh fetch helper.

        We support static MeshFilter objects and SkinnedMeshRenderer objects.
    */
    private static Mesh GetRendererMesh(Shader_LOD_Enumerator e)
    {
        if (e == null)
            return null;

        var mf = e.GetComponent<MeshFilter>();

        if (mf != null && mf.sharedMesh != null)
            return mf.sharedMesh;

        var smr = e.GetComponent<SkinnedMeshRenderer>();

        if (smr != null && smr.sharedMesh != null)
            return smr.sharedMesh;

        return null;
    }

    /*
        Mesh asset filter.

        We accept loose Mesh assets, model files, and imported assets that contain
        Mesh sub-assets. This keeps the workflow flexible for FBX and generated meshes.
    */
    private static bool SelectionLooksLikeMeshAsset(string path, Object selectedObject)
    {
        if (selectedObject is Mesh)
            return true;

        var lower = path.ToLowerInvariant();

        if (lower.EndsWith(".fbx"))
            return true;

        if (lower.EndsWith(".obj"))
            return true;

        if (lower.EndsWith(".dae"))
            return true;

        if (lower.EndsWith(".blend"))
            return true;

        if (lower.EndsWith(".asset"))
        {
            var assets = AssetDatabase.LoadAllAssetsAtPath(path);

            for (var i = 0; i < assets.Length; i++)
                if (assets[i] is Mesh)
                    return true;
        }

        var subAssets = AssetDatabase.LoadAllAssetsAtPath(path);

        for (var j = 0; j < subAssets.Length; j++)
            if (subAssets[j] is Mesh)
                return true;

        return false;
    }

    /*
        Selected enumerator group assignment.

        This lets us select a parent building object and apply the same texture
        and mesh bundle group to every Shader_LOD_Enumerator under it.
    */
    private static void ApplyGroupToSelectedEnumerators(
        string group,
        string lowTextureSuffix,
        string fullTextureSuffix,
        string meshSuffix,
        bool enableTextureLOD,
        bool enableMeshStreaming,
        bool autoBuildTexturePaths,
        bool autoBuildMeshKey)
    {
        if (string.IsNullOrEmpty(group))
        {
            Debug.LogWarning("Bundle group is empty.");
            return;
        }

        var selected = Selection.gameObjects;

        if (selected == null || selected.Length == 0)
        {
            Debug.LogWarning("No GameObjects selected.");
            return;
        }

        var changed = 0;

        for (var i = 0; i < selected.Length; i++)
        {
            var enumerators =
                selected[i].GetComponentsInChildren<Shader_LOD_Enumerator>(true);

            for (var j = 0; j < enumerators.Length; j++)
            {
                var e = enumerators[j];

                if (e == null)
                    continue;

                Undo.RecordObject(e, "Apply LOD AssetBundle Group");

                e.useTextureLOD = enableTextureLOD;
                e.useTextureBundleGroup = true;
                e.textureBundleGroup = group;
                e.lowTextureBundleSuffix = lowTextureSuffix;
                e.highTextureBundleSuffix = fullTextureSuffix;
                e.autoBuildTextureLODPaths = autoBuildTexturePaths;

                e.useMeshStreaming = enableMeshStreaming;
                e.meshBundleGroup = group;
                e.meshBundleSuffix = meshSuffix;
                e.autoBuildMeshStreamingKey = autoBuildMeshKey;

                CaptureMeshNameForEnumerator(e, group, meshSuffix);

                EditorUtility.SetDirty(e);
                changed++;
            }
        }

        AssetDatabase.SaveAssets();

        Debug.Log(
            "Applied bundle group '" +
            group +
            "' to " +
            changed +
            " Shader_LOD_Enumerator components."
        );
    }

    /*
        Mesh name capture for selected objects.

        This scans selected GameObjects and their children, finds MeshFilter or
        SkinnedMeshRenderer meshes, then stores the mesh name into the enumerator.
    */
    private static void CaptureMeshNamesFromSelectedObjects(
        string group,
        string meshSuffix)
    {
        if (string.IsNullOrEmpty(group))
        {
            Debug.LogWarning("Bundle group is empty.");
            return;
        }

        var selected = Selection.gameObjects;

        if (selected == null || selected.Length == 0)
        {
            Debug.LogWarning("No GameObjects selected.");
            return;
        }

        var captured = 0;

        for (var i = 0; i < selected.Length; i++)
        {
            var enumerators =
                selected[i].GetComponentsInChildren<Shader_LOD_Enumerator>(true);

            for (var j = 0; j < enumerators.Length; j++)
            {
                var e = enumerators[j];

                if (e == null)
                    continue;

                Undo.RecordObject(e, "Capture Mesh Streaming Name");

                if (CaptureMeshNameForEnumerator(e, group, meshSuffix))
                {
                    EditorUtility.SetDirty(e);
                    captured++;
                }
            }
        }

        AssetDatabase.SaveAssets();

        Debug.Log(
            "Captured mesh streaming names for " +
            captured +
            " Shader_LOD_Enumerator components."
        );
    }

    /*
        Enumerator mesh-name capture.

        The runtime key becomes:
            group_meshes:MeshName
    */
    private static bool CaptureMeshNameForEnumerator(
        Shader_LOD_Enumerator e,
        string group,
        string meshSuffix)
    {
        if (e == null)
            return false;

        var mesh = GetRendererMesh(e);

        if (mesh == null)
            return false;

        e.meshBundleGroup = group;
        e.meshBundleSuffix = meshSuffix;
        e.meshAssetName = mesh.name;
        e.meshStreamingKey = group + meshSuffix + ":" + mesh.name;

        return true;
    }

    /*
        Texture-only bundle build.

        This builds only:
            group_low
            group_full

        It does not rebuild the mesh bundle unless selected assets are also assigned
        to one of these texture bundle names.
    */
    private static void BuildTextureBundlesForGroup(
        string group,
        string lowSuffix,
        string fullSuffix)
    {
        if (string.IsNullOrEmpty(group))
        {
            Debug.LogWarning("Bundle group is empty.");
            return;
        }

        var lowBundleName = group + lowSuffix;
        var fullBundleName = group + fullSuffix;

        var builds = new List<AssetBundleBuild>();

        AddBundleBuildIfAssigned(builds, lowBundleName);
        AddBundleBuildIfAssigned(builds, fullBundleName);

        if (builds.Count == 0)
        {
            Debug.LogWarning(
                "No assigned texture bundles found for group: " +
                group +
                ". Expected: " +
                lowBundleName +
                " / " +
                fullBundleName
            );

            return;
        }

        BuildSpecificBundles(builds.ToArray(), "texture bundles for group '" + group + "'");
    }

    /*
        Mesh-only bundle build.

        This builds only:
            group_meshes
    */
    private static void BuildMeshBundleForGroup(
        string group,
        string meshSuffix)
    {
        if (string.IsNullOrEmpty(group))
        {
            Debug.LogWarning("Bundle group is empty.");
            return;
        }

        var meshBundleName = group + meshSuffix;

        var builds = new List<AssetBundleBuild>();

        AddBundleBuildIfAssigned(builds, meshBundleName);

        if (builds.Count == 0)
        {
            Debug.LogWarning(
                "No assigned mesh bundle found for group: " +
                group +
                ". Expected: " +
                meshBundleName
            );

            return;
        }

        BuildSpecificBundles(builds.ToArray(), "mesh bundle for group '" + group + "'");
    }

    /*
        Adds a named AssetBundleBuild only if Unity currently has assets assigned
        to that bundle name.
    */
    private static void AddBundleBuildIfAssigned(
        List<AssetBundleBuild> builds,
        string bundleName)
    {
        if (builds == null)
            return;

        if (string.IsNullOrEmpty(bundleName))
            return;

        var assetPaths = AssetDatabase.GetAssetPathsFromAssetBundle(bundleName);

        if (assetPaths == null || assetPaths.Length == 0)
            return;

        var build = new AssetBundleBuild();
        build.assetBundleName = bundleName;
        build.assetNames = assetPaths;

        builds.Add(build);
    }

    /*
        Specific AssetBundle build.

        BuildPipeline.BuildAssetBundles with AssetBundleBuild[] lets us build only
        the bundles we ask for, instead of rebuilding every assigned bundle.
    */
    private static void BuildSpecificBundles(
        AssetBundleBuild[] builds,
        string description)
    {
        if (builds == null || builds.Length == 0)
            return;

        if (!Directory.Exists(OutputFolder))
            Directory.CreateDirectory(OutputFolder);

        BuildPipeline.BuildAssetBundles(
            OutputFolder,
            builds,
            BuildAssetBundleOptions.None,
            BuildTarget.PSP2
        );

        AssetDatabase.Refresh();

        Debug.Log("Built " + description + " to: " + OutputFolder);
    }

    /*
        Full AssetBundle build.

        This builds every currently assigned AssetBundle in the project.
    */
    private static void BuildAllAssignedAssetBundles()
    {
        if (!Directory.Exists(OutputFolder))
            Directory.CreateDirectory(OutputFolder);

        BuildPipeline.BuildAssetBundles(
            OutputFolder,
            BuildAssetBundleOptions.None,
            BuildTarget.PSP2
        );

        AssetDatabase.Refresh();

        Debug.Log("Built all assigned Vita AssetBundles to: " + OutputFolder);
    }

    /*
        Selected asset bundle-name clearing.

        This works for textures, models, loose mesh assets, and other importers.
    */
    private static void ClearSelectedAssetBundleNames()
    {
        var selected = Selection.objects;

        if (selected == null || selected.Length == 0)
        {
            Debug.LogWarning("No assets selected for AssetBundle clearing.");
            return;
        }

        var cleared = 0;

        for (var i = 0; i < selected.Length; i++)
        {
            var path = AssetDatabase.GetAssetPath(selected[i]);

            if (string.IsNullOrEmpty(path))
                continue;

            var importer = AssetImporter.GetAtPath(path);

            if (importer == null)
                continue;

            importer.assetBundleName = string.Empty;
            cleared++;
        }

        AssetDatabase.RemoveUnusedAssetBundleNames();
        AssetDatabase.SaveAssets();
        AssetDatabase.Refresh();

        Debug.Log("Cleared AssetBundle names on " + cleared + " selected assets.");
    }

    /*
        Folder creation helper.

        AssetDatabase.CreateFolder needs parent and child folder names separately,
        so this creates missing path parts incrementally.
    */
    private static void EnsureFolderExists(string folderPath)
    {
        if (AssetDatabase.IsValidFolder(folderPath))
            return;

        var normalized = folderPath.Replace("\\", "/");
        var parts = normalized.Split('/');

        if (parts.Length == 0)
            return;

        var current = parts[0];

        for (var i = 1; i < parts.Length; i++)
        {
            var next = current + "/" + parts[i];

            if (!AssetDatabase.IsValidFolder(next))
                AssetDatabase.CreateFolder(current, parts[i]);

            current = next;
        }
    }

    /*
        Asset file-name cleanup.

        Unity asset files cannot safely use arbitrary mesh names, especially if
        they came from imported DCC hierarchy paths.
    */
    private static string SanitizeAssetFileName(string value)
    {
        if (string.IsNullOrEmpty(value))
            return "GeneratedMesh";

        var invalid = Path.GetInvalidFileNameChars();

        for (var i = 0; i < invalid.Length; i++)
            value = value.Replace(invalid[i], '_');

        value = value.Replace(":", "_");
        value = value.Replace("/", "_");
        value = value.Replace("\\", "_");

        return value;
    }
}
#endif