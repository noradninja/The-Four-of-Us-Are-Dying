using System;
using System.IO;
using System.Text;
using System.Collections.Generic;
using UnityEditor;
using UnityEngine;
using UnityEngine.Profiling;

public class PSVitaTextureOptimizer : EditorWindow
{
    // ============================
    // UI State
    // ============================

    static readonly int[] kMaxSizes = { 16, 32, 64, 128, 256, 512, 1024, 2048 };
    static readonly string[] kMaxSizeLabels = { "16", "32", "64", "128", "256", "512", "1024", "2048" };

    static readonly TextureImporterFormat[] kRGBFormats =
    {
        TextureImporterFormat.PVRTC_RGB2,
        TextureImporterFormat.PVRTC_RGB4
    };

    static readonly TextureImporterFormat[] kRGBAFormats =
    {
        TextureImporterFormat.PVRTC_RGBA2,
        TextureImporterFormat.PVRTC_RGBA4
    };

    int maxSizeIndex = 4;   // 256
    int rgbFormatIndex = 1;
    int rgbaFormatIndex = 1;

    bool generateMipmaps = false;
    bool convertAllTextures = true;
    bool forcePSP2MaxSize = false;
    bool addBackupToGitIgnore = true;

    const string BackupRoot = "Assets/PSVita/TextureBackup";

    // ============================
    // Menu
    // ============================

    [MenuItem("PSVita/Texture Optimizer")]
    static void Open()
    {
        GetWindow<PSVitaTextureOptimizer>("PSVita Texture Optimizer");
    }

    // ============================
    // UI
    // ============================

    void OnGUI()
    {
        GUILayout.Label("Configuration", EditorStyles.boldLabel);

        maxSizeIndex = EditorGUILayout.Popup("Max Texture Size", maxSizeIndex, kMaxSizeLabels);
        rgbFormatIndex = EditorGUILayout.Popup("RGB Textures", rgbFormatIndex, new[] { "PVRTC RGB 2bpp", "PVRTC RGB 4bpp" });
        rgbaFormatIndex = EditorGUILayout.Popup("RGBA Textures", rgbaFormatIndex, new[] { "PVRTC RGBA 2bpp", "PVRTC RGBA 4bpp" });

        generateMipmaps = EditorGUILayout.Toggle("Generate Mipmaps", generateMipmaps);
        forcePSP2MaxSize = EditorGUILayout.Toggle("Force PSP2 Max Size (Override Existing)", forcePSP2MaxSize);

        GUILayout.Space(6);
        EditorGUILayout.HelpBox(
            "Rules:\n" +
            "• UI / Sprites → PVRTC RGBA 4bpp (forced)\n" +
            "• Normal Maps → PVRTC RGB 4bpp (forced, mipmaps ON)\n" +
            "• Color Textures → RGB or RGBA based on Import Alpha\n" +
            "• PSVita publishing folders are auto-excluded\n" +
            "• When force is OFF, textures are NEVER upscaled",
            MessageType.Info
        );

        GUILayout.Space(8);

        convertAllTextures = EditorGUILayout.Toggle("Convert ALL textures", convertAllTextures);
        addBackupToGitIgnore = EditorGUILayout.Toggle("Add backup folder to .gitignore", addBackupToGitIgnore);

        GUILayout.Space(10);

        if (GUILayout.Button("Analyze"))
            AnalyzeTextures();

        if (GUILayout.Button("Backup"))
            BackupTextures();

        if (GUILayout.Button("Optimize"))
            OptimizeTextures();

        if (GUILayout.Button("Restore From Backup"))
            RestoreFromBackup();
    }

    // ============================
    // Texture Enumeration
    // ============================

    string[] GetTargetTextureGUIDs()
    {
        if (convertAllTextures)
            return AssetDatabase.FindAssets("t:Texture");

        UnityEngine.Object[] selected =
            Selection.GetFiltered(typeof(Texture), SelectionMode.DeepAssets);

        string[] guids = new string[selected.Length];
        for (int i = 0; i < selected.Length; i++)
            guids[i] = AssetDatabase.AssetPathToGUID(
                AssetDatabase.GetAssetPath(selected[i])
            );

        return guids;
    }

    // ============================
    // PSVita Publishing Folder Detection
    // ============================

    HashSet<string> GetPSVitaPublishingFolders()
    {
        HashSet<string> folders = new HashSet<string>();

        AddFolderFromPath(folders, PlayerSettings.PSVita.liveAreaPath);
        AddFolderFromPath(folders, PlayerSettings.PSVita.liveAreaGatePath);
        AddFolderFromPath(folders, PlayerSettings.PSVita.liveAreaBackroundPath);

        return folders;
    }

    void AddFolderFromPath(HashSet<string> folders, string assetPath)
    {
        if (string.IsNullOrEmpty(assetPath))
            return;

        if (!assetPath.StartsWith("Assets/"))
            assetPath = "Assets/" + assetPath.TrimStart('/');

        string dir = Path.GetDirectoryName(assetPath);
        if (string.IsNullOrEmpty(dir))
            return;

        dir = dir.Replace('\\', '/');

        if (Directory.Exists(dir))
            folders.Add(dir);
    }

    bool IsUnderAnyFolder(string assetPath, HashSet<string> folders)
    {
        assetPath = assetPath.Replace('\\', '/');

        foreach (string folder in folders)
        {
            if (assetPath.StartsWith(folder + "/"))
                return true;
        }
        return false;
    }

    // ============================
    // MANUAL BACKUP
    // ============================

    void BackupTextures()
    {
        if (addBackupToGitIgnore)
            EnsureBackupIgnoredByGit();

        string[] guids = GetTargetTextureGUIDs();
        if (guids.Length == 0)
            return;

        AssetDatabase.StartAssetEditing();
        try
        {
            for (int i = 0; i < guids.Length; i++)
            {
                EditorUtility.DisplayProgressBar(
                    "Backing Up Textures",
                    "Backing up textures...",
                    (float)i / guids.Length
                );

                string path = AssetDatabase.GUIDToAssetPath(guids[i]);
                if (string.IsNullOrEmpty(path) || path.StartsWith(BackupRoot))
                    continue;

                BackupSourceTexture(path);
            }
        }
        finally
        {
            EditorUtility.ClearProgressBar();
            AssetDatabase.StopAssetEditing();
            AssetDatabase.Refresh();
        }

        EditorUtility.DisplayDialog(
            "Backup Complete",
            "Textures have been backed up to:\n\n" + BackupRoot,
            "OK"
        );
    }

    // ============================
    // ANALYZE → CSV
    // ============================

    void AnalyzeTextures()
    {
        string[] guids = GetTargetTextureGUIDs();
        if (guids.Length == 0)
            return;

        HashSet<string> publishingFolders = GetPSVitaPublishingFolders();

        StringBuilder csv = new StringBuilder(4096);
        csv.AppendLine(
            "AssetPath,SourceMB,EstimatedPVRTC_MB,ReductionPercent," +
            "ImporterType,UsesAlpha,Classification," +
            "PSP2_EffectiveMax,UserTargetMax,PSP2_OutputMax," +
            "OriginalFormat,TargetFormat," +
            "MipmapsOriginal,MipmapsTarget," +
            "ForcedOverride,WillChange,ExcludedReason"
        );

        int userMax = kMaxSizes[maxSizeIndex];
        TextureImporterFormat targetRGB = kRGBFormats[rgbFormatIndex];
        TextureImporterFormat targetRGBA = kRGBAFormats[rgbaFormatIndex];

        foreach (string guid in guids)
        {
            string path = AssetDatabase.GUIDToAssetPath(guid);
            if (string.IsNullOrEmpty(path) || path.StartsWith(BackupRoot))
                continue;

            TextureImporter importer = AssetImporter.GetAtPath(path) as TextureImporter;
            if (!importer)
                continue;

            bool isExcluded = IsUnderAnyFolder(path, publishingFolders);
            string excludedReason = isExcluded ? "Publishing Texture" : "";

            TextureImporterPlatformSettings psp2 =
                importer.GetPlatformTextureSettings("PSP2");

            int currentMax =
                psp2.overridden && psp2.maxTextureSize > 0
                    ? psp2.maxTextureSize
                    : importer.maxTextureSize;

            int outputMax =
                isExcluded
                    ? currentMax
                    : (forcePSP2MaxSize ? userMax : Mathf.Min(currentMax, userMax));

            bool usesAlpha = importer.alphaSource != TextureImporterAlphaSource.None;
            bool mipTarget = importer.mipmapEnabled;

            string classification = "Color";
            string forced = "None";
            TextureImporterFormat finalFormat = psp2.format;

            if (isExcluded)
            {
                classification = "SystemReserved";
                forced = "PSVitaPublishing";
            }
            else if (importer.textureType == TextureImporterType.NormalMap)
            {
                classification = "Normal";
                forced = "NormalMap";
                finalFormat = TextureImporterFormat.PVRTC_RGB4;
                mipTarget = true;
            }
            else if (importer.textureType == TextureImporterType.Sprite)
            {
                classification = "UI";
                forced = "UI";
                finalFormat = TextureImporterFormat.PVRTC_RGBA4;
            }
            else
            {
                finalFormat = usesAlpha ? targetRGBA : targetRGB;
            }

            Texture tex = AssetDatabase.LoadAssetAtPath<Texture>(path);
            if (!tex)
                continue;

            long sourceBytes = Profiler.GetRuntimeMemorySizeLong(tex);
            float sourceMB = sourceBytes / (1024f * 1024f);

            float estimatedMB = sourceMB;
            if (!isExcluded)
            {
                int w = Mathf.Min(tex.width, outputMax);
                int h = Mathf.Min(tex.height, outputMax);

                int bpp =
                    finalFormat == TextureImporterFormat.PVRTC_RGB2 ||
                    finalFormat == TextureImporterFormat.PVRTC_RGBA2 ? 2 : 4;

                estimatedMB = (w * h * bpp) / 8f / (1024f * 1024f);
            }

            float reductionPercent =
                sourceMB > 0.0001f
                    ? (1f - (estimatedMB / sourceMB)) * 100f
                    : 0f;

            bool willChange =
                !isExcluded &&
                (
                    !psp2.overridden ||
                    psp2.maxTextureSize != outputMax ||
                    psp2.format != finalFormat ||
                    importer.mipmapEnabled != mipTarget
                );

            csv.AppendLine(string.Format(
                "{0},{1:F3},{2:F3},{3:F1}," +
                "{4},{5},{6},{7},{8},{9}," +
                "{10},{11},{12},{13},{14},{15},{16}",
                path.Substring(7),
                sourceMB,
                estimatedMB,
                reductionPercent,
                importer.textureType,
                usesAlpha ? "TRUE" : "FALSE",
                classification,
                currentMax,
                userMax,
                outputMax,
                psp2.overridden ? psp2.format.ToString() : "Automatic",
                finalFormat,
                importer.mipmapEnabled ? "TRUE" : "FALSE",
                mipTarget ? "TRUE" : "FALSE",
                forced,
                willChange ? "TRUE" : "FALSE",
                excludedReason
            ));
        }

        WriteAndSelectCSV(csv.ToString());
    }

    // ============================
    // OPTIMIZE (skips publishing folders)
    // ============================

    void OptimizeTextures()
    {
        if (addBackupToGitIgnore)
            EnsureBackupIgnoredByGit();

        string[] guids = GetTargetTextureGUIDs();
        HashSet<string> publishingFolders = GetPSVitaPublishingFolders();

        int userMax = kMaxSizes[maxSizeIndex];
        TextureImporterFormat targetRGB = kRGBFormats[rgbFormatIndex];
        TextureImporterFormat targetRGBA = kRGBAFormats[rgbaFormatIndex];

        List<string> modified = new List<string>();
        bool cancelled = false;

        AssetDatabase.StartAssetEditing();
        try
        {
            for (int i = 0; i < guids.Length; i++)
            {
                if (EditorUtility.DisplayCancelableProgressBar(
                    "PSVita Texture Optimizer",
                    "Optimizing textures...",
                    (float)i / guids.Length))
                {
                    cancelled = true;
                    break;
                }

                string path = AssetDatabase.GUIDToAssetPath(guids[i]);
                if (string.IsNullOrEmpty(path) || path.StartsWith(BackupRoot))
                    continue;

                TextureImporter importer = AssetImporter.GetAtPath(path) as TextureImporter;
                if (!importer)
                    continue;

                BackupSourceTexture(path);

                if (IsUnderAnyFolder(path, publishingFolders))
                    continue;

                TextureImporterPlatformSettings psp2 =
                    importer.GetPlatformTextureSettings("PSP2");

                int currentMax =
                    psp2.overridden && psp2.maxTextureSize > 0
                        ? psp2.maxTextureSize
                        : importer.maxTextureSize;

                int outputMax =
                    forcePSP2MaxSize ? userMax : Mathf.Min(currentMax, userMax);

                bool usesAlpha = importer.alphaSource != TextureImporterAlphaSource.None;
                bool mipTarget = generateMipmaps;
                TextureImporterFormat finalFormat;

                if (importer.textureType == TextureImporterType.NormalMap)
                {
                    finalFormat = TextureImporterFormat.PVRTC_RGB4;
                    mipTarget = true;
                }
                else if (importer.textureType == TextureImporterType.Sprite)
                {
                    finalFormat = TextureImporterFormat.PVRTC_RGBA4;
                }
                else
                {
                    finalFormat = usesAlpha ? targetRGBA : targetRGB;
                }

                psp2.overridden = true;
                psp2.maxTextureSize = outputMax;
                psp2.format = finalFormat;

                importer.mipmapEnabled = mipTarget;
                importer.SetPlatformTextureSettings(psp2);
                importer.SaveAndReimport();

                modified.Add(path);
            }
        }
        finally
        {
            EditorUtility.ClearProgressBar();
            AssetDatabase.StopAssetEditing();
            AssetDatabase.Refresh();
        }

        if (cancelled)
        {
            AssetDatabase.StartAssetEditing();
            try
            {
                foreach (string path in modified)
                    RestoreSingleFromBackup(path);
            }
            finally
            {
                AssetDatabase.StopAssetEditing();
                AssetDatabase.Refresh();
            }

            EditorUtility.DisplayDialog(
                "Optimization Cancelled",
                "Operation cancelled.\nRollback complete. No changes were applied.",
                "Dismiss"
            );
        }
    }

    // ============================
    // RESTORE
    // ============================

    void RestoreFromBackup()
    {
        if (!EditorUtility.DisplayDialog(
            "Restore From Backup",
            "Overwrite textures with backed-up originals?\n\nThis cannot be undone.",
            "Restore",
            "Cancel"))
            return;

        string[] guids = GetTargetTextureGUIDs();
        if (guids.Length == 0)
            return;

        AssetDatabase.Refresh();

        try
        {
            for (int i = 0; i < guids.Length; i++)
            {
                EditorUtility.DisplayProgressBar(
                    "Restoring Textures",
                    "Restoring backed-up textures...",
                    (float)i / guids.Length
                );

                RestoreSingleFromBackup(
                    AssetDatabase.GUIDToAssetPath(guids[i])
                );
            }
        }
        finally
        {
            EditorUtility.ClearProgressBar();
            AssetDatabase.Refresh();
        }

        EditorUtility.DisplayDialog(
            "Restore Complete",
            "Textures have been restored from backup.",
            "OK"
        );
    }

    // ============================
    // Backup helpers
    // ============================

    string GetBackupPath(string assetPath)
    {
        return assetPath.StartsWith("Assets/")
            ? Path.Combine(BackupRoot, assetPath.Substring(7))
            : null;
    }

    void BackupSourceTexture(string assetPath)
    {
        string backup = GetBackupPath(assetPath);
        if (backup == null || File.Exists(backup))
            return;

        Directory.CreateDirectory(Path.GetDirectoryName(backup));
        File.Copy(assetPath, backup);
    }

    void RestoreSingleFromBackup(string assetPath)
    {
        if (string.IsNullOrEmpty(assetPath))
            return;

        string backup = GetBackupPath(assetPath);
        if (backup == null || !File.Exists(backup))
            return;

        Directory.CreateDirectory(Path.GetDirectoryName(assetPath));
        FileUtil.ReplaceFile(backup, assetPath);
        AssetDatabase.ImportAsset(assetPath, ImportAssetOptions.ForceUpdate);
    }

    // ============================
    // Git ignore
    // ============================

    void EnsureBackupIgnoredByGit()
    {
        const string entry = "Assets/PSVita/TextureBackup/";
        string path = Path.Combine(Directory.GetCurrentDirectory(), ".gitignore");

        if (!File.Exists(path))
            File.WriteAllText(path, entry + Environment.NewLine);
        else if (!File.ReadAllText(path).Contains(entry))
            File.AppendAllText(path, Environment.NewLine + entry + Environment.NewLine);
    }

    // ============================
    // CSV Output
    // ============================

    void WriteAndSelectCSV(string content)
    {
        string folder = "Assets/PSVita/TextureAnalysis";
        Directory.CreateDirectory(folder);

        string path = folder + "/TextureAnalysis_" +
                      DateTime.Now.ToString("yyyy-MM-dd_HHmmss") + ".csv";

        File.WriteAllText(path, content, Encoding.UTF8);
        AssetDatabase.Refresh();

        Selection.activeObject =
            AssetDatabase.LoadAssetAtPath<UnityEngine.Object>(path);
    }
}
