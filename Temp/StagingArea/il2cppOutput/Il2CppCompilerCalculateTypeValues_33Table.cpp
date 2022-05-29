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


// DigitalRuby.RainMaker.LoopingAudioSource
struct LoopingAudioSource_t2892973928;
// EnemyController
struct EnemyController_t2191660454;
// Inventory_Screen_Manager
struct Inventory_Screen_Manager_t2612322343;
// LoadManager_Inputs
struct LoadManager_Inputs_t4203782917;
// LoadScreen
struct LoadScreen_t3376497162;
// Menu_Manager
struct Menu_Manager_t102876996;
// Plane[]
struct PlaneU5BU5D_t2278565041;
// PlayerController
struct PlayerController_t2064355688;
// SaveManager_Inputs
struct SaveManager_Inputs_t2402574047;
// SceneLoader
struct SceneLoader_t4130533360;
// StartMenuManagerInputs
struct StartMenuManagerInputs_t1631812305;
// System.Char[]
struct CharU5BU5D_t3528271667;
// System.Collections.Generic.Dictionary`2<System.String,System.String>
struct Dictionary_2_t1632706988;
// System.Collections.Generic.List`1<ArchieAndrews.PrefabBrush.PB_PrefabData>
struct List_1_t1689469493;
// System.Collections.Generic.List`1<System.Int32>
struct List_1_t128053199;
// System.Collections.Generic.List`1<System.String>
struct List_1_t3319525431;
// System.Collections.Generic.List`1<UnityEngine.AudioClip>
struct List_1_t857997111;
// System.Collections.Generic.List`1<UnityEngine.GameObject>
struct List_1_t2585711361;
// System.Collections.Generic.List`1<UnityEngine.ParticleCollisionEvent>
struct List_1_t1232140387;
// System.Int32[]
struct Int32U5BU5D_t385246372;
// System.Single[]
struct SingleU5BU5D_t1444911251;
// System.String
struct String_t;
// System.Void
struct Void_t1185182177;
// TMPro.TextMeshProUGUI
struct TextMeshProUGUI_t529313277;
// TitleSaveManagerInputs
struct TitleSaveManagerInputs_t2244120510;
// Title_Animator
struct Title_Animator_t1706872800;
// Title_Menu_Manager
struct Title_Menu_Manager_t3788367697;
// UnityEngine.AI.NavMeshAgent
struct NavMeshAgent_t1276799816;
// UnityEngine.Animation
struct Animation_t3648466861;
// UnityEngine.Animator
struct Animator_t434523843;
// UnityEngine.AsyncOperation
struct AsyncOperation_t1445031843;
// UnityEngine.Audio.AudioMixerGroup
struct AudioMixerGroup_t2743564464;
// UnityEngine.AudioClip
struct AudioClip_t3680889665;
// UnityEngine.AudioClip[]
struct AudioClipU5BU5D_t143221404;
// UnityEngine.AudioSource
struct AudioSource_t3935305588;
// UnityEngine.Camera
struct Camera_t4157153871;
// UnityEngine.CanvasGroup
struct CanvasGroup_t4083511760;
// UnityEngine.CharacterController
struct CharacterController_t1138636865;
// UnityEngine.Collider
struct Collider_t1773347010;
// UnityEngine.Collider[]
struct ColliderU5BU5D_t4234922487;
// UnityEngine.ComputeBuffer
struct ComputeBuffer_t1033194329;
// UnityEngine.ComputeShader
struct ComputeShader_t317220254;
// UnityEngine.GameObject
struct GameObject_t1113636619;
// UnityEngine.Light
struct Light_t3756812086;
// UnityEngine.Material
struct Material_t340375123;
// UnityEngine.ParticleSystem
struct ParticleSystem_t1800779281;
// UnityEngine.ParticleSystem/Particle[]
struct ParticleU5BU5D_t3069227754;
// UnityEngine.RenderTexture
struct RenderTexture_t2108887433;
// UnityEngine.Renderer
struct Renderer_t2627027031;
// UnityEngine.Rendering.CommandBuffer
struct CommandBuffer_t2206337031;
// UnityEngine.SkinnedMeshRenderer
struct SkinnedMeshRenderer_t245602842;
// UnityEngine.Texture
struct Texture_t3661962703;
// UnityEngine.Texture2D
struct Texture2D_t3840446185;
// UnityEngine.Transform
struct Transform_t3600365921;
// UnityEngine.UI.Image
struct Image_t2670269651;
// UnityEngine.UI.RawImage
struct RawImage_t3182918964;
// UnityEngine.UI.Text
struct Text_t1901882714;
// UnityEngine.WaitForSecondsRealtime
struct WaitForSecondsRealtime_t189548121;
// UnityEngine.WindZone
struct WindZone_t1835817526;




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
#ifndef PB_PREFABDATA_T217394751_H
#define PB_PREFABDATA_T217394751_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// ArchieAndrews.PrefabBrush.PB_PrefabData
struct  PB_PrefabData_t217394751  : public RuntimeObject
{
public:
	// UnityEngine.GameObject ArchieAndrews.PrefabBrush.PB_PrefabData::prefab
	GameObject_t1113636619 * ___prefab_0;
	// System.Boolean ArchieAndrews.PrefabBrush.PB_PrefabData::selected
	bool ___selected_1;

public:
	inline static int32_t get_offset_of_prefab_0() { return static_cast<int32_t>(offsetof(PB_PrefabData_t217394751, ___prefab_0)); }
	inline GameObject_t1113636619 * get_prefab_0() const { return ___prefab_0; }
	inline GameObject_t1113636619 ** get_address_of_prefab_0() { return &___prefab_0; }
	inline void set_prefab_0(GameObject_t1113636619 * value)
	{
		___prefab_0 = value;
		Il2CppCodeGenWriteBarrier((&___prefab_0), value);
	}

	inline static int32_t get_offset_of_selected_1() { return static_cast<int32_t>(offsetof(PB_PrefabData_t217394751, ___selected_1)); }
	inline bool get_selected_1() const { return ___selected_1; }
	inline bool* get_address_of_selected_1() { return &___selected_1; }
	inline void set_selected_1(bool value)
	{
		___selected_1 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // PB_PREFABDATA_T217394751_H
#ifndef LOOPINGAUDIOSOURCE_T2892973928_H
#define LOOPINGAUDIOSOURCE_T2892973928_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// DigitalRuby.RainMaker.LoopingAudioSource
struct  LoopingAudioSource_t2892973928  : public RuntimeObject
{
public:
	// UnityEngine.AudioSource DigitalRuby.RainMaker.LoopingAudioSource::<AudioSource>k__BackingField
	AudioSource_t3935305588 * ___U3CAudioSourceU3Ek__BackingField_0;
	// System.Single DigitalRuby.RainMaker.LoopingAudioSource::<TargetVolume>k__BackingField
	float ___U3CTargetVolumeU3Ek__BackingField_1;

public:
	inline static int32_t get_offset_of_U3CAudioSourceU3Ek__BackingField_0() { return static_cast<int32_t>(offsetof(LoopingAudioSource_t2892973928, ___U3CAudioSourceU3Ek__BackingField_0)); }
	inline AudioSource_t3935305588 * get_U3CAudioSourceU3Ek__BackingField_0() const { return ___U3CAudioSourceU3Ek__BackingField_0; }
	inline AudioSource_t3935305588 ** get_address_of_U3CAudioSourceU3Ek__BackingField_0() { return &___U3CAudioSourceU3Ek__BackingField_0; }
	inline void set_U3CAudioSourceU3Ek__BackingField_0(AudioSource_t3935305588 * value)
	{
		___U3CAudioSourceU3Ek__BackingField_0 = value;
		Il2CppCodeGenWriteBarrier((&___U3CAudioSourceU3Ek__BackingField_0), value);
	}

	inline static int32_t get_offset_of_U3CTargetVolumeU3Ek__BackingField_1() { return static_cast<int32_t>(offsetof(LoopingAudioSource_t2892973928, ___U3CTargetVolumeU3Ek__BackingField_1)); }
	inline float get_U3CTargetVolumeU3Ek__BackingField_1() const { return ___U3CTargetVolumeU3Ek__BackingField_1; }
	inline float* get_address_of_U3CTargetVolumeU3Ek__BackingField_1() { return &___U3CTargetVolumeU3Ek__BackingField_1; }
	inline void set_U3CTargetVolumeU3Ek__BackingField_1(float value)
	{
		___U3CTargetVolumeU3Ek__BackingField_1 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // LOOPINGAUDIOSOURCE_T2892973928_H
#ifndef U3CALERTTIMERU3EC__ITERATOR1_T4019344796_H
#define U3CALERTTIMERU3EC__ITERATOR1_T4019344796_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// EnemyController/<AlertTimer>c__Iterator1
struct  U3CAlertTimerU3Ec__Iterator1_t4019344796  : public RuntimeObject
{
public:
	// System.Single EnemyController/<AlertTimer>c__Iterator1::duration
	float ___duration_0;
	// UnityEngine.WaitForSecondsRealtime EnemyController/<AlertTimer>c__Iterator1::<wait>__0
	WaitForSecondsRealtime_t189548121 * ___U3CwaitU3E__0_1;
	// EnemyController EnemyController/<AlertTimer>c__Iterator1::$this
	EnemyController_t2191660454 * ___U24this_2;
	// System.Object EnemyController/<AlertTimer>c__Iterator1::$current
	RuntimeObject * ___U24current_3;
	// System.Boolean EnemyController/<AlertTimer>c__Iterator1::$disposing
	bool ___U24disposing_4;
	// System.Int32 EnemyController/<AlertTimer>c__Iterator1::$PC
	int32_t ___U24PC_5;

public:
	inline static int32_t get_offset_of_duration_0() { return static_cast<int32_t>(offsetof(U3CAlertTimerU3Ec__Iterator1_t4019344796, ___duration_0)); }
	inline float get_duration_0() const { return ___duration_0; }
	inline float* get_address_of_duration_0() { return &___duration_0; }
	inline void set_duration_0(float value)
	{
		___duration_0 = value;
	}

	inline static int32_t get_offset_of_U3CwaitU3E__0_1() { return static_cast<int32_t>(offsetof(U3CAlertTimerU3Ec__Iterator1_t4019344796, ___U3CwaitU3E__0_1)); }
	inline WaitForSecondsRealtime_t189548121 * get_U3CwaitU3E__0_1() const { return ___U3CwaitU3E__0_1; }
	inline WaitForSecondsRealtime_t189548121 ** get_address_of_U3CwaitU3E__0_1() { return &___U3CwaitU3E__0_1; }
	inline void set_U3CwaitU3E__0_1(WaitForSecondsRealtime_t189548121 * value)
	{
		___U3CwaitU3E__0_1 = value;
		Il2CppCodeGenWriteBarrier((&___U3CwaitU3E__0_1), value);
	}

	inline static int32_t get_offset_of_U24this_2() { return static_cast<int32_t>(offsetof(U3CAlertTimerU3Ec__Iterator1_t4019344796, ___U24this_2)); }
	inline EnemyController_t2191660454 * get_U24this_2() const { return ___U24this_2; }
	inline EnemyController_t2191660454 ** get_address_of_U24this_2() { return &___U24this_2; }
	inline void set_U24this_2(EnemyController_t2191660454 * value)
	{
		___U24this_2 = value;
		Il2CppCodeGenWriteBarrier((&___U24this_2), value);
	}

	inline static int32_t get_offset_of_U24current_3() { return static_cast<int32_t>(offsetof(U3CAlertTimerU3Ec__Iterator1_t4019344796, ___U24current_3)); }
	inline RuntimeObject * get_U24current_3() const { return ___U24current_3; }
	inline RuntimeObject ** get_address_of_U24current_3() { return &___U24current_3; }
	inline void set_U24current_3(RuntimeObject * value)
	{
		___U24current_3 = value;
		Il2CppCodeGenWriteBarrier((&___U24current_3), value);
	}

	inline static int32_t get_offset_of_U24disposing_4() { return static_cast<int32_t>(offsetof(U3CAlertTimerU3Ec__Iterator1_t4019344796, ___U24disposing_4)); }
	inline bool get_U24disposing_4() const { return ___U24disposing_4; }
	inline bool* get_address_of_U24disposing_4() { return &___U24disposing_4; }
	inline void set_U24disposing_4(bool value)
	{
		___U24disposing_4 = value;
	}

	inline static int32_t get_offset_of_U24PC_5() { return static_cast<int32_t>(offsetof(U3CAlertTimerU3Ec__Iterator1_t4019344796, ___U24PC_5)); }
	inline int32_t get_U24PC_5() const { return ___U24PC_5; }
	inline int32_t* get_address_of_U24PC_5() { return &___U24PC_5; }
	inline void set_U24PC_5(int32_t value)
	{
		___U24PC_5 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // U3CALERTTIMERU3EC__ITERATOR1_T4019344796_H
#ifndef U3CFOVROUTINEU3EC__ITERATOR0_T330645109_H
#define U3CFOVROUTINEU3EC__ITERATOR0_T330645109_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// EnemyController/<FOVRoutine>c__Iterator0
struct  U3CFOVRoutineU3Ec__Iterator0_t330645109  : public RuntimeObject
{
public:
	// EnemyController EnemyController/<FOVRoutine>c__Iterator0::$this
	EnemyController_t2191660454 * ___U24this_0;
	// System.Object EnemyController/<FOVRoutine>c__Iterator0::$current
	RuntimeObject * ___U24current_1;
	// System.Boolean EnemyController/<FOVRoutine>c__Iterator0::$disposing
	bool ___U24disposing_2;
	// System.Int32 EnemyController/<FOVRoutine>c__Iterator0::$PC
	int32_t ___U24PC_3;

public:
	inline static int32_t get_offset_of_U24this_0() { return static_cast<int32_t>(offsetof(U3CFOVRoutineU3Ec__Iterator0_t330645109, ___U24this_0)); }
	inline EnemyController_t2191660454 * get_U24this_0() const { return ___U24this_0; }
	inline EnemyController_t2191660454 ** get_address_of_U24this_0() { return &___U24this_0; }
	inline void set_U24this_0(EnemyController_t2191660454 * value)
	{
		___U24this_0 = value;
		Il2CppCodeGenWriteBarrier((&___U24this_0), value);
	}

	inline static int32_t get_offset_of_U24current_1() { return static_cast<int32_t>(offsetof(U3CFOVRoutineU3Ec__Iterator0_t330645109, ___U24current_1)); }
	inline RuntimeObject * get_U24current_1() const { return ___U24current_1; }
	inline RuntimeObject ** get_address_of_U24current_1() { return &___U24current_1; }
	inline void set_U24current_1(RuntimeObject * value)
	{
		___U24current_1 = value;
		Il2CppCodeGenWriteBarrier((&___U24current_1), value);
	}

	inline static int32_t get_offset_of_U24disposing_2() { return static_cast<int32_t>(offsetof(U3CFOVRoutineU3Ec__Iterator0_t330645109, ___U24disposing_2)); }
	inline bool get_U24disposing_2() const { return ___U24disposing_2; }
	inline bool* get_address_of_U24disposing_2() { return &___U24disposing_2; }
	inline void set_U24disposing_2(bool value)
	{
		___U24disposing_2 = value;
	}

	inline static int32_t get_offset_of_U24PC_3() { return static_cast<int32_t>(offsetof(U3CFOVRoutineU3Ec__Iterator0_t330645109, ___U24PC_3)); }
	inline int32_t get_U24PC_3() const { return ___U24PC_3; }
	inline int32_t* get_address_of_U24PC_3() { return &___U24PC_3; }
	inline void set_U24PC_3(int32_t value)
	{
		___U24PC_3 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // U3CFOVROUTINEU3EC__ITERATOR0_T330645109_H
#ifndef U3CLOOKWAITU3EC__ITERATOR2_T3652331220_H
#define U3CLOOKWAITU3EC__ITERATOR2_T3652331220_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// EnemyController/<LookWait>c__Iterator2
struct  U3CLookWaitU3Ec__Iterator2_t3652331220  : public RuntimeObject
{
public:
	// System.Single EnemyController/<LookWait>c__Iterator2::duration
	float ___duration_0;
	// UnityEngine.WaitForSecondsRealtime EnemyController/<LookWait>c__Iterator2::<wait>__0
	WaitForSecondsRealtime_t189548121 * ___U3CwaitU3E__0_1;
	// EnemyController EnemyController/<LookWait>c__Iterator2::$this
	EnemyController_t2191660454 * ___U24this_2;
	// System.Object EnemyController/<LookWait>c__Iterator2::$current
	RuntimeObject * ___U24current_3;
	// System.Boolean EnemyController/<LookWait>c__Iterator2::$disposing
	bool ___U24disposing_4;
	// System.Int32 EnemyController/<LookWait>c__Iterator2::$PC
	int32_t ___U24PC_5;

public:
	inline static int32_t get_offset_of_duration_0() { return static_cast<int32_t>(offsetof(U3CLookWaitU3Ec__Iterator2_t3652331220, ___duration_0)); }
	inline float get_duration_0() const { return ___duration_0; }
	inline float* get_address_of_duration_0() { return &___duration_0; }
	inline void set_duration_0(float value)
	{
		___duration_0 = value;
	}

	inline static int32_t get_offset_of_U3CwaitU3E__0_1() { return static_cast<int32_t>(offsetof(U3CLookWaitU3Ec__Iterator2_t3652331220, ___U3CwaitU3E__0_1)); }
	inline WaitForSecondsRealtime_t189548121 * get_U3CwaitU3E__0_1() const { return ___U3CwaitU3E__0_1; }
	inline WaitForSecondsRealtime_t189548121 ** get_address_of_U3CwaitU3E__0_1() { return &___U3CwaitU3E__0_1; }
	inline void set_U3CwaitU3E__0_1(WaitForSecondsRealtime_t189548121 * value)
	{
		___U3CwaitU3E__0_1 = value;
		Il2CppCodeGenWriteBarrier((&___U3CwaitU3E__0_1), value);
	}

	inline static int32_t get_offset_of_U24this_2() { return static_cast<int32_t>(offsetof(U3CLookWaitU3Ec__Iterator2_t3652331220, ___U24this_2)); }
	inline EnemyController_t2191660454 * get_U24this_2() const { return ___U24this_2; }
	inline EnemyController_t2191660454 ** get_address_of_U24this_2() { return &___U24this_2; }
	inline void set_U24this_2(EnemyController_t2191660454 * value)
	{
		___U24this_2 = value;
		Il2CppCodeGenWriteBarrier((&___U24this_2), value);
	}

	inline static int32_t get_offset_of_U24current_3() { return static_cast<int32_t>(offsetof(U3CLookWaitU3Ec__Iterator2_t3652331220, ___U24current_3)); }
	inline RuntimeObject * get_U24current_3() const { return ___U24current_3; }
	inline RuntimeObject ** get_address_of_U24current_3() { return &___U24current_3; }
	inline void set_U24current_3(RuntimeObject * value)
	{
		___U24current_3 = value;
		Il2CppCodeGenWriteBarrier((&___U24current_3), value);
	}

	inline static int32_t get_offset_of_U24disposing_4() { return static_cast<int32_t>(offsetof(U3CLookWaitU3Ec__Iterator2_t3652331220, ___U24disposing_4)); }
	inline bool get_U24disposing_4() const { return ___U24disposing_4; }
	inline bool* get_address_of_U24disposing_4() { return &___U24disposing_4; }
	inline void set_U24disposing_4(bool value)
	{
		___U24disposing_4 = value;
	}

	inline static int32_t get_offset_of_U24PC_5() { return static_cast<int32_t>(offsetof(U3CLookWaitU3Ec__Iterator2_t3652331220, ___U24PC_5)); }
	inline int32_t get_U24PC_5() const { return ___U24PC_5; }
	inline int32_t* get_address_of_U24PC_5() { return &___U24PC_5; }
	inline void set_U24PC_5(int32_t value)
	{
		___U24PC_5 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // U3CLOOKWAITU3EC__ITERATOR2_T3652331220_H
#ifndef FRUSTUM_T2969569190_H
#define FRUSTUM_T2969569190_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// Frustum
struct  Frustum_t2969569190  : public RuntimeObject
{
public:
	// Plane[] Frustum::planes
	PlaneU5BU5D_t2278565041* ___planes_0;

public:
	inline static int32_t get_offset_of_planes_0() { return static_cast<int32_t>(offsetof(Frustum_t2969569190, ___planes_0)); }
	inline PlaneU5BU5D_t2278565041* get_planes_0() const { return ___planes_0; }
	inline PlaneU5BU5D_t2278565041** get_address_of_planes_0() { return &___planes_0; }
	inline void set_planes_0(PlaneU5BU5D_t2278565041* value)
	{
		___planes_0 = value;
		Il2CppCodeGenWriteBarrier((&___planes_0), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // FRUSTUM_T2969569190_H
#ifndef INVENTORYMANAGER_T1225487224_H
#define INVENTORYMANAGER_T1225487224_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// InventoryManager
struct  InventoryManager_t1225487224  : public RuntimeObject
{
public:

public:
};

struct InventoryManager_t1225487224_StaticFields
{
public:
	// System.Single InventoryManager::playerHealth
	float ___playerHealth_0;
	// System.Int32 InventoryManager::batteryCount
	int32_t ___batteryCount_1;
	// System.Int32 InventoryManager::medCount
	int32_t ___medCount_2;
	// System.Int32 InventoryManager::keyCount
	int32_t ___keyCount_3;
	// System.Int32 InventoryManager::stimCount
	int32_t ___stimCount_4;

public:
	inline static int32_t get_offset_of_playerHealth_0() { return static_cast<int32_t>(offsetof(InventoryManager_t1225487224_StaticFields, ___playerHealth_0)); }
	inline float get_playerHealth_0() const { return ___playerHealth_0; }
	inline float* get_address_of_playerHealth_0() { return &___playerHealth_0; }
	inline void set_playerHealth_0(float value)
	{
		___playerHealth_0 = value;
	}

	inline static int32_t get_offset_of_batteryCount_1() { return static_cast<int32_t>(offsetof(InventoryManager_t1225487224_StaticFields, ___batteryCount_1)); }
	inline int32_t get_batteryCount_1() const { return ___batteryCount_1; }
	inline int32_t* get_address_of_batteryCount_1() { return &___batteryCount_1; }
	inline void set_batteryCount_1(int32_t value)
	{
		___batteryCount_1 = value;
	}

	inline static int32_t get_offset_of_medCount_2() { return static_cast<int32_t>(offsetof(InventoryManager_t1225487224_StaticFields, ___medCount_2)); }
	inline int32_t get_medCount_2() const { return ___medCount_2; }
	inline int32_t* get_address_of_medCount_2() { return &___medCount_2; }
	inline void set_medCount_2(int32_t value)
	{
		___medCount_2 = value;
	}

	inline static int32_t get_offset_of_keyCount_3() { return static_cast<int32_t>(offsetof(InventoryManager_t1225487224_StaticFields, ___keyCount_3)); }
	inline int32_t get_keyCount_3() const { return ___keyCount_3; }
	inline int32_t* get_address_of_keyCount_3() { return &___keyCount_3; }
	inline void set_keyCount_3(int32_t value)
	{
		___keyCount_3 = value;
	}

	inline static int32_t get_offset_of_stimCount_4() { return static_cast<int32_t>(offsetof(InventoryManager_t1225487224_StaticFields, ___stimCount_4)); }
	inline int32_t get_stimCount_4() const { return ___stimCount_4; }
	inline int32_t* get_address_of_stimCount_4() { return &___stimCount_4; }
	inline void set_stimCount_4(int32_t value)
	{
		___stimCount_4 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // INVENTORYMANAGER_T1225487224_H
#ifndef U3CBUTTONDELAYTIMERU3EC__ITERATOR1_T1207591810_H
#define U3CBUTTONDELAYTIMERU3EC__ITERATOR1_T1207591810_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// Inventory_Screen_Manager/<ButtonDelayTimer>c__Iterator1
struct  U3CButtonDelayTimerU3Ec__Iterator1_t1207591810  : public RuntimeObject
{
public:
	// System.Single Inventory_Screen_Manager/<ButtonDelayTimer>c__Iterator1::delay
	float ___delay_0;
	// Inventory_Screen_Manager Inventory_Screen_Manager/<ButtonDelayTimer>c__Iterator1::$this
	Inventory_Screen_Manager_t2612322343 * ___U24this_1;
	// System.Object Inventory_Screen_Manager/<ButtonDelayTimer>c__Iterator1::$current
	RuntimeObject * ___U24current_2;
	// System.Boolean Inventory_Screen_Manager/<ButtonDelayTimer>c__Iterator1::$disposing
	bool ___U24disposing_3;
	// System.Int32 Inventory_Screen_Manager/<ButtonDelayTimer>c__Iterator1::$PC
	int32_t ___U24PC_4;

public:
	inline static int32_t get_offset_of_delay_0() { return static_cast<int32_t>(offsetof(U3CButtonDelayTimerU3Ec__Iterator1_t1207591810, ___delay_0)); }
	inline float get_delay_0() const { return ___delay_0; }
	inline float* get_address_of_delay_0() { return &___delay_0; }
	inline void set_delay_0(float value)
	{
		___delay_0 = value;
	}

	inline static int32_t get_offset_of_U24this_1() { return static_cast<int32_t>(offsetof(U3CButtonDelayTimerU3Ec__Iterator1_t1207591810, ___U24this_1)); }
	inline Inventory_Screen_Manager_t2612322343 * get_U24this_1() const { return ___U24this_1; }
	inline Inventory_Screen_Manager_t2612322343 ** get_address_of_U24this_1() { return &___U24this_1; }
	inline void set_U24this_1(Inventory_Screen_Manager_t2612322343 * value)
	{
		___U24this_1 = value;
		Il2CppCodeGenWriteBarrier((&___U24this_1), value);
	}

	inline static int32_t get_offset_of_U24current_2() { return static_cast<int32_t>(offsetof(U3CButtonDelayTimerU3Ec__Iterator1_t1207591810, ___U24current_2)); }
	inline RuntimeObject * get_U24current_2() const { return ___U24current_2; }
	inline RuntimeObject ** get_address_of_U24current_2() { return &___U24current_2; }
	inline void set_U24current_2(RuntimeObject * value)
	{
		___U24current_2 = value;
		Il2CppCodeGenWriteBarrier((&___U24current_2), value);
	}

	inline static int32_t get_offset_of_U24disposing_3() { return static_cast<int32_t>(offsetof(U3CButtonDelayTimerU3Ec__Iterator1_t1207591810, ___U24disposing_3)); }
	inline bool get_U24disposing_3() const { return ___U24disposing_3; }
	inline bool* get_address_of_U24disposing_3() { return &___U24disposing_3; }
	inline void set_U24disposing_3(bool value)
	{
		___U24disposing_3 = value;
	}

	inline static int32_t get_offset_of_U24PC_4() { return static_cast<int32_t>(offsetof(U3CButtonDelayTimerU3Ec__Iterator1_t1207591810, ___U24PC_4)); }
	inline int32_t get_U24PC_4() const { return ___U24PC_4; }
	inline int32_t* get_address_of_U24PC_4() { return &___U24PC_4; }
	inline void set_U24PC_4(int32_t value)
	{
		___U24PC_4 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // U3CBUTTONDELAYTIMERU3EC__ITERATOR1_T1207591810_H
#ifndef U3CCROSSFADEU3EC__ITERATOR0_T2118519353_H
#define U3CCROSSFADEU3EC__ITERATOR0_T2118519353_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// Inventory_Screen_Manager/<CrossFade>c__Iterator0
struct  U3CCrossFadeU3Ec__Iterator0_t2118519353  : public RuntimeObject
{
public:
	// System.Single Inventory_Screen_Manager/<CrossFade>c__Iterator0::duration
	float ___duration_0;
	// System.Single Inventory_Screen_Manager/<CrossFade>c__Iterator0::startValue
	float ___startValue_1;
	// System.Single Inventory_Screen_Manager/<CrossFade>c__Iterator0::endValue
	float ___endValue_2;
	// Inventory_Screen_Manager Inventory_Screen_Manager/<CrossFade>c__Iterator0::$this
	Inventory_Screen_Manager_t2612322343 * ___U24this_3;
	// System.Object Inventory_Screen_Manager/<CrossFade>c__Iterator0::$current
	RuntimeObject * ___U24current_4;
	// System.Boolean Inventory_Screen_Manager/<CrossFade>c__Iterator0::$disposing
	bool ___U24disposing_5;
	// System.Int32 Inventory_Screen_Manager/<CrossFade>c__Iterator0::$PC
	int32_t ___U24PC_6;

public:
	inline static int32_t get_offset_of_duration_0() { return static_cast<int32_t>(offsetof(U3CCrossFadeU3Ec__Iterator0_t2118519353, ___duration_0)); }
	inline float get_duration_0() const { return ___duration_0; }
	inline float* get_address_of_duration_0() { return &___duration_0; }
	inline void set_duration_0(float value)
	{
		___duration_0 = value;
	}

	inline static int32_t get_offset_of_startValue_1() { return static_cast<int32_t>(offsetof(U3CCrossFadeU3Ec__Iterator0_t2118519353, ___startValue_1)); }
	inline float get_startValue_1() const { return ___startValue_1; }
	inline float* get_address_of_startValue_1() { return &___startValue_1; }
	inline void set_startValue_1(float value)
	{
		___startValue_1 = value;
	}

	inline static int32_t get_offset_of_endValue_2() { return static_cast<int32_t>(offsetof(U3CCrossFadeU3Ec__Iterator0_t2118519353, ___endValue_2)); }
	inline float get_endValue_2() const { return ___endValue_2; }
	inline float* get_address_of_endValue_2() { return &___endValue_2; }
	inline void set_endValue_2(float value)
	{
		___endValue_2 = value;
	}

	inline static int32_t get_offset_of_U24this_3() { return static_cast<int32_t>(offsetof(U3CCrossFadeU3Ec__Iterator0_t2118519353, ___U24this_3)); }
	inline Inventory_Screen_Manager_t2612322343 * get_U24this_3() const { return ___U24this_3; }
	inline Inventory_Screen_Manager_t2612322343 ** get_address_of_U24this_3() { return &___U24this_3; }
	inline void set_U24this_3(Inventory_Screen_Manager_t2612322343 * value)
	{
		___U24this_3 = value;
		Il2CppCodeGenWriteBarrier((&___U24this_3), value);
	}

	inline static int32_t get_offset_of_U24current_4() { return static_cast<int32_t>(offsetof(U3CCrossFadeU3Ec__Iterator0_t2118519353, ___U24current_4)); }
	inline RuntimeObject * get_U24current_4() const { return ___U24current_4; }
	inline RuntimeObject ** get_address_of_U24current_4() { return &___U24current_4; }
	inline void set_U24current_4(RuntimeObject * value)
	{
		___U24current_4 = value;
		Il2CppCodeGenWriteBarrier((&___U24current_4), value);
	}

	inline static int32_t get_offset_of_U24disposing_5() { return static_cast<int32_t>(offsetof(U3CCrossFadeU3Ec__Iterator0_t2118519353, ___U24disposing_5)); }
	inline bool get_U24disposing_5() const { return ___U24disposing_5; }
	inline bool* get_address_of_U24disposing_5() { return &___U24disposing_5; }
	inline void set_U24disposing_5(bool value)
	{
		___U24disposing_5 = value;
	}

	inline static int32_t get_offset_of_U24PC_6() { return static_cast<int32_t>(offsetof(U3CCrossFadeU3Ec__Iterator0_t2118519353, ___U24PC_6)); }
	inline int32_t get_U24PC_6() const { return ___U24PC_6; }
	inline int32_t* get_address_of_U24PC_6() { return &___U24PC_6; }
	inline void set_U24PC_6(int32_t value)
	{
		___U24PC_6 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // U3CCROSSFADEU3EC__ITERATOR0_T2118519353_H
#ifndef U3CDIALOGHANDLERU3EC__ITERATOR2_T933476925_H
#define U3CDIALOGHANDLERU3EC__ITERATOR2_T933476925_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// LoadManager_Inputs/<DialogHandler>c__Iterator2
struct  U3CDialogHandlerU3Ec__Iterator2_t933476925  : public RuntimeObject
{
public:
	// System.Single LoadManager_Inputs/<DialogHandler>c__Iterator2::<duration>__0
	float ___U3CdurationU3E__0_0;
	// System.Single LoadManager_Inputs/<DialogHandler>c__Iterator2::<time>__0
	float ___U3CtimeU3E__0_1;
	// LoadManager_Inputs LoadManager_Inputs/<DialogHandler>c__Iterator2::$this
	LoadManager_Inputs_t4203782917 * ___U24this_2;
	// System.Object LoadManager_Inputs/<DialogHandler>c__Iterator2::$current
	RuntimeObject * ___U24current_3;
	// System.Boolean LoadManager_Inputs/<DialogHandler>c__Iterator2::$disposing
	bool ___U24disposing_4;
	// System.Int32 LoadManager_Inputs/<DialogHandler>c__Iterator2::$PC
	int32_t ___U24PC_5;

public:
	inline static int32_t get_offset_of_U3CdurationU3E__0_0() { return static_cast<int32_t>(offsetof(U3CDialogHandlerU3Ec__Iterator2_t933476925, ___U3CdurationU3E__0_0)); }
	inline float get_U3CdurationU3E__0_0() const { return ___U3CdurationU3E__0_0; }
	inline float* get_address_of_U3CdurationU3E__0_0() { return &___U3CdurationU3E__0_0; }
	inline void set_U3CdurationU3E__0_0(float value)
	{
		___U3CdurationU3E__0_0 = value;
	}

	inline static int32_t get_offset_of_U3CtimeU3E__0_1() { return static_cast<int32_t>(offsetof(U3CDialogHandlerU3Ec__Iterator2_t933476925, ___U3CtimeU3E__0_1)); }
	inline float get_U3CtimeU3E__0_1() const { return ___U3CtimeU3E__0_1; }
	inline float* get_address_of_U3CtimeU3E__0_1() { return &___U3CtimeU3E__0_1; }
	inline void set_U3CtimeU3E__0_1(float value)
	{
		___U3CtimeU3E__0_1 = value;
	}

	inline static int32_t get_offset_of_U24this_2() { return static_cast<int32_t>(offsetof(U3CDialogHandlerU3Ec__Iterator2_t933476925, ___U24this_2)); }
	inline LoadManager_Inputs_t4203782917 * get_U24this_2() const { return ___U24this_2; }
	inline LoadManager_Inputs_t4203782917 ** get_address_of_U24this_2() { return &___U24this_2; }
	inline void set_U24this_2(LoadManager_Inputs_t4203782917 * value)
	{
		___U24this_2 = value;
		Il2CppCodeGenWriteBarrier((&___U24this_2), value);
	}

	inline static int32_t get_offset_of_U24current_3() { return static_cast<int32_t>(offsetof(U3CDialogHandlerU3Ec__Iterator2_t933476925, ___U24current_3)); }
	inline RuntimeObject * get_U24current_3() const { return ___U24current_3; }
	inline RuntimeObject ** get_address_of_U24current_3() { return &___U24current_3; }
	inline void set_U24current_3(RuntimeObject * value)
	{
		___U24current_3 = value;
		Il2CppCodeGenWriteBarrier((&___U24current_3), value);
	}

	inline static int32_t get_offset_of_U24disposing_4() { return static_cast<int32_t>(offsetof(U3CDialogHandlerU3Ec__Iterator2_t933476925, ___U24disposing_4)); }
	inline bool get_U24disposing_4() const { return ___U24disposing_4; }
	inline bool* get_address_of_U24disposing_4() { return &___U24disposing_4; }
	inline void set_U24disposing_4(bool value)
	{
		___U24disposing_4 = value;
	}

	inline static int32_t get_offset_of_U24PC_5() { return static_cast<int32_t>(offsetof(U3CDialogHandlerU3Ec__Iterator2_t933476925, ___U24PC_5)); }
	inline int32_t get_U24PC_5() const { return ___U24PC_5; }
	inline int32_t* get_address_of_U24PC_5() { return &___U24PC_5; }
	inline void set_U24PC_5(int32_t value)
	{
		___U24PC_5 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // U3CDIALOGHANDLERU3EC__ITERATOR2_T933476925_H
#ifndef U3CFADELOADINGSCREENU3EC__ITERATOR1_T2399416830_H
#define U3CFADELOADINGSCREENU3EC__ITERATOR1_T2399416830_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// LoadManager_Inputs/<FadeLoadingScreen>c__Iterator1
struct  U3CFadeLoadingScreenU3Ec__Iterator1_t2399416830  : public RuntimeObject
{
public:
	// System.Single LoadManager_Inputs/<FadeLoadingScreen>c__Iterator1::<time>__0
	float ___U3CtimeU3E__0_0;
	// System.Single LoadManager_Inputs/<FadeLoadingScreen>c__Iterator1::duration
	float ___duration_1;
	// System.Single LoadManager_Inputs/<FadeLoadingScreen>c__Iterator1::startValue
	float ___startValue_2;
	// System.Single LoadManager_Inputs/<FadeLoadingScreen>c__Iterator1::targetValue
	float ___targetValue_3;
	// LoadManager_Inputs LoadManager_Inputs/<FadeLoadingScreen>c__Iterator1::$this
	LoadManager_Inputs_t4203782917 * ___U24this_4;
	// System.Object LoadManager_Inputs/<FadeLoadingScreen>c__Iterator1::$current
	RuntimeObject * ___U24current_5;
	// System.Boolean LoadManager_Inputs/<FadeLoadingScreen>c__Iterator1::$disposing
	bool ___U24disposing_6;
	// System.Int32 LoadManager_Inputs/<FadeLoadingScreen>c__Iterator1::$PC
	int32_t ___U24PC_7;

public:
	inline static int32_t get_offset_of_U3CtimeU3E__0_0() { return static_cast<int32_t>(offsetof(U3CFadeLoadingScreenU3Ec__Iterator1_t2399416830, ___U3CtimeU3E__0_0)); }
	inline float get_U3CtimeU3E__0_0() const { return ___U3CtimeU3E__0_0; }
	inline float* get_address_of_U3CtimeU3E__0_0() { return &___U3CtimeU3E__0_0; }
	inline void set_U3CtimeU3E__0_0(float value)
	{
		___U3CtimeU3E__0_0 = value;
	}

	inline static int32_t get_offset_of_duration_1() { return static_cast<int32_t>(offsetof(U3CFadeLoadingScreenU3Ec__Iterator1_t2399416830, ___duration_1)); }
	inline float get_duration_1() const { return ___duration_1; }
	inline float* get_address_of_duration_1() { return &___duration_1; }
	inline void set_duration_1(float value)
	{
		___duration_1 = value;
	}

	inline static int32_t get_offset_of_startValue_2() { return static_cast<int32_t>(offsetof(U3CFadeLoadingScreenU3Ec__Iterator1_t2399416830, ___startValue_2)); }
	inline float get_startValue_2() const { return ___startValue_2; }
	inline float* get_address_of_startValue_2() { return &___startValue_2; }
	inline void set_startValue_2(float value)
	{
		___startValue_2 = value;
	}

	inline static int32_t get_offset_of_targetValue_3() { return static_cast<int32_t>(offsetof(U3CFadeLoadingScreenU3Ec__Iterator1_t2399416830, ___targetValue_3)); }
	inline float get_targetValue_3() const { return ___targetValue_3; }
	inline float* get_address_of_targetValue_3() { return &___targetValue_3; }
	inline void set_targetValue_3(float value)
	{
		___targetValue_3 = value;
	}

	inline static int32_t get_offset_of_U24this_4() { return static_cast<int32_t>(offsetof(U3CFadeLoadingScreenU3Ec__Iterator1_t2399416830, ___U24this_4)); }
	inline LoadManager_Inputs_t4203782917 * get_U24this_4() const { return ___U24this_4; }
	inline LoadManager_Inputs_t4203782917 ** get_address_of_U24this_4() { return &___U24this_4; }
	inline void set_U24this_4(LoadManager_Inputs_t4203782917 * value)
	{
		___U24this_4 = value;
		Il2CppCodeGenWriteBarrier((&___U24this_4), value);
	}

	inline static int32_t get_offset_of_U24current_5() { return static_cast<int32_t>(offsetof(U3CFadeLoadingScreenU3Ec__Iterator1_t2399416830, ___U24current_5)); }
	inline RuntimeObject * get_U24current_5() const { return ___U24current_5; }
	inline RuntimeObject ** get_address_of_U24current_5() { return &___U24current_5; }
	inline void set_U24current_5(RuntimeObject * value)
	{
		___U24current_5 = value;
		Il2CppCodeGenWriteBarrier((&___U24current_5), value);
	}

	inline static int32_t get_offset_of_U24disposing_6() { return static_cast<int32_t>(offsetof(U3CFadeLoadingScreenU3Ec__Iterator1_t2399416830, ___U24disposing_6)); }
	inline bool get_U24disposing_6() const { return ___U24disposing_6; }
	inline bool* get_address_of_U24disposing_6() { return &___U24disposing_6; }
	inline void set_U24disposing_6(bool value)
	{
		___U24disposing_6 = value;
	}

	inline static int32_t get_offset_of_U24PC_7() { return static_cast<int32_t>(offsetof(U3CFadeLoadingScreenU3Ec__Iterator1_t2399416830, ___U24PC_7)); }
	inline int32_t get_U24PC_7() const { return ___U24PC_7; }
	inline int32_t* get_address_of_U24PC_7() { return &___U24PC_7; }
	inline void set_U24PC_7(int32_t value)
	{
		___U24PC_7 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // U3CFADELOADINGSCREENU3EC__ITERATOR1_T2399416830_H
#ifndef U3CSTARTLOADU3EC__ITERATOR0_T390459722_H
#define U3CSTARTLOADU3EC__ITERATOR0_T390459722_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// LoadManager_Inputs/<StartLoad>c__Iterator0
struct  U3CStartLoadU3Ec__Iterator0_t390459722  : public RuntimeObject
{
public:
	// LoadManager_Inputs LoadManager_Inputs/<StartLoad>c__Iterator0::$this
	LoadManager_Inputs_t4203782917 * ___U24this_0;
	// System.Object LoadManager_Inputs/<StartLoad>c__Iterator0::$current
	RuntimeObject * ___U24current_1;
	// System.Boolean LoadManager_Inputs/<StartLoad>c__Iterator0::$disposing
	bool ___U24disposing_2;
	// System.Int32 LoadManager_Inputs/<StartLoad>c__Iterator0::$PC
	int32_t ___U24PC_3;

public:
	inline static int32_t get_offset_of_U24this_0() { return static_cast<int32_t>(offsetof(U3CStartLoadU3Ec__Iterator0_t390459722, ___U24this_0)); }
	inline LoadManager_Inputs_t4203782917 * get_U24this_0() const { return ___U24this_0; }
	inline LoadManager_Inputs_t4203782917 ** get_address_of_U24this_0() { return &___U24this_0; }
	inline void set_U24this_0(LoadManager_Inputs_t4203782917 * value)
	{
		___U24this_0 = value;
		Il2CppCodeGenWriteBarrier((&___U24this_0), value);
	}

	inline static int32_t get_offset_of_U24current_1() { return static_cast<int32_t>(offsetof(U3CStartLoadU3Ec__Iterator0_t390459722, ___U24current_1)); }
	inline RuntimeObject * get_U24current_1() const { return ___U24current_1; }
	inline RuntimeObject ** get_address_of_U24current_1() { return &___U24current_1; }
	inline void set_U24current_1(RuntimeObject * value)
	{
		___U24current_1 = value;
		Il2CppCodeGenWriteBarrier((&___U24current_1), value);
	}

	inline static int32_t get_offset_of_U24disposing_2() { return static_cast<int32_t>(offsetof(U3CStartLoadU3Ec__Iterator0_t390459722, ___U24disposing_2)); }
	inline bool get_U24disposing_2() const { return ___U24disposing_2; }
	inline bool* get_address_of_U24disposing_2() { return &___U24disposing_2; }
	inline void set_U24disposing_2(bool value)
	{
		___U24disposing_2 = value;
	}

	inline static int32_t get_offset_of_U24PC_3() { return static_cast<int32_t>(offsetof(U3CStartLoadU3Ec__Iterator0_t390459722, ___U24PC_3)); }
	inline int32_t get_U24PC_3() const { return ___U24PC_3; }
	inline int32_t* get_address_of_U24PC_3() { return &___U24PC_3; }
	inline void set_U24PC_3(int32_t value)
	{
		___U24PC_3 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // U3CSTARTLOADU3EC__ITERATOR0_T390459722_H
#ifndef U3CFADELOADINGSCREENU3EC__ITERATOR1_T1230497635_H
#define U3CFADELOADINGSCREENU3EC__ITERATOR1_T1230497635_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// LoadScreen/<FadeLoadingScreen>c__Iterator1
struct  U3CFadeLoadingScreenU3Ec__Iterator1_t1230497635  : public RuntimeObject
{
public:
	// System.Single LoadScreen/<FadeLoadingScreen>c__Iterator1::<startValue>__0
	float ___U3CstartValueU3E__0_0;
	// System.Single LoadScreen/<FadeLoadingScreen>c__Iterator1::<time>__0
	float ___U3CtimeU3E__0_1;
	// System.Single LoadScreen/<FadeLoadingScreen>c__Iterator1::duration
	float ___duration_2;
	// System.Single LoadScreen/<FadeLoadingScreen>c__Iterator1::targetValue
	float ___targetValue_3;
	// LoadScreen LoadScreen/<FadeLoadingScreen>c__Iterator1::$this
	LoadScreen_t3376497162 * ___U24this_4;
	// System.Object LoadScreen/<FadeLoadingScreen>c__Iterator1::$current
	RuntimeObject * ___U24current_5;
	// System.Boolean LoadScreen/<FadeLoadingScreen>c__Iterator1::$disposing
	bool ___U24disposing_6;
	// System.Int32 LoadScreen/<FadeLoadingScreen>c__Iterator1::$PC
	int32_t ___U24PC_7;

public:
	inline static int32_t get_offset_of_U3CstartValueU3E__0_0() { return static_cast<int32_t>(offsetof(U3CFadeLoadingScreenU3Ec__Iterator1_t1230497635, ___U3CstartValueU3E__0_0)); }
	inline float get_U3CstartValueU3E__0_0() const { return ___U3CstartValueU3E__0_0; }
	inline float* get_address_of_U3CstartValueU3E__0_0() { return &___U3CstartValueU3E__0_0; }
	inline void set_U3CstartValueU3E__0_0(float value)
	{
		___U3CstartValueU3E__0_0 = value;
	}

	inline static int32_t get_offset_of_U3CtimeU3E__0_1() { return static_cast<int32_t>(offsetof(U3CFadeLoadingScreenU3Ec__Iterator1_t1230497635, ___U3CtimeU3E__0_1)); }
	inline float get_U3CtimeU3E__0_1() const { return ___U3CtimeU3E__0_1; }
	inline float* get_address_of_U3CtimeU3E__0_1() { return &___U3CtimeU3E__0_1; }
	inline void set_U3CtimeU3E__0_1(float value)
	{
		___U3CtimeU3E__0_1 = value;
	}

	inline static int32_t get_offset_of_duration_2() { return static_cast<int32_t>(offsetof(U3CFadeLoadingScreenU3Ec__Iterator1_t1230497635, ___duration_2)); }
	inline float get_duration_2() const { return ___duration_2; }
	inline float* get_address_of_duration_2() { return &___duration_2; }
	inline void set_duration_2(float value)
	{
		___duration_2 = value;
	}

	inline static int32_t get_offset_of_targetValue_3() { return static_cast<int32_t>(offsetof(U3CFadeLoadingScreenU3Ec__Iterator1_t1230497635, ___targetValue_3)); }
	inline float get_targetValue_3() const { return ___targetValue_3; }
	inline float* get_address_of_targetValue_3() { return &___targetValue_3; }
	inline void set_targetValue_3(float value)
	{
		___targetValue_3 = value;
	}

	inline static int32_t get_offset_of_U24this_4() { return static_cast<int32_t>(offsetof(U3CFadeLoadingScreenU3Ec__Iterator1_t1230497635, ___U24this_4)); }
	inline LoadScreen_t3376497162 * get_U24this_4() const { return ___U24this_4; }
	inline LoadScreen_t3376497162 ** get_address_of_U24this_4() { return &___U24this_4; }
	inline void set_U24this_4(LoadScreen_t3376497162 * value)
	{
		___U24this_4 = value;
		Il2CppCodeGenWriteBarrier((&___U24this_4), value);
	}

	inline static int32_t get_offset_of_U24current_5() { return static_cast<int32_t>(offsetof(U3CFadeLoadingScreenU3Ec__Iterator1_t1230497635, ___U24current_5)); }
	inline RuntimeObject * get_U24current_5() const { return ___U24current_5; }
	inline RuntimeObject ** get_address_of_U24current_5() { return &___U24current_5; }
	inline void set_U24current_5(RuntimeObject * value)
	{
		___U24current_5 = value;
		Il2CppCodeGenWriteBarrier((&___U24current_5), value);
	}

	inline static int32_t get_offset_of_U24disposing_6() { return static_cast<int32_t>(offsetof(U3CFadeLoadingScreenU3Ec__Iterator1_t1230497635, ___U24disposing_6)); }
	inline bool get_U24disposing_6() const { return ___U24disposing_6; }
	inline bool* get_address_of_U24disposing_6() { return &___U24disposing_6; }
	inline void set_U24disposing_6(bool value)
	{
		___U24disposing_6 = value;
	}

	inline static int32_t get_offset_of_U24PC_7() { return static_cast<int32_t>(offsetof(U3CFadeLoadingScreenU3Ec__Iterator1_t1230497635, ___U24PC_7)); }
	inline int32_t get_U24PC_7() const { return ___U24PC_7; }
	inline int32_t* get_address_of_U24PC_7() { return &___U24PC_7; }
	inline void set_U24PC_7(int32_t value)
	{
		___U24PC_7 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // U3CFADELOADINGSCREENU3EC__ITERATOR1_T1230497635_H
#ifndef U3CSTARTLOADU3EC__ITERATOR0_T2551077925_H
#define U3CSTARTLOADU3EC__ITERATOR0_T2551077925_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// LoadScreen/<StartLoad>c__Iterator0
struct  U3CStartLoadU3Ec__Iterator0_t2551077925  : public RuntimeObject
{
public:
	// LoadScreen LoadScreen/<StartLoad>c__Iterator0::$this
	LoadScreen_t3376497162 * ___U24this_0;
	// System.Object LoadScreen/<StartLoad>c__Iterator0::$current
	RuntimeObject * ___U24current_1;
	// System.Boolean LoadScreen/<StartLoad>c__Iterator0::$disposing
	bool ___U24disposing_2;
	// System.Int32 LoadScreen/<StartLoad>c__Iterator0::$PC
	int32_t ___U24PC_3;

public:
	inline static int32_t get_offset_of_U24this_0() { return static_cast<int32_t>(offsetof(U3CStartLoadU3Ec__Iterator0_t2551077925, ___U24this_0)); }
	inline LoadScreen_t3376497162 * get_U24this_0() const { return ___U24this_0; }
	inline LoadScreen_t3376497162 ** get_address_of_U24this_0() { return &___U24this_0; }
	inline void set_U24this_0(LoadScreen_t3376497162 * value)
	{
		___U24this_0 = value;
		Il2CppCodeGenWriteBarrier((&___U24this_0), value);
	}

	inline static int32_t get_offset_of_U24current_1() { return static_cast<int32_t>(offsetof(U3CStartLoadU3Ec__Iterator0_t2551077925, ___U24current_1)); }
	inline RuntimeObject * get_U24current_1() const { return ___U24current_1; }
	inline RuntimeObject ** get_address_of_U24current_1() { return &___U24current_1; }
	inline void set_U24current_1(RuntimeObject * value)
	{
		___U24current_1 = value;
		Il2CppCodeGenWriteBarrier((&___U24current_1), value);
	}

	inline static int32_t get_offset_of_U24disposing_2() { return static_cast<int32_t>(offsetof(U3CStartLoadU3Ec__Iterator0_t2551077925, ___U24disposing_2)); }
	inline bool get_U24disposing_2() const { return ___U24disposing_2; }
	inline bool* get_address_of_U24disposing_2() { return &___U24disposing_2; }
	inline void set_U24disposing_2(bool value)
	{
		___U24disposing_2 = value;
	}

	inline static int32_t get_offset_of_U24PC_3() { return static_cast<int32_t>(offsetof(U3CStartLoadU3Ec__Iterator0_t2551077925, ___U24PC_3)); }
	inline int32_t get_U24PC_3() const { return ___U24PC_3; }
	inline int32_t* get_address_of_U24PC_3() { return &___U24PC_3; }
	inline void set_U24PC_3(int32_t value)
	{
		___U24PC_3 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // U3CSTARTLOADU3EC__ITERATOR0_T2551077925_H
#ifndef U3CFADESCREENU3EC__ITERATOR0_T2844335438_H
#define U3CFADESCREENU3EC__ITERATOR0_T2844335438_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// Menu_Manager/<FadeScreen>c__Iterator0
struct  U3CFadeScreenU3Ec__Iterator0_t2844335438  : public RuntimeObject
{
public:
	// System.Single Menu_Manager/<FadeScreen>c__Iterator0::<startValue>__0
	float ___U3CstartValueU3E__0_0;
	// System.Single Menu_Manager/<FadeScreen>c__Iterator0::<fadeTime>__0
	float ___U3CfadeTimeU3E__0_1;
	// System.Single Menu_Manager/<FadeScreen>c__Iterator0::duration
	float ___duration_2;
	// System.Single Menu_Manager/<FadeScreen>c__Iterator0::targetValue
	float ___targetValue_3;
	// Menu_Manager Menu_Manager/<FadeScreen>c__Iterator0::$this
	Menu_Manager_t102876996 * ___U24this_4;
	// System.Object Menu_Manager/<FadeScreen>c__Iterator0::$current
	RuntimeObject * ___U24current_5;
	// System.Boolean Menu_Manager/<FadeScreen>c__Iterator0::$disposing
	bool ___U24disposing_6;
	// System.Int32 Menu_Manager/<FadeScreen>c__Iterator0::$PC
	int32_t ___U24PC_7;

public:
	inline static int32_t get_offset_of_U3CstartValueU3E__0_0() { return static_cast<int32_t>(offsetof(U3CFadeScreenU3Ec__Iterator0_t2844335438, ___U3CstartValueU3E__0_0)); }
	inline float get_U3CstartValueU3E__0_0() const { return ___U3CstartValueU3E__0_0; }
	inline float* get_address_of_U3CstartValueU3E__0_0() { return &___U3CstartValueU3E__0_0; }
	inline void set_U3CstartValueU3E__0_0(float value)
	{
		___U3CstartValueU3E__0_0 = value;
	}

	inline static int32_t get_offset_of_U3CfadeTimeU3E__0_1() { return static_cast<int32_t>(offsetof(U3CFadeScreenU3Ec__Iterator0_t2844335438, ___U3CfadeTimeU3E__0_1)); }
	inline float get_U3CfadeTimeU3E__0_1() const { return ___U3CfadeTimeU3E__0_1; }
	inline float* get_address_of_U3CfadeTimeU3E__0_1() { return &___U3CfadeTimeU3E__0_1; }
	inline void set_U3CfadeTimeU3E__0_1(float value)
	{
		___U3CfadeTimeU3E__0_1 = value;
	}

	inline static int32_t get_offset_of_duration_2() { return static_cast<int32_t>(offsetof(U3CFadeScreenU3Ec__Iterator0_t2844335438, ___duration_2)); }
	inline float get_duration_2() const { return ___duration_2; }
	inline float* get_address_of_duration_2() { return &___duration_2; }
	inline void set_duration_2(float value)
	{
		___duration_2 = value;
	}

	inline static int32_t get_offset_of_targetValue_3() { return static_cast<int32_t>(offsetof(U3CFadeScreenU3Ec__Iterator0_t2844335438, ___targetValue_3)); }
	inline float get_targetValue_3() const { return ___targetValue_3; }
	inline float* get_address_of_targetValue_3() { return &___targetValue_3; }
	inline void set_targetValue_3(float value)
	{
		___targetValue_3 = value;
	}

	inline static int32_t get_offset_of_U24this_4() { return static_cast<int32_t>(offsetof(U3CFadeScreenU3Ec__Iterator0_t2844335438, ___U24this_4)); }
	inline Menu_Manager_t102876996 * get_U24this_4() const { return ___U24this_4; }
	inline Menu_Manager_t102876996 ** get_address_of_U24this_4() { return &___U24this_4; }
	inline void set_U24this_4(Menu_Manager_t102876996 * value)
	{
		___U24this_4 = value;
		Il2CppCodeGenWriteBarrier((&___U24this_4), value);
	}

	inline static int32_t get_offset_of_U24current_5() { return static_cast<int32_t>(offsetof(U3CFadeScreenU3Ec__Iterator0_t2844335438, ___U24current_5)); }
	inline RuntimeObject * get_U24current_5() const { return ___U24current_5; }
	inline RuntimeObject ** get_address_of_U24current_5() { return &___U24current_5; }
	inline void set_U24current_5(RuntimeObject * value)
	{
		___U24current_5 = value;
		Il2CppCodeGenWriteBarrier((&___U24current_5), value);
	}

	inline static int32_t get_offset_of_U24disposing_6() { return static_cast<int32_t>(offsetof(U3CFadeScreenU3Ec__Iterator0_t2844335438, ___U24disposing_6)); }
	inline bool get_U24disposing_6() const { return ___U24disposing_6; }
	inline bool* get_address_of_U24disposing_6() { return &___U24disposing_6; }
	inline void set_U24disposing_6(bool value)
	{
		___U24disposing_6 = value;
	}

	inline static int32_t get_offset_of_U24PC_7() { return static_cast<int32_t>(offsetof(U3CFadeScreenU3Ec__Iterator0_t2844335438, ___U24PC_7)); }
	inline int32_t get_U24PC_7() const { return ___U24PC_7; }
	inline int32_t* get_address_of_U24PC_7() { return &___U24PC_7; }
	inline void set_U24PC_7(int32_t value)
	{
		___U24PC_7 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // U3CFADESCREENU3EC__ITERATOR0_T2844335438_H
#ifndef U3CBUTTONDELAYTIMERU3EC__ITERATORA_T1292377190_H
#define U3CBUTTONDELAYTIMERU3EC__ITERATORA_T1292377190_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// PlayerController/<ButtonDelayTimer>c__IteratorA
struct  U3CButtonDelayTimerU3Ec__IteratorA_t1292377190  : public RuntimeObject
{
public:
	// System.Single PlayerController/<ButtonDelayTimer>c__IteratorA::delay
	float ___delay_0;
	// System.Object PlayerController/<ButtonDelayTimer>c__IteratorA::$current
	RuntimeObject * ___U24current_1;
	// System.Boolean PlayerController/<ButtonDelayTimer>c__IteratorA::$disposing
	bool ___U24disposing_2;
	// System.Int32 PlayerController/<ButtonDelayTimer>c__IteratorA::$PC
	int32_t ___U24PC_3;

public:
	inline static int32_t get_offset_of_delay_0() { return static_cast<int32_t>(offsetof(U3CButtonDelayTimerU3Ec__IteratorA_t1292377190, ___delay_0)); }
	inline float get_delay_0() const { return ___delay_0; }
	inline float* get_address_of_delay_0() { return &___delay_0; }
	inline void set_delay_0(float value)
	{
		___delay_0 = value;
	}

	inline static int32_t get_offset_of_U24current_1() { return static_cast<int32_t>(offsetof(U3CButtonDelayTimerU3Ec__IteratorA_t1292377190, ___U24current_1)); }
	inline RuntimeObject * get_U24current_1() const { return ___U24current_1; }
	inline RuntimeObject ** get_address_of_U24current_1() { return &___U24current_1; }
	inline void set_U24current_1(RuntimeObject * value)
	{
		___U24current_1 = value;
		Il2CppCodeGenWriteBarrier((&___U24current_1), value);
	}

	inline static int32_t get_offset_of_U24disposing_2() { return static_cast<int32_t>(offsetof(U3CButtonDelayTimerU3Ec__IteratorA_t1292377190, ___U24disposing_2)); }
	inline bool get_U24disposing_2() const { return ___U24disposing_2; }
	inline bool* get_address_of_U24disposing_2() { return &___U24disposing_2; }
	inline void set_U24disposing_2(bool value)
	{
		___U24disposing_2 = value;
	}

	inline static int32_t get_offset_of_U24PC_3() { return static_cast<int32_t>(offsetof(U3CButtonDelayTimerU3Ec__IteratorA_t1292377190, ___U24PC_3)); }
	inline int32_t get_U24PC_3() const { return ___U24PC_3; }
	inline int32_t* get_address_of_U24PC_3() { return &___U24PC_3; }
	inline void set_U24PC_3(int32_t value)
	{
		___U24PC_3 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // U3CBUTTONDELAYTIMERU3EC__ITERATORA_T1292377190_H
#ifndef U3CCOUNTDOWNSTIMULANTU3EC__ITERATOR7_T2110329190_H
#define U3CCOUNTDOWNSTIMULANTU3EC__ITERATOR7_T2110329190_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// PlayerController/<CountdownStimulant>c__Iterator7
struct  U3CCountdownStimulantU3Ec__Iterator7_t2110329190  : public RuntimeObject
{
public:
	// System.Single PlayerController/<CountdownStimulant>c__Iterator7::<time>__0
	float ___U3CtimeU3E__0_0;
	// System.Single PlayerController/<CountdownStimulant>c__Iterator7::duration
	float ___duration_1;
	// System.Single PlayerController/<CountdownStimulant>c__Iterator7::StartVal
	float ___StartVal_2;
	// System.Single PlayerController/<CountdownStimulant>c__Iterator7::endVal
	float ___endVal_3;
	// PlayerController PlayerController/<CountdownStimulant>c__Iterator7::$this
	PlayerController_t2064355688 * ___U24this_4;
	// System.Object PlayerController/<CountdownStimulant>c__Iterator7::$current
	RuntimeObject * ___U24current_5;
	// System.Boolean PlayerController/<CountdownStimulant>c__Iterator7::$disposing
	bool ___U24disposing_6;
	// System.Int32 PlayerController/<CountdownStimulant>c__Iterator7::$PC
	int32_t ___U24PC_7;

public:
	inline static int32_t get_offset_of_U3CtimeU3E__0_0() { return static_cast<int32_t>(offsetof(U3CCountdownStimulantU3Ec__Iterator7_t2110329190, ___U3CtimeU3E__0_0)); }
	inline float get_U3CtimeU3E__0_0() const { return ___U3CtimeU3E__0_0; }
	inline float* get_address_of_U3CtimeU3E__0_0() { return &___U3CtimeU3E__0_0; }
	inline void set_U3CtimeU3E__0_0(float value)
	{
		___U3CtimeU3E__0_0 = value;
	}

	inline static int32_t get_offset_of_duration_1() { return static_cast<int32_t>(offsetof(U3CCountdownStimulantU3Ec__Iterator7_t2110329190, ___duration_1)); }
	inline float get_duration_1() const { return ___duration_1; }
	inline float* get_address_of_duration_1() { return &___duration_1; }
	inline void set_duration_1(float value)
	{
		___duration_1 = value;
	}

	inline static int32_t get_offset_of_StartVal_2() { return static_cast<int32_t>(offsetof(U3CCountdownStimulantU3Ec__Iterator7_t2110329190, ___StartVal_2)); }
	inline float get_StartVal_2() const { return ___StartVal_2; }
	inline float* get_address_of_StartVal_2() { return &___StartVal_2; }
	inline void set_StartVal_2(float value)
	{
		___StartVal_2 = value;
	}

	inline static int32_t get_offset_of_endVal_3() { return static_cast<int32_t>(offsetof(U3CCountdownStimulantU3Ec__Iterator7_t2110329190, ___endVal_3)); }
	inline float get_endVal_3() const { return ___endVal_3; }
	inline float* get_address_of_endVal_3() { return &___endVal_3; }
	inline void set_endVal_3(float value)
	{
		___endVal_3 = value;
	}

	inline static int32_t get_offset_of_U24this_4() { return static_cast<int32_t>(offsetof(U3CCountdownStimulantU3Ec__Iterator7_t2110329190, ___U24this_4)); }
	inline PlayerController_t2064355688 * get_U24this_4() const { return ___U24this_4; }
	inline PlayerController_t2064355688 ** get_address_of_U24this_4() { return &___U24this_4; }
	inline void set_U24this_4(PlayerController_t2064355688 * value)
	{
		___U24this_4 = value;
		Il2CppCodeGenWriteBarrier((&___U24this_4), value);
	}

	inline static int32_t get_offset_of_U24current_5() { return static_cast<int32_t>(offsetof(U3CCountdownStimulantU3Ec__Iterator7_t2110329190, ___U24current_5)); }
	inline RuntimeObject * get_U24current_5() const { return ___U24current_5; }
	inline RuntimeObject ** get_address_of_U24current_5() { return &___U24current_5; }
	inline void set_U24current_5(RuntimeObject * value)
	{
		___U24current_5 = value;
		Il2CppCodeGenWriteBarrier((&___U24current_5), value);
	}

	inline static int32_t get_offset_of_U24disposing_6() { return static_cast<int32_t>(offsetof(U3CCountdownStimulantU3Ec__Iterator7_t2110329190, ___U24disposing_6)); }
	inline bool get_U24disposing_6() const { return ___U24disposing_6; }
	inline bool* get_address_of_U24disposing_6() { return &___U24disposing_6; }
	inline void set_U24disposing_6(bool value)
	{
		___U24disposing_6 = value;
	}

	inline static int32_t get_offset_of_U24PC_7() { return static_cast<int32_t>(offsetof(U3CCountdownStimulantU3Ec__Iterator7_t2110329190, ___U24PC_7)); }
	inline int32_t get_U24PC_7() const { return ___U24PC_7; }
	inline int32_t* get_address_of_U24PC_7() { return &___U24PC_7; }
	inline void set_U24PC_7(int32_t value)
	{
		___U24PC_7 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // U3CCOUNTDOWNSTIMULANTU3EC__ITERATOR7_T2110329190_H
#ifndef U3CFADEU3EC__ITERATOR5_T2199921070_H
#define U3CFADEU3EC__ITERATOR5_T2199921070_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// PlayerController/<Fade>c__Iterator5
struct  U3CFadeU3Ec__Iterator5_t2199921070  : public RuntimeObject
{
public:
	// System.Single PlayerController/<Fade>c__Iterator5::<time>__0
	float ___U3CtimeU3E__0_0;
	// System.Single PlayerController/<Fade>c__Iterator5::duration
	float ___duration_1;
	// System.Single PlayerController/<Fade>c__Iterator5::StartValue
	float ___StartValue_2;
	// System.Single PlayerController/<Fade>c__Iterator5::endValue
	float ___endValue_3;
	// UnityEngine.UI.RawImage PlayerController/<Fade>c__Iterator5::fadeObject
	RawImage_t3182918964 * ___fadeObject_4;
	// PlayerController PlayerController/<Fade>c__Iterator5::$this
	PlayerController_t2064355688 * ___U24this_5;
	// System.Object PlayerController/<Fade>c__Iterator5::$current
	RuntimeObject * ___U24current_6;
	// System.Boolean PlayerController/<Fade>c__Iterator5::$disposing
	bool ___U24disposing_7;
	// System.Int32 PlayerController/<Fade>c__Iterator5::$PC
	int32_t ___U24PC_8;

public:
	inline static int32_t get_offset_of_U3CtimeU3E__0_0() { return static_cast<int32_t>(offsetof(U3CFadeU3Ec__Iterator5_t2199921070, ___U3CtimeU3E__0_0)); }
	inline float get_U3CtimeU3E__0_0() const { return ___U3CtimeU3E__0_0; }
	inline float* get_address_of_U3CtimeU3E__0_0() { return &___U3CtimeU3E__0_0; }
	inline void set_U3CtimeU3E__0_0(float value)
	{
		___U3CtimeU3E__0_0 = value;
	}

	inline static int32_t get_offset_of_duration_1() { return static_cast<int32_t>(offsetof(U3CFadeU3Ec__Iterator5_t2199921070, ___duration_1)); }
	inline float get_duration_1() const { return ___duration_1; }
	inline float* get_address_of_duration_1() { return &___duration_1; }
	inline void set_duration_1(float value)
	{
		___duration_1 = value;
	}

	inline static int32_t get_offset_of_StartValue_2() { return static_cast<int32_t>(offsetof(U3CFadeU3Ec__Iterator5_t2199921070, ___StartValue_2)); }
	inline float get_StartValue_2() const { return ___StartValue_2; }
	inline float* get_address_of_StartValue_2() { return &___StartValue_2; }
	inline void set_StartValue_2(float value)
	{
		___StartValue_2 = value;
	}

	inline static int32_t get_offset_of_endValue_3() { return static_cast<int32_t>(offsetof(U3CFadeU3Ec__Iterator5_t2199921070, ___endValue_3)); }
	inline float get_endValue_3() const { return ___endValue_3; }
	inline float* get_address_of_endValue_3() { return &___endValue_3; }
	inline void set_endValue_3(float value)
	{
		___endValue_3 = value;
	}

	inline static int32_t get_offset_of_fadeObject_4() { return static_cast<int32_t>(offsetof(U3CFadeU3Ec__Iterator5_t2199921070, ___fadeObject_4)); }
	inline RawImage_t3182918964 * get_fadeObject_4() const { return ___fadeObject_4; }
	inline RawImage_t3182918964 ** get_address_of_fadeObject_4() { return &___fadeObject_4; }
	inline void set_fadeObject_4(RawImage_t3182918964 * value)
	{
		___fadeObject_4 = value;
		Il2CppCodeGenWriteBarrier((&___fadeObject_4), value);
	}

	inline static int32_t get_offset_of_U24this_5() { return static_cast<int32_t>(offsetof(U3CFadeU3Ec__Iterator5_t2199921070, ___U24this_5)); }
	inline PlayerController_t2064355688 * get_U24this_5() const { return ___U24this_5; }
	inline PlayerController_t2064355688 ** get_address_of_U24this_5() { return &___U24this_5; }
	inline void set_U24this_5(PlayerController_t2064355688 * value)
	{
		___U24this_5 = value;
		Il2CppCodeGenWriteBarrier((&___U24this_5), value);
	}

	inline static int32_t get_offset_of_U24current_6() { return static_cast<int32_t>(offsetof(U3CFadeU3Ec__Iterator5_t2199921070, ___U24current_6)); }
	inline RuntimeObject * get_U24current_6() const { return ___U24current_6; }
	inline RuntimeObject ** get_address_of_U24current_6() { return &___U24current_6; }
	inline void set_U24current_6(RuntimeObject * value)
	{
		___U24current_6 = value;
		Il2CppCodeGenWriteBarrier((&___U24current_6), value);
	}

	inline static int32_t get_offset_of_U24disposing_7() { return static_cast<int32_t>(offsetof(U3CFadeU3Ec__Iterator5_t2199921070, ___U24disposing_7)); }
	inline bool get_U24disposing_7() const { return ___U24disposing_7; }
	inline bool* get_address_of_U24disposing_7() { return &___U24disposing_7; }
	inline void set_U24disposing_7(bool value)
	{
		___U24disposing_7 = value;
	}

	inline static int32_t get_offset_of_U24PC_8() { return static_cast<int32_t>(offsetof(U3CFadeU3Ec__Iterator5_t2199921070, ___U24PC_8)); }
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
#endif // U3CFADEU3EC__ITERATOR5_T2199921070_H
#ifndef U3CFADEALPHAU3EC__ITERATOR6_T2120322554_H
#define U3CFADEALPHAU3EC__ITERATOR6_T2120322554_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// PlayerController/<FadeAlpha>c__Iterator6
struct  U3CFadeAlphaU3Ec__Iterator6_t2120322554  : public RuntimeObject
{
public:
	// System.Single PlayerController/<FadeAlpha>c__Iterator6::waitTime
	float ___waitTime_0;
	// System.Single PlayerController/<FadeAlpha>c__Iterator6::<time>__0
	float ___U3CtimeU3E__0_1;
	// System.Single PlayerController/<FadeAlpha>c__Iterator6::duration
	float ___duration_2;
	// System.Single PlayerController/<FadeAlpha>c__Iterator6::StartValue
	float ___StartValue_3;
	// System.Single PlayerController/<FadeAlpha>c__Iterator6::endValue
	float ___endValue_4;
	// System.Single PlayerController/<FadeAlpha>c__Iterator6::<swap>__1
	float ___U3CswapU3E__1_5;
	// PlayerController PlayerController/<FadeAlpha>c__Iterator6::$this
	PlayerController_t2064355688 * ___U24this_6;
	// System.Object PlayerController/<FadeAlpha>c__Iterator6::$current
	RuntimeObject * ___U24current_7;
	// System.Boolean PlayerController/<FadeAlpha>c__Iterator6::$disposing
	bool ___U24disposing_8;
	// System.Int32 PlayerController/<FadeAlpha>c__Iterator6::$PC
	int32_t ___U24PC_9;

public:
	inline static int32_t get_offset_of_waitTime_0() { return static_cast<int32_t>(offsetof(U3CFadeAlphaU3Ec__Iterator6_t2120322554, ___waitTime_0)); }
	inline float get_waitTime_0() const { return ___waitTime_0; }
	inline float* get_address_of_waitTime_0() { return &___waitTime_0; }
	inline void set_waitTime_0(float value)
	{
		___waitTime_0 = value;
	}

	inline static int32_t get_offset_of_U3CtimeU3E__0_1() { return static_cast<int32_t>(offsetof(U3CFadeAlphaU3Ec__Iterator6_t2120322554, ___U3CtimeU3E__0_1)); }
	inline float get_U3CtimeU3E__0_1() const { return ___U3CtimeU3E__0_1; }
	inline float* get_address_of_U3CtimeU3E__0_1() { return &___U3CtimeU3E__0_1; }
	inline void set_U3CtimeU3E__0_1(float value)
	{
		___U3CtimeU3E__0_1 = value;
	}

	inline static int32_t get_offset_of_duration_2() { return static_cast<int32_t>(offsetof(U3CFadeAlphaU3Ec__Iterator6_t2120322554, ___duration_2)); }
	inline float get_duration_2() const { return ___duration_2; }
	inline float* get_address_of_duration_2() { return &___duration_2; }
	inline void set_duration_2(float value)
	{
		___duration_2 = value;
	}

	inline static int32_t get_offset_of_StartValue_3() { return static_cast<int32_t>(offsetof(U3CFadeAlphaU3Ec__Iterator6_t2120322554, ___StartValue_3)); }
	inline float get_StartValue_3() const { return ___StartValue_3; }
	inline float* get_address_of_StartValue_3() { return &___StartValue_3; }
	inline void set_StartValue_3(float value)
	{
		___StartValue_3 = value;
	}

	inline static int32_t get_offset_of_endValue_4() { return static_cast<int32_t>(offsetof(U3CFadeAlphaU3Ec__Iterator6_t2120322554, ___endValue_4)); }
	inline float get_endValue_4() const { return ___endValue_4; }
	inline float* get_address_of_endValue_4() { return &___endValue_4; }
	inline void set_endValue_4(float value)
	{
		___endValue_4 = value;
	}

	inline static int32_t get_offset_of_U3CswapU3E__1_5() { return static_cast<int32_t>(offsetof(U3CFadeAlphaU3Ec__Iterator6_t2120322554, ___U3CswapU3E__1_5)); }
	inline float get_U3CswapU3E__1_5() const { return ___U3CswapU3E__1_5; }
	inline float* get_address_of_U3CswapU3E__1_5() { return &___U3CswapU3E__1_5; }
	inline void set_U3CswapU3E__1_5(float value)
	{
		___U3CswapU3E__1_5 = value;
	}

	inline static int32_t get_offset_of_U24this_6() { return static_cast<int32_t>(offsetof(U3CFadeAlphaU3Ec__Iterator6_t2120322554, ___U24this_6)); }
	inline PlayerController_t2064355688 * get_U24this_6() const { return ___U24this_6; }
	inline PlayerController_t2064355688 ** get_address_of_U24this_6() { return &___U24this_6; }
	inline void set_U24this_6(PlayerController_t2064355688 * value)
	{
		___U24this_6 = value;
		Il2CppCodeGenWriteBarrier((&___U24this_6), value);
	}

	inline static int32_t get_offset_of_U24current_7() { return static_cast<int32_t>(offsetof(U3CFadeAlphaU3Ec__Iterator6_t2120322554, ___U24current_7)); }
	inline RuntimeObject * get_U24current_7() const { return ___U24current_7; }
	inline RuntimeObject ** get_address_of_U24current_7() { return &___U24current_7; }
	inline void set_U24current_7(RuntimeObject * value)
	{
		___U24current_7 = value;
		Il2CppCodeGenWriteBarrier((&___U24current_7), value);
	}

	inline static int32_t get_offset_of_U24disposing_8() { return static_cast<int32_t>(offsetof(U3CFadeAlphaU3Ec__Iterator6_t2120322554, ___U24disposing_8)); }
	inline bool get_U24disposing_8() const { return ___U24disposing_8; }
	inline bool* get_address_of_U24disposing_8() { return &___U24disposing_8; }
	inline void set_U24disposing_8(bool value)
	{
		___U24disposing_8 = value;
	}

	inline static int32_t get_offset_of_U24PC_9() { return static_cast<int32_t>(offsetof(U3CFadeAlphaU3Ec__Iterator6_t2120322554, ___U24PC_9)); }
	inline int32_t get_U24PC_9() const { return ___U24PC_9; }
	inline int32_t* get_address_of_U24PC_9() { return &___U24PC_9; }
	inline void set_U24PC_9(int32_t value)
	{
		___U24PC_9 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // U3CFADEALPHAU3EC__ITERATOR6_T2120322554_H
#ifndef U3CFADESCREENU3EC__ITERATORD_T1467492050_H
#define U3CFADESCREENU3EC__ITERATORD_T1467492050_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// PlayerController/<FadeScreen>c__IteratorD
struct  U3CFadeScreenU3Ec__IteratorD_t1467492050  : public RuntimeObject
{
public:
	// System.Single PlayerController/<FadeScreen>c__IteratorD::<StartValue>__0
	float ___U3CStartValueU3E__0_0;
	// System.Single PlayerController/<FadeScreen>c__IteratorD::<fadeTime>__0
	float ___U3CfadeTimeU3E__0_1;
	// System.Single PlayerController/<FadeScreen>c__IteratorD::duration
	float ___duration_2;
	// System.Single PlayerController/<FadeScreen>c__IteratorD::targetValue
	float ___targetValue_3;
	// PlayerController PlayerController/<FadeScreen>c__IteratorD::$this
	PlayerController_t2064355688 * ___U24this_4;
	// System.Object PlayerController/<FadeScreen>c__IteratorD::$current
	RuntimeObject * ___U24current_5;
	// System.Boolean PlayerController/<FadeScreen>c__IteratorD::$disposing
	bool ___U24disposing_6;
	// System.Int32 PlayerController/<FadeScreen>c__IteratorD::$PC
	int32_t ___U24PC_7;

public:
	inline static int32_t get_offset_of_U3CStartValueU3E__0_0() { return static_cast<int32_t>(offsetof(U3CFadeScreenU3Ec__IteratorD_t1467492050, ___U3CStartValueU3E__0_0)); }
	inline float get_U3CStartValueU3E__0_0() const { return ___U3CStartValueU3E__0_0; }
	inline float* get_address_of_U3CStartValueU3E__0_0() { return &___U3CStartValueU3E__0_0; }
	inline void set_U3CStartValueU3E__0_0(float value)
	{
		___U3CStartValueU3E__0_0 = value;
	}

	inline static int32_t get_offset_of_U3CfadeTimeU3E__0_1() { return static_cast<int32_t>(offsetof(U3CFadeScreenU3Ec__IteratorD_t1467492050, ___U3CfadeTimeU3E__0_1)); }
	inline float get_U3CfadeTimeU3E__0_1() const { return ___U3CfadeTimeU3E__0_1; }
	inline float* get_address_of_U3CfadeTimeU3E__0_1() { return &___U3CfadeTimeU3E__0_1; }
	inline void set_U3CfadeTimeU3E__0_1(float value)
	{
		___U3CfadeTimeU3E__0_1 = value;
	}

	inline static int32_t get_offset_of_duration_2() { return static_cast<int32_t>(offsetof(U3CFadeScreenU3Ec__IteratorD_t1467492050, ___duration_2)); }
	inline float get_duration_2() const { return ___duration_2; }
	inline float* get_address_of_duration_2() { return &___duration_2; }
	inline void set_duration_2(float value)
	{
		___duration_2 = value;
	}

	inline static int32_t get_offset_of_targetValue_3() { return static_cast<int32_t>(offsetof(U3CFadeScreenU3Ec__IteratorD_t1467492050, ___targetValue_3)); }
	inline float get_targetValue_3() const { return ___targetValue_3; }
	inline float* get_address_of_targetValue_3() { return &___targetValue_3; }
	inline void set_targetValue_3(float value)
	{
		___targetValue_3 = value;
	}

	inline static int32_t get_offset_of_U24this_4() { return static_cast<int32_t>(offsetof(U3CFadeScreenU3Ec__IteratorD_t1467492050, ___U24this_4)); }
	inline PlayerController_t2064355688 * get_U24this_4() const { return ___U24this_4; }
	inline PlayerController_t2064355688 ** get_address_of_U24this_4() { return &___U24this_4; }
	inline void set_U24this_4(PlayerController_t2064355688 * value)
	{
		___U24this_4 = value;
		Il2CppCodeGenWriteBarrier((&___U24this_4), value);
	}

	inline static int32_t get_offset_of_U24current_5() { return static_cast<int32_t>(offsetof(U3CFadeScreenU3Ec__IteratorD_t1467492050, ___U24current_5)); }
	inline RuntimeObject * get_U24current_5() const { return ___U24current_5; }
	inline RuntimeObject ** get_address_of_U24current_5() { return &___U24current_5; }
	inline void set_U24current_5(RuntimeObject * value)
	{
		___U24current_5 = value;
		Il2CppCodeGenWriteBarrier((&___U24current_5), value);
	}

	inline static int32_t get_offset_of_U24disposing_6() { return static_cast<int32_t>(offsetof(U3CFadeScreenU3Ec__IteratorD_t1467492050, ___U24disposing_6)); }
	inline bool get_U24disposing_6() const { return ___U24disposing_6; }
	inline bool* get_address_of_U24disposing_6() { return &___U24disposing_6; }
	inline void set_U24disposing_6(bool value)
	{
		___U24disposing_6 = value;
	}

	inline static int32_t get_offset_of_U24PC_7() { return static_cast<int32_t>(offsetof(U3CFadeScreenU3Ec__IteratorD_t1467492050, ___U24PC_7)); }
	inline int32_t get_U24PC_7() const { return ___U24PC_7; }
	inline int32_t* get_address_of_U24PC_7() { return &___U24PC_7; }
	inline void set_U24PC_7(int32_t value)
	{
		___U24PC_7 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // U3CFADESCREENU3EC__ITERATORD_T1467492050_H
#ifndef U3CHEALLERPU3EC__ITERATOR0_T36755912_H
#define U3CHEALLERPU3EC__ITERATOR0_T36755912_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// PlayerController/<HealLerp>c__Iterator0
struct  U3CHealLerpU3Ec__Iterator0_t36755912  : public RuntimeObject
{
public:
	// System.Single PlayerController/<HealLerp>c__Iterator0::<time>__0
	float ___U3CtimeU3E__0_0;
	// System.Single PlayerController/<HealLerp>c__Iterator0::duration
	float ___duration_1;
	// System.Single PlayerController/<HealLerp>c__Iterator0::StartValue
	float ___StartValue_2;
	// System.Single PlayerController/<HealLerp>c__Iterator0::endValue
	float ___endValue_3;
	// System.Single PlayerController/<HealLerp>c__Iterator0::<swap>__1
	float ___U3CswapU3E__1_4;
	// PlayerController PlayerController/<HealLerp>c__Iterator0::$this
	PlayerController_t2064355688 * ___U24this_5;
	// System.Object PlayerController/<HealLerp>c__Iterator0::$current
	RuntimeObject * ___U24current_6;
	// System.Boolean PlayerController/<HealLerp>c__Iterator0::$disposing
	bool ___U24disposing_7;
	// System.Int32 PlayerController/<HealLerp>c__Iterator0::$PC
	int32_t ___U24PC_8;

public:
	inline static int32_t get_offset_of_U3CtimeU3E__0_0() { return static_cast<int32_t>(offsetof(U3CHealLerpU3Ec__Iterator0_t36755912, ___U3CtimeU3E__0_0)); }
	inline float get_U3CtimeU3E__0_0() const { return ___U3CtimeU3E__0_0; }
	inline float* get_address_of_U3CtimeU3E__0_0() { return &___U3CtimeU3E__0_0; }
	inline void set_U3CtimeU3E__0_0(float value)
	{
		___U3CtimeU3E__0_0 = value;
	}

	inline static int32_t get_offset_of_duration_1() { return static_cast<int32_t>(offsetof(U3CHealLerpU3Ec__Iterator0_t36755912, ___duration_1)); }
	inline float get_duration_1() const { return ___duration_1; }
	inline float* get_address_of_duration_1() { return &___duration_1; }
	inline void set_duration_1(float value)
	{
		___duration_1 = value;
	}

	inline static int32_t get_offset_of_StartValue_2() { return static_cast<int32_t>(offsetof(U3CHealLerpU3Ec__Iterator0_t36755912, ___StartValue_2)); }
	inline float get_StartValue_2() const { return ___StartValue_2; }
	inline float* get_address_of_StartValue_2() { return &___StartValue_2; }
	inline void set_StartValue_2(float value)
	{
		___StartValue_2 = value;
	}

	inline static int32_t get_offset_of_endValue_3() { return static_cast<int32_t>(offsetof(U3CHealLerpU3Ec__Iterator0_t36755912, ___endValue_3)); }
	inline float get_endValue_3() const { return ___endValue_3; }
	inline float* get_address_of_endValue_3() { return &___endValue_3; }
	inline void set_endValue_3(float value)
	{
		___endValue_3 = value;
	}

	inline static int32_t get_offset_of_U3CswapU3E__1_4() { return static_cast<int32_t>(offsetof(U3CHealLerpU3Ec__Iterator0_t36755912, ___U3CswapU3E__1_4)); }
	inline float get_U3CswapU3E__1_4() const { return ___U3CswapU3E__1_4; }
	inline float* get_address_of_U3CswapU3E__1_4() { return &___U3CswapU3E__1_4; }
	inline void set_U3CswapU3E__1_4(float value)
	{
		___U3CswapU3E__1_4 = value;
	}

	inline static int32_t get_offset_of_U24this_5() { return static_cast<int32_t>(offsetof(U3CHealLerpU3Ec__Iterator0_t36755912, ___U24this_5)); }
	inline PlayerController_t2064355688 * get_U24this_5() const { return ___U24this_5; }
	inline PlayerController_t2064355688 ** get_address_of_U24this_5() { return &___U24this_5; }
	inline void set_U24this_5(PlayerController_t2064355688 * value)
	{
		___U24this_5 = value;
		Il2CppCodeGenWriteBarrier((&___U24this_5), value);
	}

	inline static int32_t get_offset_of_U24current_6() { return static_cast<int32_t>(offsetof(U3CHealLerpU3Ec__Iterator0_t36755912, ___U24current_6)); }
	inline RuntimeObject * get_U24current_6() const { return ___U24current_6; }
	inline RuntimeObject ** get_address_of_U24current_6() { return &___U24current_6; }
	inline void set_U24current_6(RuntimeObject * value)
	{
		___U24current_6 = value;
		Il2CppCodeGenWriteBarrier((&___U24current_6), value);
	}

	inline static int32_t get_offset_of_U24disposing_7() { return static_cast<int32_t>(offsetof(U3CHealLerpU3Ec__Iterator0_t36755912, ___U24disposing_7)); }
	inline bool get_U24disposing_7() const { return ___U24disposing_7; }
	inline bool* get_address_of_U24disposing_7() { return &___U24disposing_7; }
	inline void set_U24disposing_7(bool value)
	{
		___U24disposing_7 = value;
	}

	inline static int32_t get_offset_of_U24PC_8() { return static_cast<int32_t>(offsetof(U3CHealLerpU3Ec__Iterator0_t36755912, ___U24PC_8)); }
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
#endif // U3CHEALLERPU3EC__ITERATOR0_T36755912_H
#ifndef U3CLERPFOCALLENGTHU3EC__ITERATORC_T1666889386_H
#define U3CLERPFOCALLENGTHU3EC__ITERATORC_T1666889386_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// PlayerController/<LerpFocalLength>c__IteratorC
struct  U3CLerpFocalLengthU3Ec__IteratorC_t1666889386  : public RuntimeObject
{
public:
	// System.Single PlayerController/<LerpFocalLength>c__IteratorC::<time>__0
	float ___U3CtimeU3E__0_0;
	// System.Single PlayerController/<LerpFocalLength>c__IteratorC::duration
	float ___duration_1;
	// System.Single PlayerController/<LerpFocalLength>c__IteratorC::StartValue
	float ___StartValue_2;
	// System.Single PlayerController/<LerpFocalLength>c__IteratorC::endValue
	float ___endValue_3;
	// System.Single PlayerController/<LerpFocalLength>c__IteratorC::<currentValue>__1
	float ___U3CcurrentValueU3E__1_4;
	// PlayerController PlayerController/<LerpFocalLength>c__IteratorC::$this
	PlayerController_t2064355688 * ___U24this_5;
	// System.Object PlayerController/<LerpFocalLength>c__IteratorC::$current
	RuntimeObject * ___U24current_6;
	// System.Boolean PlayerController/<LerpFocalLength>c__IteratorC::$disposing
	bool ___U24disposing_7;
	// System.Int32 PlayerController/<LerpFocalLength>c__IteratorC::$PC
	int32_t ___U24PC_8;

public:
	inline static int32_t get_offset_of_U3CtimeU3E__0_0() { return static_cast<int32_t>(offsetof(U3CLerpFocalLengthU3Ec__IteratorC_t1666889386, ___U3CtimeU3E__0_0)); }
	inline float get_U3CtimeU3E__0_0() const { return ___U3CtimeU3E__0_0; }
	inline float* get_address_of_U3CtimeU3E__0_0() { return &___U3CtimeU3E__0_0; }
	inline void set_U3CtimeU3E__0_0(float value)
	{
		___U3CtimeU3E__0_0 = value;
	}

	inline static int32_t get_offset_of_duration_1() { return static_cast<int32_t>(offsetof(U3CLerpFocalLengthU3Ec__IteratorC_t1666889386, ___duration_1)); }
	inline float get_duration_1() const { return ___duration_1; }
	inline float* get_address_of_duration_1() { return &___duration_1; }
	inline void set_duration_1(float value)
	{
		___duration_1 = value;
	}

	inline static int32_t get_offset_of_StartValue_2() { return static_cast<int32_t>(offsetof(U3CLerpFocalLengthU3Ec__IteratorC_t1666889386, ___StartValue_2)); }
	inline float get_StartValue_2() const { return ___StartValue_2; }
	inline float* get_address_of_StartValue_2() { return &___StartValue_2; }
	inline void set_StartValue_2(float value)
	{
		___StartValue_2 = value;
	}

	inline static int32_t get_offset_of_endValue_3() { return static_cast<int32_t>(offsetof(U3CLerpFocalLengthU3Ec__IteratorC_t1666889386, ___endValue_3)); }
	inline float get_endValue_3() const { return ___endValue_3; }
	inline float* get_address_of_endValue_3() { return &___endValue_3; }
	inline void set_endValue_3(float value)
	{
		___endValue_3 = value;
	}

	inline static int32_t get_offset_of_U3CcurrentValueU3E__1_4() { return static_cast<int32_t>(offsetof(U3CLerpFocalLengthU3Ec__IteratorC_t1666889386, ___U3CcurrentValueU3E__1_4)); }
	inline float get_U3CcurrentValueU3E__1_4() const { return ___U3CcurrentValueU3E__1_4; }
	inline float* get_address_of_U3CcurrentValueU3E__1_4() { return &___U3CcurrentValueU3E__1_4; }
	inline void set_U3CcurrentValueU3E__1_4(float value)
	{
		___U3CcurrentValueU3E__1_4 = value;
	}

	inline static int32_t get_offset_of_U24this_5() { return static_cast<int32_t>(offsetof(U3CLerpFocalLengthU3Ec__IteratorC_t1666889386, ___U24this_5)); }
	inline PlayerController_t2064355688 * get_U24this_5() const { return ___U24this_5; }
	inline PlayerController_t2064355688 ** get_address_of_U24this_5() { return &___U24this_5; }
	inline void set_U24this_5(PlayerController_t2064355688 * value)
	{
		___U24this_5 = value;
		Il2CppCodeGenWriteBarrier((&___U24this_5), value);
	}

	inline static int32_t get_offset_of_U24current_6() { return static_cast<int32_t>(offsetof(U3CLerpFocalLengthU3Ec__IteratorC_t1666889386, ___U24current_6)); }
	inline RuntimeObject * get_U24current_6() const { return ___U24current_6; }
	inline RuntimeObject ** get_address_of_U24current_6() { return &___U24current_6; }
	inline void set_U24current_6(RuntimeObject * value)
	{
		___U24current_6 = value;
		Il2CppCodeGenWriteBarrier((&___U24current_6), value);
	}

	inline static int32_t get_offset_of_U24disposing_7() { return static_cast<int32_t>(offsetof(U3CLerpFocalLengthU3Ec__IteratorC_t1666889386, ___U24disposing_7)); }
	inline bool get_U24disposing_7() const { return ___U24disposing_7; }
	inline bool* get_address_of_U24disposing_7() { return &___U24disposing_7; }
	inline void set_U24disposing_7(bool value)
	{
		___U24disposing_7 = value;
	}

	inline static int32_t get_offset_of_U24PC_8() { return static_cast<int32_t>(offsetof(U3CLerpFocalLengthU3Ec__IteratorC_t1666889386, ___U24PC_8)); }
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
#endif // U3CLERPFOCALLENGTHU3EC__ITERATORC_T1666889386_H
#ifndef U3CRECHARGESTAMINAU3EC__ITERATOR8_T2292010363_H
#define U3CRECHARGESTAMINAU3EC__ITERATOR8_T2292010363_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// PlayerController/<RechargeStamina>c__Iterator8
struct  U3CRechargeStaminaU3Ec__Iterator8_t2292010363  : public RuntimeObject
{
public:
	// System.Single PlayerController/<RechargeStamina>c__Iterator8::<time>__0
	float ___U3CtimeU3E__0_0;
	// System.Single PlayerController/<RechargeStamina>c__Iterator8::duration
	float ___duration_1;
	// System.Single PlayerController/<RechargeStamina>c__Iterator8::currentStamina
	float ___currentStamina_2;
	// PlayerController PlayerController/<RechargeStamina>c__Iterator8::$this
	PlayerController_t2064355688 * ___U24this_3;
	// System.Object PlayerController/<RechargeStamina>c__Iterator8::$current
	RuntimeObject * ___U24current_4;
	// System.Boolean PlayerController/<RechargeStamina>c__Iterator8::$disposing
	bool ___U24disposing_5;
	// System.Int32 PlayerController/<RechargeStamina>c__Iterator8::$PC
	int32_t ___U24PC_6;

public:
	inline static int32_t get_offset_of_U3CtimeU3E__0_0() { return static_cast<int32_t>(offsetof(U3CRechargeStaminaU3Ec__Iterator8_t2292010363, ___U3CtimeU3E__0_0)); }
	inline float get_U3CtimeU3E__0_0() const { return ___U3CtimeU3E__0_0; }
	inline float* get_address_of_U3CtimeU3E__0_0() { return &___U3CtimeU3E__0_0; }
	inline void set_U3CtimeU3E__0_0(float value)
	{
		___U3CtimeU3E__0_0 = value;
	}

	inline static int32_t get_offset_of_duration_1() { return static_cast<int32_t>(offsetof(U3CRechargeStaminaU3Ec__Iterator8_t2292010363, ___duration_1)); }
	inline float get_duration_1() const { return ___duration_1; }
	inline float* get_address_of_duration_1() { return &___duration_1; }
	inline void set_duration_1(float value)
	{
		___duration_1 = value;
	}

	inline static int32_t get_offset_of_currentStamina_2() { return static_cast<int32_t>(offsetof(U3CRechargeStaminaU3Ec__Iterator8_t2292010363, ___currentStamina_2)); }
	inline float get_currentStamina_2() const { return ___currentStamina_2; }
	inline float* get_address_of_currentStamina_2() { return &___currentStamina_2; }
	inline void set_currentStamina_2(float value)
	{
		___currentStamina_2 = value;
	}

	inline static int32_t get_offset_of_U24this_3() { return static_cast<int32_t>(offsetof(U3CRechargeStaminaU3Ec__Iterator8_t2292010363, ___U24this_3)); }
	inline PlayerController_t2064355688 * get_U24this_3() const { return ___U24this_3; }
	inline PlayerController_t2064355688 ** get_address_of_U24this_3() { return &___U24this_3; }
	inline void set_U24this_3(PlayerController_t2064355688 * value)
	{
		___U24this_3 = value;
		Il2CppCodeGenWriteBarrier((&___U24this_3), value);
	}

	inline static int32_t get_offset_of_U24current_4() { return static_cast<int32_t>(offsetof(U3CRechargeStaminaU3Ec__Iterator8_t2292010363, ___U24current_4)); }
	inline RuntimeObject * get_U24current_4() const { return ___U24current_4; }
	inline RuntimeObject ** get_address_of_U24current_4() { return &___U24current_4; }
	inline void set_U24current_4(RuntimeObject * value)
	{
		___U24current_4 = value;
		Il2CppCodeGenWriteBarrier((&___U24current_4), value);
	}

	inline static int32_t get_offset_of_U24disposing_5() { return static_cast<int32_t>(offsetof(U3CRechargeStaminaU3Ec__Iterator8_t2292010363, ___U24disposing_5)); }
	inline bool get_U24disposing_5() const { return ___U24disposing_5; }
	inline bool* get_address_of_U24disposing_5() { return &___U24disposing_5; }
	inline void set_U24disposing_5(bool value)
	{
		___U24disposing_5 = value;
	}

	inline static int32_t get_offset_of_U24PC_6() { return static_cast<int32_t>(offsetof(U3CRechargeStaminaU3Ec__Iterator8_t2292010363, ___U24PC_6)); }
	inline int32_t get_U24PC_6() const { return ___U24PC_6; }
	inline int32_t* get_address_of_U24PC_6() { return &___U24PC_6; }
	inline void set_U24PC_6(int32_t value)
	{
		___U24PC_6 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // U3CRECHARGESTAMINAU3EC__ITERATOR8_T2292010363_H
#ifndef U3CWALKLERPU3EC__ITERATOR1_T3440739653_H
#define U3CWALKLERPU3EC__ITERATOR1_T3440739653_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// PlayerController/<WalkLerp>c__Iterator1
struct  U3CWalkLerpU3Ec__Iterator1_t3440739653  : public RuntimeObject
{
public:
	// System.Single PlayerController/<WalkLerp>c__Iterator1::<time>__0
	float ___U3CtimeU3E__0_0;
	// System.Single PlayerController/<WalkLerp>c__Iterator1::duration
	float ___duration_1;
	// System.Single PlayerController/<WalkLerp>c__Iterator1::StartValue
	float ___StartValue_2;
	// System.Single PlayerController/<WalkLerp>c__Iterator1::endValue
	float ___endValue_3;
	// System.Single PlayerController/<WalkLerp>c__Iterator1::<swap>__1
	float ___U3CswapU3E__1_4;
	// System.Single PlayerController/<WalkLerp>c__Iterator1::<swap>__2
	float ___U3CswapU3E__2_5;
	// PlayerController PlayerController/<WalkLerp>c__Iterator1::$this
	PlayerController_t2064355688 * ___U24this_6;
	// System.Object PlayerController/<WalkLerp>c__Iterator1::$current
	RuntimeObject * ___U24current_7;
	// System.Boolean PlayerController/<WalkLerp>c__Iterator1::$disposing
	bool ___U24disposing_8;
	// System.Int32 PlayerController/<WalkLerp>c__Iterator1::$PC
	int32_t ___U24PC_9;

public:
	inline static int32_t get_offset_of_U3CtimeU3E__0_0() { return static_cast<int32_t>(offsetof(U3CWalkLerpU3Ec__Iterator1_t3440739653, ___U3CtimeU3E__0_0)); }
	inline float get_U3CtimeU3E__0_0() const { return ___U3CtimeU3E__0_0; }
	inline float* get_address_of_U3CtimeU3E__0_0() { return &___U3CtimeU3E__0_0; }
	inline void set_U3CtimeU3E__0_0(float value)
	{
		___U3CtimeU3E__0_0 = value;
	}

	inline static int32_t get_offset_of_duration_1() { return static_cast<int32_t>(offsetof(U3CWalkLerpU3Ec__Iterator1_t3440739653, ___duration_1)); }
	inline float get_duration_1() const { return ___duration_1; }
	inline float* get_address_of_duration_1() { return &___duration_1; }
	inline void set_duration_1(float value)
	{
		___duration_1 = value;
	}

	inline static int32_t get_offset_of_StartValue_2() { return static_cast<int32_t>(offsetof(U3CWalkLerpU3Ec__Iterator1_t3440739653, ___StartValue_2)); }
	inline float get_StartValue_2() const { return ___StartValue_2; }
	inline float* get_address_of_StartValue_2() { return &___StartValue_2; }
	inline void set_StartValue_2(float value)
	{
		___StartValue_2 = value;
	}

	inline static int32_t get_offset_of_endValue_3() { return static_cast<int32_t>(offsetof(U3CWalkLerpU3Ec__Iterator1_t3440739653, ___endValue_3)); }
	inline float get_endValue_3() const { return ___endValue_3; }
	inline float* get_address_of_endValue_3() { return &___endValue_3; }
	inline void set_endValue_3(float value)
	{
		___endValue_3 = value;
	}

	inline static int32_t get_offset_of_U3CswapU3E__1_4() { return static_cast<int32_t>(offsetof(U3CWalkLerpU3Ec__Iterator1_t3440739653, ___U3CswapU3E__1_4)); }
	inline float get_U3CswapU3E__1_4() const { return ___U3CswapU3E__1_4; }
	inline float* get_address_of_U3CswapU3E__1_4() { return &___U3CswapU3E__1_4; }
	inline void set_U3CswapU3E__1_4(float value)
	{
		___U3CswapU3E__1_4 = value;
	}

	inline static int32_t get_offset_of_U3CswapU3E__2_5() { return static_cast<int32_t>(offsetof(U3CWalkLerpU3Ec__Iterator1_t3440739653, ___U3CswapU3E__2_5)); }
	inline float get_U3CswapU3E__2_5() const { return ___U3CswapU3E__2_5; }
	inline float* get_address_of_U3CswapU3E__2_5() { return &___U3CswapU3E__2_5; }
	inline void set_U3CswapU3E__2_5(float value)
	{
		___U3CswapU3E__2_5 = value;
	}

	inline static int32_t get_offset_of_U24this_6() { return static_cast<int32_t>(offsetof(U3CWalkLerpU3Ec__Iterator1_t3440739653, ___U24this_6)); }
	inline PlayerController_t2064355688 * get_U24this_6() const { return ___U24this_6; }
	inline PlayerController_t2064355688 ** get_address_of_U24this_6() { return &___U24this_6; }
	inline void set_U24this_6(PlayerController_t2064355688 * value)
	{
		___U24this_6 = value;
		Il2CppCodeGenWriteBarrier((&___U24this_6), value);
	}

	inline static int32_t get_offset_of_U24current_7() { return static_cast<int32_t>(offsetof(U3CWalkLerpU3Ec__Iterator1_t3440739653, ___U24current_7)); }
	inline RuntimeObject * get_U24current_7() const { return ___U24current_7; }
	inline RuntimeObject ** get_address_of_U24current_7() { return &___U24current_7; }
	inline void set_U24current_7(RuntimeObject * value)
	{
		___U24current_7 = value;
		Il2CppCodeGenWriteBarrier((&___U24current_7), value);
	}

	inline static int32_t get_offset_of_U24disposing_8() { return static_cast<int32_t>(offsetof(U3CWalkLerpU3Ec__Iterator1_t3440739653, ___U24disposing_8)); }
	inline bool get_U24disposing_8() const { return ___U24disposing_8; }
	inline bool* get_address_of_U24disposing_8() { return &___U24disposing_8; }
	inline void set_U24disposing_8(bool value)
	{
		___U24disposing_8 = value;
	}

	inline static int32_t get_offset_of_U24PC_9() { return static_cast<int32_t>(offsetof(U3CWalkLerpU3Ec__Iterator1_t3440739653, ___U24PC_9)); }
	inline int32_t get_U24PC_9() const { return ___U24PC_9; }
	inline int32_t* get_address_of_U24PC_9() { return &___U24PC_9; }
	inline void set_U24PC_9(int32_t value)
	{
		___U24PC_9 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // U3CWALKLERPU3EC__ITERATOR1_T3440739653_H
#ifndef COMMAND_T2676217732_H
#define COMMAND_T2676217732_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// PlayerController/Command
struct  Command_t2676217732  : public RuntimeObject
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // COMMAND_T2676217732_H
#ifndef U3CDIALOGHANDLERU3EC__ITERATOR2_T2750974388_H
#define U3CDIALOGHANDLERU3EC__ITERATOR2_T2750974388_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// SaveManager_Inputs/<DialogHandler>c__Iterator2
struct  U3CDialogHandlerU3Ec__Iterator2_t2750974388  : public RuntimeObject
{
public:
	// System.Single SaveManager_Inputs/<DialogHandler>c__Iterator2::<duration>__0
	float ___U3CdurationU3E__0_0;
	// System.Single SaveManager_Inputs/<DialogHandler>c__Iterator2::<time>__0
	float ___U3CtimeU3E__0_1;
	// SaveManager_Inputs SaveManager_Inputs/<DialogHandler>c__Iterator2::$this
	SaveManager_Inputs_t2402574047 * ___U24this_2;
	// System.Object SaveManager_Inputs/<DialogHandler>c__Iterator2::$current
	RuntimeObject * ___U24current_3;
	// System.Boolean SaveManager_Inputs/<DialogHandler>c__Iterator2::$disposing
	bool ___U24disposing_4;
	// System.Int32 SaveManager_Inputs/<DialogHandler>c__Iterator2::$PC
	int32_t ___U24PC_5;

public:
	inline static int32_t get_offset_of_U3CdurationU3E__0_0() { return static_cast<int32_t>(offsetof(U3CDialogHandlerU3Ec__Iterator2_t2750974388, ___U3CdurationU3E__0_0)); }
	inline float get_U3CdurationU3E__0_0() const { return ___U3CdurationU3E__0_0; }
	inline float* get_address_of_U3CdurationU3E__0_0() { return &___U3CdurationU3E__0_0; }
	inline void set_U3CdurationU3E__0_0(float value)
	{
		___U3CdurationU3E__0_0 = value;
	}

	inline static int32_t get_offset_of_U3CtimeU3E__0_1() { return static_cast<int32_t>(offsetof(U3CDialogHandlerU3Ec__Iterator2_t2750974388, ___U3CtimeU3E__0_1)); }
	inline float get_U3CtimeU3E__0_1() const { return ___U3CtimeU3E__0_1; }
	inline float* get_address_of_U3CtimeU3E__0_1() { return &___U3CtimeU3E__0_1; }
	inline void set_U3CtimeU3E__0_1(float value)
	{
		___U3CtimeU3E__0_1 = value;
	}

	inline static int32_t get_offset_of_U24this_2() { return static_cast<int32_t>(offsetof(U3CDialogHandlerU3Ec__Iterator2_t2750974388, ___U24this_2)); }
	inline SaveManager_Inputs_t2402574047 * get_U24this_2() const { return ___U24this_2; }
	inline SaveManager_Inputs_t2402574047 ** get_address_of_U24this_2() { return &___U24this_2; }
	inline void set_U24this_2(SaveManager_Inputs_t2402574047 * value)
	{
		___U24this_2 = value;
		Il2CppCodeGenWriteBarrier((&___U24this_2), value);
	}

	inline static int32_t get_offset_of_U24current_3() { return static_cast<int32_t>(offsetof(U3CDialogHandlerU3Ec__Iterator2_t2750974388, ___U24current_3)); }
	inline RuntimeObject * get_U24current_3() const { return ___U24current_3; }
	inline RuntimeObject ** get_address_of_U24current_3() { return &___U24current_3; }
	inline void set_U24current_3(RuntimeObject * value)
	{
		___U24current_3 = value;
		Il2CppCodeGenWriteBarrier((&___U24current_3), value);
	}

	inline static int32_t get_offset_of_U24disposing_4() { return static_cast<int32_t>(offsetof(U3CDialogHandlerU3Ec__Iterator2_t2750974388, ___U24disposing_4)); }
	inline bool get_U24disposing_4() const { return ___U24disposing_4; }
	inline bool* get_address_of_U24disposing_4() { return &___U24disposing_4; }
	inline void set_U24disposing_4(bool value)
	{
		___U24disposing_4 = value;
	}

	inline static int32_t get_offset_of_U24PC_5() { return static_cast<int32_t>(offsetof(U3CDialogHandlerU3Ec__Iterator2_t2750974388, ___U24PC_5)); }
	inline int32_t get_U24PC_5() const { return ___U24PC_5; }
	inline int32_t* get_address_of_U24PC_5() { return &___U24PC_5; }
	inline void set_U24PC_5(int32_t value)
	{
		___U24PC_5 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // U3CDIALOGHANDLERU3EC__ITERATOR2_T2750974388_H
#ifndef U3CFADELOADINGSCREENU3EC__ITERATOR1_T1537162934_H
#define U3CFADELOADINGSCREENU3EC__ITERATOR1_T1537162934_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// SaveManager_Inputs/<FadeLoadingScreen>c__Iterator1
struct  U3CFadeLoadingScreenU3Ec__Iterator1_t1537162934  : public RuntimeObject
{
public:
	// System.Single SaveManager_Inputs/<FadeLoadingScreen>c__Iterator1::<startValue>__0
	float ___U3CstartValueU3E__0_0;
	// System.Single SaveManager_Inputs/<FadeLoadingScreen>c__Iterator1::<time>__0
	float ___U3CtimeU3E__0_1;
	// System.Single SaveManager_Inputs/<FadeLoadingScreen>c__Iterator1::duration
	float ___duration_2;
	// System.Single SaveManager_Inputs/<FadeLoadingScreen>c__Iterator1::targetValue
	float ___targetValue_3;
	// SaveManager_Inputs SaveManager_Inputs/<FadeLoadingScreen>c__Iterator1::$this
	SaveManager_Inputs_t2402574047 * ___U24this_4;
	// System.Object SaveManager_Inputs/<FadeLoadingScreen>c__Iterator1::$current
	RuntimeObject * ___U24current_5;
	// System.Boolean SaveManager_Inputs/<FadeLoadingScreen>c__Iterator1::$disposing
	bool ___U24disposing_6;
	// System.Int32 SaveManager_Inputs/<FadeLoadingScreen>c__Iterator1::$PC
	int32_t ___U24PC_7;

public:
	inline static int32_t get_offset_of_U3CstartValueU3E__0_0() { return static_cast<int32_t>(offsetof(U3CFadeLoadingScreenU3Ec__Iterator1_t1537162934, ___U3CstartValueU3E__0_0)); }
	inline float get_U3CstartValueU3E__0_0() const { return ___U3CstartValueU3E__0_0; }
	inline float* get_address_of_U3CstartValueU3E__0_0() { return &___U3CstartValueU3E__0_0; }
	inline void set_U3CstartValueU3E__0_0(float value)
	{
		___U3CstartValueU3E__0_0 = value;
	}

	inline static int32_t get_offset_of_U3CtimeU3E__0_1() { return static_cast<int32_t>(offsetof(U3CFadeLoadingScreenU3Ec__Iterator1_t1537162934, ___U3CtimeU3E__0_1)); }
	inline float get_U3CtimeU3E__0_1() const { return ___U3CtimeU3E__0_1; }
	inline float* get_address_of_U3CtimeU3E__0_1() { return &___U3CtimeU3E__0_1; }
	inline void set_U3CtimeU3E__0_1(float value)
	{
		___U3CtimeU3E__0_1 = value;
	}

	inline static int32_t get_offset_of_duration_2() { return static_cast<int32_t>(offsetof(U3CFadeLoadingScreenU3Ec__Iterator1_t1537162934, ___duration_2)); }
	inline float get_duration_2() const { return ___duration_2; }
	inline float* get_address_of_duration_2() { return &___duration_2; }
	inline void set_duration_2(float value)
	{
		___duration_2 = value;
	}

	inline static int32_t get_offset_of_targetValue_3() { return static_cast<int32_t>(offsetof(U3CFadeLoadingScreenU3Ec__Iterator1_t1537162934, ___targetValue_3)); }
	inline float get_targetValue_3() const { return ___targetValue_3; }
	inline float* get_address_of_targetValue_3() { return &___targetValue_3; }
	inline void set_targetValue_3(float value)
	{
		___targetValue_3 = value;
	}

	inline static int32_t get_offset_of_U24this_4() { return static_cast<int32_t>(offsetof(U3CFadeLoadingScreenU3Ec__Iterator1_t1537162934, ___U24this_4)); }
	inline SaveManager_Inputs_t2402574047 * get_U24this_4() const { return ___U24this_4; }
	inline SaveManager_Inputs_t2402574047 ** get_address_of_U24this_4() { return &___U24this_4; }
	inline void set_U24this_4(SaveManager_Inputs_t2402574047 * value)
	{
		___U24this_4 = value;
		Il2CppCodeGenWriteBarrier((&___U24this_4), value);
	}

	inline static int32_t get_offset_of_U24current_5() { return static_cast<int32_t>(offsetof(U3CFadeLoadingScreenU3Ec__Iterator1_t1537162934, ___U24current_5)); }
	inline RuntimeObject * get_U24current_5() const { return ___U24current_5; }
	inline RuntimeObject ** get_address_of_U24current_5() { return &___U24current_5; }
	inline void set_U24current_5(RuntimeObject * value)
	{
		___U24current_5 = value;
		Il2CppCodeGenWriteBarrier((&___U24current_5), value);
	}

	inline static int32_t get_offset_of_U24disposing_6() { return static_cast<int32_t>(offsetof(U3CFadeLoadingScreenU3Ec__Iterator1_t1537162934, ___U24disposing_6)); }
	inline bool get_U24disposing_6() const { return ___U24disposing_6; }
	inline bool* get_address_of_U24disposing_6() { return &___U24disposing_6; }
	inline void set_U24disposing_6(bool value)
	{
		___U24disposing_6 = value;
	}

	inline static int32_t get_offset_of_U24PC_7() { return static_cast<int32_t>(offsetof(U3CFadeLoadingScreenU3Ec__Iterator1_t1537162934, ___U24PC_7)); }
	inline int32_t get_U24PC_7() const { return ___U24PC_7; }
	inline int32_t* get_address_of_U24PC_7() { return &___U24PC_7; }
	inline void set_U24PC_7(int32_t value)
	{
		___U24PC_7 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // U3CFADELOADINGSCREENU3EC__ITERATOR1_T1537162934_H
#ifndef U3CSTARTLOADU3EC__ITERATOR0_T4274245721_H
#define U3CSTARTLOADU3EC__ITERATOR0_T4274245721_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// SaveManager_Inputs/<StartLoad>c__Iterator0
struct  U3CStartLoadU3Ec__Iterator0_t4274245721  : public RuntimeObject
{
public:
	// SaveManager_Inputs SaveManager_Inputs/<StartLoad>c__Iterator0::$this
	SaveManager_Inputs_t2402574047 * ___U24this_0;
	// System.Object SaveManager_Inputs/<StartLoad>c__Iterator0::$current
	RuntimeObject * ___U24current_1;
	// System.Boolean SaveManager_Inputs/<StartLoad>c__Iterator0::$disposing
	bool ___U24disposing_2;
	// System.Int32 SaveManager_Inputs/<StartLoad>c__Iterator0::$PC
	int32_t ___U24PC_3;

public:
	inline static int32_t get_offset_of_U24this_0() { return static_cast<int32_t>(offsetof(U3CStartLoadU3Ec__Iterator0_t4274245721, ___U24this_0)); }
	inline SaveManager_Inputs_t2402574047 * get_U24this_0() const { return ___U24this_0; }
	inline SaveManager_Inputs_t2402574047 ** get_address_of_U24this_0() { return &___U24this_0; }
	inline void set_U24this_0(SaveManager_Inputs_t2402574047 * value)
	{
		___U24this_0 = value;
		Il2CppCodeGenWriteBarrier((&___U24this_0), value);
	}

	inline static int32_t get_offset_of_U24current_1() { return static_cast<int32_t>(offsetof(U3CStartLoadU3Ec__Iterator0_t4274245721, ___U24current_1)); }
	inline RuntimeObject * get_U24current_1() const { return ___U24current_1; }
	inline RuntimeObject ** get_address_of_U24current_1() { return &___U24current_1; }
	inline void set_U24current_1(RuntimeObject * value)
	{
		___U24current_1 = value;
		Il2CppCodeGenWriteBarrier((&___U24current_1), value);
	}

	inline static int32_t get_offset_of_U24disposing_2() { return static_cast<int32_t>(offsetof(U3CStartLoadU3Ec__Iterator0_t4274245721, ___U24disposing_2)); }
	inline bool get_U24disposing_2() const { return ___U24disposing_2; }
	inline bool* get_address_of_U24disposing_2() { return &___U24disposing_2; }
	inline void set_U24disposing_2(bool value)
	{
		___U24disposing_2 = value;
	}

	inline static int32_t get_offset_of_U24PC_3() { return static_cast<int32_t>(offsetof(U3CStartLoadU3Ec__Iterator0_t4274245721, ___U24PC_3)); }
	inline int32_t get_U24PC_3() const { return ___U24PC_3; }
	inline int32_t* get_address_of_U24PC_3() { return &___U24PC_3; }
	inline void set_U24PC_3(int32_t value)
	{
		___U24PC_3 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // U3CSTARTLOADU3EC__ITERATOR0_T4274245721_H
#ifndef SAVEDATA_T4186603175_H
#define SAVEDATA_T4186603175_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// SaveSerial/SaveData
struct  SaveData_t4186603175  : public RuntimeObject
{
public:
	// System.String SaveSerial/SaveData::savedLevel
	String_t* ___savedLevel_0;
	// System.Single[] SaveSerial/SaveData::playerPosition
	SingleU5BU5D_t1444911251* ___playerPosition_1;
	// System.Single[] SaveSerial/SaveData::playerRotation
	SingleU5BU5D_t1444911251* ___playerRotation_2;
	// System.Int32 SaveSerial/SaveData::playerMedkits
	int32_t ___playerMedkits_3;
	// System.Int32 SaveSerial/SaveData::playerStimulants
	int32_t ___playerStimulants_4;
	// System.Int32 SaveSerial/SaveData::playerBatteries
	int32_t ___playerBatteries_5;
	// System.Single SaveSerial/SaveData::playerHealth
	float ___playerHealth_6;
	// System.Collections.Generic.List`1<System.Int32> SaveSerial/SaveData::collectedMeds
	List_1_t128053199 * ___collectedMeds_7;
	// System.Collections.Generic.List`1<System.Int32> SaveSerial/SaveData::collectedBattery
	List_1_t128053199 * ___collectedBattery_8;
	// System.Collections.Generic.List`1<System.Int32> SaveSerial/SaveData::collectedLightWep
	List_1_t128053199 * ___collectedLightWep_9;
	// System.Collections.Generic.List`1<System.Int32> SaveSerial/SaveData::collectedHvyWep
	List_1_t128053199 * ___collectedHvyWep_10;

public:
	inline static int32_t get_offset_of_savedLevel_0() { return static_cast<int32_t>(offsetof(SaveData_t4186603175, ___savedLevel_0)); }
	inline String_t* get_savedLevel_0() const { return ___savedLevel_0; }
	inline String_t** get_address_of_savedLevel_0() { return &___savedLevel_0; }
	inline void set_savedLevel_0(String_t* value)
	{
		___savedLevel_0 = value;
		Il2CppCodeGenWriteBarrier((&___savedLevel_0), value);
	}

	inline static int32_t get_offset_of_playerPosition_1() { return static_cast<int32_t>(offsetof(SaveData_t4186603175, ___playerPosition_1)); }
	inline SingleU5BU5D_t1444911251* get_playerPosition_1() const { return ___playerPosition_1; }
	inline SingleU5BU5D_t1444911251** get_address_of_playerPosition_1() { return &___playerPosition_1; }
	inline void set_playerPosition_1(SingleU5BU5D_t1444911251* value)
	{
		___playerPosition_1 = value;
		Il2CppCodeGenWriteBarrier((&___playerPosition_1), value);
	}

	inline static int32_t get_offset_of_playerRotation_2() { return static_cast<int32_t>(offsetof(SaveData_t4186603175, ___playerRotation_2)); }
	inline SingleU5BU5D_t1444911251* get_playerRotation_2() const { return ___playerRotation_2; }
	inline SingleU5BU5D_t1444911251** get_address_of_playerRotation_2() { return &___playerRotation_2; }
	inline void set_playerRotation_2(SingleU5BU5D_t1444911251* value)
	{
		___playerRotation_2 = value;
		Il2CppCodeGenWriteBarrier((&___playerRotation_2), value);
	}

	inline static int32_t get_offset_of_playerMedkits_3() { return static_cast<int32_t>(offsetof(SaveData_t4186603175, ___playerMedkits_3)); }
	inline int32_t get_playerMedkits_3() const { return ___playerMedkits_3; }
	inline int32_t* get_address_of_playerMedkits_3() { return &___playerMedkits_3; }
	inline void set_playerMedkits_3(int32_t value)
	{
		___playerMedkits_3 = value;
	}

	inline static int32_t get_offset_of_playerStimulants_4() { return static_cast<int32_t>(offsetof(SaveData_t4186603175, ___playerStimulants_4)); }
	inline int32_t get_playerStimulants_4() const { return ___playerStimulants_4; }
	inline int32_t* get_address_of_playerStimulants_4() { return &___playerStimulants_4; }
	inline void set_playerStimulants_4(int32_t value)
	{
		___playerStimulants_4 = value;
	}

	inline static int32_t get_offset_of_playerBatteries_5() { return static_cast<int32_t>(offsetof(SaveData_t4186603175, ___playerBatteries_5)); }
	inline int32_t get_playerBatteries_5() const { return ___playerBatteries_5; }
	inline int32_t* get_address_of_playerBatteries_5() { return &___playerBatteries_5; }
	inline void set_playerBatteries_5(int32_t value)
	{
		___playerBatteries_5 = value;
	}

	inline static int32_t get_offset_of_playerHealth_6() { return static_cast<int32_t>(offsetof(SaveData_t4186603175, ___playerHealth_6)); }
	inline float get_playerHealth_6() const { return ___playerHealth_6; }
	inline float* get_address_of_playerHealth_6() { return &___playerHealth_6; }
	inline void set_playerHealth_6(float value)
	{
		___playerHealth_6 = value;
	}

	inline static int32_t get_offset_of_collectedMeds_7() { return static_cast<int32_t>(offsetof(SaveData_t4186603175, ___collectedMeds_7)); }
	inline List_1_t128053199 * get_collectedMeds_7() const { return ___collectedMeds_7; }
	inline List_1_t128053199 ** get_address_of_collectedMeds_7() { return &___collectedMeds_7; }
	inline void set_collectedMeds_7(List_1_t128053199 * value)
	{
		___collectedMeds_7 = value;
		Il2CppCodeGenWriteBarrier((&___collectedMeds_7), value);
	}

	inline static int32_t get_offset_of_collectedBattery_8() { return static_cast<int32_t>(offsetof(SaveData_t4186603175, ___collectedBattery_8)); }
	inline List_1_t128053199 * get_collectedBattery_8() const { return ___collectedBattery_8; }
	inline List_1_t128053199 ** get_address_of_collectedBattery_8() { return &___collectedBattery_8; }
	inline void set_collectedBattery_8(List_1_t128053199 * value)
	{
		___collectedBattery_8 = value;
		Il2CppCodeGenWriteBarrier((&___collectedBattery_8), value);
	}

	inline static int32_t get_offset_of_collectedLightWep_9() { return static_cast<int32_t>(offsetof(SaveData_t4186603175, ___collectedLightWep_9)); }
	inline List_1_t128053199 * get_collectedLightWep_9() const { return ___collectedLightWep_9; }
	inline List_1_t128053199 ** get_address_of_collectedLightWep_9() { return &___collectedLightWep_9; }
	inline void set_collectedLightWep_9(List_1_t128053199 * value)
	{
		___collectedLightWep_9 = value;
		Il2CppCodeGenWriteBarrier((&___collectedLightWep_9), value);
	}

	inline static int32_t get_offset_of_collectedHvyWep_10() { return static_cast<int32_t>(offsetof(SaveData_t4186603175, ___collectedHvyWep_10)); }
	inline List_1_t128053199 * get_collectedHvyWep_10() const { return ___collectedHvyWep_10; }
	inline List_1_t128053199 ** get_address_of_collectedHvyWep_10() { return &___collectedHvyWep_10; }
	inline void set_collectedHvyWep_10(List_1_t128053199 * value)
	{
		___collectedHvyWep_10 = value;
		Il2CppCodeGenWriteBarrier((&___collectedHvyWep_10), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // SAVEDATA_T4186603175_H
#ifndef U3CFADELOADINGSCREENU3EC__ITERATOR1_T1069699069_H
#define U3CFADELOADINGSCREENU3EC__ITERATOR1_T1069699069_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// SceneLoader/<FadeLoadingScreen>c__Iterator1
struct  U3CFadeLoadingScreenU3Ec__Iterator1_t1069699069  : public RuntimeObject
{
public:
	// System.Single SceneLoader/<FadeLoadingScreen>c__Iterator1::<startValue>__0
	float ___U3CstartValueU3E__0_0;
	// System.Single SceneLoader/<FadeLoadingScreen>c__Iterator1::<time>__0
	float ___U3CtimeU3E__0_1;
	// System.Single SceneLoader/<FadeLoadingScreen>c__Iterator1::duration
	float ___duration_2;
	// System.Single SceneLoader/<FadeLoadingScreen>c__Iterator1::targetValue
	float ___targetValue_3;
	// SceneLoader SceneLoader/<FadeLoadingScreen>c__Iterator1::$this
	SceneLoader_t4130533360 * ___U24this_4;
	// System.Object SceneLoader/<FadeLoadingScreen>c__Iterator1::$current
	RuntimeObject * ___U24current_5;
	// System.Boolean SceneLoader/<FadeLoadingScreen>c__Iterator1::$disposing
	bool ___U24disposing_6;
	// System.Int32 SceneLoader/<FadeLoadingScreen>c__Iterator1::$PC
	int32_t ___U24PC_7;

public:
	inline static int32_t get_offset_of_U3CstartValueU3E__0_0() { return static_cast<int32_t>(offsetof(U3CFadeLoadingScreenU3Ec__Iterator1_t1069699069, ___U3CstartValueU3E__0_0)); }
	inline float get_U3CstartValueU3E__0_0() const { return ___U3CstartValueU3E__0_0; }
	inline float* get_address_of_U3CstartValueU3E__0_0() { return &___U3CstartValueU3E__0_0; }
	inline void set_U3CstartValueU3E__0_0(float value)
	{
		___U3CstartValueU3E__0_0 = value;
	}

	inline static int32_t get_offset_of_U3CtimeU3E__0_1() { return static_cast<int32_t>(offsetof(U3CFadeLoadingScreenU3Ec__Iterator1_t1069699069, ___U3CtimeU3E__0_1)); }
	inline float get_U3CtimeU3E__0_1() const { return ___U3CtimeU3E__0_1; }
	inline float* get_address_of_U3CtimeU3E__0_1() { return &___U3CtimeU3E__0_1; }
	inline void set_U3CtimeU3E__0_1(float value)
	{
		___U3CtimeU3E__0_1 = value;
	}

	inline static int32_t get_offset_of_duration_2() { return static_cast<int32_t>(offsetof(U3CFadeLoadingScreenU3Ec__Iterator1_t1069699069, ___duration_2)); }
	inline float get_duration_2() const { return ___duration_2; }
	inline float* get_address_of_duration_2() { return &___duration_2; }
	inline void set_duration_2(float value)
	{
		___duration_2 = value;
	}

	inline static int32_t get_offset_of_targetValue_3() { return static_cast<int32_t>(offsetof(U3CFadeLoadingScreenU3Ec__Iterator1_t1069699069, ___targetValue_3)); }
	inline float get_targetValue_3() const { return ___targetValue_3; }
	inline float* get_address_of_targetValue_3() { return &___targetValue_3; }
	inline void set_targetValue_3(float value)
	{
		___targetValue_3 = value;
	}

	inline static int32_t get_offset_of_U24this_4() { return static_cast<int32_t>(offsetof(U3CFadeLoadingScreenU3Ec__Iterator1_t1069699069, ___U24this_4)); }
	inline SceneLoader_t4130533360 * get_U24this_4() const { return ___U24this_4; }
	inline SceneLoader_t4130533360 ** get_address_of_U24this_4() { return &___U24this_4; }
	inline void set_U24this_4(SceneLoader_t4130533360 * value)
	{
		___U24this_4 = value;
		Il2CppCodeGenWriteBarrier((&___U24this_4), value);
	}

	inline static int32_t get_offset_of_U24current_5() { return static_cast<int32_t>(offsetof(U3CFadeLoadingScreenU3Ec__Iterator1_t1069699069, ___U24current_5)); }
	inline RuntimeObject * get_U24current_5() const { return ___U24current_5; }
	inline RuntimeObject ** get_address_of_U24current_5() { return &___U24current_5; }
	inline void set_U24current_5(RuntimeObject * value)
	{
		___U24current_5 = value;
		Il2CppCodeGenWriteBarrier((&___U24current_5), value);
	}

	inline static int32_t get_offset_of_U24disposing_6() { return static_cast<int32_t>(offsetof(U3CFadeLoadingScreenU3Ec__Iterator1_t1069699069, ___U24disposing_6)); }
	inline bool get_U24disposing_6() const { return ___U24disposing_6; }
	inline bool* get_address_of_U24disposing_6() { return &___U24disposing_6; }
	inline void set_U24disposing_6(bool value)
	{
		___U24disposing_6 = value;
	}

	inline static int32_t get_offset_of_U24PC_7() { return static_cast<int32_t>(offsetof(U3CFadeLoadingScreenU3Ec__Iterator1_t1069699069, ___U24PC_7)); }
	inline int32_t get_U24PC_7() const { return ___U24PC_7; }
	inline int32_t* get_address_of_U24PC_7() { return &___U24PC_7; }
	inline void set_U24PC_7(int32_t value)
	{
		___U24PC_7 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // U3CFADELOADINGSCREENU3EC__ITERATOR1_T1069699069_H
#ifndef U3CSTARTLOADU3EC__ITERATOR0_T861601243_H
#define U3CSTARTLOADU3EC__ITERATOR0_T861601243_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// SceneLoader/<StartLoad>c__Iterator0
struct  U3CStartLoadU3Ec__Iterator0_t861601243  : public RuntimeObject
{
public:
	// SceneLoader SceneLoader/<StartLoad>c__Iterator0::$this
	SceneLoader_t4130533360 * ___U24this_0;
	// System.Object SceneLoader/<StartLoad>c__Iterator0::$current
	RuntimeObject * ___U24current_1;
	// System.Boolean SceneLoader/<StartLoad>c__Iterator0::$disposing
	bool ___U24disposing_2;
	// System.Int32 SceneLoader/<StartLoad>c__Iterator0::$PC
	int32_t ___U24PC_3;

public:
	inline static int32_t get_offset_of_U24this_0() { return static_cast<int32_t>(offsetof(U3CStartLoadU3Ec__Iterator0_t861601243, ___U24this_0)); }
	inline SceneLoader_t4130533360 * get_U24this_0() const { return ___U24this_0; }
	inline SceneLoader_t4130533360 ** get_address_of_U24this_0() { return &___U24this_0; }
	inline void set_U24this_0(SceneLoader_t4130533360 * value)
	{
		___U24this_0 = value;
		Il2CppCodeGenWriteBarrier((&___U24this_0), value);
	}

	inline static int32_t get_offset_of_U24current_1() { return static_cast<int32_t>(offsetof(U3CStartLoadU3Ec__Iterator0_t861601243, ___U24current_1)); }
	inline RuntimeObject * get_U24current_1() const { return ___U24current_1; }
	inline RuntimeObject ** get_address_of_U24current_1() { return &___U24current_1; }
	inline void set_U24current_1(RuntimeObject * value)
	{
		___U24current_1 = value;
		Il2CppCodeGenWriteBarrier((&___U24current_1), value);
	}

	inline static int32_t get_offset_of_U24disposing_2() { return static_cast<int32_t>(offsetof(U3CStartLoadU3Ec__Iterator0_t861601243, ___U24disposing_2)); }
	inline bool get_U24disposing_2() const { return ___U24disposing_2; }
	inline bool* get_address_of_U24disposing_2() { return &___U24disposing_2; }
	inline void set_U24disposing_2(bool value)
	{
		___U24disposing_2 = value;
	}

	inline static int32_t get_offset_of_U24PC_3() { return static_cast<int32_t>(offsetof(U3CStartLoadU3Ec__Iterator0_t861601243, ___U24PC_3)); }
	inline int32_t get_U24PC_3() const { return ___U24PC_3; }
	inline int32_t* get_address_of_U24PC_3() { return &___U24PC_3; }
	inline void set_U24PC_3(int32_t value)
	{
		___U24PC_3 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // U3CSTARTLOADU3EC__ITERATOR0_T861601243_H
#ifndef U3CFADELOADINGSCREENU3EC__ITERATOR1_T2470269376_H
#define U3CFADELOADINGSCREENU3EC__ITERATOR1_T2470269376_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// StartMenuManagerInputs/<FadeLoadingScreen>c__Iterator1
struct  U3CFadeLoadingScreenU3Ec__Iterator1_t2470269376  : public RuntimeObject
{
public:
	// System.Single StartMenuManagerInputs/<FadeLoadingScreen>c__Iterator1::<startValue>__0
	float ___U3CstartValueU3E__0_0;
	// System.Single StartMenuManagerInputs/<FadeLoadingScreen>c__Iterator1::<fadeTime>__0
	float ___U3CfadeTimeU3E__0_1;
	// System.Single StartMenuManagerInputs/<FadeLoadingScreen>c__Iterator1::duration
	float ___duration_2;
	// System.Single StartMenuManagerInputs/<FadeLoadingScreen>c__Iterator1::targetValue
	float ___targetValue_3;
	// StartMenuManagerInputs StartMenuManagerInputs/<FadeLoadingScreen>c__Iterator1::$this
	StartMenuManagerInputs_t1631812305 * ___U24this_4;
	// System.Object StartMenuManagerInputs/<FadeLoadingScreen>c__Iterator1::$current
	RuntimeObject * ___U24current_5;
	// System.Boolean StartMenuManagerInputs/<FadeLoadingScreen>c__Iterator1::$disposing
	bool ___U24disposing_6;
	// System.Int32 StartMenuManagerInputs/<FadeLoadingScreen>c__Iterator1::$PC
	int32_t ___U24PC_7;

public:
	inline static int32_t get_offset_of_U3CstartValueU3E__0_0() { return static_cast<int32_t>(offsetof(U3CFadeLoadingScreenU3Ec__Iterator1_t2470269376, ___U3CstartValueU3E__0_0)); }
	inline float get_U3CstartValueU3E__0_0() const { return ___U3CstartValueU3E__0_0; }
	inline float* get_address_of_U3CstartValueU3E__0_0() { return &___U3CstartValueU3E__0_0; }
	inline void set_U3CstartValueU3E__0_0(float value)
	{
		___U3CstartValueU3E__0_0 = value;
	}

	inline static int32_t get_offset_of_U3CfadeTimeU3E__0_1() { return static_cast<int32_t>(offsetof(U3CFadeLoadingScreenU3Ec__Iterator1_t2470269376, ___U3CfadeTimeU3E__0_1)); }
	inline float get_U3CfadeTimeU3E__0_1() const { return ___U3CfadeTimeU3E__0_1; }
	inline float* get_address_of_U3CfadeTimeU3E__0_1() { return &___U3CfadeTimeU3E__0_1; }
	inline void set_U3CfadeTimeU3E__0_1(float value)
	{
		___U3CfadeTimeU3E__0_1 = value;
	}

	inline static int32_t get_offset_of_duration_2() { return static_cast<int32_t>(offsetof(U3CFadeLoadingScreenU3Ec__Iterator1_t2470269376, ___duration_2)); }
	inline float get_duration_2() const { return ___duration_2; }
	inline float* get_address_of_duration_2() { return &___duration_2; }
	inline void set_duration_2(float value)
	{
		___duration_2 = value;
	}

	inline static int32_t get_offset_of_targetValue_3() { return static_cast<int32_t>(offsetof(U3CFadeLoadingScreenU3Ec__Iterator1_t2470269376, ___targetValue_3)); }
	inline float get_targetValue_3() const { return ___targetValue_3; }
	inline float* get_address_of_targetValue_3() { return &___targetValue_3; }
	inline void set_targetValue_3(float value)
	{
		___targetValue_3 = value;
	}

	inline static int32_t get_offset_of_U24this_4() { return static_cast<int32_t>(offsetof(U3CFadeLoadingScreenU3Ec__Iterator1_t2470269376, ___U24this_4)); }
	inline StartMenuManagerInputs_t1631812305 * get_U24this_4() const { return ___U24this_4; }
	inline StartMenuManagerInputs_t1631812305 ** get_address_of_U24this_4() { return &___U24this_4; }
	inline void set_U24this_4(StartMenuManagerInputs_t1631812305 * value)
	{
		___U24this_4 = value;
		Il2CppCodeGenWriteBarrier((&___U24this_4), value);
	}

	inline static int32_t get_offset_of_U24current_5() { return static_cast<int32_t>(offsetof(U3CFadeLoadingScreenU3Ec__Iterator1_t2470269376, ___U24current_5)); }
	inline RuntimeObject * get_U24current_5() const { return ___U24current_5; }
	inline RuntimeObject ** get_address_of_U24current_5() { return &___U24current_5; }
	inline void set_U24current_5(RuntimeObject * value)
	{
		___U24current_5 = value;
		Il2CppCodeGenWriteBarrier((&___U24current_5), value);
	}

	inline static int32_t get_offset_of_U24disposing_6() { return static_cast<int32_t>(offsetof(U3CFadeLoadingScreenU3Ec__Iterator1_t2470269376, ___U24disposing_6)); }
	inline bool get_U24disposing_6() const { return ___U24disposing_6; }
	inline bool* get_address_of_U24disposing_6() { return &___U24disposing_6; }
	inline void set_U24disposing_6(bool value)
	{
		___U24disposing_6 = value;
	}

	inline static int32_t get_offset_of_U24PC_7() { return static_cast<int32_t>(offsetof(U3CFadeLoadingScreenU3Ec__Iterator1_t2470269376, ___U24PC_7)); }
	inline int32_t get_U24PC_7() const { return ___U24PC_7; }
	inline int32_t* get_address_of_U24PC_7() { return &___U24PC_7; }
	inline void set_U24PC_7(int32_t value)
	{
		___U24PC_7 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // U3CFADELOADINGSCREENU3EC__ITERATOR1_T2470269376_H
#ifndef U3CFADESCREENU3EC__ITERATOR2_T2843304175_H
#define U3CFADESCREENU3EC__ITERATOR2_T2843304175_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// StartMenuManagerInputs/<FadeScreen>c__Iterator2
struct  U3CFadeScreenU3Ec__Iterator2_t2843304175  : public RuntimeObject
{
public:
	// System.Single StartMenuManagerInputs/<FadeScreen>c__Iterator2::<startValue>__0
	float ___U3CstartValueU3E__0_0;
	// System.Single StartMenuManagerInputs/<FadeScreen>c__Iterator2::<fadeTime>__0
	float ___U3CfadeTimeU3E__0_1;
	// System.Single StartMenuManagerInputs/<FadeScreen>c__Iterator2::duration
	float ___duration_2;
	// System.Single StartMenuManagerInputs/<FadeScreen>c__Iterator2::targetValue
	float ___targetValue_3;
	// StartMenuManagerInputs StartMenuManagerInputs/<FadeScreen>c__Iterator2::$this
	StartMenuManagerInputs_t1631812305 * ___U24this_4;
	// System.Object StartMenuManagerInputs/<FadeScreen>c__Iterator2::$current
	RuntimeObject * ___U24current_5;
	// System.Boolean StartMenuManagerInputs/<FadeScreen>c__Iterator2::$disposing
	bool ___U24disposing_6;
	// System.Int32 StartMenuManagerInputs/<FadeScreen>c__Iterator2::$PC
	int32_t ___U24PC_7;

public:
	inline static int32_t get_offset_of_U3CstartValueU3E__0_0() { return static_cast<int32_t>(offsetof(U3CFadeScreenU3Ec__Iterator2_t2843304175, ___U3CstartValueU3E__0_0)); }
	inline float get_U3CstartValueU3E__0_0() const { return ___U3CstartValueU3E__0_0; }
	inline float* get_address_of_U3CstartValueU3E__0_0() { return &___U3CstartValueU3E__0_0; }
	inline void set_U3CstartValueU3E__0_0(float value)
	{
		___U3CstartValueU3E__0_0 = value;
	}

	inline static int32_t get_offset_of_U3CfadeTimeU3E__0_1() { return static_cast<int32_t>(offsetof(U3CFadeScreenU3Ec__Iterator2_t2843304175, ___U3CfadeTimeU3E__0_1)); }
	inline float get_U3CfadeTimeU3E__0_1() const { return ___U3CfadeTimeU3E__0_1; }
	inline float* get_address_of_U3CfadeTimeU3E__0_1() { return &___U3CfadeTimeU3E__0_1; }
	inline void set_U3CfadeTimeU3E__0_1(float value)
	{
		___U3CfadeTimeU3E__0_1 = value;
	}

	inline static int32_t get_offset_of_duration_2() { return static_cast<int32_t>(offsetof(U3CFadeScreenU3Ec__Iterator2_t2843304175, ___duration_2)); }
	inline float get_duration_2() const { return ___duration_2; }
	inline float* get_address_of_duration_2() { return &___duration_2; }
	inline void set_duration_2(float value)
	{
		___duration_2 = value;
	}

	inline static int32_t get_offset_of_targetValue_3() { return static_cast<int32_t>(offsetof(U3CFadeScreenU3Ec__Iterator2_t2843304175, ___targetValue_3)); }
	inline float get_targetValue_3() const { return ___targetValue_3; }
	inline float* get_address_of_targetValue_3() { return &___targetValue_3; }
	inline void set_targetValue_3(float value)
	{
		___targetValue_3 = value;
	}

	inline static int32_t get_offset_of_U24this_4() { return static_cast<int32_t>(offsetof(U3CFadeScreenU3Ec__Iterator2_t2843304175, ___U24this_4)); }
	inline StartMenuManagerInputs_t1631812305 * get_U24this_4() const { return ___U24this_4; }
	inline StartMenuManagerInputs_t1631812305 ** get_address_of_U24this_4() { return &___U24this_4; }
	inline void set_U24this_4(StartMenuManagerInputs_t1631812305 * value)
	{
		___U24this_4 = value;
		Il2CppCodeGenWriteBarrier((&___U24this_4), value);
	}

	inline static int32_t get_offset_of_U24current_5() { return static_cast<int32_t>(offsetof(U3CFadeScreenU3Ec__Iterator2_t2843304175, ___U24current_5)); }
	inline RuntimeObject * get_U24current_5() const { return ___U24current_5; }
	inline RuntimeObject ** get_address_of_U24current_5() { return &___U24current_5; }
	inline void set_U24current_5(RuntimeObject * value)
	{
		___U24current_5 = value;
		Il2CppCodeGenWriteBarrier((&___U24current_5), value);
	}

	inline static int32_t get_offset_of_U24disposing_6() { return static_cast<int32_t>(offsetof(U3CFadeScreenU3Ec__Iterator2_t2843304175, ___U24disposing_6)); }
	inline bool get_U24disposing_6() const { return ___U24disposing_6; }
	inline bool* get_address_of_U24disposing_6() { return &___U24disposing_6; }
	inline void set_U24disposing_6(bool value)
	{
		___U24disposing_6 = value;
	}

	inline static int32_t get_offset_of_U24PC_7() { return static_cast<int32_t>(offsetof(U3CFadeScreenU3Ec__Iterator2_t2843304175, ___U24PC_7)); }
	inline int32_t get_U24PC_7() const { return ___U24PC_7; }
	inline int32_t* get_address_of_U24PC_7() { return &___U24PC_7; }
	inline void set_U24PC_7(int32_t value)
	{
		___U24PC_7 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // U3CFADESCREENU3EC__ITERATOR2_T2843304175_H
#ifndef U3CSTARTLOADU3EC__ITERATOR0_T4179645091_H
#define U3CSTARTLOADU3EC__ITERATOR0_T4179645091_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// StartMenuManagerInputs/<StartLoad>c__Iterator0
struct  U3CStartLoadU3Ec__Iterator0_t4179645091  : public RuntimeObject
{
public:
	// StartMenuManagerInputs StartMenuManagerInputs/<StartLoad>c__Iterator0::$this
	StartMenuManagerInputs_t1631812305 * ___U24this_0;
	// System.Object StartMenuManagerInputs/<StartLoad>c__Iterator0::$current
	RuntimeObject * ___U24current_1;
	// System.Boolean StartMenuManagerInputs/<StartLoad>c__Iterator0::$disposing
	bool ___U24disposing_2;
	// System.Int32 StartMenuManagerInputs/<StartLoad>c__Iterator0::$PC
	int32_t ___U24PC_3;

public:
	inline static int32_t get_offset_of_U24this_0() { return static_cast<int32_t>(offsetof(U3CStartLoadU3Ec__Iterator0_t4179645091, ___U24this_0)); }
	inline StartMenuManagerInputs_t1631812305 * get_U24this_0() const { return ___U24this_0; }
	inline StartMenuManagerInputs_t1631812305 ** get_address_of_U24this_0() { return &___U24this_0; }
	inline void set_U24this_0(StartMenuManagerInputs_t1631812305 * value)
	{
		___U24this_0 = value;
		Il2CppCodeGenWriteBarrier((&___U24this_0), value);
	}

	inline static int32_t get_offset_of_U24current_1() { return static_cast<int32_t>(offsetof(U3CStartLoadU3Ec__Iterator0_t4179645091, ___U24current_1)); }
	inline RuntimeObject * get_U24current_1() const { return ___U24current_1; }
	inline RuntimeObject ** get_address_of_U24current_1() { return &___U24current_1; }
	inline void set_U24current_1(RuntimeObject * value)
	{
		___U24current_1 = value;
		Il2CppCodeGenWriteBarrier((&___U24current_1), value);
	}

	inline static int32_t get_offset_of_U24disposing_2() { return static_cast<int32_t>(offsetof(U3CStartLoadU3Ec__Iterator0_t4179645091, ___U24disposing_2)); }
	inline bool get_U24disposing_2() const { return ___U24disposing_2; }
	inline bool* get_address_of_U24disposing_2() { return &___U24disposing_2; }
	inline void set_U24disposing_2(bool value)
	{
		___U24disposing_2 = value;
	}

	inline static int32_t get_offset_of_U24PC_3() { return static_cast<int32_t>(offsetof(U3CStartLoadU3Ec__Iterator0_t4179645091, ___U24PC_3)); }
	inline int32_t get_U24PC_3() const { return ___U24PC_3; }
	inline int32_t* get_address_of_U24PC_3() { return &___U24PC_3; }
	inline void set_U24PC_3(int32_t value)
	{
		___U24PC_3 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // U3CSTARTLOADU3EC__ITERATOR0_T4179645091_H
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
#ifndef U3CDIALOGHANDLERU3EC__ITERATOR2_T3551168443_H
#define U3CDIALOGHANDLERU3EC__ITERATOR2_T3551168443_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// TitleSaveManagerInputs/<DialogHandler>c__Iterator2
struct  U3CDialogHandlerU3Ec__Iterator2_t3551168443  : public RuntimeObject
{
public:
	// System.Single TitleSaveManagerInputs/<DialogHandler>c__Iterator2::<duration>__0
	float ___U3CdurationU3E__0_0;
	// System.Single TitleSaveManagerInputs/<DialogHandler>c__Iterator2::<time>__0
	float ___U3CtimeU3E__0_1;
	// TitleSaveManagerInputs TitleSaveManagerInputs/<DialogHandler>c__Iterator2::$this
	TitleSaveManagerInputs_t2244120510 * ___U24this_2;
	// System.Object TitleSaveManagerInputs/<DialogHandler>c__Iterator2::$current
	RuntimeObject * ___U24current_3;
	// System.Boolean TitleSaveManagerInputs/<DialogHandler>c__Iterator2::$disposing
	bool ___U24disposing_4;
	// System.Int32 TitleSaveManagerInputs/<DialogHandler>c__Iterator2::$PC
	int32_t ___U24PC_5;

public:
	inline static int32_t get_offset_of_U3CdurationU3E__0_0() { return static_cast<int32_t>(offsetof(U3CDialogHandlerU3Ec__Iterator2_t3551168443, ___U3CdurationU3E__0_0)); }
	inline float get_U3CdurationU3E__0_0() const { return ___U3CdurationU3E__0_0; }
	inline float* get_address_of_U3CdurationU3E__0_0() { return &___U3CdurationU3E__0_0; }
	inline void set_U3CdurationU3E__0_0(float value)
	{
		___U3CdurationU3E__0_0 = value;
	}

	inline static int32_t get_offset_of_U3CtimeU3E__0_1() { return static_cast<int32_t>(offsetof(U3CDialogHandlerU3Ec__Iterator2_t3551168443, ___U3CtimeU3E__0_1)); }
	inline float get_U3CtimeU3E__0_1() const { return ___U3CtimeU3E__0_1; }
	inline float* get_address_of_U3CtimeU3E__0_1() { return &___U3CtimeU3E__0_1; }
	inline void set_U3CtimeU3E__0_1(float value)
	{
		___U3CtimeU3E__0_1 = value;
	}

	inline static int32_t get_offset_of_U24this_2() { return static_cast<int32_t>(offsetof(U3CDialogHandlerU3Ec__Iterator2_t3551168443, ___U24this_2)); }
	inline TitleSaveManagerInputs_t2244120510 * get_U24this_2() const { return ___U24this_2; }
	inline TitleSaveManagerInputs_t2244120510 ** get_address_of_U24this_2() { return &___U24this_2; }
	inline void set_U24this_2(TitleSaveManagerInputs_t2244120510 * value)
	{
		___U24this_2 = value;
		Il2CppCodeGenWriteBarrier((&___U24this_2), value);
	}

	inline static int32_t get_offset_of_U24current_3() { return static_cast<int32_t>(offsetof(U3CDialogHandlerU3Ec__Iterator2_t3551168443, ___U24current_3)); }
	inline RuntimeObject * get_U24current_3() const { return ___U24current_3; }
	inline RuntimeObject ** get_address_of_U24current_3() { return &___U24current_3; }
	inline void set_U24current_3(RuntimeObject * value)
	{
		___U24current_3 = value;
		Il2CppCodeGenWriteBarrier((&___U24current_3), value);
	}

	inline static int32_t get_offset_of_U24disposing_4() { return static_cast<int32_t>(offsetof(U3CDialogHandlerU3Ec__Iterator2_t3551168443, ___U24disposing_4)); }
	inline bool get_U24disposing_4() const { return ___U24disposing_4; }
	inline bool* get_address_of_U24disposing_4() { return &___U24disposing_4; }
	inline void set_U24disposing_4(bool value)
	{
		___U24disposing_4 = value;
	}

	inline static int32_t get_offset_of_U24PC_5() { return static_cast<int32_t>(offsetof(U3CDialogHandlerU3Ec__Iterator2_t3551168443, ___U24PC_5)); }
	inline int32_t get_U24PC_5() const { return ___U24PC_5; }
	inline int32_t* get_address_of_U24PC_5() { return &___U24PC_5; }
	inline void set_U24PC_5(int32_t value)
	{
		___U24PC_5 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // U3CDIALOGHANDLERU3EC__ITERATOR2_T3551168443_H
#ifndef U3CFADELOADINGSCREENU3EC__ITERATOR1_T2284539295_H
#define U3CFADELOADINGSCREENU3EC__ITERATOR1_T2284539295_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// TitleSaveManagerInputs/<FadeLoadingScreen>c__Iterator1
struct  U3CFadeLoadingScreenU3Ec__Iterator1_t2284539295  : public RuntimeObject
{
public:
	// System.Single TitleSaveManagerInputs/<FadeLoadingScreen>c__Iterator1::<startValue>__0
	float ___U3CstartValueU3E__0_0;
	// System.Single TitleSaveManagerInputs/<FadeLoadingScreen>c__Iterator1::<time>__0
	float ___U3CtimeU3E__0_1;
	// System.Single TitleSaveManagerInputs/<FadeLoadingScreen>c__Iterator1::duration
	float ___duration_2;
	// System.Single TitleSaveManagerInputs/<FadeLoadingScreen>c__Iterator1::targetValue
	float ___targetValue_3;
	// TitleSaveManagerInputs TitleSaveManagerInputs/<FadeLoadingScreen>c__Iterator1::$this
	TitleSaveManagerInputs_t2244120510 * ___U24this_4;
	// System.Object TitleSaveManagerInputs/<FadeLoadingScreen>c__Iterator1::$current
	RuntimeObject * ___U24current_5;
	// System.Boolean TitleSaveManagerInputs/<FadeLoadingScreen>c__Iterator1::$disposing
	bool ___U24disposing_6;
	// System.Int32 TitleSaveManagerInputs/<FadeLoadingScreen>c__Iterator1::$PC
	int32_t ___U24PC_7;

public:
	inline static int32_t get_offset_of_U3CstartValueU3E__0_0() { return static_cast<int32_t>(offsetof(U3CFadeLoadingScreenU3Ec__Iterator1_t2284539295, ___U3CstartValueU3E__0_0)); }
	inline float get_U3CstartValueU3E__0_0() const { return ___U3CstartValueU3E__0_0; }
	inline float* get_address_of_U3CstartValueU3E__0_0() { return &___U3CstartValueU3E__0_0; }
	inline void set_U3CstartValueU3E__0_0(float value)
	{
		___U3CstartValueU3E__0_0 = value;
	}

	inline static int32_t get_offset_of_U3CtimeU3E__0_1() { return static_cast<int32_t>(offsetof(U3CFadeLoadingScreenU3Ec__Iterator1_t2284539295, ___U3CtimeU3E__0_1)); }
	inline float get_U3CtimeU3E__0_1() const { return ___U3CtimeU3E__0_1; }
	inline float* get_address_of_U3CtimeU3E__0_1() { return &___U3CtimeU3E__0_1; }
	inline void set_U3CtimeU3E__0_1(float value)
	{
		___U3CtimeU3E__0_1 = value;
	}

	inline static int32_t get_offset_of_duration_2() { return static_cast<int32_t>(offsetof(U3CFadeLoadingScreenU3Ec__Iterator1_t2284539295, ___duration_2)); }
	inline float get_duration_2() const { return ___duration_2; }
	inline float* get_address_of_duration_2() { return &___duration_2; }
	inline void set_duration_2(float value)
	{
		___duration_2 = value;
	}

	inline static int32_t get_offset_of_targetValue_3() { return static_cast<int32_t>(offsetof(U3CFadeLoadingScreenU3Ec__Iterator1_t2284539295, ___targetValue_3)); }
	inline float get_targetValue_3() const { return ___targetValue_3; }
	inline float* get_address_of_targetValue_3() { return &___targetValue_3; }
	inline void set_targetValue_3(float value)
	{
		___targetValue_3 = value;
	}

	inline static int32_t get_offset_of_U24this_4() { return static_cast<int32_t>(offsetof(U3CFadeLoadingScreenU3Ec__Iterator1_t2284539295, ___U24this_4)); }
	inline TitleSaveManagerInputs_t2244120510 * get_U24this_4() const { return ___U24this_4; }
	inline TitleSaveManagerInputs_t2244120510 ** get_address_of_U24this_4() { return &___U24this_4; }
	inline void set_U24this_4(TitleSaveManagerInputs_t2244120510 * value)
	{
		___U24this_4 = value;
		Il2CppCodeGenWriteBarrier((&___U24this_4), value);
	}

	inline static int32_t get_offset_of_U24current_5() { return static_cast<int32_t>(offsetof(U3CFadeLoadingScreenU3Ec__Iterator1_t2284539295, ___U24current_5)); }
	inline RuntimeObject * get_U24current_5() const { return ___U24current_5; }
	inline RuntimeObject ** get_address_of_U24current_5() { return &___U24current_5; }
	inline void set_U24current_5(RuntimeObject * value)
	{
		___U24current_5 = value;
		Il2CppCodeGenWriteBarrier((&___U24current_5), value);
	}

	inline static int32_t get_offset_of_U24disposing_6() { return static_cast<int32_t>(offsetof(U3CFadeLoadingScreenU3Ec__Iterator1_t2284539295, ___U24disposing_6)); }
	inline bool get_U24disposing_6() const { return ___U24disposing_6; }
	inline bool* get_address_of_U24disposing_6() { return &___U24disposing_6; }
	inline void set_U24disposing_6(bool value)
	{
		___U24disposing_6 = value;
	}

	inline static int32_t get_offset_of_U24PC_7() { return static_cast<int32_t>(offsetof(U3CFadeLoadingScreenU3Ec__Iterator1_t2284539295, ___U24PC_7)); }
	inline int32_t get_U24PC_7() const { return ___U24PC_7; }
	inline int32_t* get_address_of_U24PC_7() { return &___U24PC_7; }
	inline void set_U24PC_7(int32_t value)
	{
		___U24PC_7 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // U3CFADELOADINGSCREENU3EC__ITERATOR1_T2284539295_H
#ifndef U3CSTARTLOADU3EC__ITERATOR0_T1375117951_H
#define U3CSTARTLOADU3EC__ITERATOR0_T1375117951_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// TitleSaveManagerInputs/<StartLoad>c__Iterator0
struct  U3CStartLoadU3Ec__Iterator0_t1375117951  : public RuntimeObject
{
public:
	// TitleSaveManagerInputs TitleSaveManagerInputs/<StartLoad>c__Iterator0::$this
	TitleSaveManagerInputs_t2244120510 * ___U24this_0;
	// System.Object TitleSaveManagerInputs/<StartLoad>c__Iterator0::$current
	RuntimeObject * ___U24current_1;
	// System.Boolean TitleSaveManagerInputs/<StartLoad>c__Iterator0::$disposing
	bool ___U24disposing_2;
	// System.Int32 TitleSaveManagerInputs/<StartLoad>c__Iterator0::$PC
	int32_t ___U24PC_3;

public:
	inline static int32_t get_offset_of_U24this_0() { return static_cast<int32_t>(offsetof(U3CStartLoadU3Ec__Iterator0_t1375117951, ___U24this_0)); }
	inline TitleSaveManagerInputs_t2244120510 * get_U24this_0() const { return ___U24this_0; }
	inline TitleSaveManagerInputs_t2244120510 ** get_address_of_U24this_0() { return &___U24this_0; }
	inline void set_U24this_0(TitleSaveManagerInputs_t2244120510 * value)
	{
		___U24this_0 = value;
		Il2CppCodeGenWriteBarrier((&___U24this_0), value);
	}

	inline static int32_t get_offset_of_U24current_1() { return static_cast<int32_t>(offsetof(U3CStartLoadU3Ec__Iterator0_t1375117951, ___U24current_1)); }
	inline RuntimeObject * get_U24current_1() const { return ___U24current_1; }
	inline RuntimeObject ** get_address_of_U24current_1() { return &___U24current_1; }
	inline void set_U24current_1(RuntimeObject * value)
	{
		___U24current_1 = value;
		Il2CppCodeGenWriteBarrier((&___U24current_1), value);
	}

	inline static int32_t get_offset_of_U24disposing_2() { return static_cast<int32_t>(offsetof(U3CStartLoadU3Ec__Iterator0_t1375117951, ___U24disposing_2)); }
	inline bool get_U24disposing_2() const { return ___U24disposing_2; }
	inline bool* get_address_of_U24disposing_2() { return &___U24disposing_2; }
	inline void set_U24disposing_2(bool value)
	{
		___U24disposing_2 = value;
	}

	inline static int32_t get_offset_of_U24PC_3() { return static_cast<int32_t>(offsetof(U3CStartLoadU3Ec__Iterator0_t1375117951, ___U24PC_3)); }
	inline int32_t get_U24PC_3() const { return ___U24PC_3; }
	inline int32_t* get_address_of_U24PC_3() { return &___U24PC_3; }
	inline void set_U24PC_3(int32_t value)
	{
		___U24PC_3 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // U3CSTARTLOADU3EC__ITERATOR0_T1375117951_H
#ifndef U3CDELAYU3EC__ITERATOR0_T2743924410_H
#define U3CDELAYU3EC__ITERATOR0_T2743924410_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// Title_Animator/<Delay>c__Iterator0
struct  U3CDelayU3Ec__Iterator0_t2743924410  : public RuntimeObject
{
public:
	// System.Single Title_Animator/<Delay>c__Iterator0::<time>__0
	float ___U3CtimeU3E__0_0;
	// System.Single Title_Animator/<Delay>c__Iterator0::duration
	float ___duration_1;
	// Title_Animator Title_Animator/<Delay>c__Iterator0::$this
	Title_Animator_t1706872800 * ___U24this_2;
	// System.Object Title_Animator/<Delay>c__Iterator0::$current
	RuntimeObject * ___U24current_3;
	// System.Boolean Title_Animator/<Delay>c__Iterator0::$disposing
	bool ___U24disposing_4;
	// System.Int32 Title_Animator/<Delay>c__Iterator0::$PC
	int32_t ___U24PC_5;

public:
	inline static int32_t get_offset_of_U3CtimeU3E__0_0() { return static_cast<int32_t>(offsetof(U3CDelayU3Ec__Iterator0_t2743924410, ___U3CtimeU3E__0_0)); }
	inline float get_U3CtimeU3E__0_0() const { return ___U3CtimeU3E__0_0; }
	inline float* get_address_of_U3CtimeU3E__0_0() { return &___U3CtimeU3E__0_0; }
	inline void set_U3CtimeU3E__0_0(float value)
	{
		___U3CtimeU3E__0_0 = value;
	}

	inline static int32_t get_offset_of_duration_1() { return static_cast<int32_t>(offsetof(U3CDelayU3Ec__Iterator0_t2743924410, ___duration_1)); }
	inline float get_duration_1() const { return ___duration_1; }
	inline float* get_address_of_duration_1() { return &___duration_1; }
	inline void set_duration_1(float value)
	{
		___duration_1 = value;
	}

	inline static int32_t get_offset_of_U24this_2() { return static_cast<int32_t>(offsetof(U3CDelayU3Ec__Iterator0_t2743924410, ___U24this_2)); }
	inline Title_Animator_t1706872800 * get_U24this_2() const { return ___U24this_2; }
	inline Title_Animator_t1706872800 ** get_address_of_U24this_2() { return &___U24this_2; }
	inline void set_U24this_2(Title_Animator_t1706872800 * value)
	{
		___U24this_2 = value;
		Il2CppCodeGenWriteBarrier((&___U24this_2), value);
	}

	inline static int32_t get_offset_of_U24current_3() { return static_cast<int32_t>(offsetof(U3CDelayU3Ec__Iterator0_t2743924410, ___U24current_3)); }
	inline RuntimeObject * get_U24current_3() const { return ___U24current_3; }
	inline RuntimeObject ** get_address_of_U24current_3() { return &___U24current_3; }
	inline void set_U24current_3(RuntimeObject * value)
	{
		___U24current_3 = value;
		Il2CppCodeGenWriteBarrier((&___U24current_3), value);
	}

	inline static int32_t get_offset_of_U24disposing_4() { return static_cast<int32_t>(offsetof(U3CDelayU3Ec__Iterator0_t2743924410, ___U24disposing_4)); }
	inline bool get_U24disposing_4() const { return ___U24disposing_4; }
	inline bool* get_address_of_U24disposing_4() { return &___U24disposing_4; }
	inline void set_U24disposing_4(bool value)
	{
		___U24disposing_4 = value;
	}

	inline static int32_t get_offset_of_U24PC_5() { return static_cast<int32_t>(offsetof(U3CDelayU3Ec__Iterator0_t2743924410, ___U24PC_5)); }
	inline int32_t get_U24PC_5() const { return ___U24PC_5; }
	inline int32_t* get_address_of_U24PC_5() { return &___U24PC_5; }
	inline void set_U24PC_5(int32_t value)
	{
		___U24PC_5 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // U3CDELAYU3EC__ITERATOR0_T2743924410_H
#ifndef U3CWIPEU3EC__ITERATOR1_T1479192308_H
#define U3CWIPEU3EC__ITERATOR1_T1479192308_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// Title_Animator/<Wipe>c__Iterator1
struct  U3CWipeU3Ec__Iterator1_t1479192308  : public RuntimeObject
{
public:
	// System.Single Title_Animator/<Wipe>c__Iterator1::<time>__0
	float ___U3CtimeU3E__0_0;
	// System.Single Title_Animator/<Wipe>c__Iterator1::duration
	float ___duration_1;
	// System.Single Title_Animator/<Wipe>c__Iterator1::startValue
	float ___startValue_2;
	// System.Single Title_Animator/<Wipe>c__Iterator1::endValue
	float ___endValue_3;
	// Title_Animator Title_Animator/<Wipe>c__Iterator1::$this
	Title_Animator_t1706872800 * ___U24this_4;
	// System.Object Title_Animator/<Wipe>c__Iterator1::$current
	RuntimeObject * ___U24current_5;
	// System.Boolean Title_Animator/<Wipe>c__Iterator1::$disposing
	bool ___U24disposing_6;
	// System.Int32 Title_Animator/<Wipe>c__Iterator1::$PC
	int32_t ___U24PC_7;

public:
	inline static int32_t get_offset_of_U3CtimeU3E__0_0() { return static_cast<int32_t>(offsetof(U3CWipeU3Ec__Iterator1_t1479192308, ___U3CtimeU3E__0_0)); }
	inline float get_U3CtimeU3E__0_0() const { return ___U3CtimeU3E__0_0; }
	inline float* get_address_of_U3CtimeU3E__0_0() { return &___U3CtimeU3E__0_0; }
	inline void set_U3CtimeU3E__0_0(float value)
	{
		___U3CtimeU3E__0_0 = value;
	}

	inline static int32_t get_offset_of_duration_1() { return static_cast<int32_t>(offsetof(U3CWipeU3Ec__Iterator1_t1479192308, ___duration_1)); }
	inline float get_duration_1() const { return ___duration_1; }
	inline float* get_address_of_duration_1() { return &___duration_1; }
	inline void set_duration_1(float value)
	{
		___duration_1 = value;
	}

	inline static int32_t get_offset_of_startValue_2() { return static_cast<int32_t>(offsetof(U3CWipeU3Ec__Iterator1_t1479192308, ___startValue_2)); }
	inline float get_startValue_2() const { return ___startValue_2; }
	inline float* get_address_of_startValue_2() { return &___startValue_2; }
	inline void set_startValue_2(float value)
	{
		___startValue_2 = value;
	}

	inline static int32_t get_offset_of_endValue_3() { return static_cast<int32_t>(offsetof(U3CWipeU3Ec__Iterator1_t1479192308, ___endValue_3)); }
	inline float get_endValue_3() const { return ___endValue_3; }
	inline float* get_address_of_endValue_3() { return &___endValue_3; }
	inline void set_endValue_3(float value)
	{
		___endValue_3 = value;
	}

	inline static int32_t get_offset_of_U24this_4() { return static_cast<int32_t>(offsetof(U3CWipeU3Ec__Iterator1_t1479192308, ___U24this_4)); }
	inline Title_Animator_t1706872800 * get_U24this_4() const { return ___U24this_4; }
	inline Title_Animator_t1706872800 ** get_address_of_U24this_4() { return &___U24this_4; }
	inline void set_U24this_4(Title_Animator_t1706872800 * value)
	{
		___U24this_4 = value;
		Il2CppCodeGenWriteBarrier((&___U24this_4), value);
	}

	inline static int32_t get_offset_of_U24current_5() { return static_cast<int32_t>(offsetof(U3CWipeU3Ec__Iterator1_t1479192308, ___U24current_5)); }
	inline RuntimeObject * get_U24current_5() const { return ___U24current_5; }
	inline RuntimeObject ** get_address_of_U24current_5() { return &___U24current_5; }
	inline void set_U24current_5(RuntimeObject * value)
	{
		___U24current_5 = value;
		Il2CppCodeGenWriteBarrier((&___U24current_5), value);
	}

	inline static int32_t get_offset_of_U24disposing_6() { return static_cast<int32_t>(offsetof(U3CWipeU3Ec__Iterator1_t1479192308, ___U24disposing_6)); }
	inline bool get_U24disposing_6() const { return ___U24disposing_6; }
	inline bool* get_address_of_U24disposing_6() { return &___U24disposing_6; }
	inline void set_U24disposing_6(bool value)
	{
		___U24disposing_6 = value;
	}

	inline static int32_t get_offset_of_U24PC_7() { return static_cast<int32_t>(offsetof(U3CWipeU3Ec__Iterator1_t1479192308, ___U24PC_7)); }
	inline int32_t get_U24PC_7() const { return ___U24PC_7; }
	inline int32_t* get_address_of_U24PC_7() { return &___U24PC_7; }
	inline void set_U24PC_7(int32_t value)
	{
		___U24PC_7 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // U3CWIPEU3EC__ITERATOR1_T1479192308_H
#ifndef U3CFADESCREENU3EC__ITERATOR0_T3191765439_H
#define U3CFADESCREENU3EC__ITERATOR0_T3191765439_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// Title_Menu_Manager/<FadeScreen>c__Iterator0
struct  U3CFadeScreenU3Ec__Iterator0_t3191765439  : public RuntimeObject
{
public:
	// System.Single Title_Menu_Manager/<FadeScreen>c__Iterator0::<fadeTime>__0
	float ___U3CfadeTimeU3E__0_0;
	// System.Single Title_Menu_Manager/<FadeScreen>c__Iterator0::duration
	float ___duration_1;
	// System.Single Title_Menu_Manager/<FadeScreen>c__Iterator0::startValue
	float ___startValue_2;
	// System.Single Title_Menu_Manager/<FadeScreen>c__Iterator0::targetValue
	float ___targetValue_3;
	// Title_Menu_Manager Title_Menu_Manager/<FadeScreen>c__Iterator0::$this
	Title_Menu_Manager_t3788367697 * ___U24this_4;
	// System.Object Title_Menu_Manager/<FadeScreen>c__Iterator0::$current
	RuntimeObject * ___U24current_5;
	// System.Boolean Title_Menu_Manager/<FadeScreen>c__Iterator0::$disposing
	bool ___U24disposing_6;
	// System.Int32 Title_Menu_Manager/<FadeScreen>c__Iterator0::$PC
	int32_t ___U24PC_7;

public:
	inline static int32_t get_offset_of_U3CfadeTimeU3E__0_0() { return static_cast<int32_t>(offsetof(U3CFadeScreenU3Ec__Iterator0_t3191765439, ___U3CfadeTimeU3E__0_0)); }
	inline float get_U3CfadeTimeU3E__0_0() const { return ___U3CfadeTimeU3E__0_0; }
	inline float* get_address_of_U3CfadeTimeU3E__0_0() { return &___U3CfadeTimeU3E__0_0; }
	inline void set_U3CfadeTimeU3E__0_0(float value)
	{
		___U3CfadeTimeU3E__0_0 = value;
	}

	inline static int32_t get_offset_of_duration_1() { return static_cast<int32_t>(offsetof(U3CFadeScreenU3Ec__Iterator0_t3191765439, ___duration_1)); }
	inline float get_duration_1() const { return ___duration_1; }
	inline float* get_address_of_duration_1() { return &___duration_1; }
	inline void set_duration_1(float value)
	{
		___duration_1 = value;
	}

	inline static int32_t get_offset_of_startValue_2() { return static_cast<int32_t>(offsetof(U3CFadeScreenU3Ec__Iterator0_t3191765439, ___startValue_2)); }
	inline float get_startValue_2() const { return ___startValue_2; }
	inline float* get_address_of_startValue_2() { return &___startValue_2; }
	inline void set_startValue_2(float value)
	{
		___startValue_2 = value;
	}

	inline static int32_t get_offset_of_targetValue_3() { return static_cast<int32_t>(offsetof(U3CFadeScreenU3Ec__Iterator0_t3191765439, ___targetValue_3)); }
	inline float get_targetValue_3() const { return ___targetValue_3; }
	inline float* get_address_of_targetValue_3() { return &___targetValue_3; }
	inline void set_targetValue_3(float value)
	{
		___targetValue_3 = value;
	}

	inline static int32_t get_offset_of_U24this_4() { return static_cast<int32_t>(offsetof(U3CFadeScreenU3Ec__Iterator0_t3191765439, ___U24this_4)); }
	inline Title_Menu_Manager_t3788367697 * get_U24this_4() const { return ___U24this_4; }
	inline Title_Menu_Manager_t3788367697 ** get_address_of_U24this_4() { return &___U24this_4; }
	inline void set_U24this_4(Title_Menu_Manager_t3788367697 * value)
	{
		___U24this_4 = value;
		Il2CppCodeGenWriteBarrier((&___U24this_4), value);
	}

	inline static int32_t get_offset_of_U24current_5() { return static_cast<int32_t>(offsetof(U3CFadeScreenU3Ec__Iterator0_t3191765439, ___U24current_5)); }
	inline RuntimeObject * get_U24current_5() const { return ___U24current_5; }
	inline RuntimeObject ** get_address_of_U24current_5() { return &___U24current_5; }
	inline void set_U24current_5(RuntimeObject * value)
	{
		___U24current_5 = value;
		Il2CppCodeGenWriteBarrier((&___U24current_5), value);
	}

	inline static int32_t get_offset_of_U24disposing_6() { return static_cast<int32_t>(offsetof(U3CFadeScreenU3Ec__Iterator0_t3191765439, ___U24disposing_6)); }
	inline bool get_U24disposing_6() const { return ___U24disposing_6; }
	inline bool* get_address_of_U24disposing_6() { return &___U24disposing_6; }
	inline void set_U24disposing_6(bool value)
	{
		___U24disposing_6 = value;
	}

	inline static int32_t get_offset_of_U24PC_7() { return static_cast<int32_t>(offsetof(U3CFadeScreenU3Ec__Iterator0_t3191765439, ___U24PC_7)); }
	inline int32_t get_U24PC_7() const { return ___U24PC_7; }
	inline int32_t* get_address_of_U24PC_7() { return &___U24PC_7; }
	inline void set_U24PC_7(int32_t value)
	{
		___U24PC_7 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // U3CFADESCREENU3EC__ITERATOR0_T3191765439_H
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
#ifndef LAYERMASK_T3493934918_H
#define LAYERMASK_T3493934918_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.LayerMask
struct  LayerMask_t3493934918 
{
public:
	// System.Int32 UnityEngine.LayerMask::m_Mask
	int32_t ___m_Mask_0;

public:
	inline static int32_t get_offset_of_m_Mask_0() { return static_cast<int32_t>(offsetof(LayerMask_t3493934918, ___m_Mask_0)); }
	inline int32_t get_m_Mask_0() const { return ___m_Mask_0; }
	inline int32_t* get_address_of_m_Mask_0() { return &___m_Mask_0; }
	inline void set_m_Mask_0(int32_t value)
	{
		___m_Mask_0 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // LAYERMASK_T3493934918_H
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
#ifndef PB_DIRECTION_T3768279031_H
#define PB_DIRECTION_T3768279031_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// ArchieAndrews.PrefabBrush.PB_Direction
struct  PB_Direction_t3768279031 
{
public:
	// System.Int32 ArchieAndrews.PrefabBrush.PB_Direction::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(PB_Direction_t3768279031, ___value___2)); }
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
#endif // PB_DIRECTION_T3768279031_H
#ifndef PB_DRAGMODTYPE_T690455712_H
#define PB_DRAGMODTYPE_T690455712_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// ArchieAndrews.PrefabBrush.PB_DragModType
struct  PB_DragModType_t690455712 
{
public:
	// System.Int32 ArchieAndrews.PrefabBrush.PB_DragModType::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(PB_DragModType_t690455712, ___value___2)); }
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
#endif // PB_DRAGMODTYPE_T690455712_H
#ifndef PB_ERASEDETECTIONTYPE_T255847885_H
#define PB_ERASEDETECTIONTYPE_T255847885_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// ArchieAndrews.PrefabBrush.PB_EraseDetectionType
struct  PB_EraseDetectionType_t255847885 
{
public:
	// System.Int32 ArchieAndrews.PrefabBrush.PB_EraseDetectionType::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(PB_EraseDetectionType_t255847885, ___value___2)); }
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
#endif // PB_ERASEDETECTIONTYPE_T255847885_H
#ifndef PB_ERASETYPES_T3397111448_H
#define PB_ERASETYPES_T3397111448_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// ArchieAndrews.PrefabBrush.PB_EraseTypes
struct  PB_EraseTypes_t3397111448 
{
public:
	// System.Int32 ArchieAndrews.PrefabBrush.PB_EraseTypes::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(PB_EraseTypes_t3397111448, ___value___2)); }
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
#endif // PB_ERASETYPES_T3397111448_H
#ifndef PB_PAINTTYPE_T1151419724_H
#define PB_PAINTTYPE_T1151419724_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// ArchieAndrews.PrefabBrush.PB_PaintType
struct  PB_PaintType_t1151419724 
{
public:
	// System.Int32 ArchieAndrews.PrefabBrush.PB_PaintType::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(PB_PaintType_t1151419724, ___value___2)); }
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
#endif // PB_PAINTTYPE_T1151419724_H
#ifndef PB_PARENTINGSTYLE_T1223923790_H
#define PB_PARENTINGSTYLE_T1223923790_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// ArchieAndrews.PrefabBrush.PB_ParentingStyle
struct  PB_ParentingStyle_t1223923790 
{
public:
	// System.Int32 ArchieAndrews.PrefabBrush.PB_ParentingStyle::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(PB_ParentingStyle_t1223923790, ___value___2)); }
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
#endif // PB_PARENTINGSTYLE_T1223923790_H
#ifndef PB_PREFABDATATYPE_T2758517315_H
#define PB_PREFABDATATYPE_T2758517315_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// ArchieAndrews.PrefabBrush.PB_PrefabDataType
struct  PB_PrefabDataType_t2758517315 
{
public:
	// System.Int32 ArchieAndrews.PrefabBrush.PB_PrefabDataType::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(PB_PrefabDataType_t2758517315, ___value___2)); }
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
#endif // PB_PREFABDATATYPE_T2758517315_H
#ifndef PB_SAVEAPPLICATIONTYPE_T496579644_H
#define PB_SAVEAPPLICATIONTYPE_T496579644_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// ArchieAndrews.PrefabBrush.PB_SaveApplicationType
struct  PB_SaveApplicationType_t496579644 
{
public:
	// System.Int32 ArchieAndrews.PrefabBrush.PB_SaveApplicationType::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(PB_SaveApplicationType_t496579644, ___value___2)); }
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
#endif // PB_SAVEAPPLICATIONTYPE_T496579644_H
#ifndef PB_SAVEOPTIONS_T2193799655_H
#define PB_SAVEOPTIONS_T2193799655_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// ArchieAndrews.PrefabBrush.PB_SaveOptions
struct  PB_SaveOptions_t2193799655 
{
public:
	// System.Int32 ArchieAndrews.PrefabBrush.PB_SaveOptions::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(PB_SaveOptions_t2193799655, ___value___2)); }
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
#endif // PB_SAVEOPTIONS_T2193799655_H
#ifndef PB_SCALETYPE_T2968617624_H
#define PB_SCALETYPE_T2968617624_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// ArchieAndrews.PrefabBrush.PB_ScaleType
struct  PB_ScaleType_t2968617624 
{
public:
	// System.Int32 ArchieAndrews.PrefabBrush.PB_ScaleType::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(PB_ScaleType_t2968617624, ___value___2)); }
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
#endif // PB_SCALETYPE_T2968617624_H
#ifndef CURRENTRESOLUTION_T873558430_H
#define CURRENTRESOLUTION_T873558430_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// CameraResolutionScaler/currentResolution
struct  currentResolution_t873558430 
{
public:
	// System.Int32 CameraResolutionScaler/currentResolution::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(currentResolution_t873558430, ___value___2)); }
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
#endif // CURRENTRESOLUTION_T873558430_H
#ifndef INTERNALRESOLUTION_T1233538532_H
#define INTERNALRESOLUTION_T1233538532_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// CameraResolutionScaler/internalResolution
struct  internalResolution_t1233538532 
{
public:
	// System.Int32 CameraResolutionScaler/internalResolution::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(internalResolution_t1233538532, ___value___2)); }
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
#endif // INTERNALRESOLUTION_T1233538532_H
#ifndef CURRENTRESOLUTION_T3137793412_H
#define CURRENTRESOLUTION_T3137793412_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// CameraResolutionSetter/currentResolution
struct  currentResolution_t3137793412 
{
public:
	// System.Int32 CameraResolutionSetter/currentResolution::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(currentResolution_t3137793412, ___value___2)); }
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
#endif // CURRENTRESOLUTION_T3137793412_H
#ifndef ENEMYSTATE_T931213167_H
#define ENEMYSTATE_T931213167_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// EnemyController/EnemyState
struct  EnemyState_t931213167 
{
public:
	// System.Int32 EnemyController/EnemyState::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(EnemyState_t931213167, ___value___2)); }
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
#endif // ENEMYSTATE_T931213167_H
#ifndef ENEMYTYPE_T1630539311_H
#define ENEMYTYPE_T1630539311_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// EnemyController/enemyType
struct  enemyType_t1630539311 
{
public:
	// System.Int32 EnemyController/enemyType::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(enemyType_t1630539311, ___value___2)); }
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
#endif // ENEMYTYPE_T1630539311_H
#ifndef PICKUPITEM_T2990193834_H
#define PICKUPITEM_T2990193834_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// Item_Enumerator/pickupItem
struct  pickupItem_t2990193834 
{
public:
	// System.Int32 Item_Enumerator/pickupItem::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(pickupItem_t2990193834, ___value___2)); }
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
#endif // PICKUPITEM_T2990193834_H
#ifndef LIGHTDATA_T2011517856_H
#define LIGHTDATA_T2011517856_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// LightData
struct  LightData_t2011517856 
{
public:
	// UnityEngine.Vector3 LightData::worldSpacePosition
	Vector3_t3722313464  ___worldSpacePosition_0;
	// System.Single LightData::enabled
	float ___enabled_1;
	// UnityEngine.Vector3 LightData::color
	Vector3_t3722313464  ___color_2;
	// System.Single LightData::range
	float ___range_3;

public:
	inline static int32_t get_offset_of_worldSpacePosition_0() { return static_cast<int32_t>(offsetof(LightData_t2011517856, ___worldSpacePosition_0)); }
	inline Vector3_t3722313464  get_worldSpacePosition_0() const { return ___worldSpacePosition_0; }
	inline Vector3_t3722313464 * get_address_of_worldSpacePosition_0() { return &___worldSpacePosition_0; }
	inline void set_worldSpacePosition_0(Vector3_t3722313464  value)
	{
		___worldSpacePosition_0 = value;
	}

	inline static int32_t get_offset_of_enabled_1() { return static_cast<int32_t>(offsetof(LightData_t2011517856, ___enabled_1)); }
	inline float get_enabled_1() const { return ___enabled_1; }
	inline float* get_address_of_enabled_1() { return &___enabled_1; }
	inline void set_enabled_1(float value)
	{
		___enabled_1 = value;
	}

	inline static int32_t get_offset_of_color_2() { return static_cast<int32_t>(offsetof(LightData_t2011517856, ___color_2)); }
	inline Vector3_t3722313464  get_color_2() const { return ___color_2; }
	inline Vector3_t3722313464 * get_address_of_color_2() { return &___color_2; }
	inline void set_color_2(Vector3_t3722313464  value)
	{
		___color_2 = value;
	}

	inline static int32_t get_offset_of_range_3() { return static_cast<int32_t>(offsetof(LightData_t2011517856, ___range_3)); }
	inline float get_range_3() const { return ___range_3; }
	inline float* get_address_of_range_3() { return &___range_3; }
	inline void set_range_3(float value)
	{
		___range_3 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // LIGHTDATA_T2011517856_H
#ifndef PLANE_T1400771856_H
#define PLANE_T1400771856_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// Plane
struct  Plane_t1400771856  : public RuntimeObject
{
public:
	// UnityEngine.Vector3 Plane::normal
	Vector3_t3722313464  ___normal_0;
	// System.Single Plane::d
	float ___d_1;

public:
	inline static int32_t get_offset_of_normal_0() { return static_cast<int32_t>(offsetof(Plane_t1400771856, ___normal_0)); }
	inline Vector3_t3722313464  get_normal_0() const { return ___normal_0; }
	inline Vector3_t3722313464 * get_address_of_normal_0() { return &___normal_0; }
	inline void set_normal_0(Vector3_t3722313464  value)
	{
		___normal_0 = value;
	}

	inline static int32_t get_offset_of_d_1() { return static_cast<int32_t>(offsetof(Plane_t1400771856, ___d_1)); }
	inline float get_d_1() const { return ___d_1; }
	inline float* get_address_of_d_1() { return &___d_1; }
	inline void set_d_1(float value)
	{
		___d_1 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // PLANE_T1400771856_H
#ifndef U3CFADELIGHTDYNAMICINPUTU3EC__ITERATOR2_T2548910918_H
#define U3CFADELIGHTDYNAMICINPUTU3EC__ITERATOR2_T2548910918_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// PlayerController/<FadeLightDynamicInput>c__Iterator2
struct  U3CFadeLightDynamicInputU3Ec__Iterator2_t2548910918  : public RuntimeObject
{
public:
	// System.Single PlayerController/<FadeLightDynamicInput>c__Iterator2::<time>__0
	float ___U3CtimeU3E__0_0;
	// UnityEngine.Vector3 PlayerController/<FadeLightDynamicInput>c__Iterator2::<coneScale>__0
	Vector3_t3722313464  ___U3CconeScaleU3E__0_1;
	// System.Single PlayerController/<FadeLightDynamicInput>c__Iterator2::duration
	float ___duration_2;
	// UnityEngine.Color PlayerController/<FadeLightDynamicInput>c__Iterator2::StartColor
	Color_t2555686324  ___StartColor_3;
	// UnityEngine.Color PlayerController/<FadeLightDynamicInput>c__Iterator2::endColor
	Color_t2555686324  ___endColor_4;
	// System.Single PlayerController/<FadeLightDynamicInput>c__Iterator2::StartIntensity
	float ___StartIntensity_5;
	// System.Single PlayerController/<FadeLightDynamicInput>c__Iterator2::endIntensity
	float ___endIntensity_6;
	// System.Single PlayerController/<FadeLightDynamicInput>c__Iterator2::StartAngle
	float ___StartAngle_7;
	// System.Single PlayerController/<FadeLightDynamicInput>c__Iterator2::endAngle
	float ___endAngle_8;
	// System.Single PlayerController/<FadeLightDynamicInput>c__Iterator2::StartSize
	float ___StartSize_9;
	// System.Single PlayerController/<FadeLightDynamicInput>c__Iterator2::endSize
	float ___endSize_10;
	// System.Single PlayerController/<FadeLightDynamicInput>c__Iterator2::<scalar>__1
	float ___U3CscalarU3E__1_11;
	// PlayerController PlayerController/<FadeLightDynamicInput>c__Iterator2::$this
	PlayerController_t2064355688 * ___U24this_12;
	// System.Object PlayerController/<FadeLightDynamicInput>c__Iterator2::$current
	RuntimeObject * ___U24current_13;
	// System.Boolean PlayerController/<FadeLightDynamicInput>c__Iterator2::$disposing
	bool ___U24disposing_14;
	// System.Int32 PlayerController/<FadeLightDynamicInput>c__Iterator2::$PC
	int32_t ___U24PC_15;

public:
	inline static int32_t get_offset_of_U3CtimeU3E__0_0() { return static_cast<int32_t>(offsetof(U3CFadeLightDynamicInputU3Ec__Iterator2_t2548910918, ___U3CtimeU3E__0_0)); }
	inline float get_U3CtimeU3E__0_0() const { return ___U3CtimeU3E__0_0; }
	inline float* get_address_of_U3CtimeU3E__0_0() { return &___U3CtimeU3E__0_0; }
	inline void set_U3CtimeU3E__0_0(float value)
	{
		___U3CtimeU3E__0_0 = value;
	}

	inline static int32_t get_offset_of_U3CconeScaleU3E__0_1() { return static_cast<int32_t>(offsetof(U3CFadeLightDynamicInputU3Ec__Iterator2_t2548910918, ___U3CconeScaleU3E__0_1)); }
	inline Vector3_t3722313464  get_U3CconeScaleU3E__0_1() const { return ___U3CconeScaleU3E__0_1; }
	inline Vector3_t3722313464 * get_address_of_U3CconeScaleU3E__0_1() { return &___U3CconeScaleU3E__0_1; }
	inline void set_U3CconeScaleU3E__0_1(Vector3_t3722313464  value)
	{
		___U3CconeScaleU3E__0_1 = value;
	}

	inline static int32_t get_offset_of_duration_2() { return static_cast<int32_t>(offsetof(U3CFadeLightDynamicInputU3Ec__Iterator2_t2548910918, ___duration_2)); }
	inline float get_duration_2() const { return ___duration_2; }
	inline float* get_address_of_duration_2() { return &___duration_2; }
	inline void set_duration_2(float value)
	{
		___duration_2 = value;
	}

	inline static int32_t get_offset_of_StartColor_3() { return static_cast<int32_t>(offsetof(U3CFadeLightDynamicInputU3Ec__Iterator2_t2548910918, ___StartColor_3)); }
	inline Color_t2555686324  get_StartColor_3() const { return ___StartColor_3; }
	inline Color_t2555686324 * get_address_of_StartColor_3() { return &___StartColor_3; }
	inline void set_StartColor_3(Color_t2555686324  value)
	{
		___StartColor_3 = value;
	}

	inline static int32_t get_offset_of_endColor_4() { return static_cast<int32_t>(offsetof(U3CFadeLightDynamicInputU3Ec__Iterator2_t2548910918, ___endColor_4)); }
	inline Color_t2555686324  get_endColor_4() const { return ___endColor_4; }
	inline Color_t2555686324 * get_address_of_endColor_4() { return &___endColor_4; }
	inline void set_endColor_4(Color_t2555686324  value)
	{
		___endColor_4 = value;
	}

	inline static int32_t get_offset_of_StartIntensity_5() { return static_cast<int32_t>(offsetof(U3CFadeLightDynamicInputU3Ec__Iterator2_t2548910918, ___StartIntensity_5)); }
	inline float get_StartIntensity_5() const { return ___StartIntensity_5; }
	inline float* get_address_of_StartIntensity_5() { return &___StartIntensity_5; }
	inline void set_StartIntensity_5(float value)
	{
		___StartIntensity_5 = value;
	}

	inline static int32_t get_offset_of_endIntensity_6() { return static_cast<int32_t>(offsetof(U3CFadeLightDynamicInputU3Ec__Iterator2_t2548910918, ___endIntensity_6)); }
	inline float get_endIntensity_6() const { return ___endIntensity_6; }
	inline float* get_address_of_endIntensity_6() { return &___endIntensity_6; }
	inline void set_endIntensity_6(float value)
	{
		___endIntensity_6 = value;
	}

	inline static int32_t get_offset_of_StartAngle_7() { return static_cast<int32_t>(offsetof(U3CFadeLightDynamicInputU3Ec__Iterator2_t2548910918, ___StartAngle_7)); }
	inline float get_StartAngle_7() const { return ___StartAngle_7; }
	inline float* get_address_of_StartAngle_7() { return &___StartAngle_7; }
	inline void set_StartAngle_7(float value)
	{
		___StartAngle_7 = value;
	}

	inline static int32_t get_offset_of_endAngle_8() { return static_cast<int32_t>(offsetof(U3CFadeLightDynamicInputU3Ec__Iterator2_t2548910918, ___endAngle_8)); }
	inline float get_endAngle_8() const { return ___endAngle_8; }
	inline float* get_address_of_endAngle_8() { return &___endAngle_8; }
	inline void set_endAngle_8(float value)
	{
		___endAngle_8 = value;
	}

	inline static int32_t get_offset_of_StartSize_9() { return static_cast<int32_t>(offsetof(U3CFadeLightDynamicInputU3Ec__Iterator2_t2548910918, ___StartSize_9)); }
	inline float get_StartSize_9() const { return ___StartSize_9; }
	inline float* get_address_of_StartSize_9() { return &___StartSize_9; }
	inline void set_StartSize_9(float value)
	{
		___StartSize_9 = value;
	}

	inline static int32_t get_offset_of_endSize_10() { return static_cast<int32_t>(offsetof(U3CFadeLightDynamicInputU3Ec__Iterator2_t2548910918, ___endSize_10)); }
	inline float get_endSize_10() const { return ___endSize_10; }
	inline float* get_address_of_endSize_10() { return &___endSize_10; }
	inline void set_endSize_10(float value)
	{
		___endSize_10 = value;
	}

	inline static int32_t get_offset_of_U3CscalarU3E__1_11() { return static_cast<int32_t>(offsetof(U3CFadeLightDynamicInputU3Ec__Iterator2_t2548910918, ___U3CscalarU3E__1_11)); }
	inline float get_U3CscalarU3E__1_11() const { return ___U3CscalarU3E__1_11; }
	inline float* get_address_of_U3CscalarU3E__1_11() { return &___U3CscalarU3E__1_11; }
	inline void set_U3CscalarU3E__1_11(float value)
	{
		___U3CscalarU3E__1_11 = value;
	}

	inline static int32_t get_offset_of_U24this_12() { return static_cast<int32_t>(offsetof(U3CFadeLightDynamicInputU3Ec__Iterator2_t2548910918, ___U24this_12)); }
	inline PlayerController_t2064355688 * get_U24this_12() const { return ___U24this_12; }
	inline PlayerController_t2064355688 ** get_address_of_U24this_12() { return &___U24this_12; }
	inline void set_U24this_12(PlayerController_t2064355688 * value)
	{
		___U24this_12 = value;
		Il2CppCodeGenWriteBarrier((&___U24this_12), value);
	}

	inline static int32_t get_offset_of_U24current_13() { return static_cast<int32_t>(offsetof(U3CFadeLightDynamicInputU3Ec__Iterator2_t2548910918, ___U24current_13)); }
	inline RuntimeObject * get_U24current_13() const { return ___U24current_13; }
	inline RuntimeObject ** get_address_of_U24current_13() { return &___U24current_13; }
	inline void set_U24current_13(RuntimeObject * value)
	{
		___U24current_13 = value;
		Il2CppCodeGenWriteBarrier((&___U24current_13), value);
	}

	inline static int32_t get_offset_of_U24disposing_14() { return static_cast<int32_t>(offsetof(U3CFadeLightDynamicInputU3Ec__Iterator2_t2548910918, ___U24disposing_14)); }
	inline bool get_U24disposing_14() const { return ___U24disposing_14; }
	inline bool* get_address_of_U24disposing_14() { return &___U24disposing_14; }
	inline void set_U24disposing_14(bool value)
	{
		___U24disposing_14 = value;
	}

	inline static int32_t get_offset_of_U24PC_15() { return static_cast<int32_t>(offsetof(U3CFadeLightDynamicInputU3Ec__Iterator2_t2548910918, ___U24PC_15)); }
	inline int32_t get_U24PC_15() const { return ___U24PC_15; }
	inline int32_t* get_address_of_U24PC_15() { return &___U24PC_15; }
	inline void set_U24PC_15(int32_t value)
	{
		___U24PC_15 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // U3CFADELIGHTDYNAMICINPUTU3EC__ITERATOR2_T2548910918_H
#ifndef U3CFADELIGHTSTATICINPUTU3EC__ITERATOR3_T1429986291_H
#define U3CFADELIGHTSTATICINPUTU3EC__ITERATOR3_T1429986291_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// PlayerController/<FadeLightStaticInput>c__Iterator3
struct  U3CFadeLightStaticInputU3Ec__Iterator3_t1429986291  : public RuntimeObject
{
public:
	// System.Single PlayerController/<FadeLightStaticInput>c__Iterator3::<time>__0
	float ___U3CtimeU3E__0_0;
	// UnityEngine.Vector3 PlayerController/<FadeLightStaticInput>c__Iterator3::<coneScale>__0
	Vector3_t3722313464  ___U3CconeScaleU3E__0_1;
	// System.Single PlayerController/<FadeLightStaticInput>c__Iterator3::duration
	float ___duration_2;
	// UnityEngine.Color PlayerController/<FadeLightStaticInput>c__Iterator3::StartColor
	Color_t2555686324  ___StartColor_3;
	// UnityEngine.Color PlayerController/<FadeLightStaticInput>c__Iterator3::endColor
	Color_t2555686324  ___endColor_4;
	// System.Single PlayerController/<FadeLightStaticInput>c__Iterator3::StartIntensity
	float ___StartIntensity_5;
	// System.Single PlayerController/<FadeLightStaticInput>c__Iterator3::endIntensity
	float ___endIntensity_6;
	// System.Single PlayerController/<FadeLightStaticInput>c__Iterator3::StartAngle
	float ___StartAngle_7;
	// System.Single PlayerController/<FadeLightStaticInput>c__Iterator3::endAngle
	float ___endAngle_8;
	// System.Single PlayerController/<FadeLightStaticInput>c__Iterator3::StartSize
	float ___StartSize_9;
	// System.Single PlayerController/<FadeLightStaticInput>c__Iterator3::endSize
	float ___endSize_10;
	// System.Single PlayerController/<FadeLightStaticInput>c__Iterator3::<scalar>__1
	float ___U3CscalarU3E__1_11;
	// PlayerController PlayerController/<FadeLightStaticInput>c__Iterator3::$this
	PlayerController_t2064355688 * ___U24this_12;
	// System.Object PlayerController/<FadeLightStaticInput>c__Iterator3::$current
	RuntimeObject * ___U24current_13;
	// System.Boolean PlayerController/<FadeLightStaticInput>c__Iterator3::$disposing
	bool ___U24disposing_14;
	// System.Int32 PlayerController/<FadeLightStaticInput>c__Iterator3::$PC
	int32_t ___U24PC_15;

public:
	inline static int32_t get_offset_of_U3CtimeU3E__0_0() { return static_cast<int32_t>(offsetof(U3CFadeLightStaticInputU3Ec__Iterator3_t1429986291, ___U3CtimeU3E__0_0)); }
	inline float get_U3CtimeU3E__0_0() const { return ___U3CtimeU3E__0_0; }
	inline float* get_address_of_U3CtimeU3E__0_0() { return &___U3CtimeU3E__0_0; }
	inline void set_U3CtimeU3E__0_0(float value)
	{
		___U3CtimeU3E__0_0 = value;
	}

	inline static int32_t get_offset_of_U3CconeScaleU3E__0_1() { return static_cast<int32_t>(offsetof(U3CFadeLightStaticInputU3Ec__Iterator3_t1429986291, ___U3CconeScaleU3E__0_1)); }
	inline Vector3_t3722313464  get_U3CconeScaleU3E__0_1() const { return ___U3CconeScaleU3E__0_1; }
	inline Vector3_t3722313464 * get_address_of_U3CconeScaleU3E__0_1() { return &___U3CconeScaleU3E__0_1; }
	inline void set_U3CconeScaleU3E__0_1(Vector3_t3722313464  value)
	{
		___U3CconeScaleU3E__0_1 = value;
	}

	inline static int32_t get_offset_of_duration_2() { return static_cast<int32_t>(offsetof(U3CFadeLightStaticInputU3Ec__Iterator3_t1429986291, ___duration_2)); }
	inline float get_duration_2() const { return ___duration_2; }
	inline float* get_address_of_duration_2() { return &___duration_2; }
	inline void set_duration_2(float value)
	{
		___duration_2 = value;
	}

	inline static int32_t get_offset_of_StartColor_3() { return static_cast<int32_t>(offsetof(U3CFadeLightStaticInputU3Ec__Iterator3_t1429986291, ___StartColor_3)); }
	inline Color_t2555686324  get_StartColor_3() const { return ___StartColor_3; }
	inline Color_t2555686324 * get_address_of_StartColor_3() { return &___StartColor_3; }
	inline void set_StartColor_3(Color_t2555686324  value)
	{
		___StartColor_3 = value;
	}

	inline static int32_t get_offset_of_endColor_4() { return static_cast<int32_t>(offsetof(U3CFadeLightStaticInputU3Ec__Iterator3_t1429986291, ___endColor_4)); }
	inline Color_t2555686324  get_endColor_4() const { return ___endColor_4; }
	inline Color_t2555686324 * get_address_of_endColor_4() { return &___endColor_4; }
	inline void set_endColor_4(Color_t2555686324  value)
	{
		___endColor_4 = value;
	}

	inline static int32_t get_offset_of_StartIntensity_5() { return static_cast<int32_t>(offsetof(U3CFadeLightStaticInputU3Ec__Iterator3_t1429986291, ___StartIntensity_5)); }
	inline float get_StartIntensity_5() const { return ___StartIntensity_5; }
	inline float* get_address_of_StartIntensity_5() { return &___StartIntensity_5; }
	inline void set_StartIntensity_5(float value)
	{
		___StartIntensity_5 = value;
	}

	inline static int32_t get_offset_of_endIntensity_6() { return static_cast<int32_t>(offsetof(U3CFadeLightStaticInputU3Ec__Iterator3_t1429986291, ___endIntensity_6)); }
	inline float get_endIntensity_6() const { return ___endIntensity_6; }
	inline float* get_address_of_endIntensity_6() { return &___endIntensity_6; }
	inline void set_endIntensity_6(float value)
	{
		___endIntensity_6 = value;
	}

	inline static int32_t get_offset_of_StartAngle_7() { return static_cast<int32_t>(offsetof(U3CFadeLightStaticInputU3Ec__Iterator3_t1429986291, ___StartAngle_7)); }
	inline float get_StartAngle_7() const { return ___StartAngle_7; }
	inline float* get_address_of_StartAngle_7() { return &___StartAngle_7; }
	inline void set_StartAngle_7(float value)
	{
		___StartAngle_7 = value;
	}

	inline static int32_t get_offset_of_endAngle_8() { return static_cast<int32_t>(offsetof(U3CFadeLightStaticInputU3Ec__Iterator3_t1429986291, ___endAngle_8)); }
	inline float get_endAngle_8() const { return ___endAngle_8; }
	inline float* get_address_of_endAngle_8() { return &___endAngle_8; }
	inline void set_endAngle_8(float value)
	{
		___endAngle_8 = value;
	}

	inline static int32_t get_offset_of_StartSize_9() { return static_cast<int32_t>(offsetof(U3CFadeLightStaticInputU3Ec__Iterator3_t1429986291, ___StartSize_9)); }
	inline float get_StartSize_9() const { return ___StartSize_9; }
	inline float* get_address_of_StartSize_9() { return &___StartSize_9; }
	inline void set_StartSize_9(float value)
	{
		___StartSize_9 = value;
	}

	inline static int32_t get_offset_of_endSize_10() { return static_cast<int32_t>(offsetof(U3CFadeLightStaticInputU3Ec__Iterator3_t1429986291, ___endSize_10)); }
	inline float get_endSize_10() const { return ___endSize_10; }
	inline float* get_address_of_endSize_10() { return &___endSize_10; }
	inline void set_endSize_10(float value)
	{
		___endSize_10 = value;
	}

	inline static int32_t get_offset_of_U3CscalarU3E__1_11() { return static_cast<int32_t>(offsetof(U3CFadeLightStaticInputU3Ec__Iterator3_t1429986291, ___U3CscalarU3E__1_11)); }
	inline float get_U3CscalarU3E__1_11() const { return ___U3CscalarU3E__1_11; }
	inline float* get_address_of_U3CscalarU3E__1_11() { return &___U3CscalarU3E__1_11; }
	inline void set_U3CscalarU3E__1_11(float value)
	{
		___U3CscalarU3E__1_11 = value;
	}

	inline static int32_t get_offset_of_U24this_12() { return static_cast<int32_t>(offsetof(U3CFadeLightStaticInputU3Ec__Iterator3_t1429986291, ___U24this_12)); }
	inline PlayerController_t2064355688 * get_U24this_12() const { return ___U24this_12; }
	inline PlayerController_t2064355688 ** get_address_of_U24this_12() { return &___U24this_12; }
	inline void set_U24this_12(PlayerController_t2064355688 * value)
	{
		___U24this_12 = value;
		Il2CppCodeGenWriteBarrier((&___U24this_12), value);
	}

	inline static int32_t get_offset_of_U24current_13() { return static_cast<int32_t>(offsetof(U3CFadeLightStaticInputU3Ec__Iterator3_t1429986291, ___U24current_13)); }
	inline RuntimeObject * get_U24current_13() const { return ___U24current_13; }
	inline RuntimeObject ** get_address_of_U24current_13() { return &___U24current_13; }
	inline void set_U24current_13(RuntimeObject * value)
	{
		___U24current_13 = value;
		Il2CppCodeGenWriteBarrier((&___U24current_13), value);
	}

	inline static int32_t get_offset_of_U24disposing_14() { return static_cast<int32_t>(offsetof(U3CFadeLightStaticInputU3Ec__Iterator3_t1429986291, ___U24disposing_14)); }
	inline bool get_U24disposing_14() const { return ___U24disposing_14; }
	inline bool* get_address_of_U24disposing_14() { return &___U24disposing_14; }
	inline void set_U24disposing_14(bool value)
	{
		___U24disposing_14 = value;
	}

	inline static int32_t get_offset_of_U24PC_15() { return static_cast<int32_t>(offsetof(U3CFadeLightStaticInputU3Ec__Iterator3_t1429986291, ___U24PC_15)); }
	inline int32_t get_U24PC_15() const { return ___U24PC_15; }
	inline int32_t* get_address_of_U24PC_15() { return &___U24PC_15; }
	inline void set_U24PC_15(int32_t value)
	{
		___U24PC_15 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // U3CFADELIGHTSTATICINPUTU3EC__ITERATOR3_T1429986291_H
#ifndef U3CLERPCAMU3EC__ITERATOR4_T1099704510_H
#define U3CLERPCAMU3EC__ITERATOR4_T1099704510_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// PlayerController/<LerpCam>c__Iterator4
struct  U3CLerpCamU3Ec__Iterator4_t1099704510  : public RuntimeObject
{
public:
	// System.Single PlayerController/<LerpCam>c__Iterator4::<time>__0
	float ___U3CtimeU3E__0_0;
	// UnityEngine.Vector3 PlayerController/<LerpCam>c__Iterator4::<localEulerAngles>__0
	Vector3_t3722313464  ___U3ClocalEulerAnglesU3E__0_1;
	// System.Single PlayerController/<LerpCam>c__Iterator4::<currentY>__0
	float ___U3CcurrentYU3E__0_2;
	// System.Single PlayerController/<LerpCam>c__Iterator4::<currentX>__0
	float ___U3CcurrentXU3E__0_3;
	// UnityEngine.Vector3 PlayerController/<LerpCam>c__Iterator4::<eulerAngles>__0
	Vector3_t3722313464  ___U3CeulerAnglesU3E__0_4;
	// System.Single PlayerController/<LerpCam>c__Iterator4::<lightCurrentZ>__0
	float ___U3ClightCurrentZU3E__0_5;
	// System.Single PlayerController/<LerpCam>c__Iterator4::<lightCurrentY>__0
	float ___U3ClightCurrentYU3E__0_6;
	// System.Single PlayerController/<LerpCam>c__Iterator4::duration
	float ___duration_7;
	// System.Single PlayerController/<LerpCam>c__Iterator4::<newY>__1
	float ___U3CnewYU3E__1_8;
	// System.Single PlayerController/<LerpCam>c__Iterator4::<newX>__1
	float ___U3CnewXU3E__1_9;
	// System.Single PlayerController/<LerpCam>c__Iterator4::<newYL>__1
	float ___U3CnewYLU3E__1_10;
	// System.Single PlayerController/<LerpCam>c__Iterator4::<newZL>__1
	float ___U3CnewZLU3E__1_11;
	// UnityEngine.Vector3 PlayerController/<LerpCam>c__Iterator4::<newRotation>__1
	Vector3_t3722313464  ___U3CnewRotationU3E__1_12;
	// UnityEngine.Vector3 PlayerController/<LerpCam>c__Iterator4::<newLightRotation>__1
	Vector3_t3722313464  ___U3CnewLightRotationU3E__1_13;
	// PlayerController PlayerController/<LerpCam>c__Iterator4::$this
	PlayerController_t2064355688 * ___U24this_14;
	// System.Object PlayerController/<LerpCam>c__Iterator4::$current
	RuntimeObject * ___U24current_15;
	// System.Boolean PlayerController/<LerpCam>c__Iterator4::$disposing
	bool ___U24disposing_16;
	// System.Int32 PlayerController/<LerpCam>c__Iterator4::$PC
	int32_t ___U24PC_17;

public:
	inline static int32_t get_offset_of_U3CtimeU3E__0_0() { return static_cast<int32_t>(offsetof(U3CLerpCamU3Ec__Iterator4_t1099704510, ___U3CtimeU3E__0_0)); }
	inline float get_U3CtimeU3E__0_0() const { return ___U3CtimeU3E__0_0; }
	inline float* get_address_of_U3CtimeU3E__0_0() { return &___U3CtimeU3E__0_0; }
	inline void set_U3CtimeU3E__0_0(float value)
	{
		___U3CtimeU3E__0_0 = value;
	}

	inline static int32_t get_offset_of_U3ClocalEulerAnglesU3E__0_1() { return static_cast<int32_t>(offsetof(U3CLerpCamU3Ec__Iterator4_t1099704510, ___U3ClocalEulerAnglesU3E__0_1)); }
	inline Vector3_t3722313464  get_U3ClocalEulerAnglesU3E__0_1() const { return ___U3ClocalEulerAnglesU3E__0_1; }
	inline Vector3_t3722313464 * get_address_of_U3ClocalEulerAnglesU3E__0_1() { return &___U3ClocalEulerAnglesU3E__0_1; }
	inline void set_U3ClocalEulerAnglesU3E__0_1(Vector3_t3722313464  value)
	{
		___U3ClocalEulerAnglesU3E__0_1 = value;
	}

	inline static int32_t get_offset_of_U3CcurrentYU3E__0_2() { return static_cast<int32_t>(offsetof(U3CLerpCamU3Ec__Iterator4_t1099704510, ___U3CcurrentYU3E__0_2)); }
	inline float get_U3CcurrentYU3E__0_2() const { return ___U3CcurrentYU3E__0_2; }
	inline float* get_address_of_U3CcurrentYU3E__0_2() { return &___U3CcurrentYU3E__0_2; }
	inline void set_U3CcurrentYU3E__0_2(float value)
	{
		___U3CcurrentYU3E__0_2 = value;
	}

	inline static int32_t get_offset_of_U3CcurrentXU3E__0_3() { return static_cast<int32_t>(offsetof(U3CLerpCamU3Ec__Iterator4_t1099704510, ___U3CcurrentXU3E__0_3)); }
	inline float get_U3CcurrentXU3E__0_3() const { return ___U3CcurrentXU3E__0_3; }
	inline float* get_address_of_U3CcurrentXU3E__0_3() { return &___U3CcurrentXU3E__0_3; }
	inline void set_U3CcurrentXU3E__0_3(float value)
	{
		___U3CcurrentXU3E__0_3 = value;
	}

	inline static int32_t get_offset_of_U3CeulerAnglesU3E__0_4() { return static_cast<int32_t>(offsetof(U3CLerpCamU3Ec__Iterator4_t1099704510, ___U3CeulerAnglesU3E__0_4)); }
	inline Vector3_t3722313464  get_U3CeulerAnglesU3E__0_4() const { return ___U3CeulerAnglesU3E__0_4; }
	inline Vector3_t3722313464 * get_address_of_U3CeulerAnglesU3E__0_4() { return &___U3CeulerAnglesU3E__0_4; }
	inline void set_U3CeulerAnglesU3E__0_4(Vector3_t3722313464  value)
	{
		___U3CeulerAnglesU3E__0_4 = value;
	}

	inline static int32_t get_offset_of_U3ClightCurrentZU3E__0_5() { return static_cast<int32_t>(offsetof(U3CLerpCamU3Ec__Iterator4_t1099704510, ___U3ClightCurrentZU3E__0_5)); }
	inline float get_U3ClightCurrentZU3E__0_5() const { return ___U3ClightCurrentZU3E__0_5; }
	inline float* get_address_of_U3ClightCurrentZU3E__0_5() { return &___U3ClightCurrentZU3E__0_5; }
	inline void set_U3ClightCurrentZU3E__0_5(float value)
	{
		___U3ClightCurrentZU3E__0_5 = value;
	}

	inline static int32_t get_offset_of_U3ClightCurrentYU3E__0_6() { return static_cast<int32_t>(offsetof(U3CLerpCamU3Ec__Iterator4_t1099704510, ___U3ClightCurrentYU3E__0_6)); }
	inline float get_U3ClightCurrentYU3E__0_6() const { return ___U3ClightCurrentYU3E__0_6; }
	inline float* get_address_of_U3ClightCurrentYU3E__0_6() { return &___U3ClightCurrentYU3E__0_6; }
	inline void set_U3ClightCurrentYU3E__0_6(float value)
	{
		___U3ClightCurrentYU3E__0_6 = value;
	}

	inline static int32_t get_offset_of_duration_7() { return static_cast<int32_t>(offsetof(U3CLerpCamU3Ec__Iterator4_t1099704510, ___duration_7)); }
	inline float get_duration_7() const { return ___duration_7; }
	inline float* get_address_of_duration_7() { return &___duration_7; }
	inline void set_duration_7(float value)
	{
		___duration_7 = value;
	}

	inline static int32_t get_offset_of_U3CnewYU3E__1_8() { return static_cast<int32_t>(offsetof(U3CLerpCamU3Ec__Iterator4_t1099704510, ___U3CnewYU3E__1_8)); }
	inline float get_U3CnewYU3E__1_8() const { return ___U3CnewYU3E__1_8; }
	inline float* get_address_of_U3CnewYU3E__1_8() { return &___U3CnewYU3E__1_8; }
	inline void set_U3CnewYU3E__1_8(float value)
	{
		___U3CnewYU3E__1_8 = value;
	}

	inline static int32_t get_offset_of_U3CnewXU3E__1_9() { return static_cast<int32_t>(offsetof(U3CLerpCamU3Ec__Iterator4_t1099704510, ___U3CnewXU3E__1_9)); }
	inline float get_U3CnewXU3E__1_9() const { return ___U3CnewXU3E__1_9; }
	inline float* get_address_of_U3CnewXU3E__1_9() { return &___U3CnewXU3E__1_9; }
	inline void set_U3CnewXU3E__1_9(float value)
	{
		___U3CnewXU3E__1_9 = value;
	}

	inline static int32_t get_offset_of_U3CnewYLU3E__1_10() { return static_cast<int32_t>(offsetof(U3CLerpCamU3Ec__Iterator4_t1099704510, ___U3CnewYLU3E__1_10)); }
	inline float get_U3CnewYLU3E__1_10() const { return ___U3CnewYLU3E__1_10; }
	inline float* get_address_of_U3CnewYLU3E__1_10() { return &___U3CnewYLU3E__1_10; }
	inline void set_U3CnewYLU3E__1_10(float value)
	{
		___U3CnewYLU3E__1_10 = value;
	}

	inline static int32_t get_offset_of_U3CnewZLU3E__1_11() { return static_cast<int32_t>(offsetof(U3CLerpCamU3Ec__Iterator4_t1099704510, ___U3CnewZLU3E__1_11)); }
	inline float get_U3CnewZLU3E__1_11() const { return ___U3CnewZLU3E__1_11; }
	inline float* get_address_of_U3CnewZLU3E__1_11() { return &___U3CnewZLU3E__1_11; }
	inline void set_U3CnewZLU3E__1_11(float value)
	{
		___U3CnewZLU3E__1_11 = value;
	}

	inline static int32_t get_offset_of_U3CnewRotationU3E__1_12() { return static_cast<int32_t>(offsetof(U3CLerpCamU3Ec__Iterator4_t1099704510, ___U3CnewRotationU3E__1_12)); }
	inline Vector3_t3722313464  get_U3CnewRotationU3E__1_12() const { return ___U3CnewRotationU3E__1_12; }
	inline Vector3_t3722313464 * get_address_of_U3CnewRotationU3E__1_12() { return &___U3CnewRotationU3E__1_12; }
	inline void set_U3CnewRotationU3E__1_12(Vector3_t3722313464  value)
	{
		___U3CnewRotationU3E__1_12 = value;
	}

	inline static int32_t get_offset_of_U3CnewLightRotationU3E__1_13() { return static_cast<int32_t>(offsetof(U3CLerpCamU3Ec__Iterator4_t1099704510, ___U3CnewLightRotationU3E__1_13)); }
	inline Vector3_t3722313464  get_U3CnewLightRotationU3E__1_13() const { return ___U3CnewLightRotationU3E__1_13; }
	inline Vector3_t3722313464 * get_address_of_U3CnewLightRotationU3E__1_13() { return &___U3CnewLightRotationU3E__1_13; }
	inline void set_U3CnewLightRotationU3E__1_13(Vector3_t3722313464  value)
	{
		___U3CnewLightRotationU3E__1_13 = value;
	}

	inline static int32_t get_offset_of_U24this_14() { return static_cast<int32_t>(offsetof(U3CLerpCamU3Ec__Iterator4_t1099704510, ___U24this_14)); }
	inline PlayerController_t2064355688 * get_U24this_14() const { return ___U24this_14; }
	inline PlayerController_t2064355688 ** get_address_of_U24this_14() { return &___U24this_14; }
	inline void set_U24this_14(PlayerController_t2064355688 * value)
	{
		___U24this_14 = value;
		Il2CppCodeGenWriteBarrier((&___U24this_14), value);
	}

	inline static int32_t get_offset_of_U24current_15() { return static_cast<int32_t>(offsetof(U3CLerpCamU3Ec__Iterator4_t1099704510, ___U24current_15)); }
	inline RuntimeObject * get_U24current_15() const { return ___U24current_15; }
	inline RuntimeObject ** get_address_of_U24current_15() { return &___U24current_15; }
	inline void set_U24current_15(RuntimeObject * value)
	{
		___U24current_15 = value;
		Il2CppCodeGenWriteBarrier((&___U24current_15), value);
	}

	inline static int32_t get_offset_of_U24disposing_16() { return static_cast<int32_t>(offsetof(U3CLerpCamU3Ec__Iterator4_t1099704510, ___U24disposing_16)); }
	inline bool get_U24disposing_16() const { return ___U24disposing_16; }
	inline bool* get_address_of_U24disposing_16() { return &___U24disposing_16; }
	inline void set_U24disposing_16(bool value)
	{
		___U24disposing_16 = value;
	}

	inline static int32_t get_offset_of_U24PC_17() { return static_cast<int32_t>(offsetof(U3CLerpCamU3Ec__Iterator4_t1099704510, ___U24PC_17)); }
	inline int32_t get_U24PC_17() const { return ___U24PC_17; }
	inline int32_t* get_address_of_U24PC_17() { return &___U24PC_17; }
	inline void set_U24PC_17(int32_t value)
	{
		___U24PC_17 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // U3CLERPCAMU3EC__ITERATOR4_T1099704510_H
#ifndef U3CQUICKTURNU3EC__ITERATORB_T3843077480_H
#define U3CQUICKTURNU3EC__ITERATORB_T3843077480_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// PlayerController/<QuickTurn>c__IteratorB
struct  U3CQuickTurnU3Ec__IteratorB_t3843077480  : public RuntimeObject
{
public:
	// System.Single PlayerController/<QuickTurn>c__IteratorB::<time>__0
	float ___U3CtimeU3E__0_0;
	// System.Single PlayerController/<QuickTurn>c__IteratorB::duration
	float ___duration_1;
	// UnityEngine.Vector3 PlayerController/<QuickTurn>c__IteratorB::playerRotation
	Vector3_t3722313464  ___playerRotation_2;
	// UnityEngine.Vector3 PlayerController/<QuickTurn>c__IteratorB::fullTurn
	Vector3_t3722313464  ___fullTurn_3;
	// PlayerController PlayerController/<QuickTurn>c__IteratorB::$this
	PlayerController_t2064355688 * ___U24this_4;
	// System.Object PlayerController/<QuickTurn>c__IteratorB::$current
	RuntimeObject * ___U24current_5;
	// System.Boolean PlayerController/<QuickTurn>c__IteratorB::$disposing
	bool ___U24disposing_6;
	// System.Int32 PlayerController/<QuickTurn>c__IteratorB::$PC
	int32_t ___U24PC_7;

public:
	inline static int32_t get_offset_of_U3CtimeU3E__0_0() { return static_cast<int32_t>(offsetof(U3CQuickTurnU3Ec__IteratorB_t3843077480, ___U3CtimeU3E__0_0)); }
	inline float get_U3CtimeU3E__0_0() const { return ___U3CtimeU3E__0_0; }
	inline float* get_address_of_U3CtimeU3E__0_0() { return &___U3CtimeU3E__0_0; }
	inline void set_U3CtimeU3E__0_0(float value)
	{
		___U3CtimeU3E__0_0 = value;
	}

	inline static int32_t get_offset_of_duration_1() { return static_cast<int32_t>(offsetof(U3CQuickTurnU3Ec__IteratorB_t3843077480, ___duration_1)); }
	inline float get_duration_1() const { return ___duration_1; }
	inline float* get_address_of_duration_1() { return &___duration_1; }
	inline void set_duration_1(float value)
	{
		___duration_1 = value;
	}

	inline static int32_t get_offset_of_playerRotation_2() { return static_cast<int32_t>(offsetof(U3CQuickTurnU3Ec__IteratorB_t3843077480, ___playerRotation_2)); }
	inline Vector3_t3722313464  get_playerRotation_2() const { return ___playerRotation_2; }
	inline Vector3_t3722313464 * get_address_of_playerRotation_2() { return &___playerRotation_2; }
	inline void set_playerRotation_2(Vector3_t3722313464  value)
	{
		___playerRotation_2 = value;
	}

	inline static int32_t get_offset_of_fullTurn_3() { return static_cast<int32_t>(offsetof(U3CQuickTurnU3Ec__IteratorB_t3843077480, ___fullTurn_3)); }
	inline Vector3_t3722313464  get_fullTurn_3() const { return ___fullTurn_3; }
	inline Vector3_t3722313464 * get_address_of_fullTurn_3() { return &___fullTurn_3; }
	inline void set_fullTurn_3(Vector3_t3722313464  value)
	{
		___fullTurn_3 = value;
	}

	inline static int32_t get_offset_of_U24this_4() { return static_cast<int32_t>(offsetof(U3CQuickTurnU3Ec__IteratorB_t3843077480, ___U24this_4)); }
	inline PlayerController_t2064355688 * get_U24this_4() const { return ___U24this_4; }
	inline PlayerController_t2064355688 ** get_address_of_U24this_4() { return &___U24this_4; }
	inline void set_U24this_4(PlayerController_t2064355688 * value)
	{
		___U24this_4 = value;
		Il2CppCodeGenWriteBarrier((&___U24this_4), value);
	}

	inline static int32_t get_offset_of_U24current_5() { return static_cast<int32_t>(offsetof(U3CQuickTurnU3Ec__IteratorB_t3843077480, ___U24current_5)); }
	inline RuntimeObject * get_U24current_5() const { return ___U24current_5; }
	inline RuntimeObject ** get_address_of_U24current_5() { return &___U24current_5; }
	inline void set_U24current_5(RuntimeObject * value)
	{
		___U24current_5 = value;
		Il2CppCodeGenWriteBarrier((&___U24current_5), value);
	}

	inline static int32_t get_offset_of_U24disposing_6() { return static_cast<int32_t>(offsetof(U3CQuickTurnU3Ec__IteratorB_t3843077480, ___U24disposing_6)); }
	inline bool get_U24disposing_6() const { return ___U24disposing_6; }
	inline bool* get_address_of_U24disposing_6() { return &___U24disposing_6; }
	inline void set_U24disposing_6(bool value)
	{
		___U24disposing_6 = value;
	}

	inline static int32_t get_offset_of_U24PC_7() { return static_cast<int32_t>(offsetof(U3CQuickTurnU3Ec__IteratorB_t3843077480, ___U24PC_7)); }
	inline int32_t get_U24PC_7() const { return ___U24PC_7; }
	inline int32_t* get_address_of_U24PC_7() { return &___U24PC_7; }
	inline void set_U24PC_7(int32_t value)
	{
		___U24PC_7 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // U3CQUICKTURNU3EC__ITERATORB_T3843077480_H
#ifndef U3CRECHARGEFLASHLIGHTU3EC__ITERATOR9_T2433989471_H
#define U3CRECHARGEFLASHLIGHTU3EC__ITERATOR9_T2433989471_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// PlayerController/<RechargeFlashlight>c__Iterator9
struct  U3CRechargeFlashlightU3Ec__Iterator9_t2433989471  : public RuntimeObject
{
public:
	// System.Single PlayerController/<RechargeFlashlight>c__Iterator9::<time>__0
	float ___U3CtimeU3E__0_0;
	// System.Single PlayerController/<RechargeFlashlight>c__Iterator9::duration
	float ___duration_1;
	// System.Single PlayerController/<RechargeFlashlight>c__Iterator9::currentCharge
	float ___currentCharge_2;
	// System.Single PlayerController/<RechargeFlashlight>c__Iterator9::<currentIntensity>__0
	float ___U3CcurrentIntensityU3E__0_3;
	// System.Single PlayerController/<RechargeFlashlight>c__Iterator9::<currentAngle>__0
	float ___U3CcurrentAngleU3E__0_4;
	// System.Single PlayerController/<RechargeFlashlight>c__Iterator9::<currentSize>__0
	float ___U3CcurrentSizeU3E__0_5;
	// UnityEngine.Color PlayerController/<RechargeFlashlight>c__Iterator9::<currentColor>__0
	Color_t2555686324  ___U3CcurrentColorU3E__0_6;
	// PlayerController PlayerController/<RechargeFlashlight>c__Iterator9::$this
	PlayerController_t2064355688 * ___U24this_7;
	// System.Object PlayerController/<RechargeFlashlight>c__Iterator9::$current
	RuntimeObject * ___U24current_8;
	// System.Boolean PlayerController/<RechargeFlashlight>c__Iterator9::$disposing
	bool ___U24disposing_9;
	// System.Int32 PlayerController/<RechargeFlashlight>c__Iterator9::$PC
	int32_t ___U24PC_10;

public:
	inline static int32_t get_offset_of_U3CtimeU3E__0_0() { return static_cast<int32_t>(offsetof(U3CRechargeFlashlightU3Ec__Iterator9_t2433989471, ___U3CtimeU3E__0_0)); }
	inline float get_U3CtimeU3E__0_0() const { return ___U3CtimeU3E__0_0; }
	inline float* get_address_of_U3CtimeU3E__0_0() { return &___U3CtimeU3E__0_0; }
	inline void set_U3CtimeU3E__0_0(float value)
	{
		___U3CtimeU3E__0_0 = value;
	}

	inline static int32_t get_offset_of_duration_1() { return static_cast<int32_t>(offsetof(U3CRechargeFlashlightU3Ec__Iterator9_t2433989471, ___duration_1)); }
	inline float get_duration_1() const { return ___duration_1; }
	inline float* get_address_of_duration_1() { return &___duration_1; }
	inline void set_duration_1(float value)
	{
		___duration_1 = value;
	}

	inline static int32_t get_offset_of_currentCharge_2() { return static_cast<int32_t>(offsetof(U3CRechargeFlashlightU3Ec__Iterator9_t2433989471, ___currentCharge_2)); }
	inline float get_currentCharge_2() const { return ___currentCharge_2; }
	inline float* get_address_of_currentCharge_2() { return &___currentCharge_2; }
	inline void set_currentCharge_2(float value)
	{
		___currentCharge_2 = value;
	}

	inline static int32_t get_offset_of_U3CcurrentIntensityU3E__0_3() { return static_cast<int32_t>(offsetof(U3CRechargeFlashlightU3Ec__Iterator9_t2433989471, ___U3CcurrentIntensityU3E__0_3)); }
	inline float get_U3CcurrentIntensityU3E__0_3() const { return ___U3CcurrentIntensityU3E__0_3; }
	inline float* get_address_of_U3CcurrentIntensityU3E__0_3() { return &___U3CcurrentIntensityU3E__0_3; }
	inline void set_U3CcurrentIntensityU3E__0_3(float value)
	{
		___U3CcurrentIntensityU3E__0_3 = value;
	}

	inline static int32_t get_offset_of_U3CcurrentAngleU3E__0_4() { return static_cast<int32_t>(offsetof(U3CRechargeFlashlightU3Ec__Iterator9_t2433989471, ___U3CcurrentAngleU3E__0_4)); }
	inline float get_U3CcurrentAngleU3E__0_4() const { return ___U3CcurrentAngleU3E__0_4; }
	inline float* get_address_of_U3CcurrentAngleU3E__0_4() { return &___U3CcurrentAngleU3E__0_4; }
	inline void set_U3CcurrentAngleU3E__0_4(float value)
	{
		___U3CcurrentAngleU3E__0_4 = value;
	}

	inline static int32_t get_offset_of_U3CcurrentSizeU3E__0_5() { return static_cast<int32_t>(offsetof(U3CRechargeFlashlightU3Ec__Iterator9_t2433989471, ___U3CcurrentSizeU3E__0_5)); }
	inline float get_U3CcurrentSizeU3E__0_5() const { return ___U3CcurrentSizeU3E__0_5; }
	inline float* get_address_of_U3CcurrentSizeU3E__0_5() { return &___U3CcurrentSizeU3E__0_5; }
	inline void set_U3CcurrentSizeU3E__0_5(float value)
	{
		___U3CcurrentSizeU3E__0_5 = value;
	}

	inline static int32_t get_offset_of_U3CcurrentColorU3E__0_6() { return static_cast<int32_t>(offsetof(U3CRechargeFlashlightU3Ec__Iterator9_t2433989471, ___U3CcurrentColorU3E__0_6)); }
	inline Color_t2555686324  get_U3CcurrentColorU3E__0_6() const { return ___U3CcurrentColorU3E__0_6; }
	inline Color_t2555686324 * get_address_of_U3CcurrentColorU3E__0_6() { return &___U3CcurrentColorU3E__0_6; }
	inline void set_U3CcurrentColorU3E__0_6(Color_t2555686324  value)
	{
		___U3CcurrentColorU3E__0_6 = value;
	}

	inline static int32_t get_offset_of_U24this_7() { return static_cast<int32_t>(offsetof(U3CRechargeFlashlightU3Ec__Iterator9_t2433989471, ___U24this_7)); }
	inline PlayerController_t2064355688 * get_U24this_7() const { return ___U24this_7; }
	inline PlayerController_t2064355688 ** get_address_of_U24this_7() { return &___U24this_7; }
	inline void set_U24this_7(PlayerController_t2064355688 * value)
	{
		___U24this_7 = value;
		Il2CppCodeGenWriteBarrier((&___U24this_7), value);
	}

	inline static int32_t get_offset_of_U24current_8() { return static_cast<int32_t>(offsetof(U3CRechargeFlashlightU3Ec__Iterator9_t2433989471, ___U24current_8)); }
	inline RuntimeObject * get_U24current_8() const { return ___U24current_8; }
	inline RuntimeObject ** get_address_of_U24current_8() { return &___U24current_8; }
	inline void set_U24current_8(RuntimeObject * value)
	{
		___U24current_8 = value;
		Il2CppCodeGenWriteBarrier((&___U24current_8), value);
	}

	inline static int32_t get_offset_of_U24disposing_9() { return static_cast<int32_t>(offsetof(U3CRechargeFlashlightU3Ec__Iterator9_t2433989471, ___U24disposing_9)); }
	inline bool get_U24disposing_9() const { return ___U24disposing_9; }
	inline bool* get_address_of_U24disposing_9() { return &___U24disposing_9; }
	inline void set_U24disposing_9(bool value)
	{
		___U24disposing_9 = value;
	}

	inline static int32_t get_offset_of_U24PC_10() { return static_cast<int32_t>(offsetof(U3CRechargeFlashlightU3Ec__Iterator9_t2433989471, ___U24PC_10)); }
	inline int32_t get_U24PC_10() const { return ___U24PC_10; }
	inline int32_t* get_address_of_U24PC_10() { return &___U24PC_10; }
	inline void set_U24PC_10(int32_t value)
	{
		___U24PC_10 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // U3CRECHARGEFLASHLIGHTU3EC__ITERATOR9_T2433989471_H
#ifndef SETSCENES_T1986016658_H
#define SETSCENES_T1986016658_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// SetScenes
struct  SetScenes_t1986016658  : public RuntimeObject
{
public:

public:
};

struct SetScenes_t1986016658_StaticFields
{
public:
	// System.String SetScenes::sceneToLoad
	String_t* ___sceneToLoad_0;
	// System.String SetScenes::sceneToUnload
	String_t* ___sceneToUnload_1;
	// System.String SetScenes::currentScene
	String_t* ___currentScene_2;
	// System.String SetScenes::nextScene
	String_t* ___nextScene_3;
	// System.String SetScenes::loaderHint
	String_t* ___loaderHint_4;
	// UnityEngine.Vector3 SetScenes::playerPosition
	Vector3_t3722313464  ___playerPosition_5;
	// UnityEngine.Quaternion SetScenes::playerRotation
	Quaternion_t2301928331  ___playerRotation_6;
	// System.Int32 SetScenes::playerMedkits
	int32_t ___playerMedkits_7;
	// System.Int32 SetScenes::playerStimulants
	int32_t ___playerStimulants_8;
	// System.Int32 SetScenes::playerBatteries
	int32_t ___playerBatteries_9;
	// System.Single SetScenes::playerHealth
	float ___playerHealth_10;
	// System.Collections.Generic.List`1<System.Int32> SetScenes::MedsRemaining
	List_1_t128053199 * ___MedsRemaining_11;
	// System.Collections.Generic.List`1<System.Int32> SetScenes::BatteryRemaining
	List_1_t128053199 * ___BatteryRemaining_12;
	// System.Collections.Generic.List`1<System.Int32> SetScenes::LightWepRemaining
	List_1_t128053199 * ___LightWepRemaining_13;
	// System.Collections.Generic.List`1<System.Int32> SetScenes::HvyWepRemaining
	List_1_t128053199 * ___HvyWepRemaining_14;

public:
	inline static int32_t get_offset_of_sceneToLoad_0() { return static_cast<int32_t>(offsetof(SetScenes_t1986016658_StaticFields, ___sceneToLoad_0)); }
	inline String_t* get_sceneToLoad_0() const { return ___sceneToLoad_0; }
	inline String_t** get_address_of_sceneToLoad_0() { return &___sceneToLoad_0; }
	inline void set_sceneToLoad_0(String_t* value)
	{
		___sceneToLoad_0 = value;
		Il2CppCodeGenWriteBarrier((&___sceneToLoad_0), value);
	}

	inline static int32_t get_offset_of_sceneToUnload_1() { return static_cast<int32_t>(offsetof(SetScenes_t1986016658_StaticFields, ___sceneToUnload_1)); }
	inline String_t* get_sceneToUnload_1() const { return ___sceneToUnload_1; }
	inline String_t** get_address_of_sceneToUnload_1() { return &___sceneToUnload_1; }
	inline void set_sceneToUnload_1(String_t* value)
	{
		___sceneToUnload_1 = value;
		Il2CppCodeGenWriteBarrier((&___sceneToUnload_1), value);
	}

	inline static int32_t get_offset_of_currentScene_2() { return static_cast<int32_t>(offsetof(SetScenes_t1986016658_StaticFields, ___currentScene_2)); }
	inline String_t* get_currentScene_2() const { return ___currentScene_2; }
	inline String_t** get_address_of_currentScene_2() { return &___currentScene_2; }
	inline void set_currentScene_2(String_t* value)
	{
		___currentScene_2 = value;
		Il2CppCodeGenWriteBarrier((&___currentScene_2), value);
	}

	inline static int32_t get_offset_of_nextScene_3() { return static_cast<int32_t>(offsetof(SetScenes_t1986016658_StaticFields, ___nextScene_3)); }
	inline String_t* get_nextScene_3() const { return ___nextScene_3; }
	inline String_t** get_address_of_nextScene_3() { return &___nextScene_3; }
	inline void set_nextScene_3(String_t* value)
	{
		___nextScene_3 = value;
		Il2CppCodeGenWriteBarrier((&___nextScene_3), value);
	}

	inline static int32_t get_offset_of_loaderHint_4() { return static_cast<int32_t>(offsetof(SetScenes_t1986016658_StaticFields, ___loaderHint_4)); }
	inline String_t* get_loaderHint_4() const { return ___loaderHint_4; }
	inline String_t** get_address_of_loaderHint_4() { return &___loaderHint_4; }
	inline void set_loaderHint_4(String_t* value)
	{
		___loaderHint_4 = value;
		Il2CppCodeGenWriteBarrier((&___loaderHint_4), value);
	}

	inline static int32_t get_offset_of_playerPosition_5() { return static_cast<int32_t>(offsetof(SetScenes_t1986016658_StaticFields, ___playerPosition_5)); }
	inline Vector3_t3722313464  get_playerPosition_5() const { return ___playerPosition_5; }
	inline Vector3_t3722313464 * get_address_of_playerPosition_5() { return &___playerPosition_5; }
	inline void set_playerPosition_5(Vector3_t3722313464  value)
	{
		___playerPosition_5 = value;
	}

	inline static int32_t get_offset_of_playerRotation_6() { return static_cast<int32_t>(offsetof(SetScenes_t1986016658_StaticFields, ___playerRotation_6)); }
	inline Quaternion_t2301928331  get_playerRotation_6() const { return ___playerRotation_6; }
	inline Quaternion_t2301928331 * get_address_of_playerRotation_6() { return &___playerRotation_6; }
	inline void set_playerRotation_6(Quaternion_t2301928331  value)
	{
		___playerRotation_6 = value;
	}

	inline static int32_t get_offset_of_playerMedkits_7() { return static_cast<int32_t>(offsetof(SetScenes_t1986016658_StaticFields, ___playerMedkits_7)); }
	inline int32_t get_playerMedkits_7() const { return ___playerMedkits_7; }
	inline int32_t* get_address_of_playerMedkits_7() { return &___playerMedkits_7; }
	inline void set_playerMedkits_7(int32_t value)
	{
		___playerMedkits_7 = value;
	}

	inline static int32_t get_offset_of_playerStimulants_8() { return static_cast<int32_t>(offsetof(SetScenes_t1986016658_StaticFields, ___playerStimulants_8)); }
	inline int32_t get_playerStimulants_8() const { return ___playerStimulants_8; }
	inline int32_t* get_address_of_playerStimulants_8() { return &___playerStimulants_8; }
	inline void set_playerStimulants_8(int32_t value)
	{
		___playerStimulants_8 = value;
	}

	inline static int32_t get_offset_of_playerBatteries_9() { return static_cast<int32_t>(offsetof(SetScenes_t1986016658_StaticFields, ___playerBatteries_9)); }
	inline int32_t get_playerBatteries_9() const { return ___playerBatteries_9; }
	inline int32_t* get_address_of_playerBatteries_9() { return &___playerBatteries_9; }
	inline void set_playerBatteries_9(int32_t value)
	{
		___playerBatteries_9 = value;
	}

	inline static int32_t get_offset_of_playerHealth_10() { return static_cast<int32_t>(offsetof(SetScenes_t1986016658_StaticFields, ___playerHealth_10)); }
	inline float get_playerHealth_10() const { return ___playerHealth_10; }
	inline float* get_address_of_playerHealth_10() { return &___playerHealth_10; }
	inline void set_playerHealth_10(float value)
	{
		___playerHealth_10 = value;
	}

	inline static int32_t get_offset_of_MedsRemaining_11() { return static_cast<int32_t>(offsetof(SetScenes_t1986016658_StaticFields, ___MedsRemaining_11)); }
	inline List_1_t128053199 * get_MedsRemaining_11() const { return ___MedsRemaining_11; }
	inline List_1_t128053199 ** get_address_of_MedsRemaining_11() { return &___MedsRemaining_11; }
	inline void set_MedsRemaining_11(List_1_t128053199 * value)
	{
		___MedsRemaining_11 = value;
		Il2CppCodeGenWriteBarrier((&___MedsRemaining_11), value);
	}

	inline static int32_t get_offset_of_BatteryRemaining_12() { return static_cast<int32_t>(offsetof(SetScenes_t1986016658_StaticFields, ___BatteryRemaining_12)); }
	inline List_1_t128053199 * get_BatteryRemaining_12() const { return ___BatteryRemaining_12; }
	inline List_1_t128053199 ** get_address_of_BatteryRemaining_12() { return &___BatteryRemaining_12; }
	inline void set_BatteryRemaining_12(List_1_t128053199 * value)
	{
		___BatteryRemaining_12 = value;
		Il2CppCodeGenWriteBarrier((&___BatteryRemaining_12), value);
	}

	inline static int32_t get_offset_of_LightWepRemaining_13() { return static_cast<int32_t>(offsetof(SetScenes_t1986016658_StaticFields, ___LightWepRemaining_13)); }
	inline List_1_t128053199 * get_LightWepRemaining_13() const { return ___LightWepRemaining_13; }
	inline List_1_t128053199 ** get_address_of_LightWepRemaining_13() { return &___LightWepRemaining_13; }
	inline void set_LightWepRemaining_13(List_1_t128053199 * value)
	{
		___LightWepRemaining_13 = value;
		Il2CppCodeGenWriteBarrier((&___LightWepRemaining_13), value);
	}

	inline static int32_t get_offset_of_HvyWepRemaining_14() { return static_cast<int32_t>(offsetof(SetScenes_t1986016658_StaticFields, ___HvyWepRemaining_14)); }
	inline List_1_t128053199 * get_HvyWepRemaining_14() const { return ___HvyWepRemaining_14; }
	inline List_1_t128053199 ** get_address_of_HvyWepRemaining_14() { return &___HvyWepRemaining_14; }
	inline void set_HvyWepRemaining_14(List_1_t128053199 * value)
	{
		___HvyWepRemaining_14 = value;
		Il2CppCodeGenWriteBarrier((&___HvyWepRemaining_14), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // SETSCENES_T1986016658_H
#ifndef U3CFADE2U3EC__ITERATOR3_T3776403337_H
#define U3CFADE2U3EC__ITERATOR3_T3776403337_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// Title_Animator/<Fade2>c__Iterator3
struct  U3CFade2U3Ec__Iterator3_t3776403337  : public RuntimeObject
{
public:
	// System.Single Title_Animator/<Fade2>c__Iterator3::<time>__0
	float ___U3CtimeU3E__0_0;
	// System.Single Title_Animator/<Fade2>c__Iterator3::duration
	float ___duration_1;
	// UnityEngine.Color Title_Animator/<Fade2>c__Iterator3::startValue
	Color_t2555686324  ___startValue_2;
	// UnityEngine.Color Title_Animator/<Fade2>c__Iterator3::endValue
	Color_t2555686324  ___endValue_3;
	// Title_Animator Title_Animator/<Fade2>c__Iterator3::$this
	Title_Animator_t1706872800 * ___U24this_4;
	// System.Object Title_Animator/<Fade2>c__Iterator3::$current
	RuntimeObject * ___U24current_5;
	// System.Boolean Title_Animator/<Fade2>c__Iterator3::$disposing
	bool ___U24disposing_6;
	// System.Int32 Title_Animator/<Fade2>c__Iterator3::$PC
	int32_t ___U24PC_7;

public:
	inline static int32_t get_offset_of_U3CtimeU3E__0_0() { return static_cast<int32_t>(offsetof(U3CFade2U3Ec__Iterator3_t3776403337, ___U3CtimeU3E__0_0)); }
	inline float get_U3CtimeU3E__0_0() const { return ___U3CtimeU3E__0_0; }
	inline float* get_address_of_U3CtimeU3E__0_0() { return &___U3CtimeU3E__0_0; }
	inline void set_U3CtimeU3E__0_0(float value)
	{
		___U3CtimeU3E__0_0 = value;
	}

	inline static int32_t get_offset_of_duration_1() { return static_cast<int32_t>(offsetof(U3CFade2U3Ec__Iterator3_t3776403337, ___duration_1)); }
	inline float get_duration_1() const { return ___duration_1; }
	inline float* get_address_of_duration_1() { return &___duration_1; }
	inline void set_duration_1(float value)
	{
		___duration_1 = value;
	}

	inline static int32_t get_offset_of_startValue_2() { return static_cast<int32_t>(offsetof(U3CFade2U3Ec__Iterator3_t3776403337, ___startValue_2)); }
	inline Color_t2555686324  get_startValue_2() const { return ___startValue_2; }
	inline Color_t2555686324 * get_address_of_startValue_2() { return &___startValue_2; }
	inline void set_startValue_2(Color_t2555686324  value)
	{
		___startValue_2 = value;
	}

	inline static int32_t get_offset_of_endValue_3() { return static_cast<int32_t>(offsetof(U3CFade2U3Ec__Iterator3_t3776403337, ___endValue_3)); }
	inline Color_t2555686324  get_endValue_3() const { return ___endValue_3; }
	inline Color_t2555686324 * get_address_of_endValue_3() { return &___endValue_3; }
	inline void set_endValue_3(Color_t2555686324  value)
	{
		___endValue_3 = value;
	}

	inline static int32_t get_offset_of_U24this_4() { return static_cast<int32_t>(offsetof(U3CFade2U3Ec__Iterator3_t3776403337, ___U24this_4)); }
	inline Title_Animator_t1706872800 * get_U24this_4() const { return ___U24this_4; }
	inline Title_Animator_t1706872800 ** get_address_of_U24this_4() { return &___U24this_4; }
	inline void set_U24this_4(Title_Animator_t1706872800 * value)
	{
		___U24this_4 = value;
		Il2CppCodeGenWriteBarrier((&___U24this_4), value);
	}

	inline static int32_t get_offset_of_U24current_5() { return static_cast<int32_t>(offsetof(U3CFade2U3Ec__Iterator3_t3776403337, ___U24current_5)); }
	inline RuntimeObject * get_U24current_5() const { return ___U24current_5; }
	inline RuntimeObject ** get_address_of_U24current_5() { return &___U24current_5; }
	inline void set_U24current_5(RuntimeObject * value)
	{
		___U24current_5 = value;
		Il2CppCodeGenWriteBarrier((&___U24current_5), value);
	}

	inline static int32_t get_offset_of_U24disposing_6() { return static_cast<int32_t>(offsetof(U3CFade2U3Ec__Iterator3_t3776403337, ___U24disposing_6)); }
	inline bool get_U24disposing_6() const { return ___U24disposing_6; }
	inline bool* get_address_of_U24disposing_6() { return &___U24disposing_6; }
	inline void set_U24disposing_6(bool value)
	{
		___U24disposing_6 = value;
	}

	inline static int32_t get_offset_of_U24PC_7() { return static_cast<int32_t>(offsetof(U3CFade2U3Ec__Iterator3_t3776403337, ___U24PC_7)); }
	inline int32_t get_U24PC_7() const { return ___U24PC_7; }
	inline int32_t* get_address_of_U24PC_7() { return &___U24PC_7; }
	inline void set_U24PC_7(int32_t value)
	{
		___U24PC_7 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // U3CFADE2U3EC__ITERATOR3_T3776403337_H
#ifndef U3CFADE3U3EC__ITERATOR4_T3775970088_H
#define U3CFADE3U3EC__ITERATOR4_T3775970088_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// Title_Animator/<Fade3>c__Iterator4
struct  U3CFade3U3Ec__Iterator4_t3775970088  : public RuntimeObject
{
public:
	// System.Single Title_Animator/<Fade3>c__Iterator4::<time>__0
	float ___U3CtimeU3E__0_0;
	// System.Single Title_Animator/<Fade3>c__Iterator4::duration
	float ___duration_1;
	// UnityEngine.Color Title_Animator/<Fade3>c__Iterator4::startValue
	Color_t2555686324  ___startValue_2;
	// UnityEngine.Color Title_Animator/<Fade3>c__Iterator4::endValue
	Color_t2555686324  ___endValue_3;
	// Title_Animator Title_Animator/<Fade3>c__Iterator4::$this
	Title_Animator_t1706872800 * ___U24this_4;
	// System.Object Title_Animator/<Fade3>c__Iterator4::$current
	RuntimeObject * ___U24current_5;
	// System.Boolean Title_Animator/<Fade3>c__Iterator4::$disposing
	bool ___U24disposing_6;
	// System.Int32 Title_Animator/<Fade3>c__Iterator4::$PC
	int32_t ___U24PC_7;

public:
	inline static int32_t get_offset_of_U3CtimeU3E__0_0() { return static_cast<int32_t>(offsetof(U3CFade3U3Ec__Iterator4_t3775970088, ___U3CtimeU3E__0_0)); }
	inline float get_U3CtimeU3E__0_0() const { return ___U3CtimeU3E__0_0; }
	inline float* get_address_of_U3CtimeU3E__0_0() { return &___U3CtimeU3E__0_0; }
	inline void set_U3CtimeU3E__0_0(float value)
	{
		___U3CtimeU3E__0_0 = value;
	}

	inline static int32_t get_offset_of_duration_1() { return static_cast<int32_t>(offsetof(U3CFade3U3Ec__Iterator4_t3775970088, ___duration_1)); }
	inline float get_duration_1() const { return ___duration_1; }
	inline float* get_address_of_duration_1() { return &___duration_1; }
	inline void set_duration_1(float value)
	{
		___duration_1 = value;
	}

	inline static int32_t get_offset_of_startValue_2() { return static_cast<int32_t>(offsetof(U3CFade3U3Ec__Iterator4_t3775970088, ___startValue_2)); }
	inline Color_t2555686324  get_startValue_2() const { return ___startValue_2; }
	inline Color_t2555686324 * get_address_of_startValue_2() { return &___startValue_2; }
	inline void set_startValue_2(Color_t2555686324  value)
	{
		___startValue_2 = value;
	}

	inline static int32_t get_offset_of_endValue_3() { return static_cast<int32_t>(offsetof(U3CFade3U3Ec__Iterator4_t3775970088, ___endValue_3)); }
	inline Color_t2555686324  get_endValue_3() const { return ___endValue_3; }
	inline Color_t2555686324 * get_address_of_endValue_3() { return &___endValue_3; }
	inline void set_endValue_3(Color_t2555686324  value)
	{
		___endValue_3 = value;
	}

	inline static int32_t get_offset_of_U24this_4() { return static_cast<int32_t>(offsetof(U3CFade3U3Ec__Iterator4_t3775970088, ___U24this_4)); }
	inline Title_Animator_t1706872800 * get_U24this_4() const { return ___U24this_4; }
	inline Title_Animator_t1706872800 ** get_address_of_U24this_4() { return &___U24this_4; }
	inline void set_U24this_4(Title_Animator_t1706872800 * value)
	{
		___U24this_4 = value;
		Il2CppCodeGenWriteBarrier((&___U24this_4), value);
	}

	inline static int32_t get_offset_of_U24current_5() { return static_cast<int32_t>(offsetof(U3CFade3U3Ec__Iterator4_t3775970088, ___U24current_5)); }
	inline RuntimeObject * get_U24current_5() const { return ___U24current_5; }
	inline RuntimeObject ** get_address_of_U24current_5() { return &___U24current_5; }
	inline void set_U24current_5(RuntimeObject * value)
	{
		___U24current_5 = value;
		Il2CppCodeGenWriteBarrier((&___U24current_5), value);
	}

	inline static int32_t get_offset_of_U24disposing_6() { return static_cast<int32_t>(offsetof(U3CFade3U3Ec__Iterator4_t3775970088, ___U24disposing_6)); }
	inline bool get_U24disposing_6() const { return ___U24disposing_6; }
	inline bool* get_address_of_U24disposing_6() { return &___U24disposing_6; }
	inline void set_U24disposing_6(bool value)
	{
		___U24disposing_6 = value;
	}

	inline static int32_t get_offset_of_U24PC_7() { return static_cast<int32_t>(offsetof(U3CFade3U3Ec__Iterator4_t3775970088, ___U24PC_7)); }
	inline int32_t get_U24PC_7() const { return ___U24PC_7; }
	inline int32_t* get_address_of_U24PC_7() { return &___U24PC_7; }
	inline void set_U24PC_7(int32_t value)
	{
		___U24PC_7 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // U3CFADE3U3EC__ITERATOR4_T3775970088_H
#ifndef U3CFADEU3EC__ITERATOR2_T2359198166_H
#define U3CFADEU3EC__ITERATOR2_T2359198166_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// Title_Animator/<Fade>c__Iterator2
struct  U3CFadeU3Ec__Iterator2_t2359198166  : public RuntimeObject
{
public:
	// System.Single Title_Animator/<Fade>c__Iterator2::<time>__0
	float ___U3CtimeU3E__0_0;
	// System.Single Title_Animator/<Fade>c__Iterator2::duration
	float ___duration_1;
	// UnityEngine.Color Title_Animator/<Fade>c__Iterator2::startValue
	Color_t2555686324  ___startValue_2;
	// UnityEngine.Color Title_Animator/<Fade>c__Iterator2::endValue
	Color_t2555686324  ___endValue_3;
	// Title_Animator Title_Animator/<Fade>c__Iterator2::$this
	Title_Animator_t1706872800 * ___U24this_4;
	// System.Object Title_Animator/<Fade>c__Iterator2::$current
	RuntimeObject * ___U24current_5;
	// System.Boolean Title_Animator/<Fade>c__Iterator2::$disposing
	bool ___U24disposing_6;
	// System.Int32 Title_Animator/<Fade>c__Iterator2::$PC
	int32_t ___U24PC_7;

public:
	inline static int32_t get_offset_of_U3CtimeU3E__0_0() { return static_cast<int32_t>(offsetof(U3CFadeU3Ec__Iterator2_t2359198166, ___U3CtimeU3E__0_0)); }
	inline float get_U3CtimeU3E__0_0() const { return ___U3CtimeU3E__0_0; }
	inline float* get_address_of_U3CtimeU3E__0_0() { return &___U3CtimeU3E__0_0; }
	inline void set_U3CtimeU3E__0_0(float value)
	{
		___U3CtimeU3E__0_0 = value;
	}

	inline static int32_t get_offset_of_duration_1() { return static_cast<int32_t>(offsetof(U3CFadeU3Ec__Iterator2_t2359198166, ___duration_1)); }
	inline float get_duration_1() const { return ___duration_1; }
	inline float* get_address_of_duration_1() { return &___duration_1; }
	inline void set_duration_1(float value)
	{
		___duration_1 = value;
	}

	inline static int32_t get_offset_of_startValue_2() { return static_cast<int32_t>(offsetof(U3CFadeU3Ec__Iterator2_t2359198166, ___startValue_2)); }
	inline Color_t2555686324  get_startValue_2() const { return ___startValue_2; }
	inline Color_t2555686324 * get_address_of_startValue_2() { return &___startValue_2; }
	inline void set_startValue_2(Color_t2555686324  value)
	{
		___startValue_2 = value;
	}

	inline static int32_t get_offset_of_endValue_3() { return static_cast<int32_t>(offsetof(U3CFadeU3Ec__Iterator2_t2359198166, ___endValue_3)); }
	inline Color_t2555686324  get_endValue_3() const { return ___endValue_3; }
	inline Color_t2555686324 * get_address_of_endValue_3() { return &___endValue_3; }
	inline void set_endValue_3(Color_t2555686324  value)
	{
		___endValue_3 = value;
	}

	inline static int32_t get_offset_of_U24this_4() { return static_cast<int32_t>(offsetof(U3CFadeU3Ec__Iterator2_t2359198166, ___U24this_4)); }
	inline Title_Animator_t1706872800 * get_U24this_4() const { return ___U24this_4; }
	inline Title_Animator_t1706872800 ** get_address_of_U24this_4() { return &___U24this_4; }
	inline void set_U24this_4(Title_Animator_t1706872800 * value)
	{
		___U24this_4 = value;
		Il2CppCodeGenWriteBarrier((&___U24this_4), value);
	}

	inline static int32_t get_offset_of_U24current_5() { return static_cast<int32_t>(offsetof(U3CFadeU3Ec__Iterator2_t2359198166, ___U24current_5)); }
	inline RuntimeObject * get_U24current_5() const { return ___U24current_5; }
	inline RuntimeObject ** get_address_of_U24current_5() { return &___U24current_5; }
	inline void set_U24current_5(RuntimeObject * value)
	{
		___U24current_5 = value;
		Il2CppCodeGenWriteBarrier((&___U24current_5), value);
	}

	inline static int32_t get_offset_of_U24disposing_6() { return static_cast<int32_t>(offsetof(U3CFadeU3Ec__Iterator2_t2359198166, ___U24disposing_6)); }
	inline bool get_U24disposing_6() const { return ___U24disposing_6; }
	inline bool* get_address_of_U24disposing_6() { return &___U24disposing_6; }
	inline void set_U24disposing_6(bool value)
	{
		___U24disposing_6 = value;
	}

	inline static int32_t get_offset_of_U24PC_7() { return static_cast<int32_t>(offsetof(U3CFadeU3Ec__Iterator2_t2359198166, ___U24PC_7)); }
	inline int32_t get_U24PC_7() const { return ___U24PC_7; }
	inline int32_t* get_address_of_U24PC_7() { return &___U24PC_7; }
	inline void set_U24PC_7(int32_t value)
	{
		___U24PC_7 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // U3CFADEU3EC__ITERATOR2_T2359198166_H
#ifndef BOUNDS_T2266837910_H
#define BOUNDS_T2266837910_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.Bounds
struct  Bounds_t2266837910 
{
public:
	// UnityEngine.Vector3 UnityEngine.Bounds::m_Center
	Vector3_t3722313464  ___m_Center_0;
	// UnityEngine.Vector3 UnityEngine.Bounds::m_Extents
	Vector3_t3722313464  ___m_Extents_1;

public:
	inline static int32_t get_offset_of_m_Center_0() { return static_cast<int32_t>(offsetof(Bounds_t2266837910, ___m_Center_0)); }
	inline Vector3_t3722313464  get_m_Center_0() const { return ___m_Center_0; }
	inline Vector3_t3722313464 * get_address_of_m_Center_0() { return &___m_Center_0; }
	inline void set_m_Center_0(Vector3_t3722313464  value)
	{
		___m_Center_0 = value;
	}

	inline static int32_t get_offset_of_m_Extents_1() { return static_cast<int32_t>(offsetof(Bounds_t2266837910, ___m_Extents_1)); }
	inline Vector3_t3722313464  get_m_Extents_1() const { return ___m_Extents_1; }
	inline Vector3_t3722313464 * get_address_of_m_Extents_1() { return &___m_Extents_1; }
	inline void set_m_Extents_1(Vector3_t3722313464  value)
	{
		___m_Extents_1 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // BOUNDS_T2266837910_H
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
#ifndef KEYCODE_T2599294277_H
#define KEYCODE_T2599294277_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.KeyCode
struct  KeyCode_t2599294277 
{
public:
	// System.Int32 UnityEngine.KeyCode::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(KeyCode_t2599294277, ___value___2)); }
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
#endif // KEYCODE_T2599294277_H
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
#ifndef RAYCASTHIT_T1056001966_H
#define RAYCASTHIT_T1056001966_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.RaycastHit
struct  RaycastHit_t1056001966 
{
public:
	// UnityEngine.Vector3 UnityEngine.RaycastHit::m_Point
	Vector3_t3722313464  ___m_Point_0;
	// UnityEngine.Vector3 UnityEngine.RaycastHit::m_Normal
	Vector3_t3722313464  ___m_Normal_1;
	// System.UInt32 UnityEngine.RaycastHit::m_FaceID
	uint32_t ___m_FaceID_2;
	// System.Single UnityEngine.RaycastHit::m_Distance
	float ___m_Distance_3;
	// UnityEngine.Vector2 UnityEngine.RaycastHit::m_UV
	Vector2_t2156229523  ___m_UV_4;
	// System.Int32 UnityEngine.RaycastHit::m_Collider
	int32_t ___m_Collider_5;

public:
	inline static int32_t get_offset_of_m_Point_0() { return static_cast<int32_t>(offsetof(RaycastHit_t1056001966, ___m_Point_0)); }
	inline Vector3_t3722313464  get_m_Point_0() const { return ___m_Point_0; }
	inline Vector3_t3722313464 * get_address_of_m_Point_0() { return &___m_Point_0; }
	inline void set_m_Point_0(Vector3_t3722313464  value)
	{
		___m_Point_0 = value;
	}

	inline static int32_t get_offset_of_m_Normal_1() { return static_cast<int32_t>(offsetof(RaycastHit_t1056001966, ___m_Normal_1)); }
	inline Vector3_t3722313464  get_m_Normal_1() const { return ___m_Normal_1; }
	inline Vector3_t3722313464 * get_address_of_m_Normal_1() { return &___m_Normal_1; }
	inline void set_m_Normal_1(Vector3_t3722313464  value)
	{
		___m_Normal_1 = value;
	}

	inline static int32_t get_offset_of_m_FaceID_2() { return static_cast<int32_t>(offsetof(RaycastHit_t1056001966, ___m_FaceID_2)); }
	inline uint32_t get_m_FaceID_2() const { return ___m_FaceID_2; }
	inline uint32_t* get_address_of_m_FaceID_2() { return &___m_FaceID_2; }
	inline void set_m_FaceID_2(uint32_t value)
	{
		___m_FaceID_2 = value;
	}

	inline static int32_t get_offset_of_m_Distance_3() { return static_cast<int32_t>(offsetof(RaycastHit_t1056001966, ___m_Distance_3)); }
	inline float get_m_Distance_3() const { return ___m_Distance_3; }
	inline float* get_address_of_m_Distance_3() { return &___m_Distance_3; }
	inline void set_m_Distance_3(float value)
	{
		___m_Distance_3 = value;
	}

	inline static int32_t get_offset_of_m_UV_4() { return static_cast<int32_t>(offsetof(RaycastHit_t1056001966, ___m_UV_4)); }
	inline Vector2_t2156229523  get_m_UV_4() const { return ___m_UV_4; }
	inline Vector2_t2156229523 * get_address_of_m_UV_4() { return &___m_UV_4; }
	inline void set_m_UV_4(Vector2_t2156229523  value)
	{
		___m_UV_4 = value;
	}

	inline static int32_t get_offset_of_m_Collider_5() { return static_cast<int32_t>(offsetof(RaycastHit_t1056001966, ___m_Collider_5)); }
	inline int32_t get_m_Collider_5() const { return ___m_Collider_5; }
	inline int32_t* get_address_of_m_Collider_5() { return &___m_Collider_5; }
	inline void set_m_Collider_5(int32_t value)
	{
		___m_Collider_5 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // RAYCASTHIT_T1056001966_H
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
#ifndef PB_SAVEOBJECT_T912869347_H
#define PB_SAVEOBJECT_T912869347_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// ArchieAndrews.PrefabBrush.PB_SaveObject
struct  PB_SaveObject_t912869347  : public ScriptableObject_t2528358522
{
public:
	// System.Collections.Generic.List`1<UnityEngine.GameObject> ArchieAndrews.PrefabBrush.PB_SaveObject::prefabList
	List_1_t2585711361 * ___prefabList_4;
	// System.Collections.Generic.List`1<ArchieAndrews.PrefabBrush.PB_PrefabData> ArchieAndrews.PrefabBrush.PB_SaveObject::prefabData
	List_1_t1689469493 * ___prefabData_5;
	// ArchieAndrews.PrefabBrush.PB_PaintType ArchieAndrews.PrefabBrush.PB_SaveObject::paintType
	int32_t ___paintType_6;
	// System.Single ArchieAndrews.PrefabBrush.PB_SaveObject::brushSize
	float ___brushSize_7;
	// System.Single ArchieAndrews.PrefabBrush.PB_SaveObject::minBrushSize
	float ___minBrushSize_8;
	// System.Single ArchieAndrews.PrefabBrush.PB_SaveObject::maxBrushSize
	float ___maxBrushSize_9;
	// System.Single ArchieAndrews.PrefabBrush.PB_SaveObject::paintDeltaDistance
	float ___paintDeltaDistance_10;
	// System.Single ArchieAndrews.PrefabBrush.PB_SaveObject::maxPaintDeltaDistance
	float ___maxPaintDeltaDistance_11;
	// System.Single ArchieAndrews.PrefabBrush.PB_SaveObject::minPaintDeltaDistance
	float ___minPaintDeltaDistance_12;
	// System.Int32 ArchieAndrews.PrefabBrush.PB_SaveObject::prefabsPerStroke
	int32_t ___prefabsPerStroke_13;
	// System.Int32 ArchieAndrews.PrefabBrush.PB_SaveObject::maxprefabsPerStroke
	int32_t ___maxprefabsPerStroke_14;
	// System.Int32 ArchieAndrews.PrefabBrush.PB_SaveObject::minprefabsPerStroke
	int32_t ___minprefabsPerStroke_15;
	// System.Single ArchieAndrews.PrefabBrush.PB_SaveObject::spawnHeight
	float ___spawnHeight_16;
	// System.Boolean ArchieAndrews.PrefabBrush.PB_SaveObject::addRigidbodyToPaintedPrefab
	bool ___addRigidbodyToPaintedPrefab_17;
	// System.Single ArchieAndrews.PrefabBrush.PB_SaveObject::physicsIterations
	float ___physicsIterations_18;
	// System.Boolean ArchieAndrews.PrefabBrush.PB_SaveObject::checkLayer
	bool ___checkLayer_19;
	// System.Boolean ArchieAndrews.PrefabBrush.PB_SaveObject::checkTag
	bool ___checkTag_20;
	// System.Boolean ArchieAndrews.PrefabBrush.PB_SaveObject::checkSlope
	bool ___checkSlope_21;
	// System.Boolean ArchieAndrews.PrefabBrush.PB_SaveObject::ignorePaintedPrefabs
	bool ___ignorePaintedPrefabs_22;
	// System.Boolean ArchieAndrews.PrefabBrush.PB_SaveObject::ignoreTriggers
	bool ___ignoreTriggers_23;
	// ArchieAndrews.PrefabBrush.PB_Direction ArchieAndrews.PrefabBrush.PB_SaveObject::chainPivotAxis
	int32_t ___chainPivotAxis_24;
	// ArchieAndrews.PrefabBrush.PB_Direction ArchieAndrews.PrefabBrush.PB_SaveObject::chainDirection
	int32_t ___chainDirection_25;
	// System.Int32 ArchieAndrews.PrefabBrush.PB_SaveObject::requiredTagMask
	int32_t ___requiredTagMask_26;
	// System.Int32 ArchieAndrews.PrefabBrush.PB_SaveObject::requiredLayerMask
	int32_t ___requiredLayerMask_27;
	// System.Single ArchieAndrews.PrefabBrush.PB_SaveObject::minRequiredSlope
	float ___minRequiredSlope_28;
	// System.Single ArchieAndrews.PrefabBrush.PB_SaveObject::maxRequiredSlope
	float ___maxRequiredSlope_29;
	// UnityEngine.Vector3 ArchieAndrews.PrefabBrush.PB_SaveObject::prefabOriginOffset
	Vector3_t3722313464  ___prefabOriginOffset_30;
	// UnityEngine.Vector3 ArchieAndrews.PrefabBrush.PB_SaveObject::prefabRotationOffset
	Vector3_t3722313464  ___prefabRotationOffset_31;
	// ArchieAndrews.PrefabBrush.PB_DragModType ArchieAndrews.PrefabBrush.PB_SaveObject::draggingAction
	int32_t ___draggingAction_32;
	// ArchieAndrews.PrefabBrush.PB_Direction ArchieAndrews.PrefabBrush.PB_SaveObject::rotationAxis
	int32_t ___rotationAxis_33;
	// System.Single ArchieAndrews.PrefabBrush.PB_SaveObject::rotationSensitivity
	float ___rotationSensitivity_34;
	// ArchieAndrews.PrefabBrush.PB_ParentingStyle ArchieAndrews.PrefabBrush.PB_SaveObject::parentingStyle
	int32_t ___parentingStyle_35;
	// UnityEngine.GameObject ArchieAndrews.PrefabBrush.PB_SaveObject::parent
	GameObject_t1113636619 * ___parent_36;
	// System.Boolean ArchieAndrews.PrefabBrush.PB_SaveObject::rotateToMatchSurface
	bool ___rotateToMatchSurface_37;
	// ArchieAndrews.PrefabBrush.PB_Direction ArchieAndrews.PrefabBrush.PB_SaveObject::rotateSurfaceDirection
	int32_t ___rotateSurfaceDirection_38;
	// System.Boolean ArchieAndrews.PrefabBrush.PB_SaveObject::randomizeRotation
	bool ___randomizeRotation_39;
	// System.Single ArchieAndrews.PrefabBrush.PB_SaveObject::minXRotation
	float ___minXRotation_40;
	// System.Single ArchieAndrews.PrefabBrush.PB_SaveObject::maxXRotation
	float ___maxXRotation_41;
	// System.Single ArchieAndrews.PrefabBrush.PB_SaveObject::minYRotation
	float ___minYRotation_42;
	// System.Single ArchieAndrews.PrefabBrush.PB_SaveObject::maxYRotation
	float ___maxYRotation_43;
	// System.Single ArchieAndrews.PrefabBrush.PB_SaveObject::minZRotation
	float ___minZRotation_44;
	// System.Single ArchieAndrews.PrefabBrush.PB_SaveObject::maxZRotation
	float ___maxZRotation_45;
	// ArchieAndrews.PrefabBrush.PB_ScaleType ArchieAndrews.PrefabBrush.PB_SaveObject::scaleType
	int32_t ___scaleType_46;
	// ArchieAndrews.PrefabBrush.PB_SaveApplicationType ArchieAndrews.PrefabBrush.PB_SaveObject::scaleApplicationType
	int32_t ___scaleApplicationType_47;
	// System.Single ArchieAndrews.PrefabBrush.PB_SaveObject::minScale
	float ___minScale_48;
	// System.Single ArchieAndrews.PrefabBrush.PB_SaveObject::maxScale
	float ___maxScale_49;
	// System.Single ArchieAndrews.PrefabBrush.PB_SaveObject::minXScale
	float ___minXScale_50;
	// System.Single ArchieAndrews.PrefabBrush.PB_SaveObject::maxXScale
	float ___maxXScale_51;
	// System.Single ArchieAndrews.PrefabBrush.PB_SaveObject::minYScale
	float ___minYScale_52;
	// System.Single ArchieAndrews.PrefabBrush.PB_SaveObject::maxYScale
	float ___maxYScale_53;
	// System.Single ArchieAndrews.PrefabBrush.PB_SaveObject::minZScale
	float ___minZScale_54;
	// System.Single ArchieAndrews.PrefabBrush.PB_SaveObject::maxZScale
	float ___maxZScale_55;
	// System.Collections.Generic.List`1<UnityEngine.GameObject> ArchieAndrews.PrefabBrush.PB_SaveObject::parentList
	List_1_t2585711361 * ___parentList_56;
	// System.Single ArchieAndrews.PrefabBrush.PB_SaveObject::eraseBrushSize
	float ___eraseBrushSize_57;
	// System.Single ArchieAndrews.PrefabBrush.PB_SaveObject::minEraseBrushSize
	float ___minEraseBrushSize_58;
	// System.Single ArchieAndrews.PrefabBrush.PB_SaveObject::maxEraseBrushSize
	float ___maxEraseBrushSize_59;
	// ArchieAndrews.PrefabBrush.PB_EraseTypes ArchieAndrews.PrefabBrush.PB_SaveObject::eraseType
	int32_t ___eraseType_60;
	// System.Boolean ArchieAndrews.PrefabBrush.PB_SaveObject::checkLayerForErase
	bool ___checkLayerForErase_61;
	// System.Boolean ArchieAndrews.PrefabBrush.PB_SaveObject::checkTagForErase
	bool ___checkTagForErase_62;
	// System.Boolean ArchieAndrews.PrefabBrush.PB_SaveObject::checkSlopeForErase
	bool ___checkSlopeForErase_63;
	// System.Boolean ArchieAndrews.PrefabBrush.PB_SaveObject::mustBeSelectedInBrush
	bool ___mustBeSelectedInBrush_64;
	// System.Int32 ArchieAndrews.PrefabBrush.PB_SaveObject::requiredTagMaskForErase
	int32_t ___requiredTagMaskForErase_65;
	// System.Int32 ArchieAndrews.PrefabBrush.PB_SaveObject::requiredLayerMaskForErase
	int32_t ___requiredLayerMaskForErase_66;
	// System.Single ArchieAndrews.PrefabBrush.PB_SaveObject::minRequiredSlopeForErase
	float ___minRequiredSlopeForErase_67;
	// System.Single ArchieAndrews.PrefabBrush.PB_SaveObject::maxRequiredSlopeForErase
	float ___maxRequiredSlopeForErase_68;
	// ArchieAndrews.PrefabBrush.PB_EraseDetectionType ArchieAndrews.PrefabBrush.PB_SaveObject::eraseDetection
	int32_t ___eraseDetection_69;
	// UnityEngine.KeyCode ArchieAndrews.PrefabBrush.PB_SaveObject::paintBrushHotKey
	int32_t ___paintBrushHotKey_70;
	// System.Boolean ArchieAndrews.PrefabBrush.PB_SaveObject::paintBrushHoldKey
	bool ___paintBrushHoldKey_71;
	// UnityEngine.KeyCode ArchieAndrews.PrefabBrush.PB_SaveObject::removeBrushHotKey
	int32_t ___removeBrushHotKey_72;
	// System.Boolean ArchieAndrews.PrefabBrush.PB_SaveObject::removeBrushHoldKey
	bool ___removeBrushHoldKey_73;
	// UnityEngine.KeyCode ArchieAndrews.PrefabBrush.PB_SaveObject::disableBrushHotKey
	int32_t ___disableBrushHotKey_74;
	// System.Boolean ArchieAndrews.PrefabBrush.PB_SaveObject::disableBrushHoldKey
	bool ___disableBrushHoldKey_75;

public:
	inline static int32_t get_offset_of_prefabList_4() { return static_cast<int32_t>(offsetof(PB_SaveObject_t912869347, ___prefabList_4)); }
	inline List_1_t2585711361 * get_prefabList_4() const { return ___prefabList_4; }
	inline List_1_t2585711361 ** get_address_of_prefabList_4() { return &___prefabList_4; }
	inline void set_prefabList_4(List_1_t2585711361 * value)
	{
		___prefabList_4 = value;
		Il2CppCodeGenWriteBarrier((&___prefabList_4), value);
	}

	inline static int32_t get_offset_of_prefabData_5() { return static_cast<int32_t>(offsetof(PB_SaveObject_t912869347, ___prefabData_5)); }
	inline List_1_t1689469493 * get_prefabData_5() const { return ___prefabData_5; }
	inline List_1_t1689469493 ** get_address_of_prefabData_5() { return &___prefabData_5; }
	inline void set_prefabData_5(List_1_t1689469493 * value)
	{
		___prefabData_5 = value;
		Il2CppCodeGenWriteBarrier((&___prefabData_5), value);
	}

	inline static int32_t get_offset_of_paintType_6() { return static_cast<int32_t>(offsetof(PB_SaveObject_t912869347, ___paintType_6)); }
	inline int32_t get_paintType_6() const { return ___paintType_6; }
	inline int32_t* get_address_of_paintType_6() { return &___paintType_6; }
	inline void set_paintType_6(int32_t value)
	{
		___paintType_6 = value;
	}

	inline static int32_t get_offset_of_brushSize_7() { return static_cast<int32_t>(offsetof(PB_SaveObject_t912869347, ___brushSize_7)); }
	inline float get_brushSize_7() const { return ___brushSize_7; }
	inline float* get_address_of_brushSize_7() { return &___brushSize_7; }
	inline void set_brushSize_7(float value)
	{
		___brushSize_7 = value;
	}

	inline static int32_t get_offset_of_minBrushSize_8() { return static_cast<int32_t>(offsetof(PB_SaveObject_t912869347, ___minBrushSize_8)); }
	inline float get_minBrushSize_8() const { return ___minBrushSize_8; }
	inline float* get_address_of_minBrushSize_8() { return &___minBrushSize_8; }
	inline void set_minBrushSize_8(float value)
	{
		___minBrushSize_8 = value;
	}

	inline static int32_t get_offset_of_maxBrushSize_9() { return static_cast<int32_t>(offsetof(PB_SaveObject_t912869347, ___maxBrushSize_9)); }
	inline float get_maxBrushSize_9() const { return ___maxBrushSize_9; }
	inline float* get_address_of_maxBrushSize_9() { return &___maxBrushSize_9; }
	inline void set_maxBrushSize_9(float value)
	{
		___maxBrushSize_9 = value;
	}

	inline static int32_t get_offset_of_paintDeltaDistance_10() { return static_cast<int32_t>(offsetof(PB_SaveObject_t912869347, ___paintDeltaDistance_10)); }
	inline float get_paintDeltaDistance_10() const { return ___paintDeltaDistance_10; }
	inline float* get_address_of_paintDeltaDistance_10() { return &___paintDeltaDistance_10; }
	inline void set_paintDeltaDistance_10(float value)
	{
		___paintDeltaDistance_10 = value;
	}

	inline static int32_t get_offset_of_maxPaintDeltaDistance_11() { return static_cast<int32_t>(offsetof(PB_SaveObject_t912869347, ___maxPaintDeltaDistance_11)); }
	inline float get_maxPaintDeltaDistance_11() const { return ___maxPaintDeltaDistance_11; }
	inline float* get_address_of_maxPaintDeltaDistance_11() { return &___maxPaintDeltaDistance_11; }
	inline void set_maxPaintDeltaDistance_11(float value)
	{
		___maxPaintDeltaDistance_11 = value;
	}

	inline static int32_t get_offset_of_minPaintDeltaDistance_12() { return static_cast<int32_t>(offsetof(PB_SaveObject_t912869347, ___minPaintDeltaDistance_12)); }
	inline float get_minPaintDeltaDistance_12() const { return ___minPaintDeltaDistance_12; }
	inline float* get_address_of_minPaintDeltaDistance_12() { return &___minPaintDeltaDistance_12; }
	inline void set_minPaintDeltaDistance_12(float value)
	{
		___minPaintDeltaDistance_12 = value;
	}

	inline static int32_t get_offset_of_prefabsPerStroke_13() { return static_cast<int32_t>(offsetof(PB_SaveObject_t912869347, ___prefabsPerStroke_13)); }
	inline int32_t get_prefabsPerStroke_13() const { return ___prefabsPerStroke_13; }
	inline int32_t* get_address_of_prefabsPerStroke_13() { return &___prefabsPerStroke_13; }
	inline void set_prefabsPerStroke_13(int32_t value)
	{
		___prefabsPerStroke_13 = value;
	}

	inline static int32_t get_offset_of_maxprefabsPerStroke_14() { return static_cast<int32_t>(offsetof(PB_SaveObject_t912869347, ___maxprefabsPerStroke_14)); }
	inline int32_t get_maxprefabsPerStroke_14() const { return ___maxprefabsPerStroke_14; }
	inline int32_t* get_address_of_maxprefabsPerStroke_14() { return &___maxprefabsPerStroke_14; }
	inline void set_maxprefabsPerStroke_14(int32_t value)
	{
		___maxprefabsPerStroke_14 = value;
	}

	inline static int32_t get_offset_of_minprefabsPerStroke_15() { return static_cast<int32_t>(offsetof(PB_SaveObject_t912869347, ___minprefabsPerStroke_15)); }
	inline int32_t get_minprefabsPerStroke_15() const { return ___minprefabsPerStroke_15; }
	inline int32_t* get_address_of_minprefabsPerStroke_15() { return &___minprefabsPerStroke_15; }
	inline void set_minprefabsPerStroke_15(int32_t value)
	{
		___minprefabsPerStroke_15 = value;
	}

	inline static int32_t get_offset_of_spawnHeight_16() { return static_cast<int32_t>(offsetof(PB_SaveObject_t912869347, ___spawnHeight_16)); }
	inline float get_spawnHeight_16() const { return ___spawnHeight_16; }
	inline float* get_address_of_spawnHeight_16() { return &___spawnHeight_16; }
	inline void set_spawnHeight_16(float value)
	{
		___spawnHeight_16 = value;
	}

	inline static int32_t get_offset_of_addRigidbodyToPaintedPrefab_17() { return static_cast<int32_t>(offsetof(PB_SaveObject_t912869347, ___addRigidbodyToPaintedPrefab_17)); }
	inline bool get_addRigidbodyToPaintedPrefab_17() const { return ___addRigidbodyToPaintedPrefab_17; }
	inline bool* get_address_of_addRigidbodyToPaintedPrefab_17() { return &___addRigidbodyToPaintedPrefab_17; }
	inline void set_addRigidbodyToPaintedPrefab_17(bool value)
	{
		___addRigidbodyToPaintedPrefab_17 = value;
	}

	inline static int32_t get_offset_of_physicsIterations_18() { return static_cast<int32_t>(offsetof(PB_SaveObject_t912869347, ___physicsIterations_18)); }
	inline float get_physicsIterations_18() const { return ___physicsIterations_18; }
	inline float* get_address_of_physicsIterations_18() { return &___physicsIterations_18; }
	inline void set_physicsIterations_18(float value)
	{
		___physicsIterations_18 = value;
	}

	inline static int32_t get_offset_of_checkLayer_19() { return static_cast<int32_t>(offsetof(PB_SaveObject_t912869347, ___checkLayer_19)); }
	inline bool get_checkLayer_19() const { return ___checkLayer_19; }
	inline bool* get_address_of_checkLayer_19() { return &___checkLayer_19; }
	inline void set_checkLayer_19(bool value)
	{
		___checkLayer_19 = value;
	}

	inline static int32_t get_offset_of_checkTag_20() { return static_cast<int32_t>(offsetof(PB_SaveObject_t912869347, ___checkTag_20)); }
	inline bool get_checkTag_20() const { return ___checkTag_20; }
	inline bool* get_address_of_checkTag_20() { return &___checkTag_20; }
	inline void set_checkTag_20(bool value)
	{
		___checkTag_20 = value;
	}

	inline static int32_t get_offset_of_checkSlope_21() { return static_cast<int32_t>(offsetof(PB_SaveObject_t912869347, ___checkSlope_21)); }
	inline bool get_checkSlope_21() const { return ___checkSlope_21; }
	inline bool* get_address_of_checkSlope_21() { return &___checkSlope_21; }
	inline void set_checkSlope_21(bool value)
	{
		___checkSlope_21 = value;
	}

	inline static int32_t get_offset_of_ignorePaintedPrefabs_22() { return static_cast<int32_t>(offsetof(PB_SaveObject_t912869347, ___ignorePaintedPrefabs_22)); }
	inline bool get_ignorePaintedPrefabs_22() const { return ___ignorePaintedPrefabs_22; }
	inline bool* get_address_of_ignorePaintedPrefabs_22() { return &___ignorePaintedPrefabs_22; }
	inline void set_ignorePaintedPrefabs_22(bool value)
	{
		___ignorePaintedPrefabs_22 = value;
	}

	inline static int32_t get_offset_of_ignoreTriggers_23() { return static_cast<int32_t>(offsetof(PB_SaveObject_t912869347, ___ignoreTriggers_23)); }
	inline bool get_ignoreTriggers_23() const { return ___ignoreTriggers_23; }
	inline bool* get_address_of_ignoreTriggers_23() { return &___ignoreTriggers_23; }
	inline void set_ignoreTriggers_23(bool value)
	{
		___ignoreTriggers_23 = value;
	}

	inline static int32_t get_offset_of_chainPivotAxis_24() { return static_cast<int32_t>(offsetof(PB_SaveObject_t912869347, ___chainPivotAxis_24)); }
	inline int32_t get_chainPivotAxis_24() const { return ___chainPivotAxis_24; }
	inline int32_t* get_address_of_chainPivotAxis_24() { return &___chainPivotAxis_24; }
	inline void set_chainPivotAxis_24(int32_t value)
	{
		___chainPivotAxis_24 = value;
	}

	inline static int32_t get_offset_of_chainDirection_25() { return static_cast<int32_t>(offsetof(PB_SaveObject_t912869347, ___chainDirection_25)); }
	inline int32_t get_chainDirection_25() const { return ___chainDirection_25; }
	inline int32_t* get_address_of_chainDirection_25() { return &___chainDirection_25; }
	inline void set_chainDirection_25(int32_t value)
	{
		___chainDirection_25 = value;
	}

	inline static int32_t get_offset_of_requiredTagMask_26() { return static_cast<int32_t>(offsetof(PB_SaveObject_t912869347, ___requiredTagMask_26)); }
	inline int32_t get_requiredTagMask_26() const { return ___requiredTagMask_26; }
	inline int32_t* get_address_of_requiredTagMask_26() { return &___requiredTagMask_26; }
	inline void set_requiredTagMask_26(int32_t value)
	{
		___requiredTagMask_26 = value;
	}

	inline static int32_t get_offset_of_requiredLayerMask_27() { return static_cast<int32_t>(offsetof(PB_SaveObject_t912869347, ___requiredLayerMask_27)); }
	inline int32_t get_requiredLayerMask_27() const { return ___requiredLayerMask_27; }
	inline int32_t* get_address_of_requiredLayerMask_27() { return &___requiredLayerMask_27; }
	inline void set_requiredLayerMask_27(int32_t value)
	{
		___requiredLayerMask_27 = value;
	}

	inline static int32_t get_offset_of_minRequiredSlope_28() { return static_cast<int32_t>(offsetof(PB_SaveObject_t912869347, ___minRequiredSlope_28)); }
	inline float get_minRequiredSlope_28() const { return ___minRequiredSlope_28; }
	inline float* get_address_of_minRequiredSlope_28() { return &___minRequiredSlope_28; }
	inline void set_minRequiredSlope_28(float value)
	{
		___minRequiredSlope_28 = value;
	}

	inline static int32_t get_offset_of_maxRequiredSlope_29() { return static_cast<int32_t>(offsetof(PB_SaveObject_t912869347, ___maxRequiredSlope_29)); }
	inline float get_maxRequiredSlope_29() const { return ___maxRequiredSlope_29; }
	inline float* get_address_of_maxRequiredSlope_29() { return &___maxRequiredSlope_29; }
	inline void set_maxRequiredSlope_29(float value)
	{
		___maxRequiredSlope_29 = value;
	}

	inline static int32_t get_offset_of_prefabOriginOffset_30() { return static_cast<int32_t>(offsetof(PB_SaveObject_t912869347, ___prefabOriginOffset_30)); }
	inline Vector3_t3722313464  get_prefabOriginOffset_30() const { return ___prefabOriginOffset_30; }
	inline Vector3_t3722313464 * get_address_of_prefabOriginOffset_30() { return &___prefabOriginOffset_30; }
	inline void set_prefabOriginOffset_30(Vector3_t3722313464  value)
	{
		___prefabOriginOffset_30 = value;
	}

	inline static int32_t get_offset_of_prefabRotationOffset_31() { return static_cast<int32_t>(offsetof(PB_SaveObject_t912869347, ___prefabRotationOffset_31)); }
	inline Vector3_t3722313464  get_prefabRotationOffset_31() const { return ___prefabRotationOffset_31; }
	inline Vector3_t3722313464 * get_address_of_prefabRotationOffset_31() { return &___prefabRotationOffset_31; }
	inline void set_prefabRotationOffset_31(Vector3_t3722313464  value)
	{
		___prefabRotationOffset_31 = value;
	}

	inline static int32_t get_offset_of_draggingAction_32() { return static_cast<int32_t>(offsetof(PB_SaveObject_t912869347, ___draggingAction_32)); }
	inline int32_t get_draggingAction_32() const { return ___draggingAction_32; }
	inline int32_t* get_address_of_draggingAction_32() { return &___draggingAction_32; }
	inline void set_draggingAction_32(int32_t value)
	{
		___draggingAction_32 = value;
	}

	inline static int32_t get_offset_of_rotationAxis_33() { return static_cast<int32_t>(offsetof(PB_SaveObject_t912869347, ___rotationAxis_33)); }
	inline int32_t get_rotationAxis_33() const { return ___rotationAxis_33; }
	inline int32_t* get_address_of_rotationAxis_33() { return &___rotationAxis_33; }
	inline void set_rotationAxis_33(int32_t value)
	{
		___rotationAxis_33 = value;
	}

	inline static int32_t get_offset_of_rotationSensitivity_34() { return static_cast<int32_t>(offsetof(PB_SaveObject_t912869347, ___rotationSensitivity_34)); }
	inline float get_rotationSensitivity_34() const { return ___rotationSensitivity_34; }
	inline float* get_address_of_rotationSensitivity_34() { return &___rotationSensitivity_34; }
	inline void set_rotationSensitivity_34(float value)
	{
		___rotationSensitivity_34 = value;
	}

	inline static int32_t get_offset_of_parentingStyle_35() { return static_cast<int32_t>(offsetof(PB_SaveObject_t912869347, ___parentingStyle_35)); }
	inline int32_t get_parentingStyle_35() const { return ___parentingStyle_35; }
	inline int32_t* get_address_of_parentingStyle_35() { return &___parentingStyle_35; }
	inline void set_parentingStyle_35(int32_t value)
	{
		___parentingStyle_35 = value;
	}

	inline static int32_t get_offset_of_parent_36() { return static_cast<int32_t>(offsetof(PB_SaveObject_t912869347, ___parent_36)); }
	inline GameObject_t1113636619 * get_parent_36() const { return ___parent_36; }
	inline GameObject_t1113636619 ** get_address_of_parent_36() { return &___parent_36; }
	inline void set_parent_36(GameObject_t1113636619 * value)
	{
		___parent_36 = value;
		Il2CppCodeGenWriteBarrier((&___parent_36), value);
	}

	inline static int32_t get_offset_of_rotateToMatchSurface_37() { return static_cast<int32_t>(offsetof(PB_SaveObject_t912869347, ___rotateToMatchSurface_37)); }
	inline bool get_rotateToMatchSurface_37() const { return ___rotateToMatchSurface_37; }
	inline bool* get_address_of_rotateToMatchSurface_37() { return &___rotateToMatchSurface_37; }
	inline void set_rotateToMatchSurface_37(bool value)
	{
		___rotateToMatchSurface_37 = value;
	}

	inline static int32_t get_offset_of_rotateSurfaceDirection_38() { return static_cast<int32_t>(offsetof(PB_SaveObject_t912869347, ___rotateSurfaceDirection_38)); }
	inline int32_t get_rotateSurfaceDirection_38() const { return ___rotateSurfaceDirection_38; }
	inline int32_t* get_address_of_rotateSurfaceDirection_38() { return &___rotateSurfaceDirection_38; }
	inline void set_rotateSurfaceDirection_38(int32_t value)
	{
		___rotateSurfaceDirection_38 = value;
	}

	inline static int32_t get_offset_of_randomizeRotation_39() { return static_cast<int32_t>(offsetof(PB_SaveObject_t912869347, ___randomizeRotation_39)); }
	inline bool get_randomizeRotation_39() const { return ___randomizeRotation_39; }
	inline bool* get_address_of_randomizeRotation_39() { return &___randomizeRotation_39; }
	inline void set_randomizeRotation_39(bool value)
	{
		___randomizeRotation_39 = value;
	}

	inline static int32_t get_offset_of_minXRotation_40() { return static_cast<int32_t>(offsetof(PB_SaveObject_t912869347, ___minXRotation_40)); }
	inline float get_minXRotation_40() const { return ___minXRotation_40; }
	inline float* get_address_of_minXRotation_40() { return &___minXRotation_40; }
	inline void set_minXRotation_40(float value)
	{
		___minXRotation_40 = value;
	}

	inline static int32_t get_offset_of_maxXRotation_41() { return static_cast<int32_t>(offsetof(PB_SaveObject_t912869347, ___maxXRotation_41)); }
	inline float get_maxXRotation_41() const { return ___maxXRotation_41; }
	inline float* get_address_of_maxXRotation_41() { return &___maxXRotation_41; }
	inline void set_maxXRotation_41(float value)
	{
		___maxXRotation_41 = value;
	}

	inline static int32_t get_offset_of_minYRotation_42() { return static_cast<int32_t>(offsetof(PB_SaveObject_t912869347, ___minYRotation_42)); }
	inline float get_minYRotation_42() const { return ___minYRotation_42; }
	inline float* get_address_of_minYRotation_42() { return &___minYRotation_42; }
	inline void set_minYRotation_42(float value)
	{
		___minYRotation_42 = value;
	}

	inline static int32_t get_offset_of_maxYRotation_43() { return static_cast<int32_t>(offsetof(PB_SaveObject_t912869347, ___maxYRotation_43)); }
	inline float get_maxYRotation_43() const { return ___maxYRotation_43; }
	inline float* get_address_of_maxYRotation_43() { return &___maxYRotation_43; }
	inline void set_maxYRotation_43(float value)
	{
		___maxYRotation_43 = value;
	}

	inline static int32_t get_offset_of_minZRotation_44() { return static_cast<int32_t>(offsetof(PB_SaveObject_t912869347, ___minZRotation_44)); }
	inline float get_minZRotation_44() const { return ___minZRotation_44; }
	inline float* get_address_of_minZRotation_44() { return &___minZRotation_44; }
	inline void set_minZRotation_44(float value)
	{
		___minZRotation_44 = value;
	}

	inline static int32_t get_offset_of_maxZRotation_45() { return static_cast<int32_t>(offsetof(PB_SaveObject_t912869347, ___maxZRotation_45)); }
	inline float get_maxZRotation_45() const { return ___maxZRotation_45; }
	inline float* get_address_of_maxZRotation_45() { return &___maxZRotation_45; }
	inline void set_maxZRotation_45(float value)
	{
		___maxZRotation_45 = value;
	}

	inline static int32_t get_offset_of_scaleType_46() { return static_cast<int32_t>(offsetof(PB_SaveObject_t912869347, ___scaleType_46)); }
	inline int32_t get_scaleType_46() const { return ___scaleType_46; }
	inline int32_t* get_address_of_scaleType_46() { return &___scaleType_46; }
	inline void set_scaleType_46(int32_t value)
	{
		___scaleType_46 = value;
	}

	inline static int32_t get_offset_of_scaleApplicationType_47() { return static_cast<int32_t>(offsetof(PB_SaveObject_t912869347, ___scaleApplicationType_47)); }
	inline int32_t get_scaleApplicationType_47() const { return ___scaleApplicationType_47; }
	inline int32_t* get_address_of_scaleApplicationType_47() { return &___scaleApplicationType_47; }
	inline void set_scaleApplicationType_47(int32_t value)
	{
		___scaleApplicationType_47 = value;
	}

	inline static int32_t get_offset_of_minScale_48() { return static_cast<int32_t>(offsetof(PB_SaveObject_t912869347, ___minScale_48)); }
	inline float get_minScale_48() const { return ___minScale_48; }
	inline float* get_address_of_minScale_48() { return &___minScale_48; }
	inline void set_minScale_48(float value)
	{
		___minScale_48 = value;
	}

	inline static int32_t get_offset_of_maxScale_49() { return static_cast<int32_t>(offsetof(PB_SaveObject_t912869347, ___maxScale_49)); }
	inline float get_maxScale_49() const { return ___maxScale_49; }
	inline float* get_address_of_maxScale_49() { return &___maxScale_49; }
	inline void set_maxScale_49(float value)
	{
		___maxScale_49 = value;
	}

	inline static int32_t get_offset_of_minXScale_50() { return static_cast<int32_t>(offsetof(PB_SaveObject_t912869347, ___minXScale_50)); }
	inline float get_minXScale_50() const { return ___minXScale_50; }
	inline float* get_address_of_minXScale_50() { return &___minXScale_50; }
	inline void set_minXScale_50(float value)
	{
		___minXScale_50 = value;
	}

	inline static int32_t get_offset_of_maxXScale_51() { return static_cast<int32_t>(offsetof(PB_SaveObject_t912869347, ___maxXScale_51)); }
	inline float get_maxXScale_51() const { return ___maxXScale_51; }
	inline float* get_address_of_maxXScale_51() { return &___maxXScale_51; }
	inline void set_maxXScale_51(float value)
	{
		___maxXScale_51 = value;
	}

	inline static int32_t get_offset_of_minYScale_52() { return static_cast<int32_t>(offsetof(PB_SaveObject_t912869347, ___minYScale_52)); }
	inline float get_minYScale_52() const { return ___minYScale_52; }
	inline float* get_address_of_minYScale_52() { return &___minYScale_52; }
	inline void set_minYScale_52(float value)
	{
		___minYScale_52 = value;
	}

	inline static int32_t get_offset_of_maxYScale_53() { return static_cast<int32_t>(offsetof(PB_SaveObject_t912869347, ___maxYScale_53)); }
	inline float get_maxYScale_53() const { return ___maxYScale_53; }
	inline float* get_address_of_maxYScale_53() { return &___maxYScale_53; }
	inline void set_maxYScale_53(float value)
	{
		___maxYScale_53 = value;
	}

	inline static int32_t get_offset_of_minZScale_54() { return static_cast<int32_t>(offsetof(PB_SaveObject_t912869347, ___minZScale_54)); }
	inline float get_minZScale_54() const { return ___minZScale_54; }
	inline float* get_address_of_minZScale_54() { return &___minZScale_54; }
	inline void set_minZScale_54(float value)
	{
		___minZScale_54 = value;
	}

	inline static int32_t get_offset_of_maxZScale_55() { return static_cast<int32_t>(offsetof(PB_SaveObject_t912869347, ___maxZScale_55)); }
	inline float get_maxZScale_55() const { return ___maxZScale_55; }
	inline float* get_address_of_maxZScale_55() { return &___maxZScale_55; }
	inline void set_maxZScale_55(float value)
	{
		___maxZScale_55 = value;
	}

	inline static int32_t get_offset_of_parentList_56() { return static_cast<int32_t>(offsetof(PB_SaveObject_t912869347, ___parentList_56)); }
	inline List_1_t2585711361 * get_parentList_56() const { return ___parentList_56; }
	inline List_1_t2585711361 ** get_address_of_parentList_56() { return &___parentList_56; }
	inline void set_parentList_56(List_1_t2585711361 * value)
	{
		___parentList_56 = value;
		Il2CppCodeGenWriteBarrier((&___parentList_56), value);
	}

	inline static int32_t get_offset_of_eraseBrushSize_57() { return static_cast<int32_t>(offsetof(PB_SaveObject_t912869347, ___eraseBrushSize_57)); }
	inline float get_eraseBrushSize_57() const { return ___eraseBrushSize_57; }
	inline float* get_address_of_eraseBrushSize_57() { return &___eraseBrushSize_57; }
	inline void set_eraseBrushSize_57(float value)
	{
		___eraseBrushSize_57 = value;
	}

	inline static int32_t get_offset_of_minEraseBrushSize_58() { return static_cast<int32_t>(offsetof(PB_SaveObject_t912869347, ___minEraseBrushSize_58)); }
	inline float get_minEraseBrushSize_58() const { return ___minEraseBrushSize_58; }
	inline float* get_address_of_minEraseBrushSize_58() { return &___minEraseBrushSize_58; }
	inline void set_minEraseBrushSize_58(float value)
	{
		___minEraseBrushSize_58 = value;
	}

	inline static int32_t get_offset_of_maxEraseBrushSize_59() { return static_cast<int32_t>(offsetof(PB_SaveObject_t912869347, ___maxEraseBrushSize_59)); }
	inline float get_maxEraseBrushSize_59() const { return ___maxEraseBrushSize_59; }
	inline float* get_address_of_maxEraseBrushSize_59() { return &___maxEraseBrushSize_59; }
	inline void set_maxEraseBrushSize_59(float value)
	{
		___maxEraseBrushSize_59 = value;
	}

	inline static int32_t get_offset_of_eraseType_60() { return static_cast<int32_t>(offsetof(PB_SaveObject_t912869347, ___eraseType_60)); }
	inline int32_t get_eraseType_60() const { return ___eraseType_60; }
	inline int32_t* get_address_of_eraseType_60() { return &___eraseType_60; }
	inline void set_eraseType_60(int32_t value)
	{
		___eraseType_60 = value;
	}

	inline static int32_t get_offset_of_checkLayerForErase_61() { return static_cast<int32_t>(offsetof(PB_SaveObject_t912869347, ___checkLayerForErase_61)); }
	inline bool get_checkLayerForErase_61() const { return ___checkLayerForErase_61; }
	inline bool* get_address_of_checkLayerForErase_61() { return &___checkLayerForErase_61; }
	inline void set_checkLayerForErase_61(bool value)
	{
		___checkLayerForErase_61 = value;
	}

	inline static int32_t get_offset_of_checkTagForErase_62() { return static_cast<int32_t>(offsetof(PB_SaveObject_t912869347, ___checkTagForErase_62)); }
	inline bool get_checkTagForErase_62() const { return ___checkTagForErase_62; }
	inline bool* get_address_of_checkTagForErase_62() { return &___checkTagForErase_62; }
	inline void set_checkTagForErase_62(bool value)
	{
		___checkTagForErase_62 = value;
	}

	inline static int32_t get_offset_of_checkSlopeForErase_63() { return static_cast<int32_t>(offsetof(PB_SaveObject_t912869347, ___checkSlopeForErase_63)); }
	inline bool get_checkSlopeForErase_63() const { return ___checkSlopeForErase_63; }
	inline bool* get_address_of_checkSlopeForErase_63() { return &___checkSlopeForErase_63; }
	inline void set_checkSlopeForErase_63(bool value)
	{
		___checkSlopeForErase_63 = value;
	}

	inline static int32_t get_offset_of_mustBeSelectedInBrush_64() { return static_cast<int32_t>(offsetof(PB_SaveObject_t912869347, ___mustBeSelectedInBrush_64)); }
	inline bool get_mustBeSelectedInBrush_64() const { return ___mustBeSelectedInBrush_64; }
	inline bool* get_address_of_mustBeSelectedInBrush_64() { return &___mustBeSelectedInBrush_64; }
	inline void set_mustBeSelectedInBrush_64(bool value)
	{
		___mustBeSelectedInBrush_64 = value;
	}

	inline static int32_t get_offset_of_requiredTagMaskForErase_65() { return static_cast<int32_t>(offsetof(PB_SaveObject_t912869347, ___requiredTagMaskForErase_65)); }
	inline int32_t get_requiredTagMaskForErase_65() const { return ___requiredTagMaskForErase_65; }
	inline int32_t* get_address_of_requiredTagMaskForErase_65() { return &___requiredTagMaskForErase_65; }
	inline void set_requiredTagMaskForErase_65(int32_t value)
	{
		___requiredTagMaskForErase_65 = value;
	}

	inline static int32_t get_offset_of_requiredLayerMaskForErase_66() { return static_cast<int32_t>(offsetof(PB_SaveObject_t912869347, ___requiredLayerMaskForErase_66)); }
	inline int32_t get_requiredLayerMaskForErase_66() const { return ___requiredLayerMaskForErase_66; }
	inline int32_t* get_address_of_requiredLayerMaskForErase_66() { return &___requiredLayerMaskForErase_66; }
	inline void set_requiredLayerMaskForErase_66(int32_t value)
	{
		___requiredLayerMaskForErase_66 = value;
	}

	inline static int32_t get_offset_of_minRequiredSlopeForErase_67() { return static_cast<int32_t>(offsetof(PB_SaveObject_t912869347, ___minRequiredSlopeForErase_67)); }
	inline float get_minRequiredSlopeForErase_67() const { return ___minRequiredSlopeForErase_67; }
	inline float* get_address_of_minRequiredSlopeForErase_67() { return &___minRequiredSlopeForErase_67; }
	inline void set_minRequiredSlopeForErase_67(float value)
	{
		___minRequiredSlopeForErase_67 = value;
	}

	inline static int32_t get_offset_of_maxRequiredSlopeForErase_68() { return static_cast<int32_t>(offsetof(PB_SaveObject_t912869347, ___maxRequiredSlopeForErase_68)); }
	inline float get_maxRequiredSlopeForErase_68() const { return ___maxRequiredSlopeForErase_68; }
	inline float* get_address_of_maxRequiredSlopeForErase_68() { return &___maxRequiredSlopeForErase_68; }
	inline void set_maxRequiredSlopeForErase_68(float value)
	{
		___maxRequiredSlopeForErase_68 = value;
	}

	inline static int32_t get_offset_of_eraseDetection_69() { return static_cast<int32_t>(offsetof(PB_SaveObject_t912869347, ___eraseDetection_69)); }
	inline int32_t get_eraseDetection_69() const { return ___eraseDetection_69; }
	inline int32_t* get_address_of_eraseDetection_69() { return &___eraseDetection_69; }
	inline void set_eraseDetection_69(int32_t value)
	{
		___eraseDetection_69 = value;
	}

	inline static int32_t get_offset_of_paintBrushHotKey_70() { return static_cast<int32_t>(offsetof(PB_SaveObject_t912869347, ___paintBrushHotKey_70)); }
	inline int32_t get_paintBrushHotKey_70() const { return ___paintBrushHotKey_70; }
	inline int32_t* get_address_of_paintBrushHotKey_70() { return &___paintBrushHotKey_70; }
	inline void set_paintBrushHotKey_70(int32_t value)
	{
		___paintBrushHotKey_70 = value;
	}

	inline static int32_t get_offset_of_paintBrushHoldKey_71() { return static_cast<int32_t>(offsetof(PB_SaveObject_t912869347, ___paintBrushHoldKey_71)); }
	inline bool get_paintBrushHoldKey_71() const { return ___paintBrushHoldKey_71; }
	inline bool* get_address_of_paintBrushHoldKey_71() { return &___paintBrushHoldKey_71; }
	inline void set_paintBrushHoldKey_71(bool value)
	{
		___paintBrushHoldKey_71 = value;
	}

	inline static int32_t get_offset_of_removeBrushHotKey_72() { return static_cast<int32_t>(offsetof(PB_SaveObject_t912869347, ___removeBrushHotKey_72)); }
	inline int32_t get_removeBrushHotKey_72() const { return ___removeBrushHotKey_72; }
	inline int32_t* get_address_of_removeBrushHotKey_72() { return &___removeBrushHotKey_72; }
	inline void set_removeBrushHotKey_72(int32_t value)
	{
		___removeBrushHotKey_72 = value;
	}

	inline static int32_t get_offset_of_removeBrushHoldKey_73() { return static_cast<int32_t>(offsetof(PB_SaveObject_t912869347, ___removeBrushHoldKey_73)); }
	inline bool get_removeBrushHoldKey_73() const { return ___removeBrushHoldKey_73; }
	inline bool* get_address_of_removeBrushHoldKey_73() { return &___removeBrushHoldKey_73; }
	inline void set_removeBrushHoldKey_73(bool value)
	{
		___removeBrushHoldKey_73 = value;
	}

	inline static int32_t get_offset_of_disableBrushHotKey_74() { return static_cast<int32_t>(offsetof(PB_SaveObject_t912869347, ___disableBrushHotKey_74)); }
	inline int32_t get_disableBrushHotKey_74() const { return ___disableBrushHotKey_74; }
	inline int32_t* get_address_of_disableBrushHotKey_74() { return &___disableBrushHotKey_74; }
	inline void set_disableBrushHotKey_74(int32_t value)
	{
		___disableBrushHotKey_74 = value;
	}

	inline static int32_t get_offset_of_disableBrushHoldKey_75() { return static_cast<int32_t>(offsetof(PB_SaveObject_t912869347, ___disableBrushHoldKey_75)); }
	inline bool get_disableBrushHoldKey_75() const { return ___disableBrushHoldKey_75; }
	inline bool* get_address_of_disableBrushHoldKey_75() { return &___disableBrushHoldKey_75; }
	inline void set_disableBrushHoldKey_75(bool value)
	{
		___disableBrushHoldKey_75 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // PB_SAVEOBJECT_T912869347_H
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
#ifndef AUTOROTATE_T913508323_H
#define AUTOROTATE_T913508323_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// AutoRotate
struct  AutoRotate_t913508323  : public MonoBehaviour_t3962482529
{
public:
	// System.Single AutoRotate::m_Speed
	float ___m_Speed_4;
	// System.Boolean AutoRotate::isRotateX
	bool ___isRotateX_5;
	// System.Boolean AutoRotate::isRotateY
	bool ___isRotateY_6;
	// System.Boolean AutoRotate::isRotateZ
	bool ___isRotateZ_7;

public:
	inline static int32_t get_offset_of_m_Speed_4() { return static_cast<int32_t>(offsetof(AutoRotate_t913508323, ___m_Speed_4)); }
	inline float get_m_Speed_4() const { return ___m_Speed_4; }
	inline float* get_address_of_m_Speed_4() { return &___m_Speed_4; }
	inline void set_m_Speed_4(float value)
	{
		___m_Speed_4 = value;
	}

	inline static int32_t get_offset_of_isRotateX_5() { return static_cast<int32_t>(offsetof(AutoRotate_t913508323, ___isRotateX_5)); }
	inline bool get_isRotateX_5() const { return ___isRotateX_5; }
	inline bool* get_address_of_isRotateX_5() { return &___isRotateX_5; }
	inline void set_isRotateX_5(bool value)
	{
		___isRotateX_5 = value;
	}

	inline static int32_t get_offset_of_isRotateY_6() { return static_cast<int32_t>(offsetof(AutoRotate_t913508323, ___isRotateY_6)); }
	inline bool get_isRotateY_6() const { return ___isRotateY_6; }
	inline bool* get_address_of_isRotateY_6() { return &___isRotateY_6; }
	inline void set_isRotateY_6(bool value)
	{
		___isRotateY_6 = value;
	}

	inline static int32_t get_offset_of_isRotateZ_7() { return static_cast<int32_t>(offsetof(AutoRotate_t913508323, ___isRotateZ_7)); }
	inline bool get_isRotateZ_7() const { return ___isRotateZ_7; }
	inline bool* get_address_of_isRotateZ_7() { return &___isRotateZ_7; }
	inline void set_isRotateZ_7(bool value)
	{
		___isRotateZ_7 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // AUTOROTATE_T913508323_H
#ifndef CAMERAFACINGBILLBOARD_T1991403390_H
#define CAMERAFACINGBILLBOARD_T1991403390_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// CameraFacingBillboard
struct  CameraFacingBillboard_t1991403390  : public MonoBehaviour_t3962482529
{
public:
	// UnityEngine.Camera CameraFacingBillboard::m_Camera
	Camera_t4157153871 * ___m_Camera_4;

public:
	inline static int32_t get_offset_of_m_Camera_4() { return static_cast<int32_t>(offsetof(CameraFacingBillboard_t1991403390, ___m_Camera_4)); }
	inline Camera_t4157153871 * get_m_Camera_4() const { return ___m_Camera_4; }
	inline Camera_t4157153871 ** get_address_of_m_Camera_4() { return &___m_Camera_4; }
	inline void set_m_Camera_4(Camera_t4157153871 * value)
	{
		___m_Camera_4 = value;
		Il2CppCodeGenWriteBarrier((&___m_Camera_4), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // CAMERAFACINGBILLBOARD_T1991403390_H
#ifndef CAMERARESOLUTIONSCALER_T2459044074_H
#define CAMERARESOLUTIONSCALER_T2459044074_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// CameraResolutionScaler
struct  CameraResolutionScaler_t2459044074  : public MonoBehaviour_t3962482529
{
public:
	// System.Boolean CameraResolutionScaler::enableInternalResolution
	bool ___enableInternalResolution_4;
	// CameraResolutionScaler/internalResolution CameraResolutionScaler::InternalResolution
	int32_t ___InternalResolution_5;
	// CameraResolutionScaler/currentResolution CameraResolutionScaler::screenResolution
	int32_t ___screenResolution_6;
	// UnityEngine.FilterMode CameraResolutionScaler::filterMode
	int32_t ___filterMode_7;
	// UnityEngine.Camera CameraResolutionScaler::camera
	Camera_t4157153871 * ___camera_8;
	// System.Int32 CameraResolutionScaler::height
	int32_t ___height_9;
	// UnityEngine.Rect CameraResolutionScaler::originalRect
	Rect_t2360479859  ___originalRect_10;
	// System.Single CameraResolutionScaler::renderDivisor
	float ___renderDivisor_11;
	// UnityEngine.RenderTexture CameraResolutionScaler::renderTex
	RenderTexture_t2108887433 * ___renderTex_12;
	// UnityEngine.Rect CameraResolutionScaler::scaledRect
	Rect_t2360479859  ___scaledRect_13;
	// System.Int32 CameraResolutionScaler::width
	int32_t ___width_14;

public:
	inline static int32_t get_offset_of_enableInternalResolution_4() { return static_cast<int32_t>(offsetof(CameraResolutionScaler_t2459044074, ___enableInternalResolution_4)); }
	inline bool get_enableInternalResolution_4() const { return ___enableInternalResolution_4; }
	inline bool* get_address_of_enableInternalResolution_4() { return &___enableInternalResolution_4; }
	inline void set_enableInternalResolution_4(bool value)
	{
		___enableInternalResolution_4 = value;
	}

	inline static int32_t get_offset_of_InternalResolution_5() { return static_cast<int32_t>(offsetof(CameraResolutionScaler_t2459044074, ___InternalResolution_5)); }
	inline int32_t get_InternalResolution_5() const { return ___InternalResolution_5; }
	inline int32_t* get_address_of_InternalResolution_5() { return &___InternalResolution_5; }
	inline void set_InternalResolution_5(int32_t value)
	{
		___InternalResolution_5 = value;
	}

	inline static int32_t get_offset_of_screenResolution_6() { return static_cast<int32_t>(offsetof(CameraResolutionScaler_t2459044074, ___screenResolution_6)); }
	inline int32_t get_screenResolution_6() const { return ___screenResolution_6; }
	inline int32_t* get_address_of_screenResolution_6() { return &___screenResolution_6; }
	inline void set_screenResolution_6(int32_t value)
	{
		___screenResolution_6 = value;
	}

	inline static int32_t get_offset_of_filterMode_7() { return static_cast<int32_t>(offsetof(CameraResolutionScaler_t2459044074, ___filterMode_7)); }
	inline int32_t get_filterMode_7() const { return ___filterMode_7; }
	inline int32_t* get_address_of_filterMode_7() { return &___filterMode_7; }
	inline void set_filterMode_7(int32_t value)
	{
		___filterMode_7 = value;
	}

	inline static int32_t get_offset_of_camera_8() { return static_cast<int32_t>(offsetof(CameraResolutionScaler_t2459044074, ___camera_8)); }
	inline Camera_t4157153871 * get_camera_8() const { return ___camera_8; }
	inline Camera_t4157153871 ** get_address_of_camera_8() { return &___camera_8; }
	inline void set_camera_8(Camera_t4157153871 * value)
	{
		___camera_8 = value;
		Il2CppCodeGenWriteBarrier((&___camera_8), value);
	}

	inline static int32_t get_offset_of_height_9() { return static_cast<int32_t>(offsetof(CameraResolutionScaler_t2459044074, ___height_9)); }
	inline int32_t get_height_9() const { return ___height_9; }
	inline int32_t* get_address_of_height_9() { return &___height_9; }
	inline void set_height_9(int32_t value)
	{
		___height_9 = value;
	}

	inline static int32_t get_offset_of_originalRect_10() { return static_cast<int32_t>(offsetof(CameraResolutionScaler_t2459044074, ___originalRect_10)); }
	inline Rect_t2360479859  get_originalRect_10() const { return ___originalRect_10; }
	inline Rect_t2360479859 * get_address_of_originalRect_10() { return &___originalRect_10; }
	inline void set_originalRect_10(Rect_t2360479859  value)
	{
		___originalRect_10 = value;
	}

	inline static int32_t get_offset_of_renderDivisor_11() { return static_cast<int32_t>(offsetof(CameraResolutionScaler_t2459044074, ___renderDivisor_11)); }
	inline float get_renderDivisor_11() const { return ___renderDivisor_11; }
	inline float* get_address_of_renderDivisor_11() { return &___renderDivisor_11; }
	inline void set_renderDivisor_11(float value)
	{
		___renderDivisor_11 = value;
	}

	inline static int32_t get_offset_of_renderTex_12() { return static_cast<int32_t>(offsetof(CameraResolutionScaler_t2459044074, ___renderTex_12)); }
	inline RenderTexture_t2108887433 * get_renderTex_12() const { return ___renderTex_12; }
	inline RenderTexture_t2108887433 ** get_address_of_renderTex_12() { return &___renderTex_12; }
	inline void set_renderTex_12(RenderTexture_t2108887433 * value)
	{
		___renderTex_12 = value;
		Il2CppCodeGenWriteBarrier((&___renderTex_12), value);
	}

	inline static int32_t get_offset_of_scaledRect_13() { return static_cast<int32_t>(offsetof(CameraResolutionScaler_t2459044074, ___scaledRect_13)); }
	inline Rect_t2360479859  get_scaledRect_13() const { return ___scaledRect_13; }
	inline Rect_t2360479859 * get_address_of_scaledRect_13() { return &___scaledRect_13; }
	inline void set_scaledRect_13(Rect_t2360479859  value)
	{
		___scaledRect_13 = value;
	}

	inline static int32_t get_offset_of_width_14() { return static_cast<int32_t>(offsetof(CameraResolutionScaler_t2459044074, ___width_14)); }
	inline int32_t get_width_14() const { return ___width_14; }
	inline int32_t* get_address_of_width_14() { return &___width_14; }
	inline void set_width_14(int32_t value)
	{
		___width_14 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // CAMERARESOLUTIONSCALER_T2459044074_H
#ifndef CAMERARESOLUTIONSETTER_T3633617313_H
#define CAMERARESOLUTIONSETTER_T3633617313_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// CameraResolutionSetter
struct  CameraResolutionSetter_t3633617313  : public MonoBehaviour_t3962482529
{
public:
	// UnityEngine.Camera CameraResolutionSetter::camera
	Camera_t4157153871 * ___camera_4;
	// CameraResolutionSetter/currentResolution CameraResolutionSetter::screenResolution
	int32_t ___screenResolution_5;

public:
	inline static int32_t get_offset_of_camera_4() { return static_cast<int32_t>(offsetof(CameraResolutionSetter_t3633617313, ___camera_4)); }
	inline Camera_t4157153871 * get_camera_4() const { return ___camera_4; }
	inline Camera_t4157153871 ** get_address_of_camera_4() { return &___camera_4; }
	inline void set_camera_4(Camera_t4157153871 * value)
	{
		___camera_4 = value;
		Il2CppCodeGenWriteBarrier((&___camera_4), value);
	}

	inline static int32_t get_offset_of_screenResolution_5() { return static_cast<int32_t>(offsetof(CameraResolutionSetter_t3633617313, ___screenResolution_5)); }
	inline int32_t get_screenResolution_5() const { return ___screenResolution_5; }
	inline int32_t* get_address_of_screenResolution_5() { return &___screenResolution_5; }
	inline void set_screenResolution_5(int32_t value)
	{
		___screenResolution_5 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // CAMERARESOLUTIONSETTER_T3633617313_H
#ifndef CLEARPLAYERPREFS_T2651082224_H
#define CLEARPLAYERPREFS_T2651082224_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// ClearPlayerPrefs
struct  ClearPlayerPrefs_t2651082224  : public MonoBehaviour_t3962482529
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // CLEARPLAYERPREFS_T2651082224_H
#ifndef CONTRAST_MANAGER_T1945764136_H
#define CONTRAST_MANAGER_T1945764136_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// Contrast_Manager
struct  Contrast_Manager_t1945764136  : public MonoBehaviour_t3962482529
{
public:
	// UnityEngine.Material Contrast_Manager::contrastMaterial
	Material_t340375123 * ___contrastMaterial_4;
	// UnityEngine.Material Contrast_Manager::skyboxMaterial
	Material_t340375123 * ___skyboxMaterial_5;
	// System.Single Contrast_Manager::contrastValue
	float ___contrastValue_6;
	// System.Single Contrast_Manager::maxShadowAmount
	float ___maxShadowAmount_7;
	// UnityEngine.Color Contrast_Manager::tintColor
	Color_t2555686324  ___tintColor_8;
	// System.Single Contrast_Manager::fromAbs
	float ___fromAbs_9;
	// System.Single Contrast_Manager::fromMaxAbs
	float ___fromMaxAbs_10;
	// System.Single Contrast_Manager::normal
	float ___normal_11;
	// System.Single Contrast_Manager::toMaxAbs
	float ___toMaxAbs_12;
	// System.Single Contrast_Manager::toAbs
	float ___toAbs_13;

public:
	inline static int32_t get_offset_of_contrastMaterial_4() { return static_cast<int32_t>(offsetof(Contrast_Manager_t1945764136, ___contrastMaterial_4)); }
	inline Material_t340375123 * get_contrastMaterial_4() const { return ___contrastMaterial_4; }
	inline Material_t340375123 ** get_address_of_contrastMaterial_4() { return &___contrastMaterial_4; }
	inline void set_contrastMaterial_4(Material_t340375123 * value)
	{
		___contrastMaterial_4 = value;
		Il2CppCodeGenWriteBarrier((&___contrastMaterial_4), value);
	}

	inline static int32_t get_offset_of_skyboxMaterial_5() { return static_cast<int32_t>(offsetof(Contrast_Manager_t1945764136, ___skyboxMaterial_5)); }
	inline Material_t340375123 * get_skyboxMaterial_5() const { return ___skyboxMaterial_5; }
	inline Material_t340375123 ** get_address_of_skyboxMaterial_5() { return &___skyboxMaterial_5; }
	inline void set_skyboxMaterial_5(Material_t340375123 * value)
	{
		___skyboxMaterial_5 = value;
		Il2CppCodeGenWriteBarrier((&___skyboxMaterial_5), value);
	}

	inline static int32_t get_offset_of_contrastValue_6() { return static_cast<int32_t>(offsetof(Contrast_Manager_t1945764136, ___contrastValue_6)); }
	inline float get_contrastValue_6() const { return ___contrastValue_6; }
	inline float* get_address_of_contrastValue_6() { return &___contrastValue_6; }
	inline void set_contrastValue_6(float value)
	{
		___contrastValue_6 = value;
	}

	inline static int32_t get_offset_of_maxShadowAmount_7() { return static_cast<int32_t>(offsetof(Contrast_Manager_t1945764136, ___maxShadowAmount_7)); }
	inline float get_maxShadowAmount_7() const { return ___maxShadowAmount_7; }
	inline float* get_address_of_maxShadowAmount_7() { return &___maxShadowAmount_7; }
	inline void set_maxShadowAmount_7(float value)
	{
		___maxShadowAmount_7 = value;
	}

	inline static int32_t get_offset_of_tintColor_8() { return static_cast<int32_t>(offsetof(Contrast_Manager_t1945764136, ___tintColor_8)); }
	inline Color_t2555686324  get_tintColor_8() const { return ___tintColor_8; }
	inline Color_t2555686324 * get_address_of_tintColor_8() { return &___tintColor_8; }
	inline void set_tintColor_8(Color_t2555686324  value)
	{
		___tintColor_8 = value;
	}

	inline static int32_t get_offset_of_fromAbs_9() { return static_cast<int32_t>(offsetof(Contrast_Manager_t1945764136, ___fromAbs_9)); }
	inline float get_fromAbs_9() const { return ___fromAbs_9; }
	inline float* get_address_of_fromAbs_9() { return &___fromAbs_9; }
	inline void set_fromAbs_9(float value)
	{
		___fromAbs_9 = value;
	}

	inline static int32_t get_offset_of_fromMaxAbs_10() { return static_cast<int32_t>(offsetof(Contrast_Manager_t1945764136, ___fromMaxAbs_10)); }
	inline float get_fromMaxAbs_10() const { return ___fromMaxAbs_10; }
	inline float* get_address_of_fromMaxAbs_10() { return &___fromMaxAbs_10; }
	inline void set_fromMaxAbs_10(float value)
	{
		___fromMaxAbs_10 = value;
	}

	inline static int32_t get_offset_of_normal_11() { return static_cast<int32_t>(offsetof(Contrast_Manager_t1945764136, ___normal_11)); }
	inline float get_normal_11() const { return ___normal_11; }
	inline float* get_address_of_normal_11() { return &___normal_11; }
	inline void set_normal_11(float value)
	{
		___normal_11 = value;
	}

	inline static int32_t get_offset_of_toMaxAbs_12() { return static_cast<int32_t>(offsetof(Contrast_Manager_t1945764136, ___toMaxAbs_12)); }
	inline float get_toMaxAbs_12() const { return ___toMaxAbs_12; }
	inline float* get_address_of_toMaxAbs_12() { return &___toMaxAbs_12; }
	inline void set_toMaxAbs_12(float value)
	{
		___toMaxAbs_12 = value;
	}

	inline static int32_t get_offset_of_toAbs_13() { return static_cast<int32_t>(offsetof(Contrast_Manager_t1945764136, ___toAbs_13)); }
	inline float get_toAbs_13() const { return ___toAbs_13; }
	inline float* get_address_of_toAbs_13() { return &___toAbs_13; }
	inline void set_toAbs_13(float value)
	{
		___toAbs_13 = value;
	}
};

struct Contrast_Manager_t1945764136_StaticFields
{
public:
	// System.Int32 Contrast_Manager::Exposure
	int32_t ___Exposure_14;
	// System.Int32 Contrast_Manager::TintColor
	int32_t ___TintColor_15;

public:
	inline static int32_t get_offset_of_Exposure_14() { return static_cast<int32_t>(offsetof(Contrast_Manager_t1945764136_StaticFields, ___Exposure_14)); }
	inline int32_t get_Exposure_14() const { return ___Exposure_14; }
	inline int32_t* get_address_of_Exposure_14() { return &___Exposure_14; }
	inline void set_Exposure_14(int32_t value)
	{
		___Exposure_14 = value;
	}

	inline static int32_t get_offset_of_TintColor_15() { return static_cast<int32_t>(offsetof(Contrast_Manager_t1945764136_StaticFields, ___TintColor_15)); }
	inline int32_t get_TintColor_15() const { return ___TintColor_15; }
	inline int32_t* get_address_of_TintColor_15() { return &___TintColor_15; }
	inline void set_TintColor_15(int32_t value)
	{
		___TintColor_15 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // CONTRAST_MANAGER_T1945764136_H
#ifndef DATA_LOADED_MANAGER_T1271507630_H
#define DATA_LOADED_MANAGER_T1271507630_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// Data_Loaded_Manager
struct  Data_Loaded_Manager_t1271507630  : public MonoBehaviour_t3962482529
{
public:
	// UnityEngine.GameObject Data_Loaded_Manager::player
	GameObject_t1113636619 * ___player_4;
	// UnityEngine.GameObject Data_Loaded_Manager::OptionsManagerInputs
	GameObject_t1113636619 * ___OptionsManagerInputs_5;
	// UnityEngine.SkinnedMeshRenderer Data_Loaded_Manager::playerBody
	SkinnedMeshRenderer_t245602842 * ___playerBody_6;
	// System.Collections.Generic.List`1<UnityEngine.GameObject> Data_Loaded_Manager::objectList
	List_1_t2585711361 * ___objectList_7;
	// UnityEngine.AudioSource Data_Loaded_Manager::bgmSource
	AudioSource_t3935305588 * ___bgmSource_8;
	// UnityEngine.AudioSource Data_Loaded_Manager::sfxSource
	AudioSource_t3935305588 * ___sfxSource_9;
	// UnityEngine.AudioSource Data_Loaded_Manager::ambientSource
	AudioSource_t3935305588 * ___ambientSource_10;
	// UnityEngine.AudioSource Data_Loaded_Manager::thunderStormSource
	AudioSource_t3935305588 * ___thunderStormSource_11;
	// UnityEngine.AudioSource Data_Loaded_Manager::rainSource
	AudioSource_t3935305588 * ___rainSource_12;
	// UnityEngine.UI.Image Data_Loaded_Manager::SFXLevel
	Image_t2670269651 * ___SFXLevel_13;

public:
	inline static int32_t get_offset_of_player_4() { return static_cast<int32_t>(offsetof(Data_Loaded_Manager_t1271507630, ___player_4)); }
	inline GameObject_t1113636619 * get_player_4() const { return ___player_4; }
	inline GameObject_t1113636619 ** get_address_of_player_4() { return &___player_4; }
	inline void set_player_4(GameObject_t1113636619 * value)
	{
		___player_4 = value;
		Il2CppCodeGenWriteBarrier((&___player_4), value);
	}

	inline static int32_t get_offset_of_OptionsManagerInputs_5() { return static_cast<int32_t>(offsetof(Data_Loaded_Manager_t1271507630, ___OptionsManagerInputs_5)); }
	inline GameObject_t1113636619 * get_OptionsManagerInputs_5() const { return ___OptionsManagerInputs_5; }
	inline GameObject_t1113636619 ** get_address_of_OptionsManagerInputs_5() { return &___OptionsManagerInputs_5; }
	inline void set_OptionsManagerInputs_5(GameObject_t1113636619 * value)
	{
		___OptionsManagerInputs_5 = value;
		Il2CppCodeGenWriteBarrier((&___OptionsManagerInputs_5), value);
	}

	inline static int32_t get_offset_of_playerBody_6() { return static_cast<int32_t>(offsetof(Data_Loaded_Manager_t1271507630, ___playerBody_6)); }
	inline SkinnedMeshRenderer_t245602842 * get_playerBody_6() const { return ___playerBody_6; }
	inline SkinnedMeshRenderer_t245602842 ** get_address_of_playerBody_6() { return &___playerBody_6; }
	inline void set_playerBody_6(SkinnedMeshRenderer_t245602842 * value)
	{
		___playerBody_6 = value;
		Il2CppCodeGenWriteBarrier((&___playerBody_6), value);
	}

	inline static int32_t get_offset_of_objectList_7() { return static_cast<int32_t>(offsetof(Data_Loaded_Manager_t1271507630, ___objectList_7)); }
	inline List_1_t2585711361 * get_objectList_7() const { return ___objectList_7; }
	inline List_1_t2585711361 ** get_address_of_objectList_7() { return &___objectList_7; }
	inline void set_objectList_7(List_1_t2585711361 * value)
	{
		___objectList_7 = value;
		Il2CppCodeGenWriteBarrier((&___objectList_7), value);
	}

	inline static int32_t get_offset_of_bgmSource_8() { return static_cast<int32_t>(offsetof(Data_Loaded_Manager_t1271507630, ___bgmSource_8)); }
	inline AudioSource_t3935305588 * get_bgmSource_8() const { return ___bgmSource_8; }
	inline AudioSource_t3935305588 ** get_address_of_bgmSource_8() { return &___bgmSource_8; }
	inline void set_bgmSource_8(AudioSource_t3935305588 * value)
	{
		___bgmSource_8 = value;
		Il2CppCodeGenWriteBarrier((&___bgmSource_8), value);
	}

	inline static int32_t get_offset_of_sfxSource_9() { return static_cast<int32_t>(offsetof(Data_Loaded_Manager_t1271507630, ___sfxSource_9)); }
	inline AudioSource_t3935305588 * get_sfxSource_9() const { return ___sfxSource_9; }
	inline AudioSource_t3935305588 ** get_address_of_sfxSource_9() { return &___sfxSource_9; }
	inline void set_sfxSource_9(AudioSource_t3935305588 * value)
	{
		___sfxSource_9 = value;
		Il2CppCodeGenWriteBarrier((&___sfxSource_9), value);
	}

	inline static int32_t get_offset_of_ambientSource_10() { return static_cast<int32_t>(offsetof(Data_Loaded_Manager_t1271507630, ___ambientSource_10)); }
	inline AudioSource_t3935305588 * get_ambientSource_10() const { return ___ambientSource_10; }
	inline AudioSource_t3935305588 ** get_address_of_ambientSource_10() { return &___ambientSource_10; }
	inline void set_ambientSource_10(AudioSource_t3935305588 * value)
	{
		___ambientSource_10 = value;
		Il2CppCodeGenWriteBarrier((&___ambientSource_10), value);
	}

	inline static int32_t get_offset_of_thunderStormSource_11() { return static_cast<int32_t>(offsetof(Data_Loaded_Manager_t1271507630, ___thunderStormSource_11)); }
	inline AudioSource_t3935305588 * get_thunderStormSource_11() const { return ___thunderStormSource_11; }
	inline AudioSource_t3935305588 ** get_address_of_thunderStormSource_11() { return &___thunderStormSource_11; }
	inline void set_thunderStormSource_11(AudioSource_t3935305588 * value)
	{
		___thunderStormSource_11 = value;
		Il2CppCodeGenWriteBarrier((&___thunderStormSource_11), value);
	}

	inline static int32_t get_offset_of_rainSource_12() { return static_cast<int32_t>(offsetof(Data_Loaded_Manager_t1271507630, ___rainSource_12)); }
	inline AudioSource_t3935305588 * get_rainSource_12() const { return ___rainSource_12; }
	inline AudioSource_t3935305588 ** get_address_of_rainSource_12() { return &___rainSource_12; }
	inline void set_rainSource_12(AudioSource_t3935305588 * value)
	{
		___rainSource_12 = value;
		Il2CppCodeGenWriteBarrier((&___rainSource_12), value);
	}

	inline static int32_t get_offset_of_SFXLevel_13() { return static_cast<int32_t>(offsetof(Data_Loaded_Manager_t1271507630, ___SFXLevel_13)); }
	inline Image_t2670269651 * get_SFXLevel_13() const { return ___SFXLevel_13; }
	inline Image_t2670269651 ** get_address_of_SFXLevel_13() { return &___SFXLevel_13; }
	inline void set_SFXLevel_13(Image_t2670269651 * value)
	{
		___SFXLevel_13 = value;
		Il2CppCodeGenWriteBarrier((&___SFXLevel_13), value);
	}
};

struct Data_Loaded_Manager_t1271507630_StaticFields
{
public:
	// System.Int32 Data_Loaded_Manager::PainValue
	int32_t ___PainValue_14;

public:
	inline static int32_t get_offset_of_PainValue_14() { return static_cast<int32_t>(offsetof(Data_Loaded_Manager_t1271507630_StaticFields, ___PainValue_14)); }
	inline int32_t get_PainValue_14() const { return ___PainValue_14; }
	inline int32_t* get_address_of_PainValue_14() { return &___PainValue_14; }
	inline void set_PainValue_14(int32_t value)
	{
		___PainValue_14 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // DATA_LOADED_MANAGER_T1271507630_H
#ifndef BASERAINSCRIPT_T980278882_H
#define BASERAINSCRIPT_T980278882_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// DigitalRuby.RainMaker.BaseRainScript
struct  BaseRainScript_t980278882  : public MonoBehaviour_t3962482529
{
public:
	// UnityEngine.Camera DigitalRuby.RainMaker.BaseRainScript::Camera
	Camera_t4157153871 * ___Camera_4;
	// System.Boolean DigitalRuby.RainMaker.BaseRainScript::FollowCamera
	bool ___FollowCamera_5;
	// UnityEngine.AudioClip DigitalRuby.RainMaker.BaseRainScript::RainSoundLight
	AudioClip_t3680889665 * ___RainSoundLight_6;
	// UnityEngine.AudioClip DigitalRuby.RainMaker.BaseRainScript::RainSoundMedium
	AudioClip_t3680889665 * ___RainSoundMedium_7;
	// UnityEngine.AudioClip DigitalRuby.RainMaker.BaseRainScript::RainSoundHeavy
	AudioClip_t3680889665 * ___RainSoundHeavy_8;
	// UnityEngine.Audio.AudioMixerGroup DigitalRuby.RainMaker.BaseRainScript::RainSoundAudioMixer
	AudioMixerGroup_t2743564464 * ___RainSoundAudioMixer_9;
	// System.Single DigitalRuby.RainMaker.BaseRainScript::RainIntensity
	float ___RainIntensity_10;
	// UnityEngine.ParticleSystem DigitalRuby.RainMaker.BaseRainScript::RainFallParticleSystem
	ParticleSystem_t1800779281 * ___RainFallParticleSystem_11;
	// UnityEngine.ParticleSystem DigitalRuby.RainMaker.BaseRainScript::RainExplosionParticleSystem
	ParticleSystem_t1800779281 * ___RainExplosionParticleSystem_12;
	// UnityEngine.ParticleSystem DigitalRuby.RainMaker.BaseRainScript::RainMistParticleSystem
	ParticleSystem_t1800779281 * ___RainMistParticleSystem_13;
	// System.Single DigitalRuby.RainMaker.BaseRainScript::RainMistThreshold
	float ___RainMistThreshold_14;
	// UnityEngine.AudioClip DigitalRuby.RainMaker.BaseRainScript::WindSound
	AudioClip_t3680889665 * ___WindSound_15;
	// System.Single DigitalRuby.RainMaker.BaseRainScript::WindSoundVolumeModifier
	float ___WindSoundVolumeModifier_16;
	// UnityEngine.WindZone DigitalRuby.RainMaker.BaseRainScript::WindZone
	WindZone_t1835817526 * ___WindZone_17;
	// UnityEngine.Vector3 DigitalRuby.RainMaker.BaseRainScript::WindSpeedRange
	Vector3_t3722313464  ___WindSpeedRange_18;
	// UnityEngine.Vector2 DigitalRuby.RainMaker.BaseRainScript::WindChangeInterval
	Vector2_t2156229523  ___WindChangeInterval_19;
	// System.Boolean DigitalRuby.RainMaker.BaseRainScript::EnableWind
	bool ___EnableWind_20;
	// DigitalRuby.RainMaker.LoopingAudioSource DigitalRuby.RainMaker.BaseRainScript::audioSourceRainLight
	LoopingAudioSource_t2892973928 * ___audioSourceRainLight_21;
	// DigitalRuby.RainMaker.LoopingAudioSource DigitalRuby.RainMaker.BaseRainScript::audioSourceRainMedium
	LoopingAudioSource_t2892973928 * ___audioSourceRainMedium_22;
	// DigitalRuby.RainMaker.LoopingAudioSource DigitalRuby.RainMaker.BaseRainScript::audioSourceRainHeavy
	LoopingAudioSource_t2892973928 * ___audioSourceRainHeavy_23;
	// DigitalRuby.RainMaker.LoopingAudioSource DigitalRuby.RainMaker.BaseRainScript::audioSourceRainCurrent
	LoopingAudioSource_t2892973928 * ___audioSourceRainCurrent_24;
	// DigitalRuby.RainMaker.LoopingAudioSource DigitalRuby.RainMaker.BaseRainScript::audioSourceWind
	LoopingAudioSource_t2892973928 * ___audioSourceWind_25;
	// UnityEngine.Material DigitalRuby.RainMaker.BaseRainScript::rainMaterial
	Material_t340375123 * ___rainMaterial_26;
	// UnityEngine.Material DigitalRuby.RainMaker.BaseRainScript::rainExplosionMaterial
	Material_t340375123 * ___rainExplosionMaterial_27;
	// UnityEngine.Material DigitalRuby.RainMaker.BaseRainScript::rainMistMaterial
	Material_t340375123 * ___rainMistMaterial_28;
	// System.Single DigitalRuby.RainMaker.BaseRainScript::lastRainIntensityValue
	float ___lastRainIntensityValue_29;
	// System.Single DigitalRuby.RainMaker.BaseRainScript::nextWindTime
	float ___nextWindTime_30;

public:
	inline static int32_t get_offset_of_Camera_4() { return static_cast<int32_t>(offsetof(BaseRainScript_t980278882, ___Camera_4)); }
	inline Camera_t4157153871 * get_Camera_4() const { return ___Camera_4; }
	inline Camera_t4157153871 ** get_address_of_Camera_4() { return &___Camera_4; }
	inline void set_Camera_4(Camera_t4157153871 * value)
	{
		___Camera_4 = value;
		Il2CppCodeGenWriteBarrier((&___Camera_4), value);
	}

	inline static int32_t get_offset_of_FollowCamera_5() { return static_cast<int32_t>(offsetof(BaseRainScript_t980278882, ___FollowCamera_5)); }
	inline bool get_FollowCamera_5() const { return ___FollowCamera_5; }
	inline bool* get_address_of_FollowCamera_5() { return &___FollowCamera_5; }
	inline void set_FollowCamera_5(bool value)
	{
		___FollowCamera_5 = value;
	}

	inline static int32_t get_offset_of_RainSoundLight_6() { return static_cast<int32_t>(offsetof(BaseRainScript_t980278882, ___RainSoundLight_6)); }
	inline AudioClip_t3680889665 * get_RainSoundLight_6() const { return ___RainSoundLight_6; }
	inline AudioClip_t3680889665 ** get_address_of_RainSoundLight_6() { return &___RainSoundLight_6; }
	inline void set_RainSoundLight_6(AudioClip_t3680889665 * value)
	{
		___RainSoundLight_6 = value;
		Il2CppCodeGenWriteBarrier((&___RainSoundLight_6), value);
	}

	inline static int32_t get_offset_of_RainSoundMedium_7() { return static_cast<int32_t>(offsetof(BaseRainScript_t980278882, ___RainSoundMedium_7)); }
	inline AudioClip_t3680889665 * get_RainSoundMedium_7() const { return ___RainSoundMedium_7; }
	inline AudioClip_t3680889665 ** get_address_of_RainSoundMedium_7() { return &___RainSoundMedium_7; }
	inline void set_RainSoundMedium_7(AudioClip_t3680889665 * value)
	{
		___RainSoundMedium_7 = value;
		Il2CppCodeGenWriteBarrier((&___RainSoundMedium_7), value);
	}

	inline static int32_t get_offset_of_RainSoundHeavy_8() { return static_cast<int32_t>(offsetof(BaseRainScript_t980278882, ___RainSoundHeavy_8)); }
	inline AudioClip_t3680889665 * get_RainSoundHeavy_8() const { return ___RainSoundHeavy_8; }
	inline AudioClip_t3680889665 ** get_address_of_RainSoundHeavy_8() { return &___RainSoundHeavy_8; }
	inline void set_RainSoundHeavy_8(AudioClip_t3680889665 * value)
	{
		___RainSoundHeavy_8 = value;
		Il2CppCodeGenWriteBarrier((&___RainSoundHeavy_8), value);
	}

	inline static int32_t get_offset_of_RainSoundAudioMixer_9() { return static_cast<int32_t>(offsetof(BaseRainScript_t980278882, ___RainSoundAudioMixer_9)); }
	inline AudioMixerGroup_t2743564464 * get_RainSoundAudioMixer_9() const { return ___RainSoundAudioMixer_9; }
	inline AudioMixerGroup_t2743564464 ** get_address_of_RainSoundAudioMixer_9() { return &___RainSoundAudioMixer_9; }
	inline void set_RainSoundAudioMixer_9(AudioMixerGroup_t2743564464 * value)
	{
		___RainSoundAudioMixer_9 = value;
		Il2CppCodeGenWriteBarrier((&___RainSoundAudioMixer_9), value);
	}

	inline static int32_t get_offset_of_RainIntensity_10() { return static_cast<int32_t>(offsetof(BaseRainScript_t980278882, ___RainIntensity_10)); }
	inline float get_RainIntensity_10() const { return ___RainIntensity_10; }
	inline float* get_address_of_RainIntensity_10() { return &___RainIntensity_10; }
	inline void set_RainIntensity_10(float value)
	{
		___RainIntensity_10 = value;
	}

	inline static int32_t get_offset_of_RainFallParticleSystem_11() { return static_cast<int32_t>(offsetof(BaseRainScript_t980278882, ___RainFallParticleSystem_11)); }
	inline ParticleSystem_t1800779281 * get_RainFallParticleSystem_11() const { return ___RainFallParticleSystem_11; }
	inline ParticleSystem_t1800779281 ** get_address_of_RainFallParticleSystem_11() { return &___RainFallParticleSystem_11; }
	inline void set_RainFallParticleSystem_11(ParticleSystem_t1800779281 * value)
	{
		___RainFallParticleSystem_11 = value;
		Il2CppCodeGenWriteBarrier((&___RainFallParticleSystem_11), value);
	}

	inline static int32_t get_offset_of_RainExplosionParticleSystem_12() { return static_cast<int32_t>(offsetof(BaseRainScript_t980278882, ___RainExplosionParticleSystem_12)); }
	inline ParticleSystem_t1800779281 * get_RainExplosionParticleSystem_12() const { return ___RainExplosionParticleSystem_12; }
	inline ParticleSystem_t1800779281 ** get_address_of_RainExplosionParticleSystem_12() { return &___RainExplosionParticleSystem_12; }
	inline void set_RainExplosionParticleSystem_12(ParticleSystem_t1800779281 * value)
	{
		___RainExplosionParticleSystem_12 = value;
		Il2CppCodeGenWriteBarrier((&___RainExplosionParticleSystem_12), value);
	}

	inline static int32_t get_offset_of_RainMistParticleSystem_13() { return static_cast<int32_t>(offsetof(BaseRainScript_t980278882, ___RainMistParticleSystem_13)); }
	inline ParticleSystem_t1800779281 * get_RainMistParticleSystem_13() const { return ___RainMistParticleSystem_13; }
	inline ParticleSystem_t1800779281 ** get_address_of_RainMistParticleSystem_13() { return &___RainMistParticleSystem_13; }
	inline void set_RainMistParticleSystem_13(ParticleSystem_t1800779281 * value)
	{
		___RainMistParticleSystem_13 = value;
		Il2CppCodeGenWriteBarrier((&___RainMistParticleSystem_13), value);
	}

	inline static int32_t get_offset_of_RainMistThreshold_14() { return static_cast<int32_t>(offsetof(BaseRainScript_t980278882, ___RainMistThreshold_14)); }
	inline float get_RainMistThreshold_14() const { return ___RainMistThreshold_14; }
	inline float* get_address_of_RainMistThreshold_14() { return &___RainMistThreshold_14; }
	inline void set_RainMistThreshold_14(float value)
	{
		___RainMistThreshold_14 = value;
	}

	inline static int32_t get_offset_of_WindSound_15() { return static_cast<int32_t>(offsetof(BaseRainScript_t980278882, ___WindSound_15)); }
	inline AudioClip_t3680889665 * get_WindSound_15() const { return ___WindSound_15; }
	inline AudioClip_t3680889665 ** get_address_of_WindSound_15() { return &___WindSound_15; }
	inline void set_WindSound_15(AudioClip_t3680889665 * value)
	{
		___WindSound_15 = value;
		Il2CppCodeGenWriteBarrier((&___WindSound_15), value);
	}

	inline static int32_t get_offset_of_WindSoundVolumeModifier_16() { return static_cast<int32_t>(offsetof(BaseRainScript_t980278882, ___WindSoundVolumeModifier_16)); }
	inline float get_WindSoundVolumeModifier_16() const { return ___WindSoundVolumeModifier_16; }
	inline float* get_address_of_WindSoundVolumeModifier_16() { return &___WindSoundVolumeModifier_16; }
	inline void set_WindSoundVolumeModifier_16(float value)
	{
		___WindSoundVolumeModifier_16 = value;
	}

	inline static int32_t get_offset_of_WindZone_17() { return static_cast<int32_t>(offsetof(BaseRainScript_t980278882, ___WindZone_17)); }
	inline WindZone_t1835817526 * get_WindZone_17() const { return ___WindZone_17; }
	inline WindZone_t1835817526 ** get_address_of_WindZone_17() { return &___WindZone_17; }
	inline void set_WindZone_17(WindZone_t1835817526 * value)
	{
		___WindZone_17 = value;
		Il2CppCodeGenWriteBarrier((&___WindZone_17), value);
	}

	inline static int32_t get_offset_of_WindSpeedRange_18() { return static_cast<int32_t>(offsetof(BaseRainScript_t980278882, ___WindSpeedRange_18)); }
	inline Vector3_t3722313464  get_WindSpeedRange_18() const { return ___WindSpeedRange_18; }
	inline Vector3_t3722313464 * get_address_of_WindSpeedRange_18() { return &___WindSpeedRange_18; }
	inline void set_WindSpeedRange_18(Vector3_t3722313464  value)
	{
		___WindSpeedRange_18 = value;
	}

	inline static int32_t get_offset_of_WindChangeInterval_19() { return static_cast<int32_t>(offsetof(BaseRainScript_t980278882, ___WindChangeInterval_19)); }
	inline Vector2_t2156229523  get_WindChangeInterval_19() const { return ___WindChangeInterval_19; }
	inline Vector2_t2156229523 * get_address_of_WindChangeInterval_19() { return &___WindChangeInterval_19; }
	inline void set_WindChangeInterval_19(Vector2_t2156229523  value)
	{
		___WindChangeInterval_19 = value;
	}

	inline static int32_t get_offset_of_EnableWind_20() { return static_cast<int32_t>(offsetof(BaseRainScript_t980278882, ___EnableWind_20)); }
	inline bool get_EnableWind_20() const { return ___EnableWind_20; }
	inline bool* get_address_of_EnableWind_20() { return &___EnableWind_20; }
	inline void set_EnableWind_20(bool value)
	{
		___EnableWind_20 = value;
	}

	inline static int32_t get_offset_of_audioSourceRainLight_21() { return static_cast<int32_t>(offsetof(BaseRainScript_t980278882, ___audioSourceRainLight_21)); }
	inline LoopingAudioSource_t2892973928 * get_audioSourceRainLight_21() const { return ___audioSourceRainLight_21; }
	inline LoopingAudioSource_t2892973928 ** get_address_of_audioSourceRainLight_21() { return &___audioSourceRainLight_21; }
	inline void set_audioSourceRainLight_21(LoopingAudioSource_t2892973928 * value)
	{
		___audioSourceRainLight_21 = value;
		Il2CppCodeGenWriteBarrier((&___audioSourceRainLight_21), value);
	}

	inline static int32_t get_offset_of_audioSourceRainMedium_22() { return static_cast<int32_t>(offsetof(BaseRainScript_t980278882, ___audioSourceRainMedium_22)); }
	inline LoopingAudioSource_t2892973928 * get_audioSourceRainMedium_22() const { return ___audioSourceRainMedium_22; }
	inline LoopingAudioSource_t2892973928 ** get_address_of_audioSourceRainMedium_22() { return &___audioSourceRainMedium_22; }
	inline void set_audioSourceRainMedium_22(LoopingAudioSource_t2892973928 * value)
	{
		___audioSourceRainMedium_22 = value;
		Il2CppCodeGenWriteBarrier((&___audioSourceRainMedium_22), value);
	}

	inline static int32_t get_offset_of_audioSourceRainHeavy_23() { return static_cast<int32_t>(offsetof(BaseRainScript_t980278882, ___audioSourceRainHeavy_23)); }
	inline LoopingAudioSource_t2892973928 * get_audioSourceRainHeavy_23() const { return ___audioSourceRainHeavy_23; }
	inline LoopingAudioSource_t2892973928 ** get_address_of_audioSourceRainHeavy_23() { return &___audioSourceRainHeavy_23; }
	inline void set_audioSourceRainHeavy_23(LoopingAudioSource_t2892973928 * value)
	{
		___audioSourceRainHeavy_23 = value;
		Il2CppCodeGenWriteBarrier((&___audioSourceRainHeavy_23), value);
	}

	inline static int32_t get_offset_of_audioSourceRainCurrent_24() { return static_cast<int32_t>(offsetof(BaseRainScript_t980278882, ___audioSourceRainCurrent_24)); }
	inline LoopingAudioSource_t2892973928 * get_audioSourceRainCurrent_24() const { return ___audioSourceRainCurrent_24; }
	inline LoopingAudioSource_t2892973928 ** get_address_of_audioSourceRainCurrent_24() { return &___audioSourceRainCurrent_24; }
	inline void set_audioSourceRainCurrent_24(LoopingAudioSource_t2892973928 * value)
	{
		___audioSourceRainCurrent_24 = value;
		Il2CppCodeGenWriteBarrier((&___audioSourceRainCurrent_24), value);
	}

	inline static int32_t get_offset_of_audioSourceWind_25() { return static_cast<int32_t>(offsetof(BaseRainScript_t980278882, ___audioSourceWind_25)); }
	inline LoopingAudioSource_t2892973928 * get_audioSourceWind_25() const { return ___audioSourceWind_25; }
	inline LoopingAudioSource_t2892973928 ** get_address_of_audioSourceWind_25() { return &___audioSourceWind_25; }
	inline void set_audioSourceWind_25(LoopingAudioSource_t2892973928 * value)
	{
		___audioSourceWind_25 = value;
		Il2CppCodeGenWriteBarrier((&___audioSourceWind_25), value);
	}

	inline static int32_t get_offset_of_rainMaterial_26() { return static_cast<int32_t>(offsetof(BaseRainScript_t980278882, ___rainMaterial_26)); }
	inline Material_t340375123 * get_rainMaterial_26() const { return ___rainMaterial_26; }
	inline Material_t340375123 ** get_address_of_rainMaterial_26() { return &___rainMaterial_26; }
	inline void set_rainMaterial_26(Material_t340375123 * value)
	{
		___rainMaterial_26 = value;
		Il2CppCodeGenWriteBarrier((&___rainMaterial_26), value);
	}

	inline static int32_t get_offset_of_rainExplosionMaterial_27() { return static_cast<int32_t>(offsetof(BaseRainScript_t980278882, ___rainExplosionMaterial_27)); }
	inline Material_t340375123 * get_rainExplosionMaterial_27() const { return ___rainExplosionMaterial_27; }
	inline Material_t340375123 ** get_address_of_rainExplosionMaterial_27() { return &___rainExplosionMaterial_27; }
	inline void set_rainExplosionMaterial_27(Material_t340375123 * value)
	{
		___rainExplosionMaterial_27 = value;
		Il2CppCodeGenWriteBarrier((&___rainExplosionMaterial_27), value);
	}

	inline static int32_t get_offset_of_rainMistMaterial_28() { return static_cast<int32_t>(offsetof(BaseRainScript_t980278882, ___rainMistMaterial_28)); }
	inline Material_t340375123 * get_rainMistMaterial_28() const { return ___rainMistMaterial_28; }
	inline Material_t340375123 ** get_address_of_rainMistMaterial_28() { return &___rainMistMaterial_28; }
	inline void set_rainMistMaterial_28(Material_t340375123 * value)
	{
		___rainMistMaterial_28 = value;
		Il2CppCodeGenWriteBarrier((&___rainMistMaterial_28), value);
	}

	inline static int32_t get_offset_of_lastRainIntensityValue_29() { return static_cast<int32_t>(offsetof(BaseRainScript_t980278882, ___lastRainIntensityValue_29)); }
	inline float get_lastRainIntensityValue_29() const { return ___lastRainIntensityValue_29; }
	inline float* get_address_of_lastRainIntensityValue_29() { return &___lastRainIntensityValue_29; }
	inline void set_lastRainIntensityValue_29(float value)
	{
		___lastRainIntensityValue_29 = value;
	}

	inline static int32_t get_offset_of_nextWindTime_30() { return static_cast<int32_t>(offsetof(BaseRainScript_t980278882, ___nextWindTime_30)); }
	inline float get_nextWindTime_30() const { return ___nextWindTime_30; }
	inline float* get_address_of_nextWindTime_30() { return &___nextWindTime_30; }
	inline void set_nextWindTime_30(float value)
	{
		___nextWindTime_30 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // BASERAINSCRIPT_T980278882_H
#ifndef RAINCOLLISION_T1762856611_H
#define RAINCOLLISION_T1762856611_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// DigitalRuby.RainMaker.RainCollision
struct  RainCollision_t1762856611  : public MonoBehaviour_t3962482529
{
public:
	// System.Collections.Generic.List`1<UnityEngine.ParticleCollisionEvent> DigitalRuby.RainMaker.RainCollision::collisionEvents
	List_1_t1232140387 * ___collisionEvents_5;
	// UnityEngine.ParticleSystem DigitalRuby.RainMaker.RainCollision::RainExplosion
	ParticleSystem_t1800779281 * ___RainExplosion_6;
	// UnityEngine.ParticleSystem DigitalRuby.RainMaker.RainCollision::RainParticleSystem
	ParticleSystem_t1800779281 * ___RainParticleSystem_7;

public:
	inline static int32_t get_offset_of_collisionEvents_5() { return static_cast<int32_t>(offsetof(RainCollision_t1762856611, ___collisionEvents_5)); }
	inline List_1_t1232140387 * get_collisionEvents_5() const { return ___collisionEvents_5; }
	inline List_1_t1232140387 ** get_address_of_collisionEvents_5() { return &___collisionEvents_5; }
	inline void set_collisionEvents_5(List_1_t1232140387 * value)
	{
		___collisionEvents_5 = value;
		Il2CppCodeGenWriteBarrier((&___collisionEvents_5), value);
	}

	inline static int32_t get_offset_of_RainExplosion_6() { return static_cast<int32_t>(offsetof(RainCollision_t1762856611, ___RainExplosion_6)); }
	inline ParticleSystem_t1800779281 * get_RainExplosion_6() const { return ___RainExplosion_6; }
	inline ParticleSystem_t1800779281 ** get_address_of_RainExplosion_6() { return &___RainExplosion_6; }
	inline void set_RainExplosion_6(ParticleSystem_t1800779281 * value)
	{
		___RainExplosion_6 = value;
		Il2CppCodeGenWriteBarrier((&___RainExplosion_6), value);
	}

	inline static int32_t get_offset_of_RainParticleSystem_7() { return static_cast<int32_t>(offsetof(RainCollision_t1762856611, ___RainParticleSystem_7)); }
	inline ParticleSystem_t1800779281 * get_RainParticleSystem_7() const { return ___RainParticleSystem_7; }
	inline ParticleSystem_t1800779281 ** get_address_of_RainParticleSystem_7() { return &___RainParticleSystem_7; }
	inline void set_RainParticleSystem_7(ParticleSystem_t1800779281 * value)
	{
		___RainParticleSystem_7 = value;
		Il2CppCodeGenWriteBarrier((&___RainParticleSystem_7), value);
	}
};

struct RainCollision_t1762856611_StaticFields
{
public:
	// UnityEngine.Color32 DigitalRuby.RainMaker.RainCollision::color
	Color32_t2600501292  ___color_4;

public:
	inline static int32_t get_offset_of_color_4() { return static_cast<int32_t>(offsetof(RainCollision_t1762856611_StaticFields, ___color_4)); }
	inline Color32_t2600501292  get_color_4() const { return ___color_4; }
	inline Color32_t2600501292 * get_address_of_color_4() { return &___color_4; }
	inline void set_color_4(Color32_t2600501292  value)
	{
		___color_4 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // RAINCOLLISION_T1762856611_H
#ifndef ENEMYCONTROLLER_T2191660454_H
#define ENEMYCONTROLLER_T2191660454_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// EnemyController
struct  EnemyController_t2191660454  : public MonoBehaviour_t3962482529
{
public:
	// UnityEngine.Vector3 EnemyController::startingPosition
	Vector3_t3722313464  ___startingPosition_4;
	// UnityEngine.Collider[] EnemyController::rangeChecks
	ColliderU5BU5D_t4234922487* ___rangeChecks_5;
	// System.Boolean EnemyController::onMesh
	bool ___onMesh_6;
	// EnemyController/enemyType EnemyController::typeOfEnemy
	int32_t ___typeOfEnemy_7;
	// UnityEngine.Animator EnemyController::enemyAnimator
	Animator_t434523843 * ___enemyAnimator_8;
	// UnityEngine.GameObject EnemyController::player
	GameObject_t1113636619 * ___player_9;
	// UnityEngine.GameObject EnemyController::targetPoint
	GameObject_t1113636619 * ___targetPoint_10;
	// UnityEngine.GameObject EnemyController::randomPointObject
	GameObject_t1113636619 * ___randomPointObject_11;
	// UnityEngine.AI.NavMeshAgent EnemyController::meshAgent
	NavMeshAgent_t1276799816 * ___meshAgent_12;
	// System.Single EnemyController::turnSpeed
	float ___turnSpeed_13;
	// System.Single EnemyController::viewRadius
	float ___viewRadius_14;
	// System.Single EnemyController::fovAngle
	float ___fovAngle_15;
	// UnityEngine.LayerMask EnemyController::targetMask
	LayerMask_t3493934918  ___targetMask_16;
	// UnityEngine.LayerMask EnemyController::obstructionMask
	LayerMask_t3493934918  ___obstructionMask_17;
	// System.Single EnemyController::distanceToPlayer
	float ___distanceToPlayer_18;
	// System.Boolean EnemyController::isPlayerNear
	bool ___isPlayerNear_19;
	// System.Boolean EnemyController::canSeePlayer
	bool ___canSeePlayer_20;
	// EnemyController/EnemyState EnemyController::behaviorState
	int32_t ___behaviorState_21;
	// System.Single EnemyController::alertDelay
	float ___alertDelay_22;
	// System.Single EnemyController::lookDelay
	float ___lookDelay_23;
	// System.Boolean EnemyController::alerted
	bool ___alerted_24;
	// System.Boolean EnemyController::lookingForPlayer
	bool ___lookingForPlayer_25;
	// System.Boolean EnemyController::roaming
	bool ___roaming_26;
	// System.Boolean EnemyController::isPlayerRunning
	bool ___isPlayerRunning_27;
	// System.Boolean EnemyController::flashlightDisabled
	bool ___flashlightDisabled_28;
	// UnityEngine.Vector3 EnemyController::randomCircle
	Vector3_t3722313464  ___randomCircle_29;

public:
	inline static int32_t get_offset_of_startingPosition_4() { return static_cast<int32_t>(offsetof(EnemyController_t2191660454, ___startingPosition_4)); }
	inline Vector3_t3722313464  get_startingPosition_4() const { return ___startingPosition_4; }
	inline Vector3_t3722313464 * get_address_of_startingPosition_4() { return &___startingPosition_4; }
	inline void set_startingPosition_4(Vector3_t3722313464  value)
	{
		___startingPosition_4 = value;
	}

	inline static int32_t get_offset_of_rangeChecks_5() { return static_cast<int32_t>(offsetof(EnemyController_t2191660454, ___rangeChecks_5)); }
	inline ColliderU5BU5D_t4234922487* get_rangeChecks_5() const { return ___rangeChecks_5; }
	inline ColliderU5BU5D_t4234922487** get_address_of_rangeChecks_5() { return &___rangeChecks_5; }
	inline void set_rangeChecks_5(ColliderU5BU5D_t4234922487* value)
	{
		___rangeChecks_5 = value;
		Il2CppCodeGenWriteBarrier((&___rangeChecks_5), value);
	}

	inline static int32_t get_offset_of_onMesh_6() { return static_cast<int32_t>(offsetof(EnemyController_t2191660454, ___onMesh_6)); }
	inline bool get_onMesh_6() const { return ___onMesh_6; }
	inline bool* get_address_of_onMesh_6() { return &___onMesh_6; }
	inline void set_onMesh_6(bool value)
	{
		___onMesh_6 = value;
	}

	inline static int32_t get_offset_of_typeOfEnemy_7() { return static_cast<int32_t>(offsetof(EnemyController_t2191660454, ___typeOfEnemy_7)); }
	inline int32_t get_typeOfEnemy_7() const { return ___typeOfEnemy_7; }
	inline int32_t* get_address_of_typeOfEnemy_7() { return &___typeOfEnemy_7; }
	inline void set_typeOfEnemy_7(int32_t value)
	{
		___typeOfEnemy_7 = value;
	}

	inline static int32_t get_offset_of_enemyAnimator_8() { return static_cast<int32_t>(offsetof(EnemyController_t2191660454, ___enemyAnimator_8)); }
	inline Animator_t434523843 * get_enemyAnimator_8() const { return ___enemyAnimator_8; }
	inline Animator_t434523843 ** get_address_of_enemyAnimator_8() { return &___enemyAnimator_8; }
	inline void set_enemyAnimator_8(Animator_t434523843 * value)
	{
		___enemyAnimator_8 = value;
		Il2CppCodeGenWriteBarrier((&___enemyAnimator_8), value);
	}

	inline static int32_t get_offset_of_player_9() { return static_cast<int32_t>(offsetof(EnemyController_t2191660454, ___player_9)); }
	inline GameObject_t1113636619 * get_player_9() const { return ___player_9; }
	inline GameObject_t1113636619 ** get_address_of_player_9() { return &___player_9; }
	inline void set_player_9(GameObject_t1113636619 * value)
	{
		___player_9 = value;
		Il2CppCodeGenWriteBarrier((&___player_9), value);
	}

	inline static int32_t get_offset_of_targetPoint_10() { return static_cast<int32_t>(offsetof(EnemyController_t2191660454, ___targetPoint_10)); }
	inline GameObject_t1113636619 * get_targetPoint_10() const { return ___targetPoint_10; }
	inline GameObject_t1113636619 ** get_address_of_targetPoint_10() { return &___targetPoint_10; }
	inline void set_targetPoint_10(GameObject_t1113636619 * value)
	{
		___targetPoint_10 = value;
		Il2CppCodeGenWriteBarrier((&___targetPoint_10), value);
	}

	inline static int32_t get_offset_of_randomPointObject_11() { return static_cast<int32_t>(offsetof(EnemyController_t2191660454, ___randomPointObject_11)); }
	inline GameObject_t1113636619 * get_randomPointObject_11() const { return ___randomPointObject_11; }
	inline GameObject_t1113636619 ** get_address_of_randomPointObject_11() { return &___randomPointObject_11; }
	inline void set_randomPointObject_11(GameObject_t1113636619 * value)
	{
		___randomPointObject_11 = value;
		Il2CppCodeGenWriteBarrier((&___randomPointObject_11), value);
	}

	inline static int32_t get_offset_of_meshAgent_12() { return static_cast<int32_t>(offsetof(EnemyController_t2191660454, ___meshAgent_12)); }
	inline NavMeshAgent_t1276799816 * get_meshAgent_12() const { return ___meshAgent_12; }
	inline NavMeshAgent_t1276799816 ** get_address_of_meshAgent_12() { return &___meshAgent_12; }
	inline void set_meshAgent_12(NavMeshAgent_t1276799816 * value)
	{
		___meshAgent_12 = value;
		Il2CppCodeGenWriteBarrier((&___meshAgent_12), value);
	}

	inline static int32_t get_offset_of_turnSpeed_13() { return static_cast<int32_t>(offsetof(EnemyController_t2191660454, ___turnSpeed_13)); }
	inline float get_turnSpeed_13() const { return ___turnSpeed_13; }
	inline float* get_address_of_turnSpeed_13() { return &___turnSpeed_13; }
	inline void set_turnSpeed_13(float value)
	{
		___turnSpeed_13 = value;
	}

	inline static int32_t get_offset_of_viewRadius_14() { return static_cast<int32_t>(offsetof(EnemyController_t2191660454, ___viewRadius_14)); }
	inline float get_viewRadius_14() const { return ___viewRadius_14; }
	inline float* get_address_of_viewRadius_14() { return &___viewRadius_14; }
	inline void set_viewRadius_14(float value)
	{
		___viewRadius_14 = value;
	}

	inline static int32_t get_offset_of_fovAngle_15() { return static_cast<int32_t>(offsetof(EnemyController_t2191660454, ___fovAngle_15)); }
	inline float get_fovAngle_15() const { return ___fovAngle_15; }
	inline float* get_address_of_fovAngle_15() { return &___fovAngle_15; }
	inline void set_fovAngle_15(float value)
	{
		___fovAngle_15 = value;
	}

	inline static int32_t get_offset_of_targetMask_16() { return static_cast<int32_t>(offsetof(EnemyController_t2191660454, ___targetMask_16)); }
	inline LayerMask_t3493934918  get_targetMask_16() const { return ___targetMask_16; }
	inline LayerMask_t3493934918 * get_address_of_targetMask_16() { return &___targetMask_16; }
	inline void set_targetMask_16(LayerMask_t3493934918  value)
	{
		___targetMask_16 = value;
	}

	inline static int32_t get_offset_of_obstructionMask_17() { return static_cast<int32_t>(offsetof(EnemyController_t2191660454, ___obstructionMask_17)); }
	inline LayerMask_t3493934918  get_obstructionMask_17() const { return ___obstructionMask_17; }
	inline LayerMask_t3493934918 * get_address_of_obstructionMask_17() { return &___obstructionMask_17; }
	inline void set_obstructionMask_17(LayerMask_t3493934918  value)
	{
		___obstructionMask_17 = value;
	}

	inline static int32_t get_offset_of_distanceToPlayer_18() { return static_cast<int32_t>(offsetof(EnemyController_t2191660454, ___distanceToPlayer_18)); }
	inline float get_distanceToPlayer_18() const { return ___distanceToPlayer_18; }
	inline float* get_address_of_distanceToPlayer_18() { return &___distanceToPlayer_18; }
	inline void set_distanceToPlayer_18(float value)
	{
		___distanceToPlayer_18 = value;
	}

	inline static int32_t get_offset_of_isPlayerNear_19() { return static_cast<int32_t>(offsetof(EnemyController_t2191660454, ___isPlayerNear_19)); }
	inline bool get_isPlayerNear_19() const { return ___isPlayerNear_19; }
	inline bool* get_address_of_isPlayerNear_19() { return &___isPlayerNear_19; }
	inline void set_isPlayerNear_19(bool value)
	{
		___isPlayerNear_19 = value;
	}

	inline static int32_t get_offset_of_canSeePlayer_20() { return static_cast<int32_t>(offsetof(EnemyController_t2191660454, ___canSeePlayer_20)); }
	inline bool get_canSeePlayer_20() const { return ___canSeePlayer_20; }
	inline bool* get_address_of_canSeePlayer_20() { return &___canSeePlayer_20; }
	inline void set_canSeePlayer_20(bool value)
	{
		___canSeePlayer_20 = value;
	}

	inline static int32_t get_offset_of_behaviorState_21() { return static_cast<int32_t>(offsetof(EnemyController_t2191660454, ___behaviorState_21)); }
	inline int32_t get_behaviorState_21() const { return ___behaviorState_21; }
	inline int32_t* get_address_of_behaviorState_21() { return &___behaviorState_21; }
	inline void set_behaviorState_21(int32_t value)
	{
		___behaviorState_21 = value;
	}

	inline static int32_t get_offset_of_alertDelay_22() { return static_cast<int32_t>(offsetof(EnemyController_t2191660454, ___alertDelay_22)); }
	inline float get_alertDelay_22() const { return ___alertDelay_22; }
	inline float* get_address_of_alertDelay_22() { return &___alertDelay_22; }
	inline void set_alertDelay_22(float value)
	{
		___alertDelay_22 = value;
	}

	inline static int32_t get_offset_of_lookDelay_23() { return static_cast<int32_t>(offsetof(EnemyController_t2191660454, ___lookDelay_23)); }
	inline float get_lookDelay_23() const { return ___lookDelay_23; }
	inline float* get_address_of_lookDelay_23() { return &___lookDelay_23; }
	inline void set_lookDelay_23(float value)
	{
		___lookDelay_23 = value;
	}

	inline static int32_t get_offset_of_alerted_24() { return static_cast<int32_t>(offsetof(EnemyController_t2191660454, ___alerted_24)); }
	inline bool get_alerted_24() const { return ___alerted_24; }
	inline bool* get_address_of_alerted_24() { return &___alerted_24; }
	inline void set_alerted_24(bool value)
	{
		___alerted_24 = value;
	}

	inline static int32_t get_offset_of_lookingForPlayer_25() { return static_cast<int32_t>(offsetof(EnemyController_t2191660454, ___lookingForPlayer_25)); }
	inline bool get_lookingForPlayer_25() const { return ___lookingForPlayer_25; }
	inline bool* get_address_of_lookingForPlayer_25() { return &___lookingForPlayer_25; }
	inline void set_lookingForPlayer_25(bool value)
	{
		___lookingForPlayer_25 = value;
	}

	inline static int32_t get_offset_of_roaming_26() { return static_cast<int32_t>(offsetof(EnemyController_t2191660454, ___roaming_26)); }
	inline bool get_roaming_26() const { return ___roaming_26; }
	inline bool* get_address_of_roaming_26() { return &___roaming_26; }
	inline void set_roaming_26(bool value)
	{
		___roaming_26 = value;
	}

	inline static int32_t get_offset_of_isPlayerRunning_27() { return static_cast<int32_t>(offsetof(EnemyController_t2191660454, ___isPlayerRunning_27)); }
	inline bool get_isPlayerRunning_27() const { return ___isPlayerRunning_27; }
	inline bool* get_address_of_isPlayerRunning_27() { return &___isPlayerRunning_27; }
	inline void set_isPlayerRunning_27(bool value)
	{
		___isPlayerRunning_27 = value;
	}

	inline static int32_t get_offset_of_flashlightDisabled_28() { return static_cast<int32_t>(offsetof(EnemyController_t2191660454, ___flashlightDisabled_28)); }
	inline bool get_flashlightDisabled_28() const { return ___flashlightDisabled_28; }
	inline bool* get_address_of_flashlightDisabled_28() { return &___flashlightDisabled_28; }
	inline void set_flashlightDisabled_28(bool value)
	{
		___flashlightDisabled_28 = value;
	}

	inline static int32_t get_offset_of_randomCircle_29() { return static_cast<int32_t>(offsetof(EnemyController_t2191660454, ___randomCircle_29)); }
	inline Vector3_t3722313464  get_randomCircle_29() const { return ___randomCircle_29; }
	inline Vector3_t3722313464 * get_address_of_randomCircle_29() { return &___randomCircle_29; }
	inline void set_randomCircle_29(Vector3_t3722313464  value)
	{
		___randomCircle_29 = value;
	}
};

struct EnemyController_t2191660454_StaticFields
{
public:
	// System.Int32 EnemyController::IsAttacking
	int32_t ___IsAttacking_30;

public:
	inline static int32_t get_offset_of_IsAttacking_30() { return static_cast<int32_t>(offsetof(EnemyController_t2191660454_StaticFields, ___IsAttacking_30)); }
	inline int32_t get_IsAttacking_30() const { return ___IsAttacking_30; }
	inline int32_t* get_address_of_IsAttacking_30() { return &___IsAttacking_30; }
	inline void set_IsAttacking_30(int32_t value)
	{
		___IsAttacking_30 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // ENEMYCONTROLLER_T2191660454_H
#ifndef FPS_COUNTER_T957419163_H
#define FPS_COUNTER_T957419163_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// FPS_Counter
struct  FPS_Counter_t957419163  : public MonoBehaviour_t3962482529
{
public:
	// UnityEngine.UI.Text FPS_Counter::fpsText
	Text_t1901882714 * ___fpsText_4;
	// System.Int32 FPS_Counter::frameRange
	int32_t ___frameRange_5;
	// System.Single FPS_Counter::updateInterval
	float ___updateInterval_6;
	// System.Int32 FPS_Counter::maxFPS
	int32_t ___maxFPS_7;
	// System.Int32 FPS_Counter::minFPS
	int32_t ___minFPS_8;
	// System.Single FPS_Counter::accum
	float ___accum_9;
	// System.Int32 FPS_Counter::frames
	int32_t ___frames_10;
	// System.Single FPS_Counter::timeleft
	float ___timeleft_11;
	// System.Int32[] FPS_Counter::fpsBuffer
	Int32U5BU5D_t385246372* ___fpsBuffer_12;
	// System.Int32 FPS_Counter::fpsBufferIndex
	int32_t ___fpsBufferIndex_13;
	// System.Single FPS_Counter::averageFPS
	float ___averageFPS_14;
	// System.Single FPS_Counter::msFrame
	float ___msFrame_15;
	// UnityEngine.UI.Text FPS_Counter::vramText
	Text_t1901882714 * ___vramText_16;
	// UnityEngine.UI.Text FPS_Counter::ramText
	Text_t1901882714 * ___ramText_17;

public:
	inline static int32_t get_offset_of_fpsText_4() { return static_cast<int32_t>(offsetof(FPS_Counter_t957419163, ___fpsText_4)); }
	inline Text_t1901882714 * get_fpsText_4() const { return ___fpsText_4; }
	inline Text_t1901882714 ** get_address_of_fpsText_4() { return &___fpsText_4; }
	inline void set_fpsText_4(Text_t1901882714 * value)
	{
		___fpsText_4 = value;
		Il2CppCodeGenWriteBarrier((&___fpsText_4), value);
	}

	inline static int32_t get_offset_of_frameRange_5() { return static_cast<int32_t>(offsetof(FPS_Counter_t957419163, ___frameRange_5)); }
	inline int32_t get_frameRange_5() const { return ___frameRange_5; }
	inline int32_t* get_address_of_frameRange_5() { return &___frameRange_5; }
	inline void set_frameRange_5(int32_t value)
	{
		___frameRange_5 = value;
	}

	inline static int32_t get_offset_of_updateInterval_6() { return static_cast<int32_t>(offsetof(FPS_Counter_t957419163, ___updateInterval_6)); }
	inline float get_updateInterval_6() const { return ___updateInterval_6; }
	inline float* get_address_of_updateInterval_6() { return &___updateInterval_6; }
	inline void set_updateInterval_6(float value)
	{
		___updateInterval_6 = value;
	}

	inline static int32_t get_offset_of_maxFPS_7() { return static_cast<int32_t>(offsetof(FPS_Counter_t957419163, ___maxFPS_7)); }
	inline int32_t get_maxFPS_7() const { return ___maxFPS_7; }
	inline int32_t* get_address_of_maxFPS_7() { return &___maxFPS_7; }
	inline void set_maxFPS_7(int32_t value)
	{
		___maxFPS_7 = value;
	}

	inline static int32_t get_offset_of_minFPS_8() { return static_cast<int32_t>(offsetof(FPS_Counter_t957419163, ___minFPS_8)); }
	inline int32_t get_minFPS_8() const { return ___minFPS_8; }
	inline int32_t* get_address_of_minFPS_8() { return &___minFPS_8; }
	inline void set_minFPS_8(int32_t value)
	{
		___minFPS_8 = value;
	}

	inline static int32_t get_offset_of_accum_9() { return static_cast<int32_t>(offsetof(FPS_Counter_t957419163, ___accum_9)); }
	inline float get_accum_9() const { return ___accum_9; }
	inline float* get_address_of_accum_9() { return &___accum_9; }
	inline void set_accum_9(float value)
	{
		___accum_9 = value;
	}

	inline static int32_t get_offset_of_frames_10() { return static_cast<int32_t>(offsetof(FPS_Counter_t957419163, ___frames_10)); }
	inline int32_t get_frames_10() const { return ___frames_10; }
	inline int32_t* get_address_of_frames_10() { return &___frames_10; }
	inline void set_frames_10(int32_t value)
	{
		___frames_10 = value;
	}

	inline static int32_t get_offset_of_timeleft_11() { return static_cast<int32_t>(offsetof(FPS_Counter_t957419163, ___timeleft_11)); }
	inline float get_timeleft_11() const { return ___timeleft_11; }
	inline float* get_address_of_timeleft_11() { return &___timeleft_11; }
	inline void set_timeleft_11(float value)
	{
		___timeleft_11 = value;
	}

	inline static int32_t get_offset_of_fpsBuffer_12() { return static_cast<int32_t>(offsetof(FPS_Counter_t957419163, ___fpsBuffer_12)); }
	inline Int32U5BU5D_t385246372* get_fpsBuffer_12() const { return ___fpsBuffer_12; }
	inline Int32U5BU5D_t385246372** get_address_of_fpsBuffer_12() { return &___fpsBuffer_12; }
	inline void set_fpsBuffer_12(Int32U5BU5D_t385246372* value)
	{
		___fpsBuffer_12 = value;
		Il2CppCodeGenWriteBarrier((&___fpsBuffer_12), value);
	}

	inline static int32_t get_offset_of_fpsBufferIndex_13() { return static_cast<int32_t>(offsetof(FPS_Counter_t957419163, ___fpsBufferIndex_13)); }
	inline int32_t get_fpsBufferIndex_13() const { return ___fpsBufferIndex_13; }
	inline int32_t* get_address_of_fpsBufferIndex_13() { return &___fpsBufferIndex_13; }
	inline void set_fpsBufferIndex_13(int32_t value)
	{
		___fpsBufferIndex_13 = value;
	}

	inline static int32_t get_offset_of_averageFPS_14() { return static_cast<int32_t>(offsetof(FPS_Counter_t957419163, ___averageFPS_14)); }
	inline float get_averageFPS_14() const { return ___averageFPS_14; }
	inline float* get_address_of_averageFPS_14() { return &___averageFPS_14; }
	inline void set_averageFPS_14(float value)
	{
		___averageFPS_14 = value;
	}

	inline static int32_t get_offset_of_msFrame_15() { return static_cast<int32_t>(offsetof(FPS_Counter_t957419163, ___msFrame_15)); }
	inline float get_msFrame_15() const { return ___msFrame_15; }
	inline float* get_address_of_msFrame_15() { return &___msFrame_15; }
	inline void set_msFrame_15(float value)
	{
		___msFrame_15 = value;
	}

	inline static int32_t get_offset_of_vramText_16() { return static_cast<int32_t>(offsetof(FPS_Counter_t957419163, ___vramText_16)); }
	inline Text_t1901882714 * get_vramText_16() const { return ___vramText_16; }
	inline Text_t1901882714 ** get_address_of_vramText_16() { return &___vramText_16; }
	inline void set_vramText_16(Text_t1901882714 * value)
	{
		___vramText_16 = value;
		Il2CppCodeGenWriteBarrier((&___vramText_16), value);
	}

	inline static int32_t get_offset_of_ramText_17() { return static_cast<int32_t>(offsetof(FPS_Counter_t957419163, ___ramText_17)); }
	inline Text_t1901882714 * get_ramText_17() const { return ___ramText_17; }
	inline Text_t1901882714 ** get_address_of_ramText_17() { return &___ramText_17; }
	inline void set_ramText_17(Text_t1901882714 * value)
	{
		___ramText_17 = value;
		Il2CppCodeGenWriteBarrier((&___ramText_17), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // FPS_COUNTER_T957419163_H
#ifndef FORWARDPLUSMANAGER_T2470229686_H
#define FORWARDPLUSMANAGER_T2470229686_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// ForwardPlusManager
struct  ForwardPlusManager_t2470229686  : public MonoBehaviour_t3962482529
{
public:
	// UnityEngine.ComputeShader ForwardPlusManager::precomputeFrustums
	ComputeShader_t317220254 * ___precomputeFrustums_4;
	// UnityEngine.ComputeShader ForwardPlusManager::lightCulling
	ComputeShader_t317220254 * ___lightCulling_5;
	// System.Boolean ForwardPlusManager::Debug_ShowGrid
	bool ___Debug_ShowGrid_6;
	// UnityEngine.Texture2D ForwardPlusManager::heatmap
	Texture2D_t3840446185 * ___heatmap_7;
	// System.Int32 ForwardPlusManager::LIGHTS_PER_TILE
	int32_t ___LIGHTS_PER_TILE_8;
	// UnityEngine.ComputeBuffer ForwardPlusManager::frustumBuffer
	ComputeBuffer_t1033194329 * ___frustumBuffer_9;
	// UnityEngine.ComputeBuffer ForwardPlusManager::lightListBuffer
	ComputeBuffer_t1033194329 * ___lightListBuffer_10;
	// UnityEngine.ComputeBuffer ForwardPlusManager::currentLightIndexBuffer
	ComputeBuffer_t1033194329 * ___currentLightIndexBuffer_11;
	// UnityEngine.ComputeBuffer ForwardPlusManager::lightIndexBuffer
	ComputeBuffer_t1033194329 * ___lightIndexBuffer_12;
	// UnityEngine.RenderTexture ForwardPlusManager::depthTexture
	RenderTexture_t2108887433 * ___depthTexture_13;
	// UnityEngine.RenderTexture ForwardPlusManager::lightsGrid
	RenderTexture_t2108887433 * ___lightsGrid_14;
	// UnityEngine.Rendering.CommandBuffer ForwardPlusManager::commandBuffer
	CommandBuffer_t2206337031 * ___commandBuffer_15;
	// UnityEngine.Camera ForwardPlusManager::cam
	Camera_t4157153871 * ___cam_16;
	// UnityEngine.Material ForwardPlusManager::debug_showGridMat
	Material_t340375123 * ___debug_showGridMat_17;
	// UnityEngine.Material ForwardPlusManager::copyDepthMat
	Material_t340375123 * ___copyDepthMat_18;

public:
	inline static int32_t get_offset_of_precomputeFrustums_4() { return static_cast<int32_t>(offsetof(ForwardPlusManager_t2470229686, ___precomputeFrustums_4)); }
	inline ComputeShader_t317220254 * get_precomputeFrustums_4() const { return ___precomputeFrustums_4; }
	inline ComputeShader_t317220254 ** get_address_of_precomputeFrustums_4() { return &___precomputeFrustums_4; }
	inline void set_precomputeFrustums_4(ComputeShader_t317220254 * value)
	{
		___precomputeFrustums_4 = value;
		Il2CppCodeGenWriteBarrier((&___precomputeFrustums_4), value);
	}

	inline static int32_t get_offset_of_lightCulling_5() { return static_cast<int32_t>(offsetof(ForwardPlusManager_t2470229686, ___lightCulling_5)); }
	inline ComputeShader_t317220254 * get_lightCulling_5() const { return ___lightCulling_5; }
	inline ComputeShader_t317220254 ** get_address_of_lightCulling_5() { return &___lightCulling_5; }
	inline void set_lightCulling_5(ComputeShader_t317220254 * value)
	{
		___lightCulling_5 = value;
		Il2CppCodeGenWriteBarrier((&___lightCulling_5), value);
	}

	inline static int32_t get_offset_of_Debug_ShowGrid_6() { return static_cast<int32_t>(offsetof(ForwardPlusManager_t2470229686, ___Debug_ShowGrid_6)); }
	inline bool get_Debug_ShowGrid_6() const { return ___Debug_ShowGrid_6; }
	inline bool* get_address_of_Debug_ShowGrid_6() { return &___Debug_ShowGrid_6; }
	inline void set_Debug_ShowGrid_6(bool value)
	{
		___Debug_ShowGrid_6 = value;
	}

	inline static int32_t get_offset_of_heatmap_7() { return static_cast<int32_t>(offsetof(ForwardPlusManager_t2470229686, ___heatmap_7)); }
	inline Texture2D_t3840446185 * get_heatmap_7() const { return ___heatmap_7; }
	inline Texture2D_t3840446185 ** get_address_of_heatmap_7() { return &___heatmap_7; }
	inline void set_heatmap_7(Texture2D_t3840446185 * value)
	{
		___heatmap_7 = value;
		Il2CppCodeGenWriteBarrier((&___heatmap_7), value);
	}

	inline static int32_t get_offset_of_LIGHTS_PER_TILE_8() { return static_cast<int32_t>(offsetof(ForwardPlusManager_t2470229686, ___LIGHTS_PER_TILE_8)); }
	inline int32_t get_LIGHTS_PER_TILE_8() const { return ___LIGHTS_PER_TILE_8; }
	inline int32_t* get_address_of_LIGHTS_PER_TILE_8() { return &___LIGHTS_PER_TILE_8; }
	inline void set_LIGHTS_PER_TILE_8(int32_t value)
	{
		___LIGHTS_PER_TILE_8 = value;
	}

	inline static int32_t get_offset_of_frustumBuffer_9() { return static_cast<int32_t>(offsetof(ForwardPlusManager_t2470229686, ___frustumBuffer_9)); }
	inline ComputeBuffer_t1033194329 * get_frustumBuffer_9() const { return ___frustumBuffer_9; }
	inline ComputeBuffer_t1033194329 ** get_address_of_frustumBuffer_9() { return &___frustumBuffer_9; }
	inline void set_frustumBuffer_9(ComputeBuffer_t1033194329 * value)
	{
		___frustumBuffer_9 = value;
		Il2CppCodeGenWriteBarrier((&___frustumBuffer_9), value);
	}

	inline static int32_t get_offset_of_lightListBuffer_10() { return static_cast<int32_t>(offsetof(ForwardPlusManager_t2470229686, ___lightListBuffer_10)); }
	inline ComputeBuffer_t1033194329 * get_lightListBuffer_10() const { return ___lightListBuffer_10; }
	inline ComputeBuffer_t1033194329 ** get_address_of_lightListBuffer_10() { return &___lightListBuffer_10; }
	inline void set_lightListBuffer_10(ComputeBuffer_t1033194329 * value)
	{
		___lightListBuffer_10 = value;
		Il2CppCodeGenWriteBarrier((&___lightListBuffer_10), value);
	}

	inline static int32_t get_offset_of_currentLightIndexBuffer_11() { return static_cast<int32_t>(offsetof(ForwardPlusManager_t2470229686, ___currentLightIndexBuffer_11)); }
	inline ComputeBuffer_t1033194329 * get_currentLightIndexBuffer_11() const { return ___currentLightIndexBuffer_11; }
	inline ComputeBuffer_t1033194329 ** get_address_of_currentLightIndexBuffer_11() { return &___currentLightIndexBuffer_11; }
	inline void set_currentLightIndexBuffer_11(ComputeBuffer_t1033194329 * value)
	{
		___currentLightIndexBuffer_11 = value;
		Il2CppCodeGenWriteBarrier((&___currentLightIndexBuffer_11), value);
	}

	inline static int32_t get_offset_of_lightIndexBuffer_12() { return static_cast<int32_t>(offsetof(ForwardPlusManager_t2470229686, ___lightIndexBuffer_12)); }
	inline ComputeBuffer_t1033194329 * get_lightIndexBuffer_12() const { return ___lightIndexBuffer_12; }
	inline ComputeBuffer_t1033194329 ** get_address_of_lightIndexBuffer_12() { return &___lightIndexBuffer_12; }
	inline void set_lightIndexBuffer_12(ComputeBuffer_t1033194329 * value)
	{
		___lightIndexBuffer_12 = value;
		Il2CppCodeGenWriteBarrier((&___lightIndexBuffer_12), value);
	}

	inline static int32_t get_offset_of_depthTexture_13() { return static_cast<int32_t>(offsetof(ForwardPlusManager_t2470229686, ___depthTexture_13)); }
	inline RenderTexture_t2108887433 * get_depthTexture_13() const { return ___depthTexture_13; }
	inline RenderTexture_t2108887433 ** get_address_of_depthTexture_13() { return &___depthTexture_13; }
	inline void set_depthTexture_13(RenderTexture_t2108887433 * value)
	{
		___depthTexture_13 = value;
		Il2CppCodeGenWriteBarrier((&___depthTexture_13), value);
	}

	inline static int32_t get_offset_of_lightsGrid_14() { return static_cast<int32_t>(offsetof(ForwardPlusManager_t2470229686, ___lightsGrid_14)); }
	inline RenderTexture_t2108887433 * get_lightsGrid_14() const { return ___lightsGrid_14; }
	inline RenderTexture_t2108887433 ** get_address_of_lightsGrid_14() { return &___lightsGrid_14; }
	inline void set_lightsGrid_14(RenderTexture_t2108887433 * value)
	{
		___lightsGrid_14 = value;
		Il2CppCodeGenWriteBarrier((&___lightsGrid_14), value);
	}

	inline static int32_t get_offset_of_commandBuffer_15() { return static_cast<int32_t>(offsetof(ForwardPlusManager_t2470229686, ___commandBuffer_15)); }
	inline CommandBuffer_t2206337031 * get_commandBuffer_15() const { return ___commandBuffer_15; }
	inline CommandBuffer_t2206337031 ** get_address_of_commandBuffer_15() { return &___commandBuffer_15; }
	inline void set_commandBuffer_15(CommandBuffer_t2206337031 * value)
	{
		___commandBuffer_15 = value;
		Il2CppCodeGenWriteBarrier((&___commandBuffer_15), value);
	}

	inline static int32_t get_offset_of_cam_16() { return static_cast<int32_t>(offsetof(ForwardPlusManager_t2470229686, ___cam_16)); }
	inline Camera_t4157153871 * get_cam_16() const { return ___cam_16; }
	inline Camera_t4157153871 ** get_address_of_cam_16() { return &___cam_16; }
	inline void set_cam_16(Camera_t4157153871 * value)
	{
		___cam_16 = value;
		Il2CppCodeGenWriteBarrier((&___cam_16), value);
	}

	inline static int32_t get_offset_of_debug_showGridMat_17() { return static_cast<int32_t>(offsetof(ForwardPlusManager_t2470229686, ___debug_showGridMat_17)); }
	inline Material_t340375123 * get_debug_showGridMat_17() const { return ___debug_showGridMat_17; }
	inline Material_t340375123 ** get_address_of_debug_showGridMat_17() { return &___debug_showGridMat_17; }
	inline void set_debug_showGridMat_17(Material_t340375123 * value)
	{
		___debug_showGridMat_17 = value;
		Il2CppCodeGenWriteBarrier((&___debug_showGridMat_17), value);
	}

	inline static int32_t get_offset_of_copyDepthMat_18() { return static_cast<int32_t>(offsetof(ForwardPlusManager_t2470229686, ___copyDepthMat_18)); }
	inline Material_t340375123 * get_copyDepthMat_18() const { return ___copyDepthMat_18; }
	inline Material_t340375123 ** get_address_of_copyDepthMat_18() { return &___copyDepthMat_18; }
	inline void set_copyDepthMat_18(Material_t340375123 * value)
	{
		___copyDepthMat_18 = value;
		Il2CppCodeGenWriteBarrier((&___copyDepthMat_18), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // FORWARDPLUSMANAGER_T2470229686_H
#ifndef GC_MANAGER_T1144238453_H
#define GC_MANAGER_T1144238453_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// GC_Manager
struct  GC_Manager_t1144238453  : public MonoBehaviour_t3962482529
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // GC_MANAGER_T1144238453_H
#ifndef INPUTMANAGER_T2926777569_H
#define INPUTMANAGER_T2926777569_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// InputManager
struct  InputManager_t2926777569  : public MonoBehaviour_t3962482529
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // INPUTMANAGER_T2926777569_H
#ifndef INVENTORY_SCREEN_MANAGER_T2612322343_H
#define INVENTORY_SCREEN_MANAGER_T2612322343_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// Inventory_Screen_Manager
struct  Inventory_Screen_Manager_t2612322343  : public MonoBehaviour_t3962482529
{
public:
	// UnityEngine.UI.Text Inventory_Screen_Manager::battText
	Text_t1901882714 * ___battText_4;
	// UnityEngine.UI.Text Inventory_Screen_Manager::medText
	Text_t1901882714 * ___medText_5;
	// UnityEngine.UI.Text Inventory_Screen_Manager::stimText
	Text_t1901882714 * ___stimText_6;
	// UnityEngine.UI.RawImage Inventory_Screen_Manager::inventoryMat
	RawImage_t3182918964 * ___inventoryMat_7;
	// UnityEngine.GameObject Inventory_Screen_Manager::inventoryCam
	GameObject_t1113636619 * ___inventoryCam_8;
	// System.Boolean Inventory_Screen_Manager::delayButton
	bool ___delayButton_10;
	// System.Single Inventory_Screen_Manager::tempAlpha
	float ___tempAlpha_11;
	// System.Single Inventory_Screen_Manager::time
	float ___time_12;

public:
	inline static int32_t get_offset_of_battText_4() { return static_cast<int32_t>(offsetof(Inventory_Screen_Manager_t2612322343, ___battText_4)); }
	inline Text_t1901882714 * get_battText_4() const { return ___battText_4; }
	inline Text_t1901882714 ** get_address_of_battText_4() { return &___battText_4; }
	inline void set_battText_4(Text_t1901882714 * value)
	{
		___battText_4 = value;
		Il2CppCodeGenWriteBarrier((&___battText_4), value);
	}

	inline static int32_t get_offset_of_medText_5() { return static_cast<int32_t>(offsetof(Inventory_Screen_Manager_t2612322343, ___medText_5)); }
	inline Text_t1901882714 * get_medText_5() const { return ___medText_5; }
	inline Text_t1901882714 ** get_address_of_medText_5() { return &___medText_5; }
	inline void set_medText_5(Text_t1901882714 * value)
	{
		___medText_5 = value;
		Il2CppCodeGenWriteBarrier((&___medText_5), value);
	}

	inline static int32_t get_offset_of_stimText_6() { return static_cast<int32_t>(offsetof(Inventory_Screen_Manager_t2612322343, ___stimText_6)); }
	inline Text_t1901882714 * get_stimText_6() const { return ___stimText_6; }
	inline Text_t1901882714 ** get_address_of_stimText_6() { return &___stimText_6; }
	inline void set_stimText_6(Text_t1901882714 * value)
	{
		___stimText_6 = value;
		Il2CppCodeGenWriteBarrier((&___stimText_6), value);
	}

	inline static int32_t get_offset_of_inventoryMat_7() { return static_cast<int32_t>(offsetof(Inventory_Screen_Manager_t2612322343, ___inventoryMat_7)); }
	inline RawImage_t3182918964 * get_inventoryMat_7() const { return ___inventoryMat_7; }
	inline RawImage_t3182918964 ** get_address_of_inventoryMat_7() { return &___inventoryMat_7; }
	inline void set_inventoryMat_7(RawImage_t3182918964 * value)
	{
		___inventoryMat_7 = value;
		Il2CppCodeGenWriteBarrier((&___inventoryMat_7), value);
	}

	inline static int32_t get_offset_of_inventoryCam_8() { return static_cast<int32_t>(offsetof(Inventory_Screen_Manager_t2612322343, ___inventoryCam_8)); }
	inline GameObject_t1113636619 * get_inventoryCam_8() const { return ___inventoryCam_8; }
	inline GameObject_t1113636619 ** get_address_of_inventoryCam_8() { return &___inventoryCam_8; }
	inline void set_inventoryCam_8(GameObject_t1113636619 * value)
	{
		___inventoryCam_8 = value;
		Il2CppCodeGenWriteBarrier((&___inventoryCam_8), value);
	}

	inline static int32_t get_offset_of_delayButton_10() { return static_cast<int32_t>(offsetof(Inventory_Screen_Manager_t2612322343, ___delayButton_10)); }
	inline bool get_delayButton_10() const { return ___delayButton_10; }
	inline bool* get_address_of_delayButton_10() { return &___delayButton_10; }
	inline void set_delayButton_10(bool value)
	{
		___delayButton_10 = value;
	}

	inline static int32_t get_offset_of_tempAlpha_11() { return static_cast<int32_t>(offsetof(Inventory_Screen_Manager_t2612322343, ___tempAlpha_11)); }
	inline float get_tempAlpha_11() const { return ___tempAlpha_11; }
	inline float* get_address_of_tempAlpha_11() { return &___tempAlpha_11; }
	inline void set_tempAlpha_11(float value)
	{
		___tempAlpha_11 = value;
	}

	inline static int32_t get_offset_of_time_12() { return static_cast<int32_t>(offsetof(Inventory_Screen_Manager_t2612322343, ___time_12)); }
	inline float get_time_12() const { return ___time_12; }
	inline float* get_address_of_time_12() { return &___time_12; }
	inline void set_time_12(float value)
	{
		___time_12 = value;
	}
};

struct Inventory_Screen_Manager_t2612322343_StaticFields
{
public:
	// System.Boolean Inventory_Screen_Manager::inventoryOn
	bool ___inventoryOn_9;

public:
	inline static int32_t get_offset_of_inventoryOn_9() { return static_cast<int32_t>(offsetof(Inventory_Screen_Manager_t2612322343_StaticFields, ___inventoryOn_9)); }
	inline bool get_inventoryOn_9() const { return ___inventoryOn_9; }
	inline bool* get_address_of_inventoryOn_9() { return &___inventoryOn_9; }
	inline void set_inventoryOn_9(bool value)
	{
		___inventoryOn_9 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // INVENTORY_SCREEN_MANAGER_T2612322343_H
#ifndef ITEM_ENUMERATOR_T3915226614_H
#define ITEM_ENUMERATOR_T3915226614_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// Item_Enumerator
struct  Item_Enumerator_t3915226614  : public MonoBehaviour_t3962482529
{
public:
	// System.Int32 Item_Enumerator::identifier
	int32_t ___identifier_4;
	// System.Boolean Item_Enumerator::isActiveObject
	bool ___isActiveObject_5;
	// Item_Enumerator/pickupItem Item_Enumerator::thisItem
	int32_t ___thisItem_6;
	// System.Int32 Item_Enumerator::itemValue
	int32_t ___itemValue_7;
	// UnityEngine.Collider Item_Enumerator::player
	Collider_t1773347010 * ___player_8;
	// UnityEngine.Animator Item_Enumerator::animator
	Animator_t434523843 * ___animator_9;
	// UnityEngine.GameObject Item_Enumerator::playerObject
	GameObject_t1113636619 * ___playerObject_10;
	// UnityEngine.Material Item_Enumerator::playerBody
	Material_t340375123 * ___playerBody_11;
	// UnityEngine.Collider Item_Enumerator::thisCollider
	Collider_t1773347010 * ___thisCollider_12;
	// UnityEngine.GameObject Item_Enumerator::targetObject
	GameObject_t1113636619 * ___targetObject_13;
	// UnityEngine.Camera Item_Enumerator::mainCamera
	Camera_t4157153871 * ___mainCamera_14;
	// UnityEngine.GameObject Item_Enumerator::pickupTextObject
	GameObject_t1113636619 * ___pickupTextObject_15;
	// UnityEngine.GameObject Item_Enumerator::hilightIcon
	GameObject_t1113636619 * ___hilightIcon_16;
	// UnityEngine.UI.RawImage Item_Enumerator::iconImage
	RawImage_t3182918964 * ___iconImage_17;
	// UnityEngine.UI.RawImage Item_Enumerator::dialogBG
	RawImage_t3182918964 * ___dialogBG_18;
	// UnityEngine.Color Item_Enumerator::iconVisible
	Color_t2555686324  ___iconVisible_19;
	// UnityEngine.Color Item_Enumerator::colorOff
	Color_t2555686324  ___colorOff_20;
	// UnityEngine.Color Item_Enumerator::colorOn
	Color_t2555686324  ___colorOn_21;
	// UnityEngine.Color Item_Enumerator::dialogOn
	Color_t2555686324  ___dialogOn_22;
	// TMPro.TextMeshProUGUI Item_Enumerator::OSDText
	TextMeshProUGUI_t529313277 * ___OSDText_23;
	// TMPro.TextMeshProUGUI Item_Enumerator::batteryText
	TextMeshProUGUI_t529313277 * ___batteryText_24;
	// UnityEngine.Texture Item_Enumerator::healedTexture
	Texture_t3661962703 * ___healedTexture_25;
	// System.Int32 Item_Enumerator::CROSS
	int32_t ___CROSS_27;
	// UnityEngine.Vector3 Item_Enumerator::screenPosition
	Vector3_t3722313464  ___screenPosition_28;
	// UnityEngine.Vector3 Item_Enumerator::targetPos
	Vector3_t3722313464  ___targetPos_29;
	// System.String Item_Enumerator::tempText
	String_t* ___tempText_30;
	// System.Collections.Generic.Dictionary`2<System.String,System.String> Item_Enumerator::itemTexts
	Dictionary_2_t1632706988 * ___itemTexts_31;

public:
	inline static int32_t get_offset_of_identifier_4() { return static_cast<int32_t>(offsetof(Item_Enumerator_t3915226614, ___identifier_4)); }
	inline int32_t get_identifier_4() const { return ___identifier_4; }
	inline int32_t* get_address_of_identifier_4() { return &___identifier_4; }
	inline void set_identifier_4(int32_t value)
	{
		___identifier_4 = value;
	}

	inline static int32_t get_offset_of_isActiveObject_5() { return static_cast<int32_t>(offsetof(Item_Enumerator_t3915226614, ___isActiveObject_5)); }
	inline bool get_isActiveObject_5() const { return ___isActiveObject_5; }
	inline bool* get_address_of_isActiveObject_5() { return &___isActiveObject_5; }
	inline void set_isActiveObject_5(bool value)
	{
		___isActiveObject_5 = value;
	}

	inline static int32_t get_offset_of_thisItem_6() { return static_cast<int32_t>(offsetof(Item_Enumerator_t3915226614, ___thisItem_6)); }
	inline int32_t get_thisItem_6() const { return ___thisItem_6; }
	inline int32_t* get_address_of_thisItem_6() { return &___thisItem_6; }
	inline void set_thisItem_6(int32_t value)
	{
		___thisItem_6 = value;
	}

	inline static int32_t get_offset_of_itemValue_7() { return static_cast<int32_t>(offsetof(Item_Enumerator_t3915226614, ___itemValue_7)); }
	inline int32_t get_itemValue_7() const { return ___itemValue_7; }
	inline int32_t* get_address_of_itemValue_7() { return &___itemValue_7; }
	inline void set_itemValue_7(int32_t value)
	{
		___itemValue_7 = value;
	}

	inline static int32_t get_offset_of_player_8() { return static_cast<int32_t>(offsetof(Item_Enumerator_t3915226614, ___player_8)); }
	inline Collider_t1773347010 * get_player_8() const { return ___player_8; }
	inline Collider_t1773347010 ** get_address_of_player_8() { return &___player_8; }
	inline void set_player_8(Collider_t1773347010 * value)
	{
		___player_8 = value;
		Il2CppCodeGenWriteBarrier((&___player_8), value);
	}

	inline static int32_t get_offset_of_animator_9() { return static_cast<int32_t>(offsetof(Item_Enumerator_t3915226614, ___animator_9)); }
	inline Animator_t434523843 * get_animator_9() const { return ___animator_9; }
	inline Animator_t434523843 ** get_address_of_animator_9() { return &___animator_9; }
	inline void set_animator_9(Animator_t434523843 * value)
	{
		___animator_9 = value;
		Il2CppCodeGenWriteBarrier((&___animator_9), value);
	}

	inline static int32_t get_offset_of_playerObject_10() { return static_cast<int32_t>(offsetof(Item_Enumerator_t3915226614, ___playerObject_10)); }
	inline GameObject_t1113636619 * get_playerObject_10() const { return ___playerObject_10; }
	inline GameObject_t1113636619 ** get_address_of_playerObject_10() { return &___playerObject_10; }
	inline void set_playerObject_10(GameObject_t1113636619 * value)
	{
		___playerObject_10 = value;
		Il2CppCodeGenWriteBarrier((&___playerObject_10), value);
	}

	inline static int32_t get_offset_of_playerBody_11() { return static_cast<int32_t>(offsetof(Item_Enumerator_t3915226614, ___playerBody_11)); }
	inline Material_t340375123 * get_playerBody_11() const { return ___playerBody_11; }
	inline Material_t340375123 ** get_address_of_playerBody_11() { return &___playerBody_11; }
	inline void set_playerBody_11(Material_t340375123 * value)
	{
		___playerBody_11 = value;
		Il2CppCodeGenWriteBarrier((&___playerBody_11), value);
	}

	inline static int32_t get_offset_of_thisCollider_12() { return static_cast<int32_t>(offsetof(Item_Enumerator_t3915226614, ___thisCollider_12)); }
	inline Collider_t1773347010 * get_thisCollider_12() const { return ___thisCollider_12; }
	inline Collider_t1773347010 ** get_address_of_thisCollider_12() { return &___thisCollider_12; }
	inline void set_thisCollider_12(Collider_t1773347010 * value)
	{
		___thisCollider_12 = value;
		Il2CppCodeGenWriteBarrier((&___thisCollider_12), value);
	}

	inline static int32_t get_offset_of_targetObject_13() { return static_cast<int32_t>(offsetof(Item_Enumerator_t3915226614, ___targetObject_13)); }
	inline GameObject_t1113636619 * get_targetObject_13() const { return ___targetObject_13; }
	inline GameObject_t1113636619 ** get_address_of_targetObject_13() { return &___targetObject_13; }
	inline void set_targetObject_13(GameObject_t1113636619 * value)
	{
		___targetObject_13 = value;
		Il2CppCodeGenWriteBarrier((&___targetObject_13), value);
	}

	inline static int32_t get_offset_of_mainCamera_14() { return static_cast<int32_t>(offsetof(Item_Enumerator_t3915226614, ___mainCamera_14)); }
	inline Camera_t4157153871 * get_mainCamera_14() const { return ___mainCamera_14; }
	inline Camera_t4157153871 ** get_address_of_mainCamera_14() { return &___mainCamera_14; }
	inline void set_mainCamera_14(Camera_t4157153871 * value)
	{
		___mainCamera_14 = value;
		Il2CppCodeGenWriteBarrier((&___mainCamera_14), value);
	}

	inline static int32_t get_offset_of_pickupTextObject_15() { return static_cast<int32_t>(offsetof(Item_Enumerator_t3915226614, ___pickupTextObject_15)); }
	inline GameObject_t1113636619 * get_pickupTextObject_15() const { return ___pickupTextObject_15; }
	inline GameObject_t1113636619 ** get_address_of_pickupTextObject_15() { return &___pickupTextObject_15; }
	inline void set_pickupTextObject_15(GameObject_t1113636619 * value)
	{
		___pickupTextObject_15 = value;
		Il2CppCodeGenWriteBarrier((&___pickupTextObject_15), value);
	}

	inline static int32_t get_offset_of_hilightIcon_16() { return static_cast<int32_t>(offsetof(Item_Enumerator_t3915226614, ___hilightIcon_16)); }
	inline GameObject_t1113636619 * get_hilightIcon_16() const { return ___hilightIcon_16; }
	inline GameObject_t1113636619 ** get_address_of_hilightIcon_16() { return &___hilightIcon_16; }
	inline void set_hilightIcon_16(GameObject_t1113636619 * value)
	{
		___hilightIcon_16 = value;
		Il2CppCodeGenWriteBarrier((&___hilightIcon_16), value);
	}

	inline static int32_t get_offset_of_iconImage_17() { return static_cast<int32_t>(offsetof(Item_Enumerator_t3915226614, ___iconImage_17)); }
	inline RawImage_t3182918964 * get_iconImage_17() const { return ___iconImage_17; }
	inline RawImage_t3182918964 ** get_address_of_iconImage_17() { return &___iconImage_17; }
	inline void set_iconImage_17(RawImage_t3182918964 * value)
	{
		___iconImage_17 = value;
		Il2CppCodeGenWriteBarrier((&___iconImage_17), value);
	}

	inline static int32_t get_offset_of_dialogBG_18() { return static_cast<int32_t>(offsetof(Item_Enumerator_t3915226614, ___dialogBG_18)); }
	inline RawImage_t3182918964 * get_dialogBG_18() const { return ___dialogBG_18; }
	inline RawImage_t3182918964 ** get_address_of_dialogBG_18() { return &___dialogBG_18; }
	inline void set_dialogBG_18(RawImage_t3182918964 * value)
	{
		___dialogBG_18 = value;
		Il2CppCodeGenWriteBarrier((&___dialogBG_18), value);
	}

	inline static int32_t get_offset_of_iconVisible_19() { return static_cast<int32_t>(offsetof(Item_Enumerator_t3915226614, ___iconVisible_19)); }
	inline Color_t2555686324  get_iconVisible_19() const { return ___iconVisible_19; }
	inline Color_t2555686324 * get_address_of_iconVisible_19() { return &___iconVisible_19; }
	inline void set_iconVisible_19(Color_t2555686324  value)
	{
		___iconVisible_19 = value;
	}

	inline static int32_t get_offset_of_colorOff_20() { return static_cast<int32_t>(offsetof(Item_Enumerator_t3915226614, ___colorOff_20)); }
	inline Color_t2555686324  get_colorOff_20() const { return ___colorOff_20; }
	inline Color_t2555686324 * get_address_of_colorOff_20() { return &___colorOff_20; }
	inline void set_colorOff_20(Color_t2555686324  value)
	{
		___colorOff_20 = value;
	}

	inline static int32_t get_offset_of_colorOn_21() { return static_cast<int32_t>(offsetof(Item_Enumerator_t3915226614, ___colorOn_21)); }
	inline Color_t2555686324  get_colorOn_21() const { return ___colorOn_21; }
	inline Color_t2555686324 * get_address_of_colorOn_21() { return &___colorOn_21; }
	inline void set_colorOn_21(Color_t2555686324  value)
	{
		___colorOn_21 = value;
	}

	inline static int32_t get_offset_of_dialogOn_22() { return static_cast<int32_t>(offsetof(Item_Enumerator_t3915226614, ___dialogOn_22)); }
	inline Color_t2555686324  get_dialogOn_22() const { return ___dialogOn_22; }
	inline Color_t2555686324 * get_address_of_dialogOn_22() { return &___dialogOn_22; }
	inline void set_dialogOn_22(Color_t2555686324  value)
	{
		___dialogOn_22 = value;
	}

	inline static int32_t get_offset_of_OSDText_23() { return static_cast<int32_t>(offsetof(Item_Enumerator_t3915226614, ___OSDText_23)); }
	inline TextMeshProUGUI_t529313277 * get_OSDText_23() const { return ___OSDText_23; }
	inline TextMeshProUGUI_t529313277 ** get_address_of_OSDText_23() { return &___OSDText_23; }
	inline void set_OSDText_23(TextMeshProUGUI_t529313277 * value)
	{
		___OSDText_23 = value;
		Il2CppCodeGenWriteBarrier((&___OSDText_23), value);
	}

	inline static int32_t get_offset_of_batteryText_24() { return static_cast<int32_t>(offsetof(Item_Enumerator_t3915226614, ___batteryText_24)); }
	inline TextMeshProUGUI_t529313277 * get_batteryText_24() const { return ___batteryText_24; }
	inline TextMeshProUGUI_t529313277 ** get_address_of_batteryText_24() { return &___batteryText_24; }
	inline void set_batteryText_24(TextMeshProUGUI_t529313277 * value)
	{
		___batteryText_24 = value;
		Il2CppCodeGenWriteBarrier((&___batteryText_24), value);
	}

	inline static int32_t get_offset_of_healedTexture_25() { return static_cast<int32_t>(offsetof(Item_Enumerator_t3915226614, ___healedTexture_25)); }
	inline Texture_t3661962703 * get_healedTexture_25() const { return ___healedTexture_25; }
	inline Texture_t3661962703 ** get_address_of_healedTexture_25() { return &___healedTexture_25; }
	inline void set_healedTexture_25(Texture_t3661962703 * value)
	{
		___healedTexture_25 = value;
		Il2CppCodeGenWriteBarrier((&___healedTexture_25), value);
	}

	inline static int32_t get_offset_of_CROSS_27() { return static_cast<int32_t>(offsetof(Item_Enumerator_t3915226614, ___CROSS_27)); }
	inline int32_t get_CROSS_27() const { return ___CROSS_27; }
	inline int32_t* get_address_of_CROSS_27() { return &___CROSS_27; }
	inline void set_CROSS_27(int32_t value)
	{
		___CROSS_27 = value;
	}

	inline static int32_t get_offset_of_screenPosition_28() { return static_cast<int32_t>(offsetof(Item_Enumerator_t3915226614, ___screenPosition_28)); }
	inline Vector3_t3722313464  get_screenPosition_28() const { return ___screenPosition_28; }
	inline Vector3_t3722313464 * get_address_of_screenPosition_28() { return &___screenPosition_28; }
	inline void set_screenPosition_28(Vector3_t3722313464  value)
	{
		___screenPosition_28 = value;
	}

	inline static int32_t get_offset_of_targetPos_29() { return static_cast<int32_t>(offsetof(Item_Enumerator_t3915226614, ___targetPos_29)); }
	inline Vector3_t3722313464  get_targetPos_29() const { return ___targetPos_29; }
	inline Vector3_t3722313464 * get_address_of_targetPos_29() { return &___targetPos_29; }
	inline void set_targetPos_29(Vector3_t3722313464  value)
	{
		___targetPos_29 = value;
	}

	inline static int32_t get_offset_of_tempText_30() { return static_cast<int32_t>(offsetof(Item_Enumerator_t3915226614, ___tempText_30)); }
	inline String_t* get_tempText_30() const { return ___tempText_30; }
	inline String_t** get_address_of_tempText_30() { return &___tempText_30; }
	inline void set_tempText_30(String_t* value)
	{
		___tempText_30 = value;
		Il2CppCodeGenWriteBarrier((&___tempText_30), value);
	}

	inline static int32_t get_offset_of_itemTexts_31() { return static_cast<int32_t>(offsetof(Item_Enumerator_t3915226614, ___itemTexts_31)); }
	inline Dictionary_2_t1632706988 * get_itemTexts_31() const { return ___itemTexts_31; }
	inline Dictionary_2_t1632706988 ** get_address_of_itemTexts_31() { return &___itemTexts_31; }
	inline void set_itemTexts_31(Dictionary_2_t1632706988 * value)
	{
		___itemTexts_31 = value;
		Il2CppCodeGenWriteBarrier((&___itemTexts_31), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // ITEM_ENUMERATOR_T3915226614_H
#ifndef LIGHTNING_MANAGER_T3394885560_H
#define LIGHTNING_MANAGER_T3394885560_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// Lightning_Manager
struct  Lightning_Manager_t3394885560  : public MonoBehaviour_t3962482529
{
public:
	// UnityEngine.AudioSource Lightning_Manager::audioSource
	AudioSource_t3935305588 * ___audioSource_4;
	// System.Single Lightning_Manager::step
	float ___step_5;
	// System.Int32 Lightning_Manager::sampleDataLength
	int32_t ___sampleDataLength_6;
	// System.Single Lightning_Manager::scaleFactor
	float ___scaleFactor_7;
	// UnityEngine.Material Lightning_Manager::skyBox
	Material_t340375123 * ___skyBox_8;
	// UnityEngine.Material Lightning_Manager::glowMat
	Material_t340375123 * ___glowMat_9;
	// UnityEngine.Material Lightning_Manager::crepuscularMat
	Material_t340375123 * ___crepuscularMat_10;
	// System.Single Lightning_Manager::clipLoudness
	float ___clipLoudness_11;
	// System.Single Lightning_Manager::oldClipLoudness
	float ___oldClipLoudness_12;
	// System.Single Lightning_Manager::clipLoudnessB
	float ___clipLoudnessB_13;
	// System.Single[] Lightning_Manager::clipSampleData
	SingleU5BU5D_t1444911251* ___clipSampleData_14;
	// System.Single Lightning_Manager::currentUpdateTime
	float ___currentUpdateTime_15;
	// System.Single Lightning_Manager::contrastHolder
	float ___contrastHolder_16;
	// UnityEngine.Color Lightning_Manager::lerpColor
	Color_t2555686324  ___lerpColor_17;

public:
	inline static int32_t get_offset_of_audioSource_4() { return static_cast<int32_t>(offsetof(Lightning_Manager_t3394885560, ___audioSource_4)); }
	inline AudioSource_t3935305588 * get_audioSource_4() const { return ___audioSource_4; }
	inline AudioSource_t3935305588 ** get_address_of_audioSource_4() { return &___audioSource_4; }
	inline void set_audioSource_4(AudioSource_t3935305588 * value)
	{
		___audioSource_4 = value;
		Il2CppCodeGenWriteBarrier((&___audioSource_4), value);
	}

	inline static int32_t get_offset_of_step_5() { return static_cast<int32_t>(offsetof(Lightning_Manager_t3394885560, ___step_5)); }
	inline float get_step_5() const { return ___step_5; }
	inline float* get_address_of_step_5() { return &___step_5; }
	inline void set_step_5(float value)
	{
		___step_5 = value;
	}

	inline static int32_t get_offset_of_sampleDataLength_6() { return static_cast<int32_t>(offsetof(Lightning_Manager_t3394885560, ___sampleDataLength_6)); }
	inline int32_t get_sampleDataLength_6() const { return ___sampleDataLength_6; }
	inline int32_t* get_address_of_sampleDataLength_6() { return &___sampleDataLength_6; }
	inline void set_sampleDataLength_6(int32_t value)
	{
		___sampleDataLength_6 = value;
	}

	inline static int32_t get_offset_of_scaleFactor_7() { return static_cast<int32_t>(offsetof(Lightning_Manager_t3394885560, ___scaleFactor_7)); }
	inline float get_scaleFactor_7() const { return ___scaleFactor_7; }
	inline float* get_address_of_scaleFactor_7() { return &___scaleFactor_7; }
	inline void set_scaleFactor_7(float value)
	{
		___scaleFactor_7 = value;
	}

	inline static int32_t get_offset_of_skyBox_8() { return static_cast<int32_t>(offsetof(Lightning_Manager_t3394885560, ___skyBox_8)); }
	inline Material_t340375123 * get_skyBox_8() const { return ___skyBox_8; }
	inline Material_t340375123 ** get_address_of_skyBox_8() { return &___skyBox_8; }
	inline void set_skyBox_8(Material_t340375123 * value)
	{
		___skyBox_8 = value;
		Il2CppCodeGenWriteBarrier((&___skyBox_8), value);
	}

	inline static int32_t get_offset_of_glowMat_9() { return static_cast<int32_t>(offsetof(Lightning_Manager_t3394885560, ___glowMat_9)); }
	inline Material_t340375123 * get_glowMat_9() const { return ___glowMat_9; }
	inline Material_t340375123 ** get_address_of_glowMat_9() { return &___glowMat_9; }
	inline void set_glowMat_9(Material_t340375123 * value)
	{
		___glowMat_9 = value;
		Il2CppCodeGenWriteBarrier((&___glowMat_9), value);
	}

	inline static int32_t get_offset_of_crepuscularMat_10() { return static_cast<int32_t>(offsetof(Lightning_Manager_t3394885560, ___crepuscularMat_10)); }
	inline Material_t340375123 * get_crepuscularMat_10() const { return ___crepuscularMat_10; }
	inline Material_t340375123 ** get_address_of_crepuscularMat_10() { return &___crepuscularMat_10; }
	inline void set_crepuscularMat_10(Material_t340375123 * value)
	{
		___crepuscularMat_10 = value;
		Il2CppCodeGenWriteBarrier((&___crepuscularMat_10), value);
	}

	inline static int32_t get_offset_of_clipLoudness_11() { return static_cast<int32_t>(offsetof(Lightning_Manager_t3394885560, ___clipLoudness_11)); }
	inline float get_clipLoudness_11() const { return ___clipLoudness_11; }
	inline float* get_address_of_clipLoudness_11() { return &___clipLoudness_11; }
	inline void set_clipLoudness_11(float value)
	{
		___clipLoudness_11 = value;
	}

	inline static int32_t get_offset_of_oldClipLoudness_12() { return static_cast<int32_t>(offsetof(Lightning_Manager_t3394885560, ___oldClipLoudness_12)); }
	inline float get_oldClipLoudness_12() const { return ___oldClipLoudness_12; }
	inline float* get_address_of_oldClipLoudness_12() { return &___oldClipLoudness_12; }
	inline void set_oldClipLoudness_12(float value)
	{
		___oldClipLoudness_12 = value;
	}

	inline static int32_t get_offset_of_clipLoudnessB_13() { return static_cast<int32_t>(offsetof(Lightning_Manager_t3394885560, ___clipLoudnessB_13)); }
	inline float get_clipLoudnessB_13() const { return ___clipLoudnessB_13; }
	inline float* get_address_of_clipLoudnessB_13() { return &___clipLoudnessB_13; }
	inline void set_clipLoudnessB_13(float value)
	{
		___clipLoudnessB_13 = value;
	}

	inline static int32_t get_offset_of_clipSampleData_14() { return static_cast<int32_t>(offsetof(Lightning_Manager_t3394885560, ___clipSampleData_14)); }
	inline SingleU5BU5D_t1444911251* get_clipSampleData_14() const { return ___clipSampleData_14; }
	inline SingleU5BU5D_t1444911251** get_address_of_clipSampleData_14() { return &___clipSampleData_14; }
	inline void set_clipSampleData_14(SingleU5BU5D_t1444911251* value)
	{
		___clipSampleData_14 = value;
		Il2CppCodeGenWriteBarrier((&___clipSampleData_14), value);
	}

	inline static int32_t get_offset_of_currentUpdateTime_15() { return static_cast<int32_t>(offsetof(Lightning_Manager_t3394885560, ___currentUpdateTime_15)); }
	inline float get_currentUpdateTime_15() const { return ___currentUpdateTime_15; }
	inline float* get_address_of_currentUpdateTime_15() { return &___currentUpdateTime_15; }
	inline void set_currentUpdateTime_15(float value)
	{
		___currentUpdateTime_15 = value;
	}

	inline static int32_t get_offset_of_contrastHolder_16() { return static_cast<int32_t>(offsetof(Lightning_Manager_t3394885560, ___contrastHolder_16)); }
	inline float get_contrastHolder_16() const { return ___contrastHolder_16; }
	inline float* get_address_of_contrastHolder_16() { return &___contrastHolder_16; }
	inline void set_contrastHolder_16(float value)
	{
		___contrastHolder_16 = value;
	}

	inline static int32_t get_offset_of_lerpColor_17() { return static_cast<int32_t>(offsetof(Lightning_Manager_t3394885560, ___lerpColor_17)); }
	inline Color_t2555686324  get_lerpColor_17() const { return ___lerpColor_17; }
	inline Color_t2555686324 * get_address_of_lerpColor_17() { return &___lerpColor_17; }
	inline void set_lerpColor_17(Color_t2555686324  value)
	{
		___lerpColor_17 = value;
	}
};

struct Lightning_Manager_t3394885560_StaticFields
{
public:
	// System.Int32 Lightning_Manager::TintColor
	int32_t ___TintColor_18;
	// System.Int32 Lightning_Manager::Contrast
	int32_t ___Contrast_19;
	// System.Int32 Lightning_Manager::Exposure
	int32_t ___Exposure_20;

public:
	inline static int32_t get_offset_of_TintColor_18() { return static_cast<int32_t>(offsetof(Lightning_Manager_t3394885560_StaticFields, ___TintColor_18)); }
	inline int32_t get_TintColor_18() const { return ___TintColor_18; }
	inline int32_t* get_address_of_TintColor_18() { return &___TintColor_18; }
	inline void set_TintColor_18(int32_t value)
	{
		___TintColor_18 = value;
	}

	inline static int32_t get_offset_of_Contrast_19() { return static_cast<int32_t>(offsetof(Lightning_Manager_t3394885560_StaticFields, ___Contrast_19)); }
	inline int32_t get_Contrast_19() const { return ___Contrast_19; }
	inline int32_t* get_address_of_Contrast_19() { return &___Contrast_19; }
	inline void set_Contrast_19(int32_t value)
	{
		___Contrast_19 = value;
	}

	inline static int32_t get_offset_of_Exposure_20() { return static_cast<int32_t>(offsetof(Lightning_Manager_t3394885560_StaticFields, ___Exposure_20)); }
	inline int32_t get_Exposure_20() const { return ___Exposure_20; }
	inline int32_t* get_address_of_Exposure_20() { return &___Exposure_20; }
	inline void set_Exposure_20(int32_t value)
	{
		___Exposure_20 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // LIGHTNING_MANAGER_T3394885560_H
#ifndef LOADMANAGER_INPUTS_T4203782917_H
#define LOADMANAGER_INPUTS_T4203782917_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// LoadManager_Inputs
struct  LoadManager_Inputs_t4203782917  : public MonoBehaviour_t3962482529
{
public:
	// System.String LoadManager_Inputs::joystick1
	String_t* ___joystick1_4;
	// System.Int32 LoadManager_Inputs::CROSS
	int32_t ___CROSS_5;
	// System.Int32 LoadManager_Inputs::CIRCLE
	int32_t ___CIRCLE_6;
	// System.Int32 LoadManager_Inputs::SQUARE
	int32_t ___SQUARE_7;
	// System.Int32 LoadManager_Inputs::TRIANGLE
	int32_t ___TRIANGLE_8;
	// System.Int32 LoadManager_Inputs::SELECT
	int32_t ___SELECT_9;
	// System.Int32 LoadManager_Inputs::START
	int32_t ___START_10;
	// System.Int32 LoadManager_Inputs::UP
	int32_t ___UP_11;
	// System.Int32 LoadManager_Inputs::RIGHT
	int32_t ___RIGHT_12;
	// System.Int32 LoadManager_Inputs::DOWN
	int32_t ___DOWN_13;
	// System.Int32 LoadManager_Inputs::LEFT
	int32_t ___LEFT_14;
	// System.Int32 LoadManager_Inputs::selectedSlot
	int32_t ___selectedSlot_15;
	// System.Int32 LoadManager_Inputs::previousSlot
	int32_t ___previousSlot_16;
	// UnityEngine.Color LoadManager_Inputs::baseColor
	Color_t2555686324  ___baseColor_17;
	// UnityEngine.Color LoadManager_Inputs::hilightColor
	Color_t2555686324  ___hilightColor_18;
	// UnityEngine.Color LoadManager_Inputs::loadedColor
	Color_t2555686324  ___loadedColor_19;
	// UnityEngine.Color LoadManager_Inputs::savedColor
	Color_t2555686324  ___savedColor_20;
	// UnityEngine.UI.RawImage LoadManager_Inputs::slot1
	RawImage_t3182918964 * ___slot1_21;
	// UnityEngine.UI.RawImage LoadManager_Inputs::slot2
	RawImage_t3182918964 * ___slot2_22;
	// UnityEngine.UI.RawImage LoadManager_Inputs::slot3
	RawImage_t3182918964 * ___slot3_23;
	// UnityEngine.AsyncOperation LoadManager_Inputs::loadingOperation
	AsyncOperation_t1445031843 * ___loadingOperation_24;
	// UnityEngine.GameObject LoadManager_Inputs::sceneManager
	GameObject_t1113636619 * ___sceneManager_25;
	// UnityEngine.GameObject LoadManager_Inputs::menuManager
	GameObject_t1113636619 * ___menuManager_26;
	// UnityEngine.CanvasGroup LoadManager_Inputs::menuGroup
	CanvasGroup_t4083511760 * ___menuGroup_27;
	// UnityEngine.CanvasGroup LoadManager_Inputs::saveGroup
	CanvasGroup_t4083511760 * ___saveGroup_28;
	// UnityEngine.CanvasGroup LoadManager_Inputs::loadDialogGroup
	CanvasGroup_t4083511760 * ___loadDialogGroup_29;
	// UnityEngine.CanvasGroup LoadManager_Inputs::faderCanvas
	CanvasGroup_t4083511760 * ___faderCanvas_30;
	// UnityEngine.GameObject LoadManager_Inputs::audioManager
	GameObject_t1113636619 * ___audioManager_31;
	// System.Single LoadManager_Inputs::fadeDuration
	float ___fadeDuration_32;
	// System.Single LoadManager_Inputs::targetValue
	float ___targetValue_33;
	// System.Single LoadManager_Inputs::loadProgress
	float ___loadProgress_34;
	// System.Boolean LoadManager_Inputs::loading
	bool ___loading_35;
	// System.Single LoadManager_Inputs::timer
	float ___timer_36;
	// System.Single LoadManager_Inputs::delay
	float ___delay_37;
	// System.Collections.Generic.List`1<UnityEngine.AudioClip> LoadManager_Inputs::clipList
	List_1_t857997111 * ___clipList_38;
	// UnityEngine.AudioSource LoadManager_Inputs::audioSource
	AudioSource_t3935305588 * ___audioSource_39;
	// TMPro.TextMeshProUGUI LoadManager_Inputs::slot1Text
	TextMeshProUGUI_t529313277 * ___slot1Text_40;
	// TMPro.TextMeshProUGUI LoadManager_Inputs::slot2Text
	TextMeshProUGUI_t529313277 * ___slot2Text_41;
	// TMPro.TextMeshProUGUI LoadManager_Inputs::slot3Text
	TextMeshProUGUI_t529313277 * ___slot3Text_42;
	// System.String LoadManager_Inputs::slot1String
	String_t* ___slot1String_43;
	// System.String LoadManager_Inputs::slot2String
	String_t* ___slot2String_44;
	// System.String LoadManager_Inputs::slot3String
	String_t* ___slot3String_45;
	// System.String LoadManager_Inputs::dateTime
	String_t* ___dateTime_46;
	// UnityEngine.GameObject LoadManager_Inputs::currentSelection
	GameObject_t1113636619 * ___currentSelection_47;
	// UnityEngine.GameObject LoadManager_Inputs::previousSelection
	GameObject_t1113636619 * ___previousSelection_48;
	// UnityEngine.Animator LoadManager_Inputs::anim
	Animator_t434523843 * ___anim_49;

public:
	inline static int32_t get_offset_of_joystick1_4() { return static_cast<int32_t>(offsetof(LoadManager_Inputs_t4203782917, ___joystick1_4)); }
	inline String_t* get_joystick1_4() const { return ___joystick1_4; }
	inline String_t** get_address_of_joystick1_4() { return &___joystick1_4; }
	inline void set_joystick1_4(String_t* value)
	{
		___joystick1_4 = value;
		Il2CppCodeGenWriteBarrier((&___joystick1_4), value);
	}

	inline static int32_t get_offset_of_CROSS_5() { return static_cast<int32_t>(offsetof(LoadManager_Inputs_t4203782917, ___CROSS_5)); }
	inline int32_t get_CROSS_5() const { return ___CROSS_5; }
	inline int32_t* get_address_of_CROSS_5() { return &___CROSS_5; }
	inline void set_CROSS_5(int32_t value)
	{
		___CROSS_5 = value;
	}

	inline static int32_t get_offset_of_CIRCLE_6() { return static_cast<int32_t>(offsetof(LoadManager_Inputs_t4203782917, ___CIRCLE_6)); }
	inline int32_t get_CIRCLE_6() const { return ___CIRCLE_6; }
	inline int32_t* get_address_of_CIRCLE_6() { return &___CIRCLE_6; }
	inline void set_CIRCLE_6(int32_t value)
	{
		___CIRCLE_6 = value;
	}

	inline static int32_t get_offset_of_SQUARE_7() { return static_cast<int32_t>(offsetof(LoadManager_Inputs_t4203782917, ___SQUARE_7)); }
	inline int32_t get_SQUARE_7() const { return ___SQUARE_7; }
	inline int32_t* get_address_of_SQUARE_7() { return &___SQUARE_7; }
	inline void set_SQUARE_7(int32_t value)
	{
		___SQUARE_7 = value;
	}

	inline static int32_t get_offset_of_TRIANGLE_8() { return static_cast<int32_t>(offsetof(LoadManager_Inputs_t4203782917, ___TRIANGLE_8)); }
	inline int32_t get_TRIANGLE_8() const { return ___TRIANGLE_8; }
	inline int32_t* get_address_of_TRIANGLE_8() { return &___TRIANGLE_8; }
	inline void set_TRIANGLE_8(int32_t value)
	{
		___TRIANGLE_8 = value;
	}

	inline static int32_t get_offset_of_SELECT_9() { return static_cast<int32_t>(offsetof(LoadManager_Inputs_t4203782917, ___SELECT_9)); }
	inline int32_t get_SELECT_9() const { return ___SELECT_9; }
	inline int32_t* get_address_of_SELECT_9() { return &___SELECT_9; }
	inline void set_SELECT_9(int32_t value)
	{
		___SELECT_9 = value;
	}

	inline static int32_t get_offset_of_START_10() { return static_cast<int32_t>(offsetof(LoadManager_Inputs_t4203782917, ___START_10)); }
	inline int32_t get_START_10() const { return ___START_10; }
	inline int32_t* get_address_of_START_10() { return &___START_10; }
	inline void set_START_10(int32_t value)
	{
		___START_10 = value;
	}

	inline static int32_t get_offset_of_UP_11() { return static_cast<int32_t>(offsetof(LoadManager_Inputs_t4203782917, ___UP_11)); }
	inline int32_t get_UP_11() const { return ___UP_11; }
	inline int32_t* get_address_of_UP_11() { return &___UP_11; }
	inline void set_UP_11(int32_t value)
	{
		___UP_11 = value;
	}

	inline static int32_t get_offset_of_RIGHT_12() { return static_cast<int32_t>(offsetof(LoadManager_Inputs_t4203782917, ___RIGHT_12)); }
	inline int32_t get_RIGHT_12() const { return ___RIGHT_12; }
	inline int32_t* get_address_of_RIGHT_12() { return &___RIGHT_12; }
	inline void set_RIGHT_12(int32_t value)
	{
		___RIGHT_12 = value;
	}

	inline static int32_t get_offset_of_DOWN_13() { return static_cast<int32_t>(offsetof(LoadManager_Inputs_t4203782917, ___DOWN_13)); }
	inline int32_t get_DOWN_13() const { return ___DOWN_13; }
	inline int32_t* get_address_of_DOWN_13() { return &___DOWN_13; }
	inline void set_DOWN_13(int32_t value)
	{
		___DOWN_13 = value;
	}

	inline static int32_t get_offset_of_LEFT_14() { return static_cast<int32_t>(offsetof(LoadManager_Inputs_t4203782917, ___LEFT_14)); }
	inline int32_t get_LEFT_14() const { return ___LEFT_14; }
	inline int32_t* get_address_of_LEFT_14() { return &___LEFT_14; }
	inline void set_LEFT_14(int32_t value)
	{
		___LEFT_14 = value;
	}

	inline static int32_t get_offset_of_selectedSlot_15() { return static_cast<int32_t>(offsetof(LoadManager_Inputs_t4203782917, ___selectedSlot_15)); }
	inline int32_t get_selectedSlot_15() const { return ___selectedSlot_15; }
	inline int32_t* get_address_of_selectedSlot_15() { return &___selectedSlot_15; }
	inline void set_selectedSlot_15(int32_t value)
	{
		___selectedSlot_15 = value;
	}

	inline static int32_t get_offset_of_previousSlot_16() { return static_cast<int32_t>(offsetof(LoadManager_Inputs_t4203782917, ___previousSlot_16)); }
	inline int32_t get_previousSlot_16() const { return ___previousSlot_16; }
	inline int32_t* get_address_of_previousSlot_16() { return &___previousSlot_16; }
	inline void set_previousSlot_16(int32_t value)
	{
		___previousSlot_16 = value;
	}

	inline static int32_t get_offset_of_baseColor_17() { return static_cast<int32_t>(offsetof(LoadManager_Inputs_t4203782917, ___baseColor_17)); }
	inline Color_t2555686324  get_baseColor_17() const { return ___baseColor_17; }
	inline Color_t2555686324 * get_address_of_baseColor_17() { return &___baseColor_17; }
	inline void set_baseColor_17(Color_t2555686324  value)
	{
		___baseColor_17 = value;
	}

	inline static int32_t get_offset_of_hilightColor_18() { return static_cast<int32_t>(offsetof(LoadManager_Inputs_t4203782917, ___hilightColor_18)); }
	inline Color_t2555686324  get_hilightColor_18() const { return ___hilightColor_18; }
	inline Color_t2555686324 * get_address_of_hilightColor_18() { return &___hilightColor_18; }
	inline void set_hilightColor_18(Color_t2555686324  value)
	{
		___hilightColor_18 = value;
	}

	inline static int32_t get_offset_of_loadedColor_19() { return static_cast<int32_t>(offsetof(LoadManager_Inputs_t4203782917, ___loadedColor_19)); }
	inline Color_t2555686324  get_loadedColor_19() const { return ___loadedColor_19; }
	inline Color_t2555686324 * get_address_of_loadedColor_19() { return &___loadedColor_19; }
	inline void set_loadedColor_19(Color_t2555686324  value)
	{
		___loadedColor_19 = value;
	}

	inline static int32_t get_offset_of_savedColor_20() { return static_cast<int32_t>(offsetof(LoadManager_Inputs_t4203782917, ___savedColor_20)); }
	inline Color_t2555686324  get_savedColor_20() const { return ___savedColor_20; }
	inline Color_t2555686324 * get_address_of_savedColor_20() { return &___savedColor_20; }
	inline void set_savedColor_20(Color_t2555686324  value)
	{
		___savedColor_20 = value;
	}

	inline static int32_t get_offset_of_slot1_21() { return static_cast<int32_t>(offsetof(LoadManager_Inputs_t4203782917, ___slot1_21)); }
	inline RawImage_t3182918964 * get_slot1_21() const { return ___slot1_21; }
	inline RawImage_t3182918964 ** get_address_of_slot1_21() { return &___slot1_21; }
	inline void set_slot1_21(RawImage_t3182918964 * value)
	{
		___slot1_21 = value;
		Il2CppCodeGenWriteBarrier((&___slot1_21), value);
	}

	inline static int32_t get_offset_of_slot2_22() { return static_cast<int32_t>(offsetof(LoadManager_Inputs_t4203782917, ___slot2_22)); }
	inline RawImage_t3182918964 * get_slot2_22() const { return ___slot2_22; }
	inline RawImage_t3182918964 ** get_address_of_slot2_22() { return &___slot2_22; }
	inline void set_slot2_22(RawImage_t3182918964 * value)
	{
		___slot2_22 = value;
		Il2CppCodeGenWriteBarrier((&___slot2_22), value);
	}

	inline static int32_t get_offset_of_slot3_23() { return static_cast<int32_t>(offsetof(LoadManager_Inputs_t4203782917, ___slot3_23)); }
	inline RawImage_t3182918964 * get_slot3_23() const { return ___slot3_23; }
	inline RawImage_t3182918964 ** get_address_of_slot3_23() { return &___slot3_23; }
	inline void set_slot3_23(RawImage_t3182918964 * value)
	{
		___slot3_23 = value;
		Il2CppCodeGenWriteBarrier((&___slot3_23), value);
	}

	inline static int32_t get_offset_of_loadingOperation_24() { return static_cast<int32_t>(offsetof(LoadManager_Inputs_t4203782917, ___loadingOperation_24)); }
	inline AsyncOperation_t1445031843 * get_loadingOperation_24() const { return ___loadingOperation_24; }
	inline AsyncOperation_t1445031843 ** get_address_of_loadingOperation_24() { return &___loadingOperation_24; }
	inline void set_loadingOperation_24(AsyncOperation_t1445031843 * value)
	{
		___loadingOperation_24 = value;
		Il2CppCodeGenWriteBarrier((&___loadingOperation_24), value);
	}

	inline static int32_t get_offset_of_sceneManager_25() { return static_cast<int32_t>(offsetof(LoadManager_Inputs_t4203782917, ___sceneManager_25)); }
	inline GameObject_t1113636619 * get_sceneManager_25() const { return ___sceneManager_25; }
	inline GameObject_t1113636619 ** get_address_of_sceneManager_25() { return &___sceneManager_25; }
	inline void set_sceneManager_25(GameObject_t1113636619 * value)
	{
		___sceneManager_25 = value;
		Il2CppCodeGenWriteBarrier((&___sceneManager_25), value);
	}

	inline static int32_t get_offset_of_menuManager_26() { return static_cast<int32_t>(offsetof(LoadManager_Inputs_t4203782917, ___menuManager_26)); }
	inline GameObject_t1113636619 * get_menuManager_26() const { return ___menuManager_26; }
	inline GameObject_t1113636619 ** get_address_of_menuManager_26() { return &___menuManager_26; }
	inline void set_menuManager_26(GameObject_t1113636619 * value)
	{
		___menuManager_26 = value;
		Il2CppCodeGenWriteBarrier((&___menuManager_26), value);
	}

	inline static int32_t get_offset_of_menuGroup_27() { return static_cast<int32_t>(offsetof(LoadManager_Inputs_t4203782917, ___menuGroup_27)); }
	inline CanvasGroup_t4083511760 * get_menuGroup_27() const { return ___menuGroup_27; }
	inline CanvasGroup_t4083511760 ** get_address_of_menuGroup_27() { return &___menuGroup_27; }
	inline void set_menuGroup_27(CanvasGroup_t4083511760 * value)
	{
		___menuGroup_27 = value;
		Il2CppCodeGenWriteBarrier((&___menuGroup_27), value);
	}

	inline static int32_t get_offset_of_saveGroup_28() { return static_cast<int32_t>(offsetof(LoadManager_Inputs_t4203782917, ___saveGroup_28)); }
	inline CanvasGroup_t4083511760 * get_saveGroup_28() const { return ___saveGroup_28; }
	inline CanvasGroup_t4083511760 ** get_address_of_saveGroup_28() { return &___saveGroup_28; }
	inline void set_saveGroup_28(CanvasGroup_t4083511760 * value)
	{
		___saveGroup_28 = value;
		Il2CppCodeGenWriteBarrier((&___saveGroup_28), value);
	}

	inline static int32_t get_offset_of_loadDialogGroup_29() { return static_cast<int32_t>(offsetof(LoadManager_Inputs_t4203782917, ___loadDialogGroup_29)); }
	inline CanvasGroup_t4083511760 * get_loadDialogGroup_29() const { return ___loadDialogGroup_29; }
	inline CanvasGroup_t4083511760 ** get_address_of_loadDialogGroup_29() { return &___loadDialogGroup_29; }
	inline void set_loadDialogGroup_29(CanvasGroup_t4083511760 * value)
	{
		___loadDialogGroup_29 = value;
		Il2CppCodeGenWriteBarrier((&___loadDialogGroup_29), value);
	}

	inline static int32_t get_offset_of_faderCanvas_30() { return static_cast<int32_t>(offsetof(LoadManager_Inputs_t4203782917, ___faderCanvas_30)); }
	inline CanvasGroup_t4083511760 * get_faderCanvas_30() const { return ___faderCanvas_30; }
	inline CanvasGroup_t4083511760 ** get_address_of_faderCanvas_30() { return &___faderCanvas_30; }
	inline void set_faderCanvas_30(CanvasGroup_t4083511760 * value)
	{
		___faderCanvas_30 = value;
		Il2CppCodeGenWriteBarrier((&___faderCanvas_30), value);
	}

	inline static int32_t get_offset_of_audioManager_31() { return static_cast<int32_t>(offsetof(LoadManager_Inputs_t4203782917, ___audioManager_31)); }
	inline GameObject_t1113636619 * get_audioManager_31() const { return ___audioManager_31; }
	inline GameObject_t1113636619 ** get_address_of_audioManager_31() { return &___audioManager_31; }
	inline void set_audioManager_31(GameObject_t1113636619 * value)
	{
		___audioManager_31 = value;
		Il2CppCodeGenWriteBarrier((&___audioManager_31), value);
	}

	inline static int32_t get_offset_of_fadeDuration_32() { return static_cast<int32_t>(offsetof(LoadManager_Inputs_t4203782917, ___fadeDuration_32)); }
	inline float get_fadeDuration_32() const { return ___fadeDuration_32; }
	inline float* get_address_of_fadeDuration_32() { return &___fadeDuration_32; }
	inline void set_fadeDuration_32(float value)
	{
		___fadeDuration_32 = value;
	}

	inline static int32_t get_offset_of_targetValue_33() { return static_cast<int32_t>(offsetof(LoadManager_Inputs_t4203782917, ___targetValue_33)); }
	inline float get_targetValue_33() const { return ___targetValue_33; }
	inline float* get_address_of_targetValue_33() { return &___targetValue_33; }
	inline void set_targetValue_33(float value)
	{
		___targetValue_33 = value;
	}

	inline static int32_t get_offset_of_loadProgress_34() { return static_cast<int32_t>(offsetof(LoadManager_Inputs_t4203782917, ___loadProgress_34)); }
	inline float get_loadProgress_34() const { return ___loadProgress_34; }
	inline float* get_address_of_loadProgress_34() { return &___loadProgress_34; }
	inline void set_loadProgress_34(float value)
	{
		___loadProgress_34 = value;
	}

	inline static int32_t get_offset_of_loading_35() { return static_cast<int32_t>(offsetof(LoadManager_Inputs_t4203782917, ___loading_35)); }
	inline bool get_loading_35() const { return ___loading_35; }
	inline bool* get_address_of_loading_35() { return &___loading_35; }
	inline void set_loading_35(bool value)
	{
		___loading_35 = value;
	}

	inline static int32_t get_offset_of_timer_36() { return static_cast<int32_t>(offsetof(LoadManager_Inputs_t4203782917, ___timer_36)); }
	inline float get_timer_36() const { return ___timer_36; }
	inline float* get_address_of_timer_36() { return &___timer_36; }
	inline void set_timer_36(float value)
	{
		___timer_36 = value;
	}

	inline static int32_t get_offset_of_delay_37() { return static_cast<int32_t>(offsetof(LoadManager_Inputs_t4203782917, ___delay_37)); }
	inline float get_delay_37() const { return ___delay_37; }
	inline float* get_address_of_delay_37() { return &___delay_37; }
	inline void set_delay_37(float value)
	{
		___delay_37 = value;
	}

	inline static int32_t get_offset_of_clipList_38() { return static_cast<int32_t>(offsetof(LoadManager_Inputs_t4203782917, ___clipList_38)); }
	inline List_1_t857997111 * get_clipList_38() const { return ___clipList_38; }
	inline List_1_t857997111 ** get_address_of_clipList_38() { return &___clipList_38; }
	inline void set_clipList_38(List_1_t857997111 * value)
	{
		___clipList_38 = value;
		Il2CppCodeGenWriteBarrier((&___clipList_38), value);
	}

	inline static int32_t get_offset_of_audioSource_39() { return static_cast<int32_t>(offsetof(LoadManager_Inputs_t4203782917, ___audioSource_39)); }
	inline AudioSource_t3935305588 * get_audioSource_39() const { return ___audioSource_39; }
	inline AudioSource_t3935305588 ** get_address_of_audioSource_39() { return &___audioSource_39; }
	inline void set_audioSource_39(AudioSource_t3935305588 * value)
	{
		___audioSource_39 = value;
		Il2CppCodeGenWriteBarrier((&___audioSource_39), value);
	}

	inline static int32_t get_offset_of_slot1Text_40() { return static_cast<int32_t>(offsetof(LoadManager_Inputs_t4203782917, ___slot1Text_40)); }
	inline TextMeshProUGUI_t529313277 * get_slot1Text_40() const { return ___slot1Text_40; }
	inline TextMeshProUGUI_t529313277 ** get_address_of_slot1Text_40() { return &___slot1Text_40; }
	inline void set_slot1Text_40(TextMeshProUGUI_t529313277 * value)
	{
		___slot1Text_40 = value;
		Il2CppCodeGenWriteBarrier((&___slot1Text_40), value);
	}

	inline static int32_t get_offset_of_slot2Text_41() { return static_cast<int32_t>(offsetof(LoadManager_Inputs_t4203782917, ___slot2Text_41)); }
	inline TextMeshProUGUI_t529313277 * get_slot2Text_41() const { return ___slot2Text_41; }
	inline TextMeshProUGUI_t529313277 ** get_address_of_slot2Text_41() { return &___slot2Text_41; }
	inline void set_slot2Text_41(TextMeshProUGUI_t529313277 * value)
	{
		___slot2Text_41 = value;
		Il2CppCodeGenWriteBarrier((&___slot2Text_41), value);
	}

	inline static int32_t get_offset_of_slot3Text_42() { return static_cast<int32_t>(offsetof(LoadManager_Inputs_t4203782917, ___slot3Text_42)); }
	inline TextMeshProUGUI_t529313277 * get_slot3Text_42() const { return ___slot3Text_42; }
	inline TextMeshProUGUI_t529313277 ** get_address_of_slot3Text_42() { return &___slot3Text_42; }
	inline void set_slot3Text_42(TextMeshProUGUI_t529313277 * value)
	{
		___slot3Text_42 = value;
		Il2CppCodeGenWriteBarrier((&___slot3Text_42), value);
	}

	inline static int32_t get_offset_of_slot1String_43() { return static_cast<int32_t>(offsetof(LoadManager_Inputs_t4203782917, ___slot1String_43)); }
	inline String_t* get_slot1String_43() const { return ___slot1String_43; }
	inline String_t** get_address_of_slot1String_43() { return &___slot1String_43; }
	inline void set_slot1String_43(String_t* value)
	{
		___slot1String_43 = value;
		Il2CppCodeGenWriteBarrier((&___slot1String_43), value);
	}

	inline static int32_t get_offset_of_slot2String_44() { return static_cast<int32_t>(offsetof(LoadManager_Inputs_t4203782917, ___slot2String_44)); }
	inline String_t* get_slot2String_44() const { return ___slot2String_44; }
	inline String_t** get_address_of_slot2String_44() { return &___slot2String_44; }
	inline void set_slot2String_44(String_t* value)
	{
		___slot2String_44 = value;
		Il2CppCodeGenWriteBarrier((&___slot2String_44), value);
	}

	inline static int32_t get_offset_of_slot3String_45() { return static_cast<int32_t>(offsetof(LoadManager_Inputs_t4203782917, ___slot3String_45)); }
	inline String_t* get_slot3String_45() const { return ___slot3String_45; }
	inline String_t** get_address_of_slot3String_45() { return &___slot3String_45; }
	inline void set_slot3String_45(String_t* value)
	{
		___slot3String_45 = value;
		Il2CppCodeGenWriteBarrier((&___slot3String_45), value);
	}

	inline static int32_t get_offset_of_dateTime_46() { return static_cast<int32_t>(offsetof(LoadManager_Inputs_t4203782917, ___dateTime_46)); }
	inline String_t* get_dateTime_46() const { return ___dateTime_46; }
	inline String_t** get_address_of_dateTime_46() { return &___dateTime_46; }
	inline void set_dateTime_46(String_t* value)
	{
		___dateTime_46 = value;
		Il2CppCodeGenWriteBarrier((&___dateTime_46), value);
	}

	inline static int32_t get_offset_of_currentSelection_47() { return static_cast<int32_t>(offsetof(LoadManager_Inputs_t4203782917, ___currentSelection_47)); }
	inline GameObject_t1113636619 * get_currentSelection_47() const { return ___currentSelection_47; }
	inline GameObject_t1113636619 ** get_address_of_currentSelection_47() { return &___currentSelection_47; }
	inline void set_currentSelection_47(GameObject_t1113636619 * value)
	{
		___currentSelection_47 = value;
		Il2CppCodeGenWriteBarrier((&___currentSelection_47), value);
	}

	inline static int32_t get_offset_of_previousSelection_48() { return static_cast<int32_t>(offsetof(LoadManager_Inputs_t4203782917, ___previousSelection_48)); }
	inline GameObject_t1113636619 * get_previousSelection_48() const { return ___previousSelection_48; }
	inline GameObject_t1113636619 ** get_address_of_previousSelection_48() { return &___previousSelection_48; }
	inline void set_previousSelection_48(GameObject_t1113636619 * value)
	{
		___previousSelection_48 = value;
		Il2CppCodeGenWriteBarrier((&___previousSelection_48), value);
	}

	inline static int32_t get_offset_of_anim_49() { return static_cast<int32_t>(offsetof(LoadManager_Inputs_t4203782917, ___anim_49)); }
	inline Animator_t434523843 * get_anim_49() const { return ___anim_49; }
	inline Animator_t434523843 ** get_address_of_anim_49() { return &___anim_49; }
	inline void set_anim_49(Animator_t434523843 * value)
	{
		___anim_49 = value;
		Il2CppCodeGenWriteBarrier((&___anim_49), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // LOADMANAGER_INPUTS_T4203782917_H
#ifndef LOADSCREEN_T3376497162_H
#define LOADSCREEN_T3376497162_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// LoadScreen
struct  LoadScreen_t3376497162  : public MonoBehaviour_t3962482529
{
public:
	// UnityEngine.AsyncOperation LoadScreen::loadingOperation
	AsyncOperation_t1445031843 * ___loadingOperation_4;
	// System.Boolean LoadScreen::loading
	bool ___loading_5;
	// UnityEngine.CanvasGroup LoadScreen::canvasGroup
	CanvasGroup_t4083511760 * ___canvasGroup_6;
	// UnityEngine.UI.Image LoadScreen::progressCounterLeft
	Image_t2670269651 * ___progressCounterLeft_7;
	// UnityEngine.UI.Image LoadScreen::progressCounterRight
	Image_t2670269651 * ___progressCounterRight_8;
	// TMPro.TextMeshProUGUI LoadScreen::loaderHint
	TextMeshProUGUI_t529313277 * ___loaderHint_9;
	// System.Single LoadScreen::fadeDuration
	float ___fadeDuration_10;
	// System.Single LoadScreen::originalValue
	float ___originalValue_11;
	// System.Single LoadScreen::loadProgress
	float ___loadProgress_12;
	// System.Single LoadScreen::fadeValue
	float ___fadeValue_13;
	// System.Boolean LoadScreen::loadAtStart
	bool ___loadAtStart_14;
	// System.Boolean LoadScreen::canLoad
	bool ___canLoad_15;

public:
	inline static int32_t get_offset_of_loadingOperation_4() { return static_cast<int32_t>(offsetof(LoadScreen_t3376497162, ___loadingOperation_4)); }
	inline AsyncOperation_t1445031843 * get_loadingOperation_4() const { return ___loadingOperation_4; }
	inline AsyncOperation_t1445031843 ** get_address_of_loadingOperation_4() { return &___loadingOperation_4; }
	inline void set_loadingOperation_4(AsyncOperation_t1445031843 * value)
	{
		___loadingOperation_4 = value;
		Il2CppCodeGenWriteBarrier((&___loadingOperation_4), value);
	}

	inline static int32_t get_offset_of_loading_5() { return static_cast<int32_t>(offsetof(LoadScreen_t3376497162, ___loading_5)); }
	inline bool get_loading_5() const { return ___loading_5; }
	inline bool* get_address_of_loading_5() { return &___loading_5; }
	inline void set_loading_5(bool value)
	{
		___loading_5 = value;
	}

	inline static int32_t get_offset_of_canvasGroup_6() { return static_cast<int32_t>(offsetof(LoadScreen_t3376497162, ___canvasGroup_6)); }
	inline CanvasGroup_t4083511760 * get_canvasGroup_6() const { return ___canvasGroup_6; }
	inline CanvasGroup_t4083511760 ** get_address_of_canvasGroup_6() { return &___canvasGroup_6; }
	inline void set_canvasGroup_6(CanvasGroup_t4083511760 * value)
	{
		___canvasGroup_6 = value;
		Il2CppCodeGenWriteBarrier((&___canvasGroup_6), value);
	}

	inline static int32_t get_offset_of_progressCounterLeft_7() { return static_cast<int32_t>(offsetof(LoadScreen_t3376497162, ___progressCounterLeft_7)); }
	inline Image_t2670269651 * get_progressCounterLeft_7() const { return ___progressCounterLeft_7; }
	inline Image_t2670269651 ** get_address_of_progressCounterLeft_7() { return &___progressCounterLeft_7; }
	inline void set_progressCounterLeft_7(Image_t2670269651 * value)
	{
		___progressCounterLeft_7 = value;
		Il2CppCodeGenWriteBarrier((&___progressCounterLeft_7), value);
	}

	inline static int32_t get_offset_of_progressCounterRight_8() { return static_cast<int32_t>(offsetof(LoadScreen_t3376497162, ___progressCounterRight_8)); }
	inline Image_t2670269651 * get_progressCounterRight_8() const { return ___progressCounterRight_8; }
	inline Image_t2670269651 ** get_address_of_progressCounterRight_8() { return &___progressCounterRight_8; }
	inline void set_progressCounterRight_8(Image_t2670269651 * value)
	{
		___progressCounterRight_8 = value;
		Il2CppCodeGenWriteBarrier((&___progressCounterRight_8), value);
	}

	inline static int32_t get_offset_of_loaderHint_9() { return static_cast<int32_t>(offsetof(LoadScreen_t3376497162, ___loaderHint_9)); }
	inline TextMeshProUGUI_t529313277 * get_loaderHint_9() const { return ___loaderHint_9; }
	inline TextMeshProUGUI_t529313277 ** get_address_of_loaderHint_9() { return &___loaderHint_9; }
	inline void set_loaderHint_9(TextMeshProUGUI_t529313277 * value)
	{
		___loaderHint_9 = value;
		Il2CppCodeGenWriteBarrier((&___loaderHint_9), value);
	}

	inline static int32_t get_offset_of_fadeDuration_10() { return static_cast<int32_t>(offsetof(LoadScreen_t3376497162, ___fadeDuration_10)); }
	inline float get_fadeDuration_10() const { return ___fadeDuration_10; }
	inline float* get_address_of_fadeDuration_10() { return &___fadeDuration_10; }
	inline void set_fadeDuration_10(float value)
	{
		___fadeDuration_10 = value;
	}

	inline static int32_t get_offset_of_originalValue_11() { return static_cast<int32_t>(offsetof(LoadScreen_t3376497162, ___originalValue_11)); }
	inline float get_originalValue_11() const { return ___originalValue_11; }
	inline float* get_address_of_originalValue_11() { return &___originalValue_11; }
	inline void set_originalValue_11(float value)
	{
		___originalValue_11 = value;
	}

	inline static int32_t get_offset_of_loadProgress_12() { return static_cast<int32_t>(offsetof(LoadScreen_t3376497162, ___loadProgress_12)); }
	inline float get_loadProgress_12() const { return ___loadProgress_12; }
	inline float* get_address_of_loadProgress_12() { return &___loadProgress_12; }
	inline void set_loadProgress_12(float value)
	{
		___loadProgress_12 = value;
	}

	inline static int32_t get_offset_of_fadeValue_13() { return static_cast<int32_t>(offsetof(LoadScreen_t3376497162, ___fadeValue_13)); }
	inline float get_fadeValue_13() const { return ___fadeValue_13; }
	inline float* get_address_of_fadeValue_13() { return &___fadeValue_13; }
	inline void set_fadeValue_13(float value)
	{
		___fadeValue_13 = value;
	}

	inline static int32_t get_offset_of_loadAtStart_14() { return static_cast<int32_t>(offsetof(LoadScreen_t3376497162, ___loadAtStart_14)); }
	inline bool get_loadAtStart_14() const { return ___loadAtStart_14; }
	inline bool* get_address_of_loadAtStart_14() { return &___loadAtStart_14; }
	inline void set_loadAtStart_14(bool value)
	{
		___loadAtStart_14 = value;
	}

	inline static int32_t get_offset_of_canLoad_15() { return static_cast<int32_t>(offsetof(LoadScreen_t3376497162, ___canLoad_15)); }
	inline bool get_canLoad_15() const { return ___canLoad_15; }
	inline bool* get_address_of_canLoad_15() { return &___canLoad_15; }
	inline void set_canLoad_15(bool value)
	{
		___canLoad_15 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // LOADSCREEN_T3376497162_H
#ifndef MAPCONTROLLER_T3762646607_H
#define MAPCONTROLLER_T3762646607_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// MapController
struct  MapController_t3762646607  : public MonoBehaviour_t3962482529
{
public:
	// UnityEngine.Camera MapController::mapCamera
	Camera_t4157153871 * ___mapCamera_4;
	// System.Single MapController::minZoom
	float ___minZoom_5;
	// System.Single MapController::maxZoom
	float ___maxZoom_6;
	// UnityEngine.Vector3 MapController::pos
	Vector3_t3722313464  ___pos_7;
	// UnityEngine.GameObject MapController::mapArrow
	GameObject_t1113636619 * ___mapArrow_8;
	// UnityEngine.GameObject MapController::mapContainer
	GameObject_t1113636619 * ___mapContainer_9;
	// UnityEngine.Vector2 MapController::previousDistance
	Vector2_t2156229523  ___previousDistance_10;
	// UnityEngine.Vector2 MapController::currentDistance
	Vector2_t2156229523  ___currentDistance_11;
	// UnityEngine.Vector2 MapController::midPoint
	Vector2_t2156229523  ___midPoint_12;
	// UnityEngine.Vector2 MapController::ScreenSize
	Vector2_t2156229523  ___ScreenSize_13;
	// UnityEngine.Vector3 MapController::originalPos
	Vector3_t3722313464  ___originalPos_14;
	// System.String MapController::VITA
	String_t* ___VITA_15;
	// System.Single MapController::RIGHT
	float ___RIGHT_16;
	// System.Single MapController::LEFT
	float ___LEFT_17;

public:
	inline static int32_t get_offset_of_mapCamera_4() { return static_cast<int32_t>(offsetof(MapController_t3762646607, ___mapCamera_4)); }
	inline Camera_t4157153871 * get_mapCamera_4() const { return ___mapCamera_4; }
	inline Camera_t4157153871 ** get_address_of_mapCamera_4() { return &___mapCamera_4; }
	inline void set_mapCamera_4(Camera_t4157153871 * value)
	{
		___mapCamera_4 = value;
		Il2CppCodeGenWriteBarrier((&___mapCamera_4), value);
	}

	inline static int32_t get_offset_of_minZoom_5() { return static_cast<int32_t>(offsetof(MapController_t3762646607, ___minZoom_5)); }
	inline float get_minZoom_5() const { return ___minZoom_5; }
	inline float* get_address_of_minZoom_5() { return &___minZoom_5; }
	inline void set_minZoom_5(float value)
	{
		___minZoom_5 = value;
	}

	inline static int32_t get_offset_of_maxZoom_6() { return static_cast<int32_t>(offsetof(MapController_t3762646607, ___maxZoom_6)); }
	inline float get_maxZoom_6() const { return ___maxZoom_6; }
	inline float* get_address_of_maxZoom_6() { return &___maxZoom_6; }
	inline void set_maxZoom_6(float value)
	{
		___maxZoom_6 = value;
	}

	inline static int32_t get_offset_of_pos_7() { return static_cast<int32_t>(offsetof(MapController_t3762646607, ___pos_7)); }
	inline Vector3_t3722313464  get_pos_7() const { return ___pos_7; }
	inline Vector3_t3722313464 * get_address_of_pos_7() { return &___pos_7; }
	inline void set_pos_7(Vector3_t3722313464  value)
	{
		___pos_7 = value;
	}

	inline static int32_t get_offset_of_mapArrow_8() { return static_cast<int32_t>(offsetof(MapController_t3762646607, ___mapArrow_8)); }
	inline GameObject_t1113636619 * get_mapArrow_8() const { return ___mapArrow_8; }
	inline GameObject_t1113636619 ** get_address_of_mapArrow_8() { return &___mapArrow_8; }
	inline void set_mapArrow_8(GameObject_t1113636619 * value)
	{
		___mapArrow_8 = value;
		Il2CppCodeGenWriteBarrier((&___mapArrow_8), value);
	}

	inline static int32_t get_offset_of_mapContainer_9() { return static_cast<int32_t>(offsetof(MapController_t3762646607, ___mapContainer_9)); }
	inline GameObject_t1113636619 * get_mapContainer_9() const { return ___mapContainer_9; }
	inline GameObject_t1113636619 ** get_address_of_mapContainer_9() { return &___mapContainer_9; }
	inline void set_mapContainer_9(GameObject_t1113636619 * value)
	{
		___mapContainer_9 = value;
		Il2CppCodeGenWriteBarrier((&___mapContainer_9), value);
	}

	inline static int32_t get_offset_of_previousDistance_10() { return static_cast<int32_t>(offsetof(MapController_t3762646607, ___previousDistance_10)); }
	inline Vector2_t2156229523  get_previousDistance_10() const { return ___previousDistance_10; }
	inline Vector2_t2156229523 * get_address_of_previousDistance_10() { return &___previousDistance_10; }
	inline void set_previousDistance_10(Vector2_t2156229523  value)
	{
		___previousDistance_10 = value;
	}

	inline static int32_t get_offset_of_currentDistance_11() { return static_cast<int32_t>(offsetof(MapController_t3762646607, ___currentDistance_11)); }
	inline Vector2_t2156229523  get_currentDistance_11() const { return ___currentDistance_11; }
	inline Vector2_t2156229523 * get_address_of_currentDistance_11() { return &___currentDistance_11; }
	inline void set_currentDistance_11(Vector2_t2156229523  value)
	{
		___currentDistance_11 = value;
	}

	inline static int32_t get_offset_of_midPoint_12() { return static_cast<int32_t>(offsetof(MapController_t3762646607, ___midPoint_12)); }
	inline Vector2_t2156229523  get_midPoint_12() const { return ___midPoint_12; }
	inline Vector2_t2156229523 * get_address_of_midPoint_12() { return &___midPoint_12; }
	inline void set_midPoint_12(Vector2_t2156229523  value)
	{
		___midPoint_12 = value;
	}

	inline static int32_t get_offset_of_ScreenSize_13() { return static_cast<int32_t>(offsetof(MapController_t3762646607, ___ScreenSize_13)); }
	inline Vector2_t2156229523  get_ScreenSize_13() const { return ___ScreenSize_13; }
	inline Vector2_t2156229523 * get_address_of_ScreenSize_13() { return &___ScreenSize_13; }
	inline void set_ScreenSize_13(Vector2_t2156229523  value)
	{
		___ScreenSize_13 = value;
	}

	inline static int32_t get_offset_of_originalPos_14() { return static_cast<int32_t>(offsetof(MapController_t3762646607, ___originalPos_14)); }
	inline Vector3_t3722313464  get_originalPos_14() const { return ___originalPos_14; }
	inline Vector3_t3722313464 * get_address_of_originalPos_14() { return &___originalPos_14; }
	inline void set_originalPos_14(Vector3_t3722313464  value)
	{
		___originalPos_14 = value;
	}

	inline static int32_t get_offset_of_VITA_15() { return static_cast<int32_t>(offsetof(MapController_t3762646607, ___VITA_15)); }
	inline String_t* get_VITA_15() const { return ___VITA_15; }
	inline String_t** get_address_of_VITA_15() { return &___VITA_15; }
	inline void set_VITA_15(String_t* value)
	{
		___VITA_15 = value;
		Il2CppCodeGenWriteBarrier((&___VITA_15), value);
	}

	inline static int32_t get_offset_of_RIGHT_16() { return static_cast<int32_t>(offsetof(MapController_t3762646607, ___RIGHT_16)); }
	inline float get_RIGHT_16() const { return ___RIGHT_16; }
	inline float* get_address_of_RIGHT_16() { return &___RIGHT_16; }
	inline void set_RIGHT_16(float value)
	{
		___RIGHT_16 = value;
	}

	inline static int32_t get_offset_of_LEFT_17() { return static_cast<int32_t>(offsetof(MapController_t3762646607, ___LEFT_17)); }
	inline float get_LEFT_17() const { return ___LEFT_17; }
	inline float* get_address_of_LEFT_17() { return &___LEFT_17; }
	inline void set_LEFT_17(float value)
	{
		___LEFT_17 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // MAPCONTROLLER_T3762646607_H
#ifndef MENU_MANAGER_T102876996_H
#define MENU_MANAGER_T102876996_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// Menu_Manager
struct  Menu_Manager_t102876996  : public MonoBehaviour_t3962482529
{
public:
	// System.String Menu_Manager::joystick1
	String_t* ___joystick1_4;
	// System.Int32 Menu_Manager::CROSS
	int32_t ___CROSS_5;
	// System.Int32 Menu_Manager::CIRCLE
	int32_t ___CIRCLE_6;
	// System.Int32 Menu_Manager::SQUARE
	int32_t ___SQUARE_7;
	// System.Int32 Menu_Manager::TRIANGLE
	int32_t ___TRIANGLE_8;
	// System.Int32 Menu_Manager::SELECT
	int32_t ___SELECT_9;
	// System.Int32 Menu_Manager::START
	int32_t ___START_10;
	// System.Int32 Menu_Manager::UP
	int32_t ___UP_11;
	// System.Int32 Menu_Manager::RIGHT
	int32_t ___RIGHT_12;
	// System.Int32 Menu_Manager::DOWN
	int32_t ___DOWN_13;
	// System.Int32 Menu_Manager::LEFT
	int32_t ___LEFT_14;
	// System.Int32 Menu_Manager::selectedSlot
	int32_t ___selectedSlot_15;
	// System.Int32 Menu_Manager::selectedSLSlot
	int32_t ___selectedSLSlot_16;
	// UnityEngine.Color Menu_Manager::baseColor
	Color_t2555686324  ___baseColor_17;
	// UnityEngine.Color Menu_Manager::hilightColor
	Color_t2555686324  ___hilightColor_18;
	// UnityEngine.Color Menu_Manager::selectedColor
	Color_t2555686324  ___selectedColor_19;
	// UnityEngine.UI.RawImage Menu_Manager::slot1
	RawImage_t3182918964 * ___slot1_20;
	// UnityEngine.UI.RawImage Menu_Manager::slot2
	RawImage_t3182918964 * ___slot2_21;
	// UnityEngine.UI.RawImage Menu_Manager::slot3
	RawImage_t3182918964 * ___slot3_22;
	// UnityEngine.GameObject Menu_Manager::saveManager
	GameObject_t1113636619 * ___saveManager_23;
	// UnityEngine.GameObject Menu_Manager::optionsManager
	GameObject_t1113636619 * ___optionsManager_24;
	// UnityEngine.GameObject Menu_Manager::ButtonManager
	GameObject_t1113636619 * ___ButtonManager_25;
	// UnityEngine.CanvasGroup Menu_Manager::mainMenuCanvas
	CanvasGroup_t4083511760 * ___mainMenuCanvas_26;
	// UnityEngine.CanvasGroup Menu_Manager::saverCanvas
	CanvasGroup_t4083511760 * ___saverCanvas_27;
	// UnityEngine.CanvasGroup Menu_Manager::optionCanvas
	CanvasGroup_t4083511760 * ___optionCanvas_28;
	// UnityEngine.CanvasGroup Menu_Manager::dialogCanvas
	CanvasGroup_t4083511760 * ___dialogCanvas_29;
	// UnityEngine.CanvasGroup Menu_Manager::selectedCanvas
	CanvasGroup_t4083511760 * ___selectedCanvas_30;
	// UnityEngine.GameObject Menu_Manager::audioManager
	GameObject_t1113636619 * ___audioManager_31;
	// System.Single Menu_Manager::fadeDuration
	float ___fadeDuration_32;
	// System.Single Menu_Manager::targetValue
	float ___targetValue_33;
	// System.Boolean Menu_Manager::mainMenuEnabled
	bool ___mainMenuEnabled_34;
	// System.Boolean Menu_Manager::saverEnabled
	bool ___saverEnabled_35;
	// System.Boolean Menu_Manager::optionEnabled
	bool ___optionEnabled_36;
	// System.Boolean Menu_Manager::dialogEnabled
	bool ___dialogEnabled_37;
	// System.Boolean Menu_Manager::delayTimer
	bool ___delayTimer_38;
	// System.Single Menu_Manager::timer
	float ___timer_39;
	// System.Single Menu_Manager::delay
	float ___delay_40;
	// System.Collections.Generic.List`1<UnityEngine.AudioClip> Menu_Manager::clipList
	List_1_t857997111 * ___clipList_41;
	// UnityEngine.AudioSource Menu_Manager::audioSource
	AudioSource_t3935305588 * ___audioSource_42;
	// UnityEngine.GameObject Menu_Manager::currentSelection
	GameObject_t1113636619 * ___currentSelection_43;
	// UnityEngine.GameObject Menu_Manager::previousSelection
	GameObject_t1113636619 * ___previousSelection_44;
	// UnityEngine.Animator Menu_Manager::anim
	Animator_t434523843 * ___anim_45;

public:
	inline static int32_t get_offset_of_joystick1_4() { return static_cast<int32_t>(offsetof(Menu_Manager_t102876996, ___joystick1_4)); }
	inline String_t* get_joystick1_4() const { return ___joystick1_4; }
	inline String_t** get_address_of_joystick1_4() { return &___joystick1_4; }
	inline void set_joystick1_4(String_t* value)
	{
		___joystick1_4 = value;
		Il2CppCodeGenWriteBarrier((&___joystick1_4), value);
	}

	inline static int32_t get_offset_of_CROSS_5() { return static_cast<int32_t>(offsetof(Menu_Manager_t102876996, ___CROSS_5)); }
	inline int32_t get_CROSS_5() const { return ___CROSS_5; }
	inline int32_t* get_address_of_CROSS_5() { return &___CROSS_5; }
	inline void set_CROSS_5(int32_t value)
	{
		___CROSS_5 = value;
	}

	inline static int32_t get_offset_of_CIRCLE_6() { return static_cast<int32_t>(offsetof(Menu_Manager_t102876996, ___CIRCLE_6)); }
	inline int32_t get_CIRCLE_6() const { return ___CIRCLE_6; }
	inline int32_t* get_address_of_CIRCLE_6() { return &___CIRCLE_6; }
	inline void set_CIRCLE_6(int32_t value)
	{
		___CIRCLE_6 = value;
	}

	inline static int32_t get_offset_of_SQUARE_7() { return static_cast<int32_t>(offsetof(Menu_Manager_t102876996, ___SQUARE_7)); }
	inline int32_t get_SQUARE_7() const { return ___SQUARE_7; }
	inline int32_t* get_address_of_SQUARE_7() { return &___SQUARE_7; }
	inline void set_SQUARE_7(int32_t value)
	{
		___SQUARE_7 = value;
	}

	inline static int32_t get_offset_of_TRIANGLE_8() { return static_cast<int32_t>(offsetof(Menu_Manager_t102876996, ___TRIANGLE_8)); }
	inline int32_t get_TRIANGLE_8() const { return ___TRIANGLE_8; }
	inline int32_t* get_address_of_TRIANGLE_8() { return &___TRIANGLE_8; }
	inline void set_TRIANGLE_8(int32_t value)
	{
		___TRIANGLE_8 = value;
	}

	inline static int32_t get_offset_of_SELECT_9() { return static_cast<int32_t>(offsetof(Menu_Manager_t102876996, ___SELECT_9)); }
	inline int32_t get_SELECT_9() const { return ___SELECT_9; }
	inline int32_t* get_address_of_SELECT_9() { return &___SELECT_9; }
	inline void set_SELECT_9(int32_t value)
	{
		___SELECT_9 = value;
	}

	inline static int32_t get_offset_of_START_10() { return static_cast<int32_t>(offsetof(Menu_Manager_t102876996, ___START_10)); }
	inline int32_t get_START_10() const { return ___START_10; }
	inline int32_t* get_address_of_START_10() { return &___START_10; }
	inline void set_START_10(int32_t value)
	{
		___START_10 = value;
	}

	inline static int32_t get_offset_of_UP_11() { return static_cast<int32_t>(offsetof(Menu_Manager_t102876996, ___UP_11)); }
	inline int32_t get_UP_11() const { return ___UP_11; }
	inline int32_t* get_address_of_UP_11() { return &___UP_11; }
	inline void set_UP_11(int32_t value)
	{
		___UP_11 = value;
	}

	inline static int32_t get_offset_of_RIGHT_12() { return static_cast<int32_t>(offsetof(Menu_Manager_t102876996, ___RIGHT_12)); }
	inline int32_t get_RIGHT_12() const { return ___RIGHT_12; }
	inline int32_t* get_address_of_RIGHT_12() { return &___RIGHT_12; }
	inline void set_RIGHT_12(int32_t value)
	{
		___RIGHT_12 = value;
	}

	inline static int32_t get_offset_of_DOWN_13() { return static_cast<int32_t>(offsetof(Menu_Manager_t102876996, ___DOWN_13)); }
	inline int32_t get_DOWN_13() const { return ___DOWN_13; }
	inline int32_t* get_address_of_DOWN_13() { return &___DOWN_13; }
	inline void set_DOWN_13(int32_t value)
	{
		___DOWN_13 = value;
	}

	inline static int32_t get_offset_of_LEFT_14() { return static_cast<int32_t>(offsetof(Menu_Manager_t102876996, ___LEFT_14)); }
	inline int32_t get_LEFT_14() const { return ___LEFT_14; }
	inline int32_t* get_address_of_LEFT_14() { return &___LEFT_14; }
	inline void set_LEFT_14(int32_t value)
	{
		___LEFT_14 = value;
	}

	inline static int32_t get_offset_of_selectedSlot_15() { return static_cast<int32_t>(offsetof(Menu_Manager_t102876996, ___selectedSlot_15)); }
	inline int32_t get_selectedSlot_15() const { return ___selectedSlot_15; }
	inline int32_t* get_address_of_selectedSlot_15() { return &___selectedSlot_15; }
	inline void set_selectedSlot_15(int32_t value)
	{
		___selectedSlot_15 = value;
	}

	inline static int32_t get_offset_of_selectedSLSlot_16() { return static_cast<int32_t>(offsetof(Menu_Manager_t102876996, ___selectedSLSlot_16)); }
	inline int32_t get_selectedSLSlot_16() const { return ___selectedSLSlot_16; }
	inline int32_t* get_address_of_selectedSLSlot_16() { return &___selectedSLSlot_16; }
	inline void set_selectedSLSlot_16(int32_t value)
	{
		___selectedSLSlot_16 = value;
	}

	inline static int32_t get_offset_of_baseColor_17() { return static_cast<int32_t>(offsetof(Menu_Manager_t102876996, ___baseColor_17)); }
	inline Color_t2555686324  get_baseColor_17() const { return ___baseColor_17; }
	inline Color_t2555686324 * get_address_of_baseColor_17() { return &___baseColor_17; }
	inline void set_baseColor_17(Color_t2555686324  value)
	{
		___baseColor_17 = value;
	}

	inline static int32_t get_offset_of_hilightColor_18() { return static_cast<int32_t>(offsetof(Menu_Manager_t102876996, ___hilightColor_18)); }
	inline Color_t2555686324  get_hilightColor_18() const { return ___hilightColor_18; }
	inline Color_t2555686324 * get_address_of_hilightColor_18() { return &___hilightColor_18; }
	inline void set_hilightColor_18(Color_t2555686324  value)
	{
		___hilightColor_18 = value;
	}

	inline static int32_t get_offset_of_selectedColor_19() { return static_cast<int32_t>(offsetof(Menu_Manager_t102876996, ___selectedColor_19)); }
	inline Color_t2555686324  get_selectedColor_19() const { return ___selectedColor_19; }
	inline Color_t2555686324 * get_address_of_selectedColor_19() { return &___selectedColor_19; }
	inline void set_selectedColor_19(Color_t2555686324  value)
	{
		___selectedColor_19 = value;
	}

	inline static int32_t get_offset_of_slot1_20() { return static_cast<int32_t>(offsetof(Menu_Manager_t102876996, ___slot1_20)); }
	inline RawImage_t3182918964 * get_slot1_20() const { return ___slot1_20; }
	inline RawImage_t3182918964 ** get_address_of_slot1_20() { return &___slot1_20; }
	inline void set_slot1_20(RawImage_t3182918964 * value)
	{
		___slot1_20 = value;
		Il2CppCodeGenWriteBarrier((&___slot1_20), value);
	}

	inline static int32_t get_offset_of_slot2_21() { return static_cast<int32_t>(offsetof(Menu_Manager_t102876996, ___slot2_21)); }
	inline RawImage_t3182918964 * get_slot2_21() const { return ___slot2_21; }
	inline RawImage_t3182918964 ** get_address_of_slot2_21() { return &___slot2_21; }
	inline void set_slot2_21(RawImage_t3182918964 * value)
	{
		___slot2_21 = value;
		Il2CppCodeGenWriteBarrier((&___slot2_21), value);
	}

	inline static int32_t get_offset_of_slot3_22() { return static_cast<int32_t>(offsetof(Menu_Manager_t102876996, ___slot3_22)); }
	inline RawImage_t3182918964 * get_slot3_22() const { return ___slot3_22; }
	inline RawImage_t3182918964 ** get_address_of_slot3_22() { return &___slot3_22; }
	inline void set_slot3_22(RawImage_t3182918964 * value)
	{
		___slot3_22 = value;
		Il2CppCodeGenWriteBarrier((&___slot3_22), value);
	}

	inline static int32_t get_offset_of_saveManager_23() { return static_cast<int32_t>(offsetof(Menu_Manager_t102876996, ___saveManager_23)); }
	inline GameObject_t1113636619 * get_saveManager_23() const { return ___saveManager_23; }
	inline GameObject_t1113636619 ** get_address_of_saveManager_23() { return &___saveManager_23; }
	inline void set_saveManager_23(GameObject_t1113636619 * value)
	{
		___saveManager_23 = value;
		Il2CppCodeGenWriteBarrier((&___saveManager_23), value);
	}

	inline static int32_t get_offset_of_optionsManager_24() { return static_cast<int32_t>(offsetof(Menu_Manager_t102876996, ___optionsManager_24)); }
	inline GameObject_t1113636619 * get_optionsManager_24() const { return ___optionsManager_24; }
	inline GameObject_t1113636619 ** get_address_of_optionsManager_24() { return &___optionsManager_24; }
	inline void set_optionsManager_24(GameObject_t1113636619 * value)
	{
		___optionsManager_24 = value;
		Il2CppCodeGenWriteBarrier((&___optionsManager_24), value);
	}

	inline static int32_t get_offset_of_ButtonManager_25() { return static_cast<int32_t>(offsetof(Menu_Manager_t102876996, ___ButtonManager_25)); }
	inline GameObject_t1113636619 * get_ButtonManager_25() const { return ___ButtonManager_25; }
	inline GameObject_t1113636619 ** get_address_of_ButtonManager_25() { return &___ButtonManager_25; }
	inline void set_ButtonManager_25(GameObject_t1113636619 * value)
	{
		___ButtonManager_25 = value;
		Il2CppCodeGenWriteBarrier((&___ButtonManager_25), value);
	}

	inline static int32_t get_offset_of_mainMenuCanvas_26() { return static_cast<int32_t>(offsetof(Menu_Manager_t102876996, ___mainMenuCanvas_26)); }
	inline CanvasGroup_t4083511760 * get_mainMenuCanvas_26() const { return ___mainMenuCanvas_26; }
	inline CanvasGroup_t4083511760 ** get_address_of_mainMenuCanvas_26() { return &___mainMenuCanvas_26; }
	inline void set_mainMenuCanvas_26(CanvasGroup_t4083511760 * value)
	{
		___mainMenuCanvas_26 = value;
		Il2CppCodeGenWriteBarrier((&___mainMenuCanvas_26), value);
	}

	inline static int32_t get_offset_of_saverCanvas_27() { return static_cast<int32_t>(offsetof(Menu_Manager_t102876996, ___saverCanvas_27)); }
	inline CanvasGroup_t4083511760 * get_saverCanvas_27() const { return ___saverCanvas_27; }
	inline CanvasGroup_t4083511760 ** get_address_of_saverCanvas_27() { return &___saverCanvas_27; }
	inline void set_saverCanvas_27(CanvasGroup_t4083511760 * value)
	{
		___saverCanvas_27 = value;
		Il2CppCodeGenWriteBarrier((&___saverCanvas_27), value);
	}

	inline static int32_t get_offset_of_optionCanvas_28() { return static_cast<int32_t>(offsetof(Menu_Manager_t102876996, ___optionCanvas_28)); }
	inline CanvasGroup_t4083511760 * get_optionCanvas_28() const { return ___optionCanvas_28; }
	inline CanvasGroup_t4083511760 ** get_address_of_optionCanvas_28() { return &___optionCanvas_28; }
	inline void set_optionCanvas_28(CanvasGroup_t4083511760 * value)
	{
		___optionCanvas_28 = value;
		Il2CppCodeGenWriteBarrier((&___optionCanvas_28), value);
	}

	inline static int32_t get_offset_of_dialogCanvas_29() { return static_cast<int32_t>(offsetof(Menu_Manager_t102876996, ___dialogCanvas_29)); }
	inline CanvasGroup_t4083511760 * get_dialogCanvas_29() const { return ___dialogCanvas_29; }
	inline CanvasGroup_t4083511760 ** get_address_of_dialogCanvas_29() { return &___dialogCanvas_29; }
	inline void set_dialogCanvas_29(CanvasGroup_t4083511760 * value)
	{
		___dialogCanvas_29 = value;
		Il2CppCodeGenWriteBarrier((&___dialogCanvas_29), value);
	}

	inline static int32_t get_offset_of_selectedCanvas_30() { return static_cast<int32_t>(offsetof(Menu_Manager_t102876996, ___selectedCanvas_30)); }
	inline CanvasGroup_t4083511760 * get_selectedCanvas_30() const { return ___selectedCanvas_30; }
	inline CanvasGroup_t4083511760 ** get_address_of_selectedCanvas_30() { return &___selectedCanvas_30; }
	inline void set_selectedCanvas_30(CanvasGroup_t4083511760 * value)
	{
		___selectedCanvas_30 = value;
		Il2CppCodeGenWriteBarrier((&___selectedCanvas_30), value);
	}

	inline static int32_t get_offset_of_audioManager_31() { return static_cast<int32_t>(offsetof(Menu_Manager_t102876996, ___audioManager_31)); }
	inline GameObject_t1113636619 * get_audioManager_31() const { return ___audioManager_31; }
	inline GameObject_t1113636619 ** get_address_of_audioManager_31() { return &___audioManager_31; }
	inline void set_audioManager_31(GameObject_t1113636619 * value)
	{
		___audioManager_31 = value;
		Il2CppCodeGenWriteBarrier((&___audioManager_31), value);
	}

	inline static int32_t get_offset_of_fadeDuration_32() { return static_cast<int32_t>(offsetof(Menu_Manager_t102876996, ___fadeDuration_32)); }
	inline float get_fadeDuration_32() const { return ___fadeDuration_32; }
	inline float* get_address_of_fadeDuration_32() { return &___fadeDuration_32; }
	inline void set_fadeDuration_32(float value)
	{
		___fadeDuration_32 = value;
	}

	inline static int32_t get_offset_of_targetValue_33() { return static_cast<int32_t>(offsetof(Menu_Manager_t102876996, ___targetValue_33)); }
	inline float get_targetValue_33() const { return ___targetValue_33; }
	inline float* get_address_of_targetValue_33() { return &___targetValue_33; }
	inline void set_targetValue_33(float value)
	{
		___targetValue_33 = value;
	}

	inline static int32_t get_offset_of_mainMenuEnabled_34() { return static_cast<int32_t>(offsetof(Menu_Manager_t102876996, ___mainMenuEnabled_34)); }
	inline bool get_mainMenuEnabled_34() const { return ___mainMenuEnabled_34; }
	inline bool* get_address_of_mainMenuEnabled_34() { return &___mainMenuEnabled_34; }
	inline void set_mainMenuEnabled_34(bool value)
	{
		___mainMenuEnabled_34 = value;
	}

	inline static int32_t get_offset_of_saverEnabled_35() { return static_cast<int32_t>(offsetof(Menu_Manager_t102876996, ___saverEnabled_35)); }
	inline bool get_saverEnabled_35() const { return ___saverEnabled_35; }
	inline bool* get_address_of_saverEnabled_35() { return &___saverEnabled_35; }
	inline void set_saverEnabled_35(bool value)
	{
		___saverEnabled_35 = value;
	}

	inline static int32_t get_offset_of_optionEnabled_36() { return static_cast<int32_t>(offsetof(Menu_Manager_t102876996, ___optionEnabled_36)); }
	inline bool get_optionEnabled_36() const { return ___optionEnabled_36; }
	inline bool* get_address_of_optionEnabled_36() { return &___optionEnabled_36; }
	inline void set_optionEnabled_36(bool value)
	{
		___optionEnabled_36 = value;
	}

	inline static int32_t get_offset_of_dialogEnabled_37() { return static_cast<int32_t>(offsetof(Menu_Manager_t102876996, ___dialogEnabled_37)); }
	inline bool get_dialogEnabled_37() const { return ___dialogEnabled_37; }
	inline bool* get_address_of_dialogEnabled_37() { return &___dialogEnabled_37; }
	inline void set_dialogEnabled_37(bool value)
	{
		___dialogEnabled_37 = value;
	}

	inline static int32_t get_offset_of_delayTimer_38() { return static_cast<int32_t>(offsetof(Menu_Manager_t102876996, ___delayTimer_38)); }
	inline bool get_delayTimer_38() const { return ___delayTimer_38; }
	inline bool* get_address_of_delayTimer_38() { return &___delayTimer_38; }
	inline void set_delayTimer_38(bool value)
	{
		___delayTimer_38 = value;
	}

	inline static int32_t get_offset_of_timer_39() { return static_cast<int32_t>(offsetof(Menu_Manager_t102876996, ___timer_39)); }
	inline float get_timer_39() const { return ___timer_39; }
	inline float* get_address_of_timer_39() { return &___timer_39; }
	inline void set_timer_39(float value)
	{
		___timer_39 = value;
	}

	inline static int32_t get_offset_of_delay_40() { return static_cast<int32_t>(offsetof(Menu_Manager_t102876996, ___delay_40)); }
	inline float get_delay_40() const { return ___delay_40; }
	inline float* get_address_of_delay_40() { return &___delay_40; }
	inline void set_delay_40(float value)
	{
		___delay_40 = value;
	}

	inline static int32_t get_offset_of_clipList_41() { return static_cast<int32_t>(offsetof(Menu_Manager_t102876996, ___clipList_41)); }
	inline List_1_t857997111 * get_clipList_41() const { return ___clipList_41; }
	inline List_1_t857997111 ** get_address_of_clipList_41() { return &___clipList_41; }
	inline void set_clipList_41(List_1_t857997111 * value)
	{
		___clipList_41 = value;
		Il2CppCodeGenWriteBarrier((&___clipList_41), value);
	}

	inline static int32_t get_offset_of_audioSource_42() { return static_cast<int32_t>(offsetof(Menu_Manager_t102876996, ___audioSource_42)); }
	inline AudioSource_t3935305588 * get_audioSource_42() const { return ___audioSource_42; }
	inline AudioSource_t3935305588 ** get_address_of_audioSource_42() { return &___audioSource_42; }
	inline void set_audioSource_42(AudioSource_t3935305588 * value)
	{
		___audioSource_42 = value;
		Il2CppCodeGenWriteBarrier((&___audioSource_42), value);
	}

	inline static int32_t get_offset_of_currentSelection_43() { return static_cast<int32_t>(offsetof(Menu_Manager_t102876996, ___currentSelection_43)); }
	inline GameObject_t1113636619 * get_currentSelection_43() const { return ___currentSelection_43; }
	inline GameObject_t1113636619 ** get_address_of_currentSelection_43() { return &___currentSelection_43; }
	inline void set_currentSelection_43(GameObject_t1113636619 * value)
	{
		___currentSelection_43 = value;
		Il2CppCodeGenWriteBarrier((&___currentSelection_43), value);
	}

	inline static int32_t get_offset_of_previousSelection_44() { return static_cast<int32_t>(offsetof(Menu_Manager_t102876996, ___previousSelection_44)); }
	inline GameObject_t1113636619 * get_previousSelection_44() const { return ___previousSelection_44; }
	inline GameObject_t1113636619 ** get_address_of_previousSelection_44() { return &___previousSelection_44; }
	inline void set_previousSelection_44(GameObject_t1113636619 * value)
	{
		___previousSelection_44 = value;
		Il2CppCodeGenWriteBarrier((&___previousSelection_44), value);
	}

	inline static int32_t get_offset_of_anim_45() { return static_cast<int32_t>(offsetof(Menu_Manager_t102876996, ___anim_45)); }
	inline Animator_t434523843 * get_anim_45() const { return ___anim_45; }
	inline Animator_t434523843 ** get_address_of_anim_45() { return &___anim_45; }
	inline void set_anim_45(Animator_t434523843 * value)
	{
		___anim_45 = value;
		Il2CppCodeGenWriteBarrier((&___anim_45), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // MENU_MANAGER_T102876996_H
#ifndef OPTIONSMANAGERINPUTS_T1837724265_H
#define OPTIONSMANAGERINPUTS_T1837724265_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// OptionsManagerInputs
struct  OptionsManagerInputs_t1837724265  : public MonoBehaviour_t3962482529
{
public:
	// System.Int32 OptionsManagerInputs::selectedSlot
	int32_t ___selectedSlot_15;
	// System.Int32 OptionsManagerInputs::previousSlot
	int32_t ___previousSlot_16;
	// UnityEngine.Color OptionsManagerInputs::baseColor
	Color_t2555686324  ___baseColor_17;
	// UnityEngine.Color OptionsManagerInputs::hilightColor
	Color_t2555686324  ___hilightColor_18;
	// TMPro.TextMeshProUGUI OptionsManagerInputs::slot1
	TextMeshProUGUI_t529313277 * ___slot1_19;
	// TMPro.TextMeshProUGUI OptionsManagerInputs::slot2
	TextMeshProUGUI_t529313277 * ___slot2_20;
	// TMPro.TextMeshProUGUI OptionsManagerInputs::slot3
	TextMeshProUGUI_t529313277 * ___slot3_21;
	// UnityEngine.GameObject OptionsManagerInputs::menuManager
	GameObject_t1113636619 * ___menuManager_22;
	// UnityEngine.UI.Image OptionsManagerInputs::BGMLevel
	Image_t2670269651 * ___BGMLevel_23;
	// UnityEngine.UI.Image OptionsManagerInputs::SFXLevel
	Image_t2670269651 * ___SFXLevel_24;
	// UnityEngine.UI.Image OptionsManagerInputs::sensitivityLevel
	Image_t2670269651 * ___sensitivityLevel_25;
	// System.Single OptionsManagerInputs::timer
	float ___timer_26;
	// System.Single OptionsManagerInputs::delay
	float ___delay_27;
	// System.Single OptionsManagerInputs::BGMToSave
	float ___BGMToSave_28;
	// System.Single OptionsManagerInputs::SFXToSave
	float ___SFXToSave_29;
	// System.Single OptionsManagerInputs::SensitivityToSave
	float ___SensitivityToSave_30;
	// System.Collections.Generic.List`1<UnityEngine.AudioClip> OptionsManagerInputs::clipList
	List_1_t857997111 * ___clipList_31;
	// UnityEngine.AudioSource OptionsManagerInputs::sfxSource
	AudioSource_t3935305588 * ___sfxSource_32;
	// UnityEngine.AudioSource OptionsManagerInputs::bgmSource
	AudioSource_t3935305588 * ___bgmSource_33;
	// UnityEngine.AudioSource OptionsManagerInputs::ambientSource
	AudioSource_t3935305588 * ___ambientSource_34;
	// UnityEngine.AudioSource OptionsManagerInputs::thunderStormSource
	AudioSource_t3935305588 * ___thunderStormSource_35;
	// UnityEngine.AudioSource OptionsManagerInputs::rainSource
	AudioSource_t3935305588 * ___rainSource_36;
	// UnityEngine.GameObject OptionsManagerInputs::currentSelection
	GameObject_t1113636619 * ___currentSelection_38;
	// UnityEngine.GameObject OptionsManagerInputs::previousSelection
	GameObject_t1113636619 * ___previousSelection_39;
	// UnityEngine.Animator OptionsManagerInputs::anim
	Animator_t434523843 * ___anim_40;
	// System.Boolean OptionsManagerInputs::optionEnabled
	bool ___optionEnabled_41;

public:
	inline static int32_t get_offset_of_selectedSlot_15() { return static_cast<int32_t>(offsetof(OptionsManagerInputs_t1837724265, ___selectedSlot_15)); }
	inline int32_t get_selectedSlot_15() const { return ___selectedSlot_15; }
	inline int32_t* get_address_of_selectedSlot_15() { return &___selectedSlot_15; }
	inline void set_selectedSlot_15(int32_t value)
	{
		___selectedSlot_15 = value;
	}

	inline static int32_t get_offset_of_previousSlot_16() { return static_cast<int32_t>(offsetof(OptionsManagerInputs_t1837724265, ___previousSlot_16)); }
	inline int32_t get_previousSlot_16() const { return ___previousSlot_16; }
	inline int32_t* get_address_of_previousSlot_16() { return &___previousSlot_16; }
	inline void set_previousSlot_16(int32_t value)
	{
		___previousSlot_16 = value;
	}

	inline static int32_t get_offset_of_baseColor_17() { return static_cast<int32_t>(offsetof(OptionsManagerInputs_t1837724265, ___baseColor_17)); }
	inline Color_t2555686324  get_baseColor_17() const { return ___baseColor_17; }
	inline Color_t2555686324 * get_address_of_baseColor_17() { return &___baseColor_17; }
	inline void set_baseColor_17(Color_t2555686324  value)
	{
		___baseColor_17 = value;
	}

	inline static int32_t get_offset_of_hilightColor_18() { return static_cast<int32_t>(offsetof(OptionsManagerInputs_t1837724265, ___hilightColor_18)); }
	inline Color_t2555686324  get_hilightColor_18() const { return ___hilightColor_18; }
	inline Color_t2555686324 * get_address_of_hilightColor_18() { return &___hilightColor_18; }
	inline void set_hilightColor_18(Color_t2555686324  value)
	{
		___hilightColor_18 = value;
	}

	inline static int32_t get_offset_of_slot1_19() { return static_cast<int32_t>(offsetof(OptionsManagerInputs_t1837724265, ___slot1_19)); }
	inline TextMeshProUGUI_t529313277 * get_slot1_19() const { return ___slot1_19; }
	inline TextMeshProUGUI_t529313277 ** get_address_of_slot1_19() { return &___slot1_19; }
	inline void set_slot1_19(TextMeshProUGUI_t529313277 * value)
	{
		___slot1_19 = value;
		Il2CppCodeGenWriteBarrier((&___slot1_19), value);
	}

	inline static int32_t get_offset_of_slot2_20() { return static_cast<int32_t>(offsetof(OptionsManagerInputs_t1837724265, ___slot2_20)); }
	inline TextMeshProUGUI_t529313277 * get_slot2_20() const { return ___slot2_20; }
	inline TextMeshProUGUI_t529313277 ** get_address_of_slot2_20() { return &___slot2_20; }
	inline void set_slot2_20(TextMeshProUGUI_t529313277 * value)
	{
		___slot2_20 = value;
		Il2CppCodeGenWriteBarrier((&___slot2_20), value);
	}

	inline static int32_t get_offset_of_slot3_21() { return static_cast<int32_t>(offsetof(OptionsManagerInputs_t1837724265, ___slot3_21)); }
	inline TextMeshProUGUI_t529313277 * get_slot3_21() const { return ___slot3_21; }
	inline TextMeshProUGUI_t529313277 ** get_address_of_slot3_21() { return &___slot3_21; }
	inline void set_slot3_21(TextMeshProUGUI_t529313277 * value)
	{
		___slot3_21 = value;
		Il2CppCodeGenWriteBarrier((&___slot3_21), value);
	}

	inline static int32_t get_offset_of_menuManager_22() { return static_cast<int32_t>(offsetof(OptionsManagerInputs_t1837724265, ___menuManager_22)); }
	inline GameObject_t1113636619 * get_menuManager_22() const { return ___menuManager_22; }
	inline GameObject_t1113636619 ** get_address_of_menuManager_22() { return &___menuManager_22; }
	inline void set_menuManager_22(GameObject_t1113636619 * value)
	{
		___menuManager_22 = value;
		Il2CppCodeGenWriteBarrier((&___menuManager_22), value);
	}

	inline static int32_t get_offset_of_BGMLevel_23() { return static_cast<int32_t>(offsetof(OptionsManagerInputs_t1837724265, ___BGMLevel_23)); }
	inline Image_t2670269651 * get_BGMLevel_23() const { return ___BGMLevel_23; }
	inline Image_t2670269651 ** get_address_of_BGMLevel_23() { return &___BGMLevel_23; }
	inline void set_BGMLevel_23(Image_t2670269651 * value)
	{
		___BGMLevel_23 = value;
		Il2CppCodeGenWriteBarrier((&___BGMLevel_23), value);
	}

	inline static int32_t get_offset_of_SFXLevel_24() { return static_cast<int32_t>(offsetof(OptionsManagerInputs_t1837724265, ___SFXLevel_24)); }
	inline Image_t2670269651 * get_SFXLevel_24() const { return ___SFXLevel_24; }
	inline Image_t2670269651 ** get_address_of_SFXLevel_24() { return &___SFXLevel_24; }
	inline void set_SFXLevel_24(Image_t2670269651 * value)
	{
		___SFXLevel_24 = value;
		Il2CppCodeGenWriteBarrier((&___SFXLevel_24), value);
	}

	inline static int32_t get_offset_of_sensitivityLevel_25() { return static_cast<int32_t>(offsetof(OptionsManagerInputs_t1837724265, ___sensitivityLevel_25)); }
	inline Image_t2670269651 * get_sensitivityLevel_25() const { return ___sensitivityLevel_25; }
	inline Image_t2670269651 ** get_address_of_sensitivityLevel_25() { return &___sensitivityLevel_25; }
	inline void set_sensitivityLevel_25(Image_t2670269651 * value)
	{
		___sensitivityLevel_25 = value;
		Il2CppCodeGenWriteBarrier((&___sensitivityLevel_25), value);
	}

	inline static int32_t get_offset_of_timer_26() { return static_cast<int32_t>(offsetof(OptionsManagerInputs_t1837724265, ___timer_26)); }
	inline float get_timer_26() const { return ___timer_26; }
	inline float* get_address_of_timer_26() { return &___timer_26; }
	inline void set_timer_26(float value)
	{
		___timer_26 = value;
	}

	inline static int32_t get_offset_of_delay_27() { return static_cast<int32_t>(offsetof(OptionsManagerInputs_t1837724265, ___delay_27)); }
	inline float get_delay_27() const { return ___delay_27; }
	inline float* get_address_of_delay_27() { return &___delay_27; }
	inline void set_delay_27(float value)
	{
		___delay_27 = value;
	}

	inline static int32_t get_offset_of_BGMToSave_28() { return static_cast<int32_t>(offsetof(OptionsManagerInputs_t1837724265, ___BGMToSave_28)); }
	inline float get_BGMToSave_28() const { return ___BGMToSave_28; }
	inline float* get_address_of_BGMToSave_28() { return &___BGMToSave_28; }
	inline void set_BGMToSave_28(float value)
	{
		___BGMToSave_28 = value;
	}

	inline static int32_t get_offset_of_SFXToSave_29() { return static_cast<int32_t>(offsetof(OptionsManagerInputs_t1837724265, ___SFXToSave_29)); }
	inline float get_SFXToSave_29() const { return ___SFXToSave_29; }
	inline float* get_address_of_SFXToSave_29() { return &___SFXToSave_29; }
	inline void set_SFXToSave_29(float value)
	{
		___SFXToSave_29 = value;
	}

	inline static int32_t get_offset_of_SensitivityToSave_30() { return static_cast<int32_t>(offsetof(OptionsManagerInputs_t1837724265, ___SensitivityToSave_30)); }
	inline float get_SensitivityToSave_30() const { return ___SensitivityToSave_30; }
	inline float* get_address_of_SensitivityToSave_30() { return &___SensitivityToSave_30; }
	inline void set_SensitivityToSave_30(float value)
	{
		___SensitivityToSave_30 = value;
	}

	inline static int32_t get_offset_of_clipList_31() { return static_cast<int32_t>(offsetof(OptionsManagerInputs_t1837724265, ___clipList_31)); }
	inline List_1_t857997111 * get_clipList_31() const { return ___clipList_31; }
	inline List_1_t857997111 ** get_address_of_clipList_31() { return &___clipList_31; }
	inline void set_clipList_31(List_1_t857997111 * value)
	{
		___clipList_31 = value;
		Il2CppCodeGenWriteBarrier((&___clipList_31), value);
	}

	inline static int32_t get_offset_of_sfxSource_32() { return static_cast<int32_t>(offsetof(OptionsManagerInputs_t1837724265, ___sfxSource_32)); }
	inline AudioSource_t3935305588 * get_sfxSource_32() const { return ___sfxSource_32; }
	inline AudioSource_t3935305588 ** get_address_of_sfxSource_32() { return &___sfxSource_32; }
	inline void set_sfxSource_32(AudioSource_t3935305588 * value)
	{
		___sfxSource_32 = value;
		Il2CppCodeGenWriteBarrier((&___sfxSource_32), value);
	}

	inline static int32_t get_offset_of_bgmSource_33() { return static_cast<int32_t>(offsetof(OptionsManagerInputs_t1837724265, ___bgmSource_33)); }
	inline AudioSource_t3935305588 * get_bgmSource_33() const { return ___bgmSource_33; }
	inline AudioSource_t3935305588 ** get_address_of_bgmSource_33() { return &___bgmSource_33; }
	inline void set_bgmSource_33(AudioSource_t3935305588 * value)
	{
		___bgmSource_33 = value;
		Il2CppCodeGenWriteBarrier((&___bgmSource_33), value);
	}

	inline static int32_t get_offset_of_ambientSource_34() { return static_cast<int32_t>(offsetof(OptionsManagerInputs_t1837724265, ___ambientSource_34)); }
	inline AudioSource_t3935305588 * get_ambientSource_34() const { return ___ambientSource_34; }
	inline AudioSource_t3935305588 ** get_address_of_ambientSource_34() { return &___ambientSource_34; }
	inline void set_ambientSource_34(AudioSource_t3935305588 * value)
	{
		___ambientSource_34 = value;
		Il2CppCodeGenWriteBarrier((&___ambientSource_34), value);
	}

	inline static int32_t get_offset_of_thunderStormSource_35() { return static_cast<int32_t>(offsetof(OptionsManagerInputs_t1837724265, ___thunderStormSource_35)); }
	inline AudioSource_t3935305588 * get_thunderStormSource_35() const { return ___thunderStormSource_35; }
	inline AudioSource_t3935305588 ** get_address_of_thunderStormSource_35() { return &___thunderStormSource_35; }
	inline void set_thunderStormSource_35(AudioSource_t3935305588 * value)
	{
		___thunderStormSource_35 = value;
		Il2CppCodeGenWriteBarrier((&___thunderStormSource_35), value);
	}

	inline static int32_t get_offset_of_rainSource_36() { return static_cast<int32_t>(offsetof(OptionsManagerInputs_t1837724265, ___rainSource_36)); }
	inline AudioSource_t3935305588 * get_rainSource_36() const { return ___rainSource_36; }
	inline AudioSource_t3935305588 ** get_address_of_rainSource_36() { return &___rainSource_36; }
	inline void set_rainSource_36(AudioSource_t3935305588 * value)
	{
		___rainSource_36 = value;
		Il2CppCodeGenWriteBarrier((&___rainSource_36), value);
	}

	inline static int32_t get_offset_of_currentSelection_38() { return static_cast<int32_t>(offsetof(OptionsManagerInputs_t1837724265, ___currentSelection_38)); }
	inline GameObject_t1113636619 * get_currentSelection_38() const { return ___currentSelection_38; }
	inline GameObject_t1113636619 ** get_address_of_currentSelection_38() { return &___currentSelection_38; }
	inline void set_currentSelection_38(GameObject_t1113636619 * value)
	{
		___currentSelection_38 = value;
		Il2CppCodeGenWriteBarrier((&___currentSelection_38), value);
	}

	inline static int32_t get_offset_of_previousSelection_39() { return static_cast<int32_t>(offsetof(OptionsManagerInputs_t1837724265, ___previousSelection_39)); }
	inline GameObject_t1113636619 * get_previousSelection_39() const { return ___previousSelection_39; }
	inline GameObject_t1113636619 ** get_address_of_previousSelection_39() { return &___previousSelection_39; }
	inline void set_previousSelection_39(GameObject_t1113636619 * value)
	{
		___previousSelection_39 = value;
		Il2CppCodeGenWriteBarrier((&___previousSelection_39), value);
	}

	inline static int32_t get_offset_of_anim_40() { return static_cast<int32_t>(offsetof(OptionsManagerInputs_t1837724265, ___anim_40)); }
	inline Animator_t434523843 * get_anim_40() const { return ___anim_40; }
	inline Animator_t434523843 ** get_address_of_anim_40() { return &___anim_40; }
	inline void set_anim_40(Animator_t434523843 * value)
	{
		___anim_40 = value;
		Il2CppCodeGenWriteBarrier((&___anim_40), value);
	}

	inline static int32_t get_offset_of_optionEnabled_41() { return static_cast<int32_t>(offsetof(OptionsManagerInputs_t1837724265, ___optionEnabled_41)); }
	inline bool get_optionEnabled_41() const { return ___optionEnabled_41; }
	inline bool* get_address_of_optionEnabled_41() { return &___optionEnabled_41; }
	inline void set_optionEnabled_41(bool value)
	{
		___optionEnabled_41 = value;
	}
};

struct OptionsManagerInputs_t1837724265_StaticFields
{
public:
	// System.Single OptionsManagerInputs::sensitivity
	float ___sensitivity_37;
	// System.Int32 OptionsManagerInputs::MakeBounce
	int32_t ___MakeBounce_42;
	// System.Int32 OptionsManagerInputs::SteadyState
	int32_t ___SteadyState_43;

public:
	inline static int32_t get_offset_of_sensitivity_37() { return static_cast<int32_t>(offsetof(OptionsManagerInputs_t1837724265_StaticFields, ___sensitivity_37)); }
	inline float get_sensitivity_37() const { return ___sensitivity_37; }
	inline float* get_address_of_sensitivity_37() { return &___sensitivity_37; }
	inline void set_sensitivity_37(float value)
	{
		___sensitivity_37 = value;
	}

	inline static int32_t get_offset_of_MakeBounce_42() { return static_cast<int32_t>(offsetof(OptionsManagerInputs_t1837724265_StaticFields, ___MakeBounce_42)); }
	inline int32_t get_MakeBounce_42() const { return ___MakeBounce_42; }
	inline int32_t* get_address_of_MakeBounce_42() { return &___MakeBounce_42; }
	inline void set_MakeBounce_42(int32_t value)
	{
		___MakeBounce_42 = value;
	}

	inline static int32_t get_offset_of_SteadyState_43() { return static_cast<int32_t>(offsetof(OptionsManagerInputs_t1837724265_StaticFields, ___SteadyState_43)); }
	inline int32_t get_SteadyState_43() const { return ___SteadyState_43; }
	inline int32_t* get_address_of_SteadyState_43() { return &___SteadyState_43; }
	inline void set_SteadyState_43(int32_t value)
	{
		___SteadyState_43 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // OPTIONSMANAGERINPUTS_T1837724265_H
#ifndef PAUSEMANAGER_T1166378904_H
#define PAUSEMANAGER_T1166378904_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// PauseManager
struct  PauseManager_t1166378904  : public MonoBehaviour_t3962482529
{
public:
	// System.Boolean PauseManager::isPausedInspector
	bool ___isPausedInspector_5;

public:
	inline static int32_t get_offset_of_isPausedInspector_5() { return static_cast<int32_t>(offsetof(PauseManager_t1166378904, ___isPausedInspector_5)); }
	inline bool get_isPausedInspector_5() const { return ___isPausedInspector_5; }
	inline bool* get_address_of_isPausedInspector_5() { return &___isPausedInspector_5; }
	inline void set_isPausedInspector_5(bool value)
	{
		___isPausedInspector_5 = value;
	}
};

struct PauseManager_t1166378904_StaticFields
{
public:
	// System.Boolean PauseManager::isPaused
	bool ___isPaused_4;

public:
	inline static int32_t get_offset_of_isPaused_4() { return static_cast<int32_t>(offsetof(PauseManager_t1166378904_StaticFields, ___isPaused_4)); }
	inline bool get_isPaused_4() const { return ___isPaused_4; }
	inline bool* get_address_of_isPaused_4() { return &___isPaused_4; }
	inline void set_isPaused_4(bool value)
	{
		___isPaused_4 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // PAUSEMANAGER_T1166378904_H
#ifndef PLAYERCONTROLLER_T2064355688_H
#define PLAYERCONTROLLER_T2064355688_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// PlayerController
struct  PlayerController_t2064355688  : public MonoBehaviour_t3962482529
{
public:
	// UnityEngine.CharacterController PlayerController::characterController
	CharacterController_t1138636865 * ___characterController_4;
	// System.Single PlayerController::health
	float ___health_7;
	// System.Single PlayerController::speed
	float ___speed_8;
	// System.Single PlayerController::stamina
	float ___stamina_9;
	// System.Single PlayerController::rechargeDelay
	float ___rechargeDelay_10;
	// System.Single PlayerController::stimCooldown
	float ___stimCooldown_11;
	// UnityEngine.GameObject PlayerController::staminaObject
	GameObject_t1113636619 * ___staminaObject_12;
	// System.Single PlayerController::_walkSpeed
	float ____walkSpeed_13;
	// UnityEngine.Animator PlayerController::animator
	Animator_t434523843 * ___animator_14;
	// UnityEngine.Transform PlayerController::cameraRig
	Transform_t3600365921 * ___cameraRig_15;
	// UnityEngine.Transform PlayerController::Camera
	Transform_t3600365921 * ___Camera_16;
	// UnityEngine.Camera PlayerController::camObject
	Camera_t4157153871 * ___camObject_17;
	// UnityEngine.GameObject PlayerController::mapCamera
	GameObject_t1113636619 * ___mapCamera_18;
	// System.Single PlayerController::UpLimit
	float ___UpLimit_19;
	// System.Single PlayerController::downLimit
	float ___downLimit_20;
	// UnityEngine.Light PlayerController::flashlight
	Light_t3756812086 * ___flashlight_21;
	// UnityEngine.Light PlayerController::vertlight
	Light_t3756812086 * ___vertlight_22;
	// UnityEngine.GameObject PlayerController::lightRig
	GameObject_t1113636619 * ___lightRig_23;
	// UnityEngine.GameObject PlayerController::lightObject
	GameObject_t1113636619 * ___lightObject_24;
	// UnityEngine.GameObject PlayerController::lightShaft
	GameObject_t1113636619 * ___lightShaft_25;
	// UnityEngine.Transform PlayerController::handRig
	Transform_t3600365921 * ___handRig_26;
	// UnityEngine.Transform PlayerController::bodyRig
	Transform_t3600365921 * ___bodyRig_27;
	// UnityEngine.Renderer PlayerController::lightBeam
	Renderer_t2627027031 * ___lightBeam_28;
	// UnityEngine.Renderer PlayerController::lightHaze
	Renderer_t2627027031 * ___lightHaze_29;
	// UnityEngine.GameObject PlayerController::lightChargeObject
	GameObject_t1113636619 * ___lightChargeObject_30;
	// UnityEngine.GameObject PlayerController::lightRoot
	GameObject_t1113636619 * ___lightRoot_31;
	// UnityEngine.GameObject PlayerController::currentTarget
	GameObject_t1113636619 * ___currentTarget_32;
	// UnityEngine.Quaternion PlayerController::storedLightRotation
	Quaternion_t2301928331  ___storedLightRotation_33;
	// UnityEngine.Quaternion PlayerController::endLightRotation
	Quaternion_t2301928331  ___endLightRotation_34;
	// System.Single PlayerController::lightCharge
	float ___lightCharge_35;
	// UnityEngine.Color PlayerController::colorStart
	Color_t2555686324  ___colorStart_36;
	// UnityEngine.Color PlayerController::colorEnd
	Color_t2555686324  ___colorEnd_37;
	// UnityEngine.Color PlayerController::colorTransparent
	Color_t2555686324  ___colorTransparent_38;
	// System.Single PlayerController::lightDuration
	float ___lightDuration_39;
	// System.Single PlayerController::lookSensitivity
	float ___lookSensitivity_40;
	// System.Single PlayerController::flashlightCharge
	float ___flashlightCharge_41;
	// System.Boolean PlayerController::flashlightDisabled
	bool ___flashlightDisabled_42;
	// TMPro.TextMeshProUGUI PlayerController::batteryText
	TextMeshProUGUI_t529313277 * ___batteryText_43;
	// UnityEngine.GameObject PlayerController::ssaoScript
	GameObject_t1113636619 * ___ssaoScript_44;
	// UnityEngine.GameObject PlayerController::bokehScript
	GameObject_t1113636619 * ___bokehScript_45;
	// UnityEngine.GameObject PlayerController::enabledText
	GameObject_t1113636619 * ___enabledText_46;
	// System.Single PlayerController::lerpRate
	float ___lerpRate_47;
	// System.Single PlayerController::gravity
	float ___gravity_48;
	// System.Single PlayerController::_verticalSpeed
	float ____verticalSpeed_49;
	// System.Single PlayerController::verticalMove
	float ___verticalMove_50;
	// System.Single PlayerController::horizontalRotation
	float ___horizontalRotation_51;
	// System.Single PlayerController::horizontalCamRotation
	float ___horizontalCamRotation_52;
	// System.Single PlayerController::verticalCamRotation
	float ___verticalCamRotation_53;
	// UnityEngine.Quaternion PlayerController::savedRotation
	Quaternion_t2301928331  ___savedRotation_54;
	// UnityEngine.Vector3 PlayerController::savedPosition
	Vector3_t3722313464  ___savedPosition_55;
	// System.Boolean PlayerController::isPaused
	bool ___isPaused_56;
	// UnityEngine.SkinnedMeshRenderer PlayerController::skinnedRenderer
	SkinnedMeshRenderer_t245602842 * ___skinnedRenderer_57;
	// System.Single PlayerController::walkStart
	float ___walkStart_58;
	// System.Boolean PlayerController::lightFocusing
	bool ___lightFocusing_59;
	// System.Boolean PlayerController::isRunning
	bool ___isRunning_60;
	// System.Boolean PlayerController::isWalking
	bool ___isWalking_61;
	// System.Boolean PlayerController::isStimulant
	bool ___isStimulant_62;
	// System.Boolean PlayerController::isLerping
	bool ___isLerping_63;
	// System.Boolean PlayerController::isCharging
	bool ___isCharging_64;
	// System.Boolean PlayerController::lightMovement
	bool ___lightMovement_66;
	// System.Single PlayerController::cooldownValue
	float ___cooldownValue_68;
	// UnityEngine.CanvasGroup PlayerController::pausePanel
	CanvasGroup_t4083511760 * ___pausePanel_69;
	// UnityEngine.UI.RawImage PlayerController::mapPanel
	RawImage_t3182918964 * ___mapPanel_70;
	// UnityEngine.Camera PlayerController::mapCam
	Camera_t4157153871 * ___mapCam_71;
	// UnityEngine.GameObject PlayerController::mapIndicator
	GameObject_t1113636619 * ___mapIndicator_72;
	// UnityEngine.GameObject PlayerController::perfOverlay
	GameObject_t1113636619 * ___perfOverlay_73;
	// UnityEngine.CanvasGroup PlayerController::UICanvasGroup
	CanvasGroup_t4083511760 * ___UICanvasGroup_74;
	// System.Single PlayerController::currentCharge
	float ___currentCharge_75;

public:
	inline static int32_t get_offset_of_characterController_4() { return static_cast<int32_t>(offsetof(PlayerController_t2064355688, ___characterController_4)); }
	inline CharacterController_t1138636865 * get_characterController_4() const { return ___characterController_4; }
	inline CharacterController_t1138636865 ** get_address_of_characterController_4() { return &___characterController_4; }
	inline void set_characterController_4(CharacterController_t1138636865 * value)
	{
		___characterController_4 = value;
		Il2CppCodeGenWriteBarrier((&___characterController_4), value);
	}

	inline static int32_t get_offset_of_health_7() { return static_cast<int32_t>(offsetof(PlayerController_t2064355688, ___health_7)); }
	inline float get_health_7() const { return ___health_7; }
	inline float* get_address_of_health_7() { return &___health_7; }
	inline void set_health_7(float value)
	{
		___health_7 = value;
	}

	inline static int32_t get_offset_of_speed_8() { return static_cast<int32_t>(offsetof(PlayerController_t2064355688, ___speed_8)); }
	inline float get_speed_8() const { return ___speed_8; }
	inline float* get_address_of_speed_8() { return &___speed_8; }
	inline void set_speed_8(float value)
	{
		___speed_8 = value;
	}

	inline static int32_t get_offset_of_stamina_9() { return static_cast<int32_t>(offsetof(PlayerController_t2064355688, ___stamina_9)); }
	inline float get_stamina_9() const { return ___stamina_9; }
	inline float* get_address_of_stamina_9() { return &___stamina_9; }
	inline void set_stamina_9(float value)
	{
		___stamina_9 = value;
	}

	inline static int32_t get_offset_of_rechargeDelay_10() { return static_cast<int32_t>(offsetof(PlayerController_t2064355688, ___rechargeDelay_10)); }
	inline float get_rechargeDelay_10() const { return ___rechargeDelay_10; }
	inline float* get_address_of_rechargeDelay_10() { return &___rechargeDelay_10; }
	inline void set_rechargeDelay_10(float value)
	{
		___rechargeDelay_10 = value;
	}

	inline static int32_t get_offset_of_stimCooldown_11() { return static_cast<int32_t>(offsetof(PlayerController_t2064355688, ___stimCooldown_11)); }
	inline float get_stimCooldown_11() const { return ___stimCooldown_11; }
	inline float* get_address_of_stimCooldown_11() { return &___stimCooldown_11; }
	inline void set_stimCooldown_11(float value)
	{
		___stimCooldown_11 = value;
	}

	inline static int32_t get_offset_of_staminaObject_12() { return static_cast<int32_t>(offsetof(PlayerController_t2064355688, ___staminaObject_12)); }
	inline GameObject_t1113636619 * get_staminaObject_12() const { return ___staminaObject_12; }
	inline GameObject_t1113636619 ** get_address_of_staminaObject_12() { return &___staminaObject_12; }
	inline void set_staminaObject_12(GameObject_t1113636619 * value)
	{
		___staminaObject_12 = value;
		Il2CppCodeGenWriteBarrier((&___staminaObject_12), value);
	}

	inline static int32_t get_offset_of__walkSpeed_13() { return static_cast<int32_t>(offsetof(PlayerController_t2064355688, ____walkSpeed_13)); }
	inline float get__walkSpeed_13() const { return ____walkSpeed_13; }
	inline float* get_address_of__walkSpeed_13() { return &____walkSpeed_13; }
	inline void set__walkSpeed_13(float value)
	{
		____walkSpeed_13 = value;
	}

	inline static int32_t get_offset_of_animator_14() { return static_cast<int32_t>(offsetof(PlayerController_t2064355688, ___animator_14)); }
	inline Animator_t434523843 * get_animator_14() const { return ___animator_14; }
	inline Animator_t434523843 ** get_address_of_animator_14() { return &___animator_14; }
	inline void set_animator_14(Animator_t434523843 * value)
	{
		___animator_14 = value;
		Il2CppCodeGenWriteBarrier((&___animator_14), value);
	}

	inline static int32_t get_offset_of_cameraRig_15() { return static_cast<int32_t>(offsetof(PlayerController_t2064355688, ___cameraRig_15)); }
	inline Transform_t3600365921 * get_cameraRig_15() const { return ___cameraRig_15; }
	inline Transform_t3600365921 ** get_address_of_cameraRig_15() { return &___cameraRig_15; }
	inline void set_cameraRig_15(Transform_t3600365921 * value)
	{
		___cameraRig_15 = value;
		Il2CppCodeGenWriteBarrier((&___cameraRig_15), value);
	}

	inline static int32_t get_offset_of_Camera_16() { return static_cast<int32_t>(offsetof(PlayerController_t2064355688, ___Camera_16)); }
	inline Transform_t3600365921 * get_Camera_16() const { return ___Camera_16; }
	inline Transform_t3600365921 ** get_address_of_Camera_16() { return &___Camera_16; }
	inline void set_Camera_16(Transform_t3600365921 * value)
	{
		___Camera_16 = value;
		Il2CppCodeGenWriteBarrier((&___Camera_16), value);
	}

	inline static int32_t get_offset_of_camObject_17() { return static_cast<int32_t>(offsetof(PlayerController_t2064355688, ___camObject_17)); }
	inline Camera_t4157153871 * get_camObject_17() const { return ___camObject_17; }
	inline Camera_t4157153871 ** get_address_of_camObject_17() { return &___camObject_17; }
	inline void set_camObject_17(Camera_t4157153871 * value)
	{
		___camObject_17 = value;
		Il2CppCodeGenWriteBarrier((&___camObject_17), value);
	}

	inline static int32_t get_offset_of_mapCamera_18() { return static_cast<int32_t>(offsetof(PlayerController_t2064355688, ___mapCamera_18)); }
	inline GameObject_t1113636619 * get_mapCamera_18() const { return ___mapCamera_18; }
	inline GameObject_t1113636619 ** get_address_of_mapCamera_18() { return &___mapCamera_18; }
	inline void set_mapCamera_18(GameObject_t1113636619 * value)
	{
		___mapCamera_18 = value;
		Il2CppCodeGenWriteBarrier((&___mapCamera_18), value);
	}

	inline static int32_t get_offset_of_UpLimit_19() { return static_cast<int32_t>(offsetof(PlayerController_t2064355688, ___UpLimit_19)); }
	inline float get_UpLimit_19() const { return ___UpLimit_19; }
	inline float* get_address_of_UpLimit_19() { return &___UpLimit_19; }
	inline void set_UpLimit_19(float value)
	{
		___UpLimit_19 = value;
	}

	inline static int32_t get_offset_of_downLimit_20() { return static_cast<int32_t>(offsetof(PlayerController_t2064355688, ___downLimit_20)); }
	inline float get_downLimit_20() const { return ___downLimit_20; }
	inline float* get_address_of_downLimit_20() { return &___downLimit_20; }
	inline void set_downLimit_20(float value)
	{
		___downLimit_20 = value;
	}

	inline static int32_t get_offset_of_flashlight_21() { return static_cast<int32_t>(offsetof(PlayerController_t2064355688, ___flashlight_21)); }
	inline Light_t3756812086 * get_flashlight_21() const { return ___flashlight_21; }
	inline Light_t3756812086 ** get_address_of_flashlight_21() { return &___flashlight_21; }
	inline void set_flashlight_21(Light_t3756812086 * value)
	{
		___flashlight_21 = value;
		Il2CppCodeGenWriteBarrier((&___flashlight_21), value);
	}

	inline static int32_t get_offset_of_vertlight_22() { return static_cast<int32_t>(offsetof(PlayerController_t2064355688, ___vertlight_22)); }
	inline Light_t3756812086 * get_vertlight_22() const { return ___vertlight_22; }
	inline Light_t3756812086 ** get_address_of_vertlight_22() { return &___vertlight_22; }
	inline void set_vertlight_22(Light_t3756812086 * value)
	{
		___vertlight_22 = value;
		Il2CppCodeGenWriteBarrier((&___vertlight_22), value);
	}

	inline static int32_t get_offset_of_lightRig_23() { return static_cast<int32_t>(offsetof(PlayerController_t2064355688, ___lightRig_23)); }
	inline GameObject_t1113636619 * get_lightRig_23() const { return ___lightRig_23; }
	inline GameObject_t1113636619 ** get_address_of_lightRig_23() { return &___lightRig_23; }
	inline void set_lightRig_23(GameObject_t1113636619 * value)
	{
		___lightRig_23 = value;
		Il2CppCodeGenWriteBarrier((&___lightRig_23), value);
	}

	inline static int32_t get_offset_of_lightObject_24() { return static_cast<int32_t>(offsetof(PlayerController_t2064355688, ___lightObject_24)); }
	inline GameObject_t1113636619 * get_lightObject_24() const { return ___lightObject_24; }
	inline GameObject_t1113636619 ** get_address_of_lightObject_24() { return &___lightObject_24; }
	inline void set_lightObject_24(GameObject_t1113636619 * value)
	{
		___lightObject_24 = value;
		Il2CppCodeGenWriteBarrier((&___lightObject_24), value);
	}

	inline static int32_t get_offset_of_lightShaft_25() { return static_cast<int32_t>(offsetof(PlayerController_t2064355688, ___lightShaft_25)); }
	inline GameObject_t1113636619 * get_lightShaft_25() const { return ___lightShaft_25; }
	inline GameObject_t1113636619 ** get_address_of_lightShaft_25() { return &___lightShaft_25; }
	inline void set_lightShaft_25(GameObject_t1113636619 * value)
	{
		___lightShaft_25 = value;
		Il2CppCodeGenWriteBarrier((&___lightShaft_25), value);
	}

	inline static int32_t get_offset_of_handRig_26() { return static_cast<int32_t>(offsetof(PlayerController_t2064355688, ___handRig_26)); }
	inline Transform_t3600365921 * get_handRig_26() const { return ___handRig_26; }
	inline Transform_t3600365921 ** get_address_of_handRig_26() { return &___handRig_26; }
	inline void set_handRig_26(Transform_t3600365921 * value)
	{
		___handRig_26 = value;
		Il2CppCodeGenWriteBarrier((&___handRig_26), value);
	}

	inline static int32_t get_offset_of_bodyRig_27() { return static_cast<int32_t>(offsetof(PlayerController_t2064355688, ___bodyRig_27)); }
	inline Transform_t3600365921 * get_bodyRig_27() const { return ___bodyRig_27; }
	inline Transform_t3600365921 ** get_address_of_bodyRig_27() { return &___bodyRig_27; }
	inline void set_bodyRig_27(Transform_t3600365921 * value)
	{
		___bodyRig_27 = value;
		Il2CppCodeGenWriteBarrier((&___bodyRig_27), value);
	}

	inline static int32_t get_offset_of_lightBeam_28() { return static_cast<int32_t>(offsetof(PlayerController_t2064355688, ___lightBeam_28)); }
	inline Renderer_t2627027031 * get_lightBeam_28() const { return ___lightBeam_28; }
	inline Renderer_t2627027031 ** get_address_of_lightBeam_28() { return &___lightBeam_28; }
	inline void set_lightBeam_28(Renderer_t2627027031 * value)
	{
		___lightBeam_28 = value;
		Il2CppCodeGenWriteBarrier((&___lightBeam_28), value);
	}

	inline static int32_t get_offset_of_lightHaze_29() { return static_cast<int32_t>(offsetof(PlayerController_t2064355688, ___lightHaze_29)); }
	inline Renderer_t2627027031 * get_lightHaze_29() const { return ___lightHaze_29; }
	inline Renderer_t2627027031 ** get_address_of_lightHaze_29() { return &___lightHaze_29; }
	inline void set_lightHaze_29(Renderer_t2627027031 * value)
	{
		___lightHaze_29 = value;
		Il2CppCodeGenWriteBarrier((&___lightHaze_29), value);
	}

	inline static int32_t get_offset_of_lightChargeObject_30() { return static_cast<int32_t>(offsetof(PlayerController_t2064355688, ___lightChargeObject_30)); }
	inline GameObject_t1113636619 * get_lightChargeObject_30() const { return ___lightChargeObject_30; }
	inline GameObject_t1113636619 ** get_address_of_lightChargeObject_30() { return &___lightChargeObject_30; }
	inline void set_lightChargeObject_30(GameObject_t1113636619 * value)
	{
		___lightChargeObject_30 = value;
		Il2CppCodeGenWriteBarrier((&___lightChargeObject_30), value);
	}

	inline static int32_t get_offset_of_lightRoot_31() { return static_cast<int32_t>(offsetof(PlayerController_t2064355688, ___lightRoot_31)); }
	inline GameObject_t1113636619 * get_lightRoot_31() const { return ___lightRoot_31; }
	inline GameObject_t1113636619 ** get_address_of_lightRoot_31() { return &___lightRoot_31; }
	inline void set_lightRoot_31(GameObject_t1113636619 * value)
	{
		___lightRoot_31 = value;
		Il2CppCodeGenWriteBarrier((&___lightRoot_31), value);
	}

	inline static int32_t get_offset_of_currentTarget_32() { return static_cast<int32_t>(offsetof(PlayerController_t2064355688, ___currentTarget_32)); }
	inline GameObject_t1113636619 * get_currentTarget_32() const { return ___currentTarget_32; }
	inline GameObject_t1113636619 ** get_address_of_currentTarget_32() { return &___currentTarget_32; }
	inline void set_currentTarget_32(GameObject_t1113636619 * value)
	{
		___currentTarget_32 = value;
		Il2CppCodeGenWriteBarrier((&___currentTarget_32), value);
	}

	inline static int32_t get_offset_of_storedLightRotation_33() { return static_cast<int32_t>(offsetof(PlayerController_t2064355688, ___storedLightRotation_33)); }
	inline Quaternion_t2301928331  get_storedLightRotation_33() const { return ___storedLightRotation_33; }
	inline Quaternion_t2301928331 * get_address_of_storedLightRotation_33() { return &___storedLightRotation_33; }
	inline void set_storedLightRotation_33(Quaternion_t2301928331  value)
	{
		___storedLightRotation_33 = value;
	}

	inline static int32_t get_offset_of_endLightRotation_34() { return static_cast<int32_t>(offsetof(PlayerController_t2064355688, ___endLightRotation_34)); }
	inline Quaternion_t2301928331  get_endLightRotation_34() const { return ___endLightRotation_34; }
	inline Quaternion_t2301928331 * get_address_of_endLightRotation_34() { return &___endLightRotation_34; }
	inline void set_endLightRotation_34(Quaternion_t2301928331  value)
	{
		___endLightRotation_34 = value;
	}

	inline static int32_t get_offset_of_lightCharge_35() { return static_cast<int32_t>(offsetof(PlayerController_t2064355688, ___lightCharge_35)); }
	inline float get_lightCharge_35() const { return ___lightCharge_35; }
	inline float* get_address_of_lightCharge_35() { return &___lightCharge_35; }
	inline void set_lightCharge_35(float value)
	{
		___lightCharge_35 = value;
	}

	inline static int32_t get_offset_of_colorStart_36() { return static_cast<int32_t>(offsetof(PlayerController_t2064355688, ___colorStart_36)); }
	inline Color_t2555686324  get_colorStart_36() const { return ___colorStart_36; }
	inline Color_t2555686324 * get_address_of_colorStart_36() { return &___colorStart_36; }
	inline void set_colorStart_36(Color_t2555686324  value)
	{
		___colorStart_36 = value;
	}

	inline static int32_t get_offset_of_colorEnd_37() { return static_cast<int32_t>(offsetof(PlayerController_t2064355688, ___colorEnd_37)); }
	inline Color_t2555686324  get_colorEnd_37() const { return ___colorEnd_37; }
	inline Color_t2555686324 * get_address_of_colorEnd_37() { return &___colorEnd_37; }
	inline void set_colorEnd_37(Color_t2555686324  value)
	{
		___colorEnd_37 = value;
	}

	inline static int32_t get_offset_of_colorTransparent_38() { return static_cast<int32_t>(offsetof(PlayerController_t2064355688, ___colorTransparent_38)); }
	inline Color_t2555686324  get_colorTransparent_38() const { return ___colorTransparent_38; }
	inline Color_t2555686324 * get_address_of_colorTransparent_38() { return &___colorTransparent_38; }
	inline void set_colorTransparent_38(Color_t2555686324  value)
	{
		___colorTransparent_38 = value;
	}

	inline static int32_t get_offset_of_lightDuration_39() { return static_cast<int32_t>(offsetof(PlayerController_t2064355688, ___lightDuration_39)); }
	inline float get_lightDuration_39() const { return ___lightDuration_39; }
	inline float* get_address_of_lightDuration_39() { return &___lightDuration_39; }
	inline void set_lightDuration_39(float value)
	{
		___lightDuration_39 = value;
	}

	inline static int32_t get_offset_of_lookSensitivity_40() { return static_cast<int32_t>(offsetof(PlayerController_t2064355688, ___lookSensitivity_40)); }
	inline float get_lookSensitivity_40() const { return ___lookSensitivity_40; }
	inline float* get_address_of_lookSensitivity_40() { return &___lookSensitivity_40; }
	inline void set_lookSensitivity_40(float value)
	{
		___lookSensitivity_40 = value;
	}

	inline static int32_t get_offset_of_flashlightCharge_41() { return static_cast<int32_t>(offsetof(PlayerController_t2064355688, ___flashlightCharge_41)); }
	inline float get_flashlightCharge_41() const { return ___flashlightCharge_41; }
	inline float* get_address_of_flashlightCharge_41() { return &___flashlightCharge_41; }
	inline void set_flashlightCharge_41(float value)
	{
		___flashlightCharge_41 = value;
	}

	inline static int32_t get_offset_of_flashlightDisabled_42() { return static_cast<int32_t>(offsetof(PlayerController_t2064355688, ___flashlightDisabled_42)); }
	inline bool get_flashlightDisabled_42() const { return ___flashlightDisabled_42; }
	inline bool* get_address_of_flashlightDisabled_42() { return &___flashlightDisabled_42; }
	inline void set_flashlightDisabled_42(bool value)
	{
		___flashlightDisabled_42 = value;
	}

	inline static int32_t get_offset_of_batteryText_43() { return static_cast<int32_t>(offsetof(PlayerController_t2064355688, ___batteryText_43)); }
	inline TextMeshProUGUI_t529313277 * get_batteryText_43() const { return ___batteryText_43; }
	inline TextMeshProUGUI_t529313277 ** get_address_of_batteryText_43() { return &___batteryText_43; }
	inline void set_batteryText_43(TextMeshProUGUI_t529313277 * value)
	{
		___batteryText_43 = value;
		Il2CppCodeGenWriteBarrier((&___batteryText_43), value);
	}

	inline static int32_t get_offset_of_ssaoScript_44() { return static_cast<int32_t>(offsetof(PlayerController_t2064355688, ___ssaoScript_44)); }
	inline GameObject_t1113636619 * get_ssaoScript_44() const { return ___ssaoScript_44; }
	inline GameObject_t1113636619 ** get_address_of_ssaoScript_44() { return &___ssaoScript_44; }
	inline void set_ssaoScript_44(GameObject_t1113636619 * value)
	{
		___ssaoScript_44 = value;
		Il2CppCodeGenWriteBarrier((&___ssaoScript_44), value);
	}

	inline static int32_t get_offset_of_bokehScript_45() { return static_cast<int32_t>(offsetof(PlayerController_t2064355688, ___bokehScript_45)); }
	inline GameObject_t1113636619 * get_bokehScript_45() const { return ___bokehScript_45; }
	inline GameObject_t1113636619 ** get_address_of_bokehScript_45() { return &___bokehScript_45; }
	inline void set_bokehScript_45(GameObject_t1113636619 * value)
	{
		___bokehScript_45 = value;
		Il2CppCodeGenWriteBarrier((&___bokehScript_45), value);
	}

	inline static int32_t get_offset_of_enabledText_46() { return static_cast<int32_t>(offsetof(PlayerController_t2064355688, ___enabledText_46)); }
	inline GameObject_t1113636619 * get_enabledText_46() const { return ___enabledText_46; }
	inline GameObject_t1113636619 ** get_address_of_enabledText_46() { return &___enabledText_46; }
	inline void set_enabledText_46(GameObject_t1113636619 * value)
	{
		___enabledText_46 = value;
		Il2CppCodeGenWriteBarrier((&___enabledText_46), value);
	}

	inline static int32_t get_offset_of_lerpRate_47() { return static_cast<int32_t>(offsetof(PlayerController_t2064355688, ___lerpRate_47)); }
	inline float get_lerpRate_47() const { return ___lerpRate_47; }
	inline float* get_address_of_lerpRate_47() { return &___lerpRate_47; }
	inline void set_lerpRate_47(float value)
	{
		___lerpRate_47 = value;
	}

	inline static int32_t get_offset_of_gravity_48() { return static_cast<int32_t>(offsetof(PlayerController_t2064355688, ___gravity_48)); }
	inline float get_gravity_48() const { return ___gravity_48; }
	inline float* get_address_of_gravity_48() { return &___gravity_48; }
	inline void set_gravity_48(float value)
	{
		___gravity_48 = value;
	}

	inline static int32_t get_offset_of__verticalSpeed_49() { return static_cast<int32_t>(offsetof(PlayerController_t2064355688, ____verticalSpeed_49)); }
	inline float get__verticalSpeed_49() const { return ____verticalSpeed_49; }
	inline float* get_address_of__verticalSpeed_49() { return &____verticalSpeed_49; }
	inline void set__verticalSpeed_49(float value)
	{
		____verticalSpeed_49 = value;
	}

	inline static int32_t get_offset_of_verticalMove_50() { return static_cast<int32_t>(offsetof(PlayerController_t2064355688, ___verticalMove_50)); }
	inline float get_verticalMove_50() const { return ___verticalMove_50; }
	inline float* get_address_of_verticalMove_50() { return &___verticalMove_50; }
	inline void set_verticalMove_50(float value)
	{
		___verticalMove_50 = value;
	}

	inline static int32_t get_offset_of_horizontalRotation_51() { return static_cast<int32_t>(offsetof(PlayerController_t2064355688, ___horizontalRotation_51)); }
	inline float get_horizontalRotation_51() const { return ___horizontalRotation_51; }
	inline float* get_address_of_horizontalRotation_51() { return &___horizontalRotation_51; }
	inline void set_horizontalRotation_51(float value)
	{
		___horizontalRotation_51 = value;
	}

	inline static int32_t get_offset_of_horizontalCamRotation_52() { return static_cast<int32_t>(offsetof(PlayerController_t2064355688, ___horizontalCamRotation_52)); }
	inline float get_horizontalCamRotation_52() const { return ___horizontalCamRotation_52; }
	inline float* get_address_of_horizontalCamRotation_52() { return &___horizontalCamRotation_52; }
	inline void set_horizontalCamRotation_52(float value)
	{
		___horizontalCamRotation_52 = value;
	}

	inline static int32_t get_offset_of_verticalCamRotation_53() { return static_cast<int32_t>(offsetof(PlayerController_t2064355688, ___verticalCamRotation_53)); }
	inline float get_verticalCamRotation_53() const { return ___verticalCamRotation_53; }
	inline float* get_address_of_verticalCamRotation_53() { return &___verticalCamRotation_53; }
	inline void set_verticalCamRotation_53(float value)
	{
		___verticalCamRotation_53 = value;
	}

	inline static int32_t get_offset_of_savedRotation_54() { return static_cast<int32_t>(offsetof(PlayerController_t2064355688, ___savedRotation_54)); }
	inline Quaternion_t2301928331  get_savedRotation_54() const { return ___savedRotation_54; }
	inline Quaternion_t2301928331 * get_address_of_savedRotation_54() { return &___savedRotation_54; }
	inline void set_savedRotation_54(Quaternion_t2301928331  value)
	{
		___savedRotation_54 = value;
	}

	inline static int32_t get_offset_of_savedPosition_55() { return static_cast<int32_t>(offsetof(PlayerController_t2064355688, ___savedPosition_55)); }
	inline Vector3_t3722313464  get_savedPosition_55() const { return ___savedPosition_55; }
	inline Vector3_t3722313464 * get_address_of_savedPosition_55() { return &___savedPosition_55; }
	inline void set_savedPosition_55(Vector3_t3722313464  value)
	{
		___savedPosition_55 = value;
	}

	inline static int32_t get_offset_of_isPaused_56() { return static_cast<int32_t>(offsetof(PlayerController_t2064355688, ___isPaused_56)); }
	inline bool get_isPaused_56() const { return ___isPaused_56; }
	inline bool* get_address_of_isPaused_56() { return &___isPaused_56; }
	inline void set_isPaused_56(bool value)
	{
		___isPaused_56 = value;
	}

	inline static int32_t get_offset_of_skinnedRenderer_57() { return static_cast<int32_t>(offsetof(PlayerController_t2064355688, ___skinnedRenderer_57)); }
	inline SkinnedMeshRenderer_t245602842 * get_skinnedRenderer_57() const { return ___skinnedRenderer_57; }
	inline SkinnedMeshRenderer_t245602842 ** get_address_of_skinnedRenderer_57() { return &___skinnedRenderer_57; }
	inline void set_skinnedRenderer_57(SkinnedMeshRenderer_t245602842 * value)
	{
		___skinnedRenderer_57 = value;
		Il2CppCodeGenWriteBarrier((&___skinnedRenderer_57), value);
	}

	inline static int32_t get_offset_of_walkStart_58() { return static_cast<int32_t>(offsetof(PlayerController_t2064355688, ___walkStart_58)); }
	inline float get_walkStart_58() const { return ___walkStart_58; }
	inline float* get_address_of_walkStart_58() { return &___walkStart_58; }
	inline void set_walkStart_58(float value)
	{
		___walkStart_58 = value;
	}

	inline static int32_t get_offset_of_lightFocusing_59() { return static_cast<int32_t>(offsetof(PlayerController_t2064355688, ___lightFocusing_59)); }
	inline bool get_lightFocusing_59() const { return ___lightFocusing_59; }
	inline bool* get_address_of_lightFocusing_59() { return &___lightFocusing_59; }
	inline void set_lightFocusing_59(bool value)
	{
		___lightFocusing_59 = value;
	}

	inline static int32_t get_offset_of_isRunning_60() { return static_cast<int32_t>(offsetof(PlayerController_t2064355688, ___isRunning_60)); }
	inline bool get_isRunning_60() const { return ___isRunning_60; }
	inline bool* get_address_of_isRunning_60() { return &___isRunning_60; }
	inline void set_isRunning_60(bool value)
	{
		___isRunning_60 = value;
	}

	inline static int32_t get_offset_of_isWalking_61() { return static_cast<int32_t>(offsetof(PlayerController_t2064355688, ___isWalking_61)); }
	inline bool get_isWalking_61() const { return ___isWalking_61; }
	inline bool* get_address_of_isWalking_61() { return &___isWalking_61; }
	inline void set_isWalking_61(bool value)
	{
		___isWalking_61 = value;
	}

	inline static int32_t get_offset_of_isStimulant_62() { return static_cast<int32_t>(offsetof(PlayerController_t2064355688, ___isStimulant_62)); }
	inline bool get_isStimulant_62() const { return ___isStimulant_62; }
	inline bool* get_address_of_isStimulant_62() { return &___isStimulant_62; }
	inline void set_isStimulant_62(bool value)
	{
		___isStimulant_62 = value;
	}

	inline static int32_t get_offset_of_isLerping_63() { return static_cast<int32_t>(offsetof(PlayerController_t2064355688, ___isLerping_63)); }
	inline bool get_isLerping_63() const { return ___isLerping_63; }
	inline bool* get_address_of_isLerping_63() { return &___isLerping_63; }
	inline void set_isLerping_63(bool value)
	{
		___isLerping_63 = value;
	}

	inline static int32_t get_offset_of_isCharging_64() { return static_cast<int32_t>(offsetof(PlayerController_t2064355688, ___isCharging_64)); }
	inline bool get_isCharging_64() const { return ___isCharging_64; }
	inline bool* get_address_of_isCharging_64() { return &___isCharging_64; }
	inline void set_isCharging_64(bool value)
	{
		___isCharging_64 = value;
	}

	inline static int32_t get_offset_of_lightMovement_66() { return static_cast<int32_t>(offsetof(PlayerController_t2064355688, ___lightMovement_66)); }
	inline bool get_lightMovement_66() const { return ___lightMovement_66; }
	inline bool* get_address_of_lightMovement_66() { return &___lightMovement_66; }
	inline void set_lightMovement_66(bool value)
	{
		___lightMovement_66 = value;
	}

	inline static int32_t get_offset_of_cooldownValue_68() { return static_cast<int32_t>(offsetof(PlayerController_t2064355688, ___cooldownValue_68)); }
	inline float get_cooldownValue_68() const { return ___cooldownValue_68; }
	inline float* get_address_of_cooldownValue_68() { return &___cooldownValue_68; }
	inline void set_cooldownValue_68(float value)
	{
		___cooldownValue_68 = value;
	}

	inline static int32_t get_offset_of_pausePanel_69() { return static_cast<int32_t>(offsetof(PlayerController_t2064355688, ___pausePanel_69)); }
	inline CanvasGroup_t4083511760 * get_pausePanel_69() const { return ___pausePanel_69; }
	inline CanvasGroup_t4083511760 ** get_address_of_pausePanel_69() { return &___pausePanel_69; }
	inline void set_pausePanel_69(CanvasGroup_t4083511760 * value)
	{
		___pausePanel_69 = value;
		Il2CppCodeGenWriteBarrier((&___pausePanel_69), value);
	}

	inline static int32_t get_offset_of_mapPanel_70() { return static_cast<int32_t>(offsetof(PlayerController_t2064355688, ___mapPanel_70)); }
	inline RawImage_t3182918964 * get_mapPanel_70() const { return ___mapPanel_70; }
	inline RawImage_t3182918964 ** get_address_of_mapPanel_70() { return &___mapPanel_70; }
	inline void set_mapPanel_70(RawImage_t3182918964 * value)
	{
		___mapPanel_70 = value;
		Il2CppCodeGenWriteBarrier((&___mapPanel_70), value);
	}

	inline static int32_t get_offset_of_mapCam_71() { return static_cast<int32_t>(offsetof(PlayerController_t2064355688, ___mapCam_71)); }
	inline Camera_t4157153871 * get_mapCam_71() const { return ___mapCam_71; }
	inline Camera_t4157153871 ** get_address_of_mapCam_71() { return &___mapCam_71; }
	inline void set_mapCam_71(Camera_t4157153871 * value)
	{
		___mapCam_71 = value;
		Il2CppCodeGenWriteBarrier((&___mapCam_71), value);
	}

	inline static int32_t get_offset_of_mapIndicator_72() { return static_cast<int32_t>(offsetof(PlayerController_t2064355688, ___mapIndicator_72)); }
	inline GameObject_t1113636619 * get_mapIndicator_72() const { return ___mapIndicator_72; }
	inline GameObject_t1113636619 ** get_address_of_mapIndicator_72() { return &___mapIndicator_72; }
	inline void set_mapIndicator_72(GameObject_t1113636619 * value)
	{
		___mapIndicator_72 = value;
		Il2CppCodeGenWriteBarrier((&___mapIndicator_72), value);
	}

	inline static int32_t get_offset_of_perfOverlay_73() { return static_cast<int32_t>(offsetof(PlayerController_t2064355688, ___perfOverlay_73)); }
	inline GameObject_t1113636619 * get_perfOverlay_73() const { return ___perfOverlay_73; }
	inline GameObject_t1113636619 ** get_address_of_perfOverlay_73() { return &___perfOverlay_73; }
	inline void set_perfOverlay_73(GameObject_t1113636619 * value)
	{
		___perfOverlay_73 = value;
		Il2CppCodeGenWriteBarrier((&___perfOverlay_73), value);
	}

	inline static int32_t get_offset_of_UICanvasGroup_74() { return static_cast<int32_t>(offsetof(PlayerController_t2064355688, ___UICanvasGroup_74)); }
	inline CanvasGroup_t4083511760 * get_UICanvasGroup_74() const { return ___UICanvasGroup_74; }
	inline CanvasGroup_t4083511760 ** get_address_of_UICanvasGroup_74() { return &___UICanvasGroup_74; }
	inline void set_UICanvasGroup_74(CanvasGroup_t4083511760 * value)
	{
		___UICanvasGroup_74 = value;
		Il2CppCodeGenWriteBarrier((&___UICanvasGroup_74), value);
	}

	inline static int32_t get_offset_of_currentCharge_75() { return static_cast<int32_t>(offsetof(PlayerController_t2064355688, ___currentCharge_75)); }
	inline float get_currentCharge_75() const { return ___currentCharge_75; }
	inline float* get_address_of_currentCharge_75() { return &___currentCharge_75; }
	inline void set_currentCharge_75(float value)
	{
		___currentCharge_75 = value;
	}
};

struct PlayerController_t2064355688_StaticFields
{
public:
	// System.Boolean PlayerController::HasFlashlight
	bool ___HasFlashlight_5;
	// System.Boolean PlayerController::FlashlightOff
	bool ___FlashlightOff_6;
	// System.Boolean PlayerController::isMap
	bool ___isMap_65;
	// System.Boolean PlayerController::delayButton
	bool ___delayButton_67;
	// System.Int32 PlayerController::CrossFade
	int32_t ___CrossFade_76;
	// System.Int32 PlayerController::IsRunning
	int32_t ___IsRunning_77;
	// System.Int32 PlayerController::IsWalking
	int32_t ___IsWalking_78;
	// System.Int32 PlayerController::IsIdle
	int32_t ___IsIdle_79;
	// System.Int32 PlayerController::IsGrab
	int32_t ___IsGrab_80;
	// System.Int32 PlayerController::PainValue
	int32_t ___PainValue_81;

public:
	inline static int32_t get_offset_of_HasFlashlight_5() { return static_cast<int32_t>(offsetof(PlayerController_t2064355688_StaticFields, ___HasFlashlight_5)); }
	inline bool get_HasFlashlight_5() const { return ___HasFlashlight_5; }
	inline bool* get_address_of_HasFlashlight_5() { return &___HasFlashlight_5; }
	inline void set_HasFlashlight_5(bool value)
	{
		___HasFlashlight_5 = value;
	}

	inline static int32_t get_offset_of_FlashlightOff_6() { return static_cast<int32_t>(offsetof(PlayerController_t2064355688_StaticFields, ___FlashlightOff_6)); }
	inline bool get_FlashlightOff_6() const { return ___FlashlightOff_6; }
	inline bool* get_address_of_FlashlightOff_6() { return &___FlashlightOff_6; }
	inline void set_FlashlightOff_6(bool value)
	{
		___FlashlightOff_6 = value;
	}

	inline static int32_t get_offset_of_isMap_65() { return static_cast<int32_t>(offsetof(PlayerController_t2064355688_StaticFields, ___isMap_65)); }
	inline bool get_isMap_65() const { return ___isMap_65; }
	inline bool* get_address_of_isMap_65() { return &___isMap_65; }
	inline void set_isMap_65(bool value)
	{
		___isMap_65 = value;
	}

	inline static int32_t get_offset_of_delayButton_67() { return static_cast<int32_t>(offsetof(PlayerController_t2064355688_StaticFields, ___delayButton_67)); }
	inline bool get_delayButton_67() const { return ___delayButton_67; }
	inline bool* get_address_of_delayButton_67() { return &___delayButton_67; }
	inline void set_delayButton_67(bool value)
	{
		___delayButton_67 = value;
	}

	inline static int32_t get_offset_of_CrossFade_76() { return static_cast<int32_t>(offsetof(PlayerController_t2064355688_StaticFields, ___CrossFade_76)); }
	inline int32_t get_CrossFade_76() const { return ___CrossFade_76; }
	inline int32_t* get_address_of_CrossFade_76() { return &___CrossFade_76; }
	inline void set_CrossFade_76(int32_t value)
	{
		___CrossFade_76 = value;
	}

	inline static int32_t get_offset_of_IsRunning_77() { return static_cast<int32_t>(offsetof(PlayerController_t2064355688_StaticFields, ___IsRunning_77)); }
	inline int32_t get_IsRunning_77() const { return ___IsRunning_77; }
	inline int32_t* get_address_of_IsRunning_77() { return &___IsRunning_77; }
	inline void set_IsRunning_77(int32_t value)
	{
		___IsRunning_77 = value;
	}

	inline static int32_t get_offset_of_IsWalking_78() { return static_cast<int32_t>(offsetof(PlayerController_t2064355688_StaticFields, ___IsWalking_78)); }
	inline int32_t get_IsWalking_78() const { return ___IsWalking_78; }
	inline int32_t* get_address_of_IsWalking_78() { return &___IsWalking_78; }
	inline void set_IsWalking_78(int32_t value)
	{
		___IsWalking_78 = value;
	}

	inline static int32_t get_offset_of_IsIdle_79() { return static_cast<int32_t>(offsetof(PlayerController_t2064355688_StaticFields, ___IsIdle_79)); }
	inline int32_t get_IsIdle_79() const { return ___IsIdle_79; }
	inline int32_t* get_address_of_IsIdle_79() { return &___IsIdle_79; }
	inline void set_IsIdle_79(int32_t value)
	{
		___IsIdle_79 = value;
	}

	inline static int32_t get_offset_of_IsGrab_80() { return static_cast<int32_t>(offsetof(PlayerController_t2064355688_StaticFields, ___IsGrab_80)); }
	inline int32_t get_IsGrab_80() const { return ___IsGrab_80; }
	inline int32_t* get_address_of_IsGrab_80() { return &___IsGrab_80; }
	inline void set_IsGrab_80(int32_t value)
	{
		___IsGrab_80 = value;
	}

	inline static int32_t get_offset_of_PainValue_81() { return static_cast<int32_t>(offsetof(PlayerController_t2064355688_StaticFields, ___PainValue_81)); }
	inline int32_t get_PainValue_81() const { return ___PainValue_81; }
	inline int32_t* get_address_of_PainValue_81() { return &___PainValue_81; }
	inline void set_PainValue_81(int32_t value)
	{
		___PainValue_81 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // PLAYERCONTROLLER_T2064355688_H
#ifndef SAI2X_T2622151746_H
#define SAI2X_T2622151746_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// SAI2x
struct  SAI2x_t2622151746  : public MonoBehaviour_t3962482529
{
public:
	// UnityEngine.Material SAI2x::material
	Material_t340375123 * ___material_4;

public:
	inline static int32_t get_offset_of_material_4() { return static_cast<int32_t>(offsetof(SAI2x_t2622151746, ___material_4)); }
	inline Material_t340375123 * get_material_4() const { return ___material_4; }
	inline Material_t340375123 ** get_address_of_material_4() { return &___material_4; }
	inline void set_material_4(Material_t340375123 * value)
	{
		___material_4 = value;
		Il2CppCodeGenWriteBarrier((&___material_4), value);
	}
};

struct SAI2x_t2622151746_StaticFields
{
public:
	// System.Int32 SAI2x::blurTexString
	int32_t ___blurTexString_5;

public:
	inline static int32_t get_offset_of_blurTexString_5() { return static_cast<int32_t>(offsetof(SAI2x_t2622151746_StaticFields, ___blurTexString_5)); }
	inline int32_t get_blurTexString_5() const { return ___blurTexString_5; }
	inline int32_t* get_address_of_blurTexString_5() { return &___blurTexString_5; }
	inline void set_blurTexString_5(int32_t value)
	{
		___blurTexString_5 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // SAI2X_T2622151746_H
#ifndef SFXCONTROLLER_T43050431_H
#define SFXCONTROLLER_T43050431_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// SFXController
struct  SFXController_t43050431  : public MonoBehaviour_t3962482529
{
public:
	// UnityEngine.AudioSource SFXController::audioSource
	AudioSource_t3935305588 * ___audioSource_4;
	// UnityEngine.AudioClip SFXController::audioClip
	AudioClip_t3680889665 * ___audioClip_5;
	// UnityEngine.AudioClip[] SFXController::grassSounds
	AudioClipU5BU5D_t143221404* ___grassSounds_6;
	// UnityEngine.AudioClip[] SFXController::roadSounds
	AudioClipU5BU5D_t143221404* ___roadSounds_7;
	// UnityEngine.AudioClip[] SFXController::currentClips
	AudioClipU5BU5D_t143221404* ___currentClips_8;
	// System.Single SFXController::distance
	float ___distance_9;
	// UnityEngine.RaycastHit SFXController::hit
	RaycastHit_t1056001966  ___hit_10;
	// System.Int32 SFXController::i
	int32_t ___i_11;
	// System.Int32 SFXController::tick
	int32_t ___tick_12;
	// System.Int32 SFXController::maskValue
	int32_t ___maskValue_13;

public:
	inline static int32_t get_offset_of_audioSource_4() { return static_cast<int32_t>(offsetof(SFXController_t43050431, ___audioSource_4)); }
	inline AudioSource_t3935305588 * get_audioSource_4() const { return ___audioSource_4; }
	inline AudioSource_t3935305588 ** get_address_of_audioSource_4() { return &___audioSource_4; }
	inline void set_audioSource_4(AudioSource_t3935305588 * value)
	{
		___audioSource_4 = value;
		Il2CppCodeGenWriteBarrier((&___audioSource_4), value);
	}

	inline static int32_t get_offset_of_audioClip_5() { return static_cast<int32_t>(offsetof(SFXController_t43050431, ___audioClip_5)); }
	inline AudioClip_t3680889665 * get_audioClip_5() const { return ___audioClip_5; }
	inline AudioClip_t3680889665 ** get_address_of_audioClip_5() { return &___audioClip_5; }
	inline void set_audioClip_5(AudioClip_t3680889665 * value)
	{
		___audioClip_5 = value;
		Il2CppCodeGenWriteBarrier((&___audioClip_5), value);
	}

	inline static int32_t get_offset_of_grassSounds_6() { return static_cast<int32_t>(offsetof(SFXController_t43050431, ___grassSounds_6)); }
	inline AudioClipU5BU5D_t143221404* get_grassSounds_6() const { return ___grassSounds_6; }
	inline AudioClipU5BU5D_t143221404** get_address_of_grassSounds_6() { return &___grassSounds_6; }
	inline void set_grassSounds_6(AudioClipU5BU5D_t143221404* value)
	{
		___grassSounds_6 = value;
		Il2CppCodeGenWriteBarrier((&___grassSounds_6), value);
	}

	inline static int32_t get_offset_of_roadSounds_7() { return static_cast<int32_t>(offsetof(SFXController_t43050431, ___roadSounds_7)); }
	inline AudioClipU5BU5D_t143221404* get_roadSounds_7() const { return ___roadSounds_7; }
	inline AudioClipU5BU5D_t143221404** get_address_of_roadSounds_7() { return &___roadSounds_7; }
	inline void set_roadSounds_7(AudioClipU5BU5D_t143221404* value)
	{
		___roadSounds_7 = value;
		Il2CppCodeGenWriteBarrier((&___roadSounds_7), value);
	}

	inline static int32_t get_offset_of_currentClips_8() { return static_cast<int32_t>(offsetof(SFXController_t43050431, ___currentClips_8)); }
	inline AudioClipU5BU5D_t143221404* get_currentClips_8() const { return ___currentClips_8; }
	inline AudioClipU5BU5D_t143221404** get_address_of_currentClips_8() { return &___currentClips_8; }
	inline void set_currentClips_8(AudioClipU5BU5D_t143221404* value)
	{
		___currentClips_8 = value;
		Il2CppCodeGenWriteBarrier((&___currentClips_8), value);
	}

	inline static int32_t get_offset_of_distance_9() { return static_cast<int32_t>(offsetof(SFXController_t43050431, ___distance_9)); }
	inline float get_distance_9() const { return ___distance_9; }
	inline float* get_address_of_distance_9() { return &___distance_9; }
	inline void set_distance_9(float value)
	{
		___distance_9 = value;
	}

	inline static int32_t get_offset_of_hit_10() { return static_cast<int32_t>(offsetof(SFXController_t43050431, ___hit_10)); }
	inline RaycastHit_t1056001966  get_hit_10() const { return ___hit_10; }
	inline RaycastHit_t1056001966 * get_address_of_hit_10() { return &___hit_10; }
	inline void set_hit_10(RaycastHit_t1056001966  value)
	{
		___hit_10 = value;
	}

	inline static int32_t get_offset_of_i_11() { return static_cast<int32_t>(offsetof(SFXController_t43050431, ___i_11)); }
	inline int32_t get_i_11() const { return ___i_11; }
	inline int32_t* get_address_of_i_11() { return &___i_11; }
	inline void set_i_11(int32_t value)
	{
		___i_11 = value;
	}

	inline static int32_t get_offset_of_tick_12() { return static_cast<int32_t>(offsetof(SFXController_t43050431, ___tick_12)); }
	inline int32_t get_tick_12() const { return ___tick_12; }
	inline int32_t* get_address_of_tick_12() { return &___tick_12; }
	inline void set_tick_12(int32_t value)
	{
		___tick_12 = value;
	}

	inline static int32_t get_offset_of_maskValue_13() { return static_cast<int32_t>(offsetof(SFXController_t43050431, ___maskValue_13)); }
	inline int32_t get_maskValue_13() const { return ___maskValue_13; }
	inline int32_t* get_address_of_maskValue_13() { return &___maskValue_13; }
	inline void set_maskValue_13(int32_t value)
	{
		___maskValue_13 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // SFXCONTROLLER_T43050431_H
#ifndef SAVEMANAGER_INPUTS_T2402574047_H
#define SAVEMANAGER_INPUTS_T2402574047_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// SaveManager_Inputs
struct  SaveManager_Inputs_t2402574047  : public MonoBehaviour_t3962482529
{
public:
	// System.String SaveManager_Inputs::joystick1
	String_t* ___joystick1_4;
	// System.Int32 SaveManager_Inputs::CROSS
	int32_t ___CROSS_5;
	// System.Int32 SaveManager_Inputs::CIRCLE
	int32_t ___CIRCLE_6;
	// System.Int32 SaveManager_Inputs::SQUARE
	int32_t ___SQUARE_7;
	// System.Int32 SaveManager_Inputs::TRIANGLE
	int32_t ___TRIANGLE_8;
	// System.Int32 SaveManager_Inputs::SELECT
	int32_t ___SELECT_9;
	// System.Int32 SaveManager_Inputs::START
	int32_t ___START_10;
	// System.Int32 SaveManager_Inputs::UP
	int32_t ___UP_11;
	// System.Int32 SaveManager_Inputs::RIGHT
	int32_t ___RIGHT_12;
	// System.Int32 SaveManager_Inputs::DOWN
	int32_t ___DOWN_13;
	// System.Int32 SaveManager_Inputs::LEFT
	int32_t ___LEFT_14;
	// System.Int32 SaveManager_Inputs::selectedSlot
	int32_t ___selectedSlot_15;
	// System.Int32 SaveManager_Inputs::previousSlot
	int32_t ___previousSlot_16;
	// UnityEngine.Color SaveManager_Inputs::baseColor
	Color_t2555686324  ___baseColor_17;
	// UnityEngine.Color SaveManager_Inputs::hilightColor
	Color_t2555686324  ___hilightColor_18;
	// UnityEngine.Color SaveManager_Inputs::loadedColor
	Color_t2555686324  ___loadedColor_19;
	// UnityEngine.Color SaveManager_Inputs::savedColor
	Color_t2555686324  ___savedColor_20;
	// UnityEngine.UI.RawImage SaveManager_Inputs::slot1
	RawImage_t3182918964 * ___slot1_21;
	// UnityEngine.UI.RawImage SaveManager_Inputs::slot2
	RawImage_t3182918964 * ___slot2_22;
	// UnityEngine.UI.RawImage SaveManager_Inputs::slot3
	RawImage_t3182918964 * ___slot3_23;
	// UnityEngine.AsyncOperation SaveManager_Inputs::loadingOperation
	AsyncOperation_t1445031843 * ___loadingOperation_24;
	// UnityEngine.GameObject SaveManager_Inputs::sceneManager
	GameObject_t1113636619 * ___sceneManager_25;
	// UnityEngine.GameObject SaveManager_Inputs::menuManager
	GameObject_t1113636619 * ___menuManager_26;
	// UnityEngine.CanvasGroup SaveManager_Inputs::menuGroup
	CanvasGroup_t4083511760 * ___menuGroup_27;
	// UnityEngine.CanvasGroup SaveManager_Inputs::saveGroup
	CanvasGroup_t4083511760 * ___saveGroup_28;
	// UnityEngine.CanvasGroup SaveManager_Inputs::loadDialogGroup
	CanvasGroup_t4083511760 * ___loadDialogGroup_29;
	// UnityEngine.GameObject SaveManager_Inputs::audioManager
	GameObject_t1113636619 * ___audioManager_30;
	// System.Single SaveManager_Inputs::fadeDuration
	float ___fadeDuration_31;
	// System.Single SaveManager_Inputs::targetValue
	float ___targetValue_32;
	// System.Single SaveManager_Inputs::loadProgress
	float ___loadProgress_33;
	// System.Boolean SaveManager_Inputs::loading
	bool ___loading_34;
	// System.Single SaveManager_Inputs::timer
	float ___timer_35;
	// System.Single SaveManager_Inputs::delay
	float ___delay_36;
	// System.Collections.Generic.List`1<UnityEngine.AudioClip> SaveManager_Inputs::clipList
	List_1_t857997111 * ___clipList_37;
	// UnityEngine.AudioSource SaveManager_Inputs::audioSource
	AudioSource_t3935305588 * ___audioSource_38;
	// TMPro.TextMeshProUGUI SaveManager_Inputs::slot1Text
	TextMeshProUGUI_t529313277 * ___slot1Text_39;
	// TMPro.TextMeshProUGUI SaveManager_Inputs::slot2Text
	TextMeshProUGUI_t529313277 * ___slot2Text_40;
	// TMPro.TextMeshProUGUI SaveManager_Inputs::slot3Text
	TextMeshProUGUI_t529313277 * ___slot3Text_41;
	// System.String SaveManager_Inputs::slot1String
	String_t* ___slot1String_42;
	// System.String SaveManager_Inputs::slot2String
	String_t* ___slot2String_43;
	// System.String SaveManager_Inputs::slot3String
	String_t* ___slot3String_44;
	// System.String SaveManager_Inputs::dateTime
	String_t* ___dateTime_45;
	// UnityEngine.GameObject SaveManager_Inputs::currentSelection
	GameObject_t1113636619 * ___currentSelection_46;
	// UnityEngine.GameObject SaveManager_Inputs::previousSelection
	GameObject_t1113636619 * ___previousSelection_47;
	// UnityEngine.Animator SaveManager_Inputs::anim
	Animator_t434523843 * ___anim_48;

public:
	inline static int32_t get_offset_of_joystick1_4() { return static_cast<int32_t>(offsetof(SaveManager_Inputs_t2402574047, ___joystick1_4)); }
	inline String_t* get_joystick1_4() const { return ___joystick1_4; }
	inline String_t** get_address_of_joystick1_4() { return &___joystick1_4; }
	inline void set_joystick1_4(String_t* value)
	{
		___joystick1_4 = value;
		Il2CppCodeGenWriteBarrier((&___joystick1_4), value);
	}

	inline static int32_t get_offset_of_CROSS_5() { return static_cast<int32_t>(offsetof(SaveManager_Inputs_t2402574047, ___CROSS_5)); }
	inline int32_t get_CROSS_5() const { return ___CROSS_5; }
	inline int32_t* get_address_of_CROSS_5() { return &___CROSS_5; }
	inline void set_CROSS_5(int32_t value)
	{
		___CROSS_5 = value;
	}

	inline static int32_t get_offset_of_CIRCLE_6() { return static_cast<int32_t>(offsetof(SaveManager_Inputs_t2402574047, ___CIRCLE_6)); }
	inline int32_t get_CIRCLE_6() const { return ___CIRCLE_6; }
	inline int32_t* get_address_of_CIRCLE_6() { return &___CIRCLE_6; }
	inline void set_CIRCLE_6(int32_t value)
	{
		___CIRCLE_6 = value;
	}

	inline static int32_t get_offset_of_SQUARE_7() { return static_cast<int32_t>(offsetof(SaveManager_Inputs_t2402574047, ___SQUARE_7)); }
	inline int32_t get_SQUARE_7() const { return ___SQUARE_7; }
	inline int32_t* get_address_of_SQUARE_7() { return &___SQUARE_7; }
	inline void set_SQUARE_7(int32_t value)
	{
		___SQUARE_7 = value;
	}

	inline static int32_t get_offset_of_TRIANGLE_8() { return static_cast<int32_t>(offsetof(SaveManager_Inputs_t2402574047, ___TRIANGLE_8)); }
	inline int32_t get_TRIANGLE_8() const { return ___TRIANGLE_8; }
	inline int32_t* get_address_of_TRIANGLE_8() { return &___TRIANGLE_8; }
	inline void set_TRIANGLE_8(int32_t value)
	{
		___TRIANGLE_8 = value;
	}

	inline static int32_t get_offset_of_SELECT_9() { return static_cast<int32_t>(offsetof(SaveManager_Inputs_t2402574047, ___SELECT_9)); }
	inline int32_t get_SELECT_9() const { return ___SELECT_9; }
	inline int32_t* get_address_of_SELECT_9() { return &___SELECT_9; }
	inline void set_SELECT_9(int32_t value)
	{
		___SELECT_9 = value;
	}

	inline static int32_t get_offset_of_START_10() { return static_cast<int32_t>(offsetof(SaveManager_Inputs_t2402574047, ___START_10)); }
	inline int32_t get_START_10() const { return ___START_10; }
	inline int32_t* get_address_of_START_10() { return &___START_10; }
	inline void set_START_10(int32_t value)
	{
		___START_10 = value;
	}

	inline static int32_t get_offset_of_UP_11() { return static_cast<int32_t>(offsetof(SaveManager_Inputs_t2402574047, ___UP_11)); }
	inline int32_t get_UP_11() const { return ___UP_11; }
	inline int32_t* get_address_of_UP_11() { return &___UP_11; }
	inline void set_UP_11(int32_t value)
	{
		___UP_11 = value;
	}

	inline static int32_t get_offset_of_RIGHT_12() { return static_cast<int32_t>(offsetof(SaveManager_Inputs_t2402574047, ___RIGHT_12)); }
	inline int32_t get_RIGHT_12() const { return ___RIGHT_12; }
	inline int32_t* get_address_of_RIGHT_12() { return &___RIGHT_12; }
	inline void set_RIGHT_12(int32_t value)
	{
		___RIGHT_12 = value;
	}

	inline static int32_t get_offset_of_DOWN_13() { return static_cast<int32_t>(offsetof(SaveManager_Inputs_t2402574047, ___DOWN_13)); }
	inline int32_t get_DOWN_13() const { return ___DOWN_13; }
	inline int32_t* get_address_of_DOWN_13() { return &___DOWN_13; }
	inline void set_DOWN_13(int32_t value)
	{
		___DOWN_13 = value;
	}

	inline static int32_t get_offset_of_LEFT_14() { return static_cast<int32_t>(offsetof(SaveManager_Inputs_t2402574047, ___LEFT_14)); }
	inline int32_t get_LEFT_14() const { return ___LEFT_14; }
	inline int32_t* get_address_of_LEFT_14() { return &___LEFT_14; }
	inline void set_LEFT_14(int32_t value)
	{
		___LEFT_14 = value;
	}

	inline static int32_t get_offset_of_selectedSlot_15() { return static_cast<int32_t>(offsetof(SaveManager_Inputs_t2402574047, ___selectedSlot_15)); }
	inline int32_t get_selectedSlot_15() const { return ___selectedSlot_15; }
	inline int32_t* get_address_of_selectedSlot_15() { return &___selectedSlot_15; }
	inline void set_selectedSlot_15(int32_t value)
	{
		___selectedSlot_15 = value;
	}

	inline static int32_t get_offset_of_previousSlot_16() { return static_cast<int32_t>(offsetof(SaveManager_Inputs_t2402574047, ___previousSlot_16)); }
	inline int32_t get_previousSlot_16() const { return ___previousSlot_16; }
	inline int32_t* get_address_of_previousSlot_16() { return &___previousSlot_16; }
	inline void set_previousSlot_16(int32_t value)
	{
		___previousSlot_16 = value;
	}

	inline static int32_t get_offset_of_baseColor_17() { return static_cast<int32_t>(offsetof(SaveManager_Inputs_t2402574047, ___baseColor_17)); }
	inline Color_t2555686324  get_baseColor_17() const { return ___baseColor_17; }
	inline Color_t2555686324 * get_address_of_baseColor_17() { return &___baseColor_17; }
	inline void set_baseColor_17(Color_t2555686324  value)
	{
		___baseColor_17 = value;
	}

	inline static int32_t get_offset_of_hilightColor_18() { return static_cast<int32_t>(offsetof(SaveManager_Inputs_t2402574047, ___hilightColor_18)); }
	inline Color_t2555686324  get_hilightColor_18() const { return ___hilightColor_18; }
	inline Color_t2555686324 * get_address_of_hilightColor_18() { return &___hilightColor_18; }
	inline void set_hilightColor_18(Color_t2555686324  value)
	{
		___hilightColor_18 = value;
	}

	inline static int32_t get_offset_of_loadedColor_19() { return static_cast<int32_t>(offsetof(SaveManager_Inputs_t2402574047, ___loadedColor_19)); }
	inline Color_t2555686324  get_loadedColor_19() const { return ___loadedColor_19; }
	inline Color_t2555686324 * get_address_of_loadedColor_19() { return &___loadedColor_19; }
	inline void set_loadedColor_19(Color_t2555686324  value)
	{
		___loadedColor_19 = value;
	}

	inline static int32_t get_offset_of_savedColor_20() { return static_cast<int32_t>(offsetof(SaveManager_Inputs_t2402574047, ___savedColor_20)); }
	inline Color_t2555686324  get_savedColor_20() const { return ___savedColor_20; }
	inline Color_t2555686324 * get_address_of_savedColor_20() { return &___savedColor_20; }
	inline void set_savedColor_20(Color_t2555686324  value)
	{
		___savedColor_20 = value;
	}

	inline static int32_t get_offset_of_slot1_21() { return static_cast<int32_t>(offsetof(SaveManager_Inputs_t2402574047, ___slot1_21)); }
	inline RawImage_t3182918964 * get_slot1_21() const { return ___slot1_21; }
	inline RawImage_t3182918964 ** get_address_of_slot1_21() { return &___slot1_21; }
	inline void set_slot1_21(RawImage_t3182918964 * value)
	{
		___slot1_21 = value;
		Il2CppCodeGenWriteBarrier((&___slot1_21), value);
	}

	inline static int32_t get_offset_of_slot2_22() { return static_cast<int32_t>(offsetof(SaveManager_Inputs_t2402574047, ___slot2_22)); }
	inline RawImage_t3182918964 * get_slot2_22() const { return ___slot2_22; }
	inline RawImage_t3182918964 ** get_address_of_slot2_22() { return &___slot2_22; }
	inline void set_slot2_22(RawImage_t3182918964 * value)
	{
		___slot2_22 = value;
		Il2CppCodeGenWriteBarrier((&___slot2_22), value);
	}

	inline static int32_t get_offset_of_slot3_23() { return static_cast<int32_t>(offsetof(SaveManager_Inputs_t2402574047, ___slot3_23)); }
	inline RawImage_t3182918964 * get_slot3_23() const { return ___slot3_23; }
	inline RawImage_t3182918964 ** get_address_of_slot3_23() { return &___slot3_23; }
	inline void set_slot3_23(RawImage_t3182918964 * value)
	{
		___slot3_23 = value;
		Il2CppCodeGenWriteBarrier((&___slot3_23), value);
	}

	inline static int32_t get_offset_of_loadingOperation_24() { return static_cast<int32_t>(offsetof(SaveManager_Inputs_t2402574047, ___loadingOperation_24)); }
	inline AsyncOperation_t1445031843 * get_loadingOperation_24() const { return ___loadingOperation_24; }
	inline AsyncOperation_t1445031843 ** get_address_of_loadingOperation_24() { return &___loadingOperation_24; }
	inline void set_loadingOperation_24(AsyncOperation_t1445031843 * value)
	{
		___loadingOperation_24 = value;
		Il2CppCodeGenWriteBarrier((&___loadingOperation_24), value);
	}

	inline static int32_t get_offset_of_sceneManager_25() { return static_cast<int32_t>(offsetof(SaveManager_Inputs_t2402574047, ___sceneManager_25)); }
	inline GameObject_t1113636619 * get_sceneManager_25() const { return ___sceneManager_25; }
	inline GameObject_t1113636619 ** get_address_of_sceneManager_25() { return &___sceneManager_25; }
	inline void set_sceneManager_25(GameObject_t1113636619 * value)
	{
		___sceneManager_25 = value;
		Il2CppCodeGenWriteBarrier((&___sceneManager_25), value);
	}

	inline static int32_t get_offset_of_menuManager_26() { return static_cast<int32_t>(offsetof(SaveManager_Inputs_t2402574047, ___menuManager_26)); }
	inline GameObject_t1113636619 * get_menuManager_26() const { return ___menuManager_26; }
	inline GameObject_t1113636619 ** get_address_of_menuManager_26() { return &___menuManager_26; }
	inline void set_menuManager_26(GameObject_t1113636619 * value)
	{
		___menuManager_26 = value;
		Il2CppCodeGenWriteBarrier((&___menuManager_26), value);
	}

	inline static int32_t get_offset_of_menuGroup_27() { return static_cast<int32_t>(offsetof(SaveManager_Inputs_t2402574047, ___menuGroup_27)); }
	inline CanvasGroup_t4083511760 * get_menuGroup_27() const { return ___menuGroup_27; }
	inline CanvasGroup_t4083511760 ** get_address_of_menuGroup_27() { return &___menuGroup_27; }
	inline void set_menuGroup_27(CanvasGroup_t4083511760 * value)
	{
		___menuGroup_27 = value;
		Il2CppCodeGenWriteBarrier((&___menuGroup_27), value);
	}

	inline static int32_t get_offset_of_saveGroup_28() { return static_cast<int32_t>(offsetof(SaveManager_Inputs_t2402574047, ___saveGroup_28)); }
	inline CanvasGroup_t4083511760 * get_saveGroup_28() const { return ___saveGroup_28; }
	inline CanvasGroup_t4083511760 ** get_address_of_saveGroup_28() { return &___saveGroup_28; }
	inline void set_saveGroup_28(CanvasGroup_t4083511760 * value)
	{
		___saveGroup_28 = value;
		Il2CppCodeGenWriteBarrier((&___saveGroup_28), value);
	}

	inline static int32_t get_offset_of_loadDialogGroup_29() { return static_cast<int32_t>(offsetof(SaveManager_Inputs_t2402574047, ___loadDialogGroup_29)); }
	inline CanvasGroup_t4083511760 * get_loadDialogGroup_29() const { return ___loadDialogGroup_29; }
	inline CanvasGroup_t4083511760 ** get_address_of_loadDialogGroup_29() { return &___loadDialogGroup_29; }
	inline void set_loadDialogGroup_29(CanvasGroup_t4083511760 * value)
	{
		___loadDialogGroup_29 = value;
		Il2CppCodeGenWriteBarrier((&___loadDialogGroup_29), value);
	}

	inline static int32_t get_offset_of_audioManager_30() { return static_cast<int32_t>(offsetof(SaveManager_Inputs_t2402574047, ___audioManager_30)); }
	inline GameObject_t1113636619 * get_audioManager_30() const { return ___audioManager_30; }
	inline GameObject_t1113636619 ** get_address_of_audioManager_30() { return &___audioManager_30; }
	inline void set_audioManager_30(GameObject_t1113636619 * value)
	{
		___audioManager_30 = value;
		Il2CppCodeGenWriteBarrier((&___audioManager_30), value);
	}

	inline static int32_t get_offset_of_fadeDuration_31() { return static_cast<int32_t>(offsetof(SaveManager_Inputs_t2402574047, ___fadeDuration_31)); }
	inline float get_fadeDuration_31() const { return ___fadeDuration_31; }
	inline float* get_address_of_fadeDuration_31() { return &___fadeDuration_31; }
	inline void set_fadeDuration_31(float value)
	{
		___fadeDuration_31 = value;
	}

	inline static int32_t get_offset_of_targetValue_32() { return static_cast<int32_t>(offsetof(SaveManager_Inputs_t2402574047, ___targetValue_32)); }
	inline float get_targetValue_32() const { return ___targetValue_32; }
	inline float* get_address_of_targetValue_32() { return &___targetValue_32; }
	inline void set_targetValue_32(float value)
	{
		___targetValue_32 = value;
	}

	inline static int32_t get_offset_of_loadProgress_33() { return static_cast<int32_t>(offsetof(SaveManager_Inputs_t2402574047, ___loadProgress_33)); }
	inline float get_loadProgress_33() const { return ___loadProgress_33; }
	inline float* get_address_of_loadProgress_33() { return &___loadProgress_33; }
	inline void set_loadProgress_33(float value)
	{
		___loadProgress_33 = value;
	}

	inline static int32_t get_offset_of_loading_34() { return static_cast<int32_t>(offsetof(SaveManager_Inputs_t2402574047, ___loading_34)); }
	inline bool get_loading_34() const { return ___loading_34; }
	inline bool* get_address_of_loading_34() { return &___loading_34; }
	inline void set_loading_34(bool value)
	{
		___loading_34 = value;
	}

	inline static int32_t get_offset_of_timer_35() { return static_cast<int32_t>(offsetof(SaveManager_Inputs_t2402574047, ___timer_35)); }
	inline float get_timer_35() const { return ___timer_35; }
	inline float* get_address_of_timer_35() { return &___timer_35; }
	inline void set_timer_35(float value)
	{
		___timer_35 = value;
	}

	inline static int32_t get_offset_of_delay_36() { return static_cast<int32_t>(offsetof(SaveManager_Inputs_t2402574047, ___delay_36)); }
	inline float get_delay_36() const { return ___delay_36; }
	inline float* get_address_of_delay_36() { return &___delay_36; }
	inline void set_delay_36(float value)
	{
		___delay_36 = value;
	}

	inline static int32_t get_offset_of_clipList_37() { return static_cast<int32_t>(offsetof(SaveManager_Inputs_t2402574047, ___clipList_37)); }
	inline List_1_t857997111 * get_clipList_37() const { return ___clipList_37; }
	inline List_1_t857997111 ** get_address_of_clipList_37() { return &___clipList_37; }
	inline void set_clipList_37(List_1_t857997111 * value)
	{
		___clipList_37 = value;
		Il2CppCodeGenWriteBarrier((&___clipList_37), value);
	}

	inline static int32_t get_offset_of_audioSource_38() { return static_cast<int32_t>(offsetof(SaveManager_Inputs_t2402574047, ___audioSource_38)); }
	inline AudioSource_t3935305588 * get_audioSource_38() const { return ___audioSource_38; }
	inline AudioSource_t3935305588 ** get_address_of_audioSource_38() { return &___audioSource_38; }
	inline void set_audioSource_38(AudioSource_t3935305588 * value)
	{
		___audioSource_38 = value;
		Il2CppCodeGenWriteBarrier((&___audioSource_38), value);
	}

	inline static int32_t get_offset_of_slot1Text_39() { return static_cast<int32_t>(offsetof(SaveManager_Inputs_t2402574047, ___slot1Text_39)); }
	inline TextMeshProUGUI_t529313277 * get_slot1Text_39() const { return ___slot1Text_39; }
	inline TextMeshProUGUI_t529313277 ** get_address_of_slot1Text_39() { return &___slot1Text_39; }
	inline void set_slot1Text_39(TextMeshProUGUI_t529313277 * value)
	{
		___slot1Text_39 = value;
		Il2CppCodeGenWriteBarrier((&___slot1Text_39), value);
	}

	inline static int32_t get_offset_of_slot2Text_40() { return static_cast<int32_t>(offsetof(SaveManager_Inputs_t2402574047, ___slot2Text_40)); }
	inline TextMeshProUGUI_t529313277 * get_slot2Text_40() const { return ___slot2Text_40; }
	inline TextMeshProUGUI_t529313277 ** get_address_of_slot2Text_40() { return &___slot2Text_40; }
	inline void set_slot2Text_40(TextMeshProUGUI_t529313277 * value)
	{
		___slot2Text_40 = value;
		Il2CppCodeGenWriteBarrier((&___slot2Text_40), value);
	}

	inline static int32_t get_offset_of_slot3Text_41() { return static_cast<int32_t>(offsetof(SaveManager_Inputs_t2402574047, ___slot3Text_41)); }
	inline TextMeshProUGUI_t529313277 * get_slot3Text_41() const { return ___slot3Text_41; }
	inline TextMeshProUGUI_t529313277 ** get_address_of_slot3Text_41() { return &___slot3Text_41; }
	inline void set_slot3Text_41(TextMeshProUGUI_t529313277 * value)
	{
		___slot3Text_41 = value;
		Il2CppCodeGenWriteBarrier((&___slot3Text_41), value);
	}

	inline static int32_t get_offset_of_slot1String_42() { return static_cast<int32_t>(offsetof(SaveManager_Inputs_t2402574047, ___slot1String_42)); }
	inline String_t* get_slot1String_42() const { return ___slot1String_42; }
	inline String_t** get_address_of_slot1String_42() { return &___slot1String_42; }
	inline void set_slot1String_42(String_t* value)
	{
		___slot1String_42 = value;
		Il2CppCodeGenWriteBarrier((&___slot1String_42), value);
	}

	inline static int32_t get_offset_of_slot2String_43() { return static_cast<int32_t>(offsetof(SaveManager_Inputs_t2402574047, ___slot2String_43)); }
	inline String_t* get_slot2String_43() const { return ___slot2String_43; }
	inline String_t** get_address_of_slot2String_43() { return &___slot2String_43; }
	inline void set_slot2String_43(String_t* value)
	{
		___slot2String_43 = value;
		Il2CppCodeGenWriteBarrier((&___slot2String_43), value);
	}

	inline static int32_t get_offset_of_slot3String_44() { return static_cast<int32_t>(offsetof(SaveManager_Inputs_t2402574047, ___slot3String_44)); }
	inline String_t* get_slot3String_44() const { return ___slot3String_44; }
	inline String_t** get_address_of_slot3String_44() { return &___slot3String_44; }
	inline void set_slot3String_44(String_t* value)
	{
		___slot3String_44 = value;
		Il2CppCodeGenWriteBarrier((&___slot3String_44), value);
	}

	inline static int32_t get_offset_of_dateTime_45() { return static_cast<int32_t>(offsetof(SaveManager_Inputs_t2402574047, ___dateTime_45)); }
	inline String_t* get_dateTime_45() const { return ___dateTime_45; }
	inline String_t** get_address_of_dateTime_45() { return &___dateTime_45; }
	inline void set_dateTime_45(String_t* value)
	{
		___dateTime_45 = value;
		Il2CppCodeGenWriteBarrier((&___dateTime_45), value);
	}

	inline static int32_t get_offset_of_currentSelection_46() { return static_cast<int32_t>(offsetof(SaveManager_Inputs_t2402574047, ___currentSelection_46)); }
	inline GameObject_t1113636619 * get_currentSelection_46() const { return ___currentSelection_46; }
	inline GameObject_t1113636619 ** get_address_of_currentSelection_46() { return &___currentSelection_46; }
	inline void set_currentSelection_46(GameObject_t1113636619 * value)
	{
		___currentSelection_46 = value;
		Il2CppCodeGenWriteBarrier((&___currentSelection_46), value);
	}

	inline static int32_t get_offset_of_previousSelection_47() { return static_cast<int32_t>(offsetof(SaveManager_Inputs_t2402574047, ___previousSelection_47)); }
	inline GameObject_t1113636619 * get_previousSelection_47() const { return ___previousSelection_47; }
	inline GameObject_t1113636619 ** get_address_of_previousSelection_47() { return &___previousSelection_47; }
	inline void set_previousSelection_47(GameObject_t1113636619 * value)
	{
		___previousSelection_47 = value;
		Il2CppCodeGenWriteBarrier((&___previousSelection_47), value);
	}

	inline static int32_t get_offset_of_anim_48() { return static_cast<int32_t>(offsetof(SaveManager_Inputs_t2402574047, ___anim_48)); }
	inline Animator_t434523843 * get_anim_48() const { return ___anim_48; }
	inline Animator_t434523843 ** get_address_of_anim_48() { return &___anim_48; }
	inline void set_anim_48(Animator_t434523843 * value)
	{
		___anim_48 = value;
		Il2CppCodeGenWriteBarrier((&___anim_48), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // SAVEMANAGER_INPUTS_T2402574047_H
#ifndef SAVESERIAL_T2776190746_H
#define SAVESERIAL_T2776190746_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// SaveSerial
struct  SaveSerial_t2776190746  : public MonoBehaviour_t3962482529
{
public:
	// UnityEngine.GameObject SaveSerial::saveManager
	GameObject_t1113636619 * ___saveManager_4;
	// System.String SaveSerial::dataPath
	String_t* ___dataPath_5;
	// System.String SaveSerial::savePrefix
	String_t* ___savePrefix_6;
	// System.String SaveSerial::saveFileName
	String_t* ___saveFileName_7;
	// System.Boolean SaveSerial::hasLoaded
	bool ___hasLoaded_8;
	// System.Int32 SaveSerial::slotSelector
	int32_t ___slotSelector_9;
	// System.String SaveSerial::levelToSave
	String_t* ___levelToSave_10;
	// UnityEngine.GameObject SaveSerial::player
	GameObject_t1113636619 * ___player_11;
	// System.Collections.Generic.List`1<UnityEngine.GameObject> SaveSerial::medList
	List_1_t2585711361 * ___medList_12;
	// System.Collections.Generic.List`1<UnityEngine.GameObject> SaveSerial::battList
	List_1_t2585711361 * ___battList_13;
	// System.Collections.Generic.List`1<UnityEngine.GameObject> SaveSerial::lwList
	List_1_t2585711361 * ___lwList_14;
	// System.Collections.Generic.List`1<UnityEngine.GameObject> SaveSerial::hwList
	List_1_t2585711361 * ___hwList_15;

public:
	inline static int32_t get_offset_of_saveManager_4() { return static_cast<int32_t>(offsetof(SaveSerial_t2776190746, ___saveManager_4)); }
	inline GameObject_t1113636619 * get_saveManager_4() const { return ___saveManager_4; }
	inline GameObject_t1113636619 ** get_address_of_saveManager_4() { return &___saveManager_4; }
	inline void set_saveManager_4(GameObject_t1113636619 * value)
	{
		___saveManager_4 = value;
		Il2CppCodeGenWriteBarrier((&___saveManager_4), value);
	}

	inline static int32_t get_offset_of_dataPath_5() { return static_cast<int32_t>(offsetof(SaveSerial_t2776190746, ___dataPath_5)); }
	inline String_t* get_dataPath_5() const { return ___dataPath_5; }
	inline String_t** get_address_of_dataPath_5() { return &___dataPath_5; }
	inline void set_dataPath_5(String_t* value)
	{
		___dataPath_5 = value;
		Il2CppCodeGenWriteBarrier((&___dataPath_5), value);
	}

	inline static int32_t get_offset_of_savePrefix_6() { return static_cast<int32_t>(offsetof(SaveSerial_t2776190746, ___savePrefix_6)); }
	inline String_t* get_savePrefix_6() const { return ___savePrefix_6; }
	inline String_t** get_address_of_savePrefix_6() { return &___savePrefix_6; }
	inline void set_savePrefix_6(String_t* value)
	{
		___savePrefix_6 = value;
		Il2CppCodeGenWriteBarrier((&___savePrefix_6), value);
	}

	inline static int32_t get_offset_of_saveFileName_7() { return static_cast<int32_t>(offsetof(SaveSerial_t2776190746, ___saveFileName_7)); }
	inline String_t* get_saveFileName_7() const { return ___saveFileName_7; }
	inline String_t** get_address_of_saveFileName_7() { return &___saveFileName_7; }
	inline void set_saveFileName_7(String_t* value)
	{
		___saveFileName_7 = value;
		Il2CppCodeGenWriteBarrier((&___saveFileName_7), value);
	}

	inline static int32_t get_offset_of_hasLoaded_8() { return static_cast<int32_t>(offsetof(SaveSerial_t2776190746, ___hasLoaded_8)); }
	inline bool get_hasLoaded_8() const { return ___hasLoaded_8; }
	inline bool* get_address_of_hasLoaded_8() { return &___hasLoaded_8; }
	inline void set_hasLoaded_8(bool value)
	{
		___hasLoaded_8 = value;
	}

	inline static int32_t get_offset_of_slotSelector_9() { return static_cast<int32_t>(offsetof(SaveSerial_t2776190746, ___slotSelector_9)); }
	inline int32_t get_slotSelector_9() const { return ___slotSelector_9; }
	inline int32_t* get_address_of_slotSelector_9() { return &___slotSelector_9; }
	inline void set_slotSelector_9(int32_t value)
	{
		___slotSelector_9 = value;
	}

	inline static int32_t get_offset_of_levelToSave_10() { return static_cast<int32_t>(offsetof(SaveSerial_t2776190746, ___levelToSave_10)); }
	inline String_t* get_levelToSave_10() const { return ___levelToSave_10; }
	inline String_t** get_address_of_levelToSave_10() { return &___levelToSave_10; }
	inline void set_levelToSave_10(String_t* value)
	{
		___levelToSave_10 = value;
		Il2CppCodeGenWriteBarrier((&___levelToSave_10), value);
	}

	inline static int32_t get_offset_of_player_11() { return static_cast<int32_t>(offsetof(SaveSerial_t2776190746, ___player_11)); }
	inline GameObject_t1113636619 * get_player_11() const { return ___player_11; }
	inline GameObject_t1113636619 ** get_address_of_player_11() { return &___player_11; }
	inline void set_player_11(GameObject_t1113636619 * value)
	{
		___player_11 = value;
		Il2CppCodeGenWriteBarrier((&___player_11), value);
	}

	inline static int32_t get_offset_of_medList_12() { return static_cast<int32_t>(offsetof(SaveSerial_t2776190746, ___medList_12)); }
	inline List_1_t2585711361 * get_medList_12() const { return ___medList_12; }
	inline List_1_t2585711361 ** get_address_of_medList_12() { return &___medList_12; }
	inline void set_medList_12(List_1_t2585711361 * value)
	{
		___medList_12 = value;
		Il2CppCodeGenWriteBarrier((&___medList_12), value);
	}

	inline static int32_t get_offset_of_battList_13() { return static_cast<int32_t>(offsetof(SaveSerial_t2776190746, ___battList_13)); }
	inline List_1_t2585711361 * get_battList_13() const { return ___battList_13; }
	inline List_1_t2585711361 ** get_address_of_battList_13() { return &___battList_13; }
	inline void set_battList_13(List_1_t2585711361 * value)
	{
		___battList_13 = value;
		Il2CppCodeGenWriteBarrier((&___battList_13), value);
	}

	inline static int32_t get_offset_of_lwList_14() { return static_cast<int32_t>(offsetof(SaveSerial_t2776190746, ___lwList_14)); }
	inline List_1_t2585711361 * get_lwList_14() const { return ___lwList_14; }
	inline List_1_t2585711361 ** get_address_of_lwList_14() { return &___lwList_14; }
	inline void set_lwList_14(List_1_t2585711361 * value)
	{
		___lwList_14 = value;
		Il2CppCodeGenWriteBarrier((&___lwList_14), value);
	}

	inline static int32_t get_offset_of_hwList_15() { return static_cast<int32_t>(offsetof(SaveSerial_t2776190746, ___hwList_15)); }
	inline List_1_t2585711361 * get_hwList_15() const { return ___hwList_15; }
	inline List_1_t2585711361 ** get_address_of_hwList_15() { return &___hwList_15; }
	inline void set_hwList_15(List_1_t2585711361 * value)
	{
		___hwList_15 = value;
		Il2CppCodeGenWriteBarrier((&___hwList_15), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // SAVESERIAL_T2776190746_H
#ifndef SCENELOADTRIGGER_T68892663_H
#define SCENELOADTRIGGER_T68892663_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// SceneLoadTrigger
struct  SceneLoadTrigger_t68892663  : public MonoBehaviour_t3962482529
{
public:
	// System.String SceneLoadTrigger::currentScene
	String_t* ___currentScene_4;
	// System.String SceneLoadTrigger::nextScene
	String_t* ___nextScene_5;
	// System.String SceneLoadTrigger::loaderHint
	String_t* ___loaderHint_6;
	// System.Int32 SceneLoadTrigger::listIndex
	int32_t ___listIndex_7;
	// UnityEngine.GameObject SceneLoadTrigger::listSystem
	GameObject_t1113636619 * ___listSystem_8;
	// System.Collections.Generic.List`1<System.String> SceneLoadTrigger::list
	List_1_t3319525431 * ___list_9;

public:
	inline static int32_t get_offset_of_currentScene_4() { return static_cast<int32_t>(offsetof(SceneLoadTrigger_t68892663, ___currentScene_4)); }
	inline String_t* get_currentScene_4() const { return ___currentScene_4; }
	inline String_t** get_address_of_currentScene_4() { return &___currentScene_4; }
	inline void set_currentScene_4(String_t* value)
	{
		___currentScene_4 = value;
		Il2CppCodeGenWriteBarrier((&___currentScene_4), value);
	}

	inline static int32_t get_offset_of_nextScene_5() { return static_cast<int32_t>(offsetof(SceneLoadTrigger_t68892663, ___nextScene_5)); }
	inline String_t* get_nextScene_5() const { return ___nextScene_5; }
	inline String_t** get_address_of_nextScene_5() { return &___nextScene_5; }
	inline void set_nextScene_5(String_t* value)
	{
		___nextScene_5 = value;
		Il2CppCodeGenWriteBarrier((&___nextScene_5), value);
	}

	inline static int32_t get_offset_of_loaderHint_6() { return static_cast<int32_t>(offsetof(SceneLoadTrigger_t68892663, ___loaderHint_6)); }
	inline String_t* get_loaderHint_6() const { return ___loaderHint_6; }
	inline String_t** get_address_of_loaderHint_6() { return &___loaderHint_6; }
	inline void set_loaderHint_6(String_t* value)
	{
		___loaderHint_6 = value;
		Il2CppCodeGenWriteBarrier((&___loaderHint_6), value);
	}

	inline static int32_t get_offset_of_listIndex_7() { return static_cast<int32_t>(offsetof(SceneLoadTrigger_t68892663, ___listIndex_7)); }
	inline int32_t get_listIndex_7() const { return ___listIndex_7; }
	inline int32_t* get_address_of_listIndex_7() { return &___listIndex_7; }
	inline void set_listIndex_7(int32_t value)
	{
		___listIndex_7 = value;
	}

	inline static int32_t get_offset_of_listSystem_8() { return static_cast<int32_t>(offsetof(SceneLoadTrigger_t68892663, ___listSystem_8)); }
	inline GameObject_t1113636619 * get_listSystem_8() const { return ___listSystem_8; }
	inline GameObject_t1113636619 ** get_address_of_listSystem_8() { return &___listSystem_8; }
	inline void set_listSystem_8(GameObject_t1113636619 * value)
	{
		___listSystem_8 = value;
		Il2CppCodeGenWriteBarrier((&___listSystem_8), value);
	}

	inline static int32_t get_offset_of_list_9() { return static_cast<int32_t>(offsetof(SceneLoadTrigger_t68892663, ___list_9)); }
	inline List_1_t3319525431 * get_list_9() const { return ___list_9; }
	inline List_1_t3319525431 ** get_address_of_list_9() { return &___list_9; }
	inline void set_list_9(List_1_t3319525431 * value)
	{
		___list_9 = value;
		Il2CppCodeGenWriteBarrier((&___list_9), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // SCENELOADTRIGGER_T68892663_H
#ifndef SCENELOADER_T4130533360_H
#define SCENELOADER_T4130533360_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// SceneLoader
struct  SceneLoader_t4130533360  : public MonoBehaviour_t3962482529
{
public:
	// UnityEngine.AsyncOperation SceneLoader::loadingOperation
	AsyncOperation_t1445031843 * ___loadingOperation_4;
	// System.Boolean SceneLoader::loading
	bool ___loading_5;
	// UnityEngine.CanvasGroup SceneLoader::canvasGroup
	CanvasGroup_t4083511760 * ___canvasGroup_6;
	// UnityEngine.UI.Image SceneLoader::progressCounterLeft
	Image_t2670269651 * ___progressCounterLeft_7;
	// UnityEngine.UI.Image SceneLoader::progressCounterRight
	Image_t2670269651 * ___progressCounterRight_8;
	// TMPro.TextMeshProUGUI SceneLoader::loaderHint
	TextMeshProUGUI_t529313277 * ___loaderHint_9;
	// System.Single SceneLoader::fadeDuration
	float ___fadeDuration_10;
	// System.Single SceneLoader::originalValue
	float ___originalValue_11;
	// System.Single SceneLoader::loadProgress
	float ___loadProgress_12;
	// System.Single SceneLoader::fadeValue
	float ___fadeValue_13;
	// System.Boolean SceneLoader::loadAtStart
	bool ___loadAtStart_14;

public:
	inline static int32_t get_offset_of_loadingOperation_4() { return static_cast<int32_t>(offsetof(SceneLoader_t4130533360, ___loadingOperation_4)); }
	inline AsyncOperation_t1445031843 * get_loadingOperation_4() const { return ___loadingOperation_4; }
	inline AsyncOperation_t1445031843 ** get_address_of_loadingOperation_4() { return &___loadingOperation_4; }
	inline void set_loadingOperation_4(AsyncOperation_t1445031843 * value)
	{
		___loadingOperation_4 = value;
		Il2CppCodeGenWriteBarrier((&___loadingOperation_4), value);
	}

	inline static int32_t get_offset_of_loading_5() { return static_cast<int32_t>(offsetof(SceneLoader_t4130533360, ___loading_5)); }
	inline bool get_loading_5() const { return ___loading_5; }
	inline bool* get_address_of_loading_5() { return &___loading_5; }
	inline void set_loading_5(bool value)
	{
		___loading_5 = value;
	}

	inline static int32_t get_offset_of_canvasGroup_6() { return static_cast<int32_t>(offsetof(SceneLoader_t4130533360, ___canvasGroup_6)); }
	inline CanvasGroup_t4083511760 * get_canvasGroup_6() const { return ___canvasGroup_6; }
	inline CanvasGroup_t4083511760 ** get_address_of_canvasGroup_6() { return &___canvasGroup_6; }
	inline void set_canvasGroup_6(CanvasGroup_t4083511760 * value)
	{
		___canvasGroup_6 = value;
		Il2CppCodeGenWriteBarrier((&___canvasGroup_6), value);
	}

	inline static int32_t get_offset_of_progressCounterLeft_7() { return static_cast<int32_t>(offsetof(SceneLoader_t4130533360, ___progressCounterLeft_7)); }
	inline Image_t2670269651 * get_progressCounterLeft_7() const { return ___progressCounterLeft_7; }
	inline Image_t2670269651 ** get_address_of_progressCounterLeft_7() { return &___progressCounterLeft_7; }
	inline void set_progressCounterLeft_7(Image_t2670269651 * value)
	{
		___progressCounterLeft_7 = value;
		Il2CppCodeGenWriteBarrier((&___progressCounterLeft_7), value);
	}

	inline static int32_t get_offset_of_progressCounterRight_8() { return static_cast<int32_t>(offsetof(SceneLoader_t4130533360, ___progressCounterRight_8)); }
	inline Image_t2670269651 * get_progressCounterRight_8() const { return ___progressCounterRight_8; }
	inline Image_t2670269651 ** get_address_of_progressCounterRight_8() { return &___progressCounterRight_8; }
	inline void set_progressCounterRight_8(Image_t2670269651 * value)
	{
		___progressCounterRight_8 = value;
		Il2CppCodeGenWriteBarrier((&___progressCounterRight_8), value);
	}

	inline static int32_t get_offset_of_loaderHint_9() { return static_cast<int32_t>(offsetof(SceneLoader_t4130533360, ___loaderHint_9)); }
	inline TextMeshProUGUI_t529313277 * get_loaderHint_9() const { return ___loaderHint_9; }
	inline TextMeshProUGUI_t529313277 ** get_address_of_loaderHint_9() { return &___loaderHint_9; }
	inline void set_loaderHint_9(TextMeshProUGUI_t529313277 * value)
	{
		___loaderHint_9 = value;
		Il2CppCodeGenWriteBarrier((&___loaderHint_9), value);
	}

	inline static int32_t get_offset_of_fadeDuration_10() { return static_cast<int32_t>(offsetof(SceneLoader_t4130533360, ___fadeDuration_10)); }
	inline float get_fadeDuration_10() const { return ___fadeDuration_10; }
	inline float* get_address_of_fadeDuration_10() { return &___fadeDuration_10; }
	inline void set_fadeDuration_10(float value)
	{
		___fadeDuration_10 = value;
	}

	inline static int32_t get_offset_of_originalValue_11() { return static_cast<int32_t>(offsetof(SceneLoader_t4130533360, ___originalValue_11)); }
	inline float get_originalValue_11() const { return ___originalValue_11; }
	inline float* get_address_of_originalValue_11() { return &___originalValue_11; }
	inline void set_originalValue_11(float value)
	{
		___originalValue_11 = value;
	}

	inline static int32_t get_offset_of_loadProgress_12() { return static_cast<int32_t>(offsetof(SceneLoader_t4130533360, ___loadProgress_12)); }
	inline float get_loadProgress_12() const { return ___loadProgress_12; }
	inline float* get_address_of_loadProgress_12() { return &___loadProgress_12; }
	inline void set_loadProgress_12(float value)
	{
		___loadProgress_12 = value;
	}

	inline static int32_t get_offset_of_fadeValue_13() { return static_cast<int32_t>(offsetof(SceneLoader_t4130533360, ___fadeValue_13)); }
	inline float get_fadeValue_13() const { return ___fadeValue_13; }
	inline float* get_address_of_fadeValue_13() { return &___fadeValue_13; }
	inline void set_fadeValue_13(float value)
	{
		___fadeValue_13 = value;
	}

	inline static int32_t get_offset_of_loadAtStart_14() { return static_cast<int32_t>(offsetof(SceneLoader_t4130533360, ___loadAtStart_14)); }
	inline bool get_loadAtStart_14() const { return ___loadAtStart_14; }
	inline bool* get_address_of_loadAtStart_14() { return &___loadAtStart_14; }
	inline void set_loadAtStart_14(bool value)
	{
		___loadAtStart_14 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // SCENELOADER_T4130533360_H
#ifndef SHADER_LOD_ENUMERATOR_T1496692488_H
#define SHADER_LOD_ENUMERATOR_T1496692488_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// Shader_LOD_Enumerator
struct  Shader_LOD_Enumerator_t1496692488  : public MonoBehaviour_t3962482529
{
public:
	// UnityEngine.GameObject Shader_LOD_Enumerator::player
	GameObject_t1113636619 * ___player_4;
	// System.Single[] Shader_LOD_Enumerator::LOD_distance
	SingleU5BU5D_t1444911251* ___LOD_distance_5;
	// System.Boolean Shader_LOD_Enumerator::enableShaderLOD
	bool ___enableShaderLOD_6;
	// System.Boolean Shader_LOD_Enumerator::enableCulling
	bool ___enableCulling_7;
	// System.Single Shader_LOD_Enumerator::distance
	float ___distance_8;
	// UnityEngine.Vector3 Shader_LOD_Enumerator::viewPos
	Vector3_t3722313464  ___viewPos_9;
	// UnityEngine.Vector3 Shader_LOD_Enumerator::thisPos
	Vector3_t3722313464  ___thisPos_10;
	// UnityEngine.Vector3 Shader_LOD_Enumerator::playerPos
	Vector3_t3722313464  ___playerPos_11;
	// System.Int32 Shader_LOD_Enumerator::tick
	int32_t ___tick_12;
	// UnityEngine.Renderer Shader_LOD_Enumerator::thisRenderer
	Renderer_t2627027031 * ___thisRenderer_13;
	// UnityEngine.Camera Shader_LOD_Enumerator::mainCam
	Camera_t4157153871 * ___mainCam_14;

public:
	inline static int32_t get_offset_of_player_4() { return static_cast<int32_t>(offsetof(Shader_LOD_Enumerator_t1496692488, ___player_4)); }
	inline GameObject_t1113636619 * get_player_4() const { return ___player_4; }
	inline GameObject_t1113636619 ** get_address_of_player_4() { return &___player_4; }
	inline void set_player_4(GameObject_t1113636619 * value)
	{
		___player_4 = value;
		Il2CppCodeGenWriteBarrier((&___player_4), value);
	}

	inline static int32_t get_offset_of_LOD_distance_5() { return static_cast<int32_t>(offsetof(Shader_LOD_Enumerator_t1496692488, ___LOD_distance_5)); }
	inline SingleU5BU5D_t1444911251* get_LOD_distance_5() const { return ___LOD_distance_5; }
	inline SingleU5BU5D_t1444911251** get_address_of_LOD_distance_5() { return &___LOD_distance_5; }
	inline void set_LOD_distance_5(SingleU5BU5D_t1444911251* value)
	{
		___LOD_distance_5 = value;
		Il2CppCodeGenWriteBarrier((&___LOD_distance_5), value);
	}

	inline static int32_t get_offset_of_enableShaderLOD_6() { return static_cast<int32_t>(offsetof(Shader_LOD_Enumerator_t1496692488, ___enableShaderLOD_6)); }
	inline bool get_enableShaderLOD_6() const { return ___enableShaderLOD_6; }
	inline bool* get_address_of_enableShaderLOD_6() { return &___enableShaderLOD_6; }
	inline void set_enableShaderLOD_6(bool value)
	{
		___enableShaderLOD_6 = value;
	}

	inline static int32_t get_offset_of_enableCulling_7() { return static_cast<int32_t>(offsetof(Shader_LOD_Enumerator_t1496692488, ___enableCulling_7)); }
	inline bool get_enableCulling_7() const { return ___enableCulling_7; }
	inline bool* get_address_of_enableCulling_7() { return &___enableCulling_7; }
	inline void set_enableCulling_7(bool value)
	{
		___enableCulling_7 = value;
	}

	inline static int32_t get_offset_of_distance_8() { return static_cast<int32_t>(offsetof(Shader_LOD_Enumerator_t1496692488, ___distance_8)); }
	inline float get_distance_8() const { return ___distance_8; }
	inline float* get_address_of_distance_8() { return &___distance_8; }
	inline void set_distance_8(float value)
	{
		___distance_8 = value;
	}

	inline static int32_t get_offset_of_viewPos_9() { return static_cast<int32_t>(offsetof(Shader_LOD_Enumerator_t1496692488, ___viewPos_9)); }
	inline Vector3_t3722313464  get_viewPos_9() const { return ___viewPos_9; }
	inline Vector3_t3722313464 * get_address_of_viewPos_9() { return &___viewPos_9; }
	inline void set_viewPos_9(Vector3_t3722313464  value)
	{
		___viewPos_9 = value;
	}

	inline static int32_t get_offset_of_thisPos_10() { return static_cast<int32_t>(offsetof(Shader_LOD_Enumerator_t1496692488, ___thisPos_10)); }
	inline Vector3_t3722313464  get_thisPos_10() const { return ___thisPos_10; }
	inline Vector3_t3722313464 * get_address_of_thisPos_10() { return &___thisPos_10; }
	inline void set_thisPos_10(Vector3_t3722313464  value)
	{
		___thisPos_10 = value;
	}

	inline static int32_t get_offset_of_playerPos_11() { return static_cast<int32_t>(offsetof(Shader_LOD_Enumerator_t1496692488, ___playerPos_11)); }
	inline Vector3_t3722313464  get_playerPos_11() const { return ___playerPos_11; }
	inline Vector3_t3722313464 * get_address_of_playerPos_11() { return &___playerPos_11; }
	inline void set_playerPos_11(Vector3_t3722313464  value)
	{
		___playerPos_11 = value;
	}

	inline static int32_t get_offset_of_tick_12() { return static_cast<int32_t>(offsetof(Shader_LOD_Enumerator_t1496692488, ___tick_12)); }
	inline int32_t get_tick_12() const { return ___tick_12; }
	inline int32_t* get_address_of_tick_12() { return &___tick_12; }
	inline void set_tick_12(int32_t value)
	{
		___tick_12 = value;
	}

	inline static int32_t get_offset_of_thisRenderer_13() { return static_cast<int32_t>(offsetof(Shader_LOD_Enumerator_t1496692488, ___thisRenderer_13)); }
	inline Renderer_t2627027031 * get_thisRenderer_13() const { return ___thisRenderer_13; }
	inline Renderer_t2627027031 ** get_address_of_thisRenderer_13() { return &___thisRenderer_13; }
	inline void set_thisRenderer_13(Renderer_t2627027031 * value)
	{
		___thisRenderer_13 = value;
		Il2CppCodeGenWriteBarrier((&___thisRenderer_13), value);
	}

	inline static int32_t get_offset_of_mainCam_14() { return static_cast<int32_t>(offsetof(Shader_LOD_Enumerator_t1496692488, ___mainCam_14)); }
	inline Camera_t4157153871 * get_mainCam_14() const { return ___mainCam_14; }
	inline Camera_t4157153871 ** get_address_of_mainCam_14() { return &___mainCam_14; }
	inline void set_mainCam_14(Camera_t4157153871 * value)
	{
		___mainCam_14 = value;
		Il2CppCodeGenWriteBarrier((&___mainCam_14), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // SHADER_LOD_ENUMERATOR_T1496692488_H
#ifndef STARTMENUMANAGERINPUTS_T1631812305_H
#define STARTMENUMANAGERINPUTS_T1631812305_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// StartMenuManagerInputs
struct  StartMenuManagerInputs_t1631812305  : public MonoBehaviour_t3962482529
{
public:
	// System.Int32 StartMenuManagerInputs::selectedSlot
	int32_t ___selectedSlot_15;
	// UnityEngine.Color StartMenuManagerInputs::baseColor
	Color_t2555686324  ___baseColor_16;
	// UnityEngine.Color StartMenuManagerInputs::hilightColor
	Color_t2555686324  ___hilightColor_17;
	// UnityEngine.Color StartMenuManagerInputs::selectedColor
	Color_t2555686324  ___selectedColor_18;
	// UnityEngine.UI.Image StartMenuManagerInputs::slot0
	Image_t2670269651 * ___slot0_19;
	// UnityEngine.UI.Image StartMenuManagerInputs::slot1
	Image_t2670269651 * ___slot1_20;
	// UnityEngine.UI.Image StartMenuManagerInputs::slot2
	Image_t2670269651 * ___slot2_21;
	// UnityEngine.GameObject StartMenuManagerInputs::saveManager
	GameObject_t1113636619 * ___saveManager_22;
	// UnityEngine.GameObject StartMenuManagerInputs::optionsManager
	GameObject_t1113636619 * ___optionsManager_23;
	// UnityEngine.GameObject StartMenuManagerInputs::ButtonManager
	GameObject_t1113636619 * ___ButtonManager_24;
	// UnityEngine.CanvasGroup StartMenuManagerInputs::loaderCanvas
	CanvasGroup_t4083511760 * ___loaderCanvas_25;
	// UnityEngine.CanvasGroup StartMenuManagerInputs::optionCanvas
	CanvasGroup_t4083511760 * ___optionCanvas_26;
	// UnityEngine.CanvasGroup StartMenuManagerInputs::loadDialogGroup
	CanvasGroup_t4083511760 * ___loadDialogGroup_27;
	// System.Single StartMenuManagerInputs::fadeDuration
	float ___fadeDuration_28;
	// System.Single StartMenuManagerInputs::targetValue
	float ___targetValue_29;
	// System.Boolean StartMenuManagerInputs::loaderEnabled
	bool ___loaderEnabled_30;
	// System.Boolean StartMenuManagerInputs::optionEnabled
	bool ___optionEnabled_31;
	// System.Boolean StartMenuManagerInputs::menuEnabled
	bool ___menuEnabled_32;
	// System.Single StartMenuManagerInputs::timer
	float ___timer_33;
	// System.Single StartMenuManagerInputs::duration
	float ___duration_34;
	// UnityEngine.AsyncOperation StartMenuManagerInputs::loadingOperation
	AsyncOperation_t1445031843 * ___loadingOperation_35;
	// UnityEngine.CanvasGroup StartMenuManagerInputs::canvasGroup
	CanvasGroup_t4083511760 * ___canvasGroup_36;
	// UnityEngine.CanvasGroup StartMenuManagerInputs::selectedCanvas
	CanvasGroup_t4083511760 * ___selectedCanvas_37;
	// UnityEngine.GameObject StartMenuManagerInputs::audioManager
	GameObject_t1113636619 * ___audioManager_38;
	// System.Single StartMenuManagerInputs::loadProgress
	float ___loadProgress_39;
	// System.Boolean StartMenuManagerInputs::loading
	bool ___loading_40;
	// System.Boolean StartMenuManagerInputs::loadDialogEnabled
	bool ___loadDialogEnabled_41;
	// System.Boolean StartMenuManagerInputs::delayTimer
	bool ___delayTimer_42;
	// System.Collections.Generic.List`1<UnityEngine.AudioClip> StartMenuManagerInputs::clipList
	List_1_t857997111 * ___clipList_43;
	// UnityEngine.AudioSource StartMenuManagerInputs::audioSource
	AudioSource_t3935305588 * ___audioSource_44;
	// UnityEngine.GameObject StartMenuManagerInputs::currentSelection
	GameObject_t1113636619 * ___currentSelection_45;
	// UnityEngine.Animation StartMenuManagerInputs::anim
	Animation_t3648466861 * ___anim_46;

public:
	inline static int32_t get_offset_of_selectedSlot_15() { return static_cast<int32_t>(offsetof(StartMenuManagerInputs_t1631812305, ___selectedSlot_15)); }
	inline int32_t get_selectedSlot_15() const { return ___selectedSlot_15; }
	inline int32_t* get_address_of_selectedSlot_15() { return &___selectedSlot_15; }
	inline void set_selectedSlot_15(int32_t value)
	{
		___selectedSlot_15 = value;
	}

	inline static int32_t get_offset_of_baseColor_16() { return static_cast<int32_t>(offsetof(StartMenuManagerInputs_t1631812305, ___baseColor_16)); }
	inline Color_t2555686324  get_baseColor_16() const { return ___baseColor_16; }
	inline Color_t2555686324 * get_address_of_baseColor_16() { return &___baseColor_16; }
	inline void set_baseColor_16(Color_t2555686324  value)
	{
		___baseColor_16 = value;
	}

	inline static int32_t get_offset_of_hilightColor_17() { return static_cast<int32_t>(offsetof(StartMenuManagerInputs_t1631812305, ___hilightColor_17)); }
	inline Color_t2555686324  get_hilightColor_17() const { return ___hilightColor_17; }
	inline Color_t2555686324 * get_address_of_hilightColor_17() { return &___hilightColor_17; }
	inline void set_hilightColor_17(Color_t2555686324  value)
	{
		___hilightColor_17 = value;
	}

	inline static int32_t get_offset_of_selectedColor_18() { return static_cast<int32_t>(offsetof(StartMenuManagerInputs_t1631812305, ___selectedColor_18)); }
	inline Color_t2555686324  get_selectedColor_18() const { return ___selectedColor_18; }
	inline Color_t2555686324 * get_address_of_selectedColor_18() { return &___selectedColor_18; }
	inline void set_selectedColor_18(Color_t2555686324  value)
	{
		___selectedColor_18 = value;
	}

	inline static int32_t get_offset_of_slot0_19() { return static_cast<int32_t>(offsetof(StartMenuManagerInputs_t1631812305, ___slot0_19)); }
	inline Image_t2670269651 * get_slot0_19() const { return ___slot0_19; }
	inline Image_t2670269651 ** get_address_of_slot0_19() { return &___slot0_19; }
	inline void set_slot0_19(Image_t2670269651 * value)
	{
		___slot0_19 = value;
		Il2CppCodeGenWriteBarrier((&___slot0_19), value);
	}

	inline static int32_t get_offset_of_slot1_20() { return static_cast<int32_t>(offsetof(StartMenuManagerInputs_t1631812305, ___slot1_20)); }
	inline Image_t2670269651 * get_slot1_20() const { return ___slot1_20; }
	inline Image_t2670269651 ** get_address_of_slot1_20() { return &___slot1_20; }
	inline void set_slot1_20(Image_t2670269651 * value)
	{
		___slot1_20 = value;
		Il2CppCodeGenWriteBarrier((&___slot1_20), value);
	}

	inline static int32_t get_offset_of_slot2_21() { return static_cast<int32_t>(offsetof(StartMenuManagerInputs_t1631812305, ___slot2_21)); }
	inline Image_t2670269651 * get_slot2_21() const { return ___slot2_21; }
	inline Image_t2670269651 ** get_address_of_slot2_21() { return &___slot2_21; }
	inline void set_slot2_21(Image_t2670269651 * value)
	{
		___slot2_21 = value;
		Il2CppCodeGenWriteBarrier((&___slot2_21), value);
	}

	inline static int32_t get_offset_of_saveManager_22() { return static_cast<int32_t>(offsetof(StartMenuManagerInputs_t1631812305, ___saveManager_22)); }
	inline GameObject_t1113636619 * get_saveManager_22() const { return ___saveManager_22; }
	inline GameObject_t1113636619 ** get_address_of_saveManager_22() { return &___saveManager_22; }
	inline void set_saveManager_22(GameObject_t1113636619 * value)
	{
		___saveManager_22 = value;
		Il2CppCodeGenWriteBarrier((&___saveManager_22), value);
	}

	inline static int32_t get_offset_of_optionsManager_23() { return static_cast<int32_t>(offsetof(StartMenuManagerInputs_t1631812305, ___optionsManager_23)); }
	inline GameObject_t1113636619 * get_optionsManager_23() const { return ___optionsManager_23; }
	inline GameObject_t1113636619 ** get_address_of_optionsManager_23() { return &___optionsManager_23; }
	inline void set_optionsManager_23(GameObject_t1113636619 * value)
	{
		___optionsManager_23 = value;
		Il2CppCodeGenWriteBarrier((&___optionsManager_23), value);
	}

	inline static int32_t get_offset_of_ButtonManager_24() { return static_cast<int32_t>(offsetof(StartMenuManagerInputs_t1631812305, ___ButtonManager_24)); }
	inline GameObject_t1113636619 * get_ButtonManager_24() const { return ___ButtonManager_24; }
	inline GameObject_t1113636619 ** get_address_of_ButtonManager_24() { return &___ButtonManager_24; }
	inline void set_ButtonManager_24(GameObject_t1113636619 * value)
	{
		___ButtonManager_24 = value;
		Il2CppCodeGenWriteBarrier((&___ButtonManager_24), value);
	}

	inline static int32_t get_offset_of_loaderCanvas_25() { return static_cast<int32_t>(offsetof(StartMenuManagerInputs_t1631812305, ___loaderCanvas_25)); }
	inline CanvasGroup_t4083511760 * get_loaderCanvas_25() const { return ___loaderCanvas_25; }
	inline CanvasGroup_t4083511760 ** get_address_of_loaderCanvas_25() { return &___loaderCanvas_25; }
	inline void set_loaderCanvas_25(CanvasGroup_t4083511760 * value)
	{
		___loaderCanvas_25 = value;
		Il2CppCodeGenWriteBarrier((&___loaderCanvas_25), value);
	}

	inline static int32_t get_offset_of_optionCanvas_26() { return static_cast<int32_t>(offsetof(StartMenuManagerInputs_t1631812305, ___optionCanvas_26)); }
	inline CanvasGroup_t4083511760 * get_optionCanvas_26() const { return ___optionCanvas_26; }
	inline CanvasGroup_t4083511760 ** get_address_of_optionCanvas_26() { return &___optionCanvas_26; }
	inline void set_optionCanvas_26(CanvasGroup_t4083511760 * value)
	{
		___optionCanvas_26 = value;
		Il2CppCodeGenWriteBarrier((&___optionCanvas_26), value);
	}

	inline static int32_t get_offset_of_loadDialogGroup_27() { return static_cast<int32_t>(offsetof(StartMenuManagerInputs_t1631812305, ___loadDialogGroup_27)); }
	inline CanvasGroup_t4083511760 * get_loadDialogGroup_27() const { return ___loadDialogGroup_27; }
	inline CanvasGroup_t4083511760 ** get_address_of_loadDialogGroup_27() { return &___loadDialogGroup_27; }
	inline void set_loadDialogGroup_27(CanvasGroup_t4083511760 * value)
	{
		___loadDialogGroup_27 = value;
		Il2CppCodeGenWriteBarrier((&___loadDialogGroup_27), value);
	}

	inline static int32_t get_offset_of_fadeDuration_28() { return static_cast<int32_t>(offsetof(StartMenuManagerInputs_t1631812305, ___fadeDuration_28)); }
	inline float get_fadeDuration_28() const { return ___fadeDuration_28; }
	inline float* get_address_of_fadeDuration_28() { return &___fadeDuration_28; }
	inline void set_fadeDuration_28(float value)
	{
		___fadeDuration_28 = value;
	}

	inline static int32_t get_offset_of_targetValue_29() { return static_cast<int32_t>(offsetof(StartMenuManagerInputs_t1631812305, ___targetValue_29)); }
	inline float get_targetValue_29() const { return ___targetValue_29; }
	inline float* get_address_of_targetValue_29() { return &___targetValue_29; }
	inline void set_targetValue_29(float value)
	{
		___targetValue_29 = value;
	}

	inline static int32_t get_offset_of_loaderEnabled_30() { return static_cast<int32_t>(offsetof(StartMenuManagerInputs_t1631812305, ___loaderEnabled_30)); }
	inline bool get_loaderEnabled_30() const { return ___loaderEnabled_30; }
	inline bool* get_address_of_loaderEnabled_30() { return &___loaderEnabled_30; }
	inline void set_loaderEnabled_30(bool value)
	{
		___loaderEnabled_30 = value;
	}

	inline static int32_t get_offset_of_optionEnabled_31() { return static_cast<int32_t>(offsetof(StartMenuManagerInputs_t1631812305, ___optionEnabled_31)); }
	inline bool get_optionEnabled_31() const { return ___optionEnabled_31; }
	inline bool* get_address_of_optionEnabled_31() { return &___optionEnabled_31; }
	inline void set_optionEnabled_31(bool value)
	{
		___optionEnabled_31 = value;
	}

	inline static int32_t get_offset_of_menuEnabled_32() { return static_cast<int32_t>(offsetof(StartMenuManagerInputs_t1631812305, ___menuEnabled_32)); }
	inline bool get_menuEnabled_32() const { return ___menuEnabled_32; }
	inline bool* get_address_of_menuEnabled_32() { return &___menuEnabled_32; }
	inline void set_menuEnabled_32(bool value)
	{
		___menuEnabled_32 = value;
	}

	inline static int32_t get_offset_of_timer_33() { return static_cast<int32_t>(offsetof(StartMenuManagerInputs_t1631812305, ___timer_33)); }
	inline float get_timer_33() const { return ___timer_33; }
	inline float* get_address_of_timer_33() { return &___timer_33; }
	inline void set_timer_33(float value)
	{
		___timer_33 = value;
	}

	inline static int32_t get_offset_of_duration_34() { return static_cast<int32_t>(offsetof(StartMenuManagerInputs_t1631812305, ___duration_34)); }
	inline float get_duration_34() const { return ___duration_34; }
	inline float* get_address_of_duration_34() { return &___duration_34; }
	inline void set_duration_34(float value)
	{
		___duration_34 = value;
	}

	inline static int32_t get_offset_of_loadingOperation_35() { return static_cast<int32_t>(offsetof(StartMenuManagerInputs_t1631812305, ___loadingOperation_35)); }
	inline AsyncOperation_t1445031843 * get_loadingOperation_35() const { return ___loadingOperation_35; }
	inline AsyncOperation_t1445031843 ** get_address_of_loadingOperation_35() { return &___loadingOperation_35; }
	inline void set_loadingOperation_35(AsyncOperation_t1445031843 * value)
	{
		___loadingOperation_35 = value;
		Il2CppCodeGenWriteBarrier((&___loadingOperation_35), value);
	}

	inline static int32_t get_offset_of_canvasGroup_36() { return static_cast<int32_t>(offsetof(StartMenuManagerInputs_t1631812305, ___canvasGroup_36)); }
	inline CanvasGroup_t4083511760 * get_canvasGroup_36() const { return ___canvasGroup_36; }
	inline CanvasGroup_t4083511760 ** get_address_of_canvasGroup_36() { return &___canvasGroup_36; }
	inline void set_canvasGroup_36(CanvasGroup_t4083511760 * value)
	{
		___canvasGroup_36 = value;
		Il2CppCodeGenWriteBarrier((&___canvasGroup_36), value);
	}

	inline static int32_t get_offset_of_selectedCanvas_37() { return static_cast<int32_t>(offsetof(StartMenuManagerInputs_t1631812305, ___selectedCanvas_37)); }
	inline CanvasGroup_t4083511760 * get_selectedCanvas_37() const { return ___selectedCanvas_37; }
	inline CanvasGroup_t4083511760 ** get_address_of_selectedCanvas_37() { return &___selectedCanvas_37; }
	inline void set_selectedCanvas_37(CanvasGroup_t4083511760 * value)
	{
		___selectedCanvas_37 = value;
		Il2CppCodeGenWriteBarrier((&___selectedCanvas_37), value);
	}

	inline static int32_t get_offset_of_audioManager_38() { return static_cast<int32_t>(offsetof(StartMenuManagerInputs_t1631812305, ___audioManager_38)); }
	inline GameObject_t1113636619 * get_audioManager_38() const { return ___audioManager_38; }
	inline GameObject_t1113636619 ** get_address_of_audioManager_38() { return &___audioManager_38; }
	inline void set_audioManager_38(GameObject_t1113636619 * value)
	{
		___audioManager_38 = value;
		Il2CppCodeGenWriteBarrier((&___audioManager_38), value);
	}

	inline static int32_t get_offset_of_loadProgress_39() { return static_cast<int32_t>(offsetof(StartMenuManagerInputs_t1631812305, ___loadProgress_39)); }
	inline float get_loadProgress_39() const { return ___loadProgress_39; }
	inline float* get_address_of_loadProgress_39() { return &___loadProgress_39; }
	inline void set_loadProgress_39(float value)
	{
		___loadProgress_39 = value;
	}

	inline static int32_t get_offset_of_loading_40() { return static_cast<int32_t>(offsetof(StartMenuManagerInputs_t1631812305, ___loading_40)); }
	inline bool get_loading_40() const { return ___loading_40; }
	inline bool* get_address_of_loading_40() { return &___loading_40; }
	inline void set_loading_40(bool value)
	{
		___loading_40 = value;
	}

	inline static int32_t get_offset_of_loadDialogEnabled_41() { return static_cast<int32_t>(offsetof(StartMenuManagerInputs_t1631812305, ___loadDialogEnabled_41)); }
	inline bool get_loadDialogEnabled_41() const { return ___loadDialogEnabled_41; }
	inline bool* get_address_of_loadDialogEnabled_41() { return &___loadDialogEnabled_41; }
	inline void set_loadDialogEnabled_41(bool value)
	{
		___loadDialogEnabled_41 = value;
	}

	inline static int32_t get_offset_of_delayTimer_42() { return static_cast<int32_t>(offsetof(StartMenuManagerInputs_t1631812305, ___delayTimer_42)); }
	inline bool get_delayTimer_42() const { return ___delayTimer_42; }
	inline bool* get_address_of_delayTimer_42() { return &___delayTimer_42; }
	inline void set_delayTimer_42(bool value)
	{
		___delayTimer_42 = value;
	}

	inline static int32_t get_offset_of_clipList_43() { return static_cast<int32_t>(offsetof(StartMenuManagerInputs_t1631812305, ___clipList_43)); }
	inline List_1_t857997111 * get_clipList_43() const { return ___clipList_43; }
	inline List_1_t857997111 ** get_address_of_clipList_43() { return &___clipList_43; }
	inline void set_clipList_43(List_1_t857997111 * value)
	{
		___clipList_43 = value;
		Il2CppCodeGenWriteBarrier((&___clipList_43), value);
	}

	inline static int32_t get_offset_of_audioSource_44() { return static_cast<int32_t>(offsetof(StartMenuManagerInputs_t1631812305, ___audioSource_44)); }
	inline AudioSource_t3935305588 * get_audioSource_44() const { return ___audioSource_44; }
	inline AudioSource_t3935305588 ** get_address_of_audioSource_44() { return &___audioSource_44; }
	inline void set_audioSource_44(AudioSource_t3935305588 * value)
	{
		___audioSource_44 = value;
		Il2CppCodeGenWriteBarrier((&___audioSource_44), value);
	}

	inline static int32_t get_offset_of_currentSelection_45() { return static_cast<int32_t>(offsetof(StartMenuManagerInputs_t1631812305, ___currentSelection_45)); }
	inline GameObject_t1113636619 * get_currentSelection_45() const { return ___currentSelection_45; }
	inline GameObject_t1113636619 ** get_address_of_currentSelection_45() { return &___currentSelection_45; }
	inline void set_currentSelection_45(GameObject_t1113636619 * value)
	{
		___currentSelection_45 = value;
		Il2CppCodeGenWriteBarrier((&___currentSelection_45), value);
	}

	inline static int32_t get_offset_of_anim_46() { return static_cast<int32_t>(offsetof(StartMenuManagerInputs_t1631812305, ___anim_46)); }
	inline Animation_t3648466861 * get_anim_46() const { return ___anim_46; }
	inline Animation_t3648466861 ** get_address_of_anim_46() { return &___anim_46; }
	inline void set_anim_46(Animation_t3648466861 * value)
	{
		___anim_46 = value;
		Il2CppCodeGenWriteBarrier((&___anim_46), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // STARTMENUMANAGERINPUTS_T1631812305_H
#ifndef TITLESAVEMANAGERINPUTS_T2244120510_H
#define TITLESAVEMANAGERINPUTS_T2244120510_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// TitleSaveManagerInputs
struct  TitleSaveManagerInputs_t2244120510  : public MonoBehaviour_t3962482529
{
public:
	// System.Int32 TitleSaveManagerInputs::selectedSlot
	int32_t ___selectedSlot_15;
	// UnityEngine.Color TitleSaveManagerInputs::baseColor
	Color_t2555686324  ___baseColor_16;
	// UnityEngine.Color TitleSaveManagerInputs::hilightColor
	Color_t2555686324  ___hilightColor_17;
	// UnityEngine.Color TitleSaveManagerInputs::loadedColor
	Color_t2555686324  ___loadedColor_18;
	// UnityEngine.Color TitleSaveManagerInputs::savedColor
	Color_t2555686324  ___savedColor_19;
	// UnityEngine.UI.Image TitleSaveManagerInputs::slot1
	Image_t2670269651 * ___slot1_20;
	// UnityEngine.UI.Image TitleSaveManagerInputs::slot2
	Image_t2670269651 * ___slot2_21;
	// UnityEngine.UI.Image TitleSaveManagerInputs::slot3
	Image_t2670269651 * ___slot3_22;
	// UnityEngine.AsyncOperation TitleSaveManagerInputs::loadingOperation
	AsyncOperation_t1445031843 * ___loadingOperation_23;
	// UnityEngine.GameObject TitleSaveManagerInputs::EventManager
	GameObject_t1113636619 * ___EventManager_24;
	// UnityEngine.GameObject TitleSaveManagerInputs::ButtonManager
	GameObject_t1113636619 * ___ButtonManager_25;
	// UnityEngine.GameObject TitleSaveManagerInputs::menuManager
	GameObject_t1113636619 * ___menuManager_26;
	// UnityEngine.CanvasGroup TitleSaveManagerInputs::menuGroup
	CanvasGroup_t4083511760 * ___menuGroup_27;
	// UnityEngine.CanvasGroup TitleSaveManagerInputs::saveGroup
	CanvasGroup_t4083511760 * ___saveGroup_28;
	// UnityEngine.CanvasGroup TitleSaveManagerInputs::loadDialogGroup
	CanvasGroup_t4083511760 * ___loadDialogGroup_29;
	// UnityEngine.GameObject TitleSaveManagerInputs::audioManager
	GameObject_t1113636619 * ___audioManager_30;
	// System.Single TitleSaveManagerInputs::fadeDuration
	float ___fadeDuration_31;
	// System.Single TitleSaveManagerInputs::targetValue
	float ___targetValue_32;
	// System.Single TitleSaveManagerInputs::loadProgress
	float ___loadProgress_33;
	// System.Boolean TitleSaveManagerInputs::loading
	bool ___loading_34;
	// System.Single TitleSaveManagerInputs::timer
	float ___timer_35;
	// System.Single TitleSaveManagerInputs::delay
	float ___delay_36;
	// System.Collections.Generic.List`1<UnityEngine.AudioClip> TitleSaveManagerInputs::clipList
	List_1_t857997111 * ___clipList_37;
	// UnityEngine.AudioSource TitleSaveManagerInputs::audioSource
	AudioSource_t3935305588 * ___audioSource_38;
	// UnityEngine.UI.Text TitleSaveManagerInputs::slot1Text
	Text_t1901882714 * ___slot1Text_39;
	// UnityEngine.UI.Text TitleSaveManagerInputs::slot2Text
	Text_t1901882714 * ___slot2Text_40;
	// UnityEngine.UI.Text TitleSaveManagerInputs::slot3Text
	Text_t1901882714 * ___slot3Text_41;
	// System.String TitleSaveManagerInputs::slot1String
	String_t* ___slot1String_42;
	// System.String TitleSaveManagerInputs::slot2String
	String_t* ___slot2String_43;
	// System.String TitleSaveManagerInputs::slot3String
	String_t* ___slot3String_44;
	// UnityEngine.GameObject TitleSaveManagerInputs::currentSelection
	GameObject_t1113636619 * ___currentSelection_45;
	// UnityEngine.Animation TitleSaveManagerInputs::anim
	Animation_t3648466861 * ___anim_46;

public:
	inline static int32_t get_offset_of_selectedSlot_15() { return static_cast<int32_t>(offsetof(TitleSaveManagerInputs_t2244120510, ___selectedSlot_15)); }
	inline int32_t get_selectedSlot_15() const { return ___selectedSlot_15; }
	inline int32_t* get_address_of_selectedSlot_15() { return &___selectedSlot_15; }
	inline void set_selectedSlot_15(int32_t value)
	{
		___selectedSlot_15 = value;
	}

	inline static int32_t get_offset_of_baseColor_16() { return static_cast<int32_t>(offsetof(TitleSaveManagerInputs_t2244120510, ___baseColor_16)); }
	inline Color_t2555686324  get_baseColor_16() const { return ___baseColor_16; }
	inline Color_t2555686324 * get_address_of_baseColor_16() { return &___baseColor_16; }
	inline void set_baseColor_16(Color_t2555686324  value)
	{
		___baseColor_16 = value;
	}

	inline static int32_t get_offset_of_hilightColor_17() { return static_cast<int32_t>(offsetof(TitleSaveManagerInputs_t2244120510, ___hilightColor_17)); }
	inline Color_t2555686324  get_hilightColor_17() const { return ___hilightColor_17; }
	inline Color_t2555686324 * get_address_of_hilightColor_17() { return &___hilightColor_17; }
	inline void set_hilightColor_17(Color_t2555686324  value)
	{
		___hilightColor_17 = value;
	}

	inline static int32_t get_offset_of_loadedColor_18() { return static_cast<int32_t>(offsetof(TitleSaveManagerInputs_t2244120510, ___loadedColor_18)); }
	inline Color_t2555686324  get_loadedColor_18() const { return ___loadedColor_18; }
	inline Color_t2555686324 * get_address_of_loadedColor_18() { return &___loadedColor_18; }
	inline void set_loadedColor_18(Color_t2555686324  value)
	{
		___loadedColor_18 = value;
	}

	inline static int32_t get_offset_of_savedColor_19() { return static_cast<int32_t>(offsetof(TitleSaveManagerInputs_t2244120510, ___savedColor_19)); }
	inline Color_t2555686324  get_savedColor_19() const { return ___savedColor_19; }
	inline Color_t2555686324 * get_address_of_savedColor_19() { return &___savedColor_19; }
	inline void set_savedColor_19(Color_t2555686324  value)
	{
		___savedColor_19 = value;
	}

	inline static int32_t get_offset_of_slot1_20() { return static_cast<int32_t>(offsetof(TitleSaveManagerInputs_t2244120510, ___slot1_20)); }
	inline Image_t2670269651 * get_slot1_20() const { return ___slot1_20; }
	inline Image_t2670269651 ** get_address_of_slot1_20() { return &___slot1_20; }
	inline void set_slot1_20(Image_t2670269651 * value)
	{
		___slot1_20 = value;
		Il2CppCodeGenWriteBarrier((&___slot1_20), value);
	}

	inline static int32_t get_offset_of_slot2_21() { return static_cast<int32_t>(offsetof(TitleSaveManagerInputs_t2244120510, ___slot2_21)); }
	inline Image_t2670269651 * get_slot2_21() const { return ___slot2_21; }
	inline Image_t2670269651 ** get_address_of_slot2_21() { return &___slot2_21; }
	inline void set_slot2_21(Image_t2670269651 * value)
	{
		___slot2_21 = value;
		Il2CppCodeGenWriteBarrier((&___slot2_21), value);
	}

	inline static int32_t get_offset_of_slot3_22() { return static_cast<int32_t>(offsetof(TitleSaveManagerInputs_t2244120510, ___slot3_22)); }
	inline Image_t2670269651 * get_slot3_22() const { return ___slot3_22; }
	inline Image_t2670269651 ** get_address_of_slot3_22() { return &___slot3_22; }
	inline void set_slot3_22(Image_t2670269651 * value)
	{
		___slot3_22 = value;
		Il2CppCodeGenWriteBarrier((&___slot3_22), value);
	}

	inline static int32_t get_offset_of_loadingOperation_23() { return static_cast<int32_t>(offsetof(TitleSaveManagerInputs_t2244120510, ___loadingOperation_23)); }
	inline AsyncOperation_t1445031843 * get_loadingOperation_23() const { return ___loadingOperation_23; }
	inline AsyncOperation_t1445031843 ** get_address_of_loadingOperation_23() { return &___loadingOperation_23; }
	inline void set_loadingOperation_23(AsyncOperation_t1445031843 * value)
	{
		___loadingOperation_23 = value;
		Il2CppCodeGenWriteBarrier((&___loadingOperation_23), value);
	}

	inline static int32_t get_offset_of_EventManager_24() { return static_cast<int32_t>(offsetof(TitleSaveManagerInputs_t2244120510, ___EventManager_24)); }
	inline GameObject_t1113636619 * get_EventManager_24() const { return ___EventManager_24; }
	inline GameObject_t1113636619 ** get_address_of_EventManager_24() { return &___EventManager_24; }
	inline void set_EventManager_24(GameObject_t1113636619 * value)
	{
		___EventManager_24 = value;
		Il2CppCodeGenWriteBarrier((&___EventManager_24), value);
	}

	inline static int32_t get_offset_of_ButtonManager_25() { return static_cast<int32_t>(offsetof(TitleSaveManagerInputs_t2244120510, ___ButtonManager_25)); }
	inline GameObject_t1113636619 * get_ButtonManager_25() const { return ___ButtonManager_25; }
	inline GameObject_t1113636619 ** get_address_of_ButtonManager_25() { return &___ButtonManager_25; }
	inline void set_ButtonManager_25(GameObject_t1113636619 * value)
	{
		___ButtonManager_25 = value;
		Il2CppCodeGenWriteBarrier((&___ButtonManager_25), value);
	}

	inline static int32_t get_offset_of_menuManager_26() { return static_cast<int32_t>(offsetof(TitleSaveManagerInputs_t2244120510, ___menuManager_26)); }
	inline GameObject_t1113636619 * get_menuManager_26() const { return ___menuManager_26; }
	inline GameObject_t1113636619 ** get_address_of_menuManager_26() { return &___menuManager_26; }
	inline void set_menuManager_26(GameObject_t1113636619 * value)
	{
		___menuManager_26 = value;
		Il2CppCodeGenWriteBarrier((&___menuManager_26), value);
	}

	inline static int32_t get_offset_of_menuGroup_27() { return static_cast<int32_t>(offsetof(TitleSaveManagerInputs_t2244120510, ___menuGroup_27)); }
	inline CanvasGroup_t4083511760 * get_menuGroup_27() const { return ___menuGroup_27; }
	inline CanvasGroup_t4083511760 ** get_address_of_menuGroup_27() { return &___menuGroup_27; }
	inline void set_menuGroup_27(CanvasGroup_t4083511760 * value)
	{
		___menuGroup_27 = value;
		Il2CppCodeGenWriteBarrier((&___menuGroup_27), value);
	}

	inline static int32_t get_offset_of_saveGroup_28() { return static_cast<int32_t>(offsetof(TitleSaveManagerInputs_t2244120510, ___saveGroup_28)); }
	inline CanvasGroup_t4083511760 * get_saveGroup_28() const { return ___saveGroup_28; }
	inline CanvasGroup_t4083511760 ** get_address_of_saveGroup_28() { return &___saveGroup_28; }
	inline void set_saveGroup_28(CanvasGroup_t4083511760 * value)
	{
		___saveGroup_28 = value;
		Il2CppCodeGenWriteBarrier((&___saveGroup_28), value);
	}

	inline static int32_t get_offset_of_loadDialogGroup_29() { return static_cast<int32_t>(offsetof(TitleSaveManagerInputs_t2244120510, ___loadDialogGroup_29)); }
	inline CanvasGroup_t4083511760 * get_loadDialogGroup_29() const { return ___loadDialogGroup_29; }
	inline CanvasGroup_t4083511760 ** get_address_of_loadDialogGroup_29() { return &___loadDialogGroup_29; }
	inline void set_loadDialogGroup_29(CanvasGroup_t4083511760 * value)
	{
		___loadDialogGroup_29 = value;
		Il2CppCodeGenWriteBarrier((&___loadDialogGroup_29), value);
	}

	inline static int32_t get_offset_of_audioManager_30() { return static_cast<int32_t>(offsetof(TitleSaveManagerInputs_t2244120510, ___audioManager_30)); }
	inline GameObject_t1113636619 * get_audioManager_30() const { return ___audioManager_30; }
	inline GameObject_t1113636619 ** get_address_of_audioManager_30() { return &___audioManager_30; }
	inline void set_audioManager_30(GameObject_t1113636619 * value)
	{
		___audioManager_30 = value;
		Il2CppCodeGenWriteBarrier((&___audioManager_30), value);
	}

	inline static int32_t get_offset_of_fadeDuration_31() { return static_cast<int32_t>(offsetof(TitleSaveManagerInputs_t2244120510, ___fadeDuration_31)); }
	inline float get_fadeDuration_31() const { return ___fadeDuration_31; }
	inline float* get_address_of_fadeDuration_31() { return &___fadeDuration_31; }
	inline void set_fadeDuration_31(float value)
	{
		___fadeDuration_31 = value;
	}

	inline static int32_t get_offset_of_targetValue_32() { return static_cast<int32_t>(offsetof(TitleSaveManagerInputs_t2244120510, ___targetValue_32)); }
	inline float get_targetValue_32() const { return ___targetValue_32; }
	inline float* get_address_of_targetValue_32() { return &___targetValue_32; }
	inline void set_targetValue_32(float value)
	{
		___targetValue_32 = value;
	}

	inline static int32_t get_offset_of_loadProgress_33() { return static_cast<int32_t>(offsetof(TitleSaveManagerInputs_t2244120510, ___loadProgress_33)); }
	inline float get_loadProgress_33() const { return ___loadProgress_33; }
	inline float* get_address_of_loadProgress_33() { return &___loadProgress_33; }
	inline void set_loadProgress_33(float value)
	{
		___loadProgress_33 = value;
	}

	inline static int32_t get_offset_of_loading_34() { return static_cast<int32_t>(offsetof(TitleSaveManagerInputs_t2244120510, ___loading_34)); }
	inline bool get_loading_34() const { return ___loading_34; }
	inline bool* get_address_of_loading_34() { return &___loading_34; }
	inline void set_loading_34(bool value)
	{
		___loading_34 = value;
	}

	inline static int32_t get_offset_of_timer_35() { return static_cast<int32_t>(offsetof(TitleSaveManagerInputs_t2244120510, ___timer_35)); }
	inline float get_timer_35() const { return ___timer_35; }
	inline float* get_address_of_timer_35() { return &___timer_35; }
	inline void set_timer_35(float value)
	{
		___timer_35 = value;
	}

	inline static int32_t get_offset_of_delay_36() { return static_cast<int32_t>(offsetof(TitleSaveManagerInputs_t2244120510, ___delay_36)); }
	inline float get_delay_36() const { return ___delay_36; }
	inline float* get_address_of_delay_36() { return &___delay_36; }
	inline void set_delay_36(float value)
	{
		___delay_36 = value;
	}

	inline static int32_t get_offset_of_clipList_37() { return static_cast<int32_t>(offsetof(TitleSaveManagerInputs_t2244120510, ___clipList_37)); }
	inline List_1_t857997111 * get_clipList_37() const { return ___clipList_37; }
	inline List_1_t857997111 ** get_address_of_clipList_37() { return &___clipList_37; }
	inline void set_clipList_37(List_1_t857997111 * value)
	{
		___clipList_37 = value;
		Il2CppCodeGenWriteBarrier((&___clipList_37), value);
	}

	inline static int32_t get_offset_of_audioSource_38() { return static_cast<int32_t>(offsetof(TitleSaveManagerInputs_t2244120510, ___audioSource_38)); }
	inline AudioSource_t3935305588 * get_audioSource_38() const { return ___audioSource_38; }
	inline AudioSource_t3935305588 ** get_address_of_audioSource_38() { return &___audioSource_38; }
	inline void set_audioSource_38(AudioSource_t3935305588 * value)
	{
		___audioSource_38 = value;
		Il2CppCodeGenWriteBarrier((&___audioSource_38), value);
	}

	inline static int32_t get_offset_of_slot1Text_39() { return static_cast<int32_t>(offsetof(TitleSaveManagerInputs_t2244120510, ___slot1Text_39)); }
	inline Text_t1901882714 * get_slot1Text_39() const { return ___slot1Text_39; }
	inline Text_t1901882714 ** get_address_of_slot1Text_39() { return &___slot1Text_39; }
	inline void set_slot1Text_39(Text_t1901882714 * value)
	{
		___slot1Text_39 = value;
		Il2CppCodeGenWriteBarrier((&___slot1Text_39), value);
	}

	inline static int32_t get_offset_of_slot2Text_40() { return static_cast<int32_t>(offsetof(TitleSaveManagerInputs_t2244120510, ___slot2Text_40)); }
	inline Text_t1901882714 * get_slot2Text_40() const { return ___slot2Text_40; }
	inline Text_t1901882714 ** get_address_of_slot2Text_40() { return &___slot2Text_40; }
	inline void set_slot2Text_40(Text_t1901882714 * value)
	{
		___slot2Text_40 = value;
		Il2CppCodeGenWriteBarrier((&___slot2Text_40), value);
	}

	inline static int32_t get_offset_of_slot3Text_41() { return static_cast<int32_t>(offsetof(TitleSaveManagerInputs_t2244120510, ___slot3Text_41)); }
	inline Text_t1901882714 * get_slot3Text_41() const { return ___slot3Text_41; }
	inline Text_t1901882714 ** get_address_of_slot3Text_41() { return &___slot3Text_41; }
	inline void set_slot3Text_41(Text_t1901882714 * value)
	{
		___slot3Text_41 = value;
		Il2CppCodeGenWriteBarrier((&___slot3Text_41), value);
	}

	inline static int32_t get_offset_of_slot1String_42() { return static_cast<int32_t>(offsetof(TitleSaveManagerInputs_t2244120510, ___slot1String_42)); }
	inline String_t* get_slot1String_42() const { return ___slot1String_42; }
	inline String_t** get_address_of_slot1String_42() { return &___slot1String_42; }
	inline void set_slot1String_42(String_t* value)
	{
		___slot1String_42 = value;
		Il2CppCodeGenWriteBarrier((&___slot1String_42), value);
	}

	inline static int32_t get_offset_of_slot2String_43() { return static_cast<int32_t>(offsetof(TitleSaveManagerInputs_t2244120510, ___slot2String_43)); }
	inline String_t* get_slot2String_43() const { return ___slot2String_43; }
	inline String_t** get_address_of_slot2String_43() { return &___slot2String_43; }
	inline void set_slot2String_43(String_t* value)
	{
		___slot2String_43 = value;
		Il2CppCodeGenWriteBarrier((&___slot2String_43), value);
	}

	inline static int32_t get_offset_of_slot3String_44() { return static_cast<int32_t>(offsetof(TitleSaveManagerInputs_t2244120510, ___slot3String_44)); }
	inline String_t* get_slot3String_44() const { return ___slot3String_44; }
	inline String_t** get_address_of_slot3String_44() { return &___slot3String_44; }
	inline void set_slot3String_44(String_t* value)
	{
		___slot3String_44 = value;
		Il2CppCodeGenWriteBarrier((&___slot3String_44), value);
	}

	inline static int32_t get_offset_of_currentSelection_45() { return static_cast<int32_t>(offsetof(TitleSaveManagerInputs_t2244120510, ___currentSelection_45)); }
	inline GameObject_t1113636619 * get_currentSelection_45() const { return ___currentSelection_45; }
	inline GameObject_t1113636619 ** get_address_of_currentSelection_45() { return &___currentSelection_45; }
	inline void set_currentSelection_45(GameObject_t1113636619 * value)
	{
		___currentSelection_45 = value;
		Il2CppCodeGenWriteBarrier((&___currentSelection_45), value);
	}

	inline static int32_t get_offset_of_anim_46() { return static_cast<int32_t>(offsetof(TitleSaveManagerInputs_t2244120510, ___anim_46)); }
	inline Animation_t3648466861 * get_anim_46() const { return ___anim_46; }
	inline Animation_t3648466861 ** get_address_of_anim_46() { return &___anim_46; }
	inline void set_anim_46(Animation_t3648466861 * value)
	{
		___anim_46 = value;
		Il2CppCodeGenWriteBarrier((&___anim_46), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // TITLESAVEMANAGERINPUTS_T2244120510_H
#ifndef TITLESCREENOPTIONSMANAGER_T2832345059_H
#define TITLESCREENOPTIONSMANAGER_T2832345059_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// TitleScreenOptionsManager
struct  TitleScreenOptionsManager_t2832345059  : public MonoBehaviour_t3962482529
{
public:
	// System.Int32 TitleScreenOptionsManager::selectedSlot
	int32_t ___selectedSlot_15;
	// UnityEngine.Color TitleScreenOptionsManager::baseColor
	Color_t2555686324  ___baseColor_16;
	// UnityEngine.Color TitleScreenOptionsManager::hilightColor
	Color_t2555686324  ___hilightColor_17;
	// UnityEngine.UI.Text TitleScreenOptionsManager::slot1
	Text_t1901882714 * ___slot1_18;
	// UnityEngine.UI.Text TitleScreenOptionsManager::slot2
	Text_t1901882714 * ___slot2_19;
	// UnityEngine.UI.Text TitleScreenOptionsManager::slot3
	Text_t1901882714 * ___slot3_20;
	// UnityEngine.GameObject TitleScreenOptionsManager::ButtonManager
	GameObject_t1113636619 * ___ButtonManager_21;
	// UnityEngine.GameObject TitleScreenOptionsManager::menuManager
	GameObject_t1113636619 * ___menuManager_22;
	// UnityEngine.GameObject TitleScreenOptionsManager::audioManager
	GameObject_t1113636619 * ___audioManager_23;
	// UnityEngine.UI.Image TitleScreenOptionsManager::BGMLevel
	Image_t2670269651 * ___BGMLevel_24;
	// UnityEngine.UI.Image TitleScreenOptionsManager::SFXLevel
	Image_t2670269651 * ___SFXLevel_25;
	// UnityEngine.UI.Image TitleScreenOptionsManager::sensitivityLevel
	Image_t2670269651 * ___sensitivityLevel_26;
	// System.Single TitleScreenOptionsManager::timer
	float ___timer_27;
	// System.Single TitleScreenOptionsManager::delay
	float ___delay_28;
	// System.Single TitleScreenOptionsManager::BGMToSave
	float ___BGMToSave_29;
	// System.Single TitleScreenOptionsManager::SFXToSave
	float ___SFXToSave_30;
	// System.Single TitleScreenOptionsManager::SensitivityToSave
	float ___SensitivityToSave_31;
	// System.Collections.Generic.List`1<UnityEngine.AudioClip> TitleScreenOptionsManager::clipList
	List_1_t857997111 * ___clipList_32;
	// UnityEngine.AudioSource TitleScreenOptionsManager::audioSource
	AudioSource_t3935305588 * ___audioSource_33;
	// UnityEngine.GameObject TitleScreenOptionsManager::currentSelection
	GameObject_t1113636619 * ___currentSelection_34;
	// UnityEngine.Animation TitleScreenOptionsManager::anim
	Animation_t3648466861 * ___anim_35;

public:
	inline static int32_t get_offset_of_selectedSlot_15() { return static_cast<int32_t>(offsetof(TitleScreenOptionsManager_t2832345059, ___selectedSlot_15)); }
	inline int32_t get_selectedSlot_15() const { return ___selectedSlot_15; }
	inline int32_t* get_address_of_selectedSlot_15() { return &___selectedSlot_15; }
	inline void set_selectedSlot_15(int32_t value)
	{
		___selectedSlot_15 = value;
	}

	inline static int32_t get_offset_of_baseColor_16() { return static_cast<int32_t>(offsetof(TitleScreenOptionsManager_t2832345059, ___baseColor_16)); }
	inline Color_t2555686324  get_baseColor_16() const { return ___baseColor_16; }
	inline Color_t2555686324 * get_address_of_baseColor_16() { return &___baseColor_16; }
	inline void set_baseColor_16(Color_t2555686324  value)
	{
		___baseColor_16 = value;
	}

	inline static int32_t get_offset_of_hilightColor_17() { return static_cast<int32_t>(offsetof(TitleScreenOptionsManager_t2832345059, ___hilightColor_17)); }
	inline Color_t2555686324  get_hilightColor_17() const { return ___hilightColor_17; }
	inline Color_t2555686324 * get_address_of_hilightColor_17() { return &___hilightColor_17; }
	inline void set_hilightColor_17(Color_t2555686324  value)
	{
		___hilightColor_17 = value;
	}

	inline static int32_t get_offset_of_slot1_18() { return static_cast<int32_t>(offsetof(TitleScreenOptionsManager_t2832345059, ___slot1_18)); }
	inline Text_t1901882714 * get_slot1_18() const { return ___slot1_18; }
	inline Text_t1901882714 ** get_address_of_slot1_18() { return &___slot1_18; }
	inline void set_slot1_18(Text_t1901882714 * value)
	{
		___slot1_18 = value;
		Il2CppCodeGenWriteBarrier((&___slot1_18), value);
	}

	inline static int32_t get_offset_of_slot2_19() { return static_cast<int32_t>(offsetof(TitleScreenOptionsManager_t2832345059, ___slot2_19)); }
	inline Text_t1901882714 * get_slot2_19() const { return ___slot2_19; }
	inline Text_t1901882714 ** get_address_of_slot2_19() { return &___slot2_19; }
	inline void set_slot2_19(Text_t1901882714 * value)
	{
		___slot2_19 = value;
		Il2CppCodeGenWriteBarrier((&___slot2_19), value);
	}

	inline static int32_t get_offset_of_slot3_20() { return static_cast<int32_t>(offsetof(TitleScreenOptionsManager_t2832345059, ___slot3_20)); }
	inline Text_t1901882714 * get_slot3_20() const { return ___slot3_20; }
	inline Text_t1901882714 ** get_address_of_slot3_20() { return &___slot3_20; }
	inline void set_slot3_20(Text_t1901882714 * value)
	{
		___slot3_20 = value;
		Il2CppCodeGenWriteBarrier((&___slot3_20), value);
	}

	inline static int32_t get_offset_of_ButtonManager_21() { return static_cast<int32_t>(offsetof(TitleScreenOptionsManager_t2832345059, ___ButtonManager_21)); }
	inline GameObject_t1113636619 * get_ButtonManager_21() const { return ___ButtonManager_21; }
	inline GameObject_t1113636619 ** get_address_of_ButtonManager_21() { return &___ButtonManager_21; }
	inline void set_ButtonManager_21(GameObject_t1113636619 * value)
	{
		___ButtonManager_21 = value;
		Il2CppCodeGenWriteBarrier((&___ButtonManager_21), value);
	}

	inline static int32_t get_offset_of_menuManager_22() { return static_cast<int32_t>(offsetof(TitleScreenOptionsManager_t2832345059, ___menuManager_22)); }
	inline GameObject_t1113636619 * get_menuManager_22() const { return ___menuManager_22; }
	inline GameObject_t1113636619 ** get_address_of_menuManager_22() { return &___menuManager_22; }
	inline void set_menuManager_22(GameObject_t1113636619 * value)
	{
		___menuManager_22 = value;
		Il2CppCodeGenWriteBarrier((&___menuManager_22), value);
	}

	inline static int32_t get_offset_of_audioManager_23() { return static_cast<int32_t>(offsetof(TitleScreenOptionsManager_t2832345059, ___audioManager_23)); }
	inline GameObject_t1113636619 * get_audioManager_23() const { return ___audioManager_23; }
	inline GameObject_t1113636619 ** get_address_of_audioManager_23() { return &___audioManager_23; }
	inline void set_audioManager_23(GameObject_t1113636619 * value)
	{
		___audioManager_23 = value;
		Il2CppCodeGenWriteBarrier((&___audioManager_23), value);
	}

	inline static int32_t get_offset_of_BGMLevel_24() { return static_cast<int32_t>(offsetof(TitleScreenOptionsManager_t2832345059, ___BGMLevel_24)); }
	inline Image_t2670269651 * get_BGMLevel_24() const { return ___BGMLevel_24; }
	inline Image_t2670269651 ** get_address_of_BGMLevel_24() { return &___BGMLevel_24; }
	inline void set_BGMLevel_24(Image_t2670269651 * value)
	{
		___BGMLevel_24 = value;
		Il2CppCodeGenWriteBarrier((&___BGMLevel_24), value);
	}

	inline static int32_t get_offset_of_SFXLevel_25() { return static_cast<int32_t>(offsetof(TitleScreenOptionsManager_t2832345059, ___SFXLevel_25)); }
	inline Image_t2670269651 * get_SFXLevel_25() const { return ___SFXLevel_25; }
	inline Image_t2670269651 ** get_address_of_SFXLevel_25() { return &___SFXLevel_25; }
	inline void set_SFXLevel_25(Image_t2670269651 * value)
	{
		___SFXLevel_25 = value;
		Il2CppCodeGenWriteBarrier((&___SFXLevel_25), value);
	}

	inline static int32_t get_offset_of_sensitivityLevel_26() { return static_cast<int32_t>(offsetof(TitleScreenOptionsManager_t2832345059, ___sensitivityLevel_26)); }
	inline Image_t2670269651 * get_sensitivityLevel_26() const { return ___sensitivityLevel_26; }
	inline Image_t2670269651 ** get_address_of_sensitivityLevel_26() { return &___sensitivityLevel_26; }
	inline void set_sensitivityLevel_26(Image_t2670269651 * value)
	{
		___sensitivityLevel_26 = value;
		Il2CppCodeGenWriteBarrier((&___sensitivityLevel_26), value);
	}

	inline static int32_t get_offset_of_timer_27() { return static_cast<int32_t>(offsetof(TitleScreenOptionsManager_t2832345059, ___timer_27)); }
	inline float get_timer_27() const { return ___timer_27; }
	inline float* get_address_of_timer_27() { return &___timer_27; }
	inline void set_timer_27(float value)
	{
		___timer_27 = value;
	}

	inline static int32_t get_offset_of_delay_28() { return static_cast<int32_t>(offsetof(TitleScreenOptionsManager_t2832345059, ___delay_28)); }
	inline float get_delay_28() const { return ___delay_28; }
	inline float* get_address_of_delay_28() { return &___delay_28; }
	inline void set_delay_28(float value)
	{
		___delay_28 = value;
	}

	inline static int32_t get_offset_of_BGMToSave_29() { return static_cast<int32_t>(offsetof(TitleScreenOptionsManager_t2832345059, ___BGMToSave_29)); }
	inline float get_BGMToSave_29() const { return ___BGMToSave_29; }
	inline float* get_address_of_BGMToSave_29() { return &___BGMToSave_29; }
	inline void set_BGMToSave_29(float value)
	{
		___BGMToSave_29 = value;
	}

	inline static int32_t get_offset_of_SFXToSave_30() { return static_cast<int32_t>(offsetof(TitleScreenOptionsManager_t2832345059, ___SFXToSave_30)); }
	inline float get_SFXToSave_30() const { return ___SFXToSave_30; }
	inline float* get_address_of_SFXToSave_30() { return &___SFXToSave_30; }
	inline void set_SFXToSave_30(float value)
	{
		___SFXToSave_30 = value;
	}

	inline static int32_t get_offset_of_SensitivityToSave_31() { return static_cast<int32_t>(offsetof(TitleScreenOptionsManager_t2832345059, ___SensitivityToSave_31)); }
	inline float get_SensitivityToSave_31() const { return ___SensitivityToSave_31; }
	inline float* get_address_of_SensitivityToSave_31() { return &___SensitivityToSave_31; }
	inline void set_SensitivityToSave_31(float value)
	{
		___SensitivityToSave_31 = value;
	}

	inline static int32_t get_offset_of_clipList_32() { return static_cast<int32_t>(offsetof(TitleScreenOptionsManager_t2832345059, ___clipList_32)); }
	inline List_1_t857997111 * get_clipList_32() const { return ___clipList_32; }
	inline List_1_t857997111 ** get_address_of_clipList_32() { return &___clipList_32; }
	inline void set_clipList_32(List_1_t857997111 * value)
	{
		___clipList_32 = value;
		Il2CppCodeGenWriteBarrier((&___clipList_32), value);
	}

	inline static int32_t get_offset_of_audioSource_33() { return static_cast<int32_t>(offsetof(TitleScreenOptionsManager_t2832345059, ___audioSource_33)); }
	inline AudioSource_t3935305588 * get_audioSource_33() const { return ___audioSource_33; }
	inline AudioSource_t3935305588 ** get_address_of_audioSource_33() { return &___audioSource_33; }
	inline void set_audioSource_33(AudioSource_t3935305588 * value)
	{
		___audioSource_33 = value;
		Il2CppCodeGenWriteBarrier((&___audioSource_33), value);
	}

	inline static int32_t get_offset_of_currentSelection_34() { return static_cast<int32_t>(offsetof(TitleScreenOptionsManager_t2832345059, ___currentSelection_34)); }
	inline GameObject_t1113636619 * get_currentSelection_34() const { return ___currentSelection_34; }
	inline GameObject_t1113636619 ** get_address_of_currentSelection_34() { return &___currentSelection_34; }
	inline void set_currentSelection_34(GameObject_t1113636619 * value)
	{
		___currentSelection_34 = value;
		Il2CppCodeGenWriteBarrier((&___currentSelection_34), value);
	}

	inline static int32_t get_offset_of_anim_35() { return static_cast<int32_t>(offsetof(TitleScreenOptionsManager_t2832345059, ___anim_35)); }
	inline Animation_t3648466861 * get_anim_35() const { return ___anim_35; }
	inline Animation_t3648466861 ** get_address_of_anim_35() { return &___anim_35; }
	inline void set_anim_35(Animation_t3648466861 * value)
	{
		___anim_35 = value;
		Il2CppCodeGenWriteBarrier((&___anim_35), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // TITLESCREENOPTIONSMANAGER_T2832345059_H
#ifndef TITLE_ANIMATOR_T1706872800_H
#define TITLE_ANIMATOR_T1706872800_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// Title_Animator
struct  Title_Animator_t1706872800  : public MonoBehaviour_t3962482529
{
public:
	// System.Boolean Title_Animator::isEnabled
	bool ___isEnabled_4;
	// UnityEngine.UI.RawImage Title_Animator::fadeImage
	RawImage_t3182918964 * ___fadeImage_5;
	// System.Single Title_Animator::fadeAmount
	float ___fadeAmount_6;
	// System.Single Title_Animator::fadeDelay
	float ___fadeDelay_7;
	// UnityEngine.UI.RawImage Title_Animator::fadeImage2
	RawImage_t3182918964 * ___fadeImage2_8;
	// System.Single Title_Animator::fadeAmount2
	float ___fadeAmount2_9;
	// System.Single Title_Animator::fadeDelay2
	float ___fadeDelay2_10;
	// UnityEngine.UI.RawImage Title_Animator::fadeImage3
	RawImage_t3182918964 * ___fadeImage3_11;
	// System.Single Title_Animator::fadeAmount3
	float ___fadeAmount3_12;
	// System.Single Title_Animator::fadeDelay3
	float ___fadeDelay3_13;
	// UnityEngine.UI.Image Title_Animator::fillImage
	Image_t2670269651 * ___fillImage_14;
	// System.Single Title_Animator::fillAmount
	float ___fillAmount_15;
	// System.Single Title_Animator::fillDelay
	float ___fillDelay_16;

public:
	inline static int32_t get_offset_of_isEnabled_4() { return static_cast<int32_t>(offsetof(Title_Animator_t1706872800, ___isEnabled_4)); }
	inline bool get_isEnabled_4() const { return ___isEnabled_4; }
	inline bool* get_address_of_isEnabled_4() { return &___isEnabled_4; }
	inline void set_isEnabled_4(bool value)
	{
		___isEnabled_4 = value;
	}

	inline static int32_t get_offset_of_fadeImage_5() { return static_cast<int32_t>(offsetof(Title_Animator_t1706872800, ___fadeImage_5)); }
	inline RawImage_t3182918964 * get_fadeImage_5() const { return ___fadeImage_5; }
	inline RawImage_t3182918964 ** get_address_of_fadeImage_5() { return &___fadeImage_5; }
	inline void set_fadeImage_5(RawImage_t3182918964 * value)
	{
		___fadeImage_5 = value;
		Il2CppCodeGenWriteBarrier((&___fadeImage_5), value);
	}

	inline static int32_t get_offset_of_fadeAmount_6() { return static_cast<int32_t>(offsetof(Title_Animator_t1706872800, ___fadeAmount_6)); }
	inline float get_fadeAmount_6() const { return ___fadeAmount_6; }
	inline float* get_address_of_fadeAmount_6() { return &___fadeAmount_6; }
	inline void set_fadeAmount_6(float value)
	{
		___fadeAmount_6 = value;
	}

	inline static int32_t get_offset_of_fadeDelay_7() { return static_cast<int32_t>(offsetof(Title_Animator_t1706872800, ___fadeDelay_7)); }
	inline float get_fadeDelay_7() const { return ___fadeDelay_7; }
	inline float* get_address_of_fadeDelay_7() { return &___fadeDelay_7; }
	inline void set_fadeDelay_7(float value)
	{
		___fadeDelay_7 = value;
	}

	inline static int32_t get_offset_of_fadeImage2_8() { return static_cast<int32_t>(offsetof(Title_Animator_t1706872800, ___fadeImage2_8)); }
	inline RawImage_t3182918964 * get_fadeImage2_8() const { return ___fadeImage2_8; }
	inline RawImage_t3182918964 ** get_address_of_fadeImage2_8() { return &___fadeImage2_8; }
	inline void set_fadeImage2_8(RawImage_t3182918964 * value)
	{
		___fadeImage2_8 = value;
		Il2CppCodeGenWriteBarrier((&___fadeImage2_8), value);
	}

	inline static int32_t get_offset_of_fadeAmount2_9() { return static_cast<int32_t>(offsetof(Title_Animator_t1706872800, ___fadeAmount2_9)); }
	inline float get_fadeAmount2_9() const { return ___fadeAmount2_9; }
	inline float* get_address_of_fadeAmount2_9() { return &___fadeAmount2_9; }
	inline void set_fadeAmount2_9(float value)
	{
		___fadeAmount2_9 = value;
	}

	inline static int32_t get_offset_of_fadeDelay2_10() { return static_cast<int32_t>(offsetof(Title_Animator_t1706872800, ___fadeDelay2_10)); }
	inline float get_fadeDelay2_10() const { return ___fadeDelay2_10; }
	inline float* get_address_of_fadeDelay2_10() { return &___fadeDelay2_10; }
	inline void set_fadeDelay2_10(float value)
	{
		___fadeDelay2_10 = value;
	}

	inline static int32_t get_offset_of_fadeImage3_11() { return static_cast<int32_t>(offsetof(Title_Animator_t1706872800, ___fadeImage3_11)); }
	inline RawImage_t3182918964 * get_fadeImage3_11() const { return ___fadeImage3_11; }
	inline RawImage_t3182918964 ** get_address_of_fadeImage3_11() { return &___fadeImage3_11; }
	inline void set_fadeImage3_11(RawImage_t3182918964 * value)
	{
		___fadeImage3_11 = value;
		Il2CppCodeGenWriteBarrier((&___fadeImage3_11), value);
	}

	inline static int32_t get_offset_of_fadeAmount3_12() { return static_cast<int32_t>(offsetof(Title_Animator_t1706872800, ___fadeAmount3_12)); }
	inline float get_fadeAmount3_12() const { return ___fadeAmount3_12; }
	inline float* get_address_of_fadeAmount3_12() { return &___fadeAmount3_12; }
	inline void set_fadeAmount3_12(float value)
	{
		___fadeAmount3_12 = value;
	}

	inline static int32_t get_offset_of_fadeDelay3_13() { return static_cast<int32_t>(offsetof(Title_Animator_t1706872800, ___fadeDelay3_13)); }
	inline float get_fadeDelay3_13() const { return ___fadeDelay3_13; }
	inline float* get_address_of_fadeDelay3_13() { return &___fadeDelay3_13; }
	inline void set_fadeDelay3_13(float value)
	{
		___fadeDelay3_13 = value;
	}

	inline static int32_t get_offset_of_fillImage_14() { return static_cast<int32_t>(offsetof(Title_Animator_t1706872800, ___fillImage_14)); }
	inline Image_t2670269651 * get_fillImage_14() const { return ___fillImage_14; }
	inline Image_t2670269651 ** get_address_of_fillImage_14() { return &___fillImage_14; }
	inline void set_fillImage_14(Image_t2670269651 * value)
	{
		___fillImage_14 = value;
		Il2CppCodeGenWriteBarrier((&___fillImage_14), value);
	}

	inline static int32_t get_offset_of_fillAmount_15() { return static_cast<int32_t>(offsetof(Title_Animator_t1706872800, ___fillAmount_15)); }
	inline float get_fillAmount_15() const { return ___fillAmount_15; }
	inline float* get_address_of_fillAmount_15() { return &___fillAmount_15; }
	inline void set_fillAmount_15(float value)
	{
		___fillAmount_15 = value;
	}

	inline static int32_t get_offset_of_fillDelay_16() { return static_cast<int32_t>(offsetof(Title_Animator_t1706872800, ___fillDelay_16)); }
	inline float get_fillDelay_16() const { return ___fillDelay_16; }
	inline float* get_address_of_fillDelay_16() { return &___fillDelay_16; }
	inline void set_fillDelay_16(float value)
	{
		___fillDelay_16 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // TITLE_ANIMATOR_T1706872800_H
#ifndef TITLE_MENU_MANAGER_T3788367697_H
#define TITLE_MENU_MANAGER_T3788367697_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// Title_Menu_Manager
struct  Title_Menu_Manager_t3788367697  : public MonoBehaviour_t3962482529
{
public:
	// System.String Title_Menu_Manager::joystick1
	String_t* ___joystick1_4;
	// System.Int32 Title_Menu_Manager::CROSS
	int32_t ___CROSS_5;
	// System.Int32 Title_Menu_Manager::CIRCLE
	int32_t ___CIRCLE_6;
	// System.Int32 Title_Menu_Manager::SQUARE
	int32_t ___SQUARE_7;
	// System.Int32 Title_Menu_Manager::TRIANGLE
	int32_t ___TRIANGLE_8;
	// System.Int32 Title_Menu_Manager::SELECT
	int32_t ___SELECT_9;
	// System.Int32 Title_Menu_Manager::START
	int32_t ___START_10;
	// System.Int32 Title_Menu_Manager::UP
	int32_t ___UP_11;
	// System.Int32 Title_Menu_Manager::RIGHT
	int32_t ___RIGHT_12;
	// System.Int32 Title_Menu_Manager::DOWN
	int32_t ___DOWN_13;
	// System.Int32 Title_Menu_Manager::LEFT
	int32_t ___LEFT_14;
	// System.Int32 Title_Menu_Manager::selectedSlot
	int32_t ___selectedSlot_15;
	// System.Int32 Title_Menu_Manager::selectedSLSlot
	int32_t ___selectedSLSlot_16;
	// UnityEngine.Color Title_Menu_Manager::baseColor
	Color_t2555686324  ___baseColor_17;
	// UnityEngine.Color Title_Menu_Manager::hilightColor
	Color_t2555686324  ___hilightColor_18;
	// UnityEngine.Color Title_Menu_Manager::selectedColor
	Color_t2555686324  ___selectedColor_19;
	// UnityEngine.UI.RawImage Title_Menu_Manager::slot1
	RawImage_t3182918964 * ___slot1_20;
	// UnityEngine.UI.RawImage Title_Menu_Manager::slot2
	RawImage_t3182918964 * ___slot2_21;
	// UnityEngine.UI.RawImage Title_Menu_Manager::slot3
	RawImage_t3182918964 * ___slot3_22;
	// UnityEngine.GameObject Title_Menu_Manager::saveManager
	GameObject_t1113636619 * ___saveManager_23;
	// UnityEngine.GameObject Title_Menu_Manager::optionsManager
	GameObject_t1113636619 * ___optionsManager_24;
	// UnityEngine.GameObject Title_Menu_Manager::ButtonManager
	GameObject_t1113636619 * ___ButtonManager_25;
	// UnityEngine.CanvasGroup Title_Menu_Manager::mainMenuCanvas
	CanvasGroup_t4083511760 * ___mainMenuCanvas_26;
	// UnityEngine.CanvasGroup Title_Menu_Manager::saverCanvas
	CanvasGroup_t4083511760 * ___saverCanvas_27;
	// UnityEngine.CanvasGroup Title_Menu_Manager::optionCanvas
	CanvasGroup_t4083511760 * ___optionCanvas_28;
	// UnityEngine.CanvasGroup Title_Menu_Manager::dialogCanvas
	CanvasGroup_t4083511760 * ___dialogCanvas_29;
	// UnityEngine.CanvasGroup Title_Menu_Manager::faderCanvas
	CanvasGroup_t4083511760 * ___faderCanvas_30;
	// UnityEngine.CanvasGroup Title_Menu_Manager::selectedCanvas
	CanvasGroup_t4083511760 * ___selectedCanvas_31;
	// UnityEngine.GameObject Title_Menu_Manager::audioManager
	GameObject_t1113636619 * ___audioManager_32;
	// System.Single Title_Menu_Manager::targetValue
	float ___targetValue_33;
	// System.Boolean Title_Menu_Manager::mainMenuEnabled
	bool ___mainMenuEnabled_34;
	// System.Boolean Title_Menu_Manager::saverEnabled
	bool ___saverEnabled_35;
	// System.Boolean Title_Menu_Manager::optionEnabled
	bool ___optionEnabled_36;
	// System.Boolean Title_Menu_Manager::dialogEnabled
	bool ___dialogEnabled_37;
	// System.Boolean Title_Menu_Manager::delayTimer
	bool ___delayTimer_38;
	// System.Single Title_Menu_Manager::timer
	float ___timer_39;
	// System.Single Title_Menu_Manager::delay
	float ___delay_40;
	// System.Collections.Generic.List`1<UnityEngine.AudioClip> Title_Menu_Manager::clipList
	List_1_t857997111 * ___clipList_41;
	// UnityEngine.AudioSource Title_Menu_Manager::audioSource
	AudioSource_t3935305588 * ___audioSource_42;
	// UnityEngine.GameObject Title_Menu_Manager::currentSelection
	GameObject_t1113636619 * ___currentSelection_43;
	// UnityEngine.GameObject Title_Menu_Manager::previousSelection
	GameObject_t1113636619 * ___previousSelection_44;
	// UnityEngine.Animator Title_Menu_Manager::anim
	Animator_t434523843 * ___anim_45;

public:
	inline static int32_t get_offset_of_joystick1_4() { return static_cast<int32_t>(offsetof(Title_Menu_Manager_t3788367697, ___joystick1_4)); }
	inline String_t* get_joystick1_4() const { return ___joystick1_4; }
	inline String_t** get_address_of_joystick1_4() { return &___joystick1_4; }
	inline void set_joystick1_4(String_t* value)
	{
		___joystick1_4 = value;
		Il2CppCodeGenWriteBarrier((&___joystick1_4), value);
	}

	inline static int32_t get_offset_of_CROSS_5() { return static_cast<int32_t>(offsetof(Title_Menu_Manager_t3788367697, ___CROSS_5)); }
	inline int32_t get_CROSS_5() const { return ___CROSS_5; }
	inline int32_t* get_address_of_CROSS_5() { return &___CROSS_5; }
	inline void set_CROSS_5(int32_t value)
	{
		___CROSS_5 = value;
	}

	inline static int32_t get_offset_of_CIRCLE_6() { return static_cast<int32_t>(offsetof(Title_Menu_Manager_t3788367697, ___CIRCLE_6)); }
	inline int32_t get_CIRCLE_6() const { return ___CIRCLE_6; }
	inline int32_t* get_address_of_CIRCLE_6() { return &___CIRCLE_6; }
	inline void set_CIRCLE_6(int32_t value)
	{
		___CIRCLE_6 = value;
	}

	inline static int32_t get_offset_of_SQUARE_7() { return static_cast<int32_t>(offsetof(Title_Menu_Manager_t3788367697, ___SQUARE_7)); }
	inline int32_t get_SQUARE_7() const { return ___SQUARE_7; }
	inline int32_t* get_address_of_SQUARE_7() { return &___SQUARE_7; }
	inline void set_SQUARE_7(int32_t value)
	{
		___SQUARE_7 = value;
	}

	inline static int32_t get_offset_of_TRIANGLE_8() { return static_cast<int32_t>(offsetof(Title_Menu_Manager_t3788367697, ___TRIANGLE_8)); }
	inline int32_t get_TRIANGLE_8() const { return ___TRIANGLE_8; }
	inline int32_t* get_address_of_TRIANGLE_8() { return &___TRIANGLE_8; }
	inline void set_TRIANGLE_8(int32_t value)
	{
		___TRIANGLE_8 = value;
	}

	inline static int32_t get_offset_of_SELECT_9() { return static_cast<int32_t>(offsetof(Title_Menu_Manager_t3788367697, ___SELECT_9)); }
	inline int32_t get_SELECT_9() const { return ___SELECT_9; }
	inline int32_t* get_address_of_SELECT_9() { return &___SELECT_9; }
	inline void set_SELECT_9(int32_t value)
	{
		___SELECT_9 = value;
	}

	inline static int32_t get_offset_of_START_10() { return static_cast<int32_t>(offsetof(Title_Menu_Manager_t3788367697, ___START_10)); }
	inline int32_t get_START_10() const { return ___START_10; }
	inline int32_t* get_address_of_START_10() { return &___START_10; }
	inline void set_START_10(int32_t value)
	{
		___START_10 = value;
	}

	inline static int32_t get_offset_of_UP_11() { return static_cast<int32_t>(offsetof(Title_Menu_Manager_t3788367697, ___UP_11)); }
	inline int32_t get_UP_11() const { return ___UP_11; }
	inline int32_t* get_address_of_UP_11() { return &___UP_11; }
	inline void set_UP_11(int32_t value)
	{
		___UP_11 = value;
	}

	inline static int32_t get_offset_of_RIGHT_12() { return static_cast<int32_t>(offsetof(Title_Menu_Manager_t3788367697, ___RIGHT_12)); }
	inline int32_t get_RIGHT_12() const { return ___RIGHT_12; }
	inline int32_t* get_address_of_RIGHT_12() { return &___RIGHT_12; }
	inline void set_RIGHT_12(int32_t value)
	{
		___RIGHT_12 = value;
	}

	inline static int32_t get_offset_of_DOWN_13() { return static_cast<int32_t>(offsetof(Title_Menu_Manager_t3788367697, ___DOWN_13)); }
	inline int32_t get_DOWN_13() const { return ___DOWN_13; }
	inline int32_t* get_address_of_DOWN_13() { return &___DOWN_13; }
	inline void set_DOWN_13(int32_t value)
	{
		___DOWN_13 = value;
	}

	inline static int32_t get_offset_of_LEFT_14() { return static_cast<int32_t>(offsetof(Title_Menu_Manager_t3788367697, ___LEFT_14)); }
	inline int32_t get_LEFT_14() const { return ___LEFT_14; }
	inline int32_t* get_address_of_LEFT_14() { return &___LEFT_14; }
	inline void set_LEFT_14(int32_t value)
	{
		___LEFT_14 = value;
	}

	inline static int32_t get_offset_of_selectedSlot_15() { return static_cast<int32_t>(offsetof(Title_Menu_Manager_t3788367697, ___selectedSlot_15)); }
	inline int32_t get_selectedSlot_15() const { return ___selectedSlot_15; }
	inline int32_t* get_address_of_selectedSlot_15() { return &___selectedSlot_15; }
	inline void set_selectedSlot_15(int32_t value)
	{
		___selectedSlot_15 = value;
	}

	inline static int32_t get_offset_of_selectedSLSlot_16() { return static_cast<int32_t>(offsetof(Title_Menu_Manager_t3788367697, ___selectedSLSlot_16)); }
	inline int32_t get_selectedSLSlot_16() const { return ___selectedSLSlot_16; }
	inline int32_t* get_address_of_selectedSLSlot_16() { return &___selectedSLSlot_16; }
	inline void set_selectedSLSlot_16(int32_t value)
	{
		___selectedSLSlot_16 = value;
	}

	inline static int32_t get_offset_of_baseColor_17() { return static_cast<int32_t>(offsetof(Title_Menu_Manager_t3788367697, ___baseColor_17)); }
	inline Color_t2555686324  get_baseColor_17() const { return ___baseColor_17; }
	inline Color_t2555686324 * get_address_of_baseColor_17() { return &___baseColor_17; }
	inline void set_baseColor_17(Color_t2555686324  value)
	{
		___baseColor_17 = value;
	}

	inline static int32_t get_offset_of_hilightColor_18() { return static_cast<int32_t>(offsetof(Title_Menu_Manager_t3788367697, ___hilightColor_18)); }
	inline Color_t2555686324  get_hilightColor_18() const { return ___hilightColor_18; }
	inline Color_t2555686324 * get_address_of_hilightColor_18() { return &___hilightColor_18; }
	inline void set_hilightColor_18(Color_t2555686324  value)
	{
		___hilightColor_18 = value;
	}

	inline static int32_t get_offset_of_selectedColor_19() { return static_cast<int32_t>(offsetof(Title_Menu_Manager_t3788367697, ___selectedColor_19)); }
	inline Color_t2555686324  get_selectedColor_19() const { return ___selectedColor_19; }
	inline Color_t2555686324 * get_address_of_selectedColor_19() { return &___selectedColor_19; }
	inline void set_selectedColor_19(Color_t2555686324  value)
	{
		___selectedColor_19 = value;
	}

	inline static int32_t get_offset_of_slot1_20() { return static_cast<int32_t>(offsetof(Title_Menu_Manager_t3788367697, ___slot1_20)); }
	inline RawImage_t3182918964 * get_slot1_20() const { return ___slot1_20; }
	inline RawImage_t3182918964 ** get_address_of_slot1_20() { return &___slot1_20; }
	inline void set_slot1_20(RawImage_t3182918964 * value)
	{
		___slot1_20 = value;
		Il2CppCodeGenWriteBarrier((&___slot1_20), value);
	}

	inline static int32_t get_offset_of_slot2_21() { return static_cast<int32_t>(offsetof(Title_Menu_Manager_t3788367697, ___slot2_21)); }
	inline RawImage_t3182918964 * get_slot2_21() const { return ___slot2_21; }
	inline RawImage_t3182918964 ** get_address_of_slot2_21() { return &___slot2_21; }
	inline void set_slot2_21(RawImage_t3182918964 * value)
	{
		___slot2_21 = value;
		Il2CppCodeGenWriteBarrier((&___slot2_21), value);
	}

	inline static int32_t get_offset_of_slot3_22() { return static_cast<int32_t>(offsetof(Title_Menu_Manager_t3788367697, ___slot3_22)); }
	inline RawImage_t3182918964 * get_slot3_22() const { return ___slot3_22; }
	inline RawImage_t3182918964 ** get_address_of_slot3_22() { return &___slot3_22; }
	inline void set_slot3_22(RawImage_t3182918964 * value)
	{
		___slot3_22 = value;
		Il2CppCodeGenWriteBarrier((&___slot3_22), value);
	}

	inline static int32_t get_offset_of_saveManager_23() { return static_cast<int32_t>(offsetof(Title_Menu_Manager_t3788367697, ___saveManager_23)); }
	inline GameObject_t1113636619 * get_saveManager_23() const { return ___saveManager_23; }
	inline GameObject_t1113636619 ** get_address_of_saveManager_23() { return &___saveManager_23; }
	inline void set_saveManager_23(GameObject_t1113636619 * value)
	{
		___saveManager_23 = value;
		Il2CppCodeGenWriteBarrier((&___saveManager_23), value);
	}

	inline static int32_t get_offset_of_optionsManager_24() { return static_cast<int32_t>(offsetof(Title_Menu_Manager_t3788367697, ___optionsManager_24)); }
	inline GameObject_t1113636619 * get_optionsManager_24() const { return ___optionsManager_24; }
	inline GameObject_t1113636619 ** get_address_of_optionsManager_24() { return &___optionsManager_24; }
	inline void set_optionsManager_24(GameObject_t1113636619 * value)
	{
		___optionsManager_24 = value;
		Il2CppCodeGenWriteBarrier((&___optionsManager_24), value);
	}

	inline static int32_t get_offset_of_ButtonManager_25() { return static_cast<int32_t>(offsetof(Title_Menu_Manager_t3788367697, ___ButtonManager_25)); }
	inline GameObject_t1113636619 * get_ButtonManager_25() const { return ___ButtonManager_25; }
	inline GameObject_t1113636619 ** get_address_of_ButtonManager_25() { return &___ButtonManager_25; }
	inline void set_ButtonManager_25(GameObject_t1113636619 * value)
	{
		___ButtonManager_25 = value;
		Il2CppCodeGenWriteBarrier((&___ButtonManager_25), value);
	}

	inline static int32_t get_offset_of_mainMenuCanvas_26() { return static_cast<int32_t>(offsetof(Title_Menu_Manager_t3788367697, ___mainMenuCanvas_26)); }
	inline CanvasGroup_t4083511760 * get_mainMenuCanvas_26() const { return ___mainMenuCanvas_26; }
	inline CanvasGroup_t4083511760 ** get_address_of_mainMenuCanvas_26() { return &___mainMenuCanvas_26; }
	inline void set_mainMenuCanvas_26(CanvasGroup_t4083511760 * value)
	{
		___mainMenuCanvas_26 = value;
		Il2CppCodeGenWriteBarrier((&___mainMenuCanvas_26), value);
	}

	inline static int32_t get_offset_of_saverCanvas_27() { return static_cast<int32_t>(offsetof(Title_Menu_Manager_t3788367697, ___saverCanvas_27)); }
	inline CanvasGroup_t4083511760 * get_saverCanvas_27() const { return ___saverCanvas_27; }
	inline CanvasGroup_t4083511760 ** get_address_of_saverCanvas_27() { return &___saverCanvas_27; }
	inline void set_saverCanvas_27(CanvasGroup_t4083511760 * value)
	{
		___saverCanvas_27 = value;
		Il2CppCodeGenWriteBarrier((&___saverCanvas_27), value);
	}

	inline static int32_t get_offset_of_optionCanvas_28() { return static_cast<int32_t>(offsetof(Title_Menu_Manager_t3788367697, ___optionCanvas_28)); }
	inline CanvasGroup_t4083511760 * get_optionCanvas_28() const { return ___optionCanvas_28; }
	inline CanvasGroup_t4083511760 ** get_address_of_optionCanvas_28() { return &___optionCanvas_28; }
	inline void set_optionCanvas_28(CanvasGroup_t4083511760 * value)
	{
		___optionCanvas_28 = value;
		Il2CppCodeGenWriteBarrier((&___optionCanvas_28), value);
	}

	inline static int32_t get_offset_of_dialogCanvas_29() { return static_cast<int32_t>(offsetof(Title_Menu_Manager_t3788367697, ___dialogCanvas_29)); }
	inline CanvasGroup_t4083511760 * get_dialogCanvas_29() const { return ___dialogCanvas_29; }
	inline CanvasGroup_t4083511760 ** get_address_of_dialogCanvas_29() { return &___dialogCanvas_29; }
	inline void set_dialogCanvas_29(CanvasGroup_t4083511760 * value)
	{
		___dialogCanvas_29 = value;
		Il2CppCodeGenWriteBarrier((&___dialogCanvas_29), value);
	}

	inline static int32_t get_offset_of_faderCanvas_30() { return static_cast<int32_t>(offsetof(Title_Menu_Manager_t3788367697, ___faderCanvas_30)); }
	inline CanvasGroup_t4083511760 * get_faderCanvas_30() const { return ___faderCanvas_30; }
	inline CanvasGroup_t4083511760 ** get_address_of_faderCanvas_30() { return &___faderCanvas_30; }
	inline void set_faderCanvas_30(CanvasGroup_t4083511760 * value)
	{
		___faderCanvas_30 = value;
		Il2CppCodeGenWriteBarrier((&___faderCanvas_30), value);
	}

	inline static int32_t get_offset_of_selectedCanvas_31() { return static_cast<int32_t>(offsetof(Title_Menu_Manager_t3788367697, ___selectedCanvas_31)); }
	inline CanvasGroup_t4083511760 * get_selectedCanvas_31() const { return ___selectedCanvas_31; }
	inline CanvasGroup_t4083511760 ** get_address_of_selectedCanvas_31() { return &___selectedCanvas_31; }
	inline void set_selectedCanvas_31(CanvasGroup_t4083511760 * value)
	{
		___selectedCanvas_31 = value;
		Il2CppCodeGenWriteBarrier((&___selectedCanvas_31), value);
	}

	inline static int32_t get_offset_of_audioManager_32() { return static_cast<int32_t>(offsetof(Title_Menu_Manager_t3788367697, ___audioManager_32)); }
	inline GameObject_t1113636619 * get_audioManager_32() const { return ___audioManager_32; }
	inline GameObject_t1113636619 ** get_address_of_audioManager_32() { return &___audioManager_32; }
	inline void set_audioManager_32(GameObject_t1113636619 * value)
	{
		___audioManager_32 = value;
		Il2CppCodeGenWriteBarrier((&___audioManager_32), value);
	}

	inline static int32_t get_offset_of_targetValue_33() { return static_cast<int32_t>(offsetof(Title_Menu_Manager_t3788367697, ___targetValue_33)); }
	inline float get_targetValue_33() const { return ___targetValue_33; }
	inline float* get_address_of_targetValue_33() { return &___targetValue_33; }
	inline void set_targetValue_33(float value)
	{
		___targetValue_33 = value;
	}

	inline static int32_t get_offset_of_mainMenuEnabled_34() { return static_cast<int32_t>(offsetof(Title_Menu_Manager_t3788367697, ___mainMenuEnabled_34)); }
	inline bool get_mainMenuEnabled_34() const { return ___mainMenuEnabled_34; }
	inline bool* get_address_of_mainMenuEnabled_34() { return &___mainMenuEnabled_34; }
	inline void set_mainMenuEnabled_34(bool value)
	{
		___mainMenuEnabled_34 = value;
	}

	inline static int32_t get_offset_of_saverEnabled_35() { return static_cast<int32_t>(offsetof(Title_Menu_Manager_t3788367697, ___saverEnabled_35)); }
	inline bool get_saverEnabled_35() const { return ___saverEnabled_35; }
	inline bool* get_address_of_saverEnabled_35() { return &___saverEnabled_35; }
	inline void set_saverEnabled_35(bool value)
	{
		___saverEnabled_35 = value;
	}

	inline static int32_t get_offset_of_optionEnabled_36() { return static_cast<int32_t>(offsetof(Title_Menu_Manager_t3788367697, ___optionEnabled_36)); }
	inline bool get_optionEnabled_36() const { return ___optionEnabled_36; }
	inline bool* get_address_of_optionEnabled_36() { return &___optionEnabled_36; }
	inline void set_optionEnabled_36(bool value)
	{
		___optionEnabled_36 = value;
	}

	inline static int32_t get_offset_of_dialogEnabled_37() { return static_cast<int32_t>(offsetof(Title_Menu_Manager_t3788367697, ___dialogEnabled_37)); }
	inline bool get_dialogEnabled_37() const { return ___dialogEnabled_37; }
	inline bool* get_address_of_dialogEnabled_37() { return &___dialogEnabled_37; }
	inline void set_dialogEnabled_37(bool value)
	{
		___dialogEnabled_37 = value;
	}

	inline static int32_t get_offset_of_delayTimer_38() { return static_cast<int32_t>(offsetof(Title_Menu_Manager_t3788367697, ___delayTimer_38)); }
	inline bool get_delayTimer_38() const { return ___delayTimer_38; }
	inline bool* get_address_of_delayTimer_38() { return &___delayTimer_38; }
	inline void set_delayTimer_38(bool value)
	{
		___delayTimer_38 = value;
	}

	inline static int32_t get_offset_of_timer_39() { return static_cast<int32_t>(offsetof(Title_Menu_Manager_t3788367697, ___timer_39)); }
	inline float get_timer_39() const { return ___timer_39; }
	inline float* get_address_of_timer_39() { return &___timer_39; }
	inline void set_timer_39(float value)
	{
		___timer_39 = value;
	}

	inline static int32_t get_offset_of_delay_40() { return static_cast<int32_t>(offsetof(Title_Menu_Manager_t3788367697, ___delay_40)); }
	inline float get_delay_40() const { return ___delay_40; }
	inline float* get_address_of_delay_40() { return &___delay_40; }
	inline void set_delay_40(float value)
	{
		___delay_40 = value;
	}

	inline static int32_t get_offset_of_clipList_41() { return static_cast<int32_t>(offsetof(Title_Menu_Manager_t3788367697, ___clipList_41)); }
	inline List_1_t857997111 * get_clipList_41() const { return ___clipList_41; }
	inline List_1_t857997111 ** get_address_of_clipList_41() { return &___clipList_41; }
	inline void set_clipList_41(List_1_t857997111 * value)
	{
		___clipList_41 = value;
		Il2CppCodeGenWriteBarrier((&___clipList_41), value);
	}

	inline static int32_t get_offset_of_audioSource_42() { return static_cast<int32_t>(offsetof(Title_Menu_Manager_t3788367697, ___audioSource_42)); }
	inline AudioSource_t3935305588 * get_audioSource_42() const { return ___audioSource_42; }
	inline AudioSource_t3935305588 ** get_address_of_audioSource_42() { return &___audioSource_42; }
	inline void set_audioSource_42(AudioSource_t3935305588 * value)
	{
		___audioSource_42 = value;
		Il2CppCodeGenWriteBarrier((&___audioSource_42), value);
	}

	inline static int32_t get_offset_of_currentSelection_43() { return static_cast<int32_t>(offsetof(Title_Menu_Manager_t3788367697, ___currentSelection_43)); }
	inline GameObject_t1113636619 * get_currentSelection_43() const { return ___currentSelection_43; }
	inline GameObject_t1113636619 ** get_address_of_currentSelection_43() { return &___currentSelection_43; }
	inline void set_currentSelection_43(GameObject_t1113636619 * value)
	{
		___currentSelection_43 = value;
		Il2CppCodeGenWriteBarrier((&___currentSelection_43), value);
	}

	inline static int32_t get_offset_of_previousSelection_44() { return static_cast<int32_t>(offsetof(Title_Menu_Manager_t3788367697, ___previousSelection_44)); }
	inline GameObject_t1113636619 * get_previousSelection_44() const { return ___previousSelection_44; }
	inline GameObject_t1113636619 ** get_address_of_previousSelection_44() { return &___previousSelection_44; }
	inline void set_previousSelection_44(GameObject_t1113636619 * value)
	{
		___previousSelection_44 = value;
		Il2CppCodeGenWriteBarrier((&___previousSelection_44), value);
	}

	inline static int32_t get_offset_of_anim_45() { return static_cast<int32_t>(offsetof(Title_Menu_Manager_t3788367697, ___anim_45)); }
	inline Animator_t434523843 * get_anim_45() const { return ___anim_45; }
	inline Animator_t434523843 ** get_address_of_anim_45() { return &___anim_45; }
	inline void set_anim_45(Animator_t434523843 * value)
	{
		___anim_45 = value;
		Il2CppCodeGenWriteBarrier((&___anim_45), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // TITLE_MENU_MANAGER_T3788367697_H
#ifndef RAINSCRIPT_T4186780704_H
#define RAINSCRIPT_T4186780704_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// DigitalRuby.RainMaker.RainScript
struct  RainScript_t4186780704  : public BaseRainScript_t980278882
{
public:
	// System.Single DigitalRuby.RainMaker.RainScript::RainHeight
	float ___RainHeight_31;
	// System.Single DigitalRuby.RainMaker.RainScript::RainForwardOffset
	float ___RainForwardOffset_32;
	// System.Single DigitalRuby.RainMaker.RainScript::RainMistHeight
	float ___RainMistHeight_33;

public:
	inline static int32_t get_offset_of_RainHeight_31() { return static_cast<int32_t>(offsetof(RainScript_t4186780704, ___RainHeight_31)); }
	inline float get_RainHeight_31() const { return ___RainHeight_31; }
	inline float* get_address_of_RainHeight_31() { return &___RainHeight_31; }
	inline void set_RainHeight_31(float value)
	{
		___RainHeight_31 = value;
	}

	inline static int32_t get_offset_of_RainForwardOffset_32() { return static_cast<int32_t>(offsetof(RainScript_t4186780704, ___RainForwardOffset_32)); }
	inline float get_RainForwardOffset_32() const { return ___RainForwardOffset_32; }
	inline float* get_address_of_RainForwardOffset_32() { return &___RainForwardOffset_32; }
	inline void set_RainForwardOffset_32(float value)
	{
		___RainForwardOffset_32 = value;
	}

	inline static int32_t get_offset_of_RainMistHeight_33() { return static_cast<int32_t>(offsetof(RainScript_t4186780704, ___RainMistHeight_33)); }
	inline float get_RainMistHeight_33() const { return ___RainMistHeight_33; }
	inline float* get_address_of_RainMistHeight_33() { return &___RainMistHeight_33; }
	inline void set_RainMistHeight_33(float value)
	{
		___RainMistHeight_33 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // RAINSCRIPT_T4186780704_H
#ifndef RAINSCRIPT2D_T3497865708_H
#define RAINSCRIPT2D_T3497865708_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// DigitalRuby.RainMaker.RainScript2D
struct  RainScript2D_t3497865708  : public BaseRainScript_t980278882
{
public:
	// System.Single DigitalRuby.RainMaker.RainScript2D::cameraMultiplier
	float ___cameraMultiplier_32;
	// UnityEngine.Bounds DigitalRuby.RainMaker.RainScript2D::visibleBounds
	Bounds_t2266837910  ___visibleBounds_33;
	// System.Single DigitalRuby.RainMaker.RainScript2D::yOffset
	float ___yOffset_34;
	// System.Single DigitalRuby.RainMaker.RainScript2D::visibleWorldWidth
	float ___visibleWorldWidth_35;
	// System.Single DigitalRuby.RainMaker.RainScript2D::initialEmissionRain
	float ___initialEmissionRain_36;
	// UnityEngine.Vector2 DigitalRuby.RainMaker.RainScript2D::initialStartSpeedRain
	Vector2_t2156229523  ___initialStartSpeedRain_37;
	// UnityEngine.Vector2 DigitalRuby.RainMaker.RainScript2D::initialStartSizeRain
	Vector2_t2156229523  ___initialStartSizeRain_38;
	// UnityEngine.Vector2 DigitalRuby.RainMaker.RainScript2D::initialStartSpeedMist
	Vector2_t2156229523  ___initialStartSpeedMist_39;
	// UnityEngine.Vector2 DigitalRuby.RainMaker.RainScript2D::initialStartSizeMist
	Vector2_t2156229523  ___initialStartSizeMist_40;
	// UnityEngine.Vector2 DigitalRuby.RainMaker.RainScript2D::initialStartSpeedExplosion
	Vector2_t2156229523  ___initialStartSpeedExplosion_41;
	// UnityEngine.Vector2 DigitalRuby.RainMaker.RainScript2D::initialStartSizeExplosion
	Vector2_t2156229523  ___initialStartSizeExplosion_42;
	// UnityEngine.ParticleSystem/Particle[] DigitalRuby.RainMaker.RainScript2D::particles
	ParticleU5BU5D_t3069227754* ___particles_43;
	// System.Single DigitalRuby.RainMaker.RainScript2D::RainHeightMultiplier
	float ___RainHeightMultiplier_44;
	// System.Single DigitalRuby.RainMaker.RainScript2D::RainWidthMultiplier
	float ___RainWidthMultiplier_45;
	// UnityEngine.LayerMask DigitalRuby.RainMaker.RainScript2D::CollisionMask
	LayerMask_t3493934918  ___CollisionMask_46;
	// System.Single DigitalRuby.RainMaker.RainScript2D::CollisionLifeTimeRain
	float ___CollisionLifeTimeRain_47;
	// System.Single DigitalRuby.RainMaker.RainScript2D::RainMistCollisionMultiplier
	float ___RainMistCollisionMultiplier_48;

public:
	inline static int32_t get_offset_of_cameraMultiplier_32() { return static_cast<int32_t>(offsetof(RainScript2D_t3497865708, ___cameraMultiplier_32)); }
	inline float get_cameraMultiplier_32() const { return ___cameraMultiplier_32; }
	inline float* get_address_of_cameraMultiplier_32() { return &___cameraMultiplier_32; }
	inline void set_cameraMultiplier_32(float value)
	{
		___cameraMultiplier_32 = value;
	}

	inline static int32_t get_offset_of_visibleBounds_33() { return static_cast<int32_t>(offsetof(RainScript2D_t3497865708, ___visibleBounds_33)); }
	inline Bounds_t2266837910  get_visibleBounds_33() const { return ___visibleBounds_33; }
	inline Bounds_t2266837910 * get_address_of_visibleBounds_33() { return &___visibleBounds_33; }
	inline void set_visibleBounds_33(Bounds_t2266837910  value)
	{
		___visibleBounds_33 = value;
	}

	inline static int32_t get_offset_of_yOffset_34() { return static_cast<int32_t>(offsetof(RainScript2D_t3497865708, ___yOffset_34)); }
	inline float get_yOffset_34() const { return ___yOffset_34; }
	inline float* get_address_of_yOffset_34() { return &___yOffset_34; }
	inline void set_yOffset_34(float value)
	{
		___yOffset_34 = value;
	}

	inline static int32_t get_offset_of_visibleWorldWidth_35() { return static_cast<int32_t>(offsetof(RainScript2D_t3497865708, ___visibleWorldWidth_35)); }
	inline float get_visibleWorldWidth_35() const { return ___visibleWorldWidth_35; }
	inline float* get_address_of_visibleWorldWidth_35() { return &___visibleWorldWidth_35; }
	inline void set_visibleWorldWidth_35(float value)
	{
		___visibleWorldWidth_35 = value;
	}

	inline static int32_t get_offset_of_initialEmissionRain_36() { return static_cast<int32_t>(offsetof(RainScript2D_t3497865708, ___initialEmissionRain_36)); }
	inline float get_initialEmissionRain_36() const { return ___initialEmissionRain_36; }
	inline float* get_address_of_initialEmissionRain_36() { return &___initialEmissionRain_36; }
	inline void set_initialEmissionRain_36(float value)
	{
		___initialEmissionRain_36 = value;
	}

	inline static int32_t get_offset_of_initialStartSpeedRain_37() { return static_cast<int32_t>(offsetof(RainScript2D_t3497865708, ___initialStartSpeedRain_37)); }
	inline Vector2_t2156229523  get_initialStartSpeedRain_37() const { return ___initialStartSpeedRain_37; }
	inline Vector2_t2156229523 * get_address_of_initialStartSpeedRain_37() { return &___initialStartSpeedRain_37; }
	inline void set_initialStartSpeedRain_37(Vector2_t2156229523  value)
	{
		___initialStartSpeedRain_37 = value;
	}

	inline static int32_t get_offset_of_initialStartSizeRain_38() { return static_cast<int32_t>(offsetof(RainScript2D_t3497865708, ___initialStartSizeRain_38)); }
	inline Vector2_t2156229523  get_initialStartSizeRain_38() const { return ___initialStartSizeRain_38; }
	inline Vector2_t2156229523 * get_address_of_initialStartSizeRain_38() { return &___initialStartSizeRain_38; }
	inline void set_initialStartSizeRain_38(Vector2_t2156229523  value)
	{
		___initialStartSizeRain_38 = value;
	}

	inline static int32_t get_offset_of_initialStartSpeedMist_39() { return static_cast<int32_t>(offsetof(RainScript2D_t3497865708, ___initialStartSpeedMist_39)); }
	inline Vector2_t2156229523  get_initialStartSpeedMist_39() const { return ___initialStartSpeedMist_39; }
	inline Vector2_t2156229523 * get_address_of_initialStartSpeedMist_39() { return &___initialStartSpeedMist_39; }
	inline void set_initialStartSpeedMist_39(Vector2_t2156229523  value)
	{
		___initialStartSpeedMist_39 = value;
	}

	inline static int32_t get_offset_of_initialStartSizeMist_40() { return static_cast<int32_t>(offsetof(RainScript2D_t3497865708, ___initialStartSizeMist_40)); }
	inline Vector2_t2156229523  get_initialStartSizeMist_40() const { return ___initialStartSizeMist_40; }
	inline Vector2_t2156229523 * get_address_of_initialStartSizeMist_40() { return &___initialStartSizeMist_40; }
	inline void set_initialStartSizeMist_40(Vector2_t2156229523  value)
	{
		___initialStartSizeMist_40 = value;
	}

	inline static int32_t get_offset_of_initialStartSpeedExplosion_41() { return static_cast<int32_t>(offsetof(RainScript2D_t3497865708, ___initialStartSpeedExplosion_41)); }
	inline Vector2_t2156229523  get_initialStartSpeedExplosion_41() const { return ___initialStartSpeedExplosion_41; }
	inline Vector2_t2156229523 * get_address_of_initialStartSpeedExplosion_41() { return &___initialStartSpeedExplosion_41; }
	inline void set_initialStartSpeedExplosion_41(Vector2_t2156229523  value)
	{
		___initialStartSpeedExplosion_41 = value;
	}

	inline static int32_t get_offset_of_initialStartSizeExplosion_42() { return static_cast<int32_t>(offsetof(RainScript2D_t3497865708, ___initialStartSizeExplosion_42)); }
	inline Vector2_t2156229523  get_initialStartSizeExplosion_42() const { return ___initialStartSizeExplosion_42; }
	inline Vector2_t2156229523 * get_address_of_initialStartSizeExplosion_42() { return &___initialStartSizeExplosion_42; }
	inline void set_initialStartSizeExplosion_42(Vector2_t2156229523  value)
	{
		___initialStartSizeExplosion_42 = value;
	}

	inline static int32_t get_offset_of_particles_43() { return static_cast<int32_t>(offsetof(RainScript2D_t3497865708, ___particles_43)); }
	inline ParticleU5BU5D_t3069227754* get_particles_43() const { return ___particles_43; }
	inline ParticleU5BU5D_t3069227754** get_address_of_particles_43() { return &___particles_43; }
	inline void set_particles_43(ParticleU5BU5D_t3069227754* value)
	{
		___particles_43 = value;
		Il2CppCodeGenWriteBarrier((&___particles_43), value);
	}

	inline static int32_t get_offset_of_RainHeightMultiplier_44() { return static_cast<int32_t>(offsetof(RainScript2D_t3497865708, ___RainHeightMultiplier_44)); }
	inline float get_RainHeightMultiplier_44() const { return ___RainHeightMultiplier_44; }
	inline float* get_address_of_RainHeightMultiplier_44() { return &___RainHeightMultiplier_44; }
	inline void set_RainHeightMultiplier_44(float value)
	{
		___RainHeightMultiplier_44 = value;
	}

	inline static int32_t get_offset_of_RainWidthMultiplier_45() { return static_cast<int32_t>(offsetof(RainScript2D_t3497865708, ___RainWidthMultiplier_45)); }
	inline float get_RainWidthMultiplier_45() const { return ___RainWidthMultiplier_45; }
	inline float* get_address_of_RainWidthMultiplier_45() { return &___RainWidthMultiplier_45; }
	inline void set_RainWidthMultiplier_45(float value)
	{
		___RainWidthMultiplier_45 = value;
	}

	inline static int32_t get_offset_of_CollisionMask_46() { return static_cast<int32_t>(offsetof(RainScript2D_t3497865708, ___CollisionMask_46)); }
	inline LayerMask_t3493934918  get_CollisionMask_46() const { return ___CollisionMask_46; }
	inline LayerMask_t3493934918 * get_address_of_CollisionMask_46() { return &___CollisionMask_46; }
	inline void set_CollisionMask_46(LayerMask_t3493934918  value)
	{
		___CollisionMask_46 = value;
	}

	inline static int32_t get_offset_of_CollisionLifeTimeRain_47() { return static_cast<int32_t>(offsetof(RainScript2D_t3497865708, ___CollisionLifeTimeRain_47)); }
	inline float get_CollisionLifeTimeRain_47() const { return ___CollisionLifeTimeRain_47; }
	inline float* get_address_of_CollisionLifeTimeRain_47() { return &___CollisionLifeTimeRain_47; }
	inline void set_CollisionLifeTimeRain_47(float value)
	{
		___CollisionLifeTimeRain_47 = value;
	}

	inline static int32_t get_offset_of_RainMistCollisionMultiplier_48() { return static_cast<int32_t>(offsetof(RainScript2D_t3497865708, ___RainMistCollisionMultiplier_48)); }
	inline float get_RainMistCollisionMultiplier_48() const { return ___RainMistCollisionMultiplier_48; }
	inline float* get_address_of_RainMistCollisionMultiplier_48() { return &___RainMistCollisionMultiplier_48; }
	inline void set_RainMistCollisionMultiplier_48(float value)
	{
		___RainMistCollisionMultiplier_48 = value;
	}
};

struct RainScript2D_t3497865708_StaticFields
{
public:
	// UnityEngine.Color32 DigitalRuby.RainMaker.RainScript2D::explosionColor
	Color32_t2600501292  ___explosionColor_31;

public:
	inline static int32_t get_offset_of_explosionColor_31() { return static_cast<int32_t>(offsetof(RainScript2D_t3497865708_StaticFields, ___explosionColor_31)); }
	inline Color32_t2600501292  get_explosionColor_31() const { return ___explosionColor_31; }
	inline Color32_t2600501292 * get_address_of_explosionColor_31() { return &___explosionColor_31; }
	inline void set_explosionColor_31(Color32_t2600501292  value)
	{
		___explosionColor_31 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // RAINSCRIPT2D_T3497865708_H





#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize3300 = { sizeof (PB_SaveOptions_t2193799655)+ sizeof (RuntimeObject), sizeof(int32_t), 0, 0 };
extern const int32_t g_FieldOffsetTable3300[8] = 
{
	PB_SaveOptions_t2193799655::get_offset_of_value___2() + static_cast<int32_t>(sizeof(RuntimeObject)),
	0,
	0,
	0,
	0,
	0,
	0,
	0,
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize3301 = { sizeof (PB_ScaleType_t2968617624)+ sizeof (RuntimeObject), sizeof(int32_t), 0, 0 };
extern const int32_t g_FieldOffsetTable3301[4] = 
{
	PB_ScaleType_t2968617624::get_offset_of_value___2() + static_cast<int32_t>(sizeof(RuntimeObject)),
	0,
	0,
	0,
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize3302 = { sizeof (PB_DragModType_t690455712)+ sizeof (RuntimeObject), sizeof(int32_t), 0, 0 };
extern const int32_t g_FieldOffsetTable3302[4] = 
{
	PB_DragModType_t690455712::get_offset_of_value___2() + static_cast<int32_t>(sizeof(RuntimeObject)),
	0,
	0,
	0,
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize3303 = { sizeof (PB_PrefabDataType_t2758517315)+ sizeof (RuntimeObject), sizeof(int32_t), 0, 0 };
extern const int32_t g_FieldOffsetTable3303[3] = 
{
	PB_PrefabDataType_t2758517315::get_offset_of_value___2() + static_cast<int32_t>(sizeof(RuntimeObject)),
	0,
	0,
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize3304 = { sizeof (PB_PrefabData_t217394751), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable3304[2] = 
{
	PB_PrefabData_t217394751::get_offset_of_prefab_0(),
	PB_PrefabData_t217394751::get_offset_of_selected_1(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize3305 = { sizeof (PB_SaveObject_t912869347), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable3305[72] = 
{
	PB_SaveObject_t912869347::get_offset_of_prefabList_4(),
	PB_SaveObject_t912869347::get_offset_of_prefabData_5(),
	PB_SaveObject_t912869347::get_offset_of_paintType_6(),
	PB_SaveObject_t912869347::get_offset_of_brushSize_7(),
	PB_SaveObject_t912869347::get_offset_of_minBrushSize_8(),
	PB_SaveObject_t912869347::get_offset_of_maxBrushSize_9(),
	PB_SaveObject_t912869347::get_offset_of_paintDeltaDistance_10(),
	PB_SaveObject_t912869347::get_offset_of_maxPaintDeltaDistance_11(),
	PB_SaveObject_t912869347::get_offset_of_minPaintDeltaDistance_12(),
	PB_SaveObject_t912869347::get_offset_of_prefabsPerStroke_13(),
	PB_SaveObject_t912869347::get_offset_of_maxprefabsPerStroke_14(),
	PB_SaveObject_t912869347::get_offset_of_minprefabsPerStroke_15(),
	PB_SaveObject_t912869347::get_offset_of_spawnHeight_16(),
	PB_SaveObject_t912869347::get_offset_of_addRigidbodyToPaintedPrefab_17(),
	PB_SaveObject_t912869347::get_offset_of_physicsIterations_18(),
	PB_SaveObject_t912869347::get_offset_of_checkLayer_19(),
	PB_SaveObject_t912869347::get_offset_of_checkTag_20(),
	PB_SaveObject_t912869347::get_offset_of_checkSlope_21(),
	PB_SaveObject_t912869347::get_offset_of_ignorePaintedPrefabs_22(),
	PB_SaveObject_t912869347::get_offset_of_ignoreTriggers_23(),
	PB_SaveObject_t912869347::get_offset_of_chainPivotAxis_24(),
	PB_SaveObject_t912869347::get_offset_of_chainDirection_25(),
	PB_SaveObject_t912869347::get_offset_of_requiredTagMask_26(),
	PB_SaveObject_t912869347::get_offset_of_requiredLayerMask_27(),
	PB_SaveObject_t912869347::get_offset_of_minRequiredSlope_28(),
	PB_SaveObject_t912869347::get_offset_of_maxRequiredSlope_29(),
	PB_SaveObject_t912869347::get_offset_of_prefabOriginOffset_30(),
	PB_SaveObject_t912869347::get_offset_of_prefabRotationOffset_31(),
	PB_SaveObject_t912869347::get_offset_of_draggingAction_32(),
	PB_SaveObject_t912869347::get_offset_of_rotationAxis_33(),
	PB_SaveObject_t912869347::get_offset_of_rotationSensitivity_34(),
	PB_SaveObject_t912869347::get_offset_of_parentingStyle_35(),
	PB_SaveObject_t912869347::get_offset_of_parent_36(),
	PB_SaveObject_t912869347::get_offset_of_rotateToMatchSurface_37(),
	PB_SaveObject_t912869347::get_offset_of_rotateSurfaceDirection_38(),
	PB_SaveObject_t912869347::get_offset_of_randomizeRotation_39(),
	PB_SaveObject_t912869347::get_offset_of_minXRotation_40(),
	PB_SaveObject_t912869347::get_offset_of_maxXRotation_41(),
	PB_SaveObject_t912869347::get_offset_of_minYRotation_42(),
	PB_SaveObject_t912869347::get_offset_of_maxYRotation_43(),
	PB_SaveObject_t912869347::get_offset_of_minZRotation_44(),
	PB_SaveObject_t912869347::get_offset_of_maxZRotation_45(),
	PB_SaveObject_t912869347::get_offset_of_scaleType_46(),
	PB_SaveObject_t912869347::get_offset_of_scaleApplicationType_47(),
	PB_SaveObject_t912869347::get_offset_of_minScale_48(),
	PB_SaveObject_t912869347::get_offset_of_maxScale_49(),
	PB_SaveObject_t912869347::get_offset_of_minXScale_50(),
	PB_SaveObject_t912869347::get_offset_of_maxXScale_51(),
	PB_SaveObject_t912869347::get_offset_of_minYScale_52(),
	PB_SaveObject_t912869347::get_offset_of_maxYScale_53(),
	PB_SaveObject_t912869347::get_offset_of_minZScale_54(),
	PB_SaveObject_t912869347::get_offset_of_maxZScale_55(),
	PB_SaveObject_t912869347::get_offset_of_parentList_56(),
	PB_SaveObject_t912869347::get_offset_of_eraseBrushSize_57(),
	PB_SaveObject_t912869347::get_offset_of_minEraseBrushSize_58(),
	PB_SaveObject_t912869347::get_offset_of_maxEraseBrushSize_59(),
	PB_SaveObject_t912869347::get_offset_of_eraseType_60(),
	PB_SaveObject_t912869347::get_offset_of_checkLayerForErase_61(),
	PB_SaveObject_t912869347::get_offset_of_checkTagForErase_62(),
	PB_SaveObject_t912869347::get_offset_of_checkSlopeForErase_63(),
	PB_SaveObject_t912869347::get_offset_of_mustBeSelectedInBrush_64(),
	PB_SaveObject_t912869347::get_offset_of_requiredTagMaskForErase_65(),
	PB_SaveObject_t912869347::get_offset_of_requiredLayerMaskForErase_66(),
	PB_SaveObject_t912869347::get_offset_of_minRequiredSlopeForErase_67(),
	PB_SaveObject_t912869347::get_offset_of_maxRequiredSlopeForErase_68(),
	PB_SaveObject_t912869347::get_offset_of_eraseDetection_69(),
	PB_SaveObject_t912869347::get_offset_of_paintBrushHotKey_70(),
	PB_SaveObject_t912869347::get_offset_of_paintBrushHoldKey_71(),
	PB_SaveObject_t912869347::get_offset_of_removeBrushHotKey_72(),
	PB_SaveObject_t912869347::get_offset_of_removeBrushHoldKey_73(),
	PB_SaveObject_t912869347::get_offset_of_disableBrushHotKey_74(),
	PB_SaveObject_t912869347::get_offset_of_disableBrushHoldKey_75(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize3306 = { sizeof (BaseRainScript_t980278882), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable3306[27] = 
{
	BaseRainScript_t980278882::get_offset_of_Camera_4(),
	BaseRainScript_t980278882::get_offset_of_FollowCamera_5(),
	BaseRainScript_t980278882::get_offset_of_RainSoundLight_6(),
	BaseRainScript_t980278882::get_offset_of_RainSoundMedium_7(),
	BaseRainScript_t980278882::get_offset_of_RainSoundHeavy_8(),
	BaseRainScript_t980278882::get_offset_of_RainSoundAudioMixer_9(),
	BaseRainScript_t980278882::get_offset_of_RainIntensity_10(),
	BaseRainScript_t980278882::get_offset_of_RainFallParticleSystem_11(),
	BaseRainScript_t980278882::get_offset_of_RainExplosionParticleSystem_12(),
	BaseRainScript_t980278882::get_offset_of_RainMistParticleSystem_13(),
	BaseRainScript_t980278882::get_offset_of_RainMistThreshold_14(),
	BaseRainScript_t980278882::get_offset_of_WindSound_15(),
	BaseRainScript_t980278882::get_offset_of_WindSoundVolumeModifier_16(),
	BaseRainScript_t980278882::get_offset_of_WindZone_17(),
	BaseRainScript_t980278882::get_offset_of_WindSpeedRange_18(),
	BaseRainScript_t980278882::get_offset_of_WindChangeInterval_19(),
	BaseRainScript_t980278882::get_offset_of_EnableWind_20(),
	BaseRainScript_t980278882::get_offset_of_audioSourceRainLight_21(),
	BaseRainScript_t980278882::get_offset_of_audioSourceRainMedium_22(),
	BaseRainScript_t980278882::get_offset_of_audioSourceRainHeavy_23(),
	BaseRainScript_t980278882::get_offset_of_audioSourceRainCurrent_24(),
	BaseRainScript_t980278882::get_offset_of_audioSourceWind_25(),
	BaseRainScript_t980278882::get_offset_of_rainMaterial_26(),
	BaseRainScript_t980278882::get_offset_of_rainExplosionMaterial_27(),
	BaseRainScript_t980278882::get_offset_of_rainMistMaterial_28(),
	BaseRainScript_t980278882::get_offset_of_lastRainIntensityValue_29(),
	BaseRainScript_t980278882::get_offset_of_nextWindTime_30(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize3307 = { sizeof (LoopingAudioSource_t2892973928), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable3307[2] = 
{
	LoopingAudioSource_t2892973928::get_offset_of_U3CAudioSourceU3Ek__BackingField_0(),
	LoopingAudioSource_t2892973928::get_offset_of_U3CTargetVolumeU3Ek__BackingField_1(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize3308 = { sizeof (RainCollision_t1762856611), -1, sizeof(RainCollision_t1762856611_StaticFields), 0 };
extern const int32_t g_FieldOffsetTable3308[4] = 
{
	RainCollision_t1762856611_StaticFields::get_offset_of_color_4(),
	RainCollision_t1762856611::get_offset_of_collisionEvents_5(),
	RainCollision_t1762856611::get_offset_of_RainExplosion_6(),
	RainCollision_t1762856611::get_offset_of_RainParticleSystem_7(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize3309 = { sizeof (RainScript_t4186780704), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable3309[3] = 
{
	RainScript_t4186780704::get_offset_of_RainHeight_31(),
	RainScript_t4186780704::get_offset_of_RainForwardOffset_32(),
	RainScript_t4186780704::get_offset_of_RainMistHeight_33(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize3310 = { sizeof (RainScript2D_t3497865708), -1, sizeof(RainScript2D_t3497865708_StaticFields), 0 };
extern const int32_t g_FieldOffsetTable3310[18] = 
{
	RainScript2D_t3497865708_StaticFields::get_offset_of_explosionColor_31(),
	RainScript2D_t3497865708::get_offset_of_cameraMultiplier_32(),
	RainScript2D_t3497865708::get_offset_of_visibleBounds_33(),
	RainScript2D_t3497865708::get_offset_of_yOffset_34(),
	RainScript2D_t3497865708::get_offset_of_visibleWorldWidth_35(),
	RainScript2D_t3497865708::get_offset_of_initialEmissionRain_36(),
	RainScript2D_t3497865708::get_offset_of_initialStartSpeedRain_37(),
	RainScript2D_t3497865708::get_offset_of_initialStartSizeRain_38(),
	RainScript2D_t3497865708::get_offset_of_initialStartSpeedMist_39(),
	RainScript2D_t3497865708::get_offset_of_initialStartSizeMist_40(),
	RainScript2D_t3497865708::get_offset_of_initialStartSpeedExplosion_41(),
	RainScript2D_t3497865708::get_offset_of_initialStartSizeExplosion_42(),
	RainScript2D_t3497865708::get_offset_of_particles_43(),
	RainScript2D_t3497865708::get_offset_of_RainHeightMultiplier_44(),
	RainScript2D_t3497865708::get_offset_of_RainWidthMultiplier_45(),
	RainScript2D_t3497865708::get_offset_of_CollisionMask_46(),
	RainScript2D_t3497865708::get_offset_of_CollisionLifeTimeRain_47(),
	RainScript2D_t3497865708::get_offset_of_RainMistCollisionMultiplier_48(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize3311 = { sizeof (EnemyController_t2191660454), -1, sizeof(EnemyController_t2191660454_StaticFields), 0 };
extern const int32_t g_FieldOffsetTable3311[27] = 
{
	EnemyController_t2191660454::get_offset_of_startingPosition_4(),
	EnemyController_t2191660454::get_offset_of_rangeChecks_5(),
	EnemyController_t2191660454::get_offset_of_onMesh_6(),
	EnemyController_t2191660454::get_offset_of_typeOfEnemy_7(),
	EnemyController_t2191660454::get_offset_of_enemyAnimator_8(),
	EnemyController_t2191660454::get_offset_of_player_9(),
	EnemyController_t2191660454::get_offset_of_targetPoint_10(),
	EnemyController_t2191660454::get_offset_of_randomPointObject_11(),
	EnemyController_t2191660454::get_offset_of_meshAgent_12(),
	EnemyController_t2191660454::get_offset_of_turnSpeed_13(),
	EnemyController_t2191660454::get_offset_of_viewRadius_14(),
	EnemyController_t2191660454::get_offset_of_fovAngle_15(),
	EnemyController_t2191660454::get_offset_of_targetMask_16(),
	EnemyController_t2191660454::get_offset_of_obstructionMask_17(),
	EnemyController_t2191660454::get_offset_of_distanceToPlayer_18(),
	EnemyController_t2191660454::get_offset_of_isPlayerNear_19(),
	EnemyController_t2191660454::get_offset_of_canSeePlayer_20(),
	EnemyController_t2191660454::get_offset_of_behaviorState_21(),
	EnemyController_t2191660454::get_offset_of_alertDelay_22(),
	EnemyController_t2191660454::get_offset_of_lookDelay_23(),
	EnemyController_t2191660454::get_offset_of_alerted_24(),
	EnemyController_t2191660454::get_offset_of_lookingForPlayer_25(),
	EnemyController_t2191660454::get_offset_of_roaming_26(),
	EnemyController_t2191660454::get_offset_of_isPlayerRunning_27(),
	EnemyController_t2191660454::get_offset_of_flashlightDisabled_28(),
	EnemyController_t2191660454::get_offset_of_randomCircle_29(),
	EnemyController_t2191660454_StaticFields::get_offset_of_IsAttacking_30(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize3312 = { sizeof (EnemyState_t931213167)+ sizeof (RuntimeObject), sizeof(int32_t), 0, 0 };
extern const int32_t g_FieldOffsetTable3312[8] = 
{
	EnemyState_t931213167::get_offset_of_value___2() + static_cast<int32_t>(sizeof(RuntimeObject)),
	0,
	0,
	0,
	0,
	0,
	0,
	0,
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize3313 = { sizeof (enemyType_t1630539311)+ sizeof (RuntimeObject), sizeof(int32_t), 0, 0 };
extern const int32_t g_FieldOffsetTable3313[4] = 
{
	enemyType_t1630539311::get_offset_of_value___2() + static_cast<int32_t>(sizeof(RuntimeObject)),
	0,
	0,
	0,
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize3314 = { sizeof (U3CFOVRoutineU3Ec__Iterator0_t330645109), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable3314[4] = 
{
	U3CFOVRoutineU3Ec__Iterator0_t330645109::get_offset_of_U24this_0(),
	U3CFOVRoutineU3Ec__Iterator0_t330645109::get_offset_of_U24current_1(),
	U3CFOVRoutineU3Ec__Iterator0_t330645109::get_offset_of_U24disposing_2(),
	U3CFOVRoutineU3Ec__Iterator0_t330645109::get_offset_of_U24PC_3(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize3315 = { sizeof (U3CAlertTimerU3Ec__Iterator1_t4019344796), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable3315[6] = 
{
	U3CAlertTimerU3Ec__Iterator1_t4019344796::get_offset_of_duration_0(),
	U3CAlertTimerU3Ec__Iterator1_t4019344796::get_offset_of_U3CwaitU3E__0_1(),
	U3CAlertTimerU3Ec__Iterator1_t4019344796::get_offset_of_U24this_2(),
	U3CAlertTimerU3Ec__Iterator1_t4019344796::get_offset_of_U24current_3(),
	U3CAlertTimerU3Ec__Iterator1_t4019344796::get_offset_of_U24disposing_4(),
	U3CAlertTimerU3Ec__Iterator1_t4019344796::get_offset_of_U24PC_5(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize3316 = { sizeof (U3CLookWaitU3Ec__Iterator2_t3652331220), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable3316[6] = 
{
	U3CLookWaitU3Ec__Iterator2_t3652331220::get_offset_of_duration_0(),
	U3CLookWaitU3Ec__Iterator2_t3652331220::get_offset_of_U3CwaitU3E__0_1(),
	U3CLookWaitU3Ec__Iterator2_t3652331220::get_offset_of_U24this_2(),
	U3CLookWaitU3Ec__Iterator2_t3652331220::get_offset_of_U24current_3(),
	U3CLookWaitU3Ec__Iterator2_t3652331220::get_offset_of_U24disposing_4(),
	U3CLookWaitU3Ec__Iterator2_t3652331220::get_offset_of_U24PC_5(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize3317 = { sizeof (MapController_t3762646607), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable3317[14] = 
{
	MapController_t3762646607::get_offset_of_mapCamera_4(),
	MapController_t3762646607::get_offset_of_minZoom_5(),
	MapController_t3762646607::get_offset_of_maxZoom_6(),
	MapController_t3762646607::get_offset_of_pos_7(),
	MapController_t3762646607::get_offset_of_mapArrow_8(),
	MapController_t3762646607::get_offset_of_mapContainer_9(),
	MapController_t3762646607::get_offset_of_previousDistance_10(),
	MapController_t3762646607::get_offset_of_currentDistance_11(),
	MapController_t3762646607::get_offset_of_midPoint_12(),
	MapController_t3762646607::get_offset_of_ScreenSize_13(),
	MapController_t3762646607::get_offset_of_originalPos_14(),
	MapController_t3762646607::get_offset_of_VITA_15(),
	MapController_t3762646607::get_offset_of_RIGHT_16(),
	MapController_t3762646607::get_offset_of_LEFT_17(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize3318 = { sizeof (PlayerController_t2064355688), -1, sizeof(PlayerController_t2064355688_StaticFields), 0 };
extern const int32_t g_FieldOffsetTable3318[78] = 
{
	PlayerController_t2064355688::get_offset_of_characterController_4(),
	PlayerController_t2064355688_StaticFields::get_offset_of_HasFlashlight_5(),
	PlayerController_t2064355688_StaticFields::get_offset_of_FlashlightOff_6(),
	PlayerController_t2064355688::get_offset_of_health_7(),
	PlayerController_t2064355688::get_offset_of_speed_8(),
	PlayerController_t2064355688::get_offset_of_stamina_9(),
	PlayerController_t2064355688::get_offset_of_rechargeDelay_10(),
	PlayerController_t2064355688::get_offset_of_stimCooldown_11(),
	PlayerController_t2064355688::get_offset_of_staminaObject_12(),
	PlayerController_t2064355688::get_offset_of__walkSpeed_13(),
	PlayerController_t2064355688::get_offset_of_animator_14(),
	PlayerController_t2064355688::get_offset_of_cameraRig_15(),
	PlayerController_t2064355688::get_offset_of_Camera_16(),
	PlayerController_t2064355688::get_offset_of_camObject_17(),
	PlayerController_t2064355688::get_offset_of_mapCamera_18(),
	PlayerController_t2064355688::get_offset_of_UpLimit_19(),
	PlayerController_t2064355688::get_offset_of_downLimit_20(),
	PlayerController_t2064355688::get_offset_of_flashlight_21(),
	PlayerController_t2064355688::get_offset_of_vertlight_22(),
	PlayerController_t2064355688::get_offset_of_lightRig_23(),
	PlayerController_t2064355688::get_offset_of_lightObject_24(),
	PlayerController_t2064355688::get_offset_of_lightShaft_25(),
	PlayerController_t2064355688::get_offset_of_handRig_26(),
	PlayerController_t2064355688::get_offset_of_bodyRig_27(),
	PlayerController_t2064355688::get_offset_of_lightBeam_28(),
	PlayerController_t2064355688::get_offset_of_lightHaze_29(),
	PlayerController_t2064355688::get_offset_of_lightChargeObject_30(),
	PlayerController_t2064355688::get_offset_of_lightRoot_31(),
	PlayerController_t2064355688::get_offset_of_currentTarget_32(),
	PlayerController_t2064355688::get_offset_of_storedLightRotation_33(),
	PlayerController_t2064355688::get_offset_of_endLightRotation_34(),
	PlayerController_t2064355688::get_offset_of_lightCharge_35(),
	PlayerController_t2064355688::get_offset_of_colorStart_36(),
	PlayerController_t2064355688::get_offset_of_colorEnd_37(),
	PlayerController_t2064355688::get_offset_of_colorTransparent_38(),
	PlayerController_t2064355688::get_offset_of_lightDuration_39(),
	PlayerController_t2064355688::get_offset_of_lookSensitivity_40(),
	PlayerController_t2064355688::get_offset_of_flashlightCharge_41(),
	PlayerController_t2064355688::get_offset_of_flashlightDisabled_42(),
	PlayerController_t2064355688::get_offset_of_batteryText_43(),
	PlayerController_t2064355688::get_offset_of_ssaoScript_44(),
	PlayerController_t2064355688::get_offset_of_bokehScript_45(),
	PlayerController_t2064355688::get_offset_of_enabledText_46(),
	PlayerController_t2064355688::get_offset_of_lerpRate_47(),
	PlayerController_t2064355688::get_offset_of_gravity_48(),
	PlayerController_t2064355688::get_offset_of__verticalSpeed_49(),
	PlayerController_t2064355688::get_offset_of_verticalMove_50(),
	PlayerController_t2064355688::get_offset_of_horizontalRotation_51(),
	PlayerController_t2064355688::get_offset_of_horizontalCamRotation_52(),
	PlayerController_t2064355688::get_offset_of_verticalCamRotation_53(),
	PlayerController_t2064355688::get_offset_of_savedRotation_54(),
	PlayerController_t2064355688::get_offset_of_savedPosition_55(),
	PlayerController_t2064355688::get_offset_of_isPaused_56(),
	PlayerController_t2064355688::get_offset_of_skinnedRenderer_57(),
	PlayerController_t2064355688::get_offset_of_walkStart_58(),
	PlayerController_t2064355688::get_offset_of_lightFocusing_59(),
	PlayerController_t2064355688::get_offset_of_isRunning_60(),
	PlayerController_t2064355688::get_offset_of_isWalking_61(),
	PlayerController_t2064355688::get_offset_of_isStimulant_62(),
	PlayerController_t2064355688::get_offset_of_isLerping_63(),
	PlayerController_t2064355688::get_offset_of_isCharging_64(),
	PlayerController_t2064355688_StaticFields::get_offset_of_isMap_65(),
	PlayerController_t2064355688::get_offset_of_lightMovement_66(),
	PlayerController_t2064355688_StaticFields::get_offset_of_delayButton_67(),
	PlayerController_t2064355688::get_offset_of_cooldownValue_68(),
	PlayerController_t2064355688::get_offset_of_pausePanel_69(),
	PlayerController_t2064355688::get_offset_of_mapPanel_70(),
	PlayerController_t2064355688::get_offset_of_mapCam_71(),
	PlayerController_t2064355688::get_offset_of_mapIndicator_72(),
	PlayerController_t2064355688::get_offset_of_perfOverlay_73(),
	PlayerController_t2064355688::get_offset_of_UICanvasGroup_74(),
	PlayerController_t2064355688::get_offset_of_currentCharge_75(),
	PlayerController_t2064355688_StaticFields::get_offset_of_CrossFade_76(),
	PlayerController_t2064355688_StaticFields::get_offset_of_IsRunning_77(),
	PlayerController_t2064355688_StaticFields::get_offset_of_IsWalking_78(),
	PlayerController_t2064355688_StaticFields::get_offset_of_IsIdle_79(),
	PlayerController_t2064355688_StaticFields::get_offset_of_IsGrab_80(),
	PlayerController_t2064355688_StaticFields::get_offset_of_PainValue_81(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize3319 = { sizeof (Command_t2676217732), -1, 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize3320 = { sizeof (U3CHealLerpU3Ec__Iterator0_t36755912), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable3320[9] = 
{
	U3CHealLerpU3Ec__Iterator0_t36755912::get_offset_of_U3CtimeU3E__0_0(),
	U3CHealLerpU3Ec__Iterator0_t36755912::get_offset_of_duration_1(),
	U3CHealLerpU3Ec__Iterator0_t36755912::get_offset_of_StartValue_2(),
	U3CHealLerpU3Ec__Iterator0_t36755912::get_offset_of_endValue_3(),
	U3CHealLerpU3Ec__Iterator0_t36755912::get_offset_of_U3CswapU3E__1_4(),
	U3CHealLerpU3Ec__Iterator0_t36755912::get_offset_of_U24this_5(),
	U3CHealLerpU3Ec__Iterator0_t36755912::get_offset_of_U24current_6(),
	U3CHealLerpU3Ec__Iterator0_t36755912::get_offset_of_U24disposing_7(),
	U3CHealLerpU3Ec__Iterator0_t36755912::get_offset_of_U24PC_8(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize3321 = { sizeof (U3CWalkLerpU3Ec__Iterator1_t3440739653), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable3321[10] = 
{
	U3CWalkLerpU3Ec__Iterator1_t3440739653::get_offset_of_U3CtimeU3E__0_0(),
	U3CWalkLerpU3Ec__Iterator1_t3440739653::get_offset_of_duration_1(),
	U3CWalkLerpU3Ec__Iterator1_t3440739653::get_offset_of_StartValue_2(),
	U3CWalkLerpU3Ec__Iterator1_t3440739653::get_offset_of_endValue_3(),
	U3CWalkLerpU3Ec__Iterator1_t3440739653::get_offset_of_U3CswapU3E__1_4(),
	U3CWalkLerpU3Ec__Iterator1_t3440739653::get_offset_of_U3CswapU3E__2_5(),
	U3CWalkLerpU3Ec__Iterator1_t3440739653::get_offset_of_U24this_6(),
	U3CWalkLerpU3Ec__Iterator1_t3440739653::get_offset_of_U24current_7(),
	U3CWalkLerpU3Ec__Iterator1_t3440739653::get_offset_of_U24disposing_8(),
	U3CWalkLerpU3Ec__Iterator1_t3440739653::get_offset_of_U24PC_9(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize3322 = { sizeof (U3CFadeLightDynamicInputU3Ec__Iterator2_t2548910918), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable3322[16] = 
{
	U3CFadeLightDynamicInputU3Ec__Iterator2_t2548910918::get_offset_of_U3CtimeU3E__0_0(),
	U3CFadeLightDynamicInputU3Ec__Iterator2_t2548910918::get_offset_of_U3CconeScaleU3E__0_1(),
	U3CFadeLightDynamicInputU3Ec__Iterator2_t2548910918::get_offset_of_duration_2(),
	U3CFadeLightDynamicInputU3Ec__Iterator2_t2548910918::get_offset_of_StartColor_3(),
	U3CFadeLightDynamicInputU3Ec__Iterator2_t2548910918::get_offset_of_endColor_4(),
	U3CFadeLightDynamicInputU3Ec__Iterator2_t2548910918::get_offset_of_StartIntensity_5(),
	U3CFadeLightDynamicInputU3Ec__Iterator2_t2548910918::get_offset_of_endIntensity_6(),
	U3CFadeLightDynamicInputU3Ec__Iterator2_t2548910918::get_offset_of_StartAngle_7(),
	U3CFadeLightDynamicInputU3Ec__Iterator2_t2548910918::get_offset_of_endAngle_8(),
	U3CFadeLightDynamicInputU3Ec__Iterator2_t2548910918::get_offset_of_StartSize_9(),
	U3CFadeLightDynamicInputU3Ec__Iterator2_t2548910918::get_offset_of_endSize_10(),
	U3CFadeLightDynamicInputU3Ec__Iterator2_t2548910918::get_offset_of_U3CscalarU3E__1_11(),
	U3CFadeLightDynamicInputU3Ec__Iterator2_t2548910918::get_offset_of_U24this_12(),
	U3CFadeLightDynamicInputU3Ec__Iterator2_t2548910918::get_offset_of_U24current_13(),
	U3CFadeLightDynamicInputU3Ec__Iterator2_t2548910918::get_offset_of_U24disposing_14(),
	U3CFadeLightDynamicInputU3Ec__Iterator2_t2548910918::get_offset_of_U24PC_15(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize3323 = { sizeof (U3CFadeLightStaticInputU3Ec__Iterator3_t1429986291), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable3323[16] = 
{
	U3CFadeLightStaticInputU3Ec__Iterator3_t1429986291::get_offset_of_U3CtimeU3E__0_0(),
	U3CFadeLightStaticInputU3Ec__Iterator3_t1429986291::get_offset_of_U3CconeScaleU3E__0_1(),
	U3CFadeLightStaticInputU3Ec__Iterator3_t1429986291::get_offset_of_duration_2(),
	U3CFadeLightStaticInputU3Ec__Iterator3_t1429986291::get_offset_of_StartColor_3(),
	U3CFadeLightStaticInputU3Ec__Iterator3_t1429986291::get_offset_of_endColor_4(),
	U3CFadeLightStaticInputU3Ec__Iterator3_t1429986291::get_offset_of_StartIntensity_5(),
	U3CFadeLightStaticInputU3Ec__Iterator3_t1429986291::get_offset_of_endIntensity_6(),
	U3CFadeLightStaticInputU3Ec__Iterator3_t1429986291::get_offset_of_StartAngle_7(),
	U3CFadeLightStaticInputU3Ec__Iterator3_t1429986291::get_offset_of_endAngle_8(),
	U3CFadeLightStaticInputU3Ec__Iterator3_t1429986291::get_offset_of_StartSize_9(),
	U3CFadeLightStaticInputU3Ec__Iterator3_t1429986291::get_offset_of_endSize_10(),
	U3CFadeLightStaticInputU3Ec__Iterator3_t1429986291::get_offset_of_U3CscalarU3E__1_11(),
	U3CFadeLightStaticInputU3Ec__Iterator3_t1429986291::get_offset_of_U24this_12(),
	U3CFadeLightStaticInputU3Ec__Iterator3_t1429986291::get_offset_of_U24current_13(),
	U3CFadeLightStaticInputU3Ec__Iterator3_t1429986291::get_offset_of_U24disposing_14(),
	U3CFadeLightStaticInputU3Ec__Iterator3_t1429986291::get_offset_of_U24PC_15(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize3324 = { sizeof (U3CLerpCamU3Ec__Iterator4_t1099704510), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable3324[18] = 
{
	U3CLerpCamU3Ec__Iterator4_t1099704510::get_offset_of_U3CtimeU3E__0_0(),
	U3CLerpCamU3Ec__Iterator4_t1099704510::get_offset_of_U3ClocalEulerAnglesU3E__0_1(),
	U3CLerpCamU3Ec__Iterator4_t1099704510::get_offset_of_U3CcurrentYU3E__0_2(),
	U3CLerpCamU3Ec__Iterator4_t1099704510::get_offset_of_U3CcurrentXU3E__0_3(),
	U3CLerpCamU3Ec__Iterator4_t1099704510::get_offset_of_U3CeulerAnglesU3E__0_4(),
	U3CLerpCamU3Ec__Iterator4_t1099704510::get_offset_of_U3ClightCurrentZU3E__0_5(),
	U3CLerpCamU3Ec__Iterator4_t1099704510::get_offset_of_U3ClightCurrentYU3E__0_6(),
	U3CLerpCamU3Ec__Iterator4_t1099704510::get_offset_of_duration_7(),
	U3CLerpCamU3Ec__Iterator4_t1099704510::get_offset_of_U3CnewYU3E__1_8(),
	U3CLerpCamU3Ec__Iterator4_t1099704510::get_offset_of_U3CnewXU3E__1_9(),
	U3CLerpCamU3Ec__Iterator4_t1099704510::get_offset_of_U3CnewYLU3E__1_10(),
	U3CLerpCamU3Ec__Iterator4_t1099704510::get_offset_of_U3CnewZLU3E__1_11(),
	U3CLerpCamU3Ec__Iterator4_t1099704510::get_offset_of_U3CnewRotationU3E__1_12(),
	U3CLerpCamU3Ec__Iterator4_t1099704510::get_offset_of_U3CnewLightRotationU3E__1_13(),
	U3CLerpCamU3Ec__Iterator4_t1099704510::get_offset_of_U24this_14(),
	U3CLerpCamU3Ec__Iterator4_t1099704510::get_offset_of_U24current_15(),
	U3CLerpCamU3Ec__Iterator4_t1099704510::get_offset_of_U24disposing_16(),
	U3CLerpCamU3Ec__Iterator4_t1099704510::get_offset_of_U24PC_17(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize3325 = { sizeof (U3CFadeU3Ec__Iterator5_t2199921070), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable3325[9] = 
{
	U3CFadeU3Ec__Iterator5_t2199921070::get_offset_of_U3CtimeU3E__0_0(),
	U3CFadeU3Ec__Iterator5_t2199921070::get_offset_of_duration_1(),
	U3CFadeU3Ec__Iterator5_t2199921070::get_offset_of_StartValue_2(),
	U3CFadeU3Ec__Iterator5_t2199921070::get_offset_of_endValue_3(),
	U3CFadeU3Ec__Iterator5_t2199921070::get_offset_of_fadeObject_4(),
	U3CFadeU3Ec__Iterator5_t2199921070::get_offset_of_U24this_5(),
	U3CFadeU3Ec__Iterator5_t2199921070::get_offset_of_U24current_6(),
	U3CFadeU3Ec__Iterator5_t2199921070::get_offset_of_U24disposing_7(),
	U3CFadeU3Ec__Iterator5_t2199921070::get_offset_of_U24PC_8(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize3326 = { sizeof (U3CFadeAlphaU3Ec__Iterator6_t2120322554), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable3326[10] = 
{
	U3CFadeAlphaU3Ec__Iterator6_t2120322554::get_offset_of_waitTime_0(),
	U3CFadeAlphaU3Ec__Iterator6_t2120322554::get_offset_of_U3CtimeU3E__0_1(),
	U3CFadeAlphaU3Ec__Iterator6_t2120322554::get_offset_of_duration_2(),
	U3CFadeAlphaU3Ec__Iterator6_t2120322554::get_offset_of_StartValue_3(),
	U3CFadeAlphaU3Ec__Iterator6_t2120322554::get_offset_of_endValue_4(),
	U3CFadeAlphaU3Ec__Iterator6_t2120322554::get_offset_of_U3CswapU3E__1_5(),
	U3CFadeAlphaU3Ec__Iterator6_t2120322554::get_offset_of_U24this_6(),
	U3CFadeAlphaU3Ec__Iterator6_t2120322554::get_offset_of_U24current_7(),
	U3CFadeAlphaU3Ec__Iterator6_t2120322554::get_offset_of_U24disposing_8(),
	U3CFadeAlphaU3Ec__Iterator6_t2120322554::get_offset_of_U24PC_9(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize3327 = { sizeof (U3CCountdownStimulantU3Ec__Iterator7_t2110329190), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable3327[8] = 
{
	U3CCountdownStimulantU3Ec__Iterator7_t2110329190::get_offset_of_U3CtimeU3E__0_0(),
	U3CCountdownStimulantU3Ec__Iterator7_t2110329190::get_offset_of_duration_1(),
	U3CCountdownStimulantU3Ec__Iterator7_t2110329190::get_offset_of_StartVal_2(),
	U3CCountdownStimulantU3Ec__Iterator7_t2110329190::get_offset_of_endVal_3(),
	U3CCountdownStimulantU3Ec__Iterator7_t2110329190::get_offset_of_U24this_4(),
	U3CCountdownStimulantU3Ec__Iterator7_t2110329190::get_offset_of_U24current_5(),
	U3CCountdownStimulantU3Ec__Iterator7_t2110329190::get_offset_of_U24disposing_6(),
	U3CCountdownStimulantU3Ec__Iterator7_t2110329190::get_offset_of_U24PC_7(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize3328 = { sizeof (U3CRechargeStaminaU3Ec__Iterator8_t2292010363), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable3328[7] = 
{
	U3CRechargeStaminaU3Ec__Iterator8_t2292010363::get_offset_of_U3CtimeU3E__0_0(),
	U3CRechargeStaminaU3Ec__Iterator8_t2292010363::get_offset_of_duration_1(),
	U3CRechargeStaminaU3Ec__Iterator8_t2292010363::get_offset_of_currentStamina_2(),
	U3CRechargeStaminaU3Ec__Iterator8_t2292010363::get_offset_of_U24this_3(),
	U3CRechargeStaminaU3Ec__Iterator8_t2292010363::get_offset_of_U24current_4(),
	U3CRechargeStaminaU3Ec__Iterator8_t2292010363::get_offset_of_U24disposing_5(),
	U3CRechargeStaminaU3Ec__Iterator8_t2292010363::get_offset_of_U24PC_6(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize3329 = { sizeof (U3CRechargeFlashlightU3Ec__Iterator9_t2433989471), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable3329[11] = 
{
	U3CRechargeFlashlightU3Ec__Iterator9_t2433989471::get_offset_of_U3CtimeU3E__0_0(),
	U3CRechargeFlashlightU3Ec__Iterator9_t2433989471::get_offset_of_duration_1(),
	U3CRechargeFlashlightU3Ec__Iterator9_t2433989471::get_offset_of_currentCharge_2(),
	U3CRechargeFlashlightU3Ec__Iterator9_t2433989471::get_offset_of_U3CcurrentIntensityU3E__0_3(),
	U3CRechargeFlashlightU3Ec__Iterator9_t2433989471::get_offset_of_U3CcurrentAngleU3E__0_4(),
	U3CRechargeFlashlightU3Ec__Iterator9_t2433989471::get_offset_of_U3CcurrentSizeU3E__0_5(),
	U3CRechargeFlashlightU3Ec__Iterator9_t2433989471::get_offset_of_U3CcurrentColorU3E__0_6(),
	U3CRechargeFlashlightU3Ec__Iterator9_t2433989471::get_offset_of_U24this_7(),
	U3CRechargeFlashlightU3Ec__Iterator9_t2433989471::get_offset_of_U24current_8(),
	U3CRechargeFlashlightU3Ec__Iterator9_t2433989471::get_offset_of_U24disposing_9(),
	U3CRechargeFlashlightU3Ec__Iterator9_t2433989471::get_offset_of_U24PC_10(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize3330 = { sizeof (U3CButtonDelayTimerU3Ec__IteratorA_t1292377190), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable3330[4] = 
{
	U3CButtonDelayTimerU3Ec__IteratorA_t1292377190::get_offset_of_delay_0(),
	U3CButtonDelayTimerU3Ec__IteratorA_t1292377190::get_offset_of_U24current_1(),
	U3CButtonDelayTimerU3Ec__IteratorA_t1292377190::get_offset_of_U24disposing_2(),
	U3CButtonDelayTimerU3Ec__IteratorA_t1292377190::get_offset_of_U24PC_3(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize3331 = { sizeof (U3CQuickTurnU3Ec__IteratorB_t3843077480), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable3331[8] = 
{
	U3CQuickTurnU3Ec__IteratorB_t3843077480::get_offset_of_U3CtimeU3E__0_0(),
	U3CQuickTurnU3Ec__IteratorB_t3843077480::get_offset_of_duration_1(),
	U3CQuickTurnU3Ec__IteratorB_t3843077480::get_offset_of_playerRotation_2(),
	U3CQuickTurnU3Ec__IteratorB_t3843077480::get_offset_of_fullTurn_3(),
	U3CQuickTurnU3Ec__IteratorB_t3843077480::get_offset_of_U24this_4(),
	U3CQuickTurnU3Ec__IteratorB_t3843077480::get_offset_of_U24current_5(),
	U3CQuickTurnU3Ec__IteratorB_t3843077480::get_offset_of_U24disposing_6(),
	U3CQuickTurnU3Ec__IteratorB_t3843077480::get_offset_of_U24PC_7(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize3332 = { sizeof (U3CLerpFocalLengthU3Ec__IteratorC_t1666889386), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable3332[9] = 
{
	U3CLerpFocalLengthU3Ec__IteratorC_t1666889386::get_offset_of_U3CtimeU3E__0_0(),
	U3CLerpFocalLengthU3Ec__IteratorC_t1666889386::get_offset_of_duration_1(),
	U3CLerpFocalLengthU3Ec__IteratorC_t1666889386::get_offset_of_StartValue_2(),
	U3CLerpFocalLengthU3Ec__IteratorC_t1666889386::get_offset_of_endValue_3(),
	U3CLerpFocalLengthU3Ec__IteratorC_t1666889386::get_offset_of_U3CcurrentValueU3E__1_4(),
	U3CLerpFocalLengthU3Ec__IteratorC_t1666889386::get_offset_of_U24this_5(),
	U3CLerpFocalLengthU3Ec__IteratorC_t1666889386::get_offset_of_U24current_6(),
	U3CLerpFocalLengthU3Ec__IteratorC_t1666889386::get_offset_of_U24disposing_7(),
	U3CLerpFocalLengthU3Ec__IteratorC_t1666889386::get_offset_of_U24PC_8(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize3333 = { sizeof (U3CFadeScreenU3Ec__IteratorD_t1467492050), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable3333[8] = 
{
	U3CFadeScreenU3Ec__IteratorD_t1467492050::get_offset_of_U3CStartValueU3E__0_0(),
	U3CFadeScreenU3Ec__IteratorD_t1467492050::get_offset_of_U3CfadeTimeU3E__0_1(),
	U3CFadeScreenU3Ec__IteratorD_t1467492050::get_offset_of_duration_2(),
	U3CFadeScreenU3Ec__IteratorD_t1467492050::get_offset_of_targetValue_3(),
	U3CFadeScreenU3Ec__IteratorD_t1467492050::get_offset_of_U24this_4(),
	U3CFadeScreenU3Ec__IteratorD_t1467492050::get_offset_of_U24current_5(),
	U3CFadeScreenU3Ec__IteratorD_t1467492050::get_offset_of_U24disposing_6(),
	U3CFadeScreenU3Ec__IteratorD_t1467492050::get_offset_of_U24PC_7(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize3334 = { sizeof (SFXController_t43050431), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable3334[10] = 
{
	SFXController_t43050431::get_offset_of_audioSource_4(),
	SFXController_t43050431::get_offset_of_audioClip_5(),
	SFXController_t43050431::get_offset_of_grassSounds_6(),
	SFXController_t43050431::get_offset_of_roadSounds_7(),
	SFXController_t43050431::get_offset_of_currentClips_8(),
	SFXController_t43050431::get_offset_of_distance_9(),
	SFXController_t43050431::get_offset_of_hit_10(),
	SFXController_t43050431::get_offset_of_i_11(),
	SFXController_t43050431::get_offset_of_tick_12(),
	SFXController_t43050431::get_offset_of_maskValue_13(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize3335 = { sizeof (Item_Enumerator_t3915226614), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable3335[28] = 
{
	Item_Enumerator_t3915226614::get_offset_of_identifier_4(),
	Item_Enumerator_t3915226614::get_offset_of_isActiveObject_5(),
	Item_Enumerator_t3915226614::get_offset_of_thisItem_6(),
	Item_Enumerator_t3915226614::get_offset_of_itemValue_7(),
	Item_Enumerator_t3915226614::get_offset_of_player_8(),
	Item_Enumerator_t3915226614::get_offset_of_animator_9(),
	Item_Enumerator_t3915226614::get_offset_of_playerObject_10(),
	Item_Enumerator_t3915226614::get_offset_of_playerBody_11(),
	Item_Enumerator_t3915226614::get_offset_of_thisCollider_12(),
	Item_Enumerator_t3915226614::get_offset_of_targetObject_13(),
	Item_Enumerator_t3915226614::get_offset_of_mainCamera_14(),
	Item_Enumerator_t3915226614::get_offset_of_pickupTextObject_15(),
	Item_Enumerator_t3915226614::get_offset_of_hilightIcon_16(),
	Item_Enumerator_t3915226614::get_offset_of_iconImage_17(),
	Item_Enumerator_t3915226614::get_offset_of_dialogBG_18(),
	Item_Enumerator_t3915226614::get_offset_of_iconVisible_19(),
	Item_Enumerator_t3915226614::get_offset_of_colorOff_20(),
	Item_Enumerator_t3915226614::get_offset_of_colorOn_21(),
	Item_Enumerator_t3915226614::get_offset_of_dialogOn_22(),
	Item_Enumerator_t3915226614::get_offset_of_OSDText_23(),
	Item_Enumerator_t3915226614::get_offset_of_batteryText_24(),
	Item_Enumerator_t3915226614::get_offset_of_healedTexture_25(),
	0,
	Item_Enumerator_t3915226614::get_offset_of_CROSS_27(),
	Item_Enumerator_t3915226614::get_offset_of_screenPosition_28(),
	Item_Enumerator_t3915226614::get_offset_of_targetPos_29(),
	Item_Enumerator_t3915226614::get_offset_of_tempText_30(),
	Item_Enumerator_t3915226614::get_offset_of_itemTexts_31(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize3336 = { sizeof (pickupItem_t2990193834)+ sizeof (RuntimeObject), sizeof(int32_t), 0, 0 };
extern const int32_t g_FieldOffsetTable3336[6] = 
{
	pickupItem_t2990193834::get_offset_of_value___2() + static_cast<int32_t>(sizeof(RuntimeObject)),
	0,
	0,
	0,
	0,
	0,
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize3337 = { sizeof (Shader_LOD_Enumerator_t1496692488), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable3337[11] = 
{
	Shader_LOD_Enumerator_t1496692488::get_offset_of_player_4(),
	Shader_LOD_Enumerator_t1496692488::get_offset_of_LOD_distance_5(),
	Shader_LOD_Enumerator_t1496692488::get_offset_of_enableShaderLOD_6(),
	Shader_LOD_Enumerator_t1496692488::get_offset_of_enableCulling_7(),
	Shader_LOD_Enumerator_t1496692488::get_offset_of_distance_8(),
	Shader_LOD_Enumerator_t1496692488::get_offset_of_viewPos_9(),
	Shader_LOD_Enumerator_t1496692488::get_offset_of_thisPos_10(),
	Shader_LOD_Enumerator_t1496692488::get_offset_of_playerPos_11(),
	Shader_LOD_Enumerator_t1496692488::get_offset_of_tick_12(),
	Shader_LOD_Enumerator_t1496692488::get_offset_of_thisRenderer_13(),
	Shader_LOD_Enumerator_t1496692488::get_offset_of_mainCam_14(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize3338 = { sizeof (Plane_t1400771856), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable3338[2] = 
{
	Plane_t1400771856::get_offset_of_normal_0(),
	Plane_t1400771856::get_offset_of_d_1(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize3339 = { sizeof (Frustum_t2969569190), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable3339[1] = 
{
	Frustum_t2969569190::get_offset_of_planes_0(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize3340 = { sizeof (LightData_t2011517856)+ sizeof (RuntimeObject), sizeof(LightData_t2011517856 ), 0, 0 };
extern const int32_t g_FieldOffsetTable3340[4] = 
{
	LightData_t2011517856::get_offset_of_worldSpacePosition_0() + static_cast<int32_t>(sizeof(RuntimeObject)),
	LightData_t2011517856::get_offset_of_enabled_1() + static_cast<int32_t>(sizeof(RuntimeObject)),
	LightData_t2011517856::get_offset_of_color_2() + static_cast<int32_t>(sizeof(RuntimeObject)),
	LightData_t2011517856::get_offset_of_range_3() + static_cast<int32_t>(sizeof(RuntimeObject)),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize3341 = { sizeof (ForwardPlusManager_t2470229686), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable3341[15] = 
{
	ForwardPlusManager_t2470229686::get_offset_of_precomputeFrustums_4(),
	ForwardPlusManager_t2470229686::get_offset_of_lightCulling_5(),
	ForwardPlusManager_t2470229686::get_offset_of_Debug_ShowGrid_6(),
	ForwardPlusManager_t2470229686::get_offset_of_heatmap_7(),
	ForwardPlusManager_t2470229686::get_offset_of_LIGHTS_PER_TILE_8(),
	ForwardPlusManager_t2470229686::get_offset_of_frustumBuffer_9(),
	ForwardPlusManager_t2470229686::get_offset_of_lightListBuffer_10(),
	ForwardPlusManager_t2470229686::get_offset_of_currentLightIndexBuffer_11(),
	ForwardPlusManager_t2470229686::get_offset_of_lightIndexBuffer_12(),
	ForwardPlusManager_t2470229686::get_offset_of_depthTexture_13(),
	ForwardPlusManager_t2470229686::get_offset_of_lightsGrid_14(),
	ForwardPlusManager_t2470229686::get_offset_of_commandBuffer_15(),
	ForwardPlusManager_t2470229686::get_offset_of_cam_16(),
	ForwardPlusManager_t2470229686::get_offset_of_debug_showGridMat_17(),
	ForwardPlusManager_t2470229686::get_offset_of_copyDepthMat_18(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize3342 = { sizeof (ClearPlayerPrefs_t2651082224), -1, 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize3343 = { sizeof (Contrast_Manager_t1945764136), -1, sizeof(Contrast_Manager_t1945764136_StaticFields), 0 };
extern const int32_t g_FieldOffsetTable3343[12] = 
{
	Contrast_Manager_t1945764136::get_offset_of_contrastMaterial_4(),
	Contrast_Manager_t1945764136::get_offset_of_skyboxMaterial_5(),
	Contrast_Manager_t1945764136::get_offset_of_contrastValue_6(),
	Contrast_Manager_t1945764136::get_offset_of_maxShadowAmount_7(),
	Contrast_Manager_t1945764136::get_offset_of_tintColor_8(),
	Contrast_Manager_t1945764136::get_offset_of_fromAbs_9(),
	Contrast_Manager_t1945764136::get_offset_of_fromMaxAbs_10(),
	Contrast_Manager_t1945764136::get_offset_of_normal_11(),
	Contrast_Manager_t1945764136::get_offset_of_toMaxAbs_12(),
	Contrast_Manager_t1945764136::get_offset_of_toAbs_13(),
	Contrast_Manager_t1945764136_StaticFields::get_offset_of_Exposure_14(),
	Contrast_Manager_t1945764136_StaticFields::get_offset_of_TintColor_15(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize3344 = { sizeof (Data_Loaded_Manager_t1271507630), -1, sizeof(Data_Loaded_Manager_t1271507630_StaticFields), 0 };
extern const int32_t g_FieldOffsetTable3344[11] = 
{
	Data_Loaded_Manager_t1271507630::get_offset_of_player_4(),
	Data_Loaded_Manager_t1271507630::get_offset_of_OptionsManagerInputs_5(),
	Data_Loaded_Manager_t1271507630::get_offset_of_playerBody_6(),
	Data_Loaded_Manager_t1271507630::get_offset_of_objectList_7(),
	Data_Loaded_Manager_t1271507630::get_offset_of_bgmSource_8(),
	Data_Loaded_Manager_t1271507630::get_offset_of_sfxSource_9(),
	Data_Loaded_Manager_t1271507630::get_offset_of_ambientSource_10(),
	Data_Loaded_Manager_t1271507630::get_offset_of_thunderStormSource_11(),
	Data_Loaded_Manager_t1271507630::get_offset_of_rainSource_12(),
	Data_Loaded_Manager_t1271507630::get_offset_of_SFXLevel_13(),
	Data_Loaded_Manager_t1271507630_StaticFields::get_offset_of_PainValue_14(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize3345 = { sizeof (InputManager_t2926777569), -1, 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize3346 = { sizeof (Inventory_Screen_Manager_t2612322343), -1, sizeof(Inventory_Screen_Manager_t2612322343_StaticFields), 0 };
extern const int32_t g_FieldOffsetTable3346[9] = 
{
	Inventory_Screen_Manager_t2612322343::get_offset_of_battText_4(),
	Inventory_Screen_Manager_t2612322343::get_offset_of_medText_5(),
	Inventory_Screen_Manager_t2612322343::get_offset_of_stimText_6(),
	Inventory_Screen_Manager_t2612322343::get_offset_of_inventoryMat_7(),
	Inventory_Screen_Manager_t2612322343::get_offset_of_inventoryCam_8(),
	Inventory_Screen_Manager_t2612322343_StaticFields::get_offset_of_inventoryOn_9(),
	Inventory_Screen_Manager_t2612322343::get_offset_of_delayButton_10(),
	Inventory_Screen_Manager_t2612322343::get_offset_of_tempAlpha_11(),
	Inventory_Screen_Manager_t2612322343::get_offset_of_time_12(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize3347 = { sizeof (U3CCrossFadeU3Ec__Iterator0_t2118519353), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable3347[7] = 
{
	U3CCrossFadeU3Ec__Iterator0_t2118519353::get_offset_of_duration_0(),
	U3CCrossFadeU3Ec__Iterator0_t2118519353::get_offset_of_startValue_1(),
	U3CCrossFadeU3Ec__Iterator0_t2118519353::get_offset_of_endValue_2(),
	U3CCrossFadeU3Ec__Iterator0_t2118519353::get_offset_of_U24this_3(),
	U3CCrossFadeU3Ec__Iterator0_t2118519353::get_offset_of_U24current_4(),
	U3CCrossFadeU3Ec__Iterator0_t2118519353::get_offset_of_U24disposing_5(),
	U3CCrossFadeU3Ec__Iterator0_t2118519353::get_offset_of_U24PC_6(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize3348 = { sizeof (U3CButtonDelayTimerU3Ec__Iterator1_t1207591810), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable3348[5] = 
{
	U3CButtonDelayTimerU3Ec__Iterator1_t1207591810::get_offset_of_delay_0(),
	U3CButtonDelayTimerU3Ec__Iterator1_t1207591810::get_offset_of_U24this_1(),
	U3CButtonDelayTimerU3Ec__Iterator1_t1207591810::get_offset_of_U24current_2(),
	U3CButtonDelayTimerU3Ec__Iterator1_t1207591810::get_offset_of_U24disposing_3(),
	U3CButtonDelayTimerU3Ec__Iterator1_t1207591810::get_offset_of_U24PC_4(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize3349 = { sizeof (InventoryManager_t1225487224), -1, sizeof(InventoryManager_t1225487224_StaticFields), 0 };
extern const int32_t g_FieldOffsetTable3349[5] = 
{
	InventoryManager_t1225487224_StaticFields::get_offset_of_playerHealth_0(),
	InventoryManager_t1225487224_StaticFields::get_offset_of_batteryCount_1(),
	InventoryManager_t1225487224_StaticFields::get_offset_of_medCount_2(),
	InventoryManager_t1225487224_StaticFields::get_offset_of_keyCount_3(),
	InventoryManager_t1225487224_StaticFields::get_offset_of_stimCount_4(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize3350 = { sizeof (Lightning_Manager_t3394885560), -1, sizeof(Lightning_Manager_t3394885560_StaticFields), 0 };
extern const int32_t g_FieldOffsetTable3350[17] = 
{
	Lightning_Manager_t3394885560::get_offset_of_audioSource_4(),
	Lightning_Manager_t3394885560::get_offset_of_step_5(),
	Lightning_Manager_t3394885560::get_offset_of_sampleDataLength_6(),
	Lightning_Manager_t3394885560::get_offset_of_scaleFactor_7(),
	Lightning_Manager_t3394885560::get_offset_of_skyBox_8(),
	Lightning_Manager_t3394885560::get_offset_of_glowMat_9(),
	Lightning_Manager_t3394885560::get_offset_of_crepuscularMat_10(),
	Lightning_Manager_t3394885560::get_offset_of_clipLoudness_11(),
	Lightning_Manager_t3394885560::get_offset_of_oldClipLoudness_12(),
	Lightning_Manager_t3394885560::get_offset_of_clipLoudnessB_13(),
	Lightning_Manager_t3394885560::get_offset_of_clipSampleData_14(),
	Lightning_Manager_t3394885560::get_offset_of_currentUpdateTime_15(),
	Lightning_Manager_t3394885560::get_offset_of_contrastHolder_16(),
	Lightning_Manager_t3394885560::get_offset_of_lerpColor_17(),
	Lightning_Manager_t3394885560_StaticFields::get_offset_of_TintColor_18(),
	Lightning_Manager_t3394885560_StaticFields::get_offset_of_Contrast_19(),
	Lightning_Manager_t3394885560_StaticFields::get_offset_of_Exposure_20(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize3351 = { sizeof (LoadManager_Inputs_t4203782917), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable3351[46] = 
{
	LoadManager_Inputs_t4203782917::get_offset_of_joystick1_4(),
	LoadManager_Inputs_t4203782917::get_offset_of_CROSS_5(),
	LoadManager_Inputs_t4203782917::get_offset_of_CIRCLE_6(),
	LoadManager_Inputs_t4203782917::get_offset_of_SQUARE_7(),
	LoadManager_Inputs_t4203782917::get_offset_of_TRIANGLE_8(),
	LoadManager_Inputs_t4203782917::get_offset_of_SELECT_9(),
	LoadManager_Inputs_t4203782917::get_offset_of_START_10(),
	LoadManager_Inputs_t4203782917::get_offset_of_UP_11(),
	LoadManager_Inputs_t4203782917::get_offset_of_RIGHT_12(),
	LoadManager_Inputs_t4203782917::get_offset_of_DOWN_13(),
	LoadManager_Inputs_t4203782917::get_offset_of_LEFT_14(),
	LoadManager_Inputs_t4203782917::get_offset_of_selectedSlot_15(),
	LoadManager_Inputs_t4203782917::get_offset_of_previousSlot_16(),
	LoadManager_Inputs_t4203782917::get_offset_of_baseColor_17(),
	LoadManager_Inputs_t4203782917::get_offset_of_hilightColor_18(),
	LoadManager_Inputs_t4203782917::get_offset_of_loadedColor_19(),
	LoadManager_Inputs_t4203782917::get_offset_of_savedColor_20(),
	LoadManager_Inputs_t4203782917::get_offset_of_slot1_21(),
	LoadManager_Inputs_t4203782917::get_offset_of_slot2_22(),
	LoadManager_Inputs_t4203782917::get_offset_of_slot3_23(),
	LoadManager_Inputs_t4203782917::get_offset_of_loadingOperation_24(),
	LoadManager_Inputs_t4203782917::get_offset_of_sceneManager_25(),
	LoadManager_Inputs_t4203782917::get_offset_of_menuManager_26(),
	LoadManager_Inputs_t4203782917::get_offset_of_menuGroup_27(),
	LoadManager_Inputs_t4203782917::get_offset_of_saveGroup_28(),
	LoadManager_Inputs_t4203782917::get_offset_of_loadDialogGroup_29(),
	LoadManager_Inputs_t4203782917::get_offset_of_faderCanvas_30(),
	LoadManager_Inputs_t4203782917::get_offset_of_audioManager_31(),
	LoadManager_Inputs_t4203782917::get_offset_of_fadeDuration_32(),
	LoadManager_Inputs_t4203782917::get_offset_of_targetValue_33(),
	LoadManager_Inputs_t4203782917::get_offset_of_loadProgress_34(),
	LoadManager_Inputs_t4203782917::get_offset_of_loading_35(),
	LoadManager_Inputs_t4203782917::get_offset_of_timer_36(),
	LoadManager_Inputs_t4203782917::get_offset_of_delay_37(),
	LoadManager_Inputs_t4203782917::get_offset_of_clipList_38(),
	LoadManager_Inputs_t4203782917::get_offset_of_audioSource_39(),
	LoadManager_Inputs_t4203782917::get_offset_of_slot1Text_40(),
	LoadManager_Inputs_t4203782917::get_offset_of_slot2Text_41(),
	LoadManager_Inputs_t4203782917::get_offset_of_slot3Text_42(),
	LoadManager_Inputs_t4203782917::get_offset_of_slot1String_43(),
	LoadManager_Inputs_t4203782917::get_offset_of_slot2String_44(),
	LoadManager_Inputs_t4203782917::get_offset_of_slot3String_45(),
	LoadManager_Inputs_t4203782917::get_offset_of_dateTime_46(),
	LoadManager_Inputs_t4203782917::get_offset_of_currentSelection_47(),
	LoadManager_Inputs_t4203782917::get_offset_of_previousSelection_48(),
	LoadManager_Inputs_t4203782917::get_offset_of_anim_49(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize3352 = { sizeof (U3CStartLoadU3Ec__Iterator0_t390459722), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable3352[4] = 
{
	U3CStartLoadU3Ec__Iterator0_t390459722::get_offset_of_U24this_0(),
	U3CStartLoadU3Ec__Iterator0_t390459722::get_offset_of_U24current_1(),
	U3CStartLoadU3Ec__Iterator0_t390459722::get_offset_of_U24disposing_2(),
	U3CStartLoadU3Ec__Iterator0_t390459722::get_offset_of_U24PC_3(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize3353 = { sizeof (U3CFadeLoadingScreenU3Ec__Iterator1_t2399416830), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable3353[8] = 
{
	U3CFadeLoadingScreenU3Ec__Iterator1_t2399416830::get_offset_of_U3CtimeU3E__0_0(),
	U3CFadeLoadingScreenU3Ec__Iterator1_t2399416830::get_offset_of_duration_1(),
	U3CFadeLoadingScreenU3Ec__Iterator1_t2399416830::get_offset_of_startValue_2(),
	U3CFadeLoadingScreenU3Ec__Iterator1_t2399416830::get_offset_of_targetValue_3(),
	U3CFadeLoadingScreenU3Ec__Iterator1_t2399416830::get_offset_of_U24this_4(),
	U3CFadeLoadingScreenU3Ec__Iterator1_t2399416830::get_offset_of_U24current_5(),
	U3CFadeLoadingScreenU3Ec__Iterator1_t2399416830::get_offset_of_U24disposing_6(),
	U3CFadeLoadingScreenU3Ec__Iterator1_t2399416830::get_offset_of_U24PC_7(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize3354 = { sizeof (U3CDialogHandlerU3Ec__Iterator2_t933476925), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable3354[6] = 
{
	U3CDialogHandlerU3Ec__Iterator2_t933476925::get_offset_of_U3CdurationU3E__0_0(),
	U3CDialogHandlerU3Ec__Iterator2_t933476925::get_offset_of_U3CtimeU3E__0_1(),
	U3CDialogHandlerU3Ec__Iterator2_t933476925::get_offset_of_U24this_2(),
	U3CDialogHandlerU3Ec__Iterator2_t933476925::get_offset_of_U24current_3(),
	U3CDialogHandlerU3Ec__Iterator2_t933476925::get_offset_of_U24disposing_4(),
	U3CDialogHandlerU3Ec__Iterator2_t933476925::get_offset_of_U24PC_5(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize3355 = { sizeof (LoadScreen_t3376497162), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable3355[12] = 
{
	LoadScreen_t3376497162::get_offset_of_loadingOperation_4(),
	LoadScreen_t3376497162::get_offset_of_loading_5(),
	LoadScreen_t3376497162::get_offset_of_canvasGroup_6(),
	LoadScreen_t3376497162::get_offset_of_progressCounterLeft_7(),
	LoadScreen_t3376497162::get_offset_of_progressCounterRight_8(),
	LoadScreen_t3376497162::get_offset_of_loaderHint_9(),
	LoadScreen_t3376497162::get_offset_of_fadeDuration_10(),
	LoadScreen_t3376497162::get_offset_of_originalValue_11(),
	LoadScreen_t3376497162::get_offset_of_loadProgress_12(),
	LoadScreen_t3376497162::get_offset_of_fadeValue_13(),
	LoadScreen_t3376497162::get_offset_of_loadAtStart_14(),
	LoadScreen_t3376497162::get_offset_of_canLoad_15(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize3356 = { sizeof (U3CStartLoadU3Ec__Iterator0_t2551077925), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable3356[4] = 
{
	U3CStartLoadU3Ec__Iterator0_t2551077925::get_offset_of_U24this_0(),
	U3CStartLoadU3Ec__Iterator0_t2551077925::get_offset_of_U24current_1(),
	U3CStartLoadU3Ec__Iterator0_t2551077925::get_offset_of_U24disposing_2(),
	U3CStartLoadU3Ec__Iterator0_t2551077925::get_offset_of_U24PC_3(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize3357 = { sizeof (U3CFadeLoadingScreenU3Ec__Iterator1_t1230497635), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable3357[8] = 
{
	U3CFadeLoadingScreenU3Ec__Iterator1_t1230497635::get_offset_of_U3CstartValueU3E__0_0(),
	U3CFadeLoadingScreenU3Ec__Iterator1_t1230497635::get_offset_of_U3CtimeU3E__0_1(),
	U3CFadeLoadingScreenU3Ec__Iterator1_t1230497635::get_offset_of_duration_2(),
	U3CFadeLoadingScreenU3Ec__Iterator1_t1230497635::get_offset_of_targetValue_3(),
	U3CFadeLoadingScreenU3Ec__Iterator1_t1230497635::get_offset_of_U24this_4(),
	U3CFadeLoadingScreenU3Ec__Iterator1_t1230497635::get_offset_of_U24current_5(),
	U3CFadeLoadingScreenU3Ec__Iterator1_t1230497635::get_offset_of_U24disposing_6(),
	U3CFadeLoadingScreenU3Ec__Iterator1_t1230497635::get_offset_of_U24PC_7(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize3358 = { sizeof (Menu_Manager_t102876996), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable3358[42] = 
{
	Menu_Manager_t102876996::get_offset_of_joystick1_4(),
	Menu_Manager_t102876996::get_offset_of_CROSS_5(),
	Menu_Manager_t102876996::get_offset_of_CIRCLE_6(),
	Menu_Manager_t102876996::get_offset_of_SQUARE_7(),
	Menu_Manager_t102876996::get_offset_of_TRIANGLE_8(),
	Menu_Manager_t102876996::get_offset_of_SELECT_9(),
	Menu_Manager_t102876996::get_offset_of_START_10(),
	Menu_Manager_t102876996::get_offset_of_UP_11(),
	Menu_Manager_t102876996::get_offset_of_RIGHT_12(),
	Menu_Manager_t102876996::get_offset_of_DOWN_13(),
	Menu_Manager_t102876996::get_offset_of_LEFT_14(),
	Menu_Manager_t102876996::get_offset_of_selectedSlot_15(),
	Menu_Manager_t102876996::get_offset_of_selectedSLSlot_16(),
	Menu_Manager_t102876996::get_offset_of_baseColor_17(),
	Menu_Manager_t102876996::get_offset_of_hilightColor_18(),
	Menu_Manager_t102876996::get_offset_of_selectedColor_19(),
	Menu_Manager_t102876996::get_offset_of_slot1_20(),
	Menu_Manager_t102876996::get_offset_of_slot2_21(),
	Menu_Manager_t102876996::get_offset_of_slot3_22(),
	Menu_Manager_t102876996::get_offset_of_saveManager_23(),
	Menu_Manager_t102876996::get_offset_of_optionsManager_24(),
	Menu_Manager_t102876996::get_offset_of_ButtonManager_25(),
	Menu_Manager_t102876996::get_offset_of_mainMenuCanvas_26(),
	Menu_Manager_t102876996::get_offset_of_saverCanvas_27(),
	Menu_Manager_t102876996::get_offset_of_optionCanvas_28(),
	Menu_Manager_t102876996::get_offset_of_dialogCanvas_29(),
	Menu_Manager_t102876996::get_offset_of_selectedCanvas_30(),
	Menu_Manager_t102876996::get_offset_of_audioManager_31(),
	Menu_Manager_t102876996::get_offset_of_fadeDuration_32(),
	Menu_Manager_t102876996::get_offset_of_targetValue_33(),
	Menu_Manager_t102876996::get_offset_of_mainMenuEnabled_34(),
	Menu_Manager_t102876996::get_offset_of_saverEnabled_35(),
	Menu_Manager_t102876996::get_offset_of_optionEnabled_36(),
	Menu_Manager_t102876996::get_offset_of_dialogEnabled_37(),
	Menu_Manager_t102876996::get_offset_of_delayTimer_38(),
	Menu_Manager_t102876996::get_offset_of_timer_39(),
	Menu_Manager_t102876996::get_offset_of_delay_40(),
	Menu_Manager_t102876996::get_offset_of_clipList_41(),
	Menu_Manager_t102876996::get_offset_of_audioSource_42(),
	Menu_Manager_t102876996::get_offset_of_currentSelection_43(),
	Menu_Manager_t102876996::get_offset_of_previousSelection_44(),
	Menu_Manager_t102876996::get_offset_of_anim_45(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize3359 = { sizeof (U3CFadeScreenU3Ec__Iterator0_t2844335438), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable3359[8] = 
{
	U3CFadeScreenU3Ec__Iterator0_t2844335438::get_offset_of_U3CstartValueU3E__0_0(),
	U3CFadeScreenU3Ec__Iterator0_t2844335438::get_offset_of_U3CfadeTimeU3E__0_1(),
	U3CFadeScreenU3Ec__Iterator0_t2844335438::get_offset_of_duration_2(),
	U3CFadeScreenU3Ec__Iterator0_t2844335438::get_offset_of_targetValue_3(),
	U3CFadeScreenU3Ec__Iterator0_t2844335438::get_offset_of_U24this_4(),
	U3CFadeScreenU3Ec__Iterator0_t2844335438::get_offset_of_U24current_5(),
	U3CFadeScreenU3Ec__Iterator0_t2844335438::get_offset_of_U24disposing_6(),
	U3CFadeScreenU3Ec__Iterator0_t2844335438::get_offset_of_U24PC_7(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize3360 = { sizeof (OptionsManagerInputs_t1837724265), -1, sizeof(OptionsManagerInputs_t1837724265_StaticFields), 0 };
extern const int32_t g_FieldOffsetTable3360[40] = 
{
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	OptionsManagerInputs_t1837724265::get_offset_of_selectedSlot_15(),
	OptionsManagerInputs_t1837724265::get_offset_of_previousSlot_16(),
	OptionsManagerInputs_t1837724265::get_offset_of_baseColor_17(),
	OptionsManagerInputs_t1837724265::get_offset_of_hilightColor_18(),
	OptionsManagerInputs_t1837724265::get_offset_of_slot1_19(),
	OptionsManagerInputs_t1837724265::get_offset_of_slot2_20(),
	OptionsManagerInputs_t1837724265::get_offset_of_slot3_21(),
	OptionsManagerInputs_t1837724265::get_offset_of_menuManager_22(),
	OptionsManagerInputs_t1837724265::get_offset_of_BGMLevel_23(),
	OptionsManagerInputs_t1837724265::get_offset_of_SFXLevel_24(),
	OptionsManagerInputs_t1837724265::get_offset_of_sensitivityLevel_25(),
	OptionsManagerInputs_t1837724265::get_offset_of_timer_26(),
	OptionsManagerInputs_t1837724265::get_offset_of_delay_27(),
	OptionsManagerInputs_t1837724265::get_offset_of_BGMToSave_28(),
	OptionsManagerInputs_t1837724265::get_offset_of_SFXToSave_29(),
	OptionsManagerInputs_t1837724265::get_offset_of_SensitivityToSave_30(),
	OptionsManagerInputs_t1837724265::get_offset_of_clipList_31(),
	OptionsManagerInputs_t1837724265::get_offset_of_sfxSource_32(),
	OptionsManagerInputs_t1837724265::get_offset_of_bgmSource_33(),
	OptionsManagerInputs_t1837724265::get_offset_of_ambientSource_34(),
	OptionsManagerInputs_t1837724265::get_offset_of_thunderStormSource_35(),
	OptionsManagerInputs_t1837724265::get_offset_of_rainSource_36(),
	OptionsManagerInputs_t1837724265_StaticFields::get_offset_of_sensitivity_37(),
	OptionsManagerInputs_t1837724265::get_offset_of_currentSelection_38(),
	OptionsManagerInputs_t1837724265::get_offset_of_previousSelection_39(),
	OptionsManagerInputs_t1837724265::get_offset_of_anim_40(),
	OptionsManagerInputs_t1837724265::get_offset_of_optionEnabled_41(),
	OptionsManagerInputs_t1837724265_StaticFields::get_offset_of_MakeBounce_42(),
	OptionsManagerInputs_t1837724265_StaticFields::get_offset_of_SteadyState_43(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize3361 = { sizeof (PauseManager_t1166378904), -1, sizeof(PauseManager_t1166378904_StaticFields), 0 };
extern const int32_t g_FieldOffsetTable3361[2] = 
{
	PauseManager_t1166378904_StaticFields::get_offset_of_isPaused_4(),
	PauseManager_t1166378904::get_offset_of_isPausedInspector_5(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize3362 = { sizeof (SaveManager_Inputs_t2402574047), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable3362[45] = 
{
	SaveManager_Inputs_t2402574047::get_offset_of_joystick1_4(),
	SaveManager_Inputs_t2402574047::get_offset_of_CROSS_5(),
	SaveManager_Inputs_t2402574047::get_offset_of_CIRCLE_6(),
	SaveManager_Inputs_t2402574047::get_offset_of_SQUARE_7(),
	SaveManager_Inputs_t2402574047::get_offset_of_TRIANGLE_8(),
	SaveManager_Inputs_t2402574047::get_offset_of_SELECT_9(),
	SaveManager_Inputs_t2402574047::get_offset_of_START_10(),
	SaveManager_Inputs_t2402574047::get_offset_of_UP_11(),
	SaveManager_Inputs_t2402574047::get_offset_of_RIGHT_12(),
	SaveManager_Inputs_t2402574047::get_offset_of_DOWN_13(),
	SaveManager_Inputs_t2402574047::get_offset_of_LEFT_14(),
	SaveManager_Inputs_t2402574047::get_offset_of_selectedSlot_15(),
	SaveManager_Inputs_t2402574047::get_offset_of_previousSlot_16(),
	SaveManager_Inputs_t2402574047::get_offset_of_baseColor_17(),
	SaveManager_Inputs_t2402574047::get_offset_of_hilightColor_18(),
	SaveManager_Inputs_t2402574047::get_offset_of_loadedColor_19(),
	SaveManager_Inputs_t2402574047::get_offset_of_savedColor_20(),
	SaveManager_Inputs_t2402574047::get_offset_of_slot1_21(),
	SaveManager_Inputs_t2402574047::get_offset_of_slot2_22(),
	SaveManager_Inputs_t2402574047::get_offset_of_slot3_23(),
	SaveManager_Inputs_t2402574047::get_offset_of_loadingOperation_24(),
	SaveManager_Inputs_t2402574047::get_offset_of_sceneManager_25(),
	SaveManager_Inputs_t2402574047::get_offset_of_menuManager_26(),
	SaveManager_Inputs_t2402574047::get_offset_of_menuGroup_27(),
	SaveManager_Inputs_t2402574047::get_offset_of_saveGroup_28(),
	SaveManager_Inputs_t2402574047::get_offset_of_loadDialogGroup_29(),
	SaveManager_Inputs_t2402574047::get_offset_of_audioManager_30(),
	SaveManager_Inputs_t2402574047::get_offset_of_fadeDuration_31(),
	SaveManager_Inputs_t2402574047::get_offset_of_targetValue_32(),
	SaveManager_Inputs_t2402574047::get_offset_of_loadProgress_33(),
	SaveManager_Inputs_t2402574047::get_offset_of_loading_34(),
	SaveManager_Inputs_t2402574047::get_offset_of_timer_35(),
	SaveManager_Inputs_t2402574047::get_offset_of_delay_36(),
	SaveManager_Inputs_t2402574047::get_offset_of_clipList_37(),
	SaveManager_Inputs_t2402574047::get_offset_of_audioSource_38(),
	SaveManager_Inputs_t2402574047::get_offset_of_slot1Text_39(),
	SaveManager_Inputs_t2402574047::get_offset_of_slot2Text_40(),
	SaveManager_Inputs_t2402574047::get_offset_of_slot3Text_41(),
	SaveManager_Inputs_t2402574047::get_offset_of_slot1String_42(),
	SaveManager_Inputs_t2402574047::get_offset_of_slot2String_43(),
	SaveManager_Inputs_t2402574047::get_offset_of_slot3String_44(),
	SaveManager_Inputs_t2402574047::get_offset_of_dateTime_45(),
	SaveManager_Inputs_t2402574047::get_offset_of_currentSelection_46(),
	SaveManager_Inputs_t2402574047::get_offset_of_previousSelection_47(),
	SaveManager_Inputs_t2402574047::get_offset_of_anim_48(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize3363 = { sizeof (U3CStartLoadU3Ec__Iterator0_t4274245721), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable3363[4] = 
{
	U3CStartLoadU3Ec__Iterator0_t4274245721::get_offset_of_U24this_0(),
	U3CStartLoadU3Ec__Iterator0_t4274245721::get_offset_of_U24current_1(),
	U3CStartLoadU3Ec__Iterator0_t4274245721::get_offset_of_U24disposing_2(),
	U3CStartLoadU3Ec__Iterator0_t4274245721::get_offset_of_U24PC_3(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize3364 = { sizeof (U3CFadeLoadingScreenU3Ec__Iterator1_t1537162934), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable3364[8] = 
{
	U3CFadeLoadingScreenU3Ec__Iterator1_t1537162934::get_offset_of_U3CstartValueU3E__0_0(),
	U3CFadeLoadingScreenU3Ec__Iterator1_t1537162934::get_offset_of_U3CtimeU3E__0_1(),
	U3CFadeLoadingScreenU3Ec__Iterator1_t1537162934::get_offset_of_duration_2(),
	U3CFadeLoadingScreenU3Ec__Iterator1_t1537162934::get_offset_of_targetValue_3(),
	U3CFadeLoadingScreenU3Ec__Iterator1_t1537162934::get_offset_of_U24this_4(),
	U3CFadeLoadingScreenU3Ec__Iterator1_t1537162934::get_offset_of_U24current_5(),
	U3CFadeLoadingScreenU3Ec__Iterator1_t1537162934::get_offset_of_U24disposing_6(),
	U3CFadeLoadingScreenU3Ec__Iterator1_t1537162934::get_offset_of_U24PC_7(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize3365 = { sizeof (U3CDialogHandlerU3Ec__Iterator2_t2750974388), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable3365[6] = 
{
	U3CDialogHandlerU3Ec__Iterator2_t2750974388::get_offset_of_U3CdurationU3E__0_0(),
	U3CDialogHandlerU3Ec__Iterator2_t2750974388::get_offset_of_U3CtimeU3E__0_1(),
	U3CDialogHandlerU3Ec__Iterator2_t2750974388::get_offset_of_U24this_2(),
	U3CDialogHandlerU3Ec__Iterator2_t2750974388::get_offset_of_U24current_3(),
	U3CDialogHandlerU3Ec__Iterator2_t2750974388::get_offset_of_U24disposing_4(),
	U3CDialogHandlerU3Ec__Iterator2_t2750974388::get_offset_of_U24PC_5(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize3366 = { sizeof (SaveSerial_t2776190746), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable3366[12] = 
{
	SaveSerial_t2776190746::get_offset_of_saveManager_4(),
	SaveSerial_t2776190746::get_offset_of_dataPath_5(),
	SaveSerial_t2776190746::get_offset_of_savePrefix_6(),
	SaveSerial_t2776190746::get_offset_of_saveFileName_7(),
	SaveSerial_t2776190746::get_offset_of_hasLoaded_8(),
	SaveSerial_t2776190746::get_offset_of_slotSelector_9(),
	SaveSerial_t2776190746::get_offset_of_levelToSave_10(),
	SaveSerial_t2776190746::get_offset_of_player_11(),
	SaveSerial_t2776190746::get_offset_of_medList_12(),
	SaveSerial_t2776190746::get_offset_of_battList_13(),
	SaveSerial_t2776190746::get_offset_of_lwList_14(),
	SaveSerial_t2776190746::get_offset_of_hwList_15(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize3367 = { sizeof (SaveData_t4186603175), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable3367[11] = 
{
	SaveData_t4186603175::get_offset_of_savedLevel_0(),
	SaveData_t4186603175::get_offset_of_playerPosition_1(),
	SaveData_t4186603175::get_offset_of_playerRotation_2(),
	SaveData_t4186603175::get_offset_of_playerMedkits_3(),
	SaveData_t4186603175::get_offset_of_playerStimulants_4(),
	SaveData_t4186603175::get_offset_of_playerBatteries_5(),
	SaveData_t4186603175::get_offset_of_playerHealth_6(),
	SaveData_t4186603175::get_offset_of_collectedMeds_7(),
	SaveData_t4186603175::get_offset_of_collectedBattery_8(),
	SaveData_t4186603175::get_offset_of_collectedLightWep_9(),
	SaveData_t4186603175::get_offset_of_collectedHvyWep_10(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize3368 = { sizeof (SceneLoader_t4130533360), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable3368[11] = 
{
	SceneLoader_t4130533360::get_offset_of_loadingOperation_4(),
	SceneLoader_t4130533360::get_offset_of_loading_5(),
	SceneLoader_t4130533360::get_offset_of_canvasGroup_6(),
	SceneLoader_t4130533360::get_offset_of_progressCounterLeft_7(),
	SceneLoader_t4130533360::get_offset_of_progressCounterRight_8(),
	SceneLoader_t4130533360::get_offset_of_loaderHint_9(),
	SceneLoader_t4130533360::get_offset_of_fadeDuration_10(),
	SceneLoader_t4130533360::get_offset_of_originalValue_11(),
	SceneLoader_t4130533360::get_offset_of_loadProgress_12(),
	SceneLoader_t4130533360::get_offset_of_fadeValue_13(),
	SceneLoader_t4130533360::get_offset_of_loadAtStart_14(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize3369 = { sizeof (U3CStartLoadU3Ec__Iterator0_t861601243), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable3369[4] = 
{
	U3CStartLoadU3Ec__Iterator0_t861601243::get_offset_of_U24this_0(),
	U3CStartLoadU3Ec__Iterator0_t861601243::get_offset_of_U24current_1(),
	U3CStartLoadU3Ec__Iterator0_t861601243::get_offset_of_U24disposing_2(),
	U3CStartLoadU3Ec__Iterator0_t861601243::get_offset_of_U24PC_3(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize3370 = { sizeof (U3CFadeLoadingScreenU3Ec__Iterator1_t1069699069), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable3370[8] = 
{
	U3CFadeLoadingScreenU3Ec__Iterator1_t1069699069::get_offset_of_U3CstartValueU3E__0_0(),
	U3CFadeLoadingScreenU3Ec__Iterator1_t1069699069::get_offset_of_U3CtimeU3E__0_1(),
	U3CFadeLoadingScreenU3Ec__Iterator1_t1069699069::get_offset_of_duration_2(),
	U3CFadeLoadingScreenU3Ec__Iterator1_t1069699069::get_offset_of_targetValue_3(),
	U3CFadeLoadingScreenU3Ec__Iterator1_t1069699069::get_offset_of_U24this_4(),
	U3CFadeLoadingScreenU3Ec__Iterator1_t1069699069::get_offset_of_U24current_5(),
	U3CFadeLoadingScreenU3Ec__Iterator1_t1069699069::get_offset_of_U24disposing_6(),
	U3CFadeLoadingScreenU3Ec__Iterator1_t1069699069::get_offset_of_U24PC_7(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize3371 = { sizeof (SceneLoadTrigger_t68892663), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable3371[6] = 
{
	SceneLoadTrigger_t68892663::get_offset_of_currentScene_4(),
	SceneLoadTrigger_t68892663::get_offset_of_nextScene_5(),
	SceneLoadTrigger_t68892663::get_offset_of_loaderHint_6(),
	SceneLoadTrigger_t68892663::get_offset_of_listIndex_7(),
	SceneLoadTrigger_t68892663::get_offset_of_listSystem_8(),
	SceneLoadTrigger_t68892663::get_offset_of_list_9(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize3372 = { sizeof (SetScenes_t1986016658), -1, sizeof(SetScenes_t1986016658_StaticFields), 0 };
extern const int32_t g_FieldOffsetTable3372[15] = 
{
	SetScenes_t1986016658_StaticFields::get_offset_of_sceneToLoad_0(),
	SetScenes_t1986016658_StaticFields::get_offset_of_sceneToUnload_1(),
	SetScenes_t1986016658_StaticFields::get_offset_of_currentScene_2(),
	SetScenes_t1986016658_StaticFields::get_offset_of_nextScene_3(),
	SetScenes_t1986016658_StaticFields::get_offset_of_loaderHint_4(),
	SetScenes_t1986016658_StaticFields::get_offset_of_playerPosition_5(),
	SetScenes_t1986016658_StaticFields::get_offset_of_playerRotation_6(),
	SetScenes_t1986016658_StaticFields::get_offset_of_playerMedkits_7(),
	SetScenes_t1986016658_StaticFields::get_offset_of_playerStimulants_8(),
	SetScenes_t1986016658_StaticFields::get_offset_of_playerBatteries_9(),
	SetScenes_t1986016658_StaticFields::get_offset_of_playerHealth_10(),
	SetScenes_t1986016658_StaticFields::get_offset_of_MedsRemaining_11(),
	SetScenes_t1986016658_StaticFields::get_offset_of_BatteryRemaining_12(),
	SetScenes_t1986016658_StaticFields::get_offset_of_LightWepRemaining_13(),
	SetScenes_t1986016658_StaticFields::get_offset_of_HvyWepRemaining_14(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize3373 = { sizeof (Title_Animator_t1706872800), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable3373[13] = 
{
	Title_Animator_t1706872800::get_offset_of_isEnabled_4(),
	Title_Animator_t1706872800::get_offset_of_fadeImage_5(),
	Title_Animator_t1706872800::get_offset_of_fadeAmount_6(),
	Title_Animator_t1706872800::get_offset_of_fadeDelay_7(),
	Title_Animator_t1706872800::get_offset_of_fadeImage2_8(),
	Title_Animator_t1706872800::get_offset_of_fadeAmount2_9(),
	Title_Animator_t1706872800::get_offset_of_fadeDelay2_10(),
	Title_Animator_t1706872800::get_offset_of_fadeImage3_11(),
	Title_Animator_t1706872800::get_offset_of_fadeAmount3_12(),
	Title_Animator_t1706872800::get_offset_of_fadeDelay3_13(),
	Title_Animator_t1706872800::get_offset_of_fillImage_14(),
	Title_Animator_t1706872800::get_offset_of_fillAmount_15(),
	Title_Animator_t1706872800::get_offset_of_fillDelay_16(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize3374 = { sizeof (U3CDelayU3Ec__Iterator0_t2743924410), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable3374[6] = 
{
	U3CDelayU3Ec__Iterator0_t2743924410::get_offset_of_U3CtimeU3E__0_0(),
	U3CDelayU3Ec__Iterator0_t2743924410::get_offset_of_duration_1(),
	U3CDelayU3Ec__Iterator0_t2743924410::get_offset_of_U24this_2(),
	U3CDelayU3Ec__Iterator0_t2743924410::get_offset_of_U24current_3(),
	U3CDelayU3Ec__Iterator0_t2743924410::get_offset_of_U24disposing_4(),
	U3CDelayU3Ec__Iterator0_t2743924410::get_offset_of_U24PC_5(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize3375 = { sizeof (U3CWipeU3Ec__Iterator1_t1479192308), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable3375[8] = 
{
	U3CWipeU3Ec__Iterator1_t1479192308::get_offset_of_U3CtimeU3E__0_0(),
	U3CWipeU3Ec__Iterator1_t1479192308::get_offset_of_duration_1(),
	U3CWipeU3Ec__Iterator1_t1479192308::get_offset_of_startValue_2(),
	U3CWipeU3Ec__Iterator1_t1479192308::get_offset_of_endValue_3(),
	U3CWipeU3Ec__Iterator1_t1479192308::get_offset_of_U24this_4(),
	U3CWipeU3Ec__Iterator1_t1479192308::get_offset_of_U24current_5(),
	U3CWipeU3Ec__Iterator1_t1479192308::get_offset_of_U24disposing_6(),
	U3CWipeU3Ec__Iterator1_t1479192308::get_offset_of_U24PC_7(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize3376 = { sizeof (U3CFadeU3Ec__Iterator2_t2359198166), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable3376[8] = 
{
	U3CFadeU3Ec__Iterator2_t2359198166::get_offset_of_U3CtimeU3E__0_0(),
	U3CFadeU3Ec__Iterator2_t2359198166::get_offset_of_duration_1(),
	U3CFadeU3Ec__Iterator2_t2359198166::get_offset_of_startValue_2(),
	U3CFadeU3Ec__Iterator2_t2359198166::get_offset_of_endValue_3(),
	U3CFadeU3Ec__Iterator2_t2359198166::get_offset_of_U24this_4(),
	U3CFadeU3Ec__Iterator2_t2359198166::get_offset_of_U24current_5(),
	U3CFadeU3Ec__Iterator2_t2359198166::get_offset_of_U24disposing_6(),
	U3CFadeU3Ec__Iterator2_t2359198166::get_offset_of_U24PC_7(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize3377 = { sizeof (U3CFade2U3Ec__Iterator3_t3776403337), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable3377[8] = 
{
	U3CFade2U3Ec__Iterator3_t3776403337::get_offset_of_U3CtimeU3E__0_0(),
	U3CFade2U3Ec__Iterator3_t3776403337::get_offset_of_duration_1(),
	U3CFade2U3Ec__Iterator3_t3776403337::get_offset_of_startValue_2(),
	U3CFade2U3Ec__Iterator3_t3776403337::get_offset_of_endValue_3(),
	U3CFade2U3Ec__Iterator3_t3776403337::get_offset_of_U24this_4(),
	U3CFade2U3Ec__Iterator3_t3776403337::get_offset_of_U24current_5(),
	U3CFade2U3Ec__Iterator3_t3776403337::get_offset_of_U24disposing_6(),
	U3CFade2U3Ec__Iterator3_t3776403337::get_offset_of_U24PC_7(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize3378 = { sizeof (U3CFade3U3Ec__Iterator4_t3775970088), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable3378[8] = 
{
	U3CFade3U3Ec__Iterator4_t3775970088::get_offset_of_U3CtimeU3E__0_0(),
	U3CFade3U3Ec__Iterator4_t3775970088::get_offset_of_duration_1(),
	U3CFade3U3Ec__Iterator4_t3775970088::get_offset_of_startValue_2(),
	U3CFade3U3Ec__Iterator4_t3775970088::get_offset_of_endValue_3(),
	U3CFade3U3Ec__Iterator4_t3775970088::get_offset_of_U24this_4(),
	U3CFade3U3Ec__Iterator4_t3775970088::get_offset_of_U24current_5(),
	U3CFade3U3Ec__Iterator4_t3775970088::get_offset_of_U24disposing_6(),
	U3CFade3U3Ec__Iterator4_t3775970088::get_offset_of_U24PC_7(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize3379 = { sizeof (Title_Menu_Manager_t3788367697), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable3379[42] = 
{
	Title_Menu_Manager_t3788367697::get_offset_of_joystick1_4(),
	Title_Menu_Manager_t3788367697::get_offset_of_CROSS_5(),
	Title_Menu_Manager_t3788367697::get_offset_of_CIRCLE_6(),
	Title_Menu_Manager_t3788367697::get_offset_of_SQUARE_7(),
	Title_Menu_Manager_t3788367697::get_offset_of_TRIANGLE_8(),
	Title_Menu_Manager_t3788367697::get_offset_of_SELECT_9(),
	Title_Menu_Manager_t3788367697::get_offset_of_START_10(),
	Title_Menu_Manager_t3788367697::get_offset_of_UP_11(),
	Title_Menu_Manager_t3788367697::get_offset_of_RIGHT_12(),
	Title_Menu_Manager_t3788367697::get_offset_of_DOWN_13(),
	Title_Menu_Manager_t3788367697::get_offset_of_LEFT_14(),
	Title_Menu_Manager_t3788367697::get_offset_of_selectedSlot_15(),
	Title_Menu_Manager_t3788367697::get_offset_of_selectedSLSlot_16(),
	Title_Menu_Manager_t3788367697::get_offset_of_baseColor_17(),
	Title_Menu_Manager_t3788367697::get_offset_of_hilightColor_18(),
	Title_Menu_Manager_t3788367697::get_offset_of_selectedColor_19(),
	Title_Menu_Manager_t3788367697::get_offset_of_slot1_20(),
	Title_Menu_Manager_t3788367697::get_offset_of_slot2_21(),
	Title_Menu_Manager_t3788367697::get_offset_of_slot3_22(),
	Title_Menu_Manager_t3788367697::get_offset_of_saveManager_23(),
	Title_Menu_Manager_t3788367697::get_offset_of_optionsManager_24(),
	Title_Menu_Manager_t3788367697::get_offset_of_ButtonManager_25(),
	Title_Menu_Manager_t3788367697::get_offset_of_mainMenuCanvas_26(),
	Title_Menu_Manager_t3788367697::get_offset_of_saverCanvas_27(),
	Title_Menu_Manager_t3788367697::get_offset_of_optionCanvas_28(),
	Title_Menu_Manager_t3788367697::get_offset_of_dialogCanvas_29(),
	Title_Menu_Manager_t3788367697::get_offset_of_faderCanvas_30(),
	Title_Menu_Manager_t3788367697::get_offset_of_selectedCanvas_31(),
	Title_Menu_Manager_t3788367697::get_offset_of_audioManager_32(),
	Title_Menu_Manager_t3788367697::get_offset_of_targetValue_33(),
	Title_Menu_Manager_t3788367697::get_offset_of_mainMenuEnabled_34(),
	Title_Menu_Manager_t3788367697::get_offset_of_saverEnabled_35(),
	Title_Menu_Manager_t3788367697::get_offset_of_optionEnabled_36(),
	Title_Menu_Manager_t3788367697::get_offset_of_dialogEnabled_37(),
	Title_Menu_Manager_t3788367697::get_offset_of_delayTimer_38(),
	Title_Menu_Manager_t3788367697::get_offset_of_timer_39(),
	Title_Menu_Manager_t3788367697::get_offset_of_delay_40(),
	Title_Menu_Manager_t3788367697::get_offset_of_clipList_41(),
	Title_Menu_Manager_t3788367697::get_offset_of_audioSource_42(),
	Title_Menu_Manager_t3788367697::get_offset_of_currentSelection_43(),
	Title_Menu_Manager_t3788367697::get_offset_of_previousSelection_44(),
	Title_Menu_Manager_t3788367697::get_offset_of_anim_45(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize3380 = { sizeof (U3CFadeScreenU3Ec__Iterator0_t3191765439), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable3380[8] = 
{
	U3CFadeScreenU3Ec__Iterator0_t3191765439::get_offset_of_U3CfadeTimeU3E__0_0(),
	U3CFadeScreenU3Ec__Iterator0_t3191765439::get_offset_of_duration_1(),
	U3CFadeScreenU3Ec__Iterator0_t3191765439::get_offset_of_startValue_2(),
	U3CFadeScreenU3Ec__Iterator0_t3191765439::get_offset_of_targetValue_3(),
	U3CFadeScreenU3Ec__Iterator0_t3191765439::get_offset_of_U24this_4(),
	U3CFadeScreenU3Ec__Iterator0_t3191765439::get_offset_of_U24current_5(),
	U3CFadeScreenU3Ec__Iterator0_t3191765439::get_offset_of_U24disposing_6(),
	U3CFadeScreenU3Ec__Iterator0_t3191765439::get_offset_of_U24PC_7(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize3381 = { sizeof (SAI2x_t2622151746), -1, sizeof(SAI2x_t2622151746_StaticFields), 0 };
extern const int32_t g_FieldOffsetTable3381[2] = 
{
	SAI2x_t2622151746::get_offset_of_material_4(),
	SAI2x_t2622151746_StaticFields::get_offset_of_blurTexString_5(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize3382 = { sizeof (StartMenuManagerInputs_t1631812305), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable3382[43] = 
{
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	StartMenuManagerInputs_t1631812305::get_offset_of_selectedSlot_15(),
	StartMenuManagerInputs_t1631812305::get_offset_of_baseColor_16(),
	StartMenuManagerInputs_t1631812305::get_offset_of_hilightColor_17(),
	StartMenuManagerInputs_t1631812305::get_offset_of_selectedColor_18(),
	StartMenuManagerInputs_t1631812305::get_offset_of_slot0_19(),
	StartMenuManagerInputs_t1631812305::get_offset_of_slot1_20(),
	StartMenuManagerInputs_t1631812305::get_offset_of_slot2_21(),
	StartMenuManagerInputs_t1631812305::get_offset_of_saveManager_22(),
	StartMenuManagerInputs_t1631812305::get_offset_of_optionsManager_23(),
	StartMenuManagerInputs_t1631812305::get_offset_of_ButtonManager_24(),
	StartMenuManagerInputs_t1631812305::get_offset_of_loaderCanvas_25(),
	StartMenuManagerInputs_t1631812305::get_offset_of_optionCanvas_26(),
	StartMenuManagerInputs_t1631812305::get_offset_of_loadDialogGroup_27(),
	StartMenuManagerInputs_t1631812305::get_offset_of_fadeDuration_28(),
	StartMenuManagerInputs_t1631812305::get_offset_of_targetValue_29(),
	StartMenuManagerInputs_t1631812305::get_offset_of_loaderEnabled_30(),
	StartMenuManagerInputs_t1631812305::get_offset_of_optionEnabled_31(),
	StartMenuManagerInputs_t1631812305::get_offset_of_menuEnabled_32(),
	StartMenuManagerInputs_t1631812305::get_offset_of_timer_33(),
	StartMenuManagerInputs_t1631812305::get_offset_of_duration_34(),
	StartMenuManagerInputs_t1631812305::get_offset_of_loadingOperation_35(),
	StartMenuManagerInputs_t1631812305::get_offset_of_canvasGroup_36(),
	StartMenuManagerInputs_t1631812305::get_offset_of_selectedCanvas_37(),
	StartMenuManagerInputs_t1631812305::get_offset_of_audioManager_38(),
	StartMenuManagerInputs_t1631812305::get_offset_of_loadProgress_39(),
	StartMenuManagerInputs_t1631812305::get_offset_of_loading_40(),
	StartMenuManagerInputs_t1631812305::get_offset_of_loadDialogEnabled_41(),
	StartMenuManagerInputs_t1631812305::get_offset_of_delayTimer_42(),
	StartMenuManagerInputs_t1631812305::get_offset_of_clipList_43(),
	StartMenuManagerInputs_t1631812305::get_offset_of_audioSource_44(),
	StartMenuManagerInputs_t1631812305::get_offset_of_currentSelection_45(),
	StartMenuManagerInputs_t1631812305::get_offset_of_anim_46(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize3383 = { sizeof (U3CStartLoadU3Ec__Iterator0_t4179645091), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable3383[4] = 
{
	U3CStartLoadU3Ec__Iterator0_t4179645091::get_offset_of_U24this_0(),
	U3CStartLoadU3Ec__Iterator0_t4179645091::get_offset_of_U24current_1(),
	U3CStartLoadU3Ec__Iterator0_t4179645091::get_offset_of_U24disposing_2(),
	U3CStartLoadU3Ec__Iterator0_t4179645091::get_offset_of_U24PC_3(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize3384 = { sizeof (U3CFadeLoadingScreenU3Ec__Iterator1_t2470269376), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable3384[8] = 
{
	U3CFadeLoadingScreenU3Ec__Iterator1_t2470269376::get_offset_of_U3CstartValueU3E__0_0(),
	U3CFadeLoadingScreenU3Ec__Iterator1_t2470269376::get_offset_of_U3CfadeTimeU3E__0_1(),
	U3CFadeLoadingScreenU3Ec__Iterator1_t2470269376::get_offset_of_duration_2(),
	U3CFadeLoadingScreenU3Ec__Iterator1_t2470269376::get_offset_of_targetValue_3(),
	U3CFadeLoadingScreenU3Ec__Iterator1_t2470269376::get_offset_of_U24this_4(),
	U3CFadeLoadingScreenU3Ec__Iterator1_t2470269376::get_offset_of_U24current_5(),
	U3CFadeLoadingScreenU3Ec__Iterator1_t2470269376::get_offset_of_U24disposing_6(),
	U3CFadeLoadingScreenU3Ec__Iterator1_t2470269376::get_offset_of_U24PC_7(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize3385 = { sizeof (U3CFadeScreenU3Ec__Iterator2_t2843304175), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable3385[8] = 
{
	U3CFadeScreenU3Ec__Iterator2_t2843304175::get_offset_of_U3CstartValueU3E__0_0(),
	U3CFadeScreenU3Ec__Iterator2_t2843304175::get_offset_of_U3CfadeTimeU3E__0_1(),
	U3CFadeScreenU3Ec__Iterator2_t2843304175::get_offset_of_duration_2(),
	U3CFadeScreenU3Ec__Iterator2_t2843304175::get_offset_of_targetValue_3(),
	U3CFadeScreenU3Ec__Iterator2_t2843304175::get_offset_of_U24this_4(),
	U3CFadeScreenU3Ec__Iterator2_t2843304175::get_offset_of_U24current_5(),
	U3CFadeScreenU3Ec__Iterator2_t2843304175::get_offset_of_U24disposing_6(),
	U3CFadeScreenU3Ec__Iterator2_t2843304175::get_offset_of_U24PC_7(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize3386 = { sizeof (TitleSaveManagerInputs_t2244120510), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable3386[43] = 
{
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	TitleSaveManagerInputs_t2244120510::get_offset_of_selectedSlot_15(),
	TitleSaveManagerInputs_t2244120510::get_offset_of_baseColor_16(),
	TitleSaveManagerInputs_t2244120510::get_offset_of_hilightColor_17(),
	TitleSaveManagerInputs_t2244120510::get_offset_of_loadedColor_18(),
	TitleSaveManagerInputs_t2244120510::get_offset_of_savedColor_19(),
	TitleSaveManagerInputs_t2244120510::get_offset_of_slot1_20(),
	TitleSaveManagerInputs_t2244120510::get_offset_of_slot2_21(),
	TitleSaveManagerInputs_t2244120510::get_offset_of_slot3_22(),
	TitleSaveManagerInputs_t2244120510::get_offset_of_loadingOperation_23(),
	TitleSaveManagerInputs_t2244120510::get_offset_of_EventManager_24(),
	TitleSaveManagerInputs_t2244120510::get_offset_of_ButtonManager_25(),
	TitleSaveManagerInputs_t2244120510::get_offset_of_menuManager_26(),
	TitleSaveManagerInputs_t2244120510::get_offset_of_menuGroup_27(),
	TitleSaveManagerInputs_t2244120510::get_offset_of_saveGroup_28(),
	TitleSaveManagerInputs_t2244120510::get_offset_of_loadDialogGroup_29(),
	TitleSaveManagerInputs_t2244120510::get_offset_of_audioManager_30(),
	TitleSaveManagerInputs_t2244120510::get_offset_of_fadeDuration_31(),
	TitleSaveManagerInputs_t2244120510::get_offset_of_targetValue_32(),
	TitleSaveManagerInputs_t2244120510::get_offset_of_loadProgress_33(),
	TitleSaveManagerInputs_t2244120510::get_offset_of_loading_34(),
	TitleSaveManagerInputs_t2244120510::get_offset_of_timer_35(),
	TitleSaveManagerInputs_t2244120510::get_offset_of_delay_36(),
	TitleSaveManagerInputs_t2244120510::get_offset_of_clipList_37(),
	TitleSaveManagerInputs_t2244120510::get_offset_of_audioSource_38(),
	TitleSaveManagerInputs_t2244120510::get_offset_of_slot1Text_39(),
	TitleSaveManagerInputs_t2244120510::get_offset_of_slot2Text_40(),
	TitleSaveManagerInputs_t2244120510::get_offset_of_slot3Text_41(),
	TitleSaveManagerInputs_t2244120510::get_offset_of_slot1String_42(),
	TitleSaveManagerInputs_t2244120510::get_offset_of_slot2String_43(),
	TitleSaveManagerInputs_t2244120510::get_offset_of_slot3String_44(),
	TitleSaveManagerInputs_t2244120510::get_offset_of_currentSelection_45(),
	TitleSaveManagerInputs_t2244120510::get_offset_of_anim_46(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize3387 = { sizeof (U3CStartLoadU3Ec__Iterator0_t1375117951), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable3387[4] = 
{
	U3CStartLoadU3Ec__Iterator0_t1375117951::get_offset_of_U24this_0(),
	U3CStartLoadU3Ec__Iterator0_t1375117951::get_offset_of_U24current_1(),
	U3CStartLoadU3Ec__Iterator0_t1375117951::get_offset_of_U24disposing_2(),
	U3CStartLoadU3Ec__Iterator0_t1375117951::get_offset_of_U24PC_3(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize3388 = { sizeof (U3CFadeLoadingScreenU3Ec__Iterator1_t2284539295), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable3388[8] = 
{
	U3CFadeLoadingScreenU3Ec__Iterator1_t2284539295::get_offset_of_U3CstartValueU3E__0_0(),
	U3CFadeLoadingScreenU3Ec__Iterator1_t2284539295::get_offset_of_U3CtimeU3E__0_1(),
	U3CFadeLoadingScreenU3Ec__Iterator1_t2284539295::get_offset_of_duration_2(),
	U3CFadeLoadingScreenU3Ec__Iterator1_t2284539295::get_offset_of_targetValue_3(),
	U3CFadeLoadingScreenU3Ec__Iterator1_t2284539295::get_offset_of_U24this_4(),
	U3CFadeLoadingScreenU3Ec__Iterator1_t2284539295::get_offset_of_U24current_5(),
	U3CFadeLoadingScreenU3Ec__Iterator1_t2284539295::get_offset_of_U24disposing_6(),
	U3CFadeLoadingScreenU3Ec__Iterator1_t2284539295::get_offset_of_U24PC_7(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize3389 = { sizeof (U3CDialogHandlerU3Ec__Iterator2_t3551168443), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable3389[6] = 
{
	U3CDialogHandlerU3Ec__Iterator2_t3551168443::get_offset_of_U3CdurationU3E__0_0(),
	U3CDialogHandlerU3Ec__Iterator2_t3551168443::get_offset_of_U3CtimeU3E__0_1(),
	U3CDialogHandlerU3Ec__Iterator2_t3551168443::get_offset_of_U24this_2(),
	U3CDialogHandlerU3Ec__Iterator2_t3551168443::get_offset_of_U24current_3(),
	U3CDialogHandlerU3Ec__Iterator2_t3551168443::get_offset_of_U24disposing_4(),
	U3CDialogHandlerU3Ec__Iterator2_t3551168443::get_offset_of_U24PC_5(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize3390 = { sizeof (TitleScreenOptionsManager_t2832345059), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable3390[32] = 
{
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	TitleScreenOptionsManager_t2832345059::get_offset_of_selectedSlot_15(),
	TitleScreenOptionsManager_t2832345059::get_offset_of_baseColor_16(),
	TitleScreenOptionsManager_t2832345059::get_offset_of_hilightColor_17(),
	TitleScreenOptionsManager_t2832345059::get_offset_of_slot1_18(),
	TitleScreenOptionsManager_t2832345059::get_offset_of_slot2_19(),
	TitleScreenOptionsManager_t2832345059::get_offset_of_slot3_20(),
	TitleScreenOptionsManager_t2832345059::get_offset_of_ButtonManager_21(),
	TitleScreenOptionsManager_t2832345059::get_offset_of_menuManager_22(),
	TitleScreenOptionsManager_t2832345059::get_offset_of_audioManager_23(),
	TitleScreenOptionsManager_t2832345059::get_offset_of_BGMLevel_24(),
	TitleScreenOptionsManager_t2832345059::get_offset_of_SFXLevel_25(),
	TitleScreenOptionsManager_t2832345059::get_offset_of_sensitivityLevel_26(),
	TitleScreenOptionsManager_t2832345059::get_offset_of_timer_27(),
	TitleScreenOptionsManager_t2832345059::get_offset_of_delay_28(),
	TitleScreenOptionsManager_t2832345059::get_offset_of_BGMToSave_29(),
	TitleScreenOptionsManager_t2832345059::get_offset_of_SFXToSave_30(),
	TitleScreenOptionsManager_t2832345059::get_offset_of_SensitivityToSave_31(),
	TitleScreenOptionsManager_t2832345059::get_offset_of_clipList_32(),
	TitleScreenOptionsManager_t2832345059::get_offset_of_audioSource_33(),
	TitleScreenOptionsManager_t2832345059::get_offset_of_currentSelection_34(),
	TitleScreenOptionsManager_t2832345059::get_offset_of_anim_35(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize3391 = { sizeof (AutoRotate_t913508323), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable3391[4] = 
{
	AutoRotate_t913508323::get_offset_of_m_Speed_4(),
	AutoRotate_t913508323::get_offset_of_isRotateX_5(),
	AutoRotate_t913508323::get_offset_of_isRotateY_6(),
	AutoRotate_t913508323::get_offset_of_isRotateZ_7(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize3392 = { sizeof (CameraFacingBillboard_t1991403390), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable3392[1] = 
{
	CameraFacingBillboard_t1991403390::get_offset_of_m_Camera_4(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize3393 = { sizeof (CameraResolutionScaler_t2459044074), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable3393[11] = 
{
	CameraResolutionScaler_t2459044074::get_offset_of_enableInternalResolution_4(),
	CameraResolutionScaler_t2459044074::get_offset_of_InternalResolution_5(),
	CameraResolutionScaler_t2459044074::get_offset_of_screenResolution_6(),
	CameraResolutionScaler_t2459044074::get_offset_of_filterMode_7(),
	CameraResolutionScaler_t2459044074::get_offset_of_camera_8(),
	CameraResolutionScaler_t2459044074::get_offset_of_height_9(),
	CameraResolutionScaler_t2459044074::get_offset_of_originalRect_10(),
	CameraResolutionScaler_t2459044074::get_offset_of_renderDivisor_11(),
	CameraResolutionScaler_t2459044074::get_offset_of_renderTex_12(),
	CameraResolutionScaler_t2459044074::get_offset_of_scaledRect_13(),
	CameraResolutionScaler_t2459044074::get_offset_of_width_14(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize3394 = { sizeof (currentResolution_t873558430)+ sizeof (RuntimeObject), sizeof(int32_t), 0, 0 };
extern const int32_t g_FieldOffsetTable3394[5] = 
{
	currentResolution_t873558430::get_offset_of_value___2() + static_cast<int32_t>(sizeof(RuntimeObject)),
	0,
	0,
	0,
	0,
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize3395 = { sizeof (internalResolution_t1233538532)+ sizeof (RuntimeObject), sizeof(int32_t), 0, 0 };
extern const int32_t g_FieldOffsetTable3395[5] = 
{
	internalResolution_t1233538532::get_offset_of_value___2() + static_cast<int32_t>(sizeof(RuntimeObject)),
	0,
	0,
	0,
	0,
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize3396 = { sizeof (CameraResolutionSetter_t3633617313), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable3396[2] = 
{
	CameraResolutionSetter_t3633617313::get_offset_of_camera_4(),
	CameraResolutionSetter_t3633617313::get_offset_of_screenResolution_5(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize3397 = { sizeof (currentResolution_t3137793412)+ sizeof (RuntimeObject), sizeof(int32_t), 0, 0 };
extern const int32_t g_FieldOffsetTable3397[5] = 
{
	currentResolution_t3137793412::get_offset_of_value___2() + static_cast<int32_t>(sizeof(RuntimeObject)),
	0,
	0,
	0,
	0,
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize3398 = { sizeof (FPS_Counter_t957419163), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable3398[14] = 
{
	FPS_Counter_t957419163::get_offset_of_fpsText_4(),
	FPS_Counter_t957419163::get_offset_of_frameRange_5(),
	FPS_Counter_t957419163::get_offset_of_updateInterval_6(),
	FPS_Counter_t957419163::get_offset_of_maxFPS_7(),
	FPS_Counter_t957419163::get_offset_of_minFPS_8(),
	FPS_Counter_t957419163::get_offset_of_accum_9(),
	FPS_Counter_t957419163::get_offset_of_frames_10(),
	FPS_Counter_t957419163::get_offset_of_timeleft_11(),
	FPS_Counter_t957419163::get_offset_of_fpsBuffer_12(),
	FPS_Counter_t957419163::get_offset_of_fpsBufferIndex_13(),
	FPS_Counter_t957419163::get_offset_of_averageFPS_14(),
	FPS_Counter_t957419163::get_offset_of_msFrame_15(),
	FPS_Counter_t957419163::get_offset_of_vramText_16(),
	FPS_Counter_t957419163::get_offset_of_ramText_17(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize3399 = { sizeof (GC_Manager_t1144238453), -1, 0, 0 };
#ifdef __clang__
#pragma clang diagnostic pop
#endif
