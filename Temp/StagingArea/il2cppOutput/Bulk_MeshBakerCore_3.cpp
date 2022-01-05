#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif


#include <cstring>
#include <string.h>
#include <stdio.h>
#include <cmath>
#include <limits>
#include <assert.h>
#include <stdint.h>

#include "il2cpp-class-internals.h"
#include "codegen/il2cpp-codegen.h"
#include "il2cpp-object-internals.h"

template <typename R>
struct VirtFuncInvoker0
{
	typedef R (*Func)(void*, const RuntimeMethod*);

	static inline R Invoke (Il2CppMethodSlot slot, RuntimeObject* obj)
	{
		const VirtualInvokeData& invokeData = il2cpp_codegen_get_virtual_invoke_data(slot, obj);
		return ((Func)invokeData.methodPtr)(obj, invokeData.method);
	}
};
template <typename T1>
struct VirtActionInvoker1
{
	typedef void (*Action)(void*, T1, const RuntimeMethod*);

	static inline void Invoke (Il2CppMethodSlot slot, RuntimeObject* obj, T1 p1)
	{
		const VirtualInvokeData& invokeData = il2cpp_codegen_get_virtual_invoke_data(slot, obj);
		((Action)invokeData.methodPtr)(obj, p1, invokeData.method);
	}
};
struct VirtActionInvoker0
{
	typedef void (*Action)(void*, const RuntimeMethod*);

	static inline void Invoke (Il2CppMethodSlot slot, RuntimeObject* obj)
	{
		const VirtualInvokeData& invokeData = il2cpp_codegen_get_virtual_invoke_data(slot, obj);
		((Action)invokeData.methodPtr)(obj, invokeData.method);
	}
};
template <typename R, typename T1>
struct VirtFuncInvoker1
{
	typedef R (*Func)(void*, T1, const RuntimeMethod*);

	static inline R Invoke (Il2CppMethodSlot slot, RuntimeObject* obj, T1 p1)
	{
		const VirtualInvokeData& invokeData = il2cpp_codegen_get_virtual_invoke_data(slot, obj);
		return ((Func)invokeData.methodPtr)(obj, p1, invokeData.method);
	}
};
struct GenericVirtActionInvoker0
{
	typedef void (*Action)(void*, const RuntimeMethod*);

	static inline void Invoke (const RuntimeMethod* method, RuntimeObject* obj)
	{
		VirtualInvokeData invokeData;
		il2cpp_codegen_get_generic_virtual_invoke_data(method, obj, &invokeData);
		((Action)invokeData.methodPtr)(obj, invokeData.method);
	}
};
struct InterfaceActionInvoker0
{
	typedef void (*Action)(void*, const RuntimeMethod*);

	static inline void Invoke (Il2CppMethodSlot slot, RuntimeClass* declaringInterface, RuntimeObject* obj)
	{
		const VirtualInvokeData& invokeData = il2cpp_codegen_get_interface_invoke_data(slot, obj, declaringInterface);
		((Action)invokeData.methodPtr)(obj, invokeData.method);
	}
};
template <typename R, typename T1>
struct InterfaceFuncInvoker1
{
	typedef R (*Func)(void*, T1, const RuntimeMethod*);

	static inline R Invoke (Il2CppMethodSlot slot, RuntimeClass* declaringInterface, RuntimeObject* obj, T1 p1)
	{
		const VirtualInvokeData& invokeData = il2cpp_codegen_get_interface_invoke_data(slot, obj, declaringInterface);
		return ((Func)invokeData.methodPtr)(obj, p1, invokeData.method);
	}
};
struct GenericInterfaceActionInvoker0
{
	typedef void (*Action)(void*, const RuntimeMethod*);

	static inline void Invoke (const RuntimeMethod* method, RuntimeObject* obj)
	{
		VirtualInvokeData invokeData;
		il2cpp_codegen_get_generic_interface_invoke_data(method, obj, &invokeData);
		((Action)invokeData.methodPtr)(obj, invokeData.method);
	}
};

// DigitalOpus.MB.Core.AtlasPackingResult[]
struct AtlasPackingResultU5BU5D_t3980930186;
// DigitalOpus.MB.Core.MB2_EditorMethodsInterface
struct MB2_EditorMethodsInterface_t3086174398;
// DigitalOpus.MB.Core.MB3_TextureCombiner
struct MB3_TextureCombiner_t2018981714;
// DigitalOpus.MB.Core.MB3_TextureCombiner/CombineTexturesIntoAtlasesCoroutineResult
struct CombineTexturesIntoAtlasesCoroutineResult_t3420713479;
// DigitalOpus.MB.Core.MB3_TextureCombiner/CreateAtlasesCoroutineResult
struct CreateAtlasesCoroutineResult_t3502510657;
// DigitalOpus.MB.Core.MB3_TextureCombinerNonTextureProperties
struct MB3_TextureCombinerNonTextureProperties_t582390424;
// DigitalOpus.MB.Core.MB3_TextureCombinerNonTextureProperties/MaterialProperty[]
struct MaterialPropertyU5BU5D_t1007983773;
// DigitalOpus.MB.Core.MB3_TextureCombinerNonTextureProperties/NonTextureProperties
struct NonTextureProperties_t3700950655;
// DigitalOpus.MB.Core.MB3_TextureCombinerNonTextureProperties/TexPropertyNameColorPair[]
struct TexPropertyNameColorPairU5BU5D_t2106296288;
// DigitalOpus.MB.Core.MBVersionConcrete
struct MBVersionConcrete_t3658102071;
// DigitalOpus.MB.Core.MB_TexSet
struct MB_TexSet_t80133013;
// DigitalOpus.MB.Core.MB_TexSet/PipelineVariation
struct PipelineVariation_t145544214;
// DigitalOpus.MB.Core.MB_TexSet[]
struct MB_TexSetU5BU5D_t1413005944;
// DigitalOpus.MB.Core.MatAndTransformToMerged
struct MatAndTransformToMerged_t4202614370;
// DigitalOpus.MB.Core.MatAndTransformToMerged[]
struct MatAndTransformToMergedU5BU5D_t3435696599;
// DigitalOpus.MB.Core.MatsAndGOs
struct MatsAndGOs_t963675950;
// DigitalOpus.MB.Core.MeshBakerMaterialTexture
struct MeshBakerMaterialTexture_t567627287;
// DigitalOpus.MB.Core.MeshBakerMaterialTexture[]
struct MeshBakerMaterialTextureU5BU5D_t3009043374;
// DigitalOpus.MB.Core.ProgressUpdateDelegate
struct ProgressUpdateDelegate_t883957101;
// DigitalOpus.MB.Core.ShaderTextureProperty
struct ShaderTextureProperty_t1323711284;
// DigitalOpus.MB.Core.ShaderTextureProperty[]
struct ShaderTexturePropertyU5BU5D_t2972945789;
// DigitalOpus.MB.Core.TextureBlender
struct TextureBlender_t123783245;
// DigitalOpus.MB.Core.TextureBlender[]
struct TextureBlenderU5BU5D_t2512262112;
// MB2_TextureBakeResults
struct MB2_TextureBakeResults_t548408826;
// MB3_MeshBakerCommon
struct MB3_MeshBakerCommon_t4275912861;
// MB3_MeshBakerCommon[]
struct MB3_MeshBakerCommonU5BU5D_t1333502032;
// MB3_MeshBakerRoot
struct MB3_MeshBakerRoot_t112449141;
// MB3_TextureBaker
struct MB3_TextureBaker_t37954774;
// MB3_TextureBaker/<CreateAtlasesCoroutine>c__Iterator0
struct U3CCreateAtlasesCoroutineU3Ec__Iterator0_t954047427;
// MB3_TextureBaker/<_CreateAtlasesCoroutine>c__Iterator3
struct U3C_CreateAtlasesCoroutineU3Ec__Iterator3_t4069405804;
// MB3_TextureBaker/<_CreateAtlasesCoroutineAtlases>c__Iterator1
struct U3C_CreateAtlasesCoroutineAtlasesU3Ec__Iterator1_t3662324876;
// MB3_TextureBaker/<_CreateAtlasesCoroutineTextureArray>c__Iterator2
struct U3C_CreateAtlasesCoroutineTextureArrayU3Ec__Iterator2_t3158008321;
// MB3_TextureBaker/OnCombinedTexturesCoroutineFail
struct OnCombinedTexturesCoroutineFail_t3579762109;
// MB3_TextureBaker/OnCombinedTexturesCoroutineSuccess
struct OnCombinedTexturesCoroutineSuccess_t3112909344;
// MB_AtlasesAndRects
struct MB_AtlasesAndRects_t2070141231;
// MB_AtlasesAndRects[]
struct MB_AtlasesAndRectsU5BU5D_t4190144822;
// MB_MaterialAndUVRect
struct MB_MaterialAndUVRect_t1611876729;
// MB_MaterialAndUVRect[]
struct MB_MaterialAndUVRectU5BU5D_t1630039172;
// MB_MultiMaterial
struct MB_MultiMaterial_t1888048978;
// MB_MultiMaterialTexArray
struct MB_MultiMaterialTexArray_t1025313673;
// MB_MultiMaterialTexArray[]
struct MB_MultiMaterialTexArrayU5BU5D_t3908014132;
// MB_MultiMaterial[]
struct MB_MultiMaterialU5BU5D_t1825806119;
// MB_TexArrayForProperty
struct MB_TexArrayForProperty_t802417847;
// MB_TexArrayForProperty[]
struct MB_TexArrayForPropertyU5BU5D_t885870222;
// MB_TexArraySlice
struct MB_TexArraySlice_t2903040421;
// MB_TexArraySliceRendererMatPair
struct MB_TexArraySliceRendererMatPair_t1896345011;
// MB_TexArraySliceRendererMatPair[]
struct MB_TexArraySliceRendererMatPairU5BU5D_t1795268130;
// MB_TexArraySlice[]
struct MB_TexArraySliceU5BU5D_t210072104;
// MB_TextureArrayFormat
struct MB_TextureArrayFormat_t4143201819;
// MB_TextureArrayFormatSet
struct MB_TextureArrayFormatSet_t3246442245;
// MB_TextureArrayFormatSet[]
struct MB_TextureArrayFormatSetU5BU5D_t3992808264;
// MB_TextureArrayFormat[]
struct MB_TextureArrayFormatU5BU5D_t1822177050;
// MB_TextureArrayReference
struct MB_TextureArrayReference_t2719925336;
// MB_TextureArrayReference[]
struct MB_TextureArrayReferenceU5BU5D_t2256643913;
// MB_TextureArrayResultMaterial
struct MB_TextureArrayResultMaterial_t1449688550;
// MB_TextureArrayResultMaterial[]
struct MB_TextureArrayResultMaterialU5BU5D_t631979971;
// MB_TextureCombinerRenderTexture
struct MB_TextureCombinerRenderTexture_t1792150119;
// System.AsyncCallback
struct AsyncCallback_t3962456242;
// System.Char[]
struct CharU5BU5D_t3528271667;
// System.Collections.Generic.Dictionary`2<System.String,UnityEngine.Color>
struct Dictionary_2_t2340942623;
// System.Collections.Generic.HashSet`1/Slot<UnityEngine.Material>[]
struct SlotU5BU5D_t3130789405;
// System.Collections.Generic.HashSet`1<System.Object>
struct HashSet_1_t1645055638;
// System.Collections.Generic.HashSet`1<UnityEngine.Material>
struct HashSet_1_t3200291893;
// System.Collections.Generic.IEqualityComparer`1<UnityEngine.Material>
struct IEqualityComparer_1_t2447707141;
// System.Collections.Generic.List`1<DigitalOpus.MB.Core.AtlasPackingResult>
struct List_1_t3450590561;
// System.Collections.Generic.List`1<DigitalOpus.MB.Core.MB3_TextureCombiner/TemporaryTexture>
struct List_1_t3601725809;
// System.Collections.Generic.List`1<DigitalOpus.MB.Core.MB_TexSet>
struct List_1_t1552207755;
// System.Collections.Generic.List`1<DigitalOpus.MB.Core.MatAndTransformToMerged>
struct List_1_t1379721816;
// System.Collections.Generic.List`1<DigitalOpus.MB.Core.ShaderTextureProperty>
struct List_1_t2795786026;
// System.Collections.Generic.List`1<MB_MaterialAndUVRect>
struct List_1_t3083951471;
// System.Collections.Generic.List`1<MB_TexArrayForProperty>
struct List_1_t2274492589;
// System.Collections.Generic.List`1<MB_TexArraySlice>
struct List_1_t80147867;
// System.Collections.Generic.List`1<MB_TexArraySliceRendererMatPair>
struct List_1_t3368419753;
// System.Collections.Generic.List`1<System.Object>
struct List_1_t257213610;
// System.Collections.Generic.List`1<System.String>
struct List_1_t3319525431;
// System.Collections.Generic.List`1<UnityEngine.GameObject>
struct List_1_t2585711361;
// System.Collections.Generic.List`1<UnityEngine.Material>
struct List_1_t1812449865;
// System.Collections.IDictionary
struct IDictionary_t1363984059;
// System.Collections.IEnumerator
struct IEnumerator_t1853284238;
// System.Delegate
struct Delegate_t1188392813;
// System.DelegateData
struct DelegateData_t1677132599;
// System.Delegate[]
struct DelegateU5BU5D_t1703627840;
// System.Diagnostics.StackTrace[]
struct StackTraceU5BU5D_t1169129676;
// System.Diagnostics.Stopwatch
struct Stopwatch_t305734070;
// System.IAsyncResult
struct IAsyncResult_t767004451;
// System.Int32[]
struct Int32U5BU5D_t385246372;
// System.IntPtr[]
struct IntPtrU5BU5D_t4013366056;
// System.NotSupportedException
struct NotSupportedException_t1314879016;
// System.Object[]
struct ObjectU5BU5D_t2843939325;
// System.Reflection.MethodInfo
struct MethodInfo_t;
// System.Runtime.Serialization.SafeSerializationManager
struct SafeSerializationManager_t2481557153;
// System.Runtime.Serialization.SerializationInfo
struct SerializationInfo_t950877179;
// System.String
struct String_t;
// System.String[]
struct StringU5BU5D_t1281789340;
// System.Void
struct Void_t1185182177;
// UnityEngine.Camera
struct Camera_t4157153871;
// UnityEngine.Camera/CameraCallback
struct CameraCallback_t190067161;
// UnityEngine.Color32[]
struct Color32U5BU5D_t3850468773;
// UnityEngine.Component
struct Component_t1923634451;
// UnityEngine.GameObject
struct GameObject_t1113636619;
// UnityEngine.GameObject[]
struct GameObjectU5BU5D_t3328599146;
// UnityEngine.Material
struct Material_t340375123;
// UnityEngine.Material[]
struct MaterialU5BU5D_t561872642;
// UnityEngine.Mesh
struct Mesh_t3648964284;
// UnityEngine.Object
struct Object_t631007953;
// UnityEngine.Rect[]
struct RectU5BU5D_t2936723554;
// UnityEngine.RenderTexture
struct RenderTexture_t2108887433;
// UnityEngine.Shader
struct Shader_t4151988712;
// UnityEngine.Texture
struct Texture_t3661962703;
// UnityEngine.Texture2D
struct Texture2D_t3840446185;
// UnityEngine.Texture2DArray
struct Texture2DArray_t4044506685;
// UnityEngine.Texture2D[]
struct Texture2DU5BU5D_t149664596;
// UnityEngine.Transform
struct Transform_t3600365921;

extern RuntimeClass* Boolean_t97287965_il2cpp_TypeInfo_var;
extern RuntimeClass* Color32_t2600501292_il2cpp_TypeInfo_var;
extern RuntimeClass* CombineTexturesIntoAtlasesCoroutineResult_t3420713479_il2cpp_TypeInfo_var;
extern RuntimeClass* Debug_t3317548046_il2cpp_TypeInfo_var;
extern RuntimeClass* Exception_t_il2cpp_TypeInfo_var;
extern RuntimeClass* Graphics_t783367614_il2cpp_TypeInfo_var;
extern RuntimeClass* HashSet_1_t3200291893_il2cpp_TypeInfo_var;
extern RuntimeClass* Int32_t2950945753_il2cpp_TypeInfo_var;
extern RuntimeClass* List_1_t1812449865_il2cpp_TypeInfo_var;
extern RuntimeClass* List_1_t2274492589_il2cpp_TypeInfo_var;
extern RuntimeClass* List_1_t2585711361_il2cpp_TypeInfo_var;
extern RuntimeClass* List_1_t3368419753_il2cpp_TypeInfo_var;
extern RuntimeClass* List_1_t80147867_il2cpp_TypeInfo_var;
extern RuntimeClass* MB2_EditorMethodsInterface_t3086174398_il2cpp_TypeInfo_var;
extern RuntimeClass* MB3_TextureCombiner_t2018981714_il2cpp_TypeInfo_var;
extern RuntimeClass* MBVersionConcrete_t3658102071_il2cpp_TypeInfo_var;
extern RuntimeClass* MB_AtlasesAndRectsU5BU5D_t4190144822_il2cpp_TypeInfo_var;
extern RuntimeClass* MB_AtlasesAndRects_t2070141231_il2cpp_TypeInfo_var;
extern RuntimeClass* MB_MaterialAndUVRect_t1611876729_il2cpp_TypeInfo_var;
extern RuntimeClass* MB_MultiMaterialTexArrayU5BU5D_t3908014132_il2cpp_TypeInfo_var;
extern RuntimeClass* MB_MultiMaterialU5BU5D_t1825806119_il2cpp_TypeInfo_var;
extern RuntimeClass* MB_MultiMaterial_t1888048978_il2cpp_TypeInfo_var;
extern RuntimeClass* MB_TextureArrayReferenceU5BU5D_t2256643913_il2cpp_TypeInfo_var;
extern RuntimeClass* MB_TextureArrayResultMaterialU5BU5D_t631979971_il2cpp_TypeInfo_var;
extern RuntimeClass* MB_TextureArrayResultMaterial_t1449688550_il2cpp_TypeInfo_var;
extern RuntimeClass* MB_Utility_t3997274809_il2cpp_TypeInfo_var;
extern RuntimeClass* Material_t340375123_il2cpp_TypeInfo_var;
extern RuntimeClass* Mathf_t3464937446_il2cpp_TypeInfo_var;
extern RuntimeClass* NotSupportedException_t1314879016_il2cpp_TypeInfo_var;
extern RuntimeClass* ObjectU5BU5D_t2843939325_il2cpp_TypeInfo_var;
extern RuntimeClass* Object_t631007953_il2cpp_TypeInfo_var;
extern RuntimeClass* Quaternion_t2301928331_il2cpp_TypeInfo_var;
extern RuntimeClass* Rect_t2360479859_il2cpp_TypeInfo_var;
extern RuntimeClass* RenderTexture_t2108887433_il2cpp_TypeInfo_var;
extern RuntimeClass* Single_t1397266774_il2cpp_TypeInfo_var;
extern RuntimeClass* Stopwatch_t305734070_il2cpp_TypeInfo_var;
extern RuntimeClass* String_t_il2cpp_TypeInfo_var;
extern RuntimeClass* Texture2D_t3840446185_il2cpp_TypeInfo_var;
extern RuntimeClass* TextureFormat_t2701165832_il2cpp_TypeInfo_var;
extern RuntimeClass* Vector2_t2156229523_il2cpp_TypeInfo_var;
extern RuntimeClass* Vector3_t3722313464_il2cpp_TypeInfo_var;
extern String_t* _stringLiteral119538695;
extern String_t* _stringLiteral1300358356;
extern String_t* _stringLiteral1687475981;
extern String_t* _stringLiteral1869155383;
extern String_t* _stringLiteral1928037523;
extern String_t* _stringLiteral1983371484;
extern String_t* _stringLiteral2374672254;
extern String_t* _stringLiteral2663281075;
extern String_t* _stringLiteral277039634;
extern String_t* _stringLiteral2782367896;
extern String_t* _stringLiteral2852143774;
extern String_t* _stringLiteral2860073501;
extern String_t* _stringLiteral2979063055;
extern String_t* _stringLiteral3056346918;
extern String_t* _stringLiteral3058774577;
extern String_t* _stringLiteral3104138182;
extern String_t* _stringLiteral3105335571;
extern String_t* _stringLiteral3153182155;
extern String_t* _stringLiteral3260904216;
extern String_t* _stringLiteral3290010191;
extern String_t* _stringLiteral3437514210;
extern String_t* _stringLiteral3450517380;
extern String_t* _stringLiteral3451041664;
extern String_t* _stringLiteral3451238330;
extern String_t* _stringLiteral3452614530;
extern String_t* _stringLiteral3452614535;
extern String_t* _stringLiteral3452614566;
extern String_t* _stringLiteral3481598281;
extern String_t* _stringLiteral348570545;
extern String_t* _stringLiteral3610126461;
extern String_t* _stringLiteral3765685832;
extern String_t* _stringLiteral3813598437;
extern String_t* _stringLiteral388412136;
extern String_t* _stringLiteral3937235379;
extern String_t* _stringLiteral3938399595;
extern String_t* _stringLiteral395364888;
extern String_t* _stringLiteral3964705780;
extern String_t* _stringLiteral400336950;
extern String_t* _stringLiteral4099201794;
extern String_t* _stringLiteral702318425;
extern String_t* _stringLiteral727998580;
extern String_t* _stringLiteral746574600;
extern String_t* _stringLiteral782567911;
extern String_t* _stringLiteral811314602;
extern String_t* _stringLiteral852084806;
extern String_t* _stringLiteral861462371;
extern String_t* _stringLiteral880146755;
extern String_t* _stringLiteral912138561;
extern String_t* _stringLiteral914251266;
extern String_t* _stringLiteral947779253;
extern String_t* _stringLiteral972463044;
extern const RuntimeMethod* Component_GetComponent_TisTransform_t3600365921_m1200784320_RuntimeMethod_var;
extern const RuntimeMethod* Component_GetComponentsInChildren_TisMB3_MeshBakerCommon_t4275912861_m3670351898_RuntimeMethod_var;
extern const RuntimeMethod* GameObject_GetComponent_TisCamera_t4157153871_m2849242531_RuntimeMethod_var;
extern const RuntimeMethod* HashSet_1_Add_m3074301316_RuntimeMethod_var;
extern const RuntimeMethod* HashSet_1__ctor_m3459089090_RuntimeMethod_var;
extern const RuntimeMethod* List_1_Add_m2765963565_RuntimeMethod_var;
extern const RuntimeMethod* List_1_Add_m2906470202_RuntimeMethod_var;
extern const RuntimeMethod* List_1_Clear_m1260798391_RuntimeMethod_var;
extern const RuntimeMethod* List_1__ctor_m1245396982_RuntimeMethod_var;
extern const RuntimeMethod* List_1__ctor_m1424466557_RuntimeMethod_var;
extern const RuntimeMethod* List_1__ctor_m1597736158_RuntimeMethod_var;
extern const RuntimeMethod* List_1__ctor_m1911117364_RuntimeMethod_var;
extern const RuntimeMethod* List_1__ctor_m3663177880_RuntimeMethod_var;
extern const RuntimeMethod* List_1_get_Count_m1217301797_RuntimeMethod_var;
extern const RuntimeMethod* List_1_get_Count_m2812834599_RuntimeMethod_var;
extern const RuntimeMethod* List_1_get_Count_m824374063_RuntimeMethod_var;
extern const RuntimeMethod* List_1_get_Item_m1399501068_RuntimeMethod_var;
extern const RuntimeMethod* List_1_get_Item_m2254468706_RuntimeMethod_var;
extern const RuntimeMethod* List_1_get_Item_m3743125852_RuntimeMethod_var;
extern const RuntimeMethod* List_1_get_Item_m519272143_RuntimeMethod_var;
extern const RuntimeMethod* List_1_get_Item_m800292271_RuntimeMethod_var;
extern const RuntimeMethod* U3CCreateAtlasesCoroutineU3Ec__Iterator0_Reset_m929361507_RuntimeMethod_var;
extern const RuntimeMethod* U3C_CreateAtlasesCoroutineAtlasesU3Ec__Iterator1_Reset_m1122771673_RuntimeMethod_var;
extern const RuntimeMethod* U3C_CreateAtlasesCoroutineTextureArrayU3Ec__Iterator2_Reset_m564995763_RuntimeMethod_var;
extern const RuntimeMethod* U3C_CreateAtlasesCoroutineU3Ec__Iterator3_Reset_m3256406423_RuntimeMethod_var;
extern const uint32_t MB_MaterialAndUVRect_Equals_m1344810780_MetadataUsageId;
extern const uint32_t MB_MultiMaterialTexArray__ctor_m2532338842_MetadataUsageId;
extern const uint32_t MB_MultiMaterial__ctor_m4131012043_MetadataUsageId;
extern const uint32_t MB_TexArrayForProperty__ctor_m3794645001_MetadataUsageId;
extern const uint32_t MB_TexArraySlice_ContainsMaterialAndMesh_m3200184693_MetadataUsageId;
extern const uint32_t MB_TexArraySlice_ContainsMaterial_m3210920603_MetadataUsageId;
extern const uint32_t MB_TexArraySlice_GetAllUsedMaterials_m4255047433_MetadataUsageId;
extern const uint32_t MB_TexArraySlice_GetAllUsedRenderers_m635831735_MetadataUsageId;
extern const uint32_t MB_TexArraySlice_GetDistinctMaterials_m4148867048_MetadataUsageId;
extern const uint32_t MB_TexArraySlice__ctor_m704789157_MetadataUsageId;
extern const uint32_t MB_TextureArrayFormatSet_ValidateTextureImporterFormatsExistsForTextureFormats_m383290541_MetadataUsageId;
extern const uint32_t MB_TextureCombinerRenderTexture_ConvertNormalFormatFromUnity_ToStandard_m2919639508_MetadataUsageId;
extern const uint32_t MB_TextureCombinerRenderTexture_ConvertRenderTextureToTexture2D_m474096451_MetadataUsageId;
extern const uint32_t MB_TextureCombinerRenderTexture_CopyScaledAndTiledToAtlas_m2529512026_MetadataUsageId;
extern const uint32_t MB_TextureCombinerRenderTexture_DoRenderAtlas_m2650485798_MetadataUsageId;
extern const uint32_t MB_TextureCombinerRenderTexture_OnRenderObject_m3157778825_MetadataUsageId;
extern const uint32_t MB_TextureCombinerRenderTexture_YisFlipped_m3588497510_MetadataUsageId;
extern const uint32_t MB_TextureCombinerRenderTexture__printTexture_m968241879_MetadataUsageId;
extern const uint32_t U3CCreateAtlasesCoroutineU3Ec__Iterator0_Reset_m929361507_MetadataUsageId;
extern const uint32_t U3C_CreateAtlasesCoroutineAtlasesU3Ec__Iterator1_MoveNext_m2024618271_MetadataUsageId;
extern const uint32_t U3C_CreateAtlasesCoroutineAtlasesU3Ec__Iterator1_Reset_m1122771673_MetadataUsageId;
extern const uint32_t U3C_CreateAtlasesCoroutineTextureArrayU3Ec__Iterator2_MoveNext_m2784354118_MetadataUsageId;
extern const uint32_t U3C_CreateAtlasesCoroutineTextureArrayU3Ec__Iterator2_Reset_m564995763_MetadataUsageId;
extern const uint32_t U3C_CreateAtlasesCoroutineU3Ec__Iterator3_MoveNext_m659793080_MetadataUsageId;
extern const uint32_t U3C_CreateAtlasesCoroutineU3Ec__Iterator3_Reset_m3256406423_MetadataUsageId;
struct Exception_t_marshaled_com;
struct Exception_t_marshaled_pinvoke;

struct MeshBakerMaterialTextureU5BU5D_t3009043374;
struct MB3_MeshBakerCommonU5BU5D_t1333502032;
struct MB_AtlasesAndRectsU5BU5D_t4190144822;
struct MB_MaterialAndUVRectU5BU5D_t1630039172;
struct MB_MultiMaterialTexArrayU5BU5D_t3908014132;
struct MB_MultiMaterialU5BU5D_t1825806119;
struct MB_TextureArrayFormatSetU5BU5D_t3992808264;
struct MB_TextureArrayFormatU5BU5D_t1822177050;
struct MB_TextureArrayReferenceU5BU5D_t2256643913;
struct MB_TextureArrayResultMaterialU5BU5D_t631979971;
struct DelegateU5BU5D_t1703627840;
struct ObjectU5BU5D_t2843939325;
struct Color32U5BU5D_t3850468773;
struct MaterialU5BU5D_t561872642;
struct RectU5BU5D_t2936723554;


#ifndef RUNTIMEOBJECT_H
#define RUNTIMEOBJECT_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Object

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // RUNTIMEOBJECT_H
#ifndef COMBINETEXTURESINTOATLASESCOROUTINERESULT_T3420713479_H
#define COMBINETEXTURESINTOATLASESCOROUTINERESULT_T3420713479_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// DigitalOpus.MB.Core.MB3_TextureCombiner/CombineTexturesIntoAtlasesCoroutineResult
struct  CombineTexturesIntoAtlasesCoroutineResult_t3420713479  : public RuntimeObject
{
public:
	// System.Boolean DigitalOpus.MB.Core.MB3_TextureCombiner/CombineTexturesIntoAtlasesCoroutineResult::success
	bool ___success_0;
	// System.Boolean DigitalOpus.MB.Core.MB3_TextureCombiner/CombineTexturesIntoAtlasesCoroutineResult::isFinished
	bool ___isFinished_1;

public:
	inline static int32_t get_offset_of_success_0() { return static_cast<int32_t>(offsetof(CombineTexturesIntoAtlasesCoroutineResult_t3420713479, ___success_0)); }
	inline bool get_success_0() const { return ___success_0; }
	inline bool* get_address_of_success_0() { return &___success_0; }
	inline void set_success_0(bool value)
	{
		___success_0 = value;
	}

	inline static int32_t get_offset_of_isFinished_1() { return static_cast<int32_t>(offsetof(CombineTexturesIntoAtlasesCoroutineResult_t3420713479, ___isFinished_1)); }
	inline bool get_isFinished_1() const { return ___isFinished_1; }
	inline bool* get_address_of_isFinished_1() { return &___isFinished_1; }
	inline void set_isFinished_1(bool value)
	{
		___isFinished_1 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // COMBINETEXTURESINTOATLASESCOROUTINERESULT_T3420713479_H
#ifndef CREATEATLASESCOROUTINERESULT_T3502510657_H
#define CREATEATLASESCOROUTINERESULT_T3502510657_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// DigitalOpus.MB.Core.MB3_TextureCombiner/CreateAtlasesCoroutineResult
struct  CreateAtlasesCoroutineResult_t3502510657  : public RuntimeObject
{
public:
	// System.Boolean DigitalOpus.MB.Core.MB3_TextureCombiner/CreateAtlasesCoroutineResult::success
	bool ___success_0;
	// System.Boolean DigitalOpus.MB.Core.MB3_TextureCombiner/CreateAtlasesCoroutineResult::isFinished
	bool ___isFinished_1;

public:
	inline static int32_t get_offset_of_success_0() { return static_cast<int32_t>(offsetof(CreateAtlasesCoroutineResult_t3502510657, ___success_0)); }
	inline bool get_success_0() const { return ___success_0; }
	inline bool* get_address_of_success_0() { return &___success_0; }
	inline void set_success_0(bool value)
	{
		___success_0 = value;
	}

	inline static int32_t get_offset_of_isFinished_1() { return static_cast<int32_t>(offsetof(CreateAtlasesCoroutineResult_t3502510657, ___isFinished_1)); }
	inline bool get_isFinished_1() const { return ___isFinished_1; }
	inline bool* get_address_of_isFinished_1() { return &___isFinished_1; }
	inline void set_isFinished_1(bool value)
	{
		___isFinished_1 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // CREATEATLASESCOROUTINERESULT_T3502510657_H
#ifndef MATSANDGOS_T963675950_H
#define MATSANDGOS_T963675950_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// DigitalOpus.MB.Core.MatsAndGOs
struct  MatsAndGOs_t963675950  : public RuntimeObject
{
public:
	// System.Collections.Generic.List`1<DigitalOpus.MB.Core.MatAndTransformToMerged> DigitalOpus.MB.Core.MatsAndGOs::mats
	List_1_t1379721816 * ___mats_0;
	// System.Collections.Generic.List`1<UnityEngine.GameObject> DigitalOpus.MB.Core.MatsAndGOs::gos
	List_1_t2585711361 * ___gos_1;

public:
	inline static int32_t get_offset_of_mats_0() { return static_cast<int32_t>(offsetof(MatsAndGOs_t963675950, ___mats_0)); }
	inline List_1_t1379721816 * get_mats_0() const { return ___mats_0; }
	inline List_1_t1379721816 ** get_address_of_mats_0() { return &___mats_0; }
	inline void set_mats_0(List_1_t1379721816 * value)
	{
		___mats_0 = value;
		Il2CppCodeGenWriteBarrier((&___mats_0), value);
	}

	inline static int32_t get_offset_of_gos_1() { return static_cast<int32_t>(offsetof(MatsAndGOs_t963675950, ___gos_1)); }
	inline List_1_t2585711361 * get_gos_1() const { return ___gos_1; }
	inline List_1_t2585711361 ** get_address_of_gos_1() { return &___gos_1; }
	inline void set_gos_1(List_1_t2585711361 * value)
	{
		___gos_1 = value;
		Il2CppCodeGenWriteBarrier((&___gos_1), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // MATSANDGOS_T963675950_H
#ifndef SHADERTEXTUREPROPERTY_T1323711284_H
#define SHADERTEXTUREPROPERTY_T1323711284_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// DigitalOpus.MB.Core.ShaderTextureProperty
struct  ShaderTextureProperty_t1323711284  : public RuntimeObject
{
public:
	// System.String DigitalOpus.MB.Core.ShaderTextureProperty::name
	String_t* ___name_0;
	// System.Boolean DigitalOpus.MB.Core.ShaderTextureProperty::isNormalMap
	bool ___isNormalMap_1;
	// System.Boolean DigitalOpus.MB.Core.ShaderTextureProperty::isNormalDontKnow
	bool ___isNormalDontKnow_2;

public:
	inline static int32_t get_offset_of_name_0() { return static_cast<int32_t>(offsetof(ShaderTextureProperty_t1323711284, ___name_0)); }
	inline String_t* get_name_0() const { return ___name_0; }
	inline String_t** get_address_of_name_0() { return &___name_0; }
	inline void set_name_0(String_t* value)
	{
		___name_0 = value;
		Il2CppCodeGenWriteBarrier((&___name_0), value);
	}

	inline static int32_t get_offset_of_isNormalMap_1() { return static_cast<int32_t>(offsetof(ShaderTextureProperty_t1323711284, ___isNormalMap_1)); }
	inline bool get_isNormalMap_1() const { return ___isNormalMap_1; }
	inline bool* get_address_of_isNormalMap_1() { return &___isNormalMap_1; }
	inline void set_isNormalMap_1(bool value)
	{
		___isNormalMap_1 = value;
	}

	inline static int32_t get_offset_of_isNormalDontKnow_2() { return static_cast<int32_t>(offsetof(ShaderTextureProperty_t1323711284, ___isNormalDontKnow_2)); }
	inline bool get_isNormalDontKnow_2() const { return ___isNormalDontKnow_2; }
	inline bool* get_address_of_isNormalDontKnow_2() { return &___isNormalDontKnow_2; }
	inline void set_isNormalDontKnow_2(bool value)
	{
		___isNormalDontKnow_2 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // SHADERTEXTUREPROPERTY_T1323711284_H
#ifndef U3CCREATEATLASESCOROUTINEU3EC__ITERATOR0_T954047427_H
#define U3CCREATEATLASESCOROUTINEU3EC__ITERATOR0_T954047427_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// MB3_TextureBaker/<CreateAtlasesCoroutine>c__Iterator0
struct  U3CCreateAtlasesCoroutineU3Ec__Iterator0_t954047427  : public RuntimeObject
{
public:
	// DigitalOpus.MB.Core.ProgressUpdateDelegate MB3_TextureBaker/<CreateAtlasesCoroutine>c__Iterator0::progressInfo
	ProgressUpdateDelegate_t883957101 * ___progressInfo_0;
	// DigitalOpus.MB.Core.MB3_TextureCombiner/CreateAtlasesCoroutineResult MB3_TextureBaker/<CreateAtlasesCoroutine>c__Iterator0::coroutineResult
	CreateAtlasesCoroutineResult_t3502510657 * ___coroutineResult_1;
	// System.Boolean MB3_TextureBaker/<CreateAtlasesCoroutine>c__Iterator0::saveAtlasesAsAssets
	bool ___saveAtlasesAsAssets_2;
	// DigitalOpus.MB.Core.MB2_EditorMethodsInterface MB3_TextureBaker/<CreateAtlasesCoroutine>c__Iterator0::editorMethods
	RuntimeObject* ___editorMethods_3;
	// System.Single MB3_TextureBaker/<CreateAtlasesCoroutine>c__Iterator0::maxTimePerFrame
	float ___maxTimePerFrame_4;
	// MB3_TextureBaker MB3_TextureBaker/<CreateAtlasesCoroutine>c__Iterator0::$this
	MB3_TextureBaker_t37954774 * ___U24this_5;
	// System.Object MB3_TextureBaker/<CreateAtlasesCoroutine>c__Iterator0::$current
	RuntimeObject * ___U24current_6;
	// System.Boolean MB3_TextureBaker/<CreateAtlasesCoroutine>c__Iterator0::$disposing
	bool ___U24disposing_7;
	// System.Int32 MB3_TextureBaker/<CreateAtlasesCoroutine>c__Iterator0::$PC
	int32_t ___U24PC_8;

public:
	inline static int32_t get_offset_of_progressInfo_0() { return static_cast<int32_t>(offsetof(U3CCreateAtlasesCoroutineU3Ec__Iterator0_t954047427, ___progressInfo_0)); }
	inline ProgressUpdateDelegate_t883957101 * get_progressInfo_0() const { return ___progressInfo_0; }
	inline ProgressUpdateDelegate_t883957101 ** get_address_of_progressInfo_0() { return &___progressInfo_0; }
	inline void set_progressInfo_0(ProgressUpdateDelegate_t883957101 * value)
	{
		___progressInfo_0 = value;
		Il2CppCodeGenWriteBarrier((&___progressInfo_0), value);
	}

	inline static int32_t get_offset_of_coroutineResult_1() { return static_cast<int32_t>(offsetof(U3CCreateAtlasesCoroutineU3Ec__Iterator0_t954047427, ___coroutineResult_1)); }
	inline CreateAtlasesCoroutineResult_t3502510657 * get_coroutineResult_1() const { return ___coroutineResult_1; }
	inline CreateAtlasesCoroutineResult_t3502510657 ** get_address_of_coroutineResult_1() { return &___coroutineResult_1; }
	inline void set_coroutineResult_1(CreateAtlasesCoroutineResult_t3502510657 * value)
	{
		___coroutineResult_1 = value;
		Il2CppCodeGenWriteBarrier((&___coroutineResult_1), value);
	}

	inline static int32_t get_offset_of_saveAtlasesAsAssets_2() { return static_cast<int32_t>(offsetof(U3CCreateAtlasesCoroutineU3Ec__Iterator0_t954047427, ___saveAtlasesAsAssets_2)); }
	inline bool get_saveAtlasesAsAssets_2() const { return ___saveAtlasesAsAssets_2; }
	inline bool* get_address_of_saveAtlasesAsAssets_2() { return &___saveAtlasesAsAssets_2; }
	inline void set_saveAtlasesAsAssets_2(bool value)
	{
		___saveAtlasesAsAssets_2 = value;
	}

	inline static int32_t get_offset_of_editorMethods_3() { return static_cast<int32_t>(offsetof(U3CCreateAtlasesCoroutineU3Ec__Iterator0_t954047427, ___editorMethods_3)); }
	inline RuntimeObject* get_editorMethods_3() const { return ___editorMethods_3; }
	inline RuntimeObject** get_address_of_editorMethods_3() { return &___editorMethods_3; }
	inline void set_editorMethods_3(RuntimeObject* value)
	{
		___editorMethods_3 = value;
		Il2CppCodeGenWriteBarrier((&___editorMethods_3), value);
	}

	inline static int32_t get_offset_of_maxTimePerFrame_4() { return static_cast<int32_t>(offsetof(U3CCreateAtlasesCoroutineU3Ec__Iterator0_t954047427, ___maxTimePerFrame_4)); }
	inline float get_maxTimePerFrame_4() const { return ___maxTimePerFrame_4; }
	inline float* get_address_of_maxTimePerFrame_4() { return &___maxTimePerFrame_4; }
	inline void set_maxTimePerFrame_4(float value)
	{
		___maxTimePerFrame_4 = value;
	}

	inline static int32_t get_offset_of_U24this_5() { return static_cast<int32_t>(offsetof(U3CCreateAtlasesCoroutineU3Ec__Iterator0_t954047427, ___U24this_5)); }
	inline MB3_TextureBaker_t37954774 * get_U24this_5() const { return ___U24this_5; }
	inline MB3_TextureBaker_t37954774 ** get_address_of_U24this_5() { return &___U24this_5; }
	inline void set_U24this_5(MB3_TextureBaker_t37954774 * value)
	{
		___U24this_5 = value;
		Il2CppCodeGenWriteBarrier((&___U24this_5), value);
	}

	inline static int32_t get_offset_of_U24current_6() { return static_cast<int32_t>(offsetof(U3CCreateAtlasesCoroutineU3Ec__Iterator0_t954047427, ___U24current_6)); }
	inline RuntimeObject * get_U24current_6() const { return ___U24current_6; }
	inline RuntimeObject ** get_address_of_U24current_6() { return &___U24current_6; }
	inline void set_U24current_6(RuntimeObject * value)
	{
		___U24current_6 = value;
		Il2CppCodeGenWriteBarrier((&___U24current_6), value);
	}

	inline static int32_t get_offset_of_U24disposing_7() { return static_cast<int32_t>(offsetof(U3CCreateAtlasesCoroutineU3Ec__Iterator0_t954047427, ___U24disposing_7)); }
	inline bool get_U24disposing_7() const { return ___U24disposing_7; }
	inline bool* get_address_of_U24disposing_7() { return &___U24disposing_7; }
	inline void set_U24disposing_7(bool value)
	{
		___U24disposing_7 = value;
	}

	inline static int32_t get_offset_of_U24PC_8() { return static_cast<int32_t>(offsetof(U3CCreateAtlasesCoroutineU3Ec__Iterator0_t954047427, ___U24PC_8)); }
	inline int32_t get_U24PC_8() const { return ___U24PC_8; }
	inline int32_t* get_address_of_U24PC_8() { return &___U24PC_8; }
	inline void set_U24PC_8(int32_t value)
	{
		___U24PC_8 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // U3CCREATEATLASESCOROUTINEU3EC__ITERATOR0_T954047427_H
#ifndef U3C_CREATEATLASESCOROUTINEATLASESU3EC__ITERATOR1_T3662324876_H
#define U3C_CREATEATLASESCOROUTINEATLASESU3EC__ITERATOR1_T3662324876_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// MB3_TextureBaker/<_CreateAtlasesCoroutineAtlases>c__Iterator1
struct  U3C_CreateAtlasesCoroutineAtlasesU3Ec__Iterator1_t3662324876  : public RuntimeObject
{
public:
	// System.Int32 MB3_TextureBaker/<_CreateAtlasesCoroutineAtlases>c__Iterator1::<numResults>__0
	int32_t ___U3CnumResultsU3E__0_0;
	// System.Int32 MB3_TextureBaker/<_CreateAtlasesCoroutineAtlases>c__Iterator1::<i>__1
	int32_t ___U3CiU3E__1_1;
	// UnityEngine.Material MB3_TextureBaker/<_CreateAtlasesCoroutineAtlases>c__Iterator1::<resMatToPass>__2
	Material_t340375123 * ___U3CresMatToPassU3E__2_2;
	// System.Collections.Generic.List`1<UnityEngine.Material> MB3_TextureBaker/<_CreateAtlasesCoroutineAtlases>c__Iterator1::<sourceMats>__2
	List_1_t1812449865 * ___U3CsourceMatsU3E__2_3;
	// DigitalOpus.MB.Core.MB3_TextureCombiner MB3_TextureBaker/<_CreateAtlasesCoroutineAtlases>c__Iterator1::combiner
	MB3_TextureCombiner_t2018981714 * ___combiner_4;
	// DigitalOpus.MB.Core.MB3_TextureCombiner/CombineTexturesIntoAtlasesCoroutineResult MB3_TextureBaker/<_CreateAtlasesCoroutineAtlases>c__Iterator1::<coroutineResult2>__2
	CombineTexturesIntoAtlasesCoroutineResult_t3420713479 * ___U3CcoroutineResult2U3E__2_5;
	// DigitalOpus.MB.Core.ProgressUpdateDelegate MB3_TextureBaker/<_CreateAtlasesCoroutineAtlases>c__Iterator1::progressInfo
	ProgressUpdateDelegate_t883957101 * ___progressInfo_6;
	// DigitalOpus.MB.Core.MB2_EditorMethodsInterface MB3_TextureBaker/<_CreateAtlasesCoroutineAtlases>c__Iterator1::editorMethods
	RuntimeObject* ___editorMethods_7;
	// System.Single MB3_TextureBaker/<_CreateAtlasesCoroutineAtlases>c__Iterator1::maxTimePerFrame
	float ___maxTimePerFrame_8;
	// DigitalOpus.MB.Core.MB3_TextureCombiner/CreateAtlasesCoroutineResult MB3_TextureBaker/<_CreateAtlasesCoroutineAtlases>c__Iterator1::coroutineResult
	CreateAtlasesCoroutineResult_t3502510657 * ___coroutineResult_9;
	// MB3_TextureBaker MB3_TextureBaker/<_CreateAtlasesCoroutineAtlases>c__Iterator1::$this
	MB3_TextureBaker_t37954774 * ___U24this_10;
	// System.Object MB3_TextureBaker/<_CreateAtlasesCoroutineAtlases>c__Iterator1::$current
	RuntimeObject * ___U24current_11;
	// System.Boolean MB3_TextureBaker/<_CreateAtlasesCoroutineAtlases>c__Iterator1::$disposing
	bool ___U24disposing_12;
	// System.Int32 MB3_TextureBaker/<_CreateAtlasesCoroutineAtlases>c__Iterator1::$PC
	int32_t ___U24PC_13;

public:
	inline static int32_t get_offset_of_U3CnumResultsU3E__0_0() { return static_cast<int32_t>(offsetof(U3C_CreateAtlasesCoroutineAtlasesU3Ec__Iterator1_t3662324876, ___U3CnumResultsU3E__0_0)); }
	inline int32_t get_U3CnumResultsU3E__0_0() const { return ___U3CnumResultsU3E__0_0; }
	inline int32_t* get_address_of_U3CnumResultsU3E__0_0() { return &___U3CnumResultsU3E__0_0; }
	inline void set_U3CnumResultsU3E__0_0(int32_t value)
	{
		___U3CnumResultsU3E__0_0 = value;
	}

	inline static int32_t get_offset_of_U3CiU3E__1_1() { return static_cast<int32_t>(offsetof(U3C_CreateAtlasesCoroutineAtlasesU3Ec__Iterator1_t3662324876, ___U3CiU3E__1_1)); }
	inline int32_t get_U3CiU3E__1_1() const { return ___U3CiU3E__1_1; }
	inline int32_t* get_address_of_U3CiU3E__1_1() { return &___U3CiU3E__1_1; }
	inline void set_U3CiU3E__1_1(int32_t value)
	{
		___U3CiU3E__1_1 = value;
	}

	inline static int32_t get_offset_of_U3CresMatToPassU3E__2_2() { return static_cast<int32_t>(offsetof(U3C_CreateAtlasesCoroutineAtlasesU3Ec__Iterator1_t3662324876, ___U3CresMatToPassU3E__2_2)); }
	inline Material_t340375123 * get_U3CresMatToPassU3E__2_2() const { return ___U3CresMatToPassU3E__2_2; }
	inline Material_t340375123 ** get_address_of_U3CresMatToPassU3E__2_2() { return &___U3CresMatToPassU3E__2_2; }
	inline void set_U3CresMatToPassU3E__2_2(Material_t340375123 * value)
	{
		___U3CresMatToPassU3E__2_2 = value;
		Il2CppCodeGenWriteBarrier((&___U3CresMatToPassU3E__2_2), value);
	}

	inline static int32_t get_offset_of_U3CsourceMatsU3E__2_3() { return static_cast<int32_t>(offsetof(U3C_CreateAtlasesCoroutineAtlasesU3Ec__Iterator1_t3662324876, ___U3CsourceMatsU3E__2_3)); }
	inline List_1_t1812449865 * get_U3CsourceMatsU3E__2_3() const { return ___U3CsourceMatsU3E__2_3; }
	inline List_1_t1812449865 ** get_address_of_U3CsourceMatsU3E__2_3() { return &___U3CsourceMatsU3E__2_3; }
	inline void set_U3CsourceMatsU3E__2_3(List_1_t1812449865 * value)
	{
		___U3CsourceMatsU3E__2_3 = value;
		Il2CppCodeGenWriteBarrier((&___U3CsourceMatsU3E__2_3), value);
	}

	inline static int32_t get_offset_of_combiner_4() { return static_cast<int32_t>(offsetof(U3C_CreateAtlasesCoroutineAtlasesU3Ec__Iterator1_t3662324876, ___combiner_4)); }
	inline MB3_TextureCombiner_t2018981714 * get_combiner_4() const { return ___combiner_4; }
	inline MB3_TextureCombiner_t2018981714 ** get_address_of_combiner_4() { return &___combiner_4; }
	inline void set_combiner_4(MB3_TextureCombiner_t2018981714 * value)
	{
		___combiner_4 = value;
		Il2CppCodeGenWriteBarrier((&___combiner_4), value);
	}

	inline static int32_t get_offset_of_U3CcoroutineResult2U3E__2_5() { return static_cast<int32_t>(offsetof(U3C_CreateAtlasesCoroutineAtlasesU3Ec__Iterator1_t3662324876, ___U3CcoroutineResult2U3E__2_5)); }
	inline CombineTexturesIntoAtlasesCoroutineResult_t3420713479 * get_U3CcoroutineResult2U3E__2_5() const { return ___U3CcoroutineResult2U3E__2_5; }
	inline CombineTexturesIntoAtlasesCoroutineResult_t3420713479 ** get_address_of_U3CcoroutineResult2U3E__2_5() { return &___U3CcoroutineResult2U3E__2_5; }
	inline void set_U3CcoroutineResult2U3E__2_5(CombineTexturesIntoAtlasesCoroutineResult_t3420713479 * value)
	{
		___U3CcoroutineResult2U3E__2_5 = value;
		Il2CppCodeGenWriteBarrier((&___U3CcoroutineResult2U3E__2_5), value);
	}

	inline static int32_t get_offset_of_progressInfo_6() { return static_cast<int32_t>(offsetof(U3C_CreateAtlasesCoroutineAtlasesU3Ec__Iterator1_t3662324876, ___progressInfo_6)); }
	inline ProgressUpdateDelegate_t883957101 * get_progressInfo_6() const { return ___progressInfo_6; }
	inline ProgressUpdateDelegate_t883957101 ** get_address_of_progressInfo_6() { return &___progressInfo_6; }
	inline void set_progressInfo_6(ProgressUpdateDelegate_t883957101 * value)
	{
		___progressInfo_6 = value;
		Il2CppCodeGenWriteBarrier((&___progressInfo_6), value);
	}

	inline static int32_t get_offset_of_editorMethods_7() { return static_cast<int32_t>(offsetof(U3C_CreateAtlasesCoroutineAtlasesU3Ec__Iterator1_t3662324876, ___editorMethods_7)); }
	inline RuntimeObject* get_editorMethods_7() const { return ___editorMethods_7; }
	inline RuntimeObject** get_address_of_editorMethods_7() { return &___editorMethods_7; }
	inline void set_editorMethods_7(RuntimeObject* value)
	{
		___editorMethods_7 = value;
		Il2CppCodeGenWriteBarrier((&___editorMethods_7), value);
	}

	inline static int32_t get_offset_of_maxTimePerFrame_8() { return static_cast<int32_t>(offsetof(U3C_CreateAtlasesCoroutineAtlasesU3Ec__Iterator1_t3662324876, ___maxTimePerFrame_8)); }
	inline float get_maxTimePerFrame_8() const { return ___maxTimePerFrame_8; }
	inline float* get_address_of_maxTimePerFrame_8() { return &___maxTimePerFrame_8; }
	inline void set_maxTimePerFrame_8(float value)
	{
		___maxTimePerFrame_8 = value;
	}

	inline static int32_t get_offset_of_coroutineResult_9() { return static_cast<int32_t>(offsetof(U3C_CreateAtlasesCoroutineAtlasesU3Ec__Iterator1_t3662324876, ___coroutineResult_9)); }
	inline CreateAtlasesCoroutineResult_t3502510657 * get_coroutineResult_9() const { return ___coroutineResult_9; }
	inline CreateAtlasesCoroutineResult_t3502510657 ** get_address_of_coroutineResult_9() { return &___coroutineResult_9; }
	inline void set_coroutineResult_9(CreateAtlasesCoroutineResult_t3502510657 * value)
	{
		___coroutineResult_9 = value;
		Il2CppCodeGenWriteBarrier((&___coroutineResult_9), value);
	}

	inline static int32_t get_offset_of_U24this_10() { return static_cast<int32_t>(offsetof(U3C_CreateAtlasesCoroutineAtlasesU3Ec__Iterator1_t3662324876, ___U24this_10)); }
	inline MB3_TextureBaker_t37954774 * get_U24this_10() const { return ___U24this_10; }
	inline MB3_TextureBaker_t37954774 ** get_address_of_U24this_10() { return &___U24this_10; }
	inline void set_U24this_10(MB3_TextureBaker_t37954774 * value)
	{
		___U24this_10 = value;
		Il2CppCodeGenWriteBarrier((&___U24this_10), value);
	}

	inline static int32_t get_offset_of_U24current_11() { return static_cast<int32_t>(offsetof(U3C_CreateAtlasesCoroutineAtlasesU3Ec__Iterator1_t3662324876, ___U24current_11)); }
	inline RuntimeObject * get_U24current_11() const { return ___U24current_11; }
	inline RuntimeObject ** get_address_of_U24current_11() { return &___U24current_11; }
	inline void set_U24current_11(RuntimeObject * value)
	{
		___U24current_11 = value;
		Il2CppCodeGenWriteBarrier((&___U24current_11), value);
	}

	inline static int32_t get_offset_of_U24disposing_12() { return static_cast<int32_t>(offsetof(U3C_CreateAtlasesCoroutineAtlasesU3Ec__Iterator1_t3662324876, ___U24disposing_12)); }
	inline bool get_U24disposing_12() const { return ___U24disposing_12; }
	inline bool* get_address_of_U24disposing_12() { return &___U24disposing_12; }
	inline void set_U24disposing_12(bool value)
	{
		___U24disposing_12 = value;
	}

	inline static int32_t get_offset_of_U24PC_13() { return static_cast<int32_t>(offsetof(U3C_CreateAtlasesCoroutineAtlasesU3Ec__Iterator1_t3662324876, ___U24PC_13)); }
	inline int32_t get_U24PC_13() const { return ___U24PC_13; }
	inline int32_t* get_address_of_U24PC_13() { return &___U24PC_13; }
	inline void set_U24PC_13(int32_t value)
	{
		___U24PC_13 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // U3C_CREATEATLASESCOROUTINEATLASESU3EC__ITERATOR1_T3662324876_H
#ifndef U3C_CREATEATLASESCOROUTINETEXTUREARRAYU3EC__ITERATOR2_T3158008321_H
#define U3C_CREATEATLASESCOROUTINETEXTUREARRAYU3EC__ITERATOR2_T3158008321_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// MB3_TextureBaker/<_CreateAtlasesCoroutineTextureArray>c__Iterator2
struct  U3C_CreateAtlasesCoroutineTextureArrayU3Ec__Iterator2_t3158008321  : public RuntimeObject
{
public:
	// MB_TextureArrayResultMaterial[] MB3_TextureBaker/<_CreateAtlasesCoroutineTextureArray>c__Iterator2::<bakedMatsAndSlices>__0
	MB_TextureArrayResultMaterialU5BU5D_t631979971* ___U3CbakedMatsAndSlicesU3E__0_0;
	// DigitalOpus.MB.Core.MB3_TextureCombiner/CreateAtlasesCoroutineResult MB3_TextureBaker/<_CreateAtlasesCoroutineTextureArray>c__Iterator2::coroutineResult
	CreateAtlasesCoroutineResult_t3502510657 * ___coroutineResult_1;
	// DigitalOpus.MB.Core.MB2_EditorMethodsInterface MB3_TextureBaker/<_CreateAtlasesCoroutineTextureArray>c__Iterator2::editorMethods
	RuntimeObject* ___editorMethods_2;
	// System.Int32 MB3_TextureBaker/<_CreateAtlasesCoroutineTextureArray>c__Iterator2::<numResultMats>__0
	int32_t ___U3CnumResultMatsU3E__0_3;
	// System.Int32 MB3_TextureBaker/<_CreateAtlasesCoroutineTextureArray>c__Iterator2::<resMatIdx>__1
	int32_t ___U3CresMatIdxU3E__1_4;
	// DigitalOpus.MB.Core.MB3_TextureCombiner MB3_TextureBaker/<_CreateAtlasesCoroutineTextureArray>c__Iterator2::combiner
	MB3_TextureCombiner_t2018981714 * ___combiner_5;
	// DigitalOpus.MB.Core.ProgressUpdateDelegate MB3_TextureBaker/<_CreateAtlasesCoroutineTextureArray>c__Iterator2::progressInfo
	ProgressUpdateDelegate_t883957101 * ___progressInfo_6;
	// System.Boolean MB3_TextureBaker/<_CreateAtlasesCoroutineTextureArray>c__Iterator2::saveAtlasesAsAssets
	bool ___saveAtlasesAsAssets_7;
	// System.Single MB3_TextureBaker/<_CreateAtlasesCoroutineTextureArray>c__Iterator2::maxTimePerFrame
	float ___maxTimePerFrame_8;
	// MB3_TextureBaker MB3_TextureBaker/<_CreateAtlasesCoroutineTextureArray>c__Iterator2::$this
	MB3_TextureBaker_t37954774 * ___U24this_9;
	// System.Object MB3_TextureBaker/<_CreateAtlasesCoroutineTextureArray>c__Iterator2::$current
	RuntimeObject * ___U24current_10;
	// System.Boolean MB3_TextureBaker/<_CreateAtlasesCoroutineTextureArray>c__Iterator2::$disposing
	bool ___U24disposing_11;
	// System.Int32 MB3_TextureBaker/<_CreateAtlasesCoroutineTextureArray>c__Iterator2::$PC
	int32_t ___U24PC_12;

public:
	inline static int32_t get_offset_of_U3CbakedMatsAndSlicesU3E__0_0() { return static_cast<int32_t>(offsetof(U3C_CreateAtlasesCoroutineTextureArrayU3Ec__Iterator2_t3158008321, ___U3CbakedMatsAndSlicesU3E__0_0)); }
	inline MB_TextureArrayResultMaterialU5BU5D_t631979971* get_U3CbakedMatsAndSlicesU3E__0_0() const { return ___U3CbakedMatsAndSlicesU3E__0_0; }
	inline MB_TextureArrayResultMaterialU5BU5D_t631979971** get_address_of_U3CbakedMatsAndSlicesU3E__0_0() { return &___U3CbakedMatsAndSlicesU3E__0_0; }
	inline void set_U3CbakedMatsAndSlicesU3E__0_0(MB_TextureArrayResultMaterialU5BU5D_t631979971* value)
	{
		___U3CbakedMatsAndSlicesU3E__0_0 = value;
		Il2CppCodeGenWriteBarrier((&___U3CbakedMatsAndSlicesU3E__0_0), value);
	}

	inline static int32_t get_offset_of_coroutineResult_1() { return static_cast<int32_t>(offsetof(U3C_CreateAtlasesCoroutineTextureArrayU3Ec__Iterator2_t3158008321, ___coroutineResult_1)); }
	inline CreateAtlasesCoroutineResult_t3502510657 * get_coroutineResult_1() const { return ___coroutineResult_1; }
	inline CreateAtlasesCoroutineResult_t3502510657 ** get_address_of_coroutineResult_1() { return &___coroutineResult_1; }
	inline void set_coroutineResult_1(CreateAtlasesCoroutineResult_t3502510657 * value)
	{
		___coroutineResult_1 = value;
		Il2CppCodeGenWriteBarrier((&___coroutineResult_1), value);
	}

	inline static int32_t get_offset_of_editorMethods_2() { return static_cast<int32_t>(offsetof(U3C_CreateAtlasesCoroutineTextureArrayU3Ec__Iterator2_t3158008321, ___editorMethods_2)); }
	inline RuntimeObject* get_editorMethods_2() const { return ___editorMethods_2; }
	inline RuntimeObject** get_address_of_editorMethods_2() { return &___editorMethods_2; }
	inline void set_editorMethods_2(RuntimeObject* value)
	{
		___editorMethods_2 = value;
		Il2CppCodeGenWriteBarrier((&___editorMethods_2), value);
	}

	inline static int32_t get_offset_of_U3CnumResultMatsU3E__0_3() { return static_cast<int32_t>(offsetof(U3C_CreateAtlasesCoroutineTextureArrayU3Ec__Iterator2_t3158008321, ___U3CnumResultMatsU3E__0_3)); }
	inline int32_t get_U3CnumResultMatsU3E__0_3() const { return ___U3CnumResultMatsU3E__0_3; }
	inline int32_t* get_address_of_U3CnumResultMatsU3E__0_3() { return &___U3CnumResultMatsU3E__0_3; }
	inline void set_U3CnumResultMatsU3E__0_3(int32_t value)
	{
		___U3CnumResultMatsU3E__0_3 = value;
	}

	inline static int32_t get_offset_of_U3CresMatIdxU3E__1_4() { return static_cast<int32_t>(offsetof(U3C_CreateAtlasesCoroutineTextureArrayU3Ec__Iterator2_t3158008321, ___U3CresMatIdxU3E__1_4)); }
	inline int32_t get_U3CresMatIdxU3E__1_4() const { return ___U3CresMatIdxU3E__1_4; }
	inline int32_t* get_address_of_U3CresMatIdxU3E__1_4() { return &___U3CresMatIdxU3E__1_4; }
	inline void set_U3CresMatIdxU3E__1_4(int32_t value)
	{
		___U3CresMatIdxU3E__1_4 = value;
	}

	inline static int32_t get_offset_of_combiner_5() { return static_cast<int32_t>(offsetof(U3C_CreateAtlasesCoroutineTextureArrayU3Ec__Iterator2_t3158008321, ___combiner_5)); }
	inline MB3_TextureCombiner_t2018981714 * get_combiner_5() const { return ___combiner_5; }
	inline MB3_TextureCombiner_t2018981714 ** get_address_of_combiner_5() { return &___combiner_5; }
	inline void set_combiner_5(MB3_TextureCombiner_t2018981714 * value)
	{
		___combiner_5 = value;
		Il2CppCodeGenWriteBarrier((&___combiner_5), value);
	}

	inline static int32_t get_offset_of_progressInfo_6() { return static_cast<int32_t>(offsetof(U3C_CreateAtlasesCoroutineTextureArrayU3Ec__Iterator2_t3158008321, ___progressInfo_6)); }
	inline ProgressUpdateDelegate_t883957101 * get_progressInfo_6() const { return ___progressInfo_6; }
	inline ProgressUpdateDelegate_t883957101 ** get_address_of_progressInfo_6() { return &___progressInfo_6; }
	inline void set_progressInfo_6(ProgressUpdateDelegate_t883957101 * value)
	{
		___progressInfo_6 = value;
		Il2CppCodeGenWriteBarrier((&___progressInfo_6), value);
	}

	inline static int32_t get_offset_of_saveAtlasesAsAssets_7() { return static_cast<int32_t>(offsetof(U3C_CreateAtlasesCoroutineTextureArrayU3Ec__Iterator2_t3158008321, ___saveAtlasesAsAssets_7)); }
	inline bool get_saveAtlasesAsAssets_7() const { return ___saveAtlasesAsAssets_7; }
	inline bool* get_address_of_saveAtlasesAsAssets_7() { return &___saveAtlasesAsAssets_7; }
	inline void set_saveAtlasesAsAssets_7(bool value)
	{
		___saveAtlasesAsAssets_7 = value;
	}

	inline static int32_t get_offset_of_maxTimePerFrame_8() { return static_cast<int32_t>(offsetof(U3C_CreateAtlasesCoroutineTextureArrayU3Ec__Iterator2_t3158008321, ___maxTimePerFrame_8)); }
	inline float get_maxTimePerFrame_8() const { return ___maxTimePerFrame_8; }
	inline float* get_address_of_maxTimePerFrame_8() { return &___maxTimePerFrame_8; }
	inline void set_maxTimePerFrame_8(float value)
	{
		___maxTimePerFrame_8 = value;
	}

	inline static int32_t get_offset_of_U24this_9() { return static_cast<int32_t>(offsetof(U3C_CreateAtlasesCoroutineTextureArrayU3Ec__Iterator2_t3158008321, ___U24this_9)); }
	inline MB3_TextureBaker_t37954774 * get_U24this_9() const { return ___U24this_9; }
	inline MB3_TextureBaker_t37954774 ** get_address_of_U24this_9() { return &___U24this_9; }
	inline void set_U24this_9(MB3_TextureBaker_t37954774 * value)
	{
		___U24this_9 = value;
		Il2CppCodeGenWriteBarrier((&___U24this_9), value);
	}

	inline static int32_t get_offset_of_U24current_10() { return static_cast<int32_t>(offsetof(U3C_CreateAtlasesCoroutineTextureArrayU3Ec__Iterator2_t3158008321, ___U24current_10)); }
	inline RuntimeObject * get_U24current_10() const { return ___U24current_10; }
	inline RuntimeObject ** get_address_of_U24current_10() { return &___U24current_10; }
	inline void set_U24current_10(RuntimeObject * value)
	{
		___U24current_10 = value;
		Il2CppCodeGenWriteBarrier((&___U24current_10), value);
	}

	inline static int32_t get_offset_of_U24disposing_11() { return static_cast<int32_t>(offsetof(U3C_CreateAtlasesCoroutineTextureArrayU3Ec__Iterator2_t3158008321, ___U24disposing_11)); }
	inline bool get_U24disposing_11() const { return ___U24disposing_11; }
	inline bool* get_address_of_U24disposing_11() { return &___U24disposing_11; }
	inline void set_U24disposing_11(bool value)
	{
		___U24disposing_11 = value;
	}

	inline static int32_t get_offset_of_U24PC_12() { return static_cast<int32_t>(offsetof(U3C_CreateAtlasesCoroutineTextureArrayU3Ec__Iterator2_t3158008321, ___U24PC_12)); }
	inline int32_t get_U24PC_12() const { return ___U24PC_12; }
	inline int32_t* get_address_of_U24PC_12() { return &___U24PC_12; }
	inline void set_U24PC_12(int32_t value)
	{
		___U24PC_12 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // U3C_CREATEATLASESCOROUTINETEXTUREARRAYU3EC__ITERATOR2_T3158008321_H
#ifndef MB_ATLASESANDRECTS_T2070141231_H
#define MB_ATLASESANDRECTS_T2070141231_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// MB_AtlasesAndRects
struct  MB_AtlasesAndRects_t2070141231  : public RuntimeObject
{
public:
	// UnityEngine.Texture2D[] MB_AtlasesAndRects::atlases
	Texture2DU5BU5D_t149664596* ___atlases_0;
	// System.Collections.Generic.List`1<MB_MaterialAndUVRect> MB_AtlasesAndRects::mat2rect_map
	List_1_t3083951471 * ___mat2rect_map_1;
	// System.String[] MB_AtlasesAndRects::texPropertyNames
	StringU5BU5D_t1281789340* ___texPropertyNames_2;

public:
	inline static int32_t get_offset_of_atlases_0() { return static_cast<int32_t>(offsetof(MB_AtlasesAndRects_t2070141231, ___atlases_0)); }
	inline Texture2DU5BU5D_t149664596* get_atlases_0() const { return ___atlases_0; }
	inline Texture2DU5BU5D_t149664596** get_address_of_atlases_0() { return &___atlases_0; }
	inline void set_atlases_0(Texture2DU5BU5D_t149664596* value)
	{
		___atlases_0 = value;
		Il2CppCodeGenWriteBarrier((&___atlases_0), value);
	}

	inline static int32_t get_offset_of_mat2rect_map_1() { return static_cast<int32_t>(offsetof(MB_AtlasesAndRects_t2070141231, ___mat2rect_map_1)); }
	inline List_1_t3083951471 * get_mat2rect_map_1() const { return ___mat2rect_map_1; }
	inline List_1_t3083951471 ** get_address_of_mat2rect_map_1() { return &___mat2rect_map_1; }
	inline void set_mat2rect_map_1(List_1_t3083951471 * value)
	{
		___mat2rect_map_1 = value;
		Il2CppCodeGenWriteBarrier((&___mat2rect_map_1), value);
	}

	inline static int32_t get_offset_of_texPropertyNames_2() { return static_cast<int32_t>(offsetof(MB_AtlasesAndRects_t2070141231, ___texPropertyNames_2)); }
	inline StringU5BU5D_t1281789340* get_texPropertyNames_2() const { return ___texPropertyNames_2; }
	inline StringU5BU5D_t1281789340** get_address_of_texPropertyNames_2() { return &___texPropertyNames_2; }
	inline void set_texPropertyNames_2(StringU5BU5D_t1281789340* value)
	{
		___texPropertyNames_2 = value;
		Il2CppCodeGenWriteBarrier((&___texPropertyNames_2), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // MB_ATLASESANDRECTS_T2070141231_H
#ifndef MB_MULTIMATERIAL_T1888048978_H
#define MB_MULTIMATERIAL_T1888048978_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// MB_MultiMaterial
struct  MB_MultiMaterial_t1888048978  : public RuntimeObject
{
public:
	// UnityEngine.Material MB_MultiMaterial::combinedMaterial
	Material_t340375123 * ___combinedMaterial_0;
	// System.Boolean MB_MultiMaterial::considerMeshUVs
	bool ___considerMeshUVs_1;
	// System.Collections.Generic.List`1<UnityEngine.Material> MB_MultiMaterial::sourceMaterials
	List_1_t1812449865 * ___sourceMaterials_2;

public:
	inline static int32_t get_offset_of_combinedMaterial_0() { return static_cast<int32_t>(offsetof(MB_MultiMaterial_t1888048978, ___combinedMaterial_0)); }
	inline Material_t340375123 * get_combinedMaterial_0() const { return ___combinedMaterial_0; }
	inline Material_t340375123 ** get_address_of_combinedMaterial_0() { return &___combinedMaterial_0; }
	inline void set_combinedMaterial_0(Material_t340375123 * value)
	{
		___combinedMaterial_0 = value;
		Il2CppCodeGenWriteBarrier((&___combinedMaterial_0), value);
	}

	inline static int32_t get_offset_of_considerMeshUVs_1() { return static_cast<int32_t>(offsetof(MB_MultiMaterial_t1888048978, ___considerMeshUVs_1)); }
	inline bool get_considerMeshUVs_1() const { return ___considerMeshUVs_1; }
	inline bool* get_address_of_considerMeshUVs_1() { return &___considerMeshUVs_1; }
	inline void set_considerMeshUVs_1(bool value)
	{
		___considerMeshUVs_1 = value;
	}

	inline static int32_t get_offset_of_sourceMaterials_2() { return static_cast<int32_t>(offsetof(MB_MultiMaterial_t1888048978, ___sourceMaterials_2)); }
	inline List_1_t1812449865 * get_sourceMaterials_2() const { return ___sourceMaterials_2; }
	inline List_1_t1812449865 ** get_address_of_sourceMaterials_2() { return &___sourceMaterials_2; }
	inline void set_sourceMaterials_2(List_1_t1812449865 * value)
	{
		___sourceMaterials_2 = value;
		Il2CppCodeGenWriteBarrier((&___sourceMaterials_2), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // MB_MULTIMATERIAL_T1888048978_H
#ifndef MB_MULTIMATERIALTEXARRAY_T1025313673_H
#define MB_MULTIMATERIALTEXARRAY_T1025313673_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// MB_MultiMaterialTexArray
struct  MB_MultiMaterialTexArray_t1025313673  : public RuntimeObject
{
public:
	// UnityEngine.Material MB_MultiMaterialTexArray::combinedMaterial
	Material_t340375123 * ___combinedMaterial_0;
	// System.Collections.Generic.List`1<MB_TexArraySlice> MB_MultiMaterialTexArray::slices
	List_1_t80147867 * ___slices_1;
	// System.Collections.Generic.List`1<MB_TexArrayForProperty> MB_MultiMaterialTexArray::textureProperties
	List_1_t2274492589 * ___textureProperties_2;

public:
	inline static int32_t get_offset_of_combinedMaterial_0() { return static_cast<int32_t>(offsetof(MB_MultiMaterialTexArray_t1025313673, ___combinedMaterial_0)); }
	inline Material_t340375123 * get_combinedMaterial_0() const { return ___combinedMaterial_0; }
	inline Material_t340375123 ** get_address_of_combinedMaterial_0() { return &___combinedMaterial_0; }
	inline void set_combinedMaterial_0(Material_t340375123 * value)
	{
		___combinedMaterial_0 = value;
		Il2CppCodeGenWriteBarrier((&___combinedMaterial_0), value);
	}

	inline static int32_t get_offset_of_slices_1() { return static_cast<int32_t>(offsetof(MB_MultiMaterialTexArray_t1025313673, ___slices_1)); }
	inline List_1_t80147867 * get_slices_1() const { return ___slices_1; }
	inline List_1_t80147867 ** get_address_of_slices_1() { return &___slices_1; }
	inline void set_slices_1(List_1_t80147867 * value)
	{
		___slices_1 = value;
		Il2CppCodeGenWriteBarrier((&___slices_1), value);
	}

	inline static int32_t get_offset_of_textureProperties_2() { return static_cast<int32_t>(offsetof(MB_MultiMaterialTexArray_t1025313673, ___textureProperties_2)); }
	inline List_1_t2274492589 * get_textureProperties_2() const { return ___textureProperties_2; }
	inline List_1_t2274492589 ** get_address_of_textureProperties_2() { return &___textureProperties_2; }
	inline void set_textureProperties_2(List_1_t2274492589 * value)
	{
		___textureProperties_2 = value;
		Il2CppCodeGenWriteBarrier((&___textureProperties_2), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // MB_MULTIMATERIALTEXARRAY_T1025313673_H
#ifndef MB_TEXARRAYFORPROPERTY_T802417847_H
#define MB_TEXARRAYFORPROPERTY_T802417847_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// MB_TexArrayForProperty
struct  MB_TexArrayForProperty_t802417847  : public RuntimeObject
{
public:
	// System.String MB_TexArrayForProperty::texPropertyName
	String_t* ___texPropertyName_0;
	// MB_TextureArrayReference[] MB_TexArrayForProperty::formats
	MB_TextureArrayReferenceU5BU5D_t2256643913* ___formats_1;

public:
	inline static int32_t get_offset_of_texPropertyName_0() { return static_cast<int32_t>(offsetof(MB_TexArrayForProperty_t802417847, ___texPropertyName_0)); }
	inline String_t* get_texPropertyName_0() const { return ___texPropertyName_0; }
	inline String_t** get_address_of_texPropertyName_0() { return &___texPropertyName_0; }
	inline void set_texPropertyName_0(String_t* value)
	{
		___texPropertyName_0 = value;
		Il2CppCodeGenWriteBarrier((&___texPropertyName_0), value);
	}

	inline static int32_t get_offset_of_formats_1() { return static_cast<int32_t>(offsetof(MB_TexArrayForProperty_t802417847, ___formats_1)); }
	inline MB_TextureArrayReferenceU5BU5D_t2256643913* get_formats_1() const { return ___formats_1; }
	inline MB_TextureArrayReferenceU5BU5D_t2256643913** get_address_of_formats_1() { return &___formats_1; }
	inline void set_formats_1(MB_TextureArrayReferenceU5BU5D_t2256643913* value)
	{
		___formats_1 = value;
		Il2CppCodeGenWriteBarrier((&___formats_1), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // MB_TEXARRAYFORPROPERTY_T802417847_H
#ifndef MB_TEXARRAYSLICE_T2903040421_H
#define MB_TEXARRAYSLICE_T2903040421_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// MB_TexArraySlice
struct  MB_TexArraySlice_t2903040421  : public RuntimeObject
{
public:
	// System.Boolean MB_TexArraySlice::considerMeshUVs
	bool ___considerMeshUVs_0;
	// System.Collections.Generic.List`1<MB_TexArraySliceRendererMatPair> MB_TexArraySlice::sourceMaterials
	List_1_t3368419753 * ___sourceMaterials_1;

public:
	inline static int32_t get_offset_of_considerMeshUVs_0() { return static_cast<int32_t>(offsetof(MB_TexArraySlice_t2903040421, ___considerMeshUVs_0)); }
	inline bool get_considerMeshUVs_0() const { return ___considerMeshUVs_0; }
	inline bool* get_address_of_considerMeshUVs_0() { return &___considerMeshUVs_0; }
	inline void set_considerMeshUVs_0(bool value)
	{
		___considerMeshUVs_0 = value;
	}

	inline static int32_t get_offset_of_sourceMaterials_1() { return static_cast<int32_t>(offsetof(MB_TexArraySlice_t2903040421, ___sourceMaterials_1)); }
	inline List_1_t3368419753 * get_sourceMaterials_1() const { return ___sourceMaterials_1; }
	inline List_1_t3368419753 ** get_address_of_sourceMaterials_1() { return &___sourceMaterials_1; }
	inline void set_sourceMaterials_1(List_1_t3368419753 * value)
	{
		___sourceMaterials_1 = value;
		Il2CppCodeGenWriteBarrier((&___sourceMaterials_1), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // MB_TEXARRAYSLICE_T2903040421_H
#ifndef MB_TEXARRAYSLICERENDERERMATPAIR_T1896345011_H
#define MB_TEXARRAYSLICERENDERERMATPAIR_T1896345011_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// MB_TexArraySliceRendererMatPair
struct  MB_TexArraySliceRendererMatPair_t1896345011  : public RuntimeObject
{
public:
	// UnityEngine.Material MB_TexArraySliceRendererMatPair::sourceMaterial
	Material_t340375123 * ___sourceMaterial_0;
	// UnityEngine.GameObject MB_TexArraySliceRendererMatPair::renderer
	GameObject_t1113636619 * ___renderer_1;

public:
	inline static int32_t get_offset_of_sourceMaterial_0() { return static_cast<int32_t>(offsetof(MB_TexArraySliceRendererMatPair_t1896345011, ___sourceMaterial_0)); }
	inline Material_t340375123 * get_sourceMaterial_0() const { return ___sourceMaterial_0; }
	inline Material_t340375123 ** get_address_of_sourceMaterial_0() { return &___sourceMaterial_0; }
	inline void set_sourceMaterial_0(Material_t340375123 * value)
	{
		___sourceMaterial_0 = value;
		Il2CppCodeGenWriteBarrier((&___sourceMaterial_0), value);
	}

	inline static int32_t get_offset_of_renderer_1() { return static_cast<int32_t>(offsetof(MB_TexArraySliceRendererMatPair_t1896345011, ___renderer_1)); }
	inline GameObject_t1113636619 * get_renderer_1() const { return ___renderer_1; }
	inline GameObject_t1113636619 ** get_address_of_renderer_1() { return &___renderer_1; }
	inline void set_renderer_1(GameObject_t1113636619 * value)
	{
		___renderer_1 = value;
		Il2CppCodeGenWriteBarrier((&___renderer_1), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // MB_TEXARRAYSLICERENDERERMATPAIR_T1896345011_H
#ifndef MB_TEXTUREARRAYREFERENCE_T2719925336_H
#define MB_TEXTUREARRAYREFERENCE_T2719925336_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// MB_TextureArrayReference
struct  MB_TextureArrayReference_t2719925336  : public RuntimeObject
{
public:
	// System.String MB_TextureArrayReference::texFromatSetName
	String_t* ___texFromatSetName_0;
	// UnityEngine.Texture2DArray MB_TextureArrayReference::texArray
	Texture2DArray_t4044506685 * ___texArray_1;

public:
	inline static int32_t get_offset_of_texFromatSetName_0() { return static_cast<int32_t>(offsetof(MB_TextureArrayReference_t2719925336, ___texFromatSetName_0)); }
	inline String_t* get_texFromatSetName_0() const { return ___texFromatSetName_0; }
	inline String_t** get_address_of_texFromatSetName_0() { return &___texFromatSetName_0; }
	inline void set_texFromatSetName_0(String_t* value)
	{
		___texFromatSetName_0 = value;
		Il2CppCodeGenWriteBarrier((&___texFromatSetName_0), value);
	}

	inline static int32_t get_offset_of_texArray_1() { return static_cast<int32_t>(offsetof(MB_TextureArrayReference_t2719925336, ___texArray_1)); }
	inline Texture2DArray_t4044506685 * get_texArray_1() const { return ___texArray_1; }
	inline Texture2DArray_t4044506685 ** get_address_of_texArray_1() { return &___texArray_1; }
	inline void set_texArray_1(Texture2DArray_t4044506685 * value)
	{
		___texArray_1 = value;
		Il2CppCodeGenWriteBarrier((&___texArray_1), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // MB_TEXTUREARRAYREFERENCE_T2719925336_H
#ifndef MB_TEXTUREARRAYRESULTMATERIAL_T1449688550_H
#define MB_TEXTUREARRAYRESULTMATERIAL_T1449688550_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// MB_TextureArrayResultMaterial
struct  MB_TextureArrayResultMaterial_t1449688550  : public RuntimeObject
{
public:
	// MB_AtlasesAndRects[] MB_TextureArrayResultMaterial::slices
	MB_AtlasesAndRectsU5BU5D_t4190144822* ___slices_0;

public:
	inline static int32_t get_offset_of_slices_0() { return static_cast<int32_t>(offsetof(MB_TextureArrayResultMaterial_t1449688550, ___slices_0)); }
	inline MB_AtlasesAndRectsU5BU5D_t4190144822* get_slices_0() const { return ___slices_0; }
	inline MB_AtlasesAndRectsU5BU5D_t4190144822** get_address_of_slices_0() { return &___slices_0; }
	inline void set_slices_0(MB_AtlasesAndRectsU5BU5D_t4190144822* value)
	{
		___slices_0 = value;
		Il2CppCodeGenWriteBarrier((&___slices_0), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // MB_TEXTUREARRAYRESULTMATERIAL_T1449688550_H
struct Il2CppArrayBounds;
#ifndef RUNTIMEARRAY_H
#define RUNTIMEARRAY_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Array

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // RUNTIMEARRAY_H
#ifndef HASHSET_1_T3200291893_H
#define HASHSET_1_T3200291893_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Collections.Generic.HashSet`1<UnityEngine.Material>
struct  HashSet_1_t3200291893  : public RuntimeObject
{
public:
	// System.Int32[] System.Collections.Generic.HashSet`1::_buckets
	Int32U5BU5D_t385246372* ____buckets_7;
	// System.Collections.Generic.HashSet`1/Slot<T>[] System.Collections.Generic.HashSet`1::_slots
	SlotU5BU5D_t3130789405* ____slots_8;
	// System.Int32 System.Collections.Generic.HashSet`1::_count
	int32_t ____count_9;
	// System.Int32 System.Collections.Generic.HashSet`1::_lastIndex
	int32_t ____lastIndex_10;
	// System.Int32 System.Collections.Generic.HashSet`1::_freeList
	int32_t ____freeList_11;
	// System.Collections.Generic.IEqualityComparer`1<T> System.Collections.Generic.HashSet`1::_comparer
	RuntimeObject* ____comparer_12;
	// System.Int32 System.Collections.Generic.HashSet`1::_version
	int32_t ____version_13;
	// System.Runtime.Serialization.SerializationInfo System.Collections.Generic.HashSet`1::_siInfo
	SerializationInfo_t950877179 * ____siInfo_14;

public:
	inline static int32_t get_offset_of__buckets_7() { return static_cast<int32_t>(offsetof(HashSet_1_t3200291893, ____buckets_7)); }
	inline Int32U5BU5D_t385246372* get__buckets_7() const { return ____buckets_7; }
	inline Int32U5BU5D_t385246372** get_address_of__buckets_7() { return &____buckets_7; }
	inline void set__buckets_7(Int32U5BU5D_t385246372* value)
	{
		____buckets_7 = value;
		Il2CppCodeGenWriteBarrier((&____buckets_7), value);
	}

	inline static int32_t get_offset_of__slots_8() { return static_cast<int32_t>(offsetof(HashSet_1_t3200291893, ____slots_8)); }
	inline SlotU5BU5D_t3130789405* get__slots_8() const { return ____slots_8; }
	inline SlotU5BU5D_t3130789405** get_address_of__slots_8() { return &____slots_8; }
	inline void set__slots_8(SlotU5BU5D_t3130789405* value)
	{
		____slots_8 = value;
		Il2CppCodeGenWriteBarrier((&____slots_8), value);
	}

	inline static int32_t get_offset_of__count_9() { return static_cast<int32_t>(offsetof(HashSet_1_t3200291893, ____count_9)); }
	inline int32_t get__count_9() const { return ____count_9; }
	inline int32_t* get_address_of__count_9() { return &____count_9; }
	inline void set__count_9(int32_t value)
	{
		____count_9 = value;
	}

	inline static int32_t get_offset_of__lastIndex_10() { return static_cast<int32_t>(offsetof(HashSet_1_t3200291893, ____lastIndex_10)); }
	inline int32_t get__lastIndex_10() const { return ____lastIndex_10; }
	inline int32_t* get_address_of__lastIndex_10() { return &____lastIndex_10; }
	inline void set__lastIndex_10(int32_t value)
	{
		____lastIndex_10 = value;
	}

	inline static int32_t get_offset_of__freeList_11() { return static_cast<int32_t>(offsetof(HashSet_1_t3200291893, ____freeList_11)); }
	inline int32_t get__freeList_11() const { return ____freeList_11; }
	inline int32_t* get_address_of__freeList_11() { return &____freeList_11; }
	inline void set__freeList_11(int32_t value)
	{
		____freeList_11 = value;
	}

	inline static int32_t get_offset_of__comparer_12() { return static_cast<int32_t>(offsetof(HashSet_1_t3200291893, ____comparer_12)); }
	inline RuntimeObject* get__comparer_12() const { return ____comparer_12; }
	inline RuntimeObject** get_address_of__comparer_12() { return &____comparer_12; }
	inline void set__comparer_12(RuntimeObject* value)
	{
		____comparer_12 = value;
		Il2CppCodeGenWriteBarrier((&____comparer_12), value);
	}

	inline static int32_t get_offset_of__version_13() { return static_cast<int32_t>(offsetof(HashSet_1_t3200291893, ____version_13)); }
	inline int32_t get__version_13() const { return ____version_13; }
	inline int32_t* get_address_of__version_13() { return &____version_13; }
	inline void set__version_13(int32_t value)
	{
		____version_13 = value;
	}

	inline static int32_t get_offset_of__siInfo_14() { return static_cast<int32_t>(offsetof(HashSet_1_t3200291893, ____siInfo_14)); }
	inline SerializationInfo_t950877179 * get__siInfo_14() const { return ____siInfo_14; }
	inline SerializationInfo_t950877179 ** get_address_of__siInfo_14() { return &____siInfo_14; }
	inline void set__siInfo_14(SerializationInfo_t950877179 * value)
	{
		____siInfo_14 = value;
		Il2CppCodeGenWriteBarrier((&____siInfo_14), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // HASHSET_1_T3200291893_H
#ifndef LIST_1_T3450590561_H
#define LIST_1_T3450590561_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Collections.Generic.List`1<DigitalOpus.MB.Core.AtlasPackingResult>
struct  List_1_t3450590561  : public RuntimeObject
{
public:
	// T[] System.Collections.Generic.List`1::_items
	AtlasPackingResultU5BU5D_t3980930186* ____items_1;
	// System.Int32 System.Collections.Generic.List`1::_size
	int32_t ____size_2;
	// System.Int32 System.Collections.Generic.List`1::_version
	int32_t ____version_3;
	// System.Object System.Collections.Generic.List`1::_syncRoot
	RuntimeObject * ____syncRoot_4;

public:
	inline static int32_t get_offset_of__items_1() { return static_cast<int32_t>(offsetof(List_1_t3450590561, ____items_1)); }
	inline AtlasPackingResultU5BU5D_t3980930186* get__items_1() const { return ____items_1; }
	inline AtlasPackingResultU5BU5D_t3980930186** get_address_of__items_1() { return &____items_1; }
	inline void set__items_1(AtlasPackingResultU5BU5D_t3980930186* value)
	{
		____items_1 = value;
		Il2CppCodeGenWriteBarrier((&____items_1), value);
	}

	inline static int32_t get_offset_of__size_2() { return static_cast<int32_t>(offsetof(List_1_t3450590561, ____size_2)); }
	inline int32_t get__size_2() const { return ____size_2; }
	inline int32_t* get_address_of__size_2() { return &____size_2; }
	inline void set__size_2(int32_t value)
	{
		____size_2 = value;
	}

	inline static int32_t get_offset_of__version_3() { return static_cast<int32_t>(offsetof(List_1_t3450590561, ____version_3)); }
	inline int32_t get__version_3() const { return ____version_3; }
	inline int32_t* get_address_of__version_3() { return &____version_3; }
	inline void set__version_3(int32_t value)
	{
		____version_3 = value;
	}

	inline static int32_t get_offset_of__syncRoot_4() { return static_cast<int32_t>(offsetof(List_1_t3450590561, ____syncRoot_4)); }
	inline RuntimeObject * get__syncRoot_4() const { return ____syncRoot_4; }
	inline RuntimeObject ** get_address_of__syncRoot_4() { return &____syncRoot_4; }
	inline void set__syncRoot_4(RuntimeObject * value)
	{
		____syncRoot_4 = value;
		Il2CppCodeGenWriteBarrier((&____syncRoot_4), value);
	}
};

struct List_1_t3450590561_StaticFields
{
public:
	// T[] System.Collections.Generic.List`1::_emptyArray
	AtlasPackingResultU5BU5D_t3980930186* ____emptyArray_5;

public:
	inline static int32_t get_offset_of__emptyArray_5() { return static_cast<int32_t>(offsetof(List_1_t3450590561_StaticFields, ____emptyArray_5)); }
	inline AtlasPackingResultU5BU5D_t3980930186* get__emptyArray_5() const { return ____emptyArray_5; }
	inline AtlasPackingResultU5BU5D_t3980930186** get_address_of__emptyArray_5() { return &____emptyArray_5; }
	inline void set__emptyArray_5(AtlasPackingResultU5BU5D_t3980930186* value)
	{
		____emptyArray_5 = value;
		Il2CppCodeGenWriteBarrier((&____emptyArray_5), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // LIST_1_T3450590561_H
#ifndef LIST_1_T1552207755_H
#define LIST_1_T1552207755_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Collections.Generic.List`1<DigitalOpus.MB.Core.MB_TexSet>
struct  List_1_t1552207755  : public RuntimeObject
{
public:
	// T[] System.Collections.Generic.List`1::_items
	MB_TexSetU5BU5D_t1413005944* ____items_1;
	// System.Int32 System.Collections.Generic.List`1::_size
	int32_t ____size_2;
	// System.Int32 System.Collections.Generic.List`1::_version
	int32_t ____version_3;
	// System.Object System.Collections.Generic.List`1::_syncRoot
	RuntimeObject * ____syncRoot_4;

public:
	inline static int32_t get_offset_of__items_1() { return static_cast<int32_t>(offsetof(List_1_t1552207755, ____items_1)); }
	inline MB_TexSetU5BU5D_t1413005944* get__items_1() const { return ____items_1; }
	inline MB_TexSetU5BU5D_t1413005944** get_address_of__items_1() { return &____items_1; }
	inline void set__items_1(MB_TexSetU5BU5D_t1413005944* value)
	{
		____items_1 = value;
		Il2CppCodeGenWriteBarrier((&____items_1), value);
	}

	inline static int32_t get_offset_of__size_2() { return static_cast<int32_t>(offsetof(List_1_t1552207755, ____size_2)); }
	inline int32_t get__size_2() const { return ____size_2; }
	inline int32_t* get_address_of__size_2() { return &____size_2; }
	inline void set__size_2(int32_t value)
	{
		____size_2 = value;
	}

	inline static int32_t get_offset_of__version_3() { return static_cast<int32_t>(offsetof(List_1_t1552207755, ____version_3)); }
	inline int32_t get__version_3() const { return ____version_3; }
	inline int32_t* get_address_of__version_3() { return &____version_3; }
	inline void set__version_3(int32_t value)
	{
		____version_3 = value;
	}

	inline static int32_t get_offset_of__syncRoot_4() { return static_cast<int32_t>(offsetof(List_1_t1552207755, ____syncRoot_4)); }
	inline RuntimeObject * get__syncRoot_4() const { return ____syncRoot_4; }
	inline RuntimeObject ** get_address_of__syncRoot_4() { return &____syncRoot_4; }
	inline void set__syncRoot_4(RuntimeObject * value)
	{
		____syncRoot_4 = value;
		Il2CppCodeGenWriteBarrier((&____syncRoot_4), value);
	}
};

struct List_1_t1552207755_StaticFields
{
public:
	// T[] System.Collections.Generic.List`1::_emptyArray
	MB_TexSetU5BU5D_t1413005944* ____emptyArray_5;

public:
	inline static int32_t get_offset_of__emptyArray_5() { return static_cast<int32_t>(offsetof(List_1_t1552207755_StaticFields, ____emptyArray_5)); }
	inline MB_TexSetU5BU5D_t1413005944* get__emptyArray_5() const { return ____emptyArray_5; }
	inline MB_TexSetU5BU5D_t1413005944** get_address_of__emptyArray_5() { return &____emptyArray_5; }
	inline void set__emptyArray_5(MB_TexSetU5BU5D_t1413005944* value)
	{
		____emptyArray_5 = value;
		Il2CppCodeGenWriteBarrier((&____emptyArray_5), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // LIST_1_T1552207755_H
#ifndef LIST_1_T1379721816_H
#define LIST_1_T1379721816_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Collections.Generic.List`1<DigitalOpus.MB.Core.MatAndTransformToMerged>
struct  List_1_t1379721816  : public RuntimeObject
{
public:
	// T[] System.Collections.Generic.List`1::_items
	MatAndTransformToMergedU5BU5D_t3435696599* ____items_1;
	// System.Int32 System.Collections.Generic.List`1::_size
	int32_t ____size_2;
	// System.Int32 System.Collections.Generic.List`1::_version
	int32_t ____version_3;
	// System.Object System.Collections.Generic.List`1::_syncRoot
	RuntimeObject * ____syncRoot_4;

public:
	inline static int32_t get_offset_of__items_1() { return static_cast<int32_t>(offsetof(List_1_t1379721816, ____items_1)); }
	inline MatAndTransformToMergedU5BU5D_t3435696599* get__items_1() const { return ____items_1; }
	inline MatAndTransformToMergedU5BU5D_t3435696599** get_address_of__items_1() { return &____items_1; }
	inline void set__items_1(MatAndTransformToMergedU5BU5D_t3435696599* value)
	{
		____items_1 = value;
		Il2CppCodeGenWriteBarrier((&____items_1), value);
	}

	inline static int32_t get_offset_of__size_2() { return static_cast<int32_t>(offsetof(List_1_t1379721816, ____size_2)); }
	inline int32_t get__size_2() const { return ____size_2; }
	inline int32_t* get_address_of__size_2() { return &____size_2; }
	inline void set__size_2(int32_t value)
	{
		____size_2 = value;
	}

	inline static int32_t get_offset_of__version_3() { return static_cast<int32_t>(offsetof(List_1_t1379721816, ____version_3)); }
	inline int32_t get__version_3() const { return ____version_3; }
	inline int32_t* get_address_of__version_3() { return &____version_3; }
	inline void set__version_3(int32_t value)
	{
		____version_3 = value;
	}

	inline static int32_t get_offset_of__syncRoot_4() { return static_cast<int32_t>(offsetof(List_1_t1379721816, ____syncRoot_4)); }
	inline RuntimeObject * get__syncRoot_4() const { return ____syncRoot_4; }
	inline RuntimeObject ** get_address_of__syncRoot_4() { return &____syncRoot_4; }
	inline void set__syncRoot_4(RuntimeObject * value)
	{
		____syncRoot_4 = value;
		Il2CppCodeGenWriteBarrier((&____syncRoot_4), value);
	}
};

struct List_1_t1379721816_StaticFields
{
public:
	// T[] System.Collections.Generic.List`1::_emptyArray
	MatAndTransformToMergedU5BU5D_t3435696599* ____emptyArray_5;

public:
	inline static int32_t get_offset_of__emptyArray_5() { return static_cast<int32_t>(offsetof(List_1_t1379721816_StaticFields, ____emptyArray_5)); }
	inline MatAndTransformToMergedU5BU5D_t3435696599* get__emptyArray_5() const { return ____emptyArray_5; }
	inline MatAndTransformToMergedU5BU5D_t3435696599** get_address_of__emptyArray_5() { return &____emptyArray_5; }
	inline void set__emptyArray_5(MatAndTransformToMergedU5BU5D_t3435696599* value)
	{
		____emptyArray_5 = value;
		Il2CppCodeGenWriteBarrier((&____emptyArray_5), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // LIST_1_T1379721816_H
#ifndef LIST_1_T2795786026_H
#define LIST_1_T2795786026_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Collections.Generic.List`1<DigitalOpus.MB.Core.ShaderTextureProperty>
struct  List_1_t2795786026  : public RuntimeObject
{
public:
	// T[] System.Collections.Generic.List`1::_items
	ShaderTexturePropertyU5BU5D_t2972945789* ____items_1;
	// System.Int32 System.Collections.Generic.List`1::_size
	int32_t ____size_2;
	// System.Int32 System.Collections.Generic.List`1::_version
	int32_t ____version_3;
	// System.Object System.Collections.Generic.List`1::_syncRoot
	RuntimeObject * ____syncRoot_4;

public:
	inline static int32_t get_offset_of__items_1() { return static_cast<int32_t>(offsetof(List_1_t2795786026, ____items_1)); }
	inline ShaderTexturePropertyU5BU5D_t2972945789* get__items_1() const { return ____items_1; }
	inline ShaderTexturePropertyU5BU5D_t2972945789** get_address_of__items_1() { return &____items_1; }
	inline void set__items_1(ShaderTexturePropertyU5BU5D_t2972945789* value)
	{
		____items_1 = value;
		Il2CppCodeGenWriteBarrier((&____items_1), value);
	}

	inline static int32_t get_offset_of__size_2() { return static_cast<int32_t>(offsetof(List_1_t2795786026, ____size_2)); }
	inline int32_t get__size_2() const { return ____size_2; }
	inline int32_t* get_address_of__size_2() { return &____size_2; }
	inline void set__size_2(int32_t value)
	{
		____size_2 = value;
	}

	inline static int32_t get_offset_of__version_3() { return static_cast<int32_t>(offsetof(List_1_t2795786026, ____version_3)); }
	inline int32_t get__version_3() const { return ____version_3; }
	inline int32_t* get_address_of__version_3() { return &____version_3; }
	inline void set__version_3(int32_t value)
	{
		____version_3 = value;
	}

	inline static int32_t get_offset_of__syncRoot_4() { return static_cast<int32_t>(offsetof(List_1_t2795786026, ____syncRoot_4)); }
	inline RuntimeObject * get__syncRoot_4() const { return ____syncRoot_4; }
	inline RuntimeObject ** get_address_of__syncRoot_4() { return &____syncRoot_4; }
	inline void set__syncRoot_4(RuntimeObject * value)
	{
		____syncRoot_4 = value;
		Il2CppCodeGenWriteBarrier((&____syncRoot_4), value);
	}
};

struct List_1_t2795786026_StaticFields
{
public:
	// T[] System.Collections.Generic.List`1::_emptyArray
	ShaderTexturePropertyU5BU5D_t2972945789* ____emptyArray_5;

public:
	inline static int32_t get_offset_of__emptyArray_5() { return static_cast<int32_t>(offsetof(List_1_t2795786026_StaticFields, ____emptyArray_5)); }
	inline ShaderTexturePropertyU5BU5D_t2972945789* get__emptyArray_5() const { return ____emptyArray_5; }
	inline ShaderTexturePropertyU5BU5D_t2972945789** get_address_of__emptyArray_5() { return &____emptyArray_5; }
	inline void set__emptyArray_5(ShaderTexturePropertyU5BU5D_t2972945789* value)
	{
		____emptyArray_5 = value;
		Il2CppCodeGenWriteBarrier((&____emptyArray_5), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // LIST_1_T2795786026_H
#ifndef LIST_1_T2274492589_H
#define LIST_1_T2274492589_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Collections.Generic.List`1<MB_TexArrayForProperty>
struct  List_1_t2274492589  : public RuntimeObject
{
public:
	// T[] System.Collections.Generic.List`1::_items
	MB_TexArrayForPropertyU5BU5D_t885870222* ____items_1;
	// System.Int32 System.Collections.Generic.List`1::_size
	int32_t ____size_2;
	// System.Int32 System.Collections.Generic.List`1::_version
	int32_t ____version_3;
	// System.Object System.Collections.Generic.List`1::_syncRoot
	RuntimeObject * ____syncRoot_4;

public:
	inline static int32_t get_offset_of__items_1() { return static_cast<int32_t>(offsetof(List_1_t2274492589, ____items_1)); }
	inline MB_TexArrayForPropertyU5BU5D_t885870222* get__items_1() const { return ____items_1; }
	inline MB_TexArrayForPropertyU5BU5D_t885870222** get_address_of__items_1() { return &____items_1; }
	inline void set__items_1(MB_TexArrayForPropertyU5BU5D_t885870222* value)
	{
		____items_1 = value;
		Il2CppCodeGenWriteBarrier((&____items_1), value);
	}

	inline static int32_t get_offset_of__size_2() { return static_cast<int32_t>(offsetof(List_1_t2274492589, ____size_2)); }
	inline int32_t get__size_2() const { return ____size_2; }
	inline int32_t* get_address_of__size_2() { return &____size_2; }
	inline void set__size_2(int32_t value)
	{
		____size_2 = value;
	}

	inline static int32_t get_offset_of__version_3() { return static_cast<int32_t>(offsetof(List_1_t2274492589, ____version_3)); }
	inline int32_t get__version_3() const { return ____version_3; }
	inline int32_t* get_address_of__version_3() { return &____version_3; }
	inline void set__version_3(int32_t value)
	{
		____version_3 = value;
	}

	inline static int32_t get_offset_of__syncRoot_4() { return static_cast<int32_t>(offsetof(List_1_t2274492589, ____syncRoot_4)); }
	inline RuntimeObject * get__syncRoot_4() const { return ____syncRoot_4; }
	inline RuntimeObject ** get_address_of__syncRoot_4() { return &____syncRoot_4; }
	inline void set__syncRoot_4(RuntimeObject * value)
	{
		____syncRoot_4 = value;
		Il2CppCodeGenWriteBarrier((&____syncRoot_4), value);
	}
};

struct List_1_t2274492589_StaticFields
{
public:
	// T[] System.Collections.Generic.List`1::_emptyArray
	MB_TexArrayForPropertyU5BU5D_t885870222* ____emptyArray_5;

public:
	inline static int32_t get_offset_of__emptyArray_5() { return static_cast<int32_t>(offsetof(List_1_t2274492589_StaticFields, ____emptyArray_5)); }
	inline MB_TexArrayForPropertyU5BU5D_t885870222* get__emptyArray_5() const { return ____emptyArray_5; }
	inline MB_TexArrayForPropertyU5BU5D_t885870222** get_address_of__emptyArray_5() { return &____emptyArray_5; }
	inline void set__emptyArray_5(MB_TexArrayForPropertyU5BU5D_t885870222* value)
	{
		____emptyArray_5 = value;
		Il2CppCodeGenWriteBarrier((&____emptyArray_5), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // LIST_1_T2274492589_H
#ifndef LIST_1_T80147867_H
#define LIST_1_T80147867_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Collections.Generic.List`1<MB_TexArraySlice>
struct  List_1_t80147867  : public RuntimeObject
{
public:
	// T[] System.Collections.Generic.List`1::_items
	MB_TexArraySliceU5BU5D_t210072104* ____items_1;
	// System.Int32 System.Collections.Generic.List`1::_size
	int32_t ____size_2;
	// System.Int32 System.Collections.Generic.List`1::_version
	int32_t ____version_3;
	// System.Object System.Collections.Generic.List`1::_syncRoot
	RuntimeObject * ____syncRoot_4;

public:
	inline static int32_t get_offset_of__items_1() { return static_cast<int32_t>(offsetof(List_1_t80147867, ____items_1)); }
	inline MB_TexArraySliceU5BU5D_t210072104* get__items_1() const { return ____items_1; }
	inline MB_TexArraySliceU5BU5D_t210072104** get_address_of__items_1() { return &____items_1; }
	inline void set__items_1(MB_TexArraySliceU5BU5D_t210072104* value)
	{
		____items_1 = value;
		Il2CppCodeGenWriteBarrier((&____items_1), value);
	}

	inline static int32_t get_offset_of__size_2() { return static_cast<int32_t>(offsetof(List_1_t80147867, ____size_2)); }
	inline int32_t get__size_2() const { return ____size_2; }
	inline int32_t* get_address_of__size_2() { return &____size_2; }
	inline void set__size_2(int32_t value)
	{
		____size_2 = value;
	}

	inline static int32_t get_offset_of__version_3() { return static_cast<int32_t>(offsetof(List_1_t80147867, ____version_3)); }
	inline int32_t get__version_3() const { return ____version_3; }
	inline int32_t* get_address_of__version_3() { return &____version_3; }
	inline void set__version_3(int32_t value)
	{
		____version_3 = value;
	}

	inline static int32_t get_offset_of__syncRoot_4() { return static_cast<int32_t>(offsetof(List_1_t80147867, ____syncRoot_4)); }
	inline RuntimeObject * get__syncRoot_4() const { return ____syncRoot_4; }
	inline RuntimeObject ** get_address_of__syncRoot_4() { return &____syncRoot_4; }
	inline void set__syncRoot_4(RuntimeObject * value)
	{
		____syncRoot_4 = value;
		Il2CppCodeGenWriteBarrier((&____syncRoot_4), value);
	}
};

struct List_1_t80147867_StaticFields
{
public:
	// T[] System.Collections.Generic.List`1::_emptyArray
	MB_TexArraySliceU5BU5D_t210072104* ____emptyArray_5;

public:
	inline static int32_t get_offset_of__emptyArray_5() { return static_cast<int32_t>(offsetof(List_1_t80147867_StaticFields, ____emptyArray_5)); }
	inline MB_TexArraySliceU5BU5D_t210072104* get__emptyArray_5() const { return ____emptyArray_5; }
	inline MB_TexArraySliceU5BU5D_t210072104** get_address_of__emptyArray_5() { return &____emptyArray_5; }
	inline void set__emptyArray_5(MB_TexArraySliceU5BU5D_t210072104* value)
	{
		____emptyArray_5 = value;
		Il2CppCodeGenWriteBarrier((&____emptyArray_5), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // LIST_1_T80147867_H
#ifndef LIST_1_T3368419753_H
#define LIST_1_T3368419753_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Collections.Generic.List`1<MB_TexArraySliceRendererMatPair>
struct  List_1_t3368419753  : public RuntimeObject
{
public:
	// T[] System.Collections.Generic.List`1::_items
	MB_TexArraySliceRendererMatPairU5BU5D_t1795268130* ____items_1;
	// System.Int32 System.Collections.Generic.List`1::_size
	int32_t ____size_2;
	// System.Int32 System.Collections.Generic.List`1::_version
	int32_t ____version_3;
	// System.Object System.Collections.Generic.List`1::_syncRoot
	RuntimeObject * ____syncRoot_4;

public:
	inline static int32_t get_offset_of__items_1() { return static_cast<int32_t>(offsetof(List_1_t3368419753, ____items_1)); }
	inline MB_TexArraySliceRendererMatPairU5BU5D_t1795268130* get__items_1() const { return ____items_1; }
	inline MB_TexArraySliceRendererMatPairU5BU5D_t1795268130** get_address_of__items_1() { return &____items_1; }
	inline void set__items_1(MB_TexArraySliceRendererMatPairU5BU5D_t1795268130* value)
	{
		____items_1 = value;
		Il2CppCodeGenWriteBarrier((&____items_1), value);
	}

	inline static int32_t get_offset_of__size_2() { return static_cast<int32_t>(offsetof(List_1_t3368419753, ____size_2)); }
	inline int32_t get__size_2() const { return ____size_2; }
	inline int32_t* get_address_of__size_2() { return &____size_2; }
	inline void set__size_2(int32_t value)
	{
		____size_2 = value;
	}

	inline static int32_t get_offset_of__version_3() { return static_cast<int32_t>(offsetof(List_1_t3368419753, ____version_3)); }
	inline int32_t get__version_3() const { return ____version_3; }
	inline int32_t* get_address_of__version_3() { return &____version_3; }
	inline void set__version_3(int32_t value)
	{
		____version_3 = value;
	}

	inline static int32_t get_offset_of__syncRoot_4() { return static_cast<int32_t>(offsetof(List_1_t3368419753, ____syncRoot_4)); }
	inline RuntimeObject * get__syncRoot_4() const { return ____syncRoot_4; }
	inline RuntimeObject ** get_address_of__syncRoot_4() { return &____syncRoot_4; }
	inline void set__syncRoot_4(RuntimeObject * value)
	{
		____syncRoot_4 = value;
		Il2CppCodeGenWriteBarrier((&____syncRoot_4), value);
	}
};

struct List_1_t3368419753_StaticFields
{
public:
	// T[] System.Collections.Generic.List`1::_emptyArray
	MB_TexArraySliceRendererMatPairU5BU5D_t1795268130* ____emptyArray_5;

public:
	inline static int32_t get_offset_of__emptyArray_5() { return static_cast<int32_t>(offsetof(List_1_t3368419753_StaticFields, ____emptyArray_5)); }
	inline MB_TexArraySliceRendererMatPairU5BU5D_t1795268130* get__emptyArray_5() const { return ____emptyArray_5; }
	inline MB_TexArraySliceRendererMatPairU5BU5D_t1795268130** get_address_of__emptyArray_5() { return &____emptyArray_5; }
	inline void set__emptyArray_5(MB_TexArraySliceRendererMatPairU5BU5D_t1795268130* value)
	{
		____emptyArray_5 = value;
		Il2CppCodeGenWriteBarrier((&____emptyArray_5), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // LIST_1_T3368419753_H
#ifndef LIST_1_T2585711361_H
#define LIST_1_T2585711361_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Collections.Generic.List`1<UnityEngine.GameObject>
struct  List_1_t2585711361  : public RuntimeObject
{
public:
	// T[] System.Collections.Generic.List`1::_items
	GameObjectU5BU5D_t3328599146* ____items_1;
	// System.Int32 System.Collections.Generic.List`1::_size
	int32_t ____size_2;
	// System.Int32 System.Collections.Generic.List`1::_version
	int32_t ____version_3;
	// System.Object System.Collections.Generic.List`1::_syncRoot
	RuntimeObject * ____syncRoot_4;

public:
	inline static int32_t get_offset_of__items_1() { return static_cast<int32_t>(offsetof(List_1_t2585711361, ____items_1)); }
	inline GameObjectU5BU5D_t3328599146* get__items_1() const { return ____items_1; }
	inline GameObjectU5BU5D_t3328599146** get_address_of__items_1() { return &____items_1; }
	inline void set__items_1(GameObjectU5BU5D_t3328599146* value)
	{
		____items_1 = value;
		Il2CppCodeGenWriteBarrier((&____items_1), value);
	}

	inline static int32_t get_offset_of__size_2() { return static_cast<int32_t>(offsetof(List_1_t2585711361, ____size_2)); }
	inline int32_t get__size_2() const { return ____size_2; }
	inline int32_t* get_address_of__size_2() { return &____size_2; }
	inline void set__size_2(int32_t value)
	{
		____size_2 = value;
	}

	inline static int32_t get_offset_of__version_3() { return static_cast<int32_t>(offsetof(List_1_t2585711361, ____version_3)); }
	inline int32_t get__version_3() const { return ____version_3; }
	inline int32_t* get_address_of__version_3() { return &____version_3; }
	inline void set__version_3(int32_t value)
	{
		____version_3 = value;
	}

	inline static int32_t get_offset_of__syncRoot_4() { return static_cast<int32_t>(offsetof(List_1_t2585711361, ____syncRoot_4)); }
	inline RuntimeObject * get__syncRoot_4() const { return ____syncRoot_4; }
	inline RuntimeObject ** get_address_of__syncRoot_4() { return &____syncRoot_4; }
	inline void set__syncRoot_4(RuntimeObject * value)
	{
		____syncRoot_4 = value;
		Il2CppCodeGenWriteBarrier((&____syncRoot_4), value);
	}
};

struct List_1_t2585711361_StaticFields
{
public:
	// T[] System.Collections.Generic.List`1::_emptyArray
	GameObjectU5BU5D_t3328599146* ____emptyArray_5;

public:
	inline static int32_t get_offset_of__emptyArray_5() { return static_cast<int32_t>(offsetof(List_1_t2585711361_StaticFields, ____emptyArray_5)); }
	inline GameObjectU5BU5D_t3328599146* get__emptyArray_5() const { return ____emptyArray_5; }
	inline GameObjectU5BU5D_t3328599146** get_address_of__emptyArray_5() { return &____emptyArray_5; }
	inline void set__emptyArray_5(GameObjectU5BU5D_t3328599146* value)
	{
		____emptyArray_5 = value;
		Il2CppCodeGenWriteBarrier((&____emptyArray_5), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // LIST_1_T2585711361_H
#ifndef LIST_1_T1812449865_H
#define LIST_1_T1812449865_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Collections.Generic.List`1<UnityEngine.Material>
struct  List_1_t1812449865  : public RuntimeObject
{
public:
	// T[] System.Collections.Generic.List`1::_items
	MaterialU5BU5D_t561872642* ____items_1;
	// System.Int32 System.Collections.Generic.List`1::_size
	int32_t ____size_2;
	// System.Int32 System.Collections.Generic.List`1::_version
	int32_t ____version_3;
	// System.Object System.Collections.Generic.List`1::_syncRoot
	RuntimeObject * ____syncRoot_4;

public:
	inline static int32_t get_offset_of__items_1() { return static_cast<int32_t>(offsetof(List_1_t1812449865, ____items_1)); }
	inline MaterialU5BU5D_t561872642* get__items_1() const { return ____items_1; }
	inline MaterialU5BU5D_t561872642** get_address_of__items_1() { return &____items_1; }
	inline void set__items_1(MaterialU5BU5D_t561872642* value)
	{
		____items_1 = value;
		Il2CppCodeGenWriteBarrier((&____items_1), value);
	}

	inline static int32_t get_offset_of__size_2() { return static_cast<int32_t>(offsetof(List_1_t1812449865, ____size_2)); }
	inline int32_t get__size_2() const { return ____size_2; }
	inline int32_t* get_address_of__size_2() { return &____size_2; }
	inline void set__size_2(int32_t value)
	{
		____size_2 = value;
	}

	inline static int32_t get_offset_of__version_3() { return static_cast<int32_t>(offsetof(List_1_t1812449865, ____version_3)); }
	inline int32_t get__version_3() const { return ____version_3; }
	inline int32_t* get_address_of__version_3() { return &____version_3; }
	inline void set__version_3(int32_t value)
	{
		____version_3 = value;
	}

	inline static int32_t get_offset_of__syncRoot_4() { return static_cast<int32_t>(offsetof(List_1_t1812449865, ____syncRoot_4)); }
	inline RuntimeObject * get__syncRoot_4() const { return ____syncRoot_4; }
	inline RuntimeObject ** get_address_of__syncRoot_4() { return &____syncRoot_4; }
	inline void set__syncRoot_4(RuntimeObject * value)
	{
		____syncRoot_4 = value;
		Il2CppCodeGenWriteBarrier((&____syncRoot_4), value);
	}
};

struct List_1_t1812449865_StaticFields
{
public:
	// T[] System.Collections.Generic.List`1::_emptyArray
	MaterialU5BU5D_t561872642* ____emptyArray_5;

public:
	inline static int32_t get_offset_of__emptyArray_5() { return static_cast<int32_t>(offsetof(List_1_t1812449865_StaticFields, ____emptyArray_5)); }
	inline MaterialU5BU5D_t561872642* get__emptyArray_5() const { return ____emptyArray_5; }
	inline MaterialU5BU5D_t561872642** get_address_of__emptyArray_5() { return &____emptyArray_5; }
	inline void set__emptyArray_5(MaterialU5BU5D_t561872642* value)
	{
		____emptyArray_5 = value;
		Il2CppCodeGenWriteBarrier((&____emptyArray_5), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // LIST_1_T1812449865_H
#ifndef STOPWATCH_T305734070_H
#define STOPWATCH_T305734070_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Diagnostics.Stopwatch
struct  Stopwatch_t305734070  : public RuntimeObject
{
public:
	// System.Int64 System.Diagnostics.Stopwatch::elapsed
	int64_t ___elapsed_2;
	// System.Int64 System.Diagnostics.Stopwatch::started
	int64_t ___started_3;
	// System.Boolean System.Diagnostics.Stopwatch::is_running
	bool ___is_running_4;

public:
	inline static int32_t get_offset_of_elapsed_2() { return static_cast<int32_t>(offsetof(Stopwatch_t305734070, ___elapsed_2)); }
	inline int64_t get_elapsed_2() const { return ___elapsed_2; }
	inline int64_t* get_address_of_elapsed_2() { return &___elapsed_2; }
	inline void set_elapsed_2(int64_t value)
	{
		___elapsed_2 = value;
	}

	inline static int32_t get_offset_of_started_3() { return static_cast<int32_t>(offsetof(Stopwatch_t305734070, ___started_3)); }
	inline int64_t get_started_3() const { return ___started_3; }
	inline int64_t* get_address_of_started_3() { return &___started_3; }
	inline void set_started_3(int64_t value)
	{
		___started_3 = value;
	}

	inline static int32_t get_offset_of_is_running_4() { return static_cast<int32_t>(offsetof(Stopwatch_t305734070, ___is_running_4)); }
	inline bool get_is_running_4() const { return ___is_running_4; }
	inline bool* get_address_of_is_running_4() { return &___is_running_4; }
	inline void set_is_running_4(bool value)
	{
		___is_running_4 = value;
	}
};

struct Stopwatch_t305734070_StaticFields
{
public:
	// System.Int64 System.Diagnostics.Stopwatch::Frequency
	int64_t ___Frequency_0;
	// System.Boolean System.Diagnostics.Stopwatch::IsHighResolution
	bool ___IsHighResolution_1;

public:
	inline static int32_t get_offset_of_Frequency_0() { return static_cast<int32_t>(offsetof(Stopwatch_t305734070_StaticFields, ___Frequency_0)); }
	inline int64_t get_Frequency_0() const { return ___Frequency_0; }
	inline int64_t* get_address_of_Frequency_0() { return &___Frequency_0; }
	inline void set_Frequency_0(int64_t value)
	{
		___Frequency_0 = value;
	}

	inline static int32_t get_offset_of_IsHighResolution_1() { return static_cast<int32_t>(offsetof(Stopwatch_t305734070_StaticFields, ___IsHighResolution_1)); }
	inline bool get_IsHighResolution_1() const { return ___IsHighResolution_1; }
	inline bool* get_address_of_IsHighResolution_1() { return &___IsHighResolution_1; }
	inline void set_IsHighResolution_1(bool value)
	{
		___IsHighResolution_1 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // STOPWATCH_T305734070_H
#ifndef EXCEPTION_T_H
#define EXCEPTION_T_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Exception
struct  Exception_t  : public RuntimeObject
{
public:
	// System.String System.Exception::_className
	String_t* ____className_1;
	// System.String System.Exception::_message
	String_t* ____message_2;
	// System.Collections.IDictionary System.Exception::_data
	RuntimeObject* ____data_3;
	// System.Exception System.Exception::_innerException
	Exception_t * ____innerException_4;
	// System.String System.Exception::_helpURL
	String_t* ____helpURL_5;
	// System.Object System.Exception::_stackTrace
	RuntimeObject * ____stackTrace_6;
	// System.String System.Exception::_stackTraceString
	String_t* ____stackTraceString_7;
	// System.String System.Exception::_remoteStackTraceString
	String_t* ____remoteStackTraceString_8;
	// System.Int32 System.Exception::_remoteStackIndex
	int32_t ____remoteStackIndex_9;
	// System.Object System.Exception::_dynamicMethods
	RuntimeObject * ____dynamicMethods_10;
	// System.Int32 System.Exception::_HResult
	int32_t ____HResult_11;
	// System.String System.Exception::_source
	String_t* ____source_12;
	// System.Runtime.Serialization.SafeSerializationManager System.Exception::_safeSerializationManager
	SafeSerializationManager_t2481557153 * ____safeSerializationManager_13;
	// System.Diagnostics.StackTrace[] System.Exception::captured_traces
	StackTraceU5BU5D_t1169129676* ___captured_traces_14;
	// System.IntPtr[] System.Exception::native_trace_ips
	IntPtrU5BU5D_t4013366056* ___native_trace_ips_15;

public:
	inline static int32_t get_offset_of__className_1() { return static_cast<int32_t>(offsetof(Exception_t, ____className_1)); }
	inline String_t* get__className_1() const { return ____className_1; }
	inline String_t** get_address_of__className_1() { return &____className_1; }
	inline void set__className_1(String_t* value)
	{
		____className_1 = value;
		Il2CppCodeGenWriteBarrier((&____className_1), value);
	}

	inline static int32_t get_offset_of__message_2() { return static_cast<int32_t>(offsetof(Exception_t, ____message_2)); }
	inline String_t* get__message_2() const { return ____message_2; }
	inline String_t** get_address_of__message_2() { return &____message_2; }
	inline void set__message_2(String_t* value)
	{
		____message_2 = value;
		Il2CppCodeGenWriteBarrier((&____message_2), value);
	}

	inline static int32_t get_offset_of__data_3() { return static_cast<int32_t>(offsetof(Exception_t, ____data_3)); }
	inline RuntimeObject* get__data_3() const { return ____data_3; }
	inline RuntimeObject** get_address_of__data_3() { return &____data_3; }
	inline void set__data_3(RuntimeObject* value)
	{
		____data_3 = value;
		Il2CppCodeGenWriteBarrier((&____data_3), value);
	}

	inline static int32_t get_offset_of__innerException_4() { return static_cast<int32_t>(offsetof(Exception_t, ____innerException_4)); }
	inline Exception_t * get__innerException_4() const { return ____innerException_4; }
	inline Exception_t ** get_address_of__innerException_4() { return &____innerException_4; }
	inline void set__innerException_4(Exception_t * value)
	{
		____innerException_4 = value;
		Il2CppCodeGenWriteBarrier((&____innerException_4), value);
	}

	inline static int32_t get_offset_of__helpURL_5() { return static_cast<int32_t>(offsetof(Exception_t, ____helpURL_5)); }
	inline String_t* get__helpURL_5() const { return ____helpURL_5; }
	inline String_t** get_address_of__helpURL_5() { return &____helpURL_5; }
	inline void set__helpURL_5(String_t* value)
	{
		____helpURL_5 = value;
		Il2CppCodeGenWriteBarrier((&____helpURL_5), value);
	}

	inline static int32_t get_offset_of__stackTrace_6() { return static_cast<int32_t>(offsetof(Exception_t, ____stackTrace_6)); }
	inline RuntimeObject * get__stackTrace_6() const { return ____stackTrace_6; }
	inline RuntimeObject ** get_address_of__stackTrace_6() { return &____stackTrace_6; }
	inline void set__stackTrace_6(RuntimeObject * value)
	{
		____stackTrace_6 = value;
		Il2CppCodeGenWriteBarrier((&____stackTrace_6), value);
	}

	inline static int32_t get_offset_of__stackTraceString_7() { return static_cast<int32_t>(offsetof(Exception_t, ____stackTraceString_7)); }
	inline String_t* get__stackTraceString_7() const { return ____stackTraceString_7; }
	inline String_t** get_address_of__stackTraceString_7() { return &____stackTraceString_7; }
	inline void set__stackTraceString_7(String_t* value)
	{
		____stackTraceString_7 = value;
		Il2CppCodeGenWriteBarrier((&____stackTraceString_7), value);
	}

	inline static int32_t get_offset_of__remoteStackTraceString_8() { return static_cast<int32_t>(offsetof(Exception_t, ____remoteStackTraceString_8)); }
	inline String_t* get__remoteStackTraceString_8() const { return ____remoteStackTraceString_8; }
	inline String_t** get_address_of__remoteStackTraceString_8() { return &____remoteStackTraceString_8; }
	inline void set__remoteStackTraceString_8(String_t* value)
	{
		____remoteStackTraceString_8 = value;
		Il2CppCodeGenWriteBarrier((&____remoteStackTraceString_8), value);
	}

	inline static int32_t get_offset_of__remoteStackIndex_9() { return static_cast<int32_t>(offsetof(Exception_t, ____remoteStackIndex_9)); }
	inline int32_t get__remoteStackIndex_9() const { return ____remoteStackIndex_9; }
	inline int32_t* get_address_of__remoteStackIndex_9() { return &____remoteStackIndex_9; }
	inline void set__remoteStackIndex_9(int32_t value)
	{
		____remoteStackIndex_9 = value;
	}

	inline static int32_t get_offset_of__dynamicMethods_10() { return static_cast<int32_t>(offsetof(Exception_t, ____dynamicMethods_10)); }
	inline RuntimeObject * get__dynamicMethods_10() const { return ____dynamicMethods_10; }
	inline RuntimeObject ** get_address_of__dynamicMethods_10() { return &____dynamicMethods_10; }
	inline void set__dynamicMethods_10(RuntimeObject * value)
	{
		____dynamicMethods_10 = value;
		Il2CppCodeGenWriteBarrier((&____dynamicMethods_10), value);
	}

	inline static int32_t get_offset_of__HResult_11() { return static_cast<int32_t>(offsetof(Exception_t, ____HResult_11)); }
	inline int32_t get__HResult_11() const { return ____HResult_11; }
	inline int32_t* get_address_of__HResult_11() { return &____HResult_11; }
	inline void set__HResult_11(int32_t value)
	{
		____HResult_11 = value;
	}

	inline static int32_t get_offset_of__source_12() { return static_cast<int32_t>(offsetof(Exception_t, ____source_12)); }
	inline String_t* get__source_12() const { return ____source_12; }
	inline String_t** get_address_of__source_12() { return &____source_12; }
	inline void set__source_12(String_t* value)
	{
		____source_12 = value;
		Il2CppCodeGenWriteBarrier((&____source_12), value);
	}

	inline static int32_t get_offset_of__safeSerializationManager_13() { return static_cast<int32_t>(offsetof(Exception_t, ____safeSerializationManager_13)); }
	inline SafeSerializationManager_t2481557153 * get__safeSerializationManager_13() const { return ____safeSerializationManager_13; }
	inline SafeSerializationManager_t2481557153 ** get_address_of__safeSerializationManager_13() { return &____safeSerializationManager_13; }
	inline void set__safeSerializationManager_13(SafeSerializationManager_t2481557153 * value)
	{
		____safeSerializationManager_13 = value;
		Il2CppCodeGenWriteBarrier((&____safeSerializationManager_13), value);
	}

	inline static int32_t get_offset_of_captured_traces_14() { return static_cast<int32_t>(offsetof(Exception_t, ___captured_traces_14)); }
	inline StackTraceU5BU5D_t1169129676* get_captured_traces_14() const { return ___captured_traces_14; }
	inline StackTraceU5BU5D_t1169129676** get_address_of_captured_traces_14() { return &___captured_traces_14; }
	inline void set_captured_traces_14(StackTraceU5BU5D_t1169129676* value)
	{
		___captured_traces_14 = value;
		Il2CppCodeGenWriteBarrier((&___captured_traces_14), value);
	}

	inline static int32_t get_offset_of_native_trace_ips_15() { return static_cast<int32_t>(offsetof(Exception_t, ___native_trace_ips_15)); }
	inline IntPtrU5BU5D_t4013366056* get_native_trace_ips_15() const { return ___native_trace_ips_15; }
	inline IntPtrU5BU5D_t4013366056** get_address_of_native_trace_ips_15() { return &___native_trace_ips_15; }
	inline void set_native_trace_ips_15(IntPtrU5BU5D_t4013366056* value)
	{
		___native_trace_ips_15 = value;
		Il2CppCodeGenWriteBarrier((&___native_trace_ips_15), value);
	}
};

struct Exception_t_StaticFields
{
public:
	// System.Object System.Exception::s_EDILock
	RuntimeObject * ___s_EDILock_0;

public:
	inline static int32_t get_offset_of_s_EDILock_0() { return static_cast<int32_t>(offsetof(Exception_t_StaticFields, ___s_EDILock_0)); }
	inline RuntimeObject * get_s_EDILock_0() const { return ___s_EDILock_0; }
	inline RuntimeObject ** get_address_of_s_EDILock_0() { return &___s_EDILock_0; }
	inline void set_s_EDILock_0(RuntimeObject * value)
	{
		___s_EDILock_0 = value;
		Il2CppCodeGenWriteBarrier((&___s_EDILock_0), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
// Native definition for P/Invoke marshalling of System.Exception
struct Exception_t_marshaled_pinvoke
{
	char* ____className_1;
	char* ____message_2;
	RuntimeObject* ____data_3;
	Exception_t_marshaled_pinvoke* ____innerException_4;
	char* ____helpURL_5;
	Il2CppIUnknown* ____stackTrace_6;
	char* ____stackTraceString_7;
	char* ____remoteStackTraceString_8;
	int32_t ____remoteStackIndex_9;
	Il2CppIUnknown* ____dynamicMethods_10;
	int32_t ____HResult_11;
	char* ____source_12;
	SafeSerializationManager_t2481557153 * ____safeSerializationManager_13;
	StackTraceU5BU5D_t1169129676* ___captured_traces_14;
	intptr_t* ___native_trace_ips_15;
};
// Native definition for COM marshalling of System.Exception
struct Exception_t_marshaled_com
{
	Il2CppChar* ____className_1;
	Il2CppChar* ____message_2;
	RuntimeObject* ____data_3;
	Exception_t_marshaled_com* ____innerException_4;
	Il2CppChar* ____helpURL_5;
	Il2CppIUnknown* ____stackTrace_6;
	Il2CppChar* ____stackTraceString_7;
	Il2CppChar* ____remoteStackTraceString_8;
	int32_t ____remoteStackIndex_9;
	Il2CppIUnknown* ____dynamicMethods_10;
	int32_t ____HResult_11;
	Il2CppChar* ____source_12;
	SafeSerializationManager_t2481557153 * ____safeSerializationManager_13;
	StackTraceU5BU5D_t1169129676* ___captured_traces_14;
	intptr_t* ___native_trace_ips_15;
};
#endif // EXCEPTION_T_H
#ifndef STRING_T_H
#define STRING_T_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.String
struct  String_t  : public RuntimeObject
{
public:
	// System.Int32 System.String::m_stringLength
	int32_t ___m_stringLength_0;
	// System.Char System.String::m_firstChar
	Il2CppChar ___m_firstChar_1;

public:
	inline static int32_t get_offset_of_m_stringLength_0() { return static_cast<int32_t>(offsetof(String_t, ___m_stringLength_0)); }
	inline int32_t get_m_stringLength_0() const { return ___m_stringLength_0; }
	inline int32_t* get_address_of_m_stringLength_0() { return &___m_stringLength_0; }
	inline void set_m_stringLength_0(int32_t value)
	{
		___m_stringLength_0 = value;
	}

	inline static int32_t get_offset_of_m_firstChar_1() { return static_cast<int32_t>(offsetof(String_t, ___m_firstChar_1)); }
	inline Il2CppChar get_m_firstChar_1() const { return ___m_firstChar_1; }
	inline Il2CppChar* get_address_of_m_firstChar_1() { return &___m_firstChar_1; }
	inline void set_m_firstChar_1(Il2CppChar value)
	{
		___m_firstChar_1 = value;
	}
};

struct String_t_StaticFields
{
public:
	// System.String System.String::Empty
	String_t* ___Empty_5;

public:
	inline static int32_t get_offset_of_Empty_5() { return static_cast<int32_t>(offsetof(String_t_StaticFields, ___Empty_5)); }
	inline String_t* get_Empty_5() const { return ___Empty_5; }
	inline String_t** get_address_of_Empty_5() { return &___Empty_5; }
	inline void set_Empty_5(String_t* value)
	{
		___Empty_5 = value;
		Il2CppCodeGenWriteBarrier((&___Empty_5), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // STRING_T_H
#ifndef VALUETYPE_T3640485471_H
#define VALUETYPE_T3640485471_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.ValueType
struct  ValueType_t3640485471  : public RuntimeObject
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
// Native definition for P/Invoke marshalling of System.ValueType
struct ValueType_t3640485471_marshaled_pinvoke
{
};
// Native definition for COM marshalling of System.ValueType
struct ValueType_t3640485471_marshaled_com
{
};
#endif // VALUETYPE_T3640485471_H
#ifndef DRECT_T3868393502_H
#define DRECT_T3868393502_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// DigitalOpus.MB.Core.DRect
struct  DRect_t3868393502 
{
public:
	// System.Double DigitalOpus.MB.Core.DRect::x
	double ___x_0;
	// System.Double DigitalOpus.MB.Core.DRect::y
	double ___y_1;
	// System.Double DigitalOpus.MB.Core.DRect::width
	double ___width_2;
	// System.Double DigitalOpus.MB.Core.DRect::height
	double ___height_3;

public:
	inline static int32_t get_offset_of_x_0() { return static_cast<int32_t>(offsetof(DRect_t3868393502, ___x_0)); }
	inline double get_x_0() const { return ___x_0; }
	inline double* get_address_of_x_0() { return &___x_0; }
	inline void set_x_0(double value)
	{
		___x_0 = value;
	}

	inline static int32_t get_offset_of_y_1() { return static_cast<int32_t>(offsetof(DRect_t3868393502, ___y_1)); }
	inline double get_y_1() const { return ___y_1; }
	inline double* get_address_of_y_1() { return &___y_1; }
	inline void set_y_1(double value)
	{
		___y_1 = value;
	}

	inline static int32_t get_offset_of_width_2() { return static_cast<int32_t>(offsetof(DRect_t3868393502, ___width_2)); }
	inline double get_width_2() const { return ___width_2; }
	inline double* get_address_of_width_2() { return &___width_2; }
	inline void set_width_2(double value)
	{
		___width_2 = value;
	}

	inline static int32_t get_offset_of_height_3() { return static_cast<int32_t>(offsetof(DRect_t3868393502, ___height_3)); }
	inline double get_height_3() const { return ___height_3; }
	inline double* get_address_of_height_3() { return &___height_3; }
	inline void set_height_3(double value)
	{
		___height_3 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // DRECT_T3868393502_H
#ifndef BOOLEAN_T97287965_H
#define BOOLEAN_T97287965_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Boolean
struct  Boolean_t97287965 
{
public:
	// System.Boolean System.Boolean::m_value
	bool ___m_value_0;

public:
	inline static int32_t get_offset_of_m_value_0() { return static_cast<int32_t>(offsetof(Boolean_t97287965, ___m_value_0)); }
	inline bool get_m_value_0() const { return ___m_value_0; }
	inline bool* get_address_of_m_value_0() { return &___m_value_0; }
	inline void set_m_value_0(bool value)
	{
		___m_value_0 = value;
	}
};

struct Boolean_t97287965_StaticFields
{
public:
	// System.String System.Boolean::TrueString
	String_t* ___TrueString_5;
	// System.String System.Boolean::FalseString
	String_t* ___FalseString_6;

public:
	inline static int32_t get_offset_of_TrueString_5() { return static_cast<int32_t>(offsetof(Boolean_t97287965_StaticFields, ___TrueString_5)); }
	inline String_t* get_TrueString_5() const { return ___TrueString_5; }
	inline String_t** get_address_of_TrueString_5() { return &___TrueString_5; }
	inline void set_TrueString_5(String_t* value)
	{
		___TrueString_5 = value;
		Il2CppCodeGenWriteBarrier((&___TrueString_5), value);
	}

	inline static int32_t get_offset_of_FalseString_6() { return static_cast<int32_t>(offsetof(Boolean_t97287965_StaticFields, ___FalseString_6)); }
	inline String_t* get_FalseString_6() const { return ___FalseString_6; }
	inline String_t** get_address_of_FalseString_6() { return &___FalseString_6; }
	inline void set_FalseString_6(String_t* value)
	{
		___FalseString_6 = value;
		Il2CppCodeGenWriteBarrier((&___FalseString_6), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // BOOLEAN_T97287965_H
#ifndef BYTE_T1134296376_H
#define BYTE_T1134296376_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Byte
struct  Byte_t1134296376 
{
public:
	// System.Byte System.Byte::m_value
	uint8_t ___m_value_0;

public:
	inline static int32_t get_offset_of_m_value_0() { return static_cast<int32_t>(offsetof(Byte_t1134296376, ___m_value_0)); }
	inline uint8_t get_m_value_0() const { return ___m_value_0; }
	inline uint8_t* get_address_of_m_value_0() { return &___m_value_0; }
	inline void set_m_value_0(uint8_t value)
	{
		___m_value_0 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // BYTE_T1134296376_H
#ifndef ENUM_T4135868527_H
#define ENUM_T4135868527_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Enum
struct  Enum_t4135868527  : public ValueType_t3640485471
{
public:

public:
};

struct Enum_t4135868527_StaticFields
{
public:
	// System.Char[] System.Enum::enumSeperatorCharArray
	CharU5BU5D_t3528271667* ___enumSeperatorCharArray_0;

public:
	inline static int32_t get_offset_of_enumSeperatorCharArray_0() { return static_cast<int32_t>(offsetof(Enum_t4135868527_StaticFields, ___enumSeperatorCharArray_0)); }
	inline CharU5BU5D_t3528271667* get_enumSeperatorCharArray_0() const { return ___enumSeperatorCharArray_0; }
	inline CharU5BU5D_t3528271667** get_address_of_enumSeperatorCharArray_0() { return &___enumSeperatorCharArray_0; }
	inline void set_enumSeperatorCharArray_0(CharU5BU5D_t3528271667* value)
	{
		___enumSeperatorCharArray_0 = value;
		Il2CppCodeGenWriteBarrier((&___enumSeperatorCharArray_0), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
// Native definition for P/Invoke marshalling of System.Enum
struct Enum_t4135868527_marshaled_pinvoke
{
};
// Native definition for COM marshalling of System.Enum
struct Enum_t4135868527_marshaled_com
{
};
#endif // ENUM_T4135868527_H
#ifndef INT32_T2950945753_H
#define INT32_T2950945753_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Int32
struct  Int32_t2950945753 
{
public:
	// System.Int32 System.Int32::m_value
	int32_t ___m_value_0;

public:
	inline static int32_t get_offset_of_m_value_0() { return static_cast<int32_t>(offsetof(Int32_t2950945753, ___m_value_0)); }
	inline int32_t get_m_value_0() const { return ___m_value_0; }
	inline int32_t* get_address_of_m_value_0() { return &___m_value_0; }
	inline void set_m_value_0(int32_t value)
	{
		___m_value_0 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // INT32_T2950945753_H
#ifndef INT64_T3736567304_H
#define INT64_T3736567304_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Int64
struct  Int64_t3736567304 
{
public:
	// System.Int64 System.Int64::m_value
	int64_t ___m_value_0;

public:
	inline static int32_t get_offset_of_m_value_0() { return static_cast<int32_t>(offsetof(Int64_t3736567304, ___m_value_0)); }
	inline int64_t get_m_value_0() const { return ___m_value_0; }
	inline int64_t* get_address_of_m_value_0() { return &___m_value_0; }
	inline void set_m_value_0(int64_t value)
	{
		___m_value_0 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // INT64_T3736567304_H
#ifndef INTPTR_T_H
#define INTPTR_T_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.IntPtr
struct  IntPtr_t 
{
public:
	// System.Void* System.IntPtr::m_value
	void* ___m_value_0;

public:
	inline static int32_t get_offset_of_m_value_0() { return static_cast<int32_t>(offsetof(IntPtr_t, ___m_value_0)); }
	inline void* get_m_value_0() const { return ___m_value_0; }
	inline void** get_address_of_m_value_0() { return &___m_value_0; }
	inline void set_m_value_0(void* value)
	{
		___m_value_0 = value;
	}
};

struct IntPtr_t_StaticFields
{
public:
	// System.IntPtr System.IntPtr::Zero
	intptr_t ___Zero_1;

public:
	inline static int32_t get_offset_of_Zero_1() { return static_cast<int32_t>(offsetof(IntPtr_t_StaticFields, ___Zero_1)); }
	inline intptr_t get_Zero_1() const { return ___Zero_1; }
	inline intptr_t* get_address_of_Zero_1() { return &___Zero_1; }
	inline void set_Zero_1(intptr_t value)
	{
		___Zero_1 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // INTPTR_T_H
#ifndef SINGLE_T1397266774_H
#define SINGLE_T1397266774_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Single
struct  Single_t1397266774 
{
public:
	// System.Single System.Single::m_value
	float ___m_value_0;

public:
	inline static int32_t get_offset_of_m_value_0() { return static_cast<int32_t>(offsetof(Single_t1397266774, ___m_value_0)); }
	inline float get_m_value_0() const { return ___m_value_0; }
	inline float* get_address_of_m_value_0() { return &___m_value_0; }
	inline void set_m_value_0(float value)
	{
		___m_value_0 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // SINGLE_T1397266774_H
#ifndef SYSTEMEXCEPTION_T176217640_H
#define SYSTEMEXCEPTION_T176217640_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.SystemException
struct  SystemException_t176217640  : public Exception_t
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // SYSTEMEXCEPTION_T176217640_H
#ifndef UINT32_T2560061978_H
#define UINT32_T2560061978_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.UInt32
struct  UInt32_t2560061978 
{
public:
	// System.UInt32 System.UInt32::m_value
	uint32_t ___m_value_0;

public:
	inline static int32_t get_offset_of_m_value_0() { return static_cast<int32_t>(offsetof(UInt32_t2560061978, ___m_value_0)); }
	inline uint32_t get_m_value_0() const { return ___m_value_0; }
	inline uint32_t* get_address_of_m_value_0() { return &___m_value_0; }
	inline void set_m_value_0(uint32_t value)
	{
		___m_value_0 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // UINT32_T2560061978_H
#ifndef VOID_T1185182177_H
#define VOID_T1185182177_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Void
struct  Void_t1185182177 
{
public:
	union
	{
		struct
		{
		};
		uint8_t Void_t1185182177__padding[1];
	};

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // VOID_T1185182177_H
#ifndef COLOR_T2555686324_H
#define COLOR_T2555686324_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.Color
struct  Color_t2555686324 
{
public:
	// System.Single UnityEngine.Color::r
	float ___r_0;
	// System.Single UnityEngine.Color::g
	float ___g_1;
	// System.Single UnityEngine.Color::b
	float ___b_2;
	// System.Single UnityEngine.Color::a
	float ___a_3;

public:
	inline static int32_t get_offset_of_r_0() { return static_cast<int32_t>(offsetof(Color_t2555686324, ___r_0)); }
	inline float get_r_0() const { return ___r_0; }
	inline float* get_address_of_r_0() { return &___r_0; }
	inline void set_r_0(float value)
	{
		___r_0 = value;
	}

	inline static int32_t get_offset_of_g_1() { return static_cast<int32_t>(offsetof(Color_t2555686324, ___g_1)); }
	inline float get_g_1() const { return ___g_1; }
	inline float* get_address_of_g_1() { return &___g_1; }
	inline void set_g_1(float value)
	{
		___g_1 = value;
	}

	inline static int32_t get_offset_of_b_2() { return static_cast<int32_t>(offsetof(Color_t2555686324, ___b_2)); }
	inline float get_b_2() const { return ___b_2; }
	inline float* get_address_of_b_2() { return &___b_2; }
	inline void set_b_2(float value)
	{
		___b_2 = value;
	}

	inline static int32_t get_offset_of_a_3() { return static_cast<int32_t>(offsetof(Color_t2555686324, ___a_3)); }
	inline float get_a_3() const { return ___a_3; }
	inline float* get_address_of_a_3() { return &___a_3; }
	inline void set_a_3(float value)
	{
		___a_3 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // COLOR_T2555686324_H
#ifndef COLOR32_T2600501292_H
#define COLOR32_T2600501292_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.Color32
struct  Color32_t2600501292 
{
public:
	union
	{
		#pragma pack(push, tp, 1)
		struct
		{
			// System.Int32 UnityEngine.Color32::rgba
			int32_t ___rgba_0;
		};
		#pragma pack(pop, tp)
		struct
		{
			int32_t ___rgba_0_forAlignmentOnly;
		};
		#pragma pack(push, tp, 1)
		struct
		{
			// System.Byte UnityEngine.Color32::r
			uint8_t ___r_1;
		};
		#pragma pack(pop, tp)
		struct
		{
			uint8_t ___r_1_forAlignmentOnly;
		};
		#pragma pack(push, tp, 1)
		struct
		{
			char ___g_2_OffsetPadding[1];
			// System.Byte UnityEngine.Color32::g
			uint8_t ___g_2;
		};
		#pragma pack(pop, tp)
		struct
		{
			char ___g_2_OffsetPadding_forAlignmentOnly[1];
			uint8_t ___g_2_forAlignmentOnly;
		};
		#pragma pack(push, tp, 1)
		struct
		{
			char ___b_3_OffsetPadding[2];
			// System.Byte UnityEngine.Color32::b
			uint8_t ___b_3;
		};
		#pragma pack(pop, tp)
		struct
		{
			char ___b_3_OffsetPadding_forAlignmentOnly[2];
			uint8_t ___b_3_forAlignmentOnly;
		};
		#pragma pack(push, tp, 1)
		struct
		{
			char ___a_4_OffsetPadding[3];
			// System.Byte UnityEngine.Color32::a
			uint8_t ___a_4;
		};
		#pragma pack(pop, tp)
		struct
		{
			char ___a_4_OffsetPadding_forAlignmentOnly[3];
			uint8_t ___a_4_forAlignmentOnly;
		};
	};

public:
	inline static int32_t get_offset_of_rgba_0() { return static_cast<int32_t>(offsetof(Color32_t2600501292, ___rgba_0)); }
	inline int32_t get_rgba_0() const { return ___rgba_0; }
	inline int32_t* get_address_of_rgba_0() { return &___rgba_0; }
	inline void set_rgba_0(int32_t value)
	{
		___rgba_0 = value;
	}

	inline static int32_t get_offset_of_r_1() { return static_cast<int32_t>(offsetof(Color32_t2600501292, ___r_1)); }
	inline uint8_t get_r_1() const { return ___r_1; }
	inline uint8_t* get_address_of_r_1() { return &___r_1; }
	inline void set_r_1(uint8_t value)
	{
		___r_1 = value;
	}

	inline static int32_t get_offset_of_g_2() { return static_cast<int32_t>(offsetof(Color32_t2600501292, ___g_2)); }
	inline uint8_t get_g_2() const { return ___g_2; }
	inline uint8_t* get_address_of_g_2() { return &___g_2; }
	inline void set_g_2(uint8_t value)
	{
		___g_2 = value;
	}

	inline static int32_t get_offset_of_b_3() { return static_cast<int32_t>(offsetof(Color32_t2600501292, ___b_3)); }
	inline uint8_t get_b_3() const { return ___b_3; }
	inline uint8_t* get_address_of_b_3() { return &___b_3; }
	inline void set_b_3(uint8_t value)
	{
		___b_3 = value;
	}

	inline static int32_t get_offset_of_a_4() { return static_cast<int32_t>(offsetof(Color32_t2600501292, ___a_4)); }
	inline uint8_t get_a_4() const { return ___a_4; }
	inline uint8_t* get_address_of_a_4() { return &___a_4; }
	inline void set_a_4(uint8_t value)
	{
		___a_4 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // COLOR32_T2600501292_H
#ifndef QUATERNION_T2301928331_H
#define QUATERNION_T2301928331_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.Quaternion
struct  Quaternion_t2301928331 
{
public:
	// System.Single UnityEngine.Quaternion::x
	float ___x_0;
	// System.Single UnityEngine.Quaternion::y
	float ___y_1;
	// System.Single UnityEngine.Quaternion::z
	float ___z_2;
	// System.Single UnityEngine.Quaternion::w
	float ___w_3;

public:
	inline static int32_t get_offset_of_x_0() { return static_cast<int32_t>(offsetof(Quaternion_t2301928331, ___x_0)); }
	inline float get_x_0() const { return ___x_0; }
	inline float* get_address_of_x_0() { return &___x_0; }
	inline void set_x_0(float value)
	{
		___x_0 = value;
	}

	inline static int32_t get_offset_of_y_1() { return static_cast<int32_t>(offsetof(Quaternion_t2301928331, ___y_1)); }
	inline float get_y_1() const { return ___y_1; }
	inline float* get_address_of_y_1() { return &___y_1; }
	inline void set_y_1(float value)
	{
		___y_1 = value;
	}

	inline static int32_t get_offset_of_z_2() { return static_cast<int32_t>(offsetof(Quaternion_t2301928331, ___z_2)); }
	inline float get_z_2() const { return ___z_2; }
	inline float* get_address_of_z_2() { return &___z_2; }
	inline void set_z_2(float value)
	{
		___z_2 = value;
	}

	inline static int32_t get_offset_of_w_3() { return static_cast<int32_t>(offsetof(Quaternion_t2301928331, ___w_3)); }
	inline float get_w_3() const { return ___w_3; }
	inline float* get_address_of_w_3() { return &___w_3; }
	inline void set_w_3(float value)
	{
		___w_3 = value;
	}
};

struct Quaternion_t2301928331_StaticFields
{
public:
	// UnityEngine.Quaternion UnityEngine.Quaternion::identityQuaternion
	Quaternion_t2301928331  ___identityQuaternion_4;

public:
	inline static int32_t get_offset_of_identityQuaternion_4() { return static_cast<int32_t>(offsetof(Quaternion_t2301928331_StaticFields, ___identityQuaternion_4)); }
	inline Quaternion_t2301928331  get_identityQuaternion_4() const { return ___identityQuaternion_4; }
	inline Quaternion_t2301928331 * get_address_of_identityQuaternion_4() { return &___identityQuaternion_4; }
	inline void set_identityQuaternion_4(Quaternion_t2301928331  value)
	{
		___identityQuaternion_4 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // QUATERNION_T2301928331_H
#ifndef RECT_T2360479859_H
#define RECT_T2360479859_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.Rect
struct  Rect_t2360479859 
{
public:
	// System.Single UnityEngine.Rect::m_XMin
	float ___m_XMin_0;
	// System.Single UnityEngine.Rect::m_YMin
	float ___m_YMin_1;
	// System.Single UnityEngine.Rect::m_Width
	float ___m_Width_2;
	// System.Single UnityEngine.Rect::m_Height
	float ___m_Height_3;

public:
	inline static int32_t get_offset_of_m_XMin_0() { return static_cast<int32_t>(offsetof(Rect_t2360479859, ___m_XMin_0)); }
	inline float get_m_XMin_0() const { return ___m_XMin_0; }
	inline float* get_address_of_m_XMin_0() { return &___m_XMin_0; }
	inline void set_m_XMin_0(float value)
	{
		___m_XMin_0 = value;
	}

	inline static int32_t get_offset_of_m_YMin_1() { return static_cast<int32_t>(offsetof(Rect_t2360479859, ___m_YMin_1)); }
	inline float get_m_YMin_1() const { return ___m_YMin_1; }
	inline float* get_address_of_m_YMin_1() { return &___m_YMin_1; }
	inline void set_m_YMin_1(float value)
	{
		___m_YMin_1 = value;
	}

	inline static int32_t get_offset_of_m_Width_2() { return static_cast<int32_t>(offsetof(Rect_t2360479859, ___m_Width_2)); }
	inline float get_m_Width_2() const { return ___m_Width_2; }
	inline float* get_address_of_m_Width_2() { return &___m_Width_2; }
	inline void set_m_Width_2(float value)
	{
		___m_Width_2 = value;
	}

	inline static int32_t get_offset_of_m_Height_3() { return static_cast<int32_t>(offsetof(Rect_t2360479859, ___m_Height_3)); }
	inline float get_m_Height_3() const { return ___m_Height_3; }
	inline float* get_address_of_m_Height_3() { return &___m_Height_3; }
	inline void set_m_Height_3(float value)
	{
		___m_Height_3 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // RECT_T2360479859_H
#ifndef VECTOR2_T2156229523_H
#define VECTOR2_T2156229523_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.Vector2
struct  Vector2_t2156229523 
{
public:
	// System.Single UnityEngine.Vector2::x
	float ___x_0;
	// System.Single UnityEngine.Vector2::y
	float ___y_1;

public:
	inline static int32_t get_offset_of_x_0() { return static_cast<int32_t>(offsetof(Vector2_t2156229523, ___x_0)); }
	inline float get_x_0() const { return ___x_0; }
	inline float* get_address_of_x_0() { return &___x_0; }
	inline void set_x_0(float value)
	{
		___x_0 = value;
	}

	inline static int32_t get_offset_of_y_1() { return static_cast<int32_t>(offsetof(Vector2_t2156229523, ___y_1)); }
	inline float get_y_1() const { return ___y_1; }
	inline float* get_address_of_y_1() { return &___y_1; }
	inline void set_y_1(float value)
	{
		___y_1 = value;
	}
};

struct Vector2_t2156229523_StaticFields
{
public:
	// UnityEngine.Vector2 UnityEngine.Vector2::zeroVector
	Vector2_t2156229523  ___zeroVector_2;
	// UnityEngine.Vector2 UnityEngine.Vector2::oneVector
	Vector2_t2156229523  ___oneVector_3;
	// UnityEngine.Vector2 UnityEngine.Vector2::upVector
	Vector2_t2156229523  ___upVector_4;
	// UnityEngine.Vector2 UnityEngine.Vector2::downVector
	Vector2_t2156229523  ___downVector_5;
	// UnityEngine.Vector2 UnityEngine.Vector2::leftVector
	Vector2_t2156229523  ___leftVector_6;
	// UnityEngine.Vector2 UnityEngine.Vector2::rightVector
	Vector2_t2156229523  ___rightVector_7;
	// UnityEngine.Vector2 UnityEngine.Vector2::positiveInfinityVector
	Vector2_t2156229523  ___positiveInfinityVector_8;
	// UnityEngine.Vector2 UnityEngine.Vector2::negativeInfinityVector
	Vector2_t2156229523  ___negativeInfinityVector_9;

public:
	inline static int32_t get_offset_of_zeroVector_2() { return static_cast<int32_t>(offsetof(Vector2_t2156229523_StaticFields, ___zeroVector_2)); }
	inline Vector2_t2156229523  get_zeroVector_2() const { return ___zeroVector_2; }
	inline Vector2_t2156229523 * get_address_of_zeroVector_2() { return &___zeroVector_2; }
	inline void set_zeroVector_2(Vector2_t2156229523  value)
	{
		___zeroVector_2 = value;
	}

	inline static int32_t get_offset_of_oneVector_3() { return static_cast<int32_t>(offsetof(Vector2_t2156229523_StaticFields, ___oneVector_3)); }
	inline Vector2_t2156229523  get_oneVector_3() const { return ___oneVector_3; }
	inline Vector2_t2156229523 * get_address_of_oneVector_3() { return &___oneVector_3; }
	inline void set_oneVector_3(Vector2_t2156229523  value)
	{
		___oneVector_3 = value;
	}

	inline static int32_t get_offset_of_upVector_4() { return static_cast<int32_t>(offsetof(Vector2_t2156229523_StaticFields, ___upVector_4)); }
	inline Vector2_t2156229523  get_upVector_4() const { return ___upVector_4; }
	inline Vector2_t2156229523 * get_address_of_upVector_4() { return &___upVector_4; }
	inline void set_upVector_4(Vector2_t2156229523  value)
	{
		___upVector_4 = value;
	}

	inline static int32_t get_offset_of_downVector_5() { return static_cast<int32_t>(offsetof(Vector2_t2156229523_StaticFields, ___downVector_5)); }
	inline Vector2_t2156229523  get_downVector_5() const { return ___downVector_5; }
	inline Vector2_t2156229523 * get_address_of_downVector_5() { return &___downVector_5; }
	inline void set_downVector_5(Vector2_t2156229523  value)
	{
		___downVector_5 = value;
	}

	inline static int32_t get_offset_of_leftVector_6() { return static_cast<int32_t>(offsetof(Vector2_t2156229523_StaticFields, ___leftVector_6)); }
	inline Vector2_t2156229523  get_leftVector_6() const { return ___leftVector_6; }
	inline Vector2_t2156229523 * get_address_of_leftVector_6() { return &___leftVector_6; }
	inline void set_leftVector_6(Vector2_t2156229523  value)
	{
		___leftVector_6 = value;
	}

	inline static int32_t get_offset_of_rightVector_7() { return static_cast<int32_t>(offsetof(Vector2_t2156229523_StaticFields, ___rightVector_7)); }
	inline Vector2_t2156229523  get_rightVector_7() const { return ___rightVector_7; }
	inline Vector2_t2156229523 * get_address_of_rightVector_7() { return &___rightVector_7; }
	inline void set_rightVector_7(Vector2_t2156229523  value)
	{
		___rightVector_7 = value;
	}

	inline static int32_t get_offset_of_positiveInfinityVector_8() { return static_cast<int32_t>(offsetof(Vector2_t2156229523_StaticFields, ___positiveInfinityVector_8)); }
	inline Vector2_t2156229523  get_positiveInfinityVector_8() const { return ___positiveInfinityVector_8; }
	inline Vector2_t2156229523 * get_address_of_positiveInfinityVector_8() { return &___positiveInfinityVector_8; }
	inline void set_positiveInfinityVector_8(Vector2_t2156229523  value)
	{
		___positiveInfinityVector_8 = value;
	}

	inline static int32_t get_offset_of_negativeInfinityVector_9() { return static_cast<int32_t>(offsetof(Vector2_t2156229523_StaticFields, ___negativeInfinityVector_9)); }
	inline Vector2_t2156229523  get_negativeInfinityVector_9() const { return ___negativeInfinityVector_9; }
	inline Vector2_t2156229523 * get_address_of_negativeInfinityVector_9() { return &___negativeInfinityVector_9; }
	inline void set_negativeInfinityVector_9(Vector2_t2156229523  value)
	{
		___negativeInfinityVector_9 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // VECTOR2_T2156229523_H
#ifndef VECTOR3_T3722313464_H
#define VECTOR3_T3722313464_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.Vector3
struct  Vector3_t3722313464 
{
public:
	// System.Single UnityEngine.Vector3::x
	float ___x_2;
	// System.Single UnityEngine.Vector3::y
	float ___y_3;
	// System.Single UnityEngine.Vector3::z
	float ___z_4;

public:
	inline static int32_t get_offset_of_x_2() { return static_cast<int32_t>(offsetof(Vector3_t3722313464, ___x_2)); }
	inline float get_x_2() const { return ___x_2; }
	inline float* get_address_of_x_2() { return &___x_2; }
	inline void set_x_2(float value)
	{
		___x_2 = value;
	}

	inline static int32_t get_offset_of_y_3() { return static_cast<int32_t>(offsetof(Vector3_t3722313464, ___y_3)); }
	inline float get_y_3() const { return ___y_3; }
	inline float* get_address_of_y_3() { return &___y_3; }
	inline void set_y_3(float value)
	{
		___y_3 = value;
	}

	inline static int32_t get_offset_of_z_4() { return static_cast<int32_t>(offsetof(Vector3_t3722313464, ___z_4)); }
	inline float get_z_4() const { return ___z_4; }
	inline float* get_address_of_z_4() { return &___z_4; }
	inline void set_z_4(float value)
	{
		___z_4 = value;
	}
};

struct Vector3_t3722313464_StaticFields
{
public:
	// UnityEngine.Vector3 UnityEngine.Vector3::zeroVector
	Vector3_t3722313464  ___zeroVector_5;
	// UnityEngine.Vector3 UnityEngine.Vector3::oneVector
	Vector3_t3722313464  ___oneVector_6;
	// UnityEngine.Vector3 UnityEngine.Vector3::upVector
	Vector3_t3722313464  ___upVector_7;
	// UnityEngine.Vector3 UnityEngine.Vector3::downVector
	Vector3_t3722313464  ___downVector_8;
	// UnityEngine.Vector3 UnityEngine.Vector3::leftVector
	Vector3_t3722313464  ___leftVector_9;
	// UnityEngine.Vector3 UnityEngine.Vector3::rightVector
	Vector3_t3722313464  ___rightVector_10;
	// UnityEngine.Vector3 UnityEngine.Vector3::forwardVector
	Vector3_t3722313464  ___forwardVector_11;
	// UnityEngine.Vector3 UnityEngine.Vector3::backVector
	Vector3_t3722313464  ___backVector_12;
	// UnityEngine.Vector3 UnityEngine.Vector3::positiveInfinityVector
	Vector3_t3722313464  ___positiveInfinityVector_13;
	// UnityEngine.Vector3 UnityEngine.Vector3::negativeInfinityVector
	Vector3_t3722313464  ___negativeInfinityVector_14;

public:
	inline static int32_t get_offset_of_zeroVector_5() { return static_cast<int32_t>(offsetof(Vector3_t3722313464_StaticFields, ___zeroVector_5)); }
	inline Vector3_t3722313464  get_zeroVector_5() const { return ___zeroVector_5; }
	inline Vector3_t3722313464 * get_address_of_zeroVector_5() { return &___zeroVector_5; }
	inline void set_zeroVector_5(Vector3_t3722313464  value)
	{
		___zeroVector_5 = value;
	}

	inline static int32_t get_offset_of_oneVector_6() { return static_cast<int32_t>(offsetof(Vector3_t3722313464_StaticFields, ___oneVector_6)); }
	inline Vector3_t3722313464  get_oneVector_6() const { return ___oneVector_6; }
	inline Vector3_t3722313464 * get_address_of_oneVector_6() { return &___oneVector_6; }
	inline void set_oneVector_6(Vector3_t3722313464  value)
	{
		___oneVector_6 = value;
	}

	inline static int32_t get_offset_of_upVector_7() { return static_cast<int32_t>(offsetof(Vector3_t3722313464_StaticFields, ___upVector_7)); }
	inline Vector3_t3722313464  get_upVector_7() const { return ___upVector_7; }
	inline Vector3_t3722313464 * get_address_of_upVector_7() { return &___upVector_7; }
	inline void set_upVector_7(Vector3_t3722313464  value)
	{
		___upVector_7 = value;
	}

	inline static int32_t get_offset_of_downVector_8() { return static_cast<int32_t>(offsetof(Vector3_t3722313464_StaticFields, ___downVector_8)); }
	inline Vector3_t3722313464  get_downVector_8() const { return ___downVector_8; }
	inline Vector3_t3722313464 * get_address_of_downVector_8() { return &___downVector_8; }
	inline void set_downVector_8(Vector3_t3722313464  value)
	{
		___downVector_8 = value;
	}

	inline static int32_t get_offset_of_leftVector_9() { return static_cast<int32_t>(offsetof(Vector3_t3722313464_StaticFields, ___leftVector_9)); }
	inline Vector3_t3722313464  get_leftVector_9() const { return ___leftVector_9; }
	inline Vector3_t3722313464 * get_address_of_leftVector_9() { return &___leftVector_9; }
	inline void set_leftVector_9(Vector3_t3722313464  value)
	{
		___leftVector_9 = value;
	}

	inline static int32_t get_offset_of_rightVector_10() { return static_cast<int32_t>(offsetof(Vector3_t3722313464_StaticFields, ___rightVector_10)); }
	inline Vector3_t3722313464  get_rightVector_10() const { return ___rightVector_10; }
	inline Vector3_t3722313464 * get_address_of_rightVector_10() { return &___rightVector_10; }
	inline void set_rightVector_10(Vector3_t3722313464  value)
	{
		___rightVector_10 = value;
	}

	inline static int32_t get_offset_of_forwardVector_11() { return static_cast<int32_t>(offsetof(Vector3_t3722313464_StaticFields, ___forwardVector_11)); }
	inline Vector3_t3722313464  get_forwardVector_11() const { return ___forwardVector_11; }
	inline Vector3_t3722313464 * get_address_of_forwardVector_11() { return &___forwardVector_11; }
	inline void set_forwardVector_11(Vector3_t3722313464  value)
	{
		___forwardVector_11 = value;
	}

	inline static int32_t get_offset_of_backVector_12() { return static_cast<int32_t>(offsetof(Vector3_t3722313464_StaticFields, ___backVector_12)); }
	inline Vector3_t3722313464  get_backVector_12() const { return ___backVector_12; }
	inline Vector3_t3722313464 * get_address_of_backVector_12() { return &___backVector_12; }
	inline void set_backVector_12(Vector3_t3722313464  value)
	{
		___backVector_12 = value;
	}

	inline static int32_t get_offset_of_positiveInfinityVector_13() { return static_cast<int32_t>(offsetof(Vector3_t3722313464_StaticFields, ___positiveInfinityVector_13)); }
	inline Vector3_t3722313464  get_positiveInfinityVector_13() const { return ___positiveInfinityVector_13; }
	inline Vector3_t3722313464 * get_address_of_positiveInfinityVector_13() { return &___positiveInfinityVector_13; }
	inline void set_positiveInfinityVector_13(Vector3_t3722313464  value)
	{
		___positiveInfinityVector_13 = value;
	}

	inline static int32_t get_offset_of_negativeInfinityVector_14() { return static_cast<int32_t>(offsetof(Vector3_t3722313464_StaticFields, ___negativeInfinityVector_14)); }
	inline Vector3_t3722313464  get_negativeInfinityVector_14() const { return ___negativeInfinityVector_14; }
	inline Vector3_t3722313464 * get_address_of_negativeInfinityVector_14() { return &___negativeInfinityVector_14; }
	inline void set_negativeInfinityVector_14(Vector3_t3722313464  value)
	{
		___negativeInfinityVector_14 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // VECTOR3_T3722313464_H
#ifndef MB2_LOGLEVEL_T855429485_H
#define MB2_LOGLEVEL_T855429485_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// DigitalOpus.MB.Core.MB2_LogLevel
struct  MB2_LogLevel_t855429485 
{
public:
	// System.Int32 DigitalOpus.MB.Core.MB2_LogLevel::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(MB2_LogLevel_t855429485, ___value___2)); }
	inline int32_t get_value___2() const { return ___value___2; }
	inline int32_t* get_address_of_value___2() { return &___value___2; }
	inline void set_value___2(int32_t value)
	{
		___value___2 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // MB2_LOGLEVEL_T855429485_H
#ifndef MB2_PACKINGALGORITHMENUM_T424028636_H
#define MB2_PACKINGALGORITHMENUM_T424028636_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// DigitalOpus.MB.Core.MB2_PackingAlgorithmEnum
struct  MB2_PackingAlgorithmEnum_t424028636 
{
public:
	// System.Int32 DigitalOpus.MB.Core.MB2_PackingAlgorithmEnum::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(MB2_PackingAlgorithmEnum_t424028636, ___value___2)); }
	inline int32_t get_value___2() const { return ___value___2; }
	inline int32_t* get_address_of_value___2() { return &___value___2; }
	inline void set_value___2(int32_t value)
	{
		___value___2 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // MB2_PACKINGALGORITHMENUM_T424028636_H
#ifndef MB2_VALIDATIONLEVEL_T556800496_H
#define MB2_VALIDATIONLEVEL_T556800496_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// DigitalOpus.MB.Core.MB2_ValidationLevel
struct  MB2_ValidationLevel_t556800496 
{
public:
	// System.Int32 DigitalOpus.MB.Core.MB2_ValidationLevel::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(MB2_ValidationLevel_t556800496, ___value___2)); }
	inline int32_t get_value___2() const { return ___value___2; }
	inline int32_t* get_address_of_value___2() { return &___value___2; }
	inline void set_value___2(int32_t value)
	{
		___value___2 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // MB2_VALIDATIONLEVEL_T556800496_H
#ifndef MBVERSIONCONCRETE_T3658102071_H
#define MBVERSIONCONCRETE_T3658102071_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// DigitalOpus.MB.Core.MBVersionConcrete
struct  MBVersionConcrete_t3658102071  : public RuntimeObject
{
public:
	// UnityEngine.Vector2 DigitalOpus.MB.Core.MBVersionConcrete::_HALF_UV
	Vector2_t2156229523  ____HALF_UV_0;

public:
	inline static int32_t get_offset_of__HALF_UV_0() { return static_cast<int32_t>(offsetof(MBVersionConcrete_t3658102071, ____HALF_UV_0)); }
	inline Vector2_t2156229523  get__HALF_UV_0() const { return ____HALF_UV_0; }
	inline Vector2_t2156229523 * get_address_of__HALF_UV_0() { return &____HALF_UV_0; }
	inline void set__HALF_UV_0(Vector2_t2156229523  value)
	{
		____HALF_UV_0 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // MBVERSIONCONCRETE_T3658102071_H
#ifndef MB_OBJSTOCOMBINETYPES_T827451288_H
#define MB_OBJSTOCOMBINETYPES_T827451288_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// DigitalOpus.MB.Core.MB_ObjsToCombineTypes
struct  MB_ObjsToCombineTypes_t827451288 
{
public:
	// System.Int32 DigitalOpus.MB.Core.MB_ObjsToCombineTypes::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(MB_ObjsToCombineTypes_t827451288, ___value___2)); }
	inline int32_t get_value___2() const { return ___value___2; }
	inline int32_t* get_address_of_value___2() { return &___value___2; }
	inline void set_value___2(int32_t value)
	{
		___value___2 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // MB_OBJSTOCOMBINETYPES_T827451288_H
#ifndef MB_TEXTURETILINGTREATMENT_T4087759041_H
#define MB_TEXTURETILINGTREATMENT_T4087759041_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// DigitalOpus.MB.Core.MB_TextureTilingTreatment
struct  MB_TextureTilingTreatment_t4087759041 
{
public:
	// System.Int32 DigitalOpus.MB.Core.MB_TextureTilingTreatment::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(MB_TextureTilingTreatment_t4087759041, ___value___2)); }
	inline int32_t get_value___2() const { return ___value___2; }
	inline int32_t* get_address_of_value___2() { return &___value___2; }
	inline void set_value___2(int32_t value)
	{
		___value___2 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // MB_TEXTURETILINGTREATMENT_T4087759041_H
#ifndef MATANDTRANSFORMTOMERGED_T4202614370_H
#define MATANDTRANSFORMTOMERGED_T4202614370_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// DigitalOpus.MB.Core.MatAndTransformToMerged
struct  MatAndTransformToMerged_t4202614370  : public RuntimeObject
{
public:
	// UnityEngine.Material DigitalOpus.MB.Core.MatAndTransformToMerged::mat
	Material_t340375123 * ___mat_0;
	// DigitalOpus.MB.Core.DRect DigitalOpus.MB.Core.MatAndTransformToMerged::<obUVRectIfTilingSame>k__BackingField
	DRect_t3868393502  ___U3CobUVRectIfTilingSameU3Ek__BackingField_1;
	// DigitalOpus.MB.Core.DRect DigitalOpus.MB.Core.MatAndTransformToMerged::<samplingRectMatAndUVTiling>k__BackingField
	DRect_t3868393502  ___U3CsamplingRectMatAndUVTilingU3Ek__BackingField_2;
	// DigitalOpus.MB.Core.DRect DigitalOpus.MB.Core.MatAndTransformToMerged::<materialTiling>k__BackingField
	DRect_t3868393502  ___U3CmaterialTilingU3Ek__BackingField_3;
	// System.String DigitalOpus.MB.Core.MatAndTransformToMerged::objName
	String_t* ___objName_4;

public:
	inline static int32_t get_offset_of_mat_0() { return static_cast<int32_t>(offsetof(MatAndTransformToMerged_t4202614370, ___mat_0)); }
	inline Material_t340375123 * get_mat_0() const { return ___mat_0; }
	inline Material_t340375123 ** get_address_of_mat_0() { return &___mat_0; }
	inline void set_mat_0(Material_t340375123 * value)
	{
		___mat_0 = value;
		Il2CppCodeGenWriteBarrier((&___mat_0), value);
	}

	inline static int32_t get_offset_of_U3CobUVRectIfTilingSameU3Ek__BackingField_1() { return static_cast<int32_t>(offsetof(MatAndTransformToMerged_t4202614370, ___U3CobUVRectIfTilingSameU3Ek__BackingField_1)); }
	inline DRect_t3868393502  get_U3CobUVRectIfTilingSameU3Ek__BackingField_1() const { return ___U3CobUVRectIfTilingSameU3Ek__BackingField_1; }
	inline DRect_t3868393502 * get_address_of_U3CobUVRectIfTilingSameU3Ek__BackingField_1() { return &___U3CobUVRectIfTilingSameU3Ek__BackingField_1; }
	inline void set_U3CobUVRectIfTilingSameU3Ek__BackingField_1(DRect_t3868393502  value)
	{
		___U3CobUVRectIfTilingSameU3Ek__BackingField_1 = value;
	}

	inline static int32_t get_offset_of_U3CsamplingRectMatAndUVTilingU3Ek__BackingField_2() { return static_cast<int32_t>(offsetof(MatAndTransformToMerged_t4202614370, ___U3CsamplingRectMatAndUVTilingU3Ek__BackingField_2)); }
	inline DRect_t3868393502  get_U3CsamplingRectMatAndUVTilingU3Ek__BackingField_2() const { return ___U3CsamplingRectMatAndUVTilingU3Ek__BackingField_2; }
	inline DRect_t3868393502 * get_address_of_U3CsamplingRectMatAndUVTilingU3Ek__BackingField_2() { return &___U3CsamplingRectMatAndUVTilingU3Ek__BackingField_2; }
	inline void set_U3CsamplingRectMatAndUVTilingU3Ek__BackingField_2(DRect_t3868393502  value)
	{
		___U3CsamplingRectMatAndUVTilingU3Ek__BackingField_2 = value;
	}

	inline static int32_t get_offset_of_U3CmaterialTilingU3Ek__BackingField_3() { return static_cast<int32_t>(offsetof(MatAndTransformToMerged_t4202614370, ___U3CmaterialTilingU3Ek__BackingField_3)); }
	inline DRect_t3868393502  get_U3CmaterialTilingU3Ek__BackingField_3() const { return ___U3CmaterialTilingU3Ek__BackingField_3; }
	inline DRect_t3868393502 * get_address_of_U3CmaterialTilingU3Ek__BackingField_3() { return &___U3CmaterialTilingU3Ek__BackingField_3; }
	inline void set_U3CmaterialTilingU3Ek__BackingField_3(DRect_t3868393502  value)
	{
		___U3CmaterialTilingU3Ek__BackingField_3 = value;
	}

	inline static int32_t get_offset_of_objName_4() { return static_cast<int32_t>(offsetof(MatAndTransformToMerged_t4202614370, ___objName_4)); }
	inline String_t* get_objName_4() const { return ___objName_4; }
	inline String_t** get_address_of_objName_4() { return &___objName_4; }
	inline void set_objName_4(String_t* value)
	{
		___objName_4 = value;
		Il2CppCodeGenWriteBarrier((&___objName_4), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // MATANDTRANSFORMTOMERGED_T4202614370_H
#ifndef MESHBAKERMATERIALTEXTURE_T567627287_H
#define MESHBAKERMATERIALTEXTURE_T567627287_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// DigitalOpus.MB.Core.MeshBakerMaterialTexture
struct  MeshBakerMaterialTexture_t567627287  : public RuntimeObject
{
public:
	// UnityEngine.Texture2D DigitalOpus.MB.Core.MeshBakerMaterialTexture::_t
	Texture2D_t3840446185 * ____t_0;
	// System.Single DigitalOpus.MB.Core.MeshBakerMaterialTexture::texelDensity
	float ___texelDensity_1;
	// DigitalOpus.MB.Core.DRect DigitalOpus.MB.Core.MeshBakerMaterialTexture::encapsulatingSamplingRect
	DRect_t3868393502  ___encapsulatingSamplingRect_3;
	// DigitalOpus.MB.Core.DRect DigitalOpus.MB.Core.MeshBakerMaterialTexture::<matTilingRect>k__BackingField
	DRect_t3868393502  ___U3CmatTilingRectU3Ek__BackingField_4;
	// System.Int32 DigitalOpus.MB.Core.MeshBakerMaterialTexture::<isImportedAsNormalMap>k__BackingField
	int32_t ___U3CisImportedAsNormalMapU3Ek__BackingField_5;

public:
	inline static int32_t get_offset_of__t_0() { return static_cast<int32_t>(offsetof(MeshBakerMaterialTexture_t567627287, ____t_0)); }
	inline Texture2D_t3840446185 * get__t_0() const { return ____t_0; }
	inline Texture2D_t3840446185 ** get_address_of__t_0() { return &____t_0; }
	inline void set__t_0(Texture2D_t3840446185 * value)
	{
		____t_0 = value;
		Il2CppCodeGenWriteBarrier((&____t_0), value);
	}

	inline static int32_t get_offset_of_texelDensity_1() { return static_cast<int32_t>(offsetof(MeshBakerMaterialTexture_t567627287, ___texelDensity_1)); }
	inline float get_texelDensity_1() const { return ___texelDensity_1; }
	inline float* get_address_of_texelDensity_1() { return &___texelDensity_1; }
	inline void set_texelDensity_1(float value)
	{
		___texelDensity_1 = value;
	}

	inline static int32_t get_offset_of_encapsulatingSamplingRect_3() { return static_cast<int32_t>(offsetof(MeshBakerMaterialTexture_t567627287, ___encapsulatingSamplingRect_3)); }
	inline DRect_t3868393502  get_encapsulatingSamplingRect_3() const { return ___encapsulatingSamplingRect_3; }
	inline DRect_t3868393502 * get_address_of_encapsulatingSamplingRect_3() { return &___encapsulatingSamplingRect_3; }
	inline void set_encapsulatingSamplingRect_3(DRect_t3868393502  value)
	{
		___encapsulatingSamplingRect_3 = value;
	}

	inline static int32_t get_offset_of_U3CmatTilingRectU3Ek__BackingField_4() { return static_cast<int32_t>(offsetof(MeshBakerMaterialTexture_t567627287, ___U3CmatTilingRectU3Ek__BackingField_4)); }
	inline DRect_t3868393502  get_U3CmatTilingRectU3Ek__BackingField_4() const { return ___U3CmatTilingRectU3Ek__BackingField_4; }
	inline DRect_t3868393502 * get_address_of_U3CmatTilingRectU3Ek__BackingField_4() { return &___U3CmatTilingRectU3Ek__BackingField_4; }
	inline void set_U3CmatTilingRectU3Ek__BackingField_4(DRect_t3868393502  value)
	{
		___U3CmatTilingRectU3Ek__BackingField_4 = value;
	}

	inline static int32_t get_offset_of_U3CisImportedAsNormalMapU3Ek__BackingField_5() { return static_cast<int32_t>(offsetof(MeshBakerMaterialTexture_t567627287, ___U3CisImportedAsNormalMapU3Ek__BackingField_5)); }
	inline int32_t get_U3CisImportedAsNormalMapU3Ek__BackingField_5() const { return ___U3CisImportedAsNormalMapU3Ek__BackingField_5; }
	inline int32_t* get_address_of_U3CisImportedAsNormalMapU3Ek__BackingField_5() { return &___U3CisImportedAsNormalMapU3Ek__BackingField_5; }
	inline void set_U3CisImportedAsNormalMapU3Ek__BackingField_5(int32_t value)
	{
		___U3CisImportedAsNormalMapU3Ek__BackingField_5 = value;
	}
};

struct MeshBakerMaterialTexture_t567627287_StaticFields
{
public:
	// System.Boolean DigitalOpus.MB.Core.MeshBakerMaterialTexture::readyToBuildAtlases
	bool ___readyToBuildAtlases_2;

public:
	inline static int32_t get_offset_of_readyToBuildAtlases_2() { return static_cast<int32_t>(offsetof(MeshBakerMaterialTexture_t567627287_StaticFields, ___readyToBuildAtlases_2)); }
	inline bool get_readyToBuildAtlases_2() const { return ___readyToBuildAtlases_2; }
	inline bool* get_address_of_readyToBuildAtlases_2() { return &___readyToBuildAtlases_2; }
	inline void set_readyToBuildAtlases_2(bool value)
	{
		___readyToBuildAtlases_2 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // MESHBAKERMATERIALTEXTURE_T567627287_H
#ifndef RESULTTYPE_T1436488508_H
#define RESULTTYPE_T1436488508_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// MB2_TextureBakeResults/ResultType
struct  ResultType_t1436488508 
{
public:
	// System.Int32 MB2_TextureBakeResults/ResultType::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(ResultType_t1436488508, ___value___2)); }
	inline int32_t get_value___2() const { return ___value___2; }
	inline int32_t* get_address_of_value___2() { return &___value___2; }
	inline void set_value___2(int32_t value)
	{
		___value___2 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // RESULTTYPE_T1436488508_H
#ifndef DELEGATE_T1188392813_H
#define DELEGATE_T1188392813_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Delegate
struct  Delegate_t1188392813  : public RuntimeObject
{
public:
	// System.IntPtr System.Delegate::method_ptr
	Il2CppMethodPointer ___method_ptr_0;
	// System.IntPtr System.Delegate::invoke_impl
	intptr_t ___invoke_impl_1;
	// System.Object System.Delegate::m_target
	RuntimeObject * ___m_target_2;
	// System.IntPtr System.Delegate::method
	intptr_t ___method_3;
	// System.IntPtr System.Delegate::delegate_trampoline
	intptr_t ___delegate_trampoline_4;
	// System.IntPtr System.Delegate::extra_arg
	intptr_t ___extra_arg_5;
	// System.IntPtr System.Delegate::method_code
	intptr_t ___method_code_6;
	// System.Reflection.MethodInfo System.Delegate::method_info
	MethodInfo_t * ___method_info_7;
	// System.Reflection.MethodInfo System.Delegate::original_method_info
	MethodInfo_t * ___original_method_info_8;
	// System.DelegateData System.Delegate::data
	DelegateData_t1677132599 * ___data_9;
	// System.Boolean System.Delegate::method_is_virtual
	bool ___method_is_virtual_10;

public:
	inline static int32_t get_offset_of_method_ptr_0() { return static_cast<int32_t>(offsetof(Delegate_t1188392813, ___method_ptr_0)); }
	inline Il2CppMethodPointer get_method_ptr_0() const { return ___method_ptr_0; }
	inline Il2CppMethodPointer* get_address_of_method_ptr_0() { return &___method_ptr_0; }
	inline void set_method_ptr_0(Il2CppMethodPointer value)
	{
		___method_ptr_0 = value;
	}

	inline static int32_t get_offset_of_invoke_impl_1() { return static_cast<int32_t>(offsetof(Delegate_t1188392813, ___invoke_impl_1)); }
	inline intptr_t get_invoke_impl_1() const { return ___invoke_impl_1; }
	inline intptr_t* get_address_of_invoke_impl_1() { return &___invoke_impl_1; }
	inline void set_invoke_impl_1(intptr_t value)
	{
		___invoke_impl_1 = value;
	}

	inline static int32_t get_offset_of_m_target_2() { return static_cast<int32_t>(offsetof(Delegate_t1188392813, ___m_target_2)); }
	inline RuntimeObject * get_m_target_2() const { return ___m_target_2; }
	inline RuntimeObject ** get_address_of_m_target_2() { return &___m_target_2; }
	inline void set_m_target_2(RuntimeObject * value)
	{
		___m_target_2 = value;
		Il2CppCodeGenWriteBarrier((&___m_target_2), value);
	}

	inline static int32_t get_offset_of_method_3() { return static_cast<int32_t>(offsetof(Delegate_t1188392813, ___method_3)); }
	inline intptr_t get_method_3() const { return ___method_3; }
	inline intptr_t* get_address_of_method_3() { return &___method_3; }
	inline void set_method_3(intptr_t value)
	{
		___method_3 = value;
	}

	inline static int32_t get_offset_of_delegate_trampoline_4() { return static_cast<int32_t>(offsetof(Delegate_t1188392813, ___delegate_trampoline_4)); }
	inline intptr_t get_delegate_trampoline_4() const { return ___delegate_trampoline_4; }
	inline intptr_t* get_address_of_delegate_trampoline_4() { return &___delegate_trampoline_4; }
	inline void set_delegate_trampoline_4(intptr_t value)
	{
		___delegate_trampoline_4 = value;
	}

	inline static int32_t get_offset_of_extra_arg_5() { return static_cast<int32_t>(offsetof(Delegate_t1188392813, ___extra_arg_5)); }
	inline intptr_t get_extra_arg_5() const { return ___extra_arg_5; }
	inline intptr_t* get_address_of_extra_arg_5() { return &___extra_arg_5; }
	inline void set_extra_arg_5(intptr_t value)
	{
		___extra_arg_5 = value;
	}

	inline static int32_t get_offset_of_method_code_6() { return static_cast<int32_t>(offsetof(Delegate_t1188392813, ___method_code_6)); }
	inline intptr_t get_method_code_6() const { return ___method_code_6; }
	inline intptr_t* get_address_of_method_code_6() { return &___method_code_6; }
	inline void set_method_code_6(intptr_t value)
	{
		___method_code_6 = value;
	}

	inline static int32_t get_offset_of_method_info_7() { return static_cast<int32_t>(offsetof(Delegate_t1188392813, ___method_info_7)); }
	inline MethodInfo_t * get_method_info_7() const { return ___method_info_7; }
	inline MethodInfo_t ** get_address_of_method_info_7() { return &___method_info_7; }
	inline void set_method_info_7(MethodInfo_t * value)
	{
		___method_info_7 = value;
		Il2CppCodeGenWriteBarrier((&___method_info_7), value);
	}

	inline static int32_t get_offset_of_original_method_info_8() { return static_cast<int32_t>(offsetof(Delegate_t1188392813, ___original_method_info_8)); }
	inline MethodInfo_t * get_original_method_info_8() const { return ___original_method_info_8; }
	inline MethodInfo_t ** get_address_of_original_method_info_8() { return &___original_method_info_8; }
	inline void set_original_method_info_8(MethodInfo_t * value)
	{
		___original_method_info_8 = value;
		Il2CppCodeGenWriteBarrier((&___original_method_info_8), value);
	}

	inline static int32_t get_offset_of_data_9() { return static_cast<int32_t>(offsetof(Delegate_t1188392813, ___data_9)); }
	inline DelegateData_t1677132599 * get_data_9() const { return ___data_9; }
	inline DelegateData_t1677132599 ** get_address_of_data_9() { return &___data_9; }
	inline void set_data_9(DelegateData_t1677132599 * value)
	{
		___data_9 = value;
		Il2CppCodeGenWriteBarrier((&___data_9), value);
	}

	inline static int32_t get_offset_of_method_is_virtual_10() { return static_cast<int32_t>(offsetof(Delegate_t1188392813, ___method_is_virtual_10)); }
	inline bool get_method_is_virtual_10() const { return ___method_is_virtual_10; }
	inline bool* get_address_of_method_is_virtual_10() { return &___method_is_virtual_10; }
	inline void set_method_is_virtual_10(bool value)
	{
		___method_is_virtual_10 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
// Native definition for P/Invoke marshalling of System.Delegate
struct Delegate_t1188392813_marshaled_pinvoke
{
	intptr_t ___method_ptr_0;
	intptr_t ___invoke_impl_1;
	Il2CppIUnknown* ___m_target_2;
	intptr_t ___method_3;
	intptr_t ___delegate_trampoline_4;
	intptr_t ___extra_arg_5;
	intptr_t ___method_code_6;
	MethodInfo_t * ___method_info_7;
	MethodInfo_t * ___original_method_info_8;
	DelegateData_t1677132599 * ___data_9;
	int32_t ___method_is_virtual_10;
};
// Native definition for COM marshalling of System.Delegate
struct Delegate_t1188392813_marshaled_com
{
	intptr_t ___method_ptr_0;
	intptr_t ___invoke_impl_1;
	Il2CppIUnknown* ___m_target_2;
	intptr_t ___method_3;
	intptr_t ___delegate_trampoline_4;
	intptr_t ___extra_arg_5;
	intptr_t ___method_code_6;
	MethodInfo_t * ___method_info_7;
	MethodInfo_t * ___original_method_info_8;
	DelegateData_t1677132599 * ___data_9;
	int32_t ___method_is_virtual_10;
};
#endif // DELEGATE_T1188392813_H
#ifndef NOTSUPPORTEDEXCEPTION_T1314879016_H
#define NOTSUPPORTEDEXCEPTION_T1314879016_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.NotSupportedException
struct  NotSupportedException_t1314879016  : public SystemException_t176217640
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // NOTSUPPORTEDEXCEPTION_T1314879016_H
#ifndef CAMERACLEARFLAGS_T2362496923_H
#define CAMERACLEARFLAGS_T2362496923_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.CameraClearFlags
struct  CameraClearFlags_t2362496923 
{
public:
	// System.Int32 UnityEngine.CameraClearFlags::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(CameraClearFlags_t2362496923, ___value___2)); }
	inline int32_t get_value___2() const { return ___value___2; }
	inline int32_t* get_address_of_value___2() { return &___value___2; }
	inline void set_value___2(int32_t value)
	{
		___value___2 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // CAMERACLEARFLAGS_T2362496923_H
#ifndef FILTERMODE_T3761284007_H
#define FILTERMODE_T3761284007_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.FilterMode
struct  FilterMode_t3761284007 
{
public:
	// System.Int32 UnityEngine.FilterMode::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(FilterMode_t3761284007, ___value___2)); }
	inline int32_t get_value___2() const { return ___value___2; }
	inline int32_t* get_address_of_value___2() { return &___value___2; }
	inline void set_value___2(int32_t value)
	{
		___value___2 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // FILTERMODE_T3761284007_H
#ifndef OBJECT_T631007953_H
#define OBJECT_T631007953_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.Object
struct  Object_t631007953  : public RuntimeObject
{
public:
	// System.IntPtr UnityEngine.Object::m_CachedPtr
	intptr_t ___m_CachedPtr_0;

public:
	inline static int32_t get_offset_of_m_CachedPtr_0() { return static_cast<int32_t>(offsetof(Object_t631007953, ___m_CachedPtr_0)); }
	inline intptr_t get_m_CachedPtr_0() const { return ___m_CachedPtr_0; }
	inline intptr_t* get_address_of_m_CachedPtr_0() { return &___m_CachedPtr_0; }
	inline void set_m_CachedPtr_0(intptr_t value)
	{
		___m_CachedPtr_0 = value;
	}
};

struct Object_t631007953_StaticFields
{
public:
	// System.Int32 UnityEngine.Object::OffsetOfInstanceIDInCPlusPlusObject
	int32_t ___OffsetOfInstanceIDInCPlusPlusObject_1;

public:
	inline static int32_t get_offset_of_OffsetOfInstanceIDInCPlusPlusObject_1() { return static_cast<int32_t>(offsetof(Object_t631007953_StaticFields, ___OffsetOfInstanceIDInCPlusPlusObject_1)); }
	inline int32_t get_OffsetOfInstanceIDInCPlusPlusObject_1() const { return ___OffsetOfInstanceIDInCPlusPlusObject_1; }
	inline int32_t* get_address_of_OffsetOfInstanceIDInCPlusPlusObject_1() { return &___OffsetOfInstanceIDInCPlusPlusObject_1; }
	inline void set_OffsetOfInstanceIDInCPlusPlusObject_1(int32_t value)
	{
		___OffsetOfInstanceIDInCPlusPlusObject_1 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
// Native definition for P/Invoke marshalling of UnityEngine.Object
struct Object_t631007953_marshaled_pinvoke
{
	intptr_t ___m_CachedPtr_0;
};
// Native definition for COM marshalling of UnityEngine.Object
struct Object_t631007953_marshaled_com
{
	intptr_t ___m_CachedPtr_0;
};
#endif // OBJECT_T631007953_H
#ifndef RENDERTEXTUREFORMAT_T962350765_H
#define RENDERTEXTUREFORMAT_T962350765_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.RenderTextureFormat
struct  RenderTextureFormat_t962350765 
{
public:
	// System.Int32 UnityEngine.RenderTextureFormat::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(RenderTextureFormat_t962350765, ___value___2)); }
	inline int32_t get_value___2() const { return ___value___2; }
	inline int32_t* get_address_of_value___2() { return &___value___2; }
	inline void set_value___2(int32_t value)
	{
		___value___2 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // RENDERTEXTUREFORMAT_T962350765_H
#ifndef TEXTUREFORMAT_T2701165832_H
#define TEXTUREFORMAT_T2701165832_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.TextureFormat
struct  TextureFormat_t2701165832 
{
public:
	// System.Int32 UnityEngine.TextureFormat::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(TextureFormat_t2701165832, ___value___2)); }
	inline int32_t get_value___2() const { return ___value___2; }
	inline int32_t* get_address_of_value___2() { return &___value___2; }
	inline void set_value___2(int32_t value)
	{
		___value___2 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // TEXTUREFORMAT_T2701165832_H
#ifndef TEXTUREWRAPMODE_T584250749_H
#define TEXTUREWRAPMODE_T584250749_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.TextureWrapMode
struct  TextureWrapMode_t584250749 
{
public:
	// System.Int32 UnityEngine.TextureWrapMode::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(TextureWrapMode_t584250749, ___value___2)); }
	inline int32_t get_value___2() const { return ___value___2; }
	inline int32_t* get_address_of_value___2() { return &___value___2; }
	inline void set_value___2(int32_t value)
	{
		___value___2 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // TEXTUREWRAPMODE_T584250749_H
#ifndef MB3_TEXTURECOMBINER_T2018981714_H
#define MB3_TEXTURECOMBINER_T2018981714_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// DigitalOpus.MB.Core.MB3_TextureCombiner
struct  MB3_TextureCombiner_t2018981714  : public RuntimeObject
{
public:
	// DigitalOpus.MB.Core.MB2_LogLevel DigitalOpus.MB.Core.MB3_TextureCombiner::LOG_LEVEL
	int32_t ___LOG_LEVEL_0;
	// MB2_TextureBakeResults DigitalOpus.MB.Core.MB3_TextureCombiner::_textureBakeResults
	MB2_TextureBakeResults_t548408826 * ____textureBakeResults_1;
	// System.Int32 DigitalOpus.MB.Core.MB3_TextureCombiner::_atlasPadding
	int32_t ____atlasPadding_2;
	// System.Int32 DigitalOpus.MB.Core.MB3_TextureCombiner::_maxAtlasSize
	int32_t ____maxAtlasSize_3;
	// System.Int32 DigitalOpus.MB.Core.MB3_TextureCombiner::_maxAtlasWidthOverride
	int32_t ____maxAtlasWidthOverride_4;
	// System.Int32 DigitalOpus.MB.Core.MB3_TextureCombiner::_maxAtlasHeightOverride
	int32_t ____maxAtlasHeightOverride_5;
	// System.Boolean DigitalOpus.MB.Core.MB3_TextureCombiner::_useMaxAtlasWidthOverride
	bool ____useMaxAtlasWidthOverride_6;
	// System.Boolean DigitalOpus.MB.Core.MB3_TextureCombiner::_useMaxAtlasHeightOverride
	bool ____useMaxAtlasHeightOverride_7;
	// System.Boolean DigitalOpus.MB.Core.MB3_TextureCombiner::_resizePowerOfTwoTextures
	bool ____resizePowerOfTwoTextures_8;
	// System.Boolean DigitalOpus.MB.Core.MB3_TextureCombiner::_fixOutOfBoundsUVs
	bool ____fixOutOfBoundsUVs_9;
	// System.Int32 DigitalOpus.MB.Core.MB3_TextureCombiner::_layerTexturePackerFastMesh
	int32_t ____layerTexturePackerFastMesh_10;
	// System.Int32 DigitalOpus.MB.Core.MB3_TextureCombiner::_maxTilingBakeSize
	int32_t ____maxTilingBakeSize_11;
	// System.Boolean DigitalOpus.MB.Core.MB3_TextureCombiner::_saveAtlasesAsAssets
	bool ____saveAtlasesAsAssets_12;
	// MB2_TextureBakeResults/ResultType DigitalOpus.MB.Core.MB3_TextureCombiner::_resultType
	int32_t ____resultType_13;
	// DigitalOpus.MB.Core.MB2_PackingAlgorithmEnum DigitalOpus.MB.Core.MB3_TextureCombiner::_packingAlgorithm
	int32_t ____packingAlgorithm_14;
	// System.Boolean DigitalOpus.MB.Core.MB3_TextureCombiner::_meshBakerTexturePackerForcePowerOfTwo
	bool ____meshBakerTexturePackerForcePowerOfTwo_15;
	// System.Collections.Generic.List`1<DigitalOpus.MB.Core.ShaderTextureProperty> DigitalOpus.MB.Core.MB3_TextureCombiner::_customShaderPropNames
	List_1_t2795786026 * ____customShaderPropNames_16;
	// System.Boolean DigitalOpus.MB.Core.MB3_TextureCombiner::_normalizeTexelDensity
	bool ____normalizeTexelDensity_17;
	// System.Boolean DigitalOpus.MB.Core.MB3_TextureCombiner::_considerNonTextureProperties
	bool ____considerNonTextureProperties_18;
	// System.Boolean DigitalOpus.MB.Core.MB3_TextureCombiner::_doMergeDistinctMaterialTexturesThatWouldExceedAtlasSize
	bool ____doMergeDistinctMaterialTexturesThatWouldExceedAtlasSize_19;
	// System.Collections.Generic.List`1<DigitalOpus.MB.Core.MB3_TextureCombiner/TemporaryTexture> DigitalOpus.MB.Core.MB3_TextureCombiner::_temporaryTextures
	List_1_t3601725809 * ____temporaryTextures_20;

public:
	inline static int32_t get_offset_of_LOG_LEVEL_0() { return static_cast<int32_t>(offsetof(MB3_TextureCombiner_t2018981714, ___LOG_LEVEL_0)); }
	inline int32_t get_LOG_LEVEL_0() const { return ___LOG_LEVEL_0; }
	inline int32_t* get_address_of_LOG_LEVEL_0() { return &___LOG_LEVEL_0; }
	inline void set_LOG_LEVEL_0(int32_t value)
	{
		___LOG_LEVEL_0 = value;
	}

	inline static int32_t get_offset_of__textureBakeResults_1() { return static_cast<int32_t>(offsetof(MB3_TextureCombiner_t2018981714, ____textureBakeResults_1)); }
	inline MB2_TextureBakeResults_t548408826 * get__textureBakeResults_1() const { return ____textureBakeResults_1; }
	inline MB2_TextureBakeResults_t548408826 ** get_address_of__textureBakeResults_1() { return &____textureBakeResults_1; }
	inline void set__textureBakeResults_1(MB2_TextureBakeResults_t548408826 * value)
	{
		____textureBakeResults_1 = value;
		Il2CppCodeGenWriteBarrier((&____textureBakeResults_1), value);
	}

	inline static int32_t get_offset_of__atlasPadding_2() { return static_cast<int32_t>(offsetof(MB3_TextureCombiner_t2018981714, ____atlasPadding_2)); }
	inline int32_t get__atlasPadding_2() const { return ____atlasPadding_2; }
	inline int32_t* get_address_of__atlasPadding_2() { return &____atlasPadding_2; }
	inline void set__atlasPadding_2(int32_t value)
	{
		____atlasPadding_2 = value;
	}

	inline static int32_t get_offset_of__maxAtlasSize_3() { return static_cast<int32_t>(offsetof(MB3_TextureCombiner_t2018981714, ____maxAtlasSize_3)); }
	inline int32_t get__maxAtlasSize_3() const { return ____maxAtlasSize_3; }
	inline int32_t* get_address_of__maxAtlasSize_3() { return &____maxAtlasSize_3; }
	inline void set__maxAtlasSize_3(int32_t value)
	{
		____maxAtlasSize_3 = value;
	}

	inline static int32_t get_offset_of__maxAtlasWidthOverride_4() { return static_cast<int32_t>(offsetof(MB3_TextureCombiner_t2018981714, ____maxAtlasWidthOverride_4)); }
	inline int32_t get__maxAtlasWidthOverride_4() const { return ____maxAtlasWidthOverride_4; }
	inline int32_t* get_address_of__maxAtlasWidthOverride_4() { return &____maxAtlasWidthOverride_4; }
	inline void set__maxAtlasWidthOverride_4(int32_t value)
	{
		____maxAtlasWidthOverride_4 = value;
	}

	inline static int32_t get_offset_of__maxAtlasHeightOverride_5() { return static_cast<int32_t>(offsetof(MB3_TextureCombiner_t2018981714, ____maxAtlasHeightOverride_5)); }
	inline int32_t get__maxAtlasHeightOverride_5() const { return ____maxAtlasHeightOverride_5; }
	inline int32_t* get_address_of__maxAtlasHeightOverride_5() { return &____maxAtlasHeightOverride_5; }
	inline void set__maxAtlasHeightOverride_5(int32_t value)
	{
		____maxAtlasHeightOverride_5 = value;
	}

	inline static int32_t get_offset_of__useMaxAtlasWidthOverride_6() { return static_cast<int32_t>(offsetof(MB3_TextureCombiner_t2018981714, ____useMaxAtlasWidthOverride_6)); }
	inline bool get__useMaxAtlasWidthOverride_6() const { return ____useMaxAtlasWidthOverride_6; }
	inline bool* get_address_of__useMaxAtlasWidthOverride_6() { return &____useMaxAtlasWidthOverride_6; }
	inline void set__useMaxAtlasWidthOverride_6(bool value)
	{
		____useMaxAtlasWidthOverride_6 = value;
	}

	inline static int32_t get_offset_of__useMaxAtlasHeightOverride_7() { return static_cast<int32_t>(offsetof(MB3_TextureCombiner_t2018981714, ____useMaxAtlasHeightOverride_7)); }
	inline bool get__useMaxAtlasHeightOverride_7() const { return ____useMaxAtlasHeightOverride_7; }
	inline bool* get_address_of__useMaxAtlasHeightOverride_7() { return &____useMaxAtlasHeightOverride_7; }
	inline void set__useMaxAtlasHeightOverride_7(bool value)
	{
		____useMaxAtlasHeightOverride_7 = value;
	}

	inline static int32_t get_offset_of__resizePowerOfTwoTextures_8() { return static_cast<int32_t>(offsetof(MB3_TextureCombiner_t2018981714, ____resizePowerOfTwoTextures_8)); }
	inline bool get__resizePowerOfTwoTextures_8() const { return ____resizePowerOfTwoTextures_8; }
	inline bool* get_address_of__resizePowerOfTwoTextures_8() { return &____resizePowerOfTwoTextures_8; }
	inline void set__resizePowerOfTwoTextures_8(bool value)
	{
		____resizePowerOfTwoTextures_8 = value;
	}

	inline static int32_t get_offset_of__fixOutOfBoundsUVs_9() { return static_cast<int32_t>(offsetof(MB3_TextureCombiner_t2018981714, ____fixOutOfBoundsUVs_9)); }
	inline bool get__fixOutOfBoundsUVs_9() const { return ____fixOutOfBoundsUVs_9; }
	inline bool* get_address_of__fixOutOfBoundsUVs_9() { return &____fixOutOfBoundsUVs_9; }
	inline void set__fixOutOfBoundsUVs_9(bool value)
	{
		____fixOutOfBoundsUVs_9 = value;
	}

	inline static int32_t get_offset_of__layerTexturePackerFastMesh_10() { return static_cast<int32_t>(offsetof(MB3_TextureCombiner_t2018981714, ____layerTexturePackerFastMesh_10)); }
	inline int32_t get__layerTexturePackerFastMesh_10() const { return ____layerTexturePackerFastMesh_10; }
	inline int32_t* get_address_of__layerTexturePackerFastMesh_10() { return &____layerTexturePackerFastMesh_10; }
	inline void set__layerTexturePackerFastMesh_10(int32_t value)
	{
		____layerTexturePackerFastMesh_10 = value;
	}

	inline static int32_t get_offset_of__maxTilingBakeSize_11() { return static_cast<int32_t>(offsetof(MB3_TextureCombiner_t2018981714, ____maxTilingBakeSize_11)); }
	inline int32_t get__maxTilingBakeSize_11() const { return ____maxTilingBakeSize_11; }
	inline int32_t* get_address_of__maxTilingBakeSize_11() { return &____maxTilingBakeSize_11; }
	inline void set__maxTilingBakeSize_11(int32_t value)
	{
		____maxTilingBakeSize_11 = value;
	}

	inline static int32_t get_offset_of__saveAtlasesAsAssets_12() { return static_cast<int32_t>(offsetof(MB3_TextureCombiner_t2018981714, ____saveAtlasesAsAssets_12)); }
	inline bool get__saveAtlasesAsAssets_12() const { return ____saveAtlasesAsAssets_12; }
	inline bool* get_address_of__saveAtlasesAsAssets_12() { return &____saveAtlasesAsAssets_12; }
	inline void set__saveAtlasesAsAssets_12(bool value)
	{
		____saveAtlasesAsAssets_12 = value;
	}

	inline static int32_t get_offset_of__resultType_13() { return static_cast<int32_t>(offsetof(MB3_TextureCombiner_t2018981714, ____resultType_13)); }
	inline int32_t get__resultType_13() const { return ____resultType_13; }
	inline int32_t* get_address_of__resultType_13() { return &____resultType_13; }
	inline void set__resultType_13(int32_t value)
	{
		____resultType_13 = value;
	}

	inline static int32_t get_offset_of__packingAlgorithm_14() { return static_cast<int32_t>(offsetof(MB3_TextureCombiner_t2018981714, ____packingAlgorithm_14)); }
	inline int32_t get__packingAlgorithm_14() const { return ____packingAlgorithm_14; }
	inline int32_t* get_address_of__packingAlgorithm_14() { return &____packingAlgorithm_14; }
	inline void set__packingAlgorithm_14(int32_t value)
	{
		____packingAlgorithm_14 = value;
	}

	inline static int32_t get_offset_of__meshBakerTexturePackerForcePowerOfTwo_15() { return static_cast<int32_t>(offsetof(MB3_TextureCombiner_t2018981714, ____meshBakerTexturePackerForcePowerOfTwo_15)); }
	inline bool get__meshBakerTexturePackerForcePowerOfTwo_15() const { return ____meshBakerTexturePackerForcePowerOfTwo_15; }
	inline bool* get_address_of__meshBakerTexturePackerForcePowerOfTwo_15() { return &____meshBakerTexturePackerForcePowerOfTwo_15; }
	inline void set__meshBakerTexturePackerForcePowerOfTwo_15(bool value)
	{
		____meshBakerTexturePackerForcePowerOfTwo_15 = value;
	}

	inline static int32_t get_offset_of__customShaderPropNames_16() { return static_cast<int32_t>(offsetof(MB3_TextureCombiner_t2018981714, ____customShaderPropNames_16)); }
	inline List_1_t2795786026 * get__customShaderPropNames_16() const { return ____customShaderPropNames_16; }
	inline List_1_t2795786026 ** get_address_of__customShaderPropNames_16() { return &____customShaderPropNames_16; }
	inline void set__customShaderPropNames_16(List_1_t2795786026 * value)
	{
		____customShaderPropNames_16 = value;
		Il2CppCodeGenWriteBarrier((&____customShaderPropNames_16), value);
	}

	inline static int32_t get_offset_of__normalizeTexelDensity_17() { return static_cast<int32_t>(offsetof(MB3_TextureCombiner_t2018981714, ____normalizeTexelDensity_17)); }
	inline bool get__normalizeTexelDensity_17() const { return ____normalizeTexelDensity_17; }
	inline bool* get_address_of__normalizeTexelDensity_17() { return &____normalizeTexelDensity_17; }
	inline void set__normalizeTexelDensity_17(bool value)
	{
		____normalizeTexelDensity_17 = value;
	}

	inline static int32_t get_offset_of__considerNonTextureProperties_18() { return static_cast<int32_t>(offsetof(MB3_TextureCombiner_t2018981714, ____considerNonTextureProperties_18)); }
	inline bool get__considerNonTextureProperties_18() const { return ____considerNonTextureProperties_18; }
	inline bool* get_address_of__considerNonTextureProperties_18() { return &____considerNonTextureProperties_18; }
	inline void set__considerNonTextureProperties_18(bool value)
	{
		____considerNonTextureProperties_18 = value;
	}

	inline static int32_t get_offset_of__doMergeDistinctMaterialTexturesThatWouldExceedAtlasSize_19() { return static_cast<int32_t>(offsetof(MB3_TextureCombiner_t2018981714, ____doMergeDistinctMaterialTexturesThatWouldExceedAtlasSize_19)); }
	inline bool get__doMergeDistinctMaterialTexturesThatWouldExceedAtlasSize_19() const { return ____doMergeDistinctMaterialTexturesThatWouldExceedAtlasSize_19; }
	inline bool* get_address_of__doMergeDistinctMaterialTexturesThatWouldExceedAtlasSize_19() { return &____doMergeDistinctMaterialTexturesThatWouldExceedAtlasSize_19; }
	inline void set__doMergeDistinctMaterialTexturesThatWouldExceedAtlasSize_19(bool value)
	{
		____doMergeDistinctMaterialTexturesThatWouldExceedAtlasSize_19 = value;
	}

	inline static int32_t get_offset_of__temporaryTextures_20() { return static_cast<int32_t>(offsetof(MB3_TextureCombiner_t2018981714, ____temporaryTextures_20)); }
	inline List_1_t3601725809 * get__temporaryTextures_20() const { return ____temporaryTextures_20; }
	inline List_1_t3601725809 ** get_address_of__temporaryTextures_20() { return &____temporaryTextures_20; }
	inline void set__temporaryTextures_20(List_1_t3601725809 * value)
	{
		____temporaryTextures_20 = value;
		Il2CppCodeGenWriteBarrier((&____temporaryTextures_20), value);
	}
};

struct MB3_TextureCombiner_t2018981714_StaticFields
{
public:
	// System.Boolean DigitalOpus.MB.Core.MB3_TextureCombiner::_RunCorutineWithoutPauseIsRunning
	bool ____RunCorutineWithoutPauseIsRunning_21;

public:
	inline static int32_t get_offset_of__RunCorutineWithoutPauseIsRunning_21() { return static_cast<int32_t>(offsetof(MB3_TextureCombiner_t2018981714_StaticFields, ____RunCorutineWithoutPauseIsRunning_21)); }
	inline bool get__RunCorutineWithoutPauseIsRunning_21() const { return ____RunCorutineWithoutPauseIsRunning_21; }
	inline bool* get_address_of__RunCorutineWithoutPauseIsRunning_21() { return &____RunCorutineWithoutPauseIsRunning_21; }
	inline void set__RunCorutineWithoutPauseIsRunning_21(bool value)
	{
		____RunCorutineWithoutPauseIsRunning_21 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // MB3_TEXTURECOMBINER_T2018981714_H
#ifndef MB3_TEXTURECOMBINERNONTEXTUREPROPERTIES_T582390424_H
#define MB3_TEXTURECOMBINERNONTEXTUREPROPERTIES_T582390424_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// DigitalOpus.MB.Core.MB3_TextureCombinerNonTextureProperties
struct  MB3_TextureCombinerNonTextureProperties_t582390424  : public RuntimeObject
{
public:
	// DigitalOpus.MB.Core.MB3_TextureCombinerNonTextureProperties/TexPropertyNameColorPair[] DigitalOpus.MB.Core.MB3_TextureCombinerNonTextureProperties::defaultTextureProperty2DefaultColorMap
	TexPropertyNameColorPairU5BU5D_t2106296288* ___defaultTextureProperty2DefaultColorMap_1;
	// DigitalOpus.MB.Core.MB3_TextureCombinerNonTextureProperties/MaterialProperty[] DigitalOpus.MB.Core.MB3_TextureCombinerNonTextureProperties::_nonTextureProperties
	MaterialPropertyU5BU5D_t1007983773* ____nonTextureProperties_2;
	// DigitalOpus.MB.Core.MB2_LogLevel DigitalOpus.MB.Core.MB3_TextureCombinerNonTextureProperties::LOG_LEVEL
	int32_t ___LOG_LEVEL_3;
	// System.Boolean DigitalOpus.MB.Core.MB3_TextureCombinerNonTextureProperties::_considerNonTextureProperties
	bool ____considerNonTextureProperties_4;
	// DigitalOpus.MB.Core.TextureBlender DigitalOpus.MB.Core.MB3_TextureCombinerNonTextureProperties::resultMaterialTextureBlender
	RuntimeObject* ___resultMaterialTextureBlender_5;
	// DigitalOpus.MB.Core.TextureBlender[] DigitalOpus.MB.Core.MB3_TextureCombinerNonTextureProperties::textureBlenders
	TextureBlenderU5BU5D_t2512262112* ___textureBlenders_6;
	// System.Collections.Generic.Dictionary`2<System.String,UnityEngine.Color> DigitalOpus.MB.Core.MB3_TextureCombinerNonTextureProperties::textureProperty2DefaultColorMap
	Dictionary_2_t2340942623 * ___textureProperty2DefaultColorMap_7;
	// DigitalOpus.MB.Core.MB3_TextureCombinerNonTextureProperties/NonTextureProperties DigitalOpus.MB.Core.MB3_TextureCombinerNonTextureProperties::_nonTexturePropertiesBlender
	RuntimeObject* ____nonTexturePropertiesBlender_8;

public:
	inline static int32_t get_offset_of_defaultTextureProperty2DefaultColorMap_1() { return static_cast<int32_t>(offsetof(MB3_TextureCombinerNonTextureProperties_t582390424, ___defaultTextureProperty2DefaultColorMap_1)); }
	inline TexPropertyNameColorPairU5BU5D_t2106296288* get_defaultTextureProperty2DefaultColorMap_1() const { return ___defaultTextureProperty2DefaultColorMap_1; }
	inline TexPropertyNameColorPairU5BU5D_t2106296288** get_address_of_defaultTextureProperty2DefaultColorMap_1() { return &___defaultTextureProperty2DefaultColorMap_1; }
	inline void set_defaultTextureProperty2DefaultColorMap_1(TexPropertyNameColorPairU5BU5D_t2106296288* value)
	{
		___defaultTextureProperty2DefaultColorMap_1 = value;
		Il2CppCodeGenWriteBarrier((&___defaultTextureProperty2DefaultColorMap_1), value);
	}

	inline static int32_t get_offset_of__nonTextureProperties_2() { return static_cast<int32_t>(offsetof(MB3_TextureCombinerNonTextureProperties_t582390424, ____nonTextureProperties_2)); }
	inline MaterialPropertyU5BU5D_t1007983773* get__nonTextureProperties_2() const { return ____nonTextureProperties_2; }
	inline MaterialPropertyU5BU5D_t1007983773** get_address_of__nonTextureProperties_2() { return &____nonTextureProperties_2; }
	inline void set__nonTextureProperties_2(MaterialPropertyU5BU5D_t1007983773* value)
	{
		____nonTextureProperties_2 = value;
		Il2CppCodeGenWriteBarrier((&____nonTextureProperties_2), value);
	}

	inline static int32_t get_offset_of_LOG_LEVEL_3() { return static_cast<int32_t>(offsetof(MB3_TextureCombinerNonTextureProperties_t582390424, ___LOG_LEVEL_3)); }
	inline int32_t get_LOG_LEVEL_3() const { return ___LOG_LEVEL_3; }
	inline int32_t* get_address_of_LOG_LEVEL_3() { return &___LOG_LEVEL_3; }
	inline void set_LOG_LEVEL_3(int32_t value)
	{
		___LOG_LEVEL_3 = value;
	}

	inline static int32_t get_offset_of__considerNonTextureProperties_4() { return static_cast<int32_t>(offsetof(MB3_TextureCombinerNonTextureProperties_t582390424, ____considerNonTextureProperties_4)); }
	inline bool get__considerNonTextureProperties_4() const { return ____considerNonTextureProperties_4; }
	inline bool* get_address_of__considerNonTextureProperties_4() { return &____considerNonTextureProperties_4; }
	inline void set__considerNonTextureProperties_4(bool value)
	{
		____considerNonTextureProperties_4 = value;
	}

	inline static int32_t get_offset_of_resultMaterialTextureBlender_5() { return static_cast<int32_t>(offsetof(MB3_TextureCombinerNonTextureProperties_t582390424, ___resultMaterialTextureBlender_5)); }
	inline RuntimeObject* get_resultMaterialTextureBlender_5() const { return ___resultMaterialTextureBlender_5; }
	inline RuntimeObject** get_address_of_resultMaterialTextureBlender_5() { return &___resultMaterialTextureBlender_5; }
	inline void set_resultMaterialTextureBlender_5(RuntimeObject* value)
	{
		___resultMaterialTextureBlender_5 = value;
		Il2CppCodeGenWriteBarrier((&___resultMaterialTextureBlender_5), value);
	}

	inline static int32_t get_offset_of_textureBlenders_6() { return static_cast<int32_t>(offsetof(MB3_TextureCombinerNonTextureProperties_t582390424, ___textureBlenders_6)); }
	inline TextureBlenderU5BU5D_t2512262112* get_textureBlenders_6() const { return ___textureBlenders_6; }
	inline TextureBlenderU5BU5D_t2512262112** get_address_of_textureBlenders_6() { return &___textureBlenders_6; }
	inline void set_textureBlenders_6(TextureBlenderU5BU5D_t2512262112* value)
	{
		___textureBlenders_6 = value;
		Il2CppCodeGenWriteBarrier((&___textureBlenders_6), value);
	}

	inline static int32_t get_offset_of_textureProperty2DefaultColorMap_7() { return static_cast<int32_t>(offsetof(MB3_TextureCombinerNonTextureProperties_t582390424, ___textureProperty2DefaultColorMap_7)); }
	inline Dictionary_2_t2340942623 * get_textureProperty2DefaultColorMap_7() const { return ___textureProperty2DefaultColorMap_7; }
	inline Dictionary_2_t2340942623 ** get_address_of_textureProperty2DefaultColorMap_7() { return &___textureProperty2DefaultColorMap_7; }
	inline void set_textureProperty2DefaultColorMap_7(Dictionary_2_t2340942623 * value)
	{
		___textureProperty2DefaultColorMap_7 = value;
		Il2CppCodeGenWriteBarrier((&___textureProperty2DefaultColorMap_7), value);
	}

	inline static int32_t get_offset_of__nonTexturePropertiesBlender_8() { return static_cast<int32_t>(offsetof(MB3_TextureCombinerNonTextureProperties_t582390424, ____nonTexturePropertiesBlender_8)); }
	inline RuntimeObject* get__nonTexturePropertiesBlender_8() const { return ____nonTexturePropertiesBlender_8; }
	inline RuntimeObject** get_address_of__nonTexturePropertiesBlender_8() { return &____nonTexturePropertiesBlender_8; }
	inline void set__nonTexturePropertiesBlender_8(RuntimeObject* value)
	{
		____nonTexturePropertiesBlender_8 = value;
		Il2CppCodeGenWriteBarrier((&____nonTexturePropertiesBlender_8), value);
	}
};

struct MB3_TextureCombinerNonTextureProperties_t582390424_StaticFields
{
public:
	// UnityEngine.Color DigitalOpus.MB.Core.MB3_TextureCombinerNonTextureProperties::NEUTRAL_NORMAL_MAP_COLOR
	Color_t2555686324  ___NEUTRAL_NORMAL_MAP_COLOR_0;

public:
	inline static int32_t get_offset_of_NEUTRAL_NORMAL_MAP_COLOR_0() { return static_cast<int32_t>(offsetof(MB3_TextureCombinerNonTextureProperties_t582390424_StaticFields, ___NEUTRAL_NORMAL_MAP_COLOR_0)); }
	inline Color_t2555686324  get_NEUTRAL_NORMAL_MAP_COLOR_0() const { return ___NEUTRAL_NORMAL_MAP_COLOR_0; }
	inline Color_t2555686324 * get_address_of_NEUTRAL_NORMAL_MAP_COLOR_0() { return &___NEUTRAL_NORMAL_MAP_COLOR_0; }
	inline void set_NEUTRAL_NORMAL_MAP_COLOR_0(Color_t2555686324  value)
	{
		___NEUTRAL_NORMAL_MAP_COLOR_0 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // MB3_TEXTURECOMBINERNONTEXTUREPROPERTIES_T582390424_H
#ifndef MB_TEXSET_T80133013_H
#define MB_TEXSET_T80133013_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// DigitalOpus.MB.Core.MB_TexSet
struct  MB_TexSet_t80133013  : public RuntimeObject
{
public:
	// DigitalOpus.MB.Core.MeshBakerMaterialTexture[] DigitalOpus.MB.Core.MB_TexSet::ts
	MeshBakerMaterialTextureU5BU5D_t3009043374* ___ts_0;
	// DigitalOpus.MB.Core.MatsAndGOs DigitalOpus.MB.Core.MB_TexSet::matsAndGOs
	MatsAndGOs_t963675950 * ___matsAndGOs_1;
	// System.Boolean DigitalOpus.MB.Core.MB_TexSet::<allTexturesUseSameMatTiling>k__BackingField
	bool ___U3CallTexturesUseSameMatTilingU3Ek__BackingField_2;
	// System.Boolean DigitalOpus.MB.Core.MB_TexSet::<thisIsOnlyTexSetInAtlas>k__BackingField
	bool ___U3CthisIsOnlyTexSetInAtlasU3Ek__BackingField_3;
	// DigitalOpus.MB.Core.MB_TextureTilingTreatment DigitalOpus.MB.Core.MB_TexSet::<tilingTreatment>k__BackingField
	int32_t ___U3CtilingTreatmentU3Ek__BackingField_4;
	// UnityEngine.Vector2 DigitalOpus.MB.Core.MB_TexSet::<obUVoffset>k__BackingField
	Vector2_t2156229523  ___U3CobUVoffsetU3Ek__BackingField_5;
	// UnityEngine.Vector2 DigitalOpus.MB.Core.MB_TexSet::<obUVscale>k__BackingField
	Vector2_t2156229523  ___U3CobUVscaleU3Ek__BackingField_6;
	// System.Int32 DigitalOpus.MB.Core.MB_TexSet::idealWidth
	int32_t ___idealWidth_7;
	// System.Int32 DigitalOpus.MB.Core.MB_TexSet::idealHeight
	int32_t ___idealHeight_8;
	// DigitalOpus.MB.Core.MB_TexSet/PipelineVariation DigitalOpus.MB.Core.MB_TexSet::pipelineVariation
	RuntimeObject* ___pipelineVariation_9;

public:
	inline static int32_t get_offset_of_ts_0() { return static_cast<int32_t>(offsetof(MB_TexSet_t80133013, ___ts_0)); }
	inline MeshBakerMaterialTextureU5BU5D_t3009043374* get_ts_0() const { return ___ts_0; }
	inline MeshBakerMaterialTextureU5BU5D_t3009043374** get_address_of_ts_0() { return &___ts_0; }
	inline void set_ts_0(MeshBakerMaterialTextureU5BU5D_t3009043374* value)
	{
		___ts_0 = value;
		Il2CppCodeGenWriteBarrier((&___ts_0), value);
	}

	inline static int32_t get_offset_of_matsAndGOs_1() { return static_cast<int32_t>(offsetof(MB_TexSet_t80133013, ___matsAndGOs_1)); }
	inline MatsAndGOs_t963675950 * get_matsAndGOs_1() const { return ___matsAndGOs_1; }
	inline MatsAndGOs_t963675950 ** get_address_of_matsAndGOs_1() { return &___matsAndGOs_1; }
	inline void set_matsAndGOs_1(MatsAndGOs_t963675950 * value)
	{
		___matsAndGOs_1 = value;
		Il2CppCodeGenWriteBarrier((&___matsAndGOs_1), value);
	}

	inline static int32_t get_offset_of_U3CallTexturesUseSameMatTilingU3Ek__BackingField_2() { return static_cast<int32_t>(offsetof(MB_TexSet_t80133013, ___U3CallTexturesUseSameMatTilingU3Ek__BackingField_2)); }
	inline bool get_U3CallTexturesUseSameMatTilingU3Ek__BackingField_2() const { return ___U3CallTexturesUseSameMatTilingU3Ek__BackingField_2; }
	inline bool* get_address_of_U3CallTexturesUseSameMatTilingU3Ek__BackingField_2() { return &___U3CallTexturesUseSameMatTilingU3Ek__BackingField_2; }
	inline void set_U3CallTexturesUseSameMatTilingU3Ek__BackingField_2(bool value)
	{
		___U3CallTexturesUseSameMatTilingU3Ek__BackingField_2 = value;
	}

	inline static int32_t get_offset_of_U3CthisIsOnlyTexSetInAtlasU3Ek__BackingField_3() { return static_cast<int32_t>(offsetof(MB_TexSet_t80133013, ___U3CthisIsOnlyTexSetInAtlasU3Ek__BackingField_3)); }
	inline bool get_U3CthisIsOnlyTexSetInAtlasU3Ek__BackingField_3() const { return ___U3CthisIsOnlyTexSetInAtlasU3Ek__BackingField_3; }
	inline bool* get_address_of_U3CthisIsOnlyTexSetInAtlasU3Ek__BackingField_3() { return &___U3CthisIsOnlyTexSetInAtlasU3Ek__BackingField_3; }
	inline void set_U3CthisIsOnlyTexSetInAtlasU3Ek__BackingField_3(bool value)
	{
		___U3CthisIsOnlyTexSetInAtlasU3Ek__BackingField_3 = value;
	}

	inline static int32_t get_offset_of_U3CtilingTreatmentU3Ek__BackingField_4() { return static_cast<int32_t>(offsetof(MB_TexSet_t80133013, ___U3CtilingTreatmentU3Ek__BackingField_4)); }
	inline int32_t get_U3CtilingTreatmentU3Ek__BackingField_4() const { return ___U3CtilingTreatmentU3Ek__BackingField_4; }
	inline int32_t* get_address_of_U3CtilingTreatmentU3Ek__BackingField_4() { return &___U3CtilingTreatmentU3Ek__BackingField_4; }
	inline void set_U3CtilingTreatmentU3Ek__BackingField_4(int32_t value)
	{
		___U3CtilingTreatmentU3Ek__BackingField_4 = value;
	}

	inline static int32_t get_offset_of_U3CobUVoffsetU3Ek__BackingField_5() { return static_cast<int32_t>(offsetof(MB_TexSet_t80133013, ___U3CobUVoffsetU3Ek__BackingField_5)); }
	inline Vector2_t2156229523  get_U3CobUVoffsetU3Ek__BackingField_5() const { return ___U3CobUVoffsetU3Ek__BackingField_5; }
	inline Vector2_t2156229523 * get_address_of_U3CobUVoffsetU3Ek__BackingField_5() { return &___U3CobUVoffsetU3Ek__BackingField_5; }
	inline void set_U3CobUVoffsetU3Ek__BackingField_5(Vector2_t2156229523  value)
	{
		___U3CobUVoffsetU3Ek__BackingField_5 = value;
	}

	inline static int32_t get_offset_of_U3CobUVscaleU3Ek__BackingField_6() { return static_cast<int32_t>(offsetof(MB_TexSet_t80133013, ___U3CobUVscaleU3Ek__BackingField_6)); }
	inline Vector2_t2156229523  get_U3CobUVscaleU3Ek__BackingField_6() const { return ___U3CobUVscaleU3Ek__BackingField_6; }
	inline Vector2_t2156229523 * get_address_of_U3CobUVscaleU3Ek__BackingField_6() { return &___U3CobUVscaleU3Ek__BackingField_6; }
	inline void set_U3CobUVscaleU3Ek__BackingField_6(Vector2_t2156229523  value)
	{
		___U3CobUVscaleU3Ek__BackingField_6 = value;
	}

	inline static int32_t get_offset_of_idealWidth_7() { return static_cast<int32_t>(offsetof(MB_TexSet_t80133013, ___idealWidth_7)); }
	inline int32_t get_idealWidth_7() const { return ___idealWidth_7; }
	inline int32_t* get_address_of_idealWidth_7() { return &___idealWidth_7; }
	inline void set_idealWidth_7(int32_t value)
	{
		___idealWidth_7 = value;
	}

	inline static int32_t get_offset_of_idealHeight_8() { return static_cast<int32_t>(offsetof(MB_TexSet_t80133013, ___idealHeight_8)); }
	inline int32_t get_idealHeight_8() const { return ___idealHeight_8; }
	inline int32_t* get_address_of_idealHeight_8() { return &___idealHeight_8; }
	inline void set_idealHeight_8(int32_t value)
	{
		___idealHeight_8 = value;
	}

	inline static int32_t get_offset_of_pipelineVariation_9() { return static_cast<int32_t>(offsetof(MB_TexSet_t80133013, ___pipelineVariation_9)); }
	inline RuntimeObject* get_pipelineVariation_9() const { return ___pipelineVariation_9; }
	inline RuntimeObject** get_address_of_pipelineVariation_9() { return &___pipelineVariation_9; }
	inline void set_pipelineVariation_9(RuntimeObject* value)
	{
		___pipelineVariation_9 = value;
		Il2CppCodeGenWriteBarrier((&___pipelineVariation_9), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // MB_TEXSET_T80133013_H
#ifndef U3C_CREATEATLASESCOROUTINEU3EC__ITERATOR3_T4069405804_H
#define U3C_CREATEATLASESCOROUTINEU3EC__ITERATOR3_T4069405804_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// MB3_TextureBaker/<_CreateAtlasesCoroutine>c__Iterator3
struct  U3C_CreateAtlasesCoroutineU3Ec__Iterator3_t4069405804  : public RuntimeObject
{
public:
	// DigitalOpus.MB.Core.MBVersionConcrete MB3_TextureBaker/<_CreateAtlasesCoroutine>c__Iterator3::<mbv>__0
	MBVersionConcrete_t3658102071 * ___U3CmbvU3E__0_0;
	// DigitalOpus.MB.Core.MB3_TextureCombiner/CreateAtlasesCoroutineResult MB3_TextureBaker/<_CreateAtlasesCoroutine>c__Iterator3::coroutineResult
	CreateAtlasesCoroutineResult_t3502510657 * ___coroutineResult_1;
	// System.Single MB3_TextureBaker/<_CreateAtlasesCoroutine>c__Iterator3::maxTimePerFrame
	float ___maxTimePerFrame_2;
	// DigitalOpus.MB.Core.MB2_ValidationLevel MB3_TextureBaker/<_CreateAtlasesCoroutine>c__Iterator3::<vl>__0
	int32_t ___U3CvlU3E__0_3;
	// DigitalOpus.MB.Core.MB3_TextureCombiner MB3_TextureBaker/<_CreateAtlasesCoroutine>c__Iterator3::<combiner>__0
	MB3_TextureCombiner_t2018981714 * ___U3CcombinerU3E__0_4;
	// System.Boolean MB3_TextureBaker/<_CreateAtlasesCoroutine>c__Iterator3::saveAtlasesAsAssets
	bool ___saveAtlasesAsAssets_5;
	// DigitalOpus.MB.Core.ProgressUpdateDelegate MB3_TextureBaker/<_CreateAtlasesCoroutine>c__Iterator3::progressInfo
	ProgressUpdateDelegate_t883957101 * ___progressInfo_6;
	// DigitalOpus.MB.Core.MB2_EditorMethodsInterface MB3_TextureBaker/<_CreateAtlasesCoroutine>c__Iterator3::editorMethods
	RuntimeObject* ___editorMethods_7;
	// MB3_MeshBakerCommon[] MB3_TextureBaker/<_CreateAtlasesCoroutine>c__Iterator3::<mb>__0
	MB3_MeshBakerCommonU5BU5D_t1333502032* ___U3CmbU3E__0_8;
	// MB3_TextureBaker MB3_TextureBaker/<_CreateAtlasesCoroutine>c__Iterator3::$this
	MB3_TextureBaker_t37954774 * ___U24this_9;
	// System.Object MB3_TextureBaker/<_CreateAtlasesCoroutine>c__Iterator3::$current
	RuntimeObject * ___U24current_10;
	// System.Boolean MB3_TextureBaker/<_CreateAtlasesCoroutine>c__Iterator3::$disposing
	bool ___U24disposing_11;
	// System.Int32 MB3_TextureBaker/<_CreateAtlasesCoroutine>c__Iterator3::$PC
	int32_t ___U24PC_12;

public:
	inline static int32_t get_offset_of_U3CmbvU3E__0_0() { return static_cast<int32_t>(offsetof(U3C_CreateAtlasesCoroutineU3Ec__Iterator3_t4069405804, ___U3CmbvU3E__0_0)); }
	inline MBVersionConcrete_t3658102071 * get_U3CmbvU3E__0_0() const { return ___U3CmbvU3E__0_0; }
	inline MBVersionConcrete_t3658102071 ** get_address_of_U3CmbvU3E__0_0() { return &___U3CmbvU3E__0_0; }
	inline void set_U3CmbvU3E__0_0(MBVersionConcrete_t3658102071 * value)
	{
		___U3CmbvU3E__0_0 = value;
		Il2CppCodeGenWriteBarrier((&___U3CmbvU3E__0_0), value);
	}

	inline static int32_t get_offset_of_coroutineResult_1() { return static_cast<int32_t>(offsetof(U3C_CreateAtlasesCoroutineU3Ec__Iterator3_t4069405804, ___coroutineResult_1)); }
	inline CreateAtlasesCoroutineResult_t3502510657 * get_coroutineResult_1() const { return ___coroutineResult_1; }
	inline CreateAtlasesCoroutineResult_t3502510657 ** get_address_of_coroutineResult_1() { return &___coroutineResult_1; }
	inline void set_coroutineResult_1(CreateAtlasesCoroutineResult_t3502510657 * value)
	{
		___coroutineResult_1 = value;
		Il2CppCodeGenWriteBarrier((&___coroutineResult_1), value);
	}

	inline static int32_t get_offset_of_maxTimePerFrame_2() { return static_cast<int32_t>(offsetof(U3C_CreateAtlasesCoroutineU3Ec__Iterator3_t4069405804, ___maxTimePerFrame_2)); }
	inline float get_maxTimePerFrame_2() const { return ___maxTimePerFrame_2; }
	inline float* get_address_of_maxTimePerFrame_2() { return &___maxTimePerFrame_2; }
	inline void set_maxTimePerFrame_2(float value)
	{
		___maxTimePerFrame_2 = value;
	}

	inline static int32_t get_offset_of_U3CvlU3E__0_3() { return static_cast<int32_t>(offsetof(U3C_CreateAtlasesCoroutineU3Ec__Iterator3_t4069405804, ___U3CvlU3E__0_3)); }
	inline int32_t get_U3CvlU3E__0_3() const { return ___U3CvlU3E__0_3; }
	inline int32_t* get_address_of_U3CvlU3E__0_3() { return &___U3CvlU3E__0_3; }
	inline void set_U3CvlU3E__0_3(int32_t value)
	{
		___U3CvlU3E__0_3 = value;
	}

	inline static int32_t get_offset_of_U3CcombinerU3E__0_4() { return static_cast<int32_t>(offsetof(U3C_CreateAtlasesCoroutineU3Ec__Iterator3_t4069405804, ___U3CcombinerU3E__0_4)); }
	inline MB3_TextureCombiner_t2018981714 * get_U3CcombinerU3E__0_4() const { return ___U3CcombinerU3E__0_4; }
	inline MB3_TextureCombiner_t2018981714 ** get_address_of_U3CcombinerU3E__0_4() { return &___U3CcombinerU3E__0_4; }
	inline void set_U3CcombinerU3E__0_4(MB3_TextureCombiner_t2018981714 * value)
	{
		___U3CcombinerU3E__0_4 = value;
		Il2CppCodeGenWriteBarrier((&___U3CcombinerU3E__0_4), value);
	}

	inline static int32_t get_offset_of_saveAtlasesAsAssets_5() { return static_cast<int32_t>(offsetof(U3C_CreateAtlasesCoroutineU3Ec__Iterator3_t4069405804, ___saveAtlasesAsAssets_5)); }
	inline bool get_saveAtlasesAsAssets_5() const { return ___saveAtlasesAsAssets_5; }
	inline bool* get_address_of_saveAtlasesAsAssets_5() { return &___saveAtlasesAsAssets_5; }
	inline void set_saveAtlasesAsAssets_5(bool value)
	{
		___saveAtlasesAsAssets_5 = value;
	}

	inline static int32_t get_offset_of_progressInfo_6() { return static_cast<int32_t>(offsetof(U3C_CreateAtlasesCoroutineU3Ec__Iterator3_t4069405804, ___progressInfo_6)); }
	inline ProgressUpdateDelegate_t883957101 * get_progressInfo_6() const { return ___progressInfo_6; }
	inline ProgressUpdateDelegate_t883957101 ** get_address_of_progressInfo_6() { return &___progressInfo_6; }
	inline void set_progressInfo_6(ProgressUpdateDelegate_t883957101 * value)
	{
		___progressInfo_6 = value;
		Il2CppCodeGenWriteBarrier((&___progressInfo_6), value);
	}

	inline static int32_t get_offset_of_editorMethods_7() { return static_cast<int32_t>(offsetof(U3C_CreateAtlasesCoroutineU3Ec__Iterator3_t4069405804, ___editorMethods_7)); }
	inline RuntimeObject* get_editorMethods_7() const { return ___editorMethods_7; }
	inline RuntimeObject** get_address_of_editorMethods_7() { return &___editorMethods_7; }
	inline void set_editorMethods_7(RuntimeObject* value)
	{
		___editorMethods_7 = value;
		Il2CppCodeGenWriteBarrier((&___editorMethods_7), value);
	}

	inline static int32_t get_offset_of_U3CmbU3E__0_8() { return static_cast<int32_t>(offsetof(U3C_CreateAtlasesCoroutineU3Ec__Iterator3_t4069405804, ___U3CmbU3E__0_8)); }
	inline MB3_MeshBakerCommonU5BU5D_t1333502032* get_U3CmbU3E__0_8() const { return ___U3CmbU3E__0_8; }
	inline MB3_MeshBakerCommonU5BU5D_t1333502032** get_address_of_U3CmbU3E__0_8() { return &___U3CmbU3E__0_8; }
	inline void set_U3CmbU3E__0_8(MB3_MeshBakerCommonU5BU5D_t1333502032* value)
	{
		___U3CmbU3E__0_8 = value;
		Il2CppCodeGenWriteBarrier((&___U3CmbU3E__0_8), value);
	}

	inline static int32_t get_offset_of_U24this_9() { return static_cast<int32_t>(offsetof(U3C_CreateAtlasesCoroutineU3Ec__Iterator3_t4069405804, ___U24this_9)); }
	inline MB3_TextureBaker_t37954774 * get_U24this_9() const { return ___U24this_9; }
	inline MB3_TextureBaker_t37954774 ** get_address_of_U24this_9() { return &___U24this_9; }
	inline void set_U24this_9(MB3_TextureBaker_t37954774 * value)
	{
		___U24this_9 = value;
		Il2CppCodeGenWriteBarrier((&___U24this_9), value);
	}

	inline static int32_t get_offset_of_U24current_10() { return static_cast<int32_t>(offsetof(U3C_CreateAtlasesCoroutineU3Ec__Iterator3_t4069405804, ___U24current_10)); }
	inline RuntimeObject * get_U24current_10() const { return ___U24current_10; }
	inline RuntimeObject ** get_address_of_U24current_10() { return &___U24current_10; }
	inline void set_U24current_10(RuntimeObject * value)
	{
		___U24current_10 = value;
		Il2CppCodeGenWriteBarrier((&___U24current_10), value);
	}

	inline static int32_t get_offset_of_U24disposing_11() { return static_cast<int32_t>(offsetof(U3C_CreateAtlasesCoroutineU3Ec__Iterator3_t4069405804, ___U24disposing_11)); }
	inline bool get_U24disposing_11() const { return ___U24disposing_11; }
	inline bool* get_address_of_U24disposing_11() { return &___U24disposing_11; }
	inline void set_U24disposing_11(bool value)
	{
		___U24disposing_11 = value;
	}

	inline static int32_t get_offset_of_U24PC_12() { return static_cast<int32_t>(offsetof(U3C_CreateAtlasesCoroutineU3Ec__Iterator3_t4069405804, ___U24PC_12)); }
	inline int32_t get_U24PC_12() const { return ___U24PC_12; }
	inline int32_t* get_address_of_U24PC_12() { return &___U24PC_12; }
	inline void set_U24PC_12(int32_t value)
	{
		___U24PC_12 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // U3C_CREATEATLASESCOROUTINEU3EC__ITERATOR3_T4069405804_H
#ifndef MB_MATERIALANDUVRECT_T1611876729_H
#define MB_MATERIALANDUVRECT_T1611876729_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// MB_MaterialAndUVRect
struct  MB_MaterialAndUVRect_t1611876729  : public RuntimeObject
{
public:
	// UnityEngine.Material MB_MaterialAndUVRect::material
	Material_t340375123 * ___material_0;
	// UnityEngine.Rect MB_MaterialAndUVRect::atlasRect
	Rect_t2360479859  ___atlasRect_1;
	// System.String MB_MaterialAndUVRect::srcObjName
	String_t* ___srcObjName_2;
	// System.Int32 MB_MaterialAndUVRect::textureArraySliceIdx
	int32_t ___textureArraySliceIdx_3;
	// System.Boolean MB_MaterialAndUVRect::allPropsUseSameTiling
	bool ___allPropsUseSameTiling_4;
	// UnityEngine.Rect MB_MaterialAndUVRect::allPropsUseSameTiling_sourceMaterialTiling
	Rect_t2360479859  ___allPropsUseSameTiling_sourceMaterialTiling_5;
	// UnityEngine.Rect MB_MaterialAndUVRect::allPropsUseSameTiling_samplingEncapsulatinRect
	Rect_t2360479859  ___allPropsUseSameTiling_samplingEncapsulatinRect_6;
	// UnityEngine.Rect MB_MaterialAndUVRect::propsUseDifferntTiling_srcUVsamplingRect
	Rect_t2360479859  ___propsUseDifferntTiling_srcUVsamplingRect_7;
	// System.Collections.Generic.List`1<UnityEngine.GameObject> MB_MaterialAndUVRect::objectsThatUse
	List_1_t2585711361 * ___objectsThatUse_8;
	// DigitalOpus.MB.Core.MB_TextureTilingTreatment MB_MaterialAndUVRect::tilingTreatment
	int32_t ___tilingTreatment_9;

public:
	inline static int32_t get_offset_of_material_0() { return static_cast<int32_t>(offsetof(MB_MaterialAndUVRect_t1611876729, ___material_0)); }
	inline Material_t340375123 * get_material_0() const { return ___material_0; }
	inline Material_t340375123 ** get_address_of_material_0() { return &___material_0; }
	inline void set_material_0(Material_t340375123 * value)
	{
		___material_0 = value;
		Il2CppCodeGenWriteBarrier((&___material_0), value);
	}

	inline static int32_t get_offset_of_atlasRect_1() { return static_cast<int32_t>(offsetof(MB_MaterialAndUVRect_t1611876729, ___atlasRect_1)); }
	inline Rect_t2360479859  get_atlasRect_1() const { return ___atlasRect_1; }
	inline Rect_t2360479859 * get_address_of_atlasRect_1() { return &___atlasRect_1; }
	inline void set_atlasRect_1(Rect_t2360479859  value)
	{
		___atlasRect_1 = value;
	}

	inline static int32_t get_offset_of_srcObjName_2() { return static_cast<int32_t>(offsetof(MB_MaterialAndUVRect_t1611876729, ___srcObjName_2)); }
	inline String_t* get_srcObjName_2() const { return ___srcObjName_2; }
	inline String_t** get_address_of_srcObjName_2() { return &___srcObjName_2; }
	inline void set_srcObjName_2(String_t* value)
	{
		___srcObjName_2 = value;
		Il2CppCodeGenWriteBarrier((&___srcObjName_2), value);
	}

	inline static int32_t get_offset_of_textureArraySliceIdx_3() { return static_cast<int32_t>(offsetof(MB_MaterialAndUVRect_t1611876729, ___textureArraySliceIdx_3)); }
	inline int32_t get_textureArraySliceIdx_3() const { return ___textureArraySliceIdx_3; }
	inline int32_t* get_address_of_textureArraySliceIdx_3() { return &___textureArraySliceIdx_3; }
	inline void set_textureArraySliceIdx_3(int32_t value)
	{
		___textureArraySliceIdx_3 = value;
	}

	inline static int32_t get_offset_of_allPropsUseSameTiling_4() { return static_cast<int32_t>(offsetof(MB_MaterialAndUVRect_t1611876729, ___allPropsUseSameTiling_4)); }
	inline bool get_allPropsUseSameTiling_4() const { return ___allPropsUseSameTiling_4; }
	inline bool* get_address_of_allPropsUseSameTiling_4() { return &___allPropsUseSameTiling_4; }
	inline void set_allPropsUseSameTiling_4(bool value)
	{
		___allPropsUseSameTiling_4 = value;
	}

	inline static int32_t get_offset_of_allPropsUseSameTiling_sourceMaterialTiling_5() { return static_cast<int32_t>(offsetof(MB_MaterialAndUVRect_t1611876729, ___allPropsUseSameTiling_sourceMaterialTiling_5)); }
	inline Rect_t2360479859  get_allPropsUseSameTiling_sourceMaterialTiling_5() const { return ___allPropsUseSameTiling_sourceMaterialTiling_5; }
	inline Rect_t2360479859 * get_address_of_allPropsUseSameTiling_sourceMaterialTiling_5() { return &___allPropsUseSameTiling_sourceMaterialTiling_5; }
	inline void set_allPropsUseSameTiling_sourceMaterialTiling_5(Rect_t2360479859  value)
	{
		___allPropsUseSameTiling_sourceMaterialTiling_5 = value;
	}

	inline static int32_t get_offset_of_allPropsUseSameTiling_samplingEncapsulatinRect_6() { return static_cast<int32_t>(offsetof(MB_MaterialAndUVRect_t1611876729, ___allPropsUseSameTiling_samplingEncapsulatinRect_6)); }
	inline Rect_t2360479859  get_allPropsUseSameTiling_samplingEncapsulatinRect_6() const { return ___allPropsUseSameTiling_samplingEncapsulatinRect_6; }
	inline Rect_t2360479859 * get_address_of_allPropsUseSameTiling_samplingEncapsulatinRect_6() { return &___allPropsUseSameTiling_samplingEncapsulatinRect_6; }
	inline void set_allPropsUseSameTiling_samplingEncapsulatinRect_6(Rect_t2360479859  value)
	{
		___allPropsUseSameTiling_samplingEncapsulatinRect_6 = value;
	}

	inline static int32_t get_offset_of_propsUseDifferntTiling_srcUVsamplingRect_7() { return static_cast<int32_t>(offsetof(MB_MaterialAndUVRect_t1611876729, ___propsUseDifferntTiling_srcUVsamplingRect_7)); }
	inline Rect_t2360479859  get_propsUseDifferntTiling_srcUVsamplingRect_7() const { return ___propsUseDifferntTiling_srcUVsamplingRect_7; }
	inline Rect_t2360479859 * get_address_of_propsUseDifferntTiling_srcUVsamplingRect_7() { return &___propsUseDifferntTiling_srcUVsamplingRect_7; }
	inline void set_propsUseDifferntTiling_srcUVsamplingRect_7(Rect_t2360479859  value)
	{
		___propsUseDifferntTiling_srcUVsamplingRect_7 = value;
	}

	inline static int32_t get_offset_of_objectsThatUse_8() { return static_cast<int32_t>(offsetof(MB_MaterialAndUVRect_t1611876729, ___objectsThatUse_8)); }
	inline List_1_t2585711361 * get_objectsThatUse_8() const { return ___objectsThatUse_8; }
	inline List_1_t2585711361 ** get_address_of_objectsThatUse_8() { return &___objectsThatUse_8; }
	inline void set_objectsThatUse_8(List_1_t2585711361 * value)
	{
		___objectsThatUse_8 = value;
		Il2CppCodeGenWriteBarrier((&___objectsThatUse_8), value);
	}

	inline static int32_t get_offset_of_tilingTreatment_9() { return static_cast<int32_t>(offsetof(MB_MaterialAndUVRect_t1611876729, ___tilingTreatment_9)); }
	inline int32_t get_tilingTreatment_9() const { return ___tilingTreatment_9; }
	inline int32_t* get_address_of_tilingTreatment_9() { return &___tilingTreatment_9; }
	inline void set_tilingTreatment_9(int32_t value)
	{
		___tilingTreatment_9 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // MB_MATERIALANDUVRECT_T1611876729_H
#ifndef MB_TEXTUREARRAYFORMAT_T4143201819_H
#define MB_TEXTUREARRAYFORMAT_T4143201819_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// MB_TextureArrayFormat
struct  MB_TextureArrayFormat_t4143201819  : public RuntimeObject
{
public:
	// System.String MB_TextureArrayFormat::propertyName
	String_t* ___propertyName_0;
	// UnityEngine.TextureFormat MB_TextureArrayFormat::format
	int32_t ___format_1;

public:
	inline static int32_t get_offset_of_propertyName_0() { return static_cast<int32_t>(offsetof(MB_TextureArrayFormat_t4143201819, ___propertyName_0)); }
	inline String_t* get_propertyName_0() const { return ___propertyName_0; }
	inline String_t** get_address_of_propertyName_0() { return &___propertyName_0; }
	inline void set_propertyName_0(String_t* value)
	{
		___propertyName_0 = value;
		Il2CppCodeGenWriteBarrier((&___propertyName_0), value);
	}

	inline static int32_t get_offset_of_format_1() { return static_cast<int32_t>(offsetof(MB_TextureArrayFormat_t4143201819, ___format_1)); }
	inline int32_t get_format_1() const { return ___format_1; }
	inline int32_t* get_address_of_format_1() { return &___format_1; }
	inline void set_format_1(int32_t value)
	{
		___format_1 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // MB_TEXTUREARRAYFORMAT_T4143201819_H
#ifndef MB_TEXTUREARRAYFORMATSET_T3246442245_H
#define MB_TEXTUREARRAYFORMATSET_T3246442245_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// MB_TextureArrayFormatSet
struct  MB_TextureArrayFormatSet_t3246442245  : public RuntimeObject
{
public:
	// System.String MB_TextureArrayFormatSet::name
	String_t* ___name_0;
	// UnityEngine.TextureFormat MB_TextureArrayFormatSet::defaultFormat
	int32_t ___defaultFormat_1;
	// MB_TextureArrayFormat[] MB_TextureArrayFormatSet::formatOverrides
	MB_TextureArrayFormatU5BU5D_t1822177050* ___formatOverrides_2;

public:
	inline static int32_t get_offset_of_name_0() { return static_cast<int32_t>(offsetof(MB_TextureArrayFormatSet_t3246442245, ___name_0)); }
	inline String_t* get_name_0() const { return ___name_0; }
	inline String_t** get_address_of_name_0() { return &___name_0; }
	inline void set_name_0(String_t* value)
	{
		___name_0 = value;
		Il2CppCodeGenWriteBarrier((&___name_0), value);
	}

	inline static int32_t get_offset_of_defaultFormat_1() { return static_cast<int32_t>(offsetof(MB_TextureArrayFormatSet_t3246442245, ___defaultFormat_1)); }
	inline int32_t get_defaultFormat_1() const { return ___defaultFormat_1; }
	inline int32_t* get_address_of_defaultFormat_1() { return &___defaultFormat_1; }
	inline void set_defaultFormat_1(int32_t value)
	{
		___defaultFormat_1 = value;
	}

	inline static int32_t get_offset_of_formatOverrides_2() { return static_cast<int32_t>(offsetof(MB_TextureArrayFormatSet_t3246442245, ___formatOverrides_2)); }
	inline MB_TextureArrayFormatU5BU5D_t1822177050* get_formatOverrides_2() const { return ___formatOverrides_2; }
	inline MB_TextureArrayFormatU5BU5D_t1822177050** get_address_of_formatOverrides_2() { return &___formatOverrides_2; }
	inline void set_formatOverrides_2(MB_TextureArrayFormatU5BU5D_t1822177050* value)
	{
		___formatOverrides_2 = value;
		Il2CppCodeGenWriteBarrier((&___formatOverrides_2), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // MB_TEXTUREARRAYFORMATSET_T3246442245_H
#ifndef MB_TEXTURECOMBINERRENDERTEXTURE_T1792150119_H
#define MB_TEXTURECOMBINERRENDERTEXTURE_T1792150119_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// MB_TextureCombinerRenderTexture
struct  MB_TextureCombinerRenderTexture_t1792150119  : public RuntimeObject
{
public:
	// DigitalOpus.MB.Core.MB2_LogLevel MB_TextureCombinerRenderTexture::LOG_LEVEL
	int32_t ___LOG_LEVEL_0;
	// UnityEngine.Material MB_TextureCombinerRenderTexture::mat
	Material_t340375123 * ___mat_1;
	// UnityEngine.RenderTexture MB_TextureCombinerRenderTexture::_destinationTexture
	RenderTexture_t2108887433 * ____destinationTexture_2;
	// UnityEngine.Camera MB_TextureCombinerRenderTexture::myCamera
	Camera_t4157153871 * ___myCamera_3;
	// System.Int32 MB_TextureCombinerRenderTexture::_padding
	int32_t ____padding_4;
	// System.Boolean MB_TextureCombinerRenderTexture::_isNormalMap
	bool ____isNormalMap_5;
	// System.Boolean MB_TextureCombinerRenderTexture::_fixOutOfBoundsUVs
	bool ____fixOutOfBoundsUVs_6;
	// System.Boolean MB_TextureCombinerRenderTexture::_doRenderAtlas
	bool ____doRenderAtlas_7;
	// UnityEngine.Rect[] MB_TextureCombinerRenderTexture::rs
	RectU5BU5D_t2936723554* ___rs_8;
	// System.Collections.Generic.List`1<DigitalOpus.MB.Core.MB_TexSet> MB_TextureCombinerRenderTexture::textureSets
	List_1_t1552207755 * ___textureSets_9;
	// System.Int32 MB_TextureCombinerRenderTexture::indexOfTexSetToRender
	int32_t ___indexOfTexSetToRender_10;
	// DigitalOpus.MB.Core.ShaderTextureProperty MB_TextureCombinerRenderTexture::_texPropertyName
	ShaderTextureProperty_t1323711284 * ____texPropertyName_11;
	// DigitalOpus.MB.Core.MB3_TextureCombinerNonTextureProperties MB_TextureCombinerRenderTexture::_resultMaterialTextureBlender
	MB3_TextureCombinerNonTextureProperties_t582390424 * ____resultMaterialTextureBlender_12;
	// UnityEngine.Texture2D MB_TextureCombinerRenderTexture::targTex
	Texture2D_t3840446185 * ___targTex_13;

public:
	inline static int32_t get_offset_of_LOG_LEVEL_0() { return static_cast<int32_t>(offsetof(MB_TextureCombinerRenderTexture_t1792150119, ___LOG_LEVEL_0)); }
	inline int32_t get_LOG_LEVEL_0() const { return ___LOG_LEVEL_0; }
	inline int32_t* get_address_of_LOG_LEVEL_0() { return &___LOG_LEVEL_0; }
	inline void set_LOG_LEVEL_0(int32_t value)
	{
		___LOG_LEVEL_0 = value;
	}

	inline static int32_t get_offset_of_mat_1() { return static_cast<int32_t>(offsetof(MB_TextureCombinerRenderTexture_t1792150119, ___mat_1)); }
	inline Material_t340375123 * get_mat_1() const { return ___mat_1; }
	inline Material_t340375123 ** get_address_of_mat_1() { return &___mat_1; }
	inline void set_mat_1(Material_t340375123 * value)
	{
		___mat_1 = value;
		Il2CppCodeGenWriteBarrier((&___mat_1), value);
	}

	inline static int32_t get_offset_of__destinationTexture_2() { return static_cast<int32_t>(offsetof(MB_TextureCombinerRenderTexture_t1792150119, ____destinationTexture_2)); }
	inline RenderTexture_t2108887433 * get__destinationTexture_2() const { return ____destinationTexture_2; }
	inline RenderTexture_t2108887433 ** get_address_of__destinationTexture_2() { return &____destinationTexture_2; }
	inline void set__destinationTexture_2(RenderTexture_t2108887433 * value)
	{
		____destinationTexture_2 = value;
		Il2CppCodeGenWriteBarrier((&____destinationTexture_2), value);
	}

	inline static int32_t get_offset_of_myCamera_3() { return static_cast<int32_t>(offsetof(MB_TextureCombinerRenderTexture_t1792150119, ___myCamera_3)); }
	inline Camera_t4157153871 * get_myCamera_3() const { return ___myCamera_3; }
	inline Camera_t4157153871 ** get_address_of_myCamera_3() { return &___myCamera_3; }
	inline void set_myCamera_3(Camera_t4157153871 * value)
	{
		___myCamera_3 = value;
		Il2CppCodeGenWriteBarrier((&___myCamera_3), value);
	}

	inline static int32_t get_offset_of__padding_4() { return static_cast<int32_t>(offsetof(MB_TextureCombinerRenderTexture_t1792150119, ____padding_4)); }
	inline int32_t get__padding_4() const { return ____padding_4; }
	inline int32_t* get_address_of__padding_4() { return &____padding_4; }
	inline void set__padding_4(int32_t value)
	{
		____padding_4 = value;
	}

	inline static int32_t get_offset_of__isNormalMap_5() { return static_cast<int32_t>(offsetof(MB_TextureCombinerRenderTexture_t1792150119, ____isNormalMap_5)); }
	inline bool get__isNormalMap_5() const { return ____isNormalMap_5; }
	inline bool* get_address_of__isNormalMap_5() { return &____isNormalMap_5; }
	inline void set__isNormalMap_5(bool value)
	{
		____isNormalMap_5 = value;
	}

	inline static int32_t get_offset_of__fixOutOfBoundsUVs_6() { return static_cast<int32_t>(offsetof(MB_TextureCombinerRenderTexture_t1792150119, ____fixOutOfBoundsUVs_6)); }
	inline bool get__fixOutOfBoundsUVs_6() const { return ____fixOutOfBoundsUVs_6; }
	inline bool* get_address_of__fixOutOfBoundsUVs_6() { return &____fixOutOfBoundsUVs_6; }
	inline void set__fixOutOfBoundsUVs_6(bool value)
	{
		____fixOutOfBoundsUVs_6 = value;
	}

	inline static int32_t get_offset_of__doRenderAtlas_7() { return static_cast<int32_t>(offsetof(MB_TextureCombinerRenderTexture_t1792150119, ____doRenderAtlas_7)); }
	inline bool get__doRenderAtlas_7() const { return ____doRenderAtlas_7; }
	inline bool* get_address_of__doRenderAtlas_7() { return &____doRenderAtlas_7; }
	inline void set__doRenderAtlas_7(bool value)
	{
		____doRenderAtlas_7 = value;
	}

	inline static int32_t get_offset_of_rs_8() { return static_cast<int32_t>(offsetof(MB_TextureCombinerRenderTexture_t1792150119, ___rs_8)); }
	inline RectU5BU5D_t2936723554* get_rs_8() const { return ___rs_8; }
	inline RectU5BU5D_t2936723554** get_address_of_rs_8() { return &___rs_8; }
	inline void set_rs_8(RectU5BU5D_t2936723554* value)
	{
		___rs_8 = value;
		Il2CppCodeGenWriteBarrier((&___rs_8), value);
	}

	inline static int32_t get_offset_of_textureSets_9() { return static_cast<int32_t>(offsetof(MB_TextureCombinerRenderTexture_t1792150119, ___textureSets_9)); }
	inline List_1_t1552207755 * get_textureSets_9() const { return ___textureSets_9; }
	inline List_1_t1552207755 ** get_address_of_textureSets_9() { return &___textureSets_9; }
	inline void set_textureSets_9(List_1_t1552207755 * value)
	{
		___textureSets_9 = value;
		Il2CppCodeGenWriteBarrier((&___textureSets_9), value);
	}

	inline static int32_t get_offset_of_indexOfTexSetToRender_10() { return static_cast<int32_t>(offsetof(MB_TextureCombinerRenderTexture_t1792150119, ___indexOfTexSetToRender_10)); }
	inline int32_t get_indexOfTexSetToRender_10() const { return ___indexOfTexSetToRender_10; }
	inline int32_t* get_address_of_indexOfTexSetToRender_10() { return &___indexOfTexSetToRender_10; }
	inline void set_indexOfTexSetToRender_10(int32_t value)
	{
		___indexOfTexSetToRender_10 = value;
	}

	inline static int32_t get_offset_of__texPropertyName_11() { return static_cast<int32_t>(offsetof(MB_TextureCombinerRenderTexture_t1792150119, ____texPropertyName_11)); }
	inline ShaderTextureProperty_t1323711284 * get__texPropertyName_11() const { return ____texPropertyName_11; }
	inline ShaderTextureProperty_t1323711284 ** get_address_of__texPropertyName_11() { return &____texPropertyName_11; }
	inline void set__texPropertyName_11(ShaderTextureProperty_t1323711284 * value)
	{
		____texPropertyName_11 = value;
		Il2CppCodeGenWriteBarrier((&____texPropertyName_11), value);
	}

	inline static int32_t get_offset_of__resultMaterialTextureBlender_12() { return static_cast<int32_t>(offsetof(MB_TextureCombinerRenderTexture_t1792150119, ____resultMaterialTextureBlender_12)); }
	inline MB3_TextureCombinerNonTextureProperties_t582390424 * get__resultMaterialTextureBlender_12() const { return ____resultMaterialTextureBlender_12; }
	inline MB3_TextureCombinerNonTextureProperties_t582390424 ** get_address_of__resultMaterialTextureBlender_12() { return &____resultMaterialTextureBlender_12; }
	inline void set__resultMaterialTextureBlender_12(MB3_TextureCombinerNonTextureProperties_t582390424 * value)
	{
		____resultMaterialTextureBlender_12 = value;
		Il2CppCodeGenWriteBarrier((&____resultMaterialTextureBlender_12), value);
	}

	inline static int32_t get_offset_of_targTex_13() { return static_cast<int32_t>(offsetof(MB_TextureCombinerRenderTexture_t1792150119, ___targTex_13)); }
	inline Texture2D_t3840446185 * get_targTex_13() const { return ___targTex_13; }
	inline Texture2D_t3840446185 ** get_address_of_targTex_13() { return &___targTex_13; }
	inline void set_targTex_13(Texture2D_t3840446185 * value)
	{
		___targTex_13 = value;
		Il2CppCodeGenWriteBarrier((&___targTex_13), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // MB_TEXTURECOMBINERRENDERTEXTURE_T1792150119_H
#ifndef MULTICASTDELEGATE_T_H
#define MULTICASTDELEGATE_T_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.MulticastDelegate
struct  MulticastDelegate_t  : public Delegate_t1188392813
{
public:
	// System.Delegate[] System.MulticastDelegate::delegates
	DelegateU5BU5D_t1703627840* ___delegates_11;

public:
	inline static int32_t get_offset_of_delegates_11() { return static_cast<int32_t>(offsetof(MulticastDelegate_t, ___delegates_11)); }
	inline DelegateU5BU5D_t1703627840* get_delegates_11() const { return ___delegates_11; }
	inline DelegateU5BU5D_t1703627840** get_address_of_delegates_11() { return &___delegates_11; }
	inline void set_delegates_11(DelegateU5BU5D_t1703627840* value)
	{
		___delegates_11 = value;
		Il2CppCodeGenWriteBarrier((&___delegates_11), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
// Native definition for P/Invoke marshalling of System.MulticastDelegate
struct MulticastDelegate_t_marshaled_pinvoke : public Delegate_t1188392813_marshaled_pinvoke
{
	DelegateU5BU5D_t1703627840* ___delegates_11;
};
// Native definition for COM marshalling of System.MulticastDelegate
struct MulticastDelegate_t_marshaled_com : public Delegate_t1188392813_marshaled_com
{
	DelegateU5BU5D_t1703627840* ___delegates_11;
};
#endif // MULTICASTDELEGATE_T_H
#ifndef COMPONENT_T1923634451_H
#define COMPONENT_T1923634451_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.Component
struct  Component_t1923634451  : public Object_t631007953
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // COMPONENT_T1923634451_H
#ifndef GAMEOBJECT_T1113636619_H
#define GAMEOBJECT_T1113636619_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.GameObject
struct  GameObject_t1113636619  : public Object_t631007953
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // GAMEOBJECT_T1113636619_H
#ifndef MATERIAL_T340375123_H
#define MATERIAL_T340375123_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.Material
struct  Material_t340375123  : public Object_t631007953
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // MATERIAL_T340375123_H
#ifndef MESH_T3648964284_H
#define MESH_T3648964284_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.Mesh
struct  Mesh_t3648964284  : public Object_t631007953
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // MESH_T3648964284_H
#ifndef SCRIPTABLEOBJECT_T2528358522_H
#define SCRIPTABLEOBJECT_T2528358522_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.ScriptableObject
struct  ScriptableObject_t2528358522  : public Object_t631007953
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
// Native definition for P/Invoke marshalling of UnityEngine.ScriptableObject
struct ScriptableObject_t2528358522_marshaled_pinvoke : public Object_t631007953_marshaled_pinvoke
{
};
// Native definition for COM marshalling of UnityEngine.ScriptableObject
struct ScriptableObject_t2528358522_marshaled_com : public Object_t631007953_marshaled_com
{
};
#endif // SCRIPTABLEOBJECT_T2528358522_H
#ifndef SHADER_T4151988712_H
#define SHADER_T4151988712_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.Shader
struct  Shader_t4151988712  : public Object_t631007953
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // SHADER_T4151988712_H
#ifndef TEXTURE_T3661962703_H
#define TEXTURE_T3661962703_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.Texture
struct  Texture_t3661962703  : public Object_t631007953
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // TEXTURE_T3661962703_H
#ifndef PROGRESSUPDATEDELEGATE_T883957101_H
#define PROGRESSUPDATEDELEGATE_T883957101_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// DigitalOpus.MB.Core.ProgressUpdateDelegate
struct  ProgressUpdateDelegate_t883957101  : public MulticastDelegate_t
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // PROGRESSUPDATEDELEGATE_T883957101_H
#ifndef MB2_TEXTUREBAKERESULTS_T548408826_H
#define MB2_TEXTUREBAKERESULTS_T548408826_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// MB2_TextureBakeResults
struct  MB2_TextureBakeResults_t548408826  : public ScriptableObject_t2528358522
{
public:
	// System.Int32 MB2_TextureBakeResults::version
	int32_t ___version_4;
	// MB2_TextureBakeResults/ResultType MB2_TextureBakeResults::resultType
	int32_t ___resultType_5;
	// MB_MaterialAndUVRect[] MB2_TextureBakeResults::materialsAndUVRects
	MB_MaterialAndUVRectU5BU5D_t1630039172* ___materialsAndUVRects_6;
	// MB_MultiMaterial[] MB2_TextureBakeResults::resultMaterials
	MB_MultiMaterialU5BU5D_t1825806119* ___resultMaterials_7;
	// MB_MultiMaterialTexArray[] MB2_TextureBakeResults::resultMaterialsTexArray
	MB_MultiMaterialTexArrayU5BU5D_t3908014132* ___resultMaterialsTexArray_8;
	// System.Boolean MB2_TextureBakeResults::doMultiMaterial
	bool ___doMultiMaterial_9;

public:
	inline static int32_t get_offset_of_version_4() { return static_cast<int32_t>(offsetof(MB2_TextureBakeResults_t548408826, ___version_4)); }
	inline int32_t get_version_4() const { return ___version_4; }
	inline int32_t* get_address_of_version_4() { return &___version_4; }
	inline void set_version_4(int32_t value)
	{
		___version_4 = value;
	}

	inline static int32_t get_offset_of_resultType_5() { return static_cast<int32_t>(offsetof(MB2_TextureBakeResults_t548408826, ___resultType_5)); }
	inline int32_t get_resultType_5() const { return ___resultType_5; }
	inline int32_t* get_address_of_resultType_5() { return &___resultType_5; }
	inline void set_resultType_5(int32_t value)
	{
		___resultType_5 = value;
	}

	inline static int32_t get_offset_of_materialsAndUVRects_6() { return static_cast<int32_t>(offsetof(MB2_TextureBakeResults_t548408826, ___materialsAndUVRects_6)); }
	inline MB_MaterialAndUVRectU5BU5D_t1630039172* get_materialsAndUVRects_6() const { return ___materialsAndUVRects_6; }
	inline MB_MaterialAndUVRectU5BU5D_t1630039172** get_address_of_materialsAndUVRects_6() { return &___materialsAndUVRects_6; }
	inline void set_materialsAndUVRects_6(MB_MaterialAndUVRectU5BU5D_t1630039172* value)
	{
		___materialsAndUVRects_6 = value;
		Il2CppCodeGenWriteBarrier((&___materialsAndUVRects_6), value);
	}

	inline static int32_t get_offset_of_resultMaterials_7() { return static_cast<int32_t>(offsetof(MB2_TextureBakeResults_t548408826, ___resultMaterials_7)); }
	inline MB_MultiMaterialU5BU5D_t1825806119* get_resultMaterials_7() const { return ___resultMaterials_7; }
	inline MB_MultiMaterialU5BU5D_t1825806119** get_address_of_resultMaterials_7() { return &___resultMaterials_7; }
	inline void set_resultMaterials_7(MB_MultiMaterialU5BU5D_t1825806119* value)
	{
		___resultMaterials_7 = value;
		Il2CppCodeGenWriteBarrier((&___resultMaterials_7), value);
	}

	inline static int32_t get_offset_of_resultMaterialsTexArray_8() { return static_cast<int32_t>(offsetof(MB2_TextureBakeResults_t548408826, ___resultMaterialsTexArray_8)); }
	inline MB_MultiMaterialTexArrayU5BU5D_t3908014132* get_resultMaterialsTexArray_8() const { return ___resultMaterialsTexArray_8; }
	inline MB_MultiMaterialTexArrayU5BU5D_t3908014132** get_address_of_resultMaterialsTexArray_8() { return &___resultMaterialsTexArray_8; }
	inline void set_resultMaterialsTexArray_8(MB_MultiMaterialTexArrayU5BU5D_t3908014132* value)
	{
		___resultMaterialsTexArray_8 = value;
		Il2CppCodeGenWriteBarrier((&___resultMaterialsTexArray_8), value);
	}

	inline static int32_t get_offset_of_doMultiMaterial_9() { return static_cast<int32_t>(offsetof(MB2_TextureBakeResults_t548408826, ___doMultiMaterial_9)); }
	inline bool get_doMultiMaterial_9() const { return ___doMultiMaterial_9; }
	inline bool* get_address_of_doMultiMaterial_9() { return &___doMultiMaterial_9; }
	inline void set_doMultiMaterial_9(bool value)
	{
		___doMultiMaterial_9 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // MB2_TEXTUREBAKERESULTS_T548408826_H
#ifndef ONCOMBINEDTEXTURESCOROUTINEFAIL_T3579762109_H
#define ONCOMBINEDTEXTURESCOROUTINEFAIL_T3579762109_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// MB3_TextureBaker/OnCombinedTexturesCoroutineFail
struct  OnCombinedTexturesCoroutineFail_t3579762109  : public MulticastDelegate_t
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // ONCOMBINEDTEXTURESCOROUTINEFAIL_T3579762109_H
#ifndef ONCOMBINEDTEXTURESCOROUTINESUCCESS_T3112909344_H
#define ONCOMBINEDTEXTURESCOROUTINESUCCESS_T3112909344_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// MB3_TextureBaker/OnCombinedTexturesCoroutineSuccess
struct  OnCombinedTexturesCoroutineSuccess_t3112909344  : public MulticastDelegate_t
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // ONCOMBINEDTEXTURESCOROUTINESUCCESS_T3112909344_H
#ifndef ASYNCCALLBACK_T3962456242_H
#define ASYNCCALLBACK_T3962456242_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.AsyncCallback
struct  AsyncCallback_t3962456242  : public MulticastDelegate_t
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // ASYNCCALLBACK_T3962456242_H
#ifndef BEHAVIOUR_T1437897464_H
#define BEHAVIOUR_T1437897464_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.Behaviour
struct  Behaviour_t1437897464  : public Component_t1923634451
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // BEHAVIOUR_T1437897464_H
#ifndef RENDERTEXTURE_T2108887433_H
#define RENDERTEXTURE_T2108887433_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.RenderTexture
struct  RenderTexture_t2108887433  : public Texture_t3661962703
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // RENDERTEXTURE_T2108887433_H
#ifndef TEXTURE2D_T3840446185_H
#define TEXTURE2D_T3840446185_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.Texture2D
struct  Texture2D_t3840446185  : public Texture_t3661962703
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // TEXTURE2D_T3840446185_H
#ifndef TEXTURE2DARRAY_T4044506685_H
#define TEXTURE2DARRAY_T4044506685_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.Texture2DArray
struct  Texture2DArray_t4044506685  : public Texture_t3661962703
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // TEXTURE2DARRAY_T4044506685_H
#ifndef TRANSFORM_T3600365921_H
#define TRANSFORM_T3600365921_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.Transform
struct  Transform_t3600365921  : public Component_t1923634451
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // TRANSFORM_T3600365921_H
#ifndef CAMERA_T4157153871_H
#define CAMERA_T4157153871_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.Camera
struct  Camera_t4157153871  : public Behaviour_t1437897464
{
public:

public:
};

struct Camera_t4157153871_StaticFields
{
public:
	// UnityEngine.Camera/CameraCallback UnityEngine.Camera::onPreCull
	CameraCallback_t190067161 * ___onPreCull_4;
	// UnityEngine.Camera/CameraCallback UnityEngine.Camera::onPreRender
	CameraCallback_t190067161 * ___onPreRender_5;
	// UnityEngine.Camera/CameraCallback UnityEngine.Camera::onPostRender
	CameraCallback_t190067161 * ___onPostRender_6;

public:
	inline static int32_t get_offset_of_onPreCull_4() { return static_cast<int32_t>(offsetof(Camera_t4157153871_StaticFields, ___onPreCull_4)); }
	inline CameraCallback_t190067161 * get_onPreCull_4() const { return ___onPreCull_4; }
	inline CameraCallback_t190067161 ** get_address_of_onPreCull_4() { return &___onPreCull_4; }
	inline void set_onPreCull_4(CameraCallback_t190067161 * value)
	{
		___onPreCull_4 = value;
		Il2CppCodeGenWriteBarrier((&___onPreCull_4), value);
	}

	inline static int32_t get_offset_of_onPreRender_5() { return static_cast<int32_t>(offsetof(Camera_t4157153871_StaticFields, ___onPreRender_5)); }
	inline CameraCallback_t190067161 * get_onPreRender_5() const { return ___onPreRender_5; }
	inline CameraCallback_t190067161 ** get_address_of_onPreRender_5() { return &___onPreRender_5; }
	inline void set_onPreRender_5(CameraCallback_t190067161 * value)
	{
		___onPreRender_5 = value;
		Il2CppCodeGenWriteBarrier((&___onPreRender_5), value);
	}

	inline static int32_t get_offset_of_onPostRender_6() { return static_cast<int32_t>(offsetof(Camera_t4157153871_StaticFields, ___onPostRender_6)); }
	inline CameraCallback_t190067161 * get_onPostRender_6() const { return ___onPostRender_6; }
	inline CameraCallback_t190067161 ** get_address_of_onPostRender_6() { return &___onPostRender_6; }
	inline void set_onPostRender_6(CameraCallback_t190067161 * value)
	{
		___onPostRender_6 = value;
		Il2CppCodeGenWriteBarrier((&___onPostRender_6), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // CAMERA_T4157153871_H
#ifndef MONOBEHAVIOUR_T3962482529_H
#define MONOBEHAVIOUR_T3962482529_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.MonoBehaviour
struct  MonoBehaviour_t3962482529  : public Behaviour_t1437897464
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // MONOBEHAVIOUR_T3962482529_H
#ifndef MB3_MESHBAKERROOT_T112449141_H
#define MB3_MESHBAKERROOT_T112449141_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// MB3_MeshBakerRoot
struct  MB3_MeshBakerRoot_t112449141  : public MonoBehaviour_t3962482529
{
public:
	// UnityEngine.Vector3 MB3_MeshBakerRoot::sortAxis
	Vector3_t3722313464  ___sortAxis_4;

public:
	inline static int32_t get_offset_of_sortAxis_4() { return static_cast<int32_t>(offsetof(MB3_MeshBakerRoot_t112449141, ___sortAxis_4)); }
	inline Vector3_t3722313464  get_sortAxis_4() const { return ___sortAxis_4; }
	inline Vector3_t3722313464 * get_address_of_sortAxis_4() { return &___sortAxis_4; }
	inline void set_sortAxis_4(Vector3_t3722313464  value)
	{
		___sortAxis_4 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // MB3_MESHBAKERROOT_T112449141_H
#ifndef MB3_MESHBAKERCOMMON_T4275912861_H
#define MB3_MESHBAKERCOMMON_T4275912861_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// MB3_MeshBakerCommon
struct  MB3_MeshBakerCommon_t4275912861  : public MB3_MeshBakerRoot_t112449141
{
public:
	// System.Collections.Generic.List`1<UnityEngine.GameObject> MB3_MeshBakerCommon::objsToMesh
	List_1_t2585711361 * ___objsToMesh_5;
	// System.Boolean MB3_MeshBakerCommon::useObjsToMeshFromTexBaker
	bool ___useObjsToMeshFromTexBaker_6;
	// System.Boolean MB3_MeshBakerCommon::clearBuffersAfterBake
	bool ___clearBuffersAfterBake_7;
	// System.String MB3_MeshBakerCommon::bakeAssetsInPlaceFolderPath
	String_t* ___bakeAssetsInPlaceFolderPath_8;
	// UnityEngine.GameObject MB3_MeshBakerCommon::resultPrefab
	GameObject_t1113636619 * ___resultPrefab_9;
	// System.Boolean MB3_MeshBakerCommon::resultPrefabLeaveInstanceInSceneAfterBake
	bool ___resultPrefabLeaveInstanceInSceneAfterBake_10;
	// UnityEngine.Transform MB3_MeshBakerCommon::parentSceneObject
	Transform_t3600365921 * ___parentSceneObject_11;

public:
	inline static int32_t get_offset_of_objsToMesh_5() { return static_cast<int32_t>(offsetof(MB3_MeshBakerCommon_t4275912861, ___objsToMesh_5)); }
	inline List_1_t2585711361 * get_objsToMesh_5() const { return ___objsToMesh_5; }
	inline List_1_t2585711361 ** get_address_of_objsToMesh_5() { return &___objsToMesh_5; }
	inline void set_objsToMesh_5(List_1_t2585711361 * value)
	{
		___objsToMesh_5 = value;
		Il2CppCodeGenWriteBarrier((&___objsToMesh_5), value);
	}

	inline static int32_t get_offset_of_useObjsToMeshFromTexBaker_6() { return static_cast<int32_t>(offsetof(MB3_MeshBakerCommon_t4275912861, ___useObjsToMeshFromTexBaker_6)); }
	inline bool get_useObjsToMeshFromTexBaker_6() const { return ___useObjsToMeshFromTexBaker_6; }
	inline bool* get_address_of_useObjsToMeshFromTexBaker_6() { return &___useObjsToMeshFromTexBaker_6; }
	inline void set_useObjsToMeshFromTexBaker_6(bool value)
	{
		___useObjsToMeshFromTexBaker_6 = value;
	}

	inline static int32_t get_offset_of_clearBuffersAfterBake_7() { return static_cast<int32_t>(offsetof(MB3_MeshBakerCommon_t4275912861, ___clearBuffersAfterBake_7)); }
	inline bool get_clearBuffersAfterBake_7() const { return ___clearBuffersAfterBake_7; }
	inline bool* get_address_of_clearBuffersAfterBake_7() { return &___clearBuffersAfterBake_7; }
	inline void set_clearBuffersAfterBake_7(bool value)
	{
		___clearBuffersAfterBake_7 = value;
	}

	inline static int32_t get_offset_of_bakeAssetsInPlaceFolderPath_8() { return static_cast<int32_t>(offsetof(MB3_MeshBakerCommon_t4275912861, ___bakeAssetsInPlaceFolderPath_8)); }
	inline String_t* get_bakeAssetsInPlaceFolderPath_8() const { return ___bakeAssetsInPlaceFolderPath_8; }
	inline String_t** get_address_of_bakeAssetsInPlaceFolderPath_8() { return &___bakeAssetsInPlaceFolderPath_8; }
	inline void set_bakeAssetsInPlaceFolderPath_8(String_t* value)
	{
		___bakeAssetsInPlaceFolderPath_8 = value;
		Il2CppCodeGenWriteBarrier((&___bakeAssetsInPlaceFolderPath_8), value);
	}

	inline static int32_t get_offset_of_resultPrefab_9() { return static_cast<int32_t>(offsetof(MB3_MeshBakerCommon_t4275912861, ___resultPrefab_9)); }
	inline GameObject_t1113636619 * get_resultPrefab_9() const { return ___resultPrefab_9; }
	inline GameObject_t1113636619 ** get_address_of_resultPrefab_9() { return &___resultPrefab_9; }
	inline void set_resultPrefab_9(GameObject_t1113636619 * value)
	{
		___resultPrefab_9 = value;
		Il2CppCodeGenWriteBarrier((&___resultPrefab_9), value);
	}

	inline static int32_t get_offset_of_resultPrefabLeaveInstanceInSceneAfterBake_10() { return static_cast<int32_t>(offsetof(MB3_MeshBakerCommon_t4275912861, ___resultPrefabLeaveInstanceInSceneAfterBake_10)); }
	inline bool get_resultPrefabLeaveInstanceInSceneAfterBake_10() const { return ___resultPrefabLeaveInstanceInSceneAfterBake_10; }
	inline bool* get_address_of_resultPrefabLeaveInstanceInSceneAfterBake_10() { return &___resultPrefabLeaveInstanceInSceneAfterBake_10; }
	inline void set_resultPrefabLeaveInstanceInSceneAfterBake_10(bool value)
	{
		___resultPrefabLeaveInstanceInSceneAfterBake_10 = value;
	}

	inline static int32_t get_offset_of_parentSceneObject_11() { return static_cast<int32_t>(offsetof(MB3_MeshBakerCommon_t4275912861, ___parentSceneObject_11)); }
	inline Transform_t3600365921 * get_parentSceneObject_11() const { return ___parentSceneObject_11; }
	inline Transform_t3600365921 ** get_address_of_parentSceneObject_11() { return &___parentSceneObject_11; }
	inline void set_parentSceneObject_11(Transform_t3600365921 * value)
	{
		___parentSceneObject_11 = value;
		Il2CppCodeGenWriteBarrier((&___parentSceneObject_11), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // MB3_MESHBAKERCOMMON_T4275912861_H
#ifndef MB3_TEXTUREBAKER_T37954774_H
#define MB3_TEXTUREBAKER_T37954774_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// MB3_TextureBaker
struct  MB3_TextureBaker_t37954774  : public MB3_MeshBakerRoot_t112449141
{
public:
	// DigitalOpus.MB.Core.MB2_LogLevel MB3_TextureBaker::LOG_LEVEL
	int32_t ___LOG_LEVEL_5;
	// MB2_TextureBakeResults MB3_TextureBaker::_textureBakeResults
	MB2_TextureBakeResults_t548408826 * ____textureBakeResults_6;
	// System.Int32 MB3_TextureBaker::_atlasPadding
	int32_t ____atlasPadding_7;
	// System.Int32 MB3_TextureBaker::_maxAtlasSize
	int32_t ____maxAtlasSize_8;
	// System.Boolean MB3_TextureBaker::_useMaxAtlasWidthOverride
	bool ____useMaxAtlasWidthOverride_9;
	// System.Int32 MB3_TextureBaker::_maxAtlasWidthOverride
	int32_t ____maxAtlasWidthOverride_10;
	// System.Boolean MB3_TextureBaker::_useMaxAtlasHeightOverride
	bool ____useMaxAtlasHeightOverride_11;
	// System.Int32 MB3_TextureBaker::_maxAtlasHeightOverride
	int32_t ____maxAtlasHeightOverride_12;
	// System.Boolean MB3_TextureBaker::_resizePowerOfTwoTextures
	bool ____resizePowerOfTwoTextures_13;
	// System.Boolean MB3_TextureBaker::_fixOutOfBoundsUVs
	bool ____fixOutOfBoundsUVs_14;
	// System.Int32 MB3_TextureBaker::_maxTilingBakeSize
	int32_t ____maxTilingBakeSize_15;
	// DigitalOpus.MB.Core.MB2_PackingAlgorithmEnum MB3_TextureBaker::_packingAlgorithm
	int32_t ____packingAlgorithm_16;
	// System.Int32 MB3_TextureBaker::_layerTexturePackerFastMesh
	int32_t ____layerTexturePackerFastMesh_17;
	// System.Boolean MB3_TextureBaker::_meshBakerTexturePackerForcePowerOfTwo
	bool ____meshBakerTexturePackerForcePowerOfTwo_18;
	// System.Collections.Generic.List`1<DigitalOpus.MB.Core.ShaderTextureProperty> MB3_TextureBaker::_customShaderProperties
	List_1_t2795786026 * ____customShaderProperties_19;
	// System.Collections.Generic.List`1<System.String> MB3_TextureBaker::_customShaderPropNames_Depricated
	List_1_t3319525431 * ____customShaderPropNames_Depricated_20;
	// MB2_TextureBakeResults/ResultType MB3_TextureBaker::_resultType
	int32_t ____resultType_21;
	// System.Boolean MB3_TextureBaker::_doMultiMaterial
	bool ____doMultiMaterial_22;
	// System.Boolean MB3_TextureBaker::_doMultiMaterialSplitAtlasesIfTooBig
	bool ____doMultiMaterialSplitAtlasesIfTooBig_23;
	// System.Boolean MB3_TextureBaker::_doMultiMaterialSplitAtlasesIfOBUVs
	bool ____doMultiMaterialSplitAtlasesIfOBUVs_24;
	// UnityEngine.Material MB3_TextureBaker::_resultMaterial
	Material_t340375123 * ____resultMaterial_25;
	// System.Boolean MB3_TextureBaker::_considerNonTextureProperties
	bool ____considerNonTextureProperties_26;
	// System.Boolean MB3_TextureBaker::_doSuggestTreatment
	bool ____doSuggestTreatment_27;
	// DigitalOpus.MB.Core.MB3_TextureCombiner/CreateAtlasesCoroutineResult MB3_TextureBaker::_coroutineResult
	CreateAtlasesCoroutineResult_t3502510657 * ____coroutineResult_28;
	// MB_MultiMaterial[] MB3_TextureBaker::resultMaterials
	MB_MultiMaterialU5BU5D_t1825806119* ___resultMaterials_29;
	// MB_MultiMaterialTexArray[] MB3_TextureBaker::resultMaterialsTexArray
	MB_MultiMaterialTexArrayU5BU5D_t3908014132* ___resultMaterialsTexArray_30;
	// MB_TextureArrayFormatSet[] MB3_TextureBaker::textureArrayOutputFormats
	MB_TextureArrayFormatSetU5BU5D_t3992808264* ___textureArrayOutputFormats_31;
	// System.Collections.Generic.List`1<UnityEngine.GameObject> MB3_TextureBaker::objsToMesh
	List_1_t2585711361 * ___objsToMesh_32;
	// MB3_TextureBaker/OnCombinedTexturesCoroutineSuccess MB3_TextureBaker::onBuiltAtlasesSuccess
	OnCombinedTexturesCoroutineSuccess_t3112909344 * ___onBuiltAtlasesSuccess_33;
	// MB3_TextureBaker/OnCombinedTexturesCoroutineFail MB3_TextureBaker::onBuiltAtlasesFail
	OnCombinedTexturesCoroutineFail_t3579762109 * ___onBuiltAtlasesFail_34;
	// MB_AtlasesAndRects[] MB3_TextureBaker::OnCombinedTexturesCoroutineAtlasesAndRects
	MB_AtlasesAndRectsU5BU5D_t4190144822* ___OnCombinedTexturesCoroutineAtlasesAndRects_35;

public:
	inline static int32_t get_offset_of_LOG_LEVEL_5() { return static_cast<int32_t>(offsetof(MB3_TextureBaker_t37954774, ___LOG_LEVEL_5)); }
	inline int32_t get_LOG_LEVEL_5() const { return ___LOG_LEVEL_5; }
	inline int32_t* get_address_of_LOG_LEVEL_5() { return &___LOG_LEVEL_5; }
	inline void set_LOG_LEVEL_5(int32_t value)
	{
		___LOG_LEVEL_5 = value;
	}

	inline static int32_t get_offset_of__textureBakeResults_6() { return static_cast<int32_t>(offsetof(MB3_TextureBaker_t37954774, ____textureBakeResults_6)); }
	inline MB2_TextureBakeResults_t548408826 * get__textureBakeResults_6() const { return ____textureBakeResults_6; }
	inline MB2_TextureBakeResults_t548408826 ** get_address_of__textureBakeResults_6() { return &____textureBakeResults_6; }
	inline void set__textureBakeResults_6(MB2_TextureBakeResults_t548408826 * value)
	{
		____textureBakeResults_6 = value;
		Il2CppCodeGenWriteBarrier((&____textureBakeResults_6), value);
	}

	inline static int32_t get_offset_of__atlasPadding_7() { return static_cast<int32_t>(offsetof(MB3_TextureBaker_t37954774, ____atlasPadding_7)); }
	inline int32_t get__atlasPadding_7() const { return ____atlasPadding_7; }
	inline int32_t* get_address_of__atlasPadding_7() { return &____atlasPadding_7; }
	inline void set__atlasPadding_7(int32_t value)
	{
		____atlasPadding_7 = value;
	}

	inline static int32_t get_offset_of__maxAtlasSize_8() { return static_cast<int32_t>(offsetof(MB3_TextureBaker_t37954774, ____maxAtlasSize_8)); }
	inline int32_t get__maxAtlasSize_8() const { return ____maxAtlasSize_8; }
	inline int32_t* get_address_of__maxAtlasSize_8() { return &____maxAtlasSize_8; }
	inline void set__maxAtlasSize_8(int32_t value)
	{
		____maxAtlasSize_8 = value;
	}

	inline static int32_t get_offset_of__useMaxAtlasWidthOverride_9() { return static_cast<int32_t>(offsetof(MB3_TextureBaker_t37954774, ____useMaxAtlasWidthOverride_9)); }
	inline bool get__useMaxAtlasWidthOverride_9() const { return ____useMaxAtlasWidthOverride_9; }
	inline bool* get_address_of__useMaxAtlasWidthOverride_9() { return &____useMaxAtlasWidthOverride_9; }
	inline void set__useMaxAtlasWidthOverride_9(bool value)
	{
		____useMaxAtlasWidthOverride_9 = value;
	}

	inline static int32_t get_offset_of__maxAtlasWidthOverride_10() { return static_cast<int32_t>(offsetof(MB3_TextureBaker_t37954774, ____maxAtlasWidthOverride_10)); }
	inline int32_t get__maxAtlasWidthOverride_10() const { return ____maxAtlasWidthOverride_10; }
	inline int32_t* get_address_of__maxAtlasWidthOverride_10() { return &____maxAtlasWidthOverride_10; }
	inline void set__maxAtlasWidthOverride_10(int32_t value)
	{
		____maxAtlasWidthOverride_10 = value;
	}

	inline static int32_t get_offset_of__useMaxAtlasHeightOverride_11() { return static_cast<int32_t>(offsetof(MB3_TextureBaker_t37954774, ____useMaxAtlasHeightOverride_11)); }
	inline bool get__useMaxAtlasHeightOverride_11() const { return ____useMaxAtlasHeightOverride_11; }
	inline bool* get_address_of__useMaxAtlasHeightOverride_11() { return &____useMaxAtlasHeightOverride_11; }
	inline void set__useMaxAtlasHeightOverride_11(bool value)
	{
		____useMaxAtlasHeightOverride_11 = value;
	}

	inline static int32_t get_offset_of__maxAtlasHeightOverride_12() { return static_cast<int32_t>(offsetof(MB3_TextureBaker_t37954774, ____maxAtlasHeightOverride_12)); }
	inline int32_t get__maxAtlasHeightOverride_12() const { return ____maxAtlasHeightOverride_12; }
	inline int32_t* get_address_of__maxAtlasHeightOverride_12() { return &____maxAtlasHeightOverride_12; }
	inline void set__maxAtlasHeightOverride_12(int32_t value)
	{
		____maxAtlasHeightOverride_12 = value;
	}

	inline static int32_t get_offset_of__resizePowerOfTwoTextures_13() { return static_cast<int32_t>(offsetof(MB3_TextureBaker_t37954774, ____resizePowerOfTwoTextures_13)); }
	inline bool get__resizePowerOfTwoTextures_13() const { return ____resizePowerOfTwoTextures_13; }
	inline bool* get_address_of__resizePowerOfTwoTextures_13() { return &____resizePowerOfTwoTextures_13; }
	inline void set__resizePowerOfTwoTextures_13(bool value)
	{
		____resizePowerOfTwoTextures_13 = value;
	}

	inline static int32_t get_offset_of__fixOutOfBoundsUVs_14() { return static_cast<int32_t>(offsetof(MB3_TextureBaker_t37954774, ____fixOutOfBoundsUVs_14)); }
	inline bool get__fixOutOfBoundsUVs_14() const { return ____fixOutOfBoundsUVs_14; }
	inline bool* get_address_of__fixOutOfBoundsUVs_14() { return &____fixOutOfBoundsUVs_14; }
	inline void set__fixOutOfBoundsUVs_14(bool value)
	{
		____fixOutOfBoundsUVs_14 = value;
	}

	inline static int32_t get_offset_of__maxTilingBakeSize_15() { return static_cast<int32_t>(offsetof(MB3_TextureBaker_t37954774, ____maxTilingBakeSize_15)); }
	inline int32_t get__maxTilingBakeSize_15() const { return ____maxTilingBakeSize_15; }
	inline int32_t* get_address_of__maxTilingBakeSize_15() { return &____maxTilingBakeSize_15; }
	inline void set__maxTilingBakeSize_15(int32_t value)
	{
		____maxTilingBakeSize_15 = value;
	}

	inline static int32_t get_offset_of__packingAlgorithm_16() { return static_cast<int32_t>(offsetof(MB3_TextureBaker_t37954774, ____packingAlgorithm_16)); }
	inline int32_t get__packingAlgorithm_16() const { return ____packingAlgorithm_16; }
	inline int32_t* get_address_of__packingAlgorithm_16() { return &____packingAlgorithm_16; }
	inline void set__packingAlgorithm_16(int32_t value)
	{
		____packingAlgorithm_16 = value;
	}

	inline static int32_t get_offset_of__layerTexturePackerFastMesh_17() { return static_cast<int32_t>(offsetof(MB3_TextureBaker_t37954774, ____layerTexturePackerFastMesh_17)); }
	inline int32_t get__layerTexturePackerFastMesh_17() const { return ____layerTexturePackerFastMesh_17; }
	inline int32_t* get_address_of__layerTexturePackerFastMesh_17() { return &____layerTexturePackerFastMesh_17; }
	inline void set__layerTexturePackerFastMesh_17(int32_t value)
	{
		____layerTexturePackerFastMesh_17 = value;
	}

	inline static int32_t get_offset_of__meshBakerTexturePackerForcePowerOfTwo_18() { return static_cast<int32_t>(offsetof(MB3_TextureBaker_t37954774, ____meshBakerTexturePackerForcePowerOfTwo_18)); }
	inline bool get__meshBakerTexturePackerForcePowerOfTwo_18() const { return ____meshBakerTexturePackerForcePowerOfTwo_18; }
	inline bool* get_address_of__meshBakerTexturePackerForcePowerOfTwo_18() { return &____meshBakerTexturePackerForcePowerOfTwo_18; }
	inline void set__meshBakerTexturePackerForcePowerOfTwo_18(bool value)
	{
		____meshBakerTexturePackerForcePowerOfTwo_18 = value;
	}

	inline static int32_t get_offset_of__customShaderProperties_19() { return static_cast<int32_t>(offsetof(MB3_TextureBaker_t37954774, ____customShaderProperties_19)); }
	inline List_1_t2795786026 * get__customShaderProperties_19() const { return ____customShaderProperties_19; }
	inline List_1_t2795786026 ** get_address_of__customShaderProperties_19() { return &____customShaderProperties_19; }
	inline void set__customShaderProperties_19(List_1_t2795786026 * value)
	{
		____customShaderProperties_19 = value;
		Il2CppCodeGenWriteBarrier((&____customShaderProperties_19), value);
	}

	inline static int32_t get_offset_of__customShaderPropNames_Depricated_20() { return static_cast<int32_t>(offsetof(MB3_TextureBaker_t37954774, ____customShaderPropNames_Depricated_20)); }
	inline List_1_t3319525431 * get__customShaderPropNames_Depricated_20() const { return ____customShaderPropNames_Depricated_20; }
	inline List_1_t3319525431 ** get_address_of__customShaderPropNames_Depricated_20() { return &____customShaderPropNames_Depricated_20; }
	inline void set__customShaderPropNames_Depricated_20(List_1_t3319525431 * value)
	{
		____customShaderPropNames_Depricated_20 = value;
		Il2CppCodeGenWriteBarrier((&____customShaderPropNames_Depricated_20), value);
	}

	inline static int32_t get_offset_of__resultType_21() { return static_cast<int32_t>(offsetof(MB3_TextureBaker_t37954774, ____resultType_21)); }
	inline int32_t get__resultType_21() const { return ____resultType_21; }
	inline int32_t* get_address_of__resultType_21() { return &____resultType_21; }
	inline void set__resultType_21(int32_t value)
	{
		____resultType_21 = value;
	}

	inline static int32_t get_offset_of__doMultiMaterial_22() { return static_cast<int32_t>(offsetof(MB3_TextureBaker_t37954774, ____doMultiMaterial_22)); }
	inline bool get__doMultiMaterial_22() const { return ____doMultiMaterial_22; }
	inline bool* get_address_of__doMultiMaterial_22() { return &____doMultiMaterial_22; }
	inline void set__doMultiMaterial_22(bool value)
	{
		____doMultiMaterial_22 = value;
	}

	inline static int32_t get_offset_of__doMultiMaterialSplitAtlasesIfTooBig_23() { return static_cast<int32_t>(offsetof(MB3_TextureBaker_t37954774, ____doMultiMaterialSplitAtlasesIfTooBig_23)); }
	inline bool get__doMultiMaterialSplitAtlasesIfTooBig_23() const { return ____doMultiMaterialSplitAtlasesIfTooBig_23; }
	inline bool* get_address_of__doMultiMaterialSplitAtlasesIfTooBig_23() { return &____doMultiMaterialSplitAtlasesIfTooBig_23; }
	inline void set__doMultiMaterialSplitAtlasesIfTooBig_23(bool value)
	{
		____doMultiMaterialSplitAtlasesIfTooBig_23 = value;
	}

	inline static int32_t get_offset_of__doMultiMaterialSplitAtlasesIfOBUVs_24() { return static_cast<int32_t>(offsetof(MB3_TextureBaker_t37954774, ____doMultiMaterialSplitAtlasesIfOBUVs_24)); }
	inline bool get__doMultiMaterialSplitAtlasesIfOBUVs_24() const { return ____doMultiMaterialSplitAtlasesIfOBUVs_24; }
	inline bool* get_address_of__doMultiMaterialSplitAtlasesIfOBUVs_24() { return &____doMultiMaterialSplitAtlasesIfOBUVs_24; }
	inline void set__doMultiMaterialSplitAtlasesIfOBUVs_24(bool value)
	{
		____doMultiMaterialSplitAtlasesIfOBUVs_24 = value;
	}

	inline static int32_t get_offset_of__resultMaterial_25() { return static_cast<int32_t>(offsetof(MB3_TextureBaker_t37954774, ____resultMaterial_25)); }
	inline Material_t340375123 * get__resultMaterial_25() const { return ____resultMaterial_25; }
	inline Material_t340375123 ** get_address_of__resultMaterial_25() { return &____resultMaterial_25; }
	inline void set__resultMaterial_25(Material_t340375123 * value)
	{
		____resultMaterial_25 = value;
		Il2CppCodeGenWriteBarrier((&____resultMaterial_25), value);
	}

	inline static int32_t get_offset_of__considerNonTextureProperties_26() { return static_cast<int32_t>(offsetof(MB3_TextureBaker_t37954774, ____considerNonTextureProperties_26)); }
	inline bool get__considerNonTextureProperties_26() const { return ____considerNonTextureProperties_26; }
	inline bool* get_address_of__considerNonTextureProperties_26() { return &____considerNonTextureProperties_26; }
	inline void set__considerNonTextureProperties_26(bool value)
	{
		____considerNonTextureProperties_26 = value;
	}

	inline static int32_t get_offset_of__doSuggestTreatment_27() { return static_cast<int32_t>(offsetof(MB3_TextureBaker_t37954774, ____doSuggestTreatment_27)); }
	inline bool get__doSuggestTreatment_27() const { return ____doSuggestTreatment_27; }
	inline bool* get_address_of__doSuggestTreatment_27() { return &____doSuggestTreatment_27; }
	inline void set__doSuggestTreatment_27(bool value)
	{
		____doSuggestTreatment_27 = value;
	}

	inline static int32_t get_offset_of__coroutineResult_28() { return static_cast<int32_t>(offsetof(MB3_TextureBaker_t37954774, ____coroutineResult_28)); }
	inline CreateAtlasesCoroutineResult_t3502510657 * get__coroutineResult_28() const { return ____coroutineResult_28; }
	inline CreateAtlasesCoroutineResult_t3502510657 ** get_address_of__coroutineResult_28() { return &____coroutineResult_28; }
	inline void set__coroutineResult_28(CreateAtlasesCoroutineResult_t3502510657 * value)
	{
		____coroutineResult_28 = value;
		Il2CppCodeGenWriteBarrier((&____coroutineResult_28), value);
	}

	inline static int32_t get_offset_of_resultMaterials_29() { return static_cast<int32_t>(offsetof(MB3_TextureBaker_t37954774, ___resultMaterials_29)); }
	inline MB_MultiMaterialU5BU5D_t1825806119* get_resultMaterials_29() const { return ___resultMaterials_29; }
	inline MB_MultiMaterialU5BU5D_t1825806119** get_address_of_resultMaterials_29() { return &___resultMaterials_29; }
	inline void set_resultMaterials_29(MB_MultiMaterialU5BU5D_t1825806119* value)
	{
		___resultMaterials_29 = value;
		Il2CppCodeGenWriteBarrier((&___resultMaterials_29), value);
	}

	inline static int32_t get_offset_of_resultMaterialsTexArray_30() { return static_cast<int32_t>(offsetof(MB3_TextureBaker_t37954774, ___resultMaterialsTexArray_30)); }
	inline MB_MultiMaterialTexArrayU5BU5D_t3908014132* get_resultMaterialsTexArray_30() const { return ___resultMaterialsTexArray_30; }
	inline MB_MultiMaterialTexArrayU5BU5D_t3908014132** get_address_of_resultMaterialsTexArray_30() { return &___resultMaterialsTexArray_30; }
	inline void set_resultMaterialsTexArray_30(MB_MultiMaterialTexArrayU5BU5D_t3908014132* value)
	{
		___resultMaterialsTexArray_30 = value;
		Il2CppCodeGenWriteBarrier((&___resultMaterialsTexArray_30), value);
	}

	inline static int32_t get_offset_of_textureArrayOutputFormats_31() { return static_cast<int32_t>(offsetof(MB3_TextureBaker_t37954774, ___textureArrayOutputFormats_31)); }
	inline MB_TextureArrayFormatSetU5BU5D_t3992808264* get_textureArrayOutputFormats_31() const { return ___textureArrayOutputFormats_31; }
	inline MB_TextureArrayFormatSetU5BU5D_t3992808264** get_address_of_textureArrayOutputFormats_31() { return &___textureArrayOutputFormats_31; }
	inline void set_textureArrayOutputFormats_31(MB_TextureArrayFormatSetU5BU5D_t3992808264* value)
	{
		___textureArrayOutputFormats_31 = value;
		Il2CppCodeGenWriteBarrier((&___textureArrayOutputFormats_31), value);
	}

	inline static int32_t get_offset_of_objsToMesh_32() { return static_cast<int32_t>(offsetof(MB3_TextureBaker_t37954774, ___objsToMesh_32)); }
	inline List_1_t2585711361 * get_objsToMesh_32() const { return ___objsToMesh_32; }
	inline List_1_t2585711361 ** get_address_of_objsToMesh_32() { return &___objsToMesh_32; }
	inline void set_objsToMesh_32(List_1_t2585711361 * value)
	{
		___objsToMesh_32 = value;
		Il2CppCodeGenWriteBarrier((&___objsToMesh_32), value);
	}

	inline static int32_t get_offset_of_onBuiltAtlasesSuccess_33() { return static_cast<int32_t>(offsetof(MB3_TextureBaker_t37954774, ___onBuiltAtlasesSuccess_33)); }
	inline OnCombinedTexturesCoroutineSuccess_t3112909344 * get_onBuiltAtlasesSuccess_33() const { return ___onBuiltAtlasesSuccess_33; }
	inline OnCombinedTexturesCoroutineSuccess_t3112909344 ** get_address_of_onBuiltAtlasesSuccess_33() { return &___onBuiltAtlasesSuccess_33; }
	inline void set_onBuiltAtlasesSuccess_33(OnCombinedTexturesCoroutineSuccess_t3112909344 * value)
	{
		___onBuiltAtlasesSuccess_33 = value;
		Il2CppCodeGenWriteBarrier((&___onBuiltAtlasesSuccess_33), value);
	}

	inline static int32_t get_offset_of_onBuiltAtlasesFail_34() { return static_cast<int32_t>(offsetof(MB3_TextureBaker_t37954774, ___onBuiltAtlasesFail_34)); }
	inline OnCombinedTexturesCoroutineFail_t3579762109 * get_onBuiltAtlasesFail_34() const { return ___onBuiltAtlasesFail_34; }
	inline OnCombinedTexturesCoroutineFail_t3579762109 ** get_address_of_onBuiltAtlasesFail_34() { return &___onBuiltAtlasesFail_34; }
	inline void set_onBuiltAtlasesFail_34(OnCombinedTexturesCoroutineFail_t3579762109 * value)
	{
		___onBuiltAtlasesFail_34 = value;
		Il2CppCodeGenWriteBarrier((&___onBuiltAtlasesFail_34), value);
	}

	inline static int32_t get_offset_of_OnCombinedTexturesCoroutineAtlasesAndRects_35() { return static_cast<int32_t>(offsetof(MB3_TextureBaker_t37954774, ___OnCombinedTexturesCoroutineAtlasesAndRects_35)); }
	inline MB_AtlasesAndRectsU5BU5D_t4190144822* get_OnCombinedTexturesCoroutineAtlasesAndRects_35() const { return ___OnCombinedTexturesCoroutineAtlasesAndRects_35; }
	inline MB_AtlasesAndRectsU5BU5D_t4190144822** get_address_of_OnCombinedTexturesCoroutineAtlasesAndRects_35() { return &___OnCombinedTexturesCoroutineAtlasesAndRects_35; }
	inline void set_OnCombinedTexturesCoroutineAtlasesAndRects_35(MB_AtlasesAndRectsU5BU5D_t4190144822* value)
	{
		___OnCombinedTexturesCoroutineAtlasesAndRects_35 = value;
		Il2CppCodeGenWriteBarrier((&___OnCombinedTexturesCoroutineAtlasesAndRects_35), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // MB3_TEXTUREBAKER_T37954774_H
// UnityEngine.Material[]
struct MaterialU5BU5D_t561872642  : public RuntimeArray
{
public:
	ALIGN_FIELD (8) Material_t340375123 * m_Items[1];

public:
	inline Material_t340375123 * GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline Material_t340375123 ** GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, Material_t340375123 * value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier(m_Items + index, value);
	}
	inline Material_t340375123 * GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline Material_t340375123 ** GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, Material_t340375123 * value)
	{
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier(m_Items + index, value);
	}
};
// MB_AtlasesAndRects[]
struct MB_AtlasesAndRectsU5BU5D_t4190144822  : public RuntimeArray
{
public:
	ALIGN_FIELD (8) MB_AtlasesAndRects_t2070141231 * m_Items[1];

public:
	inline MB_AtlasesAndRects_t2070141231 * GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline MB_AtlasesAndRects_t2070141231 ** GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, MB_AtlasesAndRects_t2070141231 * value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier(m_Items + index, value);
	}
	inline MB_AtlasesAndRects_t2070141231 * GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline MB_AtlasesAndRects_t2070141231 ** GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, MB_AtlasesAndRects_t2070141231 * value)
	{
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier(m_Items + index, value);
	}
};
// System.Object[]
struct ObjectU5BU5D_t2843939325  : public RuntimeArray
{
public:
	ALIGN_FIELD (8) RuntimeObject * m_Items[1];

public:
	inline RuntimeObject * GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline RuntimeObject ** GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, RuntimeObject * value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier(m_Items + index, value);
	}
	inline RuntimeObject * GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline RuntimeObject ** GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, RuntimeObject * value)
	{
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier(m_Items + index, value);
	}
};
// MB3_MeshBakerCommon[]
struct MB3_MeshBakerCommonU5BU5D_t1333502032  : public RuntimeArray
{
public:
	ALIGN_FIELD (8) MB3_MeshBakerCommon_t4275912861 * m_Items[1];

public:
	inline MB3_MeshBakerCommon_t4275912861 * GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline MB3_MeshBakerCommon_t4275912861 ** GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, MB3_MeshBakerCommon_t4275912861 * value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier(m_Items + index, value);
	}
	inline MB3_MeshBakerCommon_t4275912861 * GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline MB3_MeshBakerCommon_t4275912861 ** GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, MB3_MeshBakerCommon_t4275912861 * value)
	{
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier(m_Items + index, value);
	}
};
// MB_MultiMaterial[]
struct MB_MultiMaterialU5BU5D_t1825806119  : public RuntimeArray
{
public:
	ALIGN_FIELD (8) MB_MultiMaterial_t1888048978 * m_Items[1];

public:
	inline MB_MultiMaterial_t1888048978 * GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline MB_MultiMaterial_t1888048978 ** GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, MB_MultiMaterial_t1888048978 * value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier(m_Items + index, value);
	}
	inline MB_MultiMaterial_t1888048978 * GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline MB_MultiMaterial_t1888048978 ** GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, MB_MultiMaterial_t1888048978 * value)
	{
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier(m_Items + index, value);
	}
};
// MB_MultiMaterialTexArray[]
struct MB_MultiMaterialTexArrayU5BU5D_t3908014132  : public RuntimeArray
{
public:
	ALIGN_FIELD (8) MB_MultiMaterialTexArray_t1025313673 * m_Items[1];

public:
	inline MB_MultiMaterialTexArray_t1025313673 * GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline MB_MultiMaterialTexArray_t1025313673 ** GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, MB_MultiMaterialTexArray_t1025313673 * value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier(m_Items + index, value);
	}
	inline MB_MultiMaterialTexArray_t1025313673 * GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline MB_MultiMaterialTexArray_t1025313673 ** GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, MB_MultiMaterialTexArray_t1025313673 * value)
	{
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier(m_Items + index, value);
	}
};
// MB_MaterialAndUVRect[]
struct MB_MaterialAndUVRectU5BU5D_t1630039172  : public RuntimeArray
{
public:
	ALIGN_FIELD (8) MB_MaterialAndUVRect_t1611876729 * m_Items[1];

public:
	inline MB_MaterialAndUVRect_t1611876729 * GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline MB_MaterialAndUVRect_t1611876729 ** GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, MB_MaterialAndUVRect_t1611876729 * value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier(m_Items + index, value);
	}
	inline MB_MaterialAndUVRect_t1611876729 * GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline MB_MaterialAndUVRect_t1611876729 ** GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, MB_MaterialAndUVRect_t1611876729 * value)
	{
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier(m_Items + index, value);
	}
};
// MB_TextureArrayResultMaterial[]
struct MB_TextureArrayResultMaterialU5BU5D_t631979971  : public RuntimeArray
{
public:
	ALIGN_FIELD (8) MB_TextureArrayResultMaterial_t1449688550 * m_Items[1];

public:
	inline MB_TextureArrayResultMaterial_t1449688550 * GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline MB_TextureArrayResultMaterial_t1449688550 ** GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, MB_TextureArrayResultMaterial_t1449688550 * value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier(m_Items + index, value);
	}
	inline MB_TextureArrayResultMaterial_t1449688550 * GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline MB_TextureArrayResultMaterial_t1449688550 ** GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, MB_TextureArrayResultMaterial_t1449688550 * value)
	{
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier(m_Items + index, value);
	}
};
// MB_TextureArrayFormatSet[]
struct MB_TextureArrayFormatSetU5BU5D_t3992808264  : public RuntimeArray
{
public:
	ALIGN_FIELD (8) MB_TextureArrayFormatSet_t3246442245 * m_Items[1];

public:
	inline MB_TextureArrayFormatSet_t3246442245 * GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline MB_TextureArrayFormatSet_t3246442245 ** GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, MB_TextureArrayFormatSet_t3246442245 * value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier(m_Items + index, value);
	}
	inline MB_TextureArrayFormatSet_t3246442245 * GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline MB_TextureArrayFormatSet_t3246442245 ** GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, MB_TextureArrayFormatSet_t3246442245 * value)
	{
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier(m_Items + index, value);
	}
};
// System.Delegate[]
struct DelegateU5BU5D_t1703627840  : public RuntimeArray
{
public:
	ALIGN_FIELD (8) Delegate_t1188392813 * m_Items[1];

public:
	inline Delegate_t1188392813 * GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline Delegate_t1188392813 ** GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, Delegate_t1188392813 * value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier(m_Items + index, value);
	}
	inline Delegate_t1188392813 * GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline Delegate_t1188392813 ** GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, Delegate_t1188392813 * value)
	{
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier(m_Items + index, value);
	}
};
// MB_TextureArrayReference[]
struct MB_TextureArrayReferenceU5BU5D_t2256643913  : public RuntimeArray
{
public:
	ALIGN_FIELD (8) MB_TextureArrayReference_t2719925336 * m_Items[1];

public:
	inline MB_TextureArrayReference_t2719925336 * GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline MB_TextureArrayReference_t2719925336 ** GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, MB_TextureArrayReference_t2719925336 * value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier(m_Items + index, value);
	}
	inline MB_TextureArrayReference_t2719925336 * GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline MB_TextureArrayReference_t2719925336 ** GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, MB_TextureArrayReference_t2719925336 * value)
	{
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier(m_Items + index, value);
	}
};
// MB_TextureArrayFormat[]
struct MB_TextureArrayFormatU5BU5D_t1822177050  : public RuntimeArray
{
public:
	ALIGN_FIELD (8) MB_TextureArrayFormat_t4143201819 * m_Items[1];

public:
	inline MB_TextureArrayFormat_t4143201819 * GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline MB_TextureArrayFormat_t4143201819 ** GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, MB_TextureArrayFormat_t4143201819 * value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier(m_Items + index, value);
	}
	inline MB_TextureArrayFormat_t4143201819 * GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline MB_TextureArrayFormat_t4143201819 ** GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, MB_TextureArrayFormat_t4143201819 * value)
	{
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier(m_Items + index, value);
	}
};
// UnityEngine.Rect[]
struct RectU5BU5D_t2936723554  : public RuntimeArray
{
public:
	ALIGN_FIELD (8) Rect_t2360479859  m_Items[1];

public:
	inline Rect_t2360479859  GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline Rect_t2360479859 * GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, Rect_t2360479859  value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
	}
	inline Rect_t2360479859  GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline Rect_t2360479859 * GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, Rect_t2360479859  value)
	{
		m_Items[index] = value;
	}
};
// DigitalOpus.MB.Core.MeshBakerMaterialTexture[]
struct MeshBakerMaterialTextureU5BU5D_t3009043374  : public RuntimeArray
{
public:
	ALIGN_FIELD (8) MeshBakerMaterialTexture_t567627287 * m_Items[1];

public:
	inline MeshBakerMaterialTexture_t567627287 * GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline MeshBakerMaterialTexture_t567627287 ** GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, MeshBakerMaterialTexture_t567627287 * value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier(m_Items + index, value);
	}
	inline MeshBakerMaterialTexture_t567627287 * GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline MeshBakerMaterialTexture_t567627287 ** GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, MeshBakerMaterialTexture_t567627287 * value)
	{
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier(m_Items + index, value);
	}
};
// UnityEngine.Color32[]
struct Color32U5BU5D_t3850468773  : public RuntimeArray
{
public:
	ALIGN_FIELD (8) Color32_t2600501292  m_Items[1];

public:
	inline Color32_t2600501292  GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline Color32_t2600501292 * GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, Color32_t2600501292  value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
	}
	inline Color32_t2600501292  GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline Color32_t2600501292 * GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, Color32_t2600501292  value)
	{
		m_Items[index] = value;
	}
};


// !0 System.Collections.Generic.List`1<System.Object>::get_Item(System.Int32)
extern "C" IL2CPP_METHOD_ATTR RuntimeObject * List_1_get_Item_m1328026504_gshared (List_1_t257213610 * __this, int32_t p0, const RuntimeMethod* method);
// System.Int32 System.Collections.Generic.List`1<System.Object>::get_Count()
extern "C" IL2CPP_METHOD_ATTR int32_t List_1_get_Count_m2934127733_gshared (List_1_t257213610 * __this, const RuntimeMethod* method);
// !!0[] UnityEngine.Component::GetComponentsInChildren<System.Object>()
extern "C" IL2CPP_METHOD_ATTR ObjectU5BU5D_t2843939325* Component_GetComponentsInChildren_TisRuntimeObject_m1521724614_gshared (Component_t1923634451 * __this, const RuntimeMethod* method);
// System.Void System.Collections.Generic.List`1<System.Object>::.ctor()
extern "C" IL2CPP_METHOD_ATTR void List_1__ctor_m2321703786_gshared (List_1_t257213610 * __this, const RuntimeMethod* method);
// System.Void System.Collections.Generic.List`1<System.Object>::Add(!0)
extern "C" IL2CPP_METHOD_ATTR void List_1_Add_m3338814081_gshared (List_1_t257213610 * __this, RuntimeObject * p0, const RuntimeMethod* method);
// System.Void System.Collections.Generic.HashSet`1<System.Object>::.ctor()
extern "C" IL2CPP_METHOD_ATTR void HashSet_1__ctor_m4231804131_gshared (HashSet_1_t1645055638 * __this, const RuntimeMethod* method);
// System.Boolean System.Collections.Generic.HashSet`1<System.Object>::Add(!0)
extern "C" IL2CPP_METHOD_ATTR bool HashSet_1_Add_m1971460364_gshared (HashSet_1_t1645055638 * __this, RuntimeObject * p0, const RuntimeMethod* method);
// System.Void System.Collections.Generic.List`1<System.Object>::Clear()
extern "C" IL2CPP_METHOD_ATTR void List_1_Clear_m3697625829_gshared (List_1_t257213610 * __this, const RuntimeMethod* method);
// !!0 UnityEngine.GameObject::GetComponent<System.Object>()
extern "C" IL2CPP_METHOD_ATTR RuntimeObject * GameObject_GetComponent_TisRuntimeObject_m2049753423_gshared (GameObject_t1113636619 * __this, const RuntimeMethod* method);
// !!0 UnityEngine.Component::GetComponent<System.Object>()
extern "C" IL2CPP_METHOD_ATTR RuntimeObject * Component_GetComponent_TisRuntimeObject_m2906321015_gshared (Component_t1923634451 * __this, const RuntimeMethod* method);

// System.Void System.Object::.ctor()
extern "C" IL2CPP_METHOD_ATTR void Object__ctor_m297566312 (RuntimeObject * __this, const RuntimeMethod* method);
// System.Collections.IEnumerator MB3_TextureBaker::_CreateAtlasesCoroutine(DigitalOpus.MB.Core.ProgressUpdateDelegate,DigitalOpus.MB.Core.MB3_TextureCombiner/CreateAtlasesCoroutineResult,System.Boolean,DigitalOpus.MB.Core.MB2_EditorMethodsInterface,System.Single)
extern "C" IL2CPP_METHOD_ATTR RuntimeObject* MB3_TextureBaker__CreateAtlasesCoroutine_m3167597908 (MB3_TextureBaker_t37954774 * __this, ProgressUpdateDelegate_t883957101 * ___progressInfo0, CreateAtlasesCoroutineResult_t3502510657 * ___coroutineResult1, bool ___saveAtlasesAsAssets2, RuntimeObject* ___editorMethods3, float ___maxTimePerFrame4, const RuntimeMethod* method);
// System.Void MB3_TextureBaker/OnCombinedTexturesCoroutineSuccess::Invoke()
extern "C" IL2CPP_METHOD_ATTR void OnCombinedTexturesCoroutineSuccess_Invoke_m2225395970 (OnCombinedTexturesCoroutineSuccess_t3112909344 * __this, const RuntimeMethod* method);
// System.Void MB3_TextureBaker/OnCombinedTexturesCoroutineFail::Invoke()
extern "C" IL2CPP_METHOD_ATTR void OnCombinedTexturesCoroutineFail_Invoke_m2982341252 (OnCombinedTexturesCoroutineFail_t3579762109 * __this, const RuntimeMethod* method);
// System.Void System.NotSupportedException::.ctor()
extern "C" IL2CPP_METHOD_ATTR void NotSupportedException__ctor_m2730133172 (NotSupportedException_t1314879016 * __this, const RuntimeMethod* method);
// System.Void DigitalOpus.MB.Core.MBVersionConcrete::.ctor()
extern "C" IL2CPP_METHOD_ATTR void MBVersionConcrete__ctor_m1867325870 (MBVersionConcrete_t3658102071 * __this, const RuntimeMethod* method);
// System.Int32 DigitalOpus.MB.Core.MBVersionConcrete::GetMajorVersion()
extern "C" IL2CPP_METHOD_ATTR int32_t MBVersionConcrete_GetMajorVersion_m1920500776 (MBVersionConcrete_t3658102071 * __this, const RuntimeMethod* method);
// System.Int32 DigitalOpus.MB.Core.MBVersionConcrete::GetMinorVersion()
extern "C" IL2CPP_METHOD_ATTR int32_t MBVersionConcrete_GetMinorVersion_m87563562 (MBVersionConcrete_t3658102071 * __this, const RuntimeMethod* method);
// System.Void UnityEngine.Debug::LogError(System.Object)
extern "C" IL2CPP_METHOD_ATTR void Debug_LogError_m2850623458 (RuntimeObject * __this /* static, unused */, RuntimeObject * p0, const RuntimeMethod* method);
// System.Boolean UnityEngine.Application::get_isPlaying()
extern "C" IL2CPP_METHOD_ATTR bool Application_get_isPlaying_m100394690 (RuntimeObject * __this /* static, unused */, const RuntimeMethod* method);
// System.Boolean MB3_MeshBakerRoot::DoCombinedValidate(MB3_MeshBakerRoot,DigitalOpus.MB.Core.MB_ObjsToCombineTypes,DigitalOpus.MB.Core.MB2_EditorMethodsInterface,DigitalOpus.MB.Core.MB2_ValidationLevel)
extern "C" IL2CPP_METHOD_ATTR bool MB3_MeshBakerRoot_DoCombinedValidate_m3430514970 (RuntimeObject * __this /* static, unused */, MB3_MeshBakerRoot_t112449141 * ___mom0, int32_t ___objToCombineType1, RuntimeObject* ___editorMethods2, int32_t ___validationLevel3, const RuntimeMethod* method);
// System.Boolean MB3_TextureBaker::_ValidateResultMaterials()
extern "C" IL2CPP_METHOD_ATTR bool MB3_TextureBaker__ValidateResultMaterials_m2007460450 (MB3_TextureBaker_t37954774 * __this, const RuntimeMethod* method);
// System.Boolean UnityEngine.Object::op_Equality(UnityEngine.Object,UnityEngine.Object)
extern "C" IL2CPP_METHOD_ATTR bool Object_op_Equality_m1810815630 (RuntimeObject * __this /* static, unused */, Object_t631007953 * p0, Object_t631007953 * p1, const RuntimeMethod* method);
// UnityEngine.Shader UnityEngine.Material::get_shader()
extern "C" IL2CPP_METHOD_ATTR Shader_t4151988712 * Material_get_shader_m1331119247 (Material_t340375123 * __this, const RuntimeMethod* method);
// !0 System.Collections.Generic.List`1<UnityEngine.GameObject>::get_Item(System.Int32)
inline GameObject_t1113636619 * List_1_get_Item_m3743125852 (List_1_t2585711361 * __this, int32_t p0, const RuntimeMethod* method)
{
	return ((  GameObject_t1113636619 * (*) (List_1_t2585711361 *, int32_t, const RuntimeMethod*))List_1_get_Item_m1328026504_gshared)(__this, p0, method);
}
// UnityEngine.Material[] DigitalOpus.MB.Core.MB_Utility::GetGOMaterials(UnityEngine.GameObject)
extern "C" IL2CPP_METHOD_ATTR MaterialU5BU5D_t561872642* MB_Utility_GetGOMaterials_m1177753089 (RuntimeObject * __this /* static, unused */, GameObject_t1113636619 * ___go0, const RuntimeMethod* method);
// System.Boolean UnityEngine.Object::op_Inequality(UnityEngine.Object,UnityEngine.Object)
extern "C" IL2CPP_METHOD_ATTR bool Object_op_Inequality_m4071470834 (RuntimeObject * __this /* static, unused */, Object_t631007953 * p0, Object_t631007953 * p1, const RuntimeMethod* method);
// System.String System.String::Concat(System.Object[])
extern "C" IL2CPP_METHOD_ATTR String_t* String_Concat_m2971454694 (RuntimeObject * __this /* static, unused */, ObjectU5BU5D_t2843939325* p0, const RuntimeMethod* method);
// System.Void UnityEngine.Debug::LogWarning(System.Object)
extern "C" IL2CPP_METHOD_ATTR void Debug_LogWarning_m3752629331 (RuntimeObject * __this /* static, unused */, RuntimeObject * p0, const RuntimeMethod* method);
// System.Int32 System.Collections.Generic.List`1<UnityEngine.GameObject>::get_Count()
inline int32_t List_1_get_Count_m2812834599 (List_1_t2585711361 * __this, const RuntimeMethod* method)
{
	return ((  int32_t (*) (List_1_t2585711361 *, const RuntimeMethod*))List_1_get_Count_m2934127733_gshared)(__this, method);
}
// DigitalOpus.MB.Core.MB3_TextureCombiner MB3_TextureBaker::CreateAndConfigureTextureCombiner()
extern "C" IL2CPP_METHOD_ATTR MB3_TextureCombiner_t2018981714 * MB3_TextureBaker_CreateAndConfigureTextureCombiner_m3639014588 (MB3_TextureBaker_t37954774 * __this, const RuntimeMethod* method);
// System.Void DigitalOpus.MB.Core.MB3_TextureCombiner::set_saveAtlasesAsAssets(System.Boolean)
extern "C" IL2CPP_METHOD_ATTR void MB3_TextureCombiner_set_saveAtlasesAsAssets_m1829566529 (MB3_TextureCombiner_t2018981714 * __this, bool ___value0, const RuntimeMethod* method);
// System.Collections.IEnumerator MB3_TextureBaker::_CreateAtlasesCoroutineTextureArray(DigitalOpus.MB.Core.MB3_TextureCombiner,DigitalOpus.MB.Core.ProgressUpdateDelegate,DigitalOpus.MB.Core.MB3_TextureCombiner/CreateAtlasesCoroutineResult,System.Boolean,DigitalOpus.MB.Core.MB2_EditorMethodsInterface,System.Single)
extern "C" IL2CPP_METHOD_ATTR RuntimeObject* MB3_TextureBaker__CreateAtlasesCoroutineTextureArray_m2377922167 (MB3_TextureBaker_t37954774 * __this, MB3_TextureCombiner_t2018981714 * ___combiner0, ProgressUpdateDelegate_t883957101 * ___progressInfo1, CreateAtlasesCoroutineResult_t3502510657 * ___coroutineResult2, bool ___saveAtlasesAsAssets3, RuntimeObject* ___editorMethods4, float ___maxTimePerFrame5, const RuntimeMethod* method);
// System.Collections.IEnumerator MB3_TextureBaker::_CreateAtlasesCoroutineAtlases(DigitalOpus.MB.Core.MB3_TextureCombiner,DigitalOpus.MB.Core.ProgressUpdateDelegate,DigitalOpus.MB.Core.MB3_TextureCombiner/CreateAtlasesCoroutineResult,System.Boolean,DigitalOpus.MB.Core.MB2_EditorMethodsInterface,System.Single)
extern "C" IL2CPP_METHOD_ATTR RuntimeObject* MB3_TextureBaker__CreateAtlasesCoroutineAtlases_m4093481174 (MB3_TextureBaker_t37954774 * __this, MB3_TextureCombiner_t2018981714 * ___combiner0, ProgressUpdateDelegate_t883957101 * ___progressInfo1, CreateAtlasesCoroutineResult_t3502510657 * ___coroutineResult2, bool ___saveAtlasesAsAssets3, RuntimeObject* ___editorMethods4, float ___maxTimePerFrame5, const RuntimeMethod* method);
// !!0[] UnityEngine.Component::GetComponentsInChildren<MB3_MeshBakerCommon>()
inline MB3_MeshBakerCommonU5BU5D_t1333502032* Component_GetComponentsInChildren_TisMB3_MeshBakerCommon_t4275912861_m3670351898 (Component_t1923634451 * __this, const RuntimeMethod* method)
{
	return ((  MB3_MeshBakerCommonU5BU5D_t1333502032* (*) (Component_t1923634451 *, const RuntimeMethod*))Component_GetComponentsInChildren_TisRuntimeObject_m1521724614_gshared)(__this, method);
}
// System.Void MB_AtlasesAndRects::.ctor()
extern "C" IL2CPP_METHOD_ATTR void MB_AtlasesAndRects__ctor_m2009631001 (MB_AtlasesAndRects_t2070141231 * __this, const RuntimeMethod* method);
// System.Void DigitalOpus.MB.Core.MB3_TextureCombiner::set_fixOutOfBoundsUVs(System.Boolean)
extern "C" IL2CPP_METHOD_ATTR void MB3_TextureCombiner_set_fixOutOfBoundsUVs_m1570906272 (MB3_TextureCombiner_t2018981714 * __this, bool ___value0, const RuntimeMethod* method);
// System.Void DigitalOpus.MB.Core.MB3_TextureCombiner/CombineTexturesIntoAtlasesCoroutineResult::.ctor()
extern "C" IL2CPP_METHOD_ATTR void CombineTexturesIntoAtlasesCoroutineResult__ctor_m3478809518 (CombineTexturesIntoAtlasesCoroutineResult_t3420713479 * __this, const RuntimeMethod* method);
// System.Collections.IEnumerator DigitalOpus.MB.Core.MB3_TextureCombiner::CombineTexturesIntoAtlasesCoroutine(DigitalOpus.MB.Core.ProgressUpdateDelegate,MB_AtlasesAndRects,UnityEngine.Material,System.Collections.Generic.List`1<UnityEngine.GameObject>,System.Collections.Generic.List`1<UnityEngine.Material>,DigitalOpus.MB.Core.MB2_EditorMethodsInterface,DigitalOpus.MB.Core.MB3_TextureCombiner/CombineTexturesIntoAtlasesCoroutineResult,System.Single,System.Collections.Generic.List`1<DigitalOpus.MB.Core.AtlasPackingResult>,System.Boolean,System.Boolean)
extern "C" IL2CPP_METHOD_ATTR RuntimeObject* MB3_TextureCombiner_CombineTexturesIntoAtlasesCoroutine_m2471354030 (MB3_TextureCombiner_t2018981714 * __this, ProgressUpdateDelegate_t883957101 * ___progressInfo0, MB_AtlasesAndRects_t2070141231 * ___resultAtlasesAndRects1, Material_t340375123 * ___resultMaterial2, List_1_t2585711361 * ___objsToMesh3, List_1_t1812449865 * ___allowedMaterialsFilter4, RuntimeObject* ___textureEditorMethods5, CombineTexturesIntoAtlasesCoroutineResult_t3420713479 * ___coroutineResult6, float ___maxTimePerFrame7, List_1_t3450590561 * ___packingResults8, bool ___onlyPackRects9, bool ___splitAtlasWhenPackingIfTooBig10, const RuntimeMethod* method);
// System.Void MB3_TextureBaker::unpackMat2RectMap(MB_AtlasesAndRects[])
extern "C" IL2CPP_METHOD_ATTR void MB3_TextureBaker_unpackMat2RectMap_m3852381993 (MB3_TextureBaker_t37954774 * __this, MB_AtlasesAndRectsU5BU5D_t4190144822* ___rawResults0, const RuntimeMethod* method);
// System.Void MB_MultiMaterial::.ctor()
extern "C" IL2CPP_METHOD_ATTR void MB_MultiMaterial__ctor_m4131012043 (MB_MultiMaterial_t1888048978 * __this, const RuntimeMethod* method);
// System.Void System.Collections.Generic.List`1<UnityEngine.Material>::.ctor()
inline void List_1__ctor_m1597736158 (List_1_t1812449865 * __this, const RuntimeMethod* method)
{
	((  void (*) (List_1_t1812449865 *, const RuntimeMethod*))List_1__ctor_m2321703786_gshared)(__this, method);
}
// System.Void System.Collections.Generic.List`1<UnityEngine.Material>::Add(!0)
inline void List_1_Add_m2906470202 (List_1_t1812449865 * __this, Material_t340375123 * p0, const RuntimeMethod* method)
{
	((  void (*) (List_1_t1812449865 *, Material_t340375123 *, const RuntimeMethod*))List_1_Add_m3338814081_gshared)(__this, p0, method);
}
// System.Void UnityEngine.Debug::Log(System.Object)
extern "C" IL2CPP_METHOD_ATTR void Debug_Log_m4051431634 (RuntimeObject * __this /* static, unused */, RuntimeObject * p0, const RuntimeMethod* method);
// System.Boolean MB_TextureArrayFormatSet::ValidateTextureImporterFormatsExistsForTextureFormats(DigitalOpus.MB.Core.MB2_EditorMethodsInterface,System.Int32)
extern "C" IL2CPP_METHOD_ATTR bool MB_TextureArrayFormatSet_ValidateTextureImporterFormatsExistsForTextureFormats_m383290541 (MB_TextureArrayFormatSet_t3246442245 * __this, RuntimeObject* ___editorMethods0, int32_t ___idx1, const RuntimeMethod* method);
// System.String System.String::Concat(System.Object,System.Object,System.Object)
extern "C" IL2CPP_METHOD_ATTR String_t* String_Concat_m1715369213 (RuntimeObject * __this /* static, unused */, RuntimeObject * p0, RuntimeObject * p1, RuntimeObject * p2, const RuntimeMethod* method);
// !0 System.Collections.Generic.List`1<MB_TexArraySlice>::get_Item(System.Int32)
inline MB_TexArraySlice_t2903040421 * List_1_get_Item_m519272143 (List_1_t80147867 * __this, int32_t p0, const RuntimeMethod* method)
{
	return ((  MB_TexArraySlice_t2903040421 * (*) (List_1_t80147867 *, int32_t, const RuntimeMethod*))List_1_get_Item_m1328026504_gshared)(__this, p0, method);
}
// !0 System.Collections.Generic.List`1<MB_TexArraySliceRendererMatPair>::get_Item(System.Int32)
inline MB_TexArraySliceRendererMatPair_t1896345011 * List_1_get_Item_m800292271 (List_1_t3368419753 * __this, int32_t p0, const RuntimeMethod* method)
{
	return ((  MB_TexArraySliceRendererMatPair_t1896345011 * (*) (List_1_t3368419753 *, int32_t, const RuntimeMethod*))List_1_get_Item_m1328026504_gshared)(__this, p0, method);
}
// System.Int32 System.Collections.Generic.List`1<MB_TexArraySliceRendererMatPair>::get_Count()
inline int32_t List_1_get_Count_m1217301797 (List_1_t3368419753 * __this, const RuntimeMethod* method)
{
	return ((  int32_t (*) (List_1_t3368419753 *, const RuntimeMethod*))List_1_get_Count_m2934127733_gshared)(__this, method);
}
// System.Int32 System.Collections.Generic.List`1<MB_TexArraySlice>::get_Count()
inline int32_t List_1_get_Count_m824374063 (List_1_t80147867 * __this, const RuntimeMethod* method)
{
	return ((  int32_t (*) (List_1_t80147867 *, const RuntimeMethod*))List_1_get_Count_m2934127733_gshared)(__this, method);
}
// System.Void MB_TextureArrayResultMaterial::.ctor()
extern "C" IL2CPP_METHOD_ATTR void MB_TextureArrayResultMaterial__ctor_m1520031195 (MB_TextureArrayResultMaterial_t1449688550 * __this, const RuntimeMethod* method);
// System.Collections.IEnumerator DigitalOpus.MB.Core.MB_TextureArrays::_CreateAtlasesCoroutineSingleResultMaterial(System.Int32,MB_TextureArrayResultMaterial,MB_MultiMaterialTexArray,System.Collections.Generic.List`1<UnityEngine.GameObject>,DigitalOpus.MB.Core.MB3_TextureCombiner,MB_TextureArrayFormatSet[],MB_MultiMaterialTexArray[],System.Collections.Generic.List`1<DigitalOpus.MB.Core.ShaderTextureProperty>,DigitalOpus.MB.Core.ProgressUpdateDelegate,DigitalOpus.MB.Core.MB3_TextureCombiner/CreateAtlasesCoroutineResult,System.Boolean,DigitalOpus.MB.Core.MB2_EditorMethodsInterface,System.Single)
extern "C" IL2CPP_METHOD_ATTR RuntimeObject* MB_TextureArrays__CreateAtlasesCoroutineSingleResultMaterial_m2137761663 (RuntimeObject * __this /* static, unused */, int32_t ___resMatIdx0, MB_TextureArrayResultMaterial_t1449688550 * ___bakedMatsAndSlicesResMat1, MB_MultiMaterialTexArray_t1025313673 * ___resMatConfig2, List_1_t2585711361 * ___objsToMesh3, MB3_TextureCombiner_t2018981714 * ___combiner4, MB_TextureArrayFormatSetU5BU5D_t3992808264* ___textureArrayOutputFormats5, MB_MultiMaterialTexArrayU5BU5D_t3908014132* ___resultMaterialsTexArray6, List_1_t2795786026 * ___customShaderProperties7, ProgressUpdateDelegate_t883957101 * ___progressInfo8, CreateAtlasesCoroutineResult_t3502510657 * ___coroutineResult9, bool ___saveAtlasesAsAssets10, RuntimeObject* ___editorMethods11, float ___maxTimePerFrame12, const RuntimeMethod* method);
// System.Void MB3_TextureBaker::unpackMat2RectMap(MB_TextureArrayResultMaterial[])
extern "C" IL2CPP_METHOD_ATTR void MB3_TextureBaker_unpackMat2RectMap_m743383816 (MB3_TextureBaker_t37954774 * __this, MB_TextureArrayResultMaterialU5BU5D_t631979971* ___rawResults0, const RuntimeMethod* method);
// System.Int32 UnityEngine.Object::GetInstanceID()
extern "C" IL2CPP_METHOD_ATTR int32_t Object_GetInstanceID_m1255174761 (Object_t631007953 * __this, const RuntimeMethod* method);
// System.Int32 UnityEngine.Rect::GetHashCode()
extern "C" IL2CPP_METHOD_ATTR int32_t Rect_GetHashCode_m1816164252 (Rect_t2360479859 * __this, const RuntimeMethod* method);
// System.Boolean UnityEngine.Rect::op_Equality(UnityEngine.Rect,UnityEngine.Rect)
extern "C" IL2CPP_METHOD_ATTR bool Rect_op_Equality_m3986168348 (RuntimeObject * __this /* static, unused */, Rect_t2360479859  p0, Rect_t2360479859  p1, const RuntimeMethod* method);
// System.Void UnityEngine.Rect::.ctor(System.Single,System.Single,System.Single,System.Single)
extern "C" IL2CPP_METHOD_ATTR void Rect__ctor_m2614021312 (Rect_t2360479859 * __this, float p0, float p1, float p2, float p3, const RuntimeMethod* method);
// System.Void System.Collections.Generic.List`1<MB_TexArraySlice>::.ctor()
inline void List_1__ctor_m1911117364 (List_1_t80147867 * __this, const RuntimeMethod* method)
{
	((  void (*) (List_1_t80147867 *, const RuntimeMethod*))List_1__ctor_m2321703786_gshared)(__this, method);
}
// System.Void System.Collections.Generic.List`1<MB_TexArrayForProperty>::.ctor()
inline void List_1__ctor_m1245396982 (List_1_t2274492589 * __this, const RuntimeMethod* method)
{
	((  void (*) (List_1_t2274492589 *, const RuntimeMethod*))List_1__ctor_m2321703786_gshared)(__this, method);
}
// System.Void System.Collections.Generic.List`1<MB_TexArraySliceRendererMatPair>::.ctor()
inline void List_1__ctor_m3663177880 (List_1_t3368419753 * __this, const RuntimeMethod* method)
{
	((  void (*) (List_1_t3368419753 *, const RuntimeMethod*))List_1__ctor_m2321703786_gshared)(__this, method);
}
// System.Void System.Collections.Generic.HashSet`1<UnityEngine.Material>::.ctor()
inline void HashSet_1__ctor_m3459089090 (HashSet_1_t3200291893 * __this, const RuntimeMethod* method)
{
	((  void (*) (HashSet_1_t3200291893 *, const RuntimeMethod*))HashSet_1__ctor_m4231804131_gshared)(__this, method);
}
// System.Boolean System.Collections.Generic.HashSet`1<UnityEngine.Material>::Add(!0)
inline bool HashSet_1_Add_m3074301316 (HashSet_1_t3200291893 * __this, Material_t340375123 * p0, const RuntimeMethod* method)
{
	return ((  bool (*) (HashSet_1_t3200291893 *, Material_t340375123 *, const RuntimeMethod*))HashSet_1_Add_m1971460364_gshared)(__this, p0, method);
}
// UnityEngine.Mesh DigitalOpus.MB.Core.MB_Utility::GetMesh(UnityEngine.GameObject)
extern "C" IL2CPP_METHOD_ATTR Mesh_t3648964284 * MB_Utility_GetMesh_m3260485892 (RuntimeObject * __this /* static, unused */, GameObject_t1113636619 * ___go0, const RuntimeMethod* method);
// System.Void System.Collections.Generic.List`1<UnityEngine.Material>::Clear()
inline void List_1_Clear_m1260798391 (List_1_t1812449865 * __this, const RuntimeMethod* method)
{
	((  void (*) (List_1_t1812449865 *, const RuntimeMethod*))List_1_Clear_m3697625829_gshared)(__this, method);
}
// System.Void System.Collections.Generic.List`1<UnityEngine.GameObject>::.ctor()
inline void List_1__ctor_m1424466557 (List_1_t2585711361 * __this, const RuntimeMethod* method)
{
	((  void (*) (List_1_t2585711361 *, const RuntimeMethod*))List_1__ctor_m2321703786_gshared)(__this, method);
}
// System.Void System.Collections.Generic.List`1<UnityEngine.GameObject>::Add(!0)
inline void List_1_Add_m2765963565 (List_1_t2585711361 * __this, GameObject_t1113636619 * p0, const RuntimeMethod* method)
{
	((  void (*) (List_1_t2585711361 *, GameObject_t1113636619 *, const RuntimeMethod*))List_1_Add_m3338814081_gshared)(__this, p0, method);
}
// UnityEngine.Shader UnityEngine.Shader::Find(System.String)
extern "C" IL2CPP_METHOD_ATTR Shader_t4151988712 * Shader_Find_m2092206247 (RuntimeObject * __this /* static, unused */, String_t* p0, const RuntimeMethod* method);
// System.Void UnityEngine.Material::.ctor(UnityEngine.Shader)
extern "C" IL2CPP_METHOD_ATTR void Material__ctor_m1662457592 (Material_t340375123 * __this, Shader_t4151988712 * p0, const RuntimeMethod* method);
// System.Void UnityEngine.RenderTexture::.ctor(System.Int32,System.Int32,System.Int32,UnityEngine.RenderTextureFormat)
extern "C" IL2CPP_METHOD_ATTR void RenderTexture__ctor_m2187158709 (RenderTexture_t2108887433 * __this, int32_t p0, int32_t p1, int32_t p2, int32_t p3, const RuntimeMethod* method);
// System.Void UnityEngine.Texture::set_filterMode(UnityEngine.FilterMode)
extern "C" IL2CPP_METHOD_ATTR void Texture_set_filterMode_m3078068058 (Texture_t3661962703 * __this, int32_t p0, const RuntimeMethod* method);
// !!0 UnityEngine.GameObject::GetComponent<UnityEngine.Camera>()
inline Camera_t4157153871 * GameObject_GetComponent_TisCamera_t4157153871_m2849242531 (GameObject_t1113636619 * __this, const RuntimeMethod* method)
{
	return ((  Camera_t4157153871 * (*) (GameObject_t1113636619 *, const RuntimeMethod*))GameObject_GetComponent_TisRuntimeObject_m2049753423_gshared)(__this, method);
}
// System.Void UnityEngine.Camera::set_orthographic(System.Boolean)
extern "C" IL2CPP_METHOD_ATTR void Camera_set_orthographic_m2855749523 (Camera_t4157153871 * __this, bool p0, const RuntimeMethod* method);
// System.Void UnityEngine.Camera::set_orthographicSize(System.Single)
extern "C" IL2CPP_METHOD_ATTR void Camera_set_orthographicSize_m76971700 (Camera_t4157153871 * __this, float p0, const RuntimeMethod* method);
// System.Void UnityEngine.Camera::set_aspect(System.Single)
extern "C" IL2CPP_METHOD_ATTR void Camera_set_aspect_m2625464181 (Camera_t4157153871 * __this, float p0, const RuntimeMethod* method);
// System.Void UnityEngine.Camera::set_targetTexture(UnityEngine.RenderTexture)
extern "C" IL2CPP_METHOD_ATTR void Camera_set_targetTexture_m3148311140 (Camera_t4157153871 * __this, RenderTexture_t2108887433 * p0, const RuntimeMethod* method);
// System.Void UnityEngine.Camera::set_clearFlags(UnityEngine.CameraClearFlags)
extern "C" IL2CPP_METHOD_ATTR void Camera_set_clearFlags_m2207032996 (Camera_t4157153871 * __this, int32_t p0, const RuntimeMethod* method);
// !!0 UnityEngine.Component::GetComponent<UnityEngine.Transform>()
inline Transform_t3600365921 * Component_GetComponent_TisTransform_t3600365921_m1200784320 (Component_t1923634451 * __this, const RuntimeMethod* method)
{
	return ((  Transform_t3600365921 * (*) (Component_t1923634451 *, const RuntimeMethod*))Component_GetComponent_TisRuntimeObject_m2906321015_gshared)(__this, method);
}
// System.Void UnityEngine.Vector3::.ctor(System.Single,System.Single,System.Single)
extern "C" IL2CPP_METHOD_ATTR void Vector3__ctor_m3353183577 (Vector3_t3722313464 * __this, float p0, float p1, float p2, const RuntimeMethod* method);
// System.Void UnityEngine.Transform::set_localPosition(UnityEngine.Vector3)
extern "C" IL2CPP_METHOD_ATTR void Transform_set_localPosition_m4128471975 (Transform_t3600365921 * __this, Vector3_t3722313464  p0, const RuntimeMethod* method);
// UnityEngine.Quaternion UnityEngine.Quaternion::Euler(System.Single,System.Single,System.Single)
extern "C" IL2CPP_METHOD_ATTR Quaternion_t2301928331  Quaternion_Euler_m3049309462 (RuntimeObject * __this /* static, unused */, float p0, float p1, float p2, const RuntimeMethod* method);
// System.Void UnityEngine.Transform::set_localRotation(UnityEngine.Quaternion)
extern "C" IL2CPP_METHOD_ATTR void Transform_set_localRotation_m19445462 (Transform_t3600365921 * __this, Quaternion_t2301928331  p0, const RuntimeMethod* method);
// UnityEngine.Vector3 UnityEngine.Transform::get_localPosition()
extern "C" IL2CPP_METHOD_ATTR Vector3_t3722313464  Transform_get_localPosition_m4234289348 (Transform_t3600365921 * __this, const RuntimeMethod* method);
// System.Single UnityEngine.Camera::get_orthographicSize()
extern "C" IL2CPP_METHOD_ATTR float Camera_get_orthographicSize_m3903216845 (Camera_t4157153871 * __this, const RuntimeMethod* method);
// System.Single UnityEngine.Camera::get_aspect()
extern "C" IL2CPP_METHOD_ATTR float Camera_get_aspect_m862507514 (Camera_t4157153871 * __this, const RuntimeMethod* method);
// System.String System.Single::ToString(System.String)
extern "C" IL2CPP_METHOD_ATTR String_t* Single_ToString_m3489843083 (float* __this, String_t* p0, const RuntimeMethod* method);
// System.String System.String::Format(System.String,System.Object[])
extern "C" IL2CPP_METHOD_ATTR String_t* String_Format_m630303134 (RuntimeObject * __this /* static, unused */, String_t* p0, ObjectU5BU5D_t2843939325* p1, const RuntimeMethod* method);
// System.Void UnityEngine.Camera::Render()
extern "C" IL2CPP_METHOD_ATTR void Camera_Render_m2813253190 (Camera_t4157153871 * __this, const RuntimeMethod* method);
// System.Void DigitalOpus.MB.Core.MB_Utility::Destroy(UnityEngine.Object)
extern "C" IL2CPP_METHOD_ATTR void MB_Utility_Destroy_m683137727 (RuntimeObject * __this /* static, unused */, Object_t631007953 * ___o0, const RuntimeMethod* method);
// System.Void System.Diagnostics.Stopwatch::.ctor()
extern "C" IL2CPP_METHOD_ATTR void Stopwatch__ctor_m2673586837 (Stopwatch_t305734070 * __this, const RuntimeMethod* method);
// System.Void System.Diagnostics.Stopwatch::Start()
extern "C" IL2CPP_METHOD_ATTR void Stopwatch_Start_m1142799187 (Stopwatch_t305734070 * __this, const RuntimeMethod* method);
// System.Boolean MB_TextureCombinerRenderTexture::YisFlipped(DigitalOpus.MB.Core.MB2_LogLevel)
extern "C" IL2CPP_METHOD_ATTR bool MB_TextureCombinerRenderTexture_YisFlipped_m3588497510 (RuntimeObject * __this /* static, unused */, int32_t ___LOG_LEVEL0, const RuntimeMethod* method);
// !0 System.Collections.Generic.List`1<DigitalOpus.MB.Core.MB_TexSet>::get_Item(System.Int32)
inline MB_TexSet_t80133013 * List_1_get_Item_m1399501068 (List_1_t1552207755 * __this, int32_t p0, const RuntimeMethod* method)
{
	return ((  MB_TexSet_t80133013 * (*) (List_1_t1552207755 *, int32_t, const RuntimeMethod*))List_1_get_Item_m1328026504_gshared)(__this, p0, method);
}
// UnityEngine.Texture2D DigitalOpus.MB.Core.MeshBakerMaterialTexture::GetTexture2D()
extern "C" IL2CPP_METHOD_ATTR Texture2D_t3840446185 * MeshBakerMaterialTexture_GetTexture2D_m1492496826 (MeshBakerMaterialTexture_t567627287 * __this, const RuntimeMethod* method);
// DigitalOpus.MB.Core.DRect DigitalOpus.MB.Core.MeshBakerMaterialTexture::get_matTilingRect()
extern "C" IL2CPP_METHOD_ATTR DRect_t3868393502  MeshBakerMaterialTexture_get_matTilingRect_m1213004848 (MeshBakerMaterialTexture_t567627287 * __this, const RuntimeMethod* method);
// UnityEngine.Vector2 DigitalOpus.MB.Core.DRect::get_min()
extern "C" IL2CPP_METHOD_ATTR Vector2_t2156229523  DRect_get_min_m990825377 (DRect_t3868393502 * __this, const RuntimeMethod* method);
// UnityEngine.Vector2 DigitalOpus.MB.Core.DRect::get_size()
extern "C" IL2CPP_METHOD_ATTR Vector2_t2156229523  DRect_get_size_m1401151465 (DRect_t3868393502 * __this, const RuntimeMethod* method);
// UnityEngine.Vector2 DigitalOpus.MB.Core.MB_TexSet::get_obUVoffset()
extern "C" IL2CPP_METHOD_ATTR Vector2_t2156229523  MB_TexSet_get_obUVoffset_m3662289414 (MB_TexSet_t80133013 * __this, const RuntimeMethod* method);
// UnityEngine.Vector2 DigitalOpus.MB.Core.MB_TexSet::get_obUVscale()
extern "C" IL2CPP_METHOD_ATTR Vector2_t2156229523  MB_TexSet_get_obUVscale_m2255764130 (MB_TexSet_t80133013 * __this, const RuntimeMethod* method);
// System.Void MB_TextureCombinerRenderTexture::CopyScaledAndTiledToAtlas(DigitalOpus.MB.Core.MB_TexSet,DigitalOpus.MB.Core.MeshBakerMaterialTexture,UnityEngine.Vector2,UnityEngine.Vector2,UnityEngine.Rect,DigitalOpus.MB.Core.ShaderTextureProperty,DigitalOpus.MB.Core.MB3_TextureCombinerNonTextureProperties,System.Boolean)
extern "C" IL2CPP_METHOD_ATTR void MB_TextureCombinerRenderTexture_CopyScaledAndTiledToAtlas_m2529512026 (MB_TextureCombinerRenderTexture_t1792150119 * __this, MB_TexSet_t80133013 * ___texSet0, MeshBakerMaterialTexture_t567627287 * ___source1, Vector2_t2156229523  ___obUVoffset2, Vector2_t2156229523  ___obUVscale3, Rect_t2360479859  ___rec4, ShaderTextureProperty_t1323711284 * ___texturePropertyName5, MB3_TextureCombinerNonTextureProperties_t582390424 * ___resultMatTexBlender6, bool ___yIsFlipped7, const RuntimeMethod* method);
// System.Void System.Diagnostics.Stopwatch::Stop()
extern "C" IL2CPP_METHOD_ATTR void Stopwatch_Stop_m1583564474 (Stopwatch_t305734070 * __this, const RuntimeMethod* method);
// System.Int64 System.Diagnostics.Stopwatch::get_ElapsedMilliseconds()
extern "C" IL2CPP_METHOD_ATTR int64_t Stopwatch_get_ElapsedMilliseconds_m1101465039 (Stopwatch_t305734070 * __this, const RuntimeMethod* method);
// System.String System.Int64::ToString(System.String)
extern "C" IL2CPP_METHOD_ATTR String_t* Int64_ToString_m414616559 (int64_t* __this, String_t* p0, const RuntimeMethod* method);
// System.String System.String::Concat(System.String,System.String)
extern "C" IL2CPP_METHOD_ATTR String_t* String_Concat_m3937257545 (RuntimeObject * __this /* static, unused */, String_t* p0, String_t* p1, const RuntimeMethod* method);
// System.Void UnityEngine.Texture2D::.ctor(System.Int32,System.Int32,UnityEngine.TextureFormat,System.Boolean,System.Boolean)
extern "C" IL2CPP_METHOD_ATTR void Texture2D__ctor_m1269666504 (Texture2D_t3840446185 * __this, int32_t p0, int32_t p1, int32_t p2, bool p3, bool p4, const RuntimeMethod* method);
// System.Void MB_TextureCombinerRenderTexture::ConvertRenderTextureToTexture2D(UnityEngine.RenderTexture,System.Boolean,System.Boolean,DigitalOpus.MB.Core.MB2_LogLevel,UnityEngine.Texture2D)
extern "C" IL2CPP_METHOD_ATTR void MB_TextureCombinerRenderTexture_ConvertRenderTextureToTexture2D_m474096451 (RuntimeObject * __this /* static, unused */, RenderTexture_t2108887433 * ____destinationTexture0, bool ___yIsFlipped1, bool ___doLinearColorSpace2, int32_t ___LOG_LEVEL3, Texture2D_t3840446185 * ___tempTexture4, const RuntimeMethod* method);
// UnityEngine.RenderTexture UnityEngine.RenderTexture::get_active()
extern "C" IL2CPP_METHOD_ATTR RenderTexture_t2108887433 * RenderTexture_get_active_m2427925032 (RuntimeObject * __this /* static, unused */, const RuntimeMethod* method);
// System.Void UnityEngine.RenderTexture::set_active(UnityEngine.RenderTexture)
extern "C" IL2CPP_METHOD_ATTR void RenderTexture_set_active_m1437732586 (RuntimeObject * __this /* static, unused */, RenderTexture_t2108887433 * p0, const RuntimeMethod* method);
// System.Int32 UnityEngine.Mathf::CeilToInt(System.Single)
extern "C" IL2CPP_METHOD_ATTR int32_t Mathf_CeilToInt_m432108984 (RuntimeObject * __this /* static, unused */, float p0, const RuntimeMethod* method);
// System.Void UnityEngine.Texture2D::ReadPixels(UnityEngine.Rect,System.Int32,System.Int32,System.Boolean)
extern "C" IL2CPP_METHOD_ATTR void Texture2D_ReadPixels_m1510783487 (Texture2D_t3840446185 * __this, Rect_t2360479859  p0, int32_t p1, int32_t p2, bool p3, const RuntimeMethod* method);
// System.Void UnityEngine.Texture2D::Apply()
extern "C" IL2CPP_METHOD_ATTR void Texture2D_Apply_m2271746283 (Texture2D_t3840446185 * __this, const RuntimeMethod* method);
// System.Void MB_TextureCombinerRenderTexture::_printTexture(UnityEngine.Texture2D)
extern "C" IL2CPP_METHOD_ATTR void MB_TextureCombinerRenderTexture__printTexture_m968241879 (RuntimeObject * __this /* static, unused */, Texture2D_t3840446185 * ___t0, const RuntimeMethod* method);
// UnityEngine.Vector3 UnityEngine.Vector3::get_zero()
extern "C" IL2CPP_METHOD_ATTR Vector3_t3722313464  Vector3_get_zero_m1409827619 (RuntimeObject * __this /* static, unused */, const RuntimeMethod* method);
// System.String UnityEngine.SystemInfo::get_graphicsDeviceVersion()
extern "C" IL2CPP_METHOD_ATTR String_t* SystemInfo_get_graphicsDeviceVersion_m3111693964 (RuntimeObject * __this /* static, unused */, const RuntimeMethod* method);
// System.String System.String::ToLower()
extern "C" IL2CPP_METHOD_ATTR String_t* String_ToLower_m2029374922 (String_t* __this, const RuntimeMethod* method);
// System.Boolean DigitalOpus.MB.Core.MBVersion::GraphicsUVStartsAtTop()
extern "C" IL2CPP_METHOD_ATTR bool MBVersion_GraphicsUVStartsAtTop_m177916781 (RuntimeObject * __this /* static, unused */, const RuntimeMethod* method);
// !0 System.Collections.Generic.List`1<DigitalOpus.MB.Core.MatAndTransformToMerged>::get_Item(System.Int32)
inline MatAndTransformToMerged_t4202614370 * List_1_get_Item_m2254468706 (List_1_t1379721816 * __this, int32_t p0, const RuntimeMethod* method)
{
	return ((  MatAndTransformToMerged_t4202614370 * (*) (List_1_t1379721816 *, int32_t, const RuntimeMethod*))List_1_get_Item_m1328026504_gshared)(__this, p0, method);
}
// UnityEngine.Color DigitalOpus.MB.Core.MB3_TextureCombinerNonTextureProperties::GetColorForTemporaryTexture(UnityEngine.Material,DigitalOpus.MB.Core.ShaderTextureProperty)
extern "C" IL2CPP_METHOD_ATTR Color_t2555686324  MB3_TextureCombinerNonTextureProperties_GetColorForTemporaryTexture_m3387911628 (MB3_TextureCombinerNonTextureProperties_t582390424 * __this, Material_t340375123 * ___matIfBlender0, ShaderTextureProperty_t1323711284 * ___texProperty1, const RuntimeMethod* method);
// System.Void UnityEngine.Camera::set_backgroundColor(UnityEngine.Color)
extern "C" IL2CPP_METHOD_ATTR void Camera_set_backgroundColor_m1332346802 (Camera_t4157153871 * __this, Color_t2555686324  p0, const RuntimeMethod* method);
// System.Single UnityEngine.Rect::get_y()
extern "C" IL2CPP_METHOD_ATTR float Rect_get_y_m1501338330 (Rect_t2360479859 * __this, const RuntimeMethod* method);
// System.Single UnityEngine.Rect::get_height()
extern "C" IL2CPP_METHOD_ATTR float Rect_get_height_m1358425599 (Rect_t2360479859 * __this, const RuntimeMethod* method);
// System.Void UnityEngine.Rect::set_y(System.Single)
extern "C" IL2CPP_METHOD_ATTR void Rect_set_y_m3702432190 (Rect_t2360479859 * __this, float p0, const RuntimeMethod* method);
// System.Single UnityEngine.Rect::get_x()
extern "C" IL2CPP_METHOD_ATTR float Rect_get_x_m3839990490 (Rect_t2360479859 * __this, const RuntimeMethod* method);
// System.Void UnityEngine.Rect::set_x(System.Single)
extern "C" IL2CPP_METHOD_ATTR void Rect_set_x_m2352063068 (Rect_t2360479859 * __this, float p0, const RuntimeMethod* method);
// System.Single UnityEngine.Rect::get_width()
extern "C" IL2CPP_METHOD_ATTR float Rect_get_width_m3421484486 (Rect_t2360479859 * __this, const RuntimeMethod* method);
// System.Void UnityEngine.Rect::set_width(System.Single)
extern "C" IL2CPP_METHOD_ATTR void Rect_set_width_m2963421158 (Rect_t2360479859 * __this, float p0, const RuntimeMethod* method);
// System.Void UnityEngine.Rect::set_height(System.Single)
extern "C" IL2CPP_METHOD_ATTR void Rect_set_height_m1625569324 (Rect_t2360479859 * __this, float p0, const RuntimeMethod* method);
// DigitalOpus.MB.Core.DRect DigitalOpus.MB.Core.MeshBakerMaterialTexture::GetEncapsulatingSamplingRect()
extern "C" IL2CPP_METHOD_ATTR DRect_t3868393502  MeshBakerMaterialTexture_GetEncapsulatingSamplingRect_m1507467597 (MeshBakerMaterialTexture_t567627287 * __this, const RuntimeMethod* method);
// UnityEngine.Rect DigitalOpus.MB.Core.DRect::GetRect()
extern "C" IL2CPP_METHOD_ATTR Rect_t2360479859  DRect_GetRect_m1338813288 (DRect_t3868393502 * __this, const RuntimeMethod* method);
// UnityEngine.TextureWrapMode UnityEngine.Texture::get_wrapMode()
extern "C" IL2CPP_METHOD_ATTR int32_t Texture_get_wrapMode_m2187367613 (Texture_t3661962703 * __this, const RuntimeMethod* method);
// System.Void UnityEngine.Texture::set_wrapMode(UnityEngine.TextureWrapMode)
extern "C" IL2CPP_METHOD_ATTR void Texture_set_wrapMode_m587872754 (Texture_t3661962703 * __this, int32_t p0, const RuntimeMethod* method);
// System.String UnityEngine.Object::get_name()
extern "C" IL2CPP_METHOD_ATTR String_t* Object_get_name_m4211327027 (Object_t631007953 * __this, const RuntimeMethod* method);
// System.Void UnityEngine.Graphics::DrawTexture(UnityEngine.Rect,UnityEngine.Texture,UnityEngine.Rect,System.Int32,System.Int32,System.Int32,System.Int32,UnityEngine.Material)
extern "C" IL2CPP_METHOD_ATTR void Graphics_DrawTexture_m1420473909 (RuntimeObject * __this /* static, unused */, Rect_t2360479859  p0, Texture_t3661962703 * p1, Rect_t2360479859  p2, int32_t p3, int32_t p4, int32_t p5, int32_t p6, Material_t340375123 * p7, const RuntimeMethod* method);
// UnityEngine.Color32[] UnityEngine.Texture2D::GetPixels32()
extern "C" IL2CPP_METHOD_ATTR Color32U5BU5D_t3850468773* Texture2D_GetPixels32_m647746242 (Texture2D_t3840446185 * __this, const RuntimeMethod* method);
// System.String System.String::Concat(System.String,System.String,System.String,System.String)
extern "C" IL2CPP_METHOD_ATTR String_t* String_Concat_m2163913788 (RuntimeObject * __this /* static, unused */, String_t* p0, String_t* p1, String_t* p2, String_t* p3, const RuntimeMethod* method);
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Void MB3_TextureBaker/<CreateAtlasesCoroutine>c__Iterator0::.ctor()
extern "C" IL2CPP_METHOD_ATTR void U3CCreateAtlasesCoroutineU3Ec__Iterator0__ctor_m2798310555 (U3CCreateAtlasesCoroutineU3Ec__Iterator0_t954047427 * __this, const RuntimeMethod* method)
{
	{
		Object__ctor_m297566312(__this, /*hidden argument*/NULL);
		return;
	}
}
// System.Boolean MB3_TextureBaker/<CreateAtlasesCoroutine>c__Iterator0::MoveNext()
extern "C" IL2CPP_METHOD_ATTR bool U3CCreateAtlasesCoroutineU3Ec__Iterator0_MoveNext_m2978578165 (U3CCreateAtlasesCoroutineU3Ec__Iterator0_t954047427 * __this, const RuntimeMethod* method)
{
	uint32_t V_0 = 0;
	{
		int32_t L_0 = __this->get_U24PC_8();
		V_0 = L_0;
		__this->set_U24PC_8((-1));
		uint32_t L_1 = V_0;
		switch (L_1)
		{
			case 0:
			{
				goto IL_0021;
			}
			case 1:
			{
				goto IL_0064;
			}
		}
	}
	{
		goto IL_00cb;
	}

IL_0021:
	{
		MB3_TextureBaker_t37954774 * L_2 = __this->get_U24this_5();
		ProgressUpdateDelegate_t883957101 * L_3 = __this->get_progressInfo_0();
		CreateAtlasesCoroutineResult_t3502510657 * L_4 = __this->get_coroutineResult_1();
		bool L_5 = __this->get_saveAtlasesAsAssets_2();
		RuntimeObject* L_6 = __this->get_editorMethods_3();
		float L_7 = __this->get_maxTimePerFrame_4();
		RuntimeObject* L_8 = MB3_TextureBaker__CreateAtlasesCoroutine_m3167597908(L_2, L_3, L_4, L_5, L_6, L_7, /*hidden argument*/NULL);
		__this->set_U24current_6(L_8);
		bool L_9 = __this->get_U24disposing_7();
		if (L_9)
		{
			goto IL_005f;
		}
	}
	{
		__this->set_U24PC_8(1);
	}

IL_005f:
	{
		goto IL_00cd;
	}

IL_0064:
	{
		CreateAtlasesCoroutineResult_t3502510657 * L_10 = __this->get_coroutineResult_1();
		bool L_11 = L_10->get_success_0();
		if (!L_11)
		{
			goto IL_0094;
		}
	}
	{
		MB3_TextureBaker_t37954774 * L_12 = __this->get_U24this_5();
		OnCombinedTexturesCoroutineSuccess_t3112909344 * L_13 = L_12->get_onBuiltAtlasesSuccess_33();
		if (!L_13)
		{
			goto IL_0094;
		}
	}
	{
		MB3_TextureBaker_t37954774 * L_14 = __this->get_U24this_5();
		OnCombinedTexturesCoroutineSuccess_t3112909344 * L_15 = L_14->get_onBuiltAtlasesSuccess_33();
		OnCombinedTexturesCoroutineSuccess_Invoke_m2225395970(L_15, /*hidden argument*/NULL);
	}

IL_0094:
	{
		CreateAtlasesCoroutineResult_t3502510657 * L_16 = __this->get_coroutineResult_1();
		bool L_17 = L_16->get_success_0();
		if (L_17)
		{
			goto IL_00c4;
		}
	}
	{
		MB3_TextureBaker_t37954774 * L_18 = __this->get_U24this_5();
		OnCombinedTexturesCoroutineFail_t3579762109 * L_19 = L_18->get_onBuiltAtlasesFail_34();
		if (!L_19)
		{
			goto IL_00c4;
		}
	}
	{
		MB3_TextureBaker_t37954774 * L_20 = __this->get_U24this_5();
		OnCombinedTexturesCoroutineFail_t3579762109 * L_21 = L_20->get_onBuiltAtlasesFail_34();
		OnCombinedTexturesCoroutineFail_Invoke_m2982341252(L_21, /*hidden argument*/NULL);
	}

IL_00c4:
	{
		__this->set_U24PC_8((-1));
	}

IL_00cb:
	{
		return (bool)0;
	}

IL_00cd:
	{
		return (bool)1;
	}
}
// System.Object MB3_TextureBaker/<CreateAtlasesCoroutine>c__Iterator0::System.Collections.Generic.IEnumerator<object>.get_Current()
extern "C" IL2CPP_METHOD_ATTR RuntimeObject * U3CCreateAtlasesCoroutineU3Ec__Iterator0_System_Collections_Generic_IEnumeratorU3CobjectU3E_get_Current_m3749327650 (U3CCreateAtlasesCoroutineU3Ec__Iterator0_t954047427 * __this, const RuntimeMethod* method)
{
	{
		RuntimeObject * L_0 = __this->get_U24current_6();
		return L_0;
	}
}
// System.Object MB3_TextureBaker/<CreateAtlasesCoroutine>c__Iterator0::System.Collections.IEnumerator.get_Current()
extern "C" IL2CPP_METHOD_ATTR RuntimeObject * U3CCreateAtlasesCoroutineU3Ec__Iterator0_System_Collections_IEnumerator_get_Current_m1934363770 (U3CCreateAtlasesCoroutineU3Ec__Iterator0_t954047427 * __this, const RuntimeMethod* method)
{
	{
		RuntimeObject * L_0 = __this->get_U24current_6();
		return L_0;
	}
}
// System.Void MB3_TextureBaker/<CreateAtlasesCoroutine>c__Iterator0::Dispose()
extern "C" IL2CPP_METHOD_ATTR void U3CCreateAtlasesCoroutineU3Ec__Iterator0_Dispose_m4116487012 (U3CCreateAtlasesCoroutineU3Ec__Iterator0_t954047427 * __this, const RuntimeMethod* method)
{
	{
		__this->set_U24disposing_7((bool)1);
		__this->set_U24PC_8((-1));
		return;
	}
}
// System.Void MB3_TextureBaker/<CreateAtlasesCoroutine>c__Iterator0::Reset()
extern "C" IL2CPP_METHOD_ATTR void U3CCreateAtlasesCoroutineU3Ec__Iterator0_Reset_m929361507 (U3CCreateAtlasesCoroutineU3Ec__Iterator0_t954047427 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (U3CCreateAtlasesCoroutineU3Ec__Iterator0_Reset_m929361507_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		NotSupportedException_t1314879016 * L_0 = (NotSupportedException_t1314879016 *)il2cpp_codegen_object_new(NotSupportedException_t1314879016_il2cpp_TypeInfo_var);
		NotSupportedException__ctor_m2730133172(L_0, /*hidden argument*/NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_0, NULL, U3CCreateAtlasesCoroutineU3Ec__Iterator0_Reset_m929361507_RuntimeMethod_var);
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Void MB3_TextureBaker/<_CreateAtlasesCoroutine>c__Iterator3::.ctor()
extern "C" IL2CPP_METHOD_ATTR void U3C_CreateAtlasesCoroutineU3Ec__Iterator3__ctor_m2635172046 (U3C_CreateAtlasesCoroutineU3Ec__Iterator3_t4069405804 * __this, const RuntimeMethod* method)
{
	{
		Object__ctor_m297566312(__this, /*hidden argument*/NULL);
		return;
	}
}
// System.Boolean MB3_TextureBaker/<_CreateAtlasesCoroutine>c__Iterator3::MoveNext()
extern "C" IL2CPP_METHOD_ATTR bool U3C_CreateAtlasesCoroutineU3Ec__Iterator3_MoveNext_m659793080 (U3C_CreateAtlasesCoroutineU3Ec__Iterator3_t4069405804 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (U3C_CreateAtlasesCoroutineU3Ec__Iterator3_MoveNext_m659793080_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	uint32_t V_0 = 0;
	Shader_t4151988712 * V_1 = NULL;
	int32_t V_2 = 0;
	MaterialU5BU5D_t561872642* V_3 = NULL;
	int32_t V_4 = 0;
	Material_t340375123 * V_5 = NULL;
	int32_t V_6 = 0;
	U3C_CreateAtlasesCoroutineU3Ec__Iterator3_t4069405804 * G_B11_0 = NULL;
	U3C_CreateAtlasesCoroutineU3Ec__Iterator3_t4069405804 * G_B10_0 = NULL;
	int32_t G_B12_0 = 0;
	U3C_CreateAtlasesCoroutineU3Ec__Iterator3_t4069405804 * G_B12_1 = NULL;
	{
		int32_t L_0 = __this->get_U24PC_12();
		V_0 = L_0;
		__this->set_U24PC_12((-1));
		uint32_t L_1 = V_0;
		switch (L_1)
		{
			case 0:
			{
				goto IL_0025;
			}
			case 1:
			{
				goto IL_02d5;
			}
			case 2:
			{
				goto IL_0338;
			}
		}
	}
	{
		goto IL_03a7;
	}

IL_0025:
	{
		MBVersionConcrete_t3658102071 * L_2 = (MBVersionConcrete_t3658102071 *)il2cpp_codegen_object_new(MBVersionConcrete_t3658102071_il2cpp_TypeInfo_var);
		MBVersionConcrete__ctor_m1867325870(L_2, /*hidden argument*/NULL);
		__this->set_U3CmbvU3E__0_0(L_2);
		IL2CPP_RUNTIME_CLASS_INIT(MB3_TextureCombiner_t2018981714_il2cpp_TypeInfo_var);
		bool L_3 = ((MB3_TextureCombiner_t2018981714_StaticFields*)il2cpp_codegen_static_fields_for(MB3_TextureCombiner_t2018981714_il2cpp_TypeInfo_var))->get__RunCorutineWithoutPauseIsRunning_21();
		if (L_3)
		{
			goto IL_0088;
		}
	}
	{
		MBVersionConcrete_t3658102071 * L_4 = __this->get_U3CmbvU3E__0_0();
		int32_t L_5 = MBVersionConcrete_GetMajorVersion_m1920500776(L_4, /*hidden argument*/NULL);
		if ((((int32_t)L_5) < ((int32_t)5)))
		{
			goto IL_006d;
		}
	}
	{
		MBVersionConcrete_t3658102071 * L_6 = __this->get_U3CmbvU3E__0_0();
		int32_t L_7 = MBVersionConcrete_GetMajorVersion_m1920500776(L_6, /*hidden argument*/NULL);
		if ((!(((uint32_t)L_7) == ((uint32_t)5))))
		{
			goto IL_0088;
		}
	}
	{
		MBVersionConcrete_t3658102071 * L_8 = __this->get_U3CmbvU3E__0_0();
		int32_t L_9 = MBVersionConcrete_GetMinorVersion_m87563562(L_8, /*hidden argument*/NULL);
		if ((((int32_t)L_9) >= ((int32_t)3)))
		{
			goto IL_0088;
		}
	}

IL_006d:
	{
		IL2CPP_RUNTIME_CLASS_INIT(Debug_t3317548046_il2cpp_TypeInfo_var);
		Debug_LogError_m2850623458(NULL /*static, unused*/, _stringLiteral852084806, /*hidden argument*/NULL);
		CreateAtlasesCoroutineResult_t3502510657 * L_10 = __this->get_coroutineResult_1();
		L_10->set_success_0((bool)0);
		goto IL_03a7;
	}

IL_0088:
	{
		MB3_TextureBaker_t37954774 * L_11 = __this->get_U24this_9();
		L_11->set_OnCombinedTexturesCoroutineAtlasesAndRects_35((MB_AtlasesAndRectsU5BU5D_t4190144822*)NULL);
		float L_12 = __this->get_maxTimePerFrame_2();
		if ((!(((float)L_12) <= ((float)(0.0f)))))
		{
			goto IL_00bf;
		}
	}
	{
		IL2CPP_RUNTIME_CLASS_INIT(Debug_t3317548046_il2cpp_TypeInfo_var);
		Debug_LogError_m2850623458(NULL /*static, unused*/, _stringLiteral3260904216, /*hidden argument*/NULL);
		CreateAtlasesCoroutineResult_t3502510657 * L_13 = __this->get_coroutineResult_1();
		L_13->set_isFinished_1((bool)1);
		goto IL_03a7;
	}

IL_00bf:
	{
		bool L_14 = Application_get_isPlaying_m100394690(NULL /*static, unused*/, /*hidden argument*/NULL);
		G_B10_0 = __this;
		if (!L_14)
		{
			G_B11_0 = __this;
			goto IL_00d0;
		}
	}
	{
		G_B12_0 = 1;
		G_B12_1 = G_B10_0;
		goto IL_00d1;
	}

IL_00d0:
	{
		G_B12_0 = 2;
		G_B12_1 = G_B11_0;
	}

IL_00d1:
	{
		G_B12_1->set_U3CvlU3E__0_3(G_B12_0);
		MB3_TextureBaker_t37954774 * L_15 = __this->get_U24this_9();
		int32_t L_16 = __this->get_U3CvlU3E__0_3();
		bool L_17 = MB3_MeshBakerRoot_DoCombinedValidate_m3430514970(NULL /*static, unused*/, L_15, 2, (RuntimeObject*)NULL, L_16, /*hidden argument*/NULL);
		if (L_17)
		{
			goto IL_00ff;
		}
	}
	{
		CreateAtlasesCoroutineResult_t3502510657 * L_18 = __this->get_coroutineResult_1();
		L_18->set_isFinished_1((bool)1);
		goto IL_03a7;
	}

IL_00ff:
	{
		MB3_TextureBaker_t37954774 * L_19 = __this->get_U24this_9();
		bool L_20 = L_19->get__doMultiMaterial_22();
		if (!L_20)
		{
			goto IL_0130;
		}
	}
	{
		MB3_TextureBaker_t37954774 * L_21 = __this->get_U24this_9();
		bool L_22 = MB3_TextureBaker__ValidateResultMaterials_m2007460450(L_21, /*hidden argument*/NULL);
		if (L_22)
		{
			goto IL_0130;
		}
	}
	{
		CreateAtlasesCoroutineResult_t3502510657 * L_23 = __this->get_coroutineResult_1();
		L_23->set_isFinished_1((bool)1);
		goto IL_03a7;
	}

IL_0130:
	{
		MB3_TextureBaker_t37954774 * L_24 = __this->get_U24this_9();
		int32_t L_25 = VirtFuncInvoker0< int32_t >::Invoke(33 /* MB2_TextureBakeResults/ResultType MB3_TextureBaker::get_resultType() */, L_24);
		if ((!(((uint32_t)L_25) == ((uint32_t)1))))
		{
			goto IL_0146;
		}
	}
	{
		goto IL_024d;
	}

IL_0146:
	{
		MB3_TextureBaker_t37954774 * L_26 = __this->get_U24this_9();
		bool L_27 = L_26->get__doMultiMaterial_22();
		if (L_27)
		{
			goto IL_024d;
		}
	}
	{
		MB3_TextureBaker_t37954774 * L_28 = __this->get_U24this_9();
		Material_t340375123 * L_29 = L_28->get__resultMaterial_25();
		IL2CPP_RUNTIME_CLASS_INIT(Object_t631007953_il2cpp_TypeInfo_var);
		bool L_30 = Object_op_Equality_m1810815630(NULL /*static, unused*/, L_29, (Object_t631007953 *)NULL, /*hidden argument*/NULL);
		if (!L_30)
		{
			goto IL_0187;
		}
	}
	{
		IL2CPP_RUNTIME_CLASS_INIT(Debug_t3317548046_il2cpp_TypeInfo_var);
		Debug_LogError_m2850623458(NULL /*static, unused*/, _stringLiteral1983371484, /*hidden argument*/NULL);
		CreateAtlasesCoroutineResult_t3502510657 * L_31 = __this->get_coroutineResult_1();
		L_31->set_isFinished_1((bool)1);
		goto IL_03a7;
	}

IL_0187:
	{
		MB3_TextureBaker_t37954774 * L_32 = __this->get_U24this_9();
		Material_t340375123 * L_33 = L_32->get__resultMaterial_25();
		Shader_t4151988712 * L_34 = Material_get_shader_m1331119247(L_33, /*hidden argument*/NULL);
		V_1 = L_34;
		V_2 = 0;
		goto IL_0237;
	}

IL_019f:
	{
		MB3_TextureBaker_t37954774 * L_35 = __this->get_U24this_9();
		List_1_t2585711361 * L_36 = L_35->get_objsToMesh_32();
		int32_t L_37 = V_2;
		GameObject_t1113636619 * L_38 = List_1_get_Item_m3743125852(L_36, L_37, /*hidden argument*/List_1_get_Item_m3743125852_RuntimeMethod_var);
		IL2CPP_RUNTIME_CLASS_INIT(MB_Utility_t3997274809_il2cpp_TypeInfo_var);
		MaterialU5BU5D_t561872642* L_39 = MB_Utility_GetGOMaterials_m1177753089(NULL /*static, unused*/, L_38, /*hidden argument*/NULL);
		V_3 = L_39;
		V_4 = 0;
		goto IL_0229;
	}

IL_01be:
	{
		MaterialU5BU5D_t561872642* L_40 = V_3;
		int32_t L_41 = V_4;
		int32_t L_42 = L_41;
		Material_t340375123 * L_43 = (L_40)->GetAtUnchecked(static_cast<il2cpp_array_size_t>(L_42));
		V_5 = L_43;
		Material_t340375123 * L_44 = V_5;
		IL2CPP_RUNTIME_CLASS_INIT(Object_t631007953_il2cpp_TypeInfo_var);
		bool L_45 = Object_op_Inequality_m4071470834(NULL /*static, unused*/, L_44, (Object_t631007953 *)NULL, /*hidden argument*/NULL);
		if (!L_45)
		{
			goto IL_0223;
		}
	}
	{
		Material_t340375123 * L_46 = V_5;
		Shader_t4151988712 * L_47 = Material_get_shader_m1331119247(L_46, /*hidden argument*/NULL);
		Shader_t4151988712 * L_48 = V_1;
		IL2CPP_RUNTIME_CLASS_INIT(Object_t631007953_il2cpp_TypeInfo_var);
		bool L_49 = Object_op_Inequality_m4071470834(NULL /*static, unused*/, L_47, L_48, /*hidden argument*/NULL);
		if (!L_49)
		{
			goto IL_0223;
		}
	}
	{
		ObjectU5BU5D_t2843939325* L_50 = (ObjectU5BU5D_t2843939325*)SZArrayNew(ObjectU5BU5D_t2843939325_il2cpp_TypeInfo_var, (uint32_t)5);
		ObjectU5BU5D_t2843939325* L_51 = L_50;
		ArrayElementTypeCheck (L_51, _stringLiteral1687475981);
		(L_51)->SetAtUnchecked(static_cast<il2cpp_array_size_t>(0), (RuntimeObject *)_stringLiteral1687475981);
		ObjectU5BU5D_t2843939325* L_52 = L_51;
		MB3_TextureBaker_t37954774 * L_53 = __this->get_U24this_9();
		List_1_t2585711361 * L_54 = L_53->get_objsToMesh_32();
		int32_t L_55 = V_2;
		GameObject_t1113636619 * L_56 = List_1_get_Item_m3743125852(L_54, L_55, /*hidden argument*/List_1_get_Item_m3743125852_RuntimeMethod_var);
		ArrayElementTypeCheck (L_52, L_56);
		(L_52)->SetAtUnchecked(static_cast<il2cpp_array_size_t>(1), (RuntimeObject *)L_56);
		ObjectU5BU5D_t2843939325* L_57 = L_52;
		ArrayElementTypeCheck (L_57, _stringLiteral2852143774);
		(L_57)->SetAtUnchecked(static_cast<il2cpp_array_size_t>(2), (RuntimeObject *)_stringLiteral2852143774);
		ObjectU5BU5D_t2843939325* L_58 = L_57;
		Shader_t4151988712 * L_59 = V_1;
		ArrayElementTypeCheck (L_58, L_59);
		(L_58)->SetAtUnchecked(static_cast<il2cpp_array_size_t>(3), (RuntimeObject *)L_59);
		ObjectU5BU5D_t2843939325* L_60 = L_58;
		ArrayElementTypeCheck (L_60, _stringLiteral3058774577);
		(L_60)->SetAtUnchecked(static_cast<il2cpp_array_size_t>(4), (RuntimeObject *)_stringLiteral3058774577);
		String_t* L_61 = String_Concat_m2971454694(NULL /*static, unused*/, L_60, /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(Debug_t3317548046_il2cpp_TypeInfo_var);
		Debug_LogWarning_m3752629331(NULL /*static, unused*/, L_61, /*hidden argument*/NULL);
	}

IL_0223:
	{
		int32_t L_62 = V_4;
		V_4 = ((int32_t)il2cpp_codegen_add((int32_t)L_62, (int32_t)1));
	}

IL_0229:
	{
		int32_t L_63 = V_4;
		MaterialU5BU5D_t561872642* L_64 = V_3;
		if ((((int32_t)L_63) < ((int32_t)(((int32_t)((int32_t)(((RuntimeArray *)L_64)->max_length)))))))
		{
			goto IL_01be;
		}
	}
	{
		int32_t L_65 = V_2;
		V_2 = ((int32_t)il2cpp_codegen_add((int32_t)L_65, (int32_t)1));
	}

IL_0237:
	{
		int32_t L_66 = V_2;
		MB3_TextureBaker_t37954774 * L_67 = __this->get_U24this_9();
		List_1_t2585711361 * L_68 = L_67->get_objsToMesh_32();
		int32_t L_69 = List_1_get_Count_m2812834599(L_68, /*hidden argument*/List_1_get_Count_m2812834599_RuntimeMethod_var);
		if ((((int32_t)L_66) < ((int32_t)L_69)))
		{
			goto IL_019f;
		}
	}

IL_024d:
	{
		MB3_TextureBaker_t37954774 * L_70 = __this->get_U24this_9();
		MB3_TextureCombiner_t2018981714 * L_71 = MB3_TextureBaker_CreateAndConfigureTextureCombiner_m3639014588(L_70, /*hidden argument*/NULL);
		__this->set_U3CcombinerU3E__0_4(L_71);
		MB3_TextureCombiner_t2018981714 * L_72 = __this->get_U3CcombinerU3E__0_4();
		bool L_73 = __this->get_saveAtlasesAsAssets_5();
		MB3_TextureCombiner_set_saveAtlasesAsAssets_m1829566529(L_72, L_73, /*hidden argument*/NULL);
		MB3_TextureBaker_t37954774 * L_74 = __this->get_U24this_9();
		L_74->set_OnCombinedTexturesCoroutineAtlasesAndRects_35((MB_AtlasesAndRectsU5BU5D_t4190144822*)NULL);
		MB3_TextureBaker_t37954774 * L_75 = __this->get_U24this_9();
		int32_t L_76 = VirtFuncInvoker0< int32_t >::Invoke(33 /* MB2_TextureBakeResults/ResultType MB3_TextureBaker::get_resultType() */, L_75);
		if ((!(((uint32_t)L_76) == ((uint32_t)1))))
		{
			goto IL_02ef;
		}
	}
	{
		MB3_TextureBaker_t37954774 * L_77 = __this->get_U24this_9();
		MB3_TextureCombiner_t2018981714 * L_78 = __this->get_U3CcombinerU3E__0_4();
		ProgressUpdateDelegate_t883957101 * L_79 = __this->get_progressInfo_6();
		CreateAtlasesCoroutineResult_t3502510657 * L_80 = __this->get_coroutineResult_1();
		bool L_81 = __this->get_saveAtlasesAsAssets_5();
		RuntimeObject* L_82 = __this->get_editorMethods_7();
		float L_83 = __this->get_maxTimePerFrame_2();
		RuntimeObject* L_84 = MB3_TextureBaker__CreateAtlasesCoroutineTextureArray_m2377922167(L_77, L_78, L_79, L_80, L_81, L_82, L_83, /*hidden argument*/NULL);
		__this->set_U24current_10(L_84);
		bool L_85 = __this->get_U24disposing_11();
		if (L_85)
		{
			goto IL_02d0;
		}
	}
	{
		__this->set_U24PC_12(1);
	}

IL_02d0:
	{
		goto IL_03a9;
	}

IL_02d5:
	{
		CreateAtlasesCoroutineResult_t3502510657 * L_86 = __this->get_coroutineResult_1();
		bool L_87 = L_86->get_success_0();
		if (L_87)
		{
			goto IL_02ea;
		}
	}
	{
		goto IL_03a7;
	}

IL_02ea:
	{
		goto IL_034d;
	}

IL_02ef:
	{
		MB3_TextureBaker_t37954774 * L_88 = __this->get_U24this_9();
		MB3_TextureCombiner_t2018981714 * L_89 = __this->get_U3CcombinerU3E__0_4();
		ProgressUpdateDelegate_t883957101 * L_90 = __this->get_progressInfo_6();
		CreateAtlasesCoroutineResult_t3502510657 * L_91 = __this->get_coroutineResult_1();
		bool L_92 = __this->get_saveAtlasesAsAssets_5();
		RuntimeObject* L_93 = __this->get_editorMethods_7();
		float L_94 = __this->get_maxTimePerFrame_2();
		RuntimeObject* L_95 = MB3_TextureBaker__CreateAtlasesCoroutineAtlases_m4093481174(L_88, L_89, L_90, L_91, L_92, L_93, L_94, /*hidden argument*/NULL);
		__this->set_U24current_10(L_95);
		bool L_96 = __this->get_U24disposing_11();
		if (L_96)
		{
			goto IL_0333;
		}
	}
	{
		__this->set_U24PC_12(2);
	}

IL_0333:
	{
		goto IL_03a9;
	}

IL_0338:
	{
		CreateAtlasesCoroutineResult_t3502510657 * L_97 = __this->get_coroutineResult_1();
		bool L_98 = L_97->get_success_0();
		if (L_98)
		{
			goto IL_034d;
		}
	}
	{
		goto IL_03a7;
	}

IL_034d:
	{
		MB3_TextureBaker_t37954774 * L_99 = __this->get_U24this_9();
		MB3_MeshBakerCommonU5BU5D_t1333502032* L_100 = Component_GetComponentsInChildren_TisMB3_MeshBakerCommon_t4275912861_m3670351898(L_99, /*hidden argument*/Component_GetComponentsInChildren_TisMB3_MeshBakerCommon_t4275912861_m3670351898_RuntimeMethod_var);
		__this->set_U3CmbU3E__0_8(L_100);
		V_6 = 0;
		goto IL_0385;
	}

IL_0366:
	{
		MB3_MeshBakerCommonU5BU5D_t1333502032* L_101 = __this->get_U3CmbU3E__0_8();
		int32_t L_102 = V_6;
		int32_t L_103 = L_102;
		MB3_MeshBakerCommon_t4275912861 * L_104 = (L_101)->GetAtUnchecked(static_cast<il2cpp_array_size_t>(L_103));
		MB3_TextureBaker_t37954774 * L_105 = __this->get_U24this_9();
		MB2_TextureBakeResults_t548408826 * L_106 = VirtFuncInvoker0< MB2_TextureBakeResults_t548408826 * >::Invoke(4 /* MB2_TextureBakeResults MB3_MeshBakerRoot::get_textureBakeResults() */, L_105);
		VirtActionInvoker1< MB2_TextureBakeResults_t548408826 * >::Invoke(5 /* System.Void MB3_MeshBakerRoot::set_textureBakeResults(MB2_TextureBakeResults) */, L_104, L_106);
		int32_t L_107 = V_6;
		V_6 = ((int32_t)il2cpp_codegen_add((int32_t)L_107, (int32_t)1));
	}

IL_0385:
	{
		int32_t L_108 = V_6;
		MB3_MeshBakerCommonU5BU5D_t1333502032* L_109 = __this->get_U3CmbU3E__0_8();
		if ((((int32_t)L_108) < ((int32_t)(((int32_t)((int32_t)(((RuntimeArray *)L_109)->max_length)))))))
		{
			goto IL_0366;
		}
	}
	{
		CreateAtlasesCoroutineResult_t3502510657 * L_110 = __this->get_coroutineResult_1();
		L_110->set_isFinished_1((bool)1);
		__this->set_U24PC_12((-1));
	}

IL_03a7:
	{
		return (bool)0;
	}

IL_03a9:
	{
		return (bool)1;
	}
}
// System.Object MB3_TextureBaker/<_CreateAtlasesCoroutine>c__Iterator3::System.Collections.Generic.IEnumerator<object>.get_Current()
extern "C" IL2CPP_METHOD_ATTR RuntimeObject * U3C_CreateAtlasesCoroutineU3Ec__Iterator3_System_Collections_Generic_IEnumeratorU3CobjectU3E_get_Current_m901911338 (U3C_CreateAtlasesCoroutineU3Ec__Iterator3_t4069405804 * __this, const RuntimeMethod* method)
{
	{
		RuntimeObject * L_0 = __this->get_U24current_10();
		return L_0;
	}
}
// System.Object MB3_TextureBaker/<_CreateAtlasesCoroutine>c__Iterator3::System.Collections.IEnumerator.get_Current()
extern "C" IL2CPP_METHOD_ATTR RuntimeObject * U3C_CreateAtlasesCoroutineU3Ec__Iterator3_System_Collections_IEnumerator_get_Current_m1461987605 (U3C_CreateAtlasesCoroutineU3Ec__Iterator3_t4069405804 * __this, const RuntimeMethod* method)
{
	{
		RuntimeObject * L_0 = __this->get_U24current_10();
		return L_0;
	}
}
// System.Void MB3_TextureBaker/<_CreateAtlasesCoroutine>c__Iterator3::Dispose()
extern "C" IL2CPP_METHOD_ATTR void U3C_CreateAtlasesCoroutineU3Ec__Iterator3_Dispose_m3334743099 (U3C_CreateAtlasesCoroutineU3Ec__Iterator3_t4069405804 * __this, const RuntimeMethod* method)
{
	{
		__this->set_U24disposing_11((bool)1);
		__this->set_U24PC_12((-1));
		return;
	}
}
// System.Void MB3_TextureBaker/<_CreateAtlasesCoroutine>c__Iterator3::Reset()
extern "C" IL2CPP_METHOD_ATTR void U3C_CreateAtlasesCoroutineU3Ec__Iterator3_Reset_m3256406423 (U3C_CreateAtlasesCoroutineU3Ec__Iterator3_t4069405804 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (U3C_CreateAtlasesCoroutineU3Ec__Iterator3_Reset_m3256406423_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		NotSupportedException_t1314879016 * L_0 = (NotSupportedException_t1314879016 *)il2cpp_codegen_object_new(NotSupportedException_t1314879016_il2cpp_TypeInfo_var);
		NotSupportedException__ctor_m2730133172(L_0, /*hidden argument*/NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_0, NULL, U3C_CreateAtlasesCoroutineU3Ec__Iterator3_Reset_m3256406423_RuntimeMethod_var);
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Void MB3_TextureBaker/<_CreateAtlasesCoroutineAtlases>c__Iterator1::.ctor()
extern "C" IL2CPP_METHOD_ATTR void U3C_CreateAtlasesCoroutineAtlasesU3Ec__Iterator1__ctor_m994906861 (U3C_CreateAtlasesCoroutineAtlasesU3Ec__Iterator1_t3662324876 * __this, const RuntimeMethod* method)
{
	{
		Object__ctor_m297566312(__this, /*hidden argument*/NULL);
		return;
	}
}
// System.Boolean MB3_TextureBaker/<_CreateAtlasesCoroutineAtlases>c__Iterator1::MoveNext()
extern "C" IL2CPP_METHOD_ATTR bool U3C_CreateAtlasesCoroutineAtlasesU3Ec__Iterator1_MoveNext_m2024618271 (U3C_CreateAtlasesCoroutineAtlasesU3Ec__Iterator1_t3662324876 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (U3C_CreateAtlasesCoroutineAtlasesU3Ec__Iterator1_MoveNext_m2024618271_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	uint32_t V_0 = 0;
	int32_t V_1 = 0;
	MB_MultiMaterialU5BU5D_t1825806119* V_2 = NULL;
	int32_t V_3 = 0;
	{
		int32_t L_0 = __this->get_U24PC_13();
		V_0 = L_0;
		__this->set_U24PC_13((-1));
		uint32_t L_1 = V_0;
		switch (L_1)
		{
			case 0:
			{
				goto IL_0021;
			}
			case 1:
			{
				goto IL_01a1;
			}
		}
	}
	{
		goto IL_0342;
	}

IL_0021:
	{
		__this->set_U3CnumResultsU3E__0_0(1);
		MB3_TextureBaker_t37954774 * L_2 = __this->get_U24this_10();
		bool L_3 = L_2->get__doMultiMaterial_22();
		if (!L_3)
		{
			goto IL_004b;
		}
	}
	{
		MB3_TextureBaker_t37954774 * L_4 = __this->get_U24this_10();
		MB_MultiMaterialU5BU5D_t1825806119* L_5 = L_4->get_resultMaterials_29();
		__this->set_U3CnumResultsU3E__0_0((((int32_t)((int32_t)(((RuntimeArray *)L_5)->max_length)))));
	}

IL_004b:
	{
		MB3_TextureBaker_t37954774 * L_6 = __this->get_U24this_10();
		int32_t L_7 = __this->get_U3CnumResultsU3E__0_0();
		MB_AtlasesAndRectsU5BU5D_t4190144822* L_8 = (MB_AtlasesAndRectsU5BU5D_t4190144822*)SZArrayNew(MB_AtlasesAndRectsU5BU5D_t4190144822_il2cpp_TypeInfo_var, (uint32_t)L_7);
		L_6->set_OnCombinedTexturesCoroutineAtlasesAndRects_35(L_8);
		V_1 = 0;
		goto IL_007e;
	}

IL_0068:
	{
		MB3_TextureBaker_t37954774 * L_9 = __this->get_U24this_10();
		MB_AtlasesAndRectsU5BU5D_t4190144822* L_10 = L_9->get_OnCombinedTexturesCoroutineAtlasesAndRects_35();
		int32_t L_11 = V_1;
		MB_AtlasesAndRects_t2070141231 * L_12 = (MB_AtlasesAndRects_t2070141231 *)il2cpp_codegen_object_new(MB_AtlasesAndRects_t2070141231_il2cpp_TypeInfo_var);
		MB_AtlasesAndRects__ctor_m2009631001(L_12, /*hidden argument*/NULL);
		ArrayElementTypeCheck (L_10, L_12);
		(L_10)->SetAtUnchecked(static_cast<il2cpp_array_size_t>(L_11), (MB_AtlasesAndRects_t2070141231 *)L_12);
		int32_t L_13 = V_1;
		V_1 = ((int32_t)il2cpp_codegen_add((int32_t)L_13, (int32_t)1));
	}

IL_007e:
	{
		int32_t L_14 = V_1;
		MB3_TextureBaker_t37954774 * L_15 = __this->get_U24this_10();
		MB_AtlasesAndRectsU5BU5D_t4190144822* L_16 = L_15->get_OnCombinedTexturesCoroutineAtlasesAndRects_35();
		if ((((int32_t)L_14) < ((int32_t)(((int32_t)((int32_t)(((RuntimeArray *)L_16)->max_length)))))))
		{
			goto IL_0068;
		}
	}
	{
		__this->set_U3CiU3E__1_1(0);
		goto IL_01e6;
	}

IL_009d:
	{
		__this->set_U3CresMatToPassU3E__2_2((Material_t340375123 *)NULL);
		__this->set_U3CsourceMatsU3E__2_3((List_1_t1812449865 *)NULL);
		MB3_TextureBaker_t37954774 * L_17 = __this->get_U24this_10();
		bool L_18 = L_17->get__doMultiMaterial_22();
		if (!L_18)
		{
			goto IL_011c;
		}
	}
	{
		MB3_TextureBaker_t37954774 * L_19 = __this->get_U24this_10();
		MB_MultiMaterialU5BU5D_t1825806119* L_20 = L_19->get_resultMaterials_29();
		int32_t L_21 = __this->get_U3CiU3E__1_1();
		int32_t L_22 = L_21;
		MB_MultiMaterial_t1888048978 * L_23 = (L_20)->GetAtUnchecked(static_cast<il2cpp_array_size_t>(L_22));
		List_1_t1812449865 * L_24 = L_23->get_sourceMaterials_2();
		__this->set_U3CsourceMatsU3E__2_3(L_24);
		MB3_TextureBaker_t37954774 * L_25 = __this->get_U24this_10();
		MB_MultiMaterialU5BU5D_t1825806119* L_26 = L_25->get_resultMaterials_29();
		int32_t L_27 = __this->get_U3CiU3E__1_1();
		int32_t L_28 = L_27;
		MB_MultiMaterial_t1888048978 * L_29 = (L_26)->GetAtUnchecked(static_cast<il2cpp_array_size_t>(L_28));
		Material_t340375123 * L_30 = L_29->get_combinedMaterial_0();
		__this->set_U3CresMatToPassU3E__2_2(L_30);
		MB3_TextureCombiner_t2018981714 * L_31 = __this->get_combiner_4();
		MB3_TextureBaker_t37954774 * L_32 = __this->get_U24this_10();
		MB_MultiMaterialU5BU5D_t1825806119* L_33 = L_32->get_resultMaterials_29();
		int32_t L_34 = __this->get_U3CiU3E__1_1();
		int32_t L_35 = L_34;
		MB_MultiMaterial_t1888048978 * L_36 = (L_33)->GetAtUnchecked(static_cast<il2cpp_array_size_t>(L_35));
		bool L_37 = L_36->get_considerMeshUVs_1();
		MB3_TextureCombiner_set_fixOutOfBoundsUVs_m1570906272(L_31, L_37, /*hidden argument*/NULL);
		goto IL_012d;
	}

IL_011c:
	{
		MB3_TextureBaker_t37954774 * L_38 = __this->get_U24this_10();
		Material_t340375123 * L_39 = L_38->get__resultMaterial_25();
		__this->set_U3CresMatToPassU3E__2_2(L_39);
	}

IL_012d:
	{
		CombineTexturesIntoAtlasesCoroutineResult_t3420713479 * L_40 = (CombineTexturesIntoAtlasesCoroutineResult_t3420713479 *)il2cpp_codegen_object_new(CombineTexturesIntoAtlasesCoroutineResult_t3420713479_il2cpp_TypeInfo_var);
		CombineTexturesIntoAtlasesCoroutineResult__ctor_m3478809518(L_40, /*hidden argument*/NULL);
		__this->set_U3CcoroutineResult2U3E__2_5(L_40);
		MB3_TextureCombiner_t2018981714 * L_41 = __this->get_combiner_4();
		ProgressUpdateDelegate_t883957101 * L_42 = __this->get_progressInfo_6();
		MB3_TextureBaker_t37954774 * L_43 = __this->get_U24this_10();
		MB_AtlasesAndRectsU5BU5D_t4190144822* L_44 = L_43->get_OnCombinedTexturesCoroutineAtlasesAndRects_35();
		int32_t L_45 = __this->get_U3CiU3E__1_1();
		int32_t L_46 = L_45;
		MB_AtlasesAndRects_t2070141231 * L_47 = (L_44)->GetAtUnchecked(static_cast<il2cpp_array_size_t>(L_46));
		Material_t340375123 * L_48 = __this->get_U3CresMatToPassU3E__2_2();
		MB3_TextureBaker_t37954774 * L_49 = __this->get_U24this_10();
		List_1_t2585711361 * L_50 = L_49->get_objsToMesh_32();
		List_1_t1812449865 * L_51 = __this->get_U3CsourceMatsU3E__2_3();
		RuntimeObject* L_52 = __this->get_editorMethods_7();
		CombineTexturesIntoAtlasesCoroutineResult_t3420713479 * L_53 = __this->get_U3CcoroutineResult2U3E__2_5();
		float L_54 = __this->get_maxTimePerFrame_8();
		RuntimeObject* L_55 = MB3_TextureCombiner_CombineTexturesIntoAtlasesCoroutine_m2471354030(L_41, L_42, L_47, L_48, L_50, L_51, L_52, L_53, L_54, (List_1_t3450590561 *)NULL, (bool)0, (bool)0, /*hidden argument*/NULL);
		__this->set_U24current_11(L_55);
		bool L_56 = __this->get_U24disposing_12();
		if (L_56)
		{
			goto IL_019c;
		}
	}
	{
		__this->set_U24PC_13(1);
	}

IL_019c:
	{
		goto IL_0344;
	}

IL_01a1:
	{
		CreateAtlasesCoroutineResult_t3502510657 * L_57 = __this->get_coroutineResult_9();
		CombineTexturesIntoAtlasesCoroutineResult_t3420713479 * L_58 = __this->get_U3CcoroutineResult2U3E__2_5();
		bool L_59 = L_58->get_success_0();
		L_57->set_success_0(L_59);
		CreateAtlasesCoroutineResult_t3502510657 * L_60 = __this->get_coroutineResult_9();
		bool L_61 = L_60->get_success_0();
		if (L_61)
		{
			goto IL_01d8;
		}
	}
	{
		CreateAtlasesCoroutineResult_t3502510657 * L_62 = __this->get_coroutineResult_9();
		L_62->set_isFinished_1((bool)1);
		goto IL_0342;
	}

IL_01d8:
	{
		int32_t L_63 = __this->get_U3CiU3E__1_1();
		__this->set_U3CiU3E__1_1(((int32_t)il2cpp_codegen_add((int32_t)L_63, (int32_t)1)));
	}

IL_01e6:
	{
		int32_t L_64 = __this->get_U3CiU3E__1_1();
		MB3_TextureBaker_t37954774 * L_65 = __this->get_U24this_10();
		MB_AtlasesAndRectsU5BU5D_t4190144822* L_66 = L_65->get_OnCombinedTexturesCoroutineAtlasesAndRects_35();
		if ((((int32_t)L_64) < ((int32_t)(((int32_t)((int32_t)(((RuntimeArray *)L_66)->max_length)))))))
		{
			goto IL_009d;
		}
	}
	{
		MB3_TextureBaker_t37954774 * L_67 = __this->get_U24this_10();
		MB3_TextureBaker_t37954774 * L_68 = __this->get_U24this_10();
		MB_AtlasesAndRectsU5BU5D_t4190144822* L_69 = L_68->get_OnCombinedTexturesCoroutineAtlasesAndRects_35();
		MB3_TextureBaker_unpackMat2RectMap_m3852381993(L_67, L_69, /*hidden argument*/NULL);
		MB3_TextureBaker_t37954774 * L_70 = __this->get_U24this_10();
		MB2_TextureBakeResults_t548408826 * L_71 = VirtFuncInvoker0< MB2_TextureBakeResults_t548408826 * >::Invoke(4 /* MB2_TextureBakeResults MB3_MeshBakerRoot::get_textureBakeResults() */, L_70);
		L_71->set_resultType_5(0);
		MB3_TextureBaker_t37954774 * L_72 = __this->get_U24this_10();
		MB2_TextureBakeResults_t548408826 * L_73 = VirtFuncInvoker0< MB2_TextureBakeResults_t548408826 * >::Invoke(4 /* MB2_TextureBakeResults MB3_MeshBakerRoot::get_textureBakeResults() */, L_72);
		MB_MultiMaterialTexArrayU5BU5D_t3908014132* L_74 = (MB_MultiMaterialTexArrayU5BU5D_t3908014132*)SZArrayNew(MB_MultiMaterialTexArrayU5BU5D_t3908014132_il2cpp_TypeInfo_var, (uint32_t)0);
		L_73->set_resultMaterialsTexArray_8(L_74);
		MB3_TextureBaker_t37954774 * L_75 = __this->get_U24this_10();
		MB2_TextureBakeResults_t548408826 * L_76 = VirtFuncInvoker0< MB2_TextureBakeResults_t548408826 * >::Invoke(4 /* MB2_TextureBakeResults MB3_MeshBakerRoot::get_textureBakeResults() */, L_75);
		MB3_TextureBaker_t37954774 * L_77 = __this->get_U24this_10();
		bool L_78 = L_77->get__doMultiMaterial_22();
		L_76->set_doMultiMaterial_9(L_78);
		MB3_TextureBaker_t37954774 * L_79 = __this->get_U24this_10();
		bool L_80 = L_79->get__doMultiMaterial_22();
		if (!L_80)
		{
			goto IL_0286;
		}
	}
	{
		MB3_TextureBaker_t37954774 * L_81 = __this->get_U24this_10();
		MB2_TextureBakeResults_t548408826 * L_82 = VirtFuncInvoker0< MB2_TextureBakeResults_t548408826 * >::Invoke(4 /* MB2_TextureBakeResults MB3_MeshBakerRoot::get_textureBakeResults() */, L_81);
		MB3_TextureBaker_t37954774 * L_83 = __this->get_U24this_10();
		MB_MultiMaterialU5BU5D_t1825806119* L_84 = L_83->get_resultMaterials_29();
		L_82->set_resultMaterials_7(L_84);
		goto IL_0320;
	}

IL_0286:
	{
		MB_MultiMaterialU5BU5D_t1825806119* L_85 = (MB_MultiMaterialU5BU5D_t1825806119*)SZArrayNew(MB_MultiMaterialU5BU5D_t1825806119_il2cpp_TypeInfo_var, (uint32_t)1);
		V_2 = L_85;
		MB_MultiMaterialU5BU5D_t1825806119* L_86 = V_2;
		MB_MultiMaterial_t1888048978 * L_87 = (MB_MultiMaterial_t1888048978 *)il2cpp_codegen_object_new(MB_MultiMaterial_t1888048978_il2cpp_TypeInfo_var);
		MB_MultiMaterial__ctor_m4131012043(L_87, /*hidden argument*/NULL);
		ArrayElementTypeCheck (L_86, L_87);
		(L_86)->SetAtUnchecked(static_cast<il2cpp_array_size_t>(0), (MB_MultiMaterial_t1888048978 *)L_87);
		MB_MultiMaterialU5BU5D_t1825806119* L_88 = V_2;
		int32_t L_89 = 0;
		MB_MultiMaterial_t1888048978 * L_90 = (L_88)->GetAtUnchecked(static_cast<il2cpp_array_size_t>(L_89));
		MB3_TextureBaker_t37954774 * L_91 = __this->get_U24this_10();
		Material_t340375123 * L_92 = L_91->get__resultMaterial_25();
		L_90->set_combinedMaterial_0(L_92);
		MB_MultiMaterialU5BU5D_t1825806119* L_93 = V_2;
		int32_t L_94 = 0;
		MB_MultiMaterial_t1888048978 * L_95 = (L_93)->GetAtUnchecked(static_cast<il2cpp_array_size_t>(L_94));
		MB3_TextureBaker_t37954774 * L_96 = __this->get_U24this_10();
		bool L_97 = L_96->get__fixOutOfBoundsUVs_14();
		L_95->set_considerMeshUVs_1(L_97);
		MB_MultiMaterialU5BU5D_t1825806119* L_98 = V_2;
		int32_t L_99 = 0;
		MB_MultiMaterial_t1888048978 * L_100 = (L_98)->GetAtUnchecked(static_cast<il2cpp_array_size_t>(L_99));
		List_1_t1812449865 * L_101 = (List_1_t1812449865 *)il2cpp_codegen_object_new(List_1_t1812449865_il2cpp_TypeInfo_var);
		List_1__ctor_m1597736158(L_101, /*hidden argument*/List_1__ctor_m1597736158_RuntimeMethod_var);
		L_100->set_sourceMaterials_2(L_101);
		V_3 = 0;
		goto IL_02f7;
	}

IL_02cf:
	{
		MB_MultiMaterialU5BU5D_t1825806119* L_102 = V_2;
		int32_t L_103 = 0;
		MB_MultiMaterial_t1888048978 * L_104 = (L_102)->GetAtUnchecked(static_cast<il2cpp_array_size_t>(L_103));
		List_1_t1812449865 * L_105 = L_104->get_sourceMaterials_2();
		MB3_TextureBaker_t37954774 * L_106 = __this->get_U24this_10();
		MB2_TextureBakeResults_t548408826 * L_107 = VirtFuncInvoker0< MB2_TextureBakeResults_t548408826 * >::Invoke(4 /* MB2_TextureBakeResults MB3_MeshBakerRoot::get_textureBakeResults() */, L_106);
		MB_MaterialAndUVRectU5BU5D_t1630039172* L_108 = L_107->get_materialsAndUVRects_6();
		int32_t L_109 = V_3;
		int32_t L_110 = L_109;
		MB_MaterialAndUVRect_t1611876729 * L_111 = (L_108)->GetAtUnchecked(static_cast<il2cpp_array_size_t>(L_110));
		Material_t340375123 * L_112 = L_111->get_material_0();
		List_1_Add_m2906470202(L_105, L_112, /*hidden argument*/List_1_Add_m2906470202_RuntimeMethod_var);
		int32_t L_113 = V_3;
		V_3 = ((int32_t)il2cpp_codegen_add((int32_t)L_113, (int32_t)1));
	}

IL_02f7:
	{
		int32_t L_114 = V_3;
		MB3_TextureBaker_t37954774 * L_115 = __this->get_U24this_10();
		MB2_TextureBakeResults_t548408826 * L_116 = VirtFuncInvoker0< MB2_TextureBakeResults_t548408826 * >::Invoke(4 /* MB2_TextureBakeResults MB3_MeshBakerRoot::get_textureBakeResults() */, L_115);
		MB_MaterialAndUVRectU5BU5D_t1630039172* L_117 = L_116->get_materialsAndUVRects_6();
		if ((((int32_t)L_114) < ((int32_t)(((int32_t)((int32_t)(((RuntimeArray *)L_117)->max_length)))))))
		{
			goto IL_02cf;
		}
	}
	{
		MB3_TextureBaker_t37954774 * L_118 = __this->get_U24this_10();
		MB2_TextureBakeResults_t548408826 * L_119 = VirtFuncInvoker0< MB2_TextureBakeResults_t548408826 * >::Invoke(4 /* MB2_TextureBakeResults MB3_MeshBakerRoot::get_textureBakeResults() */, L_118);
		MB_MultiMaterialU5BU5D_t1825806119* L_120 = V_2;
		L_119->set_resultMaterials_7(L_120);
	}

IL_0320:
	{
		MB3_TextureBaker_t37954774 * L_121 = __this->get_U24this_10();
		int32_t L_122 = L_121->get_LOG_LEVEL_5();
		if ((((int32_t)L_122) < ((int32_t)3)))
		{
			goto IL_033b;
		}
	}
	{
		IL2CPP_RUNTIME_CLASS_INIT(Debug_t3317548046_il2cpp_TypeInfo_var);
		Debug_Log_m4051431634(NULL /*static, unused*/, _stringLiteral1928037523, /*hidden argument*/NULL);
	}

IL_033b:
	{
		__this->set_U24PC_13((-1));
	}

IL_0342:
	{
		return (bool)0;
	}

IL_0344:
	{
		return (bool)1;
	}
}
// System.Object MB3_TextureBaker/<_CreateAtlasesCoroutineAtlases>c__Iterator1::System.Collections.Generic.IEnumerator<object>.get_Current()
extern "C" IL2CPP_METHOD_ATTR RuntimeObject * U3C_CreateAtlasesCoroutineAtlasesU3Ec__Iterator1_System_Collections_Generic_IEnumeratorU3CobjectU3E_get_Current_m2308878838 (U3C_CreateAtlasesCoroutineAtlasesU3Ec__Iterator1_t3662324876 * __this, const RuntimeMethod* method)
{
	{
		RuntimeObject * L_0 = __this->get_U24current_11();
		return L_0;
	}
}
// System.Object MB3_TextureBaker/<_CreateAtlasesCoroutineAtlases>c__Iterator1::System.Collections.IEnumerator.get_Current()
extern "C" IL2CPP_METHOD_ATTR RuntimeObject * U3C_CreateAtlasesCoroutineAtlasesU3Ec__Iterator1_System_Collections_IEnumerator_get_Current_m3169568846 (U3C_CreateAtlasesCoroutineAtlasesU3Ec__Iterator1_t3662324876 * __this, const RuntimeMethod* method)
{
	{
		RuntimeObject * L_0 = __this->get_U24current_11();
		return L_0;
	}
}
// System.Void MB3_TextureBaker/<_CreateAtlasesCoroutineAtlases>c__Iterator1::Dispose()
extern "C" IL2CPP_METHOD_ATTR void U3C_CreateAtlasesCoroutineAtlasesU3Ec__Iterator1_Dispose_m3008396667 (U3C_CreateAtlasesCoroutineAtlasesU3Ec__Iterator1_t3662324876 * __this, const RuntimeMethod* method)
{
	{
		__this->set_U24disposing_12((bool)1);
		__this->set_U24PC_13((-1));
		return;
	}
}
// System.Void MB3_TextureBaker/<_CreateAtlasesCoroutineAtlases>c__Iterator1::Reset()
extern "C" IL2CPP_METHOD_ATTR void U3C_CreateAtlasesCoroutineAtlasesU3Ec__Iterator1_Reset_m1122771673 (U3C_CreateAtlasesCoroutineAtlasesU3Ec__Iterator1_t3662324876 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (U3C_CreateAtlasesCoroutineAtlasesU3Ec__Iterator1_Reset_m1122771673_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		NotSupportedException_t1314879016 * L_0 = (NotSupportedException_t1314879016 *)il2cpp_codegen_object_new(NotSupportedException_t1314879016_il2cpp_TypeInfo_var);
		NotSupportedException__ctor_m2730133172(L_0, /*hidden argument*/NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_0, NULL, U3C_CreateAtlasesCoroutineAtlasesU3Ec__Iterator1_Reset_m1122771673_RuntimeMethod_var);
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Void MB3_TextureBaker/<_CreateAtlasesCoroutineTextureArray>c__Iterator2::.ctor()
extern "C" IL2CPP_METHOD_ATTR void U3C_CreateAtlasesCoroutineTextureArrayU3Ec__Iterator2__ctor_m1690061626 (U3C_CreateAtlasesCoroutineTextureArrayU3Ec__Iterator2_t3158008321 * __this, const RuntimeMethod* method)
{
	{
		Object__ctor_m297566312(__this, /*hidden argument*/NULL);
		return;
	}
}
// System.Boolean MB3_TextureBaker/<_CreateAtlasesCoroutineTextureArray>c__Iterator2::MoveNext()
extern "C" IL2CPP_METHOD_ATTR bool U3C_CreateAtlasesCoroutineTextureArrayU3Ec__Iterator2_MoveNext_m2784354118 (U3C_CreateAtlasesCoroutineTextureArrayU3Ec__Iterator2_t3158008321 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (U3C_CreateAtlasesCoroutineTextureArrayU3Ec__Iterator2_MoveNext_m2784354118_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	uint32_t V_0 = 0;
	int32_t V_1 = 0;
	int32_t V_2 = 0;
	MB_MultiMaterialTexArray_t1025313673 * V_3 = NULL;
	List_1_t80147867 * V_4 = NULL;
	int32_t V_5 = 0;
	int32_t V_6 = 0;
	MB_TexArraySliceRendererMatPair_t1896345011 * V_7 = NULL;
	int32_t V_8 = 0;
	int32_t V_9 = 0;
	MB_AtlasesAndRectsU5BU5D_t4190144822* V_10 = NULL;
	MB_AtlasesAndRectsU5BU5D_t4190144822* V_11 = NULL;
	int32_t V_12 = 0;
	{
		int32_t L_0 = __this->get_U24PC_12();
		V_0 = L_0;
		__this->set_U24PC_12((-1));
		uint32_t L_1 = V_0;
		switch (L_1)
		{
			case 0:
			{
				goto IL_0021;
			}
			case 1:
			{
				goto IL_0399;
			}
		}
	}
	{
		goto IL_0474;
	}

IL_0021:
	{
		__this->set_U3CbakedMatsAndSlicesU3E__0_0((MB_TextureArrayResultMaterialU5BU5D_t631979971*)NULL);
		MB3_TextureBaker_t37954774 * L_2 = __this->get_U24this_9();
		MB_TextureArrayFormatSetU5BU5D_t3992808264* L_3 = L_2->get_textureArrayOutputFormats_31();
		if (!L_3)
		{
			goto IL_004a;
		}
	}
	{
		MB3_TextureBaker_t37954774 * L_4 = __this->get_U24this_9();
		MB_TextureArrayFormatSetU5BU5D_t3992808264* L_5 = L_4->get_textureArrayOutputFormats_31();
		if ((((int32_t)((int32_t)(((RuntimeArray *)L_5)->max_length)))))
		{
			goto IL_0065;
		}
	}

IL_004a:
	{
		IL2CPP_RUNTIME_CLASS_INIT(Debug_t3317548046_il2cpp_TypeInfo_var);
		Debug_LogError_m2850623458(NULL /*static, unused*/, _stringLiteral2860073501, /*hidden argument*/NULL);
		CreateAtlasesCoroutineResult_t3502510657 * L_6 = __this->get_coroutineResult_1();
		L_6->set_isFinished_1((bool)1);
		goto IL_0474;
	}

IL_0065:
	{
		V_1 = 0;
		goto IL_00a9;
	}

IL_006c:
	{
		MB3_TextureBaker_t37954774 * L_7 = __this->get_U24this_9();
		MB_TextureArrayFormatSetU5BU5D_t3992808264* L_8 = L_7->get_textureArrayOutputFormats_31();
		int32_t L_9 = V_1;
		int32_t L_10 = L_9;
		MB_TextureArrayFormatSet_t3246442245 * L_11 = (L_8)->GetAtUnchecked(static_cast<il2cpp_array_size_t>(L_10));
		RuntimeObject* L_12 = __this->get_editorMethods_2();
		int32_t L_13 = V_1;
		bool L_14 = MB_TextureArrayFormatSet_ValidateTextureImporterFormatsExistsForTextureFormats_m383290541(L_11, L_12, L_13, /*hidden argument*/NULL);
		if (L_14)
		{
			goto IL_00a5;
		}
	}
	{
		IL2CPP_RUNTIME_CLASS_INIT(Debug_t3317548046_il2cpp_TypeInfo_var);
		Debug_LogError_m2850623458(NULL /*static, unused*/, _stringLiteral3290010191, /*hidden argument*/NULL);
		CreateAtlasesCoroutineResult_t3502510657 * L_15 = __this->get_coroutineResult_1();
		L_15->set_isFinished_1((bool)1);
		goto IL_0474;
	}

IL_00a5:
	{
		int32_t L_16 = V_1;
		V_1 = ((int32_t)il2cpp_codegen_add((int32_t)L_16, (int32_t)1));
	}

IL_00a9:
	{
		int32_t L_17 = V_1;
		MB3_TextureBaker_t37954774 * L_18 = __this->get_U24this_9();
		MB_TextureArrayFormatSetU5BU5D_t3992808264* L_19 = L_18->get_textureArrayOutputFormats_31();
		if ((((int32_t)L_17) < ((int32_t)(((int32_t)((int32_t)(((RuntimeArray *)L_19)->max_length)))))))
		{
			goto IL_006c;
		}
	}
	{
		V_2 = 0;
		goto IL_0240;
	}

IL_00c3:
	{
		MB3_TextureBaker_t37954774 * L_20 = __this->get_U24this_9();
		MB_MultiMaterialTexArrayU5BU5D_t3908014132* L_21 = L_20->get_resultMaterialsTexArray_30();
		int32_t L_22 = V_2;
		int32_t L_23 = L_22;
		MB_MultiMaterialTexArray_t1025313673 * L_24 = (L_21)->GetAtUnchecked(static_cast<il2cpp_array_size_t>(L_23));
		V_3 = L_24;
		MB_MultiMaterialTexArray_t1025313673 * L_25 = V_3;
		Material_t340375123 * L_26 = L_25->get_combinedMaterial_0();
		IL2CPP_RUNTIME_CLASS_INIT(Object_t631007953_il2cpp_TypeInfo_var);
		bool L_27 = Object_op_Equality_m1810815630(NULL /*static, unused*/, L_26, (Object_t631007953 *)NULL, /*hidden argument*/NULL);
		if (!L_27)
		{
			goto IL_010d;
		}
	}
	{
		int32_t L_28 = V_2;
		int32_t L_29 = L_28;
		RuntimeObject * L_30 = Box(Int32_t2950945753_il2cpp_TypeInfo_var, &L_29);
		String_t* L_31 = String_Concat_m1715369213(NULL /*static, unused*/, _stringLiteral2979063055, L_30, _stringLiteral3452614530, /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(Debug_t3317548046_il2cpp_TypeInfo_var);
		Debug_LogError_m2850623458(NULL /*static, unused*/, L_31, /*hidden argument*/NULL);
		CreateAtlasesCoroutineResult_t3502510657 * L_32 = __this->get_coroutineResult_1();
		L_32->set_isFinished_1((bool)1);
		goto IL_0474;
	}

IL_010d:
	{
		MB_MultiMaterialTexArray_t1025313673 * L_33 = V_3;
		List_1_t80147867 * L_34 = L_33->get_slices_1();
		V_4 = L_34;
		V_5 = 0;
		goto IL_022e;
	}

IL_011d:
	{
		V_6 = 0;
		goto IL_020e;
	}

IL_0125:
	{
		List_1_t80147867 * L_35 = V_4;
		int32_t L_36 = V_5;
		MB_TexArraySlice_t2903040421 * L_37 = List_1_get_Item_m519272143(L_35, L_36, /*hidden argument*/List_1_get_Item_m519272143_RuntimeMethod_var);
		List_1_t3368419753 * L_38 = L_37->get_sourceMaterials_1();
		int32_t L_39 = V_6;
		MB_TexArraySliceRendererMatPair_t1896345011 * L_40 = List_1_get_Item_m800292271(L_38, L_39, /*hidden argument*/List_1_get_Item_m800292271_RuntimeMethod_var);
		V_7 = L_40;
		MB_TexArraySliceRendererMatPair_t1896345011 * L_41 = V_7;
		Material_t340375123 * L_42 = L_41->get_sourceMaterial_0();
		IL2CPP_RUNTIME_CLASS_INIT(Object_t631007953_il2cpp_TypeInfo_var);
		bool L_43 = Object_op_Equality_m1810815630(NULL /*static, unused*/, L_42, (Object_t631007953 *)NULL, /*hidden argument*/NULL);
		if (!L_43)
		{
			goto IL_0192;
		}
	}
	{
		ObjectU5BU5D_t2843939325* L_44 = (ObjectU5BU5D_t2843939325*)SZArrayNew(ObjectU5BU5D_t2843939325_il2cpp_TypeInfo_var, (uint32_t)4);
		ObjectU5BU5D_t2843939325* L_45 = L_44;
		ArrayElementTypeCheck (L_45, _stringLiteral947779253);
		(L_45)->SetAtUnchecked(static_cast<il2cpp_array_size_t>(0), (RuntimeObject *)_stringLiteral947779253);
		ObjectU5BU5D_t2843939325* L_46 = L_45;
		int32_t L_47 = V_2;
		int32_t L_48 = L_47;
		RuntimeObject * L_49 = Box(Int32_t2950945753_il2cpp_TypeInfo_var, &L_48);
		ArrayElementTypeCheck (L_46, L_49);
		(L_46)->SetAtUnchecked(static_cast<il2cpp_array_size_t>(1), (RuntimeObject *)L_49);
		ObjectU5BU5D_t2843939325* L_50 = L_46;
		ArrayElementTypeCheck (L_50, _stringLiteral3813598437);
		(L_50)->SetAtUnchecked(static_cast<il2cpp_array_size_t>(2), (RuntimeObject *)_stringLiteral3813598437);
		ObjectU5BU5D_t2843939325* L_51 = L_50;
		int32_t L_52 = V_5;
		int32_t L_53 = L_52;
		RuntimeObject * L_54 = Box(Int32_t2950945753_il2cpp_TypeInfo_var, &L_53);
		ArrayElementTypeCheck (L_51, L_54);
		(L_51)->SetAtUnchecked(static_cast<il2cpp_array_size_t>(3), (RuntimeObject *)L_54);
		String_t* L_55 = String_Concat_m2971454694(NULL /*static, unused*/, L_51, /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(Debug_t3317548046_il2cpp_TypeInfo_var);
		Debug_LogError_m2850623458(NULL /*static, unused*/, L_55, /*hidden argument*/NULL);
		CreateAtlasesCoroutineResult_t3502510657 * L_56 = __this->get_coroutineResult_1();
		L_56->set_isFinished_1((bool)1);
		goto IL_0474;
	}

IL_0192:
	{
		List_1_t80147867 * L_57 = V_4;
		int32_t L_58 = V_5;
		MB_TexArraySlice_t2903040421 * L_59 = List_1_get_Item_m519272143(L_57, L_58, /*hidden argument*/List_1_get_Item_m519272143_RuntimeMethod_var);
		bool L_60 = L_59->get_considerMeshUVs_0();
		if (!L_60)
		{
			goto IL_0208;
		}
	}
	{
		MB_TexArraySliceRendererMatPair_t1896345011 * L_61 = V_7;
		GameObject_t1113636619 * L_62 = L_61->get_renderer_1();
		IL2CPP_RUNTIME_CLASS_INIT(Object_t631007953_il2cpp_TypeInfo_var);
		bool L_63 = Object_op_Equality_m1810815630(NULL /*static, unused*/, L_62, (Object_t631007953 *)NULL, /*hidden argument*/NULL);
		if (!L_63)
		{
			goto IL_0203;
		}
	}
	{
		ObjectU5BU5D_t2843939325* L_64 = (ObjectU5BU5D_t2843939325*)SZArrayNew(ObjectU5BU5D_t2843939325_il2cpp_TypeInfo_var, (uint32_t)5);
		ObjectU5BU5D_t2843939325* L_65 = L_64;
		ArrayElementTypeCheck (L_65, _stringLiteral348570545);
		(L_65)->SetAtUnchecked(static_cast<il2cpp_array_size_t>(0), (RuntimeObject *)_stringLiteral348570545);
		ObjectU5BU5D_t2843939325* L_66 = L_65;
		int32_t L_67 = V_2;
		int32_t L_68 = L_67;
		RuntimeObject * L_69 = Box(Int32_t2950945753_il2cpp_TypeInfo_var, &L_68);
		ArrayElementTypeCheck (L_66, L_69);
		(L_66)->SetAtUnchecked(static_cast<il2cpp_array_size_t>(1), (RuntimeObject *)L_69);
		ObjectU5BU5D_t2843939325* L_70 = L_66;
		ArrayElementTypeCheck (L_70, _stringLiteral3813598437);
		(L_70)->SetAtUnchecked(static_cast<il2cpp_array_size_t>(2), (RuntimeObject *)_stringLiteral3813598437);
		ObjectU5BU5D_t2843939325* L_71 = L_70;
		int32_t L_72 = V_5;
		int32_t L_73 = L_72;
		RuntimeObject * L_74 = Box(Int32_t2950945753_il2cpp_TypeInfo_var, &L_73);
		ArrayElementTypeCheck (L_71, L_74);
		(L_71)->SetAtUnchecked(static_cast<il2cpp_array_size_t>(3), (RuntimeObject *)L_74);
		ObjectU5BU5D_t2843939325* L_75 = L_71;
		ArrayElementTypeCheck (L_75, _stringLiteral400336950);
		(L_75)->SetAtUnchecked(static_cast<il2cpp_array_size_t>(4), (RuntimeObject *)_stringLiteral400336950);
		String_t* L_76 = String_Concat_m2971454694(NULL /*static, unused*/, L_75, /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(Debug_t3317548046_il2cpp_TypeInfo_var);
		Debug_LogError_m2850623458(NULL /*static, unused*/, L_76, /*hidden argument*/NULL);
		CreateAtlasesCoroutineResult_t3502510657 * L_77 = __this->get_coroutineResult_1();
		L_77->set_isFinished_1((bool)1);
		goto IL_0474;
	}

IL_0203:
	{
		goto IL_0208;
	}

IL_0208:
	{
		int32_t L_78 = V_6;
		V_6 = ((int32_t)il2cpp_codegen_add((int32_t)L_78, (int32_t)1));
	}

IL_020e:
	{
		int32_t L_79 = V_6;
		List_1_t80147867 * L_80 = V_4;
		int32_t L_81 = V_5;
		MB_TexArraySlice_t2903040421 * L_82 = List_1_get_Item_m519272143(L_80, L_81, /*hidden argument*/List_1_get_Item_m519272143_RuntimeMethod_var);
		List_1_t3368419753 * L_83 = L_82->get_sourceMaterials_1();
		int32_t L_84 = List_1_get_Count_m1217301797(L_83, /*hidden argument*/List_1_get_Count_m1217301797_RuntimeMethod_var);
		if ((((int32_t)L_79) < ((int32_t)L_84)))
		{
			goto IL_0125;
		}
	}
	{
		int32_t L_85 = V_5;
		V_5 = ((int32_t)il2cpp_codegen_add((int32_t)L_85, (int32_t)1));
	}

IL_022e:
	{
		int32_t L_86 = V_5;
		List_1_t80147867 * L_87 = V_4;
		int32_t L_88 = List_1_get_Count_m824374063(L_87, /*hidden argument*/List_1_get_Count_m824374063_RuntimeMethod_var);
		if ((((int32_t)L_86) < ((int32_t)L_88)))
		{
			goto IL_011d;
		}
	}
	{
		int32_t L_89 = V_2;
		V_2 = ((int32_t)il2cpp_codegen_add((int32_t)L_89, (int32_t)1));
	}

IL_0240:
	{
		int32_t L_90 = V_2;
		MB3_TextureBaker_t37954774 * L_91 = __this->get_U24this_9();
		MB_MultiMaterialTexArrayU5BU5D_t3908014132* L_92 = L_91->get_resultMaterialsTexArray_30();
		if ((((int32_t)L_90) < ((int32_t)(((int32_t)((int32_t)(((RuntimeArray *)L_92)->max_length)))))))
		{
			goto IL_00c3;
		}
	}
	{
		MB3_TextureBaker_t37954774 * L_93 = __this->get_U24this_9();
		MB_MultiMaterialTexArrayU5BU5D_t3908014132* L_94 = L_93->get_resultMaterialsTexArray_30();
		__this->set_U3CnumResultMatsU3E__0_3((((int32_t)((int32_t)(((RuntimeArray *)L_94)->max_length)))));
		int32_t L_95 = __this->get_U3CnumResultMatsU3E__0_3();
		MB_TextureArrayResultMaterialU5BU5D_t631979971* L_96 = (MB_TextureArrayResultMaterialU5BU5D_t631979971*)SZArrayNew(MB_TextureArrayResultMaterialU5BU5D_t631979971_il2cpp_TypeInfo_var, (uint32_t)L_95);
		__this->set_U3CbakedMatsAndSlicesU3E__0_0(L_96);
		V_8 = 0;
		goto IL_02ea;
	}

IL_027f:
	{
		MB_TextureArrayResultMaterialU5BU5D_t631979971* L_97 = __this->get_U3CbakedMatsAndSlicesU3E__0_0();
		int32_t L_98 = V_8;
		MB_TextureArrayResultMaterial_t1449688550 * L_99 = (MB_TextureArrayResultMaterial_t1449688550 *)il2cpp_codegen_object_new(MB_TextureArrayResultMaterial_t1449688550_il2cpp_TypeInfo_var);
		MB_TextureArrayResultMaterial__ctor_m1520031195(L_99, /*hidden argument*/NULL);
		ArrayElementTypeCheck (L_97, L_99);
		(L_97)->SetAtUnchecked(static_cast<il2cpp_array_size_t>(L_98), (MB_TextureArrayResultMaterial_t1449688550 *)L_99);
		MB3_TextureBaker_t37954774 * L_100 = __this->get_U24this_9();
		MB_MultiMaterialTexArrayU5BU5D_t3908014132* L_101 = L_100->get_resultMaterialsTexArray_30();
		int32_t L_102 = V_8;
		int32_t L_103 = L_102;
		MB_MultiMaterialTexArray_t1025313673 * L_104 = (L_101)->GetAtUnchecked(static_cast<il2cpp_array_size_t>(L_103));
		List_1_t80147867 * L_105 = L_104->get_slices_1();
		int32_t L_106 = List_1_get_Count_m824374063(L_105, /*hidden argument*/List_1_get_Count_m824374063_RuntimeMethod_var);
		V_9 = L_106;
		MB_TextureArrayResultMaterialU5BU5D_t631979971* L_107 = __this->get_U3CbakedMatsAndSlicesU3E__0_0();
		int32_t L_108 = V_8;
		int32_t L_109 = L_108;
		MB_TextureArrayResultMaterial_t1449688550 * L_110 = (L_107)->GetAtUnchecked(static_cast<il2cpp_array_size_t>(L_109));
		int32_t L_111 = V_9;
		MB_AtlasesAndRectsU5BU5D_t4190144822* L_112 = (MB_AtlasesAndRectsU5BU5D_t4190144822*)SZArrayNew(MB_AtlasesAndRectsU5BU5D_t4190144822_il2cpp_TypeInfo_var, (uint32_t)L_111);
		MB_AtlasesAndRectsU5BU5D_t4190144822* L_113 = L_112;
		V_11 = L_113;
		L_110->set_slices_0(L_113);
		MB_AtlasesAndRectsU5BU5D_t4190144822* L_114 = V_11;
		V_10 = L_114;
		V_12 = 0;
		goto IL_02db;
	}

IL_02cb:
	{
		MB_AtlasesAndRectsU5BU5D_t4190144822* L_115 = V_10;
		int32_t L_116 = V_12;
		MB_AtlasesAndRects_t2070141231 * L_117 = (MB_AtlasesAndRects_t2070141231 *)il2cpp_codegen_object_new(MB_AtlasesAndRects_t2070141231_il2cpp_TypeInfo_var);
		MB_AtlasesAndRects__ctor_m2009631001(L_117, /*hidden argument*/NULL);
		ArrayElementTypeCheck (L_115, L_117);
		(L_115)->SetAtUnchecked(static_cast<il2cpp_array_size_t>(L_116), (MB_AtlasesAndRects_t2070141231 *)L_117);
		int32_t L_118 = V_12;
		V_12 = ((int32_t)il2cpp_codegen_add((int32_t)L_118, (int32_t)1));
	}

IL_02db:
	{
		int32_t L_119 = V_12;
		int32_t L_120 = V_9;
		if ((((int32_t)L_119) < ((int32_t)L_120)))
		{
			goto IL_02cb;
		}
	}
	{
		int32_t L_121 = V_8;
		V_8 = ((int32_t)il2cpp_codegen_add((int32_t)L_121, (int32_t)1));
	}

IL_02ea:
	{
		int32_t L_122 = V_8;
		MB_TextureArrayResultMaterialU5BU5D_t631979971* L_123 = __this->get_U3CbakedMatsAndSlicesU3E__0_0();
		if ((((int32_t)L_122) < ((int32_t)(((int32_t)((int32_t)(((RuntimeArray *)L_123)->max_length)))))))
		{
			goto IL_027f;
		}
	}
	{
		__this->set_U3CresMatIdxU3E__1_4(0);
		goto IL_03bc;
	}

IL_0305:
	{
		int32_t L_124 = __this->get_U3CresMatIdxU3E__1_4();
		MB_TextureArrayResultMaterialU5BU5D_t631979971* L_125 = __this->get_U3CbakedMatsAndSlicesU3E__0_0();
		int32_t L_126 = __this->get_U3CresMatIdxU3E__1_4();
		int32_t L_127 = L_126;
		MB_TextureArrayResultMaterial_t1449688550 * L_128 = (L_125)->GetAtUnchecked(static_cast<il2cpp_array_size_t>(L_127));
		MB3_TextureBaker_t37954774 * L_129 = __this->get_U24this_9();
		MB_MultiMaterialTexArrayU5BU5D_t3908014132* L_130 = L_129->get_resultMaterialsTexArray_30();
		int32_t L_131 = __this->get_U3CresMatIdxU3E__1_4();
		int32_t L_132 = L_131;
		MB_MultiMaterialTexArray_t1025313673 * L_133 = (L_130)->GetAtUnchecked(static_cast<il2cpp_array_size_t>(L_132));
		MB3_TextureBaker_t37954774 * L_134 = __this->get_U24this_9();
		List_1_t2585711361 * L_135 = L_134->get_objsToMesh_32();
		MB3_TextureCombiner_t2018981714 * L_136 = __this->get_combiner_5();
		MB3_TextureBaker_t37954774 * L_137 = __this->get_U24this_9();
		MB_TextureArrayFormatSetU5BU5D_t3992808264* L_138 = L_137->get_textureArrayOutputFormats_31();
		MB3_TextureBaker_t37954774 * L_139 = __this->get_U24this_9();
		MB_MultiMaterialTexArrayU5BU5D_t3908014132* L_140 = L_139->get_resultMaterialsTexArray_30();
		MB3_TextureBaker_t37954774 * L_141 = __this->get_U24this_9();
		List_1_t2795786026 * L_142 = VirtFuncInvoker0< List_1_t2795786026 * >::Invoke(29 /* System.Collections.Generic.List`1<DigitalOpus.MB.Core.ShaderTextureProperty> MB3_TextureBaker::get_customShaderProperties() */, L_141);
		ProgressUpdateDelegate_t883957101 * L_143 = __this->get_progressInfo_6();
		CreateAtlasesCoroutineResult_t3502510657 * L_144 = __this->get_coroutineResult_1();
		bool L_145 = __this->get_saveAtlasesAsAssets_7();
		RuntimeObject* L_146 = __this->get_editorMethods_2();
		float L_147 = __this->get_maxTimePerFrame_8();
		RuntimeObject* L_148 = MB_TextureArrays__CreateAtlasesCoroutineSingleResultMaterial_m2137761663(NULL /*static, unused*/, L_124, L_128, L_133, L_135, L_136, L_138, L_140, L_142, L_143, L_144, L_145, L_146, L_147, /*hidden argument*/NULL);
		__this->set_U24current_10(L_148);
		bool L_149 = __this->get_U24disposing_11();
		if (L_149)
		{
			goto IL_0394;
		}
	}
	{
		__this->set_U24PC_12(1);
	}

IL_0394:
	{
		goto IL_0476;
	}

IL_0399:
	{
		CreateAtlasesCoroutineResult_t3502510657 * L_150 = __this->get_coroutineResult_1();
		bool L_151 = L_150->get_success_0();
		if (L_151)
		{
			goto IL_03ae;
		}
	}
	{
		goto IL_0474;
	}

IL_03ae:
	{
		int32_t L_152 = __this->get_U3CresMatIdxU3E__1_4();
		__this->set_U3CresMatIdxU3E__1_4(((int32_t)il2cpp_codegen_add((int32_t)L_152, (int32_t)1)));
	}

IL_03bc:
	{
		int32_t L_153 = __this->get_U3CresMatIdxU3E__1_4();
		MB_TextureArrayResultMaterialU5BU5D_t631979971* L_154 = __this->get_U3CbakedMatsAndSlicesU3E__0_0();
		if ((((int32_t)L_153) < ((int32_t)(((int32_t)((int32_t)(((RuntimeArray *)L_154)->max_length)))))))
		{
			goto IL_0305;
		}
	}
	{
		CreateAtlasesCoroutineResult_t3502510657 * L_155 = __this->get_coroutineResult_1();
		bool L_156 = L_155->get_success_0();
		if (!L_156)
		{
			goto IL_0452;
		}
	}
	{
		MB3_TextureBaker_t37954774 * L_157 = __this->get_U24this_9();
		MB_TextureArrayResultMaterialU5BU5D_t631979971* L_158 = __this->get_U3CbakedMatsAndSlicesU3E__0_0();
		MB3_TextureBaker_unpackMat2RectMap_m743383816(L_157, L_158, /*hidden argument*/NULL);
		MB3_TextureBaker_t37954774 * L_159 = __this->get_U24this_9();
		MB2_TextureBakeResults_t548408826 * L_160 = VirtFuncInvoker0< MB2_TextureBakeResults_t548408826 * >::Invoke(4 /* MB2_TextureBakeResults MB3_MeshBakerRoot::get_textureBakeResults() */, L_159);
		L_160->set_resultType_5(1);
		MB3_TextureBaker_t37954774 * L_161 = __this->get_U24this_9();
		MB2_TextureBakeResults_t548408826 * L_162 = VirtFuncInvoker0< MB2_TextureBakeResults_t548408826 * >::Invoke(4 /* MB2_TextureBakeResults MB3_MeshBakerRoot::get_textureBakeResults() */, L_161);
		MB_MultiMaterialU5BU5D_t1825806119* L_163 = (MB_MultiMaterialU5BU5D_t1825806119*)SZArrayNew(MB_MultiMaterialU5BU5D_t1825806119_il2cpp_TypeInfo_var, (uint32_t)0);
		L_162->set_resultMaterials_7(L_163);
		MB3_TextureBaker_t37954774 * L_164 = __this->get_U24this_9();
		MB2_TextureBakeResults_t548408826 * L_165 = VirtFuncInvoker0< MB2_TextureBakeResults_t548408826 * >::Invoke(4 /* MB2_TextureBakeResults MB3_MeshBakerRoot::get_textureBakeResults() */, L_164);
		MB3_TextureBaker_t37954774 * L_166 = __this->get_U24this_9();
		MB_MultiMaterialTexArrayU5BU5D_t3908014132* L_167 = L_166->get_resultMaterialsTexArray_30();
		L_165->set_resultMaterialsTexArray_8(L_167);
		MB3_TextureBaker_t37954774 * L_168 = __this->get_U24this_9();
		int32_t L_169 = L_168->get_LOG_LEVEL_5();
		if ((((int32_t)L_169) < ((int32_t)3)))
		{
			goto IL_044d;
		}
	}
	{
		IL2CPP_RUNTIME_CLASS_INIT(Debug_t3317548046_il2cpp_TypeInfo_var);
		Debug_Log_m4051431634(NULL /*static, unused*/, _stringLiteral914251266, /*hidden argument*/NULL);
	}

IL_044d:
	{
		goto IL_046d;
	}

IL_0452:
	{
		MB3_TextureBaker_t37954774 * L_170 = __this->get_U24this_9();
		int32_t L_171 = L_170->get_LOG_LEVEL_5();
		if ((((int32_t)L_171) < ((int32_t)3)))
		{
			goto IL_046d;
		}
	}
	{
		IL2CPP_RUNTIME_CLASS_INIT(Debug_t3317548046_il2cpp_TypeInfo_var);
		Debug_Log_m4051431634(NULL /*static, unused*/, _stringLiteral1869155383, /*hidden argument*/NULL);
	}

IL_046d:
	{
		__this->set_U24PC_12((-1));
	}

IL_0474:
	{
		return (bool)0;
	}

IL_0476:
	{
		return (bool)1;
	}
}
// System.Object MB3_TextureBaker/<_CreateAtlasesCoroutineTextureArray>c__Iterator2::System.Collections.Generic.IEnumerator<object>.get_Current()
extern "C" IL2CPP_METHOD_ATTR RuntimeObject * U3C_CreateAtlasesCoroutineTextureArrayU3Ec__Iterator2_System_Collections_Generic_IEnumeratorU3CobjectU3E_get_Current_m2152961494 (U3C_CreateAtlasesCoroutineTextureArrayU3Ec__Iterator2_t3158008321 * __this, const RuntimeMethod* method)
{
	{
		RuntimeObject * L_0 = __this->get_U24current_10();
		return L_0;
	}
}
// System.Object MB3_TextureBaker/<_CreateAtlasesCoroutineTextureArray>c__Iterator2::System.Collections.IEnumerator.get_Current()
extern "C" IL2CPP_METHOD_ATTR RuntimeObject * U3C_CreateAtlasesCoroutineTextureArrayU3Ec__Iterator2_System_Collections_IEnumerator_get_Current_m14927721 (U3C_CreateAtlasesCoroutineTextureArrayU3Ec__Iterator2_t3158008321 * __this, const RuntimeMethod* method)
{
	{
		RuntimeObject * L_0 = __this->get_U24current_10();
		return L_0;
	}
}
// System.Void MB3_TextureBaker/<_CreateAtlasesCoroutineTextureArray>c__Iterator2::Dispose()
extern "C" IL2CPP_METHOD_ATTR void U3C_CreateAtlasesCoroutineTextureArrayU3Ec__Iterator2_Dispose_m3938477225 (U3C_CreateAtlasesCoroutineTextureArrayU3Ec__Iterator2_t3158008321 * __this, const RuntimeMethod* method)
{
	{
		__this->set_U24disposing_11((bool)1);
		__this->set_U24PC_12((-1));
		return;
	}
}
// System.Void MB3_TextureBaker/<_CreateAtlasesCoroutineTextureArray>c__Iterator2::Reset()
extern "C" IL2CPP_METHOD_ATTR void U3C_CreateAtlasesCoroutineTextureArrayU3Ec__Iterator2_Reset_m564995763 (U3C_CreateAtlasesCoroutineTextureArrayU3Ec__Iterator2_t3158008321 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (U3C_CreateAtlasesCoroutineTextureArrayU3Ec__Iterator2_Reset_m564995763_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		NotSupportedException_t1314879016 * L_0 = (NotSupportedException_t1314879016 *)il2cpp_codegen_object_new(NotSupportedException_t1314879016_il2cpp_TypeInfo_var);
		NotSupportedException__ctor_m2730133172(L_0, /*hidden argument*/NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_0, NULL, U3C_CreateAtlasesCoroutineTextureArrayU3Ec__Iterator2_Reset_m564995763_RuntimeMethod_var);
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
extern "C"  void DelegatePInvokeWrapper_OnCombinedTexturesCoroutineFail_t3579762109 (OnCombinedTexturesCoroutineFail_t3579762109 * __this, const RuntimeMethod* method)
{
	typedef void (DEFAULT_CALL *PInvokeFunc)();
	PInvokeFunc il2cppPInvokeFunc = reinterpret_cast<PInvokeFunc>(il2cpp_codegen_get_method_pointer(((RuntimeDelegate*)__this)->method));

	// Native function invocation
	il2cppPInvokeFunc();

}
// System.Void MB3_TextureBaker/OnCombinedTexturesCoroutineFail::.ctor(System.Object,System.IntPtr)
extern "C" IL2CPP_METHOD_ATTR void OnCombinedTexturesCoroutineFail__ctor_m2729087163 (OnCombinedTexturesCoroutineFail_t3579762109 * __this, RuntimeObject * ___object0, intptr_t ___method1, const RuntimeMethod* method)
{
	__this->set_method_ptr_0(il2cpp_codegen_get_method_pointer((RuntimeMethod*)___method1));
	__this->set_method_3(___method1);
	__this->set_m_target_2(___object0);
}
// System.Void MB3_TextureBaker/OnCombinedTexturesCoroutineFail::Invoke()
extern "C" IL2CPP_METHOD_ATTR void OnCombinedTexturesCoroutineFail_Invoke_m2982341252 (OnCombinedTexturesCoroutineFail_t3579762109 * __this, const RuntimeMethod* method)
{
	il2cpp_codegen_raise_execution_engine_exception_if_method_is_not_found((RuntimeMethod*)(__this->get_method_3()));
	DelegateU5BU5D_t1703627840* delegatesToInvoke = __this->get_delegates_11();
	if (delegatesToInvoke != NULL)
	{
		il2cpp_array_size_t length = delegatesToInvoke->max_length;
		for (il2cpp_array_size_t i = 0; i < length; i++)
		{
			Delegate_t1188392813* currentDelegate = (delegatesToInvoke)->GetAtUnchecked(static_cast<il2cpp_array_size_t>(i));
			Il2CppMethodPointer targetMethodPointer = currentDelegate->get_method_ptr_0();
			RuntimeMethod* targetMethod = (RuntimeMethod*)(currentDelegate->get_method_3());
			RuntimeObject* targetThis = currentDelegate->get_m_target_2();
			il2cpp_codegen_raise_execution_engine_exception_if_method_is_not_found(targetMethod);
			bool ___methodIsStatic = MethodIsStatic(targetMethod);
			if (___methodIsStatic)
			{
				if (il2cpp_codegen_method_parameter_count(targetMethod) == 0)
				{
					// open
					{
						typedef void (*FunctionPointerType) (RuntimeObject *, const RuntimeMethod*);
						((FunctionPointerType)targetMethodPointer)(NULL, targetMethod);
					}
				}
				else
				{
					// closed
					{
						typedef void (*FunctionPointerType) (RuntimeObject *, void*, const RuntimeMethod*);
						((FunctionPointerType)targetMethodPointer)(NULL, targetThis, targetMethod);
					}
				}
			}
			else
			{
				{
					// closed
					if (il2cpp_codegen_method_is_virtual(targetMethod) && !il2cpp_codegen_object_is_of_sealed_type(targetThis) && il2cpp_codegen_delegate_has_invoker((Il2CppDelegate*)__this))
					{
						if (il2cpp_codegen_method_is_generic_instance(targetMethod))
						{
							if (il2cpp_codegen_method_is_interface_method(targetMethod))
								GenericInterfaceActionInvoker0::Invoke(targetMethod, targetThis);
							else
								GenericVirtActionInvoker0::Invoke(targetMethod, targetThis);
						}
						else
						{
							if (il2cpp_codegen_method_is_interface_method(targetMethod))
								InterfaceActionInvoker0::Invoke(il2cpp_codegen_method_get_slot(targetMethod), il2cpp_codegen_method_get_declaring_type(targetMethod), targetThis);
							else
								VirtActionInvoker0::Invoke(il2cpp_codegen_method_get_slot(targetMethod), targetThis);
						}
					}
					else
					{
						typedef void (*FunctionPointerType) (void*, const RuntimeMethod*);
						((FunctionPointerType)targetMethodPointer)(targetThis, targetMethod);
					}
				}
			}
		}
	}
	else
	{
		Il2CppMethodPointer targetMethodPointer = __this->get_method_ptr_0();
		RuntimeMethod* targetMethod = (RuntimeMethod*)(__this->get_method_3());
		RuntimeObject* targetThis = __this->get_m_target_2();
		il2cpp_codegen_raise_execution_engine_exception_if_method_is_not_found(targetMethod);
		bool ___methodIsStatic = MethodIsStatic(targetMethod);
		if (___methodIsStatic)
		{
			if (il2cpp_codegen_method_parameter_count(targetMethod) == 0)
			{
				// open
				{
					typedef void (*FunctionPointerType) (RuntimeObject *, const RuntimeMethod*);
					((FunctionPointerType)targetMethodPointer)(NULL, targetMethod);
				}
			}
			else
			{
				// closed
				{
					typedef void (*FunctionPointerType) (RuntimeObject *, void*, const RuntimeMethod*);
					((FunctionPointerType)targetMethodPointer)(NULL, targetThis, targetMethod);
				}
			}
		}
		else
		{
			{
				// closed
				if (il2cpp_codegen_method_is_virtual(targetMethod) && !il2cpp_codegen_object_is_of_sealed_type(targetThis) && il2cpp_codegen_delegate_has_invoker((Il2CppDelegate*)__this))
				{
					if (il2cpp_codegen_method_is_generic_instance(targetMethod))
					{
						if (il2cpp_codegen_method_is_interface_method(targetMethod))
							GenericInterfaceActionInvoker0::Invoke(targetMethod, targetThis);
						else
							GenericVirtActionInvoker0::Invoke(targetMethod, targetThis);
					}
					else
					{
						if (il2cpp_codegen_method_is_interface_method(targetMethod))
							InterfaceActionInvoker0::Invoke(il2cpp_codegen_method_get_slot(targetMethod), il2cpp_codegen_method_get_declaring_type(targetMethod), targetThis);
						else
							VirtActionInvoker0::Invoke(il2cpp_codegen_method_get_slot(targetMethod), targetThis);
					}
				}
				else
				{
					typedef void (*FunctionPointerType) (void*, const RuntimeMethod*);
					((FunctionPointerType)targetMethodPointer)(targetThis, targetMethod);
				}
			}
		}
	}
}
// System.IAsyncResult MB3_TextureBaker/OnCombinedTexturesCoroutineFail::BeginInvoke(System.AsyncCallback,System.Object)
extern "C" IL2CPP_METHOD_ATTR RuntimeObject* OnCombinedTexturesCoroutineFail_BeginInvoke_m2300423894 (OnCombinedTexturesCoroutineFail_t3579762109 * __this, AsyncCallback_t3962456242 * ___callback0, RuntimeObject * ___object1, const RuntimeMethod* method)
{
	void *__d_args[1] = {0};
	return (RuntimeObject*)il2cpp_codegen_delegate_begin_invoke((RuntimeDelegate*)__this, __d_args, (RuntimeDelegate*)___callback0, (RuntimeObject*)___object1);
}
// System.Void MB3_TextureBaker/OnCombinedTexturesCoroutineFail::EndInvoke(System.IAsyncResult)
extern "C" IL2CPP_METHOD_ATTR void OnCombinedTexturesCoroutineFail_EndInvoke_m2595687129 (OnCombinedTexturesCoroutineFail_t3579762109 * __this, RuntimeObject* ___result0, const RuntimeMethod* method)
{
	il2cpp_codegen_delegate_end_invoke((Il2CppAsyncResult*) ___result0, 0);
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
extern "C"  void DelegatePInvokeWrapper_OnCombinedTexturesCoroutineSuccess_t3112909344 (OnCombinedTexturesCoroutineSuccess_t3112909344 * __this, const RuntimeMethod* method)
{
	typedef void (DEFAULT_CALL *PInvokeFunc)();
	PInvokeFunc il2cppPInvokeFunc = reinterpret_cast<PInvokeFunc>(il2cpp_codegen_get_method_pointer(((RuntimeDelegate*)__this)->method));

	// Native function invocation
	il2cppPInvokeFunc();

}
// System.Void MB3_TextureBaker/OnCombinedTexturesCoroutineSuccess::.ctor(System.Object,System.IntPtr)
extern "C" IL2CPP_METHOD_ATTR void OnCombinedTexturesCoroutineSuccess__ctor_m3107545287 (OnCombinedTexturesCoroutineSuccess_t3112909344 * __this, RuntimeObject * ___object0, intptr_t ___method1, const RuntimeMethod* method)
{
	__this->set_method_ptr_0(il2cpp_codegen_get_method_pointer((RuntimeMethod*)___method1));
	__this->set_method_3(___method1);
	__this->set_m_target_2(___object0);
}
// System.Void MB3_TextureBaker/OnCombinedTexturesCoroutineSuccess::Invoke()
extern "C" IL2CPP_METHOD_ATTR void OnCombinedTexturesCoroutineSuccess_Invoke_m2225395970 (OnCombinedTexturesCoroutineSuccess_t3112909344 * __this, const RuntimeMethod* method)
{
	il2cpp_codegen_raise_execution_engine_exception_if_method_is_not_found((RuntimeMethod*)(__this->get_method_3()));
	DelegateU5BU5D_t1703627840* delegatesToInvoke = __this->get_delegates_11();
	if (delegatesToInvoke != NULL)
	{
		il2cpp_array_size_t length = delegatesToInvoke->max_length;
		for (il2cpp_array_size_t i = 0; i < length; i++)
		{
			Delegate_t1188392813* currentDelegate = (delegatesToInvoke)->GetAtUnchecked(static_cast<il2cpp_array_size_t>(i));
			Il2CppMethodPointer targetMethodPointer = currentDelegate->get_method_ptr_0();
			RuntimeMethod* targetMethod = (RuntimeMethod*)(currentDelegate->get_method_3());
			RuntimeObject* targetThis = currentDelegate->get_m_target_2();
			il2cpp_codegen_raise_execution_engine_exception_if_method_is_not_found(targetMethod);
			bool ___methodIsStatic = MethodIsStatic(targetMethod);
			if (___methodIsStatic)
			{
				if (il2cpp_codegen_method_parameter_count(targetMethod) == 0)
				{
					// open
					{
						typedef void (*FunctionPointerType) (RuntimeObject *, const RuntimeMethod*);
						((FunctionPointerType)targetMethodPointer)(NULL, targetMethod);
					}
				}
				else
				{
					// closed
					{
						typedef void (*FunctionPointerType) (RuntimeObject *, void*, const RuntimeMethod*);
						((FunctionPointerType)targetMethodPointer)(NULL, targetThis, targetMethod);
					}
				}
			}
			else
			{
				{
					// closed
					if (il2cpp_codegen_method_is_virtual(targetMethod) && !il2cpp_codegen_object_is_of_sealed_type(targetThis) && il2cpp_codegen_delegate_has_invoker((Il2CppDelegate*)__this))
					{
						if (il2cpp_codegen_method_is_generic_instance(targetMethod))
						{
							if (il2cpp_codegen_method_is_interface_method(targetMethod))
								GenericInterfaceActionInvoker0::Invoke(targetMethod, targetThis);
							else
								GenericVirtActionInvoker0::Invoke(targetMethod, targetThis);
						}
						else
						{
							if (il2cpp_codegen_method_is_interface_method(targetMethod))
								InterfaceActionInvoker0::Invoke(il2cpp_codegen_method_get_slot(targetMethod), il2cpp_codegen_method_get_declaring_type(targetMethod), targetThis);
							else
								VirtActionInvoker0::Invoke(il2cpp_codegen_method_get_slot(targetMethod), targetThis);
						}
					}
					else
					{
						typedef void (*FunctionPointerType) (void*, const RuntimeMethod*);
						((FunctionPointerType)targetMethodPointer)(targetThis, targetMethod);
					}
				}
			}
		}
	}
	else
	{
		Il2CppMethodPointer targetMethodPointer = __this->get_method_ptr_0();
		RuntimeMethod* targetMethod = (RuntimeMethod*)(__this->get_method_3());
		RuntimeObject* targetThis = __this->get_m_target_2();
		il2cpp_codegen_raise_execution_engine_exception_if_method_is_not_found(targetMethod);
		bool ___methodIsStatic = MethodIsStatic(targetMethod);
		if (___methodIsStatic)
		{
			if (il2cpp_codegen_method_parameter_count(targetMethod) == 0)
			{
				// open
				{
					typedef void (*FunctionPointerType) (RuntimeObject *, const RuntimeMethod*);
					((FunctionPointerType)targetMethodPointer)(NULL, targetMethod);
				}
			}
			else
			{
				// closed
				{
					typedef void (*FunctionPointerType) (RuntimeObject *, void*, const RuntimeMethod*);
					((FunctionPointerType)targetMethodPointer)(NULL, targetThis, targetMethod);
				}
			}
		}
		else
		{
			{
				// closed
				if (il2cpp_codegen_method_is_virtual(targetMethod) && !il2cpp_codegen_object_is_of_sealed_type(targetThis) && il2cpp_codegen_delegate_has_invoker((Il2CppDelegate*)__this))
				{
					if (il2cpp_codegen_method_is_generic_instance(targetMethod))
					{
						if (il2cpp_codegen_method_is_interface_method(targetMethod))
							GenericInterfaceActionInvoker0::Invoke(targetMethod, targetThis);
						else
							GenericVirtActionInvoker0::Invoke(targetMethod, targetThis);
					}
					else
					{
						if (il2cpp_codegen_method_is_interface_method(targetMethod))
							InterfaceActionInvoker0::Invoke(il2cpp_codegen_method_get_slot(targetMethod), il2cpp_codegen_method_get_declaring_type(targetMethod), targetThis);
						else
							VirtActionInvoker0::Invoke(il2cpp_codegen_method_get_slot(targetMethod), targetThis);
					}
				}
				else
				{
					typedef void (*FunctionPointerType) (void*, const RuntimeMethod*);
					((FunctionPointerType)targetMethodPointer)(targetThis, targetMethod);
				}
			}
		}
	}
}
// System.IAsyncResult MB3_TextureBaker/OnCombinedTexturesCoroutineSuccess::BeginInvoke(System.AsyncCallback,System.Object)
extern "C" IL2CPP_METHOD_ATTR RuntimeObject* OnCombinedTexturesCoroutineSuccess_BeginInvoke_m3547825788 (OnCombinedTexturesCoroutineSuccess_t3112909344 * __this, AsyncCallback_t3962456242 * ___callback0, RuntimeObject * ___object1, const RuntimeMethod* method)
{
	void *__d_args[1] = {0};
	return (RuntimeObject*)il2cpp_codegen_delegate_begin_invoke((RuntimeDelegate*)__this, __d_args, (RuntimeDelegate*)___callback0, (RuntimeObject*)___object1);
}
// System.Void MB3_TextureBaker/OnCombinedTexturesCoroutineSuccess::EndInvoke(System.IAsyncResult)
extern "C" IL2CPP_METHOD_ATTR void OnCombinedTexturesCoroutineSuccess_EndInvoke_m1164326873 (OnCombinedTexturesCoroutineSuccess_t3112909344 * __this, RuntimeObject* ___result0, const RuntimeMethod* method)
{
	il2cpp_codegen_delegate_end_invoke((Il2CppAsyncResult*) ___result0, 0);
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Void MB_AtlasesAndRects::.ctor()
extern "C" IL2CPP_METHOD_ATTR void MB_AtlasesAndRects__ctor_m2009631001 (MB_AtlasesAndRects_t2070141231 * __this, const RuntimeMethod* method)
{
	{
		Object__ctor_m297566312(__this, /*hidden argument*/NULL);
		return;
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Void MB_MaterialAndUVRect::.ctor(UnityEngine.Material,UnityEngine.Rect,System.Boolean,UnityEngine.Rect,UnityEngine.Rect,UnityEngine.Rect,DigitalOpus.MB.Core.MB_TextureTilingTreatment,System.String)
extern "C" IL2CPP_METHOD_ATTR void MB_MaterialAndUVRect__ctor_m4130531208 (MB_MaterialAndUVRect_t1611876729 * __this, Material_t340375123 * ___mat0, Rect_t2360479859  ___destRect1, bool ___allPropsUseSameTiling2, Rect_t2360479859  ___sourceMaterialTiling3, Rect_t2360479859  ___samplingEncapsulatingRect4, Rect_t2360479859  ___srcUVsamplingRect5, int32_t ___treatment6, String_t* ___objName7, const RuntimeMethod* method)
{
	{
		__this->set_textureArraySliceIdx_3((-1));
		__this->set_allPropsUseSameTiling_4((bool)1);
		__this->set_tilingTreatment_9(5);
		Object__ctor_m297566312(__this, /*hidden argument*/NULL);
		bool L_0 = ___allPropsUseSameTiling2;
		if (!L_0)
		{
			goto IL_0021;
		}
	}

IL_0021:
	{
		bool L_1 = ___allPropsUseSameTiling2;
		if (L_1)
		{
			goto IL_0027;
		}
	}

IL_0027:
	{
		Material_t340375123 * L_2 = ___mat0;
		__this->set_material_0(L_2);
		Rect_t2360479859  L_3 = ___destRect1;
		__this->set_atlasRect_1(L_3);
		int32_t L_4 = ___treatment6;
		__this->set_tilingTreatment_9(L_4);
		bool L_5 = ___allPropsUseSameTiling2;
		__this->set_allPropsUseSameTiling_4(L_5);
		Rect_t2360479859  L_6 = ___sourceMaterialTiling3;
		__this->set_allPropsUseSameTiling_sourceMaterialTiling_5(L_6);
		Rect_t2360479859  L_7 = ___samplingEncapsulatingRect4;
		__this->set_allPropsUseSameTiling_samplingEncapsulatinRect_6(L_7);
		Rect_t2360479859  L_8 = ___srcUVsamplingRect5;
		__this->set_propsUseDifferntTiling_srcUVsamplingRect_7(L_8);
		String_t* L_9 = ___objName7;
		__this->set_srcObjName_2(L_9);
		return;
	}
}
// System.Int32 MB_MaterialAndUVRect::GetHashCode()
extern "C" IL2CPP_METHOD_ATTR int32_t MB_MaterialAndUVRect_GetHashCode_m4196852630 (MB_MaterialAndUVRect_t1611876729 * __this, const RuntimeMethod* method)
{
	{
		Material_t340375123 * L_0 = __this->get_material_0();
		int32_t L_1 = Object_GetInstanceID_m1255174761(L_0, /*hidden argument*/NULL);
		Rect_t2360479859 * L_2 = __this->get_address_of_allPropsUseSameTiling_samplingEncapsulatinRect_6();
		int32_t L_3 = Rect_GetHashCode_m1816164252((Rect_t2360479859 *)L_2, /*hidden argument*/NULL);
		Rect_t2360479859 * L_4 = __this->get_address_of_propsUseDifferntTiling_srcUVsamplingRect_7();
		int32_t L_5 = Rect_GetHashCode_m1816164252((Rect_t2360479859 *)L_4, /*hidden argument*/NULL);
		return ((int32_t)((int32_t)((int32_t)((int32_t)L_1^(int32_t)L_3))^(int32_t)L_5));
	}
}
// System.Boolean MB_MaterialAndUVRect::Equals(System.Object)
extern "C" IL2CPP_METHOD_ATTR bool MB_MaterialAndUVRect_Equals_m1344810780 (MB_MaterialAndUVRect_t1611876729 * __this, RuntimeObject * ___obj0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (MB_MaterialAndUVRect_Equals_m1344810780_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	MB_MaterialAndUVRect_t1611876729 * V_0 = NULL;
	int32_t G_B8_0 = 0;
	{
		RuntimeObject * L_0 = ___obj0;
		if (((MB_MaterialAndUVRect_t1611876729 *)IsInstClass((RuntimeObject*)L_0, MB_MaterialAndUVRect_t1611876729_il2cpp_TypeInfo_var)))
		{
			goto IL_000d;
		}
	}
	{
		return (bool)0;
	}

IL_000d:
	{
		RuntimeObject * L_1 = ___obj0;
		V_0 = ((MB_MaterialAndUVRect_t1611876729 *)CastclassClass((RuntimeObject*)L_1, MB_MaterialAndUVRect_t1611876729_il2cpp_TypeInfo_var));
		Material_t340375123 * L_2 = __this->get_material_0();
		MB_MaterialAndUVRect_t1611876729 * L_3 = V_0;
		Material_t340375123 * L_4 = L_3->get_material_0();
		IL2CPP_RUNTIME_CLASS_INIT(Object_t631007953_il2cpp_TypeInfo_var);
		bool L_5 = Object_op_Equality_m1810815630(NULL /*static, unused*/, L_2, L_4, /*hidden argument*/NULL);
		if (!L_5)
		{
			goto IL_007a;
		}
	}
	{
		Rect_t2360479859  L_6 = __this->get_allPropsUseSameTiling_samplingEncapsulatinRect_6();
		MB_MaterialAndUVRect_t1611876729 * L_7 = V_0;
		Rect_t2360479859  L_8 = L_7->get_allPropsUseSameTiling_samplingEncapsulatinRect_6();
		bool L_9 = Rect_op_Equality_m3986168348(NULL /*static, unused*/, L_6, L_8, /*hidden argument*/NULL);
		if (!L_9)
		{
			goto IL_007a;
		}
	}
	{
		Rect_t2360479859  L_10 = __this->get_allPropsUseSameTiling_sourceMaterialTiling_5();
		MB_MaterialAndUVRect_t1611876729 * L_11 = V_0;
		Rect_t2360479859  L_12 = L_11->get_allPropsUseSameTiling_sourceMaterialTiling_5();
		bool L_13 = Rect_op_Equality_m3986168348(NULL /*static, unused*/, L_10, L_12, /*hidden argument*/NULL);
		if (!L_13)
		{
			goto IL_007a;
		}
	}
	{
		bool L_14 = __this->get_allPropsUseSameTiling_4();
		MB_MaterialAndUVRect_t1611876729 * L_15 = V_0;
		bool L_16 = L_15->get_allPropsUseSameTiling_4();
		if ((!(((uint32_t)L_14) == ((uint32_t)L_16))))
		{
			goto IL_007a;
		}
	}
	{
		Rect_t2360479859  L_17 = __this->get_propsUseDifferntTiling_srcUVsamplingRect_7();
		MB_MaterialAndUVRect_t1611876729 * L_18 = V_0;
		Rect_t2360479859  L_19 = L_18->get_propsUseDifferntTiling_srcUVsamplingRect_7();
		bool L_20 = Rect_op_Equality_m3986168348(NULL /*static, unused*/, L_17, L_19, /*hidden argument*/NULL);
		G_B8_0 = ((int32_t)(L_20));
		goto IL_007b;
	}

IL_007a:
	{
		G_B8_0 = 0;
	}

IL_007b:
	{
		return (bool)G_B8_0;
	}
}
// UnityEngine.Rect MB_MaterialAndUVRect::GetEncapsulatingRect()
extern "C" IL2CPP_METHOD_ATTR Rect_t2360479859  MB_MaterialAndUVRect_GetEncapsulatingRect_m3470236996 (MB_MaterialAndUVRect_t1611876729 * __this, const RuntimeMethod* method)
{
	{
		bool L_0 = __this->get_allPropsUseSameTiling_4();
		if (!L_0)
		{
			goto IL_0012;
		}
	}
	{
		Rect_t2360479859  L_1 = __this->get_allPropsUseSameTiling_samplingEncapsulatinRect_6();
		return L_1;
	}

IL_0012:
	{
		Rect_t2360479859  L_2 = __this->get_propsUseDifferntTiling_srcUVsamplingRect_7();
		return L_2;
	}
}
// UnityEngine.Rect MB_MaterialAndUVRect::GetMaterialTilingRect()
extern "C" IL2CPP_METHOD_ATTR Rect_t2360479859  MB_MaterialAndUVRect_GetMaterialTilingRect_m1305701684 (MB_MaterialAndUVRect_t1611876729 * __this, const RuntimeMethod* method)
{
	{
		bool L_0 = __this->get_allPropsUseSameTiling_4();
		if (!L_0)
		{
			goto IL_0012;
		}
	}
	{
		Rect_t2360479859  L_1 = __this->get_allPropsUseSameTiling_sourceMaterialTiling_5();
		return L_1;
	}

IL_0012:
	{
		Rect_t2360479859  L_2;
		memset(&L_2, 0, sizeof(L_2));
		Rect__ctor_m2614021312((&L_2), (0.0f), (0.0f), (1.0f), (1.0f), /*hidden argument*/NULL);
		return L_2;
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Void MB_MultiMaterial::.ctor()
extern "C" IL2CPP_METHOD_ATTR void MB_MultiMaterial__ctor_m4131012043 (MB_MultiMaterial_t1888048978 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (MB_MultiMaterial__ctor_m4131012043_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		List_1_t1812449865 * L_0 = (List_1_t1812449865 *)il2cpp_codegen_object_new(List_1_t1812449865_il2cpp_TypeInfo_var);
		List_1__ctor_m1597736158(L_0, /*hidden argument*/List_1__ctor_m1597736158_RuntimeMethod_var);
		__this->set_sourceMaterials_2(L_0);
		Object__ctor_m297566312(__this, /*hidden argument*/NULL);
		return;
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Void MB_MultiMaterialTexArray::.ctor()
extern "C" IL2CPP_METHOD_ATTR void MB_MultiMaterialTexArray__ctor_m2532338842 (MB_MultiMaterialTexArray_t1025313673 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (MB_MultiMaterialTexArray__ctor_m2532338842_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		List_1_t80147867 * L_0 = (List_1_t80147867 *)il2cpp_codegen_object_new(List_1_t80147867_il2cpp_TypeInfo_var);
		List_1__ctor_m1911117364(L_0, /*hidden argument*/List_1__ctor_m1911117364_RuntimeMethod_var);
		__this->set_slices_1(L_0);
		List_1_t2274492589 * L_1 = (List_1_t2274492589 *)il2cpp_codegen_object_new(List_1_t2274492589_il2cpp_TypeInfo_var);
		List_1__ctor_m1245396982(L_1, /*hidden argument*/List_1__ctor_m1245396982_RuntimeMethod_var);
		__this->set_textureProperties_2(L_1);
		Object__ctor_m297566312(__this, /*hidden argument*/NULL);
		return;
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Void MB_TexArrayForProperty::.ctor(System.String,MB_TextureArrayReference[])
extern "C" IL2CPP_METHOD_ATTR void MB_TexArrayForProperty__ctor_m3794645001 (MB_TexArrayForProperty_t802417847 * __this, String_t* ___name0, MB_TextureArrayReferenceU5BU5D_t2256643913* ___texRefs1, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (MB_TexArrayForProperty__ctor_m3794645001_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		MB_TextureArrayReferenceU5BU5D_t2256643913* L_0 = (MB_TextureArrayReferenceU5BU5D_t2256643913*)SZArrayNew(MB_TextureArrayReferenceU5BU5D_t2256643913_il2cpp_TypeInfo_var, (uint32_t)0);
		__this->set_formats_1(L_0);
		Object__ctor_m297566312(__this, /*hidden argument*/NULL);
		String_t* L_1 = ___name0;
		__this->set_texPropertyName_0(L_1);
		MB_TextureArrayReferenceU5BU5D_t2256643913* L_2 = ___texRefs1;
		__this->set_formats_1(L_2);
		return;
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Void MB_TexArraySlice::.ctor()
extern "C" IL2CPP_METHOD_ATTR void MB_TexArraySlice__ctor_m704789157 (MB_TexArraySlice_t2903040421 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (MB_TexArraySlice__ctor_m704789157_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		List_1_t3368419753 * L_0 = (List_1_t3368419753 *)il2cpp_codegen_object_new(List_1_t3368419753_il2cpp_TypeInfo_var);
		List_1__ctor_m3663177880(L_0, /*hidden argument*/List_1__ctor_m3663177880_RuntimeMethod_var);
		__this->set_sourceMaterials_1(L_0);
		Object__ctor_m297566312(__this, /*hidden argument*/NULL);
		return;
	}
}
// System.Boolean MB_TexArraySlice::ContainsMaterial(UnityEngine.Material)
extern "C" IL2CPP_METHOD_ATTR bool MB_TexArraySlice_ContainsMaterial_m3210920603 (MB_TexArraySlice_t2903040421 * __this, Material_t340375123 * ___mat0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (MB_TexArraySlice_ContainsMaterial_m3210920603_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	{
		V_0 = 0;
		goto IL_0029;
	}

IL_0007:
	{
		List_1_t3368419753 * L_0 = __this->get_sourceMaterials_1();
		int32_t L_1 = V_0;
		MB_TexArraySliceRendererMatPair_t1896345011 * L_2 = List_1_get_Item_m800292271(L_0, L_1, /*hidden argument*/List_1_get_Item_m800292271_RuntimeMethod_var);
		Material_t340375123 * L_3 = L_2->get_sourceMaterial_0();
		Material_t340375123 * L_4 = ___mat0;
		IL2CPP_RUNTIME_CLASS_INIT(Object_t631007953_il2cpp_TypeInfo_var);
		bool L_5 = Object_op_Equality_m1810815630(NULL /*static, unused*/, L_3, L_4, /*hidden argument*/NULL);
		if (!L_5)
		{
			goto IL_0025;
		}
	}
	{
		return (bool)1;
	}

IL_0025:
	{
		int32_t L_6 = V_0;
		V_0 = ((int32_t)il2cpp_codegen_add((int32_t)L_6, (int32_t)1));
	}

IL_0029:
	{
		int32_t L_7 = V_0;
		List_1_t3368419753 * L_8 = __this->get_sourceMaterials_1();
		int32_t L_9 = List_1_get_Count_m1217301797(L_8, /*hidden argument*/List_1_get_Count_m1217301797_RuntimeMethod_var);
		if ((((int32_t)L_7) < ((int32_t)L_9)))
		{
			goto IL_0007;
		}
	}
	{
		return (bool)0;
	}
}
// System.Collections.Generic.HashSet`1<UnityEngine.Material> MB_TexArraySlice::GetDistinctMaterials()
extern "C" IL2CPP_METHOD_ATTR HashSet_1_t3200291893 * MB_TexArraySlice_GetDistinctMaterials_m4148867048 (MB_TexArraySlice_t2903040421 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (MB_TexArraySlice_GetDistinctMaterials_m4148867048_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	HashSet_1_t3200291893 * V_0 = NULL;
	int32_t V_1 = 0;
	{
		HashSet_1_t3200291893 * L_0 = (HashSet_1_t3200291893 *)il2cpp_codegen_object_new(HashSet_1_t3200291893_il2cpp_TypeInfo_var);
		HashSet_1__ctor_m3459089090(L_0, /*hidden argument*/HashSet_1__ctor_m3459089090_RuntimeMethod_var);
		V_0 = L_0;
		List_1_t3368419753 * L_1 = __this->get_sourceMaterials_1();
		if (L_1)
		{
			goto IL_0013;
		}
	}
	{
		HashSet_1_t3200291893 * L_2 = V_0;
		return L_2;
	}

IL_0013:
	{
		V_1 = 0;
		goto IL_0036;
	}

IL_001a:
	{
		HashSet_1_t3200291893 * L_3 = V_0;
		List_1_t3368419753 * L_4 = __this->get_sourceMaterials_1();
		int32_t L_5 = V_1;
		MB_TexArraySliceRendererMatPair_t1896345011 * L_6 = List_1_get_Item_m800292271(L_4, L_5, /*hidden argument*/List_1_get_Item_m800292271_RuntimeMethod_var);
		Material_t340375123 * L_7 = L_6->get_sourceMaterial_0();
		HashSet_1_Add_m3074301316(L_3, L_7, /*hidden argument*/HashSet_1_Add_m3074301316_RuntimeMethod_var);
		int32_t L_8 = V_1;
		V_1 = ((int32_t)il2cpp_codegen_add((int32_t)L_8, (int32_t)1));
	}

IL_0036:
	{
		int32_t L_9 = V_1;
		List_1_t3368419753 * L_10 = __this->get_sourceMaterials_1();
		int32_t L_11 = List_1_get_Count_m1217301797(L_10, /*hidden argument*/List_1_get_Count_m1217301797_RuntimeMethod_var);
		if ((((int32_t)L_9) < ((int32_t)L_11)))
		{
			goto IL_001a;
		}
	}
	{
		HashSet_1_t3200291893 * L_12 = V_0;
		return L_12;
	}
}
// System.Boolean MB_TexArraySlice::ContainsMaterialAndMesh(UnityEngine.Material,UnityEngine.Mesh)
extern "C" IL2CPP_METHOD_ATTR bool MB_TexArraySlice_ContainsMaterialAndMesh_m3200184693 (MB_TexArraySlice_t2903040421 * __this, Material_t340375123 * ___mat0, Mesh_t3648964284 * ___mesh1, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (MB_TexArraySlice_ContainsMaterialAndMesh_m3200184693_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	{
		V_0 = 0;
		goto IL_004a;
	}

IL_0007:
	{
		List_1_t3368419753 * L_0 = __this->get_sourceMaterials_1();
		int32_t L_1 = V_0;
		MB_TexArraySliceRendererMatPair_t1896345011 * L_2 = List_1_get_Item_m800292271(L_0, L_1, /*hidden argument*/List_1_get_Item_m800292271_RuntimeMethod_var);
		Material_t340375123 * L_3 = L_2->get_sourceMaterial_0();
		Material_t340375123 * L_4 = ___mat0;
		IL2CPP_RUNTIME_CLASS_INIT(Object_t631007953_il2cpp_TypeInfo_var);
		bool L_5 = Object_op_Equality_m1810815630(NULL /*static, unused*/, L_3, L_4, /*hidden argument*/NULL);
		if (!L_5)
		{
			goto IL_0046;
		}
	}
	{
		List_1_t3368419753 * L_6 = __this->get_sourceMaterials_1();
		int32_t L_7 = V_0;
		MB_TexArraySliceRendererMatPair_t1896345011 * L_8 = List_1_get_Item_m800292271(L_6, L_7, /*hidden argument*/List_1_get_Item_m800292271_RuntimeMethod_var);
		GameObject_t1113636619 * L_9 = L_8->get_renderer_1();
		IL2CPP_RUNTIME_CLASS_INIT(MB_Utility_t3997274809_il2cpp_TypeInfo_var);
		Mesh_t3648964284 * L_10 = MB_Utility_GetMesh_m3260485892(NULL /*static, unused*/, L_9, /*hidden argument*/NULL);
		Mesh_t3648964284 * L_11 = ___mesh1;
		IL2CPP_RUNTIME_CLASS_INIT(Object_t631007953_il2cpp_TypeInfo_var);
		bool L_12 = Object_op_Equality_m1810815630(NULL /*static, unused*/, L_10, L_11, /*hidden argument*/NULL);
		if (!L_12)
		{
			goto IL_0046;
		}
	}
	{
		return (bool)1;
	}

IL_0046:
	{
		int32_t L_13 = V_0;
		V_0 = ((int32_t)il2cpp_codegen_add((int32_t)L_13, (int32_t)1));
	}

IL_004a:
	{
		int32_t L_14 = V_0;
		List_1_t3368419753 * L_15 = __this->get_sourceMaterials_1();
		int32_t L_16 = List_1_get_Count_m1217301797(L_15, /*hidden argument*/List_1_get_Count_m1217301797_RuntimeMethod_var);
		if ((((int32_t)L_14) < ((int32_t)L_16)))
		{
			goto IL_0007;
		}
	}
	{
		return (bool)0;
	}
}
// System.Collections.Generic.List`1<UnityEngine.Material> MB_TexArraySlice::GetAllUsedMaterials(System.Collections.Generic.List`1<UnityEngine.Material>)
extern "C" IL2CPP_METHOD_ATTR List_1_t1812449865 * MB_TexArraySlice_GetAllUsedMaterials_m4255047433 (MB_TexArraySlice_t2903040421 * __this, List_1_t1812449865 * ___usedMats0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (MB_TexArraySlice_GetAllUsedMaterials_m4255047433_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	{
		List_1_t1812449865 * L_0 = ___usedMats0;
		List_1_Clear_m1260798391(L_0, /*hidden argument*/List_1_Clear_m1260798391_RuntimeMethod_var);
		V_0 = 0;
		goto IL_0028;
	}

IL_000d:
	{
		List_1_t1812449865 * L_1 = ___usedMats0;
		List_1_t3368419753 * L_2 = __this->get_sourceMaterials_1();
		int32_t L_3 = V_0;
		MB_TexArraySliceRendererMatPair_t1896345011 * L_4 = List_1_get_Item_m800292271(L_2, L_3, /*hidden argument*/List_1_get_Item_m800292271_RuntimeMethod_var);
		Material_t340375123 * L_5 = L_4->get_sourceMaterial_0();
		List_1_Add_m2906470202(L_1, L_5, /*hidden argument*/List_1_Add_m2906470202_RuntimeMethod_var);
		int32_t L_6 = V_0;
		V_0 = ((int32_t)il2cpp_codegen_add((int32_t)L_6, (int32_t)1));
	}

IL_0028:
	{
		int32_t L_7 = V_0;
		List_1_t3368419753 * L_8 = __this->get_sourceMaterials_1();
		int32_t L_9 = List_1_get_Count_m1217301797(L_8, /*hidden argument*/List_1_get_Count_m1217301797_RuntimeMethod_var);
		if ((((int32_t)L_7) < ((int32_t)L_9)))
		{
			goto IL_000d;
		}
	}
	{
		List_1_t1812449865 * L_10 = ___usedMats0;
		return L_10;
	}
}
// System.Collections.Generic.List`1<UnityEngine.GameObject> MB_TexArraySlice::GetAllUsedRenderers(System.Collections.Generic.List`1<UnityEngine.GameObject>)
extern "C" IL2CPP_METHOD_ATTR List_1_t2585711361 * MB_TexArraySlice_GetAllUsedRenderers_m635831735 (MB_TexArraySlice_t2903040421 * __this, List_1_t2585711361 * ___allObjsFromTextureBaker0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (MB_TexArraySlice_GetAllUsedRenderers_m635831735_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	List_1_t2585711361 * V_0 = NULL;
	int32_t V_1 = 0;
	{
		bool L_0 = __this->get_considerMeshUVs_0();
		if (!L_0)
		{
			goto IL_0046;
		}
	}
	{
		List_1_t2585711361 * L_1 = (List_1_t2585711361 *)il2cpp_codegen_object_new(List_1_t2585711361_il2cpp_TypeInfo_var);
		List_1__ctor_m1424466557(L_1, /*hidden argument*/List_1__ctor_m1424466557_RuntimeMethod_var);
		V_0 = L_1;
		V_1 = 0;
		goto IL_0033;
	}

IL_0018:
	{
		List_1_t2585711361 * L_2 = V_0;
		List_1_t3368419753 * L_3 = __this->get_sourceMaterials_1();
		int32_t L_4 = V_1;
		MB_TexArraySliceRendererMatPair_t1896345011 * L_5 = List_1_get_Item_m800292271(L_3, L_4, /*hidden argument*/List_1_get_Item_m800292271_RuntimeMethod_var);
		GameObject_t1113636619 * L_6 = L_5->get_renderer_1();
		List_1_Add_m2765963565(L_2, L_6, /*hidden argument*/List_1_Add_m2765963565_RuntimeMethod_var);
		int32_t L_7 = V_1;
		V_1 = ((int32_t)il2cpp_codegen_add((int32_t)L_7, (int32_t)1));
	}

IL_0033:
	{
		int32_t L_8 = V_1;
		List_1_t3368419753 * L_9 = __this->get_sourceMaterials_1();
		int32_t L_10 = List_1_get_Count_m1217301797(L_9, /*hidden argument*/List_1_get_Count_m1217301797_RuntimeMethod_var);
		if ((((int32_t)L_8) < ((int32_t)L_10)))
		{
			goto IL_0018;
		}
	}
	{
		List_1_t2585711361 * L_11 = V_0;
		return L_11;
	}

IL_0046:
	{
		List_1_t2585711361 * L_12 = ___allObjsFromTextureBaker0;
		return L_12;
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Void MB_TexArraySliceRendererMatPair::.ctor()
extern "C" IL2CPP_METHOD_ATTR void MB_TexArraySliceRendererMatPair__ctor_m3534943638 (MB_TexArraySliceRendererMatPair_t1896345011 * __this, const RuntimeMethod* method)
{
	{
		Object__ctor_m297566312(__this, /*hidden argument*/NULL);
		return;
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Void MB_TextureArrayFormat::.ctor()
extern "C" IL2CPP_METHOD_ATTR void MB_TextureArrayFormat__ctor_m3619063084 (MB_TextureArrayFormat_t4143201819 * __this, const RuntimeMethod* method)
{
	{
		Object__ctor_m297566312(__this, /*hidden argument*/NULL);
		return;
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Void MB_TextureArrayFormatSet::.ctor()
extern "C" IL2CPP_METHOD_ATTR void MB_TextureArrayFormatSet__ctor_m2949690429 (MB_TextureArrayFormatSet_t3246442245 * __this, const RuntimeMethod* method)
{
	{
		Object__ctor_m297566312(__this, /*hidden argument*/NULL);
		return;
	}
}
// System.Boolean MB_TextureArrayFormatSet::ValidateTextureImporterFormatsExistsForTextureFormats(DigitalOpus.MB.Core.MB2_EditorMethodsInterface,System.Int32)
extern "C" IL2CPP_METHOD_ATTR bool MB_TextureArrayFormatSet_ValidateTextureImporterFormatsExistsForTextureFormats_m383290541 (MB_TextureArrayFormatSet_t3246442245 * __this, RuntimeObject* ___editorMethods0, int32_t ___idx1, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (MB_TextureArrayFormatSet_ValidateTextureImporterFormatsExistsForTextureFormats_m383290541_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	{
		RuntimeObject* L_0 = ___editorMethods0;
		if (L_0)
		{
			goto IL_0008;
		}
	}
	{
		return (bool)1;
	}

IL_0008:
	{
		RuntimeObject* L_1 = ___editorMethods0;
		int32_t L_2 = __this->get_defaultFormat_1();
		bool L_3 = InterfaceFuncInvoker1< bool, int32_t >::Invoke(21 /* System.Boolean DigitalOpus.MB.Core.MB2_EditorMethodsInterface::TextureImporterFormatExistsForTextureFormat(UnityEngine.TextureFormat) */, MB2_EditorMethodsInterface_t3086174398_il2cpp_TypeInfo_var, L_1, L_2);
		if (L_3)
		{
			goto IL_0052;
		}
	}
	{
		ObjectU5BU5D_t2843939325* L_4 = (ObjectU5BU5D_t2843939325*)SZArrayNew(ObjectU5BU5D_t2843939325_il2cpp_TypeInfo_var, (uint32_t)4);
		ObjectU5BU5D_t2843939325* L_5 = L_4;
		ArrayElementTypeCheck (L_5, _stringLiteral3437514210);
		(L_5)->SetAtUnchecked(static_cast<il2cpp_array_size_t>(0), (RuntimeObject *)_stringLiteral3437514210);
		ObjectU5BU5D_t2843939325* L_6 = L_5;
		int32_t L_7 = ___idx1;
		int32_t L_8 = L_7;
		RuntimeObject * L_9 = Box(Int32_t2950945753_il2cpp_TypeInfo_var, &L_8);
		ArrayElementTypeCheck (L_6, L_9);
		(L_6)->SetAtUnchecked(static_cast<il2cpp_array_size_t>(1), (RuntimeObject *)L_9);
		ObjectU5BU5D_t2843939325* L_10 = L_6;
		ArrayElementTypeCheck (L_10, _stringLiteral277039634);
		(L_10)->SetAtUnchecked(static_cast<il2cpp_array_size_t>(2), (RuntimeObject *)_stringLiteral277039634);
		ObjectU5BU5D_t2843939325* L_11 = L_10;
		int32_t L_12 = __this->get_defaultFormat_1();
		int32_t L_13 = L_12;
		RuntimeObject * L_14 = Box(TextureFormat_t2701165832_il2cpp_TypeInfo_var, &L_13);
		ArrayElementTypeCheck (L_11, L_14);
		(L_11)->SetAtUnchecked(static_cast<il2cpp_array_size_t>(3), (RuntimeObject *)L_14);
		String_t* L_15 = String_Concat_m2971454694(NULL /*static, unused*/, L_11, /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(Debug_t3317548046_il2cpp_TypeInfo_var);
		Debug_LogError_m2850623458(NULL /*static, unused*/, L_15, /*hidden argument*/NULL);
		return (bool)0;
	}

IL_0052:
	{
		V_0 = 0;
		goto IL_00ce;
	}

IL_0059:
	{
		RuntimeObject* L_16 = ___editorMethods0;
		MB_TextureArrayFormatU5BU5D_t1822177050* L_17 = __this->get_formatOverrides_2();
		int32_t L_18 = V_0;
		int32_t L_19 = L_18;
		MB_TextureArrayFormat_t4143201819 * L_20 = (L_17)->GetAtUnchecked(static_cast<il2cpp_array_size_t>(L_19));
		int32_t L_21 = L_20->get_format_1();
		bool L_22 = InterfaceFuncInvoker1< bool, int32_t >::Invoke(21 /* System.Boolean DigitalOpus.MB.Core.MB2_EditorMethodsInterface::TextureImporterFormatExistsForTextureFormat(UnityEngine.TextureFormat) */, MB2_EditorMethodsInterface_t3086174398_il2cpp_TypeInfo_var, L_16, L_21);
		if (L_22)
		{
			goto IL_00ca;
		}
	}
	{
		ObjectU5BU5D_t2843939325* L_23 = (ObjectU5BU5D_t2843939325*)SZArrayNew(ObjectU5BU5D_t2843939325_il2cpp_TypeInfo_var, (uint32_t)7);
		ObjectU5BU5D_t2843939325* L_24 = L_23;
		ArrayElementTypeCheck (L_24, _stringLiteral3437514210);
		(L_24)->SetAtUnchecked(static_cast<il2cpp_array_size_t>(0), (RuntimeObject *)_stringLiteral3437514210);
		ObjectU5BU5D_t2843939325* L_25 = L_24;
		int32_t L_26 = ___idx1;
		int32_t L_27 = L_26;
		RuntimeObject * L_28 = Box(Int32_t2950945753_il2cpp_TypeInfo_var, &L_27);
		ArrayElementTypeCheck (L_25, L_28);
		(L_25)->SetAtUnchecked(static_cast<il2cpp_array_size_t>(1), (RuntimeObject *)L_28);
		ObjectU5BU5D_t2843939325* L_29 = L_25;
		ArrayElementTypeCheck (L_29, _stringLiteral861462371);
		(L_29)->SetAtUnchecked(static_cast<il2cpp_array_size_t>(2), (RuntimeObject *)_stringLiteral861462371);
		ObjectU5BU5D_t2843939325* L_30 = L_29;
		int32_t L_31 = V_0;
		int32_t L_32 = L_31;
		RuntimeObject * L_33 = Box(Int32_t2950945753_il2cpp_TypeInfo_var, &L_32);
		ArrayElementTypeCheck (L_30, L_33);
		(L_30)->SetAtUnchecked(static_cast<il2cpp_array_size_t>(3), (RuntimeObject *)L_33);
		ObjectU5BU5D_t2843939325* L_34 = L_30;
		ArrayElementTypeCheck (L_34, _stringLiteral3451041664);
		(L_34)->SetAtUnchecked(static_cast<il2cpp_array_size_t>(4), (RuntimeObject *)_stringLiteral3451041664);
		ObjectU5BU5D_t2843939325* L_35 = L_34;
		MB_TextureArrayFormatU5BU5D_t1822177050* L_36 = __this->get_formatOverrides_2();
		int32_t L_37 = V_0;
		int32_t L_38 = L_37;
		MB_TextureArrayFormat_t4143201819 * L_39 = (L_36)->GetAtUnchecked(static_cast<il2cpp_array_size_t>(L_38));
		int32_t L_40 = L_39->get_format_1();
		int32_t L_41 = L_40;
		RuntimeObject * L_42 = Box(TextureFormat_t2701165832_il2cpp_TypeInfo_var, &L_41);
		ArrayElementTypeCheck (L_35, L_42);
		(L_35)->SetAtUnchecked(static_cast<il2cpp_array_size_t>(5), (RuntimeObject *)L_42);
		ObjectU5BU5D_t2843939325* L_43 = L_35;
		ArrayElementTypeCheck (L_43, _stringLiteral3452614535);
		(L_43)->SetAtUnchecked(static_cast<il2cpp_array_size_t>(6), (RuntimeObject *)_stringLiteral3452614535);
		String_t* L_44 = String_Concat_m2971454694(NULL /*static, unused*/, L_43, /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(Debug_t3317548046_il2cpp_TypeInfo_var);
		Debug_LogError_m2850623458(NULL /*static, unused*/, L_44, /*hidden argument*/NULL);
		return (bool)0;
	}

IL_00ca:
	{
		int32_t L_45 = V_0;
		V_0 = ((int32_t)il2cpp_codegen_add((int32_t)L_45, (int32_t)1));
	}

IL_00ce:
	{
		int32_t L_46 = V_0;
		MB_TextureArrayFormatU5BU5D_t1822177050* L_47 = __this->get_formatOverrides_2();
		if ((((int32_t)L_46) < ((int32_t)(((int32_t)((int32_t)(((RuntimeArray *)L_47)->max_length)))))))
		{
			goto IL_0059;
		}
	}
	{
		return (bool)1;
	}
}
// UnityEngine.TextureFormat MB_TextureArrayFormatSet::GetFormatForProperty(System.String)
extern "C" IL2CPP_METHOD_ATTR int32_t MB_TextureArrayFormatSet_GetFormatForProperty_m4141560964 (MB_TextureArrayFormatSet_t3246442245 * __this, String_t* ___propName0, const RuntimeMethod* method)
{
	int32_t V_0 = 0;
	{
		V_0 = 0;
		goto IL_0036;
	}

IL_0007:
	{
		MB_TextureArrayFormatU5BU5D_t1822177050* L_0 = __this->get_formatOverrides_2();
		MB_TextureArrayFormatU5BU5D_t1822177050* L_1 = __this->get_formatOverrides_2();
		int32_t L_2 = V_0;
		int32_t L_3 = L_2;
		MB_TextureArrayFormat_t4143201819 * L_4 = (L_1)->GetAtUnchecked(static_cast<il2cpp_array_size_t>(L_3));
		String_t* L_5 = L_4->get_propertyName_0();
		bool L_6 = VirtFuncInvoker1< bool, RuntimeObject * >::Invoke(0 /* System.Boolean System.Object::Equals(System.Object) */, (RuntimeObject *)(RuntimeObject *)L_0, L_5);
		if (!L_6)
		{
			goto IL_0032;
		}
	}
	{
		MB_TextureArrayFormatU5BU5D_t1822177050* L_7 = __this->get_formatOverrides_2();
		int32_t L_8 = V_0;
		int32_t L_9 = L_8;
		MB_TextureArrayFormat_t4143201819 * L_10 = (L_7)->GetAtUnchecked(static_cast<il2cpp_array_size_t>(L_9));
		int32_t L_11 = L_10->get_format_1();
		return L_11;
	}

IL_0032:
	{
		int32_t L_12 = V_0;
		V_0 = ((int32_t)il2cpp_codegen_add((int32_t)L_12, (int32_t)1));
	}

IL_0036:
	{
		int32_t L_13 = V_0;
		MB_TextureArrayFormatU5BU5D_t1822177050* L_14 = __this->get_formatOverrides_2();
		if ((((int32_t)L_13) < ((int32_t)(((int32_t)((int32_t)(((RuntimeArray *)L_14)->max_length)))))))
		{
			goto IL_0007;
		}
	}
	{
		int32_t L_15 = __this->get_defaultFormat_1();
		return L_15;
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Void MB_TextureArrayReference::.ctor(System.String,UnityEngine.Texture2DArray)
extern "C" IL2CPP_METHOD_ATTR void MB_TextureArrayReference__ctor_m1624873073 (MB_TextureArrayReference_t2719925336 * __this, String_t* ___formatSetName0, Texture2DArray_t4044506685 * ___ta1, const RuntimeMethod* method)
{
	{
		Object__ctor_m297566312(__this, /*hidden argument*/NULL);
		String_t* L_0 = ___formatSetName0;
		__this->set_texFromatSetName_0(L_0);
		Texture2DArray_t4044506685 * L_1 = ___ta1;
		__this->set_texArray_1(L_1);
		return;
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Void MB_TextureArrayResultMaterial::.ctor()
extern "C" IL2CPP_METHOD_ATTR void MB_TextureArrayResultMaterial__ctor_m1520031195 (MB_TextureArrayResultMaterial_t1449688550 * __this, const RuntimeMethod* method)
{
	{
		Object__ctor_m297566312(__this, /*hidden argument*/NULL);
		return;
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Void MB_TextureCombinerRenderTexture::.ctor()
extern "C" IL2CPP_METHOD_ATTR void MB_TextureCombinerRenderTexture__ctor_m3863761954 (MB_TextureCombinerRenderTexture_t1792150119 * __this, const RuntimeMethod* method)
{
	{
		__this->set_LOG_LEVEL_0(3);
		Object__ctor_m297566312(__this, /*hidden argument*/NULL);
		return;
	}
}
// UnityEngine.Texture2D MB_TextureCombinerRenderTexture::DoRenderAtlas(UnityEngine.GameObject,System.Int32,System.Int32,System.Int32,UnityEngine.Rect[],System.Collections.Generic.List`1<DigitalOpus.MB.Core.MB_TexSet>,System.Int32,DigitalOpus.MB.Core.ShaderTextureProperty,DigitalOpus.MB.Core.MB3_TextureCombinerNonTextureProperties,System.Boolean,System.Boolean,System.Boolean,DigitalOpus.MB.Core.MB3_TextureCombiner,DigitalOpus.MB.Core.MB2_LogLevel)
extern "C" IL2CPP_METHOD_ATTR Texture2D_t3840446185 * MB_TextureCombinerRenderTexture_DoRenderAtlas_m2650485798 (MB_TextureCombinerRenderTexture_t1792150119 * __this, GameObject_t1113636619 * ___gameObject0, int32_t ___width1, int32_t ___height2, int32_t ___padding3, RectU5BU5D_t2936723554* ___rss4, List_1_t1552207755 * ___textureSetss5, int32_t ___indexOfTexSetToRenders6, ShaderTextureProperty_t1323711284 * ___texPropertyname7, MB3_TextureCombinerNonTextureProperties_t582390424 * ___resultMaterialTextureBlender8, bool ___isNormalMap9, bool ___fixOutOfBoundsUVs10, bool ___considerNonTextureProperties11, MB3_TextureCombiner_t2018981714 * ___texCombiner12, int32_t ___LOG_LEV13, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (MB_TextureCombinerRenderTexture_DoRenderAtlas_m2650485798_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	Shader_t4151988712 * V_0 = NULL;
	Transform_t3600365921 * V_1 = NULL;
	float V_2 = 0.0f;
	Texture2D_t3840446185 * V_3 = NULL;
	{
		int32_t L_0 = ___LOG_LEV13;
		__this->set_LOG_LEVEL_0(L_0);
		List_1_t1552207755 * L_1 = ___textureSetss5;
		__this->set_textureSets_9(L_1);
		int32_t L_2 = ___indexOfTexSetToRenders6;
		__this->set_indexOfTexSetToRender_10(L_2);
		ShaderTextureProperty_t1323711284 * L_3 = ___texPropertyname7;
		__this->set__texPropertyName_11(L_3);
		int32_t L_4 = ___padding3;
		__this->set__padding_4(L_4);
		bool L_5 = ___isNormalMap9;
		__this->set__isNormalMap_5(L_5);
		bool L_6 = ___fixOutOfBoundsUVs10;
		__this->set__fixOutOfBoundsUVs_6(L_6);
		MB3_TextureCombinerNonTextureProperties_t582390424 * L_7 = ___resultMaterialTextureBlender8;
		__this->set__resultMaterialTextureBlender_12(L_7);
		RectU5BU5D_t2936723554* L_8 = ___rss4;
		__this->set_rs_8(L_8);
		bool L_9 = __this->get__isNormalMap_5();
		if (!L_9)
		{
			goto IL_0063;
		}
	}
	{
		Shader_t4151988712 * L_10 = Shader_Find_m2092206247(NULL /*static, unused*/, _stringLiteral395364888, /*hidden argument*/NULL);
		V_0 = L_10;
		goto IL_006e;
	}

IL_0063:
	{
		Shader_t4151988712 * L_11 = Shader_Find_m2092206247(NULL /*static, unused*/, _stringLiteral3104138182, /*hidden argument*/NULL);
		V_0 = L_11;
	}

IL_006e:
	{
		Shader_t4151988712 * L_12 = V_0;
		IL2CPP_RUNTIME_CLASS_INIT(Object_t631007953_il2cpp_TypeInfo_var);
		bool L_13 = Object_op_Equality_m1810815630(NULL /*static, unused*/, L_12, (Object_t631007953 *)NULL, /*hidden argument*/NULL);
		if (!L_13)
		{
			goto IL_0086;
		}
	}
	{
		IL2CPP_RUNTIME_CLASS_INIT(Debug_t3317548046_il2cpp_TypeInfo_var);
		Debug_LogError_m2850623458(NULL /*static, unused*/, _stringLiteral746574600, /*hidden argument*/NULL);
		return (Texture2D_t3840446185 *)NULL;
	}

IL_0086:
	{
		Shader_t4151988712 * L_14 = V_0;
		Material_t340375123 * L_15 = (Material_t340375123 *)il2cpp_codegen_object_new(Material_t340375123_il2cpp_TypeInfo_var);
		Material__ctor_m1662457592(L_15, L_14, /*hidden argument*/NULL);
		__this->set_mat_1(L_15);
		int32_t L_16 = ___width1;
		int32_t L_17 = ___height2;
		RenderTexture_t2108887433 * L_18 = (RenderTexture_t2108887433 *)il2cpp_codegen_object_new(RenderTexture_t2108887433_il2cpp_TypeInfo_var);
		RenderTexture__ctor_m2187158709(L_18, L_16, L_17, ((int32_t)24), 0, /*hidden argument*/NULL);
		__this->set__destinationTexture_2(L_18);
		RenderTexture_t2108887433 * L_19 = __this->get__destinationTexture_2();
		Texture_set_filterMode_m3078068058(L_19, 0, /*hidden argument*/NULL);
		GameObject_t1113636619 * L_20 = ___gameObject0;
		Camera_t4157153871 * L_21 = GameObject_GetComponent_TisCamera_t4157153871_m2849242531(L_20, /*hidden argument*/GameObject_GetComponent_TisCamera_t4157153871_m2849242531_RuntimeMethod_var);
		__this->set_myCamera_3(L_21);
		Camera_t4157153871 * L_22 = __this->get_myCamera_3();
		Camera_set_orthographic_m2855749523(L_22, (bool)1, /*hidden argument*/NULL);
		Camera_t4157153871 * L_23 = __this->get_myCamera_3();
		int32_t L_24 = ___height2;
		Camera_set_orthographicSize_m76971700(L_23, (((float)((float)((int32_t)((int32_t)L_24>>(int32_t)1))))), /*hidden argument*/NULL);
		Camera_t4157153871 * L_25 = __this->get_myCamera_3();
		int32_t L_26 = ___width1;
		int32_t L_27 = ___height2;
		Camera_set_aspect_m2625464181(L_25, ((float)((float)(((float)((float)L_26)))/(float)(((float)((float)L_27))))), /*hidden argument*/NULL);
		Camera_t4157153871 * L_28 = __this->get_myCamera_3();
		RenderTexture_t2108887433 * L_29 = __this->get__destinationTexture_2();
		Camera_set_targetTexture_m3148311140(L_28, L_29, /*hidden argument*/NULL);
		Camera_t4157153871 * L_30 = __this->get_myCamera_3();
		Camera_set_clearFlags_m2207032996(L_30, 2, /*hidden argument*/NULL);
		Camera_t4157153871 * L_31 = __this->get_myCamera_3();
		Transform_t3600365921 * L_32 = Component_GetComponent_TisTransform_t3600365921_m1200784320(L_31, /*hidden argument*/Component_GetComponent_TisTransform_t3600365921_m1200784320_RuntimeMethod_var);
		V_1 = L_32;
		Transform_t3600365921 * L_33 = V_1;
		int32_t L_34 = ___width1;
		int32_t L_35 = ___height2;
		Vector3_t3722313464  L_36;
		memset(&L_36, 0, sizeof(L_36));
		Vector3__ctor_m3353183577((&L_36), ((float)((float)(((float)((float)L_34)))/(float)(2.0f))), ((float)((float)(((float)((float)L_35)))/(float)(2.0f))), (3.0f), /*hidden argument*/NULL);
		Transform_set_localPosition_m4128471975(L_33, L_36, /*hidden argument*/NULL);
		Transform_t3600365921 * L_37 = V_1;
		IL2CPP_RUNTIME_CLASS_INIT(Quaternion_t2301928331_il2cpp_TypeInfo_var);
		Quaternion_t2301928331  L_38 = Quaternion_Euler_m3049309462(NULL /*static, unused*/, (0.0f), (180.0f), (180.0f), /*hidden argument*/NULL);
		Transform_set_localRotation_m19445462(L_37, L_38, /*hidden argument*/NULL);
		__this->set__doRenderAtlas_7((bool)1);
		int32_t L_39 = __this->get_LOG_LEVEL_0();
		if ((((int32_t)L_39) < ((int32_t)4)))
		{
			goto IL_01be;
		}
	}
	{
		ObjectU5BU5D_t2843939325* L_40 = (ObjectU5BU5D_t2843939325*)SZArrayNew(ObjectU5BU5D_t2843939325_il2cpp_TypeInfo_var, (uint32_t)5);
		ObjectU5BU5D_t2843939325* L_41 = L_40;
		int32_t L_42 = ___width1;
		int32_t L_43 = L_42;
		RuntimeObject * L_44 = Box(Int32_t2950945753_il2cpp_TypeInfo_var, &L_43);
		ArrayElementTypeCheck (L_41, L_44);
		(L_41)->SetAtUnchecked(static_cast<il2cpp_array_size_t>(0), (RuntimeObject *)L_44);
		ObjectU5BU5D_t2843939325* L_45 = L_41;
		int32_t L_46 = ___height2;
		int32_t L_47 = L_46;
		RuntimeObject * L_48 = Box(Int32_t2950945753_il2cpp_TypeInfo_var, &L_47);
		ArrayElementTypeCheck (L_45, L_48);
		(L_45)->SetAtUnchecked(static_cast<il2cpp_array_size_t>(1), (RuntimeObject *)L_48);
		ObjectU5BU5D_t2843939325* L_49 = L_45;
		Transform_t3600365921 * L_50 = V_1;
		Vector3_t3722313464  L_51 = Transform_get_localPosition_m4234289348(L_50, /*hidden argument*/NULL);
		Vector3_t3722313464  L_52 = L_51;
		RuntimeObject * L_53 = Box(Vector3_t3722313464_il2cpp_TypeInfo_var, &L_52);
		ArrayElementTypeCheck (L_49, L_53);
		(L_49)->SetAtUnchecked(static_cast<il2cpp_array_size_t>(2), (RuntimeObject *)L_53);
		ObjectU5BU5D_t2843939325* L_54 = L_49;
		Camera_t4157153871 * L_55 = __this->get_myCamera_3();
		float L_56 = Camera_get_orthographicSize_m3903216845(L_55, /*hidden argument*/NULL);
		float L_57 = L_56;
		RuntimeObject * L_58 = Box(Single_t1397266774_il2cpp_TypeInfo_var, &L_57);
		ArrayElementTypeCheck (L_54, L_58);
		(L_54)->SetAtUnchecked(static_cast<il2cpp_array_size_t>(3), (RuntimeObject *)L_58);
		ObjectU5BU5D_t2843939325* L_59 = L_54;
		Camera_t4157153871 * L_60 = __this->get_myCamera_3();
		float L_61 = Camera_get_aspect_m862507514(L_60, /*hidden argument*/NULL);
		V_2 = L_61;
		String_t* L_62 = Single_ToString_m3489843083((float*)(&V_2), _stringLiteral3451238330, /*hidden argument*/NULL);
		ArrayElementTypeCheck (L_59, L_62);
		(L_59)->SetAtUnchecked(static_cast<il2cpp_array_size_t>(4), (RuntimeObject *)L_62);
		String_t* L_63 = String_Format_m630303134(NULL /*static, unused*/, _stringLiteral912138561, L_59, /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(Debug_t3317548046_il2cpp_TypeInfo_var);
		Debug_Log_m4051431634(NULL /*static, unused*/, L_63, /*hidden argument*/NULL);
	}

IL_01be:
	{
		Camera_t4157153871 * L_64 = __this->get_myCamera_3();
		Camera_Render_m2813253190(L_64, /*hidden argument*/NULL);
		__this->set__doRenderAtlas_7((bool)0);
		Material_t340375123 * L_65 = __this->get_mat_1();
		IL2CPP_RUNTIME_CLASS_INIT(MB_Utility_t3997274809_il2cpp_TypeInfo_var);
		MB_Utility_Destroy_m683137727(NULL /*static, unused*/, L_65, /*hidden argument*/NULL);
		RenderTexture_t2108887433 * L_66 = __this->get__destinationTexture_2();
		MB_Utility_Destroy_m683137727(NULL /*static, unused*/, L_66, /*hidden argument*/NULL);
		int32_t L_67 = __this->get_LOG_LEVEL_0();
		if ((((int32_t)L_67) < ((int32_t)4)))
		{
			goto IL_01fc;
		}
	}
	{
		IL2CPP_RUNTIME_CLASS_INIT(Debug_t3317548046_il2cpp_TypeInfo_var);
		Debug_Log_m4051431634(NULL /*static, unused*/, _stringLiteral3765685832, /*hidden argument*/NULL);
	}

IL_01fc:
	{
		Texture2D_t3840446185 * L_68 = __this->get_targTex_13();
		V_3 = L_68;
		__this->set_targTex_13((Texture2D_t3840446185 *)NULL);
		Texture2D_t3840446185 * L_69 = V_3;
		return L_69;
	}
}
// System.Void MB_TextureCombinerRenderTexture::OnRenderObject()
extern "C" IL2CPP_METHOD_ATTR void MB_TextureCombinerRenderTexture_OnRenderObject_m3157778825 (MB_TextureCombinerRenderTexture_t1792150119 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (MB_TextureCombinerRenderTexture_OnRenderObject_m3157778825_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	Stopwatch_t305734070 * V_0 = NULL;
	bool V_1 = false;
	int32_t V_2 = 0;
	MeshBakerMaterialTexture_t567627287 * V_3 = NULL;
	Texture2D_t3840446185 * V_4 = NULL;
	DRect_t3868393502  V_5;
	memset(&V_5, 0, sizeof(V_5));
	DRect_t3868393502  V_6;
	memset(&V_6, 0, sizeof(V_6));
	int64_t V_7 = 0;
	Texture2D_t3840446185 * V_8 = NULL;
	int64_t V_9 = 0;
	{
		bool L_0 = __this->get__doRenderAtlas_7();
		if (!L_0)
		{
			goto IL_0294;
		}
	}
	{
		Stopwatch_t305734070 * L_1 = (Stopwatch_t305734070 *)il2cpp_codegen_object_new(Stopwatch_t305734070_il2cpp_TypeInfo_var);
		Stopwatch__ctor_m2673586837(L_1, /*hidden argument*/NULL);
		V_0 = L_1;
		Stopwatch_t305734070 * L_2 = V_0;
		Stopwatch_Start_m1142799187(L_2, /*hidden argument*/NULL);
		int32_t L_3 = __this->get_LOG_LEVEL_0();
		bool L_4 = MB_TextureCombinerRenderTexture_YisFlipped_m3588497510(NULL /*static, unused*/, L_3, /*hidden argument*/NULL);
		V_1 = L_4;
		V_2 = 0;
		goto IL_0181;
	}

IL_002a:
	{
		List_1_t1552207755 * L_5 = __this->get_textureSets_9();
		int32_t L_6 = V_2;
		MB_TexSet_t80133013 * L_7 = List_1_get_Item_m1399501068(L_5, L_6, /*hidden argument*/List_1_get_Item_m1399501068_RuntimeMethod_var);
		MeshBakerMaterialTextureU5BU5D_t3009043374* L_8 = L_7->get_ts_0();
		int32_t L_9 = __this->get_indexOfTexSetToRender_10();
		int32_t L_10 = L_9;
		MeshBakerMaterialTexture_t567627287 * L_11 = (L_8)->GetAtUnchecked(static_cast<il2cpp_array_size_t>(L_10));
		V_3 = L_11;
		MeshBakerMaterialTexture_t567627287 * L_12 = V_3;
		Texture2D_t3840446185 * L_13 = MeshBakerMaterialTexture_GetTexture2D_m1492496826(L_12, /*hidden argument*/NULL);
		V_4 = L_13;
		int32_t L_14 = __this->get_LOG_LEVEL_0();
		if ((((int32_t)L_14) < ((int32_t)5)))
		{
			goto IL_012a;
		}
	}
	{
		Texture2D_t3840446185 * L_15 = V_4;
		IL2CPP_RUNTIME_CLASS_INIT(Object_t631007953_il2cpp_TypeInfo_var);
		bool L_16 = Object_op_Inequality_m4071470834(NULL /*static, unused*/, L_15, (Object_t631007953 *)NULL, /*hidden argument*/NULL);
		if (!L_16)
		{
			goto IL_012a;
		}
	}
	{
		ObjectU5BU5D_t2843939325* L_17 = (ObjectU5BU5D_t2843939325*)SZArrayNew(ObjectU5BU5D_t2843939325_il2cpp_TypeInfo_var, (uint32_t)((int32_t)14));
		ObjectU5BU5D_t2843939325* L_18 = L_17;
		ArrayElementTypeCheck (L_18, _stringLiteral782567911);
		(L_18)->SetAtUnchecked(static_cast<il2cpp_array_size_t>(0), (RuntimeObject *)_stringLiteral782567911);
		ObjectU5BU5D_t2843939325* L_19 = L_18;
		Texture2D_t3840446185 * L_20 = V_4;
		ArrayElementTypeCheck (L_19, L_20);
		(L_19)->SetAtUnchecked(static_cast<il2cpp_array_size_t>(1), (RuntimeObject *)L_20);
		ObjectU5BU5D_t2843939325* L_21 = L_19;
		ArrayElementTypeCheck (L_21, _stringLiteral3056346918);
		(L_21)->SetAtUnchecked(static_cast<il2cpp_array_size_t>(2), (RuntimeObject *)_stringLiteral3056346918);
		ObjectU5BU5D_t2843939325* L_22 = L_21;
		Texture2D_t3840446185 * L_23 = V_4;
		int32_t L_24 = VirtFuncInvoker0< int32_t >::Invoke(4 /* System.Int32 UnityEngine.Texture::get_width() */, L_23);
		int32_t L_25 = L_24;
		RuntimeObject * L_26 = Box(Int32_t2950945753_il2cpp_TypeInfo_var, &L_25);
		ArrayElementTypeCheck (L_22, L_26);
		(L_22)->SetAtUnchecked(static_cast<il2cpp_array_size_t>(3), (RuntimeObject *)L_26);
		ObjectU5BU5D_t2843939325* L_27 = L_22;
		ArrayElementTypeCheck (L_27, _stringLiteral3481598281);
		(L_27)->SetAtUnchecked(static_cast<il2cpp_array_size_t>(4), (RuntimeObject *)_stringLiteral3481598281);
		ObjectU5BU5D_t2843939325* L_28 = L_27;
		Texture2D_t3840446185 * L_29 = V_4;
		int32_t L_30 = VirtFuncInvoker0< int32_t >::Invoke(6 /* System.Int32 UnityEngine.Texture::get_height() */, L_29);
		int32_t L_31 = L_30;
		RuntimeObject * L_32 = Box(Int32_t2950945753_il2cpp_TypeInfo_var, &L_31);
		ArrayElementTypeCheck (L_28, L_32);
		(L_28)->SetAtUnchecked(static_cast<il2cpp_array_size_t>(5), (RuntimeObject *)L_32);
		ObjectU5BU5D_t2843939325* L_33 = L_28;
		ArrayElementTypeCheck (L_33, _stringLiteral3610126461);
		(L_33)->SetAtUnchecked(static_cast<il2cpp_array_size_t>(6), (RuntimeObject *)_stringLiteral3610126461);
		ObjectU5BU5D_t2843939325* L_34 = L_33;
		MeshBakerMaterialTexture_t567627287 * L_35 = V_3;
		DRect_t3868393502  L_36 = MeshBakerMaterialTexture_get_matTilingRect_m1213004848(L_35, /*hidden argument*/NULL);
		V_5 = L_36;
		Vector2_t2156229523  L_37 = DRect_get_min_m990825377((DRect_t3868393502 *)(&V_5), /*hidden argument*/NULL);
		Vector2_t2156229523  L_38 = L_37;
		RuntimeObject * L_39 = Box(Vector2_t2156229523_il2cpp_TypeInfo_var, &L_38);
		ArrayElementTypeCheck (L_34, L_39);
		(L_34)->SetAtUnchecked(static_cast<il2cpp_array_size_t>(7), (RuntimeObject *)L_39);
		ObjectU5BU5D_t2843939325* L_40 = L_34;
		ArrayElementTypeCheck (L_40, _stringLiteral3964705780);
		(L_40)->SetAtUnchecked(static_cast<il2cpp_array_size_t>(8), (RuntimeObject *)_stringLiteral3964705780);
		ObjectU5BU5D_t2843939325* L_41 = L_40;
		MeshBakerMaterialTexture_t567627287 * L_42 = V_3;
		DRect_t3868393502  L_43 = MeshBakerMaterialTexture_get_matTilingRect_m1213004848(L_42, /*hidden argument*/NULL);
		V_6 = L_43;
		Vector2_t2156229523  L_44 = DRect_get_size_m1401151465((DRect_t3868393502 *)(&V_6), /*hidden argument*/NULL);
		Vector2_t2156229523  L_45 = L_44;
		RuntimeObject * L_46 = Box(Vector2_t2156229523_il2cpp_TypeInfo_var, &L_45);
		ArrayElementTypeCheck (L_41, L_46);
		(L_41)->SetAtUnchecked(static_cast<il2cpp_array_size_t>(((int32_t)9)), (RuntimeObject *)L_46);
		ObjectU5BU5D_t2843939325* L_47 = L_41;
		ArrayElementTypeCheck (L_47, _stringLiteral3937235379);
		(L_47)->SetAtUnchecked(static_cast<il2cpp_array_size_t>(((int32_t)10)), (RuntimeObject *)_stringLiteral3937235379);
		ObjectU5BU5D_t2843939325* L_48 = L_47;
		RectU5BU5D_t2936723554* L_49 = __this->get_rs_8();
		int32_t L_50 = V_2;
		Rect_t2360479859  L_51 = (*(Rect_t2360479859 *)((L_49)->GetAddressAtUnchecked(static_cast<il2cpp_array_size_t>(L_50))));
		RuntimeObject * L_52 = Box(Rect_t2360479859_il2cpp_TypeInfo_var, &L_51);
		ArrayElementTypeCheck (L_48, L_52);
		(L_48)->SetAtUnchecked(static_cast<il2cpp_array_size_t>(((int32_t)11)), (RuntimeObject *)L_52);
		ObjectU5BU5D_t2843939325* L_53 = L_48;
		ArrayElementTypeCheck (L_53, _stringLiteral727998580);
		(L_53)->SetAtUnchecked(static_cast<il2cpp_array_size_t>(((int32_t)12)), (RuntimeObject *)_stringLiteral727998580);
		ObjectU5BU5D_t2843939325* L_54 = L_53;
		int32_t L_55 = __this->get__padding_4();
		int32_t L_56 = L_55;
		RuntimeObject * L_57 = Box(Int32_t2950945753_il2cpp_TypeInfo_var, &L_56);
		ArrayElementTypeCheck (L_54, L_57);
		(L_54)->SetAtUnchecked(static_cast<il2cpp_array_size_t>(((int32_t)13)), (RuntimeObject *)L_57);
		String_t* L_58 = String_Concat_m2971454694(NULL /*static, unused*/, L_54, /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(Debug_t3317548046_il2cpp_TypeInfo_var);
		Debug_Log_m4051431634(NULL /*static, unused*/, L_58, /*hidden argument*/NULL);
	}

IL_012a:
	{
		List_1_t1552207755 * L_59 = __this->get_textureSets_9();
		int32_t L_60 = V_2;
		MB_TexSet_t80133013 * L_61 = List_1_get_Item_m1399501068(L_59, L_60, /*hidden argument*/List_1_get_Item_m1399501068_RuntimeMethod_var);
		MeshBakerMaterialTexture_t567627287 * L_62 = V_3;
		List_1_t1552207755 * L_63 = __this->get_textureSets_9();
		int32_t L_64 = V_2;
		MB_TexSet_t80133013 * L_65 = List_1_get_Item_m1399501068(L_63, L_64, /*hidden argument*/List_1_get_Item_m1399501068_RuntimeMethod_var);
		Vector2_t2156229523  L_66 = MB_TexSet_get_obUVoffset_m3662289414(L_65, /*hidden argument*/NULL);
		List_1_t1552207755 * L_67 = __this->get_textureSets_9();
		int32_t L_68 = V_2;
		MB_TexSet_t80133013 * L_69 = List_1_get_Item_m1399501068(L_67, L_68, /*hidden argument*/List_1_get_Item_m1399501068_RuntimeMethod_var);
		Vector2_t2156229523  L_70 = MB_TexSet_get_obUVscale_m2255764130(L_69, /*hidden argument*/NULL);
		RectU5BU5D_t2936723554* L_71 = __this->get_rs_8();
		int32_t L_72 = V_2;
		ShaderTextureProperty_t1323711284 * L_73 = __this->get__texPropertyName_11();
		MB3_TextureCombinerNonTextureProperties_t582390424 * L_74 = __this->get__resultMaterialTextureBlender_12();
		bool L_75 = V_1;
		MB_TextureCombinerRenderTexture_CopyScaledAndTiledToAtlas_m2529512026(__this, L_61, L_62, L_66, L_70, (*(Rect_t2360479859 *)((L_71)->GetAddressAtUnchecked(static_cast<il2cpp_array_size_t>(L_72)))), L_73, L_74, L_75, /*hidden argument*/NULL);
		int32_t L_76 = V_2;
		V_2 = ((int32_t)il2cpp_codegen_add((int32_t)L_76, (int32_t)1));
	}

IL_0181:
	{
		int32_t L_77 = V_2;
		RectU5BU5D_t2936723554* L_78 = __this->get_rs_8();
		if ((((int32_t)L_77) < ((int32_t)(((int32_t)((int32_t)(((RuntimeArray *)L_78)->max_length)))))))
		{
			goto IL_002a;
		}
	}
	{
		Stopwatch_t305734070 * L_79 = V_0;
		Stopwatch_Stop_m1583564474(L_79, /*hidden argument*/NULL);
		Stopwatch_t305734070 * L_80 = V_0;
		Stopwatch_Start_m1142799187(L_80, /*hidden argument*/NULL);
		int32_t L_81 = __this->get_LOG_LEVEL_0();
		if ((((int32_t)L_81) < ((int32_t)4)))
		{
			goto IL_01ca;
		}
	}
	{
		Stopwatch_t305734070 * L_82 = V_0;
		int64_t L_83 = Stopwatch_get_ElapsedMilliseconds_m1101465039(L_82, /*hidden argument*/NULL);
		V_7 = L_83;
		String_t* L_84 = Int64_ToString_m414616559((int64_t*)(&V_7), _stringLiteral3451238330, /*hidden argument*/NULL);
		String_t* L_85 = String_Concat_m3937257545(NULL /*static, unused*/, _stringLiteral4099201794, L_84, /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(Debug_t3317548046_il2cpp_TypeInfo_var);
		Debug_Log_m4051431634(NULL /*static, unused*/, L_85, /*hidden argument*/NULL);
	}

IL_01ca:
	{
		int32_t L_86 = __this->get_LOG_LEVEL_0();
		if ((((int32_t)L_86) < ((int32_t)4)))
		{
			goto IL_021c;
		}
	}
	{
		ObjectU5BU5D_t2843939325* L_87 = (ObjectU5BU5D_t2843939325*)SZArrayNew(ObjectU5BU5D_t2843939325_il2cpp_TypeInfo_var, (uint32_t)4);
		ObjectU5BU5D_t2843939325* L_88 = L_87;
		ArrayElementTypeCheck (L_88, _stringLiteral811314602);
		(L_88)->SetAtUnchecked(static_cast<il2cpp_array_size_t>(0), (RuntimeObject *)_stringLiteral811314602);
		ObjectU5BU5D_t2843939325* L_89 = L_88;
		RenderTexture_t2108887433 * L_90 = __this->get__destinationTexture_2();
		int32_t L_91 = VirtFuncInvoker0< int32_t >::Invoke(4 /* System.Int32 UnityEngine.Texture::get_width() */, L_90);
		int32_t L_92 = L_91;
		RuntimeObject * L_93 = Box(Int32_t2950945753_il2cpp_TypeInfo_var, &L_92);
		ArrayElementTypeCheck (L_89, L_93);
		(L_89)->SetAtUnchecked(static_cast<il2cpp_array_size_t>(1), (RuntimeObject *)L_93);
		ObjectU5BU5D_t2843939325* L_94 = L_89;
		ArrayElementTypeCheck (L_94, _stringLiteral2663281075);
		(L_94)->SetAtUnchecked(static_cast<il2cpp_array_size_t>(2), (RuntimeObject *)_stringLiteral2663281075);
		ObjectU5BU5D_t2843939325* L_95 = L_94;
		RenderTexture_t2108887433 * L_96 = __this->get__destinationTexture_2();
		int32_t L_97 = VirtFuncInvoker0< int32_t >::Invoke(6 /* System.Int32 UnityEngine.Texture::get_height() */, L_96);
		int32_t L_98 = L_97;
		RuntimeObject * L_99 = Box(Int32_t2950945753_il2cpp_TypeInfo_var, &L_98);
		ArrayElementTypeCheck (L_95, L_99);
		(L_95)->SetAtUnchecked(static_cast<il2cpp_array_size_t>(3), (RuntimeObject *)L_99);
		String_t* L_100 = String_Concat_m2971454694(NULL /*static, unused*/, L_95, /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(Debug_t3317548046_il2cpp_TypeInfo_var);
		Debug_Log_m4051431634(NULL /*static, unused*/, L_100, /*hidden argument*/NULL);
	}

IL_021c:
	{
		RenderTexture_t2108887433 * L_101 = __this->get__destinationTexture_2();
		int32_t L_102 = VirtFuncInvoker0< int32_t >::Invoke(4 /* System.Int32 UnityEngine.Texture::get_width() */, L_101);
		RenderTexture_t2108887433 * L_103 = __this->get__destinationTexture_2();
		int32_t L_104 = VirtFuncInvoker0< int32_t >::Invoke(6 /* System.Int32 UnityEngine.Texture::get_height() */, L_103);
		Texture2D_t3840446185 * L_105 = (Texture2D_t3840446185 *)il2cpp_codegen_object_new(Texture2D_t3840446185_il2cpp_TypeInfo_var);
		Texture2D__ctor_m1269666504(L_105, L_102, L_104, 5, (bool)1, (bool)0, /*hidden argument*/NULL);
		V_8 = L_105;
		RenderTexture_t2108887433 * L_106 = __this->get__destinationTexture_2();
		bool L_107 = V_1;
		int32_t L_108 = __this->get_LOG_LEVEL_0();
		Texture2D_t3840446185 * L_109 = V_8;
		MB_TextureCombinerRenderTexture_ConvertRenderTextureToTexture2D_m474096451(NULL /*static, unused*/, L_106, L_107, (bool)0, L_108, L_109, /*hidden argument*/NULL);
		Camera_t4157153871 * L_110 = __this->get_myCamera_3();
		Camera_set_targetTexture_m3148311140(L_110, (RenderTexture_t2108887433 *)NULL, /*hidden argument*/NULL);
		Texture2D_t3840446185 * L_111 = V_8;
		__this->set_targTex_13(L_111);
		int32_t L_112 = __this->get_LOG_LEVEL_0();
		if ((((int32_t)L_112) < ((int32_t)4)))
		{
			goto IL_0294;
		}
	}
	{
		Stopwatch_t305734070 * L_113 = V_0;
		int64_t L_114 = Stopwatch_get_ElapsedMilliseconds_m1101465039(L_113, /*hidden argument*/NULL);
		V_9 = L_114;
		String_t* L_115 = Int64_ToString_m414616559((int64_t*)(&V_9), _stringLiteral3451238330, /*hidden argument*/NULL);
		String_t* L_116 = String_Concat_m3937257545(NULL /*static, unused*/, _stringLiteral3938399595, L_115, /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(Debug_t3317548046_il2cpp_TypeInfo_var);
		Debug_Log_m4051431634(NULL /*static, unused*/, L_116, /*hidden argument*/NULL);
	}

IL_0294:
	{
		return;
	}
}
// System.Void MB_TextureCombinerRenderTexture::ConvertRenderTextureToTexture2D(UnityEngine.RenderTexture,System.Boolean,System.Boolean,DigitalOpus.MB.Core.MB2_LogLevel,UnityEngine.Texture2D)
extern "C" IL2CPP_METHOD_ATTR void MB_TextureCombinerRenderTexture_ConvertRenderTextureToTexture2D_m474096451 (RuntimeObject * __this /* static, unused */, RenderTexture_t2108887433 * ____destinationTexture0, bool ___yIsFlipped1, bool ___doLinearColorSpace2, int32_t ___LOG_LEVEL3, Texture2D_t3840446185 * ___tempTexture4, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (MB_TextureCombinerRenderTexture_ConvertRenderTextureToTexture2D_m474096451_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	RenderTexture_t2108887433 * V_0 = NULL;
	int32_t V_1 = 0;
	int32_t V_2 = 0;
	int32_t V_3 = 0;
	int32_t V_4 = 0;
	int32_t V_5 = 0;
	int32_t V_6 = 0;
	Rect_t2360479859  V_7;
	memset(&V_7, 0, sizeof(V_7));
	int32_t V_8 = 0;
	int32_t V_9 = 0;
	int32_t V_10 = 0;
	int32_t V_11 = 0;
	Rect_t2360479859  V_12;
	memset(&V_12, 0, sizeof(V_12));
	{
		RenderTexture_t2108887433 * L_0 = RenderTexture_get_active_m2427925032(NULL /*static, unused*/, /*hidden argument*/NULL);
		V_0 = L_0;
		RenderTexture_t2108887433 * L_1 = ____destinationTexture0;
		RenderTexture_set_active_m1437732586(NULL /*static, unused*/, L_1, /*hidden argument*/NULL);
		RenderTexture_t2108887433 * L_2 = ____destinationTexture0;
		int32_t L_3 = VirtFuncInvoker0< int32_t >::Invoke(4 /* System.Int32 UnityEngine.Texture::get_width() */, L_2);
		IL2CPP_RUNTIME_CLASS_INIT(Mathf_t3464937446_il2cpp_TypeInfo_var);
		int32_t L_4 = Mathf_CeilToInt_m432108984(NULL /*static, unused*/, ((float)((float)(((float)((float)L_3)))/(float)(512.0f))), /*hidden argument*/NULL);
		V_1 = L_4;
		RenderTexture_t2108887433 * L_5 = ____destinationTexture0;
		int32_t L_6 = VirtFuncInvoker0< int32_t >::Invoke(6 /* System.Int32 UnityEngine.Texture::get_height() */, L_5);
		int32_t L_7 = Mathf_CeilToInt_m432108984(NULL /*static, unused*/, ((float)((float)(((float)((float)L_6)))/(float)(512.0f))), /*hidden argument*/NULL);
		V_2 = L_7;
		int32_t L_8 = V_1;
		if (!L_8)
		{
			goto IL_003e;
		}
	}
	{
		int32_t L_9 = V_2;
		if (L_9)
		{
			goto IL_007b;
		}
	}

IL_003e:
	{
		int32_t L_10 = ___LOG_LEVEL3;
		if ((((int32_t)L_10) < ((int32_t)5)))
		{
			goto IL_004f;
		}
	}
	{
		IL2CPP_RUNTIME_CLASS_INIT(Debug_t3317548046_il2cpp_TypeInfo_var);
		Debug_Log_m4051431634(NULL /*static, unused*/, _stringLiteral972463044, /*hidden argument*/NULL);
	}

IL_004f:
	{
		Texture2D_t3840446185 * L_11 = ___tempTexture4;
		RenderTexture_t2108887433 * L_12 = ____destinationTexture0;
		int32_t L_13 = VirtFuncInvoker0< int32_t >::Invoke(4 /* System.Int32 UnityEngine.Texture::get_width() */, L_12);
		RenderTexture_t2108887433 * L_14 = ____destinationTexture0;
		int32_t L_15 = VirtFuncInvoker0< int32_t >::Invoke(6 /* System.Int32 UnityEngine.Texture::get_height() */, L_14);
		Rect_t2360479859  L_16;
		memset(&L_16, 0, sizeof(L_16));
		Rect__ctor_m2614021312((&L_16), (0.0f), (0.0f), (((float)((float)L_13))), (((float)((float)L_15))), /*hidden argument*/NULL);
		Texture2D_ReadPixels_m1510783487(L_11, L_16, 0, 0, (bool)1, /*hidden argument*/NULL);
		goto IL_0180;
	}

IL_007b:
	{
		int32_t L_17 = ___LOG_LEVEL3;
		if ((((int32_t)L_17) < ((int32_t)5)))
		{
			goto IL_008c;
		}
	}
	{
		IL2CPP_RUNTIME_CLASS_INIT(Debug_t3317548046_il2cpp_TypeInfo_var);
		Debug_Log_m4051431634(NULL /*static, unused*/, _stringLiteral119538695, /*hidden argument*/NULL);
	}

IL_008c:
	{
		bool L_18 = ___yIsFlipped1;
		if (L_18)
		{
			goto IL_0102;
		}
	}
	{
		V_3 = 0;
		goto IL_00f6;
	}

IL_0099:
	{
		V_4 = 0;
		goto IL_00ea;
	}

IL_00a1:
	{
		int32_t L_19 = V_3;
		V_5 = ((int32_t)il2cpp_codegen_multiply((int32_t)L_19, (int32_t)((int32_t)512)));
		int32_t L_20 = V_4;
		V_6 = ((int32_t)il2cpp_codegen_multiply((int32_t)L_20, (int32_t)((int32_t)512)));
		int32_t L_21 = V_5;
		int32_t L_22 = V_6;
		Rect__ctor_m2614021312((Rect_t2360479859 *)(&V_7), (((float)((float)L_21))), (((float)((float)L_22))), (512.0f), (512.0f), /*hidden argument*/NULL);
		Texture2D_t3840446185 * L_23 = ___tempTexture4;
		Rect_t2360479859  L_24 = V_7;
		int32_t L_25 = V_3;
		int32_t L_26 = V_4;
		Texture2D_ReadPixels_m1510783487(L_23, L_24, ((int32_t)il2cpp_codegen_multiply((int32_t)L_25, (int32_t)((int32_t)512))), ((int32_t)il2cpp_codegen_multiply((int32_t)L_26, (int32_t)((int32_t)512))), (bool)1, /*hidden argument*/NULL);
		int32_t L_27 = V_4;
		V_4 = ((int32_t)il2cpp_codegen_add((int32_t)L_27, (int32_t)1));
	}

IL_00ea:
	{
		int32_t L_28 = V_4;
		int32_t L_29 = V_2;
		if ((((int32_t)L_28) < ((int32_t)L_29)))
		{
			goto IL_00a1;
		}
	}
	{
		int32_t L_30 = V_3;
		V_3 = ((int32_t)il2cpp_codegen_add((int32_t)L_30, (int32_t)1));
	}

IL_00f6:
	{
		int32_t L_31 = V_3;
		int32_t L_32 = V_1;
		if ((((int32_t)L_31) < ((int32_t)L_32)))
		{
			goto IL_0099;
		}
	}
	{
		goto IL_0180;
	}

IL_0102:
	{
		V_8 = 0;
		goto IL_0178;
	}

IL_010a:
	{
		V_9 = 0;
		goto IL_016a;
	}

IL_0112:
	{
		int32_t L_33 = V_8;
		V_10 = ((int32_t)il2cpp_codegen_multiply((int32_t)L_33, (int32_t)((int32_t)512)));
		RenderTexture_t2108887433 * L_34 = ____destinationTexture0;
		int32_t L_35 = VirtFuncInvoker0< int32_t >::Invoke(6 /* System.Int32 UnityEngine.Texture::get_height() */, L_34);
		int32_t L_36 = V_9;
		V_11 = ((int32_t)il2cpp_codegen_subtract((int32_t)((int32_t)il2cpp_codegen_subtract((int32_t)L_35, (int32_t)((int32_t)512))), (int32_t)((int32_t)il2cpp_codegen_multiply((int32_t)L_36, (int32_t)((int32_t)512)))));
		int32_t L_37 = V_10;
		int32_t L_38 = V_11;
		Rect__ctor_m2614021312((Rect_t2360479859 *)(&V_12), (((float)((float)L_37))), (((float)((float)L_38))), (512.0f), (512.0f), /*hidden argument*/NULL);
		Texture2D_t3840446185 * L_39 = ___tempTexture4;
		Rect_t2360479859  L_40 = V_12;
		int32_t L_41 = V_8;
		int32_t L_42 = V_9;
		Texture2D_ReadPixels_m1510783487(L_39, L_40, ((int32_t)il2cpp_codegen_multiply((int32_t)L_41, (int32_t)((int32_t)512))), ((int32_t)il2cpp_codegen_multiply((int32_t)L_42, (int32_t)((int32_t)512))), (bool)1, /*hidden argument*/NULL);
		int32_t L_43 = V_9;
		V_9 = ((int32_t)il2cpp_codegen_add((int32_t)L_43, (int32_t)1));
	}

IL_016a:
	{
		int32_t L_44 = V_9;
		int32_t L_45 = V_2;
		if ((((int32_t)L_44) < ((int32_t)L_45)))
		{
			goto IL_0112;
		}
	}
	{
		int32_t L_46 = V_8;
		V_8 = ((int32_t)il2cpp_codegen_add((int32_t)L_46, (int32_t)1));
	}

IL_0178:
	{
		int32_t L_47 = V_8;
		int32_t L_48 = V_1;
		if ((((int32_t)L_47) < ((int32_t)L_48)))
		{
			goto IL_010a;
		}
	}

IL_0180:
	{
		RenderTexture_t2108887433 * L_49 = V_0;
		RenderTexture_set_active_m1437732586(NULL /*static, unused*/, L_49, /*hidden argument*/NULL);
		Texture2D_t3840446185 * L_50 = ___tempTexture4;
		Texture2D_Apply_m2271746283(L_50, /*hidden argument*/NULL);
		int32_t L_51 = ___LOG_LEVEL3;
		if ((((int32_t)L_51) < ((int32_t)5)))
		{
			goto IL_01b7;
		}
	}
	{
		Texture2D_t3840446185 * L_52 = ___tempTexture4;
		int32_t L_53 = VirtFuncInvoker0< int32_t >::Invoke(6 /* System.Int32 UnityEngine.Texture::get_height() */, L_52);
		if ((((int32_t)L_53) > ((int32_t)((int32_t)16))))
		{
			goto IL_01b7;
		}
	}
	{
		Texture2D_t3840446185 * L_54 = ___tempTexture4;
		int32_t L_55 = VirtFuncInvoker0< int32_t >::Invoke(4 /* System.Int32 UnityEngine.Texture::get_width() */, L_54);
		if ((((int32_t)L_55) > ((int32_t)((int32_t)16))))
		{
			goto IL_01b7;
		}
	}
	{
		Texture2D_t3840446185 * L_56 = ___tempTexture4;
		MB_TextureCombinerRenderTexture__printTexture_m968241879(NULL /*static, unused*/, L_56, /*hidden argument*/NULL);
	}

IL_01b7:
	{
		return;
	}
}
// UnityEngine.Color32 MB_TextureCombinerRenderTexture::ConvertNormalFormatFromUnity_ToStandard(UnityEngine.Color32)
extern "C" IL2CPP_METHOD_ATTR Color32_t2600501292  MB_TextureCombinerRenderTexture_ConvertNormalFormatFromUnity_ToStandard_m2919639508 (MB_TextureCombinerRenderTexture_t1792150119 * __this, Color32_t2600501292  ___c0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (MB_TextureCombinerRenderTexture_ConvertNormalFormatFromUnity_ToStandard_m2919639508_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	Vector3_t3722313464  V_0;
	memset(&V_0, 0, sizeof(V_0));
	Color32_t2600501292  V_1;
	memset(&V_1, 0, sizeof(V_1));
	{
		IL2CPP_RUNTIME_CLASS_INIT(Vector3_t3722313464_il2cpp_TypeInfo_var);
		Vector3_t3722313464  L_0 = Vector3_get_zero_m1409827619(NULL /*static, unused*/, /*hidden argument*/NULL);
		V_0 = L_0;
		uint8_t L_1 = (&___c0)->get_a_4();
		(&V_0)->set_x_2(((float)il2cpp_codegen_subtract((float)((float)il2cpp_codegen_multiply((float)(((float)((float)L_1))), (float)(2.0f))), (float)(1.0f))));
		uint8_t L_2 = (&___c0)->get_g_2();
		(&V_0)->set_y_3(((float)il2cpp_codegen_subtract((float)((float)il2cpp_codegen_multiply((float)(((float)((float)L_2))), (float)(2.0f))), (float)(1.0f))));
		float L_3 = (&V_0)->get_x_2();
		float L_4 = (&V_0)->get_x_2();
		float L_5 = (&V_0)->get_y_3();
		float L_6 = (&V_0)->get_y_3();
		IL2CPP_RUNTIME_CLASS_INIT(Mathf_t3464937446_il2cpp_TypeInfo_var);
		float L_7 = sqrtf(((float)il2cpp_codegen_subtract((float)((float)il2cpp_codegen_subtract((float)(1.0f), (float)((float)il2cpp_codegen_multiply((float)L_3, (float)L_4)))), (float)((float)il2cpp_codegen_multiply((float)L_5, (float)L_6)))));
		(&V_0)->set_z_4(L_7);
		il2cpp_codegen_initobj((&V_1), sizeof(Color32_t2600501292 ));
		(&V_1)->set_a_4((uint8_t)1);
		float L_8 = (&V_0)->get_x_2();
		(&V_1)->set_r_1((uint8_t)(((int32_t)((uint8_t)((float)il2cpp_codegen_multiply((float)((float)il2cpp_codegen_add((float)L_8, (float)(1.0f))), (float)(0.5f)))))));
		float L_9 = (&V_0)->get_y_3();
		(&V_1)->set_g_2((uint8_t)(((int32_t)((uint8_t)((float)il2cpp_codegen_multiply((float)((float)il2cpp_codegen_add((float)L_9, (float)(1.0f))), (float)(0.5f)))))));
		float L_10 = (&V_0)->get_z_4();
		(&V_1)->set_b_3((uint8_t)(((int32_t)((uint8_t)((float)il2cpp_codegen_multiply((float)((float)il2cpp_codegen_add((float)L_10, (float)(1.0f))), (float)(0.5f)))))));
		Color32_t2600501292  L_11 = V_1;
		return L_11;
	}
}
// System.Boolean MB_TextureCombinerRenderTexture::YisFlipped(DigitalOpus.MB.Core.MB2_LogLevel)
extern "C" IL2CPP_METHOD_ATTR bool MB_TextureCombinerRenderTexture_YisFlipped_m3588497510 (RuntimeObject * __this /* static, unused */, int32_t ___LOG_LEVEL0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (MB_TextureCombinerRenderTexture_YisFlipped_m3588497510_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	String_t* V_0 = NULL;
	bool V_1 = false;
	{
		String_t* L_0 = SystemInfo_get_graphicsDeviceVersion_m3111693964(NULL /*static, unused*/, /*hidden argument*/NULL);
		String_t* L_1 = String_ToLower_m2029374922(L_0, /*hidden argument*/NULL);
		V_0 = L_1;
		bool L_2 = MBVersion_GraphicsUVStartsAtTop_m177916781(NULL /*static, unused*/, /*hidden argument*/NULL);
		if (L_2)
		{
			goto IL_001c;
		}
	}
	{
		V_1 = (bool)0;
		goto IL_001e;
	}

IL_001c:
	{
		V_1 = (bool)1;
	}

IL_001e:
	{
		int32_t L_3 = ___LOG_LEVEL0;
		if ((!(((uint32_t)L_3) == ((uint32_t)4))))
		{
			goto IL_0052;
		}
	}
	{
		ObjectU5BU5D_t2843939325* L_4 = (ObjectU5BU5D_t2843939325*)SZArrayNew(ObjectU5BU5D_t2843939325_il2cpp_TypeInfo_var, (uint32_t)4);
		ObjectU5BU5D_t2843939325* L_5 = L_4;
		ArrayElementTypeCheck (L_5, _stringLiteral2782367896);
		(L_5)->SetAtUnchecked(static_cast<il2cpp_array_size_t>(0), (RuntimeObject *)_stringLiteral2782367896);
		ObjectU5BU5D_t2843939325* L_6 = L_5;
		String_t* L_7 = V_0;
		ArrayElementTypeCheck (L_6, L_7);
		(L_6)->SetAtUnchecked(static_cast<il2cpp_array_size_t>(1), (RuntimeObject *)L_7);
		ObjectU5BU5D_t2843939325* L_8 = L_6;
		ArrayElementTypeCheck (L_8, _stringLiteral1300358356);
		(L_8)->SetAtUnchecked(static_cast<il2cpp_array_size_t>(2), (RuntimeObject *)_stringLiteral1300358356);
		ObjectU5BU5D_t2843939325* L_9 = L_8;
		bool L_10 = V_1;
		bool L_11 = L_10;
		RuntimeObject * L_12 = Box(Boolean_t97287965_il2cpp_TypeInfo_var, &L_11);
		ArrayElementTypeCheck (L_9, L_12);
		(L_9)->SetAtUnchecked(static_cast<il2cpp_array_size_t>(3), (RuntimeObject *)L_12);
		String_t* L_13 = String_Concat_m2971454694(NULL /*static, unused*/, L_9, /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(Debug_t3317548046_il2cpp_TypeInfo_var);
		Debug_Log_m4051431634(NULL /*static, unused*/, L_13, /*hidden argument*/NULL);
	}

IL_0052:
	{
		bool L_14 = V_1;
		return L_14;
	}
}
// System.Void MB_TextureCombinerRenderTexture::CopyScaledAndTiledToAtlas(DigitalOpus.MB.Core.MB_TexSet,DigitalOpus.MB.Core.MeshBakerMaterialTexture,UnityEngine.Vector2,UnityEngine.Vector2,UnityEngine.Rect,DigitalOpus.MB.Core.ShaderTextureProperty,DigitalOpus.MB.Core.MB3_TextureCombinerNonTextureProperties,System.Boolean)
extern "C" IL2CPP_METHOD_ATTR void MB_TextureCombinerRenderTexture_CopyScaledAndTiledToAtlas_m2529512026 (MB_TextureCombinerRenderTexture_t1792150119 * __this, MB_TexSet_t80133013 * ___texSet0, MeshBakerMaterialTexture_t567627287 * ___source1, Vector2_t2156229523  ___obUVoffset2, Vector2_t2156229523  ___obUVscale3, Rect_t2360479859  ___rec4, ShaderTextureProperty_t1323711284 * ___texturePropertyName5, MB3_TextureCombinerNonTextureProperties_t582390424 * ___resultMatTexBlender6, bool ___yIsFlipped7, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (MB_TextureCombinerRenderTexture_CopyScaledAndTiledToAtlas_m2529512026_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	Rect_t2360479859  V_0;
	memset(&V_0, 0, sizeof(V_0));
	Rect_t2360479859  V_1;
	memset(&V_1, 0, sizeof(V_1));
	Rect_t2360479859  V_2;
	memset(&V_2, 0, sizeof(V_2));
	Rect_t2360479859  V_3;
	memset(&V_3, 0, sizeof(V_3));
	DRect_t3868393502  V_4;
	memset(&V_4, 0, sizeof(V_4));
	Texture2D_t3840446185 * V_5 = NULL;
	int32_t V_6 = 0;
	Rect_t2360479859  V_7;
	memset(&V_7, 0, sizeof(V_7));
	RenderTexture_t2108887433 * V_8 = NULL;
	{
		Rect_t2360479859  L_0 = ___rec4;
		V_0 = L_0;
		Camera_t4157153871 * L_1 = __this->get_myCamera_3();
		MB3_TextureCombinerNonTextureProperties_t582390424 * L_2 = ___resultMatTexBlender6;
		MB_TexSet_t80133013 * L_3 = ___texSet0;
		MatsAndGOs_t963675950 * L_4 = L_3->get_matsAndGOs_1();
		List_1_t1379721816 * L_5 = L_4->get_mats_0();
		MatAndTransformToMerged_t4202614370 * L_6 = List_1_get_Item_m2254468706(L_5, 0, /*hidden argument*/List_1_get_Item_m2254468706_RuntimeMethod_var);
		Material_t340375123 * L_7 = L_6->get_mat_0();
		ShaderTextureProperty_t1323711284 * L_8 = ___texturePropertyName5;
		Color_t2555686324  L_9 = MB3_TextureCombinerNonTextureProperties_GetColorForTemporaryTexture_m3387911628(L_2, L_7, L_8, /*hidden argument*/NULL);
		Camera_set_backgroundColor_m1332346802(L_1, L_9, /*hidden argument*/NULL);
		float L_10 = Rect_get_y_m1501338330((Rect_t2360479859 *)(&V_0), /*hidden argument*/NULL);
		float L_11 = Rect_get_height_m1358425599((Rect_t2360479859 *)(&V_0), /*hidden argument*/NULL);
		Rect_set_y_m3702432190((Rect_t2360479859 *)(&V_0), ((float)il2cpp_codegen_subtract((float)(1.0f), (float)((float)il2cpp_codegen_add((float)L_10, (float)L_11)))), /*hidden argument*/NULL);
		Rect_t2360479859 * L_12 = (&V_0);
		float L_13 = Rect_get_x_m3839990490((Rect_t2360479859 *)L_12, /*hidden argument*/NULL);
		RenderTexture_t2108887433 * L_14 = __this->get__destinationTexture_2();
		int32_t L_15 = VirtFuncInvoker0< int32_t >::Invoke(4 /* System.Int32 UnityEngine.Texture::get_width() */, L_14);
		Rect_set_x_m2352063068((Rect_t2360479859 *)L_12, ((float)il2cpp_codegen_multiply((float)L_13, (float)(((float)((float)L_15))))), /*hidden argument*/NULL);
		Rect_t2360479859 * L_16 = (&V_0);
		float L_17 = Rect_get_y_m1501338330((Rect_t2360479859 *)L_16, /*hidden argument*/NULL);
		RenderTexture_t2108887433 * L_18 = __this->get__destinationTexture_2();
		int32_t L_19 = VirtFuncInvoker0< int32_t >::Invoke(6 /* System.Int32 UnityEngine.Texture::get_height() */, L_18);
		Rect_set_y_m3702432190((Rect_t2360479859 *)L_16, ((float)il2cpp_codegen_multiply((float)L_17, (float)(((float)((float)L_19))))), /*hidden argument*/NULL);
		Rect_t2360479859 * L_20 = (&V_0);
		float L_21 = Rect_get_width_m3421484486((Rect_t2360479859 *)L_20, /*hidden argument*/NULL);
		RenderTexture_t2108887433 * L_22 = __this->get__destinationTexture_2();
		int32_t L_23 = VirtFuncInvoker0< int32_t >::Invoke(4 /* System.Int32 UnityEngine.Texture::get_width() */, L_22);
		Rect_set_width_m2963421158((Rect_t2360479859 *)L_20, ((float)il2cpp_codegen_multiply((float)L_21, (float)(((float)((float)L_23))))), /*hidden argument*/NULL);
		Rect_t2360479859 * L_24 = (&V_0);
		float L_25 = Rect_get_height_m1358425599((Rect_t2360479859 *)L_24, /*hidden argument*/NULL);
		RenderTexture_t2108887433 * L_26 = __this->get__destinationTexture_2();
		int32_t L_27 = VirtFuncInvoker0< int32_t >::Invoke(6 /* System.Int32 UnityEngine.Texture::get_height() */, L_26);
		Rect_set_height_m1625569324((Rect_t2360479859 *)L_24, ((float)il2cpp_codegen_multiply((float)L_25, (float)(((float)((float)L_27))))), /*hidden argument*/NULL);
		Rect_t2360479859  L_28 = V_0;
		V_1 = L_28;
		Rect_t2360479859 * L_29 = (&V_1);
		float L_30 = Rect_get_x_m3839990490((Rect_t2360479859 *)L_29, /*hidden argument*/NULL);
		int32_t L_31 = __this->get__padding_4();
		Rect_set_x_m2352063068((Rect_t2360479859 *)L_29, ((float)il2cpp_codegen_subtract((float)L_30, (float)(((float)((float)L_31))))), /*hidden argument*/NULL);
		Rect_t2360479859 * L_32 = (&V_1);
		float L_33 = Rect_get_y_m1501338330((Rect_t2360479859 *)L_32, /*hidden argument*/NULL);
		int32_t L_34 = __this->get__padding_4();
		Rect_set_y_m3702432190((Rect_t2360479859 *)L_32, ((float)il2cpp_codegen_subtract((float)L_33, (float)(((float)((float)L_34))))), /*hidden argument*/NULL);
		Rect_t2360479859 * L_35 = (&V_1);
		float L_36 = Rect_get_width_m3421484486((Rect_t2360479859 *)L_35, /*hidden argument*/NULL);
		int32_t L_37 = __this->get__padding_4();
		Rect_set_width_m2963421158((Rect_t2360479859 *)L_35, ((float)il2cpp_codegen_add((float)L_36, (float)(((float)((float)((int32_t)il2cpp_codegen_multiply((int32_t)L_37, (int32_t)2))))))), /*hidden argument*/NULL);
		Rect_t2360479859 * L_38 = (&V_1);
		float L_39 = Rect_get_height_m1358425599((Rect_t2360479859 *)L_38, /*hidden argument*/NULL);
		int32_t L_40 = __this->get__padding_4();
		Rect_set_height_m1625569324((Rect_t2360479859 *)L_38, ((float)il2cpp_codegen_add((float)L_39, (float)(((float)((float)((int32_t)il2cpp_codegen_multiply((int32_t)L_40, (int32_t)2))))))), /*hidden argument*/NULL);
		il2cpp_codegen_initobj((&V_2), sizeof(Rect_t2360479859 ));
		MB_TexSet_t80133013 * L_41 = ___texSet0;
		MeshBakerMaterialTextureU5BU5D_t3009043374* L_42 = L_41->get_ts_0();
		int32_t L_43 = __this->get_indexOfTexSetToRender_10();
		int32_t L_44 = L_43;
		MeshBakerMaterialTexture_t567627287 * L_45 = (L_42)->GetAtUnchecked(static_cast<il2cpp_array_size_t>(L_44));
		DRect_t3868393502  L_46 = MeshBakerMaterialTexture_GetEncapsulatingSamplingRect_m1507467597(L_45, /*hidden argument*/NULL);
		V_4 = L_46;
		Rect_t2360479859  L_47 = DRect_GetRect_m1338813288((DRect_t3868393502 *)(&V_4), /*hidden argument*/NULL);
		V_3 = L_47;
		bool L_48 = __this->get__fixOutOfBoundsUVs_6();
		if (L_48)
		{
			goto IL_013a;
		}
	}

IL_013a:
	{
		MeshBakerMaterialTexture_t567627287 * L_49 = ___source1;
		Texture2D_t3840446185 * L_50 = MeshBakerMaterialTexture_GetTexture2D_m1492496826(L_49, /*hidden argument*/NULL);
		V_5 = L_50;
		Texture2D_t3840446185 * L_51 = V_5;
		int32_t L_52 = Texture_get_wrapMode_m2187367613(L_51, /*hidden argument*/NULL);
		V_6 = L_52;
		float L_53 = Rect_get_width_m3421484486((Rect_t2360479859 *)(&V_3), /*hidden argument*/NULL);
		if ((!(((float)L_53) == ((float)(1.0f)))))
		{
			goto IL_019c;
		}
	}
	{
		float L_54 = Rect_get_height_m1358425599((Rect_t2360479859 *)(&V_3), /*hidden argument*/NULL);
		if ((!(((float)L_54) == ((float)(1.0f)))))
		{
			goto IL_019c;
		}
	}
	{
		float L_55 = Rect_get_x_m3839990490((Rect_t2360479859 *)(&V_3), /*hidden argument*/NULL);
		if ((!(((float)L_55) == ((float)(0.0f)))))
		{
			goto IL_019c;
		}
	}
	{
		float L_56 = Rect_get_y_m1501338330((Rect_t2360479859 *)(&V_3), /*hidden argument*/NULL);
		if ((!(((float)L_56) == ((float)(0.0f)))))
		{
			goto IL_019c;
		}
	}
	{
		Texture2D_t3840446185 * L_57 = V_5;
		Texture_set_wrapMode_m587872754(L_57, 1, /*hidden argument*/NULL);
		goto IL_01a4;
	}

IL_019c:
	{
		Texture2D_t3840446185 * L_58 = V_5;
		Texture_set_wrapMode_m587872754(L_58, 0, /*hidden argument*/NULL);
	}

IL_01a4:
	{
		int32_t L_59 = __this->get_LOG_LEVEL_0();
		if ((((int32_t)L_59) < ((int32_t)5)))
		{
			goto IL_0205;
		}
	}
	{
		ObjectU5BU5D_t2843939325* L_60 = (ObjectU5BU5D_t2843939325*)SZArrayNew(ObjectU5BU5D_t2843939325_il2cpp_TypeInfo_var, (uint32_t)8);
		ObjectU5BU5D_t2843939325* L_61 = L_60;
		ArrayElementTypeCheck (L_61, _stringLiteral880146755);
		(L_61)->SetAtUnchecked(static_cast<il2cpp_array_size_t>(0), (RuntimeObject *)_stringLiteral880146755);
		ObjectU5BU5D_t2843939325* L_62 = L_61;
		Texture2D_t3840446185 * L_63 = V_5;
		String_t* L_64 = Object_get_name_m4211327027(L_63, /*hidden argument*/NULL);
		ArrayElementTypeCheck (L_62, L_64);
		(L_62)->SetAtUnchecked(static_cast<il2cpp_array_size_t>(1), (RuntimeObject *)L_64);
		ObjectU5BU5D_t2843939325* L_65 = L_62;
		ArrayElementTypeCheck (L_65, _stringLiteral3105335571);
		(L_65)->SetAtUnchecked(static_cast<il2cpp_array_size_t>(2), (RuntimeObject *)_stringLiteral3105335571);
		ObjectU5BU5D_t2843939325* L_66 = L_65;
		Rect_t2360479859  L_67 = V_0;
		Rect_t2360479859  L_68 = L_67;
		RuntimeObject * L_69 = Box(Rect_t2360479859_il2cpp_TypeInfo_var, &L_68);
		ArrayElementTypeCheck (L_66, L_69);
		(L_66)->SetAtUnchecked(static_cast<il2cpp_array_size_t>(3), (RuntimeObject *)L_69);
		ObjectU5BU5D_t2843939325* L_70 = L_66;
		ArrayElementTypeCheck (L_70, _stringLiteral388412136);
		(L_70)->SetAtUnchecked(static_cast<il2cpp_array_size_t>(4), (RuntimeObject *)_stringLiteral388412136);
		ObjectU5BU5D_t2843939325* L_71 = L_70;
		Rect_t2360479859  L_72 = V_3;
		Rect_t2360479859  L_73 = L_72;
		RuntimeObject * L_74 = Box(Rect_t2360479859_il2cpp_TypeInfo_var, &L_73);
		ArrayElementTypeCheck (L_71, L_74);
		(L_71)->SetAtUnchecked(static_cast<il2cpp_array_size_t>(5), (RuntimeObject *)L_74);
		ObjectU5BU5D_t2843939325* L_75 = L_71;
		ArrayElementTypeCheck (L_75, _stringLiteral2374672254);
		(L_75)->SetAtUnchecked(static_cast<il2cpp_array_size_t>(6), (RuntimeObject *)_stringLiteral2374672254);
		ObjectU5BU5D_t2843939325* L_76 = L_75;
		Material_t340375123 * L_77 = __this->get_mat_1();
		ArrayElementTypeCheck (L_76, L_77);
		(L_76)->SetAtUnchecked(static_cast<il2cpp_array_size_t>(7), (RuntimeObject *)L_77);
		String_t* L_78 = String_Concat_m2971454694(NULL /*static, unused*/, L_76, /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(Debug_t3317548046_il2cpp_TypeInfo_var);
		Debug_Log_m4051431634(NULL /*static, unused*/, L_78, /*hidden argument*/NULL);
	}

IL_0205:
	{
		il2cpp_codegen_initobj((&V_7), sizeof(Rect_t2360479859 ));
		float L_79 = Rect_get_x_m3839990490((Rect_t2360479859 *)(&V_3), /*hidden argument*/NULL);
		Rect_set_x_m2352063068((Rect_t2360479859 *)(&V_7), L_79, /*hidden argument*/NULL);
		float L_80 = Rect_get_y_m1501338330((Rect_t2360479859 *)(&V_3), /*hidden argument*/NULL);
		Texture2D_t3840446185 * L_81 = V_5;
		int32_t L_82 = VirtFuncInvoker0< int32_t >::Invoke(6 /* System.Int32 UnityEngine.Texture::get_height() */, L_81);
		Rect_set_y_m3702432190((Rect_t2360479859 *)(&V_7), ((float)il2cpp_codegen_subtract((float)((float)il2cpp_codegen_add((float)L_80, (float)(1.0f))), (float)((float)((float)(1.0f)/(float)(((float)((float)L_82))))))), /*hidden argument*/NULL);
		float L_83 = Rect_get_width_m3421484486((Rect_t2360479859 *)(&V_3), /*hidden argument*/NULL);
		Rect_set_width_m2963421158((Rect_t2360479859 *)(&V_7), L_83, /*hidden argument*/NULL);
		Texture2D_t3840446185 * L_84 = V_5;
		int32_t L_85 = VirtFuncInvoker0< int32_t >::Invoke(6 /* System.Int32 UnityEngine.Texture::get_height() */, L_84);
		Rect_set_height_m1625569324((Rect_t2360479859 *)(&V_7), ((float)((float)(1.0f)/(float)(((float)((float)L_85))))), /*hidden argument*/NULL);
		float L_86 = Rect_get_x_m3839990490((Rect_t2360479859 *)(&V_0), /*hidden argument*/NULL);
		Rect_set_x_m2352063068((Rect_t2360479859 *)(&V_2), L_86, /*hidden argument*/NULL);
		float L_87 = Rect_get_y_m1501338330((Rect_t2360479859 *)(&V_1), /*hidden argument*/NULL);
		Rect_set_y_m3702432190((Rect_t2360479859 *)(&V_2), L_87, /*hidden argument*/NULL);
		float L_88 = Rect_get_width_m3421484486((Rect_t2360479859 *)(&V_0), /*hidden argument*/NULL);
		Rect_set_width_m2963421158((Rect_t2360479859 *)(&V_2), L_88, /*hidden argument*/NULL);
		int32_t L_89 = __this->get__padding_4();
		Rect_set_height_m1625569324((Rect_t2360479859 *)(&V_2), (((float)((float)L_89))), /*hidden argument*/NULL);
		RenderTexture_t2108887433 * L_90 = RenderTexture_get_active_m2427925032(NULL /*static, unused*/, /*hidden argument*/NULL);
		V_8 = L_90;
		RenderTexture_t2108887433 * L_91 = __this->get__destinationTexture_2();
		RenderTexture_set_active_m1437732586(NULL /*static, unused*/, L_91, /*hidden argument*/NULL);
		Rect_t2360479859  L_92 = V_2;
		Texture2D_t3840446185 * L_93 = V_5;
		Rect_t2360479859  L_94 = V_7;
		Material_t340375123 * L_95 = __this->get_mat_1();
		IL2CPP_RUNTIME_CLASS_INIT(Graphics_t783367614_il2cpp_TypeInfo_var);
		Graphics_DrawTexture_m1420473909(NULL /*static, unused*/, L_92, L_93, L_94, 0, 0, 0, 0, L_95, /*hidden argument*/NULL);
		float L_96 = Rect_get_x_m3839990490((Rect_t2360479859 *)(&V_3), /*hidden argument*/NULL);
		Rect_set_x_m2352063068((Rect_t2360479859 *)(&V_7), L_96, /*hidden argument*/NULL);
		float L_97 = Rect_get_y_m1501338330((Rect_t2360479859 *)(&V_3), /*hidden argument*/NULL);
		Rect_set_y_m3702432190((Rect_t2360479859 *)(&V_7), L_97, /*hidden argument*/NULL);
		float L_98 = Rect_get_width_m3421484486((Rect_t2360479859 *)(&V_3), /*hidden argument*/NULL);
		Rect_set_width_m2963421158((Rect_t2360479859 *)(&V_7), L_98, /*hidden argument*/NULL);
		Texture2D_t3840446185 * L_99 = V_5;
		int32_t L_100 = VirtFuncInvoker0< int32_t >::Invoke(6 /* System.Int32 UnityEngine.Texture::get_height() */, L_99);
		Rect_set_height_m1625569324((Rect_t2360479859 *)(&V_7), ((float)((float)(1.0f)/(float)(((float)((float)L_100))))), /*hidden argument*/NULL);
		float L_101 = Rect_get_x_m3839990490((Rect_t2360479859 *)(&V_0), /*hidden argument*/NULL);
		Rect_set_x_m2352063068((Rect_t2360479859 *)(&V_2), L_101, /*hidden argument*/NULL);
		float L_102 = Rect_get_y_m1501338330((Rect_t2360479859 *)(&V_0), /*hidden argument*/NULL);
		float L_103 = Rect_get_height_m1358425599((Rect_t2360479859 *)(&V_0), /*hidden argument*/NULL);
		Rect_set_y_m3702432190((Rect_t2360479859 *)(&V_2), ((float)il2cpp_codegen_add((float)L_102, (float)L_103)), /*hidden argument*/NULL);
		float L_104 = Rect_get_width_m3421484486((Rect_t2360479859 *)(&V_0), /*hidden argument*/NULL);
		Rect_set_width_m2963421158((Rect_t2360479859 *)(&V_2), L_104, /*hidden argument*/NULL);
		int32_t L_105 = __this->get__padding_4();
		Rect_set_height_m1625569324((Rect_t2360479859 *)(&V_2), (((float)((float)L_105))), /*hidden argument*/NULL);
		Rect_t2360479859  L_106 = V_2;
		Texture2D_t3840446185 * L_107 = V_5;
		Rect_t2360479859  L_108 = V_7;
		Material_t340375123 * L_109 = __this->get_mat_1();
		Graphics_DrawTexture_m1420473909(NULL /*static, unused*/, L_106, L_107, L_108, 0, 0, 0, 0, L_109, /*hidden argument*/NULL);
		float L_110 = Rect_get_x_m3839990490((Rect_t2360479859 *)(&V_3), /*hidden argument*/NULL);
		Rect_set_x_m2352063068((Rect_t2360479859 *)(&V_7), L_110, /*hidden argument*/NULL);
		float L_111 = Rect_get_y_m1501338330((Rect_t2360479859 *)(&V_3), /*hidden argument*/NULL);
		Rect_set_y_m3702432190((Rect_t2360479859 *)(&V_7), L_111, /*hidden argument*/NULL);
		Texture2D_t3840446185 * L_112 = V_5;
		int32_t L_113 = VirtFuncInvoker0< int32_t >::Invoke(4 /* System.Int32 UnityEngine.Texture::get_width() */, L_112);
		Rect_set_width_m2963421158((Rect_t2360479859 *)(&V_7), ((float)((float)(1.0f)/(float)(((float)((float)L_113))))), /*hidden argument*/NULL);
		float L_114 = Rect_get_height_m1358425599((Rect_t2360479859 *)(&V_3), /*hidden argument*/NULL);
		Rect_set_height_m1625569324((Rect_t2360479859 *)(&V_7), L_114, /*hidden argument*/NULL);
		float L_115 = Rect_get_x_m3839990490((Rect_t2360479859 *)(&V_1), /*hidden argument*/NULL);
		Rect_set_x_m2352063068((Rect_t2360479859 *)(&V_2), L_115, /*hidden argument*/NULL);
		float L_116 = Rect_get_y_m1501338330((Rect_t2360479859 *)(&V_0), /*hidden argument*/NULL);
		Rect_set_y_m3702432190((Rect_t2360479859 *)(&V_2), L_116, /*hidden argument*/NULL);
		int32_t L_117 = __this->get__padding_4();
		Rect_set_width_m2963421158((Rect_t2360479859 *)(&V_2), (((float)((float)L_117))), /*hidden argument*/NULL);
		float L_118 = Rect_get_height_m1358425599((Rect_t2360479859 *)(&V_0), /*hidden argument*/NULL);
		Rect_set_height_m1625569324((Rect_t2360479859 *)(&V_2), L_118, /*hidden argument*/NULL);
		Rect_t2360479859  L_119 = V_2;
		Texture2D_t3840446185 * L_120 = V_5;
		Rect_t2360479859  L_121 = V_7;
		Material_t340375123 * L_122 = __this->get_mat_1();
		Graphics_DrawTexture_m1420473909(NULL /*static, unused*/, L_119, L_120, L_121, 0, 0, 0, 0, L_122, /*hidden argument*/NULL);
		float L_123 = Rect_get_x_m3839990490((Rect_t2360479859 *)(&V_3), /*hidden argument*/NULL);
		Texture2D_t3840446185 * L_124 = V_5;
		int32_t L_125 = VirtFuncInvoker0< int32_t >::Invoke(4 /* System.Int32 UnityEngine.Texture::get_width() */, L_124);
		Rect_set_x_m2352063068((Rect_t2360479859 *)(&V_7), ((float)il2cpp_codegen_subtract((float)((float)il2cpp_codegen_add((float)L_123, (float)(1.0f))), (float)((float)((float)(1.0f)/(float)(((float)((float)L_125))))))), /*hidden argument*/NULL);
		float L_126 = Rect_get_y_m1501338330((Rect_t2360479859 *)(&V_3), /*hidden argument*/NULL);
		Rect_set_y_m3702432190((Rect_t2360479859 *)(&V_7), L_126, /*hidden argument*/NULL);
		Texture2D_t3840446185 * L_127 = V_5;
		int32_t L_128 = VirtFuncInvoker0< int32_t >::Invoke(4 /* System.Int32 UnityEngine.Texture::get_width() */, L_127);
		Rect_set_width_m2963421158((Rect_t2360479859 *)(&V_7), ((float)((float)(1.0f)/(float)(((float)((float)L_128))))), /*hidden argument*/NULL);
		float L_129 = Rect_get_height_m1358425599((Rect_t2360479859 *)(&V_3), /*hidden argument*/NULL);
		Rect_set_height_m1625569324((Rect_t2360479859 *)(&V_7), L_129, /*hidden argument*/NULL);
		float L_130 = Rect_get_x_m3839990490((Rect_t2360479859 *)(&V_0), /*hidden argument*/NULL);
		float L_131 = Rect_get_width_m3421484486((Rect_t2360479859 *)(&V_0), /*hidden argument*/NULL);
		Rect_set_x_m2352063068((Rect_t2360479859 *)(&V_2), ((float)il2cpp_codegen_add((float)L_130, (float)L_131)), /*hidden argument*/NULL);
		float L_132 = Rect_get_y_m1501338330((Rect_t2360479859 *)(&V_0), /*hidden argument*/NULL);
		Rect_set_y_m3702432190((Rect_t2360479859 *)(&V_2), L_132, /*hidden argument*/NULL);
		int32_t L_133 = __this->get__padding_4();
		Rect_set_width_m2963421158((Rect_t2360479859 *)(&V_2), (((float)((float)L_133))), /*hidden argument*/NULL);
		float L_134 = Rect_get_height_m1358425599((Rect_t2360479859 *)(&V_0), /*hidden argument*/NULL);
		Rect_set_height_m1625569324((Rect_t2360479859 *)(&V_2), L_134, /*hidden argument*/NULL);
		Rect_t2360479859  L_135 = V_2;
		Texture2D_t3840446185 * L_136 = V_5;
		Rect_t2360479859  L_137 = V_7;
		Material_t340375123 * L_138 = __this->get_mat_1();
		Graphics_DrawTexture_m1420473909(NULL /*static, unused*/, L_135, L_136, L_137, 0, 0, 0, 0, L_138, /*hidden argument*/NULL);
		float L_139 = Rect_get_x_m3839990490((Rect_t2360479859 *)(&V_3), /*hidden argument*/NULL);
		Rect_set_x_m2352063068((Rect_t2360479859 *)(&V_7), L_139, /*hidden argument*/NULL);
		float L_140 = Rect_get_y_m1501338330((Rect_t2360479859 *)(&V_3), /*hidden argument*/NULL);
		Texture2D_t3840446185 * L_141 = V_5;
		int32_t L_142 = VirtFuncInvoker0< int32_t >::Invoke(6 /* System.Int32 UnityEngine.Texture::get_height() */, L_141);
		Rect_set_y_m3702432190((Rect_t2360479859 *)(&V_7), ((float)il2cpp_codegen_subtract((float)((float)il2cpp_codegen_add((float)L_140, (float)(1.0f))), (float)((float)((float)(1.0f)/(float)(((float)((float)L_142))))))), /*hidden argument*/NULL);
		Texture2D_t3840446185 * L_143 = V_5;
		int32_t L_144 = VirtFuncInvoker0< int32_t >::Invoke(4 /* System.Int32 UnityEngine.Texture::get_width() */, L_143);
		Rect_set_width_m2963421158((Rect_t2360479859 *)(&V_7), ((float)((float)(1.0f)/(float)(((float)((float)L_144))))), /*hidden argument*/NULL);
		Texture2D_t3840446185 * L_145 = V_5;
		int32_t L_146 = VirtFuncInvoker0< int32_t >::Invoke(6 /* System.Int32 UnityEngine.Texture::get_height() */, L_145);
		Rect_set_height_m1625569324((Rect_t2360479859 *)(&V_7), ((float)((float)(1.0f)/(float)(((float)((float)L_146))))), /*hidden argument*/NULL);
		float L_147 = Rect_get_x_m3839990490((Rect_t2360479859 *)(&V_1), /*hidden argument*/NULL);
		Rect_set_x_m2352063068((Rect_t2360479859 *)(&V_2), L_147, /*hidden argument*/NULL);
		float L_148 = Rect_get_y_m1501338330((Rect_t2360479859 *)(&V_1), /*hidden argument*/NULL);
		Rect_set_y_m3702432190((Rect_t2360479859 *)(&V_2), L_148, /*hidden argument*/NULL);
		int32_t L_149 = __this->get__padding_4();
		Rect_set_width_m2963421158((Rect_t2360479859 *)(&V_2), (((float)((float)L_149))), /*hidden argument*/NULL);
		int32_t L_150 = __this->get__padding_4();
		Rect_set_height_m1625569324((Rect_t2360479859 *)(&V_2), (((float)((float)L_150))), /*hidden argument*/NULL);
		Rect_t2360479859  L_151 = V_2;
		Texture2D_t3840446185 * L_152 = V_5;
		Rect_t2360479859  L_153 = V_7;
		Material_t340375123 * L_154 = __this->get_mat_1();
		Graphics_DrawTexture_m1420473909(NULL /*static, unused*/, L_151, L_152, L_153, 0, 0, 0, 0, L_154, /*hidden argument*/NULL);
		float L_155 = Rect_get_x_m3839990490((Rect_t2360479859 *)(&V_3), /*hidden argument*/NULL);
		Texture2D_t3840446185 * L_156 = V_5;
		int32_t L_157 = VirtFuncInvoker0< int32_t >::Invoke(4 /* System.Int32 UnityEngine.Texture::get_width() */, L_156);
		Rect_set_x_m2352063068((Rect_t2360479859 *)(&V_7), ((float)il2cpp_codegen_subtract((float)((float)il2cpp_codegen_add((float)L_155, (float)(1.0f))), (float)((float)((float)(1.0f)/(float)(((float)((float)L_157))))))), /*hidden argument*/NULL);
		float L_158 = Rect_get_y_m1501338330((Rect_t2360479859 *)(&V_3), /*hidden argument*/NULL);
		Texture2D_t3840446185 * L_159 = V_5;
		int32_t L_160 = VirtFuncInvoker0< int32_t >::Invoke(6 /* System.Int32 UnityEngine.Texture::get_height() */, L_159);
		Rect_set_y_m3702432190((Rect_t2360479859 *)(&V_7), ((float)il2cpp_codegen_subtract((float)((float)il2cpp_codegen_add((float)L_158, (float)(1.0f))), (float)((float)((float)(1.0f)/(float)(((float)((float)L_160))))))), /*hidden argument*/NULL);
		Texture2D_t3840446185 * L_161 = V_5;
		int32_t L_162 = VirtFuncInvoker0< int32_t >::Invoke(4 /* System.Int32 UnityEngine.Texture::get_width() */, L_161);
		Rect_set_width_m2963421158((Rect_t2360479859 *)(&V_7), ((float)((float)(1.0f)/(float)(((float)((float)L_162))))), /*hidden argument*/NULL);
		Texture2D_t3840446185 * L_163 = V_5;
		int32_t L_164 = VirtFuncInvoker0< int32_t >::Invoke(6 /* System.Int32 UnityEngine.Texture::get_height() */, L_163);
		Rect_set_height_m1625569324((Rect_t2360479859 *)(&V_7), ((float)((float)(1.0f)/(float)(((float)((float)L_164))))), /*hidden argument*/NULL);
		float L_165 = Rect_get_x_m3839990490((Rect_t2360479859 *)(&V_0), /*hidden argument*/NULL);
		float L_166 = Rect_get_width_m3421484486((Rect_t2360479859 *)(&V_0), /*hidden argument*/NULL);
		Rect_set_x_m2352063068((Rect_t2360479859 *)(&V_2), ((float)il2cpp_codegen_add((float)L_165, (float)L_166)), /*hidden argument*/NULL);
		float L_167 = Rect_get_y_m1501338330((Rect_t2360479859 *)(&V_1), /*hidden argument*/NULL);
		Rect_set_y_m3702432190((Rect_t2360479859 *)(&V_2), L_167, /*hidden argument*/NULL);
		int32_t L_168 = __this->get__padding_4();
		Rect_set_width_m2963421158((Rect_t2360479859 *)(&V_2), (((float)((float)L_168))), /*hidden argument*/NULL);
		int32_t L_169 = __this->get__padding_4();
		Rect_set_height_m1625569324((Rect_t2360479859 *)(&V_2), (((float)((float)L_169))), /*hidden argument*/NULL);
		Rect_t2360479859  L_170 = V_2;
		Texture2D_t3840446185 * L_171 = V_5;
		Rect_t2360479859  L_172 = V_7;
		Material_t340375123 * L_173 = __this->get_mat_1();
		Graphics_DrawTexture_m1420473909(NULL /*static, unused*/, L_170, L_171, L_172, 0, 0, 0, 0, L_173, /*hidden argument*/NULL);
		float L_174 = Rect_get_x_m3839990490((Rect_t2360479859 *)(&V_3), /*hidden argument*/NULL);
		Rect_set_x_m2352063068((Rect_t2360479859 *)(&V_7), L_174, /*hidden argument*/NULL);
		float L_175 = Rect_get_y_m1501338330((Rect_t2360479859 *)(&V_3), /*hidden argument*/NULL);
		Rect_set_y_m3702432190((Rect_t2360479859 *)(&V_7), L_175, /*hidden argument*/NULL);
		Texture2D_t3840446185 * L_176 = V_5;
		int32_t L_177 = VirtFuncInvoker0< int32_t >::Invoke(4 /* System.Int32 UnityEngine.Texture::get_width() */, L_176);
		Rect_set_width_m2963421158((Rect_t2360479859 *)(&V_7), ((float)((float)(1.0f)/(float)(((float)((float)L_177))))), /*hidden argument*/NULL);
		Texture2D_t3840446185 * L_178 = V_5;
		int32_t L_179 = VirtFuncInvoker0< int32_t >::Invoke(6 /* System.Int32 UnityEngine.Texture::get_height() */, L_178);
		Rect_set_height_m1625569324((Rect_t2360479859 *)(&V_7), ((float)((float)(1.0f)/(float)(((float)((float)L_179))))), /*hidden argument*/NULL);
		float L_180 = Rect_get_x_m3839990490((Rect_t2360479859 *)(&V_1), /*hidden argument*/NULL);
		Rect_set_x_m2352063068((Rect_t2360479859 *)(&V_2), L_180, /*hidden argument*/NULL);
		float L_181 = Rect_get_y_m1501338330((Rect_t2360479859 *)(&V_0), /*hidden argument*/NULL);
		float L_182 = Rect_get_height_m1358425599((Rect_t2360479859 *)(&V_0), /*hidden argument*/NULL);
		Rect_set_y_m3702432190((Rect_t2360479859 *)(&V_2), ((float)il2cpp_codegen_add((float)L_181, (float)L_182)), /*hidden argument*/NULL);
		int32_t L_183 = __this->get__padding_4();
		Rect_set_width_m2963421158((Rect_t2360479859 *)(&V_2), (((float)((float)L_183))), /*hidden argument*/NULL);
		int32_t L_184 = __this->get__padding_4();
		Rect_set_height_m1625569324((Rect_t2360479859 *)(&V_2), (((float)((float)L_184))), /*hidden argument*/NULL);
		Rect_t2360479859  L_185 = V_2;
		Texture2D_t3840446185 * L_186 = V_5;
		Rect_t2360479859  L_187 = V_7;
		Material_t340375123 * L_188 = __this->get_mat_1();
		Graphics_DrawTexture_m1420473909(NULL /*static, unused*/, L_185, L_186, L_187, 0, 0, 0, 0, L_188, /*hidden argument*/NULL);
		float L_189 = Rect_get_x_m3839990490((Rect_t2360479859 *)(&V_3), /*hidden argument*/NULL);
		Texture2D_t3840446185 * L_190 = V_5;
		int32_t L_191 = VirtFuncInvoker0< int32_t >::Invoke(4 /* System.Int32 UnityEngine.Texture::get_width() */, L_190);
		Rect_set_x_m2352063068((Rect_t2360479859 *)(&V_7), ((float)il2cpp_codegen_subtract((float)((float)il2cpp_codegen_add((float)L_189, (float)(1.0f))), (float)((float)((float)(1.0f)/(float)(((float)((float)L_191))))))), /*hidden argument*/NULL);
		float L_192 = Rect_get_y_m1501338330((Rect_t2360479859 *)(&V_3), /*hidden argument*/NULL);
		Rect_set_y_m3702432190((Rect_t2360479859 *)(&V_7), L_192, /*hidden argument*/NULL);
		Texture2D_t3840446185 * L_193 = V_5;
		int32_t L_194 = VirtFuncInvoker0< int32_t >::Invoke(4 /* System.Int32 UnityEngine.Texture::get_width() */, L_193);
		Rect_set_width_m2963421158((Rect_t2360479859 *)(&V_7), ((float)((float)(1.0f)/(float)(((float)((float)L_194))))), /*hidden argument*/NULL);
		Texture2D_t3840446185 * L_195 = V_5;
		int32_t L_196 = VirtFuncInvoker0< int32_t >::Invoke(6 /* System.Int32 UnityEngine.Texture::get_height() */, L_195);
		Rect_set_height_m1625569324((Rect_t2360479859 *)(&V_7), ((float)((float)(1.0f)/(float)(((float)((float)L_196))))), /*hidden argument*/NULL);
		float L_197 = Rect_get_x_m3839990490((Rect_t2360479859 *)(&V_0), /*hidden argument*/NULL);
		float L_198 = Rect_get_width_m3421484486((Rect_t2360479859 *)(&V_0), /*hidden argument*/NULL);
		Rect_set_x_m2352063068((Rect_t2360479859 *)(&V_2), ((float)il2cpp_codegen_add((float)L_197, (float)L_198)), /*hidden argument*/NULL);
		float L_199 = Rect_get_y_m1501338330((Rect_t2360479859 *)(&V_0), /*hidden argument*/NULL);
		float L_200 = Rect_get_height_m1358425599((Rect_t2360479859 *)(&V_0), /*hidden argument*/NULL);
		Rect_set_y_m3702432190((Rect_t2360479859 *)(&V_2), ((float)il2cpp_codegen_add((float)L_199, (float)L_200)), /*hidden argument*/NULL);
		int32_t L_201 = __this->get__padding_4();
		Rect_set_width_m2963421158((Rect_t2360479859 *)(&V_2), (((float)((float)L_201))), /*hidden argument*/NULL);
		int32_t L_202 = __this->get__padding_4();
		Rect_set_height_m1625569324((Rect_t2360479859 *)(&V_2), (((float)((float)L_202))), /*hidden argument*/NULL);
		Rect_t2360479859  L_203 = V_2;
		Texture2D_t3840446185 * L_204 = V_5;
		Rect_t2360479859  L_205 = V_7;
		Material_t340375123 * L_206 = __this->get_mat_1();
		Graphics_DrawTexture_m1420473909(NULL /*static, unused*/, L_203, L_204, L_205, 0, 0, 0, 0, L_206, /*hidden argument*/NULL);
		Rect_t2360479859  L_207 = V_0;
		Texture2D_t3840446185 * L_208 = V_5;
		Rect_t2360479859  L_209 = V_3;
		Material_t340375123 * L_210 = __this->get_mat_1();
		Graphics_DrawTexture_m1420473909(NULL /*static, unused*/, L_207, L_208, L_209, 0, 0, 0, 0, L_210, /*hidden argument*/NULL);
		RenderTexture_t2108887433 * L_211 = V_8;
		RenderTexture_set_active_m1437732586(NULL /*static, unused*/, L_211, /*hidden argument*/NULL);
		Texture2D_t3840446185 * L_212 = V_5;
		int32_t L_213 = V_6;
		Texture_set_wrapMode_m587872754(L_212, L_213, /*hidden argument*/NULL);
		return;
	}
}
// System.Void MB_TextureCombinerRenderTexture::_printTexture(UnityEngine.Texture2D)
extern "C" IL2CPP_METHOD_ATTR void MB_TextureCombinerRenderTexture__printTexture_m968241879 (RuntimeObject * __this /* static, unused */, Texture2D_t3840446185 * ___t0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (MB_TextureCombinerRenderTexture__printTexture_m968241879_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	Color32U5BU5D_t3850468773* V_0 = NULL;
	String_t* V_1 = NULL;
	int32_t V_2 = 0;
	int32_t V_3 = 0;
	Exception_t * V_4 = NULL;
	Exception_t * __last_unhandled_exception = 0;
	NO_UNUSED_WARNING (__last_unhandled_exception);
	Exception_t * __exception_local = 0;
	NO_UNUSED_WARNING (__exception_local);
	int32_t __leave_target = -1;
	NO_UNUSED_WARNING (__leave_target);
	{
		Texture2D_t3840446185 * L_0 = ___t0;
		int32_t L_1 = VirtFuncInvoker0< int32_t >::Invoke(4 /* System.Int32 UnityEngine.Texture::get_width() */, L_0);
		Texture2D_t3840446185 * L_2 = ___t0;
		int32_t L_3 = VirtFuncInvoker0< int32_t >::Invoke(6 /* System.Int32 UnityEngine.Texture::get_height() */, L_2);
		if ((((int32_t)((int32_t)il2cpp_codegen_multiply((int32_t)L_1, (int32_t)L_3))) <= ((int32_t)((int32_t)100))))
		{
			goto IL_001f;
		}
	}
	{
		IL2CPP_RUNTIME_CLASS_INIT(Debug_t3317548046_il2cpp_TypeInfo_var);
		Debug_Log_m4051431634(NULL /*static, unused*/, _stringLiteral3153182155, /*hidden argument*/NULL);
		return;
	}

IL_001f:
	try
	{ // begin try (depth: 1)
		{
			Texture2D_t3840446185 * L_4 = ___t0;
			Color32U5BU5D_t3850468773* L_5 = Texture2D_GetPixels32_m647746242(L_4, /*hidden argument*/NULL);
			V_0 = L_5;
			String_t* L_6 = ((String_t_StaticFields*)il2cpp_codegen_static_fields_for(String_t_il2cpp_TypeInfo_var))->get_Empty_5();
			V_1 = L_6;
			V_2 = 0;
			goto IL_0080;
		}

IL_0033:
		{
			V_3 = 0;
			goto IL_0064;
		}

IL_003a:
		{
			String_t* L_7 = V_1;
			Color32U5BU5D_t3850468773* L_8 = V_0;
			int32_t L_9 = V_2;
			Texture2D_t3840446185 * L_10 = ___t0;
			int32_t L_11 = VirtFuncInvoker0< int32_t >::Invoke(4 /* System.Int32 UnityEngine.Texture::get_width() */, L_10);
			int32_t L_12 = V_3;
			Color32_t2600501292  L_13 = (*(Color32_t2600501292 *)((L_8)->GetAddressAtUnchecked(static_cast<il2cpp_array_size_t>(((int32_t)il2cpp_codegen_add((int32_t)((int32_t)il2cpp_codegen_multiply((int32_t)L_9, (int32_t)L_11)), (int32_t)L_12))))));
			RuntimeObject * L_14 = Box(Color32_t2600501292_il2cpp_TypeInfo_var, &L_13);
			String_t* L_15 = String_Concat_m1715369213(NULL /*static, unused*/, L_7, L_14, _stringLiteral3450517380, /*hidden argument*/NULL);
			V_1 = L_15;
			int32_t L_16 = V_3;
			V_3 = ((int32_t)il2cpp_codegen_add((int32_t)L_16, (int32_t)1));
		}

IL_0064:
		{
			int32_t L_17 = V_3;
			Texture2D_t3840446185 * L_18 = ___t0;
			int32_t L_19 = VirtFuncInvoker0< int32_t >::Invoke(4 /* System.Int32 UnityEngine.Texture::get_width() */, L_18);
			if ((((int32_t)L_17) < ((int32_t)L_19)))
			{
				goto IL_003a;
			}
		}

IL_0070:
		{
			String_t* L_20 = V_1;
			String_t* L_21 = String_Concat_m3937257545(NULL /*static, unused*/, L_20, _stringLiteral3452614566, /*hidden argument*/NULL);
			V_1 = L_21;
			int32_t L_22 = V_2;
			V_2 = ((int32_t)il2cpp_codegen_add((int32_t)L_22, (int32_t)1));
		}

IL_0080:
		{
			int32_t L_23 = V_2;
			Texture2D_t3840446185 * L_24 = ___t0;
			int32_t L_25 = VirtFuncInvoker0< int32_t >::Invoke(6 /* System.Int32 UnityEngine.Texture::get_height() */, L_24);
			if ((((int32_t)L_23) < ((int32_t)L_25)))
			{
				goto IL_0033;
			}
		}

IL_008c:
		{
			String_t* L_26 = V_1;
			IL2CPP_RUNTIME_CLASS_INIT(Debug_t3317548046_il2cpp_TypeInfo_var);
			Debug_Log_m4051431634(NULL /*static, unused*/, L_26, /*hidden argument*/NULL);
			goto IL_00c5;
		}
	} // end try (depth: 1)
	catch(Il2CppExceptionWrapper& e)
	{
		__exception_local = (Exception_t *)e.ex;
		if(il2cpp_codegen_class_is_assignable_from (Exception_t_il2cpp_TypeInfo_var, il2cpp_codegen_object_class(e.ex)))
			goto CATCH_0097;
		throw e;
	}

CATCH_0097:
	{ // begin catch(System.Exception)
		V_4 = ((Exception_t *)__exception_local);
		Exception_t * L_27 = V_4;
		String_t* L_28 = VirtFuncInvoker0< String_t* >::Invoke(5 /* System.String System.Exception::get_Message() */, L_27);
		Exception_t * L_29 = V_4;
		String_t* L_30 = VirtFuncInvoker0< String_t* >::Invoke(8 /* System.String System.Exception::get_StackTrace() */, L_29);
		String_t* L_31 = VirtFuncInvoker0< String_t* >::Invoke(3 /* System.String System.Object::ToString() */, L_30);
		String_t* L_32 = String_Concat_m2163913788(NULL /*static, unused*/, _stringLiteral702318425, L_28, _stringLiteral3452614566, L_31, /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(Debug_t3317548046_il2cpp_TypeInfo_var);
		Debug_Log_m4051431634(NULL /*static, unused*/, L_32, /*hidden argument*/NULL);
		goto IL_00c5;
	} // end catch (depth: 1)

IL_00c5:
	{
		return;
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
