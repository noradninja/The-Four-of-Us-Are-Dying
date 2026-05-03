#if UNITY_EDITOR

using System.IO;
using UnityEditor;
using UnityEngine;

public static class TextureFullCopyTool
{
    private const string OutputFolder = "Assets/Resources/Texture";
    private const string PSP2 = "PSP2";

    [MenuItem("Tools/PS Vita Textures/Create Low And Full Streaming Copies")]
    public static void CreateLowAndFullStreamingCopies()
    {
        if (!Directory.Exists(OutputFolder))
            Directory.CreateDirectory(OutputFolder);

        var selected = Selection.objects;
        var created = 0;

        for (var i = 0; i < selected.Length; i++)
        {
            var tex = selected[i] as Texture;
            if (tex == null)
                continue;

            var sourcePath = AssetDatabase.GetAssetPath(tex);
            if (string.IsNullOrEmpty(sourcePath))
                continue;

            var sourceImporter = AssetImporter.GetAtPath(sourcePath) as TextureImporter;
            if (sourceImporter == null)
                continue;

            var sourceMax = GetEffectivePSP2MaxSize(sourceImporter);
            var lowMax = Mathf.Clamp(sourceMax / 2, 32, 2048);
            var fullMax = Mathf.Clamp(sourceMax * 2, 32, 2048);

            created += CreateStreamingCopy(sourcePath, "_Low", lowMax);
            created += CreateStreamingCopy(sourcePath, "_Full", fullMax);
        }

        AssetDatabase.Refresh();

        Debug.Log("Created/configured " + created + " streaming texture copy/copies.");
    }

    private static int CreateStreamingCopy(string sourcePath, string suffix, int maxSize)
    {
        var extension = Path.GetExtension(sourcePath);
        var fileName = Path.GetFileNameWithoutExtension(sourcePath);
        var destPath = OutputFolder + "/" + fileName + suffix + extension;

        if (File.Exists(destPath))
        {
            Debug.LogWarning("Skipped existing streaming texture: " + destPath);
            return 0;
        }

        if (!AssetDatabase.CopyAsset(sourcePath, destPath))
        {
            Debug.LogWarning("Failed to copy texture: " + sourcePath);
            return 0;
        }

        AssetDatabase.ImportAsset(destPath);

        var importer = AssetImporter.GetAtPath(destPath) as TextureImporter;
        if (importer == null)
            return 0;

        var hasAlpha = importer.DoesSourceTextureHaveAlpha();

        var ps = importer.GetPlatformTextureSettings(PSP2);
        ps.name = PSP2;
        ps.overridden = true;
        ps.maxTextureSize = maxSize;
        ps.compressionQuality = 100;
        ps.format = hasAlpha ? TextureImporterFormat.DXT5 : TextureImporterFormat.DXT1;

        importer.SetPlatformTextureSettings(ps);

        EditorUtility.SetDirty(importer);
        importer.SaveAndReimport();

        Debug.Log(
            "Created streaming texture: " + destPath +
            " | PSP2 max: " + maxSize +
            " | Format: " + ps.format
        );

        return 1;
    }

    private static int GetEffectivePSP2MaxSize(TextureImporter importer)
    {
        var sourceMax = importer.maxTextureSize;

        var sourcePSP2 =
            importer.GetPlatformTextureSettings(PSP2);

        if (sourcePSP2 != null && sourcePSP2.overridden && sourcePSP2.maxTextureSize > 0)
            sourceMax = sourcePSP2.maxTextureSize;

        return Mathf.Clamp(sourceMax, 32, 2048);
    }
}

#endif