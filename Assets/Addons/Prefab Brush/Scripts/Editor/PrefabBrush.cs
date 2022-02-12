/*
 * 		Prefab Brush+ 
 * 		Version 1.3.9
 *		Author: Archie Andrews
 *		www.archieandrews.games
 */

using UnityEngine;
using UnityEditor;
using System.Collections.Generic;

namespace ArchieAndrews.PrefabBrush
{
    [ExecuteInEditMode]
    public class PrefabBrush : EditorWindow
    {
        private PB_ActiveTab activeTab = PB_ActiveTab.PrefabPaint;
        private PB_SaveOptions activeSaveOption = PB_SaveOptions.New;
        private PB_ActiveTab previousTab = PB_ActiveTab.PrefabPaint;

        [SerializeField]
        private PB_SaveObject activeSave;
        public PB_SaveObject loadedSave;

        //Foldout bools
        private bool showBrushSettings = true;
        private bool showObjectSettings = true;
        private bool showEraseSettings = true;
        private bool showHotKeySettings = true;
        private bool showDebug = false;

        private bool showMaxBrushSizeSlider = false;
        private bool showMaxMinPaintDelta = false;
        private bool showMaxMinPrefabsPerStroke = false;
        private bool showIgnoreOptions = false;

        //Scrolls
        private Vector2 scrollPos;
        private Vector2 prefabViewScrollPos;

        //Settings variables
        private Color placeBrush = new Color(0, 1, 0, 0.1f);
        private Color eraseBrush = new Color(1, 0, 0, 0.1f);
        private Color selectedTab = Color.green;
        private Color disabledColor = new Color(1, 1, 1, .3f);
        private bool tempTab = false, tempState = false;

        //On Off variables
        [SerializeField]
        private bool isOn = true;
        private Texture2D onButtonLight;
        private Texture2D offButtonLight;
        private Texture2D onButtonDark;
        private Texture2D offButtonDark;
        private Texture2D buttonIcon;
        private Texture2D icon;

        //Styles
        private GUIStyle style;
        private GUIStyle styleBold;
        private GUIStyle styleFold;

        //Scale
        private const float deleteButtonSize = 20;
        private const float toggleButtonSize = 20;
        private const int prefabIconMinSize = 64;
        private float prefabIconScaleFactor = 1;
        private const float spacing = 5;

        //Prefab mod variables
        private PB_PrefabDisplayType prefabDisplayType;
        private GameObject newObjectForPrefabList, newObjectForParentList;
        private int roundRobinCount = 0;
        private float rotationSet = 0, scaleSet = 1;

        //SaveSettings
        private string saveName = "[NEW]PrefabBrush Save";
        private int activeSaveID;
        private List<PB_SaveObject> saves = new List<PB_SaveObject>();
        private string savePath = "";

        //Comfiration
        int comfirmationId = -1;
        string comfirmationName = "";

        //Rects
        Rect dropRect;
        Rect parentRect;

        //Other
        private GameObject[] hierarchy;
        private Bounds brushBounds;
        private float paintTravelDistance = 0;
        private Vector3 rayLastFrame = Vector3.positiveInfinity;
        private bool moddingSingle = false;
        private GameObject objectToSingleMod = null, objectToChain;
        private const int maxFails = 10;
   
        private LayerMask layerBeforeSingleMod, layerBeforeChaining;
        Event e;
        private GameObject selectedObject, clone;

        //Display the window.
        [MenuItem("Tools/Prefab Brush+")]
        public static void ShowWindow()
        {
            GetWindow(typeof(PrefabBrush), false, "Prefab Brush+");
        }

        void OnFocus()
        {

#if UNITY_2018 || UNITY_2017 || UNITY_5 || UNITY_4
            SceneView.onSceneGUIDelegate -= this.OnSceneGUI;
            SceneView.onSceneGUIDelegate += this.OnSceneGUI;
#else
            SceneView.duringSceneGui -= this.OnSceneGUI;
            SceneView.duringSceneGui += this.OnSceneGUI;
#endif
        }

        void Awake()
        {
            LoadResources();
            RefreshSaves();
        }

#region SetUp
        private void LoadResources()
        {
            //Load textures for use in UI.
            onButtonLight = Resources.Load("L_Button_On") as Texture2D;
            offButtonLight = Resources.Load("L_Button_Off") as Texture2D;
            onButtonDark = Resources.Load("D_Button_On") as Texture2D;
            offButtonDark = Resources.Load("D_Button_Off") as Texture2D;

            if(isOn)
                buttonIcon = (EditorGUIUtility.isProSkin) ? Resources.Load("D_Button_On") as Texture2D : Resources.Load("L_Button_On") as Texture2D;
            else
                buttonIcon = (EditorGUIUtility.isProSkin) ? Resources.Load("D_Button_Off") as Texture2D : Resources.Load("L_Button_Off") as Texture2D;

            icon = Resources.Load("PB_Icon") as Texture2D;

            //Repaint for good mesure.
            Repaint();
        }
#endregion

#region GUI
        void OnGUI()
        {
            CheckActiveSave();

            SetStyles();
            EditorGUILayout.BeginVertical();

            EditorGUILayout.BeginHorizontal();
            DrawHeader();
            EditorGUILayout.EndHorizontal();
            EditorGUILayout.Space();

            EditorGUILayout.BeginHorizontal();
            SetTabColour(PB_ActiveTab.PrefabPaint);
            if (GUILayout.Button("Prefab Paint Brush"))
                SetActiveTab(PB_ActiveTab.PrefabPaint);

            SetTabColour(PB_ActiveTab.PrefabErase);
            if (GUILayout.Button("Prefab Erase Brush"))
                SetActiveTab(PB_ActiveTab.PrefabErase);

            SetTabColour(PB_ActiveTab.Saves);
            if (GUILayout.Button("Saved Brushes"))
            {
                SetActiveTab(PB_ActiveTab.Saves);
                SetSaveOption(PB_SaveOptions.Open);
            }

            SetTabColour(PB_ActiveTab.Settings);
            if (GUILayout.Button("Settings"))
                SetActiveTab(PB_ActiveTab.Settings);

            GUI.color = Color.white;

            EditorGUILayout.EndHorizontal();

            EditorGUILayout.BeginVertical();
            scrollPos = EditorGUILayout.BeginScrollView(scrollPos, GUILayout.Height(position.height - 90));

            //Draw core UI
            switch (activeTab)
            {
                case PB_ActiveTab.PrefabPaint:
                    DrawPrefabPaintTab();
                    break;
                case PB_ActiveTab.Settings:
                    DrawSettingsTab();
                    break;
                case PB_ActiveTab.About:
                    DrawAboutTab();
                    break;
                case PB_ActiveTab.Saves:
                    DrawSavesTab();
                    break;
                case PB_ActiveTab.PrefabErase:
                    DrawEraseTab();
                    break;
            }

            //End the scroll window.
            EditorGUILayout.EndScrollView();
            EditorGUILayout.EndVertical();
            EditorGUILayout.EndVertical();

            //Keep the active data saved over play mode
            if (activeSave != null)
                EditorUtility.SetDirty(activeSave);

            if (loadedSave != null)
                EditorUtility.SetDirty(loadedSave);
        }

        private void SetStyles()
        {
            style = EditorStyles.label;
            styleBold = EditorStyles.boldLabel;
            styleFold = EditorStyles.foldout;
        }

        private void DrawHeader()
        {
            EditorGUILayout.BeginHorizontal();
            GUILayout.Label(icon, GUILayout.Width(30), GUILayout.Height(30));
            GUILayout.Label("Prefab Brush+", styleBold);
            EditorGUILayout.EndHorizontal();

            SetTabColour(PB_ActiveTab.About);
            if (GUILayout.Button("About"))
                SetActiveTab(PB_ActiveTab.About);
        }

        //Draw tabs
        private void DrawPrefabPaintTab()
        {
            EditorGUILayout.Space();

            EditorGUILayout.BeginHorizontal();
            if (GUILayout.Button(buttonIcon, GUI.skin.label))
                ToggleOnState();
            EditorGUILayout.EndHorizontal();

            Repaint();

            EditorGUILayout.BeginHorizontal("box");
            DrawNewButton();
            DrawOpenButton();
            DrawSaveButton(activeSaveID);
            DrawSaveAsButton();
            GUILayout.FlexibleSpace();
            EditorGUILayout.EndHorizontal();

            if (isOn)
            {
                EditorGUILayout.Space();
                showBrushSettings = EditorGUILayout.Foldout(showBrushSettings, "Brush Settings", styleFold);

                if (showBrushSettings)
                {
                    EditorGUILayout.BeginVertical("box");

                    switch (activeSave.paintType)
                    {
                        case PB_PaintType.Surface:
                            DrawPrefabDisplay(PB_PrefabDataType.Prefab);
                            DrawPaintType();
                            DrawIgnoreOptions();
                            DrawBrushSizeSlider();
                            DrawPrefabPerStrokeSlider();
                            DrawLayerToBrush();
                            DrawTagToBrush();
                            DrawSlopAngleToBrush();
                            break;
                        case PB_PaintType.Physics:
                            DrawPrefabDisplay(PB_PrefabDataType.Prefab);
                            DrawPaintType();
                            DrawIgnoreOptions();
                            DrawPhysicsPaintSettings();
                            DrawBrushSizeSlider();
                            DrawPrefabPerStrokeSlider();
                            DrawLayerToBrush();
                            DrawTagToBrush();
                            DrawSlopAngleToBrush();
                            break;
                        case PB_PaintType.Single:
                            DrawPrefabDisplay(PB_PrefabDataType.Prefab);
                            DrawPaintType();
                            DrawIgnoreOptions();
                            DrawSingleModOptions();
                            break;
                    }

                    EditorGUILayout.EndVertical();
                }

                EditorGUILayout.Space();

                showObjectSettings = EditorGUILayout.Foldout(showObjectSettings, "Object Settings", styleFold);

                if (showObjectSettings)
                {
                    EditorGUILayout.BeginVertical("box");
                    DrawOffsetCenter();
                    DrawOffsetRotation();
                    DrawParentOptions();
                    DrawMatchSurface();
                    DrawCustomRotation();
                    DrawCustomScale();
                    EditorGUILayout.EndVertical();
                }
            }
            else
            {
                EditorGUILayout.HelpBox("Prefab Brush Is Off", MessageType.Warning);
            }

            showHotKeySettings = EditorGUILayout.Foldout(showHotKeySettings, "Hot Keys", styleFold);

            if (showHotKeySettings)
            {
                EditorGUILayout.BeginVertical("box");
                DrawHotKeys();
                EditorGUILayout.EndVertical();
            }
        }

        private void DrawHotKeys()
        {
            activeSave.paintBrushHotKey = (KeyCode)EditorGUILayout.EnumPopup("Paint HotKey", activeSave.paintBrushHotKey);
            activeSave.paintBrushHoldKey = EditorGUILayout.Toggle("Hold Key", activeSave.paintBrushHoldKey);
            EditorGUILayout.Space();
            activeSave.removeBrushHotKey = (KeyCode)EditorGUILayout.EnumPopup("Erase HotKey", activeSave.removeBrushHotKey);
            activeSave.removeBrushHoldKey = EditorGUILayout.Toggle("Hold Key", activeSave.removeBrushHoldKey);
            EditorGUILayout.Space();
            activeSave.disableBrushHotKey = (KeyCode)EditorGUILayout.EnumPopup("Disable Prefab Brush HotKey", activeSave.disableBrushHotKey);
            activeSave.disableBrushHoldKey = EditorGUILayout.Toggle("Hold Key", activeSave.disableBrushHoldKey);
        }

        private void DrawEraseTab()
        {
            EditorGUILayout.Space();

            EditorGUILayout.BeginHorizontal();
            if (GUILayout.Button(buttonIcon, GUI.skin.label))
                ToggleOnState();
            EditorGUILayout.EndHorizontal();

            Repaint();

            EditorGUILayout.BeginHorizontal("box");
            DrawNewButton();
            DrawOpenButton();
            DrawSaveButton(activeSaveID);
            DrawSaveAsButton();
            GUILayout.FlexibleSpace();
            EditorGUILayout.EndHorizontal();

            if (isOn)
            {
                showEraseSettings = EditorGUILayout.Foldout(showEraseSettings, "Erase Settings", styleFold);

                if (showEraseSettings)
                {
                    EditorGUILayout.BeginVertical("box");

                    EditorGUILayout.BeginVertical("box");
                    DrawEraseDetectionType();
                    DrawEraseType();
                    DrawIgnoreOptions();
                    EditorGUILayout.EndVertical();

                    EditorGUILayout.BeginVertical("box");
                    DrawEraseBrushSizeSlider();
                    DrawTagToErase();
                    DrawLayerToErase();
                    DrawSlopAngleToErase();
                    EditorGUILayout.EndVertical();
                    EditorGUILayout.EndVertical();
                }
            }
            else
            {
                EditorGUILayout.HelpBox("Prefab Brush Is Off", MessageType.Warning);
            }
        }

        private void DrawAboutTab()
        {
            GUILayout.Label("About the Prefab Brush+", styleBold);
            EditorGUILayout.HelpBox("Created by Archie Andrews www.archieandrews.games", MessageType.Info);
            EditorGUILayout.HelpBox("If you have any issues or feature requests feel free to contact me using any of the information below...", MessageType.Info);

            GUILayout.Space(16);

            GUILayout.Label("Contact Info", EditorStyles.boldLabel);
            EditorGUILayout.BeginVertical("box");

            EditorGUILayout.BeginHorizontal();
            GUILayout.Label("Email:");
            GUILayout.Label("contact@archieandrews.games");

            if (GUILayout.Button("Email Now"))
                Help.BrowseURL("mailto:contact@archieandrews.games");

            GUILayout.FlexibleSpace();

            EditorGUILayout.EndHorizontal();

            GUILayout.Space(8);

            EditorGUILayout.BeginHorizontal();
            GUILayout.Label("Twitter:");

            GUILayout.Label("https://twitter.com/ArchieGameDev");

            if (GUILayout.Button("Tweet Now"))
                Help.BrowseURL("https://twitter.com/ArchieGameDev");

            GUILayout.FlexibleSpace();
            EditorGUILayout.EndHorizontal();

            EditorGUILayout.EndVertical();
        }

        private void DrawSavesTab()
        {
            EditorGUILayout.BeginHorizontal("box");
            DrawNewButton();
            DrawOpenButton();
            DrawSaveButton(activeSaveID);
            DrawSaveAsButton();
            DrawRefreshButton();
            GUILayout.FlexibleSpace();
            EditorGUILayout.EndHorizontal();

            switch (activeSaveOption)
            {
                case PB_SaveOptions.New:
                    DrawNewSaveFile();
                    break;
                case PB_SaveOptions.Open:
                    DrawSaveList();
                    break;
                case PB_SaveOptions.Save:
                    break;
                case PB_SaveOptions.SaveAs:
                    DrawSaveAsWindow();
                    break;
                case PB_SaveOptions.ComfirationOverwrite:
                    DrawSaveAsComfirmationWindow();
                    break;
                case PB_SaveOptions.ComfirmationDelete:
                    DrawComfirationDeleteWindow();
                    break;
                case PB_SaveOptions.ComfirmationOpen:
                    DrawComfirationOpenWindow();
                    break;
            }
        }

        private void DrawSettingsTab()
        {
            showDebug = EditorGUILayout.Foldout(showDebug, "Debug");

            if (showDebug)
            {
                GUILayout.Label(string.Format("Active Save ID: {0}", activeSaveID.ToString()));

                if (activeSaveID != -1)
                    GUILayout.Label(string.Format("Active Save Name: {0}", saves[activeSaveID].name));

                GUILayout.Label(string.Format("Tag Mask: {0}", activeSave.requiredTagMask));
                GUILayout.Label(string.Format("Layer Mask: {0}", activeSave.requiredLayerMask));

                if (GUILayout.Button("Open Active Save"))
                    Selection.activeObject = activeSave;
            }
        }

        //Draw Physics Paint Settings
        private void DrawPhysicsPaintSettings()
        {
            EditorGUILayout.Space();
            //Define radius of the brush.
            GUILayout.Label("Physics Brush", style);
            EditorGUILayout.BeginVertical("box");
            activeSave.spawnHeight = EditorGUILayout.FloatField("Paint Height", activeSave.spawnHeight);
            activeSave.addRigidbodyToPaintedPrefab = EditorGUILayout.Toggle("Add Rigidbody To Prefab", activeSave.addRigidbodyToPaintedPrefab);
            activeSave.physicsIterations = EditorGUILayout.FloatField("Physics Iterations", activeSave.physicsIterations);
            EditorGUILayout.EndVertical();
        }

        //Draw Prefab Display
        private void DrawPaintType()
        {
#if UNITY_5 || UNITY_4
        if (activeSave.paintType != PB_PaintType.Surface)
            activeSave.paintType = PB_PaintType.Surface;
#else
            EditorGUILayout.BeginVertical("box");
            activeSave.paintType = (PB_PaintType)EditorGUILayout.EnumPopup("Prefab Paint Type", activeSave.paintType);
            EditorGUILayout.EndVertical();
#endif
        }

        private void DrawIgnoreOptions()
        {
            EditorGUILayout.BeginVertical("box");
            showIgnoreOptions = EditorGUILayout.Foldout(showIgnoreOptions, "Ignore Options");
            if (showIgnoreOptions)
            {

                activeSave.ignoreTriggers = EditorGUILayout.Toggle("Ignore Trigger Colliders", activeSave.ignoreTriggers);
                activeSave.ignorePaintedPrefabs = EditorGUILayout.Toggle("Ignore Prefabs from Brush", activeSave.ignorePaintedPrefabs);

            }
            EditorGUILayout.EndVertical();
        }

        private void DrawPrefabDisplay(PB_PrefabDataType dataType)
        {
            if (activeSave == null)
                CreateEmptySave();

            string dataTitle = (dataType == PB_PrefabDataType.Prefab) ? "Prefab" : "Prefab Data";

            EditorGUILayout.LabelField(string.Format("{0} Display", dataTitle), EditorStyles.boldLabel);

            EditorGUILayout.Space();

            EditorGUILayout.BeginVertical("box");

            EditorGUILayout.BeginVertical();
            GUILayout.Label(string.Format("{0} Display Settings", dataTitle));

            prefabDisplayType = (PB_PrefabDisplayType)EditorGUILayout.EnumPopup(string.Format("{0} Display Type", dataTitle), prefabDisplayType);

            if (prefabDisplayType == PB_PrefabDisplayType.Icon)
                prefabIconScaleFactor = EditorGUILayout.Slider(string.Format("{0} Scale", dataTitle), prefabIconScaleFactor, .7f, 4);

            EditorGUILayout.EndVertical();

            EditorGUILayout.BeginHorizontal();

            switch (prefabDisplayType)
            {
                case PB_PrefabDisplayType.Icon:
                    if (DragAndDrop.paths.Length > 0 || activeSave.prefabData.Count == 0)
                        DrawDragWindow();
                    else
                        DrawPrefabIconWindow();
                    break;
                case PB_PrefabDisplayType.List:
                    DrawPrefabList();
                    break;
            }

            EditorGUILayout.EndHorizontal();
            EditorGUILayout.EndVertical();
        }

        private void DrawPrefabList()
        {
            EditorGUILayout.BeginVertical();
            for (int i = 0; i < activeSave.prefabData.Count; i++)
            {
                EditorGUILayout.BeginHorizontal();
                DrawPrefabListItem(i);
                EditorGUILayout.EndHorizontal();
            }

            newObjectForPrefabList = EditorGUILayout.ObjectField(newObjectForPrefabList, typeof(GameObject), false) as GameObject;

            if (newObjectForPrefabList != null)
            {
                activeSave.AddPrefab(newObjectForPrefabList);
                newObjectForPrefabList = null;
            }

            EditorGUILayout.EndVertical();
        }

        private void DrawPrefabListItem(int i)
        {
            GUI.color = Color.blue;
            activeSave.prefabData[i].selected = GUILayout.Toggle(activeSave.prefabData[i].selected, "");
            GUI.color = Color.white;
            activeSave.prefabData[i].prefab = EditorGUILayout.ObjectField(activeSave.prefabData[i].prefab, typeof(GameObject), false) as GameObject;
            GUI.color = Color.red;
            if (GUILayout.Button("X"))
                activeSave.prefabData.RemoveAt(i);
            GUI.color = Color.white;
        }

        private void DrawPrefabIconWindow()
        {
            int coloumnCount = Mathf.FloorToInt((position.width - GetPrefabIconSize()) / GetPrefabIconSize());
            int rowCount = Mathf.CeilToInt(activeSave.prefabData.Count / coloumnCount);

            float height = (rowCount >= 1) ? 2.3f : 1.3f;

            EditorGUILayout.BeginVertical(); //Begin the window with all the prefabs in it
            prefabViewScrollPos = EditorGUILayout.BeginScrollView(prefabViewScrollPos, GUILayout.Height(GetPrefabIconSize() * height)); //Start the scroll view 
            int id = 0; //This counts how many prefab icons have been built
            for (int y = 0; y <= rowCount; y++)
            {
                EditorGUILayout.BeginHorizontal();//Start a new row
                for (int x = 0; x < coloumnCount; x++)
                {
                    if (id >= activeSave.prefabData.Count) //If there are no more prefabs to add icons for then break
                        break;

                    if (activeSave.prefabData[id] != null)
                        DrawPrefabWindow(id);
                    else
                        activeSave.prefabData.RemoveAt(id);

                    id++;
                }
                GUILayout.FlexibleSpace();//Push all of the prefab icons to the left
                EditorGUILayout.EndHorizontal();//End the row
            }
            EditorGUILayout.EndScrollView();
            EditorGUILayout.EndVertical();
        }

        private void DrawDragWindow()
        {
            GUI.color = Color.green;
            dropRect = EditorGUILayout.BeginVertical("box", GUILayout.Height(GetPrefabIconSize() * 1.5f));
            GUI.color = Color.white;
            GUILayout.FlexibleSpace();
            EditorGUILayout.BeginHorizontal();
            GUILayout.FlexibleSpace();
            GUILayout.Label("Drag And Drop Here To Add Prefabs To The Parent List", styleBold);
            GUILayout.FlexibleSpace();
            EditorGUILayout.EndHorizontal();
            GUILayout.FlexibleSpace();
            EditorGUILayout.EndVertical();

            if (Event.current.type == EventType.DragUpdated && dropRect.Contains(Event.current.mousePosition))
            {
                DragAndDrop.visualMode = DragAndDropVisualMode.Copy;
                Event.current.Use();
            }

            if (Event.current.type == EventType.DragPerform && dropRect.Contains(Event.current.mousePosition))
                AddPrefab(DragAndDrop.objectReferences);
        }

        private void DrawPrefabWindow(int id)
        {
            if (id < activeSave.prefabData.Count) //Null check for when deleting prefabs.
            {
                GameObject prefab = activeSave.prefabData[id].prefab;
                EditorGUILayout.BeginVertical();

                if (!activeSave.prefabData[id].selected)
                    GUI.color = disabledColor;

                GUILayout.Box(AssetPreview.GetAssetPreview(prefab) as Texture2D, GUILayout.Width(GetPrefabIconSize()), GUILayout.Height(GetPrefabIconSize()));

                GUI.color = Color.white;

                Rect prefabIconRect = GUILayoutUtility.GetLastRect();

                prefabIconRect.x = prefabIconRect.x + (prefabIconRect.width - deleteButtonSize);
                prefabIconRect.height = deleteButtonSize;
                prefabIconRect.width = deleteButtonSize;

                GUI.color = Color.red;

                if (GUI.Button(prefabIconRect, "X"))
                {
                    activeSave.prefabData.Remove(activeSave.prefabData[id]);
                    return;
                }

                GUI.color = Color.blue;

                prefabIconRect.x = prefabIconRect.x + (prefabIconRect.width - deleteButtonSize - toggleButtonSize - spacing);
                prefabIconRect.height = toggleButtonSize;
                prefabIconRect.width = toggleButtonSize;

                activeSave.prefabData[id].selected = GUI.Toggle(prefabIconRect, activeSave.prefabData[id].selected, "");

                GUI.color = Color.white;

                EditorGUILayout.EndVertical();
            }
        }

        //Draw Brush Settings Display
        private void DrawBrushSizeSlider()
        {
            EditorGUILayout.Space();
            //Define radius of the brush.
            GUILayout.Label("Brush Size", style);
            EditorGUILayout.BeginVertical("box");
            EditorGUILayout.BeginHorizontal();
            activeSave.brushSize = EditorGUILayout.Slider(activeSave.brushSize, activeSave.minBrushSize, activeSave.maxBrushSize);
            EditorGUILayout.EndHorizontal();
            showMaxBrushSizeSlider = EditorGUILayout.Foldout(showMaxBrushSizeSlider, "Max Slider Size");
            if (showMaxBrushSizeSlider)
                activeSave.maxBrushSize = EditorGUILayout.FloatField(activeSave.maxBrushSize);

            EditorGUILayout.EndVertical();
        }

        private void DrawPrefabPerStrokeSlider()
        {
            EditorGUILayout.Space();
            //Define the distance the brush needs to move before it paints again
            GUILayout.Label("Paint Delta Distance", style);
            EditorGUILayout.BeginVertical("box");
            activeSave.paintDeltaDistance = EditorGUILayout.Slider(activeSave.paintDeltaDistance, activeSave.minPaintDeltaDistance, activeSave.maxPaintDeltaDistance);
            //For Debugging
            //GUILayout.Label(string.Format("Current Distance = {0}", paintTravelDistance.ToString()));

            showMaxMinPaintDelta = EditorGUILayout.Foldout(showMaxMinPaintDelta, "Show Max/Min Paint Delta Distance");

            if (showMaxMinPaintDelta)
            {
                activeSave.maxPaintDeltaDistance = EditorGUILayout.FloatField("Max Paint Delta Distance", activeSave.maxPaintDeltaDistance);
                activeSave.minPaintDeltaDistance = EditorGUILayout.FloatField("Min Paint Delta Distance", activeSave.minPaintDeltaDistance);
            }
            EditorGUILayout.EndVertical();

            EditorGUILayout.Space();
            GUILayout.Label("Prefabs Per Stroke", style);
            EditorGUILayout.BeginVertical("box");
            activeSave.prefabsPerStroke = EditorGUILayout.IntSlider(activeSave.prefabsPerStroke, activeSave.minprefabsPerStroke, activeSave.maxprefabsPerStroke);

            showMaxMinPrefabsPerStroke = EditorGUILayout.Foldout(showMaxMinPrefabsPerStroke, "Show Max/Min Prefabs Per Stroke");

            if (showMaxMinPrefabsPerStroke)
            {
                activeSave.maxprefabsPerStroke = EditorGUILayout.IntField("Max Prefabs Per Stroke", activeSave.maxprefabsPerStroke);
                activeSave.minprefabsPerStroke = EditorGUILayout.IntField("Min Prefabs Per Stroke", activeSave.minprefabsPerStroke);
            }

            EditorGUILayout.EndVertical();
        }

        private void DrawSingleModOptions()
        {
            if (Tools.current != Tool.Move && Tools.current != Tool.Rotate && Tools.current != Tool.Scale)
            {
                EditorGUILayout.BeginVertical("box");
                activeSave.draggingAction = (PB_DragModType)EditorGUILayout.EnumPopup("Drag Modification Type", activeSave.draggingAction);
                EditorGUILayout.EndVertical();
            }
            else
            {
                EditorGUILayout.BeginVertical("box");
                GUILayout.Label(Tools.current.ToString());
                EditorGUILayout.HelpBox("'Drag Modification Type' can not be set here when the Move, Rotate or Scale has been set in the tools at the top left in Unity.", MessageType.Info);
                EditorGUILayout.EndVertical();
            }

            EditorGUILayout.BeginVertical("box");
            GUILayout.Label("Rotation Settings");
            activeSave.rotationAxis = (PB_Direction)EditorGUILayout.EnumPopup("Rotation Axis", activeSave.rotationAxis);
            activeSave.rotationSensitivity = EditorGUILayout.FloatField("Rotation Sensitivity", activeSave.rotationSensitivity);
            EditorGUILayout.EndVertical();
        }

        private void DrawChainOptions()
        {
            GUILayout.Label("Chain Options");
            EditorGUILayout.BeginVertical("box");
            GUILayout.Label("Chain Paint Direction");
            activeSave.chainDirection = (PB_Direction)EditorGUILayout.EnumPopup(activeSave.chainDirection);
            GUILayout.Label("Chain Pivot Axis");
            activeSave.chainPivotAxis = (PB_Direction)EditorGUILayout.EnumPopup(activeSave.chainPivotAxis);
            EditorGUILayout.EndVertical();
        }

        //Draw Checks Display
        private void DrawLayerToBrush()
        {
            EditorGUILayout.Space();
            //Define the layer that the brush will brush objects on.
            GUILayout.Label("Layer To Brush", style);

            EditorGUILayout.BeginHorizontal("box");

            EditorGUILayout.BeginVertical();
            activeSave.checkLayer = EditorGUILayout.Toggle(activeSave.checkLayer);

            if (activeSave.checkLayer)
            {
                EditorGUILayout.Space();
                activeSave.requiredLayerMask = EditorGUILayout.MaskField(activeSave.requiredLayerMask, UnityEditorInternal.InternalEditorUtility.layers);
            }
            EditorGUILayout.EndVertical();

            EditorGUILayout.EndHorizontal();
        }

        private void DrawTagToBrush()
        {
            EditorGUILayout.Space();
            //Define the object tag that the brush will brush objects on.
            GUILayout.Label("Tag To Brush", style);

            EditorGUILayout.BeginHorizontal("box");

            EditorGUILayout.BeginVertical();
            activeSave.checkTag = EditorGUILayout.Toggle(activeSave.checkTag);

            if (activeSave.checkTag)
            {
                EditorGUILayout.Space();
                activeSave.requiredTagMask = EditorGUILayout.MaskField(activeSave.requiredTagMask, UnityEditorInternal.InternalEditorUtility.tags);
            }
            EditorGUILayout.EndVertical();

            EditorGUILayout.EndHorizontal();
        }

        private void DrawSlopAngleToBrush()
        {
            EditorGUILayout.Space();
            GUILayout.Label("Slope Angle To Brush", style);

            EditorGUILayout.BeginHorizontal("box");

            EditorGUILayout.BeginVertical();
            activeSave.checkSlope = EditorGUILayout.Toggle(activeSave.checkSlope);

            if (activeSave.checkSlope)
            {
                EditorGUILayout.Space();

                EditorGUILayout.BeginHorizontal("box");
                GUILayout.Label(string.Format("Min Angle = {0} | Max Angle = {1}", Mathf.Round(activeSave.minRequiredSlope * 100f) / 100f, Mathf.Round(activeSave.maxRequiredSlope * 100f) / 100f), style);
                EditorGUILayout.EndHorizontal();

                EditorGUILayout.MinMaxSlider(ref activeSave.minRequiredSlope, ref activeSave.maxRequiredSlope, 0, 90);
            }
            EditorGUILayout.EndVertical();

            EditorGUILayout.EndHorizontal();
        }

        //Object Settings Display
        private void DrawOffsetCenter()
        {
            GUILayout.Label("Offset Center Of Prefab", style);
            EditorGUILayout.BeginVertical("box");
            activeSave.prefabOriginOffset = EditorGUILayout.Vector3Field("", activeSave.prefabOriginOffset);
            EditorGUILayout.EndVertical();
            EditorGUILayout.Space();
        }

        private void DrawOffsetRotation()
        {
            GUILayout.Label("Offset Rotation Of Prefab", style);
            EditorGUILayout.BeginVertical("box");
            activeSave.prefabRotationOffset = EditorGUILayout.Vector3Field("", activeSave.prefabRotationOffset);
            EditorGUILayout.EndVertical();
            EditorGUILayout.Space();
        }

        private void DrawParentOptions()
        {
            GUILayout.Label("Brushed Objects Parent Settings", style);
            EditorGUILayout.BeginVertical("box");
            activeSave.parentingStyle = (PB_ParentingStyle)EditorGUILayout.EnumPopup(activeSave.parentingStyle);

            switch (activeSave.parentingStyle)
            {
                case PB_ParentingStyle.Surface:
                    EditorGUILayout.HelpBox("Prefabs painted will now parent them selfs to the surface they are painted on.", MessageType.Info);
                    break;
                case PB_ParentingStyle.SingleParent:
                    activeSave.parent = EditorGUILayout.ObjectField(activeSave.parent, typeof(GameObject), true) as GameObject;
                    break;
                case PB_ParentingStyle.ClosestFromList:
                    DrawParentList();
                    break;
                case PB_ParentingStyle.RoundRobin:
                    DrawParentList();
                    break;
            }
            EditorGUILayout.EndVertical();
        }

        private void DrawMatchSurface()
        {
            GUILayout.Label("Rotate GameObjects to Match Surface", style);
            EditorGUILayout.BeginVertical("box");
            activeSave.rotateToMatchSurface = EditorGUILayout.Toggle(activeSave.rotateToMatchSurface);
            if (activeSave.rotateToMatchSurface)
            {
                activeSave.rotateSurfaceDirection = (PB_Direction)EditorGUILayout.EnumPopup(activeSave.rotateSurfaceDirection);
                EditorGUILayout.HelpBox("If your GameObjects aren't facing the correct direction Try changing the direction listed above.", MessageType.Info);
            }

            EditorGUILayout.EndVertical();
        }

        private void DrawCustomRotation()
        {
            GUILayout.Label("Customize Rotation", style);
            EditorGUILayout.BeginVertical("box");
            activeSave.randomizeRotation = EditorGUILayout.Toggle(activeSave.randomizeRotation);

            if (activeSave.randomizeRotation)
            {
                EditorGUILayout.BeginHorizontal();

                EditorGUILayout.BeginVertical("box");
                GUILayout.Label("Axis");
                GUILayout.Label("X");
                GUILayout.Label("Y");
                GUILayout.Label("Z");
                EditorGUILayout.EndVertical();

                //Min
                EditorGUILayout.BeginVertical("box");
                GUILayout.Label("Minimum Rotation");
                activeSave.minXRotation = Mathf.Clamp(EditorGUILayout.FloatField(activeSave.minXRotation), 0, 360);
                activeSave.minYRotation = Mathf.Clamp(EditorGUILayout.FloatField(activeSave.minYRotation), 0, 360);
                activeSave.minZRotation = Mathf.Clamp(EditorGUILayout.FloatField(activeSave.minZRotation), 0, 360);
                EditorGUILayout.EndVertical();

                //Min
                EditorGUILayout.BeginVertical("box");
                GUILayout.Label("Maximum Rotation");
                activeSave.maxXRotation = Mathf.Clamp(EditorGUILayout.FloatField(activeSave.maxXRotation), 0, 360);
                activeSave.maxYRotation = Mathf.Clamp(EditorGUILayout.FloatField(activeSave.maxYRotation), 0, 360);
                activeSave.maxZRotation = Mathf.Clamp(EditorGUILayout.FloatField(activeSave.maxZRotation), 0, 360);
                EditorGUILayout.EndVertical();

                EditorGUILayout.EndHorizontal();

                EditorGUILayout.BeginHorizontal("box");
                if (GUILayout.Button("Set all to: "))
                {
                    activeSave.minXRotation = rotationSet;
                    activeSave.minYRotation = rotationSet;
                    activeSave.minZRotation = rotationSet;
                    activeSave.maxXRotation = rotationSet;
                    activeSave.maxYRotation = rotationSet;
                    activeSave.maxZRotation = rotationSet;
                }

                rotationSet = EditorGUILayout.FloatField(rotationSet);
                EditorGUILayout.EndHorizontal();
            }
            EditorGUILayout.EndVertical();
        }

        private void DrawCustomScale()
        {
            GUILayout.Label("Customize Scale", style);
            EditorGUILayout.BeginVertical("box");
            activeSave.scaleType = (PB_ScaleType)EditorGUILayout.EnumPopup(activeSave.scaleType);

            if (activeSave.scaleType != PB_ScaleType.None)
                activeSave.scaleApplicationType = (PB_SaveApplicationType)EditorGUILayout.EnumPopup("Scale Application", activeSave.scaleApplicationType);

            switch (activeSave.scaleType)
            {
                case PB_ScaleType.None:
                    break;
                case PB_ScaleType.SingleValue:
                    DrawSingleValueScale();
                    break;
                case PB_ScaleType.MultiAxis:
                    DrawMultiAxisScale();
                    break;
            }

            EditorGUILayout.EndVertical();
        }

        private void DrawSingleValueScale()
        {
            activeSave.minScale = EditorGUILayout.FloatField("Min Scale", activeSave.minScale);
            activeSave.maxScale = EditorGUILayout.FloatField("Max Scale", activeSave.maxScale);
        }

        private void DrawMultiAxisScale()
        {
            EditorGUILayout.BeginHorizontal();

            EditorGUILayout.BeginVertical("box");
            GUILayout.Label("Axis");
            GUILayout.Label("X");
            GUILayout.Label("Y");
            GUILayout.Label("Z");
            EditorGUILayout.EndVertical();

            //Min
            EditorGUILayout.BeginVertical("box");
            GUILayout.Label("Minimum Scale");
            activeSave.minXScale = EditorGUILayout.FloatField(activeSave.minXScale);
            activeSave.minYScale = EditorGUILayout.FloatField(activeSave.minYScale);
            activeSave.minZScale = EditorGUILayout.FloatField(activeSave.minZScale);
            EditorGUILayout.EndVertical();

            //Min
            EditorGUILayout.BeginVertical("box");
            GUILayout.Label("Maximum Scale");
            activeSave.maxXScale = EditorGUILayout.FloatField(activeSave.maxXScale);
            activeSave.maxYScale = EditorGUILayout.FloatField(activeSave.maxYScale);
            activeSave.maxZScale = EditorGUILayout.FloatField(activeSave.maxZScale);
            EditorGUILayout.EndVertical();

            EditorGUILayout.EndHorizontal();

            EditorGUILayout.BeginHorizontal();
            if (GUILayout.Button("Set all to: "))
            {
                activeSave.minXScale = scaleSet;
                activeSave.minYScale = scaleSet;
                activeSave.minZScale = scaleSet;
                activeSave.maxXScale = scaleSet;
                activeSave.maxYScale = scaleSet;
                activeSave.maxZScale = scaleSet;
            }

            scaleSet = EditorGUILayout.FloatField(scaleSet);

            EditorGUILayout.EndHorizontal();
            DrawScaleError();
        }

        private void DrawScaleError()
        {
            if (activeSave.minXScale == 0)
                EditorGUILayout.HelpBox("Minimum Scale X is equal to 0 this can cause issues with the prefab", MessageType.Error);

            if (activeSave.minYScale == 0)
                EditorGUILayout.HelpBox("Minimum Scale Y is equal to 0 this can cause issues with the prefab", MessageType.Error);

            if (activeSave.minZScale == 0)
                EditorGUILayout.HelpBox("Minimum Scale Z is equal to 0 this can cause issues with the prefab", MessageType.Error);

            if (activeSave.maxXScale == 0)
                EditorGUILayout.HelpBox("Maximum Scale X is equal to 0 this can cause issues with the prefab", MessageType.Error);

            if (activeSave.maxYScale == 0)
                EditorGUILayout.HelpBox("Maximum Scale Y is equal to 0 this can cause issues with the prefab", MessageType.Error);

            if (activeSave.maxZScale == 0)
                EditorGUILayout.HelpBox("Maximum Scale Z is equal to 0 this can cause issues with the prefab", MessageType.Error);
        }

        private void DrawParentList()
        {
            EditorGUILayout.BeginVertical();
            for (int i = 0; i < activeSave.parentList.Count; i++)
            {
                EditorGUILayout.BeginHorizontal();
                DrawParentListItem(i);
                EditorGUILayout.EndHorizontal();
            }

            GUI.color = Color.green;
            parentRect = EditorGUILayout.BeginVertical("box", GUILayout.Height(1));
            GUI.color = Color.white;
            GUILayout.FlexibleSpace();
            EditorGUILayout.BeginHorizontal();
            GUILayout.FlexibleSpace();
            GUILayout.Label("Drag And Drop Here To Add Parents To The List", styleBold);
            GUILayout.FlexibleSpace();
            EditorGUILayout.EndHorizontal();
            GUILayout.FlexibleSpace();
            EditorGUILayout.EndVertical();

            if (Event.current.type == EventType.DragUpdated && parentRect.Contains(Event.current.mousePosition))
            {
                DragAndDrop.visualMode = DragAndDropVisualMode.Copy;
                Event.current.Use();
            }

            if (Event.current.type == EventType.DragPerform && parentRect.Contains(Event.current.mousePosition))
                AddParent(DragAndDrop.objectReferences);

            EditorGUILayout.EndVertical();
        }

        private void DrawParentListItem(int i)
        {
            activeSave.parentList[i] = EditorGUILayout.ObjectField(activeSave.parentList[i], typeof(GameObject), true) as GameObject;

            GUI.color = Color.red;

            if (GUILayout.Button("X"))
                activeSave.parentList.RemoveAt(i);

            GUI.color = Color.white;
        }

        //Draw Erase Settings Display
        private void DrawEraseBrushSizeSlider()
        {
            EditorGUILayout.Space();
            //Define radius of the eraser.
            GUILayout.Label("Eraser Size", style);
            EditorGUILayout.BeginVertical("box");
            EditorGUILayout.BeginHorizontal();
            activeSave.eraseBrushSize = EditorGUILayout.Slider(activeSave.eraseBrushSize, activeSave.minEraseBrushSize, activeSave.maxEraseBrushSize);
            EditorGUILayout.EndHorizontal();
            GUILayout.Label("Max Slider Size");
            activeSave.maxEraseBrushSize = EditorGUILayout.FloatField(activeSave.maxEraseBrushSize);
            EditorGUILayout.EndVertical();
        }

        private void DrawEraseDetectionType()
        {
            GUILayout.Label("Erase Detection Type");
            activeSave.eraseDetection = (PB_EraseDetectionType)EditorGUILayout.EnumPopup(activeSave.eraseDetection);

            switch (activeSave.eraseDetection)
            {
                case PB_EraseDetectionType.Collision:
                    EditorGUILayout.HelpBox("Collision is the fastest detection type", MessageType.Warning);
                    EditorGUILayout.HelpBox("This will not work for objects with no collider component on them", MessageType.Warning);
                    break;
                case PB_EraseDetectionType.Distance:
                    EditorGUILayout.HelpBox("Distance will work with objects that don't use colliders. Although this is very slow", MessageType.Warning);
                    EditorGUILayout.HelpBox("Try not to use with complex scenes! Disabling as many objects as possible will help.", MessageType.Error);
                    break;
            }
        }

        private void DrawEraseType()
        {
            GUILayout.Label("Erase Type", style);
            activeSave.eraseType = (PB_EraseTypes)EditorGUILayout.EnumPopup(activeSave.eraseType);

            switch (activeSave.eraseType)
            {
                case PB_EraseTypes.PrefabsInBrush:
                    EditorGUILayout.BeginVertical();
                    GUILayout.Label("Only erase prefabs selected in the brush");
                    activeSave.mustBeSelectedInBrush = EditorGUILayout.Toggle(activeSave.mustBeSelectedInBrush);

                    if (activeSave.mustBeSelectedInBrush)
                        EditorGUILayout.HelpBox("Only prefabs defined and selected in the save file will be removed", MessageType.Info);
                    else
                        EditorGUILayout.HelpBox("Only prefabs defined in the save file will be removed", MessageType.Info);

                    EditorGUILayout.EndVertical();
                    break;
                case PB_EraseTypes.PrefabsInBounds:
                    EditorGUILayout.HelpBox("Only prefabs that fit in the bounds will be removed", MessageType.Info);
                    break;
            }
        }

        private void DrawTagToErase()
        {
            EditorGUILayout.Space();
            //Define the object tag that is reqired for erasing 
            GUILayout.Label("Tag To Erase", style);

            EditorGUILayout.BeginHorizontal("box");

            EditorGUILayout.BeginVertical();
            activeSave.checkTagForErase = EditorGUILayout.Toggle(activeSave.checkTagForErase);

            if (activeSave.checkTagForErase)
            {
                EditorGUILayout.Space();
                activeSave.requiredTagMaskForErase = EditorGUILayout.MaskField(activeSave.requiredTagMaskForErase, UnityEditorInternal.InternalEditorUtility.tags);
            }
            EditorGUILayout.EndVertical();

            EditorGUILayout.EndHorizontal();
        }

        private void DrawLayerToErase()
        {
            EditorGUILayout.Space();
            //Define the layer for objects that need to be erased
            GUILayout.Label("Layer To Erase", style);

            EditorGUILayout.BeginHorizontal("box");

            EditorGUILayout.BeginVertical();
            activeSave.checkLayerForErase = EditorGUILayout.Toggle(activeSave.checkLayerForErase);

            if (activeSave.checkLayerForErase)
            {
                EditorGUILayout.Space();
                activeSave.requiredLayerMaskForErase = EditorGUILayout.MaskField(activeSave.requiredLayerMaskForErase, UnityEditorInternal.InternalEditorUtility.layers);
            }
            EditorGUILayout.EndVertical();

            EditorGUILayout.EndHorizontal();
        }
        private void DrawSlopAngleToErase()
        {
            EditorGUILayout.Space();
            GUILayout.Label("Slope Angle To Erase", style);

            EditorGUILayout.BeginHorizontal("box");

            EditorGUILayout.BeginVertical();
            activeSave.checkSlopeForErase = EditorGUILayout.Toggle(activeSave.checkSlopeForErase);

            if (activeSave.checkSlopeForErase)
            {
                EditorGUILayout.Space();

                EditorGUILayout.BeginHorizontal("box");
                GUILayout.Label(string.Format("Min Angle = {0} | Max Angle = {1}", Mathf.Round(activeSave.minRequiredSlopeForErase * 100f) / 100f, Mathf.Round(activeSave.maxRequiredSlopeForErase * 100f) / 100f), style);
                EditorGUILayout.EndHorizontal();

                EditorGUILayout.MinMaxSlider(ref activeSave.minRequiredSlopeForErase, ref activeSave.maxRequiredSlopeForErase, 0, 90);
            }
            EditorGUILayout.EndVertical();

            EditorGUILayout.EndHorizontal();
        }


        //Draw Save Buttons
        private void DrawNewButton()
        {
            if (GUILayout.Button("New"))
            {
                SetActiveTab(PB_ActiveTab.Saves);
                SetSaveOption(PB_SaveOptions.New);
            }
        }

        private void DrawOpenButton()
        {
            if (GUILayout.Button("Open"))
            {
                SetActiveTab(PB_ActiveTab.Saves);
                SetSaveOption(PB_SaveOptions.Open);
            }
        }

        private void DrawSaveButton(int i)
        {
            if (GUILayout.Button("Save"))
            {
                if (activeSaveID != -1)
                    SaveAs(saves[activeSaveID].name, true, false);
                else
                {
                    SetActiveTab(PB_ActiveTab.Saves);
                    SetSaveOption(PB_SaveOptions.SaveAs);
                }
            }
        }

        private void DrawSaveAsButton()
        {
            if (GUILayout.Button("Save As"))
            {
                SetActiveTab(PB_ActiveTab.Saves);
                SetSaveOption(PB_SaveOptions.SaveAs);
            }
        }

        private void DrawRefreshButton()
        {
            if (GUILayout.Button("Refresh Save List"))
                RefreshSaves();
        }

        private void DrawDeleteSaveButton(int i)
        {
            GUI.color = Color.red;
            if (GUILayout.Button("X"))
            {
                StoreOpenAndDeleteComfirationInfo(saves[i].name, i);
                SetSaveOption(PB_SaveOptions.ComfirmationDelete);
            }

            GUI.color = Color.white;
        }

        //Draw Save Brush Stuff
        private void DrawSaveList()
        {
            EditorGUILayout.BeginVertical();
            for (int i = 0; i < saves.Count; i++)
            {
                DrawSaveItem(i);
                EditorGUILayout.Space();
            }
            EditorGUILayout.EndVertical();
        }

        private void DrawSaveItem(int i)
        {
            EditorGUILayout.BeginVertical("box");

            //Banner Start
            EditorGUILayout.BeginHorizontal();
            GUILayout.Label(string.Format("{0} {1}", saves[i].name, (CheckIfSaveHasChanged() ? "*" : "")));
            GUILayout.FlexibleSpace();
            DrawDeleteSaveButton(i);
            EditorGUILayout.EndHorizontal();
            //Banner End

            EditorGUILayout.BeginHorizontal();
            GUI.color = (activeSaveID == i) ? Color.green : Color.white;
            if (GUILayout.Button("Load File"))
            {
                StoreOpenAndDeleteComfirationInfo(saves[i].name, i);
                SetActiveTab(PB_ActiveTab.Saves);
                SetSaveOption(PB_SaveOptions.ComfirmationOpen);
            }

            GUI.color = Color.white;
            EditorGUILayout.EndHorizontal();

            EditorGUILayout.EndVertical();
        }

        private void DrawNewSaveFile()
        {
            GUILayout.Label("New Save Name");
            saveName = EditorGUILayout.TextField(saveName);

            EditorGUILayout.Space();

            if (GUILayout.Button(string.Format("Create New Save Called {0}", saveName), GUILayout.Height(50)))
            {
                SaveAs(saveName, false, true);
                SetActiveTab(PB_ActiveTab.PrefabPaint);
            }
        }

        //Draw Save Windows
        private void DrawSaveAsWindow()
        {
            GUILayout.Label(string.Format("Save As ({0})", saveName));
            saveName = EditorGUILayout.TextField(saveName);

            EditorGUILayout.Space();

            if (GUILayout.Button(string.Format("Save {0} To New File", saveName), GUILayout.Height(50)))
            {
                if (GetSaveNames().Contains(saveName))
                {
                    StoreSaveAsComfirationInfo(saveName);
                    SetActiveTab(PB_ActiveTab.Saves);
                    SetSaveOption(PB_SaveOptions.ComfirationOverwrite);
                }
                else
                {
                    SaveAs(saveName, true, true);
                    SetActiveTab(PB_ActiveTab.Saves);
                    SetSaveOption(PB_SaveOptions.Open);
                }
            }
        }

        private void DrawSaveAsComfirmationWindow()
        {
            EditorGUILayout.HelpBox(string.Format("Are you sure you want to overwrite {0}. The all data saved to this file will be lost and replaced with the new data", comfirmationName), MessageType.Info);

            EditorGUILayout.BeginHorizontal();

            GUI.color = Color.red;
            if (GUILayout.Button("Yes Overwrite"))
            {
                SaveAs(comfirmationName, true, true);
                SetActiveTab(PB_ActiveTab.Saves);
                SetSaveOption(PB_SaveOptions.Open);
            }

            GUI.color = Color.white;

            if (GUILayout.Button("No Make A New File"))
            {
                SaveAs(comfirmationName, false, true);
                SetActiveTab(PB_ActiveTab.Saves);
                SetSaveOption(PB_SaveOptions.Open);
            }

            if (GUILayout.Button("No Go Back"))
            {
                SetActiveTab(PB_ActiveTab.Saves);
                SetSaveOption(PB_SaveOptions.Open);
            }

            EditorGUILayout.EndHorizontal();
        }

        private void DrawComfirationDeleteWindow()
        {
            EditorGUILayout.HelpBox(string.Format("Are you sure you want to delete {0}. This can't be undone.", comfirmationName), MessageType.Info);

            EditorGUILayout.BeginHorizontal();

            GUI.color = Color.red;
            if (GUILayout.Button("Yes Delete"))
            {
                DeleteSave(comfirmationId);
                SetActiveTab(PB_ActiveTab.Saves);
                SetSaveOption(PB_SaveOptions.Open);
            }

            GUI.color = Color.white;

            if (GUILayout.Button("No Keep Save"))
            {
                SetActiveTab(PB_ActiveTab.Saves);
                SetSaveOption(PB_SaveOptions.Open);
            }

            EditorGUILayout.EndHorizontal();
        }

        private void DrawComfirationOpenWindow()
        {
            EditorGUILayout.HelpBox(string.Format("Are you sure you want to open {0}. Any unsaved data will be lost", comfirmationName), MessageType.Info);

            EditorGUILayout.BeginHorizontal();

            GUI.color = Color.green;
            if (GUILayout.Button("Yes Open"))
            {
                LoadSave(comfirmationId);
                SetActiveTab(PB_ActiveTab.PrefabPaint);
                SetSaveOption(PB_SaveOptions.Open);
            }

            GUI.color = Color.white;

            if (GUILayout.Button("No Don't Open"))
            {
                SetActiveTab(PB_ActiveTab.Saves);
                SetSaveOption(PB_SaveOptions.Open);
            }

            EditorGUILayout.EndHorizontal();
        }

        //Draw other
        private void DrawPaintCircle(Color circleColour, float radius)
        {
            Ray drawPointRay = HandleUtility.GUIPointToWorldRay(Event.current.mousePosition);
            RaycastHit drawPointHit;

            if (GetHitPoint(drawPointRay.origin, drawPointRay.direction, out drawPointHit))
            {
                switch (activeSave.paintType)
                {
                    case PB_PaintType.Surface:
                        Handles.color = circleColour;
                        Handles.DrawSolidDisc(drawPointHit.point, drawPointHit.normal, radius * .5f);
                        break;
                    case PB_PaintType.Physics:
                        Handles.color = circleColour;
                        Handles.DrawSolidDisc(drawPointHit.point + (Vector3.up * activeSave.spawnHeight), Vector3.up, radius * .5f);
                        Handles.color = Color.grey;
                        Handles.DrawWireDisc(drawPointHit.point, Vector3.up, radius * .5f);
                        Handles.DrawLine(drawPointHit.point + (Vector3.up * activeSave.spawnHeight), drawPointHit.point);
                        break;
                }

                SceneView.RepaintAll();
            }
        }
        #endregion

#region Methods
        private void AddPrefab(Object[] objectsToAdd)
        {
            for (int i = 0; i < objectsToAdd.Length; i++)
            {
                if (objectsToAdd[i].GetType() == typeof(GameObject))
                    activeSave.AddPrefab(objectsToAdd[i] as GameObject);
            }
        }

        private void AddParent(Object[] objectsToAdd)
        {
            for (int i = 0; i < objectsToAdd.Length; i++)
            {
                if (objectsToAdd[i].GetType() == typeof(GameObject))
                    activeSave.parentList.Add(objectsToAdd[i] as GameObject);
            }
        }

        private PB_PrefabData GetSaveDataFromPrefab(GameObject prefab)
        {
            for (int i = 0; i < activeSave.prefabData.Count; i++)
            {
                if (activeSave.prefabData[i].prefab == null)
                    continue;

#if UNITY_2017 || UNITY_5 || UNITY_4
                if(activeSave.prefabData[i].prefab == PrefabUtility.GetPrefabParent(prefab))
                    return activeSave.prefabData[i];
#else
                if (activeSave.prefabData[i].prefab == PrefabUtility.GetCorrespondingObjectFromSource(prefab))
                    return activeSave.prefabData[i];
#endif
            }

            return null;
        }

        private void RunPrefabPaint()
        {
            if (!IsTabActive(PB_ActiveTab.PrefabPaint))
                return;

            //If the placment brush is selected and the mouse is being dragged across the scene view.
            bool mouseDrag = Event.current.type == EventType.MouseDrag && Event.current.button == 0;
            bool mouseDown = Event.current.type == EventType.MouseDown && Event.current.button == 0;
            bool mouseUp = Event.current.type == EventType.MouseUp && Event.current.button == 0;
            bool mouseLeaveWindow = Event.current.type == EventType.MouseLeaveWindow;

            //Create a raycast that will come from the scene camera
            Ray ray = HandleUtility.GUIPointToWorldRay(Event.current.mousePosition);
            RaycastHit finalHit;

            //Calculate the radius of the brush size.
            float newBrushSize = activeSave.brushSize * .5f;
            bool didRayHit = GetHitPoint(new Vector3(ray.origin.x + Random.insideUnitSphere.x * newBrushSize, ray.origin.y, ray.origin.z + Random.insideUnitSphere.z * newBrushSize), ray.direction, out finalHit);
            int failCount = 0;

            if (didRayHit == false)
                return;

            switch (activeSave.paintType)
            {
                case PB_PaintType.Surface:
                    if (mouseDrag || mouseDown)
                        for (int i = 0; i < activeSave.prefabsPerStroke; i++)
                        {
                            //We don't want to run GetHitPoint twice in the same frame
                            if (i != 0)
                            {
                                while (!didRayHit && failCount <= maxFails)
                                {
                                    didRayHit = GetHitPoint(new Vector3(ray.origin.x + Random.insideUnitSphere.x * newBrushSize, ray.origin.y, ray.origin.z + Random.insideUnitSphere.z * newBrushSize), ray.direction, out finalHit);

                                    //After max fails we want to exit the while loop
                                    if (!didRayHit)
                                        failCount++;
                                }
                            }

                            didRayHit = false; //Reset this so that on the next loop it will check for a new hit

                            RunSurfacePaint(mouseDown, finalHit, false);
                        }
                    break;
                case PB_PaintType.Physics:
                    if (mouseDrag || mouseDown)
                        for (int i = 0; i < activeSave.prefabsPerStroke; i++)
                        {
                            //We don't want to run GetHitPoint twice in the same frame
                            if (i != 0)
                            {
                                while (!didRayHit && failCount <= maxFails)
                                {
                                    didRayHit = GetHitPoint(new Vector3(ray.origin.x + Random.insideUnitSphere.x * newBrushSize, ray.origin.y, ray.origin.z + Random.insideUnitSphere.z * newBrushSize), ray.direction, out finalHit);

                                    //After max fails we want to exit the while loop
                                    if (!didRayHit)
                                        failCount++;
                                }
                            }

                            didRayHit = false; //Reset this so that on the next loop it will check for a new hit

                            RunSurfacePaint(mouseDown, finalHit, true);
                        }
                    break;
                case PB_PaintType.Single:
                    RunSinglePaint(mouseDown, mouseDrag, mouseUp, mouseLeaveWindow, finalHit);
                    break;
            }
        }

        private void RunSurfacePaint(bool mouseDown, RaycastHit hit, bool physicsBrush)
        {
            CheckPaintDistance(hit.point);

            if (paintTravelDistance >= activeSave.paintDeltaDistance || mouseDown)
            {
                paintTravelDistance = 0;

                selectedObject = GetRandomObject(); //Assign random object

                if (selectedObject != null)
                {
                    if (CanBrush(hit, activeSave.checkTag, activeSave.checkLayer, activeSave.checkSlope)) //If the brush result come back as true then start brushing
                    {
                        clone = PrefabUtility.InstantiatePrefab(selectedObject) as GameObject;

                        if (clone == null)
                            return;

                        //Apply prefabs mods
                        if (!physicsBrush)
                            ApplyModifications(clone, hit, false, activeSave.parentingStyle, activeSave.rotateToMatchSurface, activeSave.randomizeRotation, (activeSave.scaleType != PB_ScaleType.None), false);                                    
                        else
                            ApplyModifications(clone, hit, true, activeSave.parentingStyle, activeSave.rotateToMatchSurface, activeSave.randomizeRotation, (activeSave.scaleType != PB_ScaleType.None), true);

                        Undo.RegisterCreatedObjectUndo(clone, "brush stroke: " + clone.name);       //Store the undo variables.
                    }
                }
                else
                    Debug.LogError("There is no object selected in the prefab window, please drag a prefab into the area to use the placement brush. Or make sure that atleast one prefab has been selected.");
            }
        }

        private void RunSinglePaint(bool mouseDown, bool mouseDrag, bool mouseUp, bool mouseLeaveWindow, RaycastHit hit)
        {
            if (mouseDown && !moddingSingle)
            {
                selectedObject = GetRandomObject(); //Assign random object

                if (selectedObject != null)
                {
                    clone = PrefabUtility.InstantiatePrefab(selectedObject) as GameObject;

                    if (clone != null)
                    {
                        ApplyModifications(clone, hit, false, activeSave.parentingStyle, activeSave.rotateToMatchSurface, activeSave.randomizeRotation, (activeSave.scaleType != PB_ScaleType.None), false);
                        Undo.RegisterCreatedObjectUndo(clone, "brush stroke: " + clone.name);       //Store the undo variables.

                        objectToSingleMod = clone;
                        layerBeforeSingleMod = clone.layer;
                        clone.layer = 2;
                        moddingSingle = true;
                    }
                }
                else
                    Debug.LogError("There is no object selected in the prefab window, please drag a prefab into the area to use the placment brush.");
            }

            if (moddingSingle && objectToSingleMod != null)
            {
                switch (activeSave.draggingAction)
                {
                    case PB_DragModType.Position:

                        if (mouseDrag)
                        {
                            objectToSingleMod.transform.position = hit.point;
                        }

                        break;
                    case PB_DragModType.Rotation:

                        if (e.isMouse)
                            objectToSingleMod.transform.Rotate(objectToSingleMod.transform.TransformDirection(GetDirection(activeSave.rotationAxis)), activeSave.rotationSensitivity * (-e.delta.x * Time.deltaTime));

                        break;
                    case PB_DragModType.Scale:

                        if (e.isMouse)
                        {
                            Vector3 newScale = objectToSingleMod.transform.localScale + Vector3.one * (-e.delta.x * Time.deltaTime);

                            if (newScale.x > 0 && newScale.y > 0 && newScale.z > 0)
                                objectToSingleMod.transform.localScale = newScale;
                        }

                        break;
                }

                if (mouseUp || mouseLeaveWindow)
                {
                    moddingSingle = false;

                    if (objectToSingleMod != null)
                        objectToSingleMod.layer = layerBeforeSingleMod;
                }
            }
        }

        private void CheckPaintDistance(Vector3 hitPoint)
        {
            //If no last frame has been set then set it
            if (rayLastFrame == Vector3.positiveInfinity)
                rayLastFrame = hitPoint;

            paintTravelDistance += Vector3.Distance(hitPoint, rayLastFrame);
            rayLastFrame = hitPoint;
        }

        private bool GetHitPoint(Vector3 origin, Vector3 direction, out RaycastHit hit)
        {
            List<RaycastHit> hits = new List<RaycastHit>(Physics.RaycastAll(origin, direction));
            float minDist = Mathf.Infinity;
            int idToReturn = -1;

            for (int i = 0; i < hits.Count; i++)
            {
                if (activeSave.ignoreTriggers && hits[i].collider.isTrigger)
                    continue;

                if (activeSave.ignorePaintedPrefabs)
                {
                    PB_PrefabData data = GetSaveDataFromPrefab(hits[i].collider.gameObject);
                    if (data != null)
                        if (data.selected)
                            continue;
                }

                //If we get this far then it is a valid surface, we just need to check the distance;
                float curDist = Vector3.Distance(origin, hits[i].point);
                if(curDist < minDist)
                {
                    idToReturn = i;
                    minDist = curDist;
                }
            }

            if(hits.Count == 0 || idToReturn == -1)
            {
                hit = new RaycastHit();
                return false;
            }

            hit = hits[idToReturn];
            return true;
        }

        private void RunEraseBrush()
        {
            //If the placment brush is selected and the mouse is being dragged across the scene view.
            bool isMouseEventCorrect = ((Event.current.type == EventType.MouseDrag || Event.current.type == EventType.MouseDown) && Event.current.button == 0);
            if (isMouseEventCorrect && IsTabActive(PB_ActiveTab.PrefabErase))
            {
                //Calculate the radius of the brush size.
                float newBrushSize = activeSave.eraseBrushSize * .5f;

                //Create a raycast that will come from the top of the world down onto a random point within the brush size raduis calculated above.
                Ray ray = HandleUtility.GUIPointToWorldRay(Event.current.mousePosition);
                RaycastHit hit;

                if (Physics.Raycast(ray, out hit))
                {
                    if (activeSave.eraseType == PB_EraseTypes.PrefabsInBounds)
                        brushBounds = new Bounds(hit.point, Vector3.one * (activeSave.eraseBrushSize));

                    switch (activeSave.eraseDetection)
                    {
                        case PB_EraseDetectionType.Collision:
                            Collider[] cols = Physics.OverlapSphere(hit.point, newBrushSize);
                            for (int i = 0; i < cols.Length; i++)
                            {
                                if (cols[i] != null)
                                {
                                    if (CanErase(hit, cols[i].gameObject, activeSave.checkTagForErase, activeSave.checkLayerForErase, activeSave.checkSlopeForErase))
                                        TryErase(cols[i].gameObject);
                                }
                            }
                            break;
                        case PB_EraseDetectionType.Distance:
                            for (int i = 0; i < hierarchy.Length; i++)
                            {
                                if (hierarchy[i] != null)
                                {
                                    bool checkErase = (CanErase(hit, hierarchy[i], activeSave.checkTagForErase, activeSave.checkLayerForErase, activeSave.checkSlopeForErase));
                                    bool checkDistance = (CheckDistance(newBrushSize, hit.point, hierarchy[i].transform.position));

                                    if (checkErase && checkDistance)
                                        TryErase(hierarchy[i]);
                                }
                            }
                            break;
                    }
                }
            }
        }

        private void TryErase(GameObject g)
        {
            switch (activeSave.eraseType)
            {
                case PB_EraseTypes.PrefabsInBrush:
                    PB_PrefabData data = GetSaveDataFromPrefab(g);

                    if (data == null)
                        return;

                    if ((activeSave.mustBeSelectedInBrush && data.selected) || !activeSave.mustBeSelectedInBrush)
                    {
                        //Store this in a new gameobject to keep the copy in the Undo
                        GameObject go = g;
                        Undo.DestroyObjectImmediate(go);
                    }

                    break;
                case PB_EraseTypes.PrefabsInBounds:
                    Bounds ObjectBounds = GetBounds(g);
                    if (brushBounds.Contains(ObjectBounds.min) && brushBounds.Contains(ObjectBounds.max))
                    {
                        GameObject go = g;
                        Undo.DestroyObjectImmediate(go);
                    }
                    break;
            }
        }

        private bool CanBrush(RaycastHit surfaceHit, bool checkTag, bool checkLayer, bool checkSlope)
        {
            if (checkTag)
            {
                string[] tags = GetTagsFromMask(activeSave.requiredTagMask);

                bool foundTag = false;
                for (int i = 0; i < tags.Length; i++)
                {
                    if (tags[i] == surfaceHit.collider.tag)
                    {
                        foundTag = true;
                        break;
                    }
                }

                if (foundTag == false)
                    return false;
            }

            if (checkLayer)
            {
                string[] layers = GetTagsFromLayer(activeSave.requiredLayerMask);

                bool foundLayer = false;
                for (int i = 0; i < layers.Length; i++)
                {
                    if (layers[i] == LayerMask.LayerToName(surfaceHit.collider.gameObject.layer))
                    {
                        foundLayer = true;
                        break;
                    }
                }

                if (foundLayer == false)
                    return false;
            }

            if (checkSlope)
            {
                float angle = (Vector3.Angle(surfaceHit.normal, Vector3.up));
                if (angle > activeSave.maxRequiredSlope || angle < activeSave.minRequiredSlope)
                    return false;
            }

            return true;
        }

        private bool CanErase(RaycastHit surfaceHit, GameObject objectToErase, bool checkTag, bool checkLayer, bool checkSlope)
        {
            if (checkTag)
            {
                string[] tags = GetTagsFromMask(activeSave.requiredTagMaskForErase);

                bool foundTag = false;
                for (int i = 0; i < tags.Length; i++) //Go through all tags
                {
                    if (tags[i] == objectToErase.tag) //If match is found
                    {
                        foundTag = true; //Store and break
                        break;
                    }
                }

                if (foundTag == false) //Only if the result is false do we return so the other checks can be made
                    return foundTag;
            }

            if (checkLayer)
            {
                string[] layers = GetTagsFromLayer(activeSave.requiredLayerMaskForErase);

                bool foundLayer = false;
                for (int i = 0; i < layers.Length; i++)
                {
                    if (layers[i] == LayerMask.LayerToName(objectToErase.layer))
                    {
                        foundLayer = true;
                        break;
                    }
                }

                if (foundLayer == false)
                    return false;
            }

            if (checkSlope)
            {
                float angle = (Vector3.Angle(surfaceHit.normal, Vector3.up));
                if (angle > activeSave.maxRequiredSlopeForErase || angle < activeSave.minRequiredSlopeForErase)
                    return false;
            }

            return true;
        }

        private void ApplyModifications(GameObject objectToMod, RaycastHit hitRef, bool useHeightOffset, PB_ParentingStyle parentingStyle, bool rotateToMatchSurface, bool randomizeRotation, bool randomizeScale, bool simPhysics)
        {
            float x = hitRef.point.x + activeSave.prefabOriginOffset.x;
            float y = hitRef.point.y + activeSave.prefabOriginOffset.y;
            float z = hitRef.point.z + activeSave.prefabOriginOffset.z;

            y += (useHeightOffset) ? activeSave.spawnHeight : 0;

            objectToMod.transform.position = new Vector3(x, y, z);
            objectToMod.transform.eulerAngles += activeSave.prefabRotationOffset;

            switch (parentingStyle)
            {
                case PB_ParentingStyle.Surface:
                    objectToMod.transform.parent = hitRef.collider.transform;
                    break;

                case PB_ParentingStyle.SingleParent:

                    if (activeSave.parent != null)
                        objectToMod.transform.parent = activeSave.parent.transform;
                    else
                        Debug.LogWarning("Prefab Brush is trying to set the objects parent to null. Please check that you have defined a gameobject in the Prefab Brush window.");
                    break;
                case PB_ParentingStyle.ClosestFromList:

                    float dist = Mathf.Infinity;
                    Transform newParent = null;
                    for (int i = 0; i < activeSave.parentList.Count; i++)
                    {
                        float curDist = Vector3.Distance(activeSave.parentList[i].transform.position, objectToMod.transform.position);
                        if (curDist < dist)
                        {
                            newParent = activeSave.parentList[i].transform;
                            dist = curDist;
                        }
                    }

                    objectToMod.transform.parent = newParent;
                    break;
                case PB_ParentingStyle.RoundRobin:
                    if (activeSave.parentList.Count == 0)
                        return;

                    roundRobinCount = GetId(activeSave.parentList.Count, roundRobinCount, 1);
                    objectToMod.transform.parent = activeSave.parentList[roundRobinCount].transform;
                    break;
            }

            if (rotateToMatchSurface)    //If rotate to surface has been selected then set the spawn objects rotation to the bases normal.
                objectToMod.transform.rotation = Quaternion.FromToRotation(GetDirection(activeSave.rotateSurfaceDirection), hitRef.normal);

            if (randomizeRotation)     //If random rotation has been selected then apply a random rotation define by the values in the window.
                objectToMod.transform.rotation *= Quaternion.Euler(new Vector3(Random.Range(activeSave.minXRotation, activeSave.maxXRotation), Random.Range(activeSave.minYRotation, activeSave.maxYRotation), Random.Range(activeSave.minZRotation, activeSave.maxZRotation)));

            //If random scale has been selected then apply a new scale transform to each object based on a random range.
            if (randomizeScale)
            {
                Vector3 newScale = Vector3.one;

                switch (activeSave.scaleType)
                {
                    case PB_ScaleType.SingleValue:
                        newScale *= Random.Range(activeSave.minScale, activeSave.maxScale); //Create a random number between the min and max scale values. 
                        break;
                    case PB_ScaleType.MultiAxis:
                        newScale.x = Random.Range(activeSave.minXScale, activeSave.maxXScale);
                        newScale.y = Random.Range(activeSave.minYScale, activeSave.maxYScale);
                        newScale.z = Random.Range(activeSave.minZScale, activeSave.maxZScale);
                        break;
                }

                switch (activeSave.scaleApplicationType)
                {
                    case PB_SaveApplicationType.Set:
                        objectToMod.transform.localScale = newScale;
                        break;
                    case PB_SaveApplicationType.Multiply:
                        newScale.x = objectToMod.transform.localScale.x * newScale.x;
                        newScale.y = objectToMod.transform.localScale.y * newScale.y;
                        newScale.z = objectToMod.transform.localScale.z * newScale.z;
                        break;
                }

                objectToMod.transform.localScale = newScale;
            }

#if UNITY_4 || UNITY_5
//Do nothing
#else
            if (simPhysics)
            {
                Rigidbody rBody = objectToMod.GetComponent<Rigidbody>();
                bool removeBodyAtEnd = false;

                if (rBody == null && activeSave.addRigidbodyToPaintedPrefab)
                {
                    rBody = objectToMod.AddComponent<Rigidbody>();
                    removeBodyAtEnd = true;
                }
                else if (rBody == null)
                    return;

                Physics.autoSimulation = false;
                for (int i = 0; i < activeSave.physicsIterations; i++)
                {
                    Physics.Simulate(Time.fixedDeltaTime);
                }
                Physics.autoSimulation = true;

                if (removeBodyAtEnd)
                    DestroyImmediate(rBody);
            }
#endif
        }

        private GameObject GetRandomObject()
        {
            List<PB_PrefabData> activeData = activeSave.GetActivePrefabs();

            if (activeData.Count <= 0)
                return null;

            int rnd = Random.Range(0, activeData.Count);

            return activeData[rnd].prefab;
        }

        private void SetDragAction()
        {
            switch (Tools.current)
            {
                case Tool.Move:
                    activeSave.draggingAction = PB_DragModType.Position;
                    break;
                case Tool.Rotate:
                    activeSave.draggingAction = PB_DragModType.Rotation;
                    break;
                case Tool.Scale:
                    activeSave.draggingAction = PB_DragModType.Scale;
                    break;
            }
        }

        private void CheckForHotKeyInput()
        {
            if (GetHoldKeyState(Event.current.keyCode))
            {
                if (e.type == EventType.KeyDown)
                {
                    if (tempTab)
                    return;

                    previousTab = activeTab;
                    tempTab = true;

                    if (Event.current.keyCode == activeSave.paintBrushHotKey)
                        SetActiveTab(PB_ActiveTab.PrefabPaint);

                    if (Event.current.keyCode == activeSave.removeBrushHotKey)
                        SetActiveTab(PB_ActiveTab.PrefabErase);
                }
                else if (e.type == EventType.KeyUp)
                {
                    if (!tempTab)
                        return;

                    tempTab = false;
                    SetActiveTab(previousTab);
                }
            }
            else
            {
                if (e.type == EventType.KeyDown)
                {
                    if (Event.current.keyCode == activeSave.paintBrushHotKey)
                        SetActiveTab(PB_ActiveTab.PrefabPaint);

                    if (Event.current.keyCode == activeSave.removeBrushHotKey)
                        SetActiveTab(PB_ActiveTab.PrefabErase);
                }
            }
        }

        private void CheckForOnHotKey()
        {
            if (GetHoldKeyState(Event.current.keyCode))
            {
                if (e.type == EventType.KeyDown)
                {
                    if (tempState)
                        return;

                    tempState = true;

                    if (Event.current.keyCode == activeSave.disableBrushHotKey)
                        ToggleOnState();
                }
                else if (e.type == EventType.KeyUp)
                {
                    if (!tempState)
                        return;

                    tempState = false;

                    if (Event.current.keyCode == activeSave.disableBrushHotKey)
                        ToggleOnState();
                }
            }
            else
            {
                if (e.type == EventType.KeyDown)
                {
                    if (Event.current.keyCode == activeSave.disableBrushHotKey)
                        ToggleOnState();
                }
            }
        }

        private void ToggleOnState()
        {
            isOn = !isOn;
            buttonIcon = GetButtonTexture();
        }
#endregion

#region Tools

        private bool GetHoldKeyState(KeyCode code)
        {
            if (activeSave.paintBrushHotKey == code)
                return activeSave.paintBrushHoldKey;

            if (activeSave.removeBrushHotKey == code)
                return activeSave.removeBrushHoldKey;

            if (activeSave.disableBrushHotKey == code)
                return activeSave.disableBrushHoldKey;

            return false;
        }

        private bool CheckDistance(float radius, Vector3 a, Vector3 b)
        {
            return ((a - b).sqrMagnitude <= radius);
        }

        private void SetActiveTab(PB_ActiveTab newTab)
        {
            activeTab = newTab;

            if (newTab == PB_ActiveTab.PrefabErase)
                hierarchy = (GameObject[])FindObjectsOfType(typeof(GameObject));
        }

        private void SetTabColour(PB_ActiveTab tabToCheck)
        {
            GUI.color = (IsTabActive(tabToCheck)) ? selectedTab : Color.white;
        }

        private bool IsTabActive(PB_ActiveTab tabToCheck)
        {
            return activeTab == tabToCheck;
        }

        private void SetSaveOption(PB_SaveOptions newOption)
        {
            activeSaveOption = newOption;
        }

        private void SetTabColour(PB_SaveOptions optionToCheck)
        {
            GUI.color = (IsSaveOptionActive(optionToCheck)) ? selectedTab : Color.white;
        }

        private bool IsSaveOptionActive(PB_SaveOptions optionToCheck)
        {
            return activeSaveOption == optionToCheck;
        }

        private float GetPrefabIconSize()
        {
            return prefabIconMinSize * prefabIconScaleFactor;
        }

        private int GetId(int listSize, int curPointInList, int direction)
        {
            if ((curPointInList + direction) >= listSize)
                return 0;

            if ((curPointInList + direction) < 0)
                return listSize - 1;

            return curPointInList + direction;
        }

        private Vector3 GetDirection(PB_Direction direction)
        {
            switch (direction)
            {
                case PB_Direction.Up:
                    return Vector3.up;
                case PB_Direction.Down:
                    return -Vector3.up;
                case PB_Direction.Left:
                    return -Vector3.right;
                case PB_Direction.Right:
                    return Vector3.right;
                case PB_Direction.Forward:
                    return Vector3.forward;
                case PB_Direction.Backward:
                    return -Vector3.forward;
            }

            return Vector3.zero;
        }

        private string[] GetTagsFromMask(int original)
        {
            List<string> output = new List<string>();

            for (int i = 0; i < UnityEditorInternal.InternalEditorUtility.tags.Length; ++i)
            {
                int shifted = 1 << i;
                if ((original & shifted) == shifted)
                {
                    string variableName = UnityEditorInternal.InternalEditorUtility.tags[i];
                    if (!string.IsNullOrEmpty(variableName))
                    {
                        output.Add(variableName);
                    }
                }
            }
            return output.ToArray();
        }

        private string[] GetTagsFromLayer(int original)
        {
            List<string> output = new List<string>();

            for (int i = 0; i < UnityEditorInternal.InternalEditorUtility.layers.Length; ++i)
            {
                int shifted = 1 << i;
                if ((original & shifted) == shifted)
                {
                    string variableName = UnityEditorInternal.InternalEditorUtility.layers[i];
                    if (!string.IsNullOrEmpty(variableName))
                    {
                        output.Add(variableName);
                    }
                }
            }
            return output.ToArray();
        }

        private Bounds GetBounds(GameObject boundsObject)
        {
            Renderer childRender;
            Bounds bounds = GetBoundsFromRenderer(boundsObject);
            if (bounds.extents.x == 0)
            {
                bounds = new Bounds(boundsObject.transform.position, Vector3.zero);
                foreach (Transform child in boundsObject.transform)
                {
                    childRender = child.GetComponent<Renderer>();
                    if (childRender)
                        bounds.Encapsulate(childRender.bounds);
                    else
                        bounds.Encapsulate(GetBoundsFromRenderer(child.gameObject));
                }
            }
            return bounds;
        }

        Bounds GetBoundsFromRenderer(GameObject child)
        {
            Bounds bounds = new Bounds(Vector3.zero, Vector3.zero);
            Renderer render = child.GetComponent<Renderer>();

            if (render != null)
                return render.bounds;

            return bounds;
        }

        void CheckActiveSave()
        {
            if (activeSave != null)
                return;

            MountSave();
        }

        private Texture2D GetButtonTexture()
        {
            if (isOn)
                return (EditorGUIUtility.isProSkin) ? onButtonDark : onButtonLight;
            else
                return (EditorGUIUtility.isProSkin) ? offButtonDark : offButtonLight;
        }
#endregion

#region SaveAndLoad
        private void CreateEmptySave()
        {
            MountSave();
            activeSaveID = -1;
        }

        private string SaveAs(string newName, bool overwrite = false, bool loadOnSave = false)
        {
            string finalName = newName;
            PB_SaveObject asset = Instantiate(activeSave);
            List<string> saveDataNames = GetSaveNames();

            if (overwrite == false)
            {
                int count = 0;
                while (saveDataNames.Contains(finalName))
                {
                    finalName = string.Format("{0}({1})", newName, count);
                    count++;
                }
            }

            AssetDatabase.CreateAsset(asset, savePath + "/" + finalName + ".asset");
            AssetDatabase.SaveAssets();
            RefreshSaves();

            if (loadOnSave)
            {
                for (int i = 0; i < saves.Count; i++)
                {
                    if (finalName == saves[i].name)
                        LoadSave(i);
                }
            }

            return finalName;
        }

        private void LoadSave(int id)
        {
            MountSave(saves[id]);
            activeSaveID = id;
        }

        private void MountSave(PB_SaveObject objectToLoad = null)
        {
            PB_SaveObject asset = (objectToLoad == null) ? ScriptableObject.CreateInstance<PB_SaveObject>() : Instantiate(objectToLoad);
            string assetName = string.Format("{0}/activeSave.asset", GetActiveSavePath());

            AssetDatabase.CreateAsset(asset, assetName);
            AssetDatabase.SaveAssets();

            activeSave = (PB_SaveObject)AssetDatabase.LoadAssetAtPath(assetName, typeof(PB_SaveObject));
            loadedSave = objectToLoad;
        }

        private void DeleteSave(int id)
        {
            string deletePath = savePath + "/" + saves[id].name + ".asset";
            Object o = AssetDatabase.LoadAssetAtPath(deletePath, typeof(Object));

            if (o != null)
            {
                AssetDatabase.DeleteAsset(deletePath);
                saves.RemoveAt(id);

                if (id == activeSaveID)
                    CreateEmptySave();
            }
        }

        private void SetUpSavePath()
        {
            if (savePath == "")
                savePath = GetDefualtSavePath();
        }

        private string GetDefualtSavePath()
        {
            string[] guid = AssetDatabase.FindAssets("PB_SaveObject");

            if (guid.Length <= 0)
                return "Assets/";

            string startingPath = AssetDatabase.GUIDToAssetPath(guid[0]);
            string currentPath = startingPath.Replace("/Scripts/PB_SaveObject.cs", "").Trim() + "/SaveFiles";

            return currentPath;
        }

        private string GetActiveSavePath()
        {
            string newPath = GetDefualtSavePath().Replace("/SaveFiles", "").Trim();
            return newPath;
        }

        private List<PB_SaveObject> FindAllSaves()
        {
            List<PB_SaveObject> allSaves = new List<PB_SaveObject>();
            string path = savePath;
            string[] fileEntries = System.IO.Directory.GetFiles(Application.dataPath.Replace("/Assets", "") + "/" + path);

            foreach (string fileName in fileEntries)
            {
                int index = fileName.LastIndexOf("/");
                string localPath = path;

                if (index > 0)

                    localPath += fileName.Substring(index).Replace('\\', '/').Replace("/SaveFiles", "");
                PB_SaveObject t = (PB_SaveObject)AssetDatabase.LoadAssetAtPath(localPath, typeof(PB_SaveObject));
                if (t != null)
                    allSaves.Add(t);
            }

            //Auto Upgrade
            for (int i = 0; i < allSaves.Count; i++)
            {
                if (allSaves[i].prefabList.Count > 0)
                    allSaves[i].UpgradeSave();
            }

            return allSaves;
        }

        private List<string> GetSaveNames()
        {
            UpdateSaves();

            List<string> saveNames = new List<string>();

            for (int i = 0; i < saves.Count; i++)
            {
                saveNames.Add(saves[i].name);
            }

            return saveNames;
        }

        private void RefreshSaves()
        {
            SetUpSavePath();
            UpdateSaves();
        }

        private void UpdateSaves()
        {
            saves = FindAllSaves();
        }

        private bool CheckIfSaveHasChanged()
        {
            return ScriptableObject.Equals(loadedSave, activeSave);
        }

        private void StoreSaveAsComfirationInfo(string nameToOverwrite)
        {
            comfirmationName = nameToOverwrite;
        }

        private void StoreOpenAndDeleteComfirationInfo(string nameToDelete, int idToDelete)
        {
            comfirmationName = nameToDelete;
            comfirmationId = idToDelete;
        }
#endregion

        void OnSceneGUI(SceneView sceneView)
        {
            e = Event.current;

            CheckActiveSave();
            CheckForOnHotKey();

            //Hide gizmos when brushing
            Tools.hidden = ((IsTabActive(PB_ActiveTab.PrefabPaint) || IsTabActive(PB_ActiveTab.PrefabErase)) && isOn);

            if (isOn && activeSave != null)
            {
                switch (activeTab)
                {
                    case PB_ActiveTab.PrefabPaint:
                        HandleUtility.AddDefaultControl(GUIUtility.GetControlID(FocusType.Passive));
                        DrawPaintCircle(placeBrush, activeSave.brushSize);
                        RunPrefabPaint();
                        break;
                    case PB_ActiveTab.PrefabErase:
                        HandleUtility.AddDefaultControl(GUIUtility.GetControlID(FocusType.Passive));
                        DrawPaintCircle(eraseBrush, activeSave.eraseBrushSize);
                        RunEraseBrush();
                        break;
                }

                CheckForHotKeyInput();
                SetDragAction();
            }
        }

        void OnDestroy()
        {
            // When the window is destroyed, remove the delegate
            // so that it will no longer do any drawing.
#if UNITY_2017 || UNITY_2018 || UNITY_5 || UNITY_4
            SceneView.onSceneGUIDelegate -= this.OnSceneGUI;
#else
            SceneView.duringSceneGui -= this.OnSceneGUI;
#endif
        }
    }
}