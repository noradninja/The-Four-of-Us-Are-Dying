#if UNITY_EDITOR

#if UNITY_5_3_OR_NEWER || UNITY_5_2 || UNITY_5_1 || UNITY_5_0
#define MY_CE_HORIZONTAL_SCOPE_SUPPORT
#define MY_CE_WINDOW_NAMESPACE_SUPPORT
#endif // UNITY_5_3_OR_NEWER || UNITY_5_2 || UNITY_5_1 || UNITY_5_0

#define CODE_ENCHANTER


using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEditor;
using MerryYellow.CodeEnchanter.UnityEnchanterEditor;
#if !MY_CE_WINDOW_NAMESPACE_SUPPORT
using MerryYellow.CodeEnchanter.UnityEnchanterGUI;
#endif // MY_CE_WINDOW_NAMESPACE_SUPPORT
using Common = MerryYellow.CodeEnchanter.Common;

#if MY_CE_WINDOW_NAMESPACE_SUPPORT
namespace MerryYellow.CodeEnchanter.UnityEnchanterGUI
{
#endif // MY_CE_WINDOW_NAMESPACE_SUPPORT

#if MY_CE_WINDOW_NAMESPACE_SUPPORT
    public delegate void ToAdvancedWindowDelegate(EnchanterEditor ee);
    public delegate void SimpleEnchantEventDelegate(EnchanterEditor ee);
#else // MY_CE_WINDOW_NAMESPACE_SUPPORT
    public delegate void MerryYellow_CodeEnchanter_UnityEnchanterGUI_ToAdvancedWindowDelegate(EnchanterEditor ee);
    public delegate void MerryYellow_CodeEnchanter_UnityEnchanterGUI_SimpleEnchantEventDelegate(EnchanterEditor ee);
#endif // MY_CE_WINDOW_NAMESPACE_SUPPORT

    public class SimpleWindow : EditorWindow
    {
        public bool IsPromotingCodeEnchanter =
#if AUTO_INPUT_MANAGER
            true;
#else // AUTO_INPUT_MANAGER
            false;
#endif // AUTO_INPUT_MANAGER

        public bool HasMultipleEnchanters =
#if CODE_ENCHANTER
            true;
#else // CODE_ENCHANTER
            false;
#endif // CODE_ENCHANTER


#if MY_CE_WINDOW_NAMESPACE_SUPPORT
        public event ToAdvancedWindowDelegate ToAdvancedWindowEvent;
        public event SimpleEnchantEventDelegate SimpleEnchantEvent;
#else // MY_CE_WINDOW_NAMESPACE_SUPPORT
        public event MerryYellow_CodeEnchanter_UnityEnchanterGUI_ToAdvancedWindowDelegate ToAdvancedWindowEvent;
        public event MerryYellow_CodeEnchanter_UnityEnchanterGUI_SimpleEnchantEventDelegate SimpleEnchantEvent;
#endif // MY_CE_WINDOW_NAMESPACE_SUPPORT

        public EnchanterEditor enchanterEditor;
        //public int EnchantmentTypeCount { get { return enchanterEditor.enchanters.Count; } }
        public int EnchantmentTypeCount { get { return enchanterEditor.solution.GetSelectedEnchanterCount(enchanterEditor.enchanters); } }
        public int DocumentCount { get { return enchanterEditor.solution.GetSelectedDocumentCount(); } }
        EnchanterEditor.States state { get { return enchanterEditor == null ? EnchanterEditor.States.UIError : enchanterEditor.state; } }
        public int ProcessedDocumentCount { get { return enchanterEditor.iterateData == null ? 0 : enchanterEditor.iterateData.indexOfMyDocuments; } }
        public int ProcessedEnchantmentCount { get { return enchanterEditor.iterateData == null ? 0 : enchanterEditor.iterateData.GetProcessedEnchantmentCount; } }

        private void Awake()
        {
            Common.ELogger.OnLogged -= EnchanterEditor.MyLog; // Awake may be called multiple times
            Common.ELogger.OnLogged += EnchanterEditor.MyLog;
        }

        void OnGUI()
        {
            //GUILayout.Label("Base Settings", EditorStyles.boldLabel);

            if (enchanterEditor == null ||
                state == EnchanterEditor.States.UIError)
            {
                GUILayout.Label("Interrupted. Please reload.");

                if (GUILayout.Button("Exit"))
                    this.Close();
            }
            else if (state == EnchanterEditor.States.Loading)
            {
                GUILayout.Label("Loading. Please wait.");
            }
            else if (state == EnchanterEditor.States.LoadingPart2)
            {
                GUILayout.Label("Loading. Please wait..");
            }
            else if (state == EnchanterEditor.States.Configuration)
            {
                GUILayout.Label("Code Enchanter is ready.");
                if (HasMultipleEnchanters)
                    GUILayout.Label(EnchantmentTypeCount + " enchantment types");
                GUILayout.Label(DocumentCount + " scripts");

#if MY_CE_HORIZONTAL_SCOPE_SUPPORT
                using (new EditorGUILayout.HorizontalScope())
#endif // MY_CE_HORIZONTAL_SCOPE_SUPPORT
                {
                    var style = "miniButton";
                    if (GUILayout.Button("Advanced", style, GUILayout.ExpandWidth(false)))
                    {
                        if (ToAdvancedWindowEvent != null)
                            ToAdvancedWindowEvent(enchanterEditor);
                    }
                    if (GUILayout.Button("ENCHANT", style, GUILayout.ExpandWidth(true)))
                    {
                        if (EditorUtility.DisplayDialog("Warning",
                            "Script files will be changed. You should make a backup before proceeding.",
                            "I Made a Backup. Go Ahead!", "No Thanks"))
                        {
                            if (SimpleEnchantEvent != null)
                                SimpleEnchantEvent(enchanterEditor);
                        }
                    }
                }

                //DisplayFooterPromotion();
            }
            else if (state == EnchanterEditor.States.Enchanting)
            {
                string plural = ProcessedEnchantmentCount > 1 ? "s" : "";
                GUILayout.Label("Your code is being enchanted. Please wait");
                GUILayout.Label("Result: " + ProcessedEnchantmentCount + " enchantment" + plural + " applied");
                GUILayout.Label("Progress: " + ProcessedDocumentCount + "/" + DocumentCount + " scripts");

                if (GUILayout.Button("Pause"))
                {
                    enchanterEditor.state = EnchanterEditor.States.EnchantingPaused;
                    Common.ELogger.Log(Common.ELogger.Level.Standard, "Paused Enchanter.");
                }
            }
            else if (state == EnchanterEditor.States.EnchantingPaused)
            {
                string plural = ProcessedEnchantmentCount > 1 ? "s" : "";
                GUILayout.Label("Code enchanter is paused.");
                GUILayout.Label("Result: " + ProcessedEnchantmentCount + " enchantment" + plural + " applied");
                GUILayout.Label("Progress: " + ProcessedDocumentCount + "/" + DocumentCount + " scripts");

                if (GUILayout.Button("Resume"))
                {
                    enchanterEditor.state = EnchanterEditor.States.Enchanting;
                    Common.ELogger.Log(Common.ELogger.Level.Standard, "Resuming Enchanter...");
                }
            }
            else if (state == EnchanterEditor.States.Result)
            {
                string plural = ProcessedEnchantmentCount > 1 ? "s" : "";
                GUILayout.Label("Your code has been enchanted.");
                GUILayout.Label("Result: " + ProcessedEnchantmentCount + " enchantment" + plural + " applied");

                if (GUILayout.Button("Exit"))
                    this.Close();
            }
            else if (state == EnchanterEditor.States.Error)
            {
                GUILayout.Label(enchanterEditor.ErrorDetail);

                if (GUILayout.Button("Exit"))
                    this.Close();
            }
            else if (state == EnchanterEditor.States.FailNoFileSelected)
            {
                GUILayout.Label("No file has been selected.");

#if MY_CE_HORIZONTAL_SCOPE_SUPPORT
                using (new EditorGUILayout.HorizontalScope())
#endif // MY_CE_HORIZONTAL_SCOPE_SUPPORT
                {
                    var style = "miniButton";
                    if (GUILayout.Button("Exit", style, GUILayout.ExpandWidth(false)))
                    {
                        this.Close();
                    }
                    if (GUILayout.Button("Go Back", style, GUILayout.ExpandWidth(true)))
                    {
                        enchanterEditor.state = EnchanterEditor.States.Configuration;
                    }
                }
            }

            DisplayFooterPromotion();

            if (enchanterEditor == null)
                return;

            if (enchanterEditor.Initialize())// initialize after gui so loading state shows up
                Repaint();

            if (!Common.EnchanterOptions.IsMultiThreaded)
                if (enchanterEditor.IterateEnchant())
                    Repaint();
        }

        private void DisplayFooterPromotion()
        {
            if (!this.IsPromotingCodeEnchanter)
                return;
            
            /*
            //GUIStyle GetBtnStyle()
            //{
                var s = new GUIStyle();
                var b = s.border;
                b.left = 0;
                b.top = 0;
                b.right = 0;
                b.bottom = 0;
            s.alignment = TextAnchor.MiddleCenter;
                //  return s;
            //}*/

            var style = "miniButton";

            GUILayout.FlexibleSpace();

#if MY_CE_HORIZONTAL_SCOPE_SUPPORT
            using (new EditorGUILayout.HorizontalScope())
#endif // MY_CE_HORIZONTAL_SCOPE_SUPPORT
            {
                GUILayout.FlexibleSpace();
                //if(GUILayout.Button("Code Enchanter", s))
                // concat string for avoiding usage of "Code Enchanter", for not being effected by renaming
                if (GUILayout.Button("View Code " + "Enchanter", style, GUILayout.ExpandWidth(false)))
                {
                    //EditorApplication.ExecuteMenuItem("Window/Asset Store");
                    Application.OpenURL("http://u3d.as/1d4v");
                }
                GUILayout.FlexibleSpace();
            }

            GUILayout.Space(5);
        }

        EnchanterEditor.States previousState = EnchanterEditor.States.Configuration;
        System.Threading.Thread iterateThread;
        private void Update()
        {
            if (!Common.EnchanterOptions.IsMultiThreaded)
                return;

            if (state == EnchanterEditor.States.Enchanting)
            {
                if (iterateThread == null)
                {
                    iterateThread = new System.Threading.Thread(
                        new System.Threading.ThreadStart(enchanterEditor.IterateEnchantForced));
                    iterateThread.Start();
                }
                else
                {
                    if (!iterateThread.IsAlive)
                    {
                        this.Repaint();

                        iterateThread = new System.Threading.Thread(
                            new System.Threading.ThreadStart(enchanterEditor.IterateEnchantForced));
                        iterateThread.Start();
                    }
                }
            }
            else if (previousState == EnchanterEditor.States.Enchanting)
            {
                this.Repaint();
            }

            if (state == EnchanterEditor.States.Result && previousState != EnchanterEditor.States.Result)
            {
                enchanterEditor.OnResult();
            }

            previousState = state;
        }
    }

#if MY_CE_WINDOW_NAMESPACE_SUPPORT
}
#endif // MY_CE_WINDOW_NAMESPACE_SUPPORT


#endif // UNITY_EDITOR