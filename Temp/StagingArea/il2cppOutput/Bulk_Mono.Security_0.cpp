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
template <typename R>
struct InterfaceFuncInvoker0
{
	typedef R (*Func)(void*, const RuntimeMethod*);

	static inline R Invoke (Il2CppMethodSlot slot, RuntimeClass* declaringInterface, RuntimeObject* obj)
	{
		const VirtualInvokeData& invokeData = il2cpp_codegen_get_interface_invoke_data(slot, obj, declaringInterface);
		return ((Func)invokeData.methodPtr)(obj, invokeData.method);
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

// Mono.Security.ASN1
struct ASN1_t2114160833;
// Mono.Security.Interface.MonoTlsProvider
struct MonoTlsProvider_t3152003291;
// Mono.Security.Interface.MonoTlsSettings
struct MonoTlsSettings_t3666008581;
// System.ArgumentNullException
struct ArgumentNullException_t1615371798;
// System.Byte[]
struct ByteU5BU5D_t4116647657;
// System.Char[]
struct CharU5BU5D_t3528271667;
// System.Collections.ArrayList
struct ArrayList_t2718874744;
// System.Collections.Generic.Dictionary`2<System.Int32,System.Globalization.CultureInfo>
struct Dictionary_2_t3046556399;
// System.Collections.Generic.Dictionary`2<System.String,System.Globalization.CultureInfo>
struct Dictionary_2_t3943099367;
// System.Collections.IDictionary
struct IDictionary_t1363984059;
// System.Diagnostics.StackTrace[]
struct StackTraceU5BU5D_t1169129676;
// System.FormatException
struct FormatException_t154580423;
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
// System.Globalization.TextInfo
struct TextInfo_t3810425522;
// System.IFormatProvider
struct IFormatProvider_t2518567562;
// System.IntPtr[]
struct IntPtrU5BU5D_t4013366056;
// System.NotSupportedException
struct NotSupportedException_t1314879016;
// System.Object[]
struct ObjectU5BU5D_t2843939325;
// System.Runtime.Serialization.SafeSerializationManager
struct SafeSerializationManager_t2481557153;
// System.Security.Cryptography.X509Certificates.X509CertificateCollection
struct X509CertificateCollection_t3399372417;
// System.String
struct String_t;
// System.String[]
struct StringU5BU5D_t1281789340;
// System.Text.StringBuilder
struct StringBuilder_t;
// System.Void
struct Void_t1185182177;

extern RuntimeClass* ASN1_t2114160833_il2cpp_TypeInfo_var;
extern RuntimeClass* ArgumentNullException_t1615371798_il2cpp_TypeInfo_var;
extern RuntimeClass* ArgumentOutOfRangeException_t777629997_il2cpp_TypeInfo_var;
extern RuntimeClass* ArrayList_t2718874744_il2cpp_TypeInfo_var;
extern RuntimeClass* BitConverter_t3118986983_il2cpp_TypeInfo_var;
extern RuntimeClass* ByteU5BU5D_t4116647657_il2cpp_TypeInfo_var;
extern RuntimeClass* CultureInfo_t4157843068_il2cpp_TypeInfo_var;
extern RuntimeClass* FormatException_t154580423_il2cpp_TypeInfo_var;
extern RuntimeClass* IDisposable_t3640265483_il2cpp_TypeInfo_var;
extern RuntimeClass* IEnumerator_t1853284238_il2cpp_TypeInfo_var;
extern RuntimeClass* Int32_t2950945753_il2cpp_TypeInfo_var;
extern RuntimeClass* NotSupportedException_t1314879016_il2cpp_TypeInfo_var;
extern RuntimeClass* StringBuilder_t_il2cpp_TypeInfo_var;
extern String_t* _stringLiteral1285239904;
extern String_t* _stringLiteral1968993200;
extern String_t* _stringLiteral2514902888;
extern String_t* _stringLiteral2861664389;
extern String_t* _stringLiteral2971046163;
extern String_t* _stringLiteral3013462727;
extern String_t* _stringLiteral3100627678;
extern String_t* _stringLiteral3451435000;
extern String_t* _stringLiteral3452614530;
extern const RuntimeMethod* ASN1Convert_ToInt32_m2228176117_RuntimeMethod_var;
extern const RuntimeMethod* ASN1Convert_ToOid_m4290825381_RuntimeMethod_var;
extern const RuntimeMethod* ASN1__ctor_m1219137533_RuntimeMethod_var;
extern const RuntimeMethod* Array_Empty_TisRuntimeObject_m4268358689_RuntimeMethod_var;
extern const RuntimeMethod* Array_Reverse_TisByte_t1134296376_m4070369654_RuntimeMethod_var;
extern const uint32_t ASN1Convert_FromInt32_m2294771542_MetadataUsageId;
extern const uint32_t ASN1Convert_ToInt32_m2228176117_MetadataUsageId;
extern const uint32_t ASN1Convert_ToOid_m4290825381_MetadataUsageId;
extern const uint32_t ASN1_Add_m3262603624_MetadataUsageId;
extern const uint32_t ASN1_DecodeTLV_m3927350254_MetadataUsageId;
extern const uint32_t ASN1_Decode_m1245286596_MetadataUsageId;
extern const uint32_t ASN1_GetBytes_m1968380955_MetadataUsageId;
extern const uint32_t ASN1_ToString_m45458043_MetadataUsageId;
extern const uint32_t ASN1__ctor_m1219137533_MetadataUsageId;
extern const uint32_t ASN1_get_Item_m315148275_MetadataUsageId;
extern const uint32_t ASN1_get_Value_m3619295991_MetadataUsageId;
extern const uint32_t ASN1_set_Value_m647861841_MetadataUsageId;
extern const uint32_t BitConverterLE_GetUIntBytes_m795219058_MetadataUsageId;
extern const uint32_t CryptoConvert_ToHex_m2210632265_MetadataUsageId;
struct CultureData_t1899656083_marshaled_com;
struct CultureData_t1899656083_marshaled_pinvoke;
struct CultureInfo_t4157843068_marshaled_com;
struct CultureInfo_t4157843068_marshaled_pinvoke;
struct Exception_t_marshaled_com;
struct Exception_t_marshaled_pinvoke;

struct ByteU5BU5D_t4116647657;
struct ObjectU5BU5D_t2843939325;


#ifndef U3CMODULEU3E_T692745526_H
#define U3CMODULEU3E_T692745526_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// <Module>
struct  U3CModuleU3E_t692745526 
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // U3CMODULEU3E_T692745526_H
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
#ifndef ASN1_T2114160833_H
#define ASN1_T2114160833_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// Mono.Security.ASN1
struct  ASN1_t2114160833  : public RuntimeObject
{
public:
	// System.Byte Mono.Security.ASN1::m_nTag
	uint8_t ___m_nTag_0;
	// System.Byte[] Mono.Security.ASN1::m_aValue
	ByteU5BU5D_t4116647657* ___m_aValue_1;
	// System.Collections.ArrayList Mono.Security.ASN1::elist
	ArrayList_t2718874744 * ___elist_2;

public:
	inline static int32_t get_offset_of_m_nTag_0() { return static_cast<int32_t>(offsetof(ASN1_t2114160833, ___m_nTag_0)); }
	inline uint8_t get_m_nTag_0() const { return ___m_nTag_0; }
	inline uint8_t* get_address_of_m_nTag_0() { return &___m_nTag_0; }
	inline void set_m_nTag_0(uint8_t value)
	{
		___m_nTag_0 = value;
	}

	inline static int32_t get_offset_of_m_aValue_1() { return static_cast<int32_t>(offsetof(ASN1_t2114160833, ___m_aValue_1)); }
	inline ByteU5BU5D_t4116647657* get_m_aValue_1() const { return ___m_aValue_1; }
	inline ByteU5BU5D_t4116647657** get_address_of_m_aValue_1() { return &___m_aValue_1; }
	inline void set_m_aValue_1(ByteU5BU5D_t4116647657* value)
	{
		___m_aValue_1 = value;
		Il2CppCodeGenWriteBarrier((&___m_aValue_1), value);
	}

	inline static int32_t get_offset_of_elist_2() { return static_cast<int32_t>(offsetof(ASN1_t2114160833, ___elist_2)); }
	inline ArrayList_t2718874744 * get_elist_2() const { return ___elist_2; }
	inline ArrayList_t2718874744 ** get_address_of_elist_2() { return &___elist_2; }
	inline void set_elist_2(ArrayList_t2718874744 * value)
	{
		___elist_2 = value;
		Il2CppCodeGenWriteBarrier((&___elist_2), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // ASN1_T2114160833_H
#ifndef ASN1CONVERT_T2839890153_H
#define ASN1CONVERT_T2839890153_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// Mono.Security.ASN1Convert
struct  ASN1Convert_t2839890153  : public RuntimeObject
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // ASN1CONVERT_T2839890153_H
#ifndef BITCONVERTERLE_T2108532979_H
#define BITCONVERTERLE_T2108532979_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// Mono.Security.BitConverterLE
struct  BitConverterLE_t2108532979  : public RuntimeObject
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // BITCONVERTERLE_T2108532979_H
#ifndef CRYPTOCONVERT_T610933156_H
#define CRYPTOCONVERT_T610933156_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// Mono.Security.Cryptography.CryptoConvert
struct  CryptoConvert_t610933156  : public RuntimeObject
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // CRYPTOCONVERT_T610933156_H
#ifndef MONOTLSPROVIDER_T3152003291_H
#define MONOTLSPROVIDER_T3152003291_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// Mono.Security.Interface.MonoTlsProvider
struct  MonoTlsProvider_t3152003291  : public RuntimeObject
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // MONOTLSPROVIDER_T3152003291_H
#ifndef MONOTLSSETTINGS_T3666008581_H
#define MONOTLSSETTINGS_T3666008581_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// Mono.Security.Interface.MonoTlsSettings
struct  MonoTlsSettings_t3666008581  : public RuntimeObject
{
public:
	// System.Security.Cryptography.X509Certificates.X509CertificateCollection Mono.Security.Interface.MonoTlsSettings::<TrustAnchors>k__BackingField
	X509CertificateCollection_t3399372417 * ___U3CTrustAnchorsU3Ek__BackingField_0;

public:
	inline static int32_t get_offset_of_U3CTrustAnchorsU3Ek__BackingField_0() { return static_cast<int32_t>(offsetof(MonoTlsSettings_t3666008581, ___U3CTrustAnchorsU3Ek__BackingField_0)); }
	inline X509CertificateCollection_t3399372417 * get_U3CTrustAnchorsU3Ek__BackingField_0() const { return ___U3CTrustAnchorsU3Ek__BackingField_0; }
	inline X509CertificateCollection_t3399372417 ** get_address_of_U3CTrustAnchorsU3Ek__BackingField_0() { return &___U3CTrustAnchorsU3Ek__BackingField_0; }
	inline void set_U3CTrustAnchorsU3Ek__BackingField_0(X509CertificateCollection_t3399372417 * value)
	{
		___U3CTrustAnchorsU3Ek__BackingField_0 = value;
		Il2CppCodeGenWriteBarrier((&___U3CTrustAnchorsU3Ek__BackingField_0), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // MONOTLSSETTINGS_T3666008581_H
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
#ifndef BITCONVERTER_T3118986983_H
#define BITCONVERTER_T3118986983_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.BitConverter
struct  BitConverter_t3118986983  : public RuntimeObject
{
public:

public:
};

struct BitConverter_t3118986983_StaticFields
{
public:
	// System.Boolean System.BitConverter::IsLittleEndian
	bool ___IsLittleEndian_0;

public:
	inline static int32_t get_offset_of_IsLittleEndian_0() { return static_cast<int32_t>(offsetof(BitConverter_t3118986983_StaticFields, ___IsLittleEndian_0)); }
	inline bool get_IsLittleEndian_0() const { return ___IsLittleEndian_0; }
	inline bool* get_address_of_IsLittleEndian_0() { return &___IsLittleEndian_0; }
	inline void set_IsLittleEndian_0(bool value)
	{
		___IsLittleEndian_0 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // BITCONVERTER_T3118986983_H
#ifndef ARRAYLIST_T2718874744_H
#define ARRAYLIST_T2718874744_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Collections.ArrayList
struct  ArrayList_t2718874744  : public RuntimeObject
{
public:
	// System.Object[] System.Collections.ArrayList::_items
	ObjectU5BU5D_t2843939325* ____items_0;
	// System.Int32 System.Collections.ArrayList::_size
	int32_t ____size_1;
	// System.Int32 System.Collections.ArrayList::_version
	int32_t ____version_2;
	// System.Object System.Collections.ArrayList::_syncRoot
	RuntimeObject * ____syncRoot_3;

public:
	inline static int32_t get_offset_of__items_0() { return static_cast<int32_t>(offsetof(ArrayList_t2718874744, ____items_0)); }
	inline ObjectU5BU5D_t2843939325* get__items_0() const { return ____items_0; }
	inline ObjectU5BU5D_t2843939325** get_address_of__items_0() { return &____items_0; }
	inline void set__items_0(ObjectU5BU5D_t2843939325* value)
	{
		____items_0 = value;
		Il2CppCodeGenWriteBarrier((&____items_0), value);
	}

	inline static int32_t get_offset_of__size_1() { return static_cast<int32_t>(offsetof(ArrayList_t2718874744, ____size_1)); }
	inline int32_t get__size_1() const { return ____size_1; }
	inline int32_t* get_address_of__size_1() { return &____size_1; }
	inline void set__size_1(int32_t value)
	{
		____size_1 = value;
	}

	inline static int32_t get_offset_of__version_2() { return static_cast<int32_t>(offsetof(ArrayList_t2718874744, ____version_2)); }
	inline int32_t get__version_2() const { return ____version_2; }
	inline int32_t* get_address_of__version_2() { return &____version_2; }
	inline void set__version_2(int32_t value)
	{
		____version_2 = value;
	}

	inline static int32_t get_offset_of__syncRoot_3() { return static_cast<int32_t>(offsetof(ArrayList_t2718874744, ____syncRoot_3)); }
	inline RuntimeObject * get__syncRoot_3() const { return ____syncRoot_3; }
	inline RuntimeObject ** get_address_of__syncRoot_3() { return &____syncRoot_3; }
	inline void set__syncRoot_3(RuntimeObject * value)
	{
		____syncRoot_3 = value;
		Il2CppCodeGenWriteBarrier((&____syncRoot_3), value);
	}
};

struct ArrayList_t2718874744_StaticFields
{
public:
	// System.Object[] System.Collections.ArrayList::emptyArray
	ObjectU5BU5D_t2843939325* ___emptyArray_4;

public:
	inline static int32_t get_offset_of_emptyArray_4() { return static_cast<int32_t>(offsetof(ArrayList_t2718874744_StaticFields, ___emptyArray_4)); }
	inline ObjectU5BU5D_t2843939325* get_emptyArray_4() const { return ___emptyArray_4; }
	inline ObjectU5BU5D_t2843939325** get_address_of_emptyArray_4() { return &___emptyArray_4; }
	inline void set_emptyArray_4(ObjectU5BU5D_t2843939325* value)
	{
		___emptyArray_4 = value;
		Il2CppCodeGenWriteBarrier((&___emptyArray_4), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // ARRAYLIST_T2718874744_H
#ifndef COLLECTIONBASE_T2727926298_H
#define COLLECTIONBASE_T2727926298_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Collections.CollectionBase
struct  CollectionBase_t2727926298  : public RuntimeObject
{
public:
	// System.Collections.ArrayList System.Collections.CollectionBase::list
	ArrayList_t2718874744 * ___list_0;

public:
	inline static int32_t get_offset_of_list_0() { return static_cast<int32_t>(offsetof(CollectionBase_t2727926298, ___list_0)); }
	inline ArrayList_t2718874744 * get_list_0() const { return ___list_0; }
	inline ArrayList_t2718874744 ** get_address_of_list_0() { return &___list_0; }
	inline void set_list_0(ArrayList_t2718874744 * value)
	{
		___list_0 = value;
		Il2CppCodeGenWriteBarrier((&___list_0), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // COLLECTIONBASE_T2727926298_H
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
#ifndef X509CERTIFICATECOLLECTION_T3399372417_H
#define X509CERTIFICATECOLLECTION_T3399372417_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Security.Cryptography.X509Certificates.X509CertificateCollection
struct  X509CertificateCollection_t3399372417  : public CollectionBase_t2727926298
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // X509CERTIFICATECOLLECTION_T3399372417_H
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
#ifndef UINT64_T4134040092_H
#define UINT64_T4134040092_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.UInt64
struct  UInt64_t4134040092 
{
public:
	// System.UInt64 System.UInt64::m_value
	uint64_t ___m_value_0;

public:
	inline static int32_t get_offset_of_m_value_0() { return static_cast<int32_t>(offsetof(UInt64_t4134040092, ___m_value_0)); }
	inline uint64_t get_m_value_0() const { return ___m_value_0; }
	inline uint64_t* get_address_of_m_value_0() { return &___m_value_0; }
	inline void set_m_value_0(uint64_t value)
	{
		___m_value_0 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // UINT64_T4134040092_H
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
#ifndef MONOSSLPOLICYERRORS_T2590217945_H
#define MONOSSLPOLICYERRORS_T2590217945_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// Mono.Security.Interface.MonoSslPolicyErrors
struct  MonoSslPolicyErrors_t2590217945 
{
public:
	// System.Int32 Mono.Security.Interface.MonoSslPolicyErrors::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(MonoSslPolicyErrors_t2590217945, ___value___2)); }
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
#endif // MONOSSLPOLICYERRORS_T2590217945_H
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
#ifndef FORMATEXCEPTION_T154580423_H
#define FORMATEXCEPTION_T154580423_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.FormatException
struct  FormatException_t154580423  : public SystemException_t176217640
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // FORMATEXCEPTION_T154580423_H
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
// System.Byte[]
struct ByteU5BU5D_t4116647657  : public RuntimeArray
{
public:
	ALIGN_FIELD (8) uint8_t m_Items[1];

public:
	inline uint8_t GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline uint8_t* GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, uint8_t value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
	}
	inline uint8_t GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline uint8_t* GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, uint8_t value)
	{
		m_Items[index] = value;
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


// !!0[] System.Array::Empty<System.Object>()
extern "C" IL2CPP_METHOD_ATTR ObjectU5BU5D_t2843939325* Array_Empty_TisRuntimeObject_m4268358689_gshared (RuntimeObject * __this /* static, unused */, const RuntimeMethod* method);
// System.Void System.Array::Reverse<System.Byte>(!!0[])
extern "C" IL2CPP_METHOD_ATTR void Array_Reverse_TisByte_t1134296376_m4070369654_gshared (RuntimeObject * __this /* static, unused */, ByteU5BU5D_t4116647657* p0, const RuntimeMethod* method);

// System.Void Mono.Security.ASN1::.ctor(System.Byte,System.Byte[])
extern "C" IL2CPP_METHOD_ATTR void ASN1__ctor_m3517592395 (ASN1_t2114160833 * __this, uint8_t ___tag0, ByteU5BU5D_t4116647657* ___data1, const RuntimeMethod* method);
// System.Void System.Object::.ctor()
extern "C" IL2CPP_METHOD_ATTR void Object__ctor_m297566312 (RuntimeObject * __this, const RuntimeMethod* method);
// System.Void System.NotSupportedException::.ctor(System.String)
extern "C" IL2CPP_METHOD_ATTR void NotSupportedException__ctor_m2494070935 (NotSupportedException_t1314879016 * __this, String_t* p0, const RuntimeMethod* method);
// System.Void System.Buffer::BlockCopy(System.Array,System.Int32,System.Array,System.Int32,System.Int32)
extern "C" IL2CPP_METHOD_ATTR void Buffer_BlockCopy_m2884209081 (RuntimeObject * __this /* static, unused */, RuntimeArray * p0, int32_t p1, RuntimeArray * p2, int32_t p3, int32_t p4, const RuntimeMethod* method);
// System.Void Mono.Security.ASN1::Decode(System.Byte[],System.Int32&,System.Int32)
extern "C" IL2CPP_METHOD_ATTR void ASN1_Decode_m1245286596 (ASN1_t2114160833 * __this, ByteU5BU5D_t4116647657* ___asn10, int32_t* ___anPos1, int32_t ___anLength2, const RuntimeMethod* method);
// System.Object System.Array::Clone()
extern "C" IL2CPP_METHOD_ATTR RuntimeObject * Array_Clone_m2672907798 (RuntimeArray * __this, const RuntimeMethod* method);
// System.Void System.Collections.ArrayList::.ctor()
extern "C" IL2CPP_METHOD_ATTR void ArrayList__ctor_m4254721275 (ArrayList_t2718874744 * __this, const RuntimeMethod* method);
// System.Int32 Mono.Security.ASN1::get_Count()
extern "C" IL2CPP_METHOD_ATTR int32_t ASN1_get_Count_m3039939183 (ASN1_t2114160833 * __this, const RuntimeMethod* method);
// System.Void Mono.Security.ASN1::DecodeTLV(System.Byte[],System.Int32&,System.Byte&,System.Int32&,System.Byte[]&)
extern "C" IL2CPP_METHOD_ATTR void ASN1_DecodeTLV_m3927350254 (ASN1_t2114160833 * __this, ByteU5BU5D_t4116647657* ___asn10, int32_t* ___pos1, uint8_t* ___tag2, int32_t* ___length3, ByteU5BU5D_t4116647657** ___content4, const RuntimeMethod* method);
// Mono.Security.ASN1 Mono.Security.ASN1::Add(Mono.Security.ASN1)
extern "C" IL2CPP_METHOD_ATTR ASN1_t2114160833 * ASN1_Add_m3262603624 (ASN1_t2114160833 * __this, ASN1_t2114160833 * ___asn10, const RuntimeMethod* method);
// System.Void System.Text.StringBuilder::.ctor()
extern "C" IL2CPP_METHOD_ATTR void StringBuilder__ctor_m3121283359 (StringBuilder_t * __this, const RuntimeMethod* method);
// System.String System.Byte::ToString(System.String)
extern "C" IL2CPP_METHOD_ATTR String_t* Byte_ToString_m3735479648 (uint8_t* __this, String_t* p0, const RuntimeMethod* method);
// System.String System.Environment::get_NewLine()
extern "C" IL2CPP_METHOD_ATTR String_t* Environment_get_NewLine_m3211016485 (RuntimeObject * __this /* static, unused */, const RuntimeMethod* method);
// System.Text.StringBuilder System.Text.StringBuilder::AppendFormat(System.String,System.Object,System.Object)
extern "C" IL2CPP_METHOD_ATTR StringBuilder_t * StringBuilder_AppendFormat_m3255666490 (StringBuilder_t * __this, String_t* p0, RuntimeObject * p1, RuntimeObject * p2, const RuntimeMethod* method);
// System.Byte[] Mono.Security.ASN1::get_Value()
extern "C" IL2CPP_METHOD_ATTR ByteU5BU5D_t4116647657* ASN1_get_Value_m3619295991 (ASN1_t2114160833 * __this, const RuntimeMethod* method);
// System.Text.StringBuilder System.Text.StringBuilder::Append(System.String)
extern "C" IL2CPP_METHOD_ATTR StringBuilder_t * StringBuilder_Append_m1965104174 (StringBuilder_t * __this, String_t* p0, const RuntimeMethod* method);
// System.Text.StringBuilder System.Text.StringBuilder::AppendFormat(System.String,System.Object)
extern "C" IL2CPP_METHOD_ATTR StringBuilder_t * StringBuilder_AppendFormat_m3016532472 (StringBuilder_t * __this, String_t* p0, RuntimeObject * p1, const RuntimeMethod* method);
// !!0[] System.Array::Empty<System.Object>()
inline ObjectU5BU5D_t2843939325* Array_Empty_TisRuntimeObject_m4268358689 (RuntimeObject * __this /* static, unused */, const RuntimeMethod* method)
{
	return ((  ObjectU5BU5D_t2843939325* (*) (RuntimeObject * /* static, unused */, const RuntimeMethod*))Array_Empty_TisRuntimeObject_m4268358689_gshared)(__this /* static, unused */, method);
}
// System.Text.StringBuilder System.Text.StringBuilder::AppendFormat(System.String,System.Object[])
extern "C" IL2CPP_METHOD_ATTR StringBuilder_t * StringBuilder_AppendFormat_m921870684 (StringBuilder_t * __this, String_t* p0, ObjectU5BU5D_t2843939325* p1, const RuntimeMethod* method);
// System.Byte[] Mono.Security.BitConverterLE::GetBytes(System.Int32)
extern "C" IL2CPP_METHOD_ATTR ByteU5BU5D_t4116647657* BitConverterLE_GetBytes_m3268825786 (RuntimeObject * __this /* static, unused */, int32_t ___value0, const RuntimeMethod* method);
// System.Void System.Array::Reverse<System.Byte>(!!0[])
inline void Array_Reverse_TisByte_t1134296376_m4070369654 (RuntimeObject * __this /* static, unused */, ByteU5BU5D_t4116647657* p0, const RuntimeMethod* method)
{
	((  void (*) (RuntimeObject * /* static, unused */, ByteU5BU5D_t4116647657*, const RuntimeMethod*))Array_Reverse_TisByte_t1134296376_m4070369654_gshared)(__this /* static, unused */, p0, method);
}
// System.Void Mono.Security.ASN1::.ctor(System.Byte)
extern "C" IL2CPP_METHOD_ATTR void ASN1__ctor_m4216617981 (ASN1_t2114160833 * __this, uint8_t ___tag0, const RuntimeMethod* method);
// System.Void Mono.Security.ASN1::set_Value(System.Byte[])
extern "C" IL2CPP_METHOD_ATTR void ASN1_set_Value_m647861841 (ASN1_t2114160833 * __this, ByteU5BU5D_t4116647657* ___value0, const RuntimeMethod* method);
// System.Void System.ArgumentNullException::.ctor(System.String)
extern "C" IL2CPP_METHOD_ATTR void ArgumentNullException__ctor_m1170824041 (ArgumentNullException_t1615371798 * __this, String_t* p0, const RuntimeMethod* method);
// System.Byte Mono.Security.ASN1::get_Tag()
extern "C" IL2CPP_METHOD_ATTR uint8_t ASN1_get_Tag_m1863840805 (ASN1_t2114160833 * __this, const RuntimeMethod* method);
// System.Void System.FormatException::.ctor(System.String)
extern "C" IL2CPP_METHOD_ATTR void FormatException__ctor_m4049685996 (FormatException_t154580423 * __this, String_t* p0, const RuntimeMethod* method);
// System.Globalization.CultureInfo System.Globalization.CultureInfo::get_InvariantCulture()
extern "C" IL2CPP_METHOD_ATTR CultureInfo_t4157843068 * CultureInfo_get_InvariantCulture_m3532445182 (RuntimeObject * __this /* static, unused */, const RuntimeMethod* method);
// System.String System.Byte::ToString(System.IFormatProvider)
extern "C" IL2CPP_METHOD_ATTR String_t* Byte_ToString_m2335342258 (uint8_t* __this, RuntimeObject* p0, const RuntimeMethod* method);
// System.String System.UInt64::ToString(System.IFormatProvider)
extern "C" IL2CPP_METHOD_ATTR String_t* UInt64_ToString_m2623377370 (uint64_t* __this, RuntimeObject* p0, const RuntimeMethod* method);
// System.Byte[] Mono.Security.BitConverterLE::GetUIntBytes(System.Byte*)
extern "C" IL2CPP_METHOD_ATTR ByteU5BU5D_t4116647657* BitConverterLE_GetUIntBytes_m795219058 (RuntimeObject * __this /* static, unused */, uint8_t* ___bytes0, const RuntimeMethod* method);
// System.Void System.Text.StringBuilder::.ctor(System.Int32)
extern "C" IL2CPP_METHOD_ATTR void StringBuilder__ctor_m2367297767 (StringBuilder_t * __this, int32_t p0, const RuntimeMethod* method);
// System.String System.Byte::ToString(System.String,System.IFormatProvider)
extern "C" IL2CPP_METHOD_ATTR String_t* Byte_ToString_m4063101981 (uint8_t* __this, String_t* p0, RuntimeObject* p1, const RuntimeMethod* method);
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
// System.Void Mono.Security.ASN1::.ctor(System.Byte)
extern "C" IL2CPP_METHOD_ATTR void ASN1__ctor_m4216617981 (ASN1_t2114160833 * __this, uint8_t ___tag0, const RuntimeMethod* method)
{
	{
		uint8_t L_0 = ___tag0;
		ASN1__ctor_m3517592395(__this, L_0, (ByteU5BU5D_t4116647657*)(ByteU5BU5D_t4116647657*)NULL, /*hidden argument*/NULL);
		return;
	}
}
// System.Void Mono.Security.ASN1::.ctor(System.Byte,System.Byte[])
extern "C" IL2CPP_METHOD_ATTR void ASN1__ctor_m3517592395 (ASN1_t2114160833 * __this, uint8_t ___tag0, ByteU5BU5D_t4116647657* ___data1, const RuntimeMethod* method)
{
	{
		Object__ctor_m297566312(__this, /*hidden argument*/NULL);
		uint8_t L_0 = ___tag0;
		__this->set_m_nTag_0(L_0);
		ByteU5BU5D_t4116647657* L_1 = ___data1;
		__this->set_m_aValue_1(L_1);
		return;
	}
}
// System.Void Mono.Security.ASN1::.ctor(System.Byte[])
extern "C" IL2CPP_METHOD_ATTR void ASN1__ctor_m1219137533 (ASN1_t2114160833 * __this, ByteU5BU5D_t4116647657* ___data0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (ASN1__ctor_m1219137533_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	int32_t V_1 = 0;
	int32_t V_2 = 0;
	int32_t V_3 = 0;
	{
		Object__ctor_m297566312(__this, /*hidden argument*/NULL);
		ByteU5BU5D_t4116647657* L_0 = ___data0;
		int32_t L_1 = 0;
		uint8_t L_2 = (L_0)->GetAtUnchecked(static_cast<il2cpp_array_size_t>(L_1));
		__this->set_m_nTag_0(L_2);
		V_0 = 0;
		ByteU5BU5D_t4116647657* L_3 = ___data0;
		int32_t L_4 = 1;
		uint8_t L_5 = (L_3)->GetAtUnchecked(static_cast<il2cpp_array_size_t>(L_4));
		V_1 = L_5;
		int32_t L_6 = V_1;
		if ((((int32_t)L_6) <= ((int32_t)((int32_t)128))))
		{
			goto IL_0045;
		}
	}
	{
		int32_t L_7 = V_1;
		V_0 = ((int32_t)il2cpp_codegen_subtract((int32_t)L_7, (int32_t)((int32_t)128)));
		V_1 = 0;
		V_2 = 0;
		goto IL_003f;
	}

IL_002b:
	{
		int32_t L_8 = V_1;
		V_1 = ((int32_t)il2cpp_codegen_multiply((int32_t)L_8, (int32_t)((int32_t)256)));
		int32_t L_9 = V_1;
		ByteU5BU5D_t4116647657* L_10 = ___data0;
		int32_t L_11 = V_2;
		int32_t L_12 = ((int32_t)il2cpp_codegen_add((int32_t)L_11, (int32_t)2));
		uint8_t L_13 = (L_10)->GetAtUnchecked(static_cast<il2cpp_array_size_t>(L_12));
		V_1 = ((int32_t)il2cpp_codegen_add((int32_t)L_9, (int32_t)L_13));
		int32_t L_14 = V_2;
		V_2 = ((int32_t)il2cpp_codegen_add((int32_t)L_14, (int32_t)1));
	}

IL_003f:
	{
		int32_t L_15 = V_2;
		int32_t L_16 = V_0;
		if ((((int32_t)L_15) < ((int32_t)L_16)))
		{
			goto IL_002b;
		}
	}
	{
		goto IL_0058;
	}

IL_0045:
	{
		int32_t L_17 = V_1;
		if ((!(((uint32_t)L_17) == ((uint32_t)((int32_t)128)))))
		{
			goto IL_0058;
		}
	}
	{
		NotSupportedException_t1314879016 * L_18 = (NotSupportedException_t1314879016 *)il2cpp_codegen_object_new(NotSupportedException_t1314879016_il2cpp_TypeInfo_var);
		NotSupportedException__ctor_m2494070935(L_18, _stringLiteral2861664389, /*hidden argument*/NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_18, NULL, ASN1__ctor_m1219137533_RuntimeMethod_var);
	}

IL_0058:
	{
		int32_t L_19 = V_1;
		ByteU5BU5D_t4116647657* L_20 = (ByteU5BU5D_t4116647657*)SZArrayNew(ByteU5BU5D_t4116647657_il2cpp_TypeInfo_var, (uint32_t)L_19);
		__this->set_m_aValue_1(L_20);
		ByteU5BU5D_t4116647657* L_21 = ___data0;
		int32_t L_22 = V_0;
		ByteU5BU5D_t4116647657* L_23 = __this->get_m_aValue_1();
		int32_t L_24 = V_1;
		Buffer_BlockCopy_m2884209081(NULL /*static, unused*/, (RuntimeArray *)(RuntimeArray *)L_21, ((int32_t)il2cpp_codegen_add((int32_t)2, (int32_t)L_22)), (RuntimeArray *)(RuntimeArray *)L_23, 0, L_24, /*hidden argument*/NULL);
		uint8_t L_25 = __this->get_m_nTag_0();
		if ((!(((uint32_t)((int32_t)((int32_t)L_25&(int32_t)((int32_t)32)))) == ((uint32_t)((int32_t)32)))))
		{
			goto IL_0092;
		}
	}
	{
		int32_t L_26 = V_0;
		V_3 = ((int32_t)il2cpp_codegen_add((int32_t)2, (int32_t)L_26));
		ByteU5BU5D_t4116647657* L_27 = ___data0;
		ByteU5BU5D_t4116647657* L_28 = ___data0;
		ASN1_Decode_m1245286596(__this, L_27, (int32_t*)(&V_3), (((int32_t)((int32_t)(((RuntimeArray *)L_28)->max_length)))), /*hidden argument*/NULL);
	}

IL_0092:
	{
		return;
	}
}
// System.Int32 Mono.Security.ASN1::get_Count()
extern "C" IL2CPP_METHOD_ATTR int32_t ASN1_get_Count_m3039939183 (ASN1_t2114160833 * __this, const RuntimeMethod* method)
{
	{
		ArrayList_t2718874744 * L_0 = __this->get_elist_2();
		if (L_0)
		{
			goto IL_000a;
		}
	}
	{
		return 0;
	}

IL_000a:
	{
		ArrayList_t2718874744 * L_1 = __this->get_elist_2();
		int32_t L_2 = VirtFuncInvoker0< int32_t >::Invoke(22 /* System.Int32 System.Collections.ArrayList::get_Count() */, L_1);
		return L_2;
	}
}
// System.Byte Mono.Security.ASN1::get_Tag()
extern "C" IL2CPP_METHOD_ATTR uint8_t ASN1_get_Tag_m1863840805 (ASN1_t2114160833 * __this, const RuntimeMethod* method)
{
	{
		uint8_t L_0 = __this->get_m_nTag_0();
		return L_0;
	}
}
// System.Byte[] Mono.Security.ASN1::get_Value()
extern "C" IL2CPP_METHOD_ATTR ByteU5BU5D_t4116647657* ASN1_get_Value_m3619295991 (ASN1_t2114160833 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (ASN1_get_Value_m3619295991_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		ByteU5BU5D_t4116647657* L_0 = __this->get_m_aValue_1();
		if (L_0)
		{
			goto IL_000f;
		}
	}
	{
		VirtFuncInvoker0< ByteU5BU5D_t4116647657* >::Invoke(4 /* System.Byte[] Mono.Security.ASN1::GetBytes() */, __this);
	}

IL_000f:
	{
		ByteU5BU5D_t4116647657* L_1 = __this->get_m_aValue_1();
		RuntimeObject * L_2 = Array_Clone_m2672907798((RuntimeArray *)(RuntimeArray *)L_1, /*hidden argument*/NULL);
		return ((ByteU5BU5D_t4116647657*)Castclass((RuntimeObject*)L_2, ByteU5BU5D_t4116647657_il2cpp_TypeInfo_var));
	}
}
// System.Void Mono.Security.ASN1::set_Value(System.Byte[])
extern "C" IL2CPP_METHOD_ATTR void ASN1_set_Value_m647861841 (ASN1_t2114160833 * __this, ByteU5BU5D_t4116647657* ___value0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (ASN1_set_Value_m647861841_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		ByteU5BU5D_t4116647657* L_0 = ___value0;
		if (!L_0)
		{
			goto IL_0014;
		}
	}
	{
		ByteU5BU5D_t4116647657* L_1 = ___value0;
		RuntimeObject * L_2 = Array_Clone_m2672907798((RuntimeArray *)(RuntimeArray *)L_1, /*hidden argument*/NULL);
		__this->set_m_aValue_1(((ByteU5BU5D_t4116647657*)Castclass((RuntimeObject*)L_2, ByteU5BU5D_t4116647657_il2cpp_TypeInfo_var)));
	}

IL_0014:
	{
		return;
	}
}
// Mono.Security.ASN1 Mono.Security.ASN1::Add(Mono.Security.ASN1)
extern "C" IL2CPP_METHOD_ATTR ASN1_t2114160833 * ASN1_Add_m3262603624 (ASN1_t2114160833 * __this, ASN1_t2114160833 * ___asn10, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (ASN1_Add_m3262603624_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		ASN1_t2114160833 * L_0 = ___asn10;
		if (!L_0)
		{
			goto IL_0023;
		}
	}
	{
		ArrayList_t2718874744 * L_1 = __this->get_elist_2();
		if (L_1)
		{
			goto IL_0016;
		}
	}
	{
		ArrayList_t2718874744 * L_2 = (ArrayList_t2718874744 *)il2cpp_codegen_object_new(ArrayList_t2718874744_il2cpp_TypeInfo_var);
		ArrayList__ctor_m4254721275(L_2, /*hidden argument*/NULL);
		__this->set_elist_2(L_2);
	}

IL_0016:
	{
		ArrayList_t2718874744 * L_3 = __this->get_elist_2();
		ASN1_t2114160833 * L_4 = ___asn10;
		VirtFuncInvoker1< int32_t, RuntimeObject * >::Invoke(29 /* System.Int32 System.Collections.ArrayList::Add(System.Object) */, L_3, L_4);
	}

IL_0023:
	{
		ASN1_t2114160833 * L_5 = ___asn10;
		return L_5;
	}
}
// System.Byte[] Mono.Security.ASN1::GetBytes()
extern "C" IL2CPP_METHOD_ATTR ByteU5BU5D_t4116647657* ASN1_GetBytes_m1968380955 (ASN1_t2114160833 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (ASN1_GetBytes_m1968380955_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	ByteU5BU5D_t4116647657* V_0 = NULL;
	ByteU5BU5D_t4116647657* V_1 = NULL;
	int32_t V_2 = 0;
	int32_t V_3 = 0;
	ArrayList_t2718874744 * V_4 = NULL;
	int32_t V_5 = 0;
	RuntimeObject* V_6 = NULL;
	ByteU5BU5D_t4116647657* V_7 = NULL;
	RuntimeObject* V_8 = NULL;
	int32_t V_9 = 0;
	ByteU5BU5D_t4116647657* V_10 = NULL;
	int32_t V_11 = 0;
	Exception_t * __last_unhandled_exception = 0;
	NO_UNUSED_WARNING (__last_unhandled_exception);
	Exception_t * __exception_local = 0;
	NO_UNUSED_WARNING (__exception_local);
	int32_t __leave_target = -1;
	NO_UNUSED_WARNING (__leave_target);
	{
		V_0 = (ByteU5BU5D_t4116647657*)NULL;
		int32_t L_0 = ASN1_get_Count_m3039939183(__this, /*hidden argument*/NULL);
		if ((((int32_t)L_0) <= ((int32_t)0)))
		{
			goto IL_00b8;
		}
	}
	{
		V_3 = 0;
		ArrayList_t2718874744 * L_1 = (ArrayList_t2718874744 *)il2cpp_codegen_object_new(ArrayList_t2718874744_il2cpp_TypeInfo_var);
		ArrayList__ctor_m4254721275(L_1, /*hidden argument*/NULL);
		V_4 = L_1;
		ArrayList_t2718874744 * L_2 = __this->get_elist_2();
		RuntimeObject* L_3 = VirtFuncInvoker0< RuntimeObject* >::Invoke(36 /* System.Collections.IEnumerator System.Collections.ArrayList::GetEnumerator() */, L_2);
		V_6 = L_3;
	}

IL_0024:
	try
	{ // begin try (depth: 1)
		{
			goto IL_004a;
		}

IL_0026:
		{
			RuntimeObject* L_4 = V_6;
			RuntimeObject * L_5 = InterfaceFuncInvoker0< RuntimeObject * >::Invoke(1 /* System.Object System.Collections.IEnumerator::get_Current() */, IEnumerator_t1853284238_il2cpp_TypeInfo_var, L_4);
			ByteU5BU5D_t4116647657* L_6 = VirtFuncInvoker0< ByteU5BU5D_t4116647657* >::Invoke(4 /* System.Byte[] Mono.Security.ASN1::GetBytes() */, ((ASN1_t2114160833 *)CastclassClass((RuntimeObject*)L_5, ASN1_t2114160833_il2cpp_TypeInfo_var)));
			V_7 = L_6;
			ArrayList_t2718874744 * L_7 = V_4;
			ByteU5BU5D_t4116647657* L_8 = V_7;
			VirtFuncInvoker1< int32_t, RuntimeObject * >::Invoke(29 /* System.Int32 System.Collections.ArrayList::Add(System.Object) */, L_7, (RuntimeObject *)(RuntimeObject *)L_8);
			int32_t L_9 = V_3;
			ByteU5BU5D_t4116647657* L_10 = V_7;
			V_3 = ((int32_t)il2cpp_codegen_add((int32_t)L_9, (int32_t)(((int32_t)((int32_t)(((RuntimeArray *)L_10)->max_length))))));
		}

IL_004a:
		{
			RuntimeObject* L_11 = V_6;
			bool L_12 = InterfaceFuncInvoker0< bool >::Invoke(0 /* System.Boolean System.Collections.IEnumerator::MoveNext() */, IEnumerator_t1853284238_il2cpp_TypeInfo_var, L_11);
			if (L_12)
			{
				goto IL_0026;
			}
		}

IL_0053:
		{
			IL2CPP_LEAVE(0x6A, FINALLY_0055);
		}
	} // end try (depth: 1)
	catch(Il2CppExceptionWrapper& e)
	{
		__last_unhandled_exception = (Exception_t *)e.ex;
		goto FINALLY_0055;
	}

FINALLY_0055:
	{ // begin finally (depth: 1)
		{
			RuntimeObject* L_13 = V_6;
			V_8 = ((RuntimeObject*)IsInst((RuntimeObject*)L_13, IDisposable_t3640265483_il2cpp_TypeInfo_var));
			RuntimeObject* L_14 = V_8;
			if (!L_14)
			{
				goto IL_0069;
			}
		}

IL_0062:
		{
			RuntimeObject* L_15 = V_8;
			InterfaceActionInvoker0::Invoke(0 /* System.Void System.IDisposable::Dispose() */, IDisposable_t3640265483_il2cpp_TypeInfo_var, L_15);
		}

IL_0069:
		{
			IL2CPP_END_FINALLY(85)
		}
	} // end finally (depth: 1)
	IL2CPP_CLEANUP(85)
	{
		IL2CPP_JUMP_TBL(0x6A, IL_006a)
		IL2CPP_RETHROW_IF_UNHANDLED(Exception_t *)
	}

IL_006a:
	{
		int32_t L_16 = V_3;
		ByteU5BU5D_t4116647657* L_17 = (ByteU5BU5D_t4116647657*)SZArrayNew(ByteU5BU5D_t4116647657_il2cpp_TypeInfo_var, (uint32_t)L_16);
		V_0 = L_17;
		V_5 = 0;
		V_9 = 0;
		goto IL_00a7;
	}

IL_0079:
	{
		ArrayList_t2718874744 * L_18 = V_4;
		int32_t L_19 = V_9;
		RuntimeObject * L_20 = VirtFuncInvoker1< RuntimeObject *, int32_t >::Invoke(27 /* System.Object System.Collections.ArrayList::get_Item(System.Int32) */, L_18, L_19);
		V_10 = ((ByteU5BU5D_t4116647657*)Castclass((RuntimeObject*)L_20, ByteU5BU5D_t4116647657_il2cpp_TypeInfo_var));
		ByteU5BU5D_t4116647657* L_21 = V_10;
		ByteU5BU5D_t4116647657* L_22 = V_0;
		int32_t L_23 = V_5;
		ByteU5BU5D_t4116647657* L_24 = V_10;
		Buffer_BlockCopy_m2884209081(NULL /*static, unused*/, (RuntimeArray *)(RuntimeArray *)L_21, 0, (RuntimeArray *)(RuntimeArray *)L_22, L_23, (((int32_t)((int32_t)(((RuntimeArray *)L_24)->max_length)))), /*hidden argument*/NULL);
		int32_t L_25 = V_5;
		ByteU5BU5D_t4116647657* L_26 = V_10;
		V_5 = ((int32_t)il2cpp_codegen_add((int32_t)L_25, (int32_t)(((int32_t)((int32_t)(((RuntimeArray *)L_26)->max_length))))));
		int32_t L_27 = V_9;
		V_9 = ((int32_t)il2cpp_codegen_add((int32_t)L_27, (int32_t)1));
	}

IL_00a7:
	{
		int32_t L_28 = V_9;
		ArrayList_t2718874744 * L_29 = __this->get_elist_2();
		int32_t L_30 = VirtFuncInvoker0< int32_t >::Invoke(22 /* System.Int32 System.Collections.ArrayList::get_Count() */, L_29);
		if ((((int32_t)L_28) < ((int32_t)L_30)))
		{
			goto IL_0079;
		}
	}
	{
		goto IL_00c7;
	}

IL_00b8:
	{
		ByteU5BU5D_t4116647657* L_31 = __this->get_m_aValue_1();
		if (!L_31)
		{
			goto IL_00c7;
		}
	}
	{
		ByteU5BU5D_t4116647657* L_32 = __this->get_m_aValue_1();
		V_0 = L_32;
	}

IL_00c7:
	{
		V_2 = 0;
		ByteU5BU5D_t4116647657* L_33 = V_0;
		if (!L_33)
		{
			goto IL_01e6;
		}
	}
	{
		ByteU5BU5D_t4116647657* L_34 = V_0;
		V_11 = (((int32_t)((int32_t)(((RuntimeArray *)L_34)->max_length))));
		int32_t L_35 = V_11;
		if ((((int32_t)L_35) <= ((int32_t)((int32_t)127))))
		{
			goto IL_01bd;
		}
	}
	{
		int32_t L_36 = V_11;
		if ((((int32_t)L_36) > ((int32_t)((int32_t)255))))
		{
			goto IL_010c;
		}
	}
	{
		int32_t L_37 = V_11;
		ByteU5BU5D_t4116647657* L_38 = (ByteU5BU5D_t4116647657*)SZArrayNew(ByteU5BU5D_t4116647657_il2cpp_TypeInfo_var, (uint32_t)((int32_t)il2cpp_codegen_add((int32_t)3, (int32_t)L_37)));
		V_1 = L_38;
		ByteU5BU5D_t4116647657* L_39 = V_0;
		ByteU5BU5D_t4116647657* L_40 = V_1;
		int32_t L_41 = V_11;
		Buffer_BlockCopy_m2884209081(NULL /*static, unused*/, (RuntimeArray *)(RuntimeArray *)L_39, 0, (RuntimeArray *)(RuntimeArray *)L_40, 3, L_41, /*hidden argument*/NULL);
		V_2 = ((int32_t)129);
		ByteU5BU5D_t4116647657* L_42 = V_1;
		int32_t L_43 = V_11;
		(L_42)->SetAtUnchecked(static_cast<il2cpp_array_size_t>(2), (uint8_t)(((int32_t)((uint8_t)L_43))));
		goto IL_01d5;
	}

IL_010c:
	{
		int32_t L_44 = V_11;
		if ((((int32_t)L_44) > ((int32_t)((int32_t)65535))))
		{
			goto IL_0143;
		}
	}
	{
		int32_t L_45 = V_11;
		ByteU5BU5D_t4116647657* L_46 = (ByteU5BU5D_t4116647657*)SZArrayNew(ByteU5BU5D_t4116647657_il2cpp_TypeInfo_var, (uint32_t)((int32_t)il2cpp_codegen_add((int32_t)4, (int32_t)L_45)));
		V_1 = L_46;
		ByteU5BU5D_t4116647657* L_47 = V_0;
		ByteU5BU5D_t4116647657* L_48 = V_1;
		int32_t L_49 = V_11;
		Buffer_BlockCopy_m2884209081(NULL /*static, unused*/, (RuntimeArray *)(RuntimeArray *)L_47, 0, (RuntimeArray *)(RuntimeArray *)L_48, 4, L_49, /*hidden argument*/NULL);
		V_2 = ((int32_t)130);
		ByteU5BU5D_t4116647657* L_50 = V_1;
		int32_t L_51 = V_11;
		(L_50)->SetAtUnchecked(static_cast<il2cpp_array_size_t>(2), (uint8_t)(((int32_t)((uint8_t)((int32_t)((int32_t)L_51>>(int32_t)8))))));
		ByteU5BU5D_t4116647657* L_52 = V_1;
		int32_t L_53 = V_11;
		(L_52)->SetAtUnchecked(static_cast<il2cpp_array_size_t>(3), (uint8_t)(((int32_t)((uint8_t)L_53))));
		goto IL_01d5;
	}

IL_0143:
	{
		int32_t L_54 = V_11;
		if ((((int32_t)L_54) > ((int32_t)((int32_t)16777215))))
		{
			goto IL_0180;
		}
	}
	{
		int32_t L_55 = V_11;
		ByteU5BU5D_t4116647657* L_56 = (ByteU5BU5D_t4116647657*)SZArrayNew(ByteU5BU5D_t4116647657_il2cpp_TypeInfo_var, (uint32_t)((int32_t)il2cpp_codegen_add((int32_t)5, (int32_t)L_55)));
		V_1 = L_56;
		ByteU5BU5D_t4116647657* L_57 = V_0;
		ByteU5BU5D_t4116647657* L_58 = V_1;
		int32_t L_59 = V_11;
		Buffer_BlockCopy_m2884209081(NULL /*static, unused*/, (RuntimeArray *)(RuntimeArray *)L_57, 0, (RuntimeArray *)(RuntimeArray *)L_58, 5, L_59, /*hidden argument*/NULL);
		V_2 = ((int32_t)131);
		ByteU5BU5D_t4116647657* L_60 = V_1;
		int32_t L_61 = V_11;
		(L_60)->SetAtUnchecked(static_cast<il2cpp_array_size_t>(2), (uint8_t)(((int32_t)((uint8_t)((int32_t)((int32_t)L_61>>(int32_t)((int32_t)16)))))));
		ByteU5BU5D_t4116647657* L_62 = V_1;
		int32_t L_63 = V_11;
		(L_62)->SetAtUnchecked(static_cast<il2cpp_array_size_t>(3), (uint8_t)(((int32_t)((uint8_t)((int32_t)((int32_t)L_63>>(int32_t)8))))));
		ByteU5BU5D_t4116647657* L_64 = V_1;
		int32_t L_65 = V_11;
		(L_64)->SetAtUnchecked(static_cast<il2cpp_array_size_t>(4), (uint8_t)(((int32_t)((uint8_t)L_65))));
		goto IL_01d5;
	}

IL_0180:
	{
		int32_t L_66 = V_11;
		ByteU5BU5D_t4116647657* L_67 = (ByteU5BU5D_t4116647657*)SZArrayNew(ByteU5BU5D_t4116647657_il2cpp_TypeInfo_var, (uint32_t)((int32_t)il2cpp_codegen_add((int32_t)6, (int32_t)L_66)));
		V_1 = L_67;
		ByteU5BU5D_t4116647657* L_68 = V_0;
		ByteU5BU5D_t4116647657* L_69 = V_1;
		int32_t L_70 = V_11;
		Buffer_BlockCopy_m2884209081(NULL /*static, unused*/, (RuntimeArray *)(RuntimeArray *)L_68, 0, (RuntimeArray *)(RuntimeArray *)L_69, 6, L_70, /*hidden argument*/NULL);
		V_2 = ((int32_t)132);
		ByteU5BU5D_t4116647657* L_71 = V_1;
		int32_t L_72 = V_11;
		(L_71)->SetAtUnchecked(static_cast<il2cpp_array_size_t>(2), (uint8_t)(((int32_t)((uint8_t)((int32_t)((int32_t)L_72>>(int32_t)((int32_t)24)))))));
		ByteU5BU5D_t4116647657* L_73 = V_1;
		int32_t L_74 = V_11;
		(L_73)->SetAtUnchecked(static_cast<il2cpp_array_size_t>(3), (uint8_t)(((int32_t)((uint8_t)((int32_t)((int32_t)L_74>>(int32_t)((int32_t)16)))))));
		ByteU5BU5D_t4116647657* L_75 = V_1;
		int32_t L_76 = V_11;
		(L_75)->SetAtUnchecked(static_cast<il2cpp_array_size_t>(4), (uint8_t)(((int32_t)((uint8_t)((int32_t)((int32_t)L_76>>(int32_t)8))))));
		ByteU5BU5D_t4116647657* L_77 = V_1;
		int32_t L_78 = V_11;
		(L_77)->SetAtUnchecked(static_cast<il2cpp_array_size_t>(5), (uint8_t)(((int32_t)((uint8_t)L_78))));
		goto IL_01d5;
	}

IL_01bd:
	{
		int32_t L_79 = V_11;
		ByteU5BU5D_t4116647657* L_80 = (ByteU5BU5D_t4116647657*)SZArrayNew(ByteU5BU5D_t4116647657_il2cpp_TypeInfo_var, (uint32_t)((int32_t)il2cpp_codegen_add((int32_t)2, (int32_t)L_79)));
		V_1 = L_80;
		ByteU5BU5D_t4116647657* L_81 = V_0;
		ByteU5BU5D_t4116647657* L_82 = V_1;
		int32_t L_83 = V_11;
		Buffer_BlockCopy_m2884209081(NULL /*static, unused*/, (RuntimeArray *)(RuntimeArray *)L_81, 0, (RuntimeArray *)(RuntimeArray *)L_82, 2, L_83, /*hidden argument*/NULL);
		int32_t L_84 = V_11;
		V_2 = L_84;
	}

IL_01d5:
	{
		ByteU5BU5D_t4116647657* L_85 = __this->get_m_aValue_1();
		if (L_85)
		{
			goto IL_01ed;
		}
	}
	{
		ByteU5BU5D_t4116647657* L_86 = V_0;
		__this->set_m_aValue_1(L_86);
		goto IL_01ed;
	}

IL_01e6:
	{
		ByteU5BU5D_t4116647657* L_87 = (ByteU5BU5D_t4116647657*)SZArrayNew(ByteU5BU5D_t4116647657_il2cpp_TypeInfo_var, (uint32_t)2);
		V_1 = L_87;
	}

IL_01ed:
	{
		ByteU5BU5D_t4116647657* L_88 = V_1;
		uint8_t L_89 = __this->get_m_nTag_0();
		(L_88)->SetAtUnchecked(static_cast<il2cpp_array_size_t>(0), (uint8_t)L_89);
		ByteU5BU5D_t4116647657* L_90 = V_1;
		int32_t L_91 = V_2;
		(L_90)->SetAtUnchecked(static_cast<il2cpp_array_size_t>(1), (uint8_t)(((int32_t)((uint8_t)L_91))));
		ByteU5BU5D_t4116647657* L_92 = V_1;
		return L_92;
	}
}
// System.Void Mono.Security.ASN1::Decode(System.Byte[],System.Int32&,System.Int32)
extern "C" IL2CPP_METHOD_ATTR void ASN1_Decode_m1245286596 (ASN1_t2114160833 * __this, ByteU5BU5D_t4116647657* ___asn10, int32_t* ___anPos1, int32_t ___anLength2, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (ASN1_Decode_m1245286596_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	uint8_t V_0 = 0x0;
	int32_t V_1 = 0;
	ByteU5BU5D_t4116647657* V_2 = NULL;
	ASN1_t2114160833 * V_3 = NULL;
	int32_t V_4 = 0;
	{
		goto IL_0040;
	}

IL_0002:
	{
		ByteU5BU5D_t4116647657* L_0 = ___asn10;
		int32_t* L_1 = ___anPos1;
		ASN1_DecodeTLV_m3927350254(__this, L_0, (int32_t*)L_1, (uint8_t*)(&V_0), (int32_t*)(&V_1), (ByteU5BU5D_t4116647657**)(&V_2), /*hidden argument*/NULL);
		uint8_t L_2 = V_0;
		if (!L_2)
		{
			goto IL_0040;
		}
	}
	{
		uint8_t L_3 = V_0;
		ByteU5BU5D_t4116647657* L_4 = V_2;
		ASN1_t2114160833 * L_5 = (ASN1_t2114160833 *)il2cpp_codegen_object_new(ASN1_t2114160833_il2cpp_TypeInfo_var);
		ASN1__ctor_m3517592395(L_5, L_3, L_4, /*hidden argument*/NULL);
		ASN1_t2114160833 * L_6 = ASN1_Add_m3262603624(__this, L_5, /*hidden argument*/NULL);
		V_3 = L_6;
		uint8_t L_7 = V_0;
		if ((!(((uint32_t)((int32_t)((int32_t)L_7&(int32_t)((int32_t)32)))) == ((uint32_t)((int32_t)32)))))
		{
			goto IL_003a;
		}
	}
	{
		int32_t* L_8 = ___anPos1;
		int32_t L_9 = *((int32_t*)L_8);
		V_4 = L_9;
		ASN1_t2114160833 * L_10 = V_3;
		ByteU5BU5D_t4116647657* L_11 = ___asn10;
		int32_t L_12 = V_4;
		int32_t L_13 = V_1;
		ASN1_Decode_m1245286596(L_10, L_11, (int32_t*)(&V_4), ((int32_t)il2cpp_codegen_add((int32_t)L_12, (int32_t)L_13)), /*hidden argument*/NULL);
	}

IL_003a:
	{
		int32_t* L_14 = ___anPos1;
		int32_t* L_15 = ___anPos1;
		int32_t L_16 = *((int32_t*)L_15);
		int32_t L_17 = V_1;
		*((int32_t*)L_14) = (int32_t)((int32_t)il2cpp_codegen_add((int32_t)L_16, (int32_t)L_17));
	}

IL_0040:
	{
		int32_t* L_18 = ___anPos1;
		int32_t L_19 = *((int32_t*)L_18);
		int32_t L_20 = ___anLength2;
		if ((((int32_t)L_19) < ((int32_t)((int32_t)il2cpp_codegen_subtract((int32_t)L_20, (int32_t)1)))))
		{
			goto IL_0002;
		}
	}
	{
		return;
	}
}
// System.Void Mono.Security.ASN1::DecodeTLV(System.Byte[],System.Int32&,System.Byte&,System.Int32&,System.Byte[]&)
extern "C" IL2CPP_METHOD_ATTR void ASN1_DecodeTLV_m3927350254 (ASN1_t2114160833 * __this, ByteU5BU5D_t4116647657* ___asn10, int32_t* ___pos1, uint8_t* ___tag2, int32_t* ___length3, ByteU5BU5D_t4116647657** ___content4, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (ASN1_DecodeTLV_m3927350254_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	int32_t V_1 = 0;
	int32_t V_2 = 0;
	{
		uint8_t* L_0 = ___tag2;
		ByteU5BU5D_t4116647657* L_1 = ___asn10;
		int32_t* L_2 = ___pos1;
		int32_t* L_3 = ___pos1;
		int32_t L_4 = *((int32_t*)L_3);
		V_0 = L_4;
		int32_t L_5 = V_0;
		*((int32_t*)L_2) = (int32_t)((int32_t)il2cpp_codegen_add((int32_t)L_5, (int32_t)1));
		int32_t L_6 = V_0;
		int32_t L_7 = L_6;
		uint8_t L_8 = (L_1)->GetAtUnchecked(static_cast<il2cpp_array_size_t>(L_7));
		*((int8_t*)L_0) = (int8_t)L_8;
		int32_t* L_9 = ___length3;
		ByteU5BU5D_t4116647657* L_10 = ___asn10;
		int32_t* L_11 = ___pos1;
		int32_t* L_12 = ___pos1;
		int32_t L_13 = *((int32_t*)L_12);
		V_0 = L_13;
		int32_t L_14 = V_0;
		*((int32_t*)L_11) = (int32_t)((int32_t)il2cpp_codegen_add((int32_t)L_14, (int32_t)1));
		int32_t L_15 = V_0;
		int32_t L_16 = L_15;
		uint8_t L_17 = (L_10)->GetAtUnchecked(static_cast<il2cpp_array_size_t>(L_16));
		*((int32_t*)L_9) = (int32_t)L_17;
		int32_t* L_18 = ___length3;
		int32_t L_19 = *((int32_t*)L_18);
		if ((!(((uint32_t)((int32_t)((int32_t)L_19&(int32_t)((int32_t)128)))) == ((uint32_t)((int32_t)128)))))
		{
			goto IL_005a;
		}
	}
	{
		int32_t* L_20 = ___length3;
		int32_t L_21 = *((int32_t*)L_20);
		V_1 = ((int32_t)((int32_t)L_21&(int32_t)((int32_t)127)));
		int32_t* L_22 = ___length3;
		*((int32_t*)L_22) = (int32_t)0;
		V_2 = 0;
		goto IL_0056;
	}

IL_003a:
	{
		int32_t* L_23 = ___length3;
		int32_t* L_24 = ___length3;
		int32_t L_25 = *((int32_t*)L_24);
		ByteU5BU5D_t4116647657* L_26 = ___asn10;
		int32_t* L_27 = ___pos1;
		int32_t* L_28 = ___pos1;
		int32_t L_29 = *((int32_t*)L_28);
		V_0 = L_29;
		int32_t L_30 = V_0;
		*((int32_t*)L_27) = (int32_t)((int32_t)il2cpp_codegen_add((int32_t)L_30, (int32_t)1));
		int32_t L_31 = V_0;
		int32_t L_32 = L_31;
		uint8_t L_33 = (L_26)->GetAtUnchecked(static_cast<il2cpp_array_size_t>(L_32));
		*((int32_t*)L_23) = (int32_t)((int32_t)il2cpp_codegen_add((int32_t)((int32_t)il2cpp_codegen_multiply((int32_t)L_25, (int32_t)((int32_t)256))), (int32_t)L_33));
		int32_t L_34 = V_2;
		V_2 = ((int32_t)il2cpp_codegen_add((int32_t)L_34, (int32_t)1));
	}

IL_0056:
	{
		int32_t L_35 = V_2;
		int32_t L_36 = V_1;
		if ((((int32_t)L_35) < ((int32_t)L_36)))
		{
			goto IL_003a;
		}
	}

IL_005a:
	{
		ByteU5BU5D_t4116647657** L_37 = ___content4;
		int32_t* L_38 = ___length3;
		int32_t L_39 = *((int32_t*)L_38);
		ByteU5BU5D_t4116647657* L_40 = (ByteU5BU5D_t4116647657*)SZArrayNew(ByteU5BU5D_t4116647657_il2cpp_TypeInfo_var, (uint32_t)L_39);
		*((RuntimeObject **)L_37) = (RuntimeObject *)L_40;
		Il2CppCodeGenWriteBarrier((RuntimeObject **)L_37, (RuntimeObject *)L_40);
		ByteU5BU5D_t4116647657* L_41 = ___asn10;
		int32_t* L_42 = ___pos1;
		int32_t L_43 = *((int32_t*)L_42);
		ByteU5BU5D_t4116647657** L_44 = ___content4;
		ByteU5BU5D_t4116647657* L_45 = *((ByteU5BU5D_t4116647657**)L_44);
		int32_t* L_46 = ___length3;
		int32_t L_47 = *((int32_t*)L_46);
		Buffer_BlockCopy_m2884209081(NULL /*static, unused*/, (RuntimeArray *)(RuntimeArray *)L_41, L_43, (RuntimeArray *)(RuntimeArray *)L_45, 0, L_47, /*hidden argument*/NULL);
		return;
	}
}
// Mono.Security.ASN1 Mono.Security.ASN1::get_Item(System.Int32)
extern "C" IL2CPP_METHOD_ATTR ASN1_t2114160833 * ASN1_get_Item_m315148275 (ASN1_t2114160833 * __this, int32_t ___index0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (ASN1_get_Item_m315148275_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	ASN1_t2114160833 * V_0 = NULL;
	Exception_t * __last_unhandled_exception = 0;
	NO_UNUSED_WARNING (__last_unhandled_exception);
	Exception_t * __exception_local = 0;
	NO_UNUSED_WARNING (__exception_local);
	int32_t __leave_target = -1;
	NO_UNUSED_WARNING (__leave_target);

IL_0000:
	try
	{ // begin try (depth: 1)
		{
			ArrayList_t2718874744 * L_0 = __this->get_elist_2();
			if (!L_0)
			{
				goto IL_0016;
			}
		}

IL_0008:
		{
			int32_t L_1 = ___index0;
			ArrayList_t2718874744 * L_2 = __this->get_elist_2();
			int32_t L_3 = VirtFuncInvoker0< int32_t >::Invoke(22 /* System.Int32 System.Collections.ArrayList::get_Count() */, L_2);
			if ((((int32_t)L_1) < ((int32_t)L_3)))
			{
				goto IL_001a;
			}
		}

IL_0016:
		{
			V_0 = (ASN1_t2114160833 *)NULL;
			goto IL_0033;
		}

IL_001a:
		{
			ArrayList_t2718874744 * L_4 = __this->get_elist_2();
			int32_t L_5 = ___index0;
			RuntimeObject * L_6 = VirtFuncInvoker1< RuntimeObject *, int32_t >::Invoke(27 /* System.Object System.Collections.ArrayList::get_Item(System.Int32) */, L_4, L_5);
			V_0 = ((ASN1_t2114160833 *)CastclassClass((RuntimeObject*)L_6, ASN1_t2114160833_il2cpp_TypeInfo_var));
			goto IL_0033;
		}
	} // end try (depth: 1)
	catch(Il2CppExceptionWrapper& e)
	{
		__exception_local = (Exception_t *)e.ex;
		if(il2cpp_codegen_class_is_assignable_from (ArgumentOutOfRangeException_t777629997_il2cpp_TypeInfo_var, il2cpp_codegen_object_class(e.ex)))
			goto CATCH_002e;
		throw e;
	}

CATCH_002e:
	{ // begin catch(System.ArgumentOutOfRangeException)
		V_0 = (ASN1_t2114160833 *)NULL;
		goto IL_0033;
	} // end catch (depth: 1)

IL_0033:
	{
		ASN1_t2114160833 * L_7 = V_0;
		return L_7;
	}
}
// System.String Mono.Security.ASN1::ToString()
extern "C" IL2CPP_METHOD_ATTR String_t* ASN1_ToString_m45458043 (ASN1_t2114160833 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (ASN1_ToString_m45458043_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	StringBuilder_t * V_0 = NULL;
	int32_t V_1 = 0;
	{
		StringBuilder_t * L_0 = (StringBuilder_t *)il2cpp_codegen_object_new(StringBuilder_t_il2cpp_TypeInfo_var);
		StringBuilder__ctor_m3121283359(L_0, /*hidden argument*/NULL);
		V_0 = L_0;
		StringBuilder_t * L_1 = V_0;
		uint8_t* L_2 = __this->get_address_of_m_nTag_0();
		String_t* L_3 = Byte_ToString_m3735479648((uint8_t*)L_2, _stringLiteral3451435000, /*hidden argument*/NULL);
		String_t* L_4 = Environment_get_NewLine_m3211016485(NULL /*static, unused*/, /*hidden argument*/NULL);
		StringBuilder_AppendFormat_m3255666490(L_1, _stringLiteral1285239904, L_3, L_4, /*hidden argument*/NULL);
		StringBuilder_t * L_5 = V_0;
		ByteU5BU5D_t4116647657* L_6 = ASN1_get_Value_m3619295991(__this, /*hidden argument*/NULL);
		int32_t L_7 = (((int32_t)((int32_t)(((RuntimeArray *)L_6)->max_length))));
		RuntimeObject * L_8 = Box(Int32_t2950945753_il2cpp_TypeInfo_var, &L_7);
		String_t* L_9 = Environment_get_NewLine_m3211016485(NULL /*static, unused*/, /*hidden argument*/NULL);
		StringBuilder_AppendFormat_m3255666490(L_5, _stringLiteral2514902888, L_8, L_9, /*hidden argument*/NULL);
		StringBuilder_t * L_10 = V_0;
		StringBuilder_Append_m1965104174(L_10, _stringLiteral3013462727, /*hidden argument*/NULL);
		StringBuilder_t * L_11 = V_0;
		String_t* L_12 = Environment_get_NewLine_m3211016485(NULL /*static, unused*/, /*hidden argument*/NULL);
		StringBuilder_Append_m1965104174(L_11, L_12, /*hidden argument*/NULL);
		V_1 = 0;
		goto IL_00a0;
	}

IL_0061:
	{
		StringBuilder_t * L_13 = V_0;
		ByteU5BU5D_t4116647657* L_14 = ASN1_get_Value_m3619295991(__this, /*hidden argument*/NULL);
		int32_t L_15 = V_1;
		String_t* L_16 = Byte_ToString_m3735479648((uint8_t*)((L_14)->GetAddressAtUnchecked(static_cast<il2cpp_array_size_t>(L_15))), _stringLiteral3451435000, /*hidden argument*/NULL);
		StringBuilder_AppendFormat_m3016532472(L_13, _stringLiteral3100627678, L_16, /*hidden argument*/NULL);
		int32_t L_17 = V_1;
		if (((int32_t)((int32_t)((int32_t)il2cpp_codegen_add((int32_t)L_17, (int32_t)1))%(int32_t)((int32_t)16))))
		{
			goto IL_009c;
		}
	}
	{
		StringBuilder_t * L_18 = V_0;
		String_t* L_19 = Environment_get_NewLine_m3211016485(NULL /*static, unused*/, /*hidden argument*/NULL);
		ObjectU5BU5D_t2843939325* L_20 = Array_Empty_TisRuntimeObject_m4268358689(NULL /*static, unused*/, /*hidden argument*/Array_Empty_TisRuntimeObject_m4268358689_RuntimeMethod_var);
		StringBuilder_AppendFormat_m921870684(L_18, L_19, L_20, /*hidden argument*/NULL);
	}

IL_009c:
	{
		int32_t L_21 = V_1;
		V_1 = ((int32_t)il2cpp_codegen_add((int32_t)L_21, (int32_t)1));
	}

IL_00a0:
	{
		int32_t L_22 = V_1;
		ByteU5BU5D_t4116647657* L_23 = ASN1_get_Value_m3619295991(__this, /*hidden argument*/NULL);
		if ((((int32_t)L_22) < ((int32_t)(((int32_t)((int32_t)(((RuntimeArray *)L_23)->max_length)))))))
		{
			goto IL_0061;
		}
	}
	{
		StringBuilder_t * L_24 = V_0;
		String_t* L_25 = VirtFuncInvoker0< String_t* >::Invoke(3 /* System.String System.Object::ToString() */, L_24);
		return L_25;
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
// Mono.Security.ASN1 Mono.Security.ASN1Convert::FromInt32(System.Int32)
extern "C" IL2CPP_METHOD_ATTR ASN1_t2114160833 * ASN1Convert_FromInt32_m2294771542 (RuntimeObject * __this /* static, unused */, int32_t ___value0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (ASN1Convert_FromInt32_m2294771542_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	ByteU5BU5D_t4116647657* V_0 = NULL;
	int32_t V_1 = 0;
	ASN1_t2114160833 * V_2 = NULL;
	ByteU5BU5D_t4116647657* V_3 = NULL;
	{
		int32_t L_0 = ___value0;
		ByteU5BU5D_t4116647657* L_1 = BitConverterLE_GetBytes_m3268825786(NULL /*static, unused*/, L_0, /*hidden argument*/NULL);
		V_0 = L_1;
		ByteU5BU5D_t4116647657* L_2 = V_0;
		Array_Reverse_TisByte_t1134296376_m4070369654(NULL /*static, unused*/, L_2, /*hidden argument*/Array_Reverse_TisByte_t1134296376_m4070369654_RuntimeMethod_var);
		V_1 = 0;
		goto IL_0015;
	}

IL_0011:
	{
		int32_t L_3 = V_1;
		V_1 = ((int32_t)il2cpp_codegen_add((int32_t)L_3, (int32_t)1));
	}

IL_0015:
	{
		int32_t L_4 = V_1;
		ByteU5BU5D_t4116647657* L_5 = V_0;
		if ((((int32_t)L_4) >= ((int32_t)(((int32_t)((int32_t)(((RuntimeArray *)L_5)->max_length)))))))
		{
			goto IL_0020;
		}
	}
	{
		ByteU5BU5D_t4116647657* L_6 = V_0;
		int32_t L_7 = V_1;
		int32_t L_8 = L_7;
		uint8_t L_9 = (L_6)->GetAtUnchecked(static_cast<il2cpp_array_size_t>(L_8));
		if (!L_9)
		{
			goto IL_0011;
		}
	}

IL_0020:
	{
		ASN1_t2114160833 * L_10 = (ASN1_t2114160833 *)il2cpp_codegen_object_new(ASN1_t2114160833_il2cpp_TypeInfo_var);
		ASN1__ctor_m4216617981(L_10, (uint8_t)2, /*hidden argument*/NULL);
		V_2 = L_10;
		int32_t L_11 = V_1;
		if (!L_11)
		{
			goto IL_0030;
		}
	}
	{
		int32_t L_12 = V_1;
		if ((((int32_t)L_12) == ((int32_t)4)))
		{
			goto IL_0039;
		}
	}
	{
		goto IL_0047;
	}

IL_0030:
	{
		ASN1_t2114160833 * L_13 = V_2;
		ByteU5BU5D_t4116647657* L_14 = V_0;
		ASN1_set_Value_m647861841(L_13, L_14, /*hidden argument*/NULL);
		goto IL_0063;
	}

IL_0039:
	{
		ASN1_t2114160833 * L_15 = V_2;
		ByteU5BU5D_t4116647657* L_16 = (ByteU5BU5D_t4116647657*)SZArrayNew(ByteU5BU5D_t4116647657_il2cpp_TypeInfo_var, (uint32_t)1);
		ASN1_set_Value_m647861841(L_15, L_16, /*hidden argument*/NULL);
		goto IL_0063;
	}

IL_0047:
	{
		int32_t L_17 = V_1;
		ByteU5BU5D_t4116647657* L_18 = (ByteU5BU5D_t4116647657*)SZArrayNew(ByteU5BU5D_t4116647657_il2cpp_TypeInfo_var, (uint32_t)((int32_t)il2cpp_codegen_subtract((int32_t)4, (int32_t)L_17)));
		V_3 = L_18;
		ByteU5BU5D_t4116647657* L_19 = V_0;
		int32_t L_20 = V_1;
		ByteU5BU5D_t4116647657* L_21 = V_3;
		ByteU5BU5D_t4116647657* L_22 = V_3;
		Buffer_BlockCopy_m2884209081(NULL /*static, unused*/, (RuntimeArray *)(RuntimeArray *)L_19, L_20, (RuntimeArray *)(RuntimeArray *)L_21, 0, (((int32_t)((int32_t)(((RuntimeArray *)L_22)->max_length)))), /*hidden argument*/NULL);
		ASN1_t2114160833 * L_23 = V_2;
		ByteU5BU5D_t4116647657* L_24 = V_3;
		ASN1_set_Value_m647861841(L_23, L_24, /*hidden argument*/NULL);
	}

IL_0063:
	{
		ASN1_t2114160833 * L_25 = V_2;
		return L_25;
	}
}
// System.Int32 Mono.Security.ASN1Convert::ToInt32(Mono.Security.ASN1)
extern "C" IL2CPP_METHOD_ATTR int32_t ASN1Convert_ToInt32_m2228176117 (RuntimeObject * __this /* static, unused */, ASN1_t2114160833 * ___asn10, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (ASN1Convert_ToInt32_m2228176117_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	int32_t V_1 = 0;
	{
		ASN1_t2114160833 * L_0 = ___asn10;
		if (L_0)
		{
			goto IL_000e;
		}
	}
	{
		ArgumentNullException_t1615371798 * L_1 = (ArgumentNullException_t1615371798 *)il2cpp_codegen_object_new(ArgumentNullException_t1615371798_il2cpp_TypeInfo_var);
		ArgumentNullException__ctor_m1170824041(L_1, _stringLiteral2971046163, /*hidden argument*/NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_1, NULL, ASN1Convert_ToInt32_m2228176117_RuntimeMethod_var);
	}

IL_000e:
	{
		ASN1_t2114160833 * L_2 = ___asn10;
		uint8_t L_3 = ASN1_get_Tag_m1863840805(L_2, /*hidden argument*/NULL);
		if ((((int32_t)L_3) == ((int32_t)2)))
		{
			goto IL_0022;
		}
	}
	{
		FormatException_t154580423 * L_4 = (FormatException_t154580423 *)il2cpp_codegen_object_new(FormatException_t154580423_il2cpp_TypeInfo_var);
		FormatException__ctor_m4049685996(L_4, _stringLiteral1968993200, /*hidden argument*/NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_4, NULL, ASN1Convert_ToInt32_m2228176117_RuntimeMethod_var);
	}

IL_0022:
	{
		V_0 = 0;
		V_1 = 0;
		goto IL_0039;
	}

IL_0028:
	{
		int32_t L_5 = V_0;
		ASN1_t2114160833 * L_6 = ___asn10;
		ByteU5BU5D_t4116647657* L_7 = ASN1_get_Value_m3619295991(L_6, /*hidden argument*/NULL);
		int32_t L_8 = V_1;
		int32_t L_9 = L_8;
		uint8_t L_10 = (L_7)->GetAtUnchecked(static_cast<il2cpp_array_size_t>(L_9));
		V_0 = ((int32_t)il2cpp_codegen_add((int32_t)((int32_t)((int32_t)L_5<<(int32_t)8)), (int32_t)L_10));
		int32_t L_11 = V_1;
		V_1 = ((int32_t)il2cpp_codegen_add((int32_t)L_11, (int32_t)1));
	}

IL_0039:
	{
		int32_t L_12 = V_1;
		ASN1_t2114160833 * L_13 = ___asn10;
		ByteU5BU5D_t4116647657* L_14 = ASN1_get_Value_m3619295991(L_13, /*hidden argument*/NULL);
		if ((((int32_t)L_12) < ((int32_t)(((int32_t)((int32_t)(((RuntimeArray *)L_14)->max_length)))))))
		{
			goto IL_0028;
		}
	}
	{
		int32_t L_15 = V_0;
		return L_15;
	}
}
// System.String Mono.Security.ASN1Convert::ToOid(Mono.Security.ASN1)
extern "C" IL2CPP_METHOD_ATTR String_t* ASN1Convert_ToOid_m4290825381 (RuntimeObject * __this /* static, unused */, ASN1_t2114160833 * ___asn10, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (ASN1Convert_ToOid_m4290825381_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	ByteU5BU5D_t4116647657* V_0 = NULL;
	StringBuilder_t * V_1 = NULL;
	uint8_t V_2 = 0x0;
	uint8_t V_3 = 0x0;
	uint64_t V_4 = 0;
	{
		ASN1_t2114160833 * L_0 = ___asn10;
		if (L_0)
		{
			goto IL_000e;
		}
	}
	{
		ArgumentNullException_t1615371798 * L_1 = (ArgumentNullException_t1615371798 *)il2cpp_codegen_object_new(ArgumentNullException_t1615371798_il2cpp_TypeInfo_var);
		ArgumentNullException__ctor_m1170824041(L_1, _stringLiteral2971046163, /*hidden argument*/NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_1, NULL, ASN1Convert_ToOid_m4290825381_RuntimeMethod_var);
	}

IL_000e:
	{
		ASN1_t2114160833 * L_2 = ___asn10;
		ByteU5BU5D_t4116647657* L_3 = ASN1_get_Value_m3619295991(L_2, /*hidden argument*/NULL);
		V_0 = L_3;
		StringBuilder_t * L_4 = (StringBuilder_t *)il2cpp_codegen_object_new(StringBuilder_t_il2cpp_TypeInfo_var);
		StringBuilder__ctor_m3121283359(L_4, /*hidden argument*/NULL);
		V_1 = L_4;
		ByteU5BU5D_t4116647657* L_5 = V_0;
		int32_t L_6 = 0;
		uint8_t L_7 = (L_5)->GetAtUnchecked(static_cast<il2cpp_array_size_t>(L_6));
		V_2 = (uint8_t)(((int32_t)((uint8_t)((int32_t)((int32_t)L_7/(int32_t)((int32_t)40))))));
		ByteU5BU5D_t4116647657* L_8 = V_0;
		int32_t L_9 = 0;
		uint8_t L_10 = (L_8)->GetAtUnchecked(static_cast<il2cpp_array_size_t>(L_9));
		V_3 = (uint8_t)(((int32_t)((uint8_t)((int32_t)((int32_t)L_10%(int32_t)((int32_t)40))))));
		uint8_t L_11 = V_2;
		if ((((int32_t)L_11) <= ((int32_t)2)))
		{
			goto IL_003c;
		}
	}
	{
		uint8_t L_12 = V_3;
		uint8_t L_13 = V_2;
		V_3 = (uint8_t)(((int32_t)((uint8_t)((int32_t)il2cpp_codegen_add((int32_t)L_12, (int32_t)(((int32_t)((uint8_t)((int32_t)il2cpp_codegen_multiply((int32_t)((int32_t)il2cpp_codegen_subtract((int32_t)L_13, (int32_t)2)), (int32_t)((int32_t)40)))))))))));
		V_2 = (uint8_t)2;
	}

IL_003c:
	{
		StringBuilder_t * L_14 = V_1;
		IL2CPP_RUNTIME_CLASS_INIT(CultureInfo_t4157843068_il2cpp_TypeInfo_var);
		CultureInfo_t4157843068 * L_15 = CultureInfo_get_InvariantCulture_m3532445182(NULL /*static, unused*/, /*hidden argument*/NULL);
		String_t* L_16 = Byte_ToString_m2335342258((uint8_t*)(&V_2), L_15, /*hidden argument*/NULL);
		StringBuilder_Append_m1965104174(L_14, L_16, /*hidden argument*/NULL);
		StringBuilder_t * L_17 = V_1;
		StringBuilder_Append_m1965104174(L_17, _stringLiteral3452614530, /*hidden argument*/NULL);
		StringBuilder_t * L_18 = V_1;
		CultureInfo_t4157843068 * L_19 = CultureInfo_get_InvariantCulture_m3532445182(NULL /*static, unused*/, /*hidden argument*/NULL);
		String_t* L_20 = Byte_ToString_m2335342258((uint8_t*)(&V_3), L_19, /*hidden argument*/NULL);
		StringBuilder_Append_m1965104174(L_18, L_20, /*hidden argument*/NULL);
		V_4 = (((int64_t)((int64_t)0)));
		V_2 = (uint8_t)1;
		goto IL_00bd;
	}

IL_0076:
	{
		uint64_t L_21 = V_4;
		ByteU5BU5D_t4116647657* L_22 = V_0;
		uint8_t L_23 = V_2;
		uint8_t L_24 = L_23;
		uint8_t L_25 = (L_22)->GetAtUnchecked(static_cast<il2cpp_array_size_t>(L_24));
		V_4 = ((int64_t)((int64_t)((int64_t)((int64_t)L_21<<(int32_t)7))|(int64_t)(((int64_t)((uint64_t)(((uint32_t)((uint32_t)(((int32_t)((uint8_t)((int32_t)((int32_t)L_25&(int32_t)((int32_t)127))))))))))))));
		ByteU5BU5D_t4116647657* L_26 = V_0;
		uint8_t L_27 = V_2;
		uint8_t L_28 = L_27;
		uint8_t L_29 = (L_26)->GetAtUnchecked(static_cast<il2cpp_array_size_t>(L_28));
		if ((((int32_t)((int32_t)((int32_t)L_29&(int32_t)((int32_t)128)))) == ((int32_t)((int32_t)128))))
		{
			goto IL_00b8;
		}
	}
	{
		StringBuilder_t * L_30 = V_1;
		StringBuilder_Append_m1965104174(L_30, _stringLiteral3452614530, /*hidden argument*/NULL);
		StringBuilder_t * L_31 = V_1;
		IL2CPP_RUNTIME_CLASS_INIT(CultureInfo_t4157843068_il2cpp_TypeInfo_var);
		CultureInfo_t4157843068 * L_32 = CultureInfo_get_InvariantCulture_m3532445182(NULL /*static, unused*/, /*hidden argument*/NULL);
		String_t* L_33 = UInt64_ToString_m2623377370((uint64_t*)(&V_4), L_32, /*hidden argument*/NULL);
		StringBuilder_Append_m1965104174(L_31, L_33, /*hidden argument*/NULL);
		V_4 = (((int64_t)((int64_t)0)));
	}

IL_00b8:
	{
		uint8_t L_34 = V_2;
		V_2 = (uint8_t)(((int32_t)((uint8_t)((int32_t)il2cpp_codegen_add((int32_t)L_34, (int32_t)1)))));
	}

IL_00bd:
	{
		uint8_t L_35 = V_2;
		ByteU5BU5D_t4116647657* L_36 = V_0;
		if ((((int32_t)L_35) < ((int32_t)(((int32_t)((int32_t)(((RuntimeArray *)L_36)->max_length)))))))
		{
			goto IL_0076;
		}
	}
	{
		StringBuilder_t * L_37 = V_1;
		String_t* L_38 = VirtFuncInvoker0< String_t* >::Invoke(3 /* System.String System.Object::ToString() */, L_37);
		return L_38;
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
// System.Byte[] Mono.Security.BitConverterLE::GetUIntBytes(System.Byte*)
extern "C" IL2CPP_METHOD_ATTR ByteU5BU5D_t4116647657* BitConverterLE_GetUIntBytes_m795219058 (RuntimeObject * __this /* static, unused */, uint8_t* ___bytes0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (BitConverterLE_GetUIntBytes_m795219058_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		IL2CPP_RUNTIME_CLASS_INIT(BitConverter_t3118986983_il2cpp_TypeInfo_var);
		bool L_0 = ((BitConverter_t3118986983_StaticFields*)il2cpp_codegen_static_fields_for(BitConverter_t3118986983_il2cpp_TypeInfo_var))->get_IsLittleEndian_0();
		if (!L_0)
		{
			goto IL_0028;
		}
	}
	{
		ByteU5BU5D_t4116647657* L_1 = (ByteU5BU5D_t4116647657*)SZArrayNew(ByteU5BU5D_t4116647657_il2cpp_TypeInfo_var, (uint32_t)4);
		ByteU5BU5D_t4116647657* L_2 = L_1;
		uint8_t* L_3 = ___bytes0;
		int32_t L_4 = *((uint8_t*)L_3);
		(L_2)->SetAtUnchecked(static_cast<il2cpp_array_size_t>(0), (uint8_t)L_4);
		ByteU5BU5D_t4116647657* L_5 = L_2;
		uint8_t* L_6 = ___bytes0;
		int32_t L_7 = *((uint8_t*)((uint8_t*)il2cpp_codegen_add((intptr_t)L_6, (int32_t)1)));
		(L_5)->SetAtUnchecked(static_cast<il2cpp_array_size_t>(1), (uint8_t)L_7);
		ByteU5BU5D_t4116647657* L_8 = L_5;
		uint8_t* L_9 = ___bytes0;
		int32_t L_10 = *((uint8_t*)((uint8_t*)il2cpp_codegen_add((intptr_t)L_9, (int32_t)2)));
		(L_8)->SetAtUnchecked(static_cast<il2cpp_array_size_t>(2), (uint8_t)L_10);
		ByteU5BU5D_t4116647657* L_11 = L_8;
		uint8_t* L_12 = ___bytes0;
		int32_t L_13 = *((uint8_t*)((uint8_t*)il2cpp_codegen_add((intptr_t)L_12, (int32_t)3)));
		(L_11)->SetAtUnchecked(static_cast<il2cpp_array_size_t>(3), (uint8_t)L_13);
		return L_11;
	}

IL_0028:
	{
		ByteU5BU5D_t4116647657* L_14 = (ByteU5BU5D_t4116647657*)SZArrayNew(ByteU5BU5D_t4116647657_il2cpp_TypeInfo_var, (uint32_t)4);
		ByteU5BU5D_t4116647657* L_15 = L_14;
		uint8_t* L_16 = ___bytes0;
		int32_t L_17 = *((uint8_t*)((uint8_t*)il2cpp_codegen_add((intptr_t)L_16, (int32_t)3)));
		(L_15)->SetAtUnchecked(static_cast<il2cpp_array_size_t>(0), (uint8_t)L_17);
		ByteU5BU5D_t4116647657* L_18 = L_15;
		uint8_t* L_19 = ___bytes0;
		int32_t L_20 = *((uint8_t*)((uint8_t*)il2cpp_codegen_add((intptr_t)L_19, (int32_t)2)));
		(L_18)->SetAtUnchecked(static_cast<il2cpp_array_size_t>(1), (uint8_t)L_20);
		ByteU5BU5D_t4116647657* L_21 = L_18;
		uint8_t* L_22 = ___bytes0;
		int32_t L_23 = *((uint8_t*)((uint8_t*)il2cpp_codegen_add((intptr_t)L_22, (int32_t)1)));
		(L_21)->SetAtUnchecked(static_cast<il2cpp_array_size_t>(2), (uint8_t)L_23);
		ByteU5BU5D_t4116647657* L_24 = L_21;
		uint8_t* L_25 = ___bytes0;
		int32_t L_26 = *((uint8_t*)L_25);
		(L_24)->SetAtUnchecked(static_cast<il2cpp_array_size_t>(3), (uint8_t)L_26);
		return L_24;
	}
}
// System.Byte[] Mono.Security.BitConverterLE::GetBytes(System.Int32)
extern "C" IL2CPP_METHOD_ATTR ByteU5BU5D_t4116647657* BitConverterLE_GetBytes_m3268825786 (RuntimeObject * __this /* static, unused */, int32_t ___value0, const RuntimeMethod* method)
{
	{
		ByteU5BU5D_t4116647657* L_0 = BitConverterLE_GetUIntBytes_m795219058(NULL /*static, unused*/, (uint8_t*)(uint8_t*)(((uintptr_t)(&___value0))), /*hidden argument*/NULL);
		return L_0;
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
// System.String Mono.Security.Cryptography.CryptoConvert::ToHex(System.Byte[])
extern "C" IL2CPP_METHOD_ATTR String_t* CryptoConvert_ToHex_m2210632265 (RuntimeObject * __this /* static, unused */, ByteU5BU5D_t4116647657* ___input0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (CryptoConvert_ToHex_m2210632265_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	StringBuilder_t * V_0 = NULL;
	ByteU5BU5D_t4116647657* V_1 = NULL;
	int32_t V_2 = 0;
	uint8_t V_3 = 0x0;
	{
		ByteU5BU5D_t4116647657* L_0 = ___input0;
		if (L_0)
		{
			goto IL_0005;
		}
	}
	{
		return (String_t*)NULL;
	}

IL_0005:
	{
		ByteU5BU5D_t4116647657* L_1 = ___input0;
		StringBuilder_t * L_2 = (StringBuilder_t *)il2cpp_codegen_object_new(StringBuilder_t_il2cpp_TypeInfo_var);
		StringBuilder__ctor_m2367297767(L_2, ((int32_t)il2cpp_codegen_multiply((int32_t)(((int32_t)((int32_t)(((RuntimeArray *)L_1)->max_length)))), (int32_t)2)), /*hidden argument*/NULL);
		V_0 = L_2;
		ByteU5BU5D_t4116647657* L_3 = ___input0;
		V_1 = L_3;
		V_2 = 0;
		goto IL_0036;
	}

IL_0016:
	{
		ByteU5BU5D_t4116647657* L_4 = V_1;
		int32_t L_5 = V_2;
		int32_t L_6 = L_5;
		uint8_t L_7 = (L_4)->GetAtUnchecked(static_cast<il2cpp_array_size_t>(L_6));
		V_3 = L_7;
		StringBuilder_t * L_8 = V_0;
		IL2CPP_RUNTIME_CLASS_INIT(CultureInfo_t4157843068_il2cpp_TypeInfo_var);
		CultureInfo_t4157843068 * L_9 = CultureInfo_get_InvariantCulture_m3532445182(NULL /*static, unused*/, /*hidden argument*/NULL);
		String_t* L_10 = Byte_ToString_m4063101981((uint8_t*)(&V_3), _stringLiteral3451435000, L_9, /*hidden argument*/NULL);
		StringBuilder_Append_m1965104174(L_8, L_10, /*hidden argument*/NULL);
		int32_t L_11 = V_2;
		V_2 = ((int32_t)il2cpp_codegen_add((int32_t)L_11, (int32_t)1));
	}

IL_0036:
	{
		int32_t L_12 = V_2;
		ByteU5BU5D_t4116647657* L_13 = V_1;
		if ((((int32_t)L_12) < ((int32_t)(((int32_t)((int32_t)(((RuntimeArray *)L_13)->max_length)))))))
		{
			goto IL_0016;
		}
	}
	{
		StringBuilder_t * L_14 = V_0;
		String_t* L_15 = VirtFuncInvoker0< String_t* >::Invoke(3 /* System.String System.Object::ToString() */, L_14);
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
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Void Mono.Security.Interface.MonoTlsProvider::.ctor()
extern "C" IL2CPP_METHOD_ATTR void MonoTlsProvider__ctor_m36773514 (MonoTlsProvider_t3152003291 * __this, const RuntimeMethod* method)
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
// System.Security.Cryptography.X509Certificates.X509CertificateCollection Mono.Security.Interface.MonoTlsSettings::get_TrustAnchors()
extern "C" IL2CPP_METHOD_ATTR X509CertificateCollection_t3399372417 * MonoTlsSettings_get_TrustAnchors_m2586157192 (MonoTlsSettings_t3666008581 * __this, const RuntimeMethod* method)
{
	{
		X509CertificateCollection_t3399372417 * L_0 = __this->get_U3CTrustAnchorsU3Ek__BackingField_0();
		return L_0;
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
