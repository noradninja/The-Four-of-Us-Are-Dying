/**
 *	\brief Hax!  DLLs cannot interpret preprocessor directives, so this class acts as a "bridge"
 */
using System;
using UnityEngine;
using System.Collections;
using System.Collections.Generic;

#if MB_USING_HDRP && UNITY_2019_3_OR_NEWER
    using UnityEngine.Rendering.HighDefinition;
#elif MB_USING_HDRP && UNITY_2018_4_OR_NEWER
    using UnityEngine.Experimental.Rendering.HDPipeline;
#endif

namespace DigitalOpus.MB.Core
{
    public class MBVersionConcrete : MBVersionInterface
    {
        public string version()
        {
            return "3.32.0";
        }

        public int GetMajorVersion()
        {
            /*
#if UNITY_3_0 || UNITY_3_0_0 || UNITY_3_1 || UNITY_3_2 || UNITY_3_3 || UNITY_3_4 || UNITY_3_5
                        return 3;
#elif UNITY_4_0 || UNITY_4_0_1 || UNITY_4_1 || UNITY_4_2 || UNITY_4_3 || UNITY_4_4 || UNITY_4_5 || UNITY_4_6 || UNITY_4_7
                        return 4;
#else
                        return 5;
#endif
            */
            string v = Application.unityVersion;
            String[] vs = v.Split(new char[] { '.' });
            return Int32.Parse(vs[0]);
        }

        public int GetMinorVersion()
        {
            /*
#if UNITY_3_0 || UNITY_3_0_0
            return 0;
#elif UNITY_3_1
            return 1;
#elif UNITY_3_2
            return 2;
#elif UNITY_3_3
            return 3;
#elif UNITY_3_4
            return 4;
#elif UNITY_3_5
            return 5;
#elif UNITY_4_0 || UNITY_4_0_1
            return 0;
#elif UNITY_4_1
            return 1;
#elif UNITY_4_2
            return 2;
#elif UNITY_4_3
            return 3;
#elif UNITY_4_4
            return 4;
#elif UNITY_4_5
            return 5;
#else
            return 0;
#endif
            */
            string v = Application.unityVersion;     String[] vs = v.Split(new char[] { '.' });
            return Int32.Parse(vs[1]);
        }

        public bool GetActive(GameObject go)
        {
#if UNITY_3_0 || UNITY_3_0_0 || UNITY_3_1 || UNITY_3_2 || UNITY_3_3 || UNITY_3_4 || UNITY_3_5
            return go.active;
#else
            return go.activeInHierarchy;
#endif
        }

        public void SetActive(GameObject go, bool isActive)
        {
#if UNITY_3_0 || UNITY_3_0_0 || UNITY_3_1 || UNITY_3_2 || UNITY_3_3 || UNITY_3_4 || UNITY_3_5
            go.active = isActive;
#else
            go.SetActive(isActive);
#endif
        }

        public void SetActiveRecursively(GameObject go, bool isActive)
        {
#if UNITY_3_0 || UNITY_3_0_0 || UNITY_3_1 || UNITY_3_2 || UNITY_3_3 || UNITY_3_4 || UNITY_3_5
            go.SetActiveRecursively(isActive);
#else
            go.SetActive(isActive);
#endif
        }

        public UnityEngine.Object[] FindSceneObjectsOfType(Type t)
        {
#if UNITY_3_0 || UNITY_3_0_0 || UNITY_3_1 || UNITY_3_2 || UNITY_3_3 || UNITY_3_4 || UNITY_3_5
            return GameObject.FindSceneObjectsOfType(t);
#else
            return GameObject.FindObjectsOfType(t);
#endif
        }

        public void OptimizeMesh(Mesh m)
        {
#if UNITY_EDITOR
#if UNITY_5_5_OR_NEWER
            UnityEditor.MeshUtility.Optimize(m);
#else
            m.Optimize();
#endif
#endif
        }


        public bool IsRunningAndMeshNotReadWriteable(Mesh m)
        {
            if (Application.isPlaying)
            {
#if UNITY_3_0 || UNITY_3_0_0 || UNITY_3_1 || UNITY_3_2 || UNITY_3_3 || UNITY_3_4 || UNITY_3_5
                return false;
#else
                return !m.isReadable;
#endif
            }
            else
            {
                return false;
            }
        }

        Vector2 _HALF_UV = new Vector2(.5f, .5f);
        public Vector2[] GetMeshUV1s(Mesh m, MB2_LogLevel LOG_LEVEL)
        {
            Vector2[] uv;
#if (UNITY_4_6 || UNITY_4_7 || UNITY_4_5 || UNITY_4_3 || UNITY_4_2 || UNITY_4_1 || UNITY_4_0_1 || UNITY_4_0 || UNITY_3_5)
            uv = m.uv1;

#else
            if (LOG_LEVEL >= MB2_LogLevel.warn) MB2_Log.LogDebug("UV1 does not exist in Unity 5+");
            uv = m.uv;
#endif
            if (uv.Length == 0)
            {
                if (LOG_LEVEL >= MB2_LogLevel.debug) MB2_Log.LogDebug("Mesh " + m + " has no uv1s. Generating");
                if (LOG_LEVEL >= MB2_LogLevel.warn) Debug.LogWarning("Mesh " + m + " didn't have uv1s. Generating uv1s.");
                uv = new Vector2[m.vertexCount];
                for (int i = 0; i < uv.Length; i++) { uv[i] = _HALF_UV; }
            }
            return uv;
        }

        public Vector2[] GetMeshUVChannel(int channel, Mesh m, MB2_LogLevel LOG_LEVEL)
        {
            Vector2[] uvs = new Vector2[0];

            switch (channel)
            {
                case 0:
                    uvs = m.uv;
                    break;
                case 2:
                    uvs = m.uv2;
                    break;
                case 3:
                    uvs = m.uv3;
                    break;
                case 4:
                    uvs = m.uv4;
                    break;
#if UNITY_2018_2_OR_NEWER
                case 5:
                    uvs = m.uv5;
                    break;
                case 6:
                    uvs = m.uv6;
                    break;
                case 7:
                    uvs = m.uv7;
                    break;
                case 8:
                    uvs = m.uv8;
                    break;
#endif
                default:
                    Debug.LogError("Mesh does not have UV channel " + channel);
                    break;
            }

            if (uvs.Length == 0)
            {
                if (LOG_LEVEL >= MB2_LogLevel.debug) MB2_Log.LogDebug("Mesh " + m + " has no uv" + channel + ". Generating");
                uvs = new Vector2[m.vertexCount];
                for (int i = 0; i < uvs.Length; i++) { uvs[i] = _HALF_UV; }
            }

            return uvs;
        }

        public void MeshClear(Mesh m, bool t)
        {
#if UNITY_3_5
                m.Clear();
#else
            m.Clear(t);
#endif
        }

        public void MeshAssignUVChannel(int channel, Mesh m, Vector2[] uvs)
        {
            switch (channel)
            {
                case 0:
                    m.uv = uvs;
                    break;
                case 2:
                    m.uv2 = uvs;
                    break;
                case 3:
                    m.uv3 = uvs;
                    break;
                case 4:
                    m.uv4 = uvs;
                    break;
#if UNITY_2018_2_OR_NEWER
                case 5:
                    m.uv5 = uvs;
                    break;
                case 6:
                    m.uv6 = uvs;
                    break;
                case 7:
                    m.uv7 = uvs;
                    break;
                case 8:
                    m.uv8 = uvs;
                    break;
#endif
                default:
                    Debug.LogError("Mesh does not have UV channel " + channel);
                    break;
            }
        }

        public Vector4 GetLightmapTilingOffset(Renderer r)
        {
#if (UNITY_4_6 || UNITY_4_7 || UNITY_4_5 || UNITY_4_3 || UNITY_4_2 || UNITY_4_1 || UNITY_4_0_1 || UNITY_4_0 || UNITY_3_5)
              return r.lightmapTilingOffset ;
#else
            return r.lightmapScaleOffset; //r.lightmapScaleOffset ;
#endif
        }
#if UNITY_5_OR_NEWER
        public Transform[] GetBones(Renderer r, bool isSkinnedMeshWithBones)
        {
            if (r is SkinnedMeshRenderer)
            {
                Transform[] bone;
                //check if I need to deoptimize
                Animator anim = r.GetComponentInParent<Animator>();

                if (anim != null)
                {
                    if (anim.hasTransformHierarchy)
                    {
                        //nothing to do
                    } else if (anim.isOptimizable)
                    {
                        //Deoptimize
                        AnimatorUtility.DeoptimizeTransformHierarchy(anim.gameObject);
                        
                    }
                    else
                    {
                        Debug.LogError("Could not getBones. Bones optimized but could not create TransformHierarchy.");
                        return null;
                    }
                    bone = ((SkinnedMeshRenderer)r).bones;
                    //can't deoptimize here because the transforms need to exist for the combined  mesh
                } else
                {
                    //no Animator component but check to see if bones were optimized on import
                    bone = ((SkinnedMeshRenderer)r).bones;
#if UNITY_EDITOR
                    if (bone.Length == 0)
                    {
                    Mesh m = ((SkinnedMeshRenderer)r).sharedMesh;
                    if (m.bindposes.Length != bone.Length) Debug.LogError("SkinnedMesh (" + r.gameObject + ") in the list of objects to combine has no bones. Check that 'optimize game object' is not checked in the 'Rig' tab of the asset importer. Mesh Baker cannot combine optimized skinned meshes because the bones are not available.");
                }
#endif
                }
                return bone;	
            }
            else if (r is MeshRenderer)
            {
                Transform[] bone = new Transform[1];
                bone[0] = r.transform;
                return bone;
            }
            else {
                Debug.LogError("Could not getBones. Object is not a Renderer.");
                return null;
            }
        }
#else
        public Transform[] GetBones(Renderer r, bool isSkinnedMeshWithBones)
        {
            if (isSkinnedMeshWithBones)
            {
                Transform[] bone = ((SkinnedMeshRenderer)r).bones;
#if UNITY_EDITOR
                if (bone.Length == 0)
                {
                    Mesh m = ((SkinnedMeshRenderer)r).sharedMesh;
                    if (m.bindposes.Length != bone.Length) Debug.LogError("SkinnedMesh (" + r.gameObject + ") in the list of objects to combine has no bones. Check that 'optimize game object' is not checked in the 'Rig' tab of the asset importer. Mesh Baker cannot combine optimized skinned meshes because the bones are not available.");
                }
#endif
                return bone;
            }
            else if (r is MeshRenderer ||
                (r is SkinnedMeshRenderer && !isSkinnedMeshWithBones))
            {
                Transform[] bone = new Transform[1];
                bone[0] = r.transform;
                return bone;
            }
            else
            {
                Debug.LogError("Could not getBones. Object does not have a renderer");
                return null;
            }
        }
#endif

        public int GetBlendShapeFrameCount(Mesh m, int shapeIndex)
        {
#if UNITY_5_3_OR_NEWER
            return m.GetBlendShapeFrameCount(shapeIndex);
#else
            return 0;
#endif
        }

        public float GetBlendShapeFrameWeight(Mesh m, int shapeIndex, int frameIndex)
        {
#if UNITY_5_3_OR_NEWER
            return m.GetBlendShapeFrameWeight(shapeIndex, frameIndex);
#else
            return 0;
#endif
        }

        public void GetBlendShapeFrameVertices(Mesh m, int shapeIndex, int frameIndex, Vector3[] vs, Vector3[] ns, Vector3[] ts)
        {
#if UNITY_5_3_OR_NEWER
            m.GetBlendShapeFrameVertices(shapeIndex, frameIndex, vs, ns, ts);
#endif
        }

        public void ClearBlendShapes(Mesh m)
        {
#if UNITY_5_3_OR_NEWER
            m.ClearBlendShapes();
#endif
        }

        public void AddBlendShapeFrame(Mesh m, string nm, float wt, Vector3[] vs, Vector3[] ns, Vector3[] ts)
        {
#if UNITY_5_3_OR_NEWER
            m.AddBlendShapeFrame(nm, wt, vs, ns, ts);
#endif
        }

        public int MaxMeshVertexCount()
        {
#if UNITY_2017_3_OR_NEWER
            return 2147483646;
#else
            return 65535;
#endif
        }

        public void SetMeshIndexFormatAndClearMesh(Mesh m, int numVerts, bool vertices, bool justClearTriangles)
        {
#if UNITY_2017_3_OR_NEWER
            if (vertices && numVerts > 65534 && m.indexFormat == UnityEngine.Rendering.IndexFormat.UInt16)
            {
                MBVersion.MeshClear(m, false);
                m.indexFormat = UnityEngine.Rendering.IndexFormat.UInt32;
                return;
            }
            else if (vertices && numVerts <= 65534 && m.indexFormat == UnityEngine.Rendering.IndexFormat.UInt32)
            {
                MBVersion.MeshClear(m, false);
                m.indexFormat = UnityEngine.Rendering.IndexFormat.UInt16;
                return;
            }
#endif
            if (justClearTriangles)
            {
                MBVersion.MeshClear(m, true); //clear just triangles 
            }
            else
            {//clear all the data and start with a blank mesh
                MBVersion.MeshClear(m, false);
            }
        }

        public bool GraphicsUVStartsAtTop()
        {
#if UNITY_2017_1_OR_NEWER
            return SystemInfo.graphicsUVStartsAtTop;
#else
            if (SystemInfo.graphicsDeviceVersion.Contains("metal"))
            {
                return false;
            }
            else
            {
                // "opengl es, direct3d"
                return true;
            }
#endif
        }

        public bool IsTextureReadable(Texture2D tex)
        {
#if UNITY_2018_3_OR_NEWER
            return tex.isReadable;
#else
            try
            {
                tex.GetPixel(0, 0);
                return true;
            }
            catch
            {
                return false;
            }
#endif
        }

        public bool CollectPropertyNames(List<ShaderTextureProperty> texPropertyNames, ShaderTextureProperty[] shaderTexPropertyNames, List<ShaderTextureProperty> _customShaderPropNames, Material resultMaterial, MB2_LogLevel LOG_LEVEL)
        {
#if UNITY_2019_3_OR_NEWER
            // 2018.2 and up
            // Collect the property names from the shader
            // Check with the lists of property names to flag which ones are normal maps.
            if (resultMaterial != null && resultMaterial.shader != null)
            {
                Shader s = resultMaterial.shader;

                for (int i = 0; i < s.GetPropertyCount(); i++)
                {
                    if (s.GetPropertyType(i) == UnityEngine.Rendering.ShaderPropertyType.Texture)
                    {
                        string matPropName = s.GetPropertyName(i);
                        if (resultMaterial.GetTextureOffset(matPropName) != new Vector2(0f, 0f))
                        {
                            if (LOG_LEVEL >= MB2_LogLevel.warn) Debug.LogWarning("Result material has non-zero offset for property " + matPropName + ". This is probably incorrect.");
                        }

                        if (resultMaterial.GetTextureScale(matPropName) != new Vector2(1f, 1f))
                        {
                            if (LOG_LEVEL >= MB2_LogLevel.warn) Debug.LogWarning("Result material should probably have tiling of 1,1 for propert " + matPropName);
                        }

                        ShaderTextureProperty pn = null;
                        // We need to know if the property is a normal map or not.
                        // first check the list of default names
                        for (int defaultIdx = 0; defaultIdx < shaderTexPropertyNames.Length; defaultIdx++)
                        {
                            if (shaderTexPropertyNames[defaultIdx].name == matPropName)
                            {
                                pn = new ShaderTextureProperty(matPropName, shaderTexPropertyNames[defaultIdx].isNormalMap);
                            }
                        }

                        // now check the list of custom property names
                        for (int custPropIdx = 0; custPropIdx < _customShaderPropNames.Count; custPropIdx++)
                        {
                            if (_customShaderPropNames[custPropIdx].name == matPropName)
                            {
                                pn = new ShaderTextureProperty(matPropName, _customShaderPropNames[custPropIdx].isNormalMap);
                            }
                        }

                        if (pn == null)
                        {
                            pn = new ShaderTextureProperty(matPropName, false, true);
                        }

                        texPropertyNames.Add(pn);
                    }
                }
            }

            return true;
#elif UNITY_2018_3_OR_NEWER
            // 2018.2 and up
            // Collect the property names from the material
            // Check with the lists of property names to flag which ones are normal maps.
            string[] matPropertyNames = resultMaterial.GetTexturePropertyNames();
            for (int matIdx = 0; matIdx < matPropertyNames.Length; matIdx++)
            {
                string matPropName = matPropertyNames[matIdx];
                if (resultMaterial.GetTextureOffset(matPropName) != new Vector2(0f, 0f))
                {
                    if (LOG_LEVEL >= MB2_LogLevel.warn) Debug.LogWarning("Result material has non-zero offset for property " + matPropName + ". This is probably incorrect.");
                }

                if (resultMaterial.GetTextureScale(matPropName) != new Vector2(1f, 1f))
                {
                    if (LOG_LEVEL >= MB2_LogLevel.warn) Debug.LogWarning("Result material should probably have tiling of 1,1 for propert " + matPropName);
                }

                ShaderTextureProperty pn = null;
                // We need to know if the property is a normal map or not.
                // first check the list of default names
                for (int defaultIdx = 0; defaultIdx < shaderTexPropertyNames.Length; defaultIdx++)
                {
                    if (shaderTexPropertyNames[defaultIdx].name == matPropName)
                    {
                        pn = new ShaderTextureProperty(matPropName, shaderTexPropertyNames[defaultIdx].isNormalMap);
                    }
                }

                // now check the list of custom property names
                for (int custPropIdx = 0; custPropIdx < _customShaderPropNames.Count; custPropIdx++)
                {
                    if (_customShaderPropNames[custPropIdx].name == matPropName)
                    {
                        pn = new ShaderTextureProperty(matPropName, _customShaderPropNames[custPropIdx].isNormalMap);
                    }
                }

                if (pn == null)
                {
                    pn = new ShaderTextureProperty(matPropName, false, true);
                }

                texPropertyNames.Add(pn);
            }

            return true;
#else
            { // Pre 2018.2, doesn't have API for querying material for property names.
                //Collect the property names for the textures
                string shaderPropStr = "";
                for (int i = 0; i < shaderTexPropertyNames.Length; i++)
                {
                    if (resultMaterial.HasProperty(shaderTexPropertyNames[i].name))
                    {
                        shaderPropStr += ", " + shaderTexPropertyNames[i].name;
                        if (!texPropertyNames.Contains(shaderTexPropertyNames[i])) texPropertyNames.Add(shaderTexPropertyNames[i]);
                        if (resultMaterial.GetTextureOffset(shaderTexPropertyNames[i].name) != new Vector2(0f, 0f))
                        {
                            if (LOG_LEVEL >= MB2_LogLevel.warn) Debug.LogWarning("Result material has non-zero offset. This is may be incorrect.");
                        }
                        if (resultMaterial.GetTextureScale(shaderTexPropertyNames[i].name) != new Vector2(1f, 1f))
                        {
                            if (LOG_LEVEL >= MB2_LogLevel.warn) Debug.LogWarning("Result material should have tiling of 1,1");
                        }
                    }
                }

                for (int i = 0; i < _customShaderPropNames.Count; i++)
                {
                    if (resultMaterial.HasProperty(_customShaderPropNames[i].name))
                    {
                        shaderPropStr += ", " + _customShaderPropNames[i].name;
                        texPropertyNames.Add(_customShaderPropNames[i]);
                        if (resultMaterial.GetTextureOffset(_customShaderPropNames[i].name) != new Vector2(0f, 0f))
                        {
                            if (LOG_LEVEL >= MB2_LogLevel.warn) Debug.LogWarning("Result material has non-zero offset. This is probably incorrect.");
                        }
                        if (resultMaterial.GetTextureScale(_customShaderPropNames[i].name) != new Vector2(1f, 1f))
                        {
                            if (LOG_LEVEL >= MB2_LogLevel.warn) Debug.LogWarning("Result material should probably have tiling of 1,1.");
                        }
                    }
                    else
                    {
                        if (LOG_LEVEL >= MB2_LogLevel.warn) Debug.LogWarning("Result material shader does not use property " + _customShaderPropNames[i].name + " in the list of custom shader property names");
                    }
                }
            }
            return true;
#endif
        }

        public void DoSpecialRenderPipeline_TexturePackerFastSetup(GameObject cameraGameObject)
        {
            MBVersion.PipelineType pipelineType = DetectPipeline();
#if MB_USING_HDRP && UNITY_2018_4_OR_NEWER
            if (pipelineType != MBVersion.PipelineType.HDRP)
            {
                Debug.LogError("The 'PlayerSettings -> Other Settings -> Scripting Define Symbols' included the symbol 'MB_USING_HDRP' which should only be used " +
                        "if the GraphicsSettings -> Render Pipeline Asset is HDRenderPipelineAsset. The Render Pipeline Asset is NOT HDRenderPipelineAsset. Please " +
                        " remove the symbol MB_USING_HDRP from PlayerSettings -> Other Settings -> Scripting Define Symbols");
            }
            
            HDAdditionalCameraData acd = cameraGameObject.GetComponent<HDAdditionalCameraData>();
            if (acd == null)
            {
                acd = cameraGameObject.AddComponent<HDAdditionalCameraData>();
            }

            acd.volumeLayerMask = LayerMask.GetMask("UI");
#endif
        }

        public ColorSpace GetProjectColorSpace()
        {
#if UNITY_EDITOR
            if (Application.isEditor)
            {
                return UnityEditor.PlayerSettings.colorSpace;
            }
#endif
            if (QualitySettings.desiredColorSpace != QualitySettings.activeColorSpace)
            {
                Debug.LogError("The active color space (" + QualitySettings.activeColorSpace + ") is not the desired color space (" + QualitySettings.desiredColorSpace + "). Baked atlases may be off.");
            }

            return QualitySettings.activeColorSpace;
        }

        public MBVersion.PipelineType DetectPipeline()
        {
#if UNITY_2019_1_OR_NEWER
            if (UnityEngine.Rendering.GraphicsSettings.renderPipelineAsset != null)
            {
                // SRP
                var srpType = UnityEngine.Rendering.GraphicsSettings.renderPipelineAsset.GetType().ToString();
                if (srpType.Contains("HDRenderPipelineAsset"))
                {
                    return MBVersion.PipelineType.HDRP;
                }
                else if (srpType.Contains("UniversalRenderPipelineAsset") || srpType.Contains("LightweightRenderPipelineAsset"))
                {
                    return MBVersion.PipelineType.URP;
                }
                else return MBVersion.PipelineType.Unsupported;
            }
#elif UNITY_2017_1_OR_NEWER
            if (UnityEngine.Rendering.GraphicsSettings.renderPipelineAsset != null) {
                // SRP not supported before 2019
                return MBVersion.PipelineType.Unsupported;
            }
#endif
            // no SRP
            return MBVersion.PipelineType.Default;
        }

        public string UnescapeURL(string url)
        {
#if UNITY_2017_3_OR_NEWER
            return UnityEngine.Networking.UnityWebRequest.UnEscapeURL(url);
#else
            // Not correct but not going to spend a lot of effort writing custom
            // code for versions of Unity soon to be depricated.
            return url;
#endif
        }
    }
}