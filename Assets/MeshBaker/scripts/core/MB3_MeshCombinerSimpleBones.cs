using System.Collections;
using System;
using System.Collections.Generic;
using UnityEngine;

namespace DigitalOpus.MB.Core
{

    public partial class MB3_MeshCombinerSingle : MB3_MeshCombiner
    {
        public class MB3_MeshCombinerSimpleBones
        {
            MB3_MeshCombinerSingle combiner;
            List<MB3_MeshCombinerSingle.MB_DynamicGameObject>[] boneIdx2dgoMap = null;
            HashSet<int> boneIdxsToDelete = new HashSet<int>();
            HashSet<MB3_MeshCombinerSingle.BoneAndBindpose> bonesToAdd = new HashSet<MB3_MeshCombinerSingle.BoneAndBindpose>();
            Dictionary<BoneAndBindpose, int> bone2idx = new Dictionary<BoneAndBindpose, int>();

            public MB3_MeshCombinerSimpleBones(MB3_MeshCombinerSingle cm)
            {
                combiner = cm;
            }

            public HashSet<MB3_MeshCombinerSingle.BoneAndBindpose> GetBonesToAdd()
            {
                return bonesToAdd;
            }

            public int GetNumBonesToDelete()
            {
                return boneIdxsToDelete.Count;
            }

            private bool _didSetup = false;
            public void BuildBoneIdx2DGOMapIfNecessary(int[] _goToDelete)
            {
                _didSetup = false;
                if (combiner.settings.renderType == MB_RenderType.skinnedMeshRenderer)
                {
                    if (_goToDelete.Length > 0)
                    {
                        boneIdx2dgoMap = _buildBoneIdx2dgoMap();
                    }

                    for (int i = 0; i < combiner.bones.Length; i++)
                    {
                        BoneAndBindpose bn = new BoneAndBindpose(combiner.bones[i], combiner.bindPoses[i]);
                        bone2idx.Add(bn, i);
                    }

                    _didSetup = true;
                }
            }

            public void FindBonesToDelete(MB_DynamicGameObject dgo)
            {
                Debug.Assert(_didSetup);
                Debug.Assert(combiner.settings.renderType == MB_RenderType.skinnedMeshRenderer);
                // We could be working with adding and deleting smr body parts from the same rig. Different smrs will share 
                // the same bones. Track if we need to delete a bone or not.
                for (int j = 0; j < dgo.indexesOfBonesUsed.Length; j++)
                {
                    int idxOfUsedBone = dgo.indexesOfBonesUsed[j];
                    List<MB_DynamicGameObject> dgosThatUseBone = boneIdx2dgoMap[idxOfUsedBone];
                    if (dgosThatUseBone.Contains(dgo))
                    {
                        dgosThatUseBone.Remove(dgo);
                        if (dgosThatUseBone.Count == 0)
                        {
                            boneIdxsToDelete.Add(idxOfUsedBone);
                        }
                    }
                }
            }

            public int GetNewBonesLength()
            {
                return combiner.bindPoses.Length + bonesToAdd.Count - boneIdxsToDelete.Count;
            }

            public void CollectBonesToAddForDGO(MB_DynamicGameObject dgo, Renderer r, MeshChannelsCache meshChannelCache)
            {
                Debug.Assert(_didSetup, "Need to setup first.");
                Debug.Assert(combiner.settings.renderType == MB_RenderType.skinnedMeshRenderer);
                // We could be working with adding and deleting smr body parts from the same rig. Different smrs will share 
                // the same bones.

                //cache the bone data that we will be adding.
                Matrix4x4[] dgoBindPoses = dgo._tmpCachedBindposes = meshChannelCache.GetBindposes(r);
                BoneWeight[] dgoBoneWeights = dgo._tmpCachedBoneWeights = meshChannelCache.GetBoneWeights(r, dgo.numVerts);
                Transform[] dgoBones = dgo._tmpCachedBones = combiner._getBones(r);

                // The mesh being added may not use all bones on the rig. Find the bones actually used.
                int[] usedBoneIdx2srcMeshBoneIdx;
                {
                    /*
                    HashSet<int> usedBones = new HashSet<int>();
                    for (int j = 0; j < dgoBoneWeights.Length; j++)
                    {
                        usedBones.Add(dgoBoneWeights[j].boneIndex0);
                        usedBones.Add(dgoBoneWeights[j].boneIndex1);
                        usedBones.Add(dgoBoneWeights[j].boneIndex2);
                        usedBones.Add(dgoBoneWeights[j].boneIndex3);
                    }

                    usedBoneIdx2srcMeshBoneIdx = new int[usedBones.Count];
                    usedBones.CopyTo(usedBoneIdx2srcMeshBoneIdx);
                    */
                }

                {
                    usedBoneIdx2srcMeshBoneIdx = new int[dgoBones.Length];
                    for (int i = 0; i < usedBoneIdx2srcMeshBoneIdx.Length; i++) usedBoneIdx2srcMeshBoneIdx[i] = i;
                }

                // For each bone see if it exists in the bones array (with the same bindpose.
                for (int i = 0; i < usedBoneIdx2srcMeshBoneIdx.Length; i++)
                {
                    bool foundInBonesList = false;
                    int bidx;
                    int dgoBoneIdx = usedBoneIdx2srcMeshBoneIdx[i];
                    BoneAndBindpose bb = new BoneAndBindpose(dgoBones[dgoBoneIdx], dgoBindPoses[dgoBoneIdx]);
                    if (bone2idx.TryGetValue(bb, out bidx))
                    {
                        if (dgoBones[dgoBoneIdx] == combiner.bones[bidx] && !boneIdxsToDelete.Contains(bidx))
                        {
                            if (dgoBindPoses[dgoBoneIdx] == combiner.bindPoses[bidx])
                            {
                                foundInBonesList = true;
                            }
                        }
                    }

                    if (!foundInBonesList)
                    {
                        if (!bonesToAdd.Contains(bb))
                        {
                            bonesToAdd.Add(bb);
                        }
                    }
                }

                dgo._tmpIndexesOfSourceBonesUsed = usedBoneIdx2srcMeshBoneIdx;
            }

            private List<MB3_MeshCombinerSingle.MB_DynamicGameObject>[] _buildBoneIdx2dgoMap()
            {
                List<MB3_MeshCombinerSingle.MB_DynamicGameObject>[] boneIdx2dgoMap = new List<MB3_MeshCombinerSingle.MB_DynamicGameObject>[combiner.bones.Length];
                for (int i = 0; i < boneIdx2dgoMap.Length; i++) boneIdx2dgoMap[i] = new List<MB3_MeshCombinerSingle.MB_DynamicGameObject>();
                // build the map of bone indexes to objects that use them
                for (int i = 0; i < combiner.mbDynamicObjectsInCombinedMesh.Count; i++)
                {
                    MB3_MeshCombinerSingle.MB_DynamicGameObject dgo = combiner.mbDynamicObjectsInCombinedMesh[i];
                    for (int j = 0; j < dgo.indexesOfBonesUsed.Length; j++)
                    {
                        boneIdx2dgoMap[dgo.indexesOfBonesUsed[j]].Add(dgo);
                    }
                }

                return boneIdx2dgoMap;
            }

            public void CopyBonesWeAreKeepingToNewBonesArrayAndAdjustBWIndexes(Transform[] nbones, Matrix4x4[] nbindPoses, BoneWeight[] nboneWeights, int totalDeleteVerts)
            {

                // bones are copied separately because some dgos share bones
                if (boneIdxsToDelete.Count > 0)
                {
                    int[] boneIdxsToDel = new int[boneIdxsToDelete.Count];
                    boneIdxsToDelete.CopyTo(boneIdxsToDel);
                    Array.Sort(boneIdxsToDel);
                    //bones are being moved in bones array so need to do some remapping
                    int[] oldBonesIndex2newBonesIndexMap = new int[combiner.bones.Length];
                    int newIdx = 0;
                    int indexInDeleteList = 0;

                    //bones were deleted so we need to rebuild bones and bind poses
                    //and build a map of old bone indexes to new bone indexes
                    //do this by copying old to new skipping ones we are deleting
                    for (int i = 0; i < combiner.bones.Length; i++)
                    {
                        if (indexInDeleteList < boneIdxsToDel.Length &&
                            boneIdxsToDel[indexInDeleteList] == i)
                        {
                            //we are deleting this bone so skip its index
                            indexInDeleteList++;
                            oldBonesIndex2newBonesIndexMap[i] = -1;
                        }
                        else
                        {
                            oldBonesIndex2newBonesIndexMap[i] = newIdx;
                            nbones[newIdx] = combiner.bones[i];
                            nbindPoses[newIdx] = combiner.bindPoses[i];
                            newIdx++;
                        }
                    }
                    //adjust the indexes on the boneWeights
                    int numVertKeeping = combiner.boneWeights.Length - totalDeleteVerts;
                    {
                        for (int i = 0; i < numVertKeeping; i++)
                        {
                            BoneWeight bw = nboneWeights[i];
                            bw.boneIndex0 = oldBonesIndex2newBonesIndexMap[bw.boneIndex0];
                            bw.boneIndex1 = oldBonesIndex2newBonesIndexMap[bw.boneIndex1];
                            bw.boneIndex2 = oldBonesIndex2newBonesIndexMap[bw.boneIndex2];
                            bw.boneIndex3 = oldBonesIndex2newBonesIndexMap[bw.boneIndex3];
                            nboneWeights[i] = bw;
                        }
                    }

                    /*
                    unsafe
                    {
                        fixed (BoneWeight* boneWeightFirstPtr = &nboneWeights[0])
                        {
                            BoneWeight* boneWeightPtr = boneWeightFirstPtr;
                            for (int i = 0; i < numVertKeeping; i++)
                            {
                                boneWeightPtr->boneIndex0 = oldBonesIndex2newBonesIndexMap[boneWeightPtr->boneIndex0];
                                boneWeightPtr->boneIndex1 = oldBonesIndex2newBonesIndexMap[boneWeightPtr->boneIndex1];
                                boneWeightPtr->boneIndex2 = oldBonesIndex2newBonesIndexMap[boneWeightPtr->boneIndex2];
                                boneWeightPtr->boneIndex3 = oldBonesIndex2newBonesIndexMap[boneWeightPtr->boneIndex3];
                                boneWeightPtr++;
                            }
                        }
                    }
                    */

                    //adjust the bone indexes on the dgos from old to new
                    for (int i = 0; i < combiner.mbDynamicObjectsInCombinedMesh.Count; i++)
                    {
                        MB_DynamicGameObject dgo = combiner.mbDynamicObjectsInCombinedMesh[i];
                        for (int j = 0; j < dgo.indexesOfBonesUsed.Length; j++)
                        {
                            dgo.indexesOfBonesUsed[j] = oldBonesIndex2newBonesIndexMap[dgo.indexesOfBonesUsed[j]];
                        }
                    }
                }
                else
                { //no bones are moving so can simply copy bones from old to new
                    Array.Copy(combiner.bones, nbones, combiner.bones.Length);
                    Array.Copy(combiner.bindPoses, nbindPoses, combiner.bindPoses.Length);
                }
            }

            public static void AddBonesToNewBonesArrayAndAdjustBWIndexes(MB3_MeshCombinerSingle combiner, MB_DynamicGameObject dgo, Renderer r, int vertsIdx,
                                                             Transform[] nbones, BoneWeight[] nboneWeights, MeshChannelsCache meshChannelCache)
            {
                //Renderer r = MB_Utility.GetRenderer(go);
                Transform[] dgoBones = dgo._tmpCachedBones;
                Matrix4x4[] dgoBindPoses = dgo._tmpCachedBindposes;
                BoneWeight[] dgoBoneWeights = dgo._tmpCachedBoneWeights;

                int[] srcIndex2combinedIndexMap = new int[dgoBones.Length];
                for (int j = 0; j < dgo._tmpIndexesOfSourceBonesUsed.Length; j++)
                {
                    int dgoBoneIdx = dgo._tmpIndexesOfSourceBonesUsed[j];

                    for (int k = 0; k < nbones.Length; k++)
                    {
                        if (dgoBones[dgoBoneIdx] == nbones[k])
                        {
                            if (dgoBindPoses[dgoBoneIdx] == combiner.bindPoses[k])
                            {
                                srcIndex2combinedIndexMap[dgoBoneIdx] = k;
                                break;
                            }
                        }
                    }
                }
                //remap the bone weights for this dgo
                //build a list of usedBones, can't trust dgoBones because it contains all bones in the rig
                for (int j = 0; j < dgoBoneWeights.Length; j++)
                {
                    int newVertIdx = vertsIdx + j;
                    nboneWeights[newVertIdx].boneIndex0 = srcIndex2combinedIndexMap[dgoBoneWeights[j].boneIndex0];
                    nboneWeights[newVertIdx].boneIndex1 = srcIndex2combinedIndexMap[dgoBoneWeights[j].boneIndex1];
                    nboneWeights[newVertIdx].boneIndex2 = srcIndex2combinedIndexMap[dgoBoneWeights[j].boneIndex2];
                    nboneWeights[newVertIdx].boneIndex3 = srcIndex2combinedIndexMap[dgoBoneWeights[j].boneIndex3];
                    nboneWeights[newVertIdx].weight0 = dgoBoneWeights[j].weight0;
                    nboneWeights[newVertIdx].weight1 = dgoBoneWeights[j].weight1;
                    nboneWeights[newVertIdx].weight2 = dgoBoneWeights[j].weight2;
                    nboneWeights[newVertIdx].weight3 = dgoBoneWeights[j].weight3;
                }
                // repurposing the _tmpIndexesOfSourceBonesUsed since
                //we don't need it anymore and this saves a memory allocation . remap the indexes that point to source bones to combined bones.
                for (int j = 0; j < dgo._tmpIndexesOfSourceBonesUsed.Length; j++)
                {
                    dgo._tmpIndexesOfSourceBonesUsed[j] = srcIndex2combinedIndexMap[dgo._tmpIndexesOfSourceBonesUsed[j]];
                }
                dgo.indexesOfBonesUsed = dgo._tmpIndexesOfSourceBonesUsed;
                dgo._tmpIndexesOfSourceBonesUsed = null;
                dgo._tmpCachedBones = null;
                dgo._tmpCachedBindposes = null;
                dgo._tmpCachedBoneWeights = null;

                //check original bones and bindPoses
                /*
                for (int j = 0; j < dgo.indexesOfBonesUsed.Length; j++) {
                    Transform bone = bones[dgo.indexesOfBonesUsed[j]];
                    Matrix4x4 bindpose = bindPoses[dgo.indexesOfBonesUsed[j]];
                    bool found = false;
                    for (int k = 0; k < dgo._originalBones.Length; k++) {
                        if (dgo._originalBones[k] == bone && dgo._originalBindPoses[k] == bindpose) {
                            found = true;
                        }
                    }
                    if (!found) Debug.LogError("A Mismatch between original bones and bones array. " + dgo.name);
                }
                */
            }
        }
    }
}
