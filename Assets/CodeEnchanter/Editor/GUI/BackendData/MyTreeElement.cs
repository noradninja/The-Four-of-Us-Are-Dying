#if UNITY_EDITOR


using System;


//namespace UnityEditor.TreeViewExamples
namespace MerryYellow.CodeEnchanter.UnityEnchanterGUI
{

	[Serializable]
	internal class MyTreeElement : TreeElement
	{
        public const string TypeRoot = "root";
        public const string TypeProject = "proj";
        public const string TypeFolder = "fold";
        public const string TypeDocument = "doc";

        //public float floatValue1, floatValue2, floatValue3;
        //public Material material;
        public string folders = "";
        public string foldersWithProject = "";
        public string type = "";
		public string text = "";
        public bool enabled;

        public string myDocId;
        public bool[] myValues;

        public MerryYellow.CodeEnchanter.Common.MyDocument document;

        public MyTreeElement(string name, int depth, int id, string myDocId, int columnCount, string type, string folders, string projectName)
            : base(name, depth, id)
        {
            //floatValue1 = Random.value;
            //floatValue2 = Random.value;
            //floatValue3 = Random.value;
            enabled = true;
            myValues = new bool[columnCount];
            for (int i = 0; i < myValues.Length; i++)
                myValues[i] = true;

            this.myDocId = myDocId;
            this.type = type;
            this.folders = folders;
            this.foldersWithProject = projectName + "\\" + folders;
        }
	}
}


#endif // UNITY_EDITOR