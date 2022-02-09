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


// System.Char[]
struct CharU5BU5D_t3528271667;
// System.Collections.Generic.List`1<UnityEngine.Material>
struct List_1_t1812449865;
// System.String
struct String_t;
// System.Void
struct Void_t1185182177;
// UnityEngine.AnimationCurve
struct AnimationCurve_t3046754366;
// UnityEngine.Material
struct Material_t340375123;
// UnityEngine.Mesh[]
struct MeshU5BU5D_t3972987605;
// UnityEngine.RenderTexture
struct RenderTexture_t2108887433;
// UnityEngine.Shader
struct Shader_t4151988712;
// UnityEngine.Texture2D
struct Texture2D_t3840446185;
// UnityEngine.Transform
struct Transform_t3600365921;




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
#ifndef TRIANGLES_T2090031681_H
#define TRIANGLES_T2090031681_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityStandardAssets.ImageEffects.Triangles
struct  Triangles_t2090031681  : public RuntimeObject
{
public:

public:
};

struct Triangles_t2090031681_StaticFields
{
public:
	// UnityEngine.Mesh[] UnityStandardAssets.ImageEffects.Triangles::meshes
	MeshU5BU5D_t3972987605* ___meshes_0;
	// System.Int32 UnityStandardAssets.ImageEffects.Triangles::currentTris
	int32_t ___currentTris_1;

public:
	inline static int32_t get_offset_of_meshes_0() { return static_cast<int32_t>(offsetof(Triangles_t2090031681_StaticFields, ___meshes_0)); }
	inline MeshU5BU5D_t3972987605* get_meshes_0() const { return ___meshes_0; }
	inline MeshU5BU5D_t3972987605** get_address_of_meshes_0() { return &___meshes_0; }
	inline void set_meshes_0(MeshU5BU5D_t3972987605* value)
	{
		___meshes_0 = value;
		Il2CppCodeGenWriteBarrier((&___meshes_0), value);
	}

	inline static int32_t get_offset_of_currentTris_1() { return static_cast<int32_t>(offsetof(Triangles_t2090031681_StaticFields, ___currentTris_1)); }
	inline int32_t get_currentTris_1() const { return ___currentTris_1; }
	inline int32_t* get_address_of_currentTris_1() { return &___currentTris_1; }
	inline void set_currentTris_1(int32_t value)
	{
		___currentTris_1 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // TRIANGLES_T2090031681_H
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
#ifndef SSAOSAMPLES_T2619211009_H
#define SSAOSAMPLES_T2619211009_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityStandardAssets.ImageEffects.ScreenSpaceAmbientOcclusion/SSAOSamples
struct  SSAOSamples_t2619211009 
{
public:
	// System.Int32 UnityStandardAssets.ImageEffects.ScreenSpaceAmbientOcclusion/SSAOSamples::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(SSAOSamples_t2619211009, ___value___2)); }
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
#endif // SSAOSAMPLES_T2619211009_H
#ifndef SHAFTSSCREENBLENDMODE_T4165054462_H
#define SHAFTSSCREENBLENDMODE_T4165054462_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityStandardAssets.ImageEffects.SunShafts/ShaftsScreenBlendMode
struct  ShaftsScreenBlendMode_t4165054462 
{
public:
	// System.Int32 UnityStandardAssets.ImageEffects.SunShafts/ShaftsScreenBlendMode::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(ShaftsScreenBlendMode_t4165054462, ___value___2)); }
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
#endif // SHAFTSSCREENBLENDMODE_T4165054462_H
#ifndef SUNSHAFTSRESOLUTION_T3826757637_H
#define SUNSHAFTSRESOLUTION_T3826757637_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityStandardAssets.ImageEffects.SunShafts/SunShaftsResolution
struct  SunShaftsResolution_t3826757637 
{
public:
	// System.Int32 UnityStandardAssets.ImageEffects.SunShafts/SunShaftsResolution::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(SunShaftsResolution_t3826757637, ___value___2)); }
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
#endif // SUNSHAFTSRESOLUTION_T3826757637_H
#ifndef TILTSHIFTMODE_T1375727185_H
#define TILTSHIFTMODE_T1375727185_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityStandardAssets.ImageEffects.TiltShift/TiltShiftMode
struct  TiltShiftMode_t1375727185 
{
public:
	// System.Int32 UnityStandardAssets.ImageEffects.TiltShift/TiltShiftMode::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(TiltShiftMode_t1375727185, ___value___2)); }
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
#endif // TILTSHIFTMODE_T1375727185_H
#ifndef TILTSHIFTQUALITY_T4173331534_H
#define TILTSHIFTQUALITY_T4173331534_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityStandardAssets.ImageEffects.TiltShift/TiltShiftQuality
struct  TiltShiftQuality_t4173331534 
{
public:
	// System.Int32 UnityStandardAssets.ImageEffects.TiltShift/TiltShiftQuality::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(TiltShiftQuality_t4173331534, ___value___2)); }
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
#endif // TILTSHIFTQUALITY_T4173331534_H
#ifndef ADAPTIVETEXSIZE_T1062941056_H
#define ADAPTIVETEXSIZE_T1062941056_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityStandardAssets.ImageEffects.Tonemapping/AdaptiveTexSize
struct  AdaptiveTexSize_t1062941056 
{
public:
	// System.Int32 UnityStandardAssets.ImageEffects.Tonemapping/AdaptiveTexSize::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(AdaptiveTexSize_t1062941056, ___value___2)); }
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
#endif // ADAPTIVETEXSIZE_T1062941056_H
#ifndef TONEMAPPERTYPE_T52991894_H
#define TONEMAPPERTYPE_T52991894_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityStandardAssets.ImageEffects.Tonemapping/TonemapperType
struct  TonemapperType_t52991894 
{
public:
	// System.Int32 UnityStandardAssets.ImageEffects.Tonemapping/TonemapperType::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(TonemapperType_t52991894, ___value___2)); }
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
#endif // TONEMAPPERTYPE_T52991894_H
#ifndef ABERRATIONMODE_T218549536_H
#define ABERRATIONMODE_T218549536_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityStandardAssets.ImageEffects.VignetteAndChromaticAberration/AberrationMode
struct  AberrationMode_t218549536 
{
public:
	// System.Int32 UnityStandardAssets.ImageEffects.VignetteAndChromaticAberration/AberrationMode::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(AberrationMode_t218549536, ___value___2)); }
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
#endif // ABERRATIONMODE_T218549536_H
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
#ifndef IMAGEEFFECTBASE_T2026006575_H
#define IMAGEEFFECTBASE_T2026006575_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityStandardAssets.ImageEffects.ImageEffectBase
struct  ImageEffectBase_t2026006575  : public MonoBehaviour_t3962482529
{
public:
	// UnityEngine.Shader UnityStandardAssets.ImageEffects.ImageEffectBase::shader
	Shader_t4151988712 * ___shader_4;
	// UnityEngine.Material UnityStandardAssets.ImageEffects.ImageEffectBase::m_Material
	Material_t340375123 * ___m_Material_5;

public:
	inline static int32_t get_offset_of_shader_4() { return static_cast<int32_t>(offsetof(ImageEffectBase_t2026006575, ___shader_4)); }
	inline Shader_t4151988712 * get_shader_4() const { return ___shader_4; }
	inline Shader_t4151988712 ** get_address_of_shader_4() { return &___shader_4; }
	inline void set_shader_4(Shader_t4151988712 * value)
	{
		___shader_4 = value;
		Il2CppCodeGenWriteBarrier((&___shader_4), value);
	}

	inline static int32_t get_offset_of_m_Material_5() { return static_cast<int32_t>(offsetof(ImageEffectBase_t2026006575, ___m_Material_5)); }
	inline Material_t340375123 * get_m_Material_5() const { return ___m_Material_5; }
	inline Material_t340375123 ** get_address_of_m_Material_5() { return &___m_Material_5; }
	inline void set_m_Material_5(Material_t340375123 * value)
	{
		___m_Material_5 = value;
		Il2CppCodeGenWriteBarrier((&___m_Material_5), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // IMAGEEFFECTBASE_T2026006575_H
#ifndef POSTEFFECTSBASE_T2404315740_H
#define POSTEFFECTSBASE_T2404315740_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityStandardAssets.ImageEffects.PostEffectsBase
struct  PostEffectsBase_t2404315740  : public MonoBehaviour_t3962482529
{
public:
	// System.Boolean UnityStandardAssets.ImageEffects.PostEffectsBase::supportHDRTextures
	bool ___supportHDRTextures_4;
	// System.Boolean UnityStandardAssets.ImageEffects.PostEffectsBase::supportDX11
	bool ___supportDX11_5;
	// System.Boolean UnityStandardAssets.ImageEffects.PostEffectsBase::isSupported
	bool ___isSupported_6;
	// System.Collections.Generic.List`1<UnityEngine.Material> UnityStandardAssets.ImageEffects.PostEffectsBase::createdMaterials
	List_1_t1812449865 * ___createdMaterials_7;

public:
	inline static int32_t get_offset_of_supportHDRTextures_4() { return static_cast<int32_t>(offsetof(PostEffectsBase_t2404315740, ___supportHDRTextures_4)); }
	inline bool get_supportHDRTextures_4() const { return ___supportHDRTextures_4; }
	inline bool* get_address_of_supportHDRTextures_4() { return &___supportHDRTextures_4; }
	inline void set_supportHDRTextures_4(bool value)
	{
		___supportHDRTextures_4 = value;
	}

	inline static int32_t get_offset_of_supportDX11_5() { return static_cast<int32_t>(offsetof(PostEffectsBase_t2404315740, ___supportDX11_5)); }
	inline bool get_supportDX11_5() const { return ___supportDX11_5; }
	inline bool* get_address_of_supportDX11_5() { return &___supportDX11_5; }
	inline void set_supportDX11_5(bool value)
	{
		___supportDX11_5 = value;
	}

	inline static int32_t get_offset_of_isSupported_6() { return static_cast<int32_t>(offsetof(PostEffectsBase_t2404315740, ___isSupported_6)); }
	inline bool get_isSupported_6() const { return ___isSupported_6; }
	inline bool* get_address_of_isSupported_6() { return &___isSupported_6; }
	inline void set_isSupported_6(bool value)
	{
		___isSupported_6 = value;
	}

	inline static int32_t get_offset_of_createdMaterials_7() { return static_cast<int32_t>(offsetof(PostEffectsBase_t2404315740, ___createdMaterials_7)); }
	inline List_1_t1812449865 * get_createdMaterials_7() const { return ___createdMaterials_7; }
	inline List_1_t1812449865 ** get_address_of_createdMaterials_7() { return &___createdMaterials_7; }
	inline void set_createdMaterials_7(List_1_t1812449865 * value)
	{
		___createdMaterials_7 = value;
		Il2CppCodeGenWriteBarrier((&___createdMaterials_7), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // POSTEFFECTSBASE_T2404315740_H
#ifndef SCREENSPACEAMBIENTOCCLUSION_T1675618705_H
#define SCREENSPACEAMBIENTOCCLUSION_T1675618705_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityStandardAssets.ImageEffects.ScreenSpaceAmbientOcclusion
struct  ScreenSpaceAmbientOcclusion_t1675618705  : public MonoBehaviour_t3962482529
{
public:
	// System.Single UnityStandardAssets.ImageEffects.ScreenSpaceAmbientOcclusion::m_Radius
	float ___m_Radius_4;
	// UnityStandardAssets.ImageEffects.ScreenSpaceAmbientOcclusion/SSAOSamples UnityStandardAssets.ImageEffects.ScreenSpaceAmbientOcclusion::m_SampleCount
	int32_t ___m_SampleCount_5;
	// System.Single UnityStandardAssets.ImageEffects.ScreenSpaceAmbientOcclusion::m_OcclusionIntensity
	float ___m_OcclusionIntensity_6;
	// System.Int32 UnityStandardAssets.ImageEffects.ScreenSpaceAmbientOcclusion::m_Blur
	int32_t ___m_Blur_7;
	// System.Int32 UnityStandardAssets.ImageEffects.ScreenSpaceAmbientOcclusion::m_Downsampling
	int32_t ___m_Downsampling_8;
	// System.Single UnityStandardAssets.ImageEffects.ScreenSpaceAmbientOcclusion::m_OcclusionAttenuation
	float ___m_OcclusionAttenuation_9;
	// System.Single UnityStandardAssets.ImageEffects.ScreenSpaceAmbientOcclusion::m_MinZ
	float ___m_MinZ_10;
	// UnityEngine.Shader UnityStandardAssets.ImageEffects.ScreenSpaceAmbientOcclusion::m_SSAOShader
	Shader_t4151988712 * ___m_SSAOShader_11;
	// UnityEngine.Material UnityStandardAssets.ImageEffects.ScreenSpaceAmbientOcclusion::m_SSAOMaterial
	Material_t340375123 * ___m_SSAOMaterial_12;
	// UnityEngine.Texture2D UnityStandardAssets.ImageEffects.ScreenSpaceAmbientOcclusion::m_RandomTexture
	Texture2D_t3840446185 * ___m_RandomTexture_13;
	// System.Boolean UnityStandardAssets.ImageEffects.ScreenSpaceAmbientOcclusion::m_Supported
	bool ___m_Supported_14;

public:
	inline static int32_t get_offset_of_m_Radius_4() { return static_cast<int32_t>(offsetof(ScreenSpaceAmbientOcclusion_t1675618705, ___m_Radius_4)); }
	inline float get_m_Radius_4() const { return ___m_Radius_4; }
	inline float* get_address_of_m_Radius_4() { return &___m_Radius_4; }
	inline void set_m_Radius_4(float value)
	{
		___m_Radius_4 = value;
	}

	inline static int32_t get_offset_of_m_SampleCount_5() { return static_cast<int32_t>(offsetof(ScreenSpaceAmbientOcclusion_t1675618705, ___m_SampleCount_5)); }
	inline int32_t get_m_SampleCount_5() const { return ___m_SampleCount_5; }
	inline int32_t* get_address_of_m_SampleCount_5() { return &___m_SampleCount_5; }
	inline void set_m_SampleCount_5(int32_t value)
	{
		___m_SampleCount_5 = value;
	}

	inline static int32_t get_offset_of_m_OcclusionIntensity_6() { return static_cast<int32_t>(offsetof(ScreenSpaceAmbientOcclusion_t1675618705, ___m_OcclusionIntensity_6)); }
	inline float get_m_OcclusionIntensity_6() const { return ___m_OcclusionIntensity_6; }
	inline float* get_address_of_m_OcclusionIntensity_6() { return &___m_OcclusionIntensity_6; }
	inline void set_m_OcclusionIntensity_6(float value)
	{
		___m_OcclusionIntensity_6 = value;
	}

	inline static int32_t get_offset_of_m_Blur_7() { return static_cast<int32_t>(offsetof(ScreenSpaceAmbientOcclusion_t1675618705, ___m_Blur_7)); }
	inline int32_t get_m_Blur_7() const { return ___m_Blur_7; }
	inline int32_t* get_address_of_m_Blur_7() { return &___m_Blur_7; }
	inline void set_m_Blur_7(int32_t value)
	{
		___m_Blur_7 = value;
	}

	inline static int32_t get_offset_of_m_Downsampling_8() { return static_cast<int32_t>(offsetof(ScreenSpaceAmbientOcclusion_t1675618705, ___m_Downsampling_8)); }
	inline int32_t get_m_Downsampling_8() const { return ___m_Downsampling_8; }
	inline int32_t* get_address_of_m_Downsampling_8() { return &___m_Downsampling_8; }
	inline void set_m_Downsampling_8(int32_t value)
	{
		___m_Downsampling_8 = value;
	}

	inline static int32_t get_offset_of_m_OcclusionAttenuation_9() { return static_cast<int32_t>(offsetof(ScreenSpaceAmbientOcclusion_t1675618705, ___m_OcclusionAttenuation_9)); }
	inline float get_m_OcclusionAttenuation_9() const { return ___m_OcclusionAttenuation_9; }
	inline float* get_address_of_m_OcclusionAttenuation_9() { return &___m_OcclusionAttenuation_9; }
	inline void set_m_OcclusionAttenuation_9(float value)
	{
		___m_OcclusionAttenuation_9 = value;
	}

	inline static int32_t get_offset_of_m_MinZ_10() { return static_cast<int32_t>(offsetof(ScreenSpaceAmbientOcclusion_t1675618705, ___m_MinZ_10)); }
	inline float get_m_MinZ_10() const { return ___m_MinZ_10; }
	inline float* get_address_of_m_MinZ_10() { return &___m_MinZ_10; }
	inline void set_m_MinZ_10(float value)
	{
		___m_MinZ_10 = value;
	}

	inline static int32_t get_offset_of_m_SSAOShader_11() { return static_cast<int32_t>(offsetof(ScreenSpaceAmbientOcclusion_t1675618705, ___m_SSAOShader_11)); }
	inline Shader_t4151988712 * get_m_SSAOShader_11() const { return ___m_SSAOShader_11; }
	inline Shader_t4151988712 ** get_address_of_m_SSAOShader_11() { return &___m_SSAOShader_11; }
	inline void set_m_SSAOShader_11(Shader_t4151988712 * value)
	{
		___m_SSAOShader_11 = value;
		Il2CppCodeGenWriteBarrier((&___m_SSAOShader_11), value);
	}

	inline static int32_t get_offset_of_m_SSAOMaterial_12() { return static_cast<int32_t>(offsetof(ScreenSpaceAmbientOcclusion_t1675618705, ___m_SSAOMaterial_12)); }
	inline Material_t340375123 * get_m_SSAOMaterial_12() const { return ___m_SSAOMaterial_12; }
	inline Material_t340375123 ** get_address_of_m_SSAOMaterial_12() { return &___m_SSAOMaterial_12; }
	inline void set_m_SSAOMaterial_12(Material_t340375123 * value)
	{
		___m_SSAOMaterial_12 = value;
		Il2CppCodeGenWriteBarrier((&___m_SSAOMaterial_12), value);
	}

	inline static int32_t get_offset_of_m_RandomTexture_13() { return static_cast<int32_t>(offsetof(ScreenSpaceAmbientOcclusion_t1675618705, ___m_RandomTexture_13)); }
	inline Texture2D_t3840446185 * get_m_RandomTexture_13() const { return ___m_RandomTexture_13; }
	inline Texture2D_t3840446185 ** get_address_of_m_RandomTexture_13() { return &___m_RandomTexture_13; }
	inline void set_m_RandomTexture_13(Texture2D_t3840446185 * value)
	{
		___m_RandomTexture_13 = value;
		Il2CppCodeGenWriteBarrier((&___m_RandomTexture_13), value);
	}

	inline static int32_t get_offset_of_m_Supported_14() { return static_cast<int32_t>(offsetof(ScreenSpaceAmbientOcclusion_t1675618705, ___m_Supported_14)); }
	inline bool get_m_Supported_14() const { return ___m_Supported_14; }
	inline bool* get_address_of_m_Supported_14() { return &___m_Supported_14; }
	inline void set_m_Supported_14(bool value)
	{
		___m_Supported_14 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // SCREENSPACEAMBIENTOCCLUSION_T1675618705_H
#ifndef SEPIATONE_T4259761740_H
#define SEPIATONE_T4259761740_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityStandardAssets.ImageEffects.SepiaTone
struct  SepiaTone_t4259761740  : public ImageEffectBase_t2026006575
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // SEPIATONE_T4259761740_H
#ifndef SUNSHAFTS_T2328921421_H
#define SUNSHAFTS_T2328921421_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityStandardAssets.ImageEffects.SunShafts
struct  SunShafts_t2328921421  : public PostEffectsBase_t2404315740
{
public:
	// UnityStandardAssets.ImageEffects.SunShafts/SunShaftsResolution UnityStandardAssets.ImageEffects.SunShafts::resolution
	int32_t ___resolution_8;
	// UnityStandardAssets.ImageEffects.SunShafts/ShaftsScreenBlendMode UnityStandardAssets.ImageEffects.SunShafts::screenBlendMode
	int32_t ___screenBlendMode_9;
	// UnityEngine.Transform UnityStandardAssets.ImageEffects.SunShafts::sunTransform
	Transform_t3600365921 * ___sunTransform_10;
	// System.Int32 UnityStandardAssets.ImageEffects.SunShafts::radialBlurIterations
	int32_t ___radialBlurIterations_11;
	// UnityEngine.Color UnityStandardAssets.ImageEffects.SunShafts::sunColor
	Color_t2555686324  ___sunColor_12;
	// UnityEngine.Color UnityStandardAssets.ImageEffects.SunShafts::sunThreshold
	Color_t2555686324  ___sunThreshold_13;
	// System.Single UnityStandardAssets.ImageEffects.SunShafts::sunShaftBlurRadius
	float ___sunShaftBlurRadius_14;
	// System.Single UnityStandardAssets.ImageEffects.SunShafts::sunShaftIntensity
	float ___sunShaftIntensity_15;
	// System.Single UnityStandardAssets.ImageEffects.SunShafts::maxRadius
	float ___maxRadius_16;
	// System.Boolean UnityStandardAssets.ImageEffects.SunShafts::useDepthTexture
	bool ___useDepthTexture_17;
	// UnityEngine.Shader UnityStandardAssets.ImageEffects.SunShafts::sunShaftsShader
	Shader_t4151988712 * ___sunShaftsShader_18;
	// UnityEngine.Material UnityStandardAssets.ImageEffects.SunShafts::sunShaftsMaterial
	Material_t340375123 * ___sunShaftsMaterial_19;
	// UnityEngine.Shader UnityStandardAssets.ImageEffects.SunShafts::simpleClearShader
	Shader_t4151988712 * ___simpleClearShader_20;
	// UnityEngine.Material UnityStandardAssets.ImageEffects.SunShafts::simpleClearMaterial
	Material_t340375123 * ___simpleClearMaterial_21;

public:
	inline static int32_t get_offset_of_resolution_8() { return static_cast<int32_t>(offsetof(SunShafts_t2328921421, ___resolution_8)); }
	inline int32_t get_resolution_8() const { return ___resolution_8; }
	inline int32_t* get_address_of_resolution_8() { return &___resolution_8; }
	inline void set_resolution_8(int32_t value)
	{
		___resolution_8 = value;
	}

	inline static int32_t get_offset_of_screenBlendMode_9() { return static_cast<int32_t>(offsetof(SunShafts_t2328921421, ___screenBlendMode_9)); }
	inline int32_t get_screenBlendMode_9() const { return ___screenBlendMode_9; }
	inline int32_t* get_address_of_screenBlendMode_9() { return &___screenBlendMode_9; }
	inline void set_screenBlendMode_9(int32_t value)
	{
		___screenBlendMode_9 = value;
	}

	inline static int32_t get_offset_of_sunTransform_10() { return static_cast<int32_t>(offsetof(SunShafts_t2328921421, ___sunTransform_10)); }
	inline Transform_t3600365921 * get_sunTransform_10() const { return ___sunTransform_10; }
	inline Transform_t3600365921 ** get_address_of_sunTransform_10() { return &___sunTransform_10; }
	inline void set_sunTransform_10(Transform_t3600365921 * value)
	{
		___sunTransform_10 = value;
		Il2CppCodeGenWriteBarrier((&___sunTransform_10), value);
	}

	inline static int32_t get_offset_of_radialBlurIterations_11() { return static_cast<int32_t>(offsetof(SunShafts_t2328921421, ___radialBlurIterations_11)); }
	inline int32_t get_radialBlurIterations_11() const { return ___radialBlurIterations_11; }
	inline int32_t* get_address_of_radialBlurIterations_11() { return &___radialBlurIterations_11; }
	inline void set_radialBlurIterations_11(int32_t value)
	{
		___radialBlurIterations_11 = value;
	}

	inline static int32_t get_offset_of_sunColor_12() { return static_cast<int32_t>(offsetof(SunShafts_t2328921421, ___sunColor_12)); }
	inline Color_t2555686324  get_sunColor_12() const { return ___sunColor_12; }
	inline Color_t2555686324 * get_address_of_sunColor_12() { return &___sunColor_12; }
	inline void set_sunColor_12(Color_t2555686324  value)
	{
		___sunColor_12 = value;
	}

	inline static int32_t get_offset_of_sunThreshold_13() { return static_cast<int32_t>(offsetof(SunShafts_t2328921421, ___sunThreshold_13)); }
	inline Color_t2555686324  get_sunThreshold_13() const { return ___sunThreshold_13; }
	inline Color_t2555686324 * get_address_of_sunThreshold_13() { return &___sunThreshold_13; }
	inline void set_sunThreshold_13(Color_t2555686324  value)
	{
		___sunThreshold_13 = value;
	}

	inline static int32_t get_offset_of_sunShaftBlurRadius_14() { return static_cast<int32_t>(offsetof(SunShafts_t2328921421, ___sunShaftBlurRadius_14)); }
	inline float get_sunShaftBlurRadius_14() const { return ___sunShaftBlurRadius_14; }
	inline float* get_address_of_sunShaftBlurRadius_14() { return &___sunShaftBlurRadius_14; }
	inline void set_sunShaftBlurRadius_14(float value)
	{
		___sunShaftBlurRadius_14 = value;
	}

	inline static int32_t get_offset_of_sunShaftIntensity_15() { return static_cast<int32_t>(offsetof(SunShafts_t2328921421, ___sunShaftIntensity_15)); }
	inline float get_sunShaftIntensity_15() const { return ___sunShaftIntensity_15; }
	inline float* get_address_of_sunShaftIntensity_15() { return &___sunShaftIntensity_15; }
	inline void set_sunShaftIntensity_15(float value)
	{
		___sunShaftIntensity_15 = value;
	}

	inline static int32_t get_offset_of_maxRadius_16() { return static_cast<int32_t>(offsetof(SunShafts_t2328921421, ___maxRadius_16)); }
	inline float get_maxRadius_16() const { return ___maxRadius_16; }
	inline float* get_address_of_maxRadius_16() { return &___maxRadius_16; }
	inline void set_maxRadius_16(float value)
	{
		___maxRadius_16 = value;
	}

	inline static int32_t get_offset_of_useDepthTexture_17() { return static_cast<int32_t>(offsetof(SunShafts_t2328921421, ___useDepthTexture_17)); }
	inline bool get_useDepthTexture_17() const { return ___useDepthTexture_17; }
	inline bool* get_address_of_useDepthTexture_17() { return &___useDepthTexture_17; }
	inline void set_useDepthTexture_17(bool value)
	{
		___useDepthTexture_17 = value;
	}

	inline static int32_t get_offset_of_sunShaftsShader_18() { return static_cast<int32_t>(offsetof(SunShafts_t2328921421, ___sunShaftsShader_18)); }
	inline Shader_t4151988712 * get_sunShaftsShader_18() const { return ___sunShaftsShader_18; }
	inline Shader_t4151988712 ** get_address_of_sunShaftsShader_18() { return &___sunShaftsShader_18; }
	inline void set_sunShaftsShader_18(Shader_t4151988712 * value)
	{
		___sunShaftsShader_18 = value;
		Il2CppCodeGenWriteBarrier((&___sunShaftsShader_18), value);
	}

	inline static int32_t get_offset_of_sunShaftsMaterial_19() { return static_cast<int32_t>(offsetof(SunShafts_t2328921421, ___sunShaftsMaterial_19)); }
	inline Material_t340375123 * get_sunShaftsMaterial_19() const { return ___sunShaftsMaterial_19; }
	inline Material_t340375123 ** get_address_of_sunShaftsMaterial_19() { return &___sunShaftsMaterial_19; }
	inline void set_sunShaftsMaterial_19(Material_t340375123 * value)
	{
		___sunShaftsMaterial_19 = value;
		Il2CppCodeGenWriteBarrier((&___sunShaftsMaterial_19), value);
	}

	inline static int32_t get_offset_of_simpleClearShader_20() { return static_cast<int32_t>(offsetof(SunShafts_t2328921421, ___simpleClearShader_20)); }
	inline Shader_t4151988712 * get_simpleClearShader_20() const { return ___simpleClearShader_20; }
	inline Shader_t4151988712 ** get_address_of_simpleClearShader_20() { return &___simpleClearShader_20; }
	inline void set_simpleClearShader_20(Shader_t4151988712 * value)
	{
		___simpleClearShader_20 = value;
		Il2CppCodeGenWriteBarrier((&___simpleClearShader_20), value);
	}

	inline static int32_t get_offset_of_simpleClearMaterial_21() { return static_cast<int32_t>(offsetof(SunShafts_t2328921421, ___simpleClearMaterial_21)); }
	inline Material_t340375123 * get_simpleClearMaterial_21() const { return ___simpleClearMaterial_21; }
	inline Material_t340375123 ** get_address_of_simpleClearMaterial_21() { return &___simpleClearMaterial_21; }
	inline void set_simpleClearMaterial_21(Material_t340375123 * value)
	{
		___simpleClearMaterial_21 = value;
		Il2CppCodeGenWriteBarrier((&___simpleClearMaterial_21), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // SUNSHAFTS_T2328921421_H
#ifndef TILTSHIFT_T2891301701_H
#define TILTSHIFT_T2891301701_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityStandardAssets.ImageEffects.TiltShift
struct  TiltShift_t2891301701  : public PostEffectsBase_t2404315740
{
public:
	// UnityStandardAssets.ImageEffects.TiltShift/TiltShiftMode UnityStandardAssets.ImageEffects.TiltShift::mode
	int32_t ___mode_8;
	// UnityStandardAssets.ImageEffects.TiltShift/TiltShiftQuality UnityStandardAssets.ImageEffects.TiltShift::quality
	int32_t ___quality_9;
	// System.Single UnityStandardAssets.ImageEffects.TiltShift::blurArea
	float ___blurArea_10;
	// System.Single UnityStandardAssets.ImageEffects.TiltShift::maxBlurSize
	float ___maxBlurSize_11;
	// System.Int32 UnityStandardAssets.ImageEffects.TiltShift::downsample
	int32_t ___downsample_12;
	// UnityEngine.Shader UnityStandardAssets.ImageEffects.TiltShift::tiltShiftShader
	Shader_t4151988712 * ___tiltShiftShader_13;
	// UnityEngine.Material UnityStandardAssets.ImageEffects.TiltShift::tiltShiftMaterial
	Material_t340375123 * ___tiltShiftMaterial_14;

public:
	inline static int32_t get_offset_of_mode_8() { return static_cast<int32_t>(offsetof(TiltShift_t2891301701, ___mode_8)); }
	inline int32_t get_mode_8() const { return ___mode_8; }
	inline int32_t* get_address_of_mode_8() { return &___mode_8; }
	inline void set_mode_8(int32_t value)
	{
		___mode_8 = value;
	}

	inline static int32_t get_offset_of_quality_9() { return static_cast<int32_t>(offsetof(TiltShift_t2891301701, ___quality_9)); }
	inline int32_t get_quality_9() const { return ___quality_9; }
	inline int32_t* get_address_of_quality_9() { return &___quality_9; }
	inline void set_quality_9(int32_t value)
	{
		___quality_9 = value;
	}

	inline static int32_t get_offset_of_blurArea_10() { return static_cast<int32_t>(offsetof(TiltShift_t2891301701, ___blurArea_10)); }
	inline float get_blurArea_10() const { return ___blurArea_10; }
	inline float* get_address_of_blurArea_10() { return &___blurArea_10; }
	inline void set_blurArea_10(float value)
	{
		___blurArea_10 = value;
	}

	inline static int32_t get_offset_of_maxBlurSize_11() { return static_cast<int32_t>(offsetof(TiltShift_t2891301701, ___maxBlurSize_11)); }
	inline float get_maxBlurSize_11() const { return ___maxBlurSize_11; }
	inline float* get_address_of_maxBlurSize_11() { return &___maxBlurSize_11; }
	inline void set_maxBlurSize_11(float value)
	{
		___maxBlurSize_11 = value;
	}

	inline static int32_t get_offset_of_downsample_12() { return static_cast<int32_t>(offsetof(TiltShift_t2891301701, ___downsample_12)); }
	inline int32_t get_downsample_12() const { return ___downsample_12; }
	inline int32_t* get_address_of_downsample_12() { return &___downsample_12; }
	inline void set_downsample_12(int32_t value)
	{
		___downsample_12 = value;
	}

	inline static int32_t get_offset_of_tiltShiftShader_13() { return static_cast<int32_t>(offsetof(TiltShift_t2891301701, ___tiltShiftShader_13)); }
	inline Shader_t4151988712 * get_tiltShiftShader_13() const { return ___tiltShiftShader_13; }
	inline Shader_t4151988712 ** get_address_of_tiltShiftShader_13() { return &___tiltShiftShader_13; }
	inline void set_tiltShiftShader_13(Shader_t4151988712 * value)
	{
		___tiltShiftShader_13 = value;
		Il2CppCodeGenWriteBarrier((&___tiltShiftShader_13), value);
	}

	inline static int32_t get_offset_of_tiltShiftMaterial_14() { return static_cast<int32_t>(offsetof(TiltShift_t2891301701, ___tiltShiftMaterial_14)); }
	inline Material_t340375123 * get_tiltShiftMaterial_14() const { return ___tiltShiftMaterial_14; }
	inline Material_t340375123 ** get_address_of_tiltShiftMaterial_14() { return &___tiltShiftMaterial_14; }
	inline void set_tiltShiftMaterial_14(Material_t340375123 * value)
	{
		___tiltShiftMaterial_14 = value;
		Il2CppCodeGenWriteBarrier((&___tiltShiftMaterial_14), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // TILTSHIFT_T2891301701_H
#ifndef TONEMAPPING_T2837480251_H
#define TONEMAPPING_T2837480251_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityStandardAssets.ImageEffects.Tonemapping
struct  Tonemapping_t2837480251  : public PostEffectsBase_t2404315740
{
public:
	// UnityStandardAssets.ImageEffects.Tonemapping/TonemapperType UnityStandardAssets.ImageEffects.Tonemapping::type
	int32_t ___type_8;
	// UnityStandardAssets.ImageEffects.Tonemapping/AdaptiveTexSize UnityStandardAssets.ImageEffects.Tonemapping::adaptiveTextureSize
	int32_t ___adaptiveTextureSize_9;
	// UnityEngine.AnimationCurve UnityStandardAssets.ImageEffects.Tonemapping::remapCurve
	AnimationCurve_t3046754366 * ___remapCurve_10;
	// UnityEngine.Texture2D UnityStandardAssets.ImageEffects.Tonemapping::curveTex
	Texture2D_t3840446185 * ___curveTex_11;
	// System.Single UnityStandardAssets.ImageEffects.Tonemapping::exposureAdjustment
	float ___exposureAdjustment_12;
	// System.Single UnityStandardAssets.ImageEffects.Tonemapping::middleGrey
	float ___middleGrey_13;
	// System.Single UnityStandardAssets.ImageEffects.Tonemapping::white
	float ___white_14;
	// System.Single UnityStandardAssets.ImageEffects.Tonemapping::adaptionSpeed
	float ___adaptionSpeed_15;
	// UnityEngine.Shader UnityStandardAssets.ImageEffects.Tonemapping::tonemapper
	Shader_t4151988712 * ___tonemapper_16;
	// System.Boolean UnityStandardAssets.ImageEffects.Tonemapping::validRenderTextureFormat
	bool ___validRenderTextureFormat_17;
	// UnityEngine.Material UnityStandardAssets.ImageEffects.Tonemapping::tonemapMaterial
	Material_t340375123 * ___tonemapMaterial_18;
	// UnityEngine.RenderTexture UnityStandardAssets.ImageEffects.Tonemapping::rt
	RenderTexture_t2108887433 * ___rt_19;
	// UnityEngine.RenderTextureFormat UnityStandardAssets.ImageEffects.Tonemapping::rtFormat
	int32_t ___rtFormat_20;

public:
	inline static int32_t get_offset_of_type_8() { return static_cast<int32_t>(offsetof(Tonemapping_t2837480251, ___type_8)); }
	inline int32_t get_type_8() const { return ___type_8; }
	inline int32_t* get_address_of_type_8() { return &___type_8; }
	inline void set_type_8(int32_t value)
	{
		___type_8 = value;
	}

	inline static int32_t get_offset_of_adaptiveTextureSize_9() { return static_cast<int32_t>(offsetof(Tonemapping_t2837480251, ___adaptiveTextureSize_9)); }
	inline int32_t get_adaptiveTextureSize_9() const { return ___adaptiveTextureSize_9; }
	inline int32_t* get_address_of_adaptiveTextureSize_9() { return &___adaptiveTextureSize_9; }
	inline void set_adaptiveTextureSize_9(int32_t value)
	{
		___adaptiveTextureSize_9 = value;
	}

	inline static int32_t get_offset_of_remapCurve_10() { return static_cast<int32_t>(offsetof(Tonemapping_t2837480251, ___remapCurve_10)); }
	inline AnimationCurve_t3046754366 * get_remapCurve_10() const { return ___remapCurve_10; }
	inline AnimationCurve_t3046754366 ** get_address_of_remapCurve_10() { return &___remapCurve_10; }
	inline void set_remapCurve_10(AnimationCurve_t3046754366 * value)
	{
		___remapCurve_10 = value;
		Il2CppCodeGenWriteBarrier((&___remapCurve_10), value);
	}

	inline static int32_t get_offset_of_curveTex_11() { return static_cast<int32_t>(offsetof(Tonemapping_t2837480251, ___curveTex_11)); }
	inline Texture2D_t3840446185 * get_curveTex_11() const { return ___curveTex_11; }
	inline Texture2D_t3840446185 ** get_address_of_curveTex_11() { return &___curveTex_11; }
	inline void set_curveTex_11(Texture2D_t3840446185 * value)
	{
		___curveTex_11 = value;
		Il2CppCodeGenWriteBarrier((&___curveTex_11), value);
	}

	inline static int32_t get_offset_of_exposureAdjustment_12() { return static_cast<int32_t>(offsetof(Tonemapping_t2837480251, ___exposureAdjustment_12)); }
	inline float get_exposureAdjustment_12() const { return ___exposureAdjustment_12; }
	inline float* get_address_of_exposureAdjustment_12() { return &___exposureAdjustment_12; }
	inline void set_exposureAdjustment_12(float value)
	{
		___exposureAdjustment_12 = value;
	}

	inline static int32_t get_offset_of_middleGrey_13() { return static_cast<int32_t>(offsetof(Tonemapping_t2837480251, ___middleGrey_13)); }
	inline float get_middleGrey_13() const { return ___middleGrey_13; }
	inline float* get_address_of_middleGrey_13() { return &___middleGrey_13; }
	inline void set_middleGrey_13(float value)
	{
		___middleGrey_13 = value;
	}

	inline static int32_t get_offset_of_white_14() { return static_cast<int32_t>(offsetof(Tonemapping_t2837480251, ___white_14)); }
	inline float get_white_14() const { return ___white_14; }
	inline float* get_address_of_white_14() { return &___white_14; }
	inline void set_white_14(float value)
	{
		___white_14 = value;
	}

	inline static int32_t get_offset_of_adaptionSpeed_15() { return static_cast<int32_t>(offsetof(Tonemapping_t2837480251, ___adaptionSpeed_15)); }
	inline float get_adaptionSpeed_15() const { return ___adaptionSpeed_15; }
	inline float* get_address_of_adaptionSpeed_15() { return &___adaptionSpeed_15; }
	inline void set_adaptionSpeed_15(float value)
	{
		___adaptionSpeed_15 = value;
	}

	inline static int32_t get_offset_of_tonemapper_16() { return static_cast<int32_t>(offsetof(Tonemapping_t2837480251, ___tonemapper_16)); }
	inline Shader_t4151988712 * get_tonemapper_16() const { return ___tonemapper_16; }
	inline Shader_t4151988712 ** get_address_of_tonemapper_16() { return &___tonemapper_16; }
	inline void set_tonemapper_16(Shader_t4151988712 * value)
	{
		___tonemapper_16 = value;
		Il2CppCodeGenWriteBarrier((&___tonemapper_16), value);
	}

	inline static int32_t get_offset_of_validRenderTextureFormat_17() { return static_cast<int32_t>(offsetof(Tonemapping_t2837480251, ___validRenderTextureFormat_17)); }
	inline bool get_validRenderTextureFormat_17() const { return ___validRenderTextureFormat_17; }
	inline bool* get_address_of_validRenderTextureFormat_17() { return &___validRenderTextureFormat_17; }
	inline void set_validRenderTextureFormat_17(bool value)
	{
		___validRenderTextureFormat_17 = value;
	}

	inline static int32_t get_offset_of_tonemapMaterial_18() { return static_cast<int32_t>(offsetof(Tonemapping_t2837480251, ___tonemapMaterial_18)); }
	inline Material_t340375123 * get_tonemapMaterial_18() const { return ___tonemapMaterial_18; }
	inline Material_t340375123 ** get_address_of_tonemapMaterial_18() { return &___tonemapMaterial_18; }
	inline void set_tonemapMaterial_18(Material_t340375123 * value)
	{
		___tonemapMaterial_18 = value;
		Il2CppCodeGenWriteBarrier((&___tonemapMaterial_18), value);
	}

	inline static int32_t get_offset_of_rt_19() { return static_cast<int32_t>(offsetof(Tonemapping_t2837480251, ___rt_19)); }
	inline RenderTexture_t2108887433 * get_rt_19() const { return ___rt_19; }
	inline RenderTexture_t2108887433 ** get_address_of_rt_19() { return &___rt_19; }
	inline void set_rt_19(RenderTexture_t2108887433 * value)
	{
		___rt_19 = value;
		Il2CppCodeGenWriteBarrier((&___rt_19), value);
	}

	inline static int32_t get_offset_of_rtFormat_20() { return static_cast<int32_t>(offsetof(Tonemapping_t2837480251, ___rtFormat_20)); }
	inline int32_t get_rtFormat_20() const { return ___rtFormat_20; }
	inline int32_t* get_address_of_rtFormat_20() { return &___rtFormat_20; }
	inline void set_rtFormat_20(int32_t value)
	{
		___rtFormat_20 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // TONEMAPPING_T2837480251_H
#ifndef TWIRL_T2760508880_H
#define TWIRL_T2760508880_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityStandardAssets.ImageEffects.Twirl
struct  Twirl_t2760508880  : public ImageEffectBase_t2026006575
{
public:
	// UnityEngine.Vector2 UnityStandardAssets.ImageEffects.Twirl::radius
	Vector2_t2156229523  ___radius_6;
	// System.Single UnityStandardAssets.ImageEffects.Twirl::angle
	float ___angle_7;
	// UnityEngine.Vector2 UnityStandardAssets.ImageEffects.Twirl::center
	Vector2_t2156229523  ___center_8;

public:
	inline static int32_t get_offset_of_radius_6() { return static_cast<int32_t>(offsetof(Twirl_t2760508880, ___radius_6)); }
	inline Vector2_t2156229523  get_radius_6() const { return ___radius_6; }
	inline Vector2_t2156229523 * get_address_of_radius_6() { return &___radius_6; }
	inline void set_radius_6(Vector2_t2156229523  value)
	{
		___radius_6 = value;
	}

	inline static int32_t get_offset_of_angle_7() { return static_cast<int32_t>(offsetof(Twirl_t2760508880, ___angle_7)); }
	inline float get_angle_7() const { return ___angle_7; }
	inline float* get_address_of_angle_7() { return &___angle_7; }
	inline void set_angle_7(float value)
	{
		___angle_7 = value;
	}

	inline static int32_t get_offset_of_center_8() { return static_cast<int32_t>(offsetof(Twirl_t2760508880, ___center_8)); }
	inline Vector2_t2156229523  get_center_8() const { return ___center_8; }
	inline Vector2_t2156229523 * get_address_of_center_8() { return &___center_8; }
	inline void set_center_8(Vector2_t2156229523  value)
	{
		___center_8 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // TWIRL_T2760508880_H
#ifndef VIGNETTEANDCHROMATICABERRATION_T3308099924_H
#define VIGNETTEANDCHROMATICABERRATION_T3308099924_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityStandardAssets.ImageEffects.VignetteAndChromaticAberration
struct  VignetteAndChromaticAberration_t3308099924  : public PostEffectsBase_t2404315740
{
public:
	// UnityStandardAssets.ImageEffects.VignetteAndChromaticAberration/AberrationMode UnityStandardAssets.ImageEffects.VignetteAndChromaticAberration::mode
	int32_t ___mode_8;
	// System.Single UnityStandardAssets.ImageEffects.VignetteAndChromaticAberration::intensity
	float ___intensity_9;
	// System.Single UnityStandardAssets.ImageEffects.VignetteAndChromaticAberration::chromaticAberration
	float ___chromaticAberration_10;
	// System.Single UnityStandardAssets.ImageEffects.VignetteAndChromaticAberration::axialAberration
	float ___axialAberration_11;
	// System.Single UnityStandardAssets.ImageEffects.VignetteAndChromaticAberration::blur
	float ___blur_12;
	// System.Single UnityStandardAssets.ImageEffects.VignetteAndChromaticAberration::blurSpread
	float ___blurSpread_13;
	// System.Single UnityStandardAssets.ImageEffects.VignetteAndChromaticAberration::luminanceDependency
	float ___luminanceDependency_14;
	// System.Single UnityStandardAssets.ImageEffects.VignetteAndChromaticAberration::blurDistance
	float ___blurDistance_15;
	// UnityEngine.Shader UnityStandardAssets.ImageEffects.VignetteAndChromaticAberration::vignetteShader
	Shader_t4151988712 * ___vignetteShader_16;
	// UnityEngine.Shader UnityStandardAssets.ImageEffects.VignetteAndChromaticAberration::separableBlurShader
	Shader_t4151988712 * ___separableBlurShader_17;
	// UnityEngine.Shader UnityStandardAssets.ImageEffects.VignetteAndChromaticAberration::chromAberrationShader
	Shader_t4151988712 * ___chromAberrationShader_18;
	// UnityEngine.Material UnityStandardAssets.ImageEffects.VignetteAndChromaticAberration::m_VignetteMaterial
	Material_t340375123 * ___m_VignetteMaterial_19;
	// UnityEngine.Material UnityStandardAssets.ImageEffects.VignetteAndChromaticAberration::m_SeparableBlurMaterial
	Material_t340375123 * ___m_SeparableBlurMaterial_20;
	// UnityEngine.Material UnityStandardAssets.ImageEffects.VignetteAndChromaticAberration::m_ChromAberrationMaterial
	Material_t340375123 * ___m_ChromAberrationMaterial_21;

public:
	inline static int32_t get_offset_of_mode_8() { return static_cast<int32_t>(offsetof(VignetteAndChromaticAberration_t3308099924, ___mode_8)); }
	inline int32_t get_mode_8() const { return ___mode_8; }
	inline int32_t* get_address_of_mode_8() { return &___mode_8; }
	inline void set_mode_8(int32_t value)
	{
		___mode_8 = value;
	}

	inline static int32_t get_offset_of_intensity_9() { return static_cast<int32_t>(offsetof(VignetteAndChromaticAberration_t3308099924, ___intensity_9)); }
	inline float get_intensity_9() const { return ___intensity_9; }
	inline float* get_address_of_intensity_9() { return &___intensity_9; }
	inline void set_intensity_9(float value)
	{
		___intensity_9 = value;
	}

	inline static int32_t get_offset_of_chromaticAberration_10() { return static_cast<int32_t>(offsetof(VignetteAndChromaticAberration_t3308099924, ___chromaticAberration_10)); }
	inline float get_chromaticAberration_10() const { return ___chromaticAberration_10; }
	inline float* get_address_of_chromaticAberration_10() { return &___chromaticAberration_10; }
	inline void set_chromaticAberration_10(float value)
	{
		___chromaticAberration_10 = value;
	}

	inline static int32_t get_offset_of_axialAberration_11() { return static_cast<int32_t>(offsetof(VignetteAndChromaticAberration_t3308099924, ___axialAberration_11)); }
	inline float get_axialAberration_11() const { return ___axialAberration_11; }
	inline float* get_address_of_axialAberration_11() { return &___axialAberration_11; }
	inline void set_axialAberration_11(float value)
	{
		___axialAberration_11 = value;
	}

	inline static int32_t get_offset_of_blur_12() { return static_cast<int32_t>(offsetof(VignetteAndChromaticAberration_t3308099924, ___blur_12)); }
	inline float get_blur_12() const { return ___blur_12; }
	inline float* get_address_of_blur_12() { return &___blur_12; }
	inline void set_blur_12(float value)
	{
		___blur_12 = value;
	}

	inline static int32_t get_offset_of_blurSpread_13() { return static_cast<int32_t>(offsetof(VignetteAndChromaticAberration_t3308099924, ___blurSpread_13)); }
	inline float get_blurSpread_13() const { return ___blurSpread_13; }
	inline float* get_address_of_blurSpread_13() { return &___blurSpread_13; }
	inline void set_blurSpread_13(float value)
	{
		___blurSpread_13 = value;
	}

	inline static int32_t get_offset_of_luminanceDependency_14() { return static_cast<int32_t>(offsetof(VignetteAndChromaticAberration_t3308099924, ___luminanceDependency_14)); }
	inline float get_luminanceDependency_14() const { return ___luminanceDependency_14; }
	inline float* get_address_of_luminanceDependency_14() { return &___luminanceDependency_14; }
	inline void set_luminanceDependency_14(float value)
	{
		___luminanceDependency_14 = value;
	}

	inline static int32_t get_offset_of_blurDistance_15() { return static_cast<int32_t>(offsetof(VignetteAndChromaticAberration_t3308099924, ___blurDistance_15)); }
	inline float get_blurDistance_15() const { return ___blurDistance_15; }
	inline float* get_address_of_blurDistance_15() { return &___blurDistance_15; }
	inline void set_blurDistance_15(float value)
	{
		___blurDistance_15 = value;
	}

	inline static int32_t get_offset_of_vignetteShader_16() { return static_cast<int32_t>(offsetof(VignetteAndChromaticAberration_t3308099924, ___vignetteShader_16)); }
	inline Shader_t4151988712 * get_vignetteShader_16() const { return ___vignetteShader_16; }
	inline Shader_t4151988712 ** get_address_of_vignetteShader_16() { return &___vignetteShader_16; }
	inline void set_vignetteShader_16(Shader_t4151988712 * value)
	{
		___vignetteShader_16 = value;
		Il2CppCodeGenWriteBarrier((&___vignetteShader_16), value);
	}

	inline static int32_t get_offset_of_separableBlurShader_17() { return static_cast<int32_t>(offsetof(VignetteAndChromaticAberration_t3308099924, ___separableBlurShader_17)); }
	inline Shader_t4151988712 * get_separableBlurShader_17() const { return ___separableBlurShader_17; }
	inline Shader_t4151988712 ** get_address_of_separableBlurShader_17() { return &___separableBlurShader_17; }
	inline void set_separableBlurShader_17(Shader_t4151988712 * value)
	{
		___separableBlurShader_17 = value;
		Il2CppCodeGenWriteBarrier((&___separableBlurShader_17), value);
	}

	inline static int32_t get_offset_of_chromAberrationShader_18() { return static_cast<int32_t>(offsetof(VignetteAndChromaticAberration_t3308099924, ___chromAberrationShader_18)); }
	inline Shader_t4151988712 * get_chromAberrationShader_18() const { return ___chromAberrationShader_18; }
	inline Shader_t4151988712 ** get_address_of_chromAberrationShader_18() { return &___chromAberrationShader_18; }
	inline void set_chromAberrationShader_18(Shader_t4151988712 * value)
	{
		___chromAberrationShader_18 = value;
		Il2CppCodeGenWriteBarrier((&___chromAberrationShader_18), value);
	}

	inline static int32_t get_offset_of_m_VignetteMaterial_19() { return static_cast<int32_t>(offsetof(VignetteAndChromaticAberration_t3308099924, ___m_VignetteMaterial_19)); }
	inline Material_t340375123 * get_m_VignetteMaterial_19() const { return ___m_VignetteMaterial_19; }
	inline Material_t340375123 ** get_address_of_m_VignetteMaterial_19() { return &___m_VignetteMaterial_19; }
	inline void set_m_VignetteMaterial_19(Material_t340375123 * value)
	{
		___m_VignetteMaterial_19 = value;
		Il2CppCodeGenWriteBarrier((&___m_VignetteMaterial_19), value);
	}

	inline static int32_t get_offset_of_m_SeparableBlurMaterial_20() { return static_cast<int32_t>(offsetof(VignetteAndChromaticAberration_t3308099924, ___m_SeparableBlurMaterial_20)); }
	inline Material_t340375123 * get_m_SeparableBlurMaterial_20() const { return ___m_SeparableBlurMaterial_20; }
	inline Material_t340375123 ** get_address_of_m_SeparableBlurMaterial_20() { return &___m_SeparableBlurMaterial_20; }
	inline void set_m_SeparableBlurMaterial_20(Material_t340375123 * value)
	{
		___m_SeparableBlurMaterial_20 = value;
		Il2CppCodeGenWriteBarrier((&___m_SeparableBlurMaterial_20), value);
	}

	inline static int32_t get_offset_of_m_ChromAberrationMaterial_21() { return static_cast<int32_t>(offsetof(VignetteAndChromaticAberration_t3308099924, ___m_ChromAberrationMaterial_21)); }
	inline Material_t340375123 * get_m_ChromAberrationMaterial_21() const { return ___m_ChromAberrationMaterial_21; }
	inline Material_t340375123 ** get_address_of_m_ChromAberrationMaterial_21() { return &___m_ChromAberrationMaterial_21; }
	inline void set_m_ChromAberrationMaterial_21(Material_t340375123 * value)
	{
		___m_ChromAberrationMaterial_21 = value;
		Il2CppCodeGenWriteBarrier((&___m_ChromAberrationMaterial_21), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // VIGNETTEANDCHROMATICABERRATION_T3308099924_H
#ifndef VORTEX_T3420399868_H
#define VORTEX_T3420399868_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityStandardAssets.ImageEffects.Vortex
struct  Vortex_t3420399868  : public ImageEffectBase_t2026006575
{
public:
	// UnityEngine.Vector2 UnityStandardAssets.ImageEffects.Vortex::radius
	Vector2_t2156229523  ___radius_6;
	// System.Single UnityStandardAssets.ImageEffects.Vortex::angle
	float ___angle_7;
	// UnityEngine.Vector2 UnityStandardAssets.ImageEffects.Vortex::center
	Vector2_t2156229523  ___center_8;

public:
	inline static int32_t get_offset_of_radius_6() { return static_cast<int32_t>(offsetof(Vortex_t3420399868, ___radius_6)); }
	inline Vector2_t2156229523  get_radius_6() const { return ___radius_6; }
	inline Vector2_t2156229523 * get_address_of_radius_6() { return &___radius_6; }
	inline void set_radius_6(Vector2_t2156229523  value)
	{
		___radius_6 = value;
	}

	inline static int32_t get_offset_of_angle_7() { return static_cast<int32_t>(offsetof(Vortex_t3420399868, ___angle_7)); }
	inline float get_angle_7() const { return ___angle_7; }
	inline float* get_address_of_angle_7() { return &___angle_7; }
	inline void set_angle_7(float value)
	{
		___angle_7 = value;
	}

	inline static int32_t get_offset_of_center_8() { return static_cast<int32_t>(offsetof(Vortex_t3420399868, ___center_8)); }
	inline Vector2_t2156229523  get_center_8() const { return ___center_8; }
	inline Vector2_t2156229523 * get_address_of_center_8() { return &___center_8; }
	inline void set_center_8(Vector2_t2156229523  value)
	{
		___center_8 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // VORTEX_T3420399868_H





#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize3700 = { sizeof (ScreenSpaceAmbientOcclusion_t1675618705), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable3700[11] = 
{
	ScreenSpaceAmbientOcclusion_t1675618705::get_offset_of_m_Radius_4(),
	ScreenSpaceAmbientOcclusion_t1675618705::get_offset_of_m_SampleCount_5(),
	ScreenSpaceAmbientOcclusion_t1675618705::get_offset_of_m_OcclusionIntensity_6(),
	ScreenSpaceAmbientOcclusion_t1675618705::get_offset_of_m_Blur_7(),
	ScreenSpaceAmbientOcclusion_t1675618705::get_offset_of_m_Downsampling_8(),
	ScreenSpaceAmbientOcclusion_t1675618705::get_offset_of_m_OcclusionAttenuation_9(),
	ScreenSpaceAmbientOcclusion_t1675618705::get_offset_of_m_MinZ_10(),
	ScreenSpaceAmbientOcclusion_t1675618705::get_offset_of_m_SSAOShader_11(),
	ScreenSpaceAmbientOcclusion_t1675618705::get_offset_of_m_SSAOMaterial_12(),
	ScreenSpaceAmbientOcclusion_t1675618705::get_offset_of_m_RandomTexture_13(),
	ScreenSpaceAmbientOcclusion_t1675618705::get_offset_of_m_Supported_14(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize3701 = { sizeof (SSAOSamples_t2619211009)+ sizeof (RuntimeObject), sizeof(int32_t), 0, 0 };
extern const int32_t g_FieldOffsetTable3701[4] = 
{
	SSAOSamples_t2619211009::get_offset_of_value___2() + static_cast<int32_t>(sizeof(RuntimeObject)),
	0,
	0,
	0,
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize3702 = { sizeof (SepiaTone_t4259761740), -1, 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize3703 = { sizeof (SunShafts_t2328921421), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable3703[14] = 
{
	SunShafts_t2328921421::get_offset_of_resolution_8(),
	SunShafts_t2328921421::get_offset_of_screenBlendMode_9(),
	SunShafts_t2328921421::get_offset_of_sunTransform_10(),
	SunShafts_t2328921421::get_offset_of_radialBlurIterations_11(),
	SunShafts_t2328921421::get_offset_of_sunColor_12(),
	SunShafts_t2328921421::get_offset_of_sunThreshold_13(),
	SunShafts_t2328921421::get_offset_of_sunShaftBlurRadius_14(),
	SunShafts_t2328921421::get_offset_of_sunShaftIntensity_15(),
	SunShafts_t2328921421::get_offset_of_maxRadius_16(),
	SunShafts_t2328921421::get_offset_of_useDepthTexture_17(),
	SunShafts_t2328921421::get_offset_of_sunShaftsShader_18(),
	SunShafts_t2328921421::get_offset_of_sunShaftsMaterial_19(),
	SunShafts_t2328921421::get_offset_of_simpleClearShader_20(),
	SunShafts_t2328921421::get_offset_of_simpleClearMaterial_21(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize3704 = { sizeof (SunShaftsResolution_t3826757637)+ sizeof (RuntimeObject), sizeof(int32_t), 0, 0 };
extern const int32_t g_FieldOffsetTable3704[4] = 
{
	SunShaftsResolution_t3826757637::get_offset_of_value___2() + static_cast<int32_t>(sizeof(RuntimeObject)),
	0,
	0,
	0,
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize3705 = { sizeof (ShaftsScreenBlendMode_t4165054462)+ sizeof (RuntimeObject), sizeof(int32_t), 0, 0 };
extern const int32_t g_FieldOffsetTable3705[3] = 
{
	ShaftsScreenBlendMode_t4165054462::get_offset_of_value___2() + static_cast<int32_t>(sizeof(RuntimeObject)),
	0,
	0,
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize3706 = { sizeof (TiltShift_t2891301701), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable3706[7] = 
{
	TiltShift_t2891301701::get_offset_of_mode_8(),
	TiltShift_t2891301701::get_offset_of_quality_9(),
	TiltShift_t2891301701::get_offset_of_blurArea_10(),
	TiltShift_t2891301701::get_offset_of_maxBlurSize_11(),
	TiltShift_t2891301701::get_offset_of_downsample_12(),
	TiltShift_t2891301701::get_offset_of_tiltShiftShader_13(),
	TiltShift_t2891301701::get_offset_of_tiltShiftMaterial_14(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize3707 = { sizeof (TiltShiftMode_t1375727185)+ sizeof (RuntimeObject), sizeof(int32_t), 0, 0 };
extern const int32_t g_FieldOffsetTable3707[3] = 
{
	TiltShiftMode_t1375727185::get_offset_of_value___2() + static_cast<int32_t>(sizeof(RuntimeObject)),
	0,
	0,
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize3708 = { sizeof (TiltShiftQuality_t4173331534)+ sizeof (RuntimeObject), sizeof(int32_t), 0, 0 };
extern const int32_t g_FieldOffsetTable3708[5] = 
{
	TiltShiftQuality_t4173331534::get_offset_of_value___2() + static_cast<int32_t>(sizeof(RuntimeObject)),
	0,
	0,
	0,
	0,
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize3709 = { sizeof (Tonemapping_t2837480251), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable3709[13] = 
{
	Tonemapping_t2837480251::get_offset_of_type_8(),
	Tonemapping_t2837480251::get_offset_of_adaptiveTextureSize_9(),
	Tonemapping_t2837480251::get_offset_of_remapCurve_10(),
	Tonemapping_t2837480251::get_offset_of_curveTex_11(),
	Tonemapping_t2837480251::get_offset_of_exposureAdjustment_12(),
	Tonemapping_t2837480251::get_offset_of_middleGrey_13(),
	Tonemapping_t2837480251::get_offset_of_white_14(),
	Tonemapping_t2837480251::get_offset_of_adaptionSpeed_15(),
	Tonemapping_t2837480251::get_offset_of_tonemapper_16(),
	Tonemapping_t2837480251::get_offset_of_validRenderTextureFormat_17(),
	Tonemapping_t2837480251::get_offset_of_tonemapMaterial_18(),
	Tonemapping_t2837480251::get_offset_of_rt_19(),
	Tonemapping_t2837480251::get_offset_of_rtFormat_20(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize3710 = { sizeof (TonemapperType_t52991894)+ sizeof (RuntimeObject), sizeof(int32_t), 0, 0 };
extern const int32_t g_FieldOffsetTable3710[8] = 
{
	TonemapperType_t52991894::get_offset_of_value___2() + static_cast<int32_t>(sizeof(RuntimeObject)),
	0,
	0,
	0,
	0,
	0,
	0,
	0,
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize3711 = { sizeof (AdaptiveTexSize_t1062941056)+ sizeof (RuntimeObject), sizeof(int32_t), 0, 0 };
extern const int32_t g_FieldOffsetTable3711[8] = 
{
	AdaptiveTexSize_t1062941056::get_offset_of_value___2() + static_cast<int32_t>(sizeof(RuntimeObject)),
	0,
	0,
	0,
	0,
	0,
	0,
	0,
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize3712 = { sizeof (Triangles_t2090031681), -1, sizeof(Triangles_t2090031681_StaticFields), 0 };
extern const int32_t g_FieldOffsetTable3712[2] = 
{
	Triangles_t2090031681_StaticFields::get_offset_of_meshes_0(),
	Triangles_t2090031681_StaticFields::get_offset_of_currentTris_1(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize3713 = { sizeof (Twirl_t2760508880), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable3713[3] = 
{
	Twirl_t2760508880::get_offset_of_radius_6(),
	Twirl_t2760508880::get_offset_of_angle_7(),
	Twirl_t2760508880::get_offset_of_center_8(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize3714 = { sizeof (VignetteAndChromaticAberration_t3308099924), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable3714[14] = 
{
	VignetteAndChromaticAberration_t3308099924::get_offset_of_mode_8(),
	VignetteAndChromaticAberration_t3308099924::get_offset_of_intensity_9(),
	VignetteAndChromaticAberration_t3308099924::get_offset_of_chromaticAberration_10(),
	VignetteAndChromaticAberration_t3308099924::get_offset_of_axialAberration_11(),
	VignetteAndChromaticAberration_t3308099924::get_offset_of_blur_12(),
	VignetteAndChromaticAberration_t3308099924::get_offset_of_blurSpread_13(),
	VignetteAndChromaticAberration_t3308099924::get_offset_of_luminanceDependency_14(),
	VignetteAndChromaticAberration_t3308099924::get_offset_of_blurDistance_15(),
	VignetteAndChromaticAberration_t3308099924::get_offset_of_vignetteShader_16(),
	VignetteAndChromaticAberration_t3308099924::get_offset_of_separableBlurShader_17(),
	VignetteAndChromaticAberration_t3308099924::get_offset_of_chromAberrationShader_18(),
	VignetteAndChromaticAberration_t3308099924::get_offset_of_m_VignetteMaterial_19(),
	VignetteAndChromaticAberration_t3308099924::get_offset_of_m_SeparableBlurMaterial_20(),
	VignetteAndChromaticAberration_t3308099924::get_offset_of_m_ChromAberrationMaterial_21(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize3715 = { sizeof (AberrationMode_t218549536)+ sizeof (RuntimeObject), sizeof(int32_t), 0, 0 };
extern const int32_t g_FieldOffsetTable3715[3] = 
{
	AberrationMode_t218549536::get_offset_of_value___2() + static_cast<int32_t>(sizeof(RuntimeObject)),
	0,
	0,
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize3716 = { sizeof (Vortex_t3420399868), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable3716[3] = 
{
	Vortex_t3420399868::get_offset_of_radius_6(),
	Vortex_t3420399868::get_offset_of_angle_7(),
	Vortex_t3420399868::get_offset_of_center_8(),
};
#ifdef __clang__
#pragma clang diagnostic pop
#endif
