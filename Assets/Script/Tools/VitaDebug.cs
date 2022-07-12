using System.Collections;
using System.Collections.Generic;
using System.Runtime.InteropServices;
using UnityEngine;

public class VitaDebug  
{
#if UNITY_PSP2
    [DllImport("PrintfExport")]
    private static extern void print(string text);
#endif

    public static void Log(string log)
    {
        if(Application.platform.Equals(RuntimePlatform.PSP2)) print("[Unity PSP2]  " + log  + "\n");
        else UnityEngine.Debug.Log(log);
    }
}
