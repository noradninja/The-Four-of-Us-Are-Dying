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


// System.Action`1<UnityEngine.Camera[]>
struct Action_1_t1882455329;
// System.AsyncCallback
struct AsyncCallback_t3962456242;
// System.Byte[]
struct ByteU5BU5D_t4116647657;
// System.Char[]
struct CharU5BU5D_t3528271667;
// System.Collections.Generic.List`1<System.Int32>
struct List_1_t128053199;
// System.Collections.Generic.List`1<UnityEngine.Experimental.Rendering.IRenderPipeline>
struct List_1_t2329883747;
// System.Collections.Generic.List`1<UnityEngine.Networking.PlayerConnection.PlayerEditorConnectionEvents/MessageTypeSubscribers>
struct List_1_t3157010512;
// System.DelegateData
struct DelegateData_t1677132599;
// System.Delegate[]
struct DelegateU5BU5D_t1703627840;
// System.IAsyncResult
struct IAsyncResult_t767004451;
// System.Object[]
struct ObjectU5BU5D_t2843939325;
// System.Reflection.MethodInfo
struct MethodInfo_t;
// System.Security.Cryptography.RandomNumberGenerator
struct RandomNumberGenerator_t386037858;
// System.String
struct String_t;
// System.Type
struct Type_t;
// System.Void
struct Void_t1185182177;
// UnityEngine.Events.InvokableCallList
struct InvokableCallList_t2498835369;
// UnityEngine.Events.PersistentCallGroup
struct PersistentCallGroup_t3050769227;
// UnityEngine.Events.UnityAction`1<UnityEngine.SceneManagement.Scene>
struct UnityAction_1_t2933211702;
// UnityEngine.Events.UnityAction`2<UnityEngine.SceneManagement.Scene,UnityEngine.SceneManagement.LoadSceneMode>
struct UnityAction_2_t2165061829;
// UnityEngine.Events.UnityAction`2<UnityEngine.SceneManagement.Scene,UnityEngine.SceneManagement.Scene>
struct UnityAction_2_t1262235195;
// UnityEngine.Experimental.Rendering.IRenderPipeline
struct IRenderPipeline_t857809005;
// UnityEngine.Experimental.Rendering.IRenderPipelineAsset
struct IRenderPipelineAsset_t3275513850;
// UnityEngine.ILogHandler
struct ILogHandler_t2464711877;
// UnityEngine.IPlayerEditorConnectionNative
struct IPlayerEditorConnectionNative_t4228359453;
// UnityEngine.Networking.PlayerConnection.PlayerEditorConnectionEvents
struct PlayerEditorConnectionEvents_t3411787513;
// UnityEngine.Networking.PlayerConnection.PlayerEditorConnectionEvents/ConnectionChangeEvent
struct ConnectionChangeEvent_t3251856151;
// UnityEngine.Networking.PlayerConnection.PlayerEditorConnectionEvents/MessageEvent
struct MessageEvent_t1491597365;
// UnityEngine.Object
struct Object_t631007953;
// UnityEngine.Playables.PlayableBinding/CreateOutputMethod
struct CreateOutputMethod_t2301811773;
// UnityEngine.Playables.PlayableBinding[]
struct PlayableBindingU5BU5D_t829358056;
// UnityEngine.RectTransform
struct RectTransform_t3704657025;
// UnityEngine.RectTransform/ReapplyDrivenProperties
struct ReapplyDrivenProperties_t1258266594;
// UnityEngine.Transform
struct Transform_t3600365921;

struct Object_t631007953_marshaled_com;



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
#ifndef ATTRIBUTE_T861562559_H
#define ATTRIBUTE_T861562559_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Attribute
struct  Attribute_t861562559  : public RuntimeObject
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // ATTRIBUTE_T861562559_H
#ifndef STACK_T2329662280_H
#define STACK_T2329662280_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Collections.Stack
struct  Stack_t2329662280  : public RuntimeObject
{
public:
	// System.Object[] System.Collections.Stack::_array
	ObjectU5BU5D_t2843939325* ____array_0;
	// System.Int32 System.Collections.Stack::_size
	int32_t ____size_1;
	// System.Int32 System.Collections.Stack::_version
	int32_t ____version_2;
	// System.Object System.Collections.Stack::_syncRoot
	RuntimeObject * ____syncRoot_3;

public:
	inline static int32_t get_offset_of__array_0() { return static_cast<int32_t>(offsetof(Stack_t2329662280, ____array_0)); }
	inline ObjectU5BU5D_t2843939325* get__array_0() const { return ____array_0; }
	inline ObjectU5BU5D_t2843939325** get_address_of__array_0() { return &____array_0; }
	inline void set__array_0(ObjectU5BU5D_t2843939325* value)
	{
		____array_0 = value;
		Il2CppCodeGenWriteBarrier((&____array_0), value);
	}

	inline static int32_t get_offset_of__size_1() { return static_cast<int32_t>(offsetof(Stack_t2329662280, ____size_1)); }
	inline int32_t get__size_1() const { return ____size_1; }
	inline int32_t* get_address_of__size_1() { return &____size_1; }
	inline void set__size_1(int32_t value)
	{
		____size_1 = value;
	}

	inline static int32_t get_offset_of__version_2() { return static_cast<int32_t>(offsetof(Stack_t2329662280, ____version_2)); }
	inline int32_t get__version_2() const { return ____version_2; }
	inline int32_t* get_address_of__version_2() { return &____version_2; }
	inline void set__version_2(int32_t value)
	{
		____version_2 = value;
	}

	inline static int32_t get_offset_of__syncRoot_3() { return static_cast<int32_t>(offsetof(Stack_t2329662280, ____syncRoot_3)); }
	inline RuntimeObject * get__syncRoot_3() const { return ____syncRoot_3; }
	inline RuntimeObject ** get_address_of__syncRoot_3() { return &____syncRoot_3; }
	inline void set__syncRoot_3(RuntimeObject * value)
	{
		____syncRoot_3 = value;
		Il2CppCodeGenWriteBarrier((&____syncRoot_3), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // STACK_T2329662280_H
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
#ifndef UNSAFEUTILITY_T2812711650_H
#define UNSAFEUTILITY_T2812711650_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// Unity.Collections.LowLevel.Unsafe.UnsafeUtility
struct  UnsafeUtility_t2812711650  : public RuntimeObject
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // UNSAFEUTILITY_T2812711650_H
#ifndef UNITYEVENTBASE_T3960448221_H
#define UNITYEVENTBASE_T3960448221_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.Events.UnityEventBase
struct  UnityEventBase_t3960448221  : public RuntimeObject
{
public:
	// UnityEngine.Events.InvokableCallList UnityEngine.Events.UnityEventBase::m_Calls
	InvokableCallList_t2498835369 * ___m_Calls_0;
	// UnityEngine.Events.PersistentCallGroup UnityEngine.Events.UnityEventBase::m_PersistentCalls
	PersistentCallGroup_t3050769227 * ___m_PersistentCalls_1;
	// System.String UnityEngine.Events.UnityEventBase::m_TypeName
	String_t* ___m_TypeName_2;
	// System.Boolean UnityEngine.Events.UnityEventBase::m_CallsDirty
	bool ___m_CallsDirty_3;

public:
	inline static int32_t get_offset_of_m_Calls_0() { return static_cast<int32_t>(offsetof(UnityEventBase_t3960448221, ___m_Calls_0)); }
	inline InvokableCallList_t2498835369 * get_m_Calls_0() const { return ___m_Calls_0; }
	inline InvokableCallList_t2498835369 ** get_address_of_m_Calls_0() { return &___m_Calls_0; }
	inline void set_m_Calls_0(InvokableCallList_t2498835369 * value)
	{
		___m_Calls_0 = value;
		Il2CppCodeGenWriteBarrier((&___m_Calls_0), value);
	}

	inline static int32_t get_offset_of_m_PersistentCalls_1() { return static_cast<int32_t>(offsetof(UnityEventBase_t3960448221, ___m_PersistentCalls_1)); }
	inline PersistentCallGroup_t3050769227 * get_m_PersistentCalls_1() const { return ___m_PersistentCalls_1; }
	inline PersistentCallGroup_t3050769227 ** get_address_of_m_PersistentCalls_1() { return &___m_PersistentCalls_1; }
	inline void set_m_PersistentCalls_1(PersistentCallGroup_t3050769227 * value)
	{
		___m_PersistentCalls_1 = value;
		Il2CppCodeGenWriteBarrier((&___m_PersistentCalls_1), value);
	}

	inline static int32_t get_offset_of_m_TypeName_2() { return static_cast<int32_t>(offsetof(UnityEventBase_t3960448221, ___m_TypeName_2)); }
	inline String_t* get_m_TypeName_2() const { return ___m_TypeName_2; }
	inline String_t** get_address_of_m_TypeName_2() { return &___m_TypeName_2; }
	inline void set_m_TypeName_2(String_t* value)
	{
		___m_TypeName_2 = value;
		Il2CppCodeGenWriteBarrier((&___m_TypeName_2), value);
	}

	inline static int32_t get_offset_of_m_CallsDirty_3() { return static_cast<int32_t>(offsetof(UnityEventBase_t3960448221, ___m_CallsDirty_3)); }
	inline bool get_m_CallsDirty_3() const { return ___m_CallsDirty_3; }
	inline bool* get_address_of_m_CallsDirty_3() { return &___m_CallsDirty_3; }
	inline void set_m_CallsDirty_3(bool value)
	{
		___m_CallsDirty_3 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // UNITYEVENTBASE_T3960448221_H
#ifndef RENDERPIPELINE_T957695896_H
#define RENDERPIPELINE_T957695896_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.Experimental.Rendering.RenderPipeline
struct  RenderPipeline_t957695896  : public RuntimeObject
{
public:
	// System.Boolean UnityEngine.Experimental.Rendering.RenderPipeline::<disposed>k__BackingField
	bool ___U3CdisposedU3Ek__BackingField_1;

public:
	inline static int32_t get_offset_of_U3CdisposedU3Ek__BackingField_1() { return static_cast<int32_t>(offsetof(RenderPipeline_t957695896, ___U3CdisposedU3Ek__BackingField_1)); }
	inline bool get_U3CdisposedU3Ek__BackingField_1() const { return ___U3CdisposedU3Ek__BackingField_1; }
	inline bool* get_address_of_U3CdisposedU3Ek__BackingField_1() { return &___U3CdisposedU3Ek__BackingField_1; }
	inline void set_U3CdisposedU3Ek__BackingField_1(bool value)
	{
		___U3CdisposedU3Ek__BackingField_1 = value;
	}
};

struct RenderPipeline_t957695896_StaticFields
{
public:
	// System.Action`1<UnityEngine.Camera[]> UnityEngine.Experimental.Rendering.RenderPipeline::beginFrameRendering
	Action_1_t1882455329 * ___beginFrameRendering_0;

public:
	inline static int32_t get_offset_of_beginFrameRendering_0() { return static_cast<int32_t>(offsetof(RenderPipeline_t957695896_StaticFields, ___beginFrameRendering_0)); }
	inline Action_1_t1882455329 * get_beginFrameRendering_0() const { return ___beginFrameRendering_0; }
	inline Action_1_t1882455329 ** get_address_of_beginFrameRendering_0() { return &___beginFrameRendering_0; }
	inline void set_beginFrameRendering_0(Action_1_t1882455329 * value)
	{
		___beginFrameRendering_0 = value;
		Il2CppCodeGenWriteBarrier((&___beginFrameRendering_0), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // RENDERPIPELINE_T957695896_H
#ifndef RENDERPIPELINEMANAGER_T4036911426_H
#define RENDERPIPELINEMANAGER_T4036911426_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.Experimental.Rendering.RenderPipelineManager
struct  RenderPipelineManager_t4036911426  : public RuntimeObject
{
public:

public:
};

struct RenderPipelineManager_t4036911426_StaticFields
{
public:
	// UnityEngine.Experimental.Rendering.IRenderPipelineAsset UnityEngine.Experimental.Rendering.RenderPipelineManager::s_CurrentPipelineAsset
	RuntimeObject* ___s_CurrentPipelineAsset_0;
	// UnityEngine.Experimental.Rendering.IRenderPipeline UnityEngine.Experimental.Rendering.RenderPipelineManager::<currentPipeline>k__BackingField
	RuntimeObject* ___U3CcurrentPipelineU3Ek__BackingField_1;

public:
	inline static int32_t get_offset_of_s_CurrentPipelineAsset_0() { return static_cast<int32_t>(offsetof(RenderPipelineManager_t4036911426_StaticFields, ___s_CurrentPipelineAsset_0)); }
	inline RuntimeObject* get_s_CurrentPipelineAsset_0() const { return ___s_CurrentPipelineAsset_0; }
	inline RuntimeObject** get_address_of_s_CurrentPipelineAsset_0() { return &___s_CurrentPipelineAsset_0; }
	inline void set_s_CurrentPipelineAsset_0(RuntimeObject* value)
	{
		___s_CurrentPipelineAsset_0 = value;
		Il2CppCodeGenWriteBarrier((&___s_CurrentPipelineAsset_0), value);
	}

	inline static int32_t get_offset_of_U3CcurrentPipelineU3Ek__BackingField_1() { return static_cast<int32_t>(offsetof(RenderPipelineManager_t4036911426_StaticFields, ___U3CcurrentPipelineU3Ek__BackingField_1)); }
	inline RuntimeObject* get_U3CcurrentPipelineU3Ek__BackingField_1() const { return ___U3CcurrentPipelineU3Ek__BackingField_1; }
	inline RuntimeObject** get_address_of_U3CcurrentPipelineU3Ek__BackingField_1() { return &___U3CcurrentPipelineU3Ek__BackingField_1; }
	inline void set_U3CcurrentPipelineU3Ek__BackingField_1(RuntimeObject* value)
	{
		___U3CcurrentPipelineU3Ek__BackingField_1 = value;
		Il2CppCodeGenWriteBarrier((&___U3CcurrentPipelineU3Ek__BackingField_1), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // RENDERPIPELINEMANAGER_T4036911426_H
#ifndef MESSAGEEVENTARGS_T1170575784_H
#define MESSAGEEVENTARGS_T1170575784_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.Networking.PlayerConnection.MessageEventArgs
struct  MessageEventArgs_t1170575784  : public RuntimeObject
{
public:
	// System.Int32 UnityEngine.Networking.PlayerConnection.MessageEventArgs::playerId
	int32_t ___playerId_0;
	// System.Byte[] UnityEngine.Networking.PlayerConnection.MessageEventArgs::data
	ByteU5BU5D_t4116647657* ___data_1;

public:
	inline static int32_t get_offset_of_playerId_0() { return static_cast<int32_t>(offsetof(MessageEventArgs_t1170575784, ___playerId_0)); }
	inline int32_t get_playerId_0() const { return ___playerId_0; }
	inline int32_t* get_address_of_playerId_0() { return &___playerId_0; }
	inline void set_playerId_0(int32_t value)
	{
		___playerId_0 = value;
	}

	inline static int32_t get_offset_of_data_1() { return static_cast<int32_t>(offsetof(MessageEventArgs_t1170575784, ___data_1)); }
	inline ByteU5BU5D_t4116647657* get_data_1() const { return ___data_1; }
	inline ByteU5BU5D_t4116647657** get_address_of_data_1() { return &___data_1; }
	inline void set_data_1(ByteU5BU5D_t4116647657* value)
	{
		___data_1 = value;
		Il2CppCodeGenWriteBarrier((&___data_1), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // MESSAGEEVENTARGS_T1170575784_H
#ifndef U3CBLOCKUNTILRECVMSGU3EC__ANONSTOREY2_T2166869842_H
#define U3CBLOCKUNTILRECVMSGU3EC__ANONSTOREY2_T2166869842_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.Networking.PlayerConnection.PlayerConnection/<BlockUntilRecvMsg>c__AnonStorey2
struct  U3CBlockUntilRecvMsgU3Ec__AnonStorey2_t2166869842  : public RuntimeObject
{
public:
	// System.Boolean UnityEngine.Networking.PlayerConnection.PlayerConnection/<BlockUntilRecvMsg>c__AnonStorey2::msgReceived
	bool ___msgReceived_0;

public:
	inline static int32_t get_offset_of_msgReceived_0() { return static_cast<int32_t>(offsetof(U3CBlockUntilRecvMsgU3Ec__AnonStorey2_t2166869842, ___msgReceived_0)); }
	inline bool get_msgReceived_0() const { return ___msgReceived_0; }
	inline bool* get_address_of_msgReceived_0() { return &___msgReceived_0; }
	inline void set_msgReceived_0(bool value)
	{
		___msgReceived_0 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // U3CBLOCKUNTILRECVMSGU3EC__ANONSTOREY2_T2166869842_H
#ifndef PLAYEREDITORCONNECTIONEVENTS_T3411787513_H
#define PLAYEREDITORCONNECTIONEVENTS_T3411787513_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.Networking.PlayerConnection.PlayerEditorConnectionEvents
struct  PlayerEditorConnectionEvents_t3411787513  : public RuntimeObject
{
public:
	// System.Collections.Generic.List`1<UnityEngine.Networking.PlayerConnection.PlayerEditorConnectionEvents/MessageTypeSubscribers> UnityEngine.Networking.PlayerConnection.PlayerEditorConnectionEvents::messageTypeSubscribers
	List_1_t3157010512 * ___messageTypeSubscribers_0;
	// UnityEngine.Networking.PlayerConnection.PlayerEditorConnectionEvents/ConnectionChangeEvent UnityEngine.Networking.PlayerConnection.PlayerEditorConnectionEvents::connectionEvent
	ConnectionChangeEvent_t3251856151 * ___connectionEvent_1;
	// UnityEngine.Networking.PlayerConnection.PlayerEditorConnectionEvents/ConnectionChangeEvent UnityEngine.Networking.PlayerConnection.PlayerEditorConnectionEvents::disconnectionEvent
	ConnectionChangeEvent_t3251856151 * ___disconnectionEvent_2;

public:
	inline static int32_t get_offset_of_messageTypeSubscribers_0() { return static_cast<int32_t>(offsetof(PlayerEditorConnectionEvents_t3411787513, ___messageTypeSubscribers_0)); }
	inline List_1_t3157010512 * get_messageTypeSubscribers_0() const { return ___messageTypeSubscribers_0; }
	inline List_1_t3157010512 ** get_address_of_messageTypeSubscribers_0() { return &___messageTypeSubscribers_0; }
	inline void set_messageTypeSubscribers_0(List_1_t3157010512 * value)
	{
		___messageTypeSubscribers_0 = value;
		Il2CppCodeGenWriteBarrier((&___messageTypeSubscribers_0), value);
	}

	inline static int32_t get_offset_of_connectionEvent_1() { return static_cast<int32_t>(offsetof(PlayerEditorConnectionEvents_t3411787513, ___connectionEvent_1)); }
	inline ConnectionChangeEvent_t3251856151 * get_connectionEvent_1() const { return ___connectionEvent_1; }
	inline ConnectionChangeEvent_t3251856151 ** get_address_of_connectionEvent_1() { return &___connectionEvent_1; }
	inline void set_connectionEvent_1(ConnectionChangeEvent_t3251856151 * value)
	{
		___connectionEvent_1 = value;
		Il2CppCodeGenWriteBarrier((&___connectionEvent_1), value);
	}

	inline static int32_t get_offset_of_disconnectionEvent_2() { return static_cast<int32_t>(offsetof(PlayerEditorConnectionEvents_t3411787513, ___disconnectionEvent_2)); }
	inline ConnectionChangeEvent_t3251856151 * get_disconnectionEvent_2() const { return ___disconnectionEvent_2; }
	inline ConnectionChangeEvent_t3251856151 ** get_address_of_disconnectionEvent_2() { return &___disconnectionEvent_2; }
	inline void set_disconnectionEvent_2(ConnectionChangeEvent_t3251856151 * value)
	{
		___disconnectionEvent_2 = value;
		Il2CppCodeGenWriteBarrier((&___disconnectionEvent_2), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // PLAYEREDITORCONNECTIONEVENTS_T3411787513_H
#ifndef MESSAGETYPESUBSCRIBERS_T1684935770_H
#define MESSAGETYPESUBSCRIBERS_T1684935770_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.Networking.PlayerConnection.PlayerEditorConnectionEvents/MessageTypeSubscribers
struct  MessageTypeSubscribers_t1684935770  : public RuntimeObject
{
public:
	// System.String UnityEngine.Networking.PlayerConnection.PlayerEditorConnectionEvents/MessageTypeSubscribers::m_messageTypeId
	String_t* ___m_messageTypeId_0;
	// System.Int32 UnityEngine.Networking.PlayerConnection.PlayerEditorConnectionEvents/MessageTypeSubscribers::subscriberCount
	int32_t ___subscriberCount_1;
	// UnityEngine.Networking.PlayerConnection.PlayerEditorConnectionEvents/MessageEvent UnityEngine.Networking.PlayerConnection.PlayerEditorConnectionEvents/MessageTypeSubscribers::messageCallback
	MessageEvent_t1491597365 * ___messageCallback_2;

public:
	inline static int32_t get_offset_of_m_messageTypeId_0() { return static_cast<int32_t>(offsetof(MessageTypeSubscribers_t1684935770, ___m_messageTypeId_0)); }
	inline String_t* get_m_messageTypeId_0() const { return ___m_messageTypeId_0; }
	inline String_t** get_address_of_m_messageTypeId_0() { return &___m_messageTypeId_0; }
	inline void set_m_messageTypeId_0(String_t* value)
	{
		___m_messageTypeId_0 = value;
		Il2CppCodeGenWriteBarrier((&___m_messageTypeId_0), value);
	}

	inline static int32_t get_offset_of_subscriberCount_1() { return static_cast<int32_t>(offsetof(MessageTypeSubscribers_t1684935770, ___subscriberCount_1)); }
	inline int32_t get_subscriberCount_1() const { return ___subscriberCount_1; }
	inline int32_t* get_address_of_subscriberCount_1() { return &___subscriberCount_1; }
	inline void set_subscriberCount_1(int32_t value)
	{
		___subscriberCount_1 = value;
	}

	inline static int32_t get_offset_of_messageCallback_2() { return static_cast<int32_t>(offsetof(MessageTypeSubscribers_t1684935770, ___messageCallback_2)); }
	inline MessageEvent_t1491597365 * get_messageCallback_2() const { return ___messageCallback_2; }
	inline MessageEvent_t1491597365 ** get_address_of_messageCallback_2() { return &___messageCallback_2; }
	inline void set_messageCallback_2(MessageEvent_t1491597365 * value)
	{
		___messageCallback_2 = value;
		Il2CppCodeGenWriteBarrier((&___messageCallback_2), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // MESSAGETYPESUBSCRIBERS_T1684935770_H
#ifndef PLAYABLEBEHAVIOUR_T4203540982_H
#define PLAYABLEBEHAVIOUR_T4203540982_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.Playables.PlayableBehaviour
struct  PlayableBehaviour_t4203540982  : public RuntimeObject
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // PLAYABLEBEHAVIOUR_T4203540982_H
#ifndef SCENEMANAGER_T2787271929_H
#define SCENEMANAGER_T2787271929_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.SceneManagement.SceneManager
struct  SceneManager_t2787271929  : public RuntimeObject
{
public:

public:
};

struct SceneManager_t2787271929_StaticFields
{
public:
	// UnityEngine.Events.UnityAction`2<UnityEngine.SceneManagement.Scene,UnityEngine.SceneManagement.LoadSceneMode> UnityEngine.SceneManagement.SceneManager::sceneLoaded
	UnityAction_2_t2165061829 * ___sceneLoaded_0;
	// UnityEngine.Events.UnityAction`1<UnityEngine.SceneManagement.Scene> UnityEngine.SceneManagement.SceneManager::sceneUnloaded
	UnityAction_1_t2933211702 * ___sceneUnloaded_1;
	// UnityEngine.Events.UnityAction`2<UnityEngine.SceneManagement.Scene,UnityEngine.SceneManagement.Scene> UnityEngine.SceneManagement.SceneManager::activeSceneChanged
	UnityAction_2_t1262235195 * ___activeSceneChanged_2;

public:
	inline static int32_t get_offset_of_sceneLoaded_0() { return static_cast<int32_t>(offsetof(SceneManager_t2787271929_StaticFields, ___sceneLoaded_0)); }
	inline UnityAction_2_t2165061829 * get_sceneLoaded_0() const { return ___sceneLoaded_0; }
	inline UnityAction_2_t2165061829 ** get_address_of_sceneLoaded_0() { return &___sceneLoaded_0; }
	inline void set_sceneLoaded_0(UnityAction_2_t2165061829 * value)
	{
		___sceneLoaded_0 = value;
		Il2CppCodeGenWriteBarrier((&___sceneLoaded_0), value);
	}

	inline static int32_t get_offset_of_sceneUnloaded_1() { return static_cast<int32_t>(offsetof(SceneManager_t2787271929_StaticFields, ___sceneUnloaded_1)); }
	inline UnityAction_1_t2933211702 * get_sceneUnloaded_1() const { return ___sceneUnloaded_1; }
	inline UnityAction_1_t2933211702 ** get_address_of_sceneUnloaded_1() { return &___sceneUnloaded_1; }
	inline void set_sceneUnloaded_1(UnityAction_1_t2933211702 * value)
	{
		___sceneUnloaded_1 = value;
		Il2CppCodeGenWriteBarrier((&___sceneUnloaded_1), value);
	}

	inline static int32_t get_offset_of_activeSceneChanged_2() { return static_cast<int32_t>(offsetof(SceneManager_t2787271929_StaticFields, ___activeSceneChanged_2)); }
	inline UnityAction_2_t1262235195 * get_activeSceneChanged_2() const { return ___activeSceneChanged_2; }
	inline UnityAction_2_t1262235195 ** get_address_of_activeSceneChanged_2() { return &___activeSceneChanged_2; }
	inline void set_activeSceneChanged_2(UnityAction_2_t1262235195 * value)
	{
		___activeSceneChanged_2 = value;
		Il2CppCodeGenWriteBarrier((&___activeSceneChanged_2), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // SCENEMANAGER_T2787271929_H
#ifndef DATAUTILITY_T2196215967_H
#define DATAUTILITY_T2196215967_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.Sprites.DataUtility
struct  DataUtility_t2196215967  : public RuntimeObject
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // DATAUTILITY_T2196215967_H
#ifndef ENUMERATOR_T3442430665_H
#define ENUMERATOR_T3442430665_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.Transform/Enumerator
struct  Enumerator_t3442430665  : public RuntimeObject
{
public:
	// UnityEngine.Transform UnityEngine.Transform/Enumerator::outer
	Transform_t3600365921 * ___outer_0;
	// System.Int32 UnityEngine.Transform/Enumerator::currentIndex
	int32_t ___currentIndex_1;

public:
	inline static int32_t get_offset_of_outer_0() { return static_cast<int32_t>(offsetof(Enumerator_t3442430665, ___outer_0)); }
	inline Transform_t3600365921 * get_outer_0() const { return ___outer_0; }
	inline Transform_t3600365921 ** get_address_of_outer_0() { return &___outer_0; }
	inline void set_outer_0(Transform_t3600365921 * value)
	{
		___outer_0 = value;
		Il2CppCodeGenWriteBarrier((&___outer_0), value);
	}

	inline static int32_t get_offset_of_currentIndex_1() { return static_cast<int32_t>(offsetof(Enumerator_t3442430665, ___currentIndex_1)); }
	inline int32_t get_currentIndex_1() const { return ___currentIndex_1; }
	inline int32_t* get_address_of_currentIndex_1() { return &___currentIndex_1; }
	inline void set_currentIndex_1(int32_t value)
	{
		___currentIndex_1 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // ENUMERATOR_T3442430665_H
#ifndef YIELDINSTRUCTION_T403091072_H
#define YIELDINSTRUCTION_T403091072_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.YieldInstruction
struct  YieldInstruction_t403091072  : public RuntimeObject
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
// Native definition for P/Invoke marshalling of UnityEngine.YieldInstruction
struct YieldInstruction_t403091072_marshaled_pinvoke
{
};
// Native definition for COM marshalling of UnityEngine.YieldInstruction
struct YieldInstruction_t403091072_marshaled_com
{
};
#endif // YIELDINSTRUCTION_T403091072_H
#ifndef NETFXCOREEXTENSIONS_T4089902045_H
#define NETFXCOREEXTENSIONS_T4089902045_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngineInternal.NetFxCoreExtensions
struct  NetFxCoreExtensions_t4089902045  : public RuntimeObject
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // NETFXCOREEXTENSIONS_T4089902045_H
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
#ifndef GUID_T_H
#define GUID_T_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Guid
struct  Guid_t 
{
public:
	// System.Int32 System.Guid::_a
	int32_t ____a_1;
	// System.Int16 System.Guid::_b
	int16_t ____b_2;
	// System.Int16 System.Guid::_c
	int16_t ____c_3;
	// System.Byte System.Guid::_d
	uint8_t ____d_4;
	// System.Byte System.Guid::_e
	uint8_t ____e_5;
	// System.Byte System.Guid::_f
	uint8_t ____f_6;
	// System.Byte System.Guid::_g
	uint8_t ____g_7;
	// System.Byte System.Guid::_h
	uint8_t ____h_8;
	// System.Byte System.Guid::_i
	uint8_t ____i_9;
	// System.Byte System.Guid::_j
	uint8_t ____j_10;
	// System.Byte System.Guid::_k
	uint8_t ____k_11;

public:
	inline static int32_t get_offset_of__a_1() { return static_cast<int32_t>(offsetof(Guid_t, ____a_1)); }
	inline int32_t get__a_1() const { return ____a_1; }
	inline int32_t* get_address_of__a_1() { return &____a_1; }
	inline void set__a_1(int32_t value)
	{
		____a_1 = value;
	}

	inline static int32_t get_offset_of__b_2() { return static_cast<int32_t>(offsetof(Guid_t, ____b_2)); }
	inline int16_t get__b_2() const { return ____b_2; }
	inline int16_t* get_address_of__b_2() { return &____b_2; }
	inline void set__b_2(int16_t value)
	{
		____b_2 = value;
	}

	inline static int32_t get_offset_of__c_3() { return static_cast<int32_t>(offsetof(Guid_t, ____c_3)); }
	inline int16_t get__c_3() const { return ____c_3; }
	inline int16_t* get_address_of__c_3() { return &____c_3; }
	inline void set__c_3(int16_t value)
	{
		____c_3 = value;
	}

	inline static int32_t get_offset_of__d_4() { return static_cast<int32_t>(offsetof(Guid_t, ____d_4)); }
	inline uint8_t get__d_4() const { return ____d_4; }
	inline uint8_t* get_address_of__d_4() { return &____d_4; }
	inline void set__d_4(uint8_t value)
	{
		____d_4 = value;
	}

	inline static int32_t get_offset_of__e_5() { return static_cast<int32_t>(offsetof(Guid_t, ____e_5)); }
	inline uint8_t get__e_5() const { return ____e_5; }
	inline uint8_t* get_address_of__e_5() { return &____e_5; }
	inline void set__e_5(uint8_t value)
	{
		____e_5 = value;
	}

	inline static int32_t get_offset_of__f_6() { return static_cast<int32_t>(offsetof(Guid_t, ____f_6)); }
	inline uint8_t get__f_6() const { return ____f_6; }
	inline uint8_t* get_address_of__f_6() { return &____f_6; }
	inline void set__f_6(uint8_t value)
	{
		____f_6 = value;
	}

	inline static int32_t get_offset_of__g_7() { return static_cast<int32_t>(offsetof(Guid_t, ____g_7)); }
	inline uint8_t get__g_7() const { return ____g_7; }
	inline uint8_t* get_address_of__g_7() { return &____g_7; }
	inline void set__g_7(uint8_t value)
	{
		____g_7 = value;
	}

	inline static int32_t get_offset_of__h_8() { return static_cast<int32_t>(offsetof(Guid_t, ____h_8)); }
	inline uint8_t get__h_8() const { return ____h_8; }
	inline uint8_t* get_address_of__h_8() { return &____h_8; }
	inline void set__h_8(uint8_t value)
	{
		____h_8 = value;
	}

	inline static int32_t get_offset_of__i_9() { return static_cast<int32_t>(offsetof(Guid_t, ____i_9)); }
	inline uint8_t get__i_9() const { return ____i_9; }
	inline uint8_t* get_address_of__i_9() { return &____i_9; }
	inline void set__i_9(uint8_t value)
	{
		____i_9 = value;
	}

	inline static int32_t get_offset_of__j_10() { return static_cast<int32_t>(offsetof(Guid_t, ____j_10)); }
	inline uint8_t get__j_10() const { return ____j_10; }
	inline uint8_t* get_address_of__j_10() { return &____j_10; }
	inline void set__j_10(uint8_t value)
	{
		____j_10 = value;
	}

	inline static int32_t get_offset_of__k_11() { return static_cast<int32_t>(offsetof(Guid_t, ____k_11)); }
	inline uint8_t get__k_11() const { return ____k_11; }
	inline uint8_t* get_address_of__k_11() { return &____k_11; }
	inline void set__k_11(uint8_t value)
	{
		____k_11 = value;
	}
};

struct Guid_t_StaticFields
{
public:
	// System.Guid System.Guid::Empty
	Guid_t  ___Empty_0;
	// System.Object System.Guid::_rngAccess
	RuntimeObject * ____rngAccess_12;
	// System.Security.Cryptography.RandomNumberGenerator System.Guid::_rng
	RandomNumberGenerator_t386037858 * ____rng_13;
	// System.Security.Cryptography.RandomNumberGenerator System.Guid::_fastRng
	RandomNumberGenerator_t386037858 * ____fastRng_14;

public:
	inline static int32_t get_offset_of_Empty_0() { return static_cast<int32_t>(offsetof(Guid_t_StaticFields, ___Empty_0)); }
	inline Guid_t  get_Empty_0() const { return ___Empty_0; }
	inline Guid_t * get_address_of_Empty_0() { return &___Empty_0; }
	inline void set_Empty_0(Guid_t  value)
	{
		___Empty_0 = value;
	}

	inline static int32_t get_offset_of__rngAccess_12() { return static_cast<int32_t>(offsetof(Guid_t_StaticFields, ____rngAccess_12)); }
	inline RuntimeObject * get__rngAccess_12() const { return ____rngAccess_12; }
	inline RuntimeObject ** get_address_of__rngAccess_12() { return &____rngAccess_12; }
	inline void set__rngAccess_12(RuntimeObject * value)
	{
		____rngAccess_12 = value;
		Il2CppCodeGenWriteBarrier((&____rngAccess_12), value);
	}

	inline static int32_t get_offset_of__rng_13() { return static_cast<int32_t>(offsetof(Guid_t_StaticFields, ____rng_13)); }
	inline RandomNumberGenerator_t386037858 * get__rng_13() const { return ____rng_13; }
	inline RandomNumberGenerator_t386037858 ** get_address_of__rng_13() { return &____rng_13; }
	inline void set__rng_13(RandomNumberGenerator_t386037858 * value)
	{
		____rng_13 = value;
		Il2CppCodeGenWriteBarrier((&____rng_13), value);
	}

	inline static int32_t get_offset_of__fastRng_14() { return static_cast<int32_t>(offsetof(Guid_t_StaticFields, ____fastRng_14)); }
	inline RandomNumberGenerator_t386037858 * get__fastRng_14() const { return ____fastRng_14; }
	inline RandomNumberGenerator_t386037858 ** get_address_of__fastRng_14() { return &____fastRng_14; }
	inline void set__fastRng_14(RandomNumberGenerator_t386037858 * value)
	{
		____fastRng_14 = value;
		Il2CppCodeGenWriteBarrier((&____fastRng_14), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // GUID_T_H
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
#ifndef DEALLOCATEONJOBCOMPLETIONATTRIBUTE_T3762612740_H
#define DEALLOCATEONJOBCOMPLETIONATTRIBUTE_T3762612740_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// Unity.Collections.DeallocateOnJobCompletionAttribute
struct  DeallocateOnJobCompletionAttribute_t3762612740  : public Attribute_t861562559
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // DEALLOCATEONJOBCOMPLETIONATTRIBUTE_T3762612740_H
#ifndef NATIVECONTAINERATTRIBUTE_T212308715_H
#define NATIVECONTAINERATTRIBUTE_T212308715_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// Unity.Collections.LowLevel.Unsafe.NativeContainerAttribute
struct  NativeContainerAttribute_t212308715  : public Attribute_t861562559
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // NATIVECONTAINERATTRIBUTE_T212308715_H
#ifndef NATIVECONTAINERISATOMICWRITEONLYATTRIBUTE_T4134969175_H
#define NATIVECONTAINERISATOMICWRITEONLYATTRIBUTE_T4134969175_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// Unity.Collections.LowLevel.Unsafe.NativeContainerIsAtomicWriteOnlyAttribute
struct  NativeContainerIsAtomicWriteOnlyAttribute_t4134969175  : public Attribute_t861562559
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // NATIVECONTAINERISATOMICWRITEONLYATTRIBUTE_T4134969175_H
#ifndef NATIVECONTAINERISREADONLYATTRIBUTE_T4098664174_H
#define NATIVECONTAINERISREADONLYATTRIBUTE_T4098664174_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// Unity.Collections.LowLevel.Unsafe.NativeContainerIsReadOnlyAttribute
struct  NativeContainerIsReadOnlyAttribute_t4098664174  : public Attribute_t861562559
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // NATIVECONTAINERISREADONLYATTRIBUTE_T4098664174_H
#ifndef NATIVECONTAINERNEEDSTHREADINDEXATTRIBUTE_T764917452_H
#define NATIVECONTAINERNEEDSTHREADINDEXATTRIBUTE_T764917452_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// Unity.Collections.LowLevel.Unsafe.NativeContainerNeedsThreadIndexAttribute
struct  NativeContainerNeedsThreadIndexAttribute_t764917452  : public Attribute_t861562559
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // NATIVECONTAINERNEEDSTHREADINDEXATTRIBUTE_T764917452_H
#ifndef NATIVECONTAINERSUPPORTSDEALLOCATEONJOBCOMPLETIONATTRIBUTE_T1480492758_H
#define NATIVECONTAINERSUPPORTSDEALLOCATEONJOBCOMPLETIONATTRIBUTE_T1480492758_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// Unity.Collections.LowLevel.Unsafe.NativeContainerSupportsDeallocateOnJobCompletionAttribute
struct  NativeContainerSupportsDeallocateOnJobCompletionAttribute_t1480492758  : public Attribute_t861562559
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // NATIVECONTAINERSUPPORTSDEALLOCATEONJOBCOMPLETIONATTRIBUTE_T1480492758_H
#ifndef NATIVECONTAINERSUPPORTSDEFERREDCONVERTLISTTOARRAY_T4167123417_H
#define NATIVECONTAINERSUPPORTSDEFERREDCONVERTLISTTOARRAY_T4167123417_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// Unity.Collections.LowLevel.Unsafe.NativeContainerSupportsDeferredConvertListToArray
struct  NativeContainerSupportsDeferredConvertListToArray_t4167123417  : public Attribute_t861562559
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // NATIVECONTAINERSUPPORTSDEFERREDCONVERTLISTTOARRAY_T4167123417_H
#ifndef NATIVECONTAINERSUPPORTSMINMAXWRITERESTRICTIONATTRIBUTE_T3808117416_H
#define NATIVECONTAINERSUPPORTSMINMAXWRITERESTRICTIONATTRIBUTE_T3808117416_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// Unity.Collections.LowLevel.Unsafe.NativeContainerSupportsMinMaxWriteRestrictionAttribute
struct  NativeContainerSupportsMinMaxWriteRestrictionAttribute_t3808117416  : public Attribute_t861562559
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // NATIVECONTAINERSUPPORTSMINMAXWRITERESTRICTIONATTRIBUTE_T3808117416_H
#ifndef NATIVEDISABLECONTAINERSAFETYRESTRICTIONATTRIBUTE_T708027756_H
#define NATIVEDISABLECONTAINERSAFETYRESTRICTIONATTRIBUTE_T708027756_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// Unity.Collections.LowLevel.Unsafe.NativeDisableContainerSafetyRestrictionAttribute
struct  NativeDisableContainerSafetyRestrictionAttribute_t708027756  : public Attribute_t861562559
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // NATIVEDISABLECONTAINERSAFETYRESTRICTIONATTRIBUTE_T708027756_H
#ifndef NATIVEDISABLEUNSAFEPTRRESTRICTIONATTRIBUTE_T2582701661_H
#define NATIVEDISABLEUNSAFEPTRRESTRICTIONATTRIBUTE_T2582701661_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// Unity.Collections.LowLevel.Unsafe.NativeDisableUnsafePtrRestrictionAttribute
struct  NativeDisableUnsafePtrRestrictionAttribute_t2582701661  : public Attribute_t861562559
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // NATIVEDISABLEUNSAFEPTRRESTRICTIONATTRIBUTE_T2582701661_H
#ifndef NATIVESETCLASSTYPETONULLONSCHEDULEATTRIBUTE_T1234016338_H
#define NATIVESETCLASSTYPETONULLONSCHEDULEATTRIBUTE_T1234016338_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// Unity.Collections.LowLevel.Unsafe.NativeSetClassTypeToNullOnScheduleAttribute
struct  NativeSetClassTypeToNullOnScheduleAttribute_t1234016338  : public Attribute_t861562559
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // NATIVESETCLASSTYPETONULLONSCHEDULEATTRIBUTE_T1234016338_H
#ifndef NATIVESETTHREADINDEXATTRIBUTE_T1211267337_H
#define NATIVESETTHREADINDEXATTRIBUTE_T1211267337_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// Unity.Collections.LowLevel.Unsafe.NativeSetThreadIndexAttribute
struct  NativeSetThreadIndexAttribute_t1211267337  : public Attribute_t861562559
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // NATIVESETTHREADINDEXATTRIBUTE_T1211267337_H
#ifndef NATIVEDISABLEPARALLELFORRESTRICTIONATTRIBUTE_T3768540096_H
#define NATIVEDISABLEPARALLELFORRESTRICTIONATTRIBUTE_T3768540096_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// Unity.Collections.NativeDisableParallelForRestrictionAttribute
struct  NativeDisableParallelForRestrictionAttribute_t3768540096  : public Attribute_t861562559
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // NATIVEDISABLEPARALLELFORRESTRICTIONATTRIBUTE_T3768540096_H
#ifndef NATIVEFIXEDLENGTHATTRIBUTE_T3072952540_H
#define NATIVEFIXEDLENGTHATTRIBUTE_T3072952540_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// Unity.Collections.NativeFixedLengthAttribute
struct  NativeFixedLengthAttribute_t3072952540  : public Attribute_t861562559
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // NATIVEFIXEDLENGTHATTRIBUTE_T3072952540_H
#ifndef NATIVEMATCHESPARALLELFORLENGTHATTRIBUTE_T1813325102_H
#define NATIVEMATCHESPARALLELFORLENGTHATTRIBUTE_T1813325102_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// Unity.Collections.NativeMatchesParallelForLengthAttribute
struct  NativeMatchesParallelForLengthAttribute_t1813325102  : public Attribute_t861562559
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // NATIVEMATCHESPARALLELFORLENGTHATTRIBUTE_T1813325102_H
#ifndef READONLYATTRIBUTE_T3518714744_H
#define READONLYATTRIBUTE_T3518714744_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// Unity.Collections.ReadOnlyAttribute
struct  ReadOnlyAttribute_t3518714744  : public Attribute_t861562559
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // READONLYATTRIBUTE_T3518714744_H
#ifndef WRITEONLYATTRIBUTE_T1738907586_H
#define WRITEONLYATTRIBUTE_T1738907586_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// Unity.Collections.WriteOnlyAttribute
struct  WriteOnlyAttribute_t1738907586  : public Attribute_t861562559
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // WRITEONLYATTRIBUTE_T1738907586_H
#ifndef DRIVENRECTTRANSFORMTRACKER_T2562230146_H
#define DRIVENRECTTRANSFORMTRACKER_T2562230146_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.DrivenRectTransformTracker
struct  DrivenRectTransformTracker_t2562230146 
{
public:
	union
	{
		struct
		{
		};
		uint8_t DrivenRectTransformTracker_t2562230146__padding[1];
	};

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // DRIVENRECTTRANSFORMTRACKER_T2562230146_H
#ifndef UNITYEVENT_1_T3832605257_H
#define UNITYEVENT_1_T3832605257_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.Events.UnityEvent`1<System.Int32>
struct  UnityEvent_1_t3832605257  : public UnityEventBase_t3960448221
{
public:
	// System.Object[] UnityEngine.Events.UnityEvent`1::m_InvokeArray
	ObjectU5BU5D_t2843939325* ___m_InvokeArray_4;

public:
	inline static int32_t get_offset_of_m_InvokeArray_4() { return static_cast<int32_t>(offsetof(UnityEvent_1_t3832605257, ___m_InvokeArray_4)); }
	inline ObjectU5BU5D_t2843939325* get_m_InvokeArray_4() const { return ___m_InvokeArray_4; }
	inline ObjectU5BU5D_t2843939325** get_address_of_m_InvokeArray_4() { return &___m_InvokeArray_4; }
	inline void set_m_InvokeArray_4(ObjectU5BU5D_t2843939325* value)
	{
		___m_InvokeArray_4 = value;
		Il2CppCodeGenWriteBarrier((&___m_InvokeArray_4), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // UNITYEVENT_1_T3832605257_H
#ifndef UNITYEVENT_1_T2052235288_H
#define UNITYEVENT_1_T2052235288_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.Events.UnityEvent`1<UnityEngine.Networking.PlayerConnection.MessageEventArgs>
struct  UnityEvent_1_t2052235288  : public UnityEventBase_t3960448221
{
public:
	// System.Object[] UnityEngine.Events.UnityEvent`1::m_InvokeArray
	ObjectU5BU5D_t2843939325* ___m_InvokeArray_4;

public:
	inline static int32_t get_offset_of_m_InvokeArray_4() { return static_cast<int32_t>(offsetof(UnityEvent_1_t2052235288, ___m_InvokeArray_4)); }
	inline ObjectU5BU5D_t2843939325* get_m_InvokeArray_4() const { return ___m_InvokeArray_4; }
	inline ObjectU5BU5D_t2843939325** get_address_of_m_InvokeArray_4() { return &___m_InvokeArray_4; }
	inline void set_m_InvokeArray_4(ObjectU5BU5D_t2843939325* value)
	{
		___m_InvokeArray_4 = value;
		Il2CppCodeGenWriteBarrier((&___m_InvokeArray_4), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // UNITYEVENT_1_T2052235288_H
#ifndef U3C_CAMERACULLPLANESU3E__FIXEDBUFFER3_T3170447830_H
#define U3C_CAMERACULLPLANESU3E__FIXEDBUFFER3_T3170447830_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.Experimental.Rendering.CameraProperties/<_cameraCullPlanes>__FixedBuffer3
struct  U3C_cameraCullPlanesU3E__FixedBuffer3_t3170447830 
{
public:
	union
	{
		struct
		{
			// System.Single UnityEngine.Experimental.Rendering.CameraProperties/<_cameraCullPlanes>__FixedBuffer3::FixedElementField
			float ___FixedElementField_0;
		};
		uint8_t U3C_cameraCullPlanesU3E__FixedBuffer3_t3170447830__padding[96];
	};

public:
	inline static int32_t get_offset_of_FixedElementField_0() { return static_cast<int32_t>(offsetof(U3C_cameraCullPlanesU3E__FixedBuffer3_t3170447830, ___FixedElementField_0)); }
	inline float get_FixedElementField_0() const { return ___FixedElementField_0; }
	inline float* get_address_of_FixedElementField_0() { return &___FixedElementField_0; }
	inline void set_FixedElementField_0(float value)
	{
		___FixedElementField_0 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // U3C_CAMERACULLPLANESU3E__FIXEDBUFFER3_T3170447830_H
#ifndef U3C_SHADOWCULLPLANESU3E__FIXEDBUFFER2_T3967873427_H
#define U3C_SHADOWCULLPLANESU3E__FIXEDBUFFER2_T3967873427_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.Experimental.Rendering.CameraProperties/<_shadowCullPlanes>__FixedBuffer2
struct  U3C_shadowCullPlanesU3E__FixedBuffer2_t3967873427 
{
public:
	union
	{
		struct
		{
			// System.Single UnityEngine.Experimental.Rendering.CameraProperties/<_shadowCullPlanes>__FixedBuffer2::FixedElementField
			float ___FixedElementField_0;
		};
		uint8_t U3C_shadowCullPlanesU3E__FixedBuffer2_t3967873427__padding[96];
	};

public:
	inline static int32_t get_offset_of_FixedElementField_0() { return static_cast<int32_t>(offsetof(U3C_shadowCullPlanesU3E__FixedBuffer2_t3967873427, ___FixedElementField_0)); }
	inline float get_FixedElementField_0() const { return ___FixedElementField_0; }
	inline float* get_address_of_FixedElementField_0() { return &___FixedElementField_0; }
	inline void set_FixedElementField_0(float value)
	{
		___FixedElementField_0 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // U3C_SHADOWCULLPLANESU3E__FIXEDBUFFER2_T3967873427_H
#ifndef U3CLAYERCULLDISTANCESU3E__FIXEDBUFFER4_T4284714940_H
#define U3CLAYERCULLDISTANCESU3E__FIXEDBUFFER4_T4284714940_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.Experimental.Rendering.CameraProperties/<layerCullDistances>__FixedBuffer4
struct  U3ClayerCullDistancesU3E__FixedBuffer4_t4284714940 
{
public:
	union
	{
		struct
		{
			// System.Single UnityEngine.Experimental.Rendering.CameraProperties/<layerCullDistances>__FixedBuffer4::FixedElementField
			float ___FixedElementField_0;
		};
		uint8_t U3ClayerCullDistancesU3E__FixedBuffer4_t4284714940__padding[128];
	};

public:
	inline static int32_t get_offset_of_FixedElementField_0() { return static_cast<int32_t>(offsetof(U3ClayerCullDistancesU3E__FixedBuffer4_t4284714940, ___FixedElementField_0)); }
	inline float get_FixedElementField_0() const { return ___FixedElementField_0; }
	inline float* get_address_of_FixedElementField_0() { return &___FixedElementField_0; }
	inline void set_FixedElementField_0(float value)
	{
		___FixedElementField_0 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // U3CLAYERCULLDISTANCESU3E__FIXEDBUFFER4_T4284714940_H
#ifndef CORECAMERAVALUES_T3714484151_H
#define CORECAMERAVALUES_T3714484151_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.Experimental.Rendering.CoreCameraValues
struct  CoreCameraValues_t3714484151 
{
public:
	// System.Int32 UnityEngine.Experimental.Rendering.CoreCameraValues::filterMode
	int32_t ___filterMode_0;
	// System.UInt32 UnityEngine.Experimental.Rendering.CoreCameraValues::cullingMask
	uint32_t ___cullingMask_1;
	// System.Int32 UnityEngine.Experimental.Rendering.CoreCameraValues::guid
	int32_t ___guid_2;
	// System.Int32 UnityEngine.Experimental.Rendering.CoreCameraValues::renderImmediateObjects
	int32_t ___renderImmediateObjects_3;

public:
	inline static int32_t get_offset_of_filterMode_0() { return static_cast<int32_t>(offsetof(CoreCameraValues_t3714484151, ___filterMode_0)); }
	inline int32_t get_filterMode_0() const { return ___filterMode_0; }
	inline int32_t* get_address_of_filterMode_0() { return &___filterMode_0; }
	inline void set_filterMode_0(int32_t value)
	{
		___filterMode_0 = value;
	}

	inline static int32_t get_offset_of_cullingMask_1() { return static_cast<int32_t>(offsetof(CoreCameraValues_t3714484151, ___cullingMask_1)); }
	inline uint32_t get_cullingMask_1() const { return ___cullingMask_1; }
	inline uint32_t* get_address_of_cullingMask_1() { return &___cullingMask_1; }
	inline void set_cullingMask_1(uint32_t value)
	{
		___cullingMask_1 = value;
	}

	inline static int32_t get_offset_of_guid_2() { return static_cast<int32_t>(offsetof(CoreCameraValues_t3714484151, ___guid_2)); }
	inline int32_t get_guid_2() const { return ___guid_2; }
	inline int32_t* get_address_of_guid_2() { return &___guid_2; }
	inline void set_guid_2(int32_t value)
	{
		___guid_2 = value;
	}

	inline static int32_t get_offset_of_renderImmediateObjects_3() { return static_cast<int32_t>(offsetof(CoreCameraValues_t3714484151, ___renderImmediateObjects_3)); }
	inline int32_t get_renderImmediateObjects_3() const { return ___renderImmediateObjects_3; }
	inline int32_t* get_address_of_renderImmediateObjects_3() { return &___renderImmediateObjects_3; }
	inline void set_renderImmediateObjects_3(int32_t value)
	{
		___renderImmediateObjects_3 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // CORECAMERAVALUES_T3714484151_H
#ifndef U3CM_CULLINGPLANESU3E__FIXEDBUFFER5_T3550792427_H
#define U3CM_CULLINGPLANESU3E__FIXEDBUFFER5_T3550792427_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.Experimental.Rendering.ScriptableCullingParameters/<m_CullingPlanes>__FixedBuffer5
struct  U3Cm_CullingPlanesU3E__FixedBuffer5_t3550792427 
{
public:
	union
	{
		struct
		{
			// System.Single UnityEngine.Experimental.Rendering.ScriptableCullingParameters/<m_CullingPlanes>__FixedBuffer5::FixedElementField
			float ___FixedElementField_0;
		};
		uint8_t U3Cm_CullingPlanesU3E__FixedBuffer5_t3550792427__padding[160];
	};

public:
	inline static int32_t get_offset_of_FixedElementField_0() { return static_cast<int32_t>(offsetof(U3Cm_CullingPlanesU3E__FixedBuffer5_t3550792427, ___FixedElementField_0)); }
	inline float get_FixedElementField_0() const { return ___FixedElementField_0; }
	inline float* get_address_of_FixedElementField_0() { return &___FixedElementField_0; }
	inline void set_FixedElementField_0(float value)
	{
		___FixedElementField_0 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // U3CM_CULLINGPLANESU3E__FIXEDBUFFER5_T3550792427_H
#ifndef U3CM_LAYERFARCULLDISTANCESU3E__FIXEDBUFFER6_T600784380_H
#define U3CM_LAYERFARCULLDISTANCESU3E__FIXEDBUFFER6_T600784380_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.Experimental.Rendering.ScriptableCullingParameters/<m_LayerFarCullDistances>__FixedBuffer6
struct  U3Cm_LayerFarCullDistancesU3E__FixedBuffer6_t600784380 
{
public:
	union
	{
		struct
		{
			// System.Single UnityEngine.Experimental.Rendering.ScriptableCullingParameters/<m_LayerFarCullDistances>__FixedBuffer6::FixedElementField
			float ___FixedElementField_0;
		};
		uint8_t U3Cm_LayerFarCullDistancesU3E__FixedBuffer6_t600784380__padding[128];
	};

public:
	inline static int32_t get_offset_of_FixedElementField_0() { return static_cast<int32_t>(offsetof(U3Cm_LayerFarCullDistancesU3E__FixedBuffer6_t600784380, ___FixedElementField_0)); }
	inline float get_FixedElementField_0() const { return ___FixedElementField_0; }
	inline float* get_address_of_FixedElementField_0() { return &___FixedElementField_0; }
	inline void set_FixedElementField_0(float value)
	{
		___FixedElementField_0 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // U3CM_LAYERFARCULLDISTANCESU3E__FIXEDBUFFER6_T600784380_H
#ifndef U3C_CULLINGPLANESU3E__FIXEDBUFFER7_T3172482031_H
#define U3C_CULLINGPLANESU3E__FIXEDBUFFER7_T3172482031_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.Experimental.Rendering.ShadowSplitData/<_cullingPlanes>__FixedBuffer7
struct  U3C_cullingPlanesU3E__FixedBuffer7_t3172482031 
{
public:
	union
	{
		struct
		{
			// System.Single UnityEngine.Experimental.Rendering.ShadowSplitData/<_cullingPlanes>__FixedBuffer7::FixedElementField
			float ___FixedElementField_0;
		};
		uint8_t U3C_cullingPlanesU3E__FixedBuffer7_t3172482031__padding[160];
	};

public:
	inline static int32_t get_offset_of_FixedElementField_0() { return static_cast<int32_t>(offsetof(U3C_cullingPlanesU3E__FixedBuffer7_t3172482031, ___FixedElementField_0)); }
	inline float get_FixedElementField_0() const { return ___FixedElementField_0; }
	inline float* get_address_of_FixedElementField_0() { return &___FixedElementField_0; }
	inline void set_FixedElementField_0(float value)
	{
		___FixedElementField_0 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // U3C_CULLINGPLANESU3E__FIXEDBUFFER7_T3172482031_H
#ifndef DEFAULTVALUEATTRIBUTE_T2337225216_H
#define DEFAULTVALUEATTRIBUTE_T2337225216_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.Internal.DefaultValueAttribute
struct  DefaultValueAttribute_t2337225216  : public Attribute_t861562559
{
public:
	// System.Object UnityEngine.Internal.DefaultValueAttribute::DefaultValue
	RuntimeObject * ___DefaultValue_0;

public:
	inline static int32_t get_offset_of_DefaultValue_0() { return static_cast<int32_t>(offsetof(DefaultValueAttribute_t2337225216, ___DefaultValue_0)); }
	inline RuntimeObject * get_DefaultValue_0() const { return ___DefaultValue_0; }
	inline RuntimeObject ** get_address_of_DefaultValue_0() { return &___DefaultValue_0; }
	inline void set_DefaultValue_0(RuntimeObject * value)
	{
		___DefaultValue_0 = value;
		Il2CppCodeGenWriteBarrier((&___DefaultValue_0), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // DEFAULTVALUEATTRIBUTE_T2337225216_H
#ifndef EXCLUDEFROMDOCSATTRIBUTE_T3592494112_H
#define EXCLUDEFROMDOCSATTRIBUTE_T3592494112_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.Internal.ExcludeFromDocsAttribute
struct  ExcludeFromDocsAttribute_t3592494112  : public Attribute_t861562559
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // EXCLUDEFROMDOCSATTRIBUTE_T3592494112_H
#ifndef MATRIX4X4_T1817901843_H
#define MATRIX4X4_T1817901843_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.Matrix4x4
struct  Matrix4x4_t1817901843 
{
public:
	// System.Single UnityEngine.Matrix4x4::m00
	float ___m00_0;
	// System.Single UnityEngine.Matrix4x4::m10
	float ___m10_1;
	// System.Single UnityEngine.Matrix4x4::m20
	float ___m20_2;
	// System.Single UnityEngine.Matrix4x4::m30
	float ___m30_3;
	// System.Single UnityEngine.Matrix4x4::m01
	float ___m01_4;
	// System.Single UnityEngine.Matrix4x4::m11
	float ___m11_5;
	// System.Single UnityEngine.Matrix4x4::m21
	float ___m21_6;
	// System.Single UnityEngine.Matrix4x4::m31
	float ___m31_7;
	// System.Single UnityEngine.Matrix4x4::m02
	float ___m02_8;
	// System.Single UnityEngine.Matrix4x4::m12
	float ___m12_9;
	// System.Single UnityEngine.Matrix4x4::m22
	float ___m22_10;
	// System.Single UnityEngine.Matrix4x4::m32
	float ___m32_11;
	// System.Single UnityEngine.Matrix4x4::m03
	float ___m03_12;
	// System.Single UnityEngine.Matrix4x4::m13
	float ___m13_13;
	// System.Single UnityEngine.Matrix4x4::m23
	float ___m23_14;
	// System.Single UnityEngine.Matrix4x4::m33
	float ___m33_15;

public:
	inline static int32_t get_offset_of_m00_0() { return static_cast<int32_t>(offsetof(Matrix4x4_t1817901843, ___m00_0)); }
	inline float get_m00_0() const { return ___m00_0; }
	inline float* get_address_of_m00_0() { return &___m00_0; }
	inline void set_m00_0(float value)
	{
		___m00_0 = value;
	}

	inline static int32_t get_offset_of_m10_1() { return static_cast<int32_t>(offsetof(Matrix4x4_t1817901843, ___m10_1)); }
	inline float get_m10_1() const { return ___m10_1; }
	inline float* get_address_of_m10_1() { return &___m10_1; }
	inline void set_m10_1(float value)
	{
		___m10_1 = value;
	}

	inline static int32_t get_offset_of_m20_2() { return static_cast<int32_t>(offsetof(Matrix4x4_t1817901843, ___m20_2)); }
	inline float get_m20_2() const { return ___m20_2; }
	inline float* get_address_of_m20_2() { return &___m20_2; }
	inline void set_m20_2(float value)
	{
		___m20_2 = value;
	}

	inline static int32_t get_offset_of_m30_3() { return static_cast<int32_t>(offsetof(Matrix4x4_t1817901843, ___m30_3)); }
	inline float get_m30_3() const { return ___m30_3; }
	inline float* get_address_of_m30_3() { return &___m30_3; }
	inline void set_m30_3(float value)
	{
		___m30_3 = value;
	}

	inline static int32_t get_offset_of_m01_4() { return static_cast<int32_t>(offsetof(Matrix4x4_t1817901843, ___m01_4)); }
	inline float get_m01_4() const { return ___m01_4; }
	inline float* get_address_of_m01_4() { return &___m01_4; }
	inline void set_m01_4(float value)
	{
		___m01_4 = value;
	}

	inline static int32_t get_offset_of_m11_5() { return static_cast<int32_t>(offsetof(Matrix4x4_t1817901843, ___m11_5)); }
	inline float get_m11_5() const { return ___m11_5; }
	inline float* get_address_of_m11_5() { return &___m11_5; }
	inline void set_m11_5(float value)
	{
		___m11_5 = value;
	}

	inline static int32_t get_offset_of_m21_6() { return static_cast<int32_t>(offsetof(Matrix4x4_t1817901843, ___m21_6)); }
	inline float get_m21_6() const { return ___m21_6; }
	inline float* get_address_of_m21_6() { return &___m21_6; }
	inline void set_m21_6(float value)
	{
		___m21_6 = value;
	}

	inline static int32_t get_offset_of_m31_7() { return static_cast<int32_t>(offsetof(Matrix4x4_t1817901843, ___m31_7)); }
	inline float get_m31_7() const { return ___m31_7; }
	inline float* get_address_of_m31_7() { return &___m31_7; }
	inline void set_m31_7(float value)
	{
		___m31_7 = value;
	}

	inline static int32_t get_offset_of_m02_8() { return static_cast<int32_t>(offsetof(Matrix4x4_t1817901843, ___m02_8)); }
	inline float get_m02_8() const { return ___m02_8; }
	inline float* get_address_of_m02_8() { return &___m02_8; }
	inline void set_m02_8(float value)
	{
		___m02_8 = value;
	}

	inline static int32_t get_offset_of_m12_9() { return static_cast<int32_t>(offsetof(Matrix4x4_t1817901843, ___m12_9)); }
	inline float get_m12_9() const { return ___m12_9; }
	inline float* get_address_of_m12_9() { return &___m12_9; }
	inline void set_m12_9(float value)
	{
		___m12_9 = value;
	}

	inline static int32_t get_offset_of_m22_10() { return static_cast<int32_t>(offsetof(Matrix4x4_t1817901843, ___m22_10)); }
	inline float get_m22_10() const { return ___m22_10; }
	inline float* get_address_of_m22_10() { return &___m22_10; }
	inline void set_m22_10(float value)
	{
		___m22_10 = value;
	}

	inline static int32_t get_offset_of_m32_11() { return static_cast<int32_t>(offsetof(Matrix4x4_t1817901843, ___m32_11)); }
	inline float get_m32_11() const { return ___m32_11; }
	inline float* get_address_of_m32_11() { return &___m32_11; }
	inline void set_m32_11(float value)
	{
		___m32_11 = value;
	}

	inline static int32_t get_offset_of_m03_12() { return static_cast<int32_t>(offsetof(Matrix4x4_t1817901843, ___m03_12)); }
	inline float get_m03_12() const { return ___m03_12; }
	inline float* get_address_of_m03_12() { return &___m03_12; }
	inline void set_m03_12(float value)
	{
		___m03_12 = value;
	}

	inline static int32_t get_offset_of_m13_13() { return static_cast<int32_t>(offsetof(Matrix4x4_t1817901843, ___m13_13)); }
	inline float get_m13_13() const { return ___m13_13; }
	inline float* get_address_of_m13_13() { return &___m13_13; }
	inline void set_m13_13(float value)
	{
		___m13_13 = value;
	}

	inline static int32_t get_offset_of_m23_14() { return static_cast<int32_t>(offsetof(Matrix4x4_t1817901843, ___m23_14)); }
	inline float get_m23_14() const { return ___m23_14; }
	inline float* get_address_of_m23_14() { return &___m23_14; }
	inline void set_m23_14(float value)
	{
		___m23_14 = value;
	}

	inline static int32_t get_offset_of_m33_15() { return static_cast<int32_t>(offsetof(Matrix4x4_t1817901843, ___m33_15)); }
	inline float get_m33_15() const { return ___m33_15; }
	inline float* get_address_of_m33_15() { return &___m33_15; }
	inline void set_m33_15(float value)
	{
		___m33_15 = value;
	}
};

struct Matrix4x4_t1817901843_StaticFields
{
public:
	// UnityEngine.Matrix4x4 UnityEngine.Matrix4x4::zeroMatrix
	Matrix4x4_t1817901843  ___zeroMatrix_16;
	// UnityEngine.Matrix4x4 UnityEngine.Matrix4x4::identityMatrix
	Matrix4x4_t1817901843  ___identityMatrix_17;

public:
	inline static int32_t get_offset_of_zeroMatrix_16() { return static_cast<int32_t>(offsetof(Matrix4x4_t1817901843_StaticFields, ___zeroMatrix_16)); }
	inline Matrix4x4_t1817901843  get_zeroMatrix_16() const { return ___zeroMatrix_16; }
	inline Matrix4x4_t1817901843 * get_address_of_zeroMatrix_16() { return &___zeroMatrix_16; }
	inline void set_zeroMatrix_16(Matrix4x4_t1817901843  value)
	{
		___zeroMatrix_16 = value;
	}

	inline static int32_t get_offset_of_identityMatrix_17() { return static_cast<int32_t>(offsetof(Matrix4x4_t1817901843_StaticFields, ___identityMatrix_17)); }
	inline Matrix4x4_t1817901843  get_identityMatrix_17() const { return ___identityMatrix_17; }
	inline Matrix4x4_t1817901843 * get_address_of_identityMatrix_17() { return &___identityMatrix_17; }
	inline void set_identityMatrix_17(Matrix4x4_t1817901843  value)
	{
		___identityMatrix_17 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // MATRIX4X4_T1817901843_H
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
#ifndef SCENE_T2348375561_H
#define SCENE_T2348375561_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.SceneManagement.Scene
struct  Scene_t2348375561 
{
public:
	// System.Int32 UnityEngine.SceneManagement.Scene::m_Handle
	int32_t ___m_Handle_0;

public:
	inline static int32_t get_offset_of_m_Handle_0() { return static_cast<int32_t>(offsetof(Scene_t2348375561, ___m_Handle_0)); }
	inline int32_t get_m_Handle_0() const { return ___m_Handle_0; }
	inline int32_t* get_address_of_m_Handle_0() { return &___m_Handle_0; }
	inline void set_m_Handle_0(int32_t value)
	{
		___m_Handle_0 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // SCENE_T2348375561_H
#ifndef MOVEDFROMATTRIBUTE_T481952341_H
#define MOVEDFROMATTRIBUTE_T481952341_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.Scripting.APIUpdating.MovedFromAttribute
struct  MovedFromAttribute_t481952341  : public Attribute_t861562559
{
public:
	// System.String UnityEngine.Scripting.APIUpdating.MovedFromAttribute::<Namespace>k__BackingField
	String_t* ___U3CNamespaceU3Ek__BackingField_0;
	// System.Boolean UnityEngine.Scripting.APIUpdating.MovedFromAttribute::<IsInDifferentAssembly>k__BackingField
	bool ___U3CIsInDifferentAssemblyU3Ek__BackingField_1;

public:
	inline static int32_t get_offset_of_U3CNamespaceU3Ek__BackingField_0() { return static_cast<int32_t>(offsetof(MovedFromAttribute_t481952341, ___U3CNamespaceU3Ek__BackingField_0)); }
	inline String_t* get_U3CNamespaceU3Ek__BackingField_0() const { return ___U3CNamespaceU3Ek__BackingField_0; }
	inline String_t** get_address_of_U3CNamespaceU3Ek__BackingField_0() { return &___U3CNamespaceU3Ek__BackingField_0; }
	inline void set_U3CNamespaceU3Ek__BackingField_0(String_t* value)
	{
		___U3CNamespaceU3Ek__BackingField_0 = value;
		Il2CppCodeGenWriteBarrier((&___U3CNamespaceU3Ek__BackingField_0), value);
	}

	inline static int32_t get_offset_of_U3CIsInDifferentAssemblyU3Ek__BackingField_1() { return static_cast<int32_t>(offsetof(MovedFromAttribute_t481952341, ___U3CIsInDifferentAssemblyU3Ek__BackingField_1)); }
	inline bool get_U3CIsInDifferentAssemblyU3Ek__BackingField_1() const { return ___U3CIsInDifferentAssemblyU3Ek__BackingField_1; }
	inline bool* get_address_of_U3CIsInDifferentAssemblyU3Ek__BackingField_1() { return &___U3CIsInDifferentAssemblyU3Ek__BackingField_1; }
	inline void set_U3CIsInDifferentAssemblyU3Ek__BackingField_1(bool value)
	{
		___U3CIsInDifferentAssemblyU3Ek__BackingField_1 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // MOVEDFROMATTRIBUTE_T481952341_H
#ifndef PRESERVEATTRIBUTE_T1583619344_H
#define PRESERVEATTRIBUTE_T1583619344_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.Scripting.PreserveAttribute
struct  PreserveAttribute_t1583619344  : public Attribute_t861562559
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // PRESERVEATTRIBUTE_T1583619344_H
#ifndef FORMERLYSERIALIZEDASATTRIBUTE_T2859083114_H
#define FORMERLYSERIALIZEDASATTRIBUTE_T2859083114_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.Serialization.FormerlySerializedAsAttribute
struct  FormerlySerializedAsAttribute_t2859083114  : public Attribute_t861562559
{
public:
	// System.String UnityEngine.Serialization.FormerlySerializedAsAttribute::m_oldName
	String_t* ___m_oldName_0;

public:
	inline static int32_t get_offset_of_m_oldName_0() { return static_cast<int32_t>(offsetof(FormerlySerializedAsAttribute_t2859083114, ___m_oldName_0)); }
	inline String_t* get_m_oldName_0() const { return ___m_oldName_0; }
	inline String_t** get_address_of_m_oldName_0() { return &___m_oldName_0; }
	inline void set_m_oldName_0(String_t* value)
	{
		___m_oldName_0 = value;
		Il2CppCodeGenWriteBarrier((&___m_oldName_0), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // FORMERLYSERIALIZEDASATTRIBUTE_T2859083114_H
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
#ifndef VECTOR4_T3319028937_H
#define VECTOR4_T3319028937_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.Vector4
struct  Vector4_t3319028937 
{
public:
	// System.Single UnityEngine.Vector4::x
	float ___x_1;
	// System.Single UnityEngine.Vector4::y
	float ___y_2;
	// System.Single UnityEngine.Vector4::z
	float ___z_3;
	// System.Single UnityEngine.Vector4::w
	float ___w_4;

public:
	inline static int32_t get_offset_of_x_1() { return static_cast<int32_t>(offsetof(Vector4_t3319028937, ___x_1)); }
	inline float get_x_1() const { return ___x_1; }
	inline float* get_address_of_x_1() { return &___x_1; }
	inline void set_x_1(float value)
	{
		___x_1 = value;
	}

	inline static int32_t get_offset_of_y_2() { return static_cast<int32_t>(offsetof(Vector4_t3319028937, ___y_2)); }
	inline float get_y_2() const { return ___y_2; }
	inline float* get_address_of_y_2() { return &___y_2; }
	inline void set_y_2(float value)
	{
		___y_2 = value;
	}

	inline static int32_t get_offset_of_z_3() { return static_cast<int32_t>(offsetof(Vector4_t3319028937, ___z_3)); }
	inline float get_z_3() const { return ___z_3; }
	inline float* get_address_of_z_3() { return &___z_3; }
	inline void set_z_3(float value)
	{
		___z_3 = value;
	}

	inline static int32_t get_offset_of_w_4() { return static_cast<int32_t>(offsetof(Vector4_t3319028937, ___w_4)); }
	inline float get_w_4() const { return ___w_4; }
	inline float* get_address_of_w_4() { return &___w_4; }
	inline void set_w_4(float value)
	{
		___w_4 = value;
	}
};

struct Vector4_t3319028937_StaticFields
{
public:
	// UnityEngine.Vector4 UnityEngine.Vector4::zeroVector
	Vector4_t3319028937  ___zeroVector_5;
	// UnityEngine.Vector4 UnityEngine.Vector4::oneVector
	Vector4_t3319028937  ___oneVector_6;
	// UnityEngine.Vector4 UnityEngine.Vector4::positiveInfinityVector
	Vector4_t3319028937  ___positiveInfinityVector_7;
	// UnityEngine.Vector4 UnityEngine.Vector4::negativeInfinityVector
	Vector4_t3319028937  ___negativeInfinityVector_8;

public:
	inline static int32_t get_offset_of_zeroVector_5() { return static_cast<int32_t>(offsetof(Vector4_t3319028937_StaticFields, ___zeroVector_5)); }
	inline Vector4_t3319028937  get_zeroVector_5() const { return ___zeroVector_5; }
	inline Vector4_t3319028937 * get_address_of_zeroVector_5() { return &___zeroVector_5; }
	inline void set_zeroVector_5(Vector4_t3319028937  value)
	{
		___zeroVector_5 = value;
	}

	inline static int32_t get_offset_of_oneVector_6() { return static_cast<int32_t>(offsetof(Vector4_t3319028937_StaticFields, ___oneVector_6)); }
	inline Vector4_t3319028937  get_oneVector_6() const { return ___oneVector_6; }
	inline Vector4_t3319028937 * get_address_of_oneVector_6() { return &___oneVector_6; }
	inline void set_oneVector_6(Vector4_t3319028937  value)
	{
		___oneVector_6 = value;
	}

	inline static int32_t get_offset_of_positiveInfinityVector_7() { return static_cast<int32_t>(offsetof(Vector4_t3319028937_StaticFields, ___positiveInfinityVector_7)); }
	inline Vector4_t3319028937  get_positiveInfinityVector_7() const { return ___positiveInfinityVector_7; }
	inline Vector4_t3319028937 * get_address_of_positiveInfinityVector_7() { return &___positiveInfinityVector_7; }
	inline void set_positiveInfinityVector_7(Vector4_t3319028937  value)
	{
		___positiveInfinityVector_7 = value;
	}

	inline static int32_t get_offset_of_negativeInfinityVector_8() { return static_cast<int32_t>(offsetof(Vector4_t3319028937_StaticFields, ___negativeInfinityVector_8)); }
	inline Vector4_t3319028937  get_negativeInfinityVector_8() const { return ___negativeInfinityVector_8; }
	inline Vector4_t3319028937 * get_address_of_negativeInfinityVector_8() { return &___negativeInfinityVector_8; }
	inline void set_negativeInfinityVector_8(Vector4_t3319028937  value)
	{
		___negativeInfinityVector_8 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // VECTOR4_T3319028937_H
#ifndef GENERICSTACK_T1310059385_H
#define GENERICSTACK_T1310059385_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngineInternal.GenericStack
struct  GenericStack_t1310059385  : public Stack_t2329662280
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // GENERICSTACK_T1310059385_H
#ifndef TYPEINFERENCERULEATTRIBUTE_T254868554_H
#define TYPEINFERENCERULEATTRIBUTE_T254868554_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngineInternal.TypeInferenceRuleAttribute
struct  TypeInferenceRuleAttribute_t254868554  : public Attribute_t861562559
{
public:
	// System.String UnityEngineInternal.TypeInferenceRuleAttribute::_rule
	String_t* ____rule_0;

public:
	inline static int32_t get_offset_of__rule_0() { return static_cast<int32_t>(offsetof(TypeInferenceRuleAttribute_t254868554, ____rule_0)); }
	inline String_t* get__rule_0() const { return ____rule_0; }
	inline String_t** get_address_of__rule_0() { return &____rule_0; }
	inline void set__rule_0(String_t* value)
	{
		____rule_0 = value;
		Il2CppCodeGenWriteBarrier((&____rule_0), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // TYPEINFERENCERULEATTRIBUTE_T254868554_H
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
#ifndef DRIVENTRANSFORMPROPERTIES_T3813433528_H
#define DRIVENTRANSFORMPROPERTIES_T3813433528_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.DrivenTransformProperties
struct  DrivenTransformProperties_t3813433528 
{
public:
	// System.Int32 UnityEngine.DrivenTransformProperties::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(DrivenTransformProperties_t3813433528, ___value___2)); }
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
#endif // DRIVENTRANSFORMPROPERTIES_T3813433528_H
#ifndef CAMERAPROPERTIES_T3304495522_H
#define CAMERAPROPERTIES_T3304495522_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.Experimental.Rendering.CameraProperties
struct  CameraProperties_t3304495522 
{
public:
	// UnityEngine.Rect UnityEngine.Experimental.Rendering.CameraProperties::screenRect
	Rect_t2360479859  ___screenRect_0;
	// UnityEngine.Vector3 UnityEngine.Experimental.Rendering.CameraProperties::viewDir
	Vector3_t3722313464  ___viewDir_1;
	// System.Single UnityEngine.Experimental.Rendering.CameraProperties::projectionNear
	float ___projectionNear_2;
	// System.Single UnityEngine.Experimental.Rendering.CameraProperties::projectionFar
	float ___projectionFar_3;
	// System.Single UnityEngine.Experimental.Rendering.CameraProperties::cameraNear
	float ___cameraNear_4;
	// System.Single UnityEngine.Experimental.Rendering.CameraProperties::cameraFar
	float ___cameraFar_5;
	// System.Single UnityEngine.Experimental.Rendering.CameraProperties::cameraAspect
	float ___cameraAspect_6;
	// UnityEngine.Matrix4x4 UnityEngine.Experimental.Rendering.CameraProperties::cameraToWorld
	Matrix4x4_t1817901843  ___cameraToWorld_7;
	// UnityEngine.Matrix4x4 UnityEngine.Experimental.Rendering.CameraProperties::actualWorldToClip
	Matrix4x4_t1817901843  ___actualWorldToClip_8;
	// UnityEngine.Matrix4x4 UnityEngine.Experimental.Rendering.CameraProperties::cameraClipToWorld
	Matrix4x4_t1817901843  ___cameraClipToWorld_9;
	// UnityEngine.Matrix4x4 UnityEngine.Experimental.Rendering.CameraProperties::cameraWorldToClip
	Matrix4x4_t1817901843  ___cameraWorldToClip_10;
	// UnityEngine.Matrix4x4 UnityEngine.Experimental.Rendering.CameraProperties::implicitProjection
	Matrix4x4_t1817901843  ___implicitProjection_11;
	// UnityEngine.Matrix4x4 UnityEngine.Experimental.Rendering.CameraProperties::stereoWorldToClipLeft
	Matrix4x4_t1817901843  ___stereoWorldToClipLeft_12;
	// UnityEngine.Matrix4x4 UnityEngine.Experimental.Rendering.CameraProperties::stereoWorldToClipRight
	Matrix4x4_t1817901843  ___stereoWorldToClipRight_13;
	// UnityEngine.Matrix4x4 UnityEngine.Experimental.Rendering.CameraProperties::worldToCamera
	Matrix4x4_t1817901843  ___worldToCamera_14;
	// UnityEngine.Vector3 UnityEngine.Experimental.Rendering.CameraProperties::up
	Vector3_t3722313464  ___up_15;
	// UnityEngine.Vector3 UnityEngine.Experimental.Rendering.CameraProperties::right
	Vector3_t3722313464  ___right_16;
	// UnityEngine.Vector3 UnityEngine.Experimental.Rendering.CameraProperties::transformDirection
	Vector3_t3722313464  ___transformDirection_17;
	// UnityEngine.Vector3 UnityEngine.Experimental.Rendering.CameraProperties::cameraEuler
	Vector3_t3722313464  ___cameraEuler_18;
	// UnityEngine.Vector3 UnityEngine.Experimental.Rendering.CameraProperties::velocity
	Vector3_t3722313464  ___velocity_19;
	// System.Single UnityEngine.Experimental.Rendering.CameraProperties::farPlaneWorldSpaceLength
	float ___farPlaneWorldSpaceLength_20;
	// System.UInt32 UnityEngine.Experimental.Rendering.CameraProperties::rendererCount
	uint32_t ___rendererCount_21;
	// UnityEngine.Experimental.Rendering.CameraProperties/<_shadowCullPlanes>__FixedBuffer2 UnityEngine.Experimental.Rendering.CameraProperties::_shadowCullPlanes
	U3C_shadowCullPlanesU3E__FixedBuffer2_t3967873427  ____shadowCullPlanes_22;
	// UnityEngine.Experimental.Rendering.CameraProperties/<_cameraCullPlanes>__FixedBuffer3 UnityEngine.Experimental.Rendering.CameraProperties::_cameraCullPlanes
	U3C_cameraCullPlanesU3E__FixedBuffer3_t3170447830  ____cameraCullPlanes_23;
	// System.Single UnityEngine.Experimental.Rendering.CameraProperties::baseFarDistance
	float ___baseFarDistance_24;
	// UnityEngine.Vector3 UnityEngine.Experimental.Rendering.CameraProperties::shadowCullCenter
	Vector3_t3722313464  ___shadowCullCenter_25;
	// UnityEngine.Experimental.Rendering.CameraProperties/<layerCullDistances>__FixedBuffer4 UnityEngine.Experimental.Rendering.CameraProperties::layerCullDistances
	U3ClayerCullDistancesU3E__FixedBuffer4_t4284714940  ___layerCullDistances_26;
	// System.Int32 UnityEngine.Experimental.Rendering.CameraProperties::layerCullSpherical
	int32_t ___layerCullSpherical_27;
	// UnityEngine.Experimental.Rendering.CoreCameraValues UnityEngine.Experimental.Rendering.CameraProperties::coreCameraValues
	CoreCameraValues_t3714484151  ___coreCameraValues_28;
	// System.UInt32 UnityEngine.Experimental.Rendering.CameraProperties::cameraType
	uint32_t ___cameraType_29;

public:
	inline static int32_t get_offset_of_screenRect_0() { return static_cast<int32_t>(offsetof(CameraProperties_t3304495522, ___screenRect_0)); }
	inline Rect_t2360479859  get_screenRect_0() const { return ___screenRect_0; }
	inline Rect_t2360479859 * get_address_of_screenRect_0() { return &___screenRect_0; }
	inline void set_screenRect_0(Rect_t2360479859  value)
	{
		___screenRect_0 = value;
	}

	inline static int32_t get_offset_of_viewDir_1() { return static_cast<int32_t>(offsetof(CameraProperties_t3304495522, ___viewDir_1)); }
	inline Vector3_t3722313464  get_viewDir_1() const { return ___viewDir_1; }
	inline Vector3_t3722313464 * get_address_of_viewDir_1() { return &___viewDir_1; }
	inline void set_viewDir_1(Vector3_t3722313464  value)
	{
		___viewDir_1 = value;
	}

	inline static int32_t get_offset_of_projectionNear_2() { return static_cast<int32_t>(offsetof(CameraProperties_t3304495522, ___projectionNear_2)); }
	inline float get_projectionNear_2() const { return ___projectionNear_2; }
	inline float* get_address_of_projectionNear_2() { return &___projectionNear_2; }
	inline void set_projectionNear_2(float value)
	{
		___projectionNear_2 = value;
	}

	inline static int32_t get_offset_of_projectionFar_3() { return static_cast<int32_t>(offsetof(CameraProperties_t3304495522, ___projectionFar_3)); }
	inline float get_projectionFar_3() const { return ___projectionFar_3; }
	inline float* get_address_of_projectionFar_3() { return &___projectionFar_3; }
	inline void set_projectionFar_3(float value)
	{
		___projectionFar_3 = value;
	}

	inline static int32_t get_offset_of_cameraNear_4() { return static_cast<int32_t>(offsetof(CameraProperties_t3304495522, ___cameraNear_4)); }
	inline float get_cameraNear_4() const { return ___cameraNear_4; }
	inline float* get_address_of_cameraNear_4() { return &___cameraNear_4; }
	inline void set_cameraNear_4(float value)
	{
		___cameraNear_4 = value;
	}

	inline static int32_t get_offset_of_cameraFar_5() { return static_cast<int32_t>(offsetof(CameraProperties_t3304495522, ___cameraFar_5)); }
	inline float get_cameraFar_5() const { return ___cameraFar_5; }
	inline float* get_address_of_cameraFar_5() { return &___cameraFar_5; }
	inline void set_cameraFar_5(float value)
	{
		___cameraFar_5 = value;
	}

	inline static int32_t get_offset_of_cameraAspect_6() { return static_cast<int32_t>(offsetof(CameraProperties_t3304495522, ___cameraAspect_6)); }
	inline float get_cameraAspect_6() const { return ___cameraAspect_6; }
	inline float* get_address_of_cameraAspect_6() { return &___cameraAspect_6; }
	inline void set_cameraAspect_6(float value)
	{
		___cameraAspect_6 = value;
	}

	inline static int32_t get_offset_of_cameraToWorld_7() { return static_cast<int32_t>(offsetof(CameraProperties_t3304495522, ___cameraToWorld_7)); }
	inline Matrix4x4_t1817901843  get_cameraToWorld_7() const { return ___cameraToWorld_7; }
	inline Matrix4x4_t1817901843 * get_address_of_cameraToWorld_7() { return &___cameraToWorld_7; }
	inline void set_cameraToWorld_7(Matrix4x4_t1817901843  value)
	{
		___cameraToWorld_7 = value;
	}

	inline static int32_t get_offset_of_actualWorldToClip_8() { return static_cast<int32_t>(offsetof(CameraProperties_t3304495522, ___actualWorldToClip_8)); }
	inline Matrix4x4_t1817901843  get_actualWorldToClip_8() const { return ___actualWorldToClip_8; }
	inline Matrix4x4_t1817901843 * get_address_of_actualWorldToClip_8() { return &___actualWorldToClip_8; }
	inline void set_actualWorldToClip_8(Matrix4x4_t1817901843  value)
	{
		___actualWorldToClip_8 = value;
	}

	inline static int32_t get_offset_of_cameraClipToWorld_9() { return static_cast<int32_t>(offsetof(CameraProperties_t3304495522, ___cameraClipToWorld_9)); }
	inline Matrix4x4_t1817901843  get_cameraClipToWorld_9() const { return ___cameraClipToWorld_9; }
	inline Matrix4x4_t1817901843 * get_address_of_cameraClipToWorld_9() { return &___cameraClipToWorld_9; }
	inline void set_cameraClipToWorld_9(Matrix4x4_t1817901843  value)
	{
		___cameraClipToWorld_9 = value;
	}

	inline static int32_t get_offset_of_cameraWorldToClip_10() { return static_cast<int32_t>(offsetof(CameraProperties_t3304495522, ___cameraWorldToClip_10)); }
	inline Matrix4x4_t1817901843  get_cameraWorldToClip_10() const { return ___cameraWorldToClip_10; }
	inline Matrix4x4_t1817901843 * get_address_of_cameraWorldToClip_10() { return &___cameraWorldToClip_10; }
	inline void set_cameraWorldToClip_10(Matrix4x4_t1817901843  value)
	{
		___cameraWorldToClip_10 = value;
	}

	inline static int32_t get_offset_of_implicitProjection_11() { return static_cast<int32_t>(offsetof(CameraProperties_t3304495522, ___implicitProjection_11)); }
	inline Matrix4x4_t1817901843  get_implicitProjection_11() const { return ___implicitProjection_11; }
	inline Matrix4x4_t1817901843 * get_address_of_implicitProjection_11() { return &___implicitProjection_11; }
	inline void set_implicitProjection_11(Matrix4x4_t1817901843  value)
	{
		___implicitProjection_11 = value;
	}

	inline static int32_t get_offset_of_stereoWorldToClipLeft_12() { return static_cast<int32_t>(offsetof(CameraProperties_t3304495522, ___stereoWorldToClipLeft_12)); }
	inline Matrix4x4_t1817901843  get_stereoWorldToClipLeft_12() const { return ___stereoWorldToClipLeft_12; }
	inline Matrix4x4_t1817901843 * get_address_of_stereoWorldToClipLeft_12() { return &___stereoWorldToClipLeft_12; }
	inline void set_stereoWorldToClipLeft_12(Matrix4x4_t1817901843  value)
	{
		___stereoWorldToClipLeft_12 = value;
	}

	inline static int32_t get_offset_of_stereoWorldToClipRight_13() { return static_cast<int32_t>(offsetof(CameraProperties_t3304495522, ___stereoWorldToClipRight_13)); }
	inline Matrix4x4_t1817901843  get_stereoWorldToClipRight_13() const { return ___stereoWorldToClipRight_13; }
	inline Matrix4x4_t1817901843 * get_address_of_stereoWorldToClipRight_13() { return &___stereoWorldToClipRight_13; }
	inline void set_stereoWorldToClipRight_13(Matrix4x4_t1817901843  value)
	{
		___stereoWorldToClipRight_13 = value;
	}

	inline static int32_t get_offset_of_worldToCamera_14() { return static_cast<int32_t>(offsetof(CameraProperties_t3304495522, ___worldToCamera_14)); }
	inline Matrix4x4_t1817901843  get_worldToCamera_14() const { return ___worldToCamera_14; }
	inline Matrix4x4_t1817901843 * get_address_of_worldToCamera_14() { return &___worldToCamera_14; }
	inline void set_worldToCamera_14(Matrix4x4_t1817901843  value)
	{
		___worldToCamera_14 = value;
	}

	inline static int32_t get_offset_of_up_15() { return static_cast<int32_t>(offsetof(CameraProperties_t3304495522, ___up_15)); }
	inline Vector3_t3722313464  get_up_15() const { return ___up_15; }
	inline Vector3_t3722313464 * get_address_of_up_15() { return &___up_15; }
	inline void set_up_15(Vector3_t3722313464  value)
	{
		___up_15 = value;
	}

	inline static int32_t get_offset_of_right_16() { return static_cast<int32_t>(offsetof(CameraProperties_t3304495522, ___right_16)); }
	inline Vector3_t3722313464  get_right_16() const { return ___right_16; }
	inline Vector3_t3722313464 * get_address_of_right_16() { return &___right_16; }
	inline void set_right_16(Vector3_t3722313464  value)
	{
		___right_16 = value;
	}

	inline static int32_t get_offset_of_transformDirection_17() { return static_cast<int32_t>(offsetof(CameraProperties_t3304495522, ___transformDirection_17)); }
	inline Vector3_t3722313464  get_transformDirection_17() const { return ___transformDirection_17; }
	inline Vector3_t3722313464 * get_address_of_transformDirection_17() { return &___transformDirection_17; }
	inline void set_transformDirection_17(Vector3_t3722313464  value)
	{
		___transformDirection_17 = value;
	}

	inline static int32_t get_offset_of_cameraEuler_18() { return static_cast<int32_t>(offsetof(CameraProperties_t3304495522, ___cameraEuler_18)); }
	inline Vector3_t3722313464  get_cameraEuler_18() const { return ___cameraEuler_18; }
	inline Vector3_t3722313464 * get_address_of_cameraEuler_18() { return &___cameraEuler_18; }
	inline void set_cameraEuler_18(Vector3_t3722313464  value)
	{
		___cameraEuler_18 = value;
	}

	inline static int32_t get_offset_of_velocity_19() { return static_cast<int32_t>(offsetof(CameraProperties_t3304495522, ___velocity_19)); }
	inline Vector3_t3722313464  get_velocity_19() const { return ___velocity_19; }
	inline Vector3_t3722313464 * get_address_of_velocity_19() { return &___velocity_19; }
	inline void set_velocity_19(Vector3_t3722313464  value)
	{
		___velocity_19 = value;
	}

	inline static int32_t get_offset_of_farPlaneWorldSpaceLength_20() { return static_cast<int32_t>(offsetof(CameraProperties_t3304495522, ___farPlaneWorldSpaceLength_20)); }
	inline float get_farPlaneWorldSpaceLength_20() const { return ___farPlaneWorldSpaceLength_20; }
	inline float* get_address_of_farPlaneWorldSpaceLength_20() { return &___farPlaneWorldSpaceLength_20; }
	inline void set_farPlaneWorldSpaceLength_20(float value)
	{
		___farPlaneWorldSpaceLength_20 = value;
	}

	inline static int32_t get_offset_of_rendererCount_21() { return static_cast<int32_t>(offsetof(CameraProperties_t3304495522, ___rendererCount_21)); }
	inline uint32_t get_rendererCount_21() const { return ___rendererCount_21; }
	inline uint32_t* get_address_of_rendererCount_21() { return &___rendererCount_21; }
	inline void set_rendererCount_21(uint32_t value)
	{
		___rendererCount_21 = value;
	}

	inline static int32_t get_offset_of__shadowCullPlanes_22() { return static_cast<int32_t>(offsetof(CameraProperties_t3304495522, ____shadowCullPlanes_22)); }
	inline U3C_shadowCullPlanesU3E__FixedBuffer2_t3967873427  get__shadowCullPlanes_22() const { return ____shadowCullPlanes_22; }
	inline U3C_shadowCullPlanesU3E__FixedBuffer2_t3967873427 * get_address_of__shadowCullPlanes_22() { return &____shadowCullPlanes_22; }
	inline void set__shadowCullPlanes_22(U3C_shadowCullPlanesU3E__FixedBuffer2_t3967873427  value)
	{
		____shadowCullPlanes_22 = value;
	}

	inline static int32_t get_offset_of__cameraCullPlanes_23() { return static_cast<int32_t>(offsetof(CameraProperties_t3304495522, ____cameraCullPlanes_23)); }
	inline U3C_cameraCullPlanesU3E__FixedBuffer3_t3170447830  get__cameraCullPlanes_23() const { return ____cameraCullPlanes_23; }
	inline U3C_cameraCullPlanesU3E__FixedBuffer3_t3170447830 * get_address_of__cameraCullPlanes_23() { return &____cameraCullPlanes_23; }
	inline void set__cameraCullPlanes_23(U3C_cameraCullPlanesU3E__FixedBuffer3_t3170447830  value)
	{
		____cameraCullPlanes_23 = value;
	}

	inline static int32_t get_offset_of_baseFarDistance_24() { return static_cast<int32_t>(offsetof(CameraProperties_t3304495522, ___baseFarDistance_24)); }
	inline float get_baseFarDistance_24() const { return ___baseFarDistance_24; }
	inline float* get_address_of_baseFarDistance_24() { return &___baseFarDistance_24; }
	inline void set_baseFarDistance_24(float value)
	{
		___baseFarDistance_24 = value;
	}

	inline static int32_t get_offset_of_shadowCullCenter_25() { return static_cast<int32_t>(offsetof(CameraProperties_t3304495522, ___shadowCullCenter_25)); }
	inline Vector3_t3722313464  get_shadowCullCenter_25() const { return ___shadowCullCenter_25; }
	inline Vector3_t3722313464 * get_address_of_shadowCullCenter_25() { return &___shadowCullCenter_25; }
	inline void set_shadowCullCenter_25(Vector3_t3722313464  value)
	{
		___shadowCullCenter_25 = value;
	}

	inline static int32_t get_offset_of_layerCullDistances_26() { return static_cast<int32_t>(offsetof(CameraProperties_t3304495522, ___layerCullDistances_26)); }
	inline U3ClayerCullDistancesU3E__FixedBuffer4_t4284714940  get_layerCullDistances_26() const { return ___layerCullDistances_26; }
	inline U3ClayerCullDistancesU3E__FixedBuffer4_t4284714940 * get_address_of_layerCullDistances_26() { return &___layerCullDistances_26; }
	inline void set_layerCullDistances_26(U3ClayerCullDistancesU3E__FixedBuffer4_t4284714940  value)
	{
		___layerCullDistances_26 = value;
	}

	inline static int32_t get_offset_of_layerCullSpherical_27() { return static_cast<int32_t>(offsetof(CameraProperties_t3304495522, ___layerCullSpherical_27)); }
	inline int32_t get_layerCullSpherical_27() const { return ___layerCullSpherical_27; }
	inline int32_t* get_address_of_layerCullSpherical_27() { return &___layerCullSpherical_27; }
	inline void set_layerCullSpherical_27(int32_t value)
	{
		___layerCullSpherical_27 = value;
	}

	inline static int32_t get_offset_of_coreCameraValues_28() { return static_cast<int32_t>(offsetof(CameraProperties_t3304495522, ___coreCameraValues_28)); }
	inline CoreCameraValues_t3714484151  get_coreCameraValues_28() const { return ___coreCameraValues_28; }
	inline CoreCameraValues_t3714484151 * get_address_of_coreCameraValues_28() { return &___coreCameraValues_28; }
	inline void set_coreCameraValues_28(CoreCameraValues_t3714484151  value)
	{
		___coreCameraValues_28 = value;
	}

	inline static int32_t get_offset_of_cameraType_29() { return static_cast<int32_t>(offsetof(CameraProperties_t3304495522, ___cameraType_29)); }
	inline uint32_t get_cameraType_29() const { return ___cameraType_29; }
	inline uint32_t* get_address_of_cameraType_29() { return &___cameraType_29; }
	inline void set_cameraType_29(uint32_t value)
	{
		___cameraType_29 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // CAMERAPROPERTIES_T3304495522_H
#ifndef CULLFLAG_T3106704848_H
#define CULLFLAG_T3106704848_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.Experimental.Rendering.CullFlag
struct  CullFlag_t3106704848 
{
public:
	// System.Int32 UnityEngine.Experimental.Rendering.CullFlag::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(CullFlag_t3106704848, ___value___2)); }
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
#endif // CULLFLAG_T3106704848_H
#ifndef FILTERRESULTS_T2595222798_H
#define FILTERRESULTS_T2595222798_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.Experimental.Rendering.FilterResults
struct  FilterResults_t2595222798 
{
public:
	// System.IntPtr UnityEngine.Experimental.Rendering.FilterResults::m_CullResults
	intptr_t ___m_CullResults_0;

public:
	inline static int32_t get_offset_of_m_CullResults_0() { return static_cast<int32_t>(offsetof(FilterResults_t2595222798, ___m_CullResults_0)); }
	inline intptr_t get_m_CullResults_0() const { return ___m_CullResults_0; }
	inline intptr_t* get_address_of_m_CullResults_0() { return &___m_CullResults_0; }
	inline void set_m_CullResults_0(intptr_t value)
	{
		___m_CullResults_0 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // FILTERRESULTS_T2595222798_H
#ifndef LODPARAMETERS_T4109493171_H
#define LODPARAMETERS_T4109493171_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.Experimental.Rendering.LODParameters
struct  LODParameters_t4109493171 
{
public:
	// System.Int32 UnityEngine.Experimental.Rendering.LODParameters::m_IsOrthographic
	int32_t ___m_IsOrthographic_0;
	// UnityEngine.Vector3 UnityEngine.Experimental.Rendering.LODParameters::m_CameraPosition
	Vector3_t3722313464  ___m_CameraPosition_1;
	// System.Single UnityEngine.Experimental.Rendering.LODParameters::m_FieldOfView
	float ___m_FieldOfView_2;
	// System.Single UnityEngine.Experimental.Rendering.LODParameters::m_OrthoSize
	float ___m_OrthoSize_3;
	// System.Int32 UnityEngine.Experimental.Rendering.LODParameters::m_CameraPixelHeight
	int32_t ___m_CameraPixelHeight_4;

public:
	inline static int32_t get_offset_of_m_IsOrthographic_0() { return static_cast<int32_t>(offsetof(LODParameters_t4109493171, ___m_IsOrthographic_0)); }
	inline int32_t get_m_IsOrthographic_0() const { return ___m_IsOrthographic_0; }
	inline int32_t* get_address_of_m_IsOrthographic_0() { return &___m_IsOrthographic_0; }
	inline void set_m_IsOrthographic_0(int32_t value)
	{
		___m_IsOrthographic_0 = value;
	}

	inline static int32_t get_offset_of_m_CameraPosition_1() { return static_cast<int32_t>(offsetof(LODParameters_t4109493171, ___m_CameraPosition_1)); }
	inline Vector3_t3722313464  get_m_CameraPosition_1() const { return ___m_CameraPosition_1; }
	inline Vector3_t3722313464 * get_address_of_m_CameraPosition_1() { return &___m_CameraPosition_1; }
	inline void set_m_CameraPosition_1(Vector3_t3722313464  value)
	{
		___m_CameraPosition_1 = value;
	}

	inline static int32_t get_offset_of_m_FieldOfView_2() { return static_cast<int32_t>(offsetof(LODParameters_t4109493171, ___m_FieldOfView_2)); }
	inline float get_m_FieldOfView_2() const { return ___m_FieldOfView_2; }
	inline float* get_address_of_m_FieldOfView_2() { return &___m_FieldOfView_2; }
	inline void set_m_FieldOfView_2(float value)
	{
		___m_FieldOfView_2 = value;
	}

	inline static int32_t get_offset_of_m_OrthoSize_3() { return static_cast<int32_t>(offsetof(LODParameters_t4109493171, ___m_OrthoSize_3)); }
	inline float get_m_OrthoSize_3() const { return ___m_OrthoSize_3; }
	inline float* get_address_of_m_OrthoSize_3() { return &___m_OrthoSize_3; }
	inline void set_m_OrthoSize_3(float value)
	{
		___m_OrthoSize_3 = value;
	}

	inline static int32_t get_offset_of_m_CameraPixelHeight_4() { return static_cast<int32_t>(offsetof(LODParameters_t4109493171, ___m_CameraPixelHeight_4)); }
	inline int32_t get_m_CameraPixelHeight_4() const { return ___m_CameraPixelHeight_4; }
	inline int32_t* get_address_of_m_CameraPixelHeight_4() { return &___m_CameraPixelHeight_4; }
	inline void set_m_CameraPixelHeight_4(int32_t value)
	{
		___m_CameraPixelHeight_4 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // LODPARAMETERS_T4109493171_H
#ifndef REFLECTIONPROBESORTOPTIONS_T658301893_H
#define REFLECTIONPROBESORTOPTIONS_T658301893_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.Experimental.Rendering.ReflectionProbeSortOptions
struct  ReflectionProbeSortOptions_t658301893 
{
public:
	// System.Int32 UnityEngine.Experimental.Rendering.ReflectionProbeSortOptions::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(ReflectionProbeSortOptions_t658301893, ___value___2)); }
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
#endif // REFLECTIONPROBESORTOPTIONS_T658301893_H
#ifndef SHADOWSPLITDATA_T2429460125_H
#define SHADOWSPLITDATA_T2429460125_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.Experimental.Rendering.ShadowSplitData
struct  ShadowSplitData_t2429460125 
{
public:
	// System.Int32 UnityEngine.Experimental.Rendering.ShadowSplitData::cullingPlaneCount
	int32_t ___cullingPlaneCount_0;
	// UnityEngine.Experimental.Rendering.ShadowSplitData/<_cullingPlanes>__FixedBuffer7 UnityEngine.Experimental.Rendering.ShadowSplitData::_cullingPlanes
	U3C_cullingPlanesU3E__FixedBuffer7_t3172482031  ____cullingPlanes_1;
	// UnityEngine.Vector4 UnityEngine.Experimental.Rendering.ShadowSplitData::cullingSphere
	Vector4_t3319028937  ___cullingSphere_2;

public:
	inline static int32_t get_offset_of_cullingPlaneCount_0() { return static_cast<int32_t>(offsetof(ShadowSplitData_t2429460125, ___cullingPlaneCount_0)); }
	inline int32_t get_cullingPlaneCount_0() const { return ___cullingPlaneCount_0; }
	inline int32_t* get_address_of_cullingPlaneCount_0() { return &___cullingPlaneCount_0; }
	inline void set_cullingPlaneCount_0(int32_t value)
	{
		___cullingPlaneCount_0 = value;
	}

	inline static int32_t get_offset_of__cullingPlanes_1() { return static_cast<int32_t>(offsetof(ShadowSplitData_t2429460125, ____cullingPlanes_1)); }
	inline U3C_cullingPlanesU3E__FixedBuffer7_t3172482031  get__cullingPlanes_1() const { return ____cullingPlanes_1; }
	inline U3C_cullingPlanesU3E__FixedBuffer7_t3172482031 * get_address_of__cullingPlanes_1() { return &____cullingPlanes_1; }
	inline void set__cullingPlanes_1(U3C_cullingPlanesU3E__FixedBuffer7_t3172482031  value)
	{
		____cullingPlanes_1 = value;
	}

	inline static int32_t get_offset_of_cullingSphere_2() { return static_cast<int32_t>(offsetof(ShadowSplitData_t2429460125, ___cullingSphere_2)); }
	inline Vector4_t3319028937  get_cullingSphere_2() const { return ___cullingSphere_2; }
	inline Vector4_t3319028937 * get_address_of_cullingSphere_2() { return &___cullingSphere_2; }
	inline void set_cullingSphere_2(Vector4_t3319028937  value)
	{
		___cullingSphere_2 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // SHADOWSPLITDATA_T2429460125_H
#ifndef LIGHTMAPMIXEDBAKEMODE_T4188935449_H
#define LIGHTMAPMIXEDBAKEMODE_T4188935449_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.Experimental.Rendering.SupportedRenderingFeatures/LightmapMixedBakeMode
struct  LightmapMixedBakeMode_t4188935449 
{
public:
	// System.Int32 UnityEngine.Experimental.Rendering.SupportedRenderingFeatures/LightmapMixedBakeMode::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(LightmapMixedBakeMode_t4188935449, ___value___2)); }
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
#endif // LIGHTMAPMIXEDBAKEMODE_T4188935449_H
#ifndef REFLECTIONPROBESUPPORTFLAGS_T3313277643_H
#define REFLECTIONPROBESUPPORTFLAGS_T3313277643_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.Experimental.Rendering.SupportedRenderingFeatures/ReflectionProbeSupportFlags
struct  ReflectionProbeSupportFlags_t3313277643 
{
public:
	// System.Int32 UnityEngine.Experimental.Rendering.SupportedRenderingFeatures/ReflectionProbeSupportFlags::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(ReflectionProbeSupportFlags_t3313277643, ___value___2)); }
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
#endif // REFLECTIONPROBESUPPORTFLAGS_T3313277643_H
#ifndef VISIBLELIGHTFLAGS_T3157829005_H
#define VISIBLELIGHTFLAGS_T3157829005_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.Experimental.Rendering.VisibleLightFlags
struct  VisibleLightFlags_t3157829005 
{
public:
	// System.Int32 UnityEngine.Experimental.Rendering.VisibleLightFlags::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(VisibleLightFlags_t3157829005, ___value___2)); }
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
#endif // VISIBLELIGHTFLAGS_T3157829005_H
#ifndef SPRITEBONE_T303320096_H
#define SPRITEBONE_T303320096_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.Experimental.U2D.SpriteBone
struct  SpriteBone_t303320096 
{
public:
	// System.String UnityEngine.Experimental.U2D.SpriteBone::m_Name
	String_t* ___m_Name_0;
	// UnityEngine.Vector3 UnityEngine.Experimental.U2D.SpriteBone::m_Position
	Vector3_t3722313464  ___m_Position_1;
	// UnityEngine.Quaternion UnityEngine.Experimental.U2D.SpriteBone::m_Rotation
	Quaternion_t2301928331  ___m_Rotation_2;
	// System.Single UnityEngine.Experimental.U2D.SpriteBone::m_Length
	float ___m_Length_3;
	// System.Int32 UnityEngine.Experimental.U2D.SpriteBone::m_ParentId
	int32_t ___m_ParentId_4;

public:
	inline static int32_t get_offset_of_m_Name_0() { return static_cast<int32_t>(offsetof(SpriteBone_t303320096, ___m_Name_0)); }
	inline String_t* get_m_Name_0() const { return ___m_Name_0; }
	inline String_t** get_address_of_m_Name_0() { return &___m_Name_0; }
	inline void set_m_Name_0(String_t* value)
	{
		___m_Name_0 = value;
		Il2CppCodeGenWriteBarrier((&___m_Name_0), value);
	}

	inline static int32_t get_offset_of_m_Position_1() { return static_cast<int32_t>(offsetof(SpriteBone_t303320096, ___m_Position_1)); }
	inline Vector3_t3722313464  get_m_Position_1() const { return ___m_Position_1; }
	inline Vector3_t3722313464 * get_address_of_m_Position_1() { return &___m_Position_1; }
	inline void set_m_Position_1(Vector3_t3722313464  value)
	{
		___m_Position_1 = value;
	}

	inline static int32_t get_offset_of_m_Rotation_2() { return static_cast<int32_t>(offsetof(SpriteBone_t303320096, ___m_Rotation_2)); }
	inline Quaternion_t2301928331  get_m_Rotation_2() const { return ___m_Rotation_2; }
	inline Quaternion_t2301928331 * get_address_of_m_Rotation_2() { return &___m_Rotation_2; }
	inline void set_m_Rotation_2(Quaternion_t2301928331  value)
	{
		___m_Rotation_2 = value;
	}

	inline static int32_t get_offset_of_m_Length_3() { return static_cast<int32_t>(offsetof(SpriteBone_t303320096, ___m_Length_3)); }
	inline float get_m_Length_3() const { return ___m_Length_3; }
	inline float* get_address_of_m_Length_3() { return &___m_Length_3; }
	inline void set_m_Length_3(float value)
	{
		___m_Length_3 = value;
	}

	inline static int32_t get_offset_of_m_ParentId_4() { return static_cast<int32_t>(offsetof(SpriteBone_t303320096, ___m_ParentId_4)); }
	inline int32_t get_m_ParentId_4() const { return ___m_ParentId_4; }
	inline int32_t* get_address_of_m_ParentId_4() { return &___m_ParentId_4; }
	inline void set_m_ParentId_4(int32_t value)
	{
		___m_ParentId_4 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
// Native definition for P/Invoke marshalling of UnityEngine.Experimental.U2D.SpriteBone
struct SpriteBone_t303320096_marshaled_pinvoke
{
	char* ___m_Name_0;
	Vector3_t3722313464  ___m_Position_1;
	Quaternion_t2301928331  ___m_Rotation_2;
	float ___m_Length_3;
	int32_t ___m_ParentId_4;
};
// Native definition for COM marshalling of UnityEngine.Experimental.U2D.SpriteBone
struct SpriteBone_t303320096_marshaled_com
{
	Il2CppChar* ___m_Name_0;
	Vector3_t3722313464  ___m_Position_1;
	Quaternion_t2301928331  ___m_Rotation_2;
	float ___m_Length_3;
	int32_t ___m_ParentId_4;
};
#endif // SPRITEBONE_T303320096_H
#ifndef LIGHTMAPBAKETYPE_T1497855756_H
#define LIGHTMAPBAKETYPE_T1497855756_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.LightmapBakeType
struct  LightmapBakeType_t1497855756 
{
public:
	// System.Int32 UnityEngine.LightmapBakeType::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(LightmapBakeType_t1497855756, ___value___2)); }
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
#endif // LIGHTMAPBAKETYPE_T1497855756_H
#ifndef LIGHTMAPSMODE_T12202505_H
#define LIGHTMAPSMODE_T12202505_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.LightmapsMode
struct  LightmapsMode_t12202505 
{
public:
	// System.Int32 UnityEngine.LightmapsMode::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(LightmapsMode_t12202505, ___value___2)); }
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
#endif // LIGHTMAPSMODE_T12202505_H
#ifndef LOGTYPE_T73765434_H
#define LOGTYPE_T73765434_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.LogType
struct  LogType_t73765434 
{
public:
	// System.Int32 UnityEngine.LogType::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(LogType_t73765434, ___value___2)); }
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
#endif // LOGTYPE_T73765434_H
#ifndef U3CREGISTERU3EC__ANONSTOREY0_T2405595090_H
#define U3CREGISTERU3EC__ANONSTOREY0_T2405595090_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.Networking.PlayerConnection.PlayerConnection/<Register>c__AnonStorey0
struct  U3CRegisterU3Ec__AnonStorey0_t2405595090  : public RuntimeObject
{
public:
	// System.Guid UnityEngine.Networking.PlayerConnection.PlayerConnection/<Register>c__AnonStorey0::messageId
	Guid_t  ___messageId_0;

public:
	inline static int32_t get_offset_of_messageId_0() { return static_cast<int32_t>(offsetof(U3CRegisterU3Ec__AnonStorey0_t2405595090, ___messageId_0)); }
	inline Guid_t  get_messageId_0() const { return ___messageId_0; }
	inline Guid_t * get_address_of_messageId_0() { return &___messageId_0; }
	inline void set_messageId_0(Guid_t  value)
	{
		___messageId_0 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // U3CREGISTERU3EC__ANONSTOREY0_T2405595090_H
#ifndef U3CUNREGISTERU3EC__ANONSTOREY1_T2528476601_H
#define U3CUNREGISTERU3EC__ANONSTOREY1_T2528476601_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.Networking.PlayerConnection.PlayerConnection/<Unregister>c__AnonStorey1
struct  U3CUnregisterU3Ec__AnonStorey1_t2528476601  : public RuntimeObject
{
public:
	// System.Guid UnityEngine.Networking.PlayerConnection.PlayerConnection/<Unregister>c__AnonStorey1::messageId
	Guid_t  ___messageId_0;

public:
	inline static int32_t get_offset_of_messageId_0() { return static_cast<int32_t>(offsetof(U3CUnregisterU3Ec__AnonStorey1_t2528476601, ___messageId_0)); }
	inline Guid_t  get_messageId_0() const { return ___messageId_0; }
	inline Guid_t * get_address_of_messageId_0() { return &___messageId_0; }
	inline void set_messageId_0(Guid_t  value)
	{
		___messageId_0 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // U3CUNREGISTERU3EC__ANONSTOREY1_T2528476601_H
#ifndef U3CADDANDCREATEU3EC__ANONSTOREY1_T1136770903_H
#define U3CADDANDCREATEU3EC__ANONSTOREY1_T1136770903_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.Networking.PlayerConnection.PlayerEditorConnectionEvents/<AddAndCreate>c__AnonStorey1
struct  U3CAddAndCreateU3Ec__AnonStorey1_t1136770903  : public RuntimeObject
{
public:
	// System.Guid UnityEngine.Networking.PlayerConnection.PlayerEditorConnectionEvents/<AddAndCreate>c__AnonStorey1::messageId
	Guid_t  ___messageId_0;

public:
	inline static int32_t get_offset_of_messageId_0() { return static_cast<int32_t>(offsetof(U3CAddAndCreateU3Ec__AnonStorey1_t1136770903, ___messageId_0)); }
	inline Guid_t  get_messageId_0() const { return ___messageId_0; }
	inline Guid_t * get_address_of_messageId_0() { return &___messageId_0; }
	inline void set_messageId_0(Guid_t  value)
	{
		___messageId_0 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // U3CADDANDCREATEU3EC__ANONSTOREY1_T1136770903_H
#ifndef U3CINVOKEMESSAGEIDSUBSCRIBERSU3EC__ANONSTOREY0_T907692441_H
#define U3CINVOKEMESSAGEIDSUBSCRIBERSU3EC__ANONSTOREY0_T907692441_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.Networking.PlayerConnection.PlayerEditorConnectionEvents/<InvokeMessageIdSubscribers>c__AnonStorey0
struct  U3CInvokeMessageIdSubscribersU3Ec__AnonStorey0_t907692441  : public RuntimeObject
{
public:
	// System.Guid UnityEngine.Networking.PlayerConnection.PlayerEditorConnectionEvents/<InvokeMessageIdSubscribers>c__AnonStorey0::messageId
	Guid_t  ___messageId_0;

public:
	inline static int32_t get_offset_of_messageId_0() { return static_cast<int32_t>(offsetof(U3CInvokeMessageIdSubscribersU3Ec__AnonStorey0_t907692441, ___messageId_0)); }
	inline Guid_t  get_messageId_0() const { return ___messageId_0; }
	inline Guid_t * get_address_of_messageId_0() { return &___messageId_0; }
	inline void set_messageId_0(Guid_t  value)
	{
		___messageId_0 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // U3CINVOKEMESSAGEIDSUBSCRIBERSU3EC__ANONSTOREY0_T907692441_H
#ifndef U3CUNREGISTERMANAGEDCALLBACKU3EC__ANONSTOREY2_T1335960973_H
#define U3CUNREGISTERMANAGEDCALLBACKU3EC__ANONSTOREY2_T1335960973_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.Networking.PlayerConnection.PlayerEditorConnectionEvents/<UnregisterManagedCallback>c__AnonStorey2
struct  U3CUnregisterManagedCallbackU3Ec__AnonStorey2_t1335960973  : public RuntimeObject
{
public:
	// System.Guid UnityEngine.Networking.PlayerConnection.PlayerEditorConnectionEvents/<UnregisterManagedCallback>c__AnonStorey2::messageId
	Guid_t  ___messageId_0;

public:
	inline static int32_t get_offset_of_messageId_0() { return static_cast<int32_t>(offsetof(U3CUnregisterManagedCallbackU3Ec__AnonStorey2_t1335960973, ___messageId_0)); }
	inline Guid_t  get_messageId_0() const { return ___messageId_0; }
	inline Guid_t * get_address_of_messageId_0() { return &___messageId_0; }
	inline void set_messageId_0(Guid_t  value)
	{
		___messageId_0 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // U3CUNREGISTERMANAGEDCALLBACKU3EC__ANONSTOREY2_T1335960973_H
#ifndef CONNECTIONCHANGEEVENT_T3251856151_H
#define CONNECTIONCHANGEEVENT_T3251856151_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.Networking.PlayerConnection.PlayerEditorConnectionEvents/ConnectionChangeEvent
struct  ConnectionChangeEvent_t3251856151  : public UnityEvent_1_t3832605257
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // CONNECTIONCHANGEEVENT_T3251856151_H
#ifndef MESSAGEEVENT_T1491597365_H
#define MESSAGEEVENT_T1491597365_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.Networking.PlayerConnection.PlayerEditorConnectionEvents/MessageEvent
struct  MessageEvent_t1491597365  : public UnityEvent_1_t2052235288
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // MESSAGEEVENT_T1491597365_H
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
#ifndef PLAYABLEGRAPH_T3515989261_H
#define PLAYABLEGRAPH_T3515989261_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.Playables.PlayableGraph
struct  PlayableGraph_t3515989261 
{
public:
	// System.IntPtr UnityEngine.Playables.PlayableGraph::m_Handle
	intptr_t ___m_Handle_0;
	// System.UInt32 UnityEngine.Playables.PlayableGraph::m_Version
	uint32_t ___m_Version_1;

public:
	inline static int32_t get_offset_of_m_Handle_0() { return static_cast<int32_t>(offsetof(PlayableGraph_t3515989261, ___m_Handle_0)); }
	inline intptr_t get_m_Handle_0() const { return ___m_Handle_0; }
	inline intptr_t* get_address_of_m_Handle_0() { return &___m_Handle_0; }
	inline void set_m_Handle_0(intptr_t value)
	{
		___m_Handle_0 = value;
	}

	inline static int32_t get_offset_of_m_Version_1() { return static_cast<int32_t>(offsetof(PlayableGraph_t3515989261, ___m_Version_1)); }
	inline uint32_t get_m_Version_1() const { return ___m_Version_1; }
	inline uint32_t* get_address_of_m_Version_1() { return &___m_Version_1; }
	inline void set_m_Version_1(uint32_t value)
	{
		___m_Version_1 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // PLAYABLEGRAPH_T3515989261_H
#ifndef PLAYABLEHANDLE_T1095853803_H
#define PLAYABLEHANDLE_T1095853803_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.Playables.PlayableHandle
struct  PlayableHandle_t1095853803 
{
public:
	// System.IntPtr UnityEngine.Playables.PlayableHandle::m_Handle
	intptr_t ___m_Handle_0;
	// System.UInt32 UnityEngine.Playables.PlayableHandle::m_Version
	uint32_t ___m_Version_1;

public:
	inline static int32_t get_offset_of_m_Handle_0() { return static_cast<int32_t>(offsetof(PlayableHandle_t1095853803, ___m_Handle_0)); }
	inline intptr_t get_m_Handle_0() const { return ___m_Handle_0; }
	inline intptr_t* get_address_of_m_Handle_0() { return &___m_Handle_0; }
	inline void set_m_Handle_0(intptr_t value)
	{
		___m_Handle_0 = value;
	}

	inline static int32_t get_offset_of_m_Version_1() { return static_cast<int32_t>(offsetof(PlayableHandle_t1095853803, ___m_Version_1)); }
	inline uint32_t get_m_Version_1() const { return ___m_Version_1; }
	inline uint32_t* get_address_of_m_Version_1() { return &___m_Version_1; }
	inline void set_m_Version_1(uint32_t value)
	{
		___m_Version_1 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // PLAYABLEHANDLE_T1095853803_H
#ifndef PLAYABLEOUTPUTHANDLE_T4208053793_H
#define PLAYABLEOUTPUTHANDLE_T4208053793_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.Playables.PlayableOutputHandle
struct  PlayableOutputHandle_t4208053793 
{
public:
	// System.IntPtr UnityEngine.Playables.PlayableOutputHandle::m_Handle
	intptr_t ___m_Handle_0;
	// System.UInt32 UnityEngine.Playables.PlayableOutputHandle::m_Version
	uint32_t ___m_Version_1;

public:
	inline static int32_t get_offset_of_m_Handle_0() { return static_cast<int32_t>(offsetof(PlayableOutputHandle_t4208053793, ___m_Handle_0)); }
	inline intptr_t get_m_Handle_0() const { return ___m_Handle_0; }
	inline intptr_t* get_address_of_m_Handle_0() { return &___m_Handle_0; }
	inline void set_m_Handle_0(intptr_t value)
	{
		___m_Handle_0 = value;
	}

	inline static int32_t get_offset_of_m_Version_1() { return static_cast<int32_t>(offsetof(PlayableOutputHandle_t4208053793, ___m_Version_1)); }
	inline uint32_t get_m_Version_1() const { return ___m_Version_1; }
	inline uint32_t* get_address_of_m_Version_1() { return &___m_Version_1; }
	inline void set_m_Version_1(uint32_t value)
	{
		___m_Version_1 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // PLAYABLEOUTPUTHANDLE_T4208053793_H
#ifndef AXIS_T1856666072_H
#define AXIS_T1856666072_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.RectTransform/Axis
struct  Axis_t1856666072 
{
public:
	// System.Int32 UnityEngine.RectTransform/Axis::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(Axis_t1856666072, ___value___2)); }
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
#endif // AXIS_T1856666072_H
#ifndef EDGE_T1530570602_H
#define EDGE_T1530570602_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.RectTransform/Edge
struct  Edge_t1530570602 
{
public:
	// System.Int32 UnityEngine.RectTransform/Edge::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(Edge_t1530570602, ___value___2)); }
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
#endif // EDGE_T1530570602_H
#ifndef LOADSCENEMODE_T3251202195_H
#define LOADSCENEMODE_T3251202195_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.SceneManagement.LoadSceneMode
struct  LoadSceneMode_t3251202195 
{
public:
	// System.Int32 UnityEngine.SceneManagement.LoadSceneMode::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(LoadSceneMode_t3251202195, ___value___2)); }
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
#endif // LOADSCENEMODE_T3251202195_H
#ifndef TYPEINFERENCERULES_T96689094_H
#define TYPEINFERENCERULES_T96689094_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngineInternal.TypeInferenceRules
struct  TypeInferenceRules_t96689094 
{
public:
	// System.Int32 UnityEngineInternal.TypeInferenceRules::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(TypeInferenceRules_t96689094, ___value___2)); }
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
#endif // TYPEINFERENCERULES_T96689094_H
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
#ifndef CAMERAPLAYABLE_T3330816414_H
#define CAMERAPLAYABLE_T3330816414_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.Experimental.Playables.CameraPlayable
struct  CameraPlayable_t3330816414 
{
public:
	// UnityEngine.Playables.PlayableHandle UnityEngine.Experimental.Playables.CameraPlayable::m_Handle
	PlayableHandle_t1095853803  ___m_Handle_0;

public:
	inline static int32_t get_offset_of_m_Handle_0() { return static_cast<int32_t>(offsetof(CameraPlayable_t3330816414, ___m_Handle_0)); }
	inline PlayableHandle_t1095853803  get_m_Handle_0() const { return ___m_Handle_0; }
	inline PlayableHandle_t1095853803 * get_address_of_m_Handle_0() { return &___m_Handle_0; }
	inline void set_m_Handle_0(PlayableHandle_t1095853803  value)
	{
		___m_Handle_0 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // CAMERAPLAYABLE_T3330816414_H
#ifndef MATERIALEFFECTPLAYABLE_T3995207978_H
#define MATERIALEFFECTPLAYABLE_T3995207978_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.Experimental.Playables.MaterialEffectPlayable
struct  MaterialEffectPlayable_t3995207978 
{
public:
	// UnityEngine.Playables.PlayableHandle UnityEngine.Experimental.Playables.MaterialEffectPlayable::m_Handle
	PlayableHandle_t1095853803  ___m_Handle_0;

public:
	inline static int32_t get_offset_of_m_Handle_0() { return static_cast<int32_t>(offsetof(MaterialEffectPlayable_t3995207978, ___m_Handle_0)); }
	inline PlayableHandle_t1095853803  get_m_Handle_0() const { return ___m_Handle_0; }
	inline PlayableHandle_t1095853803 * get_address_of_m_Handle_0() { return &___m_Handle_0; }
	inline void set_m_Handle_0(PlayableHandle_t1095853803  value)
	{
		___m_Handle_0 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // MATERIALEFFECTPLAYABLE_T3995207978_H
#ifndef TEXTUREMIXERPLAYABLE_T2398603962_H
#define TEXTUREMIXERPLAYABLE_T2398603962_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.Experimental.Playables.TextureMixerPlayable
struct  TextureMixerPlayable_t2398603962 
{
public:
	// UnityEngine.Playables.PlayableHandle UnityEngine.Experimental.Playables.TextureMixerPlayable::m_Handle
	PlayableHandle_t1095853803  ___m_Handle_0;

public:
	inline static int32_t get_offset_of_m_Handle_0() { return static_cast<int32_t>(offsetof(TextureMixerPlayable_t2398603962, ___m_Handle_0)); }
	inline PlayableHandle_t1095853803  get_m_Handle_0() const { return ___m_Handle_0; }
	inline PlayableHandle_t1095853803 * get_address_of_m_Handle_0() { return &___m_Handle_0; }
	inline void set_m_Handle_0(PlayableHandle_t1095853803  value)
	{
		___m_Handle_0 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // TEXTUREMIXERPLAYABLE_T2398603962_H
#ifndef TEXTUREPLAYABLEOUTPUT_T648497447_H
#define TEXTUREPLAYABLEOUTPUT_T648497447_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.Experimental.Playables.TexturePlayableOutput
struct  TexturePlayableOutput_t648497447 
{
public:
	// UnityEngine.Playables.PlayableOutputHandle UnityEngine.Experimental.Playables.TexturePlayableOutput::m_Handle
	PlayableOutputHandle_t4208053793  ___m_Handle_0;

public:
	inline static int32_t get_offset_of_m_Handle_0() { return static_cast<int32_t>(offsetof(TexturePlayableOutput_t648497447, ___m_Handle_0)); }
	inline PlayableOutputHandle_t4208053793  get_m_Handle_0() const { return ___m_Handle_0; }
	inline PlayableOutputHandle_t4208053793 * get_address_of_m_Handle_0() { return &___m_Handle_0; }
	inline void set_m_Handle_0(PlayableOutputHandle_t4208053793  value)
	{
		___m_Handle_0 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // TEXTUREPLAYABLEOUTPUT_T648497447_H
#ifndef DRAWSHADOWSSETTINGS_T3949492755_H
#define DRAWSHADOWSSETTINGS_T3949492755_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.Experimental.Rendering.DrawShadowsSettings
struct  DrawShadowsSettings_t3949492755 
{
public:
	// System.IntPtr UnityEngine.Experimental.Rendering.DrawShadowsSettings::_cullResults
	intptr_t ____cullResults_0;
	// System.Int32 UnityEngine.Experimental.Rendering.DrawShadowsSettings::lightIndex
	int32_t ___lightIndex_1;
	// UnityEngine.Experimental.Rendering.ShadowSplitData UnityEngine.Experimental.Rendering.DrawShadowsSettings::splitData
	ShadowSplitData_t2429460125  ___splitData_2;

public:
	inline static int32_t get_offset_of__cullResults_0() { return static_cast<int32_t>(offsetof(DrawShadowsSettings_t3949492755, ____cullResults_0)); }
	inline intptr_t get__cullResults_0() const { return ____cullResults_0; }
	inline intptr_t* get_address_of__cullResults_0() { return &____cullResults_0; }
	inline void set__cullResults_0(intptr_t value)
	{
		____cullResults_0 = value;
	}

	inline static int32_t get_offset_of_lightIndex_1() { return static_cast<int32_t>(offsetof(DrawShadowsSettings_t3949492755, ___lightIndex_1)); }
	inline int32_t get_lightIndex_1() const { return ___lightIndex_1; }
	inline int32_t* get_address_of_lightIndex_1() { return &___lightIndex_1; }
	inline void set_lightIndex_1(int32_t value)
	{
		___lightIndex_1 = value;
	}

	inline static int32_t get_offset_of_splitData_2() { return static_cast<int32_t>(offsetof(DrawShadowsSettings_t3949492755, ___splitData_2)); }
	inline ShadowSplitData_t2429460125  get_splitData_2() const { return ___splitData_2; }
	inline ShadowSplitData_t2429460125 * get_address_of_splitData_2() { return &___splitData_2; }
	inline void set_splitData_2(ShadowSplitData_t2429460125  value)
	{
		___splitData_2 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // DRAWSHADOWSSETTINGS_T3949492755_H
#ifndef SCRIPTABLECULLINGPARAMETERS_T779110737_H
#define SCRIPTABLECULLINGPARAMETERS_T779110737_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.Experimental.Rendering.ScriptableCullingParameters
struct  ScriptableCullingParameters_t779110737 
{
public:
	// System.Int32 UnityEngine.Experimental.Rendering.ScriptableCullingParameters::m_IsOrthographic
	int32_t ___m_IsOrthographic_0;
	// UnityEngine.Experimental.Rendering.LODParameters UnityEngine.Experimental.Rendering.ScriptableCullingParameters::m_LodParameters
	LODParameters_t4109493171  ___m_LodParameters_1;
	// UnityEngine.Experimental.Rendering.ScriptableCullingParameters/<m_CullingPlanes>__FixedBuffer5 UnityEngine.Experimental.Rendering.ScriptableCullingParameters::m_CullingPlanes
	U3Cm_CullingPlanesU3E__FixedBuffer5_t3550792427  ___m_CullingPlanes_2;
	// System.Int32 UnityEngine.Experimental.Rendering.ScriptableCullingParameters::m_CullingPlaneCount
	int32_t ___m_CullingPlaneCount_3;
	// System.Int32 UnityEngine.Experimental.Rendering.ScriptableCullingParameters::m_CullingMask
	int32_t ___m_CullingMask_4;
	// System.Int64 UnityEngine.Experimental.Rendering.ScriptableCullingParameters::m_SceneMask
	int64_t ___m_SceneMask_5;
	// UnityEngine.Experimental.Rendering.ScriptableCullingParameters/<m_LayerFarCullDistances>__FixedBuffer6 UnityEngine.Experimental.Rendering.ScriptableCullingParameters::m_LayerFarCullDistances
	U3Cm_LayerFarCullDistancesU3E__FixedBuffer6_t600784380  ___m_LayerFarCullDistances_6;
	// System.Int32 UnityEngine.Experimental.Rendering.ScriptableCullingParameters::m_LayerCull
	int32_t ___m_LayerCull_7;
	// UnityEngine.Matrix4x4 UnityEngine.Experimental.Rendering.ScriptableCullingParameters::m_CullingMatrix
	Matrix4x4_t1817901843  ___m_CullingMatrix_8;
	// UnityEngine.Vector3 UnityEngine.Experimental.Rendering.ScriptableCullingParameters::m_Position
	Vector3_t3722313464  ___m_Position_9;
	// System.Single UnityEngine.Experimental.Rendering.ScriptableCullingParameters::m_shadowDistance
	float ___m_shadowDistance_10;
	// UnityEngine.Experimental.Rendering.CullFlag UnityEngine.Experimental.Rendering.ScriptableCullingParameters::m_CullingFlags
	int32_t ___m_CullingFlags_11;
	// UnityEngine.Experimental.Rendering.ReflectionProbeSortOptions UnityEngine.Experimental.Rendering.ScriptableCullingParameters::m_ReflectionProbeSortOptions
	int32_t ___m_ReflectionProbeSortOptions_12;
	// UnityEngine.Experimental.Rendering.CameraProperties UnityEngine.Experimental.Rendering.ScriptableCullingParameters::m_CameraProperties
	CameraProperties_t3304495522  ___m_CameraProperties_13;
	// UnityEngine.Matrix4x4 UnityEngine.Experimental.Rendering.ScriptableCullingParameters::cullStereoView
	Matrix4x4_t1817901843  ___cullStereoView_14;
	// UnityEngine.Matrix4x4 UnityEngine.Experimental.Rendering.ScriptableCullingParameters::cullStereoProj
	Matrix4x4_t1817901843  ___cullStereoProj_15;
	// System.Single UnityEngine.Experimental.Rendering.ScriptableCullingParameters::cullStereoSeparation
	float ___cullStereoSeparation_16;
	// System.Int32 UnityEngine.Experimental.Rendering.ScriptableCullingParameters::padding2
	int32_t ___padding2_17;

public:
	inline static int32_t get_offset_of_m_IsOrthographic_0() { return static_cast<int32_t>(offsetof(ScriptableCullingParameters_t779110737, ___m_IsOrthographic_0)); }
	inline int32_t get_m_IsOrthographic_0() const { return ___m_IsOrthographic_0; }
	inline int32_t* get_address_of_m_IsOrthographic_0() { return &___m_IsOrthographic_0; }
	inline void set_m_IsOrthographic_0(int32_t value)
	{
		___m_IsOrthographic_0 = value;
	}

	inline static int32_t get_offset_of_m_LodParameters_1() { return static_cast<int32_t>(offsetof(ScriptableCullingParameters_t779110737, ___m_LodParameters_1)); }
	inline LODParameters_t4109493171  get_m_LodParameters_1() const { return ___m_LodParameters_1; }
	inline LODParameters_t4109493171 * get_address_of_m_LodParameters_1() { return &___m_LodParameters_1; }
	inline void set_m_LodParameters_1(LODParameters_t4109493171  value)
	{
		___m_LodParameters_1 = value;
	}

	inline static int32_t get_offset_of_m_CullingPlanes_2() { return static_cast<int32_t>(offsetof(ScriptableCullingParameters_t779110737, ___m_CullingPlanes_2)); }
	inline U3Cm_CullingPlanesU3E__FixedBuffer5_t3550792427  get_m_CullingPlanes_2() const { return ___m_CullingPlanes_2; }
	inline U3Cm_CullingPlanesU3E__FixedBuffer5_t3550792427 * get_address_of_m_CullingPlanes_2() { return &___m_CullingPlanes_2; }
	inline void set_m_CullingPlanes_2(U3Cm_CullingPlanesU3E__FixedBuffer5_t3550792427  value)
	{
		___m_CullingPlanes_2 = value;
	}

	inline static int32_t get_offset_of_m_CullingPlaneCount_3() { return static_cast<int32_t>(offsetof(ScriptableCullingParameters_t779110737, ___m_CullingPlaneCount_3)); }
	inline int32_t get_m_CullingPlaneCount_3() const { return ___m_CullingPlaneCount_3; }
	inline int32_t* get_address_of_m_CullingPlaneCount_3() { return &___m_CullingPlaneCount_3; }
	inline void set_m_CullingPlaneCount_3(int32_t value)
	{
		___m_CullingPlaneCount_3 = value;
	}

	inline static int32_t get_offset_of_m_CullingMask_4() { return static_cast<int32_t>(offsetof(ScriptableCullingParameters_t779110737, ___m_CullingMask_4)); }
	inline int32_t get_m_CullingMask_4() const { return ___m_CullingMask_4; }
	inline int32_t* get_address_of_m_CullingMask_4() { return &___m_CullingMask_4; }
	inline void set_m_CullingMask_4(int32_t value)
	{
		___m_CullingMask_4 = value;
	}

	inline static int32_t get_offset_of_m_SceneMask_5() { return static_cast<int32_t>(offsetof(ScriptableCullingParameters_t779110737, ___m_SceneMask_5)); }
	inline int64_t get_m_SceneMask_5() const { return ___m_SceneMask_5; }
	inline int64_t* get_address_of_m_SceneMask_5() { return &___m_SceneMask_5; }
	inline void set_m_SceneMask_5(int64_t value)
	{
		___m_SceneMask_5 = value;
	}

	inline static int32_t get_offset_of_m_LayerFarCullDistances_6() { return static_cast<int32_t>(offsetof(ScriptableCullingParameters_t779110737, ___m_LayerFarCullDistances_6)); }
	inline U3Cm_LayerFarCullDistancesU3E__FixedBuffer6_t600784380  get_m_LayerFarCullDistances_6() const { return ___m_LayerFarCullDistances_6; }
	inline U3Cm_LayerFarCullDistancesU3E__FixedBuffer6_t600784380 * get_address_of_m_LayerFarCullDistances_6() { return &___m_LayerFarCullDistances_6; }
	inline void set_m_LayerFarCullDistances_6(U3Cm_LayerFarCullDistancesU3E__FixedBuffer6_t600784380  value)
	{
		___m_LayerFarCullDistances_6 = value;
	}

	inline static int32_t get_offset_of_m_LayerCull_7() { return static_cast<int32_t>(offsetof(ScriptableCullingParameters_t779110737, ___m_LayerCull_7)); }
	inline int32_t get_m_LayerCull_7() const { return ___m_LayerCull_7; }
	inline int32_t* get_address_of_m_LayerCull_7() { return &___m_LayerCull_7; }
	inline void set_m_LayerCull_7(int32_t value)
	{
		___m_LayerCull_7 = value;
	}

	inline static int32_t get_offset_of_m_CullingMatrix_8() { return static_cast<int32_t>(offsetof(ScriptableCullingParameters_t779110737, ___m_CullingMatrix_8)); }
	inline Matrix4x4_t1817901843  get_m_CullingMatrix_8() const { return ___m_CullingMatrix_8; }
	inline Matrix4x4_t1817901843 * get_address_of_m_CullingMatrix_8() { return &___m_CullingMatrix_8; }
	inline void set_m_CullingMatrix_8(Matrix4x4_t1817901843  value)
	{
		___m_CullingMatrix_8 = value;
	}

	inline static int32_t get_offset_of_m_Position_9() { return static_cast<int32_t>(offsetof(ScriptableCullingParameters_t779110737, ___m_Position_9)); }
	inline Vector3_t3722313464  get_m_Position_9() const { return ___m_Position_9; }
	inline Vector3_t3722313464 * get_address_of_m_Position_9() { return &___m_Position_9; }
	inline void set_m_Position_9(Vector3_t3722313464  value)
	{
		___m_Position_9 = value;
	}

	inline static int32_t get_offset_of_m_shadowDistance_10() { return static_cast<int32_t>(offsetof(ScriptableCullingParameters_t779110737, ___m_shadowDistance_10)); }
	inline float get_m_shadowDistance_10() const { return ___m_shadowDistance_10; }
	inline float* get_address_of_m_shadowDistance_10() { return &___m_shadowDistance_10; }
	inline void set_m_shadowDistance_10(float value)
	{
		___m_shadowDistance_10 = value;
	}

	inline static int32_t get_offset_of_m_CullingFlags_11() { return static_cast<int32_t>(offsetof(ScriptableCullingParameters_t779110737, ___m_CullingFlags_11)); }
	inline int32_t get_m_CullingFlags_11() const { return ___m_CullingFlags_11; }
	inline int32_t* get_address_of_m_CullingFlags_11() { return &___m_CullingFlags_11; }
	inline void set_m_CullingFlags_11(int32_t value)
	{
		___m_CullingFlags_11 = value;
	}

	inline static int32_t get_offset_of_m_ReflectionProbeSortOptions_12() { return static_cast<int32_t>(offsetof(ScriptableCullingParameters_t779110737, ___m_ReflectionProbeSortOptions_12)); }
	inline int32_t get_m_ReflectionProbeSortOptions_12() const { return ___m_ReflectionProbeSortOptions_12; }
	inline int32_t* get_address_of_m_ReflectionProbeSortOptions_12() { return &___m_ReflectionProbeSortOptions_12; }
	inline void set_m_ReflectionProbeSortOptions_12(int32_t value)
	{
		___m_ReflectionProbeSortOptions_12 = value;
	}

	inline static int32_t get_offset_of_m_CameraProperties_13() { return static_cast<int32_t>(offsetof(ScriptableCullingParameters_t779110737, ___m_CameraProperties_13)); }
	inline CameraProperties_t3304495522  get_m_CameraProperties_13() const { return ___m_CameraProperties_13; }
	inline CameraProperties_t3304495522 * get_address_of_m_CameraProperties_13() { return &___m_CameraProperties_13; }
	inline void set_m_CameraProperties_13(CameraProperties_t3304495522  value)
	{
		___m_CameraProperties_13 = value;
	}

	inline static int32_t get_offset_of_cullStereoView_14() { return static_cast<int32_t>(offsetof(ScriptableCullingParameters_t779110737, ___cullStereoView_14)); }
	inline Matrix4x4_t1817901843  get_cullStereoView_14() const { return ___cullStereoView_14; }
	inline Matrix4x4_t1817901843 * get_address_of_cullStereoView_14() { return &___cullStereoView_14; }
	inline void set_cullStereoView_14(Matrix4x4_t1817901843  value)
	{
		___cullStereoView_14 = value;
	}

	inline static int32_t get_offset_of_cullStereoProj_15() { return static_cast<int32_t>(offsetof(ScriptableCullingParameters_t779110737, ___cullStereoProj_15)); }
	inline Matrix4x4_t1817901843  get_cullStereoProj_15() const { return ___cullStereoProj_15; }
	inline Matrix4x4_t1817901843 * get_address_of_cullStereoProj_15() { return &___cullStereoProj_15; }
	inline void set_cullStereoProj_15(Matrix4x4_t1817901843  value)
	{
		___cullStereoProj_15 = value;
	}

	inline static int32_t get_offset_of_cullStereoSeparation_16() { return static_cast<int32_t>(offsetof(ScriptableCullingParameters_t779110737, ___cullStereoSeparation_16)); }
	inline float get_cullStereoSeparation_16() const { return ___cullStereoSeparation_16; }
	inline float* get_address_of_cullStereoSeparation_16() { return &___cullStereoSeparation_16; }
	inline void set_cullStereoSeparation_16(float value)
	{
		___cullStereoSeparation_16 = value;
	}

	inline static int32_t get_offset_of_padding2_17() { return static_cast<int32_t>(offsetof(ScriptableCullingParameters_t779110737, ___padding2_17)); }
	inline int32_t get_padding2_17() const { return ___padding2_17; }
	inline int32_t* get_address_of_padding2_17() { return &___padding2_17; }
	inline void set_padding2_17(int32_t value)
	{
		___padding2_17 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // SCRIPTABLECULLINGPARAMETERS_T779110737_H
#ifndef SUPPORTEDRENDERINGFEATURES_T353898663_H
#define SUPPORTEDRENDERINGFEATURES_T353898663_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.Experimental.Rendering.SupportedRenderingFeatures
struct  SupportedRenderingFeatures_t353898663  : public RuntimeObject
{
public:
	// UnityEngine.Experimental.Rendering.SupportedRenderingFeatures/ReflectionProbeSupportFlags UnityEngine.Experimental.Rendering.SupportedRenderingFeatures::<reflectionProbeSupportFlags>k__BackingField
	int32_t ___U3CreflectionProbeSupportFlagsU3Ek__BackingField_1;
	// UnityEngine.Experimental.Rendering.SupportedRenderingFeatures/LightmapMixedBakeMode UnityEngine.Experimental.Rendering.SupportedRenderingFeatures::<defaultMixedLightingMode>k__BackingField
	int32_t ___U3CdefaultMixedLightingModeU3Ek__BackingField_2;
	// UnityEngine.Experimental.Rendering.SupportedRenderingFeatures/LightmapMixedBakeMode UnityEngine.Experimental.Rendering.SupportedRenderingFeatures::<supportedMixedLightingModes>k__BackingField
	int32_t ___U3CsupportedMixedLightingModesU3Ek__BackingField_3;
	// UnityEngine.LightmapBakeType UnityEngine.Experimental.Rendering.SupportedRenderingFeatures::<supportedLightmapBakeTypes>k__BackingField
	int32_t ___U3CsupportedLightmapBakeTypesU3Ek__BackingField_4;
	// UnityEngine.LightmapsMode UnityEngine.Experimental.Rendering.SupportedRenderingFeatures::<supportedLightmapsModes>k__BackingField
	int32_t ___U3CsupportedLightmapsModesU3Ek__BackingField_5;
	// System.Boolean UnityEngine.Experimental.Rendering.SupportedRenderingFeatures::<rendererSupportsLightProbeProxyVolumes>k__BackingField
	bool ___U3CrendererSupportsLightProbeProxyVolumesU3Ek__BackingField_6;
	// System.Boolean UnityEngine.Experimental.Rendering.SupportedRenderingFeatures::<rendererSupportsMotionVectors>k__BackingField
	bool ___U3CrendererSupportsMotionVectorsU3Ek__BackingField_7;
	// System.Boolean UnityEngine.Experimental.Rendering.SupportedRenderingFeatures::<rendererSupportsReceiveShadows>k__BackingField
	bool ___U3CrendererSupportsReceiveShadowsU3Ek__BackingField_8;
	// System.Boolean UnityEngine.Experimental.Rendering.SupportedRenderingFeatures::<rendererSupportsReflectionProbes>k__BackingField
	bool ___U3CrendererSupportsReflectionProbesU3Ek__BackingField_9;

public:
	inline static int32_t get_offset_of_U3CreflectionProbeSupportFlagsU3Ek__BackingField_1() { return static_cast<int32_t>(offsetof(SupportedRenderingFeatures_t353898663, ___U3CreflectionProbeSupportFlagsU3Ek__BackingField_1)); }
	inline int32_t get_U3CreflectionProbeSupportFlagsU3Ek__BackingField_1() const { return ___U3CreflectionProbeSupportFlagsU3Ek__BackingField_1; }
	inline int32_t* get_address_of_U3CreflectionProbeSupportFlagsU3Ek__BackingField_1() { return &___U3CreflectionProbeSupportFlagsU3Ek__BackingField_1; }
	inline void set_U3CreflectionProbeSupportFlagsU3Ek__BackingField_1(int32_t value)
	{
		___U3CreflectionProbeSupportFlagsU3Ek__BackingField_1 = value;
	}

	inline static int32_t get_offset_of_U3CdefaultMixedLightingModeU3Ek__BackingField_2() { return static_cast<int32_t>(offsetof(SupportedRenderingFeatures_t353898663, ___U3CdefaultMixedLightingModeU3Ek__BackingField_2)); }
	inline int32_t get_U3CdefaultMixedLightingModeU3Ek__BackingField_2() const { return ___U3CdefaultMixedLightingModeU3Ek__BackingField_2; }
	inline int32_t* get_address_of_U3CdefaultMixedLightingModeU3Ek__BackingField_2() { return &___U3CdefaultMixedLightingModeU3Ek__BackingField_2; }
	inline void set_U3CdefaultMixedLightingModeU3Ek__BackingField_2(int32_t value)
	{
		___U3CdefaultMixedLightingModeU3Ek__BackingField_2 = value;
	}

	inline static int32_t get_offset_of_U3CsupportedMixedLightingModesU3Ek__BackingField_3() { return static_cast<int32_t>(offsetof(SupportedRenderingFeatures_t353898663, ___U3CsupportedMixedLightingModesU3Ek__BackingField_3)); }
	inline int32_t get_U3CsupportedMixedLightingModesU3Ek__BackingField_3() const { return ___U3CsupportedMixedLightingModesU3Ek__BackingField_3; }
	inline int32_t* get_address_of_U3CsupportedMixedLightingModesU3Ek__BackingField_3() { return &___U3CsupportedMixedLightingModesU3Ek__BackingField_3; }
	inline void set_U3CsupportedMixedLightingModesU3Ek__BackingField_3(int32_t value)
	{
		___U3CsupportedMixedLightingModesU3Ek__BackingField_3 = value;
	}

	inline static int32_t get_offset_of_U3CsupportedLightmapBakeTypesU3Ek__BackingField_4() { return static_cast<int32_t>(offsetof(SupportedRenderingFeatures_t353898663, ___U3CsupportedLightmapBakeTypesU3Ek__BackingField_4)); }
	inline int32_t get_U3CsupportedLightmapBakeTypesU3Ek__BackingField_4() const { return ___U3CsupportedLightmapBakeTypesU3Ek__BackingField_4; }
	inline int32_t* get_address_of_U3CsupportedLightmapBakeTypesU3Ek__BackingField_4() { return &___U3CsupportedLightmapBakeTypesU3Ek__BackingField_4; }
	inline void set_U3CsupportedLightmapBakeTypesU3Ek__BackingField_4(int32_t value)
	{
		___U3CsupportedLightmapBakeTypesU3Ek__BackingField_4 = value;
	}

	inline static int32_t get_offset_of_U3CsupportedLightmapsModesU3Ek__BackingField_5() { return static_cast<int32_t>(offsetof(SupportedRenderingFeatures_t353898663, ___U3CsupportedLightmapsModesU3Ek__BackingField_5)); }
	inline int32_t get_U3CsupportedLightmapsModesU3Ek__BackingField_5() const { return ___U3CsupportedLightmapsModesU3Ek__BackingField_5; }
	inline int32_t* get_address_of_U3CsupportedLightmapsModesU3Ek__BackingField_5() { return &___U3CsupportedLightmapsModesU3Ek__BackingField_5; }
	inline void set_U3CsupportedLightmapsModesU3Ek__BackingField_5(int32_t value)
	{
		___U3CsupportedLightmapsModesU3Ek__BackingField_5 = value;
	}

	inline static int32_t get_offset_of_U3CrendererSupportsLightProbeProxyVolumesU3Ek__BackingField_6() { return static_cast<int32_t>(offsetof(SupportedRenderingFeatures_t353898663, ___U3CrendererSupportsLightProbeProxyVolumesU3Ek__BackingField_6)); }
	inline bool get_U3CrendererSupportsLightProbeProxyVolumesU3Ek__BackingField_6() const { return ___U3CrendererSupportsLightProbeProxyVolumesU3Ek__BackingField_6; }
	inline bool* get_address_of_U3CrendererSupportsLightProbeProxyVolumesU3Ek__BackingField_6() { return &___U3CrendererSupportsLightProbeProxyVolumesU3Ek__BackingField_6; }
	inline void set_U3CrendererSupportsLightProbeProxyVolumesU3Ek__BackingField_6(bool value)
	{
		___U3CrendererSupportsLightProbeProxyVolumesU3Ek__BackingField_6 = value;
	}

	inline static int32_t get_offset_of_U3CrendererSupportsMotionVectorsU3Ek__BackingField_7() { return static_cast<int32_t>(offsetof(SupportedRenderingFeatures_t353898663, ___U3CrendererSupportsMotionVectorsU3Ek__BackingField_7)); }
	inline bool get_U3CrendererSupportsMotionVectorsU3Ek__BackingField_7() const { return ___U3CrendererSupportsMotionVectorsU3Ek__BackingField_7; }
	inline bool* get_address_of_U3CrendererSupportsMotionVectorsU3Ek__BackingField_7() { return &___U3CrendererSupportsMotionVectorsU3Ek__BackingField_7; }
	inline void set_U3CrendererSupportsMotionVectorsU3Ek__BackingField_7(bool value)
	{
		___U3CrendererSupportsMotionVectorsU3Ek__BackingField_7 = value;
	}

	inline static int32_t get_offset_of_U3CrendererSupportsReceiveShadowsU3Ek__BackingField_8() { return static_cast<int32_t>(offsetof(SupportedRenderingFeatures_t353898663, ___U3CrendererSupportsReceiveShadowsU3Ek__BackingField_8)); }
	inline bool get_U3CrendererSupportsReceiveShadowsU3Ek__BackingField_8() const { return ___U3CrendererSupportsReceiveShadowsU3Ek__BackingField_8; }
	inline bool* get_address_of_U3CrendererSupportsReceiveShadowsU3Ek__BackingField_8() { return &___U3CrendererSupportsReceiveShadowsU3Ek__BackingField_8; }
	inline void set_U3CrendererSupportsReceiveShadowsU3Ek__BackingField_8(bool value)
	{
		___U3CrendererSupportsReceiveShadowsU3Ek__BackingField_8 = value;
	}

	inline static int32_t get_offset_of_U3CrendererSupportsReflectionProbesU3Ek__BackingField_9() { return static_cast<int32_t>(offsetof(SupportedRenderingFeatures_t353898663, ___U3CrendererSupportsReflectionProbesU3Ek__BackingField_9)); }
	inline bool get_U3CrendererSupportsReflectionProbesU3Ek__BackingField_9() const { return ___U3CrendererSupportsReflectionProbesU3Ek__BackingField_9; }
	inline bool* get_address_of_U3CrendererSupportsReflectionProbesU3Ek__BackingField_9() { return &___U3CrendererSupportsReflectionProbesU3Ek__BackingField_9; }
	inline void set_U3CrendererSupportsReflectionProbesU3Ek__BackingField_9(bool value)
	{
		___U3CrendererSupportsReflectionProbesU3Ek__BackingField_9 = value;
	}
};

struct SupportedRenderingFeatures_t353898663_StaticFields
{
public:
	// UnityEngine.Experimental.Rendering.SupportedRenderingFeatures UnityEngine.Experimental.Rendering.SupportedRenderingFeatures::s_Active
	SupportedRenderingFeatures_t353898663 * ___s_Active_0;

public:
	inline static int32_t get_offset_of_s_Active_0() { return static_cast<int32_t>(offsetof(SupportedRenderingFeatures_t353898663_StaticFields, ___s_Active_0)); }
	inline SupportedRenderingFeatures_t353898663 * get_s_Active_0() const { return ___s_Active_0; }
	inline SupportedRenderingFeatures_t353898663 ** get_address_of_s_Active_0() { return &___s_Active_0; }
	inline void set_s_Active_0(SupportedRenderingFeatures_t353898663 * value)
	{
		___s_Active_0 = value;
		Il2CppCodeGenWriteBarrier((&___s_Active_0), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // SUPPORTEDRENDERINGFEATURES_T353898663_H
#ifndef LOGGER_T274032455_H
#define LOGGER_T274032455_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.Logger
struct  Logger_t274032455  : public RuntimeObject
{
public:
	// UnityEngine.ILogHandler UnityEngine.Logger::<logHandler>k__BackingField
	RuntimeObject* ___U3ClogHandlerU3Ek__BackingField_0;
	// System.Boolean UnityEngine.Logger::<logEnabled>k__BackingField
	bool ___U3ClogEnabledU3Ek__BackingField_1;
	// UnityEngine.LogType UnityEngine.Logger::<filterLogType>k__BackingField
	int32_t ___U3CfilterLogTypeU3Ek__BackingField_2;

public:
	inline static int32_t get_offset_of_U3ClogHandlerU3Ek__BackingField_0() { return static_cast<int32_t>(offsetof(Logger_t274032455, ___U3ClogHandlerU3Ek__BackingField_0)); }
	inline RuntimeObject* get_U3ClogHandlerU3Ek__BackingField_0() const { return ___U3ClogHandlerU3Ek__BackingField_0; }
	inline RuntimeObject** get_address_of_U3ClogHandlerU3Ek__BackingField_0() { return &___U3ClogHandlerU3Ek__BackingField_0; }
	inline void set_U3ClogHandlerU3Ek__BackingField_0(RuntimeObject* value)
	{
		___U3ClogHandlerU3Ek__BackingField_0 = value;
		Il2CppCodeGenWriteBarrier((&___U3ClogHandlerU3Ek__BackingField_0), value);
	}

	inline static int32_t get_offset_of_U3ClogEnabledU3Ek__BackingField_1() { return static_cast<int32_t>(offsetof(Logger_t274032455, ___U3ClogEnabledU3Ek__BackingField_1)); }
	inline bool get_U3ClogEnabledU3Ek__BackingField_1() const { return ___U3ClogEnabledU3Ek__BackingField_1; }
	inline bool* get_address_of_U3ClogEnabledU3Ek__BackingField_1() { return &___U3ClogEnabledU3Ek__BackingField_1; }
	inline void set_U3ClogEnabledU3Ek__BackingField_1(bool value)
	{
		___U3ClogEnabledU3Ek__BackingField_1 = value;
	}

	inline static int32_t get_offset_of_U3CfilterLogTypeU3Ek__BackingField_2() { return static_cast<int32_t>(offsetof(Logger_t274032455, ___U3CfilterLogTypeU3Ek__BackingField_2)); }
	inline int32_t get_U3CfilterLogTypeU3Ek__BackingField_2() const { return ___U3CfilterLogTypeU3Ek__BackingField_2; }
	inline int32_t* get_address_of_U3CfilterLogTypeU3Ek__BackingField_2() { return &___U3CfilterLogTypeU3Ek__BackingField_2; }
	inline void set_U3CfilterLogTypeU3Ek__BackingField_2(int32_t value)
	{
		___U3CfilterLogTypeU3Ek__BackingField_2 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // LOGGER_T274032455_H
#ifndef PLAYABLE_T459825607_H
#define PLAYABLE_T459825607_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.Playables.Playable
struct  Playable_t459825607 
{
public:
	// UnityEngine.Playables.PlayableHandle UnityEngine.Playables.Playable::m_Handle
	PlayableHandle_t1095853803  ___m_Handle_0;

public:
	inline static int32_t get_offset_of_m_Handle_0() { return static_cast<int32_t>(offsetof(Playable_t459825607, ___m_Handle_0)); }
	inline PlayableHandle_t1095853803  get_m_Handle_0() const { return ___m_Handle_0; }
	inline PlayableHandle_t1095853803 * get_address_of_m_Handle_0() { return &___m_Handle_0; }
	inline void set_m_Handle_0(PlayableHandle_t1095853803  value)
	{
		___m_Handle_0 = value;
	}
};

struct Playable_t459825607_StaticFields
{
public:
	// UnityEngine.Playables.Playable UnityEngine.Playables.Playable::m_NullPlayable
	Playable_t459825607  ___m_NullPlayable_1;

public:
	inline static int32_t get_offset_of_m_NullPlayable_1() { return static_cast<int32_t>(offsetof(Playable_t459825607_StaticFields, ___m_NullPlayable_1)); }
	inline Playable_t459825607  get_m_NullPlayable_1() const { return ___m_NullPlayable_1; }
	inline Playable_t459825607 * get_address_of_m_NullPlayable_1() { return &___m_NullPlayable_1; }
	inline void set_m_NullPlayable_1(Playable_t459825607  value)
	{
		___m_NullPlayable_1 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // PLAYABLE_T459825607_H
#ifndef PLAYABLEBINDING_T354260709_H
#define PLAYABLEBINDING_T354260709_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.Playables.PlayableBinding
struct  PlayableBinding_t354260709 
{
public:
	// System.String UnityEngine.Playables.PlayableBinding::m_StreamName
	String_t* ___m_StreamName_0;
	// UnityEngine.Object UnityEngine.Playables.PlayableBinding::m_SourceObject
	Object_t631007953 * ___m_SourceObject_1;
	// System.Type UnityEngine.Playables.PlayableBinding::m_SourceBindingType
	Type_t * ___m_SourceBindingType_2;
	// UnityEngine.Playables.PlayableBinding/CreateOutputMethod UnityEngine.Playables.PlayableBinding::m_CreateOutputMethod
	CreateOutputMethod_t2301811773 * ___m_CreateOutputMethod_3;

public:
	inline static int32_t get_offset_of_m_StreamName_0() { return static_cast<int32_t>(offsetof(PlayableBinding_t354260709, ___m_StreamName_0)); }
	inline String_t* get_m_StreamName_0() const { return ___m_StreamName_0; }
	inline String_t** get_address_of_m_StreamName_0() { return &___m_StreamName_0; }
	inline void set_m_StreamName_0(String_t* value)
	{
		___m_StreamName_0 = value;
		Il2CppCodeGenWriteBarrier((&___m_StreamName_0), value);
	}

	inline static int32_t get_offset_of_m_SourceObject_1() { return static_cast<int32_t>(offsetof(PlayableBinding_t354260709, ___m_SourceObject_1)); }
	inline Object_t631007953 * get_m_SourceObject_1() const { return ___m_SourceObject_1; }
	inline Object_t631007953 ** get_address_of_m_SourceObject_1() { return &___m_SourceObject_1; }
	inline void set_m_SourceObject_1(Object_t631007953 * value)
	{
		___m_SourceObject_1 = value;
		Il2CppCodeGenWriteBarrier((&___m_SourceObject_1), value);
	}

	inline static int32_t get_offset_of_m_SourceBindingType_2() { return static_cast<int32_t>(offsetof(PlayableBinding_t354260709, ___m_SourceBindingType_2)); }
	inline Type_t * get_m_SourceBindingType_2() const { return ___m_SourceBindingType_2; }
	inline Type_t ** get_address_of_m_SourceBindingType_2() { return &___m_SourceBindingType_2; }
	inline void set_m_SourceBindingType_2(Type_t * value)
	{
		___m_SourceBindingType_2 = value;
		Il2CppCodeGenWriteBarrier((&___m_SourceBindingType_2), value);
	}

	inline static int32_t get_offset_of_m_CreateOutputMethod_3() { return static_cast<int32_t>(offsetof(PlayableBinding_t354260709, ___m_CreateOutputMethod_3)); }
	inline CreateOutputMethod_t2301811773 * get_m_CreateOutputMethod_3() const { return ___m_CreateOutputMethod_3; }
	inline CreateOutputMethod_t2301811773 ** get_address_of_m_CreateOutputMethod_3() { return &___m_CreateOutputMethod_3; }
	inline void set_m_CreateOutputMethod_3(CreateOutputMethod_t2301811773 * value)
	{
		___m_CreateOutputMethod_3 = value;
		Il2CppCodeGenWriteBarrier((&___m_CreateOutputMethod_3), value);
	}
};

struct PlayableBinding_t354260709_StaticFields
{
public:
	// UnityEngine.Playables.PlayableBinding[] UnityEngine.Playables.PlayableBinding::None
	PlayableBindingU5BU5D_t829358056* ___None_4;
	// System.Double UnityEngine.Playables.PlayableBinding::DefaultDuration
	double ___DefaultDuration_5;

public:
	inline static int32_t get_offset_of_None_4() { return static_cast<int32_t>(offsetof(PlayableBinding_t354260709_StaticFields, ___None_4)); }
	inline PlayableBindingU5BU5D_t829358056* get_None_4() const { return ___None_4; }
	inline PlayableBindingU5BU5D_t829358056** get_address_of_None_4() { return &___None_4; }
	inline void set_None_4(PlayableBindingU5BU5D_t829358056* value)
	{
		___None_4 = value;
		Il2CppCodeGenWriteBarrier((&___None_4), value);
	}

	inline static int32_t get_offset_of_DefaultDuration_5() { return static_cast<int32_t>(offsetof(PlayableBinding_t354260709_StaticFields, ___DefaultDuration_5)); }
	inline double get_DefaultDuration_5() const { return ___DefaultDuration_5; }
	inline double* get_address_of_DefaultDuration_5() { return &___DefaultDuration_5; }
	inline void set_DefaultDuration_5(double value)
	{
		___DefaultDuration_5 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
// Native definition for P/Invoke marshalling of UnityEngine.Playables.PlayableBinding
struct PlayableBinding_t354260709_marshaled_pinvoke
{
	char* ___m_StreamName_0;
	Object_t631007953_marshaled_pinvoke ___m_SourceObject_1;
	Type_t * ___m_SourceBindingType_2;
	Il2CppMethodPointer ___m_CreateOutputMethod_3;
};
// Native definition for COM marshalling of UnityEngine.Playables.PlayableBinding
struct PlayableBinding_t354260709_marshaled_com
{
	Il2CppChar* ___m_StreamName_0;
	Object_t631007953_marshaled_com* ___m_SourceObject_1;
	Type_t * ___m_SourceBindingType_2;
	Il2CppMethodPointer ___m_CreateOutputMethod_3;
};
#endif // PLAYABLEBINDING_T354260709_H
#ifndef PLAYABLEOUTPUT_T3179894105_H
#define PLAYABLEOUTPUT_T3179894105_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.Playables.PlayableOutput
struct  PlayableOutput_t3179894105 
{
public:
	// UnityEngine.Playables.PlayableOutputHandle UnityEngine.Playables.PlayableOutput::m_Handle
	PlayableOutputHandle_t4208053793  ___m_Handle_0;

public:
	inline static int32_t get_offset_of_m_Handle_0() { return static_cast<int32_t>(offsetof(PlayableOutput_t3179894105, ___m_Handle_0)); }
	inline PlayableOutputHandle_t4208053793  get_m_Handle_0() const { return ___m_Handle_0; }
	inline PlayableOutputHandle_t4208053793 * get_address_of_m_Handle_0() { return &___m_Handle_0; }
	inline void set_m_Handle_0(PlayableOutputHandle_t4208053793  value)
	{
		___m_Handle_0 = value;
	}
};

struct PlayableOutput_t3179894105_StaticFields
{
public:
	// UnityEngine.Playables.PlayableOutput UnityEngine.Playables.PlayableOutput::m_NullPlayableOutput
	PlayableOutput_t3179894105  ___m_NullPlayableOutput_1;

public:
	inline static int32_t get_offset_of_m_NullPlayableOutput_1() { return static_cast<int32_t>(offsetof(PlayableOutput_t3179894105_StaticFields, ___m_NullPlayableOutput_1)); }
	inline PlayableOutput_t3179894105  get_m_NullPlayableOutput_1() const { return ___m_NullPlayableOutput_1; }
	inline PlayableOutput_t3179894105 * get_address_of_m_NullPlayableOutput_1() { return &___m_NullPlayableOutput_1; }
	inline void set_m_NullPlayableOutput_1(PlayableOutput_t3179894105  value)
	{
		___m_NullPlayableOutput_1 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // PLAYABLEOUTPUT_T3179894105_H
#ifndef SCRIPTPLAYABLEOUTPUT_T2715692609_H
#define SCRIPTPLAYABLEOUTPUT_T2715692609_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.Playables.ScriptPlayableOutput
struct  ScriptPlayableOutput_t2715692609 
{
public:
	// UnityEngine.Playables.PlayableOutputHandle UnityEngine.Playables.ScriptPlayableOutput::m_Handle
	PlayableOutputHandle_t4208053793  ___m_Handle_0;

public:
	inline static int32_t get_offset_of_m_Handle_0() { return static_cast<int32_t>(offsetof(ScriptPlayableOutput_t2715692609, ___m_Handle_0)); }
	inline PlayableOutputHandle_t4208053793  get_m_Handle_0() const { return ___m_Handle_0; }
	inline PlayableOutputHandle_t4208053793 * get_address_of_m_Handle_0() { return &___m_Handle_0; }
	inline void set_m_Handle_0(PlayableOutputHandle_t4208053793  value)
	{
		___m_Handle_0 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // SCRIPTPLAYABLEOUTPUT_T2715692609_H
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
#ifndef RENDERPIPELINEASSET_T533890058_H
#define RENDERPIPELINEASSET_T533890058_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.Experimental.Rendering.RenderPipelineAsset
struct  RenderPipelineAsset_t533890058  : public ScriptableObject_t2528358522
{
public:
	// System.Collections.Generic.List`1<UnityEngine.Experimental.Rendering.IRenderPipeline> UnityEngine.Experimental.Rendering.RenderPipelineAsset::m_CreatedPipelines
	List_1_t2329883747 * ___m_CreatedPipelines_4;

public:
	inline static int32_t get_offset_of_m_CreatedPipelines_4() { return static_cast<int32_t>(offsetof(RenderPipelineAsset_t533890058, ___m_CreatedPipelines_4)); }
	inline List_1_t2329883747 * get_m_CreatedPipelines_4() const { return ___m_CreatedPipelines_4; }
	inline List_1_t2329883747 ** get_address_of_m_CreatedPipelines_4() { return &___m_CreatedPipelines_4; }
	inline void set_m_CreatedPipelines_4(List_1_t2329883747 * value)
	{
		___m_CreatedPipelines_4 = value;
		Il2CppCodeGenWriteBarrier((&___m_CreatedPipelines_4), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // RENDERPIPELINEASSET_T533890058_H
#ifndef PLAYERCONNECTION_T3081694049_H
#define PLAYERCONNECTION_T3081694049_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.Networking.PlayerConnection.PlayerConnection
struct  PlayerConnection_t3081694049  : public ScriptableObject_t2528358522
{
public:
	// UnityEngine.Networking.PlayerConnection.PlayerEditorConnectionEvents UnityEngine.Networking.PlayerConnection.PlayerConnection::m_PlayerEditorConnectionEvents
	PlayerEditorConnectionEvents_t3411787513 * ___m_PlayerEditorConnectionEvents_5;
	// System.Collections.Generic.List`1<System.Int32> UnityEngine.Networking.PlayerConnection.PlayerConnection::m_connectedPlayers
	List_1_t128053199 * ___m_connectedPlayers_6;
	// System.Boolean UnityEngine.Networking.PlayerConnection.PlayerConnection::m_IsInitilized
	bool ___m_IsInitilized_7;

public:
	inline static int32_t get_offset_of_m_PlayerEditorConnectionEvents_5() { return static_cast<int32_t>(offsetof(PlayerConnection_t3081694049, ___m_PlayerEditorConnectionEvents_5)); }
	inline PlayerEditorConnectionEvents_t3411787513 * get_m_PlayerEditorConnectionEvents_5() const { return ___m_PlayerEditorConnectionEvents_5; }
	inline PlayerEditorConnectionEvents_t3411787513 ** get_address_of_m_PlayerEditorConnectionEvents_5() { return &___m_PlayerEditorConnectionEvents_5; }
	inline void set_m_PlayerEditorConnectionEvents_5(PlayerEditorConnectionEvents_t3411787513 * value)
	{
		___m_PlayerEditorConnectionEvents_5 = value;
		Il2CppCodeGenWriteBarrier((&___m_PlayerEditorConnectionEvents_5), value);
	}

	inline static int32_t get_offset_of_m_connectedPlayers_6() { return static_cast<int32_t>(offsetof(PlayerConnection_t3081694049, ___m_connectedPlayers_6)); }
	inline List_1_t128053199 * get_m_connectedPlayers_6() const { return ___m_connectedPlayers_6; }
	inline List_1_t128053199 ** get_address_of_m_connectedPlayers_6() { return &___m_connectedPlayers_6; }
	inline void set_m_connectedPlayers_6(List_1_t128053199 * value)
	{
		___m_connectedPlayers_6 = value;
		Il2CppCodeGenWriteBarrier((&___m_connectedPlayers_6), value);
	}

	inline static int32_t get_offset_of_m_IsInitilized_7() { return static_cast<int32_t>(offsetof(PlayerConnection_t3081694049, ___m_IsInitilized_7)); }
	inline bool get_m_IsInitilized_7() const { return ___m_IsInitilized_7; }
	inline bool* get_address_of_m_IsInitilized_7() { return &___m_IsInitilized_7; }
	inline void set_m_IsInitilized_7(bool value)
	{
		___m_IsInitilized_7 = value;
	}
};

struct PlayerConnection_t3081694049_StaticFields
{
public:
	// UnityEngine.IPlayerEditorConnectionNative UnityEngine.Networking.PlayerConnection.PlayerConnection::connectionNative
	RuntimeObject* ___connectionNative_4;
	// UnityEngine.Networking.PlayerConnection.PlayerConnection UnityEngine.Networking.PlayerConnection.PlayerConnection::s_Instance
	PlayerConnection_t3081694049 * ___s_Instance_8;

public:
	inline static int32_t get_offset_of_connectionNative_4() { return static_cast<int32_t>(offsetof(PlayerConnection_t3081694049_StaticFields, ___connectionNative_4)); }
	inline RuntimeObject* get_connectionNative_4() const { return ___connectionNative_4; }
	inline RuntimeObject** get_address_of_connectionNative_4() { return &___connectionNative_4; }
	inline void set_connectionNative_4(RuntimeObject* value)
	{
		___connectionNative_4 = value;
		Il2CppCodeGenWriteBarrier((&___connectionNative_4), value);
	}

	inline static int32_t get_offset_of_s_Instance_8() { return static_cast<int32_t>(offsetof(PlayerConnection_t3081694049_StaticFields, ___s_Instance_8)); }
	inline PlayerConnection_t3081694049 * get_s_Instance_8() const { return ___s_Instance_8; }
	inline PlayerConnection_t3081694049 ** get_address_of_s_Instance_8() { return &___s_Instance_8; }
	inline void set_s_Instance_8(PlayerConnection_t3081694049 * value)
	{
		___s_Instance_8 = value;
		Il2CppCodeGenWriteBarrier((&___s_Instance_8), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // PLAYERCONNECTION_T3081694049_H
#ifndef PLAYABLEASSET_T3219022681_H
#define PLAYABLEASSET_T3219022681_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.Playables.PlayableAsset
struct  PlayableAsset_t3219022681  : public ScriptableObject_t2528358522
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // PLAYABLEASSET_T3219022681_H
#ifndef CREATEOUTPUTMETHOD_T2301811773_H
#define CREATEOUTPUTMETHOD_T2301811773_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.Playables.PlayableBinding/CreateOutputMethod
struct  CreateOutputMethod_t2301811773  : public MulticastDelegate_t
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // CREATEOUTPUTMETHOD_T2301811773_H
#ifndef REAPPLYDRIVENPROPERTIES_T1258266594_H
#define REAPPLYDRIVENPROPERTIES_T1258266594_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.RectTransform/ReapplyDrivenProperties
struct  ReapplyDrivenProperties_t1258266594  : public MulticastDelegate_t
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // REAPPLYDRIVENPROPERTIES_T1258266594_H
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
#ifndef RECTTRANSFORM_T3704657025_H
#define RECTTRANSFORM_T3704657025_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.RectTransform
struct  RectTransform_t3704657025  : public Transform_t3600365921
{
public:

public:
};

struct RectTransform_t3704657025_StaticFields
{
public:
	// UnityEngine.RectTransform/ReapplyDrivenProperties UnityEngine.RectTransform::reapplyDrivenProperties
	ReapplyDrivenProperties_t1258266594 * ___reapplyDrivenProperties_4;

public:
	inline static int32_t get_offset_of_reapplyDrivenProperties_4() { return static_cast<int32_t>(offsetof(RectTransform_t3704657025_StaticFields, ___reapplyDrivenProperties_4)); }
	inline ReapplyDrivenProperties_t1258266594 * get_reapplyDrivenProperties_4() const { return ___reapplyDrivenProperties_4; }
	inline ReapplyDrivenProperties_t1258266594 ** get_address_of_reapplyDrivenProperties_4() { return &___reapplyDrivenProperties_4; }
	inline void set_reapplyDrivenProperties_4(ReapplyDrivenProperties_t1258266594 * value)
	{
		___reapplyDrivenProperties_4 = value;
		Il2CppCodeGenWriteBarrier((&___reapplyDrivenProperties_4), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // RECTTRANSFORM_T3704657025_H





#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize2500 = { sizeof (YieldInstruction_t403091072), sizeof(YieldInstruction_t403091072_marshaled_pinvoke), 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize2501 = { sizeof (ReadOnlyAttribute_t3518714744), -1, 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize2502 = { sizeof (WriteOnlyAttribute_t1738907586), -1, 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize2503 = { sizeof (DeallocateOnJobCompletionAttribute_t3762612740), -1, 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize2504 = { sizeof (NativeFixedLengthAttribute_t3072952540), -1, 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize2505 = { sizeof (NativeMatchesParallelForLengthAttribute_t1813325102), -1, 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize2506 = { sizeof (NativeDisableParallelForRestrictionAttribute_t3768540096), -1, 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize2507 = { sizeof (NativeContainerAttribute_t212308715), -1, 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize2508 = { sizeof (NativeContainerIsReadOnlyAttribute_t4098664174), -1, 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize2509 = { sizeof (NativeContainerIsAtomicWriteOnlyAttribute_t4134969175), -1, 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize2510 = { sizeof (NativeContainerSupportsMinMaxWriteRestrictionAttribute_t3808117416), -1, 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize2511 = { sizeof (NativeContainerSupportsDeallocateOnJobCompletionAttribute_t1480492758), -1, 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize2512 = { sizeof (NativeContainerSupportsDeferredConvertListToArray_t4167123417), -1, 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize2513 = { sizeof (NativeSetThreadIndexAttribute_t1211267337), -1, 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize2514 = { sizeof (NativeContainerNeedsThreadIndexAttribute_t764917452), -1, 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize2515 = { sizeof (NativeDisableUnsafePtrRestrictionAttribute_t2582701661), -1, 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize2516 = { sizeof (NativeDisableContainerSafetyRestrictionAttribute_t708027756), -1, 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize2517 = { sizeof (NativeSetClassTypeToNullOnScheduleAttribute_t1234016338), -1, 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize2518 = { sizeof (CameraPlayable_t3330816414)+ sizeof (RuntimeObject), sizeof(CameraPlayable_t3330816414 ), 0, 0 };
extern const int32_t g_FieldOffsetTable2518[1] = 
{
	CameraPlayable_t3330816414::get_offset_of_m_Handle_0() + static_cast<int32_t>(sizeof(RuntimeObject)),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize2519 = { 0, -1, 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize2520 = { 0, -1, 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize2521 = { 0, -1, 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize2522 = { sizeof (MaterialEffectPlayable_t3995207978)+ sizeof (RuntimeObject), sizeof(MaterialEffectPlayable_t3995207978 ), 0, 0 };
extern const int32_t g_FieldOffsetTable2522[1] = 
{
	MaterialEffectPlayable_t3995207978::get_offset_of_m_Handle_0() + static_cast<int32_t>(sizeof(RuntimeObject)),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize2523 = { sizeof (Playable_t459825607)+ sizeof (RuntimeObject), sizeof(Playable_t459825607 ), sizeof(Playable_t459825607_StaticFields), 0 };
extern const int32_t g_FieldOffsetTable2523[2] = 
{
	Playable_t459825607::get_offset_of_m_Handle_0() + static_cast<int32_t>(sizeof(RuntimeObject)),
	Playable_t459825607_StaticFields::get_offset_of_m_NullPlayable_1(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize2524 = { 0, -1, 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize2525 = { sizeof (PlayableAsset_t3219022681), -1, 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize2526 = { sizeof (PlayableBehaviour_t4203540982), -1, 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize2527 = { sizeof (PlayableBinding_t354260709)+ sizeof (RuntimeObject), -1, sizeof(PlayableBinding_t354260709_StaticFields), 0 };
extern const int32_t g_FieldOffsetTable2527[6] = 
{
	PlayableBinding_t354260709::get_offset_of_m_StreamName_0() + static_cast<int32_t>(sizeof(RuntimeObject)),
	PlayableBinding_t354260709::get_offset_of_m_SourceObject_1() + static_cast<int32_t>(sizeof(RuntimeObject)),
	PlayableBinding_t354260709::get_offset_of_m_SourceBindingType_2() + static_cast<int32_t>(sizeof(RuntimeObject)),
	PlayableBinding_t354260709::get_offset_of_m_CreateOutputMethod_3() + static_cast<int32_t>(sizeof(RuntimeObject)),
	PlayableBinding_t354260709_StaticFields::get_offset_of_None_4(),
	PlayableBinding_t354260709_StaticFields::get_offset_of_DefaultDuration_5(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize2528 = { sizeof (CreateOutputMethod_t2301811773), sizeof(Il2CppMethodPointer), 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize2529 = { sizeof (PlayableGraph_t3515989261)+ sizeof (RuntimeObject), sizeof(PlayableGraph_t3515989261 ), 0, 0 };
extern const int32_t g_FieldOffsetTable2529[2] = 
{
	PlayableGraph_t3515989261::get_offset_of_m_Handle_0() + static_cast<int32_t>(sizeof(RuntimeObject)),
	PlayableGraph_t3515989261::get_offset_of_m_Version_1() + static_cast<int32_t>(sizeof(RuntimeObject)),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize2530 = { sizeof (PlayableHandle_t1095853803)+ sizeof (RuntimeObject), sizeof(PlayableHandle_t1095853803 ), 0, 0 };
extern const int32_t g_FieldOffsetTable2530[2] = 
{
	PlayableHandle_t1095853803::get_offset_of_m_Handle_0() + static_cast<int32_t>(sizeof(RuntimeObject)),
	PlayableHandle_t1095853803::get_offset_of_m_Version_1() + static_cast<int32_t>(sizeof(RuntimeObject)),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize2531 = { sizeof (PlayableOutputHandle_t4208053793)+ sizeof (RuntimeObject), sizeof(PlayableOutputHandle_t4208053793 ), 0, 0 };
extern const int32_t g_FieldOffsetTable2531[2] = 
{
	PlayableOutputHandle_t4208053793::get_offset_of_m_Handle_0() + static_cast<int32_t>(sizeof(RuntimeObject)),
	PlayableOutputHandle_t4208053793::get_offset_of_m_Version_1() + static_cast<int32_t>(sizeof(RuntimeObject)),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize2532 = { sizeof (PlayableOutput_t3179894105)+ sizeof (RuntimeObject), sizeof(PlayableOutput_t3179894105 ), sizeof(PlayableOutput_t3179894105_StaticFields), 0 };
extern const int32_t g_FieldOffsetTable2532[2] = 
{
	PlayableOutput_t3179894105::get_offset_of_m_Handle_0() + static_cast<int32_t>(sizeof(RuntimeObject)),
	PlayableOutput_t3179894105_StaticFields::get_offset_of_m_NullPlayableOutput_1(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize2533 = { sizeof (ScriptPlayableOutput_t2715692609)+ sizeof (RuntimeObject), sizeof(ScriptPlayableOutput_t2715692609 ), 0, 0 };
extern const int32_t g_FieldOffsetTable2533[1] = 
{
	ScriptPlayableOutput_t2715692609::get_offset_of_m_Handle_0() + static_cast<int32_t>(sizeof(RuntimeObject)),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize2534 = { sizeof (TextureMixerPlayable_t2398603962)+ sizeof (RuntimeObject), sizeof(TextureMixerPlayable_t2398603962 ), 0, 0 };
extern const int32_t g_FieldOffsetTable2534[1] = 
{
	TextureMixerPlayable_t2398603962::get_offset_of_m_Handle_0() + static_cast<int32_t>(sizeof(RuntimeObject)),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize2535 = { sizeof (TexturePlayableOutput_t648497447)+ sizeof (RuntimeObject), sizeof(TexturePlayableOutput_t648497447 ), 0, 0 };
extern const int32_t g_FieldOffsetTable2535[1] = 
{
	TexturePlayableOutput_t648497447::get_offset_of_m_Handle_0() + static_cast<int32_t>(sizeof(RuntimeObject)),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize2536 = { sizeof (DefaultValueAttribute_t2337225216), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable2536[1] = 
{
	DefaultValueAttribute_t2337225216::get_offset_of_DefaultValue_0(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize2537 = { sizeof (ExcludeFromDocsAttribute_t3592494112), -1, 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize2538 = { 0, -1, 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize2539 = { 0, -1, 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize2540 = { 0, -1, 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize2541 = { sizeof (Logger_t274032455), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable2541[3] = 
{
	Logger_t274032455::get_offset_of_U3ClogHandlerU3Ek__BackingField_0(),
	Logger_t274032455::get_offset_of_U3ClogEnabledU3Ek__BackingField_1(),
	Logger_t274032455::get_offset_of_U3CfilterLogTypeU3Ek__BackingField_2(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize2542 = { sizeof (MessageEventArgs_t1170575784), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable2542[2] = 
{
	MessageEventArgs_t1170575784::get_offset_of_playerId_0(),
	MessageEventArgs_t1170575784::get_offset_of_data_1(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize2543 = { 0, -1, 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize2544 = { sizeof (PlayerConnection_t3081694049), -1, sizeof(PlayerConnection_t3081694049_StaticFields), 0 };
extern const int32_t g_FieldOffsetTable2544[5] = 
{
	PlayerConnection_t3081694049_StaticFields::get_offset_of_connectionNative_4(),
	PlayerConnection_t3081694049::get_offset_of_m_PlayerEditorConnectionEvents_5(),
	PlayerConnection_t3081694049::get_offset_of_m_connectedPlayers_6(),
	PlayerConnection_t3081694049::get_offset_of_m_IsInitilized_7(),
	PlayerConnection_t3081694049_StaticFields::get_offset_of_s_Instance_8(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize2545 = { sizeof (U3CRegisterU3Ec__AnonStorey0_t2405595090), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable2545[1] = 
{
	U3CRegisterU3Ec__AnonStorey0_t2405595090::get_offset_of_messageId_0(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize2546 = { sizeof (U3CUnregisterU3Ec__AnonStorey1_t2528476601), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable2546[1] = 
{
	U3CUnregisterU3Ec__AnonStorey1_t2528476601::get_offset_of_messageId_0(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize2547 = { sizeof (U3CBlockUntilRecvMsgU3Ec__AnonStorey2_t2166869842), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable2547[1] = 
{
	U3CBlockUntilRecvMsgU3Ec__AnonStorey2_t2166869842::get_offset_of_msgReceived_0(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize2548 = { sizeof (PlayerEditorConnectionEvents_t3411787513), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable2548[3] = 
{
	PlayerEditorConnectionEvents_t3411787513::get_offset_of_messageTypeSubscribers_0(),
	PlayerEditorConnectionEvents_t3411787513::get_offset_of_connectionEvent_1(),
	PlayerEditorConnectionEvents_t3411787513::get_offset_of_disconnectionEvent_2(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize2549 = { sizeof (MessageEvent_t1491597365), -1, 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize2550 = { sizeof (ConnectionChangeEvent_t3251856151), -1, 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize2551 = { sizeof (MessageTypeSubscribers_t1684935770), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable2551[3] = 
{
	MessageTypeSubscribers_t1684935770::get_offset_of_m_messageTypeId_0(),
	MessageTypeSubscribers_t1684935770::get_offset_of_subscriberCount_1(),
	MessageTypeSubscribers_t1684935770::get_offset_of_messageCallback_2(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize2552 = { sizeof (U3CInvokeMessageIdSubscribersU3Ec__AnonStorey0_t907692441), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable2552[1] = 
{
	U3CInvokeMessageIdSubscribersU3Ec__AnonStorey0_t907692441::get_offset_of_messageId_0(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize2553 = { sizeof (U3CAddAndCreateU3Ec__AnonStorey1_t1136770903), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable2553[1] = 
{
	U3CAddAndCreateU3Ec__AnonStorey1_t1136770903::get_offset_of_messageId_0(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize2554 = { sizeof (U3CUnregisterManagedCallbackU3Ec__AnonStorey2_t1335960973), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable2554[1] = 
{
	U3CUnregisterManagedCallbackU3Ec__AnonStorey2_t1335960973::get_offset_of_messageId_0(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize2555 = { sizeof (CoreCameraValues_t3714484151)+ sizeof (RuntimeObject), sizeof(CoreCameraValues_t3714484151 ), 0, 0 };
extern const int32_t g_FieldOffsetTable2555[4] = 
{
	CoreCameraValues_t3714484151::get_offset_of_filterMode_0() + static_cast<int32_t>(sizeof(RuntimeObject)),
	CoreCameraValues_t3714484151::get_offset_of_cullingMask_1() + static_cast<int32_t>(sizeof(RuntimeObject)),
	CoreCameraValues_t3714484151::get_offset_of_guid_2() + static_cast<int32_t>(sizeof(RuntimeObject)),
	CoreCameraValues_t3714484151::get_offset_of_renderImmediateObjects_3() + static_cast<int32_t>(sizeof(RuntimeObject)),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize2556 = { sizeof (CameraProperties_t3304495522)+ sizeof (RuntimeObject), sizeof(CameraProperties_t3304495522 ), 0, 0 };
extern const int32_t g_FieldOffsetTable2556[30] = 
{
	CameraProperties_t3304495522::get_offset_of_screenRect_0() + static_cast<int32_t>(sizeof(RuntimeObject)),
	CameraProperties_t3304495522::get_offset_of_viewDir_1() + static_cast<int32_t>(sizeof(RuntimeObject)),
	CameraProperties_t3304495522::get_offset_of_projectionNear_2() + static_cast<int32_t>(sizeof(RuntimeObject)),
	CameraProperties_t3304495522::get_offset_of_projectionFar_3() + static_cast<int32_t>(sizeof(RuntimeObject)),
	CameraProperties_t3304495522::get_offset_of_cameraNear_4() + static_cast<int32_t>(sizeof(RuntimeObject)),
	CameraProperties_t3304495522::get_offset_of_cameraFar_5() + static_cast<int32_t>(sizeof(RuntimeObject)),
	CameraProperties_t3304495522::get_offset_of_cameraAspect_6() + static_cast<int32_t>(sizeof(RuntimeObject)),
	CameraProperties_t3304495522::get_offset_of_cameraToWorld_7() + static_cast<int32_t>(sizeof(RuntimeObject)),
	CameraProperties_t3304495522::get_offset_of_actualWorldToClip_8() + static_cast<int32_t>(sizeof(RuntimeObject)),
	CameraProperties_t3304495522::get_offset_of_cameraClipToWorld_9() + static_cast<int32_t>(sizeof(RuntimeObject)),
	CameraProperties_t3304495522::get_offset_of_cameraWorldToClip_10() + static_cast<int32_t>(sizeof(RuntimeObject)),
	CameraProperties_t3304495522::get_offset_of_implicitProjection_11() + static_cast<int32_t>(sizeof(RuntimeObject)),
	CameraProperties_t3304495522::get_offset_of_stereoWorldToClipLeft_12() + static_cast<int32_t>(sizeof(RuntimeObject)),
	CameraProperties_t3304495522::get_offset_of_stereoWorldToClipRight_13() + static_cast<int32_t>(sizeof(RuntimeObject)),
	CameraProperties_t3304495522::get_offset_of_worldToCamera_14() + static_cast<int32_t>(sizeof(RuntimeObject)),
	CameraProperties_t3304495522::get_offset_of_up_15() + static_cast<int32_t>(sizeof(RuntimeObject)),
	CameraProperties_t3304495522::get_offset_of_right_16() + static_cast<int32_t>(sizeof(RuntimeObject)),
	CameraProperties_t3304495522::get_offset_of_transformDirection_17() + static_cast<int32_t>(sizeof(RuntimeObject)),
	CameraProperties_t3304495522::get_offset_of_cameraEuler_18() + static_cast<int32_t>(sizeof(RuntimeObject)),
	CameraProperties_t3304495522::get_offset_of_velocity_19() + static_cast<int32_t>(sizeof(RuntimeObject)),
	CameraProperties_t3304495522::get_offset_of_farPlaneWorldSpaceLength_20() + static_cast<int32_t>(sizeof(RuntimeObject)),
	CameraProperties_t3304495522::get_offset_of_rendererCount_21() + static_cast<int32_t>(sizeof(RuntimeObject)),
	CameraProperties_t3304495522::get_offset_of__shadowCullPlanes_22() + static_cast<int32_t>(sizeof(RuntimeObject)),
	CameraProperties_t3304495522::get_offset_of__cameraCullPlanes_23() + static_cast<int32_t>(sizeof(RuntimeObject)),
	CameraProperties_t3304495522::get_offset_of_baseFarDistance_24() + static_cast<int32_t>(sizeof(RuntimeObject)),
	CameraProperties_t3304495522::get_offset_of_shadowCullCenter_25() + static_cast<int32_t>(sizeof(RuntimeObject)),
	CameraProperties_t3304495522::get_offset_of_layerCullDistances_26() + static_cast<int32_t>(sizeof(RuntimeObject)),
	CameraProperties_t3304495522::get_offset_of_layerCullSpherical_27() + static_cast<int32_t>(sizeof(RuntimeObject)),
	CameraProperties_t3304495522::get_offset_of_coreCameraValues_28() + static_cast<int32_t>(sizeof(RuntimeObject)),
	CameraProperties_t3304495522::get_offset_of_cameraType_29() + static_cast<int32_t>(sizeof(RuntimeObject)),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize2557 = { sizeof (U3C_shadowCullPlanesU3E__FixedBuffer2_t3967873427)+ sizeof (RuntimeObject), sizeof(U3C_shadowCullPlanesU3E__FixedBuffer2_t3967873427 ), 0, 0 };
extern const int32_t g_FieldOffsetTable2557[1] = 
{
	U3C_shadowCullPlanesU3E__FixedBuffer2_t3967873427::get_offset_of_FixedElementField_0() + static_cast<int32_t>(sizeof(RuntimeObject)),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize2558 = { sizeof (U3C_cameraCullPlanesU3E__FixedBuffer3_t3170447830)+ sizeof (RuntimeObject), sizeof(U3C_cameraCullPlanesU3E__FixedBuffer3_t3170447830 ), 0, 0 };
extern const int32_t g_FieldOffsetTable2558[1] = 
{
	U3C_cameraCullPlanesU3E__FixedBuffer3_t3170447830::get_offset_of_FixedElementField_0() + static_cast<int32_t>(sizeof(RuntimeObject)),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize2559 = { sizeof (U3ClayerCullDistancesU3E__FixedBuffer4_t4284714940)+ sizeof (RuntimeObject), sizeof(U3ClayerCullDistancesU3E__FixedBuffer4_t4284714940 ), 0, 0 };
extern const int32_t g_FieldOffsetTable2559[1] = 
{
	U3ClayerCullDistancesU3E__FixedBuffer4_t4284714940::get_offset_of_FixedElementField_0() + static_cast<int32_t>(sizeof(RuntimeObject)),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize2560 = { sizeof (CullFlag_t3106704848)+ sizeof (RuntimeObject), sizeof(int32_t), 0, 0 };
extern const int32_t g_FieldOffsetTable2560[8] = 
{
	CullFlag_t3106704848::get_offset_of_value___2() + static_cast<int32_t>(sizeof(RuntimeObject)),
	0,
	0,
	0,
	0,
	0,
	0,
	0,
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize2561 = { sizeof (ScriptableCullingParameters_t779110737)+ sizeof (RuntimeObject), sizeof(ScriptableCullingParameters_t779110737 ), 0, 0 };
extern const int32_t g_FieldOffsetTable2561[18] = 
{
	ScriptableCullingParameters_t779110737::get_offset_of_m_IsOrthographic_0() + static_cast<int32_t>(sizeof(RuntimeObject)),
	ScriptableCullingParameters_t779110737::get_offset_of_m_LodParameters_1() + static_cast<int32_t>(sizeof(RuntimeObject)),
	ScriptableCullingParameters_t779110737::get_offset_of_m_CullingPlanes_2() + static_cast<int32_t>(sizeof(RuntimeObject)),
	ScriptableCullingParameters_t779110737::get_offset_of_m_CullingPlaneCount_3() + static_cast<int32_t>(sizeof(RuntimeObject)),
	ScriptableCullingParameters_t779110737::get_offset_of_m_CullingMask_4() + static_cast<int32_t>(sizeof(RuntimeObject)),
	ScriptableCullingParameters_t779110737::get_offset_of_m_SceneMask_5() + static_cast<int32_t>(sizeof(RuntimeObject)),
	ScriptableCullingParameters_t779110737::get_offset_of_m_LayerFarCullDistances_6() + static_cast<int32_t>(sizeof(RuntimeObject)),
	ScriptableCullingParameters_t779110737::get_offset_of_m_LayerCull_7() + static_cast<int32_t>(sizeof(RuntimeObject)),
	ScriptableCullingParameters_t779110737::get_offset_of_m_CullingMatrix_8() + static_cast<int32_t>(sizeof(RuntimeObject)),
	ScriptableCullingParameters_t779110737::get_offset_of_m_Position_9() + static_cast<int32_t>(sizeof(RuntimeObject)),
	ScriptableCullingParameters_t779110737::get_offset_of_m_shadowDistance_10() + static_cast<int32_t>(sizeof(RuntimeObject)),
	ScriptableCullingParameters_t779110737::get_offset_of_m_CullingFlags_11() + static_cast<int32_t>(sizeof(RuntimeObject)),
	ScriptableCullingParameters_t779110737::get_offset_of_m_ReflectionProbeSortOptions_12() + static_cast<int32_t>(sizeof(RuntimeObject)),
	ScriptableCullingParameters_t779110737::get_offset_of_m_CameraProperties_13() + static_cast<int32_t>(sizeof(RuntimeObject)),
	ScriptableCullingParameters_t779110737::get_offset_of_cullStereoView_14() + static_cast<int32_t>(sizeof(RuntimeObject)),
	ScriptableCullingParameters_t779110737::get_offset_of_cullStereoProj_15() + static_cast<int32_t>(sizeof(RuntimeObject)),
	ScriptableCullingParameters_t779110737::get_offset_of_cullStereoSeparation_16() + static_cast<int32_t>(sizeof(RuntimeObject)),
	ScriptableCullingParameters_t779110737::get_offset_of_padding2_17() + static_cast<int32_t>(sizeof(RuntimeObject)),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize2562 = { sizeof (U3Cm_CullingPlanesU3E__FixedBuffer5_t3550792427)+ sizeof (RuntimeObject), sizeof(U3Cm_CullingPlanesU3E__FixedBuffer5_t3550792427 ), 0, 0 };
extern const int32_t g_FieldOffsetTable2562[1] = 
{
	U3Cm_CullingPlanesU3E__FixedBuffer5_t3550792427::get_offset_of_FixedElementField_0() + static_cast<int32_t>(sizeof(RuntimeObject)),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize2563 = { sizeof (U3Cm_LayerFarCullDistancesU3E__FixedBuffer6_t600784380)+ sizeof (RuntimeObject), sizeof(U3Cm_LayerFarCullDistancesU3E__FixedBuffer6_t600784380 ), 0, 0 };
extern const int32_t g_FieldOffsetTable2563[1] = 
{
	U3Cm_LayerFarCullDistancesU3E__FixedBuffer6_t600784380::get_offset_of_FixedElementField_0() + static_cast<int32_t>(sizeof(RuntimeObject)),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize2564 = { sizeof (DrawShadowsSettings_t3949492755)+ sizeof (RuntimeObject), sizeof(DrawShadowsSettings_t3949492755 ), 0, 0 };
extern const int32_t g_FieldOffsetTable2564[3] = 
{
	DrawShadowsSettings_t3949492755::get_offset_of__cullResults_0() + static_cast<int32_t>(sizeof(RuntimeObject)),
	DrawShadowsSettings_t3949492755::get_offset_of_lightIndex_1() + static_cast<int32_t>(sizeof(RuntimeObject)),
	DrawShadowsSettings_t3949492755::get_offset_of_splitData_2() + static_cast<int32_t>(sizeof(RuntimeObject)),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize2565 = { sizeof (FilterResults_t2595222798)+ sizeof (RuntimeObject), sizeof(FilterResults_t2595222798 ), 0, 0 };
extern const int32_t g_FieldOffsetTable2565[1] = 
{
	FilterResults_t2595222798::get_offset_of_m_CullResults_0() + static_cast<int32_t>(sizeof(RuntimeObject)),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize2566 = { 0, -1, 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize2567 = { 0, -1, 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize2568 = { sizeof (LODParameters_t4109493171)+ sizeof (RuntimeObject), sizeof(LODParameters_t4109493171 ), 0, 0 };
extern const int32_t g_FieldOffsetTable2568[5] = 
{
	LODParameters_t4109493171::get_offset_of_m_IsOrthographic_0() + static_cast<int32_t>(sizeof(RuntimeObject)),
	LODParameters_t4109493171::get_offset_of_m_CameraPosition_1() + static_cast<int32_t>(sizeof(RuntimeObject)),
	LODParameters_t4109493171::get_offset_of_m_FieldOfView_2() + static_cast<int32_t>(sizeof(RuntimeObject)),
	LODParameters_t4109493171::get_offset_of_m_OrthoSize_3() + static_cast<int32_t>(sizeof(RuntimeObject)),
	LODParameters_t4109493171::get_offset_of_m_CameraPixelHeight_4() + static_cast<int32_t>(sizeof(RuntimeObject)),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize2569 = { sizeof (ReflectionProbeSortOptions_t658301893)+ sizeof (RuntimeObject), sizeof(int32_t), 0, 0 };
extern const int32_t g_FieldOffsetTable2569[5] = 
{
	ReflectionProbeSortOptions_t658301893::get_offset_of_value___2() + static_cast<int32_t>(sizeof(RuntimeObject)),
	0,
	0,
	0,
	0,
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize2570 = { sizeof (RenderPipeline_t957695896), -1, sizeof(RenderPipeline_t957695896_StaticFields), 0 };
extern const int32_t g_FieldOffsetTable2570[2] = 
{
	RenderPipeline_t957695896_StaticFields::get_offset_of_beginFrameRendering_0(),
	RenderPipeline_t957695896::get_offset_of_U3CdisposedU3Ek__BackingField_1(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize2571 = { sizeof (RenderPipelineAsset_t533890058), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable2571[1] = 
{
	RenderPipelineAsset_t533890058::get_offset_of_m_CreatedPipelines_4(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize2572 = { sizeof (RenderPipelineManager_t4036911426), -1, sizeof(RenderPipelineManager_t4036911426_StaticFields), 0 };
extern const int32_t g_FieldOffsetTable2572[2] = 
{
	RenderPipelineManager_t4036911426_StaticFields::get_offset_of_s_CurrentPipelineAsset_0(),
	RenderPipelineManager_t4036911426_StaticFields::get_offset_of_U3CcurrentPipelineU3Ek__BackingField_1(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize2573 = { sizeof (ShadowSplitData_t2429460125)+ sizeof (RuntimeObject), sizeof(ShadowSplitData_t2429460125 ), 0, 0 };
extern const int32_t g_FieldOffsetTable2573[3] = 
{
	ShadowSplitData_t2429460125::get_offset_of_cullingPlaneCount_0() + static_cast<int32_t>(sizeof(RuntimeObject)),
	ShadowSplitData_t2429460125::get_offset_of__cullingPlanes_1() + static_cast<int32_t>(sizeof(RuntimeObject)),
	ShadowSplitData_t2429460125::get_offset_of_cullingSphere_2() + static_cast<int32_t>(sizeof(RuntimeObject)),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize2574 = { sizeof (U3C_cullingPlanesU3E__FixedBuffer7_t3172482031)+ sizeof (RuntimeObject), sizeof(U3C_cullingPlanesU3E__FixedBuffer7_t3172482031 ), 0, 0 };
extern const int32_t g_FieldOffsetTable2574[1] = 
{
	U3C_cullingPlanesU3E__FixedBuffer7_t3172482031::get_offset_of_FixedElementField_0() + static_cast<int32_t>(sizeof(RuntimeObject)),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize2575 = { sizeof (SupportedRenderingFeatures_t353898663), -1, sizeof(SupportedRenderingFeatures_t353898663_StaticFields), 0 };
extern const int32_t g_FieldOffsetTable2575[10] = 
{
	SupportedRenderingFeatures_t353898663_StaticFields::get_offset_of_s_Active_0(),
	SupportedRenderingFeatures_t353898663::get_offset_of_U3CreflectionProbeSupportFlagsU3Ek__BackingField_1(),
	SupportedRenderingFeatures_t353898663::get_offset_of_U3CdefaultMixedLightingModeU3Ek__BackingField_2(),
	SupportedRenderingFeatures_t353898663::get_offset_of_U3CsupportedMixedLightingModesU3Ek__BackingField_3(),
	SupportedRenderingFeatures_t353898663::get_offset_of_U3CsupportedLightmapBakeTypesU3Ek__BackingField_4(),
	SupportedRenderingFeatures_t353898663::get_offset_of_U3CsupportedLightmapsModesU3Ek__BackingField_5(),
	SupportedRenderingFeatures_t353898663::get_offset_of_U3CrendererSupportsLightProbeProxyVolumesU3Ek__BackingField_6(),
	SupportedRenderingFeatures_t353898663::get_offset_of_U3CrendererSupportsMotionVectorsU3Ek__BackingField_7(),
	SupportedRenderingFeatures_t353898663::get_offset_of_U3CrendererSupportsReceiveShadowsU3Ek__BackingField_8(),
	SupportedRenderingFeatures_t353898663::get_offset_of_U3CrendererSupportsReflectionProbesU3Ek__BackingField_9(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize2576 = { sizeof (ReflectionProbeSupportFlags_t3313277643)+ sizeof (RuntimeObject), sizeof(int32_t), 0, 0 };
extern const int32_t g_FieldOffsetTable2576[3] = 
{
	ReflectionProbeSupportFlags_t3313277643::get_offset_of_value___2() + static_cast<int32_t>(sizeof(RuntimeObject)),
	0,
	0,
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize2577 = { sizeof (LightmapMixedBakeMode_t4188935449)+ sizeof (RuntimeObject), sizeof(int32_t), 0, 0 };
extern const int32_t g_FieldOffsetTable2577[5] = 
{
	LightmapMixedBakeMode_t4188935449::get_offset_of_value___2() + static_cast<int32_t>(sizeof(RuntimeObject)),
	0,
	0,
	0,
	0,
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize2578 = { sizeof (VisibleLightFlags_t3157829005)+ sizeof (RuntimeObject), sizeof(int32_t), 0, 0 };
extern const int32_t g_FieldOffsetTable2578[4] = 
{
	VisibleLightFlags_t3157829005::get_offset_of_value___2() + static_cast<int32_t>(sizeof(RuntimeObject)),
	0,
	0,
	0,
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize2579 = { sizeof (Scene_t2348375561)+ sizeof (RuntimeObject), sizeof(Scene_t2348375561 ), 0, 0 };
extern const int32_t g_FieldOffsetTable2579[1] = 
{
	Scene_t2348375561::get_offset_of_m_Handle_0() + static_cast<int32_t>(sizeof(RuntimeObject)),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize2580 = { sizeof (SceneManager_t2787271929), -1, sizeof(SceneManager_t2787271929_StaticFields), 0 };
extern const int32_t g_FieldOffsetTable2580[3] = 
{
	SceneManager_t2787271929_StaticFields::get_offset_of_sceneLoaded_0(),
	SceneManager_t2787271929_StaticFields::get_offset_of_sceneUnloaded_1(),
	SceneManager_t2787271929_StaticFields::get_offset_of_activeSceneChanged_2(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize2581 = { sizeof (LoadSceneMode_t3251202195)+ sizeof (RuntimeObject), sizeof(int32_t), 0, 0 };
extern const int32_t g_FieldOffsetTable2581[3] = 
{
	LoadSceneMode_t3251202195::get_offset_of_value___2() + static_cast<int32_t>(sizeof(RuntimeObject)),
	0,
	0,
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize2582 = { sizeof (PreserveAttribute_t1583619344), -1, 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize2583 = { sizeof (MovedFromAttribute_t481952341), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable2583[2] = 
{
	MovedFromAttribute_t481952341::get_offset_of_U3CNamespaceU3Ek__BackingField_0(),
	MovedFromAttribute_t481952341::get_offset_of_U3CIsInDifferentAssemblyU3Ek__BackingField_1(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize2584 = { sizeof (FormerlySerializedAsAttribute_t2859083114), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable2584[1] = 
{
	FormerlySerializedAsAttribute_t2859083114::get_offset_of_m_oldName_0(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize2585 = { sizeof (TypeInferenceRules_t96689094)+ sizeof (RuntimeObject), sizeof(int32_t), 0, 0 };
extern const int32_t g_FieldOffsetTable2585[5] = 
{
	TypeInferenceRules_t96689094::get_offset_of_value___2() + static_cast<int32_t>(sizeof(RuntimeObject)),
	0,
	0,
	0,
	0,
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize2586 = { sizeof (TypeInferenceRuleAttribute_t254868554), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable2586[1] = 
{
	TypeInferenceRuleAttribute_t254868554::get_offset_of__rule_0(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize2587 = { sizeof (GenericStack_t1310059385), -1, 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize2588 = { sizeof (UnsafeUtility_t2812711650), -1, 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize2589 = { sizeof (NetFxCoreExtensions_t4089902045), -1, 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize2590 = { sizeof (DrivenTransformProperties_t3813433528)+ sizeof (RuntimeObject), sizeof(int32_t), 0, 0 };
extern const int32_t g_FieldOffsetTable2590[26] = 
{
	DrivenTransformProperties_t3813433528::get_offset_of_value___2() + static_cast<int32_t>(sizeof(RuntimeObject)),
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
	0,
	0,
	0,
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize2591 = { sizeof (DrivenRectTransformTracker_t2562230146)+ sizeof (RuntimeObject), sizeof(DrivenRectTransformTracker_t2562230146 ), 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize2592 = { sizeof (RectTransform_t3704657025), -1, sizeof(RectTransform_t3704657025_StaticFields), 0 };
extern const int32_t g_FieldOffsetTable2592[1] = 
{
	RectTransform_t3704657025_StaticFields::get_offset_of_reapplyDrivenProperties_4(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize2593 = { sizeof (Edge_t1530570602)+ sizeof (RuntimeObject), sizeof(int32_t), 0, 0 };
extern const int32_t g_FieldOffsetTable2593[5] = 
{
	Edge_t1530570602::get_offset_of_value___2() + static_cast<int32_t>(sizeof(RuntimeObject)),
	0,
	0,
	0,
	0,
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize2594 = { sizeof (Axis_t1856666072)+ sizeof (RuntimeObject), sizeof(int32_t), 0, 0 };
extern const int32_t g_FieldOffsetTable2594[3] = 
{
	Axis_t1856666072::get_offset_of_value___2() + static_cast<int32_t>(sizeof(RuntimeObject)),
	0,
	0,
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize2595 = { sizeof (ReapplyDrivenProperties_t1258266594), sizeof(Il2CppMethodPointer), 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize2596 = { sizeof (Transform_t3600365921), -1, 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize2597 = { sizeof (Enumerator_t3442430665), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable2597[2] = 
{
	Enumerator_t3442430665::get_offset_of_outer_0(),
	Enumerator_t3442430665::get_offset_of_currentIndex_1(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize2598 = { sizeof (SpriteBone_t303320096)+ sizeof (RuntimeObject), sizeof(SpriteBone_t303320096_marshaled_pinvoke), 0, 0 };
extern const int32_t g_FieldOffsetTable2598[5] = 
{
	SpriteBone_t303320096::get_offset_of_m_Name_0() + static_cast<int32_t>(sizeof(RuntimeObject)),
	SpriteBone_t303320096::get_offset_of_m_Position_1() + static_cast<int32_t>(sizeof(RuntimeObject)),
	SpriteBone_t303320096::get_offset_of_m_Rotation_2() + static_cast<int32_t>(sizeof(RuntimeObject)),
	SpriteBone_t303320096::get_offset_of_m_Length_3() + static_cast<int32_t>(sizeof(RuntimeObject)),
	SpriteBone_t303320096::get_offset_of_m_ParentId_4() + static_cast<int32_t>(sizeof(RuntimeObject)),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize2599 = { sizeof (DataUtility_t2196215967), -1, 0, 0 };
#ifdef __clang__
#pragma clang diagnostic pop
#endif
