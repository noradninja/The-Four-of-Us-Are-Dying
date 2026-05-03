#if UNITY_EDITOR
using UnityEditor;
using UnityEditor.Build;
using UnityEditor.Build.Reporting;

public class VitaBuildPreprocessor : IPreprocessBuildWithReport
{
    public int callbackOrder
    {
        get { return 0; }
    }

    public void OnPreprocessBuild(BuildReport report)
    {
        if (report.summary.platform == BuildTarget.PSP2)
        {
            PlayerSettings.use32BitDisplayBuffer = false;
            PlayerSettings.graphicsJobMode = GraphicsJobMode.Native;
        }
    }
}
#endif