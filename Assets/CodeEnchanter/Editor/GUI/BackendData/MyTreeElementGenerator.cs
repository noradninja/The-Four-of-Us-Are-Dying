#if UNITY_EDITOR


using System.Collections.Generic;
using Random = UnityEngine.Random;


//namespace UnityEditor.TreeViewExamples
namespace MerryYellow.CodeEnchanter.UnityEnchanterGUI
{

    static class MyTreeElementGenerator
	{
		static int IDCounter;
		static int minNumChildren = 5;
		static int maxNumChildren = 10;
		static float probabilityOfBeingLeaf = 0.5f;

        static int GetInsertionIndex(List<MyTreeElement> treeElements, MerryYellow.CodeEnchanter.Common.MyDocument document, int enchanterCount)
        {
            var folders = document.Folders.Split('\\');

            if (folders.Length == 0)
                return treeElements.Count;

            var lastValidIndex = treeElements.Count - 1;

            for (int i = 0; i < folders.Length; i++)
            {
                var topFolders = document.ProjectName + "\\" + string.Join("\\", folders, 0, i);
                var curFolders = document.ProjectName + "\\" + string.Join("\\", folders, 0, i + 1);
                var index = treeElements.FindLastIndex(e => e.folders != null && e.foldersWithProject.StartsWith(curFolders));

                if (index >= 0)
                    lastValidIndex = index;
                else
                {
                    while (lastValidIndex > 0 && treeElements[lastValidIndex].type == MyTreeElement.TypeDocument &&
                        treeElements[lastValidIndex].foldersWithProject == topFolders)
                        lastValidIndex--;

                    var folderNode = new MyTreeElement(folders[i], 1 + i, ++IDCounter, null, enchanterCount, MyTreeElement.TypeFolder, curFolders, document.ProjectName);
                    treeElements.Insert(lastValidIndex + 1, folderNode);
                    lastValidIndex++;
                }
            }

            return lastValidIndex;
        }

        
        public static List<MyTreeElement> GenerateTree(MerryYellow.CodeEnchanter.Common.MySolution solution, int enchanterCount)
        {
            IDCounter = 0;
            var treeElements = new List<MyTreeElement>();

            var root = new MyTreeElement(solution.path, -1, IDCounter, null, enchanterCount, MyTreeElement.TypeRoot, null, string.Empty);
            treeElements.Add(root);

            foreach(var project in solution.Projects)
            {
                var projectNode = new MyTreeElement(project.Name, 0, ++IDCounter, null, enchanterCount, MyTreeElement.TypeProject, project.Folders, string.Empty);
                treeElements.Add(projectNode);

                foreach (var document in project.Documents)
                {
                    
                    var folders = document.Folders.Split('\\');

                    var index = GetInsertionIndex(treeElements, document, enchanterCount);

                    var documentNode = new MyTreeElement(document.Name, 1 + folders.Length, ++IDCounter, document.Name, enchanterCount, MyTreeElement.TypeDocument, document.Folders, document.ProjectName);
                    documentNode.document = document;
                    //treeElements.Add(documentNode);

                    // my uncheck
                    for (int i = 0; i < documentNode.myValues.Length; i++)
                    {
                        if (documentNode.document.Enchanters[i].Count < 0)
                        {
                            documentNode.myValues[i] = false;
                        }
                    }

                    treeElements.Insert(index + 1, documentNode);
                }
            }

            return treeElements;
        }


        public static List<MyTreeElement> GenerateRandomTree(int numTotalElements, int enchanterCount)
		{
			int numRootChildren = numTotalElements / 4;
			IDCounter = 0;
			var treeElements = new List<MyTreeElement>(numTotalElements);

			var root = new MyTreeElement("Root", -1, IDCounter, null, enchanterCount, MyTreeElement.TypeRoot, null, string.Empty);
			treeElements.Add(root);
			for (int i = 0; i < numRootChildren; ++i)
			{
				int allowedDepth = 6;
				AddChildrenRecursive(root, Random.Range(minNumChildren, maxNumChildren), true, numTotalElements, ref allowedDepth, treeElements, enchanterCount);
			}

			return treeElements;
		}
		static void AddChildrenRecursive(TreeElement element, int numChildren, bool force, int numTotalElements, ref int allowedDepth, List<MyTreeElement> treeElements, int enchanterCount)
		{
			if (element.depth >= allowedDepth)
			{
				allowedDepth = 0;
				return;
			}

			for (int i = 0; i < numChildren; ++i)
			{
				if (IDCounter > numTotalElements)
					return;

				var child = new MyTreeElement("Element " + IDCounter, element.depth + 1, ++IDCounter, null, enchanterCount, MyTreeElement.TypeDocument, null, string.Empty);
				treeElements.Add(child);

				if (!force && Random.value < probabilityOfBeingLeaf)
					continue;

				AddChildrenRecursive(child, Random.Range(minNumChildren, maxNumChildren), false, numTotalElements, ref allowedDepth, treeElements, enchanterCount);
			}
		}
	}
}


#endif // UNITY_EDITOR