using UnityEngine;
using UnityEditor;
using System.IO;

public class LUT_Generator : EditorWindow
{
    private const int LUT_WIDTH = 128;
    private const int LUT_HEIGHT = 128;

    [MenuItem("Tools/Generate Specular LUT")]
    public static void GenerateLUT()
    {
        Texture2D lut = new Texture2D(LUT_WIDTH, LUT_HEIGHT, TextureFormat.RGBA32, false, true);
        lut.wrapMode = TextureWrapMode.Clamp;
        lut.filterMode = FilterMode.Bilinear;

        for (int y = 0; y < LUT_HEIGHT; y++)
        {
            float roughness = (float)y / (LUT_HEIGHT - 1);
            float shininess = 2.0f / Mathf.Max(roughness * roughness, 0.01f);

            for (int x = 0; x < LUT_WIDTH; x++)
            {
                float VdotH = Mathf.Clamp01((float)x / (LUT_WIDTH - 1));
                float NdotH = VdotH; // Approximation
                float NdotV = 0.5f;  // Assume typical viewing angle
                float NdotL = 0.5f;  // Assume typical lighting angle

                // Fresnel Schlick (F0 = 0.04)
                float fresnel = 0.04f + (1.0f - 0.04f) * Mathf.Pow(1.0f - VdotH, 5.0f);

                // Blinn-Phong D term (energy normalized)
                float D = (shininess + 2.0f) * 0.125f * Mathf.Pow(NdotH, shininess);

                // Geometry term (Smith)
                float Gv = NdotV / (NdotV * (1.0f - 0.5f) + 0.5f);
                float Gl = NdotL / (NdotL * (1.0f - 0.5f) + 0.5f);
                float G = Gv * Gl;

                lut.SetPixel(x, y, new Color(fresnel, D, G, 1.0f));
            }
        }

        lut.Apply();

        // Save as PNG and import
        string path = "Assets/Generated/BlinnPhongSpecularLUT.png";
        Directory.CreateDirectory("Assets/Generated");
        File.WriteAllBytes(path, lut.EncodeToPNG());
        AssetDatabase.Refresh();

        // Mark as readable and disable sRGB sampling
        TextureImporter importer = AssetImporter.GetAtPath(path) as TextureImporter;
        if (importer != null)
        {
            importer.textureCompression = TextureImporterCompression.Uncompressed;
            importer.sRGBTexture = false;
            importer.wrapMode = TextureWrapMode.Clamp;
            importer.filterMode = FilterMode.Bilinear;
            importer.mipmapEnabled = false;
            importer.alphaSource = TextureImporterAlphaSource.None;
            importer.SaveAndReimport();
        }

        Debug.Log("LUT generated and saved to " + path);
    }
}
