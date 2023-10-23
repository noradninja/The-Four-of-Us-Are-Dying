using UnityEngine;
using UnityEditor;
using System;
using System.Collections;
using System.Collections.Generic;
using System.IO;

namespace DigitalOpus.MB.Core
{

    public class MB3_EditorMethods : MB2_EditorMethodsInterface
    {

        enum saveTextureFormat
        {
            png,
            tga,
        }

        private saveTextureFormat SAVE_FORMAT = saveTextureFormat.png;

        private List<Texture2D> _texturesWithReadWriteFlagSet = new List<Texture2D>();
        private Dictionary<Texture2D, TextureFormatInfo> _textureFormatMap = new Dictionary<Texture2D, TextureFormatInfo>();

        public MobileTextureSubtarget AndroidBuildTexCompressionSubtarget;
#if UNITY_TIZEN
        //public MobileTextureSubtarget TizenBuildTexCompressionSubtarget;
#endif
        public void Clear()
        {
            _texturesWithReadWriteFlagSet.Clear();
            _textureFormatMap.Clear();
        }

        public void OnPreTextureBake()
        {
            AndroidBuildTexCompressionSubtarget = MobileTextureSubtarget.Generic;

            // the texture override in build settings for some platforms causes poor quality
            if (EditorUserBuildSettings.activeBuildTarget == BuildTarget.Android &&
                EditorUserBuildSettings.androidBuildSubtarget != MobileTextureSubtarget.Generic)
            {
                AndroidBuildTexCompressionSubtarget = EditorUserBuildSettings.androidBuildSubtarget; //remember so we can restore later
                EditorUserBuildSettings.androidBuildSubtarget = MobileTextureSubtarget.Generic;
            }
#if UNITY_TIZEN
            TizenBuildTexCompressionSubtarget = MobileTextureSubtarget.Generic;
            if (EditorUserBuildSettings.activeBuildTarget == BuildTarget.Tizen &&
                EditorUserBuildSettings.tizenBuildSubtarget != MobileTextureSubtarget.Generic)
            {
                TizenBuildTexCompressionSubtarget = EditorUserBuildSettings.tizenBuildSubtarget; //remember so we can restore later
                EditorUserBuildSettings.tizenBuildSubtarget = MobileTextureSubtarget.Generic;
            }
#endif
        }

        public void OnPostTextureBake()
        {
            if (AndroidBuildTexCompressionSubtarget != MobileTextureSubtarget.Generic)
            {
                EditorUserBuildSettings.androidBuildSubtarget = AndroidBuildTexCompressionSubtarget;
                AndroidBuildTexCompressionSubtarget = MobileTextureSubtarget.Generic;
            }
#if UNITY_TIZEN
            if (TizenBuildTexCompressionSubtarget != MobileTextureSubtarget.Generic)
            {
                EditorUserBuildSettings.tizenBuildSubtarget = TizenBuildTexCompressionSubtarget;
                TizenBuildTexCompressionSubtarget = MobileTextureSubtarget.Generic;
            }
#endif
        }

#if UNITY_5_5_OR_NEWER
        class TextureFormatInfo
        {
            public TextureImporterCompression textureCompression;
            public bool doCrunchCompression;
            public TextureImporterFormat platformFormat;
            public int platformCompressionQuality;
            public String platform;
            public bool isNormalMap;
            public bool platformOverride;

            public TextureFormatInfo(TextureImporterCompression textureCompression, bool doCrunch, string platformString, TextureImporterFormat platformFormat, int platformCompressionQuality, bool isNormMap, bool overridden)
            {
                this.textureCompression = textureCompression;
                doCrunchCompression = doCrunch;
                platform = platformString;
                this.platformFormat = platformFormat;
                this.platformCompressionQuality = platformCompressionQuality;
                this.isNormalMap = isNormMap;
                platformOverride = overridden;
            }
        }

        public bool IsNormalMap(Texture2D tx)
        {
            AssetImporter ai = AssetImporter.GetAtPath(AssetDatabase.GetAssetOrScenePath(tx));
            if (ai != null && ai is TextureImporter)
            {
                if (((TextureImporter)ai).textureType == TextureImporterType.NormalMap) return true;
            }
            return false;
        }

        public void AddTextureFormat(Texture2D tx, TextureFormat targetFormat, bool isNormalMap)
        {
            //pixel values don't copy correctly from one texture to another when isNormal is set so unset it.
            bool isFormatMapping;
            TextureImporterFormat importerFormat = Map_TextureFormat_2_TextureImporterFormat(targetFormat, out isFormatMapping);
            if (!isFormatMapping)
            {
                importerFormat = TextureImporterFormat.RGBA32;
            }

            TextureFormatInfo toFormat = new TextureFormatInfo(TextureImporterCompression.Uncompressed, false, MBVersionEditor.GetPlatformString(), importerFormat, 0, isNormalMap, false);
            _SetTextureFormat(tx, toFormat, true, false);
        }

        private void _SetTextureFormat(Texture2D tx, TextureFormatInfo toThisFormat, bool addToList, bool setNormalMap)
        {
            AssetImporter ai = AssetImporter.GetAtPath(AssetDatabase.GetAssetOrScenePath(tx));
            if (ai != null && ai is UnityEditor.TextureImporter)
            {
                TextureImporter textureImporter = (TextureImporter)ai;
                bool doImport = false;

                bool is2017 = Application.unityVersion.StartsWith("20");
                if (is2017)
                {
                    doImport = _SetTextureFormat2017(tx, toThisFormat, addToList, setNormalMap, textureImporter);
                }
                else
                {
                    doImport = _SetTextureFormatUnity5(tx, toThisFormat, addToList, setNormalMap, textureImporter);
                }
                if (doImport) AssetDatabase.ImportAsset(AssetDatabase.GetAssetOrScenePath(tx), ImportAssetOptions.ForceUpdate);
            }
        }

        private bool _ChangeNormalMapTypeIfNecessary(TextureImporter textureImporter, bool setNormalMap)
        {
            bool doImport = false;
            if (textureImporter.textureType == TextureImporterType.NormalMap && !setNormalMap)
            {
                textureImporter.textureType = TextureImporterType.Default;
                doImport = true;
            }

            if (textureImporter.textureType != TextureImporterType.NormalMap && setNormalMap)
            {
                textureImporter.textureType = TextureImporterType.NormalMap;
                doImport = true;
            }
            return doImport;
        }

        private bool _SetTextureFormat2017(Texture2D tx, TextureFormatInfo toThisFormat, bool addToList, bool setNormalMap, TextureImporter textureImporter)
        {
            /*
             * HOW THE TEXTURE IMPORTER WORKS.
             *    Importer has "Default" PlatformImportSettings which can be overridden on a platform by platform basis.
             *    Default:
             *          Format can be
             *              Automatic => uses TextureImporter.GetAutomaticFormat
             *              RGB, ARGB, etc... These are abstract formats (list of channels, bitdepth), not specific algorithms like PVRT, ETC.
             *          Compression is Normal *DEFAULT, None, High, Low. These are abstract. Will get translated to specific algorithm depending on platform and Format.
             *    Overrides per platform (iOS, Android ...)
             *          Format is a concrete algorithm like ETC, ASTC, BVRT
             *          Compressor Quality (Fastest, Normal, Best) These are abstract, not sure how this affects format
             *
             *    Crunch compression: See blog post: https://blogs.unity3d.com/2017/11/15/updated-crunch-texture-compression-library/. Is lossy, Is for distribution
             *    (textures are decompressed before being loaded into GPU). Only for DXT, RGB Crunched ETC, RGBA Crunched ETC2 format. If you enable the
             *    “Use Crunch Compression” option in the Default tab, all the textures on Android platform will be compressed with ETC Crunch by default.
             *
             * WHAT MESH BAKER NEEDS.
             *      Needs to be able to read the pixels. Also textures should be in "true-color" RGB or ARGB format for best fidelity.
             *          Turn off platform override if it is enabled
             *          Set default to "uncompressed", "RGB or ARGB"
             *      
            */
            bool is2017 = Application.unityVersion.StartsWith("20");
            if (!is2017)
            {
                Debug.LogError("Wrong texture format converter. 2017 Should not be called for Unity Version " + Application.unityVersion);
                return false;
            }

            // Reimport takes a long time so we only want to reimport if necessary.
            bool doImport = false;

            // Record the old format so we can restore after changing format.
            string restorePlatform = GetPlatformString();

            // Get the restore settings
            // First check if there is an override for this platform.
            TextureImporterPlatformSettings platformTips = textureImporter.GetPlatformTextureSettings(restorePlatform);
            bool currentHasOverride = platformTips.overridden;

            // Get the default settings.
            TextureImporterPlatformSettings defaultTips = textureImporter.GetDefaultPlatformTextureSettings();
            TextureFormatInfo restoreTfi = new TextureFormatInfo(defaultTips.textureCompression,
                                                                defaultTips.crunchedCompression,
                                                                restorePlatform,
                                                                defaultTips.format,
                                                                defaultTips.compressionQuality,
                                                                textureImporter.textureType == TextureImporterType.NormalMap,
                                                                currentHasOverride);
            string platform = toThisFormat.platform;

            // Check if we need to reimport;
            bool isAutoPVRTC = false;
            if (platform != null)
            {
                if (currentHasOverride != toThisFormat.platformOverride)
                {
                    // Disable the override
                    platformTips.overridden = toThisFormat.platformOverride;
                    textureImporter.SetPlatformTextureSettings(platformTips);
                    doImport = true;
                }

                isAutoPVRTC = MBVersionEditor.IsAutoPVRTC(defaultTips.format, textureImporter.GetAutomaticFormat(platform));
            }

            //if (isAutoPVRTC && textureImporter.textureCompression != toThisFormat.textureCompression)
            if (textureImporter.textureCompression != toThisFormat.textureCompression)
            {
                textureImporter.textureCompression = toThisFormat.textureCompression;
                doImport = true;
            }

            if (textureImporter.crunchedCompression != toThisFormat.doCrunchCompression)
            {
                textureImporter.crunchedCompression = toThisFormat.doCrunchCompression;
                doImport = true;
            }

            if (_ChangeNormalMapTypeIfNecessary(textureImporter, setNormalMap))
            {
                doImport = true;
            }

            if (defaultTips.format != toThisFormat.platformFormat)
            {
                TextureImporterPlatformSettings ps =  textureImporter.GetDefaultPlatformTextureSettings();
                ps.format = toThisFormat.platformFormat;
                textureImporter.SetPlatformTextureSettings(ps);
                doImport = true;
            }

            if (doImport)
            {
                string s;
                if (addToList)
                {
                    s = "Setting texture compression for ";
                }
                else
                {
                    s = "Restoring texture compression for ";
                }
                s += String.Format("{0}  FROM: compression={1} isNormal{2} format={3} hadOverride={4} TO: compression={5} isNormal={6} format={7} hadOverride={8}",
                                tx, restoreTfi.textureCompression, restoreTfi.isNormalMap, restoreTfi.platformFormat, restoreTfi.platformOverride,
                                toThisFormat.textureCompression, setNormalMap, toThisFormat.platformFormat, toThisFormat.platformOverride);
                /*
                if (toThisFormat.platform != null)
                {
                    s += String.Format(" setting platform override format for platform {0} to {1} compressionQuality {2}", toThisFormat.platform, toThisFormat.platformFormat, toThisFormat.platformCompressionQuality);
                }
                */

                Debug.Log(s);
                if (doImport && addToList && !_textureFormatMap.ContainsKey(tx))
                {
                    _textureFormatMap.Add(tx, restoreTfi);
                }
            }

            return doImport;
        }

        private bool _SetTextureFormatUnity5(Texture2D tx, TextureFormatInfo toThisFormat, bool addToList, bool setNormalMap, TextureImporter textureImporter)
        {
            bool doImport = false;

            TextureFormatInfo restoreTfi = new TextureFormatInfo(textureImporter.textureCompression,
                                                                false,
                                                                toThisFormat.platform,
                                                                TextureImporterFormat.RGBA32,
                                                                toThisFormat.platformCompressionQuality,
                                                                textureImporter.textureType == TextureImporterType.NormalMap,
                                                                false);

            string platform = toThisFormat.platform;
            if (platform != null)
            {
                TextureImporterPlatformSettings tips = textureImporter.GetPlatformTextureSettings(platform);
                if (tips.overridden)
                {
                    restoreTfi.platformFormat = tips.format;
                    restoreTfi.platformCompressionQuality = tips.compressionQuality;
                    TextureImporterPlatformSettings tipsOverridden = new TextureImporterPlatformSettings();
                    tips.CopyTo(tipsOverridden);
                    tipsOverridden.compressionQuality = toThisFormat.platformCompressionQuality;
                    tipsOverridden.format = toThisFormat.platformFormat;
                    textureImporter.SetPlatformTextureSettings(tipsOverridden);
                    doImport = true;
                }
            }

            if (textureImporter.textureCompression != toThisFormat.textureCompression)
            {
                textureImporter.textureCompression = toThisFormat.textureCompression;
                doImport = true;
            }

            if (doImport)
            {
                string s;
                if (addToList)
                {
                    s = "Setting texture compression for ";
                }
                else
                {
                    s = "Restoring texture compression for ";
                }
                s += String.Format("{0}  FROM: compression={1} isNormal{2} TO: compression={3} isNormal={4} ", tx, restoreTfi.textureCompression, restoreTfi.isNormalMap, toThisFormat.textureCompression, setNormalMap);
                if (toThisFormat.platform != null)
                {
                    s += String.Format(" setting platform override format for platform {0} to {1} compressionQuality {2}", toThisFormat.platform, toThisFormat.platformFormat, toThisFormat.platformCompressionQuality);
                }
                Debug.Log(s);
            }
            if (doImport && addToList && !_textureFormatMap.ContainsKey(tx))
            {
                _textureFormatMap.Add(tx, restoreTfi);
            }
            return doImport;
        }

        public void SetNormalMap(Texture2D tx)
        {
            AssetImporter ai = AssetImporter.GetAtPath(AssetDatabase.GetAssetOrScenePath(tx));
            if (ai != null && ai is TextureImporter)
            {
                TextureImporter textureImporter = (TextureImporter)ai;
                if (textureImporter.textureType != TextureImporterType.NormalMap)
                {
                    textureImporter.textureType = TextureImporterType.NormalMap;
                    AssetDatabase.ImportAsset(AssetDatabase.GetAssetOrScenePath(tx));
                }
            }
        }

        public bool IsCompressed(Texture2D tx)
        {
            AssetImporter ai = AssetImporter.GetAtPath(AssetDatabase.GetAssetOrScenePath(tx));
            if (ai != null && ai is TextureImporter)
            {
                TextureImporter textureImporter = (TextureImporter)ai;
                if (textureImporter.textureCompression == TextureImporterCompression.Uncompressed)
                {
                    return true;
                }
            }
            return false;
        }
#else
        // 5_4 and earlier
        class TextureFormatInfo
        {
            public TextureImporterFormat format;
            public bool isNormalMap;
            public String platform;
            public TextureImporterFormat platformOverrideFormat;

            public TextureFormatInfo(TextureImporterFormat f, string p, TextureImporterFormat pf, bool isNormMap)
            {
                format = f;
                platform = p;
                platformOverrideFormat = pf;
                isNormalMap = isNormMap;
            }
        }

        public bool IsNormalMap(Texture2D tx)
        {
            AssetImporter ai = AssetImporter.GetAtPath(AssetDatabase.GetAssetOrScenePath(tx));
            if (ai != null && ai is TextureImporter)
            {
                if (((TextureImporter)ai).normalmap) return true;
            }
            return false;
        }

        public void AddTextureFormat(Texture2D tx, bool isNormalMap)
        {
            //pixel values don't copy correctly from one texture to another when isNormal is set so unset it.
            _SetTextureFormat(tx,
                             new TextureFormatInfo(TextureImporterFormat.ARGB32, MBVersionEditor.GetPlatformString(), TextureImporterFormat.AutomaticTruecolor, isNormalMap),
                            true, false);
        }

        void _SetTextureFormat(Texture2D tx, TextureFormatInfo tfi, bool addToList, bool setNormalMap)
        {

            AssetImporter ai = AssetImporter.GetAtPath(AssetDatabase.GetAssetOrScenePath(tx));
            if (ai != null && ai is UnityEditor.TextureImporter)
            {
                string s;
                if (addToList)
                {
                    s = "Setting texture format for ";
                }
                else {
                    s = "Restoring texture format for ";
                }
                s += tx + " to " + tfi.format;
                if (tfi.platform != null)
                {
                    s += " setting platform override format for " + tfi.platform + " to " + tfi.platformOverrideFormat;
                }
                Debug.Log(s);
                TextureImporter textureImporter = (TextureImporter)ai;
                TextureFormatInfo restoreTfi = new TextureFormatInfo(textureImporter.textureFormat,
                                                                    tfi.platform,
                                                                    TextureImporterFormat.AutomaticTruecolor,
                                                                    textureImporter.normalmap);
                string platform = tfi.platform;
                bool doImport = false;
                if (platform != null)
                {
                    int maxSize;
                    TextureImporterFormat f;
                    textureImporter.GetPlatformTextureSettings(platform, out maxSize, out f);
                    restoreTfi.platformOverrideFormat = f;
                    if (f != 0)
                    { //f == 0 means no override or platform doesn't exist
                        textureImporter.SetPlatformTextureSettings(platform, maxSize, tfi.platformOverrideFormat);
                        doImport = true;
                    }
                }

                if (textureImporter.textureFormat != tfi.format)
                {
                    textureImporter.textureFormat = tfi.format;
                    doImport = true;
                }
                if (textureImporter.normalmap && !setNormalMap)
                {
                    textureImporter.normalmap = false;
                    doImport = true;
                }
                if (!textureImporter.normalmap && setNormalMap)
                {
                    textureImporter.normalmap = true;
                    doImport = true;
                }
                if (addToList && !_textureFormatMap.ContainsKey(tx)) _textureFormatMap.Add(tx, restoreTfi);
                if (doImport) AssetDatabase.ImportAsset(AssetDatabase.GetAssetOrScenePath(tx), ImportAssetOptions.ForceUpdate);
            }
        }

        public void SetNormalMap(Texture2D tx)
        {
            AssetImporter ai = AssetImporter.GetAtPath(AssetDatabase.GetAssetOrScenePath(tx));
            if (ai != null && ai is TextureImporter)
            {
                TextureImporter textureImporter = (TextureImporter)ai;
                if (!textureImporter.normalmap)
                {
                    textureImporter.normalmap = true;
                    AssetDatabase.ImportAsset(AssetDatabase.GetAssetOrScenePath(tx));
                }
            }
        }

        public bool IsCompressed(Texture2D tx)
        {
            AssetImporter ai = AssetImporter.GetAtPath(AssetDatabase.GetAssetOrScenePath(tx));
            if (ai != null && ai is TextureImporter)
            {
                TextureImporter textureImporter = (TextureImporter)ai;
                TextureImporterFormat tf = textureImporter.textureFormat;
                if (tf != TextureImporterFormat.ARGB32)
                {
                    return true;
                }
            }
            return false;
        }
#endif


        public void RestoreReadFlagsAndFormats(ProgressUpdateDelegate progressInfo)
        {
            for (int i = 0; i < _texturesWithReadWriteFlagSet.Count; i++)
            {
                if (progressInfo != null) progressInfo("Restoring read flag for " + _texturesWithReadWriteFlagSet[i], .9f);
                SetReadWriteFlag(_texturesWithReadWriteFlagSet[i], false, false);
            }
            _texturesWithReadWriteFlagSet.Clear();
            foreach (Texture2D tex in _textureFormatMap.Keys)
            {
                if (progressInfo != null) progressInfo("Restoring format for " + tex, .9f);
                _SetTextureFormat(tex, _textureFormatMap[tex], false, _textureFormatMap[tex].isNormalMap);
            }

            _textureFormatMap.Clear();
        }


        public void SetReadWriteFlag(Texture2D tx, bool isReadable, bool addToList)
        {
            AssetImporter ai = AssetImporter.GetAtPath(AssetDatabase.GetAssetOrScenePath(tx));
            if (ai != null && ai is TextureImporter)
            {
                TextureImporter textureImporter = (TextureImporter)ai;
                if (textureImporter.isReadable != isReadable)
                {
                    if (addToList) _texturesWithReadWriteFlagSet.Add(tx);
                    textureImporter.isReadable = isReadable;
                    //				Debug.LogWarning("Setting read flag for Texture asset " + AssetDatabase.GetAssetPath(tx) + " to " + isReadable);
                    AssetDatabase.ImportAsset(AssetDatabase.GetAssetOrScenePath(tx));
                }
            }
        }

        private bool ConstructFilename(Material resMat, string texPropertyName, string atlasType, string formatString, int atlasNum,
            out string pth,
            out string relativePath)
        {
            string prefabPth = AssetDatabase.GetAssetPath(resMat);
            if (prefabPth == null || prefabPth.Length == 0)
            {
                Debug.LogError("Could save atlas. Could not find result material in AssetDatabase.");
                pth = "";
                relativePath = "";
                return false;
            }
            string baseName = Path.GetFileNameWithoutExtension(prefabPth);
            string folderPath = prefabPth.Substring(0, prefabPth.Length - baseName.Length - 4);
            string fullFolderPath = Application.dataPath + folderPath.Substring("Assets".Length, folderPath.Length - "Assets".Length);
            pth = fullFolderPath + baseName + "-" + texPropertyName + "-" + atlasType + "-" + atlasNum;
            relativePath = folderPath + baseName + "-" + texPropertyName + "-" + atlasType + "-" + formatString + atlasNum;
            return true;
        }

        public void SaveTextureArrayToAssetDatabase(Texture2DArray atlas, TextureFormat format, string texPropertyName, int atlasNum, Material resMat)
        {
            if (atlas == null)
            {
                if (resMat.HasProperty(texPropertyName))
                {
                    resMat.SetTexture(texPropertyName, null);
                }
            }
            else
            {
                string pth, relativePath;
                if (ConstructFilename(resMat, texPropertyName, "texarray-", format.ToString(), atlasNum, out pth, out relativePath))
                {
                    string assetFilename = relativePath + ".asset";
                    Texture2DArray existingAsset = AssetDatabase.LoadAssetAtPath<Texture2DArray>(assetFilename);
                    if (!existingAsset)
                    {
                        AssetDatabase.CreateAsset(atlas, assetFilename);
                    }
                    else
                    {
                        EditorUtility.CopySerialized(atlas, existingAsset);
                    }

                    Debug.Log(String.Format("Wrote Texture2DArray for {0} to file:{1}", texPropertyName, pth));
                    if (resMat.HasProperty(texPropertyName))
                    {
                        Texture2DArray txx = (Texture2DArray)(AssetDatabase.LoadAssetAtPath(assetFilename, typeof(Texture2DArray)));
                        resMat.SetTexture(texPropertyName, txx);
                    }
                }
            }
        }

        /**
         pass in System.IO.File.WriteAllBytes for parameter fileSaveFunction. This is necessary because on Web Player file saving
         functions only exist for Editor classes
         */
        public void SaveAtlasToAssetDatabase(Texture2D atlas, ShaderTextureProperty texPropertyName, int atlasNum, Material resMat)
        {
            if (atlas == null)
            {
                SetMaterialTextureProperty(resMat, texPropertyName, null);
            }
            else
            {
                string pth, relativePath;
                if (ConstructFilename(resMat, texPropertyName.name, "atlas", "", atlasNum, out pth, out relativePath))
                {
                    //need to create a copy because sometimes the packed atlases are not in ARGB32 format
                    Texture2D newTex = MB_Utility.createTextureCopy(atlas);
                    int size = Mathf.Max(newTex.height, newTex.width);
                    if (SAVE_FORMAT == saveTextureFormat.png)
                    {
                        pth += ".png";
                        relativePath += ".png";
                        byte[] bytes = newTex.EncodeToPNG();
                        System.IO.File.WriteAllBytes(pth, bytes);
                    }
                    else
                    {
                        pth += ".tga";
                        relativePath += ".tga";
                        if (File.Exists(pth))
                        {
                            File.Delete(pth);
                        }

                        //Create the file.
                        FileStream fs = File.Create(pth);
                        MB_TGAWriter.Write(newTex.GetPixels(), newTex.width, newTex.height, fs);
                    }
                    Editor.DestroyImmediate(newTex);
                    AssetDatabase.Refresh();
                    Debug.Log(String.Format("Wrote atlas for {0} to file:{1}", texPropertyName.name, pth));
                    Texture2D txx = (Texture2D)(AssetDatabase.LoadAssetAtPath(relativePath, typeof(Texture2D)));
                    SetTextureSize(txx, size);
                    SetMaterialTextureProperty(resMat, texPropertyName, relativePath);
                }
            }
        }

        public void SetMaterialTextureProperty(Material target, ShaderTextureProperty texPropName, string texturePath)
        {
            //			if (LOG_LEVEL >= MB2_LogLevel.debug) MB2_Log.Log(MB2_LogLevel.debug,"Assigning atlas " + texturePath + " to result material " + target + " for property " + texPropName,LOG_LEVEL);
            if (texPropName.isNormalMap)
            {
                SetNormalMap((Texture2D)(AssetDatabase.LoadAssetAtPath(texturePath, typeof(Texture2D))));
            }
            if (target.HasProperty(texPropName.name))
            {
                target.SetTexture(texPropName.name, (Texture2D)(AssetDatabase.LoadAssetAtPath(texturePath, typeof(Texture2D))));
            }
        }

        public void SetTextureSize(Texture2D tx, int size)
        {
            TextureImporter ai = AssetImporter.GetAtPath(AssetDatabase.GetAssetOrScenePath(tx)) as TextureImporter;
            if (ai == null) return;

            int maxSize = 32;
            if (size > 32) maxSize = 64;
            if (size > 64) maxSize = 128;
            if (size > 128) maxSize = 256;
            if (size > 256) maxSize = 512;
            if (size > 512) maxSize = 1024;
            if (size > 1024) maxSize = 2048;
            if (size > 2048) maxSize = 4096;

            bool isSettingsChanged = false;
            if (ai.maxTextureSize != maxSize)
            {
                ai.maxTextureSize = maxSize;
                isSettingsChanged = true;
            }

#if UNITY_5_5_OR_NEWER
            string[] platforms = { "Standalone", "Web", "iPhone", "Android", "WebGL", "Windows Store Apps", "PSP2", "PS4", "XboxOne", "Nintendo 3DS", "tvOS" };
            foreach (string platform in platforms)
            {
                TextureImporterPlatformSettings settings = ai.GetPlatformTextureSettings(platform);
                if (settings != null && settings.overridden && settings.maxTextureSize != maxSize)
                {
                    settings.maxTextureSize = maxSize;
                    ai.SetPlatformTextureSettings(settings);
                    isSettingsChanged = true;
                }
            }

            // reimport if anything changed
            if (isSettingsChanged)
            {
                ai.SaveAndReimport();
            }
#else
            if (ai.maxTextureSize != maxSize)
            {
                ai.maxTextureSize = maxSize;
                AssetDatabase.ImportAsset(AssetDatabase.GetAssetOrScenePath(tx), ImportAssetOptions.ForceUpdate);
            }
#endif
        }

        public void CommitChangesToAssets()
        {
            AssetDatabase.Refresh();
        }

        public string GetPlatformString()
        {
            return MBVersionEditor.GetPlatformString();
        }

        public void CheckBuildSettings(long estimatedArea)
        {
            if (Math.Sqrt(estimatedArea) > 1000f)
            {
                if (EditorUserBuildSettings.selectedBuildTargetGroup != BuildTargetGroup.Standalone)
                {
                    Debug.LogWarning("If the current selected build target is not standalone then the generated atlases may be capped at size 1024. If build target is Standalone then atlases of 4096 can be built");
                }
            }
        }

        public bool CheckPrefabTypes(MB_ObjsToCombineTypes objToCombineType, List<GameObject> objsToMesh)
        {
            for (int i = 0; i < objsToMesh.Count; i++)
            {
                MB_PrefabType pt = MBVersionEditor.GetPrefabType(objsToMesh[i]);
                if (pt == MB_PrefabType.scenePefabInstance || pt == MB_PrefabType.isInstanceAndNotAPartOfAnyPrefab)
                {
                    // these are scene objects
                    if (objToCombineType == MB_ObjsToCombineTypes.prefabOnly)
                    {
                        Debug.LogWarning("The list of objects to combine contains scene objects. You probably want prefabs. If using scene objects ensure position is zero, rotation is zero and scale is one. Translation, Rotation and Scale will be baked into the generated mesh." + objsToMesh[i] + " is a scene object");
                        return false;
                    }
                }
                else if (objToCombineType == MB_ObjsToCombineTypes.sceneObjOnly)
                {
                    //these are prefabs
                    if (pt == MB_PrefabType.modelPrefabAsset || pt == MB_PrefabType.prefabAsset)
                    {
                        Debug.LogError("The list of objects to combine contains prefab assets. You need scene instances." + objsToMesh[i] + "(position " + i + ") is a project prefab object. Create a scene instance of this prefab and use that in the list of objects to combine.");
                        return false;
                    }
                }
            }
            return true;
        }

        public bool ValidateSkinnedMeshes(List<GameObject> objs)
        {
            for (int i = 0; i < objs.Count; i++)
            {
                Renderer r = MB_Utility.GetRenderer(objs[i]);
                if (r is SkinnedMeshRenderer)
                {
                    Transform[] bones = ((SkinnedMeshRenderer)r).bones;
                    if (bones.Length == 0)
                    {
                        Debug.LogWarning("SkinnedMesh " + i + " (" + objs[i] + ") in the list of objects to combine has no bones. Check that 'optimize game object' is not checked in the 'Rig' tab of the asset importer. Mesh Baker cannot combine optimized skinned meshes because the bones are not available.");
                    }
                    //					UnityEngine.Object parentObject = EditorUtility.GetPrefabParent(r.gameObject);
                    //					string path = AssetDatabase.GetAssetPath(parentObject);
                    //					Debug.Log (path);
                    //					AssetImporter ai = AssetImporter.GetAtPath( path );
                    //					Debug.Log ("bbb " + ai);
                    //					if (ai != null && ai is ModelImporter){
                    //						Debug.Log ("valing 2");
                    //						ModelImporter modelImporter = (ModelImporter) ai;
                    //						if(modelImporter.optimizeMesh){
                    //							Debug.LogError("SkinnedMesh " + i + " (" + objs[i] + ") in the list of objects to combine is optimized. Mesh Baker cannot combine optimized skinned meshes because the bones are not available.");
                    //						}
                    //					}
                }
            }
            return true;
        }

        public void Destroy(UnityEngine.Object o)
        {
            if (Application.isPlaying)
            {
                if (!IsAnAsset(o))// This is an asset. Don't destroy it.
                {
                    MonoBehaviour.Destroy(o);
                }
            }
            else
            {
                if (!IsAnAsset(o)) // don't try to destroy assets
                {
                    MonoBehaviour.DestroyImmediate(o, false);
                }
            }
        }

        public void DestroyAsset(UnityEngine.Object o)
        {
            if (o == null) return;
            string path = AssetDatabase.GetAssetPath(o);
            if (path != null && path != "")
            {
                AssetDatabase.DeleteAsset(path);
            } else
            {
                Debug.LogError("DestroyAsset was called on an object that was not an asset: " + o);
            }
        }

        public static object[] DropZone(string title, int w, int h)
        {
            EditorGUILayout.BeginHorizontal();
            GUILayout.FlexibleSpace();
            GUILayout.Box(title, GUILayout.Width(w), GUILayout.Height(h));
            Rect dropRect = GUILayoutUtility.GetLastRect();
            GUILayout.FlexibleSpace();
            EditorGUILayout.EndHorizontal();

            EventType eventType = Event.current.type;
            bool isAccepted = false;

            if (eventType == EventType.DragUpdated || eventType == EventType.DragPerform)
            {
                if (dropRect.Contains(Event.current.mousePosition))
                {
                    DragAndDrop.visualMode = DragAndDropVisualMode.Copy;
                    if (eventType == EventType.DragPerform)
                    {
                        DragAndDrop.AcceptDrag();
                        isAccepted = true;
                        //Debug.Log("Consuming drop event in inspector. " + Event.current.mousePosition + " rect" + dropRect);
                        Event.current.Use();
                    }
                }
            }

            return isAccepted ? DragAndDrop.objectReferences : null;
        }

        public static void AddDroppedObjects(object[] objs, MB3_MeshBakerRoot momm)
        {
            if (objs != null)
            {
                HashSet<Renderer> renderersToAdd = new HashSet<Renderer>();
                for (int i = 0; i < objs.Length; i++)
                {
                    object obj = objs[i];
                    if (obj is GameObject)
                    {
                        Renderer[] rs = ((GameObject)obj).GetComponentsInChildren<Renderer>(true);
                        for (int j = 0; j < rs.Length; j++)
                        {
                            if (rs[j] is MeshRenderer || rs[j] is SkinnedMeshRenderer)
                            {
                                renderersToAdd.Add(rs[j]);
                            }
                        }
                    }
                }

                int numAdded = 0;
                List<GameObject> objsToCombine = momm.GetObjectsToCombine();
                bool failedToAddAssets = false;
                foreach (Renderer r in renderersToAdd)
                {
                    if (!objsToCombine.Contains(r.gameObject))
                    {
                        MB_PrefabType prefabType = MBVersionEditor.GetPrefabType(r.gameObject);
                        if (prefabType == MB_PrefabType.modelPrefabAsset || prefabType == MB_PrefabType.prefabAsset)
                        {
                            failedToAddAssets = true;
                        }
                        else
                        {
                            objsToCombine.Add(r.gameObject);
                            numAdded++;
                        }
                    }
                }

                if (failedToAddAssets)
                {
                    Debug.LogError("Did not add some object(s) because they are not scene objects");
                }
                Debug.Log("Added " + numAdded + " renderers");
            }
        }

        public bool IsAnAsset(UnityEngine.Object o)
        {
            string path = AssetDatabase.GetAssetPath(o);
            bool isAsset = !(path == null || path.Length == 0);
            return isAsset;
        }

        public Texture2D CreateTemporaryAssetCopy(Texture2D sliceTex, int w, int h, TextureFormat format, MB2_LogLevel logLevel)
        {
            bool foundMatch;
            UnityEditor.TextureImporterFormat targetImporterFormat = Map_TextureFormat_2_TextureImporterFormat(format, out foundMatch);
            if (!foundMatch)
            {
                Debug.LogError("Could not find target importer format matching " + format);
                return null;
            }

            string workingFolder = MB_EditorUtil.GetShortPathToWorkingDirectoryAndEnsureItExists();
            string tryPth = workingFolder + "/" + sliceTex.name + "_TEMP.png";
            string shortPath = AssetDatabase.GenerateUniqueAssetPath(tryPth);
            string fullPath = MB_Utility.ConvertAssetsRelativePathToFullSystemPath(shortPath);
            // Duplicate the source texture and save it as a truecolor temporary asset
            {
                Texture2D newTex1 = new Texture2D(sliceTex.width, sliceTex.height, TextureFormat.ARGB32, true);
                newTex1.SetPixels(sliceTex.GetPixels());
                newTex1.Apply();

                // Resize it.
                Texture2D newTex = MB_Utility.resampleTexture(newTex1, w, h);
                System.IO.File.WriteAllBytes(fullPath, newTex.EncodeToPNG());
                GameObject.DestroyImmediate(newTex);
                GameObject.DestroyImmediate(newTex1);
                AssetDatabase.Refresh();
            }

            Texture2D temporaryTex = AssetDatabase.LoadAssetAtPath<Texture2D>(shortPath);
            TextureImporter ai = (TextureImporter)AssetImporter.GetAtPath(shortPath);
            ai.isReadable = true;
            string platformString = GetPlatformString();
            TextureImporterPlatformSettings settings = ai.GetPlatformTextureSettings(platformString);

            // Note that it is not enough to set the default platform settings. Default only uses abstract formats, true formats are auto generated settings.
            // Need to use the plaftorm override to set the true setting.
            if (settings.format != targetImporterFormat)
            {
                settings.overridden = true;
                settings.format = targetImporterFormat;
                ai.SetPlatformTextureSettings(settings);
            }

            if (logLevel >= MB2_LogLevel.debug) Debug.LogFormat("Creating temporary texuture asset to resize texture: {0} w:{1} h:{2} format:{3} TO w:{4} h:{5} format:{6}",
                sliceTex, sliceTex.width, sliceTex.height, sliceTex.format, w, h, format);
            ai.SaveAndReimport();
            settings = ai.GetPlatformTextureSettings(platformString);
            Debug.Assert(settings.format == targetImporterFormat, "Format of temporary texture after import was " + settings.format + " not targetFormat: " + targetImporterFormat);
            return temporaryTex;
        }

        public static TextureImporterFormat Map_TextureFormat_2_TextureImporterFormat(TextureFormat texFormat, out bool success)
        {
            TextureImporterFormat texImporterFormat;
            success = true;
            switch (texFormat)
            {
                case TextureFormat.ARGB32:
                    texImporterFormat = TextureImporterFormat.ARGB32;
                    break;
                case TextureFormat.RGBA32:
                    texImporterFormat = TextureImporterFormat.RGBA32;
                    break;
                case TextureFormat.RGB24:
                    texImporterFormat = TextureImporterFormat.RGB24;
                    break;
                case TextureFormat.Alpha8:
                    texImporterFormat = TextureImporterFormat.Alpha8;
                    break;

                case TextureFormat.ASTC_RGBA_10x10:
                    texImporterFormat = TextureImporterFormat.ASTC_RGBA_10x10;
                    break;
                case TextureFormat.ASTC_RGBA_12x12:
                    texImporterFormat = TextureImporterFormat.ASTC_RGBA_12x12;
                    break;
                case TextureFormat.ASTC_RGBA_4x4:
                    texImporterFormat = TextureImporterFormat.ASTC_RGBA_4x4;
                    break;
                case TextureFormat.ASTC_RGBA_5x5:
                    texImporterFormat = TextureImporterFormat.ASTC_RGBA_5x5;
                    break;
                case TextureFormat.ASTC_RGBA_6x6:
                    texImporterFormat = TextureImporterFormat.ASTC_RGBA_6x6;
                    break;
                case TextureFormat.ASTC_RGBA_8x8:
                    texImporterFormat = TextureImporterFormat.ASTC_RGBA_8x8;
                    break;

                case TextureFormat.ASTC_RGB_10x10:
                    texImporterFormat = TextureImporterFormat.ASTC_RGB_10x10;
                    break;
                case TextureFormat.ASTC_RGB_12x12:
                    texImporterFormat = TextureImporterFormat.ASTC_RGB_12x12;
                    break;
                case TextureFormat.ASTC_RGB_4x4:
                    texImporterFormat = TextureImporterFormat.ASTC_RGB_4x4;
                    break;
                case TextureFormat.ASTC_RGB_5x5:
                    texImporterFormat = TextureImporterFormat.ASTC_RGB_5x5;
                    break;
                case TextureFormat.ASTC_RGB_6x6:
                    texImporterFormat = TextureImporterFormat.ASTC_RGB_6x6;
                    break;
                case TextureFormat.ASTC_RGB_8x8:
                    texImporterFormat = TextureImporterFormat.ASTC_RGB_8x8;
                    break;

                case TextureFormat.BC4:
                    texImporterFormat = TextureImporterFormat.BC4;
                    break;
                case TextureFormat.BC5:
                    texImporterFormat = TextureImporterFormat.BC5;
                    break;
                case TextureFormat.BC6H:
                    texImporterFormat = TextureImporterFormat.BC6H;
                    break;
                case TextureFormat.BC7:
                    texImporterFormat = TextureImporterFormat.BC7;
                    break;

                case TextureFormat.DXT1:
                    texImporterFormat = TextureImporterFormat.DXT1;
                    break;
                case TextureFormat.DXT1Crunched:
                    texImporterFormat = TextureImporterFormat.DXT1Crunched;
                    break;
                case TextureFormat.DXT5:
                    texImporterFormat = TextureImporterFormat.DXT5;
                    break;
                case TextureFormat.DXT5Crunched:
                    texImporterFormat = TextureImporterFormat.DXT5Crunched;
                    break;

                case TextureFormat.EAC_R:
                    texImporterFormat = TextureImporterFormat.EAC_R;
                    break;
                case TextureFormat.EAC_RG:
                    texImporterFormat = TextureImporterFormat.EAC_RG;
                    break;
                case TextureFormat.EAC_RG_SIGNED:
                    texImporterFormat = TextureImporterFormat.EAC_RG_SIGNED;
                    break;
                case TextureFormat.EAC_R_SIGNED:
                    texImporterFormat = TextureImporterFormat.EAC_R_SIGNED;
                    break;

                case TextureFormat.ETC_RGB4:
                    texImporterFormat = TextureImporterFormat.ETC_RGB4;
                    break;
#if UNITY_2017_3_OR_NEWER
                case TextureFormat.ETC_RGB4Crunched:
                    texImporterFormat = TextureImporterFormat.ETC_RGB4Crunched;
                    break;
#endif
                case TextureFormat.ETC2_RGB:
                    texImporterFormat = TextureImporterFormat.ETC2_RGB4;
                    break;
                case TextureFormat.ETC2_RGBA8:
                    texImporterFormat = TextureImporterFormat.ETC2_RGBA8;
                    break;
#if UNITY_2017_3_OR_NEWER
                case TextureFormat.ETC2_RGBA8Crunched:
                    texImporterFormat = TextureImporterFormat.ETC2_RGBA8Crunched;
                    break;
#endif
                case TextureFormat.PVRTC_RGB2:
                    texImporterFormat = TextureImporterFormat.PVRTC_RGB2;
                    break;
                case TextureFormat.PVRTC_RGB4:
                    texImporterFormat = TextureImporterFormat.PVRTC_RGB4;
                    break;
                case TextureFormat.PVRTC_RGBA2:
                    texImporterFormat = TextureImporterFormat.PVRTC_RGBA2;
                    break;
                case TextureFormat.PVRTC_RGBA4:
                    texImporterFormat = TextureImporterFormat.PVRTC_RGBA4;
                    break;
#if UNITY_2018_3_OR_NEWER
                case TextureFormat.R16:
                    texImporterFormat = TextureImporterFormat.R16;
                    break;
#endif
#if UNITY_2018_2_OR_NEWER
                case TextureFormat.R8:
                    texImporterFormat = TextureImporterFormat.R8;
                    break;
#endif
#if UNITY_2018_3_OR_NEWER
                case TextureFormat.RFloat:
                    texImporterFormat = TextureImporterFormat.RFloat;
                    break;
#endif
#if UNITY_2018_3_OR_NEWER
                case TextureFormat.RG16:
                    texImporterFormat = TextureImporterFormat.RG16;
                    break;
#endif
#if UNITY_2018_3_OR_NEWER
                case TextureFormat.RGB9e5Float:
                    texImporterFormat = TextureImporterFormat.RGB9E5;
                    break;
#endif
#if UNITY_2018_3_OR_NEWER
                case TextureFormat.RGHalf:
                    texImporterFormat = TextureImporterFormat.RGHalf;
                    break;
#endif
#if UNITY_2018_3_OR_NEWER
                case TextureFormat.RGFloat:
                    texImporterFormat = TextureImporterFormat.RGFloat;
                    break;
#endif
#if UNITY_2018_3_OR_NEWER
                case TextureFormat.RHalf:
                    texImporterFormat = TextureImporterFormat.RHalf;
                    break;
#endif
                default:
                    texImporterFormat = TextureImporterFormat.ARGB32;
                    success = false;
                    Debug.LogError("No mapping for TextureFormat: " + texFormat + " to a TextureImporterFormat. ");
                    break;
            }

            return texImporterFormat; 
        }

        public bool TextureImporterFormatExistsForTextureFormat(TextureFormat texFormat)
        {
            bool success;
            Map_TextureFormat_2_TextureImporterFormat(texFormat, out success);
            return success;
        }

        public bool ConvertTexture2DArray(Texture2DArray inArray, Texture2DArray outArray, TextureFormat outFormat)
        {
            bool foundFormat;
            TextureImporterFormat outImporterFormat = Map_TextureFormat_2_TextureImporterFormat(outFormat, out foundFormat);
            if (!foundFormat)
            {
                Debug.LogError("Could not find a TextureImporterFormat matching format: " + outFormat);
                return false;
            }

            Texture2D tempTex = new Texture2D(inArray.width, inArray.height, inArray.format, true);

            // Create a temporary texture asset of the correct size. We need this for the TextureImporter
            string shortPath, fullPath;
            {
                shortPath = MB_EditorUtil.GetShortPathToWorkingDirectoryAndEnsureItExists();
                shortPath += inArray.name + "_" + outFormat.ToString() + "_TEMP.png";
                shortPath = AssetDatabase.GenerateUniqueAssetPath(shortPath);
                fullPath = MB_Utility.ConvertAssetsRelativePathToFullSystemPath(shortPath);
                Debug.Log("Saving temp tex: " + fullPath + " shortPth " + shortPath);
                byte[] bytes = tempTex.EncodeToPNG();
                System.IO.File.WriteAllBytes(fullPath, bytes);
                AssetDatabase.Refresh();
            }

            // This is horrible, but the only way to convert textures to compressed formats it through the asset importer. We need an asset!
            TextureImporter ai = (TextureImporter)AssetImporter.GetAtPath(shortPath);
            {
                ai.isReadable = true;
                TextureImporterPlatformSettings tips = new TextureImporterPlatformSettings();
                tips.format = outImporterFormat;
                //tips.textureCompression = TextureImporterCompression.Uncompressed;
                ai.SetPlatformTextureSettings(tips);
                ai.SaveAndReimport();
            }

            for (int sliceIdx = 0; sliceIdx < inArray.depth; sliceIdx++)
            {
                Graphics.CopyTexture(inArray, sliceIdx, 0, tempTex, sliceIdx, 0);
                byte[] bytes = tempTex.EncodeToPNG();
                System.IO.File.WriteAllBytes(fullPath, bytes);
                AssetDatabase.Refresh();
                Texture2D srcTexConverted = UnityEditor.AssetDatabase.LoadAssetAtPath<Texture2D>(shortPath);
                int numMips = srcTexConverted.mipmapCount;
                for (int mipIdx = 0; mipIdx < numMips; mipIdx++)
                {
                    Graphics.CopyTexture(srcTexConverted, 0, mipIdx, outArray, sliceIdx, mipIdx);
                }
            }

            MonoBehaviour.DestroyImmediate(tempTex);
            AssetDatabase.DeleteAsset(shortPath);
            return true;
        }
    }
}