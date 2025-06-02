using UnityEngine;
using UnityEditor;

public class VitaLitShaderGUI : ShaderGUI
{
    private static readonly string[] _blendModeNames  = { "Opaque", "AlphaTest", "Fade", "Transparent" };
    private static readonly int[]    _blendModeValues = {    0,           1,      2,           3      };

    private static readonly string[] _cullModeNames   = { "Off", "Front", "Back" };
    private static readonly int[]    _cullModeValues  = {    0,      1,      2     };

    MaterialProperty _Mode;
    MaterialProperty _Cull;
    MaterialProperty _MainTex;
    MaterialProperty _NormalMap;
    MaterialProperty _MOARMap;
    MaterialProperty _NormalHeight;
    MaterialProperty _Metallic;
    MaterialProperty _Roughness;
    MaterialProperty _Cutoff;

    public override void OnGUI(MaterialEditor materialEditor, MaterialProperty[] props)
    {
        // 1) Fetch all properties by name (false = don’t throw if missing):
        _Mode         = FindProperty("_Mode",         props, false);
        _Cull         = FindProperty("_Cull",         props, false);
        _MainTex      = FindProperty("_MainTex",      props, false);
        _NormalMap    = FindProperty("_NormalMap",    props, false);
        _MOARMap      = FindProperty("_MOARMap",      props, false);
        _NormalHeight = FindProperty("_NormalHeight", props, false);
        _Metallic     = FindProperty("_Metallic",     props, false);
        _Roughness    = FindProperty("_Roughness",    props, false);
        _Cutoff       = FindProperty("_Cutoff",       props, false);

        // If _Mode or _Cull wasn’t found, fall back to Unity’s default inspector:
        if (_Mode == null || _Cull == null)
        {
            base.OnGUI(materialEditor, props);
            return;
        }

        // 2) Grab the target Material and re‐apply its saved mode + cull every OnGUI
        Material mat = (Material)materialEditor.target;

        // Re‐apply blend‐mode keywords, ZWrite/blend, renderQueue based on _Mode.floatValue:
        ApplyBlendAndQueue(mat, (int)_Mode.floatValue);

        // Re‐apply cull state:
        mat.SetInt("_Cull", (int)_Cull.floatValue);

        // Mark the material “dirty” so Unity serializes keywords + renderQueue:
        EditorUtility.SetDirty(mat);

        // ────────────────────────────────────────────────────────────────
        // 3) DRAW “Rendering Mode” dropdown:
        // ────────────────────────────────────────────────────────────────
        EditorGUI.BeginChangeCheck();
        int newMode = EditorGUILayout.IntPopup(
            "Rendering Mode",
            (int)_Mode.floatValue,
            _blendModeNames,
            _blendModeValues
        );
        if (EditorGUI.EndChangeCheck())
        {
            materialEditor.RegisterPropertyChangeUndo("_Mode");
            _Mode.floatValue = newMode;

            // Immediately apply and persist:
            ApplyBlendAndQueue(mat, newMode);
            EditorUtility.SetDirty(mat);
        }

        // ────────────────────────────────────────────────────────────────
        // 4) DRAW “Cull Mode” dropdown:
        // ────────────────────────────────────────────────────────────────
        EditorGUI.BeginChangeCheck();
        int newCull = EditorGUILayout.IntPopup(
            "Cull Mode",
            (int)_Cull.floatValue,
            _cullModeNames,
            _cullModeValues
        );
        if (EditorGUI.EndChangeCheck())
        {
            materialEditor.RegisterPropertyChangeUndo("_Cull");
            _Cull.floatValue = newCull;

            // Apply and persist:
            mat.SetInt("_Cull", newCull);
            EditorUtility.SetDirty(mat);
        }

        EditorGUILayout.Space(); // no argument

        // ────────────────────────────────────────────────────────────────
        // 5) DRAW VITA‐LIT TEXTURE & SLIDER FIELDS:
        // ────────────────────────────────────────────────────────────────
        materialEditor.TexturePropertySingleLine(
            new GUIContent("Albedo (RGB)"),
            _MainTex
        );

        materialEditor.TexturePropertySingleLine(
            new GUIContent("Normal Map"),
            _NormalMap,
            _NormalHeight
        );

        materialEditor.TexturePropertySingleLine(
            new GUIContent("MOAR (RGBA)"),
            _MOARMap
        );

        materialEditor.ShaderProperty(
            _Metallic,
            new GUIContent("Metallic")
        );

        materialEditor.ShaderProperty(
            _Roughness,
            new GUIContent("Roughness")
        );

        materialEditor.ShaderProperty(
            _Cutoff,
            new GUIContent("Alpha Cutoff", "Used only when mode = AlphaTest (cutout).")
        );

        // ────────────────────────────────────────────────────────────────
        // 6) COMMIT PROPERTY CHANGES:
        // ────────────────────────────────────────────────────────────────
        materialEditor.PropertiesChanged();
    }

    //─────────────────────────────────────────────────────────────────
    // Applies keywords, blend/ZWrite, renderQueue exactly like Unity’s Standard.
    // Also calls SetDirty to serialize keyword + queue state into the .mat asset.
    //─────────────────────────────────────────────────────────────────
    static void ApplyBlendAndQueue(Material mat, int mode)
    {
        switch (mode)
        {
            case 0: // Opaque
                mat.SetOverrideTag("RenderType", "");
                mat.SetInt("_SrcBlend", (int)UnityEngine.Rendering.BlendMode.One);
                mat.SetInt("_DstBlend", (int)UnityEngine.Rendering.BlendMode.Zero);
                mat.SetInt("_ZWrite",    1);
                mat.DisableKeyword("_ALPHATEST_ON");
                mat.DisableKeyword("_ALPHABLEND_ON");
                mat.DisableKeyword("_ALPHAPREMULTIPLY_ON");
                mat.renderQueue = (int)UnityEngine.Rendering.RenderQueue.Geometry;
                break;

            case 1: // AlphaTest (Cutout)
                mat.SetOverrideTag("RenderType", "TransparentCutout");
                mat.SetInt("_SrcBlend", (int)UnityEngine.Rendering.BlendMode.One);
                mat.SetInt("_DstBlend", (int)UnityEngine.Rendering.BlendMode.Zero);
                mat.SetInt("_ZWrite",    1);
                mat.EnableKeyword("_ALPHATEST_ON");
                mat.DisableKeyword("_ALPHABLEND_ON");
                mat.DisableKeyword("_ALPHAPREMULTIPLY_ON");
                mat.renderQueue = (int)UnityEngine.Rendering.RenderQueue.AlphaTest;
                break;

            case 2: // Fade (SrcAlpha, OneMinusSrcAlpha)
                mat.SetOverrideTag("RenderType", "Transparent");
                mat.SetInt("_SrcBlend", (int)UnityEngine.Rendering.BlendMode.SrcAlpha);
                mat.SetInt("_DstBlend", (int)UnityEngine.Rendering.BlendMode.OneMinusSrcAlpha);
                mat.SetInt("_ZWrite",    0);
                mat.DisableKeyword("_ALPHATEST_ON");
                mat.EnableKeyword("_ALPHABLEND_ON");
                mat.DisableKeyword("_ALPHAPREMULTIPLY_ON");
                mat.renderQueue = (int)UnityEngine.Rendering.RenderQueue.Transparent;
                break;

            case 3: // Transparent (Premultiply)
                mat.SetOverrideTag("RenderType", "Transparent");
                mat.SetInt("_SrcBlend", (int)UnityEngine.Rendering.BlendMode.One);
                mat.SetInt("_DstBlend", (int)UnityEngine.Rendering.BlendMode.OneMinusSrcAlpha);
                mat.SetInt("_ZWrite",    0);
                mat.DisableKeyword("_ALPHATEST_ON");
                mat.DisableKeyword("_ALPHABLEND_ON");
                mat.EnableKeyword("_ALPHAPREMULTIPLY_ON");
                mat.renderQueue = (int)UnityEngine.Rendering.RenderQueue.Transparent;
                break;
        }
    }
}
