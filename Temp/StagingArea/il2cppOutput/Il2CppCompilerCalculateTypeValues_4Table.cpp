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


// System.AsyncCallback
struct AsyncCallback_t3962456242;
// System.Boolean[]
struct BooleanU5BU5D_t2897418192;
// System.Byte
struct Byte_t1134296376;
// System.Byte[]
struct ByteU5BU5D_t4116647657;
// System.Char
struct Char_t3634460470;
// System.Char[]
struct CharU5BU5D_t3528271667;
// System.Collections.Generic.Dictionary`2<System.String,System.Resources.ResourceLocator>
struct Dictionary_2_t3509227106;
// System.Collections.Generic.Dictionary`2<System.String,System.Resources.ResourceSet>
struct Dictionary_2_t2613167486;
// System.Collections.Hashtable
struct Hashtable_t1853889766;
// System.Collections.IDictionary
struct IDictionary_t1363984059;
// System.DelegateData
struct DelegateData_t1677132599;
// System.Delegate[]
struct DelegateU5BU5D_t1703627840;
// System.Diagnostics.StackTrace[]
struct StackTraceU5BU5D_t1169129676;
// System.Globalization.CodePageDataItem
struct CodePageDataItem_t2285235057;
// System.Globalization.CultureInfo
struct CultureInfo_t4157843068;
// System.IAsyncResult
struct IAsyncResult_t767004451;
// System.IO.BinaryReader
struct BinaryReader_t2428077293;
// System.IO.UnmanagedMemoryStream
struct UnmanagedMemoryStream_t4234117669;
// System.Int16
struct Int16_t2552820387;
// System.Int32
struct Int32_t2950945753;
// System.Int32[]
struct Int32U5BU5D_t385246372;
// System.IntPtr[]
struct IntPtrU5BU5D_t4013366056;
// System.Reflection.Assembly
struct Assembly_t;
// System.Reflection.MemberInfo
struct MemberInfo_t;
// System.Reflection.MethodInfo
struct MethodInfo_t;
// System.Reflection.RuntimeAssembly
struct RuntimeAssembly_t1451753063;
// System.Resources.IResourceGroveler
struct IResourceGroveler_t2853541466;
// System.Resources.IResourceReader
struct IResourceReader_t1191025619;
// System.Resources.ResourceManager
struct ResourceManager_t4037989559;
// System.Resources.ResourceManager/CultureNameResourceSetPair
struct CultureNameResourceSetPair_t3305173715;
// System.Resources.ResourceManager/ResourceManagerMediator
struct ResourceManagerMediator_t1468959918;
// System.Resources.ResourceReader
struct ResourceReader_t3300492639;
// System.Runtime.Serialization.Formatters.Binary.BinaryFormatter
struct BinaryFormatter_t3197753202;
// System.Runtime.Serialization.SafeSerializationManager
struct SafeSerializationManager_t2481557153;
// System.Runtime.Serialization.SerializationInfo
struct SerializationInfo_t950877179;
// System.RuntimeType
struct RuntimeType_t3636489352;
// System.RuntimeType[]
struct RuntimeTypeU5BU5D_t236644441;
// System.SByte[]
struct SByteU5BU5D_t2651576203;
// System.String
struct String_t;
// System.Text.DecoderFallback
struct DecoderFallback_t3123823036;
// System.Text.DecoderFallbackBuffer
struct DecoderFallbackBuffer_t2402303981;
// System.Text.DecoderNLS
struct DecoderNLS_t637950881;
// System.Text.EncoderFallback
struct EncoderFallback_t1188251036;
// System.Text.EncoderFallbackBuffer
struct EncoderFallbackBuffer_t3523102303;
// System.Text.EncoderNLS
struct EncoderNLS_t449404832;
// System.Text.Encoding
struct Encoding_t1523322056;
// System.Text.EncodingProvider[]
struct EncodingProviderU5BU5D_t3953861767;
// System.Text.InternalEncoderBestFitFallback
struct InternalEncoderBestFitFallback_t3121776013;
// System.Text.StringBuilder
struct StringBuilder_t;
// System.Type
struct Type_t;
// System.UInt16
struct UInt16_t2177724958;
// System.Void
struct Void_t1185182177;

struct Exception_t_marshaled_com;
struct Exception_t_marshaled_pinvoke;



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
#ifndef BINDER_T2999457153_H
#define BINDER_T2999457153_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Reflection.Binder
struct  Binder_t2999457153  : public RuntimeObject
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // BINDER_T2999457153_H
#ifndef CUSTOMATTRIBUTEEXTENSIONS_T4268647790_H
#define CUSTOMATTRIBUTEEXTENSIONS_T4268647790_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Reflection.CustomAttributeExtensions
struct  CustomAttributeExtensions_t4268647790  : public RuntimeObject
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // CUSTOMATTRIBUTEEXTENSIONS_T4268647790_H
#ifndef MEMBERINFO_T_H
#define MEMBERINFO_T_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Reflection.MemberInfo
struct  MemberInfo_t  : public RuntimeObject
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // MEMBERINFO_T_H
#ifndef MISSING_T508514592_H
#define MISSING_T508514592_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Reflection.Missing
struct  Missing_t508514592  : public RuntimeObject
{
public:

public:
};

struct Missing_t508514592_StaticFields
{
public:
	// System.Reflection.Missing System.Reflection.Missing::Value
	Missing_t508514592 * ___Value_0;

public:
	inline static int32_t get_offset_of_Value_0() { return static_cast<int32_t>(offsetof(Missing_t508514592_StaticFields, ___Value_0)); }
	inline Missing_t508514592 * get_Value_0() const { return ___Value_0; }
	inline Missing_t508514592 ** get_address_of_Value_0() { return &___Value_0; }
	inline void set_Value_0(Missing_t508514592 * value)
	{
		___Value_0 = value;
		Il2CppCodeGenWriteBarrier((&___Value_0), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // MISSING_T508514592_H
#ifndef POINTER_T2088917139_H
#define POINTER_T2088917139_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Reflection.Pointer
struct  Pointer_t2088917139  : public RuntimeObject
{
public:
	// System.Void* System.Reflection.Pointer::_ptr
	void* ____ptr_0;
	// System.RuntimeType System.Reflection.Pointer::_ptrType
	RuntimeType_t3636489352 * ____ptrType_1;

public:
	inline static int32_t get_offset_of__ptr_0() { return static_cast<int32_t>(offsetof(Pointer_t2088917139, ____ptr_0)); }
	inline void* get__ptr_0() const { return ____ptr_0; }
	inline void** get_address_of__ptr_0() { return &____ptr_0; }
	inline void set__ptr_0(void* value)
	{
		____ptr_0 = value;
	}

	inline static int32_t get_offset_of__ptrType_1() { return static_cast<int32_t>(offsetof(Pointer_t2088917139, ____ptrType_1)); }
	inline RuntimeType_t3636489352 * get__ptrType_1() const { return ____ptrType_1; }
	inline RuntimeType_t3636489352 ** get_address_of__ptrType_1() { return &____ptrType_1; }
	inline void set__ptrType_1(RuntimeType_t3636489352 * value)
	{
		____ptrType_1 = value;
		Il2CppCodeGenWriteBarrier((&____ptrType_1), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // POINTER_T2088917139_H
#ifndef FASTRESOURCECOMPARER_T2718874915_H
#define FASTRESOURCECOMPARER_T2718874915_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Resources.FastResourceComparer
struct  FastResourceComparer_t2718874915  : public RuntimeObject
{
public:

public:
};

struct FastResourceComparer_t2718874915_StaticFields
{
public:
	// System.Resources.FastResourceComparer System.Resources.FastResourceComparer::Default
	FastResourceComparer_t2718874915 * ___Default_0;

public:
	inline static int32_t get_offset_of_Default_0() { return static_cast<int32_t>(offsetof(FastResourceComparer_t2718874915_StaticFields, ___Default_0)); }
	inline FastResourceComparer_t2718874915 * get_Default_0() const { return ___Default_0; }
	inline FastResourceComparer_t2718874915 ** get_address_of_Default_0() { return &___Default_0; }
	inline void set_Default_0(FastResourceComparer_t2718874915 * value)
	{
		___Default_0 = value;
		Il2CppCodeGenWriteBarrier((&___Default_0), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // FASTRESOURCECOMPARER_T2718874915_H
#ifndef FILEBASEDRESOURCEGROVELER_T1088115704_H
#define FILEBASEDRESOURCEGROVELER_T1088115704_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Resources.FileBasedResourceGroveler
struct  FileBasedResourceGroveler_t1088115704  : public RuntimeObject
{
public:
	// System.Resources.ResourceManager/ResourceManagerMediator System.Resources.FileBasedResourceGroveler::_mediator
	ResourceManagerMediator_t1468959918 * ____mediator_0;

public:
	inline static int32_t get_offset_of__mediator_0() { return static_cast<int32_t>(offsetof(FileBasedResourceGroveler_t1088115704, ____mediator_0)); }
	inline ResourceManagerMediator_t1468959918 * get__mediator_0() const { return ____mediator_0; }
	inline ResourceManagerMediator_t1468959918 ** get_address_of__mediator_0() { return &____mediator_0; }
	inline void set__mediator_0(ResourceManagerMediator_t1468959918 * value)
	{
		____mediator_0 = value;
		Il2CppCodeGenWriteBarrier((&____mediator_0), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // FILEBASEDRESOURCEGROVELER_T1088115704_H
#ifndef MANIFESTBASEDRESOURCEGROVELER_T2768300725_H
#define MANIFESTBASEDRESOURCEGROVELER_T2768300725_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Resources.ManifestBasedResourceGroveler
struct  ManifestBasedResourceGroveler_t2768300725  : public RuntimeObject
{
public:
	// System.Resources.ResourceManager/ResourceManagerMediator System.Resources.ManifestBasedResourceGroveler::_mediator
	ResourceManagerMediator_t1468959918 * ____mediator_0;

public:
	inline static int32_t get_offset_of__mediator_0() { return static_cast<int32_t>(offsetof(ManifestBasedResourceGroveler_t2768300725, ____mediator_0)); }
	inline ResourceManagerMediator_t1468959918 * get__mediator_0() const { return ____mediator_0; }
	inline ResourceManagerMediator_t1468959918 ** get_address_of__mediator_0() { return &____mediator_0; }
	inline void set__mediator_0(ResourceManagerMediator_t1468959918 * value)
	{
		____mediator_0 = value;
		Il2CppCodeGenWriteBarrier((&____mediator_0), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // MANIFESTBASEDRESOURCEGROVELER_T2768300725_H
#ifndef CULTURENAMERESOURCESETPAIR_T3305173715_H
#define CULTURENAMERESOURCESETPAIR_T3305173715_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Resources.ResourceManager/CultureNameResourceSetPair
struct  CultureNameResourceSetPair_t3305173715  : public RuntimeObject
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // CULTURENAMERESOURCESETPAIR_T3305173715_H
#ifndef RESOURCEMANAGERMEDIATOR_T1468959918_H
#define RESOURCEMANAGERMEDIATOR_T1468959918_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Resources.ResourceManager/ResourceManagerMediator
struct  ResourceManagerMediator_t1468959918  : public RuntimeObject
{
public:
	// System.Resources.ResourceManager System.Resources.ResourceManager/ResourceManagerMediator::_rm
	ResourceManager_t4037989559 * ____rm_0;

public:
	inline static int32_t get_offset_of__rm_0() { return static_cast<int32_t>(offsetof(ResourceManagerMediator_t1468959918, ____rm_0)); }
	inline ResourceManager_t4037989559 * get__rm_0() const { return ____rm_0; }
	inline ResourceManager_t4037989559 ** get_address_of__rm_0() { return &____rm_0; }
	inline void set__rm_0(ResourceManager_t4037989559 * value)
	{
		____rm_0 = value;
		Il2CppCodeGenWriteBarrier((&____rm_0), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // RESOURCEMANAGERMEDIATOR_T1468959918_H
#ifndef RESOURCEREADER_T3300492639_H
#define RESOURCEREADER_T3300492639_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Resources.ResourceReader
struct  ResourceReader_t3300492639  : public RuntimeObject
{
public:
	// System.IO.BinaryReader System.Resources.ResourceReader::_store
	BinaryReader_t2428077293 * ____store_0;
	// System.Collections.Generic.Dictionary`2<System.String,System.Resources.ResourceLocator> System.Resources.ResourceReader::_resCache
	Dictionary_2_t3509227106 * ____resCache_1;
	// System.Int64 System.Resources.ResourceReader::_nameSectionOffset
	int64_t ____nameSectionOffset_2;
	// System.Int64 System.Resources.ResourceReader::_dataSectionOffset
	int64_t ____dataSectionOffset_3;
	// System.Int32[] System.Resources.ResourceReader::_nameHashes
	Int32U5BU5D_t385246372* ____nameHashes_4;
	// System.Int32* System.Resources.ResourceReader::_nameHashesPtr
	int32_t* ____nameHashesPtr_5;
	// System.Int32[] System.Resources.ResourceReader::_namePositions
	Int32U5BU5D_t385246372* ____namePositions_6;
	// System.Int32* System.Resources.ResourceReader::_namePositionsPtr
	int32_t* ____namePositionsPtr_7;
	// System.RuntimeType[] System.Resources.ResourceReader::_typeTable
	RuntimeTypeU5BU5D_t236644441* ____typeTable_8;
	// System.Int32[] System.Resources.ResourceReader::_typeNamePositions
	Int32U5BU5D_t385246372* ____typeNamePositions_9;
	// System.Runtime.Serialization.Formatters.Binary.BinaryFormatter System.Resources.ResourceReader::_objFormatter
	BinaryFormatter_t3197753202 * ____objFormatter_10;
	// System.Int32 System.Resources.ResourceReader::_numResources
	int32_t ____numResources_11;
	// System.IO.UnmanagedMemoryStream System.Resources.ResourceReader::_ums
	UnmanagedMemoryStream_t4234117669 * ____ums_12;
	// System.Int32 System.Resources.ResourceReader::_version
	int32_t ____version_13;

public:
	inline static int32_t get_offset_of__store_0() { return static_cast<int32_t>(offsetof(ResourceReader_t3300492639, ____store_0)); }
	inline BinaryReader_t2428077293 * get__store_0() const { return ____store_0; }
	inline BinaryReader_t2428077293 ** get_address_of__store_0() { return &____store_0; }
	inline void set__store_0(BinaryReader_t2428077293 * value)
	{
		____store_0 = value;
		Il2CppCodeGenWriteBarrier((&____store_0), value);
	}

	inline static int32_t get_offset_of__resCache_1() { return static_cast<int32_t>(offsetof(ResourceReader_t3300492639, ____resCache_1)); }
	inline Dictionary_2_t3509227106 * get__resCache_1() const { return ____resCache_1; }
	inline Dictionary_2_t3509227106 ** get_address_of__resCache_1() { return &____resCache_1; }
	inline void set__resCache_1(Dictionary_2_t3509227106 * value)
	{
		____resCache_1 = value;
		Il2CppCodeGenWriteBarrier((&____resCache_1), value);
	}

	inline static int32_t get_offset_of__nameSectionOffset_2() { return static_cast<int32_t>(offsetof(ResourceReader_t3300492639, ____nameSectionOffset_2)); }
	inline int64_t get__nameSectionOffset_2() const { return ____nameSectionOffset_2; }
	inline int64_t* get_address_of__nameSectionOffset_2() { return &____nameSectionOffset_2; }
	inline void set__nameSectionOffset_2(int64_t value)
	{
		____nameSectionOffset_2 = value;
	}

	inline static int32_t get_offset_of__dataSectionOffset_3() { return static_cast<int32_t>(offsetof(ResourceReader_t3300492639, ____dataSectionOffset_3)); }
	inline int64_t get__dataSectionOffset_3() const { return ____dataSectionOffset_3; }
	inline int64_t* get_address_of__dataSectionOffset_3() { return &____dataSectionOffset_3; }
	inline void set__dataSectionOffset_3(int64_t value)
	{
		____dataSectionOffset_3 = value;
	}

	inline static int32_t get_offset_of__nameHashes_4() { return static_cast<int32_t>(offsetof(ResourceReader_t3300492639, ____nameHashes_4)); }
	inline Int32U5BU5D_t385246372* get__nameHashes_4() const { return ____nameHashes_4; }
	inline Int32U5BU5D_t385246372** get_address_of__nameHashes_4() { return &____nameHashes_4; }
	inline void set__nameHashes_4(Int32U5BU5D_t385246372* value)
	{
		____nameHashes_4 = value;
		Il2CppCodeGenWriteBarrier((&____nameHashes_4), value);
	}

	inline static int32_t get_offset_of__nameHashesPtr_5() { return static_cast<int32_t>(offsetof(ResourceReader_t3300492639, ____nameHashesPtr_5)); }
	inline int32_t* get__nameHashesPtr_5() const { return ____nameHashesPtr_5; }
	inline int32_t** get_address_of__nameHashesPtr_5() { return &____nameHashesPtr_5; }
	inline void set__nameHashesPtr_5(int32_t* value)
	{
		____nameHashesPtr_5 = value;
	}

	inline static int32_t get_offset_of__namePositions_6() { return static_cast<int32_t>(offsetof(ResourceReader_t3300492639, ____namePositions_6)); }
	inline Int32U5BU5D_t385246372* get__namePositions_6() const { return ____namePositions_6; }
	inline Int32U5BU5D_t385246372** get_address_of__namePositions_6() { return &____namePositions_6; }
	inline void set__namePositions_6(Int32U5BU5D_t385246372* value)
	{
		____namePositions_6 = value;
		Il2CppCodeGenWriteBarrier((&____namePositions_6), value);
	}

	inline static int32_t get_offset_of__namePositionsPtr_7() { return static_cast<int32_t>(offsetof(ResourceReader_t3300492639, ____namePositionsPtr_7)); }
	inline int32_t* get__namePositionsPtr_7() const { return ____namePositionsPtr_7; }
	inline int32_t** get_address_of__namePositionsPtr_7() { return &____namePositionsPtr_7; }
	inline void set__namePositionsPtr_7(int32_t* value)
	{
		____namePositionsPtr_7 = value;
	}

	inline static int32_t get_offset_of__typeTable_8() { return static_cast<int32_t>(offsetof(ResourceReader_t3300492639, ____typeTable_8)); }
	inline RuntimeTypeU5BU5D_t236644441* get__typeTable_8() const { return ____typeTable_8; }
	inline RuntimeTypeU5BU5D_t236644441** get_address_of__typeTable_8() { return &____typeTable_8; }
	inline void set__typeTable_8(RuntimeTypeU5BU5D_t236644441* value)
	{
		____typeTable_8 = value;
		Il2CppCodeGenWriteBarrier((&____typeTable_8), value);
	}

	inline static int32_t get_offset_of__typeNamePositions_9() { return static_cast<int32_t>(offsetof(ResourceReader_t3300492639, ____typeNamePositions_9)); }
	inline Int32U5BU5D_t385246372* get__typeNamePositions_9() const { return ____typeNamePositions_9; }
	inline Int32U5BU5D_t385246372** get_address_of__typeNamePositions_9() { return &____typeNamePositions_9; }
	inline void set__typeNamePositions_9(Int32U5BU5D_t385246372* value)
	{
		____typeNamePositions_9 = value;
		Il2CppCodeGenWriteBarrier((&____typeNamePositions_9), value);
	}

	inline static int32_t get_offset_of__objFormatter_10() { return static_cast<int32_t>(offsetof(ResourceReader_t3300492639, ____objFormatter_10)); }
	inline BinaryFormatter_t3197753202 * get__objFormatter_10() const { return ____objFormatter_10; }
	inline BinaryFormatter_t3197753202 ** get_address_of__objFormatter_10() { return &____objFormatter_10; }
	inline void set__objFormatter_10(BinaryFormatter_t3197753202 * value)
	{
		____objFormatter_10 = value;
		Il2CppCodeGenWriteBarrier((&____objFormatter_10), value);
	}

	inline static int32_t get_offset_of__numResources_11() { return static_cast<int32_t>(offsetof(ResourceReader_t3300492639, ____numResources_11)); }
	inline int32_t get__numResources_11() const { return ____numResources_11; }
	inline int32_t* get_address_of__numResources_11() { return &____numResources_11; }
	inline void set__numResources_11(int32_t value)
	{
		____numResources_11 = value;
	}

	inline static int32_t get_offset_of__ums_12() { return static_cast<int32_t>(offsetof(ResourceReader_t3300492639, ____ums_12)); }
	inline UnmanagedMemoryStream_t4234117669 * get__ums_12() const { return ____ums_12; }
	inline UnmanagedMemoryStream_t4234117669 ** get_address_of__ums_12() { return &____ums_12; }
	inline void set__ums_12(UnmanagedMemoryStream_t4234117669 * value)
	{
		____ums_12 = value;
		Il2CppCodeGenWriteBarrier((&____ums_12), value);
	}

	inline static int32_t get_offset_of__version_13() { return static_cast<int32_t>(offsetof(ResourceReader_t3300492639, ____version_13)); }
	inline int32_t get__version_13() const { return ____version_13; }
	inline int32_t* get_address_of__version_13() { return &____version_13; }
	inline void set__version_13(int32_t value)
	{
		____version_13 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // RESOURCEREADER_T3300492639_H
#ifndef RESOURCEENUMERATOR_T2106512554_H
#define RESOURCEENUMERATOR_T2106512554_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Resources.ResourceReader/ResourceEnumerator
struct  ResourceEnumerator_t2106512554  : public RuntimeObject
{
public:
	// System.Resources.ResourceReader System.Resources.ResourceReader/ResourceEnumerator::_reader
	ResourceReader_t3300492639 * ____reader_0;
	// System.Boolean System.Resources.ResourceReader/ResourceEnumerator::_currentIsValid
	bool ____currentIsValid_1;
	// System.Int32 System.Resources.ResourceReader/ResourceEnumerator::_currentName
	int32_t ____currentName_2;
	// System.Int32 System.Resources.ResourceReader/ResourceEnumerator::_dataPosition
	int32_t ____dataPosition_3;

public:
	inline static int32_t get_offset_of__reader_0() { return static_cast<int32_t>(offsetof(ResourceEnumerator_t2106512554, ____reader_0)); }
	inline ResourceReader_t3300492639 * get__reader_0() const { return ____reader_0; }
	inline ResourceReader_t3300492639 ** get_address_of__reader_0() { return &____reader_0; }
	inline void set__reader_0(ResourceReader_t3300492639 * value)
	{
		____reader_0 = value;
		Il2CppCodeGenWriteBarrier((&____reader_0), value);
	}

	inline static int32_t get_offset_of__currentIsValid_1() { return static_cast<int32_t>(offsetof(ResourceEnumerator_t2106512554, ____currentIsValid_1)); }
	inline bool get__currentIsValid_1() const { return ____currentIsValid_1; }
	inline bool* get_address_of__currentIsValid_1() { return &____currentIsValid_1; }
	inline void set__currentIsValid_1(bool value)
	{
		____currentIsValid_1 = value;
	}

	inline static int32_t get_offset_of__currentName_2() { return static_cast<int32_t>(offsetof(ResourceEnumerator_t2106512554, ____currentName_2)); }
	inline int32_t get__currentName_2() const { return ____currentName_2; }
	inline int32_t* get_address_of__currentName_2() { return &____currentName_2; }
	inline void set__currentName_2(int32_t value)
	{
		____currentName_2 = value;
	}

	inline static int32_t get_offset_of__dataPosition_3() { return static_cast<int32_t>(offsetof(ResourceEnumerator_t2106512554, ____dataPosition_3)); }
	inline int32_t get__dataPosition_3() const { return ____dataPosition_3; }
	inline int32_t* get_address_of__dataPosition_3() { return &____dataPosition_3; }
	inline void set__dataPosition_3(int32_t value)
	{
		____dataPosition_3 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // RESOURCEENUMERATOR_T2106512554_H
#ifndef RESOURCESET_T2827911187_H
#define RESOURCESET_T2827911187_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Resources.ResourceSet
struct  ResourceSet_t2827911187  : public RuntimeObject
{
public:
	// System.Resources.IResourceReader System.Resources.ResourceSet::Reader
	RuntimeObject* ___Reader_0;
	// System.Collections.Hashtable System.Resources.ResourceSet::Table
	Hashtable_t1853889766 * ___Table_1;
	// System.Collections.Hashtable System.Resources.ResourceSet::_caseInsensitiveTable
	Hashtable_t1853889766 * ____caseInsensitiveTable_2;

public:
	inline static int32_t get_offset_of_Reader_0() { return static_cast<int32_t>(offsetof(ResourceSet_t2827911187, ___Reader_0)); }
	inline RuntimeObject* get_Reader_0() const { return ___Reader_0; }
	inline RuntimeObject** get_address_of_Reader_0() { return &___Reader_0; }
	inline void set_Reader_0(RuntimeObject* value)
	{
		___Reader_0 = value;
		Il2CppCodeGenWriteBarrier((&___Reader_0), value);
	}

	inline static int32_t get_offset_of_Table_1() { return static_cast<int32_t>(offsetof(ResourceSet_t2827911187, ___Table_1)); }
	inline Hashtable_t1853889766 * get_Table_1() const { return ___Table_1; }
	inline Hashtable_t1853889766 ** get_address_of_Table_1() { return &___Table_1; }
	inline void set_Table_1(Hashtable_t1853889766 * value)
	{
		___Table_1 = value;
		Il2CppCodeGenWriteBarrier((&___Table_1), value);
	}

	inline static int32_t get_offset_of__caseInsensitiveTable_2() { return static_cast<int32_t>(offsetof(ResourceSet_t2827911187, ____caseInsensitiveTable_2)); }
	inline Hashtable_t1853889766 * get__caseInsensitiveTable_2() const { return ____caseInsensitiveTable_2; }
	inline Hashtable_t1853889766 ** get_address_of__caseInsensitiveTable_2() { return &____caseInsensitiveTable_2; }
	inline void set__caseInsensitiveTable_2(Hashtable_t1853889766 * value)
	{
		____caseInsensitiveTable_2 = value;
		Il2CppCodeGenWriteBarrier((&____caseInsensitiveTable_2), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // RESOURCESET_T2827911187_H
#ifndef DECODER_T2204182725_H
#define DECODER_T2204182725_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Text.Decoder
struct  Decoder_t2204182725  : public RuntimeObject
{
public:
	// System.Text.DecoderFallback System.Text.Decoder::m_fallback
	DecoderFallback_t3123823036 * ___m_fallback_0;
	// System.Text.DecoderFallbackBuffer System.Text.Decoder::m_fallbackBuffer
	DecoderFallbackBuffer_t2402303981 * ___m_fallbackBuffer_1;

public:
	inline static int32_t get_offset_of_m_fallback_0() { return static_cast<int32_t>(offsetof(Decoder_t2204182725, ___m_fallback_0)); }
	inline DecoderFallback_t3123823036 * get_m_fallback_0() const { return ___m_fallback_0; }
	inline DecoderFallback_t3123823036 ** get_address_of_m_fallback_0() { return &___m_fallback_0; }
	inline void set_m_fallback_0(DecoderFallback_t3123823036 * value)
	{
		___m_fallback_0 = value;
		Il2CppCodeGenWriteBarrier((&___m_fallback_0), value);
	}

	inline static int32_t get_offset_of_m_fallbackBuffer_1() { return static_cast<int32_t>(offsetof(Decoder_t2204182725, ___m_fallbackBuffer_1)); }
	inline DecoderFallbackBuffer_t2402303981 * get_m_fallbackBuffer_1() const { return ___m_fallbackBuffer_1; }
	inline DecoderFallbackBuffer_t2402303981 ** get_address_of_m_fallbackBuffer_1() { return &___m_fallbackBuffer_1; }
	inline void set_m_fallbackBuffer_1(DecoderFallbackBuffer_t2402303981 * value)
	{
		___m_fallbackBuffer_1 = value;
		Il2CppCodeGenWriteBarrier((&___m_fallbackBuffer_1), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // DECODER_T2204182725_H
#ifndef DECODERFALLBACK_T3123823036_H
#define DECODERFALLBACK_T3123823036_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Text.DecoderFallback
struct  DecoderFallback_t3123823036  : public RuntimeObject
{
public:
	// System.Boolean System.Text.DecoderFallback::bIsMicrosoftBestFitFallback
	bool ___bIsMicrosoftBestFitFallback_0;

public:
	inline static int32_t get_offset_of_bIsMicrosoftBestFitFallback_0() { return static_cast<int32_t>(offsetof(DecoderFallback_t3123823036, ___bIsMicrosoftBestFitFallback_0)); }
	inline bool get_bIsMicrosoftBestFitFallback_0() const { return ___bIsMicrosoftBestFitFallback_0; }
	inline bool* get_address_of_bIsMicrosoftBestFitFallback_0() { return &___bIsMicrosoftBestFitFallback_0; }
	inline void set_bIsMicrosoftBestFitFallback_0(bool value)
	{
		___bIsMicrosoftBestFitFallback_0 = value;
	}
};

struct DecoderFallback_t3123823036_StaticFields
{
public:
	// System.Text.DecoderFallback modreq(System.Runtime.CompilerServices.IsVolatile) System.Text.DecoderFallback::replacementFallback
	DecoderFallback_t3123823036 * ___replacementFallback_1;
	// System.Text.DecoderFallback modreq(System.Runtime.CompilerServices.IsVolatile) System.Text.DecoderFallback::exceptionFallback
	DecoderFallback_t3123823036 * ___exceptionFallback_2;
	// System.Object System.Text.DecoderFallback::s_InternalSyncObject
	RuntimeObject * ___s_InternalSyncObject_3;

public:
	inline static int32_t get_offset_of_replacementFallback_1() { return static_cast<int32_t>(offsetof(DecoderFallback_t3123823036_StaticFields, ___replacementFallback_1)); }
	inline DecoderFallback_t3123823036 * get_replacementFallback_1() const { return ___replacementFallback_1; }
	inline DecoderFallback_t3123823036 ** get_address_of_replacementFallback_1() { return &___replacementFallback_1; }
	inline void set_replacementFallback_1(DecoderFallback_t3123823036 * value)
	{
		___replacementFallback_1 = value;
		Il2CppCodeGenWriteBarrier((&___replacementFallback_1), value);
	}

	inline static int32_t get_offset_of_exceptionFallback_2() { return static_cast<int32_t>(offsetof(DecoderFallback_t3123823036_StaticFields, ___exceptionFallback_2)); }
	inline DecoderFallback_t3123823036 * get_exceptionFallback_2() const { return ___exceptionFallback_2; }
	inline DecoderFallback_t3123823036 ** get_address_of_exceptionFallback_2() { return &___exceptionFallback_2; }
	inline void set_exceptionFallback_2(DecoderFallback_t3123823036 * value)
	{
		___exceptionFallback_2 = value;
		Il2CppCodeGenWriteBarrier((&___exceptionFallback_2), value);
	}

	inline static int32_t get_offset_of_s_InternalSyncObject_3() { return static_cast<int32_t>(offsetof(DecoderFallback_t3123823036_StaticFields, ___s_InternalSyncObject_3)); }
	inline RuntimeObject * get_s_InternalSyncObject_3() const { return ___s_InternalSyncObject_3; }
	inline RuntimeObject ** get_address_of_s_InternalSyncObject_3() { return &___s_InternalSyncObject_3; }
	inline void set_s_InternalSyncObject_3(RuntimeObject * value)
	{
		___s_InternalSyncObject_3 = value;
		Il2CppCodeGenWriteBarrier((&___s_InternalSyncObject_3), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // DECODERFALLBACK_T3123823036_H
#ifndef DECODERFALLBACKBUFFER_T2402303981_H
#define DECODERFALLBACKBUFFER_T2402303981_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Text.DecoderFallbackBuffer
struct  DecoderFallbackBuffer_t2402303981  : public RuntimeObject
{
public:
	// System.Byte* System.Text.DecoderFallbackBuffer::byteStart
	uint8_t* ___byteStart_0;
	// System.Char* System.Text.DecoderFallbackBuffer::charEnd
	Il2CppChar* ___charEnd_1;

public:
	inline static int32_t get_offset_of_byteStart_0() { return static_cast<int32_t>(offsetof(DecoderFallbackBuffer_t2402303981, ___byteStart_0)); }
	inline uint8_t* get_byteStart_0() const { return ___byteStart_0; }
	inline uint8_t** get_address_of_byteStart_0() { return &___byteStart_0; }
	inline void set_byteStart_0(uint8_t* value)
	{
		___byteStart_0 = value;
	}

	inline static int32_t get_offset_of_charEnd_1() { return static_cast<int32_t>(offsetof(DecoderFallbackBuffer_t2402303981, ___charEnd_1)); }
	inline Il2CppChar* get_charEnd_1() const { return ___charEnd_1; }
	inline Il2CppChar** get_address_of_charEnd_1() { return &___charEnd_1; }
	inline void set_charEnd_1(Il2CppChar* value)
	{
		___charEnd_1 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // DECODERFALLBACKBUFFER_T2402303981_H
#ifndef ENCODER_T2198218980_H
#define ENCODER_T2198218980_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Text.Encoder
struct  Encoder_t2198218980  : public RuntimeObject
{
public:
	// System.Text.EncoderFallback System.Text.Encoder::m_fallback
	EncoderFallback_t1188251036 * ___m_fallback_0;
	// System.Text.EncoderFallbackBuffer System.Text.Encoder::m_fallbackBuffer
	EncoderFallbackBuffer_t3523102303 * ___m_fallbackBuffer_1;

public:
	inline static int32_t get_offset_of_m_fallback_0() { return static_cast<int32_t>(offsetof(Encoder_t2198218980, ___m_fallback_0)); }
	inline EncoderFallback_t1188251036 * get_m_fallback_0() const { return ___m_fallback_0; }
	inline EncoderFallback_t1188251036 ** get_address_of_m_fallback_0() { return &___m_fallback_0; }
	inline void set_m_fallback_0(EncoderFallback_t1188251036 * value)
	{
		___m_fallback_0 = value;
		Il2CppCodeGenWriteBarrier((&___m_fallback_0), value);
	}

	inline static int32_t get_offset_of_m_fallbackBuffer_1() { return static_cast<int32_t>(offsetof(Encoder_t2198218980, ___m_fallbackBuffer_1)); }
	inline EncoderFallbackBuffer_t3523102303 * get_m_fallbackBuffer_1() const { return ___m_fallbackBuffer_1; }
	inline EncoderFallbackBuffer_t3523102303 ** get_address_of_m_fallbackBuffer_1() { return &___m_fallbackBuffer_1; }
	inline void set_m_fallbackBuffer_1(EncoderFallbackBuffer_t3523102303 * value)
	{
		___m_fallbackBuffer_1 = value;
		Il2CppCodeGenWriteBarrier((&___m_fallbackBuffer_1), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // ENCODER_T2198218980_H
#ifndef ENCODERFALLBACK_T1188251036_H
#define ENCODERFALLBACK_T1188251036_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Text.EncoderFallback
struct  EncoderFallback_t1188251036  : public RuntimeObject
{
public:
	// System.Boolean System.Text.EncoderFallback::bIsMicrosoftBestFitFallback
	bool ___bIsMicrosoftBestFitFallback_0;

public:
	inline static int32_t get_offset_of_bIsMicrosoftBestFitFallback_0() { return static_cast<int32_t>(offsetof(EncoderFallback_t1188251036, ___bIsMicrosoftBestFitFallback_0)); }
	inline bool get_bIsMicrosoftBestFitFallback_0() const { return ___bIsMicrosoftBestFitFallback_0; }
	inline bool* get_address_of_bIsMicrosoftBestFitFallback_0() { return &___bIsMicrosoftBestFitFallback_0; }
	inline void set_bIsMicrosoftBestFitFallback_0(bool value)
	{
		___bIsMicrosoftBestFitFallback_0 = value;
	}
};

struct EncoderFallback_t1188251036_StaticFields
{
public:
	// System.Text.EncoderFallback modreq(System.Runtime.CompilerServices.IsVolatile) System.Text.EncoderFallback::replacementFallback
	EncoderFallback_t1188251036 * ___replacementFallback_1;
	// System.Text.EncoderFallback modreq(System.Runtime.CompilerServices.IsVolatile) System.Text.EncoderFallback::exceptionFallback
	EncoderFallback_t1188251036 * ___exceptionFallback_2;
	// System.Object System.Text.EncoderFallback::s_InternalSyncObject
	RuntimeObject * ___s_InternalSyncObject_3;

public:
	inline static int32_t get_offset_of_replacementFallback_1() { return static_cast<int32_t>(offsetof(EncoderFallback_t1188251036_StaticFields, ___replacementFallback_1)); }
	inline EncoderFallback_t1188251036 * get_replacementFallback_1() const { return ___replacementFallback_1; }
	inline EncoderFallback_t1188251036 ** get_address_of_replacementFallback_1() { return &___replacementFallback_1; }
	inline void set_replacementFallback_1(EncoderFallback_t1188251036 * value)
	{
		___replacementFallback_1 = value;
		Il2CppCodeGenWriteBarrier((&___replacementFallback_1), value);
	}

	inline static int32_t get_offset_of_exceptionFallback_2() { return static_cast<int32_t>(offsetof(EncoderFallback_t1188251036_StaticFields, ___exceptionFallback_2)); }
	inline EncoderFallback_t1188251036 * get_exceptionFallback_2() const { return ___exceptionFallback_2; }
	inline EncoderFallback_t1188251036 ** get_address_of_exceptionFallback_2() { return &___exceptionFallback_2; }
	inline void set_exceptionFallback_2(EncoderFallback_t1188251036 * value)
	{
		___exceptionFallback_2 = value;
		Il2CppCodeGenWriteBarrier((&___exceptionFallback_2), value);
	}

	inline static int32_t get_offset_of_s_InternalSyncObject_3() { return static_cast<int32_t>(offsetof(EncoderFallback_t1188251036_StaticFields, ___s_InternalSyncObject_3)); }
	inline RuntimeObject * get_s_InternalSyncObject_3() const { return ___s_InternalSyncObject_3; }
	inline RuntimeObject ** get_address_of_s_InternalSyncObject_3() { return &___s_InternalSyncObject_3; }
	inline void set_s_InternalSyncObject_3(RuntimeObject * value)
	{
		___s_InternalSyncObject_3 = value;
		Il2CppCodeGenWriteBarrier((&___s_InternalSyncObject_3), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // ENCODERFALLBACK_T1188251036_H
#ifndef ENCODERFALLBACKBUFFER_T3523102303_H
#define ENCODERFALLBACKBUFFER_T3523102303_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Text.EncoderFallbackBuffer
struct  EncoderFallbackBuffer_t3523102303  : public RuntimeObject
{
public:
	// System.Char* System.Text.EncoderFallbackBuffer::charStart
	Il2CppChar* ___charStart_0;
	// System.Char* System.Text.EncoderFallbackBuffer::charEnd
	Il2CppChar* ___charEnd_1;
	// System.Text.EncoderNLS System.Text.EncoderFallbackBuffer::encoder
	EncoderNLS_t449404832 * ___encoder_2;
	// System.Boolean System.Text.EncoderFallbackBuffer::setEncoder
	bool ___setEncoder_3;
	// System.Boolean System.Text.EncoderFallbackBuffer::bUsedEncoder
	bool ___bUsedEncoder_4;
	// System.Boolean System.Text.EncoderFallbackBuffer::bFallingBack
	bool ___bFallingBack_5;
	// System.Int32 System.Text.EncoderFallbackBuffer::iRecursionCount
	int32_t ___iRecursionCount_6;

public:
	inline static int32_t get_offset_of_charStart_0() { return static_cast<int32_t>(offsetof(EncoderFallbackBuffer_t3523102303, ___charStart_0)); }
	inline Il2CppChar* get_charStart_0() const { return ___charStart_0; }
	inline Il2CppChar** get_address_of_charStart_0() { return &___charStart_0; }
	inline void set_charStart_0(Il2CppChar* value)
	{
		___charStart_0 = value;
	}

	inline static int32_t get_offset_of_charEnd_1() { return static_cast<int32_t>(offsetof(EncoderFallbackBuffer_t3523102303, ___charEnd_1)); }
	inline Il2CppChar* get_charEnd_1() const { return ___charEnd_1; }
	inline Il2CppChar** get_address_of_charEnd_1() { return &___charEnd_1; }
	inline void set_charEnd_1(Il2CppChar* value)
	{
		___charEnd_1 = value;
	}

	inline static int32_t get_offset_of_encoder_2() { return static_cast<int32_t>(offsetof(EncoderFallbackBuffer_t3523102303, ___encoder_2)); }
	inline EncoderNLS_t449404832 * get_encoder_2() const { return ___encoder_2; }
	inline EncoderNLS_t449404832 ** get_address_of_encoder_2() { return &___encoder_2; }
	inline void set_encoder_2(EncoderNLS_t449404832 * value)
	{
		___encoder_2 = value;
		Il2CppCodeGenWriteBarrier((&___encoder_2), value);
	}

	inline static int32_t get_offset_of_setEncoder_3() { return static_cast<int32_t>(offsetof(EncoderFallbackBuffer_t3523102303, ___setEncoder_3)); }
	inline bool get_setEncoder_3() const { return ___setEncoder_3; }
	inline bool* get_address_of_setEncoder_3() { return &___setEncoder_3; }
	inline void set_setEncoder_3(bool value)
	{
		___setEncoder_3 = value;
	}

	inline static int32_t get_offset_of_bUsedEncoder_4() { return static_cast<int32_t>(offsetof(EncoderFallbackBuffer_t3523102303, ___bUsedEncoder_4)); }
	inline bool get_bUsedEncoder_4() const { return ___bUsedEncoder_4; }
	inline bool* get_address_of_bUsedEncoder_4() { return &___bUsedEncoder_4; }
	inline void set_bUsedEncoder_4(bool value)
	{
		___bUsedEncoder_4 = value;
	}

	inline static int32_t get_offset_of_bFallingBack_5() { return static_cast<int32_t>(offsetof(EncoderFallbackBuffer_t3523102303, ___bFallingBack_5)); }
	inline bool get_bFallingBack_5() const { return ___bFallingBack_5; }
	inline bool* get_address_of_bFallingBack_5() { return &___bFallingBack_5; }
	inline void set_bFallingBack_5(bool value)
	{
		___bFallingBack_5 = value;
	}

	inline static int32_t get_offset_of_iRecursionCount_6() { return static_cast<int32_t>(offsetof(EncoderFallbackBuffer_t3523102303, ___iRecursionCount_6)); }
	inline int32_t get_iRecursionCount_6() const { return ___iRecursionCount_6; }
	inline int32_t* get_address_of_iRecursionCount_6() { return &___iRecursionCount_6; }
	inline void set_iRecursionCount_6(int32_t value)
	{
		___iRecursionCount_6 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // ENCODERFALLBACKBUFFER_T3523102303_H
#ifndef ENCODING_T1523322056_H
#define ENCODING_T1523322056_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Text.Encoding
struct  Encoding_t1523322056  : public RuntimeObject
{
public:
	// System.Int32 System.Text.Encoding::m_codePage
	int32_t ___m_codePage_9;
	// System.Globalization.CodePageDataItem System.Text.Encoding::dataItem
	CodePageDataItem_t2285235057 * ___dataItem_10;
	// System.Boolean System.Text.Encoding::m_deserializedFromEverett
	bool ___m_deserializedFromEverett_11;
	// System.Boolean System.Text.Encoding::m_isReadOnly
	bool ___m_isReadOnly_12;
	// System.Text.EncoderFallback System.Text.Encoding::encoderFallback
	EncoderFallback_t1188251036 * ___encoderFallback_13;
	// System.Text.DecoderFallback System.Text.Encoding::decoderFallback
	DecoderFallback_t3123823036 * ___decoderFallback_14;

public:
	inline static int32_t get_offset_of_m_codePage_9() { return static_cast<int32_t>(offsetof(Encoding_t1523322056, ___m_codePage_9)); }
	inline int32_t get_m_codePage_9() const { return ___m_codePage_9; }
	inline int32_t* get_address_of_m_codePage_9() { return &___m_codePage_9; }
	inline void set_m_codePage_9(int32_t value)
	{
		___m_codePage_9 = value;
	}

	inline static int32_t get_offset_of_dataItem_10() { return static_cast<int32_t>(offsetof(Encoding_t1523322056, ___dataItem_10)); }
	inline CodePageDataItem_t2285235057 * get_dataItem_10() const { return ___dataItem_10; }
	inline CodePageDataItem_t2285235057 ** get_address_of_dataItem_10() { return &___dataItem_10; }
	inline void set_dataItem_10(CodePageDataItem_t2285235057 * value)
	{
		___dataItem_10 = value;
		Il2CppCodeGenWriteBarrier((&___dataItem_10), value);
	}

	inline static int32_t get_offset_of_m_deserializedFromEverett_11() { return static_cast<int32_t>(offsetof(Encoding_t1523322056, ___m_deserializedFromEverett_11)); }
	inline bool get_m_deserializedFromEverett_11() const { return ___m_deserializedFromEverett_11; }
	inline bool* get_address_of_m_deserializedFromEverett_11() { return &___m_deserializedFromEverett_11; }
	inline void set_m_deserializedFromEverett_11(bool value)
	{
		___m_deserializedFromEverett_11 = value;
	}

	inline static int32_t get_offset_of_m_isReadOnly_12() { return static_cast<int32_t>(offsetof(Encoding_t1523322056, ___m_isReadOnly_12)); }
	inline bool get_m_isReadOnly_12() const { return ___m_isReadOnly_12; }
	inline bool* get_address_of_m_isReadOnly_12() { return &___m_isReadOnly_12; }
	inline void set_m_isReadOnly_12(bool value)
	{
		___m_isReadOnly_12 = value;
	}

	inline static int32_t get_offset_of_encoderFallback_13() { return static_cast<int32_t>(offsetof(Encoding_t1523322056, ___encoderFallback_13)); }
	inline EncoderFallback_t1188251036 * get_encoderFallback_13() const { return ___encoderFallback_13; }
	inline EncoderFallback_t1188251036 ** get_address_of_encoderFallback_13() { return &___encoderFallback_13; }
	inline void set_encoderFallback_13(EncoderFallback_t1188251036 * value)
	{
		___encoderFallback_13 = value;
		Il2CppCodeGenWriteBarrier((&___encoderFallback_13), value);
	}

	inline static int32_t get_offset_of_decoderFallback_14() { return static_cast<int32_t>(offsetof(Encoding_t1523322056, ___decoderFallback_14)); }
	inline DecoderFallback_t3123823036 * get_decoderFallback_14() const { return ___decoderFallback_14; }
	inline DecoderFallback_t3123823036 ** get_address_of_decoderFallback_14() { return &___decoderFallback_14; }
	inline void set_decoderFallback_14(DecoderFallback_t3123823036 * value)
	{
		___decoderFallback_14 = value;
		Il2CppCodeGenWriteBarrier((&___decoderFallback_14), value);
	}
};

struct Encoding_t1523322056_StaticFields
{
public:
	// System.Text.Encoding modreq(System.Runtime.CompilerServices.IsVolatile) System.Text.Encoding::defaultEncoding
	Encoding_t1523322056 * ___defaultEncoding_0;
	// System.Text.Encoding modreq(System.Runtime.CompilerServices.IsVolatile) System.Text.Encoding::unicodeEncoding
	Encoding_t1523322056 * ___unicodeEncoding_1;
	// System.Text.Encoding modreq(System.Runtime.CompilerServices.IsVolatile) System.Text.Encoding::bigEndianUnicode
	Encoding_t1523322056 * ___bigEndianUnicode_2;
	// System.Text.Encoding modreq(System.Runtime.CompilerServices.IsVolatile) System.Text.Encoding::utf7Encoding
	Encoding_t1523322056 * ___utf7Encoding_3;
	// System.Text.Encoding modreq(System.Runtime.CompilerServices.IsVolatile) System.Text.Encoding::utf8Encoding
	Encoding_t1523322056 * ___utf8Encoding_4;
	// System.Text.Encoding modreq(System.Runtime.CompilerServices.IsVolatile) System.Text.Encoding::utf32Encoding
	Encoding_t1523322056 * ___utf32Encoding_5;
	// System.Text.Encoding modreq(System.Runtime.CompilerServices.IsVolatile) System.Text.Encoding::asciiEncoding
	Encoding_t1523322056 * ___asciiEncoding_6;
	// System.Text.Encoding modreq(System.Runtime.CompilerServices.IsVolatile) System.Text.Encoding::latin1Encoding
	Encoding_t1523322056 * ___latin1Encoding_7;
	// System.Collections.Hashtable modreq(System.Runtime.CompilerServices.IsVolatile) System.Text.Encoding::encodings
	Hashtable_t1853889766 * ___encodings_8;
	// System.Object System.Text.Encoding::s_InternalSyncObject
	RuntimeObject * ___s_InternalSyncObject_15;

public:
	inline static int32_t get_offset_of_defaultEncoding_0() { return static_cast<int32_t>(offsetof(Encoding_t1523322056_StaticFields, ___defaultEncoding_0)); }
	inline Encoding_t1523322056 * get_defaultEncoding_0() const { return ___defaultEncoding_0; }
	inline Encoding_t1523322056 ** get_address_of_defaultEncoding_0() { return &___defaultEncoding_0; }
	inline void set_defaultEncoding_0(Encoding_t1523322056 * value)
	{
		___defaultEncoding_0 = value;
		Il2CppCodeGenWriteBarrier((&___defaultEncoding_0), value);
	}

	inline static int32_t get_offset_of_unicodeEncoding_1() { return static_cast<int32_t>(offsetof(Encoding_t1523322056_StaticFields, ___unicodeEncoding_1)); }
	inline Encoding_t1523322056 * get_unicodeEncoding_1() const { return ___unicodeEncoding_1; }
	inline Encoding_t1523322056 ** get_address_of_unicodeEncoding_1() { return &___unicodeEncoding_1; }
	inline void set_unicodeEncoding_1(Encoding_t1523322056 * value)
	{
		___unicodeEncoding_1 = value;
		Il2CppCodeGenWriteBarrier((&___unicodeEncoding_1), value);
	}

	inline static int32_t get_offset_of_bigEndianUnicode_2() { return static_cast<int32_t>(offsetof(Encoding_t1523322056_StaticFields, ___bigEndianUnicode_2)); }
	inline Encoding_t1523322056 * get_bigEndianUnicode_2() const { return ___bigEndianUnicode_2; }
	inline Encoding_t1523322056 ** get_address_of_bigEndianUnicode_2() { return &___bigEndianUnicode_2; }
	inline void set_bigEndianUnicode_2(Encoding_t1523322056 * value)
	{
		___bigEndianUnicode_2 = value;
		Il2CppCodeGenWriteBarrier((&___bigEndianUnicode_2), value);
	}

	inline static int32_t get_offset_of_utf7Encoding_3() { return static_cast<int32_t>(offsetof(Encoding_t1523322056_StaticFields, ___utf7Encoding_3)); }
	inline Encoding_t1523322056 * get_utf7Encoding_3() const { return ___utf7Encoding_3; }
	inline Encoding_t1523322056 ** get_address_of_utf7Encoding_3() { return &___utf7Encoding_3; }
	inline void set_utf7Encoding_3(Encoding_t1523322056 * value)
	{
		___utf7Encoding_3 = value;
		Il2CppCodeGenWriteBarrier((&___utf7Encoding_3), value);
	}

	inline static int32_t get_offset_of_utf8Encoding_4() { return static_cast<int32_t>(offsetof(Encoding_t1523322056_StaticFields, ___utf8Encoding_4)); }
	inline Encoding_t1523322056 * get_utf8Encoding_4() const { return ___utf8Encoding_4; }
	inline Encoding_t1523322056 ** get_address_of_utf8Encoding_4() { return &___utf8Encoding_4; }
	inline void set_utf8Encoding_4(Encoding_t1523322056 * value)
	{
		___utf8Encoding_4 = value;
		Il2CppCodeGenWriteBarrier((&___utf8Encoding_4), value);
	}

	inline static int32_t get_offset_of_utf32Encoding_5() { return static_cast<int32_t>(offsetof(Encoding_t1523322056_StaticFields, ___utf32Encoding_5)); }
	inline Encoding_t1523322056 * get_utf32Encoding_5() const { return ___utf32Encoding_5; }
	inline Encoding_t1523322056 ** get_address_of_utf32Encoding_5() { return &___utf32Encoding_5; }
	inline void set_utf32Encoding_5(Encoding_t1523322056 * value)
	{
		___utf32Encoding_5 = value;
		Il2CppCodeGenWriteBarrier((&___utf32Encoding_5), value);
	}

	inline static int32_t get_offset_of_asciiEncoding_6() { return static_cast<int32_t>(offsetof(Encoding_t1523322056_StaticFields, ___asciiEncoding_6)); }
	inline Encoding_t1523322056 * get_asciiEncoding_6() const { return ___asciiEncoding_6; }
	inline Encoding_t1523322056 ** get_address_of_asciiEncoding_6() { return &___asciiEncoding_6; }
	inline void set_asciiEncoding_6(Encoding_t1523322056 * value)
	{
		___asciiEncoding_6 = value;
		Il2CppCodeGenWriteBarrier((&___asciiEncoding_6), value);
	}

	inline static int32_t get_offset_of_latin1Encoding_7() { return static_cast<int32_t>(offsetof(Encoding_t1523322056_StaticFields, ___latin1Encoding_7)); }
	inline Encoding_t1523322056 * get_latin1Encoding_7() const { return ___latin1Encoding_7; }
	inline Encoding_t1523322056 ** get_address_of_latin1Encoding_7() { return &___latin1Encoding_7; }
	inline void set_latin1Encoding_7(Encoding_t1523322056 * value)
	{
		___latin1Encoding_7 = value;
		Il2CppCodeGenWriteBarrier((&___latin1Encoding_7), value);
	}

	inline static int32_t get_offset_of_encodings_8() { return static_cast<int32_t>(offsetof(Encoding_t1523322056_StaticFields, ___encodings_8)); }
	inline Hashtable_t1853889766 * get_encodings_8() const { return ___encodings_8; }
	inline Hashtable_t1853889766 ** get_address_of_encodings_8() { return &___encodings_8; }
	inline void set_encodings_8(Hashtable_t1853889766 * value)
	{
		___encodings_8 = value;
		Il2CppCodeGenWriteBarrier((&___encodings_8), value);
	}

	inline static int32_t get_offset_of_s_InternalSyncObject_15() { return static_cast<int32_t>(offsetof(Encoding_t1523322056_StaticFields, ___s_InternalSyncObject_15)); }
	inline RuntimeObject * get_s_InternalSyncObject_15() const { return ___s_InternalSyncObject_15; }
	inline RuntimeObject ** get_address_of_s_InternalSyncObject_15() { return &___s_InternalSyncObject_15; }
	inline void set_s_InternalSyncObject_15(RuntimeObject * value)
	{
		___s_InternalSyncObject_15 = value;
		Il2CppCodeGenWriteBarrier((&___s_InternalSyncObject_15), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // ENCODING_T1523322056_H
#ifndef ENCODINGBYTEBUFFER_T3631100277_H
#define ENCODINGBYTEBUFFER_T3631100277_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Text.Encoding/EncodingByteBuffer
struct  EncodingByteBuffer_t3631100277  : public RuntimeObject
{
public:
	// System.Byte* System.Text.Encoding/EncodingByteBuffer::bytes
	uint8_t* ___bytes_0;
	// System.Byte* System.Text.Encoding/EncodingByteBuffer::byteStart
	uint8_t* ___byteStart_1;
	// System.Byte* System.Text.Encoding/EncodingByteBuffer::byteEnd
	uint8_t* ___byteEnd_2;
	// System.Char* System.Text.Encoding/EncodingByteBuffer::chars
	Il2CppChar* ___chars_3;
	// System.Char* System.Text.Encoding/EncodingByteBuffer::charStart
	Il2CppChar* ___charStart_4;
	// System.Char* System.Text.Encoding/EncodingByteBuffer::charEnd
	Il2CppChar* ___charEnd_5;
	// System.Int32 System.Text.Encoding/EncodingByteBuffer::byteCountResult
	int32_t ___byteCountResult_6;
	// System.Text.Encoding System.Text.Encoding/EncodingByteBuffer::enc
	Encoding_t1523322056 * ___enc_7;
	// System.Text.EncoderNLS System.Text.Encoding/EncodingByteBuffer::encoder
	EncoderNLS_t449404832 * ___encoder_8;
	// System.Text.EncoderFallbackBuffer System.Text.Encoding/EncodingByteBuffer::fallbackBuffer
	EncoderFallbackBuffer_t3523102303 * ___fallbackBuffer_9;

public:
	inline static int32_t get_offset_of_bytes_0() { return static_cast<int32_t>(offsetof(EncodingByteBuffer_t3631100277, ___bytes_0)); }
	inline uint8_t* get_bytes_0() const { return ___bytes_0; }
	inline uint8_t** get_address_of_bytes_0() { return &___bytes_0; }
	inline void set_bytes_0(uint8_t* value)
	{
		___bytes_0 = value;
	}

	inline static int32_t get_offset_of_byteStart_1() { return static_cast<int32_t>(offsetof(EncodingByteBuffer_t3631100277, ___byteStart_1)); }
	inline uint8_t* get_byteStart_1() const { return ___byteStart_1; }
	inline uint8_t** get_address_of_byteStart_1() { return &___byteStart_1; }
	inline void set_byteStart_1(uint8_t* value)
	{
		___byteStart_1 = value;
	}

	inline static int32_t get_offset_of_byteEnd_2() { return static_cast<int32_t>(offsetof(EncodingByteBuffer_t3631100277, ___byteEnd_2)); }
	inline uint8_t* get_byteEnd_2() const { return ___byteEnd_2; }
	inline uint8_t** get_address_of_byteEnd_2() { return &___byteEnd_2; }
	inline void set_byteEnd_2(uint8_t* value)
	{
		___byteEnd_2 = value;
	}

	inline static int32_t get_offset_of_chars_3() { return static_cast<int32_t>(offsetof(EncodingByteBuffer_t3631100277, ___chars_3)); }
	inline Il2CppChar* get_chars_3() const { return ___chars_3; }
	inline Il2CppChar** get_address_of_chars_3() { return &___chars_3; }
	inline void set_chars_3(Il2CppChar* value)
	{
		___chars_3 = value;
	}

	inline static int32_t get_offset_of_charStart_4() { return static_cast<int32_t>(offsetof(EncodingByteBuffer_t3631100277, ___charStart_4)); }
	inline Il2CppChar* get_charStart_4() const { return ___charStart_4; }
	inline Il2CppChar** get_address_of_charStart_4() { return &___charStart_4; }
	inline void set_charStart_4(Il2CppChar* value)
	{
		___charStart_4 = value;
	}

	inline static int32_t get_offset_of_charEnd_5() { return static_cast<int32_t>(offsetof(EncodingByteBuffer_t3631100277, ___charEnd_5)); }
	inline Il2CppChar* get_charEnd_5() const { return ___charEnd_5; }
	inline Il2CppChar** get_address_of_charEnd_5() { return &___charEnd_5; }
	inline void set_charEnd_5(Il2CppChar* value)
	{
		___charEnd_5 = value;
	}

	inline static int32_t get_offset_of_byteCountResult_6() { return static_cast<int32_t>(offsetof(EncodingByteBuffer_t3631100277, ___byteCountResult_6)); }
	inline int32_t get_byteCountResult_6() const { return ___byteCountResult_6; }
	inline int32_t* get_address_of_byteCountResult_6() { return &___byteCountResult_6; }
	inline void set_byteCountResult_6(int32_t value)
	{
		___byteCountResult_6 = value;
	}

	inline static int32_t get_offset_of_enc_7() { return static_cast<int32_t>(offsetof(EncodingByteBuffer_t3631100277, ___enc_7)); }
	inline Encoding_t1523322056 * get_enc_7() const { return ___enc_7; }
	inline Encoding_t1523322056 ** get_address_of_enc_7() { return &___enc_7; }
	inline void set_enc_7(Encoding_t1523322056 * value)
	{
		___enc_7 = value;
		Il2CppCodeGenWriteBarrier((&___enc_7), value);
	}

	inline static int32_t get_offset_of_encoder_8() { return static_cast<int32_t>(offsetof(EncodingByteBuffer_t3631100277, ___encoder_8)); }
	inline EncoderNLS_t449404832 * get_encoder_8() const { return ___encoder_8; }
	inline EncoderNLS_t449404832 ** get_address_of_encoder_8() { return &___encoder_8; }
	inline void set_encoder_8(EncoderNLS_t449404832 * value)
	{
		___encoder_8 = value;
		Il2CppCodeGenWriteBarrier((&___encoder_8), value);
	}

	inline static int32_t get_offset_of_fallbackBuffer_9() { return static_cast<int32_t>(offsetof(EncodingByteBuffer_t3631100277, ___fallbackBuffer_9)); }
	inline EncoderFallbackBuffer_t3523102303 * get_fallbackBuffer_9() const { return ___fallbackBuffer_9; }
	inline EncoderFallbackBuffer_t3523102303 ** get_address_of_fallbackBuffer_9() { return &___fallbackBuffer_9; }
	inline void set_fallbackBuffer_9(EncoderFallbackBuffer_t3523102303 * value)
	{
		___fallbackBuffer_9 = value;
		Il2CppCodeGenWriteBarrier((&___fallbackBuffer_9), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // ENCODINGBYTEBUFFER_T3631100277_H
#ifndef ENCODINGCHARBUFFER_T3998946436_H
#define ENCODINGCHARBUFFER_T3998946436_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Text.Encoding/EncodingCharBuffer
struct  EncodingCharBuffer_t3998946436  : public RuntimeObject
{
public:
	// System.Char* System.Text.Encoding/EncodingCharBuffer::chars
	Il2CppChar* ___chars_0;
	// System.Char* System.Text.Encoding/EncodingCharBuffer::charStart
	Il2CppChar* ___charStart_1;
	// System.Char* System.Text.Encoding/EncodingCharBuffer::charEnd
	Il2CppChar* ___charEnd_2;
	// System.Int32 System.Text.Encoding/EncodingCharBuffer::charCountResult
	int32_t ___charCountResult_3;
	// System.Text.Encoding System.Text.Encoding/EncodingCharBuffer::enc
	Encoding_t1523322056 * ___enc_4;
	// System.Text.DecoderNLS System.Text.Encoding/EncodingCharBuffer::decoder
	DecoderNLS_t637950881 * ___decoder_5;
	// System.Byte* System.Text.Encoding/EncodingCharBuffer::byteStart
	uint8_t* ___byteStart_6;
	// System.Byte* System.Text.Encoding/EncodingCharBuffer::byteEnd
	uint8_t* ___byteEnd_7;
	// System.Byte* System.Text.Encoding/EncodingCharBuffer::bytes
	uint8_t* ___bytes_8;
	// System.Text.DecoderFallbackBuffer System.Text.Encoding/EncodingCharBuffer::fallbackBuffer
	DecoderFallbackBuffer_t2402303981 * ___fallbackBuffer_9;

public:
	inline static int32_t get_offset_of_chars_0() { return static_cast<int32_t>(offsetof(EncodingCharBuffer_t3998946436, ___chars_0)); }
	inline Il2CppChar* get_chars_0() const { return ___chars_0; }
	inline Il2CppChar** get_address_of_chars_0() { return &___chars_0; }
	inline void set_chars_0(Il2CppChar* value)
	{
		___chars_0 = value;
	}

	inline static int32_t get_offset_of_charStart_1() { return static_cast<int32_t>(offsetof(EncodingCharBuffer_t3998946436, ___charStart_1)); }
	inline Il2CppChar* get_charStart_1() const { return ___charStart_1; }
	inline Il2CppChar** get_address_of_charStart_1() { return &___charStart_1; }
	inline void set_charStart_1(Il2CppChar* value)
	{
		___charStart_1 = value;
	}

	inline static int32_t get_offset_of_charEnd_2() { return static_cast<int32_t>(offsetof(EncodingCharBuffer_t3998946436, ___charEnd_2)); }
	inline Il2CppChar* get_charEnd_2() const { return ___charEnd_2; }
	inline Il2CppChar** get_address_of_charEnd_2() { return &___charEnd_2; }
	inline void set_charEnd_2(Il2CppChar* value)
	{
		___charEnd_2 = value;
	}

	inline static int32_t get_offset_of_charCountResult_3() { return static_cast<int32_t>(offsetof(EncodingCharBuffer_t3998946436, ___charCountResult_3)); }
	inline int32_t get_charCountResult_3() const { return ___charCountResult_3; }
	inline int32_t* get_address_of_charCountResult_3() { return &___charCountResult_3; }
	inline void set_charCountResult_3(int32_t value)
	{
		___charCountResult_3 = value;
	}

	inline static int32_t get_offset_of_enc_4() { return static_cast<int32_t>(offsetof(EncodingCharBuffer_t3998946436, ___enc_4)); }
	inline Encoding_t1523322056 * get_enc_4() const { return ___enc_4; }
	inline Encoding_t1523322056 ** get_address_of_enc_4() { return &___enc_4; }
	inline void set_enc_4(Encoding_t1523322056 * value)
	{
		___enc_4 = value;
		Il2CppCodeGenWriteBarrier((&___enc_4), value);
	}

	inline static int32_t get_offset_of_decoder_5() { return static_cast<int32_t>(offsetof(EncodingCharBuffer_t3998946436, ___decoder_5)); }
	inline DecoderNLS_t637950881 * get_decoder_5() const { return ___decoder_5; }
	inline DecoderNLS_t637950881 ** get_address_of_decoder_5() { return &___decoder_5; }
	inline void set_decoder_5(DecoderNLS_t637950881 * value)
	{
		___decoder_5 = value;
		Il2CppCodeGenWriteBarrier((&___decoder_5), value);
	}

	inline static int32_t get_offset_of_byteStart_6() { return static_cast<int32_t>(offsetof(EncodingCharBuffer_t3998946436, ___byteStart_6)); }
	inline uint8_t* get_byteStart_6() const { return ___byteStart_6; }
	inline uint8_t** get_address_of_byteStart_6() { return &___byteStart_6; }
	inline void set_byteStart_6(uint8_t* value)
	{
		___byteStart_6 = value;
	}

	inline static int32_t get_offset_of_byteEnd_7() { return static_cast<int32_t>(offsetof(EncodingCharBuffer_t3998946436, ___byteEnd_7)); }
	inline uint8_t* get_byteEnd_7() const { return ___byteEnd_7; }
	inline uint8_t** get_address_of_byteEnd_7() { return &___byteEnd_7; }
	inline void set_byteEnd_7(uint8_t* value)
	{
		___byteEnd_7 = value;
	}

	inline static int32_t get_offset_of_bytes_8() { return static_cast<int32_t>(offsetof(EncodingCharBuffer_t3998946436, ___bytes_8)); }
	inline uint8_t* get_bytes_8() const { return ___bytes_8; }
	inline uint8_t** get_address_of_bytes_8() { return &___bytes_8; }
	inline void set_bytes_8(uint8_t* value)
	{
		___bytes_8 = value;
	}

	inline static int32_t get_offset_of_fallbackBuffer_9() { return static_cast<int32_t>(offsetof(EncodingCharBuffer_t3998946436, ___fallbackBuffer_9)); }
	inline DecoderFallbackBuffer_t2402303981 * get_fallbackBuffer_9() const { return ___fallbackBuffer_9; }
	inline DecoderFallbackBuffer_t2402303981 ** get_address_of_fallbackBuffer_9() { return &___fallbackBuffer_9; }
	inline void set_fallbackBuffer_9(DecoderFallbackBuffer_t2402303981 * value)
	{
		___fallbackBuffer_9 = value;
		Il2CppCodeGenWriteBarrier((&___fallbackBuffer_9), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // ENCODINGCHARBUFFER_T3998946436_H
#ifndef ENCODINGHELPER_T1404249741_H
#define ENCODINGHELPER_T1404249741_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Text.EncodingHelper
struct  EncodingHelper_t1404249741  : public RuntimeObject
{
public:

public:
};

struct EncodingHelper_t1404249741_StaticFields
{
public:
	// System.Text.Encoding modreq(System.Runtime.CompilerServices.IsVolatile) System.Text.EncodingHelper::utf8EncodingWithoutMarkers
	Encoding_t1523322056 * ___utf8EncodingWithoutMarkers_0;
	// System.Object System.Text.EncodingHelper::lockobj
	RuntimeObject * ___lockobj_1;
	// System.Reflection.Assembly System.Text.EncodingHelper::i18nAssembly
	Assembly_t * ___i18nAssembly_2;
	// System.Boolean System.Text.EncodingHelper::i18nDisabled
	bool ___i18nDisabled_3;

public:
	inline static int32_t get_offset_of_utf8EncodingWithoutMarkers_0() { return static_cast<int32_t>(offsetof(EncodingHelper_t1404249741_StaticFields, ___utf8EncodingWithoutMarkers_0)); }
	inline Encoding_t1523322056 * get_utf8EncodingWithoutMarkers_0() const { return ___utf8EncodingWithoutMarkers_0; }
	inline Encoding_t1523322056 ** get_address_of_utf8EncodingWithoutMarkers_0() { return &___utf8EncodingWithoutMarkers_0; }
	inline void set_utf8EncodingWithoutMarkers_0(Encoding_t1523322056 * value)
	{
		___utf8EncodingWithoutMarkers_0 = value;
		Il2CppCodeGenWriteBarrier((&___utf8EncodingWithoutMarkers_0), value);
	}

	inline static int32_t get_offset_of_lockobj_1() { return static_cast<int32_t>(offsetof(EncodingHelper_t1404249741_StaticFields, ___lockobj_1)); }
	inline RuntimeObject * get_lockobj_1() const { return ___lockobj_1; }
	inline RuntimeObject ** get_address_of_lockobj_1() { return &___lockobj_1; }
	inline void set_lockobj_1(RuntimeObject * value)
	{
		___lockobj_1 = value;
		Il2CppCodeGenWriteBarrier((&___lockobj_1), value);
	}

	inline static int32_t get_offset_of_i18nAssembly_2() { return static_cast<int32_t>(offsetof(EncodingHelper_t1404249741_StaticFields, ___i18nAssembly_2)); }
	inline Assembly_t * get_i18nAssembly_2() const { return ___i18nAssembly_2; }
	inline Assembly_t ** get_address_of_i18nAssembly_2() { return &___i18nAssembly_2; }
	inline void set_i18nAssembly_2(Assembly_t * value)
	{
		___i18nAssembly_2 = value;
		Il2CppCodeGenWriteBarrier((&___i18nAssembly_2), value);
	}

	inline static int32_t get_offset_of_i18nDisabled_3() { return static_cast<int32_t>(offsetof(EncodingHelper_t1404249741_StaticFields, ___i18nDisabled_3)); }
	inline bool get_i18nDisabled_3() const { return ___i18nDisabled_3; }
	inline bool* get_address_of_i18nDisabled_3() { return &___i18nDisabled_3; }
	inline void set_i18nDisabled_3(bool value)
	{
		___i18nDisabled_3 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // ENCODINGHELPER_T1404249741_H
#ifndef ENCODINGPROVIDER_T3251932530_H
#define ENCODINGPROVIDER_T3251932530_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Text.EncodingProvider
struct  EncodingProvider_t3251932530  : public RuntimeObject
{
public:

public:
};

struct EncodingProvider_t3251932530_StaticFields
{
public:
	// System.Object System.Text.EncodingProvider::s_InternalSyncObject
	RuntimeObject * ___s_InternalSyncObject_0;
	// System.Text.EncodingProvider[] modreq(System.Runtime.CompilerServices.IsVolatile) System.Text.EncodingProvider::s_providers
	EncodingProviderU5BU5D_t3953861767* ___s_providers_1;

public:
	inline static int32_t get_offset_of_s_InternalSyncObject_0() { return static_cast<int32_t>(offsetof(EncodingProvider_t3251932530_StaticFields, ___s_InternalSyncObject_0)); }
	inline RuntimeObject * get_s_InternalSyncObject_0() const { return ___s_InternalSyncObject_0; }
	inline RuntimeObject ** get_address_of_s_InternalSyncObject_0() { return &___s_InternalSyncObject_0; }
	inline void set_s_InternalSyncObject_0(RuntimeObject * value)
	{
		___s_InternalSyncObject_0 = value;
		Il2CppCodeGenWriteBarrier((&___s_InternalSyncObject_0), value);
	}

	inline static int32_t get_offset_of_s_providers_1() { return static_cast<int32_t>(offsetof(EncodingProvider_t3251932530_StaticFields, ___s_providers_1)); }
	inline EncodingProviderU5BU5D_t3953861767* get_s_providers_1() const { return ___s_providers_1; }
	inline EncodingProviderU5BU5D_t3953861767** get_address_of_s_providers_1() { return &___s_providers_1; }
	inline void set_s_providers_1(EncodingProviderU5BU5D_t3953861767* value)
	{
		___s_providers_1 = value;
		Il2CppCodeGenWriteBarrier((&___s_providers_1), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // ENCODINGPROVIDER_T3251932530_H
#ifndef NORMALIZATION_T1645683087_H
#define NORMALIZATION_T1645683087_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Text.Normalization
struct  Normalization_t1645683087  : public RuntimeObject
{
public:

public:
};

struct Normalization_t1645683087_StaticFields
{
public:
	// System.Byte* System.Text.Normalization::props
	uint8_t* ___props_0;
	// System.Int32* System.Text.Normalization::mappedChars
	int32_t* ___mappedChars_1;
	// System.Int16* System.Text.Normalization::charMapIndex
	int16_t* ___charMapIndex_2;
	// System.Int16* System.Text.Normalization::helperIndex
	int16_t* ___helperIndex_3;
	// System.UInt16* System.Text.Normalization::mapIdxToComposite
	uint16_t* ___mapIdxToComposite_4;
	// System.Byte* System.Text.Normalization::combiningClass
	uint8_t* ___combiningClass_5;
	// System.Object System.Text.Normalization::forLock
	RuntimeObject * ___forLock_6;
	// System.Boolean System.Text.Normalization::isReady
	bool ___isReady_7;

public:
	inline static int32_t get_offset_of_props_0() { return static_cast<int32_t>(offsetof(Normalization_t1645683087_StaticFields, ___props_0)); }
	inline uint8_t* get_props_0() const { return ___props_0; }
	inline uint8_t** get_address_of_props_0() { return &___props_0; }
	inline void set_props_0(uint8_t* value)
	{
		___props_0 = value;
	}

	inline static int32_t get_offset_of_mappedChars_1() { return static_cast<int32_t>(offsetof(Normalization_t1645683087_StaticFields, ___mappedChars_1)); }
	inline int32_t* get_mappedChars_1() const { return ___mappedChars_1; }
	inline int32_t** get_address_of_mappedChars_1() { return &___mappedChars_1; }
	inline void set_mappedChars_1(int32_t* value)
	{
		___mappedChars_1 = value;
	}

	inline static int32_t get_offset_of_charMapIndex_2() { return static_cast<int32_t>(offsetof(Normalization_t1645683087_StaticFields, ___charMapIndex_2)); }
	inline int16_t* get_charMapIndex_2() const { return ___charMapIndex_2; }
	inline int16_t** get_address_of_charMapIndex_2() { return &___charMapIndex_2; }
	inline void set_charMapIndex_2(int16_t* value)
	{
		___charMapIndex_2 = value;
	}

	inline static int32_t get_offset_of_helperIndex_3() { return static_cast<int32_t>(offsetof(Normalization_t1645683087_StaticFields, ___helperIndex_3)); }
	inline int16_t* get_helperIndex_3() const { return ___helperIndex_3; }
	inline int16_t** get_address_of_helperIndex_3() { return &___helperIndex_3; }
	inline void set_helperIndex_3(int16_t* value)
	{
		___helperIndex_3 = value;
	}

	inline static int32_t get_offset_of_mapIdxToComposite_4() { return static_cast<int32_t>(offsetof(Normalization_t1645683087_StaticFields, ___mapIdxToComposite_4)); }
	inline uint16_t* get_mapIdxToComposite_4() const { return ___mapIdxToComposite_4; }
	inline uint16_t** get_address_of_mapIdxToComposite_4() { return &___mapIdxToComposite_4; }
	inline void set_mapIdxToComposite_4(uint16_t* value)
	{
		___mapIdxToComposite_4 = value;
	}

	inline static int32_t get_offset_of_combiningClass_5() { return static_cast<int32_t>(offsetof(Normalization_t1645683087_StaticFields, ___combiningClass_5)); }
	inline uint8_t* get_combiningClass_5() const { return ___combiningClass_5; }
	inline uint8_t** get_address_of_combiningClass_5() { return &___combiningClass_5; }
	inline void set_combiningClass_5(uint8_t* value)
	{
		___combiningClass_5 = value;
	}

	inline static int32_t get_offset_of_forLock_6() { return static_cast<int32_t>(offsetof(Normalization_t1645683087_StaticFields, ___forLock_6)); }
	inline RuntimeObject * get_forLock_6() const { return ___forLock_6; }
	inline RuntimeObject ** get_address_of_forLock_6() { return &___forLock_6; }
	inline void set_forLock_6(RuntimeObject * value)
	{
		___forLock_6 = value;
		Il2CppCodeGenWriteBarrier((&___forLock_6), value);
	}

	inline static int32_t get_offset_of_isReady_7() { return static_cast<int32_t>(offsetof(Normalization_t1645683087_StaticFields, ___isReady_7)); }
	inline bool get_isReady_7() const { return ___isReady_7; }
	inline bool* get_address_of_isReady_7() { return &___isReady_7; }
	inline void set_isReady_7(bool value)
	{
		___isReady_7 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // NORMALIZATION_T1645683087_H
#ifndef STRINGBUILDER_T_H
#define STRINGBUILDER_T_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Text.StringBuilder
struct  StringBuilder_t  : public RuntimeObject
{
public:
	// System.Char[] System.Text.StringBuilder::m_ChunkChars
	CharU5BU5D_t3528271667* ___m_ChunkChars_0;
	// System.Text.StringBuilder System.Text.StringBuilder::m_ChunkPrevious
	StringBuilder_t * ___m_ChunkPrevious_1;
	// System.Int32 System.Text.StringBuilder::m_ChunkLength
	int32_t ___m_ChunkLength_2;
	// System.Int32 System.Text.StringBuilder::m_ChunkOffset
	int32_t ___m_ChunkOffset_3;
	// System.Int32 System.Text.StringBuilder::m_MaxCapacity
	int32_t ___m_MaxCapacity_4;

public:
	inline static int32_t get_offset_of_m_ChunkChars_0() { return static_cast<int32_t>(offsetof(StringBuilder_t, ___m_ChunkChars_0)); }
	inline CharU5BU5D_t3528271667* get_m_ChunkChars_0() const { return ___m_ChunkChars_0; }
	inline CharU5BU5D_t3528271667** get_address_of_m_ChunkChars_0() { return &___m_ChunkChars_0; }
	inline void set_m_ChunkChars_0(CharU5BU5D_t3528271667* value)
	{
		___m_ChunkChars_0 = value;
		Il2CppCodeGenWriteBarrier((&___m_ChunkChars_0), value);
	}

	inline static int32_t get_offset_of_m_ChunkPrevious_1() { return static_cast<int32_t>(offsetof(StringBuilder_t, ___m_ChunkPrevious_1)); }
	inline StringBuilder_t * get_m_ChunkPrevious_1() const { return ___m_ChunkPrevious_1; }
	inline StringBuilder_t ** get_address_of_m_ChunkPrevious_1() { return &___m_ChunkPrevious_1; }
	inline void set_m_ChunkPrevious_1(StringBuilder_t * value)
	{
		___m_ChunkPrevious_1 = value;
		Il2CppCodeGenWriteBarrier((&___m_ChunkPrevious_1), value);
	}

	inline static int32_t get_offset_of_m_ChunkLength_2() { return static_cast<int32_t>(offsetof(StringBuilder_t, ___m_ChunkLength_2)); }
	inline int32_t get_m_ChunkLength_2() const { return ___m_ChunkLength_2; }
	inline int32_t* get_address_of_m_ChunkLength_2() { return &___m_ChunkLength_2; }
	inline void set_m_ChunkLength_2(int32_t value)
	{
		___m_ChunkLength_2 = value;
	}

	inline static int32_t get_offset_of_m_ChunkOffset_3() { return static_cast<int32_t>(offsetof(StringBuilder_t, ___m_ChunkOffset_3)); }
	inline int32_t get_m_ChunkOffset_3() const { return ___m_ChunkOffset_3; }
	inline int32_t* get_address_of_m_ChunkOffset_3() { return &___m_ChunkOffset_3; }
	inline void set_m_ChunkOffset_3(int32_t value)
	{
		___m_ChunkOffset_3 = value;
	}

	inline static int32_t get_offset_of_m_MaxCapacity_4() { return static_cast<int32_t>(offsetof(StringBuilder_t, ___m_MaxCapacity_4)); }
	inline int32_t get_m_MaxCapacity_4() const { return ___m_MaxCapacity_4; }
	inline int32_t* get_address_of_m_MaxCapacity_4() { return &___m_MaxCapacity_4; }
	inline void set_m_MaxCapacity_4(int32_t value)
	{
		___m_MaxCapacity_4 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // STRINGBUILDER_T_H
#ifndef STRINGBUILDERCACHE_T3006348846_H
#define STRINGBUILDERCACHE_T3006348846_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Text.StringBuilderCache
struct  StringBuilderCache_t3006348846  : public RuntimeObject
{
public:

public:
};

struct StringBuilderCache_t3006348846_ThreadStaticFields
{
public:
	// System.Text.StringBuilder System.Text.StringBuilderCache::CachedInstance
	StringBuilder_t * ___CachedInstance_0;

public:
	inline static int32_t get_offset_of_CachedInstance_0() { return static_cast<int32_t>(offsetof(StringBuilderCache_t3006348846_ThreadStaticFields, ___CachedInstance_0)); }
	inline StringBuilder_t * get_CachedInstance_0() const { return ___CachedInstance_0; }
	inline StringBuilder_t ** get_address_of_CachedInstance_0() { return &___CachedInstance_0; }
	inline void set_CachedInstance_0(StringBuilder_t * value)
	{
		___CachedInstance_0 = value;
		Il2CppCodeGenWriteBarrier((&___CachedInstance_0), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // STRINGBUILDERCACHE_T3006348846_H
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
#ifndef APPLICATIONEXCEPTION_T2339761290_H
#define APPLICATIONEXCEPTION_T2339761290_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.ApplicationException
struct  ApplicationException_t2339761290  : public Exception_t
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // APPLICATIONEXCEPTION_T2339761290_H
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
#ifndef ASSEMBLYCOMPANYATTRIBUTE_T909257512_H
#define ASSEMBLYCOMPANYATTRIBUTE_T909257512_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Reflection.AssemblyCompanyAttribute
struct  AssemblyCompanyAttribute_t909257512  : public Attribute_t861562559
{
public:
	// System.String System.Reflection.AssemblyCompanyAttribute::m_company
	String_t* ___m_company_0;

public:
	inline static int32_t get_offset_of_m_company_0() { return static_cast<int32_t>(offsetof(AssemblyCompanyAttribute_t909257512, ___m_company_0)); }
	inline String_t* get_m_company_0() const { return ___m_company_0; }
	inline String_t** get_address_of_m_company_0() { return &___m_company_0; }
	inline void set_m_company_0(String_t* value)
	{
		___m_company_0 = value;
		Il2CppCodeGenWriteBarrier((&___m_company_0), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // ASSEMBLYCOMPANYATTRIBUTE_T909257512_H
#ifndef ASSEMBLYCONFIGURATIONATTRIBUTE_T2167450097_H
#define ASSEMBLYCONFIGURATIONATTRIBUTE_T2167450097_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Reflection.AssemblyConfigurationAttribute
struct  AssemblyConfigurationAttribute_t2167450097  : public Attribute_t861562559
{
public:
	// System.String System.Reflection.AssemblyConfigurationAttribute::m_configuration
	String_t* ___m_configuration_0;

public:
	inline static int32_t get_offset_of_m_configuration_0() { return static_cast<int32_t>(offsetof(AssemblyConfigurationAttribute_t2167450097, ___m_configuration_0)); }
	inline String_t* get_m_configuration_0() const { return ___m_configuration_0; }
	inline String_t** get_address_of_m_configuration_0() { return &___m_configuration_0; }
	inline void set_m_configuration_0(String_t* value)
	{
		___m_configuration_0 = value;
		Il2CppCodeGenWriteBarrier((&___m_configuration_0), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // ASSEMBLYCONFIGURATIONATTRIBUTE_T2167450097_H
#ifndef ASSEMBLYCOPYRIGHTATTRIBUTE_T836190902_H
#define ASSEMBLYCOPYRIGHTATTRIBUTE_T836190902_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Reflection.AssemblyCopyrightAttribute
struct  AssemblyCopyrightAttribute_t836190902  : public Attribute_t861562559
{
public:
	// System.String System.Reflection.AssemblyCopyrightAttribute::m_copyright
	String_t* ___m_copyright_0;

public:
	inline static int32_t get_offset_of_m_copyright_0() { return static_cast<int32_t>(offsetof(AssemblyCopyrightAttribute_t836190902, ___m_copyright_0)); }
	inline String_t* get_m_copyright_0() const { return ___m_copyright_0; }
	inline String_t** get_address_of_m_copyright_0() { return &___m_copyright_0; }
	inline void set_m_copyright_0(String_t* value)
	{
		___m_copyright_0 = value;
		Il2CppCodeGenWriteBarrier((&___m_copyright_0), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // ASSEMBLYCOPYRIGHTATTRIBUTE_T836190902_H
#ifndef ASSEMBLYDEFAULTALIASATTRIBUTE_T2176720766_H
#define ASSEMBLYDEFAULTALIASATTRIBUTE_T2176720766_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Reflection.AssemblyDefaultAliasAttribute
struct  AssemblyDefaultAliasAttribute_t2176720766  : public Attribute_t861562559
{
public:
	// System.String System.Reflection.AssemblyDefaultAliasAttribute::m_defaultAlias
	String_t* ___m_defaultAlias_0;

public:
	inline static int32_t get_offset_of_m_defaultAlias_0() { return static_cast<int32_t>(offsetof(AssemblyDefaultAliasAttribute_t2176720766, ___m_defaultAlias_0)); }
	inline String_t* get_m_defaultAlias_0() const { return ___m_defaultAlias_0; }
	inline String_t** get_address_of_m_defaultAlias_0() { return &___m_defaultAlias_0; }
	inline void set_m_defaultAlias_0(String_t* value)
	{
		___m_defaultAlias_0 = value;
		Il2CppCodeGenWriteBarrier((&___m_defaultAlias_0), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // ASSEMBLYDEFAULTALIASATTRIBUTE_T2176720766_H
#ifndef ASSEMBLYDELAYSIGNATTRIBUTE_T176441654_H
#define ASSEMBLYDELAYSIGNATTRIBUTE_T176441654_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Reflection.AssemblyDelaySignAttribute
struct  AssemblyDelaySignAttribute_t176441654  : public Attribute_t861562559
{
public:
	// System.Boolean System.Reflection.AssemblyDelaySignAttribute::m_delaySign
	bool ___m_delaySign_0;

public:
	inline static int32_t get_offset_of_m_delaySign_0() { return static_cast<int32_t>(offsetof(AssemblyDelaySignAttribute_t176441654, ___m_delaySign_0)); }
	inline bool get_m_delaySign_0() const { return ___m_delaySign_0; }
	inline bool* get_address_of_m_delaySign_0() { return &___m_delaySign_0; }
	inline void set_m_delaySign_0(bool value)
	{
		___m_delaySign_0 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // ASSEMBLYDELAYSIGNATTRIBUTE_T176441654_H
#ifndef ASSEMBLYDESCRIPTIONATTRIBUTE_T1046996844_H
#define ASSEMBLYDESCRIPTIONATTRIBUTE_T1046996844_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Reflection.AssemblyDescriptionAttribute
struct  AssemblyDescriptionAttribute_t1046996844  : public Attribute_t861562559
{
public:
	// System.String System.Reflection.AssemblyDescriptionAttribute::m_description
	String_t* ___m_description_0;

public:
	inline static int32_t get_offset_of_m_description_0() { return static_cast<int32_t>(offsetof(AssemblyDescriptionAttribute_t1046996844, ___m_description_0)); }
	inline String_t* get_m_description_0() const { return ___m_description_0; }
	inline String_t** get_address_of_m_description_0() { return &___m_description_0; }
	inline void set_m_description_0(String_t* value)
	{
		___m_description_0 = value;
		Il2CppCodeGenWriteBarrier((&___m_description_0), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // ASSEMBLYDESCRIPTIONATTRIBUTE_T1046996844_H
#ifndef ASSEMBLYFILEVERSIONATTRIBUTE_T14927972_H
#define ASSEMBLYFILEVERSIONATTRIBUTE_T14927972_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Reflection.AssemblyFileVersionAttribute
struct  AssemblyFileVersionAttribute_t14927972  : public Attribute_t861562559
{
public:
	// System.String System.Reflection.AssemblyFileVersionAttribute::_version
	String_t* ____version_0;

public:
	inline static int32_t get_offset_of__version_0() { return static_cast<int32_t>(offsetof(AssemblyFileVersionAttribute_t14927972, ____version_0)); }
	inline String_t* get__version_0() const { return ____version_0; }
	inline String_t** get_address_of__version_0() { return &____version_0; }
	inline void set__version_0(String_t* value)
	{
		____version_0 = value;
		Il2CppCodeGenWriteBarrier((&____version_0), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // ASSEMBLYFILEVERSIONATTRIBUTE_T14927972_H
#ifndef ASSEMBLYINFORMATIONALVERSIONATTRIBUTE_T3037764991_H
#define ASSEMBLYINFORMATIONALVERSIONATTRIBUTE_T3037764991_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Reflection.AssemblyInformationalVersionAttribute
struct  AssemblyInformationalVersionAttribute_t3037764991  : public Attribute_t861562559
{
public:
	// System.String System.Reflection.AssemblyInformationalVersionAttribute::m_informationalVersion
	String_t* ___m_informationalVersion_0;

public:
	inline static int32_t get_offset_of_m_informationalVersion_0() { return static_cast<int32_t>(offsetof(AssemblyInformationalVersionAttribute_t3037764991, ___m_informationalVersion_0)); }
	inline String_t* get_m_informationalVersion_0() const { return ___m_informationalVersion_0; }
	inline String_t** get_address_of_m_informationalVersion_0() { return &___m_informationalVersion_0; }
	inline void set_m_informationalVersion_0(String_t* value)
	{
		___m_informationalVersion_0 = value;
		Il2CppCodeGenWriteBarrier((&___m_informationalVersion_0), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // ASSEMBLYINFORMATIONALVERSIONATTRIBUTE_T3037764991_H
#ifndef ASSEMBLYKEYFILEATTRIBUTE_T2825689142_H
#define ASSEMBLYKEYFILEATTRIBUTE_T2825689142_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Reflection.AssemblyKeyFileAttribute
struct  AssemblyKeyFileAttribute_t2825689142  : public Attribute_t861562559
{
public:
	// System.String System.Reflection.AssemblyKeyFileAttribute::m_keyFile
	String_t* ___m_keyFile_0;

public:
	inline static int32_t get_offset_of_m_keyFile_0() { return static_cast<int32_t>(offsetof(AssemblyKeyFileAttribute_t2825689142, ___m_keyFile_0)); }
	inline String_t* get_m_keyFile_0() const { return ___m_keyFile_0; }
	inline String_t** get_address_of_m_keyFile_0() { return &___m_keyFile_0; }
	inline void set_m_keyFile_0(String_t* value)
	{
		___m_keyFile_0 = value;
		Il2CppCodeGenWriteBarrier((&___m_keyFile_0), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // ASSEMBLYKEYFILEATTRIBUTE_T2825689142_H
#ifndef ASSEMBLYPRODUCTATTRIBUTE_T1000945320_H
#define ASSEMBLYPRODUCTATTRIBUTE_T1000945320_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Reflection.AssemblyProductAttribute
struct  AssemblyProductAttribute_t1000945320  : public Attribute_t861562559
{
public:
	// System.String System.Reflection.AssemblyProductAttribute::m_product
	String_t* ___m_product_0;

public:
	inline static int32_t get_offset_of_m_product_0() { return static_cast<int32_t>(offsetof(AssemblyProductAttribute_t1000945320, ___m_product_0)); }
	inline String_t* get_m_product_0() const { return ___m_product_0; }
	inline String_t** get_address_of_m_product_0() { return &___m_product_0; }
	inline void set_m_product_0(String_t* value)
	{
		___m_product_0 = value;
		Il2CppCodeGenWriteBarrier((&___m_product_0), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // ASSEMBLYPRODUCTATTRIBUTE_T1000945320_H
#ifndef ASSEMBLYTITLEATTRIBUTE_T1901133402_H
#define ASSEMBLYTITLEATTRIBUTE_T1901133402_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Reflection.AssemblyTitleAttribute
struct  AssemblyTitleAttribute_t1901133402  : public Attribute_t861562559
{
public:
	// System.String System.Reflection.AssemblyTitleAttribute::m_title
	String_t* ___m_title_0;

public:
	inline static int32_t get_offset_of_m_title_0() { return static_cast<int32_t>(offsetof(AssemblyTitleAttribute_t1901133402, ___m_title_0)); }
	inline String_t* get_m_title_0() const { return ___m_title_0; }
	inline String_t** get_address_of_m_title_0() { return &___m_title_0; }
	inline void set_m_title_0(String_t* value)
	{
		___m_title_0 = value;
		Il2CppCodeGenWriteBarrier((&___m_title_0), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // ASSEMBLYTITLEATTRIBUTE_T1901133402_H
#ifndef ASSEMBLYTRADEMARKATTRIBUTE_T3598190473_H
#define ASSEMBLYTRADEMARKATTRIBUTE_T3598190473_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Reflection.AssemblyTrademarkAttribute
struct  AssemblyTrademarkAttribute_t3598190473  : public Attribute_t861562559
{
public:
	// System.String System.Reflection.AssemblyTrademarkAttribute::m_trademark
	String_t* ___m_trademark_0;

public:
	inline static int32_t get_offset_of_m_trademark_0() { return static_cast<int32_t>(offsetof(AssemblyTrademarkAttribute_t3598190473, ___m_trademark_0)); }
	inline String_t* get_m_trademark_0() const { return ___m_trademark_0; }
	inline String_t** get_address_of_m_trademark_0() { return &___m_trademark_0; }
	inline void set_m_trademark_0(String_t* value)
	{
		___m_trademark_0 = value;
		Il2CppCodeGenWriteBarrier((&___m_trademark_0), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // ASSEMBLYTRADEMARKATTRIBUTE_T3598190473_H
#ifndef DEFAULTMEMBERATTRIBUTE_T3275092422_H
#define DEFAULTMEMBERATTRIBUTE_T3275092422_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Reflection.DefaultMemberAttribute
struct  DefaultMemberAttribute_t3275092422  : public Attribute_t861562559
{
public:
	// System.String System.Reflection.DefaultMemberAttribute::m_memberName
	String_t* ___m_memberName_0;

public:
	inline static int32_t get_offset_of_m_memberName_0() { return static_cast<int32_t>(offsetof(DefaultMemberAttribute_t3275092422, ___m_memberName_0)); }
	inline String_t* get_m_memberName_0() const { return ___m_memberName_0; }
	inline String_t** get_address_of_m_memberName_0() { return &___m_memberName_0; }
	inline void set_m_memberName_0(String_t* value)
	{
		___m_memberName_0 = value;
		Il2CppCodeGenWriteBarrier((&___m_memberName_0), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // DEFAULTMEMBERATTRIBUTE_T3275092422_H
#ifndef METHODBASE_T_H
#define METHODBASE_T_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Reflection.MethodBase
struct  MethodBase_t  : public MemberInfo_t
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // METHODBASE_T_H
#ifndef PARAMETERMODIFIER_T1461694466_H
#define PARAMETERMODIFIER_T1461694466_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Reflection.ParameterModifier
struct  ParameterModifier_t1461694466 
{
public:
	// System.Boolean[] System.Reflection.ParameterModifier::_byRef
	BooleanU5BU5D_t2897418192* ____byRef_0;

public:
	inline static int32_t get_offset_of__byRef_0() { return static_cast<int32_t>(offsetof(ParameterModifier_t1461694466, ____byRef_0)); }
	inline BooleanU5BU5D_t2897418192* get__byRef_0() const { return ____byRef_0; }
	inline BooleanU5BU5D_t2897418192** get_address_of__byRef_0() { return &____byRef_0; }
	inline void set__byRef_0(BooleanU5BU5D_t2897418192* value)
	{
		____byRef_0 = value;
		Il2CppCodeGenWriteBarrier((&____byRef_0), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
// Native definition for P/Invoke marshalling of System.Reflection.ParameterModifier
struct ParameterModifier_t1461694466_marshaled_pinvoke
{
	int32_t* ____byRef_0;
};
// Native definition for COM marshalling of System.Reflection.ParameterModifier
struct ParameterModifier_t1461694466_marshaled_com
{
	int32_t* ____byRef_0;
};
#endif // PARAMETERMODIFIER_T1461694466_H
#ifndef RESOURCELOCATOR_T3723970807_H
#define RESOURCELOCATOR_T3723970807_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Resources.ResourceLocator
struct  ResourceLocator_t3723970807 
{
public:
	// System.Object System.Resources.ResourceLocator::_value
	RuntimeObject * ____value_0;
	// System.Int32 System.Resources.ResourceLocator::_dataPos
	int32_t ____dataPos_1;

public:
	inline static int32_t get_offset_of__value_0() { return static_cast<int32_t>(offsetof(ResourceLocator_t3723970807, ____value_0)); }
	inline RuntimeObject * get__value_0() const { return ____value_0; }
	inline RuntimeObject ** get_address_of__value_0() { return &____value_0; }
	inline void set__value_0(RuntimeObject * value)
	{
		____value_0 = value;
		Il2CppCodeGenWriteBarrier((&____value_0), value);
	}

	inline static int32_t get_offset_of__dataPos_1() { return static_cast<int32_t>(offsetof(ResourceLocator_t3723970807, ____dataPos_1)); }
	inline int32_t get__dataPos_1() const { return ____dataPos_1; }
	inline int32_t* get_address_of__dataPos_1() { return &____dataPos_1; }
	inline void set__dataPos_1(int32_t value)
	{
		____dataPos_1 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
// Native definition for P/Invoke marshalling of System.Resources.ResourceLocator
struct ResourceLocator_t3723970807_marshaled_pinvoke
{
	Il2CppIUnknown* ____value_0;
	int32_t ____dataPos_1;
};
// Native definition for COM marshalling of System.Resources.ResourceLocator
struct ResourceLocator_t3723970807_marshaled_com
{
	Il2CppIUnknown* ____value_0;
	int32_t ____dataPos_1;
};
#endif // RESOURCELOCATOR_T3723970807_H
#ifndef RUNTIMERESOURCESET_T3081501575_H
#define RUNTIMERESOURCESET_T3081501575_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Resources.RuntimeResourceSet
struct  RuntimeResourceSet_t3081501575  : public ResourceSet_t2827911187
{
public:
	// System.Collections.Generic.Dictionary`2<System.String,System.Resources.ResourceLocator> System.Resources.RuntimeResourceSet::_resCache
	Dictionary_2_t3509227106 * ____resCache_4;
	// System.Resources.ResourceReader System.Resources.RuntimeResourceSet::_defaultReader
	ResourceReader_t3300492639 * ____defaultReader_5;
	// System.Collections.Generic.Dictionary`2<System.String,System.Resources.ResourceLocator> System.Resources.RuntimeResourceSet::_caseInsensitiveTable
	Dictionary_2_t3509227106 * ____caseInsensitiveTable_6;
	// System.Boolean System.Resources.RuntimeResourceSet::_haveReadFromReader
	bool ____haveReadFromReader_7;

public:
	inline static int32_t get_offset_of__resCache_4() { return static_cast<int32_t>(offsetof(RuntimeResourceSet_t3081501575, ____resCache_4)); }
	inline Dictionary_2_t3509227106 * get__resCache_4() const { return ____resCache_4; }
	inline Dictionary_2_t3509227106 ** get_address_of__resCache_4() { return &____resCache_4; }
	inline void set__resCache_4(Dictionary_2_t3509227106 * value)
	{
		____resCache_4 = value;
		Il2CppCodeGenWriteBarrier((&____resCache_4), value);
	}

	inline static int32_t get_offset_of__defaultReader_5() { return static_cast<int32_t>(offsetof(RuntimeResourceSet_t3081501575, ____defaultReader_5)); }
	inline ResourceReader_t3300492639 * get__defaultReader_5() const { return ____defaultReader_5; }
	inline ResourceReader_t3300492639 ** get_address_of__defaultReader_5() { return &____defaultReader_5; }
	inline void set__defaultReader_5(ResourceReader_t3300492639 * value)
	{
		____defaultReader_5 = value;
		Il2CppCodeGenWriteBarrier((&____defaultReader_5), value);
	}

	inline static int32_t get_offset_of__caseInsensitiveTable_6() { return static_cast<int32_t>(offsetof(RuntimeResourceSet_t3081501575, ____caseInsensitiveTable_6)); }
	inline Dictionary_2_t3509227106 * get__caseInsensitiveTable_6() const { return ____caseInsensitiveTable_6; }
	inline Dictionary_2_t3509227106 ** get_address_of__caseInsensitiveTable_6() { return &____caseInsensitiveTable_6; }
	inline void set__caseInsensitiveTable_6(Dictionary_2_t3509227106 * value)
	{
		____caseInsensitiveTable_6 = value;
		Il2CppCodeGenWriteBarrier((&____caseInsensitiveTable_6), value);
	}

	inline static int32_t get_offset_of__haveReadFromReader_7() { return static_cast<int32_t>(offsetof(RuntimeResourceSet_t3081501575, ____haveReadFromReader_7)); }
	inline bool get__haveReadFromReader_7() const { return ____haveReadFromReader_7; }
	inline bool* get_address_of__haveReadFromReader_7() { return &____haveReadFromReader_7; }
	inline void set__haveReadFromReader_7(bool value)
	{
		____haveReadFromReader_7 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // RUNTIMERESOURCESET_T3081501575_H
#ifndef SATELLITECONTRACTVERSIONATTRIBUTE_T3549813284_H
#define SATELLITECONTRACTVERSIONATTRIBUTE_T3549813284_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Resources.SatelliteContractVersionAttribute
struct  SatelliteContractVersionAttribute_t3549813284  : public Attribute_t861562559
{
public:
	// System.String System.Resources.SatelliteContractVersionAttribute::_version
	String_t* ____version_0;

public:
	inline static int32_t get_offset_of__version_0() { return static_cast<int32_t>(offsetof(SatelliteContractVersionAttribute_t3549813284, ____version_0)); }
	inline String_t* get__version_0() const { return ____version_0; }
	inline String_t** get_address_of__version_0() { return &____version_0; }
	inline void set__version_0(String_t* value)
	{
		____version_0 = value;
		Il2CppCodeGenWriteBarrier((&____version_0), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // SATELLITECONTRACTVERSIONATTRIBUTE_T3549813284_H
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
#ifndef DECODERNLS_T637950881_H
#define DECODERNLS_T637950881_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Text.DecoderNLS
struct  DecoderNLS_t637950881  : public Decoder_t2204182725
{
public:
	// System.Text.Encoding System.Text.DecoderNLS::m_encoding
	Encoding_t1523322056 * ___m_encoding_2;
	// System.Boolean System.Text.DecoderNLS::m_mustFlush
	bool ___m_mustFlush_3;
	// System.Boolean System.Text.DecoderNLS::m_throwOnOverflow
	bool ___m_throwOnOverflow_4;
	// System.Int32 System.Text.DecoderNLS::m_bytesUsed
	int32_t ___m_bytesUsed_5;

public:
	inline static int32_t get_offset_of_m_encoding_2() { return static_cast<int32_t>(offsetof(DecoderNLS_t637950881, ___m_encoding_2)); }
	inline Encoding_t1523322056 * get_m_encoding_2() const { return ___m_encoding_2; }
	inline Encoding_t1523322056 ** get_address_of_m_encoding_2() { return &___m_encoding_2; }
	inline void set_m_encoding_2(Encoding_t1523322056 * value)
	{
		___m_encoding_2 = value;
		Il2CppCodeGenWriteBarrier((&___m_encoding_2), value);
	}

	inline static int32_t get_offset_of_m_mustFlush_3() { return static_cast<int32_t>(offsetof(DecoderNLS_t637950881, ___m_mustFlush_3)); }
	inline bool get_m_mustFlush_3() const { return ___m_mustFlush_3; }
	inline bool* get_address_of_m_mustFlush_3() { return &___m_mustFlush_3; }
	inline void set_m_mustFlush_3(bool value)
	{
		___m_mustFlush_3 = value;
	}

	inline static int32_t get_offset_of_m_throwOnOverflow_4() { return static_cast<int32_t>(offsetof(DecoderNLS_t637950881, ___m_throwOnOverflow_4)); }
	inline bool get_m_throwOnOverflow_4() const { return ___m_throwOnOverflow_4; }
	inline bool* get_address_of_m_throwOnOverflow_4() { return &___m_throwOnOverflow_4; }
	inline void set_m_throwOnOverflow_4(bool value)
	{
		___m_throwOnOverflow_4 = value;
	}

	inline static int32_t get_offset_of_m_bytesUsed_5() { return static_cast<int32_t>(offsetof(DecoderNLS_t637950881, ___m_bytesUsed_5)); }
	inline int32_t get_m_bytesUsed_5() const { return ___m_bytesUsed_5; }
	inline int32_t* get_address_of_m_bytesUsed_5() { return &___m_bytesUsed_5; }
	inline void set_m_bytesUsed_5(int32_t value)
	{
		___m_bytesUsed_5 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // DECODERNLS_T637950881_H
#ifndef DECODERREPLACEMENTFALLBACK_T1462101135_H
#define DECODERREPLACEMENTFALLBACK_T1462101135_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Text.DecoderReplacementFallback
struct  DecoderReplacementFallback_t1462101135  : public DecoderFallback_t3123823036
{
public:
	// System.String System.Text.DecoderReplacementFallback::strDefault
	String_t* ___strDefault_4;

public:
	inline static int32_t get_offset_of_strDefault_4() { return static_cast<int32_t>(offsetof(DecoderReplacementFallback_t1462101135, ___strDefault_4)); }
	inline String_t* get_strDefault_4() const { return ___strDefault_4; }
	inline String_t** get_address_of_strDefault_4() { return &___strDefault_4; }
	inline void set_strDefault_4(String_t* value)
	{
		___strDefault_4 = value;
		Il2CppCodeGenWriteBarrier((&___strDefault_4), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // DECODERREPLACEMENTFALLBACK_T1462101135_H
#ifndef DECODERREPLACEMENTFALLBACKBUFFER_T841144779_H
#define DECODERREPLACEMENTFALLBACKBUFFER_T841144779_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Text.DecoderReplacementFallbackBuffer
struct  DecoderReplacementFallbackBuffer_t841144779  : public DecoderFallbackBuffer_t2402303981
{
public:
	// System.String System.Text.DecoderReplacementFallbackBuffer::strDefault
	String_t* ___strDefault_2;
	// System.Int32 System.Text.DecoderReplacementFallbackBuffer::fallbackCount
	int32_t ___fallbackCount_3;
	// System.Int32 System.Text.DecoderReplacementFallbackBuffer::fallbackIndex
	int32_t ___fallbackIndex_4;

public:
	inline static int32_t get_offset_of_strDefault_2() { return static_cast<int32_t>(offsetof(DecoderReplacementFallbackBuffer_t841144779, ___strDefault_2)); }
	inline String_t* get_strDefault_2() const { return ___strDefault_2; }
	inline String_t** get_address_of_strDefault_2() { return &___strDefault_2; }
	inline void set_strDefault_2(String_t* value)
	{
		___strDefault_2 = value;
		Il2CppCodeGenWriteBarrier((&___strDefault_2), value);
	}

	inline static int32_t get_offset_of_fallbackCount_3() { return static_cast<int32_t>(offsetof(DecoderReplacementFallbackBuffer_t841144779, ___fallbackCount_3)); }
	inline int32_t get_fallbackCount_3() const { return ___fallbackCount_3; }
	inline int32_t* get_address_of_fallbackCount_3() { return &___fallbackCount_3; }
	inline void set_fallbackCount_3(int32_t value)
	{
		___fallbackCount_3 = value;
	}

	inline static int32_t get_offset_of_fallbackIndex_4() { return static_cast<int32_t>(offsetof(DecoderReplacementFallbackBuffer_t841144779, ___fallbackIndex_4)); }
	inline int32_t get_fallbackIndex_4() const { return ___fallbackIndex_4; }
	inline int32_t* get_address_of_fallbackIndex_4() { return &___fallbackIndex_4; }
	inline void set_fallbackIndex_4(int32_t value)
	{
		___fallbackIndex_4 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // DECODERREPLACEMENTFALLBACKBUFFER_T841144779_H
#ifndef ENCODEREXCEPTIONFALLBACK_T1243849599_H
#define ENCODEREXCEPTIONFALLBACK_T1243849599_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Text.EncoderExceptionFallback
struct  EncoderExceptionFallback_t1243849599  : public EncoderFallback_t1188251036
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // ENCODEREXCEPTIONFALLBACK_T1243849599_H
#ifndef ENCODEREXCEPTIONFALLBACKBUFFER_T3597232471_H
#define ENCODEREXCEPTIONFALLBACKBUFFER_T3597232471_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Text.EncoderExceptionFallbackBuffer
struct  EncoderExceptionFallbackBuffer_t3597232471  : public EncoderFallbackBuffer_t3523102303
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // ENCODEREXCEPTIONFALLBACKBUFFER_T3597232471_H
#ifndef ENCODERNLS_T449404832_H
#define ENCODERNLS_T449404832_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Text.EncoderNLS
struct  EncoderNLS_t449404832  : public Encoder_t2198218980
{
public:
	// System.Char System.Text.EncoderNLS::charLeftOver
	Il2CppChar ___charLeftOver_2;
	// System.Text.Encoding System.Text.EncoderNLS::m_encoding
	Encoding_t1523322056 * ___m_encoding_3;
	// System.Boolean System.Text.EncoderNLS::m_mustFlush
	bool ___m_mustFlush_4;
	// System.Boolean System.Text.EncoderNLS::m_throwOnOverflow
	bool ___m_throwOnOverflow_5;
	// System.Int32 System.Text.EncoderNLS::m_charsUsed
	int32_t ___m_charsUsed_6;

public:
	inline static int32_t get_offset_of_charLeftOver_2() { return static_cast<int32_t>(offsetof(EncoderNLS_t449404832, ___charLeftOver_2)); }
	inline Il2CppChar get_charLeftOver_2() const { return ___charLeftOver_2; }
	inline Il2CppChar* get_address_of_charLeftOver_2() { return &___charLeftOver_2; }
	inline void set_charLeftOver_2(Il2CppChar value)
	{
		___charLeftOver_2 = value;
	}

	inline static int32_t get_offset_of_m_encoding_3() { return static_cast<int32_t>(offsetof(EncoderNLS_t449404832, ___m_encoding_3)); }
	inline Encoding_t1523322056 * get_m_encoding_3() const { return ___m_encoding_3; }
	inline Encoding_t1523322056 ** get_address_of_m_encoding_3() { return &___m_encoding_3; }
	inline void set_m_encoding_3(Encoding_t1523322056 * value)
	{
		___m_encoding_3 = value;
		Il2CppCodeGenWriteBarrier((&___m_encoding_3), value);
	}

	inline static int32_t get_offset_of_m_mustFlush_4() { return static_cast<int32_t>(offsetof(EncoderNLS_t449404832, ___m_mustFlush_4)); }
	inline bool get_m_mustFlush_4() const { return ___m_mustFlush_4; }
	inline bool* get_address_of_m_mustFlush_4() { return &___m_mustFlush_4; }
	inline void set_m_mustFlush_4(bool value)
	{
		___m_mustFlush_4 = value;
	}

	inline static int32_t get_offset_of_m_throwOnOverflow_5() { return static_cast<int32_t>(offsetof(EncoderNLS_t449404832, ___m_throwOnOverflow_5)); }
	inline bool get_m_throwOnOverflow_5() const { return ___m_throwOnOverflow_5; }
	inline bool* get_address_of_m_throwOnOverflow_5() { return &___m_throwOnOverflow_5; }
	inline void set_m_throwOnOverflow_5(bool value)
	{
		___m_throwOnOverflow_5 = value;
	}

	inline static int32_t get_offset_of_m_charsUsed_6() { return static_cast<int32_t>(offsetof(EncoderNLS_t449404832, ___m_charsUsed_6)); }
	inline int32_t get_m_charsUsed_6() const { return ___m_charsUsed_6; }
	inline int32_t* get_address_of_m_charsUsed_6() { return &___m_charsUsed_6; }
	inline void set_m_charsUsed_6(int32_t value)
	{
		___m_charsUsed_6 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // ENCODERNLS_T449404832_H
#ifndef ENCODERREPLACEMENTFALLBACK_T1623206753_H
#define ENCODERREPLACEMENTFALLBACK_T1623206753_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Text.EncoderReplacementFallback
struct  EncoderReplacementFallback_t1623206753  : public EncoderFallback_t1188251036
{
public:
	// System.String System.Text.EncoderReplacementFallback::strDefault
	String_t* ___strDefault_4;

public:
	inline static int32_t get_offset_of_strDefault_4() { return static_cast<int32_t>(offsetof(EncoderReplacementFallback_t1623206753, ___strDefault_4)); }
	inline String_t* get_strDefault_4() const { return ___strDefault_4; }
	inline String_t** get_address_of_strDefault_4() { return &___strDefault_4; }
	inline void set_strDefault_4(String_t* value)
	{
		___strDefault_4 = value;
		Il2CppCodeGenWriteBarrier((&___strDefault_4), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // ENCODERREPLACEMENTFALLBACK_T1623206753_H
#ifndef ENCODERREPLACEMENTFALLBACKBUFFER_T1863187162_H
#define ENCODERREPLACEMENTFALLBACKBUFFER_T1863187162_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Text.EncoderReplacementFallbackBuffer
struct  EncoderReplacementFallbackBuffer_t1863187162  : public EncoderFallbackBuffer_t3523102303
{
public:
	// System.String System.Text.EncoderReplacementFallbackBuffer::strDefault
	String_t* ___strDefault_7;
	// System.Int32 System.Text.EncoderReplacementFallbackBuffer::fallbackCount
	int32_t ___fallbackCount_8;
	// System.Int32 System.Text.EncoderReplacementFallbackBuffer::fallbackIndex
	int32_t ___fallbackIndex_9;

public:
	inline static int32_t get_offset_of_strDefault_7() { return static_cast<int32_t>(offsetof(EncoderReplacementFallbackBuffer_t1863187162, ___strDefault_7)); }
	inline String_t* get_strDefault_7() const { return ___strDefault_7; }
	inline String_t** get_address_of_strDefault_7() { return &___strDefault_7; }
	inline void set_strDefault_7(String_t* value)
	{
		___strDefault_7 = value;
		Il2CppCodeGenWriteBarrier((&___strDefault_7), value);
	}

	inline static int32_t get_offset_of_fallbackCount_8() { return static_cast<int32_t>(offsetof(EncoderReplacementFallbackBuffer_t1863187162, ___fallbackCount_8)); }
	inline int32_t get_fallbackCount_8() const { return ___fallbackCount_8; }
	inline int32_t* get_address_of_fallbackCount_8() { return &___fallbackCount_8; }
	inline void set_fallbackCount_8(int32_t value)
	{
		___fallbackCount_8 = value;
	}

	inline static int32_t get_offset_of_fallbackIndex_9() { return static_cast<int32_t>(offsetof(EncoderReplacementFallbackBuffer_t1863187162, ___fallbackIndex_9)); }
	inline int32_t get_fallbackIndex_9() const { return ___fallbackIndex_9; }
	inline int32_t* get_address_of_fallbackIndex_9() { return &___fallbackIndex_9; }
	inline void set_fallbackIndex_9(int32_t value)
	{
		___fallbackIndex_9 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // ENCODERREPLACEMENTFALLBACKBUFFER_T1863187162_H
#ifndef DEFAULTDECODER_T1768440197_H
#define DEFAULTDECODER_T1768440197_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Text.Encoding/DefaultDecoder
struct  DefaultDecoder_t1768440197  : public Decoder_t2204182725
{
public:
	// System.Text.Encoding System.Text.Encoding/DefaultDecoder::m_encoding
	Encoding_t1523322056 * ___m_encoding_2;
	// System.Boolean System.Text.Encoding/DefaultDecoder::m_hasInitializedEncoding
	bool ___m_hasInitializedEncoding_3;

public:
	inline static int32_t get_offset_of_m_encoding_2() { return static_cast<int32_t>(offsetof(DefaultDecoder_t1768440197, ___m_encoding_2)); }
	inline Encoding_t1523322056 * get_m_encoding_2() const { return ___m_encoding_2; }
	inline Encoding_t1523322056 ** get_address_of_m_encoding_2() { return &___m_encoding_2; }
	inline void set_m_encoding_2(Encoding_t1523322056 * value)
	{
		___m_encoding_2 = value;
		Il2CppCodeGenWriteBarrier((&___m_encoding_2), value);
	}

	inline static int32_t get_offset_of_m_hasInitializedEncoding_3() { return static_cast<int32_t>(offsetof(DefaultDecoder_t1768440197, ___m_hasInitializedEncoding_3)); }
	inline bool get_m_hasInitializedEncoding_3() const { return ___m_hasInitializedEncoding_3; }
	inline bool* get_address_of_m_hasInitializedEncoding_3() { return &___m_hasInitializedEncoding_3; }
	inline void set_m_hasInitializedEncoding_3(bool value)
	{
		___m_hasInitializedEncoding_3 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // DEFAULTDECODER_T1768440197_H
#ifndef DEFAULTENCODER_T1761427806_H
#define DEFAULTENCODER_T1761427806_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Text.Encoding/DefaultEncoder
struct  DefaultEncoder_t1761427806  : public Encoder_t2198218980
{
public:
	// System.Text.Encoding System.Text.Encoding/DefaultEncoder::m_encoding
	Encoding_t1523322056 * ___m_encoding_2;
	// System.Boolean System.Text.Encoding/DefaultEncoder::m_hasInitializedEncoding
	bool ___m_hasInitializedEncoding_3;
	// System.Char System.Text.Encoding/DefaultEncoder::charLeftOver
	Il2CppChar ___charLeftOver_4;

public:
	inline static int32_t get_offset_of_m_encoding_2() { return static_cast<int32_t>(offsetof(DefaultEncoder_t1761427806, ___m_encoding_2)); }
	inline Encoding_t1523322056 * get_m_encoding_2() const { return ___m_encoding_2; }
	inline Encoding_t1523322056 ** get_address_of_m_encoding_2() { return &___m_encoding_2; }
	inline void set_m_encoding_2(Encoding_t1523322056 * value)
	{
		___m_encoding_2 = value;
		Il2CppCodeGenWriteBarrier((&___m_encoding_2), value);
	}

	inline static int32_t get_offset_of_m_hasInitializedEncoding_3() { return static_cast<int32_t>(offsetof(DefaultEncoder_t1761427806, ___m_hasInitializedEncoding_3)); }
	inline bool get_m_hasInitializedEncoding_3() const { return ___m_hasInitializedEncoding_3; }
	inline bool* get_address_of_m_hasInitializedEncoding_3() { return &___m_hasInitializedEncoding_3; }
	inline void set_m_hasInitializedEncoding_3(bool value)
	{
		___m_hasInitializedEncoding_3 = value;
	}

	inline static int32_t get_offset_of_charLeftOver_4() { return static_cast<int32_t>(offsetof(DefaultEncoder_t1761427806, ___charLeftOver_4)); }
	inline Il2CppChar get_charLeftOver_4() const { return ___charLeftOver_4; }
	inline Il2CppChar* get_address_of_charLeftOver_4() { return &___charLeftOver_4; }
	inline void set_charLeftOver_4(Il2CppChar value)
	{
		___charLeftOver_4 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // DEFAULTENCODER_T1761427806_H
#ifndef ENCODINGNLS_T2860325670_H
#define ENCODINGNLS_T2860325670_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Text.EncodingNLS
struct  EncodingNLS_t2860325670  : public Encoding_t1523322056
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // ENCODINGNLS_T2860325670_H
#ifndef INTERNALENCODERBESTFITFALLBACK_T3121776013_H
#define INTERNALENCODERBESTFITFALLBACK_T3121776013_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Text.InternalEncoderBestFitFallback
struct  InternalEncoderBestFitFallback_t3121776013  : public EncoderFallback_t1188251036
{
public:
	// System.Text.Encoding System.Text.InternalEncoderBestFitFallback::encoding
	Encoding_t1523322056 * ___encoding_4;
	// System.Char[] System.Text.InternalEncoderBestFitFallback::arrayBestFit
	CharU5BU5D_t3528271667* ___arrayBestFit_5;

public:
	inline static int32_t get_offset_of_encoding_4() { return static_cast<int32_t>(offsetof(InternalEncoderBestFitFallback_t3121776013, ___encoding_4)); }
	inline Encoding_t1523322056 * get_encoding_4() const { return ___encoding_4; }
	inline Encoding_t1523322056 ** get_address_of_encoding_4() { return &___encoding_4; }
	inline void set_encoding_4(Encoding_t1523322056 * value)
	{
		___encoding_4 = value;
		Il2CppCodeGenWriteBarrier((&___encoding_4), value);
	}

	inline static int32_t get_offset_of_arrayBestFit_5() { return static_cast<int32_t>(offsetof(InternalEncoderBestFitFallback_t3121776013, ___arrayBestFit_5)); }
	inline CharU5BU5D_t3528271667* get_arrayBestFit_5() const { return ___arrayBestFit_5; }
	inline CharU5BU5D_t3528271667** get_address_of_arrayBestFit_5() { return &___arrayBestFit_5; }
	inline void set_arrayBestFit_5(CharU5BU5D_t3528271667* value)
	{
		___arrayBestFit_5 = value;
		Il2CppCodeGenWriteBarrier((&___arrayBestFit_5), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // INTERNALENCODERBESTFITFALLBACK_T3121776013_H
#ifndef INTERNALENCODERBESTFITFALLBACKBUFFER_T2370301869_H
#define INTERNALENCODERBESTFITFALLBACKBUFFER_T2370301869_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Text.InternalEncoderBestFitFallbackBuffer
struct  InternalEncoderBestFitFallbackBuffer_t2370301869  : public EncoderFallbackBuffer_t3523102303
{
public:
	// System.Char System.Text.InternalEncoderBestFitFallbackBuffer::cBestFit
	Il2CppChar ___cBestFit_7;
	// System.Text.InternalEncoderBestFitFallback System.Text.InternalEncoderBestFitFallbackBuffer::oFallback
	InternalEncoderBestFitFallback_t3121776013 * ___oFallback_8;
	// System.Int32 System.Text.InternalEncoderBestFitFallbackBuffer::iCount
	int32_t ___iCount_9;
	// System.Int32 System.Text.InternalEncoderBestFitFallbackBuffer::iSize
	int32_t ___iSize_10;

public:
	inline static int32_t get_offset_of_cBestFit_7() { return static_cast<int32_t>(offsetof(InternalEncoderBestFitFallbackBuffer_t2370301869, ___cBestFit_7)); }
	inline Il2CppChar get_cBestFit_7() const { return ___cBestFit_7; }
	inline Il2CppChar* get_address_of_cBestFit_7() { return &___cBestFit_7; }
	inline void set_cBestFit_7(Il2CppChar value)
	{
		___cBestFit_7 = value;
	}

	inline static int32_t get_offset_of_oFallback_8() { return static_cast<int32_t>(offsetof(InternalEncoderBestFitFallbackBuffer_t2370301869, ___oFallback_8)); }
	inline InternalEncoderBestFitFallback_t3121776013 * get_oFallback_8() const { return ___oFallback_8; }
	inline InternalEncoderBestFitFallback_t3121776013 ** get_address_of_oFallback_8() { return &___oFallback_8; }
	inline void set_oFallback_8(InternalEncoderBestFitFallback_t3121776013 * value)
	{
		___oFallback_8 = value;
		Il2CppCodeGenWriteBarrier((&___oFallback_8), value);
	}

	inline static int32_t get_offset_of_iCount_9() { return static_cast<int32_t>(offsetof(InternalEncoderBestFitFallbackBuffer_t2370301869, ___iCount_9)); }
	inline int32_t get_iCount_9() const { return ___iCount_9; }
	inline int32_t* get_address_of_iCount_9() { return &___iCount_9; }
	inline void set_iCount_9(int32_t value)
	{
		___iCount_9 = value;
	}

	inline static int32_t get_offset_of_iSize_10() { return static_cast<int32_t>(offsetof(InternalEncoderBestFitFallbackBuffer_t2370301869, ___iSize_10)); }
	inline int32_t get_iSize_10() const { return ___iSize_10; }
	inline int32_t* get_address_of_iSize_10() { return &___iSize_10; }
	inline void set_iSize_10(int32_t value)
	{
		___iSize_10 = value;
	}
};

struct InternalEncoderBestFitFallbackBuffer_t2370301869_StaticFields
{
public:
	// System.Object System.Text.InternalEncoderBestFitFallbackBuffer::s_InternalSyncObject
	RuntimeObject * ___s_InternalSyncObject_11;

public:
	inline static int32_t get_offset_of_s_InternalSyncObject_11() { return static_cast<int32_t>(offsetof(InternalEncoderBestFitFallbackBuffer_t2370301869_StaticFields, ___s_InternalSyncObject_11)); }
	inline RuntimeObject * get_s_InternalSyncObject_11() const { return ___s_InternalSyncObject_11; }
	inline RuntimeObject ** get_address_of_s_InternalSyncObject_11() { return &___s_InternalSyncObject_11; }
	inline void set_s_InternalSyncObject_11(RuntimeObject * value)
	{
		___s_InternalSyncObject_11 = value;
		Il2CppCodeGenWriteBarrier((&___s_InternalSyncObject_11), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // INTERNALENCODERBESTFITFALLBACKBUFFER_T2370301869_H
#ifndef UTF32ENCODING_T312252005_H
#define UTF32ENCODING_T312252005_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Text.UTF32Encoding
struct  UTF32Encoding_t312252005  : public Encoding_t1523322056
{
public:
	// System.Boolean System.Text.UTF32Encoding::emitUTF32ByteOrderMark
	bool ___emitUTF32ByteOrderMark_16;
	// System.Boolean System.Text.UTF32Encoding::isThrowException
	bool ___isThrowException_17;
	// System.Boolean System.Text.UTF32Encoding::bigEndian
	bool ___bigEndian_18;

public:
	inline static int32_t get_offset_of_emitUTF32ByteOrderMark_16() { return static_cast<int32_t>(offsetof(UTF32Encoding_t312252005, ___emitUTF32ByteOrderMark_16)); }
	inline bool get_emitUTF32ByteOrderMark_16() const { return ___emitUTF32ByteOrderMark_16; }
	inline bool* get_address_of_emitUTF32ByteOrderMark_16() { return &___emitUTF32ByteOrderMark_16; }
	inline void set_emitUTF32ByteOrderMark_16(bool value)
	{
		___emitUTF32ByteOrderMark_16 = value;
	}

	inline static int32_t get_offset_of_isThrowException_17() { return static_cast<int32_t>(offsetof(UTF32Encoding_t312252005, ___isThrowException_17)); }
	inline bool get_isThrowException_17() const { return ___isThrowException_17; }
	inline bool* get_address_of_isThrowException_17() { return &___isThrowException_17; }
	inline void set_isThrowException_17(bool value)
	{
		___isThrowException_17 = value;
	}

	inline static int32_t get_offset_of_bigEndian_18() { return static_cast<int32_t>(offsetof(UTF32Encoding_t312252005, ___bigEndian_18)); }
	inline bool get_bigEndian_18() const { return ___bigEndian_18; }
	inline bool* get_address_of_bigEndian_18() { return &___bigEndian_18; }
	inline void set_bigEndian_18(bool value)
	{
		___bigEndian_18 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // UTF32ENCODING_T312252005_H
#ifndef UTF7ENCODING_T2644108479_H
#define UTF7ENCODING_T2644108479_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Text.UTF7Encoding
struct  UTF7Encoding_t2644108479  : public Encoding_t1523322056
{
public:
	// System.Byte[] System.Text.UTF7Encoding::base64Bytes
	ByteU5BU5D_t4116647657* ___base64Bytes_16;
	// System.SByte[] System.Text.UTF7Encoding::base64Values
	SByteU5BU5D_t2651576203* ___base64Values_17;
	// System.Boolean[] System.Text.UTF7Encoding::directEncode
	BooleanU5BU5D_t2897418192* ___directEncode_18;
	// System.Boolean System.Text.UTF7Encoding::m_allowOptionals
	bool ___m_allowOptionals_19;

public:
	inline static int32_t get_offset_of_base64Bytes_16() { return static_cast<int32_t>(offsetof(UTF7Encoding_t2644108479, ___base64Bytes_16)); }
	inline ByteU5BU5D_t4116647657* get_base64Bytes_16() const { return ___base64Bytes_16; }
	inline ByteU5BU5D_t4116647657** get_address_of_base64Bytes_16() { return &___base64Bytes_16; }
	inline void set_base64Bytes_16(ByteU5BU5D_t4116647657* value)
	{
		___base64Bytes_16 = value;
		Il2CppCodeGenWriteBarrier((&___base64Bytes_16), value);
	}

	inline static int32_t get_offset_of_base64Values_17() { return static_cast<int32_t>(offsetof(UTF7Encoding_t2644108479, ___base64Values_17)); }
	inline SByteU5BU5D_t2651576203* get_base64Values_17() const { return ___base64Values_17; }
	inline SByteU5BU5D_t2651576203** get_address_of_base64Values_17() { return &___base64Values_17; }
	inline void set_base64Values_17(SByteU5BU5D_t2651576203* value)
	{
		___base64Values_17 = value;
		Il2CppCodeGenWriteBarrier((&___base64Values_17), value);
	}

	inline static int32_t get_offset_of_directEncode_18() { return static_cast<int32_t>(offsetof(UTF7Encoding_t2644108479, ___directEncode_18)); }
	inline BooleanU5BU5D_t2897418192* get_directEncode_18() const { return ___directEncode_18; }
	inline BooleanU5BU5D_t2897418192** get_address_of_directEncode_18() { return &___directEncode_18; }
	inline void set_directEncode_18(BooleanU5BU5D_t2897418192* value)
	{
		___directEncode_18 = value;
		Il2CppCodeGenWriteBarrier((&___directEncode_18), value);
	}

	inline static int32_t get_offset_of_m_allowOptionals_19() { return static_cast<int32_t>(offsetof(UTF7Encoding_t2644108479, ___m_allowOptionals_19)); }
	inline bool get_m_allowOptionals_19() const { return ___m_allowOptionals_19; }
	inline bool* get_address_of_m_allowOptionals_19() { return &___m_allowOptionals_19; }
	inline void set_m_allowOptionals_19(bool value)
	{
		___m_allowOptionals_19 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // UTF7ENCODING_T2644108479_H
#ifndef DECODERUTF7FALLBACK_T327311172_H
#define DECODERUTF7FALLBACK_T327311172_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Text.UTF7Encoding/DecoderUTF7Fallback
struct  DecoderUTF7Fallback_t327311172  : public DecoderFallback_t3123823036
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // DECODERUTF7FALLBACK_T327311172_H
#ifndef DECODERUTF7FALLBACKBUFFER_T605274814_H
#define DECODERUTF7FALLBACKBUFFER_T605274814_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Text.UTF7Encoding/DecoderUTF7FallbackBuffer
struct  DecoderUTF7FallbackBuffer_t605274814  : public DecoderFallbackBuffer_t2402303981
{
public:
	// System.Char System.Text.UTF7Encoding/DecoderUTF7FallbackBuffer::cFallback
	Il2CppChar ___cFallback_2;
	// System.Int32 System.Text.UTF7Encoding/DecoderUTF7FallbackBuffer::iCount
	int32_t ___iCount_3;
	// System.Int32 System.Text.UTF7Encoding/DecoderUTF7FallbackBuffer::iSize
	int32_t ___iSize_4;

public:
	inline static int32_t get_offset_of_cFallback_2() { return static_cast<int32_t>(offsetof(DecoderUTF7FallbackBuffer_t605274814, ___cFallback_2)); }
	inline Il2CppChar get_cFallback_2() const { return ___cFallback_2; }
	inline Il2CppChar* get_address_of_cFallback_2() { return &___cFallback_2; }
	inline void set_cFallback_2(Il2CppChar value)
	{
		___cFallback_2 = value;
	}

	inline static int32_t get_offset_of_iCount_3() { return static_cast<int32_t>(offsetof(DecoderUTF7FallbackBuffer_t605274814, ___iCount_3)); }
	inline int32_t get_iCount_3() const { return ___iCount_3; }
	inline int32_t* get_address_of_iCount_3() { return &___iCount_3; }
	inline void set_iCount_3(int32_t value)
	{
		___iCount_3 = value;
	}

	inline static int32_t get_offset_of_iSize_4() { return static_cast<int32_t>(offsetof(DecoderUTF7FallbackBuffer_t605274814, ___iSize_4)); }
	inline int32_t get_iSize_4() const { return ___iSize_4; }
	inline int32_t* get_address_of_iSize_4() { return &___iSize_4; }
	inline void set_iSize_4(int32_t value)
	{
		___iSize_4 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // DECODERUTF7FALLBACKBUFFER_T605274814_H
#ifndef UTF8ENCODING_T3956466879_H
#define UTF8ENCODING_T3956466879_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Text.UTF8Encoding
struct  UTF8Encoding_t3956466879  : public Encoding_t1523322056
{
public:
	// System.Boolean System.Text.UTF8Encoding::emitUTF8Identifier
	bool ___emitUTF8Identifier_16;
	// System.Boolean System.Text.UTF8Encoding::isThrowException
	bool ___isThrowException_17;

public:
	inline static int32_t get_offset_of_emitUTF8Identifier_16() { return static_cast<int32_t>(offsetof(UTF8Encoding_t3956466879, ___emitUTF8Identifier_16)); }
	inline bool get_emitUTF8Identifier_16() const { return ___emitUTF8Identifier_16; }
	inline bool* get_address_of_emitUTF8Identifier_16() { return &___emitUTF8Identifier_16; }
	inline void set_emitUTF8Identifier_16(bool value)
	{
		___emitUTF8Identifier_16 = value;
	}

	inline static int32_t get_offset_of_isThrowException_17() { return static_cast<int32_t>(offsetof(UTF8Encoding_t3956466879, ___isThrowException_17)); }
	inline bool get_isThrowException_17() const { return ___isThrowException_17; }
	inline bool* get_address_of_isThrowException_17() { return &___isThrowException_17; }
	inline void set_isThrowException_17(bool value)
	{
		___isThrowException_17 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // UTF8ENCODING_T3956466879_H
#ifndef UNICODEENCODING_T1959134050_H
#define UNICODEENCODING_T1959134050_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Text.UnicodeEncoding
struct  UnicodeEncoding_t1959134050  : public Encoding_t1523322056
{
public:
	// System.Boolean System.Text.UnicodeEncoding::isThrowException
	bool ___isThrowException_16;
	// System.Boolean System.Text.UnicodeEncoding::bigEndian
	bool ___bigEndian_17;
	// System.Boolean System.Text.UnicodeEncoding::byteOrderMark
	bool ___byteOrderMark_18;

public:
	inline static int32_t get_offset_of_isThrowException_16() { return static_cast<int32_t>(offsetof(UnicodeEncoding_t1959134050, ___isThrowException_16)); }
	inline bool get_isThrowException_16() const { return ___isThrowException_16; }
	inline bool* get_address_of_isThrowException_16() { return &___isThrowException_16; }
	inline void set_isThrowException_16(bool value)
	{
		___isThrowException_16 = value;
	}

	inline static int32_t get_offset_of_bigEndian_17() { return static_cast<int32_t>(offsetof(UnicodeEncoding_t1959134050, ___bigEndian_17)); }
	inline bool get_bigEndian_17() const { return ___bigEndian_17; }
	inline bool* get_address_of_bigEndian_17() { return &___bigEndian_17; }
	inline void set_bigEndian_17(bool value)
	{
		___bigEndian_17 = value;
	}

	inline static int32_t get_offset_of_byteOrderMark_18() { return static_cast<int32_t>(offsetof(UnicodeEncoding_t1959134050, ___byteOrderMark_18)); }
	inline bool get_byteOrderMark_18() const { return ___byteOrderMark_18; }
	inline bool* get_address_of_byteOrderMark_18() { return &___byteOrderMark_18; }
	inline void set_byteOrderMark_18(bool value)
	{
		___byteOrderMark_18 = value;
	}
};

struct UnicodeEncoding_t1959134050_StaticFields
{
public:
	// System.UInt64 System.Text.UnicodeEncoding::highLowPatternMask
	uint64_t ___highLowPatternMask_19;

public:
	inline static int32_t get_offset_of_highLowPatternMask_19() { return static_cast<int32_t>(offsetof(UnicodeEncoding_t1959134050_StaticFields, ___highLowPatternMask_19)); }
	inline uint64_t get_highLowPatternMask_19() const { return ___highLowPatternMask_19; }
	inline uint64_t* get_address_of_highLowPatternMask_19() { return &___highLowPatternMask_19; }
	inline void set_highLowPatternMask_19(uint64_t value)
	{
		___highLowPatternMask_19 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // UNICODEENCODING_T1959134050_H
#ifndef ARGUMENTEXCEPTION_T132251570_H
#define ARGUMENTEXCEPTION_T132251570_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.ArgumentException
struct  ArgumentException_t132251570  : public SystemException_t176217640
{
public:
	// System.String System.ArgumentException::m_paramName
	String_t* ___m_paramName_17;

public:
	inline static int32_t get_offset_of_m_paramName_17() { return static_cast<int32_t>(offsetof(ArgumentException_t132251570, ___m_paramName_17)); }
	inline String_t* get_m_paramName_17() const { return ___m_paramName_17; }
	inline String_t** get_address_of_m_paramName_17() { return &___m_paramName_17; }
	inline void set_m_paramName_17(String_t* value)
	{
		___m_paramName_17 = value;
		Il2CppCodeGenWriteBarrier((&___m_paramName_17), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // ARGUMENTEXCEPTION_T132251570_H
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
#ifndef AMBIGUOUSMATCHEXCEPTION_T566690781_H
#define AMBIGUOUSMATCHEXCEPTION_T566690781_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Reflection.AmbiguousMatchException
struct  AmbiguousMatchException_t566690781  : public SystemException_t176217640
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // AMBIGUOUSMATCHEXCEPTION_T566690781_H
#ifndef ASSEMBLYCONTENTTYPE_T1652800354_H
#define ASSEMBLYCONTENTTYPE_T1652800354_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Reflection.AssemblyContentType
struct  AssemblyContentType_t1652800354 
{
public:
	// System.Int32 System.Reflection.AssemblyContentType::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(AssemblyContentType_t1652800354, ___value___2)); }
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
#endif // ASSEMBLYCONTENTTYPE_T1652800354_H
#ifndef ASSEMBLYNAMEFLAGS_T3675421470_H
#define ASSEMBLYNAMEFLAGS_T3675421470_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Reflection.AssemblyNameFlags
struct  AssemblyNameFlags_t3675421470 
{
public:
	// System.Int32 System.Reflection.AssemblyNameFlags::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(AssemblyNameFlags_t3675421470, ___value___2)); }
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
#endif // ASSEMBLYNAMEFLAGS_T3675421470_H
#ifndef BINDINGFLAGS_T2721792723_H
#define BINDINGFLAGS_T2721792723_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Reflection.BindingFlags
struct  BindingFlags_t2721792723 
{
public:
	// System.Int32 System.Reflection.BindingFlags::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(BindingFlags_t2721792723, ___value___2)); }
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
#endif // BINDINGFLAGS_T2721792723_H
#ifndef CALLINGCONVENTIONS_T2253234531_H
#define CALLINGCONVENTIONS_T2253234531_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Reflection.CallingConventions
struct  CallingConventions_t2253234531 
{
public:
	// System.Int32 System.Reflection.CallingConventions::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(CallingConventions_t2253234531, ___value___2)); }
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
#endif // CALLINGCONVENTIONS_T2253234531_H
#ifndef EVENTATTRIBUTES_T1153671773_H
#define EVENTATTRIBUTES_T1153671773_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Reflection.EventAttributes
struct  EventAttributes_t1153671773 
{
public:
	// System.Int32 System.Reflection.EventAttributes::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(EventAttributes_t1153671773, ___value___2)); }
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
#endif // EVENTATTRIBUTES_T1153671773_H
#ifndef EXCEPTIONHANDLINGCLAUSEOPTIONS_T945556827_H
#define EXCEPTIONHANDLINGCLAUSEOPTIONS_T945556827_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Reflection.ExceptionHandlingClauseOptions
struct  ExceptionHandlingClauseOptions_t945556827 
{
public:
	// System.Int32 System.Reflection.ExceptionHandlingClauseOptions::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(ExceptionHandlingClauseOptions_t945556827, ___value___2)); }
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
#endif // EXCEPTIONHANDLINGCLAUSEOPTIONS_T945556827_H
#ifndef FIELDATTRIBUTES_T400321159_H
#define FIELDATTRIBUTES_T400321159_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Reflection.FieldAttributes
struct  FieldAttributes_t400321159 
{
public:
	// System.Int32 System.Reflection.FieldAttributes::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(FieldAttributes_t400321159, ___value___2)); }
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
#endif // FIELDATTRIBUTES_T400321159_H
#ifndef GENERICPARAMETERATTRIBUTES_T1159165531_H
#define GENERICPARAMETERATTRIBUTES_T1159165531_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Reflection.GenericParameterAttributes
struct  GenericParameterAttributes_t1159165531 
{
public:
	// System.Int32 System.Reflection.GenericParameterAttributes::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(GenericParameterAttributes_t1159165531, ___value___2)); }
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
#endif // GENERICPARAMETERATTRIBUTES_T1159165531_H
#ifndef INVALIDFILTERCRITERIAEXCEPTION_T2427731508_H
#define INVALIDFILTERCRITERIAEXCEPTION_T2427731508_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Reflection.InvalidFilterCriteriaException
struct  InvalidFilterCriteriaException_t2427731508  : public ApplicationException_t2339761290
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // INVALIDFILTERCRITERIAEXCEPTION_T2427731508_H
#ifndef MEMBERTYPES_T3790569052_H
#define MEMBERTYPES_T3790569052_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Reflection.MemberTypes
struct  MemberTypes_t3790569052 
{
public:
	// System.Int32 System.Reflection.MemberTypes::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(MemberTypes_t3790569052, ___value___2)); }
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
#endif // MEMBERTYPES_T3790569052_H
#ifndef METHODATTRIBUTES_T2366443849_H
#define METHODATTRIBUTES_T2366443849_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Reflection.MethodAttributes
struct  MethodAttributes_t2366443849 
{
public:
	// System.Int32 System.Reflection.MethodAttributes::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(MethodAttributes_t2366443849, ___value___2)); }
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
#endif // METHODATTRIBUTES_T2366443849_H
#ifndef METHODIMPLATTRIBUTES_T3646023817_H
#define METHODIMPLATTRIBUTES_T3646023817_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Reflection.MethodImplAttributes
struct  MethodImplAttributes_t3646023817 
{
public:
	// System.Int32 System.Reflection.MethodImplAttributes::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(MethodImplAttributes_t3646023817, ___value___2)); }
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
#endif // METHODIMPLATTRIBUTES_T3646023817_H
#ifndef METHODINFO_T_H
#define METHODINFO_T_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Reflection.MethodInfo
struct  MethodInfo_t  : public MethodBase_t
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // METHODINFO_T_H
#ifndef PINVOKEATTRIBUTES_T2098850068_H
#define PINVOKEATTRIBUTES_T2098850068_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Reflection.PInvokeAttributes
struct  PInvokeAttributes_t2098850068 
{
public:
	// System.Int32 System.Reflection.PInvokeAttributes::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(PInvokeAttributes_t2098850068, ___value___2)); }
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
#endif // PINVOKEATTRIBUTES_T2098850068_H
#ifndef PARAMETERATTRIBUTES_T1826424051_H
#define PARAMETERATTRIBUTES_T1826424051_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Reflection.ParameterAttributes
struct  ParameterAttributes_t1826424051 
{
public:
	// System.Int32 System.Reflection.ParameterAttributes::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(ParameterAttributes_t1826424051, ___value___2)); }
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
#endif // PARAMETERATTRIBUTES_T1826424051_H
#ifndef PROCESSORARCHITECTURE_T305929193_H
#define PROCESSORARCHITECTURE_T305929193_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Reflection.ProcessorArchitecture
struct  ProcessorArchitecture_t305929193 
{
public:
	// System.Int32 System.Reflection.ProcessorArchitecture::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(ProcessorArchitecture_t305929193, ___value___2)); }
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
#endif // PROCESSORARCHITECTURE_T305929193_H
#ifndef PROPERTYATTRIBUTES_T3388002996_H
#define PROPERTYATTRIBUTES_T3388002996_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Reflection.PropertyAttributes
struct  PropertyAttributes_t3388002996 
{
public:
	// System.Int32 System.Reflection.PropertyAttributes::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(PropertyAttributes_t3388002996, ___value___2)); }
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
#endif // PROPERTYATTRIBUTES_T3388002996_H
#ifndef RESOURCETYPECODE_T2389818459_H
#define RESOURCETYPECODE_T2389818459_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Resources.ResourceTypeCode
struct  ResourceTypeCode_t2389818459 
{
public:
	// System.Int32 System.Resources.ResourceTypeCode::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(ResourceTypeCode_t2389818459, ___value___2)); }
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
#endif // RESOURCETYPECODE_T2389818459_H
#ifndef ULTIMATERESOURCEFALLBACKLOCATION_T690808888_H
#define ULTIMATERESOURCEFALLBACKLOCATION_T690808888_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Resources.UltimateResourceFallbackLocation
struct  UltimateResourceFallbackLocation_t690808888 
{
public:
	// System.Int32 System.Resources.UltimateResourceFallbackLocation::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(UltimateResourceFallbackLocation_t690808888, ___value___2)); }
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
#endif // ULTIMATERESOURCEFALLBACKLOCATION_T690808888_H
#ifndef LATIN1ENCODING_T950549005_H
#define LATIN1ENCODING_T950549005_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Text.Latin1Encoding
struct  Latin1Encoding_t950549005  : public EncodingNLS_t2860325670
{
public:

public:
};

struct Latin1Encoding_t950549005_StaticFields
{
public:
	// System.Char[] System.Text.Latin1Encoding::arrayCharBestFit
	CharU5BU5D_t3528271667* ___arrayCharBestFit_16;

public:
	inline static int32_t get_offset_of_arrayCharBestFit_16() { return static_cast<int32_t>(offsetof(Latin1Encoding_t950549005_StaticFields, ___arrayCharBestFit_16)); }
	inline CharU5BU5D_t3528271667* get_arrayCharBestFit_16() const { return ___arrayCharBestFit_16; }
	inline CharU5BU5D_t3528271667** get_address_of_arrayCharBestFit_16() { return &___arrayCharBestFit_16; }
	inline void set_arrayCharBestFit_16(CharU5BU5D_t3528271667* value)
	{
		___arrayCharBestFit_16 = value;
		Il2CppCodeGenWriteBarrier((&___arrayCharBestFit_16), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // LATIN1ENCODING_T950549005_H
#ifndef NORMALIZATIONCHECK_T1142668067_H
#define NORMALIZATIONCHECK_T1142668067_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Text.NormalizationCheck
struct  NormalizationCheck_t1142668067 
{
public:
	// System.Int32 System.Text.NormalizationCheck::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(NormalizationCheck_t1142668067, ___value___2)); }
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
#endif // NORMALIZATIONCHECK_T1142668067_H
#ifndef NORMALIZATIONFORM_T3110136658_H
#define NORMALIZATIONFORM_T3110136658_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Text.NormalizationForm
struct  NormalizationForm_t3110136658 
{
public:
	// System.Int32 System.Text.NormalizationForm::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(NormalizationForm_t3110136658, ___value___2)); }
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
#endif // NORMALIZATIONFORM_T3110136658_H
#ifndef UTF32DECODER_T635925672_H
#define UTF32DECODER_T635925672_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Text.UTF32Encoding/UTF32Decoder
struct  UTF32Decoder_t635925672  : public DecoderNLS_t637950881
{
public:
	// System.Int32 System.Text.UTF32Encoding/UTF32Decoder::iChar
	int32_t ___iChar_6;
	// System.Int32 System.Text.UTF32Encoding/UTF32Decoder::readByteCount
	int32_t ___readByteCount_7;

public:
	inline static int32_t get_offset_of_iChar_6() { return static_cast<int32_t>(offsetof(UTF32Decoder_t635925672, ___iChar_6)); }
	inline int32_t get_iChar_6() const { return ___iChar_6; }
	inline int32_t* get_address_of_iChar_6() { return &___iChar_6; }
	inline void set_iChar_6(int32_t value)
	{
		___iChar_6 = value;
	}

	inline static int32_t get_offset_of_readByteCount_7() { return static_cast<int32_t>(offsetof(UTF32Decoder_t635925672, ___readByteCount_7)); }
	inline int32_t get_readByteCount_7() const { return ___readByteCount_7; }
	inline int32_t* get_address_of_readByteCount_7() { return &___readByteCount_7; }
	inline void set_readByteCount_7(int32_t value)
	{
		___readByteCount_7 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // UTF32DECODER_T635925672_H
#ifndef DECODER_T2991084040_H
#define DECODER_T2991084040_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Text.UTF7Encoding/Decoder
struct  Decoder_t2991084040  : public DecoderNLS_t637950881
{
public:
	// System.Int32 System.Text.UTF7Encoding/Decoder::bits
	int32_t ___bits_6;
	// System.Int32 System.Text.UTF7Encoding/Decoder::bitCount
	int32_t ___bitCount_7;
	// System.Boolean System.Text.UTF7Encoding/Decoder::firstByte
	bool ___firstByte_8;

public:
	inline static int32_t get_offset_of_bits_6() { return static_cast<int32_t>(offsetof(Decoder_t2991084040, ___bits_6)); }
	inline int32_t get_bits_6() const { return ___bits_6; }
	inline int32_t* get_address_of_bits_6() { return &___bits_6; }
	inline void set_bits_6(int32_t value)
	{
		___bits_6 = value;
	}

	inline static int32_t get_offset_of_bitCount_7() { return static_cast<int32_t>(offsetof(Decoder_t2991084040, ___bitCount_7)); }
	inline int32_t get_bitCount_7() const { return ___bitCount_7; }
	inline int32_t* get_address_of_bitCount_7() { return &___bitCount_7; }
	inline void set_bitCount_7(int32_t value)
	{
		___bitCount_7 = value;
	}

	inline static int32_t get_offset_of_firstByte_8() { return static_cast<int32_t>(offsetof(Decoder_t2991084040, ___firstByte_8)); }
	inline bool get_firstByte_8() const { return ___firstByte_8; }
	inline bool* get_address_of_firstByte_8() { return &___firstByte_8; }
	inline void set_firstByte_8(bool value)
	{
		___firstByte_8 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // DECODER_T2991084040_H
#ifndef ENCODER_T3981253163_H
#define ENCODER_T3981253163_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Text.UTF7Encoding/Encoder
struct  Encoder_t3981253163  : public EncoderNLS_t449404832
{
public:
	// System.Int32 System.Text.UTF7Encoding/Encoder::bits
	int32_t ___bits_7;
	// System.Int32 System.Text.UTF7Encoding/Encoder::bitCount
	int32_t ___bitCount_8;

public:
	inline static int32_t get_offset_of_bits_7() { return static_cast<int32_t>(offsetof(Encoder_t3981253163, ___bits_7)); }
	inline int32_t get_bits_7() const { return ___bits_7; }
	inline int32_t* get_address_of_bits_7() { return &___bits_7; }
	inline void set_bits_7(int32_t value)
	{
		___bits_7 = value;
	}

	inline static int32_t get_offset_of_bitCount_8() { return static_cast<int32_t>(offsetof(Encoder_t3981253163, ___bitCount_8)); }
	inline int32_t get_bitCount_8() const { return ___bitCount_8; }
	inline int32_t* get_address_of_bitCount_8() { return &___bitCount_8; }
	inline void set_bitCount_8(int32_t value)
	{
		___bitCount_8 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // ENCODER_T3981253163_H
#ifndef UTF8DECODER_T2159214862_H
#define UTF8DECODER_T2159214862_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Text.UTF8Encoding/UTF8Decoder
struct  UTF8Decoder_t2159214862  : public DecoderNLS_t637950881
{
public:
	// System.Int32 System.Text.UTF8Encoding/UTF8Decoder::bits
	int32_t ___bits_6;

public:
	inline static int32_t get_offset_of_bits_6() { return static_cast<int32_t>(offsetof(UTF8Decoder_t2159214862, ___bits_6)); }
	inline int32_t get_bits_6() const { return ___bits_6; }
	inline int32_t* get_address_of_bits_6() { return &___bits_6; }
	inline void set_bits_6(int32_t value)
	{
		___bits_6 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // UTF8DECODER_T2159214862_H
#ifndef UTF8ENCODER_T3216382797_H
#define UTF8ENCODER_T3216382797_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Text.UTF8Encoding/UTF8Encoder
struct  UTF8Encoder_t3216382797  : public EncoderNLS_t449404832
{
public:
	// System.Int32 System.Text.UTF8Encoding/UTF8Encoder::surrogateChar
	int32_t ___surrogateChar_7;

public:
	inline static int32_t get_offset_of_surrogateChar_7() { return static_cast<int32_t>(offsetof(UTF8Encoder_t3216382797, ___surrogateChar_7)); }
	inline int32_t get_surrogateChar_7() const { return ___surrogateChar_7; }
	inline int32_t* get_address_of_surrogateChar_7() { return &___surrogateChar_7; }
	inline void set_surrogateChar_7(int32_t value)
	{
		___surrogateChar_7 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // UTF8ENCODER_T3216382797_H
#ifndef DECODER_T3679984939_H
#define DECODER_T3679984939_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Text.UnicodeEncoding/Decoder
struct  Decoder_t3679984939  : public DecoderNLS_t637950881
{
public:
	// System.Int32 System.Text.UnicodeEncoding/Decoder::lastByte
	int32_t ___lastByte_6;
	// System.Char System.Text.UnicodeEncoding/Decoder::lastChar
	Il2CppChar ___lastChar_7;

public:
	inline static int32_t get_offset_of_lastByte_6() { return static_cast<int32_t>(offsetof(Decoder_t3679984939, ___lastByte_6)); }
	inline int32_t get_lastByte_6() const { return ___lastByte_6; }
	inline int32_t* get_address_of_lastByte_6() { return &___lastByte_6; }
	inline void set_lastByte_6(int32_t value)
	{
		___lastByte_6 = value;
	}

	inline static int32_t get_offset_of_lastChar_7() { return static_cast<int32_t>(offsetof(Decoder_t3679984939, ___lastChar_7)); }
	inline Il2CppChar get_lastChar_7() const { return ___lastChar_7; }
	inline Il2CppChar* get_address_of_lastChar_7() { return &___lastChar_7; }
	inline void set_lastChar_7(Il2CppChar value)
	{
		___lastChar_7 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // DECODER_T3679984939_H
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
#ifndef MEMBERINFOSERIALIZATIONHOLDER_T1943730831_H
#define MEMBERINFOSERIALIZATIONHOLDER_T1943730831_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Reflection.MemberInfoSerializationHolder
struct  MemberInfoSerializationHolder_t1943730831  : public RuntimeObject
{
public:
	// System.String System.Reflection.MemberInfoSerializationHolder::m_memberName
	String_t* ___m_memberName_0;
	// System.RuntimeType System.Reflection.MemberInfoSerializationHolder::m_reflectedType
	RuntimeType_t3636489352 * ___m_reflectedType_1;
	// System.String System.Reflection.MemberInfoSerializationHolder::m_signature
	String_t* ___m_signature_2;
	// System.String System.Reflection.MemberInfoSerializationHolder::m_signature2
	String_t* ___m_signature2_3;
	// System.Reflection.MemberTypes System.Reflection.MemberInfoSerializationHolder::m_memberType
	int32_t ___m_memberType_4;
	// System.Runtime.Serialization.SerializationInfo System.Reflection.MemberInfoSerializationHolder::m_info
	SerializationInfo_t950877179 * ___m_info_5;

public:
	inline static int32_t get_offset_of_m_memberName_0() { return static_cast<int32_t>(offsetof(MemberInfoSerializationHolder_t1943730831, ___m_memberName_0)); }
	inline String_t* get_m_memberName_0() const { return ___m_memberName_0; }
	inline String_t** get_address_of_m_memberName_0() { return &___m_memberName_0; }
	inline void set_m_memberName_0(String_t* value)
	{
		___m_memberName_0 = value;
		Il2CppCodeGenWriteBarrier((&___m_memberName_0), value);
	}

	inline static int32_t get_offset_of_m_reflectedType_1() { return static_cast<int32_t>(offsetof(MemberInfoSerializationHolder_t1943730831, ___m_reflectedType_1)); }
	inline RuntimeType_t3636489352 * get_m_reflectedType_1() const { return ___m_reflectedType_1; }
	inline RuntimeType_t3636489352 ** get_address_of_m_reflectedType_1() { return &___m_reflectedType_1; }
	inline void set_m_reflectedType_1(RuntimeType_t3636489352 * value)
	{
		___m_reflectedType_1 = value;
		Il2CppCodeGenWriteBarrier((&___m_reflectedType_1), value);
	}

	inline static int32_t get_offset_of_m_signature_2() { return static_cast<int32_t>(offsetof(MemberInfoSerializationHolder_t1943730831, ___m_signature_2)); }
	inline String_t* get_m_signature_2() const { return ___m_signature_2; }
	inline String_t** get_address_of_m_signature_2() { return &___m_signature_2; }
	inline void set_m_signature_2(String_t* value)
	{
		___m_signature_2 = value;
		Il2CppCodeGenWriteBarrier((&___m_signature_2), value);
	}

	inline static int32_t get_offset_of_m_signature2_3() { return static_cast<int32_t>(offsetof(MemberInfoSerializationHolder_t1943730831, ___m_signature2_3)); }
	inline String_t* get_m_signature2_3() const { return ___m_signature2_3; }
	inline String_t** get_address_of_m_signature2_3() { return &___m_signature2_3; }
	inline void set_m_signature2_3(String_t* value)
	{
		___m_signature2_3 = value;
		Il2CppCodeGenWriteBarrier((&___m_signature2_3), value);
	}

	inline static int32_t get_offset_of_m_memberType_4() { return static_cast<int32_t>(offsetof(MemberInfoSerializationHolder_t1943730831, ___m_memberType_4)); }
	inline int32_t get_m_memberType_4() const { return ___m_memberType_4; }
	inline int32_t* get_address_of_m_memberType_4() { return &___m_memberType_4; }
	inline void set_m_memberType_4(int32_t value)
	{
		___m_memberType_4 = value;
	}

	inline static int32_t get_offset_of_m_info_5() { return static_cast<int32_t>(offsetof(MemberInfoSerializationHolder_t1943730831, ___m_info_5)); }
	inline SerializationInfo_t950877179 * get_m_info_5() const { return ___m_info_5; }
	inline SerializationInfo_t950877179 ** get_address_of_m_info_5() { return &___m_info_5; }
	inline void set_m_info_5(SerializationInfo_t950877179 * value)
	{
		___m_info_5 = value;
		Il2CppCodeGenWriteBarrier((&___m_info_5), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // MEMBERINFOSERIALIZATIONHOLDER_T1943730831_H
#ifndef NEUTRALRESOURCESLANGUAGEATTRIBUTE_T2027633532_H
#define NEUTRALRESOURCESLANGUAGEATTRIBUTE_T2027633532_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Resources.NeutralResourcesLanguageAttribute
struct  NeutralResourcesLanguageAttribute_t2027633532  : public Attribute_t861562559
{
public:
	// System.String System.Resources.NeutralResourcesLanguageAttribute::_culture
	String_t* ____culture_0;
	// System.Resources.UltimateResourceFallbackLocation System.Resources.NeutralResourcesLanguageAttribute::_fallbackLoc
	int32_t ____fallbackLoc_1;

public:
	inline static int32_t get_offset_of__culture_0() { return static_cast<int32_t>(offsetof(NeutralResourcesLanguageAttribute_t2027633532, ____culture_0)); }
	inline String_t* get__culture_0() const { return ____culture_0; }
	inline String_t** get_address_of__culture_0() { return &____culture_0; }
	inline void set__culture_0(String_t* value)
	{
		____culture_0 = value;
		Il2CppCodeGenWriteBarrier((&____culture_0), value);
	}

	inline static int32_t get_offset_of__fallbackLoc_1() { return static_cast<int32_t>(offsetof(NeutralResourcesLanguageAttribute_t2027633532, ____fallbackLoc_1)); }
	inline int32_t get__fallbackLoc_1() const { return ____fallbackLoc_1; }
	inline int32_t* get_address_of__fallbackLoc_1() { return &____fallbackLoc_1; }
	inline void set__fallbackLoc_1(int32_t value)
	{
		____fallbackLoc_1 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // NEUTRALRESOURCESLANGUAGEATTRIBUTE_T2027633532_H
#ifndef RESOURCEMANAGER_T4037989559_H
#define RESOURCEMANAGER_T4037989559_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Resources.ResourceManager
struct  ResourceManager_t4037989559  : public RuntimeObject
{
public:
	// System.Collections.Hashtable System.Resources.ResourceManager::ResourceSets
	Hashtable_t1853889766 * ___ResourceSets_0;
	// System.Collections.Generic.Dictionary`2<System.String,System.Resources.ResourceSet> System.Resources.ResourceManager::_resourceSets
	Dictionary_2_t2613167486 * ____resourceSets_1;
	// System.Reflection.Assembly System.Resources.ResourceManager::MainAssembly
	Assembly_t * ___MainAssembly_2;
	// System.Globalization.CultureInfo System.Resources.ResourceManager::_neutralResourcesCulture
	CultureInfo_t4157843068 * ____neutralResourcesCulture_3;
	// System.Resources.ResourceManager/CultureNameResourceSetPair System.Resources.ResourceManager::_lastUsedResourceCache
	CultureNameResourceSetPair_t3305173715 * ____lastUsedResourceCache_4;
	// System.Boolean System.Resources.ResourceManager::UseManifest
	bool ___UseManifest_5;
	// System.Boolean System.Resources.ResourceManager::UseSatelliteAssem
	bool ___UseSatelliteAssem_6;
	// System.Resources.UltimateResourceFallbackLocation System.Resources.ResourceManager::_fallbackLoc
	int32_t ____fallbackLoc_7;
	// System.Reflection.Assembly System.Resources.ResourceManager::_callingAssembly
	Assembly_t * ____callingAssembly_8;
	// System.Reflection.RuntimeAssembly System.Resources.ResourceManager::m_callingAssembly
	RuntimeAssembly_t1451753063 * ___m_callingAssembly_9;
	// System.Resources.IResourceGroveler System.Resources.ResourceManager::resourceGroveler
	RuntimeObject* ___resourceGroveler_10;

public:
	inline static int32_t get_offset_of_ResourceSets_0() { return static_cast<int32_t>(offsetof(ResourceManager_t4037989559, ___ResourceSets_0)); }
	inline Hashtable_t1853889766 * get_ResourceSets_0() const { return ___ResourceSets_0; }
	inline Hashtable_t1853889766 ** get_address_of_ResourceSets_0() { return &___ResourceSets_0; }
	inline void set_ResourceSets_0(Hashtable_t1853889766 * value)
	{
		___ResourceSets_0 = value;
		Il2CppCodeGenWriteBarrier((&___ResourceSets_0), value);
	}

	inline static int32_t get_offset_of__resourceSets_1() { return static_cast<int32_t>(offsetof(ResourceManager_t4037989559, ____resourceSets_1)); }
	inline Dictionary_2_t2613167486 * get__resourceSets_1() const { return ____resourceSets_1; }
	inline Dictionary_2_t2613167486 ** get_address_of__resourceSets_1() { return &____resourceSets_1; }
	inline void set__resourceSets_1(Dictionary_2_t2613167486 * value)
	{
		____resourceSets_1 = value;
		Il2CppCodeGenWriteBarrier((&____resourceSets_1), value);
	}

	inline static int32_t get_offset_of_MainAssembly_2() { return static_cast<int32_t>(offsetof(ResourceManager_t4037989559, ___MainAssembly_2)); }
	inline Assembly_t * get_MainAssembly_2() const { return ___MainAssembly_2; }
	inline Assembly_t ** get_address_of_MainAssembly_2() { return &___MainAssembly_2; }
	inline void set_MainAssembly_2(Assembly_t * value)
	{
		___MainAssembly_2 = value;
		Il2CppCodeGenWriteBarrier((&___MainAssembly_2), value);
	}

	inline static int32_t get_offset_of__neutralResourcesCulture_3() { return static_cast<int32_t>(offsetof(ResourceManager_t4037989559, ____neutralResourcesCulture_3)); }
	inline CultureInfo_t4157843068 * get__neutralResourcesCulture_3() const { return ____neutralResourcesCulture_3; }
	inline CultureInfo_t4157843068 ** get_address_of__neutralResourcesCulture_3() { return &____neutralResourcesCulture_3; }
	inline void set__neutralResourcesCulture_3(CultureInfo_t4157843068 * value)
	{
		____neutralResourcesCulture_3 = value;
		Il2CppCodeGenWriteBarrier((&____neutralResourcesCulture_3), value);
	}

	inline static int32_t get_offset_of__lastUsedResourceCache_4() { return static_cast<int32_t>(offsetof(ResourceManager_t4037989559, ____lastUsedResourceCache_4)); }
	inline CultureNameResourceSetPair_t3305173715 * get__lastUsedResourceCache_4() const { return ____lastUsedResourceCache_4; }
	inline CultureNameResourceSetPair_t3305173715 ** get_address_of__lastUsedResourceCache_4() { return &____lastUsedResourceCache_4; }
	inline void set__lastUsedResourceCache_4(CultureNameResourceSetPair_t3305173715 * value)
	{
		____lastUsedResourceCache_4 = value;
		Il2CppCodeGenWriteBarrier((&____lastUsedResourceCache_4), value);
	}

	inline static int32_t get_offset_of_UseManifest_5() { return static_cast<int32_t>(offsetof(ResourceManager_t4037989559, ___UseManifest_5)); }
	inline bool get_UseManifest_5() const { return ___UseManifest_5; }
	inline bool* get_address_of_UseManifest_5() { return &___UseManifest_5; }
	inline void set_UseManifest_5(bool value)
	{
		___UseManifest_5 = value;
	}

	inline static int32_t get_offset_of_UseSatelliteAssem_6() { return static_cast<int32_t>(offsetof(ResourceManager_t4037989559, ___UseSatelliteAssem_6)); }
	inline bool get_UseSatelliteAssem_6() const { return ___UseSatelliteAssem_6; }
	inline bool* get_address_of_UseSatelliteAssem_6() { return &___UseSatelliteAssem_6; }
	inline void set_UseSatelliteAssem_6(bool value)
	{
		___UseSatelliteAssem_6 = value;
	}

	inline static int32_t get_offset_of__fallbackLoc_7() { return static_cast<int32_t>(offsetof(ResourceManager_t4037989559, ____fallbackLoc_7)); }
	inline int32_t get__fallbackLoc_7() const { return ____fallbackLoc_7; }
	inline int32_t* get_address_of__fallbackLoc_7() { return &____fallbackLoc_7; }
	inline void set__fallbackLoc_7(int32_t value)
	{
		____fallbackLoc_7 = value;
	}

	inline static int32_t get_offset_of__callingAssembly_8() { return static_cast<int32_t>(offsetof(ResourceManager_t4037989559, ____callingAssembly_8)); }
	inline Assembly_t * get__callingAssembly_8() const { return ____callingAssembly_8; }
	inline Assembly_t ** get_address_of__callingAssembly_8() { return &____callingAssembly_8; }
	inline void set__callingAssembly_8(Assembly_t * value)
	{
		____callingAssembly_8 = value;
		Il2CppCodeGenWriteBarrier((&____callingAssembly_8), value);
	}

	inline static int32_t get_offset_of_m_callingAssembly_9() { return static_cast<int32_t>(offsetof(ResourceManager_t4037989559, ___m_callingAssembly_9)); }
	inline RuntimeAssembly_t1451753063 * get_m_callingAssembly_9() const { return ___m_callingAssembly_9; }
	inline RuntimeAssembly_t1451753063 ** get_address_of_m_callingAssembly_9() { return &___m_callingAssembly_9; }
	inline void set_m_callingAssembly_9(RuntimeAssembly_t1451753063 * value)
	{
		___m_callingAssembly_9 = value;
		Il2CppCodeGenWriteBarrier((&___m_callingAssembly_9), value);
	}

	inline static int32_t get_offset_of_resourceGroveler_10() { return static_cast<int32_t>(offsetof(ResourceManager_t4037989559, ___resourceGroveler_10)); }
	inline RuntimeObject* get_resourceGroveler_10() const { return ___resourceGroveler_10; }
	inline RuntimeObject** get_address_of_resourceGroveler_10() { return &___resourceGroveler_10; }
	inline void set_resourceGroveler_10(RuntimeObject* value)
	{
		___resourceGroveler_10 = value;
		Il2CppCodeGenWriteBarrier((&___resourceGroveler_10), value);
	}
};

struct ResourceManager_t4037989559_StaticFields
{
public:
	// System.Int32 System.Resources.ResourceManager::MagicNumber
	int32_t ___MagicNumber_11;
	// System.Int32 System.Resources.ResourceManager::HeaderVersionNumber
	int32_t ___HeaderVersionNumber_12;
	// System.Type System.Resources.ResourceManager::_minResourceSet
	Type_t * ____minResourceSet_13;
	// System.String System.Resources.ResourceManager::ResReaderTypeName
	String_t* ___ResReaderTypeName_14;
	// System.String System.Resources.ResourceManager::ResSetTypeName
	String_t* ___ResSetTypeName_15;
	// System.String System.Resources.ResourceManager::MscorlibName
	String_t* ___MscorlibName_16;
	// System.Int32 System.Resources.ResourceManager::DEBUG
	int32_t ___DEBUG_17;

public:
	inline static int32_t get_offset_of_MagicNumber_11() { return static_cast<int32_t>(offsetof(ResourceManager_t4037989559_StaticFields, ___MagicNumber_11)); }
	inline int32_t get_MagicNumber_11() const { return ___MagicNumber_11; }
	inline int32_t* get_address_of_MagicNumber_11() { return &___MagicNumber_11; }
	inline void set_MagicNumber_11(int32_t value)
	{
		___MagicNumber_11 = value;
	}

	inline static int32_t get_offset_of_HeaderVersionNumber_12() { return static_cast<int32_t>(offsetof(ResourceManager_t4037989559_StaticFields, ___HeaderVersionNumber_12)); }
	inline int32_t get_HeaderVersionNumber_12() const { return ___HeaderVersionNumber_12; }
	inline int32_t* get_address_of_HeaderVersionNumber_12() { return &___HeaderVersionNumber_12; }
	inline void set_HeaderVersionNumber_12(int32_t value)
	{
		___HeaderVersionNumber_12 = value;
	}

	inline static int32_t get_offset_of__minResourceSet_13() { return static_cast<int32_t>(offsetof(ResourceManager_t4037989559_StaticFields, ____minResourceSet_13)); }
	inline Type_t * get__minResourceSet_13() const { return ____minResourceSet_13; }
	inline Type_t ** get_address_of__minResourceSet_13() { return &____minResourceSet_13; }
	inline void set__minResourceSet_13(Type_t * value)
	{
		____minResourceSet_13 = value;
		Il2CppCodeGenWriteBarrier((&____minResourceSet_13), value);
	}

	inline static int32_t get_offset_of_ResReaderTypeName_14() { return static_cast<int32_t>(offsetof(ResourceManager_t4037989559_StaticFields, ___ResReaderTypeName_14)); }
	inline String_t* get_ResReaderTypeName_14() const { return ___ResReaderTypeName_14; }
	inline String_t** get_address_of_ResReaderTypeName_14() { return &___ResReaderTypeName_14; }
	inline void set_ResReaderTypeName_14(String_t* value)
	{
		___ResReaderTypeName_14 = value;
		Il2CppCodeGenWriteBarrier((&___ResReaderTypeName_14), value);
	}

	inline static int32_t get_offset_of_ResSetTypeName_15() { return static_cast<int32_t>(offsetof(ResourceManager_t4037989559_StaticFields, ___ResSetTypeName_15)); }
	inline String_t* get_ResSetTypeName_15() const { return ___ResSetTypeName_15; }
	inline String_t** get_address_of_ResSetTypeName_15() { return &___ResSetTypeName_15; }
	inline void set_ResSetTypeName_15(String_t* value)
	{
		___ResSetTypeName_15 = value;
		Il2CppCodeGenWriteBarrier((&___ResSetTypeName_15), value);
	}

	inline static int32_t get_offset_of_MscorlibName_16() { return static_cast<int32_t>(offsetof(ResourceManager_t4037989559_StaticFields, ___MscorlibName_16)); }
	inline String_t* get_MscorlibName_16() const { return ___MscorlibName_16; }
	inline String_t** get_address_of_MscorlibName_16() { return &___MscorlibName_16; }
	inline void set_MscorlibName_16(String_t* value)
	{
		___MscorlibName_16 = value;
		Il2CppCodeGenWriteBarrier((&___MscorlibName_16), value);
	}

	inline static int32_t get_offset_of_DEBUG_17() { return static_cast<int32_t>(offsetof(ResourceManager_t4037989559_StaticFields, ___DEBUG_17)); }
	inline int32_t get_DEBUG_17() const { return ___DEBUG_17; }
	inline int32_t* get_address_of_DEBUG_17() { return &___DEBUG_17; }
	inline void set_DEBUG_17(int32_t value)
	{
		___DEBUG_17 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // RESOURCEMANAGER_T4037989559_H
#ifndef ENCODERFALLBACKEXCEPTION_T2773771926_H
#define ENCODERFALLBACKEXCEPTION_T2773771926_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Text.EncoderFallbackException
struct  EncoderFallbackException_t2773771926  : public ArgumentException_t132251570
{
public:
	// System.Char System.Text.EncoderFallbackException::charUnknown
	Il2CppChar ___charUnknown_18;
	// System.Char System.Text.EncoderFallbackException::charUnknownHigh
	Il2CppChar ___charUnknownHigh_19;
	// System.Char System.Text.EncoderFallbackException::charUnknownLow
	Il2CppChar ___charUnknownLow_20;
	// System.Int32 System.Text.EncoderFallbackException::index
	int32_t ___index_21;

public:
	inline static int32_t get_offset_of_charUnknown_18() { return static_cast<int32_t>(offsetof(EncoderFallbackException_t2773771926, ___charUnknown_18)); }
	inline Il2CppChar get_charUnknown_18() const { return ___charUnknown_18; }
	inline Il2CppChar* get_address_of_charUnknown_18() { return &___charUnknown_18; }
	inline void set_charUnknown_18(Il2CppChar value)
	{
		___charUnknown_18 = value;
	}

	inline static int32_t get_offset_of_charUnknownHigh_19() { return static_cast<int32_t>(offsetof(EncoderFallbackException_t2773771926, ___charUnknownHigh_19)); }
	inline Il2CppChar get_charUnknownHigh_19() const { return ___charUnknownHigh_19; }
	inline Il2CppChar* get_address_of_charUnknownHigh_19() { return &___charUnknownHigh_19; }
	inline void set_charUnknownHigh_19(Il2CppChar value)
	{
		___charUnknownHigh_19 = value;
	}

	inline static int32_t get_offset_of_charUnknownLow_20() { return static_cast<int32_t>(offsetof(EncoderFallbackException_t2773771926, ___charUnknownLow_20)); }
	inline Il2CppChar get_charUnknownLow_20() const { return ___charUnknownLow_20; }
	inline Il2CppChar* get_address_of_charUnknownLow_20() { return &___charUnknownLow_20; }
	inline void set_charUnknownLow_20(Il2CppChar value)
	{
		___charUnknownLow_20 = value;
	}

	inline static int32_t get_offset_of_index_21() { return static_cast<int32_t>(offsetof(EncoderFallbackException_t2773771926, ___index_21)); }
	inline int32_t get_index_21() const { return ___index_21; }
	inline int32_t* get_address_of_index_21() { return &___index_21; }
	inline void set_index_21(int32_t value)
	{
		___index_21 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // ENCODERFALLBACKEXCEPTION_T2773771926_H
#ifndef MEMBERFILTER_T426314064_H
#define MEMBERFILTER_T426314064_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Reflection.MemberFilter
struct  MemberFilter_t426314064  : public MulticastDelegate_t
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // MEMBERFILTER_T426314064_H





#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize400 = { sizeof (DecoderNLS_t637950881), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable400[4] = 
{
	DecoderNLS_t637950881::get_offset_of_m_encoding_2(),
	DecoderNLS_t637950881::get_offset_of_m_mustFlush_3(),
	DecoderNLS_t637950881::get_offset_of_m_throwOnOverflow_4(),
	DecoderNLS_t637950881::get_offset_of_m_bytesUsed_5(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize401 = { sizeof (DecoderReplacementFallback_t1462101135), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable401[1] = 
{
	DecoderReplacementFallback_t1462101135::get_offset_of_strDefault_4(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize402 = { sizeof (DecoderReplacementFallbackBuffer_t841144779), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable402[3] = 
{
	DecoderReplacementFallbackBuffer_t841144779::get_offset_of_strDefault_2(),
	DecoderReplacementFallbackBuffer_t841144779::get_offset_of_fallbackCount_3(),
	DecoderReplacementFallbackBuffer_t841144779::get_offset_of_fallbackIndex_4(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize403 = { sizeof (Encoder_t2198218980), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable403[2] = 
{
	Encoder_t2198218980::get_offset_of_m_fallback_0(),
	Encoder_t2198218980::get_offset_of_m_fallbackBuffer_1(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize404 = { sizeof (InternalEncoderBestFitFallback_t3121776013), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable404[2] = 
{
	InternalEncoderBestFitFallback_t3121776013::get_offset_of_encoding_4(),
	InternalEncoderBestFitFallback_t3121776013::get_offset_of_arrayBestFit_5(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize405 = { sizeof (InternalEncoderBestFitFallbackBuffer_t2370301869), -1, sizeof(InternalEncoderBestFitFallbackBuffer_t2370301869_StaticFields), 0 };
extern const int32_t g_FieldOffsetTable405[5] = 
{
	InternalEncoderBestFitFallbackBuffer_t2370301869::get_offset_of_cBestFit_7(),
	InternalEncoderBestFitFallbackBuffer_t2370301869::get_offset_of_oFallback_8(),
	InternalEncoderBestFitFallbackBuffer_t2370301869::get_offset_of_iCount_9(),
	InternalEncoderBestFitFallbackBuffer_t2370301869::get_offset_of_iSize_10(),
	InternalEncoderBestFitFallbackBuffer_t2370301869_StaticFields::get_offset_of_s_InternalSyncObject_11(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize406 = { sizeof (EncoderExceptionFallback_t1243849599), -1, 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize407 = { sizeof (EncoderExceptionFallbackBuffer_t3597232471), -1, 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize408 = { sizeof (EncoderFallbackException_t2773771926), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable408[4] = 
{
	EncoderFallbackException_t2773771926::get_offset_of_charUnknown_18(),
	EncoderFallbackException_t2773771926::get_offset_of_charUnknownHigh_19(),
	EncoderFallbackException_t2773771926::get_offset_of_charUnknownLow_20(),
	EncoderFallbackException_t2773771926::get_offset_of_index_21(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize409 = { sizeof (EncoderFallback_t1188251036), -1, sizeof(EncoderFallback_t1188251036_StaticFields), 0 };
extern const int32_t g_FieldOffsetTable409[4] = 
{
	EncoderFallback_t1188251036::get_offset_of_bIsMicrosoftBestFitFallback_0(),
	EncoderFallback_t1188251036_StaticFields::get_offset_of_replacementFallback_1(),
	EncoderFallback_t1188251036_StaticFields::get_offset_of_exceptionFallback_2(),
	EncoderFallback_t1188251036_StaticFields::get_offset_of_s_InternalSyncObject_3(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize410 = { sizeof (EncoderFallbackBuffer_t3523102303), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable410[7] = 
{
	EncoderFallbackBuffer_t3523102303::get_offset_of_charStart_0(),
	EncoderFallbackBuffer_t3523102303::get_offset_of_charEnd_1(),
	EncoderFallbackBuffer_t3523102303::get_offset_of_encoder_2(),
	EncoderFallbackBuffer_t3523102303::get_offset_of_setEncoder_3(),
	EncoderFallbackBuffer_t3523102303::get_offset_of_bUsedEncoder_4(),
	EncoderFallbackBuffer_t3523102303::get_offset_of_bFallingBack_5(),
	EncoderFallbackBuffer_t3523102303::get_offset_of_iRecursionCount_6(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize411 = { sizeof (EncoderNLS_t449404832), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable411[5] = 
{
	EncoderNLS_t449404832::get_offset_of_charLeftOver_2(),
	EncoderNLS_t449404832::get_offset_of_m_encoding_3(),
	EncoderNLS_t449404832::get_offset_of_m_mustFlush_4(),
	EncoderNLS_t449404832::get_offset_of_m_throwOnOverflow_5(),
	EncoderNLS_t449404832::get_offset_of_m_charsUsed_6(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize412 = { sizeof (EncoderReplacementFallback_t1623206753), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable412[1] = 
{
	EncoderReplacementFallback_t1623206753::get_offset_of_strDefault_4(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize413 = { sizeof (EncoderReplacementFallbackBuffer_t1863187162), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable413[3] = 
{
	EncoderReplacementFallbackBuffer_t1863187162::get_offset_of_strDefault_7(),
	EncoderReplacementFallbackBuffer_t1863187162::get_offset_of_fallbackCount_8(),
	EncoderReplacementFallbackBuffer_t1863187162::get_offset_of_fallbackIndex_9(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize414 = { sizeof (Encoding_t1523322056), -1, sizeof(Encoding_t1523322056_StaticFields), 0 };
extern const int32_t g_FieldOffsetTable414[16] = 
{
	Encoding_t1523322056_StaticFields::get_offset_of_defaultEncoding_0(),
	Encoding_t1523322056_StaticFields::get_offset_of_unicodeEncoding_1(),
	Encoding_t1523322056_StaticFields::get_offset_of_bigEndianUnicode_2(),
	Encoding_t1523322056_StaticFields::get_offset_of_utf7Encoding_3(),
	Encoding_t1523322056_StaticFields::get_offset_of_utf8Encoding_4(),
	Encoding_t1523322056_StaticFields::get_offset_of_utf32Encoding_5(),
	Encoding_t1523322056_StaticFields::get_offset_of_asciiEncoding_6(),
	Encoding_t1523322056_StaticFields::get_offset_of_latin1Encoding_7(),
	Encoding_t1523322056_StaticFields::get_offset_of_encodings_8(),
	Encoding_t1523322056::get_offset_of_m_codePage_9(),
	Encoding_t1523322056::get_offset_of_dataItem_10(),
	Encoding_t1523322056::get_offset_of_m_deserializedFromEverett_11(),
	Encoding_t1523322056::get_offset_of_m_isReadOnly_12(),
	Encoding_t1523322056::get_offset_of_encoderFallback_13(),
	Encoding_t1523322056::get_offset_of_decoderFallback_14(),
	Encoding_t1523322056_StaticFields::get_offset_of_s_InternalSyncObject_15(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize415 = { sizeof (DefaultEncoder_t1761427806), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable415[3] = 
{
	DefaultEncoder_t1761427806::get_offset_of_m_encoding_2(),
	DefaultEncoder_t1761427806::get_offset_of_m_hasInitializedEncoding_3(),
	DefaultEncoder_t1761427806::get_offset_of_charLeftOver_4(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize416 = { sizeof (DefaultDecoder_t1768440197), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable416[2] = 
{
	DefaultDecoder_t1768440197::get_offset_of_m_encoding_2(),
	DefaultDecoder_t1768440197::get_offset_of_m_hasInitializedEncoding_3(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize417 = { sizeof (EncodingCharBuffer_t3998946436), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable417[10] = 
{
	EncodingCharBuffer_t3998946436::get_offset_of_chars_0(),
	EncodingCharBuffer_t3998946436::get_offset_of_charStart_1(),
	EncodingCharBuffer_t3998946436::get_offset_of_charEnd_2(),
	EncodingCharBuffer_t3998946436::get_offset_of_charCountResult_3(),
	EncodingCharBuffer_t3998946436::get_offset_of_enc_4(),
	EncodingCharBuffer_t3998946436::get_offset_of_decoder_5(),
	EncodingCharBuffer_t3998946436::get_offset_of_byteStart_6(),
	EncodingCharBuffer_t3998946436::get_offset_of_byteEnd_7(),
	EncodingCharBuffer_t3998946436::get_offset_of_bytes_8(),
	EncodingCharBuffer_t3998946436::get_offset_of_fallbackBuffer_9(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize418 = { sizeof (EncodingByteBuffer_t3631100277), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable418[10] = 
{
	EncodingByteBuffer_t3631100277::get_offset_of_bytes_0(),
	EncodingByteBuffer_t3631100277::get_offset_of_byteStart_1(),
	EncodingByteBuffer_t3631100277::get_offset_of_byteEnd_2(),
	EncodingByteBuffer_t3631100277::get_offset_of_chars_3(),
	EncodingByteBuffer_t3631100277::get_offset_of_charStart_4(),
	EncodingByteBuffer_t3631100277::get_offset_of_charEnd_5(),
	EncodingByteBuffer_t3631100277::get_offset_of_byteCountResult_6(),
	EncodingByteBuffer_t3631100277::get_offset_of_enc_7(),
	EncodingByteBuffer_t3631100277::get_offset_of_encoder_8(),
	EncodingByteBuffer_t3631100277::get_offset_of_fallbackBuffer_9(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize419 = { sizeof (EncodingNLS_t2860325670), -1, 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize420 = { sizeof (EncodingProvider_t3251932530), -1, sizeof(EncodingProvider_t3251932530_StaticFields), 0 };
extern const int32_t g_FieldOffsetTable420[2] = 
{
	EncodingProvider_t3251932530_StaticFields::get_offset_of_s_InternalSyncObject_0(),
	EncodingProvider_t3251932530_StaticFields::get_offset_of_s_providers_1(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize421 = { sizeof (Latin1Encoding_t950549005), -1, sizeof(Latin1Encoding_t950549005_StaticFields), 0 };
extern const int32_t g_FieldOffsetTable421[1] = 
{
	Latin1Encoding_t950549005_StaticFields::get_offset_of_arrayCharBestFit_16(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize422 = { sizeof (StringBuilder_t), sizeof(char*), 0, 0 };
extern const int32_t g_FieldOffsetTable422[11] = 
{
	StringBuilder_t::get_offset_of_m_ChunkChars_0(),
	StringBuilder_t::get_offset_of_m_ChunkPrevious_1(),
	StringBuilder_t::get_offset_of_m_ChunkLength_2(),
	StringBuilder_t::get_offset_of_m_ChunkOffset_3(),
	StringBuilder_t::get_offset_of_m_MaxCapacity_4(),
	0,
	0,
	0,
	0,
	0,
	0,
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize423 = { sizeof (StringBuilderCache_t3006348846), -1, 0, sizeof(StringBuilderCache_t3006348846_ThreadStaticFields) };
extern const int32_t g_FieldOffsetTable423[1] = 
{
	StringBuilderCache_t3006348846_ThreadStaticFields::get_offset_of_CachedInstance_0() | THREAD_LOCAL_STATIC_MASK,
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize424 = { sizeof (UnicodeEncoding_t1959134050), -1, sizeof(UnicodeEncoding_t1959134050_StaticFields), 0 };
extern const int32_t g_FieldOffsetTable424[4] = 
{
	UnicodeEncoding_t1959134050::get_offset_of_isThrowException_16(),
	UnicodeEncoding_t1959134050::get_offset_of_bigEndian_17(),
	UnicodeEncoding_t1959134050::get_offset_of_byteOrderMark_18(),
	UnicodeEncoding_t1959134050_StaticFields::get_offset_of_highLowPatternMask_19(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize425 = { sizeof (Decoder_t3679984939), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable425[2] = 
{
	Decoder_t3679984939::get_offset_of_lastByte_6(),
	Decoder_t3679984939::get_offset_of_lastChar_7(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize426 = { sizeof (UTF32Encoding_t312252005), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable426[3] = 
{
	UTF32Encoding_t312252005::get_offset_of_emitUTF32ByteOrderMark_16(),
	UTF32Encoding_t312252005::get_offset_of_isThrowException_17(),
	UTF32Encoding_t312252005::get_offset_of_bigEndian_18(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize427 = { sizeof (UTF32Decoder_t635925672), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable427[2] = 
{
	UTF32Decoder_t635925672::get_offset_of_iChar_6(),
	UTF32Decoder_t635925672::get_offset_of_readByteCount_7(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize428 = { sizeof (UTF7Encoding_t2644108479), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable428[4] = 
{
	UTF7Encoding_t2644108479::get_offset_of_base64Bytes_16(),
	UTF7Encoding_t2644108479::get_offset_of_base64Values_17(),
	UTF7Encoding_t2644108479::get_offset_of_directEncode_18(),
	UTF7Encoding_t2644108479::get_offset_of_m_allowOptionals_19(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize429 = { sizeof (Decoder_t2991084040), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable429[3] = 
{
	Decoder_t2991084040::get_offset_of_bits_6(),
	Decoder_t2991084040::get_offset_of_bitCount_7(),
	Decoder_t2991084040::get_offset_of_firstByte_8(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize430 = { sizeof (Encoder_t3981253163), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable430[2] = 
{
	Encoder_t3981253163::get_offset_of_bits_7(),
	Encoder_t3981253163::get_offset_of_bitCount_8(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize431 = { sizeof (DecoderUTF7Fallback_t327311172), -1, 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize432 = { sizeof (DecoderUTF7FallbackBuffer_t605274814), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable432[3] = 
{
	DecoderUTF7FallbackBuffer_t605274814::get_offset_of_cFallback_2(),
	DecoderUTF7FallbackBuffer_t605274814::get_offset_of_iCount_3(),
	DecoderUTF7FallbackBuffer_t605274814::get_offset_of_iSize_4(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize433 = { sizeof (UTF8Encoding_t3956466879), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable433[2] = 
{
	UTF8Encoding_t3956466879::get_offset_of_emitUTF8Identifier_16(),
	UTF8Encoding_t3956466879::get_offset_of_isThrowException_17(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize434 = { sizeof (UTF8Encoder_t3216382797), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable434[1] = 
{
	UTF8Encoder_t3216382797::get_offset_of_surrogateChar_7(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize435 = { sizeof (UTF8Decoder_t2159214862), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable435[1] = 
{
	UTF8Decoder_t2159214862::get_offset_of_bits_6(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize436 = { sizeof (NormalizationCheck_t1142668067)+ sizeof (RuntimeObject), sizeof(int32_t), 0, 0 };
extern const int32_t g_FieldOffsetTable436[4] = 
{
	NormalizationCheck_t1142668067::get_offset_of_value___2() + static_cast<int32_t>(sizeof(RuntimeObject)),
	0,
	0,
	0,
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize437 = { sizeof (Normalization_t1645683087), -1, sizeof(Normalization_t1645683087_StaticFields), 0 };
extern const int32_t g_FieldOffsetTable437[8] = 
{
	Normalization_t1645683087_StaticFields::get_offset_of_props_0(),
	Normalization_t1645683087_StaticFields::get_offset_of_mappedChars_1(),
	Normalization_t1645683087_StaticFields::get_offset_of_charMapIndex_2(),
	Normalization_t1645683087_StaticFields::get_offset_of_helperIndex_3(),
	Normalization_t1645683087_StaticFields::get_offset_of_mapIdxToComposite_4(),
	Normalization_t1645683087_StaticFields::get_offset_of_combiningClass_5(),
	Normalization_t1645683087_StaticFields::get_offset_of_forLock_6(),
	Normalization_t1645683087_StaticFields::get_offset_of_isReady_7(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize438 = { sizeof (EncodingHelper_t1404249741), -1, sizeof(EncodingHelper_t1404249741_StaticFields), 0 };
extern const int32_t g_FieldOffsetTable438[4] = 
{
	EncodingHelper_t1404249741_StaticFields::get_offset_of_utf8EncodingWithoutMarkers_0(),
	EncodingHelper_t1404249741_StaticFields::get_offset_of_lockobj_1(),
	EncodingHelper_t1404249741_StaticFields::get_offset_of_i18nAssembly_2(),
	EncodingHelper_t1404249741_StaticFields::get_offset_of_i18nDisabled_3(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize439 = { sizeof (NormalizationForm_t3110136658)+ sizeof (RuntimeObject), sizeof(int32_t), 0, 0 };
extern const int32_t g_FieldOffsetTable439[5] = 
{
	NormalizationForm_t3110136658::get_offset_of_value___2() + static_cast<int32_t>(sizeof(RuntimeObject)),
	0,
	0,
	0,
	0,
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize440 = { sizeof (FastResourceComparer_t2718874915), -1, sizeof(FastResourceComparer_t2718874915_StaticFields), 0 };
extern const int32_t g_FieldOffsetTable440[1] = 
{
	FastResourceComparer_t2718874915_StaticFields::get_offset_of_Default_0(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize441 = { sizeof (FileBasedResourceGroveler_t1088115704), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable441[1] = 
{
	FileBasedResourceGroveler_t1088115704::get_offset_of__mediator_0(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize442 = { 0, -1, 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize443 = { 0, -1, 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize444 = { sizeof (ManifestBasedResourceGroveler_t2768300725), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable444[1] = 
{
	ManifestBasedResourceGroveler_t2768300725::get_offset_of__mediator_0(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize445 = { sizeof (NeutralResourcesLanguageAttribute_t2027633532), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable445[2] = 
{
	NeutralResourcesLanguageAttribute_t2027633532::get_offset_of__culture_0(),
	NeutralResourcesLanguageAttribute_t2027633532::get_offset_of__fallbackLoc_1(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize446 = { sizeof (ResourceManager_t4037989559), -1, sizeof(ResourceManager_t4037989559_StaticFields), 0 };
extern const int32_t g_FieldOffsetTable446[18] = 
{
	ResourceManager_t4037989559::get_offset_of_ResourceSets_0(),
	ResourceManager_t4037989559::get_offset_of__resourceSets_1(),
	ResourceManager_t4037989559::get_offset_of_MainAssembly_2(),
	ResourceManager_t4037989559::get_offset_of__neutralResourcesCulture_3(),
	ResourceManager_t4037989559::get_offset_of__lastUsedResourceCache_4(),
	ResourceManager_t4037989559::get_offset_of_UseManifest_5(),
	ResourceManager_t4037989559::get_offset_of_UseSatelliteAssem_6(),
	ResourceManager_t4037989559::get_offset_of__fallbackLoc_7(),
	ResourceManager_t4037989559::get_offset_of__callingAssembly_8(),
	ResourceManager_t4037989559::get_offset_of_m_callingAssembly_9(),
	ResourceManager_t4037989559::get_offset_of_resourceGroveler_10(),
	ResourceManager_t4037989559_StaticFields::get_offset_of_MagicNumber_11(),
	ResourceManager_t4037989559_StaticFields::get_offset_of_HeaderVersionNumber_12(),
	ResourceManager_t4037989559_StaticFields::get_offset_of__minResourceSet_13(),
	ResourceManager_t4037989559_StaticFields::get_offset_of_ResReaderTypeName_14(),
	ResourceManager_t4037989559_StaticFields::get_offset_of_ResSetTypeName_15(),
	ResourceManager_t4037989559_StaticFields::get_offset_of_MscorlibName_16(),
	ResourceManager_t4037989559_StaticFields::get_offset_of_DEBUG_17(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize447 = { sizeof (CultureNameResourceSetPair_t3305173715), -1, 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize448 = { sizeof (ResourceManagerMediator_t1468959918), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable448[1] = 
{
	ResourceManagerMediator_t1468959918::get_offset_of__rm_0(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize449 = { sizeof (ResourceLocator_t3723970807)+ sizeof (RuntimeObject), sizeof(ResourceLocator_t3723970807_marshaled_pinvoke), 0, 0 };
extern const int32_t g_FieldOffsetTable449[2] = 
{
	ResourceLocator_t3723970807::get_offset_of__value_0() + static_cast<int32_t>(sizeof(RuntimeObject)),
	ResourceLocator_t3723970807::get_offset_of__dataPos_1() + static_cast<int32_t>(sizeof(RuntimeObject)),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize450 = { sizeof (ResourceReader_t3300492639), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable450[14] = 
{
	ResourceReader_t3300492639::get_offset_of__store_0(),
	ResourceReader_t3300492639::get_offset_of__resCache_1(),
	ResourceReader_t3300492639::get_offset_of__nameSectionOffset_2(),
	ResourceReader_t3300492639::get_offset_of__dataSectionOffset_3(),
	ResourceReader_t3300492639::get_offset_of__nameHashes_4(),
	ResourceReader_t3300492639::get_offset_of__nameHashesPtr_5(),
	ResourceReader_t3300492639::get_offset_of__namePositions_6(),
	ResourceReader_t3300492639::get_offset_of__namePositionsPtr_7(),
	ResourceReader_t3300492639::get_offset_of__typeTable_8(),
	ResourceReader_t3300492639::get_offset_of__typeNamePositions_9(),
	ResourceReader_t3300492639::get_offset_of__objFormatter_10(),
	ResourceReader_t3300492639::get_offset_of__numResources_11(),
	ResourceReader_t3300492639::get_offset_of__ums_12(),
	ResourceReader_t3300492639::get_offset_of__version_13(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize451 = { sizeof (ResourceEnumerator_t2106512554), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable451[4] = 
{
	ResourceEnumerator_t2106512554::get_offset_of__reader_0(),
	ResourceEnumerator_t2106512554::get_offset_of__currentIsValid_1(),
	ResourceEnumerator_t2106512554::get_offset_of__currentName_2(),
	ResourceEnumerator_t2106512554::get_offset_of__dataPosition_3(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize452 = { sizeof (ResourceSet_t2827911187), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable452[3] = 
{
	ResourceSet_t2827911187::get_offset_of_Reader_0(),
	ResourceSet_t2827911187::get_offset_of_Table_1(),
	ResourceSet_t2827911187::get_offset_of__caseInsensitiveTable_2(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize453 = { sizeof (ResourceTypeCode_t2389818459)+ sizeof (RuntimeObject), sizeof(int32_t), 0, 0 };
extern const int32_t g_FieldOffsetTable453[22] = 
{
	ResourceTypeCode_t2389818459::get_offset_of_value___2() + static_cast<int32_t>(sizeof(RuntimeObject)),
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
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize454 = { sizeof (RuntimeResourceSet_t3081501575), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable454[5] = 
{
	0,
	RuntimeResourceSet_t3081501575::get_offset_of__resCache_4(),
	RuntimeResourceSet_t3081501575::get_offset_of__defaultReader_5(),
	RuntimeResourceSet_t3081501575::get_offset_of__caseInsensitiveTable_6(),
	RuntimeResourceSet_t3081501575::get_offset_of__haveReadFromReader_7(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize455 = { sizeof (SatelliteContractVersionAttribute_t3549813284), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable455[1] = 
{
	SatelliteContractVersionAttribute_t3549813284::get_offset_of__version_0(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize456 = { sizeof (UltimateResourceFallbackLocation_t690808888)+ sizeof (RuntimeObject), sizeof(int32_t), 0, 0 };
extern const int32_t g_FieldOffsetTable456[3] = 
{
	UltimateResourceFallbackLocation_t690808888::get_offset_of_value___2() + static_cast<int32_t>(sizeof(RuntimeObject)),
	0,
	0,
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize457 = { sizeof (CustomAttributeExtensions_t4268647790), -1, 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize458 = { sizeof (AmbiguousMatchException_t566690781), -1, 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize459 = { sizeof (AssemblyCopyrightAttribute_t836190902), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable459[1] = 
{
	AssemblyCopyrightAttribute_t836190902::get_offset_of_m_copyright_0(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize460 = { sizeof (AssemblyTrademarkAttribute_t3598190473), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable460[1] = 
{
	AssemblyTrademarkAttribute_t3598190473::get_offset_of_m_trademark_0(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize461 = { sizeof (AssemblyProductAttribute_t1000945320), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable461[1] = 
{
	AssemblyProductAttribute_t1000945320::get_offset_of_m_product_0(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize462 = { sizeof (AssemblyCompanyAttribute_t909257512), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable462[1] = 
{
	AssemblyCompanyAttribute_t909257512::get_offset_of_m_company_0(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize463 = { sizeof (AssemblyDescriptionAttribute_t1046996844), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable463[1] = 
{
	AssemblyDescriptionAttribute_t1046996844::get_offset_of_m_description_0(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize464 = { sizeof (AssemblyTitleAttribute_t1901133402), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable464[1] = 
{
	AssemblyTitleAttribute_t1901133402::get_offset_of_m_title_0(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize465 = { sizeof (AssemblyConfigurationAttribute_t2167450097), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable465[1] = 
{
	AssemblyConfigurationAttribute_t2167450097::get_offset_of_m_configuration_0(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize466 = { sizeof (AssemblyDefaultAliasAttribute_t2176720766), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable466[1] = 
{
	AssemblyDefaultAliasAttribute_t2176720766::get_offset_of_m_defaultAlias_0(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize467 = { sizeof (AssemblyInformationalVersionAttribute_t3037764991), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable467[1] = 
{
	AssemblyInformationalVersionAttribute_t3037764991::get_offset_of_m_informationalVersion_0(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize468 = { sizeof (AssemblyFileVersionAttribute_t14927972), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable468[1] = 
{
	AssemblyFileVersionAttribute_t14927972::get_offset_of__version_0(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize469 = { sizeof (AssemblyKeyFileAttribute_t2825689142), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable469[1] = 
{
	AssemblyKeyFileAttribute_t2825689142::get_offset_of_m_keyFile_0(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize470 = { sizeof (AssemblyDelaySignAttribute_t176441654), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable470[1] = 
{
	AssemblyDelaySignAttribute_t176441654::get_offset_of_m_delaySign_0(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize471 = { sizeof (AssemblyNameFlags_t3675421470)+ sizeof (RuntimeObject), sizeof(int32_t), 0, 0 };
extern const int32_t g_FieldOffsetTable471[6] = 
{
	AssemblyNameFlags_t3675421470::get_offset_of_value___2() + static_cast<int32_t>(sizeof(RuntimeObject)),
	0,
	0,
	0,
	0,
	0,
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize472 = { sizeof (AssemblyContentType_t1652800354)+ sizeof (RuntimeObject), sizeof(int32_t), 0, 0 };
extern const int32_t g_FieldOffsetTable472[3] = 
{
	AssemblyContentType_t1652800354::get_offset_of_value___2() + static_cast<int32_t>(sizeof(RuntimeObject)),
	0,
	0,
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize473 = { sizeof (ProcessorArchitecture_t305929193)+ sizeof (RuntimeObject), sizeof(int32_t), 0, 0 };
extern const int32_t g_FieldOffsetTable473[7] = 
{
	ProcessorArchitecture_t305929193::get_offset_of_value___2() + static_cast<int32_t>(sizeof(RuntimeObject)),
	0,
	0,
	0,
	0,
	0,
	0,
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize474 = { sizeof (Binder_t2999457153), -1, 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize475 = { sizeof (BindingFlags_t2721792723)+ sizeof (RuntimeObject), sizeof(int32_t), 0, 0 };
extern const int32_t g_FieldOffsetTable475[21] = 
{
	BindingFlags_t2721792723::get_offset_of_value___2() + static_cast<int32_t>(sizeof(RuntimeObject)),
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
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize476 = { sizeof (CallingConventions_t2253234531)+ sizeof (RuntimeObject), sizeof(int32_t), 0, 0 };
extern const int32_t g_FieldOffsetTable476[6] = 
{
	CallingConventions_t2253234531::get_offset_of_value___2() + static_cast<int32_t>(sizeof(RuntimeObject)),
	0,
	0,
	0,
	0,
	0,
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize477 = { sizeof (DefaultMemberAttribute_t3275092422), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable477[1] = 
{
	DefaultMemberAttribute_t3275092422::get_offset_of_m_memberName_0(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize478 = { sizeof (EventAttributes_t1153671773)+ sizeof (RuntimeObject), sizeof(int32_t), 0, 0 };
extern const int32_t g_FieldOffsetTable478[5] = 
{
	EventAttributes_t1153671773::get_offset_of_value___2() + static_cast<int32_t>(sizeof(RuntimeObject)),
	0,
	0,
	0,
	0,
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize479 = { sizeof (FieldAttributes_t400321159)+ sizeof (RuntimeObject), sizeof(int32_t), 0, 0 };
extern const int32_t g_FieldOffsetTable479[20] = 
{
	FieldAttributes_t400321159::get_offset_of_value___2() + static_cast<int32_t>(sizeof(RuntimeObject)),
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
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize480 = { sizeof (GenericParameterAttributes_t1159165531)+ sizeof (RuntimeObject), sizeof(int32_t), 0, 0 };
extern const int32_t g_FieldOffsetTable480[9] = 
{
	GenericParameterAttributes_t1159165531::get_offset_of_value___2() + static_cast<int32_t>(sizeof(RuntimeObject)),
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize481 = { 0, -1, 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize482 = { sizeof (InvalidFilterCriteriaException_t2427731508), -1, 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize483 = { 0, -1, 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize484 = { 0, -1, 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize485 = { sizeof (PInvokeAttributes_t2098850068)+ sizeof (RuntimeObject), sizeof(int32_t), 0, 0 };
extern const int32_t g_FieldOffsetTable485[23] = 
{
	PInvokeAttributes_t2098850068::get_offset_of_value___2() + static_cast<int32_t>(sizeof(RuntimeObject)),
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
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize486 = { sizeof (MemberFilter_t426314064), sizeof(Il2CppMethodPointer), 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize487 = { sizeof (MemberInfo_t), -1, 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize488 = { sizeof (MemberInfoSerializationHolder_t1943730831), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable488[6] = 
{
	MemberInfoSerializationHolder_t1943730831::get_offset_of_m_memberName_0(),
	MemberInfoSerializationHolder_t1943730831::get_offset_of_m_reflectedType_1(),
	MemberInfoSerializationHolder_t1943730831::get_offset_of_m_signature_2(),
	MemberInfoSerializationHolder_t1943730831::get_offset_of_m_signature2_3(),
	MemberInfoSerializationHolder_t1943730831::get_offset_of_m_memberType_4(),
	MemberInfoSerializationHolder_t1943730831::get_offset_of_m_info_5(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize489 = { sizeof (MemberTypes_t3790569052)+ sizeof (RuntimeObject), sizeof(int32_t), 0, 0 };
extern const int32_t g_FieldOffsetTable489[10] = 
{
	MemberTypes_t3790569052::get_offset_of_value___2() + static_cast<int32_t>(sizeof(RuntimeObject)),
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
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize490 = { sizeof (MethodAttributes_t2366443849)+ sizeof (RuntimeObject), sizeof(int32_t), 0, 0 };
extern const int32_t g_FieldOffsetTable490[25] = 
{
	MethodAttributes_t2366443849::get_offset_of_value___2() + static_cast<int32_t>(sizeof(RuntimeObject)),
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
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize491 = { sizeof (MethodBase_t), -1, 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize492 = { sizeof (ExceptionHandlingClauseOptions_t945556827)+ sizeof (RuntimeObject), sizeof(int32_t), 0, 0 };
extern const int32_t g_FieldOffsetTable492[5] = 
{
	ExceptionHandlingClauseOptions_t945556827::get_offset_of_value___2() + static_cast<int32_t>(sizeof(RuntimeObject)),
	0,
	0,
	0,
	0,
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize493 = { sizeof (MethodImplAttributes_t3646023817)+ sizeof (RuntimeObject), sizeof(int32_t), 0, 0 };
extern const int32_t g_FieldOffsetTable493[17] = 
{
	MethodImplAttributes_t3646023817::get_offset_of_value___2() + static_cast<int32_t>(sizeof(RuntimeObject)),
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
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize494 = { sizeof (MethodInfo_t), -1, 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize495 = { sizeof (Missing_t508514592), -1, sizeof(Missing_t508514592_StaticFields), 0 };
extern const int32_t g_FieldOffsetTable495[1] = 
{
	Missing_t508514592_StaticFields::get_offset_of_Value_0(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize496 = { sizeof (ParameterAttributes_t1826424051)+ sizeof (RuntimeObject), sizeof(int32_t), 0, 0 };
extern const int32_t g_FieldOffsetTable496[12] = 
{
	ParameterAttributes_t1826424051::get_offset_of_value___2() + static_cast<int32_t>(sizeof(RuntimeObject)),
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
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize497 = { sizeof (ParameterModifier_t1461694466)+ sizeof (RuntimeObject), sizeof(ParameterModifier_t1461694466_marshaled_pinvoke), 0, 0 };
extern const int32_t g_FieldOffsetTable497[1] = 
{
	ParameterModifier_t1461694466::get_offset_of__byRef_0() + static_cast<int32_t>(sizeof(RuntimeObject)),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize498 = { sizeof (Pointer_t2088917139), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable498[2] = 
{
	Pointer_t2088917139::get_offset_of__ptr_0(),
	Pointer_t2088917139::get_offset_of__ptrType_1(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize499 = { sizeof (PropertyAttributes_t3388002996)+ sizeof (RuntimeObject), sizeof(int32_t), 0, 0 };
extern const int32_t g_FieldOffsetTable499[9] = 
{
	PropertyAttributes_t3388002996::get_offset_of_value___2() + static_cast<int32_t>(sizeof(RuntimeObject)),
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
};
#ifdef __clang__
#pragma clang diagnostic pop
#endif
