#if UNITY_EDITOR
#if UNITY_5_6_OR_NEWER // TreeView implemented in 5.6


using System;
using System.Collections.Generic;
using UnityEditor.IMGUI.Controls;
using UnityEngine;
using UnityEditor;


//namespace UnityEditor.TreeViewExamples
namespace MerryYellow.CodeEnchanter.UnityEnchanterGUI
{
    public delegate void MyEnchantEventDelegate(UnityEnchanterEditor.EnchanterEditor ee);
    public delegate void MySimpleEventDelegate(UnityEnchanterEditor.EnchanterEditor ee);


    class MultiColumnWindow : EditorWindow
	{

		[NonSerialized] bool m_Initialized;
		[SerializeField] TreeViewState m_TreeViewState; // Serialized in the window layout file so it survives assembly reloading
		[SerializeField] MultiColumnHeaderState m_MultiColumnHeaderState;
		SearchField m_SearchField;
		MultiColumnTreeView m_TreeView;
        //MyTreeAsset m_MyTreeAsset;

        [NonSerialized] public UnityEnchanterEditor.EnchanterEditor myEnchanterEditor;
        /*[NonSerialized]*/ public MerryYellow.CodeEnchanter.Common.MySolution mySolution { get { return myEnchanterEditor.solution; } }
        /*[NonSerialized]*/ public List<MerryYellow.CodeEnchanter.Common.MyEnchanter> myEnchanters { get { return myEnchanterEditor.enchanters; } }
        public event MyEnchantEventDelegate MyEnchantEvent;
        public event MySimpleEventDelegate MySimpleEvent;

        /*
		[MenuItem("TreeView Examples/Multi Columns")]
		public static MultiColumnWindow GetWindow ()
		{
			var window = GetWindow<MultiColumnWindow>();
			window.titleContent = new GUIContent("Code Enchanter");
			window.Focus();
			window.Repaint();
			return window;
		}*/
        /*
		[OnOpenAsset]
		public static bool OnOpenAsset (int instanceID, int line)
		{
			var myTreeAsset = EditorUtility.InstanceIDToObject (instanceID) as MyTreeAsset;
			if (myTreeAsset != null)
			{
				var window = GetWindow ();
				window.SetTreeAsset(myTreeAsset);
				return true;
			}
			return false; // we did not handle the open
		}
        *//*
		void SetTreeAsset (MyTreeAsset myTreeAsset)
		{
			m_MyTreeAsset = myTreeAsset;
			m_Initialized = false;
		}*/

        Rect multiColumnTreeViewRect
		{
			get { return new Rect(20, 30, position.width-40, position.height-60); }
		}

		Rect toolbarRect
		{
			get { return new Rect (20f, 10f, position.width-40f, 20f); }
		}

		Rect bottomToolbarRect
		{
			get { return new Rect(20f, position.height - 18f, position.width - 40f, 16f); }
		}

		public MultiColumnTreeView treeView
		{
			get { return m_TreeView; }
		}

        // for unchecking folder&project checkboxes for foreach (or any other enchantments which are disabled by default)
        static void MyInitUpRecursiveDown(MyTreeElement e)
        {
            if (e == null) return;

            for (int i = 0; i < e.myValues.Length; i++)
            {
                if (e.myValues[i] == false)
                {
                    var parent = (MyTreeElement)e.parent;
                    while (parent != null)
                    {
                        parent.myValues[i] = false;
                        parent = (MyTreeElement)parent.parent;
                    }
                }
            }

            if (e.children != null)
            foreach (MyTreeElement c in e.children)
            {
                MyInitUpRecursiveDown(c);
            }
        }

		void InitIfNeeded ()
		{
			if (!m_Initialized)
			{
				// Check if it already exists (deserialized from window layout file or scriptable object)
				if (m_TreeViewState == null)
					m_TreeViewState = new TreeViewState();

				bool firstInit = m_MultiColumnHeaderState == null;
				var headerState = MultiColumnTreeView.CreateDefaultMultiColumnHeaderState(multiColumnTreeViewRect.width, myEnchanters);
				if (MultiColumnHeaderState.CanOverwriteSerializedFields(m_MultiColumnHeaderState, headerState))
					MultiColumnHeaderState.OverwriteSerializedFields(m_MultiColumnHeaderState, headerState);
				m_MultiColumnHeaderState = headerState;
				
				var multiColumnHeader = new MyMultiColumnHeader(headerState);
				if (firstInit)
					multiColumnHeader.ResizeToFit ();

                if (myEnchanterEditor.treeModel == null)
                {
                    myEnchanterEditor.treeModel = new TreeModel<MyTreeElement>(GetData());
                    MyInitUpRecursiveDown(myEnchanterEditor.treeModel.root);
                }
				
				m_TreeView = new MultiColumnTreeView(m_TreeViewState, multiColumnHeader, myEnchanterEditor.treeModel);
                m_TreeView.SetMyColumns(myEnchanters);

				m_SearchField = new SearchField();
				m_SearchField.downOrUpArrowKeyPressed += m_TreeView.SetFocusAndEnsureSelectedItem;

                m_TreeView.ExpandAll(); // expand all here

				m_Initialized = true;
			}
		}
		
		IList<MyTreeElement> GetData ()
		{
            /*
			if (m_MyTreeAsset != null && m_MyTreeAsset.treeElements != null && m_MyTreeAsset.treeElements.Count > 0)
				return m_MyTreeAsset.treeElements;*/

            // generate some test data
            //return MyTreeElementGenerator.GenerateRandomTree(130); 

            /*
            var ASDASD = MyTreeElementGenerator.GenerateTree(mySolution, myEnchanters.Count);
            var asdasd = Newtonsoft.Json.JsonConvert.SerializeObject(ASDASD);
            Debug.Log("ASDASD");
            Debug.Log(asdasd);*/

            return MyTreeElementGenerator.GenerateTree(mySolution, myEnchanters.Count);
		}
        /*
		void OnSelectionChange ()
		{
			if (!m_Initialized)
				return;

			var myTreeAsset = Selection.activeObject as MyTreeAsset;
			if (myTreeAsset != null && myTreeAsset != m_MyTreeAsset)
			{
				m_MyTreeAsset = myTreeAsset;
				m_TreeView.treeModel.SetData (GetData ());
				m_TreeView.Reload ();
			}
		}*/

		void OnGUI ()
		{
			InitIfNeeded();

			SearchBar (toolbarRect);
			DoTreeView (multiColumnTreeViewRect);
			BottomToolBar (bottomToolbarRect);
		}

		void SearchBar (Rect rect)
		{
			treeView.searchString = m_SearchField.OnGUI (rect, treeView.searchString);
		}

		void DoTreeView (Rect rect)
		{
			m_TreeView.OnGUI(rect);
		}

        static void SyncModelToSolution(MyTreeElement node)
        {
            if (node.myDocId != null)
            {
                for (int i = 0; i < node.myValues.Length; i++)
                {
                    node.document.Enchanters[i].Count =
                        node.myValues[i] ? 0 : -1;
                }
            }
            if (node.children != null)
            foreach (var child in node.children)
                SyncModelToSolution((MyTreeElement)child);
        }

        void MySimple()
        {
            SyncModelToSolution(treeView.treeModel.root);
            if (MySimpleEvent != null)
                MySimpleEvent(this.myEnchanterEditor);
        }

        void MyEnchant()
        {
            SyncModelToSolution(treeView.treeModel.root);
            if (MyEnchantEvent != null)
                MyEnchantEvent(this.myEnchanterEditor);
        }

        void BottomToolBar (Rect rect)
		{
			GUILayout.BeginArea (rect);

			using (new EditorGUILayout.HorizontalScope ())
			{
				var style = "miniButton";
				/*if (GUILayout.Button("Expand All", style))
				{
					treeView.ExpandAll ();
				}

				if (GUILayout.Button("Collapse All", style))
				{
					treeView.CollapseAll ();
				}*/


                if (GUILayout.Button("Simple", style, GUILayout.ExpandWidth(false)))
                {
                    MySimple();
                }
                if (GUILayout.Button("ENCHANT", style, GUILayout.ExpandWidth(true)))
                {
                    if (EditorUtility.DisplayDialog("Warning",
                            "Script files will be changed. You should make a backup before proceeding.",
                            "I Made a Backup. Go Ahead!", "No Thanks"))
                    {
                        MyEnchant();
                    }
                }

				/*GUILayout.FlexibleSpace();

                
                //GUILayout.Label (m_MyTreeAsset != null ? AssetDatabase.GetAssetPath (m_MyTreeAsset) : string.Empty);
                GUILayout.Label (string.Empty);//**--

                GUILayout.FlexibleSpace ();

				if (GUILayout.Button("Set sorting", style))
				{
					var myColumnHeader = (MyMultiColumnHeader)treeView.multiColumnHeader;
					myColumnHeader.SetSortingColumns (new int[] {4, 3, 2}, new[] {true, false, true});
					myColumnHeader.mode = MyMultiColumnHeader.Mode.LargeHeader;
				}


				GUILayout.Label ("Header: ", "minilabel");
				if (GUILayout.Button("Large", style))
				{
					var myColumnHeader = (MyMultiColumnHeader) treeView.multiColumnHeader;
					myColumnHeader.mode = MyMultiColumnHeader.Mode.LargeHeader;
				}
				if (GUILayout.Button("Default", style))
				{
					var myColumnHeader = (MyMultiColumnHeader)treeView.multiColumnHeader;
					myColumnHeader.mode = MyMultiColumnHeader.Mode.DefaultHeader;
				}
				if (GUILayout.Button("No sort", style))
				{
					var myColumnHeader = (MyMultiColumnHeader)treeView.multiColumnHeader;
					myColumnHeader.mode = MyMultiColumnHeader.Mode.MinimumHeaderWithoutSorting;
				}

				GUILayout.Space (10);
				
				if (GUILayout.Button("values <-> controls", style))
				{
					treeView.showControls = !treeView.showControls;
				}*/
			}

			GUILayout.EndArea();
		}
	}


	internal class MyMultiColumnHeader : MultiColumnHeader
	{
		Mode m_Mode;

		public enum Mode
		{
			LargeHeader,
			DefaultHeader,
			MinimumHeaderWithoutSorting
		}

		public MyMultiColumnHeader(MultiColumnHeaderState state)
			: base(state)
		{
			mode = Mode.DefaultHeader;
		}

		public Mode mode
		{
			get
			{
				return m_Mode;
			}
			set
			{
				m_Mode = value;
				switch (m_Mode)
				{
					case Mode.LargeHeader:
						canSort = true;
						height = 37f;
						break;
					case Mode.DefaultHeader:
						canSort = true;
						height = DefaultGUI.defaultHeight;
						break;
					case Mode.MinimumHeaderWithoutSorting:
						canSort = false;
						height = DefaultGUI.minimumHeight;
						break;
				}
			}
		}

		protected override void ColumnHeaderGUI (MultiColumnHeaderState.Column column, Rect headerRect, int columnIndex)
		{
			// Default column header gui
			base.ColumnHeaderGUI(column, headerRect, columnIndex);

			// Add additional info for large header
			if (mode == Mode.LargeHeader)
			{
				// Show example overlay stuff on some of the columns
				if (columnIndex > 2)
				{
					headerRect.xMax -= 3f;
					var oldAlignment = EditorStyles.largeLabel.alignment;
					EditorStyles.largeLabel.alignment = TextAnchor.UpperRight;
					GUI.Label(headerRect, 36 + columnIndex + "%", EditorStyles.largeLabel);
					EditorStyles.largeLabel.alignment = oldAlignment;
				}
			}
		}
	}

}


#endif // UNITY_5_6_OR_NEWER
#endif // UNITY_EDITOR