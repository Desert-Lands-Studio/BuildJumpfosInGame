﻿#include "pch-cpp.hpp"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif


#include <stdint.h>
#include <limits>


struct VirtActionInvoker0
{
	typedef void (*Action)(void*, const RuntimeMethod*);

	static inline void Invoke (Il2CppMethodSlot slot, RuntimeObject* obj)
	{
		const VirtualInvokeData& invokeData = il2cpp_codegen_get_virtual_invoke_data(slot, obj);
		((Action)invokeData.methodPtr)(obj, invokeData.method);
	}
};
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
struct GenericVirtFuncInvoker1
{
	typedef R (*Func)(void*, T1, const RuntimeMethod*);

	static inline R Invoke (const RuntimeMethod* method, RuntimeObject* obj, T1 p1)
	{
		VirtualInvokeData invokeData;
		il2cpp_codegen_get_generic_virtual_invoke_data(method, obj, &invokeData);
		return ((Func)invokeData.methodPtr)(obj, p1, invokeData.method);
	}
};
template <typename R>
struct GenericVirtFuncInvoker0
{
	typedef R (*Func)(void*, const RuntimeMethod*);

	static inline R Invoke (const RuntimeMethod* method, RuntimeObject* obj)
	{
		VirtualInvokeData invokeData;
		il2cpp_codegen_get_generic_virtual_invoke_data(method, obj, &invokeData);
		return ((Func)invokeData.methodPtr)(obj, invokeData.method);
	}
};
template <typename T1, typename T2>
struct GenericVirtActionInvoker2
{
	typedef void (*Action)(void*, T1, T2, const RuntimeMethod*);

	static inline void Invoke (const RuntimeMethod* method, RuntimeObject* obj, T1 p1, T2 p2)
	{
		VirtualInvokeData invokeData;
		il2cpp_codegen_get_generic_virtual_invoke_data(method, obj, &invokeData);
		((Action)invokeData.methodPtr)(obj, p1, p2, invokeData.method);
	}
};

// System.Char[]
struct CharU5BU5D_t7B7FC5BC8091AA3B9CB0B29CDD80B5EE9254AA34;
// ES3Internal.ES3Member[]
struct ES3MemberU5BU5D_t10EB896E69226CE07D8ED3EFFA1A51616BAD952A;
// UnityEngine.AnimationCurve
struct AnimationCurve_t2D452A14820CEDB83BFF2C911682A4E59001AD03;
// ES3Reader
struct ES3Reader_t2780AF8AA61DA2A817115CEF8612AC0E494D03C9;
// ES3Settings
struct ES3Settings_t2B338F5F7BE6842BF4489E6FF7B312DC5F6EBDB2;
// ES3Types.ES3Type
struct ES3Type_t8FBECB7AE75168648B9524E0C2A38DAD4555421D;
// ES3Types.ES3Type_ShapeModule
struct ES3Type_ShapeModule_t67010A74D4F69A245D5F06976239CAB4279B5377;
// ES3Types.ES3Type_SizeBySpeedModule
struct ES3Type_SizeBySpeedModule_tE2CD943FBEF83D6F6EDB836909B9C475DF2A7FD0;
// UnityEngine.Mesh
struct Mesh_t2F5992DBA650D5862B43D3823ACD997132A57DA6;
// UnityEngine.MeshRenderer
struct MeshRenderer_tCD983A2F635E12BCB0BAA2E635D96A318757908B;
// UnityEngine.ParticleSystem
struct ParticleSystem_t2F526CCDBD3512879B3FCBE04BCAB20D7B4F391E;
// UnityEngine.SkinnedMeshRenderer
struct SkinnedMeshRenderer_t126F4D6010E0F4B2685A7817B0A9171805D8F496;
// System.String
struct String_t;
// System.Type
struct Type_t;
// System.Void
struct Void_t700C6383A2A510C2CF4DD86DABD5CA9FF70ADAC5;

IL2CPP_EXTERN_C RuntimeClass* ES3Type_MinMaxCurve_tC5342BF0F8735B85CB5E16FDD4C6FACC8AFAD3B7_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* ES3Type_Vector2_t803CDF887D02E9215B016DFABE969B06638FB1F5_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* ES3Type_Vector3_tA9144E81A20D2F28726F02DE1AE6CD3F9C12B54F_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* ES3Type_bool_t8F309F7B9CC735FF1DEE68081B6E3CAB367745F4_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* ES3Type_float_tF86B773C86731BD9AD79448B860BBB178FE77644_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* ES3Type_int_tF64C15D40AD0CC7C15BCD1CEC3C5C6BF837BD167_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* ShapeModule_t3A89D143F5CAF357ECCE8B4A4F2BBD57816F98CA_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* SizeBySpeedModule_t156070A63E0A483D36BCAE783BA554CDA7CAF752_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C String_t* _stringLiteral01837E2252AC8026A5EA3567A663017A662FBB70;
IL2CPP_EXTERN_C String_t* _stringLiteral062DB096C728515E033CF8C48A1C1F0B9A79384B;
IL2CPP_EXTERN_C String_t* _stringLiteral1228466552C1791B2019A329AFE94665D441168A;
IL2CPP_EXTERN_C String_t* _stringLiteral1B024D537329B86AB0DF96B2A714180F442F53E9;
IL2CPP_EXTERN_C String_t* _stringLiteral2F8690361553406965679AEF125F896BC5FC61F5;
IL2CPP_EXTERN_C String_t* _stringLiteral3EE5A4671A4E5AEBD31CA5F013A7773DC18ED22B;
IL2CPP_EXTERN_C String_t* _stringLiteral4845015737DC41475709911228278216EE4DC3AF;
IL2CPP_EXTERN_C String_t* _stringLiteral60E56797D122AE71D3774956F66C6EEB9EA22C05;
IL2CPP_EXTERN_C String_t* _stringLiteral6686C366F645244186604A3DA4B9A58012A85F1B;
IL2CPP_EXTERN_C String_t* _stringLiteral82BECCAD895076775062861CDB46AADEF913D969;
IL2CPP_EXTERN_C String_t* _stringLiteral8C6F88DEE0DFE3513BB8B44A8CF0FEE437F4EFFB;
IL2CPP_EXTERN_C String_t* _stringLiteral8C9F18A4F030B96447955FBBA1A99FFC43B5D8E0;
IL2CPP_EXTERN_C String_t* _stringLiteral8E54BB51E569CB6A8D3C45D8AEF883A1559C1C0E;
IL2CPP_EXTERN_C String_t* _stringLiteral91811EE149061D28B38320E2430CE8888AD6398B;
IL2CPP_EXTERN_C String_t* _stringLiteral9384C6EF2DA5C0BD5274A0DACFF291D0ABBFD8B1;
IL2CPP_EXTERN_C String_t* _stringLiteral9CE1604D659135925CCC4DD1F526AFFE42E689F1;
IL2CPP_EXTERN_C String_t* _stringLiteral9E61658953B4F9BB4A05E3D2D2BC18990BADE934;
IL2CPP_EXTERN_C String_t* _stringLiteralBD0DD0004699EF86BF0FC1D161FA3766AF5126C4;
IL2CPP_EXTERN_C String_t* _stringLiteralBD49F93A7BC78A69E385CEC0E78F434BD2845A17;
IL2CPP_EXTERN_C String_t* _stringLiteralCA1B66E295BD92E9FD3B6C708F09CA69A50BEFD1;
IL2CPP_EXTERN_C String_t* _stringLiteralE8744A8B8BD390EB66CA0CAE2376C973E6904FFB;
IL2CPP_EXTERN_C String_t* _stringLiteralEB0A157666700D8227FD4B66A26FDC02035E89BF;
IL2CPP_EXTERN_C String_t* _stringLiteralED1F119527A0BCA45125EF8E0F719985DA86C0E1;
IL2CPP_EXTERN_C String_t* _stringLiteralF66E9083C67855AB6EBB4B74342E385A72AACE32;
IL2CPP_EXTERN_C String_t* _stringLiteralF9BE17D634D1B07BCDCDA77A87710C946D81307B;
IL2CPP_EXTERN_C String_t* _stringLiteralF9D225733E1D10F9344C755C4A9C0870CD1DE97B;
IL2CPP_EXTERN_C String_t* _stringLiteralFA5EC7168E9633DAAEAA255ECB55030EA60F064F;
IL2CPP_EXTERN_C String_t* _stringLiteralFC341A1966AF28A9A7A26EDFB78ABBF7DE4D0E1F;
IL2CPP_EXTERN_C const RuntimeMethod* ES3Reader_Read_TisBoolean_t07D1E3F34E4813023D64F584DFF7B34C9D922F37_mC6D1B158268FF9B97822FF9F5B37FB1723FEDA22_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* ES3Reader_Read_TisInt32_tFDE5F8CD43D10453F6A2E0C77FE48C6CC7009046_m2B74AA6627F5B1D21171D56C42F71DE5A7C1B4A6_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* ES3Reader_Read_TisMeshRenderer_tCD983A2F635E12BCB0BAA2E635D96A318757908B_m773CE5481730EBCC6A377F918946EB11B304050A_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* ES3Reader_Read_TisMesh_t2F5992DBA650D5862B43D3823ACD997132A57DA6_m65DF5BA41642A39B77979CC49472E4DE7A1660F9_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* ES3Reader_Read_TisMinMaxCurve_tF036239442AB2D438B1EDABEBC785426871084CD_mD285150CBFB52440643BBECB5ADF4EE8DE940535_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* ES3Reader_Read_TisParticleSystemMeshShapeType_t7C9518403F30CC7AF7F9124FD61EC1187B42EFD2_mF1A19C0F8BBA6E44737F158F3BE4CC478F623F10_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* ES3Reader_Read_TisParticleSystemShapeType_t5B09F3A5A637F57DB1B2A6518E214AA2AA53D70C_mAE53212CB1FDDA51CF8CD0D39FCD446087DACA48_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* ES3Reader_Read_TisSingle_tE07797BA3C98D4CA9B5A19413C19A76688AB899E_m4A0416374498BDA042B8EB21E49B72326D6CE5F4_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* ES3Reader_Read_TisSkinnedMeshRenderer_t126F4D6010E0F4B2685A7817B0A9171805D8F496_m23D6569D5CE7B3E1C67BDB470CDEDEF25A835F25_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* ES3Reader_Read_TisVector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9_mD2C1683A01C44107D1473023F8188DDEA71D9A7D_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* ES3Reader_Read_TisVector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E_mBA4CD9D0F45E78BA43FE2DB8EC33CC3A5433DE15_RuntimeMethod_var;


IL2CPP_EXTERN_C_BEGIN
IL2CPP_EXTERN_C_END

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Object


// ES3Reader
struct ES3Reader_t2780AF8AA61DA2A817115CEF8612AC0E494D03C9  : public RuntimeObject
{
public:
	// ES3Settings ES3Reader::settings
	ES3Settings_t2B338F5F7BE6842BF4489E6FF7B312DC5F6EBDB2 * ___settings_0;
	// System.Int32 ES3Reader::serializationDepth
	int32_t ___serializationDepth_1;
	// System.String ES3Reader::overridePropertiesName
	String_t* ___overridePropertiesName_2;

public:
	inline static int32_t get_offset_of_settings_0() { return static_cast<int32_t>(offsetof(ES3Reader_t2780AF8AA61DA2A817115CEF8612AC0E494D03C9, ___settings_0)); }
	inline ES3Settings_t2B338F5F7BE6842BF4489E6FF7B312DC5F6EBDB2 * get_settings_0() const { return ___settings_0; }
	inline ES3Settings_t2B338F5F7BE6842BF4489E6FF7B312DC5F6EBDB2 ** get_address_of_settings_0() { return &___settings_0; }
	inline void set_settings_0(ES3Settings_t2B338F5F7BE6842BF4489E6FF7B312DC5F6EBDB2 * value)
	{
		___settings_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___settings_0), (void*)value);
	}

	inline static int32_t get_offset_of_serializationDepth_1() { return static_cast<int32_t>(offsetof(ES3Reader_t2780AF8AA61DA2A817115CEF8612AC0E494D03C9, ___serializationDepth_1)); }
	inline int32_t get_serializationDepth_1() const { return ___serializationDepth_1; }
	inline int32_t* get_address_of_serializationDepth_1() { return &___serializationDepth_1; }
	inline void set_serializationDepth_1(int32_t value)
	{
		___serializationDepth_1 = value;
	}

	inline static int32_t get_offset_of_overridePropertiesName_2() { return static_cast<int32_t>(offsetof(ES3Reader_t2780AF8AA61DA2A817115CEF8612AC0E494D03C9, ___overridePropertiesName_2)); }
	inline String_t* get_overridePropertiesName_2() const { return ___overridePropertiesName_2; }
	inline String_t** get_address_of_overridePropertiesName_2() { return &___overridePropertiesName_2; }
	inline void set_overridePropertiesName_2(String_t* value)
	{
		___overridePropertiesName_2 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___overridePropertiesName_2), (void*)value);
	}
};


// ES3Types.ES3Type
struct ES3Type_t8FBECB7AE75168648B9524E0C2A38DAD4555421D  : public RuntimeObject
{
public:
	// ES3Internal.ES3Member[] ES3Types.ES3Type::members
	ES3MemberU5BU5D_t10EB896E69226CE07D8ED3EFFA1A51616BAD952A* ___members_1;
	// System.Type ES3Types.ES3Type::type
	Type_t * ___type_2;
	// System.Boolean ES3Types.ES3Type::isPrimitive
	bool ___isPrimitive_3;
	// System.Boolean ES3Types.ES3Type::isValueType
	bool ___isValueType_4;
	// System.Boolean ES3Types.ES3Type::isCollection
	bool ___isCollection_5;
	// System.Boolean ES3Types.ES3Type::isDictionary
	bool ___isDictionary_6;
	// System.Boolean ES3Types.ES3Type::isEnum
	bool ___isEnum_7;
	// System.Boolean ES3Types.ES3Type::isES3TypeUnityObject
	bool ___isES3TypeUnityObject_8;
	// System.Boolean ES3Types.ES3Type::isReflectedType
	bool ___isReflectedType_9;
	// System.Boolean ES3Types.ES3Type::isUnsupported
	bool ___isUnsupported_10;
	// System.Int32 ES3Types.ES3Type::priority
	int32_t ___priority_11;

public:
	inline static int32_t get_offset_of_members_1() { return static_cast<int32_t>(offsetof(ES3Type_t8FBECB7AE75168648B9524E0C2A38DAD4555421D, ___members_1)); }
	inline ES3MemberU5BU5D_t10EB896E69226CE07D8ED3EFFA1A51616BAD952A* get_members_1() const { return ___members_1; }
	inline ES3MemberU5BU5D_t10EB896E69226CE07D8ED3EFFA1A51616BAD952A** get_address_of_members_1() { return &___members_1; }
	inline void set_members_1(ES3MemberU5BU5D_t10EB896E69226CE07D8ED3EFFA1A51616BAD952A* value)
	{
		___members_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___members_1), (void*)value);
	}

	inline static int32_t get_offset_of_type_2() { return static_cast<int32_t>(offsetof(ES3Type_t8FBECB7AE75168648B9524E0C2A38DAD4555421D, ___type_2)); }
	inline Type_t * get_type_2() const { return ___type_2; }
	inline Type_t ** get_address_of_type_2() { return &___type_2; }
	inline void set_type_2(Type_t * value)
	{
		___type_2 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___type_2), (void*)value);
	}

	inline static int32_t get_offset_of_isPrimitive_3() { return static_cast<int32_t>(offsetof(ES3Type_t8FBECB7AE75168648B9524E0C2A38DAD4555421D, ___isPrimitive_3)); }
	inline bool get_isPrimitive_3() const { return ___isPrimitive_3; }
	inline bool* get_address_of_isPrimitive_3() { return &___isPrimitive_3; }
	inline void set_isPrimitive_3(bool value)
	{
		___isPrimitive_3 = value;
	}

	inline static int32_t get_offset_of_isValueType_4() { return static_cast<int32_t>(offsetof(ES3Type_t8FBECB7AE75168648B9524E0C2A38DAD4555421D, ___isValueType_4)); }
	inline bool get_isValueType_4() const { return ___isValueType_4; }
	inline bool* get_address_of_isValueType_4() { return &___isValueType_4; }
	inline void set_isValueType_4(bool value)
	{
		___isValueType_4 = value;
	}

	inline static int32_t get_offset_of_isCollection_5() { return static_cast<int32_t>(offsetof(ES3Type_t8FBECB7AE75168648B9524E0C2A38DAD4555421D, ___isCollection_5)); }
	inline bool get_isCollection_5() const { return ___isCollection_5; }
	inline bool* get_address_of_isCollection_5() { return &___isCollection_5; }
	inline void set_isCollection_5(bool value)
	{
		___isCollection_5 = value;
	}

	inline static int32_t get_offset_of_isDictionary_6() { return static_cast<int32_t>(offsetof(ES3Type_t8FBECB7AE75168648B9524E0C2A38DAD4555421D, ___isDictionary_6)); }
	inline bool get_isDictionary_6() const { return ___isDictionary_6; }
	inline bool* get_address_of_isDictionary_6() { return &___isDictionary_6; }
	inline void set_isDictionary_6(bool value)
	{
		___isDictionary_6 = value;
	}

	inline static int32_t get_offset_of_isEnum_7() { return static_cast<int32_t>(offsetof(ES3Type_t8FBECB7AE75168648B9524E0C2A38DAD4555421D, ___isEnum_7)); }
	inline bool get_isEnum_7() const { return ___isEnum_7; }
	inline bool* get_address_of_isEnum_7() { return &___isEnum_7; }
	inline void set_isEnum_7(bool value)
	{
		___isEnum_7 = value;
	}

	inline static int32_t get_offset_of_isES3TypeUnityObject_8() { return static_cast<int32_t>(offsetof(ES3Type_t8FBECB7AE75168648B9524E0C2A38DAD4555421D, ___isES3TypeUnityObject_8)); }
	inline bool get_isES3TypeUnityObject_8() const { return ___isES3TypeUnityObject_8; }
	inline bool* get_address_of_isES3TypeUnityObject_8() { return &___isES3TypeUnityObject_8; }
	inline void set_isES3TypeUnityObject_8(bool value)
	{
		___isES3TypeUnityObject_8 = value;
	}

	inline static int32_t get_offset_of_isReflectedType_9() { return static_cast<int32_t>(offsetof(ES3Type_t8FBECB7AE75168648B9524E0C2A38DAD4555421D, ___isReflectedType_9)); }
	inline bool get_isReflectedType_9() const { return ___isReflectedType_9; }
	inline bool* get_address_of_isReflectedType_9() { return &___isReflectedType_9; }
	inline void set_isReflectedType_9(bool value)
	{
		___isReflectedType_9 = value;
	}

	inline static int32_t get_offset_of_isUnsupported_10() { return static_cast<int32_t>(offsetof(ES3Type_t8FBECB7AE75168648B9524E0C2A38DAD4555421D, ___isUnsupported_10)); }
	inline bool get_isUnsupported_10() const { return ___isUnsupported_10; }
	inline bool* get_address_of_isUnsupported_10() { return &___isUnsupported_10; }
	inline void set_isUnsupported_10(bool value)
	{
		___isUnsupported_10 = value;
	}

	inline static int32_t get_offset_of_priority_11() { return static_cast<int32_t>(offsetof(ES3Type_t8FBECB7AE75168648B9524E0C2A38DAD4555421D, ___priority_11)); }
	inline int32_t get_priority_11() const { return ___priority_11; }
	inline int32_t* get_address_of_priority_11() { return &___priority_11; }
	inline void set_priority_11(int32_t value)
	{
		___priority_11 = value;
	}
};


// System.String
struct String_t  : public RuntimeObject
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


// System.ValueType
struct ValueType_tDBF999C1B75C48C68621878250DBF6CDBCF51E52  : public RuntimeObject
{
public:

public:
};

// Native definition for P/Invoke marshalling of System.ValueType
struct ValueType_tDBF999C1B75C48C68621878250DBF6CDBCF51E52_marshaled_pinvoke
{
};
// Native definition for COM marshalling of System.ValueType
struct ValueType_tDBF999C1B75C48C68621878250DBF6CDBCF51E52_marshaled_com
{
};

// System.Boolean
struct Boolean_t07D1E3F34E4813023D64F584DFF7B34C9D922F37 
{
public:
	// System.Boolean System.Boolean::m_value
	bool ___m_value_0;

public:
	inline static int32_t get_offset_of_m_value_0() { return static_cast<int32_t>(offsetof(Boolean_t07D1E3F34E4813023D64F584DFF7B34C9D922F37, ___m_value_0)); }
	inline bool get_m_value_0() const { return ___m_value_0; }
	inline bool* get_address_of_m_value_0() { return &___m_value_0; }
	inline void set_m_value_0(bool value)
	{
		___m_value_0 = value;
	}
};


// ES3Types.ES3Type_MinMaxCurve
struct ES3Type_MinMaxCurve_tC5342BF0F8735B85CB5E16FDD4C6FACC8AFAD3B7  : public ES3Type_t8FBECB7AE75168648B9524E0C2A38DAD4555421D
{
public:

public:
};


// ES3Types.ES3Type_ShapeModule
struct ES3Type_ShapeModule_t67010A74D4F69A245D5F06976239CAB4279B5377  : public ES3Type_t8FBECB7AE75168648B9524E0C2A38DAD4555421D
{
public:

public:
};


// ES3Types.ES3Type_SizeBySpeedModule
struct ES3Type_SizeBySpeedModule_tE2CD943FBEF83D6F6EDB836909B9C475DF2A7FD0  : public ES3Type_t8FBECB7AE75168648B9524E0C2A38DAD4555421D
{
public:

public:
};


// ES3Types.ES3Type_Vector2
struct ES3Type_Vector2_t803CDF887D02E9215B016DFABE969B06638FB1F5  : public ES3Type_t8FBECB7AE75168648B9524E0C2A38DAD4555421D
{
public:

public:
};


// ES3Types.ES3Type_Vector3
struct ES3Type_Vector3_tA9144E81A20D2F28726F02DE1AE6CD3F9C12B54F  : public ES3Type_t8FBECB7AE75168648B9524E0C2A38DAD4555421D
{
public:

public:
};


// ES3Types.ES3Type_bool
struct ES3Type_bool_t8F309F7B9CC735FF1DEE68081B6E3CAB367745F4  : public ES3Type_t8FBECB7AE75168648B9524E0C2A38DAD4555421D
{
public:

public:
};


// ES3Types.ES3Type_float
struct ES3Type_float_tF86B773C86731BD9AD79448B860BBB178FE77644  : public ES3Type_t8FBECB7AE75168648B9524E0C2A38DAD4555421D
{
public:

public:
};


// ES3Types.ES3Type_int
struct ES3Type_int_tF64C15D40AD0CC7C15BCD1CEC3C5C6BF837BD167  : public ES3Type_t8FBECB7AE75168648B9524E0C2A38DAD4555421D
{
public:

public:
};


// System.Enum
struct Enum_t23B90B40F60E677A8025267341651C94AE079CDA  : public ValueType_tDBF999C1B75C48C68621878250DBF6CDBCF51E52
{
public:

public:
};

// Native definition for P/Invoke marshalling of System.Enum
struct Enum_t23B90B40F60E677A8025267341651C94AE079CDA_marshaled_pinvoke
{
};
// Native definition for COM marshalling of System.Enum
struct Enum_t23B90B40F60E677A8025267341651C94AE079CDA_marshaled_com
{
};

// System.Int32
struct Int32_tFDE5F8CD43D10453F6A2E0C77FE48C6CC7009046 
{
public:
	// System.Int32 System.Int32::m_value
	int32_t ___m_value_0;

public:
	inline static int32_t get_offset_of_m_value_0() { return static_cast<int32_t>(offsetof(Int32_tFDE5F8CD43D10453F6A2E0C77FE48C6CC7009046, ___m_value_0)); }
	inline int32_t get_m_value_0() const { return ___m_value_0; }
	inline int32_t* get_address_of_m_value_0() { return &___m_value_0; }
	inline void set_m_value_0(int32_t value)
	{
		___m_value_0 = value;
	}
};


// System.IntPtr
struct IntPtr_t 
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


// System.Single
struct Single_tE07797BA3C98D4CA9B5A19413C19A76688AB899E 
{
public:
	// System.Single System.Single::m_value
	float ___m_value_0;

public:
	inline static int32_t get_offset_of_m_value_0() { return static_cast<int32_t>(offsetof(Single_tE07797BA3C98D4CA9B5A19413C19A76688AB899E, ___m_value_0)); }
	inline float get_m_value_0() const { return ___m_value_0; }
	inline float* get_address_of_m_value_0() { return &___m_value_0; }
	inline void set_m_value_0(float value)
	{
		___m_value_0 = value;
	}
};


// System.UInt32
struct UInt32_tE60352A06233E4E69DD198BCC67142159F686B15 
{
public:
	// System.UInt32 System.UInt32::m_value
	uint32_t ___m_value_0;

public:
	inline static int32_t get_offset_of_m_value_0() { return static_cast<int32_t>(offsetof(UInt32_tE60352A06233E4E69DD198BCC67142159F686B15, ___m_value_0)); }
	inline uint32_t get_m_value_0() const { return ___m_value_0; }
	inline uint32_t* get_address_of_m_value_0() { return &___m_value_0; }
	inline void set_m_value_0(uint32_t value)
	{
		___m_value_0 = value;
	}
};


// UnityEngine.Vector2
struct Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9 
{
public:
	// System.Single UnityEngine.Vector2::x
	float ___x_0;
	// System.Single UnityEngine.Vector2::y
	float ___y_1;

public:
	inline static int32_t get_offset_of_x_0() { return static_cast<int32_t>(offsetof(Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9, ___x_0)); }
	inline float get_x_0() const { return ___x_0; }
	inline float* get_address_of_x_0() { return &___x_0; }
	inline void set_x_0(float value)
	{
		___x_0 = value;
	}

	inline static int32_t get_offset_of_y_1() { return static_cast<int32_t>(offsetof(Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9, ___y_1)); }
	inline float get_y_1() const { return ___y_1; }
	inline float* get_address_of_y_1() { return &___y_1; }
	inline void set_y_1(float value)
	{
		___y_1 = value;
	}
};


// UnityEngine.Vector3
struct Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E 
{
public:
	// System.Single UnityEngine.Vector3::x
	float ___x_2;
	// System.Single UnityEngine.Vector3::y
	float ___y_3;
	// System.Single UnityEngine.Vector3::z
	float ___z_4;

public:
	inline static int32_t get_offset_of_x_2() { return static_cast<int32_t>(offsetof(Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E, ___x_2)); }
	inline float get_x_2() const { return ___x_2; }
	inline float* get_address_of_x_2() { return &___x_2; }
	inline void set_x_2(float value)
	{
		___x_2 = value;
	}

	inline static int32_t get_offset_of_y_3() { return static_cast<int32_t>(offsetof(Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E, ___y_3)); }
	inline float get_y_3() const { return ___y_3; }
	inline float* get_address_of_y_3() { return &___y_3; }
	inline void set_y_3(float value)
	{
		___y_3 = value;
	}

	inline static int32_t get_offset_of_z_4() { return static_cast<int32_t>(offsetof(Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E, ___z_4)); }
	inline float get_z_4() const { return ___z_4; }
	inline float* get_address_of_z_4() { return &___z_4; }
	inline void set_z_4(float value)
	{
		___z_4 = value;
	}
};


// System.Void
struct Void_t700C6383A2A510C2CF4DD86DABD5CA9FF70ADAC5 
{
public:
	union
	{
		struct
		{
		};
		uint8_t Void_t700C6383A2A510C2CF4DD86DABD5CA9FF70ADAC5__padding[1];
	};

public:
};


// UnityEngine.ParticleSystem/ShapeModule
struct ShapeModule_t3A89D143F5CAF357ECCE8B4A4F2BBD57816F98CA 
{
public:
	// UnityEngine.ParticleSystem UnityEngine.ParticleSystem/ShapeModule::m_ParticleSystem
	ParticleSystem_t2F526CCDBD3512879B3FCBE04BCAB20D7B4F391E * ___m_ParticleSystem_0;

public:
	inline static int32_t get_offset_of_m_ParticleSystem_0() { return static_cast<int32_t>(offsetof(ShapeModule_t3A89D143F5CAF357ECCE8B4A4F2BBD57816F98CA, ___m_ParticleSystem_0)); }
	inline ParticleSystem_t2F526CCDBD3512879B3FCBE04BCAB20D7B4F391E * get_m_ParticleSystem_0() const { return ___m_ParticleSystem_0; }
	inline ParticleSystem_t2F526CCDBD3512879B3FCBE04BCAB20D7B4F391E ** get_address_of_m_ParticleSystem_0() { return &___m_ParticleSystem_0; }
	inline void set_m_ParticleSystem_0(ParticleSystem_t2F526CCDBD3512879B3FCBE04BCAB20D7B4F391E * value)
	{
		___m_ParticleSystem_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_ParticleSystem_0), (void*)value);
	}
};

// Native definition for P/Invoke marshalling of UnityEngine.ParticleSystem/ShapeModule
struct ShapeModule_t3A89D143F5CAF357ECCE8B4A4F2BBD57816F98CA_marshaled_pinvoke
{
	ParticleSystem_t2F526CCDBD3512879B3FCBE04BCAB20D7B4F391E * ___m_ParticleSystem_0;
};
// Native definition for COM marshalling of UnityEngine.ParticleSystem/ShapeModule
struct ShapeModule_t3A89D143F5CAF357ECCE8B4A4F2BBD57816F98CA_marshaled_com
{
	ParticleSystem_t2F526CCDBD3512879B3FCBE04BCAB20D7B4F391E * ___m_ParticleSystem_0;
};

// UnityEngine.ParticleSystem/SizeBySpeedModule
struct SizeBySpeedModule_t156070A63E0A483D36BCAE783BA554CDA7CAF752 
{
public:
	// UnityEngine.ParticleSystem UnityEngine.ParticleSystem/SizeBySpeedModule::m_ParticleSystem
	ParticleSystem_t2F526CCDBD3512879B3FCBE04BCAB20D7B4F391E * ___m_ParticleSystem_0;

public:
	inline static int32_t get_offset_of_m_ParticleSystem_0() { return static_cast<int32_t>(offsetof(SizeBySpeedModule_t156070A63E0A483D36BCAE783BA554CDA7CAF752, ___m_ParticleSystem_0)); }
	inline ParticleSystem_t2F526CCDBD3512879B3FCBE04BCAB20D7B4F391E * get_m_ParticleSystem_0() const { return ___m_ParticleSystem_0; }
	inline ParticleSystem_t2F526CCDBD3512879B3FCBE04BCAB20D7B4F391E ** get_address_of_m_ParticleSystem_0() { return &___m_ParticleSystem_0; }
	inline void set_m_ParticleSystem_0(ParticleSystem_t2F526CCDBD3512879B3FCBE04BCAB20D7B4F391E * value)
	{
		___m_ParticleSystem_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_ParticleSystem_0), (void*)value);
	}
};

// Native definition for P/Invoke marshalling of UnityEngine.ParticleSystem/SizeBySpeedModule
struct SizeBySpeedModule_t156070A63E0A483D36BCAE783BA554CDA7CAF752_marshaled_pinvoke
{
	ParticleSystem_t2F526CCDBD3512879B3FCBE04BCAB20D7B4F391E * ___m_ParticleSystem_0;
};
// Native definition for COM marshalling of UnityEngine.ParticleSystem/SizeBySpeedModule
struct SizeBySpeedModule_t156070A63E0A483D36BCAE783BA554CDA7CAF752_marshaled_com
{
	ParticleSystem_t2F526CCDBD3512879B3FCBE04BCAB20D7B4F391E * ___m_ParticleSystem_0;
};

// UnityEngine.Object
struct Object_tF2F3778131EFF286AF62B7B013A170F95A91571A  : public RuntimeObject
{
public:
	// System.IntPtr UnityEngine.Object::m_CachedPtr
	intptr_t ___m_CachedPtr_0;

public:
	inline static int32_t get_offset_of_m_CachedPtr_0() { return static_cast<int32_t>(offsetof(Object_tF2F3778131EFF286AF62B7B013A170F95A91571A, ___m_CachedPtr_0)); }
	inline intptr_t get_m_CachedPtr_0() const { return ___m_CachedPtr_0; }
	inline intptr_t* get_address_of_m_CachedPtr_0() { return &___m_CachedPtr_0; }
	inline void set_m_CachedPtr_0(intptr_t value)
	{
		___m_CachedPtr_0 = value;
	}
};

// Native definition for P/Invoke marshalling of UnityEngine.Object
struct Object_tF2F3778131EFF286AF62B7B013A170F95A91571A_marshaled_pinvoke
{
	intptr_t ___m_CachedPtr_0;
};
// Native definition for COM marshalling of UnityEngine.Object
struct Object_tF2F3778131EFF286AF62B7B013A170F95A91571A_marshaled_com
{
	intptr_t ___m_CachedPtr_0;
};

// UnityEngine.ParticleSystemCurveMode
struct ParticleSystemCurveMode_t1B9D50590BC22BDD142A21664B8E2F9475409342 
{
public:
	// System.Int32 UnityEngine.ParticleSystemCurveMode::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(ParticleSystemCurveMode_t1B9D50590BC22BDD142A21664B8E2F9475409342, ___value___2)); }
	inline int32_t get_value___2() const { return ___value___2; }
	inline int32_t* get_address_of_value___2() { return &___value___2; }
	inline void set_value___2(int32_t value)
	{
		___value___2 = value;
	}
};


// UnityEngine.ParticleSystemMeshShapeType
struct ParticleSystemMeshShapeType_t7C9518403F30CC7AF7F9124FD61EC1187B42EFD2 
{
public:
	// System.Int32 UnityEngine.ParticleSystemMeshShapeType::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(ParticleSystemMeshShapeType_t7C9518403F30CC7AF7F9124FD61EC1187B42EFD2, ___value___2)); }
	inline int32_t get_value___2() const { return ___value___2; }
	inline int32_t* get_address_of_value___2() { return &___value___2; }
	inline void set_value___2(int32_t value)
	{
		___value___2 = value;
	}
};


// UnityEngine.ParticleSystemShapeType
struct ParticleSystemShapeType_t5B09F3A5A637F57DB1B2A6518E214AA2AA53D70C 
{
public:
	// System.Int32 UnityEngine.ParticleSystemShapeType::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(ParticleSystemShapeType_t5B09F3A5A637F57DB1B2A6518E214AA2AA53D70C, ___value___2)); }
	inline int32_t get_value___2() const { return ___value___2; }
	inline int32_t* get_address_of_value___2() { return &___value___2; }
	inline void set_value___2(int32_t value)
	{
		___value___2 = value;
	}
};


// UnityEngine.Component
struct Component_t62FBC8D2420DA4BE9037AFE430740F6B3EECA684  : public Object_tF2F3778131EFF286AF62B7B013A170F95A91571A
{
public:

public:
};


// UnityEngine.Mesh
struct Mesh_t2F5992DBA650D5862B43D3823ACD997132A57DA6  : public Object_tF2F3778131EFF286AF62B7B013A170F95A91571A
{
public:

public:
};


// UnityEngine.ParticleSystem/MinMaxCurve
struct MinMaxCurve_tF036239442AB2D438B1EDABEBC785426871084CD 
{
public:
	// UnityEngine.ParticleSystemCurveMode UnityEngine.ParticleSystem/MinMaxCurve::m_Mode
	int32_t ___m_Mode_0;
	// System.Single UnityEngine.ParticleSystem/MinMaxCurve::m_CurveMultiplier
	float ___m_CurveMultiplier_1;
	// UnityEngine.AnimationCurve UnityEngine.ParticleSystem/MinMaxCurve::m_CurveMin
	AnimationCurve_t2D452A14820CEDB83BFF2C911682A4E59001AD03 * ___m_CurveMin_2;
	// UnityEngine.AnimationCurve UnityEngine.ParticleSystem/MinMaxCurve::m_CurveMax
	AnimationCurve_t2D452A14820CEDB83BFF2C911682A4E59001AD03 * ___m_CurveMax_3;
	// System.Single UnityEngine.ParticleSystem/MinMaxCurve::m_ConstantMin
	float ___m_ConstantMin_4;
	// System.Single UnityEngine.ParticleSystem/MinMaxCurve::m_ConstantMax
	float ___m_ConstantMax_5;

public:
	inline static int32_t get_offset_of_m_Mode_0() { return static_cast<int32_t>(offsetof(MinMaxCurve_tF036239442AB2D438B1EDABEBC785426871084CD, ___m_Mode_0)); }
	inline int32_t get_m_Mode_0() const { return ___m_Mode_0; }
	inline int32_t* get_address_of_m_Mode_0() { return &___m_Mode_0; }
	inline void set_m_Mode_0(int32_t value)
	{
		___m_Mode_0 = value;
	}

	inline static int32_t get_offset_of_m_CurveMultiplier_1() { return static_cast<int32_t>(offsetof(MinMaxCurve_tF036239442AB2D438B1EDABEBC785426871084CD, ___m_CurveMultiplier_1)); }
	inline float get_m_CurveMultiplier_1() const { return ___m_CurveMultiplier_1; }
	inline float* get_address_of_m_CurveMultiplier_1() { return &___m_CurveMultiplier_1; }
	inline void set_m_CurveMultiplier_1(float value)
	{
		___m_CurveMultiplier_1 = value;
	}

	inline static int32_t get_offset_of_m_CurveMin_2() { return static_cast<int32_t>(offsetof(MinMaxCurve_tF036239442AB2D438B1EDABEBC785426871084CD, ___m_CurveMin_2)); }
	inline AnimationCurve_t2D452A14820CEDB83BFF2C911682A4E59001AD03 * get_m_CurveMin_2() const { return ___m_CurveMin_2; }
	inline AnimationCurve_t2D452A14820CEDB83BFF2C911682A4E59001AD03 ** get_address_of_m_CurveMin_2() { return &___m_CurveMin_2; }
	inline void set_m_CurveMin_2(AnimationCurve_t2D452A14820CEDB83BFF2C911682A4E59001AD03 * value)
	{
		___m_CurveMin_2 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_CurveMin_2), (void*)value);
	}

	inline static int32_t get_offset_of_m_CurveMax_3() { return static_cast<int32_t>(offsetof(MinMaxCurve_tF036239442AB2D438B1EDABEBC785426871084CD, ___m_CurveMax_3)); }
	inline AnimationCurve_t2D452A14820CEDB83BFF2C911682A4E59001AD03 * get_m_CurveMax_3() const { return ___m_CurveMax_3; }
	inline AnimationCurve_t2D452A14820CEDB83BFF2C911682A4E59001AD03 ** get_address_of_m_CurveMax_3() { return &___m_CurveMax_3; }
	inline void set_m_CurveMax_3(AnimationCurve_t2D452A14820CEDB83BFF2C911682A4E59001AD03 * value)
	{
		___m_CurveMax_3 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_CurveMax_3), (void*)value);
	}

	inline static int32_t get_offset_of_m_ConstantMin_4() { return static_cast<int32_t>(offsetof(MinMaxCurve_tF036239442AB2D438B1EDABEBC785426871084CD, ___m_ConstantMin_4)); }
	inline float get_m_ConstantMin_4() const { return ___m_ConstantMin_4; }
	inline float* get_address_of_m_ConstantMin_4() { return &___m_ConstantMin_4; }
	inline void set_m_ConstantMin_4(float value)
	{
		___m_ConstantMin_4 = value;
	}

	inline static int32_t get_offset_of_m_ConstantMax_5() { return static_cast<int32_t>(offsetof(MinMaxCurve_tF036239442AB2D438B1EDABEBC785426871084CD, ___m_ConstantMax_5)); }
	inline float get_m_ConstantMax_5() const { return ___m_ConstantMax_5; }
	inline float* get_address_of_m_ConstantMax_5() { return &___m_ConstantMax_5; }
	inline void set_m_ConstantMax_5(float value)
	{
		___m_ConstantMax_5 = value;
	}
};


// UnityEngine.Renderer
struct Renderer_t58147AB5B00224FE1460FD47542DC0DA7EC9378C  : public Component_t62FBC8D2420DA4BE9037AFE430740F6B3EECA684
{
public:

public:
};


// UnityEngine.MeshRenderer
struct MeshRenderer_tCD983A2F635E12BCB0BAA2E635D96A318757908B  : public Renderer_t58147AB5B00224FE1460FD47542DC0DA7EC9378C
{
public:

public:
};


// UnityEngine.SkinnedMeshRenderer
struct SkinnedMeshRenderer_t126F4D6010E0F4B2685A7817B0A9171805D8F496  : public Renderer_t58147AB5B00224FE1460FD47542DC0DA7EC9378C
{
public:

public:
};


// System.Object


// System.Object


// ES3Reader


// ES3Reader


// ES3Types.ES3Type


// ES3Types.ES3Type


// System.String

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
		Il2CppCodeGenWriteBarrier((void**)(&___Empty_5), (void*)value);
	}
};


// System.String


// System.ValueType


// System.ValueType


// System.Boolean

struct Boolean_t07D1E3F34E4813023D64F584DFF7B34C9D922F37_StaticFields
{
public:
	// System.String System.Boolean::TrueString
	String_t* ___TrueString_5;
	// System.String System.Boolean::FalseString
	String_t* ___FalseString_6;

public:
	inline static int32_t get_offset_of_TrueString_5() { return static_cast<int32_t>(offsetof(Boolean_t07D1E3F34E4813023D64F584DFF7B34C9D922F37_StaticFields, ___TrueString_5)); }
	inline String_t* get_TrueString_5() const { return ___TrueString_5; }
	inline String_t** get_address_of_TrueString_5() { return &___TrueString_5; }
	inline void set_TrueString_5(String_t* value)
	{
		___TrueString_5 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___TrueString_5), (void*)value);
	}

	inline static int32_t get_offset_of_FalseString_6() { return static_cast<int32_t>(offsetof(Boolean_t07D1E3F34E4813023D64F584DFF7B34C9D922F37_StaticFields, ___FalseString_6)); }
	inline String_t* get_FalseString_6() const { return ___FalseString_6; }
	inline String_t** get_address_of_FalseString_6() { return &___FalseString_6; }
	inline void set_FalseString_6(String_t* value)
	{
		___FalseString_6 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___FalseString_6), (void*)value);
	}
};


// System.Boolean


// ES3Types.ES3Type_MinMaxCurve

struct ES3Type_MinMaxCurve_tC5342BF0F8735B85CB5E16FDD4C6FACC8AFAD3B7_StaticFields
{
public:
	// ES3Types.ES3Type ES3Types.ES3Type_MinMaxCurve::Instance
	ES3Type_t8FBECB7AE75168648B9524E0C2A38DAD4555421D * ___Instance_12;

public:
	inline static int32_t get_offset_of_Instance_12() { return static_cast<int32_t>(offsetof(ES3Type_MinMaxCurve_tC5342BF0F8735B85CB5E16FDD4C6FACC8AFAD3B7_StaticFields, ___Instance_12)); }
	inline ES3Type_t8FBECB7AE75168648B9524E0C2A38DAD4555421D * get_Instance_12() const { return ___Instance_12; }
	inline ES3Type_t8FBECB7AE75168648B9524E0C2A38DAD4555421D ** get_address_of_Instance_12() { return &___Instance_12; }
	inline void set_Instance_12(ES3Type_t8FBECB7AE75168648B9524E0C2A38DAD4555421D * value)
	{
		___Instance_12 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___Instance_12), (void*)value);
	}
};


// ES3Types.ES3Type_MinMaxCurve


// ES3Types.ES3Type_ShapeModule

struct ES3Type_ShapeModule_t67010A74D4F69A245D5F06976239CAB4279B5377_StaticFields
{
public:
	// ES3Types.ES3Type ES3Types.ES3Type_ShapeModule::Instance
	ES3Type_t8FBECB7AE75168648B9524E0C2A38DAD4555421D * ___Instance_12;

public:
	inline static int32_t get_offset_of_Instance_12() { return static_cast<int32_t>(offsetof(ES3Type_ShapeModule_t67010A74D4F69A245D5F06976239CAB4279B5377_StaticFields, ___Instance_12)); }
	inline ES3Type_t8FBECB7AE75168648B9524E0C2A38DAD4555421D * get_Instance_12() const { return ___Instance_12; }
	inline ES3Type_t8FBECB7AE75168648B9524E0C2A38DAD4555421D ** get_address_of_Instance_12() { return &___Instance_12; }
	inline void set_Instance_12(ES3Type_t8FBECB7AE75168648B9524E0C2A38DAD4555421D * value)
	{
		___Instance_12 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___Instance_12), (void*)value);
	}
};


// ES3Types.ES3Type_ShapeModule


// ES3Types.ES3Type_SizeBySpeedModule

struct ES3Type_SizeBySpeedModule_tE2CD943FBEF83D6F6EDB836909B9C475DF2A7FD0_StaticFields
{
public:
	// ES3Types.ES3Type ES3Types.ES3Type_SizeBySpeedModule::Instance
	ES3Type_t8FBECB7AE75168648B9524E0C2A38DAD4555421D * ___Instance_12;

public:
	inline static int32_t get_offset_of_Instance_12() { return static_cast<int32_t>(offsetof(ES3Type_SizeBySpeedModule_tE2CD943FBEF83D6F6EDB836909B9C475DF2A7FD0_StaticFields, ___Instance_12)); }
	inline ES3Type_t8FBECB7AE75168648B9524E0C2A38DAD4555421D * get_Instance_12() const { return ___Instance_12; }
	inline ES3Type_t8FBECB7AE75168648B9524E0C2A38DAD4555421D ** get_address_of_Instance_12() { return &___Instance_12; }
	inline void set_Instance_12(ES3Type_t8FBECB7AE75168648B9524E0C2A38DAD4555421D * value)
	{
		___Instance_12 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___Instance_12), (void*)value);
	}
};


// ES3Types.ES3Type_SizeBySpeedModule


// ES3Types.ES3Type_Vector2

struct ES3Type_Vector2_t803CDF887D02E9215B016DFABE969B06638FB1F5_StaticFields
{
public:
	// ES3Types.ES3Type ES3Types.ES3Type_Vector2::Instance
	ES3Type_t8FBECB7AE75168648B9524E0C2A38DAD4555421D * ___Instance_12;

public:
	inline static int32_t get_offset_of_Instance_12() { return static_cast<int32_t>(offsetof(ES3Type_Vector2_t803CDF887D02E9215B016DFABE969B06638FB1F5_StaticFields, ___Instance_12)); }
	inline ES3Type_t8FBECB7AE75168648B9524E0C2A38DAD4555421D * get_Instance_12() const { return ___Instance_12; }
	inline ES3Type_t8FBECB7AE75168648B9524E0C2A38DAD4555421D ** get_address_of_Instance_12() { return &___Instance_12; }
	inline void set_Instance_12(ES3Type_t8FBECB7AE75168648B9524E0C2A38DAD4555421D * value)
	{
		___Instance_12 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___Instance_12), (void*)value);
	}
};


// ES3Types.ES3Type_Vector2


// ES3Types.ES3Type_Vector3

struct ES3Type_Vector3_tA9144E81A20D2F28726F02DE1AE6CD3F9C12B54F_StaticFields
{
public:
	// ES3Types.ES3Type ES3Types.ES3Type_Vector3::Instance
	ES3Type_t8FBECB7AE75168648B9524E0C2A38DAD4555421D * ___Instance_12;

public:
	inline static int32_t get_offset_of_Instance_12() { return static_cast<int32_t>(offsetof(ES3Type_Vector3_tA9144E81A20D2F28726F02DE1AE6CD3F9C12B54F_StaticFields, ___Instance_12)); }
	inline ES3Type_t8FBECB7AE75168648B9524E0C2A38DAD4555421D * get_Instance_12() const { return ___Instance_12; }
	inline ES3Type_t8FBECB7AE75168648B9524E0C2A38DAD4555421D ** get_address_of_Instance_12() { return &___Instance_12; }
	inline void set_Instance_12(ES3Type_t8FBECB7AE75168648B9524E0C2A38DAD4555421D * value)
	{
		___Instance_12 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___Instance_12), (void*)value);
	}
};


// ES3Types.ES3Type_Vector3


// ES3Types.ES3Type_bool

struct ES3Type_bool_t8F309F7B9CC735FF1DEE68081B6E3CAB367745F4_StaticFields
{
public:
	// ES3Types.ES3Type ES3Types.ES3Type_bool::Instance
	ES3Type_t8FBECB7AE75168648B9524E0C2A38DAD4555421D * ___Instance_12;

public:
	inline static int32_t get_offset_of_Instance_12() { return static_cast<int32_t>(offsetof(ES3Type_bool_t8F309F7B9CC735FF1DEE68081B6E3CAB367745F4_StaticFields, ___Instance_12)); }
	inline ES3Type_t8FBECB7AE75168648B9524E0C2A38DAD4555421D * get_Instance_12() const { return ___Instance_12; }
	inline ES3Type_t8FBECB7AE75168648B9524E0C2A38DAD4555421D ** get_address_of_Instance_12() { return &___Instance_12; }
	inline void set_Instance_12(ES3Type_t8FBECB7AE75168648B9524E0C2A38DAD4555421D * value)
	{
		___Instance_12 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___Instance_12), (void*)value);
	}
};


// ES3Types.ES3Type_bool


// ES3Types.ES3Type_float

struct ES3Type_float_tF86B773C86731BD9AD79448B860BBB178FE77644_StaticFields
{
public:
	// ES3Types.ES3Type ES3Types.ES3Type_float::Instance
	ES3Type_t8FBECB7AE75168648B9524E0C2A38DAD4555421D * ___Instance_12;

public:
	inline static int32_t get_offset_of_Instance_12() { return static_cast<int32_t>(offsetof(ES3Type_float_tF86B773C86731BD9AD79448B860BBB178FE77644_StaticFields, ___Instance_12)); }
	inline ES3Type_t8FBECB7AE75168648B9524E0C2A38DAD4555421D * get_Instance_12() const { return ___Instance_12; }
	inline ES3Type_t8FBECB7AE75168648B9524E0C2A38DAD4555421D ** get_address_of_Instance_12() { return &___Instance_12; }
	inline void set_Instance_12(ES3Type_t8FBECB7AE75168648B9524E0C2A38DAD4555421D * value)
	{
		___Instance_12 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___Instance_12), (void*)value);
	}
};


// ES3Types.ES3Type_float


// ES3Types.ES3Type_int

struct ES3Type_int_tF64C15D40AD0CC7C15BCD1CEC3C5C6BF837BD167_StaticFields
{
public:
	// ES3Types.ES3Type ES3Types.ES3Type_int::Instance
	ES3Type_t8FBECB7AE75168648B9524E0C2A38DAD4555421D * ___Instance_12;

public:
	inline static int32_t get_offset_of_Instance_12() { return static_cast<int32_t>(offsetof(ES3Type_int_tF64C15D40AD0CC7C15BCD1CEC3C5C6BF837BD167_StaticFields, ___Instance_12)); }
	inline ES3Type_t8FBECB7AE75168648B9524E0C2A38DAD4555421D * get_Instance_12() const { return ___Instance_12; }
	inline ES3Type_t8FBECB7AE75168648B9524E0C2A38DAD4555421D ** get_address_of_Instance_12() { return &___Instance_12; }
	inline void set_Instance_12(ES3Type_t8FBECB7AE75168648B9524E0C2A38DAD4555421D * value)
	{
		___Instance_12 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___Instance_12), (void*)value);
	}
};


// ES3Types.ES3Type_int


// System.Enum

struct Enum_t23B90B40F60E677A8025267341651C94AE079CDA_StaticFields
{
public:
	// System.Char[] System.Enum::enumSeperatorCharArray
	CharU5BU5D_t7B7FC5BC8091AA3B9CB0B29CDD80B5EE9254AA34* ___enumSeperatorCharArray_0;

public:
	inline static int32_t get_offset_of_enumSeperatorCharArray_0() { return static_cast<int32_t>(offsetof(Enum_t23B90B40F60E677A8025267341651C94AE079CDA_StaticFields, ___enumSeperatorCharArray_0)); }
	inline CharU5BU5D_t7B7FC5BC8091AA3B9CB0B29CDD80B5EE9254AA34* get_enumSeperatorCharArray_0() const { return ___enumSeperatorCharArray_0; }
	inline CharU5BU5D_t7B7FC5BC8091AA3B9CB0B29CDD80B5EE9254AA34** get_address_of_enumSeperatorCharArray_0() { return &___enumSeperatorCharArray_0; }
	inline void set_enumSeperatorCharArray_0(CharU5BU5D_t7B7FC5BC8091AA3B9CB0B29CDD80B5EE9254AA34* value)
	{
		___enumSeperatorCharArray_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___enumSeperatorCharArray_0), (void*)value);
	}
};


// System.Enum


// System.Int32


// System.Int32


// System.IntPtr

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


// System.IntPtr


// System.Single


// System.Single


// System.UInt32


// System.UInt32


// UnityEngine.Vector2

struct Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9_StaticFields
{
public:
	// UnityEngine.Vector2 UnityEngine.Vector2::zeroVector
	Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  ___zeroVector_2;
	// UnityEngine.Vector2 UnityEngine.Vector2::oneVector
	Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  ___oneVector_3;
	// UnityEngine.Vector2 UnityEngine.Vector2::upVector
	Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  ___upVector_4;
	// UnityEngine.Vector2 UnityEngine.Vector2::downVector
	Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  ___downVector_5;
	// UnityEngine.Vector2 UnityEngine.Vector2::leftVector
	Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  ___leftVector_6;
	// UnityEngine.Vector2 UnityEngine.Vector2::rightVector
	Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  ___rightVector_7;
	// UnityEngine.Vector2 UnityEngine.Vector2::positiveInfinityVector
	Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  ___positiveInfinityVector_8;
	// UnityEngine.Vector2 UnityEngine.Vector2::negativeInfinityVector
	Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  ___negativeInfinityVector_9;

public:
	inline static int32_t get_offset_of_zeroVector_2() { return static_cast<int32_t>(offsetof(Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9_StaticFields, ___zeroVector_2)); }
	inline Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  get_zeroVector_2() const { return ___zeroVector_2; }
	inline Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9 * get_address_of_zeroVector_2() { return &___zeroVector_2; }
	inline void set_zeroVector_2(Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  value)
	{
		___zeroVector_2 = value;
	}

	inline static int32_t get_offset_of_oneVector_3() { return static_cast<int32_t>(offsetof(Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9_StaticFields, ___oneVector_3)); }
	inline Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  get_oneVector_3() const { return ___oneVector_3; }
	inline Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9 * get_address_of_oneVector_3() { return &___oneVector_3; }
	inline void set_oneVector_3(Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  value)
	{
		___oneVector_3 = value;
	}

	inline static int32_t get_offset_of_upVector_4() { return static_cast<int32_t>(offsetof(Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9_StaticFields, ___upVector_4)); }
	inline Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  get_upVector_4() const { return ___upVector_4; }
	inline Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9 * get_address_of_upVector_4() { return &___upVector_4; }
	inline void set_upVector_4(Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  value)
	{
		___upVector_4 = value;
	}

	inline static int32_t get_offset_of_downVector_5() { return static_cast<int32_t>(offsetof(Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9_StaticFields, ___downVector_5)); }
	inline Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  get_downVector_5() const { return ___downVector_5; }
	inline Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9 * get_address_of_downVector_5() { return &___downVector_5; }
	inline void set_downVector_5(Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  value)
	{
		___downVector_5 = value;
	}

	inline static int32_t get_offset_of_leftVector_6() { return static_cast<int32_t>(offsetof(Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9_StaticFields, ___leftVector_6)); }
	inline Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  get_leftVector_6() const { return ___leftVector_6; }
	inline Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9 * get_address_of_leftVector_6() { return &___leftVector_6; }
	inline void set_leftVector_6(Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  value)
	{
		___leftVector_6 = value;
	}

	inline static int32_t get_offset_of_rightVector_7() { return static_cast<int32_t>(offsetof(Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9_StaticFields, ___rightVector_7)); }
	inline Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  get_rightVector_7() const { return ___rightVector_7; }
	inline Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9 * get_address_of_rightVector_7() { return &___rightVector_7; }
	inline void set_rightVector_7(Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  value)
	{
		___rightVector_7 = value;
	}

	inline static int32_t get_offset_of_positiveInfinityVector_8() { return static_cast<int32_t>(offsetof(Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9_StaticFields, ___positiveInfinityVector_8)); }
	inline Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  get_positiveInfinityVector_8() const { return ___positiveInfinityVector_8; }
	inline Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9 * get_address_of_positiveInfinityVector_8() { return &___positiveInfinityVector_8; }
	inline void set_positiveInfinityVector_8(Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  value)
	{
		___positiveInfinityVector_8 = value;
	}

	inline static int32_t get_offset_of_negativeInfinityVector_9() { return static_cast<int32_t>(offsetof(Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9_StaticFields, ___negativeInfinityVector_9)); }
	inline Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  get_negativeInfinityVector_9() const { return ___negativeInfinityVector_9; }
	inline Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9 * get_address_of_negativeInfinityVector_9() { return &___negativeInfinityVector_9; }
	inline void set_negativeInfinityVector_9(Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  value)
	{
		___negativeInfinityVector_9 = value;
	}
};


// UnityEngine.Vector2


// UnityEngine.Vector3

struct Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E_StaticFields
{
public:
	// UnityEngine.Vector3 UnityEngine.Vector3::zeroVector
	Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___zeroVector_5;
	// UnityEngine.Vector3 UnityEngine.Vector3::oneVector
	Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___oneVector_6;
	// UnityEngine.Vector3 UnityEngine.Vector3::upVector
	Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___upVector_7;
	// UnityEngine.Vector3 UnityEngine.Vector3::downVector
	Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___downVector_8;
	// UnityEngine.Vector3 UnityEngine.Vector3::leftVector
	Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___leftVector_9;
	// UnityEngine.Vector3 UnityEngine.Vector3::rightVector
	Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___rightVector_10;
	// UnityEngine.Vector3 UnityEngine.Vector3::forwardVector
	Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___forwardVector_11;
	// UnityEngine.Vector3 UnityEngine.Vector3::backVector
	Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___backVector_12;
	// UnityEngine.Vector3 UnityEngine.Vector3::positiveInfinityVector
	Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___positiveInfinityVector_13;
	// UnityEngine.Vector3 UnityEngine.Vector3::negativeInfinityVector
	Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___negativeInfinityVector_14;

public:
	inline static int32_t get_offset_of_zeroVector_5() { return static_cast<int32_t>(offsetof(Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E_StaticFields, ___zeroVector_5)); }
	inline Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  get_zeroVector_5() const { return ___zeroVector_5; }
	inline Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E * get_address_of_zeroVector_5() { return &___zeroVector_5; }
	inline void set_zeroVector_5(Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  value)
	{
		___zeroVector_5 = value;
	}

	inline static int32_t get_offset_of_oneVector_6() { return static_cast<int32_t>(offsetof(Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E_StaticFields, ___oneVector_6)); }
	inline Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  get_oneVector_6() const { return ___oneVector_6; }
	inline Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E * get_address_of_oneVector_6() { return &___oneVector_6; }
	inline void set_oneVector_6(Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  value)
	{
		___oneVector_6 = value;
	}

	inline static int32_t get_offset_of_upVector_7() { return static_cast<int32_t>(offsetof(Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E_StaticFields, ___upVector_7)); }
	inline Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  get_upVector_7() const { return ___upVector_7; }
	inline Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E * get_address_of_upVector_7() { return &___upVector_7; }
	inline void set_upVector_7(Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  value)
	{
		___upVector_7 = value;
	}

	inline static int32_t get_offset_of_downVector_8() { return static_cast<int32_t>(offsetof(Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E_StaticFields, ___downVector_8)); }
	inline Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  get_downVector_8() const { return ___downVector_8; }
	inline Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E * get_address_of_downVector_8() { return &___downVector_8; }
	inline void set_downVector_8(Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  value)
	{
		___downVector_8 = value;
	}

	inline static int32_t get_offset_of_leftVector_9() { return static_cast<int32_t>(offsetof(Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E_StaticFields, ___leftVector_9)); }
	inline Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  get_leftVector_9() const { return ___leftVector_9; }
	inline Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E * get_address_of_leftVector_9() { return &___leftVector_9; }
	inline void set_leftVector_9(Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  value)
	{
		___leftVector_9 = value;
	}

	inline static int32_t get_offset_of_rightVector_10() { return static_cast<int32_t>(offsetof(Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E_StaticFields, ___rightVector_10)); }
	inline Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  get_rightVector_10() const { return ___rightVector_10; }
	inline Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E * get_address_of_rightVector_10() { return &___rightVector_10; }
	inline void set_rightVector_10(Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  value)
	{
		___rightVector_10 = value;
	}

	inline static int32_t get_offset_of_forwardVector_11() { return static_cast<int32_t>(offsetof(Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E_StaticFields, ___forwardVector_11)); }
	inline Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  get_forwardVector_11() const { return ___forwardVector_11; }
	inline Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E * get_address_of_forwardVector_11() { return &___forwardVector_11; }
	inline void set_forwardVector_11(Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  value)
	{
		___forwardVector_11 = value;
	}

	inline static int32_t get_offset_of_backVector_12() { return static_cast<int32_t>(offsetof(Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E_StaticFields, ___backVector_12)); }
	inline Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  get_backVector_12() const { return ___backVector_12; }
	inline Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E * get_address_of_backVector_12() { return &___backVector_12; }
	inline void set_backVector_12(Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  value)
	{
		___backVector_12 = value;
	}

	inline static int32_t get_offset_of_positiveInfinityVector_13() { return static_cast<int32_t>(offsetof(Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E_StaticFields, ___positiveInfinityVector_13)); }
	inline Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  get_positiveInfinityVector_13() const { return ___positiveInfinityVector_13; }
	inline Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E * get_address_of_positiveInfinityVector_13() { return &___positiveInfinityVector_13; }
	inline void set_positiveInfinityVector_13(Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  value)
	{
		___positiveInfinityVector_13 = value;
	}

	inline static int32_t get_offset_of_negativeInfinityVector_14() { return static_cast<int32_t>(offsetof(Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E_StaticFields, ___negativeInfinityVector_14)); }
	inline Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  get_negativeInfinityVector_14() const { return ___negativeInfinityVector_14; }
	inline Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E * get_address_of_negativeInfinityVector_14() { return &___negativeInfinityVector_14; }
	inline void set_negativeInfinityVector_14(Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  value)
	{
		___negativeInfinityVector_14 = value;
	}
};


// UnityEngine.Vector3


// System.Void


// System.Void


// UnityEngine.ParticleSystem/ShapeModule


// UnityEngine.ParticleSystem/ShapeModule


// UnityEngine.ParticleSystem/SizeBySpeedModule


// UnityEngine.ParticleSystem/SizeBySpeedModule


// UnityEngine.Object

struct Object_tF2F3778131EFF286AF62B7B013A170F95A91571A_StaticFields
{
public:
	// System.Int32 UnityEngine.Object::OffsetOfInstanceIDInCPlusPlusObject
	int32_t ___OffsetOfInstanceIDInCPlusPlusObject_1;

public:
	inline static int32_t get_offset_of_OffsetOfInstanceIDInCPlusPlusObject_1() { return static_cast<int32_t>(offsetof(Object_tF2F3778131EFF286AF62B7B013A170F95A91571A_StaticFields, ___OffsetOfInstanceIDInCPlusPlusObject_1)); }
	inline int32_t get_OffsetOfInstanceIDInCPlusPlusObject_1() const { return ___OffsetOfInstanceIDInCPlusPlusObject_1; }
	inline int32_t* get_address_of_OffsetOfInstanceIDInCPlusPlusObject_1() { return &___OffsetOfInstanceIDInCPlusPlusObject_1; }
	inline void set_OffsetOfInstanceIDInCPlusPlusObject_1(int32_t value)
	{
		___OffsetOfInstanceIDInCPlusPlusObject_1 = value;
	}
};


// UnityEngine.Object


// UnityEngine.ParticleSystemCurveMode


// UnityEngine.ParticleSystemCurveMode


// UnityEngine.ParticleSystemMeshShapeType


// UnityEngine.ParticleSystemMeshShapeType


// UnityEngine.ParticleSystemShapeType


// UnityEngine.ParticleSystemShapeType


// UnityEngine.Component


// UnityEngine.Component


// UnityEngine.Mesh


// UnityEngine.Mesh


// UnityEngine.ParticleSystem/MinMaxCurve


// UnityEngine.ParticleSystem/MinMaxCurve


// UnityEngine.Renderer


// UnityEngine.Renderer


// UnityEngine.MeshRenderer


// UnityEngine.MeshRenderer


// UnityEngine.SkinnedMeshRenderer


// UnityEngine.SkinnedMeshRenderer

#ifdef __clang__
#pragma clang diagnostic pop
#endif



// System.UInt32 <PrivateImplementationDetails>::ComputeStringHash(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR uint32_t U3CPrivateImplementationDetailsU3E_ComputeStringHash_m3ADC1F612F9EE3DD518E6F0023A0DE0EE2B120A7 (String_t* ___s0, const RuntimeMethod* method);
// System.Boolean System.String::op_Equality(System.String,System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool String_op_Equality_m50B3548E4AC232558190B0052877B290AA1D436A (String_t* ___a0, String_t* ___b1, const RuntimeMethod* method);
// System.Void UnityEngine.ParticleSystem/ShapeModule::set_enabled(System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ShapeModule_set_enabled_mF6FE8ED99E482A739C00F894235F4E2CD09B0D1E (ShapeModule_t3A89D143F5CAF357ECCE8B4A4F2BBD57816F98CA * __this, bool ___value0, const RuntimeMethod* method);
// System.Void UnityEngine.ParticleSystem/ShapeModule::set_shapeType(UnityEngine.ParticleSystemShapeType)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ShapeModule_set_shapeType_mB772084527742749EB6AD690BAE47215FC71040D (ShapeModule_t3A89D143F5CAF357ECCE8B4A4F2BBD57816F98CA * __this, int32_t ___value0, const RuntimeMethod* method);
// System.Void UnityEngine.ParticleSystem/ShapeModule::set_randomDirectionAmount(System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ShapeModule_set_randomDirectionAmount_m4E1BB67600D57383945F75F5A179EEEC01A76885 (ShapeModule_t3A89D143F5CAF357ECCE8B4A4F2BBD57816F98CA * __this, float ___value0, const RuntimeMethod* method);
// System.Void UnityEngine.ParticleSystem/ShapeModule::set_sphericalDirectionAmount(System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ShapeModule_set_sphericalDirectionAmount_m02A9FBFF18AF24B821801DF5D833CA20A569F62B (ShapeModule_t3A89D143F5CAF357ECCE8B4A4F2BBD57816F98CA * __this, float ___value0, const RuntimeMethod* method);
// System.Void UnityEngine.ParticleSystem/ShapeModule::set_alignToDirection(System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ShapeModule_set_alignToDirection_m396A57DCAD5F194E4DDDA0DF9C35E5508E3641BE (ShapeModule_t3A89D143F5CAF357ECCE8B4A4F2BBD57816F98CA * __this, bool ___value0, const RuntimeMethod* method);
// System.Void UnityEngine.ParticleSystem/ShapeModule::set_radius(System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ShapeModule_set_radius_mFC12B15750268316924771461C09B1A311A16DEA (ShapeModule_t3A89D143F5CAF357ECCE8B4A4F2BBD57816F98CA * __this, float ___value0, const RuntimeMethod* method);
// System.Void UnityEngine.ParticleSystem/ShapeModule::set_angle(System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ShapeModule_set_angle_m20629BB5FE89F2040960548B45F6EC801B1DB8AA (ShapeModule_t3A89D143F5CAF357ECCE8B4A4F2BBD57816F98CA * __this, float ___value0, const RuntimeMethod* method);
// System.Void UnityEngine.ParticleSystem/ShapeModule::set_length(System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ShapeModule_set_length_m744975258664B53F38A8B8BE38A86A0FFDD85BC7 (ShapeModule_t3A89D143F5CAF357ECCE8B4A4F2BBD57816F98CA * __this, float ___value0, const RuntimeMethod* method);
// System.Void UnityEngine.ParticleSystem/ShapeModule::set_scale(UnityEngine.Vector3)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ShapeModule_set_scale_m2951583898F18878E6F238100045072F44AD9158 (ShapeModule_t3A89D143F5CAF357ECCE8B4A4F2BBD57816F98CA * __this, Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___value0, const RuntimeMethod* method);
// System.Void UnityEngine.ParticleSystem/ShapeModule::set_meshShapeType(UnityEngine.ParticleSystemMeshShapeType)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ShapeModule_set_meshShapeType_m5DAD94B71F2110F45E454C30DE052153129891C2 (ShapeModule_t3A89D143F5CAF357ECCE8B4A4F2BBD57816F98CA * __this, int32_t ___value0, const RuntimeMethod* method);
// System.Void UnityEngine.ParticleSystem/ShapeModule::set_mesh(UnityEngine.Mesh)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ShapeModule_set_mesh_mD3E276A9E45442E75AD8A9AA4BD88C9112BD77CA (ShapeModule_t3A89D143F5CAF357ECCE8B4A4F2BBD57816F98CA * __this, Mesh_t2F5992DBA650D5862B43D3823ACD997132A57DA6 * ___value0, const RuntimeMethod* method);
// System.Void UnityEngine.ParticleSystem/ShapeModule::set_meshRenderer(UnityEngine.MeshRenderer)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ShapeModule_set_meshRenderer_m334D69AC8C29F5E393732D62BBB3645296614059 (ShapeModule_t3A89D143F5CAF357ECCE8B4A4F2BBD57816F98CA * __this, MeshRenderer_tCD983A2F635E12BCB0BAA2E635D96A318757908B * ___value0, const RuntimeMethod* method);
// System.Void UnityEngine.ParticleSystem/ShapeModule::set_skinnedMeshRenderer(UnityEngine.SkinnedMeshRenderer)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ShapeModule_set_skinnedMeshRenderer_m9DEF9CD332D3F10BE7D99EFECC0971FB5AE83F56 (ShapeModule_t3A89D143F5CAF357ECCE8B4A4F2BBD57816F98CA * __this, SkinnedMeshRenderer_t126F4D6010E0F4B2685A7817B0A9171805D8F496 * ___value0, const RuntimeMethod* method);
// System.Void UnityEngine.ParticleSystem/ShapeModule::set_useMeshMaterialIndex(System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ShapeModule_set_useMeshMaterialIndex_m6130573C0966ED3B5C590665747305BCEFD3F901 (ShapeModule_t3A89D143F5CAF357ECCE8B4A4F2BBD57816F98CA * __this, bool ___value0, const RuntimeMethod* method);
// System.Void UnityEngine.ParticleSystem/ShapeModule::set_meshMaterialIndex(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ShapeModule_set_meshMaterialIndex_m1205DDEB353204D5941654FB79164AD5BAF0A59C (ShapeModule_t3A89D143F5CAF357ECCE8B4A4F2BBD57816F98CA * __this, int32_t ___value0, const RuntimeMethod* method);
// System.Void UnityEngine.ParticleSystem/ShapeModule::set_useMeshColors(System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ShapeModule_set_useMeshColors_m071D000F330805B1EBCF09B40AC4EB9942EB9F57 (ShapeModule_t3A89D143F5CAF357ECCE8B4A4F2BBD57816F98CA * __this, bool ___value0, const RuntimeMethod* method);
// System.Void UnityEngine.ParticleSystem/ShapeModule::set_normalOffset(System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ShapeModule_set_normalOffset_m81A315286BAA5F52AAED6B317734FB03B2DCE9FD (ShapeModule_t3A89D143F5CAF357ECCE8B4A4F2BBD57816F98CA * __this, float ___value0, const RuntimeMethod* method);
// System.Void UnityEngine.ParticleSystem/ShapeModule::set_arc(System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ShapeModule_set_arc_m4A2578EBD4747DB3D9ED74AB53E488872CFA541F (ShapeModule_t3A89D143F5CAF357ECCE8B4A4F2BBD57816F98CA * __this, float ___value0, const RuntimeMethod* method);
// System.Void UnityEngine.ParticleSystem/SizeBySpeedModule::set_enabled(System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SizeBySpeedModule_set_enabled_m0CC5D81593E6D047B2B150041577EC93D3C7701C (SizeBySpeedModule_t156070A63E0A483D36BCAE783BA554CDA7CAF752 * __this, bool ___value0, const RuntimeMethod* method);
// System.Void UnityEngine.ParticleSystem/SizeBySpeedModule::set_size(UnityEngine.ParticleSystem/MinMaxCurve)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SizeBySpeedModule_set_size_mB0D87FAEF26DF701E303C3D480E83465AE600D12 (SizeBySpeedModule_t156070A63E0A483D36BCAE783BA554CDA7CAF752 * __this, MinMaxCurve_tF036239442AB2D438B1EDABEBC785426871084CD  ___value0, const RuntimeMethod* method);
// System.Void UnityEngine.ParticleSystem/SizeBySpeedModule::set_sizeMultiplier(System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SizeBySpeedModule_set_sizeMultiplier_m6087A72CA424D9F258632500EFA8BA9FB71F6141 (SizeBySpeedModule_t156070A63E0A483D36BCAE783BA554CDA7CAF752 * __this, float ___value0, const RuntimeMethod* method);
// System.Void UnityEngine.ParticleSystem/SizeBySpeedModule::set_x(UnityEngine.ParticleSystem/MinMaxCurve)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SizeBySpeedModule_set_x_mFFD1FB55668F9C02B2AB87D861F028E57EE81E7B (SizeBySpeedModule_t156070A63E0A483D36BCAE783BA554CDA7CAF752 * __this, MinMaxCurve_tF036239442AB2D438B1EDABEBC785426871084CD  ___value0, const RuntimeMethod* method);
// System.Void UnityEngine.ParticleSystem/SizeBySpeedModule::set_xMultiplier(System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SizeBySpeedModule_set_xMultiplier_m20E2174791982BB87D08217F71EA925022A1B0CC (SizeBySpeedModule_t156070A63E0A483D36BCAE783BA554CDA7CAF752 * __this, float ___value0, const RuntimeMethod* method);
// System.Void UnityEngine.ParticleSystem/SizeBySpeedModule::set_y(UnityEngine.ParticleSystem/MinMaxCurve)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SizeBySpeedModule_set_y_m87016AA5C7B16879AB922CE07FCCF94E3683671F (SizeBySpeedModule_t156070A63E0A483D36BCAE783BA554CDA7CAF752 * __this, MinMaxCurve_tF036239442AB2D438B1EDABEBC785426871084CD  ___value0, const RuntimeMethod* method);
// System.Void UnityEngine.ParticleSystem/SizeBySpeedModule::set_yMultiplier(System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SizeBySpeedModule_set_yMultiplier_m16CEB10FE778D443B34EC516FD08191E74CB5CE3 (SizeBySpeedModule_t156070A63E0A483D36BCAE783BA554CDA7CAF752 * __this, float ___value0, const RuntimeMethod* method);
// System.Void UnityEngine.ParticleSystem/SizeBySpeedModule::set_z(UnityEngine.ParticleSystem/MinMaxCurve)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SizeBySpeedModule_set_z_m789F392BAE1FFE10F22445F0A89FE4905AD48E13 (SizeBySpeedModule_t156070A63E0A483D36BCAE783BA554CDA7CAF752 * __this, MinMaxCurve_tF036239442AB2D438B1EDABEBC785426871084CD  ___value0, const RuntimeMethod* method);
// System.Void UnityEngine.ParticleSystem/SizeBySpeedModule::set_zMultiplier(System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SizeBySpeedModule_set_zMultiplier_m3CDE48B31D0AA2BDD554D6FB39509E32D3B3540F (SizeBySpeedModule_t156070A63E0A483D36BCAE783BA554CDA7CAF752 * __this, float ___value0, const RuntimeMethod* method);
// System.Void UnityEngine.ParticleSystem/SizeBySpeedModule::set_separateAxes(System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SizeBySpeedModule_set_separateAxes_mF8B0B99BA3B98D6A8578B70EA19DFB271657FD8F (SizeBySpeedModule_t156070A63E0A483D36BCAE783BA554CDA7CAF752 * __this, bool ___value0, const RuntimeMethod* method);
// System.Void UnityEngine.ParticleSystem/SizeBySpeedModule::set_range(UnityEngine.Vector2)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SizeBySpeedModule_set_range_mDF4151A1FBDEB5417C8B481907AE58C969F5167D (SizeBySpeedModule_t156070A63E0A483D36BCAE783BA554CDA7CAF752 * __this, Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  ___value0, const RuntimeMethod* method);
// System.Void ES3Types.ES3Type_ShapeModule::ReadInto<UnityEngine.ParticleSystem/EmissionModule>(ES3Reader,System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ES3Type_ShapeModule_ReadInto_TisEmissionModule_tE778D94F4003A96ECE3D8B670DDEDD2D557DE52D_m4C8A0407C5BDE12E39F9CF8AF312D5FF49433C34_gshared (ES3Type_ShapeModule_t67010A74D4F69A245D5F06976239CAB4279B5377 * __this, ES3Reader_t2780AF8AA61DA2A817115CEF8612AC0E494D03C9 * ___reader0, RuntimeObject * ___obj1, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ES3Reader_Read_TisBoolean_t07D1E3F34E4813023D64F584DFF7B34C9D922F37_mC6D1B158268FF9B97822FF9F5B37FB1723FEDA22_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ES3Reader_Read_TisInt32_tFDE5F8CD43D10453F6A2E0C77FE48C6CC7009046_m2B74AA6627F5B1D21171D56C42F71DE5A7C1B4A6_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ES3Reader_Read_TisMeshRenderer_tCD983A2F635E12BCB0BAA2E635D96A318757908B_m773CE5481730EBCC6A377F918946EB11B304050A_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ES3Reader_Read_TisMesh_t2F5992DBA650D5862B43D3823ACD997132A57DA6_m65DF5BA41642A39B77979CC49472E4DE7A1660F9_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ES3Reader_Read_TisParticleSystemMeshShapeType_t7C9518403F30CC7AF7F9124FD61EC1187B42EFD2_mF1A19C0F8BBA6E44737F158F3BE4CC478F623F10_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ES3Reader_Read_TisParticleSystemShapeType_t5B09F3A5A637F57DB1B2A6518E214AA2AA53D70C_mAE53212CB1FDDA51CF8CD0D39FCD446087DACA48_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ES3Reader_Read_TisSingle_tE07797BA3C98D4CA9B5A19413C19A76688AB899E_m4A0416374498BDA042B8EB21E49B72326D6CE5F4_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ES3Reader_Read_TisSkinnedMeshRenderer_t126F4D6010E0F4B2685A7817B0A9171805D8F496_m23D6569D5CE7B3E1C67BDB470CDEDEF25A835F25_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ES3Reader_Read_TisVector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E_mBA4CD9D0F45E78BA43FE2DB8EC33CC3A5433DE15_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ES3Type_Vector3_tA9144E81A20D2F28726F02DE1AE6CD3F9C12B54F_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ES3Type_bool_t8F309F7B9CC735FF1DEE68081B6E3CAB367745F4_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ES3Type_float_tF86B773C86731BD9AD79448B860BBB178FE77644_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ES3Type_int_tF64C15D40AD0CC7C15BCD1CEC3C5C6BF837BD167_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ShapeModule_t3A89D143F5CAF357ECCE8B4A4F2BBD57816F98CA_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral01837E2252AC8026A5EA3567A663017A662FBB70);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral1228466552C1791B2019A329AFE94665D441168A);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral60E56797D122AE71D3774956F66C6EEB9EA22C05);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral6686C366F645244186604A3DA4B9A58012A85F1B);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral82BECCAD895076775062861CDB46AADEF913D969);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral8C9F18A4F030B96447955FBBA1A99FFC43B5D8E0);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral8E54BB51E569CB6A8D3C45D8AEF883A1559C1C0E);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral91811EE149061D28B38320E2430CE8888AD6398B);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralBD49F93A7BC78A69E385CEC0E78F434BD2845A17);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralCA1B66E295BD92E9FD3B6C708F09CA69A50BEFD1);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralE8744A8B8BD390EB66CA0CAE2376C973E6904FFB);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralEB0A157666700D8227FD4B66A26FDC02035E89BF);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralED1F119527A0BCA45125EF8E0F719985DA86C0E1);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralF66E9083C67855AB6EBB4B74342E385A72AACE32);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralF9BE17D634D1B07BCDCDA77A87710C946D81307B);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralF9D225733E1D10F9344C755C4A9C0870CD1DE97B);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralFA5EC7168E9633DAAEAA255ECB55030EA60F064F);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralFC341A1966AF28A9A7A26EDFB78ABBF7DE4D0E1F);
		s_Il2CppMethodInitialized = true;
	}
	ShapeModule_t3A89D143F5CAF357ECCE8B4A4F2BBD57816F98CA  V_0;
	memset((&V_0), 0, sizeof(V_0));
	String_t* V_1 = NULL;
	uint32_t V_2 = 0;
	{
		// var instance = (UnityEngine.ParticleSystem.ShapeModule)obj;
		RuntimeObject * L_0 = ___obj1;
		V_0 = (ShapeModule_t3A89D143F5CAF357ECCE8B4A4F2BBD57816F98CA )((*(ShapeModule_t3A89D143F5CAF357ECCE8B4A4F2BBD57816F98CA *)((ShapeModule_t3A89D143F5CAF357ECCE8B4A4F2BBD57816F98CA *)UnBox(L_0, ShapeModule_t3A89D143F5CAF357ECCE8B4A4F2BBD57816F98CA_il2cpp_TypeInfo_var))));
		goto IL_042c;
	}

IL_000c:
	{
		String_t* L_1 = V_1;
		if (!L_1)
		{
			goto IL_0426;
		}
	}
	{
		String_t* L_2 = V_1;
		uint32_t L_3;
		L_3 = U3CPrivateImplementationDetailsU3E_ComputeStringHash_m3ADC1F612F9EE3DD518E6F0023A0DE0EE2B120A7((String_t*)L_2, /*hidden argument*/NULL);
		V_2 = (uint32_t)L_3;
		uint32_t L_4 = V_2;
		if ((!(((uint32_t)L_4) <= ((uint32_t)((int32_t)-2104025999)))))
		{
			goto IL_00b3;
		}
	}
	{
		uint32_t L_5 = V_2;
		if ((!(((uint32_t)L_5) <= ((uint32_t)((int32_t)666576729)))))
		{
			goto IL_006a;
		}
	}
	{
		uint32_t L_6 = V_2;
		if ((!(((uint32_t)L_6) <= ((uint32_t)((int32_t)49525662)))))
		{
			goto IL_004f;
		}
	}
	{
		uint32_t L_7 = V_2;
		if ((((int32_t)L_7) == ((int32_t)((int32_t)24602224))))
		{
			goto IL_024d;
		}
	}
	{
		uint32_t L_8 = V_2;
		if ((((int32_t)L_8) == ((int32_t)((int32_t)49525662))))
		{
			goto IL_013c;
		}
	}
	{
		goto IL_0426;
	}

IL_004f:
	{
		uint32_t L_9 = V_2;
		if ((((int32_t)L_9) == ((int32_t)((int32_t)230313139))))
		{
			goto IL_01a5;
		}
	}
	{
		uint32_t L_10 = V_2;
		if ((((int32_t)L_10) == ((int32_t)((int32_t)666576729))))
		{
			goto IL_01f9;
		}
	}
	{
		goto IL_0426;
	}

IL_006a:
	{
		uint32_t L_11 = V_2;
		if ((!(((uint32_t)L_11) <= ((uint32_t)((int32_t)955488309)))))
		{
			goto IL_008d;
		}
	}
	{
		uint32_t L_12 = V_2;
		if ((((int32_t)L_12) == ((int32_t)((int32_t)923624301))))
		{
			goto IL_0238;
		}
	}
	{
		uint32_t L_13 = V_2;
		if ((((int32_t)L_13) == ((int32_t)((int32_t)955488309))))
		{
			goto IL_028c;
		}
	}
	{
		goto IL_0426;
	}

IL_008d:
	{
		uint32_t L_14 = V_2;
		if ((((int32_t)L_14) == ((int32_t)((int32_t)980363995))))
		{
			goto IL_02a1;
		}
	}
	{
		uint32_t L_15 = V_2;
		if ((((int32_t)L_15) == ((int32_t)((int32_t)985988853))))
		{
			goto IL_017b;
		}
	}
	{
		uint32_t L_16 = V_2;
		if ((((int32_t)L_16) == ((int32_t)((int32_t)-2104025999))))
		{
			goto IL_01e4;
		}
	}
	{
		goto IL_0426;
	}

IL_00b3:
	{
		uint32_t L_17 = V_2;
		if ((!(((uint32_t)L_17) <= ((uint32_t)((int32_t)-1473810612)))))
		{
			goto IL_00f6;
		}
	}
	{
		uint32_t L_18 = V_2;
		if ((!(((uint32_t)L_18) <= ((uint32_t)((int32_t)-1726928010)))))
		{
			goto IL_00db;
		}
	}
	{
		uint32_t L_19 = V_2;
		if ((((int32_t)L_19) == ((int32_t)((int32_t)-2083506667))))
		{
			goto IL_01cf;
		}
	}
	{
		uint32_t L_20 = V_2;
		if ((((int32_t)L_20) == ((int32_t)((int32_t)-1726928010))))
		{
			goto IL_0151;
		}
	}
	{
		goto IL_0426;
	}

IL_00db:
	{
		uint32_t L_21 = V_2;
		if ((((int32_t)L_21) == ((int32_t)((int32_t)-1593786692))))
		{
			goto IL_020e;
		}
	}
	{
		uint32_t L_22 = V_2;
		if ((((int32_t)L_22) == ((int32_t)((int32_t)-1473810612))))
		{
			goto IL_0190;
		}
	}
	{
		goto IL_0426;
	}

IL_00f6:
	{
		uint32_t L_23 = V_2;
		if ((!(((uint32_t)L_23) <= ((uint32_t)((int32_t)-1386986472)))))
		{
			goto IL_0116;
		}
	}
	{
		uint32_t L_24 = V_2;
		if ((((int32_t)L_24) == ((int32_t)((int32_t)-1412039661))))
		{
			goto IL_0166;
		}
	}
	{
		uint32_t L_25 = V_2;
		if ((((int32_t)L_25) == ((int32_t)((int32_t)-1386986472))))
		{
			goto IL_01ba;
		}
	}
	{
		goto IL_0426;
	}

IL_0116:
	{
		uint32_t L_26 = V_2;
		if ((((int32_t)L_26) == ((int32_t)((int32_t)-584064197))))
		{
			goto IL_0223;
		}
	}
	{
		uint32_t L_27 = V_2;
		if ((((int32_t)L_27) == ((int32_t)((int32_t)-473474755))))
		{
			goto IL_0277;
		}
	}
	{
		uint32_t L_28 = V_2;
		if ((((int32_t)L_28) == ((int32_t)((int32_t)-365686981))))
		{
			goto IL_0262;
		}
	}
	{
		goto IL_0426;
	}

IL_013c:
	{
		String_t* L_29 = V_1;
		bool L_30;
		L_30 = String_op_Equality_m50B3548E4AC232558190B0052877B290AA1D436A((String_t*)L_29, (String_t*)_stringLiteralF9D225733E1D10F9344C755C4A9C0870CD1DE97B, /*hidden argument*/NULL);
		if (L_30)
		{
			goto IL_02b6;
		}
	}
	{
		goto IL_0426;
	}

IL_0151:
	{
		String_t* L_31 = V_1;
		bool L_32;
		L_32 = String_op_Equality_m50B3548E4AC232558190B0052877B290AA1D436A((String_t*)L_31, (String_t*)_stringLiteral82BECCAD895076775062861CDB46AADEF913D969, /*hidden argument*/NULL);
		if (L_32)
		{
			goto IL_02cd;
		}
	}
	{
		goto IL_0426;
	}

IL_0166:
	{
		String_t* L_33 = V_1;
		bool L_34;
		L_34 = String_op_Equality_m50B3548E4AC232558190B0052877B290AA1D436A((String_t*)L_33, (String_t*)_stringLiteral1228466552C1791B2019A329AFE94665D441168A, /*hidden argument*/NULL);
		if (L_34)
		{
			goto IL_02df;
		}
	}
	{
		goto IL_0426;
	}

IL_017b:
	{
		String_t* L_35 = V_1;
		bool L_36;
		L_36 = String_op_Equality_m50B3548E4AC232558190B0052877B290AA1D436A((String_t*)L_35, (String_t*)_stringLiteralBD49F93A7BC78A69E385CEC0E78F434BD2845A17, /*hidden argument*/NULL);
		if (L_36)
		{
			goto IL_02f6;
		}
	}
	{
		goto IL_0426;
	}

IL_0190:
	{
		String_t* L_37 = V_1;
		bool L_38;
		L_38 = String_op_Equality_m50B3548E4AC232558190B0052877B290AA1D436A((String_t*)L_37, (String_t*)_stringLiteralED1F119527A0BCA45125EF8E0F719985DA86C0E1, /*hidden argument*/NULL);
		if (L_38)
		{
			goto IL_030d;
		}
	}
	{
		goto IL_0426;
	}

IL_01a5:
	{
		String_t* L_39 = V_1;
		bool L_40;
		L_40 = String_op_Equality_m50B3548E4AC232558190B0052877B290AA1D436A((String_t*)L_39, (String_t*)_stringLiteral8C9F18A4F030B96447955FBBA1A99FFC43B5D8E0, /*hidden argument*/NULL);
		if (L_40)
		{
			goto IL_0324;
		}
	}
	{
		goto IL_0426;
	}

IL_01ba:
	{
		String_t* L_41 = V_1;
		bool L_42;
		L_42 = String_op_Equality_m50B3548E4AC232558190B0052877B290AA1D436A((String_t*)L_41, (String_t*)_stringLiteralFC341A1966AF28A9A7A26EDFB78ABBF7DE4D0E1F, /*hidden argument*/NULL);
		if (L_42)
		{
			goto IL_033b;
		}
	}
	{
		goto IL_0426;
	}

IL_01cf:
	{
		String_t* L_43 = V_1;
		bool L_44;
		L_44 = String_op_Equality_m50B3548E4AC232558190B0052877B290AA1D436A((String_t*)L_43, (String_t*)_stringLiteralE8744A8B8BD390EB66CA0CAE2376C973E6904FFB, /*hidden argument*/NULL);
		if (L_44)
		{
			goto IL_0352;
		}
	}
	{
		goto IL_0426;
	}

IL_01e4:
	{
		String_t* L_45 = V_1;
		bool L_46;
		L_46 = String_op_Equality_m50B3548E4AC232558190B0052877B290AA1D436A((String_t*)L_45, (String_t*)_stringLiteralF9BE17D634D1B07BCDCDA77A87710C946D81307B, /*hidden argument*/NULL);
		if (L_46)
		{
			goto IL_0369;
		}
	}
	{
		goto IL_0426;
	}

IL_01f9:
	{
		String_t* L_47 = V_1;
		bool L_48;
		L_48 = String_op_Equality_m50B3548E4AC232558190B0052877B290AA1D436A((String_t*)L_47, (String_t*)_stringLiteralFA5EC7168E9633DAAEAA255ECB55030EA60F064F, /*hidden argument*/NULL);
		if (L_48)
		{
			goto IL_0380;
		}
	}
	{
		goto IL_0426;
	}

IL_020e:
	{
		String_t* L_49 = V_1;
		bool L_50;
		L_50 = String_op_Equality_m50B3548E4AC232558190B0052877B290AA1D436A((String_t*)L_49, (String_t*)_stringLiteralEB0A157666700D8227FD4B66A26FDC02035E89BF, /*hidden argument*/NULL);
		if (L_50)
		{
			goto IL_0392;
		}
	}
	{
		goto IL_0426;
	}

IL_0223:
	{
		String_t* L_51 = V_1;
		bool L_52;
		L_52 = String_op_Equality_m50B3548E4AC232558190B0052877B290AA1D436A((String_t*)L_51, (String_t*)_stringLiteral8E54BB51E569CB6A8D3C45D8AEF883A1559C1C0E, /*hidden argument*/NULL);
		if (L_52)
		{
			goto IL_03a4;
		}
	}
	{
		goto IL_0426;
	}

IL_0238:
	{
		String_t* L_53 = V_1;
		bool L_54;
		L_54 = String_op_Equality_m50B3548E4AC232558190B0052877B290AA1D436A((String_t*)L_53, (String_t*)_stringLiteral60E56797D122AE71D3774956F66C6EEB9EA22C05, /*hidden argument*/NULL);
		if (L_54)
		{
			goto IL_03b3;
		}
	}
	{
		goto IL_0426;
	}

IL_024d:
	{
		String_t* L_55 = V_1;
		bool L_56;
		L_56 = String_op_Equality_m50B3548E4AC232558190B0052877B290AA1D436A((String_t*)L_55, (String_t*)_stringLiteral01837E2252AC8026A5EA3567A663017A662FBB70, /*hidden argument*/NULL);
		if (L_56)
		{
			goto IL_03c2;
		}
	}
	{
		goto IL_0426;
	}

IL_0262:
	{
		String_t* L_57 = V_1;
		bool L_58;
		L_58 = String_op_Equality_m50B3548E4AC232558190B0052877B290AA1D436A((String_t*)L_57, (String_t*)_stringLiteralF66E9083C67855AB6EBB4B74342E385A72AACE32, /*hidden argument*/NULL);
		if (L_58)
		{
			goto IL_03d6;
		}
	}
	{
		goto IL_0426;
	}

IL_0277:
	{
		String_t* L_59 = V_1;
		bool L_60;
		L_60 = String_op_Equality_m50B3548E4AC232558190B0052877B290AA1D436A((String_t*)L_59, (String_t*)_stringLiteral91811EE149061D28B38320E2430CE8888AD6398B, /*hidden argument*/NULL);
		if (L_60)
		{
			goto IL_03ea;
		}
	}
	{
		goto IL_0426;
	}

IL_028c:
	{
		String_t* L_61 = V_1;
		bool L_62;
		L_62 = String_op_Equality_m50B3548E4AC232558190B0052877B290AA1D436A((String_t*)L_61, (String_t*)_stringLiteral6686C366F645244186604A3DA4B9A58012A85F1B, /*hidden argument*/NULL);
		if (L_62)
		{
			goto IL_03fe;
		}
	}
	{
		goto IL_0426;
	}

IL_02a1:
	{
		String_t* L_63 = V_1;
		bool L_64;
		L_64 = String_op_Equality_m50B3548E4AC232558190B0052877B290AA1D436A((String_t*)L_63, (String_t*)_stringLiteralCA1B66E295BD92E9FD3B6C708F09CA69A50BEFD1, /*hidden argument*/NULL);
		if (L_64)
		{
			goto IL_0412;
		}
	}
	{
		goto IL_0426;
	}

IL_02b6:
	{
		// instance.enabled = reader.Read<System.Boolean>(ES3Type_bool.Instance);
		ES3Reader_t2780AF8AA61DA2A817115CEF8612AC0E494D03C9 * L_65 = ___reader0;
		IL2CPP_RUNTIME_CLASS_INIT(ES3Type_bool_t8F309F7B9CC735FF1DEE68081B6E3CAB367745F4_il2cpp_TypeInfo_var);
		ES3Type_t8FBECB7AE75168648B9524E0C2A38DAD4555421D * L_66 = ((ES3Type_bool_t8F309F7B9CC735FF1DEE68081B6E3CAB367745F4_StaticFields*)il2cpp_codegen_static_fields_for(ES3Type_bool_t8F309F7B9CC735FF1DEE68081B6E3CAB367745F4_il2cpp_TypeInfo_var))->get_Instance_12();
		NullCheck((ES3Reader_t2780AF8AA61DA2A817115CEF8612AC0E494D03C9 *)L_65);
		bool L_67;
		L_67 = GenericVirtFuncInvoker1< bool, ES3Type_t8FBECB7AE75168648B9524E0C2A38DAD4555421D * >::Invoke(ES3Reader_Read_TisBoolean_t07D1E3F34E4813023D64F584DFF7B34C9D922F37_mC6D1B158268FF9B97822FF9F5B37FB1723FEDA22_RuntimeMethod_var, (ES3Reader_t2780AF8AA61DA2A817115CEF8612AC0E494D03C9 *)L_65, (ES3Type_t8FBECB7AE75168648B9524E0C2A38DAD4555421D *)L_66);
		ShapeModule_set_enabled_mF6FE8ED99E482A739C00F894235F4E2CD09B0D1E((ShapeModule_t3A89D143F5CAF357ECCE8B4A4F2BBD57816F98CA *)(ShapeModule_t3A89D143F5CAF357ECCE8B4A4F2BBD57816F98CA *)(&V_0), (bool)L_67, /*hidden argument*/NULL);
		// break;
		goto IL_042c;
	}

IL_02cd:
	{
		// instance.shapeType = reader.Read<UnityEngine.ParticleSystemShapeType>();
		ES3Reader_t2780AF8AA61DA2A817115CEF8612AC0E494D03C9 * L_68 = ___reader0;
		NullCheck((ES3Reader_t2780AF8AA61DA2A817115CEF8612AC0E494D03C9 *)L_68);
		int32_t L_69;
		L_69 = GenericVirtFuncInvoker0< int32_t >::Invoke(ES3Reader_Read_TisParticleSystemShapeType_t5B09F3A5A637F57DB1B2A6518E214AA2AA53D70C_mAE53212CB1FDDA51CF8CD0D39FCD446087DACA48_RuntimeMethod_var, (ES3Reader_t2780AF8AA61DA2A817115CEF8612AC0E494D03C9 *)L_68);
		ShapeModule_set_shapeType_mB772084527742749EB6AD690BAE47215FC71040D((ShapeModule_t3A89D143F5CAF357ECCE8B4A4F2BBD57816F98CA *)(ShapeModule_t3A89D143F5CAF357ECCE8B4A4F2BBD57816F98CA *)(&V_0), (int32_t)L_69, /*hidden argument*/NULL);
		// break;
		goto IL_042c;
	}

IL_02df:
	{
		// instance.randomDirectionAmount = reader.Read<System.Single>(ES3Type_float.Instance);
		ES3Reader_t2780AF8AA61DA2A817115CEF8612AC0E494D03C9 * L_70 = ___reader0;
		IL2CPP_RUNTIME_CLASS_INIT(ES3Type_float_tF86B773C86731BD9AD79448B860BBB178FE77644_il2cpp_TypeInfo_var);
		ES3Type_t8FBECB7AE75168648B9524E0C2A38DAD4555421D * L_71 = ((ES3Type_float_tF86B773C86731BD9AD79448B860BBB178FE77644_StaticFields*)il2cpp_codegen_static_fields_for(ES3Type_float_tF86B773C86731BD9AD79448B860BBB178FE77644_il2cpp_TypeInfo_var))->get_Instance_12();
		NullCheck((ES3Reader_t2780AF8AA61DA2A817115CEF8612AC0E494D03C9 *)L_70);
		float L_72;
		L_72 = GenericVirtFuncInvoker1< float, ES3Type_t8FBECB7AE75168648B9524E0C2A38DAD4555421D * >::Invoke(ES3Reader_Read_TisSingle_tE07797BA3C98D4CA9B5A19413C19A76688AB899E_m4A0416374498BDA042B8EB21E49B72326D6CE5F4_RuntimeMethod_var, (ES3Reader_t2780AF8AA61DA2A817115CEF8612AC0E494D03C9 *)L_70, (ES3Type_t8FBECB7AE75168648B9524E0C2A38DAD4555421D *)L_71);
		ShapeModule_set_randomDirectionAmount_m4E1BB67600D57383945F75F5A179EEEC01A76885((ShapeModule_t3A89D143F5CAF357ECCE8B4A4F2BBD57816F98CA *)(ShapeModule_t3A89D143F5CAF357ECCE8B4A4F2BBD57816F98CA *)(&V_0), (float)L_72, /*hidden argument*/NULL);
		// break;
		goto IL_042c;
	}

IL_02f6:
	{
		// instance.sphericalDirectionAmount = reader.Read<System.Single>(ES3Type_float.Instance);
		ES3Reader_t2780AF8AA61DA2A817115CEF8612AC0E494D03C9 * L_73 = ___reader0;
		IL2CPP_RUNTIME_CLASS_INIT(ES3Type_float_tF86B773C86731BD9AD79448B860BBB178FE77644_il2cpp_TypeInfo_var);
		ES3Type_t8FBECB7AE75168648B9524E0C2A38DAD4555421D * L_74 = ((ES3Type_float_tF86B773C86731BD9AD79448B860BBB178FE77644_StaticFields*)il2cpp_codegen_static_fields_for(ES3Type_float_tF86B773C86731BD9AD79448B860BBB178FE77644_il2cpp_TypeInfo_var))->get_Instance_12();
		NullCheck((ES3Reader_t2780AF8AA61DA2A817115CEF8612AC0E494D03C9 *)L_73);
		float L_75;
		L_75 = GenericVirtFuncInvoker1< float, ES3Type_t8FBECB7AE75168648B9524E0C2A38DAD4555421D * >::Invoke(ES3Reader_Read_TisSingle_tE07797BA3C98D4CA9B5A19413C19A76688AB899E_m4A0416374498BDA042B8EB21E49B72326D6CE5F4_RuntimeMethod_var, (ES3Reader_t2780AF8AA61DA2A817115CEF8612AC0E494D03C9 *)L_73, (ES3Type_t8FBECB7AE75168648B9524E0C2A38DAD4555421D *)L_74);
		ShapeModule_set_sphericalDirectionAmount_m02A9FBFF18AF24B821801DF5D833CA20A569F62B((ShapeModule_t3A89D143F5CAF357ECCE8B4A4F2BBD57816F98CA *)(ShapeModule_t3A89D143F5CAF357ECCE8B4A4F2BBD57816F98CA *)(&V_0), (float)L_75, /*hidden argument*/NULL);
		// break;
		goto IL_042c;
	}

IL_030d:
	{
		// instance.alignToDirection = reader.Read<System.Boolean>(ES3Type_bool.Instance);
		ES3Reader_t2780AF8AA61DA2A817115CEF8612AC0E494D03C9 * L_76 = ___reader0;
		IL2CPP_RUNTIME_CLASS_INIT(ES3Type_bool_t8F309F7B9CC735FF1DEE68081B6E3CAB367745F4_il2cpp_TypeInfo_var);
		ES3Type_t8FBECB7AE75168648B9524E0C2A38DAD4555421D * L_77 = ((ES3Type_bool_t8F309F7B9CC735FF1DEE68081B6E3CAB367745F4_StaticFields*)il2cpp_codegen_static_fields_for(ES3Type_bool_t8F309F7B9CC735FF1DEE68081B6E3CAB367745F4_il2cpp_TypeInfo_var))->get_Instance_12();
		NullCheck((ES3Reader_t2780AF8AA61DA2A817115CEF8612AC0E494D03C9 *)L_76);
		bool L_78;
		L_78 = GenericVirtFuncInvoker1< bool, ES3Type_t8FBECB7AE75168648B9524E0C2A38DAD4555421D * >::Invoke(ES3Reader_Read_TisBoolean_t07D1E3F34E4813023D64F584DFF7B34C9D922F37_mC6D1B158268FF9B97822FF9F5B37FB1723FEDA22_RuntimeMethod_var, (ES3Reader_t2780AF8AA61DA2A817115CEF8612AC0E494D03C9 *)L_76, (ES3Type_t8FBECB7AE75168648B9524E0C2A38DAD4555421D *)L_77);
		ShapeModule_set_alignToDirection_m396A57DCAD5F194E4DDDA0DF9C35E5508E3641BE((ShapeModule_t3A89D143F5CAF357ECCE8B4A4F2BBD57816F98CA *)(ShapeModule_t3A89D143F5CAF357ECCE8B4A4F2BBD57816F98CA *)(&V_0), (bool)L_78, /*hidden argument*/NULL);
		// break;
		goto IL_042c;
	}

IL_0324:
	{
		// instance.radius = reader.Read<System.Single>(ES3Type_float.Instance);
		ES3Reader_t2780AF8AA61DA2A817115CEF8612AC0E494D03C9 * L_79 = ___reader0;
		IL2CPP_RUNTIME_CLASS_INIT(ES3Type_float_tF86B773C86731BD9AD79448B860BBB178FE77644_il2cpp_TypeInfo_var);
		ES3Type_t8FBECB7AE75168648B9524E0C2A38DAD4555421D * L_80 = ((ES3Type_float_tF86B773C86731BD9AD79448B860BBB178FE77644_StaticFields*)il2cpp_codegen_static_fields_for(ES3Type_float_tF86B773C86731BD9AD79448B860BBB178FE77644_il2cpp_TypeInfo_var))->get_Instance_12();
		NullCheck((ES3Reader_t2780AF8AA61DA2A817115CEF8612AC0E494D03C9 *)L_79);
		float L_81;
		L_81 = GenericVirtFuncInvoker1< float, ES3Type_t8FBECB7AE75168648B9524E0C2A38DAD4555421D * >::Invoke(ES3Reader_Read_TisSingle_tE07797BA3C98D4CA9B5A19413C19A76688AB899E_m4A0416374498BDA042B8EB21E49B72326D6CE5F4_RuntimeMethod_var, (ES3Reader_t2780AF8AA61DA2A817115CEF8612AC0E494D03C9 *)L_79, (ES3Type_t8FBECB7AE75168648B9524E0C2A38DAD4555421D *)L_80);
		ShapeModule_set_radius_mFC12B15750268316924771461C09B1A311A16DEA((ShapeModule_t3A89D143F5CAF357ECCE8B4A4F2BBD57816F98CA *)(ShapeModule_t3A89D143F5CAF357ECCE8B4A4F2BBD57816F98CA *)(&V_0), (float)L_81, /*hidden argument*/NULL);
		// break;
		goto IL_042c;
	}

IL_033b:
	{
		// instance.angle = reader.Read<System.Single>(ES3Type_float.Instance);
		ES3Reader_t2780AF8AA61DA2A817115CEF8612AC0E494D03C9 * L_82 = ___reader0;
		IL2CPP_RUNTIME_CLASS_INIT(ES3Type_float_tF86B773C86731BD9AD79448B860BBB178FE77644_il2cpp_TypeInfo_var);
		ES3Type_t8FBECB7AE75168648B9524E0C2A38DAD4555421D * L_83 = ((ES3Type_float_tF86B773C86731BD9AD79448B860BBB178FE77644_StaticFields*)il2cpp_codegen_static_fields_for(ES3Type_float_tF86B773C86731BD9AD79448B860BBB178FE77644_il2cpp_TypeInfo_var))->get_Instance_12();
		NullCheck((ES3Reader_t2780AF8AA61DA2A817115CEF8612AC0E494D03C9 *)L_82);
		float L_84;
		L_84 = GenericVirtFuncInvoker1< float, ES3Type_t8FBECB7AE75168648B9524E0C2A38DAD4555421D * >::Invoke(ES3Reader_Read_TisSingle_tE07797BA3C98D4CA9B5A19413C19A76688AB899E_m4A0416374498BDA042B8EB21E49B72326D6CE5F4_RuntimeMethod_var, (ES3Reader_t2780AF8AA61DA2A817115CEF8612AC0E494D03C9 *)L_82, (ES3Type_t8FBECB7AE75168648B9524E0C2A38DAD4555421D *)L_83);
		ShapeModule_set_angle_m20629BB5FE89F2040960548B45F6EC801B1DB8AA((ShapeModule_t3A89D143F5CAF357ECCE8B4A4F2BBD57816F98CA *)(ShapeModule_t3A89D143F5CAF357ECCE8B4A4F2BBD57816F98CA *)(&V_0), (float)L_84, /*hidden argument*/NULL);
		// break;
		goto IL_042c;
	}

IL_0352:
	{
		// instance.length = reader.Read<System.Single>(ES3Type_float.Instance);
		ES3Reader_t2780AF8AA61DA2A817115CEF8612AC0E494D03C9 * L_85 = ___reader0;
		IL2CPP_RUNTIME_CLASS_INIT(ES3Type_float_tF86B773C86731BD9AD79448B860BBB178FE77644_il2cpp_TypeInfo_var);
		ES3Type_t8FBECB7AE75168648B9524E0C2A38DAD4555421D * L_86 = ((ES3Type_float_tF86B773C86731BD9AD79448B860BBB178FE77644_StaticFields*)il2cpp_codegen_static_fields_for(ES3Type_float_tF86B773C86731BD9AD79448B860BBB178FE77644_il2cpp_TypeInfo_var))->get_Instance_12();
		NullCheck((ES3Reader_t2780AF8AA61DA2A817115CEF8612AC0E494D03C9 *)L_85);
		float L_87;
		L_87 = GenericVirtFuncInvoker1< float, ES3Type_t8FBECB7AE75168648B9524E0C2A38DAD4555421D * >::Invoke(ES3Reader_Read_TisSingle_tE07797BA3C98D4CA9B5A19413C19A76688AB899E_m4A0416374498BDA042B8EB21E49B72326D6CE5F4_RuntimeMethod_var, (ES3Reader_t2780AF8AA61DA2A817115CEF8612AC0E494D03C9 *)L_85, (ES3Type_t8FBECB7AE75168648B9524E0C2A38DAD4555421D *)L_86);
		ShapeModule_set_length_m744975258664B53F38A8B8BE38A86A0FFDD85BC7((ShapeModule_t3A89D143F5CAF357ECCE8B4A4F2BBD57816F98CA *)(ShapeModule_t3A89D143F5CAF357ECCE8B4A4F2BBD57816F98CA *)(&V_0), (float)L_87, /*hidden argument*/NULL);
		// break;
		goto IL_042c;
	}

IL_0369:
	{
		// instance.scale = reader.Read<UnityEngine.Vector3>(ES3Type_Vector3.Instance);
		ES3Reader_t2780AF8AA61DA2A817115CEF8612AC0E494D03C9 * L_88 = ___reader0;
		IL2CPP_RUNTIME_CLASS_INIT(ES3Type_Vector3_tA9144E81A20D2F28726F02DE1AE6CD3F9C12B54F_il2cpp_TypeInfo_var);
		ES3Type_t8FBECB7AE75168648B9524E0C2A38DAD4555421D * L_89 = ((ES3Type_Vector3_tA9144E81A20D2F28726F02DE1AE6CD3F9C12B54F_StaticFields*)il2cpp_codegen_static_fields_for(ES3Type_Vector3_tA9144E81A20D2F28726F02DE1AE6CD3F9C12B54F_il2cpp_TypeInfo_var))->get_Instance_12();
		NullCheck((ES3Reader_t2780AF8AA61DA2A817115CEF8612AC0E494D03C9 *)L_88);
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_90;
		L_90 = GenericVirtFuncInvoker1< Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E , ES3Type_t8FBECB7AE75168648B9524E0C2A38DAD4555421D * >::Invoke(ES3Reader_Read_TisVector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E_mBA4CD9D0F45E78BA43FE2DB8EC33CC3A5433DE15_RuntimeMethod_var, (ES3Reader_t2780AF8AA61DA2A817115CEF8612AC0E494D03C9 *)L_88, (ES3Type_t8FBECB7AE75168648B9524E0C2A38DAD4555421D *)L_89);
		ShapeModule_set_scale_m2951583898F18878E6F238100045072F44AD9158((ShapeModule_t3A89D143F5CAF357ECCE8B4A4F2BBD57816F98CA *)(ShapeModule_t3A89D143F5CAF357ECCE8B4A4F2BBD57816F98CA *)(&V_0), (Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E )L_90, /*hidden argument*/NULL);
		// break;
		goto IL_042c;
	}

IL_0380:
	{
		// instance.meshShapeType = reader.Read<UnityEngine.ParticleSystemMeshShapeType>();
		ES3Reader_t2780AF8AA61DA2A817115CEF8612AC0E494D03C9 * L_91 = ___reader0;
		NullCheck((ES3Reader_t2780AF8AA61DA2A817115CEF8612AC0E494D03C9 *)L_91);
		int32_t L_92;
		L_92 = GenericVirtFuncInvoker0< int32_t >::Invoke(ES3Reader_Read_TisParticleSystemMeshShapeType_t7C9518403F30CC7AF7F9124FD61EC1187B42EFD2_mF1A19C0F8BBA6E44737F158F3BE4CC478F623F10_RuntimeMethod_var, (ES3Reader_t2780AF8AA61DA2A817115CEF8612AC0E494D03C9 *)L_91);
		ShapeModule_set_meshShapeType_m5DAD94B71F2110F45E454C30DE052153129891C2((ShapeModule_t3A89D143F5CAF357ECCE8B4A4F2BBD57816F98CA *)(ShapeModule_t3A89D143F5CAF357ECCE8B4A4F2BBD57816F98CA *)(&V_0), (int32_t)L_92, /*hidden argument*/NULL);
		// break;
		goto IL_042c;
	}

IL_0392:
	{
		// instance.mesh = reader.Read<UnityEngine.Mesh>();
		ES3Reader_t2780AF8AA61DA2A817115CEF8612AC0E494D03C9 * L_93 = ___reader0;
		NullCheck((ES3Reader_t2780AF8AA61DA2A817115CEF8612AC0E494D03C9 *)L_93);
		Mesh_t2F5992DBA650D5862B43D3823ACD997132A57DA6 * L_94;
		L_94 = GenericVirtFuncInvoker0< Mesh_t2F5992DBA650D5862B43D3823ACD997132A57DA6 * >::Invoke(ES3Reader_Read_TisMesh_t2F5992DBA650D5862B43D3823ACD997132A57DA6_m65DF5BA41642A39B77979CC49472E4DE7A1660F9_RuntimeMethod_var, (ES3Reader_t2780AF8AA61DA2A817115CEF8612AC0E494D03C9 *)L_93);
		ShapeModule_set_mesh_mD3E276A9E45442E75AD8A9AA4BD88C9112BD77CA((ShapeModule_t3A89D143F5CAF357ECCE8B4A4F2BBD57816F98CA *)(ShapeModule_t3A89D143F5CAF357ECCE8B4A4F2BBD57816F98CA *)(&V_0), (Mesh_t2F5992DBA650D5862B43D3823ACD997132A57DA6 *)L_94, /*hidden argument*/NULL);
		// break;
		goto IL_042c;
	}

IL_03a4:
	{
		// instance.meshRenderer = reader.Read<UnityEngine.MeshRenderer>();
		ES3Reader_t2780AF8AA61DA2A817115CEF8612AC0E494D03C9 * L_95 = ___reader0;
		NullCheck((ES3Reader_t2780AF8AA61DA2A817115CEF8612AC0E494D03C9 *)L_95);
		MeshRenderer_tCD983A2F635E12BCB0BAA2E635D96A318757908B * L_96;
		L_96 = GenericVirtFuncInvoker0< MeshRenderer_tCD983A2F635E12BCB0BAA2E635D96A318757908B * >::Invoke(ES3Reader_Read_TisMeshRenderer_tCD983A2F635E12BCB0BAA2E635D96A318757908B_m773CE5481730EBCC6A377F918946EB11B304050A_RuntimeMethod_var, (ES3Reader_t2780AF8AA61DA2A817115CEF8612AC0E494D03C9 *)L_95);
		ShapeModule_set_meshRenderer_m334D69AC8C29F5E393732D62BBB3645296614059((ShapeModule_t3A89D143F5CAF357ECCE8B4A4F2BBD57816F98CA *)(ShapeModule_t3A89D143F5CAF357ECCE8B4A4F2BBD57816F98CA *)(&V_0), (MeshRenderer_tCD983A2F635E12BCB0BAA2E635D96A318757908B *)L_96, /*hidden argument*/NULL);
		// break;
		goto IL_042c;
	}

IL_03b3:
	{
		// instance.skinnedMeshRenderer = reader.Read<UnityEngine.SkinnedMeshRenderer>();
		ES3Reader_t2780AF8AA61DA2A817115CEF8612AC0E494D03C9 * L_97 = ___reader0;
		NullCheck((ES3Reader_t2780AF8AA61DA2A817115CEF8612AC0E494D03C9 *)L_97);
		SkinnedMeshRenderer_t126F4D6010E0F4B2685A7817B0A9171805D8F496 * L_98;
		L_98 = GenericVirtFuncInvoker0< SkinnedMeshRenderer_t126F4D6010E0F4B2685A7817B0A9171805D8F496 * >::Invoke(ES3Reader_Read_TisSkinnedMeshRenderer_t126F4D6010E0F4B2685A7817B0A9171805D8F496_m23D6569D5CE7B3E1C67BDB470CDEDEF25A835F25_RuntimeMethod_var, (ES3Reader_t2780AF8AA61DA2A817115CEF8612AC0E494D03C9 *)L_97);
		ShapeModule_set_skinnedMeshRenderer_m9DEF9CD332D3F10BE7D99EFECC0971FB5AE83F56((ShapeModule_t3A89D143F5CAF357ECCE8B4A4F2BBD57816F98CA *)(ShapeModule_t3A89D143F5CAF357ECCE8B4A4F2BBD57816F98CA *)(&V_0), (SkinnedMeshRenderer_t126F4D6010E0F4B2685A7817B0A9171805D8F496 *)L_98, /*hidden argument*/NULL);
		// break;
		goto IL_042c;
	}

IL_03c2:
	{
		// instance.useMeshMaterialIndex = reader.Read<System.Boolean>(ES3Type_bool.Instance);
		ES3Reader_t2780AF8AA61DA2A817115CEF8612AC0E494D03C9 * L_99 = ___reader0;
		IL2CPP_RUNTIME_CLASS_INIT(ES3Type_bool_t8F309F7B9CC735FF1DEE68081B6E3CAB367745F4_il2cpp_TypeInfo_var);
		ES3Type_t8FBECB7AE75168648B9524E0C2A38DAD4555421D * L_100 = ((ES3Type_bool_t8F309F7B9CC735FF1DEE68081B6E3CAB367745F4_StaticFields*)il2cpp_codegen_static_fields_for(ES3Type_bool_t8F309F7B9CC735FF1DEE68081B6E3CAB367745F4_il2cpp_TypeInfo_var))->get_Instance_12();
		NullCheck((ES3Reader_t2780AF8AA61DA2A817115CEF8612AC0E494D03C9 *)L_99);
		bool L_101;
		L_101 = GenericVirtFuncInvoker1< bool, ES3Type_t8FBECB7AE75168648B9524E0C2A38DAD4555421D * >::Invoke(ES3Reader_Read_TisBoolean_t07D1E3F34E4813023D64F584DFF7B34C9D922F37_mC6D1B158268FF9B97822FF9F5B37FB1723FEDA22_RuntimeMethod_var, (ES3Reader_t2780AF8AA61DA2A817115CEF8612AC0E494D03C9 *)L_99, (ES3Type_t8FBECB7AE75168648B9524E0C2A38DAD4555421D *)L_100);
		ShapeModule_set_useMeshMaterialIndex_m6130573C0966ED3B5C590665747305BCEFD3F901((ShapeModule_t3A89D143F5CAF357ECCE8B4A4F2BBD57816F98CA *)(ShapeModule_t3A89D143F5CAF357ECCE8B4A4F2BBD57816F98CA *)(&V_0), (bool)L_101, /*hidden argument*/NULL);
		// break;
		goto IL_042c;
	}

IL_03d6:
	{
		// instance.meshMaterialIndex = reader.Read<System.Int32>(ES3Type_int.Instance);
		ES3Reader_t2780AF8AA61DA2A817115CEF8612AC0E494D03C9 * L_102 = ___reader0;
		IL2CPP_RUNTIME_CLASS_INIT(ES3Type_int_tF64C15D40AD0CC7C15BCD1CEC3C5C6BF837BD167_il2cpp_TypeInfo_var);
		ES3Type_t8FBECB7AE75168648B9524E0C2A38DAD4555421D * L_103 = ((ES3Type_int_tF64C15D40AD0CC7C15BCD1CEC3C5C6BF837BD167_StaticFields*)il2cpp_codegen_static_fields_for(ES3Type_int_tF64C15D40AD0CC7C15BCD1CEC3C5C6BF837BD167_il2cpp_TypeInfo_var))->get_Instance_12();
		NullCheck((ES3Reader_t2780AF8AA61DA2A817115CEF8612AC0E494D03C9 *)L_102);
		int32_t L_104;
		L_104 = GenericVirtFuncInvoker1< int32_t, ES3Type_t8FBECB7AE75168648B9524E0C2A38DAD4555421D * >::Invoke(ES3Reader_Read_TisInt32_tFDE5F8CD43D10453F6A2E0C77FE48C6CC7009046_m2B74AA6627F5B1D21171D56C42F71DE5A7C1B4A6_RuntimeMethod_var, (ES3Reader_t2780AF8AA61DA2A817115CEF8612AC0E494D03C9 *)L_102, (ES3Type_t8FBECB7AE75168648B9524E0C2A38DAD4555421D *)L_103);
		ShapeModule_set_meshMaterialIndex_m1205DDEB353204D5941654FB79164AD5BAF0A59C((ShapeModule_t3A89D143F5CAF357ECCE8B4A4F2BBD57816F98CA *)(ShapeModule_t3A89D143F5CAF357ECCE8B4A4F2BBD57816F98CA *)(&V_0), (int32_t)L_104, /*hidden argument*/NULL);
		// break;
		goto IL_042c;
	}

IL_03ea:
	{
		// instance.useMeshColors = reader.Read<System.Boolean>(ES3Type_bool.Instance);
		ES3Reader_t2780AF8AA61DA2A817115CEF8612AC0E494D03C9 * L_105 = ___reader0;
		IL2CPP_RUNTIME_CLASS_INIT(ES3Type_bool_t8F309F7B9CC735FF1DEE68081B6E3CAB367745F4_il2cpp_TypeInfo_var);
		ES3Type_t8FBECB7AE75168648B9524E0C2A38DAD4555421D * L_106 = ((ES3Type_bool_t8F309F7B9CC735FF1DEE68081B6E3CAB367745F4_StaticFields*)il2cpp_codegen_static_fields_for(ES3Type_bool_t8F309F7B9CC735FF1DEE68081B6E3CAB367745F4_il2cpp_TypeInfo_var))->get_Instance_12();
		NullCheck((ES3Reader_t2780AF8AA61DA2A817115CEF8612AC0E494D03C9 *)L_105);
		bool L_107;
		L_107 = GenericVirtFuncInvoker1< bool, ES3Type_t8FBECB7AE75168648B9524E0C2A38DAD4555421D * >::Invoke(ES3Reader_Read_TisBoolean_t07D1E3F34E4813023D64F584DFF7B34C9D922F37_mC6D1B158268FF9B97822FF9F5B37FB1723FEDA22_RuntimeMethod_var, (ES3Reader_t2780AF8AA61DA2A817115CEF8612AC0E494D03C9 *)L_105, (ES3Type_t8FBECB7AE75168648B9524E0C2A38DAD4555421D *)L_106);
		ShapeModule_set_useMeshColors_m071D000F330805B1EBCF09B40AC4EB9942EB9F57((ShapeModule_t3A89D143F5CAF357ECCE8B4A4F2BBD57816F98CA *)(ShapeModule_t3A89D143F5CAF357ECCE8B4A4F2BBD57816F98CA *)(&V_0), (bool)L_107, /*hidden argument*/NULL);
		// break;
		goto IL_042c;
	}

IL_03fe:
	{
		// instance.normalOffset = reader.Read<System.Single>(ES3Type_float.Instance);
		ES3Reader_t2780AF8AA61DA2A817115CEF8612AC0E494D03C9 * L_108 = ___reader0;
		IL2CPP_RUNTIME_CLASS_INIT(ES3Type_float_tF86B773C86731BD9AD79448B860BBB178FE77644_il2cpp_TypeInfo_var);
		ES3Type_t8FBECB7AE75168648B9524E0C2A38DAD4555421D * L_109 = ((ES3Type_float_tF86B773C86731BD9AD79448B860BBB178FE77644_StaticFields*)il2cpp_codegen_static_fields_for(ES3Type_float_tF86B773C86731BD9AD79448B860BBB178FE77644_il2cpp_TypeInfo_var))->get_Instance_12();
		NullCheck((ES3Reader_t2780AF8AA61DA2A817115CEF8612AC0E494D03C9 *)L_108);
		float L_110;
		L_110 = GenericVirtFuncInvoker1< float, ES3Type_t8FBECB7AE75168648B9524E0C2A38DAD4555421D * >::Invoke(ES3Reader_Read_TisSingle_tE07797BA3C98D4CA9B5A19413C19A76688AB899E_m4A0416374498BDA042B8EB21E49B72326D6CE5F4_RuntimeMethod_var, (ES3Reader_t2780AF8AA61DA2A817115CEF8612AC0E494D03C9 *)L_108, (ES3Type_t8FBECB7AE75168648B9524E0C2A38DAD4555421D *)L_109);
		ShapeModule_set_normalOffset_m81A315286BAA5F52AAED6B317734FB03B2DCE9FD((ShapeModule_t3A89D143F5CAF357ECCE8B4A4F2BBD57816F98CA *)(ShapeModule_t3A89D143F5CAF357ECCE8B4A4F2BBD57816F98CA *)(&V_0), (float)L_110, /*hidden argument*/NULL);
		// break;
		goto IL_042c;
	}

IL_0412:
	{
		// instance.arc = reader.Read<System.Single>(ES3Type_float.Instance);
		ES3Reader_t2780AF8AA61DA2A817115CEF8612AC0E494D03C9 * L_111 = ___reader0;
		IL2CPP_RUNTIME_CLASS_INIT(ES3Type_float_tF86B773C86731BD9AD79448B860BBB178FE77644_il2cpp_TypeInfo_var);
		ES3Type_t8FBECB7AE75168648B9524E0C2A38DAD4555421D * L_112 = ((ES3Type_float_tF86B773C86731BD9AD79448B860BBB178FE77644_StaticFields*)il2cpp_codegen_static_fields_for(ES3Type_float_tF86B773C86731BD9AD79448B860BBB178FE77644_il2cpp_TypeInfo_var))->get_Instance_12();
		NullCheck((ES3Reader_t2780AF8AA61DA2A817115CEF8612AC0E494D03C9 *)L_111);
		float L_113;
		L_113 = GenericVirtFuncInvoker1< float, ES3Type_t8FBECB7AE75168648B9524E0C2A38DAD4555421D * >::Invoke(ES3Reader_Read_TisSingle_tE07797BA3C98D4CA9B5A19413C19A76688AB899E_m4A0416374498BDA042B8EB21E49B72326D6CE5F4_RuntimeMethod_var, (ES3Reader_t2780AF8AA61DA2A817115CEF8612AC0E494D03C9 *)L_111, (ES3Type_t8FBECB7AE75168648B9524E0C2A38DAD4555421D *)L_112);
		ShapeModule_set_arc_m4A2578EBD4747DB3D9ED74AB53E488872CFA541F((ShapeModule_t3A89D143F5CAF357ECCE8B4A4F2BBD57816F98CA *)(ShapeModule_t3A89D143F5CAF357ECCE8B4A4F2BBD57816F98CA *)(&V_0), (float)L_113, /*hidden argument*/NULL);
		// break;
		goto IL_042c;
	}

IL_0426:
	{
		// reader.Skip();
		ES3Reader_t2780AF8AA61DA2A817115CEF8612AC0E494D03C9 * L_114 = ___reader0;
		NullCheck((ES3Reader_t2780AF8AA61DA2A817115CEF8612AC0E494D03C9 *)L_114);
		VirtActionInvoker0::Invoke(41 /* System.Void ES3Reader::Skip() */, (ES3Reader_t2780AF8AA61DA2A817115CEF8612AC0E494D03C9 *)L_114);
	}

IL_042c:
	{
		// while((propertyName = reader.ReadPropertyName()) != null)
		ES3Reader_t2780AF8AA61DA2A817115CEF8612AC0E494D03C9 * L_115 = ___reader0;
		NullCheck((ES3Reader_t2780AF8AA61DA2A817115CEF8612AC0E494D03C9 *)L_115);
		String_t* L_116;
		L_116 = VirtFuncInvoker0< String_t* >::Invoke(21 /* System.String ES3Reader::ReadPropertyName() */, (ES3Reader_t2780AF8AA61DA2A817115CEF8612AC0E494D03C9 *)L_115);
		String_t* L_117 = (String_t*)L_116;
		V_1 = (String_t*)L_117;
		if (L_117)
		{
			goto IL_000c;
		}
	}
	{
		// }
		return;
	}
}
// System.Void ES3Types.ES3Type_ShapeModule::ReadInto<UnityEngine.ParticleSystem/ExternalForcesModule>(ES3Reader,System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ES3Type_ShapeModule_ReadInto_TisExternalForcesModule_tBF4BE6C6AA63EB8C57DE1B0EDF3726B2F59FA7B5_m0CAF117DD595A09B379F9BBC0BC1F61833C98353_gshared (ES3Type_ShapeModule_t67010A74D4F69A245D5F06976239CAB4279B5377 * __this, ES3Reader_t2780AF8AA61DA2A817115CEF8612AC0E494D03C9 * ___reader0, RuntimeObject * ___obj1, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ES3Reader_Read_TisBoolean_t07D1E3F34E4813023D64F584DFF7B34C9D922F37_mC6D1B158268FF9B97822FF9F5B37FB1723FEDA22_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ES3Reader_Read_TisInt32_tFDE5F8CD43D10453F6A2E0C77FE48C6CC7009046_m2B74AA6627F5B1D21171D56C42F71DE5A7C1B4A6_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ES3Reader_Read_TisMeshRenderer_tCD983A2F635E12BCB0BAA2E635D96A318757908B_m773CE5481730EBCC6A377F918946EB11B304050A_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ES3Reader_Read_TisMesh_t2F5992DBA650D5862B43D3823ACD997132A57DA6_m65DF5BA41642A39B77979CC49472E4DE7A1660F9_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ES3Reader_Read_TisParticleSystemMeshShapeType_t7C9518403F30CC7AF7F9124FD61EC1187B42EFD2_mF1A19C0F8BBA6E44737F158F3BE4CC478F623F10_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ES3Reader_Read_TisParticleSystemShapeType_t5B09F3A5A637F57DB1B2A6518E214AA2AA53D70C_mAE53212CB1FDDA51CF8CD0D39FCD446087DACA48_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ES3Reader_Read_TisSingle_tE07797BA3C98D4CA9B5A19413C19A76688AB899E_m4A0416374498BDA042B8EB21E49B72326D6CE5F4_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ES3Reader_Read_TisSkinnedMeshRenderer_t126F4D6010E0F4B2685A7817B0A9171805D8F496_m23D6569D5CE7B3E1C67BDB470CDEDEF25A835F25_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ES3Reader_Read_TisVector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E_mBA4CD9D0F45E78BA43FE2DB8EC33CC3A5433DE15_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ES3Type_Vector3_tA9144E81A20D2F28726F02DE1AE6CD3F9C12B54F_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ES3Type_bool_t8F309F7B9CC735FF1DEE68081B6E3CAB367745F4_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ES3Type_float_tF86B773C86731BD9AD79448B860BBB178FE77644_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ES3Type_int_tF64C15D40AD0CC7C15BCD1CEC3C5C6BF837BD167_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ShapeModule_t3A89D143F5CAF357ECCE8B4A4F2BBD57816F98CA_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral01837E2252AC8026A5EA3567A663017A662FBB70);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral1228466552C1791B2019A329AFE94665D441168A);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral60E56797D122AE71D3774956F66C6EEB9EA22C05);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral6686C366F645244186604A3DA4B9A58012A85F1B);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral82BECCAD895076775062861CDB46AADEF913D969);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral8C9F18A4F030B96447955FBBA1A99FFC43B5D8E0);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral8E54BB51E569CB6A8D3C45D8AEF883A1559C1C0E);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral91811EE149061D28B38320E2430CE8888AD6398B);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralBD49F93A7BC78A69E385CEC0E78F434BD2845A17);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralCA1B66E295BD92E9FD3B6C708F09CA69A50BEFD1);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralE8744A8B8BD390EB66CA0CAE2376C973E6904FFB);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralEB0A157666700D8227FD4B66A26FDC02035E89BF);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralED1F119527A0BCA45125EF8E0F719985DA86C0E1);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralF66E9083C67855AB6EBB4B74342E385A72AACE32);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralF9BE17D634D1B07BCDCDA77A87710C946D81307B);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralF9D225733E1D10F9344C755C4A9C0870CD1DE97B);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralFA5EC7168E9633DAAEAA255ECB55030EA60F064F);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralFC341A1966AF28A9A7A26EDFB78ABBF7DE4D0E1F);
		s_Il2CppMethodInitialized = true;
	}
	ShapeModule_t3A89D143F5CAF357ECCE8B4A4F2BBD57816F98CA  V_0;
	memset((&V_0), 0, sizeof(V_0));
	String_t* V_1 = NULL;
	uint32_t V_2 = 0;
	{
		// var instance = (UnityEngine.ParticleSystem.ShapeModule)obj;
		RuntimeObject * L_0 = ___obj1;
		V_0 = (ShapeModule_t3A89D143F5CAF357ECCE8B4A4F2BBD57816F98CA )((*(ShapeModule_t3A89D143F5CAF357ECCE8B4A4F2BBD57816F98CA *)((ShapeModule_t3A89D143F5CAF357ECCE8B4A4F2BBD57816F98CA *)UnBox(L_0, ShapeModule_t3A89D143F5CAF357ECCE8B4A4F2BBD57816F98CA_il2cpp_TypeInfo_var))));
		goto IL_042c;
	}

IL_000c:
	{
		String_t* L_1 = V_1;
		if (!L_1)
		{
			goto IL_0426;
		}
	}
	{
		String_t* L_2 = V_1;
		uint32_t L_3;
		L_3 = U3CPrivateImplementationDetailsU3E_ComputeStringHash_m3ADC1F612F9EE3DD518E6F0023A0DE0EE2B120A7((String_t*)L_2, /*hidden argument*/NULL);
		V_2 = (uint32_t)L_3;
		uint32_t L_4 = V_2;
		if ((!(((uint32_t)L_4) <= ((uint32_t)((int32_t)-2104025999)))))
		{
			goto IL_00b3;
		}
	}
	{
		uint32_t L_5 = V_2;
		if ((!(((uint32_t)L_5) <= ((uint32_t)((int32_t)666576729)))))
		{
			goto IL_006a;
		}
	}
	{
		uint32_t L_6 = V_2;
		if ((!(((uint32_t)L_6) <= ((uint32_t)((int32_t)49525662)))))
		{
			goto IL_004f;
		}
	}
	{
		uint32_t L_7 = V_2;
		if ((((int32_t)L_7) == ((int32_t)((int32_t)24602224))))
		{
			goto IL_024d;
		}
	}
	{
		uint32_t L_8 = V_2;
		if ((((int32_t)L_8) == ((int32_t)((int32_t)49525662))))
		{
			goto IL_013c;
		}
	}
	{
		goto IL_0426;
	}

IL_004f:
	{
		uint32_t L_9 = V_2;
		if ((((int32_t)L_9) == ((int32_t)((int32_t)230313139))))
		{
			goto IL_01a5;
		}
	}
	{
		uint32_t L_10 = V_2;
		if ((((int32_t)L_10) == ((int32_t)((int32_t)666576729))))
		{
			goto IL_01f9;
		}
	}
	{
		goto IL_0426;
	}

IL_006a:
	{
		uint32_t L_11 = V_2;
		if ((!(((uint32_t)L_11) <= ((uint32_t)((int32_t)955488309)))))
		{
			goto IL_008d;
		}
	}
	{
		uint32_t L_12 = V_2;
		if ((((int32_t)L_12) == ((int32_t)((int32_t)923624301))))
		{
			goto IL_0238;
		}
	}
	{
		uint32_t L_13 = V_2;
		if ((((int32_t)L_13) == ((int32_t)((int32_t)955488309))))
		{
			goto IL_028c;
		}
	}
	{
		goto IL_0426;
	}

IL_008d:
	{
		uint32_t L_14 = V_2;
		if ((((int32_t)L_14) == ((int32_t)((int32_t)980363995))))
		{
			goto IL_02a1;
		}
	}
	{
		uint32_t L_15 = V_2;
		if ((((int32_t)L_15) == ((int32_t)((int32_t)985988853))))
		{
			goto IL_017b;
		}
	}
	{
		uint32_t L_16 = V_2;
		if ((((int32_t)L_16) == ((int32_t)((int32_t)-2104025999))))
		{
			goto IL_01e4;
		}
	}
	{
		goto IL_0426;
	}

IL_00b3:
	{
		uint32_t L_17 = V_2;
		if ((!(((uint32_t)L_17) <= ((uint32_t)((int32_t)-1473810612)))))
		{
			goto IL_00f6;
		}
	}
	{
		uint32_t L_18 = V_2;
		if ((!(((uint32_t)L_18) <= ((uint32_t)((int32_t)-1726928010)))))
		{
			goto IL_00db;
		}
	}
	{
		uint32_t L_19 = V_2;
		if ((((int32_t)L_19) == ((int32_t)((int32_t)-2083506667))))
		{
			goto IL_01cf;
		}
	}
	{
		uint32_t L_20 = V_2;
		if ((((int32_t)L_20) == ((int32_t)((int32_t)-1726928010))))
		{
			goto IL_0151;
		}
	}
	{
		goto IL_0426;
	}

IL_00db:
	{
		uint32_t L_21 = V_2;
		if ((((int32_t)L_21) == ((int32_t)((int32_t)-1593786692))))
		{
			goto IL_020e;
		}
	}
	{
		uint32_t L_22 = V_2;
		if ((((int32_t)L_22) == ((int32_t)((int32_t)-1473810612))))
		{
			goto IL_0190;
		}
	}
	{
		goto IL_0426;
	}

IL_00f6:
	{
		uint32_t L_23 = V_2;
		if ((!(((uint32_t)L_23) <= ((uint32_t)((int32_t)-1386986472)))))
		{
			goto IL_0116;
		}
	}
	{
		uint32_t L_24 = V_2;
		if ((((int32_t)L_24) == ((int32_t)((int32_t)-1412039661))))
		{
			goto IL_0166;
		}
	}
	{
		uint32_t L_25 = V_2;
		if ((((int32_t)L_25) == ((int32_t)((int32_t)-1386986472))))
		{
			goto IL_01ba;
		}
	}
	{
		goto IL_0426;
	}

IL_0116:
	{
		uint32_t L_26 = V_2;
		if ((((int32_t)L_26) == ((int32_t)((int32_t)-584064197))))
		{
			goto IL_0223;
		}
	}
	{
		uint32_t L_27 = V_2;
		if ((((int32_t)L_27) == ((int32_t)((int32_t)-473474755))))
		{
			goto IL_0277;
		}
	}
	{
		uint32_t L_28 = V_2;
		if ((((int32_t)L_28) == ((int32_t)((int32_t)-365686981))))
		{
			goto IL_0262;
		}
	}
	{
		goto IL_0426;
	}

IL_013c:
	{
		String_t* L_29 = V_1;
		bool L_30;
		L_30 = String_op_Equality_m50B3548E4AC232558190B0052877B290AA1D436A((String_t*)L_29, (String_t*)_stringLiteralF9D225733E1D10F9344C755C4A9C0870CD1DE97B, /*hidden argument*/NULL);
		if (L_30)
		{
			goto IL_02b6;
		}
	}
	{
		goto IL_0426;
	}

IL_0151:
	{
		String_t* L_31 = V_1;
		bool L_32;
		L_32 = String_op_Equality_m50B3548E4AC232558190B0052877B290AA1D436A((String_t*)L_31, (String_t*)_stringLiteral82BECCAD895076775062861CDB46AADEF913D969, /*hidden argument*/NULL);
		if (L_32)
		{
			goto IL_02cd;
		}
	}
	{
		goto IL_0426;
	}

IL_0166:
	{
		String_t* L_33 = V_1;
		bool L_34;
		L_34 = String_op_Equality_m50B3548E4AC232558190B0052877B290AA1D436A((String_t*)L_33, (String_t*)_stringLiteral1228466552C1791B2019A329AFE94665D441168A, /*hidden argument*/NULL);
		if (L_34)
		{
			goto IL_02df;
		}
	}
	{
		goto IL_0426;
	}

IL_017b:
	{
		String_t* L_35 = V_1;
		bool L_36;
		L_36 = String_op_Equality_m50B3548E4AC232558190B0052877B290AA1D436A((String_t*)L_35, (String_t*)_stringLiteralBD49F93A7BC78A69E385CEC0E78F434BD2845A17, /*hidden argument*/NULL);
		if (L_36)
		{
			goto IL_02f6;
		}
	}
	{
		goto IL_0426;
	}

IL_0190:
	{
		String_t* L_37 = V_1;
		bool L_38;
		L_38 = String_op_Equality_m50B3548E4AC232558190B0052877B290AA1D436A((String_t*)L_37, (String_t*)_stringLiteralED1F119527A0BCA45125EF8E0F719985DA86C0E1, /*hidden argument*/NULL);
		if (L_38)
		{
			goto IL_030d;
		}
	}
	{
		goto IL_0426;
	}

IL_01a5:
	{
		String_t* L_39 = V_1;
		bool L_40;
		L_40 = String_op_Equality_m50B3548E4AC232558190B0052877B290AA1D436A((String_t*)L_39, (String_t*)_stringLiteral8C9F18A4F030B96447955FBBA1A99FFC43B5D8E0, /*hidden argument*/NULL);
		if (L_40)
		{
			goto IL_0324;
		}
	}
	{
		goto IL_0426;
	}

IL_01ba:
	{
		String_t* L_41 = V_1;
		bool L_42;
		L_42 = String_op_Equality_m50B3548E4AC232558190B0052877B290AA1D436A((String_t*)L_41, (String_t*)_stringLiteralFC341A1966AF28A9A7A26EDFB78ABBF7DE4D0E1F, /*hidden argument*/NULL);
		if (L_42)
		{
			goto IL_033b;
		}
	}
	{
		goto IL_0426;
	}

IL_01cf:
	{
		String_t* L_43 = V_1;
		bool L_44;
		L_44 = String_op_Equality_m50B3548E4AC232558190B0052877B290AA1D436A((String_t*)L_43, (String_t*)_stringLiteralE8744A8B8BD390EB66CA0CAE2376C973E6904FFB, /*hidden argument*/NULL);
		if (L_44)
		{
			goto IL_0352;
		}
	}
	{
		goto IL_0426;
	}

IL_01e4:
	{
		String_t* L_45 = V_1;
		bool L_46;
		L_46 = String_op_Equality_m50B3548E4AC232558190B0052877B290AA1D436A((String_t*)L_45, (String_t*)_stringLiteralF9BE17D634D1B07BCDCDA77A87710C946D81307B, /*hidden argument*/NULL);
		if (L_46)
		{
			goto IL_0369;
		}
	}
	{
		goto IL_0426;
	}

IL_01f9:
	{
		String_t* L_47 = V_1;
		bool L_48;
		L_48 = String_op_Equality_m50B3548E4AC232558190B0052877B290AA1D436A((String_t*)L_47, (String_t*)_stringLiteralFA5EC7168E9633DAAEAA255ECB55030EA60F064F, /*hidden argument*/NULL);
		if (L_48)
		{
			goto IL_0380;
		}
	}
	{
		goto IL_0426;
	}

IL_020e:
	{
		String_t* L_49 = V_1;
		bool L_50;
		L_50 = String_op_Equality_m50B3548E4AC232558190B0052877B290AA1D436A((String_t*)L_49, (String_t*)_stringLiteralEB0A157666700D8227FD4B66A26FDC02035E89BF, /*hidden argument*/NULL);
		if (L_50)
		{
			goto IL_0392;
		}
	}
	{
		goto IL_0426;
	}

IL_0223:
	{
		String_t* L_51 = V_1;
		bool L_52;
		L_52 = String_op_Equality_m50B3548E4AC232558190B0052877B290AA1D436A((String_t*)L_51, (String_t*)_stringLiteral8E54BB51E569CB6A8D3C45D8AEF883A1559C1C0E, /*hidden argument*/NULL);
		if (L_52)
		{
			goto IL_03a4;
		}
	}
	{
		goto IL_0426;
	}

IL_0238:
	{
		String_t* L_53 = V_1;
		bool L_54;
		L_54 = String_op_Equality_m50B3548E4AC232558190B0052877B290AA1D436A((String_t*)L_53, (String_t*)_stringLiteral60E56797D122AE71D3774956F66C6EEB9EA22C05, /*hidden argument*/NULL);
		if (L_54)
		{
			goto IL_03b3;
		}
	}
	{
		goto IL_0426;
	}

IL_024d:
	{
		String_t* L_55 = V_1;
		bool L_56;
		L_56 = String_op_Equality_m50B3548E4AC232558190B0052877B290AA1D436A((String_t*)L_55, (String_t*)_stringLiteral01837E2252AC8026A5EA3567A663017A662FBB70, /*hidden argument*/NULL);
		if (L_56)
		{
			goto IL_03c2;
		}
	}
	{
		goto IL_0426;
	}

IL_0262:
	{
		String_t* L_57 = V_1;
		bool L_58;
		L_58 = String_op_Equality_m50B3548E4AC232558190B0052877B290AA1D436A((String_t*)L_57, (String_t*)_stringLiteralF66E9083C67855AB6EBB4B74342E385A72AACE32, /*hidden argument*/NULL);
		if (L_58)
		{
			goto IL_03d6;
		}
	}
	{
		goto IL_0426;
	}

IL_0277:
	{
		String_t* L_59 = V_1;
		bool L_60;
		L_60 = String_op_Equality_m50B3548E4AC232558190B0052877B290AA1D436A((String_t*)L_59, (String_t*)_stringLiteral91811EE149061D28B38320E2430CE8888AD6398B, /*hidden argument*/NULL);
		if (L_60)
		{
			goto IL_03ea;
		}
	}
	{
		goto IL_0426;
	}

IL_028c:
	{
		String_t* L_61 = V_1;
		bool L_62;
		L_62 = String_op_Equality_m50B3548E4AC232558190B0052877B290AA1D436A((String_t*)L_61, (String_t*)_stringLiteral6686C366F645244186604A3DA4B9A58012A85F1B, /*hidden argument*/NULL);
		if (L_62)
		{
			goto IL_03fe;
		}
	}
	{
		goto IL_0426;
	}

IL_02a1:
	{
		String_t* L_63 = V_1;
		bool L_64;
		L_64 = String_op_Equality_m50B3548E4AC232558190B0052877B290AA1D436A((String_t*)L_63, (String_t*)_stringLiteralCA1B66E295BD92E9FD3B6C708F09CA69A50BEFD1, /*hidden argument*/NULL);
		if (L_64)
		{
			goto IL_0412;
		}
	}
	{
		goto IL_0426;
	}

IL_02b6:
	{
		// instance.enabled = reader.Read<System.Boolean>(ES3Type_bool.Instance);
		ES3Reader_t2780AF8AA61DA2A817115CEF8612AC0E494D03C9 * L_65 = ___reader0;
		IL2CPP_RUNTIME_CLASS_INIT(ES3Type_bool_t8F309F7B9CC735FF1DEE68081B6E3CAB367745F4_il2cpp_TypeInfo_var);
		ES3Type_t8FBECB7AE75168648B9524E0C2A38DAD4555421D * L_66 = ((ES3Type_bool_t8F309F7B9CC735FF1DEE68081B6E3CAB367745F4_StaticFields*)il2cpp_codegen_static_fields_for(ES3Type_bool_t8F309F7B9CC735FF1DEE68081B6E3CAB367745F4_il2cpp_TypeInfo_var))->get_Instance_12();
		NullCheck((ES3Reader_t2780AF8AA61DA2A817115CEF8612AC0E494D03C9 *)L_65);
		bool L_67;
		L_67 = GenericVirtFuncInvoker1< bool, ES3Type_t8FBECB7AE75168648B9524E0C2A38DAD4555421D * >::Invoke(ES3Reader_Read_TisBoolean_t07D1E3F34E4813023D64F584DFF7B34C9D922F37_mC6D1B158268FF9B97822FF9F5B37FB1723FEDA22_RuntimeMethod_var, (ES3Reader_t2780AF8AA61DA2A817115CEF8612AC0E494D03C9 *)L_65, (ES3Type_t8FBECB7AE75168648B9524E0C2A38DAD4555421D *)L_66);
		ShapeModule_set_enabled_mF6FE8ED99E482A739C00F894235F4E2CD09B0D1E((ShapeModule_t3A89D143F5CAF357ECCE8B4A4F2BBD57816F98CA *)(ShapeModule_t3A89D143F5CAF357ECCE8B4A4F2BBD57816F98CA *)(&V_0), (bool)L_67, /*hidden argument*/NULL);
		// break;
		goto IL_042c;
	}

IL_02cd:
	{
		// instance.shapeType = reader.Read<UnityEngine.ParticleSystemShapeType>();
		ES3Reader_t2780AF8AA61DA2A817115CEF8612AC0E494D03C9 * L_68 = ___reader0;
		NullCheck((ES3Reader_t2780AF8AA61DA2A817115CEF8612AC0E494D03C9 *)L_68);
		int32_t L_69;
		L_69 = GenericVirtFuncInvoker0< int32_t >::Invoke(ES3Reader_Read_TisParticleSystemShapeType_t5B09F3A5A637F57DB1B2A6518E214AA2AA53D70C_mAE53212CB1FDDA51CF8CD0D39FCD446087DACA48_RuntimeMethod_var, (ES3Reader_t2780AF8AA61DA2A817115CEF8612AC0E494D03C9 *)L_68);
		ShapeModule_set_shapeType_mB772084527742749EB6AD690BAE47215FC71040D((ShapeModule_t3A89D143F5CAF357ECCE8B4A4F2BBD57816F98CA *)(ShapeModule_t3A89D143F5CAF357ECCE8B4A4F2BBD57816F98CA *)(&V_0), (int32_t)L_69, /*hidden argument*/NULL);
		// break;
		goto IL_042c;
	}

IL_02df:
	{
		// instance.randomDirectionAmount = reader.Read<System.Single>(ES3Type_float.Instance);
		ES3Reader_t2780AF8AA61DA2A817115CEF8612AC0E494D03C9 * L_70 = ___reader0;
		IL2CPP_RUNTIME_CLASS_INIT(ES3Type_float_tF86B773C86731BD9AD79448B860BBB178FE77644_il2cpp_TypeInfo_var);
		ES3Type_t8FBECB7AE75168648B9524E0C2A38DAD4555421D * L_71 = ((ES3Type_float_tF86B773C86731BD9AD79448B860BBB178FE77644_StaticFields*)il2cpp_codegen_static_fields_for(ES3Type_float_tF86B773C86731BD9AD79448B860BBB178FE77644_il2cpp_TypeInfo_var))->get_Instance_12();
		NullCheck((ES3Reader_t2780AF8AA61DA2A817115CEF8612AC0E494D03C9 *)L_70);
		float L_72;
		L_72 = GenericVirtFuncInvoker1< float, ES3Type_t8FBECB7AE75168648B9524E0C2A38DAD4555421D * >::Invoke(ES3Reader_Read_TisSingle_tE07797BA3C98D4CA9B5A19413C19A76688AB899E_m4A0416374498BDA042B8EB21E49B72326D6CE5F4_RuntimeMethod_var, (ES3Reader_t2780AF8AA61DA2A817115CEF8612AC0E494D03C9 *)L_70, (ES3Type_t8FBECB7AE75168648B9524E0C2A38DAD4555421D *)L_71);
		ShapeModule_set_randomDirectionAmount_m4E1BB67600D57383945F75F5A179EEEC01A76885((ShapeModule_t3A89D143F5CAF357ECCE8B4A4F2BBD57816F98CA *)(ShapeModule_t3A89D143F5CAF357ECCE8B4A4F2BBD57816F98CA *)(&V_0), (float)L_72, /*hidden argument*/NULL);
		// break;
		goto IL_042c;
	}

IL_02f6:
	{
		// instance.sphericalDirectionAmount = reader.Read<System.Single>(ES3Type_float.Instance);
		ES3Reader_t2780AF8AA61DA2A817115CEF8612AC0E494D03C9 * L_73 = ___reader0;
		IL2CPP_RUNTIME_CLASS_INIT(ES3Type_float_tF86B773C86731BD9AD79448B860BBB178FE77644_il2cpp_TypeInfo_var);
		ES3Type_t8FBECB7AE75168648B9524E0C2A38DAD4555421D * L_74 = ((ES3Type_float_tF86B773C86731BD9AD79448B860BBB178FE77644_StaticFields*)il2cpp_codegen_static_fields_for(ES3Type_float_tF86B773C86731BD9AD79448B860BBB178FE77644_il2cpp_TypeInfo_var))->get_Instance_12();
		NullCheck((ES3Reader_t2780AF8AA61DA2A817115CEF8612AC0E494D03C9 *)L_73);
		float L_75;
		L_75 = GenericVirtFuncInvoker1< float, ES3Type_t8FBECB7AE75168648B9524E0C2A38DAD4555421D * >::Invoke(ES3Reader_Read_TisSingle_tE07797BA3C98D4CA9B5A19413C19A76688AB899E_m4A0416374498BDA042B8EB21E49B72326D6CE5F4_RuntimeMethod_var, (ES3Reader_t2780AF8AA61DA2A817115CEF8612AC0E494D03C9 *)L_73, (ES3Type_t8FBECB7AE75168648B9524E0C2A38DAD4555421D *)L_74);
		ShapeModule_set_sphericalDirectionAmount_m02A9FBFF18AF24B821801DF5D833CA20A569F62B((ShapeModule_t3A89D143F5CAF357ECCE8B4A4F2BBD57816F98CA *)(ShapeModule_t3A89D143F5CAF357ECCE8B4A4F2BBD57816F98CA *)(&V_0), (float)L_75, /*hidden argument*/NULL);
		// break;
		goto IL_042c;
	}

IL_030d:
	{
		// instance.alignToDirection = reader.Read<System.Boolean>(ES3Type_bool.Instance);
		ES3Reader_t2780AF8AA61DA2A817115CEF8612AC0E494D03C9 * L_76 = ___reader0;
		IL2CPP_RUNTIME_CLASS_INIT(ES3Type_bool_t8F309F7B9CC735FF1DEE68081B6E3CAB367745F4_il2cpp_TypeInfo_var);
		ES3Type_t8FBECB7AE75168648B9524E0C2A38DAD4555421D * L_77 = ((ES3Type_bool_t8F309F7B9CC735FF1DEE68081B6E3CAB367745F4_StaticFields*)il2cpp_codegen_static_fields_for(ES3Type_bool_t8F309F7B9CC735FF1DEE68081B6E3CAB367745F4_il2cpp_TypeInfo_var))->get_Instance_12();
		NullCheck((ES3Reader_t2780AF8AA61DA2A817115CEF8612AC0E494D03C9 *)L_76);
		bool L_78;
		L_78 = GenericVirtFuncInvoker1< bool, ES3Type_t8FBECB7AE75168648B9524E0C2A38DAD4555421D * >::Invoke(ES3Reader_Read_TisBoolean_t07D1E3F34E4813023D64F584DFF7B34C9D922F37_mC6D1B158268FF9B97822FF9F5B37FB1723FEDA22_RuntimeMethod_var, (ES3Reader_t2780AF8AA61DA2A817115CEF8612AC0E494D03C9 *)L_76, (ES3Type_t8FBECB7AE75168648B9524E0C2A38DAD4555421D *)L_77);
		ShapeModule_set_alignToDirection_m396A57DCAD5F194E4DDDA0DF9C35E5508E3641BE((ShapeModule_t3A89D143F5CAF357ECCE8B4A4F2BBD57816F98CA *)(ShapeModule_t3A89D143F5CAF357ECCE8B4A4F2BBD57816F98CA *)(&V_0), (bool)L_78, /*hidden argument*/NULL);
		// break;
		goto IL_042c;
	}

IL_0324:
	{
		// instance.radius = reader.Read<System.Single>(ES3Type_float.Instance);
		ES3Reader_t2780AF8AA61DA2A817115CEF8612AC0E494D03C9 * L_79 = ___reader0;
		IL2CPP_RUNTIME_CLASS_INIT(ES3Type_float_tF86B773C86731BD9AD79448B860BBB178FE77644_il2cpp_TypeInfo_var);
		ES3Type_t8FBECB7AE75168648B9524E0C2A38DAD4555421D * L_80 = ((ES3Type_float_tF86B773C86731BD9AD79448B860BBB178FE77644_StaticFields*)il2cpp_codegen_static_fields_for(ES3Type_float_tF86B773C86731BD9AD79448B860BBB178FE77644_il2cpp_TypeInfo_var))->get_Instance_12();
		NullCheck((ES3Reader_t2780AF8AA61DA2A817115CEF8612AC0E494D03C9 *)L_79);
		float L_81;
		L_81 = GenericVirtFuncInvoker1< float, ES3Type_t8FBECB7AE75168648B9524E0C2A38DAD4555421D * >::Invoke(ES3Reader_Read_TisSingle_tE07797BA3C98D4CA9B5A19413C19A76688AB899E_m4A0416374498BDA042B8EB21E49B72326D6CE5F4_RuntimeMethod_var, (ES3Reader_t2780AF8AA61DA2A817115CEF8612AC0E494D03C9 *)L_79, (ES3Type_t8FBECB7AE75168648B9524E0C2A38DAD4555421D *)L_80);
		ShapeModule_set_radius_mFC12B15750268316924771461C09B1A311A16DEA((ShapeModule_t3A89D143F5CAF357ECCE8B4A4F2BBD57816F98CA *)(ShapeModule_t3A89D143F5CAF357ECCE8B4A4F2BBD57816F98CA *)(&V_0), (float)L_81, /*hidden argument*/NULL);
		// break;
		goto IL_042c;
	}

IL_033b:
	{
		// instance.angle = reader.Read<System.Single>(ES3Type_float.Instance);
		ES3Reader_t2780AF8AA61DA2A817115CEF8612AC0E494D03C9 * L_82 = ___reader0;
		IL2CPP_RUNTIME_CLASS_INIT(ES3Type_float_tF86B773C86731BD9AD79448B860BBB178FE77644_il2cpp_TypeInfo_var);
		ES3Type_t8FBECB7AE75168648B9524E0C2A38DAD4555421D * L_83 = ((ES3Type_float_tF86B773C86731BD9AD79448B860BBB178FE77644_StaticFields*)il2cpp_codegen_static_fields_for(ES3Type_float_tF86B773C86731BD9AD79448B860BBB178FE77644_il2cpp_TypeInfo_var))->get_Instance_12();
		NullCheck((ES3Reader_t2780AF8AA61DA2A817115CEF8612AC0E494D03C9 *)L_82);
		float L_84;
		L_84 = GenericVirtFuncInvoker1< float, ES3Type_t8FBECB7AE75168648B9524E0C2A38DAD4555421D * >::Invoke(ES3Reader_Read_TisSingle_tE07797BA3C98D4CA9B5A19413C19A76688AB899E_m4A0416374498BDA042B8EB21E49B72326D6CE5F4_RuntimeMethod_var, (ES3Reader_t2780AF8AA61DA2A817115CEF8612AC0E494D03C9 *)L_82, (ES3Type_t8FBECB7AE75168648B9524E0C2A38DAD4555421D *)L_83);
		ShapeModule_set_angle_m20629BB5FE89F2040960548B45F6EC801B1DB8AA((ShapeModule_t3A89D143F5CAF357ECCE8B4A4F2BBD57816F98CA *)(ShapeModule_t3A89D143F5CAF357ECCE8B4A4F2BBD57816F98CA *)(&V_0), (float)L_84, /*hidden argument*/NULL);
		// break;
		goto IL_042c;
	}

IL_0352:
	{
		// instance.length = reader.Read<System.Single>(ES3Type_float.Instance);
		ES3Reader_t2780AF8AA61DA2A817115CEF8612AC0E494D03C9 * L_85 = ___reader0;
		IL2CPP_RUNTIME_CLASS_INIT(ES3Type_float_tF86B773C86731BD9AD79448B860BBB178FE77644_il2cpp_TypeInfo_var);
		ES3Type_t8FBECB7AE75168648B9524E0C2A38DAD4555421D * L_86 = ((ES3Type_float_tF86B773C86731BD9AD79448B860BBB178FE77644_StaticFields*)il2cpp_codegen_static_fields_for(ES3Type_float_tF86B773C86731BD9AD79448B860BBB178FE77644_il2cpp_TypeInfo_var))->get_Instance_12();
		NullCheck((ES3Reader_t2780AF8AA61DA2A817115CEF8612AC0E494D03C9 *)L_85);
		float L_87;
		L_87 = GenericVirtFuncInvoker1< float, ES3Type_t8FBECB7AE75168648B9524E0C2A38DAD4555421D * >::Invoke(ES3Reader_Read_TisSingle_tE07797BA3C98D4CA9B5A19413C19A76688AB899E_m4A0416374498BDA042B8EB21E49B72326D6CE5F4_RuntimeMethod_var, (ES3Reader_t2780AF8AA61DA2A817115CEF8612AC0E494D03C9 *)L_85, (ES3Type_t8FBECB7AE75168648B9524E0C2A38DAD4555421D *)L_86);
		ShapeModule_set_length_m744975258664B53F38A8B8BE38A86A0FFDD85BC7((ShapeModule_t3A89D143F5CAF357ECCE8B4A4F2BBD57816F98CA *)(ShapeModule_t3A89D143F5CAF357ECCE8B4A4F2BBD57816F98CA *)(&V_0), (float)L_87, /*hidden argument*/NULL);
		// break;
		goto IL_042c;
	}

IL_0369:
	{
		// instance.scale = reader.Read<UnityEngine.Vector3>(ES3Type_Vector3.Instance);
		ES3Reader_t2780AF8AA61DA2A817115CEF8612AC0E494D03C9 * L_88 = ___reader0;
		IL2CPP_RUNTIME_CLASS_INIT(ES3Type_Vector3_tA9144E81A20D2F28726F02DE1AE6CD3F9C12B54F_il2cpp_TypeInfo_var);
		ES3Type_t8FBECB7AE75168648B9524E0C2A38DAD4555421D * L_89 = ((ES3Type_Vector3_tA9144E81A20D2F28726F02DE1AE6CD3F9C12B54F_StaticFields*)il2cpp_codegen_static_fields_for(ES3Type_Vector3_tA9144E81A20D2F28726F02DE1AE6CD3F9C12B54F_il2cpp_TypeInfo_var))->get_Instance_12();
		NullCheck((ES3Reader_t2780AF8AA61DA2A817115CEF8612AC0E494D03C9 *)L_88);
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_90;
		L_90 = GenericVirtFuncInvoker1< Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E , ES3Type_t8FBECB7AE75168648B9524E0C2A38DAD4555421D * >::Invoke(ES3Reader_Read_TisVector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E_mBA4CD9D0F45E78BA43FE2DB8EC33CC3A5433DE15_RuntimeMethod_var, (ES3Reader_t2780AF8AA61DA2A817115CEF8612AC0E494D03C9 *)L_88, (ES3Type_t8FBECB7AE75168648B9524E0C2A38DAD4555421D *)L_89);
		ShapeModule_set_scale_m2951583898F18878E6F238100045072F44AD9158((ShapeModule_t3A89D143F5CAF357ECCE8B4A4F2BBD57816F98CA *)(ShapeModule_t3A89D143F5CAF357ECCE8B4A4F2BBD57816F98CA *)(&V_0), (Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E )L_90, /*hidden argument*/NULL);
		// break;
		goto IL_042c;
	}

IL_0380:
	{
		// instance.meshShapeType = reader.Read<UnityEngine.ParticleSystemMeshShapeType>();
		ES3Reader_t2780AF8AA61DA2A817115CEF8612AC0E494D03C9 * L_91 = ___reader0;
		NullCheck((ES3Reader_t2780AF8AA61DA2A817115CEF8612AC0E494D03C9 *)L_91);
		int32_t L_92;
		L_92 = GenericVirtFuncInvoker0< int32_t >::Invoke(ES3Reader_Read_TisParticleSystemMeshShapeType_t7C9518403F30CC7AF7F9124FD61EC1187B42EFD2_mF1A19C0F8BBA6E44737F158F3BE4CC478F623F10_RuntimeMethod_var, (ES3Reader_t2780AF8AA61DA2A817115CEF8612AC0E494D03C9 *)L_91);
		ShapeModule_set_meshShapeType_m5DAD94B71F2110F45E454C30DE052153129891C2((ShapeModule_t3A89D143F5CAF357ECCE8B4A4F2BBD57816F98CA *)(ShapeModule_t3A89D143F5CAF357ECCE8B4A4F2BBD57816F98CA *)(&V_0), (int32_t)L_92, /*hidden argument*/NULL);
		// break;
		goto IL_042c;
	}

IL_0392:
	{
		// instance.mesh = reader.Read<UnityEngine.Mesh>();
		ES3Reader_t2780AF8AA61DA2A817115CEF8612AC0E494D03C9 * L_93 = ___reader0;
		NullCheck((ES3Reader_t2780AF8AA61DA2A817115CEF8612AC0E494D03C9 *)L_93);
		Mesh_t2F5992DBA650D5862B43D3823ACD997132A57DA6 * L_94;
		L_94 = GenericVirtFuncInvoker0< Mesh_t2F5992DBA650D5862B43D3823ACD997132A57DA6 * >::Invoke(ES3Reader_Read_TisMesh_t2F5992DBA650D5862B43D3823ACD997132A57DA6_m65DF5BA41642A39B77979CC49472E4DE7A1660F9_RuntimeMethod_var, (ES3Reader_t2780AF8AA61DA2A817115CEF8612AC0E494D03C9 *)L_93);
		ShapeModule_set_mesh_mD3E276A9E45442E75AD8A9AA4BD88C9112BD77CA((ShapeModule_t3A89D143F5CAF357ECCE8B4A4F2BBD57816F98CA *)(ShapeModule_t3A89D143F5CAF357ECCE8B4A4F2BBD57816F98CA *)(&V_0), (Mesh_t2F5992DBA650D5862B43D3823ACD997132A57DA6 *)L_94, /*hidden argument*/NULL);
		// break;
		goto IL_042c;
	}

IL_03a4:
	{
		// instance.meshRenderer = reader.Read<UnityEngine.MeshRenderer>();
		ES3Reader_t2780AF8AA61DA2A817115CEF8612AC0E494D03C9 * L_95 = ___reader0;
		NullCheck((ES3Reader_t2780AF8AA61DA2A817115CEF8612AC0E494D03C9 *)L_95);
		MeshRenderer_tCD983A2F635E12BCB0BAA2E635D96A318757908B * L_96;
		L_96 = GenericVirtFuncInvoker0< MeshRenderer_tCD983A2F635E12BCB0BAA2E635D96A318757908B * >::Invoke(ES3Reader_Read_TisMeshRenderer_tCD983A2F635E12BCB0BAA2E635D96A318757908B_m773CE5481730EBCC6A377F918946EB11B304050A_RuntimeMethod_var, (ES3Reader_t2780AF8AA61DA2A817115CEF8612AC0E494D03C9 *)L_95);
		ShapeModule_set_meshRenderer_m334D69AC8C29F5E393732D62BBB3645296614059((ShapeModule_t3A89D143F5CAF357ECCE8B4A4F2BBD57816F98CA *)(ShapeModule_t3A89D143F5CAF357ECCE8B4A4F2BBD57816F98CA *)(&V_0), (MeshRenderer_tCD983A2F635E12BCB0BAA2E635D96A318757908B *)L_96, /*hidden argument*/NULL);
		// break;
		goto IL_042c;
	}

IL_03b3:
	{
		// instance.skinnedMeshRenderer = reader.Read<UnityEngine.SkinnedMeshRenderer>();
		ES3Reader_t2780AF8AA61DA2A817115CEF8612AC0E494D03C9 * L_97 = ___reader0;
		NullCheck((ES3Reader_t2780AF8AA61DA2A817115CEF8612AC0E494D03C9 *)L_97);
		SkinnedMeshRenderer_t126F4D6010E0F4B2685A7817B0A9171805D8F496 * L_98;
		L_98 = GenericVirtFuncInvoker0< SkinnedMeshRenderer_t126F4D6010E0F4B2685A7817B0A9171805D8F496 * >::Invoke(ES3Reader_Read_TisSkinnedMeshRenderer_t126F4D6010E0F4B2685A7817B0A9171805D8F496_m23D6569D5CE7B3E1C67BDB470CDEDEF25A835F25_RuntimeMethod_var, (ES3Reader_t2780AF8AA61DA2A817115CEF8612AC0E494D03C9 *)L_97);
		ShapeModule_set_skinnedMeshRenderer_m9DEF9CD332D3F10BE7D99EFECC0971FB5AE83F56((ShapeModule_t3A89D143F5CAF357ECCE8B4A4F2BBD57816F98CA *)(ShapeModule_t3A89D143F5CAF357ECCE8B4A4F2BBD57816F98CA *)(&V_0), (SkinnedMeshRenderer_t126F4D6010E0F4B2685A7817B0A9171805D8F496 *)L_98, /*hidden argument*/NULL);
		// break;
		goto IL_042c;
	}

IL_03c2:
	{
		// instance.useMeshMaterialIndex = reader.Read<System.Boolean>(ES3Type_bool.Instance);
		ES3Reader_t2780AF8AA61DA2A817115CEF8612AC0E494D03C9 * L_99 = ___reader0;
		IL2CPP_RUNTIME_CLASS_INIT(ES3Type_bool_t8F309F7B9CC735FF1DEE68081B6E3CAB367745F4_il2cpp_TypeInfo_var);
		ES3Type_t8FBECB7AE75168648B9524E0C2A38DAD4555421D * L_100 = ((ES3Type_bool_t8F309F7B9CC735FF1DEE68081B6E3CAB367745F4_StaticFields*)il2cpp_codegen_static_fields_for(ES3Type_bool_t8F309F7B9CC735FF1DEE68081B6E3CAB367745F4_il2cpp_TypeInfo_var))->get_Instance_12();
		NullCheck((ES3Reader_t2780AF8AA61DA2A817115CEF8612AC0E494D03C9 *)L_99);
		bool L_101;
		L_101 = GenericVirtFuncInvoker1< bool, ES3Type_t8FBECB7AE75168648B9524E0C2A38DAD4555421D * >::Invoke(ES3Reader_Read_TisBoolean_t07D1E3F34E4813023D64F584DFF7B34C9D922F37_mC6D1B158268FF9B97822FF9F5B37FB1723FEDA22_RuntimeMethod_var, (ES3Reader_t2780AF8AA61DA2A817115CEF8612AC0E494D03C9 *)L_99, (ES3Type_t8FBECB7AE75168648B9524E0C2A38DAD4555421D *)L_100);
		ShapeModule_set_useMeshMaterialIndex_m6130573C0966ED3B5C590665747305BCEFD3F901((ShapeModule_t3A89D143F5CAF357ECCE8B4A4F2BBD57816F98CA *)(ShapeModule_t3A89D143F5CAF357ECCE8B4A4F2BBD57816F98CA *)(&V_0), (bool)L_101, /*hidden argument*/NULL);
		// break;
		goto IL_042c;
	}

IL_03d6:
	{
		// instance.meshMaterialIndex = reader.Read<System.Int32>(ES3Type_int.Instance);
		ES3Reader_t2780AF8AA61DA2A817115CEF8612AC0E494D03C9 * L_102 = ___reader0;
		IL2CPP_RUNTIME_CLASS_INIT(ES3Type_int_tF64C15D40AD0CC7C15BCD1CEC3C5C6BF837BD167_il2cpp_TypeInfo_var);
		ES3Type_t8FBECB7AE75168648B9524E0C2A38DAD4555421D * L_103 = ((ES3Type_int_tF64C15D40AD0CC7C15BCD1CEC3C5C6BF837BD167_StaticFields*)il2cpp_codegen_static_fields_for(ES3Type_int_tF64C15D40AD0CC7C15BCD1CEC3C5C6BF837BD167_il2cpp_TypeInfo_var))->get_Instance_12();
		NullCheck((ES3Reader_t2780AF8AA61DA2A817115CEF8612AC0E494D03C9 *)L_102);
		int32_t L_104;
		L_104 = GenericVirtFuncInvoker1< int32_t, ES3Type_t8FBECB7AE75168648B9524E0C2A38DAD4555421D * >::Invoke(ES3Reader_Read_TisInt32_tFDE5F8CD43D10453F6A2E0C77FE48C6CC7009046_m2B74AA6627F5B1D21171D56C42F71DE5A7C1B4A6_RuntimeMethod_var, (ES3Reader_t2780AF8AA61DA2A817115CEF8612AC0E494D03C9 *)L_102, (ES3Type_t8FBECB7AE75168648B9524E0C2A38DAD4555421D *)L_103);
		ShapeModule_set_meshMaterialIndex_m1205DDEB353204D5941654FB79164AD5BAF0A59C((ShapeModule_t3A89D143F5CAF357ECCE8B4A4F2BBD57816F98CA *)(ShapeModule_t3A89D143F5CAF357ECCE8B4A4F2BBD57816F98CA *)(&V_0), (int32_t)L_104, /*hidden argument*/NULL);
		// break;
		goto IL_042c;
	}

IL_03ea:
	{
		// instance.useMeshColors = reader.Read<System.Boolean>(ES3Type_bool.Instance);
		ES3Reader_t2780AF8AA61DA2A817115CEF8612AC0E494D03C9 * L_105 = ___reader0;
		IL2CPP_RUNTIME_CLASS_INIT(ES3Type_bool_t8F309F7B9CC735FF1DEE68081B6E3CAB367745F4_il2cpp_TypeInfo_var);
		ES3Type_t8FBECB7AE75168648B9524E0C2A38DAD4555421D * L_106 = ((ES3Type_bool_t8F309F7B9CC735FF1DEE68081B6E3CAB367745F4_StaticFields*)il2cpp_codegen_static_fields_for(ES3Type_bool_t8F309F7B9CC735FF1DEE68081B6E3CAB367745F4_il2cpp_TypeInfo_var))->get_Instance_12();
		NullCheck((ES3Reader_t2780AF8AA61DA2A817115CEF8612AC0E494D03C9 *)L_105);
		bool L_107;
		L_107 = GenericVirtFuncInvoker1< bool, ES3Type_t8FBECB7AE75168648B9524E0C2A38DAD4555421D * >::Invoke(ES3Reader_Read_TisBoolean_t07D1E3F34E4813023D64F584DFF7B34C9D922F37_mC6D1B158268FF9B97822FF9F5B37FB1723FEDA22_RuntimeMethod_var, (ES3Reader_t2780AF8AA61DA2A817115CEF8612AC0E494D03C9 *)L_105, (ES3Type_t8FBECB7AE75168648B9524E0C2A38DAD4555421D *)L_106);
		ShapeModule_set_useMeshColors_m071D000F330805B1EBCF09B40AC4EB9942EB9F57((ShapeModule_t3A89D143F5CAF357ECCE8B4A4F2BBD57816F98CA *)(ShapeModule_t3A89D143F5CAF357ECCE8B4A4F2BBD57816F98CA *)(&V_0), (bool)L_107, /*hidden argument*/NULL);
		// break;
		goto IL_042c;
	}

IL_03fe:
	{
		// instance.normalOffset = reader.Read<System.Single>(ES3Type_float.Instance);
		ES3Reader_t2780AF8AA61DA2A817115CEF8612AC0E494D03C9 * L_108 = ___reader0;
		IL2CPP_RUNTIME_CLASS_INIT(ES3Type_float_tF86B773C86731BD9AD79448B860BBB178FE77644_il2cpp_TypeInfo_var);
		ES3Type_t8FBECB7AE75168648B9524E0C2A38DAD4555421D * L_109 = ((ES3Type_float_tF86B773C86731BD9AD79448B860BBB178FE77644_StaticFields*)il2cpp_codegen_static_fields_for(ES3Type_float_tF86B773C86731BD9AD79448B860BBB178FE77644_il2cpp_TypeInfo_var))->get_Instance_12();
		NullCheck((ES3Reader_t2780AF8AA61DA2A817115CEF8612AC0E494D03C9 *)L_108);
		float L_110;
		L_110 = GenericVirtFuncInvoker1< float, ES3Type_t8FBECB7AE75168648B9524E0C2A38DAD4555421D * >::Invoke(ES3Reader_Read_TisSingle_tE07797BA3C98D4CA9B5A19413C19A76688AB899E_m4A0416374498BDA042B8EB21E49B72326D6CE5F4_RuntimeMethod_var, (ES3Reader_t2780AF8AA61DA2A817115CEF8612AC0E494D03C9 *)L_108, (ES3Type_t8FBECB7AE75168648B9524E0C2A38DAD4555421D *)L_109);
		ShapeModule_set_normalOffset_m81A315286BAA5F52AAED6B317734FB03B2DCE9FD((ShapeModule_t3A89D143F5CAF357ECCE8B4A4F2BBD57816F98CA *)(ShapeModule_t3A89D143F5CAF357ECCE8B4A4F2BBD57816F98CA *)(&V_0), (float)L_110, /*hidden argument*/NULL);
		// break;
		goto IL_042c;
	}

IL_0412:
	{
		// instance.arc = reader.Read<System.Single>(ES3Type_float.Instance);
		ES3Reader_t2780AF8AA61DA2A817115CEF8612AC0E494D03C9 * L_111 = ___reader0;
		IL2CPP_RUNTIME_CLASS_INIT(ES3Type_float_tF86B773C86731BD9AD79448B860BBB178FE77644_il2cpp_TypeInfo_var);
		ES3Type_t8FBECB7AE75168648B9524E0C2A38DAD4555421D * L_112 = ((ES3Type_float_tF86B773C86731BD9AD79448B860BBB178FE77644_StaticFields*)il2cpp_codegen_static_fields_for(ES3Type_float_tF86B773C86731BD9AD79448B860BBB178FE77644_il2cpp_TypeInfo_var))->get_Instance_12();
		NullCheck((ES3Reader_t2780AF8AA61DA2A817115CEF8612AC0E494D03C9 *)L_111);
		float L_113;
		L_113 = GenericVirtFuncInvoker1< float, ES3Type_t8FBECB7AE75168648B9524E0C2A38DAD4555421D * >::Invoke(ES3Reader_Read_TisSingle_tE07797BA3C98D4CA9B5A19413C19A76688AB899E_m4A0416374498BDA042B8EB21E49B72326D6CE5F4_RuntimeMethod_var, (ES3Reader_t2780AF8AA61DA2A817115CEF8612AC0E494D03C9 *)L_111, (ES3Type_t8FBECB7AE75168648B9524E0C2A38DAD4555421D *)L_112);
		ShapeModule_set_arc_m4A2578EBD4747DB3D9ED74AB53E488872CFA541F((ShapeModule_t3A89D143F5CAF357ECCE8B4A4F2BBD57816F98CA *)(ShapeModule_t3A89D143F5CAF357ECCE8B4A4F2BBD57816F98CA *)(&V_0), (float)L_113, /*hidden argument*/NULL);
		// break;
		goto IL_042c;
	}

IL_0426:
	{
		// reader.Skip();
		ES3Reader_t2780AF8AA61DA2A817115CEF8612AC0E494D03C9 * L_114 = ___reader0;
		NullCheck((ES3Reader_t2780AF8AA61DA2A817115CEF8612AC0E494D03C9 *)L_114);
		VirtActionInvoker0::Invoke(41 /* System.Void ES3Reader::Skip() */, (ES3Reader_t2780AF8AA61DA2A817115CEF8612AC0E494D03C9 *)L_114);
	}

IL_042c:
	{
		// while((propertyName = reader.ReadPropertyName()) != null)
		ES3Reader_t2780AF8AA61DA2A817115CEF8612AC0E494D03C9 * L_115 = ___reader0;
		NullCheck((ES3Reader_t2780AF8AA61DA2A817115CEF8612AC0E494D03C9 *)L_115);
		String_t* L_116;
		L_116 = VirtFuncInvoker0< String_t* >::Invoke(21 /* System.String ES3Reader::ReadPropertyName() */, (ES3Reader_t2780AF8AA61DA2A817115CEF8612AC0E494D03C9 *)L_115);
		String_t* L_117 = (String_t*)L_116;
		V_1 = (String_t*)L_117;
		if (L_117)
		{
			goto IL_000c;
		}
	}
	{
		// }
		return;
	}
}
// System.Void ES3Types.ES3Type_ShapeModule::ReadInto<UnityEngine.ParticleSystem/ForceOverLifetimeModule>(ES3Reader,System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ES3Type_ShapeModule_ReadInto_TisForceOverLifetimeModule_t55EF1F67023C6920BB93B40FAC17E5665E9BBCF7_mE3220AA65E51659FA406E2EE91BBAAE18280E784_gshared (ES3Type_ShapeModule_t67010A74D4F69A245D5F06976239CAB4279B5377 * __this, ES3Reader_t2780AF8AA61DA2A817115CEF8612AC0E494D03C9 * ___reader0, RuntimeObject * ___obj1, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ES3Reader_Read_TisBoolean_t07D1E3F34E4813023D64F584DFF7B34C9D922F37_mC6D1B158268FF9B97822FF9F5B37FB1723FEDA22_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ES3Reader_Read_TisInt32_tFDE5F8CD43D10453F6A2E0C77FE48C6CC7009046_m2B74AA6627F5B1D21171D56C42F71DE5A7C1B4A6_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ES3Reader_Read_TisMeshRenderer_tCD983A2F635E12BCB0BAA2E635D96A318757908B_m773CE5481730EBCC6A377F918946EB11B304050A_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ES3Reader_Read_TisMesh_t2F5992DBA650D5862B43D3823ACD997132A57DA6_m65DF5BA41642A39B77979CC49472E4DE7A1660F9_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ES3Reader_Read_TisParticleSystemMeshShapeType_t7C9518403F30CC7AF7F9124FD61EC1187B42EFD2_mF1A19C0F8BBA6E44737F158F3BE4CC478F623F10_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ES3Reader_Read_TisParticleSystemShapeType_t5B09F3A5A637F57DB1B2A6518E214AA2AA53D70C_mAE53212CB1FDDA51CF8CD0D39FCD446087DACA48_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ES3Reader_Read_TisSingle_tE07797BA3C98D4CA9B5A19413C19A76688AB899E_m4A0416374498BDA042B8EB21E49B72326D6CE5F4_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ES3Reader_Read_TisSkinnedMeshRenderer_t126F4D6010E0F4B2685A7817B0A9171805D8F496_m23D6569D5CE7B3E1C67BDB470CDEDEF25A835F25_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ES3Reader_Read_TisVector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E_mBA4CD9D0F45E78BA43FE2DB8EC33CC3A5433DE15_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ES3Type_Vector3_tA9144E81A20D2F28726F02DE1AE6CD3F9C12B54F_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ES3Type_bool_t8F309F7B9CC735FF1DEE68081B6E3CAB367745F4_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ES3Type_float_tF86B773C86731BD9AD79448B860BBB178FE77644_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ES3Type_int_tF64C15D40AD0CC7C15BCD1CEC3C5C6BF837BD167_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ShapeModule_t3A89D143F5CAF357ECCE8B4A4F2BBD57816F98CA_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral01837E2252AC8026A5EA3567A663017A662FBB70);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral1228466552C1791B2019A329AFE94665D441168A);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral60E56797D122AE71D3774956F66C6EEB9EA22C05);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral6686C366F645244186604A3DA4B9A58012A85F1B);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral82BECCAD895076775062861CDB46AADEF913D969);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral8C9F18A4F030B96447955FBBA1A99FFC43B5D8E0);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral8E54BB51E569CB6A8D3C45D8AEF883A1559C1C0E);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral91811EE149061D28B38320E2430CE8888AD6398B);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralBD49F93A7BC78A69E385CEC0E78F434BD2845A17);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralCA1B66E295BD92E9FD3B6C708F09CA69A50BEFD1);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralE8744A8B8BD390EB66CA0CAE2376C973E6904FFB);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralEB0A157666700D8227FD4B66A26FDC02035E89BF);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralED1F119527A0BCA45125EF8E0F719985DA86C0E1);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralF66E9083C67855AB6EBB4B74342E385A72AACE32);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralF9BE17D634D1B07BCDCDA77A87710C946D81307B);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralF9D225733E1D10F9344C755C4A9C0870CD1DE97B);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralFA5EC7168E9633DAAEAA255ECB55030EA60F064F);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralFC341A1966AF28A9A7A26EDFB78ABBF7DE4D0E1F);
		s_Il2CppMethodInitialized = true;
	}
	ShapeModule_t3A89D143F5CAF357ECCE8B4A4F2BBD57816F98CA  V_0;
	memset((&V_0), 0, sizeof(V_0));
	String_t* V_1 = NULL;
	uint32_t V_2 = 0;
	{
		// var instance = (UnityEngine.ParticleSystem.ShapeModule)obj;
		RuntimeObject * L_0 = ___obj1;
		V_0 = (ShapeModule_t3A89D143F5CAF357ECCE8B4A4F2BBD57816F98CA )((*(ShapeModule_t3A89D143F5CAF357ECCE8B4A4F2BBD57816F98CA *)((ShapeModule_t3A89D143F5CAF357ECCE8B4A4F2BBD57816F98CA *)UnBox(L_0, ShapeModule_t3A89D143F5CAF357ECCE8B4A4F2BBD57816F98CA_il2cpp_TypeInfo_var))));
		goto IL_042c;
	}

IL_000c:
	{
		String_t* L_1 = V_1;
		if (!L_1)
		{
			goto IL_0426;
		}
	}
	{
		String_t* L_2 = V_1;
		uint32_t L_3;
		L_3 = U3CPrivateImplementationDetailsU3E_ComputeStringHash_m3ADC1F612F9EE3DD518E6F0023A0DE0EE2B120A7((String_t*)L_2, /*hidden argument*/NULL);
		V_2 = (uint32_t)L_3;
		uint32_t L_4 = V_2;
		if ((!(((uint32_t)L_4) <= ((uint32_t)((int32_t)-2104025999)))))
		{
			goto IL_00b3;
		}
	}
	{
		uint32_t L_5 = V_2;
		if ((!(((uint32_t)L_5) <= ((uint32_t)((int32_t)666576729)))))
		{
			goto IL_006a;
		}
	}
	{
		uint32_t L_6 = V_2;
		if ((!(((uint32_t)L_6) <= ((uint32_t)((int32_t)49525662)))))
		{
			goto IL_004f;
		}
	}
	{
		uint32_t L_7 = V_2;
		if ((((int32_t)L_7) == ((int32_t)((int32_t)24602224))))
		{
			goto IL_024d;
		}
	}
	{
		uint32_t L_8 = V_2;
		if ((((int32_t)L_8) == ((int32_t)((int32_t)49525662))))
		{
			goto IL_013c;
		}
	}
	{
		goto IL_0426;
	}

IL_004f:
	{
		uint32_t L_9 = V_2;
		if ((((int32_t)L_9) == ((int32_t)((int32_t)230313139))))
		{
			goto IL_01a5;
		}
	}
	{
		uint32_t L_10 = V_2;
		if ((((int32_t)L_10) == ((int32_t)((int32_t)666576729))))
		{
			goto IL_01f9;
		}
	}
	{
		goto IL_0426;
	}

IL_006a:
	{
		uint32_t L_11 = V_2;
		if ((!(((uint32_t)L_11) <= ((uint32_t)((int32_t)955488309)))))
		{
			goto IL_008d;
		}
	}
	{
		uint32_t L_12 = V_2;
		if ((((int32_t)L_12) == ((int32_t)((int32_t)923624301))))
		{
			goto IL_0238;
		}
	}
	{
		uint32_t L_13 = V_2;
		if ((((int32_t)L_13) == ((int32_t)((int32_t)955488309))))
		{
			goto IL_028c;
		}
	}
	{
		goto IL_0426;
	}

IL_008d:
	{
		uint32_t L_14 = V_2;
		if ((((int32_t)L_14) == ((int32_t)((int32_t)980363995))))
		{
			goto IL_02a1;
		}
	}
	{
		uint32_t L_15 = V_2;
		if ((((int32_t)L_15) == ((int32_t)((int32_t)985988853))))
		{
			goto IL_017b;
		}
	}
	{
		uint32_t L_16 = V_2;
		if ((((int32_t)L_16) == ((int32_t)((int32_t)-2104025999))))
		{
			goto IL_01e4;
		}
	}
	{
		goto IL_0426;
	}

IL_00b3:
	{
		uint32_t L_17 = V_2;
		if ((!(((uint32_t)L_17) <= ((uint32_t)((int32_t)-1473810612)))))
		{
			goto IL_00f6;
		}
	}
	{
		uint32_t L_18 = V_2;
		if ((!(((uint32_t)L_18) <= ((uint32_t)((int32_t)-1726928010)))))
		{
			goto IL_00db;
		}
	}
	{
		uint32_t L_19 = V_2;
		if ((((int32_t)L_19) == ((int32_t)((int32_t)-2083506667))))
		{
			goto IL_01cf;
		}
	}
	{
		uint32_t L_20 = V_2;
		if ((((int32_t)L_20) == ((int32_t)((int32_t)-1726928010))))
		{
			goto IL_0151;
		}
	}
	{
		goto IL_0426;
	}

IL_00db:
	{
		uint32_t L_21 = V_2;
		if ((((int32_t)L_21) == ((int32_t)((int32_t)-1593786692))))
		{
			goto IL_020e;
		}
	}
	{
		uint32_t L_22 = V_2;
		if ((((int32_t)L_22) == ((int32_t)((int32_t)-1473810612))))
		{
			goto IL_0190;
		}
	}
	{
		goto IL_0426;
	}

IL_00f6:
	{
		uint32_t L_23 = V_2;
		if ((!(((uint32_t)L_23) <= ((uint32_t)((int32_t)-1386986472)))))
		{
			goto IL_0116;
		}
	}
	{
		uint32_t L_24 = V_2;
		if ((((int32_t)L_24) == ((int32_t)((int32_t)-1412039661))))
		{
			goto IL_0166;
		}
	}
	{
		uint32_t L_25 = V_2;
		if ((((int32_t)L_25) == ((int32_t)((int32_t)-1386986472))))
		{
			goto IL_01ba;
		}
	}
	{
		goto IL_0426;
	}

IL_0116:
	{
		uint32_t L_26 = V_2;
		if ((((int32_t)L_26) == ((int32_t)((int32_t)-584064197))))
		{
			goto IL_0223;
		}
	}
	{
		uint32_t L_27 = V_2;
		if ((((int32_t)L_27) == ((int32_t)((int32_t)-473474755))))
		{
			goto IL_0277;
		}
	}
	{
		uint32_t L_28 = V_2;
		if ((((int32_t)L_28) == ((int32_t)((int32_t)-365686981))))
		{
			goto IL_0262;
		}
	}
	{
		goto IL_0426;
	}

IL_013c:
	{
		String_t* L_29 = V_1;
		bool L_30;
		L_30 = String_op_Equality_m50B3548E4AC232558190B0052877B290AA1D436A((String_t*)L_29, (String_t*)_stringLiteralF9D225733E1D10F9344C755C4A9C0870CD1DE97B, /*hidden argument*/NULL);
		if (L_30)
		{
			goto IL_02b6;
		}
	}
	{
		goto IL_0426;
	}

IL_0151:
	{
		String_t* L_31 = V_1;
		bool L_32;
		L_32 = String_op_Equality_m50B3548E4AC232558190B0052877B290AA1D436A((String_t*)L_31, (String_t*)_stringLiteral82BECCAD895076775062861CDB46AADEF913D969, /*hidden argument*/NULL);
		if (L_32)
		{
			goto IL_02cd;
		}
	}
	{
		goto IL_0426;
	}

IL_0166:
	{
		String_t* L_33 = V_1;
		bool L_34;
		L_34 = String_op_Equality_m50B3548E4AC232558190B0052877B290AA1D436A((String_t*)L_33, (String_t*)_stringLiteral1228466552C1791B2019A329AFE94665D441168A, /*hidden argument*/NULL);
		if (L_34)
		{
			goto IL_02df;
		}
	}
	{
		goto IL_0426;
	}

IL_017b:
	{
		String_t* L_35 = V_1;
		bool L_36;
		L_36 = String_op_Equality_m50B3548E4AC232558190B0052877B290AA1D436A((String_t*)L_35, (String_t*)_stringLiteralBD49F93A7BC78A69E385CEC0E78F434BD2845A17, /*hidden argument*/NULL);
		if (L_36)
		{
			goto IL_02f6;
		}
	}
	{
		goto IL_0426;
	}

IL_0190:
	{
		String_t* L_37 = V_1;
		bool L_38;
		L_38 = String_op_Equality_m50B3548E4AC232558190B0052877B290AA1D436A((String_t*)L_37, (String_t*)_stringLiteralED1F119527A0BCA45125EF8E0F719985DA86C0E1, /*hidden argument*/NULL);
		if (L_38)
		{
			goto IL_030d;
		}
	}
	{
		goto IL_0426;
	}

IL_01a5:
	{
		String_t* L_39 = V_1;
		bool L_40;
		L_40 = String_op_Equality_m50B3548E4AC232558190B0052877B290AA1D436A((String_t*)L_39, (String_t*)_stringLiteral8C9F18A4F030B96447955FBBA1A99FFC43B5D8E0, /*hidden argument*/NULL);
		if (L_40)
		{
			goto IL_0324;
		}
	}
	{
		goto IL_0426;
	}

IL_01ba:
	{
		String_t* L_41 = V_1;
		bool L_42;
		L_42 = String_op_Equality_m50B3548E4AC232558190B0052877B290AA1D436A((String_t*)L_41, (String_t*)_stringLiteralFC341A1966AF28A9A7A26EDFB78ABBF7DE4D0E1F, /*hidden argument*/NULL);
		if (L_42)
		{
			goto IL_033b;
		}
	}
	{
		goto IL_0426;
	}

IL_01cf:
	{
		String_t* L_43 = V_1;
		bool L_44;
		L_44 = String_op_Equality_m50B3548E4AC232558190B0052877B290AA1D436A((String_t*)L_43, (String_t*)_stringLiteralE8744A8B8BD390EB66CA0CAE2376C973E6904FFB, /*hidden argument*/NULL);
		if (L_44)
		{
			goto IL_0352;
		}
	}
	{
		goto IL_0426;
	}

IL_01e4:
	{
		String_t* L_45 = V_1;
		bool L_46;
		L_46 = String_op_Equality_m50B3548E4AC232558190B0052877B290AA1D436A((String_t*)L_45, (String_t*)_stringLiteralF9BE17D634D1B07BCDCDA77A87710C946D81307B, /*hidden argument*/NULL);
		if (L_46)
		{
			goto IL_0369;
		}
	}
	{
		goto IL_0426;
	}

IL_01f9:
	{
		String_t* L_47 = V_1;
		bool L_48;
		L_48 = String_op_Equality_m50B3548E4AC232558190B0052877B290AA1D436A((String_t*)L_47, (String_t*)_stringLiteralFA5EC7168E9633DAAEAA255ECB55030EA60F064F, /*hidden argument*/NULL);
		if (L_48)
		{
			goto IL_0380;
		}
	}
	{
		goto IL_0426;
	}

IL_020e:
	{
		String_t* L_49 = V_1;
		bool L_50;
		L_50 = String_op_Equality_m50B3548E4AC232558190B0052877B290AA1D436A((String_t*)L_49, (String_t*)_stringLiteralEB0A157666700D8227FD4B66A26FDC02035E89BF, /*hidden argument*/NULL);
		if (L_50)
		{
			goto IL_0392;
		}
	}
	{
		goto IL_0426;
	}

IL_0223:
	{
		String_t* L_51 = V_1;
		bool L_52;
		L_52 = String_op_Equality_m50B3548E4AC232558190B0052877B290AA1D436A((String_t*)L_51, (String_t*)_stringLiteral8E54BB51E569CB6A8D3C45D8AEF883A1559C1C0E, /*hidden argument*/NULL);
		if (L_52)
		{
			goto IL_03a4;
		}
	}
	{
		goto IL_0426;
	}

IL_0238:
	{
		String_t* L_53 = V_1;
		bool L_54;
		L_54 = String_op_Equality_m50B3548E4AC232558190B0052877B290AA1D436A((String_t*)L_53, (String_t*)_stringLiteral60E56797D122AE71D3774956F66C6EEB9EA22C05, /*hidden argument*/NULL);
		if (L_54)
		{
			goto IL_03b3;
		}
	}
	{
		goto IL_0426;
	}

IL_024d:
	{
		String_t* L_55 = V_1;
		bool L_56;
		L_56 = String_op_Equality_m50B3548E4AC232558190B0052877B290AA1D436A((String_t*)L_55, (String_t*)_stringLiteral01837E2252AC8026A5EA3567A663017A662FBB70, /*hidden argument*/NULL);
		if (L_56)
		{
			goto IL_03c2;
		}
	}
	{
		goto IL_0426;
	}

IL_0262:
	{
		String_t* L_57 = V_1;
		bool L_58;
		L_58 = String_op_Equality_m50B3548E4AC232558190B0052877B290AA1D436A((String_t*)L_57, (String_t*)_stringLiteralF66E9083C67855AB6EBB4B74342E385A72AACE32, /*hidden argument*/NULL);
		if (L_58)
		{
			goto IL_03d6;
		}
	}
	{
		goto IL_0426;
	}

IL_0277:
	{
		String_t* L_59 = V_1;
		bool L_60;
		L_60 = String_op_Equality_m50B3548E4AC232558190B0052877B290AA1D436A((String_t*)L_59, (String_t*)_stringLiteral91811EE149061D28B38320E2430CE8888AD6398B, /*hidden argument*/NULL);
		if (L_60)
		{
			goto IL_03ea;
		}
	}
	{
		goto IL_0426;
	}

IL_028c:
	{
		String_t* L_61 = V_1;
		bool L_62;
		L_62 = String_op_Equality_m50B3548E4AC232558190B0052877B290AA1D436A((String_t*)L_61, (String_t*)_stringLiteral6686C366F645244186604A3DA4B9A58012A85F1B, /*hidden argument*/NULL);
		if (L_62)
		{
			goto IL_03fe;
		}
	}
	{
		goto IL_0426;
	}

IL_02a1:
	{
		String_t* L_63 = V_1;
		bool L_64;
		L_64 = String_op_Equality_m50B3548E4AC232558190B0052877B290AA1D436A((String_t*)L_63, (String_t*)_stringLiteralCA1B66E295BD92E9FD3B6C708F09CA69A50BEFD1, /*hidden argument*/NULL);
		if (L_64)
		{
			goto IL_0412;
		}
	}
	{
		goto IL_0426;
	}

IL_02b6:
	{
		// instance.enabled = reader.Read<System.Boolean>(ES3Type_bool.Instance);
		ES3Reader_t2780AF8AA61DA2A817115CEF8612AC0E494D03C9 * L_65 = ___reader0;
		IL2CPP_RUNTIME_CLASS_INIT(ES3Type_bool_t8F309F7B9CC735FF1DEE68081B6E3CAB367745F4_il2cpp_TypeInfo_var);
		ES3Type_t8FBECB7AE75168648B9524E0C2A38DAD4555421D * L_66 = ((ES3Type_bool_t8F309F7B9CC735FF1DEE68081B6E3CAB367745F4_StaticFields*)il2cpp_codegen_static_fields_for(ES3Type_bool_t8F309F7B9CC735FF1DEE68081B6E3CAB367745F4_il2cpp_TypeInfo_var))->get_Instance_12();
		NullCheck((ES3Reader_t2780AF8AA61DA2A817115CEF8612AC0E494D03C9 *)L_65);
		bool L_67;
		L_67 = GenericVirtFuncInvoker1< bool, ES3Type_t8FBECB7AE75168648B9524E0C2A38DAD4555421D * >::Invoke(ES3Reader_Read_TisBoolean_t07D1E3F34E4813023D64F584DFF7B34C9D922F37_mC6D1B158268FF9B97822FF9F5B37FB1723FEDA22_RuntimeMethod_var, (ES3Reader_t2780AF8AA61DA2A817115CEF8612AC0E494D03C9 *)L_65, (ES3Type_t8FBECB7AE75168648B9524E0C2A38DAD4555421D *)L_66);
		ShapeModule_set_enabled_mF6FE8ED99E482A739C00F894235F4E2CD09B0D1E((ShapeModule_t3A89D143F5CAF357ECCE8B4A4F2BBD57816F98CA *)(ShapeModule_t3A89D143F5CAF357ECCE8B4A4F2BBD57816F98CA *)(&V_0), (bool)L_67, /*hidden argument*/NULL);
		// break;
		goto IL_042c;
	}

IL_02cd:
	{
		// instance.shapeType = reader.Read<UnityEngine.ParticleSystemShapeType>();
		ES3Reader_t2780AF8AA61DA2A817115CEF8612AC0E494D03C9 * L_68 = ___reader0;
		NullCheck((ES3Reader_t2780AF8AA61DA2A817115CEF8612AC0E494D03C9 *)L_68);
		int32_t L_69;
		L_69 = GenericVirtFuncInvoker0< int32_t >::Invoke(ES3Reader_Read_TisParticleSystemShapeType_t5B09F3A5A637F57DB1B2A6518E214AA2AA53D70C_mAE53212CB1FDDA51CF8CD0D39FCD446087DACA48_RuntimeMethod_var, (ES3Reader_t2780AF8AA61DA2A817115CEF8612AC0E494D03C9 *)L_68);
		ShapeModule_set_shapeType_mB772084527742749EB6AD690BAE47215FC71040D((ShapeModule_t3A89D143F5CAF357ECCE8B4A4F2BBD57816F98CA *)(ShapeModule_t3A89D143F5CAF357ECCE8B4A4F2BBD57816F98CA *)(&V_0), (int32_t)L_69, /*hidden argument*/NULL);
		// break;
		goto IL_042c;
	}

IL_02df:
	{
		// instance.randomDirectionAmount = reader.Read<System.Single>(ES3Type_float.Instance);
		ES3Reader_t2780AF8AA61DA2A817115CEF8612AC0E494D03C9 * L_70 = ___reader0;
		IL2CPP_RUNTIME_CLASS_INIT(ES3Type_float_tF86B773C86731BD9AD79448B860BBB178FE77644_il2cpp_TypeInfo_var);
		ES3Type_t8FBECB7AE75168648B9524E0C2A38DAD4555421D * L_71 = ((ES3Type_float_tF86B773C86731BD9AD79448B860BBB178FE77644_StaticFields*)il2cpp_codegen_static_fields_for(ES3Type_float_tF86B773C86731BD9AD79448B860BBB178FE77644_il2cpp_TypeInfo_var))->get_Instance_12();
		NullCheck((ES3Reader_t2780AF8AA61DA2A817115CEF8612AC0E494D03C9 *)L_70);
		float L_72;
		L_72 = GenericVirtFuncInvoker1< float, ES3Type_t8FBECB7AE75168648B9524E0C2A38DAD4555421D * >::Invoke(ES3Reader_Read_TisSingle_tE07797BA3C98D4CA9B5A19413C19A76688AB899E_m4A0416374498BDA042B8EB21E49B72326D6CE5F4_RuntimeMethod_var, (ES3Reader_t2780AF8AA61DA2A817115CEF8612AC0E494D03C9 *)L_70, (ES3Type_t8FBECB7AE75168648B9524E0C2A38DAD4555421D *)L_71);
		ShapeModule_set_randomDirectionAmount_m4E1BB67600D57383945F75F5A179EEEC01A76885((ShapeModule_t3A89D143F5CAF357ECCE8B4A4F2BBD57816F98CA *)(ShapeModule_t3A89D143F5CAF357ECCE8B4A4F2BBD57816F98CA *)(&V_0), (float)L_72, /*hidden argument*/NULL);
		// break;
		goto IL_042c;
	}

IL_02f6:
	{
		// instance.sphericalDirectionAmount = reader.Read<System.Single>(ES3Type_float.Instance);
		ES3Reader_t2780AF8AA61DA2A817115CEF8612AC0E494D03C9 * L_73 = ___reader0;
		IL2CPP_RUNTIME_CLASS_INIT(ES3Type_float_tF86B773C86731BD9AD79448B860BBB178FE77644_il2cpp_TypeInfo_var);
		ES3Type_t8FBECB7AE75168648B9524E0C2A38DAD4555421D * L_74 = ((ES3Type_float_tF86B773C86731BD9AD79448B860BBB178FE77644_StaticFields*)il2cpp_codegen_static_fields_for(ES3Type_float_tF86B773C86731BD9AD79448B860BBB178FE77644_il2cpp_TypeInfo_var))->get_Instance_12();
		NullCheck((ES3Reader_t2780AF8AA61DA2A817115CEF8612AC0E494D03C9 *)L_73);
		float L_75;
		L_75 = GenericVirtFuncInvoker1< float, ES3Type_t8FBECB7AE75168648B9524E0C2A38DAD4555421D * >::Invoke(ES3Reader_Read_TisSingle_tE07797BA3C98D4CA9B5A19413C19A76688AB899E_m4A0416374498BDA042B8EB21E49B72326D6CE5F4_RuntimeMethod_var, (ES3Reader_t2780AF8AA61DA2A817115CEF8612AC0E494D03C9 *)L_73, (ES3Type_t8FBECB7AE75168648B9524E0C2A38DAD4555421D *)L_74);
		ShapeModule_set_sphericalDirectionAmount_m02A9FBFF18AF24B821801DF5D833CA20A569F62B((ShapeModule_t3A89D143F5CAF357ECCE8B4A4F2BBD57816F98CA *)(ShapeModule_t3A89D143F5CAF357ECCE8B4A4F2BBD57816F98CA *)(&V_0), (float)L_75, /*hidden argument*/NULL);
		// break;
		goto IL_042c;
	}

IL_030d:
	{
		// instance.alignToDirection = reader.Read<System.Boolean>(ES3Type_bool.Instance);
		ES3Reader_t2780AF8AA61DA2A817115CEF8612AC0E494D03C9 * L_76 = ___reader0;
		IL2CPP_RUNTIME_CLASS_INIT(ES3Type_bool_t8F309F7B9CC735FF1DEE68081B6E3CAB367745F4_il2cpp_TypeInfo_var);
		ES3Type_t8FBECB7AE75168648B9524E0C2A38DAD4555421D * L_77 = ((ES3Type_bool_t8F309F7B9CC735FF1DEE68081B6E3CAB367745F4_StaticFields*)il2cpp_codegen_static_fields_for(ES3Type_bool_t8F309F7B9CC735FF1DEE68081B6E3CAB367745F4_il2cpp_TypeInfo_var))->get_Instance_12();
		NullCheck((ES3Reader_t2780AF8AA61DA2A817115CEF8612AC0E494D03C9 *)L_76);
		bool L_78;
		L_78 = GenericVirtFuncInvoker1< bool, ES3Type_t8FBECB7AE75168648B9524E0C2A38DAD4555421D * >::Invoke(ES3Reader_Read_TisBoolean_t07D1E3F34E4813023D64F584DFF7B34C9D922F37_mC6D1B158268FF9B97822FF9F5B37FB1723FEDA22_RuntimeMethod_var, (ES3Reader_t2780AF8AA61DA2A817115CEF8612AC0E494D03C9 *)L_76, (ES3Type_t8FBECB7AE75168648B9524E0C2A38DAD4555421D *)L_77);
		ShapeModule_set_alignToDirection_m396A57DCAD5F194E4DDDA0DF9C35E5508E3641BE((ShapeModule_t3A89D143F5CAF357ECCE8B4A4F2BBD57816F98CA *)(ShapeModule_t3A89D143F5CAF357ECCE8B4A4F2BBD57816F98CA *)(&V_0), (bool)L_78, /*hidden argument*/NULL);
		// break;
		goto IL_042c;
	}

IL_0324:
	{
		// instance.radius = reader.Read<System.Single>(ES3Type_float.Instance);
		ES3Reader_t2780AF8AA61DA2A817115CEF8612AC0E494D03C9 * L_79 = ___reader0;
		IL2CPP_RUNTIME_CLASS_INIT(ES3Type_float_tF86B773C86731BD9AD79448B860BBB178FE77644_il2cpp_TypeInfo_var);
		ES3Type_t8FBECB7AE75168648B9524E0C2A38DAD4555421D * L_80 = ((ES3Type_float_tF86B773C86731BD9AD79448B860BBB178FE77644_StaticFields*)il2cpp_codegen_static_fields_for(ES3Type_float_tF86B773C86731BD9AD79448B860BBB178FE77644_il2cpp_TypeInfo_var))->get_Instance_12();
		NullCheck((ES3Reader_t2780AF8AA61DA2A817115CEF8612AC0E494D03C9 *)L_79);
		float L_81;
		L_81 = GenericVirtFuncInvoker1< float, ES3Type_t8FBECB7AE75168648B9524E0C2A38DAD4555421D * >::Invoke(ES3Reader_Read_TisSingle_tE07797BA3C98D4CA9B5A19413C19A76688AB899E_m4A0416374498BDA042B8EB21E49B72326D6CE5F4_RuntimeMethod_var, (ES3Reader_t2780AF8AA61DA2A817115CEF8612AC0E494D03C9 *)L_79, (ES3Type_t8FBECB7AE75168648B9524E0C2A38DAD4555421D *)L_80);
		ShapeModule_set_radius_mFC12B15750268316924771461C09B1A311A16DEA((ShapeModule_t3A89D143F5CAF357ECCE8B4A4F2BBD57816F98CA *)(ShapeModule_t3A89D143F5CAF357ECCE8B4A4F2BBD57816F98CA *)(&V_0), (float)L_81, /*hidden argument*/NULL);
		// break;
		goto IL_042c;
	}

IL_033b:
	{
		// instance.angle = reader.Read<System.Single>(ES3Type_float.Instance);
		ES3Reader_t2780AF8AA61DA2A817115CEF8612AC0E494D03C9 * L_82 = ___reader0;
		IL2CPP_RUNTIME_CLASS_INIT(ES3Type_float_tF86B773C86731BD9AD79448B860BBB178FE77644_il2cpp_TypeInfo_var);
		ES3Type_t8FBECB7AE75168648B9524E0C2A38DAD4555421D * L_83 = ((ES3Type_float_tF86B773C86731BD9AD79448B860BBB178FE77644_StaticFields*)il2cpp_codegen_static_fields_for(ES3Type_float_tF86B773C86731BD9AD79448B860BBB178FE77644_il2cpp_TypeInfo_var))->get_Instance_12();
		NullCheck((ES3Reader_t2780AF8AA61DA2A817115CEF8612AC0E494D03C9 *)L_82);
		float L_84;
		L_84 = GenericVirtFuncInvoker1< float, ES3Type_t8FBECB7AE75168648B9524E0C2A38DAD4555421D * >::Invoke(ES3Reader_Read_TisSingle_tE07797BA3C98D4CA9B5A19413C19A76688AB899E_m4A0416374498BDA042B8EB21E49B72326D6CE5F4_RuntimeMethod_var, (ES3Reader_t2780AF8AA61DA2A817115CEF8612AC0E494D03C9 *)L_82, (ES3Type_t8FBECB7AE75168648B9524E0C2A38DAD4555421D *)L_83);
		ShapeModule_set_angle_m20629BB5FE89F2040960548B45F6EC801B1DB8AA((ShapeModule_t3A89D143F5CAF357ECCE8B4A4F2BBD57816F98CA *)(ShapeModule_t3A89D143F5CAF357ECCE8B4A4F2BBD57816F98CA *)(&V_0), (float)L_84, /*hidden argument*/NULL);
		// break;
		goto IL_042c;
	}

IL_0352:
	{
		// instance.length = reader.Read<System.Single>(ES3Type_float.Instance);
		ES3Reader_t2780AF8AA61DA2A817115CEF8612AC0E494D03C9 * L_85 = ___reader0;
		IL2CPP_RUNTIME_CLASS_INIT(ES3Type_float_tF86B773C86731BD9AD79448B860BBB178FE77644_il2cpp_TypeInfo_var);
		ES3Type_t8FBECB7AE75168648B9524E0C2A38DAD4555421D * L_86 = ((ES3Type_float_tF86B773C86731BD9AD79448B860BBB178FE77644_StaticFields*)il2cpp_codegen_static_fields_for(ES3Type_float_tF86B773C86731BD9AD79448B860BBB178FE77644_il2cpp_TypeInfo_var))->get_Instance_12();
		NullCheck((ES3Reader_t2780AF8AA61DA2A817115CEF8612AC0E494D03C9 *)L_85);
		float L_87;
		L_87 = GenericVirtFuncInvoker1< float, ES3Type_t8FBECB7AE75168648B9524E0C2A38DAD4555421D * >::Invoke(ES3Reader_Read_TisSingle_tE07797BA3C98D4CA9B5A19413C19A76688AB899E_m4A0416374498BDA042B8EB21E49B72326D6CE5F4_RuntimeMethod_var, (ES3Reader_t2780AF8AA61DA2A817115CEF8612AC0E494D03C9 *)L_85, (ES3Type_t8FBECB7AE75168648B9524E0C2A38DAD4555421D *)L_86);
		ShapeModule_set_length_m744975258664B53F38A8B8BE38A86A0FFDD85BC7((ShapeModule_t3A89D143F5CAF357ECCE8B4A4F2BBD57816F98CA *)(ShapeModule_t3A89D143F5CAF357ECCE8B4A4F2BBD57816F98CA *)(&V_0), (float)L_87, /*hidden argument*/NULL);
		// break;
		goto IL_042c;
	}

IL_0369:
	{
		// instance.scale = reader.Read<UnityEngine.Vector3>(ES3Type_Vector3.Instance);
		ES3Reader_t2780AF8AA61DA2A817115CEF8612AC0E494D03C9 * L_88 = ___reader0;
		IL2CPP_RUNTIME_CLASS_INIT(ES3Type_Vector3_tA9144E81A20D2F28726F02DE1AE6CD3F9C12B54F_il2cpp_TypeInfo_var);
		ES3Type_t8FBECB7AE75168648B9524E0C2A38DAD4555421D * L_89 = ((ES3Type_Vector3_tA9144E81A20D2F28726F02DE1AE6CD3F9C12B54F_StaticFields*)il2cpp_codegen_static_fields_for(ES3Type_Vector3_tA9144E81A20D2F28726F02DE1AE6CD3F9C12B54F_il2cpp_TypeInfo_var))->get_Instance_12();
		NullCheck((ES3Reader_t2780AF8AA61DA2A817115CEF8612AC0E494D03C9 *)L_88);
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_90;
		L_90 = GenericVirtFuncInvoker1< Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E , ES3Type_t8FBECB7AE75168648B9524E0C2A38DAD4555421D * >::Invoke(ES3Reader_Read_TisVector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E_mBA4CD9D0F45E78BA43FE2DB8EC33CC3A5433DE15_RuntimeMethod_var, (ES3Reader_t2780AF8AA61DA2A817115CEF8612AC0E494D03C9 *)L_88, (ES3Type_t8FBECB7AE75168648B9524E0C2A38DAD4555421D *)L_89);
		ShapeModule_set_scale_m2951583898F18878E6F238100045072F44AD9158((ShapeModule_t3A89D143F5CAF357ECCE8B4A4F2BBD57816F98CA *)(ShapeModule_t3A89D143F5CAF357ECCE8B4A4F2BBD57816F98CA *)(&V_0), (Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E )L_90, /*hidden argument*/NULL);
		// break;
		goto IL_042c;
	}

IL_0380:
	{
		// instance.meshShapeType = reader.Read<UnityEngine.ParticleSystemMeshShapeType>();
		ES3Reader_t2780AF8AA61DA2A817115CEF8612AC0E494D03C9 * L_91 = ___reader0;
		NullCheck((ES3Reader_t2780AF8AA61DA2A817115CEF8612AC0E494D03C9 *)L_91);
		int32_t L_92;
		L_92 = GenericVirtFuncInvoker0< int32_t >::Invoke(ES3Reader_Read_TisParticleSystemMeshShapeType_t7C9518403F30CC7AF7F9124FD61EC1187B42EFD2_mF1A19C0F8BBA6E44737F158F3BE4CC478F623F10_RuntimeMethod_var, (ES3Reader_t2780AF8AA61DA2A817115CEF8612AC0E494D03C9 *)L_91);
		ShapeModule_set_meshShapeType_m5DAD94B71F2110F45E454C30DE052153129891C2((ShapeModule_t3A89D143F5CAF357ECCE8B4A4F2BBD57816F98CA *)(ShapeModule_t3A89D143F5CAF357ECCE8B4A4F2BBD57816F98CA *)(&V_0), (int32_t)L_92, /*hidden argument*/NULL);
		// break;
		goto IL_042c;
	}

IL_0392:
	{
		// instance.mesh = reader.Read<UnityEngine.Mesh>();
		ES3Reader_t2780AF8AA61DA2A817115CEF8612AC0E494D03C9 * L_93 = ___reader0;
		NullCheck((ES3Reader_t2780AF8AA61DA2A817115CEF8612AC0E494D03C9 *)L_93);
		Mesh_t2F5992DBA650D5862B43D3823ACD997132A57DA6 * L_94;
		L_94 = GenericVirtFuncInvoker0< Mesh_t2F5992DBA650D5862B43D3823ACD997132A57DA6 * >::Invoke(ES3Reader_Read_TisMesh_t2F5992DBA650D5862B43D3823ACD997132A57DA6_m65DF5BA41642A39B77979CC49472E4DE7A1660F9_RuntimeMethod_var, (ES3Reader_t2780AF8AA61DA2A817115CEF8612AC0E494D03C9 *)L_93);
		ShapeModule_set_mesh_mD3E276A9E45442E75AD8A9AA4BD88C9112BD77CA((ShapeModule_t3A89D143F5CAF357ECCE8B4A4F2BBD57816F98CA *)(ShapeModule_t3A89D143F5CAF357ECCE8B4A4F2BBD57816F98CA *)(&V_0), (Mesh_t2F5992DBA650D5862B43D3823ACD997132A57DA6 *)L_94, /*hidden argument*/NULL);
		// break;
		goto IL_042c;
	}

IL_03a4:
	{
		// instance.meshRenderer = reader.Read<UnityEngine.MeshRenderer>();
		ES3Reader_t2780AF8AA61DA2A817115CEF8612AC0E494D03C9 * L_95 = ___reader0;
		NullCheck((ES3Reader_t2780AF8AA61DA2A817115CEF8612AC0E494D03C9 *)L_95);
		MeshRenderer_tCD983A2F635E12BCB0BAA2E635D96A318757908B * L_96;
		L_96 = GenericVirtFuncInvoker0< MeshRenderer_tCD983A2F635E12BCB0BAA2E635D96A318757908B * >::Invoke(ES3Reader_Read_TisMeshRenderer_tCD983A2F635E12BCB0BAA2E635D96A318757908B_m773CE5481730EBCC6A377F918946EB11B304050A_RuntimeMethod_var, (ES3Reader_t2780AF8AA61DA2A817115CEF8612AC0E494D03C9 *)L_95);
		ShapeModule_set_meshRenderer_m334D69AC8C29F5E393732D62BBB3645296614059((ShapeModule_t3A89D143F5CAF357ECCE8B4A4F2BBD57816F98CA *)(ShapeModule_t3A89D143F5CAF357ECCE8B4A4F2BBD57816F98CA *)(&V_0), (MeshRenderer_tCD983A2F635E12BCB0BAA2E635D96A318757908B *)L_96, /*hidden argument*/NULL);
		// break;
		goto IL_042c;
	}

IL_03b3:
	{
		// instance.skinnedMeshRenderer = reader.Read<UnityEngine.SkinnedMeshRenderer>();
		ES3Reader_t2780AF8AA61DA2A817115CEF8612AC0E494D03C9 * L_97 = ___reader0;
		NullCheck((ES3Reader_t2780AF8AA61DA2A817115CEF8612AC0E494D03C9 *)L_97);
		SkinnedMeshRenderer_t126F4D6010E0F4B2685A7817B0A9171805D8F496 * L_98;
		L_98 = GenericVirtFuncInvoker0< SkinnedMeshRenderer_t126F4D6010E0F4B2685A7817B0A9171805D8F496 * >::Invoke(ES3Reader_Read_TisSkinnedMeshRenderer_t126F4D6010E0F4B2685A7817B0A9171805D8F496_m23D6569D5CE7B3E1C67BDB470CDEDEF25A835F25_RuntimeMethod_var, (ES3Reader_t2780AF8AA61DA2A817115CEF8612AC0E494D03C9 *)L_97);
		ShapeModule_set_skinnedMeshRenderer_m9DEF9CD332D3F10BE7D99EFECC0971FB5AE83F56((ShapeModule_t3A89D143F5CAF357ECCE8B4A4F2BBD57816F98CA *)(ShapeModule_t3A89D143F5CAF357ECCE8B4A4F2BBD57816F98CA *)(&V_0), (SkinnedMeshRenderer_t126F4D6010E0F4B2685A7817B0A9171805D8F496 *)L_98, /*hidden argument*/NULL);
		// break;
		goto IL_042c;
	}

IL_03c2:
	{
		// instance.useMeshMaterialIndex = reader.Read<System.Boolean>(ES3Type_bool.Instance);
		ES3Reader_t2780AF8AA61DA2A817115CEF8612AC0E494D03C9 * L_99 = ___reader0;
		IL2CPP_RUNTIME_CLASS_INIT(ES3Type_bool_t8F309F7B9CC735FF1DEE68081B6E3CAB367745F4_il2cpp_TypeInfo_var);
		ES3Type_t8FBECB7AE75168648B9524E0C2A38DAD4555421D * L_100 = ((ES3Type_bool_t8F309F7B9CC735FF1DEE68081B6E3CAB367745F4_StaticFields*)il2cpp_codegen_static_fields_for(ES3Type_bool_t8F309F7B9CC735FF1DEE68081B6E3CAB367745F4_il2cpp_TypeInfo_var))->get_Instance_12();
		NullCheck((ES3Reader_t2780AF8AA61DA2A817115CEF8612AC0E494D03C9 *)L_99);
		bool L_101;
		L_101 = GenericVirtFuncInvoker1< bool, ES3Type_t8FBECB7AE75168648B9524E0C2A38DAD4555421D * >::Invoke(ES3Reader_Read_TisBoolean_t07D1E3F34E4813023D64F584DFF7B34C9D922F37_mC6D1B158268FF9B97822FF9F5B37FB1723FEDA22_RuntimeMethod_var, (ES3Reader_t2780AF8AA61DA2A817115CEF8612AC0E494D03C9 *)L_99, (ES3Type_t8FBECB7AE75168648B9524E0C2A38DAD4555421D *)L_100);
		ShapeModule_set_useMeshMaterialIndex_m6130573C0966ED3B5C590665747305BCEFD3F901((ShapeModule_t3A89D143F5CAF357ECCE8B4A4F2BBD57816F98CA *)(ShapeModule_t3A89D143F5CAF357ECCE8B4A4F2BBD57816F98CA *)(&V_0), (bool)L_101, /*hidden argument*/NULL);
		// break;
		goto IL_042c;
	}

IL_03d6:
	{
		// instance.meshMaterialIndex = reader.Read<System.Int32>(ES3Type_int.Instance);
		ES3Reader_t2780AF8AA61DA2A817115CEF8612AC0E494D03C9 * L_102 = ___reader0;
		IL2CPP_RUNTIME_CLASS_INIT(ES3Type_int_tF64C15D40AD0CC7C15BCD1CEC3C5C6BF837BD167_il2cpp_TypeInfo_var);
		ES3Type_t8FBECB7AE75168648B9524E0C2A38DAD4555421D * L_103 = ((ES3Type_int_tF64C15D40AD0CC7C15BCD1CEC3C5C6BF837BD167_StaticFields*)il2cpp_codegen_static_fields_for(ES3Type_int_tF64C15D40AD0CC7C15BCD1CEC3C5C6BF837BD167_il2cpp_TypeInfo_var))->get_Instance_12();
		NullCheck((ES3Reader_t2780AF8AA61DA2A817115CEF8612AC0E494D03C9 *)L_102);
		int32_t L_104;
		L_104 = GenericVirtFuncInvoker1< int32_t, ES3Type_t8FBECB7AE75168648B9524E0C2A38DAD4555421D * >::Invoke(ES3Reader_Read_TisInt32_tFDE5F8CD43D10453F6A2E0C77FE48C6CC7009046_m2B74AA6627F5B1D21171D56C42F71DE5A7C1B4A6_RuntimeMethod_var, (ES3Reader_t2780AF8AA61DA2A817115CEF8612AC0E494D03C9 *)L_102, (ES3Type_t8FBECB7AE75168648B9524E0C2A38DAD4555421D *)L_103);
		ShapeModule_set_meshMaterialIndex_m1205DDEB353204D5941654FB79164AD5BAF0A59C((ShapeModule_t3A89D143F5CAF357ECCE8B4A4F2BBD57816F98CA *)(ShapeModule_t3A89D143F5CAF357ECCE8B4A4F2BBD57816F98CA *)(&V_0), (int32_t)L_104, /*hidden argument*/NULL);
		// break;
		goto IL_042c;
	}

IL_03ea:
	{
		// instance.useMeshColors = reader.Read<System.Boolean>(ES3Type_bool.Instance);
		ES3Reader_t2780AF8AA61DA2A817115CEF8612AC0E494D03C9 * L_105 = ___reader0;
		IL2CPP_RUNTIME_CLASS_INIT(ES3Type_bool_t8F309F7B9CC735FF1DEE68081B6E3CAB367745F4_il2cpp_TypeInfo_var);
		ES3Type_t8FBECB7AE75168648B9524E0C2A38DAD4555421D * L_106 = ((ES3Type_bool_t8F309F7B9CC735FF1DEE68081B6E3CAB367745F4_StaticFields*)il2cpp_codegen_static_fields_for(ES3Type_bool_t8F309F7B9CC735FF1DEE68081B6E3CAB367745F4_il2cpp_TypeInfo_var))->get_Instance_12();
		NullCheck((ES3Reader_t2780AF8AA61DA2A817115CEF8612AC0E494D03C9 *)L_105);
		bool L_107;
		L_107 = GenericVirtFuncInvoker1< bool, ES3Type_t8FBECB7AE75168648B9524E0C2A38DAD4555421D * >::Invoke(ES3Reader_Read_TisBoolean_t07D1E3F34E4813023D64F584DFF7B34C9D922F37_mC6D1B158268FF9B97822FF9F5B37FB1723FEDA22_RuntimeMethod_var, (ES3Reader_t2780AF8AA61DA2A817115CEF8612AC0E494D03C9 *)L_105, (ES3Type_t8FBECB7AE75168648B9524E0C2A38DAD4555421D *)L_106);
		ShapeModule_set_useMeshColors_m071D000F330805B1EBCF09B40AC4EB9942EB9F57((ShapeModule_t3A89D143F5CAF357ECCE8B4A4F2BBD57816F98CA *)(ShapeModule_t3A89D143F5CAF357ECCE8B4A4F2BBD57816F98CA *)(&V_0), (bool)L_107, /*hidden argument*/NULL);
		// break;
		goto IL_042c;
	}

IL_03fe:
	{
		// instance.normalOffset = reader.Read<System.Single>(ES3Type_float.Instance);
		ES3Reader_t2780AF8AA61DA2A817115CEF8612AC0E494D03C9 * L_108 = ___reader0;
		IL2CPP_RUNTIME_CLASS_INIT(ES3Type_float_tF86B773C86731BD9AD79448B860BBB178FE77644_il2cpp_TypeInfo_var);
		ES3Type_t8FBECB7AE75168648B9524E0C2A38DAD4555421D * L_109 = ((ES3Type_float_tF86B773C86731BD9AD79448B860BBB178FE77644_StaticFields*)il2cpp_codegen_static_fields_for(ES3Type_float_tF86B773C86731BD9AD79448B860BBB178FE77644_il2cpp_TypeInfo_var))->get_Instance_12();
		NullCheck((ES3Reader_t2780AF8AA61DA2A817115CEF8612AC0E494D03C9 *)L_108);
		float L_110;
		L_110 = GenericVirtFuncInvoker1< float, ES3Type_t8FBECB7AE75168648B9524E0C2A38DAD4555421D * >::Invoke(ES3Reader_Read_TisSingle_tE07797BA3C98D4CA9B5A19413C19A76688AB899E_m4A0416374498BDA042B8EB21E49B72326D6CE5F4_RuntimeMethod_var, (ES3Reader_t2780AF8AA61DA2A817115CEF8612AC0E494D03C9 *)L_108, (ES3Type_t8FBECB7AE75168648B9524E0C2A38DAD4555421D *)L_109);
		ShapeModule_set_normalOffset_m81A315286BAA5F52AAED6B317734FB03B2DCE9FD((ShapeModule_t3A89D143F5CAF357ECCE8B4A4F2BBD57816F98CA *)(ShapeModule_t3A89D143F5CAF357ECCE8B4A4F2BBD57816F98CA *)(&V_0), (float)L_110, /*hidden argument*/NULL);
		// break;
		goto IL_042c;
	}

IL_0412:
	{
		// instance.arc = reader.Read<System.Single>(ES3Type_float.Instance);
		ES3Reader_t2780AF8AA61DA2A817115CEF8612AC0E494D03C9 * L_111 = ___reader0;
		IL2CPP_RUNTIME_CLASS_INIT(ES3Type_float_tF86B773C86731BD9AD79448B860BBB178FE77644_il2cpp_TypeInfo_var);
		ES3Type_t8FBECB7AE75168648B9524E0C2A38DAD4555421D * L_112 = ((ES3Type_float_tF86B773C86731BD9AD79448B860BBB178FE77644_StaticFields*)il2cpp_codegen_static_fields_for(ES3Type_float_tF86B773C86731BD9AD79448B860BBB178FE77644_il2cpp_TypeInfo_var))->get_Instance_12();
		NullCheck((ES3Reader_t2780AF8AA61DA2A817115CEF8612AC0E494D03C9 *)L_111);
		float L_113;
		L_113 = GenericVirtFuncInvoker1< float, ES3Type_t8FBECB7AE75168648B9524E0C2A38DAD4555421D * >::Invoke(ES3Reader_Read_TisSingle_tE07797BA3C98D4CA9B5A19413C19A76688AB899E_m4A0416374498BDA042B8EB21E49B72326D6CE5F4_RuntimeMethod_var, (ES3Reader_t2780AF8AA61DA2A817115CEF8612AC0E494D03C9 *)L_111, (ES3Type_t8FBECB7AE75168648B9524E0C2A38DAD4555421D *)L_112);
		ShapeModule_set_arc_m4A2578EBD4747DB3D9ED74AB53E488872CFA541F((ShapeModule_t3A89D143F5CAF357ECCE8B4A4F2BBD57816F98CA *)(ShapeModule_t3A89D143F5CAF357ECCE8B4A4F2BBD57816F98CA *)(&V_0), (float)L_113, /*hidden argument*/NULL);
		// break;
		goto IL_042c;
	}

IL_0426:
	{
		// reader.Skip();
		ES3Reader_t2780AF8AA61DA2A817115CEF8612AC0E494D03C9 * L_114 = ___reader0;
		NullCheck((ES3Reader_t2780AF8AA61DA2A817115CEF8612AC0E494D03C9 *)L_114);
		VirtActionInvoker0::Invoke(41 /* System.Void ES3Reader::Skip() */, (ES3Reader_t2780AF8AA61DA2A817115CEF8612AC0E494D03C9 *)L_114);
	}

IL_042c:
	{
		// while((propertyName = reader.ReadPropertyName()) != null)
		ES3Reader_t2780AF8AA61DA2A817115CEF8612AC0E494D03C9 * L_115 = ___reader0;
		NullCheck((ES3Reader_t2780AF8AA61DA2A817115CEF8612AC0E494D03C9 *)L_115);
		String_t* L_116;
		L_116 = VirtFuncInvoker0< String_t* >::Invoke(21 /* System.String ES3Reader::ReadPropertyName() */, (ES3Reader_t2780AF8AA61DA2A817115CEF8612AC0E494D03C9 *)L_115);
		String_t* L_117 = (String_t*)L_116;
		V_1 = (String_t*)L_117;
		if (L_117)
		{
			goto IL_000c;
		}
	}
	{
		// }
		return;
	}
}
// System.Void ES3Types.ES3Type_ShapeModule::ReadInto<UnityEngine.ParticleSystem/InheritVelocityModule>(ES3Reader,System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ES3Type_ShapeModule_ReadInto_TisInheritVelocityModule_t25F2271E4D9ED5D27234CDD00271CB7D435D9619_mC94F2961CF6A91729FF712AD0A72E69F7A843371_gshared (ES3Type_ShapeModule_t67010A74D4F69A245D5F06976239CAB4279B5377 * __this, ES3Reader_t2780AF8AA61DA2A817115CEF8612AC0E494D03C9 * ___reader0, RuntimeObject * ___obj1, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ES3Reader_Read_TisBoolean_t07D1E3F34E4813023D64F584DFF7B34C9D922F37_mC6D1B158268FF9B97822FF9F5B37FB1723FEDA22_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ES3Reader_Read_TisInt32_tFDE5F8CD43D10453F6A2E0C77FE48C6CC7009046_m2B74AA6627F5B1D21171D56C42F71DE5A7C1B4A6_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ES3Reader_Read_TisMeshRenderer_tCD983A2F635E12BCB0BAA2E635D96A318757908B_m773CE5481730EBCC6A377F918946EB11B304050A_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ES3Reader_Read_TisMesh_t2F5992DBA650D5862B43D3823ACD997132A57DA6_m65DF5BA41642A39B77979CC49472E4DE7A1660F9_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ES3Reader_Read_TisParticleSystemMeshShapeType_t7C9518403F30CC7AF7F9124FD61EC1187B42EFD2_mF1A19C0F8BBA6E44737F158F3BE4CC478F623F10_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ES3Reader_Read_TisParticleSystemShapeType_t5B09F3A5A637F57DB1B2A6518E214AA2AA53D70C_mAE53212CB1FDDA51CF8CD0D39FCD446087DACA48_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ES3Reader_Read_TisSingle_tE07797BA3C98D4CA9B5A19413C19A76688AB899E_m4A0416374498BDA042B8EB21E49B72326D6CE5F4_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ES3Reader_Read_TisSkinnedMeshRenderer_t126F4D6010E0F4B2685A7817B0A9171805D8F496_m23D6569D5CE7B3E1C67BDB470CDEDEF25A835F25_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ES3Reader_Read_TisVector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E_mBA4CD9D0F45E78BA43FE2DB8EC33CC3A5433DE15_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ES3Type_Vector3_tA9144E81A20D2F28726F02DE1AE6CD3F9C12B54F_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ES3Type_bool_t8F309F7B9CC735FF1DEE68081B6E3CAB367745F4_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ES3Type_float_tF86B773C86731BD9AD79448B860BBB178FE77644_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ES3Type_int_tF64C15D40AD0CC7C15BCD1CEC3C5C6BF837BD167_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ShapeModule_t3A89D143F5CAF357ECCE8B4A4F2BBD57816F98CA_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral01837E2252AC8026A5EA3567A663017A662FBB70);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral1228466552C1791B2019A329AFE94665D441168A);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral60E56797D122AE71D3774956F66C6EEB9EA22C05);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral6686C366F645244186604A3DA4B9A58012A85F1B);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral82BECCAD895076775062861CDB46AADEF913D969);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral8C9F18A4F030B96447955FBBA1A99FFC43B5D8E0);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral8E54BB51E569CB6A8D3C45D8AEF883A1559C1C0E);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral91811EE149061D28B38320E2430CE8888AD6398B);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralBD49F93A7BC78A69E385CEC0E78F434BD2845A17);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralCA1B66E295BD92E9FD3B6C708F09CA69A50BEFD1);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralE8744A8B8BD390EB66CA0CAE2376C973E6904FFB);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralEB0A157666700D8227FD4B66A26FDC02035E89BF);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralED1F119527A0BCA45125EF8E0F719985DA86C0E1);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralF66E9083C67855AB6EBB4B74342E385A72AACE32);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralF9BE17D634D1B07BCDCDA77A87710C946D81307B);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralF9D225733E1D10F9344C755C4A9C0870CD1DE97B);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralFA5EC7168E9633DAAEAA255ECB55030EA60F064F);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralFC341A1966AF28A9A7A26EDFB78ABBF7DE4D0E1F);
		s_Il2CppMethodInitialized = true;
	}
	ShapeModule_t3A89D143F5CAF357ECCE8B4A4F2BBD57816F98CA  V_0;
	memset((&V_0), 0, sizeof(V_0));
	String_t* V_1 = NULL;
	uint32_t V_2 = 0;
	{
		// var instance = (UnityEngine.ParticleSystem.ShapeModule)obj;
		RuntimeObject * L_0 = ___obj1;
		V_0 = (ShapeModule_t3A89D143F5CAF357ECCE8B4A4F2BBD57816F98CA )((*(ShapeModule_t3A89D143F5CAF357ECCE8B4A4F2BBD57816F98CA *)((ShapeModule_t3A89D143F5CAF357ECCE8B4A4F2BBD57816F98CA *)UnBox(L_0, ShapeModule_t3A89D143F5CAF357ECCE8B4A4F2BBD57816F98CA_il2cpp_TypeInfo_var))));
		goto IL_042c;
	}

IL_000c:
	{
		String_t* L_1 = V_1;
		if (!L_1)
		{
			goto IL_0426;
		}
	}
	{
		String_t* L_2 = V_1;
		uint32_t L_3;
		L_3 = U3CPrivateImplementationDetailsU3E_ComputeStringHash_m3ADC1F612F9EE3DD518E6F0023A0DE0EE2B120A7((String_t*)L_2, /*hidden argument*/NULL);
		V_2 = (uint32_t)L_3;
		uint32_t L_4 = V_2;
		if ((!(((uint32_t)L_4) <= ((uint32_t)((int32_t)-2104025999)))))
		{
			goto IL_00b3;
		}
	}
	{
		uint32_t L_5 = V_2;
		if ((!(((uint32_t)L_5) <= ((uint32_t)((int32_t)666576729)))))
		{
			goto IL_006a;
		}
	}
	{
		uint32_t L_6 = V_2;
		if ((!(((uint32_t)L_6) <= ((uint32_t)((int32_t)49525662)))))
		{
			goto IL_004f;
		}
	}
	{
		uint32_t L_7 = V_2;
		if ((((int32_t)L_7) == ((int32_t)((int32_t)24602224))))
		{
			goto IL_024d;
		}
	}
	{
		uint32_t L_8 = V_2;
		if ((((int32_t)L_8) == ((int32_t)((int32_t)49525662))))
		{
			goto IL_013c;
		}
	}
	{
		goto IL_0426;
	}

IL_004f:
	{
		uint32_t L_9 = V_2;
		if ((((int32_t)L_9) == ((int32_t)((int32_t)230313139))))
		{
			goto IL_01a5;
		}
	}
	{
		uint32_t L_10 = V_2;
		if ((((int32_t)L_10) == ((int32_t)((int32_t)666576729))))
		{
			goto IL_01f9;
		}
	}
	{
		goto IL_0426;
	}

IL_006a:
	{
		uint32_t L_11 = V_2;
		if ((!(((uint32_t)L_11) <= ((uint32_t)((int32_t)955488309)))))
		{
			goto IL_008d;
		}
	}
	{
		uint32_t L_12 = V_2;
		if ((((int32_t)L_12) == ((int32_t)((int32_t)923624301))))
		{
			goto IL_0238;
		}
	}
	{
		uint32_t L_13 = V_2;
		if ((((int32_t)L_13) == ((int32_t)((int32_t)955488309))))
		{
			goto IL_028c;
		}
	}
	{
		goto IL_0426;
	}

IL_008d:
	{
		uint32_t L_14 = V_2;
		if ((((int32_t)L_14) == ((int32_t)((int32_t)980363995))))
		{
			goto IL_02a1;
		}
	}
	{
		uint32_t L_15 = V_2;
		if ((((int32_t)L_15) == ((int32_t)((int32_t)985988853))))
		{
			goto IL_017b;
		}
	}
	{
		uint32_t L_16 = V_2;
		if ((((int32_t)L_16) == ((int32_t)((int32_t)-2104025999))))
		{
			goto IL_01e4;
		}
	}
	{
		goto IL_0426;
	}

IL_00b3:
	{
		uint32_t L_17 = V_2;
		if ((!(((uint32_t)L_17) <= ((uint32_t)((int32_t)-1473810612)))))
		{
			goto IL_00f6;
		}
	}
	{
		uint32_t L_18 = V_2;
		if ((!(((uint32_t)L_18) <= ((uint32_t)((int32_t)-1726928010)))))
		{
			goto IL_00db;
		}
	}
	{
		uint32_t L_19 = V_2;
		if ((((int32_t)L_19) == ((int32_t)((int32_t)-2083506667))))
		{
			goto IL_01cf;
		}
	}
	{
		uint32_t L_20 = V_2;
		if ((((int32_t)L_20) == ((int32_t)((int32_t)-1726928010))))
		{
			goto IL_0151;
		}
	}
	{
		goto IL_0426;
	}

IL_00db:
	{
		uint32_t L_21 = V_2;
		if ((((int32_t)L_21) == ((int32_t)((int32_t)-1593786692))))
		{
			goto IL_020e;
		}
	}
	{
		uint32_t L_22 = V_2;
		if ((((int32_t)L_22) == ((int32_t)((int32_t)-1473810612))))
		{
			goto IL_0190;
		}
	}
	{
		goto IL_0426;
	}

IL_00f6:
	{
		uint32_t L_23 = V_2;
		if ((!(((uint32_t)L_23) <= ((uint32_t)((int32_t)-1386986472)))))
		{
			goto IL_0116;
		}
	}
	{
		uint32_t L_24 = V_2;
		if ((((int32_t)L_24) == ((int32_t)((int32_t)-1412039661))))
		{
			goto IL_0166;
		}
	}
	{
		uint32_t L_25 = V_2;
		if ((((int32_t)L_25) == ((int32_t)((int32_t)-1386986472))))
		{
			goto IL_01ba;
		}
	}
	{
		goto IL_0426;
	}

IL_0116:
	{
		uint32_t L_26 = V_2;
		if ((((int32_t)L_26) == ((int32_t)((int32_t)-584064197))))
		{
			goto IL_0223;
		}
	}
	{
		uint32_t L_27 = V_2;
		if ((((int32_t)L_27) == ((int32_t)((int32_t)-473474755))))
		{
			goto IL_0277;
		}
	}
	{
		uint32_t L_28 = V_2;
		if ((((int32_t)L_28) == ((int32_t)((int32_t)-365686981))))
		{
			goto IL_0262;
		}
	}
	{
		goto IL_0426;
	}

IL_013c:
	{
		String_t* L_29 = V_1;
		bool L_30;
		L_30 = String_op_Equality_m50B3548E4AC232558190B0052877B290AA1D436A((String_t*)L_29, (String_t*)_stringLiteralF9D225733E1D10F9344C755C4A9C0870CD1DE97B, /*hidden argument*/NULL);
		if (L_30)
		{
			goto IL_02b6;
		}
	}
	{
		goto IL_0426;
	}

IL_0151:
	{
		String_t* L_31 = V_1;
		bool L_32;
		L_32 = String_op_Equality_m50B3548E4AC232558190B0052877B290AA1D436A((String_t*)L_31, (String_t*)_stringLiteral82BECCAD895076775062861CDB46AADEF913D969, /*hidden argument*/NULL);
		if (L_32)
		{
			goto IL_02cd;
		}
	}
	{
		goto IL_0426;
	}

IL_0166:
	{
		String_t* L_33 = V_1;
		bool L_34;
		L_34 = String_op_Equality_m50B3548E4AC232558190B0052877B290AA1D436A((String_t*)L_33, (String_t*)_stringLiteral1228466552C1791B2019A329AFE94665D441168A, /*hidden argument*/NULL);
		if (L_34)
		{
			goto IL_02df;
		}
	}
	{
		goto IL_0426;
	}

IL_017b:
	{
		String_t* L_35 = V_1;
		bool L_36;
		L_36 = String_op_Equality_m50B3548E4AC232558190B0052877B290AA1D436A((String_t*)L_35, (String_t*)_stringLiteralBD49F93A7BC78A69E385CEC0E78F434BD2845A17, /*hidden argument*/NULL);
		if (L_36)
		{
			goto IL_02f6;
		}
	}
	{
		goto IL_0426;
	}

IL_0190:
	{
		String_t* L_37 = V_1;
		bool L_38;
		L_38 = String_op_Equality_m50B3548E4AC232558190B0052877B290AA1D436A((String_t*)L_37, (String_t*)_stringLiteralED1F119527A0BCA45125EF8E0F719985DA86C0E1, /*hidden argument*/NULL);
		if (L_38)
		{
			goto IL_030d;
		}
	}
	{
		goto IL_0426;
	}

IL_01a5:
	{
		String_t* L_39 = V_1;
		bool L_40;
		L_40 = String_op_Equality_m50B3548E4AC232558190B0052877B290AA1D436A((String_t*)L_39, (String_t*)_stringLiteral8C9F18A4F030B96447955FBBA1A99FFC43B5D8E0, /*hidden argument*/NULL);
		if (L_40)
		{
			goto IL_0324;
		}
	}
	{
		goto IL_0426;
	}

IL_01ba:
	{
		String_t* L_41 = V_1;
		bool L_42;
		L_42 = String_op_Equality_m50B3548E4AC232558190B0052877B290AA1D436A((String_t*)L_41, (String_t*)_stringLiteralFC341A1966AF28A9A7A26EDFB78ABBF7DE4D0E1F, /*hidden argument*/NULL);
		if (L_42)
		{
			goto IL_033b;
		}
	}
	{
		goto IL_0426;
	}

IL_01cf:
	{
		String_t* L_43 = V_1;
		bool L_44;
		L_44 = String_op_Equality_m50B3548E4AC232558190B0052877B290AA1D436A((String_t*)L_43, (String_t*)_stringLiteralE8744A8B8BD390EB66CA0CAE2376C973E6904FFB, /*hidden argument*/NULL);
		if (L_44)
		{
			goto IL_0352;
		}
	}
	{
		goto IL_0426;
	}

IL_01e4:
	{
		String_t* L_45 = V_1;
		bool L_46;
		L_46 = String_op_Equality_m50B3548E4AC232558190B0052877B290AA1D436A((String_t*)L_45, (String_t*)_stringLiteralF9BE17D634D1B07BCDCDA77A87710C946D81307B, /*hidden argument*/NULL);
		if (L_46)
		{
			goto IL_0369;
		}
	}
	{
		goto IL_0426;
	}

IL_01f9:
	{
		String_t* L_47 = V_1;
		bool L_48;
		L_48 = String_op_Equality_m50B3548E4AC232558190B0052877B290AA1D436A((String_t*)L_47, (String_t*)_stringLiteralFA5EC7168E9633DAAEAA255ECB55030EA60F064F, /*hidden argument*/NULL);
		if (L_48)
		{
			goto IL_0380;
		}
	}
	{
		goto IL_0426;
	}

IL_020e:
	{
		String_t* L_49 = V_1;
		bool L_50;
		L_50 = String_op_Equality_m50B3548E4AC232558190B0052877B290AA1D436A((String_t*)L_49, (String_t*)_stringLiteralEB0A157666700D8227FD4B66A26FDC02035E89BF, /*hidden argument*/NULL);
		if (L_50)
		{
			goto IL_0392;
		}
	}
	{
		goto IL_0426;
	}

IL_0223:
	{
		String_t* L_51 = V_1;
		bool L_52;
		L_52 = String_op_Equality_m50B3548E4AC232558190B0052877B290AA1D436A((String_t*)L_51, (String_t*)_stringLiteral8E54BB51E569CB6A8D3C45D8AEF883A1559C1C0E, /*hidden argument*/NULL);
		if (L_52)
		{
			goto IL_03a4;
		}
	}
	{
		goto IL_0426;
	}

IL_0238:
	{
		String_t* L_53 = V_1;
		bool L_54;
		L_54 = String_op_Equality_m50B3548E4AC232558190B0052877B290AA1D436A((String_t*)L_53, (String_t*)_stringLiteral60E56797D122AE71D3774956F66C6EEB9EA22C05, /*hidden argument*/NULL);
		if (L_54)
		{
			goto IL_03b3;
		}
	}
	{
		goto IL_0426;
	}

IL_024d:
	{
		String_t* L_55 = V_1;
		bool L_56;
		L_56 = String_op_Equality_m50B3548E4AC232558190B0052877B290AA1D436A((String_t*)L_55, (String_t*)_stringLiteral01837E2252AC8026A5EA3567A663017A662FBB70, /*hidden argument*/NULL);
		if (L_56)
		{
			goto IL_03c2;
		}
	}
	{
		goto IL_0426;
	}

IL_0262:
	{
		String_t* L_57 = V_1;
		bool L_58;
		L_58 = String_op_Equality_m50B3548E4AC232558190B0052877B290AA1D436A((String_t*)L_57, (String_t*)_stringLiteralF66E9083C67855AB6EBB4B74342E385A72AACE32, /*hidden argument*/NULL);
		if (L_58)
		{
			goto IL_03d6;
		}
	}
	{
		goto IL_0426;
	}

IL_0277:
	{
		String_t* L_59 = V_1;
		bool L_60;
		L_60 = String_op_Equality_m50B3548E4AC232558190B0052877B290AA1D436A((String_t*)L_59, (String_t*)_stringLiteral91811EE149061D28B38320E2430CE8888AD6398B, /*hidden argument*/NULL);
		if (L_60)
		{
			goto IL_03ea;
		}
	}
	{
		goto IL_0426;
	}

IL_028c:
	{
		String_t* L_61 = V_1;
		bool L_62;
		L_62 = String_op_Equality_m50B3548E4AC232558190B0052877B290AA1D436A((String_t*)L_61, (String_t*)_stringLiteral6686C366F645244186604A3DA4B9A58012A85F1B, /*hidden argument*/NULL);
		if (L_62)
		{
			goto IL_03fe;
		}
	}
	{
		goto IL_0426;
	}

IL_02a1:
	{
		String_t* L_63 = V_1;
		bool L_64;
		L_64 = String_op_Equality_m50B3548E4AC232558190B0052877B290AA1D436A((String_t*)L_63, (String_t*)_stringLiteralCA1B66E295BD92E9FD3B6C708F09CA69A50BEFD1, /*hidden argument*/NULL);
		if (L_64)
		{
			goto IL_0412;
		}
	}
	{
		goto IL_0426;
	}

IL_02b6:
	{
		// instance.enabled = reader.Read<System.Boolean>(ES3Type_bool.Instance);
		ES3Reader_t2780AF8AA61DA2A817115CEF8612AC0E494D03C9 * L_65 = ___reader0;
		IL2CPP_RUNTIME_CLASS_INIT(ES3Type_bool_t8F309F7B9CC735FF1DEE68081B6E3CAB367745F4_il2cpp_TypeInfo_var);
		ES3Type_t8FBECB7AE75168648B9524E0C2A38DAD4555421D * L_66 = ((ES3Type_bool_t8F309F7B9CC735FF1DEE68081B6E3CAB367745F4_StaticFields*)il2cpp_codegen_static_fields_for(ES3Type_bool_t8F309F7B9CC735FF1DEE68081B6E3CAB367745F4_il2cpp_TypeInfo_var))->get_Instance_12();
		NullCheck((ES3Reader_t2780AF8AA61DA2A817115CEF8612AC0E494D03C9 *)L_65);
		bool L_67;
		L_67 = GenericVirtFuncInvoker1< bool, ES3Type_t8FBECB7AE75168648B9524E0C2A38DAD4555421D * >::Invoke(ES3Reader_Read_TisBoolean_t07D1E3F34E4813023D64F584DFF7B34C9D922F37_mC6D1B158268FF9B97822FF9F5B37FB1723FEDA22_RuntimeMethod_var, (ES3Reader_t2780AF8AA61DA2A817115CEF8612AC0E494D03C9 *)L_65, (ES3Type_t8FBECB7AE75168648B9524E0C2A38DAD4555421D *)L_66);
		ShapeModule_set_enabled_mF6FE8ED99E482A739C00F894235F4E2CD09B0D1E((ShapeModule_t3A89D143F5CAF357ECCE8B4A4F2BBD57816F98CA *)(ShapeModule_t3A89D143F5CAF357ECCE8B4A4F2BBD57816F98CA *)(&V_0), (bool)L_67, /*hidden argument*/NULL);
		// break;
		goto IL_042c;
	}

IL_02cd:
	{
		// instance.shapeType = reader.Read<UnityEngine.ParticleSystemShapeType>();
		ES3Reader_t2780AF8AA61DA2A817115CEF8612AC0E494D03C9 * L_68 = ___reader0;
		NullCheck((ES3Reader_t2780AF8AA61DA2A817115CEF8612AC0E494D03C9 *)L_68);
		int32_t L_69;
		L_69 = GenericVirtFuncInvoker0< int32_t >::Invoke(ES3Reader_Read_TisParticleSystemShapeType_t5B09F3A5A637F57DB1B2A6518E214AA2AA53D70C_mAE53212CB1FDDA51CF8CD0D39FCD446087DACA48_RuntimeMethod_var, (ES3Reader_t2780AF8AA61DA2A817115CEF8612AC0E494D03C9 *)L_68);
		ShapeModule_set_shapeType_mB772084527742749EB6AD690BAE47215FC71040D((ShapeModule_t3A89D143F5CAF357ECCE8B4A4F2BBD57816F98CA *)(ShapeModule_t3A89D143F5CAF357ECCE8B4A4F2BBD57816F98CA *)(&V_0), (int32_t)L_69, /*hidden argument*/NULL);
		// break;
		goto IL_042c;
	}

IL_02df:
	{
		// instance.randomDirectionAmount = reader.Read<System.Single>(ES3Type_float.Instance);
		ES3Reader_t2780AF8AA61DA2A817115CEF8612AC0E494D03C9 * L_70 = ___reader0;
		IL2CPP_RUNTIME_CLASS_INIT(ES3Type_float_tF86B773C86731BD9AD79448B860BBB178FE77644_il2cpp_TypeInfo_var);
		ES3Type_t8FBECB7AE75168648B9524E0C2A38DAD4555421D * L_71 = ((ES3Type_float_tF86B773C86731BD9AD79448B860BBB178FE77644_StaticFields*)il2cpp_codegen_static_fields_for(ES3Type_float_tF86B773C86731BD9AD79448B860BBB178FE77644_il2cpp_TypeInfo_var))->get_Instance_12();
		NullCheck((ES3Reader_t2780AF8AA61DA2A817115CEF8612AC0E494D03C9 *)L_70);
		float L_72;
		L_72 = GenericVirtFuncInvoker1< float, ES3Type_t8FBECB7AE75168648B9524E0C2A38DAD4555421D * >::Invoke(ES3Reader_Read_TisSingle_tE07797BA3C98D4CA9B5A19413C19A76688AB899E_m4A0416374498BDA042B8EB21E49B72326D6CE5F4_RuntimeMethod_var, (ES3Reader_t2780AF8AA61DA2A817115CEF8612AC0E494D03C9 *)L_70, (ES3Type_t8FBECB7AE75168648B9524E0C2A38DAD4555421D *)L_71);
		ShapeModule_set_randomDirectionAmount_m4E1BB67600D57383945F75F5A179EEEC01A76885((ShapeModule_t3A89D143F5CAF357ECCE8B4A4F2BBD57816F98CA *)(ShapeModule_t3A89D143F5CAF357ECCE8B4A4F2BBD57816F98CA *)(&V_0), (float)L_72, /*hidden argument*/NULL);
		// break;
		goto IL_042c;
	}

IL_02f6:
	{
		// instance.sphericalDirectionAmount = reader.Read<System.Single>(ES3Type_float.Instance);
		ES3Reader_t2780AF8AA61DA2A817115CEF8612AC0E494D03C9 * L_73 = ___reader0;
		IL2CPP_RUNTIME_CLASS_INIT(ES3Type_float_tF86B773C86731BD9AD79448B860BBB178FE77644_il2cpp_TypeInfo_var);
		ES3Type_t8FBECB7AE75168648B9524E0C2A38DAD4555421D * L_74 = ((ES3Type_float_tF86B773C86731BD9AD79448B860BBB178FE77644_StaticFields*)il2cpp_codegen_static_fields_for(ES3Type_float_tF86B773C86731BD9AD79448B860BBB178FE77644_il2cpp_TypeInfo_var))->get_Instance_12();
		NullCheck((ES3Reader_t2780AF8AA61DA2A817115CEF8612AC0E494D03C9 *)L_73);
		float L_75;
		L_75 = GenericVirtFuncInvoker1< float, ES3Type_t8FBECB7AE75168648B9524E0C2A38DAD4555421D * >::Invoke(ES3Reader_Read_TisSingle_tE07797BA3C98D4CA9B5A19413C19A76688AB899E_m4A0416374498BDA042B8EB21E49B72326D6CE5F4_RuntimeMethod_var, (ES3Reader_t2780AF8AA61DA2A817115CEF8612AC0E494D03C9 *)L_73, (ES3Type_t8FBECB7AE75168648B9524E0C2A38DAD4555421D *)L_74);
		ShapeModule_set_sphericalDirectionAmount_m02A9FBFF18AF24B821801DF5D833CA20A569F62B((ShapeModule_t3A89D143F5CAF357ECCE8B4A4F2BBD57816F98CA *)(ShapeModule_t3A89D143F5CAF357ECCE8B4A4F2BBD57816F98CA *)(&V_0), (float)L_75, /*hidden argument*/NULL);
		// break;
		goto IL_042c;
	}

IL_030d:
	{
		// instance.alignToDirection = reader.Read<System.Boolean>(ES3Type_bool.Instance);
		ES3Reader_t2780AF8AA61DA2A817115CEF8612AC0E494D03C9 * L_76 = ___reader0;
		IL2CPP_RUNTIME_CLASS_INIT(ES3Type_bool_t8F309F7B9CC735FF1DEE68081B6E3CAB367745F4_il2cpp_TypeInfo_var);
		ES3Type_t8FBECB7AE75168648B9524E0C2A38DAD4555421D * L_77 = ((ES3Type_bool_t8F309F7B9CC735FF1DEE68081B6E3CAB367745F4_StaticFields*)il2cpp_codegen_static_fields_for(ES3Type_bool_t8F309F7B9CC735FF1DEE68081B6E3CAB367745F4_il2cpp_TypeInfo_var))->get_Instance_12();
		NullCheck((ES3Reader_t2780AF8AA61DA2A817115CEF8612AC0E494D03C9 *)L_76);
		bool L_78;
		L_78 = GenericVirtFuncInvoker1< bool, ES3Type_t8FBECB7AE75168648B9524E0C2A38DAD4555421D * >::Invoke(ES3Reader_Read_TisBoolean_t07D1E3F34E4813023D64F584DFF7B34C9D922F37_mC6D1B158268FF9B97822FF9F5B37FB1723FEDA22_RuntimeMethod_var, (ES3Reader_t2780AF8AA61DA2A817115CEF8612AC0E494D03C9 *)L_76, (ES3Type_t8FBECB7AE75168648B9524E0C2A38DAD4555421D *)L_77);
		ShapeModule_set_alignToDirection_m396A57DCAD5F194E4DDDA0DF9C35E5508E3641BE((ShapeModule_t3A89D143F5CAF357ECCE8B4A4F2BBD57816F98CA *)(ShapeModule_t3A89D143F5CAF357ECCE8B4A4F2BBD57816F98CA *)(&V_0), (bool)L_78, /*hidden argument*/NULL);
		// break;
		goto IL_042c;
	}

IL_0324:
	{
		// instance.radius = reader.Read<System.Single>(ES3Type_float.Instance);
		ES3Reader_t2780AF8AA61DA2A817115CEF8612AC0E494D03C9 * L_79 = ___reader0;
		IL2CPP_RUNTIME_CLASS_INIT(ES3Type_float_tF86B773C86731BD9AD79448B860BBB178FE77644_il2cpp_TypeInfo_var);
		ES3Type_t8FBECB7AE75168648B9524E0C2A38DAD4555421D * L_80 = ((ES3Type_float_tF86B773C86731BD9AD79448B860BBB178FE77644_StaticFields*)il2cpp_codegen_static_fields_for(ES3Type_float_tF86B773C86731BD9AD79448B860BBB178FE77644_il2cpp_TypeInfo_var))->get_Instance_12();
		NullCheck((ES3Reader_t2780AF8AA61DA2A817115CEF8612AC0E494D03C9 *)L_79);
		float L_81;
		L_81 = GenericVirtFuncInvoker1< float, ES3Type_t8FBECB7AE75168648B9524E0C2A38DAD4555421D * >::Invoke(ES3Reader_Read_TisSingle_tE07797BA3C98D4CA9B5A19413C19A76688AB899E_m4A0416374498BDA042B8EB21E49B72326D6CE5F4_RuntimeMethod_var, (ES3Reader_t2780AF8AA61DA2A817115CEF8612AC0E494D03C9 *)L_79, (ES3Type_t8FBECB7AE75168648B9524E0C2A38DAD4555421D *)L_80);
		ShapeModule_set_radius_mFC12B15750268316924771461C09B1A311A16DEA((ShapeModule_t3A89D143F5CAF357ECCE8B4A4F2BBD57816F98CA *)(ShapeModule_t3A89D143F5CAF357ECCE8B4A4F2BBD57816F98CA *)(&V_0), (float)L_81, /*hidden argument*/NULL);
		// break;
		goto IL_042c;
	}

IL_033b:
	{
		// instance.angle = reader.Read<System.Single>(ES3Type_float.Instance);
		ES3Reader_t2780AF8AA61DA2A817115CEF8612AC0E494D03C9 * L_82 = ___reader0;
		IL2CPP_RUNTIME_CLASS_INIT(ES3Type_float_tF86B773C86731BD9AD79448B860BBB178FE77644_il2cpp_TypeInfo_var);
		ES3Type_t8FBECB7AE75168648B9524E0C2A38DAD4555421D * L_83 = ((ES3Type_float_tF86B773C86731BD9AD79448B860BBB178FE77644_StaticFields*)il2cpp_codegen_static_fields_for(ES3Type_float_tF86B773C86731BD9AD79448B860BBB178FE77644_il2cpp_TypeInfo_var))->get_Instance_12();
		NullCheck((ES3Reader_t2780AF8AA61DA2A817115CEF8612AC0E494D03C9 *)L_82);
		float L_84;
		L_84 = GenericVirtFuncInvoker1< float, ES3Type_t8FBECB7AE75168648B9524E0C2A38DAD4555421D * >::Invoke(ES3Reader_Read_TisSingle_tE07797BA3C98D4CA9B5A19413C19A76688AB899E_m4A0416374498BDA042B8EB21E49B72326D6CE5F4_RuntimeMethod_var, (ES3Reader_t2780AF8AA61DA2A817115CEF8612AC0E494D03C9 *)L_82, (ES3Type_t8FBECB7AE75168648B9524E0C2A38DAD4555421D *)L_83);
		ShapeModule_set_angle_m20629BB5FE89F2040960548B45F6EC801B1DB8AA((ShapeModule_t3A89D143F5CAF357ECCE8B4A4F2BBD57816F98CA *)(ShapeModule_t3A89D143F5CAF357ECCE8B4A4F2BBD57816F98CA *)(&V_0), (float)L_84, /*hidden argument*/NULL);
		// break;
		goto IL_042c;
	}

IL_0352:
	{
		// instance.length = reader.Read<System.Single>(ES3Type_float.Instance);
		ES3Reader_t2780AF8AA61DA2A817115CEF8612AC0E494D03C9 * L_85 = ___reader0;
		IL2CPP_RUNTIME_CLASS_INIT(ES3Type_float_tF86B773C86731BD9AD79448B860BBB178FE77644_il2cpp_TypeInfo_var);
		ES3Type_t8FBECB7AE75168648B9524E0C2A38DAD4555421D * L_86 = ((ES3Type_float_tF86B773C86731BD9AD79448B860BBB178FE77644_StaticFields*)il2cpp_codegen_static_fields_for(ES3Type_float_tF86B773C86731BD9AD79448B860BBB178FE77644_il2cpp_TypeInfo_var))->get_Instance_12();
		NullCheck((ES3Reader_t2780AF8AA61DA2A817115CEF8612AC0E494D03C9 *)L_85);
		float L_87;
		L_87 = GenericVirtFuncInvoker1< float, ES3Type_t8FBECB7AE75168648B9524E0C2A38DAD4555421D * >::Invoke(ES3Reader_Read_TisSingle_tE07797BA3C98D4CA9B5A19413C19A76688AB899E_m4A0416374498BDA042B8EB21E49B72326D6CE5F4_RuntimeMethod_var, (ES3Reader_t2780AF8AA61DA2A817115CEF8612AC0E494D03C9 *)L_85, (ES3Type_t8FBECB7AE75168648B9524E0C2A38DAD4555421D *)L_86);
		ShapeModule_set_length_m744975258664B53F38A8B8BE38A86A0FFDD85BC7((ShapeModule_t3A89D143F5CAF357ECCE8B4A4F2BBD57816F98CA *)(ShapeModule_t3A89D143F5CAF357ECCE8B4A4F2BBD57816F98CA *)(&V_0), (float)L_87, /*hidden argument*/NULL);
		// break;
		goto IL_042c;
	}

IL_0369:
	{
		// instance.scale = reader.Read<UnityEngine.Vector3>(ES3Type_Vector3.Instance);
		ES3Reader_t2780AF8AA61DA2A817115CEF8612AC0E494D03C9 * L_88 = ___reader0;
		IL2CPP_RUNTIME_CLASS_INIT(ES3Type_Vector3_tA9144E81A20D2F28726F02DE1AE6CD3F9C12B54F_il2cpp_TypeInfo_var);
		ES3Type_t8FBECB7AE75168648B9524E0C2A38DAD4555421D * L_89 = ((ES3Type_Vector3_tA9144E81A20D2F28726F02DE1AE6CD3F9C12B54F_StaticFields*)il2cpp_codegen_static_fields_for(ES3Type_Vector3_tA9144E81A20D2F28726F02DE1AE6CD3F9C12B54F_il2cpp_TypeInfo_var))->get_Instance_12();
		NullCheck((ES3Reader_t2780AF8AA61DA2A817115CEF8612AC0E494D03C9 *)L_88);
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_90;
		L_90 = GenericVirtFuncInvoker1< Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E , ES3Type_t8FBECB7AE75168648B9524E0C2A38DAD4555421D * >::Invoke(ES3Reader_Read_TisVector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E_mBA4CD9D0F45E78BA43FE2DB8EC33CC3A5433DE15_RuntimeMethod_var, (ES3Reader_t2780AF8AA61DA2A817115CEF8612AC0E494D03C9 *)L_88, (ES3Type_t8FBECB7AE75168648B9524E0C2A38DAD4555421D *)L_89);
		ShapeModule_set_scale_m2951583898F18878E6F238100045072F44AD9158((ShapeModule_t3A89D143F5CAF357ECCE8B4A4F2BBD57816F98CA *)(ShapeModule_t3A89D143F5CAF357ECCE8B4A4F2BBD57816F98CA *)(&V_0), (Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E )L_90, /*hidden argument*/NULL);
		// break;
		goto IL_042c;
	}

IL_0380:
	{
		// instance.meshShapeType = reader.Read<UnityEngine.ParticleSystemMeshShapeType>();
		ES3Reader_t2780AF8AA61DA2A817115CEF8612AC0E494D03C9 * L_91 = ___reader0;
		NullCheck((ES3Reader_t2780AF8AA61DA2A817115CEF8612AC0E494D03C9 *)L_91);
		int32_t L_92;
		L_92 = GenericVirtFuncInvoker0< int32_t >::Invoke(ES3Reader_Read_TisParticleSystemMeshShapeType_t7C9518403F30CC7AF7F9124FD61EC1187B42EFD2_mF1A19C0F8BBA6E44737F158F3BE4CC478F623F10_RuntimeMethod_var, (ES3Reader_t2780AF8AA61DA2A817115CEF8612AC0E494D03C9 *)L_91);
		ShapeModule_set_meshShapeType_m5DAD94B71F2110F45E454C30DE052153129891C2((ShapeModule_t3A89D143F5CAF357ECCE8B4A4F2BBD57816F98CA *)(ShapeModule_t3A89D143F5CAF357ECCE8B4A4F2BBD57816F98CA *)(&V_0), (int32_t)L_92, /*hidden argument*/NULL);
		// break;
		goto IL_042c;
	}

IL_0392:
	{
		// instance.mesh = reader.Read<UnityEngine.Mesh>();
		ES3Reader_t2780AF8AA61DA2A817115CEF8612AC0E494D03C9 * L_93 = ___reader0;
		NullCheck((ES3Reader_t2780AF8AA61DA2A817115CEF8612AC0E494D03C9 *)L_93);
		Mesh_t2F5992DBA650D5862B43D3823ACD997132A57DA6 * L_94;
		L_94 = GenericVirtFuncInvoker0< Mesh_t2F5992DBA650D5862B43D3823ACD997132A57DA6 * >::Invoke(ES3Reader_Read_TisMesh_t2F5992DBA650D5862B43D3823ACD997132A57DA6_m65DF5BA41642A39B77979CC49472E4DE7A1660F9_RuntimeMethod_var, (ES3Reader_t2780AF8AA61DA2A817115CEF8612AC0E494D03C9 *)L_93);
		ShapeModule_set_mesh_mD3E276A9E45442E75AD8A9AA4BD88C9112BD77CA((ShapeModule_t3A89D143F5CAF357ECCE8B4A4F2BBD57816F98CA *)(ShapeModule_t3A89D143F5CAF357ECCE8B4A4F2BBD57816F98CA *)(&V_0), (Mesh_t2F5992DBA650D5862B43D3823ACD997132A57DA6 *)L_94, /*hidden argument*/NULL);
		// break;
		goto IL_042c;
	}

IL_03a4:
	{
		// instance.meshRenderer = reader.Read<UnityEngine.MeshRenderer>();
		ES3Reader_t2780AF8AA61DA2A817115CEF8612AC0E494D03C9 * L_95 = ___reader0;
		NullCheck((ES3Reader_t2780AF8AA61DA2A817115CEF8612AC0E494D03C9 *)L_95);
		MeshRenderer_tCD983A2F635E12BCB0BAA2E635D96A318757908B * L_96;
		L_96 = GenericVirtFuncInvoker0< MeshRenderer_tCD983A2F635E12BCB0BAA2E635D96A318757908B * >::Invoke(ES3Reader_Read_TisMeshRenderer_tCD983A2F635E12BCB0BAA2E635D96A318757908B_m773CE5481730EBCC6A377F918946EB11B304050A_RuntimeMethod_var, (ES3Reader_t2780AF8AA61DA2A817115CEF8612AC0E494D03C9 *)L_95);
		ShapeModule_set_meshRenderer_m334D69AC8C29F5E393732D62BBB3645296614059((ShapeModule_t3A89D143F5CAF357ECCE8B4A4F2BBD57816F98CA *)(ShapeModule_t3A89D143F5CAF357ECCE8B4A4F2BBD57816F98CA *)(&V_0), (MeshRenderer_tCD983A2F635E12BCB0BAA2E635D96A318757908B *)L_96, /*hidden argument*/NULL);
		// break;
		goto IL_042c;
	}

IL_03b3:
	{
		// instance.skinnedMeshRenderer = reader.Read<UnityEngine.SkinnedMeshRenderer>();
		ES3Reader_t2780AF8AA61DA2A817115CEF8612AC0E494D03C9 * L_97 = ___reader0;
		NullCheck((ES3Reader_t2780AF8AA61DA2A817115CEF8612AC0E494D03C9 *)L_97);
		SkinnedMeshRenderer_t126F4D6010E0F4B2685A7817B0A9171805D8F496 * L_98;
		L_98 = GenericVirtFuncInvoker0< SkinnedMeshRenderer_t126F4D6010E0F4B2685A7817B0A9171805D8F496 * >::Invoke(ES3Reader_Read_TisSkinnedMeshRenderer_t126F4D6010E0F4B2685A7817B0A9171805D8F496_m23D6569D5CE7B3E1C67BDB470CDEDEF25A835F25_RuntimeMethod_var, (ES3Reader_t2780AF8AA61DA2A817115CEF8612AC0E494D03C9 *)L_97);
		ShapeModule_set_skinnedMeshRenderer_m9DEF9CD332D3F10BE7D99EFECC0971FB5AE83F56((ShapeModule_t3A89D143F5CAF357ECCE8B4A4F2BBD57816F98CA *)(ShapeModule_t3A89D143F5CAF357ECCE8B4A4F2BBD57816F98CA *)(&V_0), (SkinnedMeshRenderer_t126F4D6010E0F4B2685A7817B0A9171805D8F496 *)L_98, /*hidden argument*/NULL);
		// break;
		goto IL_042c;
	}

IL_03c2:
	{
		// instance.useMeshMaterialIndex = reader.Read<System.Boolean>(ES3Type_bool.Instance);
		ES3Reader_t2780AF8AA61DA2A817115CEF8612AC0E494D03C9 * L_99 = ___reader0;
		IL2CPP_RUNTIME_CLASS_INIT(ES3Type_bool_t8F309F7B9CC735FF1DEE68081B6E3CAB367745F4_il2cpp_TypeInfo_var);
		ES3Type_t8FBECB7AE75168648B9524E0C2A38DAD4555421D * L_100 = ((ES3Type_bool_t8F309F7B9CC735FF1DEE68081B6E3CAB367745F4_StaticFields*)il2cpp_codegen_static_fields_for(ES3Type_bool_t8F309F7B9CC735FF1DEE68081B6E3CAB367745F4_il2cpp_TypeInfo_var))->get_Instance_12();
		NullCheck((ES3Reader_t2780AF8AA61DA2A817115CEF8612AC0E494D03C9 *)L_99);
		bool L_101;
		L_101 = GenericVirtFuncInvoker1< bool, ES3Type_t8FBECB7AE75168648B9524E0C2A38DAD4555421D * >::Invoke(ES3Reader_Read_TisBoolean_t07D1E3F34E4813023D64F584DFF7B34C9D922F37_mC6D1B158268FF9B97822FF9F5B37FB1723FEDA22_RuntimeMethod_var, (ES3Reader_t2780AF8AA61DA2A817115CEF8612AC0E494D03C9 *)L_99, (ES3Type_t8FBECB7AE75168648B9524E0C2A38DAD4555421D *)L_100);
		ShapeModule_set_useMeshMaterialIndex_m6130573C0966ED3B5C590665747305BCEFD3F901((ShapeModule_t3A89D143F5CAF357ECCE8B4A4F2BBD57816F98CA *)(ShapeModule_t3A89D143F5CAF357ECCE8B4A4F2BBD57816F98CA *)(&V_0), (bool)L_101, /*hidden argument*/NULL);
		// break;
		goto IL_042c;
	}

IL_03d6:
	{
		// instance.meshMaterialIndex = reader.Read<System.Int32>(ES3Type_int.Instance);
		ES3Reader_t2780AF8AA61DA2A817115CEF8612AC0E494D03C9 * L_102 = ___reader0;
		IL2CPP_RUNTIME_CLASS_INIT(ES3Type_int_tF64C15D40AD0CC7C15BCD1CEC3C5C6BF837BD167_il2cpp_TypeInfo_var);
		ES3Type_t8FBECB7AE75168648B9524E0C2A38DAD4555421D * L_103 = ((ES3Type_int_tF64C15D40AD0CC7C15BCD1CEC3C5C6BF837BD167_StaticFields*)il2cpp_codegen_static_fields_for(ES3Type_int_tF64C15D40AD0CC7C15BCD1CEC3C5C6BF837BD167_il2cpp_TypeInfo_var))->get_Instance_12();
		NullCheck((ES3Reader_t2780AF8AA61DA2A817115CEF8612AC0E494D03C9 *)L_102);
		int32_t L_104;
		L_104 = GenericVirtFuncInvoker1< int32_t, ES3Type_t8FBECB7AE75168648B9524E0C2A38DAD4555421D * >::Invoke(ES3Reader_Read_TisInt32_tFDE5F8CD43D10453F6A2E0C77FE48C6CC7009046_m2B74AA6627F5B1D21171D56C42F71DE5A7C1B4A6_RuntimeMethod_var, (ES3Reader_t2780AF8AA61DA2A817115CEF8612AC0E494D03C9 *)L_102, (ES3Type_t8FBECB7AE75168648B9524E0C2A38DAD4555421D *)L_103);
		ShapeModule_set_meshMaterialIndex_m1205DDEB353204D5941654FB79164AD5BAF0A59C((ShapeModule_t3A89D143F5CAF357ECCE8B4A4F2BBD57816F98CA *)(ShapeModule_t3A89D143F5CAF357ECCE8B4A4F2BBD57816F98CA *)(&V_0), (int32_t)L_104, /*hidden argument*/NULL);
		// break;
		goto IL_042c;
	}

IL_03ea:
	{
		// instance.useMeshColors = reader.Read<System.Boolean>(ES3Type_bool.Instance);
		ES3Reader_t2780AF8AA61DA2A817115CEF8612AC0E494D03C9 * L_105 = ___reader0;
		IL2CPP_RUNTIME_CLASS_INIT(ES3Type_bool_t8F309F7B9CC735FF1DEE68081B6E3CAB367745F4_il2cpp_TypeInfo_var);
		ES3Type_t8FBECB7AE75168648B9524E0C2A38DAD4555421D * L_106 = ((ES3Type_bool_t8F309F7B9CC735FF1DEE68081B6E3CAB367745F4_StaticFields*)il2cpp_codegen_static_fields_for(ES3Type_bool_t8F309F7B9CC735FF1DEE68081B6E3CAB367745F4_il2cpp_TypeInfo_var))->get_Instance_12();
		NullCheck((ES3Reader_t2780AF8AA61DA2A817115CEF8612AC0E494D03C9 *)L_105);
		bool L_107;
		L_107 = GenericVirtFuncInvoker1< bool, ES3Type_t8FBECB7AE75168648B9524E0C2A38DAD4555421D * >::Invoke(ES3Reader_Read_TisBoolean_t07D1E3F34E4813023D64F584DFF7B34C9D922F37_mC6D1B158268FF9B97822FF9F5B37FB1723FEDA22_RuntimeMethod_var, (ES3Reader_t2780AF8AA61DA2A817115CEF8612AC0E494D03C9 *)L_105, (ES3Type_t8FBECB7AE75168648B9524E0C2A38DAD4555421D *)L_106);
		ShapeModule_set_useMeshColors_m071D000F330805B1EBCF09B40AC4EB9942EB9F57((ShapeModule_t3A89D143F5CAF357ECCE8B4A4F2BBD57816F98CA *)(ShapeModule_t3A89D143F5CAF357ECCE8B4A4F2BBD57816F98CA *)(&V_0), (bool)L_107, /*hidden argument*/NULL);
		// break;
		goto IL_042c;
	}

IL_03fe:
	{
		// instance.normalOffset = reader.Read<System.Single>(ES3Type_float.Instance);
		ES3Reader_t2780AF8AA61DA2A817115CEF8612AC0E494D03C9 * L_108 = ___reader0;
		IL2CPP_RUNTIME_CLASS_INIT(ES3Type_float_tF86B773C86731BD9AD79448B860BBB178FE77644_il2cpp_TypeInfo_var);
		ES3Type_t8FBECB7AE75168648B9524E0C2A38DAD4555421D * L_109 = ((ES3Type_float_tF86B773C86731BD9AD79448B860BBB178FE77644_StaticFields*)il2cpp_codegen_static_fields_for(ES3Type_float_tF86B773C86731BD9AD79448B860BBB178FE77644_il2cpp_TypeInfo_var))->get_Instance_12();
		NullCheck((ES3Reader_t2780AF8AA61DA2A817115CEF8612AC0E494D03C9 *)L_108);
		float L_110;
		L_110 = GenericVirtFuncInvoker1< float, ES3Type_t8FBECB7AE75168648B9524E0C2A38DAD4555421D * >::Invoke(ES3Reader_Read_TisSingle_tE07797BA3C98D4CA9B5A19413C19A76688AB899E_m4A0416374498BDA042B8EB21E49B72326D6CE5F4_RuntimeMethod_var, (ES3Reader_t2780AF8AA61DA2A817115CEF8612AC0E494D03C9 *)L_108, (ES3Type_t8FBECB7AE75168648B9524E0C2A38DAD4555421D *)L_109);
		ShapeModule_set_normalOffset_m81A315286BAA5F52AAED6B317734FB03B2DCE9FD((ShapeModule_t3A89D143F5CAF357ECCE8B4A4F2BBD57816F98CA *)(ShapeModule_t3A89D143F5CAF357ECCE8B4A4F2BBD57816F98CA *)(&V_0), (float)L_110, /*hidden argument*/NULL);
		// break;
		goto IL_042c;
	}

IL_0412:
	{
		// instance.arc = reader.Read<System.Single>(ES3Type_float.Instance);
		ES3Reader_t2780AF8AA61DA2A817115CEF8612AC0E494D03C9 * L_111 = ___reader0;
		IL2CPP_RUNTIME_CLASS_INIT(ES3Type_float_tF86B773C86731BD9AD79448B860BBB178FE77644_il2cpp_TypeInfo_var);
		ES3Type_t8FBECB7AE75168648B9524E0C2A38DAD4555421D * L_112 = ((ES3Type_float_tF86B773C86731BD9AD79448B860BBB178FE77644_StaticFields*)il2cpp_codegen_static_fields_for(ES3Type_float_tF86B773C86731BD9AD79448B860BBB178FE77644_il2cpp_TypeInfo_var))->get_Instance_12();
		NullCheck((ES3Reader_t2780AF8AA61DA2A817115CEF8612AC0E494D03C9 *)L_111);
		float L_113;
		L_113 = GenericVirtFuncInvoker1< float, ES3Type_t8FBECB7AE75168648B9524E0C2A38DAD4555421D * >::Invoke(ES3Reader_Read_TisSingle_tE07797BA3C98D4CA9B5A19413C19A76688AB899E_m4A0416374498BDA042B8EB21E49B72326D6CE5F4_RuntimeMethod_var, (ES3Reader_t2780AF8AA61DA2A817115CEF8612AC0E494D03C9 *)L_111, (ES3Type_t8FBECB7AE75168648B9524E0C2A38DAD4555421D *)L_112);
		ShapeModule_set_arc_m4A2578EBD4747DB3D9ED74AB53E488872CFA541F((ShapeModule_t3A89D143F5CAF357ECCE8B4A4F2BBD57816F98CA *)(ShapeModule_t3A89D143F5CAF357ECCE8B4A4F2BBD57816F98CA *)(&V_0), (float)L_113, /*hidden argument*/NULL);
		// break;
		goto IL_042c;
	}

IL_0426:
	{
		// reader.Skip();
		ES3Reader_t2780AF8AA61DA2A817115CEF8612AC0E494D03C9 * L_114 = ___reader0;
		NullCheck((ES3Reader_t2780AF8AA61DA2A817115CEF8612AC0E494D03C9 *)L_114);
		VirtActionInvoker0::Invoke(41 /* System.Void ES3Reader::Skip() */, (ES3Reader_t2780AF8AA61DA2A817115CEF8612AC0E494D03C9 *)L_114);
	}

IL_042c:
	{
		// while((propertyName = reader.ReadPropertyName()) != null)
		ES3Reader_t2780AF8AA61DA2A817115CEF8612AC0E494D03C9 * L_115 = ___reader0;
		NullCheck((ES3Reader_t2780AF8AA61DA2A817115CEF8612AC0E494D03C9 *)L_115);
		String_t* L_116;
		L_116 = VirtFuncInvoker0< String_t* >::Invoke(21 /* System.String ES3Reader::ReadPropertyName() */, (ES3Reader_t2780AF8AA61DA2A817115CEF8612AC0E494D03C9 *)L_115);
		String_t* L_117 = (String_t*)L_116;
		V_1 = (String_t*)L_117;
		if (L_117)
		{
			goto IL_000c;
		}
	}
	{
		// }
		return;
	}
}
// System.Void ES3Types.ES3Type_ShapeModule::ReadInto<UnityEngine.ParticleSystem/LightsModule>(ES3Reader,System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ES3Type_ShapeModule_ReadInto_TisLightsModule_t74903A9B68956FEDBDCC81420474A4B9AE399705_m7FA042E4E1914392751CB7A0E61F9E6EF7A4D0EC_gshared (ES3Type_ShapeModule_t67010A74D4F69A245D5F06976239CAB4279B5377 * __this, ES3Reader_t2780AF8AA61DA2A817115CEF8612AC0E494D03C9 * ___reader0, RuntimeObject * ___obj1, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ES3Reader_Read_TisBoolean_t07D1E3F34E4813023D64F584DFF7B34C9D922F37_mC6D1B158268FF9B97822FF9F5B37FB1723FEDA22_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ES3Reader_Read_TisInt32_tFDE5F8CD43D10453F6A2E0C77FE48C6CC7009046_m2B74AA6627F5B1D21171D56C42F71DE5A7C1B4A6_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ES3Reader_Read_TisMeshRenderer_tCD983A2F635E12BCB0BAA2E635D96A318757908B_m773CE5481730EBCC6A377F918946EB11B304050A_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ES3Reader_Read_TisMesh_t2F5992DBA650D5862B43D3823ACD997132A57DA6_m65DF5BA41642A39B77979CC49472E4DE7A1660F9_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ES3Reader_Read_TisParticleSystemMeshShapeType_t7C9518403F30CC7AF7F9124FD61EC1187B42EFD2_mF1A19C0F8BBA6E44737F158F3BE4CC478F623F10_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ES3Reader_Read_TisParticleSystemShapeType_t5B09F3A5A637F57DB1B2A6518E214AA2AA53D70C_mAE53212CB1FDDA51CF8CD0D39FCD446087DACA48_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ES3Reader_Read_TisSingle_tE07797BA3C98D4CA9B5A19413C19A76688AB899E_m4A0416374498BDA042B8EB21E49B72326D6CE5F4_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ES3Reader_Read_TisSkinnedMeshRenderer_t126F4D6010E0F4B2685A7817B0A9171805D8F496_m23D6569D5CE7B3E1C67BDB470CDEDEF25A835F25_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ES3Reader_Read_TisVector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E_mBA4CD9D0F45E78BA43FE2DB8EC33CC3A5433DE15_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ES3Type_Vector3_tA9144E81A20D2F28726F02DE1AE6CD3F9C12B54F_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ES3Type_bool_t8F309F7B9CC735FF1DEE68081B6E3CAB367745F4_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ES3Type_float_tF86B773C86731BD9AD79448B860BBB178FE77644_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ES3Type_int_tF64C15D40AD0CC7C15BCD1CEC3C5C6BF837BD167_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ShapeModule_t3A89D143F5CAF357ECCE8B4A4F2BBD57816F98CA_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral01837E2252AC8026A5EA3567A663017A662FBB70);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral1228466552C1791B2019A329AFE94665D441168A);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral60E56797D122AE71D3774956F66C6EEB9EA22C05);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral6686C366F645244186604A3DA4B9A58012A85F1B);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral82BECCAD895076775062861CDB46AADEF913D969);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral8C9F18A4F030B96447955FBBA1A99FFC43B5D8E0);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral8E54BB51E569CB6A8D3C45D8AEF883A1559C1C0E);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral91811EE149061D28B38320E2430CE8888AD6398B);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralBD49F93A7BC78A69E385CEC0E78F434BD2845A17);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralCA1B66E295BD92E9FD3B6C708F09CA69A50BEFD1);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralE8744A8B8BD390EB66CA0CAE2376C973E6904FFB);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralEB0A157666700D8227FD4B66A26FDC02035E89BF);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralED1F119527A0BCA45125EF8E0F719985DA86C0E1);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralF66E9083C67855AB6EBB4B74342E385A72AACE32);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralF9BE17D634D1B07BCDCDA77A87710C946D81307B);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralF9D225733E1D10F9344C755C4A9C0870CD1DE97B);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralFA5EC7168E9633DAAEAA255ECB55030EA60F064F);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralFC341A1966AF28A9A7A26EDFB78ABBF7DE4D0E1F);
		s_Il2CppMethodInitialized = true;
	}
	ShapeModule_t3A89D143F5CAF357ECCE8B4A4F2BBD57816F98CA  V_0;
	memset((&V_0), 0, sizeof(V_0));
	String_t* V_1 = NULL;
	uint32_t V_2 = 0;
	{
		// var instance = (UnityEngine.ParticleSystem.ShapeModule)obj;
		RuntimeObject * L_0 = ___obj1;
		V_0 = (ShapeModule_t3A89D143F5CAF357ECCE8B4A4F2BBD57816F98CA )((*(ShapeModule_t3A89D143F5CAF357ECCE8B4A4F2BBD57816F98CA *)((ShapeModule_t3A89D143F5CAF357ECCE8B4A4F2BBD57816F98CA *)UnBox(L_0, ShapeModule_t3A89D143F5CAF357ECCE8B4A4F2BBD57816F98CA_il2cpp_TypeInfo_var))));
		goto IL_042c;
	}

IL_000c:
	{
		String_t* L_1 = V_1;
		if (!L_1)
		{
			goto IL_0426;
		}
	}
	{
		String_t* L_2 = V_1;
		uint32_t L_3;
		L_3 = U3CPrivateImplementationDetailsU3E_ComputeStringHash_m3ADC1F612F9EE3DD518E6F0023A0DE0EE2B120A7((String_t*)L_2, /*hidden argument*/NULL);
		V_2 = (uint32_t)L_3;
		uint32_t L_4 = V_2;
		if ((!(((uint32_t)L_4) <= ((uint32_t)((int32_t)-2104025999)))))
		{
			goto IL_00b3;
		}
	}
	{
		uint32_t L_5 = V_2;
		if ((!(((uint32_t)L_5) <= ((uint32_t)((int32_t)666576729)))))
		{
			goto IL_006a;
		}
	}
	{
		uint32_t L_6 = V_2;
		if ((!(((uint32_t)L_6) <= ((uint32_t)((int32_t)49525662)))))
		{
			goto IL_004f;
		}
	}
	{
		uint32_t L_7 = V_2;
		if ((((int32_t)L_7) == ((int32_t)((int32_t)24602224))))
		{
			goto IL_024d;
		}
	}
	{
		uint32_t L_8 = V_2;
		if ((((int32_t)L_8) == ((int32_t)((int32_t)49525662))))
		{
			goto IL_013c;
		}
	}
	{
		goto IL_0426;
	}

IL_004f:
	{
		uint32_t L_9 = V_2;
		if ((((int32_t)L_9) == ((int32_t)((int32_t)230313139))))
		{
			goto IL_01a5;
		}
	}
	{
		uint32_t L_10 = V_2;
		if ((((int32_t)L_10) == ((int32_t)((int32_t)666576729))))
		{
			goto IL_01f9;
		}
	}
	{
		goto IL_0426;
	}

IL_006a:
	{
		uint32_t L_11 = V_2;
		if ((!(((uint32_t)L_11) <= ((uint32_t)((int32_t)955488309)))))
		{
			goto IL_008d;
		}
	}
	{
		uint32_t L_12 = V_2;
		if ((((int32_t)L_12) == ((int32_t)((int32_t)923624301))))
		{
			goto IL_0238;
		}
	}
	{
		uint32_t L_13 = V_2;
		if ((((int32_t)L_13) == ((int32_t)((int32_t)955488309))))
		{
			goto IL_028c;
		}
	}
	{
		goto IL_0426;
	}

IL_008d:
	{
		uint32_t L_14 = V_2;
		if ((((int32_t)L_14) == ((int32_t)((int32_t)980363995))))
		{
			goto IL_02a1;
		}
	}
	{
		uint32_t L_15 = V_2;
		if ((((int32_t)L_15) == ((int32_t)((int32_t)985988853))))
		{
			goto IL_017b;
		}
	}
	{
		uint32_t L_16 = V_2;
		if ((((int32_t)L_16) == ((int32_t)((int32_t)-2104025999))))
		{
			goto IL_01e4;
		}
	}
	{
		goto IL_0426;
	}

IL_00b3:
	{
		uint32_t L_17 = V_2;
		if ((!(((uint32_t)L_17) <= ((uint32_t)((int32_t)-1473810612)))))
		{
			goto IL_00f6;
		}
	}
	{
		uint32_t L_18 = V_2;
		if ((!(((uint32_t)L_18) <= ((uint32_t)((int32_t)-1726928010)))))
		{
			goto IL_00db;
		}
	}
	{
		uint32_t L_19 = V_2;
		if ((((int32_t)L_19) == ((int32_t)((int32_t)-2083506667))))
		{
			goto IL_01cf;
		}
	}
	{
		uint32_t L_20 = V_2;
		if ((((int32_t)L_20) == ((int32_t)((int32_t)-1726928010))))
		{
			goto IL_0151;
		}
	}
	{
		goto IL_0426;
	}

IL_00db:
	{
		uint32_t L_21 = V_2;
		if ((((int32_t)L_21) == ((int32_t)((int32_t)-1593786692))))
		{
			goto IL_020e;
		}
	}
	{
		uint32_t L_22 = V_2;
		if ((((int32_t)L_22) == ((int32_t)((int32_t)-1473810612))))
		{
			goto IL_0190;
		}
	}
	{
		goto IL_0426;
	}

IL_00f6:
	{
		uint32_t L_23 = V_2;
		if ((!(((uint32_t)L_23) <= ((uint32_t)((int32_t)-1386986472)))))
		{
			goto IL_0116;
		}
	}
	{
		uint32_t L_24 = V_2;
		if ((((int32_t)L_24) == ((int32_t)((int32_t)-1412039661))))
		{
			goto IL_0166;
		}
	}
	{
		uint32_t L_25 = V_2;
		if ((((int32_t)L_25) == ((int32_t)((int32_t)-1386986472))))
		{
			goto IL_01ba;
		}
	}
	{
		goto IL_0426;
	}

IL_0116:
	{
		uint32_t L_26 = V_2;
		if ((((int32_t)L_26) == ((int32_t)((int32_t)-584064197))))
		{
			goto IL_0223;
		}
	}
	{
		uint32_t L_27 = V_2;
		if ((((int32_t)L_27) == ((int32_t)((int32_t)-473474755))))
		{
			goto IL_0277;
		}
	}
	{
		uint32_t L_28 = V_2;
		if ((((int32_t)L_28) == ((int32_t)((int32_t)-365686981))))
		{
			goto IL_0262;
		}
	}
	{
		goto IL_0426;
	}

IL_013c:
	{
		String_t* L_29 = V_1;
		bool L_30;
		L_30 = String_op_Equality_m50B3548E4AC232558190B0052877B290AA1D436A((String_t*)L_29, (String_t*)_stringLiteralF9D225733E1D10F9344C755C4A9C0870CD1DE97B, /*hidden argument*/NULL);
		if (L_30)
		{
			goto IL_02b6;
		}
	}
	{
		goto IL_0426;
	}

IL_0151:
	{
		String_t* L_31 = V_1;
		bool L_32;
		L_32 = String_op_Equality_m50B3548E4AC232558190B0052877B290AA1D436A((String_t*)L_31, (String_t*)_stringLiteral82BECCAD895076775062861CDB46AADEF913D969, /*hidden argument*/NULL);
		if (L_32)
		{
			goto IL_02cd;
		}
	}
	{
		goto IL_0426;
	}

IL_0166:
	{
		String_t* L_33 = V_1;
		bool L_34;
		L_34 = String_op_Equality_m50B3548E4AC232558190B0052877B290AA1D436A((String_t*)L_33, (String_t*)_stringLiteral1228466552C1791B2019A329AFE94665D441168A, /*hidden argument*/NULL);
		if (L_34)
		{
			goto IL_02df;
		}
	}
	{
		goto IL_0426;
	}

IL_017b:
	{
		String_t* L_35 = V_1;
		bool L_36;
		L_36 = String_op_Equality_m50B3548E4AC232558190B0052877B290AA1D436A((String_t*)L_35, (String_t*)_stringLiteralBD49F93A7BC78A69E385CEC0E78F434BD2845A17, /*hidden argument*/NULL);
		if (L_36)
		{
			goto IL_02f6;
		}
	}
	{
		goto IL_0426;
	}

IL_0190:
	{
		String_t* L_37 = V_1;
		bool L_38;
		L_38 = String_op_Equality_m50B3548E4AC232558190B0052877B290AA1D436A((String_t*)L_37, (String_t*)_stringLiteralED1F119527A0BCA45125EF8E0F719985DA86C0E1, /*hidden argument*/NULL);
		if (L_38)
		{
			goto IL_030d;
		}
	}
	{
		goto IL_0426;
	}

IL_01a5:
	{
		String_t* L_39 = V_1;
		bool L_40;
		L_40 = String_op_Equality_m50B3548E4AC232558190B0052877B290AA1D436A((String_t*)L_39, (String_t*)_stringLiteral8C9F18A4F030B96447955FBBA1A99FFC43B5D8E0, /*hidden argument*/NULL);
		if (L_40)
		{
			goto IL_0324;
		}
	}
	{
		goto IL_0426;
	}

IL_01ba:
	{
		String_t* L_41 = V_1;
		bool L_42;
		L_42 = String_op_Equality_m50B3548E4AC232558190B0052877B290AA1D436A((String_t*)L_41, (String_t*)_stringLiteralFC341A1966AF28A9A7A26EDFB78ABBF7DE4D0E1F, /*hidden argument*/NULL);
		if (L_42)
		{
			goto IL_033b;
		}
	}
	{
		goto IL_0426;
	}

IL_01cf:
	{
		String_t* L_43 = V_1;
		bool L_44;
		L_44 = String_op_Equality_m50B3548E4AC232558190B0052877B290AA1D436A((String_t*)L_43, (String_t*)_stringLiteralE8744A8B8BD390EB66CA0CAE2376C973E6904FFB, /*hidden argument*/NULL);
		if (L_44)
		{
			goto IL_0352;
		}
	}
	{
		goto IL_0426;
	}

IL_01e4:
	{
		String_t* L_45 = V_1;
		bool L_46;
		L_46 = String_op_Equality_m50B3548E4AC232558190B0052877B290AA1D436A((String_t*)L_45, (String_t*)_stringLiteralF9BE17D634D1B07BCDCDA77A87710C946D81307B, /*hidden argument*/NULL);
		if (L_46)
		{
			goto IL_0369;
		}
	}
	{
		goto IL_0426;
	}

IL_01f9:
	{
		String_t* L_47 = V_1;
		bool L_48;
		L_48 = String_op_Equality_m50B3548E4AC232558190B0052877B290AA1D436A((String_t*)L_47, (String_t*)_stringLiteralFA5EC7168E9633DAAEAA255ECB55030EA60F064F, /*hidden argument*/NULL);
		if (L_48)
		{
			goto IL_0380;
		}
	}
	{
		goto IL_0426;
	}

IL_020e:
	{
		String_t* L_49 = V_1;
		bool L_50;
		L_50 = String_op_Equality_m50B3548E4AC232558190B0052877B290AA1D436A((String_t*)L_49, (String_t*)_stringLiteralEB0A157666700D8227FD4B66A26FDC02035E89BF, /*hidden argument*/NULL);
		if (L_50)
		{
			goto IL_0392;
		}
	}
	{
		goto IL_0426;
	}

IL_0223:
	{
		String_t* L_51 = V_1;
		bool L_52;
		L_52 = String_op_Equality_m50B3548E4AC232558190B0052877B290AA1D436A((String_t*)L_51, (String_t*)_stringLiteral8E54BB51E569CB6A8D3C45D8AEF883A1559C1C0E, /*hidden argument*/NULL);
		if (L_52)
		{
			goto IL_03a4;
		}
	}
	{
		goto IL_0426;
	}

IL_0238:
	{
		String_t* L_53 = V_1;
		bool L_54;
		L_54 = String_op_Equality_m50B3548E4AC232558190B0052877B290AA1D436A((String_t*)L_53, (String_t*)_stringLiteral60E56797D122AE71D3774956F66C6EEB9EA22C05, /*hidden argument*/NULL);
		if (L_54)
		{
			goto IL_03b3;
		}
	}
	{
		goto IL_0426;
	}

IL_024d:
	{
		String_t* L_55 = V_1;
		bool L_56;
		L_56 = String_op_Equality_m50B3548E4AC232558190B0052877B290AA1D436A((String_t*)L_55, (String_t*)_stringLiteral01837E2252AC8026A5EA3567A663017A662FBB70, /*hidden argument*/NULL);
		if (L_56)
		{
			goto IL_03c2;
		}
	}
	{
		goto IL_0426;
	}

IL_0262:
	{
		String_t* L_57 = V_1;
		bool L_58;
		L_58 = String_op_Equality_m50B3548E4AC232558190B0052877B290AA1D436A((String_t*)L_57, (String_t*)_stringLiteralF66E9083C67855AB6EBB4B74342E385A72AACE32, /*hidden argument*/NULL);
		if (L_58)
		{
			goto IL_03d6;
		}
	}
	{
		goto IL_0426;
	}

IL_0277:
	{
		String_t* L_59 = V_1;
		bool L_60;
		L_60 = String_op_Equality_m50B3548E4AC232558190B0052877B290AA1D436A((String_t*)L_59, (String_t*)_stringLiteral91811EE149061D28B38320E2430CE8888AD6398B, /*hidden argument*/NULL);
		if (L_60)
		{
			goto IL_03ea;
		}
	}
	{
		goto IL_0426;
	}

IL_028c:
	{
		String_t* L_61 = V_1;
		bool L_62;
		L_62 = String_op_Equality_m50B3548E4AC232558190B0052877B290AA1D436A((String_t*)L_61, (String_t*)_stringLiteral6686C366F645244186604A3DA4B9A58012A85F1B, /*hidden argument*/NULL);
		if (L_62)
		{
			goto IL_03fe;
		}
	}
	{
		goto IL_0426;
	}

IL_02a1:
	{
		String_t* L_63 = V_1;
		bool L_64;
		L_64 = String_op_Equality_m50B3548E4AC232558190B0052877B290AA1D436A((String_t*)L_63, (String_t*)_stringLiteralCA1B66E295BD92E9FD3B6C708F09CA69A50BEFD1, /*hidden argument*/NULL);
		if (L_64)
		{
			goto IL_0412;
		}
	}
	{
		goto IL_0426;
	}

IL_02b6:
	{
		// instance.enabled = reader.Read<System.Boolean>(ES3Type_bool.Instance);
		ES3Reader_t2780AF8AA61DA2A817115CEF8612AC0E494D03C9 * L_65 = ___reader0;
		IL2CPP_RUNTIME_CLASS_INIT(ES3Type_bool_t8F309F7B9CC735FF1DEE68081B6E3CAB367745F4_il2cpp_TypeInfo_var);
		ES3Type_t8FBECB7AE75168648B9524E0C2A38DAD4555421D * L_66 = ((ES3Type_bool_t8F309F7B9CC735FF1DEE68081B6E3CAB367745F4_StaticFields*)il2cpp_codegen_static_fields_for(ES3Type_bool_t8F309F7B9CC735FF1DEE68081B6E3CAB367745F4_il2cpp_TypeInfo_var))->get_Instance_12();
		NullCheck((ES3Reader_t2780AF8AA61DA2A817115CEF8612AC0E494D03C9 *)L_65);
		bool L_67;
		L_67 = GenericVirtFuncInvoker1< bool, ES3Type_t8FBECB7AE75168648B9524E0C2A38DAD4555421D * >::Invoke(ES3Reader_Read_TisBoolean_t07D1E3F34E4813023D64F584DFF7B34C9D922F37_mC6D1B158268FF9B97822FF9F5B37FB1723FEDA22_RuntimeMethod_var, (ES3Reader_t2780AF8AA61DA2A817115CEF8612AC0E494D03C9 *)L_65, (ES3Type_t8FBECB7AE75168648B9524E0C2A38DAD4555421D *)L_66);
		ShapeModule_set_enabled_mF6FE8ED99E482A739C00F894235F4E2CD09B0D1E((ShapeModule_t3A89D143F5CAF357ECCE8B4A4F2BBD57816F98CA *)(ShapeModule_t3A89D143F5CAF357ECCE8B4A4F2BBD57816F98CA *)(&V_0), (bool)L_67, /*hidden argument*/NULL);
		// break;
		goto IL_042c;
	}

IL_02cd:
	{
		// instance.shapeType = reader.Read<UnityEngine.ParticleSystemShapeType>();
		ES3Reader_t2780AF8AA61DA2A817115CEF8612AC0E494D03C9 * L_68 = ___reader0;
		NullCheck((ES3Reader_t2780AF8AA61DA2A817115CEF8612AC0E494D03C9 *)L_68);
		int32_t L_69;
		L_69 = GenericVirtFuncInvoker0< int32_t >::Invoke(ES3Reader_Read_TisParticleSystemShapeType_t5B09F3A5A637F57DB1B2A6518E214AA2AA53D70C_mAE53212CB1FDDA51CF8CD0D39FCD446087DACA48_RuntimeMethod_var, (ES3Reader_t2780AF8AA61DA2A817115CEF8612AC0E494D03C9 *)L_68);
		ShapeModule_set_shapeType_mB772084527742749EB6AD690BAE47215FC71040D((ShapeModule_t3A89D143F5CAF357ECCE8B4A4F2BBD57816F98CA *)(ShapeModule_t3A89D143F5CAF357ECCE8B4A4F2BBD57816F98CA *)(&V_0), (int32_t)L_69, /*hidden argument*/NULL);
		// break;
		goto IL_042c;
	}

IL_02df:
	{
		// instance.randomDirectionAmount = reader.Read<System.Single>(ES3Type_float.Instance);
		ES3Reader_t2780AF8AA61DA2A817115CEF8612AC0E494D03C9 * L_70 = ___reader0;
		IL2CPP_RUNTIME_CLASS_INIT(ES3Type_float_tF86B773C86731BD9AD79448B860BBB178FE77644_il2cpp_TypeInfo_var);
		ES3Type_t8FBECB7AE75168648B9524E0C2A38DAD4555421D * L_71 = ((ES3Type_float_tF86B773C86731BD9AD79448B860BBB178FE77644_StaticFields*)il2cpp_codegen_static_fields_for(ES3Type_float_tF86B773C86731BD9AD79448B860BBB178FE77644_il2cpp_TypeInfo_var))->get_Instance_12();
		NullCheck((ES3Reader_t2780AF8AA61DA2A817115CEF8612AC0E494D03C9 *)L_70);
		float L_72;
		L_72 = GenericVirtFuncInvoker1< float, ES3Type_t8FBECB7AE75168648B9524E0C2A38DAD4555421D * >::Invoke(ES3Reader_Read_TisSingle_tE07797BA3C98D4CA9B5A19413C19A76688AB899E_m4A0416374498BDA042B8EB21E49B72326D6CE5F4_RuntimeMethod_var, (ES3Reader_t2780AF8AA61DA2A817115CEF8612AC0E494D03C9 *)L_70, (ES3Type_t8FBECB7AE75168648B9524E0C2A38DAD4555421D *)L_71);
		ShapeModule_set_randomDirectionAmount_m4E1BB67600D57383945F75F5A179EEEC01A76885((ShapeModule_t3A89D143F5CAF357ECCE8B4A4F2BBD57816F98CA *)(ShapeModule_t3A89D143F5CAF357ECCE8B4A4F2BBD57816F98CA *)(&V_0), (float)L_72, /*hidden argument*/NULL);
		// break;
		goto IL_042c;
	}

IL_02f6:
	{
		// instance.sphericalDirectionAmount = reader.Read<System.Single>(ES3Type_float.Instance);
		ES3Reader_t2780AF8AA61DA2A817115CEF8612AC0E494D03C9 * L_73 = ___reader0;
		IL2CPP_RUNTIME_CLASS_INIT(ES3Type_float_tF86B773C86731BD9AD79448B860BBB178FE77644_il2cpp_TypeInfo_var);
		ES3Type_t8FBECB7AE75168648B9524E0C2A38DAD4555421D * L_74 = ((ES3Type_float_tF86B773C86731BD9AD79448B860BBB178FE77644_StaticFields*)il2cpp_codegen_static_fields_for(ES3Type_float_tF86B773C86731BD9AD79448B860BBB178FE77644_il2cpp_TypeInfo_var))->get_Instance_12();
		NullCheck((ES3Reader_t2780AF8AA61DA2A817115CEF8612AC0E494D03C9 *)L_73);
		float L_75;
		L_75 = GenericVirtFuncInvoker1< float, ES3Type_t8FBECB7AE75168648B9524E0C2A38DAD4555421D * >::Invoke(ES3Reader_Read_TisSingle_tE07797BA3C98D4CA9B5A19413C19A76688AB899E_m4A0416374498BDA042B8EB21E49B72326D6CE5F4_RuntimeMethod_var, (ES3Reader_t2780AF8AA61DA2A817115CEF8612AC0E494D03C9 *)L_73, (ES3Type_t8FBECB7AE75168648B9524E0C2A38DAD4555421D *)L_74);
		ShapeModule_set_sphericalDirectionAmount_m02A9FBFF18AF24B821801DF5D833CA20A569F62B((ShapeModule_t3A89D143F5CAF357ECCE8B4A4F2BBD57816F98CA *)(ShapeModule_t3A89D143F5CAF357ECCE8B4A4F2BBD57816F98CA *)(&V_0), (float)L_75, /*hidden argument*/NULL);
		// break;
		goto IL_042c;
	}

IL_030d:
	{
		// instance.alignToDirection = reader.Read<System.Boolean>(ES3Type_bool.Instance);
		ES3Reader_t2780AF8AA61DA2A817115CEF8612AC0E494D03C9 * L_76 = ___reader0;
		IL2CPP_RUNTIME_CLASS_INIT(ES3Type_bool_t8F309F7B9CC735FF1DEE68081B6E3CAB367745F4_il2cpp_TypeInfo_var);
		ES3Type_t8FBECB7AE75168648B9524E0C2A38DAD4555421D * L_77 = ((ES3Type_bool_t8F309F7B9CC735FF1DEE68081B6E3CAB367745F4_StaticFields*)il2cpp_codegen_static_fields_for(ES3Type_bool_t8F309F7B9CC735FF1DEE68081B6E3CAB367745F4_il2cpp_TypeInfo_var))->get_Instance_12();
		NullCheck((ES3Reader_t2780AF8AA61DA2A817115CEF8612AC0E494D03C9 *)L_76);
		bool L_78;
		L_78 = GenericVirtFuncInvoker1< bool, ES3Type_t8FBECB7AE75168648B9524E0C2A38DAD4555421D * >::Invoke(ES3Reader_Read_TisBoolean_t07D1E3F34E4813023D64F584DFF7B34C9D922F37_mC6D1B158268FF9B97822FF9F5B37FB1723FEDA22_RuntimeMethod_var, (ES3Reader_t2780AF8AA61DA2A817115CEF8612AC0E494D03C9 *)L_76, (ES3Type_t8FBECB7AE75168648B9524E0C2A38DAD4555421D *)L_77);
		ShapeModule_set_alignToDirection_m396A57DCAD5F194E4DDDA0DF9C35E5508E3641BE((ShapeModule_t3A89D143F5CAF357ECCE8B4A4F2BBD57816F98CA *)(ShapeModule_t3A89D143F5CAF357ECCE8B4A4F2BBD57816F98CA *)(&V_0), (bool)L_78, /*hidden argument*/NULL);
		// break;
		goto IL_042c;
	}

IL_0324:
	{
		// instance.radius = reader.Read<System.Single>(ES3Type_float.Instance);
		ES3Reader_t2780AF8AA61DA2A817115CEF8612AC0E494D03C9 * L_79 = ___reader0;
		IL2CPP_RUNTIME_CLASS_INIT(ES3Type_float_tF86B773C86731BD9AD79448B860BBB178FE77644_il2cpp_TypeInfo_var);
		ES3Type_t8FBECB7AE75168648B9524E0C2A38DAD4555421D * L_80 = ((ES3Type_float_tF86B773C86731BD9AD79448B860BBB178FE77644_StaticFields*)il2cpp_codegen_static_fields_for(ES3Type_float_tF86B773C86731BD9AD79448B860BBB178FE77644_il2cpp_TypeInfo_var))->get_Instance_12();
		NullCheck((ES3Reader_t2780AF8AA61DA2A817115CEF8612AC0E494D03C9 *)L_79);
		float L_81;
		L_81 = GenericVirtFuncInvoker1< float, ES3Type_t8FBECB7AE75168648B9524E0C2A38DAD4555421D * >::Invoke(ES3Reader_Read_TisSingle_tE07797BA3C98D4CA9B5A19413C19A76688AB899E_m4A0416374498BDA042B8EB21E49B72326D6CE5F4_RuntimeMethod_var, (ES3Reader_t2780AF8AA61DA2A817115CEF8612AC0E494D03C9 *)L_79, (ES3Type_t8FBECB7AE75168648B9524E0C2A38DAD4555421D *)L_80);
		ShapeModule_set_radius_mFC12B15750268316924771461C09B1A311A16DEA((ShapeModule_t3A89D143F5CAF357ECCE8B4A4F2BBD57816F98CA *)(ShapeModule_t3A89D143F5CAF357ECCE8B4A4F2BBD57816F98CA *)(&V_0), (float)L_81, /*hidden argument*/NULL);
		// break;
		goto IL_042c;
	}

IL_033b:
	{
		// instance.angle = reader.Read<System.Single>(ES3Type_float.Instance);
		ES3Reader_t2780AF8AA61DA2A817115CEF8612AC0E494D03C9 * L_82 = ___reader0;
		IL2CPP_RUNTIME_CLASS_INIT(ES3Type_float_tF86B773C86731BD9AD79448B860BBB178FE77644_il2cpp_TypeInfo_var);
		ES3Type_t8FBECB7AE75168648B9524E0C2A38DAD4555421D * L_83 = ((ES3Type_float_tF86B773C86731BD9AD79448B860BBB178FE77644_StaticFields*)il2cpp_codegen_static_fields_for(ES3Type_float_tF86B773C86731BD9AD79448B860BBB178FE77644_il2cpp_TypeInfo_var))->get_Instance_12();
		NullCheck((ES3Reader_t2780AF8AA61DA2A817115CEF8612AC0E494D03C9 *)L_82);
		float L_84;
		L_84 = GenericVirtFuncInvoker1< float, ES3Type_t8FBECB7AE75168648B9524E0C2A38DAD4555421D * >::Invoke(ES3Reader_Read_TisSingle_tE07797BA3C98D4CA9B5A19413C19A76688AB899E_m4A0416374498BDA042B8EB21E49B72326D6CE5F4_RuntimeMethod_var, (ES3Reader_t2780AF8AA61DA2A817115CEF8612AC0E494D03C9 *)L_82, (ES3Type_t8FBECB7AE75168648B9524E0C2A38DAD4555421D *)L_83);
		ShapeModule_set_angle_m20629BB5FE89F2040960548B45F6EC801B1DB8AA((ShapeModule_t3A89D143F5CAF357ECCE8B4A4F2BBD57816F98CA *)(ShapeModule_t3A89D143F5CAF357ECCE8B4A4F2BBD57816F98CA *)(&V_0), (float)L_84, /*hidden argument*/NULL);
		// break;
		goto IL_042c;
	}

IL_0352:
	{
		// instance.length = reader.Read<System.Single>(ES3Type_float.Instance);
		ES3Reader_t2780AF8AA61DA2A817115CEF8612AC0E494D03C9 * L_85 = ___reader0;
		IL2CPP_RUNTIME_CLASS_INIT(ES3Type_float_tF86B773C86731BD9AD79448B860BBB178FE77644_il2cpp_TypeInfo_var);
		ES3Type_t8FBECB7AE75168648B9524E0C2A38DAD4555421D * L_86 = ((ES3Type_float_tF86B773C86731BD9AD79448B860BBB178FE77644_StaticFields*)il2cpp_codegen_static_fields_for(ES3Type_float_tF86B773C86731BD9AD79448B860BBB178FE77644_il2cpp_TypeInfo_var))->get_Instance_12();
		NullCheck((ES3Reader_t2780AF8AA61DA2A817115CEF8612AC0E494D03C9 *)L_85);
		float L_87;
		L_87 = GenericVirtFuncInvoker1< float, ES3Type_t8FBECB7AE75168648B9524E0C2A38DAD4555421D * >::Invoke(ES3Reader_Read_TisSingle_tE07797BA3C98D4CA9B5A19413C19A76688AB899E_m4A0416374498BDA042B8EB21E49B72326D6CE5F4_RuntimeMethod_var, (ES3Reader_t2780AF8AA61DA2A817115CEF8612AC0E494D03C9 *)L_85, (ES3Type_t8FBECB7AE75168648B9524E0C2A38DAD4555421D *)L_86);
		ShapeModule_set_length_m744975258664B53F38A8B8BE38A86A0FFDD85BC7((ShapeModule_t3A89D143F5CAF357ECCE8B4A4F2BBD57816F98CA *)(ShapeModule_t3A89D143F5CAF357ECCE8B4A4F2BBD57816F98CA *)(&V_0), (float)L_87, /*hidden argument*/NULL);
		// break;
		goto IL_042c;
	}

IL_0369:
	{
		// instance.scale = reader.Read<UnityEngine.Vector3>(ES3Type_Vector3.Instance);
		ES3Reader_t2780AF8AA61DA2A817115CEF8612AC0E494D03C9 * L_88 = ___reader0;
		IL2CPP_RUNTIME_CLASS_INIT(ES3Type_Vector3_tA9144E81A20D2F28726F02DE1AE6CD3F9C12B54F_il2cpp_TypeInfo_var);
		ES3Type_t8FBECB7AE75168648B9524E0C2A38DAD4555421D * L_89 = ((ES3Type_Vector3_tA9144E81A20D2F28726F02DE1AE6CD3F9C12B54F_StaticFields*)il2cpp_codegen_static_fields_for(ES3Type_Vector3_tA9144E81A20D2F28726F02DE1AE6CD3F9C12B54F_il2cpp_TypeInfo_var))->get_Instance_12();
		NullCheck((ES3Reader_t2780AF8AA61DA2A817115CEF8612AC0E494D03C9 *)L_88);
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_90;
		L_90 = GenericVirtFuncInvoker1< Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E , ES3Type_t8FBECB7AE75168648B9524E0C2A38DAD4555421D * >::Invoke(ES3Reader_Read_TisVector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E_mBA4CD9D0F45E78BA43FE2DB8EC33CC3A5433DE15_RuntimeMethod_var, (ES3Reader_t2780AF8AA61DA2A817115CEF8612AC0E494D03C9 *)L_88, (ES3Type_t8FBECB7AE75168648B9524E0C2A38DAD4555421D *)L_89);
		ShapeModule_set_scale_m2951583898F18878E6F238100045072F44AD9158((ShapeModule_t3A89D143F5CAF357ECCE8B4A4F2BBD57816F98CA *)(ShapeModule_t3A89D143F5CAF357ECCE8B4A4F2BBD57816F98CA *)(&V_0), (Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E )L_90, /*hidden argument*/NULL);
		// break;
		goto IL_042c;
	}

IL_0380:
	{
		// instance.meshShapeType = reader.Read<UnityEngine.ParticleSystemMeshShapeType>();
		ES3Reader_t2780AF8AA61DA2A817115CEF8612AC0E494D03C9 * L_91 = ___reader0;
		NullCheck((ES3Reader_t2780AF8AA61DA2A817115CEF8612AC0E494D03C9 *)L_91);
		int32_t L_92;
		L_92 = GenericVirtFuncInvoker0< int32_t >::Invoke(ES3Reader_Read_TisParticleSystemMeshShapeType_t7C9518403F30CC7AF7F9124FD61EC1187B42EFD2_mF1A19C0F8BBA6E44737F158F3BE4CC478F623F10_RuntimeMethod_var, (ES3Reader_t2780AF8AA61DA2A817115CEF8612AC0E494D03C9 *)L_91);
		ShapeModule_set_meshShapeType_m5DAD94B71F2110F45E454C30DE052153129891C2((ShapeModule_t3A89D143F5CAF357ECCE8B4A4F2BBD57816F98CA *)(ShapeModule_t3A89D143F5CAF357ECCE8B4A4F2BBD57816F98CA *)(&V_0), (int32_t)L_92, /*hidden argument*/NULL);
		// break;
		goto IL_042c;
	}

IL_0392:
	{
		// instance.mesh = reader.Read<UnityEngine.Mesh>();
		ES3Reader_t2780AF8AA61DA2A817115CEF8612AC0E494D03C9 * L_93 = ___reader0;
		NullCheck((ES3Reader_t2780AF8AA61DA2A817115CEF8612AC0E494D03C9 *)L_93);
		Mesh_t2F5992DBA650D5862B43D3823ACD997132A57DA6 * L_94;
		L_94 = GenericVirtFuncInvoker0< Mesh_t2F5992DBA650D5862B43D3823ACD997132A57DA6 * >::Invoke(ES3Reader_Read_TisMesh_t2F5992DBA650D5862B43D3823ACD997132A57DA6_m65DF5BA41642A39B77979CC49472E4DE7A1660F9_RuntimeMethod_var, (ES3Reader_t2780AF8AA61DA2A817115CEF8612AC0E494D03C9 *)L_93);
		ShapeModule_set_mesh_mD3E276A9E45442E75AD8A9AA4BD88C9112BD77CA((ShapeModule_t3A89D143F5CAF357ECCE8B4A4F2BBD57816F98CA *)(ShapeModule_t3A89D143F5CAF357ECCE8B4A4F2BBD57816F98CA *)(&V_0), (Mesh_t2F5992DBA650D5862B43D3823ACD997132A57DA6 *)L_94, /*hidden argument*/NULL);
		// break;
		goto IL_042c;
	}

IL_03a4:
	{
		// instance.meshRenderer = reader.Read<UnityEngine.MeshRenderer>();
		ES3Reader_t2780AF8AA61DA2A817115CEF8612AC0E494D03C9 * L_95 = ___reader0;
		NullCheck((ES3Reader_t2780AF8AA61DA2A817115CEF8612AC0E494D03C9 *)L_95);
		MeshRenderer_tCD983A2F635E12BCB0BAA2E635D96A318757908B * L_96;
		L_96 = GenericVirtFuncInvoker0< MeshRenderer_tCD983A2F635E12BCB0BAA2E635D96A318757908B * >::Invoke(ES3Reader_Read_TisMeshRenderer_tCD983A2F635E12BCB0BAA2E635D96A318757908B_m773CE5481730EBCC6A377F918946EB11B304050A_RuntimeMethod_var, (ES3Reader_t2780AF8AA61DA2A817115CEF8612AC0E494D03C9 *)L_95);
		ShapeModule_set_meshRenderer_m334D69AC8C29F5E393732D62BBB3645296614059((ShapeModule_t3A89D143F5CAF357ECCE8B4A4F2BBD57816F98CA *)(ShapeModule_t3A89D143F5CAF357ECCE8B4A4F2BBD57816F98CA *)(&V_0), (MeshRenderer_tCD983A2F635E12BCB0BAA2E635D96A318757908B *)L_96, /*hidden argument*/NULL);
		// break;
		goto IL_042c;
	}

IL_03b3:
	{
		// instance.skinnedMeshRenderer = reader.Read<UnityEngine.SkinnedMeshRenderer>();
		ES3Reader_t2780AF8AA61DA2A817115CEF8612AC0E494D03C9 * L_97 = ___reader0;
		NullCheck((ES3Reader_t2780AF8AA61DA2A817115CEF8612AC0E494D03C9 *)L_97);
		SkinnedMeshRenderer_t126F4D6010E0F4B2685A7817B0A9171805D8F496 * L_98;
		L_98 = GenericVirtFuncInvoker0< SkinnedMeshRenderer_t126F4D6010E0F4B2685A7817B0A9171805D8F496 * >::Invoke(ES3Reader_Read_TisSkinnedMeshRenderer_t126F4D6010E0F4B2685A7817B0A9171805D8F496_m23D6569D5CE7B3E1C67BDB470CDEDEF25A835F25_RuntimeMethod_var, (ES3Reader_t2780AF8AA61DA2A817115CEF8612AC0E494D03C9 *)L_97);
		ShapeModule_set_skinnedMeshRenderer_m9DEF9CD332D3F10BE7D99EFECC0971FB5AE83F56((ShapeModule_t3A89D143F5CAF357ECCE8B4A4F2BBD57816F98CA *)(ShapeModule_t3A89D143F5CAF357ECCE8B4A4F2BBD57816F98CA *)(&V_0), (SkinnedMeshRenderer_t126F4D6010E0F4B2685A7817B0A9171805D8F496 *)L_98, /*hidden argument*/NULL);
		// break;
		goto IL_042c;
	}

IL_03c2:
	{
		// instance.useMeshMaterialIndex = reader.Read<System.Boolean>(ES3Type_bool.Instance);
		ES3Reader_t2780AF8AA61DA2A817115CEF8612AC0E494D03C9 * L_99 = ___reader0;
		IL2CPP_RUNTIME_CLASS_INIT(ES3Type_bool_t8F309F7B9CC735FF1DEE68081B6E3CAB367745F4_il2cpp_TypeInfo_var);
		ES3Type_t8FBECB7AE75168648B9524E0C2A38DAD4555421D * L_100 = ((ES3Type_bool_t8F309F7B9CC735FF1DEE68081B6E3CAB367745F4_StaticFields*)il2cpp_codegen_static_fields_for(ES3Type_bool_t8F309F7B9CC735FF1DEE68081B6E3CAB367745F4_il2cpp_TypeInfo_var))->get_Instance_12();
		NullCheck((ES3Reader_t2780AF8AA61DA2A817115CEF8612AC0E494D03C9 *)L_99);
		bool L_101;
		L_101 = GenericVirtFuncInvoker1< bool, ES3Type_t8FBECB7AE75168648B9524E0C2A38DAD4555421D * >::Invoke(ES3Reader_Read_TisBoolean_t07D1E3F34E4813023D64F584DFF7B34C9D922F37_mC6D1B158268FF9B97822FF9F5B37FB1723FEDA22_RuntimeMethod_var, (ES3Reader_t2780AF8AA61DA2A817115CEF8612AC0E494D03C9 *)L_99, (ES3Type_t8FBECB7AE75168648B9524E0C2A38DAD4555421D *)L_100);
		ShapeModule_set_useMeshMaterialIndex_m6130573C0966ED3B5C590665747305BCEFD3F901((ShapeModule_t3A89D143F5CAF357ECCE8B4A4F2BBD57816F98CA *)(ShapeModule_t3A89D143F5CAF357ECCE8B4A4F2BBD57816F98CA *)(&V_0), (bool)L_101, /*hidden argument*/NULL);
		// break;
		goto IL_042c;
	}

IL_03d6:
	{
		// instance.meshMaterialIndex = reader.Read<System.Int32>(ES3Type_int.Instance);
		ES3Reader_t2780AF8AA61DA2A817115CEF8612AC0E494D03C9 * L_102 = ___reader0;
		IL2CPP_RUNTIME_CLASS_INIT(ES3Type_int_tF64C15D40AD0CC7C15BCD1CEC3C5C6BF837BD167_il2cpp_TypeInfo_var);
		ES3Type_t8FBECB7AE75168648B9524E0C2A38DAD4555421D * L_103 = ((ES3Type_int_tF64C15D40AD0CC7C15BCD1CEC3C5C6BF837BD167_StaticFields*)il2cpp_codegen_static_fields_for(ES3Type_int_tF64C15D40AD0CC7C15BCD1CEC3C5C6BF837BD167_il2cpp_TypeInfo_var))->get_Instance_12();
		NullCheck((ES3Reader_t2780AF8AA61DA2A817115CEF8612AC0E494D03C9 *)L_102);
		int32_t L_104;
		L_104 = GenericVirtFuncInvoker1< int32_t, ES3Type_t8FBECB7AE75168648B9524E0C2A38DAD4555421D * >::Invoke(ES3Reader_Read_TisInt32_tFDE5F8CD43D10453F6A2E0C77FE48C6CC7009046_m2B74AA6627F5B1D21171D56C42F71DE5A7C1B4A6_RuntimeMethod_var, (ES3Reader_t2780AF8AA61DA2A817115CEF8612AC0E494D03C9 *)L_102, (ES3Type_t8FBECB7AE75168648B9524E0C2A38DAD4555421D *)L_103);
		ShapeModule_set_meshMaterialIndex_m1205DDEB353204D5941654FB79164AD5BAF0A59C((ShapeModule_t3A89D143F5CAF357ECCE8B4A4F2BBD57816F98CA *)(ShapeModule_t3A89D143F5CAF357ECCE8B4A4F2BBD57816F98CA *)(&V_0), (int32_t)L_104, /*hidden argument*/NULL);
		// break;
		goto IL_042c;
	}

IL_03ea:
	{
		// instance.useMeshColors = reader.Read<System.Boolean>(ES3Type_bool.Instance);
		ES3Reader_t2780AF8AA61DA2A817115CEF8612AC0E494D03C9 * L_105 = ___reader0;
		IL2CPP_RUNTIME_CLASS_INIT(ES3Type_bool_t8F309F7B9CC735FF1DEE68081B6E3CAB367745F4_il2cpp_TypeInfo_var);
		ES3Type_t8FBECB7AE75168648B9524E0C2A38DAD4555421D * L_106 = ((ES3Type_bool_t8F309F7B9CC735FF1DEE68081B6E3CAB367745F4_StaticFields*)il2cpp_codegen_static_fields_for(ES3Type_bool_t8F309F7B9CC735FF1DEE68081B6E3CAB367745F4_il2cpp_TypeInfo_var))->get_Instance_12();
		NullCheck((ES3Reader_t2780AF8AA61DA2A817115CEF8612AC0E494D03C9 *)L_105);
		bool L_107;
		L_107 = GenericVirtFuncInvoker1< bool, ES3Type_t8FBECB7AE75168648B9524E0C2A38DAD4555421D * >::Invoke(ES3Reader_Read_TisBoolean_t07D1E3F34E4813023D64F584DFF7B34C9D922F37_mC6D1B158268FF9B97822FF9F5B37FB1723FEDA22_RuntimeMethod_var, (ES3Reader_t2780AF8AA61DA2A817115CEF8612AC0E494D03C9 *)L_105, (ES3Type_t8FBECB7AE75168648B9524E0C2A38DAD4555421D *)L_106);
		ShapeModule_set_useMeshColors_m071D000F330805B1EBCF09B40AC4EB9942EB9F57((ShapeModule_t3A89D143F5CAF357ECCE8B4A4F2BBD57816F98CA *)(ShapeModule_t3A89D143F5CAF357ECCE8B4A4F2BBD57816F98CA *)(&V_0), (bool)L_107, /*hidden argument*/NULL);
		// break;
		goto IL_042c;
	}

IL_03fe:
	{
		// instance.normalOffset = reader.Read<System.Single>(ES3Type_float.Instance);
		ES3Reader_t2780AF8AA61DA2A817115CEF8612AC0E494D03C9 * L_108 = ___reader0;
		IL2CPP_RUNTIME_CLASS_INIT(ES3Type_float_tF86B773C86731BD9AD79448B860BBB178FE77644_il2cpp_TypeInfo_var);
		ES3Type_t8FBECB7AE75168648B9524E0C2A38DAD4555421D * L_109 = ((ES3Type_float_tF86B773C86731BD9AD79448B860BBB178FE77644_StaticFields*)il2cpp_codegen_static_fields_for(ES3Type_float_tF86B773C86731BD9AD79448B860BBB178FE77644_il2cpp_TypeInfo_var))->get_Instance_12();
		NullCheck((ES3Reader_t2780AF8AA61DA2A817115CEF8612AC0E494D03C9 *)L_108);
		float L_110;
		L_110 = GenericVirtFuncInvoker1< float, ES3Type_t8FBECB7AE75168648B9524E0C2A38DAD4555421D * >::Invoke(ES3Reader_Read_TisSingle_tE07797BA3C98D4CA9B5A19413C19A76688AB899E_m4A0416374498BDA042B8EB21E49B72326D6CE5F4_RuntimeMethod_var, (ES3Reader_t2780AF8AA61DA2A817115CEF8612AC0E494D03C9 *)L_108, (ES3Type_t8FBECB7AE75168648B9524E0C2A38DAD4555421D *)L_109);
		ShapeModule_set_normalOffset_m81A315286BAA5F52AAED6B317734FB03B2DCE9FD((ShapeModule_t3A89D143F5CAF357ECCE8B4A4F2BBD57816F98CA *)(ShapeModule_t3A89D143F5CAF357ECCE8B4A4F2BBD57816F98CA *)(&V_0), (float)L_110, /*hidden argument*/NULL);
		// break;
		goto IL_042c;
	}

IL_0412:
	{
		// instance.arc = reader.Read<System.Single>(ES3Type_float.Instance);
		ES3Reader_t2780AF8AA61DA2A817115CEF8612AC0E494D03C9 * L_111 = ___reader0;
		IL2CPP_RUNTIME_CLASS_INIT(ES3Type_float_tF86B773C86731BD9AD79448B860BBB178FE77644_il2cpp_TypeInfo_var);
		ES3Type_t8FBECB7AE75168648B9524E0C2A38DAD4555421D * L_112 = ((ES3Type_float_tF86B773C86731BD9AD79448B860BBB178FE77644_StaticFields*)il2cpp_codegen_static_fields_for(ES3Type_float_tF86B773C86731BD9AD79448B860BBB178FE77644_il2cpp_TypeInfo_var))->get_Instance_12();
		NullCheck((ES3Reader_t2780AF8AA61DA2A817115CEF8612AC0E494D03C9 *)L_111);
		float L_113;
		L_113 = GenericVirtFuncInvoker1< float, ES3Type_t8FBECB7AE75168648B9524E0C2A38DAD4555421D * >::Invoke(ES3Reader_Read_TisSingle_tE07797BA3C98D4CA9B5A19413C19A76688AB899E_m4A0416374498BDA042B8EB21E49B72326D6CE5F4_RuntimeMethod_var, (ES3Reader_t2780AF8AA61DA2A817115CEF8612AC0E494D03C9 *)L_111, (ES3Type_t8FBECB7AE75168648B9524E0C2A38DAD4555421D *)L_112);
		ShapeModule_set_arc_m4A2578EBD4747DB3D9ED74AB53E488872CFA541F((ShapeModule_t3A89D143F5CAF357ECCE8B4A4F2BBD57816F98CA *)(ShapeModule_t3A89D143F5CAF357ECCE8B4A4F2BBD57816F98CA *)(&V_0), (float)L_113, /*hidden argument*/NULL);
		// break;
		goto IL_042c;
	}

IL_0426:
	{
		// reader.Skip();
		ES3Reader_t2780AF8AA61DA2A817115CEF8612AC0E494D03C9 * L_114 = ___reader0;
		NullCheck((ES3Reader_t2780AF8AA61DA2A817115CEF8612AC0E494D03C9 *)L_114);
		VirtActionInvoker0::Invoke(41 /* System.Void ES3Reader::Skip() */, (ES3Reader_t2780AF8AA61DA2A817115CEF8612AC0E494D03C9 *)L_114);
	}

IL_042c:
	{
		// while((propertyName = reader.ReadPropertyName()) != null)
		ES3Reader_t2780AF8AA61DA2A817115CEF8612AC0E494D03C9 * L_115 = ___reader0;
		NullCheck((ES3Reader_t2780AF8AA61DA2A817115CEF8612AC0E494D03C9 *)L_115);
		String_t* L_116;
		L_116 = VirtFuncInvoker0< String_t* >::Invoke(21 /* System.String ES3Reader::ReadPropertyName() */, (ES3Reader_t2780AF8AA61DA2A817115CEF8612AC0E494D03C9 *)L_115);
		String_t* L_117 = (String_t*)L_116;
		V_1 = (String_t*)L_117;
		if (L_117)
		{
			goto IL_000c;
		}
	}
	{
		// }
		return;
	}
}
// System.Void ES3Types.ES3Type_ShapeModule::ReadInto<UnityEngine.ParticleSystem/LimitVelocityOverLifetimeModule>(ES3Reader,System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ES3Type_ShapeModule_ReadInto_TisLimitVelocityOverLifetimeModule_tA8F1AC2538B089795E58CC7AEC7E8D9E60B5669C_m792FEA3ECE14CDD528E0DB69BB6861D1483964FA_gshared (ES3Type_ShapeModule_t67010A74D4F69A245D5F06976239CAB4279B5377 * __this, ES3Reader_t2780AF8AA61DA2A817115CEF8612AC0E494D03C9 * ___reader0, RuntimeObject * ___obj1, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ES3Reader_Read_TisBoolean_t07D1E3F34E4813023D64F584DFF7B34C9D922F37_mC6D1B158268FF9B97822FF9F5B37FB1723FEDA22_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ES3Reader_Read_TisInt32_tFDE5F8CD43D10453F6A2E0C77FE48C6CC7009046_m2B74AA6627F5B1D21171D56C42F71DE5A7C1B4A6_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ES3Reader_Read_TisMeshRenderer_tCD983A2F635E12BCB0BAA2E635D96A318757908B_m773CE5481730EBCC6A377F918946EB11B304050A_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ES3Reader_Read_TisMesh_t2F5992DBA650D5862B43D3823ACD997132A57DA6_m65DF5BA41642A39B77979CC49472E4DE7A1660F9_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ES3Reader_Read_TisParticleSystemMeshShapeType_t7C9518403F30CC7AF7F9124FD61EC1187B42EFD2_mF1A19C0F8BBA6E44737F158F3BE4CC478F623F10_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ES3Reader_Read_TisParticleSystemShapeType_t5B09F3A5A637F57DB1B2A6518E214AA2AA53D70C_mAE53212CB1FDDA51CF8CD0D39FCD446087DACA48_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ES3Reader_Read_TisSingle_tE07797BA3C98D4CA9B5A19413C19A76688AB899E_m4A0416374498BDA042B8EB21E49B72326D6CE5F4_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ES3Reader_Read_TisSkinnedMeshRenderer_t126F4D6010E0F4B2685A7817B0A9171805D8F496_m23D6569D5CE7B3E1C67BDB470CDEDEF25A835F25_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ES3Reader_Read_TisVector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E_mBA4CD9D0F45E78BA43FE2DB8EC33CC3A5433DE15_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ES3Type_Vector3_tA9144E81A20D2F28726F02DE1AE6CD3F9C12B54F_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ES3Type_bool_t8F309F7B9CC735FF1DEE68081B6E3CAB367745F4_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ES3Type_float_tF86B773C86731BD9AD79448B860BBB178FE77644_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ES3Type_int_tF64C15D40AD0CC7C15BCD1CEC3C5C6BF837BD167_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ShapeModule_t3A89D143F5CAF357ECCE8B4A4F2BBD57816F98CA_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral01837E2252AC8026A5EA3567A663017A662FBB70);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral1228466552C1791B2019A329AFE94665D441168A);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral60E56797D122AE71D3774956F66C6EEB9EA22C05);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral6686C366F645244186604A3DA4B9A58012A85F1B);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral82BECCAD895076775062861CDB46AADEF913D969);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral8C9F18A4F030B96447955FBBA1A99FFC43B5D8E0);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral8E54BB51E569CB6A8D3C45D8AEF883A1559C1C0E);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral91811EE149061D28B38320E2430CE8888AD6398B);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralBD49F93A7BC78A69E385CEC0E78F434BD2845A17);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralCA1B66E295BD92E9FD3B6C708F09CA69A50BEFD1);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralE8744A8B8BD390EB66CA0CAE2376C973E6904FFB);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralEB0A157666700D8227FD4B66A26FDC02035E89BF);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralED1F119527A0BCA45125EF8E0F719985DA86C0E1);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralF66E9083C67855AB6EBB4B74342E385A72AACE32);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralF9BE17D634D1B07BCDCDA77A87710C946D81307B);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralF9D225733E1D10F9344C755C4A9C0870CD1DE97B);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralFA5EC7168E9633DAAEAA255ECB55030EA60F064F);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralFC341A1966AF28A9A7A26EDFB78ABBF7DE4D0E1F);
		s_Il2CppMethodInitialized = true;
	}
	ShapeModule_t3A89D143F5CAF357ECCE8B4A4F2BBD57816F98CA  V_0;
	memset((&V_0), 0, sizeof(V_0));
	String_t* V_1 = NULL;
	uint32_t V_2 = 0;
	{
		// var instance = (UnityEngine.ParticleSystem.ShapeModule)obj;
		RuntimeObject * L_0 = ___obj1;
		V_0 = (ShapeModule_t3A89D143F5CAF357ECCE8B4A4F2BBD57816F98CA )((*(ShapeModule_t3A89D143F5CAF357ECCE8B4A4F2BBD57816F98CA *)((ShapeModule_t3A89D143F5CAF357ECCE8B4A4F2BBD57816F98CA *)UnBox(L_0, ShapeModule_t3A89D143F5CAF357ECCE8B4A4F2BBD57816F98CA_il2cpp_TypeInfo_var))));
		goto IL_042c;
	}

IL_000c:
	{
		String_t* L_1 = V_1;
		if (!L_1)
		{
			goto IL_0426;
		}
	}
	{
		String_t* L_2 = V_1;
		uint32_t L_3;
		L_3 = U3CPrivateImplementationDetailsU3E_ComputeStringHash_m3ADC1F612F9EE3DD518E6F0023A0DE0EE2B120A7((String_t*)L_2, /*hidden argument*/NULL);
		V_2 = (uint32_t)L_3;
		uint32_t L_4 = V_2;
		if ((!(((uint32_t)L_4) <= ((uint32_t)((int32_t)-2104025999)))))
		{
			goto IL_00b3;
		}
	}
	{
		uint32_t L_5 = V_2;
		if ((!(((uint32_t)L_5) <= ((uint32_t)((int32_t)666576729)))))
		{
			goto IL_006a;
		}
	}
	{
		uint32_t L_6 = V_2;
		if ((!(((uint32_t)L_6) <= ((uint32_t)((int32_t)49525662)))))
		{
			goto IL_004f;
		}
	}
	{
		uint32_t L_7 = V_2;
		if ((((int32_t)L_7) == ((int32_t)((int32_t)24602224))))
		{
			goto IL_024d;
		}
	}
	{
		uint32_t L_8 = V_2;
		if ((((int32_t)L_8) == ((int32_t)((int32_t)49525662))))
		{
			goto IL_013c;
		}
	}
	{
		goto IL_0426;
	}

IL_004f:
	{
		uint32_t L_9 = V_2;
		if ((((int32_t)L_9) == ((int32_t)((int32_t)230313139))))
		{
			goto IL_01a5;
		}
	}
	{
		uint32_t L_10 = V_2;
		if ((((int32_t)L_10) == ((int32_t)((int32_t)666576729))))
		{
			goto IL_01f9;
		}
	}
	{
		goto IL_0426;
	}

IL_006a:
	{
		uint32_t L_11 = V_2;
		if ((!(((uint32_t)L_11) <= ((uint32_t)((int32_t)955488309)))))
		{
			goto IL_008d;
		}
	}
	{
		uint32_t L_12 = V_2;
		if ((((int32_t)L_12) == ((int32_t)((int32_t)923624301))))
		{
			goto IL_0238;
		}
	}
	{
		uint32_t L_13 = V_2;
		if ((((int32_t)L_13) == ((int32_t)((int32_t)955488309))))
		{
			goto IL_028c;
		}
	}
	{
		goto IL_0426;
	}

IL_008d:
	{
		uint32_t L_14 = V_2;
		if ((((int32_t)L_14) == ((int32_t)((int32_t)980363995))))
		{
			goto IL_02a1;
		}
	}
	{
		uint32_t L_15 = V_2;
		if ((((int32_t)L_15) == ((int32_t)((int32_t)985988853))))
		{
			goto IL_017b;
		}
	}
	{
		uint32_t L_16 = V_2;
		if ((((int32_t)L_16) == ((int32_t)((int32_t)-2104025999))))
		{
			goto IL_01e4;
		}
	}
	{
		goto IL_0426;
	}

IL_00b3:
	{
		uint32_t L_17 = V_2;
		if ((!(((uint32_t)L_17) <= ((uint32_t)((int32_t)-1473810612)))))
		{
			goto IL_00f6;
		}
	}
	{
		uint32_t L_18 = V_2;
		if ((!(((uint32_t)L_18) <= ((uint32_t)((int32_t)-1726928010)))))
		{
			goto IL_00db;
		}
	}
	{
		uint32_t L_19 = V_2;
		if ((((int32_t)L_19) == ((int32_t)((int32_t)-2083506667))))
		{
			goto IL_01cf;
		}
	}
	{
		uint32_t L_20 = V_2;
		if ((((int32_t)L_20) == ((int32_t)((int32_t)-1726928010))))
		{
			goto IL_0151;
		}
	}
	{
		goto IL_0426;
	}

IL_00db:
	{
		uint32_t L_21 = V_2;
		if ((((int32_t)L_21) == ((int32_t)((int32_t)-1593786692))))
		{
			goto IL_020e;
		}
	}
	{
		uint32_t L_22 = V_2;
		if ((((int32_t)L_22) == ((int32_t)((int32_t)-1473810612))))
		{
			goto IL_0190;
		}
	}
	{
		goto IL_0426;
	}

IL_00f6:
	{
		uint32_t L_23 = V_2;
		if ((!(((uint32_t)L_23) <= ((uint32_t)((int32_t)-1386986472)))))
		{
			goto IL_0116;
		}
	}
	{
		uint32_t L_24 = V_2;
		if ((((int32_t)L_24) == ((int32_t)((int32_t)-1412039661))))
		{
			goto IL_0166;
		}
	}
	{
		uint32_t L_25 = V_2;
		if ((((int32_t)L_25) == ((int32_t)((int32_t)-1386986472))))
		{
			goto IL_01ba;
		}
	}
	{
		goto IL_0426;
	}

IL_0116:
	{
		uint32_t L_26 = V_2;
		if ((((int32_t)L_26) == ((int32_t)((int32_t)-584064197))))
		{
			goto IL_0223;
		}
	}
	{
		uint32_t L_27 = V_2;
		if ((((int32_t)L_27) == ((int32_t)((int32_t)-473474755))))
		{
			goto IL_0277;
		}
	}
	{
		uint32_t L_28 = V_2;
		if ((((int32_t)L_28) == ((int32_t)((int32_t)-365686981))))
		{
			goto IL_0262;
		}
	}
	{
		goto IL_0426;
	}

IL_013c:
	{
		String_t* L_29 = V_1;
		bool L_30;
		L_30 = String_op_Equality_m50B3548E4AC232558190B0052877B290AA1D436A((String_t*)L_29, (String_t*)_stringLiteralF9D225733E1D10F9344C755C4A9C0870CD1DE97B, /*hidden argument*/NULL);
		if (L_30)
		{
			goto IL_02b6;
		}
	}
	{
		goto IL_0426;
	}

IL_0151:
	{
		String_t* L_31 = V_1;
		bool L_32;
		L_32 = String_op_Equality_m50B3548E4AC232558190B0052877B290AA1D436A((String_t*)L_31, (String_t*)_stringLiteral82BECCAD895076775062861CDB46AADEF913D969, /*hidden argument*/NULL);
		if (L_32)
		{
			goto IL_02cd;
		}
	}
	{
		goto IL_0426;
	}

IL_0166:
	{
		String_t* L_33 = V_1;
		bool L_34;
		L_34 = String_op_Equality_m50B3548E4AC232558190B0052877B290AA1D436A((String_t*)L_33, (String_t*)_stringLiteral1228466552C1791B2019A329AFE94665D441168A, /*hidden argument*/NULL);
		if (L_34)
		{
			goto IL_02df;
		}
	}
	{
		goto IL_0426;
	}

IL_017b:
	{
		String_t* L_35 = V_1;
		bool L_36;
		L_36 = String_op_Equality_m50B3548E4AC232558190B0052877B290AA1D436A((String_t*)L_35, (String_t*)_stringLiteralBD49F93A7BC78A69E385CEC0E78F434BD2845A17, /*hidden argument*/NULL);
		if (L_36)
		{
			goto IL_02f6;
		}
	}
	{
		goto IL_0426;
	}

IL_0190:
	{
		String_t* L_37 = V_1;
		bool L_38;
		L_38 = String_op_Equality_m50B3548E4AC232558190B0052877B290AA1D436A((String_t*)L_37, (String_t*)_stringLiteralED1F119527A0BCA45125EF8E0F719985DA86C0E1, /*hidden argument*/NULL);
		if (L_38)
		{
			goto IL_030d;
		}
	}
	{
		goto IL_0426;
	}

IL_01a5:
	{
		String_t* L_39 = V_1;
		bool L_40;
		L_40 = String_op_Equality_m50B3548E4AC232558190B0052877B290AA1D436A((String_t*)L_39, (String_t*)_stringLiteral8C9F18A4F030B96447955FBBA1A99FFC43B5D8E0, /*hidden argument*/NULL);
		if (L_40)
		{
			goto IL_0324;
		}
	}
	{
		goto IL_0426;
	}

IL_01ba:
	{
		String_t* L_41 = V_1;
		bool L_42;
		L_42 = String_op_Equality_m50B3548E4AC232558190B0052877B290AA1D436A((String_t*)L_41, (String_t*)_stringLiteralFC341A1966AF28A9A7A26EDFB78ABBF7DE4D0E1F, /*hidden argument*/NULL);
		if (L_42)
		{
			goto IL_033b;
		}
	}
	{
		goto IL_0426;
	}

IL_01cf:
	{
		String_t* L_43 = V_1;
		bool L_44;
		L_44 = String_op_Equality_m50B3548E4AC232558190B0052877B290AA1D436A((String_t*)L_43, (String_t*)_stringLiteralE8744A8B8BD390EB66CA0CAE2376C973E6904FFB, /*hidden argument*/NULL);
		if (L_44)
		{
			goto IL_0352;
		}
	}
	{
		goto IL_0426;
	}

IL_01e4:
	{
		String_t* L_45 = V_1;
		bool L_46;
		L_46 = String_op_Equality_m50B3548E4AC232558190B0052877B290AA1D436A((String_t*)L_45, (String_t*)_stringLiteralF9BE17D634D1B07BCDCDA77A87710C946D81307B, /*hidden argument*/NULL);
		if (L_46)
		{
			goto IL_0369;
		}
	}
	{
		goto IL_0426;
	}

IL_01f9:
	{
		String_t* L_47 = V_1;
		bool L_48;
		L_48 = String_op_Equality_m50B3548E4AC232558190B0052877B290AA1D436A((String_t*)L_47, (String_t*)_stringLiteralFA5EC7168E9633DAAEAA255ECB55030EA60F064F, /*hidden argument*/NULL);
		if (L_48)
		{
			goto IL_0380;
		}
	}
	{
		goto IL_0426;
	}

IL_020e:
	{
		String_t* L_49 = V_1;
		bool L_50;
		L_50 = String_op_Equality_m50B3548E4AC232558190B0052877B290AA1D436A((String_t*)L_49, (String_t*)_stringLiteralEB0A157666700D8227FD4B66A26FDC02035E89BF, /*hidden argument*/NULL);
		if (L_50)
		{
			goto IL_0392;
		}
	}
	{
		goto IL_0426;
	}

IL_0223:
	{
		String_t* L_51 = V_1;
		bool L_52;
		L_52 = String_op_Equality_m50B3548E4AC232558190B0052877B290AA1D436A((String_t*)L_51, (String_t*)_stringLiteral8E54BB51E569CB6A8D3C45D8AEF883A1559C1C0E, /*hidden argument*/NULL);
		if (L_52)
		{
			goto IL_03a4;
		}
	}
	{
		goto IL_0426;
	}

IL_0238:
	{
		String_t* L_53 = V_1;
		bool L_54;
		L_54 = String_op_Equality_m50B3548E4AC232558190B0052877B290AA1D436A((String_t*)L_53, (String_t*)_stringLiteral60E56797D122AE71D3774956F66C6EEB9EA22C05, /*hidden argument*/NULL);
		if (L_54)
		{
			goto IL_03b3;
		}
	}
	{
		goto IL_0426;
	}

IL_024d:
	{
		String_t* L_55 = V_1;
		bool L_56;
		L_56 = String_op_Equality_m50B3548E4AC232558190B0052877B290AA1D436A((String_t*)L_55, (String_t*)_stringLiteral01837E2252AC8026A5EA3567A663017A662FBB70, /*hidden argument*/NULL);
		if (L_56)
		{
			goto IL_03c2;
		}
	}
	{
		goto IL_0426;
	}

IL_0262:
	{
		String_t* L_57 = V_1;
		bool L_58;
		L_58 = String_op_Equality_m50B3548E4AC232558190B0052877B290AA1D436A((String_t*)L_57, (String_t*)_stringLiteralF66E9083C67855AB6EBB4B74342E385A72AACE32, /*hidden argument*/NULL);
		if (L_58)
		{
			goto IL_03d6;
		}
	}
	{
		goto IL_0426;
	}

IL_0277:
	{
		String_t* L_59 = V_1;
		bool L_60;
		L_60 = String_op_Equality_m50B3548E4AC232558190B0052877B290AA1D436A((String_t*)L_59, (String_t*)_stringLiteral91811EE149061D28B38320E2430CE8888AD6398B, /*hidden argument*/NULL);
		if (L_60)
		{
			goto IL_03ea;
		}
	}
	{
		goto IL_0426;
	}

IL_028c:
	{
		String_t* L_61 = V_1;
		bool L_62;
		L_62 = String_op_Equality_m50B3548E4AC232558190B0052877B290AA1D436A((String_t*)L_61, (String_t*)_stringLiteral6686C366F645244186604A3DA4B9A58012A85F1B, /*hidden argument*/NULL);
		if (L_62)
		{
			goto IL_03fe;
		}
	}
	{
		goto IL_0426;
	}

IL_02a1:
	{
		String_t* L_63 = V_1;
		bool L_64;
		L_64 = String_op_Equality_m50B3548E4AC232558190B0052877B290AA1D436A((String_t*)L_63, (String_t*)_stringLiteralCA1B66E295BD92E9FD3B6C708F09CA69A50BEFD1, /*hidden argument*/NULL);
		if (L_64)
		{
			goto IL_0412;
		}
	}
	{
		goto IL_0426;
	}

IL_02b6:
	{
		// instance.enabled = reader.Read<System.Boolean>(ES3Type_bool.Instance);
		ES3Reader_t2780AF8AA61DA2A817115CEF8612AC0E494D03C9 * L_65 = ___reader0;
		IL2CPP_RUNTIME_CLASS_INIT(ES3Type_bool_t8F309F7B9CC735FF1DEE68081B6E3CAB367745F4_il2cpp_TypeInfo_var);
		ES3Type_t8FBECB7AE75168648B9524E0C2A38DAD4555421D * L_66 = ((ES3Type_bool_t8F309F7B9CC735FF1DEE68081B6E3CAB367745F4_StaticFields*)il2cpp_codegen_static_fields_for(ES3Type_bool_t8F309F7B9CC735FF1DEE68081B6E3CAB367745F4_il2cpp_TypeInfo_var))->get_Instance_12();
		NullCheck((ES3Reader_t2780AF8AA61DA2A817115CEF8612AC0E494D03C9 *)L_65);
		bool L_67;
		L_67 = GenericVirtFuncInvoker1< bool, ES3Type_t8FBECB7AE75168648B9524E0C2A38DAD4555421D * >::Invoke(ES3Reader_Read_TisBoolean_t07D1E3F34E4813023D64F584DFF7B34C9D922F37_mC6D1B158268FF9B97822FF9F5B37FB1723FEDA22_RuntimeMethod_var, (ES3Reader_t2780AF8AA61DA2A817115CEF8612AC0E494D03C9 *)L_65, (ES3Type_t8FBECB7AE75168648B9524E0C2A38DAD4555421D *)L_66);
		ShapeModule_set_enabled_mF6FE8ED99E482A739C00F894235F4E2CD09B0D1E((ShapeModule_t3A89D143F5CAF357ECCE8B4A4F2BBD57816F98CA *)(ShapeModule_t3A89D143F5CAF357ECCE8B4A4F2BBD57816F98CA *)(&V_0), (bool)L_67, /*hidden argument*/NULL);
		// break;
		goto IL_042c;
	}

IL_02cd:
	{
		// instance.shapeType = reader.Read<UnityEngine.ParticleSystemShapeType>();
		ES3Reader_t2780AF8AA61DA2A817115CEF8612AC0E494D03C9 * L_68 = ___reader0;
		NullCheck((ES3Reader_t2780AF8AA61DA2A817115CEF8612AC0E494D03C9 *)L_68);
		int32_t L_69;
		L_69 = GenericVirtFuncInvoker0< int32_t >::Invoke(ES3Reader_Read_TisParticleSystemShapeType_t5B09F3A5A637F57DB1B2A6518E214AA2AA53D70C_mAE53212CB1FDDA51CF8CD0D39FCD446087DACA48_RuntimeMethod_var, (ES3Reader_t2780AF8AA61DA2A817115CEF8612AC0E494D03C9 *)L_68);
		ShapeModule_set_shapeType_mB772084527742749EB6AD690BAE47215FC71040D((ShapeModule_t3A89D143F5CAF357ECCE8B4A4F2BBD57816F98CA *)(ShapeModule_t3A89D143F5CAF357ECCE8B4A4F2BBD57816F98CA *)(&V_0), (int32_t)L_69, /*hidden argument*/NULL);
		// break;
		goto IL_042c;
	}

IL_02df:
	{
		// instance.randomDirectionAmount = reader.Read<System.Single>(ES3Type_float.Instance);
		ES3Reader_t2780AF8AA61DA2A817115CEF8612AC0E494D03C9 * L_70 = ___reader0;
		IL2CPP_RUNTIME_CLASS_INIT(ES3Type_float_tF86B773C86731BD9AD79448B860BBB178FE77644_il2cpp_TypeInfo_var);
		ES3Type_t8FBECB7AE75168648B9524E0C2A38DAD4555421D * L_71 = ((ES3Type_float_tF86B773C86731BD9AD79448B860BBB178FE77644_StaticFields*)il2cpp_codegen_static_fields_for(ES3Type_float_tF86B773C86731BD9AD79448B860BBB178FE77644_il2cpp_TypeInfo_var))->get_Instance_12();
		NullCheck((ES3Reader_t2780AF8AA61DA2A817115CEF8612AC0E494D03C9 *)L_70);
		float L_72;
		L_72 = GenericVirtFuncInvoker1< float, ES3Type_t8FBECB7AE75168648B9524E0C2A38DAD4555421D * >::Invoke(ES3Reader_Read_TisSingle_tE07797BA3C98D4CA9B5A19413C19A76688AB899E_m4A0416374498BDA042B8EB21E49B72326D6CE5F4_RuntimeMethod_var, (ES3Reader_t2780AF8AA61DA2A817115CEF8612AC0E494D03C9 *)L_70, (ES3Type_t8FBECB7AE75168648B9524E0C2A38DAD4555421D *)L_71);
		ShapeModule_set_randomDirectionAmount_m4E1BB67600D57383945F75F5A179EEEC01A76885((ShapeModule_t3A89D143F5CAF357ECCE8B4A4F2BBD57816F98CA *)(ShapeModule_t3A89D143F5CAF357ECCE8B4A4F2BBD57816F98CA *)(&V_0), (float)L_72, /*hidden argument*/NULL);
		// break;
		goto IL_042c;
	}

IL_02f6:
	{
		// instance.sphericalDirectionAmount = reader.Read<System.Single>(ES3Type_float.Instance);
		ES3Reader_t2780AF8AA61DA2A817115CEF8612AC0E494D03C9 * L_73 = ___reader0;
		IL2CPP_RUNTIME_CLASS_INIT(ES3Type_float_tF86B773C86731BD9AD79448B860BBB178FE77644_il2cpp_TypeInfo_var);
		ES3Type_t8FBECB7AE75168648B9524E0C2A38DAD4555421D * L_74 = ((ES3Type_float_tF86B773C86731BD9AD79448B860BBB178FE77644_StaticFields*)il2cpp_codegen_static_fields_for(ES3Type_float_tF86B773C86731BD9AD79448B860BBB178FE77644_il2cpp_TypeInfo_var))->get_Instance_12();
		NullCheck((ES3Reader_t2780AF8AA61DA2A817115CEF8612AC0E494D03C9 *)L_73);
		float L_75;
		L_75 = GenericVirtFuncInvoker1< float, ES3Type_t8FBECB7AE75168648B9524E0C2A38DAD4555421D * >::Invoke(ES3Reader_Read_TisSingle_tE07797BA3C98D4CA9B5A19413C19A76688AB899E_m4A0416374498BDA042B8EB21E49B72326D6CE5F4_RuntimeMethod_var, (ES3Reader_t2780AF8AA61DA2A817115CEF8612AC0E494D03C9 *)L_73, (ES3Type_t8FBECB7AE75168648B9524E0C2A38DAD4555421D *)L_74);
		ShapeModule_set_sphericalDirectionAmount_m02A9FBFF18AF24B821801DF5D833CA20A569F62B((ShapeModule_t3A89D143F5CAF357ECCE8B4A4F2BBD57816F98CA *)(ShapeModule_t3A89D143F5CAF357ECCE8B4A4F2BBD57816F98CA *)(&V_0), (float)L_75, /*hidden argument*/NULL);
		// break;
		goto IL_042c;
	}

IL_030d:
	{
		// instance.alignToDirection = reader.Read<System.Boolean>(ES3Type_bool.Instance);
		ES3Reader_t2780AF8AA61DA2A817115CEF8612AC0E494D03C9 * L_76 = ___reader0;
		IL2CPP_RUNTIME_CLASS_INIT(ES3Type_bool_t8F309F7B9CC735FF1DEE68081B6E3CAB367745F4_il2cpp_TypeInfo_var);
		ES3Type_t8FBECB7AE75168648B9524E0C2A38DAD4555421D * L_77 = ((ES3Type_bool_t8F309F7B9CC735FF1DEE68081B6E3CAB367745F4_StaticFields*)il2cpp_codegen_static_fields_for(ES3Type_bool_t8F309F7B9CC735FF1DEE68081B6E3CAB367745F4_il2cpp_TypeInfo_var))->get_Instance_12();
		NullCheck((ES3Reader_t2780AF8AA61DA2A817115CEF8612AC0E494D03C9 *)L_76);
		bool L_78;
		L_78 = GenericVirtFuncInvoker1< bool, ES3Type_t8FBECB7AE75168648B9524E0C2A38DAD4555421D * >::Invoke(ES3Reader_Read_TisBoolean_t07D1E3F34E4813023D64F584DFF7B34C9D922F37_mC6D1B158268FF9B97822FF9F5B37FB1723FEDA22_RuntimeMethod_var, (ES3Reader_t2780AF8AA61DA2A817115CEF8612AC0E494D03C9 *)L_76, (ES3Type_t8FBECB7AE75168648B9524E0C2A38DAD4555421D *)L_77);
		ShapeModule_set_alignToDirection_m396A57DCAD5F194E4DDDA0DF9C35E5508E3641BE((ShapeModule_t3A89D143F5CAF357ECCE8B4A4F2BBD57816F98CA *)(ShapeModule_t3A89D143F5CAF357ECCE8B4A4F2BBD57816F98CA *)(&V_0), (bool)L_78, /*hidden argument*/NULL);
		// break;
		goto IL_042c;
	}

IL_0324:
	{
		// instance.radius = reader.Read<System.Single>(ES3Type_float.Instance);
		ES3Reader_t2780AF8AA61DA2A817115CEF8612AC0E494D03C9 * L_79 = ___reader0;
		IL2CPP_RUNTIME_CLASS_INIT(ES3Type_float_tF86B773C86731BD9AD79448B860BBB178FE77644_il2cpp_TypeInfo_var);
		ES3Type_t8FBECB7AE75168648B9524E0C2A38DAD4555421D * L_80 = ((ES3Type_float_tF86B773C86731BD9AD79448B860BBB178FE77644_StaticFields*)il2cpp_codegen_static_fields_for(ES3Type_float_tF86B773C86731BD9AD79448B860BBB178FE77644_il2cpp_TypeInfo_var))->get_Instance_12();
		NullCheck((ES3Reader_t2780AF8AA61DA2A817115CEF8612AC0E494D03C9 *)L_79);
		float L_81;
		L_81 = GenericVirtFuncInvoker1< float, ES3Type_t8FBECB7AE75168648B9524E0C2A38DAD4555421D * >::Invoke(ES3Reader_Read_TisSingle_tE07797BA3C98D4CA9B5A19413C19A76688AB899E_m4A0416374498BDA042B8EB21E49B72326D6CE5F4_RuntimeMethod_var, (ES3Reader_t2780AF8AA61DA2A817115CEF8612AC0E494D03C9 *)L_79, (ES3Type_t8FBECB7AE75168648B9524E0C2A38DAD4555421D *)L_80);
		ShapeModule_set_radius_mFC12B15750268316924771461C09B1A311A16DEA((ShapeModule_t3A89D143F5CAF357ECCE8B4A4F2BBD57816F98CA *)(ShapeModule_t3A89D143F5CAF357ECCE8B4A4F2BBD57816F98CA *)(&V_0), (float)L_81, /*hidden argument*/NULL);
		// break;
		goto IL_042c;
	}

IL_033b:
	{
		// instance.angle = reader.Read<System.Single>(ES3Type_float.Instance);
		ES3Reader_t2780AF8AA61DA2A817115CEF8612AC0E494D03C9 * L_82 = ___reader0;
		IL2CPP_RUNTIME_CLASS_INIT(ES3Type_float_tF86B773C86731BD9AD79448B860BBB178FE77644_il2cpp_TypeInfo_var);
		ES3Type_t8FBECB7AE75168648B9524E0C2A38DAD4555421D * L_83 = ((ES3Type_float_tF86B773C86731BD9AD79448B860BBB178FE77644_StaticFields*)il2cpp_codegen_static_fields_for(ES3Type_float_tF86B773C86731BD9AD79448B860BBB178FE77644_il2cpp_TypeInfo_var))->get_Instance_12();
		NullCheck((ES3Reader_t2780AF8AA61DA2A817115CEF8612AC0E494D03C9 *)L_82);
		float L_84;
		L_84 = GenericVirtFuncInvoker1< float, ES3Type_t8FBECB7AE75168648B9524E0C2A38DAD4555421D * >::Invoke(ES3Reader_Read_TisSingle_tE07797BA3C98D4CA9B5A19413C19A76688AB899E_m4A0416374498BDA042B8EB21E49B72326D6CE5F4_RuntimeMethod_var, (ES3Reader_t2780AF8AA61DA2A817115CEF8612AC0E494D03C9 *)L_82, (ES3Type_t8FBECB7AE75168648B9524E0C2A38DAD4555421D *)L_83);
		ShapeModule_set_angle_m20629BB5FE89F2040960548B45F6EC801B1DB8AA((ShapeModule_t3A89D143F5CAF357ECCE8B4A4F2BBD57816F98CA *)(ShapeModule_t3A89D143F5CAF357ECCE8B4A4F2BBD57816F98CA *)(&V_0), (float)L_84, /*hidden argument*/NULL);
		// break;
		goto IL_042c;
	}

IL_0352:
	{
		// instance.length = reader.Read<System.Single>(ES3Type_float.Instance);
		ES3Reader_t2780AF8AA61DA2A817115CEF8612AC0E494D03C9 * L_85 = ___reader0;
		IL2CPP_RUNTIME_CLASS_INIT(ES3Type_float_tF86B773C86731BD9AD79448B860BBB178FE77644_il2cpp_TypeInfo_var);
		ES3Type_t8FBECB7AE75168648B9524E0C2A38DAD4555421D * L_86 = ((ES3Type_float_tF86B773C86731BD9AD79448B860BBB178FE77644_StaticFields*)il2cpp_codegen_static_fields_for(ES3Type_float_tF86B773C86731BD9AD79448B860BBB178FE77644_il2cpp_TypeInfo_var))->get_Instance_12();
		NullCheck((ES3Reader_t2780AF8AA61DA2A817115CEF8612AC0E494D03C9 *)L_85);
		float L_87;
		L_87 = GenericVirtFuncInvoker1< float, ES3Type_t8FBECB7AE75168648B9524E0C2A38DAD4555421D * >::Invoke(ES3Reader_Read_TisSingle_tE07797BA3C98D4CA9B5A19413C19A76688AB899E_m4A0416374498BDA042B8EB21E49B72326D6CE5F4_RuntimeMethod_var, (ES3Reader_t2780AF8AA61DA2A817115CEF8612AC0E494D03C9 *)L_85, (ES3Type_t8FBECB7AE75168648B9524E0C2A38DAD4555421D *)L_86);
		ShapeModule_set_length_m744975258664B53F38A8B8BE38A86A0FFDD85BC7((ShapeModule_t3A89D143F5CAF357ECCE8B4A4F2BBD57816F98CA *)(ShapeModule_t3A89D143F5CAF357ECCE8B4A4F2BBD57816F98CA *)(&V_0), (float)L_87, /*hidden argument*/NULL);
		// break;
		goto IL_042c;
	}

IL_0369:
	{
		// instance.scale = reader.Read<UnityEngine.Vector3>(ES3Type_Vector3.Instance);
		ES3Reader_t2780AF8AA61DA2A817115CEF8612AC0E494D03C9 * L_88 = ___reader0;
		IL2CPP_RUNTIME_CLASS_INIT(ES3Type_Vector3_tA9144E81A20D2F28726F02DE1AE6CD3F9C12B54F_il2cpp_TypeInfo_var);
		ES3Type_t8FBECB7AE75168648B9524E0C2A38DAD4555421D * L_89 = ((ES3Type_Vector3_tA9144E81A20D2F28726F02DE1AE6CD3F9C12B54F_StaticFields*)il2cpp_codegen_static_fields_for(ES3Type_Vector3_tA9144E81A20D2F28726F02DE1AE6CD3F9C12B54F_il2cpp_TypeInfo_var))->get_Instance_12();
		NullCheck((ES3Reader_t2780AF8AA61DA2A817115CEF8612AC0E494D03C9 *)L_88);
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_90;
		L_90 = GenericVirtFuncInvoker1< Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E , ES3Type_t8FBECB7AE75168648B9524E0C2A38DAD4555421D * >::Invoke(ES3Reader_Read_TisVector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E_mBA4CD9D0F45E78BA43FE2DB8EC33CC3A5433DE15_RuntimeMethod_var, (ES3Reader_t2780AF8AA61DA2A817115CEF8612AC0E494D03C9 *)L_88, (ES3Type_t8FBECB7AE75168648B9524E0C2A38DAD4555421D *)L_89);
		ShapeModule_set_scale_m2951583898F18878E6F238100045072F44AD9158((ShapeModule_t3A89D143F5CAF357ECCE8B4A4F2BBD57816F98CA *)(ShapeModule_t3A89D143F5CAF357ECCE8B4A4F2BBD57816F98CA *)(&V_0), (Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E )L_90, /*hidden argument*/NULL);
		// break;
		goto IL_042c;
	}

IL_0380:
	{
		// instance.meshShapeType = reader.Read<UnityEngine.ParticleSystemMeshShapeType>();
		ES3Reader_t2780AF8AA61DA2A817115CEF8612AC0E494D03C9 * L_91 = ___reader0;
		NullCheck((ES3Reader_t2780AF8AA61DA2A817115CEF8612AC0E494D03C9 *)L_91);
		int32_t L_92;
		L_92 = GenericVirtFuncInvoker0< int32_t >::Invoke(ES3Reader_Read_TisParticleSystemMeshShapeType_t7C9518403F30CC7AF7F9124FD61EC1187B42EFD2_mF1A19C0F8BBA6E44737F158F3BE4CC478F623F10_RuntimeMethod_var, (ES3Reader_t2780AF8AA61DA2A817115CEF8612AC0E494D03C9 *)L_91);
		ShapeModule_set_meshShapeType_m5DAD94B71F2110F45E454C30DE052153129891C2((ShapeModule_t3A89D143F5CAF357ECCE8B4A4F2BBD57816F98CA *)(ShapeModule_t3A89D143F5CAF357ECCE8B4A4F2BBD57816F98CA *)(&V_0), (int32_t)L_92, /*hidden argument*/NULL);
		// break;
		goto IL_042c;
	}

IL_0392:
	{
		// instance.mesh = reader.Read<UnityEngine.Mesh>();
		ES3Reader_t2780AF8AA61DA2A817115CEF8612AC0E494D03C9 * L_93 = ___reader0;
		NullCheck((ES3Reader_t2780AF8AA61DA2A817115CEF8612AC0E494D03C9 *)L_93);
		Mesh_t2F5992DBA650D5862B43D3823ACD997132A57DA6 * L_94;
		L_94 = GenericVirtFuncInvoker0< Mesh_t2F5992DBA650D5862B43D3823ACD997132A57DA6 * >::Invoke(ES3Reader_Read_TisMesh_t2F5992DBA650D5862B43D3823ACD997132A57DA6_m65DF5BA41642A39B77979CC49472E4DE7A1660F9_RuntimeMethod_var, (ES3Reader_t2780AF8AA61DA2A817115CEF8612AC0E494D03C9 *)L_93);
		ShapeModule_set_mesh_mD3E276A9E45442E75AD8A9AA4BD88C9112BD77CA((ShapeModule_t3A89D143F5CAF357ECCE8B4A4F2BBD57816F98CA *)(ShapeModule_t3A89D143F5CAF357ECCE8B4A4F2BBD57816F98CA *)(&V_0), (Mesh_t2F5992DBA650D5862B43D3823ACD997132A57DA6 *)L_94, /*hidden argument*/NULL);
		// break;
		goto IL_042c;
	}

IL_03a4:
	{
		// instance.meshRenderer = reader.Read<UnityEngine.MeshRenderer>();
		ES3Reader_t2780AF8AA61DA2A817115CEF8612AC0E494D03C9 * L_95 = ___reader0;
		NullCheck((ES3Reader_t2780AF8AA61DA2A817115CEF8612AC0E494D03C9 *)L_95);
		MeshRenderer_tCD983A2F635E12BCB0BAA2E635D96A318757908B * L_96;
		L_96 = GenericVirtFuncInvoker0< MeshRenderer_tCD983A2F635E12BCB0BAA2E635D96A318757908B * >::Invoke(ES3Reader_Read_TisMeshRenderer_tCD983A2F635E12BCB0BAA2E635D96A318757908B_m773CE5481730EBCC6A377F918946EB11B304050A_RuntimeMethod_var, (ES3Reader_t2780AF8AA61DA2A817115CEF8612AC0E494D03C9 *)L_95);
		ShapeModule_set_meshRenderer_m334D69AC8C29F5E393732D62BBB3645296614059((ShapeModule_t3A89D143F5CAF357ECCE8B4A4F2BBD57816F98CA *)(ShapeModule_t3A89D143F5CAF357ECCE8B4A4F2BBD57816F98CA *)(&V_0), (MeshRenderer_tCD983A2F635E12BCB0BAA2E635D96A318757908B *)L_96, /*hidden argument*/NULL);
		// break;
		goto IL_042c;
	}

IL_03b3:
	{
		// instance.skinnedMeshRenderer = reader.Read<UnityEngine.SkinnedMeshRenderer>();
		ES3Reader_t2780AF8AA61DA2A817115CEF8612AC0E494D03C9 * L_97 = ___reader0;
		NullCheck((ES3Reader_t2780AF8AA61DA2A817115CEF8612AC0E494D03C9 *)L_97);
		SkinnedMeshRenderer_t126F4D6010E0F4B2685A7817B0A9171805D8F496 * L_98;
		L_98 = GenericVirtFuncInvoker0< SkinnedMeshRenderer_t126F4D6010E0F4B2685A7817B0A9171805D8F496 * >::Invoke(ES3Reader_Read_TisSkinnedMeshRenderer_t126F4D6010E0F4B2685A7817B0A9171805D8F496_m23D6569D5CE7B3E1C67BDB470CDEDEF25A835F25_RuntimeMethod_var, (ES3Reader_t2780AF8AA61DA2A817115CEF8612AC0E494D03C9 *)L_97);
		ShapeModule_set_skinnedMeshRenderer_m9DEF9CD332D3F10BE7D99EFECC0971FB5AE83F56((ShapeModule_t3A89D143F5CAF357ECCE8B4A4F2BBD57816F98CA *)(ShapeModule_t3A89D143F5CAF357ECCE8B4A4F2BBD57816F98CA *)(&V_0), (SkinnedMeshRenderer_t126F4D6010E0F4B2685A7817B0A9171805D8F496 *)L_98, /*hidden argument*/NULL);
		// break;
		goto IL_042c;
	}

IL_03c2:
	{
		// instance.useMeshMaterialIndex = reader.Read<System.Boolean>(ES3Type_bool.Instance);
		ES3Reader_t2780AF8AA61DA2A817115CEF8612AC0E494D03C9 * L_99 = ___reader0;
		IL2CPP_RUNTIME_CLASS_INIT(ES3Type_bool_t8F309F7B9CC735FF1DEE68081B6E3CAB367745F4_il2cpp_TypeInfo_var);
		ES3Type_t8FBECB7AE75168648B9524E0C2A38DAD4555421D * L_100 = ((ES3Type_bool_t8F309F7B9CC735FF1DEE68081B6E3CAB367745F4_StaticFields*)il2cpp_codegen_static_fields_for(ES3Type_bool_t8F309F7B9CC735FF1DEE68081B6E3CAB367745F4_il2cpp_TypeInfo_var))->get_Instance_12();
		NullCheck((ES3Reader_t2780AF8AA61DA2A817115CEF8612AC0E494D03C9 *)L_99);
		bool L_101;
		L_101 = GenericVirtFuncInvoker1< bool, ES3Type_t8FBECB7AE75168648B9524E0C2A38DAD4555421D * >::Invoke(ES3Reader_Read_TisBoolean_t07D1E3F34E4813023D64F584DFF7B34C9D922F37_mC6D1B158268FF9B97822FF9F5B37FB1723FEDA22_RuntimeMethod_var, (ES3Reader_t2780AF8AA61DA2A817115CEF8612AC0E494D03C9 *)L_99, (ES3Type_t8FBECB7AE75168648B9524E0C2A38DAD4555421D *)L_100);
		ShapeModule_set_useMeshMaterialIndex_m6130573C0966ED3B5C590665747305BCEFD3F901((ShapeModule_t3A89D143F5CAF357ECCE8B4A4F2BBD57816F98CA *)(ShapeModule_t3A89D143F5CAF357ECCE8B4A4F2BBD57816F98CA *)(&V_0), (bool)L_101, /*hidden argument*/NULL);
		// break;
		goto IL_042c;
	}

IL_03d6:
	{
		// instance.meshMaterialIndex = reader.Read<System.Int32>(ES3Type_int.Instance);
		ES3Reader_t2780AF8AA61DA2A817115CEF8612AC0E494D03C9 * L_102 = ___reader0;
		IL2CPP_RUNTIME_CLASS_INIT(ES3Type_int_tF64C15D40AD0CC7C15BCD1CEC3C5C6BF837BD167_il2cpp_TypeInfo_var);
		ES3Type_t8FBECB7AE75168648B9524E0C2A38DAD4555421D * L_103 = ((ES3Type_int_tF64C15D40AD0CC7C15BCD1CEC3C5C6BF837BD167_StaticFields*)il2cpp_codegen_static_fields_for(ES3Type_int_tF64C15D40AD0CC7C15BCD1CEC3C5C6BF837BD167_il2cpp_TypeInfo_var))->get_Instance_12();
		NullCheck((ES3Reader_t2780AF8AA61DA2A817115CEF8612AC0E494D03C9 *)L_102);
		int32_t L_104;
		L_104 = GenericVirtFuncInvoker1< int32_t, ES3Type_t8FBECB7AE75168648B9524E0C2A38DAD4555421D * >::Invoke(ES3Reader_Read_TisInt32_tFDE5F8CD43D10453F6A2E0C77FE48C6CC7009046_m2B74AA6627F5B1D21171D56C42F71DE5A7C1B4A6_RuntimeMethod_var, (ES3Reader_t2780AF8AA61DA2A817115CEF8612AC0E494D03C9 *)L_102, (ES3Type_t8FBECB7AE75168648B9524E0C2A38DAD4555421D *)L_103);
		ShapeModule_set_meshMaterialIndex_m1205DDEB353204D5941654FB79164AD5BAF0A59C((ShapeModule_t3A89D143F5CAF357ECCE8B4A4F2BBD57816F98CA *)(ShapeModule_t3A89D143F5CAF357ECCE8B4A4F2BBD57816F98CA *)(&V_0), (int32_t)L_104, /*hidden argument*/NULL);
		// break;
		goto IL_042c;
	}

IL_03ea:
	{
		// instance.useMeshColors = reader.Read<System.Boolean>(ES3Type_bool.Instance);
		ES3Reader_t2780AF8AA61DA2A817115CEF8612AC0E494D03C9 * L_105 = ___reader0;
		IL2CPP_RUNTIME_CLASS_INIT(ES3Type_bool_t8F309F7B9CC735FF1DEE68081B6E3CAB367745F4_il2cpp_TypeInfo_var);
		ES3Type_t8FBECB7AE75168648B9524E0C2A38DAD4555421D * L_106 = ((ES3Type_bool_t8F309F7B9CC735FF1DEE68081B6E3CAB367745F4_StaticFields*)il2cpp_codegen_static_fields_for(ES3Type_bool_t8F309F7B9CC735FF1DEE68081B6E3CAB367745F4_il2cpp_TypeInfo_var))->get_Instance_12();
		NullCheck((ES3Reader_t2780AF8AA61DA2A817115CEF8612AC0E494D03C9 *)L_105);
		bool L_107;
		L_107 = GenericVirtFuncInvoker1< bool, ES3Type_t8FBECB7AE75168648B9524E0C2A38DAD4555421D * >::Invoke(ES3Reader_Read_TisBoolean_t07D1E3F34E4813023D64F584DFF7B34C9D922F37_mC6D1B158268FF9B97822FF9F5B37FB1723FEDA22_RuntimeMethod_var, (ES3Reader_t2780AF8AA61DA2A817115CEF8612AC0E494D03C9 *)L_105, (ES3Type_t8FBECB7AE75168648B9524E0C2A38DAD4555421D *)L_106);
		ShapeModule_set_useMeshColors_m071D000F330805B1EBCF09B40AC4EB9942EB9F57((ShapeModule_t3A89D143F5CAF357ECCE8B4A4F2BBD57816F98CA *)(ShapeModule_t3A89D143F5CAF357ECCE8B4A4F2BBD57816F98CA *)(&V_0), (bool)L_107, /*hidden argument*/NULL);
		// break;
		goto IL_042c;
	}

IL_03fe:
	{
		// instance.normalOffset = reader.Read<System.Single>(ES3Type_float.Instance);
		ES3Reader_t2780AF8AA61DA2A817115CEF8612AC0E494D03C9 * L_108 = ___reader0;
		IL2CPP_RUNTIME_CLASS_INIT(ES3Type_float_tF86B773C86731BD9AD79448B860BBB178FE77644_il2cpp_TypeInfo_var);
		ES3Type_t8FBECB7AE75168648B9524E0C2A38DAD4555421D * L_109 = ((ES3Type_float_tF86B773C86731BD9AD79448B860BBB178FE77644_StaticFields*)il2cpp_codegen_static_fields_for(ES3Type_float_tF86B773C86731BD9AD79448B860BBB178FE77644_il2cpp_TypeInfo_var))->get_Instance_12();
		NullCheck((ES3Reader_t2780AF8AA61DA2A817115CEF8612AC0E494D03C9 *)L_108);
		float L_110;
		L_110 = GenericVirtFuncInvoker1< float, ES3Type_t8FBECB7AE75168648B9524E0C2A38DAD4555421D * >::Invoke(ES3Reader_Read_TisSingle_tE07797BA3C98D4CA9B5A19413C19A76688AB899E_m4A0416374498BDA042B8EB21E49B72326D6CE5F4_RuntimeMethod_var, (ES3Reader_t2780AF8AA61DA2A817115CEF8612AC0E494D03C9 *)L_108, (ES3Type_t8FBECB7AE75168648B9524E0C2A38DAD4555421D *)L_109);
		ShapeModule_set_normalOffset_m81A315286BAA5F52AAED6B317734FB03B2DCE9FD((ShapeModule_t3A89D143F5CAF357ECCE8B4A4F2BBD57816F98CA *)(ShapeModule_t3A89D143F5CAF357ECCE8B4A4F2BBD57816F98CA *)(&V_0), (float)L_110, /*hidden argument*/NULL);
		// break;
		goto IL_042c;
	}

IL_0412:
	{
		// instance.arc = reader.Read<System.Single>(ES3Type_float.Instance);
		ES3Reader_t2780AF8AA61DA2A817115CEF8612AC0E494D03C9 * L_111 = ___reader0;
		IL2CPP_RUNTIME_CLASS_INIT(ES3Type_float_tF86B773C86731BD9AD79448B860BBB178FE77644_il2cpp_TypeInfo_var);
		ES3Type_t8FBECB7AE75168648B9524E0C2A38DAD4555421D * L_112 = ((ES3Type_float_tF86B773C86731BD9AD79448B860BBB178FE77644_StaticFields*)il2cpp_codegen_static_fields_for(ES3Type_float_tF86B773C86731BD9AD79448B860BBB178FE77644_il2cpp_TypeInfo_var))->get_Instance_12();
		NullCheck((ES3Reader_t2780AF8AA61DA2A817115CEF8612AC0E494D03C9 *)L_111);
		float L_113;
		L_113 = GenericVirtFuncInvoker1< float, ES3Type_t8FBECB7AE75168648B9524E0C2A38DAD4555421D * >::Invoke(ES3Reader_Read_TisSingle_tE07797BA3C98D4CA9B5A19413C19A76688AB899E_m4A0416374498BDA042B8EB21E49B72326D6CE5F4_RuntimeMethod_var, (ES3Reader_t2780AF8AA61DA2A817115CEF8612AC0E494D03C9 *)L_111, (ES3Type_t8FBECB7AE75168648B9524E0C2A38DAD4555421D *)L_112);
		ShapeModule_set_arc_m4A2578EBD4747DB3D9ED74AB53E488872CFA541F((ShapeModule_t3A89D143F5CAF357ECCE8B4A4F2BBD57816F98CA *)(ShapeModule_t3A89D143F5CAF357ECCE8B4A4F2BBD57816F98CA *)(&V_0), (float)L_113, /*hidden argument*/NULL);
		// break;
		goto IL_042c;
	}

IL_0426:
	{
		// reader.Skip();
		ES3Reader_t2780AF8AA61DA2A817115CEF8612AC0E494D03C9 * L_114 = ___reader0;
		NullCheck((ES3Reader_t2780AF8AA61DA2A817115CEF8612AC0E494D03C9 *)L_114);
		VirtActionInvoker0::Invoke(41 /* System.Void ES3Reader::Skip() */, (ES3Reader_t2780AF8AA61DA2A817115CEF8612AC0E494D03C9 *)L_114);
	}

IL_042c:
	{
		// while((propertyName = reader.ReadPropertyName()) != null)
		ES3Reader_t2780AF8AA61DA2A817115CEF8612AC0E494D03C9 * L_115 = ___reader0;
		NullCheck((ES3Reader_t2780AF8AA61DA2A817115CEF8612AC0E494D03C9 *)L_115);
		String_t* L_116;
		L_116 = VirtFuncInvoker0< String_t* >::Invoke(21 /* System.String ES3Reader::ReadPropertyName() */, (ES3Reader_t2780AF8AA61DA2A817115CEF8612AC0E494D03C9 *)L_115);
		String_t* L_117 = (String_t*)L_116;
		V_1 = (String_t*)L_117;
		if (L_117)
		{
			goto IL_000c;
		}
	}
	{
		// }
		return;
	}
}
// System.Void ES3Types.ES3Type_ShapeModule::ReadInto<UnityEngine.ParticleSystem/MainModule>(ES3Reader,System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ES3Type_ShapeModule_ReadInto_TisMainModule_t671F49558CB1A3CFAAD637A7927C076EC2E61F0B_m5B3142AFA0B24CF5FB41B234B3C81F93BFAEB41A_gshared (ES3Type_ShapeModule_t67010A74D4F69A245D5F06976239CAB4279B5377 * __this, ES3Reader_t2780AF8AA61DA2A817115CEF8612AC0E494D03C9 * ___reader0, RuntimeObject * ___obj1, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ES3Reader_Read_TisBoolean_t07D1E3F34E4813023D64F584DFF7B34C9D922F37_mC6D1B158268FF9B97822FF9F5B37FB1723FEDA22_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ES3Reader_Read_TisInt32_tFDE5F8CD43D10453F6A2E0C77FE48C6CC7009046_m2B74AA6627F5B1D21171D56C42F71DE5A7C1B4A6_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ES3Reader_Read_TisMeshRenderer_tCD983A2F635E12BCB0BAA2E635D96A318757908B_m773CE5481730EBCC6A377F918946EB11B304050A_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ES3Reader_Read_TisMesh_t2F5992DBA650D5862B43D3823ACD997132A57DA6_m65DF5BA41642A39B77979CC49472E4DE7A1660F9_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ES3Reader_Read_TisParticleSystemMeshShapeType_t7C9518403F30CC7AF7F9124FD61EC1187B42EFD2_mF1A19C0F8BBA6E44737F158F3BE4CC478F623F10_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ES3Reader_Read_TisParticleSystemShapeType_t5B09F3A5A637F57DB1B2A6518E214AA2AA53D70C_mAE53212CB1FDDA51CF8CD0D39FCD446087DACA48_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ES3Reader_Read_TisSingle_tE07797BA3C98D4CA9B5A19413C19A76688AB899E_m4A0416374498BDA042B8EB21E49B72326D6CE5F4_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ES3Reader_Read_TisSkinnedMeshRenderer_t126F4D6010E0F4B2685A7817B0A9171805D8F496_m23D6569D5CE7B3E1C67BDB470CDEDEF25A835F25_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ES3Reader_Read_TisVector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E_mBA4CD9D0F45E78BA43FE2DB8EC33CC3A5433DE15_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ES3Type_Vector3_tA9144E81A20D2F28726F02DE1AE6CD3F9C12B54F_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ES3Type_bool_t8F309F7B9CC735FF1DEE68081B6E3CAB367745F4_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ES3Type_float_tF86B773C86731BD9AD79448B860BBB178FE77644_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ES3Type_int_tF64C15D40AD0CC7C15BCD1CEC3C5C6BF837BD167_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ShapeModule_t3A89D143F5CAF357ECCE8B4A4F2BBD57816F98CA_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral01837E2252AC8026A5EA3567A663017A662FBB70);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral1228466552C1791B2019A329AFE94665D441168A);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral60E56797D122AE71D3774956F66C6EEB9EA22C05);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral6686C366F645244186604A3DA4B9A58012A85F1B);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral82BECCAD895076775062861CDB46AADEF913D969);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral8C9F18A4F030B96447955FBBA1A99FFC43B5D8E0);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral8E54BB51E569CB6A8D3C45D8AEF883A1559C1C0E);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral91811EE149061D28B38320E2430CE8888AD6398B);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralBD49F93A7BC78A69E385CEC0E78F434BD2845A17);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralCA1B66E295BD92E9FD3B6C708F09CA69A50BEFD1);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralE8744A8B8BD390EB66CA0CAE2376C973E6904FFB);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralEB0A157666700D8227FD4B66A26FDC02035E89BF);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralED1F119527A0BCA45125EF8E0F719985DA86C0E1);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralF66E9083C67855AB6EBB4B74342E385A72AACE32);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralF9BE17D634D1B07BCDCDA77A87710C946D81307B);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralF9D225733E1D10F9344C755C4A9C0870CD1DE97B);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralFA5EC7168E9633DAAEAA255ECB55030EA60F064F);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralFC341A1966AF28A9A7A26EDFB78ABBF7DE4D0E1F);
		s_Il2CppMethodInitialized = true;
	}
	ShapeModule_t3A89D143F5CAF357ECCE8B4A4F2BBD57816F98CA  V_0;
	memset((&V_0), 0, sizeof(V_0));
	String_t* V_1 = NULL;
	uint32_t V_2 = 0;
	{
		// var instance = (UnityEngine.ParticleSystem.ShapeModule)obj;
		RuntimeObject * L_0 = ___obj1;
		V_0 = (ShapeModule_t3A89D143F5CAF357ECCE8B4A4F2BBD57816F98CA )((*(ShapeModule_t3A89D143F5CAF357ECCE8B4A4F2BBD57816F98CA *)((ShapeModule_t3A89D143F5CAF357ECCE8B4A4F2BBD57816F98CA *)UnBox(L_0, ShapeModule_t3A89D143F5CAF357ECCE8B4A4F2BBD57816F98CA_il2cpp_TypeInfo_var))));
		goto IL_042c;
	}

IL_000c:
	{
		String_t* L_1 = V_1;
		if (!L_1)
		{
			goto IL_0426;
		}
	}
	{
		String_t* L_2 = V_1;
		uint32_t L_3;
		L_3 = U3CPrivateImplementationDetailsU3E_ComputeStringHash_m3ADC1F612F9EE3DD518E6F0023A0DE0EE2B120A7((String_t*)L_2, /*hidden argument*/NULL);
		V_2 = (uint32_t)L_3;
		uint32_t L_4 = V_2;
		if ((!(((uint32_t)L_4) <= ((uint32_t)((int32_t)-2104025999)))))
		{
			goto IL_00b3;
		}
	}
	{
		uint32_t L_5 = V_2;
		if ((!(((uint32_t)L_5) <= ((uint32_t)((int32_t)666576729)))))
		{
			goto IL_006a;
		}
	}
	{
		uint32_t L_6 = V_2;
		if ((!(((uint32_t)L_6) <= ((uint32_t)((int32_t)49525662)))))
		{
			goto IL_004f;
		}
	}
	{
		uint32_t L_7 = V_2;
		if ((((int32_t)L_7) == ((int32_t)((int32_t)24602224))))
		{
			goto IL_024d;
		}
	}
	{
		uint32_t L_8 = V_2;
		if ((((int32_t)L_8) == ((int32_t)((int32_t)49525662))))
		{
			goto IL_013c;
		}
	}
	{
		goto IL_0426;
	}

IL_004f:
	{
		uint32_t L_9 = V_2;
		if ((((int32_t)L_9) == ((int32_t)((int32_t)230313139))))
		{
			goto IL_01a5;
		}
	}
	{
		uint32_t L_10 = V_2;
		if ((((int32_t)L_10) == ((int32_t)((int32_t)666576729))))
		{
			goto IL_01f9;
		}
	}
	{
		goto IL_0426;
	}

IL_006a:
	{
		uint32_t L_11 = V_2;
		if ((!(((uint32_t)L_11) <= ((uint32_t)((int32_t)955488309)))))
		{
			goto IL_008d;
		}
	}
	{
		uint32_t L_12 = V_2;
		if ((((int32_t)L_12) == ((int32_t)((int32_t)923624301))))
		{
			goto IL_0238;
		}
	}
	{
		uint32_t L_13 = V_2;
		if ((((int32_t)L_13) == ((int32_t)((int32_t)955488309))))
		{
			goto IL_028c;
		}
	}
	{
		goto IL_0426;
	}

IL_008d:
	{
		uint32_t L_14 = V_2;
		if ((((int32_t)L_14) == ((int32_t)((int32_t)980363995))))
		{
			goto IL_02a1;
		}
	}
	{
		uint32_t L_15 = V_2;
		if ((((int32_t)L_15) == ((int32_t)((int32_t)985988853))))
		{
			goto IL_017b;
		}
	}
	{
		uint32_t L_16 = V_2;
		if ((((int32_t)L_16) == ((int32_t)((int32_t)-2104025999))))
		{
			goto IL_01e4;
		}
	}
	{
		goto IL_0426;
	}

IL_00b3:
	{
		uint32_t L_17 = V_2;
		if ((!(((uint32_t)L_17) <= ((uint32_t)((int32_t)-1473810612)))))
		{
			goto IL_00f6;
		}
	}
	{
		uint32_t L_18 = V_2;
		if ((!(((uint32_t)L_18) <= ((uint32_t)((int32_t)-1726928010)))))
		{
			goto IL_00db;
		}
	}
	{
		uint32_t L_19 = V_2;
		if ((((int32_t)L_19) == ((int32_t)((int32_t)-2083506667))))
		{
			goto IL_01cf;
		}
	}
	{
		uint32_t L_20 = V_2;
		if ((((int32_t)L_20) == ((int32_t)((int32_t)-1726928010))))
		{
			goto IL_0151;
		}
	}
	{
		goto IL_0426;
	}

IL_00db:
	{
		uint32_t L_21 = V_2;
		if ((((int32_t)L_21) == ((int32_t)((int32_t)-1593786692))))
		{
			goto IL_020e;
		}
	}
	{
		uint32_t L_22 = V_2;
		if ((((int32_t)L_22) == ((int32_t)((int32_t)-1473810612))))
		{
			goto IL_0190;
		}
	}
	{
		goto IL_0426;
	}

IL_00f6:
	{
		uint32_t L_23 = V_2;
		if ((!(((uint32_t)L_23) <= ((uint32_t)((int32_t)-1386986472)))))
		{
			goto IL_0116;
		}
	}
	{
		uint32_t L_24 = V_2;
		if ((((int32_t)L_24) == ((int32_t)((int32_t)-1412039661))))
		{
			goto IL_0166;
		}
	}
	{
		uint32_t L_25 = V_2;
		if ((((int32_t)L_25) == ((int32_t)((int32_t)-1386986472))))
		{
			goto IL_01ba;
		}
	}
	{
		goto IL_0426;
	}

IL_0116:
	{
		uint32_t L_26 = V_2;
		if ((((int32_t)L_26) == ((int32_t)((int32_t)-584064197))))
		{
			goto IL_0223;
		}
	}
	{
		uint32_t L_27 = V_2;
		if ((((int32_t)L_27) == ((int32_t)((int32_t)-473474755))))
		{
			goto IL_0277;
		}
	}
	{
		uint32_t L_28 = V_2;
		if ((((int32_t)L_28) == ((int32_t)((int32_t)-365686981))))
		{
			goto IL_0262;
		}
	}
	{
		goto IL_0426;
	}

IL_013c:
	{
		String_t* L_29 = V_1;
		bool L_30;
		L_30 = String_op_Equality_m50B3548E4AC232558190B0052877B290AA1D436A((String_t*)L_29, (String_t*)_stringLiteralF9D225733E1D10F9344C755C4A9C0870CD1DE97B, /*hidden argument*/NULL);
		if (L_30)
		{
			goto IL_02b6;
		}
	}
	{
		goto IL_0426;
	}

IL_0151:
	{
		String_t* L_31 = V_1;
		bool L_32;
		L_32 = String_op_Equality_m50B3548E4AC232558190B0052877B290AA1D436A((String_t*)L_31, (String_t*)_stringLiteral82BECCAD895076775062861CDB46AADEF913D969, /*hidden argument*/NULL);
		if (L_32)
		{
			goto IL_02cd;
		}
	}
	{
		goto IL_0426;
	}

IL_0166:
	{
		String_t* L_33 = V_1;
		bool L_34;
		L_34 = String_op_Equality_m50B3548E4AC232558190B0052877B290AA1D436A((String_t*)L_33, (String_t*)_stringLiteral1228466552C1791B2019A329AFE94665D441168A, /*hidden argument*/NULL);
		if (L_34)
		{
			goto IL_02df;
		}
	}
	{
		goto IL_0426;
	}

IL_017b:
	{
		String_t* L_35 = V_1;
		bool L_36;
		L_36 = String_op_Equality_m50B3548E4AC232558190B0052877B290AA1D436A((String_t*)L_35, (String_t*)_stringLiteralBD49F93A7BC78A69E385CEC0E78F434BD2845A17, /*hidden argument*/NULL);
		if (L_36)
		{
			goto IL_02f6;
		}
	}
	{
		goto IL_0426;
	}

IL_0190:
	{
		String_t* L_37 = V_1;
		bool L_38;
		L_38 = String_op_Equality_m50B3548E4AC232558190B0052877B290AA1D436A((String_t*)L_37, (String_t*)_stringLiteralED1F119527A0BCA45125EF8E0F719985DA86C0E1, /*hidden argument*/NULL);
		if (L_38)
		{
			goto IL_030d;
		}
	}
	{
		goto IL_0426;
	}

IL_01a5:
	{
		String_t* L_39 = V_1;
		bool L_40;
		L_40 = String_op_Equality_m50B3548E4AC232558190B0052877B290AA1D436A((String_t*)L_39, (String_t*)_stringLiteral8C9F18A4F030B96447955FBBA1A99FFC43B5D8E0, /*hidden argument*/NULL);
		if (L_40)
		{
			goto IL_0324;
		}
	}
	{
		goto IL_0426;
	}

IL_01ba:
	{
		String_t* L_41 = V_1;
		bool L_42;
		L_42 = String_op_Equality_m50B3548E4AC232558190B0052877B290AA1D436A((String_t*)L_41, (String_t*)_stringLiteralFC341A1966AF28A9A7A26EDFB78ABBF7DE4D0E1F, /*hidden argument*/NULL);
		if (L_42)
		{
			goto IL_033b;
		}
	}
	{
		goto IL_0426;
	}

IL_01cf:
	{
		String_t* L_43 = V_1;
		bool L_44;
		L_44 = String_op_Equality_m50B3548E4AC232558190B0052877B290AA1D436A((String_t*)L_43, (String_t*)_stringLiteralE8744A8B8BD390EB66CA0CAE2376C973E6904FFB, /*hidden argument*/NULL);
		if (L_44)
		{
			goto IL_0352;
		}
	}
	{
		goto IL_0426;
	}

IL_01e4:
	{
		String_t* L_45 = V_1;
		bool L_46;
		L_46 = String_op_Equality_m50B3548E4AC232558190B0052877B290AA1D436A((String_t*)L_45, (String_t*)_stringLiteralF9BE17D634D1B07BCDCDA77A87710C946D81307B, /*hidden argument*/NULL);
		if (L_46)
		{
			goto IL_0369;
		}
	}
	{
		goto IL_0426;
	}

IL_01f9:
	{
		String_t* L_47 = V_1;
		bool L_48;
		L_48 = String_op_Equality_m50B3548E4AC232558190B0052877B290AA1D436A((String_t*)L_47, (String_t*)_stringLiteralFA5EC7168E9633DAAEAA255ECB55030EA60F064F, /*hidden argument*/NULL);
		if (L_48)
		{
			goto IL_0380;
		}
	}
	{
		goto IL_0426;
	}

IL_020e:
	{
		String_t* L_49 = V_1;
		bool L_50;
		L_50 = String_op_Equality_m50B3548E4AC232558190B0052877B290AA1D436A((String_t*)L_49, (String_t*)_stringLiteralEB0A157666700D8227FD4B66A26FDC02035E89BF, /*hidden argument*/NULL);
		if (L_50)
		{
			goto IL_0392;
		}
	}
	{
		goto IL_0426;
	}

IL_0223:
	{
		String_t* L_51 = V_1;
		bool L_52;
		L_52 = String_op_Equality_m50B3548E4AC232558190B0052877B290AA1D436A((String_t*)L_51, (String_t*)_stringLiteral8E54BB51E569CB6A8D3C45D8AEF883A1559C1C0E, /*hidden argument*/NULL);
		if (L_52)
		{
			goto IL_03a4;
		}
	}
	{
		goto IL_0426;
	}

IL_0238:
	{
		String_t* L_53 = V_1;
		bool L_54;
		L_54 = String_op_Equality_m50B3548E4AC232558190B0052877B290AA1D436A((String_t*)L_53, (String_t*)_stringLiteral60E56797D122AE71D3774956F66C6EEB9EA22C05, /*hidden argument*/NULL);
		if (L_54)
		{
			goto IL_03b3;
		}
	}
	{
		goto IL_0426;
	}

IL_024d:
	{
		String_t* L_55 = V_1;
		bool L_56;
		L_56 = String_op_Equality_m50B3548E4AC232558190B0052877B290AA1D436A((String_t*)L_55, (String_t*)_stringLiteral01837E2252AC8026A5EA3567A663017A662FBB70, /*hidden argument*/NULL);
		if (L_56)
		{
			goto IL_03c2;
		}
	}
	{
		goto IL_0426;
	}

IL_0262:
	{
		String_t* L_57 = V_1;
		bool L_58;
		L_58 = String_op_Equality_m50B3548E4AC232558190B0052877B290AA1D436A((String_t*)L_57, (String_t*)_stringLiteralF66E9083C67855AB6EBB4B74342E385A72AACE32, /*hidden argument*/NULL);
		if (L_58)
		{
			goto IL_03d6;
		}
	}
	{
		goto IL_0426;
	}

IL_0277:
	{
		String_t* L_59 = V_1;
		bool L_60;
		L_60 = String_op_Equality_m50B3548E4AC232558190B0052877B290AA1D436A((String_t*)L_59, (String_t*)_stringLiteral91811EE149061D28B38320E2430CE8888AD6398B, /*hidden argument*/NULL);
		if (L_60)
		{
			goto IL_03ea;
		}
	}
	{
		goto IL_0426;
	}

IL_028c:
	{
		String_t* L_61 = V_1;
		bool L_62;
		L_62 = String_op_Equality_m50B3548E4AC232558190B0052877B290AA1D436A((String_t*)L_61, (String_t*)_stringLiteral6686C366F645244186604A3DA4B9A58012A85F1B, /*hidden argument*/NULL);
		if (L_62)
		{
			goto IL_03fe;
		}
	}
	{
		goto IL_0426;
	}

IL_02a1:
	{
		String_t* L_63 = V_1;
		bool L_64;
		L_64 = String_op_Equality_m50B3548E4AC232558190B0052877B290AA1D436A((String_t*)L_63, (String_t*)_stringLiteralCA1B66E295BD92E9FD3B6C708F09CA69A50BEFD1, /*hidden argument*/NULL);
		if (L_64)
		{
			goto IL_0412;
		}
	}
	{
		goto IL_0426;
	}

IL_02b6:
	{
		// instance.enabled = reader.Read<System.Boolean>(ES3Type_bool.Instance);
		ES3Reader_t2780AF8AA61DA2A817115CEF8612AC0E494D03C9 * L_65 = ___reader0;
		IL2CPP_RUNTIME_CLASS_INIT(ES3Type_bool_t8F309F7B9CC735FF1DEE68081B6E3CAB367745F4_il2cpp_TypeInfo_var);
		ES3Type_t8FBECB7AE75168648B9524E0C2A38DAD4555421D * L_66 = ((ES3Type_bool_t8F309F7B9CC735FF1DEE68081B6E3CAB367745F4_StaticFields*)il2cpp_codegen_static_fields_for(ES3Type_bool_t8F309F7B9CC735FF1DEE68081B6E3CAB367745F4_il2cpp_TypeInfo_var))->get_Instance_12();
		NullCheck((ES3Reader_t2780AF8AA61DA2A817115CEF8612AC0E494D03C9 *)L_65);
		bool L_67;
		L_67 = GenericVirtFuncInvoker1< bool, ES3Type_t8FBECB7AE75168648B9524E0C2A38DAD4555421D * >::Invoke(ES3Reader_Read_TisBoolean_t07D1E3F34E4813023D64F584DFF7B34C9D922F37_mC6D1B158268FF9B97822FF9F5B37FB1723FEDA22_RuntimeMethod_var, (ES3Reader_t2780AF8AA61DA2A817115CEF8612AC0E494D03C9 *)L_65, (ES3Type_t8FBECB7AE75168648B9524E0C2A38DAD4555421D *)L_66);
		ShapeModule_set_enabled_mF6FE8ED99E482A739C00F894235F4E2CD09B0D1E((ShapeModule_t3A89D143F5CAF357ECCE8B4A4F2BBD57816F98CA *)(ShapeModule_t3A89D143F5CAF357ECCE8B4A4F2BBD57816F98CA *)(&V_0), (bool)L_67, /*hidden argument*/NULL);
		// break;
		goto IL_042c;
	}

IL_02cd:
	{
		// instance.shapeType = reader.Read<UnityEngine.ParticleSystemShapeType>();
		ES3Reader_t2780AF8AA61DA2A817115CEF8612AC0E494D03C9 * L_68 = ___reader0;
		NullCheck((ES3Reader_t2780AF8AA61DA2A817115CEF8612AC0E494D03C9 *)L_68);
		int32_t L_69;
		L_69 = GenericVirtFuncInvoker0< int32_t >::Invoke(ES3Reader_Read_TisParticleSystemShapeType_t5B09F3A5A637F57DB1B2A6518E214AA2AA53D70C_mAE53212CB1FDDA51CF8CD0D39FCD446087DACA48_RuntimeMethod_var, (ES3Reader_t2780AF8AA61DA2A817115CEF8612AC0E494D03C9 *)L_68);
		ShapeModule_set_shapeType_mB772084527742749EB6AD690BAE47215FC71040D((ShapeModule_t3A89D143F5CAF357ECCE8B4A4F2BBD57816F98CA *)(ShapeModule_t3A89D143F5CAF357ECCE8B4A4F2BBD57816F98CA *)(&V_0), (int32_t)L_69, /*hidden argument*/NULL);
		// break;
		goto IL_042c;
	}

IL_02df:
	{
		// instance.randomDirectionAmount = reader.Read<System.Single>(ES3Type_float.Instance);
		ES3Reader_t2780AF8AA61DA2A817115CEF8612AC0E494D03C9 * L_70 = ___reader0;
		IL2CPP_RUNTIME_CLASS_INIT(ES3Type_float_tF86B773C86731BD9AD79448B860BBB178FE77644_il2cpp_TypeInfo_var);
		ES3Type_t8FBECB7AE75168648B9524E0C2A38DAD4555421D * L_71 = ((ES3Type_float_tF86B773C86731BD9AD79448B860BBB178FE77644_StaticFields*)il2cpp_codegen_static_fields_for(ES3Type_float_tF86B773C86731BD9AD79448B860BBB178FE77644_il2cpp_TypeInfo_var))->get_Instance_12();
		NullCheck((ES3Reader_t2780AF8AA61DA2A817115CEF8612AC0E494D03C9 *)L_70);
		float L_72;
		L_72 = GenericVirtFuncInvoker1< float, ES3Type_t8FBECB7AE75168648B9524E0C2A38DAD4555421D * >::Invoke(ES3Reader_Read_TisSingle_tE07797BA3C98D4CA9B5A19413C19A76688AB899E_m4A0416374498BDA042B8EB21E49B72326D6CE5F4_RuntimeMethod_var, (ES3Reader_t2780AF8AA61DA2A817115CEF8612AC0E494D03C9 *)L_70, (ES3Type_t8FBECB7AE75168648B9524E0C2A38DAD4555421D *)L_71);
		ShapeModule_set_randomDirectionAmount_m4E1BB67600D57383945F75F5A179EEEC01A76885((ShapeModule_t3A89D143F5CAF357ECCE8B4A4F2BBD57816F98CA *)(ShapeModule_t3A89D143F5CAF357ECCE8B4A4F2BBD57816F98CA *)(&V_0), (float)L_72, /*hidden argument*/NULL);
		// break;
		goto IL_042c;
	}

IL_02f6:
	{
		// instance.sphericalDirectionAmount = reader.Read<System.Single>(ES3Type_float.Instance);
		ES3Reader_t2780AF8AA61DA2A817115CEF8612AC0E494D03C9 * L_73 = ___reader0;
		IL2CPP_RUNTIME_CLASS_INIT(ES3Type_float_tF86B773C86731BD9AD79448B860BBB178FE77644_il2cpp_TypeInfo_var);
		ES3Type_t8FBECB7AE75168648B9524E0C2A38DAD4555421D * L_74 = ((ES3Type_float_tF86B773C86731BD9AD79448B860BBB178FE77644_StaticFields*)il2cpp_codegen_static_fields_for(ES3Type_float_tF86B773C86731BD9AD79448B860BBB178FE77644_il2cpp_TypeInfo_var))->get_Instance_12();
		NullCheck((ES3Reader_t2780AF8AA61DA2A817115CEF8612AC0E494D03C9 *)L_73);
		float L_75;
		L_75 = GenericVirtFuncInvoker1< float, ES3Type_t8FBECB7AE75168648B9524E0C2A38DAD4555421D * >::Invoke(ES3Reader_Read_TisSingle_tE07797BA3C98D4CA9B5A19413C19A76688AB899E_m4A0416374498BDA042B8EB21E49B72326D6CE5F4_RuntimeMethod_var, (ES3Reader_t2780AF8AA61DA2A817115CEF8612AC0E494D03C9 *)L_73, (ES3Type_t8FBECB7AE75168648B9524E0C2A38DAD4555421D *)L_74);
		ShapeModule_set_sphericalDirectionAmount_m02A9FBFF18AF24B821801DF5D833CA20A569F62B((ShapeModule_t3A89D143F5CAF357ECCE8B4A4F2BBD57816F98CA *)(ShapeModule_t3A89D143F5CAF357ECCE8B4A4F2BBD57816F98CA *)(&V_0), (float)L_75, /*hidden argument*/NULL);
		// break;
		goto IL_042c;
	}

IL_030d:
	{
		// instance.alignToDirection = reader.Read<System.Boolean>(ES3Type_bool.Instance);
		ES3Reader_t2780AF8AA61DA2A817115CEF8612AC0E494D03C9 * L_76 = ___reader0;
		IL2CPP_RUNTIME_CLASS_INIT(ES3Type_bool_t8F309F7B9CC735FF1DEE68081B6E3CAB367745F4_il2cpp_TypeInfo_var);
		ES3Type_t8FBECB7AE75168648B9524E0C2A38DAD4555421D * L_77 = ((ES3Type_bool_t8F309F7B9CC735FF1DEE68081B6E3CAB367745F4_StaticFields*)il2cpp_codegen_static_fields_for(ES3Type_bool_t8F309F7B9CC735FF1DEE68081B6E3CAB367745F4_il2cpp_TypeInfo_var))->get_Instance_12();
		NullCheck((ES3Reader_t2780AF8AA61DA2A817115CEF8612AC0E494D03C9 *)L_76);
		bool L_78;
		L_78 = GenericVirtFuncInvoker1< bool, ES3Type_t8FBECB7AE75168648B9524E0C2A38DAD4555421D * >::Invoke(ES3Reader_Read_TisBoolean_t07D1E3F34E4813023D64F584DFF7B34C9D922F37_mC6D1B158268FF9B97822FF9F5B37FB1723FEDA22_RuntimeMethod_var, (ES3Reader_t2780AF8AA61DA2A817115CEF8612AC0E494D03C9 *)L_76, (ES3Type_t8FBECB7AE75168648B9524E0C2A38DAD4555421D *)L_77);
		ShapeModule_set_alignToDirection_m396A57DCAD5F194E4DDDA0DF9C35E5508E3641BE((ShapeModule_t3A89D143F5CAF357ECCE8B4A4F2BBD57816F98CA *)(ShapeModule_t3A89D143F5CAF357ECCE8B4A4F2BBD57816F98CA *)(&V_0), (bool)L_78, /*hidden argument*/NULL);
		// break;
		goto IL_042c;
	}

IL_0324:
	{
		// instance.radius = reader.Read<System.Single>(ES3Type_float.Instance);
		ES3Reader_t2780AF8AA61DA2A817115CEF8612AC0E494D03C9 * L_79 = ___reader0;
		IL2CPP_RUNTIME_CLASS_INIT(ES3Type_float_tF86B773C86731BD9AD79448B860BBB178FE77644_il2cpp_TypeInfo_var);
		ES3Type_t8FBECB7AE75168648B9524E0C2A38DAD4555421D * L_80 = ((ES3Type_float_tF86B773C86731BD9AD79448B860BBB178FE77644_StaticFields*)il2cpp_codegen_static_fields_for(ES3Type_float_tF86B773C86731BD9AD79448B860BBB178FE77644_il2cpp_TypeInfo_var))->get_Instance_12();
		NullCheck((ES3Reader_t2780AF8AA61DA2A817115CEF8612AC0E494D03C9 *)L_79);
		float L_81;
		L_81 = GenericVirtFuncInvoker1< float, ES3Type_t8FBECB7AE75168648B9524E0C2A38DAD4555421D * >::Invoke(ES3Reader_Read_TisSingle_tE07797BA3C98D4CA9B5A19413C19A76688AB899E_m4A0416374498BDA042B8EB21E49B72326D6CE5F4_RuntimeMethod_var, (ES3Reader_t2780AF8AA61DA2A817115CEF8612AC0E494D03C9 *)L_79, (ES3Type_t8FBECB7AE75168648B9524E0C2A38DAD4555421D *)L_80);
		ShapeModule_set_radius_mFC12B15750268316924771461C09B1A311A16DEA((ShapeModule_t3A89D143F5CAF357ECCE8B4A4F2BBD57816F98CA *)(ShapeModule_t3A89D143F5CAF357ECCE8B4A4F2BBD57816F98CA *)(&V_0), (float)L_81, /*hidden argument*/NULL);
		// break;
		goto IL_042c;
	}

IL_033b:
	{
		// instance.angle = reader.Read<System.Single>(ES3Type_float.Instance);
		ES3Reader_t2780AF8AA61DA2A817115CEF8612AC0E494D03C9 * L_82 = ___reader0;
		IL2CPP_RUNTIME_CLASS_INIT(ES3Type_float_tF86B773C86731BD9AD79448B860BBB178FE77644_il2cpp_TypeInfo_var);
		ES3Type_t8FBECB7AE75168648B9524E0C2A38DAD4555421D * L_83 = ((ES3Type_float_tF86B773C86731BD9AD79448B860BBB178FE77644_StaticFields*)il2cpp_codegen_static_fields_for(ES3Type_float_tF86B773C86731BD9AD79448B860BBB178FE77644_il2cpp_TypeInfo_var))->get_Instance_12();
		NullCheck((ES3Reader_t2780AF8AA61DA2A817115CEF8612AC0E494D03C9 *)L_82);
		float L_84;
		L_84 = GenericVirtFuncInvoker1< float, ES3Type_t8FBECB7AE75168648B9524E0C2A38DAD4555421D * >::Invoke(ES3Reader_Read_TisSingle_tE07797BA3C98D4CA9B5A19413C19A76688AB899E_m4A0416374498BDA042B8EB21E49B72326D6CE5F4_RuntimeMethod_var, (ES3Reader_t2780AF8AA61DA2A817115CEF8612AC0E494D03C9 *)L_82, (ES3Type_t8FBECB7AE75168648B9524E0C2A38DAD4555421D *)L_83);
		ShapeModule_set_angle_m20629BB5FE89F2040960548B45F6EC801B1DB8AA((ShapeModule_t3A89D143F5CAF357ECCE8B4A4F2BBD57816F98CA *)(ShapeModule_t3A89D143F5CAF357ECCE8B4A4F2BBD57816F98CA *)(&V_0), (float)L_84, /*hidden argument*/NULL);
		// break;
		goto IL_042c;
	}

IL_0352:
	{
		// instance.length = reader.Read<System.Single>(ES3Type_float.Instance);
		ES3Reader_t2780AF8AA61DA2A817115CEF8612AC0E494D03C9 * L_85 = ___reader0;
		IL2CPP_RUNTIME_CLASS_INIT(ES3Type_float_tF86B773C86731BD9AD79448B860BBB178FE77644_il2cpp_TypeInfo_var);
		ES3Type_t8FBECB7AE75168648B9524E0C2A38DAD4555421D * L_86 = ((ES3Type_float_tF86B773C86731BD9AD79448B860BBB178FE77644_StaticFields*)il2cpp_codegen_static_fields_for(ES3Type_float_tF86B773C86731BD9AD79448B860BBB178FE77644_il2cpp_TypeInfo_var))->get_Instance_12();
		NullCheck((ES3Reader_t2780AF8AA61DA2A817115CEF8612AC0E494D03C9 *)L_85);
		float L_87;
		L_87 = GenericVirtFuncInvoker1< float, ES3Type_t8FBECB7AE75168648B9524E0C2A38DAD4555421D * >::Invoke(ES3Reader_Read_TisSingle_tE07797BA3C98D4CA9B5A19413C19A76688AB899E_m4A0416374498BDA042B8EB21E49B72326D6CE5F4_RuntimeMethod_var, (ES3Reader_t2780AF8AA61DA2A817115CEF8612AC0E494D03C9 *)L_85, (ES3Type_t8FBECB7AE75168648B9524E0C2A38DAD4555421D *)L_86);
		ShapeModule_set_length_m744975258664B53F38A8B8BE38A86A0FFDD85BC7((ShapeModule_t3A89D143F5CAF357ECCE8B4A4F2BBD57816F98CA *)(ShapeModule_t3A89D143F5CAF357ECCE8B4A4F2BBD57816F98CA *)(&V_0), (float)L_87, /*hidden argument*/NULL);
		// break;
		goto IL_042c;
	}

IL_0369:
	{
		// instance.scale = reader.Read<UnityEngine.Vector3>(ES3Type_Vector3.Instance);
		ES3Reader_t2780AF8AA61DA2A817115CEF8612AC0E494D03C9 * L_88 = ___reader0;
		IL2CPP_RUNTIME_CLASS_INIT(ES3Type_Vector3_tA9144E81A20D2F28726F02DE1AE6CD3F9C12B54F_il2cpp_TypeInfo_var);
		ES3Type_t8FBECB7AE75168648B9524E0C2A38DAD4555421D * L_89 = ((ES3Type_Vector3_tA9144E81A20D2F28726F02DE1AE6CD3F9C12B54F_StaticFields*)il2cpp_codegen_static_fields_for(ES3Type_Vector3_tA9144E81A20D2F28726F02DE1AE6CD3F9C12B54F_il2cpp_TypeInfo_var))->get_Instance_12();
		NullCheck((ES3Reader_t2780AF8AA61DA2A817115CEF8612AC0E494D03C9 *)L_88);
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_90;
		L_90 = GenericVirtFuncInvoker1< Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E , ES3Type_t8FBECB7AE75168648B9524E0C2A38DAD4555421D * >::Invoke(ES3Reader_Read_TisVector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E_mBA4CD9D0F45E78BA43FE2DB8EC33CC3A5433DE15_RuntimeMethod_var, (ES3Reader_t2780AF8AA61DA2A817115CEF8612AC0E494D03C9 *)L_88, (ES3Type_t8FBECB7AE75168648B9524E0C2A38DAD4555421D *)L_89);
		ShapeModule_set_scale_m2951583898F18878E6F238100045072F44AD9158((ShapeModule_t3A89D143F5CAF357ECCE8B4A4F2BBD57816F98CA *)(ShapeModule_t3A89D143F5CAF357ECCE8B4A4F2BBD57816F98CA *)(&V_0), (Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E )L_90, /*hidden argument*/NULL);
		// break;
		goto IL_042c;
	}

IL_0380:
	{
		// instance.meshShapeType = reader.Read<UnityEngine.ParticleSystemMeshShapeType>();
		ES3Reader_t2780AF8AA61DA2A817115CEF8612AC0E494D03C9 * L_91 = ___reader0;
		NullCheck((ES3Reader_t2780AF8AA61DA2A817115CEF8612AC0E494D03C9 *)L_91);
		int32_t L_92;
		L_92 = GenericVirtFuncInvoker0< int32_t >::Invoke(ES3Reader_Read_TisParticleSystemMeshShapeType_t7C9518403F30CC7AF7F9124FD61EC1187B42EFD2_mF1A19C0F8BBA6E44737F158F3BE4CC478F623F10_RuntimeMethod_var, (ES3Reader_t2780AF8AA61DA2A817115CEF8612AC0E494D03C9 *)L_91);
		ShapeModule_set_meshShapeType_m5DAD94B71F2110F45E454C30DE052153129891C2((ShapeModule_t3A89D143F5CAF357ECCE8B4A4F2BBD57816F98CA *)(ShapeModule_t3A89D143F5CAF357ECCE8B4A4F2BBD57816F98CA *)(&V_0), (int32_t)L_92, /*hidden argument*/NULL);
		// break;
		goto IL_042c;
	}

IL_0392:
	{
		// instance.mesh = reader.Read<UnityEngine.Mesh>();
		ES3Reader_t2780AF8AA61DA2A817115CEF8612AC0E494D03C9 * L_93 = ___reader0;
		NullCheck((ES3Reader_t2780AF8AA61DA2A817115CEF8612AC0E494D03C9 *)L_93);
		Mesh_t2F5992DBA650D5862B43D3823ACD997132A57DA6 * L_94;
		L_94 = GenericVirtFuncInvoker0< Mesh_t2F5992DBA650D5862B43D3823ACD997132A57DA6 * >::Invoke(ES3Reader_Read_TisMesh_t2F5992DBA650D5862B43D3823ACD997132A57DA6_m65DF5BA41642A39B77979CC49472E4DE7A1660F9_RuntimeMethod_var, (ES3Reader_t2780AF8AA61DA2A817115CEF8612AC0E494D03C9 *)L_93);
		ShapeModule_set_mesh_mD3E276A9E45442E75AD8A9AA4BD88C9112BD77CA((ShapeModule_t3A89D143F5CAF357ECCE8B4A4F2BBD57816F98CA *)(ShapeModule_t3A89D143F5CAF357ECCE8B4A4F2BBD57816F98CA *)(&V_0), (Mesh_t2F5992DBA650D5862B43D3823ACD997132A57DA6 *)L_94, /*hidden argument*/NULL);
		// break;
		goto IL_042c;
	}

IL_03a4:
	{
		// instance.meshRenderer = reader.Read<UnityEngine.MeshRenderer>();
		ES3Reader_t2780AF8AA61DA2A817115CEF8612AC0E494D03C9 * L_95 = ___reader0;
		NullCheck((ES3Reader_t2780AF8AA61DA2A817115CEF8612AC0E494D03C9 *)L_95);
		MeshRenderer_tCD983A2F635E12BCB0BAA2E635D96A318757908B * L_96;
		L_96 = GenericVirtFuncInvoker0< MeshRenderer_tCD983A2F635E12BCB0BAA2E635D96A318757908B * >::Invoke(ES3Reader_Read_TisMeshRenderer_tCD983A2F635E12BCB0BAA2E635D96A318757908B_m773CE5481730EBCC6A377F918946EB11B304050A_RuntimeMethod_var, (ES3Reader_t2780AF8AA61DA2A817115CEF8612AC0E494D03C9 *)L_95);
		ShapeModule_set_meshRenderer_m334D69AC8C29F5E393732D62BBB3645296614059((ShapeModule_t3A89D143F5CAF357ECCE8B4A4F2BBD57816F98CA *)(ShapeModule_t3A89D143F5CAF357ECCE8B4A4F2BBD57816F98CA *)(&V_0), (MeshRenderer_tCD983A2F635E12BCB0BAA2E635D96A318757908B *)L_96, /*hidden argument*/NULL);
		// break;
		goto IL_042c;
	}

IL_03b3:
	{
		// instance.skinnedMeshRenderer = reader.Read<UnityEngine.SkinnedMeshRenderer>();
		ES3Reader_t2780AF8AA61DA2A817115CEF8612AC0E494D03C9 * L_97 = ___reader0;
		NullCheck((ES3Reader_t2780AF8AA61DA2A817115CEF8612AC0E494D03C9 *)L_97);
		SkinnedMeshRenderer_t126F4D6010E0F4B2685A7817B0A9171805D8F496 * L_98;
		L_98 = GenericVirtFuncInvoker0< SkinnedMeshRenderer_t126F4D6010E0F4B2685A7817B0A9171805D8F496 * >::Invoke(ES3Reader_Read_TisSkinnedMeshRenderer_t126F4D6010E0F4B2685A7817B0A9171805D8F496_m23D6569D5CE7B3E1C67BDB470CDEDEF25A835F25_RuntimeMethod_var, (ES3Reader_t2780AF8AA61DA2A817115CEF8612AC0E494D03C9 *)L_97);
		ShapeModule_set_skinnedMeshRenderer_m9DEF9CD332D3F10BE7D99EFECC0971FB5AE83F56((ShapeModule_t3A89D143F5CAF357ECCE8B4A4F2BBD57816F98CA *)(ShapeModule_t3A89D143F5CAF357ECCE8B4A4F2BBD57816F98CA *)(&V_0), (SkinnedMeshRenderer_t126F4D6010E0F4B2685A7817B0A9171805D8F496 *)L_98, /*hidden argument*/NULL);
		// break;
		goto IL_042c;
	}

IL_03c2:
	{
		// instance.useMeshMaterialIndex = reader.Read<System.Boolean>(ES3Type_bool.Instance);
		ES3Reader_t2780AF8AA61DA2A817115CEF8612AC0E494D03C9 * L_99 = ___reader0;
		IL2CPP_RUNTIME_CLASS_INIT(ES3Type_bool_t8F309F7B9CC735FF1DEE68081B6E3CAB367745F4_il2cpp_TypeInfo_var);
		ES3Type_t8FBECB7AE75168648B9524E0C2A38DAD4555421D * L_100 = ((ES3Type_bool_t8F309F7B9CC735FF1DEE68081B6E3CAB367745F4_StaticFields*)il2cpp_codegen_static_fields_for(ES3Type_bool_t8F309F7B9CC735FF1DEE68081B6E3CAB367745F4_il2cpp_TypeInfo_var))->get_Instance_12();
		NullCheck((ES3Reader_t2780AF8AA61DA2A817115CEF8612AC0E494D03C9 *)L_99);
		bool L_101;
		L_101 = GenericVirtFuncInvoker1< bool, ES3Type_t8FBECB7AE75168648B9524E0C2A38DAD4555421D * >::Invoke(ES3Reader_Read_TisBoolean_t07D1E3F34E4813023D64F584DFF7B34C9D922F37_mC6D1B158268FF9B97822FF9F5B37FB1723FEDA22_RuntimeMethod_var, (ES3Reader_t2780AF8AA61DA2A817115CEF8612AC0E494D03C9 *)L_99, (ES3Type_t8FBECB7AE75168648B9524E0C2A38DAD4555421D *)L_100);
		ShapeModule_set_useMeshMaterialIndex_m6130573C0966ED3B5C590665747305BCEFD3F901((ShapeModule_t3A89D143F5CAF357ECCE8B4A4F2BBD57816F98CA *)(ShapeModule_t3A89D143F5CAF357ECCE8B4A4F2BBD57816F98CA *)(&V_0), (bool)L_101, /*hidden argument*/NULL);
		// break;
		goto IL_042c;
	}

IL_03d6:
	{
		// instance.meshMaterialIndex = reader.Read<System.Int32>(ES3Type_int.Instance);
		ES3Reader_t2780AF8AA61DA2A817115CEF8612AC0E494D03C9 * L_102 = ___reader0;
		IL2CPP_RUNTIME_CLASS_INIT(ES3Type_int_tF64C15D40AD0CC7C15BCD1CEC3C5C6BF837BD167_il2cpp_TypeInfo_var);
		ES3Type_t8FBECB7AE75168648B9524E0C2A38DAD4555421D * L_103 = ((ES3Type_int_tF64C15D40AD0CC7C15BCD1CEC3C5C6BF837BD167_StaticFields*)il2cpp_codegen_static_fields_for(ES3Type_int_tF64C15D40AD0CC7C15BCD1CEC3C5C6BF837BD167_il2cpp_TypeInfo_var))->get_Instance_12();
		NullCheck((ES3Reader_t2780AF8AA61DA2A817115CEF8612AC0E494D03C9 *)L_102);
		int32_t L_104;
		L_104 = GenericVirtFuncInvoker1< int32_t, ES3Type_t8FBECB7AE75168648B9524E0C2A38DAD4555421D * >::Invoke(ES3Reader_Read_TisInt32_tFDE5F8CD43D10453F6A2E0C77FE48C6CC7009046_m2B74AA6627F5B1D21171D56C42F71DE5A7C1B4A6_RuntimeMethod_var, (ES3Reader_t2780AF8AA61DA2A817115CEF8612AC0E494D03C9 *)L_102, (ES3Type_t8FBECB7AE75168648B9524E0C2A38DAD4555421D *)L_103);
		ShapeModule_set_meshMaterialIndex_m1205DDEB353204D5941654FB79164AD5BAF0A59C((ShapeModule_t3A89D143F5CAF357ECCE8B4A4F2BBD57816F98CA *)(ShapeModule_t3A89D143F5CAF357ECCE8B4A4F2BBD57816F98CA *)(&V_0), (int32_t)L_104, /*hidden argument*/NULL);
		// break;
		goto IL_042c;
	}

IL_03ea:
	{
		// instance.useMeshColors = reader.Read<System.Boolean>(ES3Type_bool.Instance);
		ES3Reader_t2780AF8AA61DA2A817115CEF8612AC0E494D03C9 * L_105 = ___reader0;
		IL2CPP_RUNTIME_CLASS_INIT(ES3Type_bool_t8F309F7B9CC735FF1DEE68081B6E3CAB367745F4_il2cpp_TypeInfo_var);
		ES3Type_t8FBECB7AE75168648B9524E0C2A38DAD4555421D * L_106 = ((ES3Type_bool_t8F309F7B9CC735FF1DEE68081B6E3CAB367745F4_StaticFields*)il2cpp_codegen_static_fields_for(ES3Type_bool_t8F309F7B9CC735FF1DEE68081B6E3CAB367745F4_il2cpp_TypeInfo_var))->get_Instance_12();
		NullCheck((ES3Reader_t2780AF8AA61DA2A817115CEF8612AC0E494D03C9 *)L_105);
		bool L_107;
		L_107 = GenericVirtFuncInvoker1< bool, ES3Type_t8FBECB7AE75168648B9524E0C2A38DAD4555421D * >::Invoke(ES3Reader_Read_TisBoolean_t07D1E3F34E4813023D64F584DFF7B34C9D922F37_mC6D1B158268FF9B97822FF9F5B37FB1723FEDA22_RuntimeMethod_var, (ES3Reader_t2780AF8AA61DA2A817115CEF8612AC0E494D03C9 *)L_105, (ES3Type_t8FBECB7AE75168648B9524E0C2A38DAD4555421D *)L_106);
		ShapeModule_set_useMeshColors_m071D000F330805B1EBCF09B40AC4EB9942EB9F57((ShapeModule_t3A89D143F5CAF357ECCE8B4A4F2BBD57816F98CA *)(ShapeModule_t3A89D143F5CAF357ECCE8B4A4F2BBD57816F98CA *)(&V_0), (bool)L_107, /*hidden argument*/NULL);
		// break;
		goto IL_042c;
	}

IL_03fe:
	{
		// instance.normalOffset = reader.Read<System.Single>(ES3Type_float.Instance);
		ES3Reader_t2780AF8AA61DA2A817115CEF8612AC0E494D03C9 * L_108 = ___reader0;
		IL2CPP_RUNTIME_CLASS_INIT(ES3Type_float_tF86B773C86731BD9AD79448B860BBB178FE77644_il2cpp_TypeInfo_var);
		ES3Type_t8FBECB7AE75168648B9524E0C2A38DAD4555421D * L_109 = ((ES3Type_float_tF86B773C86731BD9AD79448B860BBB178FE77644_StaticFields*)il2cpp_codegen_static_fields_for(ES3Type_float_tF86B773C86731BD9AD79448B860BBB178FE77644_il2cpp_TypeInfo_var))->get_Instance_12();
		NullCheck((ES3Reader_t2780AF8AA61DA2A817115CEF8612AC0E494D03C9 *)L_108);
		float L_110;
		L_110 = GenericVirtFuncInvoker1< float, ES3Type_t8FBECB7AE75168648B9524E0C2A38DAD4555421D * >::Invoke(ES3Reader_Read_TisSingle_tE07797BA3C98D4CA9B5A19413C19A76688AB899E_m4A0416374498BDA042B8EB21E49B72326D6CE5F4_RuntimeMethod_var, (ES3Reader_t2780AF8AA61DA2A817115CEF8612AC0E494D03C9 *)L_108, (ES3Type_t8FBECB7AE75168648B9524E0C2A38DAD4555421D *)L_109);
		ShapeModule_set_normalOffset_m81A315286BAA5F52AAED6B317734FB03B2DCE9FD((ShapeModule_t3A89D143F5CAF357ECCE8B4A4F2BBD57816F98CA *)(ShapeModule_t3A89D143F5CAF357ECCE8B4A4F2BBD57816F98CA *)(&V_0), (float)L_110, /*hidden argument*/NULL);
		// break;
		goto IL_042c;
	}

IL_0412:
	{
		// instance.arc = reader.Read<System.Single>(ES3Type_float.Instance);
		ES3Reader_t2780AF8AA61DA2A817115CEF8612AC0E494D03C9 * L_111 = ___reader0;
		IL2CPP_RUNTIME_CLASS_INIT(ES3Type_float_tF86B773C86731BD9AD79448B860BBB178FE77644_il2cpp_TypeInfo_var);
		ES3Type_t8FBECB7AE75168648B9524E0C2A38DAD4555421D * L_112 = ((ES3Type_float_tF86B773C86731BD9AD79448B860BBB178FE77644_StaticFields*)il2cpp_codegen_static_fields_for(ES3Type_float_tF86B773C86731BD9AD79448B860BBB178FE77644_il2cpp_TypeInfo_var))->get_Instance_12();
		NullCheck((ES3Reader_t2780AF8AA61DA2A817115CEF8612AC0E494D03C9 *)L_111);
		float L_113;
		L_113 = GenericVirtFuncInvoker1< float, ES3Type_t8FBECB7AE75168648B9524E0C2A38DAD4555421D * >::Invoke(ES3Reader_Read_TisSingle_tE07797BA3C98D4CA9B5A19413C19A76688AB899E_m4A0416374498BDA042B8EB21E49B72326D6CE5F4_RuntimeMethod_var, (ES3Reader_t2780AF8AA61DA2A817115CEF8612AC0E494D03C9 *)L_111, (ES3Type_t8FBECB7AE75168648B9524E0C2A38DAD4555421D *)L_112);
		ShapeModule_set_arc_m4A2578EBD4747DB3D9ED74AB53E488872CFA541F((ShapeModule_t3A89D143F5CAF357ECCE8B4A4F2BBD57816F98CA *)(ShapeModule_t3A89D143F5CAF357ECCE8B4A4F2BBD57816F98CA *)(&V_0), (float)L_113, /*hidden argument*/NULL);
		// break;
		goto IL_042c;
	}

IL_0426:
	{
		// reader.Skip();
		ES3Reader_t2780AF8AA61DA2A817115CEF8612AC0E494D03C9 * L_114 = ___reader0;
		NullCheck((ES3Reader_t2780AF8AA61DA2A817115CEF8612AC0E494D03C9 *)L_114);
		VirtActionInvoker0::Invoke(41 /* System.Void ES3Reader::Skip() */, (ES3Reader_t2780AF8AA61DA2A817115CEF8612AC0E494D03C9 *)L_114);
	}

IL_042c:
	{
		// while((propertyName = reader.ReadPropertyName()) != null)
		ES3Reader_t2780AF8AA61DA2A817115CEF8612AC0E494D03C9 * L_115 = ___reader0;
		NullCheck((ES3Reader_t2780AF8AA61DA2A817115CEF8612AC0E494D03C9 *)L_115);
		String_t* L_116;
		L_116 = VirtFuncInvoker0< String_t* >::Invoke(21 /* System.String ES3Reader::ReadPropertyName() */, (ES3Reader_t2780AF8AA61DA2A817115CEF8612AC0E494D03C9 *)L_115);
		String_t* L_117 = (String_t*)L_116;
		V_1 = (String_t*)L_117;
		if (L_117)
		{
			goto IL_000c;
		}
	}
	{
		// }
		return;
	}
}
// System.Void ES3Types.ES3Type_ShapeModule::ReadInto<UnityEngine.ParticleSystem/MinMaxCurve>(ES3Reader,System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ES3Type_ShapeModule_ReadInto_TisMinMaxCurve_tF036239442AB2D438B1EDABEBC785426871084CD_m870259D0E3AFA2302A95AB4758F4D841424F6B54_gshared (ES3Type_ShapeModule_t67010A74D4F69A245D5F06976239CAB4279B5377 * __this, ES3Reader_t2780AF8AA61DA2A817115CEF8612AC0E494D03C9 * ___reader0, RuntimeObject * ___obj1, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ES3Reader_Read_TisBoolean_t07D1E3F34E4813023D64F584DFF7B34C9D922F37_mC6D1B158268FF9B97822FF9F5B37FB1723FEDA22_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ES3Reader_Read_TisInt32_tFDE5F8CD43D10453F6A2E0C77FE48C6CC7009046_m2B74AA6627F5B1D21171D56C42F71DE5A7C1B4A6_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ES3Reader_Read_TisMeshRenderer_tCD983A2F635E12BCB0BAA2E635D96A318757908B_m773CE5481730EBCC6A377F918946EB11B304050A_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ES3Reader_Read_TisMesh_t2F5992DBA650D5862B43D3823ACD997132A57DA6_m65DF5BA41642A39B77979CC49472E4DE7A1660F9_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ES3Reader_Read_TisParticleSystemMeshShapeType_t7C9518403F30CC7AF7F9124FD61EC1187B42EFD2_mF1A19C0F8BBA6E44737F158F3BE4CC478F623F10_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ES3Reader_Read_TisParticleSystemShapeType_t5B09F3A5A637F57DB1B2A6518E214AA2AA53D70C_mAE53212CB1FDDA51CF8CD0D39FCD446087DACA48_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ES3Reader_Read_TisSingle_tE07797BA3C98D4CA9B5A19413C19A76688AB899E_m4A0416374498BDA042B8EB21E49B72326D6CE5F4_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ES3Reader_Read_TisSkinnedMeshRenderer_t126F4D6010E0F4B2685A7817B0A9171805D8F496_m23D6569D5CE7B3E1C67BDB470CDEDEF25A835F25_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ES3Reader_Read_TisVector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E_mBA4CD9D0F45E78BA43FE2DB8EC33CC3A5433DE15_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ES3Type_Vector3_tA9144E81A20D2F28726F02DE1AE6CD3F9C12B54F_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ES3Type_bool_t8F309F7B9CC735FF1DEE68081B6E3CAB367745F4_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ES3Type_float_tF86B773C86731BD9AD79448B860BBB178FE77644_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ES3Type_int_tF64C15D40AD0CC7C15BCD1CEC3C5C6BF837BD167_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ShapeModule_t3A89D143F5CAF357ECCE8B4A4F2BBD57816F98CA_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral01837E2252AC8026A5EA3567A663017A662FBB70);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral1228466552C1791B2019A329AFE94665D441168A);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral60E56797D122AE71D3774956F66C6EEB9EA22C05);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral6686C366F645244186604A3DA4B9A58012A85F1B);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral82BECCAD895076775062861CDB46AADEF913D969);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral8C9F18A4F030B96447955FBBA1A99FFC43B5D8E0);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral8E54BB51E569CB6A8D3C45D8AEF883A1559C1C0E);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral91811EE149061D28B38320E2430CE8888AD6398B);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralBD49F93A7BC78A69E385CEC0E78F434BD2845A17);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralCA1B66E295BD92E9FD3B6C708F09CA69A50BEFD1);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralE8744A8B8BD390EB66CA0CAE2376C973E6904FFB);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralEB0A157666700D8227FD4B66A26FDC02035E89BF);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralED1F119527A0BCA45125EF8E0F719985DA86C0E1);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralF66E9083C67855AB6EBB4B74342E385A72AACE32);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralF9BE17D634D1B07BCDCDA77A87710C946D81307B);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralF9D225733E1D10F9344C755C4A9C0870CD1DE97B);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralFA5EC7168E9633DAAEAA255ECB55030EA60F064F);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralFC341A1966AF28A9A7A26EDFB78ABBF7DE4D0E1F);
		s_Il2CppMethodInitialized = true;
	}
	ShapeModule_t3A89D143F5CAF357ECCE8B4A4F2BBD57816F98CA  V_0;
	memset((&V_0), 0, sizeof(V_0));
	String_t* V_1 = NULL;
	uint32_t V_2 = 0;
	{
		// var instance = (UnityEngine.ParticleSystem.ShapeModule)obj;
		RuntimeObject * L_0 = ___obj1;
		V_0 = (ShapeModule_t3A89D143F5CAF357ECCE8B4A4F2BBD57816F98CA )((*(ShapeModule_t3A89D143F5CAF357ECCE8B4A4F2BBD57816F98CA *)((ShapeModule_t3A89D143F5CAF357ECCE8B4A4F2BBD57816F98CA *)UnBox(L_0, ShapeModule_t3A89D143F5CAF357ECCE8B4A4F2BBD57816F98CA_il2cpp_TypeInfo_var))));
		goto IL_042c;
	}

IL_000c:
	{
		String_t* L_1 = V_1;
		if (!L_1)
		{
			goto IL_0426;
		}
	}
	{
		String_t* L_2 = V_1;
		uint32_t L_3;
		L_3 = U3CPrivateImplementationDetailsU3E_ComputeStringHash_m3ADC1F612F9EE3DD518E6F0023A0DE0EE2B120A7((String_t*)L_2, /*hidden argument*/NULL);
		V_2 = (uint32_t)L_3;
		uint32_t L_4 = V_2;
		if ((!(((uint32_t)L_4) <= ((uint32_t)((int32_t)-2104025999)))))
		{
			goto IL_00b3;
		}
	}
	{
		uint32_t L_5 = V_2;
		if ((!(((uint32_t)L_5) <= ((uint32_t)((int32_t)666576729)))))
		{
			goto IL_006a;
		}
	}
	{
		uint32_t L_6 = V_2;
		if ((!(((uint32_t)L_6) <= ((uint32_t)((int32_t)49525662)))))
		{
			goto IL_004f;
		}
	}
	{
		uint32_t L_7 = V_2;
		if ((((int32_t)L_7) == ((int32_t)((int32_t)24602224))))
		{
			goto IL_024d;
		}
	}
	{
		uint32_t L_8 = V_2;
		if ((((int32_t)L_8) == ((int32_t)((int32_t)49525662))))
		{
			goto IL_013c;
		}
	}
	{
		goto IL_0426;
	}

IL_004f:
	{
		uint32_t L_9 = V_2;
		if ((((int32_t)L_9) == ((int32_t)((int32_t)230313139))))
		{
			goto IL_01a5;
		}
	}
	{
		uint32_t L_10 = V_2;
		if ((((int32_t)L_10) == ((int32_t)((int32_t)666576729))))
		{
			goto IL_01f9;
		}
	}
	{
		goto IL_0426;
	}

IL_006a:
	{
		uint32_t L_11 = V_2;
		if ((!(((uint32_t)L_11) <= ((uint32_t)((int32_t)955488309)))))
		{
			goto IL_008d;
		}
	}
	{
		uint32_t L_12 = V_2;
		if ((((int32_t)L_12) == ((int32_t)((int32_t)923624301))))
		{
			goto IL_0238;
		}
	}
	{
		uint32_t L_13 = V_2;
		if ((((int32_t)L_13) == ((int32_t)((int32_t)955488309))))
		{
			goto IL_028c;
		}
	}
	{
		goto IL_0426;
	}

IL_008d:
	{
		uint32_t L_14 = V_2;
		if ((((int32_t)L_14) == ((int32_t)((int32_t)980363995))))
		{
			goto IL_02a1;
		}
	}
	{
		uint32_t L_15 = V_2;
		if ((((int32_t)L_15) == ((int32_t)((int32_t)985988853))))
		{
			goto IL_017b;
		}
	}
	{
		uint32_t L_16 = V_2;
		if ((((int32_t)L_16) == ((int32_t)((int32_t)-2104025999))))
		{
			goto IL_01e4;
		}
	}
	{
		goto IL_0426;
	}

IL_00b3:
	{
		uint32_t L_17 = V_2;
		if ((!(((uint32_t)L_17) <= ((uint32_t)((int32_t)-1473810612)))))
		{
			goto IL_00f6;
		}
	}
	{
		uint32_t L_18 = V_2;
		if ((!(((uint32_t)L_18) <= ((uint32_t)((int32_t)-1726928010)))))
		{
			goto IL_00db;
		}
	}
	{
		uint32_t L_19 = V_2;
		if ((((int32_t)L_19) == ((int32_t)((int32_t)-2083506667))))
		{
			goto IL_01cf;
		}
	}
	{
		uint32_t L_20 = V_2;
		if ((((int32_t)L_20) == ((int32_t)((int32_t)-1726928010))))
		{
			goto IL_0151;
		}
	}
	{
		goto IL_0426;
	}

IL_00db:
	{
		uint32_t L_21 = V_2;
		if ((((int32_t)L_21) == ((int32_t)((int32_t)-1593786692))))
		{
			goto IL_020e;
		}
	}
	{
		uint32_t L_22 = V_2;
		if ((((int32_t)L_22) == ((int32_t)((int32_t)-1473810612))))
		{
			goto IL_0190;
		}
	}
	{
		goto IL_0426;
	}

IL_00f6:
	{
		uint32_t L_23 = V_2;
		if ((!(((uint32_t)L_23) <= ((uint32_t)((int32_t)-1386986472)))))
		{
			goto IL_0116;
		}
	}
	{
		uint32_t L_24 = V_2;
		if ((((int32_t)L_24) == ((int32_t)((int32_t)-1412039661))))
		{
			goto IL_0166;
		}
	}
	{
		uint32_t L_25 = V_2;
		if ((((int32_t)L_25) == ((int32_t)((int32_t)-1386986472))))
		{
			goto IL_01ba;
		}
	}
	{
		goto IL_0426;
	}

IL_0116:
	{
		uint32_t L_26 = V_2;
		if ((((int32_t)L_26) == ((int32_t)((int32_t)-584064197))))
		{
			goto IL_0223;
		}
	}
	{
		uint32_t L_27 = V_2;
		if ((((int32_t)L_27) == ((int32_t)((int32_t)-473474755))))
		{
			goto IL_0277;
		}
	}
	{
		uint32_t L_28 = V_2;
		if ((((int32_t)L_28) == ((int32_t)((int32_t)-365686981))))
		{
			goto IL_0262;
		}
	}
	{
		goto IL_0426;
	}

IL_013c:
	{
		String_t* L_29 = V_1;
		bool L_30;
		L_30 = String_op_Equality_m50B3548E4AC232558190B0052877B290AA1D436A((String_t*)L_29, (String_t*)_stringLiteralF9D225733E1D10F9344C755C4A9C0870CD1DE97B, /*hidden argument*/NULL);
		if (L_30)
		{
			goto IL_02b6;
		}
	}
	{
		goto IL_0426;
	}

IL_0151:
	{
		String_t* L_31 = V_1;
		bool L_32;
		L_32 = String_op_Equality_m50B3548E4AC232558190B0052877B290AA1D436A((String_t*)L_31, (String_t*)_stringLiteral82BECCAD895076775062861CDB46AADEF913D969, /*hidden argument*/NULL);
		if (L_32)
		{
			goto IL_02cd;
		}
	}
	{
		goto IL_0426;
	}

IL_0166:
	{
		String_t* L_33 = V_1;
		bool L_34;
		L_34 = String_op_Equality_m50B3548E4AC232558190B0052877B290AA1D436A((String_t*)L_33, (String_t*)_stringLiteral1228466552C1791B2019A329AFE94665D441168A, /*hidden argument*/NULL);
		if (L_34)
		{
			goto IL_02df;
		}
	}
	{
		goto IL_0426;
	}

IL_017b:
	{
		String_t* L_35 = V_1;
		bool L_36;
		L_36 = String_op_Equality_m50B3548E4AC232558190B0052877B290AA1D436A((String_t*)L_35, (String_t*)_stringLiteralBD49F93A7BC78A69E385CEC0E78F434BD2845A17, /*hidden argument*/NULL);
		if (L_36)
		{
			goto IL_02f6;
		}
	}
	{
		goto IL_0426;
	}

IL_0190:
	{
		String_t* L_37 = V_1;
		bool L_38;
		L_38 = String_op_Equality_m50B3548E4AC232558190B0052877B290AA1D436A((String_t*)L_37, (String_t*)_stringLiteralED1F119527A0BCA45125EF8E0F719985DA86C0E1, /*hidden argument*/NULL);
		if (L_38)
		{
			goto IL_030d;
		}
	}
	{
		goto IL_0426;
	}

IL_01a5:
	{
		String_t* L_39 = V_1;
		bool L_40;
		L_40 = String_op_Equality_m50B3548E4AC232558190B0052877B290AA1D436A((String_t*)L_39, (String_t*)_stringLiteral8C9F18A4F030B96447955FBBA1A99FFC43B5D8E0, /*hidden argument*/NULL);
		if (L_40)
		{
			goto IL_0324;
		}
	}
	{
		goto IL_0426;
	}

IL_01ba:
	{
		String_t* L_41 = V_1;
		bool L_42;
		L_42 = String_op_Equality_m50B3548E4AC232558190B0052877B290AA1D436A((String_t*)L_41, (String_t*)_stringLiteralFC341A1966AF28A9A7A26EDFB78ABBF7DE4D0E1F, /*hidden argument*/NULL);
		if (L_42)
		{
			goto IL_033b;
		}
	}
	{
		goto IL_0426;
	}

IL_01cf:
	{
		String_t* L_43 = V_1;
		bool L_44;
		L_44 = String_op_Equality_m50B3548E4AC232558190B0052877B290AA1D436A((String_t*)L_43, (String_t*)_stringLiteralE8744A8B8BD390EB66CA0CAE2376C973E6904FFB, /*hidden argument*/NULL);
		if (L_44)
		{
			goto IL_0352;
		}
	}
	{
		goto IL_0426;
	}

IL_01e4:
	{
		String_t* L_45 = V_1;
		bool L_46;
		L_46 = String_op_Equality_m50B3548E4AC232558190B0052877B290AA1D436A((String_t*)L_45, (String_t*)_stringLiteralF9BE17D634D1B07BCDCDA77A87710C946D81307B, /*hidden argument*/NULL);
		if (L_46)
		{
			goto IL_0369;
		}
	}
	{
		goto IL_0426;
	}

IL_01f9:
	{
		String_t* L_47 = V_1;
		bool L_48;
		L_48 = String_op_Equality_m50B3548E4AC232558190B0052877B290AA1D436A((String_t*)L_47, (String_t*)_stringLiteralFA5EC7168E9633DAAEAA255ECB55030EA60F064F, /*hidden argument*/NULL);
		if (L_48)
		{
			goto IL_0380;
		}
	}
	{
		goto IL_0426;
	}

IL_020e:
	{
		String_t* L_49 = V_1;
		bool L_50;
		L_50 = String_op_Equality_m50B3548E4AC232558190B0052877B290AA1D436A((String_t*)L_49, (String_t*)_stringLiteralEB0A157666700D8227FD4B66A26FDC02035E89BF, /*hidden argument*/NULL);
		if (L_50)
		{
			goto IL_0392;
		}
	}
	{
		goto IL_0426;
	}

IL_0223:
	{
		String_t* L_51 = V_1;
		bool L_52;
		L_52 = String_op_Equality_m50B3548E4AC232558190B0052877B290AA1D436A((String_t*)L_51, (String_t*)_stringLiteral8E54BB51E569CB6A8D3C45D8AEF883A1559C1C0E, /*hidden argument*/NULL);
		if (L_52)
		{
			goto IL_03a4;
		}
	}
	{
		goto IL_0426;
	}

IL_0238:
	{
		String_t* L_53 = V_1;
		bool L_54;
		L_54 = String_op_Equality_m50B3548E4AC232558190B0052877B290AA1D436A((String_t*)L_53, (String_t*)_stringLiteral60E56797D122AE71D3774956F66C6EEB9EA22C05, /*hidden argument*/NULL);
		if (L_54)
		{
			goto IL_03b3;
		}
	}
	{
		goto IL_0426;
	}

IL_024d:
	{
		String_t* L_55 = V_1;
		bool L_56;
		L_56 = String_op_Equality_m50B3548E4AC232558190B0052877B290AA1D436A((String_t*)L_55, (String_t*)_stringLiteral01837E2252AC8026A5EA3567A663017A662FBB70, /*hidden argument*/NULL);
		if (L_56)
		{
			goto IL_03c2;
		}
	}
	{
		goto IL_0426;
	}

IL_0262:
	{
		String_t* L_57 = V_1;
		bool L_58;
		L_58 = String_op_Equality_m50B3548E4AC232558190B0052877B290AA1D436A((String_t*)L_57, (String_t*)_stringLiteralF66E9083C67855AB6EBB4B74342E385A72AACE32, /*hidden argument*/NULL);
		if (L_58)
		{
			goto IL_03d6;
		}
	}
	{
		goto IL_0426;
	}

IL_0277:
	{
		String_t* L_59 = V_1;
		bool L_60;
		L_60 = String_op_Equality_m50B3548E4AC232558190B0052877B290AA1D436A((String_t*)L_59, (String_t*)_stringLiteral91811EE149061D28B38320E2430CE8888AD6398B, /*hidden argument*/NULL);
		if (L_60)
		{
			goto IL_03ea;
		}
	}
	{
		goto IL_0426;
	}

IL_028c:
	{
		String_t* L_61 = V_1;
		bool L_62;
		L_62 = String_op_Equality_m50B3548E4AC232558190B0052877B290AA1D436A((String_t*)L_61, (String_t*)_stringLiteral6686C366F645244186604A3DA4B9A58012A85F1B, /*hidden argument*/NULL);
		if (L_62)
		{
			goto IL_03fe;
		}
	}
	{
		goto IL_0426;
	}

IL_02a1:
	{
		String_t* L_63 = V_1;
		bool L_64;
		L_64 = String_op_Equality_m50B3548E4AC232558190B0052877B290AA1D436A((String_t*)L_63, (String_t*)_stringLiteralCA1B66E295BD92E9FD3B6C708F09CA69A50BEFD1, /*hidden argument*/NULL);
		if (L_64)
		{
			goto IL_0412;
		}
	}
	{
		goto IL_0426;
	}

IL_02b6:
	{
		// instance.enabled = reader.Read<System.Boolean>(ES3Type_bool.Instance);
		ES3Reader_t2780AF8AA61DA2A817115CEF8612AC0E494D03C9 * L_65 = ___reader0;
		IL2CPP_RUNTIME_CLASS_INIT(ES3Type_bool_t8F309F7B9CC735FF1DEE68081B6E3CAB367745F4_il2cpp_TypeInfo_var);
		ES3Type_t8FBECB7AE75168648B9524E0C2A38DAD4555421D * L_66 = ((ES3Type_bool_t8F309F7B9CC735FF1DEE68081B6E3CAB367745F4_StaticFields*)il2cpp_codegen_static_fields_for(ES3Type_bool_t8F309F7B9CC735FF1DEE68081B6E3CAB367745F4_il2cpp_TypeInfo_var))->get_Instance_12();
		NullCheck((ES3Reader_t2780AF8AA61DA2A817115CEF8612AC0E494D03C9 *)L_65);
		bool L_67;
		L_67 = GenericVirtFuncInvoker1< bool, ES3Type_t8FBECB7AE75168648B9524E0C2A38DAD4555421D * >::Invoke(ES3Reader_Read_TisBoolean_t07D1E3F34E4813023D64F584DFF7B34C9D922F37_mC6D1B158268FF9B97822FF9F5B37FB1723FEDA22_RuntimeMethod_var, (ES3Reader_t2780AF8AA61DA2A817115CEF8612AC0E494D03C9 *)L_65, (ES3Type_t8FBECB7AE75168648B9524E0C2A38DAD4555421D *)L_66);
		ShapeModule_set_enabled_mF6FE8ED99E482A739C00F894235F4E2CD09B0D1E((ShapeModule_t3A89D143F5CAF357ECCE8B4A4F2BBD57816F98CA *)(ShapeModule_t3A89D143F5CAF357ECCE8B4A4F2BBD57816F98CA *)(&V_0), (bool)L_67, /*hidden argument*/NULL);
		// break;
		goto IL_042c;
	}

IL_02cd:
	{
		// instance.shapeType = reader.Read<UnityEngine.ParticleSystemShapeType>();
		ES3Reader_t2780AF8AA61DA2A817115CEF8612AC0E494D03C9 * L_68 = ___reader0;
		NullCheck((ES3Reader_t2780AF8AA61DA2A817115CEF8612AC0E494D03C9 *)L_68);
		int32_t L_69;
		L_69 = GenericVirtFuncInvoker0< int32_t >::Invoke(ES3Reader_Read_TisParticleSystemShapeType_t5B09F3A5A637F57DB1B2A6518E214AA2AA53D70C_mAE53212CB1FDDA51CF8CD0D39FCD446087DACA48_RuntimeMethod_var, (ES3Reader_t2780AF8AA61DA2A817115CEF8612AC0E494D03C9 *)L_68);
		ShapeModule_set_shapeType_mB772084527742749EB6AD690BAE47215FC71040D((ShapeModule_t3A89D143F5CAF357ECCE8B4A4F2BBD57816F98CA *)(ShapeModule_t3A89D143F5CAF357ECCE8B4A4F2BBD57816F98CA *)(&V_0), (int32_t)L_69, /*hidden argument*/NULL);
		// break;
		goto IL_042c;
	}

IL_02df:
	{
		// instance.randomDirectionAmount = reader.Read<System.Single>(ES3Type_float.Instance);
		ES3Reader_t2780AF8AA61DA2A817115CEF8612AC0E494D03C9 * L_70 = ___reader0;
		IL2CPP_RUNTIME_CLASS_INIT(ES3Type_float_tF86B773C86731BD9AD79448B860BBB178FE77644_il2cpp_TypeInfo_var);
		ES3Type_t8FBECB7AE75168648B9524E0C2A38DAD4555421D * L_71 = ((ES3Type_float_tF86B773C86731BD9AD79448B860BBB178FE77644_StaticFields*)il2cpp_codegen_static_fields_for(ES3Type_float_tF86B773C86731BD9AD79448B860BBB178FE77644_il2cpp_TypeInfo_var))->get_Instance_12();
		NullCheck((ES3Reader_t2780AF8AA61DA2A817115CEF8612AC0E494D03C9 *)L_70);
		float L_72;
		L_72 = GenericVirtFuncInvoker1< float, ES3Type_t8FBECB7AE75168648B9524E0C2A38DAD4555421D * >::Invoke(ES3Reader_Read_TisSingle_tE07797BA3C98D4CA9B5A19413C19A76688AB899E_m4A0416374498BDA042B8EB21E49B72326D6CE5F4_RuntimeMethod_var, (ES3Reader_t2780AF8AA61DA2A817115CEF8612AC0E494D03C9 *)L_70, (ES3Type_t8FBECB7AE75168648B9524E0C2A38DAD4555421D *)L_71);
		ShapeModule_set_randomDirectionAmount_m4E1BB67600D57383945F75F5A179EEEC01A76885((ShapeModule_t3A89D143F5CAF357ECCE8B4A4F2BBD57816F98CA *)(ShapeModule_t3A89D143F5CAF357ECCE8B4A4F2BBD57816F98CA *)(&V_0), (float)L_72, /*hidden argument*/NULL);
		// break;
		goto IL_042c;
	}

IL_02f6:
	{
		// instance.sphericalDirectionAmount = reader.Read<System.Single>(ES3Type_float.Instance);
		ES3Reader_t2780AF8AA61DA2A817115CEF8612AC0E494D03C9 * L_73 = ___reader0;
		IL2CPP_RUNTIME_CLASS_INIT(ES3Type_float_tF86B773C86731BD9AD79448B860BBB178FE77644_il2cpp_TypeInfo_var);
		ES3Type_t8FBECB7AE75168648B9524E0C2A38DAD4555421D * L_74 = ((ES3Type_float_tF86B773C86731BD9AD79448B860BBB178FE77644_StaticFields*)il2cpp_codegen_static_fields_for(ES3Type_float_tF86B773C86731BD9AD79448B860BBB178FE77644_il2cpp_TypeInfo_var))->get_Instance_12();
		NullCheck((ES3Reader_t2780AF8AA61DA2A817115CEF8612AC0E494D03C9 *)L_73);
		float L_75;
		L_75 = GenericVirtFuncInvoker1< float, ES3Type_t8FBECB7AE75168648B9524E0C2A38DAD4555421D * >::Invoke(ES3Reader_Read_TisSingle_tE07797BA3C98D4CA9B5A19413C19A76688AB899E_m4A0416374498BDA042B8EB21E49B72326D6CE5F4_RuntimeMethod_var, (ES3Reader_t2780AF8AA61DA2A817115CEF8612AC0E494D03C9 *)L_73, (ES3Type_t8FBECB7AE75168648B9524E0C2A38DAD4555421D *)L_74);
		ShapeModule_set_sphericalDirectionAmount_m02A9FBFF18AF24B821801DF5D833CA20A569F62B((ShapeModule_t3A89D143F5CAF357ECCE8B4A4F2BBD57816F98CA *)(ShapeModule_t3A89D143F5CAF357ECCE8B4A4F2BBD57816F98CA *)(&V_0), (float)L_75, /*hidden argument*/NULL);
		// break;
		goto IL_042c;
	}

IL_030d:
	{
		// instance.alignToDirection = reader.Read<System.Boolean>(ES3Type_bool.Instance);
		ES3Reader_t2780AF8AA61DA2A817115CEF8612AC0E494D03C9 * L_76 = ___reader0;
		IL2CPP_RUNTIME_CLASS_INIT(ES3Type_bool_t8F309F7B9CC735FF1DEE68081B6E3CAB367745F4_il2cpp_TypeInfo_var);
		ES3Type_t8FBECB7AE75168648B9524E0C2A38DAD4555421D * L_77 = ((ES3Type_bool_t8F309F7B9CC735FF1DEE68081B6E3CAB367745F4_StaticFields*)il2cpp_codegen_static_fields_for(ES3Type_bool_t8F309F7B9CC735FF1DEE68081B6E3CAB367745F4_il2cpp_TypeInfo_var))->get_Instance_12();
		NullCheck((ES3Reader_t2780AF8AA61DA2A817115CEF8612AC0E494D03C9 *)L_76);
		bool L_78;
		L_78 = GenericVirtFuncInvoker1< bool, ES3Type_t8FBECB7AE75168648B9524E0C2A38DAD4555421D * >::Invoke(ES3Reader_Read_TisBoolean_t07D1E3F34E4813023D64F584DFF7B34C9D922F37_mC6D1B158268FF9B97822FF9F5B37FB1723FEDA22_RuntimeMethod_var, (ES3Reader_t2780AF8AA61DA2A817115CEF8612AC0E494D03C9 *)L_76, (ES3Type_t8FBECB7AE75168648B9524E0C2A38DAD4555421D *)L_77);
		ShapeModule_set_alignToDirection_m396A57DCAD5F194E4DDDA0DF9C35E5508E3641BE((ShapeModule_t3A89D143F5CAF357ECCE8B4A4F2BBD57816F98CA *)(ShapeModule_t3A89D143F5CAF357ECCE8B4A4F2BBD57816F98CA *)(&V_0), (bool)L_78, /*hidden argument*/NULL);
		// break;
		goto IL_042c;
	}

IL_0324:
	{
		// instance.radius = reader.Read<System.Single>(ES3Type_float.Instance);
		ES3Reader_t2780AF8AA61DA2A817115CEF8612AC0E494D03C9 * L_79 = ___reader0;
		IL2CPP_RUNTIME_CLASS_INIT(ES3Type_float_tF86B773C86731BD9AD79448B860BBB178FE77644_il2cpp_TypeInfo_var);
		ES3Type_t8FBECB7AE75168648B9524E0C2A38DAD4555421D * L_80 = ((ES3Type_float_tF86B773C86731BD9AD79448B860BBB178FE77644_StaticFields*)il2cpp_codegen_static_fields_for(ES3Type_float_tF86B773C86731BD9AD79448B860BBB178FE77644_il2cpp_TypeInfo_var))->get_Instance_12();
		NullCheck((ES3Reader_t2780AF8AA61DA2A817115CEF8612AC0E494D03C9 *)L_79);
		float L_81;
		L_81 = GenericVirtFuncInvoker1< float, ES3Type_t8FBECB7AE75168648B9524E0C2A38DAD4555421D * >::Invoke(ES3Reader_Read_TisSingle_tE07797BA3C98D4CA9B5A19413C19A76688AB899E_m4A0416374498BDA042B8EB21E49B72326D6CE5F4_RuntimeMethod_var, (ES3Reader_t2780AF8AA61DA2A817115CEF8612AC0E494D03C9 *)L_79, (ES3Type_t8FBECB7AE75168648B9524E0C2A38DAD4555421D *)L_80);
		ShapeModule_set_radius_mFC12B15750268316924771461C09B1A311A16DEA((ShapeModule_t3A89D143F5CAF357ECCE8B4A4F2BBD57816F98CA *)(ShapeModule_t3A89D143F5CAF357ECCE8B4A4F2BBD57816F98CA *)(&V_0), (float)L_81, /*hidden argument*/NULL);
		// break;
		goto IL_042c;
	}

IL_033b:
	{
		// instance.angle = reader.Read<System.Single>(ES3Type_float.Instance);
		ES3Reader_t2780AF8AA61DA2A817115CEF8612AC0E494D03C9 * L_82 = ___reader0;
		IL2CPP_RUNTIME_CLASS_INIT(ES3Type_float_tF86B773C86731BD9AD79448B860BBB178FE77644_il2cpp_TypeInfo_var);
		ES3Type_t8FBECB7AE75168648B9524E0C2A38DAD4555421D * L_83 = ((ES3Type_float_tF86B773C86731BD9AD79448B860BBB178FE77644_StaticFields*)il2cpp_codegen_static_fields_for(ES3Type_float_tF86B773C86731BD9AD79448B860BBB178FE77644_il2cpp_TypeInfo_var))->get_Instance_12();
		NullCheck((ES3Reader_t2780AF8AA61DA2A817115CEF8612AC0E494D03C9 *)L_82);
		float L_84;
		L_84 = GenericVirtFuncInvoker1< float, ES3Type_t8FBECB7AE75168648B9524E0C2A38DAD4555421D * >::Invoke(ES3Reader_Read_TisSingle_tE07797BA3C98D4CA9B5A19413C19A76688AB899E_m4A0416374498BDA042B8EB21E49B72326D6CE5F4_RuntimeMethod_var, (ES3Reader_t2780AF8AA61DA2A817115CEF8612AC0E494D03C9 *)L_82, (ES3Type_t8FBECB7AE75168648B9524E0C2A38DAD4555421D *)L_83);
		ShapeModule_set_angle_m20629BB5FE89F2040960548B45F6EC801B1DB8AA((ShapeModule_t3A89D143F5CAF357ECCE8B4A4F2BBD57816F98CA *)(ShapeModule_t3A89D143F5CAF357ECCE8B4A4F2BBD57816F98CA *)(&V_0), (float)L_84, /*hidden argument*/NULL);
		// break;
		goto IL_042c;
	}

IL_0352:
	{
		// instance.length = reader.Read<System.Single>(ES3Type_float.Instance);
		ES3Reader_t2780AF8AA61DA2A817115CEF8612AC0E494D03C9 * L_85 = ___reader0;
		IL2CPP_RUNTIME_CLASS_INIT(ES3Type_float_tF86B773C86731BD9AD79448B860BBB178FE77644_il2cpp_TypeInfo_var);
		ES3Type_t8FBECB7AE75168648B9524E0C2A38DAD4555421D * L_86 = ((ES3Type_float_tF86B773C86731BD9AD79448B860BBB178FE77644_StaticFields*)il2cpp_codegen_static_fields_for(ES3Type_float_tF86B773C86731BD9AD79448B860BBB178FE77644_il2cpp_TypeInfo_var))->get_Instance_12();
		NullCheck((ES3Reader_t2780AF8AA61DA2A817115CEF8612AC0E494D03C9 *)L_85);
		float L_87;
		L_87 = GenericVirtFuncInvoker1< float, ES3Type_t8FBECB7AE75168648B9524E0C2A38DAD4555421D * >::Invoke(ES3Reader_Read_TisSingle_tE07797BA3C98D4CA9B5A19413C19A76688AB899E_m4A0416374498BDA042B8EB21E49B72326D6CE5F4_RuntimeMethod_var, (ES3Reader_t2780AF8AA61DA2A817115CEF8612AC0E494D03C9 *)L_85, (ES3Type_t8FBECB7AE75168648B9524E0C2A38DAD4555421D *)L_86);
		ShapeModule_set_length_m744975258664B53F38A8B8BE38A86A0FFDD85BC7((ShapeModule_t3A89D143F5CAF357ECCE8B4A4F2BBD57816F98CA *)(ShapeModule_t3A89D143F5CAF357ECCE8B4A4F2BBD57816F98CA *)(&V_0), (float)L_87, /*hidden argument*/NULL);
		// break;
		goto IL_042c;
	}

IL_0369:
	{
		// instance.scale = reader.Read<UnityEngine.Vector3>(ES3Type_Vector3.Instance);
		ES3Reader_t2780AF8AA61DA2A817115CEF8612AC0E494D03C9 * L_88 = ___reader0;
		IL2CPP_RUNTIME_CLASS_INIT(ES3Type_Vector3_tA9144E81A20D2F28726F02DE1AE6CD3F9C12B54F_il2cpp_TypeInfo_var);
		ES3Type_t8FBECB7AE75168648B9524E0C2A38DAD4555421D * L_89 = ((ES3Type_Vector3_tA9144E81A20D2F28726F02DE1AE6CD3F9C12B54F_StaticFields*)il2cpp_codegen_static_fields_for(ES3Type_Vector3_tA9144E81A20D2F28726F02DE1AE6CD3F9C12B54F_il2cpp_TypeInfo_var))->get_Instance_12();
		NullCheck((ES3Reader_t2780AF8AA61DA2A817115CEF8612AC0E494D03C9 *)L_88);
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_90;
		L_90 = GenericVirtFuncInvoker1< Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E , ES3Type_t8FBECB7AE75168648B9524E0C2A38DAD4555421D * >::Invoke(ES3Reader_Read_TisVector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E_mBA4CD9D0F45E78BA43FE2DB8EC33CC3A5433DE15_RuntimeMethod_var, (ES3Reader_t2780AF8AA61DA2A817115CEF8612AC0E494D03C9 *)L_88, (ES3Type_t8FBECB7AE75168648B9524E0C2A38DAD4555421D *)L_89);
		ShapeModule_set_scale_m2951583898F18878E6F238100045072F44AD9158((ShapeModule_t3A89D143F5CAF357ECCE8B4A4F2BBD57816F98CA *)(ShapeModule_t3A89D143F5CAF357ECCE8B4A4F2BBD57816F98CA *)(&V_0), (Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E )L_90, /*hidden argument*/NULL);
		// break;
		goto IL_042c;
	}

IL_0380:
	{
		// instance.meshShapeType = reader.Read<UnityEngine.ParticleSystemMeshShapeType>();
		ES3Reader_t2780AF8AA61DA2A817115CEF8612AC0E494D03C9 * L_91 = ___reader0;
		NullCheck((ES3Reader_t2780AF8AA61DA2A817115CEF8612AC0E494D03C9 *)L_91);
		int32_t L_92;
		L_92 = GenericVirtFuncInvoker0< int32_t >::Invoke(ES3Reader_Read_TisParticleSystemMeshShapeType_t7C9518403F30CC7AF7F9124FD61EC1187B42EFD2_mF1A19C0F8BBA6E44737F158F3BE4CC478F623F10_RuntimeMethod_var, (ES3Reader_t2780AF8AA61DA2A817115CEF8612AC0E494D03C9 *)L_91);
		ShapeModule_set_meshShapeType_m5DAD94B71F2110F45E454C30DE052153129891C2((ShapeModule_t3A89D143F5CAF357ECCE8B4A4F2BBD57816F98CA *)(ShapeModule_t3A89D143F5CAF357ECCE8B4A4F2BBD57816F98CA *)(&V_0), (int32_t)L_92, /*hidden argument*/NULL);
		// break;
		goto IL_042c;
	}

IL_0392:
	{
		// instance.mesh = reader.Read<UnityEngine.Mesh>();
		ES3Reader_t2780AF8AA61DA2A817115CEF8612AC0E494D03C9 * L_93 = ___reader0;
		NullCheck((ES3Reader_t2780AF8AA61DA2A817115CEF8612AC0E494D03C9 *)L_93);
		Mesh_t2F5992DBA650D5862B43D3823ACD997132A57DA6 * L_94;
		L_94 = GenericVirtFuncInvoker0< Mesh_t2F5992DBA650D5862B43D3823ACD997132A57DA6 * >::Invoke(ES3Reader_Read_TisMesh_t2F5992DBA650D5862B43D3823ACD997132A57DA6_m65DF5BA41642A39B77979CC49472E4DE7A1660F9_RuntimeMethod_var, (ES3Reader_t2780AF8AA61DA2A817115CEF8612AC0E494D03C9 *)L_93);
		ShapeModule_set_mesh_mD3E276A9E45442E75AD8A9AA4BD88C9112BD77CA((ShapeModule_t3A89D143F5CAF357ECCE8B4A4F2BBD57816F98CA *)(ShapeModule_t3A89D143F5CAF357ECCE8B4A4F2BBD57816F98CA *)(&V_0), (Mesh_t2F5992DBA650D5862B43D3823ACD997132A57DA6 *)L_94, /*hidden argument*/NULL);
		// break;
		goto IL_042c;
	}

IL_03a4:
	{
		// instance.meshRenderer = reader.Read<UnityEngine.MeshRenderer>();
		ES3Reader_t2780AF8AA61DA2A817115CEF8612AC0E494D03C9 * L_95 = ___reader0;
		NullCheck((ES3Reader_t2780AF8AA61DA2A817115CEF8612AC0E494D03C9 *)L_95);
		MeshRenderer_tCD983A2F635E12BCB0BAA2E635D96A318757908B * L_96;
		L_96 = GenericVirtFuncInvoker0< MeshRenderer_tCD983A2F635E12BCB0BAA2E635D96A318757908B * >::Invoke(ES3Reader_Read_TisMeshRenderer_tCD983A2F635E12BCB0BAA2E635D96A318757908B_m773CE5481730EBCC6A377F918946EB11B304050A_RuntimeMethod_var, (ES3Reader_t2780AF8AA61DA2A817115CEF8612AC0E494D03C9 *)L_95);
		ShapeModule_set_meshRenderer_m334D69AC8C29F5E393732D62BBB3645296614059((ShapeModule_t3A89D143F5CAF357ECCE8B4A4F2BBD57816F98CA *)(ShapeModule_t3A89D143F5CAF357ECCE8B4A4F2BBD57816F98CA *)(&V_0), (MeshRenderer_tCD983A2F635E12BCB0BAA2E635D96A318757908B *)L_96, /*hidden argument*/NULL);
		// break;
		goto IL_042c;
	}

IL_03b3:
	{
		// instance.skinnedMeshRenderer = reader.Read<UnityEngine.SkinnedMeshRenderer>();
		ES3Reader_t2780AF8AA61DA2A817115CEF8612AC0E494D03C9 * L_97 = ___reader0;
		NullCheck((ES3Reader_t2780AF8AA61DA2A817115CEF8612AC0E494D03C9 *)L_97);
		SkinnedMeshRenderer_t126F4D6010E0F4B2685A7817B0A9171805D8F496 * L_98;
		L_98 = GenericVirtFuncInvoker0< SkinnedMeshRenderer_t126F4D6010E0F4B2685A7817B0A9171805D8F496 * >::Invoke(ES3Reader_Read_TisSkinnedMeshRenderer_t126F4D6010E0F4B2685A7817B0A9171805D8F496_m23D6569D5CE7B3E1C67BDB470CDEDEF25A835F25_RuntimeMethod_var, (ES3Reader_t2780AF8AA61DA2A817115CEF8612AC0E494D03C9 *)L_97);
		ShapeModule_set_skinnedMeshRenderer_m9DEF9CD332D3F10BE7D99EFECC0971FB5AE83F56((ShapeModule_t3A89D143F5CAF357ECCE8B4A4F2BBD57816F98CA *)(ShapeModule_t3A89D143F5CAF357ECCE8B4A4F2BBD57816F98CA *)(&V_0), (SkinnedMeshRenderer_t126F4D6010E0F4B2685A7817B0A9171805D8F496 *)L_98, /*hidden argument*/NULL);
		// break;
		goto IL_042c;
	}

IL_03c2:
	{
		// instance.useMeshMaterialIndex = reader.Read<System.Boolean>(ES3Type_bool.Instance);
		ES3Reader_t2780AF8AA61DA2A817115CEF8612AC0E494D03C9 * L_99 = ___reader0;
		IL2CPP_RUNTIME_CLASS_INIT(ES3Type_bool_t8F309F7B9CC735FF1DEE68081B6E3CAB367745F4_il2cpp_TypeInfo_var);
		ES3Type_t8FBECB7AE75168648B9524E0C2A38DAD4555421D * L_100 = ((ES3Type_bool_t8F309F7B9CC735FF1DEE68081B6E3CAB367745F4_StaticFields*)il2cpp_codegen_static_fields_for(ES3Type_bool_t8F309F7B9CC735FF1DEE68081B6E3CAB367745F4_il2cpp_TypeInfo_var))->get_Instance_12();
		NullCheck((ES3Reader_t2780AF8AA61DA2A817115CEF8612AC0E494D03C9 *)L_99);
		bool L_101;
		L_101 = GenericVirtFuncInvoker1< bool, ES3Type_t8FBECB7AE75168648B9524E0C2A38DAD4555421D * >::Invoke(ES3Reader_Read_TisBoolean_t07D1E3F34E4813023D64F584DFF7B34C9D922F37_mC6D1B158268FF9B97822FF9F5B37FB1723FEDA22_RuntimeMethod_var, (ES3Reader_t2780AF8AA61DA2A817115CEF8612AC0E494D03C9 *)L_99, (ES3Type_t8FBECB7AE75168648B9524E0C2A38DAD4555421D *)L_100);
		ShapeModule_set_useMeshMaterialIndex_m6130573C0966ED3B5C590665747305BCEFD3F901((ShapeModule_t3A89D143F5CAF357ECCE8B4A4F2BBD57816F98CA *)(ShapeModule_t3A89D143F5CAF357ECCE8B4A4F2BBD57816F98CA *)(&V_0), (bool)L_101, /*hidden argument*/NULL);
		// break;
		goto IL_042c;
	}

IL_03d6:
	{
		// instance.meshMaterialIndex = reader.Read<System.Int32>(ES3Type_int.Instance);
		ES3Reader_t2780AF8AA61DA2A817115CEF8612AC0E494D03C9 * L_102 = ___reader0;
		IL2CPP_RUNTIME_CLASS_INIT(ES3Type_int_tF64C15D40AD0CC7C15BCD1CEC3C5C6BF837BD167_il2cpp_TypeInfo_var);
		ES3Type_t8FBECB7AE75168648B9524E0C2A38DAD4555421D * L_103 = ((ES3Type_int_tF64C15D40AD0CC7C15BCD1CEC3C5C6BF837BD167_StaticFields*)il2cpp_codegen_static_fields_for(ES3Type_int_tF64C15D40AD0CC7C15BCD1CEC3C5C6BF837BD167_il2cpp_TypeInfo_var))->get_Instance_12();
		NullCheck((ES3Reader_t2780AF8AA61DA2A817115CEF8612AC0E494D03C9 *)L_102);
		int32_t L_104;
		L_104 = GenericVirtFuncInvoker1< int32_t, ES3Type_t8FBECB7AE75168648B9524E0C2A38DAD4555421D * >::Invoke(ES3Reader_Read_TisInt32_tFDE5F8CD43D10453F6A2E0C77FE48C6CC7009046_m2B74AA6627F5B1D21171D56C42F71DE5A7C1B4A6_RuntimeMethod_var, (ES3Reader_t2780AF8AA61DA2A817115CEF8612AC0E494D03C9 *)L_102, (ES3Type_t8FBECB7AE75168648B9524E0C2A38DAD4555421D *)L_103);
		ShapeModule_set_meshMaterialIndex_m1205DDEB353204D5941654FB79164AD5BAF0A59C((ShapeModule_t3A89D143F5CAF357ECCE8B4A4F2BBD57816F98CA *)(ShapeModule_t3A89D143F5CAF357ECCE8B4A4F2BBD57816F98CA *)(&V_0), (int32_t)L_104, /*hidden argument*/NULL);
		// break;
		goto IL_042c;
	}

IL_03ea:
	{
		// instance.useMeshColors = reader.Read<System.Boolean>(ES3Type_bool.Instance);
		ES3Reader_t2780AF8AA61DA2A817115CEF8612AC0E494D03C9 * L_105 = ___reader0;
		IL2CPP_RUNTIME_CLASS_INIT(ES3Type_bool_t8F309F7B9CC735FF1DEE68081B6E3CAB367745F4_il2cpp_TypeInfo_var);
		ES3Type_t8FBECB7AE75168648B9524E0C2A38DAD4555421D * L_106 = ((ES3Type_bool_t8F309F7B9CC735FF1DEE68081B6E3CAB367745F4_StaticFields*)il2cpp_codegen_static_fields_for(ES3Type_bool_t8F309F7B9CC735FF1DEE68081B6E3CAB367745F4_il2cpp_TypeInfo_var))->get_Instance_12();
		NullCheck((ES3Reader_t2780AF8AA61DA2A817115CEF8612AC0E494D03C9 *)L_105);
		bool L_107;
		L_107 = GenericVirtFuncInvoker1< bool, ES3Type_t8FBECB7AE75168648B9524E0C2A38DAD4555421D * >::Invoke(ES3Reader_Read_TisBoolean_t07D1E3F34E4813023D64F584DFF7B34C9D922F37_mC6D1B158268FF9B97822FF9F5B37FB1723FEDA22_RuntimeMethod_var, (ES3Reader_t2780AF8AA61DA2A817115CEF8612AC0E494D03C9 *)L_105, (ES3Type_t8FBECB7AE75168648B9524E0C2A38DAD4555421D *)L_106);
		ShapeModule_set_useMeshColors_m071D000F330805B1EBCF09B40AC4EB9942EB9F57((ShapeModule_t3A89D143F5CAF357ECCE8B4A4F2BBD57816F98CA *)(ShapeModule_t3A89D143F5CAF357ECCE8B4A4F2BBD57816F98CA *)(&V_0), (bool)L_107, /*hidden argument*/NULL);
		// break;
		goto IL_042c;
	}

IL_03fe:
	{
		// instance.normalOffset = reader.Read<System.Single>(ES3Type_float.Instance);
		ES3Reader_t2780AF8AA61DA2A817115CEF8612AC0E494D03C9 * L_108 = ___reader0;
		IL2CPP_RUNTIME_CLASS_INIT(ES3Type_float_tF86B773C86731BD9AD79448B860BBB178FE77644_il2cpp_TypeInfo_var);
		ES3Type_t8FBECB7AE75168648B9524E0C2A38DAD4555421D * L_109 = ((ES3Type_float_tF86B773C86731BD9AD79448B860BBB178FE77644_StaticFields*)il2cpp_codegen_static_fields_for(ES3Type_float_tF86B773C86731BD9AD79448B860BBB178FE77644_il2cpp_TypeInfo_var))->get_Instance_12();
		NullCheck((ES3Reader_t2780AF8AA61DA2A817115CEF8612AC0E494D03C9 *)L_108);
		float L_110;
		L_110 = GenericVirtFuncInvoker1< float, ES3Type_t8FBECB7AE75168648B9524E0C2A38DAD4555421D * >::Invoke(ES3Reader_Read_TisSingle_tE07797BA3C98D4CA9B5A19413C19A76688AB899E_m4A0416374498BDA042B8EB21E49B72326D6CE5F4_RuntimeMethod_var, (ES3Reader_t2780AF8AA61DA2A817115CEF8612AC0E494D03C9 *)L_108, (ES3Type_t8FBECB7AE75168648B9524E0C2A38DAD4555421D *)L_109);
		ShapeModule_set_normalOffset_m81A315286BAA5F52AAED6B317734FB03B2DCE9FD((ShapeModule_t3A89D143F5CAF357ECCE8B4A4F2BBD57816F98CA *)(ShapeModule_t3A89D143F5CAF357ECCE8B4A4F2BBD57816F98CA *)(&V_0), (float)L_110, /*hidden argument*/NULL);
		// break;
		goto IL_042c;
	}

IL_0412:
	{
		// instance.arc = reader.Read<System.Single>(ES3Type_float.Instance);
		ES3Reader_t2780AF8AA61DA2A817115CEF8612AC0E494D03C9 * L_111 = ___reader0;
		IL2CPP_RUNTIME_CLASS_INIT(ES3Type_float_tF86B773C86731BD9AD79448B860BBB178FE77644_il2cpp_TypeInfo_var);
		ES3Type_t8FBECB7AE75168648B9524E0C2A38DAD4555421D * L_112 = ((ES3Type_float_tF86B773C86731BD9AD79448B860BBB178FE77644_StaticFields*)il2cpp_codegen_static_fields_for(ES3Type_float_tF86B773C86731BD9AD79448B860BBB178FE77644_il2cpp_TypeInfo_var))->get_Instance_12();
		NullCheck((ES3Reader_t2780AF8AA61DA2A817115CEF8612AC0E494D03C9 *)L_111);
		float L_113;
		L_113 = GenericVirtFuncInvoker1< float, ES3Type_t8FBECB7AE75168648B9524E0C2A38DAD4555421D * >::Invoke(ES3Reader_Read_TisSingle_tE07797BA3C98D4CA9B5A19413C19A76688AB899E_m4A0416374498BDA042B8EB21E49B72326D6CE5F4_RuntimeMethod_var, (ES3Reader_t2780AF8AA61DA2A817115CEF8612AC0E494D03C9 *)L_111, (ES3Type_t8FBECB7AE75168648B9524E0C2A38DAD4555421D *)L_112);
		ShapeModule_set_arc_m4A2578EBD4747DB3D9ED74AB53E488872CFA541F((ShapeModule_t3A89D143F5CAF357ECCE8B4A4F2BBD57816F98CA *)(ShapeModule_t3A89D143F5CAF357ECCE8B4A4F2BBD57816F98CA *)(&V_0), (float)L_113, /*hidden argument*/NULL);
		// break;
		goto IL_042c;
	}

IL_0426:
	{
		// reader.Skip();
		ES3Reader_t2780AF8AA61DA2A817115CEF8612AC0E494D03C9 * L_114 = ___reader0;
		NullCheck((ES3Reader_t2780AF8AA61DA2A817115CEF8612AC0E494D03C9 *)L_114);
		VirtActionInvoker0::Invoke(41 /* System.Void ES3Reader::Skip() */, (ES3Reader_t2780AF8AA61DA2A817115CEF8612AC0E494D03C9 *)L_114);
	}

IL_042c:
	{
		// while((propertyName = reader.ReadPropertyName()) != null)
		ES3Reader_t2780AF8AA61DA2A817115CEF8612AC0E494D03C9 * L_115 = ___reader0;
		NullCheck((ES3Reader_t2780AF8AA61DA2A817115CEF8612AC0E494D03C9 *)L_115);
		String_t* L_116;
		L_116 = VirtFuncInvoker0< String_t* >::Invoke(21 /* System.String ES3Reader::ReadPropertyName() */, (ES3Reader_t2780AF8AA61DA2A817115CEF8612AC0E494D03C9 *)L_115);
		String_t* L_117 = (String_t*)L_116;
		V_1 = (String_t*)L_117;
		if (L_117)
		{
			goto IL_000c;
		}
	}
	{
		// }
		return;
	}
}
// System.Void ES3Types.ES3Type_ShapeModule::ReadInto<UnityEngine.ParticleSystem/MinMaxGradient>(ES3Reader,System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ES3Type_ShapeModule_ReadInto_TisMinMaxGradient_tF4530B26F29D9635D670A33B9EE581EAC48C12B7_mA38A83FC78492CB489E89829513C21EA3A27AA5F_gshared (ES3Type_ShapeModule_t67010A74D4F69A245D5F06976239CAB4279B5377 * __this, ES3Reader_t2780AF8AA61DA2A817115CEF8612AC0E494D03C9 * ___reader0, RuntimeObject * ___obj1, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ES3Reader_Read_TisBoolean_t07D1E3F34E4813023D64F584DFF7B34C9D922F37_mC6D1B158268FF9B97822FF9F5B37FB1723FEDA22_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ES3Reader_Read_TisInt32_tFDE5F8CD43D10453F6A2E0C77FE48C6CC7009046_m2B74AA6627F5B1D21171D56C42F71DE5A7C1B4A6_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ES3Reader_Read_TisMeshRenderer_tCD983A2F635E12BCB0BAA2E635D96A318757908B_m773CE5481730EBCC6A377F918946EB11B304050A_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ES3Reader_Read_TisMesh_t2F5992DBA650D5862B43D3823ACD997132A57DA6_m65DF5BA41642A39B77979CC49472E4DE7A1660F9_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ES3Reader_Read_TisParticleSystemMeshShapeType_t7C9518403F30CC7AF7F9124FD61EC1187B42EFD2_mF1A19C0F8BBA6E44737F158F3BE4CC478F623F10_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ES3Reader_Read_TisParticleSystemShapeType_t5B09F3A5A637F57DB1B2A6518E214AA2AA53D70C_mAE53212CB1FDDA51CF8CD0D39FCD446087DACA48_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ES3Reader_Read_TisSingle_tE07797BA3C98D4CA9B5A19413C19A76688AB899E_m4A0416374498BDA042B8EB21E49B72326D6CE5F4_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ES3Reader_Read_TisSkinnedMeshRenderer_t126F4D6010E0F4B2685A7817B0A9171805D8F496_m23D6569D5CE7B3E1C67BDB470CDEDEF25A835F25_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ES3Reader_Read_TisVector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E_mBA4CD9D0F45E78BA43FE2DB8EC33CC3A5433DE15_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ES3Type_Vector3_tA9144E81A20D2F28726F02DE1AE6CD3F9C12B54F_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ES3Type_bool_t8F309F7B9CC735FF1DEE68081B6E3CAB367745F4_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ES3Type_float_tF86B773C86731BD9AD79448B860BBB178FE77644_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ES3Type_int_tF64C15D40AD0CC7C15BCD1CEC3C5C6BF837BD167_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ShapeModule_t3A89D143F5CAF357ECCE8B4A4F2BBD57816F98CA_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral01837E2252AC8026A5EA3567A663017A662FBB70);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral1228466552C1791B2019A329AFE94665D441168A);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral60E56797D122AE71D3774956F66C6EEB9EA22C05);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral6686C366F645244186604A3DA4B9A58012A85F1B);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral82BECCAD895076775062861CDB46AADEF913D969);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral8C9F18A4F030B96447955FBBA1A99FFC43B5D8E0);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral8E54BB51E569CB6A8D3C45D8AEF883A1559C1C0E);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral91811EE149061D28B38320E2430CE8888AD6398B);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralBD49F93A7BC78A69E385CEC0E78F434BD2845A17);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralCA1B66E295BD92E9FD3B6C708F09CA69A50BEFD1);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralE8744A8B8BD390EB66CA0CAE2376C973E6904FFB);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralEB0A157666700D8227FD4B66A26FDC02035E89BF);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralED1F119527A0BCA45125EF8E0F719985DA86C0E1);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralF66E9083C67855AB6EBB4B74342E385A72AACE32);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralF9BE17D634D1B07BCDCDA77A87710C946D81307B);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralF9D225733E1D10F9344C755C4A9C0870CD1DE97B);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralFA5EC7168E9633DAAEAA255ECB55030EA60F064F);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralFC341A1966AF28A9A7A26EDFB78ABBF7DE4D0E1F);
		s_Il2CppMethodInitialized = true;
	}
	ShapeModule_t3A89D143F5CAF357ECCE8B4A4F2BBD57816F98CA  V_0;
	memset((&V_0), 0, sizeof(V_0));
	String_t* V_1 = NULL;
	uint32_t V_2 = 0;
	{
		// var instance = (UnityEngine.ParticleSystem.ShapeModule)obj;
		RuntimeObject * L_0 = ___obj1;
		V_0 = (ShapeModule_t3A89D143F5CAF357ECCE8B4A4F2BBD57816F98CA )((*(ShapeModule_t3A89D143F5CAF357ECCE8B4A4F2BBD57816F98CA *)((ShapeModule_t3A89D143F5CAF357ECCE8B4A4F2BBD57816F98CA *)UnBox(L_0, ShapeModule_t3A89D143F5CAF357ECCE8B4A4F2BBD57816F98CA_il2cpp_TypeInfo_var))));
		goto IL_042c;
	}

IL_000c:
	{
		String_t* L_1 = V_1;
		if (!L_1)
		{
			goto IL_0426;
		}
	}
	{
		String_t* L_2 = V_1;
		uint32_t L_3;
		L_3 = U3CPrivateImplementationDetailsU3E_ComputeStringHash_m3ADC1F612F9EE3DD518E6F0023A0DE0EE2B120A7((String_t*)L_2, /*hidden argument*/NULL);
		V_2 = (uint32_t)L_3;
		uint32_t L_4 = V_2;
		if ((!(((uint32_t)L_4) <= ((uint32_t)((int32_t)-2104025999)))))
		{
			goto IL_00b3;
		}
	}
	{
		uint32_t L_5 = V_2;
		if ((!(((uint32_t)L_5) <= ((uint32_t)((int32_t)666576729)))))
		{
			goto IL_006a;
		}
	}
	{
		uint32_t L_6 = V_2;
		if ((!(((uint32_t)L_6) <= ((uint32_t)((int32_t)49525662)))))
		{
			goto IL_004f;
		}
	}
	{
		uint32_t L_7 = V_2;
		if ((((int32_t)L_7) == ((int32_t)((int32_t)24602224))))
		{
			goto IL_024d;
		}
	}
	{
		uint32_t L_8 = V_2;
		if ((((int32_t)L_8) == ((int32_t)((int32_t)49525662))))
		{
			goto IL_013c;
		}
	}
	{
		goto IL_0426;
	}

IL_004f:
	{
		uint32_t L_9 = V_2;
		if ((((int32_t)L_9) == ((int32_t)((int32_t)230313139))))
		{
			goto IL_01a5;
		}
	}
	{
		uint32_t L_10 = V_2;
		if ((((int32_t)L_10) == ((int32_t)((int32_t)666576729))))
		{
			goto IL_01f9;
		}
	}
	{
		goto IL_0426;
	}

IL_006a:
	{
		uint32_t L_11 = V_2;
		if ((!(((uint32_t)L_11) <= ((uint32_t)((int32_t)955488309)))))
		{
			goto IL_008d;
		}
	}
	{
		uint32_t L_12 = V_2;
		if ((((int32_t)L_12) == ((int32_t)((int32_t)923624301))))
		{
			goto IL_0238;
		}
	}
	{
		uint32_t L_13 = V_2;
		if ((((int32_t)L_13) == ((int32_t)((int32_t)955488309))))
		{
			goto IL_028c;
		}
	}
	{
		goto IL_0426;
	}

IL_008d:
	{
		uint32_t L_14 = V_2;
		if ((((int32_t)L_14) == ((int32_t)((int32_t)980363995))))
		{
			goto IL_02a1;
		}
	}
	{
		uint32_t L_15 = V_2;
		if ((((int32_t)L_15) == ((int32_t)((int32_t)985988853))))
		{
			goto IL_017b;
		}
	}
	{
		uint32_t L_16 = V_2;
		if ((((int32_t)L_16) == ((int32_t)((int32_t)-2104025999))))
		{
			goto IL_01e4;
		}
	}
	{
		goto IL_0426;
	}

IL_00b3:
	{
		uint32_t L_17 = V_2;
		if ((!(((uint32_t)L_17) <= ((uint32_t)((int32_t)-1473810612)))))
		{
			goto IL_00f6;
		}
	}
	{
		uint32_t L_18 = V_2;
		if ((!(((uint32_t)L_18) <= ((uint32_t)((int32_t)-1726928010)))))
		{
			goto IL_00db;
		}
	}
	{
		uint32_t L_19 = V_2;
		if ((((int32_t)L_19) == ((int32_t)((int32_t)-2083506667))))
		{
			goto IL_01cf;
		}
	}
	{
		uint32_t L_20 = V_2;
		if ((((int32_t)L_20) == ((int32_t)((int32_t)-1726928010))))
		{
			goto IL_0151;
		}
	}
	{
		goto IL_0426;
	}

IL_00db:
	{
		uint32_t L_21 = V_2;
		if ((((int32_t)L_21) == ((int32_t)((int32_t)-1593786692))))
		{
			goto IL_020e;
		}
	}
	{
		uint32_t L_22 = V_2;
		if ((((int32_t)L_22) == ((int32_t)((int32_t)-1473810612))))
		{
			goto IL_0190;
		}
	}
	{
		goto IL_0426;
	}

IL_00f6:
	{
		uint32_t L_23 = V_2;
		if ((!(((uint32_t)L_23) <= ((uint32_t)((int32_t)-1386986472)))))
		{
			goto IL_0116;
		}
	}
	{
		uint32_t L_24 = V_2;
		if ((((int32_t)L_24) == ((int32_t)((int32_t)-1412039661))))
		{
			goto IL_0166;
		}
	}
	{
		uint32_t L_25 = V_2;
		if ((((int32_t)L_25) == ((int32_t)((int32_t)-1386986472))))
		{
			goto IL_01ba;
		}
	}
	{
		goto IL_0426;
	}

IL_0116:
	{
		uint32_t L_26 = V_2;
		if ((((int32_t)L_26) == ((int32_t)((int32_t)-584064197))))
		{
			goto IL_0223;
		}
	}
	{
		uint32_t L_27 = V_2;
		if ((((int32_t)L_27) == ((int32_t)((int32_t)-473474755))))
		{
			goto IL_0277;
		}
	}
	{
		uint32_t L_28 = V_2;
		if ((((int32_t)L_28) == ((int32_t)((int32_t)-365686981))))
		{
			goto IL_0262;
		}
	}
	{
		goto IL_0426;
	}

IL_013c:
	{
		String_t* L_29 = V_1;
		bool L_30;
		L_30 = String_op_Equality_m50B3548E4AC232558190B0052877B290AA1D436A((String_t*)L_29, (String_t*)_stringLiteralF9D225733E1D10F9344C755C4A9C0870CD1DE97B, /*hidden argument*/NULL);
		if (L_30)
		{
			goto IL_02b6;
		}
	}
	{
		goto IL_0426;
	}

IL_0151:
	{
		String_t* L_31 = V_1;
		bool L_32;
		L_32 = String_op_Equality_m50B3548E4AC232558190B0052877B290AA1D436A((String_t*)L_31, (String_t*)_stringLiteral82BECCAD895076775062861CDB46AADEF913D969, /*hidden argument*/NULL);
		if (L_32)
		{
			goto IL_02cd;
		}
	}
	{
		goto IL_0426;
	}

IL_0166:
	{
		String_t* L_33 = V_1;
		bool L_34;
		L_34 = String_op_Equality_m50B3548E4AC232558190B0052877B290AA1D436A((String_t*)L_33, (String_t*)_stringLiteral1228466552C1791B2019A329AFE94665D441168A, /*hidden argument*/NULL);
		if (L_34)
		{
			goto IL_02df;
		}
	}
	{
		goto IL_0426;
	}

IL_017b:
	{
		String_t* L_35 = V_1;
		bool L_36;
		L_36 = String_op_Equality_m50B3548E4AC232558190B0052877B290AA1D436A((String_t*)L_35, (String_t*)_stringLiteralBD49F93A7BC78A69E385CEC0E78F434BD2845A17, /*hidden argument*/NULL);
		if (L_36)
		{
			goto IL_02f6;
		}
	}
	{
		goto IL_0426;
	}

IL_0190:
	{
		String_t* L_37 = V_1;
		bool L_38;
		L_38 = String_op_Equality_m50B3548E4AC232558190B0052877B290AA1D436A((String_t*)L_37, (String_t*)_stringLiteralED1F119527A0BCA45125EF8E0F719985DA86C0E1, /*hidden argument*/NULL);
		if (L_38)
		{
			goto IL_030d;
		}
	}
	{
		goto IL_0426;
	}

IL_01a5:
	{
		String_t* L_39 = V_1;
		bool L_40;
		L_40 = String_op_Equality_m50B3548E4AC232558190B0052877B290AA1D436A((String_t*)L_39, (String_t*)_stringLiteral8C9F18A4F030B96447955FBBA1A99FFC43B5D8E0, /*hidden argument*/NULL);
		if (L_40)
		{
			goto IL_0324;
		}
	}
	{
		goto IL_0426;
	}

IL_01ba:
	{
		String_t* L_41 = V_1;
		bool L_42;
		L_42 = String_op_Equality_m50B3548E4AC232558190B0052877B290AA1D436A((String_t*)L_41, (String_t*)_stringLiteralFC341A1966AF28A9A7A26EDFB78ABBF7DE4D0E1F, /*hidden argument*/NULL);
		if (L_42)
		{
			goto IL_033b;
		}
	}
	{
		goto IL_0426;
	}

IL_01cf:
	{
		String_t* L_43 = V_1;
		bool L_44;
		L_44 = String_op_Equality_m50B3548E4AC232558190B0052877B290AA1D436A((String_t*)L_43, (String_t*)_stringLiteralE8744A8B8BD390EB66CA0CAE2376C973E6904FFB, /*hidden argument*/NULL);
		if (L_44)
		{
			goto IL_0352;
		}
	}
	{
		goto IL_0426;
	}

IL_01e4:
	{
		String_t* L_45 = V_1;
		bool L_46;
		L_46 = String_op_Equality_m50B3548E4AC232558190B0052877B290AA1D436A((String_t*)L_45, (String_t*)_stringLiteralF9BE17D634D1B07BCDCDA77A87710C946D81307B, /*hidden argument*/NULL);
		if (L_46)
		{
			goto IL_0369;
		}
	}
	{
		goto IL_0426;
	}

IL_01f9:
	{
		String_t* L_47 = V_1;
		bool L_48;
		L_48 = String_op_Equality_m50B3548E4AC232558190B0052877B290AA1D436A((String_t*)L_47, (String_t*)_stringLiteralFA5EC7168E9633DAAEAA255ECB55030EA60F064F, /*hidden argument*/NULL);
		if (L_48)
		{
			goto IL_0380;
		}
	}
	{
		goto IL_0426;
	}

IL_020e:
	{
		String_t* L_49 = V_1;
		bool L_50;
		L_50 = String_op_Equality_m50B3548E4AC232558190B0052877B290AA1D436A((String_t*)L_49, (String_t*)_stringLiteralEB0A157666700D8227FD4B66A26FDC02035E89BF, /*hidden argument*/NULL);
		if (L_50)
		{
			goto IL_0392;
		}
	}
	{
		goto IL_0426;
	}

IL_0223:
	{
		String_t* L_51 = V_1;
		bool L_52;
		L_52 = String_op_Equality_m50B3548E4AC232558190B0052877B290AA1D436A((String_t*)L_51, (String_t*)_stringLiteral8E54BB51E569CB6A8D3C45D8AEF883A1559C1C0E, /*hidden argument*/NULL);
		if (L_52)
		{
			goto IL_03a4;
		}
	}
	{
		goto IL_0426;
	}

IL_0238:
	{
		String_t* L_53 = V_1;
		bool L_54;
		L_54 = String_op_Equality_m50B3548E4AC232558190B0052877B290AA1D436A((String_t*)L_53, (String_t*)_stringLiteral60E56797D122AE71D3774956F66C6EEB9EA22C05, /*hidden argument*/NULL);
		if (L_54)
		{
			goto IL_03b3;
		}
	}
	{
		goto IL_0426;
	}

IL_024d:
	{
		String_t* L_55 = V_1;
		bool L_56;
		L_56 = String_op_Equality_m50B3548E4AC232558190B0052877B290AA1D436A((String_t*)L_55, (String_t*)_stringLiteral01837E2252AC8026A5EA3567A663017A662FBB70, /*hidden argument*/NULL);
		if (L_56)
		{
			goto IL_03c2;
		}
	}
	{
		goto IL_0426;
	}

IL_0262:
	{
		String_t* L_57 = V_1;
		bool L_58;
		L_58 = String_op_Equality_m50B3548E4AC232558190B0052877B290AA1D436A((String_t*)L_57, (String_t*)_stringLiteralF66E9083C67855AB6EBB4B74342E385A72AACE32, /*hidden argument*/NULL);
		if (L_58)
		{
			goto IL_03d6;
		}
	}
	{
		goto IL_0426;
	}

IL_0277:
	{
		String_t* L_59 = V_1;
		bool L_60;
		L_60 = String_op_Equality_m50B3548E4AC232558190B0052877B290AA1D436A((String_t*)L_59, (String_t*)_stringLiteral91811EE149061D28B38320E2430CE8888AD6398B, /*hidden argument*/NULL);
		if (L_60)
		{
			goto IL_03ea;
		}
	}
	{
		goto IL_0426;
	}

IL_028c:
	{
		String_t* L_61 = V_1;
		bool L_62;
		L_62 = String_op_Equality_m50B3548E4AC232558190B0052877B290AA1D436A((String_t*)L_61, (String_t*)_stringLiteral6686C366F645244186604A3DA4B9A58012A85F1B, /*hidden argument*/NULL);
		if (L_62)
		{
			goto IL_03fe;
		}
	}
	{
		goto IL_0426;
	}

IL_02a1:
	{
		String_t* L_63 = V_1;
		bool L_64;
		L_64 = String_op_Equality_m50B3548E4AC232558190B0052877B290AA1D436A((String_t*)L_63, (String_t*)_stringLiteralCA1B66E295BD92E9FD3B6C708F09CA69A50BEFD1, /*hidden argument*/NULL);
		if (L_64)
		{
			goto IL_0412;
		}
	}
	{
		goto IL_0426;
	}

IL_02b6:
	{
		// instance.enabled = reader.Read<System.Boolean>(ES3Type_bool.Instance);
		ES3Reader_t2780AF8AA61DA2A817115CEF8612AC0E494D03C9 * L_65 = ___reader0;
		IL2CPP_RUNTIME_CLASS_INIT(ES3Type_bool_t8F309F7B9CC735FF1DEE68081B6E3CAB367745F4_il2cpp_TypeInfo_var);
		ES3Type_t8FBECB7AE75168648B9524E0C2A38DAD4555421D * L_66 = ((ES3Type_bool_t8F309F7B9CC735FF1DEE68081B6E3CAB367745F4_StaticFields*)il2cpp_codegen_static_fields_for(ES3Type_bool_t8F309F7B9CC735FF1DEE68081B6E3CAB367745F4_il2cpp_TypeInfo_var))->get_Instance_12();
		NullCheck((ES3Reader_t2780AF8AA61DA2A817115CEF8612AC0E494D03C9 *)L_65);
		bool L_67;
		L_67 = GenericVirtFuncInvoker1< bool, ES3Type_t8FBECB7AE75168648B9524E0C2A38DAD4555421D * >::Invoke(ES3Reader_Read_TisBoolean_t07D1E3F34E4813023D64F584DFF7B34C9D922F37_mC6D1B158268FF9B97822FF9F5B37FB1723FEDA22_RuntimeMethod_var, (ES3Reader_t2780AF8AA61DA2A817115CEF8612AC0E494D03C9 *)L_65, (ES3Type_t8FBECB7AE75168648B9524E0C2A38DAD4555421D *)L_66);
		ShapeModule_set_enabled_mF6FE8ED99E482A739C00F894235F4E2CD09B0D1E((ShapeModule_t3A89D143F5CAF357ECCE8B4A4F2BBD57816F98CA *)(ShapeModule_t3A89D143F5CAF357ECCE8B4A4F2BBD57816F98CA *)(&V_0), (bool)L_67, /*hidden argument*/NULL);
		// break;
		goto IL_042c;
	}

IL_02cd:
	{
		// instance.shapeType = reader.Read<UnityEngine.ParticleSystemShapeType>();
		ES3Reader_t2780AF8AA61DA2A817115CEF8612AC0E494D03C9 * L_68 = ___reader0;
		NullCheck((ES3Reader_t2780AF8AA61DA2A817115CEF8612AC0E494D03C9 *)L_68);
		int32_t L_69;
		L_69 = GenericVirtFuncInvoker0< int32_t >::Invoke(ES3Reader_Read_TisParticleSystemShapeType_t5B09F3A5A637F57DB1B2A6518E214AA2AA53D70C_mAE53212CB1FDDA51CF8CD0D39FCD446087DACA48_RuntimeMethod_var, (ES3Reader_t2780AF8AA61DA2A817115CEF8612AC0E494D03C9 *)L_68);
		ShapeModule_set_shapeType_mB772084527742749EB6AD690BAE47215FC71040D((ShapeModule_t3A89D143F5CAF357ECCE8B4A4F2BBD57816F98CA *)(ShapeModule_t3A89D143F5CAF357ECCE8B4A4F2BBD57816F98CA *)(&V_0), (int32_t)L_69, /*hidden argument*/NULL);
		// break;
		goto IL_042c;
	}

IL_02df:
	{
		// instance.randomDirectionAmount = reader.Read<System.Single>(ES3Type_float.Instance);
		ES3Reader_t2780AF8AA61DA2A817115CEF8612AC0E494D03C9 * L_70 = ___reader0;
		IL2CPP_RUNTIME_CLASS_INIT(ES3Type_float_tF86B773C86731BD9AD79448B860BBB178FE77644_il2cpp_TypeInfo_var);
		ES3Type_t8FBECB7AE75168648B9524E0C2A38DAD4555421D * L_71 = ((ES3Type_float_tF86B773C86731BD9AD79448B860BBB178FE77644_StaticFields*)il2cpp_codegen_static_fields_for(ES3Type_float_tF86B773C86731BD9AD79448B860BBB178FE77644_il2cpp_TypeInfo_var))->get_Instance_12();
		NullCheck((ES3Reader_t2780AF8AA61DA2A817115CEF8612AC0E494D03C9 *)L_70);
		float L_72;
		L_72 = GenericVirtFuncInvoker1< float, ES3Type_t8FBECB7AE75168648B9524E0C2A38DAD4555421D * >::Invoke(ES3Reader_Read_TisSingle_tE07797BA3C98D4CA9B5A19413C19A76688AB899E_m4A0416374498BDA042B8EB21E49B72326D6CE5F4_RuntimeMethod_var, (ES3Reader_t2780AF8AA61DA2A817115CEF8612AC0E494D03C9 *)L_70, (ES3Type_t8FBECB7AE75168648B9524E0C2A38DAD4555421D *)L_71);
		ShapeModule_set_randomDirectionAmount_m4E1BB67600D57383945F75F5A179EEEC01A76885((ShapeModule_t3A89D143F5CAF357ECCE8B4A4F2BBD57816F98CA *)(ShapeModule_t3A89D143F5CAF357ECCE8B4A4F2BBD57816F98CA *)(&V_0), (float)L_72, /*hidden argument*/NULL);
		// break;
		goto IL_042c;
	}

IL_02f6:
	{
		// instance.sphericalDirectionAmount = reader.Read<System.Single>(ES3Type_float.Instance);
		ES3Reader_t2780AF8AA61DA2A817115CEF8612AC0E494D03C9 * L_73 = ___reader0;
		IL2CPP_RUNTIME_CLASS_INIT(ES3Type_float_tF86B773C86731BD9AD79448B860BBB178FE77644_il2cpp_TypeInfo_var);
		ES3Type_t8FBECB7AE75168648B9524E0C2A38DAD4555421D * L_74 = ((ES3Type_float_tF86B773C86731BD9AD79448B860BBB178FE77644_StaticFields*)il2cpp_codegen_static_fields_for(ES3Type_float_tF86B773C86731BD9AD79448B860BBB178FE77644_il2cpp_TypeInfo_var))->get_Instance_12();
		NullCheck((ES3Reader_t2780AF8AA61DA2A817115CEF8612AC0E494D03C9 *)L_73);
		float L_75;
		L_75 = GenericVirtFuncInvoker1< float, ES3Type_t8FBECB7AE75168648B9524E0C2A38DAD4555421D * >::Invoke(ES3Reader_Read_TisSingle_tE07797BA3C98D4CA9B5A19413C19A76688AB899E_m4A0416374498BDA042B8EB21E49B72326D6CE5F4_RuntimeMethod_var, (ES3Reader_t2780AF8AA61DA2A817115CEF8612AC0E494D03C9 *)L_73, (ES3Type_t8FBECB7AE75168648B9524E0C2A38DAD4555421D *)L_74);
		ShapeModule_set_sphericalDirectionAmount_m02A9FBFF18AF24B821801DF5D833CA20A569F62B((ShapeModule_t3A89D143F5CAF357ECCE8B4A4F2BBD57816F98CA *)(ShapeModule_t3A89D143F5CAF357ECCE8B4A4F2BBD57816F98CA *)(&V_0), (float)L_75, /*hidden argument*/NULL);
		// break;
		goto IL_042c;
	}

IL_030d:
	{
		// instance.alignToDirection = reader.Read<System.Boolean>(ES3Type_bool.Instance);
		ES3Reader_t2780AF8AA61DA2A817115CEF8612AC0E494D03C9 * L_76 = ___reader0;
		IL2CPP_RUNTIME_CLASS_INIT(ES3Type_bool_t8F309F7B9CC735FF1DEE68081B6E3CAB367745F4_il2cpp_TypeInfo_var);
		ES3Type_t8FBECB7AE75168648B9524E0C2A38DAD4555421D * L_77 = ((ES3Type_bool_t8F309F7B9CC735FF1DEE68081B6E3CAB367745F4_StaticFields*)il2cpp_codegen_static_fields_for(ES3Type_bool_t8F309F7B9CC735FF1DEE68081B6E3CAB367745F4_il2cpp_TypeInfo_var))->get_Instance_12();
		NullCheck((ES3Reader_t2780AF8AA61DA2A817115CEF8612AC0E494D03C9 *)L_76);
		bool L_78;
		L_78 = GenericVirtFuncInvoker1< bool, ES3Type_t8FBECB7AE75168648B9524E0C2A38DAD4555421D * >::Invoke(ES3Reader_Read_TisBoolean_t07D1E3F34E4813023D64F584DFF7B34C9D922F37_mC6D1B158268FF9B97822FF9F5B37FB1723FEDA22_RuntimeMethod_var, (ES3Reader_t2780AF8AA61DA2A817115CEF8612AC0E494D03C9 *)L_76, (ES3Type_t8FBECB7AE75168648B9524E0C2A38DAD4555421D *)L_77);
		ShapeModule_set_alignToDirection_m396A57DCAD5F194E4DDDA0DF9C35E5508E3641BE((ShapeModule_t3A89D143F5CAF357ECCE8B4A4F2BBD57816F98CA *)(ShapeModule_t3A89D143F5CAF357ECCE8B4A4F2BBD57816F98CA *)(&V_0), (bool)L_78, /*hidden argument*/NULL);
		// break;
		goto IL_042c;
	}

IL_0324:
	{
		// instance.radius = reader.Read<System.Single>(ES3Type_float.Instance);
		ES3Reader_t2780AF8AA61DA2A817115CEF8612AC0E494D03C9 * L_79 = ___reader0;
		IL2CPP_RUNTIME_CLASS_INIT(ES3Type_float_tF86B773C86731BD9AD79448B860BBB178FE77644_il2cpp_TypeInfo_var);
		ES3Type_t8FBECB7AE75168648B9524E0C2A38DAD4555421D * L_80 = ((ES3Type_float_tF86B773C86731BD9AD79448B860BBB178FE77644_StaticFields*)il2cpp_codegen_static_fields_for(ES3Type_float_tF86B773C86731BD9AD79448B860BBB178FE77644_il2cpp_TypeInfo_var))->get_Instance_12();
		NullCheck((ES3Reader_t2780AF8AA61DA2A817115CEF8612AC0E494D03C9 *)L_79);
		float L_81;
		L_81 = GenericVirtFuncInvoker1< float, ES3Type_t8FBECB7AE75168648B9524E0C2A38DAD4555421D * >::Invoke(ES3Reader_Read_TisSingle_tE07797BA3C98D4CA9B5A19413C19A76688AB899E_m4A0416374498BDA042B8EB21E49B72326D6CE5F4_RuntimeMethod_var, (ES3Reader_t2780AF8AA61DA2A817115CEF8612AC0E494D03C9 *)L_79, (ES3Type_t8FBECB7AE75168648B9524E0C2A38DAD4555421D *)L_80);
		ShapeModule_set_radius_mFC12B15750268316924771461C09B1A311A16DEA((ShapeModule_t3A89D143F5CAF357ECCE8B4A4F2BBD57816F98CA *)(ShapeModule_t3A89D143F5CAF357ECCE8B4A4F2BBD57816F98CA *)(&V_0), (float)L_81, /*hidden argument*/NULL);
		// break;
		goto IL_042c;
	}

IL_033b:
	{
		// instance.angle = reader.Read<System.Single>(ES3Type_float.Instance);
		ES3Reader_t2780AF8AA61DA2A817115CEF8612AC0E494D03C9 * L_82 = ___reader0;
		IL2CPP_RUNTIME_CLASS_INIT(ES3Type_float_tF86B773C86731BD9AD79448B860BBB178FE77644_il2cpp_TypeInfo_var);
		ES3Type_t8FBECB7AE75168648B9524E0C2A38DAD4555421D * L_83 = ((ES3Type_float_tF86B773C86731BD9AD79448B860BBB178FE77644_StaticFields*)il2cpp_codegen_static_fields_for(ES3Type_float_tF86B773C86731BD9AD79448B860BBB178FE77644_il2cpp_TypeInfo_var))->get_Instance_12();
		NullCheck((ES3Reader_t2780AF8AA61DA2A817115CEF8612AC0E494D03C9 *)L_82);
		float L_84;
		L_84 = GenericVirtFuncInvoker1< float, ES3Type_t8FBECB7AE75168648B9524E0C2A38DAD4555421D * >::Invoke(ES3Reader_Read_TisSingle_tE07797BA3C98D4CA9B5A19413C19A76688AB899E_m4A0416374498BDA042B8EB21E49B72326D6CE5F4_RuntimeMethod_var, (ES3Reader_t2780AF8AA61DA2A817115CEF8612AC0E494D03C9 *)L_82, (ES3Type_t8FBECB7AE75168648B9524E0C2A38DAD4555421D *)L_83);
		ShapeModule_set_angle_m20629BB5FE89F2040960548B45F6EC801B1DB8AA((ShapeModule_t3A89D143F5CAF357ECCE8B4A4F2BBD57816F98CA *)(ShapeModule_t3A89D143F5CAF357ECCE8B4A4F2BBD57816F98CA *)(&V_0), (float)L_84, /*hidden argument*/NULL);
		// break;
		goto IL_042c;
	}

IL_0352:
	{
		// instance.length = reader.Read<System.Single>(ES3Type_float.Instance);
		ES3Reader_t2780AF8AA61DA2A817115CEF8612AC0E494D03C9 * L_85 = ___reader0;
		IL2CPP_RUNTIME_CLASS_INIT(ES3Type_float_tF86B773C86731BD9AD79448B860BBB178FE77644_il2cpp_TypeInfo_var);
		ES3Type_t8FBECB7AE75168648B9524E0C2A38DAD4555421D * L_86 = ((ES3Type_float_tF86B773C86731BD9AD79448B860BBB178FE77644_StaticFields*)il2cpp_codegen_static_fields_for(ES3Type_float_tF86B773C86731BD9AD79448B860BBB178FE77644_il2cpp_TypeInfo_var))->get_Instance_12();
		NullCheck((ES3Reader_t2780AF8AA61DA2A817115CEF8612AC0E494D03C9 *)L_85);
		float L_87;
		L_87 = GenericVirtFuncInvoker1< float, ES3Type_t8FBECB7AE75168648B9524E0C2A38DAD4555421D * >::Invoke(ES3Reader_Read_TisSingle_tE07797BA3C98D4CA9B5A19413C19A76688AB899E_m4A0416374498BDA042B8EB21E49B72326D6CE5F4_RuntimeMethod_var, (ES3Reader_t2780AF8AA61DA2A817115CEF8612AC0E494D03C9 *)L_85, (ES3Type_t8FBECB7AE75168648B9524E0C2A38DAD4555421D *)L_86);
		ShapeModule_set_length_m744975258664B53F38A8B8BE38A86A0FFDD85BC7((ShapeModule_t3A89D143F5CAF357ECCE8B4A4F2BBD57816F98CA *)(ShapeModule_t3A89D143F5CAF357ECCE8B4A4F2BBD57816F98CA *)(&V_0), (float)L_87, /*hidden argument*/NULL);
		// break;
		goto IL_042c;
	}

IL_0369:
	{
		// instance.scale = reader.Read<UnityEngine.Vector3>(ES3Type_Vector3.Instance);
		ES3Reader_t2780AF8AA61DA2A817115CEF8612AC0E494D03C9 * L_88 = ___reader0;
		IL2CPP_RUNTIME_CLASS_INIT(ES3Type_Vector3_tA9144E81A20D2F28726F02DE1AE6CD3F9C12B54F_il2cpp_TypeInfo_var);
		ES3Type_t8FBECB7AE75168648B9524E0C2A38DAD4555421D * L_89 = ((ES3Type_Vector3_tA9144E81A20D2F28726F02DE1AE6CD3F9C12B54F_StaticFields*)il2cpp_codegen_static_fields_for(ES3Type_Vector3_tA9144E81A20D2F28726F02DE1AE6CD3F9C12B54F_il2cpp_TypeInfo_var))->get_Instance_12();
		NullCheck((ES3Reader_t2780AF8AA61DA2A817115CEF8612AC0E494D03C9 *)L_88);
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_90;
		L_90 = GenericVirtFuncInvoker1< Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E , ES3Type_t8FBECB7AE75168648B9524E0C2A38DAD4555421D * >::Invoke(ES3Reader_Read_TisVector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E_mBA4CD9D0F45E78BA43FE2DB8EC33CC3A5433DE15_RuntimeMethod_var, (ES3Reader_t2780AF8AA61DA2A817115CEF8612AC0E494D03C9 *)L_88, (ES3Type_t8FBECB7AE75168648B9524E0C2A38DAD4555421D *)L_89);
		ShapeModule_set_scale_m2951583898F18878E6F238100045072F44AD9158((ShapeModule_t3A89D143F5CAF357ECCE8B4A4F2BBD57816F98CA *)(ShapeModule_t3A89D143F5CAF357ECCE8B4A4F2BBD57816F98CA *)(&V_0), (Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E )L_90, /*hidden argument*/NULL);
		// break;
		goto IL_042c;
	}

IL_0380:
	{
		// instance.meshShapeType = reader.Read<UnityEngine.ParticleSystemMeshShapeType>();
		ES3Reader_t2780AF8AA61DA2A817115CEF8612AC0E494D03C9 * L_91 = ___reader0;
		NullCheck((ES3Reader_t2780AF8AA61DA2A817115CEF8612AC0E494D03C9 *)L_91);
		int32_t L_92;
		L_92 = GenericVirtFuncInvoker0< int32_t >::Invoke(ES3Reader_Read_TisParticleSystemMeshShapeType_t7C9518403F30CC7AF7F9124FD61EC1187B42EFD2_mF1A19C0F8BBA6E44737F158F3BE4CC478F623F10_RuntimeMethod_var, (ES3Reader_t2780AF8AA61DA2A817115CEF8612AC0E494D03C9 *)L_91);
		ShapeModule_set_meshShapeType_m5DAD94B71F2110F45E454C30DE052153129891C2((ShapeModule_t3A89D143F5CAF357ECCE8B4A4F2BBD57816F98CA *)(ShapeModule_t3A89D143F5CAF357ECCE8B4A4F2BBD57816F98CA *)(&V_0), (int32_t)L_92, /*hidden argument*/NULL);
		// break;
		goto IL_042c;
	}

IL_0392:
	{
		// instance.mesh = reader.Read<UnityEngine.Mesh>();
		ES3Reader_t2780AF8AA61DA2A817115CEF8612AC0E494D03C9 * L_93 = ___reader0;
		NullCheck((ES3Reader_t2780AF8AA61DA2A817115CEF8612AC0E494D03C9 *)L_93);
		Mesh_t2F5992DBA650D5862B43D3823ACD997132A57DA6 * L_94;
		L_94 = GenericVirtFuncInvoker0< Mesh_t2F5992DBA650D5862B43D3823ACD997132A57DA6 * >::Invoke(ES3Reader_Read_TisMesh_t2F5992DBA650D5862B43D3823ACD997132A57DA6_m65DF5BA41642A39B77979CC49472E4DE7A1660F9_RuntimeMethod_var, (ES3Reader_t2780AF8AA61DA2A817115CEF8612AC0E494D03C9 *)L_93);
		ShapeModule_set_mesh_mD3E276A9E45442E75AD8A9AA4BD88C9112BD77CA((ShapeModule_t3A89D143F5CAF357ECCE8B4A4F2BBD57816F98CA *)(ShapeModule_t3A89D143F5CAF357ECCE8B4A4F2BBD57816F98CA *)(&V_0), (Mesh_t2F5992DBA650D5862B43D3823ACD997132A57DA6 *)L_94, /*hidden argument*/NULL);
		// break;
		goto IL_042c;
	}

IL_03a4:
	{
		// instance.meshRenderer = reader.Read<UnityEngine.MeshRenderer>();
		ES3Reader_t2780AF8AA61DA2A817115CEF8612AC0E494D03C9 * L_95 = ___reader0;
		NullCheck((ES3Reader_t2780AF8AA61DA2A817115CEF8612AC0E494D03C9 *)L_95);
		MeshRenderer_tCD983A2F635E12BCB0BAA2E635D96A318757908B * L_96;
		L_96 = GenericVirtFuncInvoker0< MeshRenderer_tCD983A2F635E12BCB0BAA2E635D96A318757908B * >::Invoke(ES3Reader_Read_TisMeshRenderer_tCD983A2F635E12BCB0BAA2E635D96A318757908B_m773CE5481730EBCC6A377F918946EB11B304050A_RuntimeMethod_var, (ES3Reader_t2780AF8AA61DA2A817115CEF8612AC0E494D03C9 *)L_95);
		ShapeModule_set_meshRenderer_m334D69AC8C29F5E393732D62BBB3645296614059((ShapeModule_t3A89D143F5CAF357ECCE8B4A4F2BBD57816F98CA *)(ShapeModule_t3A89D143F5CAF357ECCE8B4A4F2BBD57816F98CA *)(&V_0), (MeshRenderer_tCD983A2F635E12BCB0BAA2E635D96A318757908B *)L_96, /*hidden argument*/NULL);
		// break;
		goto IL_042c;
	}

IL_03b3:
	{
		// instance.skinnedMeshRenderer = reader.Read<UnityEngine.SkinnedMeshRenderer>();
		ES3Reader_t2780AF8AA61DA2A817115CEF8612AC0E494D03C9 * L_97 = ___reader0;
		NullCheck((ES3Reader_t2780AF8AA61DA2A817115CEF8612AC0E494D03C9 *)L_97);
		SkinnedMeshRenderer_t126F4D6010E0F4B2685A7817B0A9171805D8F496 * L_98;
		L_98 = GenericVirtFuncInvoker0< SkinnedMeshRenderer_t126F4D6010E0F4B2685A7817B0A9171805D8F496 * >::Invoke(ES3Reader_Read_TisSkinnedMeshRenderer_t126F4D6010E0F4B2685A7817B0A9171805D8F496_m23D6569D5CE7B3E1C67BDB470CDEDEF25A835F25_RuntimeMethod_var, (ES3Reader_t2780AF8AA61DA2A817115CEF8612AC0E494D03C9 *)L_97);
		ShapeModule_set_skinnedMeshRenderer_m9DEF9CD332D3F10BE7D99EFECC0971FB5AE83F56((ShapeModule_t3A89D143F5CAF357ECCE8B4A4F2BBD57816F98CA *)(ShapeModule_t3A89D143F5CAF357ECCE8B4A4F2BBD57816F98CA *)(&V_0), (SkinnedMeshRenderer_t126F4D6010E0F4B2685A7817B0A9171805D8F496 *)L_98, /*hidden argument*/NULL);
		// break;
		goto IL_042c;
	}

IL_03c2:
	{
		// instance.useMeshMaterialIndex = reader.Read<System.Boolean>(ES3Type_bool.Instance);
		ES3Reader_t2780AF8AA61DA2A817115CEF8612AC0E494D03C9 * L_99 = ___reader0;
		IL2CPP_RUNTIME_CLASS_INIT(ES3Type_bool_t8F309F7B9CC735FF1DEE68081B6E3CAB367745F4_il2cpp_TypeInfo_var);
		ES3Type_t8FBECB7AE75168648B9524E0C2A38DAD4555421D * L_100 = ((ES3Type_bool_t8F309F7B9CC735FF1DEE68081B6E3CAB367745F4_StaticFields*)il2cpp_codegen_static_fields_for(ES3Type_bool_t8F309F7B9CC735FF1DEE68081B6E3CAB367745F4_il2cpp_TypeInfo_var))->get_Instance_12();
		NullCheck((ES3Reader_t2780AF8AA61DA2A817115CEF8612AC0E494D03C9 *)L_99);
		bool L_101;
		L_101 = GenericVirtFuncInvoker1< bool, ES3Type_t8FBECB7AE75168648B9524E0C2A38DAD4555421D * >::Invoke(ES3Reader_Read_TisBoolean_t07D1E3F34E4813023D64F584DFF7B34C9D922F37_mC6D1B158268FF9B97822FF9F5B37FB1723FEDA22_RuntimeMethod_var, (ES3Reader_t2780AF8AA61DA2A817115CEF8612AC0E494D03C9 *)L_99, (ES3Type_t8FBECB7AE75168648B9524E0C2A38DAD4555421D *)L_100);
		ShapeModule_set_useMeshMaterialIndex_m6130573C0966ED3B5C590665747305BCEFD3F901((ShapeModule_t3A89D143F5CAF357ECCE8B4A4F2BBD57816F98CA *)(ShapeModule_t3A89D143F5CAF357ECCE8B4A4F2BBD57816F98CA *)(&V_0), (bool)L_101, /*hidden argument*/NULL);
		// break;
		goto IL_042c;
	}

IL_03d6:
	{
		// instance.meshMaterialIndex = reader.Read<System.Int32>(ES3Type_int.Instance);
		ES3Reader_t2780AF8AA61DA2A817115CEF8612AC0E494D03C9 * L_102 = ___reader0;
		IL2CPP_RUNTIME_CLASS_INIT(ES3Type_int_tF64C15D40AD0CC7C15BCD1CEC3C5C6BF837BD167_il2cpp_TypeInfo_var);
		ES3Type_t8FBECB7AE75168648B9524E0C2A38DAD4555421D * L_103 = ((ES3Type_int_tF64C15D40AD0CC7C15BCD1CEC3C5C6BF837BD167_StaticFields*)il2cpp_codegen_static_fields_for(ES3Type_int_tF64C15D40AD0CC7C15BCD1CEC3C5C6BF837BD167_il2cpp_TypeInfo_var))->get_Instance_12();
		NullCheck((ES3Reader_t2780AF8AA61DA2A817115CEF8612AC0E494D03C9 *)L_102);
		int32_t L_104;
		L_104 = GenericVirtFuncInvoker1< int32_t, ES3Type_t8FBECB7AE75168648B9524E0C2A38DAD4555421D * >::Invoke(ES3Reader_Read_TisInt32_tFDE5F8CD43D10453F6A2E0C77FE48C6CC7009046_m2B74AA6627F5B1D21171D56C42F71DE5A7C1B4A6_RuntimeMethod_var, (ES3Reader_t2780AF8AA61DA2A817115CEF8612AC0E494D03C9 *)L_102, (ES3Type_t8FBECB7AE75168648B9524E0C2A38DAD4555421D *)L_103);
		ShapeModule_set_meshMaterialIndex_m1205DDEB353204D5941654FB79164AD5BAF0A59C((ShapeModule_t3A89D143F5CAF357ECCE8B4A4F2BBD57816F98CA *)(ShapeModule_t3A89D143F5CAF357ECCE8B4A4F2BBD57816F98CA *)(&V_0), (int32_t)L_104, /*hidden argument*/NULL);
		// break;
		goto IL_042c;
	}

IL_03ea:
	{
		// instance.useMeshColors = reader.Read<System.Boolean>(ES3Type_bool.Instance);
		ES3Reader_t2780AF8AA61DA2A817115CEF8612AC0E494D03C9 * L_105 = ___reader0;
		IL2CPP_RUNTIME_CLASS_INIT(ES3Type_bool_t8F309F7B9CC735FF1DEE68081B6E3CAB367745F4_il2cpp_TypeInfo_var);
		ES3Type_t8FBECB7AE75168648B9524E0C2A38DAD4555421D * L_106 = ((ES3Type_bool_t8F309F7B9CC735FF1DEE68081B6E3CAB367745F4_StaticFields*)il2cpp_codegen_static_fields_for(ES3Type_bool_t8F309F7B9CC735FF1DEE68081B6E3CAB367745F4_il2cpp_TypeInfo_var))->get_Instance_12();
		NullCheck((ES3Reader_t2780AF8AA61DA2A817115CEF8612AC0E494D03C9 *)L_105);
		bool L_107;
		L_107 = GenericVirtFuncInvoker1< bool, ES3Type_t8FBECB7AE75168648B9524E0C2A38DAD4555421D * >::Invoke(ES3Reader_Read_TisBoolean_t07D1E3F34E4813023D64F584DFF7B34C9D922F37_mC6D1B158268FF9B97822FF9F5B37FB1723FEDA22_RuntimeMethod_var, (ES3Reader_t2780AF8AA61DA2A817115CEF8612AC0E494D03C9 *)L_105, (ES3Type_t8FBECB7AE75168648B9524E0C2A38DAD4555421D *)L_106);
		ShapeModule_set_useMeshColors_m071D000F330805B1EBCF09B40AC4EB9942EB9F57((ShapeModule_t3A89D143F5CAF357ECCE8B4A4F2BBD57816F98CA *)(ShapeModule_t3A89D143F5CAF357ECCE8B4A4F2BBD57816F98CA *)(&V_0), (bool)L_107, /*hidden argument*/NULL);
		// break;
		goto IL_042c;
	}

IL_03fe:
	{
		// instance.normalOffset = reader.Read<System.Single>(ES3Type_float.Instance);
		ES3Reader_t2780AF8AA61DA2A817115CEF8612AC0E494D03C9 * L_108 = ___reader0;
		IL2CPP_RUNTIME_CLASS_INIT(ES3Type_float_tF86B773C86731BD9AD79448B860BBB178FE77644_il2cpp_TypeInfo_var);
		ES3Type_t8FBECB7AE75168648B9524E0C2A38DAD4555421D * L_109 = ((ES3Type_float_tF86B773C86731BD9AD79448B860BBB178FE77644_StaticFields*)il2cpp_codegen_static_fields_for(ES3Type_float_tF86B773C86731BD9AD79448B860BBB178FE77644_il2cpp_TypeInfo_var))->get_Instance_12();
		NullCheck((ES3Reader_t2780AF8AA61DA2A817115CEF8612AC0E494D03C9 *)L_108);
		float L_110;
		L_110 = GenericVirtFuncInvoker1< float, ES3Type_t8FBECB7AE75168648B9524E0C2A38DAD4555421D * >::Invoke(ES3Reader_Read_TisSingle_tE07797BA3C98D4CA9B5A19413C19A76688AB899E_m4A0416374498BDA042B8EB21E49B72326D6CE5F4_RuntimeMethod_var, (ES3Reader_t2780AF8AA61DA2A817115CEF8612AC0E494D03C9 *)L_108, (ES3Type_t8FBECB7AE75168648B9524E0C2A38DAD4555421D *)L_109);
		ShapeModule_set_normalOffset_m81A315286BAA5F52AAED6B317734FB03B2DCE9FD((ShapeModule_t3A89D143F5CAF357ECCE8B4A4F2BBD57816F98CA *)(ShapeModule_t3A89D143F5CAF357ECCE8B4A4F2BBD57816F98CA *)(&V_0), (float)L_110, /*hidden argument*/NULL);
		// break;
		goto IL_042c;
	}

IL_0412:
	{
		// instance.arc = reader.Read<System.Single>(ES3Type_float.Instance);
		ES3Reader_t2780AF8AA61DA2A817115CEF8612AC0E494D03C9 * L_111 = ___reader0;
		IL2CPP_RUNTIME_CLASS_INIT(ES3Type_float_tF86B773C86731BD9AD79448B860BBB178FE77644_il2cpp_TypeInfo_var);
		ES3Type_t8FBECB7AE75168648B9524E0C2A38DAD4555421D * L_112 = ((ES3Type_float_tF86B773C86731BD9AD79448B860BBB178FE77644_StaticFields*)il2cpp_codegen_static_fields_for(ES3Type_float_tF86B773C86731BD9AD79448B860BBB178FE77644_il2cpp_TypeInfo_var))->get_Instance_12();
		NullCheck((ES3Reader_t2780AF8AA61DA2A817115CEF8612AC0E494D03C9 *)L_111);
		float L_113;
		L_113 = GenericVirtFuncInvoker1< float, ES3Type_t8FBECB7AE75168648B9524E0C2A38DAD4555421D * >::Invoke(ES3Reader_Read_TisSingle_tE07797BA3C98D4CA9B5A19413C19A76688AB899E_m4A0416374498BDA042B8EB21E49B72326D6CE5F4_RuntimeMethod_var, (ES3Reader_t2780AF8AA61DA2A817115CEF8612AC0E494D03C9 *)L_111, (ES3Type_t8FBECB7AE75168648B9524E0C2A38DAD4555421D *)L_112);
		ShapeModule_set_arc_m4A2578EBD4747DB3D9ED74AB53E488872CFA541F((ShapeModule_t3A89D143F5CAF357ECCE8B4A4F2BBD57816F98CA *)(ShapeModule_t3A89D143F5CAF357ECCE8B4A4F2BBD57816F98CA *)(&V_0), (float)L_113, /*hidden argument*/NULL);
		// break;
		goto IL_042c;
	}

IL_0426:
	{
		// reader.Skip();
		ES3Reader_t2780AF8AA61DA2A817115CEF8612AC0E494D03C9 * L_114 = ___reader0;
		NullCheck((ES3Reader_t2780AF8AA61DA2A817115CEF8612AC0E494D03C9 *)L_114);
		VirtActionInvoker0::Invoke(41 /* System.Void ES3Reader::Skip() */, (ES3Reader_t2780AF8AA61DA2A817115CEF8612AC0E494D03C9 *)L_114);
	}

IL_042c:
	{
		// while((propertyName = reader.ReadPropertyName()) != null)
		ES3Reader_t2780AF8AA61DA2A817115CEF8612AC0E494D03C9 * L_115 = ___reader0;
		NullCheck((ES3Reader_t2780AF8AA61DA2A817115CEF8612AC0E494D03C9 *)L_115);
		String_t* L_116;
		L_116 = VirtFuncInvoker0< String_t* >::Invoke(21 /* System.String ES3Reader::ReadPropertyName() */, (ES3Reader_t2780AF8AA61DA2A817115CEF8612AC0E494D03C9 *)L_115);
		String_t* L_117 = (String_t*)L_116;
		V_1 = (String_t*)L_117;
		if (L_117)
		{
			goto IL_000c;
		}
	}
	{
		// }
		return;
	}
}
// System.Void ES3Types.ES3Type_ShapeModule::ReadInto<UnityEngine.ParticleSystem/NoiseModule>(ES3Reader,System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ES3Type_ShapeModule_ReadInto_TisNoiseModule_t74C71EB8386C1CF92A748B051690D34F4CB04591_m5B17A125EE4B43FECC582FE73C604FC7F97C6A4B_gshared (ES3Type_ShapeModule_t67010A74D4F69A245D5F06976239CAB4279B5377 * __this, ES3Reader_t2780AF8AA61DA2A817115CEF8612AC0E494D03C9 * ___reader0, RuntimeObject * ___obj1, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ES3Reader_Read_TisBoolean_t07D1E3F34E4813023D64F584DFF7B34C9D922F37_mC6D1B158268FF9B97822FF9F5B37FB1723FEDA22_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ES3Reader_Read_TisInt32_tFDE5F8CD43D10453F6A2E0C77FE48C6CC7009046_m2B74AA6627F5B1D21171D56C42F71DE5A7C1B4A6_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ES3Reader_Read_TisMeshRenderer_tCD983A2F635E12BCB0BAA2E635D96A318757908B_m773CE5481730EBCC6A377F918946EB11B304050A_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ES3Reader_Read_TisMesh_t2F5992DBA650D5862B43D3823ACD997132A57DA6_m65DF5BA41642A39B77979CC49472E4DE7A1660F9_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ES3Reader_Read_TisParticleSystemMeshShapeType_t7C9518403F30CC7AF7F9124FD61EC1187B42EFD2_mF1A19C0F8BBA6E44737F158F3BE4CC478F623F10_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ES3Reader_Read_TisParticleSystemShapeType_t5B09F3A5A637F57DB1B2A6518E214AA2AA53D70C_mAE53212CB1FDDA51CF8CD0D39FCD446087DACA48_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ES3Reader_Read_TisSingle_tE07797BA3C98D4CA9B5A19413C19A76688AB899E_m4A0416374498BDA042B8EB21E49B72326D6CE5F4_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ES3Reader_Read_TisSkinnedMeshRenderer_t126F4D6010E0F4B2685A7817B0A9171805D8F496_m23D6569D5CE7B3E1C67BDB470CDEDEF25A835F25_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ES3Reader_Read_TisVector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E_mBA4CD9D0F45E78BA43FE2DB8EC33CC3A5433DE15_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ES3Type_Vector3_tA9144E81A20D2F28726F02DE1AE6CD3F9C12B54F_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ES3Type_bool_t8F309F7B9CC735FF1DEE68081B6E3CAB367745F4_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ES3Type_float_tF86B773C86731BD9AD79448B860BBB178FE77644_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ES3Type_int_tF64C15D40AD0CC7C15BCD1CEC3C5C6BF837BD167_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ShapeModule_t3A89D143F5CAF357ECCE8B4A4F2BBD57816F98CA_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral01837E2252AC8026A5EA3567A663017A662FBB70);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral1228466552C1791B2019A329AFE94665D441168A);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral60E56797D122AE71D3774956F66C6EEB9EA22C05);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral6686C366F645244186604A3DA4B9A58012A85F1B);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral82BECCAD895076775062861CDB46AADEF913D969);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral8C9F18A4F030B96447955FBBA1A99FFC43B5D8E0);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral8E54BB51E569CB6A8D3C45D8AEF883A1559C1C0E);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral91811EE149061D28B38320E2430CE8888AD6398B);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralBD49F93A7BC78A69E385CEC0E78F434BD2845A17);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralCA1B66E295BD92E9FD3B6C708F09CA69A50BEFD1);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralE8744A8B8BD390EB66CA0CAE2376C973E6904FFB);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralEB0A157666700D8227FD4B66A26FDC02035E89BF);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralED1F119527A0BCA45125EF8E0F719985DA86C0E1);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralF66E9083C67855AB6EBB4B74342E385A72AACE32);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralF9BE17D634D1B07BCDCDA77A87710C946D81307B);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralF9D225733E1D10F9344C755C4A9C0870CD1DE97B);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralFA5EC7168E9633DAAEAA255ECB55030EA60F064F);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralFC341A1966AF28A9A7A26EDFB78ABBF7DE4D0E1F);
		s_Il2CppMethodInitialized = true;
	}
	ShapeModule_t3A89D143F5CAF357ECCE8B4A4F2BBD57816F98CA  V_0;
	memset((&V_0), 0, sizeof(V_0));
	String_t* V_1 = NULL;
	uint32_t V_2 = 0;
	{
		// var instance = (UnityEngine.ParticleSystem.ShapeModule)obj;
		RuntimeObject * L_0 = ___obj1;
		V_0 = (ShapeModule_t3A89D143F5CAF357ECCE8B4A4F2BBD57816F98CA )((*(ShapeModule_t3A89D143F5CAF357ECCE8B4A4F2BBD57816F98CA *)((ShapeModule_t3A89D143F5CAF357ECCE8B4A4F2BBD57816F98CA *)UnBox(L_0, ShapeModule_t3A89D143F5CAF357ECCE8B4A4F2BBD57816F98CA_il2cpp_TypeInfo_var))));
		goto IL_042c;
	}

IL_000c:
	{
		String_t* L_1 = V_1;
		if (!L_1)
		{
			goto IL_0426;
		}
	}
	{
		String_t* L_2 = V_1;
		uint32_t L_3;
		L_3 = U3CPrivateImplementationDetailsU3E_ComputeStringHash_m3ADC1F612F9EE3DD518E6F0023A0DE0EE2B120A7((String_t*)L_2, /*hidden argument*/NULL);
		V_2 = (uint32_t)L_3;
		uint32_t L_4 = V_2;
		if ((!(((uint32_t)L_4) <= ((uint32_t)((int32_t)-2104025999)))))
		{
			goto IL_00b3;
		}
	}
	{
		uint32_t L_5 = V_2;
		if ((!(((uint32_t)L_5) <= ((uint32_t)((int32_t)666576729)))))
		{
			goto IL_006a;
		}
	}
	{
		uint32_t L_6 = V_2;
		if ((!(((uint32_t)L_6) <= ((uint32_t)((int32_t)49525662)))))
		{
			goto IL_004f;
		}
	}
	{
		uint32_t L_7 = V_2;
		if ((((int32_t)L_7) == ((int32_t)((int32_t)24602224))))
		{
			goto IL_024d;
		}
	}
	{
		uint32_t L_8 = V_2;
		if ((((int32_t)L_8) == ((int32_t)((int32_t)49525662))))
		{
			goto IL_013c;
		}
	}
	{
		goto IL_0426;
	}

IL_004f:
	{
		uint32_t L_9 = V_2;
		if ((((int32_t)L_9) == ((int32_t)((int32_t)230313139))))
		{
			goto IL_01a5;
		}
	}
	{
		uint32_t L_10 = V_2;
		if ((((int32_t)L_10) == ((int32_t)((int32_t)666576729))))
		{
			goto IL_01f9;
		}
	}
	{
		goto IL_0426;
	}

IL_006a:
	{
		uint32_t L_11 = V_2;
		if ((!(((uint32_t)L_11) <= ((uint32_t)((int32_t)955488309)))))
		{
			goto IL_008d;
		}
	}
	{
		uint32_t L_12 = V_2;
		if ((((int32_t)L_12) == ((int32_t)((int32_t)923624301))))
		{
			goto IL_0238;
		}
	}
	{
		uint32_t L_13 = V_2;
		if ((((int32_t)L_13) == ((int32_t)((int32_t)955488309))))
		{
			goto IL_028c;
		}
	}
	{
		goto IL_0426;
	}

IL_008d:
	{
		uint32_t L_14 = V_2;
		if ((((int32_t)L_14) == ((int32_t)((int32_t)980363995))))
		{
			goto IL_02a1;
		}
	}
	{
		uint32_t L_15 = V_2;
		if ((((int32_t)L_15) == ((int32_t)((int32_t)985988853))))
		{
			goto IL_017b;
		}
	}
	{
		uint32_t L_16 = V_2;
		if ((((int32_t)L_16) == ((int32_t)((int32_t)-2104025999))))
		{
			goto IL_01e4;
		}
	}
	{
		goto IL_0426;
	}

IL_00b3:
	{
		uint32_t L_17 = V_2;
		if ((!(((uint32_t)L_17) <= ((uint32_t)((int32_t)-1473810612)))))
		{
			goto IL_00f6;
		}
	}
	{
		uint32_t L_18 = V_2;
		if ((!(((uint32_t)L_18) <= ((uint32_t)((int32_t)-1726928010)))))
		{
			goto IL_00db;
		}
	}
	{
		uint32_t L_19 = V_2;
		if ((((int32_t)L_19) == ((int32_t)((int32_t)-2083506667))))
		{
			goto IL_01cf;
		}
	}
	{
		uint32_t L_20 = V_2;
		if ((((int32_t)L_20) == ((int32_t)((int32_t)-1726928010))))
		{
			goto IL_0151;
		}
	}
	{
		goto IL_0426;
	}

IL_00db:
	{
		uint32_t L_21 = V_2;
		if ((((int32_t)L_21) == ((int32_t)((int32_t)-1593786692))))
		{
			goto IL_020e;
		}
	}
	{
		uint32_t L_22 = V_2;
		if ((((int32_t)L_22) == ((int32_t)((int32_t)-1473810612))))
		{
			goto IL_0190;
		}
	}
	{
		goto IL_0426;
	}

IL_00f6:
	{
		uint32_t L_23 = V_2;
		if ((!(((uint32_t)L_23) <= ((uint32_t)((int32_t)-1386986472)))))
		{
			goto IL_0116;
		}
	}
	{
		uint32_t L_24 = V_2;
		if ((((int32_t)L_24) == ((int32_t)((int32_t)-1412039661))))
		{
			goto IL_0166;
		}
	}
	{
		uint32_t L_25 = V_2;
		if ((((int32_t)L_25) == ((int32_t)((int32_t)-1386986472))))
		{
			goto IL_01ba;
		}
	}
	{
		goto IL_0426;
	}

IL_0116:
	{
		uint32_t L_26 = V_2;
		if ((((int32_t)L_26) == ((int32_t)((int32_t)-584064197))))
		{
			goto IL_0223;
		}
	}
	{
		uint32_t L_27 = V_2;
		if ((((int32_t)L_27) == ((int32_t)((int32_t)-473474755))))
		{
			goto IL_0277;
		}
	}
	{
		uint32_t L_28 = V_2;
		if ((((int32_t)L_28) == ((int32_t)((int32_t)-365686981))))
		{
			goto IL_0262;
		}
	}
	{
		goto IL_0426;
	}

IL_013c:
	{
		String_t* L_29 = V_1;
		bool L_30;
		L_30 = String_op_Equality_m50B3548E4AC232558190B0052877B290AA1D436A((String_t*)L_29, (String_t*)_stringLiteralF9D225733E1D10F9344C755C4A9C0870CD1DE97B, /*hidden argument*/NULL);
		if (L_30)
		{
			goto IL_02b6;
		}
	}
	{
		goto IL_0426;
	}

IL_0151:
	{
		String_t* L_31 = V_1;
		bool L_32;
		L_32 = String_op_Equality_m50B3548E4AC232558190B0052877B290AA1D436A((String_t*)L_31, (String_t*)_stringLiteral82BECCAD895076775062861CDB46AADEF913D969, /*hidden argument*/NULL);
		if (L_32)
		{
			goto IL_02cd;
		}
	}
	{
		goto IL_0426;
	}

IL_0166:
	{
		String_t* L_33 = V_1;
		bool L_34;
		L_34 = String_op_Equality_m50B3548E4AC232558190B0052877B290AA1D436A((String_t*)L_33, (String_t*)_stringLiteral1228466552C1791B2019A329AFE94665D441168A, /*hidden argument*/NULL);
		if (L_34)
		{
			goto IL_02df;
		}
	}
	{
		goto IL_0426;
	}

IL_017b:
	{
		String_t* L_35 = V_1;
		bool L_36;
		L_36 = String_op_Equality_m50B3548E4AC232558190B0052877B290AA1D436A((String_t*)L_35, (String_t*)_stringLiteralBD49F93A7BC78A69E385CEC0E78F434BD2845A17, /*hidden argument*/NULL);
		if (L_36)
		{
			goto IL_02f6;
		}
	}
	{
		goto IL_0426;
	}

IL_0190:
	{
		String_t* L_37 = V_1;
		bool L_38;
		L_38 = String_op_Equality_m50B3548E4AC232558190B0052877B290AA1D436A((String_t*)L_37, (String_t*)_stringLiteralED1F119527A0BCA45125EF8E0F719985DA86C0E1, /*hidden argument*/NULL);
		if (L_38)
		{
			goto IL_030d;
		}
	}
	{
		goto IL_0426;
	}

IL_01a5:
	{
		String_t* L_39 = V_1;
		bool L_40;
		L_40 = String_op_Equality_m50B3548E4AC232558190B0052877B290AA1D436A((String_t*)L_39, (String_t*)_stringLiteral8C9F18A4F030B96447955FBBA1A99FFC43B5D8E0, /*hidden argument*/NULL);
		if (L_40)
		{
			goto IL_0324;
		}
	}
	{
		goto IL_0426;
	}

IL_01ba:
	{
		String_t* L_41 = V_1;
		bool L_42;
		L_42 = String_op_Equality_m50B3548E4AC232558190B0052877B290AA1D436A((String_t*)L_41, (String_t*)_stringLiteralFC341A1966AF28A9A7A26EDFB78ABBF7DE4D0E1F, /*hidden argument*/NULL);
		if (L_42)
		{
			goto IL_033b;
		}
	}
	{
		goto IL_0426;
	}

IL_01cf:
	{
		String_t* L_43 = V_1;
		bool L_44;
		L_44 = String_op_Equality_m50B3548E4AC232558190B0052877B290AA1D436A((String_t*)L_43, (String_t*)_stringLiteralE8744A8B8BD390EB66CA0CAE2376C973E6904FFB, /*hidden argument*/NULL);
		if (L_44)
		{
			goto IL_0352;
		}
	}
	{
		goto IL_0426;
	}

IL_01e4:
	{
		String_t* L_45 = V_1;
		bool L_46;
		L_46 = String_op_Equality_m50B3548E4AC232558190B0052877B290AA1D436A((String_t*)L_45, (String_t*)_stringLiteralF9BE17D634D1B07BCDCDA77A87710C946D81307B, /*hidden argument*/NULL);
		if (L_46)
		{
			goto IL_0369;
		}
	}
	{
		goto IL_0426;
	}

IL_01f9:
	{
		String_t* L_47 = V_1;
		bool L_48;
		L_48 = String_op_Equality_m50B3548E4AC232558190B0052877B290AA1D436A((String_t*)L_47, (String_t*)_stringLiteralFA5EC7168E9633DAAEAA255ECB55030EA60F064F, /*hidden argument*/NULL);
		if (L_48)
		{
			goto IL_0380;
		}
	}
	{
		goto IL_0426;
	}

IL_020e:
	{
		String_t* L_49 = V_1;
		bool L_50;
		L_50 = String_op_Equality_m50B3548E4AC232558190B0052877B290AA1D436A((String_t*)L_49, (String_t*)_stringLiteralEB0A157666700D8227FD4B66A26FDC02035E89BF, /*hidden argument*/NULL);
		if (L_50)
		{
			goto IL_0392;
		}
	}
	{
		goto IL_0426;
	}

IL_0223:
	{
		String_t* L_51 = V_1;
		bool L_52;
		L_52 = String_op_Equality_m50B3548E4AC232558190B0052877B290AA1D436A((String_t*)L_51, (String_t*)_stringLiteral8E54BB51E569CB6A8D3C45D8AEF883A1559C1C0E, /*hidden argument*/NULL);
		if (L_52)
		{
			goto IL_03a4;
		}
	}
	{
		goto IL_0426;
	}

IL_0238:
	{
		String_t* L_53 = V_1;
		bool L_54;
		L_54 = String_op_Equality_m50B3548E4AC232558190B0052877B290AA1D436A((String_t*)L_53, (String_t*)_stringLiteral60E56797D122AE71D3774956F66C6EEB9EA22C05, /*hidden argument*/NULL);
		if (L_54)
		{
			goto IL_03b3;
		}
	}
	{
		goto IL_0426;
	}

IL_024d:
	{
		String_t* L_55 = V_1;
		bool L_56;
		L_56 = String_op_Equality_m50B3548E4AC232558190B0052877B290AA1D436A((String_t*)L_55, (String_t*)_stringLiteral01837E2252AC8026A5EA3567A663017A662FBB70, /*hidden argument*/NULL);
		if (L_56)
		{
			goto IL_03c2;
		}
	}
	{
		goto IL_0426;
	}

IL_0262:
	{
		String_t* L_57 = V_1;
		bool L_58;
		L_58 = String_op_Equality_m50B3548E4AC232558190B0052877B290AA1D436A((String_t*)L_57, (String_t*)_stringLiteralF66E9083C67855AB6EBB4B74342E385A72AACE32, /*hidden argument*/NULL);
		if (L_58)
		{
			goto IL_03d6;
		}
	}
	{
		goto IL_0426;
	}

IL_0277:
	{
		String_t* L_59 = V_1;
		bool L_60;
		L_60 = String_op_Equality_m50B3548E4AC232558190B0052877B290AA1D436A((String_t*)L_59, (String_t*)_stringLiteral91811EE149061D28B38320E2430CE8888AD6398B, /*hidden argument*/NULL);
		if (L_60)
		{
			goto IL_03ea;
		}
	}
	{
		goto IL_0426;
	}

IL_028c:
	{
		String_t* L_61 = V_1;
		bool L_62;
		L_62 = String_op_Equality_m50B3548E4AC232558190B0052877B290AA1D436A((String_t*)L_61, (String_t*)_stringLiteral6686C366F645244186604A3DA4B9A58012A85F1B, /*hidden argument*/NULL);
		if (L_62)
		{
			goto IL_03fe;
		}
	}
	{
		goto IL_0426;
	}

IL_02a1:
	{
		String_t* L_63 = V_1;
		bool L_64;
		L_64 = String_op_Equality_m50B3548E4AC232558190B0052877B290AA1D436A((String_t*)L_63, (String_t*)_stringLiteralCA1B66E295BD92E9FD3B6C708F09CA69A50BEFD1, /*hidden argument*/NULL);
		if (L_64)
		{
			goto IL_0412;
		}
	}
	{
		goto IL_0426;
	}

IL_02b6:
	{
		// instance.enabled = reader.Read<System.Boolean>(ES3Type_bool.Instance);
		ES3Reader_t2780AF8AA61DA2A817115CEF8612AC0E494D03C9 * L_65 = ___reader0;
		IL2CPP_RUNTIME_CLASS_INIT(ES3Type_bool_t8F309F7B9CC735FF1DEE68081B6E3CAB367745F4_il2cpp_TypeInfo_var);
		ES3Type_t8FBECB7AE75168648B9524E0C2A38DAD4555421D * L_66 = ((ES3Type_bool_t8F309F7B9CC735FF1DEE68081B6E3CAB367745F4_StaticFields*)il2cpp_codegen_static_fields_for(ES3Type_bool_t8F309F7B9CC735FF1DEE68081B6E3CAB367745F4_il2cpp_TypeInfo_var))->get_Instance_12();
		NullCheck((ES3Reader_t2780AF8AA61DA2A817115CEF8612AC0E494D03C9 *)L_65);
		bool L_67;
		L_67 = GenericVirtFuncInvoker1< bool, ES3Type_t8FBECB7AE75168648B9524E0C2A38DAD4555421D * >::Invoke(ES3Reader_Read_TisBoolean_t07D1E3F34E4813023D64F584DFF7B34C9D922F37_mC6D1B158268FF9B97822FF9F5B37FB1723FEDA22_RuntimeMethod_var, (ES3Reader_t2780AF8AA61DA2A817115CEF8612AC0E494D03C9 *)L_65, (ES3Type_t8FBECB7AE75168648B9524E0C2A38DAD4555421D *)L_66);
		ShapeModule_set_enabled_mF6FE8ED99E482A739C00F894235F4E2CD09B0D1E((ShapeModule_t3A89D143F5CAF357ECCE8B4A4F2BBD57816F98CA *)(ShapeModule_t3A89D143F5CAF357ECCE8B4A4F2BBD57816F98CA *)(&V_0), (bool)L_67, /*hidden argument*/NULL);
		// break;
		goto IL_042c;
	}

IL_02cd:
	{
		// instance.shapeType = reader.Read<UnityEngine.ParticleSystemShapeType>();
		ES3Reader_t2780AF8AA61DA2A817115CEF8612AC0E494D03C9 * L_68 = ___reader0;
		NullCheck((ES3Reader_t2780AF8AA61DA2A817115CEF8612AC0E494D03C9 *)L_68);
		int32_t L_69;
		L_69 = GenericVirtFuncInvoker0< int32_t >::Invoke(ES3Reader_Read_TisParticleSystemShapeType_t5B09F3A5A637F57DB1B2A6518E214AA2AA53D70C_mAE53212CB1FDDA51CF8CD0D39FCD446087DACA48_RuntimeMethod_var, (ES3Reader_t2780AF8AA61DA2A817115CEF8612AC0E494D03C9 *)L_68);
		ShapeModule_set_shapeType_mB772084527742749EB6AD690BAE47215FC71040D((ShapeModule_t3A89D143F5CAF357ECCE8B4A4F2BBD57816F98CA *)(ShapeModule_t3A89D143F5CAF357ECCE8B4A4F2BBD57816F98CA *)(&V_0), (int32_t)L_69, /*hidden argument*/NULL);
		// break;
		goto IL_042c;
	}

IL_02df:
	{
		// instance.randomDirectionAmount = reader.Read<System.Single>(ES3Type_float.Instance);
		ES3Reader_t2780AF8AA61DA2A817115CEF8612AC0E494D03C9 * L_70 = ___reader0;
		IL2CPP_RUNTIME_CLASS_INIT(ES3Type_float_tF86B773C86731BD9AD79448B860BBB178FE77644_il2cpp_TypeInfo_var);
		ES3Type_t8FBECB7AE75168648B9524E0C2A38DAD4555421D * L_71 = ((ES3Type_float_tF86B773C86731BD9AD79448B860BBB178FE77644_StaticFields*)il2cpp_codegen_static_fields_for(ES3Type_float_tF86B773C86731BD9AD79448B860BBB178FE77644_il2cpp_TypeInfo_var))->get_Instance_12();
		NullCheck((ES3Reader_t2780AF8AA61DA2A817115CEF8612AC0E494D03C9 *)L_70);
		float L_72;
		L_72 = GenericVirtFuncInvoker1< float, ES3Type_t8FBECB7AE75168648B9524E0C2A38DAD4555421D * >::Invoke(ES3Reader_Read_TisSingle_tE07797BA3C98D4CA9B5A19413C19A76688AB899E_m4A0416374498BDA042B8EB21E49B72326D6CE5F4_RuntimeMethod_var, (ES3Reader_t2780AF8AA61DA2A817115CEF8612AC0E494D03C9 *)L_70, (ES3Type_t8FBECB7AE75168648B9524E0C2A38DAD4555421D *)L_71);
		ShapeModule_set_randomDirectionAmount_m4E1BB67600D57383945F75F5A179EEEC01A76885((ShapeModule_t3A89D143F5CAF357ECCE8B4A4F2BBD57816F98CA *)(ShapeModule_t3A89D143F5CAF357ECCE8B4A4F2BBD57816F98CA *)(&V_0), (float)L_72, /*hidden argument*/NULL);
		// break;
		goto IL_042c;
	}

IL_02f6:
	{
		// instance.sphericalDirectionAmount = reader.Read<System.Single>(ES3Type_float.Instance);
		ES3Reader_t2780AF8AA61DA2A817115CEF8612AC0E494D03C9 * L_73 = ___reader0;
		IL2CPP_RUNTIME_CLASS_INIT(ES3Type_float_tF86B773C86731BD9AD79448B860BBB178FE77644_il2cpp_TypeInfo_var);
		ES3Type_t8FBECB7AE75168648B9524E0C2A38DAD4555421D * L_74 = ((ES3Type_float_tF86B773C86731BD9AD79448B860BBB178FE77644_StaticFields*)il2cpp_codegen_static_fields_for(ES3Type_float_tF86B773C86731BD9AD79448B860BBB178FE77644_il2cpp_TypeInfo_var))->get_Instance_12();
		NullCheck((ES3Reader_t2780AF8AA61DA2A817115CEF8612AC0E494D03C9 *)L_73);
		float L_75;
		L_75 = GenericVirtFuncInvoker1< float, ES3Type_t8FBECB7AE75168648B9524E0C2A38DAD4555421D * >::Invoke(ES3Reader_Read_TisSingle_tE07797BA3C98D4CA9B5A19413C19A76688AB899E_m4A0416374498BDA042B8EB21E49B72326D6CE5F4_RuntimeMethod_var, (ES3Reader_t2780AF8AA61DA2A817115CEF8612AC0E494D03C9 *)L_73, (ES3Type_t8FBECB7AE75168648B9524E0C2A38DAD4555421D *)L_74);
		ShapeModule_set_sphericalDirectionAmount_m02A9FBFF18AF24B821801DF5D833CA20A569F62B((ShapeModule_t3A89D143F5CAF357ECCE8B4A4F2BBD57816F98CA *)(ShapeModule_t3A89D143F5CAF357ECCE8B4A4F2BBD57816F98CA *)(&V_0), (float)L_75, /*hidden argument*/NULL);
		// break;
		goto IL_042c;
	}

IL_030d:
	{
		// instance.alignToDirection = reader.Read<System.Boolean>(ES3Type_bool.Instance);
		ES3Reader_t2780AF8AA61DA2A817115CEF8612AC0E494D03C9 * L_76 = ___reader0;
		IL2CPP_RUNTIME_CLASS_INIT(ES3Type_bool_t8F309F7B9CC735FF1DEE68081B6E3CAB367745F4_il2cpp_TypeInfo_var);
		ES3Type_t8FBECB7AE75168648B9524E0C2A38DAD4555421D * L_77 = ((ES3Type_bool_t8F309F7B9CC735FF1DEE68081B6E3CAB367745F4_StaticFields*)il2cpp_codegen_static_fields_for(ES3Type_bool_t8F309F7B9CC735FF1DEE68081B6E3CAB367745F4_il2cpp_TypeInfo_var))->get_Instance_12();
		NullCheck((ES3Reader_t2780AF8AA61DA2A817115CEF8612AC0E494D03C9 *)L_76);
		bool L_78;
		L_78 = GenericVirtFuncInvoker1< bool, ES3Type_t8FBECB7AE75168648B9524E0C2A38DAD4555421D * >::Invoke(ES3Reader_Read_TisBoolean_t07D1E3F34E4813023D64F584DFF7B34C9D922F37_mC6D1B158268FF9B97822FF9F5B37FB1723FEDA22_RuntimeMethod_var, (ES3Reader_t2780AF8AA61DA2A817115CEF8612AC0E494D03C9 *)L_76, (ES3Type_t8FBECB7AE75168648B9524E0C2A38DAD4555421D *)L_77);
		ShapeModule_set_alignToDirection_m396A57DCAD5F194E4DDDA0DF9C35E5508E3641BE((ShapeModule_t3A89D143F5CAF357ECCE8B4A4F2BBD57816F98CA *)(ShapeModule_t3A89D143F5CAF357ECCE8B4A4F2BBD57816F98CA *)(&V_0), (bool)L_78, /*hidden argument*/NULL);
		// break;
		goto IL_042c;
	}

IL_0324:
	{
		// instance.radius = reader.Read<System.Single>(ES3Type_float.Instance);
		ES3Reader_t2780AF8AA61DA2A817115CEF8612AC0E494D03C9 * L_79 = ___reader0;
		IL2CPP_RUNTIME_CLASS_INIT(ES3Type_float_tF86B773C86731BD9AD79448B860BBB178FE77644_il2cpp_TypeInfo_var);
		ES3Type_t8FBECB7AE75168648B9524E0C2A38DAD4555421D * L_80 = ((ES3Type_float_tF86B773C86731BD9AD79448B860BBB178FE77644_StaticFields*)il2cpp_codegen_static_fields_for(ES3Type_float_tF86B773C86731BD9AD79448B860BBB178FE77644_il2cpp_TypeInfo_var))->get_Instance_12();
		NullCheck((ES3Reader_t2780AF8AA61DA2A817115CEF8612AC0E494D03C9 *)L_79);
		float L_81;
		L_81 = GenericVirtFuncInvoker1< float, ES3Type_t8FBECB7AE75168648B9524E0C2A38DAD4555421D * >::Invoke(ES3Reader_Read_TisSingle_tE07797BA3C98D4CA9B5A19413C19A76688AB899E_m4A0416374498BDA042B8EB21E49B72326D6CE5F4_RuntimeMethod_var, (ES3Reader_t2780AF8AA61DA2A817115CEF8612AC0E494D03C9 *)L_79, (ES3Type_t8FBECB7AE75168648B9524E0C2A38DAD4555421D *)L_80);
		ShapeModule_set_radius_mFC12B15750268316924771461C09B1A311A16DEA((ShapeModule_t3A89D143F5CAF357ECCE8B4A4F2BBD57816F98CA *)(ShapeModule_t3A89D143F5CAF357ECCE8B4A4F2BBD57816F98CA *)(&V_0), (float)L_81, /*hidden argument*/NULL);
		// break;
		goto IL_042c;
	}

IL_033b:
	{
		// instance.angle = reader.Read<System.Single>(ES3Type_float.Instance);
		ES3Reader_t2780AF8AA61DA2A817115CEF8612AC0E494D03C9 * L_82 = ___reader0;
		IL2CPP_RUNTIME_CLASS_INIT(ES3Type_float_tF86B773C86731BD9AD79448B860BBB178FE77644_il2cpp_TypeInfo_var);
		ES3Type_t8FBECB7AE75168648B9524E0C2A38DAD4555421D * L_83 = ((ES3Type_float_tF86B773C86731BD9AD79448B860BBB178FE77644_StaticFields*)il2cpp_codegen_static_fields_for(ES3Type_float_tF86B773C86731BD9AD79448B860BBB178FE77644_il2cpp_TypeInfo_var))->get_Instance_12();
		NullCheck((ES3Reader_t2780AF8AA61DA2A817115CEF8612AC0E494D03C9 *)L_82);
		float L_84;
		L_84 = GenericVirtFuncInvoker1< float, ES3Type_t8FBECB7AE75168648B9524E0C2A38DAD4555421D * >::Invoke(ES3Reader_Read_TisSingle_tE07797BA3C98D4CA9B5A19413C19A76688AB899E_m4A0416374498BDA042B8EB21E49B72326D6CE5F4_RuntimeMethod_var, (ES3Reader_t2780AF8AA61DA2A817115CEF8612AC0E494D03C9 *)L_82, (ES3Type_t8FBECB7AE75168648B9524E0C2A38DAD4555421D *)L_83);
		ShapeModule_set_angle_m20629BB5FE89F2040960548B45F6EC801B1DB8AA((ShapeModule_t3A89D143F5CAF357ECCE8B4A4F2BBD57816F98CA *)(ShapeModule_t3A89D143F5CAF357ECCE8B4A4F2BBD57816F98CA *)(&V_0), (float)L_84, /*hidden argument*/NULL);
		// break;
		goto IL_042c;
	}

IL_0352:
	{
		// instance.length = reader.Read<System.Single>(ES3Type_float.Instance);
		ES3Reader_t2780AF8AA61DA2A817115CEF8612AC0E494D03C9 * L_85 = ___reader0;
		IL2CPP_RUNTIME_CLASS_INIT(ES3Type_float_tF86B773C86731BD9AD79448B860BBB178FE77644_il2cpp_TypeInfo_var);
		ES3Type_t8FBECB7AE75168648B9524E0C2A38DAD4555421D * L_86 = ((ES3Type_float_tF86B773C86731BD9AD79448B860BBB178FE77644_StaticFields*)il2cpp_codegen_static_fields_for(ES3Type_float_tF86B773C86731BD9AD79448B860BBB178FE77644_il2cpp_TypeInfo_var))->get_Instance_12();
		NullCheck((ES3Reader_t2780AF8AA61DA2A817115CEF8612AC0E494D03C9 *)L_85);
		float L_87;
		L_87 = GenericVirtFuncInvoker1< float, ES3Type_t8FBECB7AE75168648B9524E0C2A38DAD4555421D * >::Invoke(ES3Reader_Read_TisSingle_tE07797BA3C98D4CA9B5A19413C19A76688AB899E_m4A0416374498BDA042B8EB21E49B72326D6CE5F4_RuntimeMethod_var, (ES3Reader_t2780AF8AA61DA2A817115CEF8612AC0E494D03C9 *)L_85, (ES3Type_t8FBECB7AE75168648B9524E0C2A38DAD4555421D *)L_86);
		ShapeModule_set_length_m744975258664B53F38A8B8BE38A86A0FFDD85BC7((ShapeModule_t3A89D143F5CAF357ECCE8B4A4F2BBD57816F98CA *)(ShapeModule_t3A89D143F5CAF357ECCE8B4A4F2BBD57816F98CA *)(&V_0), (float)L_87, /*hidden argument*/NULL);
		// break;
		goto IL_042c;
	}

IL_0369:
	{
		// instance.scale = reader.Read<UnityEngine.Vector3>(ES3Type_Vector3.Instance);
		ES3Reader_t2780AF8AA61DA2A817115CEF8612AC0E494D03C9 * L_88 = ___reader0;
		IL2CPP_RUNTIME_CLASS_INIT(ES3Type_Vector3_tA9144E81A20D2F28726F02DE1AE6CD3F9C12B54F_il2cpp_TypeInfo_var);
		ES3Type_t8FBECB7AE75168648B9524E0C2A38DAD4555421D * L_89 = ((ES3Type_Vector3_tA9144E81A20D2F28726F02DE1AE6CD3F9C12B54F_StaticFields*)il2cpp_codegen_static_fields_for(ES3Type_Vector3_tA9144E81A20D2F28726F02DE1AE6CD3F9C12B54F_il2cpp_TypeInfo_var))->get_Instance_12();
		NullCheck((ES3Reader_t2780AF8AA61DA2A817115CEF8612AC0E494D03C9 *)L_88);
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_90;
		L_90 = GenericVirtFuncInvoker1< Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E , ES3Type_t8FBECB7AE75168648B9524E0C2A38DAD4555421D * >::Invoke(ES3Reader_Read_TisVector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E_mBA4CD9D0F45E78BA43FE2DB8EC33CC3A5433DE15_RuntimeMethod_var, (ES3Reader_t2780AF8AA61DA2A817115CEF8612AC0E494D03C9 *)L_88, (ES3Type_t8FBECB7AE75168648B9524E0C2A38DAD4555421D *)L_89);
		ShapeModule_set_scale_m2951583898F18878E6F238100045072F44AD9158((ShapeModule_t3A89D143F5CAF357ECCE8B4A4F2BBD57816F98CA *)(ShapeModule_t3A89D143F5CAF357ECCE8B4A4F2BBD57816F98CA *)(&V_0), (Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E )L_90, /*hidden argument*/NULL);
		// break;
		goto IL_042c;
	}

IL_0380:
	{
		// instance.meshShapeType = reader.Read<UnityEngine.ParticleSystemMeshShapeType>();
		ES3Reader_t2780AF8AA61DA2A817115CEF8612AC0E494D03C9 * L_91 = ___reader0;
		NullCheck((ES3Reader_t2780AF8AA61DA2A817115CEF8612AC0E494D03C9 *)L_91);
		int32_t L_92;
		L_92 = GenericVirtFuncInvoker0< int32_t >::Invoke(ES3Reader_Read_TisParticleSystemMeshShapeType_t7C9518403F30CC7AF7F9124FD61EC1187B42EFD2_mF1A19C0F8BBA6E44737F158F3BE4CC478F623F10_RuntimeMethod_var, (ES3Reader_t2780AF8AA61DA2A817115CEF8612AC0E494D03C9 *)L_91);
		ShapeModule_set_meshShapeType_m5DAD94B71F2110F45E454C30DE052153129891C2((ShapeModule_t3A89D143F5CAF357ECCE8B4A4F2BBD57816F98CA *)(ShapeModule_t3A89D143F5CAF357ECCE8B4A4F2BBD57816F98CA *)(&V_0), (int32_t)L_92, /*hidden argument*/NULL);
		// break;
		goto IL_042c;
	}

IL_0392:
	{
		// instance.mesh = reader.Read<UnityEngine.Mesh>();
		ES3Reader_t2780AF8AA61DA2A817115CEF8612AC0E494D03C9 * L_93 = ___reader0;
		NullCheck((ES3Reader_t2780AF8AA61DA2A817115CEF8612AC0E494D03C9 *)L_93);
		Mesh_t2F5992DBA650D5862B43D3823ACD997132A57DA6 * L_94;
		L_94 = GenericVirtFuncInvoker0< Mesh_t2F5992DBA650D5862B43D3823ACD997132A57DA6 * >::Invoke(ES3Reader_Read_TisMesh_t2F5992DBA650D5862B43D3823ACD997132A57DA6_m65DF5BA41642A39B77979CC49472E4DE7A1660F9_RuntimeMethod_var, (ES3Reader_t2780AF8AA61DA2A817115CEF8612AC0E494D03C9 *)L_93);
		ShapeModule_set_mesh_mD3E276A9E45442E75AD8A9AA4BD88C9112BD77CA((ShapeModule_t3A89D143F5CAF357ECCE8B4A4F2BBD57816F98CA *)(ShapeModule_t3A89D143F5CAF357ECCE8B4A4F2BBD57816F98CA *)(&V_0), (Mesh_t2F5992DBA650D5862B43D3823ACD997132A57DA6 *)L_94, /*hidden argument*/NULL);
		// break;
		goto IL_042c;
	}

IL_03a4:
	{
		// instance.meshRenderer = reader.Read<UnityEngine.MeshRenderer>();
		ES3Reader_t2780AF8AA61DA2A817115CEF8612AC0E494D03C9 * L_95 = ___reader0;
		NullCheck((ES3Reader_t2780AF8AA61DA2A817115CEF8612AC0E494D03C9 *)L_95);
		MeshRenderer_tCD983A2F635E12BCB0BAA2E635D96A318757908B * L_96;
		L_96 = GenericVirtFuncInvoker0< MeshRenderer_tCD983A2F635E12BCB0BAA2E635D96A318757908B * >::Invoke(ES3Reader_Read_TisMeshRenderer_tCD983A2F635E12BCB0BAA2E635D96A318757908B_m773CE5481730EBCC6A377F918946EB11B304050A_RuntimeMethod_var, (ES3Reader_t2780AF8AA61DA2A817115CEF8612AC0E494D03C9 *)L_95);
		ShapeModule_set_meshRenderer_m334D69AC8C29F5E393732D62BBB3645296614059((ShapeModule_t3A89D143F5CAF357ECCE8B4A4F2BBD57816F98CA *)(ShapeModule_t3A89D143F5CAF357ECCE8B4A4F2BBD57816F98CA *)(&V_0), (MeshRenderer_tCD983A2F635E12BCB0BAA2E635D96A318757908B *)L_96, /*hidden argument*/NULL);
		// break;
		goto IL_042c;
	}

IL_03b3:
	{
		// instance.skinnedMeshRenderer = reader.Read<UnityEngine.SkinnedMeshRenderer>();
		ES3Reader_t2780AF8AA61DA2A817115CEF8612AC0E494D03C9 * L_97 = ___reader0;
		NullCheck((ES3Reader_t2780AF8AA61DA2A817115CEF8612AC0E494D03C9 *)L_97);
		SkinnedMeshRenderer_t126F4D6010E0F4B2685A7817B0A9171805D8F496 * L_98;
		L_98 = GenericVirtFuncInvoker0< SkinnedMeshRenderer_t126F4D6010E0F4B2685A7817B0A9171805D8F496 * >::Invoke(ES3Reader_Read_TisSkinnedMeshRenderer_t126F4D6010E0F4B2685A7817B0A9171805D8F496_m23D6569D5CE7B3E1C67BDB470CDEDEF25A835F25_RuntimeMethod_var, (ES3Reader_t2780AF8AA61DA2A817115CEF8612AC0E494D03C9 *)L_97);
		ShapeModule_set_skinnedMeshRenderer_m9DEF9CD332D3F10BE7D99EFECC0971FB5AE83F56((ShapeModule_t3A89D143F5CAF357ECCE8B4A4F2BBD57816F98CA *)(ShapeModule_t3A89D143F5CAF357ECCE8B4A4F2BBD57816F98CA *)(&V_0), (SkinnedMeshRenderer_t126F4D6010E0F4B2685A7817B0A9171805D8F496 *)L_98, /*hidden argument*/NULL);
		// break;
		goto IL_042c;
	}

IL_03c2:
	{
		// instance.useMeshMaterialIndex = reader.Read<System.Boolean>(ES3Type_bool.Instance);
		ES3Reader_t2780AF8AA61DA2A817115CEF8612AC0E494D03C9 * L_99 = ___reader0;
		IL2CPP_RUNTIME_CLASS_INIT(ES3Type_bool_t8F309F7B9CC735FF1DEE68081B6E3CAB367745F4_il2cpp_TypeInfo_var);
		ES3Type_t8FBECB7AE75168648B9524E0C2A38DAD4555421D * L_100 = ((ES3Type_bool_t8F309F7B9CC735FF1DEE68081B6E3CAB367745F4_StaticFields*)il2cpp_codegen_static_fields_for(ES3Type_bool_t8F309F7B9CC735FF1DEE68081B6E3CAB367745F4_il2cpp_TypeInfo_var))->get_Instance_12();
		NullCheck((ES3Reader_t2780AF8AA61DA2A817115CEF8612AC0E494D03C9 *)L_99);
		bool L_101;
		L_101 = GenericVirtFuncInvoker1< bool, ES3Type_t8FBECB7AE75168648B9524E0C2A38DAD4555421D * >::Invoke(ES3Reader_Read_TisBoolean_t07D1E3F34E4813023D64F584DFF7B34C9D922F37_mC6D1B158268FF9B97822FF9F5B37FB1723FEDA22_RuntimeMethod_var, (ES3Reader_t2780AF8AA61DA2A817115CEF8612AC0E494D03C9 *)L_99, (ES3Type_t8FBECB7AE75168648B9524E0C2A38DAD4555421D *)L_100);
		ShapeModule_set_useMeshMaterialIndex_m6130573C0966ED3B5C590665747305BCEFD3F901((ShapeModule_t3A89D143F5CAF357ECCE8B4A4F2BBD57816F98CA *)(ShapeModule_t3A89D143F5CAF357ECCE8B4A4F2BBD57816F98CA *)(&V_0), (bool)L_101, /*hidden argument*/NULL);
		// break;
		goto IL_042c;
	}

IL_03d6:
	{
		// instance.meshMaterialIndex = reader.Read<System.Int32>(ES3Type_int.Instance);
		ES3Reader_t2780AF8AA61DA2A817115CEF8612AC0E494D03C9 * L_102 = ___reader0;
		IL2CPP_RUNTIME_CLASS_INIT(ES3Type_int_tF64C15D40AD0CC7C15BCD1CEC3C5C6BF837BD167_il2cpp_TypeInfo_var);
		ES3Type_t8FBECB7AE75168648B9524E0C2A38DAD4555421D * L_103 = ((ES3Type_int_tF64C15D40AD0CC7C15BCD1CEC3C5C6BF837BD167_StaticFields*)il2cpp_codegen_static_fields_for(ES3Type_int_tF64C15D40AD0CC7C15BCD1CEC3C5C6BF837BD167_il2cpp_TypeInfo_var))->get_Instance_12();
		NullCheck((ES3Reader_t2780AF8AA61DA2A817115CEF8612AC0E494D03C9 *)L_102);
		int32_t L_104;
		L_104 = GenericVirtFuncInvoker1< int32_t, ES3Type_t8FBECB7AE75168648B9524E0C2A38DAD4555421D * >::Invoke(ES3Reader_Read_TisInt32_tFDE5F8CD43D10453F6A2E0C77FE48C6CC7009046_m2B74AA6627F5B1D21171D56C42F71DE5A7C1B4A6_RuntimeMethod_var, (ES3Reader_t2780AF8AA61DA2A817115CEF8612AC0E494D03C9 *)L_102, (ES3Type_t8FBECB7AE75168648B9524E0C2A38DAD4555421D *)L_103);
		ShapeModule_set_meshMaterialIndex_m1205DDEB353204D5941654FB79164AD5BAF0A59C((ShapeModule_t3A89D143F5CAF357ECCE8B4A4F2BBD57816F98CA *)(ShapeModule_t3A89D143F5CAF357ECCE8B4A4F2BBD57816F98CA *)(&V_0), (int32_t)L_104, /*hidden argument*/NULL);
		// break;
		goto IL_042c;
	}

IL_03ea:
	{
		// instance.useMeshColors = reader.Read<System.Boolean>(ES3Type_bool.Instance);
		ES3Reader_t2780AF8AA61DA2A817115CEF8612AC0E494D03C9 * L_105 = ___reader0;
		IL2CPP_RUNTIME_CLASS_INIT(ES3Type_bool_t8F309F7B9CC735FF1DEE68081B6E3CAB367745F4_il2cpp_TypeInfo_var);
		ES3Type_t8FBECB7AE75168648B9524E0C2A38DAD4555421D * L_106 = ((ES3Type_bool_t8F309F7B9CC735FF1DEE68081B6E3CAB367745F4_StaticFields*)il2cpp_codegen_static_fields_for(ES3Type_bool_t8F309F7B9CC735FF1DEE68081B6E3CAB367745F4_il2cpp_TypeInfo_var))->get_Instance_12();
		NullCheck((ES3Reader_t2780AF8AA61DA2A817115CEF8612AC0E494D03C9 *)L_105);
		bool L_107;
		L_107 = GenericVirtFuncInvoker1< bool, ES3Type_t8FBECB7AE75168648B9524E0C2A38DAD4555421D * >::Invoke(ES3Reader_Read_TisBoolean_t07D1E3F34E4813023D64F584DFF7B34C9D922F37_mC6D1B158268FF9B97822FF9F5B37FB1723FEDA22_RuntimeMethod_var, (ES3Reader_t2780AF8AA61DA2A817115CEF8612AC0E494D03C9 *)L_105, (ES3Type_t8FBECB7AE75168648B9524E0C2A38DAD4555421D *)L_106);
		ShapeModule_set_useMeshColors_m071D000F330805B1EBCF09B40AC4EB9942EB9F57((ShapeModule_t3A89D143F5CAF357ECCE8B4A4F2BBD57816F98CA *)(ShapeModule_t3A89D143F5CAF357ECCE8B4A4F2BBD57816F98CA *)(&V_0), (bool)L_107, /*hidden argument*/NULL);
		// break;
		goto IL_042c;
	}

IL_03fe:
	{
		// instance.normalOffset = reader.Read<System.Single>(ES3Type_float.Instance);
		ES3Reader_t2780AF8AA61DA2A817115CEF8612AC0E494D03C9 * L_108 = ___reader0;
		IL2CPP_RUNTIME_CLASS_INIT(ES3Type_float_tF86B773C86731BD9AD79448B860BBB178FE77644_il2cpp_TypeInfo_var);
		ES3Type_t8FBECB7AE75168648B9524E0C2A38DAD4555421D * L_109 = ((ES3Type_float_tF86B773C86731BD9AD79448B860BBB178FE77644_StaticFields*)il2cpp_codegen_static_fields_for(ES3Type_float_tF86B773C86731BD9AD79448B860BBB178FE77644_il2cpp_TypeInfo_var))->get_Instance_12();
		NullCheck((ES3Reader_t2780AF8AA61DA2A817115CEF8612AC0E494D03C9 *)L_108);
		float L_110;
		L_110 = GenericVirtFuncInvoker1< float, ES3Type_t8FBECB7AE75168648B9524E0C2A38DAD4555421D * >::Invoke(ES3Reader_Read_TisSingle_tE07797BA3C98D4CA9B5A19413C19A76688AB899E_m4A0416374498BDA042B8EB21E49B72326D6CE5F4_RuntimeMethod_var, (ES3Reader_t2780AF8AA61DA2A817115CEF8612AC0E494D03C9 *)L_108, (ES3Type_t8FBECB7AE75168648B9524E0C2A38DAD4555421D *)L_109);
		ShapeModule_set_normalOffset_m81A315286BAA5F52AAED6B317734FB03B2DCE9FD((ShapeModule_t3A89D143F5CAF357ECCE8B4A4F2BBD57816F98CA *)(ShapeModule_t3A89D143F5CAF357ECCE8B4A4F2BBD57816F98CA *)(&V_0), (float)L_110, /*hidden argument*/NULL);
		// break;
		goto IL_042c;
	}

IL_0412:
	{
		// instance.arc = reader.Read<System.Single>(ES3Type_float.Instance);
		ES3Reader_t2780AF8AA61DA2A817115CEF8612AC0E494D03C9 * L_111 = ___reader0;
		IL2CPP_RUNTIME_CLASS_INIT(ES3Type_float_tF86B773C86731BD9AD79448B860BBB178FE77644_il2cpp_TypeInfo_var);
		ES3Type_t8FBECB7AE75168648B9524E0C2A38DAD4555421D * L_112 = ((ES3Type_float_tF86B773C86731BD9AD79448B860BBB178FE77644_StaticFields*)il2cpp_codegen_static_fields_for(ES3Type_float_tF86B773C86731BD9AD79448B860BBB178FE77644_il2cpp_TypeInfo_var))->get_Instance_12();
		NullCheck((ES3Reader_t2780AF8AA61DA2A817115CEF8612AC0E494D03C9 *)L_111);
		float L_113;
		L_113 = GenericVirtFuncInvoker1< float, ES3Type_t8FBECB7AE75168648B9524E0C2A38DAD4555421D * >::Invoke(ES3Reader_Read_TisSingle_tE07797BA3C98D4CA9B5A19413C19A76688AB899E_m4A0416374498BDA042B8EB21E49B72326D6CE5F4_RuntimeMethod_var, (ES3Reader_t2780AF8AA61DA2A817115CEF8612AC0E494D03C9 *)L_111, (ES3Type_t8FBECB7AE75168648B9524E0C2A38DAD4555421D *)L_112);
		ShapeModule_set_arc_m4A2578EBD4747DB3D9ED74AB53E488872CFA541F((ShapeModule_t3A89D143F5CAF357ECCE8B4A4F2BBD57816F98CA *)(ShapeModule_t3A89D143F5CAF357ECCE8B4A4F2BBD57816F98CA *)(&V_0), (float)L_113, /*hidden argument*/NULL);
		// break;
		goto IL_042c;
	}

IL_0426:
	{
		// reader.Skip();
		ES3Reader_t2780AF8AA61DA2A817115CEF8612AC0E494D03C9 * L_114 = ___reader0;
		NullCheck((ES3Reader_t2780AF8AA61DA2A817115CEF8612AC0E494D03C9 *)L_114);
		VirtActionInvoker0::Invoke(41 /* System.Void ES3Reader::Skip() */, (ES3Reader_t2780AF8AA61DA2A817115CEF8612AC0E494D03C9 *)L_114);
	}

IL_042c:
	{
		// while((propertyName = reader.ReadPropertyName()) != null)
		ES3Reader_t2780AF8AA61DA2A817115CEF8612AC0E494D03C9 * L_115 = ___reader0;
		NullCheck((ES3Reader_t2780AF8AA61DA2A817115CEF8612AC0E494D03C9 *)L_115);
		String_t* L_116;
		L_116 = VirtFuncInvoker0< String_t* >::Invoke(21 /* System.String ES3Reader::ReadPropertyName() */, (ES3Reader_t2780AF8AA61DA2A817115CEF8612AC0E494D03C9 *)L_115);
		String_t* L_117 = (String_t*)L_116;
		V_1 = (String_t*)L_117;
		if (L_117)
		{
			goto IL_000c;
		}
	}
	{
		// }
		return;
	}
}
// System.Void ES3Types.ES3Type_ShapeModule::ReadInto<UnityEngine.ParticleSystem/RotationBySpeedModule>(ES3Reader,System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ES3Type_ShapeModule_ReadInto_TisRotationBySpeedModule_t9EFC4CF3826F9F6FF2AFC3F0C25CEBC8E36FF0AD_m7B78EAA97F4E6A136C317DEB3B90B20BB1480C06_gshared (ES3Type_ShapeModule_t67010A74D4F69A245D5F06976239CAB4279B5377 * __this, ES3Reader_t2780AF8AA61DA2A817115CEF8612AC0E494D03C9 * ___reader0, RuntimeObject * ___obj1, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ES3Reader_Read_TisBoolean_t07D1E3F34E4813023D64F584DFF7B34C9D922F37_mC6D1B158268FF9B97822FF9F5B37FB1723FEDA22_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ES3Reader_Read_TisInt32_tFDE5F8CD43D10453F6A2E0C77FE48C6CC7009046_m2B74AA6627F5B1D21171D56C42F71DE5A7C1B4A6_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ES3Reader_Read_TisMeshRenderer_tCD983A2F635E12BCB0BAA2E635D96A318757908B_m773CE5481730EBCC6A377F918946EB11B304050A_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ES3Reader_Read_TisMesh_t2F5992DBA650D5862B43D3823ACD997132A57DA6_m65DF5BA41642A39B77979CC49472E4DE7A1660F9_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ES3Reader_Read_TisParticleSystemMeshShapeType_t7C9518403F30CC7AF7F9124FD61EC1187B42EFD2_mF1A19C0F8BBA6E44737F158F3BE4CC478F623F10_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ES3Reader_Read_TisParticleSystemShapeType_t5B09F3A5A637F57DB1B2A6518E214AA2AA53D70C_mAE53212CB1FDDA51CF8CD0D39FCD446087DACA48_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ES3Reader_Read_TisSingle_tE07797BA3C98D4CA9B5A19413C19A76688AB899E_m4A0416374498BDA042B8EB21E49B72326D6CE5F4_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ES3Reader_Read_TisSkinnedMeshRenderer_t126F4D6010E0F4B2685A7817B0A9171805D8F496_m23D6569D5CE7B3E1C67BDB470CDEDEF25A835F25_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ES3Reader_Read_TisVector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E_mBA4CD9D0F45E78BA43FE2DB8EC33CC3A5433DE15_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ES3Type_Vector3_tA9144E81A20D2F28726F02DE1AE6CD3F9C12B54F_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ES3Type_bool_t8F309F7B9CC735FF1DEE68081B6E3CAB367745F4_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ES3Type_float_tF86B773C86731BD9AD79448B860BBB178FE77644_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ES3Type_int_tF64C15D40AD0CC7C15BCD1CEC3C5C6BF837BD167_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ShapeModule_t3A89D143F5CAF357ECCE8B4A4F2BBD57816F98CA_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral01837E2252AC8026A5EA3567A663017A662FBB70);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral1228466552C1791B2019A329AFE94665D441168A);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral60E56797D122AE71D3774956F66C6EEB9EA22C05);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral6686C366F645244186604A3DA4B9A58012A85F1B);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral82BECCAD895076775062861CDB46AADEF913D969);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral8C9F18A4F030B96447955FBBA1A99FFC43B5D8E0);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral8E54BB51E569CB6A8D3C45D8AEF883A1559C1C0E);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral91811EE149061D28B38320E2430CE8888AD6398B);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralBD49F93A7BC78A69E385CEC0E78F434BD2845A17);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralCA1B66E295BD92E9FD3B6C708F09CA69A50BEFD1);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralE8744A8B8BD390EB66CA0CAE2376C973E6904FFB);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralEB0A157666700D8227FD4B66A26FDC02035E89BF);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralED1F119527A0BCA45125EF8E0F719985DA86C0E1);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralF66E9083C67855AB6EBB4B74342E385A72AACE32);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralF9BE17D634D1B07BCDCDA77A87710C946D81307B);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralF9D225733E1D10F9344C755C4A9C0870CD1DE97B);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralFA5EC7168E9633DAAEAA255ECB55030EA60F064F);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralFC341A1966AF28A9A7A26EDFB78ABBF7DE4D0E1F);
		s_Il2CppMethodInitialized = true;
	}
	ShapeModule_t3A89D143F5CAF357ECCE8B4A4F2BBD57816F98CA  V_0;
	memset((&V_0), 0, sizeof(V_0));
	String_t* V_1 = NULL;
	uint32_t V_2 = 0;
	{
		// var instance = (UnityEngine.ParticleSystem.ShapeModule)obj;
		RuntimeObject * L_0 = ___obj1;
		V_0 = (ShapeModule_t3A89D143F5CAF357ECCE8B4A4F2BBD57816F98CA )((*(ShapeModule_t3A89D143F5CAF357ECCE8B4A4F2BBD57816F98CA *)((ShapeModule_t3A89D143F5CAF357ECCE8B4A4F2BBD57816F98CA *)UnBox(L_0, ShapeModule_t3A89D143F5CAF357ECCE8B4A4F2BBD57816F98CA_il2cpp_TypeInfo_var))));
		goto IL_042c;
	}

IL_000c:
	{
		String_t* L_1 = V_1;
		if (!L_1)
		{
			goto IL_0426;
		}
	}
	{
		String_t* L_2 = V_1;
		uint32_t L_3;
		L_3 = U3CPrivateImplementationDetailsU3E_ComputeStringHash_m3ADC1F612F9EE3DD518E6F0023A0DE0EE2B120A7((String_t*)L_2, /*hidden argument*/NULL);
		V_2 = (uint32_t)L_3;
		uint32_t L_4 = V_2;
		if ((!(((uint32_t)L_4) <= ((uint32_t)((int32_t)-2104025999)))))
		{
			goto IL_00b3;
		}
	}
	{
		uint32_t L_5 = V_2;
		if ((!(((uint32_t)L_5) <= ((uint32_t)((int32_t)666576729)))))
		{
			goto IL_006a;
		}
	}
	{
		uint32_t L_6 = V_2;
		if ((!(((uint32_t)L_6) <= ((uint32_t)((int32_t)49525662)))))
		{
			goto IL_004f;
		}
	}
	{
		uint32_t L_7 = V_2;
		if ((((int32_t)L_7) == ((int32_t)((int32_t)24602224))))
		{
			goto IL_024d;
		}
	}
	{
		uint32_t L_8 = V_2;
		if ((((int32_t)L_8) == ((int32_t)((int32_t)49525662))))
		{
			goto IL_013c;
		}
	}
	{
		goto IL_0426;
	}

IL_004f:
	{
		uint32_t L_9 = V_2;
		if ((((int32_t)L_9) == ((int32_t)((int32_t)230313139))))
		{
			goto IL_01a5;
		}
	}
	{
		uint32_t L_10 = V_2;
		if ((((int32_t)L_10) == ((int32_t)((int32_t)666576729))))
		{
			goto IL_01f9;
		}
	}
	{
		goto IL_0426;
	}

IL_006a:
	{
		uint32_t L_11 = V_2;
		if ((!(((uint32_t)L_11) <= ((uint32_t)((int32_t)955488309)))))
		{
			goto IL_008d;
		}
	}
	{
		uint32_t L_12 = V_2;
		if ((((int32_t)L_12) == ((int32_t)((int32_t)923624301))))
		{
			goto IL_0238;
		}
	}
	{
		uint32_t L_13 = V_2;
		if ((((int32_t)L_13) == ((int32_t)((int32_t)955488309))))
		{
			goto IL_028c;
		}
	}
	{
		goto IL_0426;
	}

IL_008d:
	{
		uint32_t L_14 = V_2;
		if ((((int32_t)L_14) == ((int32_t)((int32_t)980363995))))
		{
			goto IL_02a1;
		}
	}
	{
		uint32_t L_15 = V_2;
		if ((((int32_t)L_15) == ((int32_t)((int32_t)985988853))))
		{
			goto IL_017b;
		}
	}
	{
		uint32_t L_16 = V_2;
		if ((((int32_t)L_16) == ((int32_t)((int32_t)-2104025999))))
		{
			goto IL_01e4;
		}
	}
	{
		goto IL_0426;
	}

IL_00b3:
	{
		uint32_t L_17 = V_2;
		if ((!(((uint32_t)L_17) <= ((uint32_t)((int32_t)-1473810612)))))
		{
			goto IL_00f6;
		}
	}
	{
		uint32_t L_18 = V_2;
		if ((!(((uint32_t)L_18) <= ((uint32_t)((int32_t)-1726928010)))))
		{
			goto IL_00db;
		}
	}
	{
		uint32_t L_19 = V_2;
		if ((((int32_t)L_19) == ((int32_t)((int32_t)-2083506667))))
		{
			goto IL_01cf;
		}
	}
	{
		uint32_t L_20 = V_2;
		if ((((int32_t)L_20) == ((int32_t)((int32_t)-1726928010))))
		{
			goto IL_0151;
		}
	}
	{
		goto IL_0426;
	}

IL_00db:
	{
		uint32_t L_21 = V_2;
		if ((((int32_t)L_21) == ((int32_t)((int32_t)-1593786692))))
		{
			goto IL_020e;
		}
	}
	{
		uint32_t L_22 = V_2;
		if ((((int32_t)L_22) == ((int32_t)((int32_t)-1473810612))))
		{
			goto IL_0190;
		}
	}
	{
		goto IL_0426;
	}

IL_00f6:
	{
		uint32_t L_23 = V_2;
		if ((!(((uint32_t)L_23) <= ((uint32_t)((int32_t)-1386986472)))))
		{
			goto IL_0116;
		}
	}
	{
		uint32_t L_24 = V_2;
		if ((((int32_t)L_24) == ((int32_t)((int32_t)-1412039661))))
		{
			goto IL_0166;
		}
	}
	{
		uint32_t L_25 = V_2;
		if ((((int32_t)L_25) == ((int32_t)((int32_t)-1386986472))))
		{
			goto IL_01ba;
		}
	}
	{
		goto IL_0426;
	}

IL_0116:
	{
		uint32_t L_26 = V_2;
		if ((((int32_t)L_26) == ((int32_t)((int32_t)-584064197))))
		{
			goto IL_0223;
		}
	}
	{
		uint32_t L_27 = V_2;
		if ((((int32_t)L_27) == ((int32_t)((int32_t)-473474755))))
		{
			goto IL_0277;
		}
	}
	{
		uint32_t L_28 = V_2;
		if ((((int32_t)L_28) == ((int32_t)((int32_t)-365686981))))
		{
			goto IL_0262;
		}
	}
	{
		goto IL_0426;
	}

IL_013c:
	{
		String_t* L_29 = V_1;
		bool L_30;
		L_30 = String_op_Equality_m50B3548E4AC232558190B0052877B290AA1D436A((String_t*)L_29, (String_t*)_stringLiteralF9D225733E1D10F9344C755C4A9C0870CD1DE97B, /*hidden argument*/NULL);
		if (L_30)
		{
			goto IL_02b6;
		}
	}
	{
		goto IL_0426;
	}

IL_0151:
	{
		String_t* L_31 = V_1;
		bool L_32;
		L_32 = String_op_Equality_m50B3548E4AC232558190B0052877B290AA1D436A((String_t*)L_31, (String_t*)_stringLiteral82BECCAD895076775062861CDB46AADEF913D969, /*hidden argument*/NULL);
		if (L_32)
		{
			goto IL_02cd;
		}
	}
	{
		goto IL_0426;
	}

IL_0166:
	{
		String_t* L_33 = V_1;
		bool L_34;
		L_34 = String_op_Equality_m50B3548E4AC232558190B0052877B290AA1D436A((String_t*)L_33, (String_t*)_stringLiteral1228466552C1791B2019A329AFE94665D441168A, /*hidden argument*/NULL);
		if (L_34)
		{
			goto IL_02df;
		}
	}
	{
		goto IL_0426;
	}

IL_017b:
	{
		String_t* L_35 = V_1;
		bool L_36;
		L_36 = String_op_Equality_m50B3548E4AC232558190B0052877B290AA1D436A((String_t*)L_35, (String_t*)_stringLiteralBD49F93A7BC78A69E385CEC0E78F434BD2845A17, /*hidden argument*/NULL);
		if (L_36)
		{
			goto IL_02f6;
		}
	}
	{
		goto IL_0426;
	}

IL_0190:
	{
		String_t* L_37 = V_1;
		bool L_38;
		L_38 = String_op_Equality_m50B3548E4AC232558190B0052877B290AA1D436A((String_t*)L_37, (String_t*)_stringLiteralED1F119527A0BCA45125EF8E0F719985DA86C0E1, /*hidden argument*/NULL);
		if (L_38)
		{
			goto IL_030d;
		}
	}
	{
		goto IL_0426;
	}

IL_01a5:
	{
		String_t* L_39 = V_1;
		bool L_40;
		L_40 = String_op_Equality_m50B3548E4AC232558190B0052877B290AA1D436A((String_t*)L_39, (String_t*)_stringLiteral8C9F18A4F030B96447955FBBA1A99FFC43B5D8E0, /*hidden argument*/NULL);
		if (L_40)
		{
			goto IL_0324;
		}
	}
	{
		goto IL_0426;
	}

IL_01ba:
	{
		String_t* L_41 = V_1;
		bool L_42;
		L_42 = String_op_Equality_m50B3548E4AC232558190B0052877B290AA1D436A((String_t*)L_41, (String_t*)_stringLiteralFC341A1966AF28A9A7A26EDFB78ABBF7DE4D0E1F, /*hidden argument*/NULL);
		if (L_42)
		{
			goto IL_033b;
		}
	}
	{
		goto IL_0426;
	}

IL_01cf:
	{
		String_t* L_43 = V_1;
		bool L_44;
		L_44 = String_op_Equality_m50B3548E4AC232558190B0052877B290AA1D436A((String_t*)L_43, (String_t*)_stringLiteralE8744A8B8BD390EB66CA0CAE2376C973E6904FFB, /*hidden argument*/NULL);
		if (L_44)
		{
			goto IL_0352;
		}
	}
	{
		goto IL_0426;
	}

IL_01e4:
	{
		String_t* L_45 = V_1;
		bool L_46;
		L_46 = String_op_Equality_m50B3548E4AC232558190B0052877B290AA1D436A((String_t*)L_45, (String_t*)_stringLiteralF9BE17D634D1B07BCDCDA77A87710C946D81307B, /*hidden argument*/NULL);
		if (L_46)
		{
			goto IL_0369;
		}
	}
	{
		goto IL_0426;
	}

IL_01f9:
	{
		String_t* L_47 = V_1;
		bool L_48;
		L_48 = String_op_Equality_m50B3548E4AC232558190B0052877B290AA1D436A((String_t*)L_47, (String_t*)_stringLiteralFA5EC7168E9633DAAEAA255ECB55030EA60F064F, /*hidden argument*/NULL);
		if (L_48)
		{
			goto IL_0380;
		}
	}
	{
		goto IL_0426;
	}

IL_020e:
	{
		String_t* L_49 = V_1;
		bool L_50;
		L_50 = String_op_Equality_m50B3548E4AC232558190B0052877B290AA1D436A((String_t*)L_49, (String_t*)_stringLiteralEB0A157666700D8227FD4B66A26FDC02035E89BF, /*hidden argument*/NULL);
		if (L_50)
		{
			goto IL_0392;
		}
	}
	{
		goto IL_0426;
	}

IL_0223:
	{
		String_t* L_51 = V_1;
		bool L_52;
		L_52 = String_op_Equality_m50B3548E4AC232558190B0052877B290AA1D436A((String_t*)L_51, (String_t*)_stringLiteral8E54BB51E569CB6A8D3C45D8AEF883A1559C1C0E, /*hidden argument*/NULL);
		if (L_52)
		{
			goto IL_03a4;
		}
	}
	{
		goto IL_0426;
	}

IL_0238:
	{
		String_t* L_53 = V_1;
		bool L_54;
		L_54 = String_op_Equality_m50B3548E4AC232558190B0052877B290AA1D436A((String_t*)L_53, (String_t*)_stringLiteral60E56797D122AE71D3774956F66C6EEB9EA22C05, /*hidden argument*/NULL);
		if (L_54)
		{
			goto IL_03b3;
		}
	}
	{
		goto IL_0426;
	}

IL_024d:
	{
		String_t* L_55 = V_1;
		bool L_56;
		L_56 = String_op_Equality_m50B3548E4AC232558190B0052877B290AA1D436A((String_t*)L_55, (String_t*)_stringLiteral01837E2252AC8026A5EA3567A663017A662FBB70, /*hidden argument*/NULL);
		if (L_56)
		{
			goto IL_03c2;
		}
	}
	{
		goto IL_0426;
	}

IL_0262:
	{
		String_t* L_57 = V_1;
		bool L_58;
		L_58 = String_op_Equality_m50B3548E4AC232558190B0052877B290AA1D436A((String_t*)L_57, (String_t*)_stringLiteralF66E9083C67855AB6EBB4B74342E385A72AACE32, /*hidden argument*/NULL);
		if (L_58)
		{
			goto IL_03d6;
		}
	}
	{
		goto IL_0426;
	}

IL_0277:
	{
		String_t* L_59 = V_1;
		bool L_60;
		L_60 = String_op_Equality_m50B3548E4AC232558190B0052877B290AA1D436A((String_t*)L_59, (String_t*)_stringLiteral91811EE149061D28B38320E2430CE8888AD6398B, /*hidden argument*/NULL);
		if (L_60)
		{
			goto IL_03ea;
		}
	}
	{
		goto IL_0426;
	}

IL_028c:
	{
		String_t* L_61 = V_1;
		bool L_62;
		L_62 = String_op_Equality_m50B3548E4AC232558190B0052877B290AA1D436A((String_t*)L_61, (String_t*)_stringLiteral6686C366F645244186604A3DA4B9A58012A85F1B, /*hidden argument*/NULL);
		if (L_62)
		{
			goto IL_03fe;
		}
	}
	{
		goto IL_0426;
	}

IL_02a1:
	{
		String_t* L_63 = V_1;
		bool L_64;
		L_64 = String_op_Equality_m50B3548E4AC232558190B0052877B290AA1D436A((String_t*)L_63, (String_t*)_stringLiteralCA1B66E295BD92E9FD3B6C708F09CA69A50BEFD1, /*hidden argument*/NULL);
		if (L_64)
		{
			goto IL_0412;
		}
	}
	{
		goto IL_0426;
	}

IL_02b6:
	{
		// instance.enabled = reader.Read<System.Boolean>(ES3Type_bool.Instance);
		ES3Reader_t2780AF8AA61DA2A817115CEF8612AC0E494D03C9 * L_65 = ___reader0;
		IL2CPP_RUNTIME_CLASS_INIT(ES3Type_bool_t8F309F7B9CC735FF1DEE68081B6E3CAB367745F4_il2cpp_TypeInfo_var);
		ES3Type_t8FBECB7AE75168648B9524E0C2A38DAD4555421D * L_66 = ((ES3Type_bool_t8F309F7B9CC735FF1DEE68081B6E3CAB367745F4_StaticFields*)il2cpp_codegen_static_fields_for(ES3Type_bool_t8F309F7B9CC735FF1DEE68081B6E3CAB367745F4_il2cpp_TypeInfo_var))->get_Instance_12();
		NullCheck((ES3Reader_t2780AF8AA61DA2A817115CEF8612AC0E494D03C9 *)L_65);
		bool L_67;
		L_67 = GenericVirtFuncInvoker1< bool, ES3Type_t8FBECB7AE75168648B9524E0C2A38DAD4555421D * >::Invoke(ES3Reader_Read_TisBoolean_t07D1E3F34E4813023D64F584DFF7B34C9D922F37_mC6D1B158268FF9B97822FF9F5B37FB1723FEDA22_RuntimeMethod_var, (ES3Reader_t2780AF8AA61DA2A817115CEF8612AC0E494D03C9 *)L_65, (ES3Type_t8FBECB7AE75168648B9524E0C2A38DAD4555421D *)L_66);
		ShapeModule_set_enabled_mF6FE8ED99E482A739C00F894235F4E2CD09B0D1E((ShapeModule_t3A89D143F5CAF357ECCE8B4A4F2BBD57816F98CA *)(ShapeModule_t3A89D143F5CAF357ECCE8B4A4F2BBD57816F98CA *)(&V_0), (bool)L_67, /*hidden argument*/NULL);
		// break;
		goto IL_042c;
	}

IL_02cd:
	{
		// instance.shapeType = reader.Read<UnityEngine.ParticleSystemShapeType>();
		ES3Reader_t2780AF8AA61DA2A817115CEF8612AC0E494D03C9 * L_68 = ___reader0;
		NullCheck((ES3Reader_t2780AF8AA61DA2A817115CEF8612AC0E494D03C9 *)L_68);
		int32_t L_69;
		L_69 = GenericVirtFuncInvoker0< int32_t >::Invoke(ES3Reader_Read_TisParticleSystemShapeType_t5B09F3A5A637F57DB1B2A6518E214AA2AA53D70C_mAE53212CB1FDDA51CF8CD0D39FCD446087DACA48_RuntimeMethod_var, (ES3Reader_t2780AF8AA61DA2A817115CEF8612AC0E494D03C9 *)L_68);
		ShapeModule_set_shapeType_mB772084527742749EB6AD690BAE47215FC71040D((ShapeModule_t3A89D143F5CAF357ECCE8B4A4F2BBD57816F98CA *)(ShapeModule_t3A89D143F5CAF357ECCE8B4A4F2BBD57816F98CA *)(&V_0), (int32_t)L_69, /*hidden argument*/NULL);
		// break;
		goto IL_042c;
	}

IL_02df:
	{
		// instance.randomDirectionAmount = reader.Read<System.Single>(ES3Type_float.Instance);
		ES3Reader_t2780AF8AA61DA2A817115CEF8612AC0E494D03C9 * L_70 = ___reader0;
		IL2CPP_RUNTIME_CLASS_INIT(ES3Type_float_tF86B773C86731BD9AD79448B860BBB178FE77644_il2cpp_TypeInfo_var);
		ES3Type_t8FBECB7AE75168648B9524E0C2A38DAD4555421D * L_71 = ((ES3Type_float_tF86B773C86731BD9AD79448B860BBB178FE77644_StaticFields*)il2cpp_codegen_static_fields_for(ES3Type_float_tF86B773C86731BD9AD79448B860BBB178FE77644_il2cpp_TypeInfo_var))->get_Instance_12();
		NullCheck((ES3Reader_t2780AF8AA61DA2A817115CEF8612AC0E494D03C9 *)L_70);
		float L_72;
		L_72 = GenericVirtFuncInvoker1< float, ES3Type_t8FBECB7AE75168648B9524E0C2A38DAD4555421D * >::Invoke(ES3Reader_Read_TisSingle_tE07797BA3C98D4CA9B5A19413C19A76688AB899E_m4A0416374498BDA042B8EB21E49B72326D6CE5F4_RuntimeMethod_var, (ES3Reader_t2780AF8AA61DA2A817115CEF8612AC0E494D03C9 *)L_70, (ES3Type_t8FBECB7AE75168648B9524E0C2A38DAD4555421D *)L_71);
		ShapeModule_set_randomDirectionAmount_m4E1BB67600D57383945F75F5A179EEEC01A76885((ShapeModule_t3A89D143F5CAF357ECCE8B4A4F2BBD57816F98CA *)(ShapeModule_t3A89D143F5CAF357ECCE8B4A4F2BBD57816F98CA *)(&V_0), (float)L_72, /*hidden argument*/NULL);
		// break;
		goto IL_042c;
	}

IL_02f6:
	{
		// instance.sphericalDirectionAmount = reader.Read<System.Single>(ES3Type_float.Instance);
		ES3Reader_t2780AF8AA61DA2A817115CEF8612AC0E494D03C9 * L_73 = ___reader0;
		IL2CPP_RUNTIME_CLASS_INIT(ES3Type_float_tF86B773C86731BD9AD79448B860BBB178FE77644_il2cpp_TypeInfo_var);
		ES3Type_t8FBECB7AE75168648B9524E0C2A38DAD4555421D * L_74 = ((ES3Type_float_tF86B773C86731BD9AD79448B860BBB178FE77644_StaticFields*)il2cpp_codegen_static_fields_for(ES3Type_float_tF86B773C86731BD9AD79448B860BBB178FE77644_il2cpp_TypeInfo_var))->get_Instance_12();
		NullCheck((ES3Reader_t2780AF8AA61DA2A817115CEF8612AC0E494D03C9 *)L_73);
		float L_75;
		L_75 = GenericVirtFuncInvoker1< float, ES3Type_t8FBECB7AE75168648B9524E0C2A38DAD4555421D * >::Invoke(ES3Reader_Read_TisSingle_tE07797BA3C98D4CA9B5A19413C19A76688AB899E_m4A0416374498BDA042B8EB21E49B72326D6CE5F4_RuntimeMethod_var, (ES3Reader_t2780AF8AA61DA2A817115CEF8612AC0E494D03C9 *)L_73, (ES3Type_t8FBECB7AE75168648B9524E0C2A38DAD4555421D *)L_74);
		ShapeModule_set_sphericalDirectionAmount_m02A9FBFF18AF24B821801DF5D833CA20A569F62B((ShapeModule_t3A89D143F5CAF357ECCE8B4A4F2BBD57816F98CA *)(ShapeModule_t3A89D143F5CAF357ECCE8B4A4F2BBD57816F98CA *)(&V_0), (float)L_75, /*hidden argument*/NULL);
		// break;
		goto IL_042c;
	}

IL_030d:
	{
		// instance.alignToDirection = reader.Read<System.Boolean>(ES3Type_bool.Instance);
		ES3Reader_t2780AF8AA61DA2A817115CEF8612AC0E494D03C9 * L_76 = ___reader0;
		IL2CPP_RUNTIME_CLASS_INIT(ES3Type_bool_t8F309F7B9CC735FF1DEE68081B6E3CAB367745F4_il2cpp_TypeInfo_var);
		ES3Type_t8FBECB7AE75168648B9524E0C2A38DAD4555421D * L_77 = ((ES3Type_bool_t8F309F7B9CC735FF1DEE68081B6E3CAB367745F4_StaticFields*)il2cpp_codegen_static_fields_for(ES3Type_bool_t8F309F7B9CC735FF1DEE68081B6E3CAB367745F4_il2cpp_TypeInfo_var))->get_Instance_12();
		NullCheck((ES3Reader_t2780AF8AA61DA2A817115CEF8612AC0E494D03C9 *)L_76);
		bool L_78;
		L_78 = GenericVirtFuncInvoker1< bool, ES3Type_t8FBECB7AE75168648B9524E0C2A38DAD4555421D * >::Invoke(ES3Reader_Read_TisBoolean_t07D1E3F34E4813023D64F584DFF7B34C9D922F37_mC6D1B158268FF9B97822FF9F5B37FB1723FEDA22_RuntimeMethod_var, (ES3Reader_t2780AF8AA61DA2A817115CEF8612AC0E494D03C9 *)L_76, (ES3Type_t8FBECB7AE75168648B9524E0C2A38DAD4555421D *)L_77);
		ShapeModule_set_alignToDirection_m396A57DCAD5F194E4DDDA0DF9C35E5508E3641BE((ShapeModule_t3A89D143F5CAF357ECCE8B4A4F2BBD57816F98CA *)(ShapeModule_t3A89D143F5CAF357ECCE8B4A4F2BBD57816F98CA *)(&V_0), (bool)L_78, /*hidden argument*/NULL);
		// break;
		goto IL_042c;
	}

IL_0324:
	{
		// instance.radius = reader.Read<System.Single>(ES3Type_float.Instance);
		ES3Reader_t2780AF8AA61DA2A817115CEF8612AC0E494D03C9 * L_79 = ___reader0;
		IL2CPP_RUNTIME_CLASS_INIT(ES3Type_float_tF86B773C86731BD9AD79448B860BBB178FE77644_il2cpp_TypeInfo_var);
		ES3Type_t8FBECB7AE75168648B9524E0C2A38DAD4555421D * L_80 = ((ES3Type_float_tF86B773C86731BD9AD79448B860BBB178FE77644_StaticFields*)il2cpp_codegen_static_fields_for(ES3Type_float_tF86B773C86731BD9AD79448B860BBB178FE77644_il2cpp_TypeInfo_var))->get_Instance_12();
		NullCheck((ES3Reader_t2780AF8AA61DA2A817115CEF8612AC0E494D03C9 *)L_79);
		float L_81;
		L_81 = GenericVirtFuncInvoker1< float, ES3Type_t8FBECB7AE75168648B9524E0C2A38DAD4555421D * >::Invoke(ES3Reader_Read_TisSingle_tE07797BA3C98D4CA9B5A19413C19A76688AB899E_m4A0416374498BDA042B8EB21E49B72326D6CE5F4_RuntimeMethod_var, (ES3Reader_t2780AF8AA61DA2A817115CEF8612AC0E494D03C9 *)L_79, (ES3Type_t8FBECB7AE75168648B9524E0C2A38DAD4555421D *)L_80);
		ShapeModule_set_radius_mFC12B15750268316924771461C09B1A311A16DEA((ShapeModule_t3A89D143F5CAF357ECCE8B4A4F2BBD57816F98CA *)(ShapeModule_t3A89D143F5CAF357ECCE8B4A4F2BBD57816F98CA *)(&V_0), (float)L_81, /*hidden argument*/NULL);
		// break;
		goto IL_042c;
	}

IL_033b:
	{
		// instance.angle = reader.Read<System.Single>(ES3Type_float.Instance);
		ES3Reader_t2780AF8AA61DA2A817115CEF8612AC0E494D03C9 * L_82 = ___reader0;
		IL2CPP_RUNTIME_CLASS_INIT(ES3Type_float_tF86B773C86731BD9AD79448B860BBB178FE77644_il2cpp_TypeInfo_var);
		ES3Type_t8FBECB7AE75168648B9524E0C2A38DAD4555421D * L_83 = ((ES3Type_float_tF86B773C86731BD9AD79448B860BBB178FE77644_StaticFields*)il2cpp_codegen_static_fields_for(ES3Type_float_tF86B773C86731BD9AD79448B860BBB178FE77644_il2cpp_TypeInfo_var))->get_Instance_12();
		NullCheck((ES3Reader_t2780AF8AA61DA2A817115CEF8612AC0E494D03C9 *)L_82);
		float L_84;
		L_84 = GenericVirtFuncInvoker1< float, ES3Type_t8FBECB7AE75168648B9524E0C2A38DAD4555421D * >::Invoke(ES3Reader_Read_TisSingle_tE07797BA3C98D4CA9B5A19413C19A76688AB899E_m4A0416374498BDA042B8EB21E49B72326D6CE5F4_RuntimeMethod_var, (ES3Reader_t2780AF8AA61DA2A817115CEF8612AC0E494D03C9 *)L_82, (ES3Type_t8FBECB7AE75168648B9524E0C2A38DAD4555421D *)L_83);
		ShapeModule_set_angle_m20629BB5FE89F2040960548B45F6EC801B1DB8AA((ShapeModule_t3A89D143F5CAF357ECCE8B4A4F2BBD57816F98CA *)(ShapeModule_t3A89D143F5CAF357ECCE8B4A4F2BBD57816F98CA *)(&V_0), (float)L_84, /*hidden argument*/NULL);
		// break;
		goto IL_042c;
	}

IL_0352:
	{
		// instance.length = reader.Read<System.Single>(ES3Type_float.Instance);
		ES3Reader_t2780AF8AA61DA2A817115CEF8612AC0E494D03C9 * L_85 = ___reader0;
		IL2CPP_RUNTIME_CLASS_INIT(ES3Type_float_tF86B773C86731BD9AD79448B860BBB178FE77644_il2cpp_TypeInfo_var);
		ES3Type_t8FBECB7AE75168648B9524E0C2A38DAD4555421D * L_86 = ((ES3Type_float_tF86B773C86731BD9AD79448B860BBB178FE77644_StaticFields*)il2cpp_codegen_static_fields_for(ES3Type_float_tF86B773C86731BD9AD79448B860BBB178FE77644_il2cpp_TypeInfo_var))->get_Instance_12();
		NullCheck((ES3Reader_t2780AF8AA61DA2A817115CEF8612AC0E494D03C9 *)L_85);
		float L_87;
		L_87 = GenericVirtFuncInvoker1< float, ES3Type_t8FBECB7AE75168648B9524E0C2A38DAD4555421D * >::Invoke(ES3Reader_Read_TisSingle_tE07797BA3C98D4CA9B5A19413C19A76688AB899E_m4A0416374498BDA042B8EB21E49B72326D6CE5F4_RuntimeMethod_var, (ES3Reader_t2780AF8AA61DA2A817115CEF8612AC0E494D03C9 *)L_85, (ES3Type_t8FBECB7AE75168648B9524E0C2A38DAD4555421D *)L_86);
		ShapeModule_set_length_m744975258664B53F38A8B8BE38A86A0FFDD85BC7((ShapeModule_t3A89D143F5CAF357ECCE8B4A4F2BBD57816F98CA *)(ShapeModule_t3A89D143F5CAF357ECCE8B4A4F2BBD57816F98CA *)(&V_0), (float)L_87, /*hidden argument*/NULL);
		// break;
		goto IL_042c;
	}

IL_0369:
	{
		// instance.scale = reader.Read<UnityEngine.Vector3>(ES3Type_Vector3.Instance);
		ES3Reader_t2780AF8AA61DA2A817115CEF8612AC0E494D03C9 * L_88 = ___reader0;
		IL2CPP_RUNTIME_CLASS_INIT(ES3Type_Vector3_tA9144E81A20D2F28726F02DE1AE6CD3F9C12B54F_il2cpp_TypeInfo_var);
		ES3Type_t8FBECB7AE75168648B9524E0C2A38DAD4555421D * L_89 = ((ES3Type_Vector3_tA9144E81A20D2F28726F02DE1AE6CD3F9C12B54F_StaticFields*)il2cpp_codegen_static_fields_for(ES3Type_Vector3_tA9144E81A20D2F28726F02DE1AE6CD3F9C12B54F_il2cpp_TypeInfo_var))->get_Instance_12();
		NullCheck((ES3Reader_t2780AF8AA61DA2A817115CEF8612AC0E494D03C9 *)L_88);
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_90;
		L_90 = GenericVirtFuncInvoker1< Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E , ES3Type_t8FBECB7AE75168648B9524E0C2A38DAD4555421D * >::Invoke(ES3Reader_Read_TisVector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E_mBA4CD9D0F45E78BA43FE2DB8EC33CC3A5433DE15_RuntimeMethod_var, (ES3Reader_t2780AF8AA61DA2A817115CEF8612AC0E494D03C9 *)L_88, (ES3Type_t8FBECB7AE75168648B9524E0C2A38DAD4555421D *)L_89);
		ShapeModule_set_scale_m2951583898F18878E6F238100045072F44AD9158((ShapeModule_t3A89D143F5CAF357ECCE8B4A4F2BBD57816F98CA *)(ShapeModule_t3A89D143F5CAF357ECCE8B4A4F2BBD57816F98CA *)(&V_0), (Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E )L_90, /*hidden argument*/NULL);
		// break;
		goto IL_042c;
	}

IL_0380:
	{
		// instance.meshShapeType = reader.Read<UnityEngine.ParticleSystemMeshShapeType>();
		ES3Reader_t2780AF8AA61DA2A817115CEF8612AC0E494D03C9 * L_91 = ___reader0;
		NullCheck((ES3Reader_t2780AF8AA61DA2A817115CEF8612AC0E494D03C9 *)L_91);
		int32_t L_92;
		L_92 = GenericVirtFuncInvoker0< int32_t >::Invoke(ES3Reader_Read_TisParticleSystemMeshShapeType_t7C9518403F30CC7AF7F9124FD61EC1187B42EFD2_mF1A19C0F8BBA6E44737F158F3BE4CC478F623F10_RuntimeMethod_var, (ES3Reader_t2780AF8AA61DA2A817115CEF8612AC0E494D03C9 *)L_91);
		ShapeModule_set_meshShapeType_m5DAD94B71F2110F45E454C30DE052153129891C2((ShapeModule_t3A89D143F5CAF357ECCE8B4A4F2BBD57816F98CA *)(ShapeModule_t3A89D143F5CAF357ECCE8B4A4F2BBD57816F98CA *)(&V_0), (int32_t)L_92, /*hidden argument*/NULL);
		// break;
		goto IL_042c;
	}

IL_0392:
	{
		// instance.mesh = reader.Read<UnityEngine.Mesh>();
		ES3Reader_t2780AF8AA61DA2A817115CEF8612AC0E494D03C9 * L_93 = ___reader0;
		NullCheck((ES3Reader_t2780AF8AA61DA2A817115CEF8612AC0E494D03C9 *)L_93);
		Mesh_t2F5992DBA650D5862B43D3823ACD997132A57DA6 * L_94;
		L_94 = GenericVirtFuncInvoker0< Mesh_t2F5992DBA650D5862B43D3823ACD997132A57DA6 * >::Invoke(ES3Reader_Read_TisMesh_t2F5992DBA650D5862B43D3823ACD997132A57DA6_m65DF5BA41642A39B77979CC49472E4DE7A1660F9_RuntimeMethod_var, (ES3Reader_t2780AF8AA61DA2A817115CEF8612AC0E494D03C9 *)L_93);
		ShapeModule_set_mesh_mD3E276A9E45442E75AD8A9AA4BD88C9112BD77CA((ShapeModule_t3A89D143F5CAF357ECCE8B4A4F2BBD57816F98CA *)(ShapeModule_t3A89D143F5CAF357ECCE8B4A4F2BBD57816F98CA *)(&V_0), (Mesh_t2F5992DBA650D5862B43D3823ACD997132A57DA6 *)L_94, /*hidden argument*/NULL);
		// break;
		goto IL_042c;
	}

IL_03a4:
	{
		// instance.meshRenderer = reader.Read<UnityEngine.MeshRenderer>();
		ES3Reader_t2780AF8AA61DA2A817115CEF8612AC0E494D03C9 * L_95 = ___reader0;
		NullCheck((ES3Reader_t2780AF8AA61DA2A817115CEF8612AC0E494D03C9 *)L_95);
		MeshRenderer_tCD983A2F635E12BCB0BAA2E635D96A318757908B * L_96;
		L_96 = GenericVirtFuncInvoker0< MeshRenderer_tCD983A2F635E12BCB0BAA2E635D96A318757908B * >::Invoke(ES3Reader_Read_TisMeshRenderer_tCD983A2F635E12BCB0BAA2E635D96A318757908B_m773CE5481730EBCC6A377F918946EB11B304050A_RuntimeMethod_var, (ES3Reader_t2780AF8AA61DA2A817115CEF8612AC0E494D03C9 *)L_95);
		ShapeModule_set_meshRenderer_m334D69AC8C29F5E393732D62BBB3645296614059((ShapeModule_t3A89D143F5CAF357ECCE8B4A4F2BBD57816F98CA *)(ShapeModule_t3A89D143F5CAF357ECCE8B4A4F2BBD57816F98CA *)(&V_0), (MeshRenderer_tCD983A2F635E12BCB0BAA2E635D96A318757908B *)L_96, /*hidden argument*/NULL);
		// break;
		goto IL_042c;
	}

IL_03b3:
	{
		// instance.skinnedMeshRenderer = reader.Read<UnityEngine.SkinnedMeshRenderer>();
		ES3Reader_t2780AF8AA61DA2A817115CEF8612AC0E494D03C9 * L_97 = ___reader0;
		NullCheck((ES3Reader_t2780AF8AA61DA2A817115CEF8612AC0E494D03C9 *)L_97);
		SkinnedMeshRenderer_t126F4D6010E0F4B2685A7817B0A9171805D8F496 * L_98;
		L_98 = GenericVirtFuncInvoker0< SkinnedMeshRenderer_t126F4D6010E0F4B2685A7817B0A9171805D8F496 * >::Invoke(ES3Reader_Read_TisSkinnedMeshRenderer_t126F4D6010E0F4B2685A7817B0A9171805D8F496_m23D6569D5CE7B3E1C67BDB470CDEDEF25A835F25_RuntimeMethod_var, (ES3Reader_t2780AF8AA61DA2A817115CEF8612AC0E494D03C9 *)L_97);
		ShapeModule_set_skinnedMeshRenderer_m9DEF9CD332D3F10BE7D99EFECC0971FB5AE83F56((ShapeModule_t3A89D143F5CAF357ECCE8B4A4F2BBD57816F98CA *)(ShapeModule_t3A89D143F5CAF357ECCE8B4A4F2BBD57816F98CA *)(&V_0), (SkinnedMeshRenderer_t126F4D6010E0F4B2685A7817B0A9171805D8F496 *)L_98, /*hidden argument*/NULL);
		// break;
		goto IL_042c;
	}

IL_03c2:
	{
		// instance.useMeshMaterialIndex = reader.Read<System.Boolean>(ES3Type_bool.Instance);
		ES3Reader_t2780AF8AA61DA2A817115CEF8612AC0E494D03C9 * L_99 = ___reader0;
		IL2CPP_RUNTIME_CLASS_INIT(ES3Type_bool_t8F309F7B9CC735FF1DEE68081B6E3CAB367745F4_il2cpp_TypeInfo_var);
		ES3Type_t8FBECB7AE75168648B9524E0C2A38DAD4555421D * L_100 = ((ES3Type_bool_t8F309F7B9CC735FF1DEE68081B6E3CAB367745F4_StaticFields*)il2cpp_codegen_static_fields_for(ES3Type_bool_t8F309F7B9CC735FF1DEE68081B6E3CAB367745F4_il2cpp_TypeInfo_var))->get_Instance_12();
		NullCheck((ES3Reader_t2780AF8AA61DA2A817115CEF8612AC0E494D03C9 *)L_99);
		bool L_101;
		L_101 = GenericVirtFuncInvoker1< bool, ES3Type_t8FBECB7AE75168648B9524E0C2A38DAD4555421D * >::Invoke(ES3Reader_Read_TisBoolean_t07D1E3F34E4813023D64F584DFF7B34C9D922F37_mC6D1B158268FF9B97822FF9F5B37FB1723FEDA22_RuntimeMethod_var, (ES3Reader_t2780AF8AA61DA2A817115CEF8612AC0E494D03C9 *)L_99, (ES3Type_t8FBECB7AE75168648B9524E0C2A38DAD4555421D *)L_100);
		ShapeModule_set_useMeshMaterialIndex_m6130573C0966ED3B5C590665747305BCEFD3F901((ShapeModule_t3A89D143F5CAF357ECCE8B4A4F2BBD57816F98CA *)(ShapeModule_t3A89D143F5CAF357ECCE8B4A4F2BBD57816F98CA *)(&V_0), (bool)L_101, /*hidden argument*/NULL);
		// break;
		goto IL_042c;
	}

IL_03d6:
	{
		// instance.meshMaterialIndex = reader.Read<System.Int32>(ES3Type_int.Instance);
		ES3Reader_t2780AF8AA61DA2A817115CEF8612AC0E494D03C9 * L_102 = ___reader0;
		IL2CPP_RUNTIME_CLASS_INIT(ES3Type_int_tF64C15D40AD0CC7C15BCD1CEC3C5C6BF837BD167_il2cpp_TypeInfo_var);
		ES3Type_t8FBECB7AE75168648B9524E0C2A38DAD4555421D * L_103 = ((ES3Type_int_tF64C15D40AD0CC7C15BCD1CEC3C5C6BF837BD167_StaticFields*)il2cpp_codegen_static_fields_for(ES3Type_int_tF64C15D40AD0CC7C15BCD1CEC3C5C6BF837BD167_il2cpp_TypeInfo_var))->get_Instance_12();
		NullCheck((ES3Reader_t2780AF8AA61DA2A817115CEF8612AC0E494D03C9 *)L_102);
		int32_t L_104;
		L_104 = GenericVirtFuncInvoker1< int32_t, ES3Type_t8FBECB7AE75168648B9524E0C2A38DAD4555421D * >::Invoke(ES3Reader_Read_TisInt32_tFDE5F8CD43D10453F6A2E0C77FE48C6CC7009046_m2B74AA6627F5B1D21171D56C42F71DE5A7C1B4A6_RuntimeMethod_var, (ES3Reader_t2780AF8AA61DA2A817115CEF8612AC0E494D03C9 *)L_102, (ES3Type_t8FBECB7AE75168648B9524E0C2A38DAD4555421D *)L_103);
		ShapeModule_set_meshMaterialIndex_m1205DDEB353204D5941654FB79164AD5BAF0A59C((ShapeModule_t3A89D143F5CAF357ECCE8B4A4F2BBD57816F98CA *)(ShapeModule_t3A89D143F5CAF357ECCE8B4A4F2BBD57816F98CA *)(&V_0), (int32_t)L_104, /*hidden argument*/NULL);
		// break;
		goto IL_042c;
	}

IL_03ea:
	{
		// instance.useMeshColors = reader.Read<System.Boolean>(ES3Type_bool.Instance);
		ES3Reader_t2780AF8AA61DA2A817115CEF8612AC0E494D03C9 * L_105 = ___reader0;
		IL2CPP_RUNTIME_CLASS_INIT(ES3Type_bool_t8F309F7B9CC735FF1DEE68081B6E3CAB367745F4_il2cpp_TypeInfo_var);
		ES3Type_t8FBECB7AE75168648B9524E0C2A38DAD4555421D * L_106 = ((ES3Type_bool_t8F309F7B9CC735FF1DEE68081B6E3CAB367745F4_StaticFields*)il2cpp_codegen_static_fields_for(ES3Type_bool_t8F309F7B9CC735FF1DEE68081B6E3CAB367745F4_il2cpp_TypeInfo_var))->get_Instance_12();
		NullCheck((ES3Reader_t2780AF8AA61DA2A817115CEF8612AC0E494D03C9 *)L_105);
		bool L_107;
		L_107 = GenericVirtFuncInvoker1< bool, ES3Type_t8FBECB7AE75168648B9524E0C2A38DAD4555421D * >::Invoke(ES3Reader_Read_TisBoolean_t07D1E3F34E4813023D64F584DFF7B34C9D922F37_mC6D1B158268FF9B97822FF9F5B37FB1723FEDA22_RuntimeMethod_var, (ES3Reader_t2780AF8AA61DA2A817115CEF8612AC0E494D03C9 *)L_105, (ES3Type_t8FBECB7AE75168648B9524E0C2A38DAD4555421D *)L_106);
		ShapeModule_set_useMeshColors_m071D000F330805B1EBCF09B40AC4EB9942EB9F57((ShapeModule_t3A89D143F5CAF357ECCE8B4A4F2BBD57816F98CA *)(ShapeModule_t3A89D143F5CAF357ECCE8B4A4F2BBD57816F98CA *)(&V_0), (bool)L_107, /*hidden argument*/NULL);
		// break;
		goto IL_042c;
	}

IL_03fe:
	{
		// instance.normalOffset = reader.Read<System.Single>(ES3Type_float.Instance);
		ES3Reader_t2780AF8AA61DA2A817115CEF8612AC0E494D03C9 * L_108 = ___reader0;
		IL2CPP_RUNTIME_CLASS_INIT(ES3Type_float_tF86B773C86731BD9AD79448B860BBB178FE77644_il2cpp_TypeInfo_var);
		ES3Type_t8FBECB7AE75168648B9524E0C2A38DAD4555421D * L_109 = ((ES3Type_float_tF86B773C86731BD9AD79448B860BBB178FE77644_StaticFields*)il2cpp_codegen_static_fields_for(ES3Type_float_tF86B773C86731BD9AD79448B860BBB178FE77644_il2cpp_TypeInfo_var))->get_Instance_12();
		NullCheck((ES3Reader_t2780AF8AA61DA2A817115CEF8612AC0E494D03C9 *)L_108);
		float L_110;
		L_110 = GenericVirtFuncInvoker1< float, ES3Type_t8FBECB7AE75168648B9524E0C2A38DAD4555421D * >::Invoke(ES3Reader_Read_TisSingle_tE07797BA3C98D4CA9B5A19413C19A76688AB899E_m4A0416374498BDA042B8EB21E49B72326D6CE5F4_RuntimeMethod_var, (ES3Reader_t2780AF8AA61DA2A817115CEF8612AC0E494D03C9 *)L_108, (ES3Type_t8FBECB7AE75168648B9524E0C2A38DAD4555421D *)L_109);
		ShapeModule_set_normalOffset_m81A315286BAA5F52AAED6B317734FB03B2DCE9FD((ShapeModule_t3A89D143F5CAF357ECCE8B4A4F2BBD57816F98CA *)(ShapeModule_t3A89D143F5CAF357ECCE8B4A4F2BBD57816F98CA *)(&V_0), (float)L_110, /*hidden argument*/NULL);
		// break;
		goto IL_042c;
	}

IL_0412:
	{
		// instance.arc = reader.Read<System.Single>(ES3Type_float.Instance);
		ES3Reader_t2780AF8AA61DA2A817115CEF8612AC0E494D03C9 * L_111 = ___reader0;
		IL2CPP_RUNTIME_CLASS_INIT(ES3Type_float_tF86B773C86731BD9AD79448B860BBB178FE77644_il2cpp_TypeInfo_var);
		ES3Type_t8FBECB7AE75168648B9524E0C2A38DAD4555421D * L_112 = ((ES3Type_float_tF86B773C86731BD9AD79448B860BBB178FE77644_StaticFields*)il2cpp_codegen_static_fields_for(ES3Type_float_tF86B773C86731BD9AD79448B860BBB178FE77644_il2cpp_TypeInfo_var))->get_Instance_12();
		NullCheck((ES3Reader_t2780AF8AA61DA2A817115CEF8612AC0E494D03C9 *)L_111);
		float L_113;
		L_113 = GenericVirtFuncInvoker1< float, ES3Type_t8FBECB7AE75168648B9524E0C2A38DAD4555421D * >::Invoke(ES3Reader_Read_TisSingle_tE07797BA3C98D4CA9B5A19413C19A76688AB899E_m4A0416374498BDA042B8EB21E49B72326D6CE5F4_RuntimeMethod_var, (ES3Reader_t2780AF8AA61DA2A817115CEF8612AC0E494D03C9 *)L_111, (ES3Type_t8FBECB7AE75168648B9524E0C2A38DAD4555421D *)L_112);
		ShapeModule_set_arc_m4A2578EBD4747DB3D9ED74AB53E488872CFA541F((ShapeModule_t3A89D143F5CAF357ECCE8B4A4F2BBD57816F98CA *)(ShapeModule_t3A89D143F5CAF357ECCE8B4A4F2BBD57816F98CA *)(&V_0), (float)L_113, /*hidden argument*/NULL);
		// break;
		goto IL_042c;
	}

IL_0426:
	{
		// reader.Skip();
		ES3Reader_t2780AF8AA61DA2A817115CEF8612AC0E494D03C9 * L_114 = ___reader0;
		NullCheck((ES3Reader_t2780AF8AA61DA2A817115CEF8612AC0E494D03C9 *)L_114);
		VirtActionInvoker0::Invoke(41 /* System.Void ES3Reader::Skip() */, (ES3Reader_t2780AF8AA61DA2A817115CEF8612AC0E494D03C9 *)L_114);
	}

IL_042c:
	{
		// while((propertyName = reader.ReadPropertyName()) != null)
		ES3Reader_t2780AF8AA61DA2A817115CEF8612AC0E494D03C9 * L_115 = ___reader0;
		NullCheck((ES3Reader_t2780AF8AA61DA2A817115CEF8612AC0E494D03C9 *)L_115);
		String_t* L_116;
		L_116 = VirtFuncInvoker0< String_t* >::Invoke(21 /* System.String ES3Reader::ReadPropertyName() */, (ES3Reader_t2780AF8AA61DA2A817115CEF8612AC0E494D03C9 *)L_115);
		String_t* L_117 = (String_t*)L_116;
		V_1 = (String_t*)L_117;
		if (L_117)
		{
			goto IL_000c;
		}
	}
	{
		// }
		return;
	}
}
// System.Void ES3Types.ES3Type_ShapeModule::ReadInto<UnityEngine.ParticleSystem/RotationOverLifetimeModule>(ES3Reader,System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ES3Type_ShapeModule_ReadInto_TisRotationOverLifetimeModule_t78F62EF75295ADEF46B90235B7EB163AED016D2B_m3DC7450A5B406BCCBB1E98324B7B5157D172D9C0_gshared (ES3Type_ShapeModule_t67010A74D4F69A245D5F06976239CAB4279B5377 * __this, ES3Reader_t2780AF8AA61DA2A817115CEF8612AC0E494D03C9 * ___reader0, RuntimeObject * ___obj1, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ES3Reader_Read_TisBoolean_t07D1E3F34E4813023D64F584DFF7B34C9D922F37_mC6D1B158268FF9B97822FF9F5B37FB1723FEDA22_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ES3Reader_Read_TisInt32_tFDE5F8CD43D10453F6A2E0C77FE48C6CC7009046_m2B74AA6627F5B1D21171D56C42F71DE5A7C1B4A6_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ES3Reader_Read_TisMeshRenderer_tCD983A2F635E12BCB0BAA2E635D96A318757908B_m773CE5481730EBCC6A377F918946EB11B304050A_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ES3Reader_Read_TisMesh_t2F5992DBA650D5862B43D3823ACD997132A57DA6_m65DF5BA41642A39B77979CC49472E4DE7A1660F9_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ES3Reader_Read_TisParticleSystemMeshShapeType_t7C9518403F30CC7AF7F9124FD61EC1187B42EFD2_mF1A19C0F8BBA6E44737F158F3BE4CC478F623F10_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ES3Reader_Read_TisParticleSystemShapeType_t5B09F3A5A637F57DB1B2A6518E214AA2AA53D70C_mAE53212CB1FDDA51CF8CD0D39FCD446087DACA48_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ES3Reader_Read_TisSingle_tE07797BA3C98D4CA9B5A19413C19A76688AB899E_m4A0416374498BDA042B8EB21E49B72326D6CE5F4_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ES3Reader_Read_TisSkinnedMeshRenderer_t126F4D6010E0F4B2685A7817B0A9171805D8F496_m23D6569D5CE7B3E1C67BDB470CDEDEF25A835F25_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ES3Reader_Read_TisVector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E_mBA4CD9D0F45E78BA43FE2DB8EC33CC3A5433DE15_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ES3Type_Vector3_tA9144E81A20D2F28726F02DE1AE6CD3F9C12B54F_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ES3Type_bool_t8F309F7B9CC735FF1DEE68081B6E3CAB367745F4_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ES3Type_float_tF86B773C86731BD9AD79448B860BBB178FE77644_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ES3Type_int_tF64C15D40AD0CC7C15BCD1CEC3C5C6BF837BD167_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ShapeModule_t3A89D143F5CAF357ECCE8B4A4F2BBD57816F98CA_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral01837E2252AC8026A5EA3567A663017A662FBB70);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral1228466552C1791B2019A329AFE94665D441168A);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral60E56797D122AE71D3774956F66C6EEB9EA22C05);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral6686C366F645244186604A3DA4B9A58012A85F1B);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral82BECCAD895076775062861CDB46AADEF913D969);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral8C9F18A4F030B96447955FBBA1A99FFC43B5D8E0);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral8E54BB51E569CB6A8D3C45D8AEF883A1559C1C0E);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral91811EE149061D28B38320E2430CE8888AD6398B);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralBD49F93A7BC78A69E385CEC0E78F434BD2845A17);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralCA1B66E295BD92E9FD3B6C708F09CA69A50BEFD1);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralE8744A8B8BD390EB66CA0CAE2376C973E6904FFB);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralEB0A157666700D8227FD4B66A26FDC02035E89BF);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralED1F119527A0BCA45125EF8E0F719985DA86C0E1);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralF66E9083C67855AB6EBB4B74342E385A72AACE32);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralF9BE17D634D1B07BCDCDA77A87710C946D81307B);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralF9D225733E1D10F9344C755C4A9C0870CD1DE97B);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralFA5EC7168E9633DAAEAA255ECB55030EA60F064F);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralFC341A1966AF28A9A7A26EDFB78ABBF7DE4D0E1F);
		s_Il2CppMethodInitialized = true;
	}
	ShapeModule_t3A89D143F5CAF357ECCE8B4A4F2BBD57816F98CA  V_0;
	memset((&V_0), 0, sizeof(V_0));
	String_t* V_1 = NULL;
	uint32_t V_2 = 0;
	{
		// var instance = (UnityEngine.ParticleSystem.ShapeModule)obj;
		RuntimeObject * L_0 = ___obj1;
		V_0 = (ShapeModule_t3A89D143F5CAF357ECCE8B4A4F2BBD57816F98CA )((*(ShapeModule_t3A89D143F5CAF357ECCE8B4A4F2BBD57816F98CA *)((ShapeModule_t3A89D143F5CAF357ECCE8B4A4F2BBD57816F98CA *)UnBox(L_0, ShapeModule_t3A89D143F5CAF357ECCE8B4A4F2BBD57816F98CA_il2cpp_TypeInfo_var))));
		goto IL_042c;
	}

IL_000c:
	{
		String_t* L_1 = V_1;
		if (!L_1)
		{
			goto IL_0426;
		}
	}
	{
		String_t* L_2 = V_1;
		uint32_t L_3;
		L_3 = U3CPrivateImplementationDetailsU3E_ComputeStringHash_m3ADC1F612F9EE3DD518E6F0023A0DE0EE2B120A7((String_t*)L_2, /*hidden argument*/NULL);
		V_2 = (uint32_t)L_3;
		uint32_t L_4 = V_2;
		if ((!(((uint32_t)L_4) <= ((uint32_t)((int32_t)-2104025999)))))
		{
			goto IL_00b3;
		}
	}
	{
		uint32_t L_5 = V_2;
		if ((!(((uint32_t)L_5) <= ((uint32_t)((int32_t)666576729)))))
		{
			goto IL_006a;
		}
	}
	{
		uint32_t L_6 = V_2;
		if ((!(((uint32_t)L_6) <= ((uint32_t)((int32_t)49525662)))))
		{
			goto IL_004f;
		}
	}
	{
		uint32_t L_7 = V_2;
		if ((((int32_t)L_7) == ((int32_t)((int32_t)24602224))))
		{
			goto IL_024d;
		}
	}
	{
		uint32_t L_8 = V_2;
		if ((((int32_t)L_8) == ((int32_t)((int32_t)49525662))))
		{
			goto IL_013c;
		}
	}
	{
		goto IL_0426;
	}

IL_004f:
	{
		uint32_t L_9 = V_2;
		if ((((int32_t)L_9) == ((int32_t)((int32_t)230313139))))
		{
			goto IL_01a5;
		}
	}
	{
		uint32_t L_10 = V_2;
		if ((((int32_t)L_10) == ((int32_t)((int32_t)666576729))))
		{
			goto IL_01f9;
		}
	}
	{
		goto IL_0426;
	}

IL_006a:
	{
		uint32_t L_11 = V_2;
		if ((!(((uint32_t)L_11) <= ((uint32_t)((int32_t)955488309)))))
		{
			goto IL_008d;
		}
	}
	{
		uint32_t L_12 = V_2;
		if ((((int32_t)L_12) == ((int32_t)((int32_t)923624301))))
		{
			goto IL_0238;
		}
	}
	{
		uint32_t L_13 = V_2;
		if ((((int32_t)L_13) == ((int32_t)((int32_t)955488309))))
		{
			goto IL_028c;
		}
	}
	{
		goto IL_0426;
	}

IL_008d:
	{
		uint32_t L_14 = V_2;
		if ((((int32_t)L_14) == ((int32_t)((int32_t)980363995))))
		{
			goto IL_02a1;
		}
	}
	{
		uint32_t L_15 = V_2;
		if ((((int32_t)L_15) == ((int32_t)((int32_t)985988853))))
		{
			goto IL_017b;
		}
	}
	{
		uint32_t L_16 = V_2;
		if ((((int32_t)L_16) == ((int32_t)((int32_t)-2104025999))))
		{
			goto IL_01e4;
		}
	}
	{
		goto IL_0426;
	}

IL_00b3:
	{
		uint32_t L_17 = V_2;
		if ((!(((uint32_t)L_17) <= ((uint32_t)((int32_t)-1473810612)))))
		{
			goto IL_00f6;
		}
	}
	{
		uint32_t L_18 = V_2;
		if ((!(((uint32_t)L_18) <= ((uint32_t)((int32_t)-1726928010)))))
		{
			goto IL_00db;
		}
	}
	{
		uint32_t L_19 = V_2;
		if ((((int32_t)L_19) == ((int32_t)((int32_t)-2083506667))))
		{
			goto IL_01cf;
		}
	}
	{
		uint32_t L_20 = V_2;
		if ((((int32_t)L_20) == ((int32_t)((int32_t)-1726928010))))
		{
			goto IL_0151;
		}
	}
	{
		goto IL_0426;
	}

IL_00db:
	{
		uint32_t L_21 = V_2;
		if ((((int32_t)L_21) == ((int32_t)((int32_t)-1593786692))))
		{
			goto IL_020e;
		}
	}
	{
		uint32_t L_22 = V_2;
		if ((((int32_t)L_22) == ((int32_t)((int32_t)-1473810612))))
		{
			goto IL_0190;
		}
	}
	{
		goto IL_0426;
	}

IL_00f6:
	{
		uint32_t L_23 = V_2;
		if ((!(((uint32_t)L_23) <= ((uint32_t)((int32_t)-1386986472)))))
		{
			goto IL_0116;
		}
	}
	{
		uint32_t L_24 = V_2;
		if ((((int32_t)L_24) == ((int32_t)((int32_t)-1412039661))))
		{
			goto IL_0166;
		}
	}
	{
		uint32_t L_25 = V_2;
		if ((((int32_t)L_25) == ((int32_t)((int32_t)-1386986472))))
		{
			goto IL_01ba;
		}
	}
	{
		goto IL_0426;
	}

IL_0116:
	{
		uint32_t L_26 = V_2;
		if ((((int32_t)L_26) == ((int32_t)((int32_t)-584064197))))
		{
			goto IL_0223;
		}
	}
	{
		uint32_t L_27 = V_2;
		if ((((int32_t)L_27) == ((int32_t)((int32_t)-473474755))))
		{
			goto IL_0277;
		}
	}
	{
		uint32_t L_28 = V_2;
		if ((((int32_t)L_28) == ((int32_t)((int32_t)-365686981))))
		{
			goto IL_0262;
		}
	}
	{
		goto IL_0426;
	}

IL_013c:
	{
		String_t* L_29 = V_1;
		bool L_30;
		L_30 = String_op_Equality_m50B3548E4AC232558190B0052877B290AA1D436A((String_t*)L_29, (String_t*)_stringLiteralF9D225733E1D10F9344C755C4A9C0870CD1DE97B, /*hidden argument*/NULL);
		if (L_30)
		{
			goto IL_02b6;
		}
	}
	{
		goto IL_0426;
	}

IL_0151:
	{
		String_t* L_31 = V_1;
		bool L_32;
		L_32 = String_op_Equality_m50B3548E4AC232558190B0052877B290AA1D436A((String_t*)L_31, (String_t*)_stringLiteral82BECCAD895076775062861CDB46AADEF913D969, /*hidden argument*/NULL);
		if (L_32)
		{
			goto IL_02cd;
		}
	}
	{
		goto IL_0426;
	}

IL_0166:
	{
		String_t* L_33 = V_1;
		bool L_34;
		L_34 = String_op_Equality_m50B3548E4AC232558190B0052877B290AA1D436A((String_t*)L_33, (String_t*)_stringLiteral1228466552C1791B2019A329AFE94665D441168A, /*hidden argument*/NULL);
		if (L_34)
		{
			goto IL_02df;
		}
	}
	{
		goto IL_0426;
	}

IL_017b:
	{
		String_t* L_35 = V_1;
		bool L_36;
		L_36 = String_op_Equality_m50B3548E4AC232558190B0052877B290AA1D436A((String_t*)L_35, (String_t*)_stringLiteralBD49F93A7BC78A69E385CEC0E78F434BD2845A17, /*hidden argument*/NULL);
		if (L_36)
		{
			goto IL_02f6;
		}
	}
	{
		goto IL_0426;
	}

IL_0190:
	{
		String_t* L_37 = V_1;
		bool L_38;
		L_38 = String_op_Equality_m50B3548E4AC232558190B0052877B290AA1D436A((String_t*)L_37, (String_t*)_stringLiteralED1F119527A0BCA45125EF8E0F719985DA86C0E1, /*hidden argument*/NULL);
		if (L_38)
		{
			goto IL_030d;
		}
	}
	{
		goto IL_0426;
	}

IL_01a5:
	{
		String_t* L_39 = V_1;
		bool L_40;
		L_40 = String_op_Equality_m50B3548E4AC232558190B0052877B290AA1D436A((String_t*)L_39, (String_t*)_stringLiteral8C9F18A4F030B96447955FBBA1A99FFC43B5D8E0, /*hidden argument*/NULL);
		if (L_40)
		{
			goto IL_0324;
		}
	}
	{
		goto IL_0426;
	}

IL_01ba:
	{
		String_t* L_41 = V_1;
		bool L_42;
		L_42 = String_op_Equality_m50B3548E4AC232558190B0052877B290AA1D436A((String_t*)L_41, (String_t*)_stringLiteralFC341A1966AF28A9A7A26EDFB78ABBF7DE4D0E1F, /*hidden argument*/NULL);
		if (L_42)
		{
			goto IL_033b;
		}
	}
	{
		goto IL_0426;
	}

IL_01cf:
	{
		String_t* L_43 = V_1;
		bool L_44;
		L_44 = String_op_Equality_m50B3548E4AC232558190B0052877B290AA1D436A((String_t*)L_43, (String_t*)_stringLiteralE8744A8B8BD390EB66CA0CAE2376C973E6904FFB, /*hidden argument*/NULL);
		if (L_44)
		{
			goto IL_0352;
		}
	}
	{
		goto IL_0426;
	}

IL_01e4:
	{
		String_t* L_45 = V_1;
		bool L_46;
		L_46 = String_op_Equality_m50B3548E4AC232558190B0052877B290AA1D436A((String_t*)L_45, (String_t*)_stringLiteralF9BE17D634D1B07BCDCDA77A87710C946D81307B, /*hidden argument*/NULL);
		if (L_46)
		{
			goto IL_0369;
		}
	}
	{
		goto IL_0426;
	}

IL_01f9:
	{
		String_t* L_47 = V_1;
		bool L_48;
		L_48 = String_op_Equality_m50B3548E4AC232558190B0052877B290AA1D436A((String_t*)L_47, (String_t*)_stringLiteralFA5EC7168E9633DAAEAA255ECB55030EA60F064F, /*hidden argument*/NULL);
		if (L_48)
		{
			goto IL_0380;
		}
	}
	{
		goto IL_0426;
	}

IL_020e:
	{
		String_t* L_49 = V_1;
		bool L_50;
		L_50 = String_op_Equality_m50B3548E4AC232558190B0052877B290AA1D436A((String_t*)L_49, (String_t*)_stringLiteralEB0A157666700D8227FD4B66A26FDC02035E89BF, /*hidden argument*/NULL);
		if (L_50)
		{
			goto IL_0392;
		}
	}
	{
		goto IL_0426;
	}

IL_0223:
	{
		String_t* L_51 = V_1;
		bool L_52;
		L_52 = String_op_Equality_m50B3548E4AC232558190B0052877B290AA1D436A((String_t*)L_51, (String_t*)_stringLiteral8E54BB51E569CB6A8D3C45D8AEF883A1559C1C0E, /*hidden argument*/NULL);
		if (L_52)
		{
			goto IL_03a4;
		}
	}
	{
		goto IL_0426;
	}

IL_0238:
	{
		String_t* L_53 = V_1;
		bool L_54;
		L_54 = String_op_Equality_m50B3548E4AC232558190B0052877B290AA1D436A((String_t*)L_53, (String_t*)_stringLiteral60E56797D122AE71D3774956F66C6EEB9EA22C05, /*hidden argument*/NULL);
		if (L_54)
		{
			goto IL_03b3;
		}
	}
	{
		goto IL_0426;
	}

IL_024d:
	{
		String_t* L_55 = V_1;
		bool L_56;
		L_56 = String_op_Equality_m50B3548E4AC232558190B0052877B290AA1D436A((String_t*)L_55, (String_t*)_stringLiteral01837E2252AC8026A5EA3567A663017A662FBB70, /*hidden argument*/NULL);
		if (L_56)
		{
			goto IL_03c2;
		}
	}
	{
		goto IL_0426;
	}

IL_0262:
	{
		String_t* L_57 = V_1;
		bool L_58;
		L_58 = String_op_Equality_m50B3548E4AC232558190B0052877B290AA1D436A((String_t*)L_57, (String_t*)_stringLiteralF66E9083C67855AB6EBB4B74342E385A72AACE32, /*hidden argument*/NULL);
		if (L_58)
		{
			goto IL_03d6;
		}
	}
	{
		goto IL_0426;
	}

IL_0277:
	{
		String_t* L_59 = V_1;
		bool L_60;
		L_60 = String_op_Equality_m50B3548E4AC232558190B0052877B290AA1D436A((String_t*)L_59, (String_t*)_stringLiteral91811EE149061D28B38320E2430CE8888AD6398B, /*hidden argument*/NULL);
		if (L_60)
		{
			goto IL_03ea;
		}
	}
	{
		goto IL_0426;
	}

IL_028c:
	{
		String_t* L_61 = V_1;
		bool L_62;
		L_62 = String_op_Equality_m50B3548E4AC232558190B0052877B290AA1D436A((String_t*)L_61, (String_t*)_stringLiteral6686C366F645244186604A3DA4B9A58012A85F1B, /*hidden argument*/NULL);
		if (L_62)
		{
			goto IL_03fe;
		}
	}
	{
		goto IL_0426;
	}

IL_02a1:
	{
		String_t* L_63 = V_1;
		bool L_64;
		L_64 = String_op_Equality_m50B3548E4AC232558190B0052877B290AA1D436A((String_t*)L_63, (String_t*)_stringLiteralCA1B66E295BD92E9FD3B6C708F09CA69A50BEFD1, /*hidden argument*/NULL);
		if (L_64)
		{
			goto IL_0412;
		}
	}
	{
		goto IL_0426;
	}

IL_02b6:
	{
		// instance.enabled = reader.Read<System.Boolean>(ES3Type_bool.Instance);
		ES3Reader_t2780AF8AA61DA2A817115CEF8612AC0E494D03C9 * L_65 = ___reader0;
		IL2CPP_RUNTIME_CLASS_INIT(ES3Type_bool_t8F309F7B9CC735FF1DEE68081B6E3CAB367745F4_il2cpp_TypeInfo_var);
		ES3Type_t8FBECB7AE75168648B9524E0C2A38DAD4555421D * L_66 = ((ES3Type_bool_t8F309F7B9CC735FF1DEE68081B6E3CAB367745F4_StaticFields*)il2cpp_codegen_static_fields_for(ES3Type_bool_t8F309F7B9CC735FF1DEE68081B6E3CAB367745F4_il2cpp_TypeInfo_var))->get_Instance_12();
		NullCheck((ES3Reader_t2780AF8AA61DA2A817115CEF8612AC0E494D03C9 *)L_65);
		bool L_67;
		L_67 = GenericVirtFuncInvoker1< bool, ES3Type_t8FBECB7AE75168648B9524E0C2A38DAD4555421D * >::Invoke(ES3Reader_Read_TisBoolean_t07D1E3F34E4813023D64F584DFF7B34C9D922F37_mC6D1B158268FF9B97822FF9F5B37FB1723FEDA22_RuntimeMethod_var, (ES3Reader_t2780AF8AA61DA2A817115CEF8612AC0E494D03C9 *)L_65, (ES3Type_t8FBECB7AE75168648B9524E0C2A38DAD4555421D *)L_66);
		ShapeModule_set_enabled_mF6FE8ED99E482A739C00F894235F4E2CD09B0D1E((ShapeModule_t3A89D143F5CAF357ECCE8B4A4F2BBD57816F98CA *)(ShapeModule_t3A89D143F5CAF357ECCE8B4A4F2BBD57816F98CA *)(&V_0), (bool)L_67, /*hidden argument*/NULL);
		// break;
		goto IL_042c;
	}

IL_02cd:
	{
		// instance.shapeType = reader.Read<UnityEngine.ParticleSystemShapeType>();
		ES3Reader_t2780AF8AA61DA2A817115CEF8612AC0E494D03C9 * L_68 = ___reader0;
		NullCheck((ES3Reader_t2780AF8AA61DA2A817115CEF8612AC0E494D03C9 *)L_68);
		int32_t L_69;
		L_69 = GenericVirtFuncInvoker0< int32_t >::Invoke(ES3Reader_Read_TisParticleSystemShapeType_t5B09F3A5A637F57DB1B2A6518E214AA2AA53D70C_mAE53212CB1FDDA51CF8CD0D39FCD446087DACA48_RuntimeMethod_var, (ES3Reader_t2780AF8AA61DA2A817115CEF8612AC0E494D03C9 *)L_68);
		ShapeModule_set_shapeType_mB772084527742749EB6AD690BAE47215FC71040D((ShapeModule_t3A89D143F5CAF357ECCE8B4A4F2BBD57816F98CA *)(ShapeModule_t3A89D143F5CAF357ECCE8B4A4F2BBD57816F98CA *)(&V_0), (int32_t)L_69, /*hidden argument*/NULL);
		// break;
		goto IL_042c;
	}

IL_02df:
	{
		// instance.randomDirectionAmount = reader.Read<System.Single>(ES3Type_float.Instance);
		ES3Reader_t2780AF8AA61DA2A817115CEF8612AC0E494D03C9 * L_70 = ___reader0;
		IL2CPP_RUNTIME_CLASS_INIT(ES3Type_float_tF86B773C86731BD9AD79448B860BBB178FE77644_il2cpp_TypeInfo_var);
		ES3Type_t8FBECB7AE75168648B9524E0C2A38DAD4555421D * L_71 = ((ES3Type_float_tF86B773C86731BD9AD79448B860BBB178FE77644_StaticFields*)il2cpp_codegen_static_fields_for(ES3Type_float_tF86B773C86731BD9AD79448B860BBB178FE77644_il2cpp_TypeInfo_var))->get_Instance_12();
		NullCheck((ES3Reader_t2780AF8AA61DA2A817115CEF8612AC0E494D03C9 *)L_70);
		float L_72;
		L_72 = GenericVirtFuncInvoker1< float, ES3Type_t8FBECB7AE75168648B9524E0C2A38DAD4555421D * >::Invoke(ES3Reader_Read_TisSingle_tE07797BA3C98D4CA9B5A19413C19A76688AB899E_m4A0416374498BDA042B8EB21E49B72326D6CE5F4_RuntimeMethod_var, (ES3Reader_t2780AF8AA61DA2A817115CEF8612AC0E494D03C9 *)L_70, (ES3Type_t8FBECB7AE75168648B9524E0C2A38DAD4555421D *)L_71);
		ShapeModule_set_randomDirectionAmount_m4E1BB67600D57383945F75F5A179EEEC01A76885((ShapeModule_t3A89D143F5CAF357ECCE8B4A4F2BBD57816F98CA *)(ShapeModule_t3A89D143F5CAF357ECCE8B4A4F2BBD57816F98CA *)(&V_0), (float)L_72, /*hidden argument*/NULL);
		// break;
		goto IL_042c;
	}

IL_02f6:
	{
		// instance.sphericalDirectionAmount = reader.Read<System.Single>(ES3Type_float.Instance);
		ES3Reader_t2780AF8AA61DA2A817115CEF8612AC0E494D03C9 * L_73 = ___reader0;
		IL2CPP_RUNTIME_CLASS_INIT(ES3Type_float_tF86B773C86731BD9AD79448B860BBB178FE77644_il2cpp_TypeInfo_var);
		ES3Type_t8FBECB7AE75168648B9524E0C2A38DAD4555421D * L_74 = ((ES3Type_float_tF86B773C86731BD9AD79448B860BBB178FE77644_StaticFields*)il2cpp_codegen_static_fields_for(ES3Type_float_tF86B773C86731BD9AD79448B860BBB178FE77644_il2cpp_TypeInfo_var))->get_Instance_12();
		NullCheck((ES3Reader_t2780AF8AA61DA2A817115CEF8612AC0E494D03C9 *)L_73);
		float L_75;
		L_75 = GenericVirtFuncInvoker1< float, ES3Type_t8FBECB7AE75168648B9524E0C2A38DAD4555421D * >::Invoke(ES3Reader_Read_TisSingle_tE07797BA3C98D4CA9B5A19413C19A76688AB899E_m4A0416374498BDA042B8EB21E49B72326D6CE5F4_RuntimeMethod_var, (ES3Reader_t2780AF8AA61DA2A817115CEF8612AC0E494D03C9 *)L_73, (ES3Type_t8FBECB7AE75168648B9524E0C2A38DAD4555421D *)L_74);
		ShapeModule_set_sphericalDirectionAmount_m02A9FBFF18AF24B821801DF5D833CA20A569F62B((ShapeModule_t3A89D143F5CAF357ECCE8B4A4F2BBD57816F98CA *)(ShapeModule_t3A89D143F5CAF357ECCE8B4A4F2BBD57816F98CA *)(&V_0), (float)L_75, /*hidden argument*/NULL);
		// break;
		goto IL_042c;
	}

IL_030d:
	{
		// instance.alignToDirection = reader.Read<System.Boolean>(ES3Type_bool.Instance);
		ES3Reader_t2780AF8AA61DA2A817115CEF8612AC0E494D03C9 * L_76 = ___reader0;
		IL2CPP_RUNTIME_CLASS_INIT(ES3Type_bool_t8F309F7B9CC735FF1DEE68081B6E3CAB367745F4_il2cpp_TypeInfo_var);
		ES3Type_t8FBECB7AE75168648B9524E0C2A38DAD4555421D * L_77 = ((ES3Type_bool_t8F309F7B9CC735FF1DEE68081B6E3CAB367745F4_StaticFields*)il2cpp_codegen_static_fields_for(ES3Type_bool_t8F309F7B9CC735FF1DEE68081B6E3CAB367745F4_il2cpp_TypeInfo_var))->get_Instance_12();
		NullCheck((ES3Reader_t2780AF8AA61DA2A817115CEF8612AC0E494D03C9 *)L_76);
		bool L_78;
		L_78 = GenericVirtFuncInvoker1< bool, ES3Type_t8FBECB7AE75168648B9524E0C2A38DAD4555421D * >::Invoke(ES3Reader_Read_TisBoolean_t07D1E3F34E4813023D64F584DFF7B34C9D922F37_mC6D1B158268FF9B97822FF9F5B37FB1723FEDA22_RuntimeMethod_var, (ES3Reader_t2780AF8AA61DA2A817115CEF8612AC0E494D03C9 *)L_76, (ES3Type_t8FBECB7AE75168648B9524E0C2A38DAD4555421D *)L_77);
		ShapeModule_set_alignToDirection_m396A57DCAD5F194E4DDDA0DF9C35E5508E3641BE((ShapeModule_t3A89D143F5CAF357ECCE8B4A4F2BBD57816F98CA *)(ShapeModule_t3A89D143F5CAF357ECCE8B4A4F2BBD57816F98CA *)(&V_0), (bool)L_78, /*hidden argument*/NULL);
		// break;
		goto IL_042c;
	}

IL_0324:
	{
		// instance.radius = reader.Read<System.Single>(ES3Type_float.Instance);
		ES3Reader_t2780AF8AA61DA2A817115CEF8612AC0E494D03C9 * L_79 = ___reader0;
		IL2CPP_RUNTIME_CLASS_INIT(ES3Type_float_tF86B773C86731BD9AD79448B860BBB178FE77644_il2cpp_TypeInfo_var);
		ES3Type_t8FBECB7AE75168648B9524E0C2A38DAD4555421D * L_80 = ((ES3Type_float_tF86B773C86731BD9AD79448B860BBB178FE77644_StaticFields*)il2cpp_codegen_static_fields_for(ES3Type_float_tF86B773C86731BD9AD79448B860BBB178FE77644_il2cpp_TypeInfo_var))->get_Instance_12();
		NullCheck((ES3Reader_t2780AF8AA61DA2A817115CEF8612AC0E494D03C9 *)L_79);
		float L_81;
		L_81 = GenericVirtFuncInvoker1< float, ES3Type_t8FBECB7AE75168648B9524E0C2A38DAD4555421D * >::Invoke(ES3Reader_Read_TisSingle_tE07797BA3C98D4CA9B5A19413C19A76688AB899E_m4A0416374498BDA042B8EB21E49B72326D6CE5F4_RuntimeMethod_var, (ES3Reader_t2780AF8AA61DA2A817115CEF8612AC0E494D03C9 *)L_79, (ES3Type_t8FBECB7AE75168648B9524E0C2A38DAD4555421D *)L_80);
		ShapeModule_set_radius_mFC12B15750268316924771461C09B1A311A16DEA((ShapeModule_t3A89D143F5CAF357ECCE8B4A4F2BBD57816F98CA *)(ShapeModule_t3A89D143F5CAF357ECCE8B4A4F2BBD57816F98CA *)(&V_0), (float)L_81, /*hidden argument*/NULL);
		// break;
		goto IL_042c;
	}

IL_033b:
	{
		// instance.angle = reader.Read<System.Single>(ES3Type_float.Instance);
		ES3Reader_t2780AF8AA61DA2A817115CEF8612AC0E494D03C9 * L_82 = ___reader0;
		IL2CPP_RUNTIME_CLASS_INIT(ES3Type_float_tF86B773C86731BD9AD79448B860BBB178FE77644_il2cpp_TypeInfo_var);
		ES3Type_t8FBECB7AE75168648B9524E0C2A38DAD4555421D * L_83 = ((ES3Type_float_tF86B773C86731BD9AD79448B860BBB178FE77644_StaticFields*)il2cpp_codegen_static_fields_for(ES3Type_float_tF86B773C86731BD9AD79448B860BBB178FE77644_il2cpp_TypeInfo_var))->get_Instance_12();
		NullCheck((ES3Reader_t2780AF8AA61DA2A817115CEF8612AC0E494D03C9 *)L_82);
		float L_84;
		L_84 = GenericVirtFuncInvoker1< float, ES3Type_t8FBECB7AE75168648B9524E0C2A38DAD4555421D * >::Invoke(ES3Reader_Read_TisSingle_tE07797BA3C98D4CA9B5A19413C19A76688AB899E_m4A0416374498BDA042B8EB21E49B72326D6CE5F4_RuntimeMethod_var, (ES3Reader_t2780AF8AA61DA2A817115CEF8612AC0E494D03C9 *)L_82, (ES3Type_t8FBECB7AE75168648B9524E0C2A38DAD4555421D *)L_83);
		ShapeModule_set_angle_m20629BB5FE89F2040960548B45F6EC801B1DB8AA((ShapeModule_t3A89D143F5CAF357ECCE8B4A4F2BBD57816F98CA *)(ShapeModule_t3A89D143F5CAF357ECCE8B4A4F2BBD57816F98CA *)(&V_0), (float)L_84, /*hidden argument*/NULL);
		// break;
		goto IL_042c;
	}

IL_0352:
	{
		// instance.length = reader.Read<System.Single>(ES3Type_float.Instance);
		ES3Reader_t2780AF8AA61DA2A817115CEF8612AC0E494D03C9 * L_85 = ___reader0;
		IL2CPP_RUNTIME_CLASS_INIT(ES3Type_float_tF86B773C86731BD9AD79448B860BBB178FE77644_il2cpp_TypeInfo_var);
		ES3Type_t8FBECB7AE75168648B9524E0C2A38DAD4555421D * L_86 = ((ES3Type_float_tF86B773C86731BD9AD79448B860BBB178FE77644_StaticFields*)il2cpp_codegen_static_fields_for(ES3Type_float_tF86B773C86731BD9AD79448B860BBB178FE77644_il2cpp_TypeInfo_var))->get_Instance_12();
		NullCheck((ES3Reader_t2780AF8AA61DA2A817115CEF8612AC0E494D03C9 *)L_85);
		float L_87;
		L_87 = GenericVirtFuncInvoker1< float, ES3Type_t8FBECB7AE75168648B9524E0C2A38DAD4555421D * >::Invoke(ES3Reader_Read_TisSingle_tE07797BA3C98D4CA9B5A19413C19A76688AB899E_m4A0416374498BDA042B8EB21E49B72326D6CE5F4_RuntimeMethod_var, (ES3Reader_t2780AF8AA61DA2A817115CEF8612AC0E494D03C9 *)L_85, (ES3Type_t8FBECB7AE75168648B9524E0C2A38DAD4555421D *)L_86);
		ShapeModule_set_length_m744975258664B53F38A8B8BE38A86A0FFDD85BC7((ShapeModule_t3A89D143F5CAF357ECCE8B4A4F2BBD57816F98CA *)(ShapeModule_t3A89D143F5CAF357ECCE8B4A4F2BBD57816F98CA *)(&V_0), (float)L_87, /*hidden argument*/NULL);
		// break;
		goto IL_042c;
	}

IL_0369:
	{
		// instance.scale = reader.Read<UnityEngine.Vector3>(ES3Type_Vector3.Instance);
		ES3Reader_t2780AF8AA61DA2A817115CEF8612AC0E494D03C9 * L_88 = ___reader0;
		IL2CPP_RUNTIME_CLASS_INIT(ES3Type_Vector3_tA9144E81A20D2F28726F02DE1AE6CD3F9C12B54F_il2cpp_TypeInfo_var);
		ES3Type_t8FBECB7AE75168648B9524E0C2A38DAD4555421D * L_89 = ((ES3Type_Vector3_tA9144E81A20D2F28726F02DE1AE6CD3F9C12B54F_StaticFields*)il2cpp_codegen_static_fields_for(ES3Type_Vector3_tA9144E81A20D2F28726F02DE1AE6CD3F9C12B54F_il2cpp_TypeInfo_var))->get_Instance_12();
		NullCheck((ES3Reader_t2780AF8AA61DA2A817115CEF8612AC0E494D03C9 *)L_88);
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_90;
		L_90 = GenericVirtFuncInvoker1< Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E , ES3Type_t8FBECB7AE75168648B9524E0C2A38DAD4555421D * >::Invoke(ES3Reader_Read_TisVector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E_mBA4CD9D0F45E78BA43FE2DB8EC33CC3A5433DE15_RuntimeMethod_var, (ES3Reader_t2780AF8AA61DA2A817115CEF8612AC0E494D03C9 *)L_88, (ES3Type_t8FBECB7AE75168648B9524E0C2A38DAD4555421D *)L_89);
		ShapeModule_set_scale_m2951583898F18878E6F238100045072F44AD9158((ShapeModule_t3A89D143F5CAF357ECCE8B4A4F2BBD57816F98CA *)(ShapeModule_t3A89D143F5CAF357ECCE8B4A4F2BBD57816F98CA *)(&V_0), (Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E )L_90, /*hidden argument*/NULL);
		// break;
		goto IL_042c;
	}

IL_0380:
	{
		// instance.meshShapeType = reader.Read<UnityEngine.ParticleSystemMeshShapeType>();
		ES3Reader_t2780AF8AA61DA2A817115CEF8612AC0E494D03C9 * L_91 = ___reader0;
		NullCheck((ES3Reader_t2780AF8AA61DA2A817115CEF8612AC0E494D03C9 *)L_91);
		int32_t L_92;
		L_92 = GenericVirtFuncInvoker0< int32_t >::Invoke(ES3Reader_Read_TisParticleSystemMeshShapeType_t7C9518403F30CC7AF7F9124FD61EC1187B42EFD2_mF1A19C0F8BBA6E44737F158F3BE4CC478F623F10_RuntimeMethod_var, (ES3Reader_t2780AF8AA61DA2A817115CEF8612AC0E494D03C9 *)L_91);
		ShapeModule_set_meshShapeType_m5DAD94B71F2110F45E454C30DE052153129891C2((ShapeModule_t3A89D143F5CAF357ECCE8B4A4F2BBD57816F98CA *)(ShapeModule_t3A89D143F5CAF357ECCE8B4A4F2BBD57816F98CA *)(&V_0), (int32_t)L_92, /*hidden argument*/NULL);
		// break;
		goto IL_042c;
	}

IL_0392:
	{
		// instance.mesh = reader.Read<UnityEngine.Mesh>();
		ES3Reader_t2780AF8AA61DA2A817115CEF8612AC0E494D03C9 * L_93 = ___reader0;
		NullCheck((ES3Reader_t2780AF8AA61DA2A817115CEF8612AC0E494D03C9 *)L_93);
		Mesh_t2F5992DBA650D5862B43D3823ACD997132A57DA6 * L_94;
		L_94 = GenericVirtFuncInvoker0< Mesh_t2F5992DBA650D5862B43D3823ACD997132A57DA6 * >::Invoke(ES3Reader_Read_TisMesh_t2F5992DBA650D5862B43D3823ACD997132A57DA6_m65DF5BA41642A39B77979CC49472E4DE7A1660F9_RuntimeMethod_var, (ES3Reader_t2780AF8AA61DA2A817115CEF8612AC0E494D03C9 *)L_93);
		ShapeModule_set_mesh_mD3E276A9E45442E75AD8A9AA4BD88C9112BD77CA((ShapeModule_t3A89D143F5CAF357ECCE8B4A4F2BBD57816F98CA *)(ShapeModule_t3A89D143F5CAF357ECCE8B4A4F2BBD57816F98CA *)(&V_0), (Mesh_t2F5992DBA650D5862B43D3823ACD997132A57DA6 *)L_94, /*hidden argument*/NULL);
		// break;
		goto IL_042c;
	}

IL_03a4:
	{
		// instance.meshRenderer = reader.Read<UnityEngine.MeshRenderer>();
		ES3Reader_t2780AF8AA61DA2A817115CEF8612AC0E494D03C9 * L_95 = ___reader0;
		NullCheck((ES3Reader_t2780AF8AA61DA2A817115CEF8612AC0E494D03C9 *)L_95);
		MeshRenderer_tCD983A2F635E12BCB0BAA2E635D96A318757908B * L_96;
		L_96 = GenericVirtFuncInvoker0< MeshRenderer_tCD983A2F635E12BCB0BAA2E635D96A318757908B * >::Invoke(ES3Reader_Read_TisMeshRenderer_tCD983A2F635E12BCB0BAA2E635D96A318757908B_m773CE5481730EBCC6A377F918946EB11B304050A_RuntimeMethod_var, (ES3Reader_t2780AF8AA61DA2A817115CEF8612AC0E494D03C9 *)L_95);
		ShapeModule_set_meshRenderer_m334D69AC8C29F5E393732D62BBB3645296614059((ShapeModule_t3A89D143F5CAF357ECCE8B4A4F2BBD57816F98CA *)(ShapeModule_t3A89D143F5CAF357ECCE8B4A4F2BBD57816F98CA *)(&V_0), (MeshRenderer_tCD983A2F635E12BCB0BAA2E635D96A318757908B *)L_96, /*hidden argument*/NULL);
		// break;
		goto IL_042c;
	}

IL_03b3:
	{
		// instance.skinnedMeshRenderer = reader.Read<UnityEngine.SkinnedMeshRenderer>();
		ES3Reader_t2780AF8AA61DA2A817115CEF8612AC0E494D03C9 * L_97 = ___reader0;
		NullCheck((ES3Reader_t2780AF8AA61DA2A817115CEF8612AC0E494D03C9 *)L_97);
		SkinnedMeshRenderer_t126F4D6010E0F4B2685A7817B0A9171805D8F496 * L_98;
		L_98 = GenericVirtFuncInvoker0< SkinnedMeshRenderer_t126F4D6010E0F4B2685A7817B0A9171805D8F496 * >::Invoke(ES3Reader_Read_TisSkinnedMeshRenderer_t126F4D6010E0F4B2685A7817B0A9171805D8F496_m23D6569D5CE7B3E1C67BDB470CDEDEF25A835F25_RuntimeMethod_var, (ES3Reader_t2780AF8AA61DA2A817115CEF8612AC0E494D03C9 *)L_97);
		ShapeModule_set_skinnedMeshRenderer_m9DEF9CD332D3F10BE7D99EFECC0971FB5AE83F56((ShapeModule_t3A89D143F5CAF357ECCE8B4A4F2BBD57816F98CA *)(ShapeModule_t3A89D143F5CAF357ECCE8B4A4F2BBD57816F98CA *)(&V_0), (SkinnedMeshRenderer_t126F4D6010E0F4B2685A7817B0A9171805D8F496 *)L_98, /*hidden argument*/NULL);
		// break;
		goto IL_042c;
	}

IL_03c2:
	{
		// instance.useMeshMaterialIndex = reader.Read<System.Boolean>(ES3Type_bool.Instance);
		ES3Reader_t2780AF8AA61DA2A817115CEF8612AC0E494D03C9 * L_99 = ___reader0;
		IL2CPP_RUNTIME_CLASS_INIT(ES3Type_bool_t8F309F7B9CC735FF1DEE68081B6E3CAB367745F4_il2cpp_TypeInfo_var);
		ES3Type_t8FBECB7AE75168648B9524E0C2A38DAD4555421D * L_100 = ((ES3Type_bool_t8F309F7B9CC735FF1DEE68081B6E3CAB367745F4_StaticFields*)il2cpp_codegen_static_fields_for(ES3Type_bool_t8F309F7B9CC735FF1DEE68081B6E3CAB367745F4_il2cpp_TypeInfo_var))->get_Instance_12();
		NullCheck((ES3Reader_t2780AF8AA61DA2A817115CEF8612AC0E494D03C9 *)L_99);
		bool L_101;
		L_101 = GenericVirtFuncInvoker1< bool, ES3Type_t8FBECB7AE75168648B9524E0C2A38DAD4555421D * >::Invoke(ES3Reader_Read_TisBoolean_t07D1E3F34E4813023D64F584DFF7B34C9D922F37_mC6D1B158268FF9B97822FF9F5B37FB1723FEDA22_RuntimeMethod_var, (ES3Reader_t2780AF8AA61DA2A817115CEF8612AC0E494D03C9 *)L_99, (ES3Type_t8FBECB7AE75168648B9524E0C2A38DAD4555421D *)L_100);
		ShapeModule_set_useMeshMaterialIndex_m6130573C0966ED3B5C590665747305BCEFD3F901((ShapeModule_t3A89D143F5CAF357ECCE8B4A4F2BBD57816F98CA *)(ShapeModule_t3A89D143F5CAF357ECCE8B4A4F2BBD57816F98CA *)(&V_0), (bool)L_101, /*hidden argument*/NULL);
		// break;
		goto IL_042c;
	}

IL_03d6:
	{
		// instance.meshMaterialIndex = reader.Read<System.Int32>(ES3Type_int.Instance);
		ES3Reader_t2780AF8AA61DA2A817115CEF8612AC0E494D03C9 * L_102 = ___reader0;
		IL2CPP_RUNTIME_CLASS_INIT(ES3Type_int_tF64C15D40AD0CC7C15BCD1CEC3C5C6BF837BD167_il2cpp_TypeInfo_var);
		ES3Type_t8FBECB7AE75168648B9524E0C2A38DAD4555421D * L_103 = ((ES3Type_int_tF64C15D40AD0CC7C15BCD1CEC3C5C6BF837BD167_StaticFields*)il2cpp_codegen_static_fields_for(ES3Type_int_tF64C15D40AD0CC7C15BCD1CEC3C5C6BF837BD167_il2cpp_TypeInfo_var))->get_Instance_12();
		NullCheck((ES3Reader_t2780AF8AA61DA2A817115CEF8612AC0E494D03C9 *)L_102);
		int32_t L_104;
		L_104 = GenericVirtFuncInvoker1< int32_t, ES3Type_t8FBECB7AE75168648B9524E0C2A38DAD4555421D * >::Invoke(ES3Reader_Read_TisInt32_tFDE5F8CD43D10453F6A2E0C77FE48C6CC7009046_m2B74AA6627F5B1D21171D56C42F71DE5A7C1B4A6_RuntimeMethod_var, (ES3Reader_t2780AF8AA61DA2A817115CEF8612AC0E494D03C9 *)L_102, (ES3Type_t8FBECB7AE75168648B9524E0C2A38DAD4555421D *)L_103);
		ShapeModule_set_meshMaterialIndex_m1205DDEB353204D5941654FB79164AD5BAF0A59C((ShapeModule_t3A89D143F5CAF357ECCE8B4A4F2BBD57816F98CA *)(ShapeModule_t3A89D143F5CAF357ECCE8B4A4F2BBD57816F98CA *)(&V_0), (int32_t)L_104, /*hidden argument*/NULL);
		// break;
		goto IL_042c;
	}

IL_03ea:
	{
		// instance.useMeshColors = reader.Read<System.Boolean>(ES3Type_bool.Instance);
		ES3Reader_t2780AF8AA61DA2A817115CEF8612AC0E494D03C9 * L_105 = ___reader0;
		IL2CPP_RUNTIME_CLASS_INIT(ES3Type_bool_t8F309F7B9CC735FF1DEE68081B6E3CAB367745F4_il2cpp_TypeInfo_var);
		ES3Type_t8FBECB7AE75168648B9524E0C2A38DAD4555421D * L_106 = ((ES3Type_bool_t8F309F7B9CC735FF1DEE68081B6E3CAB367745F4_StaticFields*)il2cpp_codegen_static_fields_for(ES3Type_bool_t8F309F7B9CC735FF1DEE68081B6E3CAB367745F4_il2cpp_TypeInfo_var))->get_Instance_12();
		NullCheck((ES3Reader_t2780AF8AA61DA2A817115CEF8612AC0E494D03C9 *)L_105);
		bool L_107;
		L_107 = GenericVirtFuncInvoker1< bool, ES3Type_t8FBECB7AE75168648B9524E0C2A38DAD4555421D * >::Invoke(ES3Reader_Read_TisBoolean_t07D1E3F34E4813023D64F584DFF7B34C9D922F37_mC6D1B158268FF9B97822FF9F5B37FB1723FEDA22_RuntimeMethod_var, (ES3Reader_t2780AF8AA61DA2A817115CEF8612AC0E494D03C9 *)L_105, (ES3Type_t8FBECB7AE75168648B9524E0C2A38DAD4555421D *)L_106);
		ShapeModule_set_useMeshColors_m071D000F330805B1EBCF09B40AC4EB9942EB9F57((ShapeModule_t3A89D143F5CAF357ECCE8B4A4F2BBD57816F98CA *)(ShapeModule_t3A89D143F5CAF357ECCE8B4A4F2BBD57816F98CA *)(&V_0), (bool)L_107, /*hidden argument*/NULL);
		// break;
		goto IL_042c;
	}

IL_03fe:
	{
		// instance.normalOffset = reader.Read<System.Single>(ES3Type_float.Instance);
		ES3Reader_t2780AF8AA61DA2A817115CEF8612AC0E494D03C9 * L_108 = ___reader0;
		IL2CPP_RUNTIME_CLASS_INIT(ES3Type_float_tF86B773C86731BD9AD79448B860BBB178FE77644_il2cpp_TypeInfo_var);
		ES3Type_t8FBECB7AE75168648B9524E0C2A38DAD4555421D * L_109 = ((ES3Type_float_tF86B773C86731BD9AD79448B860BBB178FE77644_StaticFields*)il2cpp_codegen_static_fields_for(ES3Type_float_tF86B773C86731BD9AD79448B860BBB178FE77644_il2cpp_TypeInfo_var))->get_Instance_12();
		NullCheck((ES3Reader_t2780AF8AA61DA2A817115CEF8612AC0E494D03C9 *)L_108);
		float L_110;
		L_110 = GenericVirtFuncInvoker1< float, ES3Type_t8FBECB7AE75168648B9524E0C2A38DAD4555421D * >::Invoke(ES3Reader_Read_TisSingle_tE07797BA3C98D4CA9B5A19413C19A76688AB899E_m4A0416374498BDA042B8EB21E49B72326D6CE5F4_RuntimeMethod_var, (ES3Reader_t2780AF8AA61DA2A817115CEF8612AC0E494D03C9 *)L_108, (ES3Type_t8FBECB7AE75168648B9524E0C2A38DAD4555421D *)L_109);
		ShapeModule_set_normalOffset_m81A315286BAA5F52AAED6B317734FB03B2DCE9FD((ShapeModule_t3A89D143F5CAF357ECCE8B4A4F2BBD57816F98CA *)(ShapeModule_t3A89D143F5CAF357ECCE8B4A4F2BBD57816F98CA *)(&V_0), (float)L_110, /*hidden argument*/NULL);
		// break;
		goto IL_042c;
	}

IL_0412:
	{
		// instance.arc = reader.Read<System.Single>(ES3Type_float.Instance);
		ES3Reader_t2780AF8AA61DA2A817115CEF8612AC0E494D03C9 * L_111 = ___reader0;
		IL2CPP_RUNTIME_CLASS_INIT(ES3Type_float_tF86B773C86731BD9AD79448B860BBB178FE77644_il2cpp_TypeInfo_var);
		ES3Type_t8FBECB7AE75168648B9524E0C2A38DAD4555421D * L_112 = ((ES3Type_float_tF86B773C86731BD9AD79448B860BBB178FE77644_StaticFields*)il2cpp_codegen_static_fields_for(ES3Type_float_tF86B773C86731BD9AD79448B860BBB178FE77644_il2cpp_TypeInfo_var))->get_Instance_12();
		NullCheck((ES3Reader_t2780AF8AA61DA2A817115CEF8612AC0E494D03C9 *)L_111);
		float L_113;
		L_113 = GenericVirtFuncInvoker1< float, ES3Type_t8FBECB7AE75168648B9524E0C2A38DAD4555421D * >::Invoke(ES3Reader_Read_TisSingle_tE07797BA3C98D4CA9B5A19413C19A76688AB899E_m4A0416374498BDA042B8EB21E49B72326D6CE5F4_RuntimeMethod_var, (ES3Reader_t2780AF8AA61DA2A817115CEF8612AC0E494D03C9 *)L_111, (ES3Type_t8FBECB7AE75168648B9524E0C2A38DAD4555421D *)L_112);
		ShapeModule_set_arc_m4A2578EBD4747DB3D9ED74AB53E488872CFA541F((ShapeModule_t3A89D143F5CAF357ECCE8B4A4F2BBD57816F98CA *)(ShapeModule_t3A89D143F5CAF357ECCE8B4A4F2BBD57816F98CA *)(&V_0), (float)L_113, /*hidden argument*/NULL);
		// break;
		goto IL_042c;
	}

IL_0426:
	{
		// reader.Skip();
		ES3Reader_t2780AF8AA61DA2A817115CEF8612AC0E494D03C9 * L_114 = ___reader0;
		NullCheck((ES3Reader_t2780AF8AA61DA2A817115CEF8612AC0E494D03C9 *)L_114);
		VirtActionInvoker0::Invoke(41 /* System.Void ES3Reader::Skip() */, (ES3Reader_t2780AF8AA61DA2A817115CEF8612AC0E494D03C9 *)L_114);
	}

IL_042c:
	{
		// while((propertyName = reader.ReadPropertyName()) != null)
		ES3Reader_t2780AF8AA61DA2A817115CEF8612AC0E494D03C9 * L_115 = ___reader0;
		NullCheck((ES3Reader_t2780AF8AA61DA2A817115CEF8612AC0E494D03C9 *)L_115);
		String_t* L_116;
		L_116 = VirtFuncInvoker0< String_t* >::Invoke(21 /* System.String ES3Reader::ReadPropertyName() */, (ES3Reader_t2780AF8AA61DA2A817115CEF8612AC0E494D03C9 *)L_115);
		String_t* L_117 = (String_t*)L_116;
		V_1 = (String_t*)L_117;
		if (L_117)
		{
			goto IL_000c;
		}
	}
	{
		// }
		return;
	}
}
// System.Void ES3Types.ES3Type_ShapeModule::ReadInto<UnityEngine.ParticleSystem/ShapeModule>(ES3Reader,System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ES3Type_ShapeModule_ReadInto_TisShapeModule_t3A89D143F5CAF357ECCE8B4A4F2BBD57816F98CA_m30DC1CE7896CB6803CF31083EAE97E33F403B7F4_gshared (ES3Type_ShapeModule_t67010A74D4F69A245D5F06976239CAB4279B5377 * __this, ES3Reader_t2780AF8AA61DA2A817115CEF8612AC0E494D03C9 * ___reader0, RuntimeObject * ___obj1, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ES3Reader_Read_TisBoolean_t07D1E3F34E4813023D64F584DFF7B34C9D922F37_mC6D1B158268FF9B97822FF9F5B37FB1723FEDA22_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ES3Reader_Read_TisInt32_tFDE5F8CD43D10453F6A2E0C77FE48C6CC7009046_m2B74AA6627F5B1D21171D56C42F71DE5A7C1B4A6_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ES3Reader_Read_TisMeshRenderer_tCD983A2F635E12BCB0BAA2E635D96A318757908B_m773CE5481730EBCC6A377F918946EB11B304050A_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ES3Reader_Read_TisMesh_t2F5992DBA650D5862B43D3823ACD997132A57DA6_m65DF5BA41642A39B77979CC49472E4DE7A1660F9_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ES3Reader_Read_TisParticleSystemMeshShapeType_t7C9518403F30CC7AF7F9124FD61EC1187B42EFD2_mF1A19C0F8BBA6E44737F158F3BE4CC478F623F10_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ES3Reader_Read_TisParticleSystemShapeType_t5B09F3A5A637F57DB1B2A6518E214AA2AA53D70C_mAE53212CB1FDDA51CF8CD0D39FCD446087DACA48_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ES3Reader_Read_TisSingle_tE07797BA3C98D4CA9B5A19413C19A76688AB899E_m4A0416374498BDA042B8EB21E49B72326D6CE5F4_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ES3Reader_Read_TisSkinnedMeshRenderer_t126F4D6010E0F4B2685A7817B0A9171805D8F496_m23D6569D5CE7B3E1C67BDB470CDEDEF25A835F25_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ES3Reader_Read_TisVector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E_mBA4CD9D0F45E78BA43FE2DB8EC33CC3A5433DE15_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ES3Type_Vector3_tA9144E81A20D2F28726F02DE1AE6CD3F9C12B54F_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ES3Type_bool_t8F309F7B9CC735FF1DEE68081B6E3CAB367745F4_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ES3Type_float_tF86B773C86731BD9AD79448B860BBB178FE77644_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ES3Type_int_tF64C15D40AD0CC7C15BCD1CEC3C5C6BF837BD167_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ShapeModule_t3A89D143F5CAF357ECCE8B4A4F2BBD57816F98CA_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral01837E2252AC8026A5EA3567A663017A662FBB70);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral1228466552C1791B2019A329AFE94665D441168A);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral60E56797D122AE71D3774956F66C6EEB9EA22C05);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral6686C366F645244186604A3DA4B9A58012A85F1B);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral82BECCAD895076775062861CDB46AADEF913D969);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral8C9F18A4F030B96447955FBBA1A99FFC43B5D8E0);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral8E54BB51E569CB6A8D3C45D8AEF883A1559C1C0E);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral91811EE149061D28B38320E2430CE8888AD6398B);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralBD49F93A7BC78A69E385CEC0E78F434BD2845A17);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralCA1B66E295BD92E9FD3B6C708F09CA69A50BEFD1);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralE8744A8B8BD390EB66CA0CAE2376C973E6904FFB);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralEB0A157666700D8227FD4B66A26FDC02035E89BF);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralED1F119527A0BCA45125EF8E0F719985DA86C0E1);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralF66E9083C67855AB6EBB4B74342E385A72AACE32);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralF9BE17D634D1B07BCDCDA77A87710C946D81307B);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralF9D225733E1D10F9344C755C4A9C0870CD1DE97B);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralFA5EC7168E9633DAAEAA255ECB55030EA60F064F);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralFC341A1966AF28A9A7A26EDFB78ABBF7DE4D0E1F);
		s_Il2CppMethodInitialized = true;
	}
	ShapeModule_t3A89D143F5CAF357ECCE8B4A4F2BBD57816F98CA  V_0;
	memset((&V_0), 0, sizeof(V_0));
	String_t* V_1 = NULL;
	uint32_t V_2 = 0;
	{
		// var instance = (UnityEngine.ParticleSystem.ShapeModule)obj;
		RuntimeObject * L_0 = ___obj1;
		V_0 = (ShapeModule_t3A89D143F5CAF357ECCE8B4A4F2BBD57816F98CA )((*(ShapeModule_t3A89D143F5CAF357ECCE8B4A4F2BBD57816F98CA *)((ShapeModule_t3A89D143F5CAF357ECCE8B4A4F2BBD57816F98CA *)UnBox(L_0, ShapeModule_t3A89D143F5CAF357ECCE8B4A4F2BBD57816F98CA_il2cpp_TypeInfo_var))));
		goto IL_042c;
	}

IL_000c:
	{
		String_t* L_1 = V_1;
		if (!L_1)
		{
			goto IL_0426;
		}
	}
	{
		String_t* L_2 = V_1;
		uint32_t L_3;
		L_3 = U3CPrivateImplementationDetailsU3E_ComputeStringHash_m3ADC1F612F9EE3DD518E6F0023A0DE0EE2B120A7((String_t*)L_2, /*hidden argument*/NULL);
		V_2 = (uint32_t)L_3;
		uint32_t L_4 = V_2;
		if ((!(((uint32_t)L_4) <= ((uint32_t)((int32_t)-2104025999)))))
		{
			goto IL_00b3;
		}
	}
	{
		uint32_t L_5 = V_2;
		if ((!(((uint32_t)L_5) <= ((uint32_t)((int32_t)666576729)))))
		{
			goto IL_006a;
		}
	}
	{
		uint32_t L_6 = V_2;
		if ((!(((uint32_t)L_6) <= ((uint32_t)((int32_t)49525662)))))
		{
			goto IL_004f;
		}
	}
	{
		uint32_t L_7 = V_2;
		if ((((int32_t)L_7) == ((int32_t)((int32_t)24602224))))
		{
			goto IL_024d;
		}
	}
	{
		uint32_t L_8 = V_2;
		if ((((int32_t)L_8) == ((int32_t)((int32_t)49525662))))
		{
			goto IL_013c;
		}
	}
	{
		goto IL_0426;
	}

IL_004f:
	{
		uint32_t L_9 = V_2;
		if ((((int32_t)L_9) == ((int32_t)((int32_t)230313139))))
		{
			goto IL_01a5;
		}
	}
	{
		uint32_t L_10 = V_2;
		if ((((int32_t)L_10) == ((int32_t)((int32_t)666576729))))
		{
			goto IL_01f9;
		}
	}
	{
		goto IL_0426;
	}

IL_006a:
	{
		uint32_t L_11 = V_2;
		if ((!(((uint32_t)L_11) <= ((uint32_t)((int32_t)955488309)))))
		{
			goto IL_008d;
		}
	}
	{
		uint32_t L_12 = V_2;
		if ((((int32_t)L_12) == ((int32_t)((int32_t)923624301))))
		{
			goto IL_0238;
		}
	}
	{
		uint32_t L_13 = V_2;
		if ((((int32_t)L_13) == ((int32_t)((int32_t)955488309))))
		{
			goto IL_028c;
		}
	}
	{
		goto IL_0426;
	}

IL_008d:
	{
		uint32_t L_14 = V_2;
		if ((((int32_t)L_14) == ((int32_t)((int32_t)980363995))))
		{
			goto IL_02a1;
		}
	}
	{
		uint32_t L_15 = V_2;
		if ((((int32_t)L_15) == ((int32_t)((int32_t)985988853))))
		{
			goto IL_017b;
		}
	}
	{
		uint32_t L_16 = V_2;
		if ((((int32_t)L_16) == ((int32_t)((int32_t)-2104025999))))
		{
			goto IL_01e4;
		}
	}
	{
		goto IL_0426;
	}

IL_00b3:
	{
		uint32_t L_17 = V_2;
		if ((!(((uint32_t)L_17) <= ((uint32_t)((int32_t)-1473810612)))))
		{
			goto IL_00f6;
		}
	}
	{
		uint32_t L_18 = V_2;
		if ((!(((uint32_t)L_18) <= ((uint32_t)((int32_t)-1726928010)))))
		{
			goto IL_00db;
		}
	}
	{
		uint32_t L_19 = V_2;
		if ((((int32_t)L_19) == ((int32_t)((int32_t)-2083506667))))
		{
			goto IL_01cf;
		}
	}
	{
		uint32_t L_20 = V_2;
		if ((((int32_t)L_20) == ((int32_t)((int32_t)-1726928010))))
		{
			goto IL_0151;
		}
	}
	{
		goto IL_0426;
	}

IL_00db:
	{
		uint32_t L_21 = V_2;
		if ((((int32_t)L_21) == ((int32_t)((int32_t)-1593786692))))
		{
			goto IL_020e;
		}
	}
	{
		uint32_t L_22 = V_2;
		if ((((int32_t)L_22) == ((int32_t)((int32_t)-1473810612))))
		{
			goto IL_0190;
		}
	}
	{
		goto IL_0426;
	}

IL_00f6:
	{
		uint32_t L_23 = V_2;
		if ((!(((uint32_t)L_23) <= ((uint32_t)((int32_t)-1386986472)))))
		{
			goto IL_0116;
		}
	}
	{
		uint32_t L_24 = V_2;
		if ((((int32_t)L_24) == ((int32_t)((int32_t)-1412039661))))
		{
			goto IL_0166;
		}
	}
	{
		uint32_t L_25 = V_2;
		if ((((int32_t)L_25) == ((int32_t)((int32_t)-1386986472))))
		{
			goto IL_01ba;
		}
	}
	{
		goto IL_0426;
	}

IL_0116:
	{
		uint32_t L_26 = V_2;
		if ((((int32_t)L_26) == ((int32_t)((int32_t)-584064197))))
		{
			goto IL_0223;
		}
	}
	{
		uint32_t L_27 = V_2;
		if ((((int32_t)L_27) == ((int32_t)((int32_t)-473474755))))
		{
			goto IL_0277;
		}
	}
	{
		uint32_t L_28 = V_2;
		if ((((int32_t)L_28) == ((int32_t)((int32_t)-365686981))))
		{
			goto IL_0262;
		}
	}
	{
		goto IL_0426;
	}

IL_013c:
	{
		String_t* L_29 = V_1;
		bool L_30;
		L_30 = String_op_Equality_m50B3548E4AC232558190B0052877B290AA1D436A((String_t*)L_29, (String_t*)_stringLiteralF9D225733E1D10F9344C755C4A9C0870CD1DE97B, /*hidden argument*/NULL);
		if (L_30)
		{
			goto IL_02b6;
		}
	}
	{
		goto IL_0426;
	}

IL_0151:
	{
		String_t* L_31 = V_1;
		bool L_32;
		L_32 = String_op_Equality_m50B3548E4AC232558190B0052877B290AA1D436A((String_t*)L_31, (String_t*)_stringLiteral82BECCAD895076775062861CDB46AADEF913D969, /*hidden argument*/NULL);
		if (L_32)
		{
			goto IL_02cd;
		}
	}
	{
		goto IL_0426;
	}

IL_0166:
	{
		String_t* L_33 = V_1;
		bool L_34;
		L_34 = String_op_Equality_m50B3548E4AC232558190B0052877B290AA1D436A((String_t*)L_33, (String_t*)_stringLiteral1228466552C1791B2019A329AFE94665D441168A, /*hidden argument*/NULL);
		if (L_34)
		{
			goto IL_02df;
		}
	}
	{
		goto IL_0426;
	}

IL_017b:
	{
		String_t* L_35 = V_1;
		bool L_36;
		L_36 = String_op_Equality_m50B3548E4AC232558190B0052877B290AA1D436A((String_t*)L_35, (String_t*)_stringLiteralBD49F93A7BC78A69E385CEC0E78F434BD2845A17, /*hidden argument*/NULL);
		if (L_36)
		{
			goto IL_02f6;
		}
	}
	{
		goto IL_0426;
	}

IL_0190:
	{
		String_t* L_37 = V_1;
		bool L_38;
		L_38 = String_op_Equality_m50B3548E4AC232558190B0052877B290AA1D436A((String_t*)L_37, (String_t*)_stringLiteralED1F119527A0BCA45125EF8E0F719985DA86C0E1, /*hidden argument*/NULL);
		if (L_38)
		{
			goto IL_030d;
		}
	}
	{
		goto IL_0426;
	}

IL_01a5:
	{
		String_t* L_39 = V_1;
		bool L_40;
		L_40 = String_op_Equality_m50B3548E4AC232558190B0052877B290AA1D436A((String_t*)L_39, (String_t*)_stringLiteral8C9F18A4F030B96447955FBBA1A99FFC43B5D8E0, /*hidden argument*/NULL);
		if (L_40)
		{
			goto IL_0324;
		}
	}
	{
		goto IL_0426;
	}

IL_01ba:
	{
		String_t* L_41 = V_1;
		bool L_42;
		L_42 = String_op_Equality_m50B3548E4AC232558190B0052877B290AA1D436A((String_t*)L_41, (String_t*)_stringLiteralFC341A1966AF28A9A7A26EDFB78ABBF7DE4D0E1F, /*hidden argument*/NULL);
		if (L_42)
		{
			goto IL_033b;
		}
	}
	{
		goto IL_0426;
	}

IL_01cf:
	{
		String_t* L_43 = V_1;
		bool L_44;
		L_44 = String_op_Equality_m50B3548E4AC232558190B0052877B290AA1D436A((String_t*)L_43, (String_t*)_stringLiteralE8744A8B8BD390EB66CA0CAE2376C973E6904FFB, /*hidden argument*/NULL);
		if (L_44)
		{
			goto IL_0352;
		}
	}
	{
		goto IL_0426;
	}

IL_01e4:
	{
		String_t* L_45 = V_1;
		bool L_46;
		L_46 = String_op_Equality_m50B3548E4AC232558190B0052877B290AA1D436A((String_t*)L_45, (String_t*)_stringLiteralF9BE17D634D1B07BCDCDA77A87710C946D81307B, /*hidden argument*/NULL);
		if (L_46)
		{
			goto IL_0369;
		}
	}
	{
		goto IL_0426;
	}

IL_01f9:
	{
		String_t* L_47 = V_1;
		bool L_48;
		L_48 = String_op_Equality_m50B3548E4AC232558190B0052877B290AA1D436A((String_t*)L_47, (String_t*)_stringLiteralFA5EC7168E9633DAAEAA255ECB55030EA60F064F, /*hidden argument*/NULL);
		if (L_48)
		{
			goto IL_0380;
		}
	}
	{
		goto IL_0426;
	}

IL_020e:
	{
		String_t* L_49 = V_1;
		bool L_50;
		L_50 = String_op_Equality_m50B3548E4AC232558190B0052877B290AA1D436A((String_t*)L_49, (String_t*)_stringLiteralEB0A157666700D8227FD4B66A26FDC02035E89BF, /*hidden argument*/NULL);
		if (L_50)
		{
			goto IL_0392;
		}
	}
	{
		goto IL_0426;
	}

IL_0223:
	{
		String_t* L_51 = V_1;
		bool L_52;
		L_52 = String_op_Equality_m50B3548E4AC232558190B0052877B290AA1D436A((String_t*)L_51, (String_t*)_stringLiteral8E54BB51E569CB6A8D3C45D8AEF883A1559C1C0E, /*hidden argument*/NULL);
		if (L_52)
		{
			goto IL_03a4;
		}
	}
	{
		goto IL_0426;
	}

IL_0238:
	{
		String_t* L_53 = V_1;
		bool L_54;
		L_54 = String_op_Equality_m50B3548E4AC232558190B0052877B290AA1D436A((String_t*)L_53, (String_t*)_stringLiteral60E56797D122AE71D3774956F66C6EEB9EA22C05, /*hidden argument*/NULL);
		if (L_54)
		{
			goto IL_03b3;
		}
	}
	{
		goto IL_0426;
	}

IL_024d:
	{
		String_t* L_55 = V_1;
		bool L_56;
		L_56 = String_op_Equality_m50B3548E4AC232558190B0052877B290AA1D436A((String_t*)L_55, (String_t*)_stringLiteral01837E2252AC8026A5EA3567A663017A662FBB70, /*hidden argument*/NULL);
		if (L_56)
		{
			goto IL_03c2;
		}
	}
	{
		goto IL_0426;
	}

IL_0262:
	{
		String_t* L_57 = V_1;
		bool L_58;
		L_58 = String_op_Equality_m50B3548E4AC232558190B0052877B290AA1D436A((String_t*)L_57, (String_t*)_stringLiteralF66E9083C67855AB6EBB4B74342E385A72AACE32, /*hidden argument*/NULL);
		if (L_58)
		{
			goto IL_03d6;
		}
	}
	{
		goto IL_0426;
	}

IL_0277:
	{
		String_t* L_59 = V_1;
		bool L_60;
		L_60 = String_op_Equality_m50B3548E4AC232558190B0052877B290AA1D436A((String_t*)L_59, (String_t*)_stringLiteral91811EE149061D28B38320E2430CE8888AD6398B, /*hidden argument*/NULL);
		if (L_60)
		{
			goto IL_03ea;
		}
	}
	{
		goto IL_0426;
	}

IL_028c:
	{
		String_t* L_61 = V_1;
		bool L_62;
		L_62 = String_op_Equality_m50B3548E4AC232558190B0052877B290AA1D436A((String_t*)L_61, (String_t*)_stringLiteral6686C366F645244186604A3DA4B9A58012A85F1B, /*hidden argument*/NULL);
		if (L_62)
		{
			goto IL_03fe;
		}
	}
	{
		goto IL_0426;
	}

IL_02a1:
	{
		String_t* L_63 = V_1;
		bool L_64;
		L_64 = String_op_Equality_m50B3548E4AC232558190B0052877B290AA1D436A((String_t*)L_63, (String_t*)_stringLiteralCA1B66E295BD92E9FD3B6C708F09CA69A50BEFD1, /*hidden argument*/NULL);
		if (L_64)
		{
			goto IL_0412;
		}
	}
	{
		goto IL_0426;
	}

IL_02b6:
	{
		// instance.enabled = reader.Read<System.Boolean>(ES3Type_bool.Instance);
		ES3Reader_t2780AF8AA61DA2A817115CEF8612AC0E494D03C9 * L_65 = ___reader0;
		IL2CPP_RUNTIME_CLASS_INIT(ES3Type_bool_t8F309F7B9CC735FF1DEE68081B6E3CAB367745F4_il2cpp_TypeInfo_var);
		ES3Type_t8FBECB7AE75168648B9524E0C2A38DAD4555421D * L_66 = ((ES3Type_bool_t8F309F7B9CC735FF1DEE68081B6E3CAB367745F4_StaticFields*)il2cpp_codegen_static_fields_for(ES3Type_bool_t8F309F7B9CC735FF1DEE68081B6E3CAB367745F4_il2cpp_TypeInfo_var))->get_Instance_12();
		NullCheck((ES3Reader_t2780AF8AA61DA2A817115CEF8612AC0E494D03C9 *)L_65);
		bool L_67;
		L_67 = GenericVirtFuncInvoker1< bool, ES3Type_t8FBECB7AE75168648B9524E0C2A38DAD4555421D * >::Invoke(ES3Reader_Read_TisBoolean_t07D1E3F34E4813023D64F584DFF7B34C9D922F37_mC6D1B158268FF9B97822FF9F5B37FB1723FEDA22_RuntimeMethod_var, (ES3Reader_t2780AF8AA61DA2A817115CEF8612AC0E494D03C9 *)L_65, (ES3Type_t8FBECB7AE75168648B9524E0C2A38DAD4555421D *)L_66);
		ShapeModule_set_enabled_mF6FE8ED99E482A739C00F894235F4E2CD09B0D1E((ShapeModule_t3A89D143F5CAF357ECCE8B4A4F2BBD57816F98CA *)(ShapeModule_t3A89D143F5CAF357ECCE8B4A4F2BBD57816F98CA *)(&V_0), (bool)L_67, /*hidden argument*/NULL);
		// break;
		goto IL_042c;
	}

IL_02cd:
	{
		// instance.shapeType = reader.Read<UnityEngine.ParticleSystemShapeType>();
		ES3Reader_t2780AF8AA61DA2A817115CEF8612AC0E494D03C9 * L_68 = ___reader0;
		NullCheck((ES3Reader_t2780AF8AA61DA2A817115CEF8612AC0E494D03C9 *)L_68);
		int32_t L_69;
		L_69 = GenericVirtFuncInvoker0< int32_t >::Invoke(ES3Reader_Read_TisParticleSystemShapeType_t5B09F3A5A637F57DB1B2A6518E214AA2AA53D70C_mAE53212CB1FDDA51CF8CD0D39FCD446087DACA48_RuntimeMethod_var, (ES3Reader_t2780AF8AA61DA2A817115CEF8612AC0E494D03C9 *)L_68);
		ShapeModule_set_shapeType_mB772084527742749EB6AD690BAE47215FC71040D((ShapeModule_t3A89D143F5CAF357ECCE8B4A4F2BBD57816F98CA *)(ShapeModule_t3A89D143F5CAF357ECCE8B4A4F2BBD57816F98CA *)(&V_0), (int32_t)L_69, /*hidden argument*/NULL);
		// break;
		goto IL_042c;
	}

IL_02df:
	{
		// instance.randomDirectionAmount = reader.Read<System.Single>(ES3Type_float.Instance);
		ES3Reader_t2780AF8AA61DA2A817115CEF8612AC0E494D03C9 * L_70 = ___reader0;
		IL2CPP_RUNTIME_CLASS_INIT(ES3Type_float_tF86B773C86731BD9AD79448B860BBB178FE77644_il2cpp_TypeInfo_var);
		ES3Type_t8FBECB7AE75168648B9524E0C2A38DAD4555421D * L_71 = ((ES3Type_float_tF86B773C86731BD9AD79448B860BBB178FE77644_StaticFields*)il2cpp_codegen_static_fields_for(ES3Type_float_tF86B773C86731BD9AD79448B860BBB178FE77644_il2cpp_TypeInfo_var))->get_Instance_12();
		NullCheck((ES3Reader_t2780AF8AA61DA2A817115CEF8612AC0E494D03C9 *)L_70);
		float L_72;
		L_72 = GenericVirtFuncInvoker1< float, ES3Type_t8FBECB7AE75168648B9524E0C2A38DAD4555421D * >::Invoke(ES3Reader_Read_TisSingle_tE07797BA3C98D4CA9B5A19413C19A76688AB899E_m4A0416374498BDA042B8EB21E49B72326D6CE5F4_RuntimeMethod_var, (ES3Reader_t2780AF8AA61DA2A817115CEF8612AC0E494D03C9 *)L_70, (ES3Type_t8FBECB7AE75168648B9524E0C2A38DAD4555421D *)L_71);
		ShapeModule_set_randomDirectionAmount_m4E1BB67600D57383945F75F5A179EEEC01A76885((ShapeModule_t3A89D143F5CAF357ECCE8B4A4F2BBD57816F98CA *)(ShapeModule_t3A89D143F5CAF357ECCE8B4A4F2BBD57816F98CA *)(&V_0), (float)L_72, /*hidden argument*/NULL);
		// break;
		goto IL_042c;
	}

IL_02f6:
	{
		// instance.sphericalDirectionAmount = reader.Read<System.Single>(ES3Type_float.Instance);
		ES3Reader_t2780AF8AA61DA2A817115CEF8612AC0E494D03C9 * L_73 = ___reader0;
		IL2CPP_RUNTIME_CLASS_INIT(ES3Type_float_tF86B773C86731BD9AD79448B860BBB178FE77644_il2cpp_TypeInfo_var);
		ES3Type_t8FBECB7AE75168648B9524E0C2A38DAD4555421D * L_74 = ((ES3Type_float_tF86B773C86731BD9AD79448B860BBB178FE77644_StaticFields*)il2cpp_codegen_static_fields_for(ES3Type_float_tF86B773C86731BD9AD79448B860BBB178FE77644_il2cpp_TypeInfo_var))->get_Instance_12();
		NullCheck((ES3Reader_t2780AF8AA61DA2A817115CEF8612AC0E494D03C9 *)L_73);
		float L_75;
		L_75 = GenericVirtFuncInvoker1< float, ES3Type_t8FBECB7AE75168648B9524E0C2A38DAD4555421D * >::Invoke(ES3Reader_Read_TisSingle_tE07797BA3C98D4CA9B5A19413C19A76688AB899E_m4A0416374498BDA042B8EB21E49B72326D6CE5F4_RuntimeMethod_var, (ES3Reader_t2780AF8AA61DA2A817115CEF8612AC0E494D03C9 *)L_73, (ES3Type_t8FBECB7AE75168648B9524E0C2A38DAD4555421D *)L_74);
		ShapeModule_set_sphericalDirectionAmount_m02A9FBFF18AF24B821801DF5D833CA20A569F62B((ShapeModule_t3A89D143F5CAF357ECCE8B4A4F2BBD57816F98CA *)(ShapeModule_t3A89D143F5CAF357ECCE8B4A4F2BBD57816F98CA *)(&V_0), (float)L_75, /*hidden argument*/NULL);
		// break;
		goto IL_042c;
	}

IL_030d:
	{
		// instance.alignToDirection = reader.Read<System.Boolean>(ES3Type_bool.Instance);
		ES3Reader_t2780AF8AA61DA2A817115CEF8612AC0E494D03C9 * L_76 = ___reader0;
		IL2CPP_RUNTIME_CLASS_INIT(ES3Type_bool_t8F309F7B9CC735FF1DEE68081B6E3CAB367745F4_il2cpp_TypeInfo_var);
		ES3Type_t8FBECB7AE75168648B9524E0C2A38DAD4555421D * L_77 = ((ES3Type_bool_t8F309F7B9CC735FF1DEE68081B6E3CAB367745F4_StaticFields*)il2cpp_codegen_static_fields_for(ES3Type_bool_t8F309F7B9CC735FF1DEE68081B6E3CAB367745F4_il2cpp_TypeInfo_var))->get_Instance_12();
		NullCheck((ES3Reader_t2780AF8AA61DA2A817115CEF8612AC0E494D03C9 *)L_76);
		bool L_78;
		L_78 = GenericVirtFuncInvoker1< bool, ES3Type_t8FBECB7AE75168648B9524E0C2A38DAD4555421D * >::Invoke(ES3Reader_Read_TisBoolean_t07D1E3F34E4813023D64F584DFF7B34C9D922F37_mC6D1B158268FF9B97822FF9F5B37FB1723FEDA22_RuntimeMethod_var, (ES3Reader_t2780AF8AA61DA2A817115CEF8612AC0E494D03C9 *)L_76, (ES3Type_t8FBECB7AE75168648B9524E0C2A38DAD4555421D *)L_77);
		ShapeModule_set_alignToDirection_m396A57DCAD5F194E4DDDA0DF9C35E5508E3641BE((ShapeModule_t3A89D143F5CAF357ECCE8B4A4F2BBD57816F98CA *)(ShapeModule_t3A89D143F5CAF357ECCE8B4A4F2BBD57816F98CA *)(&V_0), (bool)L_78, /*hidden argument*/NULL);
		// break;
		goto IL_042c;
	}

IL_0324:
	{
		// instance.radius = reader.Read<System.Single>(ES3Type_float.Instance);
		ES3Reader_t2780AF8AA61DA2A817115CEF8612AC0E494D03C9 * L_79 = ___reader0;
		IL2CPP_RUNTIME_CLASS_INIT(ES3Type_float_tF86B773C86731BD9AD79448B860BBB178FE77644_il2cpp_TypeInfo_var);
		ES3Type_t8FBECB7AE75168648B9524E0C2A38DAD4555421D * L_80 = ((ES3Type_float_tF86B773C86731BD9AD79448B860BBB178FE77644_StaticFields*)il2cpp_codegen_static_fields_for(ES3Type_float_tF86B773C86731BD9AD79448B860BBB178FE77644_il2cpp_TypeInfo_var))->get_Instance_12();
		NullCheck((ES3Reader_t2780AF8AA61DA2A817115CEF8612AC0E494D03C9 *)L_79);
		float L_81;
		L_81 = GenericVirtFuncInvoker1< float, ES3Type_t8FBECB7AE75168648B9524E0C2A38DAD4555421D * >::Invoke(ES3Reader_Read_TisSingle_tE07797BA3C98D4CA9B5A19413C19A76688AB899E_m4A0416374498BDA042B8EB21E49B72326D6CE5F4_RuntimeMethod_var, (ES3Reader_t2780AF8AA61DA2A817115CEF8612AC0E494D03C9 *)L_79, (ES3Type_t8FBECB7AE75168648B9524E0C2A38DAD4555421D *)L_80);
		ShapeModule_set_radius_mFC12B15750268316924771461C09B1A311A16DEA((ShapeModule_t3A89D143F5CAF357ECCE8B4A4F2BBD57816F98CA *)(ShapeModule_t3A89D143F5CAF357ECCE8B4A4F2BBD57816F98CA *)(&V_0), (float)L_81, /*hidden argument*/NULL);
		// break;
		goto IL_042c;
	}

IL_033b:
	{
		// instance.angle = reader.Read<System.Single>(ES3Type_float.Instance);
		ES3Reader_t2780AF8AA61DA2A817115CEF8612AC0E494D03C9 * L_82 = ___reader0;
		IL2CPP_RUNTIME_CLASS_INIT(ES3Type_float_tF86B773C86731BD9AD79448B860BBB178FE77644_il2cpp_TypeInfo_var);
		ES3Type_t8FBECB7AE75168648B9524E0C2A38DAD4555421D * L_83 = ((ES3Type_float_tF86B773C86731BD9AD79448B860BBB178FE77644_StaticFields*)il2cpp_codegen_static_fields_for(ES3Type_float_tF86B773C86731BD9AD79448B860BBB178FE77644_il2cpp_TypeInfo_var))->get_Instance_12();
		NullCheck((ES3Reader_t2780AF8AA61DA2A817115CEF8612AC0E494D03C9 *)L_82);
		float L_84;
		L_84 = GenericVirtFuncInvoker1< float, ES3Type_t8FBECB7AE75168648B9524E0C2A38DAD4555421D * >::Invoke(ES3Reader_Read_TisSingle_tE07797BA3C98D4CA9B5A19413C19A76688AB899E_m4A0416374498BDA042B8EB21E49B72326D6CE5F4_RuntimeMethod_var, (ES3Reader_t2780AF8AA61DA2A817115CEF8612AC0E494D03C9 *)L_82, (ES3Type_t8FBECB7AE75168648B9524E0C2A38DAD4555421D *)L_83);
		ShapeModule_set_angle_m20629BB5FE89F2040960548B45F6EC801B1DB8AA((ShapeModule_t3A89D143F5CAF357ECCE8B4A4F2BBD57816F98CA *)(ShapeModule_t3A89D143F5CAF357ECCE8B4A4F2BBD57816F98CA *)(&V_0), (float)L_84, /*hidden argument*/NULL);
		// break;
		goto IL_042c;
	}

IL_0352:
	{
		// instance.length = reader.Read<System.Single>(ES3Type_float.Instance);
		ES3Reader_t2780AF8AA61DA2A817115CEF8612AC0E494D03C9 * L_85 = ___reader0;
		IL2CPP_RUNTIME_CLASS_INIT(ES3Type_float_tF86B773C86731BD9AD79448B860BBB178FE77644_il2cpp_TypeInfo_var);
		ES3Type_t8FBECB7AE75168648B9524E0C2A38DAD4555421D * L_86 = ((ES3Type_float_tF86B773C86731BD9AD79448B860BBB178FE77644_StaticFields*)il2cpp_codegen_static_fields_for(ES3Type_float_tF86B773C86731BD9AD79448B860BBB178FE77644_il2cpp_TypeInfo_var))->get_Instance_12();
		NullCheck((ES3Reader_t2780AF8AA61DA2A817115CEF8612AC0E494D03C9 *)L_85);
		float L_87;
		L_87 = GenericVirtFuncInvoker1< float, ES3Type_t8FBECB7AE75168648B9524E0C2A38DAD4555421D * >::Invoke(ES3Reader_Read_TisSingle_tE07797BA3C98D4CA9B5A19413C19A76688AB899E_m4A0416374498BDA042B8EB21E49B72326D6CE5F4_RuntimeMethod_var, (ES3Reader_t2780AF8AA61DA2A817115CEF8612AC0E494D03C9 *)L_85, (ES3Type_t8FBECB7AE75168648B9524E0C2A38DAD4555421D *)L_86);
		ShapeModule_set_length_m744975258664B53F38A8B8BE38A86A0FFDD85BC7((ShapeModule_t3A89D143F5CAF357ECCE8B4A4F2BBD57816F98CA *)(ShapeModule_t3A89D143F5CAF357ECCE8B4A4F2BBD57816F98CA *)(&V_0), (float)L_87, /*hidden argument*/NULL);
		// break;
		goto IL_042c;
	}

IL_0369:
	{
		// instance.scale = reader.Read<UnityEngine.Vector3>(ES3Type_Vector3.Instance);
		ES3Reader_t2780AF8AA61DA2A817115CEF8612AC0E494D03C9 * L_88 = ___reader0;
		IL2CPP_RUNTIME_CLASS_INIT(ES3Type_Vector3_tA9144E81A20D2F28726F02DE1AE6CD3F9C12B54F_il2cpp_TypeInfo_var);
		ES3Type_t8FBECB7AE75168648B9524E0C2A38DAD4555421D * L_89 = ((ES3Type_Vector3_tA9144E81A20D2F28726F02DE1AE6CD3F9C12B54F_StaticFields*)il2cpp_codegen_static_fields_for(ES3Type_Vector3_tA9144E81A20D2F28726F02DE1AE6CD3F9C12B54F_il2cpp_TypeInfo_var))->get_Instance_12();
		NullCheck((ES3Reader_t2780AF8AA61DA2A817115CEF8612AC0E494D03C9 *)L_88);
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_90;
		L_90 = GenericVirtFuncInvoker1< Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E , ES3Type_t8FBECB7AE75168648B9524E0C2A38DAD4555421D * >::Invoke(ES3Reader_Read_TisVector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E_mBA4CD9D0F45E78BA43FE2DB8EC33CC3A5433DE15_RuntimeMethod_var, (ES3Reader_t2780AF8AA61DA2A817115CEF8612AC0E494D03C9 *)L_88, (ES3Type_t8FBECB7AE75168648B9524E0C2A38DAD4555421D *)L_89);
		ShapeModule_set_scale_m2951583898F18878E6F238100045072F44AD9158((ShapeModule_t3A89D143F5CAF357ECCE8B4A4F2BBD57816F98CA *)(ShapeModule_t3A89D143F5CAF357ECCE8B4A4F2BBD57816F98CA *)(&V_0), (Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E )L_90, /*hidden argument*/NULL);
		// break;
		goto IL_042c;
	}

IL_0380:
	{
		// instance.meshShapeType = reader.Read<UnityEngine.ParticleSystemMeshShapeType>();
		ES3Reader_t2780AF8AA61DA2A817115CEF8612AC0E494D03C9 * L_91 = ___reader0;
		NullCheck((ES3Reader_t2780AF8AA61DA2A817115CEF8612AC0E494D03C9 *)L_91);
		int32_t L_92;
		L_92 = GenericVirtFuncInvoker0< int32_t >::Invoke(ES3Reader_Read_TisParticleSystemMeshShapeType_t7C9518403F30CC7AF7F9124FD61EC1187B42EFD2_mF1A19C0F8BBA6E44737F158F3BE4CC478F623F10_RuntimeMethod_var, (ES3Reader_t2780AF8AA61DA2A817115CEF8612AC0E494D03C9 *)L_91);
		ShapeModule_set_meshShapeType_m5DAD94B71F2110F45E454C30DE052153129891C2((ShapeModule_t3A89D143F5CAF357ECCE8B4A4F2BBD57816F98CA *)(ShapeModule_t3A89D143F5CAF357ECCE8B4A4F2BBD57816F98CA *)(&V_0), (int32_t)L_92, /*hidden argument*/NULL);
		// break;
		goto IL_042c;
	}

IL_0392:
	{
		// instance.mesh = reader.Read<UnityEngine.Mesh>();
		ES3Reader_t2780AF8AA61DA2A817115CEF8612AC0E494D03C9 * L_93 = ___reader0;
		NullCheck((ES3Reader_t2780AF8AA61DA2A817115CEF8612AC0E494D03C9 *)L_93);
		Mesh_t2F5992DBA650D5862B43D3823ACD997132A57DA6 * L_94;
		L_94 = GenericVirtFuncInvoker0< Mesh_t2F5992DBA650D5862B43D3823ACD997132A57DA6 * >::Invoke(ES3Reader_Read_TisMesh_t2F5992DBA650D5862B43D3823ACD997132A57DA6_m65DF5BA41642A39B77979CC49472E4DE7A1660F9_RuntimeMethod_var, (ES3Reader_t2780AF8AA61DA2A817115CEF8612AC0E494D03C9 *)L_93);
		ShapeModule_set_mesh_mD3E276A9E45442E75AD8A9AA4BD88C9112BD77CA((ShapeModule_t3A89D143F5CAF357ECCE8B4A4F2BBD57816F98CA *)(ShapeModule_t3A89D143F5CAF357ECCE8B4A4F2BBD57816F98CA *)(&V_0), (Mesh_t2F5992DBA650D5862B43D3823ACD997132A57DA6 *)L_94, /*hidden argument*/NULL);
		// break;
		goto IL_042c;
	}

IL_03a4:
	{
		// instance.meshRenderer = reader.Read<UnityEngine.MeshRenderer>();
		ES3Reader_t2780AF8AA61DA2A817115CEF8612AC0E494D03C9 * L_95 = ___reader0;
		NullCheck((ES3Reader_t2780AF8AA61DA2A817115CEF8612AC0E494D03C9 *)L_95);
		MeshRenderer_tCD983A2F635E12BCB0BAA2E635D96A318757908B * L_96;
		L_96 = GenericVirtFuncInvoker0< MeshRenderer_tCD983A2F635E12BCB0BAA2E635D96A318757908B * >::Invoke(ES3Reader_Read_TisMeshRenderer_tCD983A2F635E12BCB0BAA2E635D96A318757908B_m773CE5481730EBCC6A377F918946EB11B304050A_RuntimeMethod_var, (ES3Reader_t2780AF8AA61DA2A817115CEF8612AC0E494D03C9 *)L_95);
		ShapeModule_set_meshRenderer_m334D69AC8C29F5E393732D62BBB3645296614059((ShapeModule_t3A89D143F5CAF357ECCE8B4A4F2BBD57816F98CA *)(ShapeModule_t3A89D143F5CAF357ECCE8B4A4F2BBD57816F98CA *)(&V_0), (MeshRenderer_tCD983A2F635E12BCB0BAA2E635D96A318757908B *)L_96, /*hidden argument*/NULL);
		// break;
		goto IL_042c;
	}

IL_03b3:
	{
		// instance.skinnedMeshRenderer = reader.Read<UnityEngine.SkinnedMeshRenderer>();
		ES3Reader_t2780AF8AA61DA2A817115CEF8612AC0E494D03C9 * L_97 = ___reader0;
		NullCheck((ES3Reader_t2780AF8AA61DA2A817115CEF8612AC0E494D03C9 *)L_97);
		SkinnedMeshRenderer_t126F4D6010E0F4B2685A7817B0A9171805D8F496 * L_98;
		L_98 = GenericVirtFuncInvoker0< SkinnedMeshRenderer_t126F4D6010E0F4B2685A7817B0A9171805D8F496 * >::Invoke(ES3Reader_Read_TisSkinnedMeshRenderer_t126F4D6010E0F4B2685A7817B0A9171805D8F496_m23D6569D5CE7B3E1C67BDB470CDEDEF25A835F25_RuntimeMethod_var, (ES3Reader_t2780AF8AA61DA2A817115CEF8612AC0E494D03C9 *)L_97);
		ShapeModule_set_skinnedMeshRenderer_m9DEF9CD332D3F10BE7D99EFECC0971FB5AE83F56((ShapeModule_t3A89D143F5CAF357ECCE8B4A4F2BBD57816F98CA *)(ShapeModule_t3A89D143F5CAF357ECCE8B4A4F2BBD57816F98CA *)(&V_0), (SkinnedMeshRenderer_t126F4D6010E0F4B2685A7817B0A9171805D8F496 *)L_98, /*hidden argument*/NULL);
		// break;
		goto IL_042c;
	}

IL_03c2:
	{
		// instance.useMeshMaterialIndex = reader.Read<System.Boolean>(ES3Type_bool.Instance);
		ES3Reader_t2780AF8AA61DA2A817115CEF8612AC0E494D03C9 * L_99 = ___reader0;
		IL2CPP_RUNTIME_CLASS_INIT(ES3Type_bool_t8F309F7B9CC735FF1DEE68081B6E3CAB367745F4_il2cpp_TypeInfo_var);
		ES3Type_t8FBECB7AE75168648B9524E0C2A38DAD4555421D * L_100 = ((ES3Type_bool_t8F309F7B9CC735FF1DEE68081B6E3CAB367745F4_StaticFields*)il2cpp_codegen_static_fields_for(ES3Type_bool_t8F309F7B9CC735FF1DEE68081B6E3CAB367745F4_il2cpp_TypeInfo_var))->get_Instance_12();
		NullCheck((ES3Reader_t2780AF8AA61DA2A817115CEF8612AC0E494D03C9 *)L_99);
		bool L_101;
		L_101 = GenericVirtFuncInvoker1< bool, ES3Type_t8FBECB7AE75168648B9524E0C2A38DAD4555421D * >::Invoke(ES3Reader_Read_TisBoolean_t07D1E3F34E4813023D64F584DFF7B34C9D922F37_mC6D1B158268FF9B97822FF9F5B37FB1723FEDA22_RuntimeMethod_var, (ES3Reader_t2780AF8AA61DA2A817115CEF8612AC0E494D03C9 *)L_99, (ES3Type_t8FBECB7AE75168648B9524E0C2A38DAD4555421D *)L_100);
		ShapeModule_set_useMeshMaterialIndex_m6130573C0966ED3B5C590665747305BCEFD3F901((ShapeModule_t3A89D143F5CAF357ECCE8B4A4F2BBD57816F98CA *)(ShapeModule_t3A89D143F5CAF357ECCE8B4A4F2BBD57816F98CA *)(&V_0), (bool)L_101, /*hidden argument*/NULL);
		// break;
		goto IL_042c;
	}

IL_03d6:
	{
		// instance.meshMaterialIndex = reader.Read<System.Int32>(ES3Type_int.Instance);
		ES3Reader_t2780AF8AA61DA2A817115CEF8612AC0E494D03C9 * L_102 = ___reader0;
		IL2CPP_RUNTIME_CLASS_INIT(ES3Type_int_tF64C15D40AD0CC7C15BCD1CEC3C5C6BF837BD167_il2cpp_TypeInfo_var);
		ES3Type_t8FBECB7AE75168648B9524E0C2A38DAD4555421D * L_103 = ((ES3Type_int_tF64C15D40AD0CC7C15BCD1CEC3C5C6BF837BD167_StaticFields*)il2cpp_codegen_static_fields_for(ES3Type_int_tF64C15D40AD0CC7C15BCD1CEC3C5C6BF837BD167_il2cpp_TypeInfo_var))->get_Instance_12();
		NullCheck((ES3Reader_t2780AF8AA61DA2A817115CEF8612AC0E494D03C9 *)L_102);
		int32_t L_104;
		L_104 = GenericVirtFuncInvoker1< int32_t, ES3Type_t8FBECB7AE75168648B9524E0C2A38DAD4555421D * >::Invoke(ES3Reader_Read_TisInt32_tFDE5F8CD43D10453F6A2E0C77FE48C6CC7009046_m2B74AA6627F5B1D21171D56C42F71DE5A7C1B4A6_RuntimeMethod_var, (ES3Reader_t2780AF8AA61DA2A817115CEF8612AC0E494D03C9 *)L_102, (ES3Type_t8FBECB7AE75168648B9524E0C2A38DAD4555421D *)L_103);
		ShapeModule_set_meshMaterialIndex_m1205DDEB353204D5941654FB79164AD5BAF0A59C((ShapeModule_t3A89D143F5CAF357ECCE8B4A4F2BBD57816F98CA *)(ShapeModule_t3A89D143F5CAF357ECCE8B4A4F2BBD57816F98CA *)(&V_0), (int32_t)L_104, /*hidden argument*/NULL);
		// break;
		goto IL_042c;
	}

IL_03ea:
	{
		// instance.useMeshColors = reader.Read<System.Boolean>(ES3Type_bool.Instance);
		ES3Reader_t2780AF8AA61DA2A817115CEF8612AC0E494D03C9 * L_105 = ___reader0;
		IL2CPP_RUNTIME_CLASS_INIT(ES3Type_bool_t8F309F7B9CC735FF1DEE68081B6E3CAB367745F4_il2cpp_TypeInfo_var);
		ES3Type_t8FBECB7AE75168648B9524E0C2A38DAD4555421D * L_106 = ((ES3Type_bool_t8F309F7B9CC735FF1DEE68081B6E3CAB367745F4_StaticFields*)il2cpp_codegen_static_fields_for(ES3Type_bool_t8F309F7B9CC735FF1DEE68081B6E3CAB367745F4_il2cpp_TypeInfo_var))->get_Instance_12();
		NullCheck((ES3Reader_t2780AF8AA61DA2A817115CEF8612AC0E494D03C9 *)L_105);
		bool L_107;
		L_107 = GenericVirtFuncInvoker1< bool, ES3Type_t8FBECB7AE75168648B9524E0C2A38DAD4555421D * >::Invoke(ES3Reader_Read_TisBoolean_t07D1E3F34E4813023D64F584DFF7B34C9D922F37_mC6D1B158268FF9B97822FF9F5B37FB1723FEDA22_RuntimeMethod_var, (ES3Reader_t2780AF8AA61DA2A817115CEF8612AC0E494D03C9 *)L_105, (ES3Type_t8FBECB7AE75168648B9524E0C2A38DAD4555421D *)L_106);
		ShapeModule_set_useMeshColors_m071D000F330805B1EBCF09B40AC4EB9942EB9F57((ShapeModule_t3A89D143F5CAF357ECCE8B4A4F2BBD57816F98CA *)(ShapeModule_t3A89D143F5CAF357ECCE8B4A4F2BBD57816F98CA *)(&V_0), (bool)L_107, /*hidden argument*/NULL);
		// break;
		goto IL_042c;
	}

IL_03fe:
	{
		// instance.normalOffset = reader.Read<System.Single>(ES3Type_float.Instance);
		ES3Reader_t2780AF8AA61DA2A817115CEF8612AC0E494D03C9 * L_108 = ___reader0;
		IL2CPP_RUNTIME_CLASS_INIT(ES3Type_float_tF86B773C86731BD9AD79448B860BBB178FE77644_il2cpp_TypeInfo_var);
		ES3Type_t8FBECB7AE75168648B9524E0C2A38DAD4555421D * L_109 = ((ES3Type_float_tF86B773C86731BD9AD79448B860BBB178FE77644_StaticFields*)il2cpp_codegen_static_fields_for(ES3Type_float_tF86B773C86731BD9AD79448B860BBB178FE77644_il2cpp_TypeInfo_var))->get_Instance_12();
		NullCheck((ES3Reader_t2780AF8AA61DA2A817115CEF8612AC0E494D03C9 *)L_108);
		float L_110;
		L_110 = GenericVirtFuncInvoker1< float, ES3Type_t8FBECB7AE75168648B9524E0C2A38DAD4555421D * >::Invoke(ES3Reader_Read_TisSingle_tE07797BA3C98D4CA9B5A19413C19A76688AB899E_m4A0416374498BDA042B8EB21E49B72326D6CE5F4_RuntimeMethod_var, (ES3Reader_t2780AF8AA61DA2A817115CEF8612AC0E494D03C9 *)L_108, (ES3Type_t8FBECB7AE75168648B9524E0C2A38DAD4555421D *)L_109);
		ShapeModule_set_normalOffset_m81A315286BAA5F52AAED6B317734FB03B2DCE9FD((ShapeModule_t3A89D143F5CAF357ECCE8B4A4F2BBD57816F98CA *)(ShapeModule_t3A89D143F5CAF357ECCE8B4A4F2BBD57816F98CA *)(&V_0), (float)L_110, /*hidden argument*/NULL);
		// break;
		goto IL_042c;
	}

IL_0412:
	{
		// instance.arc = reader.Read<System.Single>(ES3Type_float.Instance);
		ES3Reader_t2780AF8AA61DA2A817115CEF8612AC0E494D03C9 * L_111 = ___reader0;
		IL2CPP_RUNTIME_CLASS_INIT(ES3Type_float_tF86B773C86731BD9AD79448B860BBB178FE77644_il2cpp_TypeInfo_var);
		ES3Type_t8FBECB7AE75168648B9524E0C2A38DAD4555421D * L_112 = ((ES3Type_float_tF86B773C86731BD9AD79448B860BBB178FE77644_StaticFields*)il2cpp_codegen_static_fields_for(ES3Type_float_tF86B773C86731BD9AD79448B860BBB178FE77644_il2cpp_TypeInfo_var))->get_Instance_12();
		NullCheck((ES3Reader_t2780AF8AA61DA2A817115CEF8612AC0E494D03C9 *)L_111);
		float L_113;
		L_113 = GenericVirtFuncInvoker1< float, ES3Type_t8FBECB7AE75168648B9524E0C2A38DAD4555421D * >::Invoke(ES3Reader_Read_TisSingle_tE07797BA3C98D4CA9B5A19413C19A76688AB899E_m4A0416374498BDA042B8EB21E49B72326D6CE5F4_RuntimeMethod_var, (ES3Reader_t2780AF8AA61DA2A817115CEF8612AC0E494D03C9 *)L_111, (ES3Type_t8FBECB7AE75168648B9524E0C2A38DAD4555421D *)L_112);
		ShapeModule_set_arc_m4A2578EBD4747DB3D9ED74AB53E488872CFA541F((ShapeModule_t3A89D143F5CAF357ECCE8B4A4F2BBD57816F98CA *)(ShapeModule_t3A89D143F5CAF357ECCE8B4A4F2BBD57816F98CA *)(&V_0), (float)L_113, /*hidden argument*/NULL);
		// break;
		goto IL_042c;
	}

IL_0426:
	{
		// reader.Skip();
		ES3Reader_t2780AF8AA61DA2A817115CEF8612AC0E494D03C9 * L_114 = ___reader0;
		NullCheck((ES3Reader_t2780AF8AA61DA2A817115CEF8612AC0E494D03C9 *)L_114);
		VirtActionInvoker0::Invoke(41 /* System.Void ES3Reader::Skip() */, (ES3Reader_t2780AF8AA61DA2A817115CEF8612AC0E494D03C9 *)L_114);
	}

IL_042c:
	{
		// while((propertyName = reader.ReadPropertyName()) != null)
		ES3Reader_t2780AF8AA61DA2A817115CEF8612AC0E494D03C9 * L_115 = ___reader0;
		NullCheck((ES3Reader_t2780AF8AA61DA2A817115CEF8612AC0E494D03C9 *)L_115);
		String_t* L_116;
		L_116 = VirtFuncInvoker0< String_t* >::Invoke(21 /* System.String ES3Reader::ReadPropertyName() */, (ES3Reader_t2780AF8AA61DA2A817115CEF8612AC0E494D03C9 *)L_115);
		String_t* L_117 = (String_t*)L_116;
		V_1 = (String_t*)L_117;
		if (L_117)
		{
			goto IL_000c;
		}
	}
	{
		// }
		return;
	}
}
// System.Void ES3Types.ES3Type_ShapeModule::ReadInto<UnityEngine.ParticleSystem/SizeBySpeedModule>(ES3Reader,System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ES3Type_ShapeModule_ReadInto_TisSizeBySpeedModule_t156070A63E0A483D36BCAE783BA554CDA7CAF752_m447A168B4EBC0416C5FC72AFD1572384737E2C72_gshared (ES3Type_ShapeModule_t67010A74D4F69A245D5F06976239CAB4279B5377 * __this, ES3Reader_t2780AF8AA61DA2A817115CEF8612AC0E494D03C9 * ___reader0, RuntimeObject * ___obj1, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ES3Reader_Read_TisBoolean_t07D1E3F34E4813023D64F584DFF7B34C9D922F37_mC6D1B158268FF9B97822FF9F5B37FB1723FEDA22_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ES3Reader_Read_TisInt32_tFDE5F8CD43D10453F6A2E0C77FE48C6CC7009046_m2B74AA6627F5B1D21171D56C42F71DE5A7C1B4A6_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ES3Reader_Read_TisMeshRenderer_tCD983A2F635E12BCB0BAA2E635D96A318757908B_m773CE5481730EBCC6A377F918946EB11B304050A_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ES3Reader_Read_TisMesh_t2F5992DBA650D5862B43D3823ACD997132A57DA6_m65DF5BA41642A39B77979CC49472E4DE7A1660F9_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ES3Reader_Read_TisParticleSystemMeshShapeType_t7C9518403F30CC7AF7F9124FD61EC1187B42EFD2_mF1A19C0F8BBA6E44737F158F3BE4CC478F623F10_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ES3Reader_Read_TisParticleSystemShapeType_t5B09F3A5A637F57DB1B2A6518E214AA2AA53D70C_mAE53212CB1FDDA51CF8CD0D39FCD446087DACA48_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ES3Reader_Read_TisSingle_tE07797BA3C98D4CA9B5A19413C19A76688AB899E_m4A0416374498BDA042B8EB21E49B72326D6CE5F4_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ES3Reader_Read_TisSkinnedMeshRenderer_t126F4D6010E0F4B2685A7817B0A9171805D8F496_m23D6569D5CE7B3E1C67BDB470CDEDEF25A835F25_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ES3Reader_Read_TisVector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E_mBA4CD9D0F45E78BA43FE2DB8EC33CC3A5433DE15_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ES3Type_Vector3_tA9144E81A20D2F28726F02DE1AE6CD3F9C12B54F_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ES3Type_bool_t8F309F7B9CC735FF1DEE68081B6E3CAB367745F4_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ES3Type_float_tF86B773C86731BD9AD79448B860BBB178FE77644_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ES3Type_int_tF64C15D40AD0CC7C15BCD1CEC3C5C6BF837BD167_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ShapeModule_t3A89D143F5CAF357ECCE8B4A4F2BBD57816F98CA_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral01837E2252AC8026A5EA3567A663017A662FBB70);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral1228466552C1791B2019A329AFE94665D441168A);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral60E56797D122AE71D3774956F66C6EEB9EA22C05);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral6686C366F645244186604A3DA4B9A58012A85F1B);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral82BECCAD895076775062861CDB46AADEF913D969);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral8C9F18A4F030B96447955FBBA1A99FFC43B5D8E0);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral8E54BB51E569CB6A8D3C45D8AEF883A1559C1C0E);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral91811EE149061D28B38320E2430CE8888AD6398B);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralBD49F93A7BC78A69E385CEC0E78F434BD2845A17);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralCA1B66E295BD92E9FD3B6C708F09CA69A50BEFD1);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralE8744A8B8BD390EB66CA0CAE2376C973E6904FFB);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralEB0A157666700D8227FD4B66A26FDC02035E89BF);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralED1F119527A0BCA45125EF8E0F719985DA86C0E1);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralF66E9083C67855AB6EBB4B74342E385A72AACE32);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralF9BE17D634D1B07BCDCDA77A87710C946D81307B);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralF9D225733E1D10F9344C755C4A9C0870CD1DE97B);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralFA5EC7168E9633DAAEAA255ECB55030EA60F064F);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralFC341A1966AF28A9A7A26EDFB78ABBF7DE4D0E1F);
		s_Il2CppMethodInitialized = true;
	}
	ShapeModule_t3A89D143F5CAF357ECCE8B4A4F2BBD57816F98CA  V_0;
	memset((&V_0), 0, sizeof(V_0));
	String_t* V_1 = NULL;
	uint32_t V_2 = 0;
	{
		// var instance = (UnityEngine.ParticleSystem.ShapeModule)obj;
		RuntimeObject * L_0 = ___obj1;
		V_0 = (ShapeModule_t3A89D143F5CAF357ECCE8B4A4F2BBD57816F98CA )((*(ShapeModule_t3A89D143F5CAF357ECCE8B4A4F2BBD57816F98CA *)((ShapeModule_t3A89D143F5CAF357ECCE8B4A4F2BBD57816F98CA *)UnBox(L_0, ShapeModule_t3A89D143F5CAF357ECCE8B4A4F2BBD57816F98CA_il2cpp_TypeInfo_var))));
		goto IL_042c;
	}

IL_000c:
	{
		String_t* L_1 = V_1;
		if (!L_1)
		{
			goto IL_0426;
		}
	}
	{
		String_t* L_2 = V_1;
		uint32_t L_3;
		L_3 = U3CPrivateImplementationDetailsU3E_ComputeStringHash_m3ADC1F612F9EE3DD518E6F0023A0DE0EE2B120A7((String_t*)L_2, /*hidden argument*/NULL);
		V_2 = (uint32_t)L_3;
		uint32_t L_4 = V_2;
		if ((!(((uint32_t)L_4) <= ((uint32_t)((int32_t)-2104025999)))))
		{
			goto IL_00b3;
		}
	}
	{
		uint32_t L_5 = V_2;
		if ((!(((uint32_t)L_5) <= ((uint32_t)((int32_t)666576729)))))
		{
			goto IL_006a;
		}
	}
	{
		uint32_t L_6 = V_2;
		if ((!(((uint32_t)L_6) <= ((uint32_t)((int32_t)49525662)))))
		{
			goto IL_004f;
		}
	}
	{
		uint32_t L_7 = V_2;
		if ((((int32_t)L_7) == ((int32_t)((int32_t)24602224))))
		{
			goto IL_024d;
		}
	}
	{
		uint32_t L_8 = V_2;
		if ((((int32_t)L_8) == ((int32_t)((int32_t)49525662))))
		{
			goto IL_013c;
		}
	}
	{
		goto IL_0426;
	}

IL_004f:
	{
		uint32_t L_9 = V_2;
		if ((((int32_t)L_9) == ((int32_t)((int32_t)230313139))))
		{
			goto IL_01a5;
		}
	}
	{
		uint32_t L_10 = V_2;
		if ((((int32_t)L_10) == ((int32_t)((int32_t)666576729))))
		{
			goto IL_01f9;
		}
	}
	{
		goto IL_0426;
	}

IL_006a:
	{
		uint32_t L_11 = V_2;
		if ((!(((uint32_t)L_11) <= ((uint32_t)((int32_t)955488309)))))
		{
			goto IL_008d;
		}
	}
	{
		uint32_t L_12 = V_2;
		if ((((int32_t)L_12) == ((int32_t)((int32_t)923624301))))
		{
			goto IL_0238;
		}
	}
	{
		uint32_t L_13 = V_2;
		if ((((int32_t)L_13) == ((int32_t)((int32_t)955488309))))
		{
			goto IL_028c;
		}
	}
	{
		goto IL_0426;
	}

IL_008d:
	{
		uint32_t L_14 = V_2;
		if ((((int32_t)L_14) == ((int32_t)((int32_t)980363995))))
		{
			goto IL_02a1;
		}
	}
	{
		uint32_t L_15 = V_2;
		if ((((int32_t)L_15) == ((int32_t)((int32_t)985988853))))
		{
			goto IL_017b;
		}
	}
	{
		uint32_t L_16 = V_2;
		if ((((int32_t)L_16) == ((int32_t)((int32_t)-2104025999))))
		{
			goto IL_01e4;
		}
	}
	{
		goto IL_0426;
	}

IL_00b3:
	{
		uint32_t L_17 = V_2;
		if ((!(((uint32_t)L_17) <= ((uint32_t)((int32_t)-1473810612)))))
		{
			goto IL_00f6;
		}
	}
	{
		uint32_t L_18 = V_2;
		if ((!(((uint32_t)L_18) <= ((uint32_t)((int32_t)-1726928010)))))
		{
			goto IL_00db;
		}
	}
	{
		uint32_t L_19 = V_2;
		if ((((int32_t)L_19) == ((int32_t)((int32_t)-2083506667))))
		{
			goto IL_01cf;
		}
	}
	{
		uint32_t L_20 = V_2;
		if ((((int32_t)L_20) == ((int32_t)((int32_t)-1726928010))))
		{
			goto IL_0151;
		}
	}
	{
		goto IL_0426;
	}

IL_00db:
	{
		uint32_t L_21 = V_2;
		if ((((int32_t)L_21) == ((int32_t)((int32_t)-1593786692))))
		{
			goto IL_020e;
		}
	}
	{
		uint32_t L_22 = V_2;
		if ((((int32_t)L_22) == ((int32_t)((int32_t)-1473810612))))
		{
			goto IL_0190;
		}
	}
	{
		goto IL_0426;
	}

IL_00f6:
	{
		uint32_t L_23 = V_2;
		if ((!(((uint32_t)L_23) <= ((uint32_t)((int32_t)-1386986472)))))
		{
			goto IL_0116;
		}
	}
	{
		uint32_t L_24 = V_2;
		if ((((int32_t)L_24) == ((int32_t)((int32_t)-1412039661))))
		{
			goto IL_0166;
		}
	}
	{
		uint32_t L_25 = V_2;
		if ((((int32_t)L_25) == ((int32_t)((int32_t)-1386986472))))
		{
			goto IL_01ba;
		}
	}
	{
		goto IL_0426;
	}

IL_0116:
	{
		uint32_t L_26 = V_2;
		if ((((int32_t)L_26) == ((int32_t)((int32_t)-584064197))))
		{
			goto IL_0223;
		}
	}
	{
		uint32_t L_27 = V_2;
		if ((((int32_t)L_27) == ((int32_t)((int32_t)-473474755))))
		{
			goto IL_0277;
		}
	}
	{
		uint32_t L_28 = V_2;
		if ((((int32_t)L_28) == ((int32_t)((int32_t)-365686981))))
		{
			goto IL_0262;
		}
	}
	{
		goto IL_0426;
	}

IL_013c:
	{
		String_t* L_29 = V_1;
		bool L_30;
		L_30 = String_op_Equality_m50B3548E4AC232558190B0052877B290AA1D436A((String_t*)L_29, (String_t*)_stringLiteralF9D225733E1D10F9344C755C4A9C0870CD1DE97B, /*hidden argument*/NULL);
		if (L_30)
		{
			goto IL_02b6;
		}
	}
	{
		goto IL_0426;
	}

IL_0151:
	{
		String_t* L_31 = V_1;
		bool L_32;
		L_32 = String_op_Equality_m50B3548E4AC232558190B0052877B290AA1D436A((String_t*)L_31, (String_t*)_stringLiteral82BECCAD895076775062861CDB46AADEF913D969, /*hidden argument*/NULL);
		if (L_32)
		{
			goto IL_02cd;
		}
	}
	{
		goto IL_0426;
	}

IL_0166:
	{
		String_t* L_33 = V_1;
		bool L_34;
		L_34 = String_op_Equality_m50B3548E4AC232558190B0052877B290AA1D436A((String_t*)L_33, (String_t*)_stringLiteral1228466552C1791B2019A329AFE94665D441168A, /*hidden argument*/NULL);
		if (L_34)
		{
			goto IL_02df;
		}
	}
	{
		goto IL_0426;
	}

IL_017b:
	{
		String_t* L_35 = V_1;
		bool L_36;
		L_36 = String_op_Equality_m50B3548E4AC232558190B0052877B290AA1D436A((String_t*)L_35, (String_t*)_stringLiteralBD49F93A7BC78A69E385CEC0E78F434BD2845A17, /*hidden argument*/NULL);
		if (L_36)
		{
			goto IL_02f6;
		}
	}
	{
		goto IL_0426;
	}

IL_0190:
	{
		String_t* L_37 = V_1;
		bool L_38;
		L_38 = String_op_Equality_m50B3548E4AC232558190B0052877B290AA1D436A((String_t*)L_37, (String_t*)_stringLiteralED1F119527A0BCA45125EF8E0F719985DA86C0E1, /*hidden argument*/NULL);
		if (L_38)
		{
			goto IL_030d;
		}
	}
	{
		goto IL_0426;
	}

IL_01a5:
	{
		String_t* L_39 = V_1;
		bool L_40;
		L_40 = String_op_Equality_m50B3548E4AC232558190B0052877B290AA1D436A((String_t*)L_39, (String_t*)_stringLiteral8C9F18A4F030B96447955FBBA1A99FFC43B5D8E0, /*hidden argument*/NULL);
		if (L_40)
		{
			goto IL_0324;
		}
	}
	{
		goto IL_0426;
	}

IL_01ba:
	{
		String_t* L_41 = V_1;
		bool L_42;
		L_42 = String_op_Equality_m50B3548E4AC232558190B0052877B290AA1D436A((String_t*)L_41, (String_t*)_stringLiteralFC341A1966AF28A9A7A26EDFB78ABBF7DE4D0E1F, /*hidden argument*/NULL);
		if (L_42)
		{
			goto IL_033b;
		}
	}
	{
		goto IL_0426;
	}

IL_01cf:
	{
		String_t* L_43 = V_1;
		bool L_44;
		L_44 = String_op_Equality_m50B3548E4AC232558190B0052877B290AA1D436A((String_t*)L_43, (String_t*)_stringLiteralE8744A8B8BD390EB66CA0CAE2376C973E6904FFB, /*hidden argument*/NULL);
		if (L_44)
		{
			goto IL_0352;
		}
	}
	{
		goto IL_0426;
	}

IL_01e4:
	{
		String_t* L_45 = V_1;
		bool L_46;
		L_46 = String_op_Equality_m50B3548E4AC232558190B0052877B290AA1D436A((String_t*)L_45, (String_t*)_stringLiteralF9BE17D634D1B07BCDCDA77A87710C946D81307B, /*hidden argument*/NULL);
		if (L_46)
		{
			goto IL_0369;
		}
	}
	{
		goto IL_0426;
	}

IL_01f9:
	{
		String_t* L_47 = V_1;
		bool L_48;
		L_48 = String_op_Equality_m50B3548E4AC232558190B0052877B290AA1D436A((String_t*)L_47, (String_t*)_stringLiteralFA5EC7168E9633DAAEAA255ECB55030EA60F064F, /*hidden argument*/NULL);
		if (L_48)
		{
			goto IL_0380;
		}
	}
	{
		goto IL_0426;
	}

IL_020e:
	{
		String_t* L_49 = V_1;
		bool L_50;
		L_50 = String_op_Equality_m50B3548E4AC232558190B0052877B290AA1D436A((String_t*)L_49, (String_t*)_stringLiteralEB0A157666700D8227FD4B66A26FDC02035E89BF, /*hidden argument*/NULL);
		if (L_50)
		{
			goto IL_0392;
		}
	}
	{
		goto IL_0426;
	}

IL_0223:
	{
		String_t* L_51 = V_1;
		bool L_52;
		L_52 = String_op_Equality_m50B3548E4AC232558190B0052877B290AA1D436A((String_t*)L_51, (String_t*)_stringLiteral8E54BB51E569CB6A8D3C45D8AEF883A1559C1C0E, /*hidden argument*/NULL);
		if (L_52)
		{
			goto IL_03a4;
		}
	}
	{
		goto IL_0426;
	}

IL_0238:
	{
		String_t* L_53 = V_1;
		bool L_54;
		L_54 = String_op_Equality_m50B3548E4AC232558190B0052877B290AA1D436A((String_t*)L_53, (String_t*)_stringLiteral60E56797D122AE71D3774956F66C6EEB9EA22C05, /*hidden argument*/NULL);
		if (L_54)
		{
			goto IL_03b3;
		}
	}
	{
		goto IL_0426;
	}

IL_024d:
	{
		String_t* L_55 = V_1;
		bool L_56;
		L_56 = String_op_Equality_m50B3548E4AC232558190B0052877B290AA1D436A((String_t*)L_55, (String_t*)_stringLiteral01837E2252AC8026A5EA3567A663017A662FBB70, /*hidden argument*/NULL);
		if (L_56)
		{
			goto IL_03c2;
		}
	}
	{
		goto IL_0426;
	}

IL_0262:
	{
		String_t* L_57 = V_1;
		bool L_58;
		L_58 = String_op_Equality_m50B3548E4AC232558190B0052877B290AA1D436A((String_t*)L_57, (String_t*)_stringLiteralF66E9083C67855AB6EBB4B74342E385A72AACE32, /*hidden argument*/NULL);
		if (L_58)
		{
			goto IL_03d6;
		}
	}
	{
		goto IL_0426;
	}

IL_0277:
	{
		String_t* L_59 = V_1;
		bool L_60;
		L_60 = String_op_Equality_m50B3548E4AC232558190B0052877B290AA1D436A((String_t*)L_59, (String_t*)_stringLiteral91811EE149061D28B38320E2430CE8888AD6398B, /*hidden argument*/NULL);
		if (L_60)
		{
			goto IL_03ea;
		}
	}
	{
		goto IL_0426;
	}

IL_028c:
	{
		String_t* L_61 = V_1;
		bool L_62;
		L_62 = String_op_Equality_m50B3548E4AC232558190B0052877B290AA1D436A((String_t*)L_61, (String_t*)_stringLiteral6686C366F645244186604A3DA4B9A58012A85F1B, /*hidden argument*/NULL);
		if (L_62)
		{
			goto IL_03fe;
		}
	}
	{
		goto IL_0426;
	}

IL_02a1:
	{
		String_t* L_63 = V_1;
		bool L_64;
		L_64 = String_op_Equality_m50B3548E4AC232558190B0052877B290AA1D436A((String_t*)L_63, (String_t*)_stringLiteralCA1B66E295BD92E9FD3B6C708F09CA69A50BEFD1, /*hidden argument*/NULL);
		if (L_64)
		{
			goto IL_0412;
		}
	}
	{
		goto IL_0426;
	}

IL_02b6:
	{
		// instance.enabled = reader.Read<System.Boolean>(ES3Type_bool.Instance);
		ES3Reader_t2780AF8AA61DA2A817115CEF8612AC0E494D03C9 * L_65 = ___reader0;
		IL2CPP_RUNTIME_CLASS_INIT(ES3Type_bool_t8F309F7B9CC735FF1DEE68081B6E3CAB367745F4_il2cpp_TypeInfo_var);
		ES3Type_t8FBECB7AE75168648B9524E0C2A38DAD4555421D * L_66 = ((ES3Type_bool_t8F309F7B9CC735FF1DEE68081B6E3CAB367745F4_StaticFields*)il2cpp_codegen_static_fields_for(ES3Type_bool_t8F309F7B9CC735FF1DEE68081B6E3CAB367745F4_il2cpp_TypeInfo_var))->get_Instance_12();
		NullCheck((ES3Reader_t2780AF8AA61DA2A817115CEF8612AC0E494D03C9 *)L_65);
		bool L_67;
		L_67 = GenericVirtFuncInvoker1< bool, ES3Type_t8FBECB7AE75168648B9524E0C2A38DAD4555421D * >::Invoke(ES3Reader_Read_TisBoolean_t07D1E3F34E4813023D64F584DFF7B34C9D922F37_mC6D1B158268FF9B97822FF9F5B37FB1723FEDA22_RuntimeMethod_var, (ES3Reader_t2780AF8AA61DA2A817115CEF8612AC0E494D03C9 *)L_65, (ES3Type_t8FBECB7AE75168648B9524E0C2A38DAD4555421D *)L_66);
		ShapeModule_set_enabled_mF6FE8ED99E482A739C00F894235F4E2CD09B0D1E((ShapeModule_t3A89D143F5CAF357ECCE8B4A4F2BBD57816F98CA *)(ShapeModule_t3A89D143F5CAF357ECCE8B4A4F2BBD57816F98CA *)(&V_0), (bool)L_67, /*hidden argument*/NULL);
		// break;
		goto IL_042c;
	}

IL_02cd:
	{
		// instance.shapeType = reader.Read<UnityEngine.ParticleSystemShapeType>();
		ES3Reader_t2780AF8AA61DA2A817115CEF8612AC0E494D03C9 * L_68 = ___reader0;
		NullCheck((ES3Reader_t2780AF8AA61DA2A817115CEF8612AC0E494D03C9 *)L_68);
		int32_t L_69;
		L_69 = GenericVirtFuncInvoker0< int32_t >::Invoke(ES3Reader_Read_TisParticleSystemShapeType_t5B09F3A5A637F57DB1B2A6518E214AA2AA53D70C_mAE53212CB1FDDA51CF8CD0D39FCD446087DACA48_RuntimeMethod_var, (ES3Reader_t2780AF8AA61DA2A817115CEF8612AC0E494D03C9 *)L_68);
		ShapeModule_set_shapeType_mB772084527742749EB6AD690BAE47215FC71040D((ShapeModule_t3A89D143F5CAF357ECCE8B4A4F2BBD57816F98CA *)(ShapeModule_t3A89D143F5CAF357ECCE8B4A4F2BBD57816F98CA *)(&V_0), (int32_t)L_69, /*hidden argument*/NULL);
		// break;
		goto IL_042c;
	}

IL_02df:
	{
		// instance.randomDirectionAmount = reader.Read<System.Single>(ES3Type_float.Instance);
		ES3Reader_t2780AF8AA61DA2A817115CEF8612AC0E494D03C9 * L_70 = ___reader0;
		IL2CPP_RUNTIME_CLASS_INIT(ES3Type_float_tF86B773C86731BD9AD79448B860BBB178FE77644_il2cpp_TypeInfo_var);
		ES3Type_t8FBECB7AE75168648B9524E0C2A38DAD4555421D * L_71 = ((ES3Type_float_tF86B773C86731BD9AD79448B860BBB178FE77644_StaticFields*)il2cpp_codegen_static_fields_for(ES3Type_float_tF86B773C86731BD9AD79448B860BBB178FE77644_il2cpp_TypeInfo_var))->get_Instance_12();
		NullCheck((ES3Reader_t2780AF8AA61DA2A817115CEF8612AC0E494D03C9 *)L_70);
		float L_72;
		L_72 = GenericVirtFuncInvoker1< float, ES3Type_t8FBECB7AE75168648B9524E0C2A38DAD4555421D * >::Invoke(ES3Reader_Read_TisSingle_tE07797BA3C98D4CA9B5A19413C19A76688AB899E_m4A0416374498BDA042B8EB21E49B72326D6CE5F4_RuntimeMethod_var, (ES3Reader_t2780AF8AA61DA2A817115CEF8612AC0E494D03C9 *)L_70, (ES3Type_t8FBECB7AE75168648B9524E0C2A38DAD4555421D *)L_71);
		ShapeModule_set_randomDirectionAmount_m4E1BB67600D57383945F75F5A179EEEC01A76885((ShapeModule_t3A89D143F5CAF357ECCE8B4A4F2BBD57816F98CA *)(ShapeModule_t3A89D143F5CAF357ECCE8B4A4F2BBD57816F98CA *)(&V_0), (float)L_72, /*hidden argument*/NULL);
		// break;
		goto IL_042c;
	}

IL_02f6:
	{
		// instance.sphericalDirectionAmount = reader.Read<System.Single>(ES3Type_float.Instance);
		ES3Reader_t2780AF8AA61DA2A817115CEF8612AC0E494D03C9 * L_73 = ___reader0;
		IL2CPP_RUNTIME_CLASS_INIT(ES3Type_float_tF86B773C86731BD9AD79448B860BBB178FE77644_il2cpp_TypeInfo_var);
		ES3Type_t8FBECB7AE75168648B9524E0C2A38DAD4555421D * L_74 = ((ES3Type_float_tF86B773C86731BD9AD79448B860BBB178FE77644_StaticFields*)il2cpp_codegen_static_fields_for(ES3Type_float_tF86B773C86731BD9AD79448B860BBB178FE77644_il2cpp_TypeInfo_var))->get_Instance_12();
		NullCheck((ES3Reader_t2780AF8AA61DA2A817115CEF8612AC0E494D03C9 *)L_73);
		float L_75;
		L_75 = GenericVirtFuncInvoker1< float, ES3Type_t8FBECB7AE75168648B9524E0C2A38DAD4555421D * >::Invoke(ES3Reader_Read_TisSingle_tE07797BA3C98D4CA9B5A19413C19A76688AB899E_m4A0416374498BDA042B8EB21E49B72326D6CE5F4_RuntimeMethod_var, (ES3Reader_t2780AF8AA61DA2A817115CEF8612AC0E494D03C9 *)L_73, (ES3Type_t8FBECB7AE75168648B9524E0C2A38DAD4555421D *)L_74);
		ShapeModule_set_sphericalDirectionAmount_m02A9FBFF18AF24B821801DF5D833CA20A569F62B((ShapeModule_t3A89D143F5CAF357ECCE8B4A4F2BBD57816F98CA *)(ShapeModule_t3A89D143F5CAF357ECCE8B4A4F2BBD57816F98CA *)(&V_0), (float)L_75, /*hidden argument*/NULL);
		// break;
		goto IL_042c;
	}

IL_030d:
	{
		// instance.alignToDirection = reader.Read<System.Boolean>(ES3Type_bool.Instance);
		ES3Reader_t2780AF8AA61DA2A817115CEF8612AC0E494D03C9 * L_76 = ___reader0;
		IL2CPP_RUNTIME_CLASS_INIT(ES3Type_bool_t8F309F7B9CC735FF1DEE68081B6E3CAB367745F4_il2cpp_TypeInfo_var);
		ES3Type_t8FBECB7AE75168648B9524E0C2A38DAD4555421D * L_77 = ((ES3Type_bool_t8F309F7B9CC735FF1DEE68081B6E3CAB367745F4_StaticFields*)il2cpp_codegen_static_fields_for(ES3Type_bool_t8F309F7B9CC735FF1DEE68081B6E3CAB367745F4_il2cpp_TypeInfo_var))->get_Instance_12();
		NullCheck((ES3Reader_t2780AF8AA61DA2A817115CEF8612AC0E494D03C9 *)L_76);
		bool L_78;
		L_78 = GenericVirtFuncInvoker1< bool, ES3Type_t8FBECB7AE75168648B9524E0C2A38DAD4555421D * >::Invoke(ES3Reader_Read_TisBoolean_t07D1E3F34E4813023D64F584DFF7B34C9D922F37_mC6D1B158268FF9B97822FF9F5B37FB1723FEDA22_RuntimeMethod_var, (ES3Reader_t2780AF8AA61DA2A817115CEF8612AC0E494D03C9 *)L_76, (ES3Type_t8FBECB7AE75168648B9524E0C2A38DAD4555421D *)L_77);
		ShapeModule_set_alignToDirection_m396A57DCAD5F194E4DDDA0DF9C35E5508E3641BE((ShapeModule_t3A89D143F5CAF357ECCE8B4A4F2BBD57816F98CA *)(ShapeModule_t3A89D143F5CAF357ECCE8B4A4F2BBD57816F98CA *)(&V_0), (bool)L_78, /*hidden argument*/NULL);
		// break;
		goto IL_042c;
	}

IL_0324:
	{
		// instance.radius = reader.Read<System.Single>(ES3Type_float.Instance);
		ES3Reader_t2780AF8AA61DA2A817115CEF8612AC0E494D03C9 * L_79 = ___reader0;
		IL2CPP_RUNTIME_CLASS_INIT(ES3Type_float_tF86B773C86731BD9AD79448B860BBB178FE77644_il2cpp_TypeInfo_var);
		ES3Type_t8FBECB7AE75168648B9524E0C2A38DAD4555421D * L_80 = ((ES3Type_float_tF86B773C86731BD9AD79448B860BBB178FE77644_StaticFields*)il2cpp_codegen_static_fields_for(ES3Type_float_tF86B773C86731BD9AD79448B860BBB178FE77644_il2cpp_TypeInfo_var))->get_Instance_12();
		NullCheck((ES3Reader_t2780AF8AA61DA2A817115CEF8612AC0E494D03C9 *)L_79);
		float L_81;
		L_81 = GenericVirtFuncInvoker1< float, ES3Type_t8FBECB7AE75168648B9524E0C2A38DAD4555421D * >::Invoke(ES3Reader_Read_TisSingle_tE07797BA3C98D4CA9B5A19413C19A76688AB899E_m4A0416374498BDA042B8EB21E49B72326D6CE5F4_RuntimeMethod_var, (ES3Reader_t2780AF8AA61DA2A817115CEF8612AC0E494D03C9 *)L_79, (ES3Type_t8FBECB7AE75168648B9524E0C2A38DAD4555421D *)L_80);
		ShapeModule_set_radius_mFC12B15750268316924771461C09B1A311A16DEA((ShapeModule_t3A89D143F5CAF357ECCE8B4A4F2BBD57816F98CA *)(ShapeModule_t3A89D143F5CAF357ECCE8B4A4F2BBD57816F98CA *)(&V_0), (float)L_81, /*hidden argument*/NULL);
		// break;
		goto IL_042c;
	}

IL_033b:
	{
		// instance.angle = reader.Read<System.Single>(ES3Type_float.Instance);
		ES3Reader_t2780AF8AA61DA2A817115CEF8612AC0E494D03C9 * L_82 = ___reader0;
		IL2CPP_RUNTIME_CLASS_INIT(ES3Type_float_tF86B773C86731BD9AD79448B860BBB178FE77644_il2cpp_TypeInfo_var);
		ES3Type_t8FBECB7AE75168648B9524E0C2A38DAD4555421D * L_83 = ((ES3Type_float_tF86B773C86731BD9AD79448B860BBB178FE77644_StaticFields*)il2cpp_codegen_static_fields_for(ES3Type_float_tF86B773C86731BD9AD79448B860BBB178FE77644_il2cpp_TypeInfo_var))->get_Instance_12();
		NullCheck((ES3Reader_t2780AF8AA61DA2A817115CEF8612AC0E494D03C9 *)L_82);
		float L_84;
		L_84 = GenericVirtFuncInvoker1< float, ES3Type_t8FBECB7AE75168648B9524E0C2A38DAD4555421D * >::Invoke(ES3Reader_Read_TisSingle_tE07797BA3C98D4CA9B5A19413C19A76688AB899E_m4A0416374498BDA042B8EB21E49B72326D6CE5F4_RuntimeMethod_var, (ES3Reader_t2780AF8AA61DA2A817115CEF8612AC0E494D03C9 *)L_82, (ES3Type_t8FBECB7AE75168648B9524E0C2A38DAD4555421D *)L_83);
		ShapeModule_set_angle_m20629BB5FE89F2040960548B45F6EC801B1DB8AA((ShapeModule_t3A89D143F5CAF357ECCE8B4A4F2BBD57816F98CA *)(ShapeModule_t3A89D143F5CAF357ECCE8B4A4F2BBD57816F98CA *)(&V_0), (float)L_84, /*hidden argument*/NULL);
		// break;
		goto IL_042c;
	}

IL_0352:
	{
		// instance.length = reader.Read<System.Single>(ES3Type_float.Instance);
		ES3Reader_t2780AF8AA61DA2A817115CEF8612AC0E494D03C9 * L_85 = ___reader0;
		IL2CPP_RUNTIME_CLASS_INIT(ES3Type_float_tF86B773C86731BD9AD79448B860BBB178FE77644_il2cpp_TypeInfo_var);
		ES3Type_t8FBECB7AE75168648B9524E0C2A38DAD4555421D * L_86 = ((ES3Type_float_tF86B773C86731BD9AD79448B860BBB178FE77644_StaticFields*)il2cpp_codegen_static_fields_for(ES3Type_float_tF86B773C86731BD9AD79448B860BBB178FE77644_il2cpp_TypeInfo_var))->get_Instance_12();
		NullCheck((ES3Reader_t2780AF8AA61DA2A817115CEF8612AC0E494D03C9 *)L_85);
		float L_87;
		L_87 = GenericVirtFuncInvoker1< float, ES3Type_t8FBECB7AE75168648B9524E0C2A38DAD4555421D * >::Invoke(ES3Reader_Read_TisSingle_tE07797BA3C98D4CA9B5A19413C19A76688AB899E_m4A0416374498BDA042B8EB21E49B72326D6CE5F4_RuntimeMethod_var, (ES3Reader_t2780AF8AA61DA2A817115CEF8612AC0E494D03C9 *)L_85, (ES3Type_t8FBECB7AE75168648B9524E0C2A38DAD4555421D *)L_86);
		ShapeModule_set_length_m744975258664B53F38A8B8BE38A86A0FFDD85BC7((ShapeModule_t3A89D143F5CAF357ECCE8B4A4F2BBD57816F98CA *)(ShapeModule_t3A89D143F5CAF357ECCE8B4A4F2BBD57816F98CA *)(&V_0), (float)L_87, /*hidden argument*/NULL);
		// break;
		goto IL_042c;
	}

IL_0369:
	{
		// instance.scale = reader.Read<UnityEngine.Vector3>(ES3Type_Vector3.Instance);
		ES3Reader_t2780AF8AA61DA2A817115CEF8612AC0E494D03C9 * L_88 = ___reader0;
		IL2CPP_RUNTIME_CLASS_INIT(ES3Type_Vector3_tA9144E81A20D2F28726F02DE1AE6CD3F9C12B54F_il2cpp_TypeInfo_var);
		ES3Type_t8FBECB7AE75168648B9524E0C2A38DAD4555421D * L_89 = ((ES3Type_Vector3_tA9144E81A20D2F28726F02DE1AE6CD3F9C12B54F_StaticFields*)il2cpp_codegen_static_fields_for(ES3Type_Vector3_tA9144E81A20D2F28726F02DE1AE6CD3F9C12B54F_il2cpp_TypeInfo_var))->get_Instance_12();
		NullCheck((ES3Reader_t2780AF8AA61DA2A817115CEF8612AC0E494D03C9 *)L_88);
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_90;
		L_90 = GenericVirtFuncInvoker1< Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E , ES3Type_t8FBECB7AE75168648B9524E0C2A38DAD4555421D * >::Invoke(ES3Reader_Read_TisVector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E_mBA4CD9D0F45E78BA43FE2DB8EC33CC3A5433DE15_RuntimeMethod_var, (ES3Reader_t2780AF8AA61DA2A817115CEF8612AC0E494D03C9 *)L_88, (ES3Type_t8FBECB7AE75168648B9524E0C2A38DAD4555421D *)L_89);
		ShapeModule_set_scale_m2951583898F18878E6F238100045072F44AD9158((ShapeModule_t3A89D143F5CAF357ECCE8B4A4F2BBD57816F98CA *)(ShapeModule_t3A89D143F5CAF357ECCE8B4A4F2BBD57816F98CA *)(&V_0), (Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E )L_90, /*hidden argument*/NULL);
		// break;
		goto IL_042c;
	}

IL_0380:
	{
		// instance.meshShapeType = reader.Read<UnityEngine.ParticleSystemMeshShapeType>();
		ES3Reader_t2780AF8AA61DA2A817115CEF8612AC0E494D03C9 * L_91 = ___reader0;
		NullCheck((ES3Reader_t2780AF8AA61DA2A817115CEF8612AC0E494D03C9 *)L_91);
		int32_t L_92;
		L_92 = GenericVirtFuncInvoker0< int32_t >::Invoke(ES3Reader_Read_TisParticleSystemMeshShapeType_t7C9518403F30CC7AF7F9124FD61EC1187B42EFD2_mF1A19C0F8BBA6E44737F158F3BE4CC478F623F10_RuntimeMethod_var, (ES3Reader_t2780AF8AA61DA2A817115CEF8612AC0E494D03C9 *)L_91);
		ShapeModule_set_meshShapeType_m5DAD94B71F2110F45E454C30DE052153129891C2((ShapeModule_t3A89D143F5CAF357ECCE8B4A4F2BBD57816F98CA *)(ShapeModule_t3A89D143F5CAF357ECCE8B4A4F2BBD57816F98CA *)(&V_0), (int32_t)L_92, /*hidden argument*/NULL);
		// break;
		goto IL_042c;
	}

IL_0392:
	{
		// instance.mesh = reader.Read<UnityEngine.Mesh>();
		ES3Reader_t2780AF8AA61DA2A817115CEF8612AC0E494D03C9 * L_93 = ___reader0;
		NullCheck((ES3Reader_t2780AF8AA61DA2A817115CEF8612AC0E494D03C9 *)L_93);
		Mesh_t2F5992DBA650D5862B43D3823ACD997132A57DA6 * L_94;
		L_94 = GenericVirtFuncInvoker0< Mesh_t2F5992DBA650D5862B43D3823ACD997132A57DA6 * >::Invoke(ES3Reader_Read_TisMesh_t2F5992DBA650D5862B43D3823ACD997132A57DA6_m65DF5BA41642A39B77979CC49472E4DE7A1660F9_RuntimeMethod_var, (ES3Reader_t2780AF8AA61DA2A817115CEF8612AC0E494D03C9 *)L_93);
		ShapeModule_set_mesh_mD3E276A9E45442E75AD8A9AA4BD88C9112BD77CA((ShapeModule_t3A89D143F5CAF357ECCE8B4A4F2BBD57816F98CA *)(ShapeModule_t3A89D143F5CAF357ECCE8B4A4F2BBD57816F98CA *)(&V_0), (Mesh_t2F5992DBA650D5862B43D3823ACD997132A57DA6 *)L_94, /*hidden argument*/NULL);
		// break;
		goto IL_042c;
	}

IL_03a4:
	{
		// instance.meshRenderer = reader.Read<UnityEngine.MeshRenderer>();
		ES3Reader_t2780AF8AA61DA2A817115CEF8612AC0E494D03C9 * L_95 = ___reader0;
		NullCheck((ES3Reader_t2780AF8AA61DA2A817115CEF8612AC0E494D03C9 *)L_95);
		MeshRenderer_tCD983A2F635E12BCB0BAA2E635D96A318757908B * L_96;
		L_96 = GenericVirtFuncInvoker0< MeshRenderer_tCD983A2F635E12BCB0BAA2E635D96A318757908B * >::Invoke(ES3Reader_Read_TisMeshRenderer_tCD983A2F635E12BCB0BAA2E635D96A318757908B_m773CE5481730EBCC6A377F918946EB11B304050A_RuntimeMethod_var, (ES3Reader_t2780AF8AA61DA2A817115CEF8612AC0E494D03C9 *)L_95);
		ShapeModule_set_meshRenderer_m334D69AC8C29F5E393732D62BBB3645296614059((ShapeModule_t3A89D143F5CAF357ECCE8B4A4F2BBD57816F98CA *)(ShapeModule_t3A89D143F5CAF357ECCE8B4A4F2BBD57816F98CA *)(&V_0), (MeshRenderer_tCD983A2F635E12BCB0BAA2E635D96A318757908B *)L_96, /*hidden argument*/NULL);
		// break;
		goto IL_042c;
	}

IL_03b3:
	{
		// instance.skinnedMeshRenderer = reader.Read<UnityEngine.SkinnedMeshRenderer>();
		ES3Reader_t2780AF8AA61DA2A817115CEF8612AC0E494D03C9 * L_97 = ___reader0;
		NullCheck((ES3Reader_t2780AF8AA61DA2A817115CEF8612AC0E494D03C9 *)L_97);
		SkinnedMeshRenderer_t126F4D6010E0F4B2685A7817B0A9171805D8F496 * L_98;
		L_98 = GenericVirtFuncInvoker0< SkinnedMeshRenderer_t126F4D6010E0F4B2685A7817B0A9171805D8F496 * >::Invoke(ES3Reader_Read_TisSkinnedMeshRenderer_t126F4D6010E0F4B2685A7817B0A9171805D8F496_m23D6569D5CE7B3E1C67BDB470CDEDEF25A835F25_RuntimeMethod_var, (ES3Reader_t2780AF8AA61DA2A817115CEF8612AC0E494D03C9 *)L_97);
		ShapeModule_set_skinnedMeshRenderer_m9DEF9CD332D3F10BE7D99EFECC0971FB5AE83F56((ShapeModule_t3A89D143F5CAF357ECCE8B4A4F2BBD57816F98CA *)(ShapeModule_t3A89D143F5CAF357ECCE8B4A4F2BBD57816F98CA *)(&V_0), (SkinnedMeshRenderer_t126F4D6010E0F4B2685A7817B0A9171805D8F496 *)L_98, /*hidden argument*/NULL);
		// break;
		goto IL_042c;
	}

IL_03c2:
	{
		// instance.useMeshMaterialIndex = reader.Read<System.Boolean>(ES3Type_bool.Instance);
		ES3Reader_t2780AF8AA61DA2A817115CEF8612AC0E494D03C9 * L_99 = ___reader0;
		IL2CPP_RUNTIME_CLASS_INIT(ES3Type_bool_t8F309F7B9CC735FF1DEE68081B6E3CAB367745F4_il2cpp_TypeInfo_var);
		ES3Type_t8FBECB7AE75168648B9524E0C2A38DAD4555421D * L_100 = ((ES3Type_bool_t8F309F7B9CC735FF1DEE68081B6E3CAB367745F4_StaticFields*)il2cpp_codegen_static_fields_for(ES3Type_bool_t8F309F7B9CC735FF1DEE68081B6E3CAB367745F4_il2cpp_TypeInfo_var))->get_Instance_12();
		NullCheck((ES3Reader_t2780AF8AA61DA2A817115CEF8612AC0E494D03C9 *)L_99);
		bool L_101;
		L_101 = GenericVirtFuncInvoker1< bool, ES3Type_t8FBECB7AE75168648B9524E0C2A38DAD4555421D * >::Invoke(ES3Reader_Read_TisBoolean_t07D1E3F34E4813023D64F584DFF7B34C9D922F37_mC6D1B158268FF9B97822FF9F5B37FB1723FEDA22_RuntimeMethod_var, (ES3Reader_t2780AF8AA61DA2A817115CEF8612AC0E494D03C9 *)L_99, (ES3Type_t8FBECB7AE75168648B9524E0C2A38DAD4555421D *)L_100);
		ShapeModule_set_useMeshMaterialIndex_m6130573C0966ED3B5C590665747305BCEFD3F901((ShapeModule_t3A89D143F5CAF357ECCE8B4A4F2BBD57816F98CA *)(ShapeModule_t3A89D143F5CAF357ECCE8B4A4F2BBD57816F98CA *)(&V_0), (bool)L_101, /*hidden argument*/NULL);
		// break;
		goto IL_042c;
	}

IL_03d6:
	{
		// instance.meshMaterialIndex = reader.Read<System.Int32>(ES3Type_int.Instance);
		ES3Reader_t2780AF8AA61DA2A817115CEF8612AC0E494D03C9 * L_102 = ___reader0;
		IL2CPP_RUNTIME_CLASS_INIT(ES3Type_int_tF64C15D40AD0CC7C15BCD1CEC3C5C6BF837BD167_il2cpp_TypeInfo_var);
		ES3Type_t8FBECB7AE75168648B9524E0C2A38DAD4555421D * L_103 = ((ES3Type_int_tF64C15D40AD0CC7C15BCD1CEC3C5C6BF837BD167_StaticFields*)il2cpp_codegen_static_fields_for(ES3Type_int_tF64C15D40AD0CC7C15BCD1CEC3C5C6BF837BD167_il2cpp_TypeInfo_var))->get_Instance_12();
		NullCheck((ES3Reader_t2780AF8AA61DA2A817115CEF8612AC0E494D03C9 *)L_102);
		int32_t L_104;
		L_104 = GenericVirtFuncInvoker1< int32_t, ES3Type_t8FBECB7AE75168648B9524E0C2A38DAD4555421D * >::Invoke(ES3Reader_Read_TisInt32_tFDE5F8CD43D10453F6A2E0C77FE48C6CC7009046_m2B74AA6627F5B1D21171D56C42F71DE5A7C1B4A6_RuntimeMethod_var, (ES3Reader_t2780AF8AA61DA2A817115CEF8612AC0E494D03C9 *)L_102, (ES3Type_t8FBECB7AE75168648B9524E0C2A38DAD4555421D *)L_103);
		ShapeModule_set_meshMaterialIndex_m1205DDEB353204D5941654FB79164AD5BAF0A59C((ShapeModule_t3A89D143F5CAF357ECCE8B4A4F2BBD57816F98CA *)(ShapeModule_t3A89D143F5CAF357ECCE8B4A4F2BBD57816F98CA *)(&V_0), (int32_t)L_104, /*hidden argument*/NULL);
		// break;
		goto IL_042c;
	}

IL_03ea:
	{
		// instance.useMeshColors = reader.Read<System.Boolean>(ES3Type_bool.Instance);
		ES3Reader_t2780AF8AA61DA2A817115CEF8612AC0E494D03C9 * L_105 = ___reader0;
		IL2CPP_RUNTIME_CLASS_INIT(ES3Type_bool_t8F309F7B9CC735FF1DEE68081B6E3CAB367745F4_il2cpp_TypeInfo_var);
		ES3Type_t8FBECB7AE75168648B9524E0C2A38DAD4555421D * L_106 = ((ES3Type_bool_t8F309F7B9CC735FF1DEE68081B6E3CAB367745F4_StaticFields*)il2cpp_codegen_static_fields_for(ES3Type_bool_t8F309F7B9CC735FF1DEE68081B6E3CAB367745F4_il2cpp_TypeInfo_var))->get_Instance_12();
		NullCheck((ES3Reader_t2780AF8AA61DA2A817115CEF8612AC0E494D03C9 *)L_105);
		bool L_107;
		L_107 = GenericVirtFuncInvoker1< bool, ES3Type_t8FBECB7AE75168648B9524E0C2A38DAD4555421D * >::Invoke(ES3Reader_Read_TisBoolean_t07D1E3F34E4813023D64F584DFF7B34C9D922F37_mC6D1B158268FF9B97822FF9F5B37FB1723FEDA22_RuntimeMethod_var, (ES3Reader_t2780AF8AA61DA2A817115CEF8612AC0E494D03C9 *)L_105, (ES3Type_t8FBECB7AE75168648B9524E0C2A38DAD4555421D *)L_106);
		ShapeModule_set_useMeshColors_m071D000F330805B1EBCF09B40AC4EB9942EB9F57((ShapeModule_t3A89D143F5CAF357ECCE8B4A4F2BBD57816F98CA *)(ShapeModule_t3A89D143F5CAF357ECCE8B4A4F2BBD57816F98CA *)(&V_0), (bool)L_107, /*hidden argument*/NULL);
		// break;
		goto IL_042c;
	}

IL_03fe:
	{
		// instance.normalOffset = reader.Read<System.Single>(ES3Type_float.Instance);
		ES3Reader_t2780AF8AA61DA2A817115CEF8612AC0E494D03C9 * L_108 = ___reader0;
		IL2CPP_RUNTIME_CLASS_INIT(ES3Type_float_tF86B773C86731BD9AD79448B860BBB178FE77644_il2cpp_TypeInfo_var);
		ES3Type_t8FBECB7AE75168648B9524E0C2A38DAD4555421D * L_109 = ((ES3Type_float_tF86B773C86731BD9AD79448B860BBB178FE77644_StaticFields*)il2cpp_codegen_static_fields_for(ES3Type_float_tF86B773C86731BD9AD79448B860BBB178FE77644_il2cpp_TypeInfo_var))->get_Instance_12();
		NullCheck((ES3Reader_t2780AF8AA61DA2A817115CEF8612AC0E494D03C9 *)L_108);
		float L_110;
		L_110 = GenericVirtFuncInvoker1< float, ES3Type_t8FBECB7AE75168648B9524E0C2A38DAD4555421D * >::Invoke(ES3Reader_Read_TisSingle_tE07797BA3C98D4CA9B5A19413C19A76688AB899E_m4A0416374498BDA042B8EB21E49B72326D6CE5F4_RuntimeMethod_var, (ES3Reader_t2780AF8AA61DA2A817115CEF8612AC0E494D03C9 *)L_108, (ES3Type_t8FBECB7AE75168648B9524E0C2A38DAD4555421D *)L_109);
		ShapeModule_set_normalOffset_m81A315286BAA5F52AAED6B317734FB03B2DCE9FD((ShapeModule_t3A89D143F5CAF357ECCE8B4A4F2BBD57816F98CA *)(ShapeModule_t3A89D143F5CAF357ECCE8B4A4F2BBD57816F98CA *)(&V_0), (float)L_110, /*hidden argument*/NULL);
		// break;
		goto IL_042c;
	}

IL_0412:
	{
		// instance.arc = reader.Read<System.Single>(ES3Type_float.Instance);
		ES3Reader_t2780AF8AA61DA2A817115CEF8612AC0E494D03C9 * L_111 = ___reader0;
		IL2CPP_RUNTIME_CLASS_INIT(ES3Type_float_tF86B773C86731BD9AD79448B860BBB178FE77644_il2cpp_TypeInfo_var);
		ES3Type_t8FBECB7AE75168648B9524E0C2A38DAD4555421D * L_112 = ((ES3Type_float_tF86B773C86731BD9AD79448B860BBB178FE77644_StaticFields*)il2cpp_codegen_static_fields_for(ES3Type_float_tF86B773C86731BD9AD79448B860BBB178FE77644_il2cpp_TypeInfo_var))->get_Instance_12();
		NullCheck((ES3Reader_t2780AF8AA61DA2A817115CEF8612AC0E494D03C9 *)L_111);
		float L_113;
		L_113 = GenericVirtFuncInvoker1< float, ES3Type_t8FBECB7AE75168648B9524E0C2A38DAD4555421D * >::Invoke(ES3Reader_Read_TisSingle_tE07797BA3C98D4CA9B5A19413C19A76688AB899E_m4A0416374498BDA042B8EB21E49B72326D6CE5F4_RuntimeMethod_var, (ES3Reader_t2780AF8AA61DA2A817115CEF8612AC0E494D03C9 *)L_111, (ES3Type_t8FBECB7AE75168648B9524E0C2A38DAD4555421D *)L_112);
		ShapeModule_set_arc_m4A2578EBD4747DB3D9ED74AB53E488872CFA541F((ShapeModule_t3A89D143F5CAF357ECCE8B4A4F2BBD57816F98CA *)(ShapeModule_t3A89D143F5CAF357ECCE8B4A4F2BBD57816F98CA *)(&V_0), (float)L_113, /*hidden argument*/NULL);
		// break;
		goto IL_042c;
	}

IL_0426:
	{
		// reader.Skip();
		ES3Reader_t2780AF8AA61DA2A817115CEF8612AC0E494D03C9 * L_114 = ___reader0;
		NullCheck((ES3Reader_t2780AF8AA61DA2A817115CEF8612AC0E494D03C9 *)L_114);
		VirtActionInvoker0::Invoke(41 /* System.Void ES3Reader::Skip() */, (ES3Reader_t2780AF8AA61DA2A817115CEF8612AC0E494D03C9 *)L_114);
	}

IL_042c:
	{
		// while((propertyName = reader.ReadPropertyName()) != null)
		ES3Reader_t2780AF8AA61DA2A817115CEF8612AC0E494D03C9 * L_115 = ___reader0;
		NullCheck((ES3Reader_t2780AF8AA61DA2A817115CEF8612AC0E494D03C9 *)L_115);
		String_t* L_116;
		L_116 = VirtFuncInvoker0< String_t* >::Invoke(21 /* System.String ES3Reader::ReadPropertyName() */, (ES3Reader_t2780AF8AA61DA2A817115CEF8612AC0E494D03C9 *)L_115);
		String_t* L_117 = (String_t*)L_116;
		V_1 = (String_t*)L_117;
		if (L_117)
		{
			goto IL_000c;
		}
	}
	{
		// }
		return;
	}
}
// System.Void ES3Types.ES3Type_ShapeModule::ReadInto<UnityEngine.ParticleSystem/SizeOverLifetimeModule>(ES3Reader,System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ES3Type_ShapeModule_ReadInto_TisSizeOverLifetimeModule_t0EF80B7F6333637F781C2A0008F6DADBEA0B45BD_mBDF06D7B8B127AE9255FCBE75AF0CD3B8D8366CA_gshared (ES3Type_ShapeModule_t67010A74D4F69A245D5F06976239CAB4279B5377 * __this, ES3Reader_t2780AF8AA61DA2A817115CEF8612AC0E494D03C9 * ___reader0, RuntimeObject * ___obj1, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ES3Reader_Read_TisBoolean_t07D1E3F34E4813023D64F584DFF7B34C9D922F37_mC6D1B158268FF9B97822FF9F5B37FB1723FEDA22_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ES3Reader_Read_TisInt32_tFDE5F8CD43D10453F6A2E0C77FE48C6CC7009046_m2B74AA6627F5B1D21171D56C42F71DE5A7C1B4A6_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ES3Reader_Read_TisMeshRenderer_tCD983A2F635E12BCB0BAA2E635D96A318757908B_m773CE5481730EBCC6A377F918946EB11B304050A_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ES3Reader_Read_TisMesh_t2F5992DBA650D5862B43D3823ACD997132A57DA6_m65DF5BA41642A39B77979CC49472E4DE7A1660F9_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ES3Reader_Read_TisParticleSystemMeshShapeType_t7C9518403F30CC7AF7F9124FD61EC1187B42EFD2_mF1A19C0F8BBA6E44737F158F3BE4CC478F623F10_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ES3Reader_Read_TisParticleSystemShapeType_t5B09F3A5A637F57DB1B2A6518E214AA2AA53D70C_mAE53212CB1FDDA51CF8CD0D39FCD446087DACA48_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ES3Reader_Read_TisSingle_tE07797BA3C98D4CA9B5A19413C19A76688AB899E_m4A0416374498BDA042B8EB21E49B72326D6CE5F4_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ES3Reader_Read_TisSkinnedMeshRenderer_t126F4D6010E0F4B2685A7817B0A9171805D8F496_m23D6569D5CE7B3E1C67BDB470CDEDEF25A835F25_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ES3Reader_Read_TisVector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E_mBA4CD9D0F45E78BA43FE2DB8EC33CC3A5433DE15_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ES3Type_Vector3_tA9144E81A20D2F28726F02DE1AE6CD3F9C12B54F_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ES3Type_bool_t8F309F7B9CC735FF1DEE68081B6E3CAB367745F4_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ES3Type_float_tF86B773C86731BD9AD79448B860BBB178FE77644_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ES3Type_int_tF64C15D40AD0CC7C15BCD1CEC3C5C6BF837BD167_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ShapeModule_t3A89D143F5CAF357ECCE8B4A4F2BBD57816F98CA_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral01837E2252AC8026A5EA3567A663017A662FBB70);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral1228466552C1791B2019A329AFE94665D441168A);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral60E56797D122AE71D3774956F66C6EEB9EA22C05);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral6686C366F645244186604A3DA4B9A58012A85F1B);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral82BECCAD895076775062861CDB46AADEF913D969);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral8C9F18A4F030B96447955FBBA1A99FFC43B5D8E0);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral8E54BB51E569CB6A8D3C45D8AEF883A1559C1C0E);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral91811EE149061D28B38320E2430CE8888AD6398B);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralBD49F93A7BC78A69E385CEC0E78F434BD2845A17);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralCA1B66E295BD92E9FD3B6C708F09CA69A50BEFD1);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralE8744A8B8BD390EB66CA0CAE2376C973E6904FFB);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralEB0A157666700D8227FD4B66A26FDC02035E89BF);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralED1F119527A0BCA45125EF8E0F719985DA86C0E1);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralF66E9083C67855AB6EBB4B74342E385A72AACE32);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralF9BE17D634D1B07BCDCDA77A87710C946D81307B);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralF9D225733E1D10F9344C755C4A9C0870CD1DE97B);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralFA5EC7168E9633DAAEAA255ECB55030EA60F064F);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralFC341A1966AF28A9A7A26EDFB78ABBF7DE4D0E1F);
		s_Il2CppMethodInitialized = true;
	}
	ShapeModule_t3A89D143F5CAF357ECCE8B4A4F2BBD57816F98CA  V_0;
	memset((&V_0), 0, sizeof(V_0));
	String_t* V_1 = NULL;
	uint32_t V_2 = 0;
	{
		// var instance = (UnityEngine.ParticleSystem.ShapeModule)obj;
		RuntimeObject * L_0 = ___obj1;
		V_0 = (ShapeModule_t3A89D143F5CAF357ECCE8B4A4F2BBD57816F98CA )((*(ShapeModule_t3A89D143F5CAF357ECCE8B4A4F2BBD57816F98CA *)((ShapeModule_t3A89D143F5CAF357ECCE8B4A4F2BBD57816F98CA *)UnBox(L_0, ShapeModule_t3A89D143F5CAF357ECCE8B4A4F2BBD57816F98CA_il2cpp_TypeInfo_var))));
		goto IL_042c;
	}

IL_000c:
	{
		String_t* L_1 = V_1;
		if (!L_1)
		{
			goto IL_0426;
		}
	}
	{
		String_t* L_2 = V_1;
		uint32_t L_3;
		L_3 = U3CPrivateImplementationDetailsU3E_ComputeStringHash_m3ADC1F612F9EE3DD518E6F0023A0DE0EE2B120A7((String_t*)L_2, /*hidden argument*/NULL);
		V_2 = (uint32_t)L_3;
		uint32_t L_4 = V_2;
		if ((!(((uint32_t)L_4) <= ((uint32_t)((int32_t)-2104025999)))))
		{
			goto IL_00b3;
		}
	}
	{
		uint32_t L_5 = V_2;
		if ((!(((uint32_t)L_5) <= ((uint32_t)((int32_t)666576729)))))
		{
			goto IL_006a;
		}
	}
	{
		uint32_t L_6 = V_2;
		if ((!(((uint32_t)L_6) <= ((uint32_t)((int32_t)49525662)))))
		{
			goto IL_004f;
		}
	}
	{
		uint32_t L_7 = V_2;
		if ((((int32_t)L_7) == ((int32_t)((int32_t)24602224))))
		{
			goto IL_024d;
		}
	}
	{
		uint32_t L_8 = V_2;
		if ((((int32_t)L_8) == ((int32_t)((int32_t)49525662))))
		{
			goto IL_013c;
		}
	}
	{
		goto IL_0426;
	}

IL_004f:
	{
		uint32_t L_9 = V_2;
		if ((((int32_t)L_9) == ((int32_t)((int32_t)230313139))))
		{
			goto IL_01a5;
		}
	}
	{
		uint32_t L_10 = V_2;
		if ((((int32_t)L_10) == ((int32_t)((int32_t)666576729))))
		{
			goto IL_01f9;
		}
	}
	{
		goto IL_0426;
	}

IL_006a:
	{
		uint32_t L_11 = V_2;
		if ((!(((uint32_t)L_11) <= ((uint32_t)((int32_t)955488309)))))
		{
			goto IL_008d;
		}
	}
	{
		uint32_t L_12 = V_2;
		if ((((int32_t)L_12) == ((int32_t)((int32_t)923624301))))
		{
			goto IL_0238;
		}
	}
	{
		uint32_t L_13 = V_2;
		if ((((int32_t)L_13) == ((int32_t)((int32_t)955488309))))
		{
			goto IL_028c;
		}
	}
	{
		goto IL_0426;
	}

IL_008d:
	{
		uint32_t L_14 = V_2;
		if ((((int32_t)L_14) == ((int32_t)((int32_t)980363995))))
		{
			goto IL_02a1;
		}
	}
	{
		uint32_t L_15 = V_2;
		if ((((int32_t)L_15) == ((int32_t)((int32_t)985988853))))
		{
			goto IL_017b;
		}
	}
	{
		uint32_t L_16 = V_2;
		if ((((int32_t)L_16) == ((int32_t)((int32_t)-2104025999))))
		{
			goto IL_01e4;
		}
	}
	{
		goto IL_0426;
	}

IL_00b3:
	{
		uint32_t L_17 = V_2;
		if ((!(((uint32_t)L_17) <= ((uint32_t)((int32_t)-1473810612)))))
		{
			goto IL_00f6;
		}
	}
	{
		uint32_t L_18 = V_2;
		if ((!(((uint32_t)L_18) <= ((uint32_t)((int32_t)-1726928010)))))
		{
			goto IL_00db;
		}
	}
	{
		uint32_t L_19 = V_2;
		if ((((int32_t)L_19) == ((int32_t)((int32_t)-2083506667))))
		{
			goto IL_01cf;
		}
	}
	{
		uint32_t L_20 = V_2;
		if ((((int32_t)L_20) == ((int32_t)((int32_t)-1726928010))))
		{
			goto IL_0151;
		}
	}
	{
		goto IL_0426;
	}

IL_00db:
	{
		uint32_t L_21 = V_2;
		if ((((int32_t)L_21) == ((int32_t)((int32_t)-1593786692))))
		{
			goto IL_020e;
		}
	}
	{
		uint32_t L_22 = V_2;
		if ((((int32_t)L_22) == ((int32_t)((int32_t)-1473810612))))
		{
			goto IL_0190;
		}
	}
	{
		goto IL_0426;
	}

IL_00f6:
	{
		uint32_t L_23 = V_2;
		if ((!(((uint32_t)L_23) <= ((uint32_t)((int32_t)-1386986472)))))
		{
			goto IL_0116;
		}
	}
	{
		uint32_t L_24 = V_2;
		if ((((int32_t)L_24) == ((int32_t)((int32_t)-1412039661))))
		{
			goto IL_0166;
		}
	}
	{
		uint32_t L_25 = V_2;
		if ((((int32_t)L_25) == ((int32_t)((int32_t)-1386986472))))
		{
			goto IL_01ba;
		}
	}
	{
		goto IL_0426;
	}

IL_0116:
	{
		uint32_t L_26 = V_2;
		if ((((int32_t)L_26) == ((int32_t)((int32_t)-584064197))))
		{
			goto IL_0223;
		}
	}
	{
		uint32_t L_27 = V_2;
		if ((((int32_t)L_27) == ((int32_t)((int32_t)-473474755))))
		{
			goto IL_0277;
		}
	}
	{
		uint32_t L_28 = V_2;
		if ((((int32_t)L_28) == ((int32_t)((int32_t)-365686981))))
		{
			goto IL_0262;
		}
	}
	{
		goto IL_0426;
	}

IL_013c:
	{
		String_t* L_29 = V_1;
		bool L_30;
		L_30 = String_op_Equality_m50B3548E4AC232558190B0052877B290AA1D436A((String_t*)L_29, (String_t*)_stringLiteralF9D225733E1D10F9344C755C4A9C0870CD1DE97B, /*hidden argument*/NULL);
		if (L_30)
		{
			goto IL_02b6;
		}
	}
	{
		goto IL_0426;
	}

IL_0151:
	{
		String_t* L_31 = V_1;
		bool L_32;
		L_32 = String_op_Equality_m50B3548E4AC232558190B0052877B290AA1D436A((String_t*)L_31, (String_t*)_stringLiteral82BECCAD895076775062861CDB46AADEF913D969, /*hidden argument*/NULL);
		if (L_32)
		{
			goto IL_02cd;
		}
	}
	{
		goto IL_0426;
	}

IL_0166:
	{
		String_t* L_33 = V_1;
		bool L_34;
		L_34 = String_op_Equality_m50B3548E4AC232558190B0052877B290AA1D436A((String_t*)L_33, (String_t*)_stringLiteral1228466552C1791B2019A329AFE94665D441168A, /*hidden argument*/NULL);
		if (L_34)
		{
			goto IL_02df;
		}
	}
	{
		goto IL_0426;
	}

IL_017b:
	{
		String_t* L_35 = V_1;
		bool L_36;
		L_36 = String_op_Equality_m50B3548E4AC232558190B0052877B290AA1D436A((String_t*)L_35, (String_t*)_stringLiteralBD49F93A7BC78A69E385CEC0E78F434BD2845A17, /*hidden argument*/NULL);
		if (L_36)
		{
			goto IL_02f6;
		}
	}
	{
		goto IL_0426;
	}

IL_0190:
	{
		String_t* L_37 = V_1;
		bool L_38;
		L_38 = String_op_Equality_m50B3548E4AC232558190B0052877B290AA1D436A((String_t*)L_37, (String_t*)_stringLiteralED1F119527A0BCA45125EF8E0F719985DA86C0E1, /*hidden argument*/NULL);
		if (L_38)
		{
			goto IL_030d;
		}
	}
	{
		goto IL_0426;
	}

IL_01a5:
	{
		String_t* L_39 = V_1;
		bool L_40;
		L_40 = String_op_Equality_m50B3548E4AC232558190B0052877B290AA1D436A((String_t*)L_39, (String_t*)_stringLiteral8C9F18A4F030B96447955FBBA1A99FFC43B5D8E0, /*hidden argument*/NULL);
		if (L_40)
		{
			goto IL_0324;
		}
	}
	{
		goto IL_0426;
	}

IL_01ba:
	{
		String_t* L_41 = V_1;
		bool L_42;
		L_42 = String_op_Equality_m50B3548E4AC232558190B0052877B290AA1D436A((String_t*)L_41, (String_t*)_stringLiteralFC341A1966AF28A9A7A26EDFB78ABBF7DE4D0E1F, /*hidden argument*/NULL);
		if (L_42)
		{
			goto IL_033b;
		}
	}
	{
		goto IL_0426;
	}

IL_01cf:
	{
		String_t* L_43 = V_1;
		bool L_44;
		L_44 = String_op_Equality_m50B3548E4AC232558190B0052877B290AA1D436A((String_t*)L_43, (String_t*)_stringLiteralE8744A8B8BD390EB66CA0CAE2376C973E6904FFB, /*hidden argument*/NULL);
		if (L_44)
		{
			goto IL_0352;
		}
	}
	{
		goto IL_0426;
	}

IL_01e4:
	{
		String_t* L_45 = V_1;
		bool L_46;
		L_46 = String_op_Equality_m50B3548E4AC232558190B0052877B290AA1D436A((String_t*)L_45, (String_t*)_stringLiteralF9BE17D634D1B07BCDCDA77A87710C946D81307B, /*hidden argument*/NULL);
		if (L_46)
		{
			goto IL_0369;
		}
	}
	{
		goto IL_0426;
	}

IL_01f9:
	{
		String_t* L_47 = V_1;
		bool L_48;
		L_48 = String_op_Equality_m50B3548E4AC232558190B0052877B290AA1D436A((String_t*)L_47, (String_t*)_stringLiteralFA5EC7168E9633DAAEAA255ECB55030EA60F064F, /*hidden argument*/NULL);
		if (L_48)
		{
			goto IL_0380;
		}
	}
	{
		goto IL_0426;
	}

IL_020e:
	{
		String_t* L_49 = V_1;
		bool L_50;
		L_50 = String_op_Equality_m50B3548E4AC232558190B0052877B290AA1D436A((String_t*)L_49, (String_t*)_stringLiteralEB0A157666700D8227FD4B66A26FDC02035E89BF, /*hidden argument*/NULL);
		if (L_50)
		{
			goto IL_0392;
		}
	}
	{
		goto IL_0426;
	}

IL_0223:
	{
		String_t* L_51 = V_1;
		bool L_52;
		L_52 = String_op_Equality_m50B3548E4AC232558190B0052877B290AA1D436A((String_t*)L_51, (String_t*)_stringLiteral8E54BB51E569CB6A8D3C45D8AEF883A1559C1C0E, /*hidden argument*/NULL);
		if (L_52)
		{
			goto IL_03a4;
		}
	}
	{
		goto IL_0426;
	}

IL_0238:
	{
		String_t* L_53 = V_1;
		bool L_54;
		L_54 = String_op_Equality_m50B3548E4AC232558190B0052877B290AA1D436A((String_t*)L_53, (String_t*)_stringLiteral60E56797D122AE71D3774956F66C6EEB9EA22C05, /*hidden argument*/NULL);
		if (L_54)
		{
			goto IL_03b3;
		}
	}
	{
		goto IL_0426;
	}

IL_024d:
	{
		String_t* L_55 = V_1;
		bool L_56;
		L_56 = String_op_Equality_m50B3548E4AC232558190B0052877B290AA1D436A((String_t*)L_55, (String_t*)_stringLiteral01837E2252AC8026A5EA3567A663017A662FBB70, /*hidden argument*/NULL);
		if (L_56)
		{
			goto IL_03c2;
		}
	}
	{
		goto IL_0426;
	}

IL_0262:
	{
		String_t* L_57 = V_1;
		bool L_58;
		L_58 = String_op_Equality_m50B3548E4AC232558190B0052877B290AA1D436A((String_t*)L_57, (String_t*)_stringLiteralF66E9083C67855AB6EBB4B74342E385A72AACE32, /*hidden argument*/NULL);
		if (L_58)
		{
			goto IL_03d6;
		}
	}
	{
		goto IL_0426;
	}

IL_0277:
	{
		String_t* L_59 = V_1;
		bool L_60;
		L_60 = String_op_Equality_m50B3548E4AC232558190B0052877B290AA1D436A((String_t*)L_59, (String_t*)_stringLiteral91811EE149061D28B38320E2430CE8888AD6398B, /*hidden argument*/NULL);
		if (L_60)
		{
			goto IL_03ea;
		}
	}
	{
		goto IL_0426;
	}

IL_028c:
	{
		String_t* L_61 = V_1;
		bool L_62;
		L_62 = String_op_Equality_m50B3548E4AC232558190B0052877B290AA1D436A((String_t*)L_61, (String_t*)_stringLiteral6686C366F645244186604A3DA4B9A58012A85F1B, /*hidden argument*/NULL);
		if (L_62)
		{
			goto IL_03fe;
		}
	}
	{
		goto IL_0426;
	}

IL_02a1:
	{
		String_t* L_63 = V_1;
		bool L_64;
		L_64 = String_op_Equality_m50B3548E4AC232558190B0052877B290AA1D436A((String_t*)L_63, (String_t*)_stringLiteralCA1B66E295BD92E9FD3B6C708F09CA69A50BEFD1, /*hidden argument*/NULL);
		if (L_64)
		{
			goto IL_0412;
		}
	}
	{
		goto IL_0426;
	}

IL_02b6:
	{
		// instance.enabled = reader.Read<System.Boolean>(ES3Type_bool.Instance);
		ES3Reader_t2780AF8AA61DA2A817115CEF8612AC0E494D03C9 * L_65 = ___reader0;
		IL2CPP_RUNTIME_CLASS_INIT(ES3Type_bool_t8F309F7B9CC735FF1DEE68081B6E3CAB367745F4_il2cpp_TypeInfo_var);
		ES3Type_t8FBECB7AE75168648B9524E0C2A38DAD4555421D * L_66 = ((ES3Type_bool_t8F309F7B9CC735FF1DEE68081B6E3CAB367745F4_StaticFields*)il2cpp_codegen_static_fields_for(ES3Type_bool_t8F309F7B9CC735FF1DEE68081B6E3CAB367745F4_il2cpp_TypeInfo_var))->get_Instance_12();
		NullCheck((ES3Reader_t2780AF8AA61DA2A817115CEF8612AC0E494D03C9 *)L_65);
		bool L_67;
		L_67 = GenericVirtFuncInvoker1< bool, ES3Type_t8FBECB7AE75168648B9524E0C2A38DAD4555421D * >::Invoke(ES3Reader_Read_TisBoolean_t07D1E3F34E4813023D64F584DFF7B34C9D922F37_mC6D1B158268FF9B97822FF9F5B37FB1723FEDA22_RuntimeMethod_var, (ES3Reader_t2780AF8AA61DA2A817115CEF8612AC0E494D03C9 *)L_65, (ES3Type_t8FBECB7AE75168648B9524E0C2A38DAD4555421D *)L_66);
		ShapeModule_set_enabled_mF6FE8ED99E482A739C00F894235F4E2CD09B0D1E((ShapeModule_t3A89D143F5CAF357ECCE8B4A4F2BBD57816F98CA *)(ShapeModule_t3A89D143F5CAF357ECCE8B4A4F2BBD57816F98CA *)(&V_0), (bool)L_67, /*hidden argument*/NULL);
		// break;
		goto IL_042c;
	}

IL_02cd:
	{
		// instance.shapeType = reader.Read<UnityEngine.ParticleSystemShapeType>();
		ES3Reader_t2780AF8AA61DA2A817115CEF8612AC0E494D03C9 * L_68 = ___reader0;
		NullCheck((ES3Reader_t2780AF8AA61DA2A817115CEF8612AC0E494D03C9 *)L_68);
		int32_t L_69;
		L_69 = GenericVirtFuncInvoker0< int32_t >::Invoke(ES3Reader_Read_TisParticleSystemShapeType_t5B09F3A5A637F57DB1B2A6518E214AA2AA53D70C_mAE53212CB1FDDA51CF8CD0D39FCD446087DACA48_RuntimeMethod_var, (ES3Reader_t2780AF8AA61DA2A817115CEF8612AC0E494D03C9 *)L_68);
		ShapeModule_set_shapeType_mB772084527742749EB6AD690BAE47215FC71040D((ShapeModule_t3A89D143F5CAF357ECCE8B4A4F2BBD57816F98CA *)(ShapeModule_t3A89D143F5CAF357ECCE8B4A4F2BBD57816F98CA *)(&V_0), (int32_t)L_69, /*hidden argument*/NULL);
		// break;
		goto IL_042c;
	}

IL_02df:
	{
		// instance.randomDirectionAmount = reader.Read<System.Single>(ES3Type_float.Instance);
		ES3Reader_t2780AF8AA61DA2A817115CEF8612AC0E494D03C9 * L_70 = ___reader0;
		IL2CPP_RUNTIME_CLASS_INIT(ES3Type_float_tF86B773C86731BD9AD79448B860BBB178FE77644_il2cpp_TypeInfo_var);
		ES3Type_t8FBECB7AE75168648B9524E0C2A38DAD4555421D * L_71 = ((ES3Type_float_tF86B773C86731BD9AD79448B860BBB178FE77644_StaticFields*)il2cpp_codegen_static_fields_for(ES3Type_float_tF86B773C86731BD9AD79448B860BBB178FE77644_il2cpp_TypeInfo_var))->get_Instance_12();
		NullCheck((ES3Reader_t2780AF8AA61DA2A817115CEF8612AC0E494D03C9 *)L_70);
		float L_72;
		L_72 = GenericVirtFuncInvoker1< float, ES3Type_t8FBECB7AE75168648B9524E0C2A38DAD4555421D * >::Invoke(ES3Reader_Read_TisSingle_tE07797BA3C98D4CA9B5A19413C19A76688AB899E_m4A0416374498BDA042B8EB21E49B72326D6CE5F4_RuntimeMethod_var, (ES3Reader_t2780AF8AA61DA2A817115CEF8612AC0E494D03C9 *)L_70, (ES3Type_t8FBECB7AE75168648B9524E0C2A38DAD4555421D *)L_71);
		ShapeModule_set_randomDirectionAmount_m4E1BB67600D57383945F75F5A179EEEC01A76885((ShapeModule_t3A89D143F5CAF357ECCE8B4A4F2BBD57816F98CA *)(ShapeModule_t3A89D143F5CAF357ECCE8B4A4F2BBD57816F98CA *)(&V_0), (float)L_72, /*hidden argument*/NULL);
		// break;
		goto IL_042c;
	}

IL_02f6:
	{
		// instance.sphericalDirectionAmount = reader.Read<System.Single>(ES3Type_float.Instance);
		ES3Reader_t2780AF8AA61DA2A817115CEF8612AC0E494D03C9 * L_73 = ___reader0;
		IL2CPP_RUNTIME_CLASS_INIT(ES3Type_float_tF86B773C86731BD9AD79448B860BBB178FE77644_il2cpp_TypeInfo_var);
		ES3Type_t8FBECB7AE75168648B9524E0C2A38DAD4555421D * L_74 = ((ES3Type_float_tF86B773C86731BD9AD79448B860BBB178FE77644_StaticFields*)il2cpp_codegen_static_fields_for(ES3Type_float_tF86B773C86731BD9AD79448B860BBB178FE77644_il2cpp_TypeInfo_var))->get_Instance_12();
		NullCheck((ES3Reader_t2780AF8AA61DA2A817115CEF8612AC0E494D03C9 *)L_73);
		float L_75;
		L_75 = GenericVirtFuncInvoker1< float, ES3Type_t8FBECB7AE75168648B9524E0C2A38DAD4555421D * >::Invoke(ES3Reader_Read_TisSingle_tE07797BA3C98D4CA9B5A19413C19A76688AB899E_m4A0416374498BDA042B8EB21E49B72326D6CE5F4_RuntimeMethod_var, (ES3Reader_t2780AF8AA61DA2A817115CEF8612AC0E494D03C9 *)L_73, (ES3Type_t8FBECB7AE75168648B9524E0C2A38DAD4555421D *)L_74);
		ShapeModule_set_sphericalDirectionAmount_m02A9FBFF18AF24B821801DF5D833CA20A569F62B((ShapeModule_t3A89D143F5CAF357ECCE8B4A4F2BBD57816F98CA *)(ShapeModule_t3A89D143F5CAF357ECCE8B4A4F2BBD57816F98CA *)(&V_0), (float)L_75, /*hidden argument*/NULL);
		// break;
		goto IL_042c;
	}

IL_030d:
	{
		// instance.alignToDirection = reader.Read<System.Boolean>(ES3Type_bool.Instance);
		ES3Reader_t2780AF8AA61DA2A817115CEF8612AC0E494D03C9 * L_76 = ___reader0;
		IL2CPP_RUNTIME_CLASS_INIT(ES3Type_bool_t8F309F7B9CC735FF1DEE68081B6E3CAB367745F4_il2cpp_TypeInfo_var);
		ES3Type_t8FBECB7AE75168648B9524E0C2A38DAD4555421D * L_77 = ((ES3Type_bool_t8F309F7B9CC735FF1DEE68081B6E3CAB367745F4_StaticFields*)il2cpp_codegen_static_fields_for(ES3Type_bool_t8F309F7B9CC735FF1DEE68081B6E3CAB367745F4_il2cpp_TypeInfo_var))->get_Instance_12();
		NullCheck((ES3Reader_t2780AF8AA61DA2A817115CEF8612AC0E494D03C9 *)L_76);
		bool L_78;
		L_78 = GenericVirtFuncInvoker1< bool, ES3Type_t8FBECB7AE75168648B9524E0C2A38DAD4555421D * >::Invoke(ES3Reader_Read_TisBoolean_t07D1E3F34E4813023D64F584DFF7B34C9D922F37_mC6D1B158268FF9B97822FF9F5B37FB1723FEDA22_RuntimeMethod_var, (ES3Reader_t2780AF8AA61DA2A817115CEF8612AC0E494D03C9 *)L_76, (ES3Type_t8FBECB7AE75168648B9524E0C2A38DAD4555421D *)L_77);
		ShapeModule_set_alignToDirection_m396A57DCAD5F194E4DDDA0DF9C35E5508E3641BE((ShapeModule_t3A89D143F5CAF357ECCE8B4A4F2BBD57816F98CA *)(ShapeModule_t3A89D143F5CAF357ECCE8B4A4F2BBD57816F98CA *)(&V_0), (bool)L_78, /*hidden argument*/NULL);
		// break;
		goto IL_042c;
	}

IL_0324:
	{
		// instance.radius = reader.Read<System.Single>(ES3Type_float.Instance);
		ES3Reader_t2780AF8AA61DA2A817115CEF8612AC0E494D03C9 * L_79 = ___reader0;
		IL2CPP_RUNTIME_CLASS_INIT(ES3Type_float_tF86B773C86731BD9AD79448B860BBB178FE77644_il2cpp_TypeInfo_var);
		ES3Type_t8FBECB7AE75168648B9524E0C2A38DAD4555421D * L_80 = ((ES3Type_float_tF86B773C86731BD9AD79448B860BBB178FE77644_StaticFields*)il2cpp_codegen_static_fields_for(ES3Type_float_tF86B773C86731BD9AD79448B860BBB178FE77644_il2cpp_TypeInfo_var))->get_Instance_12();
		NullCheck((ES3Reader_t2780AF8AA61DA2A817115CEF8612AC0E494D03C9 *)L_79);
		float L_81;
		L_81 = GenericVirtFuncInvoker1< float, ES3Type_t8FBECB7AE75168648B9524E0C2A38DAD4555421D * >::Invoke(ES3Reader_Read_TisSingle_tE07797BA3C98D4CA9B5A19413C19A76688AB899E_m4A0416374498BDA042B8EB21E49B72326D6CE5F4_RuntimeMethod_var, (ES3Reader_t2780AF8AA61DA2A817115CEF8612AC0E494D03C9 *)L_79, (ES3Type_t8FBECB7AE75168648B9524E0C2A38DAD4555421D *)L_80);
		ShapeModule_set_radius_mFC12B15750268316924771461C09B1A311A16DEA((ShapeModule_t3A89D143F5CAF357ECCE8B4A4F2BBD57816F98CA *)(ShapeModule_t3A89D143F5CAF357ECCE8B4A4F2BBD57816F98CA *)(&V_0), (float)L_81, /*hidden argument*/NULL);
		// break;
		goto IL_042c;
	}

IL_033b:
	{
		// instance.angle = reader.Read<System.Single>(ES3Type_float.Instance);
		ES3Reader_t2780AF8AA61DA2A817115CEF8612AC0E494D03C9 * L_82 = ___reader0;
		IL2CPP_RUNTIME_CLASS_INIT(ES3Type_float_tF86B773C86731BD9AD79448B860BBB178FE77644_il2cpp_TypeInfo_var);
		ES3Type_t8FBECB7AE75168648B9524E0C2A38DAD4555421D * L_83 = ((ES3Type_float_tF86B773C86731BD9AD79448B860BBB178FE77644_StaticFields*)il2cpp_codegen_static_fields_for(ES3Type_float_tF86B773C86731BD9AD79448B860BBB178FE77644_il2cpp_TypeInfo_var))->get_Instance_12();
		NullCheck((ES3Reader_t2780AF8AA61DA2A817115CEF8612AC0E494D03C9 *)L_82);
		float L_84;
		L_84 = GenericVirtFuncInvoker1< float, ES3Type_t8FBECB7AE75168648B9524E0C2A38DAD4555421D * >::Invoke(ES3Reader_Read_TisSingle_tE07797BA3C98D4CA9B5A19413C19A76688AB899E_m4A0416374498BDA042B8EB21E49B72326D6CE5F4_RuntimeMethod_var, (ES3Reader_t2780AF8AA61DA2A817115CEF8612AC0E494D03C9 *)L_82, (ES3Type_t8FBECB7AE75168648B9524E0C2A38DAD4555421D *)L_83);
		ShapeModule_set_angle_m20629BB5FE89F2040960548B45F6EC801B1DB8AA((ShapeModule_t3A89D143F5CAF357ECCE8B4A4F2BBD57816F98CA *)(ShapeModule_t3A89D143F5CAF357ECCE8B4A4F2BBD57816F98CA *)(&V_0), (float)L_84, /*hidden argument*/NULL);
		// break;
		goto IL_042c;
	}

IL_0352:
	{
		// instance.length = reader.Read<System.Single>(ES3Type_float.Instance);
		ES3Reader_t2780AF8AA61DA2A817115CEF8612AC0E494D03C9 * L_85 = ___reader0;
		IL2CPP_RUNTIME_CLASS_INIT(ES3Type_float_tF86B773C86731BD9AD79448B860BBB178FE77644_il2cpp_TypeInfo_var);
		ES3Type_t8FBECB7AE75168648B9524E0C2A38DAD4555421D * L_86 = ((ES3Type_float_tF86B773C86731BD9AD79448B860BBB178FE77644_StaticFields*)il2cpp_codegen_static_fields_for(ES3Type_float_tF86B773C86731BD9AD79448B860BBB178FE77644_il2cpp_TypeInfo_var))->get_Instance_12();
		NullCheck((ES3Reader_t2780AF8AA61DA2A817115CEF8612AC0E494D03C9 *)L_85);
		float L_87;
		L_87 = GenericVirtFuncInvoker1< float, ES3Type_t8FBECB7AE75168648B9524E0C2A38DAD4555421D * >::Invoke(ES3Reader_Read_TisSingle_tE07797BA3C98D4CA9B5A19413C19A76688AB899E_m4A0416374498BDA042B8EB21E49B72326D6CE5F4_RuntimeMethod_var, (ES3Reader_t2780AF8AA61DA2A817115CEF8612AC0E494D03C9 *)L_85, (ES3Type_t8FBECB7AE75168648B9524E0C2A38DAD4555421D *)L_86);
		ShapeModule_set_length_m744975258664B53F38A8B8BE38A86A0FFDD85BC7((ShapeModule_t3A89D143F5CAF357ECCE8B4A4F2BBD57816F98CA *)(ShapeModule_t3A89D143F5CAF357ECCE8B4A4F2BBD57816F98CA *)(&V_0), (float)L_87, /*hidden argument*/NULL);
		// break;
		goto IL_042c;
	}

IL_0369:
	{
		// instance.scale = reader.Read<UnityEngine.Vector3>(ES3Type_Vector3.Instance);
		ES3Reader_t2780AF8AA61DA2A817115CEF8612AC0E494D03C9 * L_88 = ___reader0;
		IL2CPP_RUNTIME_CLASS_INIT(ES3Type_Vector3_tA9144E81A20D2F28726F02DE1AE6CD3F9C12B54F_il2cpp_TypeInfo_var);
		ES3Type_t8FBECB7AE75168648B9524E0C2A38DAD4555421D * L_89 = ((ES3Type_Vector3_tA9144E81A20D2F28726F02DE1AE6CD3F9C12B54F_StaticFields*)il2cpp_codegen_static_fields_for(ES3Type_Vector3_tA9144E81A20D2F28726F02DE1AE6CD3F9C12B54F_il2cpp_TypeInfo_var))->get_Instance_12();
		NullCheck((ES3Reader_t2780AF8AA61DA2A817115CEF8612AC0E494D03C9 *)L_88);
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_90;
		L_90 = GenericVirtFuncInvoker1< Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E , ES3Type_t8FBECB7AE75168648B9524E0C2A38DAD4555421D * >::Invoke(ES3Reader_Read_TisVector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E_mBA4CD9D0F45E78BA43FE2DB8EC33CC3A5433DE15_RuntimeMethod_var, (ES3Reader_t2780AF8AA61DA2A817115CEF8612AC0E494D03C9 *)L_88, (ES3Type_t8FBECB7AE75168648B9524E0C2A38DAD4555421D *)L_89);
		ShapeModule_set_scale_m2951583898F18878E6F238100045072F44AD9158((ShapeModule_t3A89D143F5CAF357ECCE8B4A4F2BBD57816F98CA *)(ShapeModule_t3A89D143F5CAF357ECCE8B4A4F2BBD57816F98CA *)(&V_0), (Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E )L_90, /*hidden argument*/NULL);
		// break;
		goto IL_042c;
	}

IL_0380:
	{
		// instance.meshShapeType = reader.Read<UnityEngine.ParticleSystemMeshShapeType>();
		ES3Reader_t2780AF8AA61DA2A817115CEF8612AC0E494D03C9 * L_91 = ___reader0;
		NullCheck((ES3Reader_t2780AF8AA61DA2A817115CEF8612AC0E494D03C9 *)L_91);
		int32_t L_92;
		L_92 = GenericVirtFuncInvoker0< int32_t >::Invoke(ES3Reader_Read_TisParticleSystemMeshShapeType_t7C9518403F30CC7AF7F9124FD61EC1187B42EFD2_mF1A19C0F8BBA6E44737F158F3BE4CC478F623F10_RuntimeMethod_var, (ES3Reader_t2780AF8AA61DA2A817115CEF8612AC0E494D03C9 *)L_91);
		ShapeModule_set_meshShapeType_m5DAD94B71F2110F45E454C30DE052153129891C2((ShapeModule_t3A89D143F5CAF357ECCE8B4A4F2BBD57816F98CA *)(ShapeModule_t3A89D143F5CAF357ECCE8B4A4F2BBD57816F98CA *)(&V_0), (int32_t)L_92, /*hidden argument*/NULL);
		// break;
		goto IL_042c;
	}

IL_0392:
	{
		// instance.mesh = reader.Read<UnityEngine.Mesh>();
		ES3Reader_t2780AF8AA61DA2A817115CEF8612AC0E494D03C9 * L_93 = ___reader0;
		NullCheck((ES3Reader_t2780AF8AA61DA2A817115CEF8612AC0E494D03C9 *)L_93);
		Mesh_t2F5992DBA650D5862B43D3823ACD997132A57DA6 * L_94;
		L_94 = GenericVirtFuncInvoker0< Mesh_t2F5992DBA650D5862B43D3823ACD997132A57DA6 * >::Invoke(ES3Reader_Read_TisMesh_t2F5992DBA650D5862B43D3823ACD997132A57DA6_m65DF5BA41642A39B77979CC49472E4DE7A1660F9_RuntimeMethod_var, (ES3Reader_t2780AF8AA61DA2A817115CEF8612AC0E494D03C9 *)L_93);
		ShapeModule_set_mesh_mD3E276A9E45442E75AD8A9AA4BD88C9112BD77CA((ShapeModule_t3A89D143F5CAF357ECCE8B4A4F2BBD57816F98CA *)(ShapeModule_t3A89D143F5CAF357ECCE8B4A4F2BBD57816F98CA *)(&V_0), (Mesh_t2F5992DBA650D5862B43D3823ACD997132A57DA6 *)L_94, /*hidden argument*/NULL);
		// break;
		goto IL_042c;
	}

IL_03a4:
	{
		// instance.meshRenderer = reader.Read<UnityEngine.MeshRenderer>();
		ES3Reader_t2780AF8AA61DA2A817115CEF8612AC0E494D03C9 * L_95 = ___reader0;
		NullCheck((ES3Reader_t2780AF8AA61DA2A817115CEF8612AC0E494D03C9 *)L_95);
		MeshRenderer_tCD983A2F635E12BCB0BAA2E635D96A318757908B * L_96;
		L_96 = GenericVirtFuncInvoker0< MeshRenderer_tCD983A2F635E12BCB0BAA2E635D96A318757908B * >::Invoke(ES3Reader_Read_TisMeshRenderer_tCD983A2F635E12BCB0BAA2E635D96A318757908B_m773CE5481730EBCC6A377F918946EB11B304050A_RuntimeMethod_var, (ES3Reader_t2780AF8AA61DA2A817115CEF8612AC0E494D03C9 *)L_95);
		ShapeModule_set_meshRenderer_m334D69AC8C29F5E393732D62BBB3645296614059((ShapeModule_t3A89D143F5CAF357ECCE8B4A4F2BBD57816F98CA *)(ShapeModule_t3A89D143F5CAF357ECCE8B4A4F2BBD57816F98CA *)(&V_0), (MeshRenderer_tCD983A2F635E12BCB0BAA2E635D96A318757908B *)L_96, /*hidden argument*/NULL);
		// break;
		goto IL_042c;
	}

IL_03b3:
	{
		// instance.skinnedMeshRenderer = reader.Read<UnityEngine.SkinnedMeshRenderer>();
		ES3Reader_t2780AF8AA61DA2A817115CEF8612AC0E494D03C9 * L_97 = ___reader0;
		NullCheck((ES3Reader_t2780AF8AA61DA2A817115CEF8612AC0E494D03C9 *)L_97);
		SkinnedMeshRenderer_t126F4D6010E0F4B2685A7817B0A9171805D8F496 * L_98;
		L_98 = GenericVirtFuncInvoker0< SkinnedMeshRenderer_t126F4D6010E0F4B2685A7817B0A9171805D8F496 * >::Invoke(ES3Reader_Read_TisSkinnedMeshRenderer_t126F4D6010E0F4B2685A7817B0A9171805D8F496_m23D6569D5CE7B3E1C67BDB470CDEDEF25A835F25_RuntimeMethod_var, (ES3Reader_t2780AF8AA61DA2A817115CEF8612AC0E494D03C9 *)L_97);
		ShapeModule_set_skinnedMeshRenderer_m9DEF9CD332D3F10BE7D99EFECC0971FB5AE83F56((ShapeModule_t3A89D143F5CAF357ECCE8B4A4F2BBD57816F98CA *)(ShapeModule_t3A89D143F5CAF357ECCE8B4A4F2BBD57816F98CA *)(&V_0), (SkinnedMeshRenderer_t126F4D6010E0F4B2685A7817B0A9171805D8F496 *)L_98, /*hidden argument*/NULL);
		// break;
		goto IL_042c;
	}

IL_03c2:
	{
		// instance.useMeshMaterialIndex = reader.Read<System.Boolean>(ES3Type_bool.Instance);
		ES3Reader_t2780AF8AA61DA2A817115CEF8612AC0E494D03C9 * L_99 = ___reader0;
		IL2CPP_RUNTIME_CLASS_INIT(ES3Type_bool_t8F309F7B9CC735FF1DEE68081B6E3CAB367745F4_il2cpp_TypeInfo_var);
		ES3Type_t8FBECB7AE75168648B9524E0C2A38DAD4555421D * L_100 = ((ES3Type_bool_t8F309F7B9CC735FF1DEE68081B6E3CAB367745F4_StaticFields*)il2cpp_codegen_static_fields_for(ES3Type_bool_t8F309F7B9CC735FF1DEE68081B6E3CAB367745F4_il2cpp_TypeInfo_var))->get_Instance_12();
		NullCheck((ES3Reader_t2780AF8AA61DA2A817115CEF8612AC0E494D03C9 *)L_99);
		bool L_101;
		L_101 = GenericVirtFuncInvoker1< bool, ES3Type_t8FBECB7AE75168648B9524E0C2A38DAD4555421D * >::Invoke(ES3Reader_Read_TisBoolean_t07D1E3F34E4813023D64F584DFF7B34C9D922F37_mC6D1B158268FF9B97822FF9F5B37FB1723FEDA22_RuntimeMethod_var, (ES3Reader_t2780AF8AA61DA2A817115CEF8612AC0E494D03C9 *)L_99, (ES3Type_t8FBECB7AE75168648B9524E0C2A38DAD4555421D *)L_100);
		ShapeModule_set_useMeshMaterialIndex_m6130573C0966ED3B5C590665747305BCEFD3F901((ShapeModule_t3A89D143F5CAF357ECCE8B4A4F2BBD57816F98CA *)(ShapeModule_t3A89D143F5CAF357ECCE8B4A4F2BBD57816F98CA *)(&V_0), (bool)L_101, /*hidden argument*/NULL);
		// break;
		goto IL_042c;
	}

IL_03d6:
	{
		// instance.meshMaterialIndex = reader.Read<System.Int32>(ES3Type_int.Instance);
		ES3Reader_t2780AF8AA61DA2A817115CEF8612AC0E494D03C9 * L_102 = ___reader0;
		IL2CPP_RUNTIME_CLASS_INIT(ES3Type_int_tF64C15D40AD0CC7C15BCD1CEC3C5C6BF837BD167_il2cpp_TypeInfo_var);
		ES3Type_t8FBECB7AE75168648B9524E0C2A38DAD4555421D * L_103 = ((ES3Type_int_tF64C15D40AD0CC7C15BCD1CEC3C5C6BF837BD167_StaticFields*)il2cpp_codegen_static_fields_for(ES3Type_int_tF64C15D40AD0CC7C15BCD1CEC3C5C6BF837BD167_il2cpp_TypeInfo_var))->get_Instance_12();
		NullCheck((ES3Reader_t2780AF8AA61DA2A817115CEF8612AC0E494D03C9 *)L_102);
		int32_t L_104;
		L_104 = GenericVirtFuncInvoker1< int32_t, ES3Type_t8FBECB7AE75168648B9524E0C2A38DAD4555421D * >::Invoke(ES3Reader_Read_TisInt32_tFDE5F8CD43D10453F6A2E0C77FE48C6CC7009046_m2B74AA6627F5B1D21171D56C42F71DE5A7C1B4A6_RuntimeMethod_var, (ES3Reader_t2780AF8AA61DA2A817115CEF8612AC0E494D03C9 *)L_102, (ES3Type_t8FBECB7AE75168648B9524E0C2A38DAD4555421D *)L_103);
		ShapeModule_set_meshMaterialIndex_m1205DDEB353204D5941654FB79164AD5BAF0A59C((ShapeModule_t3A89D143F5CAF357ECCE8B4A4F2BBD57816F98CA *)(ShapeModule_t3A89D143F5CAF357ECCE8B4A4F2BBD57816F98CA *)(&V_0), (int32_t)L_104, /*hidden argument*/NULL);
		// break;
		goto IL_042c;
	}

IL_03ea:
	{
		// instance.useMeshColors = reader.Read<System.Boolean>(ES3Type_bool.Instance);
		ES3Reader_t2780AF8AA61DA2A817115CEF8612AC0E494D03C9 * L_105 = ___reader0;
		IL2CPP_RUNTIME_CLASS_INIT(ES3Type_bool_t8F309F7B9CC735FF1DEE68081B6E3CAB367745F4_il2cpp_TypeInfo_var);
		ES3Type_t8FBECB7AE75168648B9524E0C2A38DAD4555421D * L_106 = ((ES3Type_bool_t8F309F7B9CC735FF1DEE68081B6E3CAB367745F4_StaticFields*)il2cpp_codegen_static_fields_for(ES3Type_bool_t8F309F7B9CC735FF1DEE68081B6E3CAB367745F4_il2cpp_TypeInfo_var))->get_Instance_12();
		NullCheck((ES3Reader_t2780AF8AA61DA2A817115CEF8612AC0E494D03C9 *)L_105);
		bool L_107;
		L_107 = GenericVirtFuncInvoker1< bool, ES3Type_t8FBECB7AE75168648B9524E0C2A38DAD4555421D * >::Invoke(ES3Reader_Read_TisBoolean_t07D1E3F34E4813023D64F584DFF7B34C9D922F37_mC6D1B158268FF9B97822FF9F5B37FB1723FEDA22_RuntimeMethod_var, (ES3Reader_t2780AF8AA61DA2A817115CEF8612AC0E494D03C9 *)L_105, (ES3Type_t8FBECB7AE75168648B9524E0C2A38DAD4555421D *)L_106);
		ShapeModule_set_useMeshColors_m071D000F330805B1EBCF09B40AC4EB9942EB9F57((ShapeModule_t3A89D143F5CAF357ECCE8B4A4F2BBD57816F98CA *)(ShapeModule_t3A89D143F5CAF357ECCE8B4A4F2BBD57816F98CA *)(&V_0), (bool)L_107, /*hidden argument*/NULL);
		// break;
		goto IL_042c;
	}

IL_03fe:
	{
		// instance.normalOffset = reader.Read<System.Single>(ES3Type_float.Instance);
		ES3Reader_t2780AF8AA61DA2A817115CEF8612AC0E494D03C9 * L_108 = ___reader0;
		IL2CPP_RUNTIME_CLASS_INIT(ES3Type_float_tF86B773C86731BD9AD79448B860BBB178FE77644_il2cpp_TypeInfo_var);
		ES3Type_t8FBECB7AE75168648B9524E0C2A38DAD4555421D * L_109 = ((ES3Type_float_tF86B773C86731BD9AD79448B860BBB178FE77644_StaticFields*)il2cpp_codegen_static_fields_for(ES3Type_float_tF86B773C86731BD9AD79448B860BBB178FE77644_il2cpp_TypeInfo_var))->get_Instance_12();
		NullCheck((ES3Reader_t2780AF8AA61DA2A817115CEF8612AC0E494D03C9 *)L_108);
		float L_110;
		L_110 = GenericVirtFuncInvoker1< float, ES3Type_t8FBECB7AE75168648B9524E0C2A38DAD4555421D * >::Invoke(ES3Reader_Read_TisSingle_tE07797BA3C98D4CA9B5A19413C19A76688AB899E_m4A0416374498BDA042B8EB21E49B72326D6CE5F4_RuntimeMethod_var, (ES3Reader_t2780AF8AA61DA2A817115CEF8612AC0E494D03C9 *)L_108, (ES3Type_t8FBECB7AE75168648B9524E0C2A38DAD4555421D *)L_109);
		ShapeModule_set_normalOffset_m81A315286BAA5F52AAED6B317734FB03B2DCE9FD((ShapeModule_t3A89D143F5CAF357ECCE8B4A4F2BBD57816F98CA *)(ShapeModule_t3A89D143F5CAF357ECCE8B4A4F2BBD57816F98CA *)(&V_0), (float)L_110, /*hidden argument*/NULL);
		// break;
		goto IL_042c;
	}

IL_0412:
	{
		// instance.arc = reader.Read<System.Single>(ES3Type_float.Instance);
		ES3Reader_t2780AF8AA61DA2A817115CEF8612AC0E494D03C9 * L_111 = ___reader0;
		IL2CPP_RUNTIME_CLASS_INIT(ES3Type_float_tF86B773C86731BD9AD79448B860BBB178FE77644_il2cpp_TypeInfo_var);
		ES3Type_t8FBECB7AE75168648B9524E0C2A38DAD4555421D * L_112 = ((ES3Type_float_tF86B773C86731BD9AD79448B860BBB178FE77644_StaticFields*)il2cpp_codegen_static_fields_for(ES3Type_float_tF86B773C86731BD9AD79448B860BBB178FE77644_il2cpp_TypeInfo_var))->get_Instance_12();
		NullCheck((ES3Reader_t2780AF8AA61DA2A817115CEF8612AC0E494D03C9 *)L_111);
		float L_113;
		L_113 = GenericVirtFuncInvoker1< float, ES3Type_t8FBECB7AE75168648B9524E0C2A38DAD4555421D * >::Invoke(ES3Reader_Read_TisSingle_tE07797BA3C98D4CA9B5A19413C19A76688AB899E_m4A0416374498BDA042B8EB21E49B72326D6CE5F4_RuntimeMethod_var, (ES3Reader_t2780AF8AA61DA2A817115CEF8612AC0E494D03C9 *)L_111, (ES3Type_t8FBECB7AE75168648B9524E0C2A38DAD4555421D *)L_112);
		ShapeModule_set_arc_m4A2578EBD4747DB3D9ED74AB53E488872CFA541F((ShapeModule_t3A89D143F5CAF357ECCE8B4A4F2BBD57816F98CA *)(ShapeModule_t3A89D143F5CAF357ECCE8B4A4F2BBD57816F98CA *)(&V_0), (float)L_113, /*hidden argument*/NULL);
		// break;
		goto IL_042c;
	}

IL_0426:
	{
		// reader.Skip();
		ES3Reader_t2780AF8AA61DA2A817115CEF8612AC0E494D03C9 * L_114 = ___reader0;
		NullCheck((ES3Reader_t2780AF8AA61DA2A817115CEF8612AC0E494D03C9 *)L_114);
		VirtActionInvoker0::Invoke(41 /* System.Void ES3Reader::Skip() */, (ES3Reader_t2780AF8AA61DA2A817115CEF8612AC0E494D03C9 *)L_114);
	}

IL_042c:
	{
		// while((propertyName = reader.ReadPropertyName()) != null)
		ES3Reader_t2780AF8AA61DA2A817115CEF8612AC0E494D03C9 * L_115 = ___reader0;
		NullCheck((ES3Reader_t2780AF8AA61DA2A817115CEF8612AC0E494D03C9 *)L_115);
		String_t* L_116;
		L_116 = VirtFuncInvoker0< String_t* >::Invoke(21 /* System.String ES3Reader::ReadPropertyName() */, (ES3Reader_t2780AF8AA61DA2A817115CEF8612AC0E494D03C9 *)L_115);
		String_t* L_117 = (String_t*)L_116;
		V_1 = (String_t*)L_117;
		if (L_117)
		{
			goto IL_000c;
		}
	}
	{
		// }
		return;
	}
}
// System.Void ES3Types.ES3Type_ShapeModule::ReadInto<UnityEngine.ParticleSystem/SubEmittersModule>(ES3Reader,System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ES3Type_ShapeModule_ReadInto_TisSubEmittersModule_t0336A6F2B5D3339D93468AED015E2356FBE9E61C_m499B5B7B4BAE171CDBA7723542C12A309963D7F9_gshared (ES3Type_ShapeModule_t67010A74D4F69A245D5F06976239CAB4279B5377 * __this, ES3Reader_t2780AF8AA61DA2A817115CEF8612AC0E494D03C9 * ___reader0, RuntimeObject * ___obj1, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ES3Reader_Read_TisBoolean_t07D1E3F34E4813023D64F584DFF7B34C9D922F37_mC6D1B158268FF9B97822FF9F5B37FB1723FEDA22_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ES3Reader_Read_TisInt32_tFDE5F8CD43D10453F6A2E0C77FE48C6CC7009046_m2B74AA6627F5B1D21171D56C42F71DE5A7C1B4A6_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ES3Reader_Read_TisMeshRenderer_tCD983A2F635E12BCB0BAA2E635D96A318757908B_m773CE5481730EBCC6A377F918946EB11B304050A_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ES3Reader_Read_TisMesh_t2F5992DBA650D5862B43D3823ACD997132A57DA6_m65DF5BA41642A39B77979CC49472E4DE7A1660F9_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ES3Reader_Read_TisParticleSystemMeshShapeType_t7C9518403F30CC7AF7F9124FD61EC1187B42EFD2_mF1A19C0F8BBA6E44737F158F3BE4CC478F623F10_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ES3Reader_Read_TisParticleSystemShapeType_t5B09F3A5A637F57DB1B2A6518E214AA2AA53D70C_mAE53212CB1FDDA51CF8CD0D39FCD446087DACA48_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ES3Reader_Read_TisSingle_tE07797BA3C98D4CA9B5A19413C19A76688AB899E_m4A0416374498BDA042B8EB21E49B72326D6CE5F4_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ES3Reader_Read_TisSkinnedMeshRenderer_t126F4D6010E0F4B2685A7817B0A9171805D8F496_m23D6569D5CE7B3E1C67BDB470CDEDEF25A835F25_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ES3Reader_Read_TisVector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E_mBA4CD9D0F45E78BA43FE2DB8EC33CC3A5433DE15_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ES3Type_Vector3_tA9144E81A20D2F28726F02DE1AE6CD3F9C12B54F_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ES3Type_bool_t8F309F7B9CC735FF1DEE68081B6E3CAB367745F4_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ES3Type_float_tF86B773C86731BD9AD79448B860BBB178FE77644_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ES3Type_int_tF64C15D40AD0CC7C15BCD1CEC3C5C6BF837BD167_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ShapeModule_t3A89D143F5CAF357ECCE8B4A4F2BBD57816F98CA_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral01837E2252AC8026A5EA3567A663017A662FBB70);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral1228466552C1791B2019A329AFE94665D441168A);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral60E56797D122AE71D3774956F66C6EEB9EA22C05);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral6686C366F645244186604A3DA4B9A58012A85F1B);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral82BECCAD895076775062861CDB46AADEF913D969);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral8C9F18A4F030B96447955FBBA1A99FFC43B5D8E0);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral8E54BB51E569CB6A8D3C45D8AEF883A1559C1C0E);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral91811EE149061D28B38320E2430CE8888AD6398B);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralBD49F93A7BC78A69E385CEC0E78F434BD2845A17);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralCA1B66E295BD92E9FD3B6C708F09CA69A50BEFD1);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralE8744A8B8BD390EB66CA0CAE2376C973E6904FFB);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralEB0A157666700D8227FD4B66A26FDC02035E89BF);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralED1F119527A0BCA45125EF8E0F719985DA86C0E1);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralF66E9083C67855AB6EBB4B74342E385A72AACE32);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralF9BE17D634D1B07BCDCDA77A87710C946D81307B);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralF9D225733E1D10F9344C755C4A9C0870CD1DE97B);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralFA5EC7168E9633DAAEAA255ECB55030EA60F064F);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralFC341A1966AF28A9A7A26EDFB78ABBF7DE4D0E1F);
		s_Il2CppMethodInitialized = true;
	}
	ShapeModule_t3A89D143F5CAF357ECCE8B4A4F2BBD57816F98CA  V_0;
	memset((&V_0), 0, sizeof(V_0));
	String_t* V_1 = NULL;
	uint32_t V_2 = 0;
	{
		// var instance = (UnityEngine.ParticleSystem.ShapeModule)obj;
		RuntimeObject * L_0 = ___obj1;
		V_0 = (ShapeModule_t3A89D143F5CAF357ECCE8B4A4F2BBD57816F98CA )((*(ShapeModule_t3A89D143F5CAF357ECCE8B4A4F2BBD57816F98CA *)((ShapeModule_t3A89D143F5CAF357ECCE8B4A4F2BBD57816F98CA *)UnBox(L_0, ShapeModule_t3A89D143F5CAF357ECCE8B4A4F2BBD57816F98CA_il2cpp_TypeInfo_var))));
		goto IL_042c;
	}

IL_000c:
	{
		String_t* L_1 = V_1;
		if (!L_1)
		{
			goto IL_0426;
		}
	}
	{
		String_t* L_2 = V_1;
		uint32_t L_3;
		L_3 = U3CPrivateImplementationDetailsU3E_ComputeStringHash_m3ADC1F612F9EE3DD518E6F0023A0DE0EE2B120A7((String_t*)L_2, /*hidden argument*/NULL);
		V_2 = (uint32_t)L_3;
		uint32_t L_4 = V_2;
		if ((!(((uint32_t)L_4) <= ((uint32_t)((int32_t)-2104025999)))))
		{
			goto IL_00b3;
		}
	}
	{
		uint32_t L_5 = V_2;
		if ((!(((uint32_t)L_5) <= ((uint32_t)((int32_t)666576729)))))
		{
			goto IL_006a;
		}
	}
	{
		uint32_t L_6 = V_2;
		if ((!(((uint32_t)L_6) <= ((uint32_t)((int32_t)49525662)))))
		{
			goto IL_004f;
		}
	}
	{
		uint32_t L_7 = V_2;
		if ((((int32_t)L_7) == ((int32_t)((int32_t)24602224))))
		{
			goto IL_024d;
		}
	}
	{
		uint32_t L_8 = V_2;
		if ((((int32_t)L_8) == ((int32_t)((int32_t)49525662))))
		{
			goto IL_013c;
		}
	}
	{
		goto IL_0426;
	}

IL_004f:
	{
		uint32_t L_9 = V_2;
		if ((((int32_t)L_9) == ((int32_t)((int32_t)230313139))))
		{
			goto IL_01a5;
		}
	}
	{
		uint32_t L_10 = V_2;
		if ((((int32_t)L_10) == ((int32_t)((int32_t)666576729))))
		{
			goto IL_01f9;
		}
	}
	{
		goto IL_0426;
	}

IL_006a:
	{
		uint32_t L_11 = V_2;
		if ((!(((uint32_t)L_11) <= ((uint32_t)((int32_t)955488309)))))
		{
			goto IL_008d;
		}
	}
	{
		uint32_t L_12 = V_2;
		if ((((int32_t)L_12) == ((int32_t)((int32_t)923624301))))
		{
			goto IL_0238;
		}
	}
	{
		uint32_t L_13 = V_2;
		if ((((int32_t)L_13) == ((int32_t)((int32_t)955488309))))
		{
			goto IL_028c;
		}
	}
	{
		goto IL_0426;
	}

IL_008d:
	{
		uint32_t L_14 = V_2;
		if ((((int32_t)L_14) == ((int32_t)((int32_t)980363995))))
		{
			goto IL_02a1;
		}
	}
	{
		uint32_t L_15 = V_2;
		if ((((int32_t)L_15) == ((int32_t)((int32_t)985988853))))
		{
			goto IL_017b;
		}
	}
	{
		uint32_t L_16 = V_2;
		if ((((int32_t)L_16) == ((int32_t)((int32_t)-2104025999))))
		{
			goto IL_01e4;
		}
	}
	{
		goto IL_0426;
	}

IL_00b3:
	{
		uint32_t L_17 = V_2;
		if ((!(((uint32_t)L_17) <= ((uint32_t)((int32_t)-1473810612)))))
		{
			goto IL_00f6;
		}
	}
	{
		uint32_t L_18 = V_2;
		if ((!(((uint32_t)L_18) <= ((uint32_t)((int32_t)-1726928010)))))
		{
			goto IL_00db;
		}
	}
	{
		uint32_t L_19 = V_2;
		if ((((int32_t)L_19) == ((int32_t)((int32_t)-2083506667))))
		{
			goto IL_01cf;
		}
	}
	{
		uint32_t L_20 = V_2;
		if ((((int32_t)L_20) == ((int32_t)((int32_t)-1726928010))))
		{
			goto IL_0151;
		}
	}
	{
		goto IL_0426;
	}

IL_00db:
	{
		uint32_t L_21 = V_2;
		if ((((int32_t)L_21) == ((int32_t)((int32_t)-1593786692))))
		{
			goto IL_020e;
		}
	}
	{
		uint32_t L_22 = V_2;
		if ((((int32_t)L_22) == ((int32_t)((int32_t)-1473810612))))
		{
			goto IL_0190;
		}
	}
	{
		goto IL_0426;
	}

IL_00f6:
	{
		uint32_t L_23 = V_2;
		if ((!(((uint32_t)L_23) <= ((uint32_t)((int32_t)-1386986472)))))
		{
			goto IL_0116;
		}
	}
	{
		uint32_t L_24 = V_2;
		if ((((int32_t)L_24) == ((int32_t)((int32_t)-1412039661))))
		{
			goto IL_0166;
		}
	}
	{
		uint32_t L_25 = V_2;
		if ((((int32_t)L_25) == ((int32_t)((int32_t)-1386986472))))
		{
			goto IL_01ba;
		}
	}
	{
		goto IL_0426;
	}

IL_0116:
	{
		uint32_t L_26 = V_2;
		if ((((int32_t)L_26) == ((int32_t)((int32_t)-584064197))))
		{
			goto IL_0223;
		}
	}
	{
		uint32_t L_27 = V_2;
		if ((((int32_t)L_27) == ((int32_t)((int32_t)-473474755))))
		{
			goto IL_0277;
		}
	}
	{
		uint32_t L_28 = V_2;
		if ((((int32_t)L_28) == ((int32_t)((int32_t)-365686981))))
		{
			goto IL_0262;
		}
	}
	{
		goto IL_0426;
	}

IL_013c:
	{
		String_t* L_29 = V_1;
		bool L_30;
		L_30 = String_op_Equality_m50B3548E4AC232558190B0052877B290AA1D436A((String_t*)L_29, (String_t*)_stringLiteralF9D225733E1D10F9344C755C4A9C0870CD1DE97B, /*hidden argument*/NULL);
		if (L_30)
		{
			goto IL_02b6;
		}
	}
	{
		goto IL_0426;
	}

IL_0151:
	{
		String_t* L_31 = V_1;
		bool L_32;
		L_32 = String_op_Equality_m50B3548E4AC232558190B0052877B290AA1D436A((String_t*)L_31, (String_t*)_stringLiteral82BECCAD895076775062861CDB46AADEF913D969, /*hidden argument*/NULL);
		if (L_32)
		{
			goto IL_02cd;
		}
	}
	{
		goto IL_0426;
	}

IL_0166:
	{
		String_t* L_33 = V_1;
		bool L_34;
		L_34 = String_op_Equality_m50B3548E4AC232558190B0052877B290AA1D436A((String_t*)L_33, (String_t*)_stringLiteral1228466552C1791B2019A329AFE94665D441168A, /*hidden argument*/NULL);
		if (L_34)
		{
			goto IL_02df;
		}
	}
	{
		goto IL_0426;
	}

IL_017b:
	{
		String_t* L_35 = V_1;
		bool L_36;
		L_36 = String_op_Equality_m50B3548E4AC232558190B0052877B290AA1D436A((String_t*)L_35, (String_t*)_stringLiteralBD49F93A7BC78A69E385CEC0E78F434BD2845A17, /*hidden argument*/NULL);
		if (L_36)
		{
			goto IL_02f6;
		}
	}
	{
		goto IL_0426;
	}

IL_0190:
	{
		String_t* L_37 = V_1;
		bool L_38;
		L_38 = String_op_Equality_m50B3548E4AC232558190B0052877B290AA1D436A((String_t*)L_37, (String_t*)_stringLiteralED1F119527A0BCA45125EF8E0F719985DA86C0E1, /*hidden argument*/NULL);
		if (L_38)
		{
			goto IL_030d;
		}
	}
	{
		goto IL_0426;
	}

IL_01a5:
	{
		String_t* L_39 = V_1;
		bool L_40;
		L_40 = String_op_Equality_m50B3548E4AC232558190B0052877B290AA1D436A((String_t*)L_39, (String_t*)_stringLiteral8C9F18A4F030B96447955FBBA1A99FFC43B5D8E0, /*hidden argument*/NULL);
		if (L_40)
		{
			goto IL_0324;
		}
	}
	{
		goto IL_0426;
	}

IL_01ba:
	{
		String_t* L_41 = V_1;
		bool L_42;
		L_42 = String_op_Equality_m50B3548E4AC232558190B0052877B290AA1D436A((String_t*)L_41, (String_t*)_stringLiteralFC341A1966AF28A9A7A26EDFB78ABBF7DE4D0E1F, /*hidden argument*/NULL);
		if (L_42)
		{
			goto IL_033b;
		}
	}
	{
		goto IL_0426;
	}

IL_01cf:
	{
		String_t* L_43 = V_1;
		bool L_44;
		L_44 = String_op_Equality_m50B3548E4AC232558190B0052877B290AA1D436A((String_t*)L_43, (String_t*)_stringLiteralE8744A8B8BD390EB66CA0CAE2376C973E6904FFB, /*hidden argument*/NULL);
		if (L_44)
		{
			goto IL_0352;
		}
	}
	{
		goto IL_0426;
	}

IL_01e4:
	{
		String_t* L_45 = V_1;
		bool L_46;
		L_46 = String_op_Equality_m50B3548E4AC232558190B0052877B290AA1D436A((String_t*)L_45, (String_t*)_stringLiteralF9BE17D634D1B07BCDCDA77A87710C946D81307B, /*hidden argument*/NULL);
		if (L_46)
		{
			goto IL_0369;
		}
	}
	{
		goto IL_0426;
	}

IL_01f9:
	{
		String_t* L_47 = V_1;
		bool L_48;
		L_48 = String_op_Equality_m50B3548E4AC232558190B0052877B290AA1D436A((String_t*)L_47, (String_t*)_stringLiteralFA5EC7168E9633DAAEAA255ECB55030EA60F064F, /*hidden argument*/NULL);
		if (L_48)
		{
			goto IL_0380;
		}
	}
	{
		goto IL_0426;
	}

IL_020e:
	{
		String_t* L_49 = V_1;
		bool L_50;
		L_50 = String_op_Equality_m50B3548E4AC232558190B0052877B290AA1D436A((String_t*)L_49, (String_t*)_stringLiteralEB0A157666700D8227FD4B66A26FDC02035E89BF, /*hidden argument*/NULL);
		if (L_50)
		{
			goto IL_0392;
		}
	}
	{
		goto IL_0426;
	}

IL_0223:
	{
		String_t* L_51 = V_1;
		bool L_52;
		L_52 = String_op_Equality_m50B3548E4AC232558190B0052877B290AA1D436A((String_t*)L_51, (String_t*)_stringLiteral8E54BB51E569CB6A8D3C45D8AEF883A1559C1C0E, /*hidden argument*/NULL);
		if (L_52)
		{
			goto IL_03a4;
		}
	}
	{
		goto IL_0426;
	}

IL_0238:
	{
		String_t* L_53 = V_1;
		bool L_54;
		L_54 = String_op_Equality_m50B3548E4AC232558190B0052877B290AA1D436A((String_t*)L_53, (String_t*)_stringLiteral60E56797D122AE71D3774956F66C6EEB9EA22C05, /*hidden argument*/NULL);
		if (L_54)
		{
			goto IL_03b3;
		}
	}
	{
		goto IL_0426;
	}

IL_024d:
	{
		String_t* L_55 = V_1;
		bool L_56;
		L_56 = String_op_Equality_m50B3548E4AC232558190B0052877B290AA1D436A((String_t*)L_55, (String_t*)_stringLiteral01837E2252AC8026A5EA3567A663017A662FBB70, /*hidden argument*/NULL);
		if (L_56)
		{
			goto IL_03c2;
		}
	}
	{
		goto IL_0426;
	}

IL_0262:
	{
		String_t* L_57 = V_1;
		bool L_58;
		L_58 = String_op_Equality_m50B3548E4AC232558190B0052877B290AA1D436A((String_t*)L_57, (String_t*)_stringLiteralF66E9083C67855AB6EBB4B74342E385A72AACE32, /*hidden argument*/NULL);
		if (L_58)
		{
			goto IL_03d6;
		}
	}
	{
		goto IL_0426;
	}

IL_0277:
	{
		String_t* L_59 = V_1;
		bool L_60;
		L_60 = String_op_Equality_m50B3548E4AC232558190B0052877B290AA1D436A((String_t*)L_59, (String_t*)_stringLiteral91811EE149061D28B38320E2430CE8888AD6398B, /*hidden argument*/NULL);
		if (L_60)
		{
			goto IL_03ea;
		}
	}
	{
		goto IL_0426;
	}

IL_028c:
	{
		String_t* L_61 = V_1;
		bool L_62;
		L_62 = String_op_Equality_m50B3548E4AC232558190B0052877B290AA1D436A((String_t*)L_61, (String_t*)_stringLiteral6686C366F645244186604A3DA4B9A58012A85F1B, /*hidden argument*/NULL);
		if (L_62)
		{
			goto IL_03fe;
		}
	}
	{
		goto IL_0426;
	}

IL_02a1:
	{
		String_t* L_63 = V_1;
		bool L_64;
		L_64 = String_op_Equality_m50B3548E4AC232558190B0052877B290AA1D436A((String_t*)L_63, (String_t*)_stringLiteralCA1B66E295BD92E9FD3B6C708F09CA69A50BEFD1, /*hidden argument*/NULL);
		if (L_64)
		{
			goto IL_0412;
		}
	}
	{
		goto IL_0426;
	}

IL_02b6:
	{
		// instance.enabled = reader.Read<System.Boolean>(ES3Type_bool.Instance);
		ES3Reader_t2780AF8AA61DA2A817115CEF8612AC0E494D03C9 * L_65 = ___reader0;
		IL2CPP_RUNTIME_CLASS_INIT(ES3Type_bool_t8F309F7B9CC735FF1DEE68081B6E3CAB367745F4_il2cpp_TypeInfo_var);
		ES3Type_t8FBECB7AE75168648B9524E0C2A38DAD4555421D * L_66 = ((ES3Type_bool_t8F309F7B9CC735FF1DEE68081B6E3CAB367745F4_StaticFields*)il2cpp_codegen_static_fields_for(ES3Type_bool_t8F309F7B9CC735FF1DEE68081B6E3CAB367745F4_il2cpp_TypeInfo_var))->get_Instance_12();
		NullCheck((ES3Reader_t2780AF8AA61DA2A817115CEF8612AC0E494D03C9 *)L_65);
		bool L_67;
		L_67 = GenericVirtFuncInvoker1< bool, ES3Type_t8FBECB7AE75168648B9524E0C2A38DAD4555421D * >::Invoke(ES3Reader_Read_TisBoolean_t07D1E3F34E4813023D64F584DFF7B34C9D922F37_mC6D1B158268FF9B97822FF9F5B37FB1723FEDA22_RuntimeMethod_var, (ES3Reader_t2780AF8AA61DA2A817115CEF8612AC0E494D03C9 *)L_65, (ES3Type_t8FBECB7AE75168648B9524E0C2A38DAD4555421D *)L_66);
		ShapeModule_set_enabled_mF6FE8ED99E482A739C00F894235F4E2CD09B0D1E((ShapeModule_t3A89D143F5CAF357ECCE8B4A4F2BBD57816F98CA *)(ShapeModule_t3A89D143F5CAF357ECCE8B4A4F2BBD57816F98CA *)(&V_0), (bool)L_67, /*hidden argument*/NULL);
		// break;
		goto IL_042c;
	}

IL_02cd:
	{
		// instance.shapeType = reader.Read<UnityEngine.ParticleSystemShapeType>();
		ES3Reader_t2780AF8AA61DA2A817115CEF8612AC0E494D03C9 * L_68 = ___reader0;
		NullCheck((ES3Reader_t2780AF8AA61DA2A817115CEF8612AC0E494D03C9 *)L_68);
		int32_t L_69;
		L_69 = GenericVirtFuncInvoker0< int32_t >::Invoke(ES3Reader_Read_TisParticleSystemShapeType_t5B09F3A5A637F57DB1B2A6518E214AA2AA53D70C_mAE53212CB1FDDA51CF8CD0D39FCD446087DACA48_RuntimeMethod_var, (ES3Reader_t2780AF8AA61DA2A817115CEF8612AC0E494D03C9 *)L_68);
		ShapeModule_set_shapeType_mB772084527742749EB6AD690BAE47215FC71040D((ShapeModule_t3A89D143F5CAF357ECCE8B4A4F2BBD57816F98CA *)(ShapeModule_t3A89D143F5CAF357ECCE8B4A4F2BBD57816F98CA *)(&V_0), (int32_t)L_69, /*hidden argument*/NULL);
		// break;
		goto IL_042c;
	}

IL_02df:
	{
		// instance.randomDirectionAmount = reader.Read<System.Single>(ES3Type_float.Instance);
		ES3Reader_t2780AF8AA61DA2A817115CEF8612AC0E494D03C9 * L_70 = ___reader0;
		IL2CPP_RUNTIME_CLASS_INIT(ES3Type_float_tF86B773C86731BD9AD79448B860BBB178FE77644_il2cpp_TypeInfo_var);
		ES3Type_t8FBECB7AE75168648B9524E0C2A38DAD4555421D * L_71 = ((ES3Type_float_tF86B773C86731BD9AD79448B860BBB178FE77644_StaticFields*)il2cpp_codegen_static_fields_for(ES3Type_float_tF86B773C86731BD9AD79448B860BBB178FE77644_il2cpp_TypeInfo_var))->get_Instance_12();
		NullCheck((ES3Reader_t2780AF8AA61DA2A817115CEF8612AC0E494D03C9 *)L_70);
		float L_72;
		L_72 = GenericVirtFuncInvoker1< float, ES3Type_t8FBECB7AE75168648B9524E0C2A38DAD4555421D * >::Invoke(ES3Reader_Read_TisSingle_tE07797BA3C98D4CA9B5A19413C19A76688AB899E_m4A0416374498BDA042B8EB21E49B72326D6CE5F4_RuntimeMethod_var, (ES3Reader_t2780AF8AA61DA2A817115CEF8612AC0E494D03C9 *)L_70, (ES3Type_t8FBECB7AE75168648B9524E0C2A38DAD4555421D *)L_71);
		ShapeModule_set_randomDirectionAmount_m4E1BB67600D57383945F75F5A179EEEC01A76885((ShapeModule_t3A89D143F5CAF357ECCE8B4A4F2BBD57816F98CA *)(ShapeModule_t3A89D143F5CAF357ECCE8B4A4F2BBD57816F98CA *)(&V_0), (float)L_72, /*hidden argument*/NULL);
		// break;
		goto IL_042c;
	}

IL_02f6:
	{
		// instance.sphericalDirectionAmount = reader.Read<System.Single>(ES3Type_float.Instance);
		ES3Reader_t2780AF8AA61DA2A817115CEF8612AC0E494D03C9 * L_73 = ___reader0;
		IL2CPP_RUNTIME_CLASS_INIT(ES3Type_float_tF86B773C86731BD9AD79448B860BBB178FE77644_il2cpp_TypeInfo_var);
		ES3Type_t8FBECB7AE75168648B9524E0C2A38DAD4555421D * L_74 = ((ES3Type_float_tF86B773C86731BD9AD79448B860BBB178FE77644_StaticFields*)il2cpp_codegen_static_fields_for(ES3Type_float_tF86B773C86731BD9AD79448B860BBB178FE77644_il2cpp_TypeInfo_var))->get_Instance_12();
		NullCheck((ES3Reader_t2780AF8AA61DA2A817115CEF8612AC0E494D03C9 *)L_73);
		float L_75;
		L_75 = GenericVirtFuncInvoker1< float, ES3Type_t8FBECB7AE75168648B9524E0C2A38DAD4555421D * >::Invoke(ES3Reader_Read_TisSingle_tE07797BA3C98D4CA9B5A19413C19A76688AB899E_m4A0416374498BDA042B8EB21E49B72326D6CE5F4_RuntimeMethod_var, (ES3Reader_t2780AF8AA61DA2A817115CEF8612AC0E494D03C9 *)L_73, (ES3Type_t8FBECB7AE75168648B9524E0C2A38DAD4555421D *)L_74);
		ShapeModule_set_sphericalDirectionAmount_m02A9FBFF18AF24B821801DF5D833CA20A569F62B((ShapeModule_t3A89D143F5CAF357ECCE8B4A4F2BBD57816F98CA *)(ShapeModule_t3A89D143F5CAF357ECCE8B4A4F2BBD57816F98CA *)(&V_0), (float)L_75, /*hidden argument*/NULL);
		// break;
		goto IL_042c;
	}

IL_030d:
	{
		// instance.alignToDirection = reader.Read<System.Boolean>(ES3Type_bool.Instance);
		ES3Reader_t2780AF8AA61DA2A817115CEF8612AC0E494D03C9 * L_76 = ___reader0;
		IL2CPP_RUNTIME_CLASS_INIT(ES3Type_bool_t8F309F7B9CC735FF1DEE68081B6E3CAB367745F4_il2cpp_TypeInfo_var);
		ES3Type_t8FBECB7AE75168648B9524E0C2A38DAD4555421D * L_77 = ((ES3Type_bool_t8F309F7B9CC735FF1DEE68081B6E3CAB367745F4_StaticFields*)il2cpp_codegen_static_fields_for(ES3Type_bool_t8F309F7B9CC735FF1DEE68081B6E3CAB367745F4_il2cpp_TypeInfo_var))->get_Instance_12();
		NullCheck((ES3Reader_t2780AF8AA61DA2A817115CEF8612AC0E494D03C9 *)L_76);
		bool L_78;
		L_78 = GenericVirtFuncInvoker1< bool, ES3Type_t8FBECB7AE75168648B9524E0C2A38DAD4555421D * >::Invoke(ES3Reader_Read_TisBoolean_t07D1E3F34E4813023D64F584DFF7B34C9D922F37_mC6D1B158268FF9B97822FF9F5B37FB1723FEDA22_RuntimeMethod_var, (ES3Reader_t2780AF8AA61DA2A817115CEF8612AC0E494D03C9 *)L_76, (ES3Type_t8FBECB7AE75168648B9524E0C2A38DAD4555421D *)L_77);
		ShapeModule_set_alignToDirection_m396A57DCAD5F194E4DDDA0DF9C35E5508E3641BE((ShapeModule_t3A89D143F5CAF357ECCE8B4A4F2BBD57816F98CA *)(ShapeModule_t3A89D143F5CAF357ECCE8B4A4F2BBD57816F98CA *)(&V_0), (bool)L_78, /*hidden argument*/NULL);
		// break;
		goto IL_042c;
	}

IL_0324:
	{
		// instance.radius = reader.Read<System.Single>(ES3Type_float.Instance);
		ES3Reader_t2780AF8AA61DA2A817115CEF8612AC0E494D03C9 * L_79 = ___reader0;
		IL2CPP_RUNTIME_CLASS_INIT(ES3Type_float_tF86B773C86731BD9AD79448B860BBB178FE77644_il2cpp_TypeInfo_var);
		ES3Type_t8FBECB7AE75168648B9524E0C2A38DAD4555421D * L_80 = ((ES3Type_float_tF86B773C86731BD9AD79448B860BBB178FE77644_StaticFields*)il2cpp_codegen_static_fields_for(ES3Type_float_tF86B773C86731BD9AD79448B860BBB178FE77644_il2cpp_TypeInfo_var))->get_Instance_12();
		NullCheck((ES3Reader_t2780AF8AA61DA2A817115CEF8612AC0E494D03C9 *)L_79);
		float L_81;
		L_81 = GenericVirtFuncInvoker1< float, ES3Type_t8FBECB7AE75168648B9524E0C2A38DAD4555421D * >::Invoke(ES3Reader_Read_TisSingle_tE07797BA3C98D4CA9B5A19413C19A76688AB899E_m4A0416374498BDA042B8EB21E49B72326D6CE5F4_RuntimeMethod_var, (ES3Reader_t2780AF8AA61DA2A817115CEF8612AC0E494D03C9 *)L_79, (ES3Type_t8FBECB7AE75168648B9524E0C2A38DAD4555421D *)L_80);
		ShapeModule_set_radius_mFC12B15750268316924771461C09B1A311A16DEA((ShapeModule_t3A89D143F5CAF357ECCE8B4A4F2BBD57816F98CA *)(ShapeModule_t3A89D143F5CAF357ECCE8B4A4F2BBD57816F98CA *)(&V_0), (float)L_81, /*hidden argument*/NULL);
		// break;
		goto IL_042c;
	}

IL_033b:
	{
		// instance.angle = reader.Read<System.Single>(ES3Type_float.Instance);
		ES3Reader_t2780AF8AA61DA2A817115CEF8612AC0E494D03C9 * L_82 = ___reader0;
		IL2CPP_RUNTIME_CLASS_INIT(ES3Type_float_tF86B773C86731BD9AD79448B860BBB178FE77644_il2cpp_TypeInfo_var);
		ES3Type_t8FBECB7AE75168648B9524E0C2A38DAD4555421D * L_83 = ((ES3Type_float_tF86B773C86731BD9AD79448B860BBB178FE77644_StaticFields*)il2cpp_codegen_static_fields_for(ES3Type_float_tF86B773C86731BD9AD79448B860BBB178FE77644_il2cpp_TypeInfo_var))->get_Instance_12();
		NullCheck((ES3Reader_t2780AF8AA61DA2A817115CEF8612AC0E494D03C9 *)L_82);
		float L_84;
		L_84 = GenericVirtFuncInvoker1< float, ES3Type_t8FBECB7AE75168648B9524E0C2A38DAD4555421D * >::Invoke(ES3Reader_Read_TisSingle_tE07797BA3C98D4CA9B5A19413C19A76688AB899E_m4A0416374498BDA042B8EB21E49B72326D6CE5F4_RuntimeMethod_var, (ES3Reader_t2780AF8AA61DA2A817115CEF8612AC0E494D03C9 *)L_82, (ES3Type_t8FBECB7AE75168648B9524E0C2A38DAD4555421D *)L_83);
		ShapeModule_set_angle_m20629BB5FE89F2040960548B45F6EC801B1DB8AA((ShapeModule_t3A89D143F5CAF357ECCE8B4A4F2BBD57816F98CA *)(ShapeModule_t3A89D143F5CAF357ECCE8B4A4F2BBD57816F98CA *)(&V_0), (float)L_84, /*hidden argument*/NULL);
		// break;
		goto IL_042c;
	}

IL_0352:
	{
		// instance.length = reader.Read<System.Single>(ES3Type_float.Instance);
		ES3Reader_t2780AF8AA61DA2A817115CEF8612AC0E494D03C9 * L_85 = ___reader0;
		IL2CPP_RUNTIME_CLASS_INIT(ES3Type_float_tF86B773C86731BD9AD79448B860BBB178FE77644_il2cpp_TypeInfo_var);
		ES3Type_t8FBECB7AE75168648B9524E0C2A38DAD4555421D * L_86 = ((ES3Type_float_tF86B773C86731BD9AD79448B860BBB178FE77644_StaticFields*)il2cpp_codegen_static_fields_for(ES3Type_float_tF86B773C86731BD9AD79448B860BBB178FE77644_il2cpp_TypeInfo_var))->get_Instance_12();
		NullCheck((ES3Reader_t2780AF8AA61DA2A817115CEF8612AC0E494D03C9 *)L_85);
		float L_87;
		L_87 = GenericVirtFuncInvoker1< float, ES3Type_t8FBECB7AE75168648B9524E0C2A38DAD4555421D * >::Invoke(ES3Reader_Read_TisSingle_tE07797BA3C98D4CA9B5A19413C19A76688AB899E_m4A0416374498BDA042B8EB21E49B72326D6CE5F4_RuntimeMethod_var, (ES3Reader_t2780AF8AA61DA2A817115CEF8612AC0E494D03C9 *)L_85, (ES3Type_t8FBECB7AE75168648B9524E0C2A38DAD4555421D *)L_86);
		ShapeModule_set_length_m744975258664B53F38A8B8BE38A86A0FFDD85BC7((ShapeModule_t3A89D143F5CAF357ECCE8B4A4F2BBD57816F98CA *)(ShapeModule_t3A89D143F5CAF357ECCE8B4A4F2BBD57816F98CA *)(&V_0), (float)L_87, /*hidden argument*/NULL);
		// break;
		goto IL_042c;
	}

IL_0369:
	{
		// instance.scale = reader.Read<UnityEngine.Vector3>(ES3Type_Vector3.Instance);
		ES3Reader_t2780AF8AA61DA2A817115CEF8612AC0E494D03C9 * L_88 = ___reader0;
		IL2CPP_RUNTIME_CLASS_INIT(ES3Type_Vector3_tA9144E81A20D2F28726F02DE1AE6CD3F9C12B54F_il2cpp_TypeInfo_var);
		ES3Type_t8FBECB7AE75168648B9524E0C2A38DAD4555421D * L_89 = ((ES3Type_Vector3_tA9144E81A20D2F28726F02DE1AE6CD3F9C12B54F_StaticFields*)il2cpp_codegen_static_fields_for(ES3Type_Vector3_tA9144E81A20D2F28726F02DE1AE6CD3F9C12B54F_il2cpp_TypeInfo_var))->get_Instance_12();
		NullCheck((ES3Reader_t2780AF8AA61DA2A817115CEF8612AC0E494D03C9 *)L_88);
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_90;
		L_90 = GenericVirtFuncInvoker1< Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E , ES3Type_t8FBECB7AE75168648B9524E0C2A38DAD4555421D * >::Invoke(ES3Reader_Read_TisVector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E_mBA4CD9D0F45E78BA43FE2DB8EC33CC3A5433DE15_RuntimeMethod_var, (ES3Reader_t2780AF8AA61DA2A817115CEF8612AC0E494D03C9 *)L_88, (ES3Type_t8FBECB7AE75168648B9524E0C2A38DAD4555421D *)L_89);
		ShapeModule_set_scale_m2951583898F18878E6F238100045072F44AD9158((ShapeModule_t3A89D143F5CAF357ECCE8B4A4F2BBD57816F98CA *)(ShapeModule_t3A89D143F5CAF357ECCE8B4A4F2BBD57816F98CA *)(&V_0), (Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E )L_90, /*hidden argument*/NULL);
		// break;
		goto IL_042c;
	}

IL_0380:
	{
		// instance.meshShapeType = reader.Read<UnityEngine.ParticleSystemMeshShapeType>();
		ES3Reader_t2780AF8AA61DA2A817115CEF8612AC0E494D03C9 * L_91 = ___reader0;
		NullCheck((ES3Reader_t2780AF8AA61DA2A817115CEF8612AC0E494D03C9 *)L_91);
		int32_t L_92;
		L_92 = GenericVirtFuncInvoker0< int32_t >::Invoke(ES3Reader_Read_TisParticleSystemMeshShapeType_t7C9518403F30CC7AF7F9124FD61EC1187B42EFD2_mF1A19C0F8BBA6E44737F158F3BE4CC478F623F10_RuntimeMethod_var, (ES3Reader_t2780AF8AA61DA2A817115CEF8612AC0E494D03C9 *)L_91);
		ShapeModule_set_meshShapeType_m5DAD94B71F2110F45E454C30DE052153129891C2((ShapeModule_t3A89D143F5CAF357ECCE8B4A4F2BBD57816F98CA *)(ShapeModule_t3A89D143F5CAF357ECCE8B4A4F2BBD57816F98CA *)(&V_0), (int32_t)L_92, /*hidden argument*/NULL);
		// break;
		goto IL_042c;
	}

IL_0392:
	{
		// instance.mesh = reader.Read<UnityEngine.Mesh>();
		ES3Reader_t2780AF8AA61DA2A817115CEF8612AC0E494D03C9 * L_93 = ___reader0;
		NullCheck((ES3Reader_t2780AF8AA61DA2A817115CEF8612AC0E494D03C9 *)L_93);
		Mesh_t2F5992DBA650D5862B43D3823ACD997132A57DA6 * L_94;
		L_94 = GenericVirtFuncInvoker0< Mesh_t2F5992DBA650D5862B43D3823ACD997132A57DA6 * >::Invoke(ES3Reader_Read_TisMesh_t2F5992DBA650D5862B43D3823ACD997132A57DA6_m65DF5BA41642A39B77979CC49472E4DE7A1660F9_RuntimeMethod_var, (ES3Reader_t2780AF8AA61DA2A817115CEF8612AC0E494D03C9 *)L_93);
		ShapeModule_set_mesh_mD3E276A9E45442E75AD8A9AA4BD88C9112BD77CA((ShapeModule_t3A89D143F5CAF357ECCE8B4A4F2BBD57816F98CA *)(ShapeModule_t3A89D143F5CAF357ECCE8B4A4F2BBD57816F98CA *)(&V_0), (Mesh_t2F5992DBA650D5862B43D3823ACD997132A57DA6 *)L_94, /*hidden argument*/NULL);
		// break;
		goto IL_042c;
	}

IL_03a4:
	{
		// instance.meshRenderer = reader.Read<UnityEngine.MeshRenderer>();
		ES3Reader_t2780AF8AA61DA2A817115CEF8612AC0E494D03C9 * L_95 = ___reader0;
		NullCheck((ES3Reader_t2780AF8AA61DA2A817115CEF8612AC0E494D03C9 *)L_95);
		MeshRenderer_tCD983A2F635E12BCB0BAA2E635D96A318757908B * L_96;
		L_96 = GenericVirtFuncInvoker0< MeshRenderer_tCD983A2F635E12BCB0BAA2E635D96A318757908B * >::Invoke(ES3Reader_Read_TisMeshRenderer_tCD983A2F635E12BCB0BAA2E635D96A318757908B_m773CE5481730EBCC6A377F918946EB11B304050A_RuntimeMethod_var, (ES3Reader_t2780AF8AA61DA2A817115CEF8612AC0E494D03C9 *)L_95);
		ShapeModule_set_meshRenderer_m334D69AC8C29F5E393732D62BBB3645296614059((ShapeModule_t3A89D143F5CAF357ECCE8B4A4F2BBD57816F98CA *)(ShapeModule_t3A89D143F5CAF357ECCE8B4A4F2BBD57816F98CA *)(&V_0), (MeshRenderer_tCD983A2F635E12BCB0BAA2E635D96A318757908B *)L_96, /*hidden argument*/NULL);
		// break;
		goto IL_042c;
	}

IL_03b3:
	{
		// instance.skinnedMeshRenderer = reader.Read<UnityEngine.SkinnedMeshRenderer>();
		ES3Reader_t2780AF8AA61DA2A817115CEF8612AC0E494D03C9 * L_97 = ___reader0;
		NullCheck((ES3Reader_t2780AF8AA61DA2A817115CEF8612AC0E494D03C9 *)L_97);
		SkinnedMeshRenderer_t126F4D6010E0F4B2685A7817B0A9171805D8F496 * L_98;
		L_98 = GenericVirtFuncInvoker0< SkinnedMeshRenderer_t126F4D6010E0F4B2685A7817B0A9171805D8F496 * >::Invoke(ES3Reader_Read_TisSkinnedMeshRenderer_t126F4D6010E0F4B2685A7817B0A9171805D8F496_m23D6569D5CE7B3E1C67BDB470CDEDEF25A835F25_RuntimeMethod_var, (ES3Reader_t2780AF8AA61DA2A817115CEF8612AC0E494D03C9 *)L_97);
		ShapeModule_set_skinnedMeshRenderer_m9DEF9CD332D3F10BE7D99EFECC0971FB5AE83F56((ShapeModule_t3A89D143F5CAF357ECCE8B4A4F2BBD57816F98CA *)(ShapeModule_t3A89D143F5CAF357ECCE8B4A4F2BBD57816F98CA *)(&V_0), (SkinnedMeshRenderer_t126F4D6010E0F4B2685A7817B0A9171805D8F496 *)L_98, /*hidden argument*/NULL);
		// break;
		goto IL_042c;
	}

IL_03c2:
	{
		// instance.useMeshMaterialIndex = reader.Read<System.Boolean>(ES3Type_bool.Instance);
		ES3Reader_t2780AF8AA61DA2A817115CEF8612AC0E494D03C9 * L_99 = ___reader0;
		IL2CPP_RUNTIME_CLASS_INIT(ES3Type_bool_t8F309F7B9CC735FF1DEE68081B6E3CAB367745F4_il2cpp_TypeInfo_var);
		ES3Type_t8FBECB7AE75168648B9524E0C2A38DAD4555421D * L_100 = ((ES3Type_bool_t8F309F7B9CC735FF1DEE68081B6E3CAB367745F4_StaticFields*)il2cpp_codegen_static_fields_for(ES3Type_bool_t8F309F7B9CC735FF1DEE68081B6E3CAB367745F4_il2cpp_TypeInfo_var))->get_Instance_12();
		NullCheck((ES3Reader_t2780AF8AA61DA2A817115CEF8612AC0E494D03C9 *)L_99);
		bool L_101;
		L_101 = GenericVirtFuncInvoker1< bool, ES3Type_t8FBECB7AE75168648B9524E0C2A38DAD4555421D * >::Invoke(ES3Reader_Read_TisBoolean_t07D1E3F34E4813023D64F584DFF7B34C9D922F37_mC6D1B158268FF9B97822FF9F5B37FB1723FEDA22_RuntimeMethod_var, (ES3Reader_t2780AF8AA61DA2A817115CEF8612AC0E494D03C9 *)L_99, (ES3Type_t8FBECB7AE75168648B9524E0C2A38DAD4555421D *)L_100);
		ShapeModule_set_useMeshMaterialIndex_m6130573C0966ED3B5C590665747305BCEFD3F901((ShapeModule_t3A89D143F5CAF357ECCE8B4A4F2BBD57816F98CA *)(ShapeModule_t3A89D143F5CAF357ECCE8B4A4F2BBD57816F98CA *)(&V_0), (bool)L_101, /*hidden argument*/NULL);
		// break;
		goto IL_042c;
	}

IL_03d6:
	{
		// instance.meshMaterialIndex = reader.Read<System.Int32>(ES3Type_int.Instance);
		ES3Reader_t2780AF8AA61DA2A817115CEF8612AC0E494D03C9 * L_102 = ___reader0;
		IL2CPP_RUNTIME_CLASS_INIT(ES3Type_int_tF64C15D40AD0CC7C15BCD1CEC3C5C6BF837BD167_il2cpp_TypeInfo_var);
		ES3Type_t8FBECB7AE75168648B9524E0C2A38DAD4555421D * L_103 = ((ES3Type_int_tF64C15D40AD0CC7C15BCD1CEC3C5C6BF837BD167_StaticFields*)il2cpp_codegen_static_fields_for(ES3Type_int_tF64C15D40AD0CC7C15BCD1CEC3C5C6BF837BD167_il2cpp_TypeInfo_var))->get_Instance_12();
		NullCheck((ES3Reader_t2780AF8AA61DA2A817115CEF8612AC0E494D03C9 *)L_102);
		int32_t L_104;
		L_104 = GenericVirtFuncInvoker1< int32_t, ES3Type_t8FBECB7AE75168648B9524E0C2A38DAD4555421D * >::Invoke(ES3Reader_Read_TisInt32_tFDE5F8CD43D10453F6A2E0C77FE48C6CC7009046_m2B74AA6627F5B1D21171D56C42F71DE5A7C1B4A6_RuntimeMethod_var, (ES3Reader_t2780AF8AA61DA2A817115CEF8612AC0E494D03C9 *)L_102, (ES3Type_t8FBECB7AE75168648B9524E0C2A38DAD4555421D *)L_103);
		ShapeModule_set_meshMaterialIndex_m1205DDEB353204D5941654FB79164AD5BAF0A59C((ShapeModule_t3A89D143F5CAF357ECCE8B4A4F2BBD57816F98CA *)(ShapeModule_t3A89D143F5CAF357ECCE8B4A4F2BBD57816F98CA *)(&V_0), (int32_t)L_104, /*hidden argument*/NULL);
		// break;
		goto IL_042c;
	}

IL_03ea:
	{
		// instance.useMeshColors = reader.Read<System.Boolean>(ES3Type_bool.Instance);
		ES3Reader_t2780AF8AA61DA2A817115CEF8612AC0E494D03C9 * L_105 = ___reader0;
		IL2CPP_RUNTIME_CLASS_INIT(ES3Type_bool_t8F309F7B9CC735FF1DEE68081B6E3CAB367745F4_il2cpp_TypeInfo_var);
		ES3Type_t8FBECB7AE75168648B9524E0C2A38DAD4555421D * L_106 = ((ES3Type_bool_t8F309F7B9CC735FF1DEE68081B6E3CAB367745F4_StaticFields*)il2cpp_codegen_static_fields_for(ES3Type_bool_t8F309F7B9CC735FF1DEE68081B6E3CAB367745F4_il2cpp_TypeInfo_var))->get_Instance_12();
		NullCheck((ES3Reader_t2780AF8AA61DA2A817115CEF8612AC0E494D03C9 *)L_105);
		bool L_107;
		L_107 = GenericVirtFuncInvoker1< bool, ES3Type_t8FBECB7AE75168648B9524E0C2A38DAD4555421D * >::Invoke(ES3Reader_Read_TisBoolean_t07D1E3F34E4813023D64F584DFF7B34C9D922F37_mC6D1B158268FF9B97822FF9F5B37FB1723FEDA22_RuntimeMethod_var, (ES3Reader_t2780AF8AA61DA2A817115CEF8612AC0E494D03C9 *)L_105, (ES3Type_t8FBECB7AE75168648B9524E0C2A38DAD4555421D *)L_106);
		ShapeModule_set_useMeshColors_m071D000F330805B1EBCF09B40AC4EB9942EB9F57((ShapeModule_t3A89D143F5CAF357ECCE8B4A4F2BBD57816F98CA *)(ShapeModule_t3A89D143F5CAF357ECCE8B4A4F2BBD57816F98CA *)(&V_0), (bool)L_107, /*hidden argument*/NULL);
		// break;
		goto IL_042c;
	}

IL_03fe:
	{
		// instance.normalOffset = reader.Read<System.Single>(ES3Type_float.Instance);
		ES3Reader_t2780AF8AA61DA2A817115CEF8612AC0E494D03C9 * L_108 = ___reader0;
		IL2CPP_RUNTIME_CLASS_INIT(ES3Type_float_tF86B773C86731BD9AD79448B860BBB178FE77644_il2cpp_TypeInfo_var);
		ES3Type_t8FBECB7AE75168648B9524E0C2A38DAD4555421D * L_109 = ((ES3Type_float_tF86B773C86731BD9AD79448B860BBB178FE77644_StaticFields*)il2cpp_codegen_static_fields_for(ES3Type_float_tF86B773C86731BD9AD79448B860BBB178FE77644_il2cpp_TypeInfo_var))->get_Instance_12();
		NullCheck((ES3Reader_t2780AF8AA61DA2A817115CEF8612AC0E494D03C9 *)L_108);
		float L_110;
		L_110 = GenericVirtFuncInvoker1< float, ES3Type_t8FBECB7AE75168648B9524E0C2A38DAD4555421D * >::Invoke(ES3Reader_Read_TisSingle_tE07797BA3C98D4CA9B5A19413C19A76688AB899E_m4A0416374498BDA042B8EB21E49B72326D6CE5F4_RuntimeMethod_var, (ES3Reader_t2780AF8AA61DA2A817115CEF8612AC0E494D03C9 *)L_108, (ES3Type_t8FBECB7AE75168648B9524E0C2A38DAD4555421D *)L_109);
		ShapeModule_set_normalOffset_m81A315286BAA5F52AAED6B317734FB03B2DCE9FD((ShapeModule_t3A89D143F5CAF357ECCE8B4A4F2BBD57816F98CA *)(ShapeModule_t3A89D143F5CAF357ECCE8B4A4F2BBD57816F98CA *)(&V_0), (float)L_110, /*hidden argument*/NULL);
		// break;
		goto IL_042c;
	}

IL_0412:
	{
		// instance.arc = reader.Read<System.Single>(ES3Type_float.Instance);
		ES3Reader_t2780AF8AA61DA2A817115CEF8612AC0E494D03C9 * L_111 = ___reader0;
		IL2CPP_RUNTIME_CLASS_INIT(ES3Type_float_tF86B773C86731BD9AD79448B860BBB178FE77644_il2cpp_TypeInfo_var);
		ES3Type_t8FBECB7AE75168648B9524E0C2A38DAD4555421D * L_112 = ((ES3Type_float_tF86B773C86731BD9AD79448B860BBB178FE77644_StaticFields*)il2cpp_codegen_static_fields_for(ES3Type_float_tF86B773C86731BD9AD79448B860BBB178FE77644_il2cpp_TypeInfo_var))->get_Instance_12();
		NullCheck((ES3Reader_t2780AF8AA61DA2A817115CEF8612AC0E494D03C9 *)L_111);
		float L_113;
		L_113 = GenericVirtFuncInvoker1< float, ES3Type_t8FBECB7AE75168648B9524E0C2A38DAD4555421D * >::Invoke(ES3Reader_Read_TisSingle_tE07797BA3C98D4CA9B5A19413C19A76688AB899E_m4A0416374498BDA042B8EB21E49B72326D6CE5F4_RuntimeMethod_var, (ES3Reader_t2780AF8AA61DA2A817115CEF8612AC0E494D03C9 *)L_111, (ES3Type_t8FBECB7AE75168648B9524E0C2A38DAD4555421D *)L_112);
		ShapeModule_set_arc_m4A2578EBD4747DB3D9ED74AB53E488872CFA541F((ShapeModule_t3A89D143F5CAF357ECCE8B4A4F2BBD57816F98CA *)(ShapeModule_t3A89D143F5CAF357ECCE8B4A4F2BBD57816F98CA *)(&V_0), (float)L_113, /*hidden argument*/NULL);
		// break;
		goto IL_042c;
	}

IL_0426:
	{
		// reader.Skip();
		ES3Reader_t2780AF8AA61DA2A817115CEF8612AC0E494D03C9 * L_114 = ___reader0;
		NullCheck((ES3Reader_t2780AF8AA61DA2A817115CEF8612AC0E494D03C9 *)L_114);
		VirtActionInvoker0::Invoke(41 /* System.Void ES3Reader::Skip() */, (ES3Reader_t2780AF8AA61DA2A817115CEF8612AC0E494D03C9 *)L_114);
	}

IL_042c:
	{
		// while((propertyName = reader.ReadPropertyName()) != null)
		ES3Reader_t2780AF8AA61DA2A817115CEF8612AC0E494D03C9 * L_115 = ___reader0;
		NullCheck((ES3Reader_t2780AF8AA61DA2A817115CEF8612AC0E494D03C9 *)L_115);
		String_t* L_116;
		L_116 = VirtFuncInvoker0< String_t* >::Invoke(21 /* System.String ES3Reader::ReadPropertyName() */, (ES3Reader_t2780AF8AA61DA2A817115CEF8612AC0E494D03C9 *)L_115);
		String_t* L_117 = (String_t*)L_116;
		V_1 = (String_t*)L_117;
		if (L_117)
		{
			goto IL_000c;
		}
	}
	{
		// }
		return;
	}
}
// System.Void ES3Types.ES3Type_ShapeModule::ReadInto<UnityEngine.ParticleSystem/TextureSheetAnimationModule>(ES3Reader,System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ES3Type_ShapeModule_ReadInto_TisTextureSheetAnimationModule_t66D02BA0838858C4921EFC059CC3412141A8FCF2_m647B124AD8A8067C3546A47FD4B174EF3F4371AF_gshared (ES3Type_ShapeModule_t67010A74D4F69A245D5F06976239CAB4279B5377 * __this, ES3Reader_t2780AF8AA61DA2A817115CEF8612AC0E494D03C9 * ___reader0, RuntimeObject * ___obj1, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ES3Reader_Read_TisBoolean_t07D1E3F34E4813023D64F584DFF7B34C9D922F37_mC6D1B158268FF9B97822FF9F5B37FB1723FEDA22_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ES3Reader_Read_TisInt32_tFDE5F8CD43D10453F6A2E0C77FE48C6CC7009046_m2B74AA6627F5B1D21171D56C42F71DE5A7C1B4A6_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ES3Reader_Read_TisMeshRenderer_tCD983A2F635E12BCB0BAA2E635D96A318757908B_m773CE5481730EBCC6A377F918946EB11B304050A_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ES3Reader_Read_TisMesh_t2F5992DBA650D5862B43D3823ACD997132A57DA6_m65DF5BA41642A39B77979CC49472E4DE7A1660F9_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ES3Reader_Read_TisParticleSystemMeshShapeType_t7C9518403F30CC7AF7F9124FD61EC1187B42EFD2_mF1A19C0F8BBA6E44737F158F3BE4CC478F623F10_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ES3Reader_Read_TisParticleSystemShapeType_t5B09F3A5A637F57DB1B2A6518E214AA2AA53D70C_mAE53212CB1FDDA51CF8CD0D39FCD446087DACA48_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ES3Reader_Read_TisSingle_tE07797BA3C98D4CA9B5A19413C19A76688AB899E_m4A0416374498BDA042B8EB21E49B72326D6CE5F4_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ES3Reader_Read_TisSkinnedMeshRenderer_t126F4D6010E0F4B2685A7817B0A9171805D8F496_m23D6569D5CE7B3E1C67BDB470CDEDEF25A835F25_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ES3Reader_Read_TisVector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E_mBA4CD9D0F45E78BA43FE2DB8EC33CC3A5433DE15_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ES3Type_Vector3_tA9144E81A20D2F28726F02DE1AE6CD3F9C12B54F_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ES3Type_bool_t8F309F7B9CC735FF1DEE68081B6E3CAB367745F4_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ES3Type_float_tF86B773C86731BD9AD79448B860BBB178FE77644_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ES3Type_int_tF64C15D40AD0CC7C15BCD1CEC3C5C6BF837BD167_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ShapeModule_t3A89D143F5CAF357ECCE8B4A4F2BBD57816F98CA_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral01837E2252AC8026A5EA3567A663017A662FBB70);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral1228466552C1791B2019A329AFE94665D441168A);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral60E56797D122AE71D3774956F66C6EEB9EA22C05);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral6686C366F645244186604A3DA4B9A58012A85F1B);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral82BECCAD895076775062861CDB46AADEF913D969);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral8C9F18A4F030B96447955FBBA1A99FFC43B5D8E0);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral8E54BB51E569CB6A8D3C45D8AEF883A1559C1C0E);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral91811EE149061D28B38320E2430CE8888AD6398B);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralBD49F93A7BC78A69E385CEC0E78F434BD2845A17);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralCA1B66E295BD92E9FD3B6C708F09CA69A50BEFD1);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralE8744A8B8BD390EB66CA0CAE2376C973E6904FFB);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralEB0A157666700D8227FD4B66A26FDC02035E89BF);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralED1F119527A0BCA45125EF8E0F719985DA86C0E1);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralF66E9083C67855AB6EBB4B74342E385A72AACE32);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralF9BE17D634D1B07BCDCDA77A87710C946D81307B);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralF9D225733E1D10F9344C755C4A9C0870CD1DE97B);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralFA5EC7168E9633DAAEAA255ECB55030EA60F064F);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralFC341A1966AF28A9A7A26EDFB78ABBF7DE4D0E1F);
		s_Il2CppMethodInitialized = true;
	}
	ShapeModule_t3A89D143F5CAF357ECCE8B4A4F2BBD57816F98CA  V_0;
	memset((&V_0), 0, sizeof(V_0));
	String_t* V_1 = NULL;
	uint32_t V_2 = 0;
	{
		// var instance = (UnityEngine.ParticleSystem.ShapeModule)obj;
		RuntimeObject * L_0 = ___obj1;
		V_0 = (ShapeModule_t3A89D143F5CAF357ECCE8B4A4F2BBD57816F98CA )((*(ShapeModule_t3A89D143F5CAF357ECCE8B4A4F2BBD57816F98CA *)((ShapeModule_t3A89D143F5CAF357ECCE8B4A4F2BBD57816F98CA *)UnBox(L_0, ShapeModule_t3A89D143F5CAF357ECCE8B4A4F2BBD57816F98CA_il2cpp_TypeInfo_var))));
		goto IL_042c;
	}

IL_000c:
	{
		String_t* L_1 = V_1;
		if (!L_1)
		{
			goto IL_0426;
		}
	}
	{
		String_t* L_2 = V_1;
		uint32_t L_3;
		L_3 = U3CPrivateImplementationDetailsU3E_ComputeStringHash_m3ADC1F612F9EE3DD518E6F0023A0DE0EE2B120A7((String_t*)L_2, /*hidden argument*/NULL);
		V_2 = (uint32_t)L_3;
		uint32_t L_4 = V_2;
		if ((!(((uint32_t)L_4) <= ((uint32_t)((int32_t)-2104025999)))))
		{
			goto IL_00b3;
		}
	}
	{
		uint32_t L_5 = V_2;
		if ((!(((uint32_t)L_5) <= ((uint32_t)((int32_t)666576729)))))
		{
			goto IL_006a;
		}
	}
	{
		uint32_t L_6 = V_2;
		if ((!(((uint32_t)L_6) <= ((uint32_t)((int32_t)49525662)))))
		{
			goto IL_004f;
		}
	}
	{
		uint32_t L_7 = V_2;
		if ((((int32_t)L_7) == ((int32_t)((int32_t)24602224))))
		{
			goto IL_024d;
		}
	}
	{
		uint32_t L_8 = V_2;
		if ((((int32_t)L_8) == ((int32_t)((int32_t)49525662))))
		{
			goto IL_013c;
		}
	}
	{
		goto IL_0426;
	}

IL_004f:
	{
		uint32_t L_9 = V_2;
		if ((((int32_t)L_9) == ((int32_t)((int32_t)230313139))))
		{
			goto IL_01a5;
		}
	}
	{
		uint32_t L_10 = V_2;
		if ((((int32_t)L_10) == ((int32_t)((int32_t)666576729))))
		{
			goto IL_01f9;
		}
	}
	{
		goto IL_0426;
	}

IL_006a:
	{
		uint32_t L_11 = V_2;
		if ((!(((uint32_t)L_11) <= ((uint32_t)((int32_t)955488309)))))
		{
			goto IL_008d;
		}
	}
	{
		uint32_t L_12 = V_2;
		if ((((int32_t)L_12) == ((int32_t)((int32_t)923624301))))
		{
			goto IL_0238;
		}
	}
	{
		uint32_t L_13 = V_2;
		if ((((int32_t)L_13) == ((int32_t)((int32_t)955488309))))
		{
			goto IL_028c;
		}
	}
	{
		goto IL_0426;
	}

IL_008d:
	{
		uint32_t L_14 = V_2;
		if ((((int32_t)L_14) == ((int32_t)((int32_t)980363995))))
		{
			goto IL_02a1;
		}
	}
	{
		uint32_t L_15 = V_2;
		if ((((int32_t)L_15) == ((int32_t)((int32_t)985988853))))
		{
			goto IL_017b;
		}
	}
	{
		uint32_t L_16 = V_2;
		if ((((int32_t)L_16) == ((int32_t)((int32_t)-2104025999))))
		{
			goto IL_01e4;
		}
	}
	{
		goto IL_0426;
	}

IL_00b3:
	{
		uint32_t L_17 = V_2;
		if ((!(((uint32_t)L_17) <= ((uint32_t)((int32_t)-1473810612)))))
		{
			goto IL_00f6;
		}
	}
	{
		uint32_t L_18 = V_2;
		if ((!(((uint32_t)L_18) <= ((uint32_t)((int32_t)-1726928010)))))
		{
			goto IL_00db;
		}
	}
	{
		uint32_t L_19 = V_2;
		if ((((int32_t)L_19) == ((int32_t)((int32_t)-2083506667))))
		{
			goto IL_01cf;
		}
	}
	{
		uint32_t L_20 = V_2;
		if ((((int32_t)L_20) == ((int32_t)((int32_t)-1726928010))))
		{
			goto IL_0151;
		}
	}
	{
		goto IL_0426;
	}

IL_00db:
	{
		uint32_t L_21 = V_2;
		if ((((int32_t)L_21) == ((int32_t)((int32_t)-1593786692))))
		{
			goto IL_020e;
		}
	}
	{
		uint32_t L_22 = V_2;
		if ((((int32_t)L_22) == ((int32_t)((int32_t)-1473810612))))
		{
			goto IL_0190;
		}
	}
	{
		goto IL_0426;
	}

IL_00f6:
	{
		uint32_t L_23 = V_2;
		if ((!(((uint32_t)L_23) <= ((uint32_t)((int32_t)-1386986472)))))
		{
			goto IL_0116;
		}
	}
	{
		uint32_t L_24 = V_2;
		if ((((int32_t)L_24) == ((int32_t)((int32_t)-1412039661))))
		{
			goto IL_0166;
		}
	}
	{
		uint32_t L_25 = V_2;
		if ((((int32_t)L_25) == ((int32_t)((int32_t)-1386986472))))
		{
			goto IL_01ba;
		}
	}
	{
		goto IL_0426;
	}

IL_0116:
	{
		uint32_t L_26 = V_2;
		if ((((int32_t)L_26) == ((int32_t)((int32_t)-584064197))))
		{
			goto IL_0223;
		}
	}
	{
		uint32_t L_27 = V_2;
		if ((((int32_t)L_27) == ((int32_t)((int32_t)-473474755))))
		{
			goto IL_0277;
		}
	}
	{
		uint32_t L_28 = V_2;
		if ((((int32_t)L_28) == ((int32_t)((int32_t)-365686981))))
		{
			goto IL_0262;
		}
	}
	{
		goto IL_0426;
	}

IL_013c:
	{
		String_t* L_29 = V_1;
		bool L_30;
		L_30 = String_op_Equality_m50B3548E4AC232558190B0052877B290AA1D436A((String_t*)L_29, (String_t*)_stringLiteralF9D225733E1D10F9344C755C4A9C0870CD1DE97B, /*hidden argument*/NULL);
		if (L_30)
		{
			goto IL_02b6;
		}
	}
	{
		goto IL_0426;
	}

IL_0151:
	{
		String_t* L_31 = V_1;
		bool L_32;
		L_32 = String_op_Equality_m50B3548E4AC232558190B0052877B290AA1D436A((String_t*)L_31, (String_t*)_stringLiteral82BECCAD895076775062861CDB46AADEF913D969, /*hidden argument*/NULL);
		if (L_32)
		{
			goto IL_02cd;
		}
	}
	{
		goto IL_0426;
	}

IL_0166:
	{
		String_t* L_33 = V_1;
		bool L_34;
		L_34 = String_op_Equality_m50B3548E4AC232558190B0052877B290AA1D436A((String_t*)L_33, (String_t*)_stringLiteral1228466552C1791B2019A329AFE94665D441168A, /*hidden argument*/NULL);
		if (L_34)
		{
			goto IL_02df;
		}
	}
	{
		goto IL_0426;
	}

IL_017b:
	{
		String_t* L_35 = V_1;
		bool L_36;
		L_36 = String_op_Equality_m50B3548E4AC232558190B0052877B290AA1D436A((String_t*)L_35, (String_t*)_stringLiteralBD49F93A7BC78A69E385CEC0E78F434BD2845A17, /*hidden argument*/NULL);
		if (L_36)
		{
			goto IL_02f6;
		}
	}
	{
		goto IL_0426;
	}

IL_0190:
	{
		String_t* L_37 = V_1;
		bool L_38;
		L_38 = String_op_Equality_m50B3548E4AC232558190B0052877B290AA1D436A((String_t*)L_37, (String_t*)_stringLiteralED1F119527A0BCA45125EF8E0F719985DA86C0E1, /*hidden argument*/NULL);
		if (L_38)
		{
			goto IL_030d;
		}
	}
	{
		goto IL_0426;
	}

IL_01a5:
	{
		String_t* L_39 = V_1;
		bool L_40;
		L_40 = String_op_Equality_m50B3548E4AC232558190B0052877B290AA1D436A((String_t*)L_39, (String_t*)_stringLiteral8C9F18A4F030B96447955FBBA1A99FFC43B5D8E0, /*hidden argument*/NULL);
		if (L_40)
		{
			goto IL_0324;
		}
	}
	{
		goto IL_0426;
	}

IL_01ba:
	{
		String_t* L_41 = V_1;
		bool L_42;
		L_42 = String_op_Equality_m50B3548E4AC232558190B0052877B290AA1D436A((String_t*)L_41, (String_t*)_stringLiteralFC341A1966AF28A9A7A26EDFB78ABBF7DE4D0E1F, /*hidden argument*/NULL);
		if (L_42)
		{
			goto IL_033b;
		}
	}
	{
		goto IL_0426;
	}

IL_01cf:
	{
		String_t* L_43 = V_1;
		bool L_44;
		L_44 = String_op_Equality_m50B3548E4AC232558190B0052877B290AA1D436A((String_t*)L_43, (String_t*)_stringLiteralE8744A8B8BD390EB66CA0CAE2376C973E6904FFB, /*hidden argument*/NULL);
		if (L_44)
		{
			goto IL_0352;
		}
	}
	{
		goto IL_0426;
	}

IL_01e4:
	{
		String_t* L_45 = V_1;
		bool L_46;
		L_46 = String_op_Equality_m50B3548E4AC232558190B0052877B290AA1D436A((String_t*)L_45, (String_t*)_stringLiteralF9BE17D634D1B07BCDCDA77A87710C946D81307B, /*hidden argument*/NULL);
		if (L_46)
		{
			goto IL_0369;
		}
	}
	{
		goto IL_0426;
	}

IL_01f9:
	{
		String_t* L_47 = V_1;
		bool L_48;
		L_48 = String_op_Equality_m50B3548E4AC232558190B0052877B290AA1D436A((String_t*)L_47, (String_t*)_stringLiteralFA5EC7168E9633DAAEAA255ECB55030EA60F064F, /*hidden argument*/NULL);
		if (L_48)
		{
			goto IL_0380;
		}
	}
	{
		goto IL_0426;
	}

IL_020e:
	{
		String_t* L_49 = V_1;
		bool L_50;
		L_50 = String_op_Equality_m50B3548E4AC232558190B0052877B290AA1D436A((String_t*)L_49, (String_t*)_stringLiteralEB0A157666700D8227FD4B66A26FDC02035E89BF, /*hidden argument*/NULL);
		if (L_50)
		{
			goto IL_0392;
		}
	}
	{
		goto IL_0426;
	}

IL_0223:
	{
		String_t* L_51 = V_1;
		bool L_52;
		L_52 = String_op_Equality_m50B3548E4AC232558190B0052877B290AA1D436A((String_t*)L_51, (String_t*)_stringLiteral8E54BB51E569CB6A8D3C45D8AEF883A1559C1C0E, /*hidden argument*/NULL);
		if (L_52)
		{
			goto IL_03a4;
		}
	}
	{
		goto IL_0426;
	}

IL_0238:
	{
		String_t* L_53 = V_1;
		bool L_54;
		L_54 = String_op_Equality_m50B3548E4AC232558190B0052877B290AA1D436A((String_t*)L_53, (String_t*)_stringLiteral60E56797D122AE71D3774956F66C6EEB9EA22C05, /*hidden argument*/NULL);
		if (L_54)
		{
			goto IL_03b3;
		}
	}
	{
		goto IL_0426;
	}

IL_024d:
	{
		String_t* L_55 = V_1;
		bool L_56;
		L_56 = String_op_Equality_m50B3548E4AC232558190B0052877B290AA1D436A((String_t*)L_55, (String_t*)_stringLiteral01837E2252AC8026A5EA3567A663017A662FBB70, /*hidden argument*/NULL);
		if (L_56)
		{
			goto IL_03c2;
		}
	}
	{
		goto IL_0426;
	}

IL_0262:
	{
		String_t* L_57 = V_1;
		bool L_58;
		L_58 = String_op_Equality_m50B3548E4AC232558190B0052877B290AA1D436A((String_t*)L_57, (String_t*)_stringLiteralF66E9083C67855AB6EBB4B74342E385A72AACE32, /*hidden argument*/NULL);
		if (L_58)
		{
			goto IL_03d6;
		}
	}
	{
		goto IL_0426;
	}

IL_0277:
	{
		String_t* L_59 = V_1;
		bool L_60;
		L_60 = String_op_Equality_m50B3548E4AC232558190B0052877B290AA1D436A((String_t*)L_59, (String_t*)_stringLiteral91811EE149061D28B38320E2430CE8888AD6398B, /*hidden argument*/NULL);
		if (L_60)
		{
			goto IL_03ea;
		}
	}
	{
		goto IL_0426;
	}

IL_028c:
	{
		String_t* L_61 = V_1;
		bool L_62;
		L_62 = String_op_Equality_m50B3548E4AC232558190B0052877B290AA1D436A((String_t*)L_61, (String_t*)_stringLiteral6686C366F645244186604A3DA4B9A58012A85F1B, /*hidden argument*/NULL);
		if (L_62)
		{
			goto IL_03fe;
		}
	}
	{
		goto IL_0426;
	}

IL_02a1:
	{
		String_t* L_63 = V_1;
		bool L_64;
		L_64 = String_op_Equality_m50B3548E4AC232558190B0052877B290AA1D436A((String_t*)L_63, (String_t*)_stringLiteralCA1B66E295BD92E9FD3B6C708F09CA69A50BEFD1, /*hidden argument*/NULL);
		if (L_64)
		{
			goto IL_0412;
		}
	}
	{
		goto IL_0426;
	}

IL_02b6:
	{
		// instance.enabled = reader.Read<System.Boolean>(ES3Type_bool.Instance);
		ES3Reader_t2780AF8AA61DA2A817115CEF8612AC0E494D03C9 * L_65 = ___reader0;
		IL2CPP_RUNTIME_CLASS_INIT(ES3Type_bool_t8F309F7B9CC735FF1DEE68081B6E3CAB367745F4_il2cpp_TypeInfo_var);
		ES3Type_t8FBECB7AE75168648B9524E0C2A38DAD4555421D * L_66 = ((ES3Type_bool_t8F309F7B9CC735FF1DEE68081B6E3CAB367745F4_StaticFields*)il2cpp_codegen_static_fields_for(ES3Type_bool_t8F309F7B9CC735FF1DEE68081B6E3CAB367745F4_il2cpp_TypeInfo_var))->get_Instance_12();
		NullCheck((ES3Reader_t2780AF8AA61DA2A817115CEF8612AC0E494D03C9 *)L_65);
		bool L_67;
		L_67 = GenericVirtFuncInvoker1< bool, ES3Type_t8FBECB7AE75168648B9524E0C2A38DAD4555421D * >::Invoke(ES3Reader_Read_TisBoolean_t07D1E3F34E4813023D64F584DFF7B34C9D922F37_mC6D1B158268FF9B97822FF9F5B37FB1723FEDA22_RuntimeMethod_var, (ES3Reader_t2780AF8AA61DA2A817115CEF8612AC0E494D03C9 *)L_65, (ES3Type_t8FBECB7AE75168648B9524E0C2A38DAD4555421D *)L_66);
		ShapeModule_set_enabled_mF6FE8ED99E482A739C00F894235F4E2CD09B0D1E((ShapeModule_t3A89D143F5CAF357ECCE8B4A4F2BBD57816F98CA *)(ShapeModule_t3A89D143F5CAF357ECCE8B4A4F2BBD57816F98CA *)(&V_0), (bool)L_67, /*hidden argument*/NULL);
		// break;
		goto IL_042c;
	}

IL_02cd:
	{
		// instance.shapeType = reader.Read<UnityEngine.ParticleSystemShapeType>();
		ES3Reader_t2780AF8AA61DA2A817115CEF8612AC0E494D03C9 * L_68 = ___reader0;
		NullCheck((ES3Reader_t2780AF8AA61DA2A817115CEF8612AC0E494D03C9 *)L_68);
		int32_t L_69;
		L_69 = GenericVirtFuncInvoker0< int32_t >::Invoke(ES3Reader_Read_TisParticleSystemShapeType_t5B09F3A5A637F57DB1B2A6518E214AA2AA53D70C_mAE53212CB1FDDA51CF8CD0D39FCD446087DACA48_RuntimeMethod_var, (ES3Reader_t2780AF8AA61DA2A817115CEF8612AC0E494D03C9 *)L_68);
		ShapeModule_set_shapeType_mB772084527742749EB6AD690BAE47215FC71040D((ShapeModule_t3A89D143F5CAF357ECCE8B4A4F2BBD57816F98CA *)(ShapeModule_t3A89D143F5CAF357ECCE8B4A4F2BBD57816F98CA *)(&V_0), (int32_t)L_69, /*hidden argument*/NULL);
		// break;
		goto IL_042c;
	}

IL_02df:
	{
		// instance.randomDirectionAmount = reader.Read<System.Single>(ES3Type_float.Instance);
		ES3Reader_t2780AF8AA61DA2A817115CEF8612AC0E494D03C9 * L_70 = ___reader0;
		IL2CPP_RUNTIME_CLASS_INIT(ES3Type_float_tF86B773C86731BD9AD79448B860BBB178FE77644_il2cpp_TypeInfo_var);
		ES3Type_t8FBECB7AE75168648B9524E0C2A38DAD4555421D * L_71 = ((ES3Type_float_tF86B773C86731BD9AD79448B860BBB178FE77644_StaticFields*)il2cpp_codegen_static_fields_for(ES3Type_float_tF86B773C86731BD9AD79448B860BBB178FE77644_il2cpp_TypeInfo_var))->get_Instance_12();
		NullCheck((ES3Reader_t2780AF8AA61DA2A817115CEF8612AC0E494D03C9 *)L_70);
		float L_72;
		L_72 = GenericVirtFuncInvoker1< float, ES3Type_t8FBECB7AE75168648B9524E0C2A38DAD4555421D * >::Invoke(ES3Reader_Read_TisSingle_tE07797BA3C98D4CA9B5A19413C19A76688AB899E_m4A0416374498BDA042B8EB21E49B72326D6CE5F4_RuntimeMethod_var, (ES3Reader_t2780AF8AA61DA2A817115CEF8612AC0E494D03C9 *)L_70, (ES3Type_t8FBECB7AE75168648B9524E0C2A38DAD4555421D *)L_71);
		ShapeModule_set_randomDirectionAmount_m4E1BB67600D57383945F75F5A179EEEC01A76885((ShapeModule_t3A89D143F5CAF357ECCE8B4A4F2BBD57816F98CA *)(ShapeModule_t3A89D143F5CAF357ECCE8B4A4F2BBD57816F98CA *)(&V_0), (float)L_72, /*hidden argument*/NULL);
		// break;
		goto IL_042c;
	}

IL_02f6:
	{
		// instance.sphericalDirectionAmount = reader.Read<System.Single>(ES3Type_float.Instance);
		ES3Reader_t2780AF8AA61DA2A817115CEF8612AC0E494D03C9 * L_73 = ___reader0;
		IL2CPP_RUNTIME_CLASS_INIT(ES3Type_float_tF86B773C86731BD9AD79448B860BBB178FE77644_il2cpp_TypeInfo_var);
		ES3Type_t8FBECB7AE75168648B9524E0C2A38DAD4555421D * L_74 = ((ES3Type_float_tF86B773C86731BD9AD79448B860BBB178FE77644_StaticFields*)il2cpp_codegen_static_fields_for(ES3Type_float_tF86B773C86731BD9AD79448B860BBB178FE77644_il2cpp_TypeInfo_var))->get_Instance_12();
		NullCheck((ES3Reader_t2780AF8AA61DA2A817115CEF8612AC0E494D03C9 *)L_73);
		float L_75;
		L_75 = GenericVirtFuncInvoker1< float, ES3Type_t8FBECB7AE75168648B9524E0C2A38DAD4555421D * >::Invoke(ES3Reader_Read_TisSingle_tE07797BA3C98D4CA9B5A19413C19A76688AB899E_m4A0416374498BDA042B8EB21E49B72326D6CE5F4_RuntimeMethod_var, (ES3Reader_t2780AF8AA61DA2A817115CEF8612AC0E494D03C9 *)L_73, (ES3Type_t8FBECB7AE75168648B9524E0C2A38DAD4555421D *)L_74);
		ShapeModule_set_sphericalDirectionAmount_m02A9FBFF18AF24B821801DF5D833CA20A569F62B((ShapeModule_t3A89D143F5CAF357ECCE8B4A4F2BBD57816F98CA *)(ShapeModule_t3A89D143F5CAF357ECCE8B4A4F2BBD57816F98CA *)(&V_0), (float)L_75, /*hidden argument*/NULL);
		// break;
		goto IL_042c;
	}

IL_030d:
	{
		// instance.alignToDirection = reader.Read<System.Boolean>(ES3Type_bool.Instance);
		ES3Reader_t2780AF8AA61DA2A817115CEF8612AC0E494D03C9 * L_76 = ___reader0;
		IL2CPP_RUNTIME_CLASS_INIT(ES3Type_bool_t8F309F7B9CC735FF1DEE68081B6E3CAB367745F4_il2cpp_TypeInfo_var);
		ES3Type_t8FBECB7AE75168648B9524E0C2A38DAD4555421D * L_77 = ((ES3Type_bool_t8F309F7B9CC735FF1DEE68081B6E3CAB367745F4_StaticFields*)il2cpp_codegen_static_fields_for(ES3Type_bool_t8F309F7B9CC735FF1DEE68081B6E3CAB367745F4_il2cpp_TypeInfo_var))->get_Instance_12();
		NullCheck((ES3Reader_t2780AF8AA61DA2A817115CEF8612AC0E494D03C9 *)L_76);
		bool L_78;
		L_78 = GenericVirtFuncInvoker1< bool, ES3Type_t8FBECB7AE75168648B9524E0C2A38DAD4555421D * >::Invoke(ES3Reader_Read_TisBoolean_t07D1E3F34E4813023D64F584DFF7B34C9D922F37_mC6D1B158268FF9B97822FF9F5B37FB1723FEDA22_RuntimeMethod_var, (ES3Reader_t2780AF8AA61DA2A817115CEF8612AC0E494D03C9 *)L_76, (ES3Type_t8FBECB7AE75168648B9524E0C2A38DAD4555421D *)L_77);
		ShapeModule_set_alignToDirection_m396A57DCAD5F194E4DDDA0DF9C35E5508E3641BE((ShapeModule_t3A89D143F5CAF357ECCE8B4A4F2BBD57816F98CA *)(ShapeModule_t3A89D143F5CAF357ECCE8B4A4F2BBD57816F98CA *)(&V_0), (bool)L_78, /*hidden argument*/NULL);
		// break;
		goto IL_042c;
	}

IL_0324:
	{
		// instance.radius = reader.Read<System.Single>(ES3Type_float.Instance);
		ES3Reader_t2780AF8AA61DA2A817115CEF8612AC0E494D03C9 * L_79 = ___reader0;
		IL2CPP_RUNTIME_CLASS_INIT(ES3Type_float_tF86B773C86731BD9AD79448B860BBB178FE77644_il2cpp_TypeInfo_var);
		ES3Type_t8FBECB7AE75168648B9524E0C2A38DAD4555421D * L_80 = ((ES3Type_float_tF86B773C86731BD9AD79448B860BBB178FE77644_StaticFields*)il2cpp_codegen_static_fields_for(ES3Type_float_tF86B773C86731BD9AD79448B860BBB178FE77644_il2cpp_TypeInfo_var))->get_Instance_12();
		NullCheck((ES3Reader_t2780AF8AA61DA2A817115CEF8612AC0E494D03C9 *)L_79);
		float L_81;
		L_81 = GenericVirtFuncInvoker1< float, ES3Type_t8FBECB7AE75168648B9524E0C2A38DAD4555421D * >::Invoke(ES3Reader_Read_TisSingle_tE07797BA3C98D4CA9B5A19413C19A76688AB899E_m4A0416374498BDA042B8EB21E49B72326D6CE5F4_RuntimeMethod_var, (ES3Reader_t2780AF8AA61DA2A817115CEF8612AC0E494D03C9 *)L_79, (ES3Type_t8FBECB7AE75168648B9524E0C2A38DAD4555421D *)L_80);
		ShapeModule_set_radius_mFC12B15750268316924771461C09B1A311A16DEA((ShapeModule_t3A89D143F5CAF357ECCE8B4A4F2BBD57816F98CA *)(ShapeModule_t3A89D143F5CAF357ECCE8B4A4F2BBD57816F98CA *)(&V_0), (float)L_81, /*hidden argument*/NULL);
		// break;
		goto IL_042c;
	}

IL_033b:
	{
		// instance.angle = reader.Read<System.Single>(ES3Type_float.Instance);
		ES3Reader_t2780AF8AA61DA2A817115CEF8612AC0E494D03C9 * L_82 = ___reader0;
		IL2CPP_RUNTIME_CLASS_INIT(ES3Type_float_tF86B773C86731BD9AD79448B860BBB178FE77644_il2cpp_TypeInfo_var);
		ES3Type_t8FBECB7AE75168648B9524E0C2A38DAD4555421D * L_83 = ((ES3Type_float_tF86B773C86731BD9AD79448B860BBB178FE77644_StaticFields*)il2cpp_codegen_static_fields_for(ES3Type_float_tF86B773C86731BD9AD79448B860BBB178FE77644_il2cpp_TypeInfo_var))->get_Instance_12();
		NullCheck((ES3Reader_t2780AF8AA61DA2A817115CEF8612AC0E494D03C9 *)L_82);
		float L_84;
		L_84 = GenericVirtFuncInvoker1< float, ES3Type_t8FBECB7AE75168648B9524E0C2A38DAD4555421D * >::Invoke(ES3Reader_Read_TisSingle_tE07797BA3C98D4CA9B5A19413C19A76688AB899E_m4A0416374498BDA042B8EB21E49B72326D6CE5F4_RuntimeMethod_var, (ES3Reader_t2780AF8AA61DA2A817115CEF8612AC0E494D03C9 *)L_82, (ES3Type_t8FBECB7AE75168648B9524E0C2A38DAD4555421D *)L_83);
		ShapeModule_set_angle_m20629BB5FE89F2040960548B45F6EC801B1DB8AA((ShapeModule_t3A89D143F5CAF357ECCE8B4A4F2BBD57816F98CA *)(ShapeModule_t3A89D143F5CAF357ECCE8B4A4F2BBD57816F98CA *)(&V_0), (float)L_84, /*hidden argument*/NULL);
		// break;
		goto IL_042c;
	}

IL_0352:
	{
		// instance.length = reader.Read<System.Single>(ES3Type_float.Instance);
		ES3Reader_t2780AF8AA61DA2A817115CEF8612AC0E494D03C9 * L_85 = ___reader0;
		IL2CPP_RUNTIME_CLASS_INIT(ES3Type_float_tF86B773C86731BD9AD79448B860BBB178FE77644_il2cpp_TypeInfo_var);
		ES3Type_t8FBECB7AE75168648B9524E0C2A38DAD4555421D * L_86 = ((ES3Type_float_tF86B773C86731BD9AD79448B860BBB178FE77644_StaticFields*)il2cpp_codegen_static_fields_for(ES3Type_float_tF86B773C86731BD9AD79448B860BBB178FE77644_il2cpp_TypeInfo_var))->get_Instance_12();
		NullCheck((ES3Reader_t2780AF8AA61DA2A817115CEF8612AC0E494D03C9 *)L_85);
		float L_87;
		L_87 = GenericVirtFuncInvoker1< float, ES3Type_t8FBECB7AE75168648B9524E0C2A38DAD4555421D * >::Invoke(ES3Reader_Read_TisSingle_tE07797BA3C98D4CA9B5A19413C19A76688AB899E_m4A0416374498BDA042B8EB21E49B72326D6CE5F4_RuntimeMethod_var, (ES3Reader_t2780AF8AA61DA2A817115CEF8612AC0E494D03C9 *)L_85, (ES3Type_t8FBECB7AE75168648B9524E0C2A38DAD4555421D *)L_86);
		ShapeModule_set_length_m744975258664B53F38A8B8BE38A86A0FFDD85BC7((ShapeModule_t3A89D143F5CAF357ECCE8B4A4F2BBD57816F98CA *)(ShapeModule_t3A89D143F5CAF357ECCE8B4A4F2BBD57816F98CA *)(&V_0), (float)L_87, /*hidden argument*/NULL);
		// break;
		goto IL_042c;
	}

IL_0369:
	{
		// instance.scale = reader.Read<UnityEngine.Vector3>(ES3Type_Vector3.Instance);
		ES3Reader_t2780AF8AA61DA2A817115CEF8612AC0E494D03C9 * L_88 = ___reader0;
		IL2CPP_RUNTIME_CLASS_INIT(ES3Type_Vector3_tA9144E81A20D2F28726F02DE1AE6CD3F9C12B54F_il2cpp_TypeInfo_var);
		ES3Type_t8FBECB7AE75168648B9524E0C2A38DAD4555421D * L_89 = ((ES3Type_Vector3_tA9144E81A20D2F28726F02DE1AE6CD3F9C12B54F_StaticFields*)il2cpp_codegen_static_fields_for(ES3Type_Vector3_tA9144E81A20D2F28726F02DE1AE6CD3F9C12B54F_il2cpp_TypeInfo_var))->get_Instance_12();
		NullCheck((ES3Reader_t2780AF8AA61DA2A817115CEF8612AC0E494D03C9 *)L_88);
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_90;
		L_90 = GenericVirtFuncInvoker1< Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E , ES3Type_t8FBECB7AE75168648B9524E0C2A38DAD4555421D * >::Invoke(ES3Reader_Read_TisVector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E_mBA4CD9D0F45E78BA43FE2DB8EC33CC3A5433DE15_RuntimeMethod_var, (ES3Reader_t2780AF8AA61DA2A817115CEF8612AC0E494D03C9 *)L_88, (ES3Type_t8FBECB7AE75168648B9524E0C2A38DAD4555421D *)L_89);
		ShapeModule_set_scale_m2951583898F18878E6F238100045072F44AD9158((ShapeModule_t3A89D143F5CAF357ECCE8B4A4F2BBD57816F98CA *)(ShapeModule_t3A89D143F5CAF357ECCE8B4A4F2BBD57816F98CA *)(&V_0), (Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E )L_90, /*hidden argument*/NULL);
		// break;
		goto IL_042c;
	}

IL_0380:
	{
		// instance.meshShapeType = reader.Read<UnityEngine.ParticleSystemMeshShapeType>();
		ES3Reader_t2780AF8AA61DA2A817115CEF8612AC0E494D03C9 * L_91 = ___reader0;
		NullCheck((ES3Reader_t2780AF8AA61DA2A817115CEF8612AC0E494D03C9 *)L_91);
		int32_t L_92;
		L_92 = GenericVirtFuncInvoker0< int32_t >::Invoke(ES3Reader_Read_TisParticleSystemMeshShapeType_t7C9518403F30CC7AF7F9124FD61EC1187B42EFD2_mF1A19C0F8BBA6E44737F158F3BE4CC478F623F10_RuntimeMethod_var, (ES3Reader_t2780AF8AA61DA2A817115CEF8612AC0E494D03C9 *)L_91);
		ShapeModule_set_meshShapeType_m5DAD94B71F2110F45E454C30DE052153129891C2((ShapeModule_t3A89D143F5CAF357ECCE8B4A4F2BBD57816F98CA *)(ShapeModule_t3A89D143F5CAF357ECCE8B4A4F2BBD57816F98CA *)(&V_0), (int32_t)L_92, /*hidden argument*/NULL);
		// break;
		goto IL_042c;
	}

IL_0392:
	{
		// instance.mesh = reader.Read<UnityEngine.Mesh>();
		ES3Reader_t2780AF8AA61DA2A817115CEF8612AC0E494D03C9 * L_93 = ___reader0;
		NullCheck((ES3Reader_t2780AF8AA61DA2A817115CEF8612AC0E494D03C9 *)L_93);
		Mesh_t2F5992DBA650D5862B43D3823ACD997132A57DA6 * L_94;
		L_94 = GenericVirtFuncInvoker0< Mesh_t2F5992DBA650D5862B43D3823ACD997132A57DA6 * >::Invoke(ES3Reader_Read_TisMesh_t2F5992DBA650D5862B43D3823ACD997132A57DA6_m65DF5BA41642A39B77979CC49472E4DE7A1660F9_RuntimeMethod_var, (ES3Reader_t2780AF8AA61DA2A817115CEF8612AC0E494D03C9 *)L_93);
		ShapeModule_set_mesh_mD3E276A9E45442E75AD8A9AA4BD88C9112BD77CA((ShapeModule_t3A89D143F5CAF357ECCE8B4A4F2BBD57816F98CA *)(ShapeModule_t3A89D143F5CAF357ECCE8B4A4F2BBD57816F98CA *)(&V_0), (Mesh_t2F5992DBA650D5862B43D3823ACD997132A57DA6 *)L_94, /*hidden argument*/NULL);
		// break;
		goto IL_042c;
	}

IL_03a4:
	{
		// instance.meshRenderer = reader.Read<UnityEngine.MeshRenderer>();
		ES3Reader_t2780AF8AA61DA2A817115CEF8612AC0E494D03C9 * L_95 = ___reader0;
		NullCheck((ES3Reader_t2780AF8AA61DA2A817115CEF8612AC0E494D03C9 *)L_95);
		MeshRenderer_tCD983A2F635E12BCB0BAA2E635D96A318757908B * L_96;
		L_96 = GenericVirtFuncInvoker0< MeshRenderer_tCD983A2F635E12BCB0BAA2E635D96A318757908B * >::Invoke(ES3Reader_Read_TisMeshRenderer_tCD983A2F635E12BCB0BAA2E635D96A318757908B_m773CE5481730EBCC6A377F918946EB11B304050A_RuntimeMethod_var, (ES3Reader_t2780AF8AA61DA2A817115CEF8612AC0E494D03C9 *)L_95);
		ShapeModule_set_meshRenderer_m334D69AC8C29F5E393732D62BBB3645296614059((ShapeModule_t3A89D143F5CAF357ECCE8B4A4F2BBD57816F98CA *)(ShapeModule_t3A89D143F5CAF357ECCE8B4A4F2BBD57816F98CA *)(&V_0), (MeshRenderer_tCD983A2F635E12BCB0BAA2E635D96A318757908B *)L_96, /*hidden argument*/NULL);
		// break;
		goto IL_042c;
	}

IL_03b3:
	{
		// instance.skinnedMeshRenderer = reader.Read<UnityEngine.SkinnedMeshRenderer>();
		ES3Reader_t2780AF8AA61DA2A817115CEF8612AC0E494D03C9 * L_97 = ___reader0;
		NullCheck((ES3Reader_t2780AF8AA61DA2A817115CEF8612AC0E494D03C9 *)L_97);
		SkinnedMeshRenderer_t126F4D6010E0F4B2685A7817B0A9171805D8F496 * L_98;
		L_98 = GenericVirtFuncInvoker0< SkinnedMeshRenderer_t126F4D6010E0F4B2685A7817B0A9171805D8F496 * >::Invoke(ES3Reader_Read_TisSkinnedMeshRenderer_t126F4D6010E0F4B2685A7817B0A9171805D8F496_m23D6569D5CE7B3E1C67BDB470CDEDEF25A835F25_RuntimeMethod_var, (ES3Reader_t2780AF8AA61DA2A817115CEF8612AC0E494D03C9 *)L_97);
		ShapeModule_set_skinnedMeshRenderer_m9DEF9CD332D3F10BE7D99EFECC0971FB5AE83F56((ShapeModule_t3A89D143F5CAF357ECCE8B4A4F2BBD57816F98CA *)(ShapeModule_t3A89D143F5CAF357ECCE8B4A4F2BBD57816F98CA *)(&V_0), (SkinnedMeshRenderer_t126F4D6010E0F4B2685A7817B0A9171805D8F496 *)L_98, /*hidden argument*/NULL);
		// break;
		goto IL_042c;
	}

IL_03c2:
	{
		// instance.useMeshMaterialIndex = reader.Read<System.Boolean>(ES3Type_bool.Instance);
		ES3Reader_t2780AF8AA61DA2A817115CEF8612AC0E494D03C9 * L_99 = ___reader0;
		IL2CPP_RUNTIME_CLASS_INIT(ES3Type_bool_t8F309F7B9CC735FF1DEE68081B6E3CAB367745F4_il2cpp_TypeInfo_var);
		ES3Type_t8FBECB7AE75168648B9524E0C2A38DAD4555421D * L_100 = ((ES3Type_bool_t8F309F7B9CC735FF1DEE68081B6E3CAB367745F4_StaticFields*)il2cpp_codegen_static_fields_for(ES3Type_bool_t8F309F7B9CC735FF1DEE68081B6E3CAB367745F4_il2cpp_TypeInfo_var))->get_Instance_12();
		NullCheck((ES3Reader_t2780AF8AA61DA2A817115CEF8612AC0E494D03C9 *)L_99);
		bool L_101;
		L_101 = GenericVirtFuncInvoker1< bool, ES3Type_t8FBECB7AE75168648B9524E0C2A38DAD4555421D * >::Invoke(ES3Reader_Read_TisBoolean_t07D1E3F34E4813023D64F584DFF7B34C9D922F37_mC6D1B158268FF9B97822FF9F5B37FB1723FEDA22_RuntimeMethod_var, (ES3Reader_t2780AF8AA61DA2A817115CEF8612AC0E494D03C9 *)L_99, (ES3Type_t8FBECB7AE75168648B9524E0C2A38DAD4555421D *)L_100);
		ShapeModule_set_useMeshMaterialIndex_m6130573C0966ED3B5C590665747305BCEFD3F901((ShapeModule_t3A89D143F5CAF357ECCE8B4A4F2BBD57816F98CA *)(ShapeModule_t3A89D143F5CAF357ECCE8B4A4F2BBD57816F98CA *)(&V_0), (bool)L_101, /*hidden argument*/NULL);
		// break;
		goto IL_042c;
	}

IL_03d6:
	{
		// instance.meshMaterialIndex = reader.Read<System.Int32>(ES3Type_int.Instance);
		ES3Reader_t2780AF8AA61DA2A817115CEF8612AC0E494D03C9 * L_102 = ___reader0;
		IL2CPP_RUNTIME_CLASS_INIT(ES3Type_int_tF64C15D40AD0CC7C15BCD1CEC3C5C6BF837BD167_il2cpp_TypeInfo_var);
		ES3Type_t8FBECB7AE75168648B9524E0C2A38DAD4555421D * L_103 = ((ES3Type_int_tF64C15D40AD0CC7C15BCD1CEC3C5C6BF837BD167_StaticFields*)il2cpp_codegen_static_fields_for(ES3Type_int_tF64C15D40AD0CC7C15BCD1CEC3C5C6BF837BD167_il2cpp_TypeInfo_var))->get_Instance_12();
		NullCheck((ES3Reader_t2780AF8AA61DA2A817115CEF8612AC0E494D03C9 *)L_102);
		int32_t L_104;
		L_104 = GenericVirtFuncInvoker1< int32_t, ES3Type_t8FBECB7AE75168648B9524E0C2A38DAD4555421D * >::Invoke(ES3Reader_Read_TisInt32_tFDE5F8CD43D10453F6A2E0C77FE48C6CC7009046_m2B74AA6627F5B1D21171D56C42F71DE5A7C1B4A6_RuntimeMethod_var, (ES3Reader_t2780AF8AA61DA2A817115CEF8612AC0E494D03C9 *)L_102, (ES3Type_t8FBECB7AE75168648B9524E0C2A38DAD4555421D *)L_103);
		ShapeModule_set_meshMaterialIndex_m1205DDEB353204D5941654FB79164AD5BAF0A59C((ShapeModule_t3A89D143F5CAF357ECCE8B4A4F2BBD57816F98CA *)(ShapeModule_t3A89D143F5CAF357ECCE8B4A4F2BBD57816F98CA *)(&V_0), (int32_t)L_104, /*hidden argument*/NULL);
		// break;
		goto IL_042c;
	}

IL_03ea:
	{
		// instance.useMeshColors = reader.Read<System.Boolean>(ES3Type_bool.Instance);
		ES3Reader_t2780AF8AA61DA2A817115CEF8612AC0E494D03C9 * L_105 = ___reader0;
		IL2CPP_RUNTIME_CLASS_INIT(ES3Type_bool_t8F309F7B9CC735FF1DEE68081B6E3CAB367745F4_il2cpp_TypeInfo_var);
		ES3Type_t8FBECB7AE75168648B9524E0C2A38DAD4555421D * L_106 = ((ES3Type_bool_t8F309F7B9CC735FF1DEE68081B6E3CAB367745F4_StaticFields*)il2cpp_codegen_static_fields_for(ES3Type_bool_t8F309F7B9CC735FF1DEE68081B6E3CAB367745F4_il2cpp_TypeInfo_var))->get_Instance_12();
		NullCheck((ES3Reader_t2780AF8AA61DA2A817115CEF8612AC0E494D03C9 *)L_105);
		bool L_107;
		L_107 = GenericVirtFuncInvoker1< bool, ES3Type_t8FBECB7AE75168648B9524E0C2A38DAD4555421D * >::Invoke(ES3Reader_Read_TisBoolean_t07D1E3F34E4813023D64F584DFF7B34C9D922F37_mC6D1B158268FF9B97822FF9F5B37FB1723FEDA22_RuntimeMethod_var, (ES3Reader_t2780AF8AA61DA2A817115CEF8612AC0E494D03C9 *)L_105, (ES3Type_t8FBECB7AE75168648B9524E0C2A38DAD4555421D *)L_106);
		ShapeModule_set_useMeshColors_m071D000F330805B1EBCF09B40AC4EB9942EB9F57((ShapeModule_t3A89D143F5CAF357ECCE8B4A4F2BBD57816F98CA *)(ShapeModule_t3A89D143F5CAF357ECCE8B4A4F2BBD57816F98CA *)(&V_0), (bool)L_107, /*hidden argument*/NULL);
		// break;
		goto IL_042c;
	}

IL_03fe:
	{
		// instance.normalOffset = reader.Read<System.Single>(ES3Type_float.Instance);
		ES3Reader_t2780AF8AA61DA2A817115CEF8612AC0E494D03C9 * L_108 = ___reader0;
		IL2CPP_RUNTIME_CLASS_INIT(ES3Type_float_tF86B773C86731BD9AD79448B860BBB178FE77644_il2cpp_TypeInfo_var);
		ES3Type_t8FBECB7AE75168648B9524E0C2A38DAD4555421D * L_109 = ((ES3Type_float_tF86B773C86731BD9AD79448B860BBB178FE77644_StaticFields*)il2cpp_codegen_static_fields_for(ES3Type_float_tF86B773C86731BD9AD79448B860BBB178FE77644_il2cpp_TypeInfo_var))->get_Instance_12();
		NullCheck((ES3Reader_t2780AF8AA61DA2A817115CEF8612AC0E494D03C9 *)L_108);
		float L_110;
		L_110 = GenericVirtFuncInvoker1< float, ES3Type_t8FBECB7AE75168648B9524E0C2A38DAD4555421D * >::Invoke(ES3Reader_Read_TisSingle_tE07797BA3C98D4CA9B5A19413C19A76688AB899E_m4A0416374498BDA042B8EB21E49B72326D6CE5F4_RuntimeMethod_var, (ES3Reader_t2780AF8AA61DA2A817115CEF8612AC0E494D03C9 *)L_108, (ES3Type_t8FBECB7AE75168648B9524E0C2A38DAD4555421D *)L_109);
		ShapeModule_set_normalOffset_m81A315286BAA5F52AAED6B317734FB03B2DCE9FD((ShapeModule_t3A89D143F5CAF357ECCE8B4A4F2BBD57816F98CA *)(ShapeModule_t3A89D143F5CAF357ECCE8B4A4F2BBD57816F98CA *)(&V_0), (float)L_110, /*hidden argument*/NULL);
		// break;
		goto IL_042c;
	}

IL_0412:
	{
		// instance.arc = reader.Read<System.Single>(ES3Type_float.Instance);
		ES3Reader_t2780AF8AA61DA2A817115CEF8612AC0E494D03C9 * L_111 = ___reader0;
		IL2CPP_RUNTIME_CLASS_INIT(ES3Type_float_tF86B773C86731BD9AD79448B860BBB178FE77644_il2cpp_TypeInfo_var);
		ES3Type_t8FBECB7AE75168648B9524E0C2A38DAD4555421D * L_112 = ((ES3Type_float_tF86B773C86731BD9AD79448B860BBB178FE77644_StaticFields*)il2cpp_codegen_static_fields_for(ES3Type_float_tF86B773C86731BD9AD79448B860BBB178FE77644_il2cpp_TypeInfo_var))->get_Instance_12();
		NullCheck((ES3Reader_t2780AF8AA61DA2A817115CEF8612AC0E494D03C9 *)L_111);
		float L_113;
		L_113 = GenericVirtFuncInvoker1< float, ES3Type_t8FBECB7AE75168648B9524E0C2A38DAD4555421D * >::Invoke(ES3Reader_Read_TisSingle_tE07797BA3C98D4CA9B5A19413C19A76688AB899E_m4A0416374498BDA042B8EB21E49B72326D6CE5F4_RuntimeMethod_var, (ES3Reader_t2780AF8AA61DA2A817115CEF8612AC0E494D03C9 *)L_111, (ES3Type_t8FBECB7AE75168648B9524E0C2A38DAD4555421D *)L_112);
		ShapeModule_set_arc_m4A2578EBD4747DB3D9ED74AB53E488872CFA541F((ShapeModule_t3A89D143F5CAF357ECCE8B4A4F2BBD57816F98CA *)(ShapeModule_t3A89D143F5CAF357ECCE8B4A4F2BBD57816F98CA *)(&V_0), (float)L_113, /*hidden argument*/NULL);
		// break;
		goto IL_042c;
	}

IL_0426:
	{
		// reader.Skip();
		ES3Reader_t2780AF8AA61DA2A817115CEF8612AC0E494D03C9 * L_114 = ___reader0;
		NullCheck((ES3Reader_t2780AF8AA61DA2A817115CEF8612AC0E494D03C9 *)L_114);
		VirtActionInvoker0::Invoke(41 /* System.Void ES3Reader::Skip() */, (ES3Reader_t2780AF8AA61DA2A817115CEF8612AC0E494D03C9 *)L_114);
	}

IL_042c:
	{
		// while((propertyName = reader.ReadPropertyName()) != null)
		ES3Reader_t2780AF8AA61DA2A817115CEF8612AC0E494D03C9 * L_115 = ___reader0;
		NullCheck((ES3Reader_t2780AF8AA61DA2A817115CEF8612AC0E494D03C9 *)L_115);
		String_t* L_116;
		L_116 = VirtFuncInvoker0< String_t* >::Invoke(21 /* System.String ES3Reader::ReadPropertyName() */, (ES3Reader_t2780AF8AA61DA2A817115CEF8612AC0E494D03C9 *)L_115);
		String_t* L_117 = (String_t*)L_116;
		V_1 = (String_t*)L_117;
		if (L_117)
		{
			goto IL_000c;
		}
	}
	{
		// }
		return;
	}
}
// System.Void ES3Types.ES3Type_ShapeModule::ReadInto<UnityEngine.ParticleSystem/TrailModule>(ES3Reader,System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ES3Type_ShapeModule_ReadInto_TisTrailModule_t95D15372971E64A1977B7587ABAA87B1A31EF5C8_mFC322CD0FB30651389A0F1BE5D0639FCC6416751_gshared (ES3Type_ShapeModule_t67010A74D4F69A245D5F06976239CAB4279B5377 * __this, ES3Reader_t2780AF8AA61DA2A817115CEF8612AC0E494D03C9 * ___reader0, RuntimeObject * ___obj1, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ES3Reader_Read_TisBoolean_t07D1E3F34E4813023D64F584DFF7B34C9D922F37_mC6D1B158268FF9B97822FF9F5B37FB1723FEDA22_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ES3Reader_Read_TisInt32_tFDE5F8CD43D10453F6A2E0C77FE48C6CC7009046_m2B74AA6627F5B1D21171D56C42F71DE5A7C1B4A6_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ES3Reader_Read_TisMeshRenderer_tCD983A2F635E12BCB0BAA2E635D96A318757908B_m773CE5481730EBCC6A377F918946EB11B304050A_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ES3Reader_Read_TisMesh_t2F5992DBA650D5862B43D3823ACD997132A57DA6_m65DF5BA41642A39B77979CC49472E4DE7A1660F9_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ES3Reader_Read_TisParticleSystemMeshShapeType_t7C9518403F30CC7AF7F9124FD61EC1187B42EFD2_mF1A19C0F8BBA6E44737F158F3BE4CC478F623F10_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ES3Reader_Read_TisParticleSystemShapeType_t5B09F3A5A637F57DB1B2A6518E214AA2AA53D70C_mAE53212CB1FDDA51CF8CD0D39FCD446087DACA48_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ES3Reader_Read_TisSingle_tE07797BA3C98D4CA9B5A19413C19A76688AB899E_m4A0416374498BDA042B8EB21E49B72326D6CE5F4_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ES3Reader_Read_TisSkinnedMeshRenderer_t126F4D6010E0F4B2685A7817B0A9171805D8F496_m23D6569D5CE7B3E1C67BDB470CDEDEF25A835F25_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ES3Reader_Read_TisVector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E_mBA4CD9D0F45E78BA43FE2DB8EC33CC3A5433DE15_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ES3Type_Vector3_tA9144E81A20D2F28726F02DE1AE6CD3F9C12B54F_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ES3Type_bool_t8F309F7B9CC735FF1DEE68081B6E3CAB367745F4_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ES3Type_float_tF86B773C86731BD9AD79448B860BBB178FE77644_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ES3Type_int_tF64C15D40AD0CC7C15BCD1CEC3C5C6BF837BD167_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ShapeModule_t3A89D143F5CAF357ECCE8B4A4F2BBD57816F98CA_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral01837E2252AC8026A5EA3567A663017A662FBB70);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral1228466552C1791B2019A329AFE94665D441168A);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral60E56797D122AE71D3774956F66C6EEB9EA22C05);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral6686C366F645244186604A3DA4B9A58012A85F1B);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral82BECCAD895076775062861CDB46AADEF913D969);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral8C9F18A4F030B96447955FBBA1A99FFC43B5D8E0);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral8E54BB51E569CB6A8D3C45D8AEF883A1559C1C0E);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral91811EE149061D28B38320E2430CE8888AD6398B);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralBD49F93A7BC78A69E385CEC0E78F434BD2845A17);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralCA1B66E295BD92E9FD3B6C708F09CA69A50BEFD1);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralE8744A8B8BD390EB66CA0CAE2376C973E6904FFB);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralEB0A157666700D8227FD4B66A26FDC02035E89BF);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralED1F119527A0BCA45125EF8E0F719985DA86C0E1);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralF66E9083C67855AB6EBB4B74342E385A72AACE32);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralF9BE17D634D1B07BCDCDA77A87710C946D81307B);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralF9D225733E1D10F9344C755C4A9C0870CD1DE97B);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralFA5EC7168E9633DAAEAA255ECB55030EA60F064F);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralFC341A1966AF28A9A7A26EDFB78ABBF7DE4D0E1F);
		s_Il2CppMethodInitialized = true;
	}
	ShapeModule_t3A89D143F5CAF357ECCE8B4A4F2BBD57816F98CA  V_0;
	memset((&V_0), 0, sizeof(V_0));
	String_t* V_1 = NULL;
	uint32_t V_2 = 0;
	{
		// var instance = (UnityEngine.ParticleSystem.ShapeModule)obj;
		RuntimeObject * L_0 = ___obj1;
		V_0 = (ShapeModule_t3A89D143F5CAF357ECCE8B4A4F2BBD57816F98CA )((*(ShapeModule_t3A89D143F5CAF357ECCE8B4A4F2BBD57816F98CA *)((ShapeModule_t3A89D143F5CAF357ECCE8B4A4F2BBD57816F98CA *)UnBox(L_0, ShapeModule_t3A89D143F5CAF357ECCE8B4A4F2BBD57816F98CA_il2cpp_TypeInfo_var))));
		goto IL_042c;
	}

IL_000c:
	{
		String_t* L_1 = V_1;
		if (!L_1)
		{
			goto IL_0426;
		}
	}
	{
		String_t* L_2 = V_1;
		uint32_t L_3;
		L_3 = U3CPrivateImplementationDetailsU3E_ComputeStringHash_m3ADC1F612F9EE3DD518E6F0023A0DE0EE2B120A7((String_t*)L_2, /*hidden argument*/NULL);
		V_2 = (uint32_t)L_3;
		uint32_t L_4 = V_2;
		if ((!(((uint32_t)L_4) <= ((uint32_t)((int32_t)-2104025999)))))
		{
			goto IL_00b3;
		}
	}
	{
		uint32_t L_5 = V_2;
		if ((!(((uint32_t)L_5) <= ((uint32_t)((int32_t)666576729)))))
		{
			goto IL_006a;
		}
	}
	{
		uint32_t L_6 = V_2;
		if ((!(((uint32_t)L_6) <= ((uint32_t)((int32_t)49525662)))))
		{
			goto IL_004f;
		}
	}
	{
		uint32_t L_7 = V_2;
		if ((((int32_t)L_7) == ((int32_t)((int32_t)24602224))))
		{
			goto IL_024d;
		}
	}
	{
		uint32_t L_8 = V_2;
		if ((((int32_t)L_8) == ((int32_t)((int32_t)49525662))))
		{
			goto IL_013c;
		}
	}
	{
		goto IL_0426;
	}

IL_004f:
	{
		uint32_t L_9 = V_2;
		if ((((int32_t)L_9) == ((int32_t)((int32_t)230313139))))
		{
			goto IL_01a5;
		}
	}
	{
		uint32_t L_10 = V_2;
		if ((((int32_t)L_10) == ((int32_t)((int32_t)666576729))))
		{
			goto IL_01f9;
		}
	}
	{
		goto IL_0426;
	}

IL_006a:
	{
		uint32_t L_11 = V_2;
		if ((!(((uint32_t)L_11) <= ((uint32_t)((int32_t)955488309)))))
		{
			goto IL_008d;
		}
	}
	{
		uint32_t L_12 = V_2;
		if ((((int32_t)L_12) == ((int32_t)((int32_t)923624301))))
		{
			goto IL_0238;
		}
	}
	{
		uint32_t L_13 = V_2;
		if ((((int32_t)L_13) == ((int32_t)((int32_t)955488309))))
		{
			goto IL_028c;
		}
	}
	{
		goto IL_0426;
	}

IL_008d:
	{
		uint32_t L_14 = V_2;
		if ((((int32_t)L_14) == ((int32_t)((int32_t)980363995))))
		{
			goto IL_02a1;
		}
	}
	{
		uint32_t L_15 = V_2;
		if ((((int32_t)L_15) == ((int32_t)((int32_t)985988853))))
		{
			goto IL_017b;
		}
	}
	{
		uint32_t L_16 = V_2;
		if ((((int32_t)L_16) == ((int32_t)((int32_t)-2104025999))))
		{
			goto IL_01e4;
		}
	}
	{
		goto IL_0426;
	}

IL_00b3:
	{
		uint32_t L_17 = V_2;
		if ((!(((uint32_t)L_17) <= ((uint32_t)((int32_t)-1473810612)))))
		{
			goto IL_00f6;
		}
	}
	{
		uint32_t L_18 = V_2;
		if ((!(((uint32_t)L_18) <= ((uint32_t)((int32_t)-1726928010)))))
		{
			goto IL_00db;
		}
	}
	{
		uint32_t L_19 = V_2;
		if ((((int32_t)L_19) == ((int32_t)((int32_t)-2083506667))))
		{
			goto IL_01cf;
		}
	}
	{
		uint32_t L_20 = V_2;
		if ((((int32_t)L_20) == ((int32_t)((int32_t)-1726928010))))
		{
			goto IL_0151;
		}
	}
	{
		goto IL_0426;
	}

IL_00db:
	{
		uint32_t L_21 = V_2;
		if ((((int32_t)L_21) == ((int32_t)((int32_t)-1593786692))))
		{
			goto IL_020e;
		}
	}
	{
		uint32_t L_22 = V_2;
		if ((((int32_t)L_22) == ((int32_t)((int32_t)-1473810612))))
		{
			goto IL_0190;
		}
	}
	{
		goto IL_0426;
	}

IL_00f6:
	{
		uint32_t L_23 = V_2;
		if ((!(((uint32_t)L_23) <= ((uint32_t)((int32_t)-1386986472)))))
		{
			goto IL_0116;
		}
	}
	{
		uint32_t L_24 = V_2;
		if ((((int32_t)L_24) == ((int32_t)((int32_t)-1412039661))))
		{
			goto IL_0166;
		}
	}
	{
		uint32_t L_25 = V_2;
		if ((((int32_t)L_25) == ((int32_t)((int32_t)-1386986472))))
		{
			goto IL_01ba;
		}
	}
	{
		goto IL_0426;
	}

IL_0116:
	{
		uint32_t L_26 = V_2;
		if ((((int32_t)L_26) == ((int32_t)((int32_t)-584064197))))
		{
			goto IL_0223;
		}
	}
	{
		uint32_t L_27 = V_2;
		if ((((int32_t)L_27) == ((int32_t)((int32_t)-473474755))))
		{
			goto IL_0277;
		}
	}
	{
		uint32_t L_28 = V_2;
		if ((((int32_t)L_28) == ((int32_t)((int32_t)-365686981))))
		{
			goto IL_0262;
		}
	}
	{
		goto IL_0426;
	}

IL_013c:
	{
		String_t* L_29 = V_1;
		bool L_30;
		L_30 = String_op_Equality_m50B3548E4AC232558190B0052877B290AA1D436A((String_t*)L_29, (String_t*)_stringLiteralF9D225733E1D10F9344C755C4A9C0870CD1DE97B, /*hidden argument*/NULL);
		if (L_30)
		{
			goto IL_02b6;
		}
	}
	{
		goto IL_0426;
	}

IL_0151:
	{
		String_t* L_31 = V_1;
		bool L_32;
		L_32 = String_op_Equality_m50B3548E4AC232558190B0052877B290AA1D436A((String_t*)L_31, (String_t*)_stringLiteral82BECCAD895076775062861CDB46AADEF913D969, /*hidden argument*/NULL);
		if (L_32)
		{
			goto IL_02cd;
		}
	}
	{
		goto IL_0426;
	}

IL_0166:
	{
		String_t* L_33 = V_1;
		bool L_34;
		L_34 = String_op_Equality_m50B3548E4AC232558190B0052877B290AA1D436A((String_t*)L_33, (String_t*)_stringLiteral1228466552C1791B2019A329AFE94665D441168A, /*hidden argument*/NULL);
		if (L_34)
		{
			goto IL_02df;
		}
	}
	{
		goto IL_0426;
	}

IL_017b:
	{
		String_t* L_35 = V_1;
		bool L_36;
		L_36 = String_op_Equality_m50B3548E4AC232558190B0052877B290AA1D436A((String_t*)L_35, (String_t*)_stringLiteralBD49F93A7BC78A69E385CEC0E78F434BD2845A17, /*hidden argument*/NULL);
		if (L_36)
		{
			goto IL_02f6;
		}
	}
	{
		goto IL_0426;
	}

IL_0190:
	{
		String_t* L_37 = V_1;
		bool L_38;
		L_38 = String_op_Equality_m50B3548E4AC232558190B0052877B290AA1D436A((String_t*)L_37, (String_t*)_stringLiteralED1F119527A0BCA45125EF8E0F719985DA86C0E1, /*hidden argument*/NULL);
		if (L_38)
		{
			goto IL_030d;
		}
	}
	{
		goto IL_0426;
	}

IL_01a5:
	{
		String_t* L_39 = V_1;
		bool L_40;
		L_40 = String_op_Equality_m50B3548E4AC232558190B0052877B290AA1D436A((String_t*)L_39, (String_t*)_stringLiteral8C9F18A4F030B96447955FBBA1A99FFC43B5D8E0, /*hidden argument*/NULL);
		if (L_40)
		{
			goto IL_0324;
		}
	}
	{
		goto IL_0426;
	}

IL_01ba:
	{
		String_t* L_41 = V_1;
		bool L_42;
		L_42 = String_op_Equality_m50B3548E4AC232558190B0052877B290AA1D436A((String_t*)L_41, (String_t*)_stringLiteralFC341A1966AF28A9A7A26EDFB78ABBF7DE4D0E1F, /*hidden argument*/NULL);
		if (L_42)
		{
			goto IL_033b;
		}
	}
	{
		goto IL_0426;
	}

IL_01cf:
	{
		String_t* L_43 = V_1;
		bool L_44;
		L_44 = String_op_Equality_m50B3548E4AC232558190B0052877B290AA1D436A((String_t*)L_43, (String_t*)_stringLiteralE8744A8B8BD390EB66CA0CAE2376C973E6904FFB, /*hidden argument*/NULL);
		if (L_44)
		{
			goto IL_0352;
		}
	}
	{
		goto IL_0426;
	}

IL_01e4:
	{
		String_t* L_45 = V_1;
		bool L_46;
		L_46 = String_op_Equality_m50B3548E4AC232558190B0052877B290AA1D436A((String_t*)L_45, (String_t*)_stringLiteralF9BE17D634D1B07BCDCDA77A87710C946D81307B, /*hidden argument*/NULL);
		if (L_46)
		{
			goto IL_0369;
		}
	}
	{
		goto IL_0426;
	}

IL_01f9:
	{
		String_t* L_47 = V_1;
		bool L_48;
		L_48 = String_op_Equality_m50B3548E4AC232558190B0052877B290AA1D436A((String_t*)L_47, (String_t*)_stringLiteralFA5EC7168E9633DAAEAA255ECB55030EA60F064F, /*hidden argument*/NULL);
		if (L_48)
		{
			goto IL_0380;
		}
	}
	{
		goto IL_0426;
	}

IL_020e:
	{
		String_t* L_49 = V_1;
		bool L_50;
		L_50 = String_op_Equality_m50B3548E4AC232558190B0052877B290AA1D436A((String_t*)L_49, (String_t*)_stringLiteralEB0A157666700D8227FD4B66A26FDC02035E89BF, /*hidden argument*/NULL);
		if (L_50)
		{
			goto IL_0392;
		}
	}
	{
		goto IL_0426;
	}

IL_0223:
	{
		String_t* L_51 = V_1;
		bool L_52;
		L_52 = String_op_Equality_m50B3548E4AC232558190B0052877B290AA1D436A((String_t*)L_51, (String_t*)_stringLiteral8E54BB51E569CB6A8D3C45D8AEF883A1559C1C0E, /*hidden argument*/NULL);
		if (L_52)
		{
			goto IL_03a4;
		}
	}
	{
		goto IL_0426;
	}

IL_0238:
	{
		String_t* L_53 = V_1;
		bool L_54;
		L_54 = String_op_Equality_m50B3548E4AC232558190B0052877B290AA1D436A((String_t*)L_53, (String_t*)_stringLiteral60E56797D122AE71D3774956F66C6EEB9EA22C05, /*hidden argument*/NULL);
		if (L_54)
		{
			goto IL_03b3;
		}
	}
	{
		goto IL_0426;
	}

IL_024d:
	{
		String_t* L_55 = V_1;
		bool L_56;
		L_56 = String_op_Equality_m50B3548E4AC232558190B0052877B290AA1D436A((String_t*)L_55, (String_t*)_stringLiteral01837E2252AC8026A5EA3567A663017A662FBB70, /*hidden argument*/NULL);
		if (L_56)
		{
			goto IL_03c2;
		}
	}
	{
		goto IL_0426;
	}

IL_0262:
	{
		String_t* L_57 = V_1;
		bool L_58;
		L_58 = String_op_Equality_m50B3548E4AC232558190B0052877B290AA1D436A((String_t*)L_57, (String_t*)_stringLiteralF66E9083C67855AB6EBB4B74342E385A72AACE32, /*hidden argument*/NULL);
		if (L_58)
		{
			goto IL_03d6;
		}
	}
	{
		goto IL_0426;
	}

IL_0277:
	{
		String_t* L_59 = V_1;
		bool L_60;
		L_60 = String_op_Equality_m50B3548E4AC232558190B0052877B290AA1D436A((String_t*)L_59, (String_t*)_stringLiteral91811EE149061D28B38320E2430CE8888AD6398B, /*hidden argument*/NULL);
		if (L_60)
		{
			goto IL_03ea;
		}
	}
	{
		goto IL_0426;
	}

IL_028c:
	{
		String_t* L_61 = V_1;
		bool L_62;
		L_62 = String_op_Equality_m50B3548E4AC232558190B0052877B290AA1D436A((String_t*)L_61, (String_t*)_stringLiteral6686C366F645244186604A3DA4B9A58012A85F1B, /*hidden argument*/NULL);
		if (L_62)
		{
			goto IL_03fe;
		}
	}
	{
		goto IL_0426;
	}

IL_02a1:
	{
		String_t* L_63 = V_1;
		bool L_64;
		L_64 = String_op_Equality_m50B3548E4AC232558190B0052877B290AA1D436A((String_t*)L_63, (String_t*)_stringLiteralCA1B66E295BD92E9FD3B6C708F09CA69A50BEFD1, /*hidden argument*/NULL);
		if (L_64)
		{
			goto IL_0412;
		}
	}
	{
		goto IL_0426;
	}

IL_02b6:
	{
		// instance.enabled = reader.Read<System.Boolean>(ES3Type_bool.Instance);
		ES3Reader_t2780AF8AA61DA2A817115CEF8612AC0E494D03C9 * L_65 = ___reader0;
		IL2CPP_RUNTIME_CLASS_INIT(ES3Type_bool_t8F309F7B9CC735FF1DEE68081B6E3CAB367745F4_il2cpp_TypeInfo_var);
		ES3Type_t8FBECB7AE75168648B9524E0C2A38DAD4555421D * L_66 = ((ES3Type_bool_t8F309F7B9CC735FF1DEE68081B6E3CAB367745F4_StaticFields*)il2cpp_codegen_static_fields_for(ES3Type_bool_t8F309F7B9CC735FF1DEE68081B6E3CAB367745F4_il2cpp_TypeInfo_var))->get_Instance_12();
		NullCheck((ES3Reader_t2780AF8AA61DA2A817115CEF8612AC0E494D03C9 *)L_65);
		bool L_67;
		L_67 = GenericVirtFuncInvoker1< bool, ES3Type_t8FBECB7AE75168648B9524E0C2A38DAD4555421D * >::Invoke(ES3Reader_Read_TisBoolean_t07D1E3F34E4813023D64F584DFF7B34C9D922F37_mC6D1B158268FF9B97822FF9F5B37FB1723FEDA22_RuntimeMethod_var, (ES3Reader_t2780AF8AA61DA2A817115CEF8612AC0E494D03C9 *)L_65, (ES3Type_t8FBECB7AE75168648B9524E0C2A38DAD4555421D *)L_66);
		ShapeModule_set_enabled_mF6FE8ED99E482A739C00F894235F4E2CD09B0D1E((ShapeModule_t3A89D143F5CAF357ECCE8B4A4F2BBD57816F98CA *)(ShapeModule_t3A89D143F5CAF357ECCE8B4A4F2BBD57816F98CA *)(&V_0), (bool)L_67, /*hidden argument*/NULL);
		// break;
		goto IL_042c;
	}

IL_02cd:
	{
		// instance.shapeType = reader.Read<UnityEngine.ParticleSystemShapeType>();
		ES3Reader_t2780AF8AA61DA2A817115CEF8612AC0E494D03C9 * L_68 = ___reader0;
		NullCheck((ES3Reader_t2780AF8AA61DA2A817115CEF8612AC0E494D03C9 *)L_68);
		int32_t L_69;
		L_69 = GenericVirtFuncInvoker0< int32_t >::Invoke(ES3Reader_Read_TisParticleSystemShapeType_t5B09F3A5A637F57DB1B2A6518E214AA2AA53D70C_mAE53212CB1FDDA51CF8CD0D39FCD446087DACA48_RuntimeMethod_var, (ES3Reader_t2780AF8AA61DA2A817115CEF8612AC0E494D03C9 *)L_68);
		ShapeModule_set_shapeType_mB772084527742749EB6AD690BAE47215FC71040D((ShapeModule_t3A89D143F5CAF357ECCE8B4A4F2BBD57816F98CA *)(ShapeModule_t3A89D143F5CAF357ECCE8B4A4F2BBD57816F98CA *)(&V_0), (int32_t)L_69, /*hidden argument*/NULL);
		// break;
		goto IL_042c;
	}

IL_02df:
	{
		// instance.randomDirectionAmount = reader.Read<System.Single>(ES3Type_float.Instance);
		ES3Reader_t2780AF8AA61DA2A817115CEF8612AC0E494D03C9 * L_70 = ___reader0;
		IL2CPP_RUNTIME_CLASS_INIT(ES3Type_float_tF86B773C86731BD9AD79448B860BBB178FE77644_il2cpp_TypeInfo_var);
		ES3Type_t8FBECB7AE75168648B9524E0C2A38DAD4555421D * L_71 = ((ES3Type_float_tF86B773C86731BD9AD79448B860BBB178FE77644_StaticFields*)il2cpp_codegen_static_fields_for(ES3Type_float_tF86B773C86731BD9AD79448B860BBB178FE77644_il2cpp_TypeInfo_var))->get_Instance_12();
		NullCheck((ES3Reader_t2780AF8AA61DA2A817115CEF8612AC0E494D03C9 *)L_70);
		float L_72;
		L_72 = GenericVirtFuncInvoker1< float, ES3Type_t8FBECB7AE75168648B9524E0C2A38DAD4555421D * >::Invoke(ES3Reader_Read_TisSingle_tE07797BA3C98D4CA9B5A19413C19A76688AB899E_m4A0416374498BDA042B8EB21E49B72326D6CE5F4_RuntimeMethod_var, (ES3Reader_t2780AF8AA61DA2A817115CEF8612AC0E494D03C9 *)L_70, (ES3Type_t8FBECB7AE75168648B9524E0C2A38DAD4555421D *)L_71);
		ShapeModule_set_randomDirectionAmount_m4E1BB67600D57383945F75F5A179EEEC01A76885((ShapeModule_t3A89D143F5CAF357ECCE8B4A4F2BBD57816F98CA *)(ShapeModule_t3A89D143F5CAF357ECCE8B4A4F2BBD57816F98CA *)(&V_0), (float)L_72, /*hidden argument*/NULL);
		// break;
		goto IL_042c;
	}

IL_02f6:
	{
		// instance.sphericalDirectionAmount = reader.Read<System.Single>(ES3Type_float.Instance);
		ES3Reader_t2780AF8AA61DA2A817115CEF8612AC0E494D03C9 * L_73 = ___reader0;
		IL2CPP_RUNTIME_CLASS_INIT(ES3Type_float_tF86B773C86731BD9AD79448B860BBB178FE77644_il2cpp_TypeInfo_var);
		ES3Type_t8FBECB7AE75168648B9524E0C2A38DAD4555421D * L_74 = ((ES3Type_float_tF86B773C86731BD9AD79448B860BBB178FE77644_StaticFields*)il2cpp_codegen_static_fields_for(ES3Type_float_tF86B773C86731BD9AD79448B860BBB178FE77644_il2cpp_TypeInfo_var))->get_Instance_12();
		NullCheck((ES3Reader_t2780AF8AA61DA2A817115CEF8612AC0E494D03C9 *)L_73);
		float L_75;
		L_75 = GenericVirtFuncInvoker1< float, ES3Type_t8FBECB7AE75168648B9524E0C2A38DAD4555421D * >::Invoke(ES3Reader_Read_TisSingle_tE07797BA3C98D4CA9B5A19413C19A76688AB899E_m4A0416374498BDA042B8EB21E49B72326D6CE5F4_RuntimeMethod_var, (ES3Reader_t2780AF8AA61DA2A817115CEF8612AC0E494D03C9 *)L_73, (ES3Type_t8FBECB7AE75168648B9524E0C2A38DAD4555421D *)L_74);
		ShapeModule_set_sphericalDirectionAmount_m02A9FBFF18AF24B821801DF5D833CA20A569F62B((ShapeModule_t3A89D143F5CAF357ECCE8B4A4F2BBD57816F98CA *)(ShapeModule_t3A89D143F5CAF357ECCE8B4A4F2BBD57816F98CA *)(&V_0), (float)L_75, /*hidden argument*/NULL);
		// break;
		goto IL_042c;
	}

IL_030d:
	{
		// instance.alignToDirection = reader.Read<System.Boolean>(ES3Type_bool.Instance);
		ES3Reader_t2780AF8AA61DA2A817115CEF8612AC0E494D03C9 * L_76 = ___reader0;
		IL2CPP_RUNTIME_CLASS_INIT(ES3Type_bool_t8F309F7B9CC735FF1DEE68081B6E3CAB367745F4_il2cpp_TypeInfo_var);
		ES3Type_t8FBECB7AE75168648B9524E0C2A38DAD4555421D * L_77 = ((ES3Type_bool_t8F309F7B9CC735FF1DEE68081B6E3CAB367745F4_StaticFields*)il2cpp_codegen_static_fields_for(ES3Type_bool_t8F309F7B9CC735FF1DEE68081B6E3CAB367745F4_il2cpp_TypeInfo_var))->get_Instance_12();
		NullCheck((ES3Reader_t2780AF8AA61DA2A817115CEF8612AC0E494D03C9 *)L_76);
		bool L_78;
		L_78 = GenericVirtFuncInvoker1< bool, ES3Type_t8FBECB7AE75168648B9524E0C2A38DAD4555421D * >::Invoke(ES3Reader_Read_TisBoolean_t07D1E3F34E4813023D64F584DFF7B34C9D922F37_mC6D1B158268FF9B97822FF9F5B37FB1723FEDA22_RuntimeMethod_var, (ES3Reader_t2780AF8AA61DA2A817115CEF8612AC0E494D03C9 *)L_76, (ES3Type_t8FBECB7AE75168648B9524E0C2A38DAD4555421D *)L_77);
		ShapeModule_set_alignToDirection_m396A57DCAD5F194E4DDDA0DF9C35E5508E3641BE((ShapeModule_t3A89D143F5CAF357ECCE8B4A4F2BBD57816F98CA *)(ShapeModule_t3A89D143F5CAF357ECCE8B4A4F2BBD57816F98CA *)(&V_0), (bool)L_78, /*hidden argument*/NULL);
		// break;
		goto IL_042c;
	}

IL_0324:
	{
		// instance.radius = reader.Read<System.Single>(ES3Type_float.Instance);
		ES3Reader_t2780AF8AA61DA2A817115CEF8612AC0E494D03C9 * L_79 = ___reader0;
		IL2CPP_RUNTIME_CLASS_INIT(ES3Type_float_tF86B773C86731BD9AD79448B860BBB178FE77644_il2cpp_TypeInfo_var);
		ES3Type_t8FBECB7AE75168648B9524E0C2A38DAD4555421D * L_80 = ((ES3Type_float_tF86B773C86731BD9AD79448B860BBB178FE77644_StaticFields*)il2cpp_codegen_static_fields_for(ES3Type_float_tF86B773C86731BD9AD79448B860BBB178FE77644_il2cpp_TypeInfo_var))->get_Instance_12();
		NullCheck((ES3Reader_t2780AF8AA61DA2A817115CEF8612AC0E494D03C9 *)L_79);
		float L_81;
		L_81 = GenericVirtFuncInvoker1< float, ES3Type_t8FBECB7AE75168648B9524E0C2A38DAD4555421D * >::Invoke(ES3Reader_Read_TisSingle_tE07797BA3C98D4CA9B5A19413C19A76688AB899E_m4A0416374498BDA042B8EB21E49B72326D6CE5F4_RuntimeMethod_var, (ES3Reader_t2780AF8AA61DA2A817115CEF8612AC0E494D03C9 *)L_79, (ES3Type_t8FBECB7AE75168648B9524E0C2A38DAD4555421D *)L_80);
		ShapeModule_set_radius_mFC12B15750268316924771461C09B1A311A16DEA((ShapeModule_t3A89D143F5CAF357ECCE8B4A4F2BBD57816F98CA *)(ShapeModule_t3A89D143F5CAF357ECCE8B4A4F2BBD57816F98CA *)(&V_0), (float)L_81, /*hidden argument*/NULL);
		// break;
		goto IL_042c;
	}

IL_033b:
	{
		// instance.angle = reader.Read<System.Single>(ES3Type_float.Instance);
		ES3Reader_t2780AF8AA61DA2A817115CEF8612AC0E494D03C9 * L_82 = ___reader0;
		IL2CPP_RUNTIME_CLASS_INIT(ES3Type_float_tF86B773C86731BD9AD79448B860BBB178FE77644_il2cpp_TypeInfo_var);
		ES3Type_t8FBECB7AE75168648B9524E0C2A38DAD4555421D * L_83 = ((ES3Type_float_tF86B773C86731BD9AD79448B860BBB178FE77644_StaticFields*)il2cpp_codegen_static_fields_for(ES3Type_float_tF86B773C86731BD9AD79448B860BBB178FE77644_il2cpp_TypeInfo_var))->get_Instance_12();
		NullCheck((ES3Reader_t2780AF8AA61DA2A817115CEF8612AC0E494D03C9 *)L_82);
		float L_84;
		L_84 = GenericVirtFuncInvoker1< float, ES3Type_t8FBECB7AE75168648B9524E0C2A38DAD4555421D * >::Invoke(ES3Reader_Read_TisSingle_tE07797BA3C98D4CA9B5A19413C19A76688AB899E_m4A0416374498BDA042B8EB21E49B72326D6CE5F4_RuntimeMethod_var, (ES3Reader_t2780AF8AA61DA2A817115CEF8612AC0E494D03C9 *)L_82, (ES3Type_t8FBECB7AE75168648B9524E0C2A38DAD4555421D *)L_83);
		ShapeModule_set_angle_m20629BB5FE89F2040960548B45F6EC801B1DB8AA((ShapeModule_t3A89D143F5CAF357ECCE8B4A4F2BBD57816F98CA *)(ShapeModule_t3A89D143F5CAF357ECCE8B4A4F2BBD57816F98CA *)(&V_0), (float)L_84, /*hidden argument*/NULL);
		// break;
		goto IL_042c;
	}

IL_0352:
	{
		// instance.length = reader.Read<System.Single>(ES3Type_float.Instance);
		ES3Reader_t2780AF8AA61DA2A817115CEF8612AC0E494D03C9 * L_85 = ___reader0;
		IL2CPP_RUNTIME_CLASS_INIT(ES3Type_float_tF86B773C86731BD9AD79448B860BBB178FE77644_il2cpp_TypeInfo_var);
		ES3Type_t8FBECB7AE75168648B9524E0C2A38DAD4555421D * L_86 = ((ES3Type_float_tF86B773C86731BD9AD79448B860BBB178FE77644_StaticFields*)il2cpp_codegen_static_fields_for(ES3Type_float_tF86B773C86731BD9AD79448B860BBB178FE77644_il2cpp_TypeInfo_var))->get_Instance_12();
		NullCheck((ES3Reader_t2780AF8AA61DA2A817115CEF8612AC0E494D03C9 *)L_85);
		float L_87;
		L_87 = GenericVirtFuncInvoker1< float, ES3Type_t8FBECB7AE75168648B9524E0C2A38DAD4555421D * >::Invoke(ES3Reader_Read_TisSingle_tE07797BA3C98D4CA9B5A19413C19A76688AB899E_m4A0416374498BDA042B8EB21E49B72326D6CE5F4_RuntimeMethod_var, (ES3Reader_t2780AF8AA61DA2A817115CEF8612AC0E494D03C9 *)L_85, (ES3Type_t8FBECB7AE75168648B9524E0C2A38DAD4555421D *)L_86);
		ShapeModule_set_length_m744975258664B53F38A8B8BE38A86A0FFDD85BC7((ShapeModule_t3A89D143F5CAF357ECCE8B4A4F2BBD57816F98CA *)(ShapeModule_t3A89D143F5CAF357ECCE8B4A4F2BBD57816F98CA *)(&V_0), (float)L_87, /*hidden argument*/NULL);
		// break;
		goto IL_042c;
	}

IL_0369:
	{
		// instance.scale = reader.Read<UnityEngine.Vector3>(ES3Type_Vector3.Instance);
		ES3Reader_t2780AF8AA61DA2A817115CEF8612AC0E494D03C9 * L_88 = ___reader0;
		IL2CPP_RUNTIME_CLASS_INIT(ES3Type_Vector3_tA9144E81A20D2F28726F02DE1AE6CD3F9C12B54F_il2cpp_TypeInfo_var);
		ES3Type_t8FBECB7AE75168648B9524E0C2A38DAD4555421D * L_89 = ((ES3Type_Vector3_tA9144E81A20D2F28726F02DE1AE6CD3F9C12B54F_StaticFields*)il2cpp_codegen_static_fields_for(ES3Type_Vector3_tA9144E81A20D2F28726F02DE1AE6CD3F9C12B54F_il2cpp_TypeInfo_var))->get_Instance_12();
		NullCheck((ES3Reader_t2780AF8AA61DA2A817115CEF8612AC0E494D03C9 *)L_88);
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_90;
		L_90 = GenericVirtFuncInvoker1< Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E , ES3Type_t8FBECB7AE75168648B9524E0C2A38DAD4555421D * >::Invoke(ES3Reader_Read_TisVector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E_mBA4CD9D0F45E78BA43FE2DB8EC33CC3A5433DE15_RuntimeMethod_var, (ES3Reader_t2780AF8AA61DA2A817115CEF8612AC0E494D03C9 *)L_88, (ES3Type_t8FBECB7AE75168648B9524E0C2A38DAD4555421D *)L_89);
		ShapeModule_set_scale_m2951583898F18878E6F238100045072F44AD9158((ShapeModule_t3A89D143F5CAF357ECCE8B4A4F2BBD57816F98CA *)(ShapeModule_t3A89D143F5CAF357ECCE8B4A4F2BBD57816F98CA *)(&V_0), (Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E )L_90, /*hidden argument*/NULL);
		// break;
		goto IL_042c;
	}

IL_0380:
	{
		// instance.meshShapeType = reader.Read<UnityEngine.ParticleSystemMeshShapeType>();
		ES3Reader_t2780AF8AA61DA2A817115CEF8612AC0E494D03C9 * L_91 = ___reader0;
		NullCheck((ES3Reader_t2780AF8AA61DA2A817115CEF8612AC0E494D03C9 *)L_91);
		int32_t L_92;
		L_92 = GenericVirtFuncInvoker0< int32_t >::Invoke(ES3Reader_Read_TisParticleSystemMeshShapeType_t7C9518403F30CC7AF7F9124FD61EC1187B42EFD2_mF1A19C0F8BBA6E44737F158F3BE4CC478F623F10_RuntimeMethod_var, (ES3Reader_t2780AF8AA61DA2A817115CEF8612AC0E494D03C9 *)L_91);
		ShapeModule_set_meshShapeType_m5DAD94B71F2110F45E454C30DE052153129891C2((ShapeModule_t3A89D143F5CAF357ECCE8B4A4F2BBD57816F98CA *)(ShapeModule_t3A89D143F5CAF357ECCE8B4A4F2BBD57816F98CA *)(&V_0), (int32_t)L_92, /*hidden argument*/NULL);
		// break;
		goto IL_042c;
	}

IL_0392:
	{
		// instance.mesh = reader.Read<UnityEngine.Mesh>();
		ES3Reader_t2780AF8AA61DA2A817115CEF8612AC0E494D03C9 * L_93 = ___reader0;
		NullCheck((ES3Reader_t2780AF8AA61DA2A817115CEF8612AC0E494D03C9 *)L_93);
		Mesh_t2F5992DBA650D5862B43D3823ACD997132A57DA6 * L_94;
		L_94 = GenericVirtFuncInvoker0< Mesh_t2F5992DBA650D5862B43D3823ACD997132A57DA6 * >::Invoke(ES3Reader_Read_TisMesh_t2F5992DBA650D5862B43D3823ACD997132A57DA6_m65DF5BA41642A39B77979CC49472E4DE7A1660F9_RuntimeMethod_var, (ES3Reader_t2780AF8AA61DA2A817115CEF8612AC0E494D03C9 *)L_93);
		ShapeModule_set_mesh_mD3E276A9E45442E75AD8A9AA4BD88C9112BD77CA((ShapeModule_t3A89D143F5CAF357ECCE8B4A4F2BBD57816F98CA *)(ShapeModule_t3A89D143F5CAF357ECCE8B4A4F2BBD57816F98CA *)(&V_0), (Mesh_t2F5992DBA650D5862B43D3823ACD997132A57DA6 *)L_94, /*hidden argument*/NULL);
		// break;
		goto IL_042c;
	}

IL_03a4:
	{
		// instance.meshRenderer = reader.Read<UnityEngine.MeshRenderer>();
		ES3Reader_t2780AF8AA61DA2A817115CEF8612AC0E494D03C9 * L_95 = ___reader0;
		NullCheck((ES3Reader_t2780AF8AA61DA2A817115CEF8612AC0E494D03C9 *)L_95);
		MeshRenderer_tCD983A2F635E12BCB0BAA2E635D96A318757908B * L_96;
		L_96 = GenericVirtFuncInvoker0< MeshRenderer_tCD983A2F635E12BCB0BAA2E635D96A318757908B * >::Invoke(ES3Reader_Read_TisMeshRenderer_tCD983A2F635E12BCB0BAA2E635D96A318757908B_m773CE5481730EBCC6A377F918946EB11B304050A_RuntimeMethod_var, (ES3Reader_t2780AF8AA61DA2A817115CEF8612AC0E494D03C9 *)L_95);
		ShapeModule_set_meshRenderer_m334D69AC8C29F5E393732D62BBB3645296614059((ShapeModule_t3A89D143F5CAF357ECCE8B4A4F2BBD57816F98CA *)(ShapeModule_t3A89D143F5CAF357ECCE8B4A4F2BBD57816F98CA *)(&V_0), (MeshRenderer_tCD983A2F635E12BCB0BAA2E635D96A318757908B *)L_96, /*hidden argument*/NULL);
		// break;
		goto IL_042c;
	}

IL_03b3:
	{
		// instance.skinnedMeshRenderer = reader.Read<UnityEngine.SkinnedMeshRenderer>();
		ES3Reader_t2780AF8AA61DA2A817115CEF8612AC0E494D03C9 * L_97 = ___reader0;
		NullCheck((ES3Reader_t2780AF8AA61DA2A817115CEF8612AC0E494D03C9 *)L_97);
		SkinnedMeshRenderer_t126F4D6010E0F4B2685A7817B0A9171805D8F496 * L_98;
		L_98 = GenericVirtFuncInvoker0< SkinnedMeshRenderer_t126F4D6010E0F4B2685A7817B0A9171805D8F496 * >::Invoke(ES3Reader_Read_TisSkinnedMeshRenderer_t126F4D6010E0F4B2685A7817B0A9171805D8F496_m23D6569D5CE7B3E1C67BDB470CDEDEF25A835F25_RuntimeMethod_var, (ES3Reader_t2780AF8AA61DA2A817115CEF8612AC0E494D03C9 *)L_97);
		ShapeModule_set_skinnedMeshRenderer_m9DEF9CD332D3F10BE7D99EFECC0971FB5AE83F56((ShapeModule_t3A89D143F5CAF357ECCE8B4A4F2BBD57816F98CA *)(ShapeModule_t3A89D143F5CAF357ECCE8B4A4F2BBD57816F98CA *)(&V_0), (SkinnedMeshRenderer_t126F4D6010E0F4B2685A7817B0A9171805D8F496 *)L_98, /*hidden argument*/NULL);
		// break;
		goto IL_042c;
	}

IL_03c2:
	{
		// instance.useMeshMaterialIndex = reader.Read<System.Boolean>(ES3Type_bool.Instance);
		ES3Reader_t2780AF8AA61DA2A817115CEF8612AC0E494D03C9 * L_99 = ___reader0;
		IL2CPP_RUNTIME_CLASS_INIT(ES3Type_bool_t8F309F7B9CC735FF1DEE68081B6E3CAB367745F4_il2cpp_TypeInfo_var);
		ES3Type_t8FBECB7AE75168648B9524E0C2A38DAD4555421D * L_100 = ((ES3Type_bool_t8F309F7B9CC735FF1DEE68081B6E3CAB367745F4_StaticFields*)il2cpp_codegen_static_fields_for(ES3Type_bool_t8F309F7B9CC735FF1DEE68081B6E3CAB367745F4_il2cpp_TypeInfo_var))->get_Instance_12();
		NullCheck((ES3Reader_t2780AF8AA61DA2A817115CEF8612AC0E494D03C9 *)L_99);
		bool L_101;
		L_101 = GenericVirtFuncInvoker1< bool, ES3Type_t8FBECB7AE75168648B9524E0C2A38DAD4555421D * >::Invoke(ES3Reader_Read_TisBoolean_t07D1E3F34E4813023D64F584DFF7B34C9D922F37_mC6D1B158268FF9B97822FF9F5B37FB1723FEDA22_RuntimeMethod_var, (ES3Reader_t2780AF8AA61DA2A817115CEF8612AC0E494D03C9 *)L_99, (ES3Type_t8FBECB7AE75168648B9524E0C2A38DAD4555421D *)L_100);
		ShapeModule_set_useMeshMaterialIndex_m6130573C0966ED3B5C590665747305BCEFD3F901((ShapeModule_t3A89D143F5CAF357ECCE8B4A4F2BBD57816F98CA *)(ShapeModule_t3A89D143F5CAF357ECCE8B4A4F2BBD57816F98CA *)(&V_0), (bool)L_101, /*hidden argument*/NULL);
		// break;
		goto IL_042c;
	}

IL_03d6:
	{
		// instance.meshMaterialIndex = reader.Read<System.Int32>(ES3Type_int.Instance);
		ES3Reader_t2780AF8AA61DA2A817115CEF8612AC0E494D03C9 * L_102 = ___reader0;
		IL2CPP_RUNTIME_CLASS_INIT(ES3Type_int_tF64C15D40AD0CC7C15BCD1CEC3C5C6BF837BD167_il2cpp_TypeInfo_var);
		ES3Type_t8FBECB7AE75168648B9524E0C2A38DAD4555421D * L_103 = ((ES3Type_int_tF64C15D40AD0CC7C15BCD1CEC3C5C6BF837BD167_StaticFields*)il2cpp_codegen_static_fields_for(ES3Type_int_tF64C15D40AD0CC7C15BCD1CEC3C5C6BF837BD167_il2cpp_TypeInfo_var))->get_Instance_12();
		NullCheck((ES3Reader_t2780AF8AA61DA2A817115CEF8612AC0E494D03C9 *)L_102);
		int32_t L_104;
		L_104 = GenericVirtFuncInvoker1< int32_t, ES3Type_t8FBECB7AE75168648B9524E0C2A38DAD4555421D * >::Invoke(ES3Reader_Read_TisInt32_tFDE5F8CD43D10453F6A2E0C77FE48C6CC7009046_m2B74AA6627F5B1D21171D56C42F71DE5A7C1B4A6_RuntimeMethod_var, (ES3Reader_t2780AF8AA61DA2A817115CEF8612AC0E494D03C9 *)L_102, (ES3Type_t8FBECB7AE75168648B9524E0C2A38DAD4555421D *)L_103);
		ShapeModule_set_meshMaterialIndex_m1205DDEB353204D5941654FB79164AD5BAF0A59C((ShapeModule_t3A89D143F5CAF357ECCE8B4A4F2BBD57816F98CA *)(ShapeModule_t3A89D143F5CAF357ECCE8B4A4F2BBD57816F98CA *)(&V_0), (int32_t)L_104, /*hidden argument*/NULL);
		// break;
		goto IL_042c;
	}

IL_03ea:
	{
		// instance.useMeshColors = reader.Read<System.Boolean>(ES3Type_bool.Instance);
		ES3Reader_t2780AF8AA61DA2A817115CEF8612AC0E494D03C9 * L_105 = ___reader0;
		IL2CPP_RUNTIME_CLASS_INIT(ES3Type_bool_t8F309F7B9CC735FF1DEE68081B6E3CAB367745F4_il2cpp_TypeInfo_var);
		ES3Type_t8FBECB7AE75168648B9524E0C2A38DAD4555421D * L_106 = ((ES3Type_bool_t8F309F7B9CC735FF1DEE68081B6E3CAB367745F4_StaticFields*)il2cpp_codegen_static_fields_for(ES3Type_bool_t8F309F7B9CC735FF1DEE68081B6E3CAB367745F4_il2cpp_TypeInfo_var))->get_Instance_12();
		NullCheck((ES3Reader_t2780AF8AA61DA2A817115CEF8612AC0E494D03C9 *)L_105);
		bool L_107;
		L_107 = GenericVirtFuncInvoker1< bool, ES3Type_t8FBECB7AE75168648B9524E0C2A38DAD4555421D * >::Invoke(ES3Reader_Read_TisBoolean_t07D1E3F34E4813023D64F584DFF7B34C9D922F37_mC6D1B158268FF9B97822FF9F5B37FB1723FEDA22_RuntimeMethod_var, (ES3Reader_t2780AF8AA61DA2A817115CEF8612AC0E494D03C9 *)L_105, (ES3Type_t8FBECB7AE75168648B9524E0C2A38DAD4555421D *)L_106);
		ShapeModule_set_useMeshColors_m071D000F330805B1EBCF09B40AC4EB9942EB9F57((ShapeModule_t3A89D143F5CAF357ECCE8B4A4F2BBD57816F98CA *)(ShapeModule_t3A89D143F5CAF357ECCE8B4A4F2BBD57816F98CA *)(&V_0), (bool)L_107, /*hidden argument*/NULL);
		// break;
		goto IL_042c;
	}

IL_03fe:
	{
		// instance.normalOffset = reader.Read<System.Single>(ES3Type_float.Instance);
		ES3Reader_t2780AF8AA61DA2A817115CEF8612AC0E494D03C9 * L_108 = ___reader0;
		IL2CPP_RUNTIME_CLASS_INIT(ES3Type_float_tF86B773C86731BD9AD79448B860BBB178FE77644_il2cpp_TypeInfo_var);
		ES3Type_t8FBECB7AE75168648B9524E0C2A38DAD4555421D * L_109 = ((ES3Type_float_tF86B773C86731BD9AD79448B860BBB178FE77644_StaticFields*)il2cpp_codegen_static_fields_for(ES3Type_float_tF86B773C86731BD9AD79448B860BBB178FE77644_il2cpp_TypeInfo_var))->get_Instance_12();
		NullCheck((ES3Reader_t2780AF8AA61DA2A817115CEF8612AC0E494D03C9 *)L_108);
		float L_110;
		L_110 = GenericVirtFuncInvoker1< float, ES3Type_t8FBECB7AE75168648B9524E0C2A38DAD4555421D * >::Invoke(ES3Reader_Read_TisSingle_tE07797BA3C98D4CA9B5A19413C19A76688AB899E_m4A0416374498BDA042B8EB21E49B72326D6CE5F4_RuntimeMethod_var, (ES3Reader_t2780AF8AA61DA2A817115CEF8612AC0E494D03C9 *)L_108, (ES3Type_t8FBECB7AE75168648B9524E0C2A38DAD4555421D *)L_109);
		ShapeModule_set_normalOffset_m81A315286BAA5F52AAED6B317734FB03B2DCE9FD((ShapeModule_t3A89D143F5CAF357ECCE8B4A4F2BBD57816F98CA *)(ShapeModule_t3A89D143F5CAF357ECCE8B4A4F2BBD57816F98CA *)(&V_0), (float)L_110, /*hidden argument*/NULL);
		// break;
		goto IL_042c;
	}

IL_0412:
	{
		// instance.arc = reader.Read<System.Single>(ES3Type_float.Instance);
		ES3Reader_t2780AF8AA61DA2A817115CEF8612AC0E494D03C9 * L_111 = ___reader0;
		IL2CPP_RUNTIME_CLASS_INIT(ES3Type_float_tF86B773C86731BD9AD79448B860BBB178FE77644_il2cpp_TypeInfo_var);
		ES3Type_t8FBECB7AE75168648B9524E0C2A38DAD4555421D * L_112 = ((ES3Type_float_tF86B773C86731BD9AD79448B860BBB178FE77644_StaticFields*)il2cpp_codegen_static_fields_for(ES3Type_float_tF86B773C86731BD9AD79448B860BBB178FE77644_il2cpp_TypeInfo_var))->get_Instance_12();
		NullCheck((ES3Reader_t2780AF8AA61DA2A817115CEF8612AC0E494D03C9 *)L_111);
		float L_113;
		L_113 = GenericVirtFuncInvoker1< float, ES3Type_t8FBECB7AE75168648B9524E0C2A38DAD4555421D * >::Invoke(ES3Reader_Read_TisSingle_tE07797BA3C98D4CA9B5A19413C19A76688AB899E_m4A0416374498BDA042B8EB21E49B72326D6CE5F4_RuntimeMethod_var, (ES3Reader_t2780AF8AA61DA2A817115CEF8612AC0E494D03C9 *)L_111, (ES3Type_t8FBECB7AE75168648B9524E0C2A38DAD4555421D *)L_112);
		ShapeModule_set_arc_m4A2578EBD4747DB3D9ED74AB53E488872CFA541F((ShapeModule_t3A89D143F5CAF357ECCE8B4A4F2BBD57816F98CA *)(ShapeModule_t3A89D143F5CAF357ECCE8B4A4F2BBD57816F98CA *)(&V_0), (float)L_113, /*hidden argument*/NULL);
		// break;
		goto IL_042c;
	}

IL_0426:
	{
		// reader.Skip();
		ES3Reader_t2780AF8AA61DA2A817115CEF8612AC0E494D03C9 * L_114 = ___reader0;
		NullCheck((ES3Reader_t2780AF8AA61DA2A817115CEF8612AC0E494D03C9 *)L_114);
		VirtActionInvoker0::Invoke(41 /* System.Void ES3Reader::Skip() */, (ES3Reader_t2780AF8AA61DA2A817115CEF8612AC0E494D03C9 *)L_114);
	}

IL_042c:
	{
		// while((propertyName = reader.ReadPropertyName()) != null)
		ES3Reader_t2780AF8AA61DA2A817115CEF8612AC0E494D03C9 * L_115 = ___reader0;
		NullCheck((ES3Reader_t2780AF8AA61DA2A817115CEF8612AC0E494D03C9 *)L_115);
		String_t* L_116;
		L_116 = VirtFuncInvoker0< String_t* >::Invoke(21 /* System.String ES3Reader::ReadPropertyName() */, (ES3Reader_t2780AF8AA61DA2A817115CEF8612AC0E494D03C9 *)L_115);
		String_t* L_117 = (String_t*)L_116;
		V_1 = (String_t*)L_117;
		if (L_117)
		{
			goto IL_000c;
		}
	}
	{
		// }
		return;
	}
}
// System.Void ES3Types.ES3Type_ShapeModule::ReadInto<UnityEngine.ParticleSystem/TriggerModule>(ES3Reader,System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ES3Type_ShapeModule_ReadInto_TisTriggerModule_tA3D5C134281500D269541927233AE024546EA3A8_m41C0C136B31AB35388DF11B7B0A91BC9FCDFEFDD_gshared (ES3Type_ShapeModule_t67010A74D4F69A245D5F06976239CAB4279B5377 * __this, ES3Reader_t2780AF8AA61DA2A817115CEF8612AC0E494D03C9 * ___reader0, RuntimeObject * ___obj1, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ES3Reader_Read_TisBoolean_t07D1E3F34E4813023D64F584DFF7B34C9D922F37_mC6D1B158268FF9B97822FF9F5B37FB1723FEDA22_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ES3Reader_Read_TisInt32_tFDE5F8CD43D10453F6A2E0C77FE48C6CC7009046_m2B74AA6627F5B1D21171D56C42F71DE5A7C1B4A6_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ES3Reader_Read_TisMeshRenderer_tCD983A2F635E12BCB0BAA2E635D96A318757908B_m773CE5481730EBCC6A377F918946EB11B304050A_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ES3Reader_Read_TisMesh_t2F5992DBA650D5862B43D3823ACD997132A57DA6_m65DF5BA41642A39B77979CC49472E4DE7A1660F9_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ES3Reader_Read_TisParticleSystemMeshShapeType_t7C9518403F30CC7AF7F9124FD61EC1187B42EFD2_mF1A19C0F8BBA6E44737F158F3BE4CC478F623F10_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ES3Reader_Read_TisParticleSystemShapeType_t5B09F3A5A637F57DB1B2A6518E214AA2AA53D70C_mAE53212CB1FDDA51CF8CD0D39FCD446087DACA48_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ES3Reader_Read_TisSingle_tE07797BA3C98D4CA9B5A19413C19A76688AB899E_m4A0416374498BDA042B8EB21E49B72326D6CE5F4_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ES3Reader_Read_TisSkinnedMeshRenderer_t126F4D6010E0F4B2685A7817B0A9171805D8F496_m23D6569D5CE7B3E1C67BDB470CDEDEF25A835F25_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ES3Reader_Read_TisVector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E_mBA4CD9D0F45E78BA43FE2DB8EC33CC3A5433DE15_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ES3Type_Vector3_tA9144E81A20D2F28726F02DE1AE6CD3F9C12B54F_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ES3Type_bool_t8F309F7B9CC735FF1DEE68081B6E3CAB367745F4_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ES3Type_float_tF86B773C86731BD9AD79448B860BBB178FE77644_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ES3Type_int_tF64C15D40AD0CC7C15BCD1CEC3C5C6BF837BD167_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ShapeModule_t3A89D143F5CAF357ECCE8B4A4F2BBD57816F98CA_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral01837E2252AC8026A5EA3567A663017A662FBB70);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral1228466552C1791B2019A329AFE94665D441168A);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral60E56797D122AE71D3774956F66C6EEB9EA22C05);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral6686C366F645244186604A3DA4B9A58012A85F1B);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral82BECCAD895076775062861CDB46AADEF913D969);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral8C9F18A4F030B96447955FBBA1A99FFC43B5D8E0);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral8E54BB51E569CB6A8D3C45D8AEF883A1559C1C0E);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral91811EE149061D28B38320E2430CE8888AD6398B);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralBD49F93A7BC78A69E385CEC0E78F434BD2845A17);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralCA1B66E295BD92E9FD3B6C708F09CA69A50BEFD1);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralE8744A8B8BD390EB66CA0CAE2376C973E6904FFB);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralEB0A157666700D8227FD4B66A26FDC02035E89BF);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralED1F119527A0BCA45125EF8E0F719985DA86C0E1);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralF66E9083C67855AB6EBB4B74342E385A72AACE32);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralF9BE17D634D1B07BCDCDA77A87710C946D81307B);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralF9D225733E1D10F9344C755C4A9C0870CD1DE97B);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralFA5EC7168E9633DAAEAA255ECB55030EA60F064F);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralFC341A1966AF28A9A7A26EDFB78ABBF7DE4D0E1F);
		s_Il2CppMethodInitialized = true;
	}
	ShapeModule_t3A89D143F5CAF357ECCE8B4A4F2BBD57816F98CA  V_0;
	memset((&V_0), 0, sizeof(V_0));
	String_t* V_1 = NULL;
	uint32_t V_2 = 0;
	{
		// var instance = (UnityEngine.ParticleSystem.ShapeModule)obj;
		RuntimeObject * L_0 = ___obj1;
		V_0 = (ShapeModule_t3A89D143F5CAF357ECCE8B4A4F2BBD57816F98CA )((*(ShapeModule_t3A89D143F5CAF357ECCE8B4A4F2BBD57816F98CA *)((ShapeModule_t3A89D143F5CAF357ECCE8B4A4F2BBD57816F98CA *)UnBox(L_0, ShapeModule_t3A89D143F5CAF357ECCE8B4A4F2BBD57816F98CA_il2cpp_TypeInfo_var))));
		goto IL_042c;
	}

IL_000c:
	{
		String_t* L_1 = V_1;
		if (!L_1)
		{
			goto IL_0426;
		}
	}
	{
		String_t* L_2 = V_1;
		uint32_t L_3;
		L_3 = U3CPrivateImplementationDetailsU3E_ComputeStringHash_m3ADC1F612F9EE3DD518E6F0023A0DE0EE2B120A7((String_t*)L_2, /*hidden argument*/NULL);
		V_2 = (uint32_t)L_3;
		uint32_t L_4 = V_2;
		if ((!(((uint32_t)L_4) <= ((uint32_t)((int32_t)-2104025999)))))
		{
			goto IL_00b3;
		}
	}
	{
		uint32_t L_5 = V_2;
		if ((!(((uint32_t)L_5) <= ((uint32_t)((int32_t)666576729)))))
		{
			goto IL_006a;
		}
	}
	{
		uint32_t L_6 = V_2;
		if ((!(((uint32_t)L_6) <= ((uint32_t)((int32_t)49525662)))))
		{
			goto IL_004f;
		}
	}
	{
		uint32_t L_7 = V_2;
		if ((((int32_t)L_7) == ((int32_t)((int32_t)24602224))))
		{
			goto IL_024d;
		}
	}
	{
		uint32_t L_8 = V_2;
		if ((((int32_t)L_8) == ((int32_t)((int32_t)49525662))))
		{
			goto IL_013c;
		}
	}
	{
		goto IL_0426;
	}

IL_004f:
	{
		uint32_t L_9 = V_2;
		if ((((int32_t)L_9) == ((int32_t)((int32_t)230313139))))
		{
			goto IL_01a5;
		}
	}
	{
		uint32_t L_10 = V_2;
		if ((((int32_t)L_10) == ((int32_t)((int32_t)666576729))))
		{
			goto IL_01f9;
		}
	}
	{
		goto IL_0426;
	}

IL_006a:
	{
		uint32_t L_11 = V_2;
		if ((!(((uint32_t)L_11) <= ((uint32_t)((int32_t)955488309)))))
		{
			goto IL_008d;
		}
	}
	{
		uint32_t L_12 = V_2;
		if ((((int32_t)L_12) == ((int32_t)((int32_t)923624301))))
		{
			goto IL_0238;
		}
	}
	{
		uint32_t L_13 = V_2;
		if ((((int32_t)L_13) == ((int32_t)((int32_t)955488309))))
		{
			goto IL_028c;
		}
	}
	{
		goto IL_0426;
	}

IL_008d:
	{
		uint32_t L_14 = V_2;
		if ((((int32_t)L_14) == ((int32_t)((int32_t)980363995))))
		{
			goto IL_02a1;
		}
	}
	{
		uint32_t L_15 = V_2;
		if ((((int32_t)L_15) == ((int32_t)((int32_t)985988853))))
		{
			goto IL_017b;
		}
	}
	{
		uint32_t L_16 = V_2;
		if ((((int32_t)L_16) == ((int32_t)((int32_t)-2104025999))))
		{
			goto IL_01e4;
		}
	}
	{
		goto IL_0426;
	}

IL_00b3:
	{
		uint32_t L_17 = V_2;
		if ((!(((uint32_t)L_17) <= ((uint32_t)((int32_t)-1473810612)))))
		{
			goto IL_00f6;
		}
	}
	{
		uint32_t L_18 = V_2;
		if ((!(((uint32_t)L_18) <= ((uint32_t)((int32_t)-1726928010)))))
		{
			goto IL_00db;
		}
	}
	{
		uint32_t L_19 = V_2;
		if ((((int32_t)L_19) == ((int32_t)((int32_t)-2083506667))))
		{
			goto IL_01cf;
		}
	}
	{
		uint32_t L_20 = V_2;
		if ((((int32_t)L_20) == ((int32_t)((int32_t)-1726928010))))
		{
			goto IL_0151;
		}
	}
	{
		goto IL_0426;
	}

IL_00db:
	{
		uint32_t L_21 = V_2;
		if ((((int32_t)L_21) == ((int32_t)((int32_t)-1593786692))))
		{
			goto IL_020e;
		}
	}
	{
		uint32_t L_22 = V_2;
		if ((((int32_t)L_22) == ((int32_t)((int32_t)-1473810612))))
		{
			goto IL_0190;
		}
	}
	{
		goto IL_0426;
	}

IL_00f6:
	{
		uint32_t L_23 = V_2;
		if ((!(((uint32_t)L_23) <= ((uint32_t)((int32_t)-1386986472)))))
		{
			goto IL_0116;
		}
	}
	{
		uint32_t L_24 = V_2;
		if ((((int32_t)L_24) == ((int32_t)((int32_t)-1412039661))))
		{
			goto IL_0166;
		}
	}
	{
		uint32_t L_25 = V_2;
		if ((((int32_t)L_25) == ((int32_t)((int32_t)-1386986472))))
		{
			goto IL_01ba;
		}
	}
	{
		goto IL_0426;
	}

IL_0116:
	{
		uint32_t L_26 = V_2;
		if ((((int32_t)L_26) == ((int32_t)((int32_t)-584064197))))
		{
			goto IL_0223;
		}
	}
	{
		uint32_t L_27 = V_2;
		if ((((int32_t)L_27) == ((int32_t)((int32_t)-473474755))))
		{
			goto IL_0277;
		}
	}
	{
		uint32_t L_28 = V_2;
		if ((((int32_t)L_28) == ((int32_t)((int32_t)-365686981))))
		{
			goto IL_0262;
		}
	}
	{
		goto IL_0426;
	}

IL_013c:
	{
		String_t* L_29 = V_1;
		bool L_30;
		L_30 = String_op_Equality_m50B3548E4AC232558190B0052877B290AA1D436A((String_t*)L_29, (String_t*)_stringLiteralF9D225733E1D10F9344C755C4A9C0870CD1DE97B, /*hidden argument*/NULL);
		if (L_30)
		{
			goto IL_02b6;
		}
	}
	{
		goto IL_0426;
	}

IL_0151:
	{
		String_t* L_31 = V_1;
		bool L_32;
		L_32 = String_op_Equality_m50B3548E4AC232558190B0052877B290AA1D436A((String_t*)L_31, (String_t*)_stringLiteral82BECCAD895076775062861CDB46AADEF913D969, /*hidden argument*/NULL);
		if (L_32)
		{
			goto IL_02cd;
		}
	}
	{
		goto IL_0426;
	}

IL_0166:
	{
		String_t* L_33 = V_1;
		bool L_34;
		L_34 = String_op_Equality_m50B3548E4AC232558190B0052877B290AA1D436A((String_t*)L_33, (String_t*)_stringLiteral1228466552C1791B2019A329AFE94665D441168A, /*hidden argument*/NULL);
		if (L_34)
		{
			goto IL_02df;
		}
	}
	{
		goto IL_0426;
	}

IL_017b:
	{
		String_t* L_35 = V_1;
		bool L_36;
		L_36 = String_op_Equality_m50B3548E4AC232558190B0052877B290AA1D436A((String_t*)L_35, (String_t*)_stringLiteralBD49F93A7BC78A69E385CEC0E78F434BD2845A17, /*hidden argument*/NULL);
		if (L_36)
		{
			goto IL_02f6;
		}
	}
	{
		goto IL_0426;
	}

IL_0190:
	{
		String_t* L_37 = V_1;
		bool L_38;
		L_38 = String_op_Equality_m50B3548E4AC232558190B0052877B290AA1D436A((String_t*)L_37, (String_t*)_stringLiteralED1F119527A0BCA45125EF8E0F719985DA86C0E1, /*hidden argument*/NULL);
		if (L_38)
		{
			goto IL_030d;
		}
	}
	{
		goto IL_0426;
	}

IL_01a5:
	{
		String_t* L_39 = V_1;
		bool L_40;
		L_40 = String_op_Equality_m50B3548E4AC232558190B0052877B290AA1D436A((String_t*)L_39, (String_t*)_stringLiteral8C9F18A4F030B96447955FBBA1A99FFC43B5D8E0, /*hidden argument*/NULL);
		if (L_40)
		{
			goto IL_0324;
		}
	}
	{
		goto IL_0426;
	}

IL_01ba:
	{
		String_t* L_41 = V_1;
		bool L_42;
		L_42 = String_op_Equality_m50B3548E4AC232558190B0052877B290AA1D436A((String_t*)L_41, (String_t*)_stringLiteralFC341A1966AF28A9A7A26EDFB78ABBF7DE4D0E1F, /*hidden argument*/NULL);
		if (L_42)
		{
			goto IL_033b;
		}
	}
	{
		goto IL_0426;
	}

IL_01cf:
	{
		String_t* L_43 = V_1;
		bool L_44;
		L_44 = String_op_Equality_m50B3548E4AC232558190B0052877B290AA1D436A((String_t*)L_43, (String_t*)_stringLiteralE8744A8B8BD390EB66CA0CAE2376C973E6904FFB, /*hidden argument*/NULL);
		if (L_44)
		{
			goto IL_0352;
		}
	}
	{
		goto IL_0426;
	}

IL_01e4:
	{
		String_t* L_45 = V_1;
		bool L_46;
		L_46 = String_op_Equality_m50B3548E4AC232558190B0052877B290AA1D436A((String_t*)L_45, (String_t*)_stringLiteralF9BE17D634D1B07BCDCDA77A87710C946D81307B, /*hidden argument*/NULL);
		if (L_46)
		{
			goto IL_0369;
		}
	}
	{
		goto IL_0426;
	}

IL_01f9:
	{
		String_t* L_47 = V_1;
		bool L_48;
		L_48 = String_op_Equality_m50B3548E4AC232558190B0052877B290AA1D436A((String_t*)L_47, (String_t*)_stringLiteralFA5EC7168E9633DAAEAA255ECB55030EA60F064F, /*hidden argument*/NULL);
		if (L_48)
		{
			goto IL_0380;
		}
	}
	{
		goto IL_0426;
	}

IL_020e:
	{
		String_t* L_49 = V_1;
		bool L_50;
		L_50 = String_op_Equality_m50B3548E4AC232558190B0052877B290AA1D436A((String_t*)L_49, (String_t*)_stringLiteralEB0A157666700D8227FD4B66A26FDC02035E89BF, /*hidden argument*/NULL);
		if (L_50)
		{
			goto IL_0392;
		}
	}
	{
		goto IL_0426;
	}

IL_0223:
	{
		String_t* L_51 = V_1;
		bool L_52;
		L_52 = String_op_Equality_m50B3548E4AC232558190B0052877B290AA1D436A((String_t*)L_51, (String_t*)_stringLiteral8E54BB51E569CB6A8D3C45D8AEF883A1559C1C0E, /*hidden argument*/NULL);
		if (L_52)
		{
			goto IL_03a4;
		}
	}
	{
		goto IL_0426;
	}

IL_0238:
	{
		String_t* L_53 = V_1;
		bool L_54;
		L_54 = String_op_Equality_m50B3548E4AC232558190B0052877B290AA1D436A((String_t*)L_53, (String_t*)_stringLiteral60E56797D122AE71D3774956F66C6EEB9EA22C05, /*hidden argument*/NULL);
		if (L_54)
		{
			goto IL_03b3;
		}
	}
	{
		goto IL_0426;
	}

IL_024d:
	{
		String_t* L_55 = V_1;
		bool L_56;
		L_56 = String_op_Equality_m50B3548E4AC232558190B0052877B290AA1D436A((String_t*)L_55, (String_t*)_stringLiteral01837E2252AC8026A5EA3567A663017A662FBB70, /*hidden argument*/NULL);
		if (L_56)
		{
			goto IL_03c2;
		}
	}
	{
		goto IL_0426;
	}

IL_0262:
	{
		String_t* L_57 = V_1;
		bool L_58;
		L_58 = String_op_Equality_m50B3548E4AC232558190B0052877B290AA1D436A((String_t*)L_57, (String_t*)_stringLiteralF66E9083C67855AB6EBB4B74342E385A72AACE32, /*hidden argument*/NULL);
		if (L_58)
		{
			goto IL_03d6;
		}
	}
	{
		goto IL_0426;
	}

IL_0277:
	{
		String_t* L_59 = V_1;
		bool L_60;
		L_60 = String_op_Equality_m50B3548E4AC232558190B0052877B290AA1D436A((String_t*)L_59, (String_t*)_stringLiteral91811EE149061D28B38320E2430CE8888AD6398B, /*hidden argument*/NULL);
		if (L_60)
		{
			goto IL_03ea;
		}
	}
	{
		goto IL_0426;
	}

IL_028c:
	{
		String_t* L_61 = V_1;
		bool L_62;
		L_62 = String_op_Equality_m50B3548E4AC232558190B0052877B290AA1D436A((String_t*)L_61, (String_t*)_stringLiteral6686C366F645244186604A3DA4B9A58012A85F1B, /*hidden argument*/NULL);
		if (L_62)
		{
			goto IL_03fe;
		}
	}
	{
		goto IL_0426;
	}

IL_02a1:
	{
		String_t* L_63 = V_1;
		bool L_64;
		L_64 = String_op_Equality_m50B3548E4AC232558190B0052877B290AA1D436A((String_t*)L_63, (String_t*)_stringLiteralCA1B66E295BD92E9FD3B6C708F09CA69A50BEFD1, /*hidden argument*/NULL);
		if (L_64)
		{
			goto IL_0412;
		}
	}
	{
		goto IL_0426;
	}

IL_02b6:
	{
		// instance.enabled = reader.Read<System.Boolean>(ES3Type_bool.Instance);
		ES3Reader_t2780AF8AA61DA2A817115CEF8612AC0E494D03C9 * L_65 = ___reader0;
		IL2CPP_RUNTIME_CLASS_INIT(ES3Type_bool_t8F309F7B9CC735FF1DEE68081B6E3CAB367745F4_il2cpp_TypeInfo_var);
		ES3Type_t8FBECB7AE75168648B9524E0C2A38DAD4555421D * L_66 = ((ES3Type_bool_t8F309F7B9CC735FF1DEE68081B6E3CAB367745F4_StaticFields*)il2cpp_codegen_static_fields_for(ES3Type_bool_t8F309F7B9CC735FF1DEE68081B6E3CAB367745F4_il2cpp_TypeInfo_var))->get_Instance_12();
		NullCheck((ES3Reader_t2780AF8AA61DA2A817115CEF8612AC0E494D03C9 *)L_65);
		bool L_67;
		L_67 = GenericVirtFuncInvoker1< bool, ES3Type_t8FBECB7AE75168648B9524E0C2A38DAD4555421D * >::Invoke(ES3Reader_Read_TisBoolean_t07D1E3F34E4813023D64F584DFF7B34C9D922F37_mC6D1B158268FF9B97822FF9F5B37FB1723FEDA22_RuntimeMethod_var, (ES3Reader_t2780AF8AA61DA2A817115CEF8612AC0E494D03C9 *)L_65, (ES3Type_t8FBECB7AE75168648B9524E0C2A38DAD4555421D *)L_66);
		ShapeModule_set_enabled_mF6FE8ED99E482A739C00F894235F4E2CD09B0D1E((ShapeModule_t3A89D143F5CAF357ECCE8B4A4F2BBD57816F98CA *)(ShapeModule_t3A89D143F5CAF357ECCE8B4A4F2BBD57816F98CA *)(&V_0), (bool)L_67, /*hidden argument*/NULL);
		// break;
		goto IL_042c;
	}

IL_02cd:
	{
		// instance.shapeType = reader.Read<UnityEngine.ParticleSystemShapeType>();
		ES3Reader_t2780AF8AA61DA2A817115CEF8612AC0E494D03C9 * L_68 = ___reader0;
		NullCheck((ES3Reader_t2780AF8AA61DA2A817115CEF8612AC0E494D03C9 *)L_68);
		int32_t L_69;
		L_69 = GenericVirtFuncInvoker0< int32_t >::Invoke(ES3Reader_Read_TisParticleSystemShapeType_t5B09F3A5A637F57DB1B2A6518E214AA2AA53D70C_mAE53212CB1FDDA51CF8CD0D39FCD446087DACA48_RuntimeMethod_var, (ES3Reader_t2780AF8AA61DA2A817115CEF8612AC0E494D03C9 *)L_68);
		ShapeModule_set_shapeType_mB772084527742749EB6AD690BAE47215FC71040D((ShapeModule_t3A89D143F5CAF357ECCE8B4A4F2BBD57816F98CA *)(ShapeModule_t3A89D143F5CAF357ECCE8B4A4F2BBD57816F98CA *)(&V_0), (int32_t)L_69, /*hidden argument*/NULL);
		// break;
		goto IL_042c;
	}

IL_02df:
	{
		// instance.randomDirectionAmount = reader.Read<System.Single>(ES3Type_float.Instance);
		ES3Reader_t2780AF8AA61DA2A817115CEF8612AC0E494D03C9 * L_70 = ___reader0;
		IL2CPP_RUNTIME_CLASS_INIT(ES3Type_float_tF86B773C86731BD9AD79448B860BBB178FE77644_il2cpp_TypeInfo_var);
		ES3Type_t8FBECB7AE75168648B9524E0C2A38DAD4555421D * L_71 = ((ES3Type_float_tF86B773C86731BD9AD79448B860BBB178FE77644_StaticFields*)il2cpp_codegen_static_fields_for(ES3Type_float_tF86B773C86731BD9AD79448B860BBB178FE77644_il2cpp_TypeInfo_var))->get_Instance_12();
		NullCheck((ES3Reader_t2780AF8AA61DA2A817115CEF8612AC0E494D03C9 *)L_70);
		float L_72;
		L_72 = GenericVirtFuncInvoker1< float, ES3Type_t8FBECB7AE75168648B9524E0C2A38DAD4555421D * >::Invoke(ES3Reader_Read_TisSingle_tE07797BA3C98D4CA9B5A19413C19A76688AB899E_m4A0416374498BDA042B8EB21E49B72326D6CE5F4_RuntimeMethod_var, (ES3Reader_t2780AF8AA61DA2A817115CEF8612AC0E494D03C9 *)L_70, (ES3Type_t8FBECB7AE75168648B9524E0C2A38DAD4555421D *)L_71);
		ShapeModule_set_randomDirectionAmount_m4E1BB67600D57383945F75F5A179EEEC01A76885((ShapeModule_t3A89D143F5CAF357ECCE8B4A4F2BBD57816F98CA *)(ShapeModule_t3A89D143F5CAF357ECCE8B4A4F2BBD57816F98CA *)(&V_0), (float)L_72, /*hidden argument*/NULL);
		// break;
		goto IL_042c;
	}

IL_02f6:
	{
		// instance.sphericalDirectionAmount = reader.Read<System.Single>(ES3Type_float.Instance);
		ES3Reader_t2780AF8AA61DA2A817115CEF8612AC0E494D03C9 * L_73 = ___reader0;
		IL2CPP_RUNTIME_CLASS_INIT(ES3Type_float_tF86B773C86731BD9AD79448B860BBB178FE77644_il2cpp_TypeInfo_var);
		ES3Type_t8FBECB7AE75168648B9524E0C2A38DAD4555421D * L_74 = ((ES3Type_float_tF86B773C86731BD9AD79448B860BBB178FE77644_StaticFields*)il2cpp_codegen_static_fields_for(ES3Type_float_tF86B773C86731BD9AD79448B860BBB178FE77644_il2cpp_TypeInfo_var))->get_Instance_12();
		NullCheck((ES3Reader_t2780AF8AA61DA2A817115CEF8612AC0E494D03C9 *)L_73);
		float L_75;
		L_75 = GenericVirtFuncInvoker1< float, ES3Type_t8FBECB7AE75168648B9524E0C2A38DAD4555421D * >::Invoke(ES3Reader_Read_TisSingle_tE07797BA3C98D4CA9B5A19413C19A76688AB899E_m4A0416374498BDA042B8EB21E49B72326D6CE5F4_RuntimeMethod_var, (ES3Reader_t2780AF8AA61DA2A817115CEF8612AC0E494D03C9 *)L_73, (ES3Type_t8FBECB7AE75168648B9524E0C2A38DAD4555421D *)L_74);
		ShapeModule_set_sphericalDirectionAmount_m02A9FBFF18AF24B821801DF5D833CA20A569F62B((ShapeModule_t3A89D143F5CAF357ECCE8B4A4F2BBD57816F98CA *)(ShapeModule_t3A89D143F5CAF357ECCE8B4A4F2BBD57816F98CA *)(&V_0), (float)L_75, /*hidden argument*/NULL);
		// break;
		goto IL_042c;
	}

IL_030d:
	{
		// instance.alignToDirection = reader.Read<System.Boolean>(ES3Type_bool.Instance);
		ES3Reader_t2780AF8AA61DA2A817115CEF8612AC0E494D03C9 * L_76 = ___reader0;
		IL2CPP_RUNTIME_CLASS_INIT(ES3Type_bool_t8F309F7B9CC735FF1DEE68081B6E3CAB367745F4_il2cpp_TypeInfo_var);
		ES3Type_t8FBECB7AE75168648B9524E0C2A38DAD4555421D * L_77 = ((ES3Type_bool_t8F309F7B9CC735FF1DEE68081B6E3CAB367745F4_StaticFields*)il2cpp_codegen_static_fields_for(ES3Type_bool_t8F309F7B9CC735FF1DEE68081B6E3CAB367745F4_il2cpp_TypeInfo_var))->get_Instance_12();
		NullCheck((ES3Reader_t2780AF8AA61DA2A817115CEF8612AC0E494D03C9 *)L_76);
		bool L_78;
		L_78 = GenericVirtFuncInvoker1< bool, ES3Type_t8FBECB7AE75168648B9524E0C2A38DAD4555421D * >::Invoke(ES3Reader_Read_TisBoolean_t07D1E3F34E4813023D64F584DFF7B34C9D922F37_mC6D1B158268FF9B97822FF9F5B37FB1723FEDA22_RuntimeMethod_var, (ES3Reader_t2780AF8AA61DA2A817115CEF8612AC0E494D03C9 *)L_76, (ES3Type_t8FBECB7AE75168648B9524E0C2A38DAD4555421D *)L_77);
		ShapeModule_set_alignToDirection_m396A57DCAD5F194E4DDDA0DF9C35E5508E3641BE((ShapeModule_t3A89D143F5CAF357ECCE8B4A4F2BBD57816F98CA *)(ShapeModule_t3A89D143F5CAF357ECCE8B4A4F2BBD57816F98CA *)(&V_0), (bool)L_78, /*hidden argument*/NULL);
		// break;
		goto IL_042c;
	}

IL_0324:
	{
		// instance.radius = reader.Read<System.Single>(ES3Type_float.Instance);
		ES3Reader_t2780AF8AA61DA2A817115CEF8612AC0E494D03C9 * L_79 = ___reader0;
		IL2CPP_RUNTIME_CLASS_INIT(ES3Type_float_tF86B773C86731BD9AD79448B860BBB178FE77644_il2cpp_TypeInfo_var);
		ES3Type_t8FBECB7AE75168648B9524E0C2A38DAD4555421D * L_80 = ((ES3Type_float_tF86B773C86731BD9AD79448B860BBB178FE77644_StaticFields*)il2cpp_codegen_static_fields_for(ES3Type_float_tF86B773C86731BD9AD79448B860BBB178FE77644_il2cpp_TypeInfo_var))->get_Instance_12();
		NullCheck((ES3Reader_t2780AF8AA61DA2A817115CEF8612AC0E494D03C9 *)L_79);
		float L_81;
		L_81 = GenericVirtFuncInvoker1< float, ES3Type_t8FBECB7AE75168648B9524E0C2A38DAD4555421D * >::Invoke(ES3Reader_Read_TisSingle_tE07797BA3C98D4CA9B5A19413C19A76688AB899E_m4A0416374498BDA042B8EB21E49B72326D6CE5F4_RuntimeMethod_var, (ES3Reader_t2780AF8AA61DA2A817115CEF8612AC0E494D03C9 *)L_79, (ES3Type_t8FBECB7AE75168648B9524E0C2A38DAD4555421D *)L_80);
		ShapeModule_set_radius_mFC12B15750268316924771461C09B1A311A16DEA((ShapeModule_t3A89D143F5CAF357ECCE8B4A4F2BBD57816F98CA *)(ShapeModule_t3A89D143F5CAF357ECCE8B4A4F2BBD57816F98CA *)(&V_0), (float)L_81, /*hidden argument*/NULL);
		// break;
		goto IL_042c;
	}

IL_033b:
	{
		// instance.angle = reader.Read<System.Single>(ES3Type_float.Instance);
		ES3Reader_t2780AF8AA61DA2A817115CEF8612AC0E494D03C9 * L_82 = ___reader0;
		IL2CPP_RUNTIME_CLASS_INIT(ES3Type_float_tF86B773C86731BD9AD79448B860BBB178FE77644_il2cpp_TypeInfo_var);
		ES3Type_t8FBECB7AE75168648B9524E0C2A38DAD4555421D * L_83 = ((ES3Type_float_tF86B773C86731BD9AD79448B860BBB178FE77644_StaticFields*)il2cpp_codegen_static_fields_for(ES3Type_float_tF86B773C86731BD9AD79448B860BBB178FE77644_il2cpp_TypeInfo_var))->get_Instance_12();
		NullCheck((ES3Reader_t2780AF8AA61DA2A817115CEF8612AC0E494D03C9 *)L_82);
		float L_84;
		L_84 = GenericVirtFuncInvoker1< float, ES3Type_t8FBECB7AE75168648B9524E0C2A38DAD4555421D * >::Invoke(ES3Reader_Read_TisSingle_tE07797BA3C98D4CA9B5A19413C19A76688AB899E_m4A0416374498BDA042B8EB21E49B72326D6CE5F4_RuntimeMethod_var, (ES3Reader_t2780AF8AA61DA2A817115CEF8612AC0E494D03C9 *)L_82, (ES3Type_t8FBECB7AE75168648B9524E0C2A38DAD4555421D *)L_83);
		ShapeModule_set_angle_m20629BB5FE89F2040960548B45F6EC801B1DB8AA((ShapeModule_t3A89D143F5CAF357ECCE8B4A4F2BBD57816F98CA *)(ShapeModule_t3A89D143F5CAF357ECCE8B4A4F2BBD57816F98CA *)(&V_0), (float)L_84, /*hidden argument*/NULL);
		// break;
		goto IL_042c;
	}

IL_0352:
	{
		// instance.length = reader.Read<System.Single>(ES3Type_float.Instance);
		ES3Reader_t2780AF8AA61DA2A817115CEF8612AC0E494D03C9 * L_85 = ___reader0;
		IL2CPP_RUNTIME_CLASS_INIT(ES3Type_float_tF86B773C86731BD9AD79448B860BBB178FE77644_il2cpp_TypeInfo_var);
		ES3Type_t8FBECB7AE75168648B9524E0C2A38DAD4555421D * L_86 = ((ES3Type_float_tF86B773C86731BD9AD79448B860BBB178FE77644_StaticFields*)il2cpp_codegen_static_fields_for(ES3Type_float_tF86B773C86731BD9AD79448B860BBB178FE77644_il2cpp_TypeInfo_var))->get_Instance_12();
		NullCheck((ES3Reader_t2780AF8AA61DA2A817115CEF8612AC0E494D03C9 *)L_85);
		float L_87;
		L_87 = GenericVirtFuncInvoker1< float, ES3Type_t8FBECB7AE75168648B9524E0C2A38DAD4555421D * >::Invoke(ES3Reader_Read_TisSingle_tE07797BA3C98D4CA9B5A19413C19A76688AB899E_m4A0416374498BDA042B8EB21E49B72326D6CE5F4_RuntimeMethod_var, (ES3Reader_t2780AF8AA61DA2A817115CEF8612AC0E494D03C9 *)L_85, (ES3Type_t8FBECB7AE75168648B9524E0C2A38DAD4555421D *)L_86);
		ShapeModule_set_length_m744975258664B53F38A8B8BE38A86A0FFDD85BC7((ShapeModule_t3A89D143F5CAF357ECCE8B4A4F2BBD57816F98CA *)(ShapeModule_t3A89D143F5CAF357ECCE8B4A4F2BBD57816F98CA *)(&V_0), (float)L_87, /*hidden argument*/NULL);
		// break;
		goto IL_042c;
	}

IL_0369:
	{
		// instance.scale = reader.Read<UnityEngine.Vector3>(ES3Type_Vector3.Instance);
		ES3Reader_t2780AF8AA61DA2A817115CEF8612AC0E494D03C9 * L_88 = ___reader0;
		IL2CPP_RUNTIME_CLASS_INIT(ES3Type_Vector3_tA9144E81A20D2F28726F02DE1AE6CD3F9C12B54F_il2cpp_TypeInfo_var);
		ES3Type_t8FBECB7AE75168648B9524E0C2A38DAD4555421D * L_89 = ((ES3Type_Vector3_tA9144E81A20D2F28726F02DE1AE6CD3F9C12B54F_StaticFields*)il2cpp_codegen_static_fields_for(ES3Type_Vector3_tA9144E81A20D2F28726F02DE1AE6CD3F9C12B54F_il2cpp_TypeInfo_var))->get_Instance_12();
		NullCheck((ES3Reader_t2780AF8AA61DA2A817115CEF8612AC0E494D03C9 *)L_88);
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_90;
		L_90 = GenericVirtFuncInvoker1< Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E , ES3Type_t8FBECB7AE75168648B9524E0C2A38DAD4555421D * >::Invoke(ES3Reader_Read_TisVector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E_mBA4CD9D0F45E78BA43FE2DB8EC33CC3A5433DE15_RuntimeMethod_var, (ES3Reader_t2780AF8AA61DA2A817115CEF8612AC0E494D03C9 *)L_88, (ES3Type_t8FBECB7AE75168648B9524E0C2A38DAD4555421D *)L_89);
		ShapeModule_set_scale_m2951583898F18878E6F238100045072F44AD9158((ShapeModule_t3A89D143F5CAF357ECCE8B4A4F2BBD57816F98CA *)(ShapeModule_t3A89D143F5CAF357ECCE8B4A4F2BBD57816F98CA *)(&V_0), (Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E )L_90, /*hidden argument*/NULL);
		// break;
		goto IL_042c;
	}

IL_0380:
	{
		// instance.meshShapeType = reader.Read<UnityEngine.ParticleSystemMeshShapeType>();
		ES3Reader_t2780AF8AA61DA2A817115CEF8612AC0E494D03C9 * L_91 = ___reader0;
		NullCheck((ES3Reader_t2780AF8AA61DA2A817115CEF8612AC0E494D03C9 *)L_91);
		int32_t L_92;
		L_92 = GenericVirtFuncInvoker0< int32_t >::Invoke(ES3Reader_Read_TisParticleSystemMeshShapeType_t7C9518403F30CC7AF7F9124FD61EC1187B42EFD2_mF1A19C0F8BBA6E44737F158F3BE4CC478F623F10_RuntimeMethod_var, (ES3Reader_t2780AF8AA61DA2A817115CEF8612AC0E494D03C9 *)L_91);
		ShapeModule_set_meshShapeType_m5DAD94B71F2110F45E454C30DE052153129891C2((ShapeModule_t3A89D143F5CAF357ECCE8B4A4F2BBD57816F98CA *)(ShapeModule_t3A89D143F5CAF357ECCE8B4A4F2BBD57816F98CA *)(&V_0), (int32_t)L_92, /*hidden argument*/NULL);
		// break;
		goto IL_042c;
	}

IL_0392:
	{
		// instance.mesh = reader.Read<UnityEngine.Mesh>();
		ES3Reader_t2780AF8AA61DA2A817115CEF8612AC0E494D03C9 * L_93 = ___reader0;
		NullCheck((ES3Reader_t2780AF8AA61DA2A817115CEF8612AC0E494D03C9 *)L_93);
		Mesh_t2F5992DBA650D5862B43D3823ACD997132A57DA6 * L_94;
		L_94 = GenericVirtFuncInvoker0< Mesh_t2F5992DBA650D5862B43D3823ACD997132A57DA6 * >::Invoke(ES3Reader_Read_TisMesh_t2F5992DBA650D5862B43D3823ACD997132A57DA6_m65DF5BA41642A39B77979CC49472E4DE7A1660F9_RuntimeMethod_var, (ES3Reader_t2780AF8AA61DA2A817115CEF8612AC0E494D03C9 *)L_93);
		ShapeModule_set_mesh_mD3E276A9E45442E75AD8A9AA4BD88C9112BD77CA((ShapeModule_t3A89D143F5CAF357ECCE8B4A4F2BBD57816F98CA *)(ShapeModule_t3A89D143F5CAF357ECCE8B4A4F2BBD57816F98CA *)(&V_0), (Mesh_t2F5992DBA650D5862B43D3823ACD997132A57DA6 *)L_94, /*hidden argument*/NULL);
		// break;
		goto IL_042c;
	}

IL_03a4:
	{
		// instance.meshRenderer = reader.Read<UnityEngine.MeshRenderer>();
		ES3Reader_t2780AF8AA61DA2A817115CEF8612AC0E494D03C9 * L_95 = ___reader0;
		NullCheck((ES3Reader_t2780AF8AA61DA2A817115CEF8612AC0E494D03C9 *)L_95);
		MeshRenderer_tCD983A2F635E12BCB0BAA2E635D96A318757908B * L_96;
		L_96 = GenericVirtFuncInvoker0< MeshRenderer_tCD983A2F635E12BCB0BAA2E635D96A318757908B * >::Invoke(ES3Reader_Read_TisMeshRenderer_tCD983A2F635E12BCB0BAA2E635D96A318757908B_m773CE5481730EBCC6A377F918946EB11B304050A_RuntimeMethod_var, (ES3Reader_t2780AF8AA61DA2A817115CEF8612AC0E494D03C9 *)L_95);
		ShapeModule_set_meshRenderer_m334D69AC8C29F5E393732D62BBB3645296614059((ShapeModule_t3A89D143F5CAF357ECCE8B4A4F2BBD57816F98CA *)(ShapeModule_t3A89D143F5CAF357ECCE8B4A4F2BBD57816F98CA *)(&V_0), (MeshRenderer_tCD983A2F635E12BCB0BAA2E635D96A318757908B *)L_96, /*hidden argument*/NULL);
		// break;
		goto IL_042c;
	}

IL_03b3:
	{
		// instance.skinnedMeshRenderer = reader.Read<UnityEngine.SkinnedMeshRenderer>();
		ES3Reader_t2780AF8AA61DA2A817115CEF8612AC0E494D03C9 * L_97 = ___reader0;
		NullCheck((ES3Reader_t2780AF8AA61DA2A817115CEF8612AC0E494D03C9 *)L_97);
		SkinnedMeshRenderer_t126F4D6010E0F4B2685A7817B0A9171805D8F496 * L_98;
		L_98 = GenericVirtFuncInvoker0< SkinnedMeshRenderer_t126F4D6010E0F4B2685A7817B0A9171805D8F496 * >::Invoke(ES3Reader_Read_TisSkinnedMeshRenderer_t126F4D6010E0F4B2685A7817B0A9171805D8F496_m23D6569D5CE7B3E1C67BDB470CDEDEF25A835F25_RuntimeMethod_var, (ES3Reader_t2780AF8AA61DA2A817115CEF8612AC0E494D03C9 *)L_97);
		ShapeModule_set_skinnedMeshRenderer_m9DEF9CD332D3F10BE7D99EFECC0971FB5AE83F56((ShapeModule_t3A89D143F5CAF357ECCE8B4A4F2BBD57816F98CA *)(ShapeModule_t3A89D143F5CAF357ECCE8B4A4F2BBD57816F98CA *)(&V_0), (SkinnedMeshRenderer_t126F4D6010E0F4B2685A7817B0A9171805D8F496 *)L_98, /*hidden argument*/NULL);
		// break;
		goto IL_042c;
	}

IL_03c2:
	{
		// instance.useMeshMaterialIndex = reader.Read<System.Boolean>(ES3Type_bool.Instance);
		ES3Reader_t2780AF8AA61DA2A817115CEF8612AC0E494D03C9 * L_99 = ___reader0;
		IL2CPP_RUNTIME_CLASS_INIT(ES3Type_bool_t8F309F7B9CC735FF1DEE68081B6E3CAB367745F4_il2cpp_TypeInfo_var);
		ES3Type_t8FBECB7AE75168648B9524E0C2A38DAD4555421D * L_100 = ((ES3Type_bool_t8F309F7B9CC735FF1DEE68081B6E3CAB367745F4_StaticFields*)il2cpp_codegen_static_fields_for(ES3Type_bool_t8F309F7B9CC735FF1DEE68081B6E3CAB367745F4_il2cpp_TypeInfo_var))->get_Instance_12();
		NullCheck((ES3Reader_t2780AF8AA61DA2A817115CEF8612AC0E494D03C9 *)L_99);
		bool L_101;
		L_101 = GenericVirtFuncInvoker1< bool, ES3Type_t8FBECB7AE75168648B9524E0C2A38DAD4555421D * >::Invoke(ES3Reader_Read_TisBoolean_t07D1E3F34E4813023D64F584DFF7B34C9D922F37_mC6D1B158268FF9B97822FF9F5B37FB1723FEDA22_RuntimeMethod_var, (ES3Reader_t2780AF8AA61DA2A817115CEF8612AC0E494D03C9 *)L_99, (ES3Type_t8FBECB7AE75168648B9524E0C2A38DAD4555421D *)L_100);
		ShapeModule_set_useMeshMaterialIndex_m6130573C0966ED3B5C590665747305BCEFD3F901((ShapeModule_t3A89D143F5CAF357ECCE8B4A4F2BBD57816F98CA *)(ShapeModule_t3A89D143F5CAF357ECCE8B4A4F2BBD57816F98CA *)(&V_0), (bool)L_101, /*hidden argument*/NULL);
		// break;
		goto IL_042c;
	}

IL_03d6:
	{
		// instance.meshMaterialIndex = reader.Read<System.Int32>(ES3Type_int.Instance);
		ES3Reader_t2780AF8AA61DA2A817115CEF8612AC0E494D03C9 * L_102 = ___reader0;
		IL2CPP_RUNTIME_CLASS_INIT(ES3Type_int_tF64C15D40AD0CC7C15BCD1CEC3C5C6BF837BD167_il2cpp_TypeInfo_var);
		ES3Type_t8FBECB7AE75168648B9524E0C2A38DAD4555421D * L_103 = ((ES3Type_int_tF64C15D40AD0CC7C15BCD1CEC3C5C6BF837BD167_StaticFields*)il2cpp_codegen_static_fields_for(ES3Type_int_tF64C15D40AD0CC7C15BCD1CEC3C5C6BF837BD167_il2cpp_TypeInfo_var))->get_Instance_12();
		NullCheck((ES3Reader_t2780AF8AA61DA2A817115CEF8612AC0E494D03C9 *)L_102);
		int32_t L_104;
		L_104 = GenericVirtFuncInvoker1< int32_t, ES3Type_t8FBECB7AE75168648B9524E0C2A38DAD4555421D * >::Invoke(ES3Reader_Read_TisInt32_tFDE5F8CD43D10453F6A2E0C77FE48C6CC7009046_m2B74AA6627F5B1D21171D56C42F71DE5A7C1B4A6_RuntimeMethod_var, (ES3Reader_t2780AF8AA61DA2A817115CEF8612AC0E494D03C9 *)L_102, (ES3Type_t8FBECB7AE75168648B9524E0C2A38DAD4555421D *)L_103);
		ShapeModule_set_meshMaterialIndex_m1205DDEB353204D5941654FB79164AD5BAF0A59C((ShapeModule_t3A89D143F5CAF357ECCE8B4A4F2BBD57816F98CA *)(ShapeModule_t3A89D143F5CAF357ECCE8B4A4F2BBD57816F98CA *)(&V_0), (int32_t)L_104, /*hidden argument*/NULL);
		// break;
		goto IL_042c;
	}

IL_03ea:
	{
		// instance.useMeshColors = reader.Read<System.Boolean>(ES3Type_bool.Instance);
		ES3Reader_t2780AF8AA61DA2A817115CEF8612AC0E494D03C9 * L_105 = ___reader0;
		IL2CPP_RUNTIME_CLASS_INIT(ES3Type_bool_t8F309F7B9CC735FF1DEE68081B6E3CAB367745F4_il2cpp_TypeInfo_var);
		ES3Type_t8FBECB7AE75168648B9524E0C2A38DAD4555421D * L_106 = ((ES3Type_bool_t8F309F7B9CC735FF1DEE68081B6E3CAB367745F4_StaticFields*)il2cpp_codegen_static_fields_for(ES3Type_bool_t8F309F7B9CC735FF1DEE68081B6E3CAB367745F4_il2cpp_TypeInfo_var))->get_Instance_12();
		NullCheck((ES3Reader_t2780AF8AA61DA2A817115CEF8612AC0E494D03C9 *)L_105);
		bool L_107;
		L_107 = GenericVirtFuncInvoker1< bool, ES3Type_t8FBECB7AE75168648B9524E0C2A38DAD4555421D * >::Invoke(ES3Reader_Read_TisBoolean_t07D1E3F34E4813023D64F584DFF7B34C9D922F37_mC6D1B158268FF9B97822FF9F5B37FB1723FEDA22_RuntimeMethod_var, (ES3Reader_t2780AF8AA61DA2A817115CEF8612AC0E494D03C9 *)L_105, (ES3Type_t8FBECB7AE75168648B9524E0C2A38DAD4555421D *)L_106);
		ShapeModule_set_useMeshColors_m071D000F330805B1EBCF09B40AC4EB9942EB9F57((ShapeModule_t3A89D143F5CAF357ECCE8B4A4F2BBD57816F98CA *)(ShapeModule_t3A89D143F5CAF357ECCE8B4A4F2BBD57816F98CA *)(&V_0), (bool)L_107, /*hidden argument*/NULL);
		// break;
		goto IL_042c;
	}

IL_03fe:
	{
		// instance.normalOffset = reader.Read<System.Single>(ES3Type_float.Instance);
		ES3Reader_t2780AF8AA61DA2A817115CEF8612AC0E494D03C9 * L_108 = ___reader0;
		IL2CPP_RUNTIME_CLASS_INIT(ES3Type_float_tF86B773C86731BD9AD79448B860BBB178FE77644_il2cpp_TypeInfo_var);
		ES3Type_t8FBECB7AE75168648B9524E0C2A38DAD4555421D * L_109 = ((ES3Type_float_tF86B773C86731BD9AD79448B860BBB178FE77644_StaticFields*)il2cpp_codegen_static_fields_for(ES3Type_float_tF86B773C86731BD9AD79448B860BBB178FE77644_il2cpp_TypeInfo_var))->get_Instance_12();
		NullCheck((ES3Reader_t2780AF8AA61DA2A817115CEF8612AC0E494D03C9 *)L_108);
		float L_110;
		L_110 = GenericVirtFuncInvoker1< float, ES3Type_t8FBECB7AE75168648B9524E0C2A38DAD4555421D * >::Invoke(ES3Reader_Read_TisSingle_tE07797BA3C98D4CA9B5A19413C19A76688AB899E_m4A0416374498BDA042B8EB21E49B72326D6CE5F4_RuntimeMethod_var, (ES3Reader_t2780AF8AA61DA2A817115CEF8612AC0E494D03C9 *)L_108, (ES3Type_t8FBECB7AE75168648B9524E0C2A38DAD4555421D *)L_109);
		ShapeModule_set_normalOffset_m81A315286BAA5F52AAED6B317734FB03B2DCE9FD((ShapeModule_t3A89D143F5CAF357ECCE8B4A4F2BBD57816F98CA *)(ShapeModule_t3A89D143F5CAF357ECCE8B4A4F2BBD57816F98CA *)(&V_0), (float)L_110, /*hidden argument*/NULL);
		// break;
		goto IL_042c;
	}

IL_0412:
	{
		// instance.arc = reader.Read<System.Single>(ES3Type_float.Instance);
		ES3Reader_t2780AF8AA61DA2A817115CEF8612AC0E494D03C9 * L_111 = ___reader0;
		IL2CPP_RUNTIME_CLASS_INIT(ES3Type_float_tF86B773C86731BD9AD79448B860BBB178FE77644_il2cpp_TypeInfo_var);
		ES3Type_t8FBECB7AE75168648B9524E0C2A38DAD4555421D * L_112 = ((ES3Type_float_tF86B773C86731BD9AD79448B860BBB178FE77644_StaticFields*)il2cpp_codegen_static_fields_for(ES3Type_float_tF86B773C86731BD9AD79448B860BBB178FE77644_il2cpp_TypeInfo_var))->get_Instance_12();
		NullCheck((ES3Reader_t2780AF8AA61DA2A817115CEF8612AC0E494D03C9 *)L_111);
		float L_113;
		L_113 = GenericVirtFuncInvoker1< float, ES3Type_t8FBECB7AE75168648B9524E0C2A38DAD4555421D * >::Invoke(ES3Reader_Read_TisSingle_tE07797BA3C98D4CA9B5A19413C19A76688AB899E_m4A0416374498BDA042B8EB21E49B72326D6CE5F4_RuntimeMethod_var, (ES3Reader_t2780AF8AA61DA2A817115CEF8612AC0E494D03C9 *)L_111, (ES3Type_t8FBECB7AE75168648B9524E0C2A38DAD4555421D *)L_112);
		ShapeModule_set_arc_m4A2578EBD4747DB3D9ED74AB53E488872CFA541F((ShapeModule_t3A89D143F5CAF357ECCE8B4A4F2BBD57816F98CA *)(ShapeModule_t3A89D143F5CAF357ECCE8B4A4F2BBD57816F98CA *)(&V_0), (float)L_113, /*hidden argument*/NULL);
		// break;
		goto IL_042c;
	}

IL_0426:
	{
		// reader.Skip();
		ES3Reader_t2780AF8AA61DA2A817115CEF8612AC0E494D03C9 * L_114 = ___reader0;
		NullCheck((ES3Reader_t2780AF8AA61DA2A817115CEF8612AC0E494D03C9 *)L_114);
		VirtActionInvoker0::Invoke(41 /* System.Void ES3Reader::Skip() */, (ES3Reader_t2780AF8AA61DA2A817115CEF8612AC0E494D03C9 *)L_114);
	}

IL_042c:
	{
		// while((propertyName = reader.ReadPropertyName()) != null)
		ES3Reader_t2780AF8AA61DA2A817115CEF8612AC0E494D03C9 * L_115 = ___reader0;
		NullCheck((ES3Reader_t2780AF8AA61DA2A817115CEF8612AC0E494D03C9 *)L_115);
		String_t* L_116;
		L_116 = VirtFuncInvoker0< String_t* >::Invoke(21 /* System.String ES3Reader::ReadPropertyName() */, (ES3Reader_t2780AF8AA61DA2A817115CEF8612AC0E494D03C9 *)L_115);
		String_t* L_117 = (String_t*)L_116;
		V_1 = (String_t*)L_117;
		if (L_117)
		{
			goto IL_000c;
		}
	}
	{
		// }
		return;
	}
}
// System.Void ES3Types.ES3Type_ShapeModule::ReadInto<UnityEngine.ParticleSystem/VelocityOverLifetimeModule>(ES3Reader,System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ES3Type_ShapeModule_ReadInto_TisVelocityOverLifetimeModule_t582BD438594477516D51E96D99D31C91676A0924_mF4DA15C5EA391F536663C28D7703D7D8038EEDCC_gshared (ES3Type_ShapeModule_t67010A74D4F69A245D5F06976239CAB4279B5377 * __this, ES3Reader_t2780AF8AA61DA2A817115CEF8612AC0E494D03C9 * ___reader0, RuntimeObject * ___obj1, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ES3Reader_Read_TisBoolean_t07D1E3F34E4813023D64F584DFF7B34C9D922F37_mC6D1B158268FF9B97822FF9F5B37FB1723FEDA22_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ES3Reader_Read_TisInt32_tFDE5F8CD43D10453F6A2E0C77FE48C6CC7009046_m2B74AA6627F5B1D21171D56C42F71DE5A7C1B4A6_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ES3Reader_Read_TisMeshRenderer_tCD983A2F635E12BCB0BAA2E635D96A318757908B_m773CE5481730EBCC6A377F918946EB11B304050A_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ES3Reader_Read_TisMesh_t2F5992DBA650D5862B43D3823ACD997132A57DA6_m65DF5BA41642A39B77979CC49472E4DE7A1660F9_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ES3Reader_Read_TisParticleSystemMeshShapeType_t7C9518403F30CC7AF7F9124FD61EC1187B42EFD2_mF1A19C0F8BBA6E44737F158F3BE4CC478F623F10_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ES3Reader_Read_TisParticleSystemShapeType_t5B09F3A5A637F57DB1B2A6518E214AA2AA53D70C_mAE53212CB1FDDA51CF8CD0D39FCD446087DACA48_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ES3Reader_Read_TisSingle_tE07797BA3C98D4CA9B5A19413C19A76688AB899E_m4A0416374498BDA042B8EB21E49B72326D6CE5F4_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ES3Reader_Read_TisSkinnedMeshRenderer_t126F4D6010E0F4B2685A7817B0A9171805D8F496_m23D6569D5CE7B3E1C67BDB470CDEDEF25A835F25_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ES3Reader_Read_TisVector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E_mBA4CD9D0F45E78BA43FE2DB8EC33CC3A5433DE15_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ES3Type_Vector3_tA9144E81A20D2F28726F02DE1AE6CD3F9C12B54F_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ES3Type_bool_t8F309F7B9CC735FF1DEE68081B6E3CAB367745F4_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ES3Type_float_tF86B773C86731BD9AD79448B860BBB178FE77644_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ES3Type_int_tF64C15D40AD0CC7C15BCD1CEC3C5C6BF837BD167_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ShapeModule_t3A89D143F5CAF357ECCE8B4A4F2BBD57816F98CA_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral01837E2252AC8026A5EA3567A663017A662FBB70);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral1228466552C1791B2019A329AFE94665D441168A);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral60E56797D122AE71D3774956F66C6EEB9EA22C05);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral6686C366F645244186604A3DA4B9A58012A85F1B);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral82BECCAD895076775062861CDB46AADEF913D969);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral8C9F18A4F030B96447955FBBA1A99FFC43B5D8E0);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral8E54BB51E569CB6A8D3C45D8AEF883A1559C1C0E);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral91811EE149061D28B38320E2430CE8888AD6398B);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralBD49F93A7BC78A69E385CEC0E78F434BD2845A17);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralCA1B66E295BD92E9FD3B6C708F09CA69A50BEFD1);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralE8744A8B8BD390EB66CA0CAE2376C973E6904FFB);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralEB0A157666700D8227FD4B66A26FDC02035E89BF);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralED1F119527A0BCA45125EF8E0F719985DA86C0E1);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralF66E9083C67855AB6EBB4B74342E385A72AACE32);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralF9BE17D634D1B07BCDCDA77A87710C946D81307B);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralF9D225733E1D10F9344C755C4A9C0870CD1DE97B);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralFA5EC7168E9633DAAEAA255ECB55030EA60F064F);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralFC341A1966AF28A9A7A26EDFB78ABBF7DE4D0E1F);
		s_Il2CppMethodInitialized = true;
	}
	ShapeModule_t3A89D143F5CAF357ECCE8B4A4F2BBD57816F98CA  V_0;
	memset((&V_0), 0, sizeof(V_0));
	String_t* V_1 = NULL;
	uint32_t V_2 = 0;
	{
		// var instance = (UnityEngine.ParticleSystem.ShapeModule)obj;
		RuntimeObject * L_0 = ___obj1;
		V_0 = (ShapeModule_t3A89D143F5CAF357ECCE8B4A4F2BBD57816F98CA )((*(ShapeModule_t3A89D143F5CAF357ECCE8B4A4F2BBD57816F98CA *)((ShapeModule_t3A89D143F5CAF357ECCE8B4A4F2BBD57816F98CA *)UnBox(L_0, ShapeModule_t3A89D143F5CAF357ECCE8B4A4F2BBD57816F98CA_il2cpp_TypeInfo_var))));
		goto IL_042c;
	}

IL_000c:
	{
		String_t* L_1 = V_1;
		if (!L_1)
		{
			goto IL_0426;
		}
	}
	{
		String_t* L_2 = V_1;
		uint32_t L_3;
		L_3 = U3CPrivateImplementationDetailsU3E_ComputeStringHash_m3ADC1F612F9EE3DD518E6F0023A0DE0EE2B120A7((String_t*)L_2, /*hidden argument*/NULL);
		V_2 = (uint32_t)L_3;
		uint32_t L_4 = V_2;
		if ((!(((uint32_t)L_4) <= ((uint32_t)((int32_t)-2104025999)))))
		{
			goto IL_00b3;
		}
	}
	{
		uint32_t L_5 = V_2;
		if ((!(((uint32_t)L_5) <= ((uint32_t)((int32_t)666576729)))))
		{
			goto IL_006a;
		}
	}
	{
		uint32_t L_6 = V_2;
		if ((!(((uint32_t)L_6) <= ((uint32_t)((int32_t)49525662)))))
		{
			goto IL_004f;
		}
	}
	{
		uint32_t L_7 = V_2;
		if ((((int32_t)L_7) == ((int32_t)((int32_t)24602224))))
		{
			goto IL_024d;
		}
	}
	{
		uint32_t L_8 = V_2;
		if ((((int32_t)L_8) == ((int32_t)((int32_t)49525662))))
		{
			goto IL_013c;
		}
	}
	{
		goto IL_0426;
	}

IL_004f:
	{
		uint32_t L_9 = V_2;
		if ((((int32_t)L_9) == ((int32_t)((int32_t)230313139))))
		{
			goto IL_01a5;
		}
	}
	{
		uint32_t L_10 = V_2;
		if ((((int32_t)L_10) == ((int32_t)((int32_t)666576729))))
		{
			goto IL_01f9;
		}
	}
	{
		goto IL_0426;
	}

IL_006a:
	{
		uint32_t L_11 = V_2;
		if ((!(((uint32_t)L_11) <= ((uint32_t)((int32_t)955488309)))))
		{
			goto IL_008d;
		}
	}
	{
		uint32_t L_12 = V_2;
		if ((((int32_t)L_12) == ((int32_t)((int32_t)923624301))))
		{
			goto IL_0238;
		}
	}
	{
		uint32_t L_13 = V_2;
		if ((((int32_t)L_13) == ((int32_t)((int32_t)955488309))))
		{
			goto IL_028c;
		}
	}
	{
		goto IL_0426;
	}

IL_008d:
	{
		uint32_t L_14 = V_2;
		if ((((int32_t)L_14) == ((int32_t)((int32_t)980363995))))
		{
			goto IL_02a1;
		}
	}
	{
		uint32_t L_15 = V_2;
		if ((((int32_t)L_15) == ((int32_t)((int32_t)985988853))))
		{
			goto IL_017b;
		}
	}
	{
		uint32_t L_16 = V_2;
		if ((((int32_t)L_16) == ((int32_t)((int32_t)-2104025999))))
		{
			goto IL_01e4;
		}
	}
	{
		goto IL_0426;
	}

IL_00b3:
	{
		uint32_t L_17 = V_2;
		if ((!(((uint32_t)L_17) <= ((uint32_t)((int32_t)-1473810612)))))
		{
			goto IL_00f6;
		}
	}
	{
		uint32_t L_18 = V_2;
		if ((!(((uint32_t)L_18) <= ((uint32_t)((int32_t)-1726928010)))))
		{
			goto IL_00db;
		}
	}
	{
		uint32_t L_19 = V_2;
		if ((((int32_t)L_19) == ((int32_t)((int32_t)-2083506667))))
		{
			goto IL_01cf;
		}
	}
	{
		uint32_t L_20 = V_2;
		if ((((int32_t)L_20) == ((int32_t)((int32_t)-1726928010))))
		{
			goto IL_0151;
		}
	}
	{
		goto IL_0426;
	}

IL_00db:
	{
		uint32_t L_21 = V_2;
		if ((((int32_t)L_21) == ((int32_t)((int32_t)-1593786692))))
		{
			goto IL_020e;
		}
	}
	{
		uint32_t L_22 = V_2;
		if ((((int32_t)L_22) == ((int32_t)((int32_t)-1473810612))))
		{
			goto IL_0190;
		}
	}
	{
		goto IL_0426;
	}

IL_00f6:
	{
		uint32_t L_23 = V_2;
		if ((!(((uint32_t)L_23) <= ((uint32_t)((int32_t)-1386986472)))))
		{
			goto IL_0116;
		}
	}
	{
		uint32_t L_24 = V_2;
		if ((((int32_t)L_24) == ((int32_t)((int32_t)-1412039661))))
		{
			goto IL_0166;
		}
	}
	{
		uint32_t L_25 = V_2;
		if ((((int32_t)L_25) == ((int32_t)((int32_t)-1386986472))))
		{
			goto IL_01ba;
		}
	}
	{
		goto IL_0426;
	}

IL_0116:
	{
		uint32_t L_26 = V_2;
		if ((((int32_t)L_26) == ((int32_t)((int32_t)-584064197))))
		{
			goto IL_0223;
		}
	}
	{
		uint32_t L_27 = V_2;
		if ((((int32_t)L_27) == ((int32_t)((int32_t)-473474755))))
		{
			goto IL_0277;
		}
	}
	{
		uint32_t L_28 = V_2;
		if ((((int32_t)L_28) == ((int32_t)((int32_t)-365686981))))
		{
			goto IL_0262;
		}
	}
	{
		goto IL_0426;
	}

IL_013c:
	{
		String_t* L_29 = V_1;
		bool L_30;
		L_30 = String_op_Equality_m50B3548E4AC232558190B0052877B290AA1D436A((String_t*)L_29, (String_t*)_stringLiteralF9D225733E1D10F9344C755C4A9C0870CD1DE97B, /*hidden argument*/NULL);
		if (L_30)
		{
			goto IL_02b6;
		}
	}
	{
		goto IL_0426;
	}

IL_0151:
	{
		String_t* L_31 = V_1;
		bool L_32;
		L_32 = String_op_Equality_m50B3548E4AC232558190B0052877B290AA1D436A((String_t*)L_31, (String_t*)_stringLiteral82BECCAD895076775062861CDB46AADEF913D969, /*hidden argument*/NULL);
		if (L_32)
		{
			goto IL_02cd;
		}
	}
	{
		goto IL_0426;
	}

IL_0166:
	{
		String_t* L_33 = V_1;
		bool L_34;
		L_34 = String_op_Equality_m50B3548E4AC232558190B0052877B290AA1D436A((String_t*)L_33, (String_t*)_stringLiteral1228466552C1791B2019A329AFE94665D441168A, /*hidden argument*/NULL);
		if (L_34)
		{
			goto IL_02df;
		}
	}
	{
		goto IL_0426;
	}

IL_017b:
	{
		String_t* L_35 = V_1;
		bool L_36;
		L_36 = String_op_Equality_m50B3548E4AC232558190B0052877B290AA1D436A((String_t*)L_35, (String_t*)_stringLiteralBD49F93A7BC78A69E385CEC0E78F434BD2845A17, /*hidden argument*/NULL);
		if (L_36)
		{
			goto IL_02f6;
		}
	}
	{
		goto IL_0426;
	}

IL_0190:
	{
		String_t* L_37 = V_1;
		bool L_38;
		L_38 = String_op_Equality_m50B3548E4AC232558190B0052877B290AA1D436A((String_t*)L_37, (String_t*)_stringLiteralED1F119527A0BCA45125EF8E0F719985DA86C0E1, /*hidden argument*/NULL);
		if (L_38)
		{
			goto IL_030d;
		}
	}
	{
		goto IL_0426;
	}

IL_01a5:
	{
		String_t* L_39 = V_1;
		bool L_40;
		L_40 = String_op_Equality_m50B3548E4AC232558190B0052877B290AA1D436A((String_t*)L_39, (String_t*)_stringLiteral8C9F18A4F030B96447955FBBA1A99FFC43B5D8E0, /*hidden argument*/NULL);
		if (L_40)
		{
			goto IL_0324;
		}
	}
	{
		goto IL_0426;
	}

IL_01ba:
	{
		String_t* L_41 = V_1;
		bool L_42;
		L_42 = String_op_Equality_m50B3548E4AC232558190B0052877B290AA1D436A((String_t*)L_41, (String_t*)_stringLiteralFC341A1966AF28A9A7A26EDFB78ABBF7DE4D0E1F, /*hidden argument*/NULL);
		if (L_42)
		{
			goto IL_033b;
		}
	}
	{
		goto IL_0426;
	}

IL_01cf:
	{
		String_t* L_43 = V_1;
		bool L_44;
		L_44 = String_op_Equality_m50B3548E4AC232558190B0052877B290AA1D436A((String_t*)L_43, (String_t*)_stringLiteralE8744A8B8BD390EB66CA0CAE2376C973E6904FFB, /*hidden argument*/NULL);
		if (L_44)
		{
			goto IL_0352;
		}
	}
	{
		goto IL_0426;
	}

IL_01e4:
	{
		String_t* L_45 = V_1;
		bool L_46;
		L_46 = String_op_Equality_m50B3548E4AC232558190B0052877B290AA1D436A((String_t*)L_45, (String_t*)_stringLiteralF9BE17D634D1B07BCDCDA77A87710C946D81307B, /*hidden argument*/NULL);
		if (L_46)
		{
			goto IL_0369;
		}
	}
	{
		goto IL_0426;
	}

IL_01f9:
	{
		String_t* L_47 = V_1;
		bool L_48;
		L_48 = String_op_Equality_m50B3548E4AC232558190B0052877B290AA1D436A((String_t*)L_47, (String_t*)_stringLiteralFA5EC7168E9633DAAEAA255ECB55030EA60F064F, /*hidden argument*/NULL);
		if (L_48)
		{
			goto IL_0380;
		}
	}
	{
		goto IL_0426;
	}

IL_020e:
	{
		String_t* L_49 = V_1;
		bool L_50;
		L_50 = String_op_Equality_m50B3548E4AC232558190B0052877B290AA1D436A((String_t*)L_49, (String_t*)_stringLiteralEB0A157666700D8227FD4B66A26FDC02035E89BF, /*hidden argument*/NULL);
		if (L_50)
		{
			goto IL_0392;
		}
	}
	{
		goto IL_0426;
	}

IL_0223:
	{
		String_t* L_51 = V_1;
		bool L_52;
		L_52 = String_op_Equality_m50B3548E4AC232558190B0052877B290AA1D436A((String_t*)L_51, (String_t*)_stringLiteral8E54BB51E569CB6A8D3C45D8AEF883A1559C1C0E, /*hidden argument*/NULL);
		if (L_52)
		{
			goto IL_03a4;
		}
	}
	{
		goto IL_0426;
	}

IL_0238:
	{
		String_t* L_53 = V_1;
		bool L_54;
		L_54 = String_op_Equality_m50B3548E4AC232558190B0052877B290AA1D436A((String_t*)L_53, (String_t*)_stringLiteral60E56797D122AE71D3774956F66C6EEB9EA22C05, /*hidden argument*/NULL);
		if (L_54)
		{
			goto IL_03b3;
		}
	}
	{
		goto IL_0426;
	}

IL_024d:
	{
		String_t* L_55 = V_1;
		bool L_56;
		L_56 = String_op_Equality_m50B3548E4AC232558190B0052877B290AA1D436A((String_t*)L_55, (String_t*)_stringLiteral01837E2252AC8026A5EA3567A663017A662FBB70, /*hidden argument*/NULL);
		if (L_56)
		{
			goto IL_03c2;
		}
	}
	{
		goto IL_0426;
	}

IL_0262:
	{
		String_t* L_57 = V_1;
		bool L_58;
		L_58 = String_op_Equality_m50B3548E4AC232558190B0052877B290AA1D436A((String_t*)L_57, (String_t*)_stringLiteralF66E9083C67855AB6EBB4B74342E385A72AACE32, /*hidden argument*/NULL);
		if (L_58)
		{
			goto IL_03d6;
		}
	}
	{
		goto IL_0426;
	}

IL_0277:
	{
		String_t* L_59 = V_1;
		bool L_60;
		L_60 = String_op_Equality_m50B3548E4AC232558190B0052877B290AA1D436A((String_t*)L_59, (String_t*)_stringLiteral91811EE149061D28B38320E2430CE8888AD6398B, /*hidden argument*/NULL);
		if (L_60)
		{
			goto IL_03ea;
		}
	}
	{
		goto IL_0426;
	}

IL_028c:
	{
		String_t* L_61 = V_1;
		bool L_62;
		L_62 = String_op_Equality_m50B3548E4AC232558190B0052877B290AA1D436A((String_t*)L_61, (String_t*)_stringLiteral6686C366F645244186604A3DA4B9A58012A85F1B, /*hidden argument*/NULL);
		if (L_62)
		{
			goto IL_03fe;
		}
	}
	{
		goto IL_0426;
	}

IL_02a1:
	{
		String_t* L_63 = V_1;
		bool L_64;
		L_64 = String_op_Equality_m50B3548E4AC232558190B0052877B290AA1D436A((String_t*)L_63, (String_t*)_stringLiteralCA1B66E295BD92E9FD3B6C708F09CA69A50BEFD1, /*hidden argument*/NULL);
		if (L_64)
		{
			goto IL_0412;
		}
	}
	{
		goto IL_0426;
	}

IL_02b6:
	{
		// instance.enabled = reader.Read<System.Boolean>(ES3Type_bool.Instance);
		ES3Reader_t2780AF8AA61DA2A817115CEF8612AC0E494D03C9 * L_65 = ___reader0;
		IL2CPP_RUNTIME_CLASS_INIT(ES3Type_bool_t8F309F7B9CC735FF1DEE68081B6E3CAB367745F4_il2cpp_TypeInfo_var);
		ES3Type_t8FBECB7AE75168648B9524E0C2A38DAD4555421D * L_66 = ((ES3Type_bool_t8F309F7B9CC735FF1DEE68081B6E3CAB367745F4_StaticFields*)il2cpp_codegen_static_fields_for(ES3Type_bool_t8F309F7B9CC735FF1DEE68081B6E3CAB367745F4_il2cpp_TypeInfo_var))->get_Instance_12();
		NullCheck((ES3Reader_t2780AF8AA61DA2A817115CEF8612AC0E494D03C9 *)L_65);
		bool L_67;
		L_67 = GenericVirtFuncInvoker1< bool, ES3Type_t8FBECB7AE75168648B9524E0C2A38DAD4555421D * >::Invoke(ES3Reader_Read_TisBoolean_t07D1E3F34E4813023D64F584DFF7B34C9D922F37_mC6D1B158268FF9B97822FF9F5B37FB1723FEDA22_RuntimeMethod_var, (ES3Reader_t2780AF8AA61DA2A817115CEF8612AC0E494D03C9 *)L_65, (ES3Type_t8FBECB7AE75168648B9524E0C2A38DAD4555421D *)L_66);
		ShapeModule_set_enabled_mF6FE8ED99E482A739C00F894235F4E2CD09B0D1E((ShapeModule_t3A89D143F5CAF357ECCE8B4A4F2BBD57816F98CA *)(ShapeModule_t3A89D143F5CAF357ECCE8B4A4F2BBD57816F98CA *)(&V_0), (bool)L_67, /*hidden argument*/NULL);
		// break;
		goto IL_042c;
	}

IL_02cd:
	{
		// instance.shapeType = reader.Read<UnityEngine.ParticleSystemShapeType>();
		ES3Reader_t2780AF8AA61DA2A817115CEF8612AC0E494D03C9 * L_68 = ___reader0;
		NullCheck((ES3Reader_t2780AF8AA61DA2A817115CEF8612AC0E494D03C9 *)L_68);
		int32_t L_69;
		L_69 = GenericVirtFuncInvoker0< int32_t >::Invoke(ES3Reader_Read_TisParticleSystemShapeType_t5B09F3A5A637F57DB1B2A6518E214AA2AA53D70C_mAE53212CB1FDDA51CF8CD0D39FCD446087DACA48_RuntimeMethod_var, (ES3Reader_t2780AF8AA61DA2A817115CEF8612AC0E494D03C9 *)L_68);
		ShapeModule_set_shapeType_mB772084527742749EB6AD690BAE47215FC71040D((ShapeModule_t3A89D143F5CAF357ECCE8B4A4F2BBD57816F98CA *)(ShapeModule_t3A89D143F5CAF357ECCE8B4A4F2BBD57816F98CA *)(&V_0), (int32_t)L_69, /*hidden argument*/NULL);
		// break;
		goto IL_042c;
	}

IL_02df:
	{
		// instance.randomDirectionAmount = reader.Read<System.Single>(ES3Type_float.Instance);
		ES3Reader_t2780AF8AA61DA2A817115CEF8612AC0E494D03C9 * L_70 = ___reader0;
		IL2CPP_RUNTIME_CLASS_INIT(ES3Type_float_tF86B773C86731BD9AD79448B860BBB178FE77644_il2cpp_TypeInfo_var);
		ES3Type_t8FBECB7AE75168648B9524E0C2A38DAD4555421D * L_71 = ((ES3Type_float_tF86B773C86731BD9AD79448B860BBB178FE77644_StaticFields*)il2cpp_codegen_static_fields_for(ES3Type_float_tF86B773C86731BD9AD79448B860BBB178FE77644_il2cpp_TypeInfo_var))->get_Instance_12();
		NullCheck((ES3Reader_t2780AF8AA61DA2A817115CEF8612AC0E494D03C9 *)L_70);
		float L_72;
		L_72 = GenericVirtFuncInvoker1< float, ES3Type_t8FBECB7AE75168648B9524E0C2A38DAD4555421D * >::Invoke(ES3Reader_Read_TisSingle_tE07797BA3C98D4CA9B5A19413C19A76688AB899E_m4A0416374498BDA042B8EB21E49B72326D6CE5F4_RuntimeMethod_var, (ES3Reader_t2780AF8AA61DA2A817115CEF8612AC0E494D03C9 *)L_70, (ES3Type_t8FBECB7AE75168648B9524E0C2A38DAD4555421D *)L_71);
		ShapeModule_set_randomDirectionAmount_m4E1BB67600D57383945F75F5A179EEEC01A76885((ShapeModule_t3A89D143F5CAF357ECCE8B4A4F2BBD57816F98CA *)(ShapeModule_t3A89D143F5CAF357ECCE8B4A4F2BBD57816F98CA *)(&V_0), (float)L_72, /*hidden argument*/NULL);
		// break;
		goto IL_042c;
	}

IL_02f6:
	{
		// instance.sphericalDirectionAmount = reader.Read<System.Single>(ES3Type_float.Instance);
		ES3Reader_t2780AF8AA61DA2A817115CEF8612AC0E494D03C9 * L_73 = ___reader0;
		IL2CPP_RUNTIME_CLASS_INIT(ES3Type_float_tF86B773C86731BD9AD79448B860BBB178FE77644_il2cpp_TypeInfo_var);
		ES3Type_t8FBECB7AE75168648B9524E0C2A38DAD4555421D * L_74 = ((ES3Type_float_tF86B773C86731BD9AD79448B860BBB178FE77644_StaticFields*)il2cpp_codegen_static_fields_for(ES3Type_float_tF86B773C86731BD9AD79448B860BBB178FE77644_il2cpp_TypeInfo_var))->get_Instance_12();
		NullCheck((ES3Reader_t2780AF8AA61DA2A817115CEF8612AC0E494D03C9 *)L_73);
		float L_75;
		L_75 = GenericVirtFuncInvoker1< float, ES3Type_t8FBECB7AE75168648B9524E0C2A38DAD4555421D * >::Invoke(ES3Reader_Read_TisSingle_tE07797BA3C98D4CA9B5A19413C19A76688AB899E_m4A0416374498BDA042B8EB21E49B72326D6CE5F4_RuntimeMethod_var, (ES3Reader_t2780AF8AA61DA2A817115CEF8612AC0E494D03C9 *)L_73, (ES3Type_t8FBECB7AE75168648B9524E0C2A38DAD4555421D *)L_74);
		ShapeModule_set_sphericalDirectionAmount_m02A9FBFF18AF24B821801DF5D833CA20A569F62B((ShapeModule_t3A89D143F5CAF357ECCE8B4A4F2BBD57816F98CA *)(ShapeModule_t3A89D143F5CAF357ECCE8B4A4F2BBD57816F98CA *)(&V_0), (float)L_75, /*hidden argument*/NULL);
		// break;
		goto IL_042c;
	}

IL_030d:
	{
		// instance.alignToDirection = reader.Read<System.Boolean>(ES3Type_bool.Instance);
		ES3Reader_t2780AF8AA61DA2A817115CEF8612AC0E494D03C9 * L_76 = ___reader0;
		IL2CPP_RUNTIME_CLASS_INIT(ES3Type_bool_t8F309F7B9CC735FF1DEE68081B6E3CAB367745F4_il2cpp_TypeInfo_var);
		ES3Type_t8FBECB7AE75168648B9524E0C2A38DAD4555421D * L_77 = ((ES3Type_bool_t8F309F7B9CC735FF1DEE68081B6E3CAB367745F4_StaticFields*)il2cpp_codegen_static_fields_for(ES3Type_bool_t8F309F7B9CC735FF1DEE68081B6E3CAB367745F4_il2cpp_TypeInfo_var))->get_Instance_12();
		NullCheck((ES3Reader_t2780AF8AA61DA2A817115CEF8612AC0E494D03C9 *)L_76);
		bool L_78;
		L_78 = GenericVirtFuncInvoker1< bool, ES3Type_t8FBECB7AE75168648B9524E0C2A38DAD4555421D * >::Invoke(ES3Reader_Read_TisBoolean_t07D1E3F34E4813023D64F584DFF7B34C9D922F37_mC6D1B158268FF9B97822FF9F5B37FB1723FEDA22_RuntimeMethod_var, (ES3Reader_t2780AF8AA61DA2A817115CEF8612AC0E494D03C9 *)L_76, (ES3Type_t8FBECB7AE75168648B9524E0C2A38DAD4555421D *)L_77);
		ShapeModule_set_alignToDirection_m396A57DCAD5F194E4DDDA0DF9C35E5508E3641BE((ShapeModule_t3A89D143F5CAF357ECCE8B4A4F2BBD57816F98CA *)(ShapeModule_t3A89D143F5CAF357ECCE8B4A4F2BBD57816F98CA *)(&V_0), (bool)L_78, /*hidden argument*/NULL);
		// break;
		goto IL_042c;
	}

IL_0324:
	{
		// instance.radius = reader.Read<System.Single>(ES3Type_float.Instance);
		ES3Reader_t2780AF8AA61DA2A817115CEF8612AC0E494D03C9 * L_79 = ___reader0;
		IL2CPP_RUNTIME_CLASS_INIT(ES3Type_float_tF86B773C86731BD9AD79448B860BBB178FE77644_il2cpp_TypeInfo_var);
		ES3Type_t8FBECB7AE75168648B9524E0C2A38DAD4555421D * L_80 = ((ES3Type_float_tF86B773C86731BD9AD79448B860BBB178FE77644_StaticFields*)il2cpp_codegen_static_fields_for(ES3Type_float_tF86B773C86731BD9AD79448B860BBB178FE77644_il2cpp_TypeInfo_var))->get_Instance_12();
		NullCheck((ES3Reader_t2780AF8AA61DA2A817115CEF8612AC0E494D03C9 *)L_79);
		float L_81;
		L_81 = GenericVirtFuncInvoker1< float, ES3Type_t8FBECB7AE75168648B9524E0C2A38DAD4555421D * >::Invoke(ES3Reader_Read_TisSingle_tE07797BA3C98D4CA9B5A19413C19A76688AB899E_m4A0416374498BDA042B8EB21E49B72326D6CE5F4_RuntimeMethod_var, (ES3Reader_t2780AF8AA61DA2A817115CEF8612AC0E494D03C9 *)L_79, (ES3Type_t8FBECB7AE75168648B9524E0C2A38DAD4555421D *)L_80);
		ShapeModule_set_radius_mFC12B15750268316924771461C09B1A311A16DEA((ShapeModule_t3A89D143F5CAF357ECCE8B4A4F2BBD57816F98CA *)(ShapeModule_t3A89D143F5CAF357ECCE8B4A4F2BBD57816F98CA *)(&V_0), (float)L_81, /*hidden argument*/NULL);
		// break;
		goto IL_042c;
	}

IL_033b:
	{
		// instance.angle = reader.Read<System.Single>(ES3Type_float.Instance);
		ES3Reader_t2780AF8AA61DA2A817115CEF8612AC0E494D03C9 * L_82 = ___reader0;
		IL2CPP_RUNTIME_CLASS_INIT(ES3Type_float_tF86B773C86731BD9AD79448B860BBB178FE77644_il2cpp_TypeInfo_var);
		ES3Type_t8FBECB7AE75168648B9524E0C2A38DAD4555421D * L_83 = ((ES3Type_float_tF86B773C86731BD9AD79448B860BBB178FE77644_StaticFields*)il2cpp_codegen_static_fields_for(ES3Type_float_tF86B773C86731BD9AD79448B860BBB178FE77644_il2cpp_TypeInfo_var))->get_Instance_12();
		NullCheck((ES3Reader_t2780AF8AA61DA2A817115CEF8612AC0E494D03C9 *)L_82);
		float L_84;
		L_84 = GenericVirtFuncInvoker1< float, ES3Type_t8FBECB7AE75168648B9524E0C2A38DAD4555421D * >::Invoke(ES3Reader_Read_TisSingle_tE07797BA3C98D4CA9B5A19413C19A76688AB899E_m4A0416374498BDA042B8EB21E49B72326D6CE5F4_RuntimeMethod_var, (ES3Reader_t2780AF8AA61DA2A817115CEF8612AC0E494D03C9 *)L_82, (ES3Type_t8FBECB7AE75168648B9524E0C2A38DAD4555421D *)L_83);
		ShapeModule_set_angle_m20629BB5FE89F2040960548B45F6EC801B1DB8AA((ShapeModule_t3A89D143F5CAF357ECCE8B4A4F2BBD57816F98CA *)(ShapeModule_t3A89D143F5CAF357ECCE8B4A4F2BBD57816F98CA *)(&V_0), (float)L_84, /*hidden argument*/NULL);
		// break;
		goto IL_042c;
	}

IL_0352:
	{
		// instance.length = reader.Read<System.Single>(ES3Type_float.Instance);
		ES3Reader_t2780AF8AA61DA2A817115CEF8612AC0E494D03C9 * L_85 = ___reader0;
		IL2CPP_RUNTIME_CLASS_INIT(ES3Type_float_tF86B773C86731BD9AD79448B860BBB178FE77644_il2cpp_TypeInfo_var);
		ES3Type_t8FBECB7AE75168648B9524E0C2A38DAD4555421D * L_86 = ((ES3Type_float_tF86B773C86731BD9AD79448B860BBB178FE77644_StaticFields*)il2cpp_codegen_static_fields_for(ES3Type_float_tF86B773C86731BD9AD79448B860BBB178FE77644_il2cpp_TypeInfo_var))->get_Instance_12();
		NullCheck((ES3Reader_t2780AF8AA61DA2A817115CEF8612AC0E494D03C9 *)L_85);
		float L_87;
		L_87 = GenericVirtFuncInvoker1< float, ES3Type_t8FBECB7AE75168648B9524E0C2A38DAD4555421D * >::Invoke(ES3Reader_Read_TisSingle_tE07797BA3C98D4CA9B5A19413C19A76688AB899E_m4A0416374498BDA042B8EB21E49B72326D6CE5F4_RuntimeMethod_var, (ES3Reader_t2780AF8AA61DA2A817115CEF8612AC0E494D03C9 *)L_85, (ES3Type_t8FBECB7AE75168648B9524E0C2A38DAD4555421D *)L_86);
		ShapeModule_set_length_m744975258664B53F38A8B8BE38A86A0FFDD85BC7((ShapeModule_t3A89D143F5CAF357ECCE8B4A4F2BBD57816F98CA *)(ShapeModule_t3A89D143F5CAF357ECCE8B4A4F2BBD57816F98CA *)(&V_0), (float)L_87, /*hidden argument*/NULL);
		// break;
		goto IL_042c;
	}

IL_0369:
	{
		// instance.scale = reader.Read<UnityEngine.Vector3>(ES3Type_Vector3.Instance);
		ES3Reader_t2780AF8AA61DA2A817115CEF8612AC0E494D03C9 * L_88 = ___reader0;
		IL2CPP_RUNTIME_CLASS_INIT(ES3Type_Vector3_tA9144E81A20D2F28726F02DE1AE6CD3F9C12B54F_il2cpp_TypeInfo_var);
		ES3Type_t8FBECB7AE75168648B9524E0C2A38DAD4555421D * L_89 = ((ES3Type_Vector3_tA9144E81A20D2F28726F02DE1AE6CD3F9C12B54F_StaticFields*)il2cpp_codegen_static_fields_for(ES3Type_Vector3_tA9144E81A20D2F28726F02DE1AE6CD3F9C12B54F_il2cpp_TypeInfo_var))->get_Instance_12();
		NullCheck((ES3Reader_t2780AF8AA61DA2A817115CEF8612AC0E494D03C9 *)L_88);
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_90;
		L_90 = GenericVirtFuncInvoker1< Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E , ES3Type_t8FBECB7AE75168648B9524E0C2A38DAD4555421D * >::Invoke(ES3Reader_Read_TisVector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E_mBA4CD9D0F45E78BA43FE2DB8EC33CC3A5433DE15_RuntimeMethod_var, (ES3Reader_t2780AF8AA61DA2A817115CEF8612AC0E494D03C9 *)L_88, (ES3Type_t8FBECB7AE75168648B9524E0C2A38DAD4555421D *)L_89);
		ShapeModule_set_scale_m2951583898F18878E6F238100045072F44AD9158((ShapeModule_t3A89D143F5CAF357ECCE8B4A4F2BBD57816F98CA *)(ShapeModule_t3A89D143F5CAF357ECCE8B4A4F2BBD57816F98CA *)(&V_0), (Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E )L_90, /*hidden argument*/NULL);
		// break;
		goto IL_042c;
	}

IL_0380:
	{
		// instance.meshShapeType = reader.Read<UnityEngine.ParticleSystemMeshShapeType>();
		ES3Reader_t2780AF8AA61DA2A817115CEF8612AC0E494D03C9 * L_91 = ___reader0;
		NullCheck((ES3Reader_t2780AF8AA61DA2A817115CEF8612AC0E494D03C9 *)L_91);
		int32_t L_92;
		L_92 = GenericVirtFuncInvoker0< int32_t >::Invoke(ES3Reader_Read_TisParticleSystemMeshShapeType_t7C9518403F30CC7AF7F9124FD61EC1187B42EFD2_mF1A19C0F8BBA6E44737F158F3BE4CC478F623F10_RuntimeMethod_var, (ES3Reader_t2780AF8AA61DA2A817115CEF8612AC0E494D03C9 *)L_91);
		ShapeModule_set_meshShapeType_m5DAD94B71F2110F45E454C30DE052153129891C2((ShapeModule_t3A89D143F5CAF357ECCE8B4A4F2BBD57816F98CA *)(ShapeModule_t3A89D143F5CAF357ECCE8B4A4F2BBD57816F98CA *)(&V_0), (int32_t)L_92, /*hidden argument*/NULL);
		// break;
		goto IL_042c;
	}

IL_0392:
	{
		// instance.mesh = reader.Read<UnityEngine.Mesh>();
		ES3Reader_t2780AF8AA61DA2A817115CEF8612AC0E494D03C9 * L_93 = ___reader0;
		NullCheck((ES3Reader_t2780AF8AA61DA2A817115CEF8612AC0E494D03C9 *)L_93);
		Mesh_t2F5992DBA650D5862B43D3823ACD997132A57DA6 * L_94;
		L_94 = GenericVirtFuncInvoker0< Mesh_t2F5992DBA650D5862B43D3823ACD997132A57DA6 * >::Invoke(ES3Reader_Read_TisMesh_t2F5992DBA650D5862B43D3823ACD997132A57DA6_m65DF5BA41642A39B77979CC49472E4DE7A1660F9_RuntimeMethod_var, (ES3Reader_t2780AF8AA61DA2A817115CEF8612AC0E494D03C9 *)L_93);
		ShapeModule_set_mesh_mD3E276A9E45442E75AD8A9AA4BD88C9112BD77CA((ShapeModule_t3A89D143F5CAF357ECCE8B4A4F2BBD57816F98CA *)(ShapeModule_t3A89D143F5CAF357ECCE8B4A4F2BBD57816F98CA *)(&V_0), (Mesh_t2F5992DBA650D5862B43D3823ACD997132A57DA6 *)L_94, /*hidden argument*/NULL);
		// break;
		goto IL_042c;
	}

IL_03a4:
	{
		// instance.meshRenderer = reader.Read<UnityEngine.MeshRenderer>();
		ES3Reader_t2780AF8AA61DA2A817115CEF8612AC0E494D03C9 * L_95 = ___reader0;
		NullCheck((ES3Reader_t2780AF8AA61DA2A817115CEF8612AC0E494D03C9 *)L_95);
		MeshRenderer_tCD983A2F635E12BCB0BAA2E635D96A318757908B * L_96;
		L_96 = GenericVirtFuncInvoker0< MeshRenderer_tCD983A2F635E12BCB0BAA2E635D96A318757908B * >::Invoke(ES3Reader_Read_TisMeshRenderer_tCD983A2F635E12BCB0BAA2E635D96A318757908B_m773CE5481730EBCC6A377F918946EB11B304050A_RuntimeMethod_var, (ES3Reader_t2780AF8AA61DA2A817115CEF8612AC0E494D03C9 *)L_95);
		ShapeModule_set_meshRenderer_m334D69AC8C29F5E393732D62BBB3645296614059((ShapeModule_t3A89D143F5CAF357ECCE8B4A4F2BBD57816F98CA *)(ShapeModule_t3A89D143F5CAF357ECCE8B4A4F2BBD57816F98CA *)(&V_0), (MeshRenderer_tCD983A2F635E12BCB0BAA2E635D96A318757908B *)L_96, /*hidden argument*/NULL);
		// break;
		goto IL_042c;
	}

IL_03b3:
	{
		// instance.skinnedMeshRenderer = reader.Read<UnityEngine.SkinnedMeshRenderer>();
		ES3Reader_t2780AF8AA61DA2A817115CEF8612AC0E494D03C9 * L_97 = ___reader0;
		NullCheck((ES3Reader_t2780AF8AA61DA2A817115CEF8612AC0E494D03C9 *)L_97);
		SkinnedMeshRenderer_t126F4D6010E0F4B2685A7817B0A9171805D8F496 * L_98;
		L_98 = GenericVirtFuncInvoker0< SkinnedMeshRenderer_t126F4D6010E0F4B2685A7817B0A9171805D8F496 * >::Invoke(ES3Reader_Read_TisSkinnedMeshRenderer_t126F4D6010E0F4B2685A7817B0A9171805D8F496_m23D6569D5CE7B3E1C67BDB470CDEDEF25A835F25_RuntimeMethod_var, (ES3Reader_t2780AF8AA61DA2A817115CEF8612AC0E494D03C9 *)L_97);
		ShapeModule_set_skinnedMeshRenderer_m9DEF9CD332D3F10BE7D99EFECC0971FB5AE83F56((ShapeModule_t3A89D143F5CAF357ECCE8B4A4F2BBD57816F98CA *)(ShapeModule_t3A89D143F5CAF357ECCE8B4A4F2BBD57816F98CA *)(&V_0), (SkinnedMeshRenderer_t126F4D6010E0F4B2685A7817B0A9171805D8F496 *)L_98, /*hidden argument*/NULL);
		// break;
		goto IL_042c;
	}

IL_03c2:
	{
		// instance.useMeshMaterialIndex = reader.Read<System.Boolean>(ES3Type_bool.Instance);
		ES3Reader_t2780AF8AA61DA2A817115CEF8612AC0E494D03C9 * L_99 = ___reader0;
		IL2CPP_RUNTIME_CLASS_INIT(ES3Type_bool_t8F309F7B9CC735FF1DEE68081B6E3CAB367745F4_il2cpp_TypeInfo_var);
		ES3Type_t8FBECB7AE75168648B9524E0C2A38DAD4555421D * L_100 = ((ES3Type_bool_t8F309F7B9CC735FF1DEE68081B6E3CAB367745F4_StaticFields*)il2cpp_codegen_static_fields_for(ES3Type_bool_t8F309F7B9CC735FF1DEE68081B6E3CAB367745F4_il2cpp_TypeInfo_var))->get_Instance_12();
		NullCheck((ES3Reader_t2780AF8AA61DA2A817115CEF8612AC0E494D03C9 *)L_99);
		bool L_101;
		L_101 = GenericVirtFuncInvoker1< bool, ES3Type_t8FBECB7AE75168648B9524E0C2A38DAD4555421D * >::Invoke(ES3Reader_Read_TisBoolean_t07D1E3F34E4813023D64F584DFF7B34C9D922F37_mC6D1B158268FF9B97822FF9F5B37FB1723FEDA22_RuntimeMethod_var, (ES3Reader_t2780AF8AA61DA2A817115CEF8612AC0E494D03C9 *)L_99, (ES3Type_t8FBECB7AE75168648B9524E0C2A38DAD4555421D *)L_100);
		ShapeModule_set_useMeshMaterialIndex_m6130573C0966ED3B5C590665747305BCEFD3F901((ShapeModule_t3A89D143F5CAF357ECCE8B4A4F2BBD57816F98CA *)(ShapeModule_t3A89D143F5CAF357ECCE8B4A4F2BBD57816F98CA *)(&V_0), (bool)L_101, /*hidden argument*/NULL);
		// break;
		goto IL_042c;
	}

IL_03d6:
	{
		// instance.meshMaterialIndex = reader.Read<System.Int32>(ES3Type_int.Instance);
		ES3Reader_t2780AF8AA61DA2A817115CEF8612AC0E494D03C9 * L_102 = ___reader0;
		IL2CPP_RUNTIME_CLASS_INIT(ES3Type_int_tF64C15D40AD0CC7C15BCD1CEC3C5C6BF837BD167_il2cpp_TypeInfo_var);
		ES3Type_t8FBECB7AE75168648B9524E0C2A38DAD4555421D * L_103 = ((ES3Type_int_tF64C15D40AD0CC7C15BCD1CEC3C5C6BF837BD167_StaticFields*)il2cpp_codegen_static_fields_for(ES3Type_int_tF64C15D40AD0CC7C15BCD1CEC3C5C6BF837BD167_il2cpp_TypeInfo_var))->get_Instance_12();
		NullCheck((ES3Reader_t2780AF8AA61DA2A817115CEF8612AC0E494D03C9 *)L_102);
		int32_t L_104;
		L_104 = GenericVirtFuncInvoker1< int32_t, ES3Type_t8FBECB7AE75168648B9524E0C2A38DAD4555421D * >::Invoke(ES3Reader_Read_TisInt32_tFDE5F8CD43D10453F6A2E0C77FE48C6CC7009046_m2B74AA6627F5B1D21171D56C42F71DE5A7C1B4A6_RuntimeMethod_var, (ES3Reader_t2780AF8AA61DA2A817115CEF8612AC0E494D03C9 *)L_102, (ES3Type_t8FBECB7AE75168648B9524E0C2A38DAD4555421D *)L_103);
		ShapeModule_set_meshMaterialIndex_m1205DDEB353204D5941654FB79164AD5BAF0A59C((ShapeModule_t3A89D143F5CAF357ECCE8B4A4F2BBD57816F98CA *)(ShapeModule_t3A89D143F5CAF357ECCE8B4A4F2BBD57816F98CA *)(&V_0), (int32_t)L_104, /*hidden argument*/NULL);
		// break;
		goto IL_042c;
	}

IL_03ea:
	{
		// instance.useMeshColors = reader.Read<System.Boolean>(ES3Type_bool.Instance);
		ES3Reader_t2780AF8AA61DA2A817115CEF8612AC0E494D03C9 * L_105 = ___reader0;
		IL2CPP_RUNTIME_CLASS_INIT(ES3Type_bool_t8F309F7B9CC735FF1DEE68081B6E3CAB367745F4_il2cpp_TypeInfo_var);
		ES3Type_t8FBECB7AE75168648B9524E0C2A38DAD4555421D * L_106 = ((ES3Type_bool_t8F309F7B9CC735FF1DEE68081B6E3CAB367745F4_StaticFields*)il2cpp_codegen_static_fields_for(ES3Type_bool_t8F309F7B9CC735FF1DEE68081B6E3CAB367745F4_il2cpp_TypeInfo_var))->get_Instance_12();
		NullCheck((ES3Reader_t2780AF8AA61DA2A817115CEF8612AC0E494D03C9 *)L_105);
		bool L_107;
		L_107 = GenericVirtFuncInvoker1< bool, ES3Type_t8FBECB7AE75168648B9524E0C2A38DAD4555421D * >::Invoke(ES3Reader_Read_TisBoolean_t07D1E3F34E4813023D64F584DFF7B34C9D922F37_mC6D1B158268FF9B97822FF9F5B37FB1723FEDA22_RuntimeMethod_var, (ES3Reader_t2780AF8AA61DA2A817115CEF8612AC0E494D03C9 *)L_105, (ES3Type_t8FBECB7AE75168648B9524E0C2A38DAD4555421D *)L_106);
		ShapeModule_set_useMeshColors_m071D000F330805B1EBCF09B40AC4EB9942EB9F57((ShapeModule_t3A89D143F5CAF357ECCE8B4A4F2BBD57816F98CA *)(ShapeModule_t3A89D143F5CAF357ECCE8B4A4F2BBD57816F98CA *)(&V_0), (bool)L_107, /*hidden argument*/NULL);
		// break;
		goto IL_042c;
	}

IL_03fe:
	{
		// instance.normalOffset = reader.Read<System.Single>(ES3Type_float.Instance);
		ES3Reader_t2780AF8AA61DA2A817115CEF8612AC0E494D03C9 * L_108 = ___reader0;
		IL2CPP_RUNTIME_CLASS_INIT(ES3Type_float_tF86B773C86731BD9AD79448B860BBB178FE77644_il2cpp_TypeInfo_var);
		ES3Type_t8FBECB7AE75168648B9524E0C2A38DAD4555421D * L_109 = ((ES3Type_float_tF86B773C86731BD9AD79448B860BBB178FE77644_StaticFields*)il2cpp_codegen_static_fields_for(ES3Type_float_tF86B773C86731BD9AD79448B860BBB178FE77644_il2cpp_TypeInfo_var))->get_Instance_12();
		NullCheck((ES3Reader_t2780AF8AA61DA2A817115CEF8612AC0E494D03C9 *)L_108);
		float L_110;
		L_110 = GenericVirtFuncInvoker1< float, ES3Type_t8FBECB7AE75168648B9524E0C2A38DAD4555421D * >::Invoke(ES3Reader_Read_TisSingle_tE07797BA3C98D4CA9B5A19413C19A76688AB899E_m4A0416374498BDA042B8EB21E49B72326D6CE5F4_RuntimeMethod_var, (ES3Reader_t2780AF8AA61DA2A817115CEF8612AC0E494D03C9 *)L_108, (ES3Type_t8FBECB7AE75168648B9524E0C2A38DAD4555421D *)L_109);
		ShapeModule_set_normalOffset_m81A315286BAA5F52AAED6B317734FB03B2DCE9FD((ShapeModule_t3A89D143F5CAF357ECCE8B4A4F2BBD57816F98CA *)(ShapeModule_t3A89D143F5CAF357ECCE8B4A4F2BBD57816F98CA *)(&V_0), (float)L_110, /*hidden argument*/NULL);
		// break;
		goto IL_042c;
	}

IL_0412:
	{
		// instance.arc = reader.Read<System.Single>(ES3Type_float.Instance);
		ES3Reader_t2780AF8AA61DA2A817115CEF8612AC0E494D03C9 * L_111 = ___reader0;
		IL2CPP_RUNTIME_CLASS_INIT(ES3Type_float_tF86B773C86731BD9AD79448B860BBB178FE77644_il2cpp_TypeInfo_var);
		ES3Type_t8FBECB7AE75168648B9524E0C2A38DAD4555421D * L_112 = ((ES3Type_float_tF86B773C86731BD9AD79448B860BBB178FE77644_StaticFields*)il2cpp_codegen_static_fields_for(ES3Type_float_tF86B773C86731BD9AD79448B860BBB178FE77644_il2cpp_TypeInfo_var))->get_Instance_12();
		NullCheck((ES3Reader_t2780AF8AA61DA2A817115CEF8612AC0E494D03C9 *)L_111);
		float L_113;
		L_113 = GenericVirtFuncInvoker1< float, ES3Type_t8FBECB7AE75168648B9524E0C2A38DAD4555421D * >::Invoke(ES3Reader_Read_TisSingle_tE07797BA3C98D4CA9B5A19413C19A76688AB899E_m4A0416374498BDA042B8EB21E49B72326D6CE5F4_RuntimeMethod_var, (ES3Reader_t2780AF8AA61DA2A817115CEF8612AC0E494D03C9 *)L_111, (ES3Type_t8FBECB7AE75168648B9524E0C2A38DAD4555421D *)L_112);
		ShapeModule_set_arc_m4A2578EBD4747DB3D9ED74AB53E488872CFA541F((ShapeModule_t3A89D143F5CAF357ECCE8B4A4F2BBD57816F98CA *)(ShapeModule_t3A89D143F5CAF357ECCE8B4A4F2BBD57816F98CA *)(&V_0), (float)L_113, /*hidden argument*/NULL);
		// break;
		goto IL_042c;
	}

IL_0426:
	{
		// reader.Skip();
		ES3Reader_t2780AF8AA61DA2A817115CEF8612AC0E494D03C9 * L_114 = ___reader0;
		NullCheck((ES3Reader_t2780AF8AA61DA2A817115CEF8612AC0E494D03C9 *)L_114);
		VirtActionInvoker0::Invoke(41 /* System.Void ES3Reader::Skip() */, (ES3Reader_t2780AF8AA61DA2A817115CEF8612AC0E494D03C9 *)L_114);
	}

IL_042c:
	{
		// while((propertyName = reader.ReadPropertyName()) != null)
		ES3Reader_t2780AF8AA61DA2A817115CEF8612AC0E494D03C9 * L_115 = ___reader0;
		NullCheck((ES3Reader_t2780AF8AA61DA2A817115CEF8612AC0E494D03C9 *)L_115);
		String_t* L_116;
		L_116 = VirtFuncInvoker0< String_t* >::Invoke(21 /* System.String ES3Reader::ReadPropertyName() */, (ES3Reader_t2780AF8AA61DA2A817115CEF8612AC0E494D03C9 *)L_115);
		String_t* L_117 = (String_t*)L_116;
		V_1 = (String_t*)L_117;
		if (L_117)
		{
			goto IL_000c;
		}
	}
	{
		// }
		return;
	}
}
// System.Object ES3Types.ES3Type_SizeBySpeedModule::Read<System.Boolean>(ES3Reader)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject * ES3Type_SizeBySpeedModule_Read_TisBoolean_t07D1E3F34E4813023D64F584DFF7B34C9D922F37_m93A214643491AA0E7A1CCF9182759CA75C896130_gshared (ES3Type_SizeBySpeedModule_tE2CD943FBEF83D6F6EDB836909B9C475DF2A7FD0 * __this, ES3Reader_t2780AF8AA61DA2A817115CEF8612AC0E494D03C9 * ___reader0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&SizeBySpeedModule_t156070A63E0A483D36BCAE783BA554CDA7CAF752_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	SizeBySpeedModule_t156070A63E0A483D36BCAE783BA554CDA7CAF752  V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		// var instance = new UnityEngine.ParticleSystem.SizeBySpeedModule();
		il2cpp_codegen_initobj((&V_0), sizeof(SizeBySpeedModule_t156070A63E0A483D36BCAE783BA554CDA7CAF752 ));
		// ReadInto<T>(reader, instance);
		ES3Reader_t2780AF8AA61DA2A817115CEF8612AC0E494D03C9 * L_0 = ___reader0;
		SizeBySpeedModule_t156070A63E0A483D36BCAE783BA554CDA7CAF752  L_1 = V_0;
		SizeBySpeedModule_t156070A63E0A483D36BCAE783BA554CDA7CAF752  L_2 = (SizeBySpeedModule_t156070A63E0A483D36BCAE783BA554CDA7CAF752 )L_1;
		RuntimeObject * L_3 = Box(SizeBySpeedModule_t156070A63E0A483D36BCAE783BA554CDA7CAF752_il2cpp_TypeInfo_var, &L_2);
		NullCheck((ES3Type_t8FBECB7AE75168648B9524E0C2A38DAD4555421D *)__this);
		GenericVirtActionInvoker2< ES3Reader_t2780AF8AA61DA2A817115CEF8612AC0E494D03C9 *, RuntimeObject * >::Invoke(IL2CPP_RGCTX_METHOD_INFO(method->rgctx_data, 0), (ES3Type_t8FBECB7AE75168648B9524E0C2A38DAD4555421D *)__this, (ES3Reader_t2780AF8AA61DA2A817115CEF8612AC0E494D03C9 *)L_0, (RuntimeObject *)L_3);
		// return instance;
		SizeBySpeedModule_t156070A63E0A483D36BCAE783BA554CDA7CAF752  L_4 = V_0;
		SizeBySpeedModule_t156070A63E0A483D36BCAE783BA554CDA7CAF752  L_5 = (SizeBySpeedModule_t156070A63E0A483D36BCAE783BA554CDA7CAF752 )L_4;
		RuntimeObject * L_6 = Box(SizeBySpeedModule_t156070A63E0A483D36BCAE783BA554CDA7CAF752_il2cpp_TypeInfo_var, &L_5);
		return (RuntimeObject *)L_6;
	}
}
// System.Object ES3Types.ES3Type_SizeBySpeedModule::Read<UnityEngine.Bounds>(ES3Reader)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject * ES3Type_SizeBySpeedModule_Read_TisBounds_t0F1F36D4F7AF49524B3C2A2259594412A3D3AE37_mBBBBB302CF5F30DAAB68B80A2DBF3BF41C3CF20D_gshared (ES3Type_SizeBySpeedModule_tE2CD943FBEF83D6F6EDB836909B9C475DF2A7FD0 * __this, ES3Reader_t2780AF8AA61DA2A817115CEF8612AC0E494D03C9 * ___reader0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&SizeBySpeedModule_t156070A63E0A483D36BCAE783BA554CDA7CAF752_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	SizeBySpeedModule_t156070A63E0A483D36BCAE783BA554CDA7CAF752  V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		// var instance = new UnityEngine.ParticleSystem.SizeBySpeedModule();
		il2cpp_codegen_initobj((&V_0), sizeof(SizeBySpeedModule_t156070A63E0A483D36BCAE783BA554CDA7CAF752 ));
		// ReadInto<T>(reader, instance);
		ES3Reader_t2780AF8AA61DA2A817115CEF8612AC0E494D03C9 * L_0 = ___reader0;
		SizeBySpeedModule_t156070A63E0A483D36BCAE783BA554CDA7CAF752  L_1 = V_0;
		SizeBySpeedModule_t156070A63E0A483D36BCAE783BA554CDA7CAF752  L_2 = (SizeBySpeedModule_t156070A63E0A483D36BCAE783BA554CDA7CAF752 )L_1;
		RuntimeObject * L_3 = Box(SizeBySpeedModule_t156070A63E0A483D36BCAE783BA554CDA7CAF752_il2cpp_TypeInfo_var, &L_2);
		NullCheck((ES3Type_t8FBECB7AE75168648B9524E0C2A38DAD4555421D *)__this);
		GenericVirtActionInvoker2< ES3Reader_t2780AF8AA61DA2A817115CEF8612AC0E494D03C9 *, RuntimeObject * >::Invoke(IL2CPP_RGCTX_METHOD_INFO(method->rgctx_data, 0), (ES3Type_t8FBECB7AE75168648B9524E0C2A38DAD4555421D *)__this, (ES3Reader_t2780AF8AA61DA2A817115CEF8612AC0E494D03C9 *)L_0, (RuntimeObject *)L_3);
		// return instance;
		SizeBySpeedModule_t156070A63E0A483D36BCAE783BA554CDA7CAF752  L_4 = V_0;
		SizeBySpeedModule_t156070A63E0A483D36BCAE783BA554CDA7CAF752  L_5 = (SizeBySpeedModule_t156070A63E0A483D36BCAE783BA554CDA7CAF752 )L_4;
		RuntimeObject * L_6 = Box(SizeBySpeedModule_t156070A63E0A483D36BCAE783BA554CDA7CAF752_il2cpp_TypeInfo_var, &L_5);
		return (RuntimeObject *)L_6;
	}
}
// System.Object ES3Types.ES3Type_SizeBySpeedModule::Read<System.Byte>(ES3Reader)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject * ES3Type_SizeBySpeedModule_Read_TisByte_t0111FAB8B8685667EDDAF77683F0D8F86B659056_m91F9B265A1E1AC7748A8E2C21F8DAE23FE8D5D96_gshared (ES3Type_SizeBySpeedModule_tE2CD943FBEF83D6F6EDB836909B9C475DF2A7FD0 * __this, ES3Reader_t2780AF8AA61DA2A817115CEF8612AC0E494D03C9 * ___reader0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&SizeBySpeedModule_t156070A63E0A483D36BCAE783BA554CDA7CAF752_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	SizeBySpeedModule_t156070A63E0A483D36BCAE783BA554CDA7CAF752  V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		// var instance = new UnityEngine.ParticleSystem.SizeBySpeedModule();
		il2cpp_codegen_initobj((&V_0), sizeof(SizeBySpeedModule_t156070A63E0A483D36BCAE783BA554CDA7CAF752 ));
		// ReadInto<T>(reader, instance);
		ES3Reader_t2780AF8AA61DA2A817115CEF8612AC0E494D03C9 * L_0 = ___reader0;
		SizeBySpeedModule_t156070A63E0A483D36BCAE783BA554CDA7CAF752  L_1 = V_0;
		SizeBySpeedModule_t156070A63E0A483D36BCAE783BA554CDA7CAF752  L_2 = (SizeBySpeedModule_t156070A63E0A483D36BCAE783BA554CDA7CAF752 )L_1;
		RuntimeObject * L_3 = Box(SizeBySpeedModule_t156070A63E0A483D36BCAE783BA554CDA7CAF752_il2cpp_TypeInfo_var, &L_2);
		NullCheck((ES3Type_t8FBECB7AE75168648B9524E0C2A38DAD4555421D *)__this);
		GenericVirtActionInvoker2< ES3Reader_t2780AF8AA61DA2A817115CEF8612AC0E494D03C9 *, RuntimeObject * >::Invoke(IL2CPP_RGCTX_METHOD_INFO(method->rgctx_data, 0), (ES3Type_t8FBECB7AE75168648B9524E0C2A38DAD4555421D *)__this, (ES3Reader_t2780AF8AA61DA2A817115CEF8612AC0E494D03C9 *)L_0, (RuntimeObject *)L_3);
		// return instance;
		SizeBySpeedModule_t156070A63E0A483D36BCAE783BA554CDA7CAF752  L_4 = V_0;
		SizeBySpeedModule_t156070A63E0A483D36BCAE783BA554CDA7CAF752  L_5 = (SizeBySpeedModule_t156070A63E0A483D36BCAE783BA554CDA7CAF752 )L_4;
		RuntimeObject * L_6 = Box(SizeBySpeedModule_t156070A63E0A483D36BCAE783BA554CDA7CAF752_il2cpp_TypeInfo_var, &L_5);
		return (RuntimeObject *)L_6;
	}
}
// System.Object ES3Types.ES3Type_SizeBySpeedModule::Read<UnityEngine.Color>(ES3Reader)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject * ES3Type_SizeBySpeedModule_Read_TisColor_tF40DAF76C04FFECF3FE6024F85A294741C9CC659_m53804984DCDDCBACC26FD84DD38CFCED6B111B7C_gshared (ES3Type_SizeBySpeedModule_tE2CD943FBEF83D6F6EDB836909B9C475DF2A7FD0 * __this, ES3Reader_t2780AF8AA61DA2A817115CEF8612AC0E494D03C9 * ___reader0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&SizeBySpeedModule_t156070A63E0A483D36BCAE783BA554CDA7CAF752_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	SizeBySpeedModule_t156070A63E0A483D36BCAE783BA554CDA7CAF752  V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		// var instance = new UnityEngine.ParticleSystem.SizeBySpeedModule();
		il2cpp_codegen_initobj((&V_0), sizeof(SizeBySpeedModule_t156070A63E0A483D36BCAE783BA554CDA7CAF752 ));
		// ReadInto<T>(reader, instance);
		ES3Reader_t2780AF8AA61DA2A817115CEF8612AC0E494D03C9 * L_0 = ___reader0;
		SizeBySpeedModule_t156070A63E0A483D36BCAE783BA554CDA7CAF752  L_1 = V_0;
		SizeBySpeedModule_t156070A63E0A483D36BCAE783BA554CDA7CAF752  L_2 = (SizeBySpeedModule_t156070A63E0A483D36BCAE783BA554CDA7CAF752 )L_1;
		RuntimeObject * L_3 = Box(SizeBySpeedModule_t156070A63E0A483D36BCAE783BA554CDA7CAF752_il2cpp_TypeInfo_var, &L_2);
		NullCheck((ES3Type_t8FBECB7AE75168648B9524E0C2A38DAD4555421D *)__this);
		GenericVirtActionInvoker2< ES3Reader_t2780AF8AA61DA2A817115CEF8612AC0E494D03C9 *, RuntimeObject * >::Invoke(IL2CPP_RGCTX_METHOD_INFO(method->rgctx_data, 0), (ES3Type_t8FBECB7AE75168648B9524E0C2A38DAD4555421D *)__this, (ES3Reader_t2780AF8AA61DA2A817115CEF8612AC0E494D03C9 *)L_0, (RuntimeObject *)L_3);
		// return instance;
		SizeBySpeedModule_t156070A63E0A483D36BCAE783BA554CDA7CAF752  L_4 = V_0;
		SizeBySpeedModule_t156070A63E0A483D36BCAE783BA554CDA7CAF752  L_5 = (SizeBySpeedModule_t156070A63E0A483D36BCAE783BA554CDA7CAF752 )L_4;
		RuntimeObject * L_6 = Box(SizeBySpeedModule_t156070A63E0A483D36BCAE783BA554CDA7CAF752_il2cpp_TypeInfo_var, &L_5);
		return (RuntimeObject *)L_6;
	}
}
// System.Object ES3Types.ES3Type_SizeBySpeedModule::Read<System.Int16>(ES3Reader)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject * ES3Type_SizeBySpeedModule_Read_TisInt16_tD0F031114106263BB459DA1F099FF9F42691295A_m0DAFCD78E1B5FAD0CC3ED615750722993EDF129A_gshared (ES3Type_SizeBySpeedModule_tE2CD943FBEF83D6F6EDB836909B9C475DF2A7FD0 * __this, ES3Reader_t2780AF8AA61DA2A817115CEF8612AC0E494D03C9 * ___reader0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&SizeBySpeedModule_t156070A63E0A483D36BCAE783BA554CDA7CAF752_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	SizeBySpeedModule_t156070A63E0A483D36BCAE783BA554CDA7CAF752  V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		// var instance = new UnityEngine.ParticleSystem.SizeBySpeedModule();
		il2cpp_codegen_initobj((&V_0), sizeof(SizeBySpeedModule_t156070A63E0A483D36BCAE783BA554CDA7CAF752 ));
		// ReadInto<T>(reader, instance);
		ES3Reader_t2780AF8AA61DA2A817115CEF8612AC0E494D03C9 * L_0 = ___reader0;
		SizeBySpeedModule_t156070A63E0A483D36BCAE783BA554CDA7CAF752  L_1 = V_0;
		SizeBySpeedModule_t156070A63E0A483D36BCAE783BA554CDA7CAF752  L_2 = (SizeBySpeedModule_t156070A63E0A483D36BCAE783BA554CDA7CAF752 )L_1;
		RuntimeObject * L_3 = Box(SizeBySpeedModule_t156070A63E0A483D36BCAE783BA554CDA7CAF752_il2cpp_TypeInfo_var, &L_2);
		NullCheck((ES3Type_t8FBECB7AE75168648B9524E0C2A38DAD4555421D *)__this);
		GenericVirtActionInvoker2< ES3Reader_t2780AF8AA61DA2A817115CEF8612AC0E494D03C9 *, RuntimeObject * >::Invoke(IL2CPP_RGCTX_METHOD_INFO(method->rgctx_data, 0), (ES3Type_t8FBECB7AE75168648B9524E0C2A38DAD4555421D *)__this, (ES3Reader_t2780AF8AA61DA2A817115CEF8612AC0E494D03C9 *)L_0, (RuntimeObject *)L_3);
		// return instance;
		SizeBySpeedModule_t156070A63E0A483D36BCAE783BA554CDA7CAF752  L_4 = V_0;
		SizeBySpeedModule_t156070A63E0A483D36BCAE783BA554CDA7CAF752  L_5 = (SizeBySpeedModule_t156070A63E0A483D36BCAE783BA554CDA7CAF752 )L_4;
		RuntimeObject * L_6 = Box(SizeBySpeedModule_t156070A63E0A483D36BCAE783BA554CDA7CAF752_il2cpp_TypeInfo_var, &L_5);
		return (RuntimeObject *)L_6;
	}
}
// System.Object ES3Types.ES3Type_SizeBySpeedModule::Read<System.Int32>(ES3Reader)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject * ES3Type_SizeBySpeedModule_Read_TisInt32_tFDE5F8CD43D10453F6A2E0C77FE48C6CC7009046_mEB33849BC4FB774269B3442E6E49F03A10C2A4B2_gshared (ES3Type_SizeBySpeedModule_tE2CD943FBEF83D6F6EDB836909B9C475DF2A7FD0 * __this, ES3Reader_t2780AF8AA61DA2A817115CEF8612AC0E494D03C9 * ___reader0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&SizeBySpeedModule_t156070A63E0A483D36BCAE783BA554CDA7CAF752_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	SizeBySpeedModule_t156070A63E0A483D36BCAE783BA554CDA7CAF752  V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		// var instance = new UnityEngine.ParticleSystem.SizeBySpeedModule();
		il2cpp_codegen_initobj((&V_0), sizeof(SizeBySpeedModule_t156070A63E0A483D36BCAE783BA554CDA7CAF752 ));
		// ReadInto<T>(reader, instance);
		ES3Reader_t2780AF8AA61DA2A817115CEF8612AC0E494D03C9 * L_0 = ___reader0;
		SizeBySpeedModule_t156070A63E0A483D36BCAE783BA554CDA7CAF752  L_1 = V_0;
		SizeBySpeedModule_t156070A63E0A483D36BCAE783BA554CDA7CAF752  L_2 = (SizeBySpeedModule_t156070A63E0A483D36BCAE783BA554CDA7CAF752 )L_1;
		RuntimeObject * L_3 = Box(SizeBySpeedModule_t156070A63E0A483D36BCAE783BA554CDA7CAF752_il2cpp_TypeInfo_var, &L_2);
		NullCheck((ES3Type_t8FBECB7AE75168648B9524E0C2A38DAD4555421D *)__this);
		GenericVirtActionInvoker2< ES3Reader_t2780AF8AA61DA2A817115CEF8612AC0E494D03C9 *, RuntimeObject * >::Invoke(IL2CPP_RGCTX_METHOD_INFO(method->rgctx_data, 0), (ES3Type_t8FBECB7AE75168648B9524E0C2A38DAD4555421D *)__this, (ES3Reader_t2780AF8AA61DA2A817115CEF8612AC0E494D03C9 *)L_0, (RuntimeObject *)L_3);
		// return instance;
		SizeBySpeedModule_t156070A63E0A483D36BCAE783BA554CDA7CAF752  L_4 = V_0;
		SizeBySpeedModule_t156070A63E0A483D36BCAE783BA554CDA7CAF752  L_5 = (SizeBySpeedModule_t156070A63E0A483D36BCAE783BA554CDA7CAF752 )L_4;
		RuntimeObject * L_6 = Box(SizeBySpeedModule_t156070A63E0A483D36BCAE783BA554CDA7CAF752_il2cpp_TypeInfo_var, &L_5);
		return (RuntimeObject *)L_6;
	}
}
// System.Object ES3Types.ES3Type_SizeBySpeedModule::Read<System.Int32Enum>(ES3Reader)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject * ES3Type_SizeBySpeedModule_Read_TisInt32Enum_t9B63F771913F2B6D586F1173B44A41FBE26F6B5C_mAC4C43FFA6E4BF012BFA987CC9A83E6DCAA97D35_gshared (ES3Type_SizeBySpeedModule_tE2CD943FBEF83D6F6EDB836909B9C475DF2A7FD0 * __this, ES3Reader_t2780AF8AA61DA2A817115CEF8612AC0E494D03C9 * ___reader0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&SizeBySpeedModule_t156070A63E0A483D36BCAE783BA554CDA7CAF752_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	SizeBySpeedModule_t156070A63E0A483D36BCAE783BA554CDA7CAF752  V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		// var instance = new UnityEngine.ParticleSystem.SizeBySpeedModule();
		il2cpp_codegen_initobj((&V_0), sizeof(SizeBySpeedModule_t156070A63E0A483D36BCAE783BA554CDA7CAF752 ));
		// ReadInto<T>(reader, instance);
		ES3Reader_t2780AF8AA61DA2A817115CEF8612AC0E494D03C9 * L_0 = ___reader0;
		SizeBySpeedModule_t156070A63E0A483D36BCAE783BA554CDA7CAF752  L_1 = V_0;
		SizeBySpeedModule_t156070A63E0A483D36BCAE783BA554CDA7CAF752  L_2 = (SizeBySpeedModule_t156070A63E0A483D36BCAE783BA554CDA7CAF752 )L_1;
		RuntimeObject * L_3 = Box(SizeBySpeedModule_t156070A63E0A483D36BCAE783BA554CDA7CAF752_il2cpp_TypeInfo_var, &L_2);
		NullCheck((ES3Type_t8FBECB7AE75168648B9524E0C2A38DAD4555421D *)__this);
		GenericVirtActionInvoker2< ES3Reader_t2780AF8AA61DA2A817115CEF8612AC0E494D03C9 *, RuntimeObject * >::Invoke(IL2CPP_RGCTX_METHOD_INFO(method->rgctx_data, 0), (ES3Type_t8FBECB7AE75168648B9524E0C2A38DAD4555421D *)__this, (ES3Reader_t2780AF8AA61DA2A817115CEF8612AC0E494D03C9 *)L_0, (RuntimeObject *)L_3);
		// return instance;
		SizeBySpeedModule_t156070A63E0A483D36BCAE783BA554CDA7CAF752  L_4 = V_0;
		SizeBySpeedModule_t156070A63E0A483D36BCAE783BA554CDA7CAF752  L_5 = (SizeBySpeedModule_t156070A63E0A483D36BCAE783BA554CDA7CAF752 )L_4;
		RuntimeObject * L_6 = Box(SizeBySpeedModule_t156070A63E0A483D36BCAE783BA554CDA7CAF752_il2cpp_TypeInfo_var, &L_5);
		return (RuntimeObject *)L_6;
	}
}
// System.Object ES3Types.ES3Type_SizeBySpeedModule::Read<System.Int64>(ES3Reader)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject * ES3Type_SizeBySpeedModule_Read_TisInt64_t378EE0D608BD3107E77238E85F30D2BBD46981F3_m8E0C1C8B6B043F98E1A07051338E68E71EDC2D4C_gshared (ES3Type_SizeBySpeedModule_tE2CD943FBEF83D6F6EDB836909B9C475DF2A7FD0 * __this, ES3Reader_t2780AF8AA61DA2A817115CEF8612AC0E494D03C9 * ___reader0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&SizeBySpeedModule_t156070A63E0A483D36BCAE783BA554CDA7CAF752_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	SizeBySpeedModule_t156070A63E0A483D36BCAE783BA554CDA7CAF752  V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		// var instance = new UnityEngine.ParticleSystem.SizeBySpeedModule();
		il2cpp_codegen_initobj((&V_0), sizeof(SizeBySpeedModule_t156070A63E0A483D36BCAE783BA554CDA7CAF752 ));
		// ReadInto<T>(reader, instance);
		ES3Reader_t2780AF8AA61DA2A817115CEF8612AC0E494D03C9 * L_0 = ___reader0;
		SizeBySpeedModule_t156070A63E0A483D36BCAE783BA554CDA7CAF752  L_1 = V_0;
		SizeBySpeedModule_t156070A63E0A483D36BCAE783BA554CDA7CAF752  L_2 = (SizeBySpeedModule_t156070A63E0A483D36BCAE783BA554CDA7CAF752 )L_1;
		RuntimeObject * L_3 = Box(SizeBySpeedModule_t156070A63E0A483D36BCAE783BA554CDA7CAF752_il2cpp_TypeInfo_var, &L_2);
		NullCheck((ES3Type_t8FBECB7AE75168648B9524E0C2A38DAD4555421D *)__this);
		GenericVirtActionInvoker2< ES3Reader_t2780AF8AA61DA2A817115CEF8612AC0E494D03C9 *, RuntimeObject * >::Invoke(IL2CPP_RGCTX_METHOD_INFO(method->rgctx_data, 0), (ES3Type_t8FBECB7AE75168648B9524E0C2A38DAD4555421D *)__this, (ES3Reader_t2780AF8AA61DA2A817115CEF8612AC0E494D03C9 *)L_0, (RuntimeObject *)L_3);
		// return instance;
		SizeBySpeedModule_t156070A63E0A483D36BCAE783BA554CDA7CAF752  L_4 = V_0;
		SizeBySpeedModule_t156070A63E0A483D36BCAE783BA554CDA7CAF752  L_5 = (SizeBySpeedModule_t156070A63E0A483D36BCAE783BA554CDA7CAF752 )L_4;
		RuntimeObject * L_6 = Box(SizeBySpeedModule_t156070A63E0A483D36BCAE783BA554CDA7CAF752_il2cpp_TypeInfo_var, &L_5);
		return (RuntimeObject *)L_6;
	}
}
// System.Object ES3Types.ES3Type_SizeBySpeedModule::Read<UnityEngine.LayerMask>(ES3Reader)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject * ES3Type_SizeBySpeedModule_Read_TisLayerMask_t5FA647D8C300EA0621360CA4424717C3C73190A8_mF70D093CCA35D27A21EA21D732EF15E82D9BC4F6_gshared (ES3Type_SizeBySpeedModule_tE2CD943FBEF83D6F6EDB836909B9C475DF2A7FD0 * __this, ES3Reader_t2780AF8AA61DA2A817115CEF8612AC0E494D03C9 * ___reader0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&SizeBySpeedModule_t156070A63E0A483D36BCAE783BA554CDA7CAF752_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	SizeBySpeedModule_t156070A63E0A483D36BCAE783BA554CDA7CAF752  V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		// var instance = new UnityEngine.ParticleSystem.SizeBySpeedModule();
		il2cpp_codegen_initobj((&V_0), sizeof(SizeBySpeedModule_t156070A63E0A483D36BCAE783BA554CDA7CAF752 ));
		// ReadInto<T>(reader, instance);
		ES3Reader_t2780AF8AA61DA2A817115CEF8612AC0E494D03C9 * L_0 = ___reader0;
		SizeBySpeedModule_t156070A63E0A483D36BCAE783BA554CDA7CAF752  L_1 = V_0;
		SizeBySpeedModule_t156070A63E0A483D36BCAE783BA554CDA7CAF752  L_2 = (SizeBySpeedModule_t156070A63E0A483D36BCAE783BA554CDA7CAF752 )L_1;
		RuntimeObject * L_3 = Box(SizeBySpeedModule_t156070A63E0A483D36BCAE783BA554CDA7CAF752_il2cpp_TypeInfo_var, &L_2);
		NullCheck((ES3Type_t8FBECB7AE75168648B9524E0C2A38DAD4555421D *)__this);
		GenericVirtActionInvoker2< ES3Reader_t2780AF8AA61DA2A817115CEF8612AC0E494D03C9 *, RuntimeObject * >::Invoke(IL2CPP_RGCTX_METHOD_INFO(method->rgctx_data, 0), (ES3Type_t8FBECB7AE75168648B9524E0C2A38DAD4555421D *)__this, (ES3Reader_t2780AF8AA61DA2A817115CEF8612AC0E494D03C9 *)L_0, (RuntimeObject *)L_3);
		// return instance;
		SizeBySpeedModule_t156070A63E0A483D36BCAE783BA554CDA7CAF752  L_4 = V_0;
		SizeBySpeedModule_t156070A63E0A483D36BCAE783BA554CDA7CAF752  L_5 = (SizeBySpeedModule_t156070A63E0A483D36BCAE783BA554CDA7CAF752 )L_4;
		RuntimeObject * L_6 = Box(SizeBySpeedModule_t156070A63E0A483D36BCAE783BA554CDA7CAF752_il2cpp_TypeInfo_var, &L_5);
		return (RuntimeObject *)L_6;
	}
}
// System.Object ES3Types.ES3Type_SizeBySpeedModule::Read<UnityEngine.Matrix4x4>(ES3Reader)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject * ES3Type_SizeBySpeedModule_Read_TisMatrix4x4_tDE7FF4F2E2EA284F6EFE00D627789D0E5B8B4461_m77EE1FB71989FC5C9ECAA2213CCBAD4D608AE2EC_gshared (ES3Type_SizeBySpeedModule_tE2CD943FBEF83D6F6EDB836909B9C475DF2A7FD0 * __this, ES3Reader_t2780AF8AA61DA2A817115CEF8612AC0E494D03C9 * ___reader0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&SizeBySpeedModule_t156070A63E0A483D36BCAE783BA554CDA7CAF752_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	SizeBySpeedModule_t156070A63E0A483D36BCAE783BA554CDA7CAF752  V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		// var instance = new UnityEngine.ParticleSystem.SizeBySpeedModule();
		il2cpp_codegen_initobj((&V_0), sizeof(SizeBySpeedModule_t156070A63E0A483D36BCAE783BA554CDA7CAF752 ));
		// ReadInto<T>(reader, instance);
		ES3Reader_t2780AF8AA61DA2A817115CEF8612AC0E494D03C9 * L_0 = ___reader0;
		SizeBySpeedModule_t156070A63E0A483D36BCAE783BA554CDA7CAF752  L_1 = V_0;
		SizeBySpeedModule_t156070A63E0A483D36BCAE783BA554CDA7CAF752  L_2 = (SizeBySpeedModule_t156070A63E0A483D36BCAE783BA554CDA7CAF752 )L_1;
		RuntimeObject * L_3 = Box(SizeBySpeedModule_t156070A63E0A483D36BCAE783BA554CDA7CAF752_il2cpp_TypeInfo_var, &L_2);
		NullCheck((ES3Type_t8FBECB7AE75168648B9524E0C2A38DAD4555421D *)__this);
		GenericVirtActionInvoker2< ES3Reader_t2780AF8AA61DA2A817115CEF8612AC0E494D03C9 *, RuntimeObject * >::Invoke(IL2CPP_RGCTX_METHOD_INFO(method->rgctx_data, 0), (ES3Type_t8FBECB7AE75168648B9524E0C2A38DAD4555421D *)__this, (ES3Reader_t2780AF8AA61DA2A817115CEF8612AC0E494D03C9 *)L_0, (RuntimeObject *)L_3);
		// return instance;
		SizeBySpeedModule_t156070A63E0A483D36BCAE783BA554CDA7CAF752  L_4 = V_0;
		SizeBySpeedModule_t156070A63E0A483D36BCAE783BA554CDA7CAF752  L_5 = (SizeBySpeedModule_t156070A63E0A483D36BCAE783BA554CDA7CAF752 )L_4;
		RuntimeObject * L_6 = Box(SizeBySpeedModule_t156070A63E0A483D36BCAE783BA554CDA7CAF752_il2cpp_TypeInfo_var, &L_5);
		return (RuntimeObject *)L_6;
	}
}
// System.Object ES3Types.ES3Type_SizeBySpeedModule::Read<System.Object>(ES3Reader)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject * ES3Type_SizeBySpeedModule_Read_TisRuntimeObject_m4A0C2F0ECB3D8350D42C3229DCCD8C2017CDB1B5_gshared (ES3Type_SizeBySpeedModule_tE2CD943FBEF83D6F6EDB836909B9C475DF2A7FD0 * __this, ES3Reader_t2780AF8AA61DA2A817115CEF8612AC0E494D03C9 * ___reader0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&SizeBySpeedModule_t156070A63E0A483D36BCAE783BA554CDA7CAF752_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	SizeBySpeedModule_t156070A63E0A483D36BCAE783BA554CDA7CAF752  V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		// var instance = new UnityEngine.ParticleSystem.SizeBySpeedModule();
		il2cpp_codegen_initobj((&V_0), sizeof(SizeBySpeedModule_t156070A63E0A483D36BCAE783BA554CDA7CAF752 ));
		// ReadInto<T>(reader, instance);
		ES3Reader_t2780AF8AA61DA2A817115CEF8612AC0E494D03C9 * L_0 = ___reader0;
		SizeBySpeedModule_t156070A63E0A483D36BCAE783BA554CDA7CAF752  L_1 = V_0;
		SizeBySpeedModule_t156070A63E0A483D36BCAE783BA554CDA7CAF752  L_2 = (SizeBySpeedModule_t156070A63E0A483D36BCAE783BA554CDA7CAF752 )L_1;
		RuntimeObject * L_3 = Box(SizeBySpeedModule_t156070A63E0A483D36BCAE783BA554CDA7CAF752_il2cpp_TypeInfo_var, &L_2);
		NullCheck((ES3Type_t8FBECB7AE75168648B9524E0C2A38DAD4555421D *)__this);
		GenericVirtActionInvoker2< ES3Reader_t2780AF8AA61DA2A817115CEF8612AC0E494D03C9 *, RuntimeObject * >::Invoke(IL2CPP_RGCTX_METHOD_INFO(method->rgctx_data, 0), (ES3Type_t8FBECB7AE75168648B9524E0C2A38DAD4555421D *)__this, (ES3Reader_t2780AF8AA61DA2A817115CEF8612AC0E494D03C9 *)L_0, (RuntimeObject *)L_3);
		// return instance;
		SizeBySpeedModule_t156070A63E0A483D36BCAE783BA554CDA7CAF752  L_4 = V_0;
		SizeBySpeedModule_t156070A63E0A483D36BCAE783BA554CDA7CAF752  L_5 = (SizeBySpeedModule_t156070A63E0A483D36BCAE783BA554CDA7CAF752 )L_4;
		RuntimeObject * L_6 = Box(SizeBySpeedModule_t156070A63E0A483D36BCAE783BA554CDA7CAF752_il2cpp_TypeInfo_var, &L_5);
		return (RuntimeObject *)L_6;
	}
}
// System.Object ES3Types.ES3Type_SizeBySpeedModule::Read<UnityEngine.Quaternion>(ES3Reader)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject * ES3Type_SizeBySpeedModule_Read_TisQuaternion_t6D28618CF65156D4A0AD747370DDFD0C514A31B4_mEF7236D613D65540A8DCB6EF79BC811C9195D670_gshared (ES3Type_SizeBySpeedModule_tE2CD943FBEF83D6F6EDB836909B9C475DF2A7FD0 * __this, ES3Reader_t2780AF8AA61DA2A817115CEF8612AC0E494D03C9 * ___reader0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&SizeBySpeedModule_t156070A63E0A483D36BCAE783BA554CDA7CAF752_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	SizeBySpeedModule_t156070A63E0A483D36BCAE783BA554CDA7CAF752  V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		// var instance = new UnityEngine.ParticleSystem.SizeBySpeedModule();
		il2cpp_codegen_initobj((&V_0), sizeof(SizeBySpeedModule_t156070A63E0A483D36BCAE783BA554CDA7CAF752 ));
		// ReadInto<T>(reader, instance);
		ES3Reader_t2780AF8AA61DA2A817115CEF8612AC0E494D03C9 * L_0 = ___reader0;
		SizeBySpeedModule_t156070A63E0A483D36BCAE783BA554CDA7CAF752  L_1 = V_0;
		SizeBySpeedModule_t156070A63E0A483D36BCAE783BA554CDA7CAF752  L_2 = (SizeBySpeedModule_t156070A63E0A483D36BCAE783BA554CDA7CAF752 )L_1;
		RuntimeObject * L_3 = Box(SizeBySpeedModule_t156070A63E0A483D36BCAE783BA554CDA7CAF752_il2cpp_TypeInfo_var, &L_2);
		NullCheck((ES3Type_t8FBECB7AE75168648B9524E0C2A38DAD4555421D *)__this);
		GenericVirtActionInvoker2< ES3Reader_t2780AF8AA61DA2A817115CEF8612AC0E494D03C9 *, RuntimeObject * >::Invoke(IL2CPP_RGCTX_METHOD_INFO(method->rgctx_data, 0), (ES3Type_t8FBECB7AE75168648B9524E0C2A38DAD4555421D *)__this, (ES3Reader_t2780AF8AA61DA2A817115CEF8612AC0E494D03C9 *)L_0, (RuntimeObject *)L_3);
		// return instance;
		SizeBySpeedModule_t156070A63E0A483D36BCAE783BA554CDA7CAF752  L_4 = V_0;
		SizeBySpeedModule_t156070A63E0A483D36BCAE783BA554CDA7CAF752  L_5 = (SizeBySpeedModule_t156070A63E0A483D36BCAE783BA554CDA7CAF752 )L_4;
		RuntimeObject * L_6 = Box(SizeBySpeedModule_t156070A63E0A483D36BCAE783BA554CDA7CAF752_il2cpp_TypeInfo_var, &L_5);
		return (RuntimeObject *)L_6;
	}
}
// System.Object ES3Types.ES3Type_SizeBySpeedModule::Read<UnityEngine.Rect>(ES3Reader)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject * ES3Type_SizeBySpeedModule_Read_TisRect_t7D9187DB6339DBA5741C09B6CCEF2F54F1966878_mEE68C9EDFFD452C6DEB1EC227D300048C6ED2612_gshared (ES3Type_SizeBySpeedModule_tE2CD943FBEF83D6F6EDB836909B9C475DF2A7FD0 * __this, ES3Reader_t2780AF8AA61DA2A817115CEF8612AC0E494D03C9 * ___reader0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&SizeBySpeedModule_t156070A63E0A483D36BCAE783BA554CDA7CAF752_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	SizeBySpeedModule_t156070A63E0A483D36BCAE783BA554CDA7CAF752  V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		// var instance = new UnityEngine.ParticleSystem.SizeBySpeedModule();
		il2cpp_codegen_initobj((&V_0), sizeof(SizeBySpeedModule_t156070A63E0A483D36BCAE783BA554CDA7CAF752 ));
		// ReadInto<T>(reader, instance);
		ES3Reader_t2780AF8AA61DA2A817115CEF8612AC0E494D03C9 * L_0 = ___reader0;
		SizeBySpeedModule_t156070A63E0A483D36BCAE783BA554CDA7CAF752  L_1 = V_0;
		SizeBySpeedModule_t156070A63E0A483D36BCAE783BA554CDA7CAF752  L_2 = (SizeBySpeedModule_t156070A63E0A483D36BCAE783BA554CDA7CAF752 )L_1;
		RuntimeObject * L_3 = Box(SizeBySpeedModule_t156070A63E0A483D36BCAE783BA554CDA7CAF752_il2cpp_TypeInfo_var, &L_2);
		NullCheck((ES3Type_t8FBECB7AE75168648B9524E0C2A38DAD4555421D *)__this);
		GenericVirtActionInvoker2< ES3Reader_t2780AF8AA61DA2A817115CEF8612AC0E494D03C9 *, RuntimeObject * >::Invoke(IL2CPP_RGCTX_METHOD_INFO(method->rgctx_data, 0), (ES3Type_t8FBECB7AE75168648B9524E0C2A38DAD4555421D *)__this, (ES3Reader_t2780AF8AA61DA2A817115CEF8612AC0E494D03C9 *)L_0, (RuntimeObject *)L_3);
		// return instance;
		SizeBySpeedModule_t156070A63E0A483D36BCAE783BA554CDA7CAF752  L_4 = V_0;
		SizeBySpeedModule_t156070A63E0A483D36BCAE783BA554CDA7CAF752  L_5 = (SizeBySpeedModule_t156070A63E0A483D36BCAE783BA554CDA7CAF752 )L_4;
		RuntimeObject * L_6 = Box(SizeBySpeedModule_t156070A63E0A483D36BCAE783BA554CDA7CAF752_il2cpp_TypeInfo_var, &L_5);
		return (RuntimeObject *)L_6;
	}
}
// System.Object ES3Types.ES3Type_SizeBySpeedModule::Read<UnityEngine.RenderTextureDescriptor>(ES3Reader)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject * ES3Type_SizeBySpeedModule_Read_TisRenderTextureDescriptor_t67FF189E1F35AEB5D6C43A2D7103F3A8A8CA0B47_mB0BBC349C4320D5504EA7D405BF44B80645FE18B_gshared (ES3Type_SizeBySpeedModule_tE2CD943FBEF83D6F6EDB836909B9C475DF2A7FD0 * __this, ES3Reader_t2780AF8AA61DA2A817115CEF8612AC0E494D03C9 * ___reader0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&SizeBySpeedModule_t156070A63E0A483D36BCAE783BA554CDA7CAF752_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	SizeBySpeedModule_t156070A63E0A483D36BCAE783BA554CDA7CAF752  V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		// var instance = new UnityEngine.ParticleSystem.SizeBySpeedModule();
		il2cpp_codegen_initobj((&V_0), sizeof(SizeBySpeedModule_t156070A63E0A483D36BCAE783BA554CDA7CAF752 ));
		// ReadInto<T>(reader, instance);
		ES3Reader_t2780AF8AA61DA2A817115CEF8612AC0E494D03C9 * L_0 = ___reader0;
		SizeBySpeedModule_t156070A63E0A483D36BCAE783BA554CDA7CAF752  L_1 = V_0;
		SizeBySpeedModule_t156070A63E0A483D36BCAE783BA554CDA7CAF752  L_2 = (SizeBySpeedModule_t156070A63E0A483D36BCAE783BA554CDA7CAF752 )L_1;
		RuntimeObject * L_3 = Box(SizeBySpeedModule_t156070A63E0A483D36BCAE783BA554CDA7CAF752_il2cpp_TypeInfo_var, &L_2);
		NullCheck((ES3Type_t8FBECB7AE75168648B9524E0C2A38DAD4555421D *)__this);
		GenericVirtActionInvoker2< ES3Reader_t2780AF8AA61DA2A817115CEF8612AC0E494D03C9 *, RuntimeObject * >::Invoke(IL2CPP_RGCTX_METHOD_INFO(method->rgctx_data, 0), (ES3Type_t8FBECB7AE75168648B9524E0C2A38DAD4555421D *)__this, (ES3Reader_t2780AF8AA61DA2A817115CEF8612AC0E494D03C9 *)L_0, (RuntimeObject *)L_3);
		// return instance;
		SizeBySpeedModule_t156070A63E0A483D36BCAE783BA554CDA7CAF752  L_4 = V_0;
		SizeBySpeedModule_t156070A63E0A483D36BCAE783BA554CDA7CAF752  L_5 = (SizeBySpeedModule_t156070A63E0A483D36BCAE783BA554CDA7CAF752 )L_4;
		RuntimeObject * L_6 = Box(SizeBySpeedModule_t156070A63E0A483D36BCAE783BA554CDA7CAF752_il2cpp_TypeInfo_var, &L_5);
		return (RuntimeObject *)L_6;
	}
}
// System.Object ES3Types.ES3Type_SizeBySpeedModule::Read<System.Single>(ES3Reader)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject * ES3Type_SizeBySpeedModule_Read_TisSingle_tE07797BA3C98D4CA9B5A19413C19A76688AB899E_m84F8C9A5A190E64FA37D19FADA6D3D9536BC5826_gshared (ES3Type_SizeBySpeedModule_tE2CD943FBEF83D6F6EDB836909B9C475DF2A7FD0 * __this, ES3Reader_t2780AF8AA61DA2A817115CEF8612AC0E494D03C9 * ___reader0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&SizeBySpeedModule_t156070A63E0A483D36BCAE783BA554CDA7CAF752_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	SizeBySpeedModule_t156070A63E0A483D36BCAE783BA554CDA7CAF752  V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		// var instance = new UnityEngine.ParticleSystem.SizeBySpeedModule();
		il2cpp_codegen_initobj((&V_0), sizeof(SizeBySpeedModule_t156070A63E0A483D36BCAE783BA554CDA7CAF752 ));
		// ReadInto<T>(reader, instance);
		ES3Reader_t2780AF8AA61DA2A817115CEF8612AC0E494D03C9 * L_0 = ___reader0;
		SizeBySpeedModule_t156070A63E0A483D36BCAE783BA554CDA7CAF752  L_1 = V_0;
		SizeBySpeedModule_t156070A63E0A483D36BCAE783BA554CDA7CAF752  L_2 = (SizeBySpeedModule_t156070A63E0A483D36BCAE783BA554CDA7CAF752 )L_1;
		RuntimeObject * L_3 = Box(SizeBySpeedModule_t156070A63E0A483D36BCAE783BA554CDA7CAF752_il2cpp_TypeInfo_var, &L_2);
		NullCheck((ES3Type_t8FBECB7AE75168648B9524E0C2A38DAD4555421D *)__this);
		GenericVirtActionInvoker2< ES3Reader_t2780AF8AA61DA2A817115CEF8612AC0E494D03C9 *, RuntimeObject * >::Invoke(IL2CPP_RGCTX_METHOD_INFO(method->rgctx_data, 0), (ES3Type_t8FBECB7AE75168648B9524E0C2A38DAD4555421D *)__this, (ES3Reader_t2780AF8AA61DA2A817115CEF8612AC0E494D03C9 *)L_0, (RuntimeObject *)L_3);
		// return instance;
		SizeBySpeedModule_t156070A63E0A483D36BCAE783BA554CDA7CAF752  L_4 = V_0;
		SizeBySpeedModule_t156070A63E0A483D36BCAE783BA554CDA7CAF752  L_5 = (SizeBySpeedModule_t156070A63E0A483D36BCAE783BA554CDA7CAF752 )L_4;
		RuntimeObject * L_6 = Box(SizeBySpeedModule_t156070A63E0A483D36BCAE783BA554CDA7CAF752_il2cpp_TypeInfo_var, &L_5);
		return (RuntimeObject *)L_6;
	}
}
// System.Object ES3Types.ES3Type_SizeBySpeedModule::Read<UnityEngine.Vector2>(ES3Reader)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject * ES3Type_SizeBySpeedModule_Read_TisVector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9_mDA88D4B560B74C7CEBC908D459350F0D4FF3AE14_gshared (ES3Type_SizeBySpeedModule_tE2CD943FBEF83D6F6EDB836909B9C475DF2A7FD0 * __this, ES3Reader_t2780AF8AA61DA2A817115CEF8612AC0E494D03C9 * ___reader0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&SizeBySpeedModule_t156070A63E0A483D36BCAE783BA554CDA7CAF752_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	SizeBySpeedModule_t156070A63E0A483D36BCAE783BA554CDA7CAF752  V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		// var instance = new UnityEngine.ParticleSystem.SizeBySpeedModule();
		il2cpp_codegen_initobj((&V_0), sizeof(SizeBySpeedModule_t156070A63E0A483D36BCAE783BA554CDA7CAF752 ));
		// ReadInto<T>(reader, instance);
		ES3Reader_t2780AF8AA61DA2A817115CEF8612AC0E494D03C9 * L_0 = ___reader0;
		SizeBySpeedModule_t156070A63E0A483D36BCAE783BA554CDA7CAF752  L_1 = V_0;
		SizeBySpeedModule_t156070A63E0A483D36BCAE783BA554CDA7CAF752  L_2 = (SizeBySpeedModule_t156070A63E0A483D36BCAE783BA554CDA7CAF752 )L_1;
		RuntimeObject * L_3 = Box(SizeBySpeedModule_t156070A63E0A483D36BCAE783BA554CDA7CAF752_il2cpp_TypeInfo_var, &L_2);
		NullCheck((ES3Type_t8FBECB7AE75168648B9524E0C2A38DAD4555421D *)__this);
		GenericVirtActionInvoker2< ES3Reader_t2780AF8AA61DA2A817115CEF8612AC0E494D03C9 *, RuntimeObject * >::Invoke(IL2CPP_RGCTX_METHOD_INFO(method->rgctx_data, 0), (ES3Type_t8FBECB7AE75168648B9524E0C2A38DAD4555421D *)__this, (ES3Reader_t2780AF8AA61DA2A817115CEF8612AC0E494D03C9 *)L_0, (RuntimeObject *)L_3);
		// return instance;
		SizeBySpeedModule_t156070A63E0A483D36BCAE783BA554CDA7CAF752  L_4 = V_0;
		SizeBySpeedModule_t156070A63E0A483D36BCAE783BA554CDA7CAF752  L_5 = (SizeBySpeedModule_t156070A63E0A483D36BCAE783BA554CDA7CAF752 )L_4;
		RuntimeObject * L_6 = Box(SizeBySpeedModule_t156070A63E0A483D36BCAE783BA554CDA7CAF752_il2cpp_TypeInfo_var, &L_5);
		return (RuntimeObject *)L_6;
	}
}
// System.Object ES3Types.ES3Type_SizeBySpeedModule::Read<UnityEngine.Vector3>(ES3Reader)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject * ES3Type_SizeBySpeedModule_Read_TisVector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E_m31C28F7A09AE4D6CD0B501289C8CBD25BABE5F91_gshared (ES3Type_SizeBySpeedModule_tE2CD943FBEF83D6F6EDB836909B9C475DF2A7FD0 * __this, ES3Reader_t2780AF8AA61DA2A817115CEF8612AC0E494D03C9 * ___reader0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&SizeBySpeedModule_t156070A63E0A483D36BCAE783BA554CDA7CAF752_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	SizeBySpeedModule_t156070A63E0A483D36BCAE783BA554CDA7CAF752  V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		// var instance = new UnityEngine.ParticleSystem.SizeBySpeedModule();
		il2cpp_codegen_initobj((&V_0), sizeof(SizeBySpeedModule_t156070A63E0A483D36BCAE783BA554CDA7CAF752 ));
		// ReadInto<T>(reader, instance);
		ES3Reader_t2780AF8AA61DA2A817115CEF8612AC0E494D03C9 * L_0 = ___reader0;
		SizeBySpeedModule_t156070A63E0A483D36BCAE783BA554CDA7CAF752  L_1 = V_0;
		SizeBySpeedModule_t156070A63E0A483D36BCAE783BA554CDA7CAF752  L_2 = (SizeBySpeedModule_t156070A63E0A483D36BCAE783BA554CDA7CAF752 )L_1;
		RuntimeObject * L_3 = Box(SizeBySpeedModule_t156070A63E0A483D36BCAE783BA554CDA7CAF752_il2cpp_TypeInfo_var, &L_2);
		NullCheck((ES3Type_t8FBECB7AE75168648B9524E0C2A38DAD4555421D *)__this);
		GenericVirtActionInvoker2< ES3Reader_t2780AF8AA61DA2A817115CEF8612AC0E494D03C9 *, RuntimeObject * >::Invoke(IL2CPP_RGCTX_METHOD_INFO(method->rgctx_data, 0), (ES3Type_t8FBECB7AE75168648B9524E0C2A38DAD4555421D *)__this, (ES3Reader_t2780AF8AA61DA2A817115CEF8612AC0E494D03C9 *)L_0, (RuntimeObject *)L_3);
		// return instance;
		SizeBySpeedModule_t156070A63E0A483D36BCAE783BA554CDA7CAF752  L_4 = V_0;
		SizeBySpeedModule_t156070A63E0A483D36BCAE783BA554CDA7CAF752  L_5 = (SizeBySpeedModule_t156070A63E0A483D36BCAE783BA554CDA7CAF752 )L_4;
		RuntimeObject * L_6 = Box(SizeBySpeedModule_t156070A63E0A483D36BCAE783BA554CDA7CAF752_il2cpp_TypeInfo_var, &L_5);
		return (RuntimeObject *)L_6;
	}
}
// System.Object ES3Types.ES3Type_SizeBySpeedModule::Read<UnityEngine.Vector4>(ES3Reader)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject * ES3Type_SizeBySpeedModule_Read_TisVector4_tA56A37FC5661BCC89C3DDC24BE12BA5BCB6A02C7_m11382A517DD410AF147234233910A510A45D88DB_gshared (ES3Type_SizeBySpeedModule_tE2CD943FBEF83D6F6EDB836909B9C475DF2A7FD0 * __this, ES3Reader_t2780AF8AA61DA2A817115CEF8612AC0E494D03C9 * ___reader0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&SizeBySpeedModule_t156070A63E0A483D36BCAE783BA554CDA7CAF752_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	SizeBySpeedModule_t156070A63E0A483D36BCAE783BA554CDA7CAF752  V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		// var instance = new UnityEngine.ParticleSystem.SizeBySpeedModule();
		il2cpp_codegen_initobj((&V_0), sizeof(SizeBySpeedModule_t156070A63E0A483D36BCAE783BA554CDA7CAF752 ));
		// ReadInto<T>(reader, instance);
		ES3Reader_t2780AF8AA61DA2A817115CEF8612AC0E494D03C9 * L_0 = ___reader0;
		SizeBySpeedModule_t156070A63E0A483D36BCAE783BA554CDA7CAF752  L_1 = V_0;
		SizeBySpeedModule_t156070A63E0A483D36BCAE783BA554CDA7CAF752  L_2 = (SizeBySpeedModule_t156070A63E0A483D36BCAE783BA554CDA7CAF752 )L_1;
		RuntimeObject * L_3 = Box(SizeBySpeedModule_t156070A63E0A483D36BCAE783BA554CDA7CAF752_il2cpp_TypeInfo_var, &L_2);
		NullCheck((ES3Type_t8FBECB7AE75168648B9524E0C2A38DAD4555421D *)__this);
		GenericVirtActionInvoker2< ES3Reader_t2780AF8AA61DA2A817115CEF8612AC0E494D03C9 *, RuntimeObject * >::Invoke(IL2CPP_RGCTX_METHOD_INFO(method->rgctx_data, 0), (ES3Type_t8FBECB7AE75168648B9524E0C2A38DAD4555421D *)__this, (ES3Reader_t2780AF8AA61DA2A817115CEF8612AC0E494D03C9 *)L_0, (RuntimeObject *)L_3);
		// return instance;
		SizeBySpeedModule_t156070A63E0A483D36BCAE783BA554CDA7CAF752  L_4 = V_0;
		SizeBySpeedModule_t156070A63E0A483D36BCAE783BA554CDA7CAF752  L_5 = (SizeBySpeedModule_t156070A63E0A483D36BCAE783BA554CDA7CAF752 )L_4;
		RuntimeObject * L_6 = Box(SizeBySpeedModule_t156070A63E0A483D36BCAE783BA554CDA7CAF752_il2cpp_TypeInfo_var, &L_5);
		return (RuntimeObject *)L_6;
	}
}
// System.Object ES3Types.ES3Type_SizeBySpeedModule::Read<UnityEngine.ParticleSystem/MinMaxCurve>(ES3Reader)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject * ES3Type_SizeBySpeedModule_Read_TisMinMaxCurve_tF036239442AB2D438B1EDABEBC785426871084CD_mE53158DC155D9D246F8DE14A20477D525D1EDA2B_gshared (ES3Type_SizeBySpeedModule_tE2CD943FBEF83D6F6EDB836909B9C475DF2A7FD0 * __this, ES3Reader_t2780AF8AA61DA2A817115CEF8612AC0E494D03C9 * ___reader0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&SizeBySpeedModule_t156070A63E0A483D36BCAE783BA554CDA7CAF752_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	SizeBySpeedModule_t156070A63E0A483D36BCAE783BA554CDA7CAF752  V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		// var instance = new UnityEngine.ParticleSystem.SizeBySpeedModule();
		il2cpp_codegen_initobj((&V_0), sizeof(SizeBySpeedModule_t156070A63E0A483D36BCAE783BA554CDA7CAF752 ));
		// ReadInto<T>(reader, instance);
		ES3Reader_t2780AF8AA61DA2A817115CEF8612AC0E494D03C9 * L_0 = ___reader0;
		SizeBySpeedModule_t156070A63E0A483D36BCAE783BA554CDA7CAF752  L_1 = V_0;
		SizeBySpeedModule_t156070A63E0A483D36BCAE783BA554CDA7CAF752  L_2 = (SizeBySpeedModule_t156070A63E0A483D36BCAE783BA554CDA7CAF752 )L_1;
		RuntimeObject * L_3 = Box(SizeBySpeedModule_t156070A63E0A483D36BCAE783BA554CDA7CAF752_il2cpp_TypeInfo_var, &L_2);
		NullCheck((ES3Type_t8FBECB7AE75168648B9524E0C2A38DAD4555421D *)__this);
		GenericVirtActionInvoker2< ES3Reader_t2780AF8AA61DA2A817115CEF8612AC0E494D03C9 *, RuntimeObject * >::Invoke(IL2CPP_RGCTX_METHOD_INFO(method->rgctx_data, 0), (ES3Type_t8FBECB7AE75168648B9524E0C2A38DAD4555421D *)__this, (ES3Reader_t2780AF8AA61DA2A817115CEF8612AC0E494D03C9 *)L_0, (RuntimeObject *)L_3);
		// return instance;
		SizeBySpeedModule_t156070A63E0A483D36BCAE783BA554CDA7CAF752  L_4 = V_0;
		SizeBySpeedModule_t156070A63E0A483D36BCAE783BA554CDA7CAF752  L_5 = (SizeBySpeedModule_t156070A63E0A483D36BCAE783BA554CDA7CAF752 )L_4;
		RuntimeObject * L_6 = Box(SizeBySpeedModule_t156070A63E0A483D36BCAE783BA554CDA7CAF752_il2cpp_TypeInfo_var, &L_5);
		return (RuntimeObject *)L_6;
	}
}
// System.Object ES3Types.ES3Type_SizeBySpeedModule::Read<UnityEngine.ParticleSystem/MinMaxGradient>(ES3Reader)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject * ES3Type_SizeBySpeedModule_Read_TisMinMaxGradient_tF4530B26F29D9635D670A33B9EE581EAC48C12B7_m44DAD4D346213739EB3213FB413CE017F5C561FC_gshared (ES3Type_SizeBySpeedModule_tE2CD943FBEF83D6F6EDB836909B9C475DF2A7FD0 * __this, ES3Reader_t2780AF8AA61DA2A817115CEF8612AC0E494D03C9 * ___reader0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&SizeBySpeedModule_t156070A63E0A483D36BCAE783BA554CDA7CAF752_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	SizeBySpeedModule_t156070A63E0A483D36BCAE783BA554CDA7CAF752  V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		// var instance = new UnityEngine.ParticleSystem.SizeBySpeedModule();
		il2cpp_codegen_initobj((&V_0), sizeof(SizeBySpeedModule_t156070A63E0A483D36BCAE783BA554CDA7CAF752 ));
		// ReadInto<T>(reader, instance);
		ES3Reader_t2780AF8AA61DA2A817115CEF8612AC0E494D03C9 * L_0 = ___reader0;
		SizeBySpeedModule_t156070A63E0A483D36BCAE783BA554CDA7CAF752  L_1 = V_0;
		SizeBySpeedModule_t156070A63E0A483D36BCAE783BA554CDA7CAF752  L_2 = (SizeBySpeedModule_t156070A63E0A483D36BCAE783BA554CDA7CAF752 )L_1;
		RuntimeObject * L_3 = Box(SizeBySpeedModule_t156070A63E0A483D36BCAE783BA554CDA7CAF752_il2cpp_TypeInfo_var, &L_2);
		NullCheck((ES3Type_t8FBECB7AE75168648B9524E0C2A38DAD4555421D *)__this);
		GenericVirtActionInvoker2< ES3Reader_t2780AF8AA61DA2A817115CEF8612AC0E494D03C9 *, RuntimeObject * >::Invoke(IL2CPP_RGCTX_METHOD_INFO(method->rgctx_data, 0), (ES3Type_t8FBECB7AE75168648B9524E0C2A38DAD4555421D *)__this, (ES3Reader_t2780AF8AA61DA2A817115CEF8612AC0E494D03C9 *)L_0, (RuntimeObject *)L_3);
		// return instance;
		SizeBySpeedModule_t156070A63E0A483D36BCAE783BA554CDA7CAF752  L_4 = V_0;
		SizeBySpeedModule_t156070A63E0A483D36BCAE783BA554CDA7CAF752  L_5 = (SizeBySpeedModule_t156070A63E0A483D36BCAE783BA554CDA7CAF752 )L_4;
		RuntimeObject * L_6 = Box(SizeBySpeedModule_t156070A63E0A483D36BCAE783BA554CDA7CAF752_il2cpp_TypeInfo_var, &L_5);
		return (RuntimeObject *)L_6;
	}
}
// System.Void ES3Types.ES3Type_SizeBySpeedModule::ReadInto<System.Boolean>(ES3Reader,System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ES3Type_SizeBySpeedModule_ReadInto_TisBoolean_t07D1E3F34E4813023D64F584DFF7B34C9D922F37_m8870544C9AAFBE64EA305A1493E48F970B98C8DB_gshared (ES3Type_SizeBySpeedModule_tE2CD943FBEF83D6F6EDB836909B9C475DF2A7FD0 * __this, ES3Reader_t2780AF8AA61DA2A817115CEF8612AC0E494D03C9 * ___reader0, RuntimeObject * ___obj1, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ES3Reader_Read_TisBoolean_t07D1E3F34E4813023D64F584DFF7B34C9D922F37_mC6D1B158268FF9B97822FF9F5B37FB1723FEDA22_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ES3Reader_Read_TisMinMaxCurve_tF036239442AB2D438B1EDABEBC785426871084CD_mD285150CBFB52440643BBECB5ADF4EE8DE940535_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ES3Reader_Read_TisSingle_tE07797BA3C98D4CA9B5A19413C19A76688AB899E_m4A0416374498BDA042B8EB21E49B72326D6CE5F4_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ES3Reader_Read_TisVector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9_mD2C1683A01C44107D1473023F8188DDEA71D9A7D_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ES3Type_MinMaxCurve_tC5342BF0F8735B85CB5E16FDD4C6FACC8AFAD3B7_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ES3Type_Vector2_t803CDF887D02E9215B016DFABE969B06638FB1F5_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ES3Type_bool_t8F309F7B9CC735FF1DEE68081B6E3CAB367745F4_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ES3Type_float_tF86B773C86731BD9AD79448B860BBB178FE77644_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&SizeBySpeedModule_t156070A63E0A483D36BCAE783BA554CDA7CAF752_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral062DB096C728515E033CF8C48A1C1F0B9A79384B);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral1B024D537329B86AB0DF96B2A714180F442F53E9);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral2F8690361553406965679AEF125F896BC5FC61F5);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral3EE5A4671A4E5AEBD31CA5F013A7773DC18ED22B);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral4845015737DC41475709911228278216EE4DC3AF);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral8C6F88DEE0DFE3513BB8B44A8CF0FEE437F4EFFB);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral9384C6EF2DA5C0BD5274A0DACFF291D0ABBFD8B1);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral9CE1604D659135925CCC4DD1F526AFFE42E689F1);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral9E61658953B4F9BB4A05E3D2D2BC18990BADE934);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralBD0DD0004699EF86BF0FC1D161FA3766AF5126C4);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralF9D225733E1D10F9344C755C4A9C0870CD1DE97B);
		s_Il2CppMethodInitialized = true;
	}
	SizeBySpeedModule_t156070A63E0A483D36BCAE783BA554CDA7CAF752  V_0;
	memset((&V_0), 0, sizeof(V_0));
	String_t* V_1 = NULL;
	uint32_t V_2 = 0;
	{
		// var instance = (UnityEngine.ParticleSystem.SizeBySpeedModule)obj;
		RuntimeObject * L_0 = ___obj1;
		V_0 = (SizeBySpeedModule_t156070A63E0A483D36BCAE783BA554CDA7CAF752 )((*(SizeBySpeedModule_t156070A63E0A483D36BCAE783BA554CDA7CAF752 *)((SizeBySpeedModule_t156070A63E0A483D36BCAE783BA554CDA7CAF752 *)UnBox(L_0, SizeBySpeedModule_t156070A63E0A483D36BCAE783BA554CDA7CAF752_il2cpp_TypeInfo_var))));
		goto IL_0290;
	}

IL_000c:
	{
		String_t* L_1 = V_1;
		if (!L_1)
		{
			goto IL_028a;
		}
	}
	{
		String_t* L_2 = V_1;
		uint32_t L_3;
		L_3 = U3CPrivateImplementationDetailsU3E_ComputeStringHash_m3ADC1F612F9EE3DD518E6F0023A0DE0EE2B120A7((String_t*)L_2, /*hidden argument*/NULL);
		V_2 = (uint32_t)L_3;
		uint32_t L_4 = V_2;
		if ((!(((uint32_t)L_4) <= ((uint32_t)((int32_t)1479031685)))))
		{
			goto IL_006a;
		}
	}
	{
		uint32_t L_5 = V_2;
		if ((!(((uint32_t)L_5) <= ((uint32_t)((int32_t)597743964)))))
		{
			goto IL_0044;
		}
	}
	{
		uint32_t L_6 = V_2;
		if ((((int32_t)L_6) == ((int32_t)((int32_t)49525662))))
		{
			goto IL_00bb;
		}
	}
	{
		uint32_t L_7 = V_2;
		if ((((int32_t)L_7) == ((int32_t)((int32_t)597743964))))
		{
			goto IL_00d0;
		}
	}
	{
		goto IL_028a;
	}

IL_0044:
	{
		uint32_t L_8 = V_2;
		if ((((int32_t)L_8) == ((int32_t)((int32_t)726266686))))
		{
			goto IL_0163;
		}
	}
	{
		uint32_t L_9 = V_2;
		if ((((int32_t)L_9) == ((int32_t)((int32_t)1105436259))))
		{
			goto IL_00e5;
		}
	}
	{
		uint32_t L_10 = V_2;
		if ((((int32_t)L_10) == ((int32_t)((int32_t)1479031685))))
		{
			goto IL_0178;
		}
	}
	{
		goto IL_028a;
	}

IL_006a:
	{
		uint32_t L_11 = V_2;
		if ((!(((uint32_t)L_11) <= ((uint32_t)((int32_t)-86242094)))))
		{
			goto IL_0098;
		}
	}
	{
		uint32_t L_12 = V_2;
		if ((((int32_t)L_12) == ((int32_t)((int32_t)-1013869429))))
		{
			goto IL_0139;
		}
	}
	{
		uint32_t L_13 = V_2;
		if ((((int32_t)L_13) == ((int32_t)((int32_t)-585050980))))
		{
			goto IL_010f;
		}
	}
	{
		uint32_t L_14 = V_2;
		if ((((int32_t)L_14) == ((int32_t)((int32_t)-86242094))))
		{
			goto IL_018d;
		}
	}
	{
		goto IL_028a;
	}

IL_0098:
	{
		uint32_t L_15 = V_2;
		if ((((int32_t)L_15) == ((int32_t)((int32_t)-66302220))))
		{
			goto IL_0124;
		}
	}
	{
		uint32_t L_16 = V_2;
		if ((((int32_t)L_16) == ((int32_t)((int32_t)-49524601))))
		{
			goto IL_00fa;
		}
	}
	{
		uint32_t L_17 = V_2;
		if ((((int32_t)L_17) == ((int32_t)((int32_t)-15969363))))
		{
			goto IL_014e;
		}
	}
	{
		goto IL_028a;
	}

IL_00bb:
	{
		String_t* L_18 = V_1;
		bool L_19;
		L_19 = String_op_Equality_m50B3548E4AC232558190B0052877B290AA1D436A((String_t*)L_18, (String_t*)_stringLiteralF9D225733E1D10F9344C755C4A9C0870CD1DE97B, /*hidden argument*/NULL);
		if (L_19)
		{
			goto IL_01a2;
		}
	}
	{
		goto IL_028a;
	}

IL_00d0:
	{
		String_t* L_20 = V_1;
		bool L_21;
		L_21 = String_op_Equality_m50B3548E4AC232558190B0052877B290AA1D436A((String_t*)L_20, (String_t*)_stringLiteral3EE5A4671A4E5AEBD31CA5F013A7773DC18ED22B, /*hidden argument*/NULL);
		if (L_21)
		{
			goto IL_01b9;
		}
	}
	{
		goto IL_028a;
	}

IL_00e5:
	{
		String_t* L_22 = V_1;
		bool L_23;
		L_23 = String_op_Equality_m50B3548E4AC232558190B0052877B290AA1D436A((String_t*)L_22, (String_t*)_stringLiteralBD0DD0004699EF86BF0FC1D161FA3766AF5126C4, /*hidden argument*/NULL);
		if (L_23)
		{
			goto IL_01d0;
		}
	}
	{
		goto IL_028a;
	}

IL_00fa:
	{
		String_t* L_24 = V_1;
		bool L_25;
		L_25 = String_op_Equality_m50B3548E4AC232558190B0052877B290AA1D436A((String_t*)L_24, (String_t*)_stringLiteral062DB096C728515E033CF8C48A1C1F0B9A79384B, /*hidden argument*/NULL);
		if (L_25)
		{
			goto IL_01e7;
		}
	}
	{
		goto IL_028a;
	}

IL_010f:
	{
		String_t* L_26 = V_1;
		bool L_27;
		L_27 = String_op_Equality_m50B3548E4AC232558190B0052877B290AA1D436A((String_t*)L_26, (String_t*)_stringLiteral8C6F88DEE0DFE3513BB8B44A8CF0FEE437F4EFFB, /*hidden argument*/NULL);
		if (L_27)
		{
			goto IL_01fe;
		}
	}
	{
		goto IL_028a;
	}

IL_0124:
	{
		String_t* L_28 = V_1;
		bool L_29;
		L_29 = String_op_Equality_m50B3548E4AC232558190B0052877B290AA1D436A((String_t*)L_28, (String_t*)_stringLiteral9384C6EF2DA5C0BD5274A0DACFF291D0ABBFD8B1, /*hidden argument*/NULL);
		if (L_29)
		{
			goto IL_0212;
		}
	}
	{
		goto IL_028a;
	}

IL_0139:
	{
		String_t* L_30 = V_1;
		bool L_31;
		L_31 = String_op_Equality_m50B3548E4AC232558190B0052877B290AA1D436A((String_t*)L_30, (String_t*)_stringLiteral9E61658953B4F9BB4A05E3D2D2BC18990BADE934, /*hidden argument*/NULL);
		if (L_31)
		{
			goto IL_0226;
		}
	}
	{
		goto IL_028a;
	}

IL_014e:
	{
		String_t* L_32 = V_1;
		bool L_33;
		L_33 = String_op_Equality_m50B3548E4AC232558190B0052877B290AA1D436A((String_t*)L_32, (String_t*)_stringLiteral9CE1604D659135925CCC4DD1F526AFFE42E689F1, /*hidden argument*/NULL);
		if (L_33)
		{
			goto IL_023a;
		}
	}
	{
		goto IL_028a;
	}

IL_0163:
	{
		String_t* L_34 = V_1;
		bool L_35;
		L_35 = String_op_Equality_m50B3548E4AC232558190B0052877B290AA1D436A((String_t*)L_34, (String_t*)_stringLiteral2F8690361553406965679AEF125F896BC5FC61F5, /*hidden argument*/NULL);
		if (L_35)
		{
			goto IL_024e;
		}
	}
	{
		goto IL_028a;
	}

IL_0178:
	{
		String_t* L_36 = V_1;
		bool L_37;
		L_37 = String_op_Equality_m50B3548E4AC232558190B0052877B290AA1D436A((String_t*)L_36, (String_t*)_stringLiteral1B024D537329B86AB0DF96B2A714180F442F53E9, /*hidden argument*/NULL);
		if (L_37)
		{
			goto IL_0262;
		}
	}
	{
		goto IL_028a;
	}

IL_018d:
	{
		String_t* L_38 = V_1;
		bool L_39;
		L_39 = String_op_Equality_m50B3548E4AC232558190B0052877B290AA1D436A((String_t*)L_38, (String_t*)_stringLiteral4845015737DC41475709911228278216EE4DC3AF, /*hidden argument*/NULL);
		if (L_39)
		{
			goto IL_0276;
		}
	}
	{
		goto IL_028a;
	}

IL_01a2:
	{
		// instance.enabled = reader.Read<System.Boolean>(ES3Type_bool.Instance);
		ES3Reader_t2780AF8AA61DA2A817115CEF8612AC0E494D03C9 * L_40 = ___reader0;
		IL2CPP_RUNTIME_CLASS_INIT(ES3Type_bool_t8F309F7B9CC735FF1DEE68081B6E3CAB367745F4_il2cpp_TypeInfo_var);
		ES3Type_t8FBECB7AE75168648B9524E0C2A38DAD4555421D * L_41 = ((ES3Type_bool_t8F309F7B9CC735FF1DEE68081B6E3CAB367745F4_StaticFields*)il2cpp_codegen_static_fields_for(ES3Type_bool_t8F309F7B9CC735FF1DEE68081B6E3CAB367745F4_il2cpp_TypeInfo_var))->get_Instance_12();
		NullCheck((ES3Reader_t2780AF8AA61DA2A817115CEF8612AC0E494D03C9 *)L_40);
		bool L_42;
		L_42 = GenericVirtFuncInvoker1< bool, ES3Type_t8FBECB7AE75168648B9524E0C2A38DAD4555421D * >::Invoke(ES3Reader_Read_TisBoolean_t07D1E3F34E4813023D64F584DFF7B34C9D922F37_mC6D1B158268FF9B97822FF9F5B37FB1723FEDA22_RuntimeMethod_var, (ES3Reader_t2780AF8AA61DA2A817115CEF8612AC0E494D03C9 *)L_40, (ES3Type_t8FBECB7AE75168648B9524E0C2A38DAD4555421D *)L_41);
		SizeBySpeedModule_set_enabled_m0CC5D81593E6D047B2B150041577EC93D3C7701C((SizeBySpeedModule_t156070A63E0A483D36BCAE783BA554CDA7CAF752 *)(SizeBySpeedModule_t156070A63E0A483D36BCAE783BA554CDA7CAF752 *)(&V_0), (bool)L_42, /*hidden argument*/NULL);
		// break;
		goto IL_0290;
	}

IL_01b9:
	{
		// instance.size = reader.Read<UnityEngine.ParticleSystem.MinMaxCurve>(ES3Type_MinMaxCurve.Instance);
		ES3Reader_t2780AF8AA61DA2A817115CEF8612AC0E494D03C9 * L_43 = ___reader0;
		IL2CPP_RUNTIME_CLASS_INIT(ES3Type_MinMaxCurve_tC5342BF0F8735B85CB5E16FDD4C6FACC8AFAD3B7_il2cpp_TypeInfo_var);
		ES3Type_t8FBECB7AE75168648B9524E0C2A38DAD4555421D * L_44 = ((ES3Type_MinMaxCurve_tC5342BF0F8735B85CB5E16FDD4C6FACC8AFAD3B7_StaticFields*)il2cpp_codegen_static_fields_for(ES3Type_MinMaxCurve_tC5342BF0F8735B85CB5E16FDD4C6FACC8AFAD3B7_il2cpp_TypeInfo_var))->get_Instance_12();
		NullCheck((ES3Reader_t2780AF8AA61DA2A817115CEF8612AC0E494D03C9 *)L_43);
		MinMaxCurve_tF036239442AB2D438B1EDABEBC785426871084CD  L_45;
		L_45 = GenericVirtFuncInvoker1< MinMaxCurve_tF036239442AB2D438B1EDABEBC785426871084CD , ES3Type_t8FBECB7AE75168648B9524E0C2A38DAD4555421D * >::Invoke(ES3Reader_Read_TisMinMaxCurve_tF036239442AB2D438B1EDABEBC785426871084CD_mD285150CBFB52440643BBECB5ADF4EE8DE940535_RuntimeMethod_var, (ES3Reader_t2780AF8AA61DA2A817115CEF8612AC0E494D03C9 *)L_43, (ES3Type_t8FBECB7AE75168648B9524E0C2A38DAD4555421D *)L_44);
		SizeBySpeedModule_set_size_mB0D87FAEF26DF701E303C3D480E83465AE600D12((SizeBySpeedModule_t156070A63E0A483D36BCAE783BA554CDA7CAF752 *)(SizeBySpeedModule_t156070A63E0A483D36BCAE783BA554CDA7CAF752 *)(&V_0), (MinMaxCurve_tF036239442AB2D438B1EDABEBC785426871084CD )L_45, /*hidden argument*/NULL);
		// break;
		goto IL_0290;
	}

IL_01d0:
	{
		// instance.sizeMultiplier = reader.Read<System.Single>(ES3Type_float.Instance);
		ES3Reader_t2780AF8AA61DA2A817115CEF8612AC0E494D03C9 * L_46 = ___reader0;
		IL2CPP_RUNTIME_CLASS_INIT(ES3Type_float_tF86B773C86731BD9AD79448B860BBB178FE77644_il2cpp_TypeInfo_var);
		ES3Type_t8FBECB7AE75168648B9524E0C2A38DAD4555421D * L_47 = ((ES3Type_float_tF86B773C86731BD9AD79448B860BBB178FE77644_StaticFields*)il2cpp_codegen_static_fields_for(ES3Type_float_tF86B773C86731BD9AD79448B860BBB178FE77644_il2cpp_TypeInfo_var))->get_Instance_12();
		NullCheck((ES3Reader_t2780AF8AA61DA2A817115CEF8612AC0E494D03C9 *)L_46);
		float L_48;
		L_48 = GenericVirtFuncInvoker1< float, ES3Type_t8FBECB7AE75168648B9524E0C2A38DAD4555421D * >::Invoke(ES3Reader_Read_TisSingle_tE07797BA3C98D4CA9B5A19413C19A76688AB899E_m4A0416374498BDA042B8EB21E49B72326D6CE5F4_RuntimeMethod_var, (ES3Reader_t2780AF8AA61DA2A817115CEF8612AC0E494D03C9 *)L_46, (ES3Type_t8FBECB7AE75168648B9524E0C2A38DAD4555421D *)L_47);
		SizeBySpeedModule_set_sizeMultiplier_m6087A72CA424D9F258632500EFA8BA9FB71F6141((SizeBySpeedModule_t156070A63E0A483D36BCAE783BA554CDA7CAF752 *)(SizeBySpeedModule_t156070A63E0A483D36BCAE783BA554CDA7CAF752 *)(&V_0), (float)L_48, /*hidden argument*/NULL);
		// break;
		goto IL_0290;
	}

IL_01e7:
	{
		// instance.x = reader.Read<UnityEngine.ParticleSystem.MinMaxCurve>(ES3Type_MinMaxCurve.Instance);
		ES3Reader_t2780AF8AA61DA2A817115CEF8612AC0E494D03C9 * L_49 = ___reader0;
		IL2CPP_RUNTIME_CLASS_INIT(ES3Type_MinMaxCurve_tC5342BF0F8735B85CB5E16FDD4C6FACC8AFAD3B7_il2cpp_TypeInfo_var);
		ES3Type_t8FBECB7AE75168648B9524E0C2A38DAD4555421D * L_50 = ((ES3Type_MinMaxCurve_tC5342BF0F8735B85CB5E16FDD4C6FACC8AFAD3B7_StaticFields*)il2cpp_codegen_static_fields_for(ES3Type_MinMaxCurve_tC5342BF0F8735B85CB5E16FDD4C6FACC8AFAD3B7_il2cpp_TypeInfo_var))->get_Instance_12();
		NullCheck((ES3Reader_t2780AF8AA61DA2A817115CEF8612AC0E494D03C9 *)L_49);
		MinMaxCurve_tF036239442AB2D438B1EDABEBC785426871084CD  L_51;
		L_51 = GenericVirtFuncInvoker1< MinMaxCurve_tF036239442AB2D438B1EDABEBC785426871084CD , ES3Type_t8FBECB7AE75168648B9524E0C2A38DAD4555421D * >::Invoke(ES3Reader_Read_TisMinMaxCurve_tF036239442AB2D438B1EDABEBC785426871084CD_mD285150CBFB52440643BBECB5ADF4EE8DE940535_RuntimeMethod_var, (ES3Reader_t2780AF8AA61DA2A817115CEF8612AC0E494D03C9 *)L_49, (ES3Type_t8FBECB7AE75168648B9524E0C2A38DAD4555421D *)L_50);
		SizeBySpeedModule_set_x_mFFD1FB55668F9C02B2AB87D861F028E57EE81E7B((SizeBySpeedModule_t156070A63E0A483D36BCAE783BA554CDA7CAF752 *)(SizeBySpeedModule_t156070A63E0A483D36BCAE783BA554CDA7CAF752 *)(&V_0), (MinMaxCurve_tF036239442AB2D438B1EDABEBC785426871084CD )L_51, /*hidden argument*/NULL);
		// break;
		goto IL_0290;
	}

IL_01fe:
	{
		// instance.xMultiplier = reader.Read<System.Single>(ES3Type_float.Instance);
		ES3Reader_t2780AF8AA61DA2A817115CEF8612AC0E494D03C9 * L_52 = ___reader0;
		IL2CPP_RUNTIME_CLASS_INIT(ES3Type_float_tF86B773C86731BD9AD79448B860BBB178FE77644_il2cpp_TypeInfo_var);
		ES3Type_t8FBECB7AE75168648B9524E0C2A38DAD4555421D * L_53 = ((ES3Type_float_tF86B773C86731BD9AD79448B860BBB178FE77644_StaticFields*)il2cpp_codegen_static_fields_for(ES3Type_float_tF86B773C86731BD9AD79448B860BBB178FE77644_il2cpp_TypeInfo_var))->get_Instance_12();
		NullCheck((ES3Reader_t2780AF8AA61DA2A817115CEF8612AC0E494D03C9 *)L_52);
		float L_54;
		L_54 = GenericVirtFuncInvoker1< float, ES3Type_t8FBECB7AE75168648B9524E0C2A38DAD4555421D * >::Invoke(ES3Reader_Read_TisSingle_tE07797BA3C98D4CA9B5A19413C19A76688AB899E_m4A0416374498BDA042B8EB21E49B72326D6CE5F4_RuntimeMethod_var, (ES3Reader_t2780AF8AA61DA2A817115CEF8612AC0E494D03C9 *)L_52, (ES3Type_t8FBECB7AE75168648B9524E0C2A38DAD4555421D *)L_53);
		SizeBySpeedModule_set_xMultiplier_m20E2174791982BB87D08217F71EA925022A1B0CC((SizeBySpeedModule_t156070A63E0A483D36BCAE783BA554CDA7CAF752 *)(SizeBySpeedModule_t156070A63E0A483D36BCAE783BA554CDA7CAF752 *)(&V_0), (float)L_54, /*hidden argument*/NULL);
		// break;
		goto IL_0290;
	}

IL_0212:
	{
		// instance.y = reader.Read<UnityEngine.ParticleSystem.MinMaxCurve>(ES3Type_MinMaxCurve.Instance);
		ES3Reader_t2780AF8AA61DA2A817115CEF8612AC0E494D03C9 * L_55 = ___reader0;
		IL2CPP_RUNTIME_CLASS_INIT(ES3Type_MinMaxCurve_tC5342BF0F8735B85CB5E16FDD4C6FACC8AFAD3B7_il2cpp_TypeInfo_var);
		ES3Type_t8FBECB7AE75168648B9524E0C2A38DAD4555421D * L_56 = ((ES3Type_MinMaxCurve_tC5342BF0F8735B85CB5E16FDD4C6FACC8AFAD3B7_StaticFields*)il2cpp_codegen_static_fields_for(ES3Type_MinMaxCurve_tC5342BF0F8735B85CB5E16FDD4C6FACC8AFAD3B7_il2cpp_TypeInfo_var))->get_Instance_12();
		NullCheck((ES3Reader_t2780AF8AA61DA2A817115CEF8612AC0E494D03C9 *)L_55);
		MinMaxCurve_tF036239442AB2D438B1EDABEBC785426871084CD  L_57;
		L_57 = GenericVirtFuncInvoker1< MinMaxCurve_tF036239442AB2D438B1EDABEBC785426871084CD , ES3Type_t8FBECB7AE75168648B9524E0C2A38DAD4555421D * >::Invoke(ES3Reader_Read_TisMinMaxCurve_tF036239442AB2D438B1EDABEBC785426871084CD_mD285150CBFB52440643BBECB5ADF4EE8DE940535_RuntimeMethod_var, (ES3Reader_t2780AF8AA61DA2A817115CEF8612AC0E494D03C9 *)L_55, (ES3Type_t8FBECB7AE75168648B9524E0C2A38DAD4555421D *)L_56);
		SizeBySpeedModule_set_y_m87016AA5C7B16879AB922CE07FCCF94E3683671F((SizeBySpeedModule_t156070A63E0A483D36BCAE783BA554CDA7CAF752 *)(SizeBySpeedModule_t156070A63E0A483D36BCAE783BA554CDA7CAF752 *)(&V_0), (MinMaxCurve_tF036239442AB2D438B1EDABEBC785426871084CD )L_57, /*hidden argument*/NULL);
		// break;
		goto IL_0290;
	}

IL_0226:
	{
		// instance.yMultiplier = reader.Read<System.Single>(ES3Type_float.Instance);
		ES3Reader_t2780AF8AA61DA2A817115CEF8612AC0E494D03C9 * L_58 = ___reader0;
		IL2CPP_RUNTIME_CLASS_INIT(ES3Type_float_tF86B773C86731BD9AD79448B860BBB178FE77644_il2cpp_TypeInfo_var);
		ES3Type_t8FBECB7AE75168648B9524E0C2A38DAD4555421D * L_59 = ((ES3Type_float_tF86B773C86731BD9AD79448B860BBB178FE77644_StaticFields*)il2cpp_codegen_static_fields_for(ES3Type_float_tF86B773C86731BD9AD79448B860BBB178FE77644_il2cpp_TypeInfo_var))->get_Instance_12();
		NullCheck((ES3Reader_t2780AF8AA61DA2A817115CEF8612AC0E494D03C9 *)L_58);
		float L_60;
		L_60 = GenericVirtFuncInvoker1< float, ES3Type_t8FBECB7AE75168648B9524E0C2A38DAD4555421D * >::Invoke(ES3Reader_Read_TisSingle_tE07797BA3C98D4CA9B5A19413C19A76688AB899E_m4A0416374498BDA042B8EB21E49B72326D6CE5F4_RuntimeMethod_var, (ES3Reader_t2780AF8AA61DA2A817115CEF8612AC0E494D03C9 *)L_58, (ES3Type_t8FBECB7AE75168648B9524E0C2A38DAD4555421D *)L_59);
		SizeBySpeedModule_set_yMultiplier_m16CEB10FE778D443B34EC516FD08191E74CB5CE3((SizeBySpeedModule_t156070A63E0A483D36BCAE783BA554CDA7CAF752 *)(SizeBySpeedModule_t156070A63E0A483D36BCAE783BA554CDA7CAF752 *)(&V_0), (float)L_60, /*hidden argument*/NULL);
		// break;
		goto IL_0290;
	}

IL_023a:
	{
		// instance.z = reader.Read<UnityEngine.ParticleSystem.MinMaxCurve>(ES3Type_MinMaxCurve.Instance);
		ES3Reader_t2780AF8AA61DA2A817115CEF8612AC0E494D03C9 * L_61 = ___reader0;
		IL2CPP_RUNTIME_CLASS_INIT(ES3Type_MinMaxCurve_tC5342BF0F8735B85CB5E16FDD4C6FACC8AFAD3B7_il2cpp_TypeInfo_var);
		ES3Type_t8FBECB7AE75168648B9524E0C2A38DAD4555421D * L_62 = ((ES3Type_MinMaxCurve_tC5342BF0F8735B85CB5E16FDD4C6FACC8AFAD3B7_StaticFields*)il2cpp_codegen_static_fields_for(ES3Type_MinMaxCurve_tC5342BF0F8735B85CB5E16FDD4C6FACC8AFAD3B7_il2cpp_TypeInfo_var))->get_Instance_12();
		NullCheck((ES3Reader_t2780AF8AA61DA2A817115CEF8612AC0E494D03C9 *)L_61);
		MinMaxCurve_tF036239442AB2D438B1EDABEBC785426871084CD  L_63;
		L_63 = GenericVirtFuncInvoker1< MinMaxCurve_tF036239442AB2D438B1EDABEBC785426871084CD , ES3Type_t8FBECB7AE75168648B9524E0C2A38DAD4555421D * >::Invoke(ES3Reader_Read_TisMinMaxCurve_tF036239442AB2D438B1EDABEBC785426871084CD_mD285150CBFB52440643BBECB5ADF4EE8DE940535_RuntimeMethod_var, (ES3Reader_t2780AF8AA61DA2A817115CEF8612AC0E494D03C9 *)L_61, (ES3Type_t8FBECB7AE75168648B9524E0C2A38DAD4555421D *)L_62);
		SizeBySpeedModule_set_z_m789F392BAE1FFE10F22445F0A89FE4905AD48E13((SizeBySpeedModule_t156070A63E0A483D36BCAE783BA554CDA7CAF752 *)(SizeBySpeedModule_t156070A63E0A483D36BCAE783BA554CDA7CAF752 *)(&V_0), (MinMaxCurve_tF036239442AB2D438B1EDABEBC785426871084CD )L_63, /*hidden argument*/NULL);
		// break;
		goto IL_0290;
	}

IL_024e:
	{
		// instance.zMultiplier = reader.Read<System.Single>(ES3Type_float.Instance);
		ES3Reader_t2780AF8AA61DA2A817115CEF8612AC0E494D03C9 * L_64 = ___reader0;
		IL2CPP_RUNTIME_CLASS_INIT(ES3Type_float_tF86B773C86731BD9AD79448B860BBB178FE77644_il2cpp_TypeInfo_var);
		ES3Type_t8FBECB7AE75168648B9524E0C2A38DAD4555421D * L_65 = ((ES3Type_float_tF86B773C86731BD9AD79448B860BBB178FE77644_StaticFields*)il2cpp_codegen_static_fields_for(ES3Type_float_tF86B773C86731BD9AD79448B860BBB178FE77644_il2cpp_TypeInfo_var))->get_Instance_12();
		NullCheck((ES3Reader_t2780AF8AA61DA2A817115CEF8612AC0E494D03C9 *)L_64);
		float L_66;
		L_66 = GenericVirtFuncInvoker1< float, ES3Type_t8FBECB7AE75168648B9524E0C2A38DAD4555421D * >::Invoke(ES3Reader_Read_TisSingle_tE07797BA3C98D4CA9B5A19413C19A76688AB899E_m4A0416374498BDA042B8EB21E49B72326D6CE5F4_RuntimeMethod_var, (ES3Reader_t2780AF8AA61DA2A817115CEF8612AC0E494D03C9 *)L_64, (ES3Type_t8FBECB7AE75168648B9524E0C2A38DAD4555421D *)L_65);
		SizeBySpeedModule_set_zMultiplier_m3CDE48B31D0AA2BDD554D6FB39509E32D3B3540F((SizeBySpeedModule_t156070A63E0A483D36BCAE783BA554CDA7CAF752 *)(SizeBySpeedModule_t156070A63E0A483D36BCAE783BA554CDA7CAF752 *)(&V_0), (float)L_66, /*hidden argument*/NULL);
		// break;
		goto IL_0290;
	}

IL_0262:
	{
		// instance.separateAxes = reader.Read<System.Boolean>(ES3Type_bool.Instance);
		ES3Reader_t2780AF8AA61DA2A817115CEF8612AC0E494D03C9 * L_67 = ___reader0;
		IL2CPP_RUNTIME_CLASS_INIT(ES3Type_bool_t8F309F7B9CC735FF1DEE68081B6E3CAB367745F4_il2cpp_TypeInfo_var);
		ES3Type_t8FBECB7AE75168648B9524E0C2A38DAD4555421D * L_68 = ((ES3Type_bool_t8F309F7B9CC735FF1DEE68081B6E3CAB367745F4_StaticFields*)il2cpp_codegen_static_fields_for(ES3Type_bool_t8F309F7B9CC735FF1DEE68081B6E3CAB367745F4_il2cpp_TypeInfo_var))->get_Instance_12();
		NullCheck((ES3Reader_t2780AF8AA61DA2A817115CEF8612AC0E494D03C9 *)L_67);
		bool L_69;
		L_69 = GenericVirtFuncInvoker1< bool, ES3Type_t8FBECB7AE75168648B9524E0C2A38DAD4555421D * >::Invoke(ES3Reader_Read_TisBoolean_t07D1E3F34E4813023D64F584DFF7B34C9D922F37_mC6D1B158268FF9B97822FF9F5B37FB1723FEDA22_RuntimeMethod_var, (ES3Reader_t2780AF8AA61DA2A817115CEF8612AC0E494D03C9 *)L_67, (ES3Type_t8FBECB7AE75168648B9524E0C2A38DAD4555421D *)L_68);
		SizeBySpeedModule_set_separateAxes_mF8B0B99BA3B98D6A8578B70EA19DFB271657FD8F((SizeBySpeedModule_t156070A63E0A483D36BCAE783BA554CDA7CAF752 *)(SizeBySpeedModule_t156070A63E0A483D36BCAE783BA554CDA7CAF752 *)(&V_0), (bool)L_69, /*hidden argument*/NULL);
		// break;
		goto IL_0290;
	}

IL_0276:
	{
		// instance.range = reader.Read<UnityEngine.Vector2>(ES3Type_Vector2.Instance);
		ES3Reader_t2780AF8AA61DA2A817115CEF8612AC0E494D03C9 * L_70 = ___reader0;
		IL2CPP_RUNTIME_CLASS_INIT(ES3Type_Vector2_t803CDF887D02E9215B016DFABE969B06638FB1F5_il2cpp_TypeInfo_var);
		ES3Type_t8FBECB7AE75168648B9524E0C2A38DAD4555421D * L_71 = ((ES3Type_Vector2_t803CDF887D02E9215B016DFABE969B06638FB1F5_StaticFields*)il2cpp_codegen_static_fields_for(ES3Type_Vector2_t803CDF887D02E9215B016DFABE969B06638FB1F5_il2cpp_TypeInfo_var))->get_Instance_12();
		NullCheck((ES3Reader_t2780AF8AA61DA2A817115CEF8612AC0E494D03C9 *)L_70);
		Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  L_72;
		L_72 = GenericVirtFuncInvoker1< Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9 , ES3Type_t8FBECB7AE75168648B9524E0C2A38DAD4555421D * >::Invoke(ES3Reader_Read_TisVector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9_mD2C1683A01C44107D1473023F8188DDEA71D9A7D_RuntimeMethod_var, (ES3Reader_t2780AF8AA61DA2A817115CEF8612AC0E494D03C9 *)L_70, (ES3Type_t8FBECB7AE75168648B9524E0C2A38DAD4555421D *)L_71);
		SizeBySpeedModule_set_range_mDF4151A1FBDEB5417C8B481907AE58C969F5167D((SizeBySpeedModule_t156070A63E0A483D36BCAE783BA554CDA7CAF752 *)(SizeBySpeedModule_t156070A63E0A483D36BCAE783BA554CDA7CAF752 *)(&V_0), (Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9 )L_72, /*hidden argument*/NULL);
		// break;
		goto IL_0290;
	}

IL_028a:
	{
		// reader.Skip();
		ES3Reader_t2780AF8AA61DA2A817115CEF8612AC0E494D03C9 * L_73 = ___reader0;
		NullCheck((ES3Reader_t2780AF8AA61DA2A817115CEF8612AC0E494D03C9 *)L_73);
		VirtActionInvoker0::Invoke(41 /* System.Void ES3Reader::Skip() */, (ES3Reader_t2780AF8AA61DA2A817115CEF8612AC0E494D03C9 *)L_73);
	}

IL_0290:
	{
		// while((propertyName = reader.ReadPropertyName()) != null)
		ES3Reader_t2780AF8AA61DA2A817115CEF8612AC0E494D03C9 * L_74 = ___reader0;
		NullCheck((ES3Reader_t2780AF8AA61DA2A817115CEF8612AC0E494D03C9 *)L_74);
		String_t* L_75;
		L_75 = VirtFuncInvoker0< String_t* >::Invoke(21 /* System.String ES3Reader::ReadPropertyName() */, (ES3Reader_t2780AF8AA61DA2A817115CEF8612AC0E494D03C9 *)L_74);
		String_t* L_76 = (String_t*)L_75;
		V_1 = (String_t*)L_76;
		if (L_76)
		{
			goto IL_000c;
		}
	}
	{
		// }
		return;
	}
}
// System.Void ES3Types.ES3Type_SizeBySpeedModule::ReadInto<UnityEngine.Bounds>(ES3Reader,System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ES3Type_SizeBySpeedModule_ReadInto_TisBounds_t0F1F36D4F7AF49524B3C2A2259594412A3D3AE37_mB19AD8F4D037107FA74E54BB73D0D9A633DBE885_gshared (ES3Type_SizeBySpeedModule_tE2CD943FBEF83D6F6EDB836909B9C475DF2A7FD0 * __this, ES3Reader_t2780AF8AA61DA2A817115CEF8612AC0E494D03C9 * ___reader0, RuntimeObject * ___obj1, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ES3Reader_Read_TisBoolean_t07D1E3F34E4813023D64F584DFF7B34C9D922F37_mC6D1B158268FF9B97822FF9F5B37FB1723FEDA22_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ES3Reader_Read_TisMinMaxCurve_tF036239442AB2D438B1EDABEBC785426871084CD_mD285150CBFB52440643BBECB5ADF4EE8DE940535_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ES3Reader_Read_TisSingle_tE07797BA3C98D4CA9B5A19413C19A76688AB899E_m4A0416374498BDA042B8EB21E49B72326D6CE5F4_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ES3Reader_Read_TisVector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9_mD2C1683A01C44107D1473023F8188DDEA71D9A7D_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ES3Type_MinMaxCurve_tC5342BF0F8735B85CB5E16FDD4C6FACC8AFAD3B7_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ES3Type_Vector2_t803CDF887D02E9215B016DFABE969B06638FB1F5_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ES3Type_bool_t8F309F7B9CC735FF1DEE68081B6E3CAB367745F4_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ES3Type_float_tF86B773C86731BD9AD79448B860BBB178FE77644_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&SizeBySpeedModule_t156070A63E0A483D36BCAE783BA554CDA7CAF752_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral062DB096C728515E033CF8C48A1C1F0B9A79384B);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral1B024D537329B86AB0DF96B2A714180F442F53E9);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral2F8690361553406965679AEF125F896BC5FC61F5);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral3EE5A4671A4E5AEBD31CA5F013A7773DC18ED22B);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral4845015737DC41475709911228278216EE4DC3AF);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral8C6F88DEE0DFE3513BB8B44A8CF0FEE437F4EFFB);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral9384C6EF2DA5C0BD5274A0DACFF291D0ABBFD8B1);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral9CE1604D659135925CCC4DD1F526AFFE42E689F1);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral9E61658953B4F9BB4A05E3D2D2BC18990BADE934);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralBD0DD0004699EF86BF0FC1D161FA3766AF5126C4);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralF9D225733E1D10F9344C755C4A9C0870CD1DE97B);
		s_Il2CppMethodInitialized = true;
	}
	SizeBySpeedModule_t156070A63E0A483D36BCAE783BA554CDA7CAF752  V_0;
	memset((&V_0), 0, sizeof(V_0));
	String_t* V_1 = NULL;
	uint32_t V_2 = 0;
	{
		// var instance = (UnityEngine.ParticleSystem.SizeBySpeedModule)obj;
		RuntimeObject * L_0 = ___obj1;
		V_0 = (SizeBySpeedModule_t156070A63E0A483D36BCAE783BA554CDA7CAF752 )((*(SizeBySpeedModule_t156070A63E0A483D36BCAE783BA554CDA7CAF752 *)((SizeBySpeedModule_t156070A63E0A483D36BCAE783BA554CDA7CAF752 *)UnBox(L_0, SizeBySpeedModule_t156070A63E0A483D36BCAE783BA554CDA7CAF752_il2cpp_TypeInfo_var))));
		goto IL_0290;
	}

IL_000c:
	{
		String_t* L_1 = V_1;
		if (!L_1)
		{
			goto IL_028a;
		}
	}
	{
		String_t* L_2 = V_1;
		uint32_t L_3;
		L_3 = U3CPrivateImplementationDetailsU3E_ComputeStringHash_m3ADC1F612F9EE3DD518E6F0023A0DE0EE2B120A7((String_t*)L_2, /*hidden argument*/NULL);
		V_2 = (uint32_t)L_3;
		uint32_t L_4 = V_2;
		if ((!(((uint32_t)L_4) <= ((uint32_t)((int32_t)1479031685)))))
		{
			goto IL_006a;
		}
	}
	{
		uint32_t L_5 = V_2;
		if ((!(((uint32_t)L_5) <= ((uint32_t)((int32_t)597743964)))))
		{
			goto IL_0044;
		}
	}
	{
		uint32_t L_6 = V_2;
		if ((((int32_t)L_6) == ((int32_t)((int32_t)49525662))))
		{
			goto IL_00bb;
		}
	}
	{
		uint32_t L_7 = V_2;
		if ((((int32_t)L_7) == ((int32_t)((int32_t)597743964))))
		{
			goto IL_00d0;
		}
	}
	{
		goto IL_028a;
	}

IL_0044:
	{
		uint32_t L_8 = V_2;
		if ((((int32_t)L_8) == ((int32_t)((int32_t)726266686))))
		{
			goto IL_0163;
		}
	}
	{
		uint32_t L_9 = V_2;
		if ((((int32_t)L_9) == ((int32_t)((int32_t)1105436259))))
		{
			goto IL_00e5;
		}
	}
	{
		uint32_t L_10 = V_2;
		if ((((int32_t)L_10) == ((int32_t)((int32_t)1479031685))))
		{
			goto IL_0178;
		}
	}
	{
		goto IL_028a;
	}

IL_006a:
	{
		uint32_t L_11 = V_2;
		if ((!(((uint32_t)L_11) <= ((uint32_t)((int32_t)-86242094)))))
		{
			goto IL_0098;
		}
	}
	{
		uint32_t L_12 = V_2;
		if ((((int32_t)L_12) == ((int32_t)((int32_t)-1013869429))))
		{
			goto IL_0139;
		}
	}
	{
		uint32_t L_13 = V_2;
		if ((((int32_t)L_13) == ((int32_t)((int32_t)-585050980))))
		{
			goto IL_010f;
		}
	}
	{
		uint32_t L_14 = V_2;
		if ((((int32_t)L_14) == ((int32_t)((int32_t)-86242094))))
		{
			goto IL_018d;
		}
	}
	{
		goto IL_028a;
	}

IL_0098:
	{
		uint32_t L_15 = V_2;
		if ((((int32_t)L_15) == ((int32_t)((int32_t)-66302220))))
		{
			goto IL_0124;
		}
	}
	{
		uint32_t L_16 = V_2;
		if ((((int32_t)L_16) == ((int32_t)((int32_t)-49524601))))
		{
			goto IL_00fa;
		}
	}
	{
		uint32_t L_17 = V_2;
		if ((((int32_t)L_17) == ((int32_t)((int32_t)-15969363))))
		{
			goto IL_014e;
		}
	}
	{
		goto IL_028a;
	}

IL_00bb:
	{
		String_t* L_18 = V_1;
		bool L_19;
		L_19 = String_op_Equality_m50B3548E4AC232558190B0052877B290AA1D436A((String_t*)L_18, (String_t*)_stringLiteralF9D225733E1D10F9344C755C4A9C0870CD1DE97B, /*hidden argument*/NULL);
		if (L_19)
		{
			goto IL_01a2;
		}
	}
	{
		goto IL_028a;
	}

IL_00d0:
	{
		String_t* L_20 = V_1;
		bool L_21;
		L_21 = String_op_Equality_m50B3548E4AC232558190B0052877B290AA1D436A((String_t*)L_20, (String_t*)_stringLiteral3EE5A4671A4E5AEBD31CA5F013A7773DC18ED22B, /*hidden argument*/NULL);
		if (L_21)
		{
			goto IL_01b9;
		}
	}
	{
		goto IL_028a;
	}

IL_00e5:
	{
		String_t* L_22 = V_1;
		bool L_23;
		L_23 = String_op_Equality_m50B3548E4AC232558190B0052877B290AA1D436A((String_t*)L_22, (String_t*)_stringLiteralBD0DD0004699EF86BF0FC1D161FA3766AF5126C4, /*hidden argument*/NULL);
		if (L_23)
		{
			goto IL_01d0;
		}
	}
	{
		goto IL_028a;
	}

IL_00fa:
	{
		String_t* L_24 = V_1;
		bool L_25;
		L_25 = String_op_Equality_m50B3548E4AC232558190B0052877B290AA1D436A((String_t*)L_24, (String_t*)_stringLiteral062DB096C728515E033CF8C48A1C1F0B9A79384B, /*hidden argument*/NULL);
		if (L_25)
		{
			goto IL_01e7;
		}
	}
	{
		goto IL_028a;
	}

IL_010f:
	{
		String_t* L_26 = V_1;
		bool L_27;
		L_27 = String_op_Equality_m50B3548E4AC232558190B0052877B290AA1D436A((String_t*)L_26, (String_t*)_stringLiteral8C6F88DEE0DFE3513BB8B44A8CF0FEE437F4EFFB, /*hidden argument*/NULL);
		if (L_27)
		{
			goto IL_01fe;
		}
	}
	{
		goto IL_028a;
	}

IL_0124:
	{
		String_t* L_28 = V_1;
		bool L_29;
		L_29 = String_op_Equality_m50B3548E4AC232558190B0052877B290AA1D436A((String_t*)L_28, (String_t*)_stringLiteral9384C6EF2DA5C0BD5274A0DACFF291D0ABBFD8B1, /*hidden argument*/NULL);
		if (L_29)
		{
			goto IL_0212;
		}
	}
	{
		goto IL_028a;
	}

IL_0139:
	{
		String_t* L_30 = V_1;
		bool L_31;
		L_31 = String_op_Equality_m50B3548E4AC232558190B0052877B290AA1D436A((String_t*)L_30, (String_t*)_stringLiteral9E61658953B4F9BB4A05E3D2D2BC18990BADE934, /*hidden argument*/NULL);
		if (L_31)
		{
			goto IL_0226;
		}
	}
	{
		goto IL_028a;
	}

IL_014e:
	{
		String_t* L_32 = V_1;
		bool L_33;
		L_33 = String_op_Equality_m50B3548E4AC232558190B0052877B290AA1D436A((String_t*)L_32, (String_t*)_stringLiteral9CE1604D659135925CCC4DD1F526AFFE42E689F1, /*hidden argument*/NULL);
		if (L_33)
		{
			goto IL_023a;
		}
	}
	{
		goto IL_028a;
	}

IL_0163:
	{
		String_t* L_34 = V_1;
		bool L_35;
		L_35 = String_op_Equality_m50B3548E4AC232558190B0052877B290AA1D436A((String_t*)L_34, (String_t*)_stringLiteral2F8690361553406965679AEF125F896BC5FC61F5, /*hidden argument*/NULL);
		if (L_35)
		{
			goto IL_024e;
		}
	}
	{
		goto IL_028a;
	}

IL_0178:
	{
		String_t* L_36 = V_1;
		bool L_37;
		L_37 = String_op_Equality_m50B3548E4AC232558190B0052877B290AA1D436A((String_t*)L_36, (String_t*)_stringLiteral1B024D537329B86AB0DF96B2A714180F442F53E9, /*hidden argument*/NULL);
		if (L_37)
		{
			goto IL_0262;
		}
	}
	{
		goto IL_028a;
	}

IL_018d:
	{
		String_t* L_38 = V_1;
		bool L_39;
		L_39 = String_op_Equality_m50B3548E4AC232558190B0052877B290AA1D436A((String_t*)L_38, (String_t*)_stringLiteral4845015737DC41475709911228278216EE4DC3AF, /*hidden argument*/NULL);
		if (L_39)
		{
			goto IL_0276;
		}
	}
	{
		goto IL_028a;
	}

IL_01a2:
	{
		// instance.enabled = reader.Read<System.Boolean>(ES3Type_bool.Instance);
		ES3Reader_t2780AF8AA61DA2A817115CEF8612AC0E494D03C9 * L_40 = ___reader0;
		IL2CPP_RUNTIME_CLASS_INIT(ES3Type_bool_t8F309F7B9CC735FF1DEE68081B6E3CAB367745F4_il2cpp_TypeInfo_var);
		ES3Type_t8FBECB7AE75168648B9524E0C2A38DAD4555421D * L_41 = ((ES3Type_bool_t8F309F7B9CC735FF1DEE68081B6E3CAB367745F4_StaticFields*)il2cpp_codegen_static_fields_for(ES3Type_bool_t8F309F7B9CC735FF1DEE68081B6E3CAB367745F4_il2cpp_TypeInfo_var))->get_Instance_12();
		NullCheck((ES3Reader_t2780AF8AA61DA2A817115CEF8612AC0E494D03C9 *)L_40);
		bool L_42;
		L_42 = GenericVirtFuncInvoker1< bool, ES3Type_t8FBECB7AE75168648B9524E0C2A38DAD4555421D * >::Invoke(ES3Reader_Read_TisBoolean_t07D1E3F34E4813023D64F584DFF7B34C9D922F37_mC6D1B158268FF9B97822FF9F5B37FB1723FEDA22_RuntimeMethod_var, (ES3Reader_t2780AF8AA61DA2A817115CEF8612AC0E494D03C9 *)L_40, (ES3Type_t8FBECB7AE75168648B9524E0C2A38DAD4555421D *)L_41);
		SizeBySpeedModule_set_enabled_m0CC5D81593E6D047B2B150041577EC93D3C7701C((SizeBySpeedModule_t156070A63E0A483D36BCAE783BA554CDA7CAF752 *)(SizeBySpeedModule_t156070A63E0A483D36BCAE783BA554CDA7CAF752 *)(&V_0), (bool)L_42, /*hidden argument*/NULL);
		// break;
		goto IL_0290;
	}

IL_01b9:
	{
		// instance.size = reader.Read<UnityEngine.ParticleSystem.MinMaxCurve>(ES3Type_MinMaxCurve.Instance);
		ES3Reader_t2780AF8AA61DA2A817115CEF8612AC0E494D03C9 * L_43 = ___reader0;
		IL2CPP_RUNTIME_CLASS_INIT(ES3Type_MinMaxCurve_tC5342BF0F8735B85CB5E16FDD4C6FACC8AFAD3B7_il2cpp_TypeInfo_var);
		ES3Type_t8FBECB7AE75168648B9524E0C2A38DAD4555421D * L_44 = ((ES3Type_MinMaxCurve_tC5342BF0F8735B85CB5E16FDD4C6FACC8AFAD3B7_StaticFields*)il2cpp_codegen_static_fields_for(ES3Type_MinMaxCurve_tC5342BF0F8735B85CB5E16FDD4C6FACC8AFAD3B7_il2cpp_TypeInfo_var))->get_Instance_12();
		NullCheck((ES3Reader_t2780AF8AA61DA2A817115CEF8612AC0E494D03C9 *)L_43);
		MinMaxCurve_tF036239442AB2D438B1EDABEBC785426871084CD  L_45;
		L_45 = GenericVirtFuncInvoker1< MinMaxCurve_tF036239442AB2D438B1EDABEBC785426871084CD , ES3Type_t8FBECB7AE75168648B9524E0C2A38DAD4555421D * >::Invoke(ES3Reader_Read_TisMinMaxCurve_tF036239442AB2D438B1EDABEBC785426871084CD_mD285150CBFB52440643BBECB5ADF4EE8DE940535_RuntimeMethod_var, (ES3Reader_t2780AF8AA61DA2A817115CEF8612AC0E494D03C9 *)L_43, (ES3Type_t8FBECB7AE75168648B9524E0C2A38DAD4555421D *)L_44);
		SizeBySpeedModule_set_size_mB0D87FAEF26DF701E303C3D480E83465AE600D12((SizeBySpeedModule_t156070A63E0A483D36BCAE783BA554CDA7CAF752 *)(SizeBySpeedModule_t156070A63E0A483D36BCAE783BA554CDA7CAF752 *)(&V_0), (MinMaxCurve_tF036239442AB2D438B1EDABEBC785426871084CD )L_45, /*hidden argument*/NULL);
		// break;
		goto IL_0290;
	}

IL_01d0:
	{
		// instance.sizeMultiplier = reader.Read<System.Single>(ES3Type_float.Instance);
		ES3Reader_t2780AF8AA61DA2A817115CEF8612AC0E494D03C9 * L_46 = ___reader0;
		IL2CPP_RUNTIME_CLASS_INIT(ES3Type_float_tF86B773C86731BD9AD79448B860BBB178FE77644_il2cpp_TypeInfo_var);
		ES3Type_t8FBECB7AE75168648B9524E0C2A38DAD4555421D * L_47 = ((ES3Type_float_tF86B773C86731BD9AD79448B860BBB178FE77644_StaticFields*)il2cpp_codegen_static_fields_for(ES3Type_float_tF86B773C86731BD9AD79448B860BBB178FE77644_il2cpp_TypeInfo_var))->get_Instance_12();
		NullCheck((ES3Reader_t2780AF8AA61DA2A817115CEF8612AC0E494D03C9 *)L_46);
		float L_48;
		L_48 = GenericVirtFuncInvoker1< float, ES3Type_t8FBECB7AE75168648B9524E0C2A38DAD4555421D * >::Invoke(ES3Reader_Read_TisSingle_tE07797BA3C98D4CA9B5A19413C19A76688AB899E_m4A0416374498BDA042B8EB21E49B72326D6CE5F4_RuntimeMethod_var, (ES3Reader_t2780AF8AA61DA2A817115CEF8612AC0E494D03C9 *)L_46, (ES3Type_t8FBECB7AE75168648B9524E0C2A38DAD4555421D *)L_47);
		SizeBySpeedModule_set_sizeMultiplier_m6087A72CA424D9F258632500EFA8BA9FB71F6141((SizeBySpeedModule_t156070A63E0A483D36BCAE783BA554CDA7CAF752 *)(SizeBySpeedModule_t156070A63E0A483D36BCAE783BA554CDA7CAF752 *)(&V_0), (float)L_48, /*hidden argument*/NULL);
		// break;
		goto IL_0290;
	}

IL_01e7:
	{
		// instance.x = reader.Read<UnityEngine.ParticleSystem.MinMaxCurve>(ES3Type_MinMaxCurve.Instance);
		ES3Reader_t2780AF8AA61DA2A817115CEF8612AC0E494D03C9 * L_49 = ___reader0;
		IL2CPP_RUNTIME_CLASS_INIT(ES3Type_MinMaxCurve_tC5342BF0F8735B85CB5E16FDD4C6FACC8AFAD3B7_il2cpp_TypeInfo_var);
		ES3Type_t8FBECB7AE75168648B9524E0C2A38DAD4555421D * L_50 = ((ES3Type_MinMaxCurve_tC5342BF0F8735B85CB5E16FDD4C6FACC8AFAD3B7_StaticFields*)il2cpp_codegen_static_fields_for(ES3Type_MinMaxCurve_tC5342BF0F8735B85CB5E16FDD4C6FACC8AFAD3B7_il2cpp_TypeInfo_var))->get_Instance_12();
		NullCheck((ES3Reader_t2780AF8AA61DA2A817115CEF8612AC0E494D03C9 *)L_49);
		MinMaxCurve_tF036239442AB2D438B1EDABEBC785426871084CD  L_51;
		L_51 = GenericVirtFuncInvoker1< MinMaxCurve_tF036239442AB2D438B1EDABEBC785426871084CD , ES3Type_t8FBECB7AE75168648B9524E0C2A38DAD4555421D * >::Invoke(ES3Reader_Read_TisMinMaxCurve_tF036239442AB2D438B1EDABEBC785426871084CD_mD285150CBFB52440643BBECB5ADF4EE8DE940535_RuntimeMethod_var, (ES3Reader_t2780AF8AA61DA2A817115CEF8612AC0E494D03C9 *)L_49, (ES3Type_t8FBECB7AE75168648B9524E0C2A38DAD4555421D *)L_50);
		SizeBySpeedModule_set_x_mFFD1FB55668F9C02B2AB87D861F028E57EE81E7B((SizeBySpeedModule_t156070A63E0A483D36BCAE783BA554CDA7CAF752 *)(SizeBySpeedModule_t156070A63E0A483D36BCAE783BA554CDA7CAF752 *)(&V_0), (MinMaxCurve_tF036239442AB2D438B1EDABEBC785426871084CD )L_51, /*hidden argument*/NULL);
		// break;
		goto IL_0290;
	}

IL_01fe:
	{
		// instance.xMultiplier = reader.Read<System.Single>(ES3Type_float.Instance);
		ES3Reader_t2780AF8AA61DA2A817115CEF8612AC0E494D03C9 * L_52 = ___reader0;
		IL2CPP_RUNTIME_CLASS_INIT(ES3Type_float_tF86B773C86731BD9AD79448B860BBB178FE77644_il2cpp_TypeInfo_var);
		ES3Type_t8FBECB7AE75168648B9524E0C2A38DAD4555421D * L_53 = ((ES3Type_float_tF86B773C86731BD9AD79448B860BBB178FE77644_StaticFields*)il2cpp_codegen_static_fields_for(ES3Type_float_tF86B773C86731BD9AD79448B860BBB178FE77644_il2cpp_TypeInfo_var))->get_Instance_12();
		NullCheck((ES3Reader_t2780AF8AA61DA2A817115CEF8612AC0E494D03C9 *)L_52);
		float L_54;
		L_54 = GenericVirtFuncInvoker1< float, ES3Type_t8FBECB7AE75168648B9524E0C2A38DAD4555421D * >::Invoke(ES3Reader_Read_TisSingle_tE07797BA3C98D4CA9B5A19413C19A76688AB899E_m4A0416374498BDA042B8EB21E49B72326D6CE5F4_RuntimeMethod_var, (ES3Reader_t2780AF8AA61DA2A817115CEF8612AC0E494D03C9 *)L_52, (ES3Type_t8FBECB7AE75168648B9524E0C2A38DAD4555421D *)L_53);
		SizeBySpeedModule_set_xMultiplier_m20E2174791982BB87D08217F71EA925022A1B0CC((SizeBySpeedModule_t156070A63E0A483D36BCAE783BA554CDA7CAF752 *)(SizeBySpeedModule_t156070A63E0A483D36BCAE783BA554CDA7CAF752 *)(&V_0), (float)L_54, /*hidden argument*/NULL);
		// break;
		goto IL_0290;
	}

IL_0212:
	{
		// instance.y = reader.Read<UnityEngine.ParticleSystem.MinMaxCurve>(ES3Type_MinMaxCurve.Instance);
		ES3Reader_t2780AF8AA61DA2A817115CEF8612AC0E494D03C9 * L_55 = ___reader0;
		IL2CPP_RUNTIME_CLASS_INIT(ES3Type_MinMaxCurve_tC5342BF0F8735B85CB5E16FDD4C6FACC8AFAD3B7_il2cpp_TypeInfo_var);
		ES3Type_t8FBECB7AE75168648B9524E0C2A38DAD4555421D * L_56 = ((ES3Type_MinMaxCurve_tC5342BF0F8735B85CB5E16FDD4C6FACC8AFAD3B7_StaticFields*)il2cpp_codegen_static_fields_for(ES3Type_MinMaxCurve_tC5342BF0F8735B85CB5E16FDD4C6FACC8AFAD3B7_il2cpp_TypeInfo_var))->get_Instance_12();
		NullCheck((ES3Reader_t2780AF8AA61DA2A817115CEF8612AC0E494D03C9 *)L_55);
		MinMaxCurve_tF036239442AB2D438B1EDABEBC785426871084CD  L_57;
		L_57 = GenericVirtFuncInvoker1< MinMaxCurve_tF036239442AB2D438B1EDABEBC785426871084CD , ES3Type_t8FBECB7AE75168648B9524E0C2A38DAD4555421D * >::Invoke(ES3Reader_Read_TisMinMaxCurve_tF036239442AB2D438B1EDABEBC785426871084CD_mD285150CBFB52440643BBECB5ADF4EE8DE940535_RuntimeMethod_var, (ES3Reader_t2780AF8AA61DA2A817115CEF8612AC0E494D03C9 *)L_55, (ES3Type_t8FBECB7AE75168648B9524E0C2A38DAD4555421D *)L_56);
		SizeBySpeedModule_set_y_m87016AA5C7B16879AB922CE07FCCF94E3683671F((SizeBySpeedModule_t156070A63E0A483D36BCAE783BA554CDA7CAF752 *)(SizeBySpeedModule_t156070A63E0A483D36BCAE783BA554CDA7CAF752 *)(&V_0), (MinMaxCurve_tF036239442AB2D438B1EDABEBC785426871084CD )L_57, /*hidden argument*/NULL);
		// break;
		goto IL_0290;
	}

IL_0226:
	{
		// instance.yMultiplier = reader.Read<System.Single>(ES3Type_float.Instance);
		ES3Reader_t2780AF8AA61DA2A817115CEF8612AC0E494D03C9 * L_58 = ___reader0;
		IL2CPP_RUNTIME_CLASS_INIT(ES3Type_float_tF86B773C86731BD9AD79448B860BBB178FE77644_il2cpp_TypeInfo_var);
		ES3Type_t8FBECB7AE75168648B9524E0C2A38DAD4555421D * L_59 = ((ES3Type_float_tF86B773C86731BD9AD79448B860BBB178FE77644_StaticFields*)il2cpp_codegen_static_fields_for(ES3Type_float_tF86B773C86731BD9AD79448B860BBB178FE77644_il2cpp_TypeInfo_var))->get_Instance_12();
		NullCheck((ES3Reader_t2780AF8AA61DA2A817115CEF8612AC0E494D03C9 *)L_58);
		float L_60;
		L_60 = GenericVirtFuncInvoker1< float, ES3Type_t8FBECB7AE75168648B9524E0C2A38DAD4555421D * >::Invoke(ES3Reader_Read_TisSingle_tE07797BA3C98D4CA9B5A19413C19A76688AB899E_m4A0416374498BDA042B8EB21E49B72326D6CE5F4_RuntimeMethod_var, (ES3Reader_t2780AF8AA61DA2A817115CEF8612AC0E494D03C9 *)L_58, (ES3Type_t8FBECB7AE75168648B9524E0C2A38DAD4555421D *)L_59);
		SizeBySpeedModule_set_yMultiplier_m16CEB10FE778D443B34EC516FD08191E74CB5CE3((SizeBySpeedModule_t156070A63E0A483D36BCAE783BA554CDA7CAF752 *)(SizeBySpeedModule_t156070A63E0A483D36BCAE783BA554CDA7CAF752 *)(&V_0), (float)L_60, /*hidden argument*/NULL);
		// break;
		goto IL_0290;
	}

IL_023a:
	{
		// instance.z = reader.Read<UnityEngine.ParticleSystem.MinMaxCurve>(ES3Type_MinMaxCurve.Instance);
		ES3Reader_t2780AF8AA61DA2A817115CEF8612AC0E494D03C9 * L_61 = ___reader0;
		IL2CPP_RUNTIME_CLASS_INIT(ES3Type_MinMaxCurve_tC5342BF0F8735B85CB5E16FDD4C6FACC8AFAD3B7_il2cpp_TypeInfo_var);
		ES3Type_t8FBECB7AE75168648B9524E0C2A38DAD4555421D * L_62 = ((ES3Type_MinMaxCurve_tC5342BF0F8735B85CB5E16FDD4C6FACC8AFAD3B7_StaticFields*)il2cpp_codegen_static_fields_for(ES3Type_MinMaxCurve_tC5342BF0F8735B85CB5E16FDD4C6FACC8AFAD3B7_il2cpp_TypeInfo_var))->get_Instance_12();
		NullCheck((ES3Reader_t2780AF8AA61DA2A817115CEF8612AC0E494D03C9 *)L_61);
		MinMaxCurve_tF036239442AB2D438B1EDABEBC785426871084CD  L_63;
		L_63 = GenericVirtFuncInvoker1< MinMaxCurve_tF036239442AB2D438B1EDABEBC785426871084CD , ES3Type_t8FBECB7AE75168648B9524E0C2A38DAD4555421D * >::Invoke(ES3Reader_Read_TisMinMaxCurve_tF036239442AB2D438B1EDABEBC785426871084CD_mD285150CBFB52440643BBECB5ADF4EE8DE940535_RuntimeMethod_var, (ES3Reader_t2780AF8AA61DA2A817115CEF8612AC0E494D03C9 *)L_61, (ES3Type_t8FBECB7AE75168648B9524E0C2A38DAD4555421D *)L_62);
		SizeBySpeedModule_set_z_m789F392BAE1FFE10F22445F0A89FE4905AD48E13((SizeBySpeedModule_t156070A63E0A483D36BCAE783BA554CDA7CAF752 *)(SizeBySpeedModule_t156070A63E0A483D36BCAE783BA554CDA7CAF752 *)(&V_0), (MinMaxCurve_tF036239442AB2D438B1EDABEBC785426871084CD )L_63, /*hidden argument*/NULL);
		// break;
		goto IL_0290;
	}

IL_024e:
	{
		// instance.zMultiplier = reader.Read<System.Single>(ES3Type_float.Instance);
		ES3Reader_t2780AF8AA61DA2A817115CEF8612AC0E494D03C9 * L_64 = ___reader0;
		IL2CPP_RUNTIME_CLASS_INIT(ES3Type_float_tF86B773C86731BD9AD79448B860BBB178FE77644_il2cpp_TypeInfo_var);
		ES3Type_t8FBECB7AE75168648B9524E0C2A38DAD4555421D * L_65 = ((ES3Type_float_tF86B773C86731BD9AD79448B860BBB178FE77644_StaticFields*)il2cpp_codegen_static_fields_for(ES3Type_float_tF86B773C86731BD9AD79448B860BBB178FE77644_il2cpp_TypeInfo_var))->get_Instance_12();
		NullCheck((ES3Reader_t2780AF8AA61DA2A817115CEF8612AC0E494D03C9 *)L_64);
		float L_66;
		L_66 = GenericVirtFuncInvoker1< float, ES3Type_t8FBECB7AE75168648B9524E0C2A38DAD4555421D * >::Invoke(ES3Reader_Read_TisSingle_tE07797BA3C98D4CA9B5A19413C19A76688AB899E_m4A0416374498BDA042B8EB21E49B72326D6CE5F4_RuntimeMethod_var, (ES3Reader_t2780AF8AA61DA2A817115CEF8612AC0E494D03C9 *)L_64, (ES3Type_t8FBECB7AE75168648B9524E0C2A38DAD4555421D *)L_65);
		SizeBySpeedModule_set_zMultiplier_m3CDE48B31D0AA2BDD554D6FB39509E32D3B3540F((SizeBySpeedModule_t156070A63E0A483D36BCAE783BA554CDA7CAF752 *)(SizeBySpeedModule_t156070A63E0A483D36BCAE783BA554CDA7CAF752 *)(&V_0), (float)L_66, /*hidden argument*/NULL);
		// break;
		goto IL_0290;
	}

IL_0262:
	{
		// instance.separateAxes = reader.Read<System.Boolean>(ES3Type_bool.Instance);
		ES3Reader_t2780AF8AA61DA2A817115CEF8612AC0E494D03C9 * L_67 = ___reader0;
		IL2CPP_RUNTIME_CLASS_INIT(ES3Type_bool_t8F309F7B9CC735FF1DEE68081B6E3CAB367745F4_il2cpp_TypeInfo_var);
		ES3Type_t8FBECB7AE75168648B9524E0C2A38DAD4555421D * L_68 = ((ES3Type_bool_t8F309F7B9CC735FF1DEE68081B6E3CAB367745F4_StaticFields*)il2cpp_codegen_static_fields_for(ES3Type_bool_t8F309F7B9CC735FF1DEE68081B6E3CAB367745F4_il2cpp_TypeInfo_var))->get_Instance_12();
		NullCheck((ES3Reader_t2780AF8AA61DA2A817115CEF8612AC0E494D03C9 *)L_67);
		bool L_69;
		L_69 = GenericVirtFuncInvoker1< bool, ES3Type_t8FBECB7AE75168648B9524E0C2A38DAD4555421D * >::Invoke(ES3Reader_Read_TisBoolean_t07D1E3F34E4813023D64F584DFF7B34C9D922F37_mC6D1B158268FF9B97822FF9F5B37FB1723FEDA22_RuntimeMethod_var, (ES3Reader_t2780AF8AA61DA2A817115CEF8612AC0E494D03C9 *)L_67, (ES3Type_t8FBECB7AE75168648B9524E0C2A38DAD4555421D *)L_68);
		SizeBySpeedModule_set_separateAxes_mF8B0B99BA3B98D6A8578B70EA19DFB271657FD8F((SizeBySpeedModule_t156070A63E0A483D36BCAE783BA554CDA7CAF752 *)(SizeBySpeedModule_t156070A63E0A483D36BCAE783BA554CDA7CAF752 *)(&V_0), (bool)L_69, /*hidden argument*/NULL);
		// break;
		goto IL_0290;
	}

IL_0276:
	{
		// instance.range = reader.Read<UnityEngine.Vector2>(ES3Type_Vector2.Instance);
		ES3Reader_t2780AF8AA61DA2A817115CEF8612AC0E494D03C9 * L_70 = ___reader0;
		IL2CPP_RUNTIME_CLASS_INIT(ES3Type_Vector2_t803CDF887D02E9215B016DFABE969B06638FB1F5_il2cpp_TypeInfo_var);
		ES3Type_t8FBECB7AE75168648B9524E0C2A38DAD4555421D * L_71 = ((ES3Type_Vector2_t803CDF887D02E9215B016DFABE969B06638FB1F5_StaticFields*)il2cpp_codegen_static_fields_for(ES3Type_Vector2_t803CDF887D02E9215B016DFABE969B06638FB1F5_il2cpp_TypeInfo_var))->get_Instance_12();
		NullCheck((ES3Reader_t2780AF8AA61DA2A817115CEF8612AC0E494D03C9 *)L_70);
		Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  L_72;
		L_72 = GenericVirtFuncInvoker1< Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9 , ES3Type_t8FBECB7AE75168648B9524E0C2A38DAD4555421D * >::Invoke(ES3Reader_Read_TisVector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9_mD2C1683A01C44107D1473023F8188DDEA71D9A7D_RuntimeMethod_var, (ES3Reader_t2780AF8AA61DA2A817115CEF8612AC0E494D03C9 *)L_70, (ES3Type_t8FBECB7AE75168648B9524E0C2A38DAD4555421D *)L_71);
		SizeBySpeedModule_set_range_mDF4151A1FBDEB5417C8B481907AE58C969F5167D((SizeBySpeedModule_t156070A63E0A483D36BCAE783BA554CDA7CAF752 *)(SizeBySpeedModule_t156070A63E0A483D36BCAE783BA554CDA7CAF752 *)(&V_0), (Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9 )L_72, /*hidden argument*/NULL);
		// break;
		goto IL_0290;
	}

IL_028a:
	{
		// reader.Skip();
		ES3Reader_t2780AF8AA61DA2A817115CEF8612AC0E494D03C9 * L_73 = ___reader0;
		NullCheck((ES3Reader_t2780AF8AA61DA2A817115CEF8612AC0E494D03C9 *)L_73);
		VirtActionInvoker0::Invoke(41 /* System.Void ES3Reader::Skip() */, (ES3Reader_t2780AF8AA61DA2A817115CEF8612AC0E494D03C9 *)L_73);
	}

IL_0290:
	{
		// while((propertyName = reader.ReadPropertyName()) != null)
		ES3Reader_t2780AF8AA61DA2A817115CEF8612AC0E494D03C9 * L_74 = ___reader0;
		NullCheck((ES3Reader_t2780AF8AA61DA2A817115CEF8612AC0E494D03C9 *)L_74);
		String_t* L_75;
		L_75 = VirtFuncInvoker0< String_t* >::Invoke(21 /* System.String ES3Reader::ReadPropertyName() */, (ES3Reader_t2780AF8AA61DA2A817115CEF8612AC0E494D03C9 *)L_74);
		String_t* L_76 = (String_t*)L_75;
		V_1 = (String_t*)L_76;
		if (L_76)
		{
			goto IL_000c;
		}
	}
	{
		// }
		return;
	}
}
// System.Void ES3Types.ES3Type_SizeBySpeedModule::ReadInto<System.Byte>(ES3Reader,System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ES3Type_SizeBySpeedModule_ReadInto_TisByte_t0111FAB8B8685667EDDAF77683F0D8F86B659056_mA20D650247374ED6EE15628A62A02C7B1C4F9477_gshared (ES3Type_SizeBySpeedModule_tE2CD943FBEF83D6F6EDB836909B9C475DF2A7FD0 * __this, ES3Reader_t2780AF8AA61DA2A817115CEF8612AC0E494D03C9 * ___reader0, RuntimeObject * ___obj1, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ES3Reader_Read_TisBoolean_t07D1E3F34E4813023D64F584DFF7B34C9D922F37_mC6D1B158268FF9B97822FF9F5B37FB1723FEDA22_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ES3Reader_Read_TisMinMaxCurve_tF036239442AB2D438B1EDABEBC785426871084CD_mD285150CBFB52440643BBECB5ADF4EE8DE940535_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ES3Reader_Read_TisSingle_tE07797BA3C98D4CA9B5A19413C19A76688AB899E_m4A0416374498BDA042B8EB21E49B72326D6CE5F4_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ES3Reader_Read_TisVector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9_mD2C1683A01C44107D1473023F8188DDEA71D9A7D_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ES3Type_MinMaxCurve_tC5342BF0F8735B85CB5E16FDD4C6FACC8AFAD3B7_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ES3Type_Vector2_t803CDF887D02E9215B016DFABE969B06638FB1F5_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ES3Type_bool_t8F309F7B9CC735FF1DEE68081B6E3CAB367745F4_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ES3Type_float_tF86B773C86731BD9AD79448B860BBB178FE77644_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&SizeBySpeedModule_t156070A63E0A483D36BCAE783BA554CDA7CAF752_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral062DB096C728515E033CF8C48A1C1F0B9A79384B);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral1B024D537329B86AB0DF96B2A714180F442F53E9);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral2F8690361553406965679AEF125F896BC5FC61F5);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral3EE5A4671A4E5AEBD31CA5F013A7773DC18ED22B);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral4845015737DC41475709911228278216EE4DC3AF);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral8C6F88DEE0DFE3513BB8B44A8CF0FEE437F4EFFB);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral9384C6EF2DA5C0BD5274A0DACFF291D0ABBFD8B1);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral9CE1604D659135925CCC4DD1F526AFFE42E689F1);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral9E61658953B4F9BB4A05E3D2D2BC18990BADE934);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralBD0DD0004699EF86BF0FC1D161FA3766AF5126C4);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralF9D225733E1D10F9344C755C4A9C0870CD1DE97B);
		s_Il2CppMethodInitialized = true;
	}
	SizeBySpeedModule_t156070A63E0A483D36BCAE783BA554CDA7CAF752  V_0;
	memset((&V_0), 0, sizeof(V_0));
	String_t* V_1 = NULL;
	uint32_t V_2 = 0;
	{
		// var instance = (UnityEngine.ParticleSystem.SizeBySpeedModule)obj;
		RuntimeObject * L_0 = ___obj1;
		V_0 = (SizeBySpeedModule_t156070A63E0A483D36BCAE783BA554CDA7CAF752 )((*(SizeBySpeedModule_t156070A63E0A483D36BCAE783BA554CDA7CAF752 *)((SizeBySpeedModule_t156070A63E0A483D36BCAE783BA554CDA7CAF752 *)UnBox(L_0, SizeBySpeedModule_t156070A63E0A483D36BCAE783BA554CDA7CAF752_il2cpp_TypeInfo_var))));
		goto IL_0290;
	}

IL_000c:
	{
		String_t* L_1 = V_1;
		if (!L_1)
		{
			goto IL_028a;
		}
	}
	{
		String_t* L_2 = V_1;
		uint32_t L_3;
		L_3 = U3CPrivateImplementationDetailsU3E_ComputeStringHash_m3ADC1F612F9EE3DD518E6F0023A0DE0EE2B120A7((String_t*)L_2, /*hidden argument*/NULL);
		V_2 = (uint32_t)L_3;
		uint32_t L_4 = V_2;
		if ((!(((uint32_t)L_4) <= ((uint32_t)((int32_t)1479031685)))))
		{
			goto IL_006a;
		}
	}
	{
		uint32_t L_5 = V_2;
		if ((!(((uint32_t)L_5) <= ((uint32_t)((int32_t)597743964)))))
		{
			goto IL_0044;
		}
	}
	{
		uint32_t L_6 = V_2;
		if ((((int32_t)L_6) == ((int32_t)((int32_t)49525662))))
		{
			goto IL_00bb;
		}
	}
	{
		uint32_t L_7 = V_2;
		if ((((int32_t)L_7) == ((int32_t)((int32_t)597743964))))
		{
			goto IL_00d0;
		}
	}
	{
		goto IL_028a;
	}

IL_0044:
	{
		uint32_t L_8 = V_2;
		if ((((int32_t)L_8) == ((int32_t)((int32_t)726266686))))
		{
			goto IL_0163;
		}
	}
	{
		uint32_t L_9 = V_2;
		if ((((int32_t)L_9) == ((int32_t)((int32_t)1105436259))))
		{
			goto IL_00e5;
		}
	}
	{
		uint32_t L_10 = V_2;
		if ((((int32_t)L_10) == ((int32_t)((int32_t)1479031685))))
		{
			goto IL_0178;
		}
	}
	{
		goto IL_028a;
	}

IL_006a:
	{
		uint32_t L_11 = V_2;
		if ((!(((uint32_t)L_11) <= ((uint32_t)((int32_t)-86242094)))))
		{
			goto IL_0098;
		}
	}
	{
		uint32_t L_12 = V_2;
		if ((((int32_t)L_12) == ((int32_t)((int32_t)-1013869429))))
		{
			goto IL_0139;
		}
	}
	{
		uint32_t L_13 = V_2;
		if ((((int32_t)L_13) == ((int32_t)((int32_t)-585050980))))
		{
			goto IL_010f;
		}
	}
	{
		uint32_t L_14 = V_2;
		if ((((int32_t)L_14) == ((int32_t)((int32_t)-86242094))))
		{
			goto IL_018d;
		}
	}
	{
		goto IL_028a;
	}

IL_0098:
	{
		uint32_t L_15 = V_2;
		if ((((int32_t)L_15) == ((int32_t)((int32_t)-66302220))))
		{
			goto IL_0124;
		}
	}
	{
		uint32_t L_16 = V_2;
		if ((((int32_t)L_16) == ((int32_t)((int32_t)-49524601))))
		{
			goto IL_00fa;
		}
	}
	{
		uint32_t L_17 = V_2;
		if ((((int32_t)L_17) == ((int32_t)((int32_t)-15969363))))
		{
			goto IL_014e;
		}
	}
	{
		goto IL_028a;
	}

IL_00bb:
	{
		String_t* L_18 = V_1;
		bool L_19;
		L_19 = String_op_Equality_m50B3548E4AC232558190B0052877B290AA1D436A((String_t*)L_18, (String_t*)_stringLiteralF9D225733E1D10F9344C755C4A9C0870CD1DE97B, /*hidden argument*/NULL);
		if (L_19)
		{
			goto IL_01a2;
		}
	}
	{
		goto IL_028a;
	}

IL_00d0:
	{
		String_t* L_20 = V_1;
		bool L_21;
		L_21 = String_op_Equality_m50B3548E4AC232558190B0052877B290AA1D436A((String_t*)L_20, (String_t*)_stringLiteral3EE5A4671A4E5AEBD31CA5F013A7773DC18ED22B, /*hidden argument*/NULL);
		if (L_21)
		{
			goto IL_01b9;
		}
	}
	{
		goto IL_028a;
	}

IL_00e5:
	{
		String_t* L_22 = V_1;
		bool L_23;
		L_23 = String_op_Equality_m50B3548E4AC232558190B0052877B290AA1D436A((String_t*)L_22, (String_t*)_stringLiteralBD0DD0004699EF86BF0FC1D161FA3766AF5126C4, /*hidden argument*/NULL);
		if (L_23)
		{
			goto IL_01d0;
		}
	}
	{
		goto IL_028a;
	}

IL_00fa:
	{
		String_t* L_24 = V_1;
		bool L_25;
		L_25 = String_op_Equality_m50B3548E4AC232558190B0052877B290AA1D436A((String_t*)L_24, (String_t*)_stringLiteral062DB096C728515E033CF8C48A1C1F0B9A79384B, /*hidden argument*/NULL);
		if (L_25)
		{
			goto IL_01e7;
		}
	}
	{
		goto IL_028a;
	}

IL_010f:
	{
		String_t* L_26 = V_1;
		bool L_27;
		L_27 = String_op_Equality_m50B3548E4AC232558190B0052877B290AA1D436A((String_t*)L_26, (String_t*)_stringLiteral8C6F88DEE0DFE3513BB8B44A8CF0FEE437F4EFFB, /*hidden argument*/NULL);
		if (L_27)
		{
			goto IL_01fe;
		}
	}
	{
		goto IL_028a;
	}

IL_0124:
	{
		String_t* L_28 = V_1;
		bool L_29;
		L_29 = String_op_Equality_m50B3548E4AC232558190B0052877B290AA1D436A((String_t*)L_28, (String_t*)_stringLiteral9384C6EF2DA5C0BD5274A0DACFF291D0ABBFD8B1, /*hidden argument*/NULL);
		if (L_29)
		{
			goto IL_0212;
		}
	}
	{
		goto IL_028a;
	}

IL_0139:
	{
		String_t* L_30 = V_1;
		bool L_31;
		L_31 = String_op_Equality_m50B3548E4AC232558190B0052877B290AA1D436A((String_t*)L_30, (String_t*)_stringLiteral9E61658953B4F9BB4A05E3D2D2BC18990BADE934, /*hidden argument*/NULL);
		if (L_31)
		{
			goto IL_0226;
		}
	}
	{
		goto IL_028a;
	}

IL_014e:
	{
		String_t* L_32 = V_1;
		bool L_33;
		L_33 = String_op_Equality_m50B3548E4AC232558190B0052877B290AA1D436A((String_t*)L_32, (String_t*)_stringLiteral9CE1604D659135925CCC4DD1F526AFFE42E689F1, /*hidden argument*/NULL);
		if (L_33)
		{
			goto IL_023a;
		}
	}
	{
		goto IL_028a;
	}

IL_0163:
	{
		String_t* L_34 = V_1;
		bool L_35;
		L_35 = String_op_Equality_m50B3548E4AC232558190B0052877B290AA1D436A((String_t*)L_34, (String_t*)_stringLiteral2F8690361553406965679AEF125F896BC5FC61F5, /*hidden argument*/NULL);
		if (L_35)
		{
			goto IL_024e;
		}
	}
	{
		goto IL_028a;
	}

IL_0178:
	{
		String_t* L_36 = V_1;
		bool L_37;
		L_37 = String_op_Equality_m50B3548E4AC232558190B0052877B290AA1D436A((String_t*)L_36, (String_t*)_stringLiteral1B024D537329B86AB0DF96B2A714180F442F53E9, /*hidden argument*/NULL);
		if (L_37)
		{
			goto IL_0262;
		}
	}
	{
		goto IL_028a;
	}

IL_018d:
	{
		String_t* L_38 = V_1;
		bool L_39;
		L_39 = String_op_Equality_m50B3548E4AC232558190B0052877B290AA1D436A((String_t*)L_38, (String_t*)_stringLiteral4845015737DC41475709911228278216EE4DC3AF, /*hidden argument*/NULL);
		if (L_39)
		{
			goto IL_0276;
		}
	}
	{
		goto IL_028a;
	}

IL_01a2:
	{
		// instance.enabled = reader.Read<System.Boolean>(ES3Type_bool.Instance);
		ES3Reader_t2780AF8AA61DA2A817115CEF8612AC0E494D03C9 * L_40 = ___reader0;
		IL2CPP_RUNTIME_CLASS_INIT(ES3Type_bool_t8F309F7B9CC735FF1DEE68081B6E3CAB367745F4_il2cpp_TypeInfo_var);
		ES3Type_t8FBECB7AE75168648B9524E0C2A38DAD4555421D * L_41 = ((ES3Type_bool_t8F309F7B9CC735FF1DEE68081B6E3CAB367745F4_StaticFields*)il2cpp_codegen_static_fields_for(ES3Type_bool_t8F309F7B9CC735FF1DEE68081B6E3CAB367745F4_il2cpp_TypeInfo_var))->get_Instance_12();
		NullCheck((ES3Reader_t2780AF8AA61DA2A817115CEF8612AC0E494D03C9 *)L_40);
		bool L_42;
		L_42 = GenericVirtFuncInvoker1< bool, ES3Type_t8FBECB7AE75168648B9524E0C2A38DAD4555421D * >::Invoke(ES3Reader_Read_TisBoolean_t07D1E3F34E4813023D64F584DFF7B34C9D922F37_mC6D1B158268FF9B97822FF9F5B37FB1723FEDA22_RuntimeMethod_var, (ES3Reader_t2780AF8AA61DA2A817115CEF8612AC0E494D03C9 *)L_40, (ES3Type_t8FBECB7AE75168648B9524E0C2A38DAD4555421D *)L_41);
		SizeBySpeedModule_set_enabled_m0CC5D81593E6D047B2B150041577EC93D3C7701C((SizeBySpeedModule_t156070A63E0A483D36BCAE783BA554CDA7CAF752 *)(SizeBySpeedModule_t156070A63E0A483D36BCAE783BA554CDA7CAF752 *)(&V_0), (bool)L_42, /*hidden argument*/NULL);
		// break;
		goto IL_0290;
	}

IL_01b9:
	{
		// instance.size = reader.Read<UnityEngine.ParticleSystem.MinMaxCurve>(ES3Type_MinMaxCurve.Instance);
		ES3Reader_t2780AF8AA61DA2A817115CEF8612AC0E494D03C9 * L_43 = ___reader0;
		IL2CPP_RUNTIME_CLASS_INIT(ES3Type_MinMaxCurve_tC5342BF0F8735B85CB5E16FDD4C6FACC8AFAD3B7_il2cpp_TypeInfo_var);
		ES3Type_t8FBECB7AE75168648B9524E0C2A38DAD4555421D * L_44 = ((ES3Type_MinMaxCurve_tC5342BF0F8735B85CB5E16FDD4C6FACC8AFAD3B7_StaticFields*)il2cpp_codegen_static_fields_for(ES3Type_MinMaxCurve_tC5342BF0F8735B85CB5E16FDD4C6FACC8AFAD3B7_il2cpp_TypeInfo_var))->get_Instance_12();
		NullCheck((ES3Reader_t2780AF8AA61DA2A817115CEF8612AC0E494D03C9 *)L_43);
		MinMaxCurve_tF036239442AB2D438B1EDABEBC785426871084CD  L_45;
		L_45 = GenericVirtFuncInvoker1< MinMaxCurve_tF036239442AB2D438B1EDABEBC785426871084CD , ES3Type_t8FBECB7AE75168648B9524E0C2A38DAD4555421D * >::Invoke(ES3Reader_Read_TisMinMaxCurve_tF036239442AB2D438B1EDABEBC785426871084CD_mD285150CBFB52440643BBECB5ADF4EE8DE940535_RuntimeMethod_var, (ES3Reader_t2780AF8AA61DA2A817115CEF8612AC0E494D03C9 *)L_43, (ES3Type_t8FBECB7AE75168648B9524E0C2A38DAD4555421D *)L_44);
		SizeBySpeedModule_set_size_mB0D87FAEF26DF701E303C3D480E83465AE600D12((SizeBySpeedModule_t156070A63E0A483D36BCAE783BA554CDA7CAF752 *)(SizeBySpeedModule_t156070A63E0A483D36BCAE783BA554CDA7CAF752 *)(&V_0), (MinMaxCurve_tF036239442AB2D438B1EDABEBC785426871084CD )L_45, /*hidden argument*/NULL);
		// break;
		goto IL_0290;
	}

IL_01d0:
	{
		// instance.sizeMultiplier = reader.Read<System.Single>(ES3Type_float.Instance);
		ES3Reader_t2780AF8AA61DA2A817115CEF8612AC0E494D03C9 * L_46 = ___reader0;
		IL2CPP_RUNTIME_CLASS_INIT(ES3Type_float_tF86B773C86731BD9AD79448B860BBB178FE77644_il2cpp_TypeInfo_var);
		ES3Type_t8FBECB7AE75168648B9524E0C2A38DAD4555421D * L_47 = ((ES3Type_float_tF86B773C86731BD9AD79448B860BBB178FE77644_StaticFields*)il2cpp_codegen_static_fields_for(ES3Type_float_tF86B773C86731BD9AD79448B860BBB178FE77644_il2cpp_TypeInfo_var))->get_Instance_12();
		NullCheck((ES3Reader_t2780AF8AA61DA2A817115CEF8612AC0E494D03C9 *)L_46);
		float L_48;
		L_48 = GenericVirtFuncInvoker1< float, ES3Type_t8FBECB7AE75168648B9524E0C2A38DAD4555421D * >::Invoke(ES3Reader_Read_TisSingle_tE07797BA3C98D4CA9B5A19413C19A76688AB899E_m4A0416374498BDA042B8EB21E49B72326D6CE5F4_RuntimeMethod_var, (ES3Reader_t2780AF8AA61DA2A817115CEF8612AC0E494D03C9 *)L_46, (ES3Type_t8FBECB7AE75168648B9524E0C2A38DAD4555421D *)L_47);
		SizeBySpeedModule_set_sizeMultiplier_m6087A72CA424D9F258632500EFA8BA9FB71F6141((SizeBySpeedModule_t156070A63E0A483D36BCAE783BA554CDA7CAF752 *)(SizeBySpeedModule_t156070A63E0A483D36BCAE783BA554CDA7CAF752 *)(&V_0), (float)L_48, /*hidden argument*/NULL);
		// break;
		goto IL_0290;
	}

IL_01e7:
	{
		// instance.x = reader.Read<UnityEngine.ParticleSystem.MinMaxCurve>(ES3Type_MinMaxCurve.Instance);
		ES3Reader_t2780AF8AA61DA2A817115CEF8612AC0E494D03C9 * L_49 = ___reader0;
		IL2CPP_RUNTIME_CLASS_INIT(ES3Type_MinMaxCurve_tC5342BF0F8735B85CB5E16FDD4C6FACC8AFAD3B7_il2cpp_TypeInfo_var);
		ES3Type_t8FBECB7AE75168648B9524E0C2A38DAD4555421D * L_50 = ((ES3Type_MinMaxCurve_tC5342BF0F8735B85CB5E16FDD4C6FACC8AFAD3B7_StaticFields*)il2cpp_codegen_static_fields_for(ES3Type_MinMaxCurve_tC5342BF0F8735B85CB5E16FDD4C6FACC8AFAD3B7_il2cpp_TypeInfo_var))->get_Instance_12();
		NullCheck((ES3Reader_t2780AF8AA61DA2A817115CEF8612AC0E494D03C9 *)L_49);
		MinMaxCurve_tF036239442AB2D438B1EDABEBC785426871084CD  L_51;
		L_51 = GenericVirtFuncInvoker1< MinMaxCurve_tF036239442AB2D438B1EDABEBC785426871084CD , ES3Type_t8FBECB7AE75168648B9524E0C2A38DAD4555421D * >::Invoke(ES3Reader_Read_TisMinMaxCurve_tF036239442AB2D438B1EDABEBC785426871084CD_mD285150CBFB52440643BBECB5ADF4EE8DE940535_RuntimeMethod_var, (ES3Reader_t2780AF8AA61DA2A817115CEF8612AC0E494D03C9 *)L_49, (ES3Type_t8FBECB7AE75168648B9524E0C2A38DAD4555421D *)L_50);
		SizeBySpeedModule_set_x_mFFD1FB55668F9C02B2AB87D861F028E57EE81E7B((SizeBySpeedModule_t156070A63E0A483D36BCAE783BA554CDA7CAF752 *)(SizeBySpeedModule_t156070A63E0A483D36BCAE783BA554CDA7CAF752 *)(&V_0), (MinMaxCurve_tF036239442AB2D438B1EDABEBC785426871084CD )L_51, /*hidden argument*/NULL);
		// break;
		goto IL_0290;
	}

IL_01fe:
	{
		// instance.xMultiplier = reader.Read<System.Single>(ES3Type_float.Instance);
		ES3Reader_t2780AF8AA61DA2A817115CEF8612AC0E494D03C9 * L_52 = ___reader0;
		IL2CPP_RUNTIME_CLASS_INIT(ES3Type_float_tF86B773C86731BD9AD79448B860BBB178FE77644_il2cpp_TypeInfo_var);
		ES3Type_t8FBECB7AE75168648B9524E0C2A38DAD4555421D * L_53 = ((ES3Type_float_tF86B773C86731BD9AD79448B860BBB178FE77644_StaticFields*)il2cpp_codegen_static_fields_for(ES3Type_float_tF86B773C86731BD9AD79448B860BBB178FE77644_il2cpp_TypeInfo_var))->get_Instance_12();
		NullCheck((ES3Reader_t2780AF8AA61DA2A817115CEF8612AC0E494D03C9 *)L_52);
		float L_54;
		L_54 = GenericVirtFuncInvoker1< float, ES3Type_t8FBECB7AE75168648B9524E0C2A38DAD4555421D * >::Invoke(ES3Reader_Read_TisSingle_tE07797BA3C98D4CA9B5A19413C19A76688AB899E_m4A0416374498BDA042B8EB21E49B72326D6CE5F4_RuntimeMethod_var, (ES3Reader_t2780AF8AA61DA2A817115CEF8612AC0E494D03C9 *)L_52, (ES3Type_t8FBECB7AE75168648B9524E0C2A38DAD4555421D *)L_53);
		SizeBySpeedModule_set_xMultiplier_m20E2174791982BB87D08217F71EA925022A1B0CC((SizeBySpeedModule_t156070A63E0A483D36BCAE783BA554CDA7CAF752 *)(SizeBySpeedModule_t156070A63E0A483D36BCAE783BA554CDA7CAF752 *)(&V_0), (float)L_54, /*hidden argument*/NULL);
		// break;
		goto IL_0290;
	}

IL_0212:
	{
		// instance.y = reader.Read<UnityEngine.ParticleSystem.MinMaxCurve>(ES3Type_MinMaxCurve.Instance);
		ES3Reader_t2780AF8AA61DA2A817115CEF8612AC0E494D03C9 * L_55 = ___reader0;
		IL2CPP_RUNTIME_CLASS_INIT(ES3Type_MinMaxCurve_tC5342BF0F8735B85CB5E16FDD4C6FACC8AFAD3B7_il2cpp_TypeInfo_var);
		ES3Type_t8FBECB7AE75168648B9524E0C2A38DAD4555421D * L_56 = ((ES3Type_MinMaxCurve_tC5342BF0F8735B85CB5E16FDD4C6FACC8AFAD3B7_StaticFields*)il2cpp_codegen_static_fields_for(ES3Type_MinMaxCurve_tC5342BF0F8735B85CB5E16FDD4C6FACC8AFAD3B7_il2cpp_TypeInfo_var))->get_Instance_12();
		NullCheck((ES3Reader_t2780AF8AA61DA2A817115CEF8612AC0E494D03C9 *)L_55);
		MinMaxCurve_tF036239442AB2D438B1EDABEBC785426871084CD  L_57;
		L_57 = GenericVirtFuncInvoker1< MinMaxCurve_tF036239442AB2D438B1EDABEBC785426871084CD , ES3Type_t8FBECB7AE75168648B9524E0C2A38DAD4555421D * >::Invoke(ES3Reader_Read_TisMinMaxCurve_tF036239442AB2D438B1EDABEBC785426871084CD_mD285150CBFB52440643BBECB5ADF4EE8DE940535_RuntimeMethod_var, (ES3Reader_t2780AF8AA61DA2A817115CEF8612AC0E494D03C9 *)L_55, (ES3Type_t8FBECB7AE75168648B9524E0C2A38DAD4555421D *)L_56);
		SizeBySpeedModule_set_y_m87016AA5C7B16879AB922CE07FCCF94E3683671F((SizeBySpeedModule_t156070A63E0A483D36BCAE783BA554CDA7CAF752 *)(SizeBySpeedModule_t156070A63E0A483D36BCAE783BA554CDA7CAF752 *)(&V_0), (MinMaxCurve_tF036239442AB2D438B1EDABEBC785426871084CD )L_57, /*hidden argument*/NULL);
		// break;
		goto IL_0290;
	}

IL_0226:
	{
		// instance.yMultiplier = reader.Read<System.Single>(ES3Type_float.Instance);
		ES3Reader_t2780AF8AA61DA2A817115CEF8612AC0E494D03C9 * L_58 = ___reader0;
		IL2CPP_RUNTIME_CLASS_INIT(ES3Type_float_tF86B773C86731BD9AD79448B860BBB178FE77644_il2cpp_TypeInfo_var);
		ES3Type_t8FBECB7AE75168648B9524E0C2A38DAD4555421D * L_59 = ((ES3Type_float_tF86B773C86731BD9AD79448B860BBB178FE77644_StaticFields*)il2cpp_codegen_static_fields_for(ES3Type_float_tF86B773C86731BD9AD79448B860BBB178FE77644_il2cpp_TypeInfo_var))->get_Instance_12();
		NullCheck((ES3Reader_t2780AF8AA61DA2A817115CEF8612AC0E494D03C9 *)L_58);
		float L_60;
		L_60 = GenericVirtFuncInvoker1< float, ES3Type_t8FBECB7AE75168648B9524E0C2A38DAD4555421D * >::Invoke(ES3Reader_Read_TisSingle_tE07797BA3C98D4CA9B5A19413C19A76688AB899E_m4A0416374498BDA042B8EB21E49B72326D6CE5F4_RuntimeMethod_var, (ES3Reader_t2780AF8AA61DA2A817115CEF8612AC0E494D03C9 *)L_58, (ES3Type_t8FBECB7AE75168648B9524E0C2A38DAD4555421D *)L_59);
		SizeBySpeedModule_set_yMultiplier_m16CEB10FE778D443B34EC516FD08191E74CB5CE3((SizeBySpeedModule_t156070A63E0A483D36BCAE783BA554CDA7CAF752 *)(SizeBySpeedModule_t156070A63E0A483D36BCAE783BA554CDA7CAF752 *)(&V_0), (float)L_60, /*hidden argument*/NULL);
		// break;
		goto IL_0290;
	}

IL_023a:
	{
		// instance.z = reader.Read<UnityEngine.ParticleSystem.MinMaxCurve>(ES3Type_MinMaxCurve.Instance);
		ES3Reader_t2780AF8AA61DA2A817115CEF8612AC0E494D03C9 * L_61 = ___reader0;
		IL2CPP_RUNTIME_CLASS_INIT(ES3Type_MinMaxCurve_tC5342BF0F8735B85CB5E16FDD4C6FACC8AFAD3B7_il2cpp_TypeInfo_var);
		ES3Type_t8FBECB7AE75168648B9524E0C2A38DAD4555421D * L_62 = ((ES3Type_MinMaxCurve_tC5342BF0F8735B85CB5E16FDD4C6FACC8AFAD3B7_StaticFields*)il2cpp_codegen_static_fields_for(ES3Type_MinMaxCurve_tC5342BF0F8735B85CB5E16FDD4C6FACC8AFAD3B7_il2cpp_TypeInfo_var))->get_Instance_12();
		NullCheck((ES3Reader_t2780AF8AA61DA2A817115CEF8612AC0E494D03C9 *)L_61);
		MinMaxCurve_tF036239442AB2D438B1EDABEBC785426871084CD  L_63;
		L_63 = GenericVirtFuncInvoker1< MinMaxCurve_tF036239442AB2D438B1EDABEBC785426871084CD , ES3Type_t8FBECB7AE75168648B9524E0C2A38DAD4555421D * >::Invoke(ES3Reader_Read_TisMinMaxCurve_tF036239442AB2D438B1EDABEBC785426871084CD_mD285150CBFB52440643BBECB5ADF4EE8DE940535_RuntimeMethod_var, (ES3Reader_t2780AF8AA61DA2A817115CEF8612AC0E494D03C9 *)L_61, (ES3Type_t8FBECB7AE75168648B9524E0C2A38DAD4555421D *)L_62);
		SizeBySpeedModule_set_z_m789F392BAE1FFE10F22445F0A89FE4905AD48E13((SizeBySpeedModule_t156070A63E0A483D36BCAE783BA554CDA7CAF752 *)(SizeBySpeedModule_t156070A63E0A483D36BCAE783BA554CDA7CAF752 *)(&V_0), (MinMaxCurve_tF036239442AB2D438B1EDABEBC785426871084CD )L_63, /*hidden argument*/NULL);
		// break;
		goto IL_0290;
	}

IL_024e:
	{
		// instance.zMultiplier = reader.Read<System.Single>(ES3Type_float.Instance);
		ES3Reader_t2780AF8AA61DA2A817115CEF8612AC0E494D03C9 * L_64 = ___reader0;
		IL2CPP_RUNTIME_CLASS_INIT(ES3Type_float_tF86B773C86731BD9AD79448B860BBB178FE77644_il2cpp_TypeInfo_var);
		ES3Type_t8FBECB7AE75168648B9524E0C2A38DAD4555421D * L_65 = ((ES3Type_float_tF86B773C86731BD9AD79448B860BBB178FE77644_StaticFields*)il2cpp_codegen_static_fields_for(ES3Type_float_tF86B773C86731BD9AD79448B860BBB178FE77644_il2cpp_TypeInfo_var))->get_Instance_12();
		NullCheck((ES3Reader_t2780AF8AA61DA2A817115CEF8612AC0E494D03C9 *)L_64);
		float L_66;
		L_66 = GenericVirtFuncInvoker1< float, ES3Type_t8FBECB7AE75168648B9524E0C2A38DAD4555421D * >::Invoke(ES3Reader_Read_TisSingle_tE07797BA3C98D4CA9B5A19413C19A76688AB899E_m4A0416374498BDA042B8EB21E49B72326D6CE5F4_RuntimeMethod_var, (ES3Reader_t2780AF8AA61DA2A817115CEF8612AC0E494D03C9 *)L_64, (ES3Type_t8FBECB7AE75168648B9524E0C2A38DAD4555421D *)L_65);
		SizeBySpeedModule_set_zMultiplier_m3CDE48B31D0AA2BDD554D6FB39509E32D3B3540F((SizeBySpeedModule_t156070A63E0A483D36BCAE783BA554CDA7CAF752 *)(SizeBySpeedModule_t156070A63E0A483D36BCAE783BA554CDA7CAF752 *)(&V_0), (float)L_66, /*hidden argument*/NULL);
		// break;
		goto IL_0290;
	}

IL_0262:
	{
		// instance.separateAxes = reader.Read<System.Boolean>(ES3Type_bool.Instance);
		ES3Reader_t2780AF8AA61DA2A817115CEF8612AC0E494D03C9 * L_67 = ___reader0;
		IL2CPP_RUNTIME_CLASS_INIT(ES3Type_bool_t8F309F7B9CC735FF1DEE68081B6E3CAB367745F4_il2cpp_TypeInfo_var);
		ES3Type_t8FBECB7AE75168648B9524E0C2A38DAD4555421D * L_68 = ((ES3Type_bool_t8F309F7B9CC735FF1DEE68081B6E3CAB367745F4_StaticFields*)il2cpp_codegen_static_fields_for(ES3Type_bool_t8F309F7B9CC735FF1DEE68081B6E3CAB367745F4_il2cpp_TypeInfo_var))->get_Instance_12();
		NullCheck((ES3Reader_t2780AF8AA61DA2A817115CEF8612AC0E494D03C9 *)L_67);
		bool L_69;
		L_69 = GenericVirtFuncInvoker1< bool, ES3Type_t8FBECB7AE75168648B9524E0C2A38DAD4555421D * >::Invoke(ES3Reader_Read_TisBoolean_t07D1E3F34E4813023D64F584DFF7B34C9D922F37_mC6D1B158268FF9B97822FF9F5B37FB1723FEDA22_RuntimeMethod_var, (ES3Reader_t2780AF8AA61DA2A817115CEF8612AC0E494D03C9 *)L_67, (ES3Type_t8FBECB7AE75168648B9524E0C2A38DAD4555421D *)L_68);
		SizeBySpeedModule_set_separateAxes_mF8B0B99BA3B98D6A8578B70EA19DFB271657FD8F((SizeBySpeedModule_t156070A63E0A483D36BCAE783BA554CDA7CAF752 *)(SizeBySpeedModule_t156070A63E0A483D36BCAE783BA554CDA7CAF752 *)(&V_0), (bool)L_69, /*hidden argument*/NULL);
		// break;
		goto IL_0290;
	}

IL_0276:
	{
		// instance.range = reader.Read<UnityEngine.Vector2>(ES3Type_Vector2.Instance);
		ES3Reader_t2780AF8AA61DA2A817115CEF8612AC0E494D03C9 * L_70 = ___reader0;
		IL2CPP_RUNTIME_CLASS_INIT(ES3Type_Vector2_t803CDF887D02E9215B016DFABE969B06638FB1F5_il2cpp_TypeInfo_var);
		ES3Type_t8FBECB7AE75168648B9524E0C2A38DAD4555421D * L_71 = ((ES3Type_Vector2_t803CDF887D02E9215B016DFABE969B06638FB1F5_StaticFields*)il2cpp_codegen_static_fields_for(ES3Type_Vector2_t803CDF887D02E9215B016DFABE969B06638FB1F5_il2cpp_TypeInfo_var))->get_Instance_12();
		NullCheck((ES3Reader_t2780AF8AA61DA2A817115CEF8612AC0E494D03C9 *)L_70);
		Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  L_72;
		L_72 = GenericVirtFuncInvoker1< Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9 , ES3Type_t8FBECB7AE75168648B9524E0C2A38DAD4555421D * >::Invoke(ES3Reader_Read_TisVector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9_mD2C1683A01C44107D1473023F8188DDEA71D9A7D_RuntimeMethod_var, (ES3Reader_t2780AF8AA61DA2A817115CEF8612AC0E494D03C9 *)L_70, (ES3Type_t8FBECB7AE75168648B9524E0C2A38DAD4555421D *)L_71);
		SizeBySpeedModule_set_range_mDF4151A1FBDEB5417C8B481907AE58C969F5167D((SizeBySpeedModule_t156070A63E0A483D36BCAE783BA554CDA7CAF752 *)(SizeBySpeedModule_t156070A63E0A483D36BCAE783BA554CDA7CAF752 *)(&V_0), (Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9 )L_72, /*hidden argument*/NULL);
		// break;
		goto IL_0290;
	}

IL_028a:
	{
		// reader.Skip();
		ES3Reader_t2780AF8AA61DA2A817115CEF8612AC0E494D03C9 * L_73 = ___reader0;
		NullCheck((ES3Reader_t2780AF8AA61DA2A817115CEF8612AC0E494D03C9 *)L_73);
		VirtActionInvoker0::Invoke(41 /* System.Void ES3Reader::Skip() */, (ES3Reader_t2780AF8AA61DA2A817115CEF8612AC0E494D03C9 *)L_73);
	}

IL_0290:
	{
		// while((propertyName = reader.ReadPropertyName()) != null)
		ES3Reader_t2780AF8AA61DA2A817115CEF8612AC0E494D03C9 * L_74 = ___reader0;
		NullCheck((ES3Reader_t2780AF8AA61DA2A817115CEF8612AC0E494D03C9 *)L_74);
		String_t* L_75;
		L_75 = VirtFuncInvoker0< String_t* >::Invoke(21 /* System.String ES3Reader::ReadPropertyName() */, (ES3Reader_t2780AF8AA61DA2A817115CEF8612AC0E494D03C9 *)L_74);
		String_t* L_76 = (String_t*)L_75;
		V_1 = (String_t*)L_76;
		if (L_76)
		{
			goto IL_000c;
		}
	}
	{
		// }
		return;
	}
}
// System.Void ES3Types.ES3Type_SizeBySpeedModule::ReadInto<UnityEngine.Color>(ES3Reader,System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ES3Type_SizeBySpeedModule_ReadInto_TisColor_tF40DAF76C04FFECF3FE6024F85A294741C9CC659_m6FFD44BA297CF84AB191E4E99952EB623414CE8F_gshared (ES3Type_SizeBySpeedModule_tE2CD943FBEF83D6F6EDB836909B9C475DF2A7FD0 * __this, ES3Reader_t2780AF8AA61DA2A817115CEF8612AC0E494D03C9 * ___reader0, RuntimeObject * ___obj1, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ES3Reader_Read_TisBoolean_t07D1E3F34E4813023D64F584DFF7B34C9D922F37_mC6D1B158268FF9B97822FF9F5B37FB1723FEDA22_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ES3Reader_Read_TisMinMaxCurve_tF036239442AB2D438B1EDABEBC785426871084CD_mD285150CBFB52440643BBECB5ADF4EE8DE940535_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ES3Reader_Read_TisSingle_tE07797BA3C98D4CA9B5A19413C19A76688AB899E_m4A0416374498BDA042B8EB21E49B72326D6CE5F4_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ES3Reader_Read_TisVector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9_mD2C1683A01C44107D1473023F8188DDEA71D9A7D_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ES3Type_MinMaxCurve_tC5342BF0F8735B85CB5E16FDD4C6FACC8AFAD3B7_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ES3Type_Vector2_t803CDF887D02E9215B016DFABE969B06638FB1F5_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ES3Type_bool_t8F309F7B9CC735FF1DEE68081B6E3CAB367745F4_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ES3Type_float_tF86B773C86731BD9AD79448B860BBB178FE77644_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&SizeBySpeedModule_t156070A63E0A483D36BCAE783BA554CDA7CAF752_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral062DB096C728515E033CF8C48A1C1F0B9A79384B);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral1B024D537329B86AB0DF96B2A714180F442F53E9);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral2F8690361553406965679AEF125F896BC5FC61F5);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral3EE5A4671A4E5AEBD31CA5F013A7773DC18ED22B);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral4845015737DC41475709911228278216EE4DC3AF);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral8C6F88DEE0DFE3513BB8B44A8CF0FEE437F4EFFB);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral9384C6EF2DA5C0BD5274A0DACFF291D0ABBFD8B1);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral9CE1604D659135925CCC4DD1F526AFFE42E689F1);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral9E61658953B4F9BB4A05E3D2D2BC18990BADE934);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralBD0DD0004699EF86BF0FC1D161FA3766AF5126C4);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralF9D225733E1D10F9344C755C4A9C0870CD1DE97B);
		s_Il2CppMethodInitialized = true;
	}
	SizeBySpeedModule_t156070A63E0A483D36BCAE783BA554CDA7CAF752  V_0;
	memset((&V_0), 0, sizeof(V_0));
	String_t* V_1 = NULL;
	uint32_t V_2 = 0;
	{
		// var instance = (UnityEngine.ParticleSystem.SizeBySpeedModule)obj;
		RuntimeObject * L_0 = ___obj1;
		V_0 = (SizeBySpeedModule_t156070A63E0A483D36BCAE783BA554CDA7CAF752 )((*(SizeBySpeedModule_t156070A63E0A483D36BCAE783BA554CDA7CAF752 *)((SizeBySpeedModule_t156070A63E0A483D36BCAE783BA554CDA7CAF752 *)UnBox(L_0, SizeBySpeedModule_t156070A63E0A483D36BCAE783BA554CDA7CAF752_il2cpp_TypeInfo_var))));
		goto IL_0290;
	}

IL_000c:
	{
		String_t* L_1 = V_1;
		if (!L_1)
		{
			goto IL_028a;
		}
	}
	{
		String_t* L_2 = V_1;
		uint32_t L_3;
		L_3 = U3CPrivateImplementationDetailsU3E_ComputeStringHash_m3ADC1F612F9EE3DD518E6F0023A0DE0EE2B120A7((String_t*)L_2, /*hidden argument*/NULL);
		V_2 = (uint32_t)L_3;
		uint32_t L_4 = V_2;
		if ((!(((uint32_t)L_4) <= ((uint32_t)((int32_t)1479031685)))))
		{
			goto IL_006a;
		}
	}
	{
		uint32_t L_5 = V_2;
		if ((!(((uint32_t)L_5) <= ((uint32_t)((int32_t)597743964)))))
		{
			goto IL_0044;
		}
	}
	{
		uint32_t L_6 = V_2;
		if ((((int32_t)L_6) == ((int32_t)((int32_t)49525662))))
		{
			goto IL_00bb;
		}
	}
	{
		uint32_t L_7 = V_2;
		if ((((int32_t)L_7) == ((int32_t)((int32_t)597743964))))
		{
			goto IL_00d0;
		}
	}
	{
		goto IL_028a;
	}

IL_0044:
	{
		uint32_t L_8 = V_2;
		if ((((int32_t)L_8) == ((int32_t)((int32_t)726266686))))
		{
			goto IL_0163;
		}
	}
	{
		uint32_t L_9 = V_2;
		if ((((int32_t)L_9) == ((int32_t)((int32_t)1105436259))))
		{
			goto IL_00e5;
		}
	}
	{
		uint32_t L_10 = V_2;
		if ((((int32_t)L_10) == ((int32_t)((int32_t)1479031685))))
		{
			goto IL_0178;
		}
	}
	{
		goto IL_028a;
	}

IL_006a:
	{
		uint32_t L_11 = V_2;
		if ((!(((uint32_t)L_11) <= ((uint32_t)((int32_t)-86242094)))))
		{
			goto IL_0098;
		}
	}
	{
		uint32_t L_12 = V_2;
		if ((((int32_t)L_12) == ((int32_t)((int32_t)-1013869429))))
		{
			goto IL_0139;
		}
	}
	{
		uint32_t L_13 = V_2;
		if ((((int32_t)L_13) == ((int32_t)((int32_t)-585050980))))
		{
			goto IL_010f;
		}
	}
	{
		uint32_t L_14 = V_2;
		if ((((int32_t)L_14) == ((int32_t)((int32_t)-86242094))))
		{
			goto IL_018d;
		}
	}
	{
		goto IL_028a;
	}

IL_0098:
	{
		uint32_t L_15 = V_2;
		if ((((int32_t)L_15) == ((int32_t)((int32_t)-66302220))))
		{
			goto IL_0124;
		}
	}
	{
		uint32_t L_16 = V_2;
		if ((((int32_t)L_16) == ((int32_t)((int32_t)-49524601))))
		{
			goto IL_00fa;
		}
	}
	{
		uint32_t L_17 = V_2;
		if ((((int32_t)L_17) == ((int32_t)((int32_t)-15969363))))
		{
			goto IL_014e;
		}
	}
	{
		goto IL_028a;
	}

IL_00bb:
	{
		String_t* L_18 = V_1;
		bool L_19;
		L_19 = String_op_Equality_m50B3548E4AC232558190B0052877B290AA1D436A((String_t*)L_18, (String_t*)_stringLiteralF9D225733E1D10F9344C755C4A9C0870CD1DE97B, /*hidden argument*/NULL);
		if (L_19)
		{
			goto IL_01a2;
		}
	}
	{
		goto IL_028a;
	}

IL_00d0:
	{
		String_t* L_20 = V_1;
		bool L_21;
		L_21 = String_op_Equality_m50B3548E4AC232558190B0052877B290AA1D436A((String_t*)L_20, (String_t*)_stringLiteral3EE5A4671A4E5AEBD31CA5F013A7773DC18ED22B, /*hidden argument*/NULL);
		if (L_21)
		{
			goto IL_01b9;
		}
	}
	{
		goto IL_028a;
	}

IL_00e5:
	{
		String_t* L_22 = V_1;
		bool L_23;
		L_23 = String_op_Equality_m50B3548E4AC232558190B0052877B290AA1D436A((String_t*)L_22, (String_t*)_stringLiteralBD0DD0004699EF86BF0FC1D161FA3766AF5126C4, /*hidden argument*/NULL);
		if (L_23)
		{
			goto IL_01d0;
		}
	}
	{
		goto IL_028a;
	}

IL_00fa:
	{
		String_t* L_24 = V_1;
		bool L_25;
		L_25 = String_op_Equality_m50B3548E4AC232558190B0052877B290AA1D436A((String_t*)L_24, (String_t*)_stringLiteral062DB096C728515E033CF8C48A1C1F0B9A79384B, /*hidden argument*/NULL);
		if (L_25)
		{
			goto IL_01e7;
		}
	}
	{
		goto IL_028a;
	}

IL_010f:
	{
		String_t* L_26 = V_1;
		bool L_27;
		L_27 = String_op_Equality_m50B3548E4AC232558190B0052877B290AA1D436A((String_t*)L_26, (String_t*)_stringLiteral8C6F88DEE0DFE3513BB8B44A8CF0FEE437F4EFFB, /*hidden argument*/NULL);
		if (L_27)
		{
			goto IL_01fe;
		}
	}
	{
		goto IL_028a;
	}

IL_0124:
	{
		String_t* L_28 = V_1;
		bool L_29;
		L_29 = String_op_Equality_m50B3548E4AC232558190B0052877B290AA1D436A((String_t*)L_28, (String_t*)_stringLiteral9384C6EF2DA5C0BD5274A0DACFF291D0ABBFD8B1, /*hidden argument*/NULL);
		if (L_29)
		{
			goto IL_0212;
		}
	}
	{
		goto IL_028a;
	}

IL_0139:
	{
		String_t* L_30 = V_1;
		bool L_31;
		L_31 = String_op_Equality_m50B3548E4AC232558190B0052877B290AA1D436A((String_t*)L_30, (String_t*)_stringLiteral9E61658953B4F9BB4A05E3D2D2BC18990BADE934, /*hidden argument*/NULL);
		if (L_31)
		{
			goto IL_0226;
		}
	}
	{
		goto IL_028a;
	}

IL_014e:
	{
		String_t* L_32 = V_1;
		bool L_33;
		L_33 = String_op_Equality_m50B3548E4AC232558190B0052877B290AA1D436A((String_t*)L_32, (String_t*)_stringLiteral9CE1604D659135925CCC4DD1F526AFFE42E689F1, /*hidden argument*/NULL);
		if (L_33)
		{
			goto IL_023a;
		}
	}
	{
		goto IL_028a;
	}

IL_0163:
	{
		String_t* L_34 = V_1;
		bool L_35;
		L_35 = String_op_Equality_m50B3548E4AC232558190B0052877B290AA1D436A((String_t*)L_34, (String_t*)_stringLiteral2F8690361553406965679AEF125F896BC5FC61F5, /*hidden argument*/NULL);
		if (L_35)
		{
			goto IL_024e;
		}
	}
	{
		goto IL_028a;
	}

IL_0178:
	{
		String_t* L_36 = V_1;
		bool L_37;
		L_37 = String_op_Equality_m50B3548E4AC232558190B0052877B290AA1D436A((String_t*)L_36, (String_t*)_stringLiteral1B024D537329B86AB0DF96B2A714180F442F53E9, /*hidden argument*/NULL);
		if (L_37)
		{
			goto IL_0262;
		}
	}
	{
		goto IL_028a;
	}

IL_018d:
	{
		String_t* L_38 = V_1;
		bool L_39;
		L_39 = String_op_Equality_m50B3548E4AC232558190B0052877B290AA1D436A((String_t*)L_38, (String_t*)_stringLiteral4845015737DC41475709911228278216EE4DC3AF, /*hidden argument*/NULL);
		if (L_39)
		{
			goto IL_0276;
		}
	}
	{
		goto IL_028a;
	}

IL_01a2:
	{
		// instance.enabled = reader.Read<System.Boolean>(ES3Type_bool.Instance);
		ES3Reader_t2780AF8AA61DA2A817115CEF8612AC0E494D03C9 * L_40 = ___reader0;
		IL2CPP_RUNTIME_CLASS_INIT(ES3Type_bool_t8F309F7B9CC735FF1DEE68081B6E3CAB367745F4_il2cpp_TypeInfo_var);
		ES3Type_t8FBECB7AE75168648B9524E0C2A38DAD4555421D * L_41 = ((ES3Type_bool_t8F309F7B9CC735FF1DEE68081B6E3CAB367745F4_StaticFields*)il2cpp_codegen_static_fields_for(ES3Type_bool_t8F309F7B9CC735FF1DEE68081B6E3CAB367745F4_il2cpp_TypeInfo_var))->get_Instance_12();
		NullCheck((ES3Reader_t2780AF8AA61DA2A817115CEF8612AC0E494D03C9 *)L_40);
		bool L_42;
		L_42 = GenericVirtFuncInvoker1< bool, ES3Type_t8FBECB7AE75168648B9524E0C2A38DAD4555421D * >::Invoke(ES3Reader_Read_TisBoolean_t07D1E3F34E4813023D64F584DFF7B34C9D922F37_mC6D1B158268FF9B97822FF9F5B37FB1723FEDA22_RuntimeMethod_var, (ES3Reader_t2780AF8AA61DA2A817115CEF8612AC0E494D03C9 *)L_40, (ES3Type_t8FBECB7AE75168648B9524E0C2A38DAD4555421D *)L_41);
		SizeBySpeedModule_set_enabled_m0CC5D81593E6D047B2B150041577EC93D3C7701C((SizeBySpeedModule_t156070A63E0A483D36BCAE783BA554CDA7CAF752 *)(SizeBySpeedModule_t156070A63E0A483D36BCAE783BA554CDA7CAF752 *)(&V_0), (bool)L_42, /*hidden argument*/NULL);
		// break;
		goto IL_0290;
	}

IL_01b9:
	{
		// instance.size = reader.Read<UnityEngine.ParticleSystem.MinMaxCurve>(ES3Type_MinMaxCurve.Instance);
		ES3Reader_t2780AF8AA61DA2A817115CEF8612AC0E494D03C9 * L_43 = ___reader0;
		IL2CPP_RUNTIME_CLASS_INIT(ES3Type_MinMaxCurve_tC5342BF0F8735B85CB5E16FDD4C6FACC8AFAD3B7_il2cpp_TypeInfo_var);
		ES3Type_t8FBECB7AE75168648B9524E0C2A38DAD4555421D * L_44 = ((ES3Type_MinMaxCurve_tC5342BF0F8735B85CB5E16FDD4C6FACC8AFAD3B7_StaticFields*)il2cpp_codegen_static_fields_for(ES3Type_MinMaxCurve_tC5342BF0F8735B85CB5E16FDD4C6FACC8AFAD3B7_il2cpp_TypeInfo_var))->get_Instance_12();
		NullCheck((ES3Reader_t2780AF8AA61DA2A817115CEF8612AC0E494D03C9 *)L_43);
		MinMaxCurve_tF036239442AB2D438B1EDABEBC785426871084CD  L_45;
		L_45 = GenericVirtFuncInvoker1< MinMaxCurve_tF036239442AB2D438B1EDABEBC785426871084CD , ES3Type_t8FBECB7AE75168648B9524E0C2A38DAD4555421D * >::Invoke(ES3Reader_Read_TisMinMaxCurve_tF036239442AB2D438B1EDABEBC785426871084CD_mD285150CBFB52440643BBECB5ADF4EE8DE940535_RuntimeMethod_var, (ES3Reader_t2780AF8AA61DA2A817115CEF8612AC0E494D03C9 *)L_43, (ES3Type_t8FBECB7AE75168648B9524E0C2A38DAD4555421D *)L_44);
		SizeBySpeedModule_set_size_mB0D87FAEF26DF701E303C3D480E83465AE600D12((SizeBySpeedModule_t156070A63E0A483D36BCAE783BA554CDA7CAF752 *)(SizeBySpeedModule_t156070A63E0A483D36BCAE783BA554CDA7CAF752 *)(&V_0), (MinMaxCurve_tF036239442AB2D438B1EDABEBC785426871084CD )L_45, /*hidden argument*/NULL);
		// break;
		goto IL_0290;
	}

IL_01d0:
	{
		// instance.sizeMultiplier = reader.Read<System.Single>(ES3Type_float.Instance);
		ES3Reader_t2780AF8AA61DA2A817115CEF8612AC0E494D03C9 * L_46 = ___reader0;
		IL2CPP_RUNTIME_CLASS_INIT(ES3Type_float_tF86B773C86731BD9AD79448B860BBB178FE77644_il2cpp_TypeInfo_var);
		ES3Type_t8FBECB7AE75168648B9524E0C2A38DAD4555421D * L_47 = ((ES3Type_float_tF86B773C86731BD9AD79448B860BBB178FE77644_StaticFields*)il2cpp_codegen_static_fields_for(ES3Type_float_tF86B773C86731BD9AD79448B860BBB178FE77644_il2cpp_TypeInfo_var))->get_Instance_12();
		NullCheck((ES3Reader_t2780AF8AA61DA2A817115CEF8612AC0E494D03C9 *)L_46);
		float L_48;
		L_48 = GenericVirtFuncInvoker1< float, ES3Type_t8FBECB7AE75168648B9524E0C2A38DAD4555421D * >::Invoke(ES3Reader_Read_TisSingle_tE07797BA3C98D4CA9B5A19413C19A76688AB899E_m4A0416374498BDA042B8EB21E49B72326D6CE5F4_RuntimeMethod_var, (ES3Reader_t2780AF8AA61DA2A817115CEF8612AC0E494D03C9 *)L_46, (ES3Type_t8FBECB7AE75168648B9524E0C2A38DAD4555421D *)L_47);
		SizeBySpeedModule_set_sizeMultiplier_m6087A72CA424D9F258632500EFA8BA9FB71F6141((SizeBySpeedModule_t156070A63E0A483D36BCAE783BA554CDA7CAF752 *)(SizeBySpeedModule_t156070A63E0A483D36BCAE783BA554CDA7CAF752 *)(&V_0), (float)L_48, /*hidden argument*/NULL);
		// break;
		goto IL_0290;
	}

IL_01e7:
	{
		// instance.x = reader.Read<UnityEngine.ParticleSystem.MinMaxCurve>(ES3Type_MinMaxCurve.Instance);
		ES3Reader_t2780AF8AA61DA2A817115CEF8612AC0E494D03C9 * L_49 = ___reader0;
		IL2CPP_RUNTIME_CLASS_INIT(ES3Type_MinMaxCurve_tC5342BF0F8735B85CB5E16FDD4C6FACC8AFAD3B7_il2cpp_TypeInfo_var);
		ES3Type_t8FBECB7AE75168648B9524E0C2A38DAD4555421D * L_50 = ((ES3Type_MinMaxCurve_tC5342BF0F8735B85CB5E16FDD4C6FACC8AFAD3B7_StaticFields*)il2cpp_codegen_static_fields_for(ES3Type_MinMaxCurve_tC5342BF0F8735B85CB5E16FDD4C6FACC8AFAD3B7_il2cpp_TypeInfo_var))->get_Instance_12();
		NullCheck((ES3Reader_t2780AF8AA61DA2A817115CEF8612AC0E494D03C9 *)L_49);
		MinMaxCurve_tF036239442AB2D438B1EDABEBC785426871084CD  L_51;
		L_51 = GenericVirtFuncInvoker1< MinMaxCurve_tF036239442AB2D438B1EDABEBC785426871084CD , ES3Type_t8FBECB7AE75168648B9524E0C2A38DAD4555421D * >::Invoke(ES3Reader_Read_TisMinMaxCurve_tF036239442AB2D438B1EDABEBC785426871084CD_mD285150CBFB52440643BBECB5ADF4EE8DE940535_RuntimeMethod_var, (ES3Reader_t2780AF8AA61DA2A817115CEF8612AC0E494D03C9 *)L_49, (ES3Type_t8FBECB7AE75168648B9524E0C2A38DAD4555421D *)L_50);
		SizeBySpeedModule_set_x_mFFD1FB55668F9C02B2AB87D861F028E57EE81E7B((SizeBySpeedModule_t156070A63E0A483D36BCAE783BA554CDA7CAF752 *)(SizeBySpeedModule_t156070A63E0A483D36BCAE783BA554CDA7CAF752 *)(&V_0), (MinMaxCurve_tF036239442AB2D438B1EDABEBC785426871084CD )L_51, /*hidden argument*/NULL);
		// break;
		goto IL_0290;
	}

IL_01fe:
	{
		// instance.xMultiplier = reader.Read<System.Single>(ES3Type_float.Instance);
		ES3Reader_t2780AF8AA61DA2A817115CEF8612AC0E494D03C9 * L_52 = ___reader0;
		IL2CPP_RUNTIME_CLASS_INIT(ES3Type_float_tF86B773C86731BD9AD79448B860BBB178FE77644_il2cpp_TypeInfo_var);
		ES3Type_t8FBECB7AE75168648B9524E0C2A38DAD4555421D * L_53 = ((ES3Type_float_tF86B773C86731BD9AD79448B860BBB178FE77644_StaticFields*)il2cpp_codegen_static_fields_for(ES3Type_float_tF86B773C86731BD9AD79448B860BBB178FE77644_il2cpp_TypeInfo_var))->get_Instance_12();
		NullCheck((ES3Reader_t2780AF8AA61DA2A817115CEF8612AC0E494D03C9 *)L_52);
		float L_54;
		L_54 = GenericVirtFuncInvoker1< float, ES3Type_t8FBECB7AE75168648B9524E0C2A38DAD4555421D * >::Invoke(ES3Reader_Read_TisSingle_tE07797BA3C98D4CA9B5A19413C19A76688AB899E_m4A0416374498BDA042B8EB21E49B72326D6CE5F4_RuntimeMethod_var, (ES3Reader_t2780AF8AA61DA2A817115CEF8612AC0E494D03C9 *)L_52, (ES3Type_t8FBECB7AE75168648B9524E0C2A38DAD4555421D *)L_53);
		SizeBySpeedModule_set_xMultiplier_m20E2174791982BB87D08217F71EA925022A1B0CC((SizeBySpeedModule_t156070A63E0A483D36BCAE783BA554CDA7CAF752 *)(SizeBySpeedModule_t156070A63E0A483D36BCAE783BA554CDA7CAF752 *)(&V_0), (float)L_54, /*hidden argument*/NULL);
		// break;
		goto IL_0290;
	}

IL_0212:
	{
		// instance.y = reader.Read<UnityEngine.ParticleSystem.MinMaxCurve>(ES3Type_MinMaxCurve.Instance);
		ES3Reader_t2780AF8AA61DA2A817115CEF8612AC0E494D03C9 * L_55 = ___reader0;
		IL2CPP_RUNTIME_CLASS_INIT(ES3Type_MinMaxCurve_tC5342BF0F8735B85CB5E16FDD4C6FACC8AFAD3B7_il2cpp_TypeInfo_var);
		ES3Type_t8FBECB7AE75168648B9524E0C2A38DAD4555421D * L_56 = ((ES3Type_MinMaxCurve_tC5342BF0F8735B85CB5E16FDD4C6FACC8AFAD3B7_StaticFields*)il2cpp_codegen_static_fields_for(ES3Type_MinMaxCurve_tC5342BF0F8735B85CB5E16FDD4C6FACC8AFAD3B7_il2cpp_TypeInfo_var))->get_Instance_12();
		NullCheck((ES3Reader_t2780AF8AA61DA2A817115CEF8612AC0E494D03C9 *)L_55);
		MinMaxCurve_tF036239442AB2D438B1EDABEBC785426871084CD  L_57;
		L_57 = GenericVirtFuncInvoker1< MinMaxCurve_tF036239442AB2D438B1EDABEBC785426871084CD , ES3Type_t8FBECB7AE75168648B9524E0C2A38DAD4555421D * >::Invoke(ES3Reader_Read_TisMinMaxCurve_tF036239442AB2D438B1EDABEBC785426871084CD_mD285150CBFB52440643BBECB5ADF4EE8DE940535_RuntimeMethod_var, (ES3Reader_t2780AF8AA61DA2A817115CEF8612AC0E494D03C9 *)L_55, (ES3Type_t8FBECB7AE75168648B9524E0C2A38DAD4555421D *)L_56);
		SizeBySpeedModule_set_y_m87016AA5C7B16879AB922CE07FCCF94E3683671F((SizeBySpeedModule_t156070A63E0A483D36BCAE783BA554CDA7CAF752 *)(SizeBySpeedModule_t156070A63E0A483D36BCAE783BA554CDA7CAF752 *)(&V_0), (MinMaxCurve_tF036239442AB2D438B1EDABEBC785426871084CD )L_57, /*hidden argument*/NULL);
		// break;
		goto IL_0290;
	}

IL_0226:
	{
		// instance.yMultiplier = reader.Read<System.Single>(ES3Type_float.Instance);
		ES3Reader_t2780AF8AA61DA2A817115CEF8612AC0E494D03C9 * L_58 = ___reader0;
		IL2CPP_RUNTIME_CLASS_INIT(ES3Type_float_tF86B773C86731BD9AD79448B860BBB178FE77644_il2cpp_TypeInfo_var);
		ES3Type_t8FBECB7AE75168648B9524E0C2A38DAD4555421D * L_59 = ((ES3Type_float_tF86B773C86731BD9AD79448B860BBB178FE77644_StaticFields*)il2cpp_codegen_static_fields_for(ES3Type_float_tF86B773C86731BD9AD79448B860BBB178FE77644_il2cpp_TypeInfo_var))->get_Instance_12();
		NullCheck((ES3Reader_t2780AF8AA61DA2A817115CEF8612AC0E494D03C9 *)L_58);
		float L_60;
		L_60 = GenericVirtFuncInvoker1< float, ES3Type_t8FBECB7AE75168648B9524E0C2A38DAD4555421D * >::Invoke(ES3Reader_Read_TisSingle_tE07797BA3C98D4CA9B5A19413C19A76688AB899E_m4A0416374498BDA042B8EB21E49B72326D6CE5F4_RuntimeMethod_var, (ES3Reader_t2780AF8AA61DA2A817115CEF8612AC0E494D03C9 *)L_58, (ES3Type_t8FBECB7AE75168648B9524E0C2A38DAD4555421D *)L_59);
		SizeBySpeedModule_set_yMultiplier_m16CEB10FE778D443B34EC516FD08191E74CB5CE3((SizeBySpeedModule_t156070A63E0A483D36BCAE783BA554CDA7CAF752 *)(SizeBySpeedModule_t156070A63E0A483D36BCAE783BA554CDA7CAF752 *)(&V_0), (float)L_60, /*hidden argument*/NULL);
		// break;
		goto IL_0290;
	}

IL_023a:
	{
		// instance.z = reader.Read<UnityEngine.ParticleSystem.MinMaxCurve>(ES3Type_MinMaxCurve.Instance);
		ES3Reader_t2780AF8AA61DA2A817115CEF8612AC0E494D03C9 * L_61 = ___reader0;
		IL2CPP_RUNTIME_CLASS_INIT(ES3Type_MinMaxCurve_tC5342BF0F8735B85CB5E16FDD4C6FACC8AFAD3B7_il2cpp_TypeInfo_var);
		ES3Type_t8FBECB7AE75168648B9524E0C2A38DAD4555421D * L_62 = ((ES3Type_MinMaxCurve_tC5342BF0F8735B85CB5E16FDD4C6FACC8AFAD3B7_StaticFields*)il2cpp_codegen_static_fields_for(ES3Type_MinMaxCurve_tC5342BF0F8735B85CB5E16FDD4C6FACC8AFAD3B7_il2cpp_TypeInfo_var))->get_Instance_12();
		NullCheck((ES3Reader_t2780AF8AA61DA2A817115CEF8612AC0E494D03C9 *)L_61);
		MinMaxCurve_tF036239442AB2D438B1EDABEBC785426871084CD  L_63;
		L_63 = GenericVirtFuncInvoker1< MinMaxCurve_tF036239442AB2D438B1EDABEBC785426871084CD , ES3Type_t8FBECB7AE75168648B9524E0C2A38DAD4555421D * >::Invoke(ES3Reader_Read_TisMinMaxCurve_tF036239442AB2D438B1EDABEBC785426871084CD_mD285150CBFB52440643BBECB5ADF4EE8DE940535_RuntimeMethod_var, (ES3Reader_t2780AF8AA61DA2A817115CEF8612AC0E494D03C9 *)L_61, (ES3Type_t8FBECB7AE75168648B9524E0C2A38DAD4555421D *)L_62);
		SizeBySpeedModule_set_z_m789F392BAE1FFE10F22445F0A89FE4905AD48E13((SizeBySpeedModule_t156070A63E0A483D36BCAE783BA554CDA7CAF752 *)(SizeBySpeedModule_t156070A63E0A483D36BCAE783BA554CDA7CAF752 *)(&V_0), (MinMaxCurve_tF036239442AB2D438B1EDABEBC785426871084CD )L_63, /*hidden argument*/NULL);
		// break;
		goto IL_0290;
	}

IL_024e:
	{
		// instance.zMultiplier = reader.Read<System.Single>(ES3Type_float.Instance);
		ES3Reader_t2780AF8AA61DA2A817115CEF8612AC0E494D03C9 * L_64 = ___reader0;
		IL2CPP_RUNTIME_CLASS_INIT(ES3Type_float_tF86B773C86731BD9AD79448B860BBB178FE77644_il2cpp_TypeInfo_var);
		ES3Type_t8FBECB7AE75168648B9524E0C2A38DAD4555421D * L_65 = ((ES3Type_float_tF86B773C86731BD9AD79448B860BBB178FE77644_StaticFields*)il2cpp_codegen_static_fields_for(ES3Type_float_tF86B773C86731BD9AD79448B860BBB178FE77644_il2cpp_TypeInfo_var))->get_Instance_12();
		NullCheck((ES3Reader_t2780AF8AA61DA2A817115CEF8612AC0E494D03C9 *)L_64);
		float L_66;
		L_66 = GenericVirtFuncInvoker1< float, ES3Type_t8FBECB7AE75168648B9524E0C2A38DAD4555421D * >::Invoke(ES3Reader_Read_TisSingle_tE07797BA3C98D4CA9B5A19413C19A76688AB899E_m4A0416374498BDA042B8EB21E49B72326D6CE5F4_RuntimeMethod_var, (ES3Reader_t2780AF8AA61DA2A817115CEF8612AC0E494D03C9 *)L_64, (ES3Type_t8FBECB7AE75168648B9524E0C2A38DAD4555421D *)L_65);
		SizeBySpeedModule_set_zMultiplier_m3CDE48B31D0AA2BDD554D6FB39509E32D3B3540F((SizeBySpeedModule_t156070A63E0A483D36BCAE783BA554CDA7CAF752 *)(SizeBySpeedModule_t156070A63E0A483D36BCAE783BA554CDA7CAF752 *)(&V_0), (float)L_66, /*hidden argument*/NULL);
		// break;
		goto IL_0290;
	}

IL_0262:
	{
		// instance.separateAxes = reader.Read<System.Boolean>(ES3Type_bool.Instance);
		ES3Reader_t2780AF8AA61DA2A817115CEF8612AC0E494D03C9 * L_67 = ___reader0;
		IL2CPP_RUNTIME_CLASS_INIT(ES3Type_bool_t8F309F7B9CC735FF1DEE68081B6E3CAB367745F4_il2cpp_TypeInfo_var);
		ES3Type_t8FBECB7AE75168648B9524E0C2A38DAD4555421D * L_68 = ((ES3Type_bool_t8F309F7B9CC735FF1DEE68081B6E3CAB367745F4_StaticFields*)il2cpp_codegen_static_fields_for(ES3Type_bool_t8F309F7B9CC735FF1DEE68081B6E3CAB367745F4_il2cpp_TypeInfo_var))->get_Instance_12();
		NullCheck((ES3Reader_t2780AF8AA61DA2A817115CEF8612AC0E494D03C9 *)L_67);
		bool L_69;
		L_69 = GenericVirtFuncInvoker1< bool, ES3Type_t8FBECB7AE75168648B9524E0C2A38DAD4555421D * >::Invoke(ES3Reader_Read_TisBoolean_t07D1E3F34E4813023D64F584DFF7B34C9D922F37_mC6D1B158268FF9B97822FF9F5B37FB1723FEDA22_RuntimeMethod_var, (ES3Reader_t2780AF8AA61DA2A817115CEF8612AC0E494D03C9 *)L_67, (ES3Type_t8FBECB7AE75168648B9524E0C2A38DAD4555421D *)L_68);
		SizeBySpeedModule_set_separateAxes_mF8B0B99BA3B98D6A8578B70EA19DFB271657FD8F((SizeBySpeedModule_t156070A63E0A483D36BCAE783BA554CDA7CAF752 *)(SizeBySpeedModule_t156070A63E0A483D36BCAE783BA554CDA7CAF752 *)(&V_0), (bool)L_69, /*hidden argument*/NULL);
		// break;
		goto IL_0290;
	}

IL_0276:
	{
		// instance.range = reader.Read<UnityEngine.Vector2>(ES3Type_Vector2.Instance);
		ES3Reader_t2780AF8AA61DA2A817115CEF8612AC0E494D03C9 * L_70 = ___reader0;
		IL2CPP_RUNTIME_CLASS_INIT(ES3Type_Vector2_t803CDF887D02E9215B016DFABE969B06638FB1F5_il2cpp_TypeInfo_var);
		ES3Type_t8FBECB7AE75168648B9524E0C2A38DAD4555421D * L_71 = ((ES3Type_Vector2_t803CDF887D02E9215B016DFABE969B06638FB1F5_StaticFields*)il2cpp_codegen_static_fields_for(ES3Type_Vector2_t803CDF887D02E9215B016DFABE969B06638FB1F5_il2cpp_TypeInfo_var))->get_Instance_12();
		NullCheck((ES3Reader_t2780AF8AA61DA2A817115CEF8612AC0E494D03C9 *)L_70);
		Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  L_72;
		L_72 = GenericVirtFuncInvoker1< Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9 , ES3Type_t8FBECB7AE75168648B9524E0C2A38DAD4555421D * >::Invoke(ES3Reader_Read_TisVector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9_mD2C1683A01C44107D1473023F8188DDEA71D9A7D_RuntimeMethod_var, (ES3Reader_t2780AF8AA61DA2A817115CEF8612AC0E494D03C9 *)L_70, (ES3Type_t8FBECB7AE75168648B9524E0C2A38DAD4555421D *)L_71);
		SizeBySpeedModule_set_range_mDF4151A1FBDEB5417C8B481907AE58C969F5167D((SizeBySpeedModule_t156070A63E0A483D36BCAE783BA554CDA7CAF752 *)(SizeBySpeedModule_t156070A63E0A483D36BCAE783BA554CDA7CAF752 *)(&V_0), (Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9 )L_72, /*hidden argument*/NULL);
		// break;
		goto IL_0290;
	}

IL_028a:
	{
		// reader.Skip();
		ES3Reader_t2780AF8AA61DA2A817115CEF8612AC0E494D03C9 * L_73 = ___reader0;
		NullCheck((ES3Reader_t2780AF8AA61DA2A817115CEF8612AC0E494D03C9 *)L_73);
		VirtActionInvoker0::Invoke(41 /* System.Void ES3Reader::Skip() */, (ES3Reader_t2780AF8AA61DA2A817115CEF8612AC0E494D03C9 *)L_73);
	}

IL_0290:
	{
		// while((propertyName = reader.ReadPropertyName()) != null)
		ES3Reader_t2780AF8AA61DA2A817115CEF8612AC0E494D03C9 * L_74 = ___reader0;
		NullCheck((ES3Reader_t2780AF8AA61DA2A817115CEF8612AC0E494D03C9 *)L_74);
		String_t* L_75;
		L_75 = VirtFuncInvoker0< String_t* >::Invoke(21 /* System.String ES3Reader::ReadPropertyName() */, (ES3Reader_t2780AF8AA61DA2A817115CEF8612AC0E494D03C9 *)L_74);
		String_t* L_76 = (String_t*)L_75;
		V_1 = (String_t*)L_76;
		if (L_76)
		{
			goto IL_000c;
		}
	}
	{
		// }
		return;
	}
}
// System.Void ES3Types.ES3Type_SizeBySpeedModule::ReadInto<System.Int16>(ES3Reader,System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ES3Type_SizeBySpeedModule_ReadInto_TisInt16_tD0F031114106263BB459DA1F099FF9F42691295A_mCDE0BEAA2BBF3A05EBD061E224710E80286FC7F8_gshared (ES3Type_SizeBySpeedModule_tE2CD943FBEF83D6F6EDB836909B9C475DF2A7FD0 * __this, ES3Reader_t2780AF8AA61DA2A817115CEF8612AC0E494D03C9 * ___reader0, RuntimeObject * ___obj1, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ES3Reader_Read_TisBoolean_t07D1E3F34E4813023D64F584DFF7B34C9D922F37_mC6D1B158268FF9B97822FF9F5B37FB1723FEDA22_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ES3Reader_Read_TisMinMaxCurve_tF036239442AB2D438B1EDABEBC785426871084CD_mD285150CBFB52440643BBECB5ADF4EE8DE940535_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ES3Reader_Read_TisSingle_tE07797BA3C98D4CA9B5A19413C19A76688AB899E_m4A0416374498BDA042B8EB21E49B72326D6CE5F4_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ES3Reader_Read_TisVector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9_mD2C1683A01C44107D1473023F8188DDEA71D9A7D_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ES3Type_MinMaxCurve_tC5342BF0F8735B85CB5E16FDD4C6FACC8AFAD3B7_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ES3Type_Vector2_t803CDF887D02E9215B016DFABE969B06638FB1F5_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ES3Type_bool_t8F309F7B9CC735FF1DEE68081B6E3CAB367745F4_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ES3Type_float_tF86B773C86731BD9AD79448B860BBB178FE77644_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&SizeBySpeedModule_t156070A63E0A483D36BCAE783BA554CDA7CAF752_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral062DB096C728515E033CF8C48A1C1F0B9A79384B);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral1B024D537329B86AB0DF96B2A714180F442F53E9);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral2F8690361553406965679AEF125F896BC5FC61F5);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral3EE5A4671A4E5AEBD31CA5F013A7773DC18ED22B);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral4845015737DC41475709911228278216EE4DC3AF);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral8C6F88DEE0DFE3513BB8B44A8CF0FEE437F4EFFB);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral9384C6EF2DA5C0BD5274A0DACFF291D0ABBFD8B1);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral9CE1604D659135925CCC4DD1F526AFFE42E689F1);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral9E61658953B4F9BB4A05E3D2D2BC18990BADE934);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralBD0DD0004699EF86BF0FC1D161FA3766AF5126C4);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralF9D225733E1D10F9344C755C4A9C0870CD1DE97B);
		s_Il2CppMethodInitialized = true;
	}
	SizeBySpeedModule_t156070A63E0A483D36BCAE783BA554CDA7CAF752  V_0;
	memset((&V_0), 0, sizeof(V_0));
	String_t* V_1 = NULL;
	uint32_t V_2 = 0;
	{
		// var instance = (UnityEngine.ParticleSystem.SizeBySpeedModule)obj;
		RuntimeObject * L_0 = ___obj1;
		V_0 = (SizeBySpeedModule_t156070A63E0A483D36BCAE783BA554CDA7CAF752 )((*(SizeBySpeedModule_t156070A63E0A483D36BCAE783BA554CDA7CAF752 *)((SizeBySpeedModule_t156070A63E0A483D36BCAE783BA554CDA7CAF752 *)UnBox(L_0, SizeBySpeedModule_t156070A63E0A483D36BCAE783BA554CDA7CAF752_il2cpp_TypeInfo_var))));
		goto IL_0290;
	}

IL_000c:
	{
		String_t* L_1 = V_1;
		if (!L_1)
		{
			goto IL_028a;
		}
	}
	{
		String_t* L_2 = V_1;
		uint32_t L_3;
		L_3 = U3CPrivateImplementationDetailsU3E_ComputeStringHash_m3ADC1F612F9EE3DD518E6F0023A0DE0EE2B120A7((String_t*)L_2, /*hidden argument*/NULL);
		V_2 = (uint32_t)L_3;
		uint32_t L_4 = V_2;
		if ((!(((uint32_t)L_4) <= ((uint32_t)((int32_t)1479031685)))))
		{
			goto IL_006a;
		}
	}
	{
		uint32_t L_5 = V_2;
		if ((!(((uint32_t)L_5) <= ((uint32_t)((int32_t)597743964)))))
		{
			goto IL_0044;
		}
	}
	{
		uint32_t L_6 = V_2;
		if ((((int32_t)L_6) == ((int32_t)((int32_t)49525662))))
		{
			goto IL_00bb;
		}
	}
	{
		uint32_t L_7 = V_2;
		if ((((int32_t)L_7) == ((int32_t)((int32_t)597743964))))
		{
			goto IL_00d0;
		}
	}
	{
		goto IL_028a;
	}

IL_0044:
	{
		uint32_t L_8 = V_2;
		if ((((int32_t)L_8) == ((int32_t)((int32_t)726266686))))
		{
			goto IL_0163;
		}
	}
	{
		uint32_t L_9 = V_2;
		if ((((int32_t)L_9) == ((int32_t)((int32_t)1105436259))))
		{
			goto IL_00e5;
		}
	}
	{
		uint32_t L_10 = V_2;
		if ((((int32_t)L_10) == ((int32_t)((int32_t)1479031685))))
		{
			goto IL_0178;
		}
	}
	{
		goto IL_028a;
	}

IL_006a:
	{
		uint32_t L_11 = V_2;
		if ((!(((uint32_t)L_11) <= ((uint32_t)((int32_t)-86242094)))))
		{
			goto IL_0098;
		}
	}
	{
		uint32_t L_12 = V_2;
		if ((((int32_t)L_12) == ((int32_t)((int32_t)-1013869429))))
		{
			goto IL_0139;
		}
	}
	{
		uint32_t L_13 = V_2;
		if ((((int32_t)L_13) == ((int32_t)((int32_t)-585050980))))
		{
			goto IL_010f;
		}
	}
	{
		uint32_t L_14 = V_2;
		if ((((int32_t)L_14) == ((int32_t)((int32_t)-86242094))))
		{
			goto IL_018d;
		}
	}
	{
		goto IL_028a;
	}

IL_0098:
	{
		uint32_t L_15 = V_2;
		if ((((int32_t)L_15) == ((int32_t)((int32_t)-66302220))))
		{
			goto IL_0124;
		}
	}
	{
		uint32_t L_16 = V_2;
		if ((((int32_t)L_16) == ((int32_t)((int32_t)-49524601))))
		{
			goto IL_00fa;
		}
	}
	{
		uint32_t L_17 = V_2;
		if ((((int32_t)L_17) == ((int32_t)((int32_t)-15969363))))
		{
			goto IL_014e;
		}
	}
	{
		goto IL_028a;
	}

IL_00bb:
	{
		String_t* L_18 = V_1;
		bool L_19;
		L_19 = String_op_Equality_m50B3548E4AC232558190B0052877B290AA1D436A((String_t*)L_18, (String_t*)_stringLiteralF9D225733E1D10F9344C755C4A9C0870CD1DE97B, /*hidden argument*/NULL);
		if (L_19)
		{
			goto IL_01a2;
		}
	}
	{
		goto IL_028a;
	}

IL_00d0:
	{
		String_t* L_20 = V_1;
		bool L_21;
		L_21 = String_op_Equality_m50B3548E4AC232558190B0052877B290AA1D436A((String_t*)L_20, (String_t*)_stringLiteral3EE5A4671A4E5AEBD31CA5F013A7773DC18ED22B, /*hidden argument*/NULL);
		if (L_21)
		{
			goto IL_01b9;
		}
	}
	{
		goto IL_028a;
	}

IL_00e5:
	{
		String_t* L_22 = V_1;
		bool L_23;
		L_23 = String_op_Equality_m50B3548E4AC232558190B0052877B290AA1D436A((String_t*)L_22, (String_t*)_stringLiteralBD0DD0004699EF86BF0FC1D161FA3766AF5126C4, /*hidden argument*/NULL);
		if (L_23)
		{
			goto IL_01d0;
		}
	}
	{
		goto IL_028a;
	}

IL_00fa:
	{
		String_t* L_24 = V_1;
		bool L_25;
		L_25 = String_op_Equality_m50B3548E4AC232558190B0052877B290AA1D436A((String_t*)L_24, (String_t*)_stringLiteral062DB096C728515E033CF8C48A1C1F0B9A79384B, /*hidden argument*/NULL);
		if (L_25)
		{
			goto IL_01e7;
		}
	}
	{
		goto IL_028a;
	}

IL_010f:
	{
		String_t* L_26 = V_1;
		bool L_27;
		L_27 = String_op_Equality_m50B3548E4AC232558190B0052877B290AA1D436A((String_t*)L_26, (String_t*)_stringLiteral8C6F88DEE0DFE3513BB8B44A8CF0FEE437F4EFFB, /*hidden argument*/NULL);
		if (L_27)
		{
			goto IL_01fe;
		}
	}
	{
		goto IL_028a;
	}

IL_0124:
	{
		String_t* L_28 = V_1;
		bool L_29;
		L_29 = String_op_Equality_m50B3548E4AC232558190B0052877B290AA1D436A((String_t*)L_28, (String_t*)_stringLiteral9384C6EF2DA5C0BD5274A0DACFF291D0ABBFD8B1, /*hidden argument*/NULL);
		if (L_29)
		{
			goto IL_0212;
		}
	}
	{
		goto IL_028a;
	}

IL_0139:
	{
		String_t* L_30 = V_1;
		bool L_31;
		L_31 = String_op_Equality_m50B3548E4AC232558190B0052877B290AA1D436A((String_t*)L_30, (String_t*)_stringLiteral9E61658953B4F9BB4A05E3D2D2BC18990BADE934, /*hidden argument*/NULL);
		if (L_31)
		{
			goto IL_0226;
		}
	}
	{
		goto IL_028a;
	}

IL_014e:
	{
		String_t* L_32 = V_1;
		bool L_33;
		L_33 = String_op_Equality_m50B3548E4AC232558190B0052877B290AA1D436A((String_t*)L_32, (String_t*)_stringLiteral9CE1604D659135925CCC4DD1F526AFFE42E689F1, /*hidden argument*/NULL);
		if (L_33)
		{
			goto IL_023a;
		}
	}
	{
		goto IL_028a;
	}

IL_0163:
	{
		String_t* L_34 = V_1;
		bool L_35;
		L_35 = String_op_Equality_m50B3548E4AC232558190B0052877B290AA1D436A((String_t*)L_34, (String_t*)_stringLiteral2F8690361553406965679AEF125F896BC5FC61F5, /*hidden argument*/NULL);
		if (L_35)
		{
			goto IL_024e;
		}
	}
	{
		goto IL_028a;
	}

IL_0178:
	{
		String_t* L_36 = V_1;
		bool L_37;
		L_37 = String_op_Equality_m50B3548E4AC232558190B0052877B290AA1D436A((String_t*)L_36, (String_t*)_stringLiteral1B024D537329B86AB0DF96B2A714180F442F53E9, /*hidden argument*/NULL);
		if (L_37)
		{
			goto IL_0262;
		}
	}
	{
		goto IL_028a;
	}

IL_018d:
	{
		String_t* L_38 = V_1;
		bool L_39;
		L_39 = String_op_Equality_m50B3548E4AC232558190B0052877B290AA1D436A((String_t*)L_38, (String_t*)_stringLiteral4845015737DC41475709911228278216EE4DC3AF, /*hidden argument*/NULL);
		if (L_39)
		{
			goto IL_0276;
		}
	}
	{
		goto IL_028a;
	}

IL_01a2:
	{
		// instance.enabled = reader.Read<System.Boolean>(ES3Type_bool.Instance);
		ES3Reader_t2780AF8AA61DA2A817115CEF8612AC0E494D03C9 * L_40 = ___reader0;
		IL2CPP_RUNTIME_CLASS_INIT(ES3Type_bool_t8F309F7B9CC735FF1DEE68081B6E3CAB367745F4_il2cpp_TypeInfo_var);
		ES3Type_t8FBECB7AE75168648B9524E0C2A38DAD4555421D * L_41 = ((ES3Type_bool_t8F309F7B9CC735FF1DEE68081B6E3CAB367745F4_StaticFields*)il2cpp_codegen_static_fields_for(ES3Type_bool_t8F309F7B9CC735FF1DEE68081B6E3CAB367745F4_il2cpp_TypeInfo_var))->get_Instance_12();
		NullCheck((ES3Reader_t2780AF8AA61DA2A817115CEF8612AC0E494D03C9 *)L_40);
		bool L_42;
		L_42 = GenericVirtFuncInvoker1< bool, ES3Type_t8FBECB7AE75168648B9524E0C2A38DAD4555421D * >::Invoke(ES3Reader_Read_TisBoolean_t07D1E3F34E4813023D64F584DFF7B34C9D922F37_mC6D1B158268FF9B97822FF9F5B37FB1723FEDA22_RuntimeMethod_var, (ES3Reader_t2780AF8AA61DA2A817115CEF8612AC0E494D03C9 *)L_40, (ES3Type_t8FBECB7AE75168648B9524E0C2A38DAD4555421D *)L_41);
		SizeBySpeedModule_set_enabled_m0CC5D81593E6D047B2B150041577EC93D3C7701C((SizeBySpeedModule_t156070A63E0A483D36BCAE783BA554CDA7CAF752 *)(SizeBySpeedModule_t156070A63E0A483D36BCAE783BA554CDA7CAF752 *)(&V_0), (bool)L_42, /*hidden argument*/NULL);
		// break;
		goto IL_0290;
	}

IL_01b9:
	{
		// instance.size = reader.Read<UnityEngine.ParticleSystem.MinMaxCurve>(ES3Type_MinMaxCurve.Instance);
		ES3Reader_t2780AF8AA61DA2A817115CEF8612AC0E494D03C9 * L_43 = ___reader0;
		IL2CPP_RUNTIME_CLASS_INIT(ES3Type_MinMaxCurve_tC5342BF0F8735B85CB5E16FDD4C6FACC8AFAD3B7_il2cpp_TypeInfo_var);
		ES3Type_t8FBECB7AE75168648B9524E0C2A38DAD4555421D * L_44 = ((ES3Type_MinMaxCurve_tC5342BF0F8735B85CB5E16FDD4C6FACC8AFAD3B7_StaticFields*)il2cpp_codegen_static_fields_for(ES3Type_MinMaxCurve_tC5342BF0F8735B85CB5E16FDD4C6FACC8AFAD3B7_il2cpp_TypeInfo_var))->get_Instance_12();
		NullCheck((ES3Reader_t2780AF8AA61DA2A817115CEF8612AC0E494D03C9 *)L_43);
		MinMaxCurve_tF036239442AB2D438B1EDABEBC785426871084CD  L_45;
		L_45 = GenericVirtFuncInvoker1< MinMaxCurve_tF036239442AB2D438B1EDABEBC785426871084CD , ES3Type_t8FBECB7AE75168648B9524E0C2A38DAD4555421D * >::Invoke(ES3Reader_Read_TisMinMaxCurve_tF036239442AB2D438B1EDABEBC785426871084CD_mD285150CBFB52440643BBECB5ADF4EE8DE940535_RuntimeMethod_var, (ES3Reader_t2780AF8AA61DA2A817115CEF8612AC0E494D03C9 *)L_43, (ES3Type_t8FBECB7AE75168648B9524E0C2A38DAD4555421D *)L_44);
		SizeBySpeedModule_set_size_mB0D87FAEF26DF701E303C3D480E83465AE600D12((SizeBySpeedModule_t156070A63E0A483D36BCAE783BA554CDA7CAF752 *)(SizeBySpeedModule_t156070A63E0A483D36BCAE783BA554CDA7CAF752 *)(&V_0), (MinMaxCurve_tF036239442AB2D438B1EDABEBC785426871084CD )L_45, /*hidden argument*/NULL);
		// break;
		goto IL_0290;
	}

IL_01d0:
	{
		// instance.sizeMultiplier = reader.Read<System.Single>(ES3Type_float.Instance);
		ES3Reader_t2780AF8AA61DA2A817115CEF8612AC0E494D03C9 * L_46 = ___reader0;
		IL2CPP_RUNTIME_CLASS_INIT(ES3Type_float_tF86B773C86731BD9AD79448B860BBB178FE77644_il2cpp_TypeInfo_var);
		ES3Type_t8FBECB7AE75168648B9524E0C2A38DAD4555421D * L_47 = ((ES3Type_float_tF86B773C86731BD9AD79448B860BBB178FE77644_StaticFields*)il2cpp_codegen_static_fields_for(ES3Type_float_tF86B773C86731BD9AD79448B860BBB178FE77644_il2cpp_TypeInfo_var))->get_Instance_12();
		NullCheck((ES3Reader_t2780AF8AA61DA2A817115CEF8612AC0E494D03C9 *)L_46);
		float L_48;
		L_48 = GenericVirtFuncInvoker1< float, ES3Type_t8FBECB7AE75168648B9524E0C2A38DAD4555421D * >::Invoke(ES3Reader_Read_TisSingle_tE07797BA3C98D4CA9B5A19413C19A76688AB899E_m4A0416374498BDA042B8EB21E49B72326D6CE5F4_RuntimeMethod_var, (ES3Reader_t2780AF8AA61DA2A817115CEF8612AC0E494D03C9 *)L_46, (ES3Type_t8FBECB7AE75168648B9524E0C2A38DAD4555421D *)L_47);
		SizeBySpeedModule_set_sizeMultiplier_m6087A72CA424D9F258632500EFA8BA9FB71F6141((SizeBySpeedModule_t156070A63E0A483D36BCAE783BA554CDA7CAF752 *)(SizeBySpeedModule_t156070A63E0A483D36BCAE783BA554CDA7CAF752 *)(&V_0), (float)L_48, /*hidden argument*/NULL);
		// break;
		goto IL_0290;
	}

IL_01e7:
	{
		// instance.x = reader.Read<UnityEngine.ParticleSystem.MinMaxCurve>(ES3Type_MinMaxCurve.Instance);
		ES3Reader_t2780AF8AA61DA2A817115CEF8612AC0E494D03C9 * L_49 = ___reader0;
		IL2CPP_RUNTIME_CLASS_INIT(ES3Type_MinMaxCurve_tC5342BF0F8735B85CB5E16FDD4C6FACC8AFAD3B7_il2cpp_TypeInfo_var);
		ES3Type_t8FBECB7AE75168648B9524E0C2A38DAD4555421D * L_50 = ((ES3Type_MinMaxCurve_tC5342BF0F8735B85CB5E16FDD4C6FACC8AFAD3B7_StaticFields*)il2cpp_codegen_static_fields_for(ES3Type_MinMaxCurve_tC5342BF0F8735B85CB5E16FDD4C6FACC8AFAD3B7_il2cpp_TypeInfo_var))->get_Instance_12();
		NullCheck((ES3Reader_t2780AF8AA61DA2A817115CEF8612AC0E494D03C9 *)L_49);
		MinMaxCurve_tF036239442AB2D438B1EDABEBC785426871084CD  L_51;
		L_51 = GenericVirtFuncInvoker1< MinMaxCurve_tF036239442AB2D438B1EDABEBC785426871084CD , ES3Type_t8FBECB7AE75168648B9524E0C2A38DAD4555421D * >::Invoke(ES3Reader_Read_TisMinMaxCurve_tF036239442AB2D438B1EDABEBC785426871084CD_mD285150CBFB52440643BBECB5ADF4EE8DE940535_RuntimeMethod_var, (ES3Reader_t2780AF8AA61DA2A817115CEF8612AC0E494D03C9 *)L_49, (ES3Type_t8FBECB7AE75168648B9524E0C2A38DAD4555421D *)L_50);
		SizeBySpeedModule_set_x_mFFD1FB55668F9C02B2AB87D861F028E57EE81E7B((SizeBySpeedModule_t156070A63E0A483D36BCAE783BA554CDA7CAF752 *)(SizeBySpeedModule_t156070A63E0A483D36BCAE783BA554CDA7CAF752 *)(&V_0), (MinMaxCurve_tF036239442AB2D438B1EDABEBC785426871084CD )L_51, /*hidden argument*/NULL);
		// break;
		goto IL_0290;
	}

IL_01fe:
	{
		// instance.xMultiplier = reader.Read<System.Single>(ES3Type_float.Instance);
		ES3Reader_t2780AF8AA61DA2A817115CEF8612AC0E494D03C9 * L_52 = ___reader0;
		IL2CPP_RUNTIME_CLASS_INIT(ES3Type_float_tF86B773C86731BD9AD79448B860BBB178FE77644_il2cpp_TypeInfo_var);
		ES3Type_t8FBECB7AE75168648B9524E0C2A38DAD4555421D * L_53 = ((ES3Type_float_tF86B773C86731BD9AD79448B860BBB178FE77644_StaticFields*)il2cpp_codegen_static_fields_for(ES3Type_float_tF86B773C86731BD9AD79448B860BBB178FE77644_il2cpp_TypeInfo_var))->get_Instance_12();
		NullCheck((ES3Reader_t2780AF8AA61DA2A817115CEF8612AC0E494D03C9 *)L_52);
		float L_54;
		L_54 = GenericVirtFuncInvoker1< float, ES3Type_t8FBECB7AE75168648B9524E0C2A38DAD4555421D * >::Invoke(ES3Reader_Read_TisSingle_tE07797BA3C98D4CA9B5A19413C19A76688AB899E_m4A0416374498BDA042B8EB21E49B72326D6CE5F4_RuntimeMethod_var, (ES3Reader_t2780AF8AA61DA2A817115CEF8612AC0E494D03C9 *)L_52, (ES3Type_t8FBECB7AE75168648B9524E0C2A38DAD4555421D *)L_53);
		SizeBySpeedModule_set_xMultiplier_m20E2174791982BB87D08217F71EA925022A1B0CC((SizeBySpeedModule_t156070A63E0A483D36BCAE783BA554CDA7CAF752 *)(SizeBySpeedModule_t156070A63E0A483D36BCAE783BA554CDA7CAF752 *)(&V_0), (float)L_54, /*hidden argument*/NULL);
		// break;
		goto IL_0290;
	}

IL_0212:
	{
		// instance.y = reader.Read<UnityEngine.ParticleSystem.MinMaxCurve>(ES3Type_MinMaxCurve.Instance);
		ES3Reader_t2780AF8AA61DA2A817115CEF8612AC0E494D03C9 * L_55 = ___reader0;
		IL2CPP_RUNTIME_CLASS_INIT(ES3Type_MinMaxCurve_tC5342BF0F8735B85CB5E16FDD4C6FACC8AFAD3B7_il2cpp_TypeInfo_var);
		ES3Type_t8FBECB7AE75168648B9524E0C2A38DAD4555421D * L_56 = ((ES3Type_MinMaxCurve_tC5342BF0F8735B85CB5E16FDD4C6FACC8AFAD3B7_StaticFields*)il2cpp_codegen_static_fields_for(ES3Type_MinMaxCurve_tC5342BF0F8735B85CB5E16FDD4C6FACC8AFAD3B7_il2cpp_TypeInfo_var))->get_Instance_12();
		NullCheck((ES3Reader_t2780AF8AA61DA2A817115CEF8612AC0E494D03C9 *)L_55);
		MinMaxCurve_tF036239442AB2D438B1EDABEBC785426871084CD  L_57;
		L_57 = GenericVirtFuncInvoker1< MinMaxCurve_tF036239442AB2D438B1EDABEBC785426871084CD , ES3Type_t8FBECB7AE75168648B9524E0C2A38DAD4555421D * >::Invoke(ES3Reader_Read_TisMinMaxCurve_tF036239442AB2D438B1EDABEBC785426871084CD_mD285150CBFB52440643BBECB5ADF4EE8DE940535_RuntimeMethod_var, (ES3Reader_t2780AF8AA61DA2A817115CEF8612AC0E494D03C9 *)L_55, (ES3Type_t8FBECB7AE75168648B9524E0C2A38DAD4555421D *)L_56);
		SizeBySpeedModule_set_y_m87016AA5C7B16879AB922CE07FCCF94E3683671F((SizeBySpeedModule_t156070A63E0A483D36BCAE783BA554CDA7CAF752 *)(SizeBySpeedModule_t156070A63E0A483D36BCAE783BA554CDA7CAF752 *)(&V_0), (MinMaxCurve_tF036239442AB2D438B1EDABEBC785426871084CD )L_57, /*hidden argument*/NULL);
		// break;
		goto IL_0290;
	}

IL_0226:
	{
		// instance.yMultiplier = reader.Read<System.Single>(ES3Type_float.Instance);
		ES3Reader_t2780AF8AA61DA2A817115CEF8612AC0E494D03C9 * L_58 = ___reader0;
		IL2CPP_RUNTIME_CLASS_INIT(ES3Type_float_tF86B773C86731BD9AD79448B860BBB178FE77644_il2cpp_TypeInfo_var);
		ES3Type_t8FBECB7AE75168648B9524E0C2A38DAD4555421D * L_59 = ((ES3Type_float_tF86B773C86731BD9AD79448B860BBB178FE77644_StaticFields*)il2cpp_codegen_static_fields_for(ES3Type_float_tF86B773C86731BD9AD79448B860BBB178FE77644_il2cpp_TypeInfo_var))->get_Instance_12();
		NullCheck((ES3Reader_t2780AF8AA61DA2A817115CEF8612AC0E494D03C9 *)L_58);
		float L_60;
		L_60 = GenericVirtFuncInvoker1< float, ES3Type_t8FBECB7AE75168648B9524E0C2A38DAD4555421D * >::Invoke(ES3Reader_Read_TisSingle_tE07797BA3C98D4CA9B5A19413C19A76688AB899E_m4A0416374498BDA042B8EB21E49B72326D6CE5F4_RuntimeMethod_var, (ES3Reader_t2780AF8AA61DA2A817115CEF8612AC0E494D03C9 *)L_58, (ES3Type_t8FBECB7AE75168648B9524E0C2A38DAD4555421D *)L_59);
		SizeBySpeedModule_set_yMultiplier_m16CEB10FE778D443B34EC516FD08191E74CB5CE3((SizeBySpeedModule_t156070A63E0A483D36BCAE783BA554CDA7CAF752 *)(SizeBySpeedModule_t156070A63E0A483D36BCAE783BA554CDA7CAF752 *)(&V_0), (float)L_60, /*hidden argument*/NULL);
		// break;
		goto IL_0290;
	}

IL_023a:
	{
		// instance.z = reader.Read<UnityEngine.ParticleSystem.MinMaxCurve>(ES3Type_MinMaxCurve.Instance);
		ES3Reader_t2780AF8AA61DA2A817115CEF8612AC0E494D03C9 * L_61 = ___reader0;
		IL2CPP_RUNTIME_CLASS_INIT(ES3Type_MinMaxCurve_tC5342BF0F8735B85CB5E16FDD4C6FACC8AFAD3B7_il2cpp_TypeInfo_var);
		ES3Type_t8FBECB7AE75168648B9524E0C2A38DAD4555421D * L_62 = ((ES3Type_MinMaxCurve_tC5342BF0F8735B85CB5E16FDD4C6FACC8AFAD3B7_StaticFields*)il2cpp_codegen_static_fields_for(ES3Type_MinMaxCurve_tC5342BF0F8735B85CB5E16FDD4C6FACC8AFAD3B7_il2cpp_TypeInfo_var))->get_Instance_12();
		NullCheck((ES3Reader_t2780AF8AA61DA2A817115CEF8612AC0E494D03C9 *)L_61);
		MinMaxCurve_tF036239442AB2D438B1EDABEBC785426871084CD  L_63;
		L_63 = GenericVirtFuncInvoker1< MinMaxCurve_tF036239442AB2D438B1EDABEBC785426871084CD , ES3Type_t8FBECB7AE75168648B9524E0C2A38DAD4555421D * >::Invoke(ES3Reader_Read_TisMinMaxCurve_tF036239442AB2D438B1EDABEBC785426871084CD_mD285150CBFB52440643BBECB5ADF4EE8DE940535_RuntimeMethod_var, (ES3Reader_t2780AF8AA61DA2A817115CEF8612AC0E494D03C9 *)L_61, (ES3Type_t8FBECB7AE75168648B9524E0C2A38DAD4555421D *)L_62);
		SizeBySpeedModule_set_z_m789F392BAE1FFE10F22445F0A89FE4905AD48E13((SizeBySpeedModule_t156070A63E0A483D36BCAE783BA554CDA7CAF752 *)(SizeBySpeedModule_t156070A63E0A483D36BCAE783BA554CDA7CAF752 *)(&V_0), (MinMaxCurve_tF036239442AB2D438B1EDABEBC785426871084CD )L_63, /*hidden argument*/NULL);
		// break;
		goto IL_0290;
	}

IL_024e:
	{
		// instance.zMultiplier = reader.Read<System.Single>(ES3Type_float.Instance);
		ES3Reader_t2780AF8AA61DA2A817115CEF8612AC0E494D03C9 * L_64 = ___reader0;
		IL2CPP_RUNTIME_CLASS_INIT(ES3Type_float_tF86B773C86731BD9AD79448B860BBB178FE77644_il2cpp_TypeInfo_var);
		ES3Type_t8FBECB7AE75168648B9524E0C2A38DAD4555421D * L_65 = ((ES3Type_float_tF86B773C86731BD9AD79448B860BBB178FE77644_StaticFields*)il2cpp_codegen_static_fields_for(ES3Type_float_tF86B773C86731BD9AD79448B860BBB178FE77644_il2cpp_TypeInfo_var))->get_Instance_12();
		NullCheck((ES3Reader_t2780AF8AA61DA2A817115CEF8612AC0E494D03C9 *)L_64);
		float L_66;
		L_66 = GenericVirtFuncInvoker1< float, ES3Type_t8FBECB7AE75168648B9524E0C2A38DAD4555421D * >::Invoke(ES3Reader_Read_TisSingle_tE07797BA3C98D4CA9B5A19413C19A76688AB899E_m4A0416374498BDA042B8EB21E49B72326D6CE5F4_RuntimeMethod_var, (ES3Reader_t2780AF8AA61DA2A817115CEF8612AC0E494D03C9 *)L_64, (ES3Type_t8FBECB7AE75168648B9524E0C2A38DAD4555421D *)L_65);
		SizeBySpeedModule_set_zMultiplier_m3CDE48B31D0AA2BDD554D6FB39509E32D3B3540F((SizeBySpeedModule_t156070A63E0A483D36BCAE783BA554CDA7CAF752 *)(SizeBySpeedModule_t156070A63E0A483D36BCAE783BA554CDA7CAF752 *)(&V_0), (float)L_66, /*hidden argument*/NULL);
		// break;
		goto IL_0290;
	}

IL_0262:
	{
		// instance.separateAxes = reader.Read<System.Boolean>(ES3Type_bool.Instance);
		ES3Reader_t2780AF8AA61DA2A817115CEF8612AC0E494D03C9 * L_67 = ___reader0;
		IL2CPP_RUNTIME_CLASS_INIT(ES3Type_bool_t8F309F7B9CC735FF1DEE68081B6E3CAB367745F4_il2cpp_TypeInfo_var);
		ES3Type_t8FBECB7AE75168648B9524E0C2A38DAD4555421D * L_68 = ((ES3Type_bool_t8F309F7B9CC735FF1DEE68081B6E3CAB367745F4_StaticFields*)il2cpp_codegen_static_fields_for(ES3Type_bool_t8F309F7B9CC735FF1DEE68081B6E3CAB367745F4_il2cpp_TypeInfo_var))->get_Instance_12();
		NullCheck((ES3Reader_t2780AF8AA61DA2A817115CEF8612AC0E494D03C9 *)L_67);
		bool L_69;
		L_69 = GenericVirtFuncInvoker1< bool, ES3Type_t8FBECB7AE75168648B9524E0C2A38DAD4555421D * >::Invoke(ES3Reader_Read_TisBoolean_t07D1E3F34E4813023D64F584DFF7B34C9D922F37_mC6D1B158268FF9B97822FF9F5B37FB1723FEDA22_RuntimeMethod_var, (ES3Reader_t2780AF8AA61DA2A817115CEF8612AC0E494D03C9 *)L_67, (ES3Type_t8FBECB7AE75168648B9524E0C2A38DAD4555421D *)L_68);
		SizeBySpeedModule_set_separateAxes_mF8B0B99BA3B98D6A8578B70EA19DFB271657FD8F((SizeBySpeedModule_t156070A63E0A483D36BCAE783BA554CDA7CAF752 *)(SizeBySpeedModule_t156070A63E0A483D36BCAE783BA554CDA7CAF752 *)(&V_0), (bool)L_69, /*hidden argument*/NULL);
		// break;
		goto IL_0290;
	}

IL_0276:
	{
		// instance.range = reader.Read<UnityEngine.Vector2>(ES3Type_Vector2.Instance);
		ES3Reader_t2780AF8AA61DA2A817115CEF8612AC0E494D03C9 * L_70 = ___reader0;
		IL2CPP_RUNTIME_CLASS_INIT(ES3Type_Vector2_t803CDF887D02E9215B016DFABE969B06638FB1F5_il2cpp_TypeInfo_var);
		ES3Type_t8FBECB7AE75168648B9524E0C2A38DAD4555421D * L_71 = ((ES3Type_Vector2_t803CDF887D02E9215B016DFABE969B06638FB1F5_StaticFields*)il2cpp_codegen_static_fields_for(ES3Type_Vector2_t803CDF887D02E9215B016DFABE969B06638FB1F5_il2cpp_TypeInfo_var))->get_Instance_12();
		NullCheck((ES3Reader_t2780AF8AA61DA2A817115CEF8612AC0E494D03C9 *)L_70);
		Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  L_72;
		L_72 = GenericVirtFuncInvoker1< Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9 , ES3Type_t8FBECB7AE75168648B9524E0C2A38DAD4555421D * >::Invoke(ES3Reader_Read_TisVector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9_mD2C1683A01C44107D1473023F8188DDEA71D9A7D_RuntimeMethod_var, (ES3Reader_t2780AF8AA61DA2A817115CEF8612AC0E494D03C9 *)L_70, (ES3Type_t8FBECB7AE75168648B9524E0C2A38DAD4555421D *)L_71);
		SizeBySpeedModule_set_range_mDF4151A1FBDEB5417C8B481907AE58C969F5167D((SizeBySpeedModule_t156070A63E0A483D36BCAE783BA554CDA7CAF752 *)(SizeBySpeedModule_t156070A63E0A483D36BCAE783BA554CDA7CAF752 *)(&V_0), (Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9 )L_72, /*hidden argument*/NULL);
		// break;
		goto IL_0290;
	}

IL_028a:
	{
		// reader.Skip();
		ES3Reader_t2780AF8AA61DA2A817115CEF8612AC0E494D03C9 * L_73 = ___reader0;
		NullCheck((ES3Reader_t2780AF8AA61DA2A817115CEF8612AC0E494D03C9 *)L_73);
		VirtActionInvoker0::Invoke(41 /* System.Void ES3Reader::Skip() */, (ES3Reader_t2780AF8AA61DA2A817115CEF8612AC0E494D03C9 *)L_73);
	}

IL_0290:
	{
		// while((propertyName = reader.ReadPropertyName()) != null)
		ES3Reader_t2780AF8AA61DA2A817115CEF8612AC0E494D03C9 * L_74 = ___reader0;
		NullCheck((ES3Reader_t2780AF8AA61DA2A817115CEF8612AC0E494D03C9 *)L_74);
		String_t* L_75;
		L_75 = VirtFuncInvoker0< String_t* >::Invoke(21 /* System.String ES3Reader::ReadPropertyName() */, (ES3Reader_t2780AF8AA61DA2A817115CEF8612AC0E494D03C9 *)L_74);
		String_t* L_76 = (String_t*)L_75;
		V_1 = (String_t*)L_76;
		if (L_76)
		{
			goto IL_000c;
		}
	}
	{
		// }
		return;
	}
}
// System.Void ES3Types.ES3Type_SizeBySpeedModule::ReadInto<System.Int32>(ES3Reader,System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ES3Type_SizeBySpeedModule_ReadInto_TisInt32_tFDE5F8CD43D10453F6A2E0C77FE48C6CC7009046_m589604F24BFAF2F54DD71B96EDBE3258D872DAA5_gshared (ES3Type_SizeBySpeedModule_tE2CD943FBEF83D6F6EDB836909B9C475DF2A7FD0 * __this, ES3Reader_t2780AF8AA61DA2A817115CEF8612AC0E494D03C9 * ___reader0, RuntimeObject * ___obj1, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ES3Reader_Read_TisBoolean_t07D1E3F34E4813023D64F584DFF7B34C9D922F37_mC6D1B158268FF9B97822FF9F5B37FB1723FEDA22_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ES3Reader_Read_TisMinMaxCurve_tF036239442AB2D438B1EDABEBC785426871084CD_mD285150CBFB52440643BBECB5ADF4EE8DE940535_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ES3Reader_Read_TisSingle_tE07797BA3C98D4CA9B5A19413C19A76688AB899E_m4A0416374498BDA042B8EB21E49B72326D6CE5F4_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ES3Reader_Read_TisVector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9_mD2C1683A01C44107D1473023F8188DDEA71D9A7D_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ES3Type_MinMaxCurve_tC5342BF0F8735B85CB5E16FDD4C6FACC8AFAD3B7_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ES3Type_Vector2_t803CDF887D02E9215B016DFABE969B06638FB1F5_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ES3Type_bool_t8F309F7B9CC735FF1DEE68081B6E3CAB367745F4_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ES3Type_float_tF86B773C86731BD9AD79448B860BBB178FE77644_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&SizeBySpeedModule_t156070A63E0A483D36BCAE783BA554CDA7CAF752_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral062DB096C728515E033CF8C48A1C1F0B9A79384B);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral1B024D537329B86AB0DF96B2A714180F442F53E9);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral2F8690361553406965679AEF125F896BC5FC61F5);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral3EE5A4671A4E5AEBD31CA5F013A7773DC18ED22B);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral4845015737DC41475709911228278216EE4DC3AF);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral8C6F88DEE0DFE3513BB8B44A8CF0FEE437F4EFFB);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral9384C6EF2DA5C0BD5274A0DACFF291D0ABBFD8B1);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral9CE1604D659135925CCC4DD1F526AFFE42E689F1);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral9E61658953B4F9BB4A05E3D2D2BC18990BADE934);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralBD0DD0004699EF86BF0FC1D161FA3766AF5126C4);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralF9D225733E1D10F9344C755C4A9C0870CD1DE97B);
		s_Il2CppMethodInitialized = true;
	}
	SizeBySpeedModule_t156070A63E0A483D36BCAE783BA554CDA7CAF752  V_0;
	memset((&V_0), 0, sizeof(V_0));
	String_t* V_1 = NULL;
	uint32_t V_2 = 0;
	{
		// var instance = (UnityEngine.ParticleSystem.SizeBySpeedModule)obj;
		RuntimeObject * L_0 = ___obj1;
		V_0 = (SizeBySpeedModule_t156070A63E0A483D36BCAE783BA554CDA7CAF752 )((*(SizeBySpeedModule_t156070A63E0A483D36BCAE783BA554CDA7CAF752 *)((SizeBySpeedModule_t156070A63E0A483D36BCAE783BA554CDA7CAF752 *)UnBox(L_0, SizeBySpeedModule_t156070A63E0A483D36BCAE783BA554CDA7CAF752_il2cpp_TypeInfo_var))));
		goto IL_0290;
	}

IL_000c:
	{
		String_t* L_1 = V_1;
		if (!L_1)
		{
			goto IL_028a;
		}
	}
	{
		String_t* L_2 = V_1;
		uint32_t L_3;
		L_3 = U3CPrivateImplementationDetailsU3E_ComputeStringHash_m3ADC1F612F9EE3DD518E6F0023A0DE0EE2B120A7((String_t*)L_2, /*hidden argument*/NULL);
		V_2 = (uint32_t)L_3;
		uint32_t L_4 = V_2;
		if ((!(((uint32_t)L_4) <= ((uint32_t)((int32_t)1479031685)))))
		{
			goto IL_006a;
		}
	}
	{
		uint32_t L_5 = V_2;
		if ((!(((uint32_t)L_5) <= ((uint32_t)((int32_t)597743964)))))
		{
			goto IL_0044;
		}
	}
	{
		uint32_t L_6 = V_2;
		if ((((int32_t)L_6) == ((int32_t)((int32_t)49525662))))
		{
			goto IL_00bb;
		}
	}
	{
		uint32_t L_7 = V_2;
		if ((((int32_t)L_7) == ((int32_t)((int32_t)597743964))))
		{
			goto IL_00d0;
		}
	}
	{
		goto IL_028a;
	}

IL_0044:
	{
		uint32_t L_8 = V_2;
		if ((((int32_t)L_8) == ((int32_t)((int32_t)726266686))))
		{
			goto IL_0163;
		}
	}
	{
		uint32_t L_9 = V_2;
		if ((((int32_t)L_9) == ((int32_t)((int32_t)1105436259))))
		{
			goto IL_00e5;
		}
	}
	{
		uint32_t L_10 = V_2;
		if ((((int32_t)L_10) == ((int32_t)((int32_t)1479031685))))
		{
			goto IL_0178;
		}
	}
	{
		goto IL_028a;
	}

IL_006a:
	{
		uint32_t L_11 = V_2;
		if ((!(((uint32_t)L_11) <= ((uint32_t)((int32_t)-86242094)))))
		{
			goto IL_0098;
		}
	}
	{
		uint32_t L_12 = V_2;
		if ((((int32_t)L_12) == ((int32_t)((int32_t)-1013869429))))
		{
			goto IL_0139;
		}
	}
	{
		uint32_t L_13 = V_2;
		if ((((int32_t)L_13) == ((int32_t)((int32_t)-585050980))))
		{
			goto IL_010f;
		}
	}
	{
		uint32_t L_14 = V_2;
		if ((((int32_t)L_14) == ((int32_t)((int32_t)-86242094))))
		{
			goto IL_018d;
		}
	}
	{
		goto IL_028a;
	}

IL_0098:
	{
		uint32_t L_15 = V_2;
		if ((((int32_t)L_15) == ((int32_t)((int32_t)-66302220))))
		{
			goto IL_0124;
		}
	}
	{
		uint32_t L_16 = V_2;
		if ((((int32_t)L_16) == ((int32_t)((int32_t)-49524601))))
		{
			goto IL_00fa;
		}
	}
	{
		uint32_t L_17 = V_2;
		if ((((int32_t)L_17) == ((int32_t)((int32_t)-15969363))))
		{
			goto IL_014e;
		}
	}
	{
		goto IL_028a;
	}

IL_00bb:
	{
		String_t* L_18 = V_1;
		bool L_19;
		L_19 = String_op_Equality_m50B3548E4AC232558190B0052877B290AA1D436A((String_t*)L_18, (String_t*)_stringLiteralF9D225733E1D10F9344C755C4A9C0870CD1DE97B, /*hidden argument*/NULL);
		if (L_19)
		{
			goto IL_01a2;
		}
	}
	{
		goto IL_028a;
	}

IL_00d0:
	{
		String_t* L_20 = V_1;
		bool L_21;
		L_21 = String_op_Equality_m50B3548E4AC232558190B0052877B290AA1D436A((String_t*)L_20, (String_t*)_stringLiteral3EE5A4671A4E5AEBD31CA5F013A7773DC18ED22B, /*hidden argument*/NULL);
		if (L_21)
		{
			goto IL_01b9;
		}
	}
	{
		goto IL_028a;
	}

IL_00e5:
	{
		String_t* L_22 = V_1;
		bool L_23;
		L_23 = String_op_Equality_m50B3548E4AC232558190B0052877B290AA1D436A((String_t*)L_22, (String_t*)_stringLiteralBD0DD0004699EF86BF0FC1D161FA3766AF5126C4, /*hidden argument*/NULL);
		if (L_23)
		{
			goto IL_01d0;
		}
	}
	{
		goto IL_028a;
	}

IL_00fa:
	{
		String_t* L_24 = V_1;
		bool L_25;
		L_25 = String_op_Equality_m50B3548E4AC232558190B0052877B290AA1D436A((String_t*)L_24, (String_t*)_stringLiteral062DB096C728515E033CF8C48A1C1F0B9A79384B, /*hidden argument*/NULL);
		if (L_25)
		{
			goto IL_01e7;
		}
	}
	{
		goto IL_028a;
	}

IL_010f:
	{
		String_t* L_26 = V_1;
		bool L_27;
		L_27 = String_op_Equality_m50B3548E4AC232558190B0052877B290AA1D436A((String_t*)L_26, (String_t*)_stringLiteral8C6F88DEE0DFE3513BB8B44A8CF0FEE437F4EFFB, /*hidden argument*/NULL);
		if (L_27)
		{
			goto IL_01fe;
		}
	}
	{
		goto IL_028a;
	}

IL_0124:
	{
		String_t* L_28 = V_1;
		bool L_29;
		L_29 = String_op_Equality_m50B3548E4AC232558190B0052877B290AA1D436A((String_t*)L_28, (String_t*)_stringLiteral9384C6EF2DA5C0BD5274A0DACFF291D0ABBFD8B1, /*hidden argument*/NULL);
		if (L_29)
		{
			goto IL_0212;
		}
	}
	{
		goto IL_028a;
	}

IL_0139:
	{
		String_t* L_30 = V_1;
		bool L_31;
		L_31 = String_op_Equality_m50B3548E4AC232558190B0052877B290AA1D436A((String_t*)L_30, (String_t*)_stringLiteral9E61658953B4F9BB4A05E3D2D2BC18990BADE934, /*hidden argument*/NULL);
		if (L_31)
		{
			goto IL_0226;
		}
	}
	{
		goto IL_028a;
	}

IL_014e:
	{
		String_t* L_32 = V_1;
		bool L_33;
		L_33 = String_op_Equality_m50B3548E4AC232558190B0052877B290AA1D436A((String_t*)L_32, (String_t*)_stringLiteral9CE1604D659135925CCC4DD1F526AFFE42E689F1, /*hidden argument*/NULL);
		if (L_33)
		{
			goto IL_023a;
		}
	}
	{
		goto IL_028a;
	}

IL_0163:
	{
		String_t* L_34 = V_1;
		bool L_35;
		L_35 = String_op_Equality_m50B3548E4AC232558190B0052877B290AA1D436A((String_t*)L_34, (String_t*)_stringLiteral2F8690361553406965679AEF125F896BC5FC61F5, /*hidden argument*/NULL);
		if (L_35)
		{
			goto IL_024e;
		}
	}
	{
		goto IL_028a;
	}

IL_0178:
	{
		String_t* L_36 = V_1;
		bool L_37;
		L_37 = String_op_Equality_m50B3548E4AC232558190B0052877B290AA1D436A((String_t*)L_36, (String_t*)_stringLiteral1B024D537329B86AB0DF96B2A714180F442F53E9, /*hidden argument*/NULL);
		if (L_37)
		{
			goto IL_0262;
		}
	}
	{
		goto IL_028a;
	}

IL_018d:
	{
		String_t* L_38 = V_1;
		bool L_39;
		L_39 = String_op_Equality_m50B3548E4AC232558190B0052877B290AA1D436A((String_t*)L_38, (String_t*)_stringLiteral4845015737DC41475709911228278216EE4DC3AF, /*hidden argument*/NULL);
		if (L_39)
		{
			goto IL_0276;
		}
	}
	{
		goto IL_028a;
	}

IL_01a2:
	{
		// instance.enabled = reader.Read<System.Boolean>(ES3Type_bool.Instance);
		ES3Reader_t2780AF8AA61DA2A817115CEF8612AC0E494D03C9 * L_40 = ___reader0;
		IL2CPP_RUNTIME_CLASS_INIT(ES3Type_bool_t8F309F7B9CC735FF1DEE68081B6E3CAB367745F4_il2cpp_TypeInfo_var);
		ES3Type_t8FBECB7AE75168648B9524E0C2A38DAD4555421D * L_41 = ((ES3Type_bool_t8F309F7B9CC735FF1DEE68081B6E3CAB367745F4_StaticFields*)il2cpp_codegen_static_fields_for(ES3Type_bool_t8F309F7B9CC735FF1DEE68081B6E3CAB367745F4_il2cpp_TypeInfo_var))->get_Instance_12();
		NullCheck((ES3Reader_t2780AF8AA61DA2A817115CEF8612AC0E494D03C9 *)L_40);
		bool L_42;
		L_42 = GenericVirtFuncInvoker1< bool, ES3Type_t8FBECB7AE75168648B9524E0C2A38DAD4555421D * >::Invoke(ES3Reader_Read_TisBoolean_t07D1E3F34E4813023D64F584DFF7B34C9D922F37_mC6D1B158268FF9B97822FF9F5B37FB1723FEDA22_RuntimeMethod_var, (ES3Reader_t2780AF8AA61DA2A817115CEF8612AC0E494D03C9 *)L_40, (ES3Type_t8FBECB7AE75168648B9524E0C2A38DAD4555421D *)L_41);
		SizeBySpeedModule_set_enabled_m0CC5D81593E6D047B2B150041577EC93D3C7701C((SizeBySpeedModule_t156070A63E0A483D36BCAE783BA554CDA7CAF752 *)(SizeBySpeedModule_t156070A63E0A483D36BCAE783BA554CDA7CAF752 *)(&V_0), (bool)L_42, /*hidden argument*/NULL);
		// break;
		goto IL_0290;
	}

IL_01b9:
	{
		// instance.size = reader.Read<UnityEngine.ParticleSystem.MinMaxCurve>(ES3Type_MinMaxCurve.Instance);
		ES3Reader_t2780AF8AA61DA2A817115CEF8612AC0E494D03C9 * L_43 = ___reader0;
		IL2CPP_RUNTIME_CLASS_INIT(ES3Type_MinMaxCurve_tC5342BF0F8735B85CB5E16FDD4C6FACC8AFAD3B7_il2cpp_TypeInfo_var);
		ES3Type_t8FBECB7AE75168648B9524E0C2A38DAD4555421D * L_44 = ((ES3Type_MinMaxCurve_tC5342BF0F8735B85CB5E16FDD4C6FACC8AFAD3B7_StaticFields*)il2cpp_codegen_static_fields_for(ES3Type_MinMaxCurve_tC5342BF0F8735B85CB5E16FDD4C6FACC8AFAD3B7_il2cpp_TypeInfo_var))->get_Instance_12();
		NullCheck((ES3Reader_t2780AF8AA61DA2A817115CEF8612AC0E494D03C9 *)L_43);
		MinMaxCurve_tF036239442AB2D438B1EDABEBC785426871084CD  L_45;
		L_45 = GenericVirtFuncInvoker1< MinMaxCurve_tF036239442AB2D438B1EDABEBC785426871084CD , ES3Type_t8FBECB7AE75168648B9524E0C2A38DAD4555421D * >::Invoke(ES3Reader_Read_TisMinMaxCurve_tF036239442AB2D438B1EDABEBC785426871084CD_mD285150CBFB52440643BBECB5ADF4EE8DE940535_RuntimeMethod_var, (ES3Reader_t2780AF8AA61DA2A817115CEF8612AC0E494D03C9 *)L_43, (ES3Type_t8FBECB7AE75168648B9524E0C2A38DAD4555421D *)L_44);
		SizeBySpeedModule_set_size_mB0D87FAEF26DF701E303C3D480E83465AE600D12((SizeBySpeedModule_t156070A63E0A483D36BCAE783BA554CDA7CAF752 *)(SizeBySpeedModule_t156070A63E0A483D36BCAE783BA554CDA7CAF752 *)(&V_0), (MinMaxCurve_tF036239442AB2D438B1EDABEBC785426871084CD )L_45, /*hidden argument*/NULL);
		// break;
		goto IL_0290;
	}

IL_01d0:
	{
		// instance.sizeMultiplier = reader.Read<System.Single>(ES3Type_float.Instance);
		ES3Reader_t2780AF8AA61DA2A817115CEF8612AC0E494D03C9 * L_46 = ___reader0;
		IL2CPP_RUNTIME_CLASS_INIT(ES3Type_float_tF86B773C86731BD9AD79448B860BBB178FE77644_il2cpp_TypeInfo_var);
		ES3Type_t8FBECB7AE75168648B9524E0C2A38DAD4555421D * L_47 = ((ES3Type_float_tF86B773C86731BD9AD79448B860BBB178FE77644_StaticFields*)il2cpp_codegen_static_fields_for(ES3Type_float_tF86B773C86731BD9AD79448B860BBB178FE77644_il2cpp_TypeInfo_var))->get_Instance_12();
		NullCheck((ES3Reader_t2780AF8AA61DA2A817115CEF8612AC0E494D03C9 *)L_46);
		float L_48;
		L_48 = GenericVirtFuncInvoker1< float, ES3Type_t8FBECB7AE75168648B9524E0C2A38DAD4555421D * >::Invoke(ES3Reader_Read_TisSingle_tE07797BA3C98D4CA9B5A19413C19A76688AB899E_m4A0416374498BDA042B8EB21E49B72326D6CE5F4_RuntimeMethod_var, (ES3Reader_t2780AF8AA61DA2A817115CEF8612AC0E494D03C9 *)L_46, (ES3Type_t8FBECB7AE75168648B9524E0C2A38DAD4555421D *)L_47);
		SizeBySpeedModule_set_sizeMultiplier_m6087A72CA424D9F258632500EFA8BA9FB71F6141((SizeBySpeedModule_t156070A63E0A483D36BCAE783BA554CDA7CAF752 *)(SizeBySpeedModule_t156070A63E0A483D36BCAE783BA554CDA7CAF752 *)(&V_0), (float)L_48, /*hidden argument*/NULL);
		// break;
		goto IL_0290;
	}

IL_01e7:
	{
		// instance.x = reader.Read<UnityEngine.ParticleSystem.MinMaxCurve>(ES3Type_MinMaxCurve.Instance);
		ES3Reader_t2780AF8AA61DA2A817115CEF8612AC0E494D03C9 * L_49 = ___reader0;
		IL2CPP_RUNTIME_CLASS_INIT(ES3Type_MinMaxCurve_tC5342BF0F8735B85CB5E16FDD4C6FACC8AFAD3B7_il2cpp_TypeInfo_var);
		ES3Type_t8FBECB7AE75168648B9524E0C2A38DAD4555421D * L_50 = ((ES3Type_MinMaxCurve_tC5342BF0F8735B85CB5E16FDD4C6FACC8AFAD3B7_StaticFields*)il2cpp_codegen_static_fields_for(ES3Type_MinMaxCurve_tC5342BF0F8735B85CB5E16FDD4C6FACC8AFAD3B7_il2cpp_TypeInfo_var))->get_Instance_12();
		NullCheck((ES3Reader_t2780AF8AA61DA2A817115CEF8612AC0E494D03C9 *)L_49);
		MinMaxCurve_tF036239442AB2D438B1EDABEBC785426871084CD  L_51;
		L_51 = GenericVirtFuncInvoker1< MinMaxCurve_tF036239442AB2D438B1EDABEBC785426871084CD , ES3Type_t8FBECB7AE75168648B9524E0C2A38DAD4555421D * >::Invoke(ES3Reader_Read_TisMinMaxCurve_tF036239442AB2D438B1EDABEBC785426871084CD_mD285150CBFB52440643BBECB5ADF4EE8DE940535_RuntimeMethod_var, (ES3Reader_t2780AF8AA61DA2A817115CEF8612AC0E494D03C9 *)L_49, (ES3Type_t8FBECB7AE75168648B9524E0C2A38DAD4555421D *)L_50);
		SizeBySpeedModule_set_x_mFFD1FB55668F9C02B2AB87D861F028E57EE81E7B((SizeBySpeedModule_t156070A63E0A483D36BCAE783BA554CDA7CAF752 *)(SizeBySpeedModule_t156070A63E0A483D36BCAE783BA554CDA7CAF752 *)(&V_0), (MinMaxCurve_tF036239442AB2D438B1EDABEBC785426871084CD )L_51, /*hidden argument*/NULL);
		// break;
		goto IL_0290;
	}

IL_01fe:
	{
		// instance.xMultiplier = reader.Read<System.Single>(ES3Type_float.Instance);
		ES3Reader_t2780AF8AA61DA2A817115CEF8612AC0E494D03C9 * L_52 = ___reader0;
		IL2CPP_RUNTIME_CLASS_INIT(ES3Type_float_tF86B773C86731BD9AD79448B860BBB178FE77644_il2cpp_TypeInfo_var);
		ES3Type_t8FBECB7AE75168648B9524E0C2A38DAD4555421D * L_53 = ((ES3Type_float_tF86B773C86731BD9AD79448B860BBB178FE77644_StaticFields*)il2cpp_codegen_static_fields_for(ES3Type_float_tF86B773C86731BD9AD79448B860BBB178FE77644_il2cpp_TypeInfo_var))->get_Instance_12();
		NullCheck((ES3Reader_t2780AF8AA61DA2A817115CEF8612AC0E494D03C9 *)L_52);
		float L_54;
		L_54 = GenericVirtFuncInvoker1< float, ES3Type_t8FBECB7AE75168648B9524E0C2A38DAD4555421D * >::Invoke(ES3Reader_Read_TisSingle_tE07797BA3C98D4CA9B5A19413C19A76688AB899E_m4A0416374498BDA042B8EB21E49B72326D6CE5F4_RuntimeMethod_var, (ES3Reader_t2780AF8AA61DA2A817115CEF8612AC0E494D03C9 *)L_52, (ES3Type_t8FBECB7AE75168648B9524E0C2A38DAD4555421D *)L_53);
		SizeBySpeedModule_set_xMultiplier_m20E2174791982BB87D08217F71EA925022A1B0CC((SizeBySpeedModule_t156070A63E0A483D36BCAE783BA554CDA7CAF752 *)(SizeBySpeedModule_t156070A63E0A483D36BCAE783BA554CDA7CAF752 *)(&V_0), (float)L_54, /*hidden argument*/NULL);
		// break;
		goto IL_0290;
	}

IL_0212:
	{
		// instance.y = reader.Read<UnityEngine.ParticleSystem.MinMaxCurve>(ES3Type_MinMaxCurve.Instance);
		ES3Reader_t2780AF8AA61DA2A817115CEF8612AC0E494D03C9 * L_55 = ___reader0;
		IL2CPP_RUNTIME_CLASS_INIT(ES3Type_MinMaxCurve_tC5342BF0F8735B85CB5E16FDD4C6FACC8AFAD3B7_il2cpp_TypeInfo_var);
		ES3Type_t8FBECB7AE75168648B9524E0C2A38DAD4555421D * L_56 = ((ES3Type_MinMaxCurve_tC5342BF0F8735B85CB5E16FDD4C6FACC8AFAD3B7_StaticFields*)il2cpp_codegen_static_fields_for(ES3Type_MinMaxCurve_tC5342BF0F8735B85CB5E16FDD4C6FACC8AFAD3B7_il2cpp_TypeInfo_var))->get_Instance_12();
		NullCheck((ES3Reader_t2780AF8AA61DA2A817115CEF8612AC0E494D03C9 *)L_55);
		MinMaxCurve_tF036239442AB2D438B1EDABEBC785426871084CD  L_57;
		L_57 = GenericVirtFuncInvoker1< MinMaxCurve_tF036239442AB2D438B1EDABEBC785426871084CD , ES3Type_t8FBECB7AE75168648B9524E0C2A38DAD4555421D * >::Invoke(ES3Reader_Read_TisMinMaxCurve_tF036239442AB2D438B1EDABEBC785426871084CD_mD285150CBFB52440643BBECB5ADF4EE8DE940535_RuntimeMethod_var, (ES3Reader_t2780AF8AA61DA2A817115CEF8612AC0E494D03C9 *)L_55, (ES3Type_t8FBECB7AE75168648B9524E0C2A38DAD4555421D *)L_56);
		SizeBySpeedModule_set_y_m87016AA5C7B16879AB922CE07FCCF94E3683671F((SizeBySpeedModule_t156070A63E0A483D36BCAE783BA554CDA7CAF752 *)(SizeBySpeedModule_t156070A63E0A483D36BCAE783BA554CDA7CAF752 *)(&V_0), (MinMaxCurve_tF036239442AB2D438B1EDABEBC785426871084CD )L_57, /*hidden argument*/NULL);
		// break;
		goto IL_0290;
	}

IL_0226:
	{
		// instance.yMultiplier = reader.Read<System.Single>(ES3Type_float.Instance);
		ES3Reader_t2780AF8AA61DA2A817115CEF8612AC0E494D03C9 * L_58 = ___reader0;
		IL2CPP_RUNTIME_CLASS_INIT(ES3Type_float_tF86B773C86731BD9AD79448B860BBB178FE77644_il2cpp_TypeInfo_var);
		ES3Type_t8FBECB7AE75168648B9524E0C2A38DAD4555421D * L_59 = ((ES3Type_float_tF86B773C86731BD9AD79448B860BBB178FE77644_StaticFields*)il2cpp_codegen_static_fields_for(ES3Type_float_tF86B773C86731BD9AD79448B860BBB178FE77644_il2cpp_TypeInfo_var))->get_Instance_12();
		NullCheck((ES3Reader_t2780AF8AA61DA2A817115CEF8612AC0E494D03C9 *)L_58);
		float L_60;
		L_60 = GenericVirtFuncInvoker1< float, ES3Type_t8FBECB7AE75168648B9524E0C2A38DAD4555421D * >::Invoke(ES3Reader_Read_TisSingle_tE07797BA3C98D4CA9B5A19413C19A76688AB899E_m4A0416374498BDA042B8EB21E49B72326D6CE5F4_RuntimeMethod_var, (ES3Reader_t2780AF8AA61DA2A817115CEF8612AC0E494D03C9 *)L_58, (ES3Type_t8FBECB7AE75168648B9524E0C2A38DAD4555421D *)L_59);
		SizeBySpeedModule_set_yMultiplier_m16CEB10FE778D443B34EC516FD08191E74CB5CE3((SizeBySpeedModule_t156070A63E0A483D36BCAE783BA554CDA7CAF752 *)(SizeBySpeedModule_t156070A63E0A483D36BCAE783BA554CDA7CAF752 *)(&V_0), (float)L_60, /*hidden argument*/NULL);
		// break;
		goto IL_0290;
	}

IL_023a:
	{
		// instance.z = reader.Read<UnityEngine.ParticleSystem.MinMaxCurve>(ES3Type_MinMaxCurve.Instance);
		ES3Reader_t2780AF8AA61DA2A817115CEF8612AC0E494D03C9 * L_61 = ___reader0;
		IL2CPP_RUNTIME_CLASS_INIT(ES3Type_MinMaxCurve_tC5342BF0F8735B85CB5E16FDD4C6FACC8AFAD3B7_il2cpp_TypeInfo_var);
		ES3Type_t8FBECB7AE75168648B9524E0C2A38DAD4555421D * L_62 = ((ES3Type_MinMaxCurve_tC5342BF0F8735B85CB5E16FDD4C6FACC8AFAD3B7_StaticFields*)il2cpp_codegen_static_fields_for(ES3Type_MinMaxCurve_tC5342BF0F8735B85CB5E16FDD4C6FACC8AFAD3B7_il2cpp_TypeInfo_var))->get_Instance_12();
		NullCheck((ES3Reader_t2780AF8AA61DA2A817115CEF8612AC0E494D03C9 *)L_61);
		MinMaxCurve_tF036239442AB2D438B1EDABEBC785426871084CD  L_63;
		L_63 = GenericVirtFuncInvoker1< MinMaxCurve_tF036239442AB2D438B1EDABEBC785426871084CD , ES3Type_t8FBECB7AE75168648B9524E0C2A38DAD4555421D * >::Invoke(ES3Reader_Read_TisMinMaxCurve_tF036239442AB2D438B1EDABEBC785426871084CD_mD285150CBFB52440643BBECB5ADF4EE8DE940535_RuntimeMethod_var, (ES3Reader_t2780AF8AA61DA2A817115CEF8612AC0E494D03C9 *)L_61, (ES3Type_t8FBECB7AE75168648B9524E0C2A38DAD4555421D *)L_62);
		SizeBySpeedModule_set_z_m789F392BAE1FFE10F22445F0A89FE4905AD48E13((SizeBySpeedModule_t156070A63E0A483D36BCAE783BA554CDA7CAF752 *)(SizeBySpeedModule_t156070A63E0A483D36BCAE783BA554CDA7CAF752 *)(&V_0), (MinMaxCurve_tF036239442AB2D438B1EDABEBC785426871084CD )L_63, /*hidden argument*/NULL);
		// break;
		goto IL_0290;
	}

IL_024e:
	{
		// instance.zMultiplier = reader.Read<System.Single>(ES3Type_float.Instance);
		ES3Reader_t2780AF8AA61DA2A817115CEF8612AC0E494D03C9 * L_64 = ___reader0;
		IL2CPP_RUNTIME_CLASS_INIT(ES3Type_float_tF86B773C86731BD9AD79448B860BBB178FE77644_il2cpp_TypeInfo_var);
		ES3Type_t8FBECB7AE75168648B9524E0C2A38DAD4555421D * L_65 = ((ES3Type_float_tF86B773C86731BD9AD79448B860BBB178FE77644_StaticFields*)il2cpp_codegen_static_fields_for(ES3Type_float_tF86B773C86731BD9AD79448B860BBB178FE77644_il2cpp_TypeInfo_var))->get_Instance_12();
		NullCheck((ES3Reader_t2780AF8AA61DA2A817115CEF8612AC0E494D03C9 *)L_64);
		float L_66;
		L_66 = GenericVirtFuncInvoker1< float, ES3Type_t8FBECB7AE75168648B9524E0C2A38DAD4555421D * >::Invoke(ES3Reader_Read_TisSingle_tE07797BA3C98D4CA9B5A19413C19A76688AB899E_m4A0416374498BDA042B8EB21E49B72326D6CE5F4_RuntimeMethod_var, (ES3Reader_t2780AF8AA61DA2A817115CEF8612AC0E494D03C9 *)L_64, (ES3Type_t8FBECB7AE75168648B9524E0C2A38DAD4555421D *)L_65);
		SizeBySpeedModule_set_zMultiplier_m3CDE48B31D0AA2BDD554D6FB39509E32D3B3540F((SizeBySpeedModule_t156070A63E0A483D36BCAE783BA554CDA7CAF752 *)(SizeBySpeedModule_t156070A63E0A483D36BCAE783BA554CDA7CAF752 *)(&V_0), (float)L_66, /*hidden argument*/NULL);
		// break;
		goto IL_0290;
	}

IL_0262:
	{
		// instance.separateAxes = reader.Read<System.Boolean>(ES3Type_bool.Instance);
		ES3Reader_t2780AF8AA61DA2A817115CEF8612AC0E494D03C9 * L_67 = ___reader0;
		IL2CPP_RUNTIME_CLASS_INIT(ES3Type_bool_t8F309F7B9CC735FF1DEE68081B6E3CAB367745F4_il2cpp_TypeInfo_var);
		ES3Type_t8FBECB7AE75168648B9524E0C2A38DAD4555421D * L_68 = ((ES3Type_bool_t8F309F7B9CC735FF1DEE68081B6E3CAB367745F4_StaticFields*)il2cpp_codegen_static_fields_for(ES3Type_bool_t8F309F7B9CC735FF1DEE68081B6E3CAB367745F4_il2cpp_TypeInfo_var))->get_Instance_12();
		NullCheck((ES3Reader_t2780AF8AA61DA2A817115CEF8612AC0E494D03C9 *)L_67);
		bool L_69;
		L_69 = GenericVirtFuncInvoker1< bool, ES3Type_t8FBECB7AE75168648B9524E0C2A38DAD4555421D * >::Invoke(ES3Reader_Read_TisBoolean_t07D1E3F34E4813023D64F584DFF7B34C9D922F37_mC6D1B158268FF9B97822FF9F5B37FB1723FEDA22_RuntimeMethod_var, (ES3Reader_t2780AF8AA61DA2A817115CEF8612AC0E494D03C9 *)L_67, (ES3Type_t8FBECB7AE75168648B9524E0C2A38DAD4555421D *)L_68);
		SizeBySpeedModule_set_separateAxes_mF8B0B99BA3B98D6A8578B70EA19DFB271657FD8F((SizeBySpeedModule_t156070A63E0A483D36BCAE783BA554CDA7CAF752 *)(SizeBySpeedModule_t156070A63E0A483D36BCAE783BA554CDA7CAF752 *)(&V_0), (bool)L_69, /*hidden argument*/NULL);
		// break;
		goto IL_0290;
	}

IL_0276:
	{
		// instance.range = reader.Read<UnityEngine.Vector2>(ES3Type_Vector2.Instance);
		ES3Reader_t2780AF8AA61DA2A817115CEF8612AC0E494D03C9 * L_70 = ___reader0;
		IL2CPP_RUNTIME_CLASS_INIT(ES3Type_Vector2_t803CDF887D02E9215B016DFABE969B06638FB1F5_il2cpp_TypeInfo_var);
		ES3Type_t8FBECB7AE75168648B9524E0C2A38DAD4555421D * L_71 = ((ES3Type_Vector2_t803CDF887D02E9215B016DFABE969B06638FB1F5_StaticFields*)il2cpp_codegen_static_fields_for(ES3Type_Vector2_t803CDF887D02E9215B016DFABE969B06638FB1F5_il2cpp_TypeInfo_var))->get_Instance_12();
		NullCheck((ES3Reader_t2780AF8AA61DA2A817115CEF8612AC0E494D03C9 *)L_70);
		Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  L_72;
		L_72 = GenericVirtFuncInvoker1< Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9 , ES3Type_t8FBECB7AE75168648B9524E0C2A38DAD4555421D * >::Invoke(ES3Reader_Read_TisVector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9_mD2C1683A01C44107D1473023F8188DDEA71D9A7D_RuntimeMethod_var, (ES3Reader_t2780AF8AA61DA2A817115CEF8612AC0E494D03C9 *)L_70, (ES3Type_t8FBECB7AE75168648B9524E0C2A38DAD4555421D *)L_71);
		SizeBySpeedModule_set_range_mDF4151A1FBDEB5417C8B481907AE58C969F5167D((SizeBySpeedModule_t156070A63E0A483D36BCAE783BA554CDA7CAF752 *)(SizeBySpeedModule_t156070A63E0A483D36BCAE783BA554CDA7CAF752 *)(&V_0), (Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9 )L_72, /*hidden argument*/NULL);
		// break;
		goto IL_0290;
	}

IL_028a:
	{
		// reader.Skip();
		ES3Reader_t2780AF8AA61DA2A817115CEF8612AC0E494D03C9 * L_73 = ___reader0;
		NullCheck((ES3Reader_t2780AF8AA61DA2A817115CEF8612AC0E494D03C9 *)L_73);
		VirtActionInvoker0::Invoke(41 /* System.Void ES3Reader::Skip() */, (ES3Reader_t2780AF8AA61DA2A817115CEF8612AC0E494D03C9 *)L_73);
	}

IL_0290:
	{
		// while((propertyName = reader.ReadPropertyName()) != null)
		ES3Reader_t2780AF8AA61DA2A817115CEF8612AC0E494D03C9 * L_74 = ___reader0;
		NullCheck((ES3Reader_t2780AF8AA61DA2A817115CEF8612AC0E494D03C9 *)L_74);
		String_t* L_75;
		L_75 = VirtFuncInvoker0< String_t* >::Invoke(21 /* System.String ES3Reader::ReadPropertyName() */, (ES3Reader_t2780AF8AA61DA2A817115CEF8612AC0E494D03C9 *)L_74);
		String_t* L_76 = (String_t*)L_75;
		V_1 = (String_t*)L_76;
		if (L_76)
		{
			goto IL_000c;
		}
	}
	{
		// }
		return;
	}
}
