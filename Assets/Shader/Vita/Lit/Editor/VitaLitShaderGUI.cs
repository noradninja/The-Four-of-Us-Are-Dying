using UnityEngine;
using UnityEditor;

[InitializeOnLoad]
public class VitaLitShaderGUI : ShaderGUI
{
    private static readonly string[] _blendModeNames = { "Opaque", "AlphaTest", "Fade", "Transparent" };
    private static readonly int[] _blendModeValues = { 0, 1, 2, 3 };

    private static readonly string[] _cullModeNames = { "Off", "Front", "Back" };
    private static readonly int[] _cullModeValues = { 0, 1, 2 };

    private static float _lastShadowDistance = -1f;
    private MaterialProperty _AltBumpMap, _CrossFade, _UseAltBump;
    private MaterialProperty _Metallic, _Roughness, _Cutoff, _AlphaTiling, _BumpScale;

    private MaterialProperty _Mode, _Cull, _MainTex, _MetallicGlossMap, _BumpMap;

    static VitaLitShaderGUI()
    {
        EditorApplication.delayCall += ApplyFadeDistanceToAll;
        EditorApplication.update += MonitorShadowDistance;
    }

    private static void MonitorShadowDistance()
    {
        if (!EditorApplication.isPlaying && !EditorApplication.isCompiling)
        {
            var current = QualitySettings.shadowDistance;
            if (!Mathf.Approximately(current, _lastShadowDistance))
            {
                _lastShadowDistance = current;
                ApplyFadeDistanceToAll();
            }
        }
    }

    public override void OnGUI(MaterialEditor materialEditor, MaterialProperty[] props)
    {
        _Mode = FindProperty("_Mode", props);
        _Cull = FindProperty("_Cull", props);
        _MainTex = FindProperty("_MainTex", props);
        _BumpMap = FindProperty("_BumpMap", props);
        _MetallicGlossMap = FindProperty("_MetallicGlossMap", props);
        _Metallic = FindProperty("_Metallic", props);
        _Roughness = FindProperty("_Roughness", props);
        _Cutoff = FindProperty("_Cutoff", props);
        _AlphaTiling = FindProperty("_AlphaTiling", props);
        _BumpScale = FindProperty("_BumpScale", props);
        _AltBumpMap = FindProperty("_AltBumpMap", props);
        _CrossFade = FindProperty("_CrossFade", props);
        _UseAltBump = FindProperty("_UseAltBump", props);

        var mat = (Material)materialEditor.target;

        if (mat.HasProperty("_FadeDistance")) mat.SetFloat("_FadeDistance", QualitySettings.shadowDistance);

        DrawRenderModeDropdown(materialEditor, mat);
        DrawCullModeDropdown(materialEditor, mat);
        EditorGUILayout.Space();

        materialEditor.TexturePropertySingleLine(new GUIContent("Albedo (RGB)"), _MainTex);
        materialEditor.TexturePropertySingleLine(new GUIContent("Normal Map"), _BumpMap);
        materialEditor.ShaderProperty(_BumpScale, new GUIContent("Normal Strength"));

        EditorGUILayout.Space();

        // Checkbox for alternate normal map
        var useAltBump = _UseAltBump.floatValue > 0.5f;
        EditorGUI.BeginChangeCheck();
        useAltBump = EditorGUILayout.Toggle(new GUIContent("Alternate Normal Map"), useAltBump);
        if (EditorGUI.EndChangeCheck()) _UseAltBump.floatValue = useAltBump ? 1.0f : 0.0f;

        if (useAltBump)
        {
            materialEditor.TexturePropertySingleLine(new GUIContent("Alt Normal Map"), _AltBumpMap);
            materialEditor.ShaderProperty(_CrossFade, new GUIContent("Crossfade Amount"));
        }

        materialEditor.TexturePropertySingleLine(new GUIContent("MOAR (RGBA)"), _MetallicGlossMap);
        materialEditor.ShaderProperty(_Metallic, new GUIContent("Metallic"));
        materialEditor.ShaderProperty(_Roughness, new GUIContent("Smoothness"));
        materialEditor.ShaderProperty(_Cutoff, new GUIContent("Alpha Cutoff"));
        materialEditor.ShaderProperty(_AlphaTiling, new GUIContent("Alpha Tiling"));

        EditorGUILayout.Space();

        // Show Invert Fill Light only if normal map is set
        if (_BumpMap.textureValue != null)
        {
            var currentValue = mat.GetFloat("_InvertFillLight");
            var invertFill = currentValue > 0.5f;
            EditorGUI.BeginChangeCheck();
            invertFill = EditorGUILayout.Toggle(new GUIContent("Invert Fill Light"), invertFill);
            if (EditorGUI.EndChangeCheck())
            {
                mat.SetFloat("_InvertFillLight", invertFill ? 1.0f : 0.0f);
                EditorUtility.SetDirty(mat);
            }
        }

        DrawFeatureToggle("Wind Influence", mat, "WIND");
        DrawFeatureToggle("Glossy Reflections", mat, "REFLECTIONS");
        DrawFeatureToggle("Specular Hilights", mat, "SPECULAR");

        SetKeyword(mat, "METALLICGLOSSMAP", _MetallicGlossMap.textureValue != null);
        SetKeyword(mat, "NORMALMAP", _BumpMap.textureValue != null);

        materialEditor.PropertiesChanged();
    }

    private static void ApplyFadeDistanceToAll()
    {
        var shadowDist = QualitySettings.shadowDistance;
        var guids = AssetDatabase.FindAssets("t:Material");
        foreach (var guid in guids)
        {
            var path = AssetDatabase.GUIDToAssetPath(guid);
            var mat = AssetDatabase.LoadAssetAtPath<Material>(path);
            if (mat != null && mat.HasProperty("_FadeDistance"))
            {
                mat.SetFloat("_FadeDistance", shadowDist);
                EditorUtility.SetDirty(mat);
            }
        }
    }

    private void DrawRenderModeDropdown(MaterialEditor editor, Material mat)
    {
        EditorGUI.BeginChangeCheck();
        var newMode =
            EditorGUILayout.IntPopup("Rendering Mode", (int)_Mode.floatValue, _blendModeNames, _blendModeValues);
        if (EditorGUI.EndChangeCheck())
        {
            editor.RegisterPropertyChangeUndo("_Mode");
            _Mode.floatValue = newMode;
            ApplyBlendAndQueue(mat, newMode);
        }
    }

    private void DrawCullModeDropdown(MaterialEditor editor, Material mat)
    {
        EditorGUI.BeginChangeCheck();
        var newCull = EditorGUILayout.IntPopup("Cull Mode", (int)_Cull.floatValue, _cullModeNames, _cullModeValues);
        if (EditorGUI.EndChangeCheck())
        {
            editor.RegisterPropertyChangeUndo("_Cull");
            _Cull.floatValue = newCull;
            mat.SetInt("_Cull", newCull);
            EditorUtility.SetDirty(mat);
        }
    }

    private void DrawFeatureToggle(string label, Material mat, string keyword)
    {
        var enabled = mat.IsKeywordEnabled(keyword);
        EditorGUI.BeginChangeCheck();
        enabled = EditorGUILayout.Toggle(label, enabled);
        if (EditorGUI.EndChangeCheck()) SetKeyword(mat, keyword, enabled);
    }

    private static void SetKeyword(Material mat, string keyword, bool state)
    {
        if (state) mat.EnableKeyword(keyword);
        else mat.DisableKeyword(keyword);
    }

    private static void ApplyBlendAndQueue(Material mat, int mode)
    {
        switch (mode)
        {
            case 0:
                mat.SetOverrideTag("RenderType", "");
                mat.SetInt("_SrcBlend", (int)UnityEngine.Rendering.BlendMode.One);
                mat.SetInt("_DstBlend", (int)UnityEngine.Rendering.BlendMode.Zero);
                mat.SetInt("_ZWrite", 1);
                mat.DisableKeyword("_ALPHATEST_ON");
                mat.DisableKeyword("_ALPHABLEND_ON");
                mat.DisableKeyword("_ALPHAPREMULTIPLY_ON");
                mat.renderQueue = (int)UnityEngine.Rendering.RenderQueue.Geometry;
                break;
            case 1:
                mat.SetOverrideTag("RenderType", "TransparentCutout");
                mat.SetInt("_SrcBlend", 1);
                mat.SetInt("_DstBlend", 0);
                mat.SetInt("_ZWrite", 1);
                mat.EnableKeyword("_ALPHATEST_ON");
                mat.DisableKeyword("_ALPHABLEND_ON");
                mat.DisableKeyword("_ALPHAPREMULTIPLY_ON");
                mat.renderQueue = (int)UnityEngine.Rendering.RenderQueue.AlphaTest;
                break;
            case 2:
                mat.SetOverrideTag("RenderType", "Transparent");
                mat.SetInt("_SrcBlend", 5);
                mat.SetInt("_DstBlend", 10);
                mat.SetInt("_ZWrite", 0);
                mat.EnableKeyword("_ALPHABLEND_ON");
                mat.DisableKeyword("_ALPHATEST_ON");
                mat.DisableKeyword("_ALPHAPREMULTIPLY_ON");
                mat.renderQueue = (int)UnityEngine.Rendering.RenderQueue.Transparent;
                break;
            case 3:
                mat.SetOverrideTag("RenderType", "Transparent");
                mat.SetInt("_SrcBlend", 1);
                mat.SetInt("_DstBlend", 10);
                mat.SetInt("_ZWrite", 0);
                mat.EnableKeyword("_ALPHAPREMULTIPLY_ON");
                mat.DisableKeyword("_ALPHATEST_ON");
                mat.DisableKeyword("_ALPHABLEND_ON");
                mat.renderQueue = (int)UnityEngine.Rendering.RenderQueue.Transparent;
                break;
        }

        EditorUtility.SetDirty(mat);
    }
}