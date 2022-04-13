#if UNITY_EDITOR

#define MY_CE_TREEVIEW_SUPPORT
#define MY_CE_WINDOW_NAMESPACE_SUPPORT


using System;
using System.Collections.Generic;
using UnityEngine;
using UnityEditor;
using MerryYellow.CodeEnchanter.Common;
using SimpleWindow = MerryYellow.CodeEnchanter.UnityEnchanterGUI.SimpleWindow;
using System.Linq;
using System.IO;

namespace MerryYellow.CodeEnchanter.UnityEnchanterEditor
{

    public class EnchanterEditor
    {
        const int magicUINumber = -5;

        public enum States
        {
            Loading,
            LoadingPart2,
            Configuration,
            Enchanting,
            EnchantingPaused,
            Result,
            Error,
            FailNoFileSelected,
            UIError,
        }

        public States state = States.Loading;

        static String ProjectPath
        {
            get
            {
                var assetPath = Application.dataPath;
                return assetPath.Substring(0, assetPath.Length - 6);
            }
        }

        static string _enchanterPath; // need to cache because Application.dataPath can only be called from main thread
        static String EnchanterPath
        {
            get
            {
                if (_enchanterPath == null)
                {
                    var assetPath = Application.dataPath;
                    var directories = System.IO.Directory.GetDirectories(assetPath, "CodeEnchanter", System.IO.SearchOption.AllDirectories);
                    if (directories.Length == 0)
                        throw new Exception("\"CodeEnchanter\" directory couldn't be found. Please do not rename it. It could be placed in a subfolder.");
                    var path = directories[0];
                    path = path.Replace('\\', '/');
                    _enchanterPath = path + "/";
                }
                return _enchanterPath;
            }
        }

        static bool Is64Bit
        {
            get
            {
                return IntPtr.Size == 8;
            }
        }

        static String GetSolution()
        {
            var dirInfo = new System.IO.DirectoryInfo(ProjectPath);
            var files = dirInfo.GetFiles("*.sln", System.IO.SearchOption.TopDirectoryOnly);
            // sort by write time descending
            Array.Sort(files, delegate (System.IO.FileInfo fi1, System.IO.FileInfo fi2)
            { return fi2.LastWriteTime.CompareTo(fi1.LastWriteTime); });

            if (files.Length > 0)
                return files[0].FullName;
            else
            {
                files = dirInfo.GetFiles("*.sln", System.IO.SearchOption.AllDirectories);
                // sort by write time descending
                Array.Sort(files, delegate (System.IO.FileInfo fi1, System.IO.FileInfo fi2)
                { return fi2.LastWriteTime.CompareTo(fi1.LastWriteTime); });

                if (files.Length > 0)
                    return files[0].FullName;
                else
                    return null;
            }
        }


        public MySolution solution;
        public List<MyEnchanter> enchanters;
#if MY_CE_TREEVIEW_SUPPORT
        // storing model to keep it between simple and advanced window switches
        internal UnityEnchanterGUI.TreeModel<UnityEnchanterGUI.MyTreeElement> treeModel;

        UnityEnchanterGUI.MultiColumnWindow advancedWindow;
#endif // MY_CE_TREEVIEW_SUPPORT

        SimpleWindow simpleWindow;

        public IterateData iterateData;

        bool IterateEnchantAux(IterateData data)
        {
            //for (; indexOfMyDocuments < myDocuments.Count; indexOfMyDocuments++)
            //var myDocument = myDocuments[0];
            {
                //try
                {

                    var myDocument = data.myDocuments[data.indexOfMyDocuments];

#if NET_4_6
                    var output = Core.Executable.Enchant(myDocument);
#else
                    var output = string.Empty;
#endif

                    if (ProcessError(output, myDocument.Name)) return true;

                }
                /*catch(System.IO.IOException ioException)
                {
                    var myDocument = myDocuments[indexOfMyDocuments];
                    Debug.Log("error in doc " + myDocument.Name);

                    //process.Kill();
                    process.WaitForExit();
                    process.Start();
                }*/
            }

            return false;
        }

        int iterateCounter = magicUINumber;
        public bool IterateEnchant()
        {
            if (state != States.Enchanting) return false;

            if (iterateCounter < 0) { iterateCounter++; return true; }

            var data = iterateData;

            //var process = data.process;
            //var input = data.input;
            //var output = data.output;
            //var indexOfMyDocuments = data.indexOfMyDocuments;
            //var myDocuments = data.myDocuments;

            /*var hasError =*/
            IterateEnchantAux(data);
            /*
            if (hasError)
            {
                var output = IOI.Read(data.output, data.input);
                if (output != CommonStrings.Terminate)
                    output = IOI.Read(data.output, data.input);
                if (output != CommonStrings.Terminate)
                    output = IOI.Read(data.output, data.input);
                if (output != CommonStrings.Terminate)
                    output = IOI.Read(data.output, data.input);

                ELogger.Log(ELogger.Level.ExtraDetail, "Error last output " + output);
            }*/

            //input.WriteLine(CommonStrings.EndEnchantString);

            iterateCounter = magicUINumber;
            data.indexOfMyDocuments++;

            if (data.indexOfMyDocuments == data.myDocuments.Count)
            {
                state = States.Result;

                //**--close process, join thread
            }

            return true;
        }

        public void OnResult()
        {
            ApplyChanges();

            var total = iterateData.GetProcessedEnchantmentCount;
            string plural = total > 1 ? "s" : "";
            ELogger.Log(ELogger.Level.Standard, "Enchanter completed.");
            ELogger.Log(ELogger.Level.Standard, total + " enchantment" + plural + " applied.");
        }

        void ApplyChanges()
        {
            foreach (var doc in iterateData.myDocuments)
            {
                ELogger.Log(ELogger.Level.ExtraDetail, $"Applying changes for '{doc.Name}' at '{doc.Path}' and '{doc.TempFile}'");
                if (doc != null && !string.IsNullOrEmpty(doc.TempFile) && !string.IsNullOrEmpty(doc.Path))
                {
                    try
                    {
                        File.Copy(doc.TempFile, doc.Path, true);
                    }
                    catch (Exception ex)
                    {
                        ELogger.Log(ELogger.Level.Error, $"Couldn't apply changes for '{doc.Name}' at '{doc.Path}' and '{doc.TempFile}'");
                        ELogger.Log(ELogger.Level.Error, ex.ToString());
                    }
                    finally
                    {
                    }
                }
            }
        }

        public void IterateEnchantForced()
        {
            iterateCounter = 0;
            IterateEnchant();
        }

        bool yo()
        {
            //var thread = StartThread(Common.CommonStrings.InitializeArgument);

            string output;
            MyEnchanterList enchanterList;

#if NET_4_6
            try
            {
                output = Core.Executable.GetEnchanters(out enchanterList);
            }
            catch (TypeLoadException tle)
            {
                enchanterList = null;
                output = CommonStrings.ErrorLoadingRoslynBinaries;
                ELogger.Log(ELogger.Level.Error, "TLE: " + tle.ToString());
            }
#else
            output = string.Empty;
            enchanterList = null;
#endif

            if (ProcessError(output))
                return false;

            enchanters = enchanterList.Enchanters;

            return true;
        }


        static void GenerateSolutionFile()
        {
            ELogger.Log(ELogger.Level.Standard, "Generating solution file...");
            EditorApplication.ExecuteMenuItem("Assets/Open C# Project");
        }

        // if version >= 5.5
        static bool IsUnityVersion5Dot5OrHigher
        {
            get
            {
                var version = Application.unityVersion;
                if (version.StartsWith("1.")
                    || version.StartsWith("2.")
                    || version.StartsWith("3.")
                    || version.StartsWith("4.")
                    || version.StartsWith("5.0")
                    || version.StartsWith("5.1")
                    || version.StartsWith("5.2")
                    || version.StartsWith("5.3")
                    || version.StartsWith("5.4"))
                    return false;
                else
                    return true;
            }
        }

        static bool IsUnityVersionEqualsOrHigherThan_2018_3
        {
            get
            {
#if UNITY_2018_3_OR_NEWER
                return true;
#else
                return false;
#endif
            }
        }

        // if version >= 3.0
        static bool IsUnityVersion3rHigher
        {
            get
            {
                var version = Application.unityVersion;
                if (version.StartsWith("1.")
                    || version.StartsWith("2."))
                    return false;
                else
                    return true;
            }
        }


        // if version >= 5.6
        static bool IsUnityVersion5Dot6OrHigher
        {
            get
            {
                var version = Application.unityVersion;
                if (version.StartsWith("1.")
                    || version.StartsWith("2.")
                    || version.StartsWith("3.")
                    || version.StartsWith("4.")
                    || version.StartsWith("5.0")
                    || version.StartsWith("5.1")
                    || version.StartsWith("5.2")
                    || version.StartsWith("5.3")
                    || version.StartsWith("5.4")
                    || version.StartsWith("5.5"))
                    return false;
                else
                    return true;
            }
        }

        static void InitializeMyLogger()
        {
            if (EnchanterOptions.IsLoggingToFile)
                System.IO.File.WriteAllText(EnchanterPath + EnchanterOptions.LogFileName, string.Empty); // clear file
            /*else
                //System.IO.File.r
                ;//**--remove file
                */
        }

        static void InitializeOptions()
        {
            try
            {
                var optionsText = System.IO.File.ReadAllText(EnchanterPath + "EnchanterOptions.txt");
                var options = jsonDeserialize<EnchanterOptions>(optionsText);
                Common.EnchanterOptions.Instance = options;

                InitializeMyLogger();

                ELogger.Log(ELogger.Level.ExtraDetail, "Options initialized (1)");
            }
            catch (Exception e)
            {
                InitializeMyLogger();

                ELogger.Log(ELogger.Level.Warning, "Options couldn't be initialized");
                ELogger.Log(ELogger.Level.Warning, e.ToString());
            }
        }

        [MenuItem("Tools/Code Enchanter")]
        private static void NewMenuOption()
        {
            if (!Application.isEditor)
            {
                Debug.LogError("Code Enchanter should only be used in the editor.");
                return;
            }
            if (!IsUnityVersionEqualsOrHigherThan_2018_3)
            {
                Debug.LogError("Unity version 2018.3 or higher is supported. Code Enchanter legacy version supports older Unity versions. Please visit website to download the legacy version https://codeenchanter.netlify.com");
                return;
            }
#if !NET_4_6
            Debug.LogError("PlayerSettings->OtherSettings->Configuration->ScriptingRuntimeVersion must be .NET 4.X Equivalent. You can revert it to 3.5 after using the Code Enchanter, effects will remain intact.");
            return;
#endif

            var ee = new EnchanterEditor();

            InitializeOptions();

            // open simple window
            AdvancedWindow_MySimpleEvent(ee);
        }

        int initCounter = magicUINumber;
        public bool Initialize()
        {
            if (initCounter < 0) { initCounter++; return true; }
            if (initCounter > 0) return false;
            initCounter++;

            if (state == States.Loading)
            {
                string dotNetFWVersion = "-";
                string vcppVersion = "-";
                ELogger.Log(ELogger.Level.Document, "Versions:" +
                    " CodeEnchanter:" + CommonStrings.CodeEnchanterVersion +
                    " Unity:" + Application.unityVersion +
                    " dotNet:" + Application.version +
                    " dotNetFW:" + dotNetFWVersion +
                    " vCpp:" + vcppVersion +
                    " OS:" + Environment.OSVersion.ToString() +
                    " 64Bit:" + Is64Bit
                    );
                ELogger.Log(ELogger.Level.Standard, "Initializing Enchanter...");


                if (!this.yo())
                    return true;

                initCounter = magicUINumber;
                state = States.LoadingPart2;
            }
            else if (state == States.LoadingPart2)
            {
                ELogger.Log(ELogger.Level.Standard, "Getting project details...");
                if (!this.ho())
                    return true;

                this.state = States.Configuration;

                try
                {
                    var enchantmentTypeCount = this.solution.GetSelectedEnchanterCount(this.enchanters);
                    var documentCount = this.solution.GetSelectedDocumentCount();
                    ELogger.Log(ELogger.Level.Document, "Initialized with " + enchantmentTypeCount + " enchantments and " + documentCount + " documents");
                }
                catch (Exception e)
                {
                    ELogger.Log(ELogger.Level.Warning, "Couldn't log analytics of initialization");
                    ELogger.Log(ELogger.Level.Warning, e.ToString());
                }
            }

            /*
            // Get existing open window or if none, make a new one:
            EnchanterWindow window = (EnchanterWindow)EditorWindow.GetWindow(typeof(EnchanterWindow));
            window.Show();
            */

            //this.state = States.Configuration;
            //AdvancedWindow_MySimpleEvent(ew);

            return true;
        }

        private static void SimpleWindow_ToAdvancedWindowEvent(EnchanterEditor ee)
        {
#if MY_CE_TREEVIEW_SUPPORT
            if (ee.simpleWindow != null)
                ee.simpleWindow.Close();
            //ew.advancedWindow.Show();

            var advancedWindow = EditorWindow.GetWindow<UnityEnchanterGUI.MultiColumnWindow>();
            advancedWindow.titleContent = new GUIContent("CodeEnchanter"/*title*/);
            advancedWindow.myEnchanterEditor = ee;
            //advancedWindow.mySolution = ee.solution;
            //advancedWindow.myEnchanters = ee.enchanters;
            advancedWindow.MyEnchantEvent += AdvancedWindow_MyEnchantEvent;
            advancedWindow.MySimpleEvent += AdvancedWindow_MySimpleEvent;
            /*window.Focus();
            window.Repaint();
            return window;*/
            //advancedWindow.Show();
            ee.advancedWindow = advancedWindow;
#else //MY_CE_TREEVIEW_SUPPORT
            Debug.Log("Advanced/Table View is supported on Unity versions 5.6 and higher");
#endif // MY_CE_TREEVIEW_SUPPORT
        }

        private static void AdvancedWindow_MyEnchantEvent(EnchanterEditor ee)
        {
            AdvancedWindow_MySimpleEvent(ee);//enforce to simple window, to be removed later
            SimpleWindow_SimpleEnchantEvent(ee);
        }

        private static void AdvancedWindow_MySimpleEvent(EnchanterEditor ee)
        {
#if MY_CE_TREEVIEW_SUPPORT
            if (ee.advancedWindow != null)
                ee.advancedWindow.Close();
#endif // MY_CE_TREEVIEW_SUPPORT
            //ew.simpleWindow.Show();

            // "Code Enchanter" last letter doesnt fit the tab title space :(
            var simpleWindow = EditorWindow.GetWindow<SimpleWindow>(false, "CodeEnchanter"/*title*/);
            //simpleWindow.titleContent = new GUIContent("CodeEnchanter"/*title*/);
            simpleWindow.enchanterEditor = ee;
            ee.simpleWindow = simpleWindow;
            //simpleWindow.DocumentCount = ew.solution.GetDocumentCount();
            //simpleWindow.EnchantmentTypeCount = ew.enchanters.Count;
            simpleWindow.ToAdvancedWindowEvent += SimpleWindow_ToAdvancedWindowEvent;
            simpleWindow.SimpleEnchantEvent += SimpleWindow_SimpleEnchantEvent;
            simpleWindow.Show();
        }

        static List<MyDocument> Export(MySolution solution)
        {
            List<MyDocument> myDocs = new List<MyDocument>();

            foreach (var project in solution.Projects)
            {
                foreach (var document in project.Documents)
                {
                    var doc = new MyDocument();
                    doc.Name = document.Name;
                    doc.Folders = document.Folders;
                    doc.ProjectName = document.ProjectName;
                    doc.Path = document.Path;

                    foreach (var enchanter in document.Enchanters)
                    {
                        if (enchanter.Count >= 0)
                        {
                            var ench = new MyEnchanter();
                            ench.Name = enchanter.Name;
                            doc.Enchanters.Add(ench);
                        }
                    }

                    if (doc.Enchanters.Count > 0)
                        myDocs.Add(doc);
                }
            }

            return myDocs;
        }

        private static void SimpleWindow_SimpleEnchantEvent(EnchanterEditor ee)
        {
            ELogger.Log(ELogger.Level.Standard, "Starting Enchanter...");


            var docList = Export(ee.solution);
            //var docList = ee.solution.Projects.First().Documents;
            //var docList = ee.solution.Projects.FirstOrDefault(p => p.Documents.Count > 0)?.Documents;
            //var docList = ee.solution.Projects.SelectMany(p => p.Documents).ToList();

            if (docList != null && docList.Count == 0) // no file selected
            {
                ee.state = States.FailNoFileSelected;
                return;
            }

            ee.iterateData = new IterateData();
            //ee.iterateData.process = so_StartProcess();
            //ee.iterateData.input = ee.iterateData.process.StandardInput;
            //ee.iterateData.output = ee.iterateData.process.StandardOutput;
            ee.iterateData.indexOfMyDocuments = 0;
            ee.iterateData.myDocuments = docList;

            ee.state = States.Enchanting;
            //so(docList);
        }

        public static void MyLog(ELogger.Level level, string message)
        {
            if (level == ELogger.Level.Standard)
                Debug.Log(message);
            if (level == ELogger.Level.Error)
                Debug.LogError(message);
            if (level == ELogger.Level.Warning)
                Debug.LogWarning(message);

            if (level == ELogger.Level.Error || level == ELogger.Level.Warning)
                message = level.ToString().ToUpper() + " " + message;

            try
            {
                if (EnchanterOptions.IsLoggingAll ||
                        (EnchanterOptions.IsLoggingToFile &&
                        ((int)ELogger.Level.Standard >= (int)level || level == ELogger.Level.Document))
                    )
                    File.AppendAllText(EnchanterPath + EnchanterOptions.LogFileName, message + Environment.NewLine);
            }
            catch
            {
            }
        }

        static string jsonSerialize(object o)
        {
            //return Newtonsoft.Json.JsonConvert.SerializeObject(o);
            return JsonUtility.ToJson(o);
        }

        static T jsonDeserialize<T>(string s)
        {
            //return Newtonsoft.Json.JsonConvert.DeserializeObject<T>(s);
            return JsonUtility.FromJson<T>(s);
        }

        public string ErrorDetail;
        bool ProcessError(string error, string document = null)
        {
            if (error == CommonStrings.ErrorCompileFail)
            {
                state = States.Error;
                ELogger.Log(ELogger.Level.Error, "Compile failed...");
                ErrorDetail = "Compile failed. Please fix errors in your scripts and try again. ERR:1";
                return true;
            }
            else if (error == CommonStrings.ErrorArgument)
            {
                state = States.Error;
                ELogger.Log(ELogger.Level.Error, "Argument passing error...");
                ErrorDetail = "Unexpected argument error. Please contact support. ERR:2";
                return true;
            }
            else if (error == CommonStrings.ErrorArgument2)
            {
                state = States.Error;
                ELogger.Log(ELogger.Level.Error, "Argument passing error 2...");
                ErrorDetail = "Unexpected argument error 2. Please contact support. ERR:3";
                return true;
            }
            else if (error == CommonStrings.ErrorMSWorkspace)
            {
                state = States.Error;
                ELogger.Log(ELogger.Level.Error, "MS Workspace error...");
                ErrorDetail = "Cannot initialize enchanter. Please install latest Visual Studio. ERR:4";
                return true;
            }

            else if (error == CommonStrings.ErrorGettingEnchanters)
            {
                state = States.Error;
                ELogger.Log(ELogger.Level.Error, "Cannot retrieve enchanters...");
                ErrorDetail = "Cannot initialize enchanter. Please install latest .NET runtime. ERR:5";
                return true;
            }
            else if (error == CommonStrings.ErrorSerializingEnchanters)
            {
                state = States.Error;
                ELogger.Log(ELogger.Level.Error, "Cannot serialize enchanters...");
                ErrorDetail = "Cannot initialize enchanter. Please validate all dll files. ERR:6";
                return true;
            }
            else if (error == CommonStrings.ErrorGettingSolutionDetails)
            {
                state = States.Error;
                ELogger.Log(ELogger.Level.Error, "Cannot retrieve solution...");
                ErrorDetail = "Cannot initialize enchanter. Please contact support. ERR:7";
                return true;
            }
            else if (error == CommonStrings.ErrorSerializingSolutionDetails)
            {
                state = States.Error;
                ELogger.Log(ELogger.Level.Error, "Cannot serialize solution...");
                ErrorDetail = "Cannot initialize enchanter. Please contact support. ERR:8";
                return true;
            }

            else if (error == CommonStrings.ErrorCreatingManager)
            {
                state = States.Error;
                ELogger.Log(ELogger.Level.Error, "Cannot create manager...");
                ErrorDetail = "Cannot initialize manager. Please contact support. ERR:9";
                return true;
            }
            else if (error == CommonStrings.ErrorCreatingEnchanter)
            {
                state = States.Error;
                ELogger.Log(ELogger.Level.Error, "Cannot create enchanter...");
                ErrorDetail = "Cannot initialize enchanter. Please contact support. ERR:10";
                return true;
            }
            else if (error == CommonStrings.ErrorIOIBufferOverflow)
            {
                state = States.Error;
                ELogger.Log(ELogger.Level.Error, "Cannot write output buffer...");
                ErrorDetail = "Cannot execute enchanter. Please contact support. ERR:11";
                return true;
            }
            else if (error == CommonStrings.ErrorStartingDotNet)
            {
                state = States.Error;
                ELogger.Log(ELogger.Level.Error, "Cannot start dotnet...");
                ErrorDetail = "Cannot start dotNet. Please contact support. ERR:12";
                return true;
            }
            else if(error == CommonStrings.ErrorLoadingRoslynBinaries)
            {
                state = States.Error;
                ELogger.Log(ELogger.Level.Error, "Cannot initialize enchanter...");
                ErrorDetail = "Cannot find dependent packages. Try reimporting Code Enchanter. ERR:13";
                return true;
            }


            // Document specific errors
            else if (error == CommonStrings.ErrorReadingInput)
            {
                ELogger.Log(ELogger.Level.Warning, "Error reading script info. Skipping " + document);
                return true;
            }
            else if (error == CommonStrings.ErrorDeserializingDocument)
            {
                ELogger.Log(ELogger.Level.Warning, "Error deserializing script info. Skipping " + document);
                return true;
            }
            else if (error == CommonStrings.ErrorEnchantingDocument)
            {
                ELogger.Log(ELogger.Level.Warning, "Error enchanting script. Skipping " + document);
                return true;
            }
            else if (error == CommonStrings.ErrorWritingDocument)
            {
                ELogger.Log(ELogger.Level.Warning, "Error writing script info. Skipping " + document);
                return true;
            }


            return false;
        }


        string ho_ExecuteProcess(out MySolution solution)
        {
            var solutionPath = GetSolution();
            var enchanterPath = EnchanterPath;
            var allowUnsafe = PlayerSettings.allowUnsafeCode;

#if NET_4_6
            return Core.Executable.GetSolutionDetails(solutionPath, enchanterPath, allowUnsafe, out solution);
#else
            solution = null;
            return string.Empty;
#endif
        }

        bool ho()
        {
            //MySolution solution;
            var output = ho_ExecuteProcess(out solution);


            // this error can be recovered
            // force create sln file
            if (output == CommonStrings.ErrorGettingSolutionDetails
                || output == CommonStrings.ErrorMSWorkspace
                || output == CommonStrings.ErrorCompileFail)
            {
                ELogger.Log(ELogger.Level.Standard, "Trying to recover from previous error...");
                GenerateSolutionFile();
                output = ho_ExecuteProcess(out solution);
            }


            if (ProcessError(output))
                return false;

            // Write the redirected output to this application's window.
            ELogger.Log(ELogger.Level.ExtraDetail, output);


            //var solution = JsonUtility.FromJson<Enchanter.MySolution>(output);
            //solution = jsonDeserialize<MySolution>(output);
            

            var foreachVersionCheck = !IsUnityVersion5Dot5OrHigher;
            // create enchanters here, did not created with the solution to decrease json string size
            foreach (var project in solution.Projects)
            {
                foreach (var document in project.Documents)
                {
                    foreach (var enchanter in this.enchanters)
                    {
                        var newEnchanter = new MyEnchanter();
                        newEnchanter.Name = enchanter.Name;
                        document.Enchanters.Add(newEnchanter);

                        // disable foreach enchanter for unity version5.5 or higher (memory garbage creation bug fixed in this version)
                        if (!foreachVersionCheck && newEnchanter.Name == "ForEach")
                            newEnchanter.Count = -1;
                    }
                }
            }


            ELogger.Log(ELogger.Level.Detail, "Sol path: " + solution.path);

            //Debug.Log("Press any key to exit.");
            //Console.ReadLine();

            return true;
        }

        public class IterateData
        {
            public int indexOfMyDocuments;
            public List<MyDocument> myDocuments;

            public int GetProcessedEnchantmentCount
            {
                //**--optimize later
                get
                {
                    int count = 0;
                    foreach (var myDocument in myDocuments)
                    {
                        foreach (var enchanter in myDocument.Enchanters)
                        {
                            // ignore negative values, treat them as 0
                            if (enchanter.Count > 0)
                            {
                                count += enchanter.Count;
                            }
                        }
                    }
                    return count;
                }
            }
        }

    }

}


#endif // UNITY_EDITOR