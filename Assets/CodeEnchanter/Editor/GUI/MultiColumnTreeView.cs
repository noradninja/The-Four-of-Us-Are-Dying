#if UNITY_EDITOR
#if UNITY_5_6_OR_NEWER // TreeView implemented in 5.6


using System;
using System.Collections.Generic;
using System.Linq;
using UnityEditor.IMGUI.Controls;
using UnityEngine;
using UnityEditor;


//namespace UnityEditor.TreeViewExamples
namespace MerryYellow.CodeEnchanter.UnityEnchanterGUI
{

    internal class MultiColumnTreeView : TreeViewWithTreeModel<MyTreeElement>
	{
		const float kRowHeights = 20f;
		const float kToggleWidth = 18f;
		public bool showControls = true;

        static Texture2D iconTextureOfCSharp = EditorGUIUtility.FindTexture("cs Script Icon");
        static Texture2D iconTextureOfProject = EditorGUIUtility.FindTexture("Metafile Icon");
        static Texture2D iconTextureOfFolder = EditorGUIUtility.FindTexture("Folder Icon");


        /*
		static Texture2D[] s_TestIcons =
		{
			EditorGUIUtility.FindTexture ("Folder Icon"),
			EditorGUIUtility.FindTexture ("AudioSource Icon"),
			EditorGUIUtility.FindTexture ("Camera Icon"),
			EditorGUIUtility.FindTexture ("Windzone Icon"),
			EditorGUIUtility.FindTexture ("GameObject Icon")

		};*/

        // All columns
        /*enum MyColumns
		{
			Icon1,
			Icon2,
			Name,
			Value1,
			Value2,
			Value3,
		}*/
        string[] MyColumns;

        //**--
		public enum SortOption
		{
			Name,
			//Value1,
			//Value2,
			//Value3,
            MyValue,
		}

        /*
		// Sort options per column
		SortOption[] m_SortOptions = 
		{
			SortOption.Value1, 
			SortOption.Value3, 
			SortOption.Name, 
			SortOption.Value1, 
			SortOption.Value2,
			SortOption.Value3
		};*/

		public static void TreeToList (TreeViewItem root, IList<TreeViewItem> result)
		{
			if (root == null)
				throw new NullReferenceException("root");
			if (result == null)
				throw new NullReferenceException("result");

			result.Clear();
	
			if (root.children == null)
				return;

			Stack<TreeViewItem> stack = new Stack<TreeViewItem>();
			for (int i = root.children.Count - 1; i >= 0; i--)
				stack.Push(root.children[i]);

			while (stack.Count > 0)
			{
				TreeViewItem current = stack.Pop();
				result.Add(current);

				if (current.hasChildren && current.children[0] != null)
				{
					for (int i = current.children.Count - 1; i >= 0; i--)
					{
						stack.Push(current.children[i]);
					}
				}
			}
		}

		public MultiColumnTreeView (TreeViewState state, MultiColumnHeader multicolumnHeader, TreeModel<MyTreeElement> model) : base (state, multicolumnHeader, model)
		{
			//**--Assert.AreEqual(m_SortOptions.Length , MyColumns.Length, "Ensure number of sort options are in sync with number of MyColumns enum values");

			// Custom setup
			rowHeight = kRowHeights;
			//columnIndexForTreeFoldouts = 2;
            columnIndexForTreeFoldouts = 1;
			showAlternatingRowBackgrounds = true;
			showBorder = true;
			customFoldoutYOffset = (kRowHeights - EditorGUIUtility.singleLineHeight) * 0.5f; // center foldout in the row since we also center content. See RowGUI
			extraSpaceBeforeIconAndLabel = kToggleWidth;
			multicolumnHeader.sortingChanged += OnSortingChanged;
			
			Reload();
		}

        public void SetMyColumns(List<MerryYellow.CodeEnchanter.Common.MyEnchanter> myEnchanters)
        {
            var arr = new string[myEnchanters.Count+2];
            for (int i = 0; i < myEnchanters.Count; i++)
                arr[i + 2] = myEnchanters[i].Name;

            arr[0] = "Type";
            arr[1] = "Name";
            
            this.MyColumns = arr;
        }

		// Note we We only build the visible rows, only the backend has the full tree information. 
		// The treeview only creates info for the row list.
		protected override IList<TreeViewItem> BuildRows(TreeViewItem root)
		{
			var rows = base.BuildRows (root);
			SortIfNeeded (root, rows);
			return rows;
		}

		void OnSortingChanged (MultiColumnHeader multiColumnHeader)
		{
			SortIfNeeded (rootItem, GetRows());
		}

		void SortIfNeeded (TreeViewItem root, IList<TreeViewItem> rows)
		{
			if (rows.Count <= 1)
				return;
			
			if (multiColumnHeader.sortedColumnIndex == -1)
			{
				return; // No column to sort for (just use the order the data are in)
			}
			
			// Sort the roots of the existing tree items
			SortByMultipleColumns ();
			TreeToList(root, rows);
			Repaint();
		}

        SortOption GetMySortOption(int columnIndex)
        {
            if (columnIndex < 2)
                return SortOption.Name;
            else
                return SortOption.MyValue;
        }

		void SortByMultipleColumns ()
		{
			var sortedColumns = multiColumnHeader.state.sortedColumns;

			if (sortedColumns.Length == 0)
				return;

			var myTypes = rootItem.children.Cast<TreeViewItem<MyTreeElement> >();
			var orderedQuery = InitialOrder (myTypes, sortedColumns);
			for (int i=1; i<sortedColumns.Length; i++)
			{
                //SortOption sortOption = m_SortOptions[sortedColumns[i]];
                SortOption sortOption = GetMySortOption(sortedColumns[i]);
				bool ascending = multiColumnHeader.IsSortedAscending(sortedColumns[i]);

				switch (sortOption)
				{
					case SortOption.Name:
						orderedQuery = orderedQuery.ThenBy(l => l.data.name, ascending);
						break;
                    case SortOption.MyValue:
                        orderedQuery = orderedQuery.ThenBy(l => l.data.myValues[i-2] ? 1 : 0, ascending);
                        break;
                        /*case SortOption.Value1:
                            orderedQuery = orderedQuery.ThenBy(l => l.data.floatValue1, ascending);
                            break;
                        case SortOption.Value2:
                            orderedQuery = orderedQuery.ThenBy(l => l.data.floatValue2, ascending);
                            break;
                        case SortOption.Value3:
                            orderedQuery = orderedQuery.ThenBy(l => l.data.floatValue3, ascending);
                            break;*/
                }
			}

			rootItem.children = orderedQuery.Cast<TreeViewItem> ().ToList ();
		}

		IOrderedEnumerable<TreeViewItem<MyTreeElement>> InitialOrder(IEnumerable<TreeViewItem<MyTreeElement>> myTypes, int[] history)
		{
			//SortOption sortOption = m_SortOptions[history[0]];
			SortOption sortOption = GetMySortOption(history[0]);
			bool ascending = multiColumnHeader.IsSortedAscending(history[0]);
			switch (sortOption)
			{
				case SortOption.Name:
					return myTypes.Order(l => l.data.name, ascending);
                /*case SortOption.Value1:
					return myTypes.Order(l => l.data.floatValue1, ascending);
				case SortOption.Value2:
					return myTypes.Order(l => l.data.floatValue2, ascending);
				case SortOption.Value3:
					return myTypes.Order(l => l.data.floatValue3, ascending);*/
                case SortOption.MyValue:
                    return myTypes.Order(l => l.data.myValues[history[0]-2]?1:0, ascending);
                default:
					//**--Assert.IsTrue(false, "Unhandled enum");
					break;
			}

			// default
			return myTypes.Order(l => l.data.name, ascending);
		}

        /*
		int GetIcon1Index(TreeViewItem<MyTreeElement> item)
		{
			//return (int)(Mathf.Min(0.99f, item.data.floatValue1) * s_TestIcons.Length);
			return (int)(1 * s_TestIcons.Length);
		}

		int GetIcon2Index (TreeViewItem<MyTreeElement> item)
		{
			return Mathf.Min(item.data.text.Length, s_TestIcons.Length-1);
		}
        */

		protected override void RowGUI (RowGUIArgs args)
		{
			var item = (TreeViewItem<MyTreeElement>) args.item;

			for (int i = 0; i < args.GetNumVisibleColumns (); ++i)
			{
				CellGUI(args.GetCellRect(i), item, MyColumns[args.GetColumn(i)], i, ref args);
			}
		}

        static void MyNameCheckboxRecursive(MyTreeElement node, bool toggle)
        {
            if (node.enabled != toggle)
            {
                node.enabled = toggle;

                for (int i = 0; i < node.myValues.Length; i++)
                {
                    node.myValues[i] = toggle;
                }
            }

            if (node.type != MyTreeElement.TypeDocument)
            {
                if (node.children != null)
                foreach(var child in node.children)
                {
                    MyNameCheckboxRecursive((MyTreeElement)child, toggle);
                }
            }
        }

        static void MyDefaultCheckboxRecursive(MyTreeElement node, int index, bool toggle)
        {
            if (node.myValues[index] != toggle)
            {
                node.myValues[index] = toggle;

                if (toggle && !node.enabled)
                    node.enabled = true;
                if (!toggle && node.enabled)
                {
                    var allFalse = true;
                    for (int i = 0; i < node.myValues.Length; i++)
                    {
                        if (node.myValues[i])
                        {
                            allFalse = false;
                            break;
                        }
                    }
                    if (allFalse)
                        node.enabled = false;
                }
            }

            if (node.type != MyTreeElement.TypeDocument)
            {
                foreach (var child in node.children)
                {
                    MyDefaultCheckboxRecursive((MyTreeElement)child, index, toggle);
                }
            }
        }

        static void MyNameCheckboxRecursiveUp(MyTreeElement node)
        {
            if (node.parent == null) return;
            var parent = (MyTreeElement)node.parent;

            if (node.enabled)
            {
                parent.enabled = true;
                {
                    for (int i = 0; i < node.myValues.Length; i++)
                    {
                        parent.myValues[i] = true;
                    }
                }
                MyNameCheckboxRecursiveUp(parent);
            }
            else
            {
                var all = true;
                foreach(var sibling in parent.children)
                {
                    if(((MyTreeElement)sibling).enabled)
                    {
                        all = false;
                        break;
                    }
                }
                if (all)
                {
                    parent.enabled = false;
                    {
                        for (int i = 0; i < node.myValues.Length; i++)
                        {
                            parent.myValues[i] = false;
                        }
                    }
                    MyNameCheckboxRecursiveUp(parent);
                }
            }
        }

        static void MyDefaultCheckboxRecursiveUp(MyTreeElement node, int index)
        {
            if (node.parent == null) return;
            var parent = (MyTreeElement)node.parent;

            if (node.myValues[index])
            {
                parent.myValues[index] = true;
                if (!parent.enabled) parent.enabled = true;
                MyDefaultCheckboxRecursiveUp(parent, index);
            }
            else
            {
                var all = true;
                foreach (var sibling in parent.children)
                {
                    if (((MyTreeElement)sibling).myValues[index])
                    {
                        all = false;
                        break;
                    }
                }
                if (all)
                {
                    parent.myValues[index] = false;

                    {
                        var all2 = true;
                        for (int i = 0; i < parent.myValues.Length; i++)
                            if (parent.myValues[i]) all2 = false;
                        if (all2) parent.enabled = false;
                    }

                    MyDefaultCheckboxRecursiveUp(parent, index);
                }
            }
        }


        void CellGUI (Rect cellRect, TreeViewItem<MyTreeElement> item, string column, int columnIndex, ref RowGUIArgs args)
		{
			// Center cell rect vertically (makes it easier to place controls, icons etc in the cells)
			CenterRectUsingSingleLineHeight(ref cellRect);

			switch (column)
			{
                /*
				case "Icon1":
					{
						GUI.DrawTexture(cellRect, s_TestIcons[GetIcon1Index(item)], ScaleMode.ScaleToFit);
					}
					break;
				case "Icon2":
					{
						GUI.DrawTexture(cellRect, s_TestIcons[GetIcon2Index(item)], ScaleMode.ScaleToFit);
					}
					break;
                    */

                    // my case
                case "Type":
                    {
                        if (item.data.type == MyTreeElement.TypeDocument ||
                            item.data.type == MyTreeElement.TypeRoot)
                            GUI.DrawTexture(cellRect, iconTextureOfCSharp, ScaleMode.ScaleToFit);
                        else if (item.data.type == MyTreeElement.TypeFolder)
                            GUI.DrawTexture(cellRect, iconTextureOfFolder, ScaleMode.ScaleToFit);
                        else if (item.data.type == MyTreeElement.TypeProject)
                            GUI.DrawTexture(cellRect, iconTextureOfProject, ScaleMode.ScaleToFit);
                    }
                    break;

                case "Name":
					{
						// Do toggle
						Rect toggleRect = cellRect;
						toggleRect.x += GetContentIndent(item);
						toggleRect.width = kToggleWidth;
						if (toggleRect.xMax < cellRect.xMax)
                        {
							var toggle = EditorGUI.Toggle(toggleRect, item.data.enabled); // hide when outside cell rect
                            if (item.data.enabled != toggle)
                            {
                                item.data.enabled = toggle;

                                for (int i = 0; i < item.data.myValues.Length; i++)
                                {
                                    item.data.myValues[i] = toggle;
                                }

                                MyNameCheckboxRecursive(item.data, item.data.enabled);
                                MyNameCheckboxRecursiveUp(item.data);
                            }
                        }

                        // Default icon and label
                        args.rowRect = cellRect;
						base.RowGUI(args);
					}
					break;

                default:
                    {
                        if (columnIndex < 2) return;

                        if (showControls)
                        {
                            cellRect.xMin += 5f; // When showing controls make some extra spacing

                            var toggle = EditorGUI.Toggle(cellRect, item.data.myValues[columnIndex - 2]);
                            if (item.data.myValues[columnIndex - 2] != toggle)
                            {
                                item.data.myValues[columnIndex - 2] = toggle;

                                if (toggle && !item.data.enabled)
                                    item.data.enabled = true;
                                if (!toggle && item.data.enabled)
                                {
                                    var allFalse = true;
                                    for (int i = 0; i < item.data.myValues.Length; i++)
                                    {
                                        if (item.data.myValues[i])
                                        {
                                            allFalse = false;
                                            break;
                                        }
                                    }
                                    if (allFalse)
                                        item.data.enabled = false;
                                }

                                MyDefaultCheckboxRecursive(item.data, columnIndex - 2, toggle);
                                MyDefaultCheckboxRecursiveUp(item.data, columnIndex - 2);
                            }

                            /*
                            if (column == "Value1")
                                item.data.floatValue1 = EditorGUI.Slider(cellRect, GUIContent.none, item.data.floatValue1, 0f, 1f);
                            if (column == "Value2")
                                item.data.material = (Material)EditorGUI.ObjectField(cellRect, GUIContent.none, item.data.material, typeof(Material), false);
                            if (column == "Value3")
                                item.data.text = GUI.TextField(cellRect, item.data.text);*/
                        }
                        else
                        {
                            string value = "Missing";
                            /*if (column == "Value1")
                                value = item.data.floatValue1.ToString("f5");
                            if (column == "Value2")
                                value = item.data.floatValue2.ToString("f5");
                            if (column == "Value3")
                                value = item.data.floatValue3.ToString("f5");*/

                            

                            DefaultGUI.LabelRightAligned(cellRect, value, args.selected, args.focused);
                        }
                    }
                    break;

                    /*
				case "Value1":
				case "Value2":
				case "Value3":
					{
						if (showControls)
						{
							cellRect.xMin += 5f; // When showing controls make some extra spacing

							if (column == "Value1")
								item.data.floatValue1 = EditorGUI.Slider(cellRect, GUIContent.none, item.data.floatValue1, 0f, 1f);
							if (column == "Value2")
								item.data.material = (Material)EditorGUI.ObjectField(cellRect, GUIContent.none, item.data.material, typeof(Material), false);
							if (column == "Value3")
								item.data.text = GUI.TextField(cellRect, item.data.text);
						}
						else
						{
							string value = "Missing";
							if (column == "Value1")
								value = item.data.floatValue1.ToString("f5");
							if (column == "Value2")
								value = item.data.floatValue2.ToString("f5");
							if (column == "Value3")
								value = item.data.floatValue3.ToString("f5");

							DefaultGUI.LabelRightAligned(cellRect, value, args.selected, args.focused);
						}
					}
					break;*/
            }
		}

		// Rename
		//--------

		protected override bool CanRename(TreeViewItem item)
		{
			// Only allow rename if we can show the rename overlay with a certain width (label might be clipped by other columns)
			Rect renameRect = GetRenameRect (treeViewRect, 0, item);
			return renameRect.width > 30;
		}

		protected override void RenameEnded(RenameEndedArgs args)
		{
			// Set the backend name and reload the tree to reflect the new model
			if (args.acceptedRename)
			{
				var element = treeModel.Find(args.itemID);
				element.name = args.newName;
				Reload();
			}
		}

		protected override Rect GetRenameRect (Rect rowRect, int row, TreeViewItem item)
		{
			Rect cellRect = GetCellRectForTreeFoldouts (rowRect);
			CenterRectUsingSingleLineHeight(ref cellRect);
			return base.GetRenameRect (cellRect, row, item);
		}

		// Misc
		//--------

		protected override bool CanMultiSelect (TreeViewItem item)
		{
			return true;
		}

        public static MultiColumnHeaderState CreateDefaultMultiColumnHeaderState(float treeViewWidth, List<MerryYellow.CodeEnchanter.Common.MyEnchanter> myEnchanters)
        {

            var columns = new MultiColumnHeaderState.Column[myEnchanters.Count + 2];

            columns[0] =
            new MultiColumnHeaderState.Column
                {
                    headerContent = new GUIContent(EditorGUIUtility.FindTexture("FilterByType"), "Sed hendrerit mi enim, eu iaculis leo tincidunt at."),
                    contextMenuText = "Type",
                    headerTextAlignment = TextAlignment.Center,
                    sortedAscending = true,
                    sortingArrowAlignment = TextAlignment.Right,
                    width = 30,
                    minWidth = 30,
                    maxWidth = 60,
                    autoResize = false,
                    allowToggleVisibility = true
                };
            columns[1] =
                new MultiColumnHeaderState.Column
                {
                    headerContent = new GUIContent("Name"),
                    headerTextAlignment = TextAlignment.Left,
                    sortedAscending = true,
                    sortingArrowAlignment = TextAlignment.Center,
                    width = 400,
                    minWidth = 100,
                    autoResize = false,
                    allowToggleVisibility = false
                };

            for (int i = 0; i < myEnchanters.Count; i++)
            {
                columns[i+2] = new MultiColumnHeaderState.Column
                {
                    headerContent = new GUIContent(myEnchanters[i].Name, myEnchanters[i].Tooltip),
                    headerTextAlignment = TextAlignment.Left,
                    sortedAscending = true,
                    sortingArrowAlignment = TextAlignment.Center,
                    width = 100,
                    minWidth = 50,
                    autoResize = false,
                    allowToggleVisibility = false
                };
            }
           

            //Assert.AreEqual(columns.Length, MyColumns.Length, "Number of columns should match number of enum values: You probably forgot to update one of them.");

            var state = new MultiColumnHeaderState(columns);
            return state;
        }
    

        public static MultiColumnHeaderState CreateDefaultMultiColumnHeaderState_OLD(float treeViewWidth)
		{
			var columns = new[] 
			{
				new MultiColumnHeaderState.Column 
				{
					headerContent = new GUIContent(EditorGUIUtility.FindTexture("FilterByLabel"), "Lorem ipsum dolor sit amet, consectetur adipiscing elit. "),
					contextMenuText = "Asset",
					headerTextAlignment = TextAlignment.Center,
					sortedAscending = true,
					sortingArrowAlignment = TextAlignment.Right,
					width = 30, 
					minWidth = 30,
					maxWidth = 60,
					autoResize = false,
					allowToggleVisibility = true
				},
				new MultiColumnHeaderState.Column 
				{
					headerContent = new GUIContent(EditorGUIUtility.FindTexture("FilterByType"), "Sed hendrerit mi enim, eu iaculis leo tincidunt at."),
					contextMenuText = "Type",
					headerTextAlignment = TextAlignment.Center,
					sortedAscending = true,
					sortingArrowAlignment = TextAlignment.Right,
					width = 30, 
					minWidth = 30,
					maxWidth = 60,
					autoResize = false,
					allowToggleVisibility = true
				},
				new MultiColumnHeaderState.Column 
				{
					headerContent = new GUIContent("Name"),
					headerTextAlignment = TextAlignment.Left,
					sortedAscending = true,
					sortingArrowAlignment = TextAlignment.Center,
					width = 150, 
					minWidth = 60,
					autoResize = false,
					allowToggleVisibility = false
				},
				new MultiColumnHeaderState.Column 
				{
					headerContent = new GUIContent("Multiplier", "In sed porta ante. Nunc et nulla mi."),
					headerTextAlignment = TextAlignment.Right,
					sortedAscending = true,
					sortingArrowAlignment = TextAlignment.Left,
					width = 110,
					minWidth = 60,
					autoResize = true
				},
				new MultiColumnHeaderState.Column 
				{
					headerContent = new GUIContent("Material", "Maecenas congue non tortor eget vulputate."),
					headerTextAlignment = TextAlignment.Right,
					sortedAscending = true,
					sortingArrowAlignment = TextAlignment.Left,
					width = 95,
					minWidth = 60,
					autoResize = true,
					allowToggleVisibility = true
				},
				new MultiColumnHeaderState.Column 
				{
					headerContent = new GUIContent("Note", "Nam at tellus ultricies ligula vehicula ornare sit amet quis metus."),
					headerTextAlignment = TextAlignment.Right,
					sortedAscending = true,
					sortingArrowAlignment = TextAlignment.Left,
					width = 70,
					minWidth = 60,
					autoResize = true
				}
			};

			//Assert.AreEqual(columns.Length, MyColumns.Length, "Number of columns should match number of enum values: You probably forgot to update one of them.");

			var state =  new MultiColumnHeaderState(columns);
			return state;
		}
	}

	static class MyExtensionMethods
	{
		public static IOrderedEnumerable<T> Order<T, TKey>(this IEnumerable<T> source, Func<T, TKey> selector, bool ascending)
		{
			if (ascending)
			{
				return source.OrderBy(selector);
			}
			else
			{
				return source.OrderByDescending(selector);
			}
		}

		public static IOrderedEnumerable<T> ThenBy<T, TKey>(this IOrderedEnumerable<T> source, Func<T, TKey> selector, bool ascending)
		{
			if (ascending)
			{
				return source.ThenBy(selector);
			}
			else
			{
				return source.ThenByDescending(selector);
			}
		}
	}
}


#endif // UNITY_5_6_OR_NEWER
#endif // UNITY_EDITOR