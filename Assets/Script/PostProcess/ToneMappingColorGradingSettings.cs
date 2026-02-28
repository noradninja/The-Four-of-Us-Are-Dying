using UnityEngine;

[ExecuteInEditMode]
public class ToneMappingColorGradingSettings : MonoBehaviour
{
    [Header("Material used by GlobalGrabOnce to process B")]
    public Material tonemappingMat;

    public bool enableTonemapping = true;
    public bool enableColorGrading = true;

    public gradingFilter GradingFilter;

    [Range(0, 1)] public float userR = 1.0f;
    [Range(0, 1)] public float userG = 1.0f;
    [Range(0, 1)] public float userB = 1.0f;

    [Range(0, 2)] public float exposure = 1.0f;

    Color _filterColor;

    public enum gradingFilter
    {
        Warm,
        Cool,
        Sepia,
        Emerald,
        Underwater,
        Hell,
        User
    }

    static readonly int ID_ColorGrading = Shader.PropertyToID("_colorGrading");
    static readonly int ID_ToneMapping  = Shader.PropertyToID("_toneMapping");
    static readonly int ID_Exposure     = Shader.PropertyToID("_exposure");
    static readonly int ID_GradingColor = Shader.PropertyToID("_gradingColor");

    void OnEnable()
    {
        ApplyNow();
    }

    void Update()
    {
        // Cheap enough; if you want to optimize, you can cache last values and only apply on change.
        ApplyNow();
    }

    public void ApplyNow()
    {
        if (tonemappingMat == null)
            return;

        // Enable/disable toggles
        tonemappingMat.SetFloat(ID_ColorGrading, enableColorGrading ? 1f : 0f);
        tonemappingMat.SetFloat(ID_ToneMapping,  enableTonemapping ? 1f : 0f);

        // Filter color
        if (enableColorGrading)
        {
            switch (GradingFilter)
            {
                default:
                case gradingFilter.Warm:       _filterColor = new Color(0.66f, 0.54f, 0f,    1f); break;
                case gradingFilter.Cool:       _filterColor = new Color(0f,    0.71f, 1f,    1f); break;
                case gradingFilter.Sepia:      _filterColor = new Color(0.67f, 0.48f, 0.2f,  1f); break;
                case gradingFilter.Underwater: _filterColor = new Color(0f,    0.76f, 0.69f, 1f); break;
                case gradingFilter.Emerald:    _filterColor = new Color(0.10f, 0.55f, 0.10f, 1f); break;
                case gradingFilter.Hell:       _filterColor = new Color(0.92f, 0.10f, 0.10f, 1f); break;
                case gradingFilter.User:       _filterColor = new Color(userR, userG, userB, 1f); break;
            }

            tonemappingMat.SetColor(ID_GradingColor, _filterColor);
        }

        tonemappingMat.SetFloat(ID_Exposure, exposure);
    }
}