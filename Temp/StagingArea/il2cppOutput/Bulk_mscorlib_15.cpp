﻿#include "il2cpp-config.h"

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
template <typename R, typename T1, typename T2, typename T3, typename T4, typename T5, typename T6, typename T7>
struct VirtFuncInvoker7
{
	typedef R (*Func)(void*, T1, T2, T3, T4, T5, T6, T7, const RuntimeMethod*);

	static inline R Invoke (Il2CppMethodSlot slot, RuntimeObject* obj, T1 p1, T2 p2, T3 p3, T4 p4, T5 p5, T6 p6, T7 p7)
	{
		const VirtualInvokeData& invokeData = il2cpp_codegen_get_virtual_invoke_data(slot, obj);
		return ((Func)invokeData.methodPtr)(obj, p1, p2, p3, p4, p5, p6, p7, invokeData.method);
	}
};

// Mono.Globalization.Unicode.SimpleCollator
struct SimpleCollator_t2877834729;
// System.ArgumentException
struct ArgumentException_t132251570;
// System.ArgumentNullException
struct ArgumentNullException_t1615371798;
// System.ArgumentOutOfRangeException
struct ArgumentOutOfRangeException_t777629997;
// System.Byte[]
struct ByteU5BU5D_t4116647657;
// System.Char[]
struct CharU5BU5D_t3528271667;
// System.Collections.Generic.Dictionary`2<System.Int32,System.Globalization.CultureInfo>
struct Dictionary_2_t3046556399;
// System.Collections.Generic.Dictionary`2<System.String,Mono.Globalization.Unicode.SimpleCollator>
struct Dictionary_2_t2663091028;
// System.Collections.Generic.Dictionary`2<System.String,System.Globalization.CultureInfo>
struct Dictionary_2_t3943099367;
// System.Collections.Generic.Dictionary`2<System.String,System.Int32>
struct Dictionary_2_t2736202052;
// System.Collections.Hashtable
struct Hashtable_t1853889766;
// System.Collections.IComparer
struct IComparer_t1540313114;
// System.Collections.IDictionary
struct IDictionary_t1363984059;
// System.Collections.IEqualityComparer
struct IEqualityComparer_t1493878338;
// System.Diagnostics.StackTrace[]
struct StackTraceU5BU5D_t1169129676;
// System.Globalization.Calendar
struct Calendar_t1661121569;
// System.Globalization.CompareInfo
struct CompareInfo_t1092934962;
// System.Globalization.CultureData
struct CultureData_t1899656083;
// System.Globalization.CultureInfo
struct CultureInfo_t4157843068;
// System.Globalization.DateTimeFormatInfo
struct DateTimeFormatInfo_t2405853701;
// System.Globalization.NumberFormatInfo
struct NumberFormatInfo_t435877138;
// System.Globalization.SortVersion
struct SortVersion_t3332565609;
// System.Globalization.TextInfo
struct TextInfo_t3810425522;
// System.Globalization.TokenHashValue[]
struct TokenHashValueU5BU5D_t818561467;
// System.InputRecord
struct InputRecord_t2660212290;
// System.Int32[]
struct Int32U5BU5D_t385246372;
// System.IntPtr[]
struct IntPtrU5BU5D_t4013366056;
// System.InvalidOperationException
struct InvalidOperationException_t56020091;
// System.LocalDataStoreHolder
struct LocalDataStoreHolder_t2567786569;
// System.LocalDataStoreMgr
struct LocalDataStoreMgr_t1707895399;
// System.MonoTypeInfo
struct MonoTypeInfo_t3366989025;
// System.MulticastDelegate
struct MulticastDelegate_t;
// System.NotSupportedException
struct NotSupportedException_t1314879016;
// System.Object[]
struct ObjectU5BU5D_t2843939325;
// System.Reflection.Binder
struct Binder_t2999457153;
// System.Reflection.InvalidFilterCriteriaException
struct InvalidFilterCriteriaException_t2427731508;
// System.Reflection.MemberFilter
struct MemberFilter_t426314064;
// System.Reflection.MemberInfo
struct MemberInfo_t;
// System.Reflection.RuntimeConstructorInfo
struct RuntimeConstructorInfo_t1806616898;
// System.Runtime.Serialization.IFormatterConverter
struct IFormatterConverter_t2171992254;
// System.Runtime.Serialization.SafeSerializationManager
struct SafeSerializationManager_t2481557153;
// System.Runtime.Serialization.SerializationInfo
struct SerializationInfo_t950877179;
// System.RuntimeType
struct RuntimeType_t3636489352;
// System.Security.Principal.IPrincipal
struct IPrincipal_t2343618843;
// System.String
struct String_t;
// System.String[]
struct StringU5BU5D_t1281789340;
// System.Text.StringBuilder
struct StringBuilder_t;
// System.Threading.AsyncLocal`1<System.Globalization.CultureInfo>
struct AsyncLocal_1_t2427220165;
// System.Threading.ExecutionContext
struct ExecutionContext_t1748372627;
// System.Threading.InternalThread
struct InternalThread_t95296544;
// System.Threading.Thread
struct Thread_t2300836069;
// System.Type
struct Type_t;
// System.Type[]
struct TypeU5BU5D_t3940880105;
// System.ValueType
struct ValueType_t3640485471;
// System.Version
struct Version_t3456873960;
// System.Void
struct Void_t1185182177;
// System.WeakReference
struct WeakReference_t1334886716;
// System.WindowsConsoleDriver
struct WindowsConsoleDriver_t3991887195;
// System.__ComObject
struct __ComObject_t2735933417;
// System.__Filters
struct __Filters_t550753867;
// System.__Il2CppComDelegate
struct __Il2CppComDelegate_t1102178620;
// System.__Il2CppComObject
struct Il2CppComObject;

extern RuntimeClass* ArgumentException_t132251570_il2cpp_TypeInfo_var;
extern RuntimeClass* ArgumentNullException_t1615371798_il2cpp_TypeInfo_var;
extern RuntimeClass* ArgumentOutOfRangeException_t777629997_il2cpp_TypeInfo_var;
extern RuntimeClass* CharU5BU5D_t3528271667_il2cpp_TypeInfo_var;
extern RuntimeClass* Char_t3634460470_il2cpp_TypeInfo_var;
extern RuntimeClass* ConstructorInfo_t5769829_il2cpp_TypeInfo_var;
extern RuntimeClass* DateTimeParse_t715850018_il2cpp_TypeInfo_var;
extern RuntimeClass* Exception_t_il2cpp_TypeInfo_var;
extern RuntimeClass* FieldInfo_t_il2cpp_TypeInfo_var;
extern RuntimeClass* HashHelpers_t1653534276_il2cpp_TypeInfo_var;
extern RuntimeClass* Int32_t2950945753_il2cpp_TypeInfo_var;
extern RuntimeClass* IntPtr_t_il2cpp_TypeInfo_var;
extern RuntimeClass* InvalidFilterCriteriaException_t2427731508_il2cpp_TypeInfo_var;
extern RuntimeClass* InvalidOperationException_t56020091_il2cpp_TypeInfo_var;
extern RuntimeClass* Marshal_t1757017490_il2cpp_TypeInfo_var;
extern RuntimeClass* MethodInfo_t_il2cpp_TypeInfo_var;
extern RuntimeClass* NotSupportedException_t1314879016_il2cpp_TypeInfo_var;
extern RuntimeClass* ObjectU5BU5D_t2843939325_il2cpp_TypeInfo_var;
extern RuntimeClass* RuntimeObject_il2cpp_TypeInfo_var;
extern RuntimeClass* RuntimeType_t3636489352_il2cpp_TypeInfo_var;
extern RuntimeClass* String_t_il2cpp_TypeInfo_var;
extern RuntimeClass* Type_t_il2cpp_TypeInfo_var;
extern RuntimeClass* ValueTuple_t3168505507_il2cpp_TypeInfo_var;
extern RuntimeClass* Version_t3456873960_il2cpp_TypeInfo_var;
extern RuntimeClass* __DTString_t2014593278_il2cpp_TypeInfo_var;
extern RuntimeClass* __Filters_t550753867_il2cpp_TypeInfo_var;
extern String_t* _stringLiteral1071424308;
extern String_t* _stringLiteral1182144617;
extern String_t* _stringLiteral238790419;
extern String_t* _stringLiteral2432405111;
extern String_t* _stringLiteral2448690427;
extern String_t* _stringLiteral2762033855;
extern String_t* _stringLiteral2922588279;
extern String_t* _stringLiteral2976560351;
extern String_t* _stringLiteral3104458722;
extern String_t* _stringLiteral3187820736;
extern String_t* _stringLiteral3234942771;
extern String_t* _stringLiteral3450976136;
extern String_t* _stringLiteral3452614540;
extern String_t* _stringLiteral3452614541;
extern String_t* _stringLiteral3452614542;
extern String_t* _stringLiteral3452614544;
extern String_t* _stringLiteral3976682977;
extern String_t* _stringLiteral4055290125;
extern String_t* _stringLiteral419133523;
extern String_t* _stringLiteral437191301;
extern String_t* _stringLiteral79347;
extern const RuntimeMethod* ValueTuple_System_Collections_IStructuralComparable_CompareTo_m1147772089_RuntimeMethod_var;
extern const RuntimeMethod* ValueTuple_System_IComparable_CompareTo_m3152321575_RuntimeMethod_var;
extern const RuntimeMethod* Version_CompareTo_m1662919407_RuntimeMethod_var;
extern const RuntimeMethod* Version_ToString_m3654989516_RuntimeMethod_var;
extern const RuntimeMethod* Version__ctor_m417728625_RuntimeMethod_var;
extern const RuntimeMethod* WeakReference_GetObjectData_m2192383095_RuntimeMethod_var;
extern const RuntimeMethod* WeakReference__ctor_m1244067698_RuntimeMethod_var;
extern const RuntimeMethod* WindowsConsoleDriver_ReadKey_m209631140_RuntimeMethod_var;
extern const RuntimeMethod* __ComObject__ctor_m3980049925_RuntimeMethod_var;
extern const RuntimeMethod* __Filters_FilterAttribute_m1188844130_RuntimeMethod_var;
extern const RuntimeMethod* __Filters_FilterIgnoreCase_m1077950596_RuntimeMethod_var;
extern const RuntimeMethod* __Filters_FilterName_m969729198_RuntimeMethod_var;
extern const RuntimeType* RuntimeObject_0_0_0_var;
extern const uint32_t ValueTuple_CombineHashCodes_m2782652282_MetadataUsageId;
extern const uint32_t ValueTuple_Equals_m3777586424_MetadataUsageId;
extern const uint32_t ValueTuple_System_Collections_IStructuralComparable_CompareTo_m1147772089_MetadataUsageId;
extern const uint32_t ValueTuple_System_Collections_IStructuralEquatable_Equals_m1158377527_MetadataUsageId;
extern const uint32_t ValueTuple_System_IComparable_CompareTo_m3152321575_MetadataUsageId;
extern const uint32_t ValueTuple_ToString_m2213345710_MetadataUsageId;
extern const uint32_t ValueType_DefaultEquals_m2927252100_MetadataUsageId;
extern const uint32_t Variant_Clear_m3388694274_MetadataUsageId;
extern const uint32_t Version_Clone_m1749041863_MetadataUsageId;
extern const uint32_t Version_CompareTo_m1662919407_MetadataUsageId;
extern const uint32_t Version_CompareTo_m3146217210_MetadataUsageId;
extern const uint32_t Version_Equals_m1564427710_MetadataUsageId;
extern const uint32_t Version_Equals_m3073813696_MetadataUsageId;
extern const uint32_t Version_ToString_m3654989516_MetadataUsageId;
extern const uint32_t Version__cctor_m3568671087_MetadataUsageId;
extern const uint32_t Version__ctor_m417728625_MetadataUsageId;
extern const uint32_t Version_op_Inequality_m1696193441_MetadataUsageId;
extern const uint32_t WeakReference_GetObjectData_m2192383095_MetadataUsageId;
extern const uint32_t WeakReference__ctor_m1244067698_MetadataUsageId;
extern const uint32_t WindowsConsoleDriver_ReadKey_m209631140_MetadataUsageId;
extern const uint32_t __ComObject__ctor_m3980049925_MetadataUsageId;
extern const uint32_t __DTString_GetNextDigit_m3564891386_MetadataUsageId;
extern const uint32_t __DTString_GetRegularToken_m3127405658_MetadataUsageId;
extern const uint32_t __DTString_GetSeparatorToken_m2062126902_MetadataUsageId;
extern const uint32_t __DTString_MatchSpecifiedWords_m1748097800_MetadataUsageId;
extern const uint32_t __DTString_RemoveLeadingInQuoteSpaces_m695439123_MetadataUsageId;
extern const uint32_t __DTString_RemoveTrailingInQuoteSpaces_m4285619600_MetadataUsageId;
extern const uint32_t __DTString_SkipWhiteSpaceCurrent_m2113872575_MetadataUsageId;
extern const uint32_t __DTString_SkipWhiteSpaces_m2053058269_MetadataUsageId;
extern const uint32_t __DTString_TrimTail_m653960243_MetadataUsageId;
extern const uint32_t __DTString__cctor_m3069308443_MetadataUsageId;
extern const uint32_t __Filters_FilterAttribute_m1188844130_MetadataUsageId;
extern const uint32_t __Filters_FilterIgnoreCase_m1077950596_MetadataUsageId;
extern const uint32_t __Filters_FilterName_m969729198_MetadataUsageId;
extern const uint32_t __Filters__cctor_m18745359_MetadataUsageId;
struct CultureData_t1899656083_marshaled_com;
struct CultureData_t1899656083_marshaled_pinvoke;
struct CultureInfo_t4157843068_marshaled_com;
struct CultureInfo_t4157843068_marshaled_pinvoke;
struct Exception_t_marshaled_com;
struct Exception_t_marshaled_pinvoke;
struct InputRecord_t2660212290;;
struct InputRecord_t2660212290_marshaled_pinvoke;
struct InputRecord_t2660212290_marshaled_pinvoke;;

struct CharU5BU5D_t3528271667;
struct ObjectU5BU5D_t2843939325;
struct StringU5BU5D_t1281789340;


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
#ifndef CULTUREINFO_T4157843068_H
#define CULTUREINFO_T4157843068_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Globalization.CultureInfo
struct  CultureInfo_t4157843068  : public RuntimeObject
{
public:
	// System.Boolean System.Globalization.CultureInfo::m_isReadOnly
	bool ___m_isReadOnly_3;
	// System.Int32 System.Globalization.CultureInfo::cultureID
	int32_t ___cultureID_4;
	// System.Int32 System.Globalization.CultureInfo::parent_lcid
	int32_t ___parent_lcid_5;
	// System.Int32 System.Globalization.CultureInfo::datetime_index
	int32_t ___datetime_index_6;
	// System.Int32 System.Globalization.CultureInfo::number_index
	int32_t ___number_index_7;
	// System.Int32 System.Globalization.CultureInfo::default_calendar_type
	int32_t ___default_calendar_type_8;
	// System.Boolean System.Globalization.CultureInfo::m_useUserOverride
	bool ___m_useUserOverride_9;
	// System.Globalization.NumberFormatInfo modreq(System.Runtime.CompilerServices.IsVolatile) System.Globalization.CultureInfo::numInfo
	NumberFormatInfo_t435877138 * ___numInfo_10;
	// System.Globalization.DateTimeFormatInfo modreq(System.Runtime.CompilerServices.IsVolatile) System.Globalization.CultureInfo::dateTimeInfo
	DateTimeFormatInfo_t2405853701 * ___dateTimeInfo_11;
	// System.Globalization.TextInfo modreq(System.Runtime.CompilerServices.IsVolatile) System.Globalization.CultureInfo::textInfo
	TextInfo_t3810425522 * ___textInfo_12;
	// System.String System.Globalization.CultureInfo::m_name
	String_t* ___m_name_13;
	// System.String System.Globalization.CultureInfo::englishname
	String_t* ___englishname_14;
	// System.String System.Globalization.CultureInfo::nativename
	String_t* ___nativename_15;
	// System.String System.Globalization.CultureInfo::iso3lang
	String_t* ___iso3lang_16;
	// System.String System.Globalization.CultureInfo::iso2lang
	String_t* ___iso2lang_17;
	// System.String System.Globalization.CultureInfo::win3lang
	String_t* ___win3lang_18;
	// System.String System.Globalization.CultureInfo::territory
	String_t* ___territory_19;
	// System.String[] System.Globalization.CultureInfo::native_calendar_names
	StringU5BU5D_t1281789340* ___native_calendar_names_20;
	// System.Globalization.CompareInfo modreq(System.Runtime.CompilerServices.IsVolatile) System.Globalization.CultureInfo::compareInfo
	CompareInfo_t1092934962 * ___compareInfo_21;
	// System.Void* System.Globalization.CultureInfo::textinfo_data
	void* ___textinfo_data_22;
	// System.Int32 System.Globalization.CultureInfo::m_dataItem
	int32_t ___m_dataItem_23;
	// System.Globalization.Calendar System.Globalization.CultureInfo::calendar
	Calendar_t1661121569 * ___calendar_24;
	// System.Globalization.CultureInfo System.Globalization.CultureInfo::parent_culture
	CultureInfo_t4157843068 * ___parent_culture_25;
	// System.Boolean System.Globalization.CultureInfo::constructed
	bool ___constructed_26;
	// System.Byte[] System.Globalization.CultureInfo::cached_serialized_form
	ByteU5BU5D_t4116647657* ___cached_serialized_form_27;
	// System.Globalization.CultureData System.Globalization.CultureInfo::m_cultureData
	CultureData_t1899656083 * ___m_cultureData_28;
	// System.Boolean System.Globalization.CultureInfo::m_isInherited
	bool ___m_isInherited_29;

public:
	inline static int32_t get_offset_of_m_isReadOnly_3() { return static_cast<int32_t>(offsetof(CultureInfo_t4157843068, ___m_isReadOnly_3)); }
	inline bool get_m_isReadOnly_3() const { return ___m_isReadOnly_3; }
	inline bool* get_address_of_m_isReadOnly_3() { return &___m_isReadOnly_3; }
	inline void set_m_isReadOnly_3(bool value)
	{
		___m_isReadOnly_3 = value;
	}

	inline static int32_t get_offset_of_cultureID_4() { return static_cast<int32_t>(offsetof(CultureInfo_t4157843068, ___cultureID_4)); }
	inline int32_t get_cultureID_4() const { return ___cultureID_4; }
	inline int32_t* get_address_of_cultureID_4() { return &___cultureID_4; }
	inline void set_cultureID_4(int32_t value)
	{
		___cultureID_4 = value;
	}

	inline static int32_t get_offset_of_parent_lcid_5() { return static_cast<int32_t>(offsetof(CultureInfo_t4157843068, ___parent_lcid_5)); }
	inline int32_t get_parent_lcid_5() const { return ___parent_lcid_5; }
	inline int32_t* get_address_of_parent_lcid_5() { return &___parent_lcid_5; }
	inline void set_parent_lcid_5(int32_t value)
	{
		___parent_lcid_5 = value;
	}

	inline static int32_t get_offset_of_datetime_index_6() { return static_cast<int32_t>(offsetof(CultureInfo_t4157843068, ___datetime_index_6)); }
	inline int32_t get_datetime_index_6() const { return ___datetime_index_6; }
	inline int32_t* get_address_of_datetime_index_6() { return &___datetime_index_6; }
	inline void set_datetime_index_6(int32_t value)
	{
		___datetime_index_6 = value;
	}

	inline static int32_t get_offset_of_number_index_7() { return static_cast<int32_t>(offsetof(CultureInfo_t4157843068, ___number_index_7)); }
	inline int32_t get_number_index_7() const { return ___number_index_7; }
	inline int32_t* get_address_of_number_index_7() { return &___number_index_7; }
	inline void set_number_index_7(int32_t value)
	{
		___number_index_7 = value;
	}

	inline static int32_t get_offset_of_default_calendar_type_8() { return static_cast<int32_t>(offsetof(CultureInfo_t4157843068, ___default_calendar_type_8)); }
	inline int32_t get_default_calendar_type_8() const { return ___default_calendar_type_8; }
	inline int32_t* get_address_of_default_calendar_type_8() { return &___default_calendar_type_8; }
	inline void set_default_calendar_type_8(int32_t value)
	{
		___default_calendar_type_8 = value;
	}

	inline static int32_t get_offset_of_m_useUserOverride_9() { return static_cast<int32_t>(offsetof(CultureInfo_t4157843068, ___m_useUserOverride_9)); }
	inline bool get_m_useUserOverride_9() const { return ___m_useUserOverride_9; }
	inline bool* get_address_of_m_useUserOverride_9() { return &___m_useUserOverride_9; }
	inline void set_m_useUserOverride_9(bool value)
	{
		___m_useUserOverride_9 = value;
	}

	inline static int32_t get_offset_of_numInfo_10() { return static_cast<int32_t>(offsetof(CultureInfo_t4157843068, ___numInfo_10)); }
	inline NumberFormatInfo_t435877138 * get_numInfo_10() const { return ___numInfo_10; }
	inline NumberFormatInfo_t435877138 ** get_address_of_numInfo_10() { return &___numInfo_10; }
	inline void set_numInfo_10(NumberFormatInfo_t435877138 * value)
	{
		___numInfo_10 = value;
		Il2CppCodeGenWriteBarrier((&___numInfo_10), value);
	}

	inline static int32_t get_offset_of_dateTimeInfo_11() { return static_cast<int32_t>(offsetof(CultureInfo_t4157843068, ___dateTimeInfo_11)); }
	inline DateTimeFormatInfo_t2405853701 * get_dateTimeInfo_11() const { return ___dateTimeInfo_11; }
	inline DateTimeFormatInfo_t2405853701 ** get_address_of_dateTimeInfo_11() { return &___dateTimeInfo_11; }
	inline void set_dateTimeInfo_11(DateTimeFormatInfo_t2405853701 * value)
	{
		___dateTimeInfo_11 = value;
		Il2CppCodeGenWriteBarrier((&___dateTimeInfo_11), value);
	}

	inline static int32_t get_offset_of_textInfo_12() { return static_cast<int32_t>(offsetof(CultureInfo_t4157843068, ___textInfo_12)); }
	inline TextInfo_t3810425522 * get_textInfo_12() const { return ___textInfo_12; }
	inline TextInfo_t3810425522 ** get_address_of_textInfo_12() { return &___textInfo_12; }
	inline void set_textInfo_12(TextInfo_t3810425522 * value)
	{
		___textInfo_12 = value;
		Il2CppCodeGenWriteBarrier((&___textInfo_12), value);
	}

	inline static int32_t get_offset_of_m_name_13() { return static_cast<int32_t>(offsetof(CultureInfo_t4157843068, ___m_name_13)); }
	inline String_t* get_m_name_13() const { return ___m_name_13; }
	inline String_t** get_address_of_m_name_13() { return &___m_name_13; }
	inline void set_m_name_13(String_t* value)
	{
		___m_name_13 = value;
		Il2CppCodeGenWriteBarrier((&___m_name_13), value);
	}

	inline static int32_t get_offset_of_englishname_14() { return static_cast<int32_t>(offsetof(CultureInfo_t4157843068, ___englishname_14)); }
	inline String_t* get_englishname_14() const { return ___englishname_14; }
	inline String_t** get_address_of_englishname_14() { return &___englishname_14; }
	inline void set_englishname_14(String_t* value)
	{
		___englishname_14 = value;
		Il2CppCodeGenWriteBarrier((&___englishname_14), value);
	}

	inline static int32_t get_offset_of_nativename_15() { return static_cast<int32_t>(offsetof(CultureInfo_t4157843068, ___nativename_15)); }
	inline String_t* get_nativename_15() const { return ___nativename_15; }
	inline String_t** get_address_of_nativename_15() { return &___nativename_15; }
	inline void set_nativename_15(String_t* value)
	{
		___nativename_15 = value;
		Il2CppCodeGenWriteBarrier((&___nativename_15), value);
	}

	inline static int32_t get_offset_of_iso3lang_16() { return static_cast<int32_t>(offsetof(CultureInfo_t4157843068, ___iso3lang_16)); }
	inline String_t* get_iso3lang_16() const { return ___iso3lang_16; }
	inline String_t** get_address_of_iso3lang_16() { return &___iso3lang_16; }
	inline void set_iso3lang_16(String_t* value)
	{
		___iso3lang_16 = value;
		Il2CppCodeGenWriteBarrier((&___iso3lang_16), value);
	}

	inline static int32_t get_offset_of_iso2lang_17() { return static_cast<int32_t>(offsetof(CultureInfo_t4157843068, ___iso2lang_17)); }
	inline String_t* get_iso2lang_17() const { return ___iso2lang_17; }
	inline String_t** get_address_of_iso2lang_17() { return &___iso2lang_17; }
	inline void set_iso2lang_17(String_t* value)
	{
		___iso2lang_17 = value;
		Il2CppCodeGenWriteBarrier((&___iso2lang_17), value);
	}

	inline static int32_t get_offset_of_win3lang_18() { return static_cast<int32_t>(offsetof(CultureInfo_t4157843068, ___win3lang_18)); }
	inline String_t* get_win3lang_18() const { return ___win3lang_18; }
	inline String_t** get_address_of_win3lang_18() { return &___win3lang_18; }
	inline void set_win3lang_18(String_t* value)
	{
		___win3lang_18 = value;
		Il2CppCodeGenWriteBarrier((&___win3lang_18), value);
	}

	inline static int32_t get_offset_of_territory_19() { return static_cast<int32_t>(offsetof(CultureInfo_t4157843068, ___territory_19)); }
	inline String_t* get_territory_19() const { return ___territory_19; }
	inline String_t** get_address_of_territory_19() { return &___territory_19; }
	inline void set_territory_19(String_t* value)
	{
		___territory_19 = value;
		Il2CppCodeGenWriteBarrier((&___territory_19), value);
	}

	inline static int32_t get_offset_of_native_calendar_names_20() { return static_cast<int32_t>(offsetof(CultureInfo_t4157843068, ___native_calendar_names_20)); }
	inline StringU5BU5D_t1281789340* get_native_calendar_names_20() const { return ___native_calendar_names_20; }
	inline StringU5BU5D_t1281789340** get_address_of_native_calendar_names_20() { return &___native_calendar_names_20; }
	inline void set_native_calendar_names_20(StringU5BU5D_t1281789340* value)
	{
		___native_calendar_names_20 = value;
		Il2CppCodeGenWriteBarrier((&___native_calendar_names_20), value);
	}

	inline static int32_t get_offset_of_compareInfo_21() { return static_cast<int32_t>(offsetof(CultureInfo_t4157843068, ___compareInfo_21)); }
	inline CompareInfo_t1092934962 * get_compareInfo_21() const { return ___compareInfo_21; }
	inline CompareInfo_t1092934962 ** get_address_of_compareInfo_21() { return &___compareInfo_21; }
	inline void set_compareInfo_21(CompareInfo_t1092934962 * value)
	{
		___compareInfo_21 = value;
		Il2CppCodeGenWriteBarrier((&___compareInfo_21), value);
	}

	inline static int32_t get_offset_of_textinfo_data_22() { return static_cast<int32_t>(offsetof(CultureInfo_t4157843068, ___textinfo_data_22)); }
	inline void* get_textinfo_data_22() const { return ___textinfo_data_22; }
	inline void** get_address_of_textinfo_data_22() { return &___textinfo_data_22; }
	inline void set_textinfo_data_22(void* value)
	{
		___textinfo_data_22 = value;
	}

	inline static int32_t get_offset_of_m_dataItem_23() { return static_cast<int32_t>(offsetof(CultureInfo_t4157843068, ___m_dataItem_23)); }
	inline int32_t get_m_dataItem_23() const { return ___m_dataItem_23; }
	inline int32_t* get_address_of_m_dataItem_23() { return &___m_dataItem_23; }
	inline void set_m_dataItem_23(int32_t value)
	{
		___m_dataItem_23 = value;
	}

	inline static int32_t get_offset_of_calendar_24() { return static_cast<int32_t>(offsetof(CultureInfo_t4157843068, ___calendar_24)); }
	inline Calendar_t1661121569 * get_calendar_24() const { return ___calendar_24; }
	inline Calendar_t1661121569 ** get_address_of_calendar_24() { return &___calendar_24; }
	inline void set_calendar_24(Calendar_t1661121569 * value)
	{
		___calendar_24 = value;
		Il2CppCodeGenWriteBarrier((&___calendar_24), value);
	}

	inline static int32_t get_offset_of_parent_culture_25() { return static_cast<int32_t>(offsetof(CultureInfo_t4157843068, ___parent_culture_25)); }
	inline CultureInfo_t4157843068 * get_parent_culture_25() const { return ___parent_culture_25; }
	inline CultureInfo_t4157843068 ** get_address_of_parent_culture_25() { return &___parent_culture_25; }
	inline void set_parent_culture_25(CultureInfo_t4157843068 * value)
	{
		___parent_culture_25 = value;
		Il2CppCodeGenWriteBarrier((&___parent_culture_25), value);
	}

	inline static int32_t get_offset_of_constructed_26() { return static_cast<int32_t>(offsetof(CultureInfo_t4157843068, ___constructed_26)); }
	inline bool get_constructed_26() const { return ___constructed_26; }
	inline bool* get_address_of_constructed_26() { return &___constructed_26; }
	inline void set_constructed_26(bool value)
	{
		___constructed_26 = value;
	}

	inline static int32_t get_offset_of_cached_serialized_form_27() { return static_cast<int32_t>(offsetof(CultureInfo_t4157843068, ___cached_serialized_form_27)); }
	inline ByteU5BU5D_t4116647657* get_cached_serialized_form_27() const { return ___cached_serialized_form_27; }
	inline ByteU5BU5D_t4116647657** get_address_of_cached_serialized_form_27() { return &___cached_serialized_form_27; }
	inline void set_cached_serialized_form_27(ByteU5BU5D_t4116647657* value)
	{
		___cached_serialized_form_27 = value;
		Il2CppCodeGenWriteBarrier((&___cached_serialized_form_27), value);
	}

	inline static int32_t get_offset_of_m_cultureData_28() { return static_cast<int32_t>(offsetof(CultureInfo_t4157843068, ___m_cultureData_28)); }
	inline CultureData_t1899656083 * get_m_cultureData_28() const { return ___m_cultureData_28; }
	inline CultureData_t1899656083 ** get_address_of_m_cultureData_28() { return &___m_cultureData_28; }
	inline void set_m_cultureData_28(CultureData_t1899656083 * value)
	{
		___m_cultureData_28 = value;
		Il2CppCodeGenWriteBarrier((&___m_cultureData_28), value);
	}

	inline static int32_t get_offset_of_m_isInherited_29() { return static_cast<int32_t>(offsetof(CultureInfo_t4157843068, ___m_isInherited_29)); }
	inline bool get_m_isInherited_29() const { return ___m_isInherited_29; }
	inline bool* get_address_of_m_isInherited_29() { return &___m_isInherited_29; }
	inline void set_m_isInherited_29(bool value)
	{
		___m_isInherited_29 = value;
	}
};

struct CultureInfo_t4157843068_StaticFields
{
public:
	// System.Globalization.CultureInfo modreq(System.Runtime.CompilerServices.IsVolatile) System.Globalization.CultureInfo::invariant_culture_info
	CultureInfo_t4157843068 * ___invariant_culture_info_0;
	// System.Object System.Globalization.CultureInfo::shared_table_lock
	RuntimeObject * ___shared_table_lock_1;
	// System.Globalization.CultureInfo System.Globalization.CultureInfo::default_current_culture
	CultureInfo_t4157843068 * ___default_current_culture_2;
	// System.Globalization.CultureInfo modreq(System.Runtime.CompilerServices.IsVolatile) System.Globalization.CultureInfo::s_DefaultThreadCurrentUICulture
	CultureInfo_t4157843068 * ___s_DefaultThreadCurrentUICulture_33;
	// System.Globalization.CultureInfo modreq(System.Runtime.CompilerServices.IsVolatile) System.Globalization.CultureInfo::s_DefaultThreadCurrentCulture
	CultureInfo_t4157843068 * ___s_DefaultThreadCurrentCulture_34;
	// System.Collections.Generic.Dictionary`2<System.Int32,System.Globalization.CultureInfo> System.Globalization.CultureInfo::shared_by_number
	Dictionary_2_t3046556399 * ___shared_by_number_35;
	// System.Collections.Generic.Dictionary`2<System.String,System.Globalization.CultureInfo> System.Globalization.CultureInfo::shared_by_name
	Dictionary_2_t3943099367 * ___shared_by_name_36;
	// System.Boolean System.Globalization.CultureInfo::IsTaiwanSku
	bool ___IsTaiwanSku_37;

public:
	inline static int32_t get_offset_of_invariant_culture_info_0() { return static_cast<int32_t>(offsetof(CultureInfo_t4157843068_StaticFields, ___invariant_culture_info_0)); }
	inline CultureInfo_t4157843068 * get_invariant_culture_info_0() const { return ___invariant_culture_info_0; }
	inline CultureInfo_t4157843068 ** get_address_of_invariant_culture_info_0() { return &___invariant_culture_info_0; }
	inline void set_invariant_culture_info_0(CultureInfo_t4157843068 * value)
	{
		___invariant_culture_info_0 = value;
		Il2CppCodeGenWriteBarrier((&___invariant_culture_info_0), value);
	}

	inline static int32_t get_offset_of_shared_table_lock_1() { return static_cast<int32_t>(offsetof(CultureInfo_t4157843068_StaticFields, ___shared_table_lock_1)); }
	inline RuntimeObject * get_shared_table_lock_1() const { return ___shared_table_lock_1; }
	inline RuntimeObject ** get_address_of_shared_table_lock_1() { return &___shared_table_lock_1; }
	inline void set_shared_table_lock_1(RuntimeObject * value)
	{
		___shared_table_lock_1 = value;
		Il2CppCodeGenWriteBarrier((&___shared_table_lock_1), value);
	}

	inline static int32_t get_offset_of_default_current_culture_2() { return static_cast<int32_t>(offsetof(CultureInfo_t4157843068_StaticFields, ___default_current_culture_2)); }
	inline CultureInfo_t4157843068 * get_default_current_culture_2() const { return ___default_current_culture_2; }
	inline CultureInfo_t4157843068 ** get_address_of_default_current_culture_2() { return &___default_current_culture_2; }
	inline void set_default_current_culture_2(CultureInfo_t4157843068 * value)
	{
		___default_current_culture_2 = value;
		Il2CppCodeGenWriteBarrier((&___default_current_culture_2), value);
	}

	inline static int32_t get_offset_of_s_DefaultThreadCurrentUICulture_33() { return static_cast<int32_t>(offsetof(CultureInfo_t4157843068_StaticFields, ___s_DefaultThreadCurrentUICulture_33)); }
	inline CultureInfo_t4157843068 * get_s_DefaultThreadCurrentUICulture_33() const { return ___s_DefaultThreadCurrentUICulture_33; }
	inline CultureInfo_t4157843068 ** get_address_of_s_DefaultThreadCurrentUICulture_33() { return &___s_DefaultThreadCurrentUICulture_33; }
	inline void set_s_DefaultThreadCurrentUICulture_33(CultureInfo_t4157843068 * value)
	{
		___s_DefaultThreadCurrentUICulture_33 = value;
		Il2CppCodeGenWriteBarrier((&___s_DefaultThreadCurrentUICulture_33), value);
	}

	inline static int32_t get_offset_of_s_DefaultThreadCurrentCulture_34() { return static_cast<int32_t>(offsetof(CultureInfo_t4157843068_StaticFields, ___s_DefaultThreadCurrentCulture_34)); }
	inline CultureInfo_t4157843068 * get_s_DefaultThreadCurrentCulture_34() const { return ___s_DefaultThreadCurrentCulture_34; }
	inline CultureInfo_t4157843068 ** get_address_of_s_DefaultThreadCurrentCulture_34() { return &___s_DefaultThreadCurrentCulture_34; }
	inline void set_s_DefaultThreadCurrentCulture_34(CultureInfo_t4157843068 * value)
	{
		___s_DefaultThreadCurrentCulture_34 = value;
		Il2CppCodeGenWriteBarrier((&___s_DefaultThreadCurrentCulture_34), value);
	}

	inline static int32_t get_offset_of_shared_by_number_35() { return static_cast<int32_t>(offsetof(CultureInfo_t4157843068_StaticFields, ___shared_by_number_35)); }
	inline Dictionary_2_t3046556399 * get_shared_by_number_35() const { return ___shared_by_number_35; }
	inline Dictionary_2_t3046556399 ** get_address_of_shared_by_number_35() { return &___shared_by_number_35; }
	inline void set_shared_by_number_35(Dictionary_2_t3046556399 * value)
	{
		___shared_by_number_35 = value;
		Il2CppCodeGenWriteBarrier((&___shared_by_number_35), value);
	}

	inline static int32_t get_offset_of_shared_by_name_36() { return static_cast<int32_t>(offsetof(CultureInfo_t4157843068_StaticFields, ___shared_by_name_36)); }
	inline Dictionary_2_t3943099367 * get_shared_by_name_36() const { return ___shared_by_name_36; }
	inline Dictionary_2_t3943099367 ** get_address_of_shared_by_name_36() { return &___shared_by_name_36; }
	inline void set_shared_by_name_36(Dictionary_2_t3943099367 * value)
	{
		___shared_by_name_36 = value;
		Il2CppCodeGenWriteBarrier((&___shared_by_name_36), value);
	}

	inline static int32_t get_offset_of_IsTaiwanSku_37() { return static_cast<int32_t>(offsetof(CultureInfo_t4157843068_StaticFields, ___IsTaiwanSku_37)); }
	inline bool get_IsTaiwanSku_37() const { return ___IsTaiwanSku_37; }
	inline bool* get_address_of_IsTaiwanSku_37() { return &___IsTaiwanSku_37; }
	inline void set_IsTaiwanSku_37(bool value)
	{
		___IsTaiwanSku_37 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
// Native definition for P/Invoke marshalling of System.Globalization.CultureInfo
struct CultureInfo_t4157843068_marshaled_pinvoke
{
	int32_t ___m_isReadOnly_3;
	int32_t ___cultureID_4;
	int32_t ___parent_lcid_5;
	int32_t ___datetime_index_6;
	int32_t ___number_index_7;
	int32_t ___default_calendar_type_8;
	int32_t ___m_useUserOverride_9;
	NumberFormatInfo_t435877138 * ___numInfo_10;
	DateTimeFormatInfo_t2405853701 * ___dateTimeInfo_11;
	TextInfo_t3810425522 * ___textInfo_12;
	char* ___m_name_13;
	char* ___englishname_14;
	char* ___nativename_15;
	char* ___iso3lang_16;
	char* ___iso2lang_17;
	char* ___win3lang_18;
	char* ___territory_19;
	char** ___native_calendar_names_20;
	CompareInfo_t1092934962 * ___compareInfo_21;
	void* ___textinfo_data_22;
	int32_t ___m_dataItem_23;
	Calendar_t1661121569 * ___calendar_24;
	CultureInfo_t4157843068_marshaled_pinvoke* ___parent_culture_25;
	int32_t ___constructed_26;
	uint8_t* ___cached_serialized_form_27;
	CultureData_t1899656083_marshaled_pinvoke* ___m_cultureData_28;
	int32_t ___m_isInherited_29;
};
// Native definition for COM marshalling of System.Globalization.CultureInfo
struct CultureInfo_t4157843068_marshaled_com
{
	int32_t ___m_isReadOnly_3;
	int32_t ___cultureID_4;
	int32_t ___parent_lcid_5;
	int32_t ___datetime_index_6;
	int32_t ___number_index_7;
	int32_t ___default_calendar_type_8;
	int32_t ___m_useUserOverride_9;
	NumberFormatInfo_t435877138 * ___numInfo_10;
	DateTimeFormatInfo_t2405853701 * ___dateTimeInfo_11;
	TextInfo_t3810425522 * ___textInfo_12;
	Il2CppChar* ___m_name_13;
	Il2CppChar* ___englishname_14;
	Il2CppChar* ___nativename_15;
	Il2CppChar* ___iso3lang_16;
	Il2CppChar* ___iso2lang_17;
	Il2CppChar* ___win3lang_18;
	Il2CppChar* ___territory_19;
	Il2CppChar** ___native_calendar_names_20;
	CompareInfo_t1092934962 * ___compareInfo_21;
	void* ___textinfo_data_22;
	int32_t ___m_dataItem_23;
	Calendar_t1661121569 * ___calendar_24;
	CultureInfo_t4157843068_marshaled_com* ___parent_culture_25;
	int32_t ___constructed_26;
	uint8_t* ___cached_serialized_form_27;
	CultureData_t1899656083_marshaled_com* ___m_cultureData_28;
	int32_t ___m_isInherited_29;
};
#endif // CULTUREINFO_T4157843068_H
#ifndef HASHHELPERS_T1653534276_H
#define HASHHELPERS_T1653534276_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Numerics.Hashing.HashHelpers
struct  HashHelpers_t1653534276  : public RuntimeObject
{
public:

public:
};

struct HashHelpers_t1653534276_StaticFields
{
public:
	// System.Int32 System.Numerics.Hashing.HashHelpers::RandomSeed
	int32_t ___RandomSeed_0;

public:
	inline static int32_t get_offset_of_RandomSeed_0() { return static_cast<int32_t>(offsetof(HashHelpers_t1653534276_StaticFields, ___RandomSeed_0)); }
	inline int32_t get_RandomSeed_0() const { return ___RandomSeed_0; }
	inline int32_t* get_address_of_RandomSeed_0() { return &___RandomSeed_0; }
	inline void set_RandomSeed_0(int32_t value)
	{
		___RandomSeed_0 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // HASHHELPERS_T1653534276_H
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
#ifndef CRITICALFINALIZEROBJECT_T701527852_H
#define CRITICALFINALIZEROBJECT_T701527852_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Runtime.ConstrainedExecution.CriticalFinalizerObject
struct  CriticalFinalizerObject_t701527852  : public RuntimeObject
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // CRITICALFINALIZEROBJECT_T701527852_H
#ifndef SERIALIZATIONINFO_T950877179_H
#define SERIALIZATIONINFO_T950877179_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Runtime.Serialization.SerializationInfo
struct  SerializationInfo_t950877179  : public RuntimeObject
{
public:
	// System.String[] System.Runtime.Serialization.SerializationInfo::m_members
	StringU5BU5D_t1281789340* ___m_members_3;
	// System.Object[] System.Runtime.Serialization.SerializationInfo::m_data
	ObjectU5BU5D_t2843939325* ___m_data_4;
	// System.Type[] System.Runtime.Serialization.SerializationInfo::m_types
	TypeU5BU5D_t3940880105* ___m_types_5;
	// System.Collections.Generic.Dictionary`2<System.String,System.Int32> System.Runtime.Serialization.SerializationInfo::m_nameToIndex
	Dictionary_2_t2736202052 * ___m_nameToIndex_6;
	// System.Int32 System.Runtime.Serialization.SerializationInfo::m_currMember
	int32_t ___m_currMember_7;
	// System.Runtime.Serialization.IFormatterConverter System.Runtime.Serialization.SerializationInfo::m_converter
	RuntimeObject* ___m_converter_8;
	// System.String System.Runtime.Serialization.SerializationInfo::m_fullTypeName
	String_t* ___m_fullTypeName_9;
	// System.String System.Runtime.Serialization.SerializationInfo::m_assemName
	String_t* ___m_assemName_10;
	// System.Type System.Runtime.Serialization.SerializationInfo::objectType
	Type_t * ___objectType_11;
	// System.Boolean System.Runtime.Serialization.SerializationInfo::isFullTypeNameSetExplicit
	bool ___isFullTypeNameSetExplicit_12;
	// System.Boolean System.Runtime.Serialization.SerializationInfo::isAssemblyNameSetExplicit
	bool ___isAssemblyNameSetExplicit_13;
	// System.Boolean System.Runtime.Serialization.SerializationInfo::requireSameTokenInPartialTrust
	bool ___requireSameTokenInPartialTrust_14;

public:
	inline static int32_t get_offset_of_m_members_3() { return static_cast<int32_t>(offsetof(SerializationInfo_t950877179, ___m_members_3)); }
	inline StringU5BU5D_t1281789340* get_m_members_3() const { return ___m_members_3; }
	inline StringU5BU5D_t1281789340** get_address_of_m_members_3() { return &___m_members_3; }
	inline void set_m_members_3(StringU5BU5D_t1281789340* value)
	{
		___m_members_3 = value;
		Il2CppCodeGenWriteBarrier((&___m_members_3), value);
	}

	inline static int32_t get_offset_of_m_data_4() { return static_cast<int32_t>(offsetof(SerializationInfo_t950877179, ___m_data_4)); }
	inline ObjectU5BU5D_t2843939325* get_m_data_4() const { return ___m_data_4; }
	inline ObjectU5BU5D_t2843939325** get_address_of_m_data_4() { return &___m_data_4; }
	inline void set_m_data_4(ObjectU5BU5D_t2843939325* value)
	{
		___m_data_4 = value;
		Il2CppCodeGenWriteBarrier((&___m_data_4), value);
	}

	inline static int32_t get_offset_of_m_types_5() { return static_cast<int32_t>(offsetof(SerializationInfo_t950877179, ___m_types_5)); }
	inline TypeU5BU5D_t3940880105* get_m_types_5() const { return ___m_types_5; }
	inline TypeU5BU5D_t3940880105** get_address_of_m_types_5() { return &___m_types_5; }
	inline void set_m_types_5(TypeU5BU5D_t3940880105* value)
	{
		___m_types_5 = value;
		Il2CppCodeGenWriteBarrier((&___m_types_5), value);
	}

	inline static int32_t get_offset_of_m_nameToIndex_6() { return static_cast<int32_t>(offsetof(SerializationInfo_t950877179, ___m_nameToIndex_6)); }
	inline Dictionary_2_t2736202052 * get_m_nameToIndex_6() const { return ___m_nameToIndex_6; }
	inline Dictionary_2_t2736202052 ** get_address_of_m_nameToIndex_6() { return &___m_nameToIndex_6; }
	inline void set_m_nameToIndex_6(Dictionary_2_t2736202052 * value)
	{
		___m_nameToIndex_6 = value;
		Il2CppCodeGenWriteBarrier((&___m_nameToIndex_6), value);
	}

	inline static int32_t get_offset_of_m_currMember_7() { return static_cast<int32_t>(offsetof(SerializationInfo_t950877179, ___m_currMember_7)); }
	inline int32_t get_m_currMember_7() const { return ___m_currMember_7; }
	inline int32_t* get_address_of_m_currMember_7() { return &___m_currMember_7; }
	inline void set_m_currMember_7(int32_t value)
	{
		___m_currMember_7 = value;
	}

	inline static int32_t get_offset_of_m_converter_8() { return static_cast<int32_t>(offsetof(SerializationInfo_t950877179, ___m_converter_8)); }
	inline RuntimeObject* get_m_converter_8() const { return ___m_converter_8; }
	inline RuntimeObject** get_address_of_m_converter_8() { return &___m_converter_8; }
	inline void set_m_converter_8(RuntimeObject* value)
	{
		___m_converter_8 = value;
		Il2CppCodeGenWriteBarrier((&___m_converter_8), value);
	}

	inline static int32_t get_offset_of_m_fullTypeName_9() { return static_cast<int32_t>(offsetof(SerializationInfo_t950877179, ___m_fullTypeName_9)); }
	inline String_t* get_m_fullTypeName_9() const { return ___m_fullTypeName_9; }
	inline String_t** get_address_of_m_fullTypeName_9() { return &___m_fullTypeName_9; }
	inline void set_m_fullTypeName_9(String_t* value)
	{
		___m_fullTypeName_9 = value;
		Il2CppCodeGenWriteBarrier((&___m_fullTypeName_9), value);
	}

	inline static int32_t get_offset_of_m_assemName_10() { return static_cast<int32_t>(offsetof(SerializationInfo_t950877179, ___m_assemName_10)); }
	inline String_t* get_m_assemName_10() const { return ___m_assemName_10; }
	inline String_t** get_address_of_m_assemName_10() { return &___m_assemName_10; }
	inline void set_m_assemName_10(String_t* value)
	{
		___m_assemName_10 = value;
		Il2CppCodeGenWriteBarrier((&___m_assemName_10), value);
	}

	inline static int32_t get_offset_of_objectType_11() { return static_cast<int32_t>(offsetof(SerializationInfo_t950877179, ___objectType_11)); }
	inline Type_t * get_objectType_11() const { return ___objectType_11; }
	inline Type_t ** get_address_of_objectType_11() { return &___objectType_11; }
	inline void set_objectType_11(Type_t * value)
	{
		___objectType_11 = value;
		Il2CppCodeGenWriteBarrier((&___objectType_11), value);
	}

	inline static int32_t get_offset_of_isFullTypeNameSetExplicit_12() { return static_cast<int32_t>(offsetof(SerializationInfo_t950877179, ___isFullTypeNameSetExplicit_12)); }
	inline bool get_isFullTypeNameSetExplicit_12() const { return ___isFullTypeNameSetExplicit_12; }
	inline bool* get_address_of_isFullTypeNameSetExplicit_12() { return &___isFullTypeNameSetExplicit_12; }
	inline void set_isFullTypeNameSetExplicit_12(bool value)
	{
		___isFullTypeNameSetExplicit_12 = value;
	}

	inline static int32_t get_offset_of_isAssemblyNameSetExplicit_13() { return static_cast<int32_t>(offsetof(SerializationInfo_t950877179, ___isAssemblyNameSetExplicit_13)); }
	inline bool get_isAssemblyNameSetExplicit_13() const { return ___isAssemblyNameSetExplicit_13; }
	inline bool* get_address_of_isAssemblyNameSetExplicit_13() { return &___isAssemblyNameSetExplicit_13; }
	inline void set_isAssemblyNameSetExplicit_13(bool value)
	{
		___isAssemblyNameSetExplicit_13 = value;
	}

	inline static int32_t get_offset_of_requireSameTokenInPartialTrust_14() { return static_cast<int32_t>(offsetof(SerializationInfo_t950877179, ___requireSameTokenInPartialTrust_14)); }
	inline bool get_requireSameTokenInPartialTrust_14() const { return ___requireSameTokenInPartialTrust_14; }
	inline bool* get_address_of_requireSameTokenInPartialTrust_14() { return &___requireSameTokenInPartialTrust_14; }
	inline void set_requireSameTokenInPartialTrust_14(bool value)
	{
		___requireSameTokenInPartialTrust_14 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // SERIALIZATIONINFO_T950877179_H
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
#ifndef VERSION_T3456873960_H
#define VERSION_T3456873960_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Version
struct  Version_t3456873960  : public RuntimeObject
{
public:
	// System.Int32 System.Version::_Major
	int32_t ____Major_0;
	// System.Int32 System.Version::_Minor
	int32_t ____Minor_1;
	// System.Int32 System.Version::_Build
	int32_t ____Build_2;
	// System.Int32 System.Version::_Revision
	int32_t ____Revision_3;

public:
	inline static int32_t get_offset_of__Major_0() { return static_cast<int32_t>(offsetof(Version_t3456873960, ____Major_0)); }
	inline int32_t get__Major_0() const { return ____Major_0; }
	inline int32_t* get_address_of__Major_0() { return &____Major_0; }
	inline void set__Major_0(int32_t value)
	{
		____Major_0 = value;
	}

	inline static int32_t get_offset_of__Minor_1() { return static_cast<int32_t>(offsetof(Version_t3456873960, ____Minor_1)); }
	inline int32_t get__Minor_1() const { return ____Minor_1; }
	inline int32_t* get_address_of__Minor_1() { return &____Minor_1; }
	inline void set__Minor_1(int32_t value)
	{
		____Minor_1 = value;
	}

	inline static int32_t get_offset_of__Build_2() { return static_cast<int32_t>(offsetof(Version_t3456873960, ____Build_2)); }
	inline int32_t get__Build_2() const { return ____Build_2; }
	inline int32_t* get_address_of__Build_2() { return &____Build_2; }
	inline void set__Build_2(int32_t value)
	{
		____Build_2 = value;
	}

	inline static int32_t get_offset_of__Revision_3() { return static_cast<int32_t>(offsetof(Version_t3456873960, ____Revision_3)); }
	inline int32_t get__Revision_3() const { return ____Revision_3; }
	inline int32_t* get_address_of__Revision_3() { return &____Revision_3; }
	inline void set__Revision_3(int32_t value)
	{
		____Revision_3 = value;
	}
};

struct Version_t3456873960_StaticFields
{
public:
	// System.Char[] System.Version::SeparatorsArray
	CharU5BU5D_t3528271667* ___SeparatorsArray_4;

public:
	inline static int32_t get_offset_of_SeparatorsArray_4() { return static_cast<int32_t>(offsetof(Version_t3456873960_StaticFields, ___SeparatorsArray_4)); }
	inline CharU5BU5D_t3528271667* get_SeparatorsArray_4() const { return ___SeparatorsArray_4; }
	inline CharU5BU5D_t3528271667** get_address_of_SeparatorsArray_4() { return &___SeparatorsArray_4; }
	inline void set_SeparatorsArray_4(CharU5BU5D_t3528271667* value)
	{
		___SeparatorsArray_4 = value;
		Il2CppCodeGenWriteBarrier((&___SeparatorsArray_4), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // VERSION_T3456873960_H
#ifndef __COMOBJECT_T2735933417_H
#define __COMOBJECT_T2735933417_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.__ComObject
struct  __ComObject_t2735933417  : public RuntimeObject
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // __COMOBJECT_T2735933417_H
#ifndef __FILTERS_T550753867_H
#define __FILTERS_T550753867_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.__Filters
struct  __Filters_t550753867  : public RuntimeObject
{
public:

public:
};

struct __Filters_t550753867_StaticFields
{
public:
	// System.__Filters System.__Filters::Instance
	__Filters_t550753867 * ___Instance_0;

public:
	inline static int32_t get_offset_of_Instance_0() { return static_cast<int32_t>(offsetof(__Filters_t550753867_StaticFields, ___Instance_0)); }
	inline __Filters_t550753867 * get_Instance_0() const { return ___Instance_0; }
	inline __Filters_t550753867 ** get_address_of_Instance_0() { return &___Instance_0; }
	inline void set_Instance_0(__Filters_t550753867 * value)
	{
		___Instance_0 = value;
		Il2CppCodeGenWriteBarrier((&___Instance_0), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // __FILTERS_T550753867_H
#ifndef IL2CPPCOMOBJECT_H
#define IL2CPPCOMOBJECT_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.__Il2CppComObject

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // IL2CPPCOMOBJECT_H
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
#ifndef CHAR_T3634460470_H
#define CHAR_T3634460470_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Char
struct  Char_t3634460470 
{
public:
	// System.Char System.Char::m_value
	Il2CppChar ___m_value_0;

public:
	inline static int32_t get_offset_of_m_value_0() { return static_cast<int32_t>(offsetof(Char_t3634460470, ___m_value_0)); }
	inline Il2CppChar get_m_value_0() const { return ___m_value_0; }
	inline Il2CppChar* get_address_of_m_value_0() { return &___m_value_0; }
	inline void set_m_value_0(Il2CppChar value)
	{
		___m_value_0 = value;
	}
};

struct Char_t3634460470_StaticFields
{
public:
	// System.Byte[] System.Char::categoryForLatin1
	ByteU5BU5D_t4116647657* ___categoryForLatin1_3;

public:
	inline static int32_t get_offset_of_categoryForLatin1_3() { return static_cast<int32_t>(offsetof(Char_t3634460470_StaticFields, ___categoryForLatin1_3)); }
	inline ByteU5BU5D_t4116647657* get_categoryForLatin1_3() const { return ___categoryForLatin1_3; }
	inline ByteU5BU5D_t4116647657** get_address_of_categoryForLatin1_3() { return &___categoryForLatin1_3; }
	inline void set_categoryForLatin1_3(ByteU5BU5D_t4116647657* value)
	{
		___categoryForLatin1_3 = value;
		Il2CppCodeGenWriteBarrier((&___categoryForLatin1_3), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // CHAR_T3634460470_H
#ifndef COORD_T397375283_H
#define COORD_T397375283_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Coord
struct  Coord_t397375283 
{
public:
	// System.Int16 System.Coord::X
	int16_t ___X_0;
	// System.Int16 System.Coord::Y
	int16_t ___Y_1;

public:
	inline static int32_t get_offset_of_X_0() { return static_cast<int32_t>(offsetof(Coord_t397375283, ___X_0)); }
	inline int16_t get_X_0() const { return ___X_0; }
	inline int16_t* get_address_of_X_0() { return &___X_0; }
	inline void set_X_0(int16_t value)
	{
		___X_0 = value;
	}

	inline static int32_t get_offset_of_Y_1() { return static_cast<int32_t>(offsetof(Coord_t397375283, ___Y_1)); }
	inline int16_t get_Y_1() const { return ___Y_1; }
	inline int16_t* get_address_of_Y_1() { return &___Y_1; }
	inline void set_Y_1(int16_t value)
	{
		___Y_1 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // COORD_T397375283_H
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
#ifndef INPUTRECORD_T2660212290_H
#define INPUTRECORD_T2660212290_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.InputRecord
struct  InputRecord_t2660212290 
{
public:
	// System.Int16 System.InputRecord::EventType
	int16_t ___EventType_0;
	// System.Boolean System.InputRecord::KeyDown
	bool ___KeyDown_1;
	// System.Int16 System.InputRecord::RepeatCount
	int16_t ___RepeatCount_2;
	// System.Int16 System.InputRecord::VirtualKeyCode
	int16_t ___VirtualKeyCode_3;
	// System.Int16 System.InputRecord::VirtualScanCode
	int16_t ___VirtualScanCode_4;
	// System.Char System.InputRecord::Character
	Il2CppChar ___Character_5;
	// System.Int32 System.InputRecord::ControlKeyState
	int32_t ___ControlKeyState_6;
	// System.Int32 System.InputRecord::pad1
	int32_t ___pad1_7;
	// System.Boolean System.InputRecord::pad2
	bool ___pad2_8;

public:
	inline static int32_t get_offset_of_EventType_0() { return static_cast<int32_t>(offsetof(InputRecord_t2660212290, ___EventType_0)); }
	inline int16_t get_EventType_0() const { return ___EventType_0; }
	inline int16_t* get_address_of_EventType_0() { return &___EventType_0; }
	inline void set_EventType_0(int16_t value)
	{
		___EventType_0 = value;
	}

	inline static int32_t get_offset_of_KeyDown_1() { return static_cast<int32_t>(offsetof(InputRecord_t2660212290, ___KeyDown_1)); }
	inline bool get_KeyDown_1() const { return ___KeyDown_1; }
	inline bool* get_address_of_KeyDown_1() { return &___KeyDown_1; }
	inline void set_KeyDown_1(bool value)
	{
		___KeyDown_1 = value;
	}

	inline static int32_t get_offset_of_RepeatCount_2() { return static_cast<int32_t>(offsetof(InputRecord_t2660212290, ___RepeatCount_2)); }
	inline int16_t get_RepeatCount_2() const { return ___RepeatCount_2; }
	inline int16_t* get_address_of_RepeatCount_2() { return &___RepeatCount_2; }
	inline void set_RepeatCount_2(int16_t value)
	{
		___RepeatCount_2 = value;
	}

	inline static int32_t get_offset_of_VirtualKeyCode_3() { return static_cast<int32_t>(offsetof(InputRecord_t2660212290, ___VirtualKeyCode_3)); }
	inline int16_t get_VirtualKeyCode_3() const { return ___VirtualKeyCode_3; }
	inline int16_t* get_address_of_VirtualKeyCode_3() { return &___VirtualKeyCode_3; }
	inline void set_VirtualKeyCode_3(int16_t value)
	{
		___VirtualKeyCode_3 = value;
	}

	inline static int32_t get_offset_of_VirtualScanCode_4() { return static_cast<int32_t>(offsetof(InputRecord_t2660212290, ___VirtualScanCode_4)); }
	inline int16_t get_VirtualScanCode_4() const { return ___VirtualScanCode_4; }
	inline int16_t* get_address_of_VirtualScanCode_4() { return &___VirtualScanCode_4; }
	inline void set_VirtualScanCode_4(int16_t value)
	{
		___VirtualScanCode_4 = value;
	}

	inline static int32_t get_offset_of_Character_5() { return static_cast<int32_t>(offsetof(InputRecord_t2660212290, ___Character_5)); }
	inline Il2CppChar get_Character_5() const { return ___Character_5; }
	inline Il2CppChar* get_address_of_Character_5() { return &___Character_5; }
	inline void set_Character_5(Il2CppChar value)
	{
		___Character_5 = value;
	}

	inline static int32_t get_offset_of_ControlKeyState_6() { return static_cast<int32_t>(offsetof(InputRecord_t2660212290, ___ControlKeyState_6)); }
	inline int32_t get_ControlKeyState_6() const { return ___ControlKeyState_6; }
	inline int32_t* get_address_of_ControlKeyState_6() { return &___ControlKeyState_6; }
	inline void set_ControlKeyState_6(int32_t value)
	{
		___ControlKeyState_6 = value;
	}

	inline static int32_t get_offset_of_pad1_7() { return static_cast<int32_t>(offsetof(InputRecord_t2660212290, ___pad1_7)); }
	inline int32_t get_pad1_7() const { return ___pad1_7; }
	inline int32_t* get_address_of_pad1_7() { return &___pad1_7; }
	inline void set_pad1_7(int32_t value)
	{
		___pad1_7 = value;
	}

	inline static int32_t get_offset_of_pad2_8() { return static_cast<int32_t>(offsetof(InputRecord_t2660212290, ___pad2_8)); }
	inline bool get_pad2_8() const { return ___pad2_8; }
	inline bool* get_address_of_pad2_8() { return &___pad2_8; }
	inline void set_pad2_8(bool value)
	{
		___pad2_8 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
// Native definition for P/Invoke marshalling of System.InputRecord
struct InputRecord_t2660212290_marshaled_pinvoke
{
	int16_t ___EventType_0;
	int32_t ___KeyDown_1;
	int16_t ___RepeatCount_2;
	int16_t ___VirtualKeyCode_3;
	int16_t ___VirtualScanCode_4;
	uint8_t ___Character_5;
	int32_t ___ControlKeyState_6;
	int32_t ___pad1_7;
	int32_t ___pad2_8;
};
// Native definition for COM marshalling of System.InputRecord
struct InputRecord_t2660212290_marshaled_com
{
	int16_t ___EventType_0;
	int32_t ___KeyDown_1;
	int16_t ___RepeatCount_2;
	int16_t ___VirtualKeyCode_3;
	int16_t ___VirtualScanCode_4;
	uint8_t ___Character_5;
	int32_t ___ControlKeyState_6;
	int32_t ___pad1_7;
	int32_t ___pad2_8;
};
#endif // INPUTRECORD_T2660212290_H
#ifndef INT16_T2552820387_H
#define INT16_T2552820387_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Int16
struct  Int16_t2552820387 
{
public:
	// System.Int16 System.Int16::m_value
	int16_t ___m_value_0;

public:
	inline static int32_t get_offset_of_m_value_0() { return static_cast<int32_t>(offsetof(Int16_t2552820387, ___m_value_0)); }
	inline int16_t get_m_value_0() const { return ___m_value_0; }
	inline int16_t* get_address_of_m_value_0() { return &___m_value_0; }
	inline void set_m_value_0(int16_t value)
	{
		___m_value_0 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // INT16_T2552820387_H
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
#ifndef FIELDINFO_T_H
#define FIELDINFO_T_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Reflection.FieldInfo
struct  FieldInfo_t  : public MemberInfo_t
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // FIELDINFO_T_H
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
#ifndef GCHANDLE_T3351438187_H
#define GCHANDLE_T3351438187_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Runtime.InteropServices.GCHandle
struct  GCHandle_t3351438187 
{
public:
	// System.Int32 System.Runtime.InteropServices.GCHandle::handle
	int32_t ___handle_0;

public:
	inline static int32_t get_offset_of_handle_0() { return static_cast<int32_t>(offsetof(GCHandle_t3351438187, ___handle_0)); }
	inline int32_t get_handle_0() const { return ___handle_0; }
	inline int32_t* get_address_of_handle_0() { return &___handle_0; }
	inline void set_handle_0(int32_t value)
	{
		___handle_0 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // GCHANDLE_T3351438187_H
#ifndef SMALLRECT_T2930836963_H
#define SMALLRECT_T2930836963_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.SmallRect
struct  SmallRect_t2930836963 
{
public:
	// System.Int16 System.SmallRect::Left
	int16_t ___Left_0;
	// System.Int16 System.SmallRect::Top
	int16_t ___Top_1;
	// System.Int16 System.SmallRect::Right
	int16_t ___Right_2;
	// System.Int16 System.SmallRect::Bottom
	int16_t ___Bottom_3;

public:
	inline static int32_t get_offset_of_Left_0() { return static_cast<int32_t>(offsetof(SmallRect_t2930836963, ___Left_0)); }
	inline int16_t get_Left_0() const { return ___Left_0; }
	inline int16_t* get_address_of_Left_0() { return &___Left_0; }
	inline void set_Left_0(int16_t value)
	{
		___Left_0 = value;
	}

	inline static int32_t get_offset_of_Top_1() { return static_cast<int32_t>(offsetof(SmallRect_t2930836963, ___Top_1)); }
	inline int16_t get_Top_1() const { return ___Top_1; }
	inline int16_t* get_address_of_Top_1() { return &___Top_1; }
	inline void set_Top_1(int16_t value)
	{
		___Top_1 = value;
	}

	inline static int32_t get_offset_of_Right_2() { return static_cast<int32_t>(offsetof(SmallRect_t2930836963, ___Right_2)); }
	inline int16_t get_Right_2() const { return ___Right_2; }
	inline int16_t* get_address_of_Right_2() { return &___Right_2; }
	inline void set_Right_2(int16_t value)
	{
		___Right_2 = value;
	}

	inline static int32_t get_offset_of_Bottom_3() { return static_cast<int32_t>(offsetof(SmallRect_t2930836963, ___Bottom_3)); }
	inline int16_t get_Bottom_3() const { return ___Bottom_3; }
	inline int16_t* get_address_of_Bottom_3() { return &___Bottom_3; }
	inline void set_Bottom_3(int16_t value)
	{
		___Bottom_3 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // SMALLRECT_T2930836963_H
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
#ifndef THREAD_T2300836069_H
#define THREAD_T2300836069_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Threading.Thread
struct  Thread_t2300836069  : public CriticalFinalizerObject_t701527852
{
public:
	// System.Threading.InternalThread System.Threading.Thread::internal_thread
	InternalThread_t95296544 * ___internal_thread_6;
	// System.Object System.Threading.Thread::m_ThreadStartArg
	RuntimeObject * ___m_ThreadStartArg_7;
	// System.Object System.Threading.Thread::pending_exception
	RuntimeObject * ___pending_exception_8;
	// System.Security.Principal.IPrincipal System.Threading.Thread::principal
	RuntimeObject* ___principal_9;
	// System.Int32 System.Threading.Thread::principal_version
	int32_t ___principal_version_10;
	// System.MulticastDelegate System.Threading.Thread::m_Delegate
	MulticastDelegate_t * ___m_Delegate_12;
	// System.Threading.ExecutionContext System.Threading.Thread::m_ExecutionContext
	ExecutionContext_t1748372627 * ___m_ExecutionContext_13;
	// System.Boolean System.Threading.Thread::m_ExecutionContextBelongsToOuterScope
	bool ___m_ExecutionContextBelongsToOuterScope_14;

public:
	inline static int32_t get_offset_of_internal_thread_6() { return static_cast<int32_t>(offsetof(Thread_t2300836069, ___internal_thread_6)); }
	inline InternalThread_t95296544 * get_internal_thread_6() const { return ___internal_thread_6; }
	inline InternalThread_t95296544 ** get_address_of_internal_thread_6() { return &___internal_thread_6; }
	inline void set_internal_thread_6(InternalThread_t95296544 * value)
	{
		___internal_thread_6 = value;
		Il2CppCodeGenWriteBarrier((&___internal_thread_6), value);
	}

	inline static int32_t get_offset_of_m_ThreadStartArg_7() { return static_cast<int32_t>(offsetof(Thread_t2300836069, ___m_ThreadStartArg_7)); }
	inline RuntimeObject * get_m_ThreadStartArg_7() const { return ___m_ThreadStartArg_7; }
	inline RuntimeObject ** get_address_of_m_ThreadStartArg_7() { return &___m_ThreadStartArg_7; }
	inline void set_m_ThreadStartArg_7(RuntimeObject * value)
	{
		___m_ThreadStartArg_7 = value;
		Il2CppCodeGenWriteBarrier((&___m_ThreadStartArg_7), value);
	}

	inline static int32_t get_offset_of_pending_exception_8() { return static_cast<int32_t>(offsetof(Thread_t2300836069, ___pending_exception_8)); }
	inline RuntimeObject * get_pending_exception_8() const { return ___pending_exception_8; }
	inline RuntimeObject ** get_address_of_pending_exception_8() { return &___pending_exception_8; }
	inline void set_pending_exception_8(RuntimeObject * value)
	{
		___pending_exception_8 = value;
		Il2CppCodeGenWriteBarrier((&___pending_exception_8), value);
	}

	inline static int32_t get_offset_of_principal_9() { return static_cast<int32_t>(offsetof(Thread_t2300836069, ___principal_9)); }
	inline RuntimeObject* get_principal_9() const { return ___principal_9; }
	inline RuntimeObject** get_address_of_principal_9() { return &___principal_9; }
	inline void set_principal_9(RuntimeObject* value)
	{
		___principal_9 = value;
		Il2CppCodeGenWriteBarrier((&___principal_9), value);
	}

	inline static int32_t get_offset_of_principal_version_10() { return static_cast<int32_t>(offsetof(Thread_t2300836069, ___principal_version_10)); }
	inline int32_t get_principal_version_10() const { return ___principal_version_10; }
	inline int32_t* get_address_of_principal_version_10() { return &___principal_version_10; }
	inline void set_principal_version_10(int32_t value)
	{
		___principal_version_10 = value;
	}

	inline static int32_t get_offset_of_m_Delegate_12() { return static_cast<int32_t>(offsetof(Thread_t2300836069, ___m_Delegate_12)); }
	inline MulticastDelegate_t * get_m_Delegate_12() const { return ___m_Delegate_12; }
	inline MulticastDelegate_t ** get_address_of_m_Delegate_12() { return &___m_Delegate_12; }
	inline void set_m_Delegate_12(MulticastDelegate_t * value)
	{
		___m_Delegate_12 = value;
		Il2CppCodeGenWriteBarrier((&___m_Delegate_12), value);
	}

	inline static int32_t get_offset_of_m_ExecutionContext_13() { return static_cast<int32_t>(offsetof(Thread_t2300836069, ___m_ExecutionContext_13)); }
	inline ExecutionContext_t1748372627 * get_m_ExecutionContext_13() const { return ___m_ExecutionContext_13; }
	inline ExecutionContext_t1748372627 ** get_address_of_m_ExecutionContext_13() { return &___m_ExecutionContext_13; }
	inline void set_m_ExecutionContext_13(ExecutionContext_t1748372627 * value)
	{
		___m_ExecutionContext_13 = value;
		Il2CppCodeGenWriteBarrier((&___m_ExecutionContext_13), value);
	}

	inline static int32_t get_offset_of_m_ExecutionContextBelongsToOuterScope_14() { return static_cast<int32_t>(offsetof(Thread_t2300836069, ___m_ExecutionContextBelongsToOuterScope_14)); }
	inline bool get_m_ExecutionContextBelongsToOuterScope_14() const { return ___m_ExecutionContextBelongsToOuterScope_14; }
	inline bool* get_address_of_m_ExecutionContextBelongsToOuterScope_14() { return &___m_ExecutionContextBelongsToOuterScope_14; }
	inline void set_m_ExecutionContextBelongsToOuterScope_14(bool value)
	{
		___m_ExecutionContextBelongsToOuterScope_14 = value;
	}
};

struct Thread_t2300836069_StaticFields
{
public:
	// System.LocalDataStoreMgr System.Threading.Thread::s_LocalDataStoreMgr
	LocalDataStoreMgr_t1707895399 * ___s_LocalDataStoreMgr_0;
	// System.Threading.AsyncLocal`1<System.Globalization.CultureInfo> System.Threading.Thread::s_asyncLocalCurrentCulture
	AsyncLocal_1_t2427220165 * ___s_asyncLocalCurrentCulture_4;
	// System.Threading.AsyncLocal`1<System.Globalization.CultureInfo> System.Threading.Thread::s_asyncLocalCurrentUICulture
	AsyncLocal_1_t2427220165 * ___s_asyncLocalCurrentUICulture_5;

public:
	inline static int32_t get_offset_of_s_LocalDataStoreMgr_0() { return static_cast<int32_t>(offsetof(Thread_t2300836069_StaticFields, ___s_LocalDataStoreMgr_0)); }
	inline LocalDataStoreMgr_t1707895399 * get_s_LocalDataStoreMgr_0() const { return ___s_LocalDataStoreMgr_0; }
	inline LocalDataStoreMgr_t1707895399 ** get_address_of_s_LocalDataStoreMgr_0() { return &___s_LocalDataStoreMgr_0; }
	inline void set_s_LocalDataStoreMgr_0(LocalDataStoreMgr_t1707895399 * value)
	{
		___s_LocalDataStoreMgr_0 = value;
		Il2CppCodeGenWriteBarrier((&___s_LocalDataStoreMgr_0), value);
	}

	inline static int32_t get_offset_of_s_asyncLocalCurrentCulture_4() { return static_cast<int32_t>(offsetof(Thread_t2300836069_StaticFields, ___s_asyncLocalCurrentCulture_4)); }
	inline AsyncLocal_1_t2427220165 * get_s_asyncLocalCurrentCulture_4() const { return ___s_asyncLocalCurrentCulture_4; }
	inline AsyncLocal_1_t2427220165 ** get_address_of_s_asyncLocalCurrentCulture_4() { return &___s_asyncLocalCurrentCulture_4; }
	inline void set_s_asyncLocalCurrentCulture_4(AsyncLocal_1_t2427220165 * value)
	{
		___s_asyncLocalCurrentCulture_4 = value;
		Il2CppCodeGenWriteBarrier((&___s_asyncLocalCurrentCulture_4), value);
	}

	inline static int32_t get_offset_of_s_asyncLocalCurrentUICulture_5() { return static_cast<int32_t>(offsetof(Thread_t2300836069_StaticFields, ___s_asyncLocalCurrentUICulture_5)); }
	inline AsyncLocal_1_t2427220165 * get_s_asyncLocalCurrentUICulture_5() const { return ___s_asyncLocalCurrentUICulture_5; }
	inline AsyncLocal_1_t2427220165 ** get_address_of_s_asyncLocalCurrentUICulture_5() { return &___s_asyncLocalCurrentUICulture_5; }
	inline void set_s_asyncLocalCurrentUICulture_5(AsyncLocal_1_t2427220165 * value)
	{
		___s_asyncLocalCurrentUICulture_5 = value;
		Il2CppCodeGenWriteBarrier((&___s_asyncLocalCurrentUICulture_5), value);
	}
};

struct Thread_t2300836069_ThreadStaticFields
{
public:
	// System.LocalDataStoreHolder System.Threading.Thread::s_LocalDataStore
	LocalDataStoreHolder_t2567786569 * ___s_LocalDataStore_1;
	// System.Globalization.CultureInfo System.Threading.Thread::m_CurrentCulture
	CultureInfo_t4157843068 * ___m_CurrentCulture_2;
	// System.Globalization.CultureInfo System.Threading.Thread::m_CurrentUICulture
	CultureInfo_t4157843068 * ___m_CurrentUICulture_3;
	// System.Threading.Thread System.Threading.Thread::current_thread
	Thread_t2300836069 * ___current_thread_11;

public:
	inline static int32_t get_offset_of_s_LocalDataStore_1() { return static_cast<int32_t>(offsetof(Thread_t2300836069_ThreadStaticFields, ___s_LocalDataStore_1)); }
	inline LocalDataStoreHolder_t2567786569 * get_s_LocalDataStore_1() const { return ___s_LocalDataStore_1; }
	inline LocalDataStoreHolder_t2567786569 ** get_address_of_s_LocalDataStore_1() { return &___s_LocalDataStore_1; }
	inline void set_s_LocalDataStore_1(LocalDataStoreHolder_t2567786569 * value)
	{
		___s_LocalDataStore_1 = value;
		Il2CppCodeGenWriteBarrier((&___s_LocalDataStore_1), value);
	}

	inline static int32_t get_offset_of_m_CurrentCulture_2() { return static_cast<int32_t>(offsetof(Thread_t2300836069_ThreadStaticFields, ___m_CurrentCulture_2)); }
	inline CultureInfo_t4157843068 * get_m_CurrentCulture_2() const { return ___m_CurrentCulture_2; }
	inline CultureInfo_t4157843068 ** get_address_of_m_CurrentCulture_2() { return &___m_CurrentCulture_2; }
	inline void set_m_CurrentCulture_2(CultureInfo_t4157843068 * value)
	{
		___m_CurrentCulture_2 = value;
		Il2CppCodeGenWriteBarrier((&___m_CurrentCulture_2), value);
	}

	inline static int32_t get_offset_of_m_CurrentUICulture_3() { return static_cast<int32_t>(offsetof(Thread_t2300836069_ThreadStaticFields, ___m_CurrentUICulture_3)); }
	inline CultureInfo_t4157843068 * get_m_CurrentUICulture_3() const { return ___m_CurrentUICulture_3; }
	inline CultureInfo_t4157843068 ** get_address_of_m_CurrentUICulture_3() { return &___m_CurrentUICulture_3; }
	inline void set_m_CurrentUICulture_3(CultureInfo_t4157843068 * value)
	{
		___m_CurrentUICulture_3 = value;
		Il2CppCodeGenWriteBarrier((&___m_CurrentUICulture_3), value);
	}

	inline static int32_t get_offset_of_current_thread_11() { return static_cast<int32_t>(offsetof(Thread_t2300836069_ThreadStaticFields, ___current_thread_11)); }
	inline Thread_t2300836069 * get_current_thread_11() const { return ___current_thread_11; }
	inline Thread_t2300836069 ** get_address_of_current_thread_11() { return &___current_thread_11; }
	inline void set_current_thread_11(Thread_t2300836069 * value)
	{
		___current_thread_11 = value;
		Il2CppCodeGenWriteBarrier((&___current_thread_11), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // THREAD_T2300836069_H
#ifndef VALUETUPLE_T3168505507_H
#define VALUETUPLE_T3168505507_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.ValueTuple
struct  ValueTuple_t3168505507 
{
public:
	union
	{
		struct
		{
		};
		uint8_t ValueTuple_t3168505507__padding[1];
	};

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // VALUETUPLE_T3168505507_H
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
#ifndef __DTSTRING_T2014593278_H
#define __DTSTRING_T2014593278_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.__DTString
struct  __DTString_t2014593278 
{
public:
	// System.String System.__DTString::Value
	String_t* ___Value_0;
	// System.Int32 System.__DTString::Index
	int32_t ___Index_1;
	// System.Int32 System.__DTString::len
	int32_t ___len_2;
	// System.Char System.__DTString::m_current
	Il2CppChar ___m_current_3;
	// System.Globalization.CompareInfo System.__DTString::m_info
	CompareInfo_t1092934962 * ___m_info_4;
	// System.Boolean System.__DTString::m_checkDigitToken
	bool ___m_checkDigitToken_5;

public:
	inline static int32_t get_offset_of_Value_0() { return static_cast<int32_t>(offsetof(__DTString_t2014593278, ___Value_0)); }
	inline String_t* get_Value_0() const { return ___Value_0; }
	inline String_t** get_address_of_Value_0() { return &___Value_0; }
	inline void set_Value_0(String_t* value)
	{
		___Value_0 = value;
		Il2CppCodeGenWriteBarrier((&___Value_0), value);
	}

	inline static int32_t get_offset_of_Index_1() { return static_cast<int32_t>(offsetof(__DTString_t2014593278, ___Index_1)); }
	inline int32_t get_Index_1() const { return ___Index_1; }
	inline int32_t* get_address_of_Index_1() { return &___Index_1; }
	inline void set_Index_1(int32_t value)
	{
		___Index_1 = value;
	}

	inline static int32_t get_offset_of_len_2() { return static_cast<int32_t>(offsetof(__DTString_t2014593278, ___len_2)); }
	inline int32_t get_len_2() const { return ___len_2; }
	inline int32_t* get_address_of_len_2() { return &___len_2; }
	inline void set_len_2(int32_t value)
	{
		___len_2 = value;
	}

	inline static int32_t get_offset_of_m_current_3() { return static_cast<int32_t>(offsetof(__DTString_t2014593278, ___m_current_3)); }
	inline Il2CppChar get_m_current_3() const { return ___m_current_3; }
	inline Il2CppChar* get_address_of_m_current_3() { return &___m_current_3; }
	inline void set_m_current_3(Il2CppChar value)
	{
		___m_current_3 = value;
	}

	inline static int32_t get_offset_of_m_info_4() { return static_cast<int32_t>(offsetof(__DTString_t2014593278, ___m_info_4)); }
	inline CompareInfo_t1092934962 * get_m_info_4() const { return ___m_info_4; }
	inline CompareInfo_t1092934962 ** get_address_of_m_info_4() { return &___m_info_4; }
	inline void set_m_info_4(CompareInfo_t1092934962 * value)
	{
		___m_info_4 = value;
		Il2CppCodeGenWriteBarrier((&___m_info_4), value);
	}

	inline static int32_t get_offset_of_m_checkDigitToken_5() { return static_cast<int32_t>(offsetof(__DTString_t2014593278, ___m_checkDigitToken_5)); }
	inline bool get_m_checkDigitToken_5() const { return ___m_checkDigitToken_5; }
	inline bool* get_address_of_m_checkDigitToken_5() { return &___m_checkDigitToken_5; }
	inline void set_m_checkDigitToken_5(bool value)
	{
		___m_checkDigitToken_5 = value;
	}
};

struct __DTString_t2014593278_StaticFields
{
public:
	// System.Char[] System.__DTString::WhiteSpaceChecks
	CharU5BU5D_t3528271667* ___WhiteSpaceChecks_6;

public:
	inline static int32_t get_offset_of_WhiteSpaceChecks_6() { return static_cast<int32_t>(offsetof(__DTString_t2014593278_StaticFields, ___WhiteSpaceChecks_6)); }
	inline CharU5BU5D_t3528271667* get_WhiteSpaceChecks_6() const { return ___WhiteSpaceChecks_6; }
	inline CharU5BU5D_t3528271667** get_address_of_WhiteSpaceChecks_6() { return &___WhiteSpaceChecks_6; }
	inline void set_WhiteSpaceChecks_6(CharU5BU5D_t3528271667* value)
	{
		___WhiteSpaceChecks_6 = value;
		Il2CppCodeGenWriteBarrier((&___WhiteSpaceChecks_6), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
// Native definition for P/Invoke marshalling of System.__DTString
struct __DTString_t2014593278_marshaled_pinvoke
{
	char* ___Value_0;
	int32_t ___Index_1;
	int32_t ___len_2;
	uint8_t ___m_current_3;
	CompareInfo_t1092934962 * ___m_info_4;
	int32_t ___m_checkDigitToken_5;
};
// Native definition for COM marshalling of System.__DTString
struct __DTString_t2014593278_marshaled_com
{
	Il2CppChar* ___Value_0;
	int32_t ___Index_1;
	int32_t ___len_2;
	uint8_t ___m_current_3;
	CompareInfo_t1092934962 * ___m_info_4;
	int32_t ___m_checkDigitToken_5;
};
#endif // __DTSTRING_T2014593278_H
#ifndef __IL2CPPCOMDELEGATE_T1102178620_H
#define __IL2CPPCOMDELEGATE_T1102178620_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.__Il2CppComDelegate
struct  __Il2CppComDelegate_t1102178620  : public Il2CppComObject
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // __IL2CPPCOMDELEGATE_T1102178620_H
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
#ifndef BRECORD_T3470580684_H
#define BRECORD_T3470580684_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.BRECORD
struct  BRECORD_t3470580684 
{
public:
	// System.IntPtr System.BRECORD::pvRecord
	intptr_t ___pvRecord_0;
	// System.IntPtr System.BRECORD::pRecInfo
	intptr_t ___pRecInfo_1;

public:
	inline static int32_t get_offset_of_pvRecord_0() { return static_cast<int32_t>(offsetof(BRECORD_t3470580684, ___pvRecord_0)); }
	inline intptr_t get_pvRecord_0() const { return ___pvRecord_0; }
	inline intptr_t* get_address_of_pvRecord_0() { return &___pvRecord_0; }
	inline void set_pvRecord_0(intptr_t value)
	{
		___pvRecord_0 = value;
	}

	inline static int32_t get_offset_of_pRecInfo_1() { return static_cast<int32_t>(offsetof(BRECORD_t3470580684, ___pRecInfo_1)); }
	inline intptr_t get_pRecInfo_1() const { return ___pRecInfo_1; }
	inline intptr_t* get_address_of_pRecInfo_1() { return &___pRecInfo_1; }
	inline void set_pRecInfo_1(intptr_t value)
	{
		___pRecInfo_1 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // BRECORD_T3470580684_H
#ifndef CONSOLEKEY_T4097401472_H
#define CONSOLEKEY_T4097401472_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.ConsoleKey
struct  ConsoleKey_t4097401472 
{
public:
	// System.Int32 System.ConsoleKey::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(ConsoleKey_t4097401472, ___value___2)); }
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
#endif // CONSOLEKEY_T4097401472_H
#ifndef CONSOLEMODIFIERS_T1471011467_H
#define CONSOLEMODIFIERS_T1471011467_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.ConsoleModifiers
struct  ConsoleModifiers_t1471011467 
{
public:
	// System.Int32 System.ConsoleModifiers::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(ConsoleModifiers_t1471011467, ___value___2)); }
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
#endif // CONSOLEMODIFIERS_T1471011467_H
#ifndef CONSOLESCREENBUFFERINFO_T3095351730_H
#define CONSOLESCREENBUFFERINFO_T3095351730_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.ConsoleScreenBufferInfo
struct  ConsoleScreenBufferInfo_t3095351730 
{
public:
	// System.Coord System.ConsoleScreenBufferInfo::Size
	Coord_t397375283  ___Size_0;
	// System.Coord System.ConsoleScreenBufferInfo::CursorPosition
	Coord_t397375283  ___CursorPosition_1;
	// System.Int16 System.ConsoleScreenBufferInfo::Attribute
	int16_t ___Attribute_2;
	// System.SmallRect System.ConsoleScreenBufferInfo::Window
	SmallRect_t2930836963  ___Window_3;
	// System.Coord System.ConsoleScreenBufferInfo::MaxWindowSize
	Coord_t397375283  ___MaxWindowSize_4;

public:
	inline static int32_t get_offset_of_Size_0() { return static_cast<int32_t>(offsetof(ConsoleScreenBufferInfo_t3095351730, ___Size_0)); }
	inline Coord_t397375283  get_Size_0() const { return ___Size_0; }
	inline Coord_t397375283 * get_address_of_Size_0() { return &___Size_0; }
	inline void set_Size_0(Coord_t397375283  value)
	{
		___Size_0 = value;
	}

	inline static int32_t get_offset_of_CursorPosition_1() { return static_cast<int32_t>(offsetof(ConsoleScreenBufferInfo_t3095351730, ___CursorPosition_1)); }
	inline Coord_t397375283  get_CursorPosition_1() const { return ___CursorPosition_1; }
	inline Coord_t397375283 * get_address_of_CursorPosition_1() { return &___CursorPosition_1; }
	inline void set_CursorPosition_1(Coord_t397375283  value)
	{
		___CursorPosition_1 = value;
	}

	inline static int32_t get_offset_of_Attribute_2() { return static_cast<int32_t>(offsetof(ConsoleScreenBufferInfo_t3095351730, ___Attribute_2)); }
	inline int16_t get_Attribute_2() const { return ___Attribute_2; }
	inline int16_t* get_address_of_Attribute_2() { return &___Attribute_2; }
	inline void set_Attribute_2(int16_t value)
	{
		___Attribute_2 = value;
	}

	inline static int32_t get_offset_of_Window_3() { return static_cast<int32_t>(offsetof(ConsoleScreenBufferInfo_t3095351730, ___Window_3)); }
	inline SmallRect_t2930836963  get_Window_3() const { return ___Window_3; }
	inline SmallRect_t2930836963 * get_address_of_Window_3() { return &___Window_3; }
	inline void set_Window_3(SmallRect_t2930836963  value)
	{
		___Window_3 = value;
	}

	inline static int32_t get_offset_of_MaxWindowSize_4() { return static_cast<int32_t>(offsetof(ConsoleScreenBufferInfo_t3095351730, ___MaxWindowSize_4)); }
	inline Coord_t397375283  get_MaxWindowSize_4() const { return ___MaxWindowSize_4; }
	inline Coord_t397375283 * get_address_of_MaxWindowSize_4() { return &___MaxWindowSize_4; }
	inline void set_MaxWindowSize_4(Coord_t397375283  value)
	{
		___MaxWindowSize_4 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // CONSOLESCREENBUFFERINFO_T3095351730_H
#ifndef DTSUBSTRINGTYPE_T2997180936_H
#define DTSUBSTRINGTYPE_T2997180936_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.DTSubStringType
struct  DTSubStringType_t2997180936 
{
public:
	// System.Int32 System.DTSubStringType::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(DTSubStringType_t2997180936, ___value___2)); }
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
#endif // DTSUBSTRINGTYPE_T2997180936_H
#ifndef COMPAREOPTIONS_T4130014775_H
#define COMPAREOPTIONS_T4130014775_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Globalization.CompareOptions
struct  CompareOptions_t4130014775 
{
public:
	// System.Int32 System.Globalization.CompareOptions::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(CompareOptions_t4130014775, ___value___2)); }
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
#endif // COMPAREOPTIONS_T4130014775_H
#ifndef DATETIMEFORMATFLAGS_T1884407083_H
#define DATETIMEFORMATFLAGS_T1884407083_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Globalization.DateTimeFormatFlags
struct  DateTimeFormatFlags_t1884407083 
{
public:
	// System.Int32 System.Globalization.DateTimeFormatFlags::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(DateTimeFormatFlags_t1884407083, ___value___2)); }
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
#endif // DATETIMEFORMATFLAGS_T1884407083_H
#ifndef DATETIMESTYLES_T840957420_H
#define DATETIMESTYLES_T840957420_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Globalization.DateTimeStyles
struct  DateTimeStyles_t840957420 
{
public:
	// System.Int32 System.Globalization.DateTimeStyles::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(DateTimeStyles_t840957420, ___value___2)); }
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
#endif // DATETIMESTYLES_T840957420_H
#ifndef HANDLES_T3280152003_H
#define HANDLES_T3280152003_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Handles
struct  Handles_t3280152003 
{
public:
	// System.Int32 System.Handles::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(Handles_t3280152003, ___value___2)); }
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
#endif // HANDLES_T3280152003_H
#ifndef INVALIDOPERATIONEXCEPTION_T56020091_H
#define INVALIDOPERATIONEXCEPTION_T56020091_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.InvalidOperationException
struct  InvalidOperationException_t56020091  : public SystemException_t176217640
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // INVALIDOPERATIONEXCEPTION_T56020091_H
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
#ifndef CONSTRUCTORINFO_T5769829_H
#define CONSTRUCTORINFO_T5769829_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Reflection.ConstructorInfo
struct  ConstructorInfo_t5769829  : public MethodBase_t
{
public:

public:
};

struct ConstructorInfo_t5769829_StaticFields
{
public:
	// System.String System.Reflection.ConstructorInfo::ConstructorName
	String_t* ___ConstructorName_0;
	// System.String System.Reflection.ConstructorInfo::TypeConstructorName
	String_t* ___TypeConstructorName_1;

public:
	inline static int32_t get_offset_of_ConstructorName_0() { return static_cast<int32_t>(offsetof(ConstructorInfo_t5769829_StaticFields, ___ConstructorName_0)); }
	inline String_t* get_ConstructorName_0() const { return ___ConstructorName_0; }
	inline String_t** get_address_of_ConstructorName_0() { return &___ConstructorName_0; }
	inline void set_ConstructorName_0(String_t* value)
	{
		___ConstructorName_0 = value;
		Il2CppCodeGenWriteBarrier((&___ConstructorName_0), value);
	}

	inline static int32_t get_offset_of_TypeConstructorName_1() { return static_cast<int32_t>(offsetof(ConstructorInfo_t5769829_StaticFields, ___TypeConstructorName_1)); }
	inline String_t* get_TypeConstructorName_1() const { return ___TypeConstructorName_1; }
	inline String_t** get_address_of_TypeConstructorName_1() { return &___TypeConstructorName_1; }
	inline void set_TypeConstructorName_1(String_t* value)
	{
		___TypeConstructorName_1 = value;
		Il2CppCodeGenWriteBarrier((&___TypeConstructorName_1), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // CONSTRUCTORINFO_T5769829_H
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
#ifndef GCHANDLETYPE_T3432586689_H
#define GCHANDLETYPE_T3432586689_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Runtime.InteropServices.GCHandleType
struct  GCHandleType_t3432586689 
{
public:
	// System.Int32 System.Runtime.InteropServices.GCHandleType::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(GCHandleType_t3432586689, ___value___2)); }
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
#endif // GCHANDLETYPE_T3432586689_H
#ifndef STREAMINGCONTEXTSTATES_T3580100459_H
#define STREAMINGCONTEXTSTATES_T3580100459_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Runtime.Serialization.StreamingContextStates
struct  StreamingContextStates_t3580100459 
{
public:
	// System.Int32 System.Runtime.Serialization.StreamingContextStates::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(StreamingContextStates_t3580100459, ___value___2)); }
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
#endif // STREAMINGCONTEXTSTATES_T3580100459_H
#ifndef RUNTIMETYPEHANDLE_T3027515415_H
#define RUNTIMETYPEHANDLE_T3027515415_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.RuntimeTypeHandle
struct  RuntimeTypeHandle_t3027515415 
{
public:
	// System.IntPtr System.RuntimeTypeHandle::value
	intptr_t ___value_0;

public:
	inline static int32_t get_offset_of_value_0() { return static_cast<int32_t>(offsetof(RuntimeTypeHandle_t3027515415, ___value_0)); }
	inline intptr_t get_value_0() const { return ___value_0; }
	inline intptr_t* get_address_of_value_0() { return &___value_0; }
	inline void set_value_0(intptr_t value)
	{
		___value_0 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // RUNTIMETYPEHANDLE_T3027515415_H
#ifndef STRINGCOMPARISON_T3657712135_H
#define STRINGCOMPARISON_T3657712135_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.StringComparison
struct  StringComparison_t3657712135 
{
public:
	// System.Int32 System.StringComparison::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(StringComparison_t3657712135, ___value___2)); }
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
#endif // STRINGCOMPARISON_T3657712135_H
#ifndef TOKENTYPE_T216849757_H
#define TOKENTYPE_T216849757_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.TokenType
struct  TokenType_t216849757 
{
public:
	// System.Int32 System.TokenType::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(TokenType_t216849757, ___value___2)); }
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
#endif // TOKENTYPE_T216849757_H
#ifndef WEAKREFERENCE_T1334886716_H
#define WEAKREFERENCE_T1334886716_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.WeakReference
struct  WeakReference_t1334886716  : public RuntimeObject
{
public:
	// System.Boolean System.WeakReference::isLongReference
	bool ___isLongReference_0;
	// System.Runtime.InteropServices.GCHandle System.WeakReference::gcHandle
	GCHandle_t3351438187  ___gcHandle_1;

public:
	inline static int32_t get_offset_of_isLongReference_0() { return static_cast<int32_t>(offsetof(WeakReference_t1334886716, ___isLongReference_0)); }
	inline bool get_isLongReference_0() const { return ___isLongReference_0; }
	inline bool* get_address_of_isLongReference_0() { return &___isLongReference_0; }
	inline void set_isLongReference_0(bool value)
	{
		___isLongReference_0 = value;
	}

	inline static int32_t get_offset_of_gcHandle_1() { return static_cast<int32_t>(offsetof(WeakReference_t1334886716, ___gcHandle_1)); }
	inline GCHandle_t3351438187  get_gcHandle_1() const { return ___gcHandle_1; }
	inline GCHandle_t3351438187 * get_address_of_gcHandle_1() { return &___gcHandle_1; }
	inline void set_gcHandle_1(GCHandle_t3351438187  value)
	{
		___gcHandle_1 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // WEAKREFERENCE_T1334886716_H
#ifndef WINDOWSCONSOLEDRIVER_T3991887195_H
#define WINDOWSCONSOLEDRIVER_T3991887195_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.WindowsConsoleDriver
struct  WindowsConsoleDriver_t3991887195  : public RuntimeObject
{
public:
	// System.IntPtr System.WindowsConsoleDriver::inputHandle
	intptr_t ___inputHandle_0;
	// System.IntPtr System.WindowsConsoleDriver::outputHandle
	intptr_t ___outputHandle_1;
	// System.Int16 System.WindowsConsoleDriver::defaultAttribute
	int16_t ___defaultAttribute_2;

public:
	inline static int32_t get_offset_of_inputHandle_0() { return static_cast<int32_t>(offsetof(WindowsConsoleDriver_t3991887195, ___inputHandle_0)); }
	inline intptr_t get_inputHandle_0() const { return ___inputHandle_0; }
	inline intptr_t* get_address_of_inputHandle_0() { return &___inputHandle_0; }
	inline void set_inputHandle_0(intptr_t value)
	{
		___inputHandle_0 = value;
	}

	inline static int32_t get_offset_of_outputHandle_1() { return static_cast<int32_t>(offsetof(WindowsConsoleDriver_t3991887195, ___outputHandle_1)); }
	inline intptr_t get_outputHandle_1() const { return ___outputHandle_1; }
	inline intptr_t* get_address_of_outputHandle_1() { return &___outputHandle_1; }
	inline void set_outputHandle_1(intptr_t value)
	{
		___outputHandle_1 = value;
	}

	inline static int32_t get_offset_of_defaultAttribute_2() { return static_cast<int32_t>(offsetof(WindowsConsoleDriver_t3991887195, ___defaultAttribute_2)); }
	inline int16_t get_defaultAttribute_2() const { return ___defaultAttribute_2; }
	inline int16_t* get_address_of_defaultAttribute_2() { return &___defaultAttribute_2; }
	inline void set_defaultAttribute_2(int16_t value)
	{
		___defaultAttribute_2 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // WINDOWSCONSOLEDRIVER_T3991887195_H
#ifndef ARGUMENTNULLEXCEPTION_T1615371798_H
#define ARGUMENTNULLEXCEPTION_T1615371798_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.ArgumentNullException
struct  ArgumentNullException_t1615371798  : public ArgumentException_t132251570
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // ARGUMENTNULLEXCEPTION_T1615371798_H
#ifndef ARGUMENTOUTOFRANGEEXCEPTION_T777629997_H
#define ARGUMENTOUTOFRANGEEXCEPTION_T777629997_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.ArgumentOutOfRangeException
struct  ArgumentOutOfRangeException_t777629997  : public ArgumentException_t132251570
{
public:
	// System.Object System.ArgumentOutOfRangeException::m_actualValue
	RuntimeObject * ___m_actualValue_19;

public:
	inline static int32_t get_offset_of_m_actualValue_19() { return static_cast<int32_t>(offsetof(ArgumentOutOfRangeException_t777629997, ___m_actualValue_19)); }
	inline RuntimeObject * get_m_actualValue_19() const { return ___m_actualValue_19; }
	inline RuntimeObject ** get_address_of_m_actualValue_19() { return &___m_actualValue_19; }
	inline void set_m_actualValue_19(RuntimeObject * value)
	{
		___m_actualValue_19 = value;
		Il2CppCodeGenWriteBarrier((&___m_actualValue_19), value);
	}
};

struct ArgumentOutOfRangeException_t777629997_StaticFields
{
public:
	// System.String modreq(System.Runtime.CompilerServices.IsVolatile) System.ArgumentOutOfRangeException::_rangeMessage
	String_t* ____rangeMessage_18;

public:
	inline static int32_t get_offset_of__rangeMessage_18() { return static_cast<int32_t>(offsetof(ArgumentOutOfRangeException_t777629997_StaticFields, ____rangeMessage_18)); }
	inline String_t* get__rangeMessage_18() const { return ____rangeMessage_18; }
	inline String_t** get_address_of__rangeMessage_18() { return &____rangeMessage_18; }
	inline void set__rangeMessage_18(String_t* value)
	{
		____rangeMessage_18 = value;
		Il2CppCodeGenWriteBarrier((&____rangeMessage_18), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // ARGUMENTOUTOFRANGEEXCEPTION_T777629997_H
#ifndef CONSOLEKEYINFO_T1802691652_H
#define CONSOLEKEYINFO_T1802691652_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.ConsoleKeyInfo
struct  ConsoleKeyInfo_t1802691652 
{
public:
	// System.Char System.ConsoleKeyInfo::_keyChar
	Il2CppChar ____keyChar_0;
	// System.ConsoleKey System.ConsoleKeyInfo::_key
	int32_t ____key_1;
	// System.ConsoleModifiers System.ConsoleKeyInfo::_mods
	int32_t ____mods_2;

public:
	inline static int32_t get_offset_of__keyChar_0() { return static_cast<int32_t>(offsetof(ConsoleKeyInfo_t1802691652, ____keyChar_0)); }
	inline Il2CppChar get__keyChar_0() const { return ____keyChar_0; }
	inline Il2CppChar* get_address_of__keyChar_0() { return &____keyChar_0; }
	inline void set__keyChar_0(Il2CppChar value)
	{
		____keyChar_0 = value;
	}

	inline static int32_t get_offset_of__key_1() { return static_cast<int32_t>(offsetof(ConsoleKeyInfo_t1802691652, ____key_1)); }
	inline int32_t get__key_1() const { return ____key_1; }
	inline int32_t* get_address_of__key_1() { return &____key_1; }
	inline void set__key_1(int32_t value)
	{
		____key_1 = value;
	}

	inline static int32_t get_offset_of__mods_2() { return static_cast<int32_t>(offsetof(ConsoleKeyInfo_t1802691652, ____mods_2)); }
	inline int32_t get__mods_2() const { return ____mods_2; }
	inline int32_t* get_address_of__mods_2() { return &____mods_2; }
	inline void set__mods_2(int32_t value)
	{
		____mods_2 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
// Native definition for P/Invoke marshalling of System.ConsoleKeyInfo
struct ConsoleKeyInfo_t1802691652_marshaled_pinvoke
{
	uint8_t ____keyChar_0;
	int32_t ____key_1;
	int32_t ____mods_2;
};
// Native definition for COM marshalling of System.ConsoleKeyInfo
struct ConsoleKeyInfo_t1802691652_marshaled_com
{
	uint8_t ____keyChar_0;
	int32_t ____key_1;
	int32_t ____mods_2;
};
#endif // CONSOLEKEYINFO_T1802691652_H
#ifndef DTSUBSTRING_T967826655_H
#define DTSUBSTRING_T967826655_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.DTSubString
struct  DTSubString_t967826655 
{
public:
	// System.String System.DTSubString::s
	String_t* ___s_0;
	// System.Int32 System.DTSubString::index
	int32_t ___index_1;
	// System.Int32 System.DTSubString::length
	int32_t ___length_2;
	// System.DTSubStringType System.DTSubString::type
	int32_t ___type_3;
	// System.Int32 System.DTSubString::value
	int32_t ___value_4;

public:
	inline static int32_t get_offset_of_s_0() { return static_cast<int32_t>(offsetof(DTSubString_t967826655, ___s_0)); }
	inline String_t* get_s_0() const { return ___s_0; }
	inline String_t** get_address_of_s_0() { return &___s_0; }
	inline void set_s_0(String_t* value)
	{
		___s_0 = value;
		Il2CppCodeGenWriteBarrier((&___s_0), value);
	}

	inline static int32_t get_offset_of_index_1() { return static_cast<int32_t>(offsetof(DTSubString_t967826655, ___index_1)); }
	inline int32_t get_index_1() const { return ___index_1; }
	inline int32_t* get_address_of_index_1() { return &___index_1; }
	inline void set_index_1(int32_t value)
	{
		___index_1 = value;
	}

	inline static int32_t get_offset_of_length_2() { return static_cast<int32_t>(offsetof(DTSubString_t967826655, ___length_2)); }
	inline int32_t get_length_2() const { return ___length_2; }
	inline int32_t* get_address_of_length_2() { return &___length_2; }
	inline void set_length_2(int32_t value)
	{
		___length_2 = value;
	}

	inline static int32_t get_offset_of_type_3() { return static_cast<int32_t>(offsetof(DTSubString_t967826655, ___type_3)); }
	inline int32_t get_type_3() const { return ___type_3; }
	inline int32_t* get_address_of_type_3() { return &___type_3; }
	inline void set_type_3(int32_t value)
	{
		___type_3 = value;
	}

	inline static int32_t get_offset_of_value_4() { return static_cast<int32_t>(offsetof(DTSubString_t967826655, ___value_4)); }
	inline int32_t get_value_4() const { return ___value_4; }
	inline int32_t* get_address_of_value_4() { return &___value_4; }
	inline void set_value_4(int32_t value)
	{
		___value_4 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
// Native definition for P/Invoke marshalling of System.DTSubString
struct DTSubString_t967826655_marshaled_pinvoke
{
	char* ___s_0;
	int32_t ___index_1;
	int32_t ___length_2;
	int32_t ___type_3;
	int32_t ___value_4;
};
// Native definition for COM marshalling of System.DTSubString
struct DTSubString_t967826655_marshaled_com
{
	Il2CppChar* ___s_0;
	int32_t ___index_1;
	int32_t ___length_2;
	int32_t ___type_3;
	int32_t ___value_4;
};
#endif // DTSUBSTRING_T967826655_H
#ifndef COMPAREINFO_T1092934962_H
#define COMPAREINFO_T1092934962_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Globalization.CompareInfo
struct  CompareInfo_t1092934962  : public RuntimeObject
{
public:
	// System.String System.Globalization.CompareInfo::m_name
	String_t* ___m_name_3;
	// System.String System.Globalization.CompareInfo::m_sortName
	String_t* ___m_sortName_4;
	// System.Int32 System.Globalization.CompareInfo::win32LCID
	int32_t ___win32LCID_5;
	// System.Int32 System.Globalization.CompareInfo::culture
	int32_t ___culture_6;
	// System.Globalization.SortVersion System.Globalization.CompareInfo::m_SortVersion
	SortVersion_t3332565609 * ___m_SortVersion_20;
	// Mono.Globalization.Unicode.SimpleCollator System.Globalization.CompareInfo::collator
	SimpleCollator_t2877834729 * ___collator_21;

public:
	inline static int32_t get_offset_of_m_name_3() { return static_cast<int32_t>(offsetof(CompareInfo_t1092934962, ___m_name_3)); }
	inline String_t* get_m_name_3() const { return ___m_name_3; }
	inline String_t** get_address_of_m_name_3() { return &___m_name_3; }
	inline void set_m_name_3(String_t* value)
	{
		___m_name_3 = value;
		Il2CppCodeGenWriteBarrier((&___m_name_3), value);
	}

	inline static int32_t get_offset_of_m_sortName_4() { return static_cast<int32_t>(offsetof(CompareInfo_t1092934962, ___m_sortName_4)); }
	inline String_t* get_m_sortName_4() const { return ___m_sortName_4; }
	inline String_t** get_address_of_m_sortName_4() { return &___m_sortName_4; }
	inline void set_m_sortName_4(String_t* value)
	{
		___m_sortName_4 = value;
		Il2CppCodeGenWriteBarrier((&___m_sortName_4), value);
	}

	inline static int32_t get_offset_of_win32LCID_5() { return static_cast<int32_t>(offsetof(CompareInfo_t1092934962, ___win32LCID_5)); }
	inline int32_t get_win32LCID_5() const { return ___win32LCID_5; }
	inline int32_t* get_address_of_win32LCID_5() { return &___win32LCID_5; }
	inline void set_win32LCID_5(int32_t value)
	{
		___win32LCID_5 = value;
	}

	inline static int32_t get_offset_of_culture_6() { return static_cast<int32_t>(offsetof(CompareInfo_t1092934962, ___culture_6)); }
	inline int32_t get_culture_6() const { return ___culture_6; }
	inline int32_t* get_address_of_culture_6() { return &___culture_6; }
	inline void set_culture_6(int32_t value)
	{
		___culture_6 = value;
	}

	inline static int32_t get_offset_of_m_SortVersion_20() { return static_cast<int32_t>(offsetof(CompareInfo_t1092934962, ___m_SortVersion_20)); }
	inline SortVersion_t3332565609 * get_m_SortVersion_20() const { return ___m_SortVersion_20; }
	inline SortVersion_t3332565609 ** get_address_of_m_SortVersion_20() { return &___m_SortVersion_20; }
	inline void set_m_SortVersion_20(SortVersion_t3332565609 * value)
	{
		___m_SortVersion_20 = value;
		Il2CppCodeGenWriteBarrier((&___m_SortVersion_20), value);
	}

	inline static int32_t get_offset_of_collator_21() { return static_cast<int32_t>(offsetof(CompareInfo_t1092934962, ___collator_21)); }
	inline SimpleCollator_t2877834729 * get_collator_21() const { return ___collator_21; }
	inline SimpleCollator_t2877834729 ** get_address_of_collator_21() { return &___collator_21; }
	inline void set_collator_21(SimpleCollator_t2877834729 * value)
	{
		___collator_21 = value;
		Il2CppCodeGenWriteBarrier((&___collator_21), value);
	}
};

struct CompareInfo_t1092934962_StaticFields
{
public:
	// System.Collections.Generic.Dictionary`2<System.String,Mono.Globalization.Unicode.SimpleCollator> System.Globalization.CompareInfo::collators
	Dictionary_2_t2663091028 * ___collators_22;
	// System.Boolean System.Globalization.CompareInfo::managedCollation
	bool ___managedCollation_23;
	// System.Boolean System.Globalization.CompareInfo::managedCollationChecked
	bool ___managedCollationChecked_24;

public:
	inline static int32_t get_offset_of_collators_22() { return static_cast<int32_t>(offsetof(CompareInfo_t1092934962_StaticFields, ___collators_22)); }
	inline Dictionary_2_t2663091028 * get_collators_22() const { return ___collators_22; }
	inline Dictionary_2_t2663091028 ** get_address_of_collators_22() { return &___collators_22; }
	inline void set_collators_22(Dictionary_2_t2663091028 * value)
	{
		___collators_22 = value;
		Il2CppCodeGenWriteBarrier((&___collators_22), value);
	}

	inline static int32_t get_offset_of_managedCollation_23() { return static_cast<int32_t>(offsetof(CompareInfo_t1092934962_StaticFields, ___managedCollation_23)); }
	inline bool get_managedCollation_23() const { return ___managedCollation_23; }
	inline bool* get_address_of_managedCollation_23() { return &___managedCollation_23; }
	inline void set_managedCollation_23(bool value)
	{
		___managedCollation_23 = value;
	}

	inline static int32_t get_offset_of_managedCollationChecked_24() { return static_cast<int32_t>(offsetof(CompareInfo_t1092934962_StaticFields, ___managedCollationChecked_24)); }
	inline bool get_managedCollationChecked_24() const { return ___managedCollationChecked_24; }
	inline bool* get_address_of_managedCollationChecked_24() { return &___managedCollationChecked_24; }
	inline void set_managedCollationChecked_24(bool value)
	{
		___managedCollationChecked_24 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // COMPAREINFO_T1092934962_H
#ifndef DATETIMEFORMATINFO_T2405853701_H
#define DATETIMEFORMATINFO_T2405853701_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Globalization.DateTimeFormatInfo
struct  DateTimeFormatInfo_t2405853701  : public RuntimeObject
{
public:
	// System.Globalization.CultureData System.Globalization.DateTimeFormatInfo::m_cultureData
	CultureData_t1899656083 * ___m_cultureData_1;
	// System.String System.Globalization.DateTimeFormatInfo::m_name
	String_t* ___m_name_2;
	// System.String System.Globalization.DateTimeFormatInfo::m_langName
	String_t* ___m_langName_3;
	// System.Globalization.CompareInfo System.Globalization.DateTimeFormatInfo::m_compareInfo
	CompareInfo_t1092934962 * ___m_compareInfo_4;
	// System.Globalization.CultureInfo System.Globalization.DateTimeFormatInfo::m_cultureInfo
	CultureInfo_t4157843068 * ___m_cultureInfo_5;
	// System.String System.Globalization.DateTimeFormatInfo::amDesignator
	String_t* ___amDesignator_6;
	// System.String System.Globalization.DateTimeFormatInfo::pmDesignator
	String_t* ___pmDesignator_7;
	// System.String System.Globalization.DateTimeFormatInfo::dateSeparator
	String_t* ___dateSeparator_8;
	// System.String System.Globalization.DateTimeFormatInfo::generalShortTimePattern
	String_t* ___generalShortTimePattern_9;
	// System.String System.Globalization.DateTimeFormatInfo::generalLongTimePattern
	String_t* ___generalLongTimePattern_10;
	// System.String System.Globalization.DateTimeFormatInfo::timeSeparator
	String_t* ___timeSeparator_11;
	// System.String System.Globalization.DateTimeFormatInfo::monthDayPattern
	String_t* ___monthDayPattern_12;
	// System.String System.Globalization.DateTimeFormatInfo::dateTimeOffsetPattern
	String_t* ___dateTimeOffsetPattern_13;
	// System.Globalization.Calendar System.Globalization.DateTimeFormatInfo::calendar
	Calendar_t1661121569 * ___calendar_17;
	// System.Int32 System.Globalization.DateTimeFormatInfo::firstDayOfWeek
	int32_t ___firstDayOfWeek_18;
	// System.Int32 System.Globalization.DateTimeFormatInfo::calendarWeekRule
	int32_t ___calendarWeekRule_19;
	// System.String System.Globalization.DateTimeFormatInfo::fullDateTimePattern
	String_t* ___fullDateTimePattern_20;
	// System.String[] System.Globalization.DateTimeFormatInfo::abbreviatedDayNames
	StringU5BU5D_t1281789340* ___abbreviatedDayNames_21;
	// System.String[] System.Globalization.DateTimeFormatInfo::m_superShortDayNames
	StringU5BU5D_t1281789340* ___m_superShortDayNames_22;
	// System.String[] System.Globalization.DateTimeFormatInfo::dayNames
	StringU5BU5D_t1281789340* ___dayNames_23;
	// System.String[] System.Globalization.DateTimeFormatInfo::abbreviatedMonthNames
	StringU5BU5D_t1281789340* ___abbreviatedMonthNames_24;
	// System.String[] System.Globalization.DateTimeFormatInfo::monthNames
	StringU5BU5D_t1281789340* ___monthNames_25;
	// System.String[] System.Globalization.DateTimeFormatInfo::genitiveMonthNames
	StringU5BU5D_t1281789340* ___genitiveMonthNames_26;
	// System.String[] System.Globalization.DateTimeFormatInfo::m_genitiveAbbreviatedMonthNames
	StringU5BU5D_t1281789340* ___m_genitiveAbbreviatedMonthNames_27;
	// System.String[] System.Globalization.DateTimeFormatInfo::leapYearMonthNames
	StringU5BU5D_t1281789340* ___leapYearMonthNames_28;
	// System.String System.Globalization.DateTimeFormatInfo::longDatePattern
	String_t* ___longDatePattern_29;
	// System.String System.Globalization.DateTimeFormatInfo::shortDatePattern
	String_t* ___shortDatePattern_30;
	// System.String System.Globalization.DateTimeFormatInfo::yearMonthPattern
	String_t* ___yearMonthPattern_31;
	// System.String System.Globalization.DateTimeFormatInfo::longTimePattern
	String_t* ___longTimePattern_32;
	// System.String System.Globalization.DateTimeFormatInfo::shortTimePattern
	String_t* ___shortTimePattern_33;
	// System.String[] System.Globalization.DateTimeFormatInfo::allYearMonthPatterns
	StringU5BU5D_t1281789340* ___allYearMonthPatterns_34;
	// System.String[] System.Globalization.DateTimeFormatInfo::allShortDatePatterns
	StringU5BU5D_t1281789340* ___allShortDatePatterns_35;
	// System.String[] System.Globalization.DateTimeFormatInfo::allLongDatePatterns
	StringU5BU5D_t1281789340* ___allLongDatePatterns_36;
	// System.String[] System.Globalization.DateTimeFormatInfo::allShortTimePatterns
	StringU5BU5D_t1281789340* ___allShortTimePatterns_37;
	// System.String[] System.Globalization.DateTimeFormatInfo::allLongTimePatterns
	StringU5BU5D_t1281789340* ___allLongTimePatterns_38;
	// System.String[] System.Globalization.DateTimeFormatInfo::m_eraNames
	StringU5BU5D_t1281789340* ___m_eraNames_39;
	// System.String[] System.Globalization.DateTimeFormatInfo::m_abbrevEraNames
	StringU5BU5D_t1281789340* ___m_abbrevEraNames_40;
	// System.String[] System.Globalization.DateTimeFormatInfo::m_abbrevEnglishEraNames
	StringU5BU5D_t1281789340* ___m_abbrevEnglishEraNames_41;
	// System.Int32[] System.Globalization.DateTimeFormatInfo::optionalCalendars
	Int32U5BU5D_t385246372* ___optionalCalendars_42;
	// System.Boolean System.Globalization.DateTimeFormatInfo::m_isReadOnly
	bool ___m_isReadOnly_44;
	// System.Globalization.DateTimeFormatFlags System.Globalization.DateTimeFormatInfo::formatFlags
	int32_t ___formatFlags_45;
	// System.Int32 System.Globalization.DateTimeFormatInfo::CultureID
	int32_t ___CultureID_47;
	// System.Boolean System.Globalization.DateTimeFormatInfo::m_useUserOverride
	bool ___m_useUserOverride_48;
	// System.Boolean System.Globalization.DateTimeFormatInfo::bUseCalendarInfo
	bool ___bUseCalendarInfo_49;
	// System.Int32 System.Globalization.DateTimeFormatInfo::nDataItem
	int32_t ___nDataItem_50;
	// System.Boolean System.Globalization.DateTimeFormatInfo::m_isDefaultCalendar
	bool ___m_isDefaultCalendar_51;
	// System.String[] System.Globalization.DateTimeFormatInfo::m_dateWords
	StringU5BU5D_t1281789340* ___m_dateWords_53;
	// System.String System.Globalization.DateTimeFormatInfo::m_fullTimeSpanPositivePattern
	String_t* ___m_fullTimeSpanPositivePattern_54;
	// System.String System.Globalization.DateTimeFormatInfo::m_fullTimeSpanNegativePattern
	String_t* ___m_fullTimeSpanNegativePattern_55;
	// System.Globalization.TokenHashValue[] System.Globalization.DateTimeFormatInfo::m_dtfiTokenHash
	TokenHashValueU5BU5D_t818561467* ___m_dtfiTokenHash_57;

public:
	inline static int32_t get_offset_of_m_cultureData_1() { return static_cast<int32_t>(offsetof(DateTimeFormatInfo_t2405853701, ___m_cultureData_1)); }
	inline CultureData_t1899656083 * get_m_cultureData_1() const { return ___m_cultureData_1; }
	inline CultureData_t1899656083 ** get_address_of_m_cultureData_1() { return &___m_cultureData_1; }
	inline void set_m_cultureData_1(CultureData_t1899656083 * value)
	{
		___m_cultureData_1 = value;
		Il2CppCodeGenWriteBarrier((&___m_cultureData_1), value);
	}

	inline static int32_t get_offset_of_m_name_2() { return static_cast<int32_t>(offsetof(DateTimeFormatInfo_t2405853701, ___m_name_2)); }
	inline String_t* get_m_name_2() const { return ___m_name_2; }
	inline String_t** get_address_of_m_name_2() { return &___m_name_2; }
	inline void set_m_name_2(String_t* value)
	{
		___m_name_2 = value;
		Il2CppCodeGenWriteBarrier((&___m_name_2), value);
	}

	inline static int32_t get_offset_of_m_langName_3() { return static_cast<int32_t>(offsetof(DateTimeFormatInfo_t2405853701, ___m_langName_3)); }
	inline String_t* get_m_langName_3() const { return ___m_langName_3; }
	inline String_t** get_address_of_m_langName_3() { return &___m_langName_3; }
	inline void set_m_langName_3(String_t* value)
	{
		___m_langName_3 = value;
		Il2CppCodeGenWriteBarrier((&___m_langName_3), value);
	}

	inline static int32_t get_offset_of_m_compareInfo_4() { return static_cast<int32_t>(offsetof(DateTimeFormatInfo_t2405853701, ___m_compareInfo_4)); }
	inline CompareInfo_t1092934962 * get_m_compareInfo_4() const { return ___m_compareInfo_4; }
	inline CompareInfo_t1092934962 ** get_address_of_m_compareInfo_4() { return &___m_compareInfo_4; }
	inline void set_m_compareInfo_4(CompareInfo_t1092934962 * value)
	{
		___m_compareInfo_4 = value;
		Il2CppCodeGenWriteBarrier((&___m_compareInfo_4), value);
	}

	inline static int32_t get_offset_of_m_cultureInfo_5() { return static_cast<int32_t>(offsetof(DateTimeFormatInfo_t2405853701, ___m_cultureInfo_5)); }
	inline CultureInfo_t4157843068 * get_m_cultureInfo_5() const { return ___m_cultureInfo_5; }
	inline CultureInfo_t4157843068 ** get_address_of_m_cultureInfo_5() { return &___m_cultureInfo_5; }
	inline void set_m_cultureInfo_5(CultureInfo_t4157843068 * value)
	{
		___m_cultureInfo_5 = value;
		Il2CppCodeGenWriteBarrier((&___m_cultureInfo_5), value);
	}

	inline static int32_t get_offset_of_amDesignator_6() { return static_cast<int32_t>(offsetof(DateTimeFormatInfo_t2405853701, ___amDesignator_6)); }
	inline String_t* get_amDesignator_6() const { return ___amDesignator_6; }
	inline String_t** get_address_of_amDesignator_6() { return &___amDesignator_6; }
	inline void set_amDesignator_6(String_t* value)
	{
		___amDesignator_6 = value;
		Il2CppCodeGenWriteBarrier((&___amDesignator_6), value);
	}

	inline static int32_t get_offset_of_pmDesignator_7() { return static_cast<int32_t>(offsetof(DateTimeFormatInfo_t2405853701, ___pmDesignator_7)); }
	inline String_t* get_pmDesignator_7() const { return ___pmDesignator_7; }
	inline String_t** get_address_of_pmDesignator_7() { return &___pmDesignator_7; }
	inline void set_pmDesignator_7(String_t* value)
	{
		___pmDesignator_7 = value;
		Il2CppCodeGenWriteBarrier((&___pmDesignator_7), value);
	}

	inline static int32_t get_offset_of_dateSeparator_8() { return static_cast<int32_t>(offsetof(DateTimeFormatInfo_t2405853701, ___dateSeparator_8)); }
	inline String_t* get_dateSeparator_8() const { return ___dateSeparator_8; }
	inline String_t** get_address_of_dateSeparator_8() { return &___dateSeparator_8; }
	inline void set_dateSeparator_8(String_t* value)
	{
		___dateSeparator_8 = value;
		Il2CppCodeGenWriteBarrier((&___dateSeparator_8), value);
	}

	inline static int32_t get_offset_of_generalShortTimePattern_9() { return static_cast<int32_t>(offsetof(DateTimeFormatInfo_t2405853701, ___generalShortTimePattern_9)); }
	inline String_t* get_generalShortTimePattern_9() const { return ___generalShortTimePattern_9; }
	inline String_t** get_address_of_generalShortTimePattern_9() { return &___generalShortTimePattern_9; }
	inline void set_generalShortTimePattern_9(String_t* value)
	{
		___generalShortTimePattern_9 = value;
		Il2CppCodeGenWriteBarrier((&___generalShortTimePattern_9), value);
	}

	inline static int32_t get_offset_of_generalLongTimePattern_10() { return static_cast<int32_t>(offsetof(DateTimeFormatInfo_t2405853701, ___generalLongTimePattern_10)); }
	inline String_t* get_generalLongTimePattern_10() const { return ___generalLongTimePattern_10; }
	inline String_t** get_address_of_generalLongTimePattern_10() { return &___generalLongTimePattern_10; }
	inline void set_generalLongTimePattern_10(String_t* value)
	{
		___generalLongTimePattern_10 = value;
		Il2CppCodeGenWriteBarrier((&___generalLongTimePattern_10), value);
	}

	inline static int32_t get_offset_of_timeSeparator_11() { return static_cast<int32_t>(offsetof(DateTimeFormatInfo_t2405853701, ___timeSeparator_11)); }
	inline String_t* get_timeSeparator_11() const { return ___timeSeparator_11; }
	inline String_t** get_address_of_timeSeparator_11() { return &___timeSeparator_11; }
	inline void set_timeSeparator_11(String_t* value)
	{
		___timeSeparator_11 = value;
		Il2CppCodeGenWriteBarrier((&___timeSeparator_11), value);
	}

	inline static int32_t get_offset_of_monthDayPattern_12() { return static_cast<int32_t>(offsetof(DateTimeFormatInfo_t2405853701, ___monthDayPattern_12)); }
	inline String_t* get_monthDayPattern_12() const { return ___monthDayPattern_12; }
	inline String_t** get_address_of_monthDayPattern_12() { return &___monthDayPattern_12; }
	inline void set_monthDayPattern_12(String_t* value)
	{
		___monthDayPattern_12 = value;
		Il2CppCodeGenWriteBarrier((&___monthDayPattern_12), value);
	}

	inline static int32_t get_offset_of_dateTimeOffsetPattern_13() { return static_cast<int32_t>(offsetof(DateTimeFormatInfo_t2405853701, ___dateTimeOffsetPattern_13)); }
	inline String_t* get_dateTimeOffsetPattern_13() const { return ___dateTimeOffsetPattern_13; }
	inline String_t** get_address_of_dateTimeOffsetPattern_13() { return &___dateTimeOffsetPattern_13; }
	inline void set_dateTimeOffsetPattern_13(String_t* value)
	{
		___dateTimeOffsetPattern_13 = value;
		Il2CppCodeGenWriteBarrier((&___dateTimeOffsetPattern_13), value);
	}

	inline static int32_t get_offset_of_calendar_17() { return static_cast<int32_t>(offsetof(DateTimeFormatInfo_t2405853701, ___calendar_17)); }
	inline Calendar_t1661121569 * get_calendar_17() const { return ___calendar_17; }
	inline Calendar_t1661121569 ** get_address_of_calendar_17() { return &___calendar_17; }
	inline void set_calendar_17(Calendar_t1661121569 * value)
	{
		___calendar_17 = value;
		Il2CppCodeGenWriteBarrier((&___calendar_17), value);
	}

	inline static int32_t get_offset_of_firstDayOfWeek_18() { return static_cast<int32_t>(offsetof(DateTimeFormatInfo_t2405853701, ___firstDayOfWeek_18)); }
	inline int32_t get_firstDayOfWeek_18() const { return ___firstDayOfWeek_18; }
	inline int32_t* get_address_of_firstDayOfWeek_18() { return &___firstDayOfWeek_18; }
	inline void set_firstDayOfWeek_18(int32_t value)
	{
		___firstDayOfWeek_18 = value;
	}

	inline static int32_t get_offset_of_calendarWeekRule_19() { return static_cast<int32_t>(offsetof(DateTimeFormatInfo_t2405853701, ___calendarWeekRule_19)); }
	inline int32_t get_calendarWeekRule_19() const { return ___calendarWeekRule_19; }
	inline int32_t* get_address_of_calendarWeekRule_19() { return &___calendarWeekRule_19; }
	inline void set_calendarWeekRule_19(int32_t value)
	{
		___calendarWeekRule_19 = value;
	}

	inline static int32_t get_offset_of_fullDateTimePattern_20() { return static_cast<int32_t>(offsetof(DateTimeFormatInfo_t2405853701, ___fullDateTimePattern_20)); }
	inline String_t* get_fullDateTimePattern_20() const { return ___fullDateTimePattern_20; }
	inline String_t** get_address_of_fullDateTimePattern_20() { return &___fullDateTimePattern_20; }
	inline void set_fullDateTimePattern_20(String_t* value)
	{
		___fullDateTimePattern_20 = value;
		Il2CppCodeGenWriteBarrier((&___fullDateTimePattern_20), value);
	}

	inline static int32_t get_offset_of_abbreviatedDayNames_21() { return static_cast<int32_t>(offsetof(DateTimeFormatInfo_t2405853701, ___abbreviatedDayNames_21)); }
	inline StringU5BU5D_t1281789340* get_abbreviatedDayNames_21() const { return ___abbreviatedDayNames_21; }
	inline StringU5BU5D_t1281789340** get_address_of_abbreviatedDayNames_21() { return &___abbreviatedDayNames_21; }
	inline void set_abbreviatedDayNames_21(StringU5BU5D_t1281789340* value)
	{
		___abbreviatedDayNames_21 = value;
		Il2CppCodeGenWriteBarrier((&___abbreviatedDayNames_21), value);
	}

	inline static int32_t get_offset_of_m_superShortDayNames_22() { return static_cast<int32_t>(offsetof(DateTimeFormatInfo_t2405853701, ___m_superShortDayNames_22)); }
	inline StringU5BU5D_t1281789340* get_m_superShortDayNames_22() const { return ___m_superShortDayNames_22; }
	inline StringU5BU5D_t1281789340** get_address_of_m_superShortDayNames_22() { return &___m_superShortDayNames_22; }
	inline void set_m_superShortDayNames_22(StringU5BU5D_t1281789340* value)
	{
		___m_superShortDayNames_22 = value;
		Il2CppCodeGenWriteBarrier((&___m_superShortDayNames_22), value);
	}

	inline static int32_t get_offset_of_dayNames_23() { return static_cast<int32_t>(offsetof(DateTimeFormatInfo_t2405853701, ___dayNames_23)); }
	inline StringU5BU5D_t1281789340* get_dayNames_23() const { return ___dayNames_23; }
	inline StringU5BU5D_t1281789340** get_address_of_dayNames_23() { return &___dayNames_23; }
	inline void set_dayNames_23(StringU5BU5D_t1281789340* value)
	{
		___dayNames_23 = value;
		Il2CppCodeGenWriteBarrier((&___dayNames_23), value);
	}

	inline static int32_t get_offset_of_abbreviatedMonthNames_24() { return static_cast<int32_t>(offsetof(DateTimeFormatInfo_t2405853701, ___abbreviatedMonthNames_24)); }
	inline StringU5BU5D_t1281789340* get_abbreviatedMonthNames_24() const { return ___abbreviatedMonthNames_24; }
	inline StringU5BU5D_t1281789340** get_address_of_abbreviatedMonthNames_24() { return &___abbreviatedMonthNames_24; }
	inline void set_abbreviatedMonthNames_24(StringU5BU5D_t1281789340* value)
	{
		___abbreviatedMonthNames_24 = value;
		Il2CppCodeGenWriteBarrier((&___abbreviatedMonthNames_24), value);
	}

	inline static int32_t get_offset_of_monthNames_25() { return static_cast<int32_t>(offsetof(DateTimeFormatInfo_t2405853701, ___monthNames_25)); }
	inline StringU5BU5D_t1281789340* get_monthNames_25() const { return ___monthNames_25; }
	inline StringU5BU5D_t1281789340** get_address_of_monthNames_25() { return &___monthNames_25; }
	inline void set_monthNames_25(StringU5BU5D_t1281789340* value)
	{
		___monthNames_25 = value;
		Il2CppCodeGenWriteBarrier((&___monthNames_25), value);
	}

	inline static int32_t get_offset_of_genitiveMonthNames_26() { return static_cast<int32_t>(offsetof(DateTimeFormatInfo_t2405853701, ___genitiveMonthNames_26)); }
	inline StringU5BU5D_t1281789340* get_genitiveMonthNames_26() const { return ___genitiveMonthNames_26; }
	inline StringU5BU5D_t1281789340** get_address_of_genitiveMonthNames_26() { return &___genitiveMonthNames_26; }
	inline void set_genitiveMonthNames_26(StringU5BU5D_t1281789340* value)
	{
		___genitiveMonthNames_26 = value;
		Il2CppCodeGenWriteBarrier((&___genitiveMonthNames_26), value);
	}

	inline static int32_t get_offset_of_m_genitiveAbbreviatedMonthNames_27() { return static_cast<int32_t>(offsetof(DateTimeFormatInfo_t2405853701, ___m_genitiveAbbreviatedMonthNames_27)); }
	inline StringU5BU5D_t1281789340* get_m_genitiveAbbreviatedMonthNames_27() const { return ___m_genitiveAbbreviatedMonthNames_27; }
	inline StringU5BU5D_t1281789340** get_address_of_m_genitiveAbbreviatedMonthNames_27() { return &___m_genitiveAbbreviatedMonthNames_27; }
	inline void set_m_genitiveAbbreviatedMonthNames_27(StringU5BU5D_t1281789340* value)
	{
		___m_genitiveAbbreviatedMonthNames_27 = value;
		Il2CppCodeGenWriteBarrier((&___m_genitiveAbbreviatedMonthNames_27), value);
	}

	inline static int32_t get_offset_of_leapYearMonthNames_28() { return static_cast<int32_t>(offsetof(DateTimeFormatInfo_t2405853701, ___leapYearMonthNames_28)); }
	inline StringU5BU5D_t1281789340* get_leapYearMonthNames_28() const { return ___leapYearMonthNames_28; }
	inline StringU5BU5D_t1281789340** get_address_of_leapYearMonthNames_28() { return &___leapYearMonthNames_28; }
	inline void set_leapYearMonthNames_28(StringU5BU5D_t1281789340* value)
	{
		___leapYearMonthNames_28 = value;
		Il2CppCodeGenWriteBarrier((&___leapYearMonthNames_28), value);
	}

	inline static int32_t get_offset_of_longDatePattern_29() { return static_cast<int32_t>(offsetof(DateTimeFormatInfo_t2405853701, ___longDatePattern_29)); }
	inline String_t* get_longDatePattern_29() const { return ___longDatePattern_29; }
	inline String_t** get_address_of_longDatePattern_29() { return &___longDatePattern_29; }
	inline void set_longDatePattern_29(String_t* value)
	{
		___longDatePattern_29 = value;
		Il2CppCodeGenWriteBarrier((&___longDatePattern_29), value);
	}

	inline static int32_t get_offset_of_shortDatePattern_30() { return static_cast<int32_t>(offsetof(DateTimeFormatInfo_t2405853701, ___shortDatePattern_30)); }
	inline String_t* get_shortDatePattern_30() const { return ___shortDatePattern_30; }
	inline String_t** get_address_of_shortDatePattern_30() { return &___shortDatePattern_30; }
	inline void set_shortDatePattern_30(String_t* value)
	{
		___shortDatePattern_30 = value;
		Il2CppCodeGenWriteBarrier((&___shortDatePattern_30), value);
	}

	inline static int32_t get_offset_of_yearMonthPattern_31() { return static_cast<int32_t>(offsetof(DateTimeFormatInfo_t2405853701, ___yearMonthPattern_31)); }
	inline String_t* get_yearMonthPattern_31() const { return ___yearMonthPattern_31; }
	inline String_t** get_address_of_yearMonthPattern_31() { return &___yearMonthPattern_31; }
	inline void set_yearMonthPattern_31(String_t* value)
	{
		___yearMonthPattern_31 = value;
		Il2CppCodeGenWriteBarrier((&___yearMonthPattern_31), value);
	}

	inline static int32_t get_offset_of_longTimePattern_32() { return static_cast<int32_t>(offsetof(DateTimeFormatInfo_t2405853701, ___longTimePattern_32)); }
	inline String_t* get_longTimePattern_32() const { return ___longTimePattern_32; }
	inline String_t** get_address_of_longTimePattern_32() { return &___longTimePattern_32; }
	inline void set_longTimePattern_32(String_t* value)
	{
		___longTimePattern_32 = value;
		Il2CppCodeGenWriteBarrier((&___longTimePattern_32), value);
	}

	inline static int32_t get_offset_of_shortTimePattern_33() { return static_cast<int32_t>(offsetof(DateTimeFormatInfo_t2405853701, ___shortTimePattern_33)); }
	inline String_t* get_shortTimePattern_33() const { return ___shortTimePattern_33; }
	inline String_t** get_address_of_shortTimePattern_33() { return &___shortTimePattern_33; }
	inline void set_shortTimePattern_33(String_t* value)
	{
		___shortTimePattern_33 = value;
		Il2CppCodeGenWriteBarrier((&___shortTimePattern_33), value);
	}

	inline static int32_t get_offset_of_allYearMonthPatterns_34() { return static_cast<int32_t>(offsetof(DateTimeFormatInfo_t2405853701, ___allYearMonthPatterns_34)); }
	inline StringU5BU5D_t1281789340* get_allYearMonthPatterns_34() const { return ___allYearMonthPatterns_34; }
	inline StringU5BU5D_t1281789340** get_address_of_allYearMonthPatterns_34() { return &___allYearMonthPatterns_34; }
	inline void set_allYearMonthPatterns_34(StringU5BU5D_t1281789340* value)
	{
		___allYearMonthPatterns_34 = value;
		Il2CppCodeGenWriteBarrier((&___allYearMonthPatterns_34), value);
	}

	inline static int32_t get_offset_of_allShortDatePatterns_35() { return static_cast<int32_t>(offsetof(DateTimeFormatInfo_t2405853701, ___allShortDatePatterns_35)); }
	inline StringU5BU5D_t1281789340* get_allShortDatePatterns_35() const { return ___allShortDatePatterns_35; }
	inline StringU5BU5D_t1281789340** get_address_of_allShortDatePatterns_35() { return &___allShortDatePatterns_35; }
	inline void set_allShortDatePatterns_35(StringU5BU5D_t1281789340* value)
	{
		___allShortDatePatterns_35 = value;
		Il2CppCodeGenWriteBarrier((&___allShortDatePatterns_35), value);
	}

	inline static int32_t get_offset_of_allLongDatePatterns_36() { return static_cast<int32_t>(offsetof(DateTimeFormatInfo_t2405853701, ___allLongDatePatterns_36)); }
	inline StringU5BU5D_t1281789340* get_allLongDatePatterns_36() const { return ___allLongDatePatterns_36; }
	inline StringU5BU5D_t1281789340** get_address_of_allLongDatePatterns_36() { return &___allLongDatePatterns_36; }
	inline void set_allLongDatePatterns_36(StringU5BU5D_t1281789340* value)
	{
		___allLongDatePatterns_36 = value;
		Il2CppCodeGenWriteBarrier((&___allLongDatePatterns_36), value);
	}

	inline static int32_t get_offset_of_allShortTimePatterns_37() { return static_cast<int32_t>(offsetof(DateTimeFormatInfo_t2405853701, ___allShortTimePatterns_37)); }
	inline StringU5BU5D_t1281789340* get_allShortTimePatterns_37() const { return ___allShortTimePatterns_37; }
	inline StringU5BU5D_t1281789340** get_address_of_allShortTimePatterns_37() { return &___allShortTimePatterns_37; }
	inline void set_allShortTimePatterns_37(StringU5BU5D_t1281789340* value)
	{
		___allShortTimePatterns_37 = value;
		Il2CppCodeGenWriteBarrier((&___allShortTimePatterns_37), value);
	}

	inline static int32_t get_offset_of_allLongTimePatterns_38() { return static_cast<int32_t>(offsetof(DateTimeFormatInfo_t2405853701, ___allLongTimePatterns_38)); }
	inline StringU5BU5D_t1281789340* get_allLongTimePatterns_38() const { return ___allLongTimePatterns_38; }
	inline StringU5BU5D_t1281789340** get_address_of_allLongTimePatterns_38() { return &___allLongTimePatterns_38; }
	inline void set_allLongTimePatterns_38(StringU5BU5D_t1281789340* value)
	{
		___allLongTimePatterns_38 = value;
		Il2CppCodeGenWriteBarrier((&___allLongTimePatterns_38), value);
	}

	inline static int32_t get_offset_of_m_eraNames_39() { return static_cast<int32_t>(offsetof(DateTimeFormatInfo_t2405853701, ___m_eraNames_39)); }
	inline StringU5BU5D_t1281789340* get_m_eraNames_39() const { return ___m_eraNames_39; }
	inline StringU5BU5D_t1281789340** get_address_of_m_eraNames_39() { return &___m_eraNames_39; }
	inline void set_m_eraNames_39(StringU5BU5D_t1281789340* value)
	{
		___m_eraNames_39 = value;
		Il2CppCodeGenWriteBarrier((&___m_eraNames_39), value);
	}

	inline static int32_t get_offset_of_m_abbrevEraNames_40() { return static_cast<int32_t>(offsetof(DateTimeFormatInfo_t2405853701, ___m_abbrevEraNames_40)); }
	inline StringU5BU5D_t1281789340* get_m_abbrevEraNames_40() const { return ___m_abbrevEraNames_40; }
	inline StringU5BU5D_t1281789340** get_address_of_m_abbrevEraNames_40() { return &___m_abbrevEraNames_40; }
	inline void set_m_abbrevEraNames_40(StringU5BU5D_t1281789340* value)
	{
		___m_abbrevEraNames_40 = value;
		Il2CppCodeGenWriteBarrier((&___m_abbrevEraNames_40), value);
	}

	inline static int32_t get_offset_of_m_abbrevEnglishEraNames_41() { return static_cast<int32_t>(offsetof(DateTimeFormatInfo_t2405853701, ___m_abbrevEnglishEraNames_41)); }
	inline StringU5BU5D_t1281789340* get_m_abbrevEnglishEraNames_41() const { return ___m_abbrevEnglishEraNames_41; }
	inline StringU5BU5D_t1281789340** get_address_of_m_abbrevEnglishEraNames_41() { return &___m_abbrevEnglishEraNames_41; }
	inline void set_m_abbrevEnglishEraNames_41(StringU5BU5D_t1281789340* value)
	{
		___m_abbrevEnglishEraNames_41 = value;
		Il2CppCodeGenWriteBarrier((&___m_abbrevEnglishEraNames_41), value);
	}

	inline static int32_t get_offset_of_optionalCalendars_42() { return static_cast<int32_t>(offsetof(DateTimeFormatInfo_t2405853701, ___optionalCalendars_42)); }
	inline Int32U5BU5D_t385246372* get_optionalCalendars_42() const { return ___optionalCalendars_42; }
	inline Int32U5BU5D_t385246372** get_address_of_optionalCalendars_42() { return &___optionalCalendars_42; }
	inline void set_optionalCalendars_42(Int32U5BU5D_t385246372* value)
	{
		___optionalCalendars_42 = value;
		Il2CppCodeGenWriteBarrier((&___optionalCalendars_42), value);
	}

	inline static int32_t get_offset_of_m_isReadOnly_44() { return static_cast<int32_t>(offsetof(DateTimeFormatInfo_t2405853701, ___m_isReadOnly_44)); }
	inline bool get_m_isReadOnly_44() const { return ___m_isReadOnly_44; }
	inline bool* get_address_of_m_isReadOnly_44() { return &___m_isReadOnly_44; }
	inline void set_m_isReadOnly_44(bool value)
	{
		___m_isReadOnly_44 = value;
	}

	inline static int32_t get_offset_of_formatFlags_45() { return static_cast<int32_t>(offsetof(DateTimeFormatInfo_t2405853701, ___formatFlags_45)); }
	inline int32_t get_formatFlags_45() const { return ___formatFlags_45; }
	inline int32_t* get_address_of_formatFlags_45() { return &___formatFlags_45; }
	inline void set_formatFlags_45(int32_t value)
	{
		___formatFlags_45 = value;
	}

	inline static int32_t get_offset_of_CultureID_47() { return static_cast<int32_t>(offsetof(DateTimeFormatInfo_t2405853701, ___CultureID_47)); }
	inline int32_t get_CultureID_47() const { return ___CultureID_47; }
	inline int32_t* get_address_of_CultureID_47() { return &___CultureID_47; }
	inline void set_CultureID_47(int32_t value)
	{
		___CultureID_47 = value;
	}

	inline static int32_t get_offset_of_m_useUserOverride_48() { return static_cast<int32_t>(offsetof(DateTimeFormatInfo_t2405853701, ___m_useUserOverride_48)); }
	inline bool get_m_useUserOverride_48() const { return ___m_useUserOverride_48; }
	inline bool* get_address_of_m_useUserOverride_48() { return &___m_useUserOverride_48; }
	inline void set_m_useUserOverride_48(bool value)
	{
		___m_useUserOverride_48 = value;
	}

	inline static int32_t get_offset_of_bUseCalendarInfo_49() { return static_cast<int32_t>(offsetof(DateTimeFormatInfo_t2405853701, ___bUseCalendarInfo_49)); }
	inline bool get_bUseCalendarInfo_49() const { return ___bUseCalendarInfo_49; }
	inline bool* get_address_of_bUseCalendarInfo_49() { return &___bUseCalendarInfo_49; }
	inline void set_bUseCalendarInfo_49(bool value)
	{
		___bUseCalendarInfo_49 = value;
	}

	inline static int32_t get_offset_of_nDataItem_50() { return static_cast<int32_t>(offsetof(DateTimeFormatInfo_t2405853701, ___nDataItem_50)); }
	inline int32_t get_nDataItem_50() const { return ___nDataItem_50; }
	inline int32_t* get_address_of_nDataItem_50() { return &___nDataItem_50; }
	inline void set_nDataItem_50(int32_t value)
	{
		___nDataItem_50 = value;
	}

	inline static int32_t get_offset_of_m_isDefaultCalendar_51() { return static_cast<int32_t>(offsetof(DateTimeFormatInfo_t2405853701, ___m_isDefaultCalendar_51)); }
	inline bool get_m_isDefaultCalendar_51() const { return ___m_isDefaultCalendar_51; }
	inline bool* get_address_of_m_isDefaultCalendar_51() { return &___m_isDefaultCalendar_51; }
	inline void set_m_isDefaultCalendar_51(bool value)
	{
		___m_isDefaultCalendar_51 = value;
	}

	inline static int32_t get_offset_of_m_dateWords_53() { return static_cast<int32_t>(offsetof(DateTimeFormatInfo_t2405853701, ___m_dateWords_53)); }
	inline StringU5BU5D_t1281789340* get_m_dateWords_53() const { return ___m_dateWords_53; }
	inline StringU5BU5D_t1281789340** get_address_of_m_dateWords_53() { return &___m_dateWords_53; }
	inline void set_m_dateWords_53(StringU5BU5D_t1281789340* value)
	{
		___m_dateWords_53 = value;
		Il2CppCodeGenWriteBarrier((&___m_dateWords_53), value);
	}

	inline static int32_t get_offset_of_m_fullTimeSpanPositivePattern_54() { return static_cast<int32_t>(offsetof(DateTimeFormatInfo_t2405853701, ___m_fullTimeSpanPositivePattern_54)); }
	inline String_t* get_m_fullTimeSpanPositivePattern_54() const { return ___m_fullTimeSpanPositivePattern_54; }
	inline String_t** get_address_of_m_fullTimeSpanPositivePattern_54() { return &___m_fullTimeSpanPositivePattern_54; }
	inline void set_m_fullTimeSpanPositivePattern_54(String_t* value)
	{
		___m_fullTimeSpanPositivePattern_54 = value;
		Il2CppCodeGenWriteBarrier((&___m_fullTimeSpanPositivePattern_54), value);
	}

	inline static int32_t get_offset_of_m_fullTimeSpanNegativePattern_55() { return static_cast<int32_t>(offsetof(DateTimeFormatInfo_t2405853701, ___m_fullTimeSpanNegativePattern_55)); }
	inline String_t* get_m_fullTimeSpanNegativePattern_55() const { return ___m_fullTimeSpanNegativePattern_55; }
	inline String_t** get_address_of_m_fullTimeSpanNegativePattern_55() { return &___m_fullTimeSpanNegativePattern_55; }
	inline void set_m_fullTimeSpanNegativePattern_55(String_t* value)
	{
		___m_fullTimeSpanNegativePattern_55 = value;
		Il2CppCodeGenWriteBarrier((&___m_fullTimeSpanNegativePattern_55), value);
	}

	inline static int32_t get_offset_of_m_dtfiTokenHash_57() { return static_cast<int32_t>(offsetof(DateTimeFormatInfo_t2405853701, ___m_dtfiTokenHash_57)); }
	inline TokenHashValueU5BU5D_t818561467* get_m_dtfiTokenHash_57() const { return ___m_dtfiTokenHash_57; }
	inline TokenHashValueU5BU5D_t818561467** get_address_of_m_dtfiTokenHash_57() { return &___m_dtfiTokenHash_57; }
	inline void set_m_dtfiTokenHash_57(TokenHashValueU5BU5D_t818561467* value)
	{
		___m_dtfiTokenHash_57 = value;
		Il2CppCodeGenWriteBarrier((&___m_dtfiTokenHash_57), value);
	}
};

struct DateTimeFormatInfo_t2405853701_StaticFields
{
public:
	// System.Globalization.DateTimeFormatInfo modreq(System.Runtime.CompilerServices.IsVolatile) System.Globalization.DateTimeFormatInfo::invariantInfo
	DateTimeFormatInfo_t2405853701 * ___invariantInfo_0;
	// System.Boolean System.Globalization.DateTimeFormatInfo::preferExistingTokens
	bool ___preferExistingTokens_46;
	// System.Collections.Hashtable modreq(System.Runtime.CompilerServices.IsVolatile) System.Globalization.DateTimeFormatInfo::s_calendarNativeNames
	Hashtable_t1853889766 * ___s_calendarNativeNames_52;
	// System.Globalization.DateTimeFormatInfo modreq(System.Runtime.CompilerServices.IsVolatile) System.Globalization.DateTimeFormatInfo::s_jajpDTFI
	DateTimeFormatInfo_t2405853701 * ___s_jajpDTFI_82;
	// System.Globalization.DateTimeFormatInfo modreq(System.Runtime.CompilerServices.IsVolatile) System.Globalization.DateTimeFormatInfo::s_zhtwDTFI
	DateTimeFormatInfo_t2405853701 * ___s_zhtwDTFI_83;

public:
	inline static int32_t get_offset_of_invariantInfo_0() { return static_cast<int32_t>(offsetof(DateTimeFormatInfo_t2405853701_StaticFields, ___invariantInfo_0)); }
	inline DateTimeFormatInfo_t2405853701 * get_invariantInfo_0() const { return ___invariantInfo_0; }
	inline DateTimeFormatInfo_t2405853701 ** get_address_of_invariantInfo_0() { return &___invariantInfo_0; }
	inline void set_invariantInfo_0(DateTimeFormatInfo_t2405853701 * value)
	{
		___invariantInfo_0 = value;
		Il2CppCodeGenWriteBarrier((&___invariantInfo_0), value);
	}

	inline static int32_t get_offset_of_preferExistingTokens_46() { return static_cast<int32_t>(offsetof(DateTimeFormatInfo_t2405853701_StaticFields, ___preferExistingTokens_46)); }
	inline bool get_preferExistingTokens_46() const { return ___preferExistingTokens_46; }
	inline bool* get_address_of_preferExistingTokens_46() { return &___preferExistingTokens_46; }
	inline void set_preferExistingTokens_46(bool value)
	{
		___preferExistingTokens_46 = value;
	}

	inline static int32_t get_offset_of_s_calendarNativeNames_52() { return static_cast<int32_t>(offsetof(DateTimeFormatInfo_t2405853701_StaticFields, ___s_calendarNativeNames_52)); }
	inline Hashtable_t1853889766 * get_s_calendarNativeNames_52() const { return ___s_calendarNativeNames_52; }
	inline Hashtable_t1853889766 ** get_address_of_s_calendarNativeNames_52() { return &___s_calendarNativeNames_52; }
	inline void set_s_calendarNativeNames_52(Hashtable_t1853889766 * value)
	{
		___s_calendarNativeNames_52 = value;
		Il2CppCodeGenWriteBarrier((&___s_calendarNativeNames_52), value);
	}

	inline static int32_t get_offset_of_s_jajpDTFI_82() { return static_cast<int32_t>(offsetof(DateTimeFormatInfo_t2405853701_StaticFields, ___s_jajpDTFI_82)); }
	inline DateTimeFormatInfo_t2405853701 * get_s_jajpDTFI_82() const { return ___s_jajpDTFI_82; }
	inline DateTimeFormatInfo_t2405853701 ** get_address_of_s_jajpDTFI_82() { return &___s_jajpDTFI_82; }
	inline void set_s_jajpDTFI_82(DateTimeFormatInfo_t2405853701 * value)
	{
		___s_jajpDTFI_82 = value;
		Il2CppCodeGenWriteBarrier((&___s_jajpDTFI_82), value);
	}

	inline static int32_t get_offset_of_s_zhtwDTFI_83() { return static_cast<int32_t>(offsetof(DateTimeFormatInfo_t2405853701_StaticFields, ___s_zhtwDTFI_83)); }
	inline DateTimeFormatInfo_t2405853701 * get_s_zhtwDTFI_83() const { return ___s_zhtwDTFI_83; }
	inline DateTimeFormatInfo_t2405853701 ** get_address_of_s_zhtwDTFI_83() { return &___s_zhtwDTFI_83; }
	inline void set_s_zhtwDTFI_83(DateTimeFormatInfo_t2405853701 * value)
	{
		___s_zhtwDTFI_83 = value;
		Il2CppCodeGenWriteBarrier((&___s_zhtwDTFI_83), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // DATETIMEFORMATINFO_T2405853701_H
#ifndef STREAMINGCONTEXT_T3711869237_H
#define STREAMINGCONTEXT_T3711869237_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Runtime.Serialization.StreamingContext
struct  StreamingContext_t3711869237 
{
public:
	// System.Object System.Runtime.Serialization.StreamingContext::m_additionalContext
	RuntimeObject * ___m_additionalContext_0;
	// System.Runtime.Serialization.StreamingContextStates System.Runtime.Serialization.StreamingContext::m_state
	int32_t ___m_state_1;

public:
	inline static int32_t get_offset_of_m_additionalContext_0() { return static_cast<int32_t>(offsetof(StreamingContext_t3711869237, ___m_additionalContext_0)); }
	inline RuntimeObject * get_m_additionalContext_0() const { return ___m_additionalContext_0; }
	inline RuntimeObject ** get_address_of_m_additionalContext_0() { return &___m_additionalContext_0; }
	inline void set_m_additionalContext_0(RuntimeObject * value)
	{
		___m_additionalContext_0 = value;
		Il2CppCodeGenWriteBarrier((&___m_additionalContext_0), value);
	}

	inline static int32_t get_offset_of_m_state_1() { return static_cast<int32_t>(offsetof(StreamingContext_t3711869237, ___m_state_1)); }
	inline int32_t get_m_state_1() const { return ___m_state_1; }
	inline int32_t* get_address_of_m_state_1() { return &___m_state_1; }
	inline void set_m_state_1(int32_t value)
	{
		___m_state_1 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
// Native definition for P/Invoke marshalling of System.Runtime.Serialization.StreamingContext
struct StreamingContext_t3711869237_marshaled_pinvoke
{
	Il2CppIUnknown* ___m_additionalContext_0;
	int32_t ___m_state_1;
};
// Native definition for COM marshalling of System.Runtime.Serialization.StreamingContext
struct StreamingContext_t3711869237_marshaled_com
{
	Il2CppIUnknown* ___m_additionalContext_0;
	int32_t ___m_state_1;
};
#endif // STREAMINGCONTEXT_T3711869237_H
#ifndef TYPE_T_H
#define TYPE_T_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Type
struct  Type_t  : public MemberInfo_t
{
public:
	// System.RuntimeTypeHandle System.Type::_impl
	RuntimeTypeHandle_t3027515415  ____impl_9;

public:
	inline static int32_t get_offset_of__impl_9() { return static_cast<int32_t>(offsetof(Type_t, ____impl_9)); }
	inline RuntimeTypeHandle_t3027515415  get__impl_9() const { return ____impl_9; }
	inline RuntimeTypeHandle_t3027515415 * get_address_of__impl_9() { return &____impl_9; }
	inline void set__impl_9(RuntimeTypeHandle_t3027515415  value)
	{
		____impl_9 = value;
	}
};

struct Type_t_StaticFields
{
public:
	// System.Reflection.MemberFilter System.Type::FilterAttribute
	MemberFilter_t426314064 * ___FilterAttribute_0;
	// System.Reflection.MemberFilter System.Type::FilterName
	MemberFilter_t426314064 * ___FilterName_1;
	// System.Reflection.MemberFilter System.Type::FilterNameIgnoreCase
	MemberFilter_t426314064 * ___FilterNameIgnoreCase_2;
	// System.Object System.Type::Missing
	RuntimeObject * ___Missing_3;
	// System.Char System.Type::Delimiter
	Il2CppChar ___Delimiter_4;
	// System.Type[] System.Type::EmptyTypes
	TypeU5BU5D_t3940880105* ___EmptyTypes_5;
	// System.Reflection.Binder System.Type::defaultBinder
	Binder_t2999457153 * ___defaultBinder_6;

public:
	inline static int32_t get_offset_of_FilterAttribute_0() { return static_cast<int32_t>(offsetof(Type_t_StaticFields, ___FilterAttribute_0)); }
	inline MemberFilter_t426314064 * get_FilterAttribute_0() const { return ___FilterAttribute_0; }
	inline MemberFilter_t426314064 ** get_address_of_FilterAttribute_0() { return &___FilterAttribute_0; }
	inline void set_FilterAttribute_0(MemberFilter_t426314064 * value)
	{
		___FilterAttribute_0 = value;
		Il2CppCodeGenWriteBarrier((&___FilterAttribute_0), value);
	}

	inline static int32_t get_offset_of_FilterName_1() { return static_cast<int32_t>(offsetof(Type_t_StaticFields, ___FilterName_1)); }
	inline MemberFilter_t426314064 * get_FilterName_1() const { return ___FilterName_1; }
	inline MemberFilter_t426314064 ** get_address_of_FilterName_1() { return &___FilterName_1; }
	inline void set_FilterName_1(MemberFilter_t426314064 * value)
	{
		___FilterName_1 = value;
		Il2CppCodeGenWriteBarrier((&___FilterName_1), value);
	}

	inline static int32_t get_offset_of_FilterNameIgnoreCase_2() { return static_cast<int32_t>(offsetof(Type_t_StaticFields, ___FilterNameIgnoreCase_2)); }
	inline MemberFilter_t426314064 * get_FilterNameIgnoreCase_2() const { return ___FilterNameIgnoreCase_2; }
	inline MemberFilter_t426314064 ** get_address_of_FilterNameIgnoreCase_2() { return &___FilterNameIgnoreCase_2; }
	inline void set_FilterNameIgnoreCase_2(MemberFilter_t426314064 * value)
	{
		___FilterNameIgnoreCase_2 = value;
		Il2CppCodeGenWriteBarrier((&___FilterNameIgnoreCase_2), value);
	}

	inline static int32_t get_offset_of_Missing_3() { return static_cast<int32_t>(offsetof(Type_t_StaticFields, ___Missing_3)); }
	inline RuntimeObject * get_Missing_3() const { return ___Missing_3; }
	inline RuntimeObject ** get_address_of_Missing_3() { return &___Missing_3; }
	inline void set_Missing_3(RuntimeObject * value)
	{
		___Missing_3 = value;
		Il2CppCodeGenWriteBarrier((&___Missing_3), value);
	}

	inline static int32_t get_offset_of_Delimiter_4() { return static_cast<int32_t>(offsetof(Type_t_StaticFields, ___Delimiter_4)); }
	inline Il2CppChar get_Delimiter_4() const { return ___Delimiter_4; }
	inline Il2CppChar* get_address_of_Delimiter_4() { return &___Delimiter_4; }
	inline void set_Delimiter_4(Il2CppChar value)
	{
		___Delimiter_4 = value;
	}

	inline static int32_t get_offset_of_EmptyTypes_5() { return static_cast<int32_t>(offsetof(Type_t_StaticFields, ___EmptyTypes_5)); }
	inline TypeU5BU5D_t3940880105* get_EmptyTypes_5() const { return ___EmptyTypes_5; }
	inline TypeU5BU5D_t3940880105** get_address_of_EmptyTypes_5() { return &___EmptyTypes_5; }
	inline void set_EmptyTypes_5(TypeU5BU5D_t3940880105* value)
	{
		___EmptyTypes_5 = value;
		Il2CppCodeGenWriteBarrier((&___EmptyTypes_5), value);
	}

	inline static int32_t get_offset_of_defaultBinder_6() { return static_cast<int32_t>(offsetof(Type_t_StaticFields, ___defaultBinder_6)); }
	inline Binder_t2999457153 * get_defaultBinder_6() const { return ___defaultBinder_6; }
	inline Binder_t2999457153 ** get_address_of_defaultBinder_6() { return &___defaultBinder_6; }
	inline void set_defaultBinder_6(Binder_t2999457153 * value)
	{
		___defaultBinder_6 = value;
		Il2CppCodeGenWriteBarrier((&___defaultBinder_6), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // TYPE_T_H
#ifndef VARIANT_T2753289927_H
#define VARIANT_T2753289927_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Variant
struct  Variant_t2753289927 
{
public:
	union
	{
		#pragma pack(push, tp, 1)
		struct
		{
			// System.Int16 System.Variant::vt
			int16_t ___vt_0;
		};
		#pragma pack(pop, tp)
		struct
		{
			int16_t ___vt_0_forAlignmentOnly;
		};
		#pragma pack(push, tp, 1)
		struct
		{
			char ___wReserved1_1_OffsetPadding[2];
			// System.UInt16 System.Variant::wReserved1
			uint16_t ___wReserved1_1;
		};
		#pragma pack(pop, tp)
		struct
		{
			char ___wReserved1_1_OffsetPadding_forAlignmentOnly[2];
			uint16_t ___wReserved1_1_forAlignmentOnly;
		};
		#pragma pack(push, tp, 1)
		struct
		{
			char ___wReserved2_2_OffsetPadding[4];
			// System.UInt16 System.Variant::wReserved2
			uint16_t ___wReserved2_2;
		};
		#pragma pack(pop, tp)
		struct
		{
			char ___wReserved2_2_OffsetPadding_forAlignmentOnly[4];
			uint16_t ___wReserved2_2_forAlignmentOnly;
		};
		#pragma pack(push, tp, 1)
		struct
		{
			char ___wReserved3_3_OffsetPadding[6];
			// System.UInt16 System.Variant::wReserved3
			uint16_t ___wReserved3_3;
		};
		#pragma pack(pop, tp)
		struct
		{
			char ___wReserved3_3_OffsetPadding_forAlignmentOnly[6];
			uint16_t ___wReserved3_3_forAlignmentOnly;
		};
		#pragma pack(push, tp, 1)
		struct
		{
			char ___llVal_4_OffsetPadding[8];
			// System.Int64 System.Variant::llVal
			int64_t ___llVal_4;
		};
		#pragma pack(pop, tp)
		struct
		{
			char ___llVal_4_OffsetPadding_forAlignmentOnly[8];
			int64_t ___llVal_4_forAlignmentOnly;
		};
		#pragma pack(push, tp, 1)
		struct
		{
			char ___lVal_5_OffsetPadding[8];
			// System.Int32 System.Variant::lVal
			int32_t ___lVal_5;
		};
		#pragma pack(pop, tp)
		struct
		{
			char ___lVal_5_OffsetPadding_forAlignmentOnly[8];
			int32_t ___lVal_5_forAlignmentOnly;
		};
		#pragma pack(push, tp, 1)
		struct
		{
			char ___bVal_6_OffsetPadding[8];
			// System.Byte System.Variant::bVal
			uint8_t ___bVal_6;
		};
		#pragma pack(pop, tp)
		struct
		{
			char ___bVal_6_OffsetPadding_forAlignmentOnly[8];
			uint8_t ___bVal_6_forAlignmentOnly;
		};
		#pragma pack(push, tp, 1)
		struct
		{
			char ___iVal_7_OffsetPadding[8];
			// System.Int16 System.Variant::iVal
			int16_t ___iVal_7;
		};
		#pragma pack(pop, tp)
		struct
		{
			char ___iVal_7_OffsetPadding_forAlignmentOnly[8];
			int16_t ___iVal_7_forAlignmentOnly;
		};
		#pragma pack(push, tp, 1)
		struct
		{
			char ___fltVal_8_OffsetPadding[8];
			// System.Single System.Variant::fltVal
			float ___fltVal_8;
		};
		#pragma pack(pop, tp)
		struct
		{
			char ___fltVal_8_OffsetPadding_forAlignmentOnly[8];
			float ___fltVal_8_forAlignmentOnly;
		};
		#pragma pack(push, tp, 1)
		struct
		{
			char ___dblVal_9_OffsetPadding[8];
			// System.Double System.Variant::dblVal
			double ___dblVal_9;
		};
		#pragma pack(pop, tp)
		struct
		{
			char ___dblVal_9_OffsetPadding_forAlignmentOnly[8];
			double ___dblVal_9_forAlignmentOnly;
		};
		#pragma pack(push, tp, 1)
		struct
		{
			char ___boolVal_10_OffsetPadding[8];
			// System.Int16 System.Variant::boolVal
			int16_t ___boolVal_10;
		};
		#pragma pack(pop, tp)
		struct
		{
			char ___boolVal_10_OffsetPadding_forAlignmentOnly[8];
			int16_t ___boolVal_10_forAlignmentOnly;
		};
		#pragma pack(push, tp, 1)
		struct
		{
			char ___bstrVal_11_OffsetPadding[8];
			// System.IntPtr System.Variant::bstrVal
			intptr_t ___bstrVal_11;
		};
		#pragma pack(pop, tp)
		struct
		{
			char ___bstrVal_11_OffsetPadding_forAlignmentOnly[8];
			intptr_t ___bstrVal_11_forAlignmentOnly;
		};
		#pragma pack(push, tp, 1)
		struct
		{
			char ___cVal_12_OffsetPadding[8];
			// System.SByte System.Variant::cVal
			int8_t ___cVal_12;
		};
		#pragma pack(pop, tp)
		struct
		{
			char ___cVal_12_OffsetPadding_forAlignmentOnly[8];
			int8_t ___cVal_12_forAlignmentOnly;
		};
		#pragma pack(push, tp, 1)
		struct
		{
			char ___uiVal_13_OffsetPadding[8];
			// System.UInt16 System.Variant::uiVal
			uint16_t ___uiVal_13;
		};
		#pragma pack(pop, tp)
		struct
		{
			char ___uiVal_13_OffsetPadding_forAlignmentOnly[8];
			uint16_t ___uiVal_13_forAlignmentOnly;
		};
		#pragma pack(push, tp, 1)
		struct
		{
			char ___ulVal_14_OffsetPadding[8];
			// System.UInt32 System.Variant::ulVal
			uint32_t ___ulVal_14;
		};
		#pragma pack(pop, tp)
		struct
		{
			char ___ulVal_14_OffsetPadding_forAlignmentOnly[8];
			uint32_t ___ulVal_14_forAlignmentOnly;
		};
		#pragma pack(push, tp, 1)
		struct
		{
			char ___ullVal_15_OffsetPadding[8];
			// System.UInt64 System.Variant::ullVal
			uint64_t ___ullVal_15;
		};
		#pragma pack(pop, tp)
		struct
		{
			char ___ullVal_15_OffsetPadding_forAlignmentOnly[8];
			uint64_t ___ullVal_15_forAlignmentOnly;
		};
		#pragma pack(push, tp, 1)
		struct
		{
			char ___intVal_16_OffsetPadding[8];
			// System.Int32 System.Variant::intVal
			int32_t ___intVal_16;
		};
		#pragma pack(pop, tp)
		struct
		{
			char ___intVal_16_OffsetPadding_forAlignmentOnly[8];
			int32_t ___intVal_16_forAlignmentOnly;
		};
		#pragma pack(push, tp, 1)
		struct
		{
			char ___uintVal_17_OffsetPadding[8];
			// System.UInt32 System.Variant::uintVal
			uint32_t ___uintVal_17;
		};
		#pragma pack(pop, tp)
		struct
		{
			char ___uintVal_17_OffsetPadding_forAlignmentOnly[8];
			uint32_t ___uintVal_17_forAlignmentOnly;
		};
		#pragma pack(push, tp, 1)
		struct
		{
			char ___pdispVal_18_OffsetPadding[8];
			// System.IntPtr System.Variant::pdispVal
			intptr_t ___pdispVal_18;
		};
		#pragma pack(pop, tp)
		struct
		{
			char ___pdispVal_18_OffsetPadding_forAlignmentOnly[8];
			intptr_t ___pdispVal_18_forAlignmentOnly;
		};
		#pragma pack(push, tp, 1)
		struct
		{
			char ___bRecord_19_OffsetPadding[8];
			// System.BRECORD System.Variant::bRecord
			BRECORD_t3470580684  ___bRecord_19;
		};
		#pragma pack(pop, tp)
		struct
		{
			char ___bRecord_19_OffsetPadding_forAlignmentOnly[8];
			BRECORD_t3470580684  ___bRecord_19_forAlignmentOnly;
		};
	};

public:
	inline static int32_t get_offset_of_vt_0() { return static_cast<int32_t>(offsetof(Variant_t2753289927, ___vt_0)); }
	inline int16_t get_vt_0() const { return ___vt_0; }
	inline int16_t* get_address_of_vt_0() { return &___vt_0; }
	inline void set_vt_0(int16_t value)
	{
		___vt_0 = value;
	}

	inline static int32_t get_offset_of_wReserved1_1() { return static_cast<int32_t>(offsetof(Variant_t2753289927, ___wReserved1_1)); }
	inline uint16_t get_wReserved1_1() const { return ___wReserved1_1; }
	inline uint16_t* get_address_of_wReserved1_1() { return &___wReserved1_1; }
	inline void set_wReserved1_1(uint16_t value)
	{
		___wReserved1_1 = value;
	}

	inline static int32_t get_offset_of_wReserved2_2() { return static_cast<int32_t>(offsetof(Variant_t2753289927, ___wReserved2_2)); }
	inline uint16_t get_wReserved2_2() const { return ___wReserved2_2; }
	inline uint16_t* get_address_of_wReserved2_2() { return &___wReserved2_2; }
	inline void set_wReserved2_2(uint16_t value)
	{
		___wReserved2_2 = value;
	}

	inline static int32_t get_offset_of_wReserved3_3() { return static_cast<int32_t>(offsetof(Variant_t2753289927, ___wReserved3_3)); }
	inline uint16_t get_wReserved3_3() const { return ___wReserved3_3; }
	inline uint16_t* get_address_of_wReserved3_3() { return &___wReserved3_3; }
	inline void set_wReserved3_3(uint16_t value)
	{
		___wReserved3_3 = value;
	}

	inline static int32_t get_offset_of_llVal_4() { return static_cast<int32_t>(offsetof(Variant_t2753289927, ___llVal_4)); }
	inline int64_t get_llVal_4() const { return ___llVal_4; }
	inline int64_t* get_address_of_llVal_4() { return &___llVal_4; }
	inline void set_llVal_4(int64_t value)
	{
		___llVal_4 = value;
	}

	inline static int32_t get_offset_of_lVal_5() { return static_cast<int32_t>(offsetof(Variant_t2753289927, ___lVal_5)); }
	inline int32_t get_lVal_5() const { return ___lVal_5; }
	inline int32_t* get_address_of_lVal_5() { return &___lVal_5; }
	inline void set_lVal_5(int32_t value)
	{
		___lVal_5 = value;
	}

	inline static int32_t get_offset_of_bVal_6() { return static_cast<int32_t>(offsetof(Variant_t2753289927, ___bVal_6)); }
	inline uint8_t get_bVal_6() const { return ___bVal_6; }
	inline uint8_t* get_address_of_bVal_6() { return &___bVal_6; }
	inline void set_bVal_6(uint8_t value)
	{
		___bVal_6 = value;
	}

	inline static int32_t get_offset_of_iVal_7() { return static_cast<int32_t>(offsetof(Variant_t2753289927, ___iVal_7)); }
	inline int16_t get_iVal_7() const { return ___iVal_7; }
	inline int16_t* get_address_of_iVal_7() { return &___iVal_7; }
	inline void set_iVal_7(int16_t value)
	{
		___iVal_7 = value;
	}

	inline static int32_t get_offset_of_fltVal_8() { return static_cast<int32_t>(offsetof(Variant_t2753289927, ___fltVal_8)); }
	inline float get_fltVal_8() const { return ___fltVal_8; }
	inline float* get_address_of_fltVal_8() { return &___fltVal_8; }
	inline void set_fltVal_8(float value)
	{
		___fltVal_8 = value;
	}

	inline static int32_t get_offset_of_dblVal_9() { return static_cast<int32_t>(offsetof(Variant_t2753289927, ___dblVal_9)); }
	inline double get_dblVal_9() const { return ___dblVal_9; }
	inline double* get_address_of_dblVal_9() { return &___dblVal_9; }
	inline void set_dblVal_9(double value)
	{
		___dblVal_9 = value;
	}

	inline static int32_t get_offset_of_boolVal_10() { return static_cast<int32_t>(offsetof(Variant_t2753289927, ___boolVal_10)); }
	inline int16_t get_boolVal_10() const { return ___boolVal_10; }
	inline int16_t* get_address_of_boolVal_10() { return &___boolVal_10; }
	inline void set_boolVal_10(int16_t value)
	{
		___boolVal_10 = value;
	}

	inline static int32_t get_offset_of_bstrVal_11() { return static_cast<int32_t>(offsetof(Variant_t2753289927, ___bstrVal_11)); }
	inline intptr_t get_bstrVal_11() const { return ___bstrVal_11; }
	inline intptr_t* get_address_of_bstrVal_11() { return &___bstrVal_11; }
	inline void set_bstrVal_11(intptr_t value)
	{
		___bstrVal_11 = value;
	}

	inline static int32_t get_offset_of_cVal_12() { return static_cast<int32_t>(offsetof(Variant_t2753289927, ___cVal_12)); }
	inline int8_t get_cVal_12() const { return ___cVal_12; }
	inline int8_t* get_address_of_cVal_12() { return &___cVal_12; }
	inline void set_cVal_12(int8_t value)
	{
		___cVal_12 = value;
	}

	inline static int32_t get_offset_of_uiVal_13() { return static_cast<int32_t>(offsetof(Variant_t2753289927, ___uiVal_13)); }
	inline uint16_t get_uiVal_13() const { return ___uiVal_13; }
	inline uint16_t* get_address_of_uiVal_13() { return &___uiVal_13; }
	inline void set_uiVal_13(uint16_t value)
	{
		___uiVal_13 = value;
	}

	inline static int32_t get_offset_of_ulVal_14() { return static_cast<int32_t>(offsetof(Variant_t2753289927, ___ulVal_14)); }
	inline uint32_t get_ulVal_14() const { return ___ulVal_14; }
	inline uint32_t* get_address_of_ulVal_14() { return &___ulVal_14; }
	inline void set_ulVal_14(uint32_t value)
	{
		___ulVal_14 = value;
	}

	inline static int32_t get_offset_of_ullVal_15() { return static_cast<int32_t>(offsetof(Variant_t2753289927, ___ullVal_15)); }
	inline uint64_t get_ullVal_15() const { return ___ullVal_15; }
	inline uint64_t* get_address_of_ullVal_15() { return &___ullVal_15; }
	inline void set_ullVal_15(uint64_t value)
	{
		___ullVal_15 = value;
	}

	inline static int32_t get_offset_of_intVal_16() { return static_cast<int32_t>(offsetof(Variant_t2753289927, ___intVal_16)); }
	inline int32_t get_intVal_16() const { return ___intVal_16; }
	inline int32_t* get_address_of_intVal_16() { return &___intVal_16; }
	inline void set_intVal_16(int32_t value)
	{
		___intVal_16 = value;
	}

	inline static int32_t get_offset_of_uintVal_17() { return static_cast<int32_t>(offsetof(Variant_t2753289927, ___uintVal_17)); }
	inline uint32_t get_uintVal_17() const { return ___uintVal_17; }
	inline uint32_t* get_address_of_uintVal_17() { return &___uintVal_17; }
	inline void set_uintVal_17(uint32_t value)
	{
		___uintVal_17 = value;
	}

	inline static int32_t get_offset_of_pdispVal_18() { return static_cast<int32_t>(offsetof(Variant_t2753289927, ___pdispVal_18)); }
	inline intptr_t get_pdispVal_18() const { return ___pdispVal_18; }
	inline intptr_t* get_address_of_pdispVal_18() { return &___pdispVal_18; }
	inline void set_pdispVal_18(intptr_t value)
	{
		___pdispVal_18 = value;
	}

	inline static int32_t get_offset_of_bRecord_19() { return static_cast<int32_t>(offsetof(Variant_t2753289927, ___bRecord_19)); }
	inline BRECORD_t3470580684  get_bRecord_19() const { return ___bRecord_19; }
	inline BRECORD_t3470580684 * get_address_of_bRecord_19() { return &___bRecord_19; }
	inline void set_bRecord_19(BRECORD_t3470580684  value)
	{
		___bRecord_19 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // VARIANT_T2753289927_H
#ifndef TYPEINFO_T1690786683_H
#define TYPEINFO_T1690786683_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Reflection.TypeInfo
struct  TypeInfo_t1690786683  : public Type_t
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // TYPEINFO_T1690786683_H
#ifndef RUNTIMETYPE_T3636489352_H
#define RUNTIMETYPE_T3636489352_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.RuntimeType
struct  RuntimeType_t3636489352  : public TypeInfo_t1690786683
{
public:
	// System.MonoTypeInfo System.RuntimeType::type_info
	MonoTypeInfo_t3366989025 * ___type_info_26;
	// System.Object System.RuntimeType::GenericCache
	RuntimeObject * ___GenericCache_27;
	// System.Reflection.RuntimeConstructorInfo System.RuntimeType::m_serializationCtor
	RuntimeConstructorInfo_t1806616898 * ___m_serializationCtor_28;

public:
	inline static int32_t get_offset_of_type_info_26() { return static_cast<int32_t>(offsetof(RuntimeType_t3636489352, ___type_info_26)); }
	inline MonoTypeInfo_t3366989025 * get_type_info_26() const { return ___type_info_26; }
	inline MonoTypeInfo_t3366989025 ** get_address_of_type_info_26() { return &___type_info_26; }
	inline void set_type_info_26(MonoTypeInfo_t3366989025 * value)
	{
		___type_info_26 = value;
		Il2CppCodeGenWriteBarrier((&___type_info_26), value);
	}

	inline static int32_t get_offset_of_GenericCache_27() { return static_cast<int32_t>(offsetof(RuntimeType_t3636489352, ___GenericCache_27)); }
	inline RuntimeObject * get_GenericCache_27() const { return ___GenericCache_27; }
	inline RuntimeObject ** get_address_of_GenericCache_27() { return &___GenericCache_27; }
	inline void set_GenericCache_27(RuntimeObject * value)
	{
		___GenericCache_27 = value;
		Il2CppCodeGenWriteBarrier((&___GenericCache_27), value);
	}

	inline static int32_t get_offset_of_m_serializationCtor_28() { return static_cast<int32_t>(offsetof(RuntimeType_t3636489352, ___m_serializationCtor_28)); }
	inline RuntimeConstructorInfo_t1806616898 * get_m_serializationCtor_28() const { return ___m_serializationCtor_28; }
	inline RuntimeConstructorInfo_t1806616898 ** get_address_of_m_serializationCtor_28() { return &___m_serializationCtor_28; }
	inline void set_m_serializationCtor_28(RuntimeConstructorInfo_t1806616898 * value)
	{
		___m_serializationCtor_28 = value;
		Il2CppCodeGenWriteBarrier((&___m_serializationCtor_28), value);
	}
};

struct RuntimeType_t3636489352_StaticFields
{
public:
	// System.RuntimeType System.RuntimeType::ValueType
	RuntimeType_t3636489352 * ___ValueType_10;
	// System.RuntimeType System.RuntimeType::EnumType
	RuntimeType_t3636489352 * ___EnumType_11;
	// System.RuntimeType System.RuntimeType::ObjectType
	RuntimeType_t3636489352 * ___ObjectType_12;
	// System.RuntimeType System.RuntimeType::StringType
	RuntimeType_t3636489352 * ___StringType_13;
	// System.RuntimeType System.RuntimeType::DelegateType
	RuntimeType_t3636489352 * ___DelegateType_14;
	// System.Type[] System.RuntimeType::s_SICtorParamTypes
	TypeU5BU5D_t3940880105* ___s_SICtorParamTypes_15;
	// System.RuntimeType System.RuntimeType::s_typedRef
	RuntimeType_t3636489352 * ___s_typedRef_25;

public:
	inline static int32_t get_offset_of_ValueType_10() { return static_cast<int32_t>(offsetof(RuntimeType_t3636489352_StaticFields, ___ValueType_10)); }
	inline RuntimeType_t3636489352 * get_ValueType_10() const { return ___ValueType_10; }
	inline RuntimeType_t3636489352 ** get_address_of_ValueType_10() { return &___ValueType_10; }
	inline void set_ValueType_10(RuntimeType_t3636489352 * value)
	{
		___ValueType_10 = value;
		Il2CppCodeGenWriteBarrier((&___ValueType_10), value);
	}

	inline static int32_t get_offset_of_EnumType_11() { return static_cast<int32_t>(offsetof(RuntimeType_t3636489352_StaticFields, ___EnumType_11)); }
	inline RuntimeType_t3636489352 * get_EnumType_11() const { return ___EnumType_11; }
	inline RuntimeType_t3636489352 ** get_address_of_EnumType_11() { return &___EnumType_11; }
	inline void set_EnumType_11(RuntimeType_t3636489352 * value)
	{
		___EnumType_11 = value;
		Il2CppCodeGenWriteBarrier((&___EnumType_11), value);
	}

	inline static int32_t get_offset_of_ObjectType_12() { return static_cast<int32_t>(offsetof(RuntimeType_t3636489352_StaticFields, ___ObjectType_12)); }
	inline RuntimeType_t3636489352 * get_ObjectType_12() const { return ___ObjectType_12; }
	inline RuntimeType_t3636489352 ** get_address_of_ObjectType_12() { return &___ObjectType_12; }
	inline void set_ObjectType_12(RuntimeType_t3636489352 * value)
	{
		___ObjectType_12 = value;
		Il2CppCodeGenWriteBarrier((&___ObjectType_12), value);
	}

	inline static int32_t get_offset_of_StringType_13() { return static_cast<int32_t>(offsetof(RuntimeType_t3636489352_StaticFields, ___StringType_13)); }
	inline RuntimeType_t3636489352 * get_StringType_13() const { return ___StringType_13; }
	inline RuntimeType_t3636489352 ** get_address_of_StringType_13() { return &___StringType_13; }
	inline void set_StringType_13(RuntimeType_t3636489352 * value)
	{
		___StringType_13 = value;
		Il2CppCodeGenWriteBarrier((&___StringType_13), value);
	}

	inline static int32_t get_offset_of_DelegateType_14() { return static_cast<int32_t>(offsetof(RuntimeType_t3636489352_StaticFields, ___DelegateType_14)); }
	inline RuntimeType_t3636489352 * get_DelegateType_14() const { return ___DelegateType_14; }
	inline RuntimeType_t3636489352 ** get_address_of_DelegateType_14() { return &___DelegateType_14; }
	inline void set_DelegateType_14(RuntimeType_t3636489352 * value)
	{
		___DelegateType_14 = value;
		Il2CppCodeGenWriteBarrier((&___DelegateType_14), value);
	}

	inline static int32_t get_offset_of_s_SICtorParamTypes_15() { return static_cast<int32_t>(offsetof(RuntimeType_t3636489352_StaticFields, ___s_SICtorParamTypes_15)); }
	inline TypeU5BU5D_t3940880105* get_s_SICtorParamTypes_15() const { return ___s_SICtorParamTypes_15; }
	inline TypeU5BU5D_t3940880105** get_address_of_s_SICtorParamTypes_15() { return &___s_SICtorParamTypes_15; }
	inline void set_s_SICtorParamTypes_15(TypeU5BU5D_t3940880105* value)
	{
		___s_SICtorParamTypes_15 = value;
		Il2CppCodeGenWriteBarrier((&___s_SICtorParamTypes_15), value);
	}

	inline static int32_t get_offset_of_s_typedRef_25() { return static_cast<int32_t>(offsetof(RuntimeType_t3636489352_StaticFields, ___s_typedRef_25)); }
	inline RuntimeType_t3636489352 * get_s_typedRef_25() const { return ___s_typedRef_25; }
	inline RuntimeType_t3636489352 ** get_address_of_s_typedRef_25() { return &___s_typedRef_25; }
	inline void set_s_typedRef_25(RuntimeType_t3636489352 * value)
	{
		___s_typedRef_25 = value;
		Il2CppCodeGenWriteBarrier((&___s_typedRef_25), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // RUNTIMETYPE_T3636489352_H
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
// System.Char[]
struct CharU5BU5D_t3528271667  : public RuntimeArray
{
public:
	ALIGN_FIELD (8) Il2CppChar m_Items[1];

public:
	inline Il2CppChar GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline Il2CppChar* GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, Il2CppChar value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
	}
	inline Il2CppChar GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline Il2CppChar* GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, Il2CppChar value)
	{
		m_Items[index] = value;
	}
};
// System.String[]
struct StringU5BU5D_t1281789340  : public RuntimeArray
{
public:
	ALIGN_FIELD (8) String_t* m_Items[1];

public:
	inline String_t* GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline String_t** GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, String_t* value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier(m_Items + index, value);
	}
	inline String_t* GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline String_t** GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, String_t* value)
	{
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier(m_Items + index, value);
	}
};

extern "C" void InputRecord_t2660212290_marshal_pinvoke(const InputRecord_t2660212290& unmarshaled, InputRecord_t2660212290_marshaled_pinvoke& marshaled);
extern "C" void InputRecord_t2660212290_marshal_pinvoke_back(const InputRecord_t2660212290_marshaled_pinvoke& marshaled, InputRecord_t2660212290& unmarshaled);
extern "C" void InputRecord_t2660212290_marshal_pinvoke_cleanup(InputRecord_t2660212290_marshaled_pinvoke& marshaled);


// System.Boolean System.ValueTuple::Equals(System.Object)
extern "C" IL2CPP_METHOD_ATTR bool ValueTuple_Equals_m3777586424 (ValueTuple_t3168505507 * __this, RuntimeObject * ___obj0, const RuntimeMethod* method);
// System.Boolean System.ValueTuple::Equals(System.ValueTuple)
extern "C" IL2CPP_METHOD_ATTR bool ValueTuple_Equals_m3868013840 (ValueTuple_t3168505507 * __this, ValueTuple_t3168505507  ___other0, const RuntimeMethod* method);
// System.Boolean System.ValueTuple::System.Collections.IStructuralEquatable.Equals(System.Object,System.Collections.IEqualityComparer)
extern "C" IL2CPP_METHOD_ATTR bool ValueTuple_System_Collections_IStructuralEquatable_Equals_m1158377527 (ValueTuple_t3168505507 * __this, RuntimeObject * ___other0, RuntimeObject* ___comparer1, const RuntimeMethod* method);
// System.Type System.Object::GetType()
extern "C" IL2CPP_METHOD_ATTR Type_t * Object_GetType_m88164663 (RuntimeObject * __this, const RuntimeMethod* method);
// System.String SR::Format(System.String,System.Object)
extern "C" IL2CPP_METHOD_ATTR String_t* SR_Format_m1749913990 (RuntimeObject * __this /* static, unused */, String_t* ___resourceFormat0, RuntimeObject * ___p11, const RuntimeMethod* method);
// System.Void System.ArgumentException::.ctor(System.String,System.String)
extern "C" IL2CPP_METHOD_ATTR void ArgumentException__ctor_m1216717135 (ArgumentException_t132251570 * __this, String_t* ___message0, String_t* ___paramName1, const RuntimeMethod* method);
// System.Int32 System.ValueTuple::System.IComparable.CompareTo(System.Object)
extern "C" IL2CPP_METHOD_ATTR int32_t ValueTuple_System_IComparable_CompareTo_m3152321575 (ValueTuple_t3168505507 * __this, RuntimeObject * ___other0, const RuntimeMethod* method);
// System.Int32 System.ValueTuple::CompareTo(System.ValueTuple)
extern "C" IL2CPP_METHOD_ATTR int32_t ValueTuple_CompareTo_m2936302085 (ValueTuple_t3168505507 * __this, ValueTuple_t3168505507  ___other0, const RuntimeMethod* method);
// System.Int32 System.ValueTuple::System.Collections.IStructuralComparable.CompareTo(System.Object,System.Collections.IComparer)
extern "C" IL2CPP_METHOD_ATTR int32_t ValueTuple_System_Collections_IStructuralComparable_CompareTo_m1147772089 (ValueTuple_t3168505507 * __this, RuntimeObject * ___other0, RuntimeObject* ___comparer1, const RuntimeMethod* method);
// System.Int32 System.ValueTuple::GetHashCode()
extern "C" IL2CPP_METHOD_ATTR int32_t ValueTuple_GetHashCode_m2158739460 (ValueTuple_t3168505507 * __this, const RuntimeMethod* method);
// System.Int32 System.ValueTuple::System.Collections.IStructuralEquatable.GetHashCode(System.Collections.IEqualityComparer)
extern "C" IL2CPP_METHOD_ATTR int32_t ValueTuple_System_Collections_IStructuralEquatable_GetHashCode_m3160204034 (ValueTuple_t3168505507 * __this, RuntimeObject* ___comparer0, const RuntimeMethod* method);
// System.String System.ValueTuple::ToString()
extern "C" IL2CPP_METHOD_ATTR String_t* ValueTuple_ToString_m2213345710 (ValueTuple_t3168505507 * __this, const RuntimeMethod* method);
// System.Int32 System.Numerics.Hashing.HashHelpers::Combine(System.Int32,System.Int32)
extern "C" IL2CPP_METHOD_ATTR int32_t HashHelpers_Combine_m3459330122 (RuntimeObject * __this /* static, unused */, int32_t ___h10, int32_t ___h21, const RuntimeMethod* method);
// System.Void System.Object::.ctor()
extern "C" IL2CPP_METHOD_ATTR void Object__ctor_m297566312 (RuntimeObject * __this, const RuntimeMethod* method);
// System.Boolean System.RuntimeType::op_Inequality(System.RuntimeType,System.RuntimeType)
extern "C" IL2CPP_METHOD_ATTR bool RuntimeType_op_Inequality_m287584116 (RuntimeObject * __this /* static, unused */, RuntimeType_t3636489352 * ___left0, RuntimeType_t3636489352 * ___right1, const RuntimeMethod* method);
// System.Boolean System.ValueType::InternalEquals(System.Object,System.Object,System.Object[]&)
extern "C" IL2CPP_METHOD_ATTR bool ValueType_InternalEquals_m1384040357 (RuntimeObject * __this /* static, unused */, RuntimeObject * ___o10, RuntimeObject * ___o21, ObjectU5BU5D_t2843939325** ___fields2, const RuntimeMethod* method);
// System.Boolean System.ValueType::DefaultEquals(System.Object,System.Object)
extern "C" IL2CPP_METHOD_ATTR bool ValueType_DefaultEquals_m2927252100 (RuntimeObject * __this /* static, unused */, RuntimeObject * ___o10, RuntimeObject * ___o21, const RuntimeMethod* method);
// System.Int32 System.ValueType::InternalGetHashCode(System.Object,System.Object[]&)
extern "C" IL2CPP_METHOD_ATTR int32_t ValueType_InternalGetHashCode_m58786863 (RuntimeObject * __this /* static, unused */, RuntimeObject * ___o0, ObjectU5BU5D_t2843939325** ___fields1, const RuntimeMethod* method);
// System.Void System.Runtime.InteropServices.Marshal::FreeBSTR(System.IntPtr)
extern "C" IL2CPP_METHOD_ATTR void Marshal_FreeBSTR_m2788901813 (RuntimeObject * __this /* static, unused */, intptr_t ___ptr0, const RuntimeMethod* method);
// System.Boolean System.IntPtr::op_Inequality(System.IntPtr,System.IntPtr)
extern "C" IL2CPP_METHOD_ATTR bool IntPtr_op_Inequality_m3063970704 (RuntimeObject * __this /* static, unused */, intptr_t ___value10, intptr_t ___value21, const RuntimeMethod* method);
// System.Int32 System.Runtime.InteropServices.Marshal::Release(System.IntPtr)
extern "C" IL2CPP_METHOD_ATTR int32_t Marshal_Release_m3880542832 (RuntimeObject * __this /* static, unused */, intptr_t ___pUnk0, const RuntimeMethod* method);
// System.Void System.Variant::Clear()
extern "C" IL2CPP_METHOD_ATTR void Variant_Clear_m3388694274 (Variant_t2753289927 * __this, const RuntimeMethod* method);
// System.String System.Environment::GetResourceString(System.String)
extern "C" IL2CPP_METHOD_ATTR String_t* Environment_GetResourceString_m2063689938 (RuntimeObject * __this /* static, unused */, String_t* ___key0, const RuntimeMethod* method);
// System.Void System.ArgumentOutOfRangeException::.ctor(System.String,System.String)
extern "C" IL2CPP_METHOD_ATTR void ArgumentOutOfRangeException__ctor_m282481429 (ArgumentOutOfRangeException_t777629997 * __this, String_t* ___paramName0, String_t* ___message1, const RuntimeMethod* method);
// System.Void System.Version::.ctor()
extern "C" IL2CPP_METHOD_ATTR void Version__ctor_m872301635 (Version_t3456873960 * __this, const RuntimeMethod* method);
// System.Boolean System.Version::op_Equality(System.Version,System.Version)
extern "C" IL2CPP_METHOD_ATTR bool Version_op_Equality_m3804852517 (RuntimeObject * __this /* static, unused */, Version_t3456873960 * ___v10, Version_t3456873960 * ___v21, const RuntimeMethod* method);
// System.Void System.ArgumentException::.ctor(System.String)
extern "C" IL2CPP_METHOD_ATTR void ArgumentException__ctor_m1312628991 (ArgumentException_t132251570 * __this, String_t* ___message0, const RuntimeMethod* method);
// System.String System.Version::ToString(System.Int32)
extern "C" IL2CPP_METHOD_ATTR String_t* Version_ToString_m3654989516 (Version_t3456873960 * __this, int32_t ___fieldCount0, const RuntimeMethod* method);
// System.String System.Int32::ToString()
extern "C" IL2CPP_METHOD_ATTR String_t* Int32_ToString_m141394615 (int32_t* __this, const RuntimeMethod* method);
// System.Text.StringBuilder System.Text.StringBuilderCache::Acquire(System.Int32)
extern "C" IL2CPP_METHOD_ATTR StringBuilder_t * StringBuilderCache_Acquire_m4169564332 (RuntimeObject * __this /* static, unused */, int32_t ___capacity0, const RuntimeMethod* method);
// System.Void System.Version::AppendPositiveNumber(System.Int32,System.Text.StringBuilder)
extern "C" IL2CPP_METHOD_ATTR void Version_AppendPositiveNumber_m308762805 (RuntimeObject * __this /* static, unused */, int32_t ___num0, StringBuilder_t * ___sb1, const RuntimeMethod* method);
// System.Text.StringBuilder System.Text.StringBuilder::Append(System.Char)
extern "C" IL2CPP_METHOD_ATTR StringBuilder_t * StringBuilder_Append_m2383614642 (StringBuilder_t * __this, Il2CppChar ___value0, const RuntimeMethod* method);
// System.String System.Text.StringBuilderCache::GetStringAndRelease(System.Text.StringBuilder)
extern "C" IL2CPP_METHOD_ATTR String_t* StringBuilderCache_GetStringAndRelease_m1110745745 (RuntimeObject * __this /* static, unused */, StringBuilder_t * ___sb0, const RuntimeMethod* method);
// System.String System.Environment::GetResourceString(System.String,System.Object[])
extern "C" IL2CPP_METHOD_ATTR String_t* Environment_GetResourceString_m479507158 (RuntimeObject * __this /* static, unused */, String_t* ___key0, ObjectU5BU5D_t2843939325* ___values1, const RuntimeMethod* method);
// System.Int32 System.Text.StringBuilder::get_Length()
extern "C" IL2CPP_METHOD_ATTR int32_t StringBuilder_get_Length_m3238060835 (StringBuilder_t * __this, const RuntimeMethod* method);
// System.Text.StringBuilder System.Text.StringBuilder::Insert(System.Int32,System.Char)
extern "C" IL2CPP_METHOD_ATTR StringBuilder_t * StringBuilder_Insert_m1076119876 (StringBuilder_t * __this, int32_t ___index0, Il2CppChar ___value1, const RuntimeMethod* method);
// System.Boolean System.Version::Equals(System.Version)
extern "C" IL2CPP_METHOD_ATTR bool Version_Equals_m1564427710 (Version_t3456873960 * __this, Version_t3456873960 * ___obj0, const RuntimeMethod* method);
// System.Runtime.InteropServices.GCHandle System.Runtime.InteropServices.GCHandle::Alloc(System.Object,System.Runtime.InteropServices.GCHandleType)
extern "C" IL2CPP_METHOD_ATTR GCHandle_t3351438187  GCHandle_Alloc_m3823409740 (RuntimeObject * __this /* static, unused */, RuntimeObject * ___value0, int32_t ___type1, const RuntimeMethod* method);
// System.Void System.WeakReference::.ctor(System.Object,System.Boolean)
extern "C" IL2CPP_METHOD_ATTR void WeakReference__ctor_m1054065938 (WeakReference_t1334886716 * __this, RuntimeObject * ___target0, bool ___trackResurrection1, const RuntimeMethod* method);
// System.Void System.WeakReference::AllocateHandle(System.Object)
extern "C" IL2CPP_METHOD_ATTR void WeakReference_AllocateHandle_m1478975559 (WeakReference_t1334886716 * __this, RuntimeObject * ___target0, const RuntimeMethod* method);
// System.Void System.ArgumentNullException::.ctor(System.String)
extern "C" IL2CPP_METHOD_ATTR void ArgumentNullException__ctor_m1170824041 (ArgumentNullException_t1615371798 * __this, String_t* ___paramName0, const RuntimeMethod* method);
// System.Boolean System.Runtime.Serialization.SerializationInfo::GetBoolean(System.String)
extern "C" IL2CPP_METHOD_ATTR bool SerializationInfo_GetBoolean_m1756153320 (SerializationInfo_t950877179 * __this, String_t* ___name0, const RuntimeMethod* method);
// System.Type System.Type::GetTypeFromHandle(System.RuntimeTypeHandle)
extern "C" IL2CPP_METHOD_ATTR Type_t * Type_GetTypeFromHandle_m1620074514 (RuntimeObject * __this /* static, unused */, RuntimeTypeHandle_t3027515415  ___handle0, const RuntimeMethod* method);
// System.Object System.Runtime.Serialization.SerializationInfo::GetValue(System.String,System.Type)
extern "C" IL2CPP_METHOD_ATTR RuntimeObject * SerializationInfo_GetValue_m42271953 (SerializationInfo_t950877179 * __this, String_t* ___name0, Type_t * ___type1, const RuntimeMethod* method);
// System.Boolean System.Runtime.InteropServices.GCHandle::get_IsAllocated()
extern "C" IL2CPP_METHOD_ATTR bool GCHandle_get_IsAllocated_m1058226959 (GCHandle_t3351438187 * __this, const RuntimeMethod* method);
// System.Object System.Runtime.InteropServices.GCHandle::get_Target()
extern "C" IL2CPP_METHOD_ATTR RuntimeObject * GCHandle_get_Target_m1824973883 (GCHandle_t3351438187 * __this, const RuntimeMethod* method);
// System.Void System.Runtime.InteropServices.GCHandle::Free()
extern "C" IL2CPP_METHOD_ATTR void GCHandle_Free_m1457699368 (GCHandle_t3351438187 * __this, const RuntimeMethod* method);
// System.Void System.Object::Finalize()
extern "C" IL2CPP_METHOD_ATTR void Object_Finalize_m3076187857 (RuntimeObject * __this, const RuntimeMethod* method);
// System.Void System.Runtime.Serialization.SerializationInfo::AddValue(System.String,System.Boolean)
extern "C" IL2CPP_METHOD_ATTR void SerializationInfo_AddValue_m3427199315 (SerializationInfo_t950877179 * __this, String_t* ___name0, bool ___value1, const RuntimeMethod* method);
// System.Void System.Runtime.Serialization.SerializationInfo::AddValue(System.String,System.Object)
extern "C" IL2CPP_METHOD_ATTR void SerializationInfo_AddValue_m2872281893 (SerializationInfo_t950877179 * __this, String_t* ___name0, RuntimeObject * ___value1, const RuntimeMethod* method);
// System.IntPtr System.WindowsConsoleDriver::GetStdHandle(System.Handles)
extern "C" IL2CPP_METHOD_ATTR intptr_t WindowsConsoleDriver_GetStdHandle_m23119533 (RuntimeObject * __this /* static, unused */, int32_t ___handle0, const RuntimeMethod* method);
// System.Boolean System.WindowsConsoleDriver::GetConsoleScreenBufferInfo(System.IntPtr,System.ConsoleScreenBufferInfo&)
extern "C" IL2CPP_METHOD_ATTR bool WindowsConsoleDriver_GetConsoleScreenBufferInfo_m3609341087 (RuntimeObject * __this /* static, unused */, intptr_t ___handle0, ConsoleScreenBufferInfo_t3095351730 * ___info1, const RuntimeMethod* method);
// System.Boolean System.WindowsConsoleDriver::ReadConsoleInput(System.IntPtr,System.InputRecord&,System.Int32,System.Int32&)
extern "C" IL2CPP_METHOD_ATTR bool WindowsConsoleDriver_ReadConsoleInput_m1790694890 (RuntimeObject * __this /* static, unused */, intptr_t ___handle0, InputRecord_t2660212290 * ___record1, int32_t ___length2, int32_t* ___nread3, const RuntimeMethod* method);
// System.Int32 System.Runtime.InteropServices.Marshal::GetLastWin32Error()
extern "C" IL2CPP_METHOD_ATTR int32_t Marshal_GetLastWin32Error_m1272610344 (RuntimeObject * __this /* static, unused */, const RuntimeMethod* method);
// System.String System.String::Concat(System.Object,System.Object)
extern "C" IL2CPP_METHOD_ATTR String_t* String_Concat_m904156431 (RuntimeObject * __this /* static, unused */, RuntimeObject * ___arg00, RuntimeObject * ___arg11, const RuntimeMethod* method);
// System.Void System.InvalidOperationException::.ctor(System.String)
extern "C" IL2CPP_METHOD_ATTR void InvalidOperationException__ctor_m237278729 (InvalidOperationException_t56020091 * __this, String_t* ___message0, const RuntimeMethod* method);
// System.Boolean System.WindowsConsoleDriver::IsModifierKey(System.Int16)
extern "C" IL2CPP_METHOD_ATTR bool WindowsConsoleDriver_IsModifierKey_m1974886538 (RuntimeObject * __this /* static, unused */, int16_t ___virtualKeyCode0, const RuntimeMethod* method);
// System.Void System.ConsoleKeyInfo::.ctor(System.Char,System.ConsoleKey,System.Boolean,System.Boolean,System.Boolean)
extern "C" IL2CPP_METHOD_ATTR void ConsoleKeyInfo__ctor_m535940175 (ConsoleKeyInfo_t1802691652 * __this, Il2CppChar ___keyChar0, int32_t ___key1, bool ___shift2, bool ___alt3, bool ___control4, const RuntimeMethod* method);
// System.Void System.NotSupportedException::.ctor()
extern "C" IL2CPP_METHOD_ATTR void NotSupportedException__ctor_m2730133172 (NotSupportedException_t1314879016 * __this, const RuntimeMethod* method);
// System.Void System.__DTString::.ctor(System.String,System.Globalization.DateTimeFormatInfo)
extern "C" IL2CPP_METHOD_ATTR void __DTString__ctor_m4216323856 (__DTString_t2014593278 * __this, String_t* ___str0, DateTimeFormatInfo_t2405853701 * ___dtfi1, const RuntimeMethod* method);
// System.Void System.__DTString::.ctor(System.String,System.Globalization.DateTimeFormatInfo,System.Boolean)
extern "C" IL2CPP_METHOD_ATTR void __DTString__ctor_m2897552437 (__DTString_t2014593278 * __this, String_t* ___str0, DateTimeFormatInfo_t2405853701 * ___dtfi1, bool ___checkDigitToken2, const RuntimeMethod* method);
// System.Int32 System.String::get_Length()
extern "C" IL2CPP_METHOD_ATTR int32_t String_get_Length_m3847582255 (String_t* __this, const RuntimeMethod* method);
// System.Globalization.CompareInfo System.Globalization.DateTimeFormatInfo::get_CompareInfo()
extern "C" IL2CPP_METHOD_ATTR CompareInfo_t1092934962 * DateTimeFormatInfo_get_CompareInfo_m2732307212 (DateTimeFormatInfo_t2405853701 * __this, const RuntimeMethod* method);
// System.Globalization.DateTimeFormatFlags System.Globalization.DateTimeFormatInfo::get_FormatFlags()
extern "C" IL2CPP_METHOD_ATTR int32_t DateTimeFormatInfo_get_FormatFlags_m1385434814 (DateTimeFormatInfo_t2405853701 * __this, const RuntimeMethod* method);
// System.Threading.Thread System.Threading.Thread::get_CurrentThread()
extern "C" IL2CPP_METHOD_ATTR Thread_t2300836069 * Thread_get_CurrentThread_m4142136012 (RuntimeObject * __this /* static, unused */, const RuntimeMethod* method);
// System.Globalization.CultureInfo System.Threading.Thread::get_CurrentCulture()
extern "C" IL2CPP_METHOD_ATTR CultureInfo_t4157843068 * Thread_get_CurrentCulture_m349116646 (Thread_t2300836069 * __this, const RuntimeMethod* method);
// System.Globalization.CompareInfo System.__DTString::get_CompareInfo()
extern "C" IL2CPP_METHOD_ATTR CompareInfo_t1092934962 * __DTString_get_CompareInfo_m3716528085 (__DTString_t2014593278 * __this, const RuntimeMethod* method);
// System.Char System.String::get_Chars(System.Int32)
extern "C" IL2CPP_METHOD_ATTR Il2CppChar String_get_Chars_m2986988803 (String_t* __this, int32_t ___index0, const RuntimeMethod* method);
// System.Boolean System.__DTString::GetNext()
extern "C" IL2CPP_METHOD_ATTR bool __DTString_GetNext_m3216272439 (__DTString_t2014593278 * __this, const RuntimeMethod* method);
// System.Boolean System.__DTString::AtEnd()
extern "C" IL2CPP_METHOD_ATTR bool __DTString_AtEnd_m4056853577 (__DTString_t2014593278 * __this, const RuntimeMethod* method);
// System.Boolean System.__DTString::Advance(System.Int32)
extern "C" IL2CPP_METHOD_ATTR bool __DTString_Advance_m3393158789 (__DTString_t2014593278 * __this, int32_t ___count0, const RuntimeMethod* method);
// System.Boolean System.DateTimeParse::IsDigit(System.Char)
extern "C" IL2CPP_METHOD_ATTR bool DateTimeParse_IsDigit_m3727153098 (RuntimeObject * __this /* static, unused */, Il2CppChar ___ch0, const RuntimeMethod* method);
// System.Boolean System.Globalization.DateTimeFormatInfo::Tokenize(System.TokenType,System.TokenType&,System.Int32&,System.__DTString&)
extern "C" IL2CPP_METHOD_ATTR bool DateTimeFormatInfo_Tokenize_m4098328262 (DateTimeFormatInfo_t2405853701 * __this, int32_t ___TokenMask0, int32_t* ___tokenType1, int32_t* ___tokenValue2, __DTString_t2014593278 * ___str3, const RuntimeMethod* method);
// System.Boolean System.Char::IsWhiteSpace(System.Char)
extern "C" IL2CPP_METHOD_ATTR bool Char_IsWhiteSpace_m2148390798 (RuntimeObject * __this /* static, unused */, Il2CppChar ___c0, const RuntimeMethod* method);
// System.Void System.__DTString::GetRegularToken(System.TokenType&,System.Int32&,System.Globalization.DateTimeFormatInfo)
extern "C" IL2CPP_METHOD_ATTR void __DTString_GetRegularToken_m3127405658 (__DTString_t2014593278 * __this, int32_t* ___tokenType0, int32_t* ___tokenValue1, DateTimeFormatInfo_t2405853701 * ___dtfi2, const RuntimeMethod* method);
// System.Boolean System.__DTString::SkipWhiteSpaceCurrent()
extern "C" IL2CPP_METHOD_ATTR bool __DTString_SkipWhiteSpaceCurrent_m2113872575 (__DTString_t2014593278 * __this, const RuntimeMethod* method);
// System.TokenType System.__DTString::GetSeparatorToken(System.Globalization.DateTimeFormatInfo,System.Int32&,System.Char&)
extern "C" IL2CPP_METHOD_ATTR int32_t __DTString_GetSeparatorToken_m2062126902 (__DTString_t2014593278 * __this, DateTimeFormatInfo_t2405853701 * ___dtfi0, int32_t* ___indexBeforeSeparator1, Il2CppChar* ___charBeforeSeparator2, const RuntimeMethod* method);
// System.Boolean System.__DTString::MatchSpecifiedWord(System.String,System.Int32)
extern "C" IL2CPP_METHOD_ATTR bool __DTString_MatchSpecifiedWord_m3597025336 (__DTString_t2014593278 * __this, String_t* ___target0, int32_t ___endIndex1, const RuntimeMethod* method);
// System.Boolean System.__DTString::MatchSpecifiedWord(System.String)
extern "C" IL2CPP_METHOD_ATTR bool __DTString_MatchSpecifiedWord_m2455863005 (__DTString_t2014593278 * __this, String_t* ___target0, const RuntimeMethod* method);
// System.Int32 System.String::IndexOfAny(System.Char[],System.Int32)
extern "C" IL2CPP_METHOD_ATTR int32_t String_IndexOfAny_m2323029521 (String_t* __this, CharU5BU5D_t3528271667* ___anyOf0, int32_t ___startIndex1, const RuntimeMethod* method);
// System.Boolean System.Char::IsLetter(System.Char)
extern "C" IL2CPP_METHOD_ATTR bool Char_IsLetter_m3996985877 (RuntimeObject * __this /* static, unused */, Il2CppChar ___c0, const RuntimeMethod* method);
// System.Boolean System.__DTString::MatchSpecifiedWords(System.String,System.Boolean,System.Int32&)
extern "C" IL2CPP_METHOD_ATTR bool __DTString_MatchSpecifiedWords_m1748097800 (__DTString_t2014593278 * __this, String_t* ___target0, bool ___checkWordBoundary1, int32_t* ___matchLength2, const RuntimeMethod* method);
// System.Boolean System.__DTString::Match(System.String)
extern "C" IL2CPP_METHOD_ATTR bool __DTString_Match_m1370723662 (__DTString_t2014593278 * __this, String_t* ___str0, const RuntimeMethod* method);
// System.Boolean System.__DTString::Match(System.Char)
extern "C" IL2CPP_METHOD_ATTR bool __DTString_Match_m1638998693 (__DTString_t2014593278 * __this, Il2CppChar ___ch0, const RuntimeMethod* method);
// System.Int32 System.__DTString::MatchLongestWords(System.String[],System.Int32&)
extern "C" IL2CPP_METHOD_ATTR int32_t __DTString_MatchLongestWords_m3768057568 (__DTString_t2014593278 * __this, StringU5BU5D_t1281789340* ___words0, int32_t* ___maxMatchStrLen1, const RuntimeMethod* method);
// System.Int32 System.__DTString::GetRepeatCount()
extern "C" IL2CPP_METHOD_ATTR int32_t __DTString_GetRepeatCount_m2245750089 (__DTString_t2014593278 * __this, const RuntimeMethod* method);
// System.Boolean System.__DTString::GetNextDigit()
extern "C" IL2CPP_METHOD_ATTR bool __DTString_GetNextDigit_m3564891386 (__DTString_t2014593278 * __this, const RuntimeMethod* method);
// System.Char System.__DTString::GetChar()
extern "C" IL2CPP_METHOD_ATTR Il2CppChar __DTString_GetChar_m1238696822 (__DTString_t2014593278 * __this, const RuntimeMethod* method);
// System.Int32 System.__DTString::GetDigit()
extern "C" IL2CPP_METHOD_ATTR int32_t __DTString_GetDigit_m3018404824 (__DTString_t2014593278 * __this, const RuntimeMethod* method);
// System.Void System.__DTString::SkipWhiteSpaces()
extern "C" IL2CPP_METHOD_ATTR void __DTString_SkipWhiteSpaces_m2053058269 (__DTString_t2014593278 * __this, const RuntimeMethod* method);
// System.String System.String::Substring(System.Int32,System.Int32)
extern "C" IL2CPP_METHOD_ATTR String_t* String_Substring_m1610150815 (String_t* __this, int32_t ___startIndex0, int32_t ___length1, const RuntimeMethod* method);
// System.Void System.__DTString::TrimTail()
extern "C" IL2CPP_METHOD_ATTR void __DTString_TrimTail_m653960243 (__DTString_t2014593278 * __this, const RuntimeMethod* method);
// System.String System.String::Remove(System.Int32,System.Int32)
extern "C" IL2CPP_METHOD_ATTR String_t* String_Remove_m562998446 (String_t* __this, int32_t ___startIndex0, int32_t ___count1, const RuntimeMethod* method);
// System.Void System.__DTString::RemoveTrailingInQuoteSpaces()
extern "C" IL2CPP_METHOD_ATTR void __DTString_RemoveTrailingInQuoteSpaces_m4285619600 (__DTString_t2014593278 * __this, const RuntimeMethod* method);
// System.Void System.__DTString::RemoveLeadingInQuoteSpaces()
extern "C" IL2CPP_METHOD_ATTR void __DTString_RemoveLeadingInQuoteSpaces_m695439123 (__DTString_t2014593278 * __this, const RuntimeMethod* method);
// System.DTSubString System.__DTString::GetSubString()
extern "C" IL2CPP_METHOD_ATTR DTSubString_t967826655  __DTString_GetSubString_m2408595494 (__DTString_t2014593278 * __this, const RuntimeMethod* method);
// System.Void System.__DTString::ConsumeSubString(System.DTSubString)
extern "C" IL2CPP_METHOD_ATTR void __DTString_ConsumeSubString_m4032894792 (__DTString_t2014593278 * __this, DTSubString_t967826655  ___sub0, const RuntimeMethod* method);
// System.Void System.Reflection.InvalidFilterCriteriaException::.ctor(System.String)
extern "C" IL2CPP_METHOD_ATTR void InvalidFilterCriteriaException__ctor_m948508901 (InvalidFilterCriteriaException_t2427731508 * __this, String_t* ___message0, const RuntimeMethod* method);
// System.String System.String::Trim()
extern "C" IL2CPP_METHOD_ATTR String_t* String_Trim_m923598732 (String_t* __this, const RuntimeMethod* method);
// System.Int32 System.String::LastIndexOf(System.Char)
extern "C" IL2CPP_METHOD_ATTR int32_t String_LastIndexOf_m3451222878 (String_t* __this, Il2CppChar ___value0, const RuntimeMethod* method);
// System.String System.String::Substring(System.Int32)
extern "C" IL2CPP_METHOD_ATTR String_t* String_Substring_m2848979100 (String_t* __this, int32_t ___startIndex0, const RuntimeMethod* method);
// System.Boolean System.String::StartsWith(System.String,System.StringComparison)
extern "C" IL2CPP_METHOD_ATTR bool String_StartsWith_m2640722675 (String_t* __this, String_t* ___value0, int32_t ___comparisonType1, const RuntimeMethod* method);
// System.Boolean System.String::Equals(System.String)
extern "C" IL2CPP_METHOD_ATTR bool String_Equals_m2270643605 (String_t* __this, String_t* ___value0, const RuntimeMethod* method);
// System.Int32 System.String::Compare(System.String,System.Int32,System.String,System.Int32,System.Int32,System.StringComparison)
extern "C" IL2CPP_METHOD_ATTR int32_t String_Compare_m1966407346 (RuntimeObject * __this /* static, unused */, String_t* ___strA0, int32_t ___indexA1, String_t* ___strB2, int32_t ___indexB3, int32_t ___length4, int32_t ___comparisonType5, const RuntimeMethod* method);
// System.Int32 System.String::Compare(System.String,System.String,System.StringComparison)
extern "C" IL2CPP_METHOD_ATTR int32_t String_Compare_m3203413707 (RuntimeObject * __this /* static, unused */, String_t* ___strA0, String_t* ___strB1, int32_t ___comparisonType2, const RuntimeMethod* method);
// System.Void System.__Filters::.ctor()
extern "C" IL2CPP_METHOD_ATTR void __Filters__ctor_m4259786029 (__Filters_t550753867 * __this, const RuntimeMethod* method);
// System.Void System.__Il2CppComObject::Finalize()
extern "C" IL2CPP_METHOD_ATTR void __Il2CppComObject_Finalize_m2923638372 (Il2CppComObject * __this, const RuntimeMethod* method);
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Boolean System.ValueTuple::Equals(System.Object)
extern "C" IL2CPP_METHOD_ATTR bool ValueTuple_Equals_m3777586424 (ValueTuple_t3168505507 * __this, RuntimeObject * ___obj0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (ValueTuple_Equals_m3777586424_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		RuntimeObject * L_0 = ___obj0;
		return (bool)((!(((RuntimeObject*)(RuntimeObject *)((RuntimeObject *)IsInstSealed((RuntimeObject*)L_0, ValueTuple_t3168505507_il2cpp_TypeInfo_var))) <= ((RuntimeObject*)(RuntimeObject *)NULL)))? 1 : 0);
	}
}
extern "C"  bool ValueTuple_Equals_m3777586424_AdjustorThunk (RuntimeObject * __this, RuntimeObject * ___obj0, const RuntimeMethod* method)
{
	ValueTuple_t3168505507 * _thisAdjusted = reinterpret_cast<ValueTuple_t3168505507 *>(__this + 1);
	return ValueTuple_Equals_m3777586424(_thisAdjusted, ___obj0, method);
}
// System.Boolean System.ValueTuple::Equals(System.ValueTuple)
extern "C" IL2CPP_METHOD_ATTR bool ValueTuple_Equals_m3868013840 (ValueTuple_t3168505507 * __this, ValueTuple_t3168505507  ___other0, const RuntimeMethod* method)
{
	{
		return (bool)1;
	}
}
extern "C"  bool ValueTuple_Equals_m3868013840_AdjustorThunk (RuntimeObject * __this, ValueTuple_t3168505507  ___other0, const RuntimeMethod* method)
{
	ValueTuple_t3168505507 * _thisAdjusted = reinterpret_cast<ValueTuple_t3168505507 *>(__this + 1);
	return ValueTuple_Equals_m3868013840(_thisAdjusted, ___other0, method);
}
// System.Boolean System.ValueTuple::System.Collections.IStructuralEquatable.Equals(System.Object,System.Collections.IEqualityComparer)
extern "C" IL2CPP_METHOD_ATTR bool ValueTuple_System_Collections_IStructuralEquatable_Equals_m1158377527 (ValueTuple_t3168505507 * __this, RuntimeObject * ___other0, RuntimeObject* ___comparer1, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (ValueTuple_System_Collections_IStructuralEquatable_Equals_m1158377527_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		RuntimeObject * L_0 = ___other0;
		return (bool)((!(((RuntimeObject*)(RuntimeObject *)((RuntimeObject *)IsInstSealed((RuntimeObject*)L_0, ValueTuple_t3168505507_il2cpp_TypeInfo_var))) <= ((RuntimeObject*)(RuntimeObject *)NULL)))? 1 : 0);
	}
}
extern "C"  bool ValueTuple_System_Collections_IStructuralEquatable_Equals_m1158377527_AdjustorThunk (RuntimeObject * __this, RuntimeObject * ___other0, RuntimeObject* ___comparer1, const RuntimeMethod* method)
{
	ValueTuple_t3168505507 * _thisAdjusted = reinterpret_cast<ValueTuple_t3168505507 *>(__this + 1);
	return ValueTuple_System_Collections_IStructuralEquatable_Equals_m1158377527(_thisAdjusted, ___other0, ___comparer1, method);
}
// System.Int32 System.ValueTuple::System.IComparable.CompareTo(System.Object)
extern "C" IL2CPP_METHOD_ATTR int32_t ValueTuple_System_IComparable_CompareTo_m3152321575 (ValueTuple_t3168505507 * __this, RuntimeObject * ___other0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (ValueTuple_System_IComparable_CompareTo_m3152321575_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		RuntimeObject * L_0 = ___other0;
		if (L_0)
		{
			goto IL_0005;
		}
	}
	{
		return 1;
	}

IL_0005:
	{
		RuntimeObject * L_1 = ___other0;
		if (((RuntimeObject *)IsInstSealed((RuntimeObject*)L_1, ValueTuple_t3168505507_il2cpp_TypeInfo_var)))
		{
			goto IL_0037;
		}
	}
	{
		ValueTuple_t3168505507  L_2 = (*(ValueTuple_t3168505507 *)__this);
		RuntimeObject * L_3 = Box(ValueTuple_t3168505507_il2cpp_TypeInfo_var, &L_2);
		Type_t * L_4 = Object_GetType_m88164663(L_3, /*hidden argument*/NULL);
		String_t* L_5 = VirtFuncInvoker0< String_t* >::Invoke(3 /* System.String System.Object::ToString() */, L_4);
		String_t* L_6 = SR_Format_m1749913990(NULL /*static, unused*/, _stringLiteral4055290125, L_5, /*hidden argument*/NULL);
		ArgumentException_t132251570 * L_7 = (ArgumentException_t132251570 *)il2cpp_codegen_object_new(ArgumentException_t132251570_il2cpp_TypeInfo_var);
		ArgumentException__ctor_m1216717135(L_7, L_6, _stringLiteral2432405111, /*hidden argument*/NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_7, NULL, ValueTuple_System_IComparable_CompareTo_m3152321575_RuntimeMethod_var);
	}

IL_0037:
	{
		return 0;
	}
}
extern "C"  int32_t ValueTuple_System_IComparable_CompareTo_m3152321575_AdjustorThunk (RuntimeObject * __this, RuntimeObject * ___other0, const RuntimeMethod* method)
{
	ValueTuple_t3168505507 * _thisAdjusted = reinterpret_cast<ValueTuple_t3168505507 *>(__this + 1);
	return ValueTuple_System_IComparable_CompareTo_m3152321575(_thisAdjusted, ___other0, method);
}
// System.Int32 System.ValueTuple::CompareTo(System.ValueTuple)
extern "C" IL2CPP_METHOD_ATTR int32_t ValueTuple_CompareTo_m2936302085 (ValueTuple_t3168505507 * __this, ValueTuple_t3168505507  ___other0, const RuntimeMethod* method)
{
	{
		return 0;
	}
}
extern "C"  int32_t ValueTuple_CompareTo_m2936302085_AdjustorThunk (RuntimeObject * __this, ValueTuple_t3168505507  ___other0, const RuntimeMethod* method)
{
	ValueTuple_t3168505507 * _thisAdjusted = reinterpret_cast<ValueTuple_t3168505507 *>(__this + 1);
	return ValueTuple_CompareTo_m2936302085(_thisAdjusted, ___other0, method);
}
// System.Int32 System.ValueTuple::System.Collections.IStructuralComparable.CompareTo(System.Object,System.Collections.IComparer)
extern "C" IL2CPP_METHOD_ATTR int32_t ValueTuple_System_Collections_IStructuralComparable_CompareTo_m1147772089 (ValueTuple_t3168505507 * __this, RuntimeObject * ___other0, RuntimeObject* ___comparer1, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (ValueTuple_System_Collections_IStructuralComparable_CompareTo_m1147772089_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		RuntimeObject * L_0 = ___other0;
		if (L_0)
		{
			goto IL_0005;
		}
	}
	{
		return 1;
	}

IL_0005:
	{
		RuntimeObject * L_1 = ___other0;
		if (((RuntimeObject *)IsInstSealed((RuntimeObject*)L_1, ValueTuple_t3168505507_il2cpp_TypeInfo_var)))
		{
			goto IL_0037;
		}
	}
	{
		ValueTuple_t3168505507  L_2 = (*(ValueTuple_t3168505507 *)__this);
		RuntimeObject * L_3 = Box(ValueTuple_t3168505507_il2cpp_TypeInfo_var, &L_2);
		Type_t * L_4 = Object_GetType_m88164663(L_3, /*hidden argument*/NULL);
		String_t* L_5 = VirtFuncInvoker0< String_t* >::Invoke(3 /* System.String System.Object::ToString() */, L_4);
		String_t* L_6 = SR_Format_m1749913990(NULL /*static, unused*/, _stringLiteral4055290125, L_5, /*hidden argument*/NULL);
		ArgumentException_t132251570 * L_7 = (ArgumentException_t132251570 *)il2cpp_codegen_object_new(ArgumentException_t132251570_il2cpp_TypeInfo_var);
		ArgumentException__ctor_m1216717135(L_7, L_6, _stringLiteral2432405111, /*hidden argument*/NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_7, NULL, ValueTuple_System_Collections_IStructuralComparable_CompareTo_m1147772089_RuntimeMethod_var);
	}

IL_0037:
	{
		return 0;
	}
}
extern "C"  int32_t ValueTuple_System_Collections_IStructuralComparable_CompareTo_m1147772089_AdjustorThunk (RuntimeObject * __this, RuntimeObject * ___other0, RuntimeObject* ___comparer1, const RuntimeMethod* method)
{
	ValueTuple_t3168505507 * _thisAdjusted = reinterpret_cast<ValueTuple_t3168505507 *>(__this + 1);
	return ValueTuple_System_Collections_IStructuralComparable_CompareTo_m1147772089(_thisAdjusted, ___other0, ___comparer1, method);
}
// System.Int32 System.ValueTuple::GetHashCode()
extern "C" IL2CPP_METHOD_ATTR int32_t ValueTuple_GetHashCode_m2158739460 (ValueTuple_t3168505507 * __this, const RuntimeMethod* method)
{
	{
		return 0;
	}
}
extern "C"  int32_t ValueTuple_GetHashCode_m2158739460_AdjustorThunk (RuntimeObject * __this, const RuntimeMethod* method)
{
	ValueTuple_t3168505507 * _thisAdjusted = reinterpret_cast<ValueTuple_t3168505507 *>(__this + 1);
	return ValueTuple_GetHashCode_m2158739460(_thisAdjusted, method);
}
// System.Int32 System.ValueTuple::System.Collections.IStructuralEquatable.GetHashCode(System.Collections.IEqualityComparer)
extern "C" IL2CPP_METHOD_ATTR int32_t ValueTuple_System_Collections_IStructuralEquatable_GetHashCode_m3160204034 (ValueTuple_t3168505507 * __this, RuntimeObject* ___comparer0, const RuntimeMethod* method)
{
	{
		return 0;
	}
}
extern "C"  int32_t ValueTuple_System_Collections_IStructuralEquatable_GetHashCode_m3160204034_AdjustorThunk (RuntimeObject * __this, RuntimeObject* ___comparer0, const RuntimeMethod* method)
{
	ValueTuple_t3168505507 * _thisAdjusted = reinterpret_cast<ValueTuple_t3168505507 *>(__this + 1);
	return ValueTuple_System_Collections_IStructuralEquatable_GetHashCode_m3160204034(_thisAdjusted, ___comparer0, method);
}
// System.String System.ValueTuple::ToString()
extern "C" IL2CPP_METHOD_ATTR String_t* ValueTuple_ToString_m2213345710 (ValueTuple_t3168505507 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (ValueTuple_ToString_m2213345710_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		return _stringLiteral3450976136;
	}
}
extern "C"  String_t* ValueTuple_ToString_m2213345710_AdjustorThunk (RuntimeObject * __this, const RuntimeMethod* method)
{
	ValueTuple_t3168505507 * _thisAdjusted = reinterpret_cast<ValueTuple_t3168505507 *>(__this + 1);
	return ValueTuple_ToString_m2213345710(_thisAdjusted, method);
}
// System.Int32 System.ValueTuple::CombineHashCodes(System.Int32,System.Int32)
extern "C" IL2CPP_METHOD_ATTR int32_t ValueTuple_CombineHashCodes_m2782652282 (RuntimeObject * __this /* static, unused */, int32_t ___h10, int32_t ___h21, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (ValueTuple_CombineHashCodes_m2782652282_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		IL2CPP_RUNTIME_CLASS_INIT(HashHelpers_t1653534276_il2cpp_TypeInfo_var);
		int32_t L_0 = ((HashHelpers_t1653534276_StaticFields*)il2cpp_codegen_static_fields_for(HashHelpers_t1653534276_il2cpp_TypeInfo_var))->get_RandomSeed_0();
		int32_t L_1 = ___h10;
		int32_t L_2 = HashHelpers_Combine_m3459330122(NULL /*static, unused*/, L_0, L_1, /*hidden argument*/NULL);
		int32_t L_3 = ___h21;
		int32_t L_4 = HashHelpers_Combine_m3459330122(NULL /*static, unused*/, L_2, L_3, /*hidden argument*/NULL);
		return L_4;
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
// Conversion methods for marshalling of: System.ValueType
extern "C" void ValueType_t3640485471_marshal_pinvoke(const ValueType_t3640485471& unmarshaled, ValueType_t3640485471_marshaled_pinvoke& marshaled)
{
}
extern "C" void ValueType_t3640485471_marshal_pinvoke_back(const ValueType_t3640485471_marshaled_pinvoke& marshaled, ValueType_t3640485471& unmarshaled)
{
}
// Conversion method for clean up from marshalling of: System.ValueType
extern "C" void ValueType_t3640485471_marshal_pinvoke_cleanup(ValueType_t3640485471_marshaled_pinvoke& marshaled)
{
}
// Conversion methods for marshalling of: System.ValueType
extern "C" void ValueType_t3640485471_marshal_com(const ValueType_t3640485471& unmarshaled, ValueType_t3640485471_marshaled_com& marshaled)
{
}
extern "C" void ValueType_t3640485471_marshal_com_back(const ValueType_t3640485471_marshaled_com& marshaled, ValueType_t3640485471& unmarshaled)
{
}
// Conversion method for clean up from marshalling of: System.ValueType
extern "C" void ValueType_t3640485471_marshal_com_cleanup(ValueType_t3640485471_marshaled_com& marshaled)
{
}
// System.Void System.ValueType::.ctor()
extern "C" IL2CPP_METHOD_ATTR void ValueType__ctor_m2036258423 (RuntimeObject * __this, const RuntimeMethod* method)
{
	{
		Object__ctor_m297566312(__this, /*hidden argument*/NULL);
		return;
	}
}
// System.Boolean System.ValueType::InternalEquals(System.Object,System.Object,System.Object[]&)
extern "C" IL2CPP_METHOD_ATTR bool ValueType_InternalEquals_m1384040357 (RuntimeObject * __this /* static, unused */, RuntimeObject * ___o10, RuntimeObject * ___o21, ObjectU5BU5D_t2843939325** ___fields2, const RuntimeMethod* method)
{
	typedef bool (*ValueType_InternalEquals_m1384040357_ftn) (RuntimeObject *, RuntimeObject *, ObjectU5BU5D_t2843939325**);
	using namespace il2cpp::icalls;
	return  ((ValueType_InternalEquals_m1384040357_ftn)mscorlib::System::ValueType::InternalEquals) (___o10, ___o21, ___fields2);
}
// System.Boolean System.ValueType::DefaultEquals(System.Object,System.Object)
extern "C" IL2CPP_METHOD_ATTR bool ValueType_DefaultEquals_m2927252100 (RuntimeObject * __this /* static, unused */, RuntimeObject * ___o10, RuntimeObject * ___o21, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (ValueType_DefaultEquals_m2927252100_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	RuntimeType_t3636489352 * V_0 = NULL;
	ObjectU5BU5D_t2843939325* V_1 = NULL;
	bool V_2 = false;
	int32_t V_3 = 0;
	RuntimeObject * V_4 = NULL;
	RuntimeObject * V_5 = NULL;
	{
		RuntimeObject * L_0 = ___o10;
		if (L_0)
		{
			goto IL_0008;
		}
	}
	{
		RuntimeObject * L_1 = ___o21;
		if (L_1)
		{
			goto IL_0008;
		}
	}
	{
		return (bool)1;
	}

IL_0008:
	{
		RuntimeObject * L_2 = ___o10;
		if (!L_2)
		{
			goto IL_000e;
		}
	}
	{
		RuntimeObject * L_3 = ___o21;
		if (L_3)
		{
			goto IL_0010;
		}
	}

IL_000e:
	{
		return (bool)0;
	}

IL_0010:
	{
		RuntimeObject * L_4 = ___o10;
		Type_t * L_5 = Object_GetType_m88164663(L_4, /*hidden argument*/NULL);
		RuntimeObject * L_6 = ___o21;
		Type_t * L_7 = Object_GetType_m88164663(L_6, /*hidden argument*/NULL);
		V_0 = ((RuntimeType_t3636489352 *)CastclassClass((RuntimeObject*)L_7, RuntimeType_t3636489352_il2cpp_TypeInfo_var));
		RuntimeType_t3636489352 * L_8 = V_0;
		IL2CPP_RUNTIME_CLASS_INIT(RuntimeType_t3636489352_il2cpp_TypeInfo_var);
		bool L_9 = RuntimeType_op_Inequality_m287584116(NULL /*static, unused*/, ((RuntimeType_t3636489352 *)CastclassClass((RuntimeObject*)L_5, RuntimeType_t3636489352_il2cpp_TypeInfo_var)), L_8, /*hidden argument*/NULL);
		if (!L_9)
		{
			goto IL_0031;
		}
	}
	{
		return (bool)0;
	}

IL_0031:
	{
		RuntimeObject * L_10 = ___o10;
		RuntimeObject * L_11 = ___o21;
		bool L_12 = ValueType_InternalEquals_m1384040357(NULL /*static, unused*/, L_10, L_11, (ObjectU5BU5D_t2843939325**)(&V_1), /*hidden argument*/NULL);
		V_2 = L_12;
		ObjectU5BU5D_t2843939325* L_13 = V_1;
		if (L_13)
		{
			goto IL_0040;
		}
	}
	{
		bool L_14 = V_2;
		return L_14;
	}

IL_0040:
	{
		V_3 = 0;
		goto IL_006b;
	}

IL_0044:
	{
		ObjectU5BU5D_t2843939325* L_15 = V_1;
		int32_t L_16 = V_3;
		int32_t L_17 = L_16;
		RuntimeObject * L_18 = (L_15)->GetAtUnchecked(static_cast<il2cpp_array_size_t>(L_17));
		V_4 = L_18;
		ObjectU5BU5D_t2843939325* L_19 = V_1;
		int32_t L_20 = V_3;
		int32_t L_21 = ((int32_t)il2cpp_codegen_add((int32_t)L_20, (int32_t)1));
		RuntimeObject * L_22 = (L_19)->GetAtUnchecked(static_cast<il2cpp_array_size_t>(L_21));
		V_5 = L_22;
		RuntimeObject * L_23 = V_4;
		if (L_23)
		{
			goto IL_005a;
		}
	}
	{
		RuntimeObject * L_24 = V_5;
		if (!L_24)
		{
			goto IL_0067;
		}
	}
	{
		return (bool)0;
	}

IL_005a:
	{
		RuntimeObject * L_25 = V_4;
		RuntimeObject * L_26 = V_5;
		bool L_27 = VirtFuncInvoker1< bool, RuntimeObject * >::Invoke(0 /* System.Boolean System.Object::Equals(System.Object) */, L_25, L_26);
		if (L_27)
		{
			goto IL_0067;
		}
	}
	{
		return (bool)0;
	}

IL_0067:
	{
		int32_t L_28 = V_3;
		V_3 = ((int32_t)il2cpp_codegen_add((int32_t)L_28, (int32_t)2));
	}

IL_006b:
	{
		int32_t L_29 = V_3;
		ObjectU5BU5D_t2843939325* L_30 = V_1;
		if ((((int32_t)L_29) < ((int32_t)(((int32_t)((int32_t)(((RuntimeArray *)L_30)->max_length)))))))
		{
			goto IL_0044;
		}
	}
	{
		return (bool)1;
	}
}
// System.Boolean System.ValueType::Equals(System.Object)
extern "C" IL2CPP_METHOD_ATTR bool ValueType_Equals_m1524437845 (RuntimeObject * __this, RuntimeObject * ___obj0, const RuntimeMethod* method)
{
	{
		RuntimeObject * L_0 = ___obj0;
		bool L_1 = ValueType_DefaultEquals_m2927252100(NULL /*static, unused*/, __this, L_0, /*hidden argument*/NULL);
		return L_1;
	}
}
// System.Int32 System.ValueType::InternalGetHashCode(System.Object,System.Object[]&)
extern "C" IL2CPP_METHOD_ATTR int32_t ValueType_InternalGetHashCode_m58786863 (RuntimeObject * __this /* static, unused */, RuntimeObject * ___o0, ObjectU5BU5D_t2843939325** ___fields1, const RuntimeMethod* method)
{
	typedef int32_t (*ValueType_InternalGetHashCode_m58786863_ftn) (RuntimeObject *, ObjectU5BU5D_t2843939325**);
	using namespace il2cpp::icalls;
	return  ((ValueType_InternalGetHashCode_m58786863_ftn)mscorlib::System::ValueType::InternalGetHashCode) (___o0, ___fields1);
}
// System.Int32 System.ValueType::GetHashCode()
extern "C" IL2CPP_METHOD_ATTR int32_t ValueType_GetHashCode_m715362416 (RuntimeObject * __this, const RuntimeMethod* method)
{
	ObjectU5BU5D_t2843939325* V_0 = NULL;
	int32_t V_1 = 0;
	int32_t V_2 = 0;
	{
		int32_t L_0 = ValueType_InternalGetHashCode_m58786863(NULL /*static, unused*/, __this, (ObjectU5BU5D_t2843939325**)(&V_0), /*hidden argument*/NULL);
		V_1 = L_0;
		ObjectU5BU5D_t2843939325* L_1 = V_0;
		if (!L_1)
		{
			goto IL_002a;
		}
	}
	{
		V_2 = 0;
		goto IL_0024;
	}

IL_0010:
	{
		ObjectU5BU5D_t2843939325* L_2 = V_0;
		int32_t L_3 = V_2;
		int32_t L_4 = L_3;
		RuntimeObject * L_5 = (L_2)->GetAtUnchecked(static_cast<il2cpp_array_size_t>(L_4));
		if (!L_5)
		{
			goto IL_0020;
		}
	}
	{
		int32_t L_6 = V_1;
		ObjectU5BU5D_t2843939325* L_7 = V_0;
		int32_t L_8 = V_2;
		int32_t L_9 = L_8;
		RuntimeObject * L_10 = (L_7)->GetAtUnchecked(static_cast<il2cpp_array_size_t>(L_9));
		int32_t L_11 = VirtFuncInvoker0< int32_t >::Invoke(2 /* System.Int32 System.Object::GetHashCode() */, L_10);
		V_1 = ((int32_t)((int32_t)L_6^(int32_t)L_11));
	}

IL_0020:
	{
		int32_t L_12 = V_2;
		V_2 = ((int32_t)il2cpp_codegen_add((int32_t)L_12, (int32_t)1));
	}

IL_0024:
	{
		int32_t L_13 = V_2;
		ObjectU5BU5D_t2843939325* L_14 = V_0;
		if ((((int32_t)L_13) < ((int32_t)(((int32_t)((int32_t)(((RuntimeArray *)L_14)->max_length)))))))
		{
			goto IL_0010;
		}
	}

IL_002a:
	{
		int32_t L_15 = V_1;
		return L_15;
	}
}
// System.String System.ValueType::ToString()
extern "C" IL2CPP_METHOD_ATTR String_t* ValueType_ToString_m2292123621 (RuntimeObject * __this, const RuntimeMethod* method)
{
	{
		Type_t * L_0 = Object_GetType_m88164663(__this, /*hidden argument*/NULL);
		String_t* L_1 = VirtFuncInvoker0< String_t* >::Invoke(25 /* System.String System.Type::get_FullName() */, L_0);
		return L_1;
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
// System.Void System.Variant::Clear()
extern "C" IL2CPP_METHOD_ATTR void Variant_Clear_m3388694274 (Variant_t2753289927 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (Variant_Clear_m3388694274_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		int16_t L_0 = __this->get_vt_0();
		if ((!(((uint32_t)L_0) == ((uint32_t)8))))
		{
			goto IL_0015;
		}
	}
	{
		intptr_t L_1 = __this->get_bstrVal_11();
		IL2CPP_RUNTIME_CLASS_INIT(Marshal_t1757017490_il2cpp_TypeInfo_var);
		Marshal_FreeBSTR_m2788901813(NULL /*static, unused*/, (intptr_t)L_1, /*hidden argument*/NULL);
		return;
	}

IL_0015:
	{
		int16_t L_2 = __this->get_vt_0();
		if ((((int32_t)L_2) == ((int32_t)((int32_t)9))))
		{
			goto IL_0029;
		}
	}
	{
		int16_t L_3 = __this->get_vt_0();
		if ((!(((uint32_t)L_3) == ((uint32_t)((int32_t)13)))))
		{
			goto IL_0047;
		}
	}

IL_0029:
	{
		intptr_t L_4 = __this->get_pdispVal_18();
		bool L_5 = IntPtr_op_Inequality_m3063970704(NULL /*static, unused*/, (intptr_t)L_4, (intptr_t)(0), /*hidden argument*/NULL);
		if (!L_5)
		{
			goto IL_0047;
		}
	}
	{
		intptr_t L_6 = __this->get_pdispVal_18();
		IL2CPP_RUNTIME_CLASS_INIT(Marshal_t1757017490_il2cpp_TypeInfo_var);
		Marshal_Release_m3880542832(NULL /*static, unused*/, (intptr_t)L_6, /*hidden argument*/NULL);
	}

IL_0047:
	{
		return;
	}
}
extern "C"  void Variant_Clear_m3388694274_AdjustorThunk (RuntimeObject * __this, const RuntimeMethod* method)
{
	Variant_t2753289927 * _thisAdjusted = reinterpret_cast<Variant_t2753289927 *>(__this + 1);
	Variant_Clear_m3388694274(_thisAdjusted, method);
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Void System.Version::.ctor(System.Int32,System.Int32,System.Int32,System.Int32)
extern "C" IL2CPP_METHOD_ATTR void Version__ctor_m417728625 (Version_t3456873960 * __this, int32_t ___major0, int32_t ___minor1, int32_t ___build2, int32_t ___revision3, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (Version__ctor_m417728625_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		__this->set__Build_2((-1));
		__this->set__Revision_3((-1));
		Object__ctor_m297566312(__this, /*hidden argument*/NULL);
		int32_t L_0 = ___major0;
		if ((((int32_t)L_0) >= ((int32_t)0)))
		{
			goto IL_002d;
		}
	}
	{
		String_t* L_1 = Environment_GetResourceString_m2063689938(NULL /*static, unused*/, _stringLiteral2448690427, /*hidden argument*/NULL);
		ArgumentOutOfRangeException_t777629997 * L_2 = (ArgumentOutOfRangeException_t777629997 *)il2cpp_codegen_object_new(ArgumentOutOfRangeException_t777629997_il2cpp_TypeInfo_var);
		ArgumentOutOfRangeException__ctor_m282481429(L_2, _stringLiteral419133523, L_1, /*hidden argument*/NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_2, NULL, Version__ctor_m417728625_RuntimeMethod_var);
	}

IL_002d:
	{
		int32_t L_3 = ___minor1;
		if ((((int32_t)L_3) >= ((int32_t)0)))
		{
			goto IL_0046;
		}
	}
	{
		String_t* L_4 = Environment_GetResourceString_m2063689938(NULL /*static, unused*/, _stringLiteral2448690427, /*hidden argument*/NULL);
		ArgumentOutOfRangeException_t777629997 * L_5 = (ArgumentOutOfRangeException_t777629997 *)il2cpp_codegen_object_new(ArgumentOutOfRangeException_t777629997_il2cpp_TypeInfo_var);
		ArgumentOutOfRangeException__ctor_m282481429(L_5, _stringLiteral2762033855, L_4, /*hidden argument*/NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_5, NULL, Version__ctor_m417728625_RuntimeMethod_var);
	}

IL_0046:
	{
		int32_t L_6 = ___build2;
		if ((((int32_t)L_6) >= ((int32_t)0)))
		{
			goto IL_005f;
		}
	}
	{
		String_t* L_7 = Environment_GetResourceString_m2063689938(NULL /*static, unused*/, _stringLiteral2448690427, /*hidden argument*/NULL);
		ArgumentOutOfRangeException_t777629997 * L_8 = (ArgumentOutOfRangeException_t777629997 *)il2cpp_codegen_object_new(ArgumentOutOfRangeException_t777629997_il2cpp_TypeInfo_var);
		ArgumentOutOfRangeException__ctor_m282481429(L_8, _stringLiteral437191301, L_7, /*hidden argument*/NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_8, NULL, Version__ctor_m417728625_RuntimeMethod_var);
	}

IL_005f:
	{
		int32_t L_9 = ___revision3;
		if ((((int32_t)L_9) >= ((int32_t)0)))
		{
			goto IL_0079;
		}
	}
	{
		String_t* L_10 = Environment_GetResourceString_m2063689938(NULL /*static, unused*/, _stringLiteral2448690427, /*hidden argument*/NULL);
		ArgumentOutOfRangeException_t777629997 * L_11 = (ArgumentOutOfRangeException_t777629997 *)il2cpp_codegen_object_new(ArgumentOutOfRangeException_t777629997_il2cpp_TypeInfo_var);
		ArgumentOutOfRangeException__ctor_m282481429(L_11, _stringLiteral3187820736, L_10, /*hidden argument*/NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_11, NULL, Version__ctor_m417728625_RuntimeMethod_var);
	}

IL_0079:
	{
		int32_t L_12 = ___major0;
		__this->set__Major_0(L_12);
		int32_t L_13 = ___minor1;
		__this->set__Minor_1(L_13);
		int32_t L_14 = ___build2;
		__this->set__Build_2(L_14);
		int32_t L_15 = ___revision3;
		__this->set__Revision_3(L_15);
		return;
	}
}
// System.Void System.Version::.ctor()
extern "C" IL2CPP_METHOD_ATTR void Version__ctor_m872301635 (Version_t3456873960 * __this, const RuntimeMethod* method)
{
	{
		__this->set__Build_2((-1));
		__this->set__Revision_3((-1));
		Object__ctor_m297566312(__this, /*hidden argument*/NULL);
		__this->set__Major_0(0);
		__this->set__Minor_1(0);
		return;
	}
}
// System.Int32 System.Version::get_Major()
extern "C" IL2CPP_METHOD_ATTR int32_t Version_get_Major_m2457928275 (Version_t3456873960 * __this, const RuntimeMethod* method)
{
	{
		int32_t L_0 = __this->get__Major_0();
		return L_0;
	}
}
// System.Int32 System.Version::get_Minor()
extern "C" IL2CPP_METHOD_ATTR int32_t Version_get_Minor_m150536655 (Version_t3456873960 * __this, const RuntimeMethod* method)
{
	{
		int32_t L_0 = __this->get__Minor_1();
		return L_0;
	}
}
// System.Int32 System.Version::get_Build()
extern "C" IL2CPP_METHOD_ATTR int32_t Version_get_Build_m3667751407 (Version_t3456873960 * __this, const RuntimeMethod* method)
{
	{
		int32_t L_0 = __this->get__Build_2();
		return L_0;
	}
}
// System.Int32 System.Version::get_Revision()
extern "C" IL2CPP_METHOD_ATTR int32_t Version_get_Revision_m3982234017 (Version_t3456873960 * __this, const RuntimeMethod* method)
{
	{
		int32_t L_0 = __this->get__Revision_3();
		return L_0;
	}
}
// System.Object System.Version::Clone()
extern "C" IL2CPP_METHOD_ATTR RuntimeObject * Version_Clone_m1749041863 (Version_t3456873960 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (Version_Clone_m1749041863_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		Version_t3456873960 * L_0 = (Version_t3456873960 *)il2cpp_codegen_object_new(Version_t3456873960_il2cpp_TypeInfo_var);
		Version__ctor_m872301635(L_0, /*hidden argument*/NULL);
		Version_t3456873960 * L_1 = L_0;
		int32_t L_2 = __this->get__Major_0();
		L_1->set__Major_0(L_2);
		Version_t3456873960 * L_3 = L_1;
		int32_t L_4 = __this->get__Minor_1();
		L_3->set__Minor_1(L_4);
		Version_t3456873960 * L_5 = L_3;
		int32_t L_6 = __this->get__Build_2();
		L_5->set__Build_2(L_6);
		Version_t3456873960 * L_7 = L_5;
		int32_t L_8 = __this->get__Revision_3();
		L_7->set__Revision_3(L_8);
		return L_7;
	}
}
// System.Int32 System.Version::CompareTo(System.Object)
extern "C" IL2CPP_METHOD_ATTR int32_t Version_CompareTo_m1662919407 (Version_t3456873960 * __this, RuntimeObject * ___version0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (Version_CompareTo_m1662919407_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	Version_t3456873960 * V_0 = NULL;
	{
		RuntimeObject * L_0 = ___version0;
		if (L_0)
		{
			goto IL_0005;
		}
	}
	{
		return 1;
	}

IL_0005:
	{
		RuntimeObject * L_1 = ___version0;
		V_0 = ((Version_t3456873960 *)IsInstSealed((RuntimeObject*)L_1, Version_t3456873960_il2cpp_TypeInfo_var));
		Version_t3456873960 * L_2 = V_0;
		IL2CPP_RUNTIME_CLASS_INIT(Version_t3456873960_il2cpp_TypeInfo_var);
		bool L_3 = Version_op_Equality_m3804852517(NULL /*static, unused*/, L_2, (Version_t3456873960 *)NULL, /*hidden argument*/NULL);
		if (!L_3)
		{
			goto IL_0025;
		}
	}
	{
		String_t* L_4 = Environment_GetResourceString_m2063689938(NULL /*static, unused*/, _stringLiteral1182144617, /*hidden argument*/NULL);
		ArgumentException_t132251570 * L_5 = (ArgumentException_t132251570 *)il2cpp_codegen_object_new(ArgumentException_t132251570_il2cpp_TypeInfo_var);
		ArgumentException__ctor_m1312628991(L_5, L_4, /*hidden argument*/NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_5, NULL, Version_CompareTo_m1662919407_RuntimeMethod_var);
	}

IL_0025:
	{
		int32_t L_6 = __this->get__Major_0();
		Version_t3456873960 * L_7 = V_0;
		int32_t L_8 = L_7->get__Major_0();
		if ((((int32_t)L_6) == ((int32_t)L_8)))
		{
			goto IL_0045;
		}
	}
	{
		int32_t L_9 = __this->get__Major_0();
		Version_t3456873960 * L_10 = V_0;
		int32_t L_11 = L_10->get__Major_0();
		if ((((int32_t)L_9) <= ((int32_t)L_11)))
		{
			goto IL_0043;
		}
	}
	{
		return 1;
	}

IL_0043:
	{
		return (-1);
	}

IL_0045:
	{
		int32_t L_12 = __this->get__Minor_1();
		Version_t3456873960 * L_13 = V_0;
		int32_t L_14 = L_13->get__Minor_1();
		if ((((int32_t)L_12) == ((int32_t)L_14)))
		{
			goto IL_0065;
		}
	}
	{
		int32_t L_15 = __this->get__Minor_1();
		Version_t3456873960 * L_16 = V_0;
		int32_t L_17 = L_16->get__Minor_1();
		if ((((int32_t)L_15) <= ((int32_t)L_17)))
		{
			goto IL_0063;
		}
	}
	{
		return 1;
	}

IL_0063:
	{
		return (-1);
	}

IL_0065:
	{
		int32_t L_18 = __this->get__Build_2();
		Version_t3456873960 * L_19 = V_0;
		int32_t L_20 = L_19->get__Build_2();
		if ((((int32_t)L_18) == ((int32_t)L_20)))
		{
			goto IL_0085;
		}
	}
	{
		int32_t L_21 = __this->get__Build_2();
		Version_t3456873960 * L_22 = V_0;
		int32_t L_23 = L_22->get__Build_2();
		if ((((int32_t)L_21) <= ((int32_t)L_23)))
		{
			goto IL_0083;
		}
	}
	{
		return 1;
	}

IL_0083:
	{
		return (-1);
	}

IL_0085:
	{
		int32_t L_24 = __this->get__Revision_3();
		Version_t3456873960 * L_25 = V_0;
		int32_t L_26 = L_25->get__Revision_3();
		if ((((int32_t)L_24) == ((int32_t)L_26)))
		{
			goto IL_00a5;
		}
	}
	{
		int32_t L_27 = __this->get__Revision_3();
		Version_t3456873960 * L_28 = V_0;
		int32_t L_29 = L_28->get__Revision_3();
		if ((((int32_t)L_27) <= ((int32_t)L_29)))
		{
			goto IL_00a3;
		}
	}
	{
		return 1;
	}

IL_00a3:
	{
		return (-1);
	}

IL_00a5:
	{
		return 0;
	}
}
// System.Int32 System.Version::CompareTo(System.Version)
extern "C" IL2CPP_METHOD_ATTR int32_t Version_CompareTo_m3146217210 (Version_t3456873960 * __this, Version_t3456873960 * ___value0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (Version_CompareTo_m3146217210_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		Version_t3456873960 * L_0 = ___value0;
		IL2CPP_RUNTIME_CLASS_INIT(Version_t3456873960_il2cpp_TypeInfo_var);
		bool L_1 = Version_op_Equality_m3804852517(NULL /*static, unused*/, L_0, (Version_t3456873960 *)NULL, /*hidden argument*/NULL);
		if (!L_1)
		{
			goto IL_000b;
		}
	}
	{
		return 1;
	}

IL_000b:
	{
		int32_t L_2 = __this->get__Major_0();
		Version_t3456873960 * L_3 = ___value0;
		int32_t L_4 = L_3->get__Major_0();
		if ((((int32_t)L_2) == ((int32_t)L_4)))
		{
			goto IL_002b;
		}
	}
	{
		int32_t L_5 = __this->get__Major_0();
		Version_t3456873960 * L_6 = ___value0;
		int32_t L_7 = L_6->get__Major_0();
		if ((((int32_t)L_5) <= ((int32_t)L_7)))
		{
			goto IL_0029;
		}
	}
	{
		return 1;
	}

IL_0029:
	{
		return (-1);
	}

IL_002b:
	{
		int32_t L_8 = __this->get__Minor_1();
		Version_t3456873960 * L_9 = ___value0;
		int32_t L_10 = L_9->get__Minor_1();
		if ((((int32_t)L_8) == ((int32_t)L_10)))
		{
			goto IL_004b;
		}
	}
	{
		int32_t L_11 = __this->get__Minor_1();
		Version_t3456873960 * L_12 = ___value0;
		int32_t L_13 = L_12->get__Minor_1();
		if ((((int32_t)L_11) <= ((int32_t)L_13)))
		{
			goto IL_0049;
		}
	}
	{
		return 1;
	}

IL_0049:
	{
		return (-1);
	}

IL_004b:
	{
		int32_t L_14 = __this->get__Build_2();
		Version_t3456873960 * L_15 = ___value0;
		int32_t L_16 = L_15->get__Build_2();
		if ((((int32_t)L_14) == ((int32_t)L_16)))
		{
			goto IL_006b;
		}
	}
	{
		int32_t L_17 = __this->get__Build_2();
		Version_t3456873960 * L_18 = ___value0;
		int32_t L_19 = L_18->get__Build_2();
		if ((((int32_t)L_17) <= ((int32_t)L_19)))
		{
			goto IL_0069;
		}
	}
	{
		return 1;
	}

IL_0069:
	{
		return (-1);
	}

IL_006b:
	{
		int32_t L_20 = __this->get__Revision_3();
		Version_t3456873960 * L_21 = ___value0;
		int32_t L_22 = L_21->get__Revision_3();
		if ((((int32_t)L_20) == ((int32_t)L_22)))
		{
			goto IL_008b;
		}
	}
	{
		int32_t L_23 = __this->get__Revision_3();
		Version_t3456873960 * L_24 = ___value0;
		int32_t L_25 = L_24->get__Revision_3();
		if ((((int32_t)L_23) <= ((int32_t)L_25)))
		{
			goto IL_0089;
		}
	}
	{
		return 1;
	}

IL_0089:
	{
		return (-1);
	}

IL_008b:
	{
		return 0;
	}
}
// System.Boolean System.Version::Equals(System.Object)
extern "C" IL2CPP_METHOD_ATTR bool Version_Equals_m3073813696 (Version_t3456873960 * __this, RuntimeObject * ___obj0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (Version_Equals_m3073813696_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	Version_t3456873960 * V_0 = NULL;
	{
		RuntimeObject * L_0 = ___obj0;
		V_0 = ((Version_t3456873960 *)IsInstSealed((RuntimeObject*)L_0, Version_t3456873960_il2cpp_TypeInfo_var));
		Version_t3456873960 * L_1 = V_0;
		IL2CPP_RUNTIME_CLASS_INIT(Version_t3456873960_il2cpp_TypeInfo_var);
		bool L_2 = Version_op_Equality_m3804852517(NULL /*static, unused*/, L_1, (Version_t3456873960 *)NULL, /*hidden argument*/NULL);
		if (!L_2)
		{
			goto IL_0012;
		}
	}
	{
		return (bool)0;
	}

IL_0012:
	{
		int32_t L_3 = __this->get__Major_0();
		Version_t3456873960 * L_4 = V_0;
		int32_t L_5 = L_4->get__Major_0();
		if ((!(((uint32_t)L_3) == ((uint32_t)L_5))))
		{
			goto IL_004a;
		}
	}
	{
		int32_t L_6 = __this->get__Minor_1();
		Version_t3456873960 * L_7 = V_0;
		int32_t L_8 = L_7->get__Minor_1();
		if ((!(((uint32_t)L_6) == ((uint32_t)L_8))))
		{
			goto IL_004a;
		}
	}
	{
		int32_t L_9 = __this->get__Build_2();
		Version_t3456873960 * L_10 = V_0;
		int32_t L_11 = L_10->get__Build_2();
		if ((!(((uint32_t)L_9) == ((uint32_t)L_11))))
		{
			goto IL_004a;
		}
	}
	{
		int32_t L_12 = __this->get__Revision_3();
		Version_t3456873960 * L_13 = V_0;
		int32_t L_14 = L_13->get__Revision_3();
		if ((((int32_t)L_12) == ((int32_t)L_14)))
		{
			goto IL_004c;
		}
	}

IL_004a:
	{
		return (bool)0;
	}

IL_004c:
	{
		return (bool)1;
	}
}
// System.Boolean System.Version::Equals(System.Version)
extern "C" IL2CPP_METHOD_ATTR bool Version_Equals_m1564427710 (Version_t3456873960 * __this, Version_t3456873960 * ___obj0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (Version_Equals_m1564427710_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		Version_t3456873960 * L_0 = ___obj0;
		IL2CPP_RUNTIME_CLASS_INIT(Version_t3456873960_il2cpp_TypeInfo_var);
		bool L_1 = Version_op_Equality_m3804852517(NULL /*static, unused*/, L_0, (Version_t3456873960 *)NULL, /*hidden argument*/NULL);
		if (!L_1)
		{
			goto IL_000b;
		}
	}
	{
		return (bool)0;
	}

IL_000b:
	{
		int32_t L_2 = __this->get__Major_0();
		Version_t3456873960 * L_3 = ___obj0;
		int32_t L_4 = L_3->get__Major_0();
		if ((!(((uint32_t)L_2) == ((uint32_t)L_4))))
		{
			goto IL_0043;
		}
	}
	{
		int32_t L_5 = __this->get__Minor_1();
		Version_t3456873960 * L_6 = ___obj0;
		int32_t L_7 = L_6->get__Minor_1();
		if ((!(((uint32_t)L_5) == ((uint32_t)L_7))))
		{
			goto IL_0043;
		}
	}
	{
		int32_t L_8 = __this->get__Build_2();
		Version_t3456873960 * L_9 = ___obj0;
		int32_t L_10 = L_9->get__Build_2();
		if ((!(((uint32_t)L_8) == ((uint32_t)L_10))))
		{
			goto IL_0043;
		}
	}
	{
		int32_t L_11 = __this->get__Revision_3();
		Version_t3456873960 * L_12 = ___obj0;
		int32_t L_13 = L_12->get__Revision_3();
		if ((((int32_t)L_11) == ((int32_t)L_13)))
		{
			goto IL_0045;
		}
	}

IL_0043:
	{
		return (bool)0;
	}

IL_0045:
	{
		return (bool)1;
	}
}
// System.Int32 System.Version::GetHashCode()
extern "C" IL2CPP_METHOD_ATTR int32_t Version_GetHashCode_m672974201 (Version_t3456873960 * __this, const RuntimeMethod* method)
{
	{
		int32_t L_0 = __this->get__Major_0();
		int32_t L_1 = __this->get__Minor_1();
		int32_t L_2 = __this->get__Build_2();
		int32_t L_3 = __this->get__Revision_3();
		return ((int32_t)((int32_t)((int32_t)((int32_t)((int32_t)((int32_t)((int32_t)((int32_t)0|(int32_t)((int32_t)((int32_t)((int32_t)((int32_t)L_0&(int32_t)((int32_t)15)))<<(int32_t)((int32_t)28)))))|(int32_t)((int32_t)((int32_t)((int32_t)((int32_t)L_1&(int32_t)((int32_t)255)))<<(int32_t)((int32_t)20)))))|(int32_t)((int32_t)((int32_t)((int32_t)((int32_t)L_2&(int32_t)((int32_t)255)))<<(int32_t)((int32_t)12)))))|(int32_t)((int32_t)((int32_t)L_3&(int32_t)((int32_t)4095)))));
	}
}
// System.String System.Version::ToString()
extern "C" IL2CPP_METHOD_ATTR String_t* Version_ToString_m2279867705 (Version_t3456873960 * __this, const RuntimeMethod* method)
{
	{
		int32_t L_0 = __this->get__Build_2();
		if ((!(((uint32_t)L_0) == ((uint32_t)(-1)))))
		{
			goto IL_0011;
		}
	}
	{
		String_t* L_1 = Version_ToString_m3654989516(__this, 2, /*hidden argument*/NULL);
		return L_1;
	}

IL_0011:
	{
		int32_t L_2 = __this->get__Revision_3();
		if ((!(((uint32_t)L_2) == ((uint32_t)(-1)))))
		{
			goto IL_0022;
		}
	}
	{
		String_t* L_3 = Version_ToString_m3654989516(__this, 3, /*hidden argument*/NULL);
		return L_3;
	}

IL_0022:
	{
		String_t* L_4 = Version_ToString_m3654989516(__this, 4, /*hidden argument*/NULL);
		return L_4;
	}
}
// System.String System.Version::ToString(System.Int32)
extern "C" IL2CPP_METHOD_ATTR String_t* Version_ToString_m3654989516 (Version_t3456873960 * __this, int32_t ___fieldCount0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (Version_ToString_m3654989516_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	StringBuilder_t * V_0 = NULL;
	{
		int32_t L_0 = ___fieldCount0;
		switch (L_0)
		{
			case 0:
			{
				goto IL_0014;
			}
			case 1:
			{
				goto IL_001a;
			}
			case 2:
			{
				goto IL_0026;
			}
		}
	}
	{
		goto IL_0056;
	}

IL_0014:
	{
		String_t* L_1 = ((String_t_StaticFields*)il2cpp_codegen_static_fields_for(String_t_il2cpp_TypeInfo_var))->get_Empty_5();
		return L_1;
	}

IL_001a:
	{
		int32_t* L_2 = __this->get_address_of__Major_0();
		String_t* L_3 = Int32_ToString_m141394615((int32_t*)L_2, /*hidden argument*/NULL);
		return L_3;
	}

IL_0026:
	{
		StringBuilder_t * L_4 = StringBuilderCache_Acquire_m4169564332(NULL /*static, unused*/, ((int32_t)16), /*hidden argument*/NULL);
		V_0 = L_4;
		int32_t L_5 = __this->get__Major_0();
		StringBuilder_t * L_6 = V_0;
		IL2CPP_RUNTIME_CLASS_INIT(Version_t3456873960_il2cpp_TypeInfo_var);
		Version_AppendPositiveNumber_m308762805(NULL /*static, unused*/, L_5, L_6, /*hidden argument*/NULL);
		StringBuilder_t * L_7 = V_0;
		StringBuilder_Append_m2383614642(L_7, ((int32_t)46), /*hidden argument*/NULL);
		int32_t L_8 = __this->get__Minor_1();
		StringBuilder_t * L_9 = V_0;
		Version_AppendPositiveNumber_m308762805(NULL /*static, unused*/, L_8, L_9, /*hidden argument*/NULL);
		StringBuilder_t * L_10 = V_0;
		String_t* L_11 = StringBuilderCache_GetStringAndRelease_m1110745745(NULL /*static, unused*/, L_10, /*hidden argument*/NULL);
		return L_11;
	}

IL_0056:
	{
		int32_t L_12 = __this->get__Build_2();
		if ((!(((uint32_t)L_12) == ((uint32_t)(-1)))))
		{
			goto IL_008a;
		}
	}
	{
		ObjectU5BU5D_t2843939325* L_13 = (ObjectU5BU5D_t2843939325*)SZArrayNew(ObjectU5BU5D_t2843939325_il2cpp_TypeInfo_var, (uint32_t)2);
		ObjectU5BU5D_t2843939325* L_14 = L_13;
		ArrayElementTypeCheck (L_14, _stringLiteral3452614544);
		(L_14)->SetAtUnchecked(static_cast<il2cpp_array_size_t>(0), (RuntimeObject *)_stringLiteral3452614544);
		ObjectU5BU5D_t2843939325* L_15 = L_14;
		ArrayElementTypeCheck (L_15, _stringLiteral3452614542);
		(L_15)->SetAtUnchecked(static_cast<il2cpp_array_size_t>(1), (RuntimeObject *)_stringLiteral3452614542);
		String_t* L_16 = Environment_GetResourceString_m479507158(NULL /*static, unused*/, _stringLiteral3104458722, L_15, /*hidden argument*/NULL);
		ArgumentException_t132251570 * L_17 = (ArgumentException_t132251570 *)il2cpp_codegen_object_new(ArgumentException_t132251570_il2cpp_TypeInfo_var);
		ArgumentException__ctor_m1216717135(L_17, L_16, _stringLiteral3976682977, /*hidden argument*/NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_17, NULL, Version_ToString_m3654989516_RuntimeMethod_var);
	}

IL_008a:
	{
		int32_t L_18 = ___fieldCount0;
		if ((!(((uint32_t)L_18) == ((uint32_t)3))))
		{
			goto IL_00d3;
		}
	}
	{
		StringBuilder_t * L_19 = StringBuilderCache_Acquire_m4169564332(NULL /*static, unused*/, ((int32_t)16), /*hidden argument*/NULL);
		V_0 = L_19;
		int32_t L_20 = __this->get__Major_0();
		StringBuilder_t * L_21 = V_0;
		IL2CPP_RUNTIME_CLASS_INIT(Version_t3456873960_il2cpp_TypeInfo_var);
		Version_AppendPositiveNumber_m308762805(NULL /*static, unused*/, L_20, L_21, /*hidden argument*/NULL);
		StringBuilder_t * L_22 = V_0;
		StringBuilder_Append_m2383614642(L_22, ((int32_t)46), /*hidden argument*/NULL);
		int32_t L_23 = __this->get__Minor_1();
		StringBuilder_t * L_24 = V_0;
		Version_AppendPositiveNumber_m308762805(NULL /*static, unused*/, L_23, L_24, /*hidden argument*/NULL);
		StringBuilder_t * L_25 = V_0;
		StringBuilder_Append_m2383614642(L_25, ((int32_t)46), /*hidden argument*/NULL);
		int32_t L_26 = __this->get__Build_2();
		StringBuilder_t * L_27 = V_0;
		Version_AppendPositiveNumber_m308762805(NULL /*static, unused*/, L_26, L_27, /*hidden argument*/NULL);
		StringBuilder_t * L_28 = V_0;
		String_t* L_29 = StringBuilderCache_GetStringAndRelease_m1110745745(NULL /*static, unused*/, L_28, /*hidden argument*/NULL);
		return L_29;
	}

IL_00d3:
	{
		int32_t L_30 = __this->get__Revision_3();
		if ((!(((uint32_t)L_30) == ((uint32_t)(-1)))))
		{
			goto IL_0107;
		}
	}
	{
		ObjectU5BU5D_t2843939325* L_31 = (ObjectU5BU5D_t2843939325*)SZArrayNew(ObjectU5BU5D_t2843939325_il2cpp_TypeInfo_var, (uint32_t)2);
		ObjectU5BU5D_t2843939325* L_32 = L_31;
		ArrayElementTypeCheck (L_32, _stringLiteral3452614544);
		(L_32)->SetAtUnchecked(static_cast<il2cpp_array_size_t>(0), (RuntimeObject *)_stringLiteral3452614544);
		ObjectU5BU5D_t2843939325* L_33 = L_32;
		ArrayElementTypeCheck (L_33, _stringLiteral3452614541);
		(L_33)->SetAtUnchecked(static_cast<il2cpp_array_size_t>(1), (RuntimeObject *)_stringLiteral3452614541);
		String_t* L_34 = Environment_GetResourceString_m479507158(NULL /*static, unused*/, _stringLiteral3104458722, L_33, /*hidden argument*/NULL);
		ArgumentException_t132251570 * L_35 = (ArgumentException_t132251570 *)il2cpp_codegen_object_new(ArgumentException_t132251570_il2cpp_TypeInfo_var);
		ArgumentException__ctor_m1216717135(L_35, L_34, _stringLiteral3976682977, /*hidden argument*/NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_35, NULL, Version_ToString_m3654989516_RuntimeMethod_var);
	}

IL_0107:
	{
		int32_t L_36 = ___fieldCount0;
		if ((!(((uint32_t)L_36) == ((uint32_t)4))))
		{
			goto IL_0165;
		}
	}
	{
		StringBuilder_t * L_37 = StringBuilderCache_Acquire_m4169564332(NULL /*static, unused*/, ((int32_t)16), /*hidden argument*/NULL);
		V_0 = L_37;
		int32_t L_38 = __this->get__Major_0();
		StringBuilder_t * L_39 = V_0;
		IL2CPP_RUNTIME_CLASS_INIT(Version_t3456873960_il2cpp_TypeInfo_var);
		Version_AppendPositiveNumber_m308762805(NULL /*static, unused*/, L_38, L_39, /*hidden argument*/NULL);
		StringBuilder_t * L_40 = V_0;
		StringBuilder_Append_m2383614642(L_40, ((int32_t)46), /*hidden argument*/NULL);
		int32_t L_41 = __this->get__Minor_1();
		StringBuilder_t * L_42 = V_0;
		Version_AppendPositiveNumber_m308762805(NULL /*static, unused*/, L_41, L_42, /*hidden argument*/NULL);
		StringBuilder_t * L_43 = V_0;
		StringBuilder_Append_m2383614642(L_43, ((int32_t)46), /*hidden argument*/NULL);
		int32_t L_44 = __this->get__Build_2();
		StringBuilder_t * L_45 = V_0;
		Version_AppendPositiveNumber_m308762805(NULL /*static, unused*/, L_44, L_45, /*hidden argument*/NULL);
		StringBuilder_t * L_46 = V_0;
		StringBuilder_Append_m2383614642(L_46, ((int32_t)46), /*hidden argument*/NULL);
		int32_t L_47 = __this->get__Revision_3();
		StringBuilder_t * L_48 = V_0;
		Version_AppendPositiveNumber_m308762805(NULL /*static, unused*/, L_47, L_48, /*hidden argument*/NULL);
		StringBuilder_t * L_49 = V_0;
		String_t* L_50 = StringBuilderCache_GetStringAndRelease_m1110745745(NULL /*static, unused*/, L_49, /*hidden argument*/NULL);
		return L_50;
	}

IL_0165:
	{
		ObjectU5BU5D_t2843939325* L_51 = (ObjectU5BU5D_t2843939325*)SZArrayNew(ObjectU5BU5D_t2843939325_il2cpp_TypeInfo_var, (uint32_t)2);
		ObjectU5BU5D_t2843939325* L_52 = L_51;
		ArrayElementTypeCheck (L_52, _stringLiteral3452614544);
		(L_52)->SetAtUnchecked(static_cast<il2cpp_array_size_t>(0), (RuntimeObject *)_stringLiteral3452614544);
		ObjectU5BU5D_t2843939325* L_53 = L_52;
		ArrayElementTypeCheck (L_53, _stringLiteral3452614540);
		(L_53)->SetAtUnchecked(static_cast<il2cpp_array_size_t>(1), (RuntimeObject *)_stringLiteral3452614540);
		String_t* L_54 = Environment_GetResourceString_m479507158(NULL /*static, unused*/, _stringLiteral3104458722, L_53, /*hidden argument*/NULL);
		ArgumentException_t132251570 * L_55 = (ArgumentException_t132251570 *)il2cpp_codegen_object_new(ArgumentException_t132251570_il2cpp_TypeInfo_var);
		ArgumentException__ctor_m1216717135(L_55, L_54, _stringLiteral3976682977, /*hidden argument*/NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_55, NULL, Version_ToString_m3654989516_RuntimeMethod_var);
	}
}
// System.Void System.Version::AppendPositiveNumber(System.Int32,System.Text.StringBuilder)
extern "C" IL2CPP_METHOD_ATTR void Version_AppendPositiveNumber_m308762805 (RuntimeObject * __this /* static, unused */, int32_t ___num0, StringBuilder_t * ___sb1, const RuntimeMethod* method)
{
	int32_t V_0 = 0;
	int32_t V_1 = 0;
	{
		StringBuilder_t * L_0 = ___sb1;
		int32_t L_1 = StringBuilder_get_Length_m3238060835(L_0, /*hidden argument*/NULL);
		V_0 = L_1;
	}

IL_0007:
	{
		int32_t L_2 = ___num0;
		V_1 = ((int32_t)((int32_t)L_2%(int32_t)((int32_t)10)));
		int32_t L_3 = ___num0;
		___num0 = ((int32_t)((int32_t)L_3/(int32_t)((int32_t)10)));
		StringBuilder_t * L_4 = ___sb1;
		int32_t L_5 = V_0;
		int32_t L_6 = V_1;
		StringBuilder_Insert_m1076119876(L_4, L_5, (((int32_t)((uint16_t)((int32_t)il2cpp_codegen_add((int32_t)((int32_t)48), (int32_t)L_6))))), /*hidden argument*/NULL);
		int32_t L_7 = ___num0;
		if ((((int32_t)L_7) > ((int32_t)0)))
		{
			goto IL_0007;
		}
	}
	{
		return;
	}
}
// System.Boolean System.Version::op_Equality(System.Version,System.Version)
extern "C" IL2CPP_METHOD_ATTR bool Version_op_Equality_m3804852517 (RuntimeObject * __this /* static, unused */, Version_t3456873960 * ___v10, Version_t3456873960 * ___v21, const RuntimeMethod* method)
{
	{
		Version_t3456873960 * L_0 = ___v10;
		if (L_0)
		{
			goto IL_0008;
		}
	}
	{
		Version_t3456873960 * L_1 = ___v21;
		return (bool)((((RuntimeObject*)(Version_t3456873960 *)L_1) == ((RuntimeObject*)(RuntimeObject *)NULL))? 1 : 0);
	}

IL_0008:
	{
		Version_t3456873960 * L_2 = ___v10;
		Version_t3456873960 * L_3 = ___v21;
		bool L_4 = Version_Equals_m1564427710(L_2, L_3, /*hidden argument*/NULL);
		return L_4;
	}
}
// System.Boolean System.Version::op_Inequality(System.Version,System.Version)
extern "C" IL2CPP_METHOD_ATTR bool Version_op_Inequality_m1696193441 (RuntimeObject * __this /* static, unused */, Version_t3456873960 * ___v10, Version_t3456873960 * ___v21, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (Version_op_Inequality_m1696193441_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		Version_t3456873960 * L_0 = ___v10;
		Version_t3456873960 * L_1 = ___v21;
		IL2CPP_RUNTIME_CLASS_INIT(Version_t3456873960_il2cpp_TypeInfo_var);
		bool L_2 = Version_op_Equality_m3804852517(NULL /*static, unused*/, L_0, L_1, /*hidden argument*/NULL);
		return (bool)((((int32_t)L_2) == ((int32_t)0))? 1 : 0);
	}
}
// System.Void System.Version::.cctor()
extern "C" IL2CPP_METHOD_ATTR void Version__cctor_m3568671087 (RuntimeObject * __this /* static, unused */, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (Version__cctor_m3568671087_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		CharU5BU5D_t3528271667* L_0 = (CharU5BU5D_t3528271667*)SZArrayNew(CharU5BU5D_t3528271667_il2cpp_TypeInfo_var, (uint32_t)1);
		CharU5BU5D_t3528271667* L_1 = L_0;
		(L_1)->SetAtUnchecked(static_cast<il2cpp_array_size_t>(0), (Il2CppChar)((int32_t)46));
		((Version_t3456873960_StaticFields*)il2cpp_codegen_static_fields_for(Version_t3456873960_il2cpp_TypeInfo_var))->set_SeparatorsArray_4(L_1);
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
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Void System.WeakReference::AllocateHandle(System.Object)
extern "C" IL2CPP_METHOD_ATTR void WeakReference_AllocateHandle_m1478975559 (WeakReference_t1334886716 * __this, RuntimeObject * ___target0, const RuntimeMethod* method)
{
	{
		bool L_0 = __this->get_isLongReference_0();
		if (!L_0)
		{
			goto IL_0016;
		}
	}
	{
		RuntimeObject * L_1 = ___target0;
		GCHandle_t3351438187  L_2 = GCHandle_Alloc_m3823409740(NULL /*static, unused*/, L_1, 1, /*hidden argument*/NULL);
		__this->set_gcHandle_1(L_2);
		return;
	}

IL_0016:
	{
		RuntimeObject * L_3 = ___target0;
		GCHandle_t3351438187  L_4 = GCHandle_Alloc_m3823409740(NULL /*static, unused*/, L_3, 0, /*hidden argument*/NULL);
		__this->set_gcHandle_1(L_4);
		return;
	}
}
// System.Void System.WeakReference::.ctor()
extern "C" IL2CPP_METHOD_ATTR void WeakReference__ctor_m24376735 (WeakReference_t1334886716 * __this, const RuntimeMethod* method)
{
	{
		Object__ctor_m297566312(__this, /*hidden argument*/NULL);
		return;
	}
}
// System.Void System.WeakReference::.ctor(System.Object)
extern "C" IL2CPP_METHOD_ATTR void WeakReference__ctor_m2401547918 (WeakReference_t1334886716 * __this, RuntimeObject * ___target0, const RuntimeMethod* method)
{
	{
		RuntimeObject * L_0 = ___target0;
		WeakReference__ctor_m1054065938(__this, L_0, (bool)0, /*hidden argument*/NULL);
		return;
	}
}
// System.Void System.WeakReference::.ctor(System.Object,System.Boolean)
extern "C" IL2CPP_METHOD_ATTR void WeakReference__ctor_m1054065938 (WeakReference_t1334886716 * __this, RuntimeObject * ___target0, bool ___trackResurrection1, const RuntimeMethod* method)
{
	{
		Object__ctor_m297566312(__this, /*hidden argument*/NULL);
		bool L_0 = ___trackResurrection1;
		__this->set_isLongReference_0(L_0);
		RuntimeObject * L_1 = ___target0;
		WeakReference_AllocateHandle_m1478975559(__this, L_1, /*hidden argument*/NULL);
		return;
	}
}
// System.Void System.WeakReference::.ctor(System.Runtime.Serialization.SerializationInfo,System.Runtime.Serialization.StreamingContext)
extern "C" IL2CPP_METHOD_ATTR void WeakReference__ctor_m1244067698 (WeakReference_t1334886716 * __this, SerializationInfo_t950877179 * ___info0, StreamingContext_t3711869237  ___context1, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (WeakReference__ctor_m1244067698_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	RuntimeObject * V_0 = NULL;
	{
		Object__ctor_m297566312(__this, /*hidden argument*/NULL);
		SerializationInfo_t950877179 * L_0 = ___info0;
		if (L_0)
		{
			goto IL_0014;
		}
	}
	{
		ArgumentNullException_t1615371798 * L_1 = (ArgumentNullException_t1615371798 *)il2cpp_codegen_object_new(ArgumentNullException_t1615371798_il2cpp_TypeInfo_var);
		ArgumentNullException__ctor_m1170824041(L_1, _stringLiteral79347, /*hidden argument*/NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_1, NULL, WeakReference__ctor_m1244067698_RuntimeMethod_var);
	}

IL_0014:
	{
		SerializationInfo_t950877179 * L_2 = ___info0;
		bool L_3 = SerializationInfo_GetBoolean_m1756153320(L_2, _stringLiteral3234942771, /*hidden argument*/NULL);
		__this->set_isLongReference_0(L_3);
		SerializationInfo_t950877179 * L_4 = ___info0;
		RuntimeTypeHandle_t3027515415  L_5 = { reinterpret_cast<intptr_t> (RuntimeObject_0_0_0_var) };
		IL2CPP_RUNTIME_CLASS_INIT(Type_t_il2cpp_TypeInfo_var);
		Type_t * L_6 = Type_GetTypeFromHandle_m1620074514(NULL /*static, unused*/, L_5, /*hidden argument*/NULL);
		RuntimeObject * L_7 = SerializationInfo_GetValue_m42271953(L_4, _stringLiteral2922588279, L_6, /*hidden argument*/NULL);
		V_0 = L_7;
		RuntimeObject * L_8 = V_0;
		WeakReference_AllocateHandle_m1478975559(__this, L_8, /*hidden argument*/NULL);
		return;
	}
}
// System.Object System.WeakReference::get_Target()
extern "C" IL2CPP_METHOD_ATTR RuntimeObject * WeakReference_get_Target_m168713953 (WeakReference_t1334886716 * __this, const RuntimeMethod* method)
{
	{
		GCHandle_t3351438187 * L_0 = __this->get_address_of_gcHandle_1();
		bool L_1 = GCHandle_get_IsAllocated_m1058226959((GCHandle_t3351438187 *)L_0, /*hidden argument*/NULL);
		if (L_1)
		{
			goto IL_000f;
		}
	}
	{
		return NULL;
	}

IL_000f:
	{
		GCHandle_t3351438187 * L_2 = __this->get_address_of_gcHandle_1();
		RuntimeObject * L_3 = GCHandle_get_Target_m1824973883((GCHandle_t3351438187 *)L_2, /*hidden argument*/NULL);
		return L_3;
	}
}
// System.Boolean System.WeakReference::get_TrackResurrection()
extern "C" IL2CPP_METHOD_ATTR bool WeakReference_get_TrackResurrection_m942701017 (WeakReference_t1334886716 * __this, const RuntimeMethod* method)
{
	{
		bool L_0 = __this->get_isLongReference_0();
		return L_0;
	}
}
// System.Void System.WeakReference::Finalize()
extern "C" IL2CPP_METHOD_ATTR void WeakReference_Finalize_m2841826116 (WeakReference_t1334886716 * __this, const RuntimeMethod* method)
{
	Exception_t * __last_unhandled_exception = 0;
	NO_UNUSED_WARNING (__last_unhandled_exception);
	Exception_t * __exception_local = 0;
	NO_UNUSED_WARNING (__exception_local);
	int32_t __leave_target = -1;
	NO_UNUSED_WARNING (__leave_target);

IL_0000:
	try
	{ // begin try (depth: 1)
		GCHandle_t3351438187 * L_0 = __this->get_address_of_gcHandle_1();
		GCHandle_Free_m1457699368((GCHandle_t3351438187 *)L_0, /*hidden argument*/NULL);
		IL2CPP_LEAVE(0x14, FINALLY_000d);
	} // end try (depth: 1)
	catch(Il2CppExceptionWrapper& e)
	{
		__last_unhandled_exception = (Exception_t *)e.ex;
		goto FINALLY_000d;
	}

FINALLY_000d:
	{ // begin finally (depth: 1)
		Object_Finalize_m3076187857(__this, /*hidden argument*/NULL);
		IL2CPP_END_FINALLY(13)
	} // end finally (depth: 1)
	IL2CPP_CLEANUP(13)
	{
		IL2CPP_JUMP_TBL(0x14, IL_0014)
		IL2CPP_RETHROW_IF_UNHANDLED(Exception_t *)
	}

IL_0014:
	{
		return;
	}
}
// System.Void System.WeakReference::GetObjectData(System.Runtime.Serialization.SerializationInfo,System.Runtime.Serialization.StreamingContext)
extern "C" IL2CPP_METHOD_ATTR void WeakReference_GetObjectData_m2192383095 (WeakReference_t1334886716 * __this, SerializationInfo_t950877179 * ___info0, StreamingContext_t3711869237  ___context1, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (WeakReference_GetObjectData_m2192383095_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	Exception_t * __last_unhandled_exception = 0;
	NO_UNUSED_WARNING (__last_unhandled_exception);
	Exception_t * __exception_local = 0;
	NO_UNUSED_WARNING (__exception_local);
	int32_t __leave_target = -1;
	NO_UNUSED_WARNING (__leave_target);
	{
		SerializationInfo_t950877179 * L_0 = ___info0;
		if (L_0)
		{
			goto IL_000e;
		}
	}
	{
		ArgumentNullException_t1615371798 * L_1 = (ArgumentNullException_t1615371798 *)il2cpp_codegen_object_new(ArgumentNullException_t1615371798_il2cpp_TypeInfo_var);
		ArgumentNullException__ctor_m1170824041(L_1, _stringLiteral79347, /*hidden argument*/NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_1, NULL, WeakReference_GetObjectData_m2192383095_RuntimeMethod_var);
	}

IL_000e:
	{
		SerializationInfo_t950877179 * L_2 = ___info0;
		bool L_3 = VirtFuncInvoker0< bool >::Invoke(6 /* System.Boolean System.WeakReference::get_TrackResurrection() */, __this);
		SerializationInfo_AddValue_m3427199315(L_2, _stringLiteral3234942771, L_3, /*hidden argument*/NULL);
	}

IL_001f:
	try
	{ // begin try (depth: 1)
		SerializationInfo_t950877179 * L_4 = ___info0;
		RuntimeObject * L_5 = VirtFuncInvoker0< RuntimeObject * >::Invoke(5 /* System.Object System.WeakReference::get_Target() */, __this);
		SerializationInfo_AddValue_m2872281893(L_4, _stringLiteral2922588279, L_5, /*hidden argument*/NULL);
		goto IL_0041;
	} // end try (depth: 1)
	catch(Il2CppExceptionWrapper& e)
	{
		__exception_local = (Exception_t *)e.ex;
		if(il2cpp_codegen_class_is_assignable_from (Exception_t_il2cpp_TypeInfo_var, il2cpp_codegen_object_class(e.ex)))
			goto CATCH_0032;
		throw e;
	}

CATCH_0032:
	{ // begin catch(System.Exception)
		SerializationInfo_t950877179 * L_6 = ___info0;
		SerializationInfo_AddValue_m2872281893(L_6, _stringLiteral2922588279, NULL, /*hidden argument*/NULL);
		goto IL_0041;
	} // end catch (depth: 1)

IL_0041:
	{
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
// System.Void System.WindowsConsoleDriver::.ctor()
extern "C" IL2CPP_METHOD_ATTR void WindowsConsoleDriver__ctor_m141100690 (WindowsConsoleDriver_t3991887195 * __this, const RuntimeMethod* method)
{
	ConsoleScreenBufferInfo_t3095351730  V_0;
	memset(&V_0, 0, sizeof(V_0));
	{
		Object__ctor_m297566312(__this, /*hidden argument*/NULL);
		intptr_t L_0 = WindowsConsoleDriver_GetStdHandle_m23119533(NULL /*static, unused*/, ((int32_t)-11), /*hidden argument*/NULL);
		__this->set_outputHandle_1((intptr_t)L_0);
		intptr_t L_1 = WindowsConsoleDriver_GetStdHandle_m23119533(NULL /*static, unused*/, ((int32_t)-10), /*hidden argument*/NULL);
		__this->set_inputHandle_0((intptr_t)L_1);
		il2cpp_codegen_initobj((&V_0), sizeof(ConsoleScreenBufferInfo_t3095351730 ));
		intptr_t L_2 = __this->get_outputHandle_1();
		WindowsConsoleDriver_GetConsoleScreenBufferInfo_m3609341087(NULL /*static, unused*/, (intptr_t)L_2, (ConsoleScreenBufferInfo_t3095351730 *)(&V_0), /*hidden argument*/NULL);
		ConsoleScreenBufferInfo_t3095351730  L_3 = V_0;
		int16_t L_4 = L_3.get_Attribute_2();
		__this->set_defaultAttribute_2(L_4);
		return;
	}
}
// System.ConsoleKeyInfo System.WindowsConsoleDriver::ReadKey(System.Boolean)
extern "C" IL2CPP_METHOD_ATTR ConsoleKeyInfo_t1802691652  WindowsConsoleDriver_ReadKey_m209631140 (WindowsConsoleDriver_t3991887195 * __this, bool ___intercept0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (WindowsConsoleDriver_ReadKey_m209631140_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	InputRecord_t2660212290  V_1;
	memset(&V_1, 0, sizeof(V_1));
	bool V_2 = false;
	bool V_3 = false;
	bool V_4 = false;
	{
		il2cpp_codegen_initobj((&V_1), sizeof(InputRecord_t2660212290 ));
	}

IL_0008:
	{
		intptr_t L_0 = __this->get_inputHandle_0();
		bool L_1 = WindowsConsoleDriver_ReadConsoleInput_m1790694890(NULL /*static, unused*/, (intptr_t)L_0, (InputRecord_t2660212290 *)(&V_1), 1, (int32_t*)(&V_0), /*hidden argument*/NULL);
		if (L_1)
		{
			goto IL_0034;
		}
	}
	{
		IL2CPP_RUNTIME_CLASS_INIT(Marshal_t1757017490_il2cpp_TypeInfo_var);
		int32_t L_2 = Marshal_GetLastWin32Error_m1272610344(NULL /*static, unused*/, /*hidden argument*/NULL);
		int32_t L_3 = L_2;
		RuntimeObject * L_4 = Box(Int32_t2950945753_il2cpp_TypeInfo_var, &L_3);
		String_t* L_5 = String_Concat_m904156431(NULL /*static, unused*/, _stringLiteral1071424308, L_4, /*hidden argument*/NULL);
		InvalidOperationException_t56020091 * L_6 = (InvalidOperationException_t56020091 *)il2cpp_codegen_object_new(InvalidOperationException_t56020091_il2cpp_TypeInfo_var);
		InvalidOperationException__ctor_m237278729(L_6, L_5, /*hidden argument*/NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_6, NULL, WindowsConsoleDriver_ReadKey_m209631140_RuntimeMethod_var);
	}

IL_0034:
	{
		InputRecord_t2660212290  L_7 = V_1;
		bool L_8 = L_7.get_KeyDown_1();
		if (!L_8)
		{
			goto IL_0008;
		}
	}
	{
		InputRecord_t2660212290  L_9 = V_1;
		int16_t L_10 = L_9.get_EventType_0();
		if ((!(((uint32_t)L_10) == ((uint32_t)1))))
		{
			goto IL_0008;
		}
	}
	{
		InputRecord_t2660212290  L_11 = V_1;
		int16_t L_12 = L_11.get_VirtualKeyCode_3();
		bool L_13 = WindowsConsoleDriver_IsModifierKey_m1974886538(NULL /*static, unused*/, L_12, /*hidden argument*/NULL);
		if (L_13)
		{
			goto IL_0008;
		}
	}
	{
		InputRecord_t2660212290  L_14 = V_1;
		int32_t L_15 = L_14.get_ControlKeyState_6();
		V_2 = (bool)((!(((uint32_t)((int32_t)((int32_t)L_15&(int32_t)3))) <= ((uint32_t)0)))? 1 : 0);
		InputRecord_t2660212290  L_16 = V_1;
		int32_t L_17 = L_16.get_ControlKeyState_6();
		V_3 = (bool)((!(((uint32_t)((int32_t)((int32_t)L_17&(int32_t)((int32_t)12)))) <= ((uint32_t)0)))? 1 : 0);
		InputRecord_t2660212290  L_18 = V_1;
		int32_t L_19 = L_18.get_ControlKeyState_6();
		V_4 = (bool)((!(((uint32_t)((int32_t)((int32_t)L_19&(int32_t)((int32_t)16)))) <= ((uint32_t)0)))? 1 : 0);
		InputRecord_t2660212290  L_20 = V_1;
		Il2CppChar L_21 = L_20.get_Character_5();
		InputRecord_t2660212290  L_22 = V_1;
		int16_t L_23 = L_22.get_VirtualKeyCode_3();
		bool L_24 = V_4;
		bool L_25 = V_2;
		bool L_26 = V_3;
		ConsoleKeyInfo_t1802691652  L_27;
		memset(&L_27, 0, sizeof(L_27));
		ConsoleKeyInfo__ctor_m535940175((&L_27), L_21, L_23, L_24, L_25, L_26, /*hidden argument*/NULL);
		return L_27;
	}
}
// System.Boolean System.WindowsConsoleDriver::IsModifierKey(System.Int16)
extern "C" IL2CPP_METHOD_ATTR bool WindowsConsoleDriver_IsModifierKey_m1974886538 (RuntimeObject * __this /* static, unused */, int16_t ___virtualKeyCode0, const RuntimeMethod* method)
{
	{
		int16_t L_0 = ___virtualKeyCode0;
		if ((!(((uint32_t)((int32_t)il2cpp_codegen_subtract((int32_t)L_0, (int32_t)((int32_t)16)))) > ((uint32_t)2))))
		{
			goto IL_0016;
		}
	}
	{
		int16_t L_1 = ___virtualKeyCode0;
		if ((((int32_t)L_1) == ((int32_t)((int32_t)20))))
		{
			goto IL_0016;
		}
	}
	{
		int16_t L_2 = ___virtualKeyCode0;
		if ((!(((uint32_t)((int32_t)il2cpp_codegen_subtract((int32_t)L_2, (int32_t)((int32_t)144)))) <= ((uint32_t)1))))
		{
			goto IL_0018;
		}
	}

IL_0016:
	{
		return (bool)1;
	}

IL_0018:
	{
		return (bool)0;
	}
}
// System.IntPtr System.WindowsConsoleDriver::GetStdHandle(System.Handles)
extern "C" IL2CPP_METHOD_ATTR intptr_t WindowsConsoleDriver_GetStdHandle_m23119533 (RuntimeObject * __this /* static, unused */, int32_t ___handle0, const RuntimeMethod* method)
{
	typedef intptr_t (DEFAULT_CALL *PInvokeFunc) (int32_t);
	static PInvokeFunc il2cppPInvokeFunc;
	if (il2cppPInvokeFunc == NULL)
	{
		int parameterSize = sizeof(int32_t);
		il2cppPInvokeFunc = il2cpp_codegen_resolve_pinvoke<PInvokeFunc>(IL2CPP_NATIVE_STRING("kernel32.dll"), "GetStdHandle", IL2CPP_CALL_DEFAULT, CHARSET_UNICODE, parameterSize, false);

		if (il2cppPInvokeFunc == NULL)
		{
			IL2CPP_RAISE_MANAGED_EXCEPTION(il2cpp_codegen_get_not_supported_exception("Unable to find method for p/invoke: 'GetStdHandle'"), NULL, NULL);
		}
	}

	// Native function invocation
	intptr_t returnValue = il2cppPInvokeFunc(___handle0);
	il2cpp_codegen_marshal_store_last_error();

	return returnValue;
}
// System.Boolean System.WindowsConsoleDriver::GetConsoleScreenBufferInfo(System.IntPtr,System.ConsoleScreenBufferInfo&)
extern "C" IL2CPP_METHOD_ATTR bool WindowsConsoleDriver_GetConsoleScreenBufferInfo_m3609341087 (RuntimeObject * __this /* static, unused */, intptr_t ___handle0, ConsoleScreenBufferInfo_t3095351730 * ___info1, const RuntimeMethod* method)
{
	typedef int32_t (DEFAULT_CALL *PInvokeFunc) (intptr_t, ConsoleScreenBufferInfo_t3095351730 *);
	static PInvokeFunc il2cppPInvokeFunc;
	if (il2cppPInvokeFunc == NULL)
	{
		int parameterSize = sizeof(intptr_t) + sizeof(ConsoleScreenBufferInfo_t3095351730 *);
		il2cppPInvokeFunc = il2cpp_codegen_resolve_pinvoke<PInvokeFunc>(IL2CPP_NATIVE_STRING("kernel32.dll"), "GetConsoleScreenBufferInfo", IL2CPP_CALL_DEFAULT, CHARSET_UNICODE, parameterSize, false);

		if (il2cppPInvokeFunc == NULL)
		{
			IL2CPP_RAISE_MANAGED_EXCEPTION(il2cpp_codegen_get_not_supported_exception("Unable to find method for p/invoke: 'GetConsoleScreenBufferInfo'"), NULL, NULL);
		}
	}

	// Native function invocation
	int32_t returnValue = il2cppPInvokeFunc(___handle0, ___info1);
	il2cpp_codegen_marshal_store_last_error();

	return static_cast<bool>(returnValue);
}
// System.Boolean System.WindowsConsoleDriver::ReadConsoleInput(System.IntPtr,System.InputRecord&,System.Int32,System.Int32&)
extern "C" IL2CPP_METHOD_ATTR bool WindowsConsoleDriver_ReadConsoleInput_m1790694890 (RuntimeObject * __this /* static, unused */, intptr_t ___handle0, InputRecord_t2660212290 * ___record1, int32_t ___length2, int32_t* ___nread3, const RuntimeMethod* method)
{


	typedef int32_t (DEFAULT_CALL *PInvokeFunc) (intptr_t, InputRecord_t2660212290_marshaled_pinvoke*, int32_t, int32_t*);
	static PInvokeFunc il2cppPInvokeFunc;
	if (il2cppPInvokeFunc == NULL)
	{
		int parameterSize = sizeof(intptr_t) + sizeof(InputRecord_t2660212290_marshaled_pinvoke*) + sizeof(int32_t) + sizeof(int32_t*);
		il2cppPInvokeFunc = il2cpp_codegen_resolve_pinvoke<PInvokeFunc>(IL2CPP_NATIVE_STRING("kernel32.dll"), "ReadConsoleInput", IL2CPP_CALL_DEFAULT, CHARSET_UNICODE, parameterSize, false);

		if (il2cppPInvokeFunc == NULL)
		{
			IL2CPP_RAISE_MANAGED_EXCEPTION(il2cpp_codegen_get_not_supported_exception("Unable to find method for p/invoke: 'ReadConsoleInput'"), NULL, NULL);
		}
	}

	// Marshaling of parameter '___record1' to native representation
	InputRecord_t2660212290_marshaled_pinvoke ____record1_empty = {};
	InputRecord_t2660212290_marshaled_pinvoke* ____record1_marshaled = &____record1_empty;

	// Native function invocation
	int32_t returnValue = il2cppPInvokeFunc(___handle0, ____record1_marshaled, ___length2, ___nread3);
	il2cpp_codegen_marshal_store_last_error();

	// Marshaling of parameter '___record1' back from native representation
	InputRecord_t2660212290  _____record1_marshaled_unmarshaled_dereferenced;
	memset(&_____record1_marshaled_unmarshaled_dereferenced, 0, sizeof(_____record1_marshaled_unmarshaled_dereferenced));
	InputRecord_t2660212290_marshal_pinvoke_back(*____record1_marshaled, _____record1_marshaled_unmarshaled_dereferenced);
	*___record1 = _____record1_marshaled_unmarshaled_dereferenced;

	// Marshaling cleanup of parameter '___record1' native representation
	InputRecord_t2660212290_marshal_pinvoke_cleanup(*____record1_marshaled);

	return static_cast<bool>(returnValue);
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Void System.__ComObject::.ctor()
extern "C" IL2CPP_METHOD_ATTR void __ComObject__ctor_m3980049925 (__ComObject_t2735933417 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (__ComObject__ctor_m3980049925_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		Object__ctor_m297566312(__this, /*hidden argument*/NULL);
		NotSupportedException_t1314879016 * L_0 = (NotSupportedException_t1314879016 *)il2cpp_codegen_object_new(NotSupportedException_t1314879016_il2cpp_TypeInfo_var);
		NotSupportedException__ctor_m2730133172(L_0, /*hidden argument*/NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_0, NULL, __ComObject__ctor_m3980049925_RuntimeMethod_var);
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
// Conversion methods for marshalling of: System.__DTString
extern "C" void __DTString_t2014593278_marshal_pinvoke(const __DTString_t2014593278& unmarshaled, __DTString_t2014593278_marshaled_pinvoke& marshaled)
{
	Exception_t* ___m_info_4Exception = il2cpp_codegen_get_marshal_directive_exception("Cannot marshal field 'm_info' of type '__DTString': Reference type field marshaling is not supported.");
	IL2CPP_RAISE_MANAGED_EXCEPTION(___m_info_4Exception, NULL, NULL);
}
extern "C" void __DTString_t2014593278_marshal_pinvoke_back(const __DTString_t2014593278_marshaled_pinvoke& marshaled, __DTString_t2014593278& unmarshaled)
{
	Exception_t* ___m_info_4Exception = il2cpp_codegen_get_marshal_directive_exception("Cannot marshal field 'm_info' of type '__DTString': Reference type field marshaling is not supported.");
	IL2CPP_RAISE_MANAGED_EXCEPTION(___m_info_4Exception, NULL, NULL);
}
// Conversion method for clean up from marshalling of: System.__DTString
extern "C" void __DTString_t2014593278_marshal_pinvoke_cleanup(__DTString_t2014593278_marshaled_pinvoke& marshaled)
{
}
// Conversion methods for marshalling of: System.__DTString
extern "C" void __DTString_t2014593278_marshal_com(const __DTString_t2014593278& unmarshaled, __DTString_t2014593278_marshaled_com& marshaled)
{
	Exception_t* ___m_info_4Exception = il2cpp_codegen_get_marshal_directive_exception("Cannot marshal field 'm_info' of type '__DTString': Reference type field marshaling is not supported.");
	IL2CPP_RAISE_MANAGED_EXCEPTION(___m_info_4Exception, NULL, NULL);
}
extern "C" void __DTString_t2014593278_marshal_com_back(const __DTString_t2014593278_marshaled_com& marshaled, __DTString_t2014593278& unmarshaled)
{
	Exception_t* ___m_info_4Exception = il2cpp_codegen_get_marshal_directive_exception("Cannot marshal field 'm_info' of type '__DTString': Reference type field marshaling is not supported.");
	IL2CPP_RAISE_MANAGED_EXCEPTION(___m_info_4Exception, NULL, NULL);
}
// Conversion method for clean up from marshalling of: System.__DTString
extern "C" void __DTString_t2014593278_marshal_com_cleanup(__DTString_t2014593278_marshaled_com& marshaled)
{
}
// System.Void System.__DTString::.ctor(System.String,System.Globalization.DateTimeFormatInfo,System.Boolean)
extern "C" IL2CPP_METHOD_ATTR void __DTString__ctor_m2897552437 (__DTString_t2014593278 * __this, String_t* ___str0, DateTimeFormatInfo_t2405853701 * ___dtfi1, bool ___checkDigitToken2, const RuntimeMethod* method)
{
	{
		String_t* L_0 = ___str0;
		DateTimeFormatInfo_t2405853701 * L_1 = ___dtfi1;
		__DTString__ctor_m4216323856((__DTString_t2014593278 *)__this, L_0, L_1, /*hidden argument*/NULL);
		bool L_2 = ___checkDigitToken2;
		__this->set_m_checkDigitToken_5(L_2);
		return;
	}
}
extern "C"  void __DTString__ctor_m2897552437_AdjustorThunk (RuntimeObject * __this, String_t* ___str0, DateTimeFormatInfo_t2405853701 * ___dtfi1, bool ___checkDigitToken2, const RuntimeMethod* method)
{
	__DTString_t2014593278 * _thisAdjusted = reinterpret_cast<__DTString_t2014593278 *>(__this + 1);
	__DTString__ctor_m2897552437(_thisAdjusted, ___str0, ___dtfi1, ___checkDigitToken2, method);
}
// System.Void System.__DTString::.ctor(System.String,System.Globalization.DateTimeFormatInfo)
extern "C" IL2CPP_METHOD_ATTR void __DTString__ctor_m4216323856 (__DTString_t2014593278 * __this, String_t* ___str0, DateTimeFormatInfo_t2405853701 * ___dtfi1, const RuntimeMethod* method)
{
	{
		__this->set_Index_1((-1));
		String_t* L_0 = ___str0;
		__this->set_Value_0(L_0);
		String_t* L_1 = __this->get_Value_0();
		int32_t L_2 = String_get_Length_m3847582255(L_1, /*hidden argument*/NULL);
		__this->set_len_2(L_2);
		__this->set_m_current_3(0);
		DateTimeFormatInfo_t2405853701 * L_3 = ___dtfi1;
		if (!L_3)
		{
			goto IL_0048;
		}
	}
	{
		DateTimeFormatInfo_t2405853701 * L_4 = ___dtfi1;
		CompareInfo_t1092934962 * L_5 = DateTimeFormatInfo_get_CompareInfo_m2732307212(L_4, /*hidden argument*/NULL);
		__this->set_m_info_4(L_5);
		DateTimeFormatInfo_t2405853701 * L_6 = ___dtfi1;
		int32_t L_7 = DateTimeFormatInfo_get_FormatFlags_m1385434814(L_6, /*hidden argument*/NULL);
		__this->set_m_checkDigitToken_5((bool)((!(((uint32_t)((int32_t)((int32_t)L_7&(int32_t)((int32_t)32)))) <= ((uint32_t)0)))? 1 : 0));
		return;
	}

IL_0048:
	{
		Thread_t2300836069 * L_8 = Thread_get_CurrentThread_m4142136012(NULL /*static, unused*/, /*hidden argument*/NULL);
		CultureInfo_t4157843068 * L_9 = Thread_get_CurrentCulture_m349116646(L_8, /*hidden argument*/NULL);
		CompareInfo_t1092934962 * L_10 = VirtFuncInvoker0< CompareInfo_t1092934962 * >::Invoke(12 /* System.Globalization.CompareInfo System.Globalization.CultureInfo::get_CompareInfo() */, L_9);
		__this->set_m_info_4(L_10);
		__this->set_m_checkDigitToken_5((bool)0);
		return;
	}
}
extern "C"  void __DTString__ctor_m4216323856_AdjustorThunk (RuntimeObject * __this, String_t* ___str0, DateTimeFormatInfo_t2405853701 * ___dtfi1, const RuntimeMethod* method)
{
	__DTString_t2014593278 * _thisAdjusted = reinterpret_cast<__DTString_t2014593278 *>(__this + 1);
	__DTString__ctor_m4216323856(_thisAdjusted, ___str0, ___dtfi1, method);
}
// System.Globalization.CompareInfo System.__DTString::get_CompareInfo()
extern "C" IL2CPP_METHOD_ATTR CompareInfo_t1092934962 * __DTString_get_CompareInfo_m3716528085 (__DTString_t2014593278 * __this, const RuntimeMethod* method)
{
	{
		CompareInfo_t1092934962 * L_0 = __this->get_m_info_4();
		return L_0;
	}
}
extern "C"  CompareInfo_t1092934962 * __DTString_get_CompareInfo_m3716528085_AdjustorThunk (RuntimeObject * __this, const RuntimeMethod* method)
{
	__DTString_t2014593278 * _thisAdjusted = reinterpret_cast<__DTString_t2014593278 *>(__this + 1);
	return __DTString_get_CompareInfo_m3716528085(_thisAdjusted, method);
}
// System.Boolean System.__DTString::GetNext()
extern "C" IL2CPP_METHOD_ATTR bool __DTString_GetNext_m3216272439 (__DTString_t2014593278 * __this, const RuntimeMethod* method)
{
	{
		int32_t L_0 = __this->get_Index_1();
		__this->set_Index_1(((int32_t)il2cpp_codegen_add((int32_t)L_0, (int32_t)1)));
		int32_t L_1 = __this->get_Index_1();
		int32_t L_2 = __this->get_len_2();
		if ((((int32_t)L_1) >= ((int32_t)L_2)))
		{
			goto IL_0035;
		}
	}
	{
		String_t* L_3 = __this->get_Value_0();
		int32_t L_4 = __this->get_Index_1();
		Il2CppChar L_5 = String_get_Chars_m2986988803(L_3, L_4, /*hidden argument*/NULL);
		__this->set_m_current_3(L_5);
		return (bool)1;
	}

IL_0035:
	{
		return (bool)0;
	}
}
extern "C"  bool __DTString_GetNext_m3216272439_AdjustorThunk (RuntimeObject * __this, const RuntimeMethod* method)
{
	__DTString_t2014593278 * _thisAdjusted = reinterpret_cast<__DTString_t2014593278 *>(__this + 1);
	return __DTString_GetNext_m3216272439(_thisAdjusted, method);
}
// System.Boolean System.__DTString::AtEnd()
extern "C" IL2CPP_METHOD_ATTR bool __DTString_AtEnd_m4056853577 (__DTString_t2014593278 * __this, const RuntimeMethod* method)
{
	{
		int32_t L_0 = __this->get_Index_1();
		int32_t L_1 = __this->get_len_2();
		if ((((int32_t)L_0) < ((int32_t)L_1)))
		{
			goto IL_0010;
		}
	}
	{
		return (bool)1;
	}

IL_0010:
	{
		return (bool)0;
	}
}
extern "C"  bool __DTString_AtEnd_m4056853577_AdjustorThunk (RuntimeObject * __this, const RuntimeMethod* method)
{
	__DTString_t2014593278 * _thisAdjusted = reinterpret_cast<__DTString_t2014593278 *>(__this + 1);
	return __DTString_AtEnd_m4056853577(_thisAdjusted, method);
}
// System.Boolean System.__DTString::Advance(System.Int32)
extern "C" IL2CPP_METHOD_ATTR bool __DTString_Advance_m3393158789 (__DTString_t2014593278 * __this, int32_t ___count0, const RuntimeMethod* method)
{
	{
		int32_t L_0 = __this->get_Index_1();
		int32_t L_1 = ___count0;
		__this->set_Index_1(((int32_t)il2cpp_codegen_add((int32_t)L_0, (int32_t)L_1)));
		int32_t L_2 = __this->get_Index_1();
		int32_t L_3 = __this->get_len_2();
		if ((((int32_t)L_2) >= ((int32_t)L_3)))
		{
			goto IL_0035;
		}
	}
	{
		String_t* L_4 = __this->get_Value_0();
		int32_t L_5 = __this->get_Index_1();
		Il2CppChar L_6 = String_get_Chars_m2986988803(L_4, L_5, /*hidden argument*/NULL);
		__this->set_m_current_3(L_6);
		return (bool)1;
	}

IL_0035:
	{
		return (bool)0;
	}
}
extern "C"  bool __DTString_Advance_m3393158789_AdjustorThunk (RuntimeObject * __this, int32_t ___count0, const RuntimeMethod* method)
{
	__DTString_t2014593278 * _thisAdjusted = reinterpret_cast<__DTString_t2014593278 *>(__this + 1);
	return __DTString_Advance_m3393158789(_thisAdjusted, ___count0, method);
}
// System.Void System.__DTString::GetRegularToken(System.TokenType&,System.Int32&,System.Globalization.DateTimeFormatInfo)
extern "C" IL2CPP_METHOD_ATTR void __DTString_GetRegularToken_m3127405658 (__DTString_t2014593278 * __this, int32_t* ___tokenType0, int32_t* ___tokenValue1, DateTimeFormatInfo_t2405853701 * ___dtfi2, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (__DTString_GetRegularToken_m3127405658_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	int32_t V_1 = 0;
	int32_t V_2 = 0;
	int32_t V_3 = 0;
	Il2CppChar V_4 = 0x0;
	int32_t V_5 = 0;
	int32_t V_6 = 0;
	{
		int32_t* L_0 = ___tokenValue1;
		*((int32_t*)L_0) = (int32_t)0;
		int32_t L_1 = __this->get_Index_1();
		int32_t L_2 = __this->get_len_2();
		if ((((int32_t)L_1) < ((int32_t)L_2)))
		{
			goto IL_0015;
		}
	}
	{
		int32_t* L_3 = ___tokenType0;
		*((int32_t*)L_3) = (int32_t)6;
		return;
	}

IL_0015:
	{
		int32_t* L_4 = ___tokenType0;
		*((int32_t*)L_4) = (int32_t)((int32_t)11);
	}

IL_0019:
	{
		Il2CppChar L_5 = __this->get_m_current_3();
		IL2CPP_RUNTIME_CLASS_INIT(DateTimeParse_t715850018_il2cpp_TypeInfo_var);
		bool L_6 = DateTimeParse_IsDigit_m3727153098(NULL /*static, unused*/, L_5, /*hidden argument*/NULL);
		if (!L_6)
		{
			goto IL_0112;
		}
	}
	{
		int32_t* L_7 = ___tokenValue1;
		Il2CppChar L_8 = __this->get_m_current_3();
		*((int32_t*)L_7) = (int32_t)((int32_t)il2cpp_codegen_subtract((int32_t)L_8, (int32_t)((int32_t)48)));
		int32_t L_9 = __this->get_Index_1();
		V_1 = L_9;
		goto IL_0070;
	}

IL_003d:
	{
		String_t* L_10 = __this->get_Value_0();
		int32_t L_11 = __this->get_Index_1();
		Il2CppChar L_12 = String_get_Chars_m2986988803(L_10, L_11, /*hidden argument*/NULL);
		__this->set_m_current_3(L_12);
		Il2CppChar L_13 = __this->get_m_current_3();
		V_0 = ((int32_t)il2cpp_codegen_subtract((int32_t)L_13, (int32_t)((int32_t)48)));
		int32_t L_14 = V_0;
		if ((((int32_t)L_14) < ((int32_t)0)))
		{
			goto IL_0089;
		}
	}
	{
		int32_t L_15 = V_0;
		if ((((int32_t)L_15) > ((int32_t)((int32_t)9))))
		{
			goto IL_0089;
		}
	}
	{
		int32_t* L_16 = ___tokenValue1;
		int32_t* L_17 = ___tokenValue1;
		int32_t L_18 = *((int32_t*)L_17);
		int32_t L_19 = V_0;
		*((int32_t*)L_16) = (int32_t)((int32_t)il2cpp_codegen_add((int32_t)((int32_t)il2cpp_codegen_multiply((int32_t)L_18, (int32_t)((int32_t)10))), (int32_t)L_19));
	}

IL_0070:
	{
		int32_t L_20 = __this->get_Index_1();
		V_2 = ((int32_t)il2cpp_codegen_add((int32_t)L_20, (int32_t)1));
		int32_t L_21 = V_2;
		__this->set_Index_1(L_21);
		int32_t L_22 = V_2;
		int32_t L_23 = __this->get_len_2();
		if ((((int32_t)L_22) < ((int32_t)L_23)))
		{
			goto IL_003d;
		}
	}

IL_0089:
	{
		int32_t L_24 = __this->get_Index_1();
		int32_t L_25 = V_1;
		if ((((int32_t)((int32_t)il2cpp_codegen_subtract((int32_t)L_24, (int32_t)L_25))) <= ((int32_t)8)))
		{
			goto IL_009c;
		}
	}
	{
		int32_t* L_26 = ___tokenType0;
		*((int32_t*)L_26) = (int32_t)1;
		int32_t* L_27 = ___tokenValue1;
		*((int32_t*)L_27) = (int32_t)(-1);
		goto IL_00af;
	}

IL_009c:
	{
		int32_t L_28 = __this->get_Index_1();
		int32_t L_29 = V_1;
		if ((((int32_t)((int32_t)il2cpp_codegen_subtract((int32_t)L_28, (int32_t)L_29))) >= ((int32_t)3)))
		{
			goto IL_00ac;
		}
	}
	{
		int32_t* L_30 = ___tokenType0;
		*((int32_t*)L_30) = (int32_t)1;
		goto IL_00af;
	}

IL_00ac:
	{
		int32_t* L_31 = ___tokenType0;
		*((int32_t*)L_31) = (int32_t)2;
	}

IL_00af:
	{
		bool L_32 = __this->get_m_checkDigitToken_5();
		if (!L_32)
		{
			goto IL_0174;
		}
	}
	{
		int32_t L_33 = __this->get_Index_1();
		V_3 = L_33;
		Il2CppChar L_34 = __this->get_m_current_3();
		V_4 = L_34;
		int32_t L_35 = V_1;
		__this->set_Index_1(L_35);
		String_t* L_36 = __this->get_Value_0();
		int32_t L_37 = __this->get_Index_1();
		Il2CppChar L_38 = String_get_Chars_m2986988803(L_36, L_37, /*hidden argument*/NULL);
		__this->set_m_current_3(L_38);
		DateTimeFormatInfo_t2405853701 * L_39 = ___dtfi2;
		bool L_40 = DateTimeFormatInfo_Tokenize_m4098328262(L_39, ((int32_t)255), (int32_t*)(&V_5), (int32_t*)(&V_6), (__DTString_t2014593278 *)__this, /*hidden argument*/NULL);
		if (!L_40)
		{
			goto IL_0102;
		}
	}
	{
		int32_t* L_41 = ___tokenType0;
		int32_t L_42 = V_5;
		*((int32_t*)L_41) = (int32_t)L_42;
		int32_t* L_43 = ___tokenValue1;
		int32_t L_44 = V_6;
		*((int32_t*)L_43) = (int32_t)L_44;
		return;
	}

IL_0102:
	{
		int32_t L_45 = V_3;
		__this->set_Index_1(L_45);
		Il2CppChar L_46 = V_4;
		__this->set_m_current_3(L_46);
		return;
	}

IL_0112:
	{
		Il2CppChar L_47 = __this->get_m_current_3();
		IL2CPP_RUNTIME_CLASS_INIT(Char_t3634460470_il2cpp_TypeInfo_var);
		bool L_48 = Char_IsWhiteSpace_m2148390798(NULL /*static, unused*/, L_47, /*hidden argument*/NULL);
		if (!L_48)
		{
			goto IL_0165;
		}
	}
	{
		goto IL_0148;
	}

IL_0121:
	{
		String_t* L_49 = __this->get_Value_0();
		int32_t L_50 = __this->get_Index_1();
		Il2CppChar L_51 = String_get_Chars_m2986988803(L_49, L_50, /*hidden argument*/NULL);
		__this->set_m_current_3(L_51);
		Il2CppChar L_52 = __this->get_m_current_3();
		IL2CPP_RUNTIME_CLASS_INIT(Char_t3634460470_il2cpp_TypeInfo_var);
		bool L_53 = Char_IsWhiteSpace_m2148390798(NULL /*static, unused*/, L_52, /*hidden argument*/NULL);
		if (!L_53)
		{
			goto IL_0019;
		}
	}

IL_0148:
	{
		int32_t L_54 = __this->get_Index_1();
		V_2 = ((int32_t)il2cpp_codegen_add((int32_t)L_54, (int32_t)1));
		int32_t L_55 = V_2;
		__this->set_Index_1(L_55);
		int32_t L_56 = V_2;
		int32_t L_57 = __this->get_len_2();
		if ((((int32_t)L_56) < ((int32_t)L_57)))
		{
			goto IL_0121;
		}
	}
	{
		int32_t* L_58 = ___tokenType0;
		*((int32_t*)L_58) = (int32_t)6;
		return;
	}

IL_0165:
	{
		DateTimeFormatInfo_t2405853701 * L_59 = ___dtfi2;
		int32_t* L_60 = ___tokenType0;
		int32_t* L_61 = ___tokenValue1;
		DateTimeFormatInfo_Tokenize_m4098328262(L_59, ((int32_t)255), (int32_t*)L_60, (int32_t*)L_61, (__DTString_t2014593278 *)__this, /*hidden argument*/NULL);
	}

IL_0174:
	{
		return;
	}
}
extern "C"  void __DTString_GetRegularToken_m3127405658_AdjustorThunk (RuntimeObject * __this, int32_t* ___tokenType0, int32_t* ___tokenValue1, DateTimeFormatInfo_t2405853701 * ___dtfi2, const RuntimeMethod* method)
{
	__DTString_t2014593278 * _thisAdjusted = reinterpret_cast<__DTString_t2014593278 *>(__this + 1);
	__DTString_GetRegularToken_m3127405658(_thisAdjusted, ___tokenType0, ___tokenValue1, ___dtfi2, method);
}
// System.TokenType System.__DTString::GetSeparatorToken(System.Globalization.DateTimeFormatInfo,System.Int32&,System.Char&)
extern "C" IL2CPP_METHOD_ATTR int32_t __DTString_GetSeparatorToken_m2062126902 (__DTString_t2014593278 * __this, DateTimeFormatInfo_t2405853701 * ___dtfi0, int32_t* ___indexBeforeSeparator1, Il2CppChar* ___charBeforeSeparator2, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (__DTString_GetSeparatorToken_m2062126902_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	int32_t V_1 = 0;
	{
		int32_t* L_0 = ___indexBeforeSeparator1;
		int32_t L_1 = __this->get_Index_1();
		*((int32_t*)L_0) = (int32_t)L_1;
		Il2CppChar* L_2 = ___charBeforeSeparator2;
		Il2CppChar L_3 = __this->get_m_current_3();
		*((int16_t*)L_2) = (int16_t)L_3;
		bool L_4 = __DTString_SkipWhiteSpaceCurrent_m2113872575((__DTString_t2014593278 *)__this, /*hidden argument*/NULL);
		if (L_4)
		{
			goto IL_001e;
		}
	}
	{
		return (int32_t)(((int32_t)512));
	}

IL_001e:
	{
		Il2CppChar L_5 = __this->get_m_current_3();
		IL2CPP_RUNTIME_CLASS_INIT(DateTimeParse_t715850018_il2cpp_TypeInfo_var);
		bool L_6 = DateTimeParse_IsDigit_m3727153098(NULL /*static, unused*/, L_5, /*hidden argument*/NULL);
		if (L_6)
		{
			goto IL_0045;
		}
	}
	{
		DateTimeFormatInfo_t2405853701 * L_7 = ___dtfi0;
		bool L_8 = DateTimeFormatInfo_Tokenize_m4098328262(L_7, ((int32_t)65280), (int32_t*)(&V_0), (int32_t*)(&V_1), (__DTString_t2014593278 *)__this, /*hidden argument*/NULL);
		if (L_8)
		{
			goto IL_004b;
		}
	}
	{
		V_0 = ((int32_t)768);
		goto IL_004b;
	}

IL_0045:
	{
		V_0 = ((int32_t)768);
	}

IL_004b:
	{
		int32_t L_9 = V_0;
		return L_9;
	}
}
extern "C"  int32_t __DTString_GetSeparatorToken_m2062126902_AdjustorThunk (RuntimeObject * __this, DateTimeFormatInfo_t2405853701 * ___dtfi0, int32_t* ___indexBeforeSeparator1, Il2CppChar* ___charBeforeSeparator2, const RuntimeMethod* method)
{
	__DTString_t2014593278 * _thisAdjusted = reinterpret_cast<__DTString_t2014593278 *>(__this + 1);
	return __DTString_GetSeparatorToken_m2062126902(_thisAdjusted, ___dtfi0, ___indexBeforeSeparator1, ___charBeforeSeparator2, method);
}
// System.Boolean System.__DTString::MatchSpecifiedWord(System.String)
extern "C" IL2CPP_METHOD_ATTR bool __DTString_MatchSpecifiedWord_m2455863005 (__DTString_t2014593278 * __this, String_t* ___target0, const RuntimeMethod* method)
{
	{
		String_t* L_0 = ___target0;
		String_t* L_1 = ___target0;
		int32_t L_2 = String_get_Length_m3847582255(L_1, /*hidden argument*/NULL);
		int32_t L_3 = __this->get_Index_1();
		bool L_4 = __DTString_MatchSpecifiedWord_m3597025336((__DTString_t2014593278 *)__this, L_0, ((int32_t)il2cpp_codegen_add((int32_t)L_2, (int32_t)L_3)), /*hidden argument*/NULL);
		return L_4;
	}
}
extern "C"  bool __DTString_MatchSpecifiedWord_m2455863005_AdjustorThunk (RuntimeObject * __this, String_t* ___target0, const RuntimeMethod* method)
{
	__DTString_t2014593278 * _thisAdjusted = reinterpret_cast<__DTString_t2014593278 *>(__this + 1);
	return __DTString_MatchSpecifiedWord_m2455863005(_thisAdjusted, ___target0, method);
}
// System.Boolean System.__DTString::MatchSpecifiedWord(System.String,System.Int32)
extern "C" IL2CPP_METHOD_ATTR bool __DTString_MatchSpecifiedWord_m3597025336 (__DTString_t2014593278 * __this, String_t* ___target0, int32_t ___endIndex1, const RuntimeMethod* method)
{
	int32_t V_0 = 0;
	{
		int32_t L_0 = ___endIndex1;
		int32_t L_1 = __this->get_Index_1();
		V_0 = ((int32_t)il2cpp_codegen_subtract((int32_t)L_0, (int32_t)L_1));
		int32_t L_2 = V_0;
		String_t* L_3 = ___target0;
		int32_t L_4 = String_get_Length_m3847582255(L_3, /*hidden argument*/NULL);
		if ((((int32_t)L_2) == ((int32_t)L_4)))
		{
			goto IL_0014;
		}
	}
	{
		return (bool)0;
	}

IL_0014:
	{
		int32_t L_5 = __this->get_Index_1();
		int32_t L_6 = V_0;
		int32_t L_7 = __this->get_len_2();
		if ((((int32_t)((int32_t)il2cpp_codegen_add((int32_t)L_5, (int32_t)L_6))) <= ((int32_t)L_7)))
		{
			goto IL_0026;
		}
	}
	{
		return (bool)0;
	}

IL_0026:
	{
		CompareInfo_t1092934962 * L_8 = __this->get_m_info_4();
		String_t* L_9 = __this->get_Value_0();
		int32_t L_10 = __this->get_Index_1();
		int32_t L_11 = V_0;
		String_t* L_12 = ___target0;
		int32_t L_13 = V_0;
		int32_t L_14 = VirtFuncInvoker7< int32_t, String_t*, int32_t, int32_t, String_t*, int32_t, int32_t, int32_t >::Invoke(8 /* System.Int32 System.Globalization.CompareInfo::Compare(System.String,System.Int32,System.Int32,System.String,System.Int32,System.Int32,System.Globalization.CompareOptions) */, L_8, L_9, L_10, L_11, L_12, 0, L_13, 1);
		return (bool)((((int32_t)L_14) == ((int32_t)0))? 1 : 0);
	}
}
extern "C"  bool __DTString_MatchSpecifiedWord_m3597025336_AdjustorThunk (RuntimeObject * __this, String_t* ___target0, int32_t ___endIndex1, const RuntimeMethod* method)
{
	__DTString_t2014593278 * _thisAdjusted = reinterpret_cast<__DTString_t2014593278 *>(__this + 1);
	return __DTString_MatchSpecifiedWord_m3597025336(_thisAdjusted, ___target0, ___endIndex1, method);
}
// System.Boolean System.__DTString::MatchSpecifiedWords(System.String,System.Boolean,System.Int32&)
extern "C" IL2CPP_METHOD_ATTR bool __DTString_MatchSpecifiedWords_m1748097800 (__DTString_t2014593278 * __this, String_t* ___target0, bool ___checkWordBoundary1, int32_t* ___matchLength2, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (__DTString_MatchSpecifiedWords_m1748097800_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	int32_t V_1 = 0;
	int32_t V_2 = 0;
	int32_t V_3 = 0;
	int32_t V_4 = 0;
	int32_t V_5 = 0;
	int32_t V_6 = 0;
	{
		String_t* L_0 = __this->get_Value_0();
		int32_t L_1 = String_get_Length_m3847582255(L_0, /*hidden argument*/NULL);
		int32_t L_2 = __this->get_Index_1();
		V_0 = ((int32_t)il2cpp_codegen_subtract((int32_t)L_1, (int32_t)L_2));
		int32_t* L_3 = ___matchLength2;
		String_t* L_4 = ___target0;
		int32_t L_5 = String_get_Length_m3847582255(L_4, /*hidden argument*/NULL);
		*((int32_t*)L_3) = (int32_t)L_5;
		int32_t* L_6 = ___matchLength2;
		int32_t L_7 = *((int32_t*)L_6);
		int32_t L_8 = V_0;
		if ((((int32_t)L_7) > ((int32_t)L_8)))
		{
			goto IL_0043;
		}
	}
	{
		CompareInfo_t1092934962 * L_9 = __this->get_m_info_4();
		String_t* L_10 = __this->get_Value_0();
		int32_t L_11 = __this->get_Index_1();
		int32_t* L_12 = ___matchLength2;
		int32_t L_13 = *((int32_t*)L_12);
		String_t* L_14 = ___target0;
		int32_t* L_15 = ___matchLength2;
		int32_t L_16 = *((int32_t*)L_15);
		int32_t L_17 = VirtFuncInvoker7< int32_t, String_t*, int32_t, int32_t, String_t*, int32_t, int32_t, int32_t >::Invoke(8 /* System.Int32 System.Globalization.CompareInfo::Compare(System.String,System.Int32,System.Int32,System.String,System.Int32,System.Int32,System.Globalization.CompareOptions) */, L_9, L_10, L_11, L_13, L_14, 0, L_16, 1);
		if (!L_17)
		{
			goto IL_0147;
		}
	}

IL_0043:
	{
		V_1 = 0;
		int32_t L_18 = __this->get_Index_1();
		V_2 = L_18;
		String_t* L_19 = ___target0;
		IL2CPP_RUNTIME_CLASS_INIT(__DTString_t2014593278_il2cpp_TypeInfo_var);
		CharU5BU5D_t3528271667* L_20 = ((__DTString_t2014593278_StaticFields*)il2cpp_codegen_static_fields_for(__DTString_t2014593278_il2cpp_TypeInfo_var))->get_WhiteSpaceChecks_6();
		int32_t L_21 = V_1;
		int32_t L_22 = String_IndexOfAny_m2323029521(L_19, L_20, L_21, /*hidden argument*/NULL);
		V_3 = L_22;
		int32_t L_23 = V_3;
		if ((!(((uint32_t)L_23) == ((uint32_t)(-1)))))
		{
			goto IL_005f;
		}
	}
	{
		return (bool)0;
	}

IL_005f:
	{
		int32_t L_24 = V_3;
		int32_t L_25 = V_1;
		V_4 = ((int32_t)il2cpp_codegen_subtract((int32_t)L_24, (int32_t)L_25));
		int32_t L_26 = V_2;
		String_t* L_27 = __this->get_Value_0();
		int32_t L_28 = String_get_Length_m3847582255(L_27, /*hidden argument*/NULL);
		int32_t L_29 = V_4;
		if ((((int32_t)L_26) < ((int32_t)((int32_t)il2cpp_codegen_subtract((int32_t)L_28, (int32_t)L_29)))))
		{
			goto IL_0077;
		}
	}
	{
		return (bool)0;
	}

IL_0077:
	{
		int32_t L_30 = V_4;
		if (L_30)
		{
			goto IL_0083;
		}
	}
	{
		int32_t* L_31 = ___matchLength2;
		int32_t* L_32 = ___matchLength2;
		int32_t L_33 = *((int32_t*)L_32);
		*((int32_t*)L_31) = (int32_t)((int32_t)il2cpp_codegen_subtract((int32_t)L_33, (int32_t)1));
		goto IL_00bf;
	}

IL_0083:
	{
		String_t* L_34 = __this->get_Value_0();
		int32_t L_35 = V_2;
		int32_t L_36 = V_4;
		Il2CppChar L_37 = String_get_Chars_m2986988803(L_34, ((int32_t)il2cpp_codegen_add((int32_t)L_35, (int32_t)L_36)), /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(Char_t3634460470_il2cpp_TypeInfo_var);
		bool L_38 = Char_IsWhiteSpace_m2148390798(NULL /*static, unused*/, L_37, /*hidden argument*/NULL);
		if (L_38)
		{
			goto IL_009b;
		}
	}
	{
		return (bool)0;
	}

IL_009b:
	{
		CompareInfo_t1092934962 * L_39 = __this->get_m_info_4();
		String_t* L_40 = __this->get_Value_0();
		int32_t L_41 = V_2;
		int32_t L_42 = V_4;
		String_t* L_43 = ___target0;
		int32_t L_44 = V_1;
		int32_t L_45 = V_4;
		int32_t L_46 = VirtFuncInvoker7< int32_t, String_t*, int32_t, int32_t, String_t*, int32_t, int32_t, int32_t >::Invoke(8 /* System.Int32 System.Globalization.CompareInfo::Compare(System.String,System.Int32,System.Int32,System.String,System.Int32,System.Int32,System.Globalization.CompareOptions) */, L_39, L_40, L_41, L_42, L_43, L_44, L_45, 1);
		if (!L_46)
		{
			goto IL_00b8;
		}
	}
	{
		return (bool)0;
	}

IL_00b8:
	{
		int32_t L_47 = V_2;
		int32_t L_48 = V_4;
		V_2 = ((int32_t)il2cpp_codegen_add((int32_t)((int32_t)il2cpp_codegen_add((int32_t)L_47, (int32_t)L_48)), (int32_t)1));
	}

IL_00bf:
	{
		int32_t L_49 = V_3;
		V_1 = ((int32_t)il2cpp_codegen_add((int32_t)L_49, (int32_t)1));
		goto IL_00cf;
	}

IL_00c5:
	{
		int32_t L_50 = V_2;
		V_2 = ((int32_t)il2cpp_codegen_add((int32_t)L_50, (int32_t)1));
		int32_t* L_51 = ___matchLength2;
		int32_t* L_52 = ___matchLength2;
		int32_t L_53 = *((int32_t*)L_52);
		*((int32_t*)L_51) = (int32_t)((int32_t)il2cpp_codegen_add((int32_t)L_53, (int32_t)1));
	}

IL_00cf:
	{
		int32_t L_54 = V_2;
		String_t* L_55 = __this->get_Value_0();
		int32_t L_56 = String_get_Length_m3847582255(L_55, /*hidden argument*/NULL);
		if ((((int32_t)L_54) >= ((int32_t)L_56)))
		{
			goto IL_00f0;
		}
	}
	{
		String_t* L_57 = __this->get_Value_0();
		int32_t L_58 = V_2;
		Il2CppChar L_59 = String_get_Chars_m2986988803(L_57, L_58, /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(Char_t3634460470_il2cpp_TypeInfo_var);
		bool L_60 = Char_IsWhiteSpace_m2148390798(NULL /*static, unused*/, L_59, /*hidden argument*/NULL);
		if (L_60)
		{
			goto IL_00c5;
		}
	}

IL_00f0:
	{
		String_t* L_61 = ___target0;
		IL2CPP_RUNTIME_CLASS_INIT(__DTString_t2014593278_il2cpp_TypeInfo_var);
		CharU5BU5D_t3528271667* L_62 = ((__DTString_t2014593278_StaticFields*)il2cpp_codegen_static_fields_for(__DTString_t2014593278_il2cpp_TypeInfo_var))->get_WhiteSpaceChecks_6();
		int32_t L_63 = V_1;
		int32_t L_64 = String_IndexOfAny_m2323029521(L_61, L_62, L_63, /*hidden argument*/NULL);
		int32_t L_65 = L_64;
		V_3 = L_65;
		if ((((int32_t)L_65) >= ((int32_t)0)))
		{
			goto IL_005f;
		}
	}
	{
		int32_t L_66 = V_1;
		String_t* L_67 = ___target0;
		int32_t L_68 = String_get_Length_m3847582255(L_67, /*hidden argument*/NULL);
		if ((((int32_t)L_66) >= ((int32_t)L_68)))
		{
			goto IL_0147;
		}
	}
	{
		String_t* L_69 = ___target0;
		int32_t L_70 = String_get_Length_m3847582255(L_69, /*hidden argument*/NULL);
		int32_t L_71 = V_1;
		V_5 = ((int32_t)il2cpp_codegen_subtract((int32_t)L_70, (int32_t)L_71));
		int32_t L_72 = V_2;
		String_t* L_73 = __this->get_Value_0();
		int32_t L_74 = String_get_Length_m3847582255(L_73, /*hidden argument*/NULL);
		int32_t L_75 = V_5;
		if ((((int32_t)L_72) <= ((int32_t)((int32_t)il2cpp_codegen_subtract((int32_t)L_74, (int32_t)L_75)))))
		{
			goto IL_012a;
		}
	}
	{
		return (bool)0;
	}

IL_012a:
	{
		CompareInfo_t1092934962 * L_76 = __this->get_m_info_4();
		String_t* L_77 = __this->get_Value_0();
		int32_t L_78 = V_2;
		int32_t L_79 = V_5;
		String_t* L_80 = ___target0;
		int32_t L_81 = V_1;
		int32_t L_82 = V_5;
		int32_t L_83 = VirtFuncInvoker7< int32_t, String_t*, int32_t, int32_t, String_t*, int32_t, int32_t, int32_t >::Invoke(8 /* System.Int32 System.Globalization.CompareInfo::Compare(System.String,System.Int32,System.Int32,System.String,System.Int32,System.Int32,System.Globalization.CompareOptions) */, L_76, L_77, L_78, L_79, L_80, L_81, L_82, 1);
		if (!L_83)
		{
			goto IL_0147;
		}
	}
	{
		return (bool)0;
	}

IL_0147:
	{
		bool L_84 = ___checkWordBoundary1;
		if (!L_84)
		{
			goto IL_017a;
		}
	}
	{
		int32_t L_85 = __this->get_Index_1();
		int32_t* L_86 = ___matchLength2;
		int32_t L_87 = *((int32_t*)L_86);
		V_6 = ((int32_t)il2cpp_codegen_add((int32_t)L_85, (int32_t)L_87));
		int32_t L_88 = V_6;
		String_t* L_89 = __this->get_Value_0();
		int32_t L_90 = String_get_Length_m3847582255(L_89, /*hidden argument*/NULL);
		if ((((int32_t)L_88) >= ((int32_t)L_90)))
		{
			goto IL_017a;
		}
	}
	{
		String_t* L_91 = __this->get_Value_0();
		int32_t L_92 = V_6;
		Il2CppChar L_93 = String_get_Chars_m2986988803(L_91, L_92, /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(Char_t3634460470_il2cpp_TypeInfo_var);
		bool L_94 = Char_IsLetter_m3996985877(NULL /*static, unused*/, L_93, /*hidden argument*/NULL);
		if (!L_94)
		{
			goto IL_017a;
		}
	}
	{
		return (bool)0;
	}

IL_017a:
	{
		return (bool)1;
	}
}
extern "C"  bool __DTString_MatchSpecifiedWords_m1748097800_AdjustorThunk (RuntimeObject * __this, String_t* ___target0, bool ___checkWordBoundary1, int32_t* ___matchLength2, const RuntimeMethod* method)
{
	__DTString_t2014593278 * _thisAdjusted = reinterpret_cast<__DTString_t2014593278 *>(__this + 1);
	return __DTString_MatchSpecifiedWords_m1748097800(_thisAdjusted, ___target0, ___checkWordBoundary1, ___matchLength2, method);
}
// System.Boolean System.__DTString::Match(System.String)
extern "C" IL2CPP_METHOD_ATTR bool __DTString_Match_m1370723662 (__DTString_t2014593278 * __this, String_t* ___str0, const RuntimeMethod* method)
{
	int32_t V_0 = 0;
	{
		int32_t L_0 = __this->get_Index_1();
		V_0 = ((int32_t)il2cpp_codegen_add((int32_t)L_0, (int32_t)1));
		int32_t L_1 = V_0;
		__this->set_Index_1(L_1);
		int32_t L_2 = V_0;
		int32_t L_3 = __this->get_len_2();
		if ((((int32_t)L_2) < ((int32_t)L_3)))
		{
			goto IL_001b;
		}
	}
	{
		return (bool)0;
	}

IL_001b:
	{
		String_t* L_4 = ___str0;
		int32_t L_5 = String_get_Length_m3847582255(L_4, /*hidden argument*/NULL);
		String_t* L_6 = __this->get_Value_0();
		int32_t L_7 = String_get_Length_m3847582255(L_6, /*hidden argument*/NULL);
		int32_t L_8 = __this->get_Index_1();
		if ((((int32_t)L_5) <= ((int32_t)((int32_t)il2cpp_codegen_subtract((int32_t)L_7, (int32_t)L_8)))))
		{
			goto IL_0037;
		}
	}
	{
		return (bool)0;
	}

IL_0037:
	{
		CompareInfo_t1092934962 * L_9 = __this->get_m_info_4();
		String_t* L_10 = __this->get_Value_0();
		int32_t L_11 = __this->get_Index_1();
		String_t* L_12 = ___str0;
		int32_t L_13 = String_get_Length_m3847582255(L_12, /*hidden argument*/NULL);
		String_t* L_14 = ___str0;
		String_t* L_15 = ___str0;
		int32_t L_16 = String_get_Length_m3847582255(L_15, /*hidden argument*/NULL);
		int32_t L_17 = VirtFuncInvoker7< int32_t, String_t*, int32_t, int32_t, String_t*, int32_t, int32_t, int32_t >::Invoke(8 /* System.Int32 System.Globalization.CompareInfo::Compare(System.String,System.Int32,System.Int32,System.String,System.Int32,System.Int32,System.Globalization.CompareOptions) */, L_9, L_10, L_11, L_13, L_14, 0, L_16, ((int32_t)1073741824));
		if (L_17)
		{
			goto IL_007a;
		}
	}
	{
		int32_t L_18 = __this->get_Index_1();
		String_t* L_19 = ___str0;
		int32_t L_20 = String_get_Length_m3847582255(L_19, /*hidden argument*/NULL);
		__this->set_Index_1(((int32_t)il2cpp_codegen_add((int32_t)L_18, (int32_t)((int32_t)il2cpp_codegen_subtract((int32_t)L_20, (int32_t)1)))));
		return (bool)1;
	}

IL_007a:
	{
		return (bool)0;
	}
}
extern "C"  bool __DTString_Match_m1370723662_AdjustorThunk (RuntimeObject * __this, String_t* ___str0, const RuntimeMethod* method)
{
	__DTString_t2014593278 * _thisAdjusted = reinterpret_cast<__DTString_t2014593278 *>(__this + 1);
	return __DTString_Match_m1370723662(_thisAdjusted, ___str0, method);
}
// System.Boolean System.__DTString::Match(System.Char)
extern "C" IL2CPP_METHOD_ATTR bool __DTString_Match_m1638998693 (__DTString_t2014593278 * __this, Il2CppChar ___ch0, const RuntimeMethod* method)
{
	int32_t V_0 = 0;
	{
		int32_t L_0 = __this->get_Index_1();
		V_0 = ((int32_t)il2cpp_codegen_add((int32_t)L_0, (int32_t)1));
		int32_t L_1 = V_0;
		__this->set_Index_1(L_1);
		int32_t L_2 = V_0;
		int32_t L_3 = __this->get_len_2();
		if ((((int32_t)L_2) < ((int32_t)L_3)))
		{
			goto IL_001b;
		}
	}
	{
		return (bool)0;
	}

IL_001b:
	{
		String_t* L_4 = __this->get_Value_0();
		int32_t L_5 = __this->get_Index_1();
		Il2CppChar L_6 = String_get_Chars_m2986988803(L_4, L_5, /*hidden argument*/NULL);
		Il2CppChar L_7 = ___ch0;
		if ((!(((uint32_t)L_6) == ((uint32_t)L_7))))
		{
			goto IL_0038;
		}
	}
	{
		Il2CppChar L_8 = ___ch0;
		__this->set_m_current_3(L_8);
		return (bool)1;
	}

IL_0038:
	{
		int32_t L_9 = __this->get_Index_1();
		__this->set_Index_1(((int32_t)il2cpp_codegen_subtract((int32_t)L_9, (int32_t)1)));
		return (bool)0;
	}
}
extern "C"  bool __DTString_Match_m1638998693_AdjustorThunk (RuntimeObject * __this, Il2CppChar ___ch0, const RuntimeMethod* method)
{
	__DTString_t2014593278 * _thisAdjusted = reinterpret_cast<__DTString_t2014593278 *>(__this + 1);
	return __DTString_Match_m1638998693(_thisAdjusted, ___ch0, method);
}
// System.Int32 System.__DTString::MatchLongestWords(System.String[],System.Int32&)
extern "C" IL2CPP_METHOD_ATTR int32_t __DTString_MatchLongestWords_m3768057568 (__DTString_t2014593278 * __this, StringU5BU5D_t1281789340* ___words0, int32_t* ___maxMatchStrLen1, const RuntimeMethod* method)
{
	int32_t V_0 = 0;
	int32_t V_1 = 0;
	String_t* V_2 = NULL;
	int32_t V_3 = 0;
	{
		V_0 = (-1);
		V_1 = 0;
		goto IL_002b;
	}

IL_0006:
	{
		StringU5BU5D_t1281789340* L_0 = ___words0;
		int32_t L_1 = V_1;
		int32_t L_2 = L_1;
		String_t* L_3 = (L_0)->GetAtUnchecked(static_cast<il2cpp_array_size_t>(L_2));
		V_2 = L_3;
		String_t* L_4 = V_2;
		int32_t L_5 = String_get_Length_m3847582255(L_4, /*hidden argument*/NULL);
		V_3 = L_5;
		String_t* L_6 = V_2;
		bool L_7 = __DTString_MatchSpecifiedWords_m1748097800((__DTString_t2014593278 *)__this, L_6, (bool)0, (int32_t*)(&V_3), /*hidden argument*/NULL);
		if (!L_7)
		{
			goto IL_0027;
		}
	}
	{
		int32_t L_8 = V_3;
		int32_t* L_9 = ___maxMatchStrLen1;
		int32_t L_10 = *((int32_t*)L_9);
		if ((((int32_t)L_8) <= ((int32_t)L_10)))
		{
			goto IL_0027;
		}
	}
	{
		int32_t* L_11 = ___maxMatchStrLen1;
		int32_t L_12 = V_3;
		*((int32_t*)L_11) = (int32_t)L_12;
		int32_t L_13 = V_1;
		V_0 = L_13;
	}

IL_0027:
	{
		int32_t L_14 = V_1;
		V_1 = ((int32_t)il2cpp_codegen_add((int32_t)L_14, (int32_t)1));
	}

IL_002b:
	{
		int32_t L_15 = V_1;
		StringU5BU5D_t1281789340* L_16 = ___words0;
		if ((((int32_t)L_15) < ((int32_t)(((int32_t)((int32_t)(((RuntimeArray *)L_16)->max_length)))))))
		{
			goto IL_0006;
		}
	}
	{
		int32_t L_17 = V_0;
		return L_17;
	}
}
extern "C"  int32_t __DTString_MatchLongestWords_m3768057568_AdjustorThunk (RuntimeObject * __this, StringU5BU5D_t1281789340* ___words0, int32_t* ___maxMatchStrLen1, const RuntimeMethod* method)
{
	__DTString_t2014593278 * _thisAdjusted = reinterpret_cast<__DTString_t2014593278 *>(__this + 1);
	return __DTString_MatchLongestWords_m3768057568(_thisAdjusted, ___words0, ___maxMatchStrLen1, method);
}
// System.Int32 System.__DTString::GetRepeatCount()
extern "C" IL2CPP_METHOD_ATTR int32_t __DTString_GetRepeatCount_m2245750089 (__DTString_t2014593278 * __this, const RuntimeMethod* method)
{
	Il2CppChar V_0 = 0x0;
	int32_t V_1 = 0;
	{
		String_t* L_0 = __this->get_Value_0();
		int32_t L_1 = __this->get_Index_1();
		Il2CppChar L_2 = String_get_Chars_m2986988803(L_0, L_1, /*hidden argument*/NULL);
		V_0 = L_2;
		int32_t L_3 = __this->get_Index_1();
		V_1 = ((int32_t)il2cpp_codegen_add((int32_t)L_3, (int32_t)1));
		goto IL_0021;
	}

IL_001d:
	{
		int32_t L_4 = V_1;
		V_1 = ((int32_t)il2cpp_codegen_add((int32_t)L_4, (int32_t)1));
	}

IL_0021:
	{
		int32_t L_5 = V_1;
		int32_t L_6 = __this->get_len_2();
		if ((((int32_t)L_5) >= ((int32_t)L_6)))
		{
			goto IL_0039;
		}
	}
	{
		String_t* L_7 = __this->get_Value_0();
		int32_t L_8 = V_1;
		Il2CppChar L_9 = String_get_Chars_m2986988803(L_7, L_8, /*hidden argument*/NULL);
		Il2CppChar L_10 = V_0;
		if ((((int32_t)L_9) == ((int32_t)L_10)))
		{
			goto IL_001d;
		}
	}

IL_0039:
	{
		int32_t L_11 = V_1;
		int32_t L_12 = __this->get_Index_1();
		int32_t L_13 = V_1;
		__this->set_Index_1(((int32_t)il2cpp_codegen_subtract((int32_t)L_13, (int32_t)1)));
		return ((int32_t)il2cpp_codegen_subtract((int32_t)L_11, (int32_t)L_12));
	}
}
extern "C"  int32_t __DTString_GetRepeatCount_m2245750089_AdjustorThunk (RuntimeObject * __this, const RuntimeMethod* method)
{
	__DTString_t2014593278 * _thisAdjusted = reinterpret_cast<__DTString_t2014593278 *>(__this + 1);
	return __DTString_GetRepeatCount_m2245750089(_thisAdjusted, method);
}
// System.Boolean System.__DTString::GetNextDigit()
extern "C" IL2CPP_METHOD_ATTR bool __DTString_GetNextDigit_m3564891386 (__DTString_t2014593278 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (__DTString_GetNextDigit_m3564891386_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	{
		int32_t L_0 = __this->get_Index_1();
		V_0 = ((int32_t)il2cpp_codegen_add((int32_t)L_0, (int32_t)1));
		int32_t L_1 = V_0;
		__this->set_Index_1(L_1);
		int32_t L_2 = V_0;
		int32_t L_3 = __this->get_len_2();
		if ((((int32_t)L_2) < ((int32_t)L_3)))
		{
			goto IL_001b;
		}
	}
	{
		return (bool)0;
	}

IL_001b:
	{
		String_t* L_4 = __this->get_Value_0();
		int32_t L_5 = __this->get_Index_1();
		Il2CppChar L_6 = String_get_Chars_m2986988803(L_4, L_5, /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(DateTimeParse_t715850018_il2cpp_TypeInfo_var);
		bool L_7 = DateTimeParse_IsDigit_m3727153098(NULL /*static, unused*/, L_6, /*hidden argument*/NULL);
		return L_7;
	}
}
extern "C"  bool __DTString_GetNextDigit_m3564891386_AdjustorThunk (RuntimeObject * __this, const RuntimeMethod* method)
{
	__DTString_t2014593278 * _thisAdjusted = reinterpret_cast<__DTString_t2014593278 *>(__this + 1);
	return __DTString_GetNextDigit_m3564891386(_thisAdjusted, method);
}
// System.Char System.__DTString::GetChar()
extern "C" IL2CPP_METHOD_ATTR Il2CppChar __DTString_GetChar_m1238696822 (__DTString_t2014593278 * __this, const RuntimeMethod* method)
{
	{
		String_t* L_0 = __this->get_Value_0();
		int32_t L_1 = __this->get_Index_1();
		Il2CppChar L_2 = String_get_Chars_m2986988803(L_0, L_1, /*hidden argument*/NULL);
		return L_2;
	}
}
extern "C"  Il2CppChar __DTString_GetChar_m1238696822_AdjustorThunk (RuntimeObject * __this, const RuntimeMethod* method)
{
	__DTString_t2014593278 * _thisAdjusted = reinterpret_cast<__DTString_t2014593278 *>(__this + 1);
	return __DTString_GetChar_m1238696822(_thisAdjusted, method);
}
// System.Int32 System.__DTString::GetDigit()
extern "C" IL2CPP_METHOD_ATTR int32_t __DTString_GetDigit_m3018404824 (__DTString_t2014593278 * __this, const RuntimeMethod* method)
{
	{
		String_t* L_0 = __this->get_Value_0();
		int32_t L_1 = __this->get_Index_1();
		Il2CppChar L_2 = String_get_Chars_m2986988803(L_0, L_1, /*hidden argument*/NULL);
		return ((int32_t)il2cpp_codegen_subtract((int32_t)L_2, (int32_t)((int32_t)48)));
	}
}
extern "C"  int32_t __DTString_GetDigit_m3018404824_AdjustorThunk (RuntimeObject * __this, const RuntimeMethod* method)
{
	__DTString_t2014593278 * _thisAdjusted = reinterpret_cast<__DTString_t2014593278 *>(__this + 1);
	return __DTString_GetDigit_m3018404824(_thisAdjusted, method);
}
// System.Void System.__DTString::SkipWhiteSpaces()
extern "C" IL2CPP_METHOD_ATTR void __DTString_SkipWhiteSpaces_m2053058269 (__DTString_t2014593278 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (__DTString_SkipWhiteSpaces_m2053058269_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		goto IL_002b;
	}

IL_0002:
	{
		String_t* L_0 = __this->get_Value_0();
		int32_t L_1 = __this->get_Index_1();
		Il2CppChar L_2 = String_get_Chars_m2986988803(L_0, ((int32_t)il2cpp_codegen_add((int32_t)L_1, (int32_t)1)), /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(Char_t3634460470_il2cpp_TypeInfo_var);
		bool L_3 = Char_IsWhiteSpace_m2148390798(NULL /*static, unused*/, L_2, /*hidden argument*/NULL);
		if (L_3)
		{
			goto IL_001d;
		}
	}
	{
		return;
	}

IL_001d:
	{
		int32_t L_4 = __this->get_Index_1();
		__this->set_Index_1(((int32_t)il2cpp_codegen_add((int32_t)L_4, (int32_t)1)));
	}

IL_002b:
	{
		int32_t L_5 = __this->get_Index_1();
		int32_t L_6 = __this->get_len_2();
		if ((((int32_t)((int32_t)il2cpp_codegen_add((int32_t)L_5, (int32_t)1))) < ((int32_t)L_6)))
		{
			goto IL_0002;
		}
	}
	{
		return;
	}
}
extern "C"  void __DTString_SkipWhiteSpaces_m2053058269_AdjustorThunk (RuntimeObject * __this, const RuntimeMethod* method)
{
	__DTString_t2014593278 * _thisAdjusted = reinterpret_cast<__DTString_t2014593278 *>(__this + 1);
	__DTString_SkipWhiteSpaces_m2053058269(_thisAdjusted, method);
}
// System.Boolean System.__DTString::SkipWhiteSpaceCurrent()
extern "C" IL2CPP_METHOD_ATTR bool __DTString_SkipWhiteSpaceCurrent_m2113872575 (__DTString_t2014593278 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (__DTString_SkipWhiteSpaceCurrent_m2113872575_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	{
		int32_t L_0 = __this->get_Index_1();
		int32_t L_1 = __this->get_len_2();
		if ((((int32_t)L_0) < ((int32_t)L_1)))
		{
			goto IL_0010;
		}
	}
	{
		return (bool)0;
	}

IL_0010:
	{
		Il2CppChar L_2 = __this->get_m_current_3();
		IL2CPP_RUNTIME_CLASS_INIT(Char_t3634460470_il2cpp_TypeInfo_var);
		bool L_3 = Char_IsWhiteSpace_m2148390798(NULL /*static, unused*/, L_2, /*hidden argument*/NULL);
		if (L_3)
		{
			goto IL_0045;
		}
	}
	{
		return (bool)1;
	}

IL_001f:
	{
		String_t* L_4 = __this->get_Value_0();
		int32_t L_5 = __this->get_Index_1();
		Il2CppChar L_6 = String_get_Chars_m2986988803(L_4, L_5, /*hidden argument*/NULL);
		__this->set_m_current_3(L_6);
		Il2CppChar L_7 = __this->get_m_current_3();
		IL2CPP_RUNTIME_CLASS_INIT(Char_t3634460470_il2cpp_TypeInfo_var);
		bool L_8 = Char_IsWhiteSpace_m2148390798(NULL /*static, unused*/, L_7, /*hidden argument*/NULL);
		if (L_8)
		{
			goto IL_0045;
		}
	}
	{
		return (bool)1;
	}

IL_0045:
	{
		int32_t L_9 = __this->get_Index_1();
		V_0 = ((int32_t)il2cpp_codegen_add((int32_t)L_9, (int32_t)1));
		int32_t L_10 = V_0;
		__this->set_Index_1(L_10);
		int32_t L_11 = V_0;
		int32_t L_12 = __this->get_len_2();
		if ((((int32_t)L_11) < ((int32_t)L_12)))
		{
			goto IL_001f;
		}
	}
	{
		return (bool)0;
	}
}
extern "C"  bool __DTString_SkipWhiteSpaceCurrent_m2113872575_AdjustorThunk (RuntimeObject * __this, const RuntimeMethod* method)
{
	__DTString_t2014593278 * _thisAdjusted = reinterpret_cast<__DTString_t2014593278 *>(__this + 1);
	return __DTString_SkipWhiteSpaceCurrent_m2113872575(_thisAdjusted, method);
}
// System.Void System.__DTString::TrimTail()
extern "C" IL2CPP_METHOD_ATTR void __DTString_TrimTail_m653960243 (__DTString_t2014593278 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (__DTString_TrimTail_m653960243_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	{
		int32_t L_0 = __this->get_len_2();
		V_0 = ((int32_t)il2cpp_codegen_subtract((int32_t)L_0, (int32_t)1));
		goto IL_000f;
	}

IL_000b:
	{
		int32_t L_1 = V_0;
		V_0 = ((int32_t)il2cpp_codegen_subtract((int32_t)L_1, (int32_t)1));
	}

IL_000f:
	{
		int32_t L_2 = V_0;
		if ((((int32_t)L_2) < ((int32_t)0)))
		{
			goto IL_0026;
		}
	}
	{
		String_t* L_3 = __this->get_Value_0();
		int32_t L_4 = V_0;
		Il2CppChar L_5 = String_get_Chars_m2986988803(L_3, L_4, /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(Char_t3634460470_il2cpp_TypeInfo_var);
		bool L_6 = Char_IsWhiteSpace_m2148390798(NULL /*static, unused*/, L_5, /*hidden argument*/NULL);
		if (L_6)
		{
			goto IL_000b;
		}
	}

IL_0026:
	{
		String_t* L_7 = __this->get_Value_0();
		int32_t L_8 = V_0;
		String_t* L_9 = String_Substring_m1610150815(L_7, 0, ((int32_t)il2cpp_codegen_add((int32_t)L_8, (int32_t)1)), /*hidden argument*/NULL);
		__this->set_Value_0(L_9);
		String_t* L_10 = __this->get_Value_0();
		int32_t L_11 = String_get_Length_m3847582255(L_10, /*hidden argument*/NULL);
		__this->set_len_2(L_11);
		return;
	}
}
extern "C"  void __DTString_TrimTail_m653960243_AdjustorThunk (RuntimeObject * __this, const RuntimeMethod* method)
{
	__DTString_t2014593278 * _thisAdjusted = reinterpret_cast<__DTString_t2014593278 *>(__this + 1);
	__DTString_TrimTail_m653960243(_thisAdjusted, method);
}
// System.Void System.__DTString::RemoveTrailingInQuoteSpaces()
extern "C" IL2CPP_METHOD_ATTR void __DTString_RemoveTrailingInQuoteSpaces_m4285619600 (__DTString_t2014593278 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (__DTString_RemoveTrailingInQuoteSpaces_m4285619600_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	Il2CppChar V_1 = 0x0;
	{
		int32_t L_0 = __this->get_len_2();
		V_0 = ((int32_t)il2cpp_codegen_subtract((int32_t)L_0, (int32_t)1));
		int32_t L_1 = V_0;
		if ((((int32_t)L_1) > ((int32_t)1)))
		{
			goto IL_000e;
		}
	}
	{
		return;
	}

IL_000e:
	{
		String_t* L_2 = __this->get_Value_0();
		int32_t L_3 = V_0;
		Il2CppChar L_4 = String_get_Chars_m2986988803(L_2, L_3, /*hidden argument*/NULL);
		V_1 = L_4;
		Il2CppChar L_5 = V_1;
		if ((((int32_t)L_5) == ((int32_t)((int32_t)39))))
		{
			goto IL_0025;
		}
	}
	{
		Il2CppChar L_6 = V_1;
		if ((!(((uint32_t)L_6) == ((uint32_t)((int32_t)34)))))
		{
			goto IL_008f;
		}
	}

IL_0025:
	{
		String_t* L_7 = __this->get_Value_0();
		int32_t L_8 = V_0;
		Il2CppChar L_9 = String_get_Chars_m2986988803(L_7, ((int32_t)il2cpp_codegen_subtract((int32_t)L_8, (int32_t)1)), /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(Char_t3634460470_il2cpp_TypeInfo_var);
		bool L_10 = Char_IsWhiteSpace_m2148390798(NULL /*static, unused*/, L_9, /*hidden argument*/NULL);
		if (!L_10)
		{
			goto IL_008f;
		}
	}
	{
		int32_t L_11 = V_0;
		V_0 = ((int32_t)il2cpp_codegen_subtract((int32_t)L_11, (int32_t)1));
		goto IL_0044;
	}

IL_0040:
	{
		int32_t L_12 = V_0;
		V_0 = ((int32_t)il2cpp_codegen_subtract((int32_t)L_12, (int32_t)1));
	}

IL_0044:
	{
		int32_t L_13 = V_0;
		if ((((int32_t)L_13) < ((int32_t)1)))
		{
			goto IL_005d;
		}
	}
	{
		String_t* L_14 = __this->get_Value_0();
		int32_t L_15 = V_0;
		Il2CppChar L_16 = String_get_Chars_m2986988803(L_14, ((int32_t)il2cpp_codegen_subtract((int32_t)L_15, (int32_t)1)), /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(Char_t3634460470_il2cpp_TypeInfo_var);
		bool L_17 = Char_IsWhiteSpace_m2148390798(NULL /*static, unused*/, L_16, /*hidden argument*/NULL);
		if (L_17)
		{
			goto IL_0040;
		}
	}

IL_005d:
	{
		String_t* L_18 = __this->get_Value_0();
		int32_t L_19 = V_0;
		String_t* L_20 = __this->get_Value_0();
		int32_t L_21 = String_get_Length_m3847582255(L_20, /*hidden argument*/NULL);
		int32_t L_22 = V_0;
		String_t* L_23 = String_Remove_m562998446(L_18, L_19, ((int32_t)il2cpp_codegen_subtract((int32_t)((int32_t)il2cpp_codegen_subtract((int32_t)L_21, (int32_t)1)), (int32_t)L_22)), /*hidden argument*/NULL);
		__this->set_Value_0(L_23);
		String_t* L_24 = __this->get_Value_0();
		int32_t L_25 = String_get_Length_m3847582255(L_24, /*hidden argument*/NULL);
		__this->set_len_2(L_25);
	}

IL_008f:
	{
		return;
	}
}
extern "C"  void __DTString_RemoveTrailingInQuoteSpaces_m4285619600_AdjustorThunk (RuntimeObject * __this, const RuntimeMethod* method)
{
	__DTString_t2014593278 * _thisAdjusted = reinterpret_cast<__DTString_t2014593278 *>(__this + 1);
	__DTString_RemoveTrailingInQuoteSpaces_m4285619600(_thisAdjusted, method);
}
// System.Void System.__DTString::RemoveLeadingInQuoteSpaces()
extern "C" IL2CPP_METHOD_ATTR void __DTString_RemoveLeadingInQuoteSpaces_m695439123 (__DTString_t2014593278 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (__DTString_RemoveLeadingInQuoteSpaces_m695439123_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	Il2CppChar V_1 = 0x0;
	{
		int32_t L_0 = __this->get_len_2();
		if ((((int32_t)L_0) > ((int32_t)2)))
		{
			goto IL_000a;
		}
	}
	{
		return;
	}

IL_000a:
	{
		V_0 = 0;
		String_t* L_1 = __this->get_Value_0();
		int32_t L_2 = V_0;
		Il2CppChar L_3 = String_get_Chars_m2986988803(L_1, L_2, /*hidden argument*/NULL);
		V_1 = L_3;
		Il2CppChar L_4 = V_1;
		if ((((int32_t)L_4) == ((int32_t)((int32_t)39))))
		{
			goto IL_0029;
		}
	}
	{
		Il2CppChar L_5 = V_1;
		if ((!(((uint32_t)L_5) == ((uint32_t)((int32_t)34)))))
		{
			goto IL_0070;
		}
	}
	{
		goto IL_0029;
	}

IL_0025:
	{
		int32_t L_6 = V_0;
		V_0 = ((int32_t)il2cpp_codegen_add((int32_t)L_6, (int32_t)1));
	}

IL_0029:
	{
		int32_t L_7 = V_0;
		int32_t L_8 = __this->get_len_2();
		if ((((int32_t)((int32_t)il2cpp_codegen_add((int32_t)L_7, (int32_t)1))) >= ((int32_t)L_8)))
		{
			goto IL_0049;
		}
	}
	{
		String_t* L_9 = __this->get_Value_0();
		int32_t L_10 = V_0;
		Il2CppChar L_11 = String_get_Chars_m2986988803(L_9, ((int32_t)il2cpp_codegen_add((int32_t)L_10, (int32_t)1)), /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(Char_t3634460470_il2cpp_TypeInfo_var);
		bool L_12 = Char_IsWhiteSpace_m2148390798(NULL /*static, unused*/, L_11, /*hidden argument*/NULL);
		if (L_12)
		{
			goto IL_0025;
		}
	}

IL_0049:
	{
		int32_t L_13 = V_0;
		if (!L_13)
		{
			goto IL_0070;
		}
	}
	{
		String_t* L_14 = __this->get_Value_0();
		int32_t L_15 = V_0;
		String_t* L_16 = String_Remove_m562998446(L_14, 1, L_15, /*hidden argument*/NULL);
		__this->set_Value_0(L_16);
		String_t* L_17 = __this->get_Value_0();
		int32_t L_18 = String_get_Length_m3847582255(L_17, /*hidden argument*/NULL);
		__this->set_len_2(L_18);
	}

IL_0070:
	{
		return;
	}
}
extern "C"  void __DTString_RemoveLeadingInQuoteSpaces_m695439123_AdjustorThunk (RuntimeObject * __this, const RuntimeMethod* method)
{
	__DTString_t2014593278 * _thisAdjusted = reinterpret_cast<__DTString_t2014593278 *>(__this + 1);
	__DTString_RemoveLeadingInQuoteSpaces_m695439123(_thisAdjusted, method);
}
// System.DTSubString System.__DTString::GetSubString()
extern "C" IL2CPP_METHOD_ATTR DTSubString_t967826655  __DTString_GetSubString_m2408595494 (__DTString_t2014593278 * __this, const RuntimeMethod* method)
{
	DTSubString_t967826655  V_0;
	memset(&V_0, 0, sizeof(V_0));
	int32_t V_1 = 0;
	Il2CppChar V_2 = 0x0;
	int32_t V_3 = 0;
	{
		il2cpp_codegen_initobj((&V_0), sizeof(DTSubString_t967826655 ));
		int32_t L_0 = __this->get_Index_1();
		(&V_0)->set_index_1(L_0);
		String_t* L_1 = __this->get_Value_0();
		(&V_0)->set_s_0(L_1);
		goto IL_00a2;
	}

IL_0024:
	{
		String_t* L_2 = __this->get_Value_0();
		int32_t L_3 = __this->get_Index_1();
		DTSubString_t967826655  L_4 = V_0;
		int32_t L_5 = L_4.get_length_2();
		Il2CppChar L_6 = String_get_Chars_m2986988803(L_2, ((int32_t)il2cpp_codegen_add((int32_t)L_3, (int32_t)L_5)), /*hidden argument*/NULL);
		V_2 = L_6;
		Il2CppChar L_7 = V_2;
		if ((((int32_t)L_7) < ((int32_t)((int32_t)48))))
		{
			goto IL_004b;
		}
	}
	{
		Il2CppChar L_8 = V_2;
		if ((((int32_t)L_8) > ((int32_t)((int32_t)57))))
		{
			goto IL_004b;
		}
	}
	{
		V_1 = 2;
		goto IL_004d;
	}

IL_004b:
	{
		V_1 = 4;
	}

IL_004d:
	{
		DTSubString_t967826655  L_9 = V_0;
		int32_t L_10 = L_9.get_length_2();
		if (L_10)
		{
			goto IL_005f;
		}
	}
	{
		int32_t L_11 = V_1;
		(&V_0)->set_type_3(L_11);
		goto IL_0068;
	}

IL_005f:
	{
		DTSubString_t967826655  L_12 = V_0;
		int32_t L_13 = L_12.get_type_3();
		int32_t L_14 = V_1;
		if ((!(((uint32_t)L_13) == ((uint32_t)L_14))))
		{
			goto IL_00ba;
		}
	}

IL_0068:
	{
		int32_t* L_15 = (&V_0)->get_address_of_length_2();
		int32_t* L_16 = L_15;
		int32_t L_17 = *((int32_t*)L_16);
		*((int32_t*)L_16) = (int32_t)((int32_t)il2cpp_codegen_add((int32_t)L_17, (int32_t)1));
		int32_t L_18 = V_1;
		if ((!(((uint32_t)L_18) == ((uint32_t)2))))
		{
			goto IL_00ba;
		}
	}
	{
		DTSubString_t967826655  L_19 = V_0;
		int32_t L_20 = L_19.get_length_2();
		if ((((int32_t)L_20) <= ((int32_t)8)))
		{
			goto IL_008b;
		}
	}
	{
		(&V_0)->set_type_3(1);
		DTSubString_t967826655  L_21 = V_0;
		return L_21;
	}

IL_008b:
	{
		Il2CppChar L_22 = V_2;
		V_3 = ((int32_t)il2cpp_codegen_subtract((int32_t)L_22, (int32_t)((int32_t)48)));
		DTSubString_t967826655  L_23 = V_0;
		int32_t L_24 = L_23.get_value_4();
		int32_t L_25 = V_3;
		(&V_0)->set_value_4(((int32_t)il2cpp_codegen_add((int32_t)((int32_t)il2cpp_codegen_multiply((int32_t)L_24, (int32_t)((int32_t)10))), (int32_t)L_25)));
	}

IL_00a2:
	{
		int32_t L_26 = __this->get_Index_1();
		DTSubString_t967826655  L_27 = V_0;
		int32_t L_28 = L_27.get_length_2();
		int32_t L_29 = __this->get_len_2();
		if ((((int32_t)((int32_t)il2cpp_codegen_add((int32_t)L_26, (int32_t)L_28))) < ((int32_t)L_29)))
		{
			goto IL_0024;
		}
	}

IL_00ba:
	{
		DTSubString_t967826655  L_30 = V_0;
		int32_t L_31 = L_30.get_length_2();
		if (L_31)
		{
			goto IL_00cc;
		}
	}
	{
		(&V_0)->set_type_3(3);
		DTSubString_t967826655  L_32 = V_0;
		return L_32;
	}

IL_00cc:
	{
		DTSubString_t967826655  L_33 = V_0;
		return L_33;
	}
}
extern "C"  DTSubString_t967826655  __DTString_GetSubString_m2408595494_AdjustorThunk (RuntimeObject * __this, const RuntimeMethod* method)
{
	__DTString_t2014593278 * _thisAdjusted = reinterpret_cast<__DTString_t2014593278 *>(__this + 1);
	return __DTString_GetSubString_m2408595494(_thisAdjusted, method);
}
// System.Void System.__DTString::ConsumeSubString(System.DTSubString)
extern "C" IL2CPP_METHOD_ATTR void __DTString_ConsumeSubString_m4032894792 (__DTString_t2014593278 * __this, DTSubString_t967826655  ___sub0, const RuntimeMethod* method)
{
	{
		DTSubString_t967826655  L_0 = ___sub0;
		int32_t L_1 = L_0.get_index_1();
		DTSubString_t967826655  L_2 = ___sub0;
		int32_t L_3 = L_2.get_length_2();
		__this->set_Index_1(((int32_t)il2cpp_codegen_add((int32_t)L_1, (int32_t)L_3)));
		int32_t L_4 = __this->get_Index_1();
		int32_t L_5 = __this->get_len_2();
		if ((((int32_t)L_4) >= ((int32_t)L_5)))
		{
			goto IL_0038;
		}
	}
	{
		String_t* L_6 = __this->get_Value_0();
		int32_t L_7 = __this->get_Index_1();
		Il2CppChar L_8 = String_get_Chars_m2986988803(L_6, L_7, /*hidden argument*/NULL);
		__this->set_m_current_3(L_8);
	}

IL_0038:
	{
		return;
	}
}
extern "C"  void __DTString_ConsumeSubString_m4032894792_AdjustorThunk (RuntimeObject * __this, DTSubString_t967826655  ___sub0, const RuntimeMethod* method)
{
	__DTString_t2014593278 * _thisAdjusted = reinterpret_cast<__DTString_t2014593278 *>(__this + 1);
	__DTString_ConsumeSubString_m4032894792(_thisAdjusted, ___sub0, method);
}
// System.Void System.__DTString::.cctor()
extern "C" IL2CPP_METHOD_ATTR void __DTString__cctor_m3069308443 (RuntimeObject * __this /* static, unused */, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (__DTString__cctor_m3069308443_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		CharU5BU5D_t3528271667* L_0 = (CharU5BU5D_t3528271667*)SZArrayNew(CharU5BU5D_t3528271667_il2cpp_TypeInfo_var, (uint32_t)2);
		CharU5BU5D_t3528271667* L_1 = L_0;
		(L_1)->SetAtUnchecked(static_cast<il2cpp_array_size_t>(0), (Il2CppChar)((int32_t)32));
		CharU5BU5D_t3528271667* L_2 = L_1;
		(L_2)->SetAtUnchecked(static_cast<il2cpp_array_size_t>(1), (Il2CppChar)((int32_t)160));
		((__DTString_t2014593278_StaticFields*)il2cpp_codegen_static_fields_for(__DTString_t2014593278_il2cpp_TypeInfo_var))->set_WhiteSpaceChecks_6(L_2);
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
// System.Boolean System.__Filters::FilterAttribute(System.Reflection.MemberInfo,System.Object)
extern "C" IL2CPP_METHOD_ATTR bool __Filters_FilterAttribute_m1188844130 (__Filters_t550753867 * __this, MemberInfo_t * ___m0, RuntimeObject * ___filterCriteria1, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (__Filters_FilterAttribute_m1188844130_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	int32_t V_1 = 0;
	int32_t V_2 = 0;
	int32_t V_3 = 0;
	int32_t V_4 = 0;
	Exception_t * __last_unhandled_exception = 0;
	NO_UNUSED_WARNING (__last_unhandled_exception);
	Exception_t * __exception_local = 0;
	NO_UNUSED_WARNING (__exception_local);
	int32_t __leave_target = -1;
	NO_UNUSED_WARNING (__leave_target);
	{
		RuntimeObject * L_0 = ___filterCriteria1;
		if (L_0)
		{
			goto IL_0013;
		}
	}
	{
		String_t* L_1 = Environment_GetResourceString_m2063689938(NULL /*static, unused*/, _stringLiteral2976560351, /*hidden argument*/NULL);
		InvalidFilterCriteriaException_t2427731508 * L_2 = (InvalidFilterCriteriaException_t2427731508 *)il2cpp_codegen_object_new(InvalidFilterCriteriaException_t2427731508_il2cpp_TypeInfo_var);
		InvalidFilterCriteriaException__ctor_m948508901(L_2, L_1, /*hidden argument*/NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_2, NULL, __Filters_FilterAttribute_m1188844130_RuntimeMethod_var);
	}

IL_0013:
	{
		MemberInfo_t * L_3 = ___m0;
		int32_t L_4 = VirtFuncInvoker0< int32_t >::Invoke(6 /* System.Reflection.MemberTypes System.Reflection.MemberInfo::get_MemberType() */, L_3);
		V_0 = L_4;
		int32_t L_5 = V_0;
		if ((((int32_t)L_5) == ((int32_t)1)))
		{
			goto IL_002c;
		}
	}
	{
		int32_t L_6 = V_0;
		if ((((int32_t)L_6) == ((int32_t)4)))
		{
			goto IL_00ce;
		}
	}
	{
		int32_t L_7 = V_0;
		if ((!(((uint32_t)L_7) == ((uint32_t)8))))
		{
			goto IL_0160;
		}
	}

IL_002c:
	{
		V_1 = 0;
	}

IL_002e:
	try
	{ // begin try (depth: 1)
		RuntimeObject * L_8 = ___filterCriteria1;
		V_1 = ((*(int32_t*)((int32_t*)UnBox(L_8, Int32_t2950945753_il2cpp_TypeInfo_var))));
		goto IL_0048;
	} // end try (depth: 1)
	catch(Il2CppExceptionWrapper& e)
	{
		__exception_local = (Exception_t *)e.ex;
		if(il2cpp_codegen_class_is_assignable_from (RuntimeObject_il2cpp_TypeInfo_var, il2cpp_codegen_object_class(e.ex)))
			goto CATCH_0037;
		throw e;
	}

CATCH_0037:
	{ // begin catch(System.Object)
		String_t* L_9 = Environment_GetResourceString_m2063689938(NULL /*static, unused*/, _stringLiteral2976560351, /*hidden argument*/NULL);
		InvalidFilterCriteriaException_t2427731508 * L_10 = (InvalidFilterCriteriaException_t2427731508 *)il2cpp_codegen_object_new(InvalidFilterCriteriaException_t2427731508_il2cpp_TypeInfo_var);
		InvalidFilterCriteriaException__ctor_m948508901(L_10, L_9, /*hidden argument*/NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_10, NULL, __Filters_FilterAttribute_m1188844130_RuntimeMethod_var);
	} // end catch (depth: 1)

IL_0048:
	{
		MemberInfo_t * L_11 = ___m0;
		int32_t L_12 = VirtFuncInvoker0< int32_t >::Invoke(6 /* System.Reflection.MemberTypes System.Reflection.MemberInfo::get_MemberType() */, L_11);
		if ((!(((uint32_t)L_12) == ((uint32_t)8))))
		{
			goto IL_005f;
		}
	}
	{
		MemberInfo_t * L_13 = ___m0;
		int32_t L_14 = VirtFuncInvoker0< int32_t >::Invoke(20 /* System.Reflection.MethodAttributes System.Reflection.MethodBase::get_Attributes() */, ((MethodInfo_t *)CastclassClass((RuntimeObject*)L_13, MethodInfo_t_il2cpp_TypeInfo_var)));
		V_2 = L_14;
		goto IL_006b;
	}

IL_005f:
	{
		MemberInfo_t * L_15 = ___m0;
		int32_t L_16 = VirtFuncInvoker0< int32_t >::Invoke(20 /* System.Reflection.MethodAttributes System.Reflection.MethodBase::get_Attributes() */, ((ConstructorInfo_t5769829 *)CastclassClass((RuntimeObject*)L_15, ConstructorInfo_t5769829_il2cpp_TypeInfo_var)));
		V_2 = L_16;
	}

IL_006b:
	{
		int32_t L_17 = V_1;
		if (!((int32_t)((int32_t)L_17&(int32_t)7)))
		{
			goto IL_007a;
		}
	}
	{
		int32_t L_18 = V_2;
		int32_t L_19 = V_1;
		if ((((int32_t)((int32_t)((int32_t)L_18&(int32_t)7))) == ((int32_t)((int32_t)((int32_t)L_19&(int32_t)7)))))
		{
			goto IL_007a;
		}
	}
	{
		return (bool)0;
	}

IL_007a:
	{
		int32_t L_20 = V_1;
		if (!((int32_t)((int32_t)L_20&(int32_t)((int32_t)16))))
		{
			goto IL_0088;
		}
	}
	{
		int32_t L_21 = V_2;
		if (((int32_t)((int32_t)L_21&(int32_t)((int32_t)16))))
		{
			goto IL_0088;
		}
	}
	{
		return (bool)0;
	}

IL_0088:
	{
		int32_t L_22 = V_1;
		if (!((int32_t)((int32_t)L_22&(int32_t)((int32_t)32))))
		{
			goto IL_0096;
		}
	}
	{
		int32_t L_23 = V_2;
		if (((int32_t)((int32_t)L_23&(int32_t)((int32_t)32))))
		{
			goto IL_0096;
		}
	}
	{
		return (bool)0;
	}

IL_0096:
	{
		int32_t L_24 = V_1;
		if (!((int32_t)((int32_t)L_24&(int32_t)((int32_t)64))))
		{
			goto IL_00a4;
		}
	}
	{
		int32_t L_25 = V_2;
		if (((int32_t)((int32_t)L_25&(int32_t)((int32_t)64))))
		{
			goto IL_00a4;
		}
	}
	{
		return (bool)0;
	}

IL_00a4:
	{
		int32_t L_26 = V_1;
		if (!((int32_t)((int32_t)L_26&(int32_t)((int32_t)1024))))
		{
			goto IL_00b8;
		}
	}
	{
		int32_t L_27 = V_2;
		if (((int32_t)((int32_t)L_27&(int32_t)((int32_t)1024))))
		{
			goto IL_00b8;
		}
	}
	{
		return (bool)0;
	}

IL_00b8:
	{
		int32_t L_28 = V_1;
		if (!((int32_t)((int32_t)L_28&(int32_t)((int32_t)2048))))
		{
			goto IL_00cc;
		}
	}
	{
		int32_t L_29 = V_2;
		if (((int32_t)((int32_t)L_29&(int32_t)((int32_t)2048))))
		{
			goto IL_00cc;
		}
	}
	{
		return (bool)0;
	}

IL_00cc:
	{
		return (bool)1;
	}

IL_00ce:
	{
		V_3 = 0;
	}

IL_00d0:
	try
	{ // begin try (depth: 1)
		RuntimeObject * L_30 = ___filterCriteria1;
		V_3 = ((*(int32_t*)((int32_t*)UnBox(L_30, Int32_t2950945753_il2cpp_TypeInfo_var))));
		goto IL_00ea;
	} // end try (depth: 1)
	catch(Il2CppExceptionWrapper& e)
	{
		__exception_local = (Exception_t *)e.ex;
		if(il2cpp_codegen_class_is_assignable_from (RuntimeObject_il2cpp_TypeInfo_var, il2cpp_codegen_object_class(e.ex)))
			goto CATCH_00d9;
		throw e;
	}

CATCH_00d9:
	{ // begin catch(System.Object)
		String_t* L_31 = Environment_GetResourceString_m2063689938(NULL /*static, unused*/, _stringLiteral2976560351, /*hidden argument*/NULL);
		InvalidFilterCriteriaException_t2427731508 * L_32 = (InvalidFilterCriteriaException_t2427731508 *)il2cpp_codegen_object_new(InvalidFilterCriteriaException_t2427731508_il2cpp_TypeInfo_var);
		InvalidFilterCriteriaException__ctor_m948508901(L_32, L_31, /*hidden argument*/NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_32, NULL, __Filters_FilterAttribute_m1188844130_RuntimeMethod_var);
	} // end catch (depth: 1)

IL_00ea:
	{
		MemberInfo_t * L_33 = ___m0;
		int32_t L_34 = VirtFuncInvoker0< int32_t >::Invoke(16 /* System.Reflection.FieldAttributes System.Reflection.FieldInfo::get_Attributes() */, ((FieldInfo_t *)CastclassClass((RuntimeObject*)L_33, FieldInfo_t_il2cpp_TypeInfo_var)));
		V_4 = L_34;
		int32_t L_35 = V_3;
		if (!((int32_t)((int32_t)L_35&(int32_t)7)))
		{
			goto IL_0107;
		}
	}
	{
		int32_t L_36 = V_4;
		int32_t L_37 = V_3;
		if ((((int32_t)((int32_t)((int32_t)L_36&(int32_t)7))) == ((int32_t)((int32_t)((int32_t)L_37&(int32_t)7)))))
		{
			goto IL_0107;
		}
	}
	{
		return (bool)0;
	}

IL_0107:
	{
		int32_t L_38 = V_3;
		if (!((int32_t)((int32_t)L_38&(int32_t)((int32_t)16))))
		{
			goto IL_0116;
		}
	}
	{
		int32_t L_39 = V_4;
		if (((int32_t)((int32_t)L_39&(int32_t)((int32_t)16))))
		{
			goto IL_0116;
		}
	}
	{
		return (bool)0;
	}

IL_0116:
	{
		int32_t L_40 = V_3;
		if (!((int32_t)((int32_t)L_40&(int32_t)((int32_t)32))))
		{
			goto IL_0125;
		}
	}
	{
		int32_t L_41 = V_4;
		if (((int32_t)((int32_t)L_41&(int32_t)((int32_t)32))))
		{
			goto IL_0125;
		}
	}
	{
		return (bool)0;
	}

IL_0125:
	{
		int32_t L_42 = V_3;
		if (!((int32_t)((int32_t)L_42&(int32_t)((int32_t)64))))
		{
			goto IL_0134;
		}
	}
	{
		int32_t L_43 = V_4;
		if (((int32_t)((int32_t)L_43&(int32_t)((int32_t)64))))
		{
			goto IL_0134;
		}
	}
	{
		return (bool)0;
	}

IL_0134:
	{
		int32_t L_44 = V_3;
		if (!((int32_t)((int32_t)L_44&(int32_t)((int32_t)128))))
		{
			goto IL_0149;
		}
	}
	{
		int32_t L_45 = V_4;
		if (((int32_t)((int32_t)L_45&(int32_t)((int32_t)128))))
		{
			goto IL_0149;
		}
	}
	{
		return (bool)0;
	}

IL_0149:
	{
		int32_t L_46 = V_3;
		if (!((int32_t)((int32_t)L_46&(int32_t)((int32_t)8192))))
		{
			goto IL_015e;
		}
	}
	{
		int32_t L_47 = V_4;
		if (((int32_t)((int32_t)L_47&(int32_t)((int32_t)8192))))
		{
			goto IL_015e;
		}
	}
	{
		return (bool)0;
	}

IL_015e:
	{
		return (bool)1;
	}

IL_0160:
	{
		return (bool)0;
	}
}
// System.Boolean System.__Filters::FilterName(System.Reflection.MemberInfo,System.Object)
extern "C" IL2CPP_METHOD_ATTR bool __Filters_FilterName_m969729198 (__Filters_t550753867 * __this, MemberInfo_t * ___m0, RuntimeObject * ___filterCriteria1, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (__Filters_FilterName_m969729198_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	String_t* V_0 = NULL;
	String_t* V_1 = NULL;
	{
		RuntimeObject * L_0 = ___filterCriteria1;
		if (!L_0)
		{
			goto IL_000b;
		}
	}
	{
		RuntimeObject * L_1 = ___filterCriteria1;
		if (((String_t*)IsInstSealed((RuntimeObject*)L_1, String_t_il2cpp_TypeInfo_var)))
		{
			goto IL_001b;
		}
	}

IL_000b:
	{
		String_t* L_2 = Environment_GetResourceString_m2063689938(NULL /*static, unused*/, _stringLiteral238790419, /*hidden argument*/NULL);
		InvalidFilterCriteriaException_t2427731508 * L_3 = (InvalidFilterCriteriaException_t2427731508 *)il2cpp_codegen_object_new(InvalidFilterCriteriaException_t2427731508_il2cpp_TypeInfo_var);
		InvalidFilterCriteriaException__ctor_m948508901(L_3, L_2, /*hidden argument*/NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_3, NULL, __Filters_FilterName_m969729198_RuntimeMethod_var);
	}

IL_001b:
	{
		RuntimeObject * L_4 = ___filterCriteria1;
		V_0 = ((String_t*)CastclassSealed((RuntimeObject*)L_4, String_t_il2cpp_TypeInfo_var));
		String_t* L_5 = V_0;
		String_t* L_6 = String_Trim_m923598732(L_5, /*hidden argument*/NULL);
		V_0 = L_6;
		MemberInfo_t * L_7 = ___m0;
		String_t* L_8 = VirtFuncInvoker0< String_t* >::Invoke(7 /* System.String System.Reflection.MemberInfo::get_Name() */, L_7);
		V_1 = L_8;
		MemberInfo_t * L_9 = ___m0;
		int32_t L_10 = VirtFuncInvoker0< int32_t >::Invoke(6 /* System.Reflection.MemberTypes System.Reflection.MemberInfo::get_MemberType() */, L_9);
		if ((!(((uint32_t)L_10) == ((uint32_t)((int32_t)128)))))
		{
			goto IL_004e;
		}
	}
	{
		String_t* L_11 = V_1;
		String_t* L_12 = V_1;
		int32_t L_13 = String_LastIndexOf_m3451222878(L_12, ((int32_t)43), /*hidden argument*/NULL);
		String_t* L_14 = String_Substring_m2848979100(L_11, ((int32_t)il2cpp_codegen_add((int32_t)L_13, (int32_t)1)), /*hidden argument*/NULL);
		V_1 = L_14;
	}

IL_004e:
	{
		String_t* L_15 = V_0;
		int32_t L_16 = String_get_Length_m3847582255(L_15, /*hidden argument*/NULL);
		if ((((int32_t)L_16) <= ((int32_t)0)))
		{
			goto IL_0082;
		}
	}
	{
		String_t* L_17 = V_0;
		String_t* L_18 = V_0;
		int32_t L_19 = String_get_Length_m3847582255(L_18, /*hidden argument*/NULL);
		Il2CppChar L_20 = String_get_Chars_m2986988803(L_17, ((int32_t)il2cpp_codegen_subtract((int32_t)L_19, (int32_t)1)), /*hidden argument*/NULL);
		if ((!(((uint32_t)L_20) == ((uint32_t)((int32_t)42)))))
		{
			goto IL_0082;
		}
	}
	{
		String_t* L_21 = V_0;
		String_t* L_22 = V_0;
		int32_t L_23 = String_get_Length_m3847582255(L_22, /*hidden argument*/NULL);
		String_t* L_24 = String_Substring_m1610150815(L_21, 0, ((int32_t)il2cpp_codegen_subtract((int32_t)L_23, (int32_t)1)), /*hidden argument*/NULL);
		V_0 = L_24;
		String_t* L_25 = V_1;
		String_t* L_26 = V_0;
		bool L_27 = String_StartsWith_m2640722675(L_25, L_26, 4, /*hidden argument*/NULL);
		return L_27;
	}

IL_0082:
	{
		String_t* L_28 = V_1;
		String_t* L_29 = V_0;
		bool L_30 = String_Equals_m2270643605(L_28, L_29, /*hidden argument*/NULL);
		return L_30;
	}
}
// System.Boolean System.__Filters::FilterIgnoreCase(System.Reflection.MemberInfo,System.Object)
extern "C" IL2CPP_METHOD_ATTR bool __Filters_FilterIgnoreCase_m1077950596 (__Filters_t550753867 * __this, MemberInfo_t * ___m0, RuntimeObject * ___filterCriteria1, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (__Filters_FilterIgnoreCase_m1077950596_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	String_t* V_0 = NULL;
	String_t* V_1 = NULL;
	{
		RuntimeObject * L_0 = ___filterCriteria1;
		if (!L_0)
		{
			goto IL_000b;
		}
	}
	{
		RuntimeObject * L_1 = ___filterCriteria1;
		if (((String_t*)IsInstSealed((RuntimeObject*)L_1, String_t_il2cpp_TypeInfo_var)))
		{
			goto IL_001b;
		}
	}

IL_000b:
	{
		String_t* L_2 = Environment_GetResourceString_m2063689938(NULL /*static, unused*/, _stringLiteral238790419, /*hidden argument*/NULL);
		InvalidFilterCriteriaException_t2427731508 * L_3 = (InvalidFilterCriteriaException_t2427731508 *)il2cpp_codegen_object_new(InvalidFilterCriteriaException_t2427731508_il2cpp_TypeInfo_var);
		InvalidFilterCriteriaException__ctor_m948508901(L_3, L_2, /*hidden argument*/NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_3, NULL, __Filters_FilterIgnoreCase_m1077950596_RuntimeMethod_var);
	}

IL_001b:
	{
		RuntimeObject * L_4 = ___filterCriteria1;
		V_0 = ((String_t*)CastclassSealed((RuntimeObject*)L_4, String_t_il2cpp_TypeInfo_var));
		String_t* L_5 = V_0;
		String_t* L_6 = String_Trim_m923598732(L_5, /*hidden argument*/NULL);
		V_0 = L_6;
		MemberInfo_t * L_7 = ___m0;
		String_t* L_8 = VirtFuncInvoker0< String_t* >::Invoke(7 /* System.String System.Reflection.MemberInfo::get_Name() */, L_7);
		V_1 = L_8;
		MemberInfo_t * L_9 = ___m0;
		int32_t L_10 = VirtFuncInvoker0< int32_t >::Invoke(6 /* System.Reflection.MemberTypes System.Reflection.MemberInfo::get_MemberType() */, L_9);
		if ((!(((uint32_t)L_10) == ((uint32_t)((int32_t)128)))))
		{
			goto IL_004e;
		}
	}
	{
		String_t* L_11 = V_1;
		String_t* L_12 = V_1;
		int32_t L_13 = String_LastIndexOf_m3451222878(L_12, ((int32_t)43), /*hidden argument*/NULL);
		String_t* L_14 = String_Substring_m2848979100(L_11, ((int32_t)il2cpp_codegen_add((int32_t)L_13, (int32_t)1)), /*hidden argument*/NULL);
		V_1 = L_14;
	}

IL_004e:
	{
		String_t* L_15 = V_0;
		int32_t L_16 = String_get_Length_m3847582255(L_15, /*hidden argument*/NULL);
		if ((((int32_t)L_16) <= ((int32_t)0)))
		{
			goto IL_008d;
		}
	}
	{
		String_t* L_17 = V_0;
		String_t* L_18 = V_0;
		int32_t L_19 = String_get_Length_m3847582255(L_18, /*hidden argument*/NULL);
		Il2CppChar L_20 = String_get_Chars_m2986988803(L_17, ((int32_t)il2cpp_codegen_subtract((int32_t)L_19, (int32_t)1)), /*hidden argument*/NULL);
		if ((!(((uint32_t)L_20) == ((uint32_t)((int32_t)42)))))
		{
			goto IL_008d;
		}
	}
	{
		String_t* L_21 = V_0;
		String_t* L_22 = V_0;
		int32_t L_23 = String_get_Length_m3847582255(L_22, /*hidden argument*/NULL);
		String_t* L_24 = String_Substring_m1610150815(L_21, 0, ((int32_t)il2cpp_codegen_subtract((int32_t)L_23, (int32_t)1)), /*hidden argument*/NULL);
		V_0 = L_24;
		String_t* L_25 = V_1;
		String_t* L_26 = V_0;
		String_t* L_27 = V_0;
		int32_t L_28 = String_get_Length_m3847582255(L_27, /*hidden argument*/NULL);
		int32_t L_29 = String_Compare_m1966407346(NULL /*static, unused*/, L_25, 0, L_26, 0, L_28, 5, /*hidden argument*/NULL);
		return (bool)((((int32_t)L_29) == ((int32_t)0))? 1 : 0);
	}

IL_008d:
	{
		String_t* L_30 = V_0;
		String_t* L_31 = V_1;
		int32_t L_32 = String_Compare_m3203413707(NULL /*static, unused*/, L_30, L_31, 5, /*hidden argument*/NULL);
		return (bool)((((int32_t)L_32) == ((int32_t)0))? 1 : 0);
	}
}
// System.Void System.__Filters::.ctor()
extern "C" IL2CPP_METHOD_ATTR void __Filters__ctor_m4259786029 (__Filters_t550753867 * __this, const RuntimeMethod* method)
{
	{
		Object__ctor_m297566312(__this, /*hidden argument*/NULL);
		return;
	}
}
// System.Void System.__Filters::.cctor()
extern "C" IL2CPP_METHOD_ATTR void __Filters__cctor_m18745359 (RuntimeObject * __this /* static, unused */, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (__Filters__cctor_m18745359_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		__Filters_t550753867 * L_0 = (__Filters_t550753867 *)il2cpp_codegen_object_new(__Filters_t550753867_il2cpp_TypeInfo_var);
		__Filters__ctor_m4259786029(L_0, /*hidden argument*/NULL);
		((__Filters_t550753867_StaticFields*)il2cpp_codegen_static_fields_for(__Filters_t550753867_il2cpp_TypeInfo_var))->set_Instance_0(L_0);
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
// System.Void System.__Il2CppComDelegate::Finalize()
extern "C" IL2CPP_METHOD_ATTR void __Il2CppComDelegate_Finalize_m2460829410 (__Il2CppComDelegate_t1102178620 * __this, const RuntimeMethod* method)
{
	__Il2CppComObject_Finalize_m2923638372(__this, NULL);
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Void System.__Il2CppComObject::Finalize()
extern "C" IL2CPP_METHOD_ATTR void __Il2CppComObject_Finalize_m2923638372 (Il2CppComObject * __this, const RuntimeMethod* method)
{
	if (__this->identity != NULL)
	{
		if (il2cpp_codegen_is_import_or_windows_runtime((RuntimeObject*)__this))
		{
			il2cpp_codegen_il2cpp_com_object_cleanup(__this);
		}
		__this->identity->Release();
		__this->identity = NULL;
	}

	Object_Finalize_m3076187857(__this, NULL);
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
