#include "pch-cpp.hpp"

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
// ES3Types.ES3Type_TrailModule
struct ES3Type_TrailModule_tC773F73EC0443516DD128FF2B5AE010809742462;
// UnityEngine.Gradient
struct Gradient_t297BAC6722F67728862AE2FBE760A400DA8902F2;
// UnityEngine.ParticleSystem
struct ParticleSystem_t2F526CCDBD3512879B3FCBE04BCAB20D7B4F391E;
// System.String
struct String_t;
// System.Type
struct Type_t;

IL2CPP_EXTERN_C RuntimeClass* ES3Type_MinMaxCurve_tC5342BF0F8735B85CB5E16FDD4C6FACC8AFAD3B7_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* ES3Type_MinMaxGradient_t5DD353D60E95642AB39D1C97C6FD6DD1B067D3CF_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* ES3Type_bool_t8F309F7B9CC735FF1DEE68081B6E3CAB367745F4_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* ES3Type_float_tF86B773C86731BD9AD79448B860BBB178FE77644_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* TrailModule_t95D15372971E64A1977B7587ABAA87B1A31EF5C8_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C String_t* _stringLiteral1D87A56AE67B2CD49CAE6E942C2FB7AD98925C00;
IL2CPP_EXTERN_C String_t* _stringLiteral354281948B6269615E32D856CF85B6F456724DAA;
IL2CPP_EXTERN_C String_t* _stringLiteral4221314F268D184F46688D45C85446821F1F1BC3;
IL2CPP_EXTERN_C String_t* _stringLiteral47C47DD09640803AD8016748EAE1F04DD1D41119;
IL2CPP_EXTERN_C String_t* _stringLiteral5C86338F177203D001C41D9C348A83D1338CC7D0;
IL2CPP_EXTERN_C String_t* _stringLiteral60126327537B7B8E6EE33C43FE0C5CA8BCC3A06A;
IL2CPP_EXTERN_C String_t* _stringLiteral87F70660D62DE5FC257FBADE9DA4EC9188597DE5;
IL2CPP_EXTERN_C String_t* _stringLiteralA967787586EC9E5A17A9C55E2002AB73A5E21A0A;
IL2CPP_EXTERN_C String_t* _stringLiteralADAEB0839588196B349BDB6CF33AFA3E0736360B;
IL2CPP_EXTERN_C String_t* _stringLiteralBE2893848F9FC647C2288DA6581A1522E9695182;
IL2CPP_EXTERN_C String_t* _stringLiteralBF540D6548854CC21630064FBA5390C9409C86F0;
IL2CPP_EXTERN_C String_t* _stringLiteralC580B374AA991574F91DFC86C068E7FAD661A3A4;
IL2CPP_EXTERN_C String_t* _stringLiteralE049DB547285CFCE1CB9A95934B6B6DCE2D219EC;
IL2CPP_EXTERN_C String_t* _stringLiteralF9D225733E1D10F9344C755C4A9C0870CD1DE97B;
IL2CPP_EXTERN_C String_t* _stringLiteralFE5F89F63E2381500F62A7CBD6954563BE44562F;
IL2CPP_EXTERN_C const RuntimeMethod* ES3Reader_Read_TisBoolean_t07D1E3F34E4813023D64F584DFF7B34C9D922F37_mC6D1B158268FF9B97822FF9F5B37FB1723FEDA22_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* ES3Reader_Read_TisMinMaxCurve_tF036239442AB2D438B1EDABEBC785426871084CD_mD285150CBFB52440643BBECB5ADF4EE8DE940535_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* ES3Reader_Read_TisMinMaxGradient_tF4530B26F29D9635D670A33B9EE581EAC48C12B7_m6A3DD8CBBAC5D32B838B6C4399009AB8AA512ACC_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* ES3Reader_Read_TisParticleSystemTrailTextureMode_tF3259187CA4D0A61EDB3A40E63CBF6C42641CE9F_m055DB1212E8BC34F385DF7D302F16241554E9730_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* ES3Reader_Read_TisSingle_tE07797BA3C98D4CA9B5A19413C19A76688AB899E_m4A0416374498BDA042B8EB21E49B72326D6CE5F4_RuntimeMethod_var;


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


// UnityEngine.Color
struct Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659 
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
	inline static int32_t get_offset_of_r_0() { return static_cast<int32_t>(offsetof(Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659, ___r_0)); }
	inline float get_r_0() const { return ___r_0; }
	inline float* get_address_of_r_0() { return &___r_0; }
	inline void set_r_0(float value)
	{
		___r_0 = value;
	}

	inline static int32_t get_offset_of_g_1() { return static_cast<int32_t>(offsetof(Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659, ___g_1)); }
	inline float get_g_1() const { return ___g_1; }
	inline float* get_address_of_g_1() { return &___g_1; }
	inline void set_g_1(float value)
	{
		___g_1 = value;
	}

	inline static int32_t get_offset_of_b_2() { return static_cast<int32_t>(offsetof(Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659, ___b_2)); }
	inline float get_b_2() const { return ___b_2; }
	inline float* get_address_of_b_2() { return &___b_2; }
	inline void set_b_2(float value)
	{
		___b_2 = value;
	}

	inline static int32_t get_offset_of_a_3() { return static_cast<int32_t>(offsetof(Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659, ___a_3)); }
	inline float get_a_3() const { return ___a_3; }
	inline float* get_address_of_a_3() { return &___a_3; }
	inline void set_a_3(float value)
	{
		___a_3 = value;
	}
};


// ES3Types.ES3Type_MinMaxCurve
struct ES3Type_MinMaxCurve_tC5342BF0F8735B85CB5E16FDD4C6FACC8AFAD3B7  : public ES3Type_t8FBECB7AE75168648B9524E0C2A38DAD4555421D
{
public:

public:
};


// ES3Types.ES3Type_MinMaxGradient
struct ES3Type_MinMaxGradient_t5DD353D60E95642AB39D1C97C6FD6DD1B067D3CF  : public ES3Type_t8FBECB7AE75168648B9524E0C2A38DAD4555421D
{
public:

public:
};


// ES3Types.ES3Type_TrailModule
struct ES3Type_TrailModule_tC773F73EC0443516DD128FF2B5AE010809742462  : public ES3Type_t8FBECB7AE75168648B9524E0C2A38DAD4555421D
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


// UnityEngine.ParticleSystem/TrailModule
struct TrailModule_t95D15372971E64A1977B7587ABAA87B1A31EF5C8 
{
public:
	// UnityEngine.ParticleSystem UnityEngine.ParticleSystem/TrailModule::m_ParticleSystem
	ParticleSystem_t2F526CCDBD3512879B3FCBE04BCAB20D7B4F391E * ___m_ParticleSystem_0;

public:
	inline static int32_t get_offset_of_m_ParticleSystem_0() { return static_cast<int32_t>(offsetof(TrailModule_t95D15372971E64A1977B7587ABAA87B1A31EF5C8, ___m_ParticleSystem_0)); }
	inline ParticleSystem_t2F526CCDBD3512879B3FCBE04BCAB20D7B4F391E * get_m_ParticleSystem_0() const { return ___m_ParticleSystem_0; }
	inline ParticleSystem_t2F526CCDBD3512879B3FCBE04BCAB20D7B4F391E ** get_address_of_m_ParticleSystem_0() { return &___m_ParticleSystem_0; }
	inline void set_m_ParticleSystem_0(ParticleSystem_t2F526CCDBD3512879B3FCBE04BCAB20D7B4F391E * value)
	{
		___m_ParticleSystem_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_ParticleSystem_0), (void*)value);
	}
};

// Native definition for P/Invoke marshalling of UnityEngine.ParticleSystem/TrailModule
struct TrailModule_t95D15372971E64A1977B7587ABAA87B1A31EF5C8_marshaled_pinvoke
{
	ParticleSystem_t2F526CCDBD3512879B3FCBE04BCAB20D7B4F391E * ___m_ParticleSystem_0;
};
// Native definition for COM marshalling of UnityEngine.ParticleSystem/TrailModule
struct TrailModule_t95D15372971E64A1977B7587ABAA87B1A31EF5C8_marshaled_com
{
	ParticleSystem_t2F526CCDBD3512879B3FCBE04BCAB20D7B4F391E * ___m_ParticleSystem_0;
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


// UnityEngine.ParticleSystemGradientMode
struct ParticleSystemGradientMode_tCF15644F35B8D166D1A9C073E758D24794895497 
{
public:
	// System.Int32 UnityEngine.ParticleSystemGradientMode::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(ParticleSystemGradientMode_tCF15644F35B8D166D1A9C073E758D24794895497, ___value___2)); }
	inline int32_t get_value___2() const { return ___value___2; }
	inline int32_t* get_address_of_value___2() { return &___value___2; }
	inline void set_value___2(int32_t value)
	{
		___value___2 = value;
	}
};


// UnityEngine.ParticleSystemTrailTextureMode
struct ParticleSystemTrailTextureMode_tF3259187CA4D0A61EDB3A40E63CBF6C42641CE9F 
{
public:
	// System.Int32 UnityEngine.ParticleSystemTrailTextureMode::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(ParticleSystemTrailTextureMode_tF3259187CA4D0A61EDB3A40E63CBF6C42641CE9F, ___value___2)); }
	inline int32_t get_value___2() const { return ___value___2; }
	inline int32_t* get_address_of_value___2() { return &___value___2; }
	inline void set_value___2(int32_t value)
	{
		___value___2 = value;
	}
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


// UnityEngine.ParticleSystem/MinMaxGradient
struct MinMaxGradient_tF4530B26F29D9635D670A33B9EE581EAC48C12B7 
{
public:
	// UnityEngine.ParticleSystemGradientMode UnityEngine.ParticleSystem/MinMaxGradient::m_Mode
	int32_t ___m_Mode_0;
	// UnityEngine.Gradient UnityEngine.ParticleSystem/MinMaxGradient::m_GradientMin
	Gradient_t297BAC6722F67728862AE2FBE760A400DA8902F2 * ___m_GradientMin_1;
	// UnityEngine.Gradient UnityEngine.ParticleSystem/MinMaxGradient::m_GradientMax
	Gradient_t297BAC6722F67728862AE2FBE760A400DA8902F2 * ___m_GradientMax_2;
	// UnityEngine.Color UnityEngine.ParticleSystem/MinMaxGradient::m_ColorMin
	Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659  ___m_ColorMin_3;
	// UnityEngine.Color UnityEngine.ParticleSystem/MinMaxGradient::m_ColorMax
	Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659  ___m_ColorMax_4;

public:
	inline static int32_t get_offset_of_m_Mode_0() { return static_cast<int32_t>(offsetof(MinMaxGradient_tF4530B26F29D9635D670A33B9EE581EAC48C12B7, ___m_Mode_0)); }
	inline int32_t get_m_Mode_0() const { return ___m_Mode_0; }
	inline int32_t* get_address_of_m_Mode_0() { return &___m_Mode_0; }
	inline void set_m_Mode_0(int32_t value)
	{
		___m_Mode_0 = value;
	}

	inline static int32_t get_offset_of_m_GradientMin_1() { return static_cast<int32_t>(offsetof(MinMaxGradient_tF4530B26F29D9635D670A33B9EE581EAC48C12B7, ___m_GradientMin_1)); }
	inline Gradient_t297BAC6722F67728862AE2FBE760A400DA8902F2 * get_m_GradientMin_1() const { return ___m_GradientMin_1; }
	inline Gradient_t297BAC6722F67728862AE2FBE760A400DA8902F2 ** get_address_of_m_GradientMin_1() { return &___m_GradientMin_1; }
	inline void set_m_GradientMin_1(Gradient_t297BAC6722F67728862AE2FBE760A400DA8902F2 * value)
	{
		___m_GradientMin_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_GradientMin_1), (void*)value);
	}

	inline static int32_t get_offset_of_m_GradientMax_2() { return static_cast<int32_t>(offsetof(MinMaxGradient_tF4530B26F29D9635D670A33B9EE581EAC48C12B7, ___m_GradientMax_2)); }
	inline Gradient_t297BAC6722F67728862AE2FBE760A400DA8902F2 * get_m_GradientMax_2() const { return ___m_GradientMax_2; }
	inline Gradient_t297BAC6722F67728862AE2FBE760A400DA8902F2 ** get_address_of_m_GradientMax_2() { return &___m_GradientMax_2; }
	inline void set_m_GradientMax_2(Gradient_t297BAC6722F67728862AE2FBE760A400DA8902F2 * value)
	{
		___m_GradientMax_2 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_GradientMax_2), (void*)value);
	}

	inline static int32_t get_offset_of_m_ColorMin_3() { return static_cast<int32_t>(offsetof(MinMaxGradient_tF4530B26F29D9635D670A33B9EE581EAC48C12B7, ___m_ColorMin_3)); }
	inline Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659  get_m_ColorMin_3() const { return ___m_ColorMin_3; }
	inline Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659 * get_address_of_m_ColorMin_3() { return &___m_ColorMin_3; }
	inline void set_m_ColorMin_3(Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659  value)
	{
		___m_ColorMin_3 = value;
	}

	inline static int32_t get_offset_of_m_ColorMax_4() { return static_cast<int32_t>(offsetof(MinMaxGradient_tF4530B26F29D9635D670A33B9EE581EAC48C12B7, ___m_ColorMax_4)); }
	inline Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659  get_m_ColorMax_4() const { return ___m_ColorMax_4; }
	inline Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659 * get_address_of_m_ColorMax_4() { return &___m_ColorMax_4; }
	inline void set_m_ColorMax_4(Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659  value)
	{
		___m_ColorMax_4 = value;
	}
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


// UnityEngine.Color


// UnityEngine.Color


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


// ES3Types.ES3Type_MinMaxGradient

struct ES3Type_MinMaxGradient_t5DD353D60E95642AB39D1C97C6FD6DD1B067D3CF_StaticFields
{
public:
	// ES3Types.ES3Type ES3Types.ES3Type_MinMaxGradient::Instance
	ES3Type_t8FBECB7AE75168648B9524E0C2A38DAD4555421D * ___Instance_12;

public:
	inline static int32_t get_offset_of_Instance_12() { return static_cast<int32_t>(offsetof(ES3Type_MinMaxGradient_t5DD353D60E95642AB39D1C97C6FD6DD1B067D3CF_StaticFields, ___Instance_12)); }
	inline ES3Type_t8FBECB7AE75168648B9524E0C2A38DAD4555421D * get_Instance_12() const { return ___Instance_12; }
	inline ES3Type_t8FBECB7AE75168648B9524E0C2A38DAD4555421D ** get_address_of_Instance_12() { return &___Instance_12; }
	inline void set_Instance_12(ES3Type_t8FBECB7AE75168648B9524E0C2A38DAD4555421D * value)
	{
		___Instance_12 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___Instance_12), (void*)value);
	}
};


// ES3Types.ES3Type_MinMaxGradient


// ES3Types.ES3Type_TrailModule

struct ES3Type_TrailModule_tC773F73EC0443516DD128FF2B5AE010809742462_StaticFields
{
public:
	// ES3Types.ES3Type ES3Types.ES3Type_TrailModule::Instance
	ES3Type_t8FBECB7AE75168648B9524E0C2A38DAD4555421D * ___Instance_12;

public:
	inline static int32_t get_offset_of_Instance_12() { return static_cast<int32_t>(offsetof(ES3Type_TrailModule_tC773F73EC0443516DD128FF2B5AE010809742462_StaticFields, ___Instance_12)); }
	inline ES3Type_t8FBECB7AE75168648B9524E0C2A38DAD4555421D * get_Instance_12() const { return ___Instance_12; }
	inline ES3Type_t8FBECB7AE75168648B9524E0C2A38DAD4555421D ** get_address_of_Instance_12() { return &___Instance_12; }
	inline void set_Instance_12(ES3Type_t8FBECB7AE75168648B9524E0C2A38DAD4555421D * value)
	{
		___Instance_12 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___Instance_12), (void*)value);
	}
};


// ES3Types.ES3Type_TrailModule


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


// System.Single


// System.Single


// System.UInt32


// System.UInt32


// System.Void


// System.Void


// UnityEngine.ParticleSystem/TrailModule


// UnityEngine.ParticleSystem/TrailModule


// UnityEngine.ParticleSystemCurveMode


// UnityEngine.ParticleSystemCurveMode


// UnityEngine.ParticleSystemGradientMode


// UnityEngine.ParticleSystemGradientMode


// UnityEngine.ParticleSystemTrailTextureMode


// UnityEngine.ParticleSystemTrailTextureMode


// UnityEngine.ParticleSystem/MinMaxCurve


// UnityEngine.ParticleSystem/MinMaxCurve


// UnityEngine.ParticleSystem/MinMaxGradient


// UnityEngine.ParticleSystem/MinMaxGradient

#ifdef __clang__
#pragma clang diagnostic pop
#endif



// System.UInt32 <PrivateImplementationDetails>::ComputeStringHash(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR uint32_t U3CPrivateImplementationDetailsU3E_ComputeStringHash_m3ADC1F612F9EE3DD518E6F0023A0DE0EE2B120A7 (String_t* ___s0, const RuntimeMethod* method);
// System.Boolean System.String::op_Equality(System.String,System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool String_op_Equality_m50B3548E4AC232558190B0052877B290AA1D436A (String_t* ___a0, String_t* ___b1, const RuntimeMethod* method);
// System.Void UnityEngine.ParticleSystem/TrailModule::set_enabled(System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TrailModule_set_enabled_mFC8451DDDF40CCBB3E32A4B30A001115F6346894 (TrailModule_t95D15372971E64A1977B7587ABAA87B1A31EF5C8 * __this, bool ___value0, const RuntimeMethod* method);
// System.Void UnityEngine.ParticleSystem/TrailModule::set_ratio(System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TrailModule_set_ratio_m34E63B34E7B0E8D037AD45532B2E2D5BD0750189 (TrailModule_t95D15372971E64A1977B7587ABAA87B1A31EF5C8 * __this, float ___value0, const RuntimeMethod* method);
// System.Void UnityEngine.ParticleSystem/TrailModule::set_lifetime(UnityEngine.ParticleSystem/MinMaxCurve)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TrailModule_set_lifetime_m57C898C42B9F18F5A0E88AAA7B10276CC158C39D (TrailModule_t95D15372971E64A1977B7587ABAA87B1A31EF5C8 * __this, MinMaxCurve_tF036239442AB2D438B1EDABEBC785426871084CD  ___value0, const RuntimeMethod* method);
// System.Void UnityEngine.ParticleSystem/TrailModule::set_lifetimeMultiplier(System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TrailModule_set_lifetimeMultiplier_m23F95D65EE8C82152AE1CF2E41531EC2789A866B (TrailModule_t95D15372971E64A1977B7587ABAA87B1A31EF5C8 * __this, float ___value0, const RuntimeMethod* method);
// System.Void UnityEngine.ParticleSystem/TrailModule::set_minVertexDistance(System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TrailModule_set_minVertexDistance_mF7C29F88FBF540CE4987F4CF9B141C624808FBC5 (TrailModule_t95D15372971E64A1977B7587ABAA87B1A31EF5C8 * __this, float ___value0, const RuntimeMethod* method);
// System.Void UnityEngine.ParticleSystem/TrailModule::set_textureMode(UnityEngine.ParticleSystemTrailTextureMode)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TrailModule_set_textureMode_mC1F8AE0D2965FC47BDBFF4F53E0673D5FB58CF28 (TrailModule_t95D15372971E64A1977B7587ABAA87B1A31EF5C8 * __this, int32_t ___value0, const RuntimeMethod* method);
// System.Void UnityEngine.ParticleSystem/TrailModule::set_worldSpace(System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TrailModule_set_worldSpace_m42A63AF4A96F24A621A29A0F35240195F0E56B1A (TrailModule_t95D15372971E64A1977B7587ABAA87B1A31EF5C8 * __this, bool ___value0, const RuntimeMethod* method);
// System.Void UnityEngine.ParticleSystem/TrailModule::set_dieWithParticles(System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TrailModule_set_dieWithParticles_mB7C4E8DC2F908FDF6D57A77B54B821E360D8DA99 (TrailModule_t95D15372971E64A1977B7587ABAA87B1A31EF5C8 * __this, bool ___value0, const RuntimeMethod* method);
// System.Void UnityEngine.ParticleSystem/TrailModule::set_sizeAffectsWidth(System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TrailModule_set_sizeAffectsWidth_m3517856E39080DA69B447499C8846D2491B0ABF0 (TrailModule_t95D15372971E64A1977B7587ABAA87B1A31EF5C8 * __this, bool ___value0, const RuntimeMethod* method);
// System.Void UnityEngine.ParticleSystem/TrailModule::set_sizeAffectsLifetime(System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TrailModule_set_sizeAffectsLifetime_m98BF4A6594193D824B52D88371CF963ACBA388FD (TrailModule_t95D15372971E64A1977B7587ABAA87B1A31EF5C8 * __this, bool ___value0, const RuntimeMethod* method);
// System.Void UnityEngine.ParticleSystem/TrailModule::set_inheritParticleColor(System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TrailModule_set_inheritParticleColor_mCD83E87B5E00F2BFFBE08AD2D1D68606283A4FEE (TrailModule_t95D15372971E64A1977B7587ABAA87B1A31EF5C8 * __this, bool ___value0, const RuntimeMethod* method);
// System.Void UnityEngine.ParticleSystem/TrailModule::set_colorOverLifetime(UnityEngine.ParticleSystem/MinMaxGradient)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TrailModule_set_colorOverLifetime_mCD56BD4B75D3A3947069BA1B93FEC78AAE08DF27 (TrailModule_t95D15372971E64A1977B7587ABAA87B1A31EF5C8 * __this, MinMaxGradient_tF4530B26F29D9635D670A33B9EE581EAC48C12B7  ___value0, const RuntimeMethod* method);
// System.Void UnityEngine.ParticleSystem/TrailModule::set_widthOverTrail(UnityEngine.ParticleSystem/MinMaxCurve)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TrailModule_set_widthOverTrail_m6C0A896EBFDED7CE46344B3A0B04212934F30DE1 (TrailModule_t95D15372971E64A1977B7587ABAA87B1A31EF5C8 * __this, MinMaxCurve_tF036239442AB2D438B1EDABEBC785426871084CD  ___value0, const RuntimeMethod* method);
// System.Void UnityEngine.ParticleSystem/TrailModule::set_widthOverTrailMultiplier(System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TrailModule_set_widthOverTrailMultiplier_m6A7EA2856CF30B710CCB528EA3EBFD1799C19BD4 (TrailModule_t95D15372971E64A1977B7587ABAA87B1A31EF5C8 * __this, float ___value0, const RuntimeMethod* method);
// System.Void UnityEngine.ParticleSystem/TrailModule::set_colorOverTrail(UnityEngine.ParticleSystem/MinMaxGradient)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TrailModule_set_colorOverTrail_m8440C6574C8310292B93D70EA4FE3EE8C40DF8DB (TrailModule_t95D15372971E64A1977B7587ABAA87B1A31EF5C8 * __this, MinMaxGradient_tF4530B26F29D9635D670A33B9EE581EAC48C12B7  ___value0, const RuntimeMethod* method);
// System.Void ES3Types.ES3Type_TrailModule::ReadInto<UnityEngine.Matrix4x4>(ES3Reader,System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ES3Type_TrailModule_ReadInto_TisMatrix4x4_tDE7FF4F2E2EA284F6EFE00D627789D0E5B8B4461_mA39CE9C658FF44834A3329D12821181FE4CBC6B7_gshared (ES3Type_TrailModule_tC773F73EC0443516DD128FF2B5AE010809742462 * __this, ES3Reader_t2780AF8AA61DA2A817115CEF8612AC0E494D03C9 * ___reader0, RuntimeObject * ___obj1, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ES3Reader_Read_TisBoolean_t07D1E3F34E4813023D64F584DFF7B34C9D922F37_mC6D1B158268FF9B97822FF9F5B37FB1723FEDA22_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ES3Reader_Read_TisMinMaxCurve_tF036239442AB2D438B1EDABEBC785426871084CD_mD285150CBFB52440643BBECB5ADF4EE8DE940535_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ES3Reader_Read_TisMinMaxGradient_tF4530B26F29D9635D670A33B9EE581EAC48C12B7_m6A3DD8CBBAC5D32B838B6C4399009AB8AA512ACC_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ES3Reader_Read_TisParticleSystemTrailTextureMode_tF3259187CA4D0A61EDB3A40E63CBF6C42641CE9F_m055DB1212E8BC34F385DF7D302F16241554E9730_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ES3Reader_Read_TisSingle_tE07797BA3C98D4CA9B5A19413C19A76688AB899E_m4A0416374498BDA042B8EB21E49B72326D6CE5F4_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ES3Type_MinMaxCurve_tC5342BF0F8735B85CB5E16FDD4C6FACC8AFAD3B7_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ES3Type_MinMaxGradient_t5DD353D60E95642AB39D1C97C6FD6DD1B067D3CF_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ES3Type_bool_t8F309F7B9CC735FF1DEE68081B6E3CAB367745F4_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ES3Type_float_tF86B773C86731BD9AD79448B860BBB178FE77644_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&TrailModule_t95D15372971E64A1977B7587ABAA87B1A31EF5C8_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral1D87A56AE67B2CD49CAE6E942C2FB7AD98925C00);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral354281948B6269615E32D856CF85B6F456724DAA);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral4221314F268D184F46688D45C85446821F1F1BC3);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral47C47DD09640803AD8016748EAE1F04DD1D41119);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral5C86338F177203D001C41D9C348A83D1338CC7D0);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral60126327537B7B8E6EE33C43FE0C5CA8BCC3A06A);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral87F70660D62DE5FC257FBADE9DA4EC9188597DE5);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralA967787586EC9E5A17A9C55E2002AB73A5E21A0A);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralADAEB0839588196B349BDB6CF33AFA3E0736360B);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralBE2893848F9FC647C2288DA6581A1522E9695182);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralBF540D6548854CC21630064FBA5390C9409C86F0);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralC580B374AA991574F91DFC86C068E7FAD661A3A4);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralE049DB547285CFCE1CB9A95934B6B6DCE2D219EC);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralF9D225733E1D10F9344C755C4A9C0870CD1DE97B);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralFE5F89F63E2381500F62A7CBD6954563BE44562F);
		s_Il2CppMethodInitialized = true;
	}
	TrailModule_t95D15372971E64A1977B7587ABAA87B1A31EF5C8  V_0;
	memset((&V_0), 0, sizeof(V_0));
	String_t* V_1 = NULL;
	uint32_t V_2 = 0;
	{
		// var instance = (UnityEngine.ParticleSystem.TrailModule)obj;
		RuntimeObject * L_0 = ___obj1;
		V_0 = (TrailModule_t95D15372971E64A1977B7587ABAA87B1A31EF5C8 )((*(TrailModule_t95D15372971E64A1977B7587ABAA87B1A31EF5C8 *)((TrailModule_t95D15372971E64A1977B7587ABAA87B1A31EF5C8 *)UnBox(L_0, TrailModule_t95D15372971E64A1977B7587ABAA87B1A31EF5C8_il2cpp_TypeInfo_var))));
		goto IL_038e;
	}

IL_000c:
	{
		String_t* L_1 = V_1;
		if (!L_1)
		{
			goto IL_0388;
		}
	}
	{
		String_t* L_2 = V_1;
		uint32_t L_3;
		L_3 = U3CPrivateImplementationDetailsU3E_ComputeStringHash_m3ADC1F612F9EE3DD518E6F0023A0DE0EE2B120A7((String_t*)L_2, /*hidden argument*/NULL);
		V_2 = (uint32_t)L_3;
		uint32_t L_4 = V_2;
		if ((!(((uint32_t)L_4) <= ((uint32_t)((int32_t)1376955374)))))
		{
			goto IL_008d;
		}
	}
	{
		uint32_t L_5 = V_2;
		if ((!(((uint32_t)L_5) <= ((uint32_t)((int32_t)494095910)))))
		{
			goto IL_004f;
		}
	}
	{
		uint32_t L_6 = V_2;
		if ((((int32_t)L_6) == ((int32_t)((int32_t)49525662))))
		{
			goto IL_010e;
		}
	}
	{
		uint32_t L_7 = V_2;
		if ((((int32_t)L_7) == ((int32_t)((int32_t)341298456))))
		{
			goto IL_021f;
		}
	}
	{
		uint32_t L_8 = V_2;
		if ((((int32_t)L_8) == ((int32_t)((int32_t)494095910))))
		{
			goto IL_0234;
		}
	}
	{
		goto IL_0388;
	}

IL_004f:
	{
		uint32_t L_9 = V_2;
		if ((!(((uint32_t)L_9) <= ((uint32_t)((int32_t)973733911)))))
		{
			goto IL_0072;
		}
	}
	{
		uint32_t L_10 = V_2;
		if ((((int32_t)L_10) == ((int32_t)((int32_t)559929418))))
		{
			goto IL_01b6;
		}
	}
	{
		uint32_t L_11 = V_2;
		if ((((int32_t)L_11) == ((int32_t)((int32_t)973733911))))
		{
			goto IL_0177;
		}
	}
	{
		goto IL_0388;
	}

IL_0072:
	{
		uint32_t L_12 = V_2;
		if ((((int32_t)L_12) == ((int32_t)((int32_t)1024708593))))
		{
			goto IL_014d;
		}
	}
	{
		uint32_t L_13 = V_2;
		if ((((int32_t)L_13) == ((int32_t)((int32_t)1376955374))))
		{
			goto IL_0138;
		}
	}
	{
		goto IL_0388;
	}

IL_008d:
	{
		uint32_t L_14 = V_2;
		if ((!(((uint32_t)L_14) <= ((uint32_t)((int32_t)-2100707162)))))
		{
			goto IL_00d3;
		}
	}
	{
		uint32_t L_15 = V_2;
		if ((!(((uint32_t)L_15) <= ((uint32_t)((int32_t)1975189197)))))
		{
			goto IL_00b8;
		}
	}
	{
		uint32_t L_16 = V_2;
		if ((((int32_t)L_16) == ((int32_t)((int32_t)1546474083))))
		{
			goto IL_020a;
		}
	}
	{
		uint32_t L_17 = V_2;
		if ((((int32_t)L_17) == ((int32_t)((int32_t)1975189197))))
		{
			goto IL_01cb;
		}
	}
	{
		goto IL_0388;
	}

IL_00b8:
	{
		uint32_t L_18 = V_2;
		if ((((int32_t)L_18) == ((int32_t)((int32_t)2053023684))))
		{
			goto IL_01a1;
		}
	}
	{
		uint32_t L_19 = V_2;
		if ((((int32_t)L_19) == ((int32_t)((int32_t)-2100707162))))
		{
			goto IL_0162;
		}
	}
	{
		goto IL_0388;
	}

IL_00d3:
	{
		uint32_t L_20 = V_2;
		if ((!(((uint32_t)L_20) <= ((uint32_t)((int32_t)-1319579393)))))
		{
			goto IL_00f6;
		}
	}
	{
		uint32_t L_21 = V_2;
		if ((((int32_t)L_21) == ((int32_t)((int32_t)-1562862963))))
		{
			goto IL_01e0;
		}
	}
	{
		uint32_t L_22 = V_2;
		if ((((int32_t)L_22) == ((int32_t)((int32_t)-1319579393))))
		{
			goto IL_018c;
		}
	}
	{
		goto IL_0388;
	}

IL_00f6:
	{
		uint32_t L_23 = V_2;
		if ((((int32_t)L_23) == ((int32_t)((int32_t)-1055777148))))
		{
			goto IL_0123;
		}
	}
	{
		uint32_t L_24 = V_2;
		if ((((int32_t)L_24) == ((int32_t)((int32_t)-413379935))))
		{
			goto IL_01f5;
		}
	}
	{
		goto IL_0388;
	}

IL_010e:
	{
		String_t* L_25 = V_1;
		bool L_26;
		L_26 = String_op_Equality_m50B3548E4AC232558190B0052877B290AA1D436A((String_t*)L_25, (String_t*)_stringLiteralF9D225733E1D10F9344C755C4A9C0870CD1DE97B, /*hidden argument*/NULL);
		if (L_26)
		{
			goto IL_0249;
		}
	}
	{
		goto IL_0388;
	}

IL_0123:
	{
		String_t* L_27 = V_1;
		bool L_28;
		L_28 = String_op_Equality_m50B3548E4AC232558190B0052877B290AA1D436A((String_t*)L_27, (String_t*)_stringLiteral60126327537B7B8E6EE33C43FE0C5CA8BCC3A06A, /*hidden argument*/NULL);
		if (L_28)
		{
			goto IL_0260;
		}
	}
	{
		goto IL_0388;
	}

IL_0138:
	{
		String_t* L_29 = V_1;
		bool L_30;
		L_30 = String_op_Equality_m50B3548E4AC232558190B0052877B290AA1D436A((String_t*)L_29, (String_t*)_stringLiteralBE2893848F9FC647C2288DA6581A1522E9695182, /*hidden argument*/NULL);
		if (L_30)
		{
			goto IL_0277;
		}
	}
	{
		goto IL_0388;
	}

IL_014d:
	{
		String_t* L_31 = V_1;
		bool L_32;
		L_32 = String_op_Equality_m50B3548E4AC232558190B0052877B290AA1D436A((String_t*)L_31, (String_t*)_stringLiteral4221314F268D184F46688D45C85446821F1F1BC3, /*hidden argument*/NULL);
		if (L_32)
		{
			goto IL_028e;
		}
	}
	{
		goto IL_0388;
	}

IL_0162:
	{
		String_t* L_33 = V_1;
		bool L_34;
		L_34 = String_op_Equality_m50B3548E4AC232558190B0052877B290AA1D436A((String_t*)L_33, (String_t*)_stringLiteral5C86338F177203D001C41D9C348A83D1338CC7D0, /*hidden argument*/NULL);
		if (L_34)
		{
			goto IL_02a5;
		}
	}
	{
		goto IL_0388;
	}

IL_0177:
	{
		String_t* L_35 = V_1;
		bool L_36;
		L_36 = String_op_Equality_m50B3548E4AC232558190B0052877B290AA1D436A((String_t*)L_35, (String_t*)_stringLiteralFE5F89F63E2381500F62A7CBD6954563BE44562F, /*hidden argument*/NULL);
		if (L_36)
		{
			goto IL_02bc;
		}
	}
	{
		goto IL_0388;
	}

IL_018c:
	{
		String_t* L_37 = V_1;
		bool L_38;
		L_38 = String_op_Equality_m50B3548E4AC232558190B0052877B290AA1D436A((String_t*)L_37, (String_t*)_stringLiteral87F70660D62DE5FC257FBADE9DA4EC9188597DE5, /*hidden argument*/NULL);
		if (L_38)
		{
			goto IL_02ce;
		}
	}
	{
		goto IL_0388;
	}

IL_01a1:
	{
		String_t* L_39 = V_1;
		bool L_40;
		L_40 = String_op_Equality_m50B3548E4AC232558190B0052877B290AA1D436A((String_t*)L_39, (String_t*)_stringLiteral354281948B6269615E32D856CF85B6F456724DAA, /*hidden argument*/NULL);
		if (L_40)
		{
			goto IL_02e5;
		}
	}
	{
		goto IL_0388;
	}

IL_01b6:
	{
		String_t* L_41 = V_1;
		bool L_42;
		L_42 = String_op_Equality_m50B3548E4AC232558190B0052877B290AA1D436A((String_t*)L_41, (String_t*)_stringLiteralADAEB0839588196B349BDB6CF33AFA3E0736360B, /*hidden argument*/NULL);
		if (L_42)
		{
			goto IL_02fc;
		}
	}
	{
		goto IL_0388;
	}

IL_01cb:
	{
		String_t* L_43 = V_1;
		bool L_44;
		L_44 = String_op_Equality_m50B3548E4AC232558190B0052877B290AA1D436A((String_t*)L_43, (String_t*)_stringLiteralC580B374AA991574F91DFC86C068E7FAD661A3A4, /*hidden argument*/NULL);
		if (L_44)
		{
			goto IL_0310;
		}
	}
	{
		goto IL_0388;
	}

IL_01e0:
	{
		String_t* L_45 = V_1;
		bool L_46;
		L_46 = String_op_Equality_m50B3548E4AC232558190B0052877B290AA1D436A((String_t*)L_45, (String_t*)_stringLiteralE049DB547285CFCE1CB9A95934B6B6DCE2D219EC, /*hidden argument*/NULL);
		if (L_46)
		{
			goto IL_0324;
		}
	}
	{
		goto IL_0388;
	}

IL_01f5:
	{
		String_t* L_47 = V_1;
		bool L_48;
		L_48 = String_op_Equality_m50B3548E4AC232558190B0052877B290AA1D436A((String_t*)L_47, (String_t*)_stringLiteralBF540D6548854CC21630064FBA5390C9409C86F0, /*hidden argument*/NULL);
		if (L_48)
		{
			goto IL_0338;
		}
	}
	{
		goto IL_0388;
	}

IL_020a:
	{
		String_t* L_49 = V_1;
		bool L_50;
		L_50 = String_op_Equality_m50B3548E4AC232558190B0052877B290AA1D436A((String_t*)L_49, (String_t*)_stringLiteral1D87A56AE67B2CD49CAE6E942C2FB7AD98925C00, /*hidden argument*/NULL);
		if (L_50)
		{
			goto IL_034c;
		}
	}
	{
		goto IL_0388;
	}

IL_021f:
	{
		String_t* L_51 = V_1;
		bool L_52;
		L_52 = String_op_Equality_m50B3548E4AC232558190B0052877B290AA1D436A((String_t*)L_51, (String_t*)_stringLiteralA967787586EC9E5A17A9C55E2002AB73A5E21A0A, /*hidden argument*/NULL);
		if (L_52)
		{
			goto IL_0360;
		}
	}
	{
		goto IL_0388;
	}

IL_0234:
	{
		String_t* L_53 = V_1;
		bool L_54;
		L_54 = String_op_Equality_m50B3548E4AC232558190B0052877B290AA1D436A((String_t*)L_53, (String_t*)_stringLiteral47C47DD09640803AD8016748EAE1F04DD1D41119, /*hidden argument*/NULL);
		if (L_54)
		{
			goto IL_0374;
		}
	}
	{
		goto IL_0388;
	}

IL_0249:
	{
		// instance.enabled = reader.Read<System.Boolean>(ES3Type_bool.Instance);
		ES3Reader_t2780AF8AA61DA2A817115CEF8612AC0E494D03C9 * L_55 = ___reader0;
		IL2CPP_RUNTIME_CLASS_INIT(ES3Type_bool_t8F309F7B9CC735FF1DEE68081B6E3CAB367745F4_il2cpp_TypeInfo_var);
		ES3Type_t8FBECB7AE75168648B9524E0C2A38DAD4555421D * L_56 = ((ES3Type_bool_t8F309F7B9CC735FF1DEE68081B6E3CAB367745F4_StaticFields*)il2cpp_codegen_static_fields_for(ES3Type_bool_t8F309F7B9CC735FF1DEE68081B6E3CAB367745F4_il2cpp_TypeInfo_var))->get_Instance_12();
		NullCheck((ES3Reader_t2780AF8AA61DA2A817115CEF8612AC0E494D03C9 *)L_55);
		bool L_57;
		L_57 = GenericVirtFuncInvoker1< bool, ES3Type_t8FBECB7AE75168648B9524E0C2A38DAD4555421D * >::Invoke(ES3Reader_Read_TisBoolean_t07D1E3F34E4813023D64F584DFF7B34C9D922F37_mC6D1B158268FF9B97822FF9F5B37FB1723FEDA22_RuntimeMethod_var, (ES3Reader_t2780AF8AA61DA2A817115CEF8612AC0E494D03C9 *)L_55, (ES3Type_t8FBECB7AE75168648B9524E0C2A38DAD4555421D *)L_56);
		TrailModule_set_enabled_mFC8451DDDF40CCBB3E32A4B30A001115F6346894((TrailModule_t95D15372971E64A1977B7587ABAA87B1A31EF5C8 *)(TrailModule_t95D15372971E64A1977B7587ABAA87B1A31EF5C8 *)(&V_0), (bool)L_57, /*hidden argument*/NULL);
		// break;
		goto IL_038e;
	}

IL_0260:
	{
		// instance.ratio = reader.Read<System.Single>(ES3Type_float.Instance);
		ES3Reader_t2780AF8AA61DA2A817115CEF8612AC0E494D03C9 * L_58 = ___reader0;
		IL2CPP_RUNTIME_CLASS_INIT(ES3Type_float_tF86B773C86731BD9AD79448B860BBB178FE77644_il2cpp_TypeInfo_var);
		ES3Type_t8FBECB7AE75168648B9524E0C2A38DAD4555421D * L_59 = ((ES3Type_float_tF86B773C86731BD9AD79448B860BBB178FE77644_StaticFields*)il2cpp_codegen_static_fields_for(ES3Type_float_tF86B773C86731BD9AD79448B860BBB178FE77644_il2cpp_TypeInfo_var))->get_Instance_12();
		NullCheck((ES3Reader_t2780AF8AA61DA2A817115CEF8612AC0E494D03C9 *)L_58);
		float L_60;
		L_60 = GenericVirtFuncInvoker1< float, ES3Type_t8FBECB7AE75168648B9524E0C2A38DAD4555421D * >::Invoke(ES3Reader_Read_TisSingle_tE07797BA3C98D4CA9B5A19413C19A76688AB899E_m4A0416374498BDA042B8EB21E49B72326D6CE5F4_RuntimeMethod_var, (ES3Reader_t2780AF8AA61DA2A817115CEF8612AC0E494D03C9 *)L_58, (ES3Type_t8FBECB7AE75168648B9524E0C2A38DAD4555421D *)L_59);
		TrailModule_set_ratio_m34E63B34E7B0E8D037AD45532B2E2D5BD0750189((TrailModule_t95D15372971E64A1977B7587ABAA87B1A31EF5C8 *)(TrailModule_t95D15372971E64A1977B7587ABAA87B1A31EF5C8 *)(&V_0), (float)L_60, /*hidden argument*/NULL);
		// break;
		goto IL_038e;
	}

IL_0277:
	{
		// instance.lifetime = reader.Read<UnityEngine.ParticleSystem.MinMaxCurve>(ES3Type_MinMaxCurve.Instance);
		ES3Reader_t2780AF8AA61DA2A817115CEF8612AC0E494D03C9 * L_61 = ___reader0;
		IL2CPP_RUNTIME_CLASS_INIT(ES3Type_MinMaxCurve_tC5342BF0F8735B85CB5E16FDD4C6FACC8AFAD3B7_il2cpp_TypeInfo_var);
		ES3Type_t8FBECB7AE75168648B9524E0C2A38DAD4555421D * L_62 = ((ES3Type_MinMaxCurve_tC5342BF0F8735B85CB5E16FDD4C6FACC8AFAD3B7_StaticFields*)il2cpp_codegen_static_fields_for(ES3Type_MinMaxCurve_tC5342BF0F8735B85CB5E16FDD4C6FACC8AFAD3B7_il2cpp_TypeInfo_var))->get_Instance_12();
		NullCheck((ES3Reader_t2780AF8AA61DA2A817115CEF8612AC0E494D03C9 *)L_61);
		MinMaxCurve_tF036239442AB2D438B1EDABEBC785426871084CD  L_63;
		L_63 = GenericVirtFuncInvoker1< MinMaxCurve_tF036239442AB2D438B1EDABEBC785426871084CD , ES3Type_t8FBECB7AE75168648B9524E0C2A38DAD4555421D * >::Invoke(ES3Reader_Read_TisMinMaxCurve_tF036239442AB2D438B1EDABEBC785426871084CD_mD285150CBFB52440643BBECB5ADF4EE8DE940535_RuntimeMethod_var, (ES3Reader_t2780AF8AA61DA2A817115CEF8612AC0E494D03C9 *)L_61, (ES3Type_t8FBECB7AE75168648B9524E0C2A38DAD4555421D *)L_62);
		TrailModule_set_lifetime_m57C898C42B9F18F5A0E88AAA7B10276CC158C39D((TrailModule_t95D15372971E64A1977B7587ABAA87B1A31EF5C8 *)(TrailModule_t95D15372971E64A1977B7587ABAA87B1A31EF5C8 *)(&V_0), (MinMaxCurve_tF036239442AB2D438B1EDABEBC785426871084CD )L_63, /*hidden argument*/NULL);
		// break;
		goto IL_038e;
	}

IL_028e:
	{
		// instance.lifetimeMultiplier = reader.Read<System.Single>(ES3Type_float.Instance);
		ES3Reader_t2780AF8AA61DA2A817115CEF8612AC0E494D03C9 * L_64 = ___reader0;
		IL2CPP_RUNTIME_CLASS_INIT(ES3Type_float_tF86B773C86731BD9AD79448B860BBB178FE77644_il2cpp_TypeInfo_var);
		ES3Type_t8FBECB7AE75168648B9524E0C2A38DAD4555421D * L_65 = ((ES3Type_float_tF86B773C86731BD9AD79448B860BBB178FE77644_StaticFields*)il2cpp_codegen_static_fields_for(ES3Type_float_tF86B773C86731BD9AD79448B860BBB178FE77644_il2cpp_TypeInfo_var))->get_Instance_12();
		NullCheck((ES3Reader_t2780AF8AA61DA2A817115CEF8612AC0E494D03C9 *)L_64);
		float L_66;
		L_66 = GenericVirtFuncInvoker1< float, ES3Type_t8FBECB7AE75168648B9524E0C2A38DAD4555421D * >::Invoke(ES3Reader_Read_TisSingle_tE07797BA3C98D4CA9B5A19413C19A76688AB899E_m4A0416374498BDA042B8EB21E49B72326D6CE5F4_RuntimeMethod_var, (ES3Reader_t2780AF8AA61DA2A817115CEF8612AC0E494D03C9 *)L_64, (ES3Type_t8FBECB7AE75168648B9524E0C2A38DAD4555421D *)L_65);
		TrailModule_set_lifetimeMultiplier_m23F95D65EE8C82152AE1CF2E41531EC2789A866B((TrailModule_t95D15372971E64A1977B7587ABAA87B1A31EF5C8 *)(TrailModule_t95D15372971E64A1977B7587ABAA87B1A31EF5C8 *)(&V_0), (float)L_66, /*hidden argument*/NULL);
		// break;
		goto IL_038e;
	}

IL_02a5:
	{
		// instance.minVertexDistance = reader.Read<System.Single>(ES3Type_float.Instance);
		ES3Reader_t2780AF8AA61DA2A817115CEF8612AC0E494D03C9 * L_67 = ___reader0;
		IL2CPP_RUNTIME_CLASS_INIT(ES3Type_float_tF86B773C86731BD9AD79448B860BBB178FE77644_il2cpp_TypeInfo_var);
		ES3Type_t8FBECB7AE75168648B9524E0C2A38DAD4555421D * L_68 = ((ES3Type_float_tF86B773C86731BD9AD79448B860BBB178FE77644_StaticFields*)il2cpp_codegen_static_fields_for(ES3Type_float_tF86B773C86731BD9AD79448B860BBB178FE77644_il2cpp_TypeInfo_var))->get_Instance_12();
		NullCheck((ES3Reader_t2780AF8AA61DA2A817115CEF8612AC0E494D03C9 *)L_67);
		float L_69;
		L_69 = GenericVirtFuncInvoker1< float, ES3Type_t8FBECB7AE75168648B9524E0C2A38DAD4555421D * >::Invoke(ES3Reader_Read_TisSingle_tE07797BA3C98D4CA9B5A19413C19A76688AB899E_m4A0416374498BDA042B8EB21E49B72326D6CE5F4_RuntimeMethod_var, (ES3Reader_t2780AF8AA61DA2A817115CEF8612AC0E494D03C9 *)L_67, (ES3Type_t8FBECB7AE75168648B9524E0C2A38DAD4555421D *)L_68);
		TrailModule_set_minVertexDistance_mF7C29F88FBF540CE4987F4CF9B141C624808FBC5((TrailModule_t95D15372971E64A1977B7587ABAA87B1A31EF5C8 *)(TrailModule_t95D15372971E64A1977B7587ABAA87B1A31EF5C8 *)(&V_0), (float)L_69, /*hidden argument*/NULL);
		// break;
		goto IL_038e;
	}

IL_02bc:
	{
		// instance.textureMode = reader.Read<UnityEngine.ParticleSystemTrailTextureMode>();
		ES3Reader_t2780AF8AA61DA2A817115CEF8612AC0E494D03C9 * L_70 = ___reader0;
		NullCheck((ES3Reader_t2780AF8AA61DA2A817115CEF8612AC0E494D03C9 *)L_70);
		int32_t L_71;
		L_71 = GenericVirtFuncInvoker0< int32_t >::Invoke(ES3Reader_Read_TisParticleSystemTrailTextureMode_tF3259187CA4D0A61EDB3A40E63CBF6C42641CE9F_m055DB1212E8BC34F385DF7D302F16241554E9730_RuntimeMethod_var, (ES3Reader_t2780AF8AA61DA2A817115CEF8612AC0E494D03C9 *)L_70);
		TrailModule_set_textureMode_mC1F8AE0D2965FC47BDBFF4F53E0673D5FB58CF28((TrailModule_t95D15372971E64A1977B7587ABAA87B1A31EF5C8 *)(TrailModule_t95D15372971E64A1977B7587ABAA87B1A31EF5C8 *)(&V_0), (int32_t)L_71, /*hidden argument*/NULL);
		// break;
		goto IL_038e;
	}

IL_02ce:
	{
		// instance.worldSpace = reader.Read<System.Boolean>(ES3Type_bool.Instance);
		ES3Reader_t2780AF8AA61DA2A817115CEF8612AC0E494D03C9 * L_72 = ___reader0;
		IL2CPP_RUNTIME_CLASS_INIT(ES3Type_bool_t8F309F7B9CC735FF1DEE68081B6E3CAB367745F4_il2cpp_TypeInfo_var);
		ES3Type_t8FBECB7AE75168648B9524E0C2A38DAD4555421D * L_73 = ((ES3Type_bool_t8F309F7B9CC735FF1DEE68081B6E3CAB367745F4_StaticFields*)il2cpp_codegen_static_fields_for(ES3Type_bool_t8F309F7B9CC735FF1DEE68081B6E3CAB367745F4_il2cpp_TypeInfo_var))->get_Instance_12();
		NullCheck((ES3Reader_t2780AF8AA61DA2A817115CEF8612AC0E494D03C9 *)L_72);
		bool L_74;
		L_74 = GenericVirtFuncInvoker1< bool, ES3Type_t8FBECB7AE75168648B9524E0C2A38DAD4555421D * >::Invoke(ES3Reader_Read_TisBoolean_t07D1E3F34E4813023D64F584DFF7B34C9D922F37_mC6D1B158268FF9B97822FF9F5B37FB1723FEDA22_RuntimeMethod_var, (ES3Reader_t2780AF8AA61DA2A817115CEF8612AC0E494D03C9 *)L_72, (ES3Type_t8FBECB7AE75168648B9524E0C2A38DAD4555421D *)L_73);
		TrailModule_set_worldSpace_m42A63AF4A96F24A621A29A0F35240195F0E56B1A((TrailModule_t95D15372971E64A1977B7587ABAA87B1A31EF5C8 *)(TrailModule_t95D15372971E64A1977B7587ABAA87B1A31EF5C8 *)(&V_0), (bool)L_74, /*hidden argument*/NULL);
		// break;
		goto IL_038e;
	}

IL_02e5:
	{
		// instance.dieWithParticles = reader.Read<System.Boolean>(ES3Type_bool.Instance);
		ES3Reader_t2780AF8AA61DA2A817115CEF8612AC0E494D03C9 * L_75 = ___reader0;
		IL2CPP_RUNTIME_CLASS_INIT(ES3Type_bool_t8F309F7B9CC735FF1DEE68081B6E3CAB367745F4_il2cpp_TypeInfo_var);
		ES3Type_t8FBECB7AE75168648B9524E0C2A38DAD4555421D * L_76 = ((ES3Type_bool_t8F309F7B9CC735FF1DEE68081B6E3CAB367745F4_StaticFields*)il2cpp_codegen_static_fields_for(ES3Type_bool_t8F309F7B9CC735FF1DEE68081B6E3CAB367745F4_il2cpp_TypeInfo_var))->get_Instance_12();
		NullCheck((ES3Reader_t2780AF8AA61DA2A817115CEF8612AC0E494D03C9 *)L_75);
		bool L_77;
		L_77 = GenericVirtFuncInvoker1< bool, ES3Type_t8FBECB7AE75168648B9524E0C2A38DAD4555421D * >::Invoke(ES3Reader_Read_TisBoolean_t07D1E3F34E4813023D64F584DFF7B34C9D922F37_mC6D1B158268FF9B97822FF9F5B37FB1723FEDA22_RuntimeMethod_var, (ES3Reader_t2780AF8AA61DA2A817115CEF8612AC0E494D03C9 *)L_75, (ES3Type_t8FBECB7AE75168648B9524E0C2A38DAD4555421D *)L_76);
		TrailModule_set_dieWithParticles_mB7C4E8DC2F908FDF6D57A77B54B821E360D8DA99((TrailModule_t95D15372971E64A1977B7587ABAA87B1A31EF5C8 *)(TrailModule_t95D15372971E64A1977B7587ABAA87B1A31EF5C8 *)(&V_0), (bool)L_77, /*hidden argument*/NULL);
		// break;
		goto IL_038e;
	}

IL_02fc:
	{
		// instance.sizeAffectsWidth = reader.Read<System.Boolean>(ES3Type_bool.Instance);
		ES3Reader_t2780AF8AA61DA2A817115CEF8612AC0E494D03C9 * L_78 = ___reader0;
		IL2CPP_RUNTIME_CLASS_INIT(ES3Type_bool_t8F309F7B9CC735FF1DEE68081B6E3CAB367745F4_il2cpp_TypeInfo_var);
		ES3Type_t8FBECB7AE75168648B9524E0C2A38DAD4555421D * L_79 = ((ES3Type_bool_t8F309F7B9CC735FF1DEE68081B6E3CAB367745F4_StaticFields*)il2cpp_codegen_static_fields_for(ES3Type_bool_t8F309F7B9CC735FF1DEE68081B6E3CAB367745F4_il2cpp_TypeInfo_var))->get_Instance_12();
		NullCheck((ES3Reader_t2780AF8AA61DA2A817115CEF8612AC0E494D03C9 *)L_78);
		bool L_80;
		L_80 = GenericVirtFuncInvoker1< bool, ES3Type_t8FBECB7AE75168648B9524E0C2A38DAD4555421D * >::Invoke(ES3Reader_Read_TisBoolean_t07D1E3F34E4813023D64F584DFF7B34C9D922F37_mC6D1B158268FF9B97822FF9F5B37FB1723FEDA22_RuntimeMethod_var, (ES3Reader_t2780AF8AA61DA2A817115CEF8612AC0E494D03C9 *)L_78, (ES3Type_t8FBECB7AE75168648B9524E0C2A38DAD4555421D *)L_79);
		TrailModule_set_sizeAffectsWidth_m3517856E39080DA69B447499C8846D2491B0ABF0((TrailModule_t95D15372971E64A1977B7587ABAA87B1A31EF5C8 *)(TrailModule_t95D15372971E64A1977B7587ABAA87B1A31EF5C8 *)(&V_0), (bool)L_80, /*hidden argument*/NULL);
		// break;
		goto IL_038e;
	}

IL_0310:
	{
		// instance.sizeAffectsLifetime = reader.Read<System.Boolean>(ES3Type_bool.Instance);
		ES3Reader_t2780AF8AA61DA2A817115CEF8612AC0E494D03C9 * L_81 = ___reader0;
		IL2CPP_RUNTIME_CLASS_INIT(ES3Type_bool_t8F309F7B9CC735FF1DEE68081B6E3CAB367745F4_il2cpp_TypeInfo_var);
		ES3Type_t8FBECB7AE75168648B9524E0C2A38DAD4555421D * L_82 = ((ES3Type_bool_t8F309F7B9CC735FF1DEE68081B6E3CAB367745F4_StaticFields*)il2cpp_codegen_static_fields_for(ES3Type_bool_t8F309F7B9CC735FF1DEE68081B6E3CAB367745F4_il2cpp_TypeInfo_var))->get_Instance_12();
		NullCheck((ES3Reader_t2780AF8AA61DA2A817115CEF8612AC0E494D03C9 *)L_81);
		bool L_83;
		L_83 = GenericVirtFuncInvoker1< bool, ES3Type_t8FBECB7AE75168648B9524E0C2A38DAD4555421D * >::Invoke(ES3Reader_Read_TisBoolean_t07D1E3F34E4813023D64F584DFF7B34C9D922F37_mC6D1B158268FF9B97822FF9F5B37FB1723FEDA22_RuntimeMethod_var, (ES3Reader_t2780AF8AA61DA2A817115CEF8612AC0E494D03C9 *)L_81, (ES3Type_t8FBECB7AE75168648B9524E0C2A38DAD4555421D *)L_82);
		TrailModule_set_sizeAffectsLifetime_m98BF4A6594193D824B52D88371CF963ACBA388FD((TrailModule_t95D15372971E64A1977B7587ABAA87B1A31EF5C8 *)(TrailModule_t95D15372971E64A1977B7587ABAA87B1A31EF5C8 *)(&V_0), (bool)L_83, /*hidden argument*/NULL);
		// break;
		goto IL_038e;
	}

IL_0324:
	{
		// instance.inheritParticleColor = reader.Read<System.Boolean>(ES3Type_bool.Instance);
		ES3Reader_t2780AF8AA61DA2A817115CEF8612AC0E494D03C9 * L_84 = ___reader0;
		IL2CPP_RUNTIME_CLASS_INIT(ES3Type_bool_t8F309F7B9CC735FF1DEE68081B6E3CAB367745F4_il2cpp_TypeInfo_var);
		ES3Type_t8FBECB7AE75168648B9524E0C2A38DAD4555421D * L_85 = ((ES3Type_bool_t8F309F7B9CC735FF1DEE68081B6E3CAB367745F4_StaticFields*)il2cpp_codegen_static_fields_for(ES3Type_bool_t8F309F7B9CC735FF1DEE68081B6E3CAB367745F4_il2cpp_TypeInfo_var))->get_Instance_12();
		NullCheck((ES3Reader_t2780AF8AA61DA2A817115CEF8612AC0E494D03C9 *)L_84);
		bool L_86;
		L_86 = GenericVirtFuncInvoker1< bool, ES3Type_t8FBECB7AE75168648B9524E0C2A38DAD4555421D * >::Invoke(ES3Reader_Read_TisBoolean_t07D1E3F34E4813023D64F584DFF7B34C9D922F37_mC6D1B158268FF9B97822FF9F5B37FB1723FEDA22_RuntimeMethod_var, (ES3Reader_t2780AF8AA61DA2A817115CEF8612AC0E494D03C9 *)L_84, (ES3Type_t8FBECB7AE75168648B9524E0C2A38DAD4555421D *)L_85);
		TrailModule_set_inheritParticleColor_mCD83E87B5E00F2BFFBE08AD2D1D68606283A4FEE((TrailModule_t95D15372971E64A1977B7587ABAA87B1A31EF5C8 *)(TrailModule_t95D15372971E64A1977B7587ABAA87B1A31EF5C8 *)(&V_0), (bool)L_86, /*hidden argument*/NULL);
		// break;
		goto IL_038e;
	}

IL_0338:
	{
		// instance.colorOverLifetime = reader.Read<UnityEngine.ParticleSystem.MinMaxGradient>(ES3Type_MinMaxGradient.Instance);
		ES3Reader_t2780AF8AA61DA2A817115CEF8612AC0E494D03C9 * L_87 = ___reader0;
		IL2CPP_RUNTIME_CLASS_INIT(ES3Type_MinMaxGradient_t5DD353D60E95642AB39D1C97C6FD6DD1B067D3CF_il2cpp_TypeInfo_var);
		ES3Type_t8FBECB7AE75168648B9524E0C2A38DAD4555421D * L_88 = ((ES3Type_MinMaxGradient_t5DD353D60E95642AB39D1C97C6FD6DD1B067D3CF_StaticFields*)il2cpp_codegen_static_fields_for(ES3Type_MinMaxGradient_t5DD353D60E95642AB39D1C97C6FD6DD1B067D3CF_il2cpp_TypeInfo_var))->get_Instance_12();
		NullCheck((ES3Reader_t2780AF8AA61DA2A817115CEF8612AC0E494D03C9 *)L_87);
		MinMaxGradient_tF4530B26F29D9635D670A33B9EE581EAC48C12B7  L_89;
		L_89 = GenericVirtFuncInvoker1< MinMaxGradient_tF4530B26F29D9635D670A33B9EE581EAC48C12B7 , ES3Type_t8FBECB7AE75168648B9524E0C2A38DAD4555421D * >::Invoke(ES3Reader_Read_TisMinMaxGradient_tF4530B26F29D9635D670A33B9EE581EAC48C12B7_m6A3DD8CBBAC5D32B838B6C4399009AB8AA512ACC_RuntimeMethod_var, (ES3Reader_t2780AF8AA61DA2A817115CEF8612AC0E494D03C9 *)L_87, (ES3Type_t8FBECB7AE75168648B9524E0C2A38DAD4555421D *)L_88);
		TrailModule_set_colorOverLifetime_mCD56BD4B75D3A3947069BA1B93FEC78AAE08DF27((TrailModule_t95D15372971E64A1977B7587ABAA87B1A31EF5C8 *)(TrailModule_t95D15372971E64A1977B7587ABAA87B1A31EF5C8 *)(&V_0), (MinMaxGradient_tF4530B26F29D9635D670A33B9EE581EAC48C12B7 )L_89, /*hidden argument*/NULL);
		// break;
		goto IL_038e;
	}

IL_034c:
	{
		// instance.widthOverTrail = reader.Read<UnityEngine.ParticleSystem.MinMaxCurve>(ES3Type_MinMaxCurve.Instance);
		ES3Reader_t2780AF8AA61DA2A817115CEF8612AC0E494D03C9 * L_90 = ___reader0;
		IL2CPP_RUNTIME_CLASS_INIT(ES3Type_MinMaxCurve_tC5342BF0F8735B85CB5E16FDD4C6FACC8AFAD3B7_il2cpp_TypeInfo_var);
		ES3Type_t8FBECB7AE75168648B9524E0C2A38DAD4555421D * L_91 = ((ES3Type_MinMaxCurve_tC5342BF0F8735B85CB5E16FDD4C6FACC8AFAD3B7_StaticFields*)il2cpp_codegen_static_fields_for(ES3Type_MinMaxCurve_tC5342BF0F8735B85CB5E16FDD4C6FACC8AFAD3B7_il2cpp_TypeInfo_var))->get_Instance_12();
		NullCheck((ES3Reader_t2780AF8AA61DA2A817115CEF8612AC0E494D03C9 *)L_90);
		MinMaxCurve_tF036239442AB2D438B1EDABEBC785426871084CD  L_92;
		L_92 = GenericVirtFuncInvoker1< MinMaxCurve_tF036239442AB2D438B1EDABEBC785426871084CD , ES3Type_t8FBECB7AE75168648B9524E0C2A38DAD4555421D * >::Invoke(ES3Reader_Read_TisMinMaxCurve_tF036239442AB2D438B1EDABEBC785426871084CD_mD285150CBFB52440643BBECB5ADF4EE8DE940535_RuntimeMethod_var, (ES3Reader_t2780AF8AA61DA2A817115CEF8612AC0E494D03C9 *)L_90, (ES3Type_t8FBECB7AE75168648B9524E0C2A38DAD4555421D *)L_91);
		TrailModule_set_widthOverTrail_m6C0A896EBFDED7CE46344B3A0B04212934F30DE1((TrailModule_t95D15372971E64A1977B7587ABAA87B1A31EF5C8 *)(TrailModule_t95D15372971E64A1977B7587ABAA87B1A31EF5C8 *)(&V_0), (MinMaxCurve_tF036239442AB2D438B1EDABEBC785426871084CD )L_92, /*hidden argument*/NULL);
		// break;
		goto IL_038e;
	}

IL_0360:
	{
		// instance.widthOverTrailMultiplier = reader.Read<System.Single>(ES3Type_float.Instance);
		ES3Reader_t2780AF8AA61DA2A817115CEF8612AC0E494D03C9 * L_93 = ___reader0;
		IL2CPP_RUNTIME_CLASS_INIT(ES3Type_float_tF86B773C86731BD9AD79448B860BBB178FE77644_il2cpp_TypeInfo_var);
		ES3Type_t8FBECB7AE75168648B9524E0C2A38DAD4555421D * L_94 = ((ES3Type_float_tF86B773C86731BD9AD79448B860BBB178FE77644_StaticFields*)il2cpp_codegen_static_fields_for(ES3Type_float_tF86B773C86731BD9AD79448B860BBB178FE77644_il2cpp_TypeInfo_var))->get_Instance_12();
		NullCheck((ES3Reader_t2780AF8AA61DA2A817115CEF8612AC0E494D03C9 *)L_93);
		float L_95;
		L_95 = GenericVirtFuncInvoker1< float, ES3Type_t8FBECB7AE75168648B9524E0C2A38DAD4555421D * >::Invoke(ES3Reader_Read_TisSingle_tE07797BA3C98D4CA9B5A19413C19A76688AB899E_m4A0416374498BDA042B8EB21E49B72326D6CE5F4_RuntimeMethod_var, (ES3Reader_t2780AF8AA61DA2A817115CEF8612AC0E494D03C9 *)L_93, (ES3Type_t8FBECB7AE75168648B9524E0C2A38DAD4555421D *)L_94);
		TrailModule_set_widthOverTrailMultiplier_m6A7EA2856CF30B710CCB528EA3EBFD1799C19BD4((TrailModule_t95D15372971E64A1977B7587ABAA87B1A31EF5C8 *)(TrailModule_t95D15372971E64A1977B7587ABAA87B1A31EF5C8 *)(&V_0), (float)L_95, /*hidden argument*/NULL);
		// break;
		goto IL_038e;
	}

IL_0374:
	{
		// instance.colorOverTrail = reader.Read<UnityEngine.ParticleSystem.MinMaxGradient>(ES3Type_MinMaxGradient.Instance);
		ES3Reader_t2780AF8AA61DA2A817115CEF8612AC0E494D03C9 * L_96 = ___reader0;
		IL2CPP_RUNTIME_CLASS_INIT(ES3Type_MinMaxGradient_t5DD353D60E95642AB39D1C97C6FD6DD1B067D3CF_il2cpp_TypeInfo_var);
		ES3Type_t8FBECB7AE75168648B9524E0C2A38DAD4555421D * L_97 = ((ES3Type_MinMaxGradient_t5DD353D60E95642AB39D1C97C6FD6DD1B067D3CF_StaticFields*)il2cpp_codegen_static_fields_for(ES3Type_MinMaxGradient_t5DD353D60E95642AB39D1C97C6FD6DD1B067D3CF_il2cpp_TypeInfo_var))->get_Instance_12();
		NullCheck((ES3Reader_t2780AF8AA61DA2A817115CEF8612AC0E494D03C9 *)L_96);
		MinMaxGradient_tF4530B26F29D9635D670A33B9EE581EAC48C12B7  L_98;
		L_98 = GenericVirtFuncInvoker1< MinMaxGradient_tF4530B26F29D9635D670A33B9EE581EAC48C12B7 , ES3Type_t8FBECB7AE75168648B9524E0C2A38DAD4555421D * >::Invoke(ES3Reader_Read_TisMinMaxGradient_tF4530B26F29D9635D670A33B9EE581EAC48C12B7_m6A3DD8CBBAC5D32B838B6C4399009AB8AA512ACC_RuntimeMethod_var, (ES3Reader_t2780AF8AA61DA2A817115CEF8612AC0E494D03C9 *)L_96, (ES3Type_t8FBECB7AE75168648B9524E0C2A38DAD4555421D *)L_97);
		TrailModule_set_colorOverTrail_m8440C6574C8310292B93D70EA4FE3EE8C40DF8DB((TrailModule_t95D15372971E64A1977B7587ABAA87B1A31EF5C8 *)(TrailModule_t95D15372971E64A1977B7587ABAA87B1A31EF5C8 *)(&V_0), (MinMaxGradient_tF4530B26F29D9635D670A33B9EE581EAC48C12B7 )L_98, /*hidden argument*/NULL);
		// break;
		goto IL_038e;
	}

IL_0388:
	{
		// reader.Skip();
		ES3Reader_t2780AF8AA61DA2A817115CEF8612AC0E494D03C9 * L_99 = ___reader0;
		NullCheck((ES3Reader_t2780AF8AA61DA2A817115CEF8612AC0E494D03C9 *)L_99);
		VirtActionInvoker0::Invoke(41 /* System.Void ES3Reader::Skip() */, (ES3Reader_t2780AF8AA61DA2A817115CEF8612AC0E494D03C9 *)L_99);
	}

IL_038e:
	{
		// while((propertyName = reader.ReadPropertyName()) != null)
		ES3Reader_t2780AF8AA61DA2A817115CEF8612AC0E494D03C9 * L_100 = ___reader0;
		NullCheck((ES3Reader_t2780AF8AA61DA2A817115CEF8612AC0E494D03C9 *)L_100);
		String_t* L_101;
		L_101 = VirtFuncInvoker0< String_t* >::Invoke(21 /* System.String ES3Reader::ReadPropertyName() */, (ES3Reader_t2780AF8AA61DA2A817115CEF8612AC0E494D03C9 *)L_100);
		String_t* L_102 = (String_t*)L_101;
		V_1 = (String_t*)L_102;
		if (L_102)
		{
			goto IL_000c;
		}
	}
	{
		// }
		return;
	}
}
// System.Void ES3Types.ES3Type_TrailModule::ReadInto<System.Object>(ES3Reader,System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ES3Type_TrailModule_ReadInto_TisRuntimeObject_m114676EEC0EA17A0AABDDC06257F6FDB2996B21C_gshared (ES3Type_TrailModule_tC773F73EC0443516DD128FF2B5AE010809742462 * __this, ES3Reader_t2780AF8AA61DA2A817115CEF8612AC0E494D03C9 * ___reader0, RuntimeObject * ___obj1, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ES3Reader_Read_TisBoolean_t07D1E3F34E4813023D64F584DFF7B34C9D922F37_mC6D1B158268FF9B97822FF9F5B37FB1723FEDA22_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ES3Reader_Read_TisMinMaxCurve_tF036239442AB2D438B1EDABEBC785426871084CD_mD285150CBFB52440643BBECB5ADF4EE8DE940535_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ES3Reader_Read_TisMinMaxGradient_tF4530B26F29D9635D670A33B9EE581EAC48C12B7_m6A3DD8CBBAC5D32B838B6C4399009AB8AA512ACC_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ES3Reader_Read_TisParticleSystemTrailTextureMode_tF3259187CA4D0A61EDB3A40E63CBF6C42641CE9F_m055DB1212E8BC34F385DF7D302F16241554E9730_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ES3Reader_Read_TisSingle_tE07797BA3C98D4CA9B5A19413C19A76688AB899E_m4A0416374498BDA042B8EB21E49B72326D6CE5F4_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ES3Type_MinMaxCurve_tC5342BF0F8735B85CB5E16FDD4C6FACC8AFAD3B7_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ES3Type_MinMaxGradient_t5DD353D60E95642AB39D1C97C6FD6DD1B067D3CF_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ES3Type_bool_t8F309F7B9CC735FF1DEE68081B6E3CAB367745F4_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ES3Type_float_tF86B773C86731BD9AD79448B860BBB178FE77644_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&TrailModule_t95D15372971E64A1977B7587ABAA87B1A31EF5C8_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral1D87A56AE67B2CD49CAE6E942C2FB7AD98925C00);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral354281948B6269615E32D856CF85B6F456724DAA);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral4221314F268D184F46688D45C85446821F1F1BC3);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral47C47DD09640803AD8016748EAE1F04DD1D41119);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral5C86338F177203D001C41D9C348A83D1338CC7D0);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral60126327537B7B8E6EE33C43FE0C5CA8BCC3A06A);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral87F70660D62DE5FC257FBADE9DA4EC9188597DE5);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralA967787586EC9E5A17A9C55E2002AB73A5E21A0A);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralADAEB0839588196B349BDB6CF33AFA3E0736360B);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralBE2893848F9FC647C2288DA6581A1522E9695182);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralBF540D6548854CC21630064FBA5390C9409C86F0);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralC580B374AA991574F91DFC86C068E7FAD661A3A4);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralE049DB547285CFCE1CB9A95934B6B6DCE2D219EC);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralF9D225733E1D10F9344C755C4A9C0870CD1DE97B);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralFE5F89F63E2381500F62A7CBD6954563BE44562F);
		s_Il2CppMethodInitialized = true;
	}
	TrailModule_t95D15372971E64A1977B7587ABAA87B1A31EF5C8  V_0;
	memset((&V_0), 0, sizeof(V_0));
	String_t* V_1 = NULL;
	uint32_t V_2 = 0;
	{
		// var instance = (UnityEngine.ParticleSystem.TrailModule)obj;
		RuntimeObject * L_0 = ___obj1;
		V_0 = (TrailModule_t95D15372971E64A1977B7587ABAA87B1A31EF5C8 )((*(TrailModule_t95D15372971E64A1977B7587ABAA87B1A31EF5C8 *)((TrailModule_t95D15372971E64A1977B7587ABAA87B1A31EF5C8 *)UnBox(L_0, TrailModule_t95D15372971E64A1977B7587ABAA87B1A31EF5C8_il2cpp_TypeInfo_var))));
		goto IL_038e;
	}

IL_000c:
	{
		String_t* L_1 = V_1;
		if (!L_1)
		{
			goto IL_0388;
		}
	}
	{
		String_t* L_2 = V_1;
		uint32_t L_3;
		L_3 = U3CPrivateImplementationDetailsU3E_ComputeStringHash_m3ADC1F612F9EE3DD518E6F0023A0DE0EE2B120A7((String_t*)L_2, /*hidden argument*/NULL);
		V_2 = (uint32_t)L_3;
		uint32_t L_4 = V_2;
		if ((!(((uint32_t)L_4) <= ((uint32_t)((int32_t)1376955374)))))
		{
			goto IL_008d;
		}
	}
	{
		uint32_t L_5 = V_2;
		if ((!(((uint32_t)L_5) <= ((uint32_t)((int32_t)494095910)))))
		{
			goto IL_004f;
		}
	}
	{
		uint32_t L_6 = V_2;
		if ((((int32_t)L_6) == ((int32_t)((int32_t)49525662))))
		{
			goto IL_010e;
		}
	}
	{
		uint32_t L_7 = V_2;
		if ((((int32_t)L_7) == ((int32_t)((int32_t)341298456))))
		{
			goto IL_021f;
		}
	}
	{
		uint32_t L_8 = V_2;
		if ((((int32_t)L_8) == ((int32_t)((int32_t)494095910))))
		{
			goto IL_0234;
		}
	}
	{
		goto IL_0388;
	}

IL_004f:
	{
		uint32_t L_9 = V_2;
		if ((!(((uint32_t)L_9) <= ((uint32_t)((int32_t)973733911)))))
		{
			goto IL_0072;
		}
	}
	{
		uint32_t L_10 = V_2;
		if ((((int32_t)L_10) == ((int32_t)((int32_t)559929418))))
		{
			goto IL_01b6;
		}
	}
	{
		uint32_t L_11 = V_2;
		if ((((int32_t)L_11) == ((int32_t)((int32_t)973733911))))
		{
			goto IL_0177;
		}
	}
	{
		goto IL_0388;
	}

IL_0072:
	{
		uint32_t L_12 = V_2;
		if ((((int32_t)L_12) == ((int32_t)((int32_t)1024708593))))
		{
			goto IL_014d;
		}
	}
	{
		uint32_t L_13 = V_2;
		if ((((int32_t)L_13) == ((int32_t)((int32_t)1376955374))))
		{
			goto IL_0138;
		}
	}
	{
		goto IL_0388;
	}

IL_008d:
	{
		uint32_t L_14 = V_2;
		if ((!(((uint32_t)L_14) <= ((uint32_t)((int32_t)-2100707162)))))
		{
			goto IL_00d3;
		}
	}
	{
		uint32_t L_15 = V_2;
		if ((!(((uint32_t)L_15) <= ((uint32_t)((int32_t)1975189197)))))
		{
			goto IL_00b8;
		}
	}
	{
		uint32_t L_16 = V_2;
		if ((((int32_t)L_16) == ((int32_t)((int32_t)1546474083))))
		{
			goto IL_020a;
		}
	}
	{
		uint32_t L_17 = V_2;
		if ((((int32_t)L_17) == ((int32_t)((int32_t)1975189197))))
		{
			goto IL_01cb;
		}
	}
	{
		goto IL_0388;
	}

IL_00b8:
	{
		uint32_t L_18 = V_2;
		if ((((int32_t)L_18) == ((int32_t)((int32_t)2053023684))))
		{
			goto IL_01a1;
		}
	}
	{
		uint32_t L_19 = V_2;
		if ((((int32_t)L_19) == ((int32_t)((int32_t)-2100707162))))
		{
			goto IL_0162;
		}
	}
	{
		goto IL_0388;
	}

IL_00d3:
	{
		uint32_t L_20 = V_2;
		if ((!(((uint32_t)L_20) <= ((uint32_t)((int32_t)-1319579393)))))
		{
			goto IL_00f6;
		}
	}
	{
		uint32_t L_21 = V_2;
		if ((((int32_t)L_21) == ((int32_t)((int32_t)-1562862963))))
		{
			goto IL_01e0;
		}
	}
	{
		uint32_t L_22 = V_2;
		if ((((int32_t)L_22) == ((int32_t)((int32_t)-1319579393))))
		{
			goto IL_018c;
		}
	}
	{
		goto IL_0388;
	}

IL_00f6:
	{
		uint32_t L_23 = V_2;
		if ((((int32_t)L_23) == ((int32_t)((int32_t)-1055777148))))
		{
			goto IL_0123;
		}
	}
	{
		uint32_t L_24 = V_2;
		if ((((int32_t)L_24) == ((int32_t)((int32_t)-413379935))))
		{
			goto IL_01f5;
		}
	}
	{
		goto IL_0388;
	}

IL_010e:
	{
		String_t* L_25 = V_1;
		bool L_26;
		L_26 = String_op_Equality_m50B3548E4AC232558190B0052877B290AA1D436A((String_t*)L_25, (String_t*)_stringLiteralF9D225733E1D10F9344C755C4A9C0870CD1DE97B, /*hidden argument*/NULL);
		if (L_26)
		{
			goto IL_0249;
		}
	}
	{
		goto IL_0388;
	}

IL_0123:
	{
		String_t* L_27 = V_1;
		bool L_28;
		L_28 = String_op_Equality_m50B3548E4AC232558190B0052877B290AA1D436A((String_t*)L_27, (String_t*)_stringLiteral60126327537B7B8E6EE33C43FE0C5CA8BCC3A06A, /*hidden argument*/NULL);
		if (L_28)
		{
			goto IL_0260;
		}
	}
	{
		goto IL_0388;
	}

IL_0138:
	{
		String_t* L_29 = V_1;
		bool L_30;
		L_30 = String_op_Equality_m50B3548E4AC232558190B0052877B290AA1D436A((String_t*)L_29, (String_t*)_stringLiteralBE2893848F9FC647C2288DA6581A1522E9695182, /*hidden argument*/NULL);
		if (L_30)
		{
			goto IL_0277;
		}
	}
	{
		goto IL_0388;
	}

IL_014d:
	{
		String_t* L_31 = V_1;
		bool L_32;
		L_32 = String_op_Equality_m50B3548E4AC232558190B0052877B290AA1D436A((String_t*)L_31, (String_t*)_stringLiteral4221314F268D184F46688D45C85446821F1F1BC3, /*hidden argument*/NULL);
		if (L_32)
		{
			goto IL_028e;
		}
	}
	{
		goto IL_0388;
	}

IL_0162:
	{
		String_t* L_33 = V_1;
		bool L_34;
		L_34 = String_op_Equality_m50B3548E4AC232558190B0052877B290AA1D436A((String_t*)L_33, (String_t*)_stringLiteral5C86338F177203D001C41D9C348A83D1338CC7D0, /*hidden argument*/NULL);
		if (L_34)
		{
			goto IL_02a5;
		}
	}
	{
		goto IL_0388;
	}

IL_0177:
	{
		String_t* L_35 = V_1;
		bool L_36;
		L_36 = String_op_Equality_m50B3548E4AC232558190B0052877B290AA1D436A((String_t*)L_35, (String_t*)_stringLiteralFE5F89F63E2381500F62A7CBD6954563BE44562F, /*hidden argument*/NULL);
		if (L_36)
		{
			goto IL_02bc;
		}
	}
	{
		goto IL_0388;
	}

IL_018c:
	{
		String_t* L_37 = V_1;
		bool L_38;
		L_38 = String_op_Equality_m50B3548E4AC232558190B0052877B290AA1D436A((String_t*)L_37, (String_t*)_stringLiteral87F70660D62DE5FC257FBADE9DA4EC9188597DE5, /*hidden argument*/NULL);
		if (L_38)
		{
			goto IL_02ce;
		}
	}
	{
		goto IL_0388;
	}

IL_01a1:
	{
		String_t* L_39 = V_1;
		bool L_40;
		L_40 = String_op_Equality_m50B3548E4AC232558190B0052877B290AA1D436A((String_t*)L_39, (String_t*)_stringLiteral354281948B6269615E32D856CF85B6F456724DAA, /*hidden argument*/NULL);
		if (L_40)
		{
			goto IL_02e5;
		}
	}
	{
		goto IL_0388;
	}

IL_01b6:
	{
		String_t* L_41 = V_1;
		bool L_42;
		L_42 = String_op_Equality_m50B3548E4AC232558190B0052877B290AA1D436A((String_t*)L_41, (String_t*)_stringLiteralADAEB0839588196B349BDB6CF33AFA3E0736360B, /*hidden argument*/NULL);
		if (L_42)
		{
			goto IL_02fc;
		}
	}
	{
		goto IL_0388;
	}

IL_01cb:
	{
		String_t* L_43 = V_1;
		bool L_44;
		L_44 = String_op_Equality_m50B3548E4AC232558190B0052877B290AA1D436A((String_t*)L_43, (String_t*)_stringLiteralC580B374AA991574F91DFC86C068E7FAD661A3A4, /*hidden argument*/NULL);
		if (L_44)
		{
			goto IL_0310;
		}
	}
	{
		goto IL_0388;
	}

IL_01e0:
	{
		String_t* L_45 = V_1;
		bool L_46;
		L_46 = String_op_Equality_m50B3548E4AC232558190B0052877B290AA1D436A((String_t*)L_45, (String_t*)_stringLiteralE049DB547285CFCE1CB9A95934B6B6DCE2D219EC, /*hidden argument*/NULL);
		if (L_46)
		{
			goto IL_0324;
		}
	}
	{
		goto IL_0388;
	}

IL_01f5:
	{
		String_t* L_47 = V_1;
		bool L_48;
		L_48 = String_op_Equality_m50B3548E4AC232558190B0052877B290AA1D436A((String_t*)L_47, (String_t*)_stringLiteralBF540D6548854CC21630064FBA5390C9409C86F0, /*hidden argument*/NULL);
		if (L_48)
		{
			goto IL_0338;
		}
	}
	{
		goto IL_0388;
	}

IL_020a:
	{
		String_t* L_49 = V_1;
		bool L_50;
		L_50 = String_op_Equality_m50B3548E4AC232558190B0052877B290AA1D436A((String_t*)L_49, (String_t*)_stringLiteral1D87A56AE67B2CD49CAE6E942C2FB7AD98925C00, /*hidden argument*/NULL);
		if (L_50)
		{
			goto IL_034c;
		}
	}
	{
		goto IL_0388;
	}

IL_021f:
	{
		String_t* L_51 = V_1;
		bool L_52;
		L_52 = String_op_Equality_m50B3548E4AC232558190B0052877B290AA1D436A((String_t*)L_51, (String_t*)_stringLiteralA967787586EC9E5A17A9C55E2002AB73A5E21A0A, /*hidden argument*/NULL);
		if (L_52)
		{
			goto IL_0360;
		}
	}
	{
		goto IL_0388;
	}

IL_0234:
	{
		String_t* L_53 = V_1;
		bool L_54;
		L_54 = String_op_Equality_m50B3548E4AC232558190B0052877B290AA1D436A((String_t*)L_53, (String_t*)_stringLiteral47C47DD09640803AD8016748EAE1F04DD1D41119, /*hidden argument*/NULL);
		if (L_54)
		{
			goto IL_0374;
		}
	}
	{
		goto IL_0388;
	}

IL_0249:
	{
		// instance.enabled = reader.Read<System.Boolean>(ES3Type_bool.Instance);
		ES3Reader_t2780AF8AA61DA2A817115CEF8612AC0E494D03C9 * L_55 = ___reader0;
		IL2CPP_RUNTIME_CLASS_INIT(ES3Type_bool_t8F309F7B9CC735FF1DEE68081B6E3CAB367745F4_il2cpp_TypeInfo_var);
		ES3Type_t8FBECB7AE75168648B9524E0C2A38DAD4555421D * L_56 = ((ES3Type_bool_t8F309F7B9CC735FF1DEE68081B6E3CAB367745F4_StaticFields*)il2cpp_codegen_static_fields_for(ES3Type_bool_t8F309F7B9CC735FF1DEE68081B6E3CAB367745F4_il2cpp_TypeInfo_var))->get_Instance_12();
		NullCheck((ES3Reader_t2780AF8AA61DA2A817115CEF8612AC0E494D03C9 *)L_55);
		bool L_57;
		L_57 = GenericVirtFuncInvoker1< bool, ES3Type_t8FBECB7AE75168648B9524E0C2A38DAD4555421D * >::Invoke(ES3Reader_Read_TisBoolean_t07D1E3F34E4813023D64F584DFF7B34C9D922F37_mC6D1B158268FF9B97822FF9F5B37FB1723FEDA22_RuntimeMethod_var, (ES3Reader_t2780AF8AA61DA2A817115CEF8612AC0E494D03C9 *)L_55, (ES3Type_t8FBECB7AE75168648B9524E0C2A38DAD4555421D *)L_56);
		TrailModule_set_enabled_mFC8451DDDF40CCBB3E32A4B30A001115F6346894((TrailModule_t95D15372971E64A1977B7587ABAA87B1A31EF5C8 *)(TrailModule_t95D15372971E64A1977B7587ABAA87B1A31EF5C8 *)(&V_0), (bool)L_57, /*hidden argument*/NULL);
		// break;
		goto IL_038e;
	}

IL_0260:
	{
		// instance.ratio = reader.Read<System.Single>(ES3Type_float.Instance);
		ES3Reader_t2780AF8AA61DA2A817115CEF8612AC0E494D03C9 * L_58 = ___reader0;
		IL2CPP_RUNTIME_CLASS_INIT(ES3Type_float_tF86B773C86731BD9AD79448B860BBB178FE77644_il2cpp_TypeInfo_var);
		ES3Type_t8FBECB7AE75168648B9524E0C2A38DAD4555421D * L_59 = ((ES3Type_float_tF86B773C86731BD9AD79448B860BBB178FE77644_StaticFields*)il2cpp_codegen_static_fields_for(ES3Type_float_tF86B773C86731BD9AD79448B860BBB178FE77644_il2cpp_TypeInfo_var))->get_Instance_12();
		NullCheck((ES3Reader_t2780AF8AA61DA2A817115CEF8612AC0E494D03C9 *)L_58);
		float L_60;
		L_60 = GenericVirtFuncInvoker1< float, ES3Type_t8FBECB7AE75168648B9524E0C2A38DAD4555421D * >::Invoke(ES3Reader_Read_TisSingle_tE07797BA3C98D4CA9B5A19413C19A76688AB899E_m4A0416374498BDA042B8EB21E49B72326D6CE5F4_RuntimeMethod_var, (ES3Reader_t2780AF8AA61DA2A817115CEF8612AC0E494D03C9 *)L_58, (ES3Type_t8FBECB7AE75168648B9524E0C2A38DAD4555421D *)L_59);
		TrailModule_set_ratio_m34E63B34E7B0E8D037AD45532B2E2D5BD0750189((TrailModule_t95D15372971E64A1977B7587ABAA87B1A31EF5C8 *)(TrailModule_t95D15372971E64A1977B7587ABAA87B1A31EF5C8 *)(&V_0), (float)L_60, /*hidden argument*/NULL);
		// break;
		goto IL_038e;
	}

IL_0277:
	{
		// instance.lifetime = reader.Read<UnityEngine.ParticleSystem.MinMaxCurve>(ES3Type_MinMaxCurve.Instance);
		ES3Reader_t2780AF8AA61DA2A817115CEF8612AC0E494D03C9 * L_61 = ___reader0;
		IL2CPP_RUNTIME_CLASS_INIT(ES3Type_MinMaxCurve_tC5342BF0F8735B85CB5E16FDD4C6FACC8AFAD3B7_il2cpp_TypeInfo_var);
		ES3Type_t8FBECB7AE75168648B9524E0C2A38DAD4555421D * L_62 = ((ES3Type_MinMaxCurve_tC5342BF0F8735B85CB5E16FDD4C6FACC8AFAD3B7_StaticFields*)il2cpp_codegen_static_fields_for(ES3Type_MinMaxCurve_tC5342BF0F8735B85CB5E16FDD4C6FACC8AFAD3B7_il2cpp_TypeInfo_var))->get_Instance_12();
		NullCheck((ES3Reader_t2780AF8AA61DA2A817115CEF8612AC0E494D03C9 *)L_61);
		MinMaxCurve_tF036239442AB2D438B1EDABEBC785426871084CD  L_63;
		L_63 = GenericVirtFuncInvoker1< MinMaxCurve_tF036239442AB2D438B1EDABEBC785426871084CD , ES3Type_t8FBECB7AE75168648B9524E0C2A38DAD4555421D * >::Invoke(ES3Reader_Read_TisMinMaxCurve_tF036239442AB2D438B1EDABEBC785426871084CD_mD285150CBFB52440643BBECB5ADF4EE8DE940535_RuntimeMethod_var, (ES3Reader_t2780AF8AA61DA2A817115CEF8612AC0E494D03C9 *)L_61, (ES3Type_t8FBECB7AE75168648B9524E0C2A38DAD4555421D *)L_62);
		TrailModule_set_lifetime_m57C898C42B9F18F5A0E88AAA7B10276CC158C39D((TrailModule_t95D15372971E64A1977B7587ABAA87B1A31EF5C8 *)(TrailModule_t95D15372971E64A1977B7587ABAA87B1A31EF5C8 *)(&V_0), (MinMaxCurve_tF036239442AB2D438B1EDABEBC785426871084CD )L_63, /*hidden argument*/NULL);
		// break;
		goto IL_038e;
	}

IL_028e:
	{
		// instance.lifetimeMultiplier = reader.Read<System.Single>(ES3Type_float.Instance);
		ES3Reader_t2780AF8AA61DA2A817115CEF8612AC0E494D03C9 * L_64 = ___reader0;
		IL2CPP_RUNTIME_CLASS_INIT(ES3Type_float_tF86B773C86731BD9AD79448B860BBB178FE77644_il2cpp_TypeInfo_var);
		ES3Type_t8FBECB7AE75168648B9524E0C2A38DAD4555421D * L_65 = ((ES3Type_float_tF86B773C86731BD9AD79448B860BBB178FE77644_StaticFields*)il2cpp_codegen_static_fields_for(ES3Type_float_tF86B773C86731BD9AD79448B860BBB178FE77644_il2cpp_TypeInfo_var))->get_Instance_12();
		NullCheck((ES3Reader_t2780AF8AA61DA2A817115CEF8612AC0E494D03C9 *)L_64);
		float L_66;
		L_66 = GenericVirtFuncInvoker1< float, ES3Type_t8FBECB7AE75168648B9524E0C2A38DAD4555421D * >::Invoke(ES3Reader_Read_TisSingle_tE07797BA3C98D4CA9B5A19413C19A76688AB899E_m4A0416374498BDA042B8EB21E49B72326D6CE5F4_RuntimeMethod_var, (ES3Reader_t2780AF8AA61DA2A817115CEF8612AC0E494D03C9 *)L_64, (ES3Type_t8FBECB7AE75168648B9524E0C2A38DAD4555421D *)L_65);
		TrailModule_set_lifetimeMultiplier_m23F95D65EE8C82152AE1CF2E41531EC2789A866B((TrailModule_t95D15372971E64A1977B7587ABAA87B1A31EF5C8 *)(TrailModule_t95D15372971E64A1977B7587ABAA87B1A31EF5C8 *)(&V_0), (float)L_66, /*hidden argument*/NULL);
		// break;
		goto IL_038e;
	}

IL_02a5:
	{
		// instance.minVertexDistance = reader.Read<System.Single>(ES3Type_float.Instance);
		ES3Reader_t2780AF8AA61DA2A817115CEF8612AC0E494D03C9 * L_67 = ___reader0;
		IL2CPP_RUNTIME_CLASS_INIT(ES3Type_float_tF86B773C86731BD9AD79448B860BBB178FE77644_il2cpp_TypeInfo_var);
		ES3Type_t8FBECB7AE75168648B9524E0C2A38DAD4555421D * L_68 = ((ES3Type_float_tF86B773C86731BD9AD79448B860BBB178FE77644_StaticFields*)il2cpp_codegen_static_fields_for(ES3Type_float_tF86B773C86731BD9AD79448B860BBB178FE77644_il2cpp_TypeInfo_var))->get_Instance_12();
		NullCheck((ES3Reader_t2780AF8AA61DA2A817115CEF8612AC0E494D03C9 *)L_67);
		float L_69;
		L_69 = GenericVirtFuncInvoker1< float, ES3Type_t8FBECB7AE75168648B9524E0C2A38DAD4555421D * >::Invoke(ES3Reader_Read_TisSingle_tE07797BA3C98D4CA9B5A19413C19A76688AB899E_m4A0416374498BDA042B8EB21E49B72326D6CE5F4_RuntimeMethod_var, (ES3Reader_t2780AF8AA61DA2A817115CEF8612AC0E494D03C9 *)L_67, (ES3Type_t8FBECB7AE75168648B9524E0C2A38DAD4555421D *)L_68);
		TrailModule_set_minVertexDistance_mF7C29F88FBF540CE4987F4CF9B141C624808FBC5((TrailModule_t95D15372971E64A1977B7587ABAA87B1A31EF5C8 *)(TrailModule_t95D15372971E64A1977B7587ABAA87B1A31EF5C8 *)(&V_0), (float)L_69, /*hidden argument*/NULL);
		// break;
		goto IL_038e;
	}

IL_02bc:
	{
		// instance.textureMode = reader.Read<UnityEngine.ParticleSystemTrailTextureMode>();
		ES3Reader_t2780AF8AA61DA2A817115CEF8612AC0E494D03C9 * L_70 = ___reader0;
		NullCheck((ES3Reader_t2780AF8AA61DA2A817115CEF8612AC0E494D03C9 *)L_70);
		int32_t L_71;
		L_71 = GenericVirtFuncInvoker0< int32_t >::Invoke(ES3Reader_Read_TisParticleSystemTrailTextureMode_tF3259187CA4D0A61EDB3A40E63CBF6C42641CE9F_m055DB1212E8BC34F385DF7D302F16241554E9730_RuntimeMethod_var, (ES3Reader_t2780AF8AA61DA2A817115CEF8612AC0E494D03C9 *)L_70);
		TrailModule_set_textureMode_mC1F8AE0D2965FC47BDBFF4F53E0673D5FB58CF28((TrailModule_t95D15372971E64A1977B7587ABAA87B1A31EF5C8 *)(TrailModule_t95D15372971E64A1977B7587ABAA87B1A31EF5C8 *)(&V_0), (int32_t)L_71, /*hidden argument*/NULL);
		// break;
		goto IL_038e;
	}

IL_02ce:
	{
		// instance.worldSpace = reader.Read<System.Boolean>(ES3Type_bool.Instance);
		ES3Reader_t2780AF8AA61DA2A817115CEF8612AC0E494D03C9 * L_72 = ___reader0;
		IL2CPP_RUNTIME_CLASS_INIT(ES3Type_bool_t8F309F7B9CC735FF1DEE68081B6E3CAB367745F4_il2cpp_TypeInfo_var);
		ES3Type_t8FBECB7AE75168648B9524E0C2A38DAD4555421D * L_73 = ((ES3Type_bool_t8F309F7B9CC735FF1DEE68081B6E3CAB367745F4_StaticFields*)il2cpp_codegen_static_fields_for(ES3Type_bool_t8F309F7B9CC735FF1DEE68081B6E3CAB367745F4_il2cpp_TypeInfo_var))->get_Instance_12();
		NullCheck((ES3Reader_t2780AF8AA61DA2A817115CEF8612AC0E494D03C9 *)L_72);
		bool L_74;
		L_74 = GenericVirtFuncInvoker1< bool, ES3Type_t8FBECB7AE75168648B9524E0C2A38DAD4555421D * >::Invoke(ES3Reader_Read_TisBoolean_t07D1E3F34E4813023D64F584DFF7B34C9D922F37_mC6D1B158268FF9B97822FF9F5B37FB1723FEDA22_RuntimeMethod_var, (ES3Reader_t2780AF8AA61DA2A817115CEF8612AC0E494D03C9 *)L_72, (ES3Type_t8FBECB7AE75168648B9524E0C2A38DAD4555421D *)L_73);
		TrailModule_set_worldSpace_m42A63AF4A96F24A621A29A0F35240195F0E56B1A((TrailModule_t95D15372971E64A1977B7587ABAA87B1A31EF5C8 *)(TrailModule_t95D15372971E64A1977B7587ABAA87B1A31EF5C8 *)(&V_0), (bool)L_74, /*hidden argument*/NULL);
		// break;
		goto IL_038e;
	}

IL_02e5:
	{
		// instance.dieWithParticles = reader.Read<System.Boolean>(ES3Type_bool.Instance);
		ES3Reader_t2780AF8AA61DA2A817115CEF8612AC0E494D03C9 * L_75 = ___reader0;
		IL2CPP_RUNTIME_CLASS_INIT(ES3Type_bool_t8F309F7B9CC735FF1DEE68081B6E3CAB367745F4_il2cpp_TypeInfo_var);
		ES3Type_t8FBECB7AE75168648B9524E0C2A38DAD4555421D * L_76 = ((ES3Type_bool_t8F309F7B9CC735FF1DEE68081B6E3CAB367745F4_StaticFields*)il2cpp_codegen_static_fields_for(ES3Type_bool_t8F309F7B9CC735FF1DEE68081B6E3CAB367745F4_il2cpp_TypeInfo_var))->get_Instance_12();
		NullCheck((ES3Reader_t2780AF8AA61DA2A817115CEF8612AC0E494D03C9 *)L_75);
		bool L_77;
		L_77 = GenericVirtFuncInvoker1< bool, ES3Type_t8FBECB7AE75168648B9524E0C2A38DAD4555421D * >::Invoke(ES3Reader_Read_TisBoolean_t07D1E3F34E4813023D64F584DFF7B34C9D922F37_mC6D1B158268FF9B97822FF9F5B37FB1723FEDA22_RuntimeMethod_var, (ES3Reader_t2780AF8AA61DA2A817115CEF8612AC0E494D03C9 *)L_75, (ES3Type_t8FBECB7AE75168648B9524E0C2A38DAD4555421D *)L_76);
		TrailModule_set_dieWithParticles_mB7C4E8DC2F908FDF6D57A77B54B821E360D8DA99((TrailModule_t95D15372971E64A1977B7587ABAA87B1A31EF5C8 *)(TrailModule_t95D15372971E64A1977B7587ABAA87B1A31EF5C8 *)(&V_0), (bool)L_77, /*hidden argument*/NULL);
		// break;
		goto IL_038e;
	}

IL_02fc:
	{
		// instance.sizeAffectsWidth = reader.Read<System.Boolean>(ES3Type_bool.Instance);
		ES3Reader_t2780AF8AA61DA2A817115CEF8612AC0E494D03C9 * L_78 = ___reader0;
		IL2CPP_RUNTIME_CLASS_INIT(ES3Type_bool_t8F309F7B9CC735FF1DEE68081B6E3CAB367745F4_il2cpp_TypeInfo_var);
		ES3Type_t8FBECB7AE75168648B9524E0C2A38DAD4555421D * L_79 = ((ES3Type_bool_t8F309F7B9CC735FF1DEE68081B6E3CAB367745F4_StaticFields*)il2cpp_codegen_static_fields_for(ES3Type_bool_t8F309F7B9CC735FF1DEE68081B6E3CAB367745F4_il2cpp_TypeInfo_var))->get_Instance_12();
		NullCheck((ES3Reader_t2780AF8AA61DA2A817115CEF8612AC0E494D03C9 *)L_78);
		bool L_80;
		L_80 = GenericVirtFuncInvoker1< bool, ES3Type_t8FBECB7AE75168648B9524E0C2A38DAD4555421D * >::Invoke(ES3Reader_Read_TisBoolean_t07D1E3F34E4813023D64F584DFF7B34C9D922F37_mC6D1B158268FF9B97822FF9F5B37FB1723FEDA22_RuntimeMethod_var, (ES3Reader_t2780AF8AA61DA2A817115CEF8612AC0E494D03C9 *)L_78, (ES3Type_t8FBECB7AE75168648B9524E0C2A38DAD4555421D *)L_79);
		TrailModule_set_sizeAffectsWidth_m3517856E39080DA69B447499C8846D2491B0ABF0((TrailModule_t95D15372971E64A1977B7587ABAA87B1A31EF5C8 *)(TrailModule_t95D15372971E64A1977B7587ABAA87B1A31EF5C8 *)(&V_0), (bool)L_80, /*hidden argument*/NULL);
		// break;
		goto IL_038e;
	}

IL_0310:
	{
		// instance.sizeAffectsLifetime = reader.Read<System.Boolean>(ES3Type_bool.Instance);
		ES3Reader_t2780AF8AA61DA2A817115CEF8612AC0E494D03C9 * L_81 = ___reader0;
		IL2CPP_RUNTIME_CLASS_INIT(ES3Type_bool_t8F309F7B9CC735FF1DEE68081B6E3CAB367745F4_il2cpp_TypeInfo_var);
		ES3Type_t8FBECB7AE75168648B9524E0C2A38DAD4555421D * L_82 = ((ES3Type_bool_t8F309F7B9CC735FF1DEE68081B6E3CAB367745F4_StaticFields*)il2cpp_codegen_static_fields_for(ES3Type_bool_t8F309F7B9CC735FF1DEE68081B6E3CAB367745F4_il2cpp_TypeInfo_var))->get_Instance_12();
		NullCheck((ES3Reader_t2780AF8AA61DA2A817115CEF8612AC0E494D03C9 *)L_81);
		bool L_83;
		L_83 = GenericVirtFuncInvoker1< bool, ES3Type_t8FBECB7AE75168648B9524E0C2A38DAD4555421D * >::Invoke(ES3Reader_Read_TisBoolean_t07D1E3F34E4813023D64F584DFF7B34C9D922F37_mC6D1B158268FF9B97822FF9F5B37FB1723FEDA22_RuntimeMethod_var, (ES3Reader_t2780AF8AA61DA2A817115CEF8612AC0E494D03C9 *)L_81, (ES3Type_t8FBECB7AE75168648B9524E0C2A38DAD4555421D *)L_82);
		TrailModule_set_sizeAffectsLifetime_m98BF4A6594193D824B52D88371CF963ACBA388FD((TrailModule_t95D15372971E64A1977B7587ABAA87B1A31EF5C8 *)(TrailModule_t95D15372971E64A1977B7587ABAA87B1A31EF5C8 *)(&V_0), (bool)L_83, /*hidden argument*/NULL);
		// break;
		goto IL_038e;
	}

IL_0324:
	{
		// instance.inheritParticleColor = reader.Read<System.Boolean>(ES3Type_bool.Instance);
		ES3Reader_t2780AF8AA61DA2A817115CEF8612AC0E494D03C9 * L_84 = ___reader0;
		IL2CPP_RUNTIME_CLASS_INIT(ES3Type_bool_t8F309F7B9CC735FF1DEE68081B6E3CAB367745F4_il2cpp_TypeInfo_var);
		ES3Type_t8FBECB7AE75168648B9524E0C2A38DAD4555421D * L_85 = ((ES3Type_bool_t8F309F7B9CC735FF1DEE68081B6E3CAB367745F4_StaticFields*)il2cpp_codegen_static_fields_for(ES3Type_bool_t8F309F7B9CC735FF1DEE68081B6E3CAB367745F4_il2cpp_TypeInfo_var))->get_Instance_12();
		NullCheck((ES3Reader_t2780AF8AA61DA2A817115CEF8612AC0E494D03C9 *)L_84);
		bool L_86;
		L_86 = GenericVirtFuncInvoker1< bool, ES3Type_t8FBECB7AE75168648B9524E0C2A38DAD4555421D * >::Invoke(ES3Reader_Read_TisBoolean_t07D1E3F34E4813023D64F584DFF7B34C9D922F37_mC6D1B158268FF9B97822FF9F5B37FB1723FEDA22_RuntimeMethod_var, (ES3Reader_t2780AF8AA61DA2A817115CEF8612AC0E494D03C9 *)L_84, (ES3Type_t8FBECB7AE75168648B9524E0C2A38DAD4555421D *)L_85);
		TrailModule_set_inheritParticleColor_mCD83E87B5E00F2BFFBE08AD2D1D68606283A4FEE((TrailModule_t95D15372971E64A1977B7587ABAA87B1A31EF5C8 *)(TrailModule_t95D15372971E64A1977B7587ABAA87B1A31EF5C8 *)(&V_0), (bool)L_86, /*hidden argument*/NULL);
		// break;
		goto IL_038e;
	}

IL_0338:
	{
		// instance.colorOverLifetime = reader.Read<UnityEngine.ParticleSystem.MinMaxGradient>(ES3Type_MinMaxGradient.Instance);
		ES3Reader_t2780AF8AA61DA2A817115CEF8612AC0E494D03C9 * L_87 = ___reader0;
		IL2CPP_RUNTIME_CLASS_INIT(ES3Type_MinMaxGradient_t5DD353D60E95642AB39D1C97C6FD6DD1B067D3CF_il2cpp_TypeInfo_var);
		ES3Type_t8FBECB7AE75168648B9524E0C2A38DAD4555421D * L_88 = ((ES3Type_MinMaxGradient_t5DD353D60E95642AB39D1C97C6FD6DD1B067D3CF_StaticFields*)il2cpp_codegen_static_fields_for(ES3Type_MinMaxGradient_t5DD353D60E95642AB39D1C97C6FD6DD1B067D3CF_il2cpp_TypeInfo_var))->get_Instance_12();
		NullCheck((ES3Reader_t2780AF8AA61DA2A817115CEF8612AC0E494D03C9 *)L_87);
		MinMaxGradient_tF4530B26F29D9635D670A33B9EE581EAC48C12B7  L_89;
		L_89 = GenericVirtFuncInvoker1< MinMaxGradient_tF4530B26F29D9635D670A33B9EE581EAC48C12B7 , ES3Type_t8FBECB7AE75168648B9524E0C2A38DAD4555421D * >::Invoke(ES3Reader_Read_TisMinMaxGradient_tF4530B26F29D9635D670A33B9EE581EAC48C12B7_m6A3DD8CBBAC5D32B838B6C4399009AB8AA512ACC_RuntimeMethod_var, (ES3Reader_t2780AF8AA61DA2A817115CEF8612AC0E494D03C9 *)L_87, (ES3Type_t8FBECB7AE75168648B9524E0C2A38DAD4555421D *)L_88);
		TrailModule_set_colorOverLifetime_mCD56BD4B75D3A3947069BA1B93FEC78AAE08DF27((TrailModule_t95D15372971E64A1977B7587ABAA87B1A31EF5C8 *)(TrailModule_t95D15372971E64A1977B7587ABAA87B1A31EF5C8 *)(&V_0), (MinMaxGradient_tF4530B26F29D9635D670A33B9EE581EAC48C12B7 )L_89, /*hidden argument*/NULL);
		// break;
		goto IL_038e;
	}

IL_034c:
	{
		// instance.widthOverTrail = reader.Read<UnityEngine.ParticleSystem.MinMaxCurve>(ES3Type_MinMaxCurve.Instance);
		ES3Reader_t2780AF8AA61DA2A817115CEF8612AC0E494D03C9 * L_90 = ___reader0;
		IL2CPP_RUNTIME_CLASS_INIT(ES3Type_MinMaxCurve_tC5342BF0F8735B85CB5E16FDD4C6FACC8AFAD3B7_il2cpp_TypeInfo_var);
		ES3Type_t8FBECB7AE75168648B9524E0C2A38DAD4555421D * L_91 = ((ES3Type_MinMaxCurve_tC5342BF0F8735B85CB5E16FDD4C6FACC8AFAD3B7_StaticFields*)il2cpp_codegen_static_fields_for(ES3Type_MinMaxCurve_tC5342BF0F8735B85CB5E16FDD4C6FACC8AFAD3B7_il2cpp_TypeInfo_var))->get_Instance_12();
		NullCheck((ES3Reader_t2780AF8AA61DA2A817115CEF8612AC0E494D03C9 *)L_90);
		MinMaxCurve_tF036239442AB2D438B1EDABEBC785426871084CD  L_92;
		L_92 = GenericVirtFuncInvoker1< MinMaxCurve_tF036239442AB2D438B1EDABEBC785426871084CD , ES3Type_t8FBECB7AE75168648B9524E0C2A38DAD4555421D * >::Invoke(ES3Reader_Read_TisMinMaxCurve_tF036239442AB2D438B1EDABEBC785426871084CD_mD285150CBFB52440643BBECB5ADF4EE8DE940535_RuntimeMethod_var, (ES3Reader_t2780AF8AA61DA2A817115CEF8612AC0E494D03C9 *)L_90, (ES3Type_t8FBECB7AE75168648B9524E0C2A38DAD4555421D *)L_91);
		TrailModule_set_widthOverTrail_m6C0A896EBFDED7CE46344B3A0B04212934F30DE1((TrailModule_t95D15372971E64A1977B7587ABAA87B1A31EF5C8 *)(TrailModule_t95D15372971E64A1977B7587ABAA87B1A31EF5C8 *)(&V_0), (MinMaxCurve_tF036239442AB2D438B1EDABEBC785426871084CD )L_92, /*hidden argument*/NULL);
		// break;
		goto IL_038e;
	}

IL_0360:
	{
		// instance.widthOverTrailMultiplier = reader.Read<System.Single>(ES3Type_float.Instance);
		ES3Reader_t2780AF8AA61DA2A817115CEF8612AC0E494D03C9 * L_93 = ___reader0;
		IL2CPP_RUNTIME_CLASS_INIT(ES3Type_float_tF86B773C86731BD9AD79448B860BBB178FE77644_il2cpp_TypeInfo_var);
		ES3Type_t8FBECB7AE75168648B9524E0C2A38DAD4555421D * L_94 = ((ES3Type_float_tF86B773C86731BD9AD79448B860BBB178FE77644_StaticFields*)il2cpp_codegen_static_fields_for(ES3Type_float_tF86B773C86731BD9AD79448B860BBB178FE77644_il2cpp_TypeInfo_var))->get_Instance_12();
		NullCheck((ES3Reader_t2780AF8AA61DA2A817115CEF8612AC0E494D03C9 *)L_93);
		float L_95;
		L_95 = GenericVirtFuncInvoker1< float, ES3Type_t8FBECB7AE75168648B9524E0C2A38DAD4555421D * >::Invoke(ES3Reader_Read_TisSingle_tE07797BA3C98D4CA9B5A19413C19A76688AB899E_m4A0416374498BDA042B8EB21E49B72326D6CE5F4_RuntimeMethod_var, (ES3Reader_t2780AF8AA61DA2A817115CEF8612AC0E494D03C9 *)L_93, (ES3Type_t8FBECB7AE75168648B9524E0C2A38DAD4555421D *)L_94);
		TrailModule_set_widthOverTrailMultiplier_m6A7EA2856CF30B710CCB528EA3EBFD1799C19BD4((TrailModule_t95D15372971E64A1977B7587ABAA87B1A31EF5C8 *)(TrailModule_t95D15372971E64A1977B7587ABAA87B1A31EF5C8 *)(&V_0), (float)L_95, /*hidden argument*/NULL);
		// break;
		goto IL_038e;
	}

IL_0374:
	{
		// instance.colorOverTrail = reader.Read<UnityEngine.ParticleSystem.MinMaxGradient>(ES3Type_MinMaxGradient.Instance);
		ES3Reader_t2780AF8AA61DA2A817115CEF8612AC0E494D03C9 * L_96 = ___reader0;
		IL2CPP_RUNTIME_CLASS_INIT(ES3Type_MinMaxGradient_t5DD353D60E95642AB39D1C97C6FD6DD1B067D3CF_il2cpp_TypeInfo_var);
		ES3Type_t8FBECB7AE75168648B9524E0C2A38DAD4555421D * L_97 = ((ES3Type_MinMaxGradient_t5DD353D60E95642AB39D1C97C6FD6DD1B067D3CF_StaticFields*)il2cpp_codegen_static_fields_for(ES3Type_MinMaxGradient_t5DD353D60E95642AB39D1C97C6FD6DD1B067D3CF_il2cpp_TypeInfo_var))->get_Instance_12();
		NullCheck((ES3Reader_t2780AF8AA61DA2A817115CEF8612AC0E494D03C9 *)L_96);
		MinMaxGradient_tF4530B26F29D9635D670A33B9EE581EAC48C12B7  L_98;
		L_98 = GenericVirtFuncInvoker1< MinMaxGradient_tF4530B26F29D9635D670A33B9EE581EAC48C12B7 , ES3Type_t8FBECB7AE75168648B9524E0C2A38DAD4555421D * >::Invoke(ES3Reader_Read_TisMinMaxGradient_tF4530B26F29D9635D670A33B9EE581EAC48C12B7_m6A3DD8CBBAC5D32B838B6C4399009AB8AA512ACC_RuntimeMethod_var, (ES3Reader_t2780AF8AA61DA2A817115CEF8612AC0E494D03C9 *)L_96, (ES3Type_t8FBECB7AE75168648B9524E0C2A38DAD4555421D *)L_97);
		TrailModule_set_colorOverTrail_m8440C6574C8310292B93D70EA4FE3EE8C40DF8DB((TrailModule_t95D15372971E64A1977B7587ABAA87B1A31EF5C8 *)(TrailModule_t95D15372971E64A1977B7587ABAA87B1A31EF5C8 *)(&V_0), (MinMaxGradient_tF4530B26F29D9635D670A33B9EE581EAC48C12B7 )L_98, /*hidden argument*/NULL);
		// break;
		goto IL_038e;
	}

IL_0388:
	{
		// reader.Skip();
		ES3Reader_t2780AF8AA61DA2A817115CEF8612AC0E494D03C9 * L_99 = ___reader0;
		NullCheck((ES3Reader_t2780AF8AA61DA2A817115CEF8612AC0E494D03C9 *)L_99);
		VirtActionInvoker0::Invoke(41 /* System.Void ES3Reader::Skip() */, (ES3Reader_t2780AF8AA61DA2A817115CEF8612AC0E494D03C9 *)L_99);
	}

IL_038e:
	{
		// while((propertyName = reader.ReadPropertyName()) != null)
		ES3Reader_t2780AF8AA61DA2A817115CEF8612AC0E494D03C9 * L_100 = ___reader0;
		NullCheck((ES3Reader_t2780AF8AA61DA2A817115CEF8612AC0E494D03C9 *)L_100);
		String_t* L_101;
		L_101 = VirtFuncInvoker0< String_t* >::Invoke(21 /* System.String ES3Reader::ReadPropertyName() */, (ES3Reader_t2780AF8AA61DA2A817115CEF8612AC0E494D03C9 *)L_100);
		String_t* L_102 = (String_t*)L_101;
		V_1 = (String_t*)L_102;
		if (L_102)
		{
			goto IL_000c;
		}
	}
	{
		// }
		return;
	}
}
// System.Void ES3Types.ES3Type_TrailModule::ReadInto<UnityEngine.Quaternion>(ES3Reader,System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ES3Type_TrailModule_ReadInto_TisQuaternion_t6D28618CF65156D4A0AD747370DDFD0C514A31B4_mDD2A12FD09B2E29F49EA1C1E1520CE44DC0CDB9C_gshared (ES3Type_TrailModule_tC773F73EC0443516DD128FF2B5AE010809742462 * __this, ES3Reader_t2780AF8AA61DA2A817115CEF8612AC0E494D03C9 * ___reader0, RuntimeObject * ___obj1, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ES3Reader_Read_TisBoolean_t07D1E3F34E4813023D64F584DFF7B34C9D922F37_mC6D1B158268FF9B97822FF9F5B37FB1723FEDA22_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ES3Reader_Read_TisMinMaxCurve_tF036239442AB2D438B1EDABEBC785426871084CD_mD285150CBFB52440643BBECB5ADF4EE8DE940535_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ES3Reader_Read_TisMinMaxGradient_tF4530B26F29D9635D670A33B9EE581EAC48C12B7_m6A3DD8CBBAC5D32B838B6C4399009AB8AA512ACC_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ES3Reader_Read_TisParticleSystemTrailTextureMode_tF3259187CA4D0A61EDB3A40E63CBF6C42641CE9F_m055DB1212E8BC34F385DF7D302F16241554E9730_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ES3Reader_Read_TisSingle_tE07797BA3C98D4CA9B5A19413C19A76688AB899E_m4A0416374498BDA042B8EB21E49B72326D6CE5F4_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ES3Type_MinMaxCurve_tC5342BF0F8735B85CB5E16FDD4C6FACC8AFAD3B7_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ES3Type_MinMaxGradient_t5DD353D60E95642AB39D1C97C6FD6DD1B067D3CF_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ES3Type_bool_t8F309F7B9CC735FF1DEE68081B6E3CAB367745F4_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ES3Type_float_tF86B773C86731BD9AD79448B860BBB178FE77644_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&TrailModule_t95D15372971E64A1977B7587ABAA87B1A31EF5C8_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral1D87A56AE67B2CD49CAE6E942C2FB7AD98925C00);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral354281948B6269615E32D856CF85B6F456724DAA);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral4221314F268D184F46688D45C85446821F1F1BC3);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral47C47DD09640803AD8016748EAE1F04DD1D41119);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral5C86338F177203D001C41D9C348A83D1338CC7D0);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral60126327537B7B8E6EE33C43FE0C5CA8BCC3A06A);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral87F70660D62DE5FC257FBADE9DA4EC9188597DE5);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralA967787586EC9E5A17A9C55E2002AB73A5E21A0A);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralADAEB0839588196B349BDB6CF33AFA3E0736360B);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralBE2893848F9FC647C2288DA6581A1522E9695182);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralBF540D6548854CC21630064FBA5390C9409C86F0);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralC580B374AA991574F91DFC86C068E7FAD661A3A4);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralE049DB547285CFCE1CB9A95934B6B6DCE2D219EC);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralF9D225733E1D10F9344C755C4A9C0870CD1DE97B);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralFE5F89F63E2381500F62A7CBD6954563BE44562F);
		s_Il2CppMethodInitialized = true;
	}
	TrailModule_t95D15372971E64A1977B7587ABAA87B1A31EF5C8  V_0;
	memset((&V_0), 0, sizeof(V_0));
	String_t* V_1 = NULL;
	uint32_t V_2 = 0;
	{
		// var instance = (UnityEngine.ParticleSystem.TrailModule)obj;
		RuntimeObject * L_0 = ___obj1;
		V_0 = (TrailModule_t95D15372971E64A1977B7587ABAA87B1A31EF5C8 )((*(TrailModule_t95D15372971E64A1977B7587ABAA87B1A31EF5C8 *)((TrailModule_t95D15372971E64A1977B7587ABAA87B1A31EF5C8 *)UnBox(L_0, TrailModule_t95D15372971E64A1977B7587ABAA87B1A31EF5C8_il2cpp_TypeInfo_var))));
		goto IL_038e;
	}

IL_000c:
	{
		String_t* L_1 = V_1;
		if (!L_1)
		{
			goto IL_0388;
		}
	}
	{
		String_t* L_2 = V_1;
		uint32_t L_3;
		L_3 = U3CPrivateImplementationDetailsU3E_ComputeStringHash_m3ADC1F612F9EE3DD518E6F0023A0DE0EE2B120A7((String_t*)L_2, /*hidden argument*/NULL);
		V_2 = (uint32_t)L_3;
		uint32_t L_4 = V_2;
		if ((!(((uint32_t)L_4) <= ((uint32_t)((int32_t)1376955374)))))
		{
			goto IL_008d;
		}
	}
	{
		uint32_t L_5 = V_2;
		if ((!(((uint32_t)L_5) <= ((uint32_t)((int32_t)494095910)))))
		{
			goto IL_004f;
		}
	}
	{
		uint32_t L_6 = V_2;
		if ((((int32_t)L_6) == ((int32_t)((int32_t)49525662))))
		{
			goto IL_010e;
		}
	}
	{
		uint32_t L_7 = V_2;
		if ((((int32_t)L_7) == ((int32_t)((int32_t)341298456))))
		{
			goto IL_021f;
		}
	}
	{
		uint32_t L_8 = V_2;
		if ((((int32_t)L_8) == ((int32_t)((int32_t)494095910))))
		{
			goto IL_0234;
		}
	}
	{
		goto IL_0388;
	}

IL_004f:
	{
		uint32_t L_9 = V_2;
		if ((!(((uint32_t)L_9) <= ((uint32_t)((int32_t)973733911)))))
		{
			goto IL_0072;
		}
	}
	{
		uint32_t L_10 = V_2;
		if ((((int32_t)L_10) == ((int32_t)((int32_t)559929418))))
		{
			goto IL_01b6;
		}
	}
	{
		uint32_t L_11 = V_2;
		if ((((int32_t)L_11) == ((int32_t)((int32_t)973733911))))
		{
			goto IL_0177;
		}
	}
	{
		goto IL_0388;
	}

IL_0072:
	{
		uint32_t L_12 = V_2;
		if ((((int32_t)L_12) == ((int32_t)((int32_t)1024708593))))
		{
			goto IL_014d;
		}
	}
	{
		uint32_t L_13 = V_2;
		if ((((int32_t)L_13) == ((int32_t)((int32_t)1376955374))))
		{
			goto IL_0138;
		}
	}
	{
		goto IL_0388;
	}

IL_008d:
	{
		uint32_t L_14 = V_2;
		if ((!(((uint32_t)L_14) <= ((uint32_t)((int32_t)-2100707162)))))
		{
			goto IL_00d3;
		}
	}
	{
		uint32_t L_15 = V_2;
		if ((!(((uint32_t)L_15) <= ((uint32_t)((int32_t)1975189197)))))
		{
			goto IL_00b8;
		}
	}
	{
		uint32_t L_16 = V_2;
		if ((((int32_t)L_16) == ((int32_t)((int32_t)1546474083))))
		{
			goto IL_020a;
		}
	}
	{
		uint32_t L_17 = V_2;
		if ((((int32_t)L_17) == ((int32_t)((int32_t)1975189197))))
		{
			goto IL_01cb;
		}
	}
	{
		goto IL_0388;
	}

IL_00b8:
	{
		uint32_t L_18 = V_2;
		if ((((int32_t)L_18) == ((int32_t)((int32_t)2053023684))))
		{
			goto IL_01a1;
		}
	}
	{
		uint32_t L_19 = V_2;
		if ((((int32_t)L_19) == ((int32_t)((int32_t)-2100707162))))
		{
			goto IL_0162;
		}
	}
	{
		goto IL_0388;
	}

IL_00d3:
	{
		uint32_t L_20 = V_2;
		if ((!(((uint32_t)L_20) <= ((uint32_t)((int32_t)-1319579393)))))
		{
			goto IL_00f6;
		}
	}
	{
		uint32_t L_21 = V_2;
		if ((((int32_t)L_21) == ((int32_t)((int32_t)-1562862963))))
		{
			goto IL_01e0;
		}
	}
	{
		uint32_t L_22 = V_2;
		if ((((int32_t)L_22) == ((int32_t)((int32_t)-1319579393))))
		{
			goto IL_018c;
		}
	}
	{
		goto IL_0388;
	}

IL_00f6:
	{
		uint32_t L_23 = V_2;
		if ((((int32_t)L_23) == ((int32_t)((int32_t)-1055777148))))
		{
			goto IL_0123;
		}
	}
	{
		uint32_t L_24 = V_2;
		if ((((int32_t)L_24) == ((int32_t)((int32_t)-413379935))))
		{
			goto IL_01f5;
		}
	}
	{
		goto IL_0388;
	}

IL_010e:
	{
		String_t* L_25 = V_1;
		bool L_26;
		L_26 = String_op_Equality_m50B3548E4AC232558190B0052877B290AA1D436A((String_t*)L_25, (String_t*)_stringLiteralF9D225733E1D10F9344C755C4A9C0870CD1DE97B, /*hidden argument*/NULL);
		if (L_26)
		{
			goto IL_0249;
		}
	}
	{
		goto IL_0388;
	}

IL_0123:
	{
		String_t* L_27 = V_1;
		bool L_28;
		L_28 = String_op_Equality_m50B3548E4AC232558190B0052877B290AA1D436A((String_t*)L_27, (String_t*)_stringLiteral60126327537B7B8E6EE33C43FE0C5CA8BCC3A06A, /*hidden argument*/NULL);
		if (L_28)
		{
			goto IL_0260;
		}
	}
	{
		goto IL_0388;
	}

IL_0138:
	{
		String_t* L_29 = V_1;
		bool L_30;
		L_30 = String_op_Equality_m50B3548E4AC232558190B0052877B290AA1D436A((String_t*)L_29, (String_t*)_stringLiteralBE2893848F9FC647C2288DA6581A1522E9695182, /*hidden argument*/NULL);
		if (L_30)
		{
			goto IL_0277;
		}
	}
	{
		goto IL_0388;
	}

IL_014d:
	{
		String_t* L_31 = V_1;
		bool L_32;
		L_32 = String_op_Equality_m50B3548E4AC232558190B0052877B290AA1D436A((String_t*)L_31, (String_t*)_stringLiteral4221314F268D184F46688D45C85446821F1F1BC3, /*hidden argument*/NULL);
		if (L_32)
		{
			goto IL_028e;
		}
	}
	{
		goto IL_0388;
	}

IL_0162:
	{
		String_t* L_33 = V_1;
		bool L_34;
		L_34 = String_op_Equality_m50B3548E4AC232558190B0052877B290AA1D436A((String_t*)L_33, (String_t*)_stringLiteral5C86338F177203D001C41D9C348A83D1338CC7D0, /*hidden argument*/NULL);
		if (L_34)
		{
			goto IL_02a5;
		}
	}
	{
		goto IL_0388;
	}

IL_0177:
	{
		String_t* L_35 = V_1;
		bool L_36;
		L_36 = String_op_Equality_m50B3548E4AC232558190B0052877B290AA1D436A((String_t*)L_35, (String_t*)_stringLiteralFE5F89F63E2381500F62A7CBD6954563BE44562F, /*hidden argument*/NULL);
		if (L_36)
		{
			goto IL_02bc;
		}
	}
	{
		goto IL_0388;
	}

IL_018c:
	{
		String_t* L_37 = V_1;
		bool L_38;
		L_38 = String_op_Equality_m50B3548E4AC232558190B0052877B290AA1D436A((String_t*)L_37, (String_t*)_stringLiteral87F70660D62DE5FC257FBADE9DA4EC9188597DE5, /*hidden argument*/NULL);
		if (L_38)
		{
			goto IL_02ce;
		}
	}
	{
		goto IL_0388;
	}

IL_01a1:
	{
		String_t* L_39 = V_1;
		bool L_40;
		L_40 = String_op_Equality_m50B3548E4AC232558190B0052877B290AA1D436A((String_t*)L_39, (String_t*)_stringLiteral354281948B6269615E32D856CF85B6F456724DAA, /*hidden argument*/NULL);
		if (L_40)
		{
			goto IL_02e5;
		}
	}
	{
		goto IL_0388;
	}

IL_01b6:
	{
		String_t* L_41 = V_1;
		bool L_42;
		L_42 = String_op_Equality_m50B3548E4AC232558190B0052877B290AA1D436A((String_t*)L_41, (String_t*)_stringLiteralADAEB0839588196B349BDB6CF33AFA3E0736360B, /*hidden argument*/NULL);
		if (L_42)
		{
			goto IL_02fc;
		}
	}
	{
		goto IL_0388;
	}

IL_01cb:
	{
		String_t* L_43 = V_1;
		bool L_44;
		L_44 = String_op_Equality_m50B3548E4AC232558190B0052877B290AA1D436A((String_t*)L_43, (String_t*)_stringLiteralC580B374AA991574F91DFC86C068E7FAD661A3A4, /*hidden argument*/NULL);
		if (L_44)
		{
			goto IL_0310;
		}
	}
	{
		goto IL_0388;
	}

IL_01e0:
	{
		String_t* L_45 = V_1;
		bool L_46;
		L_46 = String_op_Equality_m50B3548E4AC232558190B0052877B290AA1D436A((String_t*)L_45, (String_t*)_stringLiteralE049DB547285CFCE1CB9A95934B6B6DCE2D219EC, /*hidden argument*/NULL);
		if (L_46)
		{
			goto IL_0324;
		}
	}
	{
		goto IL_0388;
	}

IL_01f5:
	{
		String_t* L_47 = V_1;
		bool L_48;
		L_48 = String_op_Equality_m50B3548E4AC232558190B0052877B290AA1D436A((String_t*)L_47, (String_t*)_stringLiteralBF540D6548854CC21630064FBA5390C9409C86F0, /*hidden argument*/NULL);
		if (L_48)
		{
			goto IL_0338;
		}
	}
	{
		goto IL_0388;
	}

IL_020a:
	{
		String_t* L_49 = V_1;
		bool L_50;
		L_50 = String_op_Equality_m50B3548E4AC232558190B0052877B290AA1D436A((String_t*)L_49, (String_t*)_stringLiteral1D87A56AE67B2CD49CAE6E942C2FB7AD98925C00, /*hidden argument*/NULL);
		if (L_50)
		{
			goto IL_034c;
		}
	}
	{
		goto IL_0388;
	}

IL_021f:
	{
		String_t* L_51 = V_1;
		bool L_52;
		L_52 = String_op_Equality_m50B3548E4AC232558190B0052877B290AA1D436A((String_t*)L_51, (String_t*)_stringLiteralA967787586EC9E5A17A9C55E2002AB73A5E21A0A, /*hidden argument*/NULL);
		if (L_52)
		{
			goto IL_0360;
		}
	}
	{
		goto IL_0388;
	}

IL_0234:
	{
		String_t* L_53 = V_1;
		bool L_54;
		L_54 = String_op_Equality_m50B3548E4AC232558190B0052877B290AA1D436A((String_t*)L_53, (String_t*)_stringLiteral47C47DD09640803AD8016748EAE1F04DD1D41119, /*hidden argument*/NULL);
		if (L_54)
		{
			goto IL_0374;
		}
	}
	{
		goto IL_0388;
	}

IL_0249:
	{
		// instance.enabled = reader.Read<System.Boolean>(ES3Type_bool.Instance);
		ES3Reader_t2780AF8AA61DA2A817115CEF8612AC0E494D03C9 * L_55 = ___reader0;
		IL2CPP_RUNTIME_CLASS_INIT(ES3Type_bool_t8F309F7B9CC735FF1DEE68081B6E3CAB367745F4_il2cpp_TypeInfo_var);
		ES3Type_t8FBECB7AE75168648B9524E0C2A38DAD4555421D * L_56 = ((ES3Type_bool_t8F309F7B9CC735FF1DEE68081B6E3CAB367745F4_StaticFields*)il2cpp_codegen_static_fields_for(ES3Type_bool_t8F309F7B9CC735FF1DEE68081B6E3CAB367745F4_il2cpp_TypeInfo_var))->get_Instance_12();
		NullCheck((ES3Reader_t2780AF8AA61DA2A817115CEF8612AC0E494D03C9 *)L_55);
		bool L_57;
		L_57 = GenericVirtFuncInvoker1< bool, ES3Type_t8FBECB7AE75168648B9524E0C2A38DAD4555421D * >::Invoke(ES3Reader_Read_TisBoolean_t07D1E3F34E4813023D64F584DFF7B34C9D922F37_mC6D1B158268FF9B97822FF9F5B37FB1723FEDA22_RuntimeMethod_var, (ES3Reader_t2780AF8AA61DA2A817115CEF8612AC0E494D03C9 *)L_55, (ES3Type_t8FBECB7AE75168648B9524E0C2A38DAD4555421D *)L_56);
		TrailModule_set_enabled_mFC8451DDDF40CCBB3E32A4B30A001115F6346894((TrailModule_t95D15372971E64A1977B7587ABAA87B1A31EF5C8 *)(TrailModule_t95D15372971E64A1977B7587ABAA87B1A31EF5C8 *)(&V_0), (bool)L_57, /*hidden argument*/NULL);
		// break;
		goto IL_038e;
	}

IL_0260:
	{
		// instance.ratio = reader.Read<System.Single>(ES3Type_float.Instance);
		ES3Reader_t2780AF8AA61DA2A817115CEF8612AC0E494D03C9 * L_58 = ___reader0;
		IL2CPP_RUNTIME_CLASS_INIT(ES3Type_float_tF86B773C86731BD9AD79448B860BBB178FE77644_il2cpp_TypeInfo_var);
		ES3Type_t8FBECB7AE75168648B9524E0C2A38DAD4555421D * L_59 = ((ES3Type_float_tF86B773C86731BD9AD79448B860BBB178FE77644_StaticFields*)il2cpp_codegen_static_fields_for(ES3Type_float_tF86B773C86731BD9AD79448B860BBB178FE77644_il2cpp_TypeInfo_var))->get_Instance_12();
		NullCheck((ES3Reader_t2780AF8AA61DA2A817115CEF8612AC0E494D03C9 *)L_58);
		float L_60;
		L_60 = GenericVirtFuncInvoker1< float, ES3Type_t8FBECB7AE75168648B9524E0C2A38DAD4555421D * >::Invoke(ES3Reader_Read_TisSingle_tE07797BA3C98D4CA9B5A19413C19A76688AB899E_m4A0416374498BDA042B8EB21E49B72326D6CE5F4_RuntimeMethod_var, (ES3Reader_t2780AF8AA61DA2A817115CEF8612AC0E494D03C9 *)L_58, (ES3Type_t8FBECB7AE75168648B9524E0C2A38DAD4555421D *)L_59);
		TrailModule_set_ratio_m34E63B34E7B0E8D037AD45532B2E2D5BD0750189((TrailModule_t95D15372971E64A1977B7587ABAA87B1A31EF5C8 *)(TrailModule_t95D15372971E64A1977B7587ABAA87B1A31EF5C8 *)(&V_0), (float)L_60, /*hidden argument*/NULL);
		// break;
		goto IL_038e;
	}

IL_0277:
	{
		// instance.lifetime = reader.Read<UnityEngine.ParticleSystem.MinMaxCurve>(ES3Type_MinMaxCurve.Instance);
		ES3Reader_t2780AF8AA61DA2A817115CEF8612AC0E494D03C9 * L_61 = ___reader0;
		IL2CPP_RUNTIME_CLASS_INIT(ES3Type_MinMaxCurve_tC5342BF0F8735B85CB5E16FDD4C6FACC8AFAD3B7_il2cpp_TypeInfo_var);
		ES3Type_t8FBECB7AE75168648B9524E0C2A38DAD4555421D * L_62 = ((ES3Type_MinMaxCurve_tC5342BF0F8735B85CB5E16FDD4C6FACC8AFAD3B7_StaticFields*)il2cpp_codegen_static_fields_for(ES3Type_MinMaxCurve_tC5342BF0F8735B85CB5E16FDD4C6FACC8AFAD3B7_il2cpp_TypeInfo_var))->get_Instance_12();
		NullCheck((ES3Reader_t2780AF8AA61DA2A817115CEF8612AC0E494D03C9 *)L_61);
		MinMaxCurve_tF036239442AB2D438B1EDABEBC785426871084CD  L_63;
		L_63 = GenericVirtFuncInvoker1< MinMaxCurve_tF036239442AB2D438B1EDABEBC785426871084CD , ES3Type_t8FBECB7AE75168648B9524E0C2A38DAD4555421D * >::Invoke(ES3Reader_Read_TisMinMaxCurve_tF036239442AB2D438B1EDABEBC785426871084CD_mD285150CBFB52440643BBECB5ADF4EE8DE940535_RuntimeMethod_var, (ES3Reader_t2780AF8AA61DA2A817115CEF8612AC0E494D03C9 *)L_61, (ES3Type_t8FBECB7AE75168648B9524E0C2A38DAD4555421D *)L_62);
		TrailModule_set_lifetime_m57C898C42B9F18F5A0E88AAA7B10276CC158C39D((TrailModule_t95D15372971E64A1977B7587ABAA87B1A31EF5C8 *)(TrailModule_t95D15372971E64A1977B7587ABAA87B1A31EF5C8 *)(&V_0), (MinMaxCurve_tF036239442AB2D438B1EDABEBC785426871084CD )L_63, /*hidden argument*/NULL);
		// break;
		goto IL_038e;
	}

IL_028e:
	{
		// instance.lifetimeMultiplier = reader.Read<System.Single>(ES3Type_float.Instance);
		ES3Reader_t2780AF8AA61DA2A817115CEF8612AC0E494D03C9 * L_64 = ___reader0;
		IL2CPP_RUNTIME_CLASS_INIT(ES3Type_float_tF86B773C86731BD9AD79448B860BBB178FE77644_il2cpp_TypeInfo_var);
		ES3Type_t8FBECB7AE75168648B9524E0C2A38DAD4555421D * L_65 = ((ES3Type_float_tF86B773C86731BD9AD79448B860BBB178FE77644_StaticFields*)il2cpp_codegen_static_fields_for(ES3Type_float_tF86B773C86731BD9AD79448B860BBB178FE77644_il2cpp_TypeInfo_var))->get_Instance_12();
		NullCheck((ES3Reader_t2780AF8AA61DA2A817115CEF8612AC0E494D03C9 *)L_64);
		float L_66;
		L_66 = GenericVirtFuncInvoker1< float, ES3Type_t8FBECB7AE75168648B9524E0C2A38DAD4555421D * >::Invoke(ES3Reader_Read_TisSingle_tE07797BA3C98D4CA9B5A19413C19A76688AB899E_m4A0416374498BDA042B8EB21E49B72326D6CE5F4_RuntimeMethod_var, (ES3Reader_t2780AF8AA61DA2A817115CEF8612AC0E494D03C9 *)L_64, (ES3Type_t8FBECB7AE75168648B9524E0C2A38DAD4555421D *)L_65);
		TrailModule_set_lifetimeMultiplier_m23F95D65EE8C82152AE1CF2E41531EC2789A866B((TrailModule_t95D15372971E64A1977B7587ABAA87B1A31EF5C8 *)(TrailModule_t95D15372971E64A1977B7587ABAA87B1A31EF5C8 *)(&V_0), (float)L_66, /*hidden argument*/NULL);
		// break;
		goto IL_038e;
	}

IL_02a5:
	{
		// instance.minVertexDistance = reader.Read<System.Single>(ES3Type_float.Instance);
		ES3Reader_t2780AF8AA61DA2A817115CEF8612AC0E494D03C9 * L_67 = ___reader0;
		IL2CPP_RUNTIME_CLASS_INIT(ES3Type_float_tF86B773C86731BD9AD79448B860BBB178FE77644_il2cpp_TypeInfo_var);
		ES3Type_t8FBECB7AE75168648B9524E0C2A38DAD4555421D * L_68 = ((ES3Type_float_tF86B773C86731BD9AD79448B860BBB178FE77644_StaticFields*)il2cpp_codegen_static_fields_for(ES3Type_float_tF86B773C86731BD9AD79448B860BBB178FE77644_il2cpp_TypeInfo_var))->get_Instance_12();
		NullCheck((ES3Reader_t2780AF8AA61DA2A817115CEF8612AC0E494D03C9 *)L_67);
		float L_69;
		L_69 = GenericVirtFuncInvoker1< float, ES3Type_t8FBECB7AE75168648B9524E0C2A38DAD4555421D * >::Invoke(ES3Reader_Read_TisSingle_tE07797BA3C98D4CA9B5A19413C19A76688AB899E_m4A0416374498BDA042B8EB21E49B72326D6CE5F4_RuntimeMethod_var, (ES3Reader_t2780AF8AA61DA2A817115CEF8612AC0E494D03C9 *)L_67, (ES3Type_t8FBECB7AE75168648B9524E0C2A38DAD4555421D *)L_68);
		TrailModule_set_minVertexDistance_mF7C29F88FBF540CE4987F4CF9B141C624808FBC5((TrailModule_t95D15372971E64A1977B7587ABAA87B1A31EF5C8 *)(TrailModule_t95D15372971E64A1977B7587ABAA87B1A31EF5C8 *)(&V_0), (float)L_69, /*hidden argument*/NULL);
		// break;
		goto IL_038e;
	}

IL_02bc:
	{
		// instance.textureMode = reader.Read<UnityEngine.ParticleSystemTrailTextureMode>();
		ES3Reader_t2780AF8AA61DA2A817115CEF8612AC0E494D03C9 * L_70 = ___reader0;
		NullCheck((ES3Reader_t2780AF8AA61DA2A817115CEF8612AC0E494D03C9 *)L_70);
		int32_t L_71;
		L_71 = GenericVirtFuncInvoker0< int32_t >::Invoke(ES3Reader_Read_TisParticleSystemTrailTextureMode_tF3259187CA4D0A61EDB3A40E63CBF6C42641CE9F_m055DB1212E8BC34F385DF7D302F16241554E9730_RuntimeMethod_var, (ES3Reader_t2780AF8AA61DA2A817115CEF8612AC0E494D03C9 *)L_70);
		TrailModule_set_textureMode_mC1F8AE0D2965FC47BDBFF4F53E0673D5FB58CF28((TrailModule_t95D15372971E64A1977B7587ABAA87B1A31EF5C8 *)(TrailModule_t95D15372971E64A1977B7587ABAA87B1A31EF5C8 *)(&V_0), (int32_t)L_71, /*hidden argument*/NULL);
		// break;
		goto IL_038e;
	}

IL_02ce:
	{
		// instance.worldSpace = reader.Read<System.Boolean>(ES3Type_bool.Instance);
		ES3Reader_t2780AF8AA61DA2A817115CEF8612AC0E494D03C9 * L_72 = ___reader0;
		IL2CPP_RUNTIME_CLASS_INIT(ES3Type_bool_t8F309F7B9CC735FF1DEE68081B6E3CAB367745F4_il2cpp_TypeInfo_var);
		ES3Type_t8FBECB7AE75168648B9524E0C2A38DAD4555421D * L_73 = ((ES3Type_bool_t8F309F7B9CC735FF1DEE68081B6E3CAB367745F4_StaticFields*)il2cpp_codegen_static_fields_for(ES3Type_bool_t8F309F7B9CC735FF1DEE68081B6E3CAB367745F4_il2cpp_TypeInfo_var))->get_Instance_12();
		NullCheck((ES3Reader_t2780AF8AA61DA2A817115CEF8612AC0E494D03C9 *)L_72);
		bool L_74;
		L_74 = GenericVirtFuncInvoker1< bool, ES3Type_t8FBECB7AE75168648B9524E0C2A38DAD4555421D * >::Invoke(ES3Reader_Read_TisBoolean_t07D1E3F34E4813023D64F584DFF7B34C9D922F37_mC6D1B158268FF9B97822FF9F5B37FB1723FEDA22_RuntimeMethod_var, (ES3Reader_t2780AF8AA61DA2A817115CEF8612AC0E494D03C9 *)L_72, (ES3Type_t8FBECB7AE75168648B9524E0C2A38DAD4555421D *)L_73);
		TrailModule_set_worldSpace_m42A63AF4A96F24A621A29A0F35240195F0E56B1A((TrailModule_t95D15372971E64A1977B7587ABAA87B1A31EF5C8 *)(TrailModule_t95D15372971E64A1977B7587ABAA87B1A31EF5C8 *)(&V_0), (bool)L_74, /*hidden argument*/NULL);
		// break;
		goto IL_038e;
	}

IL_02e5:
	{
		// instance.dieWithParticles = reader.Read<System.Boolean>(ES3Type_bool.Instance);
		ES3Reader_t2780AF8AA61DA2A817115CEF8612AC0E494D03C9 * L_75 = ___reader0;
		IL2CPP_RUNTIME_CLASS_INIT(ES3Type_bool_t8F309F7B9CC735FF1DEE68081B6E3CAB367745F4_il2cpp_TypeInfo_var);
		ES3Type_t8FBECB7AE75168648B9524E0C2A38DAD4555421D * L_76 = ((ES3Type_bool_t8F309F7B9CC735FF1DEE68081B6E3CAB367745F4_StaticFields*)il2cpp_codegen_static_fields_for(ES3Type_bool_t8F309F7B9CC735FF1DEE68081B6E3CAB367745F4_il2cpp_TypeInfo_var))->get_Instance_12();
		NullCheck((ES3Reader_t2780AF8AA61DA2A817115CEF8612AC0E494D03C9 *)L_75);
		bool L_77;
		L_77 = GenericVirtFuncInvoker1< bool, ES3Type_t8FBECB7AE75168648B9524E0C2A38DAD4555421D * >::Invoke(ES3Reader_Read_TisBoolean_t07D1E3F34E4813023D64F584DFF7B34C9D922F37_mC6D1B158268FF9B97822FF9F5B37FB1723FEDA22_RuntimeMethod_var, (ES3Reader_t2780AF8AA61DA2A817115CEF8612AC0E494D03C9 *)L_75, (ES3Type_t8FBECB7AE75168648B9524E0C2A38DAD4555421D *)L_76);
		TrailModule_set_dieWithParticles_mB7C4E8DC2F908FDF6D57A77B54B821E360D8DA99((TrailModule_t95D15372971E64A1977B7587ABAA87B1A31EF5C8 *)(TrailModule_t95D15372971E64A1977B7587ABAA87B1A31EF5C8 *)(&V_0), (bool)L_77, /*hidden argument*/NULL);
		// break;
		goto IL_038e;
	}

IL_02fc:
	{
		// instance.sizeAffectsWidth = reader.Read<System.Boolean>(ES3Type_bool.Instance);
		ES3Reader_t2780AF8AA61DA2A817115CEF8612AC0E494D03C9 * L_78 = ___reader0;
		IL2CPP_RUNTIME_CLASS_INIT(ES3Type_bool_t8F309F7B9CC735FF1DEE68081B6E3CAB367745F4_il2cpp_TypeInfo_var);
		ES3Type_t8FBECB7AE75168648B9524E0C2A38DAD4555421D * L_79 = ((ES3Type_bool_t8F309F7B9CC735FF1DEE68081B6E3CAB367745F4_StaticFields*)il2cpp_codegen_static_fields_for(ES3Type_bool_t8F309F7B9CC735FF1DEE68081B6E3CAB367745F4_il2cpp_TypeInfo_var))->get_Instance_12();
		NullCheck((ES3Reader_t2780AF8AA61DA2A817115CEF8612AC0E494D03C9 *)L_78);
		bool L_80;
		L_80 = GenericVirtFuncInvoker1< bool, ES3Type_t8FBECB7AE75168648B9524E0C2A38DAD4555421D * >::Invoke(ES3Reader_Read_TisBoolean_t07D1E3F34E4813023D64F584DFF7B34C9D922F37_mC6D1B158268FF9B97822FF9F5B37FB1723FEDA22_RuntimeMethod_var, (ES3Reader_t2780AF8AA61DA2A817115CEF8612AC0E494D03C9 *)L_78, (ES3Type_t8FBECB7AE75168648B9524E0C2A38DAD4555421D *)L_79);
		TrailModule_set_sizeAffectsWidth_m3517856E39080DA69B447499C8846D2491B0ABF0((TrailModule_t95D15372971E64A1977B7587ABAA87B1A31EF5C8 *)(TrailModule_t95D15372971E64A1977B7587ABAA87B1A31EF5C8 *)(&V_0), (bool)L_80, /*hidden argument*/NULL);
		// break;
		goto IL_038e;
	}

IL_0310:
	{
		// instance.sizeAffectsLifetime = reader.Read<System.Boolean>(ES3Type_bool.Instance);
		ES3Reader_t2780AF8AA61DA2A817115CEF8612AC0E494D03C9 * L_81 = ___reader0;
		IL2CPP_RUNTIME_CLASS_INIT(ES3Type_bool_t8F309F7B9CC735FF1DEE68081B6E3CAB367745F4_il2cpp_TypeInfo_var);
		ES3Type_t8FBECB7AE75168648B9524E0C2A38DAD4555421D * L_82 = ((ES3Type_bool_t8F309F7B9CC735FF1DEE68081B6E3CAB367745F4_StaticFields*)il2cpp_codegen_static_fields_for(ES3Type_bool_t8F309F7B9CC735FF1DEE68081B6E3CAB367745F4_il2cpp_TypeInfo_var))->get_Instance_12();
		NullCheck((ES3Reader_t2780AF8AA61DA2A817115CEF8612AC0E494D03C9 *)L_81);
		bool L_83;
		L_83 = GenericVirtFuncInvoker1< bool, ES3Type_t8FBECB7AE75168648B9524E0C2A38DAD4555421D * >::Invoke(ES3Reader_Read_TisBoolean_t07D1E3F34E4813023D64F584DFF7B34C9D922F37_mC6D1B158268FF9B97822FF9F5B37FB1723FEDA22_RuntimeMethod_var, (ES3Reader_t2780AF8AA61DA2A817115CEF8612AC0E494D03C9 *)L_81, (ES3Type_t8FBECB7AE75168648B9524E0C2A38DAD4555421D *)L_82);
		TrailModule_set_sizeAffectsLifetime_m98BF4A6594193D824B52D88371CF963ACBA388FD((TrailModule_t95D15372971E64A1977B7587ABAA87B1A31EF5C8 *)(TrailModule_t95D15372971E64A1977B7587ABAA87B1A31EF5C8 *)(&V_0), (bool)L_83, /*hidden argument*/NULL);
		// break;
		goto IL_038e;
	}

IL_0324:
	{
		// instance.inheritParticleColor = reader.Read<System.Boolean>(ES3Type_bool.Instance);
		ES3Reader_t2780AF8AA61DA2A817115CEF8612AC0E494D03C9 * L_84 = ___reader0;
		IL2CPP_RUNTIME_CLASS_INIT(ES3Type_bool_t8F309F7B9CC735FF1DEE68081B6E3CAB367745F4_il2cpp_TypeInfo_var);
		ES3Type_t8FBECB7AE75168648B9524E0C2A38DAD4555421D * L_85 = ((ES3Type_bool_t8F309F7B9CC735FF1DEE68081B6E3CAB367745F4_StaticFields*)il2cpp_codegen_static_fields_for(ES3Type_bool_t8F309F7B9CC735FF1DEE68081B6E3CAB367745F4_il2cpp_TypeInfo_var))->get_Instance_12();
		NullCheck((ES3Reader_t2780AF8AA61DA2A817115CEF8612AC0E494D03C9 *)L_84);
		bool L_86;
		L_86 = GenericVirtFuncInvoker1< bool, ES3Type_t8FBECB7AE75168648B9524E0C2A38DAD4555421D * >::Invoke(ES3Reader_Read_TisBoolean_t07D1E3F34E4813023D64F584DFF7B34C9D922F37_mC6D1B158268FF9B97822FF9F5B37FB1723FEDA22_RuntimeMethod_var, (ES3Reader_t2780AF8AA61DA2A817115CEF8612AC0E494D03C9 *)L_84, (ES3Type_t8FBECB7AE75168648B9524E0C2A38DAD4555421D *)L_85);
		TrailModule_set_inheritParticleColor_mCD83E87B5E00F2BFFBE08AD2D1D68606283A4FEE((TrailModule_t95D15372971E64A1977B7587ABAA87B1A31EF5C8 *)(TrailModule_t95D15372971E64A1977B7587ABAA87B1A31EF5C8 *)(&V_0), (bool)L_86, /*hidden argument*/NULL);
		// break;
		goto IL_038e;
	}

IL_0338:
	{
		// instance.colorOverLifetime = reader.Read<UnityEngine.ParticleSystem.MinMaxGradient>(ES3Type_MinMaxGradient.Instance);
		ES3Reader_t2780AF8AA61DA2A817115CEF8612AC0E494D03C9 * L_87 = ___reader0;
		IL2CPP_RUNTIME_CLASS_INIT(ES3Type_MinMaxGradient_t5DD353D60E95642AB39D1C97C6FD6DD1B067D3CF_il2cpp_TypeInfo_var);
		ES3Type_t8FBECB7AE75168648B9524E0C2A38DAD4555421D * L_88 = ((ES3Type_MinMaxGradient_t5DD353D60E95642AB39D1C97C6FD6DD1B067D3CF_StaticFields*)il2cpp_codegen_static_fields_for(ES3Type_MinMaxGradient_t5DD353D60E95642AB39D1C97C6FD6DD1B067D3CF_il2cpp_TypeInfo_var))->get_Instance_12();
		NullCheck((ES3Reader_t2780AF8AA61DA2A817115CEF8612AC0E494D03C9 *)L_87);
		MinMaxGradient_tF4530B26F29D9635D670A33B9EE581EAC48C12B7  L_89;
		L_89 = GenericVirtFuncInvoker1< MinMaxGradient_tF4530B26F29D9635D670A33B9EE581EAC48C12B7 , ES3Type_t8FBECB7AE75168648B9524E0C2A38DAD4555421D * >::Invoke(ES3Reader_Read_TisMinMaxGradient_tF4530B26F29D9635D670A33B9EE581EAC48C12B7_m6A3DD8CBBAC5D32B838B6C4399009AB8AA512ACC_RuntimeMethod_var, (ES3Reader_t2780AF8AA61DA2A817115CEF8612AC0E494D03C9 *)L_87, (ES3Type_t8FBECB7AE75168648B9524E0C2A38DAD4555421D *)L_88);
		TrailModule_set_colorOverLifetime_mCD56BD4B75D3A3947069BA1B93FEC78AAE08DF27((TrailModule_t95D15372971E64A1977B7587ABAA87B1A31EF5C8 *)(TrailModule_t95D15372971E64A1977B7587ABAA87B1A31EF5C8 *)(&V_0), (MinMaxGradient_tF4530B26F29D9635D670A33B9EE581EAC48C12B7 )L_89, /*hidden argument*/NULL);
		// break;
		goto IL_038e;
	}

IL_034c:
	{
		// instance.widthOverTrail = reader.Read<UnityEngine.ParticleSystem.MinMaxCurve>(ES3Type_MinMaxCurve.Instance);
		ES3Reader_t2780AF8AA61DA2A817115CEF8612AC0E494D03C9 * L_90 = ___reader0;
		IL2CPP_RUNTIME_CLASS_INIT(ES3Type_MinMaxCurve_tC5342BF0F8735B85CB5E16FDD4C6FACC8AFAD3B7_il2cpp_TypeInfo_var);
		ES3Type_t8FBECB7AE75168648B9524E0C2A38DAD4555421D * L_91 = ((ES3Type_MinMaxCurve_tC5342BF0F8735B85CB5E16FDD4C6FACC8AFAD3B7_StaticFields*)il2cpp_codegen_static_fields_for(ES3Type_MinMaxCurve_tC5342BF0F8735B85CB5E16FDD4C6FACC8AFAD3B7_il2cpp_TypeInfo_var))->get_Instance_12();
		NullCheck((ES3Reader_t2780AF8AA61DA2A817115CEF8612AC0E494D03C9 *)L_90);
		MinMaxCurve_tF036239442AB2D438B1EDABEBC785426871084CD  L_92;
		L_92 = GenericVirtFuncInvoker1< MinMaxCurve_tF036239442AB2D438B1EDABEBC785426871084CD , ES3Type_t8FBECB7AE75168648B9524E0C2A38DAD4555421D * >::Invoke(ES3Reader_Read_TisMinMaxCurve_tF036239442AB2D438B1EDABEBC785426871084CD_mD285150CBFB52440643BBECB5ADF4EE8DE940535_RuntimeMethod_var, (ES3Reader_t2780AF8AA61DA2A817115CEF8612AC0E494D03C9 *)L_90, (ES3Type_t8FBECB7AE75168648B9524E0C2A38DAD4555421D *)L_91);
		TrailModule_set_widthOverTrail_m6C0A896EBFDED7CE46344B3A0B04212934F30DE1((TrailModule_t95D15372971E64A1977B7587ABAA87B1A31EF5C8 *)(TrailModule_t95D15372971E64A1977B7587ABAA87B1A31EF5C8 *)(&V_0), (MinMaxCurve_tF036239442AB2D438B1EDABEBC785426871084CD )L_92, /*hidden argument*/NULL);
		// break;
		goto IL_038e;
	}

IL_0360:
	{
		// instance.widthOverTrailMultiplier = reader.Read<System.Single>(ES3Type_float.Instance);
		ES3Reader_t2780AF8AA61DA2A817115CEF8612AC0E494D03C9 * L_93 = ___reader0;
		IL2CPP_RUNTIME_CLASS_INIT(ES3Type_float_tF86B773C86731BD9AD79448B860BBB178FE77644_il2cpp_TypeInfo_var);
		ES3Type_t8FBECB7AE75168648B9524E0C2A38DAD4555421D * L_94 = ((ES3Type_float_tF86B773C86731BD9AD79448B860BBB178FE77644_StaticFields*)il2cpp_codegen_static_fields_for(ES3Type_float_tF86B773C86731BD9AD79448B860BBB178FE77644_il2cpp_TypeInfo_var))->get_Instance_12();
		NullCheck((ES3Reader_t2780AF8AA61DA2A817115CEF8612AC0E494D03C9 *)L_93);
		float L_95;
		L_95 = GenericVirtFuncInvoker1< float, ES3Type_t8FBECB7AE75168648B9524E0C2A38DAD4555421D * >::Invoke(ES3Reader_Read_TisSingle_tE07797BA3C98D4CA9B5A19413C19A76688AB899E_m4A0416374498BDA042B8EB21E49B72326D6CE5F4_RuntimeMethod_var, (ES3Reader_t2780AF8AA61DA2A817115CEF8612AC0E494D03C9 *)L_93, (ES3Type_t8FBECB7AE75168648B9524E0C2A38DAD4555421D *)L_94);
		TrailModule_set_widthOverTrailMultiplier_m6A7EA2856CF30B710CCB528EA3EBFD1799C19BD4((TrailModule_t95D15372971E64A1977B7587ABAA87B1A31EF5C8 *)(TrailModule_t95D15372971E64A1977B7587ABAA87B1A31EF5C8 *)(&V_0), (float)L_95, /*hidden argument*/NULL);
		// break;
		goto IL_038e;
	}

IL_0374:
	{
		// instance.colorOverTrail = reader.Read<UnityEngine.ParticleSystem.MinMaxGradient>(ES3Type_MinMaxGradient.Instance);
		ES3Reader_t2780AF8AA61DA2A817115CEF8612AC0E494D03C9 * L_96 = ___reader0;
		IL2CPP_RUNTIME_CLASS_INIT(ES3Type_MinMaxGradient_t5DD353D60E95642AB39D1C97C6FD6DD1B067D3CF_il2cpp_TypeInfo_var);
		ES3Type_t8FBECB7AE75168648B9524E0C2A38DAD4555421D * L_97 = ((ES3Type_MinMaxGradient_t5DD353D60E95642AB39D1C97C6FD6DD1B067D3CF_StaticFields*)il2cpp_codegen_static_fields_for(ES3Type_MinMaxGradient_t5DD353D60E95642AB39D1C97C6FD6DD1B067D3CF_il2cpp_TypeInfo_var))->get_Instance_12();
		NullCheck((ES3Reader_t2780AF8AA61DA2A817115CEF8612AC0E494D03C9 *)L_96);
		MinMaxGradient_tF4530B26F29D9635D670A33B9EE581EAC48C12B7  L_98;
		L_98 = GenericVirtFuncInvoker1< MinMaxGradient_tF4530B26F29D9635D670A33B9EE581EAC48C12B7 , ES3Type_t8FBECB7AE75168648B9524E0C2A38DAD4555421D * >::Invoke(ES3Reader_Read_TisMinMaxGradient_tF4530B26F29D9635D670A33B9EE581EAC48C12B7_m6A3DD8CBBAC5D32B838B6C4399009AB8AA512ACC_RuntimeMethod_var, (ES3Reader_t2780AF8AA61DA2A817115CEF8612AC0E494D03C9 *)L_96, (ES3Type_t8FBECB7AE75168648B9524E0C2A38DAD4555421D *)L_97);
		TrailModule_set_colorOverTrail_m8440C6574C8310292B93D70EA4FE3EE8C40DF8DB((TrailModule_t95D15372971E64A1977B7587ABAA87B1A31EF5C8 *)(TrailModule_t95D15372971E64A1977B7587ABAA87B1A31EF5C8 *)(&V_0), (MinMaxGradient_tF4530B26F29D9635D670A33B9EE581EAC48C12B7 )L_98, /*hidden argument*/NULL);
		// break;
		goto IL_038e;
	}

IL_0388:
	{
		// reader.Skip();
		ES3Reader_t2780AF8AA61DA2A817115CEF8612AC0E494D03C9 * L_99 = ___reader0;
		NullCheck((ES3Reader_t2780AF8AA61DA2A817115CEF8612AC0E494D03C9 *)L_99);
		VirtActionInvoker0::Invoke(41 /* System.Void ES3Reader::Skip() */, (ES3Reader_t2780AF8AA61DA2A817115CEF8612AC0E494D03C9 *)L_99);
	}

IL_038e:
	{
		// while((propertyName = reader.ReadPropertyName()) != null)
		ES3Reader_t2780AF8AA61DA2A817115CEF8612AC0E494D03C9 * L_100 = ___reader0;
		NullCheck((ES3Reader_t2780AF8AA61DA2A817115CEF8612AC0E494D03C9 *)L_100);
		String_t* L_101;
		L_101 = VirtFuncInvoker0< String_t* >::Invoke(21 /* System.String ES3Reader::ReadPropertyName() */, (ES3Reader_t2780AF8AA61DA2A817115CEF8612AC0E494D03C9 *)L_100);
		String_t* L_102 = (String_t*)L_101;
		V_1 = (String_t*)L_102;
		if (L_102)
		{
			goto IL_000c;
		}
	}
	{
		// }
		return;
	}
}
// System.Void ES3Types.ES3Type_TrailModule::ReadInto<UnityEngine.Rect>(ES3Reader,System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ES3Type_TrailModule_ReadInto_TisRect_t7D9187DB6339DBA5741C09B6CCEF2F54F1966878_m09CC3802C91C3B4B5FEDA5730FB9B5C52767DF01_gshared (ES3Type_TrailModule_tC773F73EC0443516DD128FF2B5AE010809742462 * __this, ES3Reader_t2780AF8AA61DA2A817115CEF8612AC0E494D03C9 * ___reader0, RuntimeObject * ___obj1, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ES3Reader_Read_TisBoolean_t07D1E3F34E4813023D64F584DFF7B34C9D922F37_mC6D1B158268FF9B97822FF9F5B37FB1723FEDA22_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ES3Reader_Read_TisMinMaxCurve_tF036239442AB2D438B1EDABEBC785426871084CD_mD285150CBFB52440643BBECB5ADF4EE8DE940535_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ES3Reader_Read_TisMinMaxGradient_tF4530B26F29D9635D670A33B9EE581EAC48C12B7_m6A3DD8CBBAC5D32B838B6C4399009AB8AA512ACC_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ES3Reader_Read_TisParticleSystemTrailTextureMode_tF3259187CA4D0A61EDB3A40E63CBF6C42641CE9F_m055DB1212E8BC34F385DF7D302F16241554E9730_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ES3Reader_Read_TisSingle_tE07797BA3C98D4CA9B5A19413C19A76688AB899E_m4A0416374498BDA042B8EB21E49B72326D6CE5F4_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ES3Type_MinMaxCurve_tC5342BF0F8735B85CB5E16FDD4C6FACC8AFAD3B7_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ES3Type_MinMaxGradient_t5DD353D60E95642AB39D1C97C6FD6DD1B067D3CF_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ES3Type_bool_t8F309F7B9CC735FF1DEE68081B6E3CAB367745F4_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ES3Type_float_tF86B773C86731BD9AD79448B860BBB178FE77644_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&TrailModule_t95D15372971E64A1977B7587ABAA87B1A31EF5C8_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral1D87A56AE67B2CD49CAE6E942C2FB7AD98925C00);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral354281948B6269615E32D856CF85B6F456724DAA);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral4221314F268D184F46688D45C85446821F1F1BC3);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral47C47DD09640803AD8016748EAE1F04DD1D41119);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral5C86338F177203D001C41D9C348A83D1338CC7D0);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral60126327537B7B8E6EE33C43FE0C5CA8BCC3A06A);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral87F70660D62DE5FC257FBADE9DA4EC9188597DE5);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralA967787586EC9E5A17A9C55E2002AB73A5E21A0A);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralADAEB0839588196B349BDB6CF33AFA3E0736360B);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralBE2893848F9FC647C2288DA6581A1522E9695182);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralBF540D6548854CC21630064FBA5390C9409C86F0);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralC580B374AA991574F91DFC86C068E7FAD661A3A4);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralE049DB547285CFCE1CB9A95934B6B6DCE2D219EC);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralF9D225733E1D10F9344C755C4A9C0870CD1DE97B);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralFE5F89F63E2381500F62A7CBD6954563BE44562F);
		s_Il2CppMethodInitialized = true;
	}
	TrailModule_t95D15372971E64A1977B7587ABAA87B1A31EF5C8  V_0;
	memset((&V_0), 0, sizeof(V_0));
	String_t* V_1 = NULL;
	uint32_t V_2 = 0;
	{
		// var instance = (UnityEngine.ParticleSystem.TrailModule)obj;
		RuntimeObject * L_0 = ___obj1;
		V_0 = (TrailModule_t95D15372971E64A1977B7587ABAA87B1A31EF5C8 )((*(TrailModule_t95D15372971E64A1977B7587ABAA87B1A31EF5C8 *)((TrailModule_t95D15372971E64A1977B7587ABAA87B1A31EF5C8 *)UnBox(L_0, TrailModule_t95D15372971E64A1977B7587ABAA87B1A31EF5C8_il2cpp_TypeInfo_var))));
		goto IL_038e;
	}

IL_000c:
	{
		String_t* L_1 = V_1;
		if (!L_1)
		{
			goto IL_0388;
		}
	}
	{
		String_t* L_2 = V_1;
		uint32_t L_3;
		L_3 = U3CPrivateImplementationDetailsU3E_ComputeStringHash_m3ADC1F612F9EE3DD518E6F0023A0DE0EE2B120A7((String_t*)L_2, /*hidden argument*/NULL);
		V_2 = (uint32_t)L_3;
		uint32_t L_4 = V_2;
		if ((!(((uint32_t)L_4) <= ((uint32_t)((int32_t)1376955374)))))
		{
			goto IL_008d;
		}
	}
	{
		uint32_t L_5 = V_2;
		if ((!(((uint32_t)L_5) <= ((uint32_t)((int32_t)494095910)))))
		{
			goto IL_004f;
		}
	}
	{
		uint32_t L_6 = V_2;
		if ((((int32_t)L_6) == ((int32_t)((int32_t)49525662))))
		{
			goto IL_010e;
		}
	}
	{
		uint32_t L_7 = V_2;
		if ((((int32_t)L_7) == ((int32_t)((int32_t)341298456))))
		{
			goto IL_021f;
		}
	}
	{
		uint32_t L_8 = V_2;
		if ((((int32_t)L_8) == ((int32_t)((int32_t)494095910))))
		{
			goto IL_0234;
		}
	}
	{
		goto IL_0388;
	}

IL_004f:
	{
		uint32_t L_9 = V_2;
		if ((!(((uint32_t)L_9) <= ((uint32_t)((int32_t)973733911)))))
		{
			goto IL_0072;
		}
	}
	{
		uint32_t L_10 = V_2;
		if ((((int32_t)L_10) == ((int32_t)((int32_t)559929418))))
		{
			goto IL_01b6;
		}
	}
	{
		uint32_t L_11 = V_2;
		if ((((int32_t)L_11) == ((int32_t)((int32_t)973733911))))
		{
			goto IL_0177;
		}
	}
	{
		goto IL_0388;
	}

IL_0072:
	{
		uint32_t L_12 = V_2;
		if ((((int32_t)L_12) == ((int32_t)((int32_t)1024708593))))
		{
			goto IL_014d;
		}
	}
	{
		uint32_t L_13 = V_2;
		if ((((int32_t)L_13) == ((int32_t)((int32_t)1376955374))))
		{
			goto IL_0138;
		}
	}
	{
		goto IL_0388;
	}

IL_008d:
	{
		uint32_t L_14 = V_2;
		if ((!(((uint32_t)L_14) <= ((uint32_t)((int32_t)-2100707162)))))
		{
			goto IL_00d3;
		}
	}
	{
		uint32_t L_15 = V_2;
		if ((!(((uint32_t)L_15) <= ((uint32_t)((int32_t)1975189197)))))
		{
			goto IL_00b8;
		}
	}
	{
		uint32_t L_16 = V_2;
		if ((((int32_t)L_16) == ((int32_t)((int32_t)1546474083))))
		{
			goto IL_020a;
		}
	}
	{
		uint32_t L_17 = V_2;
		if ((((int32_t)L_17) == ((int32_t)((int32_t)1975189197))))
		{
			goto IL_01cb;
		}
	}
	{
		goto IL_0388;
	}

IL_00b8:
	{
		uint32_t L_18 = V_2;
		if ((((int32_t)L_18) == ((int32_t)((int32_t)2053023684))))
		{
			goto IL_01a1;
		}
	}
	{
		uint32_t L_19 = V_2;
		if ((((int32_t)L_19) == ((int32_t)((int32_t)-2100707162))))
		{
			goto IL_0162;
		}
	}
	{
		goto IL_0388;
	}

IL_00d3:
	{
		uint32_t L_20 = V_2;
		if ((!(((uint32_t)L_20) <= ((uint32_t)((int32_t)-1319579393)))))
		{
			goto IL_00f6;
		}
	}
	{
		uint32_t L_21 = V_2;
		if ((((int32_t)L_21) == ((int32_t)((int32_t)-1562862963))))
		{
			goto IL_01e0;
		}
	}
	{
		uint32_t L_22 = V_2;
		if ((((int32_t)L_22) == ((int32_t)((int32_t)-1319579393))))
		{
			goto IL_018c;
		}
	}
	{
		goto IL_0388;
	}

IL_00f6:
	{
		uint32_t L_23 = V_2;
		if ((((int32_t)L_23) == ((int32_t)((int32_t)-1055777148))))
		{
			goto IL_0123;
		}
	}
	{
		uint32_t L_24 = V_2;
		if ((((int32_t)L_24) == ((int32_t)((int32_t)-413379935))))
		{
			goto IL_01f5;
		}
	}
	{
		goto IL_0388;
	}

IL_010e:
	{
		String_t* L_25 = V_1;
		bool L_26;
		L_26 = String_op_Equality_m50B3548E4AC232558190B0052877B290AA1D436A((String_t*)L_25, (String_t*)_stringLiteralF9D225733E1D10F9344C755C4A9C0870CD1DE97B, /*hidden argument*/NULL);
		if (L_26)
		{
			goto IL_0249;
		}
	}
	{
		goto IL_0388;
	}

IL_0123:
	{
		String_t* L_27 = V_1;
		bool L_28;
		L_28 = String_op_Equality_m50B3548E4AC232558190B0052877B290AA1D436A((String_t*)L_27, (String_t*)_stringLiteral60126327537B7B8E6EE33C43FE0C5CA8BCC3A06A, /*hidden argument*/NULL);
		if (L_28)
		{
			goto IL_0260;
		}
	}
	{
		goto IL_0388;
	}

IL_0138:
	{
		String_t* L_29 = V_1;
		bool L_30;
		L_30 = String_op_Equality_m50B3548E4AC232558190B0052877B290AA1D436A((String_t*)L_29, (String_t*)_stringLiteralBE2893848F9FC647C2288DA6581A1522E9695182, /*hidden argument*/NULL);
		if (L_30)
		{
			goto IL_0277;
		}
	}
	{
		goto IL_0388;
	}

IL_014d:
	{
		String_t* L_31 = V_1;
		bool L_32;
		L_32 = String_op_Equality_m50B3548E4AC232558190B0052877B290AA1D436A((String_t*)L_31, (String_t*)_stringLiteral4221314F268D184F46688D45C85446821F1F1BC3, /*hidden argument*/NULL);
		if (L_32)
		{
			goto IL_028e;
		}
	}
	{
		goto IL_0388;
	}

IL_0162:
	{
		String_t* L_33 = V_1;
		bool L_34;
		L_34 = String_op_Equality_m50B3548E4AC232558190B0052877B290AA1D436A((String_t*)L_33, (String_t*)_stringLiteral5C86338F177203D001C41D9C348A83D1338CC7D0, /*hidden argument*/NULL);
		if (L_34)
		{
			goto IL_02a5;
		}
	}
	{
		goto IL_0388;
	}

IL_0177:
	{
		String_t* L_35 = V_1;
		bool L_36;
		L_36 = String_op_Equality_m50B3548E4AC232558190B0052877B290AA1D436A((String_t*)L_35, (String_t*)_stringLiteralFE5F89F63E2381500F62A7CBD6954563BE44562F, /*hidden argument*/NULL);
		if (L_36)
		{
			goto IL_02bc;
		}
	}
	{
		goto IL_0388;
	}

IL_018c:
	{
		String_t* L_37 = V_1;
		bool L_38;
		L_38 = String_op_Equality_m50B3548E4AC232558190B0052877B290AA1D436A((String_t*)L_37, (String_t*)_stringLiteral87F70660D62DE5FC257FBADE9DA4EC9188597DE5, /*hidden argument*/NULL);
		if (L_38)
		{
			goto IL_02ce;
		}
	}
	{
		goto IL_0388;
	}

IL_01a1:
	{
		String_t* L_39 = V_1;
		bool L_40;
		L_40 = String_op_Equality_m50B3548E4AC232558190B0052877B290AA1D436A((String_t*)L_39, (String_t*)_stringLiteral354281948B6269615E32D856CF85B6F456724DAA, /*hidden argument*/NULL);
		if (L_40)
		{
			goto IL_02e5;
		}
	}
	{
		goto IL_0388;
	}

IL_01b6:
	{
		String_t* L_41 = V_1;
		bool L_42;
		L_42 = String_op_Equality_m50B3548E4AC232558190B0052877B290AA1D436A((String_t*)L_41, (String_t*)_stringLiteralADAEB0839588196B349BDB6CF33AFA3E0736360B, /*hidden argument*/NULL);
		if (L_42)
		{
			goto IL_02fc;
		}
	}
	{
		goto IL_0388;
	}

IL_01cb:
	{
		String_t* L_43 = V_1;
		bool L_44;
		L_44 = String_op_Equality_m50B3548E4AC232558190B0052877B290AA1D436A((String_t*)L_43, (String_t*)_stringLiteralC580B374AA991574F91DFC86C068E7FAD661A3A4, /*hidden argument*/NULL);
		if (L_44)
		{
			goto IL_0310;
		}
	}
	{
		goto IL_0388;
	}

IL_01e0:
	{
		String_t* L_45 = V_1;
		bool L_46;
		L_46 = String_op_Equality_m50B3548E4AC232558190B0052877B290AA1D436A((String_t*)L_45, (String_t*)_stringLiteralE049DB547285CFCE1CB9A95934B6B6DCE2D219EC, /*hidden argument*/NULL);
		if (L_46)
		{
			goto IL_0324;
		}
	}
	{
		goto IL_0388;
	}

IL_01f5:
	{
		String_t* L_47 = V_1;
		bool L_48;
		L_48 = String_op_Equality_m50B3548E4AC232558190B0052877B290AA1D436A((String_t*)L_47, (String_t*)_stringLiteralBF540D6548854CC21630064FBA5390C9409C86F0, /*hidden argument*/NULL);
		if (L_48)
		{
			goto IL_0338;
		}
	}
	{
		goto IL_0388;
	}

IL_020a:
	{
		String_t* L_49 = V_1;
		bool L_50;
		L_50 = String_op_Equality_m50B3548E4AC232558190B0052877B290AA1D436A((String_t*)L_49, (String_t*)_stringLiteral1D87A56AE67B2CD49CAE6E942C2FB7AD98925C00, /*hidden argument*/NULL);
		if (L_50)
		{
			goto IL_034c;
		}
	}
	{
		goto IL_0388;
	}

IL_021f:
	{
		String_t* L_51 = V_1;
		bool L_52;
		L_52 = String_op_Equality_m50B3548E4AC232558190B0052877B290AA1D436A((String_t*)L_51, (String_t*)_stringLiteralA967787586EC9E5A17A9C55E2002AB73A5E21A0A, /*hidden argument*/NULL);
		if (L_52)
		{
			goto IL_0360;
		}
	}
	{
		goto IL_0388;
	}

IL_0234:
	{
		String_t* L_53 = V_1;
		bool L_54;
		L_54 = String_op_Equality_m50B3548E4AC232558190B0052877B290AA1D436A((String_t*)L_53, (String_t*)_stringLiteral47C47DD09640803AD8016748EAE1F04DD1D41119, /*hidden argument*/NULL);
		if (L_54)
		{
			goto IL_0374;
		}
	}
	{
		goto IL_0388;
	}

IL_0249:
	{
		// instance.enabled = reader.Read<System.Boolean>(ES3Type_bool.Instance);
		ES3Reader_t2780AF8AA61DA2A817115CEF8612AC0E494D03C9 * L_55 = ___reader0;
		IL2CPP_RUNTIME_CLASS_INIT(ES3Type_bool_t8F309F7B9CC735FF1DEE68081B6E3CAB367745F4_il2cpp_TypeInfo_var);
		ES3Type_t8FBECB7AE75168648B9524E0C2A38DAD4555421D * L_56 = ((ES3Type_bool_t8F309F7B9CC735FF1DEE68081B6E3CAB367745F4_StaticFields*)il2cpp_codegen_static_fields_for(ES3Type_bool_t8F309F7B9CC735FF1DEE68081B6E3CAB367745F4_il2cpp_TypeInfo_var))->get_Instance_12();
		NullCheck((ES3Reader_t2780AF8AA61DA2A817115CEF8612AC0E494D03C9 *)L_55);
		bool L_57;
		L_57 = GenericVirtFuncInvoker1< bool, ES3Type_t8FBECB7AE75168648B9524E0C2A38DAD4555421D * >::Invoke(ES3Reader_Read_TisBoolean_t07D1E3F34E4813023D64F584DFF7B34C9D922F37_mC6D1B158268FF9B97822FF9F5B37FB1723FEDA22_RuntimeMethod_var, (ES3Reader_t2780AF8AA61DA2A817115CEF8612AC0E494D03C9 *)L_55, (ES3Type_t8FBECB7AE75168648B9524E0C2A38DAD4555421D *)L_56);
		TrailModule_set_enabled_mFC8451DDDF40CCBB3E32A4B30A001115F6346894((TrailModule_t95D15372971E64A1977B7587ABAA87B1A31EF5C8 *)(TrailModule_t95D15372971E64A1977B7587ABAA87B1A31EF5C8 *)(&V_0), (bool)L_57, /*hidden argument*/NULL);
		// break;
		goto IL_038e;
	}

IL_0260:
	{
		// instance.ratio = reader.Read<System.Single>(ES3Type_float.Instance);
		ES3Reader_t2780AF8AA61DA2A817115CEF8612AC0E494D03C9 * L_58 = ___reader0;
		IL2CPP_RUNTIME_CLASS_INIT(ES3Type_float_tF86B773C86731BD9AD79448B860BBB178FE77644_il2cpp_TypeInfo_var);
		ES3Type_t8FBECB7AE75168648B9524E0C2A38DAD4555421D * L_59 = ((ES3Type_float_tF86B773C86731BD9AD79448B860BBB178FE77644_StaticFields*)il2cpp_codegen_static_fields_for(ES3Type_float_tF86B773C86731BD9AD79448B860BBB178FE77644_il2cpp_TypeInfo_var))->get_Instance_12();
		NullCheck((ES3Reader_t2780AF8AA61DA2A817115CEF8612AC0E494D03C9 *)L_58);
		float L_60;
		L_60 = GenericVirtFuncInvoker1< float, ES3Type_t8FBECB7AE75168648B9524E0C2A38DAD4555421D * >::Invoke(ES3Reader_Read_TisSingle_tE07797BA3C98D4CA9B5A19413C19A76688AB899E_m4A0416374498BDA042B8EB21E49B72326D6CE5F4_RuntimeMethod_var, (ES3Reader_t2780AF8AA61DA2A817115CEF8612AC0E494D03C9 *)L_58, (ES3Type_t8FBECB7AE75168648B9524E0C2A38DAD4555421D *)L_59);
		TrailModule_set_ratio_m34E63B34E7B0E8D037AD45532B2E2D5BD0750189((TrailModule_t95D15372971E64A1977B7587ABAA87B1A31EF5C8 *)(TrailModule_t95D15372971E64A1977B7587ABAA87B1A31EF5C8 *)(&V_0), (float)L_60, /*hidden argument*/NULL);
		// break;
		goto IL_038e;
	}

IL_0277:
	{
		// instance.lifetime = reader.Read<UnityEngine.ParticleSystem.MinMaxCurve>(ES3Type_MinMaxCurve.Instance);
		ES3Reader_t2780AF8AA61DA2A817115CEF8612AC0E494D03C9 * L_61 = ___reader0;
		IL2CPP_RUNTIME_CLASS_INIT(ES3Type_MinMaxCurve_tC5342BF0F8735B85CB5E16FDD4C6FACC8AFAD3B7_il2cpp_TypeInfo_var);
		ES3Type_t8FBECB7AE75168648B9524E0C2A38DAD4555421D * L_62 = ((ES3Type_MinMaxCurve_tC5342BF0F8735B85CB5E16FDD4C6FACC8AFAD3B7_StaticFields*)il2cpp_codegen_static_fields_for(ES3Type_MinMaxCurve_tC5342BF0F8735B85CB5E16FDD4C6FACC8AFAD3B7_il2cpp_TypeInfo_var))->get_Instance_12();
		NullCheck((ES3Reader_t2780AF8AA61DA2A817115CEF8612AC0E494D03C9 *)L_61);
		MinMaxCurve_tF036239442AB2D438B1EDABEBC785426871084CD  L_63;
		L_63 = GenericVirtFuncInvoker1< MinMaxCurve_tF036239442AB2D438B1EDABEBC785426871084CD , ES3Type_t8FBECB7AE75168648B9524E0C2A38DAD4555421D * >::Invoke(ES3Reader_Read_TisMinMaxCurve_tF036239442AB2D438B1EDABEBC785426871084CD_mD285150CBFB52440643BBECB5ADF4EE8DE940535_RuntimeMethod_var, (ES3Reader_t2780AF8AA61DA2A817115CEF8612AC0E494D03C9 *)L_61, (ES3Type_t8FBECB7AE75168648B9524E0C2A38DAD4555421D *)L_62);
		TrailModule_set_lifetime_m57C898C42B9F18F5A0E88AAA7B10276CC158C39D((TrailModule_t95D15372971E64A1977B7587ABAA87B1A31EF5C8 *)(TrailModule_t95D15372971E64A1977B7587ABAA87B1A31EF5C8 *)(&V_0), (MinMaxCurve_tF036239442AB2D438B1EDABEBC785426871084CD )L_63, /*hidden argument*/NULL);
		// break;
		goto IL_038e;
	}

IL_028e:
	{
		// instance.lifetimeMultiplier = reader.Read<System.Single>(ES3Type_float.Instance);
		ES3Reader_t2780AF8AA61DA2A817115CEF8612AC0E494D03C9 * L_64 = ___reader0;
		IL2CPP_RUNTIME_CLASS_INIT(ES3Type_float_tF86B773C86731BD9AD79448B860BBB178FE77644_il2cpp_TypeInfo_var);
		ES3Type_t8FBECB7AE75168648B9524E0C2A38DAD4555421D * L_65 = ((ES3Type_float_tF86B773C86731BD9AD79448B860BBB178FE77644_StaticFields*)il2cpp_codegen_static_fields_for(ES3Type_float_tF86B773C86731BD9AD79448B860BBB178FE77644_il2cpp_TypeInfo_var))->get_Instance_12();
		NullCheck((ES3Reader_t2780AF8AA61DA2A817115CEF8612AC0E494D03C9 *)L_64);
		float L_66;
		L_66 = GenericVirtFuncInvoker1< float, ES3Type_t8FBECB7AE75168648B9524E0C2A38DAD4555421D * >::Invoke(ES3Reader_Read_TisSingle_tE07797BA3C98D4CA9B5A19413C19A76688AB899E_m4A0416374498BDA042B8EB21E49B72326D6CE5F4_RuntimeMethod_var, (ES3Reader_t2780AF8AA61DA2A817115CEF8612AC0E494D03C9 *)L_64, (ES3Type_t8FBECB7AE75168648B9524E0C2A38DAD4555421D *)L_65);
		TrailModule_set_lifetimeMultiplier_m23F95D65EE8C82152AE1CF2E41531EC2789A866B((TrailModule_t95D15372971E64A1977B7587ABAA87B1A31EF5C8 *)(TrailModule_t95D15372971E64A1977B7587ABAA87B1A31EF5C8 *)(&V_0), (float)L_66, /*hidden argument*/NULL);
		// break;
		goto IL_038e;
	}

IL_02a5:
	{
		// instance.minVertexDistance = reader.Read<System.Single>(ES3Type_float.Instance);
		ES3Reader_t2780AF8AA61DA2A817115CEF8612AC0E494D03C9 * L_67 = ___reader0;
		IL2CPP_RUNTIME_CLASS_INIT(ES3Type_float_tF86B773C86731BD9AD79448B860BBB178FE77644_il2cpp_TypeInfo_var);
		ES3Type_t8FBECB7AE75168648B9524E0C2A38DAD4555421D * L_68 = ((ES3Type_float_tF86B773C86731BD9AD79448B860BBB178FE77644_StaticFields*)il2cpp_codegen_static_fields_for(ES3Type_float_tF86B773C86731BD9AD79448B860BBB178FE77644_il2cpp_TypeInfo_var))->get_Instance_12();
		NullCheck((ES3Reader_t2780AF8AA61DA2A817115CEF8612AC0E494D03C9 *)L_67);
		float L_69;
		L_69 = GenericVirtFuncInvoker1< float, ES3Type_t8FBECB7AE75168648B9524E0C2A38DAD4555421D * >::Invoke(ES3Reader_Read_TisSingle_tE07797BA3C98D4CA9B5A19413C19A76688AB899E_m4A0416374498BDA042B8EB21E49B72326D6CE5F4_RuntimeMethod_var, (ES3Reader_t2780AF8AA61DA2A817115CEF8612AC0E494D03C9 *)L_67, (ES3Type_t8FBECB7AE75168648B9524E0C2A38DAD4555421D *)L_68);
		TrailModule_set_minVertexDistance_mF7C29F88FBF540CE4987F4CF9B141C624808FBC5((TrailModule_t95D15372971E64A1977B7587ABAA87B1A31EF5C8 *)(TrailModule_t95D15372971E64A1977B7587ABAA87B1A31EF5C8 *)(&V_0), (float)L_69, /*hidden argument*/NULL);
		// break;
		goto IL_038e;
	}

IL_02bc:
	{
		// instance.textureMode = reader.Read<UnityEngine.ParticleSystemTrailTextureMode>();
		ES3Reader_t2780AF8AA61DA2A817115CEF8612AC0E494D03C9 * L_70 = ___reader0;
		NullCheck((ES3Reader_t2780AF8AA61DA2A817115CEF8612AC0E494D03C9 *)L_70);
		int32_t L_71;
		L_71 = GenericVirtFuncInvoker0< int32_t >::Invoke(ES3Reader_Read_TisParticleSystemTrailTextureMode_tF3259187CA4D0A61EDB3A40E63CBF6C42641CE9F_m055DB1212E8BC34F385DF7D302F16241554E9730_RuntimeMethod_var, (ES3Reader_t2780AF8AA61DA2A817115CEF8612AC0E494D03C9 *)L_70);
		TrailModule_set_textureMode_mC1F8AE0D2965FC47BDBFF4F53E0673D5FB58CF28((TrailModule_t95D15372971E64A1977B7587ABAA87B1A31EF5C8 *)(TrailModule_t95D15372971E64A1977B7587ABAA87B1A31EF5C8 *)(&V_0), (int32_t)L_71, /*hidden argument*/NULL);
		// break;
		goto IL_038e;
	}

IL_02ce:
	{
		// instance.worldSpace = reader.Read<System.Boolean>(ES3Type_bool.Instance);
		ES3Reader_t2780AF8AA61DA2A817115CEF8612AC0E494D03C9 * L_72 = ___reader0;
		IL2CPP_RUNTIME_CLASS_INIT(ES3Type_bool_t8F309F7B9CC735FF1DEE68081B6E3CAB367745F4_il2cpp_TypeInfo_var);
		ES3Type_t8FBECB7AE75168648B9524E0C2A38DAD4555421D * L_73 = ((ES3Type_bool_t8F309F7B9CC735FF1DEE68081B6E3CAB367745F4_StaticFields*)il2cpp_codegen_static_fields_for(ES3Type_bool_t8F309F7B9CC735FF1DEE68081B6E3CAB367745F4_il2cpp_TypeInfo_var))->get_Instance_12();
		NullCheck((ES3Reader_t2780AF8AA61DA2A817115CEF8612AC0E494D03C9 *)L_72);
		bool L_74;
		L_74 = GenericVirtFuncInvoker1< bool, ES3Type_t8FBECB7AE75168648B9524E0C2A38DAD4555421D * >::Invoke(ES3Reader_Read_TisBoolean_t07D1E3F34E4813023D64F584DFF7B34C9D922F37_mC6D1B158268FF9B97822FF9F5B37FB1723FEDA22_RuntimeMethod_var, (ES3Reader_t2780AF8AA61DA2A817115CEF8612AC0E494D03C9 *)L_72, (ES3Type_t8FBECB7AE75168648B9524E0C2A38DAD4555421D *)L_73);
		TrailModule_set_worldSpace_m42A63AF4A96F24A621A29A0F35240195F0E56B1A((TrailModule_t95D15372971E64A1977B7587ABAA87B1A31EF5C8 *)(TrailModule_t95D15372971E64A1977B7587ABAA87B1A31EF5C8 *)(&V_0), (bool)L_74, /*hidden argument*/NULL);
		// break;
		goto IL_038e;
	}

IL_02e5:
	{
		// instance.dieWithParticles = reader.Read<System.Boolean>(ES3Type_bool.Instance);
		ES3Reader_t2780AF8AA61DA2A817115CEF8612AC0E494D03C9 * L_75 = ___reader0;
		IL2CPP_RUNTIME_CLASS_INIT(ES3Type_bool_t8F309F7B9CC735FF1DEE68081B6E3CAB367745F4_il2cpp_TypeInfo_var);
		ES3Type_t8FBECB7AE75168648B9524E0C2A38DAD4555421D * L_76 = ((ES3Type_bool_t8F309F7B9CC735FF1DEE68081B6E3CAB367745F4_StaticFields*)il2cpp_codegen_static_fields_for(ES3Type_bool_t8F309F7B9CC735FF1DEE68081B6E3CAB367745F4_il2cpp_TypeInfo_var))->get_Instance_12();
		NullCheck((ES3Reader_t2780AF8AA61DA2A817115CEF8612AC0E494D03C9 *)L_75);
		bool L_77;
		L_77 = GenericVirtFuncInvoker1< bool, ES3Type_t8FBECB7AE75168648B9524E0C2A38DAD4555421D * >::Invoke(ES3Reader_Read_TisBoolean_t07D1E3F34E4813023D64F584DFF7B34C9D922F37_mC6D1B158268FF9B97822FF9F5B37FB1723FEDA22_RuntimeMethod_var, (ES3Reader_t2780AF8AA61DA2A817115CEF8612AC0E494D03C9 *)L_75, (ES3Type_t8FBECB7AE75168648B9524E0C2A38DAD4555421D *)L_76);
		TrailModule_set_dieWithParticles_mB7C4E8DC2F908FDF6D57A77B54B821E360D8DA99((TrailModule_t95D15372971E64A1977B7587ABAA87B1A31EF5C8 *)(TrailModule_t95D15372971E64A1977B7587ABAA87B1A31EF5C8 *)(&V_0), (bool)L_77, /*hidden argument*/NULL);
		// break;
		goto IL_038e;
	}

IL_02fc:
	{
		// instance.sizeAffectsWidth = reader.Read<System.Boolean>(ES3Type_bool.Instance);
		ES3Reader_t2780AF8AA61DA2A817115CEF8612AC0E494D03C9 * L_78 = ___reader0;
		IL2CPP_RUNTIME_CLASS_INIT(ES3Type_bool_t8F309F7B9CC735FF1DEE68081B6E3CAB367745F4_il2cpp_TypeInfo_var);
		ES3Type_t8FBECB7AE75168648B9524E0C2A38DAD4555421D * L_79 = ((ES3Type_bool_t8F309F7B9CC735FF1DEE68081B6E3CAB367745F4_StaticFields*)il2cpp_codegen_static_fields_for(ES3Type_bool_t8F309F7B9CC735FF1DEE68081B6E3CAB367745F4_il2cpp_TypeInfo_var))->get_Instance_12();
		NullCheck((ES3Reader_t2780AF8AA61DA2A817115CEF8612AC0E494D03C9 *)L_78);
		bool L_80;
		L_80 = GenericVirtFuncInvoker1< bool, ES3Type_t8FBECB7AE75168648B9524E0C2A38DAD4555421D * >::Invoke(ES3Reader_Read_TisBoolean_t07D1E3F34E4813023D64F584DFF7B34C9D922F37_mC6D1B158268FF9B97822FF9F5B37FB1723FEDA22_RuntimeMethod_var, (ES3Reader_t2780AF8AA61DA2A817115CEF8612AC0E494D03C9 *)L_78, (ES3Type_t8FBECB7AE75168648B9524E0C2A38DAD4555421D *)L_79);
		TrailModule_set_sizeAffectsWidth_m3517856E39080DA69B447499C8846D2491B0ABF0((TrailModule_t95D15372971E64A1977B7587ABAA87B1A31EF5C8 *)(TrailModule_t95D15372971E64A1977B7587ABAA87B1A31EF5C8 *)(&V_0), (bool)L_80, /*hidden argument*/NULL);
		// break;
		goto IL_038e;
	}

IL_0310:
	{
		// instance.sizeAffectsLifetime = reader.Read<System.Boolean>(ES3Type_bool.Instance);
		ES3Reader_t2780AF8AA61DA2A817115CEF8612AC0E494D03C9 * L_81 = ___reader0;
		IL2CPP_RUNTIME_CLASS_INIT(ES3Type_bool_t8F309F7B9CC735FF1DEE68081B6E3CAB367745F4_il2cpp_TypeInfo_var);
		ES3Type_t8FBECB7AE75168648B9524E0C2A38DAD4555421D * L_82 = ((ES3Type_bool_t8F309F7B9CC735FF1DEE68081B6E3CAB367745F4_StaticFields*)il2cpp_codegen_static_fields_for(ES3Type_bool_t8F309F7B9CC735FF1DEE68081B6E3CAB367745F4_il2cpp_TypeInfo_var))->get_Instance_12();
		NullCheck((ES3Reader_t2780AF8AA61DA2A817115CEF8612AC0E494D03C9 *)L_81);
		bool L_83;
		L_83 = GenericVirtFuncInvoker1< bool, ES3Type_t8FBECB7AE75168648B9524E0C2A38DAD4555421D * >::Invoke(ES3Reader_Read_TisBoolean_t07D1E3F34E4813023D64F584DFF7B34C9D922F37_mC6D1B158268FF9B97822FF9F5B37FB1723FEDA22_RuntimeMethod_var, (ES3Reader_t2780AF8AA61DA2A817115CEF8612AC0E494D03C9 *)L_81, (ES3Type_t8FBECB7AE75168648B9524E0C2A38DAD4555421D *)L_82);
		TrailModule_set_sizeAffectsLifetime_m98BF4A6594193D824B52D88371CF963ACBA388FD((TrailModule_t95D15372971E64A1977B7587ABAA87B1A31EF5C8 *)(TrailModule_t95D15372971E64A1977B7587ABAA87B1A31EF5C8 *)(&V_0), (bool)L_83, /*hidden argument*/NULL);
		// break;
		goto IL_038e;
	}

IL_0324:
	{
		// instance.inheritParticleColor = reader.Read<System.Boolean>(ES3Type_bool.Instance);
		ES3Reader_t2780AF8AA61DA2A817115CEF8612AC0E494D03C9 * L_84 = ___reader0;
		IL2CPP_RUNTIME_CLASS_INIT(ES3Type_bool_t8F309F7B9CC735FF1DEE68081B6E3CAB367745F4_il2cpp_TypeInfo_var);
		ES3Type_t8FBECB7AE75168648B9524E0C2A38DAD4555421D * L_85 = ((ES3Type_bool_t8F309F7B9CC735FF1DEE68081B6E3CAB367745F4_StaticFields*)il2cpp_codegen_static_fields_for(ES3Type_bool_t8F309F7B9CC735FF1DEE68081B6E3CAB367745F4_il2cpp_TypeInfo_var))->get_Instance_12();
		NullCheck((ES3Reader_t2780AF8AA61DA2A817115CEF8612AC0E494D03C9 *)L_84);
		bool L_86;
		L_86 = GenericVirtFuncInvoker1< bool, ES3Type_t8FBECB7AE75168648B9524E0C2A38DAD4555421D * >::Invoke(ES3Reader_Read_TisBoolean_t07D1E3F34E4813023D64F584DFF7B34C9D922F37_mC6D1B158268FF9B97822FF9F5B37FB1723FEDA22_RuntimeMethod_var, (ES3Reader_t2780AF8AA61DA2A817115CEF8612AC0E494D03C9 *)L_84, (ES3Type_t8FBECB7AE75168648B9524E0C2A38DAD4555421D *)L_85);
		TrailModule_set_inheritParticleColor_mCD83E87B5E00F2BFFBE08AD2D1D68606283A4FEE((TrailModule_t95D15372971E64A1977B7587ABAA87B1A31EF5C8 *)(TrailModule_t95D15372971E64A1977B7587ABAA87B1A31EF5C8 *)(&V_0), (bool)L_86, /*hidden argument*/NULL);
		// break;
		goto IL_038e;
	}

IL_0338:
	{
		// instance.colorOverLifetime = reader.Read<UnityEngine.ParticleSystem.MinMaxGradient>(ES3Type_MinMaxGradient.Instance);
		ES3Reader_t2780AF8AA61DA2A817115CEF8612AC0E494D03C9 * L_87 = ___reader0;
		IL2CPP_RUNTIME_CLASS_INIT(ES3Type_MinMaxGradient_t5DD353D60E95642AB39D1C97C6FD6DD1B067D3CF_il2cpp_TypeInfo_var);
		ES3Type_t8FBECB7AE75168648B9524E0C2A38DAD4555421D * L_88 = ((ES3Type_MinMaxGradient_t5DD353D60E95642AB39D1C97C6FD6DD1B067D3CF_StaticFields*)il2cpp_codegen_static_fields_for(ES3Type_MinMaxGradient_t5DD353D60E95642AB39D1C97C6FD6DD1B067D3CF_il2cpp_TypeInfo_var))->get_Instance_12();
		NullCheck((ES3Reader_t2780AF8AA61DA2A817115CEF8612AC0E494D03C9 *)L_87);
		MinMaxGradient_tF4530B26F29D9635D670A33B9EE581EAC48C12B7  L_89;
		L_89 = GenericVirtFuncInvoker1< MinMaxGradient_tF4530B26F29D9635D670A33B9EE581EAC48C12B7 , ES3Type_t8FBECB7AE75168648B9524E0C2A38DAD4555421D * >::Invoke(ES3Reader_Read_TisMinMaxGradient_tF4530B26F29D9635D670A33B9EE581EAC48C12B7_m6A3DD8CBBAC5D32B838B6C4399009AB8AA512ACC_RuntimeMethod_var, (ES3Reader_t2780AF8AA61DA2A817115CEF8612AC0E494D03C9 *)L_87, (ES3Type_t8FBECB7AE75168648B9524E0C2A38DAD4555421D *)L_88);
		TrailModule_set_colorOverLifetime_mCD56BD4B75D3A3947069BA1B93FEC78AAE08DF27((TrailModule_t95D15372971E64A1977B7587ABAA87B1A31EF5C8 *)(TrailModule_t95D15372971E64A1977B7587ABAA87B1A31EF5C8 *)(&V_0), (MinMaxGradient_tF4530B26F29D9635D670A33B9EE581EAC48C12B7 )L_89, /*hidden argument*/NULL);
		// break;
		goto IL_038e;
	}

IL_034c:
	{
		// instance.widthOverTrail = reader.Read<UnityEngine.ParticleSystem.MinMaxCurve>(ES3Type_MinMaxCurve.Instance);
		ES3Reader_t2780AF8AA61DA2A817115CEF8612AC0E494D03C9 * L_90 = ___reader0;
		IL2CPP_RUNTIME_CLASS_INIT(ES3Type_MinMaxCurve_tC5342BF0F8735B85CB5E16FDD4C6FACC8AFAD3B7_il2cpp_TypeInfo_var);
		ES3Type_t8FBECB7AE75168648B9524E0C2A38DAD4555421D * L_91 = ((ES3Type_MinMaxCurve_tC5342BF0F8735B85CB5E16FDD4C6FACC8AFAD3B7_StaticFields*)il2cpp_codegen_static_fields_for(ES3Type_MinMaxCurve_tC5342BF0F8735B85CB5E16FDD4C6FACC8AFAD3B7_il2cpp_TypeInfo_var))->get_Instance_12();
		NullCheck((ES3Reader_t2780AF8AA61DA2A817115CEF8612AC0E494D03C9 *)L_90);
		MinMaxCurve_tF036239442AB2D438B1EDABEBC785426871084CD  L_92;
		L_92 = GenericVirtFuncInvoker1< MinMaxCurve_tF036239442AB2D438B1EDABEBC785426871084CD , ES3Type_t8FBECB7AE75168648B9524E0C2A38DAD4555421D * >::Invoke(ES3Reader_Read_TisMinMaxCurve_tF036239442AB2D438B1EDABEBC785426871084CD_mD285150CBFB52440643BBECB5ADF4EE8DE940535_RuntimeMethod_var, (ES3Reader_t2780AF8AA61DA2A817115CEF8612AC0E494D03C9 *)L_90, (ES3Type_t8FBECB7AE75168648B9524E0C2A38DAD4555421D *)L_91);
		TrailModule_set_widthOverTrail_m6C0A896EBFDED7CE46344B3A0B04212934F30DE1((TrailModule_t95D15372971E64A1977B7587ABAA87B1A31EF5C8 *)(TrailModule_t95D15372971E64A1977B7587ABAA87B1A31EF5C8 *)(&V_0), (MinMaxCurve_tF036239442AB2D438B1EDABEBC785426871084CD )L_92, /*hidden argument*/NULL);
		// break;
		goto IL_038e;
	}

IL_0360:
	{
		// instance.widthOverTrailMultiplier = reader.Read<System.Single>(ES3Type_float.Instance);
		ES3Reader_t2780AF8AA61DA2A817115CEF8612AC0E494D03C9 * L_93 = ___reader0;
		IL2CPP_RUNTIME_CLASS_INIT(ES3Type_float_tF86B773C86731BD9AD79448B860BBB178FE77644_il2cpp_TypeInfo_var);
		ES3Type_t8FBECB7AE75168648B9524E0C2A38DAD4555421D * L_94 = ((ES3Type_float_tF86B773C86731BD9AD79448B860BBB178FE77644_StaticFields*)il2cpp_codegen_static_fields_for(ES3Type_float_tF86B773C86731BD9AD79448B860BBB178FE77644_il2cpp_TypeInfo_var))->get_Instance_12();
		NullCheck((ES3Reader_t2780AF8AA61DA2A817115CEF8612AC0E494D03C9 *)L_93);
		float L_95;
		L_95 = GenericVirtFuncInvoker1< float, ES3Type_t8FBECB7AE75168648B9524E0C2A38DAD4555421D * >::Invoke(ES3Reader_Read_TisSingle_tE07797BA3C98D4CA9B5A19413C19A76688AB899E_m4A0416374498BDA042B8EB21E49B72326D6CE5F4_RuntimeMethod_var, (ES3Reader_t2780AF8AA61DA2A817115CEF8612AC0E494D03C9 *)L_93, (ES3Type_t8FBECB7AE75168648B9524E0C2A38DAD4555421D *)L_94);
		TrailModule_set_widthOverTrailMultiplier_m6A7EA2856CF30B710CCB528EA3EBFD1799C19BD4((TrailModule_t95D15372971E64A1977B7587ABAA87B1A31EF5C8 *)(TrailModule_t95D15372971E64A1977B7587ABAA87B1A31EF5C8 *)(&V_0), (float)L_95, /*hidden argument*/NULL);
		// break;
		goto IL_038e;
	}

IL_0374:
	{
		// instance.colorOverTrail = reader.Read<UnityEngine.ParticleSystem.MinMaxGradient>(ES3Type_MinMaxGradient.Instance);
		ES3Reader_t2780AF8AA61DA2A817115CEF8612AC0E494D03C9 * L_96 = ___reader0;
		IL2CPP_RUNTIME_CLASS_INIT(ES3Type_MinMaxGradient_t5DD353D60E95642AB39D1C97C6FD6DD1B067D3CF_il2cpp_TypeInfo_var);
		ES3Type_t8FBECB7AE75168648B9524E0C2A38DAD4555421D * L_97 = ((ES3Type_MinMaxGradient_t5DD353D60E95642AB39D1C97C6FD6DD1B067D3CF_StaticFields*)il2cpp_codegen_static_fields_for(ES3Type_MinMaxGradient_t5DD353D60E95642AB39D1C97C6FD6DD1B067D3CF_il2cpp_TypeInfo_var))->get_Instance_12();
		NullCheck((ES3Reader_t2780AF8AA61DA2A817115CEF8612AC0E494D03C9 *)L_96);
		MinMaxGradient_tF4530B26F29D9635D670A33B9EE581EAC48C12B7  L_98;
		L_98 = GenericVirtFuncInvoker1< MinMaxGradient_tF4530B26F29D9635D670A33B9EE581EAC48C12B7 , ES3Type_t8FBECB7AE75168648B9524E0C2A38DAD4555421D * >::Invoke(ES3Reader_Read_TisMinMaxGradient_tF4530B26F29D9635D670A33B9EE581EAC48C12B7_m6A3DD8CBBAC5D32B838B6C4399009AB8AA512ACC_RuntimeMethod_var, (ES3Reader_t2780AF8AA61DA2A817115CEF8612AC0E494D03C9 *)L_96, (ES3Type_t8FBECB7AE75168648B9524E0C2A38DAD4555421D *)L_97);
		TrailModule_set_colorOverTrail_m8440C6574C8310292B93D70EA4FE3EE8C40DF8DB((TrailModule_t95D15372971E64A1977B7587ABAA87B1A31EF5C8 *)(TrailModule_t95D15372971E64A1977B7587ABAA87B1A31EF5C8 *)(&V_0), (MinMaxGradient_tF4530B26F29D9635D670A33B9EE581EAC48C12B7 )L_98, /*hidden argument*/NULL);
		// break;
		goto IL_038e;
	}

IL_0388:
	{
		// reader.Skip();
		ES3Reader_t2780AF8AA61DA2A817115CEF8612AC0E494D03C9 * L_99 = ___reader0;
		NullCheck((ES3Reader_t2780AF8AA61DA2A817115CEF8612AC0E494D03C9 *)L_99);
		VirtActionInvoker0::Invoke(41 /* System.Void ES3Reader::Skip() */, (ES3Reader_t2780AF8AA61DA2A817115CEF8612AC0E494D03C9 *)L_99);
	}

IL_038e:
	{
		// while((propertyName = reader.ReadPropertyName()) != null)
		ES3Reader_t2780AF8AA61DA2A817115CEF8612AC0E494D03C9 * L_100 = ___reader0;
		NullCheck((ES3Reader_t2780AF8AA61DA2A817115CEF8612AC0E494D03C9 *)L_100);
		String_t* L_101;
		L_101 = VirtFuncInvoker0< String_t* >::Invoke(21 /* System.String ES3Reader::ReadPropertyName() */, (ES3Reader_t2780AF8AA61DA2A817115CEF8612AC0E494D03C9 *)L_100);
		String_t* L_102 = (String_t*)L_101;
		V_1 = (String_t*)L_102;
		if (L_102)
		{
			goto IL_000c;
		}
	}
	{
		// }
		return;
	}
}
// System.Void ES3Types.ES3Type_TrailModule::ReadInto<UnityEngine.RenderTextureDescriptor>(ES3Reader,System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ES3Type_TrailModule_ReadInto_TisRenderTextureDescriptor_t67FF189E1F35AEB5D6C43A2D7103F3A8A8CA0B47_m3607862AA188B32F8B06A48BA78ED78498DD62A5_gshared (ES3Type_TrailModule_tC773F73EC0443516DD128FF2B5AE010809742462 * __this, ES3Reader_t2780AF8AA61DA2A817115CEF8612AC0E494D03C9 * ___reader0, RuntimeObject * ___obj1, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ES3Reader_Read_TisBoolean_t07D1E3F34E4813023D64F584DFF7B34C9D922F37_mC6D1B158268FF9B97822FF9F5B37FB1723FEDA22_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ES3Reader_Read_TisMinMaxCurve_tF036239442AB2D438B1EDABEBC785426871084CD_mD285150CBFB52440643BBECB5ADF4EE8DE940535_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ES3Reader_Read_TisMinMaxGradient_tF4530B26F29D9635D670A33B9EE581EAC48C12B7_m6A3DD8CBBAC5D32B838B6C4399009AB8AA512ACC_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ES3Reader_Read_TisParticleSystemTrailTextureMode_tF3259187CA4D0A61EDB3A40E63CBF6C42641CE9F_m055DB1212E8BC34F385DF7D302F16241554E9730_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ES3Reader_Read_TisSingle_tE07797BA3C98D4CA9B5A19413C19A76688AB899E_m4A0416374498BDA042B8EB21E49B72326D6CE5F4_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ES3Type_MinMaxCurve_tC5342BF0F8735B85CB5E16FDD4C6FACC8AFAD3B7_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ES3Type_MinMaxGradient_t5DD353D60E95642AB39D1C97C6FD6DD1B067D3CF_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ES3Type_bool_t8F309F7B9CC735FF1DEE68081B6E3CAB367745F4_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ES3Type_float_tF86B773C86731BD9AD79448B860BBB178FE77644_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&TrailModule_t95D15372971E64A1977B7587ABAA87B1A31EF5C8_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral1D87A56AE67B2CD49CAE6E942C2FB7AD98925C00);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral354281948B6269615E32D856CF85B6F456724DAA);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral4221314F268D184F46688D45C85446821F1F1BC3);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral47C47DD09640803AD8016748EAE1F04DD1D41119);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral5C86338F177203D001C41D9C348A83D1338CC7D0);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral60126327537B7B8E6EE33C43FE0C5CA8BCC3A06A);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral87F70660D62DE5FC257FBADE9DA4EC9188597DE5);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralA967787586EC9E5A17A9C55E2002AB73A5E21A0A);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralADAEB0839588196B349BDB6CF33AFA3E0736360B);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralBE2893848F9FC647C2288DA6581A1522E9695182);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralBF540D6548854CC21630064FBA5390C9409C86F0);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralC580B374AA991574F91DFC86C068E7FAD661A3A4);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralE049DB547285CFCE1CB9A95934B6B6DCE2D219EC);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralF9D225733E1D10F9344C755C4A9C0870CD1DE97B);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralFE5F89F63E2381500F62A7CBD6954563BE44562F);
		s_Il2CppMethodInitialized = true;
	}
	TrailModule_t95D15372971E64A1977B7587ABAA87B1A31EF5C8  V_0;
	memset((&V_0), 0, sizeof(V_0));
	String_t* V_1 = NULL;
	uint32_t V_2 = 0;
	{
		// var instance = (UnityEngine.ParticleSystem.TrailModule)obj;
		RuntimeObject * L_0 = ___obj1;
		V_0 = (TrailModule_t95D15372971E64A1977B7587ABAA87B1A31EF5C8 )((*(TrailModule_t95D15372971E64A1977B7587ABAA87B1A31EF5C8 *)((TrailModule_t95D15372971E64A1977B7587ABAA87B1A31EF5C8 *)UnBox(L_0, TrailModule_t95D15372971E64A1977B7587ABAA87B1A31EF5C8_il2cpp_TypeInfo_var))));
		goto IL_038e;
	}

IL_000c:
	{
		String_t* L_1 = V_1;
		if (!L_1)
		{
			goto IL_0388;
		}
	}
	{
		String_t* L_2 = V_1;
		uint32_t L_3;
		L_3 = U3CPrivateImplementationDetailsU3E_ComputeStringHash_m3ADC1F612F9EE3DD518E6F0023A0DE0EE2B120A7((String_t*)L_2, /*hidden argument*/NULL);
		V_2 = (uint32_t)L_3;
		uint32_t L_4 = V_2;
		if ((!(((uint32_t)L_4) <= ((uint32_t)((int32_t)1376955374)))))
		{
			goto IL_008d;
		}
	}
	{
		uint32_t L_5 = V_2;
		if ((!(((uint32_t)L_5) <= ((uint32_t)((int32_t)494095910)))))
		{
			goto IL_004f;
		}
	}
	{
		uint32_t L_6 = V_2;
		if ((((int32_t)L_6) == ((int32_t)((int32_t)49525662))))
		{
			goto IL_010e;
		}
	}
	{
		uint32_t L_7 = V_2;
		if ((((int32_t)L_7) == ((int32_t)((int32_t)341298456))))
		{
			goto IL_021f;
		}
	}
	{
		uint32_t L_8 = V_2;
		if ((((int32_t)L_8) == ((int32_t)((int32_t)494095910))))
		{
			goto IL_0234;
		}
	}
	{
		goto IL_0388;
	}

IL_004f:
	{
		uint32_t L_9 = V_2;
		if ((!(((uint32_t)L_9) <= ((uint32_t)((int32_t)973733911)))))
		{
			goto IL_0072;
		}
	}
	{
		uint32_t L_10 = V_2;
		if ((((int32_t)L_10) == ((int32_t)((int32_t)559929418))))
		{
			goto IL_01b6;
		}
	}
	{
		uint32_t L_11 = V_2;
		if ((((int32_t)L_11) == ((int32_t)((int32_t)973733911))))
		{
			goto IL_0177;
		}
	}
	{
		goto IL_0388;
	}

IL_0072:
	{
		uint32_t L_12 = V_2;
		if ((((int32_t)L_12) == ((int32_t)((int32_t)1024708593))))
		{
			goto IL_014d;
		}
	}
	{
		uint32_t L_13 = V_2;
		if ((((int32_t)L_13) == ((int32_t)((int32_t)1376955374))))
		{
			goto IL_0138;
		}
	}
	{
		goto IL_0388;
	}

IL_008d:
	{
		uint32_t L_14 = V_2;
		if ((!(((uint32_t)L_14) <= ((uint32_t)((int32_t)-2100707162)))))
		{
			goto IL_00d3;
		}
	}
	{
		uint32_t L_15 = V_2;
		if ((!(((uint32_t)L_15) <= ((uint32_t)((int32_t)1975189197)))))
		{
			goto IL_00b8;
		}
	}
	{
		uint32_t L_16 = V_2;
		if ((((int32_t)L_16) == ((int32_t)((int32_t)1546474083))))
		{
			goto IL_020a;
		}
	}
	{
		uint32_t L_17 = V_2;
		if ((((int32_t)L_17) == ((int32_t)((int32_t)1975189197))))
		{
			goto IL_01cb;
		}
	}
	{
		goto IL_0388;
	}

IL_00b8:
	{
		uint32_t L_18 = V_2;
		if ((((int32_t)L_18) == ((int32_t)((int32_t)2053023684))))
		{
			goto IL_01a1;
		}
	}
	{
		uint32_t L_19 = V_2;
		if ((((int32_t)L_19) == ((int32_t)((int32_t)-2100707162))))
		{
			goto IL_0162;
		}
	}
	{
		goto IL_0388;
	}

IL_00d3:
	{
		uint32_t L_20 = V_2;
		if ((!(((uint32_t)L_20) <= ((uint32_t)((int32_t)-1319579393)))))
		{
			goto IL_00f6;
		}
	}
	{
		uint32_t L_21 = V_2;
		if ((((int32_t)L_21) == ((int32_t)((int32_t)-1562862963))))
		{
			goto IL_01e0;
		}
	}
	{
		uint32_t L_22 = V_2;
		if ((((int32_t)L_22) == ((int32_t)((int32_t)-1319579393))))
		{
			goto IL_018c;
		}
	}
	{
		goto IL_0388;
	}

IL_00f6:
	{
		uint32_t L_23 = V_2;
		if ((((int32_t)L_23) == ((int32_t)((int32_t)-1055777148))))
		{
			goto IL_0123;
		}
	}
	{
		uint32_t L_24 = V_2;
		if ((((int32_t)L_24) == ((int32_t)((int32_t)-413379935))))
		{
			goto IL_01f5;
		}
	}
	{
		goto IL_0388;
	}

IL_010e:
	{
		String_t* L_25 = V_1;
		bool L_26;
		L_26 = String_op_Equality_m50B3548E4AC232558190B0052877B290AA1D436A((String_t*)L_25, (String_t*)_stringLiteralF9D225733E1D10F9344C755C4A9C0870CD1DE97B, /*hidden argument*/NULL);
		if (L_26)
		{
			goto IL_0249;
		}
	}
	{
		goto IL_0388;
	}

IL_0123:
	{
		String_t* L_27 = V_1;
		bool L_28;
		L_28 = String_op_Equality_m50B3548E4AC232558190B0052877B290AA1D436A((String_t*)L_27, (String_t*)_stringLiteral60126327537B7B8E6EE33C43FE0C5CA8BCC3A06A, /*hidden argument*/NULL);
		if (L_28)
		{
			goto IL_0260;
		}
	}
	{
		goto IL_0388;
	}

IL_0138:
	{
		String_t* L_29 = V_1;
		bool L_30;
		L_30 = String_op_Equality_m50B3548E4AC232558190B0052877B290AA1D436A((String_t*)L_29, (String_t*)_stringLiteralBE2893848F9FC647C2288DA6581A1522E9695182, /*hidden argument*/NULL);
		if (L_30)
		{
			goto IL_0277;
		}
	}
	{
		goto IL_0388;
	}

IL_014d:
	{
		String_t* L_31 = V_1;
		bool L_32;
		L_32 = String_op_Equality_m50B3548E4AC232558190B0052877B290AA1D436A((String_t*)L_31, (String_t*)_stringLiteral4221314F268D184F46688D45C85446821F1F1BC3, /*hidden argument*/NULL);
		if (L_32)
		{
			goto IL_028e;
		}
	}
	{
		goto IL_0388;
	}

IL_0162:
	{
		String_t* L_33 = V_1;
		bool L_34;
		L_34 = String_op_Equality_m50B3548E4AC232558190B0052877B290AA1D436A((String_t*)L_33, (String_t*)_stringLiteral5C86338F177203D001C41D9C348A83D1338CC7D0, /*hidden argument*/NULL);
		if (L_34)
		{
			goto IL_02a5;
		}
	}
	{
		goto IL_0388;
	}

IL_0177:
	{
		String_t* L_35 = V_1;
		bool L_36;
		L_36 = String_op_Equality_m50B3548E4AC232558190B0052877B290AA1D436A((String_t*)L_35, (String_t*)_stringLiteralFE5F89F63E2381500F62A7CBD6954563BE44562F, /*hidden argument*/NULL);
		if (L_36)
		{
			goto IL_02bc;
		}
	}
	{
		goto IL_0388;
	}

IL_018c:
	{
		String_t* L_37 = V_1;
		bool L_38;
		L_38 = String_op_Equality_m50B3548E4AC232558190B0052877B290AA1D436A((String_t*)L_37, (String_t*)_stringLiteral87F70660D62DE5FC257FBADE9DA4EC9188597DE5, /*hidden argument*/NULL);
		if (L_38)
		{
			goto IL_02ce;
		}
	}
	{
		goto IL_0388;
	}

IL_01a1:
	{
		String_t* L_39 = V_1;
		bool L_40;
		L_40 = String_op_Equality_m50B3548E4AC232558190B0052877B290AA1D436A((String_t*)L_39, (String_t*)_stringLiteral354281948B6269615E32D856CF85B6F456724DAA, /*hidden argument*/NULL);
		if (L_40)
		{
			goto IL_02e5;
		}
	}
	{
		goto IL_0388;
	}

IL_01b6:
	{
		String_t* L_41 = V_1;
		bool L_42;
		L_42 = String_op_Equality_m50B3548E4AC232558190B0052877B290AA1D436A((String_t*)L_41, (String_t*)_stringLiteralADAEB0839588196B349BDB6CF33AFA3E0736360B, /*hidden argument*/NULL);
		if (L_42)
		{
			goto IL_02fc;
		}
	}
	{
		goto IL_0388;
	}

IL_01cb:
	{
		String_t* L_43 = V_1;
		bool L_44;
		L_44 = String_op_Equality_m50B3548E4AC232558190B0052877B290AA1D436A((String_t*)L_43, (String_t*)_stringLiteralC580B374AA991574F91DFC86C068E7FAD661A3A4, /*hidden argument*/NULL);
		if (L_44)
		{
			goto IL_0310;
		}
	}
	{
		goto IL_0388;
	}

IL_01e0:
	{
		String_t* L_45 = V_1;
		bool L_46;
		L_46 = String_op_Equality_m50B3548E4AC232558190B0052877B290AA1D436A((String_t*)L_45, (String_t*)_stringLiteralE049DB547285CFCE1CB9A95934B6B6DCE2D219EC, /*hidden argument*/NULL);
		if (L_46)
		{
			goto IL_0324;
		}
	}
	{
		goto IL_0388;
	}

IL_01f5:
	{
		String_t* L_47 = V_1;
		bool L_48;
		L_48 = String_op_Equality_m50B3548E4AC232558190B0052877B290AA1D436A((String_t*)L_47, (String_t*)_stringLiteralBF540D6548854CC21630064FBA5390C9409C86F0, /*hidden argument*/NULL);
		if (L_48)
		{
			goto IL_0338;
		}
	}
	{
		goto IL_0388;
	}

IL_020a:
	{
		String_t* L_49 = V_1;
		bool L_50;
		L_50 = String_op_Equality_m50B3548E4AC232558190B0052877B290AA1D436A((String_t*)L_49, (String_t*)_stringLiteral1D87A56AE67B2CD49CAE6E942C2FB7AD98925C00, /*hidden argument*/NULL);
		if (L_50)
		{
			goto IL_034c;
		}
	}
	{
		goto IL_0388;
	}

IL_021f:
	{
		String_t* L_51 = V_1;
		bool L_52;
		L_52 = String_op_Equality_m50B3548E4AC232558190B0052877B290AA1D436A((String_t*)L_51, (String_t*)_stringLiteralA967787586EC9E5A17A9C55E2002AB73A5E21A0A, /*hidden argument*/NULL);
		if (L_52)
		{
			goto IL_0360;
		}
	}
	{
		goto IL_0388;
	}

IL_0234:
	{
		String_t* L_53 = V_1;
		bool L_54;
		L_54 = String_op_Equality_m50B3548E4AC232558190B0052877B290AA1D436A((String_t*)L_53, (String_t*)_stringLiteral47C47DD09640803AD8016748EAE1F04DD1D41119, /*hidden argument*/NULL);
		if (L_54)
		{
			goto IL_0374;
		}
	}
	{
		goto IL_0388;
	}

IL_0249:
	{
		// instance.enabled = reader.Read<System.Boolean>(ES3Type_bool.Instance);
		ES3Reader_t2780AF8AA61DA2A817115CEF8612AC0E494D03C9 * L_55 = ___reader0;
		IL2CPP_RUNTIME_CLASS_INIT(ES3Type_bool_t8F309F7B9CC735FF1DEE68081B6E3CAB367745F4_il2cpp_TypeInfo_var);
		ES3Type_t8FBECB7AE75168648B9524E0C2A38DAD4555421D * L_56 = ((ES3Type_bool_t8F309F7B9CC735FF1DEE68081B6E3CAB367745F4_StaticFields*)il2cpp_codegen_static_fields_for(ES3Type_bool_t8F309F7B9CC735FF1DEE68081B6E3CAB367745F4_il2cpp_TypeInfo_var))->get_Instance_12();
		NullCheck((ES3Reader_t2780AF8AA61DA2A817115CEF8612AC0E494D03C9 *)L_55);
		bool L_57;
		L_57 = GenericVirtFuncInvoker1< bool, ES3Type_t8FBECB7AE75168648B9524E0C2A38DAD4555421D * >::Invoke(ES3Reader_Read_TisBoolean_t07D1E3F34E4813023D64F584DFF7B34C9D922F37_mC6D1B158268FF9B97822FF9F5B37FB1723FEDA22_RuntimeMethod_var, (ES3Reader_t2780AF8AA61DA2A817115CEF8612AC0E494D03C9 *)L_55, (ES3Type_t8FBECB7AE75168648B9524E0C2A38DAD4555421D *)L_56);
		TrailModule_set_enabled_mFC8451DDDF40CCBB3E32A4B30A001115F6346894((TrailModule_t95D15372971E64A1977B7587ABAA87B1A31EF5C8 *)(TrailModule_t95D15372971E64A1977B7587ABAA87B1A31EF5C8 *)(&V_0), (bool)L_57, /*hidden argument*/NULL);
		// break;
		goto IL_038e;
	}

IL_0260:
	{
		// instance.ratio = reader.Read<System.Single>(ES3Type_float.Instance);
		ES3Reader_t2780AF8AA61DA2A817115CEF8612AC0E494D03C9 * L_58 = ___reader0;
		IL2CPP_RUNTIME_CLASS_INIT(ES3Type_float_tF86B773C86731BD9AD79448B860BBB178FE77644_il2cpp_TypeInfo_var);
		ES3Type_t8FBECB7AE75168648B9524E0C2A38DAD4555421D * L_59 = ((ES3Type_float_tF86B773C86731BD9AD79448B860BBB178FE77644_StaticFields*)il2cpp_codegen_static_fields_for(ES3Type_float_tF86B773C86731BD9AD79448B860BBB178FE77644_il2cpp_TypeInfo_var))->get_Instance_12();
		NullCheck((ES3Reader_t2780AF8AA61DA2A817115CEF8612AC0E494D03C9 *)L_58);
		float L_60;
		L_60 = GenericVirtFuncInvoker1< float, ES3Type_t8FBECB7AE75168648B9524E0C2A38DAD4555421D * >::Invoke(ES3Reader_Read_TisSingle_tE07797BA3C98D4CA9B5A19413C19A76688AB899E_m4A0416374498BDA042B8EB21E49B72326D6CE5F4_RuntimeMethod_var, (ES3Reader_t2780AF8AA61DA2A817115CEF8612AC0E494D03C9 *)L_58, (ES3Type_t8FBECB7AE75168648B9524E0C2A38DAD4555421D *)L_59);
		TrailModule_set_ratio_m34E63B34E7B0E8D037AD45532B2E2D5BD0750189((TrailModule_t95D15372971E64A1977B7587ABAA87B1A31EF5C8 *)(TrailModule_t95D15372971E64A1977B7587ABAA87B1A31EF5C8 *)(&V_0), (float)L_60, /*hidden argument*/NULL);
		// break;
		goto IL_038e;
	}

IL_0277:
	{
		// instance.lifetime = reader.Read<UnityEngine.ParticleSystem.MinMaxCurve>(ES3Type_MinMaxCurve.Instance);
		ES3Reader_t2780AF8AA61DA2A817115CEF8612AC0E494D03C9 * L_61 = ___reader0;
		IL2CPP_RUNTIME_CLASS_INIT(ES3Type_MinMaxCurve_tC5342BF0F8735B85CB5E16FDD4C6FACC8AFAD3B7_il2cpp_TypeInfo_var);
		ES3Type_t8FBECB7AE75168648B9524E0C2A38DAD4555421D * L_62 = ((ES3Type_MinMaxCurve_tC5342BF0F8735B85CB5E16FDD4C6FACC8AFAD3B7_StaticFields*)il2cpp_codegen_static_fields_for(ES3Type_MinMaxCurve_tC5342BF0F8735B85CB5E16FDD4C6FACC8AFAD3B7_il2cpp_TypeInfo_var))->get_Instance_12();
		NullCheck((ES3Reader_t2780AF8AA61DA2A817115CEF8612AC0E494D03C9 *)L_61);
		MinMaxCurve_tF036239442AB2D438B1EDABEBC785426871084CD  L_63;
		L_63 = GenericVirtFuncInvoker1< MinMaxCurve_tF036239442AB2D438B1EDABEBC785426871084CD , ES3Type_t8FBECB7AE75168648B9524E0C2A38DAD4555421D * >::Invoke(ES3Reader_Read_TisMinMaxCurve_tF036239442AB2D438B1EDABEBC785426871084CD_mD285150CBFB52440643BBECB5ADF4EE8DE940535_RuntimeMethod_var, (ES3Reader_t2780AF8AA61DA2A817115CEF8612AC0E494D03C9 *)L_61, (ES3Type_t8FBECB7AE75168648B9524E0C2A38DAD4555421D *)L_62);
		TrailModule_set_lifetime_m57C898C42B9F18F5A0E88AAA7B10276CC158C39D((TrailModule_t95D15372971E64A1977B7587ABAA87B1A31EF5C8 *)(TrailModule_t95D15372971E64A1977B7587ABAA87B1A31EF5C8 *)(&V_0), (MinMaxCurve_tF036239442AB2D438B1EDABEBC785426871084CD )L_63, /*hidden argument*/NULL);
		// break;
		goto IL_038e;
	}

IL_028e:
	{
		// instance.lifetimeMultiplier = reader.Read<System.Single>(ES3Type_float.Instance);
		ES3Reader_t2780AF8AA61DA2A817115CEF8612AC0E494D03C9 * L_64 = ___reader0;
		IL2CPP_RUNTIME_CLASS_INIT(ES3Type_float_tF86B773C86731BD9AD79448B860BBB178FE77644_il2cpp_TypeInfo_var);
		ES3Type_t8FBECB7AE75168648B9524E0C2A38DAD4555421D * L_65 = ((ES3Type_float_tF86B773C86731BD9AD79448B860BBB178FE77644_StaticFields*)il2cpp_codegen_static_fields_for(ES3Type_float_tF86B773C86731BD9AD79448B860BBB178FE77644_il2cpp_TypeInfo_var))->get_Instance_12();
		NullCheck((ES3Reader_t2780AF8AA61DA2A817115CEF8612AC0E494D03C9 *)L_64);
		float L_66;
		L_66 = GenericVirtFuncInvoker1< float, ES3Type_t8FBECB7AE75168648B9524E0C2A38DAD4555421D * >::Invoke(ES3Reader_Read_TisSingle_tE07797BA3C98D4CA9B5A19413C19A76688AB899E_m4A0416374498BDA042B8EB21E49B72326D6CE5F4_RuntimeMethod_var, (ES3Reader_t2780AF8AA61DA2A817115CEF8612AC0E494D03C9 *)L_64, (ES3Type_t8FBECB7AE75168648B9524E0C2A38DAD4555421D *)L_65);
		TrailModule_set_lifetimeMultiplier_m23F95D65EE8C82152AE1CF2E41531EC2789A866B((TrailModule_t95D15372971E64A1977B7587ABAA87B1A31EF5C8 *)(TrailModule_t95D15372971E64A1977B7587ABAA87B1A31EF5C8 *)(&V_0), (float)L_66, /*hidden argument*/NULL);
		// break;
		goto IL_038e;
	}

IL_02a5:
	{
		// instance.minVertexDistance = reader.Read<System.Single>(ES3Type_float.Instance);
		ES3Reader_t2780AF8AA61DA2A817115CEF8612AC0E494D03C9 * L_67 = ___reader0;
		IL2CPP_RUNTIME_CLASS_INIT(ES3Type_float_tF86B773C86731BD9AD79448B860BBB178FE77644_il2cpp_TypeInfo_var);
		ES3Type_t8FBECB7AE75168648B9524E0C2A38DAD4555421D * L_68 = ((ES3Type_float_tF86B773C86731BD9AD79448B860BBB178FE77644_StaticFields*)il2cpp_codegen_static_fields_for(ES3Type_float_tF86B773C86731BD9AD79448B860BBB178FE77644_il2cpp_TypeInfo_var))->get_Instance_12();
		NullCheck((ES3Reader_t2780AF8AA61DA2A817115CEF8612AC0E494D03C9 *)L_67);
		float L_69;
		L_69 = GenericVirtFuncInvoker1< float, ES3Type_t8FBECB7AE75168648B9524E0C2A38DAD4555421D * >::Invoke(ES3Reader_Read_TisSingle_tE07797BA3C98D4CA9B5A19413C19A76688AB899E_m4A0416374498BDA042B8EB21E49B72326D6CE5F4_RuntimeMethod_var, (ES3Reader_t2780AF8AA61DA2A817115CEF8612AC0E494D03C9 *)L_67, (ES3Type_t8FBECB7AE75168648B9524E0C2A38DAD4555421D *)L_68);
		TrailModule_set_minVertexDistance_mF7C29F88FBF540CE4987F4CF9B141C624808FBC5((TrailModule_t95D15372971E64A1977B7587ABAA87B1A31EF5C8 *)(TrailModule_t95D15372971E64A1977B7587ABAA87B1A31EF5C8 *)(&V_0), (float)L_69, /*hidden argument*/NULL);
		// break;
		goto IL_038e;
	}

IL_02bc:
	{
		// instance.textureMode = reader.Read<UnityEngine.ParticleSystemTrailTextureMode>();
		ES3Reader_t2780AF8AA61DA2A817115CEF8612AC0E494D03C9 * L_70 = ___reader0;
		NullCheck((ES3Reader_t2780AF8AA61DA2A817115CEF8612AC0E494D03C9 *)L_70);
		int32_t L_71;
		L_71 = GenericVirtFuncInvoker0< int32_t >::Invoke(ES3Reader_Read_TisParticleSystemTrailTextureMode_tF3259187CA4D0A61EDB3A40E63CBF6C42641CE9F_m055DB1212E8BC34F385DF7D302F16241554E9730_RuntimeMethod_var, (ES3Reader_t2780AF8AA61DA2A817115CEF8612AC0E494D03C9 *)L_70);
		TrailModule_set_textureMode_mC1F8AE0D2965FC47BDBFF4F53E0673D5FB58CF28((TrailModule_t95D15372971E64A1977B7587ABAA87B1A31EF5C8 *)(TrailModule_t95D15372971E64A1977B7587ABAA87B1A31EF5C8 *)(&V_0), (int32_t)L_71, /*hidden argument*/NULL);
		// break;
		goto IL_038e;
	}

IL_02ce:
	{
		// instance.worldSpace = reader.Read<System.Boolean>(ES3Type_bool.Instance);
		ES3Reader_t2780AF8AA61DA2A817115CEF8612AC0E494D03C9 * L_72 = ___reader0;
		IL2CPP_RUNTIME_CLASS_INIT(ES3Type_bool_t8F309F7B9CC735FF1DEE68081B6E3CAB367745F4_il2cpp_TypeInfo_var);
		ES3Type_t8FBECB7AE75168648B9524E0C2A38DAD4555421D * L_73 = ((ES3Type_bool_t8F309F7B9CC735FF1DEE68081B6E3CAB367745F4_StaticFields*)il2cpp_codegen_static_fields_for(ES3Type_bool_t8F309F7B9CC735FF1DEE68081B6E3CAB367745F4_il2cpp_TypeInfo_var))->get_Instance_12();
		NullCheck((ES3Reader_t2780AF8AA61DA2A817115CEF8612AC0E494D03C9 *)L_72);
		bool L_74;
		L_74 = GenericVirtFuncInvoker1< bool, ES3Type_t8FBECB7AE75168648B9524E0C2A38DAD4555421D * >::Invoke(ES3Reader_Read_TisBoolean_t07D1E3F34E4813023D64F584DFF7B34C9D922F37_mC6D1B158268FF9B97822FF9F5B37FB1723FEDA22_RuntimeMethod_var, (ES3Reader_t2780AF8AA61DA2A817115CEF8612AC0E494D03C9 *)L_72, (ES3Type_t8FBECB7AE75168648B9524E0C2A38DAD4555421D *)L_73);
		TrailModule_set_worldSpace_m42A63AF4A96F24A621A29A0F35240195F0E56B1A((TrailModule_t95D15372971E64A1977B7587ABAA87B1A31EF5C8 *)(TrailModule_t95D15372971E64A1977B7587ABAA87B1A31EF5C8 *)(&V_0), (bool)L_74, /*hidden argument*/NULL);
		// break;
		goto IL_038e;
	}

IL_02e5:
	{
		// instance.dieWithParticles = reader.Read<System.Boolean>(ES3Type_bool.Instance);
		ES3Reader_t2780AF8AA61DA2A817115CEF8612AC0E494D03C9 * L_75 = ___reader0;
		IL2CPP_RUNTIME_CLASS_INIT(ES3Type_bool_t8F309F7B9CC735FF1DEE68081B6E3CAB367745F4_il2cpp_TypeInfo_var);
		ES3Type_t8FBECB7AE75168648B9524E0C2A38DAD4555421D * L_76 = ((ES3Type_bool_t8F309F7B9CC735FF1DEE68081B6E3CAB367745F4_StaticFields*)il2cpp_codegen_static_fields_for(ES3Type_bool_t8F309F7B9CC735FF1DEE68081B6E3CAB367745F4_il2cpp_TypeInfo_var))->get_Instance_12();
		NullCheck((ES3Reader_t2780AF8AA61DA2A817115CEF8612AC0E494D03C9 *)L_75);
		bool L_77;
		L_77 = GenericVirtFuncInvoker1< bool, ES3Type_t8FBECB7AE75168648B9524E0C2A38DAD4555421D * >::Invoke(ES3Reader_Read_TisBoolean_t07D1E3F34E4813023D64F584DFF7B34C9D922F37_mC6D1B158268FF9B97822FF9F5B37FB1723FEDA22_RuntimeMethod_var, (ES3Reader_t2780AF8AA61DA2A817115CEF8612AC0E494D03C9 *)L_75, (ES3Type_t8FBECB7AE75168648B9524E0C2A38DAD4555421D *)L_76);
		TrailModule_set_dieWithParticles_mB7C4E8DC2F908FDF6D57A77B54B821E360D8DA99((TrailModule_t95D15372971E64A1977B7587ABAA87B1A31EF5C8 *)(TrailModule_t95D15372971E64A1977B7587ABAA87B1A31EF5C8 *)(&V_0), (bool)L_77, /*hidden argument*/NULL);
		// break;
		goto IL_038e;
	}

IL_02fc:
	{
		// instance.sizeAffectsWidth = reader.Read<System.Boolean>(ES3Type_bool.Instance);
		ES3Reader_t2780AF8AA61DA2A817115CEF8612AC0E494D03C9 * L_78 = ___reader0;
		IL2CPP_RUNTIME_CLASS_INIT(ES3Type_bool_t8F309F7B9CC735FF1DEE68081B6E3CAB367745F4_il2cpp_TypeInfo_var);
		ES3Type_t8FBECB7AE75168648B9524E0C2A38DAD4555421D * L_79 = ((ES3Type_bool_t8F309F7B9CC735FF1DEE68081B6E3CAB367745F4_StaticFields*)il2cpp_codegen_static_fields_for(ES3Type_bool_t8F309F7B9CC735FF1DEE68081B6E3CAB367745F4_il2cpp_TypeInfo_var))->get_Instance_12();
		NullCheck((ES3Reader_t2780AF8AA61DA2A817115CEF8612AC0E494D03C9 *)L_78);
		bool L_80;
		L_80 = GenericVirtFuncInvoker1< bool, ES3Type_t8FBECB7AE75168648B9524E0C2A38DAD4555421D * >::Invoke(ES3Reader_Read_TisBoolean_t07D1E3F34E4813023D64F584DFF7B34C9D922F37_mC6D1B158268FF9B97822FF9F5B37FB1723FEDA22_RuntimeMethod_var, (ES3Reader_t2780AF8AA61DA2A817115CEF8612AC0E494D03C9 *)L_78, (ES3Type_t8FBECB7AE75168648B9524E0C2A38DAD4555421D *)L_79);
		TrailModule_set_sizeAffectsWidth_m3517856E39080DA69B447499C8846D2491B0ABF0((TrailModule_t95D15372971E64A1977B7587ABAA87B1A31EF5C8 *)(TrailModule_t95D15372971E64A1977B7587ABAA87B1A31EF5C8 *)(&V_0), (bool)L_80, /*hidden argument*/NULL);
		// break;
		goto IL_038e;
	}

IL_0310:
	{
		// instance.sizeAffectsLifetime = reader.Read<System.Boolean>(ES3Type_bool.Instance);
		ES3Reader_t2780AF8AA61DA2A817115CEF8612AC0E494D03C9 * L_81 = ___reader0;
		IL2CPP_RUNTIME_CLASS_INIT(ES3Type_bool_t8F309F7B9CC735FF1DEE68081B6E3CAB367745F4_il2cpp_TypeInfo_var);
		ES3Type_t8FBECB7AE75168648B9524E0C2A38DAD4555421D * L_82 = ((ES3Type_bool_t8F309F7B9CC735FF1DEE68081B6E3CAB367745F4_StaticFields*)il2cpp_codegen_static_fields_for(ES3Type_bool_t8F309F7B9CC735FF1DEE68081B6E3CAB367745F4_il2cpp_TypeInfo_var))->get_Instance_12();
		NullCheck((ES3Reader_t2780AF8AA61DA2A817115CEF8612AC0E494D03C9 *)L_81);
		bool L_83;
		L_83 = GenericVirtFuncInvoker1< bool, ES3Type_t8FBECB7AE75168648B9524E0C2A38DAD4555421D * >::Invoke(ES3Reader_Read_TisBoolean_t07D1E3F34E4813023D64F584DFF7B34C9D922F37_mC6D1B158268FF9B97822FF9F5B37FB1723FEDA22_RuntimeMethod_var, (ES3Reader_t2780AF8AA61DA2A817115CEF8612AC0E494D03C9 *)L_81, (ES3Type_t8FBECB7AE75168648B9524E0C2A38DAD4555421D *)L_82);
		TrailModule_set_sizeAffectsLifetime_m98BF4A6594193D824B52D88371CF963ACBA388FD((TrailModule_t95D15372971E64A1977B7587ABAA87B1A31EF5C8 *)(TrailModule_t95D15372971E64A1977B7587ABAA87B1A31EF5C8 *)(&V_0), (bool)L_83, /*hidden argument*/NULL);
		// break;
		goto IL_038e;
	}

IL_0324:
	{
		// instance.inheritParticleColor = reader.Read<System.Boolean>(ES3Type_bool.Instance);
		ES3Reader_t2780AF8AA61DA2A817115CEF8612AC0E494D03C9 * L_84 = ___reader0;
		IL2CPP_RUNTIME_CLASS_INIT(ES3Type_bool_t8F309F7B9CC735FF1DEE68081B6E3CAB367745F4_il2cpp_TypeInfo_var);
		ES3Type_t8FBECB7AE75168648B9524E0C2A38DAD4555421D * L_85 = ((ES3Type_bool_t8F309F7B9CC735FF1DEE68081B6E3CAB367745F4_StaticFields*)il2cpp_codegen_static_fields_for(ES3Type_bool_t8F309F7B9CC735FF1DEE68081B6E3CAB367745F4_il2cpp_TypeInfo_var))->get_Instance_12();
		NullCheck((ES3Reader_t2780AF8AA61DA2A817115CEF8612AC0E494D03C9 *)L_84);
		bool L_86;
		L_86 = GenericVirtFuncInvoker1< bool, ES3Type_t8FBECB7AE75168648B9524E0C2A38DAD4555421D * >::Invoke(ES3Reader_Read_TisBoolean_t07D1E3F34E4813023D64F584DFF7B34C9D922F37_mC6D1B158268FF9B97822FF9F5B37FB1723FEDA22_RuntimeMethod_var, (ES3Reader_t2780AF8AA61DA2A817115CEF8612AC0E494D03C9 *)L_84, (ES3Type_t8FBECB7AE75168648B9524E0C2A38DAD4555421D *)L_85);
		TrailModule_set_inheritParticleColor_mCD83E87B5E00F2BFFBE08AD2D1D68606283A4FEE((TrailModule_t95D15372971E64A1977B7587ABAA87B1A31EF5C8 *)(TrailModule_t95D15372971E64A1977B7587ABAA87B1A31EF5C8 *)(&V_0), (bool)L_86, /*hidden argument*/NULL);
		// break;
		goto IL_038e;
	}

IL_0338:
	{
		// instance.colorOverLifetime = reader.Read<UnityEngine.ParticleSystem.MinMaxGradient>(ES3Type_MinMaxGradient.Instance);
		ES3Reader_t2780AF8AA61DA2A817115CEF8612AC0E494D03C9 * L_87 = ___reader0;
		IL2CPP_RUNTIME_CLASS_INIT(ES3Type_MinMaxGradient_t5DD353D60E95642AB39D1C97C6FD6DD1B067D3CF_il2cpp_TypeInfo_var);
		ES3Type_t8FBECB7AE75168648B9524E0C2A38DAD4555421D * L_88 = ((ES3Type_MinMaxGradient_t5DD353D60E95642AB39D1C97C6FD6DD1B067D3CF_StaticFields*)il2cpp_codegen_static_fields_for(ES3Type_MinMaxGradient_t5DD353D60E95642AB39D1C97C6FD6DD1B067D3CF_il2cpp_TypeInfo_var))->get_Instance_12();
		NullCheck((ES3Reader_t2780AF8AA61DA2A817115CEF8612AC0E494D03C9 *)L_87);
		MinMaxGradient_tF4530B26F29D9635D670A33B9EE581EAC48C12B7  L_89;
		L_89 = GenericVirtFuncInvoker1< MinMaxGradient_tF4530B26F29D9635D670A33B9EE581EAC48C12B7 , ES3Type_t8FBECB7AE75168648B9524E0C2A38DAD4555421D * >::Invoke(ES3Reader_Read_TisMinMaxGradient_tF4530B26F29D9635D670A33B9EE581EAC48C12B7_m6A3DD8CBBAC5D32B838B6C4399009AB8AA512ACC_RuntimeMethod_var, (ES3Reader_t2780AF8AA61DA2A817115CEF8612AC0E494D03C9 *)L_87, (ES3Type_t8FBECB7AE75168648B9524E0C2A38DAD4555421D *)L_88);
		TrailModule_set_colorOverLifetime_mCD56BD4B75D3A3947069BA1B93FEC78AAE08DF27((TrailModule_t95D15372971E64A1977B7587ABAA87B1A31EF5C8 *)(TrailModule_t95D15372971E64A1977B7587ABAA87B1A31EF5C8 *)(&V_0), (MinMaxGradient_tF4530B26F29D9635D670A33B9EE581EAC48C12B7 )L_89, /*hidden argument*/NULL);
		// break;
		goto IL_038e;
	}

IL_034c:
	{
		// instance.widthOverTrail = reader.Read<UnityEngine.ParticleSystem.MinMaxCurve>(ES3Type_MinMaxCurve.Instance);
		ES3Reader_t2780AF8AA61DA2A817115CEF8612AC0E494D03C9 * L_90 = ___reader0;
		IL2CPP_RUNTIME_CLASS_INIT(ES3Type_MinMaxCurve_tC5342BF0F8735B85CB5E16FDD4C6FACC8AFAD3B7_il2cpp_TypeInfo_var);
		ES3Type_t8FBECB7AE75168648B9524E0C2A38DAD4555421D * L_91 = ((ES3Type_MinMaxCurve_tC5342BF0F8735B85CB5E16FDD4C6FACC8AFAD3B7_StaticFields*)il2cpp_codegen_static_fields_for(ES3Type_MinMaxCurve_tC5342BF0F8735B85CB5E16FDD4C6FACC8AFAD3B7_il2cpp_TypeInfo_var))->get_Instance_12();
		NullCheck((ES3Reader_t2780AF8AA61DA2A817115CEF8612AC0E494D03C9 *)L_90);
		MinMaxCurve_tF036239442AB2D438B1EDABEBC785426871084CD  L_92;
		L_92 = GenericVirtFuncInvoker1< MinMaxCurve_tF036239442AB2D438B1EDABEBC785426871084CD , ES3Type_t8FBECB7AE75168648B9524E0C2A38DAD4555421D * >::Invoke(ES3Reader_Read_TisMinMaxCurve_tF036239442AB2D438B1EDABEBC785426871084CD_mD285150CBFB52440643BBECB5ADF4EE8DE940535_RuntimeMethod_var, (ES3Reader_t2780AF8AA61DA2A817115CEF8612AC0E494D03C9 *)L_90, (ES3Type_t8FBECB7AE75168648B9524E0C2A38DAD4555421D *)L_91);
		TrailModule_set_widthOverTrail_m6C0A896EBFDED7CE46344B3A0B04212934F30DE1((TrailModule_t95D15372971E64A1977B7587ABAA87B1A31EF5C8 *)(TrailModule_t95D15372971E64A1977B7587ABAA87B1A31EF5C8 *)(&V_0), (MinMaxCurve_tF036239442AB2D438B1EDABEBC785426871084CD )L_92, /*hidden argument*/NULL);
		// break;
		goto IL_038e;
	}

IL_0360:
	{
		// instance.widthOverTrailMultiplier = reader.Read<System.Single>(ES3Type_float.Instance);
		ES3Reader_t2780AF8AA61DA2A817115CEF8612AC0E494D03C9 * L_93 = ___reader0;
		IL2CPP_RUNTIME_CLASS_INIT(ES3Type_float_tF86B773C86731BD9AD79448B860BBB178FE77644_il2cpp_TypeInfo_var);
		ES3Type_t8FBECB7AE75168648B9524E0C2A38DAD4555421D * L_94 = ((ES3Type_float_tF86B773C86731BD9AD79448B860BBB178FE77644_StaticFields*)il2cpp_codegen_static_fields_for(ES3Type_float_tF86B773C86731BD9AD79448B860BBB178FE77644_il2cpp_TypeInfo_var))->get_Instance_12();
		NullCheck((ES3Reader_t2780AF8AA61DA2A817115CEF8612AC0E494D03C9 *)L_93);
		float L_95;
		L_95 = GenericVirtFuncInvoker1< float, ES3Type_t8FBECB7AE75168648B9524E0C2A38DAD4555421D * >::Invoke(ES3Reader_Read_TisSingle_tE07797BA3C98D4CA9B5A19413C19A76688AB899E_m4A0416374498BDA042B8EB21E49B72326D6CE5F4_RuntimeMethod_var, (ES3Reader_t2780AF8AA61DA2A817115CEF8612AC0E494D03C9 *)L_93, (ES3Type_t8FBECB7AE75168648B9524E0C2A38DAD4555421D *)L_94);
		TrailModule_set_widthOverTrailMultiplier_m6A7EA2856CF30B710CCB528EA3EBFD1799C19BD4((TrailModule_t95D15372971E64A1977B7587ABAA87B1A31EF5C8 *)(TrailModule_t95D15372971E64A1977B7587ABAA87B1A31EF5C8 *)(&V_0), (float)L_95, /*hidden argument*/NULL);
		// break;
		goto IL_038e;
	}

IL_0374:
	{
		// instance.colorOverTrail = reader.Read<UnityEngine.ParticleSystem.MinMaxGradient>(ES3Type_MinMaxGradient.Instance);
		ES3Reader_t2780AF8AA61DA2A817115CEF8612AC0E494D03C9 * L_96 = ___reader0;
		IL2CPP_RUNTIME_CLASS_INIT(ES3Type_MinMaxGradient_t5DD353D60E95642AB39D1C97C6FD6DD1B067D3CF_il2cpp_TypeInfo_var);
		ES3Type_t8FBECB7AE75168648B9524E0C2A38DAD4555421D * L_97 = ((ES3Type_MinMaxGradient_t5DD353D60E95642AB39D1C97C6FD6DD1B067D3CF_StaticFields*)il2cpp_codegen_static_fields_for(ES3Type_MinMaxGradient_t5DD353D60E95642AB39D1C97C6FD6DD1B067D3CF_il2cpp_TypeInfo_var))->get_Instance_12();
		NullCheck((ES3Reader_t2780AF8AA61DA2A817115CEF8612AC0E494D03C9 *)L_96);
		MinMaxGradient_tF4530B26F29D9635D670A33B9EE581EAC48C12B7  L_98;
		L_98 = GenericVirtFuncInvoker1< MinMaxGradient_tF4530B26F29D9635D670A33B9EE581EAC48C12B7 , ES3Type_t8FBECB7AE75168648B9524E0C2A38DAD4555421D * >::Invoke(ES3Reader_Read_TisMinMaxGradient_tF4530B26F29D9635D670A33B9EE581EAC48C12B7_m6A3DD8CBBAC5D32B838B6C4399009AB8AA512ACC_RuntimeMethod_var, (ES3Reader_t2780AF8AA61DA2A817115CEF8612AC0E494D03C9 *)L_96, (ES3Type_t8FBECB7AE75168648B9524E0C2A38DAD4555421D *)L_97);
		TrailModule_set_colorOverTrail_m8440C6574C8310292B93D70EA4FE3EE8C40DF8DB((TrailModule_t95D15372971E64A1977B7587ABAA87B1A31EF5C8 *)(TrailModule_t95D15372971E64A1977B7587ABAA87B1A31EF5C8 *)(&V_0), (MinMaxGradient_tF4530B26F29D9635D670A33B9EE581EAC48C12B7 )L_98, /*hidden argument*/NULL);
		// break;
		goto IL_038e;
	}

IL_0388:
	{
		// reader.Skip();
		ES3Reader_t2780AF8AA61DA2A817115CEF8612AC0E494D03C9 * L_99 = ___reader0;
		NullCheck((ES3Reader_t2780AF8AA61DA2A817115CEF8612AC0E494D03C9 *)L_99);
		VirtActionInvoker0::Invoke(41 /* System.Void ES3Reader::Skip() */, (ES3Reader_t2780AF8AA61DA2A817115CEF8612AC0E494D03C9 *)L_99);
	}

IL_038e:
	{
		// while((propertyName = reader.ReadPropertyName()) != null)
		ES3Reader_t2780AF8AA61DA2A817115CEF8612AC0E494D03C9 * L_100 = ___reader0;
		NullCheck((ES3Reader_t2780AF8AA61DA2A817115CEF8612AC0E494D03C9 *)L_100);
		String_t* L_101;
		L_101 = VirtFuncInvoker0< String_t* >::Invoke(21 /* System.String ES3Reader::ReadPropertyName() */, (ES3Reader_t2780AF8AA61DA2A817115CEF8612AC0E494D03C9 *)L_100);
		String_t* L_102 = (String_t*)L_101;
		V_1 = (String_t*)L_102;
		if (L_102)
		{
			goto IL_000c;
		}
	}
	{
		// }
		return;
	}
}
// System.Void ES3Types.ES3Type_TrailModule::ReadInto<System.Single>(ES3Reader,System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ES3Type_TrailModule_ReadInto_TisSingle_tE07797BA3C98D4CA9B5A19413C19A76688AB899E_m33442703A53BC7CDDE27313A84C79600479C480D_gshared (ES3Type_TrailModule_tC773F73EC0443516DD128FF2B5AE010809742462 * __this, ES3Reader_t2780AF8AA61DA2A817115CEF8612AC0E494D03C9 * ___reader0, RuntimeObject * ___obj1, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ES3Reader_Read_TisBoolean_t07D1E3F34E4813023D64F584DFF7B34C9D922F37_mC6D1B158268FF9B97822FF9F5B37FB1723FEDA22_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ES3Reader_Read_TisMinMaxCurve_tF036239442AB2D438B1EDABEBC785426871084CD_mD285150CBFB52440643BBECB5ADF4EE8DE940535_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ES3Reader_Read_TisMinMaxGradient_tF4530B26F29D9635D670A33B9EE581EAC48C12B7_m6A3DD8CBBAC5D32B838B6C4399009AB8AA512ACC_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ES3Reader_Read_TisParticleSystemTrailTextureMode_tF3259187CA4D0A61EDB3A40E63CBF6C42641CE9F_m055DB1212E8BC34F385DF7D302F16241554E9730_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ES3Reader_Read_TisSingle_tE07797BA3C98D4CA9B5A19413C19A76688AB899E_m4A0416374498BDA042B8EB21E49B72326D6CE5F4_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ES3Type_MinMaxCurve_tC5342BF0F8735B85CB5E16FDD4C6FACC8AFAD3B7_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ES3Type_MinMaxGradient_t5DD353D60E95642AB39D1C97C6FD6DD1B067D3CF_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ES3Type_bool_t8F309F7B9CC735FF1DEE68081B6E3CAB367745F4_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ES3Type_float_tF86B773C86731BD9AD79448B860BBB178FE77644_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&TrailModule_t95D15372971E64A1977B7587ABAA87B1A31EF5C8_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral1D87A56AE67B2CD49CAE6E942C2FB7AD98925C00);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral354281948B6269615E32D856CF85B6F456724DAA);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral4221314F268D184F46688D45C85446821F1F1BC3);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral47C47DD09640803AD8016748EAE1F04DD1D41119);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral5C86338F177203D001C41D9C348A83D1338CC7D0);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral60126327537B7B8E6EE33C43FE0C5CA8BCC3A06A);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral87F70660D62DE5FC257FBADE9DA4EC9188597DE5);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralA967787586EC9E5A17A9C55E2002AB73A5E21A0A);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralADAEB0839588196B349BDB6CF33AFA3E0736360B);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralBE2893848F9FC647C2288DA6581A1522E9695182);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralBF540D6548854CC21630064FBA5390C9409C86F0);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralC580B374AA991574F91DFC86C068E7FAD661A3A4);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralE049DB547285CFCE1CB9A95934B6B6DCE2D219EC);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralF9D225733E1D10F9344C755C4A9C0870CD1DE97B);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralFE5F89F63E2381500F62A7CBD6954563BE44562F);
		s_Il2CppMethodInitialized = true;
	}
	TrailModule_t95D15372971E64A1977B7587ABAA87B1A31EF5C8  V_0;
	memset((&V_0), 0, sizeof(V_0));
	String_t* V_1 = NULL;
	uint32_t V_2 = 0;
	{
		// var instance = (UnityEngine.ParticleSystem.TrailModule)obj;
		RuntimeObject * L_0 = ___obj1;
		V_0 = (TrailModule_t95D15372971E64A1977B7587ABAA87B1A31EF5C8 )((*(TrailModule_t95D15372971E64A1977B7587ABAA87B1A31EF5C8 *)((TrailModule_t95D15372971E64A1977B7587ABAA87B1A31EF5C8 *)UnBox(L_0, TrailModule_t95D15372971E64A1977B7587ABAA87B1A31EF5C8_il2cpp_TypeInfo_var))));
		goto IL_038e;
	}

IL_000c:
	{
		String_t* L_1 = V_1;
		if (!L_1)
		{
			goto IL_0388;
		}
	}
	{
		String_t* L_2 = V_1;
		uint32_t L_3;
		L_3 = U3CPrivateImplementationDetailsU3E_ComputeStringHash_m3ADC1F612F9EE3DD518E6F0023A0DE0EE2B120A7((String_t*)L_2, /*hidden argument*/NULL);
		V_2 = (uint32_t)L_3;
		uint32_t L_4 = V_2;
		if ((!(((uint32_t)L_4) <= ((uint32_t)((int32_t)1376955374)))))
		{
			goto IL_008d;
		}
	}
	{
		uint32_t L_5 = V_2;
		if ((!(((uint32_t)L_5) <= ((uint32_t)((int32_t)494095910)))))
		{
			goto IL_004f;
		}
	}
	{
		uint32_t L_6 = V_2;
		if ((((int32_t)L_6) == ((int32_t)((int32_t)49525662))))
		{
			goto IL_010e;
		}
	}
	{
		uint32_t L_7 = V_2;
		if ((((int32_t)L_7) == ((int32_t)((int32_t)341298456))))
		{
			goto IL_021f;
		}
	}
	{
		uint32_t L_8 = V_2;
		if ((((int32_t)L_8) == ((int32_t)((int32_t)494095910))))
		{
			goto IL_0234;
		}
	}
	{
		goto IL_0388;
	}

IL_004f:
	{
		uint32_t L_9 = V_2;
		if ((!(((uint32_t)L_9) <= ((uint32_t)((int32_t)973733911)))))
		{
			goto IL_0072;
		}
	}
	{
		uint32_t L_10 = V_2;
		if ((((int32_t)L_10) == ((int32_t)((int32_t)559929418))))
		{
			goto IL_01b6;
		}
	}
	{
		uint32_t L_11 = V_2;
		if ((((int32_t)L_11) == ((int32_t)((int32_t)973733911))))
		{
			goto IL_0177;
		}
	}
	{
		goto IL_0388;
	}

IL_0072:
	{
		uint32_t L_12 = V_2;
		if ((((int32_t)L_12) == ((int32_t)((int32_t)1024708593))))
		{
			goto IL_014d;
		}
	}
	{
		uint32_t L_13 = V_2;
		if ((((int32_t)L_13) == ((int32_t)((int32_t)1376955374))))
		{
			goto IL_0138;
		}
	}
	{
		goto IL_0388;
	}

IL_008d:
	{
		uint32_t L_14 = V_2;
		if ((!(((uint32_t)L_14) <= ((uint32_t)((int32_t)-2100707162)))))
		{
			goto IL_00d3;
		}
	}
	{
		uint32_t L_15 = V_2;
		if ((!(((uint32_t)L_15) <= ((uint32_t)((int32_t)1975189197)))))
		{
			goto IL_00b8;
		}
	}
	{
		uint32_t L_16 = V_2;
		if ((((int32_t)L_16) == ((int32_t)((int32_t)1546474083))))
		{
			goto IL_020a;
		}
	}
	{
		uint32_t L_17 = V_2;
		if ((((int32_t)L_17) == ((int32_t)((int32_t)1975189197))))
		{
			goto IL_01cb;
		}
	}
	{
		goto IL_0388;
	}

IL_00b8:
	{
		uint32_t L_18 = V_2;
		if ((((int32_t)L_18) == ((int32_t)((int32_t)2053023684))))
		{
			goto IL_01a1;
		}
	}
	{
		uint32_t L_19 = V_2;
		if ((((int32_t)L_19) == ((int32_t)((int32_t)-2100707162))))
		{
			goto IL_0162;
		}
	}
	{
		goto IL_0388;
	}

IL_00d3:
	{
		uint32_t L_20 = V_2;
		if ((!(((uint32_t)L_20) <= ((uint32_t)((int32_t)-1319579393)))))
		{
			goto IL_00f6;
		}
	}
	{
		uint32_t L_21 = V_2;
		if ((((int32_t)L_21) == ((int32_t)((int32_t)-1562862963))))
		{
			goto IL_01e0;
		}
	}
	{
		uint32_t L_22 = V_2;
		if ((((int32_t)L_22) == ((int32_t)((int32_t)-1319579393))))
		{
			goto IL_018c;
		}
	}
	{
		goto IL_0388;
	}

IL_00f6:
	{
		uint32_t L_23 = V_2;
		if ((((int32_t)L_23) == ((int32_t)((int32_t)-1055777148))))
		{
			goto IL_0123;
		}
	}
	{
		uint32_t L_24 = V_2;
		if ((((int32_t)L_24) == ((int32_t)((int32_t)-413379935))))
		{
			goto IL_01f5;
		}
	}
	{
		goto IL_0388;
	}

IL_010e:
	{
		String_t* L_25 = V_1;
		bool L_26;
		L_26 = String_op_Equality_m50B3548E4AC232558190B0052877B290AA1D436A((String_t*)L_25, (String_t*)_stringLiteralF9D225733E1D10F9344C755C4A9C0870CD1DE97B, /*hidden argument*/NULL);
		if (L_26)
		{
			goto IL_0249;
		}
	}
	{
		goto IL_0388;
	}

IL_0123:
	{
		String_t* L_27 = V_1;
		bool L_28;
		L_28 = String_op_Equality_m50B3548E4AC232558190B0052877B290AA1D436A((String_t*)L_27, (String_t*)_stringLiteral60126327537B7B8E6EE33C43FE0C5CA8BCC3A06A, /*hidden argument*/NULL);
		if (L_28)
		{
			goto IL_0260;
		}
	}
	{
		goto IL_0388;
	}

IL_0138:
	{
		String_t* L_29 = V_1;
		bool L_30;
		L_30 = String_op_Equality_m50B3548E4AC232558190B0052877B290AA1D436A((String_t*)L_29, (String_t*)_stringLiteralBE2893848F9FC647C2288DA6581A1522E9695182, /*hidden argument*/NULL);
		if (L_30)
		{
			goto IL_0277;
		}
	}
	{
		goto IL_0388;
	}

IL_014d:
	{
		String_t* L_31 = V_1;
		bool L_32;
		L_32 = String_op_Equality_m50B3548E4AC232558190B0052877B290AA1D436A((String_t*)L_31, (String_t*)_stringLiteral4221314F268D184F46688D45C85446821F1F1BC3, /*hidden argument*/NULL);
		if (L_32)
		{
			goto IL_028e;
		}
	}
	{
		goto IL_0388;
	}

IL_0162:
	{
		String_t* L_33 = V_1;
		bool L_34;
		L_34 = String_op_Equality_m50B3548E4AC232558190B0052877B290AA1D436A((String_t*)L_33, (String_t*)_stringLiteral5C86338F177203D001C41D9C348A83D1338CC7D0, /*hidden argument*/NULL);
		if (L_34)
		{
			goto IL_02a5;
		}
	}
	{
		goto IL_0388;
	}

IL_0177:
	{
		String_t* L_35 = V_1;
		bool L_36;
		L_36 = String_op_Equality_m50B3548E4AC232558190B0052877B290AA1D436A((String_t*)L_35, (String_t*)_stringLiteralFE5F89F63E2381500F62A7CBD6954563BE44562F, /*hidden argument*/NULL);
		if (L_36)
		{
			goto IL_02bc;
		}
	}
	{
		goto IL_0388;
	}

IL_018c:
	{
		String_t* L_37 = V_1;
		bool L_38;
		L_38 = String_op_Equality_m50B3548E4AC232558190B0052877B290AA1D436A((String_t*)L_37, (String_t*)_stringLiteral87F70660D62DE5FC257FBADE9DA4EC9188597DE5, /*hidden argument*/NULL);
		if (L_38)
		{
			goto IL_02ce;
		}
	}
	{
		goto IL_0388;
	}

IL_01a1:
	{
		String_t* L_39 = V_1;
		bool L_40;
		L_40 = String_op_Equality_m50B3548E4AC232558190B0052877B290AA1D436A((String_t*)L_39, (String_t*)_stringLiteral354281948B6269615E32D856CF85B6F456724DAA, /*hidden argument*/NULL);
		if (L_40)
		{
			goto IL_02e5;
		}
	}
	{
		goto IL_0388;
	}

IL_01b6:
	{
		String_t* L_41 = V_1;
		bool L_42;
		L_42 = String_op_Equality_m50B3548E4AC232558190B0052877B290AA1D436A((String_t*)L_41, (String_t*)_stringLiteralADAEB0839588196B349BDB6CF33AFA3E0736360B, /*hidden argument*/NULL);
		if (L_42)
		{
			goto IL_02fc;
		}
	}
	{
		goto IL_0388;
	}

IL_01cb:
	{
		String_t* L_43 = V_1;
		bool L_44;
		L_44 = String_op_Equality_m50B3548E4AC232558190B0052877B290AA1D436A((String_t*)L_43, (String_t*)_stringLiteralC580B374AA991574F91DFC86C068E7FAD661A3A4, /*hidden argument*/NULL);
		if (L_44)
		{
			goto IL_0310;
		}
	}
	{
		goto IL_0388;
	}

IL_01e0:
	{
		String_t* L_45 = V_1;
		bool L_46;
		L_46 = String_op_Equality_m50B3548E4AC232558190B0052877B290AA1D436A((String_t*)L_45, (String_t*)_stringLiteralE049DB547285CFCE1CB9A95934B6B6DCE2D219EC, /*hidden argument*/NULL);
		if (L_46)
		{
			goto IL_0324;
		}
	}
	{
		goto IL_0388;
	}

IL_01f5:
	{
		String_t* L_47 = V_1;
		bool L_48;
		L_48 = String_op_Equality_m50B3548E4AC232558190B0052877B290AA1D436A((String_t*)L_47, (String_t*)_stringLiteralBF540D6548854CC21630064FBA5390C9409C86F0, /*hidden argument*/NULL);
		if (L_48)
		{
			goto IL_0338;
		}
	}
	{
		goto IL_0388;
	}

IL_020a:
	{
		String_t* L_49 = V_1;
		bool L_50;
		L_50 = String_op_Equality_m50B3548E4AC232558190B0052877B290AA1D436A((String_t*)L_49, (String_t*)_stringLiteral1D87A56AE67B2CD49CAE6E942C2FB7AD98925C00, /*hidden argument*/NULL);
		if (L_50)
		{
			goto IL_034c;
		}
	}
	{
		goto IL_0388;
	}

IL_021f:
	{
		String_t* L_51 = V_1;
		bool L_52;
		L_52 = String_op_Equality_m50B3548E4AC232558190B0052877B290AA1D436A((String_t*)L_51, (String_t*)_stringLiteralA967787586EC9E5A17A9C55E2002AB73A5E21A0A, /*hidden argument*/NULL);
		if (L_52)
		{
			goto IL_0360;
		}
	}
	{
		goto IL_0388;
	}

IL_0234:
	{
		String_t* L_53 = V_1;
		bool L_54;
		L_54 = String_op_Equality_m50B3548E4AC232558190B0052877B290AA1D436A((String_t*)L_53, (String_t*)_stringLiteral47C47DD09640803AD8016748EAE1F04DD1D41119, /*hidden argument*/NULL);
		if (L_54)
		{
			goto IL_0374;
		}
	}
	{
		goto IL_0388;
	}

IL_0249:
	{
		// instance.enabled = reader.Read<System.Boolean>(ES3Type_bool.Instance);
		ES3Reader_t2780AF8AA61DA2A817115CEF8612AC0E494D03C9 * L_55 = ___reader0;
		IL2CPP_RUNTIME_CLASS_INIT(ES3Type_bool_t8F309F7B9CC735FF1DEE68081B6E3CAB367745F4_il2cpp_TypeInfo_var);
		ES3Type_t8FBECB7AE75168648B9524E0C2A38DAD4555421D * L_56 = ((ES3Type_bool_t8F309F7B9CC735FF1DEE68081B6E3CAB367745F4_StaticFields*)il2cpp_codegen_static_fields_for(ES3Type_bool_t8F309F7B9CC735FF1DEE68081B6E3CAB367745F4_il2cpp_TypeInfo_var))->get_Instance_12();
		NullCheck((ES3Reader_t2780AF8AA61DA2A817115CEF8612AC0E494D03C9 *)L_55);
		bool L_57;
		L_57 = GenericVirtFuncInvoker1< bool, ES3Type_t8FBECB7AE75168648B9524E0C2A38DAD4555421D * >::Invoke(ES3Reader_Read_TisBoolean_t07D1E3F34E4813023D64F584DFF7B34C9D922F37_mC6D1B158268FF9B97822FF9F5B37FB1723FEDA22_RuntimeMethod_var, (ES3Reader_t2780AF8AA61DA2A817115CEF8612AC0E494D03C9 *)L_55, (ES3Type_t8FBECB7AE75168648B9524E0C2A38DAD4555421D *)L_56);
		TrailModule_set_enabled_mFC8451DDDF40CCBB3E32A4B30A001115F6346894((TrailModule_t95D15372971E64A1977B7587ABAA87B1A31EF5C8 *)(TrailModule_t95D15372971E64A1977B7587ABAA87B1A31EF5C8 *)(&V_0), (bool)L_57, /*hidden argument*/NULL);
		// break;
		goto IL_038e;
	}

IL_0260:
	{
		// instance.ratio = reader.Read<System.Single>(ES3Type_float.Instance);
		ES3Reader_t2780AF8AA61DA2A817115CEF8612AC0E494D03C9 * L_58 = ___reader0;
		IL2CPP_RUNTIME_CLASS_INIT(ES3Type_float_tF86B773C86731BD9AD79448B860BBB178FE77644_il2cpp_TypeInfo_var);
		ES3Type_t8FBECB7AE75168648B9524E0C2A38DAD4555421D * L_59 = ((ES3Type_float_tF86B773C86731BD9AD79448B860BBB178FE77644_StaticFields*)il2cpp_codegen_static_fields_for(ES3Type_float_tF86B773C86731BD9AD79448B860BBB178FE77644_il2cpp_TypeInfo_var))->get_Instance_12();
		NullCheck((ES3Reader_t2780AF8AA61DA2A817115CEF8612AC0E494D03C9 *)L_58);
		float L_60;
		L_60 = GenericVirtFuncInvoker1< float, ES3Type_t8FBECB7AE75168648B9524E0C2A38DAD4555421D * >::Invoke(ES3Reader_Read_TisSingle_tE07797BA3C98D4CA9B5A19413C19A76688AB899E_m4A0416374498BDA042B8EB21E49B72326D6CE5F4_RuntimeMethod_var, (ES3Reader_t2780AF8AA61DA2A817115CEF8612AC0E494D03C9 *)L_58, (ES3Type_t8FBECB7AE75168648B9524E0C2A38DAD4555421D *)L_59);
		TrailModule_set_ratio_m34E63B34E7B0E8D037AD45532B2E2D5BD0750189((TrailModule_t95D15372971E64A1977B7587ABAA87B1A31EF5C8 *)(TrailModule_t95D15372971E64A1977B7587ABAA87B1A31EF5C8 *)(&V_0), (float)L_60, /*hidden argument*/NULL);
		// break;
		goto IL_038e;
	}

IL_0277:
	{
		// instance.lifetime = reader.Read<UnityEngine.ParticleSystem.MinMaxCurve>(ES3Type_MinMaxCurve.Instance);
		ES3Reader_t2780AF8AA61DA2A817115CEF8612AC0E494D03C9 * L_61 = ___reader0;
		IL2CPP_RUNTIME_CLASS_INIT(ES3Type_MinMaxCurve_tC5342BF0F8735B85CB5E16FDD4C6FACC8AFAD3B7_il2cpp_TypeInfo_var);
		ES3Type_t8FBECB7AE75168648B9524E0C2A38DAD4555421D * L_62 = ((ES3Type_MinMaxCurve_tC5342BF0F8735B85CB5E16FDD4C6FACC8AFAD3B7_StaticFields*)il2cpp_codegen_static_fields_for(ES3Type_MinMaxCurve_tC5342BF0F8735B85CB5E16FDD4C6FACC8AFAD3B7_il2cpp_TypeInfo_var))->get_Instance_12();
		NullCheck((ES3Reader_t2780AF8AA61DA2A817115CEF8612AC0E494D03C9 *)L_61);
		MinMaxCurve_tF036239442AB2D438B1EDABEBC785426871084CD  L_63;
		L_63 = GenericVirtFuncInvoker1< MinMaxCurve_tF036239442AB2D438B1EDABEBC785426871084CD , ES3Type_t8FBECB7AE75168648B9524E0C2A38DAD4555421D * >::Invoke(ES3Reader_Read_TisMinMaxCurve_tF036239442AB2D438B1EDABEBC785426871084CD_mD285150CBFB52440643BBECB5ADF4EE8DE940535_RuntimeMethod_var, (ES3Reader_t2780AF8AA61DA2A817115CEF8612AC0E494D03C9 *)L_61, (ES3Type_t8FBECB7AE75168648B9524E0C2A38DAD4555421D *)L_62);
		TrailModule_set_lifetime_m57C898C42B9F18F5A0E88AAA7B10276CC158C39D((TrailModule_t95D15372971E64A1977B7587ABAA87B1A31EF5C8 *)(TrailModule_t95D15372971E64A1977B7587ABAA87B1A31EF5C8 *)(&V_0), (MinMaxCurve_tF036239442AB2D438B1EDABEBC785426871084CD )L_63, /*hidden argument*/NULL);
		// break;
		goto IL_038e;
	}

IL_028e:
	{
		// instance.lifetimeMultiplier = reader.Read<System.Single>(ES3Type_float.Instance);
		ES3Reader_t2780AF8AA61DA2A817115CEF8612AC0E494D03C9 * L_64 = ___reader0;
		IL2CPP_RUNTIME_CLASS_INIT(ES3Type_float_tF86B773C86731BD9AD79448B860BBB178FE77644_il2cpp_TypeInfo_var);
		ES3Type_t8FBECB7AE75168648B9524E0C2A38DAD4555421D * L_65 = ((ES3Type_float_tF86B773C86731BD9AD79448B860BBB178FE77644_StaticFields*)il2cpp_codegen_static_fields_for(ES3Type_float_tF86B773C86731BD9AD79448B860BBB178FE77644_il2cpp_TypeInfo_var))->get_Instance_12();
		NullCheck((ES3Reader_t2780AF8AA61DA2A817115CEF8612AC0E494D03C9 *)L_64);
		float L_66;
		L_66 = GenericVirtFuncInvoker1< float, ES3Type_t8FBECB7AE75168648B9524E0C2A38DAD4555421D * >::Invoke(ES3Reader_Read_TisSingle_tE07797BA3C98D4CA9B5A19413C19A76688AB899E_m4A0416374498BDA042B8EB21E49B72326D6CE5F4_RuntimeMethod_var, (ES3Reader_t2780AF8AA61DA2A817115CEF8612AC0E494D03C9 *)L_64, (ES3Type_t8FBECB7AE75168648B9524E0C2A38DAD4555421D *)L_65);
		TrailModule_set_lifetimeMultiplier_m23F95D65EE8C82152AE1CF2E41531EC2789A866B((TrailModule_t95D15372971E64A1977B7587ABAA87B1A31EF5C8 *)(TrailModule_t95D15372971E64A1977B7587ABAA87B1A31EF5C8 *)(&V_0), (float)L_66, /*hidden argument*/NULL);
		// break;
		goto IL_038e;
	}

IL_02a5:
	{
		// instance.minVertexDistance = reader.Read<System.Single>(ES3Type_float.Instance);
		ES3Reader_t2780AF8AA61DA2A817115CEF8612AC0E494D03C9 * L_67 = ___reader0;
		IL2CPP_RUNTIME_CLASS_INIT(ES3Type_float_tF86B773C86731BD9AD79448B860BBB178FE77644_il2cpp_TypeInfo_var);
		ES3Type_t8FBECB7AE75168648B9524E0C2A38DAD4555421D * L_68 = ((ES3Type_float_tF86B773C86731BD9AD79448B860BBB178FE77644_StaticFields*)il2cpp_codegen_static_fields_for(ES3Type_float_tF86B773C86731BD9AD79448B860BBB178FE77644_il2cpp_TypeInfo_var))->get_Instance_12();
		NullCheck((ES3Reader_t2780AF8AA61DA2A817115CEF8612AC0E494D03C9 *)L_67);
		float L_69;
		L_69 = GenericVirtFuncInvoker1< float, ES3Type_t8FBECB7AE75168648B9524E0C2A38DAD4555421D * >::Invoke(ES3Reader_Read_TisSingle_tE07797BA3C98D4CA9B5A19413C19A76688AB899E_m4A0416374498BDA042B8EB21E49B72326D6CE5F4_RuntimeMethod_var, (ES3Reader_t2780AF8AA61DA2A817115CEF8612AC0E494D03C9 *)L_67, (ES3Type_t8FBECB7AE75168648B9524E0C2A38DAD4555421D *)L_68);
		TrailModule_set_minVertexDistance_mF7C29F88FBF540CE4987F4CF9B141C624808FBC5((TrailModule_t95D15372971E64A1977B7587ABAA87B1A31EF5C8 *)(TrailModule_t95D15372971E64A1977B7587ABAA87B1A31EF5C8 *)(&V_0), (float)L_69, /*hidden argument*/NULL);
		// break;
		goto IL_038e;
	}

IL_02bc:
	{
		// instance.textureMode = reader.Read<UnityEngine.ParticleSystemTrailTextureMode>();
		ES3Reader_t2780AF8AA61DA2A817115CEF8612AC0E494D03C9 * L_70 = ___reader0;
		NullCheck((ES3Reader_t2780AF8AA61DA2A817115CEF8612AC0E494D03C9 *)L_70);
		int32_t L_71;
		L_71 = GenericVirtFuncInvoker0< int32_t >::Invoke(ES3Reader_Read_TisParticleSystemTrailTextureMode_tF3259187CA4D0A61EDB3A40E63CBF6C42641CE9F_m055DB1212E8BC34F385DF7D302F16241554E9730_RuntimeMethod_var, (ES3Reader_t2780AF8AA61DA2A817115CEF8612AC0E494D03C9 *)L_70);
		TrailModule_set_textureMode_mC1F8AE0D2965FC47BDBFF4F53E0673D5FB58CF28((TrailModule_t95D15372971E64A1977B7587ABAA87B1A31EF5C8 *)(TrailModule_t95D15372971E64A1977B7587ABAA87B1A31EF5C8 *)(&V_0), (int32_t)L_71, /*hidden argument*/NULL);
		// break;
		goto IL_038e;
	}

IL_02ce:
	{
		// instance.worldSpace = reader.Read<System.Boolean>(ES3Type_bool.Instance);
		ES3Reader_t2780AF8AA61DA2A817115CEF8612AC0E494D03C9 * L_72 = ___reader0;
		IL2CPP_RUNTIME_CLASS_INIT(ES3Type_bool_t8F309F7B9CC735FF1DEE68081B6E3CAB367745F4_il2cpp_TypeInfo_var);
		ES3Type_t8FBECB7AE75168648B9524E0C2A38DAD4555421D * L_73 = ((ES3Type_bool_t8F309F7B9CC735FF1DEE68081B6E3CAB367745F4_StaticFields*)il2cpp_codegen_static_fields_for(ES3Type_bool_t8F309F7B9CC735FF1DEE68081B6E3CAB367745F4_il2cpp_TypeInfo_var))->get_Instance_12();
		NullCheck((ES3Reader_t2780AF8AA61DA2A817115CEF8612AC0E494D03C9 *)L_72);
		bool L_74;
		L_74 = GenericVirtFuncInvoker1< bool, ES3Type_t8FBECB7AE75168648B9524E0C2A38DAD4555421D * >::Invoke(ES3Reader_Read_TisBoolean_t07D1E3F34E4813023D64F584DFF7B34C9D922F37_mC6D1B158268FF9B97822FF9F5B37FB1723FEDA22_RuntimeMethod_var, (ES3Reader_t2780AF8AA61DA2A817115CEF8612AC0E494D03C9 *)L_72, (ES3Type_t8FBECB7AE75168648B9524E0C2A38DAD4555421D *)L_73);
		TrailModule_set_worldSpace_m42A63AF4A96F24A621A29A0F35240195F0E56B1A((TrailModule_t95D15372971E64A1977B7587ABAA87B1A31EF5C8 *)(TrailModule_t95D15372971E64A1977B7587ABAA87B1A31EF5C8 *)(&V_0), (bool)L_74, /*hidden argument*/NULL);
		// break;
		goto IL_038e;
	}

IL_02e5:
	{
		// instance.dieWithParticles = reader.Read<System.Boolean>(ES3Type_bool.Instance);
		ES3Reader_t2780AF8AA61DA2A817115CEF8612AC0E494D03C9 * L_75 = ___reader0;
		IL2CPP_RUNTIME_CLASS_INIT(ES3Type_bool_t8F309F7B9CC735FF1DEE68081B6E3CAB367745F4_il2cpp_TypeInfo_var);
		ES3Type_t8FBECB7AE75168648B9524E0C2A38DAD4555421D * L_76 = ((ES3Type_bool_t8F309F7B9CC735FF1DEE68081B6E3CAB367745F4_StaticFields*)il2cpp_codegen_static_fields_for(ES3Type_bool_t8F309F7B9CC735FF1DEE68081B6E3CAB367745F4_il2cpp_TypeInfo_var))->get_Instance_12();
		NullCheck((ES3Reader_t2780AF8AA61DA2A817115CEF8612AC0E494D03C9 *)L_75);
		bool L_77;
		L_77 = GenericVirtFuncInvoker1< bool, ES3Type_t8FBECB7AE75168648B9524E0C2A38DAD4555421D * >::Invoke(ES3Reader_Read_TisBoolean_t07D1E3F34E4813023D64F584DFF7B34C9D922F37_mC6D1B158268FF9B97822FF9F5B37FB1723FEDA22_RuntimeMethod_var, (ES3Reader_t2780AF8AA61DA2A817115CEF8612AC0E494D03C9 *)L_75, (ES3Type_t8FBECB7AE75168648B9524E0C2A38DAD4555421D *)L_76);
		TrailModule_set_dieWithParticles_mB7C4E8DC2F908FDF6D57A77B54B821E360D8DA99((TrailModule_t95D15372971E64A1977B7587ABAA87B1A31EF5C8 *)(TrailModule_t95D15372971E64A1977B7587ABAA87B1A31EF5C8 *)(&V_0), (bool)L_77, /*hidden argument*/NULL);
		// break;
		goto IL_038e;
	}

IL_02fc:
	{
		// instance.sizeAffectsWidth = reader.Read<System.Boolean>(ES3Type_bool.Instance);
		ES3Reader_t2780AF8AA61DA2A817115CEF8612AC0E494D03C9 * L_78 = ___reader0;
		IL2CPP_RUNTIME_CLASS_INIT(ES3Type_bool_t8F309F7B9CC735FF1DEE68081B6E3CAB367745F4_il2cpp_TypeInfo_var);
		ES3Type_t8FBECB7AE75168648B9524E0C2A38DAD4555421D * L_79 = ((ES3Type_bool_t8F309F7B9CC735FF1DEE68081B6E3CAB367745F4_StaticFields*)il2cpp_codegen_static_fields_for(ES3Type_bool_t8F309F7B9CC735FF1DEE68081B6E3CAB367745F4_il2cpp_TypeInfo_var))->get_Instance_12();
		NullCheck((ES3Reader_t2780AF8AA61DA2A817115CEF8612AC0E494D03C9 *)L_78);
		bool L_80;
		L_80 = GenericVirtFuncInvoker1< bool, ES3Type_t8FBECB7AE75168648B9524E0C2A38DAD4555421D * >::Invoke(ES3Reader_Read_TisBoolean_t07D1E3F34E4813023D64F584DFF7B34C9D922F37_mC6D1B158268FF9B97822FF9F5B37FB1723FEDA22_RuntimeMethod_var, (ES3Reader_t2780AF8AA61DA2A817115CEF8612AC0E494D03C9 *)L_78, (ES3Type_t8FBECB7AE75168648B9524E0C2A38DAD4555421D *)L_79);
		TrailModule_set_sizeAffectsWidth_m3517856E39080DA69B447499C8846D2491B0ABF0((TrailModule_t95D15372971E64A1977B7587ABAA87B1A31EF5C8 *)(TrailModule_t95D15372971E64A1977B7587ABAA87B1A31EF5C8 *)(&V_0), (bool)L_80, /*hidden argument*/NULL);
		// break;
		goto IL_038e;
	}

IL_0310:
	{
		// instance.sizeAffectsLifetime = reader.Read<System.Boolean>(ES3Type_bool.Instance);
		ES3Reader_t2780AF8AA61DA2A817115CEF8612AC0E494D03C9 * L_81 = ___reader0;
		IL2CPP_RUNTIME_CLASS_INIT(ES3Type_bool_t8F309F7B9CC735FF1DEE68081B6E3CAB367745F4_il2cpp_TypeInfo_var);
		ES3Type_t8FBECB7AE75168648B9524E0C2A38DAD4555421D * L_82 = ((ES3Type_bool_t8F309F7B9CC735FF1DEE68081B6E3CAB367745F4_StaticFields*)il2cpp_codegen_static_fields_for(ES3Type_bool_t8F309F7B9CC735FF1DEE68081B6E3CAB367745F4_il2cpp_TypeInfo_var))->get_Instance_12();
		NullCheck((ES3Reader_t2780AF8AA61DA2A817115CEF8612AC0E494D03C9 *)L_81);
		bool L_83;
		L_83 = GenericVirtFuncInvoker1< bool, ES3Type_t8FBECB7AE75168648B9524E0C2A38DAD4555421D * >::Invoke(ES3Reader_Read_TisBoolean_t07D1E3F34E4813023D64F584DFF7B34C9D922F37_mC6D1B158268FF9B97822FF9F5B37FB1723FEDA22_RuntimeMethod_var, (ES3Reader_t2780AF8AA61DA2A817115CEF8612AC0E494D03C9 *)L_81, (ES3Type_t8FBECB7AE75168648B9524E0C2A38DAD4555421D *)L_82);
		TrailModule_set_sizeAffectsLifetime_m98BF4A6594193D824B52D88371CF963ACBA388FD((TrailModule_t95D15372971E64A1977B7587ABAA87B1A31EF5C8 *)(TrailModule_t95D15372971E64A1977B7587ABAA87B1A31EF5C8 *)(&V_0), (bool)L_83, /*hidden argument*/NULL);
		// break;
		goto IL_038e;
	}

IL_0324:
	{
		// instance.inheritParticleColor = reader.Read<System.Boolean>(ES3Type_bool.Instance);
		ES3Reader_t2780AF8AA61DA2A817115CEF8612AC0E494D03C9 * L_84 = ___reader0;
		IL2CPP_RUNTIME_CLASS_INIT(ES3Type_bool_t8F309F7B9CC735FF1DEE68081B6E3CAB367745F4_il2cpp_TypeInfo_var);
		ES3Type_t8FBECB7AE75168648B9524E0C2A38DAD4555421D * L_85 = ((ES3Type_bool_t8F309F7B9CC735FF1DEE68081B6E3CAB367745F4_StaticFields*)il2cpp_codegen_static_fields_for(ES3Type_bool_t8F309F7B9CC735FF1DEE68081B6E3CAB367745F4_il2cpp_TypeInfo_var))->get_Instance_12();
		NullCheck((ES3Reader_t2780AF8AA61DA2A817115CEF8612AC0E494D03C9 *)L_84);
		bool L_86;
		L_86 = GenericVirtFuncInvoker1< bool, ES3Type_t8FBECB7AE75168648B9524E0C2A38DAD4555421D * >::Invoke(ES3Reader_Read_TisBoolean_t07D1E3F34E4813023D64F584DFF7B34C9D922F37_mC6D1B158268FF9B97822FF9F5B37FB1723FEDA22_RuntimeMethod_var, (ES3Reader_t2780AF8AA61DA2A817115CEF8612AC0E494D03C9 *)L_84, (ES3Type_t8FBECB7AE75168648B9524E0C2A38DAD4555421D *)L_85);
		TrailModule_set_inheritParticleColor_mCD83E87B5E00F2BFFBE08AD2D1D68606283A4FEE((TrailModule_t95D15372971E64A1977B7587ABAA87B1A31EF5C8 *)(TrailModule_t95D15372971E64A1977B7587ABAA87B1A31EF5C8 *)(&V_0), (bool)L_86, /*hidden argument*/NULL);
		// break;
		goto IL_038e;
	}

IL_0338:
	{
		// instance.colorOverLifetime = reader.Read<UnityEngine.ParticleSystem.MinMaxGradient>(ES3Type_MinMaxGradient.Instance);
		ES3Reader_t2780AF8AA61DA2A817115CEF8612AC0E494D03C9 * L_87 = ___reader0;
		IL2CPP_RUNTIME_CLASS_INIT(ES3Type_MinMaxGradient_t5DD353D60E95642AB39D1C97C6FD6DD1B067D3CF_il2cpp_TypeInfo_var);
		ES3Type_t8FBECB7AE75168648B9524E0C2A38DAD4555421D * L_88 = ((ES3Type_MinMaxGradient_t5DD353D60E95642AB39D1C97C6FD6DD1B067D3CF_StaticFields*)il2cpp_codegen_static_fields_for(ES3Type_MinMaxGradient_t5DD353D60E95642AB39D1C97C6FD6DD1B067D3CF_il2cpp_TypeInfo_var))->get_Instance_12();
		NullCheck((ES3Reader_t2780AF8AA61DA2A817115CEF8612AC0E494D03C9 *)L_87);
		MinMaxGradient_tF4530B26F29D9635D670A33B9EE581EAC48C12B7  L_89;
		L_89 = GenericVirtFuncInvoker1< MinMaxGradient_tF4530B26F29D9635D670A33B9EE581EAC48C12B7 , ES3Type_t8FBECB7AE75168648B9524E0C2A38DAD4555421D * >::Invoke(ES3Reader_Read_TisMinMaxGradient_tF4530B26F29D9635D670A33B9EE581EAC48C12B7_m6A3DD8CBBAC5D32B838B6C4399009AB8AA512ACC_RuntimeMethod_var, (ES3Reader_t2780AF8AA61DA2A817115CEF8612AC0E494D03C9 *)L_87, (ES3Type_t8FBECB7AE75168648B9524E0C2A38DAD4555421D *)L_88);
		TrailModule_set_colorOverLifetime_mCD56BD4B75D3A3947069BA1B93FEC78AAE08DF27((TrailModule_t95D15372971E64A1977B7587ABAA87B1A31EF5C8 *)(TrailModule_t95D15372971E64A1977B7587ABAA87B1A31EF5C8 *)(&V_0), (MinMaxGradient_tF4530B26F29D9635D670A33B9EE581EAC48C12B7 )L_89, /*hidden argument*/NULL);
		// break;
		goto IL_038e;
	}

IL_034c:
	{
		// instance.widthOverTrail = reader.Read<UnityEngine.ParticleSystem.MinMaxCurve>(ES3Type_MinMaxCurve.Instance);
		ES3Reader_t2780AF8AA61DA2A817115CEF8612AC0E494D03C9 * L_90 = ___reader0;
		IL2CPP_RUNTIME_CLASS_INIT(ES3Type_MinMaxCurve_tC5342BF0F8735B85CB5E16FDD4C6FACC8AFAD3B7_il2cpp_TypeInfo_var);
		ES3Type_t8FBECB7AE75168648B9524E0C2A38DAD4555421D * L_91 = ((ES3Type_MinMaxCurve_tC5342BF0F8735B85CB5E16FDD4C6FACC8AFAD3B7_StaticFields*)il2cpp_codegen_static_fields_for(ES3Type_MinMaxCurve_tC5342BF0F8735B85CB5E16FDD4C6FACC8AFAD3B7_il2cpp_TypeInfo_var))->get_Instance_12();
		NullCheck((ES3Reader_t2780AF8AA61DA2A817115CEF8612AC0E494D03C9 *)L_90);
		MinMaxCurve_tF036239442AB2D438B1EDABEBC785426871084CD  L_92;
		L_92 = GenericVirtFuncInvoker1< MinMaxCurve_tF036239442AB2D438B1EDABEBC785426871084CD , ES3Type_t8FBECB7AE75168648B9524E0C2A38DAD4555421D * >::Invoke(ES3Reader_Read_TisMinMaxCurve_tF036239442AB2D438B1EDABEBC785426871084CD_mD285150CBFB52440643BBECB5ADF4EE8DE940535_RuntimeMethod_var, (ES3Reader_t2780AF8AA61DA2A817115CEF8612AC0E494D03C9 *)L_90, (ES3Type_t8FBECB7AE75168648B9524E0C2A38DAD4555421D *)L_91);
		TrailModule_set_widthOverTrail_m6C0A896EBFDED7CE46344B3A0B04212934F30DE1((TrailModule_t95D15372971E64A1977B7587ABAA87B1A31EF5C8 *)(TrailModule_t95D15372971E64A1977B7587ABAA87B1A31EF5C8 *)(&V_0), (MinMaxCurve_tF036239442AB2D438B1EDABEBC785426871084CD )L_92, /*hidden argument*/NULL);
		// break;
		goto IL_038e;
	}

IL_0360:
	{
		// instance.widthOverTrailMultiplier = reader.Read<System.Single>(ES3Type_float.Instance);
		ES3Reader_t2780AF8AA61DA2A817115CEF8612AC0E494D03C9 * L_93 = ___reader0;
		IL2CPP_RUNTIME_CLASS_INIT(ES3Type_float_tF86B773C86731BD9AD79448B860BBB178FE77644_il2cpp_TypeInfo_var);
		ES3Type_t8FBECB7AE75168648B9524E0C2A38DAD4555421D * L_94 = ((ES3Type_float_tF86B773C86731BD9AD79448B860BBB178FE77644_StaticFields*)il2cpp_codegen_static_fields_for(ES3Type_float_tF86B773C86731BD9AD79448B860BBB178FE77644_il2cpp_TypeInfo_var))->get_Instance_12();
		NullCheck((ES3Reader_t2780AF8AA61DA2A817115CEF8612AC0E494D03C9 *)L_93);
		float L_95;
		L_95 = GenericVirtFuncInvoker1< float, ES3Type_t8FBECB7AE75168648B9524E0C2A38DAD4555421D * >::Invoke(ES3Reader_Read_TisSingle_tE07797BA3C98D4CA9B5A19413C19A76688AB899E_m4A0416374498BDA042B8EB21E49B72326D6CE5F4_RuntimeMethod_var, (ES3Reader_t2780AF8AA61DA2A817115CEF8612AC0E494D03C9 *)L_93, (ES3Type_t8FBECB7AE75168648B9524E0C2A38DAD4555421D *)L_94);
		TrailModule_set_widthOverTrailMultiplier_m6A7EA2856CF30B710CCB528EA3EBFD1799C19BD4((TrailModule_t95D15372971E64A1977B7587ABAA87B1A31EF5C8 *)(TrailModule_t95D15372971E64A1977B7587ABAA87B1A31EF5C8 *)(&V_0), (float)L_95, /*hidden argument*/NULL);
		// break;
		goto IL_038e;
	}

IL_0374:
	{
		// instance.colorOverTrail = reader.Read<UnityEngine.ParticleSystem.MinMaxGradient>(ES3Type_MinMaxGradient.Instance);
		ES3Reader_t2780AF8AA61DA2A817115CEF8612AC0E494D03C9 * L_96 = ___reader0;
		IL2CPP_RUNTIME_CLASS_INIT(ES3Type_MinMaxGradient_t5DD353D60E95642AB39D1C97C6FD6DD1B067D3CF_il2cpp_TypeInfo_var);
		ES3Type_t8FBECB7AE75168648B9524E0C2A38DAD4555421D * L_97 = ((ES3Type_MinMaxGradient_t5DD353D60E95642AB39D1C97C6FD6DD1B067D3CF_StaticFields*)il2cpp_codegen_static_fields_for(ES3Type_MinMaxGradient_t5DD353D60E95642AB39D1C97C6FD6DD1B067D3CF_il2cpp_TypeInfo_var))->get_Instance_12();
		NullCheck((ES3Reader_t2780AF8AA61DA2A817115CEF8612AC0E494D03C9 *)L_96);
		MinMaxGradient_tF4530B26F29D9635D670A33B9EE581EAC48C12B7  L_98;
		L_98 = GenericVirtFuncInvoker1< MinMaxGradient_tF4530B26F29D9635D670A33B9EE581EAC48C12B7 , ES3Type_t8FBECB7AE75168648B9524E0C2A38DAD4555421D * >::Invoke(ES3Reader_Read_TisMinMaxGradient_tF4530B26F29D9635D670A33B9EE581EAC48C12B7_m6A3DD8CBBAC5D32B838B6C4399009AB8AA512ACC_RuntimeMethod_var, (ES3Reader_t2780AF8AA61DA2A817115CEF8612AC0E494D03C9 *)L_96, (ES3Type_t8FBECB7AE75168648B9524E0C2A38DAD4555421D *)L_97);
		TrailModule_set_colorOverTrail_m8440C6574C8310292B93D70EA4FE3EE8C40DF8DB((TrailModule_t95D15372971E64A1977B7587ABAA87B1A31EF5C8 *)(TrailModule_t95D15372971E64A1977B7587ABAA87B1A31EF5C8 *)(&V_0), (MinMaxGradient_tF4530B26F29D9635D670A33B9EE581EAC48C12B7 )L_98, /*hidden argument*/NULL);
		// break;
		goto IL_038e;
	}

IL_0388:
	{
		// reader.Skip();
		ES3Reader_t2780AF8AA61DA2A817115CEF8612AC0E494D03C9 * L_99 = ___reader0;
		NullCheck((ES3Reader_t2780AF8AA61DA2A817115CEF8612AC0E494D03C9 *)L_99);
		VirtActionInvoker0::Invoke(41 /* System.Void ES3Reader::Skip() */, (ES3Reader_t2780AF8AA61DA2A817115CEF8612AC0E494D03C9 *)L_99);
	}

IL_038e:
	{
		// while((propertyName = reader.ReadPropertyName()) != null)
		ES3Reader_t2780AF8AA61DA2A817115CEF8612AC0E494D03C9 * L_100 = ___reader0;
		NullCheck((ES3Reader_t2780AF8AA61DA2A817115CEF8612AC0E494D03C9 *)L_100);
		String_t* L_101;
		L_101 = VirtFuncInvoker0< String_t* >::Invoke(21 /* System.String ES3Reader::ReadPropertyName() */, (ES3Reader_t2780AF8AA61DA2A817115CEF8612AC0E494D03C9 *)L_100);
		String_t* L_102 = (String_t*)L_101;
		V_1 = (String_t*)L_102;
		if (L_102)
		{
			goto IL_000c;
		}
	}
	{
		// }
		return;
	}
}
// System.Void ES3Types.ES3Type_TrailModule::ReadInto<UnityEngine.Vector2>(ES3Reader,System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ES3Type_TrailModule_ReadInto_TisVector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9_m900741DA84E41F49B4D8A80ED7D375906B0804B5_gshared (ES3Type_TrailModule_tC773F73EC0443516DD128FF2B5AE010809742462 * __this, ES3Reader_t2780AF8AA61DA2A817115CEF8612AC0E494D03C9 * ___reader0, RuntimeObject * ___obj1, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ES3Reader_Read_TisBoolean_t07D1E3F34E4813023D64F584DFF7B34C9D922F37_mC6D1B158268FF9B97822FF9F5B37FB1723FEDA22_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ES3Reader_Read_TisMinMaxCurve_tF036239442AB2D438B1EDABEBC785426871084CD_mD285150CBFB52440643BBECB5ADF4EE8DE940535_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ES3Reader_Read_TisMinMaxGradient_tF4530B26F29D9635D670A33B9EE581EAC48C12B7_m6A3DD8CBBAC5D32B838B6C4399009AB8AA512ACC_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ES3Reader_Read_TisParticleSystemTrailTextureMode_tF3259187CA4D0A61EDB3A40E63CBF6C42641CE9F_m055DB1212E8BC34F385DF7D302F16241554E9730_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ES3Reader_Read_TisSingle_tE07797BA3C98D4CA9B5A19413C19A76688AB899E_m4A0416374498BDA042B8EB21E49B72326D6CE5F4_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ES3Type_MinMaxCurve_tC5342BF0F8735B85CB5E16FDD4C6FACC8AFAD3B7_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ES3Type_MinMaxGradient_t5DD353D60E95642AB39D1C97C6FD6DD1B067D3CF_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ES3Type_bool_t8F309F7B9CC735FF1DEE68081B6E3CAB367745F4_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ES3Type_float_tF86B773C86731BD9AD79448B860BBB178FE77644_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&TrailModule_t95D15372971E64A1977B7587ABAA87B1A31EF5C8_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral1D87A56AE67B2CD49CAE6E942C2FB7AD98925C00);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral354281948B6269615E32D856CF85B6F456724DAA);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral4221314F268D184F46688D45C85446821F1F1BC3);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral47C47DD09640803AD8016748EAE1F04DD1D41119);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral5C86338F177203D001C41D9C348A83D1338CC7D0);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral60126327537B7B8E6EE33C43FE0C5CA8BCC3A06A);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral87F70660D62DE5FC257FBADE9DA4EC9188597DE5);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralA967787586EC9E5A17A9C55E2002AB73A5E21A0A);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralADAEB0839588196B349BDB6CF33AFA3E0736360B);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralBE2893848F9FC647C2288DA6581A1522E9695182);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralBF540D6548854CC21630064FBA5390C9409C86F0);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralC580B374AA991574F91DFC86C068E7FAD661A3A4);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralE049DB547285CFCE1CB9A95934B6B6DCE2D219EC);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralF9D225733E1D10F9344C755C4A9C0870CD1DE97B);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralFE5F89F63E2381500F62A7CBD6954563BE44562F);
		s_Il2CppMethodInitialized = true;
	}
	TrailModule_t95D15372971E64A1977B7587ABAA87B1A31EF5C8  V_0;
	memset((&V_0), 0, sizeof(V_0));
	String_t* V_1 = NULL;
	uint32_t V_2 = 0;
	{
		// var instance = (UnityEngine.ParticleSystem.TrailModule)obj;
		RuntimeObject * L_0 = ___obj1;
		V_0 = (TrailModule_t95D15372971E64A1977B7587ABAA87B1A31EF5C8 )((*(TrailModule_t95D15372971E64A1977B7587ABAA87B1A31EF5C8 *)((TrailModule_t95D15372971E64A1977B7587ABAA87B1A31EF5C8 *)UnBox(L_0, TrailModule_t95D15372971E64A1977B7587ABAA87B1A31EF5C8_il2cpp_TypeInfo_var))));
		goto IL_038e;
	}

IL_000c:
	{
		String_t* L_1 = V_1;
		if (!L_1)
		{
			goto IL_0388;
		}
	}
	{
		String_t* L_2 = V_1;
		uint32_t L_3;
		L_3 = U3CPrivateImplementationDetailsU3E_ComputeStringHash_m3ADC1F612F9EE3DD518E6F0023A0DE0EE2B120A7((String_t*)L_2, /*hidden argument*/NULL);
		V_2 = (uint32_t)L_3;
		uint32_t L_4 = V_2;
		if ((!(((uint32_t)L_4) <= ((uint32_t)((int32_t)1376955374)))))
		{
			goto IL_008d;
		}
	}
	{
		uint32_t L_5 = V_2;
		if ((!(((uint32_t)L_5) <= ((uint32_t)((int32_t)494095910)))))
		{
			goto IL_004f;
		}
	}
	{
		uint32_t L_6 = V_2;
		if ((((int32_t)L_6) == ((int32_t)((int32_t)49525662))))
		{
			goto IL_010e;
		}
	}
	{
		uint32_t L_7 = V_2;
		if ((((int32_t)L_7) == ((int32_t)((int32_t)341298456))))
		{
			goto IL_021f;
		}
	}
	{
		uint32_t L_8 = V_2;
		if ((((int32_t)L_8) == ((int32_t)((int32_t)494095910))))
		{
			goto IL_0234;
		}
	}
	{
		goto IL_0388;
	}

IL_004f:
	{
		uint32_t L_9 = V_2;
		if ((!(((uint32_t)L_9) <= ((uint32_t)((int32_t)973733911)))))
		{
			goto IL_0072;
		}
	}
	{
		uint32_t L_10 = V_2;
		if ((((int32_t)L_10) == ((int32_t)((int32_t)559929418))))
		{
			goto IL_01b6;
		}
	}
	{
		uint32_t L_11 = V_2;
		if ((((int32_t)L_11) == ((int32_t)((int32_t)973733911))))
		{
			goto IL_0177;
		}
	}
	{
		goto IL_0388;
	}

IL_0072:
	{
		uint32_t L_12 = V_2;
		if ((((int32_t)L_12) == ((int32_t)((int32_t)1024708593))))
		{
			goto IL_014d;
		}
	}
	{
		uint32_t L_13 = V_2;
		if ((((int32_t)L_13) == ((int32_t)((int32_t)1376955374))))
		{
			goto IL_0138;
		}
	}
	{
		goto IL_0388;
	}

IL_008d:
	{
		uint32_t L_14 = V_2;
		if ((!(((uint32_t)L_14) <= ((uint32_t)((int32_t)-2100707162)))))
		{
			goto IL_00d3;
		}
	}
	{
		uint32_t L_15 = V_2;
		if ((!(((uint32_t)L_15) <= ((uint32_t)((int32_t)1975189197)))))
		{
			goto IL_00b8;
		}
	}
	{
		uint32_t L_16 = V_2;
		if ((((int32_t)L_16) == ((int32_t)((int32_t)1546474083))))
		{
			goto IL_020a;
		}
	}
	{
		uint32_t L_17 = V_2;
		if ((((int32_t)L_17) == ((int32_t)((int32_t)1975189197))))
		{
			goto IL_01cb;
		}
	}
	{
		goto IL_0388;
	}

IL_00b8:
	{
		uint32_t L_18 = V_2;
		if ((((int32_t)L_18) == ((int32_t)((int32_t)2053023684))))
		{
			goto IL_01a1;
		}
	}
	{
		uint32_t L_19 = V_2;
		if ((((int32_t)L_19) == ((int32_t)((int32_t)-2100707162))))
		{
			goto IL_0162;
		}
	}
	{
		goto IL_0388;
	}

IL_00d3:
	{
		uint32_t L_20 = V_2;
		if ((!(((uint32_t)L_20) <= ((uint32_t)((int32_t)-1319579393)))))
		{
			goto IL_00f6;
		}
	}
	{
		uint32_t L_21 = V_2;
		if ((((int32_t)L_21) == ((int32_t)((int32_t)-1562862963))))
		{
			goto IL_01e0;
		}
	}
	{
		uint32_t L_22 = V_2;
		if ((((int32_t)L_22) == ((int32_t)((int32_t)-1319579393))))
		{
			goto IL_018c;
		}
	}
	{
		goto IL_0388;
	}

IL_00f6:
	{
		uint32_t L_23 = V_2;
		if ((((int32_t)L_23) == ((int32_t)((int32_t)-1055777148))))
		{
			goto IL_0123;
		}
	}
	{
		uint32_t L_24 = V_2;
		if ((((int32_t)L_24) == ((int32_t)((int32_t)-413379935))))
		{
			goto IL_01f5;
		}
	}
	{
		goto IL_0388;
	}

IL_010e:
	{
		String_t* L_25 = V_1;
		bool L_26;
		L_26 = String_op_Equality_m50B3548E4AC232558190B0052877B290AA1D436A((String_t*)L_25, (String_t*)_stringLiteralF9D225733E1D10F9344C755C4A9C0870CD1DE97B, /*hidden argument*/NULL);
		if (L_26)
		{
			goto IL_0249;
		}
	}
	{
		goto IL_0388;
	}

IL_0123:
	{
		String_t* L_27 = V_1;
		bool L_28;
		L_28 = String_op_Equality_m50B3548E4AC232558190B0052877B290AA1D436A((String_t*)L_27, (String_t*)_stringLiteral60126327537B7B8E6EE33C43FE0C5CA8BCC3A06A, /*hidden argument*/NULL);
		if (L_28)
		{
			goto IL_0260;
		}
	}
	{
		goto IL_0388;
	}

IL_0138:
	{
		String_t* L_29 = V_1;
		bool L_30;
		L_30 = String_op_Equality_m50B3548E4AC232558190B0052877B290AA1D436A((String_t*)L_29, (String_t*)_stringLiteralBE2893848F9FC647C2288DA6581A1522E9695182, /*hidden argument*/NULL);
		if (L_30)
		{
			goto IL_0277;
		}
	}
	{
		goto IL_0388;
	}

IL_014d:
	{
		String_t* L_31 = V_1;
		bool L_32;
		L_32 = String_op_Equality_m50B3548E4AC232558190B0052877B290AA1D436A((String_t*)L_31, (String_t*)_stringLiteral4221314F268D184F46688D45C85446821F1F1BC3, /*hidden argument*/NULL);
		if (L_32)
		{
			goto IL_028e;
		}
	}
	{
		goto IL_0388;
	}

IL_0162:
	{
		String_t* L_33 = V_1;
		bool L_34;
		L_34 = String_op_Equality_m50B3548E4AC232558190B0052877B290AA1D436A((String_t*)L_33, (String_t*)_stringLiteral5C86338F177203D001C41D9C348A83D1338CC7D0, /*hidden argument*/NULL);
		if (L_34)
		{
			goto IL_02a5;
		}
	}
	{
		goto IL_0388;
	}

IL_0177:
	{
		String_t* L_35 = V_1;
		bool L_36;
		L_36 = String_op_Equality_m50B3548E4AC232558190B0052877B290AA1D436A((String_t*)L_35, (String_t*)_stringLiteralFE5F89F63E2381500F62A7CBD6954563BE44562F, /*hidden argument*/NULL);
		if (L_36)
		{
			goto IL_02bc;
		}
	}
	{
		goto IL_0388;
	}

IL_018c:
	{
		String_t* L_37 = V_1;
		bool L_38;
		L_38 = String_op_Equality_m50B3548E4AC232558190B0052877B290AA1D436A((String_t*)L_37, (String_t*)_stringLiteral87F70660D62DE5FC257FBADE9DA4EC9188597DE5, /*hidden argument*/NULL);
		if (L_38)
		{
			goto IL_02ce;
		}
	}
	{
		goto IL_0388;
	}

IL_01a1:
	{
		String_t* L_39 = V_1;
		bool L_40;
		L_40 = String_op_Equality_m50B3548E4AC232558190B0052877B290AA1D436A((String_t*)L_39, (String_t*)_stringLiteral354281948B6269615E32D856CF85B6F456724DAA, /*hidden argument*/NULL);
		if (L_40)
		{
			goto IL_02e5;
		}
	}
	{
		goto IL_0388;
	}

IL_01b6:
	{
		String_t* L_41 = V_1;
		bool L_42;
		L_42 = String_op_Equality_m50B3548E4AC232558190B0052877B290AA1D436A((String_t*)L_41, (String_t*)_stringLiteralADAEB0839588196B349BDB6CF33AFA3E0736360B, /*hidden argument*/NULL);
		if (L_42)
		{
			goto IL_02fc;
		}
	}
	{
		goto IL_0388;
	}

IL_01cb:
	{
		String_t* L_43 = V_1;
		bool L_44;
		L_44 = String_op_Equality_m50B3548E4AC232558190B0052877B290AA1D436A((String_t*)L_43, (String_t*)_stringLiteralC580B374AA991574F91DFC86C068E7FAD661A3A4, /*hidden argument*/NULL);
		if (L_44)
		{
			goto IL_0310;
		}
	}
	{
		goto IL_0388;
	}

IL_01e0:
	{
		String_t* L_45 = V_1;
		bool L_46;
		L_46 = String_op_Equality_m50B3548E4AC232558190B0052877B290AA1D436A((String_t*)L_45, (String_t*)_stringLiteralE049DB547285CFCE1CB9A95934B6B6DCE2D219EC, /*hidden argument*/NULL);
		if (L_46)
		{
			goto IL_0324;
		}
	}
	{
		goto IL_0388;
	}

IL_01f5:
	{
		String_t* L_47 = V_1;
		bool L_48;
		L_48 = String_op_Equality_m50B3548E4AC232558190B0052877B290AA1D436A((String_t*)L_47, (String_t*)_stringLiteralBF540D6548854CC21630064FBA5390C9409C86F0, /*hidden argument*/NULL);
		if (L_48)
		{
			goto IL_0338;
		}
	}
	{
		goto IL_0388;
	}

IL_020a:
	{
		String_t* L_49 = V_1;
		bool L_50;
		L_50 = String_op_Equality_m50B3548E4AC232558190B0052877B290AA1D436A((String_t*)L_49, (String_t*)_stringLiteral1D87A56AE67B2CD49CAE6E942C2FB7AD98925C00, /*hidden argument*/NULL);
		if (L_50)
		{
			goto IL_034c;
		}
	}
	{
		goto IL_0388;
	}

IL_021f:
	{
		String_t* L_51 = V_1;
		bool L_52;
		L_52 = String_op_Equality_m50B3548E4AC232558190B0052877B290AA1D436A((String_t*)L_51, (String_t*)_stringLiteralA967787586EC9E5A17A9C55E2002AB73A5E21A0A, /*hidden argument*/NULL);
		if (L_52)
		{
			goto IL_0360;
		}
	}
	{
		goto IL_0388;
	}

IL_0234:
	{
		String_t* L_53 = V_1;
		bool L_54;
		L_54 = String_op_Equality_m50B3548E4AC232558190B0052877B290AA1D436A((String_t*)L_53, (String_t*)_stringLiteral47C47DD09640803AD8016748EAE1F04DD1D41119, /*hidden argument*/NULL);
		if (L_54)
		{
			goto IL_0374;
		}
	}
	{
		goto IL_0388;
	}

IL_0249:
	{
		// instance.enabled = reader.Read<System.Boolean>(ES3Type_bool.Instance);
		ES3Reader_t2780AF8AA61DA2A817115CEF8612AC0E494D03C9 * L_55 = ___reader0;
		IL2CPP_RUNTIME_CLASS_INIT(ES3Type_bool_t8F309F7B9CC735FF1DEE68081B6E3CAB367745F4_il2cpp_TypeInfo_var);
		ES3Type_t8FBECB7AE75168648B9524E0C2A38DAD4555421D * L_56 = ((ES3Type_bool_t8F309F7B9CC735FF1DEE68081B6E3CAB367745F4_StaticFields*)il2cpp_codegen_static_fields_for(ES3Type_bool_t8F309F7B9CC735FF1DEE68081B6E3CAB367745F4_il2cpp_TypeInfo_var))->get_Instance_12();
		NullCheck((ES3Reader_t2780AF8AA61DA2A817115CEF8612AC0E494D03C9 *)L_55);
		bool L_57;
		L_57 = GenericVirtFuncInvoker1< bool, ES3Type_t8FBECB7AE75168648B9524E0C2A38DAD4555421D * >::Invoke(ES3Reader_Read_TisBoolean_t07D1E3F34E4813023D64F584DFF7B34C9D922F37_mC6D1B158268FF9B97822FF9F5B37FB1723FEDA22_RuntimeMethod_var, (ES3Reader_t2780AF8AA61DA2A817115CEF8612AC0E494D03C9 *)L_55, (ES3Type_t8FBECB7AE75168648B9524E0C2A38DAD4555421D *)L_56);
		TrailModule_set_enabled_mFC8451DDDF40CCBB3E32A4B30A001115F6346894((TrailModule_t95D15372971E64A1977B7587ABAA87B1A31EF5C8 *)(TrailModule_t95D15372971E64A1977B7587ABAA87B1A31EF5C8 *)(&V_0), (bool)L_57, /*hidden argument*/NULL);
		// break;
		goto IL_038e;
	}

IL_0260:
	{
		// instance.ratio = reader.Read<System.Single>(ES3Type_float.Instance);
		ES3Reader_t2780AF8AA61DA2A817115CEF8612AC0E494D03C9 * L_58 = ___reader0;
		IL2CPP_RUNTIME_CLASS_INIT(ES3Type_float_tF86B773C86731BD9AD79448B860BBB178FE77644_il2cpp_TypeInfo_var);
		ES3Type_t8FBECB7AE75168648B9524E0C2A38DAD4555421D * L_59 = ((ES3Type_float_tF86B773C86731BD9AD79448B860BBB178FE77644_StaticFields*)il2cpp_codegen_static_fields_for(ES3Type_float_tF86B773C86731BD9AD79448B860BBB178FE77644_il2cpp_TypeInfo_var))->get_Instance_12();
		NullCheck((ES3Reader_t2780AF8AA61DA2A817115CEF8612AC0E494D03C9 *)L_58);
		float L_60;
		L_60 = GenericVirtFuncInvoker1< float, ES3Type_t8FBECB7AE75168648B9524E0C2A38DAD4555421D * >::Invoke(ES3Reader_Read_TisSingle_tE07797BA3C98D4CA9B5A19413C19A76688AB899E_m4A0416374498BDA042B8EB21E49B72326D6CE5F4_RuntimeMethod_var, (ES3Reader_t2780AF8AA61DA2A817115CEF8612AC0E494D03C9 *)L_58, (ES3Type_t8FBECB7AE75168648B9524E0C2A38DAD4555421D *)L_59);
		TrailModule_set_ratio_m34E63B34E7B0E8D037AD45532B2E2D5BD0750189((TrailModule_t95D15372971E64A1977B7587ABAA87B1A31EF5C8 *)(TrailModule_t95D15372971E64A1977B7587ABAA87B1A31EF5C8 *)(&V_0), (float)L_60, /*hidden argument*/NULL);
		// break;
		goto IL_038e;
	}

IL_0277:
	{
		// instance.lifetime = reader.Read<UnityEngine.ParticleSystem.MinMaxCurve>(ES3Type_MinMaxCurve.Instance);
		ES3Reader_t2780AF8AA61DA2A817115CEF8612AC0E494D03C9 * L_61 = ___reader0;
		IL2CPP_RUNTIME_CLASS_INIT(ES3Type_MinMaxCurve_tC5342BF0F8735B85CB5E16FDD4C6FACC8AFAD3B7_il2cpp_TypeInfo_var);
		ES3Type_t8FBECB7AE75168648B9524E0C2A38DAD4555421D * L_62 = ((ES3Type_MinMaxCurve_tC5342BF0F8735B85CB5E16FDD4C6FACC8AFAD3B7_StaticFields*)il2cpp_codegen_static_fields_for(ES3Type_MinMaxCurve_tC5342BF0F8735B85CB5E16FDD4C6FACC8AFAD3B7_il2cpp_TypeInfo_var))->get_Instance_12();
		NullCheck((ES3Reader_t2780AF8AA61DA2A817115CEF8612AC0E494D03C9 *)L_61);
		MinMaxCurve_tF036239442AB2D438B1EDABEBC785426871084CD  L_63;
		L_63 = GenericVirtFuncInvoker1< MinMaxCurve_tF036239442AB2D438B1EDABEBC785426871084CD , ES3Type_t8FBECB7AE75168648B9524E0C2A38DAD4555421D * >::Invoke(ES3Reader_Read_TisMinMaxCurve_tF036239442AB2D438B1EDABEBC785426871084CD_mD285150CBFB52440643BBECB5ADF4EE8DE940535_RuntimeMethod_var, (ES3Reader_t2780AF8AA61DA2A817115CEF8612AC0E494D03C9 *)L_61, (ES3Type_t8FBECB7AE75168648B9524E0C2A38DAD4555421D *)L_62);
		TrailModule_set_lifetime_m57C898C42B9F18F5A0E88AAA7B10276CC158C39D((TrailModule_t95D15372971E64A1977B7587ABAA87B1A31EF5C8 *)(TrailModule_t95D15372971E64A1977B7587ABAA87B1A31EF5C8 *)(&V_0), (MinMaxCurve_tF036239442AB2D438B1EDABEBC785426871084CD )L_63, /*hidden argument*/NULL);
		// break;
		goto IL_038e;
	}

IL_028e:
	{
		// instance.lifetimeMultiplier = reader.Read<System.Single>(ES3Type_float.Instance);
		ES3Reader_t2780AF8AA61DA2A817115CEF8612AC0E494D03C9 * L_64 = ___reader0;
		IL2CPP_RUNTIME_CLASS_INIT(ES3Type_float_tF86B773C86731BD9AD79448B860BBB178FE77644_il2cpp_TypeInfo_var);
		ES3Type_t8FBECB7AE75168648B9524E0C2A38DAD4555421D * L_65 = ((ES3Type_float_tF86B773C86731BD9AD79448B860BBB178FE77644_StaticFields*)il2cpp_codegen_static_fields_for(ES3Type_float_tF86B773C86731BD9AD79448B860BBB178FE77644_il2cpp_TypeInfo_var))->get_Instance_12();
		NullCheck((ES3Reader_t2780AF8AA61DA2A817115CEF8612AC0E494D03C9 *)L_64);
		float L_66;
		L_66 = GenericVirtFuncInvoker1< float, ES3Type_t8FBECB7AE75168648B9524E0C2A38DAD4555421D * >::Invoke(ES3Reader_Read_TisSingle_tE07797BA3C98D4CA9B5A19413C19A76688AB899E_m4A0416374498BDA042B8EB21E49B72326D6CE5F4_RuntimeMethod_var, (ES3Reader_t2780AF8AA61DA2A817115CEF8612AC0E494D03C9 *)L_64, (ES3Type_t8FBECB7AE75168648B9524E0C2A38DAD4555421D *)L_65);
		TrailModule_set_lifetimeMultiplier_m23F95D65EE8C82152AE1CF2E41531EC2789A866B((TrailModule_t95D15372971E64A1977B7587ABAA87B1A31EF5C8 *)(TrailModule_t95D15372971E64A1977B7587ABAA87B1A31EF5C8 *)(&V_0), (float)L_66, /*hidden argument*/NULL);
		// break;
		goto IL_038e;
	}

IL_02a5:
	{
		// instance.minVertexDistance = reader.Read<System.Single>(ES3Type_float.Instance);
		ES3Reader_t2780AF8AA61DA2A817115CEF8612AC0E494D03C9 * L_67 = ___reader0;
		IL2CPP_RUNTIME_CLASS_INIT(ES3Type_float_tF86B773C86731BD9AD79448B860BBB178FE77644_il2cpp_TypeInfo_var);
		ES3Type_t8FBECB7AE75168648B9524E0C2A38DAD4555421D * L_68 = ((ES3Type_float_tF86B773C86731BD9AD79448B860BBB178FE77644_StaticFields*)il2cpp_codegen_static_fields_for(ES3Type_float_tF86B773C86731BD9AD79448B860BBB178FE77644_il2cpp_TypeInfo_var))->get_Instance_12();
		NullCheck((ES3Reader_t2780AF8AA61DA2A817115CEF8612AC0E494D03C9 *)L_67);
		float L_69;
		L_69 = GenericVirtFuncInvoker1< float, ES3Type_t8FBECB7AE75168648B9524E0C2A38DAD4555421D * >::Invoke(ES3Reader_Read_TisSingle_tE07797BA3C98D4CA9B5A19413C19A76688AB899E_m4A0416374498BDA042B8EB21E49B72326D6CE5F4_RuntimeMethod_var, (ES3Reader_t2780AF8AA61DA2A817115CEF8612AC0E494D03C9 *)L_67, (ES3Type_t8FBECB7AE75168648B9524E0C2A38DAD4555421D *)L_68);
		TrailModule_set_minVertexDistance_mF7C29F88FBF540CE4987F4CF9B141C624808FBC5((TrailModule_t95D15372971E64A1977B7587ABAA87B1A31EF5C8 *)(TrailModule_t95D15372971E64A1977B7587ABAA87B1A31EF5C8 *)(&V_0), (float)L_69, /*hidden argument*/NULL);
		// break;
		goto IL_038e;
	}

IL_02bc:
	{
		// instance.textureMode = reader.Read<UnityEngine.ParticleSystemTrailTextureMode>();
		ES3Reader_t2780AF8AA61DA2A817115CEF8612AC0E494D03C9 * L_70 = ___reader0;
		NullCheck((ES3Reader_t2780AF8AA61DA2A817115CEF8612AC0E494D03C9 *)L_70);
		int32_t L_71;
		L_71 = GenericVirtFuncInvoker0< int32_t >::Invoke(ES3Reader_Read_TisParticleSystemTrailTextureMode_tF3259187CA4D0A61EDB3A40E63CBF6C42641CE9F_m055DB1212E8BC34F385DF7D302F16241554E9730_RuntimeMethod_var, (ES3Reader_t2780AF8AA61DA2A817115CEF8612AC0E494D03C9 *)L_70);
		TrailModule_set_textureMode_mC1F8AE0D2965FC47BDBFF4F53E0673D5FB58CF28((TrailModule_t95D15372971E64A1977B7587ABAA87B1A31EF5C8 *)(TrailModule_t95D15372971E64A1977B7587ABAA87B1A31EF5C8 *)(&V_0), (int32_t)L_71, /*hidden argument*/NULL);
		// break;
		goto IL_038e;
	}

IL_02ce:
	{
		// instance.worldSpace = reader.Read<System.Boolean>(ES3Type_bool.Instance);
		ES3Reader_t2780AF8AA61DA2A817115CEF8612AC0E494D03C9 * L_72 = ___reader0;
		IL2CPP_RUNTIME_CLASS_INIT(ES3Type_bool_t8F309F7B9CC735FF1DEE68081B6E3CAB367745F4_il2cpp_TypeInfo_var);
		ES3Type_t8FBECB7AE75168648B9524E0C2A38DAD4555421D * L_73 = ((ES3Type_bool_t8F309F7B9CC735FF1DEE68081B6E3CAB367745F4_StaticFields*)il2cpp_codegen_static_fields_for(ES3Type_bool_t8F309F7B9CC735FF1DEE68081B6E3CAB367745F4_il2cpp_TypeInfo_var))->get_Instance_12();
		NullCheck((ES3Reader_t2780AF8AA61DA2A817115CEF8612AC0E494D03C9 *)L_72);
		bool L_74;
		L_74 = GenericVirtFuncInvoker1< bool, ES3Type_t8FBECB7AE75168648B9524E0C2A38DAD4555421D * >::Invoke(ES3Reader_Read_TisBoolean_t07D1E3F34E4813023D64F584DFF7B34C9D922F37_mC6D1B158268FF9B97822FF9F5B37FB1723FEDA22_RuntimeMethod_var, (ES3Reader_t2780AF8AA61DA2A817115CEF8612AC0E494D03C9 *)L_72, (ES3Type_t8FBECB7AE75168648B9524E0C2A38DAD4555421D *)L_73);
		TrailModule_set_worldSpace_m42A63AF4A96F24A621A29A0F35240195F0E56B1A((TrailModule_t95D15372971E64A1977B7587ABAA87B1A31EF5C8 *)(TrailModule_t95D15372971E64A1977B7587ABAA87B1A31EF5C8 *)(&V_0), (bool)L_74, /*hidden argument*/NULL);
		// break;
		goto IL_038e;
	}

IL_02e5:
	{
		// instance.dieWithParticles = reader.Read<System.Boolean>(ES3Type_bool.Instance);
		ES3Reader_t2780AF8AA61DA2A817115CEF8612AC0E494D03C9 * L_75 = ___reader0;
		IL2CPP_RUNTIME_CLASS_INIT(ES3Type_bool_t8F309F7B9CC735FF1DEE68081B6E3CAB367745F4_il2cpp_TypeInfo_var);
		ES3Type_t8FBECB7AE75168648B9524E0C2A38DAD4555421D * L_76 = ((ES3Type_bool_t8F309F7B9CC735FF1DEE68081B6E3CAB367745F4_StaticFields*)il2cpp_codegen_static_fields_for(ES3Type_bool_t8F309F7B9CC735FF1DEE68081B6E3CAB367745F4_il2cpp_TypeInfo_var))->get_Instance_12();
		NullCheck((ES3Reader_t2780AF8AA61DA2A817115CEF8612AC0E494D03C9 *)L_75);
		bool L_77;
		L_77 = GenericVirtFuncInvoker1< bool, ES3Type_t8FBECB7AE75168648B9524E0C2A38DAD4555421D * >::Invoke(ES3Reader_Read_TisBoolean_t07D1E3F34E4813023D64F584DFF7B34C9D922F37_mC6D1B158268FF9B97822FF9F5B37FB1723FEDA22_RuntimeMethod_var, (ES3Reader_t2780AF8AA61DA2A817115CEF8612AC0E494D03C9 *)L_75, (ES3Type_t8FBECB7AE75168648B9524E0C2A38DAD4555421D *)L_76);
		TrailModule_set_dieWithParticles_mB7C4E8DC2F908FDF6D57A77B54B821E360D8DA99((TrailModule_t95D15372971E64A1977B7587ABAA87B1A31EF5C8 *)(TrailModule_t95D15372971E64A1977B7587ABAA87B1A31EF5C8 *)(&V_0), (bool)L_77, /*hidden argument*/NULL);
		// break;
		goto IL_038e;
	}

IL_02fc:
	{
		// instance.sizeAffectsWidth = reader.Read<System.Boolean>(ES3Type_bool.Instance);
		ES3Reader_t2780AF8AA61DA2A817115CEF8612AC0E494D03C9 * L_78 = ___reader0;
		IL2CPP_RUNTIME_CLASS_INIT(ES3Type_bool_t8F309F7B9CC735FF1DEE68081B6E3CAB367745F4_il2cpp_TypeInfo_var);
		ES3Type_t8FBECB7AE75168648B9524E0C2A38DAD4555421D * L_79 = ((ES3Type_bool_t8F309F7B9CC735FF1DEE68081B6E3CAB367745F4_StaticFields*)il2cpp_codegen_static_fields_for(ES3Type_bool_t8F309F7B9CC735FF1DEE68081B6E3CAB367745F4_il2cpp_TypeInfo_var))->get_Instance_12();
		NullCheck((ES3Reader_t2780AF8AA61DA2A817115CEF8612AC0E494D03C9 *)L_78);
		bool L_80;
		L_80 = GenericVirtFuncInvoker1< bool, ES3Type_t8FBECB7AE75168648B9524E0C2A38DAD4555421D * >::Invoke(ES3Reader_Read_TisBoolean_t07D1E3F34E4813023D64F584DFF7B34C9D922F37_mC6D1B158268FF9B97822FF9F5B37FB1723FEDA22_RuntimeMethod_var, (ES3Reader_t2780AF8AA61DA2A817115CEF8612AC0E494D03C9 *)L_78, (ES3Type_t8FBECB7AE75168648B9524E0C2A38DAD4555421D *)L_79);
		TrailModule_set_sizeAffectsWidth_m3517856E39080DA69B447499C8846D2491B0ABF0((TrailModule_t95D15372971E64A1977B7587ABAA87B1A31EF5C8 *)(TrailModule_t95D15372971E64A1977B7587ABAA87B1A31EF5C8 *)(&V_0), (bool)L_80, /*hidden argument*/NULL);
		// break;
		goto IL_038e;
	}

IL_0310:
	{
		// instance.sizeAffectsLifetime = reader.Read<System.Boolean>(ES3Type_bool.Instance);
		ES3Reader_t2780AF8AA61DA2A817115CEF8612AC0E494D03C9 * L_81 = ___reader0;
		IL2CPP_RUNTIME_CLASS_INIT(ES3Type_bool_t8F309F7B9CC735FF1DEE68081B6E3CAB367745F4_il2cpp_TypeInfo_var);
		ES3Type_t8FBECB7AE75168648B9524E0C2A38DAD4555421D * L_82 = ((ES3Type_bool_t8F309F7B9CC735FF1DEE68081B6E3CAB367745F4_StaticFields*)il2cpp_codegen_static_fields_for(ES3Type_bool_t8F309F7B9CC735FF1DEE68081B6E3CAB367745F4_il2cpp_TypeInfo_var))->get_Instance_12();
		NullCheck((ES3Reader_t2780AF8AA61DA2A817115CEF8612AC0E494D03C9 *)L_81);
		bool L_83;
		L_83 = GenericVirtFuncInvoker1< bool, ES3Type_t8FBECB7AE75168648B9524E0C2A38DAD4555421D * >::Invoke(ES3Reader_Read_TisBoolean_t07D1E3F34E4813023D64F584DFF7B34C9D922F37_mC6D1B158268FF9B97822FF9F5B37FB1723FEDA22_RuntimeMethod_var, (ES3Reader_t2780AF8AA61DA2A817115CEF8612AC0E494D03C9 *)L_81, (ES3Type_t8FBECB7AE75168648B9524E0C2A38DAD4555421D *)L_82);
		TrailModule_set_sizeAffectsLifetime_m98BF4A6594193D824B52D88371CF963ACBA388FD((TrailModule_t95D15372971E64A1977B7587ABAA87B1A31EF5C8 *)(TrailModule_t95D15372971E64A1977B7587ABAA87B1A31EF5C8 *)(&V_0), (bool)L_83, /*hidden argument*/NULL);
		// break;
		goto IL_038e;
	}

IL_0324:
	{
		// instance.inheritParticleColor = reader.Read<System.Boolean>(ES3Type_bool.Instance);
		ES3Reader_t2780AF8AA61DA2A817115CEF8612AC0E494D03C9 * L_84 = ___reader0;
		IL2CPP_RUNTIME_CLASS_INIT(ES3Type_bool_t8F309F7B9CC735FF1DEE68081B6E3CAB367745F4_il2cpp_TypeInfo_var);
		ES3Type_t8FBECB7AE75168648B9524E0C2A38DAD4555421D * L_85 = ((ES3Type_bool_t8F309F7B9CC735FF1DEE68081B6E3CAB367745F4_StaticFields*)il2cpp_codegen_static_fields_for(ES3Type_bool_t8F309F7B9CC735FF1DEE68081B6E3CAB367745F4_il2cpp_TypeInfo_var))->get_Instance_12();
		NullCheck((ES3Reader_t2780AF8AA61DA2A817115CEF8612AC0E494D03C9 *)L_84);
		bool L_86;
		L_86 = GenericVirtFuncInvoker1< bool, ES3Type_t8FBECB7AE75168648B9524E0C2A38DAD4555421D * >::Invoke(ES3Reader_Read_TisBoolean_t07D1E3F34E4813023D64F584DFF7B34C9D922F37_mC6D1B158268FF9B97822FF9F5B37FB1723FEDA22_RuntimeMethod_var, (ES3Reader_t2780AF8AA61DA2A817115CEF8612AC0E494D03C9 *)L_84, (ES3Type_t8FBECB7AE75168648B9524E0C2A38DAD4555421D *)L_85);
		TrailModule_set_inheritParticleColor_mCD83E87B5E00F2BFFBE08AD2D1D68606283A4FEE((TrailModule_t95D15372971E64A1977B7587ABAA87B1A31EF5C8 *)(TrailModule_t95D15372971E64A1977B7587ABAA87B1A31EF5C8 *)(&V_0), (bool)L_86, /*hidden argument*/NULL);
		// break;
		goto IL_038e;
	}

IL_0338:
	{
		// instance.colorOverLifetime = reader.Read<UnityEngine.ParticleSystem.MinMaxGradient>(ES3Type_MinMaxGradient.Instance);
		ES3Reader_t2780AF8AA61DA2A817115CEF8612AC0E494D03C9 * L_87 = ___reader0;
		IL2CPP_RUNTIME_CLASS_INIT(ES3Type_MinMaxGradient_t5DD353D60E95642AB39D1C97C6FD6DD1B067D3CF_il2cpp_TypeInfo_var);
		ES3Type_t8FBECB7AE75168648B9524E0C2A38DAD4555421D * L_88 = ((ES3Type_MinMaxGradient_t5DD353D60E95642AB39D1C97C6FD6DD1B067D3CF_StaticFields*)il2cpp_codegen_static_fields_for(ES3Type_MinMaxGradient_t5DD353D60E95642AB39D1C97C6FD6DD1B067D3CF_il2cpp_TypeInfo_var))->get_Instance_12();
		NullCheck((ES3Reader_t2780AF8AA61DA2A817115CEF8612AC0E494D03C9 *)L_87);
		MinMaxGradient_tF4530B26F29D9635D670A33B9EE581EAC48C12B7  L_89;
		L_89 = GenericVirtFuncInvoker1< MinMaxGradient_tF4530B26F29D9635D670A33B9EE581EAC48C12B7 , ES3Type_t8FBECB7AE75168648B9524E0C2A38DAD4555421D * >::Invoke(ES3Reader_Read_TisMinMaxGradient_tF4530B26F29D9635D670A33B9EE581EAC48C12B7_m6A3DD8CBBAC5D32B838B6C4399009AB8AA512ACC_RuntimeMethod_var, (ES3Reader_t2780AF8AA61DA2A817115CEF8612AC0E494D03C9 *)L_87, (ES3Type_t8FBECB7AE75168648B9524E0C2A38DAD4555421D *)L_88);
		TrailModule_set_colorOverLifetime_mCD56BD4B75D3A3947069BA1B93FEC78AAE08DF27((TrailModule_t95D15372971E64A1977B7587ABAA87B1A31EF5C8 *)(TrailModule_t95D15372971E64A1977B7587ABAA87B1A31EF5C8 *)(&V_0), (MinMaxGradient_tF4530B26F29D9635D670A33B9EE581EAC48C12B7 )L_89, /*hidden argument*/NULL);
		// break;
		goto IL_038e;
	}

IL_034c:
	{
		// instance.widthOverTrail = reader.Read<UnityEngine.ParticleSystem.MinMaxCurve>(ES3Type_MinMaxCurve.Instance);
		ES3Reader_t2780AF8AA61DA2A817115CEF8612AC0E494D03C9 * L_90 = ___reader0;
		IL2CPP_RUNTIME_CLASS_INIT(ES3Type_MinMaxCurve_tC5342BF0F8735B85CB5E16FDD4C6FACC8AFAD3B7_il2cpp_TypeInfo_var);
		ES3Type_t8FBECB7AE75168648B9524E0C2A38DAD4555421D * L_91 = ((ES3Type_MinMaxCurve_tC5342BF0F8735B85CB5E16FDD4C6FACC8AFAD3B7_StaticFields*)il2cpp_codegen_static_fields_for(ES3Type_MinMaxCurve_tC5342BF0F8735B85CB5E16FDD4C6FACC8AFAD3B7_il2cpp_TypeInfo_var))->get_Instance_12();
		NullCheck((ES3Reader_t2780AF8AA61DA2A817115CEF8612AC0E494D03C9 *)L_90);
		MinMaxCurve_tF036239442AB2D438B1EDABEBC785426871084CD  L_92;
		L_92 = GenericVirtFuncInvoker1< MinMaxCurve_tF036239442AB2D438B1EDABEBC785426871084CD , ES3Type_t8FBECB7AE75168648B9524E0C2A38DAD4555421D * >::Invoke(ES3Reader_Read_TisMinMaxCurve_tF036239442AB2D438B1EDABEBC785426871084CD_mD285150CBFB52440643BBECB5ADF4EE8DE940535_RuntimeMethod_var, (ES3Reader_t2780AF8AA61DA2A817115CEF8612AC0E494D03C9 *)L_90, (ES3Type_t8FBECB7AE75168648B9524E0C2A38DAD4555421D *)L_91);
		TrailModule_set_widthOverTrail_m6C0A896EBFDED7CE46344B3A0B04212934F30DE1((TrailModule_t95D15372971E64A1977B7587ABAA87B1A31EF5C8 *)(TrailModule_t95D15372971E64A1977B7587ABAA87B1A31EF5C8 *)(&V_0), (MinMaxCurve_tF036239442AB2D438B1EDABEBC785426871084CD )L_92, /*hidden argument*/NULL);
		// break;
		goto IL_038e;
	}

IL_0360:
	{
		// instance.widthOverTrailMultiplier = reader.Read<System.Single>(ES3Type_float.Instance);
		ES3Reader_t2780AF8AA61DA2A817115CEF8612AC0E494D03C9 * L_93 = ___reader0;
		IL2CPP_RUNTIME_CLASS_INIT(ES3Type_float_tF86B773C86731BD9AD79448B860BBB178FE77644_il2cpp_TypeInfo_var);
		ES3Type_t8FBECB7AE75168648B9524E0C2A38DAD4555421D * L_94 = ((ES3Type_float_tF86B773C86731BD9AD79448B860BBB178FE77644_StaticFields*)il2cpp_codegen_static_fields_for(ES3Type_float_tF86B773C86731BD9AD79448B860BBB178FE77644_il2cpp_TypeInfo_var))->get_Instance_12();
		NullCheck((ES3Reader_t2780AF8AA61DA2A817115CEF8612AC0E494D03C9 *)L_93);
		float L_95;
		L_95 = GenericVirtFuncInvoker1< float, ES3Type_t8FBECB7AE75168648B9524E0C2A38DAD4555421D * >::Invoke(ES3Reader_Read_TisSingle_tE07797BA3C98D4CA9B5A19413C19A76688AB899E_m4A0416374498BDA042B8EB21E49B72326D6CE5F4_RuntimeMethod_var, (ES3Reader_t2780AF8AA61DA2A817115CEF8612AC0E494D03C9 *)L_93, (ES3Type_t8FBECB7AE75168648B9524E0C2A38DAD4555421D *)L_94);
		TrailModule_set_widthOverTrailMultiplier_m6A7EA2856CF30B710CCB528EA3EBFD1799C19BD4((TrailModule_t95D15372971E64A1977B7587ABAA87B1A31EF5C8 *)(TrailModule_t95D15372971E64A1977B7587ABAA87B1A31EF5C8 *)(&V_0), (float)L_95, /*hidden argument*/NULL);
		// break;
		goto IL_038e;
	}

IL_0374:
	{
		// instance.colorOverTrail = reader.Read<UnityEngine.ParticleSystem.MinMaxGradient>(ES3Type_MinMaxGradient.Instance);
		ES3Reader_t2780AF8AA61DA2A817115CEF8612AC0E494D03C9 * L_96 = ___reader0;
		IL2CPP_RUNTIME_CLASS_INIT(ES3Type_MinMaxGradient_t5DD353D60E95642AB39D1C97C6FD6DD1B067D3CF_il2cpp_TypeInfo_var);
		ES3Type_t8FBECB7AE75168648B9524E0C2A38DAD4555421D * L_97 = ((ES3Type_MinMaxGradient_t5DD353D60E95642AB39D1C97C6FD6DD1B067D3CF_StaticFields*)il2cpp_codegen_static_fields_for(ES3Type_MinMaxGradient_t5DD353D60E95642AB39D1C97C6FD6DD1B067D3CF_il2cpp_TypeInfo_var))->get_Instance_12();
		NullCheck((ES3Reader_t2780AF8AA61DA2A817115CEF8612AC0E494D03C9 *)L_96);
		MinMaxGradient_tF4530B26F29D9635D670A33B9EE581EAC48C12B7  L_98;
		L_98 = GenericVirtFuncInvoker1< MinMaxGradient_tF4530B26F29D9635D670A33B9EE581EAC48C12B7 , ES3Type_t8FBECB7AE75168648B9524E0C2A38DAD4555421D * >::Invoke(ES3Reader_Read_TisMinMaxGradient_tF4530B26F29D9635D670A33B9EE581EAC48C12B7_m6A3DD8CBBAC5D32B838B6C4399009AB8AA512ACC_RuntimeMethod_var, (ES3Reader_t2780AF8AA61DA2A817115CEF8612AC0E494D03C9 *)L_96, (ES3Type_t8FBECB7AE75168648B9524E0C2A38DAD4555421D *)L_97);
		TrailModule_set_colorOverTrail_m8440C6574C8310292B93D70EA4FE3EE8C40DF8DB((TrailModule_t95D15372971E64A1977B7587ABAA87B1A31EF5C8 *)(TrailModule_t95D15372971E64A1977B7587ABAA87B1A31EF5C8 *)(&V_0), (MinMaxGradient_tF4530B26F29D9635D670A33B9EE581EAC48C12B7 )L_98, /*hidden argument*/NULL);
		// break;
		goto IL_038e;
	}

IL_0388:
	{
		// reader.Skip();
		ES3Reader_t2780AF8AA61DA2A817115CEF8612AC0E494D03C9 * L_99 = ___reader0;
		NullCheck((ES3Reader_t2780AF8AA61DA2A817115CEF8612AC0E494D03C9 *)L_99);
		VirtActionInvoker0::Invoke(41 /* System.Void ES3Reader::Skip() */, (ES3Reader_t2780AF8AA61DA2A817115CEF8612AC0E494D03C9 *)L_99);
	}

IL_038e:
	{
		// while((propertyName = reader.ReadPropertyName()) != null)
		ES3Reader_t2780AF8AA61DA2A817115CEF8612AC0E494D03C9 * L_100 = ___reader0;
		NullCheck((ES3Reader_t2780AF8AA61DA2A817115CEF8612AC0E494D03C9 *)L_100);
		String_t* L_101;
		L_101 = VirtFuncInvoker0< String_t* >::Invoke(21 /* System.String ES3Reader::ReadPropertyName() */, (ES3Reader_t2780AF8AA61DA2A817115CEF8612AC0E494D03C9 *)L_100);
		String_t* L_102 = (String_t*)L_101;
		V_1 = (String_t*)L_102;
		if (L_102)
		{
			goto IL_000c;
		}
	}
	{
		// }
		return;
	}
}
// System.Void ES3Types.ES3Type_TrailModule::ReadInto<UnityEngine.Vector3>(ES3Reader,System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ES3Type_TrailModule_ReadInto_TisVector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E_mAB75E9D544D8BD94366C6914EE5C5667F8285DB8_gshared (ES3Type_TrailModule_tC773F73EC0443516DD128FF2B5AE010809742462 * __this, ES3Reader_t2780AF8AA61DA2A817115CEF8612AC0E494D03C9 * ___reader0, RuntimeObject * ___obj1, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ES3Reader_Read_TisBoolean_t07D1E3F34E4813023D64F584DFF7B34C9D922F37_mC6D1B158268FF9B97822FF9F5B37FB1723FEDA22_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ES3Reader_Read_TisMinMaxCurve_tF036239442AB2D438B1EDABEBC785426871084CD_mD285150CBFB52440643BBECB5ADF4EE8DE940535_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ES3Reader_Read_TisMinMaxGradient_tF4530B26F29D9635D670A33B9EE581EAC48C12B7_m6A3DD8CBBAC5D32B838B6C4399009AB8AA512ACC_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ES3Reader_Read_TisParticleSystemTrailTextureMode_tF3259187CA4D0A61EDB3A40E63CBF6C42641CE9F_m055DB1212E8BC34F385DF7D302F16241554E9730_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ES3Reader_Read_TisSingle_tE07797BA3C98D4CA9B5A19413C19A76688AB899E_m4A0416374498BDA042B8EB21E49B72326D6CE5F4_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ES3Type_MinMaxCurve_tC5342BF0F8735B85CB5E16FDD4C6FACC8AFAD3B7_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ES3Type_MinMaxGradient_t5DD353D60E95642AB39D1C97C6FD6DD1B067D3CF_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ES3Type_bool_t8F309F7B9CC735FF1DEE68081B6E3CAB367745F4_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ES3Type_float_tF86B773C86731BD9AD79448B860BBB178FE77644_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&TrailModule_t95D15372971E64A1977B7587ABAA87B1A31EF5C8_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral1D87A56AE67B2CD49CAE6E942C2FB7AD98925C00);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral354281948B6269615E32D856CF85B6F456724DAA);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral4221314F268D184F46688D45C85446821F1F1BC3);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral47C47DD09640803AD8016748EAE1F04DD1D41119);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral5C86338F177203D001C41D9C348A83D1338CC7D0);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral60126327537B7B8E6EE33C43FE0C5CA8BCC3A06A);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral87F70660D62DE5FC257FBADE9DA4EC9188597DE5);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralA967787586EC9E5A17A9C55E2002AB73A5E21A0A);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralADAEB0839588196B349BDB6CF33AFA3E0736360B);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralBE2893848F9FC647C2288DA6581A1522E9695182);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralBF540D6548854CC21630064FBA5390C9409C86F0);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralC580B374AA991574F91DFC86C068E7FAD661A3A4);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralE049DB547285CFCE1CB9A95934B6B6DCE2D219EC);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralF9D225733E1D10F9344C755C4A9C0870CD1DE97B);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralFE5F89F63E2381500F62A7CBD6954563BE44562F);
		s_Il2CppMethodInitialized = true;
	}
	TrailModule_t95D15372971E64A1977B7587ABAA87B1A31EF5C8  V_0;
	memset((&V_0), 0, sizeof(V_0));
	String_t* V_1 = NULL;
	uint32_t V_2 = 0;
	{
		// var instance = (UnityEngine.ParticleSystem.TrailModule)obj;
		RuntimeObject * L_0 = ___obj1;
		V_0 = (TrailModule_t95D15372971E64A1977B7587ABAA87B1A31EF5C8 )((*(TrailModule_t95D15372971E64A1977B7587ABAA87B1A31EF5C8 *)((TrailModule_t95D15372971E64A1977B7587ABAA87B1A31EF5C8 *)UnBox(L_0, TrailModule_t95D15372971E64A1977B7587ABAA87B1A31EF5C8_il2cpp_TypeInfo_var))));
		goto IL_038e;
	}

IL_000c:
	{
		String_t* L_1 = V_1;
		if (!L_1)
		{
			goto IL_0388;
		}
	}
	{
		String_t* L_2 = V_1;
		uint32_t L_3;
		L_3 = U3CPrivateImplementationDetailsU3E_ComputeStringHash_m3ADC1F612F9EE3DD518E6F0023A0DE0EE2B120A7((String_t*)L_2, /*hidden argument*/NULL);
		V_2 = (uint32_t)L_3;
		uint32_t L_4 = V_2;
		if ((!(((uint32_t)L_4) <= ((uint32_t)((int32_t)1376955374)))))
		{
			goto IL_008d;
		}
	}
	{
		uint32_t L_5 = V_2;
		if ((!(((uint32_t)L_5) <= ((uint32_t)((int32_t)494095910)))))
		{
			goto IL_004f;
		}
	}
	{
		uint32_t L_6 = V_2;
		if ((((int32_t)L_6) == ((int32_t)((int32_t)49525662))))
		{
			goto IL_010e;
		}
	}
	{
		uint32_t L_7 = V_2;
		if ((((int32_t)L_7) == ((int32_t)((int32_t)341298456))))
		{
			goto IL_021f;
		}
	}
	{
		uint32_t L_8 = V_2;
		if ((((int32_t)L_8) == ((int32_t)((int32_t)494095910))))
		{
			goto IL_0234;
		}
	}
	{
		goto IL_0388;
	}

IL_004f:
	{
		uint32_t L_9 = V_2;
		if ((!(((uint32_t)L_9) <= ((uint32_t)((int32_t)973733911)))))
		{
			goto IL_0072;
		}
	}
	{
		uint32_t L_10 = V_2;
		if ((((int32_t)L_10) == ((int32_t)((int32_t)559929418))))
		{
			goto IL_01b6;
		}
	}
	{
		uint32_t L_11 = V_2;
		if ((((int32_t)L_11) == ((int32_t)((int32_t)973733911))))
		{
			goto IL_0177;
		}
	}
	{
		goto IL_0388;
	}

IL_0072:
	{
		uint32_t L_12 = V_2;
		if ((((int32_t)L_12) == ((int32_t)((int32_t)1024708593))))
		{
			goto IL_014d;
		}
	}
	{
		uint32_t L_13 = V_2;
		if ((((int32_t)L_13) == ((int32_t)((int32_t)1376955374))))
		{
			goto IL_0138;
		}
	}
	{
		goto IL_0388;
	}

IL_008d:
	{
		uint32_t L_14 = V_2;
		if ((!(((uint32_t)L_14) <= ((uint32_t)((int32_t)-2100707162)))))
		{
			goto IL_00d3;
		}
	}
	{
		uint32_t L_15 = V_2;
		if ((!(((uint32_t)L_15) <= ((uint32_t)((int32_t)1975189197)))))
		{
			goto IL_00b8;
		}
	}
	{
		uint32_t L_16 = V_2;
		if ((((int32_t)L_16) == ((int32_t)((int32_t)1546474083))))
		{
			goto IL_020a;
		}
	}
	{
		uint32_t L_17 = V_2;
		if ((((int32_t)L_17) == ((int32_t)((int32_t)1975189197))))
		{
			goto IL_01cb;
		}
	}
	{
		goto IL_0388;
	}

IL_00b8:
	{
		uint32_t L_18 = V_2;
		if ((((int32_t)L_18) == ((int32_t)((int32_t)2053023684))))
		{
			goto IL_01a1;
		}
	}
	{
		uint32_t L_19 = V_2;
		if ((((int32_t)L_19) == ((int32_t)((int32_t)-2100707162))))
		{
			goto IL_0162;
		}
	}
	{
		goto IL_0388;
	}

IL_00d3:
	{
		uint32_t L_20 = V_2;
		if ((!(((uint32_t)L_20) <= ((uint32_t)((int32_t)-1319579393)))))
		{
			goto IL_00f6;
		}
	}
	{
		uint32_t L_21 = V_2;
		if ((((int32_t)L_21) == ((int32_t)((int32_t)-1562862963))))
		{
			goto IL_01e0;
		}
	}
	{
		uint32_t L_22 = V_2;
		if ((((int32_t)L_22) == ((int32_t)((int32_t)-1319579393))))
		{
			goto IL_018c;
		}
	}
	{
		goto IL_0388;
	}

IL_00f6:
	{
		uint32_t L_23 = V_2;
		if ((((int32_t)L_23) == ((int32_t)((int32_t)-1055777148))))
		{
			goto IL_0123;
		}
	}
	{
		uint32_t L_24 = V_2;
		if ((((int32_t)L_24) == ((int32_t)((int32_t)-413379935))))
		{
			goto IL_01f5;
		}
	}
	{
		goto IL_0388;
	}

IL_010e:
	{
		String_t* L_25 = V_1;
		bool L_26;
		L_26 = String_op_Equality_m50B3548E4AC232558190B0052877B290AA1D436A((String_t*)L_25, (String_t*)_stringLiteralF9D225733E1D10F9344C755C4A9C0870CD1DE97B, /*hidden argument*/NULL);
		if (L_26)
		{
			goto IL_0249;
		}
	}
	{
		goto IL_0388;
	}

IL_0123:
	{
		String_t* L_27 = V_1;
		bool L_28;
		L_28 = String_op_Equality_m50B3548E4AC232558190B0052877B290AA1D436A((String_t*)L_27, (String_t*)_stringLiteral60126327537B7B8E6EE33C43FE0C5CA8BCC3A06A, /*hidden argument*/NULL);
		if (L_28)
		{
			goto IL_0260;
		}
	}
	{
		goto IL_0388;
	}

IL_0138:
	{
		String_t* L_29 = V_1;
		bool L_30;
		L_30 = String_op_Equality_m50B3548E4AC232558190B0052877B290AA1D436A((String_t*)L_29, (String_t*)_stringLiteralBE2893848F9FC647C2288DA6581A1522E9695182, /*hidden argument*/NULL);
		if (L_30)
		{
			goto IL_0277;
		}
	}
	{
		goto IL_0388;
	}

IL_014d:
	{
		String_t* L_31 = V_1;
		bool L_32;
		L_32 = String_op_Equality_m50B3548E4AC232558190B0052877B290AA1D436A((String_t*)L_31, (String_t*)_stringLiteral4221314F268D184F46688D45C85446821F1F1BC3, /*hidden argument*/NULL);
		if (L_32)
		{
			goto IL_028e;
		}
	}
	{
		goto IL_0388;
	}

IL_0162:
	{
		String_t* L_33 = V_1;
		bool L_34;
		L_34 = String_op_Equality_m50B3548E4AC232558190B0052877B290AA1D436A((String_t*)L_33, (String_t*)_stringLiteral5C86338F177203D001C41D9C348A83D1338CC7D0, /*hidden argument*/NULL);
		if (L_34)
		{
			goto IL_02a5;
		}
	}
	{
		goto IL_0388;
	}

IL_0177:
	{
		String_t* L_35 = V_1;
		bool L_36;
		L_36 = String_op_Equality_m50B3548E4AC232558190B0052877B290AA1D436A((String_t*)L_35, (String_t*)_stringLiteralFE5F89F63E2381500F62A7CBD6954563BE44562F, /*hidden argument*/NULL);
		if (L_36)
		{
			goto IL_02bc;
		}
	}
	{
		goto IL_0388;
	}

IL_018c:
	{
		String_t* L_37 = V_1;
		bool L_38;
		L_38 = String_op_Equality_m50B3548E4AC232558190B0052877B290AA1D436A((String_t*)L_37, (String_t*)_stringLiteral87F70660D62DE5FC257FBADE9DA4EC9188597DE5, /*hidden argument*/NULL);
		if (L_38)
		{
			goto IL_02ce;
		}
	}
	{
		goto IL_0388;
	}

IL_01a1:
	{
		String_t* L_39 = V_1;
		bool L_40;
		L_40 = String_op_Equality_m50B3548E4AC232558190B0052877B290AA1D436A((String_t*)L_39, (String_t*)_stringLiteral354281948B6269615E32D856CF85B6F456724DAA, /*hidden argument*/NULL);
		if (L_40)
		{
			goto IL_02e5;
		}
	}
	{
		goto IL_0388;
	}

IL_01b6:
	{
		String_t* L_41 = V_1;
		bool L_42;
		L_42 = String_op_Equality_m50B3548E4AC232558190B0052877B290AA1D436A((String_t*)L_41, (String_t*)_stringLiteralADAEB0839588196B349BDB6CF33AFA3E0736360B, /*hidden argument*/NULL);
		if (L_42)
		{
			goto IL_02fc;
		}
	}
	{
		goto IL_0388;
	}

IL_01cb:
	{
		String_t* L_43 = V_1;
		bool L_44;
		L_44 = String_op_Equality_m50B3548E4AC232558190B0052877B290AA1D436A((String_t*)L_43, (String_t*)_stringLiteralC580B374AA991574F91DFC86C068E7FAD661A3A4, /*hidden argument*/NULL);
		if (L_44)
		{
			goto IL_0310;
		}
	}
	{
		goto IL_0388;
	}

IL_01e0:
	{
		String_t* L_45 = V_1;
		bool L_46;
		L_46 = String_op_Equality_m50B3548E4AC232558190B0052877B290AA1D436A((String_t*)L_45, (String_t*)_stringLiteralE049DB547285CFCE1CB9A95934B6B6DCE2D219EC, /*hidden argument*/NULL);
		if (L_46)
		{
			goto IL_0324;
		}
	}
	{
		goto IL_0388;
	}

IL_01f5:
	{
		String_t* L_47 = V_1;
		bool L_48;
		L_48 = String_op_Equality_m50B3548E4AC232558190B0052877B290AA1D436A((String_t*)L_47, (String_t*)_stringLiteralBF540D6548854CC21630064FBA5390C9409C86F0, /*hidden argument*/NULL);
		if (L_48)
		{
			goto IL_0338;
		}
	}
	{
		goto IL_0388;
	}

IL_020a:
	{
		String_t* L_49 = V_1;
		bool L_50;
		L_50 = String_op_Equality_m50B3548E4AC232558190B0052877B290AA1D436A((String_t*)L_49, (String_t*)_stringLiteral1D87A56AE67B2CD49CAE6E942C2FB7AD98925C00, /*hidden argument*/NULL);
		if (L_50)
		{
			goto IL_034c;
		}
	}
	{
		goto IL_0388;
	}

IL_021f:
	{
		String_t* L_51 = V_1;
		bool L_52;
		L_52 = String_op_Equality_m50B3548E4AC232558190B0052877B290AA1D436A((String_t*)L_51, (String_t*)_stringLiteralA967787586EC9E5A17A9C55E2002AB73A5E21A0A, /*hidden argument*/NULL);
		if (L_52)
		{
			goto IL_0360;
		}
	}
	{
		goto IL_0388;
	}

IL_0234:
	{
		String_t* L_53 = V_1;
		bool L_54;
		L_54 = String_op_Equality_m50B3548E4AC232558190B0052877B290AA1D436A((String_t*)L_53, (String_t*)_stringLiteral47C47DD09640803AD8016748EAE1F04DD1D41119, /*hidden argument*/NULL);
		if (L_54)
		{
			goto IL_0374;
		}
	}
	{
		goto IL_0388;
	}

IL_0249:
	{
		// instance.enabled = reader.Read<System.Boolean>(ES3Type_bool.Instance);
		ES3Reader_t2780AF8AA61DA2A817115CEF8612AC0E494D03C9 * L_55 = ___reader0;
		IL2CPP_RUNTIME_CLASS_INIT(ES3Type_bool_t8F309F7B9CC735FF1DEE68081B6E3CAB367745F4_il2cpp_TypeInfo_var);
		ES3Type_t8FBECB7AE75168648B9524E0C2A38DAD4555421D * L_56 = ((ES3Type_bool_t8F309F7B9CC735FF1DEE68081B6E3CAB367745F4_StaticFields*)il2cpp_codegen_static_fields_for(ES3Type_bool_t8F309F7B9CC735FF1DEE68081B6E3CAB367745F4_il2cpp_TypeInfo_var))->get_Instance_12();
		NullCheck((ES3Reader_t2780AF8AA61DA2A817115CEF8612AC0E494D03C9 *)L_55);
		bool L_57;
		L_57 = GenericVirtFuncInvoker1< bool, ES3Type_t8FBECB7AE75168648B9524E0C2A38DAD4555421D * >::Invoke(ES3Reader_Read_TisBoolean_t07D1E3F34E4813023D64F584DFF7B34C9D922F37_mC6D1B158268FF9B97822FF9F5B37FB1723FEDA22_RuntimeMethod_var, (ES3Reader_t2780AF8AA61DA2A817115CEF8612AC0E494D03C9 *)L_55, (ES3Type_t8FBECB7AE75168648B9524E0C2A38DAD4555421D *)L_56);
		TrailModule_set_enabled_mFC8451DDDF40CCBB3E32A4B30A001115F6346894((TrailModule_t95D15372971E64A1977B7587ABAA87B1A31EF5C8 *)(TrailModule_t95D15372971E64A1977B7587ABAA87B1A31EF5C8 *)(&V_0), (bool)L_57, /*hidden argument*/NULL);
		// break;
		goto IL_038e;
	}

IL_0260:
	{
		// instance.ratio = reader.Read<System.Single>(ES3Type_float.Instance);
		ES3Reader_t2780AF8AA61DA2A817115CEF8612AC0E494D03C9 * L_58 = ___reader0;
		IL2CPP_RUNTIME_CLASS_INIT(ES3Type_float_tF86B773C86731BD9AD79448B860BBB178FE77644_il2cpp_TypeInfo_var);
		ES3Type_t8FBECB7AE75168648B9524E0C2A38DAD4555421D * L_59 = ((ES3Type_float_tF86B773C86731BD9AD79448B860BBB178FE77644_StaticFields*)il2cpp_codegen_static_fields_for(ES3Type_float_tF86B773C86731BD9AD79448B860BBB178FE77644_il2cpp_TypeInfo_var))->get_Instance_12();
		NullCheck((ES3Reader_t2780AF8AA61DA2A817115CEF8612AC0E494D03C9 *)L_58);
		float L_60;
		L_60 = GenericVirtFuncInvoker1< float, ES3Type_t8FBECB7AE75168648B9524E0C2A38DAD4555421D * >::Invoke(ES3Reader_Read_TisSingle_tE07797BA3C98D4CA9B5A19413C19A76688AB899E_m4A0416374498BDA042B8EB21E49B72326D6CE5F4_RuntimeMethod_var, (ES3Reader_t2780AF8AA61DA2A817115CEF8612AC0E494D03C9 *)L_58, (ES3Type_t8FBECB7AE75168648B9524E0C2A38DAD4555421D *)L_59);
		TrailModule_set_ratio_m34E63B34E7B0E8D037AD45532B2E2D5BD0750189((TrailModule_t95D15372971E64A1977B7587ABAA87B1A31EF5C8 *)(TrailModule_t95D15372971E64A1977B7587ABAA87B1A31EF5C8 *)(&V_0), (float)L_60, /*hidden argument*/NULL);
		// break;
		goto IL_038e;
	}

IL_0277:
	{
		// instance.lifetime = reader.Read<UnityEngine.ParticleSystem.MinMaxCurve>(ES3Type_MinMaxCurve.Instance);
		ES3Reader_t2780AF8AA61DA2A817115CEF8612AC0E494D03C9 * L_61 = ___reader0;
		IL2CPP_RUNTIME_CLASS_INIT(ES3Type_MinMaxCurve_tC5342BF0F8735B85CB5E16FDD4C6FACC8AFAD3B7_il2cpp_TypeInfo_var);
		ES3Type_t8FBECB7AE75168648B9524E0C2A38DAD4555421D * L_62 = ((ES3Type_MinMaxCurve_tC5342BF0F8735B85CB5E16FDD4C6FACC8AFAD3B7_StaticFields*)il2cpp_codegen_static_fields_for(ES3Type_MinMaxCurve_tC5342BF0F8735B85CB5E16FDD4C6FACC8AFAD3B7_il2cpp_TypeInfo_var))->get_Instance_12();
		NullCheck((ES3Reader_t2780AF8AA61DA2A817115CEF8612AC0E494D03C9 *)L_61);
		MinMaxCurve_tF036239442AB2D438B1EDABEBC785426871084CD  L_63;
		L_63 = GenericVirtFuncInvoker1< MinMaxCurve_tF036239442AB2D438B1EDABEBC785426871084CD , ES3Type_t8FBECB7AE75168648B9524E0C2A38DAD4555421D * >::Invoke(ES3Reader_Read_TisMinMaxCurve_tF036239442AB2D438B1EDABEBC785426871084CD_mD285150CBFB52440643BBECB5ADF4EE8DE940535_RuntimeMethod_var, (ES3Reader_t2780AF8AA61DA2A817115CEF8612AC0E494D03C9 *)L_61, (ES3Type_t8FBECB7AE75168648B9524E0C2A38DAD4555421D *)L_62);
		TrailModule_set_lifetime_m57C898C42B9F18F5A0E88AAA7B10276CC158C39D((TrailModule_t95D15372971E64A1977B7587ABAA87B1A31EF5C8 *)(TrailModule_t95D15372971E64A1977B7587ABAA87B1A31EF5C8 *)(&V_0), (MinMaxCurve_tF036239442AB2D438B1EDABEBC785426871084CD )L_63, /*hidden argument*/NULL);
		// break;
		goto IL_038e;
	}

IL_028e:
	{
		// instance.lifetimeMultiplier = reader.Read<System.Single>(ES3Type_float.Instance);
		ES3Reader_t2780AF8AA61DA2A817115CEF8612AC0E494D03C9 * L_64 = ___reader0;
		IL2CPP_RUNTIME_CLASS_INIT(ES3Type_float_tF86B773C86731BD9AD79448B860BBB178FE77644_il2cpp_TypeInfo_var);
		ES3Type_t8FBECB7AE75168648B9524E0C2A38DAD4555421D * L_65 = ((ES3Type_float_tF86B773C86731BD9AD79448B860BBB178FE77644_StaticFields*)il2cpp_codegen_static_fields_for(ES3Type_float_tF86B773C86731BD9AD79448B860BBB178FE77644_il2cpp_TypeInfo_var))->get_Instance_12();
		NullCheck((ES3Reader_t2780AF8AA61DA2A817115CEF8612AC0E494D03C9 *)L_64);
		float L_66;
		L_66 = GenericVirtFuncInvoker1< float, ES3Type_t8FBECB7AE75168648B9524E0C2A38DAD4555421D * >::Invoke(ES3Reader_Read_TisSingle_tE07797BA3C98D4CA9B5A19413C19A76688AB899E_m4A0416374498BDA042B8EB21E49B72326D6CE5F4_RuntimeMethod_var, (ES3Reader_t2780AF8AA61DA2A817115CEF8612AC0E494D03C9 *)L_64, (ES3Type_t8FBECB7AE75168648B9524E0C2A38DAD4555421D *)L_65);
		TrailModule_set_lifetimeMultiplier_m23F95D65EE8C82152AE1CF2E41531EC2789A866B((TrailModule_t95D15372971E64A1977B7587ABAA87B1A31EF5C8 *)(TrailModule_t95D15372971E64A1977B7587ABAA87B1A31EF5C8 *)(&V_0), (float)L_66, /*hidden argument*/NULL);
		// break;
		goto IL_038e;
	}

IL_02a5:
	{
		// instance.minVertexDistance = reader.Read<System.Single>(ES3Type_float.Instance);
		ES3Reader_t2780AF8AA61DA2A817115CEF8612AC0E494D03C9 * L_67 = ___reader0;
		IL2CPP_RUNTIME_CLASS_INIT(ES3Type_float_tF86B773C86731BD9AD79448B860BBB178FE77644_il2cpp_TypeInfo_var);
		ES3Type_t8FBECB7AE75168648B9524E0C2A38DAD4555421D * L_68 = ((ES3Type_float_tF86B773C86731BD9AD79448B860BBB178FE77644_StaticFields*)il2cpp_codegen_static_fields_for(ES3Type_float_tF86B773C86731BD9AD79448B860BBB178FE77644_il2cpp_TypeInfo_var))->get_Instance_12();
		NullCheck((ES3Reader_t2780AF8AA61DA2A817115CEF8612AC0E494D03C9 *)L_67);
		float L_69;
		L_69 = GenericVirtFuncInvoker1< float, ES3Type_t8FBECB7AE75168648B9524E0C2A38DAD4555421D * >::Invoke(ES3Reader_Read_TisSingle_tE07797BA3C98D4CA9B5A19413C19A76688AB899E_m4A0416374498BDA042B8EB21E49B72326D6CE5F4_RuntimeMethod_var, (ES3Reader_t2780AF8AA61DA2A817115CEF8612AC0E494D03C9 *)L_67, (ES3Type_t8FBECB7AE75168648B9524E0C2A38DAD4555421D *)L_68);
		TrailModule_set_minVertexDistance_mF7C29F88FBF540CE4987F4CF9B141C624808FBC5((TrailModule_t95D15372971E64A1977B7587ABAA87B1A31EF5C8 *)(TrailModule_t95D15372971E64A1977B7587ABAA87B1A31EF5C8 *)(&V_0), (float)L_69, /*hidden argument*/NULL);
		// break;
		goto IL_038e;
	}

IL_02bc:
	{
		// instance.textureMode = reader.Read<UnityEngine.ParticleSystemTrailTextureMode>();
		ES3Reader_t2780AF8AA61DA2A817115CEF8612AC0E494D03C9 * L_70 = ___reader0;
		NullCheck((ES3Reader_t2780AF8AA61DA2A817115CEF8612AC0E494D03C9 *)L_70);
		int32_t L_71;
		L_71 = GenericVirtFuncInvoker0< int32_t >::Invoke(ES3Reader_Read_TisParticleSystemTrailTextureMode_tF3259187CA4D0A61EDB3A40E63CBF6C42641CE9F_m055DB1212E8BC34F385DF7D302F16241554E9730_RuntimeMethod_var, (ES3Reader_t2780AF8AA61DA2A817115CEF8612AC0E494D03C9 *)L_70);
		TrailModule_set_textureMode_mC1F8AE0D2965FC47BDBFF4F53E0673D5FB58CF28((TrailModule_t95D15372971E64A1977B7587ABAA87B1A31EF5C8 *)(TrailModule_t95D15372971E64A1977B7587ABAA87B1A31EF5C8 *)(&V_0), (int32_t)L_71, /*hidden argument*/NULL);
		// break;
		goto IL_038e;
	}

IL_02ce:
	{
		// instance.worldSpace = reader.Read<System.Boolean>(ES3Type_bool.Instance);
		ES3Reader_t2780AF8AA61DA2A817115CEF8612AC0E494D03C9 * L_72 = ___reader0;
		IL2CPP_RUNTIME_CLASS_INIT(ES3Type_bool_t8F309F7B9CC735FF1DEE68081B6E3CAB367745F4_il2cpp_TypeInfo_var);
		ES3Type_t8FBECB7AE75168648B9524E0C2A38DAD4555421D * L_73 = ((ES3Type_bool_t8F309F7B9CC735FF1DEE68081B6E3CAB367745F4_StaticFields*)il2cpp_codegen_static_fields_for(ES3Type_bool_t8F309F7B9CC735FF1DEE68081B6E3CAB367745F4_il2cpp_TypeInfo_var))->get_Instance_12();
		NullCheck((ES3Reader_t2780AF8AA61DA2A817115CEF8612AC0E494D03C9 *)L_72);
		bool L_74;
		L_74 = GenericVirtFuncInvoker1< bool, ES3Type_t8FBECB7AE75168648B9524E0C2A38DAD4555421D * >::Invoke(ES3Reader_Read_TisBoolean_t07D1E3F34E4813023D64F584DFF7B34C9D922F37_mC6D1B158268FF9B97822FF9F5B37FB1723FEDA22_RuntimeMethod_var, (ES3Reader_t2780AF8AA61DA2A817115CEF8612AC0E494D03C9 *)L_72, (ES3Type_t8FBECB7AE75168648B9524E0C2A38DAD4555421D *)L_73);
		TrailModule_set_worldSpace_m42A63AF4A96F24A621A29A0F35240195F0E56B1A((TrailModule_t95D15372971E64A1977B7587ABAA87B1A31EF5C8 *)(TrailModule_t95D15372971E64A1977B7587ABAA87B1A31EF5C8 *)(&V_0), (bool)L_74, /*hidden argument*/NULL);
		// break;
		goto IL_038e;
	}

IL_02e5:
	{
		// instance.dieWithParticles = reader.Read<System.Boolean>(ES3Type_bool.Instance);
		ES3Reader_t2780AF8AA61DA2A817115CEF8612AC0E494D03C9 * L_75 = ___reader0;
		IL2CPP_RUNTIME_CLASS_INIT(ES3Type_bool_t8F309F7B9CC735FF1DEE68081B6E3CAB367745F4_il2cpp_TypeInfo_var);
		ES3Type_t8FBECB7AE75168648B9524E0C2A38DAD4555421D * L_76 = ((ES3Type_bool_t8F309F7B9CC735FF1DEE68081B6E3CAB367745F4_StaticFields*)il2cpp_codegen_static_fields_for(ES3Type_bool_t8F309F7B9CC735FF1DEE68081B6E3CAB367745F4_il2cpp_TypeInfo_var))->get_Instance_12();
		NullCheck((ES3Reader_t2780AF8AA61DA2A817115CEF8612AC0E494D03C9 *)L_75);
		bool L_77;
		L_77 = GenericVirtFuncInvoker1< bool, ES3Type_t8FBECB7AE75168648B9524E0C2A38DAD4555421D * >::Invoke(ES3Reader_Read_TisBoolean_t07D1E3F34E4813023D64F584DFF7B34C9D922F37_mC6D1B158268FF9B97822FF9F5B37FB1723FEDA22_RuntimeMethod_var, (ES3Reader_t2780AF8AA61DA2A817115CEF8612AC0E494D03C9 *)L_75, (ES3Type_t8FBECB7AE75168648B9524E0C2A38DAD4555421D *)L_76);
		TrailModule_set_dieWithParticles_mB7C4E8DC2F908FDF6D57A77B54B821E360D8DA99((TrailModule_t95D15372971E64A1977B7587ABAA87B1A31EF5C8 *)(TrailModule_t95D15372971E64A1977B7587ABAA87B1A31EF5C8 *)(&V_0), (bool)L_77, /*hidden argument*/NULL);
		// break;
		goto IL_038e;
	}

IL_02fc:
	{
		// instance.sizeAffectsWidth = reader.Read<System.Boolean>(ES3Type_bool.Instance);
		ES3Reader_t2780AF8AA61DA2A817115CEF8612AC0E494D03C9 * L_78 = ___reader0;
		IL2CPP_RUNTIME_CLASS_INIT(ES3Type_bool_t8F309F7B9CC735FF1DEE68081B6E3CAB367745F4_il2cpp_TypeInfo_var);
		ES3Type_t8FBECB7AE75168648B9524E0C2A38DAD4555421D * L_79 = ((ES3Type_bool_t8F309F7B9CC735FF1DEE68081B6E3CAB367745F4_StaticFields*)il2cpp_codegen_static_fields_for(ES3Type_bool_t8F309F7B9CC735FF1DEE68081B6E3CAB367745F4_il2cpp_TypeInfo_var))->get_Instance_12();
		NullCheck((ES3Reader_t2780AF8AA61DA2A817115CEF8612AC0E494D03C9 *)L_78);
		bool L_80;
		L_80 = GenericVirtFuncInvoker1< bool, ES3Type_t8FBECB7AE75168648B9524E0C2A38DAD4555421D * >::Invoke(ES3Reader_Read_TisBoolean_t07D1E3F34E4813023D64F584DFF7B34C9D922F37_mC6D1B158268FF9B97822FF9F5B37FB1723FEDA22_RuntimeMethod_var, (ES3Reader_t2780AF8AA61DA2A817115CEF8612AC0E494D03C9 *)L_78, (ES3Type_t8FBECB7AE75168648B9524E0C2A38DAD4555421D *)L_79);
		TrailModule_set_sizeAffectsWidth_m3517856E39080DA69B447499C8846D2491B0ABF0((TrailModule_t95D15372971E64A1977B7587ABAA87B1A31EF5C8 *)(TrailModule_t95D15372971E64A1977B7587ABAA87B1A31EF5C8 *)(&V_0), (bool)L_80, /*hidden argument*/NULL);
		// break;
		goto IL_038e;
	}

IL_0310:
	{
		// instance.sizeAffectsLifetime = reader.Read<System.Boolean>(ES3Type_bool.Instance);
		ES3Reader_t2780AF8AA61DA2A817115CEF8612AC0E494D03C9 * L_81 = ___reader0;
		IL2CPP_RUNTIME_CLASS_INIT(ES3Type_bool_t8F309F7B9CC735FF1DEE68081B6E3CAB367745F4_il2cpp_TypeInfo_var);
		ES3Type_t8FBECB7AE75168648B9524E0C2A38DAD4555421D * L_82 = ((ES3Type_bool_t8F309F7B9CC735FF1DEE68081B6E3CAB367745F4_StaticFields*)il2cpp_codegen_static_fields_for(ES3Type_bool_t8F309F7B9CC735FF1DEE68081B6E3CAB367745F4_il2cpp_TypeInfo_var))->get_Instance_12();
		NullCheck((ES3Reader_t2780AF8AA61DA2A817115CEF8612AC0E494D03C9 *)L_81);
		bool L_83;
		L_83 = GenericVirtFuncInvoker1< bool, ES3Type_t8FBECB7AE75168648B9524E0C2A38DAD4555421D * >::Invoke(ES3Reader_Read_TisBoolean_t07D1E3F34E4813023D64F584DFF7B34C9D922F37_mC6D1B158268FF9B97822FF9F5B37FB1723FEDA22_RuntimeMethod_var, (ES3Reader_t2780AF8AA61DA2A817115CEF8612AC0E494D03C9 *)L_81, (ES3Type_t8FBECB7AE75168648B9524E0C2A38DAD4555421D *)L_82);
		TrailModule_set_sizeAffectsLifetime_m98BF4A6594193D824B52D88371CF963ACBA388FD((TrailModule_t95D15372971E64A1977B7587ABAA87B1A31EF5C8 *)(TrailModule_t95D15372971E64A1977B7587ABAA87B1A31EF5C8 *)(&V_0), (bool)L_83, /*hidden argument*/NULL);
		// break;
		goto IL_038e;
	}

IL_0324:
	{
		// instance.inheritParticleColor = reader.Read<System.Boolean>(ES3Type_bool.Instance);
		ES3Reader_t2780AF8AA61DA2A817115CEF8612AC0E494D03C9 * L_84 = ___reader0;
		IL2CPP_RUNTIME_CLASS_INIT(ES3Type_bool_t8F309F7B9CC735FF1DEE68081B6E3CAB367745F4_il2cpp_TypeInfo_var);
		ES3Type_t8FBECB7AE75168648B9524E0C2A38DAD4555421D * L_85 = ((ES3Type_bool_t8F309F7B9CC735FF1DEE68081B6E3CAB367745F4_StaticFields*)il2cpp_codegen_static_fields_for(ES3Type_bool_t8F309F7B9CC735FF1DEE68081B6E3CAB367745F4_il2cpp_TypeInfo_var))->get_Instance_12();
		NullCheck((ES3Reader_t2780AF8AA61DA2A817115CEF8612AC0E494D03C9 *)L_84);
		bool L_86;
		L_86 = GenericVirtFuncInvoker1< bool, ES3Type_t8FBECB7AE75168648B9524E0C2A38DAD4555421D * >::Invoke(ES3Reader_Read_TisBoolean_t07D1E3F34E4813023D64F584DFF7B34C9D922F37_mC6D1B158268FF9B97822FF9F5B37FB1723FEDA22_RuntimeMethod_var, (ES3Reader_t2780AF8AA61DA2A817115CEF8612AC0E494D03C9 *)L_84, (ES3Type_t8FBECB7AE75168648B9524E0C2A38DAD4555421D *)L_85);
		TrailModule_set_inheritParticleColor_mCD83E87B5E00F2BFFBE08AD2D1D68606283A4FEE((TrailModule_t95D15372971E64A1977B7587ABAA87B1A31EF5C8 *)(TrailModule_t95D15372971E64A1977B7587ABAA87B1A31EF5C8 *)(&V_0), (bool)L_86, /*hidden argument*/NULL);
		// break;
		goto IL_038e;
	}

IL_0338:
	{
		// instance.colorOverLifetime = reader.Read<UnityEngine.ParticleSystem.MinMaxGradient>(ES3Type_MinMaxGradient.Instance);
		ES3Reader_t2780AF8AA61DA2A817115CEF8612AC0E494D03C9 * L_87 = ___reader0;
		IL2CPP_RUNTIME_CLASS_INIT(ES3Type_MinMaxGradient_t5DD353D60E95642AB39D1C97C6FD6DD1B067D3CF_il2cpp_TypeInfo_var);
		ES3Type_t8FBECB7AE75168648B9524E0C2A38DAD4555421D * L_88 = ((ES3Type_MinMaxGradient_t5DD353D60E95642AB39D1C97C6FD6DD1B067D3CF_StaticFields*)il2cpp_codegen_static_fields_for(ES3Type_MinMaxGradient_t5DD353D60E95642AB39D1C97C6FD6DD1B067D3CF_il2cpp_TypeInfo_var))->get_Instance_12();
		NullCheck((ES3Reader_t2780AF8AA61DA2A817115CEF8612AC0E494D03C9 *)L_87);
		MinMaxGradient_tF4530B26F29D9635D670A33B9EE581EAC48C12B7  L_89;
		L_89 = GenericVirtFuncInvoker1< MinMaxGradient_tF4530B26F29D9635D670A33B9EE581EAC48C12B7 , ES3Type_t8FBECB7AE75168648B9524E0C2A38DAD4555421D * >::Invoke(ES3Reader_Read_TisMinMaxGradient_tF4530B26F29D9635D670A33B9EE581EAC48C12B7_m6A3DD8CBBAC5D32B838B6C4399009AB8AA512ACC_RuntimeMethod_var, (ES3Reader_t2780AF8AA61DA2A817115CEF8612AC0E494D03C9 *)L_87, (ES3Type_t8FBECB7AE75168648B9524E0C2A38DAD4555421D *)L_88);
		TrailModule_set_colorOverLifetime_mCD56BD4B75D3A3947069BA1B93FEC78AAE08DF27((TrailModule_t95D15372971E64A1977B7587ABAA87B1A31EF5C8 *)(TrailModule_t95D15372971E64A1977B7587ABAA87B1A31EF5C8 *)(&V_0), (MinMaxGradient_tF4530B26F29D9635D670A33B9EE581EAC48C12B7 )L_89, /*hidden argument*/NULL);
		// break;
		goto IL_038e;
	}

IL_034c:
	{
		// instance.widthOverTrail = reader.Read<UnityEngine.ParticleSystem.MinMaxCurve>(ES3Type_MinMaxCurve.Instance);
		ES3Reader_t2780AF8AA61DA2A817115CEF8612AC0E494D03C9 * L_90 = ___reader0;
		IL2CPP_RUNTIME_CLASS_INIT(ES3Type_MinMaxCurve_tC5342BF0F8735B85CB5E16FDD4C6FACC8AFAD3B7_il2cpp_TypeInfo_var);
		ES3Type_t8FBECB7AE75168648B9524E0C2A38DAD4555421D * L_91 = ((ES3Type_MinMaxCurve_tC5342BF0F8735B85CB5E16FDD4C6FACC8AFAD3B7_StaticFields*)il2cpp_codegen_static_fields_for(ES3Type_MinMaxCurve_tC5342BF0F8735B85CB5E16FDD4C6FACC8AFAD3B7_il2cpp_TypeInfo_var))->get_Instance_12();
		NullCheck((ES3Reader_t2780AF8AA61DA2A817115CEF8612AC0E494D03C9 *)L_90);
		MinMaxCurve_tF036239442AB2D438B1EDABEBC785426871084CD  L_92;
		L_92 = GenericVirtFuncInvoker1< MinMaxCurve_tF036239442AB2D438B1EDABEBC785426871084CD , ES3Type_t8FBECB7AE75168648B9524E0C2A38DAD4555421D * >::Invoke(ES3Reader_Read_TisMinMaxCurve_tF036239442AB2D438B1EDABEBC785426871084CD_mD285150CBFB52440643BBECB5ADF4EE8DE940535_RuntimeMethod_var, (ES3Reader_t2780AF8AA61DA2A817115CEF8612AC0E494D03C9 *)L_90, (ES3Type_t8FBECB7AE75168648B9524E0C2A38DAD4555421D *)L_91);
		TrailModule_set_widthOverTrail_m6C0A896EBFDED7CE46344B3A0B04212934F30DE1((TrailModule_t95D15372971E64A1977B7587ABAA87B1A31EF5C8 *)(TrailModule_t95D15372971E64A1977B7587ABAA87B1A31EF5C8 *)(&V_0), (MinMaxCurve_tF036239442AB2D438B1EDABEBC785426871084CD )L_92, /*hidden argument*/NULL);
		// break;
		goto IL_038e;
	}

IL_0360:
	{
		// instance.widthOverTrailMultiplier = reader.Read<System.Single>(ES3Type_float.Instance);
		ES3Reader_t2780AF8AA61DA2A817115CEF8612AC0E494D03C9 * L_93 = ___reader0;
		IL2CPP_RUNTIME_CLASS_INIT(ES3Type_float_tF86B773C86731BD9AD79448B860BBB178FE77644_il2cpp_TypeInfo_var);
		ES3Type_t8FBECB7AE75168648B9524E0C2A38DAD4555421D * L_94 = ((ES3Type_float_tF86B773C86731BD9AD79448B860BBB178FE77644_StaticFields*)il2cpp_codegen_static_fields_for(ES3Type_float_tF86B773C86731BD9AD79448B860BBB178FE77644_il2cpp_TypeInfo_var))->get_Instance_12();
		NullCheck((ES3Reader_t2780AF8AA61DA2A817115CEF8612AC0E494D03C9 *)L_93);
		float L_95;
		L_95 = GenericVirtFuncInvoker1< float, ES3Type_t8FBECB7AE75168648B9524E0C2A38DAD4555421D * >::Invoke(ES3Reader_Read_TisSingle_tE07797BA3C98D4CA9B5A19413C19A76688AB899E_m4A0416374498BDA042B8EB21E49B72326D6CE5F4_RuntimeMethod_var, (ES3Reader_t2780AF8AA61DA2A817115CEF8612AC0E494D03C9 *)L_93, (ES3Type_t8FBECB7AE75168648B9524E0C2A38DAD4555421D *)L_94);
		TrailModule_set_widthOverTrailMultiplier_m6A7EA2856CF30B710CCB528EA3EBFD1799C19BD4((TrailModule_t95D15372971E64A1977B7587ABAA87B1A31EF5C8 *)(TrailModule_t95D15372971E64A1977B7587ABAA87B1A31EF5C8 *)(&V_0), (float)L_95, /*hidden argument*/NULL);
		// break;
		goto IL_038e;
	}

IL_0374:
	{
		// instance.colorOverTrail = reader.Read<UnityEngine.ParticleSystem.MinMaxGradient>(ES3Type_MinMaxGradient.Instance);
		ES3Reader_t2780AF8AA61DA2A817115CEF8612AC0E494D03C9 * L_96 = ___reader0;
		IL2CPP_RUNTIME_CLASS_INIT(ES3Type_MinMaxGradient_t5DD353D60E95642AB39D1C97C6FD6DD1B067D3CF_il2cpp_TypeInfo_var);
		ES3Type_t8FBECB7AE75168648B9524E0C2A38DAD4555421D * L_97 = ((ES3Type_MinMaxGradient_t5DD353D60E95642AB39D1C97C6FD6DD1B067D3CF_StaticFields*)il2cpp_codegen_static_fields_for(ES3Type_MinMaxGradient_t5DD353D60E95642AB39D1C97C6FD6DD1B067D3CF_il2cpp_TypeInfo_var))->get_Instance_12();
		NullCheck((ES3Reader_t2780AF8AA61DA2A817115CEF8612AC0E494D03C9 *)L_96);
		MinMaxGradient_tF4530B26F29D9635D670A33B9EE581EAC48C12B7  L_98;
		L_98 = GenericVirtFuncInvoker1< MinMaxGradient_tF4530B26F29D9635D670A33B9EE581EAC48C12B7 , ES3Type_t8FBECB7AE75168648B9524E0C2A38DAD4555421D * >::Invoke(ES3Reader_Read_TisMinMaxGradient_tF4530B26F29D9635D670A33B9EE581EAC48C12B7_m6A3DD8CBBAC5D32B838B6C4399009AB8AA512ACC_RuntimeMethod_var, (ES3Reader_t2780AF8AA61DA2A817115CEF8612AC0E494D03C9 *)L_96, (ES3Type_t8FBECB7AE75168648B9524E0C2A38DAD4555421D *)L_97);
		TrailModule_set_colorOverTrail_m8440C6574C8310292B93D70EA4FE3EE8C40DF8DB((TrailModule_t95D15372971E64A1977B7587ABAA87B1A31EF5C8 *)(TrailModule_t95D15372971E64A1977B7587ABAA87B1A31EF5C8 *)(&V_0), (MinMaxGradient_tF4530B26F29D9635D670A33B9EE581EAC48C12B7 )L_98, /*hidden argument*/NULL);
		// break;
		goto IL_038e;
	}

IL_0388:
	{
		// reader.Skip();
		ES3Reader_t2780AF8AA61DA2A817115CEF8612AC0E494D03C9 * L_99 = ___reader0;
		NullCheck((ES3Reader_t2780AF8AA61DA2A817115CEF8612AC0E494D03C9 *)L_99);
		VirtActionInvoker0::Invoke(41 /* System.Void ES3Reader::Skip() */, (ES3Reader_t2780AF8AA61DA2A817115CEF8612AC0E494D03C9 *)L_99);
	}

IL_038e:
	{
		// while((propertyName = reader.ReadPropertyName()) != null)
		ES3Reader_t2780AF8AA61DA2A817115CEF8612AC0E494D03C9 * L_100 = ___reader0;
		NullCheck((ES3Reader_t2780AF8AA61DA2A817115CEF8612AC0E494D03C9 *)L_100);
		String_t* L_101;
		L_101 = VirtFuncInvoker0< String_t* >::Invoke(21 /* System.String ES3Reader::ReadPropertyName() */, (ES3Reader_t2780AF8AA61DA2A817115CEF8612AC0E494D03C9 *)L_100);
		String_t* L_102 = (String_t*)L_101;
		V_1 = (String_t*)L_102;
		if (L_102)
		{
			goto IL_000c;
		}
	}
	{
		// }
		return;
	}
}
// System.Void ES3Types.ES3Type_TrailModule::ReadInto<UnityEngine.Vector4>(ES3Reader,System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ES3Type_TrailModule_ReadInto_TisVector4_tA56A37FC5661BCC89C3DDC24BE12BA5BCB6A02C7_mACD0647F4B477D6A5B96316FB861F2551B3FC2E3_gshared (ES3Type_TrailModule_tC773F73EC0443516DD128FF2B5AE010809742462 * __this, ES3Reader_t2780AF8AA61DA2A817115CEF8612AC0E494D03C9 * ___reader0, RuntimeObject * ___obj1, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ES3Reader_Read_TisBoolean_t07D1E3F34E4813023D64F584DFF7B34C9D922F37_mC6D1B158268FF9B97822FF9F5B37FB1723FEDA22_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ES3Reader_Read_TisMinMaxCurve_tF036239442AB2D438B1EDABEBC785426871084CD_mD285150CBFB52440643BBECB5ADF4EE8DE940535_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ES3Reader_Read_TisMinMaxGradient_tF4530B26F29D9635D670A33B9EE581EAC48C12B7_m6A3DD8CBBAC5D32B838B6C4399009AB8AA512ACC_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ES3Reader_Read_TisParticleSystemTrailTextureMode_tF3259187CA4D0A61EDB3A40E63CBF6C42641CE9F_m055DB1212E8BC34F385DF7D302F16241554E9730_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ES3Reader_Read_TisSingle_tE07797BA3C98D4CA9B5A19413C19A76688AB899E_m4A0416374498BDA042B8EB21E49B72326D6CE5F4_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ES3Type_MinMaxCurve_tC5342BF0F8735B85CB5E16FDD4C6FACC8AFAD3B7_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ES3Type_MinMaxGradient_t5DD353D60E95642AB39D1C97C6FD6DD1B067D3CF_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ES3Type_bool_t8F309F7B9CC735FF1DEE68081B6E3CAB367745F4_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ES3Type_float_tF86B773C86731BD9AD79448B860BBB178FE77644_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&TrailModule_t95D15372971E64A1977B7587ABAA87B1A31EF5C8_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral1D87A56AE67B2CD49CAE6E942C2FB7AD98925C00);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral354281948B6269615E32D856CF85B6F456724DAA);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral4221314F268D184F46688D45C85446821F1F1BC3);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral47C47DD09640803AD8016748EAE1F04DD1D41119);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral5C86338F177203D001C41D9C348A83D1338CC7D0);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral60126327537B7B8E6EE33C43FE0C5CA8BCC3A06A);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral87F70660D62DE5FC257FBADE9DA4EC9188597DE5);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralA967787586EC9E5A17A9C55E2002AB73A5E21A0A);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralADAEB0839588196B349BDB6CF33AFA3E0736360B);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralBE2893848F9FC647C2288DA6581A1522E9695182);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralBF540D6548854CC21630064FBA5390C9409C86F0);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralC580B374AA991574F91DFC86C068E7FAD661A3A4);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralE049DB547285CFCE1CB9A95934B6B6DCE2D219EC);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralF9D225733E1D10F9344C755C4A9C0870CD1DE97B);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralFE5F89F63E2381500F62A7CBD6954563BE44562F);
		s_Il2CppMethodInitialized = true;
	}
	TrailModule_t95D15372971E64A1977B7587ABAA87B1A31EF5C8  V_0;
	memset((&V_0), 0, sizeof(V_0));
	String_t* V_1 = NULL;
	uint32_t V_2 = 0;
	{
		// var instance = (UnityEngine.ParticleSystem.TrailModule)obj;
		RuntimeObject * L_0 = ___obj1;
		V_0 = (TrailModule_t95D15372971E64A1977B7587ABAA87B1A31EF5C8 )((*(TrailModule_t95D15372971E64A1977B7587ABAA87B1A31EF5C8 *)((TrailModule_t95D15372971E64A1977B7587ABAA87B1A31EF5C8 *)UnBox(L_0, TrailModule_t95D15372971E64A1977B7587ABAA87B1A31EF5C8_il2cpp_TypeInfo_var))));
		goto IL_038e;
	}

IL_000c:
	{
		String_t* L_1 = V_1;
		if (!L_1)
		{
			goto IL_0388;
		}
	}
	{
		String_t* L_2 = V_1;
		uint32_t L_3;
		L_3 = U3CPrivateImplementationDetailsU3E_ComputeStringHash_m3ADC1F612F9EE3DD518E6F0023A0DE0EE2B120A7((String_t*)L_2, /*hidden argument*/NULL);
		V_2 = (uint32_t)L_3;
		uint32_t L_4 = V_2;
		if ((!(((uint32_t)L_4) <= ((uint32_t)((int32_t)1376955374)))))
		{
			goto IL_008d;
		}
	}
	{
		uint32_t L_5 = V_2;
		if ((!(((uint32_t)L_5) <= ((uint32_t)((int32_t)494095910)))))
		{
			goto IL_004f;
		}
	}
	{
		uint32_t L_6 = V_2;
		if ((((int32_t)L_6) == ((int32_t)((int32_t)49525662))))
		{
			goto IL_010e;
		}
	}
	{
		uint32_t L_7 = V_2;
		if ((((int32_t)L_7) == ((int32_t)((int32_t)341298456))))
		{
			goto IL_021f;
		}
	}
	{
		uint32_t L_8 = V_2;
		if ((((int32_t)L_8) == ((int32_t)((int32_t)494095910))))
		{
			goto IL_0234;
		}
	}
	{
		goto IL_0388;
	}

IL_004f:
	{
		uint32_t L_9 = V_2;
		if ((!(((uint32_t)L_9) <= ((uint32_t)((int32_t)973733911)))))
		{
			goto IL_0072;
		}
	}
	{
		uint32_t L_10 = V_2;
		if ((((int32_t)L_10) == ((int32_t)((int32_t)559929418))))
		{
			goto IL_01b6;
		}
	}
	{
		uint32_t L_11 = V_2;
		if ((((int32_t)L_11) == ((int32_t)((int32_t)973733911))))
		{
			goto IL_0177;
		}
	}
	{
		goto IL_0388;
	}

IL_0072:
	{
		uint32_t L_12 = V_2;
		if ((((int32_t)L_12) == ((int32_t)((int32_t)1024708593))))
		{
			goto IL_014d;
		}
	}
	{
		uint32_t L_13 = V_2;
		if ((((int32_t)L_13) == ((int32_t)((int32_t)1376955374))))
		{
			goto IL_0138;
		}
	}
	{
		goto IL_0388;
	}

IL_008d:
	{
		uint32_t L_14 = V_2;
		if ((!(((uint32_t)L_14) <= ((uint32_t)((int32_t)-2100707162)))))
		{
			goto IL_00d3;
		}
	}
	{
		uint32_t L_15 = V_2;
		if ((!(((uint32_t)L_15) <= ((uint32_t)((int32_t)1975189197)))))
		{
			goto IL_00b8;
		}
	}
	{
		uint32_t L_16 = V_2;
		if ((((int32_t)L_16) == ((int32_t)((int32_t)1546474083))))
		{
			goto IL_020a;
		}
	}
	{
		uint32_t L_17 = V_2;
		if ((((int32_t)L_17) == ((int32_t)((int32_t)1975189197))))
		{
			goto IL_01cb;
		}
	}
	{
		goto IL_0388;
	}

IL_00b8:
	{
		uint32_t L_18 = V_2;
		if ((((int32_t)L_18) == ((int32_t)((int32_t)2053023684))))
		{
			goto IL_01a1;
		}
	}
	{
		uint32_t L_19 = V_2;
		if ((((int32_t)L_19) == ((int32_t)((int32_t)-2100707162))))
		{
			goto IL_0162;
		}
	}
	{
		goto IL_0388;
	}

IL_00d3:
	{
		uint32_t L_20 = V_2;
		if ((!(((uint32_t)L_20) <= ((uint32_t)((int32_t)-1319579393)))))
		{
			goto IL_00f6;
		}
	}
	{
		uint32_t L_21 = V_2;
		if ((((int32_t)L_21) == ((int32_t)((int32_t)-1562862963))))
		{
			goto IL_01e0;
		}
	}
	{
		uint32_t L_22 = V_2;
		if ((((int32_t)L_22) == ((int32_t)((int32_t)-1319579393))))
		{
			goto IL_018c;
		}
	}
	{
		goto IL_0388;
	}

IL_00f6:
	{
		uint32_t L_23 = V_2;
		if ((((int32_t)L_23) == ((int32_t)((int32_t)-1055777148))))
		{
			goto IL_0123;
		}
	}
	{
		uint32_t L_24 = V_2;
		if ((((int32_t)L_24) == ((int32_t)((int32_t)-413379935))))
		{
			goto IL_01f5;
		}
	}
	{
		goto IL_0388;
	}

IL_010e:
	{
		String_t* L_25 = V_1;
		bool L_26;
		L_26 = String_op_Equality_m50B3548E4AC232558190B0052877B290AA1D436A((String_t*)L_25, (String_t*)_stringLiteralF9D225733E1D10F9344C755C4A9C0870CD1DE97B, /*hidden argument*/NULL);
		if (L_26)
		{
			goto IL_0249;
		}
	}
	{
		goto IL_0388;
	}

IL_0123:
	{
		String_t* L_27 = V_1;
		bool L_28;
		L_28 = String_op_Equality_m50B3548E4AC232558190B0052877B290AA1D436A((String_t*)L_27, (String_t*)_stringLiteral60126327537B7B8E6EE33C43FE0C5CA8BCC3A06A, /*hidden argument*/NULL);
		if (L_28)
		{
			goto IL_0260;
		}
	}
	{
		goto IL_0388;
	}

IL_0138:
	{
		String_t* L_29 = V_1;
		bool L_30;
		L_30 = String_op_Equality_m50B3548E4AC232558190B0052877B290AA1D436A((String_t*)L_29, (String_t*)_stringLiteralBE2893848F9FC647C2288DA6581A1522E9695182, /*hidden argument*/NULL);
		if (L_30)
		{
			goto IL_0277;
		}
	}
	{
		goto IL_0388;
	}

IL_014d:
	{
		String_t* L_31 = V_1;
		bool L_32;
		L_32 = String_op_Equality_m50B3548E4AC232558190B0052877B290AA1D436A((String_t*)L_31, (String_t*)_stringLiteral4221314F268D184F46688D45C85446821F1F1BC3, /*hidden argument*/NULL);
		if (L_32)
		{
			goto IL_028e;
		}
	}
	{
		goto IL_0388;
	}

IL_0162:
	{
		String_t* L_33 = V_1;
		bool L_34;
		L_34 = String_op_Equality_m50B3548E4AC232558190B0052877B290AA1D436A((String_t*)L_33, (String_t*)_stringLiteral5C86338F177203D001C41D9C348A83D1338CC7D0, /*hidden argument*/NULL);
		if (L_34)
		{
			goto IL_02a5;
		}
	}
	{
		goto IL_0388;
	}

IL_0177:
	{
		String_t* L_35 = V_1;
		bool L_36;
		L_36 = String_op_Equality_m50B3548E4AC232558190B0052877B290AA1D436A((String_t*)L_35, (String_t*)_stringLiteralFE5F89F63E2381500F62A7CBD6954563BE44562F, /*hidden argument*/NULL);
		if (L_36)
		{
			goto IL_02bc;
		}
	}
	{
		goto IL_0388;
	}

IL_018c:
	{
		String_t* L_37 = V_1;
		bool L_38;
		L_38 = String_op_Equality_m50B3548E4AC232558190B0052877B290AA1D436A((String_t*)L_37, (String_t*)_stringLiteral87F70660D62DE5FC257FBADE9DA4EC9188597DE5, /*hidden argument*/NULL);
		if (L_38)
		{
			goto IL_02ce;
		}
	}
	{
		goto IL_0388;
	}

IL_01a1:
	{
		String_t* L_39 = V_1;
		bool L_40;
		L_40 = String_op_Equality_m50B3548E4AC232558190B0052877B290AA1D436A((String_t*)L_39, (String_t*)_stringLiteral354281948B6269615E32D856CF85B6F456724DAA, /*hidden argument*/NULL);
		if (L_40)
		{
			goto IL_02e5;
		}
	}
	{
		goto IL_0388;
	}

IL_01b6:
	{
		String_t* L_41 = V_1;
		bool L_42;
		L_42 = String_op_Equality_m50B3548E4AC232558190B0052877B290AA1D436A((String_t*)L_41, (String_t*)_stringLiteralADAEB0839588196B349BDB6CF33AFA3E0736360B, /*hidden argument*/NULL);
		if (L_42)
		{
			goto IL_02fc;
		}
	}
	{
		goto IL_0388;
	}

IL_01cb:
	{
		String_t* L_43 = V_1;
		bool L_44;
		L_44 = String_op_Equality_m50B3548E4AC232558190B0052877B290AA1D436A((String_t*)L_43, (String_t*)_stringLiteralC580B374AA991574F91DFC86C068E7FAD661A3A4, /*hidden argument*/NULL);
		if (L_44)
		{
			goto IL_0310;
		}
	}
	{
		goto IL_0388;
	}

IL_01e0:
	{
		String_t* L_45 = V_1;
		bool L_46;
		L_46 = String_op_Equality_m50B3548E4AC232558190B0052877B290AA1D436A((String_t*)L_45, (String_t*)_stringLiteralE049DB547285CFCE1CB9A95934B6B6DCE2D219EC, /*hidden argument*/NULL);
		if (L_46)
		{
			goto IL_0324;
		}
	}
	{
		goto IL_0388;
	}

IL_01f5:
	{
		String_t* L_47 = V_1;
		bool L_48;
		L_48 = String_op_Equality_m50B3548E4AC232558190B0052877B290AA1D436A((String_t*)L_47, (String_t*)_stringLiteralBF540D6548854CC21630064FBA5390C9409C86F0, /*hidden argument*/NULL);
		if (L_48)
		{
			goto IL_0338;
		}
	}
	{
		goto IL_0388;
	}

IL_020a:
	{
		String_t* L_49 = V_1;
		bool L_50;
		L_50 = String_op_Equality_m50B3548E4AC232558190B0052877B290AA1D436A((String_t*)L_49, (String_t*)_stringLiteral1D87A56AE67B2CD49CAE6E942C2FB7AD98925C00, /*hidden argument*/NULL);
		if (L_50)
		{
			goto IL_034c;
		}
	}
	{
		goto IL_0388;
	}

IL_021f:
	{
		String_t* L_51 = V_1;
		bool L_52;
		L_52 = String_op_Equality_m50B3548E4AC232558190B0052877B290AA1D436A((String_t*)L_51, (String_t*)_stringLiteralA967787586EC9E5A17A9C55E2002AB73A5E21A0A, /*hidden argument*/NULL);
		if (L_52)
		{
			goto IL_0360;
		}
	}
	{
		goto IL_0388;
	}

IL_0234:
	{
		String_t* L_53 = V_1;
		bool L_54;
		L_54 = String_op_Equality_m50B3548E4AC232558190B0052877B290AA1D436A((String_t*)L_53, (String_t*)_stringLiteral47C47DD09640803AD8016748EAE1F04DD1D41119, /*hidden argument*/NULL);
		if (L_54)
		{
			goto IL_0374;
		}
	}
	{
		goto IL_0388;
	}

IL_0249:
	{
		// instance.enabled = reader.Read<System.Boolean>(ES3Type_bool.Instance);
		ES3Reader_t2780AF8AA61DA2A817115CEF8612AC0E494D03C9 * L_55 = ___reader0;
		IL2CPP_RUNTIME_CLASS_INIT(ES3Type_bool_t8F309F7B9CC735FF1DEE68081B6E3CAB367745F4_il2cpp_TypeInfo_var);
		ES3Type_t8FBECB7AE75168648B9524E0C2A38DAD4555421D * L_56 = ((ES3Type_bool_t8F309F7B9CC735FF1DEE68081B6E3CAB367745F4_StaticFields*)il2cpp_codegen_static_fields_for(ES3Type_bool_t8F309F7B9CC735FF1DEE68081B6E3CAB367745F4_il2cpp_TypeInfo_var))->get_Instance_12();
		NullCheck((ES3Reader_t2780AF8AA61DA2A817115CEF8612AC0E494D03C9 *)L_55);
		bool L_57;
		L_57 = GenericVirtFuncInvoker1< bool, ES3Type_t8FBECB7AE75168648B9524E0C2A38DAD4555421D * >::Invoke(ES3Reader_Read_TisBoolean_t07D1E3F34E4813023D64F584DFF7B34C9D922F37_mC6D1B158268FF9B97822FF9F5B37FB1723FEDA22_RuntimeMethod_var, (ES3Reader_t2780AF8AA61DA2A817115CEF8612AC0E494D03C9 *)L_55, (ES3Type_t8FBECB7AE75168648B9524E0C2A38DAD4555421D *)L_56);
		TrailModule_set_enabled_mFC8451DDDF40CCBB3E32A4B30A001115F6346894((TrailModule_t95D15372971E64A1977B7587ABAA87B1A31EF5C8 *)(TrailModule_t95D15372971E64A1977B7587ABAA87B1A31EF5C8 *)(&V_0), (bool)L_57, /*hidden argument*/NULL);
		// break;
		goto IL_038e;
	}

IL_0260:
	{
		// instance.ratio = reader.Read<System.Single>(ES3Type_float.Instance);
		ES3Reader_t2780AF8AA61DA2A817115CEF8612AC0E494D03C9 * L_58 = ___reader0;
		IL2CPP_RUNTIME_CLASS_INIT(ES3Type_float_tF86B773C86731BD9AD79448B860BBB178FE77644_il2cpp_TypeInfo_var);
		ES3Type_t8FBECB7AE75168648B9524E0C2A38DAD4555421D * L_59 = ((ES3Type_float_tF86B773C86731BD9AD79448B860BBB178FE77644_StaticFields*)il2cpp_codegen_static_fields_for(ES3Type_float_tF86B773C86731BD9AD79448B860BBB178FE77644_il2cpp_TypeInfo_var))->get_Instance_12();
		NullCheck((ES3Reader_t2780AF8AA61DA2A817115CEF8612AC0E494D03C9 *)L_58);
		float L_60;
		L_60 = GenericVirtFuncInvoker1< float, ES3Type_t8FBECB7AE75168648B9524E0C2A38DAD4555421D * >::Invoke(ES3Reader_Read_TisSingle_tE07797BA3C98D4CA9B5A19413C19A76688AB899E_m4A0416374498BDA042B8EB21E49B72326D6CE5F4_RuntimeMethod_var, (ES3Reader_t2780AF8AA61DA2A817115CEF8612AC0E494D03C9 *)L_58, (ES3Type_t8FBECB7AE75168648B9524E0C2A38DAD4555421D *)L_59);
		TrailModule_set_ratio_m34E63B34E7B0E8D037AD45532B2E2D5BD0750189((TrailModule_t95D15372971E64A1977B7587ABAA87B1A31EF5C8 *)(TrailModule_t95D15372971E64A1977B7587ABAA87B1A31EF5C8 *)(&V_0), (float)L_60, /*hidden argument*/NULL);
		// break;
		goto IL_038e;
	}

IL_0277:
	{
		// instance.lifetime = reader.Read<UnityEngine.ParticleSystem.MinMaxCurve>(ES3Type_MinMaxCurve.Instance);
		ES3Reader_t2780AF8AA61DA2A817115CEF8612AC0E494D03C9 * L_61 = ___reader0;
		IL2CPP_RUNTIME_CLASS_INIT(ES3Type_MinMaxCurve_tC5342BF0F8735B85CB5E16FDD4C6FACC8AFAD3B7_il2cpp_TypeInfo_var);
		ES3Type_t8FBECB7AE75168648B9524E0C2A38DAD4555421D * L_62 = ((ES3Type_MinMaxCurve_tC5342BF0F8735B85CB5E16FDD4C6FACC8AFAD3B7_StaticFields*)il2cpp_codegen_static_fields_for(ES3Type_MinMaxCurve_tC5342BF0F8735B85CB5E16FDD4C6FACC8AFAD3B7_il2cpp_TypeInfo_var))->get_Instance_12();
		NullCheck((ES3Reader_t2780AF8AA61DA2A817115CEF8612AC0E494D03C9 *)L_61);
		MinMaxCurve_tF036239442AB2D438B1EDABEBC785426871084CD  L_63;
		L_63 = GenericVirtFuncInvoker1< MinMaxCurve_tF036239442AB2D438B1EDABEBC785426871084CD , ES3Type_t8FBECB7AE75168648B9524E0C2A38DAD4555421D * >::Invoke(ES3Reader_Read_TisMinMaxCurve_tF036239442AB2D438B1EDABEBC785426871084CD_mD285150CBFB52440643BBECB5ADF4EE8DE940535_RuntimeMethod_var, (ES3Reader_t2780AF8AA61DA2A817115CEF8612AC0E494D03C9 *)L_61, (ES3Type_t8FBECB7AE75168648B9524E0C2A38DAD4555421D *)L_62);
		TrailModule_set_lifetime_m57C898C42B9F18F5A0E88AAA7B10276CC158C39D((TrailModule_t95D15372971E64A1977B7587ABAA87B1A31EF5C8 *)(TrailModule_t95D15372971E64A1977B7587ABAA87B1A31EF5C8 *)(&V_0), (MinMaxCurve_tF036239442AB2D438B1EDABEBC785426871084CD )L_63, /*hidden argument*/NULL);
		// break;
		goto IL_038e;
	}

IL_028e:
	{
		// instance.lifetimeMultiplier = reader.Read<System.Single>(ES3Type_float.Instance);
		ES3Reader_t2780AF8AA61DA2A817115CEF8612AC0E494D03C9 * L_64 = ___reader0;
		IL2CPP_RUNTIME_CLASS_INIT(ES3Type_float_tF86B773C86731BD9AD79448B860BBB178FE77644_il2cpp_TypeInfo_var);
		ES3Type_t8FBECB7AE75168648B9524E0C2A38DAD4555421D * L_65 = ((ES3Type_float_tF86B773C86731BD9AD79448B860BBB178FE77644_StaticFields*)il2cpp_codegen_static_fields_for(ES3Type_float_tF86B773C86731BD9AD79448B860BBB178FE77644_il2cpp_TypeInfo_var))->get_Instance_12();
		NullCheck((ES3Reader_t2780AF8AA61DA2A817115CEF8612AC0E494D03C9 *)L_64);
		float L_66;
		L_66 = GenericVirtFuncInvoker1< float, ES3Type_t8FBECB7AE75168648B9524E0C2A38DAD4555421D * >::Invoke(ES3Reader_Read_TisSingle_tE07797BA3C98D4CA9B5A19413C19A76688AB899E_m4A0416374498BDA042B8EB21E49B72326D6CE5F4_RuntimeMethod_var, (ES3Reader_t2780AF8AA61DA2A817115CEF8612AC0E494D03C9 *)L_64, (ES3Type_t8FBECB7AE75168648B9524E0C2A38DAD4555421D *)L_65);
		TrailModule_set_lifetimeMultiplier_m23F95D65EE8C82152AE1CF2E41531EC2789A866B((TrailModule_t95D15372971E64A1977B7587ABAA87B1A31EF5C8 *)(TrailModule_t95D15372971E64A1977B7587ABAA87B1A31EF5C8 *)(&V_0), (float)L_66, /*hidden argument*/NULL);
		// break;
		goto IL_038e;
	}

IL_02a5:
	{
		// instance.minVertexDistance = reader.Read<System.Single>(ES3Type_float.Instance);
		ES3Reader_t2780AF8AA61DA2A817115CEF8612AC0E494D03C9 * L_67 = ___reader0;
		IL2CPP_RUNTIME_CLASS_INIT(ES3Type_float_tF86B773C86731BD9AD79448B860BBB178FE77644_il2cpp_TypeInfo_var);
		ES3Type_t8FBECB7AE75168648B9524E0C2A38DAD4555421D * L_68 = ((ES3Type_float_tF86B773C86731BD9AD79448B860BBB178FE77644_StaticFields*)il2cpp_codegen_static_fields_for(ES3Type_float_tF86B773C86731BD9AD79448B860BBB178FE77644_il2cpp_TypeInfo_var))->get_Instance_12();
		NullCheck((ES3Reader_t2780AF8AA61DA2A817115CEF8612AC0E494D03C9 *)L_67);
		float L_69;
		L_69 = GenericVirtFuncInvoker1< float, ES3Type_t8FBECB7AE75168648B9524E0C2A38DAD4555421D * >::Invoke(ES3Reader_Read_TisSingle_tE07797BA3C98D4CA9B5A19413C19A76688AB899E_m4A0416374498BDA042B8EB21E49B72326D6CE5F4_RuntimeMethod_var, (ES3Reader_t2780AF8AA61DA2A817115CEF8612AC0E494D03C9 *)L_67, (ES3Type_t8FBECB7AE75168648B9524E0C2A38DAD4555421D *)L_68);
		TrailModule_set_minVertexDistance_mF7C29F88FBF540CE4987F4CF9B141C624808FBC5((TrailModule_t95D15372971E64A1977B7587ABAA87B1A31EF5C8 *)(TrailModule_t95D15372971E64A1977B7587ABAA87B1A31EF5C8 *)(&V_0), (float)L_69, /*hidden argument*/NULL);
		// break;
		goto IL_038e;
	}

IL_02bc:
	{
		// instance.textureMode = reader.Read<UnityEngine.ParticleSystemTrailTextureMode>();
		ES3Reader_t2780AF8AA61DA2A817115CEF8612AC0E494D03C9 * L_70 = ___reader0;
		NullCheck((ES3Reader_t2780AF8AA61DA2A817115CEF8612AC0E494D03C9 *)L_70);
		int32_t L_71;
		L_71 = GenericVirtFuncInvoker0< int32_t >::Invoke(ES3Reader_Read_TisParticleSystemTrailTextureMode_tF3259187CA4D0A61EDB3A40E63CBF6C42641CE9F_m055DB1212E8BC34F385DF7D302F16241554E9730_RuntimeMethod_var, (ES3Reader_t2780AF8AA61DA2A817115CEF8612AC0E494D03C9 *)L_70);
		TrailModule_set_textureMode_mC1F8AE0D2965FC47BDBFF4F53E0673D5FB58CF28((TrailModule_t95D15372971E64A1977B7587ABAA87B1A31EF5C8 *)(TrailModule_t95D15372971E64A1977B7587ABAA87B1A31EF5C8 *)(&V_0), (int32_t)L_71, /*hidden argument*/NULL);
		// break;
		goto IL_038e;
	}

IL_02ce:
	{
		// instance.worldSpace = reader.Read<System.Boolean>(ES3Type_bool.Instance);
		ES3Reader_t2780AF8AA61DA2A817115CEF8612AC0E494D03C9 * L_72 = ___reader0;
		IL2CPP_RUNTIME_CLASS_INIT(ES3Type_bool_t8F309F7B9CC735FF1DEE68081B6E3CAB367745F4_il2cpp_TypeInfo_var);
		ES3Type_t8FBECB7AE75168648B9524E0C2A38DAD4555421D * L_73 = ((ES3Type_bool_t8F309F7B9CC735FF1DEE68081B6E3CAB367745F4_StaticFields*)il2cpp_codegen_static_fields_for(ES3Type_bool_t8F309F7B9CC735FF1DEE68081B6E3CAB367745F4_il2cpp_TypeInfo_var))->get_Instance_12();
		NullCheck((ES3Reader_t2780AF8AA61DA2A817115CEF8612AC0E494D03C9 *)L_72);
		bool L_74;
		L_74 = GenericVirtFuncInvoker1< bool, ES3Type_t8FBECB7AE75168648B9524E0C2A38DAD4555421D * >::Invoke(ES3Reader_Read_TisBoolean_t07D1E3F34E4813023D64F584DFF7B34C9D922F37_mC6D1B158268FF9B97822FF9F5B37FB1723FEDA22_RuntimeMethod_var, (ES3Reader_t2780AF8AA61DA2A817115CEF8612AC0E494D03C9 *)L_72, (ES3Type_t8FBECB7AE75168648B9524E0C2A38DAD4555421D *)L_73);
		TrailModule_set_worldSpace_m42A63AF4A96F24A621A29A0F35240195F0E56B1A((TrailModule_t95D15372971E64A1977B7587ABAA87B1A31EF5C8 *)(TrailModule_t95D15372971E64A1977B7587ABAA87B1A31EF5C8 *)(&V_0), (bool)L_74, /*hidden argument*/NULL);
		// break;
		goto IL_038e;
	}

IL_02e5:
	{
		// instance.dieWithParticles = reader.Read<System.Boolean>(ES3Type_bool.Instance);
		ES3Reader_t2780AF8AA61DA2A817115CEF8612AC0E494D03C9 * L_75 = ___reader0;
		IL2CPP_RUNTIME_CLASS_INIT(ES3Type_bool_t8F309F7B9CC735FF1DEE68081B6E3CAB367745F4_il2cpp_TypeInfo_var);
		ES3Type_t8FBECB7AE75168648B9524E0C2A38DAD4555421D * L_76 = ((ES3Type_bool_t8F309F7B9CC735FF1DEE68081B6E3CAB367745F4_StaticFields*)il2cpp_codegen_static_fields_for(ES3Type_bool_t8F309F7B9CC735FF1DEE68081B6E3CAB367745F4_il2cpp_TypeInfo_var))->get_Instance_12();
		NullCheck((ES3Reader_t2780AF8AA61DA2A817115CEF8612AC0E494D03C9 *)L_75);
		bool L_77;
		L_77 = GenericVirtFuncInvoker1< bool, ES3Type_t8FBECB7AE75168648B9524E0C2A38DAD4555421D * >::Invoke(ES3Reader_Read_TisBoolean_t07D1E3F34E4813023D64F584DFF7B34C9D922F37_mC6D1B158268FF9B97822FF9F5B37FB1723FEDA22_RuntimeMethod_var, (ES3Reader_t2780AF8AA61DA2A817115CEF8612AC0E494D03C9 *)L_75, (ES3Type_t8FBECB7AE75168648B9524E0C2A38DAD4555421D *)L_76);
		TrailModule_set_dieWithParticles_mB7C4E8DC2F908FDF6D57A77B54B821E360D8DA99((TrailModule_t95D15372971E64A1977B7587ABAA87B1A31EF5C8 *)(TrailModule_t95D15372971E64A1977B7587ABAA87B1A31EF5C8 *)(&V_0), (bool)L_77, /*hidden argument*/NULL);
		// break;
		goto IL_038e;
	}

IL_02fc:
	{
		// instance.sizeAffectsWidth = reader.Read<System.Boolean>(ES3Type_bool.Instance);
		ES3Reader_t2780AF8AA61DA2A817115CEF8612AC0E494D03C9 * L_78 = ___reader0;
		IL2CPP_RUNTIME_CLASS_INIT(ES3Type_bool_t8F309F7B9CC735FF1DEE68081B6E3CAB367745F4_il2cpp_TypeInfo_var);
		ES3Type_t8FBECB7AE75168648B9524E0C2A38DAD4555421D * L_79 = ((ES3Type_bool_t8F309F7B9CC735FF1DEE68081B6E3CAB367745F4_StaticFields*)il2cpp_codegen_static_fields_for(ES3Type_bool_t8F309F7B9CC735FF1DEE68081B6E3CAB367745F4_il2cpp_TypeInfo_var))->get_Instance_12();
		NullCheck((ES3Reader_t2780AF8AA61DA2A817115CEF8612AC0E494D03C9 *)L_78);
		bool L_80;
		L_80 = GenericVirtFuncInvoker1< bool, ES3Type_t8FBECB7AE75168648B9524E0C2A38DAD4555421D * >::Invoke(ES3Reader_Read_TisBoolean_t07D1E3F34E4813023D64F584DFF7B34C9D922F37_mC6D1B158268FF9B97822FF9F5B37FB1723FEDA22_RuntimeMethod_var, (ES3Reader_t2780AF8AA61DA2A817115CEF8612AC0E494D03C9 *)L_78, (ES3Type_t8FBECB7AE75168648B9524E0C2A38DAD4555421D *)L_79);
		TrailModule_set_sizeAffectsWidth_m3517856E39080DA69B447499C8846D2491B0ABF0((TrailModule_t95D15372971E64A1977B7587ABAA87B1A31EF5C8 *)(TrailModule_t95D15372971E64A1977B7587ABAA87B1A31EF5C8 *)(&V_0), (bool)L_80, /*hidden argument*/NULL);
		// break;
		goto IL_038e;
	}

IL_0310:
	{
		// instance.sizeAffectsLifetime = reader.Read<System.Boolean>(ES3Type_bool.Instance);
		ES3Reader_t2780AF8AA61DA2A817115CEF8612AC0E494D03C9 * L_81 = ___reader0;
		IL2CPP_RUNTIME_CLASS_INIT(ES3Type_bool_t8F309F7B9CC735FF1DEE68081B6E3CAB367745F4_il2cpp_TypeInfo_var);
		ES3Type_t8FBECB7AE75168648B9524E0C2A38DAD4555421D * L_82 = ((ES3Type_bool_t8F309F7B9CC735FF1DEE68081B6E3CAB367745F4_StaticFields*)il2cpp_codegen_static_fields_for(ES3Type_bool_t8F309F7B9CC735FF1DEE68081B6E3CAB367745F4_il2cpp_TypeInfo_var))->get_Instance_12();
		NullCheck((ES3Reader_t2780AF8AA61DA2A817115CEF8612AC0E494D03C9 *)L_81);
		bool L_83;
		L_83 = GenericVirtFuncInvoker1< bool, ES3Type_t8FBECB7AE75168648B9524E0C2A38DAD4555421D * >::Invoke(ES3Reader_Read_TisBoolean_t07D1E3F34E4813023D64F584DFF7B34C9D922F37_mC6D1B158268FF9B97822FF9F5B37FB1723FEDA22_RuntimeMethod_var, (ES3Reader_t2780AF8AA61DA2A817115CEF8612AC0E494D03C9 *)L_81, (ES3Type_t8FBECB7AE75168648B9524E0C2A38DAD4555421D *)L_82);
		TrailModule_set_sizeAffectsLifetime_m98BF4A6594193D824B52D88371CF963ACBA388FD((TrailModule_t95D15372971E64A1977B7587ABAA87B1A31EF5C8 *)(TrailModule_t95D15372971E64A1977B7587ABAA87B1A31EF5C8 *)(&V_0), (bool)L_83, /*hidden argument*/NULL);
		// break;
		goto IL_038e;
	}

IL_0324:
	{
		// instance.inheritParticleColor = reader.Read<System.Boolean>(ES3Type_bool.Instance);
		ES3Reader_t2780AF8AA61DA2A817115CEF8612AC0E494D03C9 * L_84 = ___reader0;
		IL2CPP_RUNTIME_CLASS_INIT(ES3Type_bool_t8F309F7B9CC735FF1DEE68081B6E3CAB367745F4_il2cpp_TypeInfo_var);
		ES3Type_t8FBECB7AE75168648B9524E0C2A38DAD4555421D * L_85 = ((ES3Type_bool_t8F309F7B9CC735FF1DEE68081B6E3CAB367745F4_StaticFields*)il2cpp_codegen_static_fields_for(ES3Type_bool_t8F309F7B9CC735FF1DEE68081B6E3CAB367745F4_il2cpp_TypeInfo_var))->get_Instance_12();
		NullCheck((ES3Reader_t2780AF8AA61DA2A817115CEF8612AC0E494D03C9 *)L_84);
		bool L_86;
		L_86 = GenericVirtFuncInvoker1< bool, ES3Type_t8FBECB7AE75168648B9524E0C2A38DAD4555421D * >::Invoke(ES3Reader_Read_TisBoolean_t07D1E3F34E4813023D64F584DFF7B34C9D922F37_mC6D1B158268FF9B97822FF9F5B37FB1723FEDA22_RuntimeMethod_var, (ES3Reader_t2780AF8AA61DA2A817115CEF8612AC0E494D03C9 *)L_84, (ES3Type_t8FBECB7AE75168648B9524E0C2A38DAD4555421D *)L_85);
		TrailModule_set_inheritParticleColor_mCD83E87B5E00F2BFFBE08AD2D1D68606283A4FEE((TrailModule_t95D15372971E64A1977B7587ABAA87B1A31EF5C8 *)(TrailModule_t95D15372971E64A1977B7587ABAA87B1A31EF5C8 *)(&V_0), (bool)L_86, /*hidden argument*/NULL);
		// break;
		goto IL_038e;
	}

IL_0338:
	{
		// instance.colorOverLifetime = reader.Read<UnityEngine.ParticleSystem.MinMaxGradient>(ES3Type_MinMaxGradient.Instance);
		ES3Reader_t2780AF8AA61DA2A817115CEF8612AC0E494D03C9 * L_87 = ___reader0;
		IL2CPP_RUNTIME_CLASS_INIT(ES3Type_MinMaxGradient_t5DD353D60E95642AB39D1C97C6FD6DD1B067D3CF_il2cpp_TypeInfo_var);
		ES3Type_t8FBECB7AE75168648B9524E0C2A38DAD4555421D * L_88 = ((ES3Type_MinMaxGradient_t5DD353D60E95642AB39D1C97C6FD6DD1B067D3CF_StaticFields*)il2cpp_codegen_static_fields_for(ES3Type_MinMaxGradient_t5DD353D60E95642AB39D1C97C6FD6DD1B067D3CF_il2cpp_TypeInfo_var))->get_Instance_12();
		NullCheck((ES3Reader_t2780AF8AA61DA2A817115CEF8612AC0E494D03C9 *)L_87);
		MinMaxGradient_tF4530B26F29D9635D670A33B9EE581EAC48C12B7  L_89;
		L_89 = GenericVirtFuncInvoker1< MinMaxGradient_tF4530B26F29D9635D670A33B9EE581EAC48C12B7 , ES3Type_t8FBECB7AE75168648B9524E0C2A38DAD4555421D * >::Invoke(ES3Reader_Read_TisMinMaxGradient_tF4530B26F29D9635D670A33B9EE581EAC48C12B7_m6A3DD8CBBAC5D32B838B6C4399009AB8AA512ACC_RuntimeMethod_var, (ES3Reader_t2780AF8AA61DA2A817115CEF8612AC0E494D03C9 *)L_87, (ES3Type_t8FBECB7AE75168648B9524E0C2A38DAD4555421D *)L_88);
		TrailModule_set_colorOverLifetime_mCD56BD4B75D3A3947069BA1B93FEC78AAE08DF27((TrailModule_t95D15372971E64A1977B7587ABAA87B1A31EF5C8 *)(TrailModule_t95D15372971E64A1977B7587ABAA87B1A31EF5C8 *)(&V_0), (MinMaxGradient_tF4530B26F29D9635D670A33B9EE581EAC48C12B7 )L_89, /*hidden argument*/NULL);
		// break;
		goto IL_038e;
	}

IL_034c:
	{
		// instance.widthOverTrail = reader.Read<UnityEngine.ParticleSystem.MinMaxCurve>(ES3Type_MinMaxCurve.Instance);
		ES3Reader_t2780AF8AA61DA2A817115CEF8612AC0E494D03C9 * L_90 = ___reader0;
		IL2CPP_RUNTIME_CLASS_INIT(ES3Type_MinMaxCurve_tC5342BF0F8735B85CB5E16FDD4C6FACC8AFAD3B7_il2cpp_TypeInfo_var);
		ES3Type_t8FBECB7AE75168648B9524E0C2A38DAD4555421D * L_91 = ((ES3Type_MinMaxCurve_tC5342BF0F8735B85CB5E16FDD4C6FACC8AFAD3B7_StaticFields*)il2cpp_codegen_static_fields_for(ES3Type_MinMaxCurve_tC5342BF0F8735B85CB5E16FDD4C6FACC8AFAD3B7_il2cpp_TypeInfo_var))->get_Instance_12();
		NullCheck((ES3Reader_t2780AF8AA61DA2A817115CEF8612AC0E494D03C9 *)L_90);
		MinMaxCurve_tF036239442AB2D438B1EDABEBC785426871084CD  L_92;
		L_92 = GenericVirtFuncInvoker1< MinMaxCurve_tF036239442AB2D438B1EDABEBC785426871084CD , ES3Type_t8FBECB7AE75168648B9524E0C2A38DAD4555421D * >::Invoke(ES3Reader_Read_TisMinMaxCurve_tF036239442AB2D438B1EDABEBC785426871084CD_mD285150CBFB52440643BBECB5ADF4EE8DE940535_RuntimeMethod_var, (ES3Reader_t2780AF8AA61DA2A817115CEF8612AC0E494D03C9 *)L_90, (ES3Type_t8FBECB7AE75168648B9524E0C2A38DAD4555421D *)L_91);
		TrailModule_set_widthOverTrail_m6C0A896EBFDED7CE46344B3A0B04212934F30DE1((TrailModule_t95D15372971E64A1977B7587ABAA87B1A31EF5C8 *)(TrailModule_t95D15372971E64A1977B7587ABAA87B1A31EF5C8 *)(&V_0), (MinMaxCurve_tF036239442AB2D438B1EDABEBC785426871084CD )L_92, /*hidden argument*/NULL);
		// break;
		goto IL_038e;
	}

IL_0360:
	{
		// instance.widthOverTrailMultiplier = reader.Read<System.Single>(ES3Type_float.Instance);
		ES3Reader_t2780AF8AA61DA2A817115CEF8612AC0E494D03C9 * L_93 = ___reader0;
		IL2CPP_RUNTIME_CLASS_INIT(ES3Type_float_tF86B773C86731BD9AD79448B860BBB178FE77644_il2cpp_TypeInfo_var);
		ES3Type_t8FBECB7AE75168648B9524E0C2A38DAD4555421D * L_94 = ((ES3Type_float_tF86B773C86731BD9AD79448B860BBB178FE77644_StaticFields*)il2cpp_codegen_static_fields_for(ES3Type_float_tF86B773C86731BD9AD79448B860BBB178FE77644_il2cpp_TypeInfo_var))->get_Instance_12();
		NullCheck((ES3Reader_t2780AF8AA61DA2A817115CEF8612AC0E494D03C9 *)L_93);
		float L_95;
		L_95 = GenericVirtFuncInvoker1< float, ES3Type_t8FBECB7AE75168648B9524E0C2A38DAD4555421D * >::Invoke(ES3Reader_Read_TisSingle_tE07797BA3C98D4CA9B5A19413C19A76688AB899E_m4A0416374498BDA042B8EB21E49B72326D6CE5F4_RuntimeMethod_var, (ES3Reader_t2780AF8AA61DA2A817115CEF8612AC0E494D03C9 *)L_93, (ES3Type_t8FBECB7AE75168648B9524E0C2A38DAD4555421D *)L_94);
		TrailModule_set_widthOverTrailMultiplier_m6A7EA2856CF30B710CCB528EA3EBFD1799C19BD4((TrailModule_t95D15372971E64A1977B7587ABAA87B1A31EF5C8 *)(TrailModule_t95D15372971E64A1977B7587ABAA87B1A31EF5C8 *)(&V_0), (float)L_95, /*hidden argument*/NULL);
		// break;
		goto IL_038e;
	}

IL_0374:
	{
		// instance.colorOverTrail = reader.Read<UnityEngine.ParticleSystem.MinMaxGradient>(ES3Type_MinMaxGradient.Instance);
		ES3Reader_t2780AF8AA61DA2A817115CEF8612AC0E494D03C9 * L_96 = ___reader0;
		IL2CPP_RUNTIME_CLASS_INIT(ES3Type_MinMaxGradient_t5DD353D60E95642AB39D1C97C6FD6DD1B067D3CF_il2cpp_TypeInfo_var);
		ES3Type_t8FBECB7AE75168648B9524E0C2A38DAD4555421D * L_97 = ((ES3Type_MinMaxGradient_t5DD353D60E95642AB39D1C97C6FD6DD1B067D3CF_StaticFields*)il2cpp_codegen_static_fields_for(ES3Type_MinMaxGradient_t5DD353D60E95642AB39D1C97C6FD6DD1B067D3CF_il2cpp_TypeInfo_var))->get_Instance_12();
		NullCheck((ES3Reader_t2780AF8AA61DA2A817115CEF8612AC0E494D03C9 *)L_96);
		MinMaxGradient_tF4530B26F29D9635D670A33B9EE581EAC48C12B7  L_98;
		L_98 = GenericVirtFuncInvoker1< MinMaxGradient_tF4530B26F29D9635D670A33B9EE581EAC48C12B7 , ES3Type_t8FBECB7AE75168648B9524E0C2A38DAD4555421D * >::Invoke(ES3Reader_Read_TisMinMaxGradient_tF4530B26F29D9635D670A33B9EE581EAC48C12B7_m6A3DD8CBBAC5D32B838B6C4399009AB8AA512ACC_RuntimeMethod_var, (ES3Reader_t2780AF8AA61DA2A817115CEF8612AC0E494D03C9 *)L_96, (ES3Type_t8FBECB7AE75168648B9524E0C2A38DAD4555421D *)L_97);
		TrailModule_set_colorOverTrail_m8440C6574C8310292B93D70EA4FE3EE8C40DF8DB((TrailModule_t95D15372971E64A1977B7587ABAA87B1A31EF5C8 *)(TrailModule_t95D15372971E64A1977B7587ABAA87B1A31EF5C8 *)(&V_0), (MinMaxGradient_tF4530B26F29D9635D670A33B9EE581EAC48C12B7 )L_98, /*hidden argument*/NULL);
		// break;
		goto IL_038e;
	}

IL_0388:
	{
		// reader.Skip();
		ES3Reader_t2780AF8AA61DA2A817115CEF8612AC0E494D03C9 * L_99 = ___reader0;
		NullCheck((ES3Reader_t2780AF8AA61DA2A817115CEF8612AC0E494D03C9 *)L_99);
		VirtActionInvoker0::Invoke(41 /* System.Void ES3Reader::Skip() */, (ES3Reader_t2780AF8AA61DA2A817115CEF8612AC0E494D03C9 *)L_99);
	}

IL_038e:
	{
		// while((propertyName = reader.ReadPropertyName()) != null)
		ES3Reader_t2780AF8AA61DA2A817115CEF8612AC0E494D03C9 * L_100 = ___reader0;
		NullCheck((ES3Reader_t2780AF8AA61DA2A817115CEF8612AC0E494D03C9 *)L_100);
		String_t* L_101;
		L_101 = VirtFuncInvoker0< String_t* >::Invoke(21 /* System.String ES3Reader::ReadPropertyName() */, (ES3Reader_t2780AF8AA61DA2A817115CEF8612AC0E494D03C9 *)L_100);
		String_t* L_102 = (String_t*)L_101;
		V_1 = (String_t*)L_102;
		if (L_102)
		{
			goto IL_000c;
		}
	}
	{
		// }
		return;
	}
}
// System.Void ES3Types.ES3Type_TrailModule::ReadInto<UnityEngine.ParticleSystem/CollisionModule>(ES3Reader,System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ES3Type_TrailModule_ReadInto_TisCollisionModule_t2018942ABE80D7FE280ADCE09399C56FF1BA8E09_m4F0B1A43914CFA062D41D74935035F5DDF851426_gshared (ES3Type_TrailModule_tC773F73EC0443516DD128FF2B5AE010809742462 * __this, ES3Reader_t2780AF8AA61DA2A817115CEF8612AC0E494D03C9 * ___reader0, RuntimeObject * ___obj1, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ES3Reader_Read_TisBoolean_t07D1E3F34E4813023D64F584DFF7B34C9D922F37_mC6D1B158268FF9B97822FF9F5B37FB1723FEDA22_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ES3Reader_Read_TisMinMaxCurve_tF036239442AB2D438B1EDABEBC785426871084CD_mD285150CBFB52440643BBECB5ADF4EE8DE940535_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ES3Reader_Read_TisMinMaxGradient_tF4530B26F29D9635D670A33B9EE581EAC48C12B7_m6A3DD8CBBAC5D32B838B6C4399009AB8AA512ACC_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ES3Reader_Read_TisParticleSystemTrailTextureMode_tF3259187CA4D0A61EDB3A40E63CBF6C42641CE9F_m055DB1212E8BC34F385DF7D302F16241554E9730_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ES3Reader_Read_TisSingle_tE07797BA3C98D4CA9B5A19413C19A76688AB899E_m4A0416374498BDA042B8EB21E49B72326D6CE5F4_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ES3Type_MinMaxCurve_tC5342BF0F8735B85CB5E16FDD4C6FACC8AFAD3B7_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ES3Type_MinMaxGradient_t5DD353D60E95642AB39D1C97C6FD6DD1B067D3CF_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ES3Type_bool_t8F309F7B9CC735FF1DEE68081B6E3CAB367745F4_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ES3Type_float_tF86B773C86731BD9AD79448B860BBB178FE77644_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&TrailModule_t95D15372971E64A1977B7587ABAA87B1A31EF5C8_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral1D87A56AE67B2CD49CAE6E942C2FB7AD98925C00);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral354281948B6269615E32D856CF85B6F456724DAA);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral4221314F268D184F46688D45C85446821F1F1BC3);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral47C47DD09640803AD8016748EAE1F04DD1D41119);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral5C86338F177203D001C41D9C348A83D1338CC7D0);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral60126327537B7B8E6EE33C43FE0C5CA8BCC3A06A);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral87F70660D62DE5FC257FBADE9DA4EC9188597DE5);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralA967787586EC9E5A17A9C55E2002AB73A5E21A0A);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralADAEB0839588196B349BDB6CF33AFA3E0736360B);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralBE2893848F9FC647C2288DA6581A1522E9695182);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralBF540D6548854CC21630064FBA5390C9409C86F0);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralC580B374AA991574F91DFC86C068E7FAD661A3A4);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralE049DB547285CFCE1CB9A95934B6B6DCE2D219EC);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralF9D225733E1D10F9344C755C4A9C0870CD1DE97B);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralFE5F89F63E2381500F62A7CBD6954563BE44562F);
		s_Il2CppMethodInitialized = true;
	}
	TrailModule_t95D15372971E64A1977B7587ABAA87B1A31EF5C8  V_0;
	memset((&V_0), 0, sizeof(V_0));
	String_t* V_1 = NULL;
	uint32_t V_2 = 0;
	{
		// var instance = (UnityEngine.ParticleSystem.TrailModule)obj;
		RuntimeObject * L_0 = ___obj1;
		V_0 = (TrailModule_t95D15372971E64A1977B7587ABAA87B1A31EF5C8 )((*(TrailModule_t95D15372971E64A1977B7587ABAA87B1A31EF5C8 *)((TrailModule_t95D15372971E64A1977B7587ABAA87B1A31EF5C8 *)UnBox(L_0, TrailModule_t95D15372971E64A1977B7587ABAA87B1A31EF5C8_il2cpp_TypeInfo_var))));
		goto IL_038e;
	}

IL_000c:
	{
		String_t* L_1 = V_1;
		if (!L_1)
		{
			goto IL_0388;
		}
	}
	{
		String_t* L_2 = V_1;
		uint32_t L_3;
		L_3 = U3CPrivateImplementationDetailsU3E_ComputeStringHash_m3ADC1F612F9EE3DD518E6F0023A0DE0EE2B120A7((String_t*)L_2, /*hidden argument*/NULL);
		V_2 = (uint32_t)L_3;
		uint32_t L_4 = V_2;
		if ((!(((uint32_t)L_4) <= ((uint32_t)((int32_t)1376955374)))))
		{
			goto IL_008d;
		}
	}
	{
		uint32_t L_5 = V_2;
		if ((!(((uint32_t)L_5) <= ((uint32_t)((int32_t)494095910)))))
		{
			goto IL_004f;
		}
	}
	{
		uint32_t L_6 = V_2;
		if ((((int32_t)L_6) == ((int32_t)((int32_t)49525662))))
		{
			goto IL_010e;
		}
	}
	{
		uint32_t L_7 = V_2;
		if ((((int32_t)L_7) == ((int32_t)((int32_t)341298456))))
		{
			goto IL_021f;
		}
	}
	{
		uint32_t L_8 = V_2;
		if ((((int32_t)L_8) == ((int32_t)((int32_t)494095910))))
		{
			goto IL_0234;
		}
	}
	{
		goto IL_0388;
	}

IL_004f:
	{
		uint32_t L_9 = V_2;
		if ((!(((uint32_t)L_9) <= ((uint32_t)((int32_t)973733911)))))
		{
			goto IL_0072;
		}
	}
	{
		uint32_t L_10 = V_2;
		if ((((int32_t)L_10) == ((int32_t)((int32_t)559929418))))
		{
			goto IL_01b6;
		}
	}
	{
		uint32_t L_11 = V_2;
		if ((((int32_t)L_11) == ((int32_t)((int32_t)973733911))))
		{
			goto IL_0177;
		}
	}
	{
		goto IL_0388;
	}

IL_0072:
	{
		uint32_t L_12 = V_2;
		if ((((int32_t)L_12) == ((int32_t)((int32_t)1024708593))))
		{
			goto IL_014d;
		}
	}
	{
		uint32_t L_13 = V_2;
		if ((((int32_t)L_13) == ((int32_t)((int32_t)1376955374))))
		{
			goto IL_0138;
		}
	}
	{
		goto IL_0388;
	}

IL_008d:
	{
		uint32_t L_14 = V_2;
		if ((!(((uint32_t)L_14) <= ((uint32_t)((int32_t)-2100707162)))))
		{
			goto IL_00d3;
		}
	}
	{
		uint32_t L_15 = V_2;
		if ((!(((uint32_t)L_15) <= ((uint32_t)((int32_t)1975189197)))))
		{
			goto IL_00b8;
		}
	}
	{
		uint32_t L_16 = V_2;
		if ((((int32_t)L_16) == ((int32_t)((int32_t)1546474083))))
		{
			goto IL_020a;
		}
	}
	{
		uint32_t L_17 = V_2;
		if ((((int32_t)L_17) == ((int32_t)((int32_t)1975189197))))
		{
			goto IL_01cb;
		}
	}
	{
		goto IL_0388;
	}

IL_00b8:
	{
		uint32_t L_18 = V_2;
		if ((((int32_t)L_18) == ((int32_t)((int32_t)2053023684))))
		{
			goto IL_01a1;
		}
	}
	{
		uint32_t L_19 = V_2;
		if ((((int32_t)L_19) == ((int32_t)((int32_t)-2100707162))))
		{
			goto IL_0162;
		}
	}
	{
		goto IL_0388;
	}

IL_00d3:
	{
		uint32_t L_20 = V_2;
		if ((!(((uint32_t)L_20) <= ((uint32_t)((int32_t)-1319579393)))))
		{
			goto IL_00f6;
		}
	}
	{
		uint32_t L_21 = V_2;
		if ((((int32_t)L_21) == ((int32_t)((int32_t)-1562862963))))
		{
			goto IL_01e0;
		}
	}
	{
		uint32_t L_22 = V_2;
		if ((((int32_t)L_22) == ((int32_t)((int32_t)-1319579393))))
		{
			goto IL_018c;
		}
	}
	{
		goto IL_0388;
	}

IL_00f6:
	{
		uint32_t L_23 = V_2;
		if ((((int32_t)L_23) == ((int32_t)((int32_t)-1055777148))))
		{
			goto IL_0123;
		}
	}
	{
		uint32_t L_24 = V_2;
		if ((((int32_t)L_24) == ((int32_t)((int32_t)-413379935))))
		{
			goto IL_01f5;
		}
	}
	{
		goto IL_0388;
	}

IL_010e:
	{
		String_t* L_25 = V_1;
		bool L_26;
		L_26 = String_op_Equality_m50B3548E4AC232558190B0052877B290AA1D436A((String_t*)L_25, (String_t*)_stringLiteralF9D225733E1D10F9344C755C4A9C0870CD1DE97B, /*hidden argument*/NULL);
		if (L_26)
		{
			goto IL_0249;
		}
	}
	{
		goto IL_0388;
	}

IL_0123:
	{
		String_t* L_27 = V_1;
		bool L_28;
		L_28 = String_op_Equality_m50B3548E4AC232558190B0052877B290AA1D436A((String_t*)L_27, (String_t*)_stringLiteral60126327537B7B8E6EE33C43FE0C5CA8BCC3A06A, /*hidden argument*/NULL);
		if (L_28)
		{
			goto IL_0260;
		}
	}
	{
		goto IL_0388;
	}

IL_0138:
	{
		String_t* L_29 = V_1;
		bool L_30;
		L_30 = String_op_Equality_m50B3548E4AC232558190B0052877B290AA1D436A((String_t*)L_29, (String_t*)_stringLiteralBE2893848F9FC647C2288DA6581A1522E9695182, /*hidden argument*/NULL);
		if (L_30)
		{
			goto IL_0277;
		}
	}
	{
		goto IL_0388;
	}

IL_014d:
	{
		String_t* L_31 = V_1;
		bool L_32;
		L_32 = String_op_Equality_m50B3548E4AC232558190B0052877B290AA1D436A((String_t*)L_31, (String_t*)_stringLiteral4221314F268D184F46688D45C85446821F1F1BC3, /*hidden argument*/NULL);
		if (L_32)
		{
			goto IL_028e;
		}
	}
	{
		goto IL_0388;
	}

IL_0162:
	{
		String_t* L_33 = V_1;
		bool L_34;
		L_34 = String_op_Equality_m50B3548E4AC232558190B0052877B290AA1D436A((String_t*)L_33, (String_t*)_stringLiteral5C86338F177203D001C41D9C348A83D1338CC7D0, /*hidden argument*/NULL);
		if (L_34)
		{
			goto IL_02a5;
		}
	}
	{
		goto IL_0388;
	}

IL_0177:
	{
		String_t* L_35 = V_1;
		bool L_36;
		L_36 = String_op_Equality_m50B3548E4AC232558190B0052877B290AA1D436A((String_t*)L_35, (String_t*)_stringLiteralFE5F89F63E2381500F62A7CBD6954563BE44562F, /*hidden argument*/NULL);
		if (L_36)
		{
			goto IL_02bc;
		}
	}
	{
		goto IL_0388;
	}

IL_018c:
	{
		String_t* L_37 = V_1;
		bool L_38;
		L_38 = String_op_Equality_m50B3548E4AC232558190B0052877B290AA1D436A((String_t*)L_37, (String_t*)_stringLiteral87F70660D62DE5FC257FBADE9DA4EC9188597DE5, /*hidden argument*/NULL);
		if (L_38)
		{
			goto IL_02ce;
		}
	}
	{
		goto IL_0388;
	}

IL_01a1:
	{
		String_t* L_39 = V_1;
		bool L_40;
		L_40 = String_op_Equality_m50B3548E4AC232558190B0052877B290AA1D436A((String_t*)L_39, (String_t*)_stringLiteral354281948B6269615E32D856CF85B6F456724DAA, /*hidden argument*/NULL);
		if (L_40)
		{
			goto IL_02e5;
		}
	}
	{
		goto IL_0388;
	}

IL_01b6:
	{
		String_t* L_41 = V_1;
		bool L_42;
		L_42 = String_op_Equality_m50B3548E4AC232558190B0052877B290AA1D436A((String_t*)L_41, (String_t*)_stringLiteralADAEB0839588196B349BDB6CF33AFA3E0736360B, /*hidden argument*/NULL);
		if (L_42)
		{
			goto IL_02fc;
		}
	}
	{
		goto IL_0388;
	}

IL_01cb:
	{
		String_t* L_43 = V_1;
		bool L_44;
		L_44 = String_op_Equality_m50B3548E4AC232558190B0052877B290AA1D436A((String_t*)L_43, (String_t*)_stringLiteralC580B374AA991574F91DFC86C068E7FAD661A3A4, /*hidden argument*/NULL);
		if (L_44)
		{
			goto IL_0310;
		}
	}
	{
		goto IL_0388;
	}

IL_01e0:
	{
		String_t* L_45 = V_1;
		bool L_46;
		L_46 = String_op_Equality_m50B3548E4AC232558190B0052877B290AA1D436A((String_t*)L_45, (String_t*)_stringLiteralE049DB547285CFCE1CB9A95934B6B6DCE2D219EC, /*hidden argument*/NULL);
		if (L_46)
		{
			goto IL_0324;
		}
	}
	{
		goto IL_0388;
	}

IL_01f5:
	{
		String_t* L_47 = V_1;
		bool L_48;
		L_48 = String_op_Equality_m50B3548E4AC232558190B0052877B290AA1D436A((String_t*)L_47, (String_t*)_stringLiteralBF540D6548854CC21630064FBA5390C9409C86F0, /*hidden argument*/NULL);
		if (L_48)
		{
			goto IL_0338;
		}
	}
	{
		goto IL_0388;
	}

IL_020a:
	{
		String_t* L_49 = V_1;
		bool L_50;
		L_50 = String_op_Equality_m50B3548E4AC232558190B0052877B290AA1D436A((String_t*)L_49, (String_t*)_stringLiteral1D87A56AE67B2CD49CAE6E942C2FB7AD98925C00, /*hidden argument*/NULL);
		if (L_50)
		{
			goto IL_034c;
		}
	}
	{
		goto IL_0388;
	}

IL_021f:
	{
		String_t* L_51 = V_1;
		bool L_52;
		L_52 = String_op_Equality_m50B3548E4AC232558190B0052877B290AA1D436A((String_t*)L_51, (String_t*)_stringLiteralA967787586EC9E5A17A9C55E2002AB73A5E21A0A, /*hidden argument*/NULL);
		if (L_52)
		{
			goto IL_0360;
		}
	}
	{
		goto IL_0388;
	}

IL_0234:
	{
		String_t* L_53 = V_1;
		bool L_54;
		L_54 = String_op_Equality_m50B3548E4AC232558190B0052877B290AA1D436A((String_t*)L_53, (String_t*)_stringLiteral47C47DD09640803AD8016748EAE1F04DD1D41119, /*hidden argument*/NULL);
		if (L_54)
		{
			goto IL_0374;
		}
	}
	{
		goto IL_0388;
	}

IL_0249:
	{
		// instance.enabled = reader.Read<System.Boolean>(ES3Type_bool.Instance);
		ES3Reader_t2780AF8AA61DA2A817115CEF8612AC0E494D03C9 * L_55 = ___reader0;
		IL2CPP_RUNTIME_CLASS_INIT(ES3Type_bool_t8F309F7B9CC735FF1DEE68081B6E3CAB367745F4_il2cpp_TypeInfo_var);
		ES3Type_t8FBECB7AE75168648B9524E0C2A38DAD4555421D * L_56 = ((ES3Type_bool_t8F309F7B9CC735FF1DEE68081B6E3CAB367745F4_StaticFields*)il2cpp_codegen_static_fields_for(ES3Type_bool_t8F309F7B9CC735FF1DEE68081B6E3CAB367745F4_il2cpp_TypeInfo_var))->get_Instance_12();
		NullCheck((ES3Reader_t2780AF8AA61DA2A817115CEF8612AC0E494D03C9 *)L_55);
		bool L_57;
		L_57 = GenericVirtFuncInvoker1< bool, ES3Type_t8FBECB7AE75168648B9524E0C2A38DAD4555421D * >::Invoke(ES3Reader_Read_TisBoolean_t07D1E3F34E4813023D64F584DFF7B34C9D922F37_mC6D1B158268FF9B97822FF9F5B37FB1723FEDA22_RuntimeMethod_var, (ES3Reader_t2780AF8AA61DA2A817115CEF8612AC0E494D03C9 *)L_55, (ES3Type_t8FBECB7AE75168648B9524E0C2A38DAD4555421D *)L_56);
		TrailModule_set_enabled_mFC8451DDDF40CCBB3E32A4B30A001115F6346894((TrailModule_t95D15372971E64A1977B7587ABAA87B1A31EF5C8 *)(TrailModule_t95D15372971E64A1977B7587ABAA87B1A31EF5C8 *)(&V_0), (bool)L_57, /*hidden argument*/NULL);
		// break;
		goto IL_038e;
	}

IL_0260:
	{
		// instance.ratio = reader.Read<System.Single>(ES3Type_float.Instance);
		ES3Reader_t2780AF8AA61DA2A817115CEF8612AC0E494D03C9 * L_58 = ___reader0;
		IL2CPP_RUNTIME_CLASS_INIT(ES3Type_float_tF86B773C86731BD9AD79448B860BBB178FE77644_il2cpp_TypeInfo_var);
		ES3Type_t8FBECB7AE75168648B9524E0C2A38DAD4555421D * L_59 = ((ES3Type_float_tF86B773C86731BD9AD79448B860BBB178FE77644_StaticFields*)il2cpp_codegen_static_fields_for(ES3Type_float_tF86B773C86731BD9AD79448B860BBB178FE77644_il2cpp_TypeInfo_var))->get_Instance_12();
		NullCheck((ES3Reader_t2780AF8AA61DA2A817115CEF8612AC0E494D03C9 *)L_58);
		float L_60;
		L_60 = GenericVirtFuncInvoker1< float, ES3Type_t8FBECB7AE75168648B9524E0C2A38DAD4555421D * >::Invoke(ES3Reader_Read_TisSingle_tE07797BA3C98D4CA9B5A19413C19A76688AB899E_m4A0416374498BDA042B8EB21E49B72326D6CE5F4_RuntimeMethod_var, (ES3Reader_t2780AF8AA61DA2A817115CEF8612AC0E494D03C9 *)L_58, (ES3Type_t8FBECB7AE75168648B9524E0C2A38DAD4555421D *)L_59);
		TrailModule_set_ratio_m34E63B34E7B0E8D037AD45532B2E2D5BD0750189((TrailModule_t95D15372971E64A1977B7587ABAA87B1A31EF5C8 *)(TrailModule_t95D15372971E64A1977B7587ABAA87B1A31EF5C8 *)(&V_0), (float)L_60, /*hidden argument*/NULL);
		// break;
		goto IL_038e;
	}

IL_0277:
	{
		// instance.lifetime = reader.Read<UnityEngine.ParticleSystem.MinMaxCurve>(ES3Type_MinMaxCurve.Instance);
		ES3Reader_t2780AF8AA61DA2A817115CEF8612AC0E494D03C9 * L_61 = ___reader0;
		IL2CPP_RUNTIME_CLASS_INIT(ES3Type_MinMaxCurve_tC5342BF0F8735B85CB5E16FDD4C6FACC8AFAD3B7_il2cpp_TypeInfo_var);
		ES3Type_t8FBECB7AE75168648B9524E0C2A38DAD4555421D * L_62 = ((ES3Type_MinMaxCurve_tC5342BF0F8735B85CB5E16FDD4C6FACC8AFAD3B7_StaticFields*)il2cpp_codegen_static_fields_for(ES3Type_MinMaxCurve_tC5342BF0F8735B85CB5E16FDD4C6FACC8AFAD3B7_il2cpp_TypeInfo_var))->get_Instance_12();
		NullCheck((ES3Reader_t2780AF8AA61DA2A817115CEF8612AC0E494D03C9 *)L_61);
		MinMaxCurve_tF036239442AB2D438B1EDABEBC785426871084CD  L_63;
		L_63 = GenericVirtFuncInvoker1< MinMaxCurve_tF036239442AB2D438B1EDABEBC785426871084CD , ES3Type_t8FBECB7AE75168648B9524E0C2A38DAD4555421D * >::Invoke(ES3Reader_Read_TisMinMaxCurve_tF036239442AB2D438B1EDABEBC785426871084CD_mD285150CBFB52440643BBECB5ADF4EE8DE940535_RuntimeMethod_var, (ES3Reader_t2780AF8AA61DA2A817115CEF8612AC0E494D03C9 *)L_61, (ES3Type_t8FBECB7AE75168648B9524E0C2A38DAD4555421D *)L_62);
		TrailModule_set_lifetime_m57C898C42B9F18F5A0E88AAA7B10276CC158C39D((TrailModule_t95D15372971E64A1977B7587ABAA87B1A31EF5C8 *)(TrailModule_t95D15372971E64A1977B7587ABAA87B1A31EF5C8 *)(&V_0), (MinMaxCurve_tF036239442AB2D438B1EDABEBC785426871084CD )L_63, /*hidden argument*/NULL);
		// break;
		goto IL_038e;
	}

IL_028e:
	{
		// instance.lifetimeMultiplier = reader.Read<System.Single>(ES3Type_float.Instance);
		ES3Reader_t2780AF8AA61DA2A817115CEF8612AC0E494D03C9 * L_64 = ___reader0;
		IL2CPP_RUNTIME_CLASS_INIT(ES3Type_float_tF86B773C86731BD9AD79448B860BBB178FE77644_il2cpp_TypeInfo_var);
		ES3Type_t8FBECB7AE75168648B9524E0C2A38DAD4555421D * L_65 = ((ES3Type_float_tF86B773C86731BD9AD79448B860BBB178FE77644_StaticFields*)il2cpp_codegen_static_fields_for(ES3Type_float_tF86B773C86731BD9AD79448B860BBB178FE77644_il2cpp_TypeInfo_var))->get_Instance_12();
		NullCheck((ES3Reader_t2780AF8AA61DA2A817115CEF8612AC0E494D03C9 *)L_64);
		float L_66;
		L_66 = GenericVirtFuncInvoker1< float, ES3Type_t8FBECB7AE75168648B9524E0C2A38DAD4555421D * >::Invoke(ES3Reader_Read_TisSingle_tE07797BA3C98D4CA9B5A19413C19A76688AB899E_m4A0416374498BDA042B8EB21E49B72326D6CE5F4_RuntimeMethod_var, (ES3Reader_t2780AF8AA61DA2A817115CEF8612AC0E494D03C9 *)L_64, (ES3Type_t8FBECB7AE75168648B9524E0C2A38DAD4555421D *)L_65);
		TrailModule_set_lifetimeMultiplier_m23F95D65EE8C82152AE1CF2E41531EC2789A866B((TrailModule_t95D15372971E64A1977B7587ABAA87B1A31EF5C8 *)(TrailModule_t95D15372971E64A1977B7587ABAA87B1A31EF5C8 *)(&V_0), (float)L_66, /*hidden argument*/NULL);
		// break;
		goto IL_038e;
	}

IL_02a5:
	{
		// instance.minVertexDistance = reader.Read<System.Single>(ES3Type_float.Instance);
		ES3Reader_t2780AF8AA61DA2A817115CEF8612AC0E494D03C9 * L_67 = ___reader0;
		IL2CPP_RUNTIME_CLASS_INIT(ES3Type_float_tF86B773C86731BD9AD79448B860BBB178FE77644_il2cpp_TypeInfo_var);
		ES3Type_t8FBECB7AE75168648B9524E0C2A38DAD4555421D * L_68 = ((ES3Type_float_tF86B773C86731BD9AD79448B860BBB178FE77644_StaticFields*)il2cpp_codegen_static_fields_for(ES3Type_float_tF86B773C86731BD9AD79448B860BBB178FE77644_il2cpp_TypeInfo_var))->get_Instance_12();
		NullCheck((ES3Reader_t2780AF8AA61DA2A817115CEF8612AC0E494D03C9 *)L_67);
		float L_69;
		L_69 = GenericVirtFuncInvoker1< float, ES3Type_t8FBECB7AE75168648B9524E0C2A38DAD4555421D * >::Invoke(ES3Reader_Read_TisSingle_tE07797BA3C98D4CA9B5A19413C19A76688AB899E_m4A0416374498BDA042B8EB21E49B72326D6CE5F4_RuntimeMethod_var, (ES3Reader_t2780AF8AA61DA2A817115CEF8612AC0E494D03C9 *)L_67, (ES3Type_t8FBECB7AE75168648B9524E0C2A38DAD4555421D *)L_68);
		TrailModule_set_minVertexDistance_mF7C29F88FBF540CE4987F4CF9B141C624808FBC5((TrailModule_t95D15372971E64A1977B7587ABAA87B1A31EF5C8 *)(TrailModule_t95D15372971E64A1977B7587ABAA87B1A31EF5C8 *)(&V_0), (float)L_69, /*hidden argument*/NULL);
		// break;
		goto IL_038e;
	}

IL_02bc:
	{
		// instance.textureMode = reader.Read<UnityEngine.ParticleSystemTrailTextureMode>();
		ES3Reader_t2780AF8AA61DA2A817115CEF8612AC0E494D03C9 * L_70 = ___reader0;
		NullCheck((ES3Reader_t2780AF8AA61DA2A817115CEF8612AC0E494D03C9 *)L_70);
		int32_t L_71;
		L_71 = GenericVirtFuncInvoker0< int32_t >::Invoke(ES3Reader_Read_TisParticleSystemTrailTextureMode_tF3259187CA4D0A61EDB3A40E63CBF6C42641CE9F_m055DB1212E8BC34F385DF7D302F16241554E9730_RuntimeMethod_var, (ES3Reader_t2780AF8AA61DA2A817115CEF8612AC0E494D03C9 *)L_70);
		TrailModule_set_textureMode_mC1F8AE0D2965FC47BDBFF4F53E0673D5FB58CF28((TrailModule_t95D15372971E64A1977B7587ABAA87B1A31EF5C8 *)(TrailModule_t95D15372971E64A1977B7587ABAA87B1A31EF5C8 *)(&V_0), (int32_t)L_71, /*hidden argument*/NULL);
		// break;
		goto IL_038e;
	}

IL_02ce:
	{
		// instance.worldSpace = reader.Read<System.Boolean>(ES3Type_bool.Instance);
		ES3Reader_t2780AF8AA61DA2A817115CEF8612AC0E494D03C9 * L_72 = ___reader0;
		IL2CPP_RUNTIME_CLASS_INIT(ES3Type_bool_t8F309F7B9CC735FF1DEE68081B6E3CAB367745F4_il2cpp_TypeInfo_var);
		ES3Type_t8FBECB7AE75168648B9524E0C2A38DAD4555421D * L_73 = ((ES3Type_bool_t8F309F7B9CC735FF1DEE68081B6E3CAB367745F4_StaticFields*)il2cpp_codegen_static_fields_for(ES3Type_bool_t8F309F7B9CC735FF1DEE68081B6E3CAB367745F4_il2cpp_TypeInfo_var))->get_Instance_12();
		NullCheck((ES3Reader_t2780AF8AA61DA2A817115CEF8612AC0E494D03C9 *)L_72);
		bool L_74;
		L_74 = GenericVirtFuncInvoker1< bool, ES3Type_t8FBECB7AE75168648B9524E0C2A38DAD4555421D * >::Invoke(ES3Reader_Read_TisBoolean_t07D1E3F34E4813023D64F584DFF7B34C9D922F37_mC6D1B158268FF9B97822FF9F5B37FB1723FEDA22_RuntimeMethod_var, (ES3Reader_t2780AF8AA61DA2A817115CEF8612AC0E494D03C9 *)L_72, (ES3Type_t8FBECB7AE75168648B9524E0C2A38DAD4555421D *)L_73);
		TrailModule_set_worldSpace_m42A63AF4A96F24A621A29A0F35240195F0E56B1A((TrailModule_t95D15372971E64A1977B7587ABAA87B1A31EF5C8 *)(TrailModule_t95D15372971E64A1977B7587ABAA87B1A31EF5C8 *)(&V_0), (bool)L_74, /*hidden argument*/NULL);
		// break;
		goto IL_038e;
	}

IL_02e5:
	{
		// instance.dieWithParticles = reader.Read<System.Boolean>(ES3Type_bool.Instance);
		ES3Reader_t2780AF8AA61DA2A817115CEF8612AC0E494D03C9 * L_75 = ___reader0;
		IL2CPP_RUNTIME_CLASS_INIT(ES3Type_bool_t8F309F7B9CC735FF1DEE68081B6E3CAB367745F4_il2cpp_TypeInfo_var);
		ES3Type_t8FBECB7AE75168648B9524E0C2A38DAD4555421D * L_76 = ((ES3Type_bool_t8F309F7B9CC735FF1DEE68081B6E3CAB367745F4_StaticFields*)il2cpp_codegen_static_fields_for(ES3Type_bool_t8F309F7B9CC735FF1DEE68081B6E3CAB367745F4_il2cpp_TypeInfo_var))->get_Instance_12();
		NullCheck((ES3Reader_t2780AF8AA61DA2A817115CEF8612AC0E494D03C9 *)L_75);
		bool L_77;
		L_77 = GenericVirtFuncInvoker1< bool, ES3Type_t8FBECB7AE75168648B9524E0C2A38DAD4555421D * >::Invoke(ES3Reader_Read_TisBoolean_t07D1E3F34E4813023D64F584DFF7B34C9D922F37_mC6D1B158268FF9B97822FF9F5B37FB1723FEDA22_RuntimeMethod_var, (ES3Reader_t2780AF8AA61DA2A817115CEF8612AC0E494D03C9 *)L_75, (ES3Type_t8FBECB7AE75168648B9524E0C2A38DAD4555421D *)L_76);
		TrailModule_set_dieWithParticles_mB7C4E8DC2F908FDF6D57A77B54B821E360D8DA99((TrailModule_t95D15372971E64A1977B7587ABAA87B1A31EF5C8 *)(TrailModule_t95D15372971E64A1977B7587ABAA87B1A31EF5C8 *)(&V_0), (bool)L_77, /*hidden argument*/NULL);
		// break;
		goto IL_038e;
	}

IL_02fc:
	{
		// instance.sizeAffectsWidth = reader.Read<System.Boolean>(ES3Type_bool.Instance);
		ES3Reader_t2780AF8AA61DA2A817115CEF8612AC0E494D03C9 * L_78 = ___reader0;
		IL2CPP_RUNTIME_CLASS_INIT(ES3Type_bool_t8F309F7B9CC735FF1DEE68081B6E3CAB367745F4_il2cpp_TypeInfo_var);
		ES3Type_t8FBECB7AE75168648B9524E0C2A38DAD4555421D * L_79 = ((ES3Type_bool_t8F309F7B9CC735FF1DEE68081B6E3CAB367745F4_StaticFields*)il2cpp_codegen_static_fields_for(ES3Type_bool_t8F309F7B9CC735FF1DEE68081B6E3CAB367745F4_il2cpp_TypeInfo_var))->get_Instance_12();
		NullCheck((ES3Reader_t2780AF8AA61DA2A817115CEF8612AC0E494D03C9 *)L_78);
		bool L_80;
		L_80 = GenericVirtFuncInvoker1< bool, ES3Type_t8FBECB7AE75168648B9524E0C2A38DAD4555421D * >::Invoke(ES3Reader_Read_TisBoolean_t07D1E3F34E4813023D64F584DFF7B34C9D922F37_mC6D1B158268FF9B97822FF9F5B37FB1723FEDA22_RuntimeMethod_var, (ES3Reader_t2780AF8AA61DA2A817115CEF8612AC0E494D03C9 *)L_78, (ES3Type_t8FBECB7AE75168648B9524E0C2A38DAD4555421D *)L_79);
		TrailModule_set_sizeAffectsWidth_m3517856E39080DA69B447499C8846D2491B0ABF0((TrailModule_t95D15372971E64A1977B7587ABAA87B1A31EF5C8 *)(TrailModule_t95D15372971E64A1977B7587ABAA87B1A31EF5C8 *)(&V_0), (bool)L_80, /*hidden argument*/NULL);
		// break;
		goto IL_038e;
	}

IL_0310:
	{
		// instance.sizeAffectsLifetime = reader.Read<System.Boolean>(ES3Type_bool.Instance);
		ES3Reader_t2780AF8AA61DA2A817115CEF8612AC0E494D03C9 * L_81 = ___reader0;
		IL2CPP_RUNTIME_CLASS_INIT(ES3Type_bool_t8F309F7B9CC735FF1DEE68081B6E3CAB367745F4_il2cpp_TypeInfo_var);
		ES3Type_t8FBECB7AE75168648B9524E0C2A38DAD4555421D * L_82 = ((ES3Type_bool_t8F309F7B9CC735FF1DEE68081B6E3CAB367745F4_StaticFields*)il2cpp_codegen_static_fields_for(ES3Type_bool_t8F309F7B9CC735FF1DEE68081B6E3CAB367745F4_il2cpp_TypeInfo_var))->get_Instance_12();
		NullCheck((ES3Reader_t2780AF8AA61DA2A817115CEF8612AC0E494D03C9 *)L_81);
		bool L_83;
		L_83 = GenericVirtFuncInvoker1< bool, ES3Type_t8FBECB7AE75168648B9524E0C2A38DAD4555421D * >::Invoke(ES3Reader_Read_TisBoolean_t07D1E3F34E4813023D64F584DFF7B34C9D922F37_mC6D1B158268FF9B97822FF9F5B37FB1723FEDA22_RuntimeMethod_var, (ES3Reader_t2780AF8AA61DA2A817115CEF8612AC0E494D03C9 *)L_81, (ES3Type_t8FBECB7AE75168648B9524E0C2A38DAD4555421D *)L_82);
		TrailModule_set_sizeAffectsLifetime_m98BF4A6594193D824B52D88371CF963ACBA388FD((TrailModule_t95D15372971E64A1977B7587ABAA87B1A31EF5C8 *)(TrailModule_t95D15372971E64A1977B7587ABAA87B1A31EF5C8 *)(&V_0), (bool)L_83, /*hidden argument*/NULL);
		// break;
		goto IL_038e;
	}

IL_0324:
	{
		// instance.inheritParticleColor = reader.Read<System.Boolean>(ES3Type_bool.Instance);
		ES3Reader_t2780AF8AA61DA2A817115CEF8612AC0E494D03C9 * L_84 = ___reader0;
		IL2CPP_RUNTIME_CLASS_INIT(ES3Type_bool_t8F309F7B9CC735FF1DEE68081B6E3CAB367745F4_il2cpp_TypeInfo_var);
		ES3Type_t8FBECB7AE75168648B9524E0C2A38DAD4555421D * L_85 = ((ES3Type_bool_t8F309F7B9CC735FF1DEE68081B6E3CAB367745F4_StaticFields*)il2cpp_codegen_static_fields_for(ES3Type_bool_t8F309F7B9CC735FF1DEE68081B6E3CAB367745F4_il2cpp_TypeInfo_var))->get_Instance_12();
		NullCheck((ES3Reader_t2780AF8AA61DA2A817115CEF8612AC0E494D03C9 *)L_84);
		bool L_86;
		L_86 = GenericVirtFuncInvoker1< bool, ES3Type_t8FBECB7AE75168648B9524E0C2A38DAD4555421D * >::Invoke(ES3Reader_Read_TisBoolean_t07D1E3F34E4813023D64F584DFF7B34C9D922F37_mC6D1B158268FF9B97822FF9F5B37FB1723FEDA22_RuntimeMethod_var, (ES3Reader_t2780AF8AA61DA2A817115CEF8612AC0E494D03C9 *)L_84, (ES3Type_t8FBECB7AE75168648B9524E0C2A38DAD4555421D *)L_85);
		TrailModule_set_inheritParticleColor_mCD83E87B5E00F2BFFBE08AD2D1D68606283A4FEE((TrailModule_t95D15372971E64A1977B7587ABAA87B1A31EF5C8 *)(TrailModule_t95D15372971E64A1977B7587ABAA87B1A31EF5C8 *)(&V_0), (bool)L_86, /*hidden argument*/NULL);
		// break;
		goto IL_038e;
	}

IL_0338:
	{
		// instance.colorOverLifetime = reader.Read<UnityEngine.ParticleSystem.MinMaxGradient>(ES3Type_MinMaxGradient.Instance);
		ES3Reader_t2780AF8AA61DA2A817115CEF8612AC0E494D03C9 * L_87 = ___reader0;
		IL2CPP_RUNTIME_CLASS_INIT(ES3Type_MinMaxGradient_t5DD353D60E95642AB39D1C97C6FD6DD1B067D3CF_il2cpp_TypeInfo_var);
		ES3Type_t8FBECB7AE75168648B9524E0C2A38DAD4555421D * L_88 = ((ES3Type_MinMaxGradient_t5DD353D60E95642AB39D1C97C6FD6DD1B067D3CF_StaticFields*)il2cpp_codegen_static_fields_for(ES3Type_MinMaxGradient_t5DD353D60E95642AB39D1C97C6FD6DD1B067D3CF_il2cpp_TypeInfo_var))->get_Instance_12();
		NullCheck((ES3Reader_t2780AF8AA61DA2A817115CEF8612AC0E494D03C9 *)L_87);
		MinMaxGradient_tF4530B26F29D9635D670A33B9EE581EAC48C12B7  L_89;
		L_89 = GenericVirtFuncInvoker1< MinMaxGradient_tF4530B26F29D9635D670A33B9EE581EAC48C12B7 , ES3Type_t8FBECB7AE75168648B9524E0C2A38DAD4555421D * >::Invoke(ES3Reader_Read_TisMinMaxGradient_tF4530B26F29D9635D670A33B9EE581EAC48C12B7_m6A3DD8CBBAC5D32B838B6C4399009AB8AA512ACC_RuntimeMethod_var, (ES3Reader_t2780AF8AA61DA2A817115CEF8612AC0E494D03C9 *)L_87, (ES3Type_t8FBECB7AE75168648B9524E0C2A38DAD4555421D *)L_88);
		TrailModule_set_colorOverLifetime_mCD56BD4B75D3A3947069BA1B93FEC78AAE08DF27((TrailModule_t95D15372971E64A1977B7587ABAA87B1A31EF5C8 *)(TrailModule_t95D15372971E64A1977B7587ABAA87B1A31EF5C8 *)(&V_0), (MinMaxGradient_tF4530B26F29D9635D670A33B9EE581EAC48C12B7 )L_89, /*hidden argument*/NULL);
		// break;
		goto IL_038e;
	}

IL_034c:
	{
		// instance.widthOverTrail = reader.Read<UnityEngine.ParticleSystem.MinMaxCurve>(ES3Type_MinMaxCurve.Instance);
		ES3Reader_t2780AF8AA61DA2A817115CEF8612AC0E494D03C9 * L_90 = ___reader0;
		IL2CPP_RUNTIME_CLASS_INIT(ES3Type_MinMaxCurve_tC5342BF0F8735B85CB5E16FDD4C6FACC8AFAD3B7_il2cpp_TypeInfo_var);
		ES3Type_t8FBECB7AE75168648B9524E0C2A38DAD4555421D * L_91 = ((ES3Type_MinMaxCurve_tC5342BF0F8735B85CB5E16FDD4C6FACC8AFAD3B7_StaticFields*)il2cpp_codegen_static_fields_for(ES3Type_MinMaxCurve_tC5342BF0F8735B85CB5E16FDD4C6FACC8AFAD3B7_il2cpp_TypeInfo_var))->get_Instance_12();
		NullCheck((ES3Reader_t2780AF8AA61DA2A817115CEF8612AC0E494D03C9 *)L_90);
		MinMaxCurve_tF036239442AB2D438B1EDABEBC785426871084CD  L_92;
		L_92 = GenericVirtFuncInvoker1< MinMaxCurve_tF036239442AB2D438B1EDABEBC785426871084CD , ES3Type_t8FBECB7AE75168648B9524E0C2A38DAD4555421D * >::Invoke(ES3Reader_Read_TisMinMaxCurve_tF036239442AB2D438B1EDABEBC785426871084CD_mD285150CBFB52440643BBECB5ADF4EE8DE940535_RuntimeMethod_var, (ES3Reader_t2780AF8AA61DA2A817115CEF8612AC0E494D03C9 *)L_90, (ES3Type_t8FBECB7AE75168648B9524E0C2A38DAD4555421D *)L_91);
		TrailModule_set_widthOverTrail_m6C0A896EBFDED7CE46344B3A0B04212934F30DE1((TrailModule_t95D15372971E64A1977B7587ABAA87B1A31EF5C8 *)(TrailModule_t95D15372971E64A1977B7587ABAA87B1A31EF5C8 *)(&V_0), (MinMaxCurve_tF036239442AB2D438B1EDABEBC785426871084CD )L_92, /*hidden argument*/NULL);
		// break;
		goto IL_038e;
	}

IL_0360:
	{
		// instance.widthOverTrailMultiplier = reader.Read<System.Single>(ES3Type_float.Instance);
		ES3Reader_t2780AF8AA61DA2A817115CEF8612AC0E494D03C9 * L_93 = ___reader0;
		IL2CPP_RUNTIME_CLASS_INIT(ES3Type_float_tF86B773C86731BD9AD79448B860BBB178FE77644_il2cpp_TypeInfo_var);
		ES3Type_t8FBECB7AE75168648B9524E0C2A38DAD4555421D * L_94 = ((ES3Type_float_tF86B773C86731BD9AD79448B860BBB178FE77644_StaticFields*)il2cpp_codegen_static_fields_for(ES3Type_float_tF86B773C86731BD9AD79448B860BBB178FE77644_il2cpp_TypeInfo_var))->get_Instance_12();
		NullCheck((ES3Reader_t2780AF8AA61DA2A817115CEF8612AC0E494D03C9 *)L_93);
		float L_95;
		L_95 = GenericVirtFuncInvoker1< float, ES3Type_t8FBECB7AE75168648B9524E0C2A38DAD4555421D * >::Invoke(ES3Reader_Read_TisSingle_tE07797BA3C98D4CA9B5A19413C19A76688AB899E_m4A0416374498BDA042B8EB21E49B72326D6CE5F4_RuntimeMethod_var, (ES3Reader_t2780AF8AA61DA2A817115CEF8612AC0E494D03C9 *)L_93, (ES3Type_t8FBECB7AE75168648B9524E0C2A38DAD4555421D *)L_94);
		TrailModule_set_widthOverTrailMultiplier_m6A7EA2856CF30B710CCB528EA3EBFD1799C19BD4((TrailModule_t95D15372971E64A1977B7587ABAA87B1A31EF5C8 *)(TrailModule_t95D15372971E64A1977B7587ABAA87B1A31EF5C8 *)(&V_0), (float)L_95, /*hidden argument*/NULL);
		// break;
		goto IL_038e;
	}

IL_0374:
	{
		// instance.colorOverTrail = reader.Read<UnityEngine.ParticleSystem.MinMaxGradient>(ES3Type_MinMaxGradient.Instance);
		ES3Reader_t2780AF8AA61DA2A817115CEF8612AC0E494D03C9 * L_96 = ___reader0;
		IL2CPP_RUNTIME_CLASS_INIT(ES3Type_MinMaxGradient_t5DD353D60E95642AB39D1C97C6FD6DD1B067D3CF_il2cpp_TypeInfo_var);
		ES3Type_t8FBECB7AE75168648B9524E0C2A38DAD4555421D * L_97 = ((ES3Type_MinMaxGradient_t5DD353D60E95642AB39D1C97C6FD6DD1B067D3CF_StaticFields*)il2cpp_codegen_static_fields_for(ES3Type_MinMaxGradient_t5DD353D60E95642AB39D1C97C6FD6DD1B067D3CF_il2cpp_TypeInfo_var))->get_Instance_12();
		NullCheck((ES3Reader_t2780AF8AA61DA2A817115CEF8612AC0E494D03C9 *)L_96);
		MinMaxGradient_tF4530B26F29D9635D670A33B9EE581EAC48C12B7  L_98;
		L_98 = GenericVirtFuncInvoker1< MinMaxGradient_tF4530B26F29D9635D670A33B9EE581EAC48C12B7 , ES3Type_t8FBECB7AE75168648B9524E0C2A38DAD4555421D * >::Invoke(ES3Reader_Read_TisMinMaxGradient_tF4530B26F29D9635D670A33B9EE581EAC48C12B7_m6A3DD8CBBAC5D32B838B6C4399009AB8AA512ACC_RuntimeMethod_var, (ES3Reader_t2780AF8AA61DA2A817115CEF8612AC0E494D03C9 *)L_96, (ES3Type_t8FBECB7AE75168648B9524E0C2A38DAD4555421D *)L_97);
		TrailModule_set_colorOverTrail_m8440C6574C8310292B93D70EA4FE3EE8C40DF8DB((TrailModule_t95D15372971E64A1977B7587ABAA87B1A31EF5C8 *)(TrailModule_t95D15372971E64A1977B7587ABAA87B1A31EF5C8 *)(&V_0), (MinMaxGradient_tF4530B26F29D9635D670A33B9EE581EAC48C12B7 )L_98, /*hidden argument*/NULL);
		// break;
		goto IL_038e;
	}

IL_0388:
	{
		// reader.Skip();
		ES3Reader_t2780AF8AA61DA2A817115CEF8612AC0E494D03C9 * L_99 = ___reader0;
		NullCheck((ES3Reader_t2780AF8AA61DA2A817115CEF8612AC0E494D03C9 *)L_99);
		VirtActionInvoker0::Invoke(41 /* System.Void ES3Reader::Skip() */, (ES3Reader_t2780AF8AA61DA2A817115CEF8612AC0E494D03C9 *)L_99);
	}

IL_038e:
	{
		// while((propertyName = reader.ReadPropertyName()) != null)
		ES3Reader_t2780AF8AA61DA2A817115CEF8612AC0E494D03C9 * L_100 = ___reader0;
		NullCheck((ES3Reader_t2780AF8AA61DA2A817115CEF8612AC0E494D03C9 *)L_100);
		String_t* L_101;
		L_101 = VirtFuncInvoker0< String_t* >::Invoke(21 /* System.String ES3Reader::ReadPropertyName() */, (ES3Reader_t2780AF8AA61DA2A817115CEF8612AC0E494D03C9 *)L_100);
		String_t* L_102 = (String_t*)L_101;
		V_1 = (String_t*)L_102;
		if (L_102)
		{
			goto IL_000c;
		}
	}
	{
		// }
		return;
	}
}
// System.Void ES3Types.ES3Type_TrailModule::ReadInto<UnityEngine.ParticleSystem/ColorBySpeedModule>(ES3Reader,System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ES3Type_TrailModule_ReadInto_TisColorBySpeedModule_tDB7CC6D16647BBB53D710394794B7C6C7799F58F_m5F0D3F805DCF2D7D9CAA49FA33B88B9173D1CB9B_gshared (ES3Type_TrailModule_tC773F73EC0443516DD128FF2B5AE010809742462 * __this, ES3Reader_t2780AF8AA61DA2A817115CEF8612AC0E494D03C9 * ___reader0, RuntimeObject * ___obj1, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ES3Reader_Read_TisBoolean_t07D1E3F34E4813023D64F584DFF7B34C9D922F37_mC6D1B158268FF9B97822FF9F5B37FB1723FEDA22_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ES3Reader_Read_TisMinMaxCurve_tF036239442AB2D438B1EDABEBC785426871084CD_mD285150CBFB52440643BBECB5ADF4EE8DE940535_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ES3Reader_Read_TisMinMaxGradient_tF4530B26F29D9635D670A33B9EE581EAC48C12B7_m6A3DD8CBBAC5D32B838B6C4399009AB8AA512ACC_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ES3Reader_Read_TisParticleSystemTrailTextureMode_tF3259187CA4D0A61EDB3A40E63CBF6C42641CE9F_m055DB1212E8BC34F385DF7D302F16241554E9730_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ES3Reader_Read_TisSingle_tE07797BA3C98D4CA9B5A19413C19A76688AB899E_m4A0416374498BDA042B8EB21E49B72326D6CE5F4_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ES3Type_MinMaxCurve_tC5342BF0F8735B85CB5E16FDD4C6FACC8AFAD3B7_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ES3Type_MinMaxGradient_t5DD353D60E95642AB39D1C97C6FD6DD1B067D3CF_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ES3Type_bool_t8F309F7B9CC735FF1DEE68081B6E3CAB367745F4_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ES3Type_float_tF86B773C86731BD9AD79448B860BBB178FE77644_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&TrailModule_t95D15372971E64A1977B7587ABAA87B1A31EF5C8_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral1D87A56AE67B2CD49CAE6E942C2FB7AD98925C00);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral354281948B6269615E32D856CF85B6F456724DAA);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral4221314F268D184F46688D45C85446821F1F1BC3);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral47C47DD09640803AD8016748EAE1F04DD1D41119);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral5C86338F177203D001C41D9C348A83D1338CC7D0);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral60126327537B7B8E6EE33C43FE0C5CA8BCC3A06A);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral87F70660D62DE5FC257FBADE9DA4EC9188597DE5);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralA967787586EC9E5A17A9C55E2002AB73A5E21A0A);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralADAEB0839588196B349BDB6CF33AFA3E0736360B);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralBE2893848F9FC647C2288DA6581A1522E9695182);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralBF540D6548854CC21630064FBA5390C9409C86F0);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralC580B374AA991574F91DFC86C068E7FAD661A3A4);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralE049DB547285CFCE1CB9A95934B6B6DCE2D219EC);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralF9D225733E1D10F9344C755C4A9C0870CD1DE97B);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralFE5F89F63E2381500F62A7CBD6954563BE44562F);
		s_Il2CppMethodInitialized = true;
	}
	TrailModule_t95D15372971E64A1977B7587ABAA87B1A31EF5C8  V_0;
	memset((&V_0), 0, sizeof(V_0));
	String_t* V_1 = NULL;
	uint32_t V_2 = 0;
	{
		// var instance = (UnityEngine.ParticleSystem.TrailModule)obj;
		RuntimeObject * L_0 = ___obj1;
		V_0 = (TrailModule_t95D15372971E64A1977B7587ABAA87B1A31EF5C8 )((*(TrailModule_t95D15372971E64A1977B7587ABAA87B1A31EF5C8 *)((TrailModule_t95D15372971E64A1977B7587ABAA87B1A31EF5C8 *)UnBox(L_0, TrailModule_t95D15372971E64A1977B7587ABAA87B1A31EF5C8_il2cpp_TypeInfo_var))));
		goto IL_038e;
	}

IL_000c:
	{
		String_t* L_1 = V_1;
		if (!L_1)
		{
			goto IL_0388;
		}
	}
	{
		String_t* L_2 = V_1;
		uint32_t L_3;
		L_3 = U3CPrivateImplementationDetailsU3E_ComputeStringHash_m3ADC1F612F9EE3DD518E6F0023A0DE0EE2B120A7((String_t*)L_2, /*hidden argument*/NULL);
		V_2 = (uint32_t)L_3;
		uint32_t L_4 = V_2;
		if ((!(((uint32_t)L_4) <= ((uint32_t)((int32_t)1376955374)))))
		{
			goto IL_008d;
		}
	}
	{
		uint32_t L_5 = V_2;
		if ((!(((uint32_t)L_5) <= ((uint32_t)((int32_t)494095910)))))
		{
			goto IL_004f;
		}
	}
	{
		uint32_t L_6 = V_2;
		if ((((int32_t)L_6) == ((int32_t)((int32_t)49525662))))
		{
			goto IL_010e;
		}
	}
	{
		uint32_t L_7 = V_2;
		if ((((int32_t)L_7) == ((int32_t)((int32_t)341298456))))
		{
			goto IL_021f;
		}
	}
	{
		uint32_t L_8 = V_2;
		if ((((int32_t)L_8) == ((int32_t)((int32_t)494095910))))
		{
			goto IL_0234;
		}
	}
	{
		goto IL_0388;
	}

IL_004f:
	{
		uint32_t L_9 = V_2;
		if ((!(((uint32_t)L_9) <= ((uint32_t)((int32_t)973733911)))))
		{
			goto IL_0072;
		}
	}
	{
		uint32_t L_10 = V_2;
		if ((((int32_t)L_10) == ((int32_t)((int32_t)559929418))))
		{
			goto IL_01b6;
		}
	}
	{
		uint32_t L_11 = V_2;
		if ((((int32_t)L_11) == ((int32_t)((int32_t)973733911))))
		{
			goto IL_0177;
		}
	}
	{
		goto IL_0388;
	}

IL_0072:
	{
		uint32_t L_12 = V_2;
		if ((((int32_t)L_12) == ((int32_t)((int32_t)1024708593))))
		{
			goto IL_014d;
		}
	}
	{
		uint32_t L_13 = V_2;
		if ((((int32_t)L_13) == ((int32_t)((int32_t)1376955374))))
		{
			goto IL_0138;
		}
	}
	{
		goto IL_0388;
	}

IL_008d:
	{
		uint32_t L_14 = V_2;
		if ((!(((uint32_t)L_14) <= ((uint32_t)((int32_t)-2100707162)))))
		{
			goto IL_00d3;
		}
	}
	{
		uint32_t L_15 = V_2;
		if ((!(((uint32_t)L_15) <= ((uint32_t)((int32_t)1975189197)))))
		{
			goto IL_00b8;
		}
	}
	{
		uint32_t L_16 = V_2;
		if ((((int32_t)L_16) == ((int32_t)((int32_t)1546474083))))
		{
			goto IL_020a;
		}
	}
	{
		uint32_t L_17 = V_2;
		if ((((int32_t)L_17) == ((int32_t)((int32_t)1975189197))))
		{
			goto IL_01cb;
		}
	}
	{
		goto IL_0388;
	}

IL_00b8:
	{
		uint32_t L_18 = V_2;
		if ((((int32_t)L_18) == ((int32_t)((int32_t)2053023684))))
		{
			goto IL_01a1;
		}
	}
	{
		uint32_t L_19 = V_2;
		if ((((int32_t)L_19) == ((int32_t)((int32_t)-2100707162))))
		{
			goto IL_0162;
		}
	}
	{
		goto IL_0388;
	}

IL_00d3:
	{
		uint32_t L_20 = V_2;
		if ((!(((uint32_t)L_20) <= ((uint32_t)((int32_t)-1319579393)))))
		{
			goto IL_00f6;
		}
	}
	{
		uint32_t L_21 = V_2;
		if ((((int32_t)L_21) == ((int32_t)((int32_t)-1562862963))))
		{
			goto IL_01e0;
		}
	}
	{
		uint32_t L_22 = V_2;
		if ((((int32_t)L_22) == ((int32_t)((int32_t)-1319579393))))
		{
			goto IL_018c;
		}
	}
	{
		goto IL_0388;
	}

IL_00f6:
	{
		uint32_t L_23 = V_2;
		if ((((int32_t)L_23) == ((int32_t)((int32_t)-1055777148))))
		{
			goto IL_0123;
		}
	}
	{
		uint32_t L_24 = V_2;
		if ((((int32_t)L_24) == ((int32_t)((int32_t)-413379935))))
		{
			goto IL_01f5;
		}
	}
	{
		goto IL_0388;
	}

IL_010e:
	{
		String_t* L_25 = V_1;
		bool L_26;
		L_26 = String_op_Equality_m50B3548E4AC232558190B0052877B290AA1D436A((String_t*)L_25, (String_t*)_stringLiteralF9D225733E1D10F9344C755C4A9C0870CD1DE97B, /*hidden argument*/NULL);
		if (L_26)
		{
			goto IL_0249;
		}
	}
	{
		goto IL_0388;
	}

IL_0123:
	{
		String_t* L_27 = V_1;
		bool L_28;
		L_28 = String_op_Equality_m50B3548E4AC232558190B0052877B290AA1D436A((String_t*)L_27, (String_t*)_stringLiteral60126327537B7B8E6EE33C43FE0C5CA8BCC3A06A, /*hidden argument*/NULL);
		if (L_28)
		{
			goto IL_0260;
		}
	}
	{
		goto IL_0388;
	}

IL_0138:
	{
		String_t* L_29 = V_1;
		bool L_30;
		L_30 = String_op_Equality_m50B3548E4AC232558190B0052877B290AA1D436A((String_t*)L_29, (String_t*)_stringLiteralBE2893848F9FC647C2288DA6581A1522E9695182, /*hidden argument*/NULL);
		if (L_30)
		{
			goto IL_0277;
		}
	}
	{
		goto IL_0388;
	}

IL_014d:
	{
		String_t* L_31 = V_1;
		bool L_32;
		L_32 = String_op_Equality_m50B3548E4AC232558190B0052877B290AA1D436A((String_t*)L_31, (String_t*)_stringLiteral4221314F268D184F46688D45C85446821F1F1BC3, /*hidden argument*/NULL);
		if (L_32)
		{
			goto IL_028e;
		}
	}
	{
		goto IL_0388;
	}

IL_0162:
	{
		String_t* L_33 = V_1;
		bool L_34;
		L_34 = String_op_Equality_m50B3548E4AC232558190B0052877B290AA1D436A((String_t*)L_33, (String_t*)_stringLiteral5C86338F177203D001C41D9C348A83D1338CC7D0, /*hidden argument*/NULL);
		if (L_34)
		{
			goto IL_02a5;
		}
	}
	{
		goto IL_0388;
	}

IL_0177:
	{
		String_t* L_35 = V_1;
		bool L_36;
		L_36 = String_op_Equality_m50B3548E4AC232558190B0052877B290AA1D436A((String_t*)L_35, (String_t*)_stringLiteralFE5F89F63E2381500F62A7CBD6954563BE44562F, /*hidden argument*/NULL);
		if (L_36)
		{
			goto IL_02bc;
		}
	}
	{
		goto IL_0388;
	}

IL_018c:
	{
		String_t* L_37 = V_1;
		bool L_38;
		L_38 = String_op_Equality_m50B3548E4AC232558190B0052877B290AA1D436A((String_t*)L_37, (String_t*)_stringLiteral87F70660D62DE5FC257FBADE9DA4EC9188597DE5, /*hidden argument*/NULL);
		if (L_38)
		{
			goto IL_02ce;
		}
	}
	{
		goto IL_0388;
	}

IL_01a1:
	{
		String_t* L_39 = V_1;
		bool L_40;
		L_40 = String_op_Equality_m50B3548E4AC232558190B0052877B290AA1D436A((String_t*)L_39, (String_t*)_stringLiteral354281948B6269615E32D856CF85B6F456724DAA, /*hidden argument*/NULL);
		if (L_40)
		{
			goto IL_02e5;
		}
	}
	{
		goto IL_0388;
	}

IL_01b6:
	{
		String_t* L_41 = V_1;
		bool L_42;
		L_42 = String_op_Equality_m50B3548E4AC232558190B0052877B290AA1D436A((String_t*)L_41, (String_t*)_stringLiteralADAEB0839588196B349BDB6CF33AFA3E0736360B, /*hidden argument*/NULL);
		if (L_42)
		{
			goto IL_02fc;
		}
	}
	{
		goto IL_0388;
	}

IL_01cb:
	{
		String_t* L_43 = V_1;
		bool L_44;
		L_44 = String_op_Equality_m50B3548E4AC232558190B0052877B290AA1D436A((String_t*)L_43, (String_t*)_stringLiteralC580B374AA991574F91DFC86C068E7FAD661A3A4, /*hidden argument*/NULL);
		if (L_44)
		{
			goto IL_0310;
		}
	}
	{
		goto IL_0388;
	}

IL_01e0:
	{
		String_t* L_45 = V_1;
		bool L_46;
		L_46 = String_op_Equality_m50B3548E4AC232558190B0052877B290AA1D436A((String_t*)L_45, (String_t*)_stringLiteralE049DB547285CFCE1CB9A95934B6B6DCE2D219EC, /*hidden argument*/NULL);
		if (L_46)
		{
			goto IL_0324;
		}
	}
	{
		goto IL_0388;
	}

IL_01f5:
	{
		String_t* L_47 = V_1;
		bool L_48;
		L_48 = String_op_Equality_m50B3548E4AC232558190B0052877B290AA1D436A((String_t*)L_47, (String_t*)_stringLiteralBF540D6548854CC21630064FBA5390C9409C86F0, /*hidden argument*/NULL);
		if (L_48)
		{
			goto IL_0338;
		}
	}
	{
		goto IL_0388;
	}

IL_020a:
	{
		String_t* L_49 = V_1;
		bool L_50;
		L_50 = String_op_Equality_m50B3548E4AC232558190B0052877B290AA1D436A((String_t*)L_49, (String_t*)_stringLiteral1D87A56AE67B2CD49CAE6E942C2FB7AD98925C00, /*hidden argument*/NULL);
		if (L_50)
		{
			goto IL_034c;
		}
	}
	{
		goto IL_0388;
	}

IL_021f:
	{
		String_t* L_51 = V_1;
		bool L_52;
		L_52 = String_op_Equality_m50B3548E4AC232558190B0052877B290AA1D436A((String_t*)L_51, (String_t*)_stringLiteralA967787586EC9E5A17A9C55E2002AB73A5E21A0A, /*hidden argument*/NULL);
		if (L_52)
		{
			goto IL_0360;
		}
	}
	{
		goto IL_0388;
	}

IL_0234:
	{
		String_t* L_53 = V_1;
		bool L_54;
		L_54 = String_op_Equality_m50B3548E4AC232558190B0052877B290AA1D436A((String_t*)L_53, (String_t*)_stringLiteral47C47DD09640803AD8016748EAE1F04DD1D41119, /*hidden argument*/NULL);
		if (L_54)
		{
			goto IL_0374;
		}
	}
	{
		goto IL_0388;
	}

IL_0249:
	{
		// instance.enabled = reader.Read<System.Boolean>(ES3Type_bool.Instance);
		ES3Reader_t2780AF8AA61DA2A817115CEF8612AC0E494D03C9 * L_55 = ___reader0;
		IL2CPP_RUNTIME_CLASS_INIT(ES3Type_bool_t8F309F7B9CC735FF1DEE68081B6E3CAB367745F4_il2cpp_TypeInfo_var);
		ES3Type_t8FBECB7AE75168648B9524E0C2A38DAD4555421D * L_56 = ((ES3Type_bool_t8F309F7B9CC735FF1DEE68081B6E3CAB367745F4_StaticFields*)il2cpp_codegen_static_fields_for(ES3Type_bool_t8F309F7B9CC735FF1DEE68081B6E3CAB367745F4_il2cpp_TypeInfo_var))->get_Instance_12();
		NullCheck((ES3Reader_t2780AF8AA61DA2A817115CEF8612AC0E494D03C9 *)L_55);
		bool L_57;
		L_57 = GenericVirtFuncInvoker1< bool, ES3Type_t8FBECB7AE75168648B9524E0C2A38DAD4555421D * >::Invoke(ES3Reader_Read_TisBoolean_t07D1E3F34E4813023D64F584DFF7B34C9D922F37_mC6D1B158268FF9B97822FF9F5B37FB1723FEDA22_RuntimeMethod_var, (ES3Reader_t2780AF8AA61DA2A817115CEF8612AC0E494D03C9 *)L_55, (ES3Type_t8FBECB7AE75168648B9524E0C2A38DAD4555421D *)L_56);
		TrailModule_set_enabled_mFC8451DDDF40CCBB3E32A4B30A001115F6346894((TrailModule_t95D15372971E64A1977B7587ABAA87B1A31EF5C8 *)(TrailModule_t95D15372971E64A1977B7587ABAA87B1A31EF5C8 *)(&V_0), (bool)L_57, /*hidden argument*/NULL);
		// break;
		goto IL_038e;
	}

IL_0260:
	{
		// instance.ratio = reader.Read<System.Single>(ES3Type_float.Instance);
		ES3Reader_t2780AF8AA61DA2A817115CEF8612AC0E494D03C9 * L_58 = ___reader0;
		IL2CPP_RUNTIME_CLASS_INIT(ES3Type_float_tF86B773C86731BD9AD79448B860BBB178FE77644_il2cpp_TypeInfo_var);
		ES3Type_t8FBECB7AE75168648B9524E0C2A38DAD4555421D * L_59 = ((ES3Type_float_tF86B773C86731BD9AD79448B860BBB178FE77644_StaticFields*)il2cpp_codegen_static_fields_for(ES3Type_float_tF86B773C86731BD9AD79448B860BBB178FE77644_il2cpp_TypeInfo_var))->get_Instance_12();
		NullCheck((ES3Reader_t2780AF8AA61DA2A817115CEF8612AC0E494D03C9 *)L_58);
		float L_60;
		L_60 = GenericVirtFuncInvoker1< float, ES3Type_t8FBECB7AE75168648B9524E0C2A38DAD4555421D * >::Invoke(ES3Reader_Read_TisSingle_tE07797BA3C98D4CA9B5A19413C19A76688AB899E_m4A0416374498BDA042B8EB21E49B72326D6CE5F4_RuntimeMethod_var, (ES3Reader_t2780AF8AA61DA2A817115CEF8612AC0E494D03C9 *)L_58, (ES3Type_t8FBECB7AE75168648B9524E0C2A38DAD4555421D *)L_59);
		TrailModule_set_ratio_m34E63B34E7B0E8D037AD45532B2E2D5BD0750189((TrailModule_t95D15372971E64A1977B7587ABAA87B1A31EF5C8 *)(TrailModule_t95D15372971E64A1977B7587ABAA87B1A31EF5C8 *)(&V_0), (float)L_60, /*hidden argument*/NULL);
		// break;
		goto IL_038e;
	}

IL_0277:
	{
		// instance.lifetime = reader.Read<UnityEngine.ParticleSystem.MinMaxCurve>(ES3Type_MinMaxCurve.Instance);
		ES3Reader_t2780AF8AA61DA2A817115CEF8612AC0E494D03C9 * L_61 = ___reader0;
		IL2CPP_RUNTIME_CLASS_INIT(ES3Type_MinMaxCurve_tC5342BF0F8735B85CB5E16FDD4C6FACC8AFAD3B7_il2cpp_TypeInfo_var);
		ES3Type_t8FBECB7AE75168648B9524E0C2A38DAD4555421D * L_62 = ((ES3Type_MinMaxCurve_tC5342BF0F8735B85CB5E16FDD4C6FACC8AFAD3B7_StaticFields*)il2cpp_codegen_static_fields_for(ES3Type_MinMaxCurve_tC5342BF0F8735B85CB5E16FDD4C6FACC8AFAD3B7_il2cpp_TypeInfo_var))->get_Instance_12();
		NullCheck((ES3Reader_t2780AF8AA61DA2A817115CEF8612AC0E494D03C9 *)L_61);
		MinMaxCurve_tF036239442AB2D438B1EDABEBC785426871084CD  L_63;
		L_63 = GenericVirtFuncInvoker1< MinMaxCurve_tF036239442AB2D438B1EDABEBC785426871084CD , ES3Type_t8FBECB7AE75168648B9524E0C2A38DAD4555421D * >::Invoke(ES3Reader_Read_TisMinMaxCurve_tF036239442AB2D438B1EDABEBC785426871084CD_mD285150CBFB52440643BBECB5ADF4EE8DE940535_RuntimeMethod_var, (ES3Reader_t2780AF8AA61DA2A817115CEF8612AC0E494D03C9 *)L_61, (ES3Type_t8FBECB7AE75168648B9524E0C2A38DAD4555421D *)L_62);
		TrailModule_set_lifetime_m57C898C42B9F18F5A0E88AAA7B10276CC158C39D((TrailModule_t95D15372971E64A1977B7587ABAA87B1A31EF5C8 *)(TrailModule_t95D15372971E64A1977B7587ABAA87B1A31EF5C8 *)(&V_0), (MinMaxCurve_tF036239442AB2D438B1EDABEBC785426871084CD )L_63, /*hidden argument*/NULL);
		// break;
		goto IL_038e;
	}

IL_028e:
	{
		// instance.lifetimeMultiplier = reader.Read<System.Single>(ES3Type_float.Instance);
		ES3Reader_t2780AF8AA61DA2A817115CEF8612AC0E494D03C9 * L_64 = ___reader0;
		IL2CPP_RUNTIME_CLASS_INIT(ES3Type_float_tF86B773C86731BD9AD79448B860BBB178FE77644_il2cpp_TypeInfo_var);
		ES3Type_t8FBECB7AE75168648B9524E0C2A38DAD4555421D * L_65 = ((ES3Type_float_tF86B773C86731BD9AD79448B860BBB178FE77644_StaticFields*)il2cpp_codegen_static_fields_for(ES3Type_float_tF86B773C86731BD9AD79448B860BBB178FE77644_il2cpp_TypeInfo_var))->get_Instance_12();
		NullCheck((ES3Reader_t2780AF8AA61DA2A817115CEF8612AC0E494D03C9 *)L_64);
		float L_66;
		L_66 = GenericVirtFuncInvoker1< float, ES3Type_t8FBECB7AE75168648B9524E0C2A38DAD4555421D * >::Invoke(ES3Reader_Read_TisSingle_tE07797BA3C98D4CA9B5A19413C19A76688AB899E_m4A0416374498BDA042B8EB21E49B72326D6CE5F4_RuntimeMethod_var, (ES3Reader_t2780AF8AA61DA2A817115CEF8612AC0E494D03C9 *)L_64, (ES3Type_t8FBECB7AE75168648B9524E0C2A38DAD4555421D *)L_65);
		TrailModule_set_lifetimeMultiplier_m23F95D65EE8C82152AE1CF2E41531EC2789A866B((TrailModule_t95D15372971E64A1977B7587ABAA87B1A31EF5C8 *)(TrailModule_t95D15372971E64A1977B7587ABAA87B1A31EF5C8 *)(&V_0), (float)L_66, /*hidden argument*/NULL);
		// break;
		goto IL_038e;
	}

IL_02a5:
	{
		// instance.minVertexDistance = reader.Read<System.Single>(ES3Type_float.Instance);
		ES3Reader_t2780AF8AA61DA2A817115CEF8612AC0E494D03C9 * L_67 = ___reader0;
		IL2CPP_RUNTIME_CLASS_INIT(ES3Type_float_tF86B773C86731BD9AD79448B860BBB178FE77644_il2cpp_TypeInfo_var);
		ES3Type_t8FBECB7AE75168648B9524E0C2A38DAD4555421D * L_68 = ((ES3Type_float_tF86B773C86731BD9AD79448B860BBB178FE77644_StaticFields*)il2cpp_codegen_static_fields_for(ES3Type_float_tF86B773C86731BD9AD79448B860BBB178FE77644_il2cpp_TypeInfo_var))->get_Instance_12();
		NullCheck((ES3Reader_t2780AF8AA61DA2A817115CEF8612AC0E494D03C9 *)L_67);
		float L_69;
		L_69 = GenericVirtFuncInvoker1< float, ES3Type_t8FBECB7AE75168648B9524E0C2A38DAD4555421D * >::Invoke(ES3Reader_Read_TisSingle_tE07797BA3C98D4CA9B5A19413C19A76688AB899E_m4A0416374498BDA042B8EB21E49B72326D6CE5F4_RuntimeMethod_var, (ES3Reader_t2780AF8AA61DA2A817115CEF8612AC0E494D03C9 *)L_67, (ES3Type_t8FBECB7AE75168648B9524E0C2A38DAD4555421D *)L_68);
		TrailModule_set_minVertexDistance_mF7C29F88FBF540CE4987F4CF9B141C624808FBC5((TrailModule_t95D15372971E64A1977B7587ABAA87B1A31EF5C8 *)(TrailModule_t95D15372971E64A1977B7587ABAA87B1A31EF5C8 *)(&V_0), (float)L_69, /*hidden argument*/NULL);
		// break;
		goto IL_038e;
	}

IL_02bc:
	{
		// instance.textureMode = reader.Read<UnityEngine.ParticleSystemTrailTextureMode>();
		ES3Reader_t2780AF8AA61DA2A817115CEF8612AC0E494D03C9 * L_70 = ___reader0;
		NullCheck((ES3Reader_t2780AF8AA61DA2A817115CEF8612AC0E494D03C9 *)L_70);
		int32_t L_71;
		L_71 = GenericVirtFuncInvoker0< int32_t >::Invoke(ES3Reader_Read_TisParticleSystemTrailTextureMode_tF3259187CA4D0A61EDB3A40E63CBF6C42641CE9F_m055DB1212E8BC34F385DF7D302F16241554E9730_RuntimeMethod_var, (ES3Reader_t2780AF8AA61DA2A817115CEF8612AC0E494D03C9 *)L_70);
		TrailModule_set_textureMode_mC1F8AE0D2965FC47BDBFF4F53E0673D5FB58CF28((TrailModule_t95D15372971E64A1977B7587ABAA87B1A31EF5C8 *)(TrailModule_t95D15372971E64A1977B7587ABAA87B1A31EF5C8 *)(&V_0), (int32_t)L_71, /*hidden argument*/NULL);
		// break;
		goto IL_038e;
	}

IL_02ce:
	{
		// instance.worldSpace = reader.Read<System.Boolean>(ES3Type_bool.Instance);
		ES3Reader_t2780AF8AA61DA2A817115CEF8612AC0E494D03C9 * L_72 = ___reader0;
		IL2CPP_RUNTIME_CLASS_INIT(ES3Type_bool_t8F309F7B9CC735FF1DEE68081B6E3CAB367745F4_il2cpp_TypeInfo_var);
		ES3Type_t8FBECB7AE75168648B9524E0C2A38DAD4555421D * L_73 = ((ES3Type_bool_t8F309F7B9CC735FF1DEE68081B6E3CAB367745F4_StaticFields*)il2cpp_codegen_static_fields_for(ES3Type_bool_t8F309F7B9CC735FF1DEE68081B6E3CAB367745F4_il2cpp_TypeInfo_var))->get_Instance_12();
		NullCheck((ES3Reader_t2780AF8AA61DA2A817115CEF8612AC0E494D03C9 *)L_72);
		bool L_74;
		L_74 = GenericVirtFuncInvoker1< bool, ES3Type_t8FBECB7AE75168648B9524E0C2A38DAD4555421D * >::Invoke(ES3Reader_Read_TisBoolean_t07D1E3F34E4813023D64F584DFF7B34C9D922F37_mC6D1B158268FF9B97822FF9F5B37FB1723FEDA22_RuntimeMethod_var, (ES3Reader_t2780AF8AA61DA2A817115CEF8612AC0E494D03C9 *)L_72, (ES3Type_t8FBECB7AE75168648B9524E0C2A38DAD4555421D *)L_73);
		TrailModule_set_worldSpace_m42A63AF4A96F24A621A29A0F35240195F0E56B1A((TrailModule_t95D15372971E64A1977B7587ABAA87B1A31EF5C8 *)(TrailModule_t95D15372971E64A1977B7587ABAA87B1A31EF5C8 *)(&V_0), (bool)L_74, /*hidden argument*/NULL);
		// break;
		goto IL_038e;
	}

IL_02e5:
	{
		// instance.dieWithParticles = reader.Read<System.Boolean>(ES3Type_bool.Instance);
		ES3Reader_t2780AF8AA61DA2A817115CEF8612AC0E494D03C9 * L_75 = ___reader0;
		IL2CPP_RUNTIME_CLASS_INIT(ES3Type_bool_t8F309F7B9CC735FF1DEE68081B6E3CAB367745F4_il2cpp_TypeInfo_var);
		ES3Type_t8FBECB7AE75168648B9524E0C2A38DAD4555421D * L_76 = ((ES3Type_bool_t8F309F7B9CC735FF1DEE68081B6E3CAB367745F4_StaticFields*)il2cpp_codegen_static_fields_for(ES3Type_bool_t8F309F7B9CC735FF1DEE68081B6E3CAB367745F4_il2cpp_TypeInfo_var))->get_Instance_12();
		NullCheck((ES3Reader_t2780AF8AA61DA2A817115CEF8612AC0E494D03C9 *)L_75);
		bool L_77;
		L_77 = GenericVirtFuncInvoker1< bool, ES3Type_t8FBECB7AE75168648B9524E0C2A38DAD4555421D * >::Invoke(ES3Reader_Read_TisBoolean_t07D1E3F34E4813023D64F584DFF7B34C9D922F37_mC6D1B158268FF9B97822FF9F5B37FB1723FEDA22_RuntimeMethod_var, (ES3Reader_t2780AF8AA61DA2A817115CEF8612AC0E494D03C9 *)L_75, (ES3Type_t8FBECB7AE75168648B9524E0C2A38DAD4555421D *)L_76);
		TrailModule_set_dieWithParticles_mB7C4E8DC2F908FDF6D57A77B54B821E360D8DA99((TrailModule_t95D15372971E64A1977B7587ABAA87B1A31EF5C8 *)(TrailModule_t95D15372971E64A1977B7587ABAA87B1A31EF5C8 *)(&V_0), (bool)L_77, /*hidden argument*/NULL);
		// break;
		goto IL_038e;
	}

IL_02fc:
	{
		// instance.sizeAffectsWidth = reader.Read<System.Boolean>(ES3Type_bool.Instance);
		ES3Reader_t2780AF8AA61DA2A817115CEF8612AC0E494D03C9 * L_78 = ___reader0;
		IL2CPP_RUNTIME_CLASS_INIT(ES3Type_bool_t8F309F7B9CC735FF1DEE68081B6E3CAB367745F4_il2cpp_TypeInfo_var);
		ES3Type_t8FBECB7AE75168648B9524E0C2A38DAD4555421D * L_79 = ((ES3Type_bool_t8F309F7B9CC735FF1DEE68081B6E3CAB367745F4_StaticFields*)il2cpp_codegen_static_fields_for(ES3Type_bool_t8F309F7B9CC735FF1DEE68081B6E3CAB367745F4_il2cpp_TypeInfo_var))->get_Instance_12();
		NullCheck((ES3Reader_t2780AF8AA61DA2A817115CEF8612AC0E494D03C9 *)L_78);
		bool L_80;
		L_80 = GenericVirtFuncInvoker1< bool, ES3Type_t8FBECB7AE75168648B9524E0C2A38DAD4555421D * >::Invoke(ES3Reader_Read_TisBoolean_t07D1E3F34E4813023D64F584DFF7B34C9D922F37_mC6D1B158268FF9B97822FF9F5B37FB1723FEDA22_RuntimeMethod_var, (ES3Reader_t2780AF8AA61DA2A817115CEF8612AC0E494D03C9 *)L_78, (ES3Type_t8FBECB7AE75168648B9524E0C2A38DAD4555421D *)L_79);
		TrailModule_set_sizeAffectsWidth_m3517856E39080DA69B447499C8846D2491B0ABF0((TrailModule_t95D15372971E64A1977B7587ABAA87B1A31EF5C8 *)(TrailModule_t95D15372971E64A1977B7587ABAA87B1A31EF5C8 *)(&V_0), (bool)L_80, /*hidden argument*/NULL);
		// break;
		goto IL_038e;
	}

IL_0310:
	{
		// instance.sizeAffectsLifetime = reader.Read<System.Boolean>(ES3Type_bool.Instance);
		ES3Reader_t2780AF8AA61DA2A817115CEF8612AC0E494D03C9 * L_81 = ___reader0;
		IL2CPP_RUNTIME_CLASS_INIT(ES3Type_bool_t8F309F7B9CC735FF1DEE68081B6E3CAB367745F4_il2cpp_TypeInfo_var);
		ES3Type_t8FBECB7AE75168648B9524E0C2A38DAD4555421D * L_82 = ((ES3Type_bool_t8F309F7B9CC735FF1DEE68081B6E3CAB367745F4_StaticFields*)il2cpp_codegen_static_fields_for(ES3Type_bool_t8F309F7B9CC735FF1DEE68081B6E3CAB367745F4_il2cpp_TypeInfo_var))->get_Instance_12();
		NullCheck((ES3Reader_t2780AF8AA61DA2A817115CEF8612AC0E494D03C9 *)L_81);
		bool L_83;
		L_83 = GenericVirtFuncInvoker1< bool, ES3Type_t8FBECB7AE75168648B9524E0C2A38DAD4555421D * >::Invoke(ES3Reader_Read_TisBoolean_t07D1E3F34E4813023D64F584DFF7B34C9D922F37_mC6D1B158268FF9B97822FF9F5B37FB1723FEDA22_RuntimeMethod_var, (ES3Reader_t2780AF8AA61DA2A817115CEF8612AC0E494D03C9 *)L_81, (ES3Type_t8FBECB7AE75168648B9524E0C2A38DAD4555421D *)L_82);
		TrailModule_set_sizeAffectsLifetime_m98BF4A6594193D824B52D88371CF963ACBA388FD((TrailModule_t95D15372971E64A1977B7587ABAA87B1A31EF5C8 *)(TrailModule_t95D15372971E64A1977B7587ABAA87B1A31EF5C8 *)(&V_0), (bool)L_83, /*hidden argument*/NULL);
		// break;
		goto IL_038e;
	}

IL_0324:
	{
		// instance.inheritParticleColor = reader.Read<System.Boolean>(ES3Type_bool.Instance);
		ES3Reader_t2780AF8AA61DA2A817115CEF8612AC0E494D03C9 * L_84 = ___reader0;
		IL2CPP_RUNTIME_CLASS_INIT(ES3Type_bool_t8F309F7B9CC735FF1DEE68081B6E3CAB367745F4_il2cpp_TypeInfo_var);
		ES3Type_t8FBECB7AE75168648B9524E0C2A38DAD4555421D * L_85 = ((ES3Type_bool_t8F309F7B9CC735FF1DEE68081B6E3CAB367745F4_StaticFields*)il2cpp_codegen_static_fields_for(ES3Type_bool_t8F309F7B9CC735FF1DEE68081B6E3CAB367745F4_il2cpp_TypeInfo_var))->get_Instance_12();
		NullCheck((ES3Reader_t2780AF8AA61DA2A817115CEF8612AC0E494D03C9 *)L_84);
		bool L_86;
		L_86 = GenericVirtFuncInvoker1< bool, ES3Type_t8FBECB7AE75168648B9524E0C2A38DAD4555421D * >::Invoke(ES3Reader_Read_TisBoolean_t07D1E3F34E4813023D64F584DFF7B34C9D922F37_mC6D1B158268FF9B97822FF9F5B37FB1723FEDA22_RuntimeMethod_var, (ES3Reader_t2780AF8AA61DA2A817115CEF8612AC0E494D03C9 *)L_84, (ES3Type_t8FBECB7AE75168648B9524E0C2A38DAD4555421D *)L_85);
		TrailModule_set_inheritParticleColor_mCD83E87B5E00F2BFFBE08AD2D1D68606283A4FEE((TrailModule_t95D15372971E64A1977B7587ABAA87B1A31EF5C8 *)(TrailModule_t95D15372971E64A1977B7587ABAA87B1A31EF5C8 *)(&V_0), (bool)L_86, /*hidden argument*/NULL);
		// break;
		goto IL_038e;
	}

IL_0338:
	{
		// instance.colorOverLifetime = reader.Read<UnityEngine.ParticleSystem.MinMaxGradient>(ES3Type_MinMaxGradient.Instance);
		ES3Reader_t2780AF8AA61DA2A817115CEF8612AC0E494D03C9 * L_87 = ___reader0;
		IL2CPP_RUNTIME_CLASS_INIT(ES3Type_MinMaxGradient_t5DD353D60E95642AB39D1C97C6FD6DD1B067D3CF_il2cpp_TypeInfo_var);
		ES3Type_t8FBECB7AE75168648B9524E0C2A38DAD4555421D * L_88 = ((ES3Type_MinMaxGradient_t5DD353D60E95642AB39D1C97C6FD6DD1B067D3CF_StaticFields*)il2cpp_codegen_static_fields_for(ES3Type_MinMaxGradient_t5DD353D60E95642AB39D1C97C6FD6DD1B067D3CF_il2cpp_TypeInfo_var))->get_Instance_12();
		NullCheck((ES3Reader_t2780AF8AA61DA2A817115CEF8612AC0E494D03C9 *)L_87);
		MinMaxGradient_tF4530B26F29D9635D670A33B9EE581EAC48C12B7  L_89;
		L_89 = GenericVirtFuncInvoker1< MinMaxGradient_tF4530B26F29D9635D670A33B9EE581EAC48C12B7 , ES3Type_t8FBECB7AE75168648B9524E0C2A38DAD4555421D * >::Invoke(ES3Reader_Read_TisMinMaxGradient_tF4530B26F29D9635D670A33B9EE581EAC48C12B7_m6A3DD8CBBAC5D32B838B6C4399009AB8AA512ACC_RuntimeMethod_var, (ES3Reader_t2780AF8AA61DA2A817115CEF8612AC0E494D03C9 *)L_87, (ES3Type_t8FBECB7AE75168648B9524E0C2A38DAD4555421D *)L_88);
		TrailModule_set_colorOverLifetime_mCD56BD4B75D3A3947069BA1B93FEC78AAE08DF27((TrailModule_t95D15372971E64A1977B7587ABAA87B1A31EF5C8 *)(TrailModule_t95D15372971E64A1977B7587ABAA87B1A31EF5C8 *)(&V_0), (MinMaxGradient_tF4530B26F29D9635D670A33B9EE581EAC48C12B7 )L_89, /*hidden argument*/NULL);
		// break;
		goto IL_038e;
	}

IL_034c:
	{
		// instance.widthOverTrail = reader.Read<UnityEngine.ParticleSystem.MinMaxCurve>(ES3Type_MinMaxCurve.Instance);
		ES3Reader_t2780AF8AA61DA2A817115CEF8612AC0E494D03C9 * L_90 = ___reader0;
		IL2CPP_RUNTIME_CLASS_INIT(ES3Type_MinMaxCurve_tC5342BF0F8735B85CB5E16FDD4C6FACC8AFAD3B7_il2cpp_TypeInfo_var);
		ES3Type_t8FBECB7AE75168648B9524E0C2A38DAD4555421D * L_91 = ((ES3Type_MinMaxCurve_tC5342BF0F8735B85CB5E16FDD4C6FACC8AFAD3B7_StaticFields*)il2cpp_codegen_static_fields_for(ES3Type_MinMaxCurve_tC5342BF0F8735B85CB5E16FDD4C6FACC8AFAD3B7_il2cpp_TypeInfo_var))->get_Instance_12();
		NullCheck((ES3Reader_t2780AF8AA61DA2A817115CEF8612AC0E494D03C9 *)L_90);
		MinMaxCurve_tF036239442AB2D438B1EDABEBC785426871084CD  L_92;
		L_92 = GenericVirtFuncInvoker1< MinMaxCurve_tF036239442AB2D438B1EDABEBC785426871084CD , ES3Type_t8FBECB7AE75168648B9524E0C2A38DAD4555421D * >::Invoke(ES3Reader_Read_TisMinMaxCurve_tF036239442AB2D438B1EDABEBC785426871084CD_mD285150CBFB52440643BBECB5ADF4EE8DE940535_RuntimeMethod_var, (ES3Reader_t2780AF8AA61DA2A817115CEF8612AC0E494D03C9 *)L_90, (ES3Type_t8FBECB7AE75168648B9524E0C2A38DAD4555421D *)L_91);
		TrailModule_set_widthOverTrail_m6C0A896EBFDED7CE46344B3A0B04212934F30DE1((TrailModule_t95D15372971E64A1977B7587ABAA87B1A31EF5C8 *)(TrailModule_t95D15372971E64A1977B7587ABAA87B1A31EF5C8 *)(&V_0), (MinMaxCurve_tF036239442AB2D438B1EDABEBC785426871084CD )L_92, /*hidden argument*/NULL);
		// break;
		goto IL_038e;
	}

IL_0360:
	{
		// instance.widthOverTrailMultiplier = reader.Read<System.Single>(ES3Type_float.Instance);
		ES3Reader_t2780AF8AA61DA2A817115CEF8612AC0E494D03C9 * L_93 = ___reader0;
		IL2CPP_RUNTIME_CLASS_INIT(ES3Type_float_tF86B773C86731BD9AD79448B860BBB178FE77644_il2cpp_TypeInfo_var);
		ES3Type_t8FBECB7AE75168648B9524E0C2A38DAD4555421D * L_94 = ((ES3Type_float_tF86B773C86731BD9AD79448B860BBB178FE77644_StaticFields*)il2cpp_codegen_static_fields_for(ES3Type_float_tF86B773C86731BD9AD79448B860BBB178FE77644_il2cpp_TypeInfo_var))->get_Instance_12();
		NullCheck((ES3Reader_t2780AF8AA61DA2A817115CEF8612AC0E494D03C9 *)L_93);
		float L_95;
		L_95 = GenericVirtFuncInvoker1< float, ES3Type_t8FBECB7AE75168648B9524E0C2A38DAD4555421D * >::Invoke(ES3Reader_Read_TisSingle_tE07797BA3C98D4CA9B5A19413C19A76688AB899E_m4A0416374498BDA042B8EB21E49B72326D6CE5F4_RuntimeMethod_var, (ES3Reader_t2780AF8AA61DA2A817115CEF8612AC0E494D03C9 *)L_93, (ES3Type_t8FBECB7AE75168648B9524E0C2A38DAD4555421D *)L_94);
		TrailModule_set_widthOverTrailMultiplier_m6A7EA2856CF30B710CCB528EA3EBFD1799C19BD4((TrailModule_t95D15372971E64A1977B7587ABAA87B1A31EF5C8 *)(TrailModule_t95D15372971E64A1977B7587ABAA87B1A31EF5C8 *)(&V_0), (float)L_95, /*hidden argument*/NULL);
		// break;
		goto IL_038e;
	}

IL_0374:
	{
		// instance.colorOverTrail = reader.Read<UnityEngine.ParticleSystem.MinMaxGradient>(ES3Type_MinMaxGradient.Instance);
		ES3Reader_t2780AF8AA61DA2A817115CEF8612AC0E494D03C9 * L_96 = ___reader0;
		IL2CPP_RUNTIME_CLASS_INIT(ES3Type_MinMaxGradient_t5DD353D60E95642AB39D1C97C6FD6DD1B067D3CF_il2cpp_TypeInfo_var);
		ES3Type_t8FBECB7AE75168648B9524E0C2A38DAD4555421D * L_97 = ((ES3Type_MinMaxGradient_t5DD353D60E95642AB39D1C97C6FD6DD1B067D3CF_StaticFields*)il2cpp_codegen_static_fields_for(ES3Type_MinMaxGradient_t5DD353D60E95642AB39D1C97C6FD6DD1B067D3CF_il2cpp_TypeInfo_var))->get_Instance_12();
		NullCheck((ES3Reader_t2780AF8AA61DA2A817115CEF8612AC0E494D03C9 *)L_96);
		MinMaxGradient_tF4530B26F29D9635D670A33B9EE581EAC48C12B7  L_98;
		L_98 = GenericVirtFuncInvoker1< MinMaxGradient_tF4530B26F29D9635D670A33B9EE581EAC48C12B7 , ES3Type_t8FBECB7AE75168648B9524E0C2A38DAD4555421D * >::Invoke(ES3Reader_Read_TisMinMaxGradient_tF4530B26F29D9635D670A33B9EE581EAC48C12B7_m6A3DD8CBBAC5D32B838B6C4399009AB8AA512ACC_RuntimeMethod_var, (ES3Reader_t2780AF8AA61DA2A817115CEF8612AC0E494D03C9 *)L_96, (ES3Type_t8FBECB7AE75168648B9524E0C2A38DAD4555421D *)L_97);
		TrailModule_set_colorOverTrail_m8440C6574C8310292B93D70EA4FE3EE8C40DF8DB((TrailModule_t95D15372971E64A1977B7587ABAA87B1A31EF5C8 *)(TrailModule_t95D15372971E64A1977B7587ABAA87B1A31EF5C8 *)(&V_0), (MinMaxGradient_tF4530B26F29D9635D670A33B9EE581EAC48C12B7 )L_98, /*hidden argument*/NULL);
		// break;
		goto IL_038e;
	}

IL_0388:
	{
		// reader.Skip();
		ES3Reader_t2780AF8AA61DA2A817115CEF8612AC0E494D03C9 * L_99 = ___reader0;
		NullCheck((ES3Reader_t2780AF8AA61DA2A817115CEF8612AC0E494D03C9 *)L_99);
		VirtActionInvoker0::Invoke(41 /* System.Void ES3Reader::Skip() */, (ES3Reader_t2780AF8AA61DA2A817115CEF8612AC0E494D03C9 *)L_99);
	}

IL_038e:
	{
		// while((propertyName = reader.ReadPropertyName()) != null)
		ES3Reader_t2780AF8AA61DA2A817115CEF8612AC0E494D03C9 * L_100 = ___reader0;
		NullCheck((ES3Reader_t2780AF8AA61DA2A817115CEF8612AC0E494D03C9 *)L_100);
		String_t* L_101;
		L_101 = VirtFuncInvoker0< String_t* >::Invoke(21 /* System.String ES3Reader::ReadPropertyName() */, (ES3Reader_t2780AF8AA61DA2A817115CEF8612AC0E494D03C9 *)L_100);
		String_t* L_102 = (String_t*)L_101;
		V_1 = (String_t*)L_102;
		if (L_102)
		{
			goto IL_000c;
		}
	}
	{
		// }
		return;
	}
}
// System.Void ES3Types.ES3Type_TrailModule::ReadInto<UnityEngine.ParticleSystem/ColorOverLifetimeModule>(ES3Reader,System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ES3Type_TrailModule_ReadInto_TisColorOverLifetimeModule_t84B571334582EB5A79D1C199366F06416FF7BC75_m22FA2A095C364BFB13D3FC0CC9E7730B7686B4BB_gshared (ES3Type_TrailModule_tC773F73EC0443516DD128FF2B5AE010809742462 * __this, ES3Reader_t2780AF8AA61DA2A817115CEF8612AC0E494D03C9 * ___reader0, RuntimeObject * ___obj1, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ES3Reader_Read_TisBoolean_t07D1E3F34E4813023D64F584DFF7B34C9D922F37_mC6D1B158268FF9B97822FF9F5B37FB1723FEDA22_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ES3Reader_Read_TisMinMaxCurve_tF036239442AB2D438B1EDABEBC785426871084CD_mD285150CBFB52440643BBECB5ADF4EE8DE940535_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ES3Reader_Read_TisMinMaxGradient_tF4530B26F29D9635D670A33B9EE581EAC48C12B7_m6A3DD8CBBAC5D32B838B6C4399009AB8AA512ACC_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ES3Reader_Read_TisParticleSystemTrailTextureMode_tF3259187CA4D0A61EDB3A40E63CBF6C42641CE9F_m055DB1212E8BC34F385DF7D302F16241554E9730_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ES3Reader_Read_TisSingle_tE07797BA3C98D4CA9B5A19413C19A76688AB899E_m4A0416374498BDA042B8EB21E49B72326D6CE5F4_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ES3Type_MinMaxCurve_tC5342BF0F8735B85CB5E16FDD4C6FACC8AFAD3B7_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ES3Type_MinMaxGradient_t5DD353D60E95642AB39D1C97C6FD6DD1B067D3CF_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ES3Type_bool_t8F309F7B9CC735FF1DEE68081B6E3CAB367745F4_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ES3Type_float_tF86B773C86731BD9AD79448B860BBB178FE77644_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&TrailModule_t95D15372971E64A1977B7587ABAA87B1A31EF5C8_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral1D87A56AE67B2CD49CAE6E942C2FB7AD98925C00);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral354281948B6269615E32D856CF85B6F456724DAA);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral4221314F268D184F46688D45C85446821F1F1BC3);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral47C47DD09640803AD8016748EAE1F04DD1D41119);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral5C86338F177203D001C41D9C348A83D1338CC7D0);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral60126327537B7B8E6EE33C43FE0C5CA8BCC3A06A);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral87F70660D62DE5FC257FBADE9DA4EC9188597DE5);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralA967787586EC9E5A17A9C55E2002AB73A5E21A0A);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralADAEB0839588196B349BDB6CF33AFA3E0736360B);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralBE2893848F9FC647C2288DA6581A1522E9695182);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralBF540D6548854CC21630064FBA5390C9409C86F0);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralC580B374AA991574F91DFC86C068E7FAD661A3A4);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralE049DB547285CFCE1CB9A95934B6B6DCE2D219EC);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralF9D225733E1D10F9344C755C4A9C0870CD1DE97B);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralFE5F89F63E2381500F62A7CBD6954563BE44562F);
		s_Il2CppMethodInitialized = true;
	}
	TrailModule_t95D15372971E64A1977B7587ABAA87B1A31EF5C8  V_0;
	memset((&V_0), 0, sizeof(V_0));
	String_t* V_1 = NULL;
	uint32_t V_2 = 0;
	{
		// var instance = (UnityEngine.ParticleSystem.TrailModule)obj;
		RuntimeObject * L_0 = ___obj1;
		V_0 = (TrailModule_t95D15372971E64A1977B7587ABAA87B1A31EF5C8 )((*(TrailModule_t95D15372971E64A1977B7587ABAA87B1A31EF5C8 *)((TrailModule_t95D15372971E64A1977B7587ABAA87B1A31EF5C8 *)UnBox(L_0, TrailModule_t95D15372971E64A1977B7587ABAA87B1A31EF5C8_il2cpp_TypeInfo_var))));
		goto IL_038e;
	}

IL_000c:
	{
		String_t* L_1 = V_1;
		if (!L_1)
		{
			goto IL_0388;
		}
	}
	{
		String_t* L_2 = V_1;
		uint32_t L_3;
		L_3 = U3CPrivateImplementationDetailsU3E_ComputeStringHash_m3ADC1F612F9EE3DD518E6F0023A0DE0EE2B120A7((String_t*)L_2, /*hidden argument*/NULL);
		V_2 = (uint32_t)L_3;
		uint32_t L_4 = V_2;
		if ((!(((uint32_t)L_4) <= ((uint32_t)((int32_t)1376955374)))))
		{
			goto IL_008d;
		}
	}
	{
		uint32_t L_5 = V_2;
		if ((!(((uint32_t)L_5) <= ((uint32_t)((int32_t)494095910)))))
		{
			goto IL_004f;
		}
	}
	{
		uint32_t L_6 = V_2;
		if ((((int32_t)L_6) == ((int32_t)((int32_t)49525662))))
		{
			goto IL_010e;
		}
	}
	{
		uint32_t L_7 = V_2;
		if ((((int32_t)L_7) == ((int32_t)((int32_t)341298456))))
		{
			goto IL_021f;
		}
	}
	{
		uint32_t L_8 = V_2;
		if ((((int32_t)L_8) == ((int32_t)((int32_t)494095910))))
		{
			goto IL_0234;
		}
	}
	{
		goto IL_0388;
	}

IL_004f:
	{
		uint32_t L_9 = V_2;
		if ((!(((uint32_t)L_9) <= ((uint32_t)((int32_t)973733911)))))
		{
			goto IL_0072;
		}
	}
	{
		uint32_t L_10 = V_2;
		if ((((int32_t)L_10) == ((int32_t)((int32_t)559929418))))
		{
			goto IL_01b6;
		}
	}
	{
		uint32_t L_11 = V_2;
		if ((((int32_t)L_11) == ((int32_t)((int32_t)973733911))))
		{
			goto IL_0177;
		}
	}
	{
		goto IL_0388;
	}

IL_0072:
	{
		uint32_t L_12 = V_2;
		if ((((int32_t)L_12) == ((int32_t)((int32_t)1024708593))))
		{
			goto IL_014d;
		}
	}
	{
		uint32_t L_13 = V_2;
		if ((((int32_t)L_13) == ((int32_t)((int32_t)1376955374))))
		{
			goto IL_0138;
		}
	}
	{
		goto IL_0388;
	}

IL_008d:
	{
		uint32_t L_14 = V_2;
		if ((!(((uint32_t)L_14) <= ((uint32_t)((int32_t)-2100707162)))))
		{
			goto IL_00d3;
		}
	}
	{
		uint32_t L_15 = V_2;
		if ((!(((uint32_t)L_15) <= ((uint32_t)((int32_t)1975189197)))))
		{
			goto IL_00b8;
		}
	}
	{
		uint32_t L_16 = V_2;
		if ((((int32_t)L_16) == ((int32_t)((int32_t)1546474083))))
		{
			goto IL_020a;
		}
	}
	{
		uint32_t L_17 = V_2;
		if ((((int32_t)L_17) == ((int32_t)((int32_t)1975189197))))
		{
			goto IL_01cb;
		}
	}
	{
		goto IL_0388;
	}

IL_00b8:
	{
		uint32_t L_18 = V_2;
		if ((((int32_t)L_18) == ((int32_t)((int32_t)2053023684))))
		{
			goto IL_01a1;
		}
	}
	{
		uint32_t L_19 = V_2;
		if ((((int32_t)L_19) == ((int32_t)((int32_t)-2100707162))))
		{
			goto IL_0162;
		}
	}
	{
		goto IL_0388;
	}

IL_00d3:
	{
		uint32_t L_20 = V_2;
		if ((!(((uint32_t)L_20) <= ((uint32_t)((int32_t)-1319579393)))))
		{
			goto IL_00f6;
		}
	}
	{
		uint32_t L_21 = V_2;
		if ((((int32_t)L_21) == ((int32_t)((int32_t)-1562862963))))
		{
			goto IL_01e0;
		}
	}
	{
		uint32_t L_22 = V_2;
		if ((((int32_t)L_22) == ((int32_t)((int32_t)-1319579393))))
		{
			goto IL_018c;
		}
	}
	{
		goto IL_0388;
	}

IL_00f6:
	{
		uint32_t L_23 = V_2;
		if ((((int32_t)L_23) == ((int32_t)((int32_t)-1055777148))))
		{
			goto IL_0123;
		}
	}
	{
		uint32_t L_24 = V_2;
		if ((((int32_t)L_24) == ((int32_t)((int32_t)-413379935))))
		{
			goto IL_01f5;
		}
	}
	{
		goto IL_0388;
	}

IL_010e:
	{
		String_t* L_25 = V_1;
		bool L_26;
		L_26 = String_op_Equality_m50B3548E4AC232558190B0052877B290AA1D436A((String_t*)L_25, (String_t*)_stringLiteralF9D225733E1D10F9344C755C4A9C0870CD1DE97B, /*hidden argument*/NULL);
		if (L_26)
		{
			goto IL_0249;
		}
	}
	{
		goto IL_0388;
	}

IL_0123:
	{
		String_t* L_27 = V_1;
		bool L_28;
		L_28 = String_op_Equality_m50B3548E4AC232558190B0052877B290AA1D436A((String_t*)L_27, (String_t*)_stringLiteral60126327537B7B8E6EE33C43FE0C5CA8BCC3A06A, /*hidden argument*/NULL);
		if (L_28)
		{
			goto IL_0260;
		}
	}
	{
		goto IL_0388;
	}

IL_0138:
	{
		String_t* L_29 = V_1;
		bool L_30;
		L_30 = String_op_Equality_m50B3548E4AC232558190B0052877B290AA1D436A((String_t*)L_29, (String_t*)_stringLiteralBE2893848F9FC647C2288DA6581A1522E9695182, /*hidden argument*/NULL);
		if (L_30)
		{
			goto IL_0277;
		}
	}
	{
		goto IL_0388;
	}

IL_014d:
	{
		String_t* L_31 = V_1;
		bool L_32;
		L_32 = String_op_Equality_m50B3548E4AC232558190B0052877B290AA1D436A((String_t*)L_31, (String_t*)_stringLiteral4221314F268D184F46688D45C85446821F1F1BC3, /*hidden argument*/NULL);
		if (L_32)
		{
			goto IL_028e;
		}
	}
	{
		goto IL_0388;
	}

IL_0162:
	{
		String_t* L_33 = V_1;
		bool L_34;
		L_34 = String_op_Equality_m50B3548E4AC232558190B0052877B290AA1D436A((String_t*)L_33, (String_t*)_stringLiteral5C86338F177203D001C41D9C348A83D1338CC7D0, /*hidden argument*/NULL);
		if (L_34)
		{
			goto IL_02a5;
		}
	}
	{
		goto IL_0388;
	}

IL_0177:
	{
		String_t* L_35 = V_1;
		bool L_36;
		L_36 = String_op_Equality_m50B3548E4AC232558190B0052877B290AA1D436A((String_t*)L_35, (String_t*)_stringLiteralFE5F89F63E2381500F62A7CBD6954563BE44562F, /*hidden argument*/NULL);
		if (L_36)
		{
			goto IL_02bc;
		}
	}
	{
		goto IL_0388;
	}

IL_018c:
	{
		String_t* L_37 = V_1;
		bool L_38;
		L_38 = String_op_Equality_m50B3548E4AC232558190B0052877B290AA1D436A((String_t*)L_37, (String_t*)_stringLiteral87F70660D62DE5FC257FBADE9DA4EC9188597DE5, /*hidden argument*/NULL);
		if (L_38)
		{
			goto IL_02ce;
		}
	}
	{
		goto IL_0388;
	}

IL_01a1:
	{
		String_t* L_39 = V_1;
		bool L_40;
		L_40 = String_op_Equality_m50B3548E4AC232558190B0052877B290AA1D436A((String_t*)L_39, (String_t*)_stringLiteral354281948B6269615E32D856CF85B6F456724DAA, /*hidden argument*/NULL);
		if (L_40)
		{
			goto IL_02e5;
		}
	}
	{
		goto IL_0388;
	}

IL_01b6:
	{
		String_t* L_41 = V_1;
		bool L_42;
		L_42 = String_op_Equality_m50B3548E4AC232558190B0052877B290AA1D436A((String_t*)L_41, (String_t*)_stringLiteralADAEB0839588196B349BDB6CF33AFA3E0736360B, /*hidden argument*/NULL);
		if (L_42)
		{
			goto IL_02fc;
		}
	}
	{
		goto IL_0388;
	}

IL_01cb:
	{
		String_t* L_43 = V_1;
		bool L_44;
		L_44 = String_op_Equality_m50B3548E4AC232558190B0052877B290AA1D436A((String_t*)L_43, (String_t*)_stringLiteralC580B374AA991574F91DFC86C068E7FAD661A3A4, /*hidden argument*/NULL);
		if (L_44)
		{
			goto IL_0310;
		}
	}
	{
		goto IL_0388;
	}

IL_01e0:
	{
		String_t* L_45 = V_1;
		bool L_46;
		L_46 = String_op_Equality_m50B3548E4AC232558190B0052877B290AA1D436A((String_t*)L_45, (String_t*)_stringLiteralE049DB547285CFCE1CB9A95934B6B6DCE2D219EC, /*hidden argument*/NULL);
		if (L_46)
		{
			goto IL_0324;
		}
	}
	{
		goto IL_0388;
	}

IL_01f5:
	{
		String_t* L_47 = V_1;
		bool L_48;
		L_48 = String_op_Equality_m50B3548E4AC232558190B0052877B290AA1D436A((String_t*)L_47, (String_t*)_stringLiteralBF540D6548854CC21630064FBA5390C9409C86F0, /*hidden argument*/NULL);
		if (L_48)
		{
			goto IL_0338;
		}
	}
	{
		goto IL_0388;
	}

IL_020a:
	{
		String_t* L_49 = V_1;
		bool L_50;
		L_50 = String_op_Equality_m50B3548E4AC232558190B0052877B290AA1D436A((String_t*)L_49, (String_t*)_stringLiteral1D87A56AE67B2CD49CAE6E942C2FB7AD98925C00, /*hidden argument*/NULL);
		if (L_50)
		{
			goto IL_034c;
		}
	}
	{
		goto IL_0388;
	}

IL_021f:
	{
		String_t* L_51 = V_1;
		bool L_52;
		L_52 = String_op_Equality_m50B3548E4AC232558190B0052877B290AA1D436A((String_t*)L_51, (String_t*)_stringLiteralA967787586EC9E5A17A9C55E2002AB73A5E21A0A, /*hidden argument*/NULL);
		if (L_52)
		{
			goto IL_0360;
		}
	}
	{
		goto IL_0388;
	}

IL_0234:
	{
		String_t* L_53 = V_1;
		bool L_54;
		L_54 = String_op_Equality_m50B3548E4AC232558190B0052877B290AA1D436A((String_t*)L_53, (String_t*)_stringLiteral47C47DD09640803AD8016748EAE1F04DD1D41119, /*hidden argument*/NULL);
		if (L_54)
		{
			goto IL_0374;
		}
	}
	{
		goto IL_0388;
	}

IL_0249:
	{
		// instance.enabled = reader.Read<System.Boolean>(ES3Type_bool.Instance);
		ES3Reader_t2780AF8AA61DA2A817115CEF8612AC0E494D03C9 * L_55 = ___reader0;
		IL2CPP_RUNTIME_CLASS_INIT(ES3Type_bool_t8F309F7B9CC735FF1DEE68081B6E3CAB367745F4_il2cpp_TypeInfo_var);
		ES3Type_t8FBECB7AE75168648B9524E0C2A38DAD4555421D * L_56 = ((ES3Type_bool_t8F309F7B9CC735FF1DEE68081B6E3CAB367745F4_StaticFields*)il2cpp_codegen_static_fields_for(ES3Type_bool_t8F309F7B9CC735FF1DEE68081B6E3CAB367745F4_il2cpp_TypeInfo_var))->get_Instance_12();
		NullCheck((ES3Reader_t2780AF8AA61DA2A817115CEF8612AC0E494D03C9 *)L_55);
		bool L_57;
		L_57 = GenericVirtFuncInvoker1< bool, ES3Type_t8FBECB7AE75168648B9524E0C2A38DAD4555421D * >::Invoke(ES3Reader_Read_TisBoolean_t07D1E3F34E4813023D64F584DFF7B34C9D922F37_mC6D1B158268FF9B97822FF9F5B37FB1723FEDA22_RuntimeMethod_var, (ES3Reader_t2780AF8AA61DA2A817115CEF8612AC0E494D03C9 *)L_55, (ES3Type_t8FBECB7AE75168648B9524E0C2A38DAD4555421D *)L_56);
		TrailModule_set_enabled_mFC8451DDDF40CCBB3E32A4B30A001115F6346894((TrailModule_t95D15372971E64A1977B7587ABAA87B1A31EF5C8 *)(TrailModule_t95D15372971E64A1977B7587ABAA87B1A31EF5C8 *)(&V_0), (bool)L_57, /*hidden argument*/NULL);
		// break;
		goto IL_038e;
	}

IL_0260:
	{
		// instance.ratio = reader.Read<System.Single>(ES3Type_float.Instance);
		ES3Reader_t2780AF8AA61DA2A817115CEF8612AC0E494D03C9 * L_58 = ___reader0;
		IL2CPP_RUNTIME_CLASS_INIT(ES3Type_float_tF86B773C86731BD9AD79448B860BBB178FE77644_il2cpp_TypeInfo_var);
		ES3Type_t8FBECB7AE75168648B9524E0C2A38DAD4555421D * L_59 = ((ES3Type_float_tF86B773C86731BD9AD79448B860BBB178FE77644_StaticFields*)il2cpp_codegen_static_fields_for(ES3Type_float_tF86B773C86731BD9AD79448B860BBB178FE77644_il2cpp_TypeInfo_var))->get_Instance_12();
		NullCheck((ES3Reader_t2780AF8AA61DA2A817115CEF8612AC0E494D03C9 *)L_58);
		float L_60;
		L_60 = GenericVirtFuncInvoker1< float, ES3Type_t8FBECB7AE75168648B9524E0C2A38DAD4555421D * >::Invoke(ES3Reader_Read_TisSingle_tE07797BA3C98D4CA9B5A19413C19A76688AB899E_m4A0416374498BDA042B8EB21E49B72326D6CE5F4_RuntimeMethod_var, (ES3Reader_t2780AF8AA61DA2A817115CEF8612AC0E494D03C9 *)L_58, (ES3Type_t8FBECB7AE75168648B9524E0C2A38DAD4555421D *)L_59);
		TrailModule_set_ratio_m34E63B34E7B0E8D037AD45532B2E2D5BD0750189((TrailModule_t95D15372971E64A1977B7587ABAA87B1A31EF5C8 *)(TrailModule_t95D15372971E64A1977B7587ABAA87B1A31EF5C8 *)(&V_0), (float)L_60, /*hidden argument*/NULL);
		// break;
		goto IL_038e;
	}

IL_0277:
	{
		// instance.lifetime = reader.Read<UnityEngine.ParticleSystem.MinMaxCurve>(ES3Type_MinMaxCurve.Instance);
		ES3Reader_t2780AF8AA61DA2A817115CEF8612AC0E494D03C9 * L_61 = ___reader0;
		IL2CPP_RUNTIME_CLASS_INIT(ES3Type_MinMaxCurve_tC5342BF0F8735B85CB5E16FDD4C6FACC8AFAD3B7_il2cpp_TypeInfo_var);
		ES3Type_t8FBECB7AE75168648B9524E0C2A38DAD4555421D * L_62 = ((ES3Type_MinMaxCurve_tC5342BF0F8735B85CB5E16FDD4C6FACC8AFAD3B7_StaticFields*)il2cpp_codegen_static_fields_for(ES3Type_MinMaxCurve_tC5342BF0F8735B85CB5E16FDD4C6FACC8AFAD3B7_il2cpp_TypeInfo_var))->get_Instance_12();
		NullCheck((ES3Reader_t2780AF8AA61DA2A817115CEF8612AC0E494D03C9 *)L_61);
		MinMaxCurve_tF036239442AB2D438B1EDABEBC785426871084CD  L_63;
		L_63 = GenericVirtFuncInvoker1< MinMaxCurve_tF036239442AB2D438B1EDABEBC785426871084CD , ES3Type_t8FBECB7AE75168648B9524E0C2A38DAD4555421D * >::Invoke(ES3Reader_Read_TisMinMaxCurve_tF036239442AB2D438B1EDABEBC785426871084CD_mD285150CBFB52440643BBECB5ADF4EE8DE940535_RuntimeMethod_var, (ES3Reader_t2780AF8AA61DA2A817115CEF8612AC0E494D03C9 *)L_61, (ES3Type_t8FBECB7AE75168648B9524E0C2A38DAD4555421D *)L_62);
		TrailModule_set_lifetime_m57C898C42B9F18F5A0E88AAA7B10276CC158C39D((TrailModule_t95D15372971E64A1977B7587ABAA87B1A31EF5C8 *)(TrailModule_t95D15372971E64A1977B7587ABAA87B1A31EF5C8 *)(&V_0), (MinMaxCurve_tF036239442AB2D438B1EDABEBC785426871084CD )L_63, /*hidden argument*/NULL);
		// break;
		goto IL_038e;
	}

IL_028e:
	{
		// instance.lifetimeMultiplier = reader.Read<System.Single>(ES3Type_float.Instance);
		ES3Reader_t2780AF8AA61DA2A817115CEF8612AC0E494D03C9 * L_64 = ___reader0;
		IL2CPP_RUNTIME_CLASS_INIT(ES3Type_float_tF86B773C86731BD9AD79448B860BBB178FE77644_il2cpp_TypeInfo_var);
		ES3Type_t8FBECB7AE75168648B9524E0C2A38DAD4555421D * L_65 = ((ES3Type_float_tF86B773C86731BD9AD79448B860BBB178FE77644_StaticFields*)il2cpp_codegen_static_fields_for(ES3Type_float_tF86B773C86731BD9AD79448B860BBB178FE77644_il2cpp_TypeInfo_var))->get_Instance_12();
		NullCheck((ES3Reader_t2780AF8AA61DA2A817115CEF8612AC0E494D03C9 *)L_64);
		float L_66;
		L_66 = GenericVirtFuncInvoker1< float, ES3Type_t8FBECB7AE75168648B9524E0C2A38DAD4555421D * >::Invoke(ES3Reader_Read_TisSingle_tE07797BA3C98D4CA9B5A19413C19A76688AB899E_m4A0416374498BDA042B8EB21E49B72326D6CE5F4_RuntimeMethod_var, (ES3Reader_t2780AF8AA61DA2A817115CEF8612AC0E494D03C9 *)L_64, (ES3Type_t8FBECB7AE75168648B9524E0C2A38DAD4555421D *)L_65);
		TrailModule_set_lifetimeMultiplier_m23F95D65EE8C82152AE1CF2E41531EC2789A866B((TrailModule_t95D15372971E64A1977B7587ABAA87B1A31EF5C8 *)(TrailModule_t95D15372971E64A1977B7587ABAA87B1A31EF5C8 *)(&V_0), (float)L_66, /*hidden argument*/NULL);
		// break;
		goto IL_038e;
	}

IL_02a5:
	{
		// instance.minVertexDistance = reader.Read<System.Single>(ES3Type_float.Instance);
		ES3Reader_t2780AF8AA61DA2A817115CEF8612AC0E494D03C9 * L_67 = ___reader0;
		IL2CPP_RUNTIME_CLASS_INIT(ES3Type_float_tF86B773C86731BD9AD79448B860BBB178FE77644_il2cpp_TypeInfo_var);
		ES3Type_t8FBECB7AE75168648B9524E0C2A38DAD4555421D * L_68 = ((ES3Type_float_tF86B773C86731BD9AD79448B860BBB178FE77644_StaticFields*)il2cpp_codegen_static_fields_for(ES3Type_float_tF86B773C86731BD9AD79448B860BBB178FE77644_il2cpp_TypeInfo_var))->get_Instance_12();
		NullCheck((ES3Reader_t2780AF8AA61DA2A817115CEF8612AC0E494D03C9 *)L_67);
		float L_69;
		L_69 = GenericVirtFuncInvoker1< float, ES3Type_t8FBECB7AE75168648B9524E0C2A38DAD4555421D * >::Invoke(ES3Reader_Read_TisSingle_tE07797BA3C98D4CA9B5A19413C19A76688AB899E_m4A0416374498BDA042B8EB21E49B72326D6CE5F4_RuntimeMethod_var, (ES3Reader_t2780AF8AA61DA2A817115CEF8612AC0E494D03C9 *)L_67, (ES3Type_t8FBECB7AE75168648B9524E0C2A38DAD4555421D *)L_68);
		TrailModule_set_minVertexDistance_mF7C29F88FBF540CE4987F4CF9B141C624808FBC5((TrailModule_t95D15372971E64A1977B7587ABAA87B1A31EF5C8 *)(TrailModule_t95D15372971E64A1977B7587ABAA87B1A31EF5C8 *)(&V_0), (float)L_69, /*hidden argument*/NULL);
		// break;
		goto IL_038e;
	}

IL_02bc:
	{
		// instance.textureMode = reader.Read<UnityEngine.ParticleSystemTrailTextureMode>();
		ES3Reader_t2780AF8AA61DA2A817115CEF8612AC0E494D03C9 * L_70 = ___reader0;
		NullCheck((ES3Reader_t2780AF8AA61DA2A817115CEF8612AC0E494D03C9 *)L_70);
		int32_t L_71;
		L_71 = GenericVirtFuncInvoker0< int32_t >::Invoke(ES3Reader_Read_TisParticleSystemTrailTextureMode_tF3259187CA4D0A61EDB3A40E63CBF6C42641CE9F_m055DB1212E8BC34F385DF7D302F16241554E9730_RuntimeMethod_var, (ES3Reader_t2780AF8AA61DA2A817115CEF8612AC0E494D03C9 *)L_70);
		TrailModule_set_textureMode_mC1F8AE0D2965FC47BDBFF4F53E0673D5FB58CF28((TrailModule_t95D15372971E64A1977B7587ABAA87B1A31EF5C8 *)(TrailModule_t95D15372971E64A1977B7587ABAA87B1A31EF5C8 *)(&V_0), (int32_t)L_71, /*hidden argument*/NULL);
		// break;
		goto IL_038e;
	}

IL_02ce:
	{
		// instance.worldSpace = reader.Read<System.Boolean>(ES3Type_bool.Instance);
		ES3Reader_t2780AF8AA61DA2A817115CEF8612AC0E494D03C9 * L_72 = ___reader0;
		IL2CPP_RUNTIME_CLASS_INIT(ES3Type_bool_t8F309F7B9CC735FF1DEE68081B6E3CAB367745F4_il2cpp_TypeInfo_var);
		ES3Type_t8FBECB7AE75168648B9524E0C2A38DAD4555421D * L_73 = ((ES3Type_bool_t8F309F7B9CC735FF1DEE68081B6E3CAB367745F4_StaticFields*)il2cpp_codegen_static_fields_for(ES3Type_bool_t8F309F7B9CC735FF1DEE68081B6E3CAB367745F4_il2cpp_TypeInfo_var))->get_Instance_12();
		NullCheck((ES3Reader_t2780AF8AA61DA2A817115CEF8612AC0E494D03C9 *)L_72);
		bool L_74;
		L_74 = GenericVirtFuncInvoker1< bool, ES3Type_t8FBECB7AE75168648B9524E0C2A38DAD4555421D * >::Invoke(ES3Reader_Read_TisBoolean_t07D1E3F34E4813023D64F584DFF7B34C9D922F37_mC6D1B158268FF9B97822FF9F5B37FB1723FEDA22_RuntimeMethod_var, (ES3Reader_t2780AF8AA61DA2A817115CEF8612AC0E494D03C9 *)L_72, (ES3Type_t8FBECB7AE75168648B9524E0C2A38DAD4555421D *)L_73);
		TrailModule_set_worldSpace_m42A63AF4A96F24A621A29A0F35240195F0E56B1A((TrailModule_t95D15372971E64A1977B7587ABAA87B1A31EF5C8 *)(TrailModule_t95D15372971E64A1977B7587ABAA87B1A31EF5C8 *)(&V_0), (bool)L_74, /*hidden argument*/NULL);
		// break;
		goto IL_038e;
	}

IL_02e5:
	{
		// instance.dieWithParticles = reader.Read<System.Boolean>(ES3Type_bool.Instance);
		ES3Reader_t2780AF8AA61DA2A817115CEF8612AC0E494D03C9 * L_75 = ___reader0;
		IL2CPP_RUNTIME_CLASS_INIT(ES3Type_bool_t8F309F7B9CC735FF1DEE68081B6E3CAB367745F4_il2cpp_TypeInfo_var);
		ES3Type_t8FBECB7AE75168648B9524E0C2A38DAD4555421D * L_76 = ((ES3Type_bool_t8F309F7B9CC735FF1DEE68081B6E3CAB367745F4_StaticFields*)il2cpp_codegen_static_fields_for(ES3Type_bool_t8F309F7B9CC735FF1DEE68081B6E3CAB367745F4_il2cpp_TypeInfo_var))->get_Instance_12();
		NullCheck((ES3Reader_t2780AF8AA61DA2A817115CEF8612AC0E494D03C9 *)L_75);
		bool L_77;
		L_77 = GenericVirtFuncInvoker1< bool, ES3Type_t8FBECB7AE75168648B9524E0C2A38DAD4555421D * >::Invoke(ES3Reader_Read_TisBoolean_t07D1E3F34E4813023D64F584DFF7B34C9D922F37_mC6D1B158268FF9B97822FF9F5B37FB1723FEDA22_RuntimeMethod_var, (ES3Reader_t2780AF8AA61DA2A817115CEF8612AC0E494D03C9 *)L_75, (ES3Type_t8FBECB7AE75168648B9524E0C2A38DAD4555421D *)L_76);
		TrailModule_set_dieWithParticles_mB7C4E8DC2F908FDF6D57A77B54B821E360D8DA99((TrailModule_t95D15372971E64A1977B7587ABAA87B1A31EF5C8 *)(TrailModule_t95D15372971E64A1977B7587ABAA87B1A31EF5C8 *)(&V_0), (bool)L_77, /*hidden argument*/NULL);
		// break;
		goto IL_038e;
	}

IL_02fc:
	{
		// instance.sizeAffectsWidth = reader.Read<System.Boolean>(ES3Type_bool.Instance);
		ES3Reader_t2780AF8AA61DA2A817115CEF8612AC0E494D03C9 * L_78 = ___reader0;
		IL2CPP_RUNTIME_CLASS_INIT(ES3Type_bool_t8F309F7B9CC735FF1DEE68081B6E3CAB367745F4_il2cpp_TypeInfo_var);
		ES3Type_t8FBECB7AE75168648B9524E0C2A38DAD4555421D * L_79 = ((ES3Type_bool_t8F309F7B9CC735FF1DEE68081B6E3CAB367745F4_StaticFields*)il2cpp_codegen_static_fields_for(ES3Type_bool_t8F309F7B9CC735FF1DEE68081B6E3CAB367745F4_il2cpp_TypeInfo_var))->get_Instance_12();
		NullCheck((ES3Reader_t2780AF8AA61DA2A817115CEF8612AC0E494D03C9 *)L_78);
		bool L_80;
		L_80 = GenericVirtFuncInvoker1< bool, ES3Type_t8FBECB7AE75168648B9524E0C2A38DAD4555421D * >::Invoke(ES3Reader_Read_TisBoolean_t07D1E3F34E4813023D64F584DFF7B34C9D922F37_mC6D1B158268FF9B97822FF9F5B37FB1723FEDA22_RuntimeMethod_var, (ES3Reader_t2780AF8AA61DA2A817115CEF8612AC0E494D03C9 *)L_78, (ES3Type_t8FBECB7AE75168648B9524E0C2A38DAD4555421D *)L_79);
		TrailModule_set_sizeAffectsWidth_m3517856E39080DA69B447499C8846D2491B0ABF0((TrailModule_t95D15372971E64A1977B7587ABAA87B1A31EF5C8 *)(TrailModule_t95D15372971E64A1977B7587ABAA87B1A31EF5C8 *)(&V_0), (bool)L_80, /*hidden argument*/NULL);
		// break;
		goto IL_038e;
	}

IL_0310:
	{
		// instance.sizeAffectsLifetime = reader.Read<System.Boolean>(ES3Type_bool.Instance);
		ES3Reader_t2780AF8AA61DA2A817115CEF8612AC0E494D03C9 * L_81 = ___reader0;
		IL2CPP_RUNTIME_CLASS_INIT(ES3Type_bool_t8F309F7B9CC735FF1DEE68081B6E3CAB367745F4_il2cpp_TypeInfo_var);
		ES3Type_t8FBECB7AE75168648B9524E0C2A38DAD4555421D * L_82 = ((ES3Type_bool_t8F309F7B9CC735FF1DEE68081B6E3CAB367745F4_StaticFields*)il2cpp_codegen_static_fields_for(ES3Type_bool_t8F309F7B9CC735FF1DEE68081B6E3CAB367745F4_il2cpp_TypeInfo_var))->get_Instance_12();
		NullCheck((ES3Reader_t2780AF8AA61DA2A817115CEF8612AC0E494D03C9 *)L_81);
		bool L_83;
		L_83 = GenericVirtFuncInvoker1< bool, ES3Type_t8FBECB7AE75168648B9524E0C2A38DAD4555421D * >::Invoke(ES3Reader_Read_TisBoolean_t07D1E3F34E4813023D64F584DFF7B34C9D922F37_mC6D1B158268FF9B97822FF9F5B37FB1723FEDA22_RuntimeMethod_var, (ES3Reader_t2780AF8AA61DA2A817115CEF8612AC0E494D03C9 *)L_81, (ES3Type_t8FBECB7AE75168648B9524E0C2A38DAD4555421D *)L_82);
		TrailModule_set_sizeAffectsLifetime_m98BF4A6594193D824B52D88371CF963ACBA388FD((TrailModule_t95D15372971E64A1977B7587ABAA87B1A31EF5C8 *)(TrailModule_t95D15372971E64A1977B7587ABAA87B1A31EF5C8 *)(&V_0), (bool)L_83, /*hidden argument*/NULL);
		// break;
		goto IL_038e;
	}

IL_0324:
	{
		// instance.inheritParticleColor = reader.Read<System.Boolean>(ES3Type_bool.Instance);
		ES3Reader_t2780AF8AA61DA2A817115CEF8612AC0E494D03C9 * L_84 = ___reader0;
		IL2CPP_RUNTIME_CLASS_INIT(ES3Type_bool_t8F309F7B9CC735FF1DEE68081B6E3CAB367745F4_il2cpp_TypeInfo_var);
		ES3Type_t8FBECB7AE75168648B9524E0C2A38DAD4555421D * L_85 = ((ES3Type_bool_t8F309F7B9CC735FF1DEE68081B6E3CAB367745F4_StaticFields*)il2cpp_codegen_static_fields_for(ES3Type_bool_t8F309F7B9CC735FF1DEE68081B6E3CAB367745F4_il2cpp_TypeInfo_var))->get_Instance_12();
		NullCheck((ES3Reader_t2780AF8AA61DA2A817115CEF8612AC0E494D03C9 *)L_84);
		bool L_86;
		L_86 = GenericVirtFuncInvoker1< bool, ES3Type_t8FBECB7AE75168648B9524E0C2A38DAD4555421D * >::Invoke(ES3Reader_Read_TisBoolean_t07D1E3F34E4813023D64F584DFF7B34C9D922F37_mC6D1B158268FF9B97822FF9F5B37FB1723FEDA22_RuntimeMethod_var, (ES3Reader_t2780AF8AA61DA2A817115CEF8612AC0E494D03C9 *)L_84, (ES3Type_t8FBECB7AE75168648B9524E0C2A38DAD4555421D *)L_85);
		TrailModule_set_inheritParticleColor_mCD83E87B5E00F2BFFBE08AD2D1D68606283A4FEE((TrailModule_t95D15372971E64A1977B7587ABAA87B1A31EF5C8 *)(TrailModule_t95D15372971E64A1977B7587ABAA87B1A31EF5C8 *)(&V_0), (bool)L_86, /*hidden argument*/NULL);
		// break;
		goto IL_038e;
	}

IL_0338:
	{
		// instance.colorOverLifetime = reader.Read<UnityEngine.ParticleSystem.MinMaxGradient>(ES3Type_MinMaxGradient.Instance);
		ES3Reader_t2780AF8AA61DA2A817115CEF8612AC0E494D03C9 * L_87 = ___reader0;
		IL2CPP_RUNTIME_CLASS_INIT(ES3Type_MinMaxGradient_t5DD353D60E95642AB39D1C97C6FD6DD1B067D3CF_il2cpp_TypeInfo_var);
		ES3Type_t8FBECB7AE75168648B9524E0C2A38DAD4555421D * L_88 = ((ES3Type_MinMaxGradient_t5DD353D60E95642AB39D1C97C6FD6DD1B067D3CF_StaticFields*)il2cpp_codegen_static_fields_for(ES3Type_MinMaxGradient_t5DD353D60E95642AB39D1C97C6FD6DD1B067D3CF_il2cpp_TypeInfo_var))->get_Instance_12();
		NullCheck((ES3Reader_t2780AF8AA61DA2A817115CEF8612AC0E494D03C9 *)L_87);
		MinMaxGradient_tF4530B26F29D9635D670A33B9EE581EAC48C12B7  L_89;
		L_89 = GenericVirtFuncInvoker1< MinMaxGradient_tF4530B26F29D9635D670A33B9EE581EAC48C12B7 , ES3Type_t8FBECB7AE75168648B9524E0C2A38DAD4555421D * >::Invoke(ES3Reader_Read_TisMinMaxGradient_tF4530B26F29D9635D670A33B9EE581EAC48C12B7_m6A3DD8CBBAC5D32B838B6C4399009AB8AA512ACC_RuntimeMethod_var, (ES3Reader_t2780AF8AA61DA2A817115CEF8612AC0E494D03C9 *)L_87, (ES3Type_t8FBECB7AE75168648B9524E0C2A38DAD4555421D *)L_88);
		TrailModule_set_colorOverLifetime_mCD56BD4B75D3A3947069BA1B93FEC78AAE08DF27((TrailModule_t95D15372971E64A1977B7587ABAA87B1A31EF5C8 *)(TrailModule_t95D15372971E64A1977B7587ABAA87B1A31EF5C8 *)(&V_0), (MinMaxGradient_tF4530B26F29D9635D670A33B9EE581EAC48C12B7 )L_89, /*hidden argument*/NULL);
		// break;
		goto IL_038e;
	}

IL_034c:
	{
		// instance.widthOverTrail = reader.Read<UnityEngine.ParticleSystem.MinMaxCurve>(ES3Type_MinMaxCurve.Instance);
		ES3Reader_t2780AF8AA61DA2A817115CEF8612AC0E494D03C9 * L_90 = ___reader0;
		IL2CPP_RUNTIME_CLASS_INIT(ES3Type_MinMaxCurve_tC5342BF0F8735B85CB5E16FDD4C6FACC8AFAD3B7_il2cpp_TypeInfo_var);
		ES3Type_t8FBECB7AE75168648B9524E0C2A38DAD4555421D * L_91 = ((ES3Type_MinMaxCurve_tC5342BF0F8735B85CB5E16FDD4C6FACC8AFAD3B7_StaticFields*)il2cpp_codegen_static_fields_for(ES3Type_MinMaxCurve_tC5342BF0F8735B85CB5E16FDD4C6FACC8AFAD3B7_il2cpp_TypeInfo_var))->get_Instance_12();
		NullCheck((ES3Reader_t2780AF8AA61DA2A817115CEF8612AC0E494D03C9 *)L_90);
		MinMaxCurve_tF036239442AB2D438B1EDABEBC785426871084CD  L_92;
		L_92 = GenericVirtFuncInvoker1< MinMaxCurve_tF036239442AB2D438B1EDABEBC785426871084CD , ES3Type_t8FBECB7AE75168648B9524E0C2A38DAD4555421D * >::Invoke(ES3Reader_Read_TisMinMaxCurve_tF036239442AB2D438B1EDABEBC785426871084CD_mD285150CBFB52440643BBECB5ADF4EE8DE940535_RuntimeMethod_var, (ES3Reader_t2780AF8AA61DA2A817115CEF8612AC0E494D03C9 *)L_90, (ES3Type_t8FBECB7AE75168648B9524E0C2A38DAD4555421D *)L_91);
		TrailModule_set_widthOverTrail_m6C0A896EBFDED7CE46344B3A0B04212934F30DE1((TrailModule_t95D15372971E64A1977B7587ABAA87B1A31EF5C8 *)(TrailModule_t95D15372971E64A1977B7587ABAA87B1A31EF5C8 *)(&V_0), (MinMaxCurve_tF036239442AB2D438B1EDABEBC785426871084CD )L_92, /*hidden argument*/NULL);
		// break;
		goto IL_038e;
	}

IL_0360:
	{
		// instance.widthOverTrailMultiplier = reader.Read<System.Single>(ES3Type_float.Instance);
		ES3Reader_t2780AF8AA61DA2A817115CEF8612AC0E494D03C9 * L_93 = ___reader0;
		IL2CPP_RUNTIME_CLASS_INIT(ES3Type_float_tF86B773C86731BD9AD79448B860BBB178FE77644_il2cpp_TypeInfo_var);
		ES3Type_t8FBECB7AE75168648B9524E0C2A38DAD4555421D * L_94 = ((ES3Type_float_tF86B773C86731BD9AD79448B860BBB178FE77644_StaticFields*)il2cpp_codegen_static_fields_for(ES3Type_float_tF86B773C86731BD9AD79448B860BBB178FE77644_il2cpp_TypeInfo_var))->get_Instance_12();
		NullCheck((ES3Reader_t2780AF8AA61DA2A817115CEF8612AC0E494D03C9 *)L_93);
		float L_95;
		L_95 = GenericVirtFuncInvoker1< float, ES3Type_t8FBECB7AE75168648B9524E0C2A38DAD4555421D * >::Invoke(ES3Reader_Read_TisSingle_tE07797BA3C98D4CA9B5A19413C19A76688AB899E_m4A0416374498BDA042B8EB21E49B72326D6CE5F4_RuntimeMethod_var, (ES3Reader_t2780AF8AA61DA2A817115CEF8612AC0E494D03C9 *)L_93, (ES3Type_t8FBECB7AE75168648B9524E0C2A38DAD4555421D *)L_94);
		TrailModule_set_widthOverTrailMultiplier_m6A7EA2856CF30B710CCB528EA3EBFD1799C19BD4((TrailModule_t95D15372971E64A1977B7587ABAA87B1A31EF5C8 *)(TrailModule_t95D15372971E64A1977B7587ABAA87B1A31EF5C8 *)(&V_0), (float)L_95, /*hidden argument*/NULL);
		// break;
		goto IL_038e;
	}

IL_0374:
	{
		// instance.colorOverTrail = reader.Read<UnityEngine.ParticleSystem.MinMaxGradient>(ES3Type_MinMaxGradient.Instance);
		ES3Reader_t2780AF8AA61DA2A817115CEF8612AC0E494D03C9 * L_96 = ___reader0;
		IL2CPP_RUNTIME_CLASS_INIT(ES3Type_MinMaxGradient_t5DD353D60E95642AB39D1C97C6FD6DD1B067D3CF_il2cpp_TypeInfo_var);
		ES3Type_t8FBECB7AE75168648B9524E0C2A38DAD4555421D * L_97 = ((ES3Type_MinMaxGradient_t5DD353D60E95642AB39D1C97C6FD6DD1B067D3CF_StaticFields*)il2cpp_codegen_static_fields_for(ES3Type_MinMaxGradient_t5DD353D60E95642AB39D1C97C6FD6DD1B067D3CF_il2cpp_TypeInfo_var))->get_Instance_12();
		NullCheck((ES3Reader_t2780AF8AA61DA2A817115CEF8612AC0E494D03C9 *)L_96);
		MinMaxGradient_tF4530B26F29D9635D670A33B9EE581EAC48C12B7  L_98;
		L_98 = GenericVirtFuncInvoker1< MinMaxGradient_tF4530B26F29D9635D670A33B9EE581EAC48C12B7 , ES3Type_t8FBECB7AE75168648B9524E0C2A38DAD4555421D * >::Invoke(ES3Reader_Read_TisMinMaxGradient_tF4530B26F29D9635D670A33B9EE581EAC48C12B7_m6A3DD8CBBAC5D32B838B6C4399009AB8AA512ACC_RuntimeMethod_var, (ES3Reader_t2780AF8AA61DA2A817115CEF8612AC0E494D03C9 *)L_96, (ES3Type_t8FBECB7AE75168648B9524E0C2A38DAD4555421D *)L_97);
		TrailModule_set_colorOverTrail_m8440C6574C8310292B93D70EA4FE3EE8C40DF8DB((TrailModule_t95D15372971E64A1977B7587ABAA87B1A31EF5C8 *)(TrailModule_t95D15372971E64A1977B7587ABAA87B1A31EF5C8 *)(&V_0), (MinMaxGradient_tF4530B26F29D9635D670A33B9EE581EAC48C12B7 )L_98, /*hidden argument*/NULL);
		// break;
		goto IL_038e;
	}

IL_0388:
	{
		// reader.Skip();
		ES3Reader_t2780AF8AA61DA2A817115CEF8612AC0E494D03C9 * L_99 = ___reader0;
		NullCheck((ES3Reader_t2780AF8AA61DA2A817115CEF8612AC0E494D03C9 *)L_99);
		VirtActionInvoker0::Invoke(41 /* System.Void ES3Reader::Skip() */, (ES3Reader_t2780AF8AA61DA2A817115CEF8612AC0E494D03C9 *)L_99);
	}

IL_038e:
	{
		// while((propertyName = reader.ReadPropertyName()) != null)
		ES3Reader_t2780AF8AA61DA2A817115CEF8612AC0E494D03C9 * L_100 = ___reader0;
		NullCheck((ES3Reader_t2780AF8AA61DA2A817115CEF8612AC0E494D03C9 *)L_100);
		String_t* L_101;
		L_101 = VirtFuncInvoker0< String_t* >::Invoke(21 /* System.String ES3Reader::ReadPropertyName() */, (ES3Reader_t2780AF8AA61DA2A817115CEF8612AC0E494D03C9 *)L_100);
		String_t* L_102 = (String_t*)L_101;
		V_1 = (String_t*)L_102;
		if (L_102)
		{
			goto IL_000c;
		}
	}
	{
		// }
		return;
	}
}
// System.Void ES3Types.ES3Type_TrailModule::ReadInto<UnityEngine.ParticleSystem/EmissionModule>(ES3Reader,System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ES3Type_TrailModule_ReadInto_TisEmissionModule_tE778D94F4003A96ECE3D8B670DDEDD2D557DE52D_mD50332800724C31152BDDC750DC86FCE731391D6_gshared (ES3Type_TrailModule_tC773F73EC0443516DD128FF2B5AE010809742462 * __this, ES3Reader_t2780AF8AA61DA2A817115CEF8612AC0E494D03C9 * ___reader0, RuntimeObject * ___obj1, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ES3Reader_Read_TisBoolean_t07D1E3F34E4813023D64F584DFF7B34C9D922F37_mC6D1B158268FF9B97822FF9F5B37FB1723FEDA22_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ES3Reader_Read_TisMinMaxCurve_tF036239442AB2D438B1EDABEBC785426871084CD_mD285150CBFB52440643BBECB5ADF4EE8DE940535_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ES3Reader_Read_TisMinMaxGradient_tF4530B26F29D9635D670A33B9EE581EAC48C12B7_m6A3DD8CBBAC5D32B838B6C4399009AB8AA512ACC_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ES3Reader_Read_TisParticleSystemTrailTextureMode_tF3259187CA4D0A61EDB3A40E63CBF6C42641CE9F_m055DB1212E8BC34F385DF7D302F16241554E9730_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ES3Reader_Read_TisSingle_tE07797BA3C98D4CA9B5A19413C19A76688AB899E_m4A0416374498BDA042B8EB21E49B72326D6CE5F4_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ES3Type_MinMaxCurve_tC5342BF0F8735B85CB5E16FDD4C6FACC8AFAD3B7_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ES3Type_MinMaxGradient_t5DD353D60E95642AB39D1C97C6FD6DD1B067D3CF_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ES3Type_bool_t8F309F7B9CC735FF1DEE68081B6E3CAB367745F4_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ES3Type_float_tF86B773C86731BD9AD79448B860BBB178FE77644_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&TrailModule_t95D15372971E64A1977B7587ABAA87B1A31EF5C8_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral1D87A56AE67B2CD49CAE6E942C2FB7AD98925C00);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral354281948B6269615E32D856CF85B6F456724DAA);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral4221314F268D184F46688D45C85446821F1F1BC3);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral47C47DD09640803AD8016748EAE1F04DD1D41119);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral5C86338F177203D001C41D9C348A83D1338CC7D0);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral60126327537B7B8E6EE33C43FE0C5CA8BCC3A06A);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral87F70660D62DE5FC257FBADE9DA4EC9188597DE5);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralA967787586EC9E5A17A9C55E2002AB73A5E21A0A);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralADAEB0839588196B349BDB6CF33AFA3E0736360B);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralBE2893848F9FC647C2288DA6581A1522E9695182);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralBF540D6548854CC21630064FBA5390C9409C86F0);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralC580B374AA991574F91DFC86C068E7FAD661A3A4);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralE049DB547285CFCE1CB9A95934B6B6DCE2D219EC);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralF9D225733E1D10F9344C755C4A9C0870CD1DE97B);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralFE5F89F63E2381500F62A7CBD6954563BE44562F);
		s_Il2CppMethodInitialized = true;
	}
	TrailModule_t95D15372971E64A1977B7587ABAA87B1A31EF5C8  V_0;
	memset((&V_0), 0, sizeof(V_0));
	String_t* V_1 = NULL;
	uint32_t V_2 = 0;
	{
		// var instance = (UnityEngine.ParticleSystem.TrailModule)obj;
		RuntimeObject * L_0 = ___obj1;
		V_0 = (TrailModule_t95D15372971E64A1977B7587ABAA87B1A31EF5C8 )((*(TrailModule_t95D15372971E64A1977B7587ABAA87B1A31EF5C8 *)((TrailModule_t95D15372971E64A1977B7587ABAA87B1A31EF5C8 *)UnBox(L_0, TrailModule_t95D15372971E64A1977B7587ABAA87B1A31EF5C8_il2cpp_TypeInfo_var))));
		goto IL_038e;
	}

IL_000c:
	{
		String_t* L_1 = V_1;
		if (!L_1)
		{
			goto IL_0388;
		}
	}
	{
		String_t* L_2 = V_1;
		uint32_t L_3;
		L_3 = U3CPrivateImplementationDetailsU3E_ComputeStringHash_m3ADC1F612F9EE3DD518E6F0023A0DE0EE2B120A7((String_t*)L_2, /*hidden argument*/NULL);
		V_2 = (uint32_t)L_3;
		uint32_t L_4 = V_2;
		if ((!(((uint32_t)L_4) <= ((uint32_t)((int32_t)1376955374)))))
		{
			goto IL_008d;
		}
	}
	{
		uint32_t L_5 = V_2;
		if ((!(((uint32_t)L_5) <= ((uint32_t)((int32_t)494095910)))))
		{
			goto IL_004f;
		}
	}
	{
		uint32_t L_6 = V_2;
		if ((((int32_t)L_6) == ((int32_t)((int32_t)49525662))))
		{
			goto IL_010e;
		}
	}
	{
		uint32_t L_7 = V_2;
		if ((((int32_t)L_7) == ((int32_t)((int32_t)341298456))))
		{
			goto IL_021f;
		}
	}
	{
		uint32_t L_8 = V_2;
		if ((((int32_t)L_8) == ((int32_t)((int32_t)494095910))))
		{
			goto IL_0234;
		}
	}
	{
		goto IL_0388;
	}

IL_004f:
	{
		uint32_t L_9 = V_2;
		if ((!(((uint32_t)L_9) <= ((uint32_t)((int32_t)973733911)))))
		{
			goto IL_0072;
		}
	}
	{
		uint32_t L_10 = V_2;
		if ((((int32_t)L_10) == ((int32_t)((int32_t)559929418))))
		{
			goto IL_01b6;
		}
	}
	{
		uint32_t L_11 = V_2;
		if ((((int32_t)L_11) == ((int32_t)((int32_t)973733911))))
		{
			goto IL_0177;
		}
	}
	{
		goto IL_0388;
	}

IL_0072:
	{
		uint32_t L_12 = V_2;
		if ((((int32_t)L_12) == ((int32_t)((int32_t)1024708593))))
		{
			goto IL_014d;
		}
	}
	{
		uint32_t L_13 = V_2;
		if ((((int32_t)L_13) == ((int32_t)((int32_t)1376955374))))
		{
			goto IL_0138;
		}
	}
	{
		goto IL_0388;
	}

IL_008d:
	{
		uint32_t L_14 = V_2;
		if ((!(((uint32_t)L_14) <= ((uint32_t)((int32_t)-2100707162)))))
		{
			goto IL_00d3;
		}
	}
	{
		uint32_t L_15 = V_2;
		if ((!(((uint32_t)L_15) <= ((uint32_t)((int32_t)1975189197)))))
		{
			goto IL_00b8;
		}
	}
	{
		uint32_t L_16 = V_2;
		if ((((int32_t)L_16) == ((int32_t)((int32_t)1546474083))))
		{
			goto IL_020a;
		}
	}
	{
		uint32_t L_17 = V_2;
		if ((((int32_t)L_17) == ((int32_t)((int32_t)1975189197))))
		{
			goto IL_01cb;
		}
	}
	{
		goto IL_0388;
	}

IL_00b8:
	{
		uint32_t L_18 = V_2;
		if ((((int32_t)L_18) == ((int32_t)((int32_t)2053023684))))
		{
			goto IL_01a1;
		}
	}
	{
		uint32_t L_19 = V_2;
		if ((((int32_t)L_19) == ((int32_t)((int32_t)-2100707162))))
		{
			goto IL_0162;
		}
	}
	{
		goto IL_0388;
	}

IL_00d3:
	{
		uint32_t L_20 = V_2;
		if ((!(((uint32_t)L_20) <= ((uint32_t)((int32_t)-1319579393)))))
		{
			goto IL_00f6;
		}
	}
	{
		uint32_t L_21 = V_2;
		if ((((int32_t)L_21) == ((int32_t)((int32_t)-1562862963))))
		{
			goto IL_01e0;
		}
	}
	{
		uint32_t L_22 = V_2;
		if ((((int32_t)L_22) == ((int32_t)((int32_t)-1319579393))))
		{
			goto IL_018c;
		}
	}
	{
		goto IL_0388;
	}

IL_00f6:
	{
		uint32_t L_23 = V_2;
		if ((((int32_t)L_23) == ((int32_t)((int32_t)-1055777148))))
		{
			goto IL_0123;
		}
	}
	{
		uint32_t L_24 = V_2;
		if ((((int32_t)L_24) == ((int32_t)((int32_t)-413379935))))
		{
			goto IL_01f5;
		}
	}
	{
		goto IL_0388;
	}

IL_010e:
	{
		String_t* L_25 = V_1;
		bool L_26;
		L_26 = String_op_Equality_m50B3548E4AC232558190B0052877B290AA1D436A((String_t*)L_25, (String_t*)_stringLiteralF9D225733E1D10F9344C755C4A9C0870CD1DE97B, /*hidden argument*/NULL);
		if (L_26)
		{
			goto IL_0249;
		}
	}
	{
		goto IL_0388;
	}

IL_0123:
	{
		String_t* L_27 = V_1;
		bool L_28;
		L_28 = String_op_Equality_m50B3548E4AC232558190B0052877B290AA1D436A((String_t*)L_27, (String_t*)_stringLiteral60126327537B7B8E6EE33C43FE0C5CA8BCC3A06A, /*hidden argument*/NULL);
		if (L_28)
		{
			goto IL_0260;
		}
	}
	{
		goto IL_0388;
	}

IL_0138:
	{
		String_t* L_29 = V_1;
		bool L_30;
		L_30 = String_op_Equality_m50B3548E4AC232558190B0052877B290AA1D436A((String_t*)L_29, (String_t*)_stringLiteralBE2893848F9FC647C2288DA6581A1522E9695182, /*hidden argument*/NULL);
		if (L_30)
		{
			goto IL_0277;
		}
	}
	{
		goto IL_0388;
	}

IL_014d:
	{
		String_t* L_31 = V_1;
		bool L_32;
		L_32 = String_op_Equality_m50B3548E4AC232558190B0052877B290AA1D436A((String_t*)L_31, (String_t*)_stringLiteral4221314F268D184F46688D45C85446821F1F1BC3, /*hidden argument*/NULL);
		if (L_32)
		{
			goto IL_028e;
		}
	}
	{
		goto IL_0388;
	}

IL_0162:
	{
		String_t* L_33 = V_1;
		bool L_34;
		L_34 = String_op_Equality_m50B3548E4AC232558190B0052877B290AA1D436A((String_t*)L_33, (String_t*)_stringLiteral5C86338F177203D001C41D9C348A83D1338CC7D0, /*hidden argument*/NULL);
		if (L_34)
		{
			goto IL_02a5;
		}
	}
	{
		goto IL_0388;
	}

IL_0177:
	{
		String_t* L_35 = V_1;
		bool L_36;
		L_36 = String_op_Equality_m50B3548E4AC232558190B0052877B290AA1D436A((String_t*)L_35, (String_t*)_stringLiteralFE5F89F63E2381500F62A7CBD6954563BE44562F, /*hidden argument*/NULL);
		if (L_36)
		{
			goto IL_02bc;
		}
	}
	{
		goto IL_0388;
	}

IL_018c:
	{
		String_t* L_37 = V_1;
		bool L_38;
		L_38 = String_op_Equality_m50B3548E4AC232558190B0052877B290AA1D436A((String_t*)L_37, (String_t*)_stringLiteral87F70660D62DE5FC257FBADE9DA4EC9188597DE5, /*hidden argument*/NULL);
		if (L_38)
		{
			goto IL_02ce;
		}
	}
	{
		goto IL_0388;
	}

IL_01a1:
	{
		String_t* L_39 = V_1;
		bool L_40;
		L_40 = String_op_Equality_m50B3548E4AC232558190B0052877B290AA1D436A((String_t*)L_39, (String_t*)_stringLiteral354281948B6269615E32D856CF85B6F456724DAA, /*hidden argument*/NULL);
		if (L_40)
		{
			goto IL_02e5;
		}
	}
	{
		goto IL_0388;
	}

IL_01b6:
	{
		String_t* L_41 = V_1;
		bool L_42;
		L_42 = String_op_Equality_m50B3548E4AC232558190B0052877B290AA1D436A((String_t*)L_41, (String_t*)_stringLiteralADAEB0839588196B349BDB6CF33AFA3E0736360B, /*hidden argument*/NULL);
		if (L_42)
		{
			goto IL_02fc;
		}
	}
	{
		goto IL_0388;
	}

IL_01cb:
	{
		String_t* L_43 = V_1;
		bool L_44;
		L_44 = String_op_Equality_m50B3548E4AC232558190B0052877B290AA1D436A((String_t*)L_43, (String_t*)_stringLiteralC580B374AA991574F91DFC86C068E7FAD661A3A4, /*hidden argument*/NULL);
		if (L_44)
		{
			goto IL_0310;
		}
	}
	{
		goto IL_0388;
	}

IL_01e0:
	{
		String_t* L_45 = V_1;
		bool L_46;
		L_46 = String_op_Equality_m50B3548E4AC232558190B0052877B290AA1D436A((String_t*)L_45, (String_t*)_stringLiteralE049DB547285CFCE1CB9A95934B6B6DCE2D219EC, /*hidden argument*/NULL);
		if (L_46)
		{
			goto IL_0324;
		}
	}
	{
		goto IL_0388;
	}

IL_01f5:
	{
		String_t* L_47 = V_1;
		bool L_48;
		L_48 = String_op_Equality_m50B3548E4AC232558190B0052877B290AA1D436A((String_t*)L_47, (String_t*)_stringLiteralBF540D6548854CC21630064FBA5390C9409C86F0, /*hidden argument*/NULL);
		if (L_48)
		{
			goto IL_0338;
		}
	}
	{
		goto IL_0388;
	}

IL_020a:
	{
		String_t* L_49 = V_1;
		bool L_50;
		L_50 = String_op_Equality_m50B3548E4AC232558190B0052877B290AA1D436A((String_t*)L_49, (String_t*)_stringLiteral1D87A56AE67B2CD49CAE6E942C2FB7AD98925C00, /*hidden argument*/NULL);
		if (L_50)
		{
			goto IL_034c;
		}
	}
	{
		goto IL_0388;
	}

IL_021f:
	{
		String_t* L_51 = V_1;
		bool L_52;
		L_52 = String_op_Equality_m50B3548E4AC232558190B0052877B290AA1D436A((String_t*)L_51, (String_t*)_stringLiteralA967787586EC9E5A17A9C55E2002AB73A5E21A0A, /*hidden argument*/NULL);
		if (L_52)
		{
			goto IL_0360;
		}
	}
	{
		goto IL_0388;
	}

IL_0234:
	{
		String_t* L_53 = V_1;
		bool L_54;
		L_54 = String_op_Equality_m50B3548E4AC232558190B0052877B290AA1D436A((String_t*)L_53, (String_t*)_stringLiteral47C47DD09640803AD8016748EAE1F04DD1D41119, /*hidden argument*/NULL);
		if (L_54)
		{
			goto IL_0374;
		}
	}
	{
		goto IL_0388;
	}

IL_0249:
	{
		// instance.enabled = reader.Read<System.Boolean>(ES3Type_bool.Instance);
		ES3Reader_t2780AF8AA61DA2A817115CEF8612AC0E494D03C9 * L_55 = ___reader0;
		IL2CPP_RUNTIME_CLASS_INIT(ES3Type_bool_t8F309F7B9CC735FF1DEE68081B6E3CAB367745F4_il2cpp_TypeInfo_var);
		ES3Type_t8FBECB7AE75168648B9524E0C2A38DAD4555421D * L_56 = ((ES3Type_bool_t8F309F7B9CC735FF1DEE68081B6E3CAB367745F4_StaticFields*)il2cpp_codegen_static_fields_for(ES3Type_bool_t8F309F7B9CC735FF1DEE68081B6E3CAB367745F4_il2cpp_TypeInfo_var))->get_Instance_12();
		NullCheck((ES3Reader_t2780AF8AA61DA2A817115CEF8612AC0E494D03C9 *)L_55);
		bool L_57;
		L_57 = GenericVirtFuncInvoker1< bool, ES3Type_t8FBECB7AE75168648B9524E0C2A38DAD4555421D * >::Invoke(ES3Reader_Read_TisBoolean_t07D1E3F34E4813023D64F584DFF7B34C9D922F37_mC6D1B158268FF9B97822FF9F5B37FB1723FEDA22_RuntimeMethod_var, (ES3Reader_t2780AF8AA61DA2A817115CEF8612AC0E494D03C9 *)L_55, (ES3Type_t8FBECB7AE75168648B9524E0C2A38DAD4555421D *)L_56);
		TrailModule_set_enabled_mFC8451DDDF40CCBB3E32A4B30A001115F6346894((TrailModule_t95D15372971E64A1977B7587ABAA87B1A31EF5C8 *)(TrailModule_t95D15372971E64A1977B7587ABAA87B1A31EF5C8 *)(&V_0), (bool)L_57, /*hidden argument*/NULL);
		// break;
		goto IL_038e;
	}

IL_0260:
	{
		// instance.ratio = reader.Read<System.Single>(ES3Type_float.Instance);
		ES3Reader_t2780AF8AA61DA2A817115CEF8612AC0E494D03C9 * L_58 = ___reader0;
		IL2CPP_RUNTIME_CLASS_INIT(ES3Type_float_tF86B773C86731BD9AD79448B860BBB178FE77644_il2cpp_TypeInfo_var);
		ES3Type_t8FBECB7AE75168648B9524E0C2A38DAD4555421D * L_59 = ((ES3Type_float_tF86B773C86731BD9AD79448B860BBB178FE77644_StaticFields*)il2cpp_codegen_static_fields_for(ES3Type_float_tF86B773C86731BD9AD79448B860BBB178FE77644_il2cpp_TypeInfo_var))->get_Instance_12();
		NullCheck((ES3Reader_t2780AF8AA61DA2A817115CEF8612AC0E494D03C9 *)L_58);
		float L_60;
		L_60 = GenericVirtFuncInvoker1< float, ES3Type_t8FBECB7AE75168648B9524E0C2A38DAD4555421D * >::Invoke(ES3Reader_Read_TisSingle_tE07797BA3C98D4CA9B5A19413C19A76688AB899E_m4A0416374498BDA042B8EB21E49B72326D6CE5F4_RuntimeMethod_var, (ES3Reader_t2780AF8AA61DA2A817115CEF8612AC0E494D03C9 *)L_58, (ES3Type_t8FBECB7AE75168648B9524E0C2A38DAD4555421D *)L_59);
		TrailModule_set_ratio_m34E63B34E7B0E8D037AD45532B2E2D5BD0750189((TrailModule_t95D15372971E64A1977B7587ABAA87B1A31EF5C8 *)(TrailModule_t95D15372971E64A1977B7587ABAA87B1A31EF5C8 *)(&V_0), (float)L_60, /*hidden argument*/NULL);
		// break;
		goto IL_038e;
	}

IL_0277:
	{
		// instance.lifetime = reader.Read<UnityEngine.ParticleSystem.MinMaxCurve>(ES3Type_MinMaxCurve.Instance);
		ES3Reader_t2780AF8AA61DA2A817115CEF8612AC0E494D03C9 * L_61 = ___reader0;
		IL2CPP_RUNTIME_CLASS_INIT(ES3Type_MinMaxCurve_tC5342BF0F8735B85CB5E16FDD4C6FACC8AFAD3B7_il2cpp_TypeInfo_var);
		ES3Type_t8FBECB7AE75168648B9524E0C2A38DAD4555421D * L_62 = ((ES3Type_MinMaxCurve_tC5342BF0F8735B85CB5E16FDD4C6FACC8AFAD3B7_StaticFields*)il2cpp_codegen_static_fields_for(ES3Type_MinMaxCurve_tC5342BF0F8735B85CB5E16FDD4C6FACC8AFAD3B7_il2cpp_TypeInfo_var))->get_Instance_12();
		NullCheck((ES3Reader_t2780AF8AA61DA2A817115CEF8612AC0E494D03C9 *)L_61);
		MinMaxCurve_tF036239442AB2D438B1EDABEBC785426871084CD  L_63;
		L_63 = GenericVirtFuncInvoker1< MinMaxCurve_tF036239442AB2D438B1EDABEBC785426871084CD , ES3Type_t8FBECB7AE75168648B9524E0C2A38DAD4555421D * >::Invoke(ES3Reader_Read_TisMinMaxCurve_tF036239442AB2D438B1EDABEBC785426871084CD_mD285150CBFB52440643BBECB5ADF4EE8DE940535_RuntimeMethod_var, (ES3Reader_t2780AF8AA61DA2A817115CEF8612AC0E494D03C9 *)L_61, (ES3Type_t8FBECB7AE75168648B9524E0C2A38DAD4555421D *)L_62);
		TrailModule_set_lifetime_m57C898C42B9F18F5A0E88AAA7B10276CC158C39D((TrailModule_t95D15372971E64A1977B7587ABAA87B1A31EF5C8 *)(TrailModule_t95D15372971E64A1977B7587ABAA87B1A31EF5C8 *)(&V_0), (MinMaxCurve_tF036239442AB2D438B1EDABEBC785426871084CD )L_63, /*hidden argument*/NULL);
		// break;
		goto IL_038e;
	}

IL_028e:
	{
		// instance.lifetimeMultiplier = reader.Read<System.Single>(ES3Type_float.Instance);
		ES3Reader_t2780AF8AA61DA2A817115CEF8612AC0E494D03C9 * L_64 = ___reader0;
		IL2CPP_RUNTIME_CLASS_INIT(ES3Type_float_tF86B773C86731BD9AD79448B860BBB178FE77644_il2cpp_TypeInfo_var);
		ES3Type_t8FBECB7AE75168648B9524E0C2A38DAD4555421D * L_65 = ((ES3Type_float_tF86B773C86731BD9AD79448B860BBB178FE77644_StaticFields*)il2cpp_codegen_static_fields_for(ES3Type_float_tF86B773C86731BD9AD79448B860BBB178FE77644_il2cpp_TypeInfo_var))->get_Instance_12();
		NullCheck((ES3Reader_t2780AF8AA61DA2A817115CEF8612AC0E494D03C9 *)L_64);
		float L_66;
		L_66 = GenericVirtFuncInvoker1< float, ES3Type_t8FBECB7AE75168648B9524E0C2A38DAD4555421D * >::Invoke(ES3Reader_Read_TisSingle_tE07797BA3C98D4CA9B5A19413C19A76688AB899E_m4A0416374498BDA042B8EB21E49B72326D6CE5F4_RuntimeMethod_var, (ES3Reader_t2780AF8AA61DA2A817115CEF8612AC0E494D03C9 *)L_64, (ES3Type_t8FBECB7AE75168648B9524E0C2A38DAD4555421D *)L_65);
		TrailModule_set_lifetimeMultiplier_m23F95D65EE8C82152AE1CF2E41531EC2789A866B((TrailModule_t95D15372971E64A1977B7587ABAA87B1A31EF5C8 *)(TrailModule_t95D15372971E64A1977B7587ABAA87B1A31EF5C8 *)(&V_0), (float)L_66, /*hidden argument*/NULL);
		// break;
		goto IL_038e;
	}

IL_02a5:
	{
		// instance.minVertexDistance = reader.Read<System.Single>(ES3Type_float.Instance);
		ES3Reader_t2780AF8AA61DA2A817115CEF8612AC0E494D03C9 * L_67 = ___reader0;
		IL2CPP_RUNTIME_CLASS_INIT(ES3Type_float_tF86B773C86731BD9AD79448B860BBB178FE77644_il2cpp_TypeInfo_var);
		ES3Type_t8FBECB7AE75168648B9524E0C2A38DAD4555421D * L_68 = ((ES3Type_float_tF86B773C86731BD9AD79448B860BBB178FE77644_StaticFields*)il2cpp_codegen_static_fields_for(ES3Type_float_tF86B773C86731BD9AD79448B860BBB178FE77644_il2cpp_TypeInfo_var))->get_Instance_12();
		NullCheck((ES3Reader_t2780AF8AA61DA2A817115CEF8612AC0E494D03C9 *)L_67);
		float L_69;
		L_69 = GenericVirtFuncInvoker1< float, ES3Type_t8FBECB7AE75168648B9524E0C2A38DAD4555421D * >::Invoke(ES3Reader_Read_TisSingle_tE07797BA3C98D4CA9B5A19413C19A76688AB899E_m4A0416374498BDA042B8EB21E49B72326D6CE5F4_RuntimeMethod_var, (ES3Reader_t2780AF8AA61DA2A817115CEF8612AC0E494D03C9 *)L_67, (ES3Type_t8FBECB7AE75168648B9524E0C2A38DAD4555421D *)L_68);
		TrailModule_set_minVertexDistance_mF7C29F88FBF540CE4987F4CF9B141C624808FBC5((TrailModule_t95D15372971E64A1977B7587ABAA87B1A31EF5C8 *)(TrailModule_t95D15372971E64A1977B7587ABAA87B1A31EF5C8 *)(&V_0), (float)L_69, /*hidden argument*/NULL);
		// break;
		goto IL_038e;
	}

IL_02bc:
	{
		// instance.textureMode = reader.Read<UnityEngine.ParticleSystemTrailTextureMode>();
		ES3Reader_t2780AF8AA61DA2A817115CEF8612AC0E494D03C9 * L_70 = ___reader0;
		NullCheck((ES3Reader_t2780AF8AA61DA2A817115CEF8612AC0E494D03C9 *)L_70);
		int32_t L_71;
		L_71 = GenericVirtFuncInvoker0< int32_t >::Invoke(ES3Reader_Read_TisParticleSystemTrailTextureMode_tF3259187CA4D0A61EDB3A40E63CBF6C42641CE9F_m055DB1212E8BC34F385DF7D302F16241554E9730_RuntimeMethod_var, (ES3Reader_t2780AF8AA61DA2A817115CEF8612AC0E494D03C9 *)L_70);
		TrailModule_set_textureMode_mC1F8AE0D2965FC47BDBFF4F53E0673D5FB58CF28((TrailModule_t95D15372971E64A1977B7587ABAA87B1A31EF5C8 *)(TrailModule_t95D15372971E64A1977B7587ABAA87B1A31EF5C8 *)(&V_0), (int32_t)L_71, /*hidden argument*/NULL);
		// break;
		goto IL_038e;
	}

IL_02ce:
	{
		// instance.worldSpace = reader.Read<System.Boolean>(ES3Type_bool.Instance);
		ES3Reader_t2780AF8AA61DA2A817115CEF8612AC0E494D03C9 * L_72 = ___reader0;
		IL2CPP_RUNTIME_CLASS_INIT(ES3Type_bool_t8F309F7B9CC735FF1DEE68081B6E3CAB367745F4_il2cpp_TypeInfo_var);
		ES3Type_t8FBECB7AE75168648B9524E0C2A38DAD4555421D * L_73 = ((ES3Type_bool_t8F309F7B9CC735FF1DEE68081B6E3CAB367745F4_StaticFields*)il2cpp_codegen_static_fields_for(ES3Type_bool_t8F309F7B9CC735FF1DEE68081B6E3CAB367745F4_il2cpp_TypeInfo_var))->get_Instance_12();
		NullCheck((ES3Reader_t2780AF8AA61DA2A817115CEF8612AC0E494D03C9 *)L_72);
		bool L_74;
		L_74 = GenericVirtFuncInvoker1< bool, ES3Type_t8FBECB7AE75168648B9524E0C2A38DAD4555421D * >::Invoke(ES3Reader_Read_TisBoolean_t07D1E3F34E4813023D64F584DFF7B34C9D922F37_mC6D1B158268FF9B97822FF9F5B37FB1723FEDA22_RuntimeMethod_var, (ES3Reader_t2780AF8AA61DA2A817115CEF8612AC0E494D03C9 *)L_72, (ES3Type_t8FBECB7AE75168648B9524E0C2A38DAD4555421D *)L_73);
		TrailModule_set_worldSpace_m42A63AF4A96F24A621A29A0F35240195F0E56B1A((TrailModule_t95D15372971E64A1977B7587ABAA87B1A31EF5C8 *)(TrailModule_t95D15372971E64A1977B7587ABAA87B1A31EF5C8 *)(&V_0), (bool)L_74, /*hidden argument*/NULL);
		// break;
		goto IL_038e;
	}

IL_02e5:
	{
		// instance.dieWithParticles = reader.Read<System.Boolean>(ES3Type_bool.Instance);
		ES3Reader_t2780AF8AA61DA2A817115CEF8612AC0E494D03C9 * L_75 = ___reader0;
		IL2CPP_RUNTIME_CLASS_INIT(ES3Type_bool_t8F309F7B9CC735FF1DEE68081B6E3CAB367745F4_il2cpp_TypeInfo_var);
		ES3Type_t8FBECB7AE75168648B9524E0C2A38DAD4555421D * L_76 = ((ES3Type_bool_t8F309F7B9CC735FF1DEE68081B6E3CAB367745F4_StaticFields*)il2cpp_codegen_static_fields_for(ES3Type_bool_t8F309F7B9CC735FF1DEE68081B6E3CAB367745F4_il2cpp_TypeInfo_var))->get_Instance_12();
		NullCheck((ES3Reader_t2780AF8AA61DA2A817115CEF8612AC0E494D03C9 *)L_75);
		bool L_77;
		L_77 = GenericVirtFuncInvoker1< bool, ES3Type_t8FBECB7AE75168648B9524E0C2A38DAD4555421D * >::Invoke(ES3Reader_Read_TisBoolean_t07D1E3F34E4813023D64F584DFF7B34C9D922F37_mC6D1B158268FF9B97822FF9F5B37FB1723FEDA22_RuntimeMethod_var, (ES3Reader_t2780AF8AA61DA2A817115CEF8612AC0E494D03C9 *)L_75, (ES3Type_t8FBECB7AE75168648B9524E0C2A38DAD4555421D *)L_76);
		TrailModule_set_dieWithParticles_mB7C4E8DC2F908FDF6D57A77B54B821E360D8DA99((TrailModule_t95D15372971E64A1977B7587ABAA87B1A31EF5C8 *)(TrailModule_t95D15372971E64A1977B7587ABAA87B1A31EF5C8 *)(&V_0), (bool)L_77, /*hidden argument*/NULL);
		// break;
		goto IL_038e;
	}

IL_02fc:
	{
		// instance.sizeAffectsWidth = reader.Read<System.Boolean>(ES3Type_bool.Instance);
		ES3Reader_t2780AF8AA61DA2A817115CEF8612AC0E494D03C9 * L_78 = ___reader0;
		IL2CPP_RUNTIME_CLASS_INIT(ES3Type_bool_t8F309F7B9CC735FF1DEE68081B6E3CAB367745F4_il2cpp_TypeInfo_var);
		ES3Type_t8FBECB7AE75168648B9524E0C2A38DAD4555421D * L_79 = ((ES3Type_bool_t8F309F7B9CC735FF1DEE68081B6E3CAB367745F4_StaticFields*)il2cpp_codegen_static_fields_for(ES3Type_bool_t8F309F7B9CC735FF1DEE68081B6E3CAB367745F4_il2cpp_TypeInfo_var))->get_Instance_12();
		NullCheck((ES3Reader_t2780AF8AA61DA2A817115CEF8612AC0E494D03C9 *)L_78);
		bool L_80;
		L_80 = GenericVirtFuncInvoker1< bool, ES3Type_t8FBECB7AE75168648B9524E0C2A38DAD4555421D * >::Invoke(ES3Reader_Read_TisBoolean_t07D1E3F34E4813023D64F584DFF7B34C9D922F37_mC6D1B158268FF9B97822FF9F5B37FB1723FEDA22_RuntimeMethod_var, (ES3Reader_t2780AF8AA61DA2A817115CEF8612AC0E494D03C9 *)L_78, (ES3Type_t8FBECB7AE75168648B9524E0C2A38DAD4555421D *)L_79);
		TrailModule_set_sizeAffectsWidth_m3517856E39080DA69B447499C8846D2491B0ABF0((TrailModule_t95D15372971E64A1977B7587ABAA87B1A31EF5C8 *)(TrailModule_t95D15372971E64A1977B7587ABAA87B1A31EF5C8 *)(&V_0), (bool)L_80, /*hidden argument*/NULL);
		// break;
		goto IL_038e;
	}

IL_0310:
	{
		// instance.sizeAffectsLifetime = reader.Read<System.Boolean>(ES3Type_bool.Instance);
		ES3Reader_t2780AF8AA61DA2A817115CEF8612AC0E494D03C9 * L_81 = ___reader0;
		IL2CPP_RUNTIME_CLASS_INIT(ES3Type_bool_t8F309F7B9CC735FF1DEE68081B6E3CAB367745F4_il2cpp_TypeInfo_var);
		ES3Type_t8FBECB7AE75168648B9524E0C2A38DAD4555421D * L_82 = ((ES3Type_bool_t8F309F7B9CC735FF1DEE68081B6E3CAB367745F4_StaticFields*)il2cpp_codegen_static_fields_for(ES3Type_bool_t8F309F7B9CC735FF1DEE68081B6E3CAB367745F4_il2cpp_TypeInfo_var))->get_Instance_12();
		NullCheck((ES3Reader_t2780AF8AA61DA2A817115CEF8612AC0E494D03C9 *)L_81);
		bool L_83;
		L_83 = GenericVirtFuncInvoker1< bool, ES3Type_t8FBECB7AE75168648B9524E0C2A38DAD4555421D * >::Invoke(ES3Reader_Read_TisBoolean_t07D1E3F34E4813023D64F584DFF7B34C9D922F37_mC6D1B158268FF9B97822FF9F5B37FB1723FEDA22_RuntimeMethod_var, (ES3Reader_t2780AF8AA61DA2A817115CEF8612AC0E494D03C9 *)L_81, (ES3Type_t8FBECB7AE75168648B9524E0C2A38DAD4555421D *)L_82);
		TrailModule_set_sizeAffectsLifetime_m98BF4A6594193D824B52D88371CF963ACBA388FD((TrailModule_t95D15372971E64A1977B7587ABAA87B1A31EF5C8 *)(TrailModule_t95D15372971E64A1977B7587ABAA87B1A31EF5C8 *)(&V_0), (bool)L_83, /*hidden argument*/NULL);
		// break;
		goto IL_038e;
	}

IL_0324:
	{
		// instance.inheritParticleColor = reader.Read<System.Boolean>(ES3Type_bool.Instance);
		ES3Reader_t2780AF8AA61DA2A817115CEF8612AC0E494D03C9 * L_84 = ___reader0;
		IL2CPP_RUNTIME_CLASS_INIT(ES3Type_bool_t8F309F7B9CC735FF1DEE68081B6E3CAB367745F4_il2cpp_TypeInfo_var);
		ES3Type_t8FBECB7AE75168648B9524E0C2A38DAD4555421D * L_85 = ((ES3Type_bool_t8F309F7B9CC735FF1DEE68081B6E3CAB367745F4_StaticFields*)il2cpp_codegen_static_fields_for(ES3Type_bool_t8F309F7B9CC735FF1DEE68081B6E3CAB367745F4_il2cpp_TypeInfo_var))->get_Instance_12();
		NullCheck((ES3Reader_t2780AF8AA61DA2A817115CEF8612AC0E494D03C9 *)L_84);
		bool L_86;
		L_86 = GenericVirtFuncInvoker1< bool, ES3Type_t8FBECB7AE75168648B9524E0C2A38DAD4555421D * >::Invoke(ES3Reader_Read_TisBoolean_t07D1E3F34E4813023D64F584DFF7B34C9D922F37_mC6D1B158268FF9B97822FF9F5B37FB1723FEDA22_RuntimeMethod_var, (ES3Reader_t2780AF8AA61DA2A817115CEF8612AC0E494D03C9 *)L_84, (ES3Type_t8FBECB7AE75168648B9524E0C2A38DAD4555421D *)L_85);
		TrailModule_set_inheritParticleColor_mCD83E87B5E00F2BFFBE08AD2D1D68606283A4FEE((TrailModule_t95D15372971E64A1977B7587ABAA87B1A31EF5C8 *)(TrailModule_t95D15372971E64A1977B7587ABAA87B1A31EF5C8 *)(&V_0), (bool)L_86, /*hidden argument*/NULL);
		// break;
		goto IL_038e;
	}

IL_0338:
	{
		// instance.colorOverLifetime = reader.Read<UnityEngine.ParticleSystem.MinMaxGradient>(ES3Type_MinMaxGradient.Instance);
		ES3Reader_t2780AF8AA61DA2A817115CEF8612AC0E494D03C9 * L_87 = ___reader0;
		IL2CPP_RUNTIME_CLASS_INIT(ES3Type_MinMaxGradient_t5DD353D60E95642AB39D1C97C6FD6DD1B067D3CF_il2cpp_TypeInfo_var);
		ES3Type_t8FBECB7AE75168648B9524E0C2A38DAD4555421D * L_88 = ((ES3Type_MinMaxGradient_t5DD353D60E95642AB39D1C97C6FD6DD1B067D3CF_StaticFields*)il2cpp_codegen_static_fields_for(ES3Type_MinMaxGradient_t5DD353D60E95642AB39D1C97C6FD6DD1B067D3CF_il2cpp_TypeInfo_var))->get_Instance_12();
		NullCheck((ES3Reader_t2780AF8AA61DA2A817115CEF8612AC0E494D03C9 *)L_87);
		MinMaxGradient_tF4530B26F29D9635D670A33B9EE581EAC48C12B7  L_89;
		L_89 = GenericVirtFuncInvoker1< MinMaxGradient_tF4530B26F29D9635D670A33B9EE581EAC48C12B7 , ES3Type_t8FBECB7AE75168648B9524E0C2A38DAD4555421D * >::Invoke(ES3Reader_Read_TisMinMaxGradient_tF4530B26F29D9635D670A33B9EE581EAC48C12B7_m6A3DD8CBBAC5D32B838B6C4399009AB8AA512ACC_RuntimeMethod_var, (ES3Reader_t2780AF8AA61DA2A817115CEF8612AC0E494D03C9 *)L_87, (ES3Type_t8FBECB7AE75168648B9524E0C2A38DAD4555421D *)L_88);
		TrailModule_set_colorOverLifetime_mCD56BD4B75D3A3947069BA1B93FEC78AAE08DF27((TrailModule_t95D15372971E64A1977B7587ABAA87B1A31EF5C8 *)(TrailModule_t95D15372971E64A1977B7587ABAA87B1A31EF5C8 *)(&V_0), (MinMaxGradient_tF4530B26F29D9635D670A33B9EE581EAC48C12B7 )L_89, /*hidden argument*/NULL);
		// break;
		goto IL_038e;
	}

IL_034c:
	{
		// instance.widthOverTrail = reader.Read<UnityEngine.ParticleSystem.MinMaxCurve>(ES3Type_MinMaxCurve.Instance);
		ES3Reader_t2780AF8AA61DA2A817115CEF8612AC0E494D03C9 * L_90 = ___reader0;
		IL2CPP_RUNTIME_CLASS_INIT(ES3Type_MinMaxCurve_tC5342BF0F8735B85CB5E16FDD4C6FACC8AFAD3B7_il2cpp_TypeInfo_var);
		ES3Type_t8FBECB7AE75168648B9524E0C2A38DAD4555421D * L_91 = ((ES3Type_MinMaxCurve_tC5342BF0F8735B85CB5E16FDD4C6FACC8AFAD3B7_StaticFields*)il2cpp_codegen_static_fields_for(ES3Type_MinMaxCurve_tC5342BF0F8735B85CB5E16FDD4C6FACC8AFAD3B7_il2cpp_TypeInfo_var))->get_Instance_12();
		NullCheck((ES3Reader_t2780AF8AA61DA2A817115CEF8612AC0E494D03C9 *)L_90);
		MinMaxCurve_tF036239442AB2D438B1EDABEBC785426871084CD  L_92;
		L_92 = GenericVirtFuncInvoker1< MinMaxCurve_tF036239442AB2D438B1EDABEBC785426871084CD , ES3Type_t8FBECB7AE75168648B9524E0C2A38DAD4555421D * >::Invoke(ES3Reader_Read_TisMinMaxCurve_tF036239442AB2D438B1EDABEBC785426871084CD_mD285150CBFB52440643BBECB5ADF4EE8DE940535_RuntimeMethod_var, (ES3Reader_t2780AF8AA61DA2A817115CEF8612AC0E494D03C9 *)L_90, (ES3Type_t8FBECB7AE75168648B9524E0C2A38DAD4555421D *)L_91);
		TrailModule_set_widthOverTrail_m6C0A896EBFDED7CE46344B3A0B04212934F30DE1((TrailModule_t95D15372971E64A1977B7587ABAA87B1A31EF5C8 *)(TrailModule_t95D15372971E64A1977B7587ABAA87B1A31EF5C8 *)(&V_0), (MinMaxCurve_tF036239442AB2D438B1EDABEBC785426871084CD )L_92, /*hidden argument*/NULL);
		// break;
		goto IL_038e;
	}

IL_0360:
	{
		// instance.widthOverTrailMultiplier = reader.Read<System.Single>(ES3Type_float.Instance);
		ES3Reader_t2780AF8AA61DA2A817115CEF8612AC0E494D03C9 * L_93 = ___reader0;
		IL2CPP_RUNTIME_CLASS_INIT(ES3Type_float_tF86B773C86731BD9AD79448B860BBB178FE77644_il2cpp_TypeInfo_var);
		ES3Type_t8FBECB7AE75168648B9524E0C2A38DAD4555421D * L_94 = ((ES3Type_float_tF86B773C86731BD9AD79448B860BBB178FE77644_StaticFields*)il2cpp_codegen_static_fields_for(ES3Type_float_tF86B773C86731BD9AD79448B860BBB178FE77644_il2cpp_TypeInfo_var))->get_Instance_12();
		NullCheck((ES3Reader_t2780AF8AA61DA2A817115CEF8612AC0E494D03C9 *)L_93);
		float L_95;
		L_95 = GenericVirtFuncInvoker1< float, ES3Type_t8FBECB7AE75168648B9524E0C2A38DAD4555421D * >::Invoke(ES3Reader_Read_TisSingle_tE07797BA3C98D4CA9B5A19413C19A76688AB899E_m4A0416374498BDA042B8EB21E49B72326D6CE5F4_RuntimeMethod_var, (ES3Reader_t2780AF8AA61DA2A817115CEF8612AC0E494D03C9 *)L_93, (ES3Type_t8FBECB7AE75168648B9524E0C2A38DAD4555421D *)L_94);
		TrailModule_set_widthOverTrailMultiplier_m6A7EA2856CF30B710CCB528EA3EBFD1799C19BD4((TrailModule_t95D15372971E64A1977B7587ABAA87B1A31EF5C8 *)(TrailModule_t95D15372971E64A1977B7587ABAA87B1A31EF5C8 *)(&V_0), (float)L_95, /*hidden argument*/NULL);
		// break;
		goto IL_038e;
	}

IL_0374:
	{
		// instance.colorOverTrail = reader.Read<UnityEngine.ParticleSystem.MinMaxGradient>(ES3Type_MinMaxGradient.Instance);
		ES3Reader_t2780AF8AA61DA2A817115CEF8612AC0E494D03C9 * L_96 = ___reader0;
		IL2CPP_RUNTIME_CLASS_INIT(ES3Type_MinMaxGradient_t5DD353D60E95642AB39D1C97C6FD6DD1B067D3CF_il2cpp_TypeInfo_var);
		ES3Type_t8FBECB7AE75168648B9524E0C2A38DAD4555421D * L_97 = ((ES3Type_MinMaxGradient_t5DD353D60E95642AB39D1C97C6FD6DD1B067D3CF_StaticFields*)il2cpp_codegen_static_fields_for(ES3Type_MinMaxGradient_t5DD353D60E95642AB39D1C97C6FD6DD1B067D3CF_il2cpp_TypeInfo_var))->get_Instance_12();
		NullCheck((ES3Reader_t2780AF8AA61DA2A817115CEF8612AC0E494D03C9 *)L_96);
		MinMaxGradient_tF4530B26F29D9635D670A33B9EE581EAC48C12B7  L_98;
		L_98 = GenericVirtFuncInvoker1< MinMaxGradient_tF4530B26F29D9635D670A33B9EE581EAC48C12B7 , ES3Type_t8FBECB7AE75168648B9524E0C2A38DAD4555421D * >::Invoke(ES3Reader_Read_TisMinMaxGradient_tF4530B26F29D9635D670A33B9EE581EAC48C12B7_m6A3DD8CBBAC5D32B838B6C4399009AB8AA512ACC_RuntimeMethod_var, (ES3Reader_t2780AF8AA61DA2A817115CEF8612AC0E494D03C9 *)L_96, (ES3Type_t8FBECB7AE75168648B9524E0C2A38DAD4555421D *)L_97);
		TrailModule_set_colorOverTrail_m8440C6574C8310292B93D70EA4FE3EE8C40DF8DB((TrailModule_t95D15372971E64A1977B7587ABAA87B1A31EF5C8 *)(TrailModule_t95D15372971E64A1977B7587ABAA87B1A31EF5C8 *)(&V_0), (MinMaxGradient_tF4530B26F29D9635D670A33B9EE581EAC48C12B7 )L_98, /*hidden argument*/NULL);
		// break;
		goto IL_038e;
	}

IL_0388:
	{
		// reader.Skip();
		ES3Reader_t2780AF8AA61DA2A817115CEF8612AC0E494D03C9 * L_99 = ___reader0;
		NullCheck((ES3Reader_t2780AF8AA61DA2A817115CEF8612AC0E494D03C9 *)L_99);
		VirtActionInvoker0::Invoke(41 /* System.Void ES3Reader::Skip() */, (ES3Reader_t2780AF8AA61DA2A817115CEF8612AC0E494D03C9 *)L_99);
	}

IL_038e:
	{
		// while((propertyName = reader.ReadPropertyName()) != null)
		ES3Reader_t2780AF8AA61DA2A817115CEF8612AC0E494D03C9 * L_100 = ___reader0;
		NullCheck((ES3Reader_t2780AF8AA61DA2A817115CEF8612AC0E494D03C9 *)L_100);
		String_t* L_101;
		L_101 = VirtFuncInvoker0< String_t* >::Invoke(21 /* System.String ES3Reader::ReadPropertyName() */, (ES3Reader_t2780AF8AA61DA2A817115CEF8612AC0E494D03C9 *)L_100);
		String_t* L_102 = (String_t*)L_101;
		V_1 = (String_t*)L_102;
		if (L_102)
		{
			goto IL_000c;
		}
	}
	{
		// }
		return;
	}
}
// System.Void ES3Types.ES3Type_TrailModule::ReadInto<UnityEngine.ParticleSystem/ExternalForcesModule>(ES3Reader,System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ES3Type_TrailModule_ReadInto_TisExternalForcesModule_tBF4BE6C6AA63EB8C57DE1B0EDF3726B2F59FA7B5_m0FEA49E5BCDFEB8C3C2686ABAF5EF4C4899BF030_gshared (ES3Type_TrailModule_tC773F73EC0443516DD128FF2B5AE010809742462 * __this, ES3Reader_t2780AF8AA61DA2A817115CEF8612AC0E494D03C9 * ___reader0, RuntimeObject * ___obj1, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ES3Reader_Read_TisBoolean_t07D1E3F34E4813023D64F584DFF7B34C9D922F37_mC6D1B158268FF9B97822FF9F5B37FB1723FEDA22_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ES3Reader_Read_TisMinMaxCurve_tF036239442AB2D438B1EDABEBC785426871084CD_mD285150CBFB52440643BBECB5ADF4EE8DE940535_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ES3Reader_Read_TisMinMaxGradient_tF4530B26F29D9635D670A33B9EE581EAC48C12B7_m6A3DD8CBBAC5D32B838B6C4399009AB8AA512ACC_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ES3Reader_Read_TisParticleSystemTrailTextureMode_tF3259187CA4D0A61EDB3A40E63CBF6C42641CE9F_m055DB1212E8BC34F385DF7D302F16241554E9730_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ES3Reader_Read_TisSingle_tE07797BA3C98D4CA9B5A19413C19A76688AB899E_m4A0416374498BDA042B8EB21E49B72326D6CE5F4_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ES3Type_MinMaxCurve_tC5342BF0F8735B85CB5E16FDD4C6FACC8AFAD3B7_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ES3Type_MinMaxGradient_t5DD353D60E95642AB39D1C97C6FD6DD1B067D3CF_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ES3Type_bool_t8F309F7B9CC735FF1DEE68081B6E3CAB367745F4_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ES3Type_float_tF86B773C86731BD9AD79448B860BBB178FE77644_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&TrailModule_t95D15372971E64A1977B7587ABAA87B1A31EF5C8_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral1D87A56AE67B2CD49CAE6E942C2FB7AD98925C00);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral354281948B6269615E32D856CF85B6F456724DAA);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral4221314F268D184F46688D45C85446821F1F1BC3);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral47C47DD09640803AD8016748EAE1F04DD1D41119);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral5C86338F177203D001C41D9C348A83D1338CC7D0);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral60126327537B7B8E6EE33C43FE0C5CA8BCC3A06A);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral87F70660D62DE5FC257FBADE9DA4EC9188597DE5);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralA967787586EC9E5A17A9C55E2002AB73A5E21A0A);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralADAEB0839588196B349BDB6CF33AFA3E0736360B);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralBE2893848F9FC647C2288DA6581A1522E9695182);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralBF540D6548854CC21630064FBA5390C9409C86F0);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralC580B374AA991574F91DFC86C068E7FAD661A3A4);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralE049DB547285CFCE1CB9A95934B6B6DCE2D219EC);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralF9D225733E1D10F9344C755C4A9C0870CD1DE97B);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralFE5F89F63E2381500F62A7CBD6954563BE44562F);
		s_Il2CppMethodInitialized = true;
	}
	TrailModule_t95D15372971E64A1977B7587ABAA87B1A31EF5C8  V_0;
	memset((&V_0), 0, sizeof(V_0));
	String_t* V_1 = NULL;
	uint32_t V_2 = 0;
	{
		// var instance = (UnityEngine.ParticleSystem.TrailModule)obj;
		RuntimeObject * L_0 = ___obj1;
		V_0 = (TrailModule_t95D15372971E64A1977B7587ABAA87B1A31EF5C8 )((*(TrailModule_t95D15372971E64A1977B7587ABAA87B1A31EF5C8 *)((TrailModule_t95D15372971E64A1977B7587ABAA87B1A31EF5C8 *)UnBox(L_0, TrailModule_t95D15372971E64A1977B7587ABAA87B1A31EF5C8_il2cpp_TypeInfo_var))));
		goto IL_038e;
	}

IL_000c:
	{
		String_t* L_1 = V_1;
		if (!L_1)
		{
			goto IL_0388;
		}
	}
	{
		String_t* L_2 = V_1;
		uint32_t L_3;
		L_3 = U3CPrivateImplementationDetailsU3E_ComputeStringHash_m3ADC1F612F9EE3DD518E6F0023A0DE0EE2B120A7((String_t*)L_2, /*hidden argument*/NULL);
		V_2 = (uint32_t)L_3;
		uint32_t L_4 = V_2;
		if ((!(((uint32_t)L_4) <= ((uint32_t)((int32_t)1376955374)))))
		{
			goto IL_008d;
		}
	}
	{
		uint32_t L_5 = V_2;
		if ((!(((uint32_t)L_5) <= ((uint32_t)((int32_t)494095910)))))
		{
			goto IL_004f;
		}
	}
	{
		uint32_t L_6 = V_2;
		if ((((int32_t)L_6) == ((int32_t)((int32_t)49525662))))
		{
			goto IL_010e;
		}
	}
	{
		uint32_t L_7 = V_2;
		if ((((int32_t)L_7) == ((int32_t)((int32_t)341298456))))
		{
			goto IL_021f;
		}
	}
	{
		uint32_t L_8 = V_2;
		if ((((int32_t)L_8) == ((int32_t)((int32_t)494095910))))
		{
			goto IL_0234;
		}
	}
	{
		goto IL_0388;
	}

IL_004f:
	{
		uint32_t L_9 = V_2;
		if ((!(((uint32_t)L_9) <= ((uint32_t)((int32_t)973733911)))))
		{
			goto IL_0072;
		}
	}
	{
		uint32_t L_10 = V_2;
		if ((((int32_t)L_10) == ((int32_t)((int32_t)559929418))))
		{
			goto IL_01b6;
		}
	}
	{
		uint32_t L_11 = V_2;
		if ((((int32_t)L_11) == ((int32_t)((int32_t)973733911))))
		{
			goto IL_0177;
		}
	}
	{
		goto IL_0388;
	}

IL_0072:
	{
		uint32_t L_12 = V_2;
		if ((((int32_t)L_12) == ((int32_t)((int32_t)1024708593))))
		{
			goto IL_014d;
		}
	}
	{
		uint32_t L_13 = V_2;
		if ((((int32_t)L_13) == ((int32_t)((int32_t)1376955374))))
		{
			goto IL_0138;
		}
	}
	{
		goto IL_0388;
	}

IL_008d:
	{
		uint32_t L_14 = V_2;
		if ((!(((uint32_t)L_14) <= ((uint32_t)((int32_t)-2100707162)))))
		{
			goto IL_00d3;
		}
	}
	{
		uint32_t L_15 = V_2;
		if ((!(((uint32_t)L_15) <= ((uint32_t)((int32_t)1975189197)))))
		{
			goto IL_00b8;
		}
	}
	{
		uint32_t L_16 = V_2;
		if ((((int32_t)L_16) == ((int32_t)((int32_t)1546474083))))
		{
			goto IL_020a;
		}
	}
	{
		uint32_t L_17 = V_2;
		if ((((int32_t)L_17) == ((int32_t)((int32_t)1975189197))))
		{
			goto IL_01cb;
		}
	}
	{
		goto IL_0388;
	}

IL_00b8:
	{
		uint32_t L_18 = V_2;
		if ((((int32_t)L_18) == ((int32_t)((int32_t)2053023684))))
		{
			goto IL_01a1;
		}
	}
	{
		uint32_t L_19 = V_2;
		if ((((int32_t)L_19) == ((int32_t)((int32_t)-2100707162))))
		{
			goto IL_0162;
		}
	}
	{
		goto IL_0388;
	}

IL_00d3:
	{
		uint32_t L_20 = V_2;
		if ((!(((uint32_t)L_20) <= ((uint32_t)((int32_t)-1319579393)))))
		{
			goto IL_00f6;
		}
	}
	{
		uint32_t L_21 = V_2;
		if ((((int32_t)L_21) == ((int32_t)((int32_t)-1562862963))))
		{
			goto IL_01e0;
		}
	}
	{
		uint32_t L_22 = V_2;
		if ((((int32_t)L_22) == ((int32_t)((int32_t)-1319579393))))
		{
			goto IL_018c;
		}
	}
	{
		goto IL_0388;
	}

IL_00f6:
	{
		uint32_t L_23 = V_2;
		if ((((int32_t)L_23) == ((int32_t)((int32_t)-1055777148))))
		{
			goto IL_0123;
		}
	}
	{
		uint32_t L_24 = V_2;
		if ((((int32_t)L_24) == ((int32_t)((int32_t)-413379935))))
		{
			goto IL_01f5;
		}
	}
	{
		goto IL_0388;
	}

IL_010e:
	{
		String_t* L_25 = V_1;
		bool L_26;
		L_26 = String_op_Equality_m50B3548E4AC232558190B0052877B290AA1D436A((String_t*)L_25, (String_t*)_stringLiteralF9D225733E1D10F9344C755C4A9C0870CD1DE97B, /*hidden argument*/NULL);
		if (L_26)
		{
			goto IL_0249;
		}
	}
	{
		goto IL_0388;
	}

IL_0123:
	{
		String_t* L_27 = V_1;
		bool L_28;
		L_28 = String_op_Equality_m50B3548E4AC232558190B0052877B290AA1D436A((String_t*)L_27, (String_t*)_stringLiteral60126327537B7B8E6EE33C43FE0C5CA8BCC3A06A, /*hidden argument*/NULL);
		if (L_28)
		{
			goto IL_0260;
		}
	}
	{
		goto IL_0388;
	}

IL_0138:
	{
		String_t* L_29 = V_1;
		bool L_30;
		L_30 = String_op_Equality_m50B3548E4AC232558190B0052877B290AA1D436A((String_t*)L_29, (String_t*)_stringLiteralBE2893848F9FC647C2288DA6581A1522E9695182, /*hidden argument*/NULL);
		if (L_30)
		{
			goto IL_0277;
		}
	}
	{
		goto IL_0388;
	}

IL_014d:
	{
		String_t* L_31 = V_1;
		bool L_32;
		L_32 = String_op_Equality_m50B3548E4AC232558190B0052877B290AA1D436A((String_t*)L_31, (String_t*)_stringLiteral4221314F268D184F46688D45C85446821F1F1BC3, /*hidden argument*/NULL);
		if (L_32)
		{
			goto IL_028e;
		}
	}
	{
		goto IL_0388;
	}

IL_0162:
	{
		String_t* L_33 = V_1;
		bool L_34;
		L_34 = String_op_Equality_m50B3548E4AC232558190B0052877B290AA1D436A((String_t*)L_33, (String_t*)_stringLiteral5C86338F177203D001C41D9C348A83D1338CC7D0, /*hidden argument*/NULL);
		if (L_34)
		{
			goto IL_02a5;
		}
	}
	{
		goto IL_0388;
	}

IL_0177:
	{
		String_t* L_35 = V_1;
		bool L_36;
		L_36 = String_op_Equality_m50B3548E4AC232558190B0052877B290AA1D436A((String_t*)L_35, (String_t*)_stringLiteralFE5F89F63E2381500F62A7CBD6954563BE44562F, /*hidden argument*/NULL);
		if (L_36)
		{
			goto IL_02bc;
		}
	}
	{
		goto IL_0388;
	}

IL_018c:
	{
		String_t* L_37 = V_1;
		bool L_38;
		L_38 = String_op_Equality_m50B3548E4AC232558190B0052877B290AA1D436A((String_t*)L_37, (String_t*)_stringLiteral87F70660D62DE5FC257FBADE9DA4EC9188597DE5, /*hidden argument*/NULL);
		if (L_38)
		{
			goto IL_02ce;
		}
	}
	{
		goto IL_0388;
	}

IL_01a1:
	{
		String_t* L_39 = V_1;
		bool L_40;
		L_40 = String_op_Equality_m50B3548E4AC232558190B0052877B290AA1D436A((String_t*)L_39, (String_t*)_stringLiteral354281948B6269615E32D856CF85B6F456724DAA, /*hidden argument*/NULL);
		if (L_40)
		{
			goto IL_02e5;
		}
	}
	{
		goto IL_0388;
	}

IL_01b6:
	{
		String_t* L_41 = V_1;
		bool L_42;
		L_42 = String_op_Equality_m50B3548E4AC232558190B0052877B290AA1D436A((String_t*)L_41, (String_t*)_stringLiteralADAEB0839588196B349BDB6CF33AFA3E0736360B, /*hidden argument*/NULL);
		if (L_42)
		{
			goto IL_02fc;
		}
	}
	{
		goto IL_0388;
	}

IL_01cb:
	{
		String_t* L_43 = V_1;
		bool L_44;
		L_44 = String_op_Equality_m50B3548E4AC232558190B0052877B290AA1D436A((String_t*)L_43, (String_t*)_stringLiteralC580B374AA991574F91DFC86C068E7FAD661A3A4, /*hidden argument*/NULL);
		if (L_44)
		{
			goto IL_0310;
		}
	}
	{
		goto IL_0388;
	}

IL_01e0:
	{
		String_t* L_45 = V_1;
		bool L_46;
		L_46 = String_op_Equality_m50B3548E4AC232558190B0052877B290AA1D436A((String_t*)L_45, (String_t*)_stringLiteralE049DB547285CFCE1CB9A95934B6B6DCE2D219EC, /*hidden argument*/NULL);
		if (L_46)
		{
			goto IL_0324;
		}
	}
	{
		goto IL_0388;
	}

IL_01f5:
	{
		String_t* L_47 = V_1;
		bool L_48;
		L_48 = String_op_Equality_m50B3548E4AC232558190B0052877B290AA1D436A((String_t*)L_47, (String_t*)_stringLiteralBF540D6548854CC21630064FBA5390C9409C86F0, /*hidden argument*/NULL);
		if (L_48)
		{
			goto IL_0338;
		}
	}
	{
		goto IL_0388;
	}

IL_020a:
	{
		String_t* L_49 = V_1;
		bool L_50;
		L_50 = String_op_Equality_m50B3548E4AC232558190B0052877B290AA1D436A((String_t*)L_49, (String_t*)_stringLiteral1D87A56AE67B2CD49CAE6E942C2FB7AD98925C00, /*hidden argument*/NULL);
		if (L_50)
		{
			goto IL_034c;
		}
	}
	{
		goto IL_0388;
	}

IL_021f:
	{
		String_t* L_51 = V_1;
		bool L_52;
		L_52 = String_op_Equality_m50B3548E4AC232558190B0052877B290AA1D436A((String_t*)L_51, (String_t*)_stringLiteralA967787586EC9E5A17A9C55E2002AB73A5E21A0A, /*hidden argument*/NULL);
		if (L_52)
		{
			goto IL_0360;
		}
	}
	{
		goto IL_0388;
	}

IL_0234:
	{
		String_t* L_53 = V_1;
		bool L_54;
		L_54 = String_op_Equality_m50B3548E4AC232558190B0052877B290AA1D436A((String_t*)L_53, (String_t*)_stringLiteral47C47DD09640803AD8016748EAE1F04DD1D41119, /*hidden argument*/NULL);
		if (L_54)
		{
			goto IL_0374;
		}
	}
	{
		goto IL_0388;
	}

IL_0249:
	{
		// instance.enabled = reader.Read<System.Boolean>(ES3Type_bool.Instance);
		ES3Reader_t2780AF8AA61DA2A817115CEF8612AC0E494D03C9 * L_55 = ___reader0;
		IL2CPP_RUNTIME_CLASS_INIT(ES3Type_bool_t8F309F7B9CC735FF1DEE68081B6E3CAB367745F4_il2cpp_TypeInfo_var);
		ES3Type_t8FBECB7AE75168648B9524E0C2A38DAD4555421D * L_56 = ((ES3Type_bool_t8F309F7B9CC735FF1DEE68081B6E3CAB367745F4_StaticFields*)il2cpp_codegen_static_fields_for(ES3Type_bool_t8F309F7B9CC735FF1DEE68081B6E3CAB367745F4_il2cpp_TypeInfo_var))->get_Instance_12();
		NullCheck((ES3Reader_t2780AF8AA61DA2A817115CEF8612AC0E494D03C9 *)L_55);
		bool L_57;
		L_57 = GenericVirtFuncInvoker1< bool, ES3Type_t8FBECB7AE75168648B9524E0C2A38DAD4555421D * >::Invoke(ES3Reader_Read_TisBoolean_t07D1E3F34E4813023D64F584DFF7B34C9D922F37_mC6D1B158268FF9B97822FF9F5B37FB1723FEDA22_RuntimeMethod_var, (ES3Reader_t2780AF8AA61DA2A817115CEF8612AC0E494D03C9 *)L_55, (ES3Type_t8FBECB7AE75168648B9524E0C2A38DAD4555421D *)L_56);
		TrailModule_set_enabled_mFC8451DDDF40CCBB3E32A4B30A001115F6346894((TrailModule_t95D15372971E64A1977B7587ABAA87B1A31EF5C8 *)(TrailModule_t95D15372971E64A1977B7587ABAA87B1A31EF5C8 *)(&V_0), (bool)L_57, /*hidden argument*/NULL);
		// break;
		goto IL_038e;
	}

IL_0260:
	{
		// instance.ratio = reader.Read<System.Single>(ES3Type_float.Instance);
		ES3Reader_t2780AF8AA61DA2A817115CEF8612AC0E494D03C9 * L_58 = ___reader0;
		IL2CPP_RUNTIME_CLASS_INIT(ES3Type_float_tF86B773C86731BD9AD79448B860BBB178FE77644_il2cpp_TypeInfo_var);
		ES3Type_t8FBECB7AE75168648B9524E0C2A38DAD4555421D * L_59 = ((ES3Type_float_tF86B773C86731BD9AD79448B860BBB178FE77644_StaticFields*)il2cpp_codegen_static_fields_for(ES3Type_float_tF86B773C86731BD9AD79448B860BBB178FE77644_il2cpp_TypeInfo_var))->get_Instance_12();
		NullCheck((ES3Reader_t2780AF8AA61DA2A817115CEF8612AC0E494D03C9 *)L_58);
		float L_60;
		L_60 = GenericVirtFuncInvoker1< float, ES3Type_t8FBECB7AE75168648B9524E0C2A38DAD4555421D * >::Invoke(ES3Reader_Read_TisSingle_tE07797BA3C98D4CA9B5A19413C19A76688AB899E_m4A0416374498BDA042B8EB21E49B72326D6CE5F4_RuntimeMethod_var, (ES3Reader_t2780AF8AA61DA2A817115CEF8612AC0E494D03C9 *)L_58, (ES3Type_t8FBECB7AE75168648B9524E0C2A38DAD4555421D *)L_59);
		TrailModule_set_ratio_m34E63B34E7B0E8D037AD45532B2E2D5BD0750189((TrailModule_t95D15372971E64A1977B7587ABAA87B1A31EF5C8 *)(TrailModule_t95D15372971E64A1977B7587ABAA87B1A31EF5C8 *)(&V_0), (float)L_60, /*hidden argument*/NULL);
		// break;
		goto IL_038e;
	}

IL_0277:
	{
		// instance.lifetime = reader.Read<UnityEngine.ParticleSystem.MinMaxCurve>(ES3Type_MinMaxCurve.Instance);
		ES3Reader_t2780AF8AA61DA2A817115CEF8612AC0E494D03C9 * L_61 = ___reader0;
		IL2CPP_RUNTIME_CLASS_INIT(ES3Type_MinMaxCurve_tC5342BF0F8735B85CB5E16FDD4C6FACC8AFAD3B7_il2cpp_TypeInfo_var);
		ES3Type_t8FBECB7AE75168648B9524E0C2A38DAD4555421D * L_62 = ((ES3Type_MinMaxCurve_tC5342BF0F8735B85CB5E16FDD4C6FACC8AFAD3B7_StaticFields*)il2cpp_codegen_static_fields_for(ES3Type_MinMaxCurve_tC5342BF0F8735B85CB5E16FDD4C6FACC8AFAD3B7_il2cpp_TypeInfo_var))->get_Instance_12();
		NullCheck((ES3Reader_t2780AF8AA61DA2A817115CEF8612AC0E494D03C9 *)L_61);
		MinMaxCurve_tF036239442AB2D438B1EDABEBC785426871084CD  L_63;
		L_63 = GenericVirtFuncInvoker1< MinMaxCurve_tF036239442AB2D438B1EDABEBC785426871084CD , ES3Type_t8FBECB7AE75168648B9524E0C2A38DAD4555421D * >::Invoke(ES3Reader_Read_TisMinMaxCurve_tF036239442AB2D438B1EDABEBC785426871084CD_mD285150CBFB52440643BBECB5ADF4EE8DE940535_RuntimeMethod_var, (ES3Reader_t2780AF8AA61DA2A817115CEF8612AC0E494D03C9 *)L_61, (ES3Type_t8FBECB7AE75168648B9524E0C2A38DAD4555421D *)L_62);
		TrailModule_set_lifetime_m57C898C42B9F18F5A0E88AAA7B10276CC158C39D((TrailModule_t95D15372971E64A1977B7587ABAA87B1A31EF5C8 *)(TrailModule_t95D15372971E64A1977B7587ABAA87B1A31EF5C8 *)(&V_0), (MinMaxCurve_tF036239442AB2D438B1EDABEBC785426871084CD )L_63, /*hidden argument*/NULL);
		// break;
		goto IL_038e;
	}

IL_028e:
	{
		// instance.lifetimeMultiplier = reader.Read<System.Single>(ES3Type_float.Instance);
		ES3Reader_t2780AF8AA61DA2A817115CEF8612AC0E494D03C9 * L_64 = ___reader0;
		IL2CPP_RUNTIME_CLASS_INIT(ES3Type_float_tF86B773C86731BD9AD79448B860BBB178FE77644_il2cpp_TypeInfo_var);
		ES3Type_t8FBECB7AE75168648B9524E0C2A38DAD4555421D * L_65 = ((ES3Type_float_tF86B773C86731BD9AD79448B860BBB178FE77644_StaticFields*)il2cpp_codegen_static_fields_for(ES3Type_float_tF86B773C86731BD9AD79448B860BBB178FE77644_il2cpp_TypeInfo_var))->get_Instance_12();
		NullCheck((ES3Reader_t2780AF8AA61DA2A817115CEF8612AC0E494D03C9 *)L_64);
		float L_66;
		L_66 = GenericVirtFuncInvoker1< float, ES3Type_t8FBECB7AE75168648B9524E0C2A38DAD4555421D * >::Invoke(ES3Reader_Read_TisSingle_tE07797BA3C98D4CA9B5A19413C19A76688AB899E_m4A0416374498BDA042B8EB21E49B72326D6CE5F4_RuntimeMethod_var, (ES3Reader_t2780AF8AA61DA2A817115CEF8612AC0E494D03C9 *)L_64, (ES3Type_t8FBECB7AE75168648B9524E0C2A38DAD4555421D *)L_65);
		TrailModule_set_lifetimeMultiplier_m23F95D65EE8C82152AE1CF2E41531EC2789A866B((TrailModule_t95D15372971E64A1977B7587ABAA87B1A31EF5C8 *)(TrailModule_t95D15372971E64A1977B7587ABAA87B1A31EF5C8 *)(&V_0), (float)L_66, /*hidden argument*/NULL);
		// break;
		goto IL_038e;
	}

IL_02a5:
	{
		// instance.minVertexDistance = reader.Read<System.Single>(ES3Type_float.Instance);
		ES3Reader_t2780AF8AA61DA2A817115CEF8612AC0E494D03C9 * L_67 = ___reader0;
		IL2CPP_RUNTIME_CLASS_INIT(ES3Type_float_tF86B773C86731BD9AD79448B860BBB178FE77644_il2cpp_TypeInfo_var);
		ES3Type_t8FBECB7AE75168648B9524E0C2A38DAD4555421D * L_68 = ((ES3Type_float_tF86B773C86731BD9AD79448B860BBB178FE77644_StaticFields*)il2cpp_codegen_static_fields_for(ES3Type_float_tF86B773C86731BD9AD79448B860BBB178FE77644_il2cpp_TypeInfo_var))->get_Instance_12();
		NullCheck((ES3Reader_t2780AF8AA61DA2A817115CEF8612AC0E494D03C9 *)L_67);
		float L_69;
		L_69 = GenericVirtFuncInvoker1< float, ES3Type_t8FBECB7AE75168648B9524E0C2A38DAD4555421D * >::Invoke(ES3Reader_Read_TisSingle_tE07797BA3C98D4CA9B5A19413C19A76688AB899E_m4A0416374498BDA042B8EB21E49B72326D6CE5F4_RuntimeMethod_var, (ES3Reader_t2780AF8AA61DA2A817115CEF8612AC0E494D03C9 *)L_67, (ES3Type_t8FBECB7AE75168648B9524E0C2A38DAD4555421D *)L_68);
		TrailModule_set_minVertexDistance_mF7C29F88FBF540CE4987F4CF9B141C624808FBC5((TrailModule_t95D15372971E64A1977B7587ABAA87B1A31EF5C8 *)(TrailModule_t95D15372971E64A1977B7587ABAA87B1A31EF5C8 *)(&V_0), (float)L_69, /*hidden argument*/NULL);
		// break;
		goto IL_038e;
	}

IL_02bc:
	{
		// instance.textureMode = reader.Read<UnityEngine.ParticleSystemTrailTextureMode>();
		ES3Reader_t2780AF8AA61DA2A817115CEF8612AC0E494D03C9 * L_70 = ___reader0;
		NullCheck((ES3Reader_t2780AF8AA61DA2A817115CEF8612AC0E494D03C9 *)L_70);
		int32_t L_71;
		L_71 = GenericVirtFuncInvoker0< int32_t >::Invoke(ES3Reader_Read_TisParticleSystemTrailTextureMode_tF3259187CA4D0A61EDB3A40E63CBF6C42641CE9F_m055DB1212E8BC34F385DF7D302F16241554E9730_RuntimeMethod_var, (ES3Reader_t2780AF8AA61DA2A817115CEF8612AC0E494D03C9 *)L_70);
		TrailModule_set_textureMode_mC1F8AE0D2965FC47BDBFF4F53E0673D5FB58CF28((TrailModule_t95D15372971E64A1977B7587ABAA87B1A31EF5C8 *)(TrailModule_t95D15372971E64A1977B7587ABAA87B1A31EF5C8 *)(&V_0), (int32_t)L_71, /*hidden argument*/NULL);
		// break;
		goto IL_038e;
	}

IL_02ce:
	{
		// instance.worldSpace = reader.Read<System.Boolean>(ES3Type_bool.Instance);
		ES3Reader_t2780AF8AA61DA2A817115CEF8612AC0E494D03C9 * L_72 = ___reader0;
		IL2CPP_RUNTIME_CLASS_INIT(ES3Type_bool_t8F309F7B9CC735FF1DEE68081B6E3CAB367745F4_il2cpp_TypeInfo_var);
		ES3Type_t8FBECB7AE75168648B9524E0C2A38DAD4555421D * L_73 = ((ES3Type_bool_t8F309F7B9CC735FF1DEE68081B6E3CAB367745F4_StaticFields*)il2cpp_codegen_static_fields_for(ES3Type_bool_t8F309F7B9CC735FF1DEE68081B6E3CAB367745F4_il2cpp_TypeInfo_var))->get_Instance_12();
		NullCheck((ES3Reader_t2780AF8AA61DA2A817115CEF8612AC0E494D03C9 *)L_72);
		bool L_74;
		L_74 = GenericVirtFuncInvoker1< bool, ES3Type_t8FBECB7AE75168648B9524E0C2A38DAD4555421D * >::Invoke(ES3Reader_Read_TisBoolean_t07D1E3F34E4813023D64F584DFF7B34C9D922F37_mC6D1B158268FF9B97822FF9F5B37FB1723FEDA22_RuntimeMethod_var, (ES3Reader_t2780AF8AA61DA2A817115CEF8612AC0E494D03C9 *)L_72, (ES3Type_t8FBECB7AE75168648B9524E0C2A38DAD4555421D *)L_73);
		TrailModule_set_worldSpace_m42A63AF4A96F24A621A29A0F35240195F0E56B1A((TrailModule_t95D15372971E64A1977B7587ABAA87B1A31EF5C8 *)(TrailModule_t95D15372971E64A1977B7587ABAA87B1A31EF5C8 *)(&V_0), (bool)L_74, /*hidden argument*/NULL);
		// break;
		goto IL_038e;
	}

IL_02e5:
	{
		// instance.dieWithParticles = reader.Read<System.Boolean>(ES3Type_bool.Instance);
		ES3Reader_t2780AF8AA61DA2A817115CEF8612AC0E494D03C9 * L_75 = ___reader0;
		IL2CPP_RUNTIME_CLASS_INIT(ES3Type_bool_t8F309F7B9CC735FF1DEE68081B6E3CAB367745F4_il2cpp_TypeInfo_var);
		ES3Type_t8FBECB7AE75168648B9524E0C2A38DAD4555421D * L_76 = ((ES3Type_bool_t8F309F7B9CC735FF1DEE68081B6E3CAB367745F4_StaticFields*)il2cpp_codegen_static_fields_for(ES3Type_bool_t8F309F7B9CC735FF1DEE68081B6E3CAB367745F4_il2cpp_TypeInfo_var))->get_Instance_12();
		NullCheck((ES3Reader_t2780AF8AA61DA2A817115CEF8612AC0E494D03C9 *)L_75);
		bool L_77;
		L_77 = GenericVirtFuncInvoker1< bool, ES3Type_t8FBECB7AE75168648B9524E0C2A38DAD4555421D * >::Invoke(ES3Reader_Read_TisBoolean_t07D1E3F34E4813023D64F584DFF7B34C9D922F37_mC6D1B158268FF9B97822FF9F5B37FB1723FEDA22_RuntimeMethod_var, (ES3Reader_t2780AF8AA61DA2A817115CEF8612AC0E494D03C9 *)L_75, (ES3Type_t8FBECB7AE75168648B9524E0C2A38DAD4555421D *)L_76);
		TrailModule_set_dieWithParticles_mB7C4E8DC2F908FDF6D57A77B54B821E360D8DA99((TrailModule_t95D15372971E64A1977B7587ABAA87B1A31EF5C8 *)(TrailModule_t95D15372971E64A1977B7587ABAA87B1A31EF5C8 *)(&V_0), (bool)L_77, /*hidden argument*/NULL);
		// break;
		goto IL_038e;
	}

IL_02fc:
	{
		// instance.sizeAffectsWidth = reader.Read<System.Boolean>(ES3Type_bool.Instance);
		ES3Reader_t2780AF8AA61DA2A817115CEF8612AC0E494D03C9 * L_78 = ___reader0;
		IL2CPP_RUNTIME_CLASS_INIT(ES3Type_bool_t8F309F7B9CC735FF1DEE68081B6E3CAB367745F4_il2cpp_TypeInfo_var);
		ES3Type_t8FBECB7AE75168648B9524E0C2A38DAD4555421D * L_79 = ((ES3Type_bool_t8F309F7B9CC735FF1DEE68081B6E3CAB367745F4_StaticFields*)il2cpp_codegen_static_fields_for(ES3Type_bool_t8F309F7B9CC735FF1DEE68081B6E3CAB367745F4_il2cpp_TypeInfo_var))->get_Instance_12();
		NullCheck((ES3Reader_t2780AF8AA61DA2A817115CEF8612AC0E494D03C9 *)L_78);
		bool L_80;
		L_80 = GenericVirtFuncInvoker1< bool, ES3Type_t8FBECB7AE75168648B9524E0C2A38DAD4555421D * >::Invoke(ES3Reader_Read_TisBoolean_t07D1E3F34E4813023D64F584DFF7B34C9D922F37_mC6D1B158268FF9B97822FF9F5B37FB1723FEDA22_RuntimeMethod_var, (ES3Reader_t2780AF8AA61DA2A817115CEF8612AC0E494D03C9 *)L_78, (ES3Type_t8FBECB7AE75168648B9524E0C2A38DAD4555421D *)L_79);
		TrailModule_set_sizeAffectsWidth_m3517856E39080DA69B447499C8846D2491B0ABF0((TrailModule_t95D15372971E64A1977B7587ABAA87B1A31EF5C8 *)(TrailModule_t95D15372971E64A1977B7587ABAA87B1A31EF5C8 *)(&V_0), (bool)L_80, /*hidden argument*/NULL);
		// break;
		goto IL_038e;
	}

IL_0310:
	{
		// instance.sizeAffectsLifetime = reader.Read<System.Boolean>(ES3Type_bool.Instance);
		ES3Reader_t2780AF8AA61DA2A817115CEF8612AC0E494D03C9 * L_81 = ___reader0;
		IL2CPP_RUNTIME_CLASS_INIT(ES3Type_bool_t8F309F7B9CC735FF1DEE68081B6E3CAB367745F4_il2cpp_TypeInfo_var);
		ES3Type_t8FBECB7AE75168648B9524E0C2A38DAD4555421D * L_82 = ((ES3Type_bool_t8F309F7B9CC735FF1DEE68081B6E3CAB367745F4_StaticFields*)il2cpp_codegen_static_fields_for(ES3Type_bool_t8F309F7B9CC735FF1DEE68081B6E3CAB367745F4_il2cpp_TypeInfo_var))->get_Instance_12();
		NullCheck((ES3Reader_t2780AF8AA61DA2A817115CEF8612AC0E494D03C9 *)L_81);
		bool L_83;
		L_83 = GenericVirtFuncInvoker1< bool, ES3Type_t8FBECB7AE75168648B9524E0C2A38DAD4555421D * >::Invoke(ES3Reader_Read_TisBoolean_t07D1E3F34E4813023D64F584DFF7B34C9D922F37_mC6D1B158268FF9B97822FF9F5B37FB1723FEDA22_RuntimeMethod_var, (ES3Reader_t2780AF8AA61DA2A817115CEF8612AC0E494D03C9 *)L_81, (ES3Type_t8FBECB7AE75168648B9524E0C2A38DAD4555421D *)L_82);
		TrailModule_set_sizeAffectsLifetime_m98BF4A6594193D824B52D88371CF963ACBA388FD((TrailModule_t95D15372971E64A1977B7587ABAA87B1A31EF5C8 *)(TrailModule_t95D15372971E64A1977B7587ABAA87B1A31EF5C8 *)(&V_0), (bool)L_83, /*hidden argument*/NULL);
		// break;
		goto IL_038e;
	}

IL_0324:
	{
		// instance.inheritParticleColor = reader.Read<System.Boolean>(ES3Type_bool.Instance);
		ES3Reader_t2780AF8AA61DA2A817115CEF8612AC0E494D03C9 * L_84 = ___reader0;
		IL2CPP_RUNTIME_CLASS_INIT(ES3Type_bool_t8F309F7B9CC735FF1DEE68081B6E3CAB367745F4_il2cpp_TypeInfo_var);
		ES3Type_t8FBECB7AE75168648B9524E0C2A38DAD4555421D * L_85 = ((ES3Type_bool_t8F309F7B9CC735FF1DEE68081B6E3CAB367745F4_StaticFields*)il2cpp_codegen_static_fields_for(ES3Type_bool_t8F309F7B9CC735FF1DEE68081B6E3CAB367745F4_il2cpp_TypeInfo_var))->get_Instance_12();
		NullCheck((ES3Reader_t2780AF8AA61DA2A817115CEF8612AC0E494D03C9 *)L_84);
		bool L_86;
		L_86 = GenericVirtFuncInvoker1< bool, ES3Type_t8FBECB7AE75168648B9524E0C2A38DAD4555421D * >::Invoke(ES3Reader_Read_TisBoolean_t07D1E3F34E4813023D64F584DFF7B34C9D922F37_mC6D1B158268FF9B97822FF9F5B37FB1723FEDA22_RuntimeMethod_var, (ES3Reader_t2780AF8AA61DA2A817115CEF8612AC0E494D03C9 *)L_84, (ES3Type_t8FBECB7AE75168648B9524E0C2A38DAD4555421D *)L_85);
		TrailModule_set_inheritParticleColor_mCD83E87B5E00F2BFFBE08AD2D1D68606283A4FEE((TrailModule_t95D15372971E64A1977B7587ABAA87B1A31EF5C8 *)(TrailModule_t95D15372971E64A1977B7587ABAA87B1A31EF5C8 *)(&V_0), (bool)L_86, /*hidden argument*/NULL);
		// break;
		goto IL_038e;
	}

IL_0338:
	{
		// instance.colorOverLifetime = reader.Read<UnityEngine.ParticleSystem.MinMaxGradient>(ES3Type_MinMaxGradient.Instance);
		ES3Reader_t2780AF8AA61DA2A817115CEF8612AC0E494D03C9 * L_87 = ___reader0;
		IL2CPP_RUNTIME_CLASS_INIT(ES3Type_MinMaxGradient_t5DD353D60E95642AB39D1C97C6FD6DD1B067D3CF_il2cpp_TypeInfo_var);
		ES3Type_t8FBECB7AE75168648B9524E0C2A38DAD4555421D * L_88 = ((ES3Type_MinMaxGradient_t5DD353D60E95642AB39D1C97C6FD6DD1B067D3CF_StaticFields*)il2cpp_codegen_static_fields_for(ES3Type_MinMaxGradient_t5DD353D60E95642AB39D1C97C6FD6DD1B067D3CF_il2cpp_TypeInfo_var))->get_Instance_12();
		NullCheck((ES3Reader_t2780AF8AA61DA2A817115CEF8612AC0E494D03C9 *)L_87);
		MinMaxGradient_tF4530B26F29D9635D670A33B9EE581EAC48C12B7  L_89;
		L_89 = GenericVirtFuncInvoker1< MinMaxGradient_tF4530B26F29D9635D670A33B9EE581EAC48C12B7 , ES3Type_t8FBECB7AE75168648B9524E0C2A38DAD4555421D * >::Invoke(ES3Reader_Read_TisMinMaxGradient_tF4530B26F29D9635D670A33B9EE581EAC48C12B7_m6A3DD8CBBAC5D32B838B6C4399009AB8AA512ACC_RuntimeMethod_var, (ES3Reader_t2780AF8AA61DA2A817115CEF8612AC0E494D03C9 *)L_87, (ES3Type_t8FBECB7AE75168648B9524E0C2A38DAD4555421D *)L_88);
		TrailModule_set_colorOverLifetime_mCD56BD4B75D3A3947069BA1B93FEC78AAE08DF27((TrailModule_t95D15372971E64A1977B7587ABAA87B1A31EF5C8 *)(TrailModule_t95D15372971E64A1977B7587ABAA87B1A31EF5C8 *)(&V_0), (MinMaxGradient_tF4530B26F29D9635D670A33B9EE581EAC48C12B7 )L_89, /*hidden argument*/NULL);
		// break;
		goto IL_038e;
	}

IL_034c:
	{
		// instance.widthOverTrail = reader.Read<UnityEngine.ParticleSystem.MinMaxCurve>(ES3Type_MinMaxCurve.Instance);
		ES3Reader_t2780AF8AA61DA2A817115CEF8612AC0E494D03C9 * L_90 = ___reader0;
		IL2CPP_RUNTIME_CLASS_INIT(ES3Type_MinMaxCurve_tC5342BF0F8735B85CB5E16FDD4C6FACC8AFAD3B7_il2cpp_TypeInfo_var);
		ES3Type_t8FBECB7AE75168648B9524E0C2A38DAD4555421D * L_91 = ((ES3Type_MinMaxCurve_tC5342BF0F8735B85CB5E16FDD4C6FACC8AFAD3B7_StaticFields*)il2cpp_codegen_static_fields_for(ES3Type_MinMaxCurve_tC5342BF0F8735B85CB5E16FDD4C6FACC8AFAD3B7_il2cpp_TypeInfo_var))->get_Instance_12();
		NullCheck((ES3Reader_t2780AF8AA61DA2A817115CEF8612AC0E494D03C9 *)L_90);
		MinMaxCurve_tF036239442AB2D438B1EDABEBC785426871084CD  L_92;
		L_92 = GenericVirtFuncInvoker1< MinMaxCurve_tF036239442AB2D438B1EDABEBC785426871084CD , ES3Type_t8FBECB7AE75168648B9524E0C2A38DAD4555421D * >::Invoke(ES3Reader_Read_TisMinMaxCurve_tF036239442AB2D438B1EDABEBC785426871084CD_mD285150CBFB52440643BBECB5ADF4EE8DE940535_RuntimeMethod_var, (ES3Reader_t2780AF8AA61DA2A817115CEF8612AC0E494D03C9 *)L_90, (ES3Type_t8FBECB7AE75168648B9524E0C2A38DAD4555421D *)L_91);
		TrailModule_set_widthOverTrail_m6C0A896EBFDED7CE46344B3A0B04212934F30DE1((TrailModule_t95D15372971E64A1977B7587ABAA87B1A31EF5C8 *)(TrailModule_t95D15372971E64A1977B7587ABAA87B1A31EF5C8 *)(&V_0), (MinMaxCurve_tF036239442AB2D438B1EDABEBC785426871084CD )L_92, /*hidden argument*/NULL);
		// break;
		goto IL_038e;
	}

IL_0360:
	{
		// instance.widthOverTrailMultiplier = reader.Read<System.Single>(ES3Type_float.Instance);
		ES3Reader_t2780AF8AA61DA2A817115CEF8612AC0E494D03C9 * L_93 = ___reader0;
		IL2CPP_RUNTIME_CLASS_INIT(ES3Type_float_tF86B773C86731BD9AD79448B860BBB178FE77644_il2cpp_TypeInfo_var);
		ES3Type_t8FBECB7AE75168648B9524E0C2A38DAD4555421D * L_94 = ((ES3Type_float_tF86B773C86731BD9AD79448B860BBB178FE77644_StaticFields*)il2cpp_codegen_static_fields_for(ES3Type_float_tF86B773C86731BD9AD79448B860BBB178FE77644_il2cpp_TypeInfo_var))->get_Instance_12();
		NullCheck((ES3Reader_t2780AF8AA61DA2A817115CEF8612AC0E494D03C9 *)L_93);
		float L_95;
		L_95 = GenericVirtFuncInvoker1< float, ES3Type_t8FBECB7AE75168648B9524E0C2A38DAD4555421D * >::Invoke(ES3Reader_Read_TisSingle_tE07797BA3C98D4CA9B5A19413C19A76688AB899E_m4A0416374498BDA042B8EB21E49B72326D6CE5F4_RuntimeMethod_var, (ES3Reader_t2780AF8AA61DA2A817115CEF8612AC0E494D03C9 *)L_93, (ES3Type_t8FBECB7AE75168648B9524E0C2A38DAD4555421D *)L_94);
		TrailModule_set_widthOverTrailMultiplier_m6A7EA2856CF30B710CCB528EA3EBFD1799C19BD4((TrailModule_t95D15372971E64A1977B7587ABAA87B1A31EF5C8 *)(TrailModule_t95D15372971E64A1977B7587ABAA87B1A31EF5C8 *)(&V_0), (float)L_95, /*hidden argument*/NULL);
		// break;
		goto IL_038e;
	}

IL_0374:
	{
		// instance.colorOverTrail = reader.Read<UnityEngine.ParticleSystem.MinMaxGradient>(ES3Type_MinMaxGradient.Instance);
		ES3Reader_t2780AF8AA61DA2A817115CEF8612AC0E494D03C9 * L_96 = ___reader0;
		IL2CPP_RUNTIME_CLASS_INIT(ES3Type_MinMaxGradient_t5DD353D60E95642AB39D1C97C6FD6DD1B067D3CF_il2cpp_TypeInfo_var);
		ES3Type_t8FBECB7AE75168648B9524E0C2A38DAD4555421D * L_97 = ((ES3Type_MinMaxGradient_t5DD353D60E95642AB39D1C97C6FD6DD1B067D3CF_StaticFields*)il2cpp_codegen_static_fields_for(ES3Type_MinMaxGradient_t5DD353D60E95642AB39D1C97C6FD6DD1B067D3CF_il2cpp_TypeInfo_var))->get_Instance_12();
		NullCheck((ES3Reader_t2780AF8AA61DA2A817115CEF8612AC0E494D03C9 *)L_96);
		MinMaxGradient_tF4530B26F29D9635D670A33B9EE581EAC48C12B7  L_98;
		L_98 = GenericVirtFuncInvoker1< MinMaxGradient_tF4530B26F29D9635D670A33B9EE581EAC48C12B7 , ES3Type_t8FBECB7AE75168648B9524E0C2A38DAD4555421D * >::Invoke(ES3Reader_Read_TisMinMaxGradient_tF4530B26F29D9635D670A33B9EE581EAC48C12B7_m6A3DD8CBBAC5D32B838B6C4399009AB8AA512ACC_RuntimeMethod_var, (ES3Reader_t2780AF8AA61DA2A817115CEF8612AC0E494D03C9 *)L_96, (ES3Type_t8FBECB7AE75168648B9524E0C2A38DAD4555421D *)L_97);
		TrailModule_set_colorOverTrail_m8440C6574C8310292B93D70EA4FE3EE8C40DF8DB((TrailModule_t95D15372971E64A1977B7587ABAA87B1A31EF5C8 *)(TrailModule_t95D15372971E64A1977B7587ABAA87B1A31EF5C8 *)(&V_0), (MinMaxGradient_tF4530B26F29D9635D670A33B9EE581EAC48C12B7 )L_98, /*hidden argument*/NULL);
		// break;
		goto IL_038e;
	}

IL_0388:
	{
		// reader.Skip();
		ES3Reader_t2780AF8AA61DA2A817115CEF8612AC0E494D03C9 * L_99 = ___reader0;
		NullCheck((ES3Reader_t2780AF8AA61DA2A817115CEF8612AC0E494D03C9 *)L_99);
		VirtActionInvoker0::Invoke(41 /* System.Void ES3Reader::Skip() */, (ES3Reader_t2780AF8AA61DA2A817115CEF8612AC0E494D03C9 *)L_99);
	}

IL_038e:
	{
		// while((propertyName = reader.ReadPropertyName()) != null)
		ES3Reader_t2780AF8AA61DA2A817115CEF8612AC0E494D03C9 * L_100 = ___reader0;
		NullCheck((ES3Reader_t2780AF8AA61DA2A817115CEF8612AC0E494D03C9 *)L_100);
		String_t* L_101;
		L_101 = VirtFuncInvoker0< String_t* >::Invoke(21 /* System.String ES3Reader::ReadPropertyName() */, (ES3Reader_t2780AF8AA61DA2A817115CEF8612AC0E494D03C9 *)L_100);
		String_t* L_102 = (String_t*)L_101;
		V_1 = (String_t*)L_102;
		if (L_102)
		{
			goto IL_000c;
		}
	}
	{
		// }
		return;
	}
}
// System.Void ES3Types.ES3Type_TrailModule::ReadInto<UnityEngine.ParticleSystem/ForceOverLifetimeModule>(ES3Reader,System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ES3Type_TrailModule_ReadInto_TisForceOverLifetimeModule_t55EF1F67023C6920BB93B40FAC17E5665E9BBCF7_m205F94AF72B13DBE374AC0EFAF43397304A5820B_gshared (ES3Type_TrailModule_tC773F73EC0443516DD128FF2B5AE010809742462 * __this, ES3Reader_t2780AF8AA61DA2A817115CEF8612AC0E494D03C9 * ___reader0, RuntimeObject * ___obj1, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ES3Reader_Read_TisBoolean_t07D1E3F34E4813023D64F584DFF7B34C9D922F37_mC6D1B158268FF9B97822FF9F5B37FB1723FEDA22_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ES3Reader_Read_TisMinMaxCurve_tF036239442AB2D438B1EDABEBC785426871084CD_mD285150CBFB52440643BBECB5ADF4EE8DE940535_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ES3Reader_Read_TisMinMaxGradient_tF4530B26F29D9635D670A33B9EE581EAC48C12B7_m6A3DD8CBBAC5D32B838B6C4399009AB8AA512ACC_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ES3Reader_Read_TisParticleSystemTrailTextureMode_tF3259187CA4D0A61EDB3A40E63CBF6C42641CE9F_m055DB1212E8BC34F385DF7D302F16241554E9730_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ES3Reader_Read_TisSingle_tE07797BA3C98D4CA9B5A19413C19A76688AB899E_m4A0416374498BDA042B8EB21E49B72326D6CE5F4_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ES3Type_MinMaxCurve_tC5342BF0F8735B85CB5E16FDD4C6FACC8AFAD3B7_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ES3Type_MinMaxGradient_t5DD353D60E95642AB39D1C97C6FD6DD1B067D3CF_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ES3Type_bool_t8F309F7B9CC735FF1DEE68081B6E3CAB367745F4_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ES3Type_float_tF86B773C86731BD9AD79448B860BBB178FE77644_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&TrailModule_t95D15372971E64A1977B7587ABAA87B1A31EF5C8_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral1D87A56AE67B2CD49CAE6E942C2FB7AD98925C00);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral354281948B6269615E32D856CF85B6F456724DAA);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral4221314F268D184F46688D45C85446821F1F1BC3);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral47C47DD09640803AD8016748EAE1F04DD1D41119);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral5C86338F177203D001C41D9C348A83D1338CC7D0);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral60126327537B7B8E6EE33C43FE0C5CA8BCC3A06A);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral87F70660D62DE5FC257FBADE9DA4EC9188597DE5);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralA967787586EC9E5A17A9C55E2002AB73A5E21A0A);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralADAEB0839588196B349BDB6CF33AFA3E0736360B);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralBE2893848F9FC647C2288DA6581A1522E9695182);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralBF540D6548854CC21630064FBA5390C9409C86F0);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralC580B374AA991574F91DFC86C068E7FAD661A3A4);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralE049DB547285CFCE1CB9A95934B6B6DCE2D219EC);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralF9D225733E1D10F9344C755C4A9C0870CD1DE97B);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralFE5F89F63E2381500F62A7CBD6954563BE44562F);
		s_Il2CppMethodInitialized = true;
	}
	TrailModule_t95D15372971E64A1977B7587ABAA87B1A31EF5C8  V_0;
	memset((&V_0), 0, sizeof(V_0));
	String_t* V_1 = NULL;
	uint32_t V_2 = 0;
	{
		// var instance = (UnityEngine.ParticleSystem.TrailModule)obj;
		RuntimeObject * L_0 = ___obj1;
		V_0 = (TrailModule_t95D15372971E64A1977B7587ABAA87B1A31EF5C8 )((*(TrailModule_t95D15372971E64A1977B7587ABAA87B1A31EF5C8 *)((TrailModule_t95D15372971E64A1977B7587ABAA87B1A31EF5C8 *)UnBox(L_0, TrailModule_t95D15372971E64A1977B7587ABAA87B1A31EF5C8_il2cpp_TypeInfo_var))));
		goto IL_038e;
	}

IL_000c:
	{
		String_t* L_1 = V_1;
		if (!L_1)
		{
			goto IL_0388;
		}
	}
	{
		String_t* L_2 = V_1;
		uint32_t L_3;
		L_3 = U3CPrivateImplementationDetailsU3E_ComputeStringHash_m3ADC1F612F9EE3DD518E6F0023A0DE0EE2B120A7((String_t*)L_2, /*hidden argument*/NULL);
		V_2 = (uint32_t)L_3;
		uint32_t L_4 = V_2;
		if ((!(((uint32_t)L_4) <= ((uint32_t)((int32_t)1376955374)))))
		{
			goto IL_008d;
		}
	}
	{
		uint32_t L_5 = V_2;
		if ((!(((uint32_t)L_5) <= ((uint32_t)((int32_t)494095910)))))
		{
			goto IL_004f;
		}
	}
	{
		uint32_t L_6 = V_2;
		if ((((int32_t)L_6) == ((int32_t)((int32_t)49525662))))
		{
			goto IL_010e;
		}
	}
	{
		uint32_t L_7 = V_2;
		if ((((int32_t)L_7) == ((int32_t)((int32_t)341298456))))
		{
			goto IL_021f;
		}
	}
	{
		uint32_t L_8 = V_2;
		if ((((int32_t)L_8) == ((int32_t)((int32_t)494095910))))
		{
			goto IL_0234;
		}
	}
	{
		goto IL_0388;
	}

IL_004f:
	{
		uint32_t L_9 = V_2;
		if ((!(((uint32_t)L_9) <= ((uint32_t)((int32_t)973733911)))))
		{
			goto IL_0072;
		}
	}
	{
		uint32_t L_10 = V_2;
		if ((((int32_t)L_10) == ((int32_t)((int32_t)559929418))))
		{
			goto IL_01b6;
		}
	}
	{
		uint32_t L_11 = V_2;
		if ((((int32_t)L_11) == ((int32_t)((int32_t)973733911))))
		{
			goto IL_0177;
		}
	}
	{
		goto IL_0388;
	}

IL_0072:
	{
		uint32_t L_12 = V_2;
		if ((((int32_t)L_12) == ((int32_t)((int32_t)1024708593))))
		{
			goto IL_014d;
		}
	}
	{
		uint32_t L_13 = V_2;
		if ((((int32_t)L_13) == ((int32_t)((int32_t)1376955374))))
		{
			goto IL_0138;
		}
	}
	{
		goto IL_0388;
	}

IL_008d:
	{
		uint32_t L_14 = V_2;
		if ((!(((uint32_t)L_14) <= ((uint32_t)((int32_t)-2100707162)))))
		{
			goto IL_00d3;
		}
	}
	{
		uint32_t L_15 = V_2;
		if ((!(((uint32_t)L_15) <= ((uint32_t)((int32_t)1975189197)))))
		{
			goto IL_00b8;
		}
	}
	{
		uint32_t L_16 = V_2;
		if ((((int32_t)L_16) == ((int32_t)((int32_t)1546474083))))
		{
			goto IL_020a;
		}
	}
	{
		uint32_t L_17 = V_2;
		if ((((int32_t)L_17) == ((int32_t)((int32_t)1975189197))))
		{
			goto IL_01cb;
		}
	}
	{
		goto IL_0388;
	}

IL_00b8:
	{
		uint32_t L_18 = V_2;
		if ((((int32_t)L_18) == ((int32_t)((int32_t)2053023684))))
		{
			goto IL_01a1;
		}
	}
	{
		uint32_t L_19 = V_2;
		if ((((int32_t)L_19) == ((int32_t)((int32_t)-2100707162))))
		{
			goto IL_0162;
		}
	}
	{
		goto IL_0388;
	}

IL_00d3:
	{
		uint32_t L_20 = V_2;
		if ((!(((uint32_t)L_20) <= ((uint32_t)((int32_t)-1319579393)))))
		{
			goto IL_00f6;
		}
	}
	{
		uint32_t L_21 = V_2;
		if ((((int32_t)L_21) == ((int32_t)((int32_t)-1562862963))))
		{
			goto IL_01e0;
		}
	}
	{
		uint32_t L_22 = V_2;
		if ((((int32_t)L_22) == ((int32_t)((int32_t)-1319579393))))
		{
			goto IL_018c;
		}
	}
	{
		goto IL_0388;
	}

IL_00f6:
	{
		uint32_t L_23 = V_2;
		if ((((int32_t)L_23) == ((int32_t)((int32_t)-1055777148))))
		{
			goto IL_0123;
		}
	}
	{
		uint32_t L_24 = V_2;
		if ((((int32_t)L_24) == ((int32_t)((int32_t)-413379935))))
		{
			goto IL_01f5;
		}
	}
	{
		goto IL_0388;
	}

IL_010e:
	{
		String_t* L_25 = V_1;
		bool L_26;
		L_26 = String_op_Equality_m50B3548E4AC232558190B0052877B290AA1D436A((String_t*)L_25, (String_t*)_stringLiteralF9D225733E1D10F9344C755C4A9C0870CD1DE97B, /*hidden argument*/NULL);
		if (L_26)
		{
			goto IL_0249;
		}
	}
	{
		goto IL_0388;
	}

IL_0123:
	{
		String_t* L_27 = V_1;
		bool L_28;
		L_28 = String_op_Equality_m50B3548E4AC232558190B0052877B290AA1D436A((String_t*)L_27, (String_t*)_stringLiteral60126327537B7B8E6EE33C43FE0C5CA8BCC3A06A, /*hidden argument*/NULL);
		if (L_28)
		{
			goto IL_0260;
		}
	}
	{
		goto IL_0388;
	}

IL_0138:
	{
		String_t* L_29 = V_1;
		bool L_30;
		L_30 = String_op_Equality_m50B3548E4AC232558190B0052877B290AA1D436A((String_t*)L_29, (String_t*)_stringLiteralBE2893848F9FC647C2288DA6581A1522E9695182, /*hidden argument*/NULL);
		if (L_30)
		{
			goto IL_0277;
		}
	}
	{
		goto IL_0388;
	}

IL_014d:
	{
		String_t* L_31 = V_1;
		bool L_32;
		L_32 = String_op_Equality_m50B3548E4AC232558190B0052877B290AA1D436A((String_t*)L_31, (String_t*)_stringLiteral4221314F268D184F46688D45C85446821F1F1BC3, /*hidden argument*/NULL);
		if (L_32)
		{
			goto IL_028e;
		}
	}
	{
		goto IL_0388;
	}

IL_0162:
	{
		String_t* L_33 = V_1;
		bool L_34;
		L_34 = String_op_Equality_m50B3548E4AC232558190B0052877B290AA1D436A((String_t*)L_33, (String_t*)_stringLiteral5C86338F177203D001C41D9C348A83D1338CC7D0, /*hidden argument*/NULL);
		if (L_34)
		{
			goto IL_02a5;
		}
	}
	{
		goto IL_0388;
	}

IL_0177:
	{
		String_t* L_35 = V_1;
		bool L_36;
		L_36 = String_op_Equality_m50B3548E4AC232558190B0052877B290AA1D436A((String_t*)L_35, (String_t*)_stringLiteralFE5F89F63E2381500F62A7CBD6954563BE44562F, /*hidden argument*/NULL);
		if (L_36)
		{
			goto IL_02bc;
		}
	}
	{
		goto IL_0388;
	}

IL_018c:
	{
		String_t* L_37 = V_1;
		bool L_38;
		L_38 = String_op_Equality_m50B3548E4AC232558190B0052877B290AA1D436A((String_t*)L_37, (String_t*)_stringLiteral87F70660D62DE5FC257FBADE9DA4EC9188597DE5, /*hidden argument*/NULL);
		if (L_38)
		{
			goto IL_02ce;
		}
	}
	{
		goto IL_0388;
	}

IL_01a1:
	{
		String_t* L_39 = V_1;
		bool L_40;
		L_40 = String_op_Equality_m50B3548E4AC232558190B0052877B290AA1D436A((String_t*)L_39, (String_t*)_stringLiteral354281948B6269615E32D856CF85B6F456724DAA, /*hidden argument*/NULL);
		if (L_40)
		{
			goto IL_02e5;
		}
	}
	{
		goto IL_0388;
	}

IL_01b6:
	{
		String_t* L_41 = V_1;
		bool L_42;
		L_42 = String_op_Equality_m50B3548E4AC232558190B0052877B290AA1D436A((String_t*)L_41, (String_t*)_stringLiteralADAEB0839588196B349BDB6CF33AFA3E0736360B, /*hidden argument*/NULL);
		if (L_42)
		{
			goto IL_02fc;
		}
	}
	{
		goto IL_0388;
	}

IL_01cb:
	{
		String_t* L_43 = V_1;
		bool L_44;
		L_44 = String_op_Equality_m50B3548E4AC232558190B0052877B290AA1D436A((String_t*)L_43, (String_t*)_stringLiteralC580B374AA991574F91DFC86C068E7FAD661A3A4, /*hidden argument*/NULL);
		if (L_44)
		{
			goto IL_0310;
		}
	}
	{
		goto IL_0388;
	}

IL_01e0:
	{
		String_t* L_45 = V_1;
		bool L_46;
		L_46 = String_op_Equality_m50B3548E4AC232558190B0052877B290AA1D436A((String_t*)L_45, (String_t*)_stringLiteralE049DB547285CFCE1CB9A95934B6B6DCE2D219EC, /*hidden argument*/NULL);
		if (L_46)
		{
			goto IL_0324;
		}
	}
	{
		goto IL_0388;
	}

IL_01f5:
	{
		String_t* L_47 = V_1;
		bool L_48;
		L_48 = String_op_Equality_m50B3548E4AC232558190B0052877B290AA1D436A((String_t*)L_47, (String_t*)_stringLiteralBF540D6548854CC21630064FBA5390C9409C86F0, /*hidden argument*/NULL);
		if (L_48)
		{
			goto IL_0338;
		}
	}
	{
		goto IL_0388;
	}

IL_020a:
	{
		String_t* L_49 = V_1;
		bool L_50;
		L_50 = String_op_Equality_m50B3548E4AC232558190B0052877B290AA1D436A((String_t*)L_49, (String_t*)_stringLiteral1D87A56AE67B2CD49CAE6E942C2FB7AD98925C00, /*hidden argument*/NULL);
		if (L_50)
		{
			goto IL_034c;
		}
	}
	{
		goto IL_0388;
	}

IL_021f:
	{
		String_t* L_51 = V_1;
		bool L_52;
		L_52 = String_op_Equality_m50B3548E4AC232558190B0052877B290AA1D436A((String_t*)L_51, (String_t*)_stringLiteralA967787586EC9E5A17A9C55E2002AB73A5E21A0A, /*hidden argument*/NULL);
		if (L_52)
		{
			goto IL_0360;
		}
	}
	{
		goto IL_0388;
	}

IL_0234:
	{
		String_t* L_53 = V_1;
		bool L_54;
		L_54 = String_op_Equality_m50B3548E4AC232558190B0052877B290AA1D436A((String_t*)L_53, (String_t*)_stringLiteral47C47DD09640803AD8016748EAE1F04DD1D41119, /*hidden argument*/NULL);
		if (L_54)
		{
			goto IL_0374;
		}
	}
	{
		goto IL_0388;
	}

IL_0249:
	{
		// instance.enabled = reader.Read<System.Boolean>(ES3Type_bool.Instance);
		ES3Reader_t2780AF8AA61DA2A817115CEF8612AC0E494D03C9 * L_55 = ___reader0;
		IL2CPP_RUNTIME_CLASS_INIT(ES3Type_bool_t8F309F7B9CC735FF1DEE68081B6E3CAB367745F4_il2cpp_TypeInfo_var);
		ES3Type_t8FBECB7AE75168648B9524E0C2A38DAD4555421D * L_56 = ((ES3Type_bool_t8F309F7B9CC735FF1DEE68081B6E3CAB367745F4_StaticFields*)il2cpp_codegen_static_fields_for(ES3Type_bool_t8F309F7B9CC735FF1DEE68081B6E3CAB367745F4_il2cpp_TypeInfo_var))->get_Instance_12();
		NullCheck((ES3Reader_t2780AF8AA61DA2A817115CEF8612AC0E494D03C9 *)L_55);
		bool L_57;
		L_57 = GenericVirtFuncInvoker1< bool, ES3Type_t8FBECB7AE75168648B9524E0C2A38DAD4555421D * >::Invoke(ES3Reader_Read_TisBoolean_t07D1E3F34E4813023D64F584DFF7B34C9D922F37_mC6D1B158268FF9B97822FF9F5B37FB1723FEDA22_RuntimeMethod_var, (ES3Reader_t2780AF8AA61DA2A817115CEF8612AC0E494D03C9 *)L_55, (ES3Type_t8FBECB7AE75168648B9524E0C2A38DAD4555421D *)L_56);
		TrailModule_set_enabled_mFC8451DDDF40CCBB3E32A4B30A001115F6346894((TrailModule_t95D15372971E64A1977B7587ABAA87B1A31EF5C8 *)(TrailModule_t95D15372971E64A1977B7587ABAA87B1A31EF5C8 *)(&V_0), (bool)L_57, /*hidden argument*/NULL);
		// break;
		goto IL_038e;
	}

IL_0260:
	{
		// instance.ratio = reader.Read<System.Single>(ES3Type_float.Instance);
		ES3Reader_t2780AF8AA61DA2A817115CEF8612AC0E494D03C9 * L_58 = ___reader0;
		IL2CPP_RUNTIME_CLASS_INIT(ES3Type_float_tF86B773C86731BD9AD79448B860BBB178FE77644_il2cpp_TypeInfo_var);
		ES3Type_t8FBECB7AE75168648B9524E0C2A38DAD4555421D * L_59 = ((ES3Type_float_tF86B773C86731BD9AD79448B860BBB178FE77644_StaticFields*)il2cpp_codegen_static_fields_for(ES3Type_float_tF86B773C86731BD9AD79448B860BBB178FE77644_il2cpp_TypeInfo_var))->get_Instance_12();
		NullCheck((ES3Reader_t2780AF8AA61DA2A817115CEF8612AC0E494D03C9 *)L_58);
		float L_60;
		L_60 = GenericVirtFuncInvoker1< float, ES3Type_t8FBECB7AE75168648B9524E0C2A38DAD4555421D * >::Invoke(ES3Reader_Read_TisSingle_tE07797BA3C98D4CA9B5A19413C19A76688AB899E_m4A0416374498BDA042B8EB21E49B72326D6CE5F4_RuntimeMethod_var, (ES3Reader_t2780AF8AA61DA2A817115CEF8612AC0E494D03C9 *)L_58, (ES3Type_t8FBECB7AE75168648B9524E0C2A38DAD4555421D *)L_59);
		TrailModule_set_ratio_m34E63B34E7B0E8D037AD45532B2E2D5BD0750189((TrailModule_t95D15372971E64A1977B7587ABAA87B1A31EF5C8 *)(TrailModule_t95D15372971E64A1977B7587ABAA87B1A31EF5C8 *)(&V_0), (float)L_60, /*hidden argument*/NULL);
		// break;
		goto IL_038e;
	}

IL_0277:
	{
		// instance.lifetime = reader.Read<UnityEngine.ParticleSystem.MinMaxCurve>(ES3Type_MinMaxCurve.Instance);
		ES3Reader_t2780AF8AA61DA2A817115CEF8612AC0E494D03C9 * L_61 = ___reader0;
		IL2CPP_RUNTIME_CLASS_INIT(ES3Type_MinMaxCurve_tC5342BF0F8735B85CB5E16FDD4C6FACC8AFAD3B7_il2cpp_TypeInfo_var);
		ES3Type_t8FBECB7AE75168648B9524E0C2A38DAD4555421D * L_62 = ((ES3Type_MinMaxCurve_tC5342BF0F8735B85CB5E16FDD4C6FACC8AFAD3B7_StaticFields*)il2cpp_codegen_static_fields_for(ES3Type_MinMaxCurve_tC5342BF0F8735B85CB5E16FDD4C6FACC8AFAD3B7_il2cpp_TypeInfo_var))->get_Instance_12();
		NullCheck((ES3Reader_t2780AF8AA61DA2A817115CEF8612AC0E494D03C9 *)L_61);
		MinMaxCurve_tF036239442AB2D438B1EDABEBC785426871084CD  L_63;
		L_63 = GenericVirtFuncInvoker1< MinMaxCurve_tF036239442AB2D438B1EDABEBC785426871084CD , ES3Type_t8FBECB7AE75168648B9524E0C2A38DAD4555421D * >::Invoke(ES3Reader_Read_TisMinMaxCurve_tF036239442AB2D438B1EDABEBC785426871084CD_mD285150CBFB52440643BBECB5ADF4EE8DE940535_RuntimeMethod_var, (ES3Reader_t2780AF8AA61DA2A817115CEF8612AC0E494D03C9 *)L_61, (ES3Type_t8FBECB7AE75168648B9524E0C2A38DAD4555421D *)L_62);
		TrailModule_set_lifetime_m57C898C42B9F18F5A0E88AAA7B10276CC158C39D((TrailModule_t95D15372971E64A1977B7587ABAA87B1A31EF5C8 *)(TrailModule_t95D15372971E64A1977B7587ABAA87B1A31EF5C8 *)(&V_0), (MinMaxCurve_tF036239442AB2D438B1EDABEBC785426871084CD )L_63, /*hidden argument*/NULL);
		// break;
		goto IL_038e;
	}

IL_028e:
	{
		// instance.lifetimeMultiplier = reader.Read<System.Single>(ES3Type_float.Instance);
		ES3Reader_t2780AF8AA61DA2A817115CEF8612AC0E494D03C9 * L_64 = ___reader0;
		IL2CPP_RUNTIME_CLASS_INIT(ES3Type_float_tF86B773C86731BD9AD79448B860BBB178FE77644_il2cpp_TypeInfo_var);
		ES3Type_t8FBECB7AE75168648B9524E0C2A38DAD4555421D * L_65 = ((ES3Type_float_tF86B773C86731BD9AD79448B860BBB178FE77644_StaticFields*)il2cpp_codegen_static_fields_for(ES3Type_float_tF86B773C86731BD9AD79448B860BBB178FE77644_il2cpp_TypeInfo_var))->get_Instance_12();
		NullCheck((ES3Reader_t2780AF8AA61DA2A817115CEF8612AC0E494D03C9 *)L_64);
		float L_66;
		L_66 = GenericVirtFuncInvoker1< float, ES3Type_t8FBECB7AE75168648B9524E0C2A38DAD4555421D * >::Invoke(ES3Reader_Read_TisSingle_tE07797BA3C98D4CA9B5A19413C19A76688AB899E_m4A0416374498BDA042B8EB21E49B72326D6CE5F4_RuntimeMethod_var, (ES3Reader_t2780AF8AA61DA2A817115CEF8612AC0E494D03C9 *)L_64, (ES3Type_t8FBECB7AE75168648B9524E0C2A38DAD4555421D *)L_65);
		TrailModule_set_lifetimeMultiplier_m23F95D65EE8C82152AE1CF2E41531EC2789A866B((TrailModule_t95D15372971E64A1977B7587ABAA87B1A31EF5C8 *)(TrailModule_t95D15372971E64A1977B7587ABAA87B1A31EF5C8 *)(&V_0), (float)L_66, /*hidden argument*/NULL);
		// break;
		goto IL_038e;
	}

IL_02a5:
	{
		// instance.minVertexDistance = reader.Read<System.Single>(ES3Type_float.Instance);
		ES3Reader_t2780AF8AA61DA2A817115CEF8612AC0E494D03C9 * L_67 = ___reader0;
		IL2CPP_RUNTIME_CLASS_INIT(ES3Type_float_tF86B773C86731BD9AD79448B860BBB178FE77644_il2cpp_TypeInfo_var);
		ES3Type_t8FBECB7AE75168648B9524E0C2A38DAD4555421D * L_68 = ((ES3Type_float_tF86B773C86731BD9AD79448B860BBB178FE77644_StaticFields*)il2cpp_codegen_static_fields_for(ES3Type_float_tF86B773C86731BD9AD79448B860BBB178FE77644_il2cpp_TypeInfo_var))->get_Instance_12();
		NullCheck((ES3Reader_t2780AF8AA61DA2A817115CEF8612AC0E494D03C9 *)L_67);
		float L_69;
		L_69 = GenericVirtFuncInvoker1< float, ES3Type_t8FBECB7AE75168648B9524E0C2A38DAD4555421D * >::Invoke(ES3Reader_Read_TisSingle_tE07797BA3C98D4CA9B5A19413C19A76688AB899E_m4A0416374498BDA042B8EB21E49B72326D6CE5F4_RuntimeMethod_var, (ES3Reader_t2780AF8AA61DA2A817115CEF8612AC0E494D03C9 *)L_67, (ES3Type_t8FBECB7AE75168648B9524E0C2A38DAD4555421D *)L_68);
		TrailModule_set_minVertexDistance_mF7C29F88FBF540CE4987F4CF9B141C624808FBC5((TrailModule_t95D15372971E64A1977B7587ABAA87B1A31EF5C8 *)(TrailModule_t95D15372971E64A1977B7587ABAA87B1A31EF5C8 *)(&V_0), (float)L_69, /*hidden argument*/NULL);
		// break;
		goto IL_038e;
	}

IL_02bc:
	{
		// instance.textureMode = reader.Read<UnityEngine.ParticleSystemTrailTextureMode>();
		ES3Reader_t2780AF8AA61DA2A817115CEF8612AC0E494D03C9 * L_70 = ___reader0;
		NullCheck((ES3Reader_t2780AF8AA61DA2A817115CEF8612AC0E494D03C9 *)L_70);
		int32_t L_71;
		L_71 = GenericVirtFuncInvoker0< int32_t >::Invoke(ES3Reader_Read_TisParticleSystemTrailTextureMode_tF3259187CA4D0A61EDB3A40E63CBF6C42641CE9F_m055DB1212E8BC34F385DF7D302F16241554E9730_RuntimeMethod_var, (ES3Reader_t2780AF8AA61DA2A817115CEF8612AC0E494D03C9 *)L_70);
		TrailModule_set_textureMode_mC1F8AE0D2965FC47BDBFF4F53E0673D5FB58CF28((TrailModule_t95D15372971E64A1977B7587ABAA87B1A31EF5C8 *)(TrailModule_t95D15372971E64A1977B7587ABAA87B1A31EF5C8 *)(&V_0), (int32_t)L_71, /*hidden argument*/NULL);
		// break;
		goto IL_038e;
	}

IL_02ce:
	{
		// instance.worldSpace = reader.Read<System.Boolean>(ES3Type_bool.Instance);
		ES3Reader_t2780AF8AA61DA2A817115CEF8612AC0E494D03C9 * L_72 = ___reader0;
		IL2CPP_RUNTIME_CLASS_INIT(ES3Type_bool_t8F309F7B9CC735FF1DEE68081B6E3CAB367745F4_il2cpp_TypeInfo_var);
		ES3Type_t8FBECB7AE75168648B9524E0C2A38DAD4555421D * L_73 = ((ES3Type_bool_t8F309F7B9CC735FF1DEE68081B6E3CAB367745F4_StaticFields*)il2cpp_codegen_static_fields_for(ES3Type_bool_t8F309F7B9CC735FF1DEE68081B6E3CAB367745F4_il2cpp_TypeInfo_var))->get_Instance_12();
		NullCheck((ES3Reader_t2780AF8AA61DA2A817115CEF8612AC0E494D03C9 *)L_72);
		bool L_74;
		L_74 = GenericVirtFuncInvoker1< bool, ES3Type_t8FBECB7AE75168648B9524E0C2A38DAD4555421D * >::Invoke(ES3Reader_Read_TisBoolean_t07D1E3F34E4813023D64F584DFF7B34C9D922F37_mC6D1B158268FF9B97822FF9F5B37FB1723FEDA22_RuntimeMethod_var, (ES3Reader_t2780AF8AA61DA2A817115CEF8612AC0E494D03C9 *)L_72, (ES3Type_t8FBECB7AE75168648B9524E0C2A38DAD4555421D *)L_73);
		TrailModule_set_worldSpace_m42A63AF4A96F24A621A29A0F35240195F0E56B1A((TrailModule_t95D15372971E64A1977B7587ABAA87B1A31EF5C8 *)(TrailModule_t95D15372971E64A1977B7587ABAA87B1A31EF5C8 *)(&V_0), (bool)L_74, /*hidden argument*/NULL);
		// break;
		goto IL_038e;
	}

IL_02e5:
	{
		// instance.dieWithParticles = reader.Read<System.Boolean>(ES3Type_bool.Instance);
		ES3Reader_t2780AF8AA61DA2A817115CEF8612AC0E494D03C9 * L_75 = ___reader0;
		IL2CPP_RUNTIME_CLASS_INIT(ES3Type_bool_t8F309F7B9CC735FF1DEE68081B6E3CAB367745F4_il2cpp_TypeInfo_var);
		ES3Type_t8FBECB7AE75168648B9524E0C2A38DAD4555421D * L_76 = ((ES3Type_bool_t8F309F7B9CC735FF1DEE68081B6E3CAB367745F4_StaticFields*)il2cpp_codegen_static_fields_for(ES3Type_bool_t8F309F7B9CC735FF1DEE68081B6E3CAB367745F4_il2cpp_TypeInfo_var))->get_Instance_12();
		NullCheck((ES3Reader_t2780AF8AA61DA2A817115CEF8612AC0E494D03C9 *)L_75);
		bool L_77;
		L_77 = GenericVirtFuncInvoker1< bool, ES3Type_t8FBECB7AE75168648B9524E0C2A38DAD4555421D * >::Invoke(ES3Reader_Read_TisBoolean_t07D1E3F34E4813023D64F584DFF7B34C9D922F37_mC6D1B158268FF9B97822FF9F5B37FB1723FEDA22_RuntimeMethod_var, (ES3Reader_t2780AF8AA61DA2A817115CEF8612AC0E494D03C9 *)L_75, (ES3Type_t8FBECB7AE75168648B9524E0C2A38DAD4555421D *)L_76);
		TrailModule_set_dieWithParticles_mB7C4E8DC2F908FDF6D57A77B54B821E360D8DA99((TrailModule_t95D15372971E64A1977B7587ABAA87B1A31EF5C8 *)(TrailModule_t95D15372971E64A1977B7587ABAA87B1A31EF5C8 *)(&V_0), (bool)L_77, /*hidden argument*/NULL);
		// break;
		goto IL_038e;
	}

IL_02fc:
	{
		// instance.sizeAffectsWidth = reader.Read<System.Boolean>(ES3Type_bool.Instance);
		ES3Reader_t2780AF8AA61DA2A817115CEF8612AC0E494D03C9 * L_78 = ___reader0;
		IL2CPP_RUNTIME_CLASS_INIT(ES3Type_bool_t8F309F7B9CC735FF1DEE68081B6E3CAB367745F4_il2cpp_TypeInfo_var);
		ES3Type_t8FBECB7AE75168648B9524E0C2A38DAD4555421D * L_79 = ((ES3Type_bool_t8F309F7B9CC735FF1DEE68081B6E3CAB367745F4_StaticFields*)il2cpp_codegen_static_fields_for(ES3Type_bool_t8F309F7B9CC735FF1DEE68081B6E3CAB367745F4_il2cpp_TypeInfo_var))->get_Instance_12();
		NullCheck((ES3Reader_t2780AF8AA61DA2A817115CEF8612AC0E494D03C9 *)L_78);
		bool L_80;
		L_80 = GenericVirtFuncInvoker1< bool, ES3Type_t8FBECB7AE75168648B9524E0C2A38DAD4555421D * >::Invoke(ES3Reader_Read_TisBoolean_t07D1E3F34E4813023D64F584DFF7B34C9D922F37_mC6D1B158268FF9B97822FF9F5B37FB1723FEDA22_RuntimeMethod_var, (ES3Reader_t2780AF8AA61DA2A817115CEF8612AC0E494D03C9 *)L_78, (ES3Type_t8FBECB7AE75168648B9524E0C2A38DAD4555421D *)L_79);
		TrailModule_set_sizeAffectsWidth_m3517856E39080DA69B447499C8846D2491B0ABF0((TrailModule_t95D15372971E64A1977B7587ABAA87B1A31EF5C8 *)(TrailModule_t95D15372971E64A1977B7587ABAA87B1A31EF5C8 *)(&V_0), (bool)L_80, /*hidden argument*/NULL);
		// break;
		goto IL_038e;
	}

IL_0310:
	{
		// instance.sizeAffectsLifetime = reader.Read<System.Boolean>(ES3Type_bool.Instance);
		ES3Reader_t2780AF8AA61DA2A817115CEF8612AC0E494D03C9 * L_81 = ___reader0;
		IL2CPP_RUNTIME_CLASS_INIT(ES3Type_bool_t8F309F7B9CC735FF1DEE68081B6E3CAB367745F4_il2cpp_TypeInfo_var);
		ES3Type_t8FBECB7AE75168648B9524E0C2A38DAD4555421D * L_82 = ((ES3Type_bool_t8F309F7B9CC735FF1DEE68081B6E3CAB367745F4_StaticFields*)il2cpp_codegen_static_fields_for(ES3Type_bool_t8F309F7B9CC735FF1DEE68081B6E3CAB367745F4_il2cpp_TypeInfo_var))->get_Instance_12();
		NullCheck((ES3Reader_t2780AF8AA61DA2A817115CEF8612AC0E494D03C9 *)L_81);
		bool L_83;
		L_83 = GenericVirtFuncInvoker1< bool, ES3Type_t8FBECB7AE75168648B9524E0C2A38DAD4555421D * >::Invoke(ES3Reader_Read_TisBoolean_t07D1E3F34E4813023D64F584DFF7B34C9D922F37_mC6D1B158268FF9B97822FF9F5B37FB1723FEDA22_RuntimeMethod_var, (ES3Reader_t2780AF8AA61DA2A817115CEF8612AC0E494D03C9 *)L_81, (ES3Type_t8FBECB7AE75168648B9524E0C2A38DAD4555421D *)L_82);
		TrailModule_set_sizeAffectsLifetime_m98BF4A6594193D824B52D88371CF963ACBA388FD((TrailModule_t95D15372971E64A1977B7587ABAA87B1A31EF5C8 *)(TrailModule_t95D15372971E64A1977B7587ABAA87B1A31EF5C8 *)(&V_0), (bool)L_83, /*hidden argument*/NULL);
		// break;
		goto IL_038e;
	}

IL_0324:
	{
		// instance.inheritParticleColor = reader.Read<System.Boolean>(ES3Type_bool.Instance);
		ES3Reader_t2780AF8AA61DA2A817115CEF8612AC0E494D03C9 * L_84 = ___reader0;
		IL2CPP_RUNTIME_CLASS_INIT(ES3Type_bool_t8F309F7B9CC735FF1DEE68081B6E3CAB367745F4_il2cpp_TypeInfo_var);
		ES3Type_t8FBECB7AE75168648B9524E0C2A38DAD4555421D * L_85 = ((ES3Type_bool_t8F309F7B9CC735FF1DEE68081B6E3CAB367745F4_StaticFields*)il2cpp_codegen_static_fields_for(ES3Type_bool_t8F309F7B9CC735FF1DEE68081B6E3CAB367745F4_il2cpp_TypeInfo_var))->get_Instance_12();
		NullCheck((ES3Reader_t2780AF8AA61DA2A817115CEF8612AC0E494D03C9 *)L_84);
		bool L_86;
		L_86 = GenericVirtFuncInvoker1< bool, ES3Type_t8FBECB7AE75168648B9524E0C2A38DAD4555421D * >::Invoke(ES3Reader_Read_TisBoolean_t07D1E3F34E4813023D64F584DFF7B34C9D922F37_mC6D1B158268FF9B97822FF9F5B37FB1723FEDA22_RuntimeMethod_var, (ES3Reader_t2780AF8AA61DA2A817115CEF8612AC0E494D03C9 *)L_84, (ES3Type_t8FBECB7AE75168648B9524E0C2A38DAD4555421D *)L_85);
		TrailModule_set_inheritParticleColor_mCD83E87B5E00F2BFFBE08AD2D1D68606283A4FEE((TrailModule_t95D15372971E64A1977B7587ABAA87B1A31EF5C8 *)(TrailModule_t95D15372971E64A1977B7587ABAA87B1A31EF5C8 *)(&V_0), (bool)L_86, /*hidden argument*/NULL);
		// break;
		goto IL_038e;
	}

IL_0338:
	{
		// instance.colorOverLifetime = reader.Read<UnityEngine.ParticleSystem.MinMaxGradient>(ES3Type_MinMaxGradient.Instance);
		ES3Reader_t2780AF8AA61DA2A817115CEF8612AC0E494D03C9 * L_87 = ___reader0;
		IL2CPP_RUNTIME_CLASS_INIT(ES3Type_MinMaxGradient_t5DD353D60E95642AB39D1C97C6FD6DD1B067D3CF_il2cpp_TypeInfo_var);
		ES3Type_t8FBECB7AE75168648B9524E0C2A38DAD4555421D * L_88 = ((ES3Type_MinMaxGradient_t5DD353D60E95642AB39D1C97C6FD6DD1B067D3CF_StaticFields*)il2cpp_codegen_static_fields_for(ES3Type_MinMaxGradient_t5DD353D60E95642AB39D1C97C6FD6DD1B067D3CF_il2cpp_TypeInfo_var))->get_Instance_12();
		NullCheck((ES3Reader_t2780AF8AA61DA2A817115CEF8612AC0E494D03C9 *)L_87);
		MinMaxGradient_tF4530B26F29D9635D670A33B9EE581EAC48C12B7  L_89;
		L_89 = GenericVirtFuncInvoker1< MinMaxGradient_tF4530B26F29D9635D670A33B9EE581EAC48C12B7 , ES3Type_t8FBECB7AE75168648B9524E0C2A38DAD4555421D * >::Invoke(ES3Reader_Read_TisMinMaxGradient_tF4530B26F29D9635D670A33B9EE581EAC48C12B7_m6A3DD8CBBAC5D32B838B6C4399009AB8AA512ACC_RuntimeMethod_var, (ES3Reader_t2780AF8AA61DA2A817115CEF8612AC0E494D03C9 *)L_87, (ES3Type_t8FBECB7AE75168648B9524E0C2A38DAD4555421D *)L_88);
		TrailModule_set_colorOverLifetime_mCD56BD4B75D3A3947069BA1B93FEC78AAE08DF27((TrailModule_t95D15372971E64A1977B7587ABAA87B1A31EF5C8 *)(TrailModule_t95D15372971E64A1977B7587ABAA87B1A31EF5C8 *)(&V_0), (MinMaxGradient_tF4530B26F29D9635D670A33B9EE581EAC48C12B7 )L_89, /*hidden argument*/NULL);
		// break;
		goto IL_038e;
	}

IL_034c:
	{
		// instance.widthOverTrail = reader.Read<UnityEngine.ParticleSystem.MinMaxCurve>(ES3Type_MinMaxCurve.Instance);
		ES3Reader_t2780AF8AA61DA2A817115CEF8612AC0E494D03C9 * L_90 = ___reader0;
		IL2CPP_RUNTIME_CLASS_INIT(ES3Type_MinMaxCurve_tC5342BF0F8735B85CB5E16FDD4C6FACC8AFAD3B7_il2cpp_TypeInfo_var);
		ES3Type_t8FBECB7AE75168648B9524E0C2A38DAD4555421D * L_91 = ((ES3Type_MinMaxCurve_tC5342BF0F8735B85CB5E16FDD4C6FACC8AFAD3B7_StaticFields*)il2cpp_codegen_static_fields_for(ES3Type_MinMaxCurve_tC5342BF0F8735B85CB5E16FDD4C6FACC8AFAD3B7_il2cpp_TypeInfo_var))->get_Instance_12();
		NullCheck((ES3Reader_t2780AF8AA61DA2A817115CEF8612AC0E494D03C9 *)L_90);
		MinMaxCurve_tF036239442AB2D438B1EDABEBC785426871084CD  L_92;
		L_92 = GenericVirtFuncInvoker1< MinMaxCurve_tF036239442AB2D438B1EDABEBC785426871084CD , ES3Type_t8FBECB7AE75168648B9524E0C2A38DAD4555421D * >::Invoke(ES3Reader_Read_TisMinMaxCurve_tF036239442AB2D438B1EDABEBC785426871084CD_mD285150CBFB52440643BBECB5ADF4EE8DE940535_RuntimeMethod_var, (ES3Reader_t2780AF8AA61DA2A817115CEF8612AC0E494D03C9 *)L_90, (ES3Type_t8FBECB7AE75168648B9524E0C2A38DAD4555421D *)L_91);
		TrailModule_set_widthOverTrail_m6C0A896EBFDED7CE46344B3A0B04212934F30DE1((TrailModule_t95D15372971E64A1977B7587ABAA87B1A31EF5C8 *)(TrailModule_t95D15372971E64A1977B7587ABAA87B1A31EF5C8 *)(&V_0), (MinMaxCurve_tF036239442AB2D438B1EDABEBC785426871084CD )L_92, /*hidden argument*/NULL);
		// break;
		goto IL_038e;
	}

IL_0360:
	{
		// instance.widthOverTrailMultiplier = reader.Read<System.Single>(ES3Type_float.Instance);
		ES3Reader_t2780AF8AA61DA2A817115CEF8612AC0E494D03C9 * L_93 = ___reader0;
		IL2CPP_RUNTIME_CLASS_INIT(ES3Type_float_tF86B773C86731BD9AD79448B860BBB178FE77644_il2cpp_TypeInfo_var);
		ES3Type_t8FBECB7AE75168648B9524E0C2A38DAD4555421D * L_94 = ((ES3Type_float_tF86B773C86731BD9AD79448B860BBB178FE77644_StaticFields*)il2cpp_codegen_static_fields_for(ES3Type_float_tF86B773C86731BD9AD79448B860BBB178FE77644_il2cpp_TypeInfo_var))->get_Instance_12();
		NullCheck((ES3Reader_t2780AF8AA61DA2A817115CEF8612AC0E494D03C9 *)L_93);
		float L_95;
		L_95 = GenericVirtFuncInvoker1< float, ES3Type_t8FBECB7AE75168648B9524E0C2A38DAD4555421D * >::Invoke(ES3Reader_Read_TisSingle_tE07797BA3C98D4CA9B5A19413C19A76688AB899E_m4A0416374498BDA042B8EB21E49B72326D6CE5F4_RuntimeMethod_var, (ES3Reader_t2780AF8AA61DA2A817115CEF8612AC0E494D03C9 *)L_93, (ES3Type_t8FBECB7AE75168648B9524E0C2A38DAD4555421D *)L_94);
		TrailModule_set_widthOverTrailMultiplier_m6A7EA2856CF30B710CCB528EA3EBFD1799C19BD4((TrailModule_t95D15372971E64A1977B7587ABAA87B1A31EF5C8 *)(TrailModule_t95D15372971E64A1977B7587ABAA87B1A31EF5C8 *)(&V_0), (float)L_95, /*hidden argument*/NULL);
		// break;
		goto IL_038e;
	}

IL_0374:
	{
		// instance.colorOverTrail = reader.Read<UnityEngine.ParticleSystem.MinMaxGradient>(ES3Type_MinMaxGradient.Instance);
		ES3Reader_t2780AF8AA61DA2A817115CEF8612AC0E494D03C9 * L_96 = ___reader0;
		IL2CPP_RUNTIME_CLASS_INIT(ES3Type_MinMaxGradient_t5DD353D60E95642AB39D1C97C6FD6DD1B067D3CF_il2cpp_TypeInfo_var);
		ES3Type_t8FBECB7AE75168648B9524E0C2A38DAD4555421D * L_97 = ((ES3Type_MinMaxGradient_t5DD353D60E95642AB39D1C97C6FD6DD1B067D3CF_StaticFields*)il2cpp_codegen_static_fields_for(ES3Type_MinMaxGradient_t5DD353D60E95642AB39D1C97C6FD6DD1B067D3CF_il2cpp_TypeInfo_var))->get_Instance_12();
		NullCheck((ES3Reader_t2780AF8AA61DA2A817115CEF8612AC0E494D03C9 *)L_96);
		MinMaxGradient_tF4530B26F29D9635D670A33B9EE581EAC48C12B7  L_98;
		L_98 = GenericVirtFuncInvoker1< MinMaxGradient_tF4530B26F29D9635D670A33B9EE581EAC48C12B7 , ES3Type_t8FBECB7AE75168648B9524E0C2A38DAD4555421D * >::Invoke(ES3Reader_Read_TisMinMaxGradient_tF4530B26F29D9635D670A33B9EE581EAC48C12B7_m6A3DD8CBBAC5D32B838B6C4399009AB8AA512ACC_RuntimeMethod_var, (ES3Reader_t2780AF8AA61DA2A817115CEF8612AC0E494D03C9 *)L_96, (ES3Type_t8FBECB7AE75168648B9524E0C2A38DAD4555421D *)L_97);
		TrailModule_set_colorOverTrail_m8440C6574C8310292B93D70EA4FE3EE8C40DF8DB((TrailModule_t95D15372971E64A1977B7587ABAA87B1A31EF5C8 *)(TrailModule_t95D15372971E64A1977B7587ABAA87B1A31EF5C8 *)(&V_0), (MinMaxGradient_tF4530B26F29D9635D670A33B9EE581EAC48C12B7 )L_98, /*hidden argument*/NULL);
		// break;
		goto IL_038e;
	}

IL_0388:
	{
		// reader.Skip();
		ES3Reader_t2780AF8AA61DA2A817115CEF8612AC0E494D03C9 * L_99 = ___reader0;
		NullCheck((ES3Reader_t2780AF8AA61DA2A817115CEF8612AC0E494D03C9 *)L_99);
		VirtActionInvoker0::Invoke(41 /* System.Void ES3Reader::Skip() */, (ES3Reader_t2780AF8AA61DA2A817115CEF8612AC0E494D03C9 *)L_99);
	}

IL_038e:
	{
		// while((propertyName = reader.ReadPropertyName()) != null)
		ES3Reader_t2780AF8AA61DA2A817115CEF8612AC0E494D03C9 * L_100 = ___reader0;
		NullCheck((ES3Reader_t2780AF8AA61DA2A817115CEF8612AC0E494D03C9 *)L_100);
		String_t* L_101;
		L_101 = VirtFuncInvoker0< String_t* >::Invoke(21 /* System.String ES3Reader::ReadPropertyName() */, (ES3Reader_t2780AF8AA61DA2A817115CEF8612AC0E494D03C9 *)L_100);
		String_t* L_102 = (String_t*)L_101;
		V_1 = (String_t*)L_102;
		if (L_102)
		{
			goto IL_000c;
		}
	}
	{
		// }
		return;
	}
}
// System.Void ES3Types.ES3Type_TrailModule::ReadInto<UnityEngine.ParticleSystem/InheritVelocityModule>(ES3Reader,System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ES3Type_TrailModule_ReadInto_TisInheritVelocityModule_t25F2271E4D9ED5D27234CDD00271CB7D435D9619_m2AD42FBB62704EFE2D3706AD24B375911E11B970_gshared (ES3Type_TrailModule_tC773F73EC0443516DD128FF2B5AE010809742462 * __this, ES3Reader_t2780AF8AA61DA2A817115CEF8612AC0E494D03C9 * ___reader0, RuntimeObject * ___obj1, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ES3Reader_Read_TisBoolean_t07D1E3F34E4813023D64F584DFF7B34C9D922F37_mC6D1B158268FF9B97822FF9F5B37FB1723FEDA22_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ES3Reader_Read_TisMinMaxCurve_tF036239442AB2D438B1EDABEBC785426871084CD_mD285150CBFB52440643BBECB5ADF4EE8DE940535_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ES3Reader_Read_TisMinMaxGradient_tF4530B26F29D9635D670A33B9EE581EAC48C12B7_m6A3DD8CBBAC5D32B838B6C4399009AB8AA512ACC_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ES3Reader_Read_TisParticleSystemTrailTextureMode_tF3259187CA4D0A61EDB3A40E63CBF6C42641CE9F_m055DB1212E8BC34F385DF7D302F16241554E9730_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ES3Reader_Read_TisSingle_tE07797BA3C98D4CA9B5A19413C19A76688AB899E_m4A0416374498BDA042B8EB21E49B72326D6CE5F4_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ES3Type_MinMaxCurve_tC5342BF0F8735B85CB5E16FDD4C6FACC8AFAD3B7_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ES3Type_MinMaxGradient_t5DD353D60E95642AB39D1C97C6FD6DD1B067D3CF_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ES3Type_bool_t8F309F7B9CC735FF1DEE68081B6E3CAB367745F4_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ES3Type_float_tF86B773C86731BD9AD79448B860BBB178FE77644_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&TrailModule_t95D15372971E64A1977B7587ABAA87B1A31EF5C8_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral1D87A56AE67B2CD49CAE6E942C2FB7AD98925C00);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral354281948B6269615E32D856CF85B6F456724DAA);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral4221314F268D184F46688D45C85446821F1F1BC3);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral47C47DD09640803AD8016748EAE1F04DD1D41119);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral5C86338F177203D001C41D9C348A83D1338CC7D0);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral60126327537B7B8E6EE33C43FE0C5CA8BCC3A06A);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral87F70660D62DE5FC257FBADE9DA4EC9188597DE5);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralA967787586EC9E5A17A9C55E2002AB73A5E21A0A);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralADAEB0839588196B349BDB6CF33AFA3E0736360B);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralBE2893848F9FC647C2288DA6581A1522E9695182);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralBF540D6548854CC21630064FBA5390C9409C86F0);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralC580B374AA991574F91DFC86C068E7FAD661A3A4);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralE049DB547285CFCE1CB9A95934B6B6DCE2D219EC);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralF9D225733E1D10F9344C755C4A9C0870CD1DE97B);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralFE5F89F63E2381500F62A7CBD6954563BE44562F);
		s_Il2CppMethodInitialized = true;
	}
	TrailModule_t95D15372971E64A1977B7587ABAA87B1A31EF5C8  V_0;
	memset((&V_0), 0, sizeof(V_0));
	String_t* V_1 = NULL;
	uint32_t V_2 = 0;
	{
		// var instance = (UnityEngine.ParticleSystem.TrailModule)obj;
		RuntimeObject * L_0 = ___obj1;
		V_0 = (TrailModule_t95D15372971E64A1977B7587ABAA87B1A31EF5C8 )((*(TrailModule_t95D15372971E64A1977B7587ABAA87B1A31EF5C8 *)((TrailModule_t95D15372971E64A1977B7587ABAA87B1A31EF5C8 *)UnBox(L_0, TrailModule_t95D15372971E64A1977B7587ABAA87B1A31EF5C8_il2cpp_TypeInfo_var))));
		goto IL_038e;
	}

IL_000c:
	{
		String_t* L_1 = V_1;
		if (!L_1)
		{
			goto IL_0388;
		}
	}
	{
		String_t* L_2 = V_1;
		uint32_t L_3;
		L_3 = U3CPrivateImplementationDetailsU3E_ComputeStringHash_m3ADC1F612F9EE3DD518E6F0023A0DE0EE2B120A7((String_t*)L_2, /*hidden argument*/NULL);
		V_2 = (uint32_t)L_3;
		uint32_t L_4 = V_2;
		if ((!(((uint32_t)L_4) <= ((uint32_t)((int32_t)1376955374)))))
		{
			goto IL_008d;
		}
	}
	{
		uint32_t L_5 = V_2;
		if ((!(((uint32_t)L_5) <= ((uint32_t)((int32_t)494095910)))))
		{
			goto IL_004f;
		}
	}
	{
		uint32_t L_6 = V_2;
		if ((((int32_t)L_6) == ((int32_t)((int32_t)49525662))))
		{
			goto IL_010e;
		}
	}
	{
		uint32_t L_7 = V_2;
		if ((((int32_t)L_7) == ((int32_t)((int32_t)341298456))))
		{
			goto IL_021f;
		}
	}
	{
		uint32_t L_8 = V_2;
		if ((((int32_t)L_8) == ((int32_t)((int32_t)494095910))))
		{
			goto IL_0234;
		}
	}
	{
		goto IL_0388;
	}

IL_004f:
	{
		uint32_t L_9 = V_2;
		if ((!(((uint32_t)L_9) <= ((uint32_t)((int32_t)973733911)))))
		{
			goto IL_0072;
		}
	}
	{
		uint32_t L_10 = V_2;
		if ((((int32_t)L_10) == ((int32_t)((int32_t)559929418))))
		{
			goto IL_01b6;
		}
	}
	{
		uint32_t L_11 = V_2;
		if ((((int32_t)L_11) == ((int32_t)((int32_t)973733911))))
		{
			goto IL_0177;
		}
	}
	{
		goto IL_0388;
	}

IL_0072:
	{
		uint32_t L_12 = V_2;
		if ((((int32_t)L_12) == ((int32_t)((int32_t)1024708593))))
		{
			goto IL_014d;
		}
	}
	{
		uint32_t L_13 = V_2;
		if ((((int32_t)L_13) == ((int32_t)((int32_t)1376955374))))
		{
			goto IL_0138;
		}
	}
	{
		goto IL_0388;
	}

IL_008d:
	{
		uint32_t L_14 = V_2;
		if ((!(((uint32_t)L_14) <= ((uint32_t)((int32_t)-2100707162)))))
		{
			goto IL_00d3;
		}
	}
	{
		uint32_t L_15 = V_2;
		if ((!(((uint32_t)L_15) <= ((uint32_t)((int32_t)1975189197)))))
		{
			goto IL_00b8;
		}
	}
	{
		uint32_t L_16 = V_2;
		if ((((int32_t)L_16) == ((int32_t)((int32_t)1546474083))))
		{
			goto IL_020a;
		}
	}
	{
		uint32_t L_17 = V_2;
		if ((((int32_t)L_17) == ((int32_t)((int32_t)1975189197))))
		{
			goto IL_01cb;
		}
	}
	{
		goto IL_0388;
	}

IL_00b8:
	{
		uint32_t L_18 = V_2;
		if ((((int32_t)L_18) == ((int32_t)((int32_t)2053023684))))
		{
			goto IL_01a1;
		}
	}
	{
		uint32_t L_19 = V_2;
		if ((((int32_t)L_19) == ((int32_t)((int32_t)-2100707162))))
		{
			goto IL_0162;
		}
	}
	{
		goto IL_0388;
	}

IL_00d3:
	{
		uint32_t L_20 = V_2;
		if ((!(((uint32_t)L_20) <= ((uint32_t)((int32_t)-1319579393)))))
		{
			goto IL_00f6;
		}
	}
	{
		uint32_t L_21 = V_2;
		if ((((int32_t)L_21) == ((int32_t)((int32_t)-1562862963))))
		{
			goto IL_01e0;
		}
	}
	{
		uint32_t L_22 = V_2;
		if ((((int32_t)L_22) == ((int32_t)((int32_t)-1319579393))))
		{
			goto IL_018c;
		}
	}
	{
		goto IL_0388;
	}

IL_00f6:
	{
		uint32_t L_23 = V_2;
		if ((((int32_t)L_23) == ((int32_t)((int32_t)-1055777148))))
		{
			goto IL_0123;
		}
	}
	{
		uint32_t L_24 = V_2;
		if ((((int32_t)L_24) == ((int32_t)((int32_t)-413379935))))
		{
			goto IL_01f5;
		}
	}
	{
		goto IL_0388;
	}

IL_010e:
	{
		String_t* L_25 = V_1;
		bool L_26;
		L_26 = String_op_Equality_m50B3548E4AC232558190B0052877B290AA1D436A((String_t*)L_25, (String_t*)_stringLiteralF9D225733E1D10F9344C755C4A9C0870CD1DE97B, /*hidden argument*/NULL);
		if (L_26)
		{
			goto IL_0249;
		}
	}
	{
		goto IL_0388;
	}

IL_0123:
	{
		String_t* L_27 = V_1;
		bool L_28;
		L_28 = String_op_Equality_m50B3548E4AC232558190B0052877B290AA1D436A((String_t*)L_27, (String_t*)_stringLiteral60126327537B7B8E6EE33C43FE0C5CA8BCC3A06A, /*hidden argument*/NULL);
		if (L_28)
		{
			goto IL_0260;
		}
	}
	{
		goto IL_0388;
	}

IL_0138:
	{
		String_t* L_29 = V_1;
		bool L_30;
		L_30 = String_op_Equality_m50B3548E4AC232558190B0052877B290AA1D436A((String_t*)L_29, (String_t*)_stringLiteralBE2893848F9FC647C2288DA6581A1522E9695182, /*hidden argument*/NULL);
		if (L_30)
		{
			goto IL_0277;
		}
	}
	{
		goto IL_0388;
	}

IL_014d:
	{
		String_t* L_31 = V_1;
		bool L_32;
		L_32 = String_op_Equality_m50B3548E4AC232558190B0052877B290AA1D436A((String_t*)L_31, (String_t*)_stringLiteral4221314F268D184F46688D45C85446821F1F1BC3, /*hidden argument*/NULL);
		if (L_32)
		{
			goto IL_028e;
		}
	}
	{
		goto IL_0388;
	}

IL_0162:
	{
		String_t* L_33 = V_1;
		bool L_34;
		L_34 = String_op_Equality_m50B3548E4AC232558190B0052877B290AA1D436A((String_t*)L_33, (String_t*)_stringLiteral5C86338F177203D001C41D9C348A83D1338CC7D0, /*hidden argument*/NULL);
		if (L_34)
		{
			goto IL_02a5;
		}
	}
	{
		goto IL_0388;
	}

IL_0177:
	{
		String_t* L_35 = V_1;
		bool L_36;
		L_36 = String_op_Equality_m50B3548E4AC232558190B0052877B290AA1D436A((String_t*)L_35, (String_t*)_stringLiteralFE5F89F63E2381500F62A7CBD6954563BE44562F, /*hidden argument*/NULL);
		if (L_36)
		{
			goto IL_02bc;
		}
	}
	{
		goto IL_0388;
	}

IL_018c:
	{
		String_t* L_37 = V_1;
		bool L_38;
		L_38 = String_op_Equality_m50B3548E4AC232558190B0052877B290AA1D436A((String_t*)L_37, (String_t*)_stringLiteral87F70660D62DE5FC257FBADE9DA4EC9188597DE5, /*hidden argument*/NULL);
		if (L_38)
		{
			goto IL_02ce;
		}
	}
	{
		goto IL_0388;
	}

IL_01a1:
	{
		String_t* L_39 = V_1;
		bool L_40;
		L_40 = String_op_Equality_m50B3548E4AC232558190B0052877B290AA1D436A((String_t*)L_39, (String_t*)_stringLiteral354281948B6269615E32D856CF85B6F456724DAA, /*hidden argument*/NULL);
		if (L_40)
		{
			goto IL_02e5;
		}
	}
	{
		goto IL_0388;
	}

IL_01b6:
	{
		String_t* L_41 = V_1;
		bool L_42;
		L_42 = String_op_Equality_m50B3548E4AC232558190B0052877B290AA1D436A((String_t*)L_41, (String_t*)_stringLiteralADAEB0839588196B349BDB6CF33AFA3E0736360B, /*hidden argument*/NULL);
		if (L_42)
		{
			goto IL_02fc;
		}
	}
	{
		goto IL_0388;
	}

IL_01cb:
	{
		String_t* L_43 = V_1;
		bool L_44;
		L_44 = String_op_Equality_m50B3548E4AC232558190B0052877B290AA1D436A((String_t*)L_43, (String_t*)_stringLiteralC580B374AA991574F91DFC86C068E7FAD661A3A4, /*hidden argument*/NULL);
		if (L_44)
		{
			goto IL_0310;
		}
	}
	{
		goto IL_0388;
	}

IL_01e0:
	{
		String_t* L_45 = V_1;
		bool L_46;
		L_46 = String_op_Equality_m50B3548E4AC232558190B0052877B290AA1D436A((String_t*)L_45, (String_t*)_stringLiteralE049DB547285CFCE1CB9A95934B6B6DCE2D219EC, /*hidden argument*/NULL);
		if (L_46)
		{
			goto IL_0324;
		}
	}
	{
		goto IL_0388;
	}

IL_01f5:
	{
		String_t* L_47 = V_1;
		bool L_48;
		L_48 = String_op_Equality_m50B3548E4AC232558190B0052877B290AA1D436A((String_t*)L_47, (String_t*)_stringLiteralBF540D6548854CC21630064FBA5390C9409C86F0, /*hidden argument*/NULL);
		if (L_48)
		{
			goto IL_0338;
		}
	}
	{
		goto IL_0388;
	}

IL_020a:
	{
		String_t* L_49 = V_1;
		bool L_50;
		L_50 = String_op_Equality_m50B3548E4AC232558190B0052877B290AA1D436A((String_t*)L_49, (String_t*)_stringLiteral1D87A56AE67B2CD49CAE6E942C2FB7AD98925C00, /*hidden argument*/NULL);
		if (L_50)
		{
			goto IL_034c;
		}
	}
	{
		goto IL_0388;
	}

IL_021f:
	{
		String_t* L_51 = V_1;
		bool L_52;
		L_52 = String_op_Equality_m50B3548E4AC232558190B0052877B290AA1D436A((String_t*)L_51, (String_t*)_stringLiteralA967787586EC9E5A17A9C55E2002AB73A5E21A0A, /*hidden argument*/NULL);
		if (L_52)
		{
			goto IL_0360;
		}
	}
	{
		goto IL_0388;
	}

IL_0234:
	{
		String_t* L_53 = V_1;
		bool L_54;
		L_54 = String_op_Equality_m50B3548E4AC232558190B0052877B290AA1D436A((String_t*)L_53, (String_t*)_stringLiteral47C47DD09640803AD8016748EAE1F04DD1D41119, /*hidden argument*/NULL);
		if (L_54)
		{
			goto IL_0374;
		}
	}
	{
		goto IL_0388;
	}

IL_0249:
	{
		// instance.enabled = reader.Read<System.Boolean>(ES3Type_bool.Instance);
		ES3Reader_t2780AF8AA61DA2A817115CEF8612AC0E494D03C9 * L_55 = ___reader0;
		IL2CPP_RUNTIME_CLASS_INIT(ES3Type_bool_t8F309F7B9CC735FF1DEE68081B6E3CAB367745F4_il2cpp_TypeInfo_var);
		ES3Type_t8FBECB7AE75168648B9524E0C2A38DAD4555421D * L_56 = ((ES3Type_bool_t8F309F7B9CC735FF1DEE68081B6E3CAB367745F4_StaticFields*)il2cpp_codegen_static_fields_for(ES3Type_bool_t8F309F7B9CC735FF1DEE68081B6E3CAB367745F4_il2cpp_TypeInfo_var))->get_Instance_12();
		NullCheck((ES3Reader_t2780AF8AA61DA2A817115CEF8612AC0E494D03C9 *)L_55);
		bool L_57;
		L_57 = GenericVirtFuncInvoker1< bool, ES3Type_t8FBECB7AE75168648B9524E0C2A38DAD4555421D * >::Invoke(ES3Reader_Read_TisBoolean_t07D1E3F34E4813023D64F584DFF7B34C9D922F37_mC6D1B158268FF9B97822FF9F5B37FB1723FEDA22_RuntimeMethod_var, (ES3Reader_t2780AF8AA61DA2A817115CEF8612AC0E494D03C9 *)L_55, (ES3Type_t8FBECB7AE75168648B9524E0C2A38DAD4555421D *)L_56);
		TrailModule_set_enabled_mFC8451DDDF40CCBB3E32A4B30A001115F6346894((TrailModule_t95D15372971E64A1977B7587ABAA87B1A31EF5C8 *)(TrailModule_t95D15372971E64A1977B7587ABAA87B1A31EF5C8 *)(&V_0), (bool)L_57, /*hidden argument*/NULL);
		// break;
		goto IL_038e;
	}

IL_0260:
	{
		// instance.ratio = reader.Read<System.Single>(ES3Type_float.Instance);
		ES3Reader_t2780AF8AA61DA2A817115CEF8612AC0E494D03C9 * L_58 = ___reader0;
		IL2CPP_RUNTIME_CLASS_INIT(ES3Type_float_tF86B773C86731BD9AD79448B860BBB178FE77644_il2cpp_TypeInfo_var);
		ES3Type_t8FBECB7AE75168648B9524E0C2A38DAD4555421D * L_59 = ((ES3Type_float_tF86B773C86731BD9AD79448B860BBB178FE77644_StaticFields*)il2cpp_codegen_static_fields_for(ES3Type_float_tF86B773C86731BD9AD79448B860BBB178FE77644_il2cpp_TypeInfo_var))->get_Instance_12();
		NullCheck((ES3Reader_t2780AF8AA61DA2A817115CEF8612AC0E494D03C9 *)L_58);
		float L_60;
		L_60 = GenericVirtFuncInvoker1< float, ES3Type_t8FBECB7AE75168648B9524E0C2A38DAD4555421D * >::Invoke(ES3Reader_Read_TisSingle_tE07797BA3C98D4CA9B5A19413C19A76688AB899E_m4A0416374498BDA042B8EB21E49B72326D6CE5F4_RuntimeMethod_var, (ES3Reader_t2780AF8AA61DA2A817115CEF8612AC0E494D03C9 *)L_58, (ES3Type_t8FBECB7AE75168648B9524E0C2A38DAD4555421D *)L_59);
		TrailModule_set_ratio_m34E63B34E7B0E8D037AD45532B2E2D5BD0750189((TrailModule_t95D15372971E64A1977B7587ABAA87B1A31EF5C8 *)(TrailModule_t95D15372971E64A1977B7587ABAA87B1A31EF5C8 *)(&V_0), (float)L_60, /*hidden argument*/NULL);
		// break;
		goto IL_038e;
	}

IL_0277:
	{
		// instance.lifetime = reader.Read<UnityEngine.ParticleSystem.MinMaxCurve>(ES3Type_MinMaxCurve.Instance);
		ES3Reader_t2780AF8AA61DA2A817115CEF8612AC0E494D03C9 * L_61 = ___reader0;
		IL2CPP_RUNTIME_CLASS_INIT(ES3Type_MinMaxCurve_tC5342BF0F8735B85CB5E16FDD4C6FACC8AFAD3B7_il2cpp_TypeInfo_var);
		ES3Type_t8FBECB7AE75168648B9524E0C2A38DAD4555421D * L_62 = ((ES3Type_MinMaxCurve_tC5342BF0F8735B85CB5E16FDD4C6FACC8AFAD3B7_StaticFields*)il2cpp_codegen_static_fields_for(ES3Type_MinMaxCurve_tC5342BF0F8735B85CB5E16FDD4C6FACC8AFAD3B7_il2cpp_TypeInfo_var))->get_Instance_12();
		NullCheck((ES3Reader_t2780AF8AA61DA2A817115CEF8612AC0E494D03C9 *)L_61);
		MinMaxCurve_tF036239442AB2D438B1EDABEBC785426871084CD  L_63;
		L_63 = GenericVirtFuncInvoker1< MinMaxCurve_tF036239442AB2D438B1EDABEBC785426871084CD , ES3Type_t8FBECB7AE75168648B9524E0C2A38DAD4555421D * >::Invoke(ES3Reader_Read_TisMinMaxCurve_tF036239442AB2D438B1EDABEBC785426871084CD_mD285150CBFB52440643BBECB5ADF4EE8DE940535_RuntimeMethod_var, (ES3Reader_t2780AF8AA61DA2A817115CEF8612AC0E494D03C9 *)L_61, (ES3Type_t8FBECB7AE75168648B9524E0C2A38DAD4555421D *)L_62);
		TrailModule_set_lifetime_m57C898C42B9F18F5A0E88AAA7B10276CC158C39D((TrailModule_t95D15372971E64A1977B7587ABAA87B1A31EF5C8 *)(TrailModule_t95D15372971E64A1977B7587ABAA87B1A31EF5C8 *)(&V_0), (MinMaxCurve_tF036239442AB2D438B1EDABEBC785426871084CD )L_63, /*hidden argument*/NULL);
		// break;
		goto IL_038e;
	}

IL_028e:
	{
		// instance.lifetimeMultiplier = reader.Read<System.Single>(ES3Type_float.Instance);
		ES3Reader_t2780AF8AA61DA2A817115CEF8612AC0E494D03C9 * L_64 = ___reader0;
		IL2CPP_RUNTIME_CLASS_INIT(ES3Type_float_tF86B773C86731BD9AD79448B860BBB178FE77644_il2cpp_TypeInfo_var);
		ES3Type_t8FBECB7AE75168648B9524E0C2A38DAD4555421D * L_65 = ((ES3Type_float_tF86B773C86731BD9AD79448B860BBB178FE77644_StaticFields*)il2cpp_codegen_static_fields_for(ES3Type_float_tF86B773C86731BD9AD79448B860BBB178FE77644_il2cpp_TypeInfo_var))->get_Instance_12();
		NullCheck((ES3Reader_t2780AF8AA61DA2A817115CEF8612AC0E494D03C9 *)L_64);
		float L_66;
		L_66 = GenericVirtFuncInvoker1< float, ES3Type_t8FBECB7AE75168648B9524E0C2A38DAD4555421D * >::Invoke(ES3Reader_Read_TisSingle_tE07797BA3C98D4CA9B5A19413C19A76688AB899E_m4A0416374498BDA042B8EB21E49B72326D6CE5F4_RuntimeMethod_var, (ES3Reader_t2780AF8AA61DA2A817115CEF8612AC0E494D03C9 *)L_64, (ES3Type_t8FBECB7AE75168648B9524E0C2A38DAD4555421D *)L_65);
		TrailModule_set_lifetimeMultiplier_m23F95D65EE8C82152AE1CF2E41531EC2789A866B((TrailModule_t95D15372971E64A1977B7587ABAA87B1A31EF5C8 *)(TrailModule_t95D15372971E64A1977B7587ABAA87B1A31EF5C8 *)(&V_0), (float)L_66, /*hidden argument*/NULL);
		// break;
		goto IL_038e;
	}

IL_02a5:
	{
		// instance.minVertexDistance = reader.Read<System.Single>(ES3Type_float.Instance);
		ES3Reader_t2780AF8AA61DA2A817115CEF8612AC0E494D03C9 * L_67 = ___reader0;
		IL2CPP_RUNTIME_CLASS_INIT(ES3Type_float_tF86B773C86731BD9AD79448B860BBB178FE77644_il2cpp_TypeInfo_var);
		ES3Type_t8FBECB7AE75168648B9524E0C2A38DAD4555421D * L_68 = ((ES3Type_float_tF86B773C86731BD9AD79448B860BBB178FE77644_StaticFields*)il2cpp_codegen_static_fields_for(ES3Type_float_tF86B773C86731BD9AD79448B860BBB178FE77644_il2cpp_TypeInfo_var))->get_Instance_12();
		NullCheck((ES3Reader_t2780AF8AA61DA2A817115CEF8612AC0E494D03C9 *)L_67);
		float L_69;
		L_69 = GenericVirtFuncInvoker1< float, ES3Type_t8FBECB7AE75168648B9524E0C2A38DAD4555421D * >::Invoke(ES3Reader_Read_TisSingle_tE07797BA3C98D4CA9B5A19413C19A76688AB899E_m4A0416374498BDA042B8EB21E49B72326D6CE5F4_RuntimeMethod_var, (ES3Reader_t2780AF8AA61DA2A817115CEF8612AC0E494D03C9 *)L_67, (ES3Type_t8FBECB7AE75168648B9524E0C2A38DAD4555421D *)L_68);
		TrailModule_set_minVertexDistance_mF7C29F88FBF540CE4987F4CF9B141C624808FBC5((TrailModule_t95D15372971E64A1977B7587ABAA87B1A31EF5C8 *)(TrailModule_t95D15372971E64A1977B7587ABAA87B1A31EF5C8 *)(&V_0), (float)L_69, /*hidden argument*/NULL);
		// break;
		goto IL_038e;
	}

IL_02bc:
	{
		// instance.textureMode = reader.Read<UnityEngine.ParticleSystemTrailTextureMode>();
		ES3Reader_t2780AF8AA61DA2A817115CEF8612AC0E494D03C9 * L_70 = ___reader0;
		NullCheck((ES3Reader_t2780AF8AA61DA2A817115CEF8612AC0E494D03C9 *)L_70);
		int32_t L_71;
		L_71 = GenericVirtFuncInvoker0< int32_t >::Invoke(ES3Reader_Read_TisParticleSystemTrailTextureMode_tF3259187CA4D0A61EDB3A40E63CBF6C42641CE9F_m055DB1212E8BC34F385DF7D302F16241554E9730_RuntimeMethod_var, (ES3Reader_t2780AF8AA61DA2A817115CEF8612AC0E494D03C9 *)L_70);
		TrailModule_set_textureMode_mC1F8AE0D2965FC47BDBFF4F53E0673D5FB58CF28((TrailModule_t95D15372971E64A1977B7587ABAA87B1A31EF5C8 *)(TrailModule_t95D15372971E64A1977B7587ABAA87B1A31EF5C8 *)(&V_0), (int32_t)L_71, /*hidden argument*/NULL);
		// break;
		goto IL_038e;
	}

IL_02ce:
	{
		// instance.worldSpace = reader.Read<System.Boolean>(ES3Type_bool.Instance);
		ES3Reader_t2780AF8AA61DA2A817115CEF8612AC0E494D03C9 * L_72 = ___reader0;
		IL2CPP_RUNTIME_CLASS_INIT(ES3Type_bool_t8F309F7B9CC735FF1DEE68081B6E3CAB367745F4_il2cpp_TypeInfo_var);
		ES3Type_t8FBECB7AE75168648B9524E0C2A38DAD4555421D * L_73 = ((ES3Type_bool_t8F309F7B9CC735FF1DEE68081B6E3CAB367745F4_StaticFields*)il2cpp_codegen_static_fields_for(ES3Type_bool_t8F309F7B9CC735FF1DEE68081B6E3CAB367745F4_il2cpp_TypeInfo_var))->get_Instance_12();
		NullCheck((ES3Reader_t2780AF8AA61DA2A817115CEF8612AC0E494D03C9 *)L_72);
		bool L_74;
		L_74 = GenericVirtFuncInvoker1< bool, ES3Type_t8FBECB7AE75168648B9524E0C2A38DAD4555421D * >::Invoke(ES3Reader_Read_TisBoolean_t07D1E3F34E4813023D64F584DFF7B34C9D922F37_mC6D1B158268FF9B97822FF9F5B37FB1723FEDA22_RuntimeMethod_var, (ES3Reader_t2780AF8AA61DA2A817115CEF8612AC0E494D03C9 *)L_72, (ES3Type_t8FBECB7AE75168648B9524E0C2A38DAD4555421D *)L_73);
		TrailModule_set_worldSpace_m42A63AF4A96F24A621A29A0F35240195F0E56B1A((TrailModule_t95D15372971E64A1977B7587ABAA87B1A31EF5C8 *)(TrailModule_t95D15372971E64A1977B7587ABAA87B1A31EF5C8 *)(&V_0), (bool)L_74, /*hidden argument*/NULL);
		// break;
		goto IL_038e;
	}

IL_02e5:
	{
		// instance.dieWithParticles = reader.Read<System.Boolean>(ES3Type_bool.Instance);
		ES3Reader_t2780AF8AA61DA2A817115CEF8612AC0E494D03C9 * L_75 = ___reader0;
		IL2CPP_RUNTIME_CLASS_INIT(ES3Type_bool_t8F309F7B9CC735FF1DEE68081B6E3CAB367745F4_il2cpp_TypeInfo_var);
		ES3Type_t8FBECB7AE75168648B9524E0C2A38DAD4555421D * L_76 = ((ES3Type_bool_t8F309F7B9CC735FF1DEE68081B6E3CAB367745F4_StaticFields*)il2cpp_codegen_static_fields_for(ES3Type_bool_t8F309F7B9CC735FF1DEE68081B6E3CAB367745F4_il2cpp_TypeInfo_var))->get_Instance_12();
		NullCheck((ES3Reader_t2780AF8AA61DA2A817115CEF8612AC0E494D03C9 *)L_75);
		bool L_77;
		L_77 = GenericVirtFuncInvoker1< bool, ES3Type_t8FBECB7AE75168648B9524E0C2A38DAD4555421D * >::Invoke(ES3Reader_Read_TisBoolean_t07D1E3F34E4813023D64F584DFF7B34C9D922F37_mC6D1B158268FF9B97822FF9F5B37FB1723FEDA22_RuntimeMethod_var, (ES3Reader_t2780AF8AA61DA2A817115CEF8612AC0E494D03C9 *)L_75, (ES3Type_t8FBECB7AE75168648B9524E0C2A38DAD4555421D *)L_76);
		TrailModule_set_dieWithParticles_mB7C4E8DC2F908FDF6D57A77B54B821E360D8DA99((TrailModule_t95D15372971E64A1977B7587ABAA87B1A31EF5C8 *)(TrailModule_t95D15372971E64A1977B7587ABAA87B1A31EF5C8 *)(&V_0), (bool)L_77, /*hidden argument*/NULL);
		// break;
		goto IL_038e;
	}

IL_02fc:
	{
		// instance.sizeAffectsWidth = reader.Read<System.Boolean>(ES3Type_bool.Instance);
		ES3Reader_t2780AF8AA61DA2A817115CEF8612AC0E494D03C9 * L_78 = ___reader0;
		IL2CPP_RUNTIME_CLASS_INIT(ES3Type_bool_t8F309F7B9CC735FF1DEE68081B6E3CAB367745F4_il2cpp_TypeInfo_var);
		ES3Type_t8FBECB7AE75168648B9524E0C2A38DAD4555421D * L_79 = ((ES3Type_bool_t8F309F7B9CC735FF1DEE68081B6E3CAB367745F4_StaticFields*)il2cpp_codegen_static_fields_for(ES3Type_bool_t8F309F7B9CC735FF1DEE68081B6E3CAB367745F4_il2cpp_TypeInfo_var))->get_Instance_12();
		NullCheck((ES3Reader_t2780AF8AA61DA2A817115CEF8612AC0E494D03C9 *)L_78);
		bool L_80;
		L_80 = GenericVirtFuncInvoker1< bool, ES3Type_t8FBECB7AE75168648B9524E0C2A38DAD4555421D * >::Invoke(ES3Reader_Read_TisBoolean_t07D1E3F34E4813023D64F584DFF7B34C9D922F37_mC6D1B158268FF9B97822FF9F5B37FB1723FEDA22_RuntimeMethod_var, (ES3Reader_t2780AF8AA61DA2A817115CEF8612AC0E494D03C9 *)L_78, (ES3Type_t8FBECB7AE75168648B9524E0C2A38DAD4555421D *)L_79);
		TrailModule_set_sizeAffectsWidth_m3517856E39080DA69B447499C8846D2491B0ABF0((TrailModule_t95D15372971E64A1977B7587ABAA87B1A31EF5C8 *)(TrailModule_t95D15372971E64A1977B7587ABAA87B1A31EF5C8 *)(&V_0), (bool)L_80, /*hidden argument*/NULL);
		// break;
		goto IL_038e;
	}

IL_0310:
	{
		// instance.sizeAffectsLifetime = reader.Read<System.Boolean>(ES3Type_bool.Instance);
		ES3Reader_t2780AF8AA61DA2A817115CEF8612AC0E494D03C9 * L_81 = ___reader0;
		IL2CPP_RUNTIME_CLASS_INIT(ES3Type_bool_t8F309F7B9CC735FF1DEE68081B6E3CAB367745F4_il2cpp_TypeInfo_var);
		ES3Type_t8FBECB7AE75168648B9524E0C2A38DAD4555421D * L_82 = ((ES3Type_bool_t8F309F7B9CC735FF1DEE68081B6E3CAB367745F4_StaticFields*)il2cpp_codegen_static_fields_for(ES3Type_bool_t8F309F7B9CC735FF1DEE68081B6E3CAB367745F4_il2cpp_TypeInfo_var))->get_Instance_12();
		NullCheck((ES3Reader_t2780AF8AA61DA2A817115CEF8612AC0E494D03C9 *)L_81);
		bool L_83;
		L_83 = GenericVirtFuncInvoker1< bool, ES3Type_t8FBECB7AE75168648B9524E0C2A38DAD4555421D * >::Invoke(ES3Reader_Read_TisBoolean_t07D1E3F34E4813023D64F584DFF7B34C9D922F37_mC6D1B158268FF9B97822FF9F5B37FB1723FEDA22_RuntimeMethod_var, (ES3Reader_t2780AF8AA61DA2A817115CEF8612AC0E494D03C9 *)L_81, (ES3Type_t8FBECB7AE75168648B9524E0C2A38DAD4555421D *)L_82);
		TrailModule_set_sizeAffectsLifetime_m98BF4A6594193D824B52D88371CF963ACBA388FD((TrailModule_t95D15372971E64A1977B7587ABAA87B1A31EF5C8 *)(TrailModule_t95D15372971E64A1977B7587ABAA87B1A31EF5C8 *)(&V_0), (bool)L_83, /*hidden argument*/NULL);
		// break;
		goto IL_038e;
	}

IL_0324:
	{
		// instance.inheritParticleColor = reader.Read<System.Boolean>(ES3Type_bool.Instance);
		ES3Reader_t2780AF8AA61DA2A817115CEF8612AC0E494D03C9 * L_84 = ___reader0;
		IL2CPP_RUNTIME_CLASS_INIT(ES3Type_bool_t8F309F7B9CC735FF1DEE68081B6E3CAB367745F4_il2cpp_TypeInfo_var);
		ES3Type_t8FBECB7AE75168648B9524E0C2A38DAD4555421D * L_85 = ((ES3Type_bool_t8F309F7B9CC735FF1DEE68081B6E3CAB367745F4_StaticFields*)il2cpp_codegen_static_fields_for(ES3Type_bool_t8F309F7B9CC735FF1DEE68081B6E3CAB367745F4_il2cpp_TypeInfo_var))->get_Instance_12();
		NullCheck((ES3Reader_t2780AF8AA61DA2A817115CEF8612AC0E494D03C9 *)L_84);
		bool L_86;
		L_86 = GenericVirtFuncInvoker1< bool, ES3Type_t8FBECB7AE75168648B9524E0C2A38DAD4555421D * >::Invoke(ES3Reader_Read_TisBoolean_t07D1E3F34E4813023D64F584DFF7B34C9D922F37_mC6D1B158268FF9B97822FF9F5B37FB1723FEDA22_RuntimeMethod_var, (ES3Reader_t2780AF8AA61DA2A817115CEF8612AC0E494D03C9 *)L_84, (ES3Type_t8FBECB7AE75168648B9524E0C2A38DAD4555421D *)L_85);
		TrailModule_set_inheritParticleColor_mCD83E87B5E00F2BFFBE08AD2D1D68606283A4FEE((TrailModule_t95D15372971E64A1977B7587ABAA87B1A31EF5C8 *)(TrailModule_t95D15372971E64A1977B7587ABAA87B1A31EF5C8 *)(&V_0), (bool)L_86, /*hidden argument*/NULL);
		// break;
		goto IL_038e;
	}

IL_0338:
	{
		// instance.colorOverLifetime = reader.Read<UnityEngine.ParticleSystem.MinMaxGradient>(ES3Type_MinMaxGradient.Instance);
		ES3Reader_t2780AF8AA61DA2A817115CEF8612AC0E494D03C9 * L_87 = ___reader0;
		IL2CPP_RUNTIME_CLASS_INIT(ES3Type_MinMaxGradient_t5DD353D60E95642AB39D1C97C6FD6DD1B067D3CF_il2cpp_TypeInfo_var);
		ES3Type_t8FBECB7AE75168648B9524E0C2A38DAD4555421D * L_88 = ((ES3Type_MinMaxGradient_t5DD353D60E95642AB39D1C97C6FD6DD1B067D3CF_StaticFields*)il2cpp_codegen_static_fields_for(ES3Type_MinMaxGradient_t5DD353D60E95642AB39D1C97C6FD6DD1B067D3CF_il2cpp_TypeInfo_var))->get_Instance_12();
		NullCheck((ES3Reader_t2780AF8AA61DA2A817115CEF8612AC0E494D03C9 *)L_87);
		MinMaxGradient_tF4530B26F29D9635D670A33B9EE581EAC48C12B7  L_89;
		L_89 = GenericVirtFuncInvoker1< MinMaxGradient_tF4530B26F29D9635D670A33B9EE581EAC48C12B7 , ES3Type_t8FBECB7AE75168648B9524E0C2A38DAD4555421D * >::Invoke(ES3Reader_Read_TisMinMaxGradient_tF4530B26F29D9635D670A33B9EE581EAC48C12B7_m6A3DD8CBBAC5D32B838B6C4399009AB8AA512ACC_RuntimeMethod_var, (ES3Reader_t2780AF8AA61DA2A817115CEF8612AC0E494D03C9 *)L_87, (ES3Type_t8FBECB7AE75168648B9524E0C2A38DAD4555421D *)L_88);
		TrailModule_set_colorOverLifetime_mCD56BD4B75D3A3947069BA1B93FEC78AAE08DF27((TrailModule_t95D15372971E64A1977B7587ABAA87B1A31EF5C8 *)(TrailModule_t95D15372971E64A1977B7587ABAA87B1A31EF5C8 *)(&V_0), (MinMaxGradient_tF4530B26F29D9635D670A33B9EE581EAC48C12B7 )L_89, /*hidden argument*/NULL);
		// break;
		goto IL_038e;
	}

IL_034c:
	{
		// instance.widthOverTrail = reader.Read<UnityEngine.ParticleSystem.MinMaxCurve>(ES3Type_MinMaxCurve.Instance);
		ES3Reader_t2780AF8AA61DA2A817115CEF8612AC0E494D03C9 * L_90 = ___reader0;
		IL2CPP_RUNTIME_CLASS_INIT(ES3Type_MinMaxCurve_tC5342BF0F8735B85CB5E16FDD4C6FACC8AFAD3B7_il2cpp_TypeInfo_var);
		ES3Type_t8FBECB7AE75168648B9524E0C2A38DAD4555421D * L_91 = ((ES3Type_MinMaxCurve_tC5342BF0F8735B85CB5E16FDD4C6FACC8AFAD3B7_StaticFields*)il2cpp_codegen_static_fields_for(ES3Type_MinMaxCurve_tC5342BF0F8735B85CB5E16FDD4C6FACC8AFAD3B7_il2cpp_TypeInfo_var))->get_Instance_12();
		NullCheck((ES3Reader_t2780AF8AA61DA2A817115CEF8612AC0E494D03C9 *)L_90);
		MinMaxCurve_tF036239442AB2D438B1EDABEBC785426871084CD  L_92;
		L_92 = GenericVirtFuncInvoker1< MinMaxCurve_tF036239442AB2D438B1EDABEBC785426871084CD , ES3Type_t8FBECB7AE75168648B9524E0C2A38DAD4555421D * >::Invoke(ES3Reader_Read_TisMinMaxCurve_tF036239442AB2D438B1EDABEBC785426871084CD_mD285150CBFB52440643BBECB5ADF4EE8DE940535_RuntimeMethod_var, (ES3Reader_t2780AF8AA61DA2A817115CEF8612AC0E494D03C9 *)L_90, (ES3Type_t8FBECB7AE75168648B9524E0C2A38DAD4555421D *)L_91);
		TrailModule_set_widthOverTrail_m6C0A896EBFDED7CE46344B3A0B04212934F30DE1((TrailModule_t95D15372971E64A1977B7587ABAA87B1A31EF5C8 *)(TrailModule_t95D15372971E64A1977B7587ABAA87B1A31EF5C8 *)(&V_0), (MinMaxCurve_tF036239442AB2D438B1EDABEBC785426871084CD )L_92, /*hidden argument*/NULL);
		// break;
		goto IL_038e;
	}

IL_0360:
	{
		// instance.widthOverTrailMultiplier = reader.Read<System.Single>(ES3Type_float.Instance);
		ES3Reader_t2780AF8AA61DA2A817115CEF8612AC0E494D03C9 * L_93 = ___reader0;
		IL2CPP_RUNTIME_CLASS_INIT(ES3Type_float_tF86B773C86731BD9AD79448B860BBB178FE77644_il2cpp_TypeInfo_var);
		ES3Type_t8FBECB7AE75168648B9524E0C2A38DAD4555421D * L_94 = ((ES3Type_float_tF86B773C86731BD9AD79448B860BBB178FE77644_StaticFields*)il2cpp_codegen_static_fields_for(ES3Type_float_tF86B773C86731BD9AD79448B860BBB178FE77644_il2cpp_TypeInfo_var))->get_Instance_12();
		NullCheck((ES3Reader_t2780AF8AA61DA2A817115CEF8612AC0E494D03C9 *)L_93);
		float L_95;
		L_95 = GenericVirtFuncInvoker1< float, ES3Type_t8FBECB7AE75168648B9524E0C2A38DAD4555421D * >::Invoke(ES3Reader_Read_TisSingle_tE07797BA3C98D4CA9B5A19413C19A76688AB899E_m4A0416374498BDA042B8EB21E49B72326D6CE5F4_RuntimeMethod_var, (ES3Reader_t2780AF8AA61DA2A817115CEF8612AC0E494D03C9 *)L_93, (ES3Type_t8FBECB7AE75168648B9524E0C2A38DAD4555421D *)L_94);
		TrailModule_set_widthOverTrailMultiplier_m6A7EA2856CF30B710CCB528EA3EBFD1799C19BD4((TrailModule_t95D15372971E64A1977B7587ABAA87B1A31EF5C8 *)(TrailModule_t95D15372971E64A1977B7587ABAA87B1A31EF5C8 *)(&V_0), (float)L_95, /*hidden argument*/NULL);
		// break;
		goto IL_038e;
	}

IL_0374:
	{
		// instance.colorOverTrail = reader.Read<UnityEngine.ParticleSystem.MinMaxGradient>(ES3Type_MinMaxGradient.Instance);
		ES3Reader_t2780AF8AA61DA2A817115CEF8612AC0E494D03C9 * L_96 = ___reader0;
		IL2CPP_RUNTIME_CLASS_INIT(ES3Type_MinMaxGradient_t5DD353D60E95642AB39D1C97C6FD6DD1B067D3CF_il2cpp_TypeInfo_var);
		ES3Type_t8FBECB7AE75168648B9524E0C2A38DAD4555421D * L_97 = ((ES3Type_MinMaxGradient_t5DD353D60E95642AB39D1C97C6FD6DD1B067D3CF_StaticFields*)il2cpp_codegen_static_fields_for(ES3Type_MinMaxGradient_t5DD353D60E95642AB39D1C97C6FD6DD1B067D3CF_il2cpp_TypeInfo_var))->get_Instance_12();
		NullCheck((ES3Reader_t2780AF8AA61DA2A817115CEF8612AC0E494D03C9 *)L_96);
		MinMaxGradient_tF4530B26F29D9635D670A33B9EE581EAC48C12B7  L_98;
		L_98 = GenericVirtFuncInvoker1< MinMaxGradient_tF4530B26F29D9635D670A33B9EE581EAC48C12B7 , ES3Type_t8FBECB7AE75168648B9524E0C2A38DAD4555421D * >::Invoke(ES3Reader_Read_TisMinMaxGradient_tF4530B26F29D9635D670A33B9EE581EAC48C12B7_m6A3DD8CBBAC5D32B838B6C4399009AB8AA512ACC_RuntimeMethod_var, (ES3Reader_t2780AF8AA61DA2A817115CEF8612AC0E494D03C9 *)L_96, (ES3Type_t8FBECB7AE75168648B9524E0C2A38DAD4555421D *)L_97);
		TrailModule_set_colorOverTrail_m8440C6574C8310292B93D70EA4FE3EE8C40DF8DB((TrailModule_t95D15372971E64A1977B7587ABAA87B1A31EF5C8 *)(TrailModule_t95D15372971E64A1977B7587ABAA87B1A31EF5C8 *)(&V_0), (MinMaxGradient_tF4530B26F29D9635D670A33B9EE581EAC48C12B7 )L_98, /*hidden argument*/NULL);
		// break;
		goto IL_038e;
	}

IL_0388:
	{
		// reader.Skip();
		ES3Reader_t2780AF8AA61DA2A817115CEF8612AC0E494D03C9 * L_99 = ___reader0;
		NullCheck((ES3Reader_t2780AF8AA61DA2A817115CEF8612AC0E494D03C9 *)L_99);
		VirtActionInvoker0::Invoke(41 /* System.Void ES3Reader::Skip() */, (ES3Reader_t2780AF8AA61DA2A817115CEF8612AC0E494D03C9 *)L_99);
	}

IL_038e:
	{
		// while((propertyName = reader.ReadPropertyName()) != null)
		ES3Reader_t2780AF8AA61DA2A817115CEF8612AC0E494D03C9 * L_100 = ___reader0;
		NullCheck((ES3Reader_t2780AF8AA61DA2A817115CEF8612AC0E494D03C9 *)L_100);
		String_t* L_101;
		L_101 = VirtFuncInvoker0< String_t* >::Invoke(21 /* System.String ES3Reader::ReadPropertyName() */, (ES3Reader_t2780AF8AA61DA2A817115CEF8612AC0E494D03C9 *)L_100);
		String_t* L_102 = (String_t*)L_101;
		V_1 = (String_t*)L_102;
		if (L_102)
		{
			goto IL_000c;
		}
	}
	{
		// }
		return;
	}
}
// System.Void ES3Types.ES3Type_TrailModule::ReadInto<UnityEngine.ParticleSystem/LightsModule>(ES3Reader,System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ES3Type_TrailModule_ReadInto_TisLightsModule_t74903A9B68956FEDBDCC81420474A4B9AE399705_m7C9286BC7D226403E8A4AA1BD3FB154713B56653_gshared (ES3Type_TrailModule_tC773F73EC0443516DD128FF2B5AE010809742462 * __this, ES3Reader_t2780AF8AA61DA2A817115CEF8612AC0E494D03C9 * ___reader0, RuntimeObject * ___obj1, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ES3Reader_Read_TisBoolean_t07D1E3F34E4813023D64F584DFF7B34C9D922F37_mC6D1B158268FF9B97822FF9F5B37FB1723FEDA22_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ES3Reader_Read_TisMinMaxCurve_tF036239442AB2D438B1EDABEBC785426871084CD_mD285150CBFB52440643BBECB5ADF4EE8DE940535_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ES3Reader_Read_TisMinMaxGradient_tF4530B26F29D9635D670A33B9EE581EAC48C12B7_m6A3DD8CBBAC5D32B838B6C4399009AB8AA512ACC_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ES3Reader_Read_TisParticleSystemTrailTextureMode_tF3259187CA4D0A61EDB3A40E63CBF6C42641CE9F_m055DB1212E8BC34F385DF7D302F16241554E9730_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ES3Reader_Read_TisSingle_tE07797BA3C98D4CA9B5A19413C19A76688AB899E_m4A0416374498BDA042B8EB21E49B72326D6CE5F4_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ES3Type_MinMaxCurve_tC5342BF0F8735B85CB5E16FDD4C6FACC8AFAD3B7_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ES3Type_MinMaxGradient_t5DD353D60E95642AB39D1C97C6FD6DD1B067D3CF_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ES3Type_bool_t8F309F7B9CC735FF1DEE68081B6E3CAB367745F4_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ES3Type_float_tF86B773C86731BD9AD79448B860BBB178FE77644_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&TrailModule_t95D15372971E64A1977B7587ABAA87B1A31EF5C8_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral1D87A56AE67B2CD49CAE6E942C2FB7AD98925C00);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral354281948B6269615E32D856CF85B6F456724DAA);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral4221314F268D184F46688D45C85446821F1F1BC3);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral47C47DD09640803AD8016748EAE1F04DD1D41119);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral5C86338F177203D001C41D9C348A83D1338CC7D0);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral60126327537B7B8E6EE33C43FE0C5CA8BCC3A06A);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral87F70660D62DE5FC257FBADE9DA4EC9188597DE5);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralA967787586EC9E5A17A9C55E2002AB73A5E21A0A);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralADAEB0839588196B349BDB6CF33AFA3E0736360B);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralBE2893848F9FC647C2288DA6581A1522E9695182);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralBF540D6548854CC21630064FBA5390C9409C86F0);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralC580B374AA991574F91DFC86C068E7FAD661A3A4);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralE049DB547285CFCE1CB9A95934B6B6DCE2D219EC);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralF9D225733E1D10F9344C755C4A9C0870CD1DE97B);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralFE5F89F63E2381500F62A7CBD6954563BE44562F);
		s_Il2CppMethodInitialized = true;
	}
	TrailModule_t95D15372971E64A1977B7587ABAA87B1A31EF5C8  V_0;
	memset((&V_0), 0, sizeof(V_0));
	String_t* V_1 = NULL;
	uint32_t V_2 = 0;
	{
		// var instance = (UnityEngine.ParticleSystem.TrailModule)obj;
		RuntimeObject * L_0 = ___obj1;
		V_0 = (TrailModule_t95D15372971E64A1977B7587ABAA87B1A31EF5C8 )((*(TrailModule_t95D15372971E64A1977B7587ABAA87B1A31EF5C8 *)((TrailModule_t95D15372971E64A1977B7587ABAA87B1A31EF5C8 *)UnBox(L_0, TrailModule_t95D15372971E64A1977B7587ABAA87B1A31EF5C8_il2cpp_TypeInfo_var))));
		goto IL_038e;
	}

IL_000c:
	{
		String_t* L_1 = V_1;
		if (!L_1)
		{
			goto IL_0388;
		}
	}
	{
		String_t* L_2 = V_1;
		uint32_t L_3;
		L_3 = U3CPrivateImplementationDetailsU3E_ComputeStringHash_m3ADC1F612F9EE3DD518E6F0023A0DE0EE2B120A7((String_t*)L_2, /*hidden argument*/NULL);
		V_2 = (uint32_t)L_3;
		uint32_t L_4 = V_2;
		if ((!(((uint32_t)L_4) <= ((uint32_t)((int32_t)1376955374)))))
		{
			goto IL_008d;
		}
	}
	{
		uint32_t L_5 = V_2;
		if ((!(((uint32_t)L_5) <= ((uint32_t)((int32_t)494095910)))))
		{
			goto IL_004f;
		}
	}
	{
		uint32_t L_6 = V_2;
		if ((((int32_t)L_6) == ((int32_t)((int32_t)49525662))))
		{
			goto IL_010e;
		}
	}
	{
		uint32_t L_7 = V_2;
		if ((((int32_t)L_7) == ((int32_t)((int32_t)341298456))))
		{
			goto IL_021f;
		}
	}
	{
		uint32_t L_8 = V_2;
		if ((((int32_t)L_8) == ((int32_t)((int32_t)494095910))))
		{
			goto IL_0234;
		}
	}
	{
		goto IL_0388;
	}

IL_004f:
	{
		uint32_t L_9 = V_2;
		if ((!(((uint32_t)L_9) <= ((uint32_t)((int32_t)973733911)))))
		{
			goto IL_0072;
		}
	}
	{
		uint32_t L_10 = V_2;
		if ((((int32_t)L_10) == ((int32_t)((int32_t)559929418))))
		{
			goto IL_01b6;
		}
	}
	{
		uint32_t L_11 = V_2;
		if ((((int32_t)L_11) == ((int32_t)((int32_t)973733911))))
		{
			goto IL_0177;
		}
	}
	{
		goto IL_0388;
	}

IL_0072:
	{
		uint32_t L_12 = V_2;
		if ((((int32_t)L_12) == ((int32_t)((int32_t)1024708593))))
		{
			goto IL_014d;
		}
	}
	{
		uint32_t L_13 = V_2;
		if ((((int32_t)L_13) == ((int32_t)((int32_t)1376955374))))
		{
			goto IL_0138;
		}
	}
	{
		goto IL_0388;
	}

IL_008d:
	{
		uint32_t L_14 = V_2;
		if ((!(((uint32_t)L_14) <= ((uint32_t)((int32_t)-2100707162)))))
		{
			goto IL_00d3;
		}
	}
	{
		uint32_t L_15 = V_2;
		if ((!(((uint32_t)L_15) <= ((uint32_t)((int32_t)1975189197)))))
		{
			goto IL_00b8;
		}
	}
	{
		uint32_t L_16 = V_2;
		if ((((int32_t)L_16) == ((int32_t)((int32_t)1546474083))))
		{
			goto IL_020a;
		}
	}
	{
		uint32_t L_17 = V_2;
		if ((((int32_t)L_17) == ((int32_t)((int32_t)1975189197))))
		{
			goto IL_01cb;
		}
	}
	{
		goto IL_0388;
	}

IL_00b8:
	{
		uint32_t L_18 = V_2;
		if ((((int32_t)L_18) == ((int32_t)((int32_t)2053023684))))
		{
			goto IL_01a1;
		}
	}
	{
		uint32_t L_19 = V_2;
		if ((((int32_t)L_19) == ((int32_t)((int32_t)-2100707162))))
		{
			goto IL_0162;
		}
	}
	{
		goto IL_0388;
	}

IL_00d3:
	{
		uint32_t L_20 = V_2;
		if ((!(((uint32_t)L_20) <= ((uint32_t)((int32_t)-1319579393)))))
		{
			goto IL_00f6;
		}
	}
	{
		uint32_t L_21 = V_2;
		if ((((int32_t)L_21) == ((int32_t)((int32_t)-1562862963))))
		{
			goto IL_01e0;
		}
	}
	{
		uint32_t L_22 = V_2;
		if ((((int32_t)L_22) == ((int32_t)((int32_t)-1319579393))))
		{
			goto IL_018c;
		}
	}
	{
		goto IL_0388;
	}

IL_00f6:
	{
		uint32_t L_23 = V_2;
		if ((((int32_t)L_23) == ((int32_t)((int32_t)-1055777148))))
		{
			goto IL_0123;
		}
	}
	{
		uint32_t L_24 = V_2;
		if ((((int32_t)L_24) == ((int32_t)((int32_t)-413379935))))
		{
			goto IL_01f5;
		}
	}
	{
		goto IL_0388;
	}

IL_010e:
	{
		String_t* L_25 = V_1;
		bool L_26;
		L_26 = String_op_Equality_m50B3548E4AC232558190B0052877B290AA1D436A((String_t*)L_25, (String_t*)_stringLiteralF9D225733E1D10F9344C755C4A9C0870CD1DE97B, /*hidden argument*/NULL);
		if (L_26)
		{
			goto IL_0249;
		}
	}
	{
		goto IL_0388;
	}

IL_0123:
	{
		String_t* L_27 = V_1;
		bool L_28;
		L_28 = String_op_Equality_m50B3548E4AC232558190B0052877B290AA1D436A((String_t*)L_27, (String_t*)_stringLiteral60126327537B7B8E6EE33C43FE0C5CA8BCC3A06A, /*hidden argument*/NULL);
		if (L_28)
		{
			goto IL_0260;
		}
	}
	{
		goto IL_0388;
	}

IL_0138:
	{
		String_t* L_29 = V_1;
		bool L_30;
		L_30 = String_op_Equality_m50B3548E4AC232558190B0052877B290AA1D436A((String_t*)L_29, (String_t*)_stringLiteralBE2893848F9FC647C2288DA6581A1522E9695182, /*hidden argument*/NULL);
		if (L_30)
		{
			goto IL_0277;
		}
	}
	{
		goto IL_0388;
	}

IL_014d:
	{
		String_t* L_31 = V_1;
		bool L_32;
		L_32 = String_op_Equality_m50B3548E4AC232558190B0052877B290AA1D436A((String_t*)L_31, (String_t*)_stringLiteral4221314F268D184F46688D45C85446821F1F1BC3, /*hidden argument*/NULL);
		if (L_32)
		{
			goto IL_028e;
		}
	}
	{
		goto IL_0388;
	}

IL_0162:
	{
		String_t* L_33 = V_1;
		bool L_34;
		L_34 = String_op_Equality_m50B3548E4AC232558190B0052877B290AA1D436A((String_t*)L_33, (String_t*)_stringLiteral5C86338F177203D001C41D9C348A83D1338CC7D0, /*hidden argument*/NULL);
		if (L_34)
		{
			goto IL_02a5;
		}
	}
	{
		goto IL_0388;
	}

IL_0177:
	{
		String_t* L_35 = V_1;
		bool L_36;
		L_36 = String_op_Equality_m50B3548E4AC232558190B0052877B290AA1D436A((String_t*)L_35, (String_t*)_stringLiteralFE5F89F63E2381500F62A7CBD6954563BE44562F, /*hidden argument*/NULL);
		if (L_36)
		{
			goto IL_02bc;
		}
	}
	{
		goto IL_0388;
	}

IL_018c:
	{
		String_t* L_37 = V_1;
		bool L_38;
		L_38 = String_op_Equality_m50B3548E4AC232558190B0052877B290AA1D436A((String_t*)L_37, (String_t*)_stringLiteral87F70660D62DE5FC257FBADE9DA4EC9188597DE5, /*hidden argument*/NULL);
		if (L_38)
		{
			goto IL_02ce;
		}
	}
	{
		goto IL_0388;
	}

IL_01a1:
	{
		String_t* L_39 = V_1;
		bool L_40;
		L_40 = String_op_Equality_m50B3548E4AC232558190B0052877B290AA1D436A((String_t*)L_39, (String_t*)_stringLiteral354281948B6269615E32D856CF85B6F456724DAA, /*hidden argument*/NULL);
		if (L_40)
		{
			goto IL_02e5;
		}
	}
	{
		goto IL_0388;
	}

IL_01b6:
	{
		String_t* L_41 = V_1;
		bool L_42;
		L_42 = String_op_Equality_m50B3548E4AC232558190B0052877B290AA1D436A((String_t*)L_41, (String_t*)_stringLiteralADAEB0839588196B349BDB6CF33AFA3E0736360B, /*hidden argument*/NULL);
		if (L_42)
		{
			goto IL_02fc;
		}
	}
	{
		goto IL_0388;
	}

IL_01cb:
	{
		String_t* L_43 = V_1;
		bool L_44;
		L_44 = String_op_Equality_m50B3548E4AC232558190B0052877B290AA1D436A((String_t*)L_43, (String_t*)_stringLiteralC580B374AA991574F91DFC86C068E7FAD661A3A4, /*hidden argument*/NULL);
		if (L_44)
		{
			goto IL_0310;
		}
	}
	{
		goto IL_0388;
	}

IL_01e0:
	{
		String_t* L_45 = V_1;
		bool L_46;
		L_46 = String_op_Equality_m50B3548E4AC232558190B0052877B290AA1D436A((String_t*)L_45, (String_t*)_stringLiteralE049DB547285CFCE1CB9A95934B6B6DCE2D219EC, /*hidden argument*/NULL);
		if (L_46)
		{
			goto IL_0324;
		}
	}
	{
		goto IL_0388;
	}

IL_01f5:
	{
		String_t* L_47 = V_1;
		bool L_48;
		L_48 = String_op_Equality_m50B3548E4AC232558190B0052877B290AA1D436A((String_t*)L_47, (String_t*)_stringLiteralBF540D6548854CC21630064FBA5390C9409C86F0, /*hidden argument*/NULL);
		if (L_48)
		{
			goto IL_0338;
		}
	}
	{
		goto IL_0388;
	}

IL_020a:
	{
		String_t* L_49 = V_1;
		bool L_50;
		L_50 = String_op_Equality_m50B3548E4AC232558190B0052877B290AA1D436A((String_t*)L_49, (String_t*)_stringLiteral1D87A56AE67B2CD49CAE6E942C2FB7AD98925C00, /*hidden argument*/NULL);
		if (L_50)
		{
			goto IL_034c;
		}
	}
	{
		goto IL_0388;
	}

IL_021f:
	{
		String_t* L_51 = V_1;
		bool L_52;
		L_52 = String_op_Equality_m50B3548E4AC232558190B0052877B290AA1D436A((String_t*)L_51, (String_t*)_stringLiteralA967787586EC9E5A17A9C55E2002AB73A5E21A0A, /*hidden argument*/NULL);
		if (L_52)
		{
			goto IL_0360;
		}
	}
	{
		goto IL_0388;
	}

IL_0234:
	{
		String_t* L_53 = V_1;
		bool L_54;
		L_54 = String_op_Equality_m50B3548E4AC232558190B0052877B290AA1D436A((String_t*)L_53, (String_t*)_stringLiteral47C47DD09640803AD8016748EAE1F04DD1D41119, /*hidden argument*/NULL);
		if (L_54)
		{
			goto IL_0374;
		}
	}
	{
		goto IL_0388;
	}

IL_0249:
	{
		// instance.enabled = reader.Read<System.Boolean>(ES3Type_bool.Instance);
		ES3Reader_t2780AF8AA61DA2A817115CEF8612AC0E494D03C9 * L_55 = ___reader0;
		IL2CPP_RUNTIME_CLASS_INIT(ES3Type_bool_t8F309F7B9CC735FF1DEE68081B6E3CAB367745F4_il2cpp_TypeInfo_var);
		ES3Type_t8FBECB7AE75168648B9524E0C2A38DAD4555421D * L_56 = ((ES3Type_bool_t8F309F7B9CC735FF1DEE68081B6E3CAB367745F4_StaticFields*)il2cpp_codegen_static_fields_for(ES3Type_bool_t8F309F7B9CC735FF1DEE68081B6E3CAB367745F4_il2cpp_TypeInfo_var))->get_Instance_12();
		NullCheck((ES3Reader_t2780AF8AA61DA2A817115CEF8612AC0E494D03C9 *)L_55);
		bool L_57;
		L_57 = GenericVirtFuncInvoker1< bool, ES3Type_t8FBECB7AE75168648B9524E0C2A38DAD4555421D * >::Invoke(ES3Reader_Read_TisBoolean_t07D1E3F34E4813023D64F584DFF7B34C9D922F37_mC6D1B158268FF9B97822FF9F5B37FB1723FEDA22_RuntimeMethod_var, (ES3Reader_t2780AF8AA61DA2A817115CEF8612AC0E494D03C9 *)L_55, (ES3Type_t8FBECB7AE75168648B9524E0C2A38DAD4555421D *)L_56);
		TrailModule_set_enabled_mFC8451DDDF40CCBB3E32A4B30A001115F6346894((TrailModule_t95D15372971E64A1977B7587ABAA87B1A31EF5C8 *)(TrailModule_t95D15372971E64A1977B7587ABAA87B1A31EF5C8 *)(&V_0), (bool)L_57, /*hidden argument*/NULL);
		// break;
		goto IL_038e;
	}

IL_0260:
	{
		// instance.ratio = reader.Read<System.Single>(ES3Type_float.Instance);
		ES3Reader_t2780AF8AA61DA2A817115CEF8612AC0E494D03C9 * L_58 = ___reader0;
		IL2CPP_RUNTIME_CLASS_INIT(ES3Type_float_tF86B773C86731BD9AD79448B860BBB178FE77644_il2cpp_TypeInfo_var);
		ES3Type_t8FBECB7AE75168648B9524E0C2A38DAD4555421D * L_59 = ((ES3Type_float_tF86B773C86731BD9AD79448B860BBB178FE77644_StaticFields*)il2cpp_codegen_static_fields_for(ES3Type_float_tF86B773C86731BD9AD79448B860BBB178FE77644_il2cpp_TypeInfo_var))->get_Instance_12();
		NullCheck((ES3Reader_t2780AF8AA61DA2A817115CEF8612AC0E494D03C9 *)L_58);
		float L_60;
		L_60 = GenericVirtFuncInvoker1< float, ES3Type_t8FBECB7AE75168648B9524E0C2A38DAD4555421D * >::Invoke(ES3Reader_Read_TisSingle_tE07797BA3C98D4CA9B5A19413C19A76688AB899E_m4A0416374498BDA042B8EB21E49B72326D6CE5F4_RuntimeMethod_var, (ES3Reader_t2780AF8AA61DA2A817115CEF8612AC0E494D03C9 *)L_58, (ES3Type_t8FBECB7AE75168648B9524E0C2A38DAD4555421D *)L_59);
		TrailModule_set_ratio_m34E63B34E7B0E8D037AD45532B2E2D5BD0750189((TrailModule_t95D15372971E64A1977B7587ABAA87B1A31EF5C8 *)(TrailModule_t95D15372971E64A1977B7587ABAA87B1A31EF5C8 *)(&V_0), (float)L_60, /*hidden argument*/NULL);
		// break;
		goto IL_038e;
	}

IL_0277:
	{
		// instance.lifetime = reader.Read<UnityEngine.ParticleSystem.MinMaxCurve>(ES3Type_MinMaxCurve.Instance);
		ES3Reader_t2780AF8AA61DA2A817115CEF8612AC0E494D03C9 * L_61 = ___reader0;
		IL2CPP_RUNTIME_CLASS_INIT(ES3Type_MinMaxCurve_tC5342BF0F8735B85CB5E16FDD4C6FACC8AFAD3B7_il2cpp_TypeInfo_var);
		ES3Type_t8FBECB7AE75168648B9524E0C2A38DAD4555421D * L_62 = ((ES3Type_MinMaxCurve_tC5342BF0F8735B85CB5E16FDD4C6FACC8AFAD3B7_StaticFields*)il2cpp_codegen_static_fields_for(ES3Type_MinMaxCurve_tC5342BF0F8735B85CB5E16FDD4C6FACC8AFAD3B7_il2cpp_TypeInfo_var))->get_Instance_12();
		NullCheck((ES3Reader_t2780AF8AA61DA2A817115CEF8612AC0E494D03C9 *)L_61);
		MinMaxCurve_tF036239442AB2D438B1EDABEBC785426871084CD  L_63;
		L_63 = GenericVirtFuncInvoker1< MinMaxCurve_tF036239442AB2D438B1EDABEBC785426871084CD , ES3Type_t8FBECB7AE75168648B9524E0C2A38DAD4555421D * >::Invoke(ES3Reader_Read_TisMinMaxCurve_tF036239442AB2D438B1EDABEBC785426871084CD_mD285150CBFB52440643BBECB5ADF4EE8DE940535_RuntimeMethod_var, (ES3Reader_t2780AF8AA61DA2A817115CEF8612AC0E494D03C9 *)L_61, (ES3Type_t8FBECB7AE75168648B9524E0C2A38DAD4555421D *)L_62);
		TrailModule_set_lifetime_m57C898C42B9F18F5A0E88AAA7B10276CC158C39D((TrailModule_t95D15372971E64A1977B7587ABAA87B1A31EF5C8 *)(TrailModule_t95D15372971E64A1977B7587ABAA87B1A31EF5C8 *)(&V_0), (MinMaxCurve_tF036239442AB2D438B1EDABEBC785426871084CD )L_63, /*hidden argument*/NULL);
		// break;
		goto IL_038e;
	}

IL_028e:
	{
		// instance.lifetimeMultiplier = reader.Read<System.Single>(ES3Type_float.Instance);
		ES3Reader_t2780AF8AA61DA2A817115CEF8612AC0E494D03C9 * L_64 = ___reader0;
		IL2CPP_RUNTIME_CLASS_INIT(ES3Type_float_tF86B773C86731BD9AD79448B860BBB178FE77644_il2cpp_TypeInfo_var);
		ES3Type_t8FBECB7AE75168648B9524E0C2A38DAD4555421D * L_65 = ((ES3Type_float_tF86B773C86731BD9AD79448B860BBB178FE77644_StaticFields*)il2cpp_codegen_static_fields_for(ES3Type_float_tF86B773C86731BD9AD79448B860BBB178FE77644_il2cpp_TypeInfo_var))->get_Instance_12();
		NullCheck((ES3Reader_t2780AF8AA61DA2A817115CEF8612AC0E494D03C9 *)L_64);
		float L_66;
		L_66 = GenericVirtFuncInvoker1< float, ES3Type_t8FBECB7AE75168648B9524E0C2A38DAD4555421D * >::Invoke(ES3Reader_Read_TisSingle_tE07797BA3C98D4CA9B5A19413C19A76688AB899E_m4A0416374498BDA042B8EB21E49B72326D6CE5F4_RuntimeMethod_var, (ES3Reader_t2780AF8AA61DA2A817115CEF8612AC0E494D03C9 *)L_64, (ES3Type_t8FBECB7AE75168648B9524E0C2A38DAD4555421D *)L_65);
		TrailModule_set_lifetimeMultiplier_m23F95D65EE8C82152AE1CF2E41531EC2789A866B((TrailModule_t95D15372971E64A1977B7587ABAA87B1A31EF5C8 *)(TrailModule_t95D15372971E64A1977B7587ABAA87B1A31EF5C8 *)(&V_0), (float)L_66, /*hidden argument*/NULL);
		// break;
		goto IL_038e;
	}

IL_02a5:
	{
		// instance.minVertexDistance = reader.Read<System.Single>(ES3Type_float.Instance);
		ES3Reader_t2780AF8AA61DA2A817115CEF8612AC0E494D03C9 * L_67 = ___reader0;
		IL2CPP_RUNTIME_CLASS_INIT(ES3Type_float_tF86B773C86731BD9AD79448B860BBB178FE77644_il2cpp_TypeInfo_var);
		ES3Type_t8FBECB7AE75168648B9524E0C2A38DAD4555421D * L_68 = ((ES3Type_float_tF86B773C86731BD9AD79448B860BBB178FE77644_StaticFields*)il2cpp_codegen_static_fields_for(ES3Type_float_tF86B773C86731BD9AD79448B860BBB178FE77644_il2cpp_TypeInfo_var))->get_Instance_12();
		NullCheck((ES3Reader_t2780AF8AA61DA2A817115CEF8612AC0E494D03C9 *)L_67);
		float L_69;
		L_69 = GenericVirtFuncInvoker1< float, ES3Type_t8FBECB7AE75168648B9524E0C2A38DAD4555421D * >::Invoke(ES3Reader_Read_TisSingle_tE07797BA3C98D4CA9B5A19413C19A76688AB899E_m4A0416374498BDA042B8EB21E49B72326D6CE5F4_RuntimeMethod_var, (ES3Reader_t2780AF8AA61DA2A817115CEF8612AC0E494D03C9 *)L_67, (ES3Type_t8FBECB7AE75168648B9524E0C2A38DAD4555421D *)L_68);
		TrailModule_set_minVertexDistance_mF7C29F88FBF540CE4987F4CF9B141C624808FBC5((TrailModule_t95D15372971E64A1977B7587ABAA87B1A31EF5C8 *)(TrailModule_t95D15372971E64A1977B7587ABAA87B1A31EF5C8 *)(&V_0), (float)L_69, /*hidden argument*/NULL);
		// break;
		goto IL_038e;
	}

IL_02bc:
	{
		// instance.textureMode = reader.Read<UnityEngine.ParticleSystemTrailTextureMode>();
		ES3Reader_t2780AF8AA61DA2A817115CEF8612AC0E494D03C9 * L_70 = ___reader0;
		NullCheck((ES3Reader_t2780AF8AA61DA2A817115CEF8612AC0E494D03C9 *)L_70);
		int32_t L_71;
		L_71 = GenericVirtFuncInvoker0< int32_t >::Invoke(ES3Reader_Read_TisParticleSystemTrailTextureMode_tF3259187CA4D0A61EDB3A40E63CBF6C42641CE9F_m055DB1212E8BC34F385DF7D302F16241554E9730_RuntimeMethod_var, (ES3Reader_t2780AF8AA61DA2A817115CEF8612AC0E494D03C9 *)L_70);
		TrailModule_set_textureMode_mC1F8AE0D2965FC47BDBFF4F53E0673D5FB58CF28((TrailModule_t95D15372971E64A1977B7587ABAA87B1A31EF5C8 *)(TrailModule_t95D15372971E64A1977B7587ABAA87B1A31EF5C8 *)(&V_0), (int32_t)L_71, /*hidden argument*/NULL);
		// break;
		goto IL_038e;
	}

IL_02ce:
	{
		// instance.worldSpace = reader.Read<System.Boolean>(ES3Type_bool.Instance);
		ES3Reader_t2780AF8AA61DA2A817115CEF8612AC0E494D03C9 * L_72 = ___reader0;
		IL2CPP_RUNTIME_CLASS_INIT(ES3Type_bool_t8F309F7B9CC735FF1DEE68081B6E3CAB367745F4_il2cpp_TypeInfo_var);
		ES3Type_t8FBECB7AE75168648B9524E0C2A38DAD4555421D * L_73 = ((ES3Type_bool_t8F309F7B9CC735FF1DEE68081B6E3CAB367745F4_StaticFields*)il2cpp_codegen_static_fields_for(ES3Type_bool_t8F309F7B9CC735FF1DEE68081B6E3CAB367745F4_il2cpp_TypeInfo_var))->get_Instance_12();
		NullCheck((ES3Reader_t2780AF8AA61DA2A817115CEF8612AC0E494D03C9 *)L_72);
		bool L_74;
		L_74 = GenericVirtFuncInvoker1< bool, ES3Type_t8FBECB7AE75168648B9524E0C2A38DAD4555421D * >::Invoke(ES3Reader_Read_TisBoolean_t07D1E3F34E4813023D64F584DFF7B34C9D922F37_mC6D1B158268FF9B97822FF9F5B37FB1723FEDA22_RuntimeMethod_var, (ES3Reader_t2780AF8AA61DA2A817115CEF8612AC0E494D03C9 *)L_72, (ES3Type_t8FBECB7AE75168648B9524E0C2A38DAD4555421D *)L_73);
		TrailModule_set_worldSpace_m42A63AF4A96F24A621A29A0F35240195F0E56B1A((TrailModule_t95D15372971E64A1977B7587ABAA87B1A31EF5C8 *)(TrailModule_t95D15372971E64A1977B7587ABAA87B1A31EF5C8 *)(&V_0), (bool)L_74, /*hidden argument*/NULL);
		// break;
		goto IL_038e;
	}

IL_02e5:
	{
		// instance.dieWithParticles = reader.Read<System.Boolean>(ES3Type_bool.Instance);
		ES3Reader_t2780AF8AA61DA2A817115CEF8612AC0E494D03C9 * L_75 = ___reader0;
		IL2CPP_RUNTIME_CLASS_INIT(ES3Type_bool_t8F309F7B9CC735FF1DEE68081B6E3CAB367745F4_il2cpp_TypeInfo_var);
		ES3Type_t8FBECB7AE75168648B9524E0C2A38DAD4555421D * L_76 = ((ES3Type_bool_t8F309F7B9CC735FF1DEE68081B6E3CAB367745F4_StaticFields*)il2cpp_codegen_static_fields_for(ES3Type_bool_t8F309F7B9CC735FF1DEE68081B6E3CAB367745F4_il2cpp_TypeInfo_var))->get_Instance_12();
		NullCheck((ES3Reader_t2780AF8AA61DA2A817115CEF8612AC0E494D03C9 *)L_75);
		bool L_77;
		L_77 = GenericVirtFuncInvoker1< bool, ES3Type_t8FBECB7AE75168648B9524E0C2A38DAD4555421D * >::Invoke(ES3Reader_Read_TisBoolean_t07D1E3F34E4813023D64F584DFF7B34C9D922F37_mC6D1B158268FF9B97822FF9F5B37FB1723FEDA22_RuntimeMethod_var, (ES3Reader_t2780AF8AA61DA2A817115CEF8612AC0E494D03C9 *)L_75, (ES3Type_t8FBECB7AE75168648B9524E0C2A38DAD4555421D *)L_76);
		TrailModule_set_dieWithParticles_mB7C4E8DC2F908FDF6D57A77B54B821E360D8DA99((TrailModule_t95D15372971E64A1977B7587ABAA87B1A31EF5C8 *)(TrailModule_t95D15372971E64A1977B7587ABAA87B1A31EF5C8 *)(&V_0), (bool)L_77, /*hidden argument*/NULL);
		// break;
		goto IL_038e;
	}

IL_02fc:
	{
		// instance.sizeAffectsWidth = reader.Read<System.Boolean>(ES3Type_bool.Instance);
		ES3Reader_t2780AF8AA61DA2A817115CEF8612AC0E494D03C9 * L_78 = ___reader0;
		IL2CPP_RUNTIME_CLASS_INIT(ES3Type_bool_t8F309F7B9CC735FF1DEE68081B6E3CAB367745F4_il2cpp_TypeInfo_var);
		ES3Type_t8FBECB7AE75168648B9524E0C2A38DAD4555421D * L_79 = ((ES3Type_bool_t8F309F7B9CC735FF1DEE68081B6E3CAB367745F4_StaticFields*)il2cpp_codegen_static_fields_for(ES3Type_bool_t8F309F7B9CC735FF1DEE68081B6E3CAB367745F4_il2cpp_TypeInfo_var))->get_Instance_12();
		NullCheck((ES3Reader_t2780AF8AA61DA2A817115CEF8612AC0E494D03C9 *)L_78);
		bool L_80;
		L_80 = GenericVirtFuncInvoker1< bool, ES3Type_t8FBECB7AE75168648B9524E0C2A38DAD4555421D * >::Invoke(ES3Reader_Read_TisBoolean_t07D1E3F34E4813023D64F584DFF7B34C9D922F37_mC6D1B158268FF9B97822FF9F5B37FB1723FEDA22_RuntimeMethod_var, (ES3Reader_t2780AF8AA61DA2A817115CEF8612AC0E494D03C9 *)L_78, (ES3Type_t8FBECB7AE75168648B9524E0C2A38DAD4555421D *)L_79);
		TrailModule_set_sizeAffectsWidth_m3517856E39080DA69B447499C8846D2491B0ABF0((TrailModule_t95D15372971E64A1977B7587ABAA87B1A31EF5C8 *)(TrailModule_t95D15372971E64A1977B7587ABAA87B1A31EF5C8 *)(&V_0), (bool)L_80, /*hidden argument*/NULL);
		// break;
		goto IL_038e;
	}

IL_0310:
	{
		// instance.sizeAffectsLifetime = reader.Read<System.Boolean>(ES3Type_bool.Instance);
		ES3Reader_t2780AF8AA61DA2A817115CEF8612AC0E494D03C9 * L_81 = ___reader0;
		IL2CPP_RUNTIME_CLASS_INIT(ES3Type_bool_t8F309F7B9CC735FF1DEE68081B6E3CAB367745F4_il2cpp_TypeInfo_var);
		ES3Type_t8FBECB7AE75168648B9524E0C2A38DAD4555421D * L_82 = ((ES3Type_bool_t8F309F7B9CC735FF1DEE68081B6E3CAB367745F4_StaticFields*)il2cpp_codegen_static_fields_for(ES3Type_bool_t8F309F7B9CC735FF1DEE68081B6E3CAB367745F4_il2cpp_TypeInfo_var))->get_Instance_12();
		NullCheck((ES3Reader_t2780AF8AA61DA2A817115CEF8612AC0E494D03C9 *)L_81);
		bool L_83;
		L_83 = GenericVirtFuncInvoker1< bool, ES3Type_t8FBECB7AE75168648B9524E0C2A38DAD4555421D * >::Invoke(ES3Reader_Read_TisBoolean_t07D1E3F34E4813023D64F584DFF7B34C9D922F37_mC6D1B158268FF9B97822FF9F5B37FB1723FEDA22_RuntimeMethod_var, (ES3Reader_t2780AF8AA61DA2A817115CEF8612AC0E494D03C9 *)L_81, (ES3Type_t8FBECB7AE75168648B9524E0C2A38DAD4555421D *)L_82);
		TrailModule_set_sizeAffectsLifetime_m98BF4A6594193D824B52D88371CF963ACBA388FD((TrailModule_t95D15372971E64A1977B7587ABAA87B1A31EF5C8 *)(TrailModule_t95D15372971E64A1977B7587ABAA87B1A31EF5C8 *)(&V_0), (bool)L_83, /*hidden argument*/NULL);
		// break;
		goto IL_038e;
	}

IL_0324:
	{
		// instance.inheritParticleColor = reader.Read<System.Boolean>(ES3Type_bool.Instance);
		ES3Reader_t2780AF8AA61DA2A817115CEF8612AC0E494D03C9 * L_84 = ___reader0;
		IL2CPP_RUNTIME_CLASS_INIT(ES3Type_bool_t8F309F7B9CC735FF1DEE68081B6E3CAB367745F4_il2cpp_TypeInfo_var);
		ES3Type_t8FBECB7AE75168648B9524E0C2A38DAD4555421D * L_85 = ((ES3Type_bool_t8F309F7B9CC735FF1DEE68081B6E3CAB367745F4_StaticFields*)il2cpp_codegen_static_fields_for(ES3Type_bool_t8F309F7B9CC735FF1DEE68081B6E3CAB367745F4_il2cpp_TypeInfo_var))->get_Instance_12();
		NullCheck((ES3Reader_t2780AF8AA61DA2A817115CEF8612AC0E494D03C9 *)L_84);
		bool L_86;
		L_86 = GenericVirtFuncInvoker1< bool, ES3Type_t8FBECB7AE75168648B9524E0C2A38DAD4555421D * >::Invoke(ES3Reader_Read_TisBoolean_t07D1E3F34E4813023D64F584DFF7B34C9D922F37_mC6D1B158268FF9B97822FF9F5B37FB1723FEDA22_RuntimeMethod_var, (ES3Reader_t2780AF8AA61DA2A817115CEF8612AC0E494D03C9 *)L_84, (ES3Type_t8FBECB7AE75168648B9524E0C2A38DAD4555421D *)L_85);
		TrailModule_set_inheritParticleColor_mCD83E87B5E00F2BFFBE08AD2D1D68606283A4FEE((TrailModule_t95D15372971E64A1977B7587ABAA87B1A31EF5C8 *)(TrailModule_t95D15372971E64A1977B7587ABAA87B1A31EF5C8 *)(&V_0), (bool)L_86, /*hidden argument*/NULL);
		// break;
		goto IL_038e;
	}

IL_0338:
	{
		// instance.colorOverLifetime = reader.Read<UnityEngine.ParticleSystem.MinMaxGradient>(ES3Type_MinMaxGradient.Instance);
		ES3Reader_t2780AF8AA61DA2A817115CEF8612AC0E494D03C9 * L_87 = ___reader0;
		IL2CPP_RUNTIME_CLASS_INIT(ES3Type_MinMaxGradient_t5DD353D60E95642AB39D1C97C6FD6DD1B067D3CF_il2cpp_TypeInfo_var);
		ES3Type_t8FBECB7AE75168648B9524E0C2A38DAD4555421D * L_88 = ((ES3Type_MinMaxGradient_t5DD353D60E95642AB39D1C97C6FD6DD1B067D3CF_StaticFields*)il2cpp_codegen_static_fields_for(ES3Type_MinMaxGradient_t5DD353D60E95642AB39D1C97C6FD6DD1B067D3CF_il2cpp_TypeInfo_var))->get_Instance_12();
		NullCheck((ES3Reader_t2780AF8AA61DA2A817115CEF8612AC0E494D03C9 *)L_87);
		MinMaxGradient_tF4530B26F29D9635D670A33B9EE581EAC48C12B7  L_89;
		L_89 = GenericVirtFuncInvoker1< MinMaxGradient_tF4530B26F29D9635D670A33B9EE581EAC48C12B7 , ES3Type_t8FBECB7AE75168648B9524E0C2A38DAD4555421D * >::Invoke(ES3Reader_Read_TisMinMaxGradient_tF4530B26F29D9635D670A33B9EE581EAC48C12B7_m6A3DD8CBBAC5D32B838B6C4399009AB8AA512ACC_RuntimeMethod_var, (ES3Reader_t2780AF8AA61DA2A817115CEF8612AC0E494D03C9 *)L_87, (ES3Type_t8FBECB7AE75168648B9524E0C2A38DAD4555421D *)L_88);
		TrailModule_set_colorOverLifetime_mCD56BD4B75D3A3947069BA1B93FEC78AAE08DF27((TrailModule_t95D15372971E64A1977B7587ABAA87B1A31EF5C8 *)(TrailModule_t95D15372971E64A1977B7587ABAA87B1A31EF5C8 *)(&V_0), (MinMaxGradient_tF4530B26F29D9635D670A33B9EE581EAC48C12B7 )L_89, /*hidden argument*/NULL);
		// break;
		goto IL_038e;
	}

IL_034c:
	{
		// instance.widthOverTrail = reader.Read<UnityEngine.ParticleSystem.MinMaxCurve>(ES3Type_MinMaxCurve.Instance);
		ES3Reader_t2780AF8AA61DA2A817115CEF8612AC0E494D03C9 * L_90 = ___reader0;
		IL2CPP_RUNTIME_CLASS_INIT(ES3Type_MinMaxCurve_tC5342BF0F8735B85CB5E16FDD4C6FACC8AFAD3B7_il2cpp_TypeInfo_var);
		ES3Type_t8FBECB7AE75168648B9524E0C2A38DAD4555421D * L_91 = ((ES3Type_MinMaxCurve_tC5342BF0F8735B85CB5E16FDD4C6FACC8AFAD3B7_StaticFields*)il2cpp_codegen_static_fields_for(ES3Type_MinMaxCurve_tC5342BF0F8735B85CB5E16FDD4C6FACC8AFAD3B7_il2cpp_TypeInfo_var))->get_Instance_12();
		NullCheck((ES3Reader_t2780AF8AA61DA2A817115CEF8612AC0E494D03C9 *)L_90);
		MinMaxCurve_tF036239442AB2D438B1EDABEBC785426871084CD  L_92;
		L_92 = GenericVirtFuncInvoker1< MinMaxCurve_tF036239442AB2D438B1EDABEBC785426871084CD , ES3Type_t8FBECB7AE75168648B9524E0C2A38DAD4555421D * >::Invoke(ES3Reader_Read_TisMinMaxCurve_tF036239442AB2D438B1EDABEBC785426871084CD_mD285150CBFB52440643BBECB5ADF4EE8DE940535_RuntimeMethod_var, (ES3Reader_t2780AF8AA61DA2A817115CEF8612AC0E494D03C9 *)L_90, (ES3Type_t8FBECB7AE75168648B9524E0C2A38DAD4555421D *)L_91);
		TrailModule_set_widthOverTrail_m6C0A896EBFDED7CE46344B3A0B04212934F30DE1((TrailModule_t95D15372971E64A1977B7587ABAA87B1A31EF5C8 *)(TrailModule_t95D15372971E64A1977B7587ABAA87B1A31EF5C8 *)(&V_0), (MinMaxCurve_tF036239442AB2D438B1EDABEBC785426871084CD )L_92, /*hidden argument*/NULL);
		// break;
		goto IL_038e;
	}

IL_0360:
	{
		// instance.widthOverTrailMultiplier = reader.Read<System.Single>(ES3Type_float.Instance);
		ES3Reader_t2780AF8AA61DA2A817115CEF8612AC0E494D03C9 * L_93 = ___reader0;
		IL2CPP_RUNTIME_CLASS_INIT(ES3Type_float_tF86B773C86731BD9AD79448B860BBB178FE77644_il2cpp_TypeInfo_var);
		ES3Type_t8FBECB7AE75168648B9524E0C2A38DAD4555421D * L_94 = ((ES3Type_float_tF86B773C86731BD9AD79448B860BBB178FE77644_StaticFields*)il2cpp_codegen_static_fields_for(ES3Type_float_tF86B773C86731BD9AD79448B860BBB178FE77644_il2cpp_TypeInfo_var))->get_Instance_12();
		NullCheck((ES3Reader_t2780AF8AA61DA2A817115CEF8612AC0E494D03C9 *)L_93);
		float L_95;
		L_95 = GenericVirtFuncInvoker1< float, ES3Type_t8FBECB7AE75168648B9524E0C2A38DAD4555421D * >::Invoke(ES3Reader_Read_TisSingle_tE07797BA3C98D4CA9B5A19413C19A76688AB899E_m4A0416374498BDA042B8EB21E49B72326D6CE5F4_RuntimeMethod_var, (ES3Reader_t2780AF8AA61DA2A817115CEF8612AC0E494D03C9 *)L_93, (ES3Type_t8FBECB7AE75168648B9524E0C2A38DAD4555421D *)L_94);
		TrailModule_set_widthOverTrailMultiplier_m6A7EA2856CF30B710CCB528EA3EBFD1799C19BD4((TrailModule_t95D15372971E64A1977B7587ABAA87B1A31EF5C8 *)(TrailModule_t95D15372971E64A1977B7587ABAA87B1A31EF5C8 *)(&V_0), (float)L_95, /*hidden argument*/NULL);
		// break;
		goto IL_038e;
	}

IL_0374:
	{
		// instance.colorOverTrail = reader.Read<UnityEngine.ParticleSystem.MinMaxGradient>(ES3Type_MinMaxGradient.Instance);
		ES3Reader_t2780AF8AA61DA2A817115CEF8612AC0E494D03C9 * L_96 = ___reader0;
		IL2CPP_RUNTIME_CLASS_INIT(ES3Type_MinMaxGradient_t5DD353D60E95642AB39D1C97C6FD6DD1B067D3CF_il2cpp_TypeInfo_var);
		ES3Type_t8FBECB7AE75168648B9524E0C2A38DAD4555421D * L_97 = ((ES3Type_MinMaxGradient_t5DD353D60E95642AB39D1C97C6FD6DD1B067D3CF_StaticFields*)il2cpp_codegen_static_fields_for(ES3Type_MinMaxGradient_t5DD353D60E95642AB39D1C97C6FD6DD1B067D3CF_il2cpp_TypeInfo_var))->get_Instance_12();
		NullCheck((ES3Reader_t2780AF8AA61DA2A817115CEF8612AC0E494D03C9 *)L_96);
		MinMaxGradient_tF4530B26F29D9635D670A33B9EE581EAC48C12B7  L_98;
		L_98 = GenericVirtFuncInvoker1< MinMaxGradient_tF4530B26F29D9635D670A33B9EE581EAC48C12B7 , ES3Type_t8FBECB7AE75168648B9524E0C2A38DAD4555421D * >::Invoke(ES3Reader_Read_TisMinMaxGradient_tF4530B26F29D9635D670A33B9EE581EAC48C12B7_m6A3DD8CBBAC5D32B838B6C4399009AB8AA512ACC_RuntimeMethod_var, (ES3Reader_t2780AF8AA61DA2A817115CEF8612AC0E494D03C9 *)L_96, (ES3Type_t8FBECB7AE75168648B9524E0C2A38DAD4555421D *)L_97);
		TrailModule_set_colorOverTrail_m8440C6574C8310292B93D70EA4FE3EE8C40DF8DB((TrailModule_t95D15372971E64A1977B7587ABAA87B1A31EF5C8 *)(TrailModule_t95D15372971E64A1977B7587ABAA87B1A31EF5C8 *)(&V_0), (MinMaxGradient_tF4530B26F29D9635D670A33B9EE581EAC48C12B7 )L_98, /*hidden argument*/NULL);
		// break;
		goto IL_038e;
	}

IL_0388:
	{
		// reader.Skip();
		ES3Reader_t2780AF8AA61DA2A817115CEF8612AC0E494D03C9 * L_99 = ___reader0;
		NullCheck((ES3Reader_t2780AF8AA61DA2A817115CEF8612AC0E494D03C9 *)L_99);
		VirtActionInvoker0::Invoke(41 /* System.Void ES3Reader::Skip() */, (ES3Reader_t2780AF8AA61DA2A817115CEF8612AC0E494D03C9 *)L_99);
	}

IL_038e:
	{
		// while((propertyName = reader.ReadPropertyName()) != null)
		ES3Reader_t2780AF8AA61DA2A817115CEF8612AC0E494D03C9 * L_100 = ___reader0;
		NullCheck((ES3Reader_t2780AF8AA61DA2A817115CEF8612AC0E494D03C9 *)L_100);
		String_t* L_101;
		L_101 = VirtFuncInvoker0< String_t* >::Invoke(21 /* System.String ES3Reader::ReadPropertyName() */, (ES3Reader_t2780AF8AA61DA2A817115CEF8612AC0E494D03C9 *)L_100);
		String_t* L_102 = (String_t*)L_101;
		V_1 = (String_t*)L_102;
		if (L_102)
		{
			goto IL_000c;
		}
	}
	{
		// }
		return;
	}
}
// System.Void ES3Types.ES3Type_TrailModule::ReadInto<UnityEngine.ParticleSystem/LimitVelocityOverLifetimeModule>(ES3Reader,System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ES3Type_TrailModule_ReadInto_TisLimitVelocityOverLifetimeModule_tA8F1AC2538B089795E58CC7AEC7E8D9E60B5669C_m2ACA1DF86005060CC04C664BE3F20AB72F9A5894_gshared (ES3Type_TrailModule_tC773F73EC0443516DD128FF2B5AE010809742462 * __this, ES3Reader_t2780AF8AA61DA2A817115CEF8612AC0E494D03C9 * ___reader0, RuntimeObject * ___obj1, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ES3Reader_Read_TisBoolean_t07D1E3F34E4813023D64F584DFF7B34C9D922F37_mC6D1B158268FF9B97822FF9F5B37FB1723FEDA22_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ES3Reader_Read_TisMinMaxCurve_tF036239442AB2D438B1EDABEBC785426871084CD_mD285150CBFB52440643BBECB5ADF4EE8DE940535_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ES3Reader_Read_TisMinMaxGradient_tF4530B26F29D9635D670A33B9EE581EAC48C12B7_m6A3DD8CBBAC5D32B838B6C4399009AB8AA512ACC_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ES3Reader_Read_TisParticleSystemTrailTextureMode_tF3259187CA4D0A61EDB3A40E63CBF6C42641CE9F_m055DB1212E8BC34F385DF7D302F16241554E9730_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ES3Reader_Read_TisSingle_tE07797BA3C98D4CA9B5A19413C19A76688AB899E_m4A0416374498BDA042B8EB21E49B72326D6CE5F4_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ES3Type_MinMaxCurve_tC5342BF0F8735B85CB5E16FDD4C6FACC8AFAD3B7_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ES3Type_MinMaxGradient_t5DD353D60E95642AB39D1C97C6FD6DD1B067D3CF_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ES3Type_bool_t8F309F7B9CC735FF1DEE68081B6E3CAB367745F4_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ES3Type_float_tF86B773C86731BD9AD79448B860BBB178FE77644_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&TrailModule_t95D15372971E64A1977B7587ABAA87B1A31EF5C8_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral1D87A56AE67B2CD49CAE6E942C2FB7AD98925C00);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral354281948B6269615E32D856CF85B6F456724DAA);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral4221314F268D184F46688D45C85446821F1F1BC3);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral47C47DD09640803AD8016748EAE1F04DD1D41119);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral5C86338F177203D001C41D9C348A83D1338CC7D0);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral60126327537B7B8E6EE33C43FE0C5CA8BCC3A06A);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral87F70660D62DE5FC257FBADE9DA4EC9188597DE5);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralA967787586EC9E5A17A9C55E2002AB73A5E21A0A);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralADAEB0839588196B349BDB6CF33AFA3E0736360B);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralBE2893848F9FC647C2288DA6581A1522E9695182);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralBF540D6548854CC21630064FBA5390C9409C86F0);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralC580B374AA991574F91DFC86C068E7FAD661A3A4);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralE049DB547285CFCE1CB9A95934B6B6DCE2D219EC);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralF9D225733E1D10F9344C755C4A9C0870CD1DE97B);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralFE5F89F63E2381500F62A7CBD6954563BE44562F);
		s_Il2CppMethodInitialized = true;
	}
	TrailModule_t95D15372971E64A1977B7587ABAA87B1A31EF5C8  V_0;
	memset((&V_0), 0, sizeof(V_0));
	String_t* V_1 = NULL;
	uint32_t V_2 = 0;
	{
		// var instance = (UnityEngine.ParticleSystem.TrailModule)obj;
		RuntimeObject * L_0 = ___obj1;
		V_0 = (TrailModule_t95D15372971E64A1977B7587ABAA87B1A31EF5C8 )((*(TrailModule_t95D15372971E64A1977B7587ABAA87B1A31EF5C8 *)((TrailModule_t95D15372971E64A1977B7587ABAA87B1A31EF5C8 *)UnBox(L_0, TrailModule_t95D15372971E64A1977B7587ABAA87B1A31EF5C8_il2cpp_TypeInfo_var))));
		goto IL_038e;
	}

IL_000c:
	{
		String_t* L_1 = V_1;
		if (!L_1)
		{
			goto IL_0388;
		}
	}
	{
		String_t* L_2 = V_1;
		uint32_t L_3;
		L_3 = U3CPrivateImplementationDetailsU3E_ComputeStringHash_m3ADC1F612F9EE3DD518E6F0023A0DE0EE2B120A7((String_t*)L_2, /*hidden argument*/NULL);
		V_2 = (uint32_t)L_3;
		uint32_t L_4 = V_2;
		if ((!(((uint32_t)L_4) <= ((uint32_t)((int32_t)1376955374)))))
		{
			goto IL_008d;
		}
	}
	{
		uint32_t L_5 = V_2;
		if ((!(((uint32_t)L_5) <= ((uint32_t)((int32_t)494095910)))))
		{
			goto IL_004f;
		}
	}
	{
		uint32_t L_6 = V_2;
		if ((((int32_t)L_6) == ((int32_t)((int32_t)49525662))))
		{
			goto IL_010e;
		}
	}
	{
		uint32_t L_7 = V_2;
		if ((((int32_t)L_7) == ((int32_t)((int32_t)341298456))))
		{
			goto IL_021f;
		}
	}
	{
		uint32_t L_8 = V_2;
		if ((((int32_t)L_8) == ((int32_t)((int32_t)494095910))))
		{
			goto IL_0234;
		}
	}
	{
		goto IL_0388;
	}

IL_004f:
	{
		uint32_t L_9 = V_2;
		if ((!(((uint32_t)L_9) <= ((uint32_t)((int32_t)973733911)))))
		{
			goto IL_0072;
		}
	}
	{
		uint32_t L_10 = V_2;
		if ((((int32_t)L_10) == ((int32_t)((int32_t)559929418))))
		{
			goto IL_01b6;
		}
	}
	{
		uint32_t L_11 = V_2;
		if ((((int32_t)L_11) == ((int32_t)((int32_t)973733911))))
		{
			goto IL_0177;
		}
	}
	{
		goto IL_0388;
	}

IL_0072:
	{
		uint32_t L_12 = V_2;
		if ((((int32_t)L_12) == ((int32_t)((int32_t)1024708593))))
		{
			goto IL_014d;
		}
	}
	{
		uint32_t L_13 = V_2;
		if ((((int32_t)L_13) == ((int32_t)((int32_t)1376955374))))
		{
			goto IL_0138;
		}
	}
	{
		goto IL_0388;
	}

IL_008d:
	{
		uint32_t L_14 = V_2;
		if ((!(((uint32_t)L_14) <= ((uint32_t)((int32_t)-2100707162)))))
		{
			goto IL_00d3;
		}
	}
	{
		uint32_t L_15 = V_2;
		if ((!(((uint32_t)L_15) <= ((uint32_t)((int32_t)1975189197)))))
		{
			goto IL_00b8;
		}
	}
	{
		uint32_t L_16 = V_2;
		if ((((int32_t)L_16) == ((int32_t)((int32_t)1546474083))))
		{
			goto IL_020a;
		}
	}
	{
		uint32_t L_17 = V_2;
		if ((((int32_t)L_17) == ((int32_t)((int32_t)1975189197))))
		{
			goto IL_01cb;
		}
	}
	{
		goto IL_0388;
	}

IL_00b8:
	{
		uint32_t L_18 = V_2;
		if ((((int32_t)L_18) == ((int32_t)((int32_t)2053023684))))
		{
			goto IL_01a1;
		}
	}
	{
		uint32_t L_19 = V_2;
		if ((((int32_t)L_19) == ((int32_t)((int32_t)-2100707162))))
		{
			goto IL_0162;
		}
	}
	{
		goto IL_0388;
	}

IL_00d3:
	{
		uint32_t L_20 = V_2;
		if ((!(((uint32_t)L_20) <= ((uint32_t)((int32_t)-1319579393)))))
		{
			goto IL_00f6;
		}
	}
	{
		uint32_t L_21 = V_2;
		if ((((int32_t)L_21) == ((int32_t)((int32_t)-1562862963))))
		{
			goto IL_01e0;
		}
	}
	{
		uint32_t L_22 = V_2;
		if ((((int32_t)L_22) == ((int32_t)((int32_t)-1319579393))))
		{
			goto IL_018c;
		}
	}
	{
		goto IL_0388;
	}

IL_00f6:
	{
		uint32_t L_23 = V_2;
		if ((((int32_t)L_23) == ((int32_t)((int32_t)-1055777148))))
		{
			goto IL_0123;
		}
	}
	{
		uint32_t L_24 = V_2;
		if ((((int32_t)L_24) == ((int32_t)((int32_t)-413379935))))
		{
			goto IL_01f5;
		}
	}
	{
		goto IL_0388;
	}

IL_010e:
	{
		String_t* L_25 = V_1;
		bool L_26;
		L_26 = String_op_Equality_m50B3548E4AC232558190B0052877B290AA1D436A((String_t*)L_25, (String_t*)_stringLiteralF9D225733E1D10F9344C755C4A9C0870CD1DE97B, /*hidden argument*/NULL);
		if (L_26)
		{
			goto IL_0249;
		}
	}
	{
		goto IL_0388;
	}

IL_0123:
	{
		String_t* L_27 = V_1;
		bool L_28;
		L_28 = String_op_Equality_m50B3548E4AC232558190B0052877B290AA1D436A((String_t*)L_27, (String_t*)_stringLiteral60126327537B7B8E6EE33C43FE0C5CA8BCC3A06A, /*hidden argument*/NULL);
		if (L_28)
		{
			goto IL_0260;
		}
	}
	{
		goto IL_0388;
	}

IL_0138:
	{
		String_t* L_29 = V_1;
		bool L_30;
		L_30 = String_op_Equality_m50B3548E4AC232558190B0052877B290AA1D436A((String_t*)L_29, (String_t*)_stringLiteralBE2893848F9FC647C2288DA6581A1522E9695182, /*hidden argument*/NULL);
		if (L_30)
		{
			goto IL_0277;
		}
	}
	{
		goto IL_0388;
	}

IL_014d:
	{
		String_t* L_31 = V_1;
		bool L_32;
		L_32 = String_op_Equality_m50B3548E4AC232558190B0052877B290AA1D436A((String_t*)L_31, (String_t*)_stringLiteral4221314F268D184F46688D45C85446821F1F1BC3, /*hidden argument*/NULL);
		if (L_32)
		{
			goto IL_028e;
		}
	}
	{
		goto IL_0388;
	}

IL_0162:
	{
		String_t* L_33 = V_1;
		bool L_34;
		L_34 = String_op_Equality_m50B3548E4AC232558190B0052877B290AA1D436A((String_t*)L_33, (String_t*)_stringLiteral5C86338F177203D001C41D9C348A83D1338CC7D0, /*hidden argument*/NULL);
		if (L_34)
		{
			goto IL_02a5;
		}
	}
	{
		goto IL_0388;
	}

IL_0177:
	{
		String_t* L_35 = V_1;
		bool L_36;
		L_36 = String_op_Equality_m50B3548E4AC232558190B0052877B290AA1D436A((String_t*)L_35, (String_t*)_stringLiteralFE5F89F63E2381500F62A7CBD6954563BE44562F, /*hidden argument*/NULL);
		if (L_36)
		{
			goto IL_02bc;
		}
	}
	{
		goto IL_0388;
	}

IL_018c:
	{
		String_t* L_37 = V_1;
		bool L_38;
		L_38 = String_op_Equality_m50B3548E4AC232558190B0052877B290AA1D436A((String_t*)L_37, (String_t*)_stringLiteral87F70660D62DE5FC257FBADE9DA4EC9188597DE5, /*hidden argument*/NULL);
		if (L_38)
		{
			goto IL_02ce;
		}
	}
	{
		goto IL_0388;
	}

IL_01a1:
	{
		String_t* L_39 = V_1;
		bool L_40;
		L_40 = String_op_Equality_m50B3548E4AC232558190B0052877B290AA1D436A((String_t*)L_39, (String_t*)_stringLiteral354281948B6269615E32D856CF85B6F456724DAA, /*hidden argument*/NULL);
		if (L_40)
		{
			goto IL_02e5;
		}
	}
	{
		goto IL_0388;
	}

IL_01b6:
	{
		String_t* L_41 = V_1;
		bool L_42;
		L_42 = String_op_Equality_m50B3548E4AC232558190B0052877B290AA1D436A((String_t*)L_41, (String_t*)_stringLiteralADAEB0839588196B349BDB6CF33AFA3E0736360B, /*hidden argument*/NULL);
		if (L_42)
		{
			goto IL_02fc;
		}
	}
	{
		goto IL_0388;
	}

IL_01cb:
	{
		String_t* L_43 = V_1;
		bool L_44;
		L_44 = String_op_Equality_m50B3548E4AC232558190B0052877B290AA1D436A((String_t*)L_43, (String_t*)_stringLiteralC580B374AA991574F91DFC86C068E7FAD661A3A4, /*hidden argument*/NULL);
		if (L_44)
		{
			goto IL_0310;
		}
	}
	{
		goto IL_0388;
	}

IL_01e0:
	{
		String_t* L_45 = V_1;
		bool L_46;
		L_46 = String_op_Equality_m50B3548E4AC232558190B0052877B290AA1D436A((String_t*)L_45, (String_t*)_stringLiteralE049DB547285CFCE1CB9A95934B6B6DCE2D219EC, /*hidden argument*/NULL);
		if (L_46)
		{
			goto IL_0324;
		}
	}
	{
		goto IL_0388;
	}

IL_01f5:
	{
		String_t* L_47 = V_1;
		bool L_48;
		L_48 = String_op_Equality_m50B3548E4AC232558190B0052877B290AA1D436A((String_t*)L_47, (String_t*)_stringLiteralBF540D6548854CC21630064FBA5390C9409C86F0, /*hidden argument*/NULL);
		if (L_48)
		{
			goto IL_0338;
		}
	}
	{
		goto IL_0388;
	}

IL_020a:
	{
		String_t* L_49 = V_1;
		bool L_50;
		L_50 = String_op_Equality_m50B3548E4AC232558190B0052877B290AA1D436A((String_t*)L_49, (String_t*)_stringLiteral1D87A56AE67B2CD49CAE6E942C2FB7AD98925C00, /*hidden argument*/NULL);
		if (L_50)
		{
			goto IL_034c;
		}
	}
	{
		goto IL_0388;
	}

IL_021f:
	{
		String_t* L_51 = V_1;
		bool L_52;
		L_52 = String_op_Equality_m50B3548E4AC232558190B0052877B290AA1D436A((String_t*)L_51, (String_t*)_stringLiteralA967787586EC9E5A17A9C55E2002AB73A5E21A0A, /*hidden argument*/NULL);
		if (L_52)
		{
			goto IL_0360;
		}
	}
	{
		goto IL_0388;
	}

IL_0234:
	{
		String_t* L_53 = V_1;
		bool L_54;
		L_54 = String_op_Equality_m50B3548E4AC232558190B0052877B290AA1D436A((String_t*)L_53, (String_t*)_stringLiteral47C47DD09640803AD8016748EAE1F04DD1D41119, /*hidden argument*/NULL);
		if (L_54)
		{
			goto IL_0374;
		}
	}
	{
		goto IL_0388;
	}

IL_0249:
	{
		// instance.enabled = reader.Read<System.Boolean>(ES3Type_bool.Instance);
		ES3Reader_t2780AF8AA61DA2A817115CEF8612AC0E494D03C9 * L_55 = ___reader0;
		IL2CPP_RUNTIME_CLASS_INIT(ES3Type_bool_t8F309F7B9CC735FF1DEE68081B6E3CAB367745F4_il2cpp_TypeInfo_var);
		ES3Type_t8FBECB7AE75168648B9524E0C2A38DAD4555421D * L_56 = ((ES3Type_bool_t8F309F7B9CC735FF1DEE68081B6E3CAB367745F4_StaticFields*)il2cpp_codegen_static_fields_for(ES3Type_bool_t8F309F7B9CC735FF1DEE68081B6E3CAB367745F4_il2cpp_TypeInfo_var))->get_Instance_12();
		NullCheck((ES3Reader_t2780AF8AA61DA2A817115CEF8612AC0E494D03C9 *)L_55);
		bool L_57;
		L_57 = GenericVirtFuncInvoker1< bool, ES3Type_t8FBECB7AE75168648B9524E0C2A38DAD4555421D * >::Invoke(ES3Reader_Read_TisBoolean_t07D1E3F34E4813023D64F584DFF7B34C9D922F37_mC6D1B158268FF9B97822FF9F5B37FB1723FEDA22_RuntimeMethod_var, (ES3Reader_t2780AF8AA61DA2A817115CEF8612AC0E494D03C9 *)L_55, (ES3Type_t8FBECB7AE75168648B9524E0C2A38DAD4555421D *)L_56);
		TrailModule_set_enabled_mFC8451DDDF40CCBB3E32A4B30A001115F6346894((TrailModule_t95D15372971E64A1977B7587ABAA87B1A31EF5C8 *)(TrailModule_t95D15372971E64A1977B7587ABAA87B1A31EF5C8 *)(&V_0), (bool)L_57, /*hidden argument*/NULL);
		// break;
		goto IL_038e;
	}

IL_0260:
	{
		// instance.ratio = reader.Read<System.Single>(ES3Type_float.Instance);
		ES3Reader_t2780AF8AA61DA2A817115CEF8612AC0E494D03C9 * L_58 = ___reader0;
		IL2CPP_RUNTIME_CLASS_INIT(ES3Type_float_tF86B773C86731BD9AD79448B860BBB178FE77644_il2cpp_TypeInfo_var);
		ES3Type_t8FBECB7AE75168648B9524E0C2A38DAD4555421D * L_59 = ((ES3Type_float_tF86B773C86731BD9AD79448B860BBB178FE77644_StaticFields*)il2cpp_codegen_static_fields_for(ES3Type_float_tF86B773C86731BD9AD79448B860BBB178FE77644_il2cpp_TypeInfo_var))->get_Instance_12();
		NullCheck((ES3Reader_t2780AF8AA61DA2A817115CEF8612AC0E494D03C9 *)L_58);
		float L_60;
		L_60 = GenericVirtFuncInvoker1< float, ES3Type_t8FBECB7AE75168648B9524E0C2A38DAD4555421D * >::Invoke(ES3Reader_Read_TisSingle_tE07797BA3C98D4CA9B5A19413C19A76688AB899E_m4A0416374498BDA042B8EB21E49B72326D6CE5F4_RuntimeMethod_var, (ES3Reader_t2780AF8AA61DA2A817115CEF8612AC0E494D03C9 *)L_58, (ES3Type_t8FBECB7AE75168648B9524E0C2A38DAD4555421D *)L_59);
		TrailModule_set_ratio_m34E63B34E7B0E8D037AD45532B2E2D5BD0750189((TrailModule_t95D15372971E64A1977B7587ABAA87B1A31EF5C8 *)(TrailModule_t95D15372971E64A1977B7587ABAA87B1A31EF5C8 *)(&V_0), (float)L_60, /*hidden argument*/NULL);
		// break;
		goto IL_038e;
	}

IL_0277:
	{
		// instance.lifetime = reader.Read<UnityEngine.ParticleSystem.MinMaxCurve>(ES3Type_MinMaxCurve.Instance);
		ES3Reader_t2780AF8AA61DA2A817115CEF8612AC0E494D03C9 * L_61 = ___reader0;
		IL2CPP_RUNTIME_CLASS_INIT(ES3Type_MinMaxCurve_tC5342BF0F8735B85CB5E16FDD4C6FACC8AFAD3B7_il2cpp_TypeInfo_var);
		ES3Type_t8FBECB7AE75168648B9524E0C2A38DAD4555421D * L_62 = ((ES3Type_MinMaxCurve_tC5342BF0F8735B85CB5E16FDD4C6FACC8AFAD3B7_StaticFields*)il2cpp_codegen_static_fields_for(ES3Type_MinMaxCurve_tC5342BF0F8735B85CB5E16FDD4C6FACC8AFAD3B7_il2cpp_TypeInfo_var))->get_Instance_12();
		NullCheck((ES3Reader_t2780AF8AA61DA2A817115CEF8612AC0E494D03C9 *)L_61);
		MinMaxCurve_tF036239442AB2D438B1EDABEBC785426871084CD  L_63;
		L_63 = GenericVirtFuncInvoker1< MinMaxCurve_tF036239442AB2D438B1EDABEBC785426871084CD , ES3Type_t8FBECB7AE75168648B9524E0C2A38DAD4555421D * >::Invoke(ES3Reader_Read_TisMinMaxCurve_tF036239442AB2D438B1EDABEBC785426871084CD_mD285150CBFB52440643BBECB5ADF4EE8DE940535_RuntimeMethod_var, (ES3Reader_t2780AF8AA61DA2A817115CEF8612AC0E494D03C9 *)L_61, (ES3Type_t8FBECB7AE75168648B9524E0C2A38DAD4555421D *)L_62);
		TrailModule_set_lifetime_m57C898C42B9F18F5A0E88AAA7B10276CC158C39D((TrailModule_t95D15372971E64A1977B7587ABAA87B1A31EF5C8 *)(TrailModule_t95D15372971E64A1977B7587ABAA87B1A31EF5C8 *)(&V_0), (MinMaxCurve_tF036239442AB2D438B1EDABEBC785426871084CD )L_63, /*hidden argument*/NULL);
		// break;
		goto IL_038e;
	}

IL_028e:
	{
		// instance.lifetimeMultiplier = reader.Read<System.Single>(ES3Type_float.Instance);
		ES3Reader_t2780AF8AA61DA2A817115CEF8612AC0E494D03C9 * L_64 = ___reader0;
		IL2CPP_RUNTIME_CLASS_INIT(ES3Type_float_tF86B773C86731BD9AD79448B860BBB178FE77644_il2cpp_TypeInfo_var);
		ES3Type_t8FBECB7AE75168648B9524E0C2A38DAD4555421D * L_65 = ((ES3Type_float_tF86B773C86731BD9AD79448B860BBB178FE77644_StaticFields*)il2cpp_codegen_static_fields_for(ES3Type_float_tF86B773C86731BD9AD79448B860BBB178FE77644_il2cpp_TypeInfo_var))->get_Instance_12();
		NullCheck((ES3Reader_t2780AF8AA61DA2A817115CEF8612AC0E494D03C9 *)L_64);
		float L_66;
		L_66 = GenericVirtFuncInvoker1< float, ES3Type_t8FBECB7AE75168648B9524E0C2A38DAD4555421D * >::Invoke(ES3Reader_Read_TisSingle_tE07797BA3C98D4CA9B5A19413C19A76688AB899E_m4A0416374498BDA042B8EB21E49B72326D6CE5F4_RuntimeMethod_var, (ES3Reader_t2780AF8AA61DA2A817115CEF8612AC0E494D03C9 *)L_64, (ES3Type_t8FBECB7AE75168648B9524E0C2A38DAD4555421D *)L_65);
		TrailModule_set_lifetimeMultiplier_m23F95D65EE8C82152AE1CF2E41531EC2789A866B((TrailModule_t95D15372971E64A1977B7587ABAA87B1A31EF5C8 *)(TrailModule_t95D15372971E64A1977B7587ABAA87B1A31EF5C8 *)(&V_0), (float)L_66, /*hidden argument*/NULL);
		// break;
		goto IL_038e;
	}

IL_02a5:
	{
		// instance.minVertexDistance = reader.Read<System.Single>(ES3Type_float.Instance);
		ES3Reader_t2780AF8AA61DA2A817115CEF8612AC0E494D03C9 * L_67 = ___reader0;
		IL2CPP_RUNTIME_CLASS_INIT(ES3Type_float_tF86B773C86731BD9AD79448B860BBB178FE77644_il2cpp_TypeInfo_var);
		ES3Type_t8FBECB7AE75168648B9524E0C2A38DAD4555421D * L_68 = ((ES3Type_float_tF86B773C86731BD9AD79448B860BBB178FE77644_StaticFields*)il2cpp_codegen_static_fields_for(ES3Type_float_tF86B773C86731BD9AD79448B860BBB178FE77644_il2cpp_TypeInfo_var))->get_Instance_12();
		NullCheck((ES3Reader_t2780AF8AA61DA2A817115CEF8612AC0E494D03C9 *)L_67);
		float L_69;
		L_69 = GenericVirtFuncInvoker1< float, ES3Type_t8FBECB7AE75168648B9524E0C2A38DAD4555421D * >::Invoke(ES3Reader_Read_TisSingle_tE07797BA3C98D4CA9B5A19413C19A76688AB899E_m4A0416374498BDA042B8EB21E49B72326D6CE5F4_RuntimeMethod_var, (ES3Reader_t2780AF8AA61DA2A817115CEF8612AC0E494D03C9 *)L_67, (ES3Type_t8FBECB7AE75168648B9524E0C2A38DAD4555421D *)L_68);
		TrailModule_set_minVertexDistance_mF7C29F88FBF540CE4987F4CF9B141C624808FBC5((TrailModule_t95D15372971E64A1977B7587ABAA87B1A31EF5C8 *)(TrailModule_t95D15372971E64A1977B7587ABAA87B1A31EF5C8 *)(&V_0), (float)L_69, /*hidden argument*/NULL);
		// break;
		goto IL_038e;
	}

IL_02bc:
	{
		// instance.textureMode = reader.Read<UnityEngine.ParticleSystemTrailTextureMode>();
		ES3Reader_t2780AF8AA61DA2A817115CEF8612AC0E494D03C9 * L_70 = ___reader0;
		NullCheck((ES3Reader_t2780AF8AA61DA2A817115CEF8612AC0E494D03C9 *)L_70);
		int32_t L_71;
		L_71 = GenericVirtFuncInvoker0< int32_t >::Invoke(ES3Reader_Read_TisParticleSystemTrailTextureMode_tF3259187CA4D0A61EDB3A40E63CBF6C42641CE9F_m055DB1212E8BC34F385DF7D302F16241554E9730_RuntimeMethod_var, (ES3Reader_t2780AF8AA61DA2A817115CEF8612AC0E494D03C9 *)L_70);
		TrailModule_set_textureMode_mC1F8AE0D2965FC47BDBFF4F53E0673D5FB58CF28((TrailModule_t95D15372971E64A1977B7587ABAA87B1A31EF5C8 *)(TrailModule_t95D15372971E64A1977B7587ABAA87B1A31EF5C8 *)(&V_0), (int32_t)L_71, /*hidden argument*/NULL);
		// break;
		goto IL_038e;
	}

IL_02ce:
	{
		// instance.worldSpace = reader.Read<System.Boolean>(ES3Type_bool.Instance);
		ES3Reader_t2780AF8AA61DA2A817115CEF8612AC0E494D03C9 * L_72 = ___reader0;
		IL2CPP_RUNTIME_CLASS_INIT(ES3Type_bool_t8F309F7B9CC735FF1DEE68081B6E3CAB367745F4_il2cpp_TypeInfo_var);
		ES3Type_t8FBECB7AE75168648B9524E0C2A38DAD4555421D * L_73 = ((ES3Type_bool_t8F309F7B9CC735FF1DEE68081B6E3CAB367745F4_StaticFields*)il2cpp_codegen_static_fields_for(ES3Type_bool_t8F309F7B9CC735FF1DEE68081B6E3CAB367745F4_il2cpp_TypeInfo_var))->get_Instance_12();
		NullCheck((ES3Reader_t2780AF8AA61DA2A817115CEF8612AC0E494D03C9 *)L_72);
		bool L_74;
		L_74 = GenericVirtFuncInvoker1< bool, ES3Type_t8FBECB7AE75168648B9524E0C2A38DAD4555421D * >::Invoke(ES3Reader_Read_TisBoolean_t07D1E3F34E4813023D64F584DFF7B34C9D922F37_mC6D1B158268FF9B97822FF9F5B37FB1723FEDA22_RuntimeMethod_var, (ES3Reader_t2780AF8AA61DA2A817115CEF8612AC0E494D03C9 *)L_72, (ES3Type_t8FBECB7AE75168648B9524E0C2A38DAD4555421D *)L_73);
		TrailModule_set_worldSpace_m42A63AF4A96F24A621A29A0F35240195F0E56B1A((TrailModule_t95D15372971E64A1977B7587ABAA87B1A31EF5C8 *)(TrailModule_t95D15372971E64A1977B7587ABAA87B1A31EF5C8 *)(&V_0), (bool)L_74, /*hidden argument*/NULL);
		// break;
		goto IL_038e;
	}

IL_02e5:
	{
		// instance.dieWithParticles = reader.Read<System.Boolean>(ES3Type_bool.Instance);
		ES3Reader_t2780AF8AA61DA2A817115CEF8612AC0E494D03C9 * L_75 = ___reader0;
		IL2CPP_RUNTIME_CLASS_INIT(ES3Type_bool_t8F309F7B9CC735FF1DEE68081B6E3CAB367745F4_il2cpp_TypeInfo_var);
		ES3Type_t8FBECB7AE75168648B9524E0C2A38DAD4555421D * L_76 = ((ES3Type_bool_t8F309F7B9CC735FF1DEE68081B6E3CAB367745F4_StaticFields*)il2cpp_codegen_static_fields_for(ES3Type_bool_t8F309F7B9CC735FF1DEE68081B6E3CAB367745F4_il2cpp_TypeInfo_var))->get_Instance_12();
		NullCheck((ES3Reader_t2780AF8AA61DA2A817115CEF8612AC0E494D03C9 *)L_75);
		bool L_77;
		L_77 = GenericVirtFuncInvoker1< bool, ES3Type_t8FBECB7AE75168648B9524E0C2A38DAD4555421D * >::Invoke(ES3Reader_Read_TisBoolean_t07D1E3F34E4813023D64F584DFF7B34C9D922F37_mC6D1B158268FF9B97822FF9F5B37FB1723FEDA22_RuntimeMethod_var, (ES3Reader_t2780AF8AA61DA2A817115CEF8612AC0E494D03C9 *)L_75, (ES3Type_t8FBECB7AE75168648B9524E0C2A38DAD4555421D *)L_76);
		TrailModule_set_dieWithParticles_mB7C4E8DC2F908FDF6D57A77B54B821E360D8DA99((TrailModule_t95D15372971E64A1977B7587ABAA87B1A31EF5C8 *)(TrailModule_t95D15372971E64A1977B7587ABAA87B1A31EF5C8 *)(&V_0), (bool)L_77, /*hidden argument*/NULL);
		// break;
		goto IL_038e;
	}

IL_02fc:
	{
		// instance.sizeAffectsWidth = reader.Read<System.Boolean>(ES3Type_bool.Instance);
		ES3Reader_t2780AF8AA61DA2A817115CEF8612AC0E494D03C9 * L_78 = ___reader0;
		IL2CPP_RUNTIME_CLASS_INIT(ES3Type_bool_t8F309F7B9CC735FF1DEE68081B6E3CAB367745F4_il2cpp_TypeInfo_var);
		ES3Type_t8FBECB7AE75168648B9524E0C2A38DAD4555421D * L_79 = ((ES3Type_bool_t8F309F7B9CC735FF1DEE68081B6E3CAB367745F4_StaticFields*)il2cpp_codegen_static_fields_for(ES3Type_bool_t8F309F7B9CC735FF1DEE68081B6E3CAB367745F4_il2cpp_TypeInfo_var))->get_Instance_12();
		NullCheck((ES3Reader_t2780AF8AA61DA2A817115CEF8612AC0E494D03C9 *)L_78);
		bool L_80;
		L_80 = GenericVirtFuncInvoker1< bool, ES3Type_t8FBECB7AE75168648B9524E0C2A38DAD4555421D * >::Invoke(ES3Reader_Read_TisBoolean_t07D1E3F34E4813023D64F584DFF7B34C9D922F37_mC6D1B158268FF9B97822FF9F5B37FB1723FEDA22_RuntimeMethod_var, (ES3Reader_t2780AF8AA61DA2A817115CEF8612AC0E494D03C9 *)L_78, (ES3Type_t8FBECB7AE75168648B9524E0C2A38DAD4555421D *)L_79);
		TrailModule_set_sizeAffectsWidth_m3517856E39080DA69B447499C8846D2491B0ABF0((TrailModule_t95D15372971E64A1977B7587ABAA87B1A31EF5C8 *)(TrailModule_t95D15372971E64A1977B7587ABAA87B1A31EF5C8 *)(&V_0), (bool)L_80, /*hidden argument*/NULL);
		// break;
		goto IL_038e;
	}

IL_0310:
	{
		// instance.sizeAffectsLifetime = reader.Read<System.Boolean>(ES3Type_bool.Instance);
		ES3Reader_t2780AF8AA61DA2A817115CEF8612AC0E494D03C9 * L_81 = ___reader0;
		IL2CPP_RUNTIME_CLASS_INIT(ES3Type_bool_t8F309F7B9CC735FF1DEE68081B6E3CAB367745F4_il2cpp_TypeInfo_var);
		ES3Type_t8FBECB7AE75168648B9524E0C2A38DAD4555421D * L_82 = ((ES3Type_bool_t8F309F7B9CC735FF1DEE68081B6E3CAB367745F4_StaticFields*)il2cpp_codegen_static_fields_for(ES3Type_bool_t8F309F7B9CC735FF1DEE68081B6E3CAB367745F4_il2cpp_TypeInfo_var))->get_Instance_12();
		NullCheck((ES3Reader_t2780AF8AA61DA2A817115CEF8612AC0E494D03C9 *)L_81);
		bool L_83;
		L_83 = GenericVirtFuncInvoker1< bool, ES3Type_t8FBECB7AE75168648B9524E0C2A38DAD4555421D * >::Invoke(ES3Reader_Read_TisBoolean_t07D1E3F34E4813023D64F584DFF7B34C9D922F37_mC6D1B158268FF9B97822FF9F5B37FB1723FEDA22_RuntimeMethod_var, (ES3Reader_t2780AF8AA61DA2A817115CEF8612AC0E494D03C9 *)L_81, (ES3Type_t8FBECB7AE75168648B9524E0C2A38DAD4555421D *)L_82);
		TrailModule_set_sizeAffectsLifetime_m98BF4A6594193D824B52D88371CF963ACBA388FD((TrailModule_t95D15372971E64A1977B7587ABAA87B1A31EF5C8 *)(TrailModule_t95D15372971E64A1977B7587ABAA87B1A31EF5C8 *)(&V_0), (bool)L_83, /*hidden argument*/NULL);
		// break;
		goto IL_038e;
	}

IL_0324:
	{
		// instance.inheritParticleColor = reader.Read<System.Boolean>(ES3Type_bool.Instance);
		ES3Reader_t2780AF8AA61DA2A817115CEF8612AC0E494D03C9 * L_84 = ___reader0;
		IL2CPP_RUNTIME_CLASS_INIT(ES3Type_bool_t8F309F7B9CC735FF1DEE68081B6E3CAB367745F4_il2cpp_TypeInfo_var);
		ES3Type_t8FBECB7AE75168648B9524E0C2A38DAD4555421D * L_85 = ((ES3Type_bool_t8F309F7B9CC735FF1DEE68081B6E3CAB367745F4_StaticFields*)il2cpp_codegen_static_fields_for(ES3Type_bool_t8F309F7B9CC735FF1DEE68081B6E3CAB367745F4_il2cpp_TypeInfo_var))->get_Instance_12();
		NullCheck((ES3Reader_t2780AF8AA61DA2A817115CEF8612AC0E494D03C9 *)L_84);
		bool L_86;
		L_86 = GenericVirtFuncInvoker1< bool, ES3Type_t8FBECB7AE75168648B9524E0C2A38DAD4555421D * >::Invoke(ES3Reader_Read_TisBoolean_t07D1E3F34E4813023D64F584DFF7B34C9D922F37_mC6D1B158268FF9B97822FF9F5B37FB1723FEDA22_RuntimeMethod_var, (ES3Reader_t2780AF8AA61DA2A817115CEF8612AC0E494D03C9 *)L_84, (ES3Type_t8FBECB7AE75168648B9524E0C2A38DAD4555421D *)L_85);
		TrailModule_set_inheritParticleColor_mCD83E87B5E00F2BFFBE08AD2D1D68606283A4FEE((TrailModule_t95D15372971E64A1977B7587ABAA87B1A31EF5C8 *)(TrailModule_t95D15372971E64A1977B7587ABAA87B1A31EF5C8 *)(&V_0), (bool)L_86, /*hidden argument*/NULL);
		// break;
		goto IL_038e;
	}

IL_0338:
	{
		// instance.colorOverLifetime = reader.Read<UnityEngine.ParticleSystem.MinMaxGradient>(ES3Type_MinMaxGradient.Instance);
		ES3Reader_t2780AF8AA61DA2A817115CEF8612AC0E494D03C9 * L_87 = ___reader0;
		IL2CPP_RUNTIME_CLASS_INIT(ES3Type_MinMaxGradient_t5DD353D60E95642AB39D1C97C6FD6DD1B067D3CF_il2cpp_TypeInfo_var);
		ES3Type_t8FBECB7AE75168648B9524E0C2A38DAD4555421D * L_88 = ((ES3Type_MinMaxGradient_t5DD353D60E95642AB39D1C97C6FD6DD1B067D3CF_StaticFields*)il2cpp_codegen_static_fields_for(ES3Type_MinMaxGradient_t5DD353D60E95642AB39D1C97C6FD6DD1B067D3CF_il2cpp_TypeInfo_var))->get_Instance_12();
		NullCheck((ES3Reader_t2780AF8AA61DA2A817115CEF8612AC0E494D03C9 *)L_87);
		MinMaxGradient_tF4530B26F29D9635D670A33B9EE581EAC48C12B7  L_89;
		L_89 = GenericVirtFuncInvoker1< MinMaxGradient_tF4530B26F29D9635D670A33B9EE581EAC48C12B7 , ES3Type_t8FBECB7AE75168648B9524E0C2A38DAD4555421D * >::Invoke(ES3Reader_Read_TisMinMaxGradient_tF4530B26F29D9635D670A33B9EE581EAC48C12B7_m6A3DD8CBBAC5D32B838B6C4399009AB8AA512ACC_RuntimeMethod_var, (ES3Reader_t2780AF8AA61DA2A817115CEF8612AC0E494D03C9 *)L_87, (ES3Type_t8FBECB7AE75168648B9524E0C2A38DAD4555421D *)L_88);
		TrailModule_set_colorOverLifetime_mCD56BD4B75D3A3947069BA1B93FEC78AAE08DF27((TrailModule_t95D15372971E64A1977B7587ABAA87B1A31EF5C8 *)(TrailModule_t95D15372971E64A1977B7587ABAA87B1A31EF5C8 *)(&V_0), (MinMaxGradient_tF4530B26F29D9635D670A33B9EE581EAC48C12B7 )L_89, /*hidden argument*/NULL);
		// break;
		goto IL_038e;
	}

IL_034c:
	{
		// instance.widthOverTrail = reader.Read<UnityEngine.ParticleSystem.MinMaxCurve>(ES3Type_MinMaxCurve.Instance);
		ES3Reader_t2780AF8AA61DA2A817115CEF8612AC0E494D03C9 * L_90 = ___reader0;
		IL2CPP_RUNTIME_CLASS_INIT(ES3Type_MinMaxCurve_tC5342BF0F8735B85CB5E16FDD4C6FACC8AFAD3B7_il2cpp_TypeInfo_var);
		ES3Type_t8FBECB7AE75168648B9524E0C2A38DAD4555421D * L_91 = ((ES3Type_MinMaxCurve_tC5342BF0F8735B85CB5E16FDD4C6FACC8AFAD3B7_StaticFields*)il2cpp_codegen_static_fields_for(ES3Type_MinMaxCurve_tC5342BF0F8735B85CB5E16FDD4C6FACC8AFAD3B7_il2cpp_TypeInfo_var))->get_Instance_12();
		NullCheck((ES3Reader_t2780AF8AA61DA2A817115CEF8612AC0E494D03C9 *)L_90);
		MinMaxCurve_tF036239442AB2D438B1EDABEBC785426871084CD  L_92;
		L_92 = GenericVirtFuncInvoker1< MinMaxCurve_tF036239442AB2D438B1EDABEBC785426871084CD , ES3Type_t8FBECB7AE75168648B9524E0C2A38DAD4555421D * >::Invoke(ES3Reader_Read_TisMinMaxCurve_tF036239442AB2D438B1EDABEBC785426871084CD_mD285150CBFB52440643BBECB5ADF4EE8DE940535_RuntimeMethod_var, (ES3Reader_t2780AF8AA61DA2A817115CEF8612AC0E494D03C9 *)L_90, (ES3Type_t8FBECB7AE75168648B9524E0C2A38DAD4555421D *)L_91);
		TrailModule_set_widthOverTrail_m6C0A896EBFDED7CE46344B3A0B04212934F30DE1((TrailModule_t95D15372971E64A1977B7587ABAA87B1A31EF5C8 *)(TrailModule_t95D15372971E64A1977B7587ABAA87B1A31EF5C8 *)(&V_0), (MinMaxCurve_tF036239442AB2D438B1EDABEBC785426871084CD )L_92, /*hidden argument*/NULL);
		// break;
		goto IL_038e;
	}

IL_0360:
	{
		// instance.widthOverTrailMultiplier = reader.Read<System.Single>(ES3Type_float.Instance);
		ES3Reader_t2780AF8AA61DA2A817115CEF8612AC0E494D03C9 * L_93 = ___reader0;
		IL2CPP_RUNTIME_CLASS_INIT(ES3Type_float_tF86B773C86731BD9AD79448B860BBB178FE77644_il2cpp_TypeInfo_var);
		ES3Type_t8FBECB7AE75168648B9524E0C2A38DAD4555421D * L_94 = ((ES3Type_float_tF86B773C86731BD9AD79448B860BBB178FE77644_StaticFields*)il2cpp_codegen_static_fields_for(ES3Type_float_tF86B773C86731BD9AD79448B860BBB178FE77644_il2cpp_TypeInfo_var))->get_Instance_12();
		NullCheck((ES3Reader_t2780AF8AA61DA2A817115CEF8612AC0E494D03C9 *)L_93);
		float L_95;
		L_95 = GenericVirtFuncInvoker1< float, ES3Type_t8FBECB7AE75168648B9524E0C2A38DAD4555421D * >::Invoke(ES3Reader_Read_TisSingle_tE07797BA3C98D4CA9B5A19413C19A76688AB899E_m4A0416374498BDA042B8EB21E49B72326D6CE5F4_RuntimeMethod_var, (ES3Reader_t2780AF8AA61DA2A817115CEF8612AC0E494D03C9 *)L_93, (ES3Type_t8FBECB7AE75168648B9524E0C2A38DAD4555421D *)L_94);
		TrailModule_set_widthOverTrailMultiplier_m6A7EA2856CF30B710CCB528EA3EBFD1799C19BD4((TrailModule_t95D15372971E64A1977B7587ABAA87B1A31EF5C8 *)(TrailModule_t95D15372971E64A1977B7587ABAA87B1A31EF5C8 *)(&V_0), (float)L_95, /*hidden argument*/NULL);
		// break;
		goto IL_038e;
	}

IL_0374:
	{
		// instance.colorOverTrail = reader.Read<UnityEngine.ParticleSystem.MinMaxGradient>(ES3Type_MinMaxGradient.Instance);
		ES3Reader_t2780AF8AA61DA2A817115CEF8612AC0E494D03C9 * L_96 = ___reader0;
		IL2CPP_RUNTIME_CLASS_INIT(ES3Type_MinMaxGradient_t5DD353D60E95642AB39D1C97C6FD6DD1B067D3CF_il2cpp_TypeInfo_var);
		ES3Type_t8FBECB7AE75168648B9524E0C2A38DAD4555421D * L_97 = ((ES3Type_MinMaxGradient_t5DD353D60E95642AB39D1C97C6FD6DD1B067D3CF_StaticFields*)il2cpp_codegen_static_fields_for(ES3Type_MinMaxGradient_t5DD353D60E95642AB39D1C97C6FD6DD1B067D3CF_il2cpp_TypeInfo_var))->get_Instance_12();
		NullCheck((ES3Reader_t2780AF8AA61DA2A817115CEF8612AC0E494D03C9 *)L_96);
		MinMaxGradient_tF4530B26F29D9635D670A33B9EE581EAC48C12B7  L_98;
		L_98 = GenericVirtFuncInvoker1< MinMaxGradient_tF4530B26F29D9635D670A33B9EE581EAC48C12B7 , ES3Type_t8FBECB7AE75168648B9524E0C2A38DAD4555421D * >::Invoke(ES3Reader_Read_TisMinMaxGradient_tF4530B26F29D9635D670A33B9EE581EAC48C12B7_m6A3DD8CBBAC5D32B838B6C4399009AB8AA512ACC_RuntimeMethod_var, (ES3Reader_t2780AF8AA61DA2A817115CEF8612AC0E494D03C9 *)L_96, (ES3Type_t8FBECB7AE75168648B9524E0C2A38DAD4555421D *)L_97);
		TrailModule_set_colorOverTrail_m8440C6574C8310292B93D70EA4FE3EE8C40DF8DB((TrailModule_t95D15372971E64A1977B7587ABAA87B1A31EF5C8 *)(TrailModule_t95D15372971E64A1977B7587ABAA87B1A31EF5C8 *)(&V_0), (MinMaxGradient_tF4530B26F29D9635D670A33B9EE581EAC48C12B7 )L_98, /*hidden argument*/NULL);
		// break;
		goto IL_038e;
	}

IL_0388:
	{
		// reader.Skip();
		ES3Reader_t2780AF8AA61DA2A817115CEF8612AC0E494D03C9 * L_99 = ___reader0;
		NullCheck((ES3Reader_t2780AF8AA61DA2A817115CEF8612AC0E494D03C9 *)L_99);
		VirtActionInvoker0::Invoke(41 /* System.Void ES3Reader::Skip() */, (ES3Reader_t2780AF8AA61DA2A817115CEF8612AC0E494D03C9 *)L_99);
	}

IL_038e:
	{
		// while((propertyName = reader.ReadPropertyName()) != null)
		ES3Reader_t2780AF8AA61DA2A817115CEF8612AC0E494D03C9 * L_100 = ___reader0;
		NullCheck((ES3Reader_t2780AF8AA61DA2A817115CEF8612AC0E494D03C9 *)L_100);
		String_t* L_101;
		L_101 = VirtFuncInvoker0< String_t* >::Invoke(21 /* System.String ES3Reader::ReadPropertyName() */, (ES3Reader_t2780AF8AA61DA2A817115CEF8612AC0E494D03C9 *)L_100);
		String_t* L_102 = (String_t*)L_101;
		V_1 = (String_t*)L_102;
		if (L_102)
		{
			goto IL_000c;
		}
	}
	{
		// }
		return;
	}
}
// System.Void ES3Types.ES3Type_TrailModule::ReadInto<UnityEngine.ParticleSystem/MainModule>(ES3Reader,System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ES3Type_TrailModule_ReadInto_TisMainModule_t671F49558CB1A3CFAAD637A7927C076EC2E61F0B_m2831EF73BA793CB5CE1FFEAD79A8AAE72E477BCA_gshared (ES3Type_TrailModule_tC773F73EC0443516DD128FF2B5AE010809742462 * __this, ES3Reader_t2780AF8AA61DA2A817115CEF8612AC0E494D03C9 * ___reader0, RuntimeObject * ___obj1, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ES3Reader_Read_TisBoolean_t07D1E3F34E4813023D64F584DFF7B34C9D922F37_mC6D1B158268FF9B97822FF9F5B37FB1723FEDA22_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ES3Reader_Read_TisMinMaxCurve_tF036239442AB2D438B1EDABEBC785426871084CD_mD285150CBFB52440643BBECB5ADF4EE8DE940535_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ES3Reader_Read_TisMinMaxGradient_tF4530B26F29D9635D670A33B9EE581EAC48C12B7_m6A3DD8CBBAC5D32B838B6C4399009AB8AA512ACC_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ES3Reader_Read_TisParticleSystemTrailTextureMode_tF3259187CA4D0A61EDB3A40E63CBF6C42641CE9F_m055DB1212E8BC34F385DF7D302F16241554E9730_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ES3Reader_Read_TisSingle_tE07797BA3C98D4CA9B5A19413C19A76688AB899E_m4A0416374498BDA042B8EB21E49B72326D6CE5F4_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ES3Type_MinMaxCurve_tC5342BF0F8735B85CB5E16FDD4C6FACC8AFAD3B7_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ES3Type_MinMaxGradient_t5DD353D60E95642AB39D1C97C6FD6DD1B067D3CF_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ES3Type_bool_t8F309F7B9CC735FF1DEE68081B6E3CAB367745F4_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ES3Type_float_tF86B773C86731BD9AD79448B860BBB178FE77644_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&TrailModule_t95D15372971E64A1977B7587ABAA87B1A31EF5C8_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral1D87A56AE67B2CD49CAE6E942C2FB7AD98925C00);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral354281948B6269615E32D856CF85B6F456724DAA);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral4221314F268D184F46688D45C85446821F1F1BC3);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral47C47DD09640803AD8016748EAE1F04DD1D41119);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral5C86338F177203D001C41D9C348A83D1338CC7D0);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral60126327537B7B8E6EE33C43FE0C5CA8BCC3A06A);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral87F70660D62DE5FC257FBADE9DA4EC9188597DE5);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralA967787586EC9E5A17A9C55E2002AB73A5E21A0A);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralADAEB0839588196B349BDB6CF33AFA3E0736360B);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralBE2893848F9FC647C2288DA6581A1522E9695182);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralBF540D6548854CC21630064FBA5390C9409C86F0);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralC580B374AA991574F91DFC86C068E7FAD661A3A4);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralE049DB547285CFCE1CB9A95934B6B6DCE2D219EC);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralF9D225733E1D10F9344C755C4A9C0870CD1DE97B);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralFE5F89F63E2381500F62A7CBD6954563BE44562F);
		s_Il2CppMethodInitialized = true;
	}
	TrailModule_t95D15372971E64A1977B7587ABAA87B1A31EF5C8  V_0;
	memset((&V_0), 0, sizeof(V_0));
	String_t* V_1 = NULL;
	uint32_t V_2 = 0;
	{
		// var instance = (UnityEngine.ParticleSystem.TrailModule)obj;
		RuntimeObject * L_0 = ___obj1;
		V_0 = (TrailModule_t95D15372971E64A1977B7587ABAA87B1A31EF5C8 )((*(TrailModule_t95D15372971E64A1977B7587ABAA87B1A31EF5C8 *)((TrailModule_t95D15372971E64A1977B7587ABAA87B1A31EF5C8 *)UnBox(L_0, TrailModule_t95D15372971E64A1977B7587ABAA87B1A31EF5C8_il2cpp_TypeInfo_var))));
		goto IL_038e;
	}

IL_000c:
	{
		String_t* L_1 = V_1;
		if (!L_1)
		{
			goto IL_0388;
		}
	}
	{
		String_t* L_2 = V_1;
		uint32_t L_3;
		L_3 = U3CPrivateImplementationDetailsU3E_ComputeStringHash_m3ADC1F612F9EE3DD518E6F0023A0DE0EE2B120A7((String_t*)L_2, /*hidden argument*/NULL);
		V_2 = (uint32_t)L_3;
		uint32_t L_4 = V_2;
		if ((!(((uint32_t)L_4) <= ((uint32_t)((int32_t)1376955374)))))
		{
			goto IL_008d;
		}
	}
	{
		uint32_t L_5 = V_2;
		if ((!(((uint32_t)L_5) <= ((uint32_t)((int32_t)494095910)))))
		{
			goto IL_004f;
		}
	}
	{
		uint32_t L_6 = V_2;
		if ((((int32_t)L_6) == ((int32_t)((int32_t)49525662))))
		{
			goto IL_010e;
		}
	}
	{
		uint32_t L_7 = V_2;
		if ((((int32_t)L_7) == ((int32_t)((int32_t)341298456))))
		{
			goto IL_021f;
		}
	}
	{
		uint32_t L_8 = V_2;
		if ((((int32_t)L_8) == ((int32_t)((int32_t)494095910))))
		{
			goto IL_0234;
		}
	}
	{
		goto IL_0388;
	}

IL_004f:
	{
		uint32_t L_9 = V_2;
		if ((!(((uint32_t)L_9) <= ((uint32_t)((int32_t)973733911)))))
		{
			goto IL_0072;
		}
	}
	{
		uint32_t L_10 = V_2;
		if ((((int32_t)L_10) == ((int32_t)((int32_t)559929418))))
		{
			goto IL_01b6;
		}
	}
	{
		uint32_t L_11 = V_2;
		if ((((int32_t)L_11) == ((int32_t)((int32_t)973733911))))
		{
			goto IL_0177;
		}
	}
	{
		goto IL_0388;
	}

IL_0072:
	{
		uint32_t L_12 = V_2;
		if ((((int32_t)L_12) == ((int32_t)((int32_t)1024708593))))
		{
			goto IL_014d;
		}
	}
	{
		uint32_t L_13 = V_2;
		if ((((int32_t)L_13) == ((int32_t)((int32_t)1376955374))))
		{
			goto IL_0138;
		}
	}
	{
		goto IL_0388;
	}

IL_008d:
	{
		uint32_t L_14 = V_2;
		if ((!(((uint32_t)L_14) <= ((uint32_t)((int32_t)-2100707162)))))
		{
			goto IL_00d3;
		}
	}
	{
		uint32_t L_15 = V_2;
		if ((!(((uint32_t)L_15) <= ((uint32_t)((int32_t)1975189197)))))
		{
			goto IL_00b8;
		}
	}
	{
		uint32_t L_16 = V_2;
		if ((((int32_t)L_16) == ((int32_t)((int32_t)1546474083))))
		{
			goto IL_020a;
		}
	}
	{
		uint32_t L_17 = V_2;
		if ((((int32_t)L_17) == ((int32_t)((int32_t)1975189197))))
		{
			goto IL_01cb;
		}
	}
	{
		goto IL_0388;
	}

IL_00b8:
	{
		uint32_t L_18 = V_2;
		if ((((int32_t)L_18) == ((int32_t)((int32_t)2053023684))))
		{
			goto IL_01a1;
		}
	}
	{
		uint32_t L_19 = V_2;
		if ((((int32_t)L_19) == ((int32_t)((int32_t)-2100707162))))
		{
			goto IL_0162;
		}
	}
	{
		goto IL_0388;
	}

IL_00d3:
	{
		uint32_t L_20 = V_2;
		if ((!(((uint32_t)L_20) <= ((uint32_t)((int32_t)-1319579393)))))
		{
			goto IL_00f6;
		}
	}
	{
		uint32_t L_21 = V_2;
		if ((((int32_t)L_21) == ((int32_t)((int32_t)-1562862963))))
		{
			goto IL_01e0;
		}
	}
	{
		uint32_t L_22 = V_2;
		if ((((int32_t)L_22) == ((int32_t)((int32_t)-1319579393))))
		{
			goto IL_018c;
		}
	}
	{
		goto IL_0388;
	}

IL_00f6:
	{
		uint32_t L_23 = V_2;
		if ((((int32_t)L_23) == ((int32_t)((int32_t)-1055777148))))
		{
			goto IL_0123;
		}
	}
	{
		uint32_t L_24 = V_2;
		if ((((int32_t)L_24) == ((int32_t)((int32_t)-413379935))))
		{
			goto IL_01f5;
		}
	}
	{
		goto IL_0388;
	}

IL_010e:
	{
		String_t* L_25 = V_1;
		bool L_26;
		L_26 = String_op_Equality_m50B3548E4AC232558190B0052877B290AA1D436A((String_t*)L_25, (String_t*)_stringLiteralF9D225733E1D10F9344C755C4A9C0870CD1DE97B, /*hidden argument*/NULL);
		if (L_26)
		{
			goto IL_0249;
		}
	}
	{
		goto IL_0388;
	}

IL_0123:
	{
		String_t* L_27 = V_1;
		bool L_28;
		L_28 = String_op_Equality_m50B3548E4AC232558190B0052877B290AA1D436A((String_t*)L_27, (String_t*)_stringLiteral60126327537B7B8E6EE33C43FE0C5CA8BCC3A06A, /*hidden argument*/NULL);
		if (L_28)
		{
			goto IL_0260;
		}
	}
	{
		goto IL_0388;
	}

IL_0138:
	{
		String_t* L_29 = V_1;
		bool L_30;
		L_30 = String_op_Equality_m50B3548E4AC232558190B0052877B290AA1D436A((String_t*)L_29, (String_t*)_stringLiteralBE2893848F9FC647C2288DA6581A1522E9695182, /*hidden argument*/NULL);
		if (L_30)
		{
			goto IL_0277;
		}
	}
	{
		goto IL_0388;
	}

IL_014d:
	{
		String_t* L_31 = V_1;
		bool L_32;
		L_32 = String_op_Equality_m50B3548E4AC232558190B0052877B290AA1D436A((String_t*)L_31, (String_t*)_stringLiteral4221314F268D184F46688D45C85446821F1F1BC3, /*hidden argument*/NULL);
		if (L_32)
		{
			goto IL_028e;
		}
	}
	{
		goto IL_0388;
	}

IL_0162:
	{
		String_t* L_33 = V_1;
		bool L_34;
		L_34 = String_op_Equality_m50B3548E4AC232558190B0052877B290AA1D436A((String_t*)L_33, (String_t*)_stringLiteral5C86338F177203D001C41D9C348A83D1338CC7D0, /*hidden argument*/NULL);
		if (L_34)
		{
			goto IL_02a5;
		}
	}
	{
		goto IL_0388;
	}

IL_0177:
	{
		String_t* L_35 = V_1;
		bool L_36;
		L_36 = String_op_Equality_m50B3548E4AC232558190B0052877B290AA1D436A((String_t*)L_35, (String_t*)_stringLiteralFE5F89F63E2381500F62A7CBD6954563BE44562F, /*hidden argument*/NULL);
		if (L_36)
		{
			goto IL_02bc;
		}
	}
	{
		goto IL_0388;
	}

IL_018c:
	{
		String_t* L_37 = V_1;
		bool L_38;
		L_38 = String_op_Equality_m50B3548E4AC232558190B0052877B290AA1D436A((String_t*)L_37, (String_t*)_stringLiteral87F70660D62DE5FC257FBADE9DA4EC9188597DE5, /*hidden argument*/NULL);
		if (L_38)
		{
			goto IL_02ce;
		}
	}
	{
		goto IL_0388;
	}

IL_01a1:
	{
		String_t* L_39 = V_1;
		bool L_40;
		L_40 = String_op_Equality_m50B3548E4AC232558190B0052877B290AA1D436A((String_t*)L_39, (String_t*)_stringLiteral354281948B6269615E32D856CF85B6F456724DAA, /*hidden argument*/NULL);
		if (L_40)
		{
			goto IL_02e5;
		}
	}
	{
		goto IL_0388;
	}

IL_01b6:
	{
		String_t* L_41 = V_1;
		bool L_42;
		L_42 = String_op_Equality_m50B3548E4AC232558190B0052877B290AA1D436A((String_t*)L_41, (String_t*)_stringLiteralADAEB0839588196B349BDB6CF33AFA3E0736360B, /*hidden argument*/NULL);
		if (L_42)
		{
			goto IL_02fc;
		}
	}
	{
		goto IL_0388;
	}

IL_01cb:
	{
		String_t* L_43 = V_1;
		bool L_44;
		L_44 = String_op_Equality_m50B3548E4AC232558190B0052877B290AA1D436A((String_t*)L_43, (String_t*)_stringLiteralC580B374AA991574F91DFC86C068E7FAD661A3A4, /*hidden argument*/NULL);
		if (L_44)
		{
			goto IL_0310;
		}
	}
	{
		goto IL_0388;
	}

IL_01e0:
	{
		String_t* L_45 = V_1;
		bool L_46;
		L_46 = String_op_Equality_m50B3548E4AC232558190B0052877B290AA1D436A((String_t*)L_45, (String_t*)_stringLiteralE049DB547285CFCE1CB9A95934B6B6DCE2D219EC, /*hidden argument*/NULL);
		if (L_46)
		{
			goto IL_0324;
		}
	}
	{
		goto IL_0388;
	}

IL_01f5:
	{
		String_t* L_47 = V_1;
		bool L_48;
		L_48 = String_op_Equality_m50B3548E4AC232558190B0052877B290AA1D436A((String_t*)L_47, (String_t*)_stringLiteralBF540D6548854CC21630064FBA5390C9409C86F0, /*hidden argument*/NULL);
		if (L_48)
		{
			goto IL_0338;
		}
	}
	{
		goto IL_0388;
	}

IL_020a:
	{
		String_t* L_49 = V_1;
		bool L_50;
		L_50 = String_op_Equality_m50B3548E4AC232558190B0052877B290AA1D436A((String_t*)L_49, (String_t*)_stringLiteral1D87A56AE67B2CD49CAE6E942C2FB7AD98925C00, /*hidden argument*/NULL);
		if (L_50)
		{
			goto IL_034c;
		}
	}
	{
		goto IL_0388;
	}

IL_021f:
	{
		String_t* L_51 = V_1;
		bool L_52;
		L_52 = String_op_Equality_m50B3548E4AC232558190B0052877B290AA1D436A((String_t*)L_51, (String_t*)_stringLiteralA967787586EC9E5A17A9C55E2002AB73A5E21A0A, /*hidden argument*/NULL);
		if (L_52)
		{
			goto IL_0360;
		}
	}
	{
		goto IL_0388;
	}

IL_0234:
	{
		String_t* L_53 = V_1;
		bool L_54;
		L_54 = String_op_Equality_m50B3548E4AC232558190B0052877B290AA1D436A((String_t*)L_53, (String_t*)_stringLiteral47C47DD09640803AD8016748EAE1F04DD1D41119, /*hidden argument*/NULL);
		if (L_54)
		{
			goto IL_0374;
		}
	}
	{
		goto IL_0388;
	}

IL_0249:
	{
		// instance.enabled = reader.Read<System.Boolean>(ES3Type_bool.Instance);
		ES3Reader_t2780AF8AA61DA2A817115CEF8612AC0E494D03C9 * L_55 = ___reader0;
		IL2CPP_RUNTIME_CLASS_INIT(ES3Type_bool_t8F309F7B9CC735FF1DEE68081B6E3CAB367745F4_il2cpp_TypeInfo_var);
		ES3Type_t8FBECB7AE75168648B9524E0C2A38DAD4555421D * L_56 = ((ES3Type_bool_t8F309F7B9CC735FF1DEE68081B6E3CAB367745F4_StaticFields*)il2cpp_codegen_static_fields_for(ES3Type_bool_t8F309F7B9CC735FF1DEE68081B6E3CAB367745F4_il2cpp_TypeInfo_var))->get_Instance_12();
		NullCheck((ES3Reader_t2780AF8AA61DA2A817115CEF8612AC0E494D03C9 *)L_55);
		bool L_57;
		L_57 = GenericVirtFuncInvoker1< bool, ES3Type_t8FBECB7AE75168648B9524E0C2A38DAD4555421D * >::Invoke(ES3Reader_Read_TisBoolean_t07D1E3F34E4813023D64F584DFF7B34C9D922F37_mC6D1B158268FF9B97822FF9F5B37FB1723FEDA22_RuntimeMethod_var, (ES3Reader_t2780AF8AA61DA2A817115CEF8612AC0E494D03C9 *)L_55, (ES3Type_t8FBECB7AE75168648B9524E0C2A38DAD4555421D *)L_56);
		TrailModule_set_enabled_mFC8451DDDF40CCBB3E32A4B30A001115F6346894((TrailModule_t95D15372971E64A1977B7587ABAA87B1A31EF5C8 *)(TrailModule_t95D15372971E64A1977B7587ABAA87B1A31EF5C8 *)(&V_0), (bool)L_57, /*hidden argument*/NULL);
		// break;
		goto IL_038e;
	}

IL_0260:
	{
		// instance.ratio = reader.Read<System.Single>(ES3Type_float.Instance);
		ES3Reader_t2780AF8AA61DA2A817115CEF8612AC0E494D03C9 * L_58 = ___reader0;
		IL2CPP_RUNTIME_CLASS_INIT(ES3Type_float_tF86B773C86731BD9AD79448B860BBB178FE77644_il2cpp_TypeInfo_var);
		ES3Type_t8FBECB7AE75168648B9524E0C2A38DAD4555421D * L_59 = ((ES3Type_float_tF86B773C86731BD9AD79448B860BBB178FE77644_StaticFields*)il2cpp_codegen_static_fields_for(ES3Type_float_tF86B773C86731BD9AD79448B860BBB178FE77644_il2cpp_TypeInfo_var))->get_Instance_12();
		NullCheck((ES3Reader_t2780AF8AA61DA2A817115CEF8612AC0E494D03C9 *)L_58);
		float L_60;
		L_60 = GenericVirtFuncInvoker1< float, ES3Type_t8FBECB7AE75168648B9524E0C2A38DAD4555421D * >::Invoke(ES3Reader_Read_TisSingle_tE07797BA3C98D4CA9B5A19413C19A76688AB899E_m4A0416374498BDA042B8EB21E49B72326D6CE5F4_RuntimeMethod_var, (ES3Reader_t2780AF8AA61DA2A817115CEF8612AC0E494D03C9 *)L_58, (ES3Type_t8FBECB7AE75168648B9524E0C2A38DAD4555421D *)L_59);
		TrailModule_set_ratio_m34E63B34E7B0E8D037AD45532B2E2D5BD0750189((TrailModule_t95D15372971E64A1977B7587ABAA87B1A31EF5C8 *)(TrailModule_t95D15372971E64A1977B7587ABAA87B1A31EF5C8 *)(&V_0), (float)L_60, /*hidden argument*/NULL);
		// break;
		goto IL_038e;
	}

IL_0277:
	{
		// instance.lifetime = reader.Read<UnityEngine.ParticleSystem.MinMaxCurve>(ES3Type_MinMaxCurve.Instance);
		ES3Reader_t2780AF8AA61DA2A817115CEF8612AC0E494D03C9 * L_61 = ___reader0;
		IL2CPP_RUNTIME_CLASS_INIT(ES3Type_MinMaxCurve_tC5342BF0F8735B85CB5E16FDD4C6FACC8AFAD3B7_il2cpp_TypeInfo_var);
		ES3Type_t8FBECB7AE75168648B9524E0C2A38DAD4555421D * L_62 = ((ES3Type_MinMaxCurve_tC5342BF0F8735B85CB5E16FDD4C6FACC8AFAD3B7_StaticFields*)il2cpp_codegen_static_fields_for(ES3Type_MinMaxCurve_tC5342BF0F8735B85CB5E16FDD4C6FACC8AFAD3B7_il2cpp_TypeInfo_var))->get_Instance_12();
		NullCheck((ES3Reader_t2780AF8AA61DA2A817115CEF8612AC0E494D03C9 *)L_61);
		MinMaxCurve_tF036239442AB2D438B1EDABEBC785426871084CD  L_63;
		L_63 = GenericVirtFuncInvoker1< MinMaxCurve_tF036239442AB2D438B1EDABEBC785426871084CD , ES3Type_t8FBECB7AE75168648B9524E0C2A38DAD4555421D * >::Invoke(ES3Reader_Read_TisMinMaxCurve_tF036239442AB2D438B1EDABEBC785426871084CD_mD285150CBFB52440643BBECB5ADF4EE8DE940535_RuntimeMethod_var, (ES3Reader_t2780AF8AA61DA2A817115CEF8612AC0E494D03C9 *)L_61, (ES3Type_t8FBECB7AE75168648B9524E0C2A38DAD4555421D *)L_62);
		TrailModule_set_lifetime_m57C898C42B9F18F5A0E88AAA7B10276CC158C39D((TrailModule_t95D15372971E64A1977B7587ABAA87B1A31EF5C8 *)(TrailModule_t95D15372971E64A1977B7587ABAA87B1A31EF5C8 *)(&V_0), (MinMaxCurve_tF036239442AB2D438B1EDABEBC785426871084CD )L_63, /*hidden argument*/NULL);
		// break;
		goto IL_038e;
	}

IL_028e:
	{
		// instance.lifetimeMultiplier = reader.Read<System.Single>(ES3Type_float.Instance);
		ES3Reader_t2780AF8AA61DA2A817115CEF8612AC0E494D03C9 * L_64 = ___reader0;
		IL2CPP_RUNTIME_CLASS_INIT(ES3Type_float_tF86B773C86731BD9AD79448B860BBB178FE77644_il2cpp_TypeInfo_var);
		ES3Type_t8FBECB7AE75168648B9524E0C2A38DAD4555421D * L_65 = ((ES3Type_float_tF86B773C86731BD9AD79448B860BBB178FE77644_StaticFields*)il2cpp_codegen_static_fields_for(ES3Type_float_tF86B773C86731BD9AD79448B860BBB178FE77644_il2cpp_TypeInfo_var))->get_Instance_12();
		NullCheck((ES3Reader_t2780AF8AA61DA2A817115CEF8612AC0E494D03C9 *)L_64);
		float L_66;
		L_66 = GenericVirtFuncInvoker1< float, ES3Type_t8FBECB7AE75168648B9524E0C2A38DAD4555421D * >::Invoke(ES3Reader_Read_TisSingle_tE07797BA3C98D4CA9B5A19413C19A76688AB899E_m4A0416374498BDA042B8EB21E49B72326D6CE5F4_RuntimeMethod_var, (ES3Reader_t2780AF8AA61DA2A817115CEF8612AC0E494D03C9 *)L_64, (ES3Type_t8FBECB7AE75168648B9524E0C2A38DAD4555421D *)L_65);
		TrailModule_set_lifetimeMultiplier_m23F95D65EE8C82152AE1CF2E41531EC2789A866B((TrailModule_t95D15372971E64A1977B7587ABAA87B1A31EF5C8 *)(TrailModule_t95D15372971E64A1977B7587ABAA87B1A31EF5C8 *)(&V_0), (float)L_66, /*hidden argument*/NULL);
		// break;
		goto IL_038e;
	}

IL_02a5:
	{
		// instance.minVertexDistance = reader.Read<System.Single>(ES3Type_float.Instance);
		ES3Reader_t2780AF8AA61DA2A817115CEF8612AC0E494D03C9 * L_67 = ___reader0;
		IL2CPP_RUNTIME_CLASS_INIT(ES3Type_float_tF86B773C86731BD9AD79448B860BBB178FE77644_il2cpp_TypeInfo_var);
		ES3Type_t8FBECB7AE75168648B9524E0C2A38DAD4555421D * L_68 = ((ES3Type_float_tF86B773C86731BD9AD79448B860BBB178FE77644_StaticFields*)il2cpp_codegen_static_fields_for(ES3Type_float_tF86B773C86731BD9AD79448B860BBB178FE77644_il2cpp_TypeInfo_var))->get_Instance_12();
		NullCheck((ES3Reader_t2780AF8AA61DA2A817115CEF8612AC0E494D03C9 *)L_67);
		float L_69;
		L_69 = GenericVirtFuncInvoker1< float, ES3Type_t8FBECB7AE75168648B9524E0C2A38DAD4555421D * >::Invoke(ES3Reader_Read_TisSingle_tE07797BA3C98D4CA9B5A19413C19A76688AB899E_m4A0416374498BDA042B8EB21E49B72326D6CE5F4_RuntimeMethod_var, (ES3Reader_t2780AF8AA61DA2A817115CEF8612AC0E494D03C9 *)L_67, (ES3Type_t8FBECB7AE75168648B9524E0C2A38DAD4555421D *)L_68);
		TrailModule_set_minVertexDistance_mF7C29F88FBF540CE4987F4CF9B141C624808FBC5((TrailModule_t95D15372971E64A1977B7587ABAA87B1A31EF5C8 *)(TrailModule_t95D15372971E64A1977B7587ABAA87B1A31EF5C8 *)(&V_0), (float)L_69, /*hidden argument*/NULL);
		// break;
		goto IL_038e;
	}

IL_02bc:
	{
		// instance.textureMode = reader.Read<UnityEngine.ParticleSystemTrailTextureMode>();
		ES3Reader_t2780AF8AA61DA2A817115CEF8612AC0E494D03C9 * L_70 = ___reader0;
		NullCheck((ES3Reader_t2780AF8AA61DA2A817115CEF8612AC0E494D03C9 *)L_70);
		int32_t L_71;
		L_71 = GenericVirtFuncInvoker0< int32_t >::Invoke(ES3Reader_Read_TisParticleSystemTrailTextureMode_tF3259187CA4D0A61EDB3A40E63CBF6C42641CE9F_m055DB1212E8BC34F385DF7D302F16241554E9730_RuntimeMethod_var, (ES3Reader_t2780AF8AA61DA2A817115CEF8612AC0E494D03C9 *)L_70);
		TrailModule_set_textureMode_mC1F8AE0D2965FC47BDBFF4F53E0673D5FB58CF28((TrailModule_t95D15372971E64A1977B7587ABAA87B1A31EF5C8 *)(TrailModule_t95D15372971E64A1977B7587ABAA87B1A31EF5C8 *)(&V_0), (int32_t)L_71, /*hidden argument*/NULL);
		// break;
		goto IL_038e;
	}

IL_02ce:
	{
		// instance.worldSpace = reader.Read<System.Boolean>(ES3Type_bool.Instance);
		ES3Reader_t2780AF8AA61DA2A817115CEF8612AC0E494D03C9 * L_72 = ___reader0;
		IL2CPP_RUNTIME_CLASS_INIT(ES3Type_bool_t8F309F7B9CC735FF1DEE68081B6E3CAB367745F4_il2cpp_TypeInfo_var);
		ES3Type_t8FBECB7AE75168648B9524E0C2A38DAD4555421D * L_73 = ((ES3Type_bool_t8F309F7B9CC735FF1DEE68081B6E3CAB367745F4_StaticFields*)il2cpp_codegen_static_fields_for(ES3Type_bool_t8F309F7B9CC735FF1DEE68081B6E3CAB367745F4_il2cpp_TypeInfo_var))->get_Instance_12();
		NullCheck((ES3Reader_t2780AF8AA61DA2A817115CEF8612AC0E494D03C9 *)L_72);
		bool L_74;
		L_74 = GenericVirtFuncInvoker1< bool, ES3Type_t8FBECB7AE75168648B9524E0C2A38DAD4555421D * >::Invoke(ES3Reader_Read_TisBoolean_t07D1E3F34E4813023D64F584DFF7B34C9D922F37_mC6D1B158268FF9B97822FF9F5B37FB1723FEDA22_RuntimeMethod_var, (ES3Reader_t2780AF8AA61DA2A817115CEF8612AC0E494D03C9 *)L_72, (ES3Type_t8FBECB7AE75168648B9524E0C2A38DAD4555421D *)L_73);
		TrailModule_set_worldSpace_m42A63AF4A96F24A621A29A0F35240195F0E56B1A((TrailModule_t95D15372971E64A1977B7587ABAA87B1A31EF5C8 *)(TrailModule_t95D15372971E64A1977B7587ABAA87B1A31EF5C8 *)(&V_0), (bool)L_74, /*hidden argument*/NULL);
		// break;
		goto IL_038e;
	}

IL_02e5:
	{
		// instance.dieWithParticles = reader.Read<System.Boolean>(ES3Type_bool.Instance);
		ES3Reader_t2780AF8AA61DA2A817115CEF8612AC0E494D03C9 * L_75 = ___reader0;
		IL2CPP_RUNTIME_CLASS_INIT(ES3Type_bool_t8F309F7B9CC735FF1DEE68081B6E3CAB367745F4_il2cpp_TypeInfo_var);
		ES3Type_t8FBECB7AE75168648B9524E0C2A38DAD4555421D * L_76 = ((ES3Type_bool_t8F309F7B9CC735FF1DEE68081B6E3CAB367745F4_StaticFields*)il2cpp_codegen_static_fields_for(ES3Type_bool_t8F309F7B9CC735FF1DEE68081B6E3CAB367745F4_il2cpp_TypeInfo_var))->get_Instance_12();
		NullCheck((ES3Reader_t2780AF8AA61DA2A817115CEF8612AC0E494D03C9 *)L_75);
		bool L_77;
		L_77 = GenericVirtFuncInvoker1< bool, ES3Type_t8FBECB7AE75168648B9524E0C2A38DAD4555421D * >::Invoke(ES3Reader_Read_TisBoolean_t07D1E3F34E4813023D64F584DFF7B34C9D922F37_mC6D1B158268FF9B97822FF9F5B37FB1723FEDA22_RuntimeMethod_var, (ES3Reader_t2780AF8AA61DA2A817115CEF8612AC0E494D03C9 *)L_75, (ES3Type_t8FBECB7AE75168648B9524E0C2A38DAD4555421D *)L_76);
		TrailModule_set_dieWithParticles_mB7C4E8DC2F908FDF6D57A77B54B821E360D8DA99((TrailModule_t95D15372971E64A1977B7587ABAA87B1A31EF5C8 *)(TrailModule_t95D15372971E64A1977B7587ABAA87B1A31EF5C8 *)(&V_0), (bool)L_77, /*hidden argument*/NULL);
		// break;
		goto IL_038e;
	}

IL_02fc:
	{
		// instance.sizeAffectsWidth = reader.Read<System.Boolean>(ES3Type_bool.Instance);
		ES3Reader_t2780AF8AA61DA2A817115CEF8612AC0E494D03C9 * L_78 = ___reader0;
		IL2CPP_RUNTIME_CLASS_INIT(ES3Type_bool_t8F309F7B9CC735FF1DEE68081B6E3CAB367745F4_il2cpp_TypeInfo_var);
		ES3Type_t8FBECB7AE75168648B9524E0C2A38DAD4555421D * L_79 = ((ES3Type_bool_t8F309F7B9CC735FF1DEE68081B6E3CAB367745F4_StaticFields*)il2cpp_codegen_static_fields_for(ES3Type_bool_t8F309F7B9CC735FF1DEE68081B6E3CAB367745F4_il2cpp_TypeInfo_var))->get_Instance_12();
		NullCheck((ES3Reader_t2780AF8AA61DA2A817115CEF8612AC0E494D03C9 *)L_78);
		bool L_80;
		L_80 = GenericVirtFuncInvoker1< bool, ES3Type_t8FBECB7AE75168648B9524E0C2A38DAD4555421D * >::Invoke(ES3Reader_Read_TisBoolean_t07D1E3F34E4813023D64F584DFF7B34C9D922F37_mC6D1B158268FF9B97822FF9F5B37FB1723FEDA22_RuntimeMethod_var, (ES3Reader_t2780AF8AA61DA2A817115CEF8612AC0E494D03C9 *)L_78, (ES3Type_t8FBECB7AE75168648B9524E0C2A38DAD4555421D *)L_79);
		TrailModule_set_sizeAffectsWidth_m3517856E39080DA69B447499C8846D2491B0ABF0((TrailModule_t95D15372971E64A1977B7587ABAA87B1A31EF5C8 *)(TrailModule_t95D15372971E64A1977B7587ABAA87B1A31EF5C8 *)(&V_0), (bool)L_80, /*hidden argument*/NULL);
		// break;
		goto IL_038e;
	}

IL_0310:
	{
		// instance.sizeAffectsLifetime = reader.Read<System.Boolean>(ES3Type_bool.Instance);
		ES3Reader_t2780AF8AA61DA2A817115CEF8612AC0E494D03C9 * L_81 = ___reader0;
		IL2CPP_RUNTIME_CLASS_INIT(ES3Type_bool_t8F309F7B9CC735FF1DEE68081B6E3CAB367745F4_il2cpp_TypeInfo_var);
		ES3Type_t8FBECB7AE75168648B9524E0C2A38DAD4555421D * L_82 = ((ES3Type_bool_t8F309F7B9CC735FF1DEE68081B6E3CAB367745F4_StaticFields*)il2cpp_codegen_static_fields_for(ES3Type_bool_t8F309F7B9CC735FF1DEE68081B6E3CAB367745F4_il2cpp_TypeInfo_var))->get_Instance_12();
		NullCheck((ES3Reader_t2780AF8AA61DA2A817115CEF8612AC0E494D03C9 *)L_81);
		bool L_83;
		L_83 = GenericVirtFuncInvoker1< bool, ES3Type_t8FBECB7AE75168648B9524E0C2A38DAD4555421D * >::Invoke(ES3Reader_Read_TisBoolean_t07D1E3F34E4813023D64F584DFF7B34C9D922F37_mC6D1B158268FF9B97822FF9F5B37FB1723FEDA22_RuntimeMethod_var, (ES3Reader_t2780AF8AA61DA2A817115CEF8612AC0E494D03C9 *)L_81, (ES3Type_t8FBECB7AE75168648B9524E0C2A38DAD4555421D *)L_82);
		TrailModule_set_sizeAffectsLifetime_m98BF4A6594193D824B52D88371CF963ACBA388FD((TrailModule_t95D15372971E64A1977B7587ABAA87B1A31EF5C8 *)(TrailModule_t95D15372971E64A1977B7587ABAA87B1A31EF5C8 *)(&V_0), (bool)L_83, /*hidden argument*/NULL);
		// break;
		goto IL_038e;
	}

IL_0324:
	{
		// instance.inheritParticleColor = reader.Read<System.Boolean>(ES3Type_bool.Instance);
		ES3Reader_t2780AF8AA61DA2A817115CEF8612AC0E494D03C9 * L_84 = ___reader0;
		IL2CPP_RUNTIME_CLASS_INIT(ES3Type_bool_t8F309F7B9CC735FF1DEE68081B6E3CAB367745F4_il2cpp_TypeInfo_var);
		ES3Type_t8FBECB7AE75168648B9524E0C2A38DAD4555421D * L_85 = ((ES3Type_bool_t8F309F7B9CC735FF1DEE68081B6E3CAB367745F4_StaticFields*)il2cpp_codegen_static_fields_for(ES3Type_bool_t8F309F7B9CC735FF1DEE68081B6E3CAB367745F4_il2cpp_TypeInfo_var))->get_Instance_12();
		NullCheck((ES3Reader_t2780AF8AA61DA2A817115CEF8612AC0E494D03C9 *)L_84);
		bool L_86;
		L_86 = GenericVirtFuncInvoker1< bool, ES3Type_t8FBECB7AE75168648B9524E0C2A38DAD4555421D * >::Invoke(ES3Reader_Read_TisBoolean_t07D1E3F34E4813023D64F584DFF7B34C9D922F37_mC6D1B158268FF9B97822FF9F5B37FB1723FEDA22_RuntimeMethod_var, (ES3Reader_t2780AF8AA61DA2A817115CEF8612AC0E494D03C9 *)L_84, (ES3Type_t8FBECB7AE75168648B9524E0C2A38DAD4555421D *)L_85);
		TrailModule_set_inheritParticleColor_mCD83E87B5E00F2BFFBE08AD2D1D68606283A4FEE((TrailModule_t95D15372971E64A1977B7587ABAA87B1A31EF5C8 *)(TrailModule_t95D15372971E64A1977B7587ABAA87B1A31EF5C8 *)(&V_0), (bool)L_86, /*hidden argument*/NULL);
		// break;
		goto IL_038e;
	}

IL_0338:
	{
		// instance.colorOverLifetime = reader.Read<UnityEngine.ParticleSystem.MinMaxGradient>(ES3Type_MinMaxGradient.Instance);
		ES3Reader_t2780AF8AA61DA2A817115CEF8612AC0E494D03C9 * L_87 = ___reader0;
		IL2CPP_RUNTIME_CLASS_INIT(ES3Type_MinMaxGradient_t5DD353D60E95642AB39D1C97C6FD6DD1B067D3CF_il2cpp_TypeInfo_var);
		ES3Type_t8FBECB7AE75168648B9524E0C2A38DAD4555421D * L_88 = ((ES3Type_MinMaxGradient_t5DD353D60E95642AB39D1C97C6FD6DD1B067D3CF_StaticFields*)il2cpp_codegen_static_fields_for(ES3Type_MinMaxGradient_t5DD353D60E95642AB39D1C97C6FD6DD1B067D3CF_il2cpp_TypeInfo_var))->get_Instance_12();
		NullCheck((ES3Reader_t2780AF8AA61DA2A817115CEF8612AC0E494D03C9 *)L_87);
		MinMaxGradient_tF4530B26F29D9635D670A33B9EE581EAC48C12B7  L_89;
		L_89 = GenericVirtFuncInvoker1< MinMaxGradient_tF4530B26F29D9635D670A33B9EE581EAC48C12B7 , ES3Type_t8FBECB7AE75168648B9524E0C2A38DAD4555421D * >::Invoke(ES3Reader_Read_TisMinMaxGradient_tF4530B26F29D9635D670A33B9EE581EAC48C12B7_m6A3DD8CBBAC5D32B838B6C4399009AB8AA512ACC_RuntimeMethod_var, (ES3Reader_t2780AF8AA61DA2A817115CEF8612AC0E494D03C9 *)L_87, (ES3Type_t8FBECB7AE75168648B9524E0C2A38DAD4555421D *)L_88);
		TrailModule_set_colorOverLifetime_mCD56BD4B75D3A3947069BA1B93FEC78AAE08DF27((TrailModule_t95D15372971E64A1977B7587ABAA87B1A31EF5C8 *)(TrailModule_t95D15372971E64A1977B7587ABAA87B1A31EF5C8 *)(&V_0), (MinMaxGradient_tF4530B26F29D9635D670A33B9EE581EAC48C12B7 )L_89, /*hidden argument*/NULL);
		// break;
		goto IL_038e;
	}

IL_034c:
	{
		// instance.widthOverTrail = reader.Read<UnityEngine.ParticleSystem.MinMaxCurve>(ES3Type_MinMaxCurve.Instance);
		ES3Reader_t2780AF8AA61DA2A817115CEF8612AC0E494D03C9 * L_90 = ___reader0;
		IL2CPP_RUNTIME_CLASS_INIT(ES3Type_MinMaxCurve_tC5342BF0F8735B85CB5E16FDD4C6FACC8AFAD3B7_il2cpp_TypeInfo_var);
		ES3Type_t8FBECB7AE75168648B9524E0C2A38DAD4555421D * L_91 = ((ES3Type_MinMaxCurve_tC5342BF0F8735B85CB5E16FDD4C6FACC8AFAD3B7_StaticFields*)il2cpp_codegen_static_fields_for(ES3Type_MinMaxCurve_tC5342BF0F8735B85CB5E16FDD4C6FACC8AFAD3B7_il2cpp_TypeInfo_var))->get_Instance_12();
		NullCheck((ES3Reader_t2780AF8AA61DA2A817115CEF8612AC0E494D03C9 *)L_90);
		MinMaxCurve_tF036239442AB2D438B1EDABEBC785426871084CD  L_92;
		L_92 = GenericVirtFuncInvoker1< MinMaxCurve_tF036239442AB2D438B1EDABEBC785426871084CD , ES3Type_t8FBECB7AE75168648B9524E0C2A38DAD4555421D * >::Invoke(ES3Reader_Read_TisMinMaxCurve_tF036239442AB2D438B1EDABEBC785426871084CD_mD285150CBFB52440643BBECB5ADF4EE8DE940535_RuntimeMethod_var, (ES3Reader_t2780AF8AA61DA2A817115CEF8612AC0E494D03C9 *)L_90, (ES3Type_t8FBECB7AE75168648B9524E0C2A38DAD4555421D *)L_91);
		TrailModule_set_widthOverTrail_m6C0A896EBFDED7CE46344B3A0B04212934F30DE1((TrailModule_t95D15372971E64A1977B7587ABAA87B1A31EF5C8 *)(TrailModule_t95D15372971E64A1977B7587ABAA87B1A31EF5C8 *)(&V_0), (MinMaxCurve_tF036239442AB2D438B1EDABEBC785426871084CD )L_92, /*hidden argument*/NULL);
		// break;
		goto IL_038e;
	}

IL_0360:
	{
		// instance.widthOverTrailMultiplier = reader.Read<System.Single>(ES3Type_float.Instance);
		ES3Reader_t2780AF8AA61DA2A817115CEF8612AC0E494D03C9 * L_93 = ___reader0;
		IL2CPP_RUNTIME_CLASS_INIT(ES3Type_float_tF86B773C86731BD9AD79448B860BBB178FE77644_il2cpp_TypeInfo_var);
		ES3Type_t8FBECB7AE75168648B9524E0C2A38DAD4555421D * L_94 = ((ES3Type_float_tF86B773C86731BD9AD79448B860BBB178FE77644_StaticFields*)il2cpp_codegen_static_fields_for(ES3Type_float_tF86B773C86731BD9AD79448B860BBB178FE77644_il2cpp_TypeInfo_var))->get_Instance_12();
		NullCheck((ES3Reader_t2780AF8AA61DA2A817115CEF8612AC0E494D03C9 *)L_93);
		float L_95;
		L_95 = GenericVirtFuncInvoker1< float, ES3Type_t8FBECB7AE75168648B9524E0C2A38DAD4555421D * >::Invoke(ES3Reader_Read_TisSingle_tE07797BA3C98D4CA9B5A19413C19A76688AB899E_m4A0416374498BDA042B8EB21E49B72326D6CE5F4_RuntimeMethod_var, (ES3Reader_t2780AF8AA61DA2A817115CEF8612AC0E494D03C9 *)L_93, (ES3Type_t8FBECB7AE75168648B9524E0C2A38DAD4555421D *)L_94);
		TrailModule_set_widthOverTrailMultiplier_m6A7EA2856CF30B710CCB528EA3EBFD1799C19BD4((TrailModule_t95D15372971E64A1977B7587ABAA87B1A31EF5C8 *)(TrailModule_t95D15372971E64A1977B7587ABAA87B1A31EF5C8 *)(&V_0), (float)L_95, /*hidden argument*/NULL);
		// break;
		goto IL_038e;
	}

IL_0374:
	{
		// instance.colorOverTrail = reader.Read<UnityEngine.ParticleSystem.MinMaxGradient>(ES3Type_MinMaxGradient.Instance);
		ES3Reader_t2780AF8AA61DA2A817115CEF8612AC0E494D03C9 * L_96 = ___reader0;
		IL2CPP_RUNTIME_CLASS_INIT(ES3Type_MinMaxGradient_t5DD353D60E95642AB39D1C97C6FD6DD1B067D3CF_il2cpp_TypeInfo_var);
		ES3Type_t8FBECB7AE75168648B9524E0C2A38DAD4555421D * L_97 = ((ES3Type_MinMaxGradient_t5DD353D60E95642AB39D1C97C6FD6DD1B067D3CF_StaticFields*)il2cpp_codegen_static_fields_for(ES3Type_MinMaxGradient_t5DD353D60E95642AB39D1C97C6FD6DD1B067D3CF_il2cpp_TypeInfo_var))->get_Instance_12();
		NullCheck((ES3Reader_t2780AF8AA61DA2A817115CEF8612AC0E494D03C9 *)L_96);
		MinMaxGradient_tF4530B26F29D9635D670A33B9EE581EAC48C12B7  L_98;
		L_98 = GenericVirtFuncInvoker1< MinMaxGradient_tF4530B26F29D9635D670A33B9EE581EAC48C12B7 , ES3Type_t8FBECB7AE75168648B9524E0C2A38DAD4555421D * >::Invoke(ES3Reader_Read_TisMinMaxGradient_tF4530B26F29D9635D670A33B9EE581EAC48C12B7_m6A3DD8CBBAC5D32B838B6C4399009AB8AA512ACC_RuntimeMethod_var, (ES3Reader_t2780AF8AA61DA2A817115CEF8612AC0E494D03C9 *)L_96, (ES3Type_t8FBECB7AE75168648B9524E0C2A38DAD4555421D *)L_97);
		TrailModule_set_colorOverTrail_m8440C6574C8310292B93D70EA4FE3EE8C40DF8DB((TrailModule_t95D15372971E64A1977B7587ABAA87B1A31EF5C8 *)(TrailModule_t95D15372971E64A1977B7587ABAA87B1A31EF5C8 *)(&V_0), (MinMaxGradient_tF4530B26F29D9635D670A33B9EE581EAC48C12B7 )L_98, /*hidden argument*/NULL);
		// break;
		goto IL_038e;
	}

IL_0388:
	{
		// reader.Skip();
		ES3Reader_t2780AF8AA61DA2A817115CEF8612AC0E494D03C9 * L_99 = ___reader0;
		NullCheck((ES3Reader_t2780AF8AA61DA2A817115CEF8612AC0E494D03C9 *)L_99);
		VirtActionInvoker0::Invoke(41 /* System.Void ES3Reader::Skip() */, (ES3Reader_t2780AF8AA61DA2A817115CEF8612AC0E494D03C9 *)L_99);
	}

IL_038e:
	{
		// while((propertyName = reader.ReadPropertyName()) != null)
		ES3Reader_t2780AF8AA61DA2A817115CEF8612AC0E494D03C9 * L_100 = ___reader0;
		NullCheck((ES3Reader_t2780AF8AA61DA2A817115CEF8612AC0E494D03C9 *)L_100);
		String_t* L_101;
		L_101 = VirtFuncInvoker0< String_t* >::Invoke(21 /* System.String ES3Reader::ReadPropertyName() */, (ES3Reader_t2780AF8AA61DA2A817115CEF8612AC0E494D03C9 *)L_100);
		String_t* L_102 = (String_t*)L_101;
		V_1 = (String_t*)L_102;
		if (L_102)
		{
			goto IL_000c;
		}
	}
	{
		// }
		return;
	}
}
// System.Void ES3Types.ES3Type_TrailModule::ReadInto<UnityEngine.ParticleSystem/MinMaxCurve>(ES3Reader,System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ES3Type_TrailModule_ReadInto_TisMinMaxCurve_tF036239442AB2D438B1EDABEBC785426871084CD_m3DE48F37D092B8E8C63F366AE28AE17729B1136D_gshared (ES3Type_TrailModule_tC773F73EC0443516DD128FF2B5AE010809742462 * __this, ES3Reader_t2780AF8AA61DA2A817115CEF8612AC0E494D03C9 * ___reader0, RuntimeObject * ___obj1, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ES3Reader_Read_TisBoolean_t07D1E3F34E4813023D64F584DFF7B34C9D922F37_mC6D1B158268FF9B97822FF9F5B37FB1723FEDA22_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ES3Reader_Read_TisMinMaxCurve_tF036239442AB2D438B1EDABEBC785426871084CD_mD285150CBFB52440643BBECB5ADF4EE8DE940535_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ES3Reader_Read_TisMinMaxGradient_tF4530B26F29D9635D670A33B9EE581EAC48C12B7_m6A3DD8CBBAC5D32B838B6C4399009AB8AA512ACC_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ES3Reader_Read_TisParticleSystemTrailTextureMode_tF3259187CA4D0A61EDB3A40E63CBF6C42641CE9F_m055DB1212E8BC34F385DF7D302F16241554E9730_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ES3Reader_Read_TisSingle_tE07797BA3C98D4CA9B5A19413C19A76688AB899E_m4A0416374498BDA042B8EB21E49B72326D6CE5F4_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ES3Type_MinMaxCurve_tC5342BF0F8735B85CB5E16FDD4C6FACC8AFAD3B7_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ES3Type_MinMaxGradient_t5DD353D60E95642AB39D1C97C6FD6DD1B067D3CF_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ES3Type_bool_t8F309F7B9CC735FF1DEE68081B6E3CAB367745F4_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ES3Type_float_tF86B773C86731BD9AD79448B860BBB178FE77644_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&TrailModule_t95D15372971E64A1977B7587ABAA87B1A31EF5C8_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral1D87A56AE67B2CD49CAE6E942C2FB7AD98925C00);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral354281948B6269615E32D856CF85B6F456724DAA);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral4221314F268D184F46688D45C85446821F1F1BC3);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral47C47DD09640803AD8016748EAE1F04DD1D41119);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral5C86338F177203D001C41D9C348A83D1338CC7D0);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral60126327537B7B8E6EE33C43FE0C5CA8BCC3A06A);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral87F70660D62DE5FC257FBADE9DA4EC9188597DE5);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralA967787586EC9E5A17A9C55E2002AB73A5E21A0A);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralADAEB0839588196B349BDB6CF33AFA3E0736360B);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralBE2893848F9FC647C2288DA6581A1522E9695182);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralBF540D6548854CC21630064FBA5390C9409C86F0);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralC580B374AA991574F91DFC86C068E7FAD661A3A4);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralE049DB547285CFCE1CB9A95934B6B6DCE2D219EC);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralF9D225733E1D10F9344C755C4A9C0870CD1DE97B);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralFE5F89F63E2381500F62A7CBD6954563BE44562F);
		s_Il2CppMethodInitialized = true;
	}
	TrailModule_t95D15372971E64A1977B7587ABAA87B1A31EF5C8  V_0;
	memset((&V_0), 0, sizeof(V_0));
	String_t* V_1 = NULL;
	uint32_t V_2 = 0;
	{
		// var instance = (UnityEngine.ParticleSystem.TrailModule)obj;
		RuntimeObject * L_0 = ___obj1;
		V_0 = (TrailModule_t95D15372971E64A1977B7587ABAA87B1A31EF5C8 )((*(TrailModule_t95D15372971E64A1977B7587ABAA87B1A31EF5C8 *)((TrailModule_t95D15372971E64A1977B7587ABAA87B1A31EF5C8 *)UnBox(L_0, TrailModule_t95D15372971E64A1977B7587ABAA87B1A31EF5C8_il2cpp_TypeInfo_var))));
		goto IL_038e;
	}

IL_000c:
	{
		String_t* L_1 = V_1;
		if (!L_1)
		{
			goto IL_0388;
		}
	}
	{
		String_t* L_2 = V_1;
		uint32_t L_3;
		L_3 = U3CPrivateImplementationDetailsU3E_ComputeStringHash_m3ADC1F612F9EE3DD518E6F0023A0DE0EE2B120A7((String_t*)L_2, /*hidden argument*/NULL);
		V_2 = (uint32_t)L_3;
		uint32_t L_4 = V_2;
		if ((!(((uint32_t)L_4) <= ((uint32_t)((int32_t)1376955374)))))
		{
			goto IL_008d;
		}
	}
	{
		uint32_t L_5 = V_2;
		if ((!(((uint32_t)L_5) <= ((uint32_t)((int32_t)494095910)))))
		{
			goto IL_004f;
		}
	}
	{
		uint32_t L_6 = V_2;
		if ((((int32_t)L_6) == ((int32_t)((int32_t)49525662))))
		{
			goto IL_010e;
		}
	}
	{
		uint32_t L_7 = V_2;
		if ((((int32_t)L_7) == ((int32_t)((int32_t)341298456))))
		{
			goto IL_021f;
		}
	}
	{
		uint32_t L_8 = V_2;
		if ((((int32_t)L_8) == ((int32_t)((int32_t)494095910))))
		{
			goto IL_0234;
		}
	}
	{
		goto IL_0388;
	}

IL_004f:
	{
		uint32_t L_9 = V_2;
		if ((!(((uint32_t)L_9) <= ((uint32_t)((int32_t)973733911)))))
		{
			goto IL_0072;
		}
	}
	{
		uint32_t L_10 = V_2;
		if ((((int32_t)L_10) == ((int32_t)((int32_t)559929418))))
		{
			goto IL_01b6;
		}
	}
	{
		uint32_t L_11 = V_2;
		if ((((int32_t)L_11) == ((int32_t)((int32_t)973733911))))
		{
			goto IL_0177;
		}
	}
	{
		goto IL_0388;
	}

IL_0072:
	{
		uint32_t L_12 = V_2;
		if ((((int32_t)L_12) == ((int32_t)((int32_t)1024708593))))
		{
			goto IL_014d;
		}
	}
	{
		uint32_t L_13 = V_2;
		if ((((int32_t)L_13) == ((int32_t)((int32_t)1376955374))))
		{
			goto IL_0138;
		}
	}
	{
		goto IL_0388;
	}

IL_008d:
	{
		uint32_t L_14 = V_2;
		if ((!(((uint32_t)L_14) <= ((uint32_t)((int32_t)-2100707162)))))
		{
			goto IL_00d3;
		}
	}
	{
		uint32_t L_15 = V_2;
		if ((!(((uint32_t)L_15) <= ((uint32_t)((int32_t)1975189197)))))
		{
			goto IL_00b8;
		}
	}
	{
		uint32_t L_16 = V_2;
		if ((((int32_t)L_16) == ((int32_t)((int32_t)1546474083))))
		{
			goto IL_020a;
		}
	}
	{
		uint32_t L_17 = V_2;
		if ((((int32_t)L_17) == ((int32_t)((int32_t)1975189197))))
		{
			goto IL_01cb;
		}
	}
	{
		goto IL_0388;
	}

IL_00b8:
	{
		uint32_t L_18 = V_2;
		if ((((int32_t)L_18) == ((int32_t)((int32_t)2053023684))))
		{
			goto IL_01a1;
		}
	}
	{
		uint32_t L_19 = V_2;
		if ((((int32_t)L_19) == ((int32_t)((int32_t)-2100707162))))
		{
			goto IL_0162;
		}
	}
	{
		goto IL_0388;
	}

IL_00d3:
	{
		uint32_t L_20 = V_2;
		if ((!(((uint32_t)L_20) <= ((uint32_t)((int32_t)-1319579393)))))
		{
			goto IL_00f6;
		}
	}
	{
		uint32_t L_21 = V_2;
		if ((((int32_t)L_21) == ((int32_t)((int32_t)-1562862963))))
		{
			goto IL_01e0;
		}
	}
	{
		uint32_t L_22 = V_2;
		if ((((int32_t)L_22) == ((int32_t)((int32_t)-1319579393))))
		{
			goto IL_018c;
		}
	}
	{
		goto IL_0388;
	}

IL_00f6:
	{
		uint32_t L_23 = V_2;
		if ((((int32_t)L_23) == ((int32_t)((int32_t)-1055777148))))
		{
			goto IL_0123;
		}
	}
	{
		uint32_t L_24 = V_2;
		if ((((int32_t)L_24) == ((int32_t)((int32_t)-413379935))))
		{
			goto IL_01f5;
		}
	}
	{
		goto IL_0388;
	}

IL_010e:
	{
		String_t* L_25 = V_1;
		bool L_26;
		L_26 = String_op_Equality_m50B3548E4AC232558190B0052877B290AA1D436A((String_t*)L_25, (String_t*)_stringLiteralF9D225733E1D10F9344C755C4A9C0870CD1DE97B, /*hidden argument*/NULL);
		if (L_26)
		{
			goto IL_0249;
		}
	}
	{
		goto IL_0388;
	}

IL_0123:
	{
		String_t* L_27 = V_1;
		bool L_28;
		L_28 = String_op_Equality_m50B3548E4AC232558190B0052877B290AA1D436A((String_t*)L_27, (String_t*)_stringLiteral60126327537B7B8E6EE33C43FE0C5CA8BCC3A06A, /*hidden argument*/NULL);
		if (L_28)
		{
			goto IL_0260;
		}
	}
	{
		goto IL_0388;
	}

IL_0138:
	{
		String_t* L_29 = V_1;
		bool L_30;
		L_30 = String_op_Equality_m50B3548E4AC232558190B0052877B290AA1D436A((String_t*)L_29, (String_t*)_stringLiteralBE2893848F9FC647C2288DA6581A1522E9695182, /*hidden argument*/NULL);
		if (L_30)
		{
			goto IL_0277;
		}
	}
	{
		goto IL_0388;
	}

IL_014d:
	{
		String_t* L_31 = V_1;
		bool L_32;
		L_32 = String_op_Equality_m50B3548E4AC232558190B0052877B290AA1D436A((String_t*)L_31, (String_t*)_stringLiteral4221314F268D184F46688D45C85446821F1F1BC3, /*hidden argument*/NULL);
		if (L_32)
		{
			goto IL_028e;
		}
	}
	{
		goto IL_0388;
	}

IL_0162:
	{
		String_t* L_33 = V_1;
		bool L_34;
		L_34 = String_op_Equality_m50B3548E4AC232558190B0052877B290AA1D436A((String_t*)L_33, (String_t*)_stringLiteral5C86338F177203D001C41D9C348A83D1338CC7D0, /*hidden argument*/NULL);
		if (L_34)
		{
			goto IL_02a5;
		}
	}
	{
		goto IL_0388;
	}

IL_0177:
	{
		String_t* L_35 = V_1;
		bool L_36;
		L_36 = String_op_Equality_m50B3548E4AC232558190B0052877B290AA1D436A((String_t*)L_35, (String_t*)_stringLiteralFE5F89F63E2381500F62A7CBD6954563BE44562F, /*hidden argument*/NULL);
		if (L_36)
		{
			goto IL_02bc;
		}
	}
	{
		goto IL_0388;
	}

IL_018c:
	{
		String_t* L_37 = V_1;
		bool L_38;
		L_38 = String_op_Equality_m50B3548E4AC232558190B0052877B290AA1D436A((String_t*)L_37, (String_t*)_stringLiteral87F70660D62DE5FC257FBADE9DA4EC9188597DE5, /*hidden argument*/NULL);
		if (L_38)
		{
			goto IL_02ce;
		}
	}
	{
		goto IL_0388;
	}

IL_01a1:
	{
		String_t* L_39 = V_1;
		bool L_40;
		L_40 = String_op_Equality_m50B3548E4AC232558190B0052877B290AA1D436A((String_t*)L_39, (String_t*)_stringLiteral354281948B6269615E32D856CF85B6F456724DAA, /*hidden argument*/NULL);
		if (L_40)
		{
			goto IL_02e5;
		}
	}
	{
		goto IL_0388;
	}

IL_01b6:
	{
		String_t* L_41 = V_1;
		bool L_42;
		L_42 = String_op_Equality_m50B3548E4AC232558190B0052877B290AA1D436A((String_t*)L_41, (String_t*)_stringLiteralADAEB0839588196B349BDB6CF33AFA3E0736360B, /*hidden argument*/NULL);
		if (L_42)
		{
			goto IL_02fc;
		}
	}
	{
		goto IL_0388;
	}

IL_01cb:
	{
		String_t* L_43 = V_1;
		bool L_44;
		L_44 = String_op_Equality_m50B3548E4AC232558190B0052877B290AA1D436A((String_t*)L_43, (String_t*)_stringLiteralC580B374AA991574F91DFC86C068E7FAD661A3A4, /*hidden argument*/NULL);
		if (L_44)
		{
			goto IL_0310;
		}
	}
	{
		goto IL_0388;
	}

IL_01e0:
	{
		String_t* L_45 = V_1;
		bool L_46;
		L_46 = String_op_Equality_m50B3548E4AC232558190B0052877B290AA1D436A((String_t*)L_45, (String_t*)_stringLiteralE049DB547285CFCE1CB9A95934B6B6DCE2D219EC, /*hidden argument*/NULL);
		if (L_46)
		{
			goto IL_0324;
		}
	}
	{
		goto IL_0388;
	}

IL_01f5:
	{
		String_t* L_47 = V_1;
		bool L_48;
		L_48 = String_op_Equality_m50B3548E4AC232558190B0052877B290AA1D436A((String_t*)L_47, (String_t*)_stringLiteralBF540D6548854CC21630064FBA5390C9409C86F0, /*hidden argument*/NULL);
		if (L_48)
		{
			goto IL_0338;
		}
	}
	{
		goto IL_0388;
	}

IL_020a:
	{
		String_t* L_49 = V_1;
		bool L_50;
		L_50 = String_op_Equality_m50B3548E4AC232558190B0052877B290AA1D436A((String_t*)L_49, (String_t*)_stringLiteral1D87A56AE67B2CD49CAE6E942C2FB7AD98925C00, /*hidden argument*/NULL);
		if (L_50)
		{
			goto IL_034c;
		}
	}
	{
		goto IL_0388;
	}

IL_021f:
	{
		String_t* L_51 = V_1;
		bool L_52;
		L_52 = String_op_Equality_m50B3548E4AC232558190B0052877B290AA1D436A((String_t*)L_51, (String_t*)_stringLiteralA967787586EC9E5A17A9C55E2002AB73A5E21A0A, /*hidden argument*/NULL);
		if (L_52)
		{
			goto IL_0360;
		}
	}
	{
		goto IL_0388;
	}

IL_0234:
	{
		String_t* L_53 = V_1;
		bool L_54;
		L_54 = String_op_Equality_m50B3548E4AC232558190B0052877B290AA1D436A((String_t*)L_53, (String_t*)_stringLiteral47C47DD09640803AD8016748EAE1F04DD1D41119, /*hidden argument*/NULL);
		if (L_54)
		{
			goto IL_0374;
		}
	}
	{
		goto IL_0388;
	}

IL_0249:
	{
		// instance.enabled = reader.Read<System.Boolean>(ES3Type_bool.Instance);
		ES3Reader_t2780AF8AA61DA2A817115CEF8612AC0E494D03C9 * L_55 = ___reader0;
		IL2CPP_RUNTIME_CLASS_INIT(ES3Type_bool_t8F309F7B9CC735FF1DEE68081B6E3CAB367745F4_il2cpp_TypeInfo_var);
		ES3Type_t8FBECB7AE75168648B9524E0C2A38DAD4555421D * L_56 = ((ES3Type_bool_t8F309F7B9CC735FF1DEE68081B6E3CAB367745F4_StaticFields*)il2cpp_codegen_static_fields_for(ES3Type_bool_t8F309F7B9CC735FF1DEE68081B6E3CAB367745F4_il2cpp_TypeInfo_var))->get_Instance_12();
		NullCheck((ES3Reader_t2780AF8AA61DA2A817115CEF8612AC0E494D03C9 *)L_55);
		bool L_57;
		L_57 = GenericVirtFuncInvoker1< bool, ES3Type_t8FBECB7AE75168648B9524E0C2A38DAD4555421D * >::Invoke(ES3Reader_Read_TisBoolean_t07D1E3F34E4813023D64F584DFF7B34C9D922F37_mC6D1B158268FF9B97822FF9F5B37FB1723FEDA22_RuntimeMethod_var, (ES3Reader_t2780AF8AA61DA2A817115CEF8612AC0E494D03C9 *)L_55, (ES3Type_t8FBECB7AE75168648B9524E0C2A38DAD4555421D *)L_56);
		TrailModule_set_enabled_mFC8451DDDF40CCBB3E32A4B30A001115F6346894((TrailModule_t95D15372971E64A1977B7587ABAA87B1A31EF5C8 *)(TrailModule_t95D15372971E64A1977B7587ABAA87B1A31EF5C8 *)(&V_0), (bool)L_57, /*hidden argument*/NULL);
		// break;
		goto IL_038e;
	}

IL_0260:
	{
		// instance.ratio = reader.Read<System.Single>(ES3Type_float.Instance);
		ES3Reader_t2780AF8AA61DA2A817115CEF8612AC0E494D03C9 * L_58 = ___reader0;
		IL2CPP_RUNTIME_CLASS_INIT(ES3Type_float_tF86B773C86731BD9AD79448B860BBB178FE77644_il2cpp_TypeInfo_var);
		ES3Type_t8FBECB7AE75168648B9524E0C2A38DAD4555421D * L_59 = ((ES3Type_float_tF86B773C86731BD9AD79448B860BBB178FE77644_StaticFields*)il2cpp_codegen_static_fields_for(ES3Type_float_tF86B773C86731BD9AD79448B860BBB178FE77644_il2cpp_TypeInfo_var))->get_Instance_12();
		NullCheck((ES3Reader_t2780AF8AA61DA2A817115CEF8612AC0E494D03C9 *)L_58);
		float L_60;
		L_60 = GenericVirtFuncInvoker1< float, ES3Type_t8FBECB7AE75168648B9524E0C2A38DAD4555421D * >::Invoke(ES3Reader_Read_TisSingle_tE07797BA3C98D4CA9B5A19413C19A76688AB899E_m4A0416374498BDA042B8EB21E49B72326D6CE5F4_RuntimeMethod_var, (ES3Reader_t2780AF8AA61DA2A817115CEF8612AC0E494D03C9 *)L_58, (ES3Type_t8FBECB7AE75168648B9524E0C2A38DAD4555421D *)L_59);
		TrailModule_set_ratio_m34E63B34E7B0E8D037AD45532B2E2D5BD0750189((TrailModule_t95D15372971E64A1977B7587ABAA87B1A31EF5C8 *)(TrailModule_t95D15372971E64A1977B7587ABAA87B1A31EF5C8 *)(&V_0), (float)L_60, /*hidden argument*/NULL);
		// break;
		goto IL_038e;
	}

IL_0277:
	{
		// instance.lifetime = reader.Read<UnityEngine.ParticleSystem.MinMaxCurve>(ES3Type_MinMaxCurve.Instance);
		ES3Reader_t2780AF8AA61DA2A817115CEF8612AC0E494D03C9 * L_61 = ___reader0;
		IL2CPP_RUNTIME_CLASS_INIT(ES3Type_MinMaxCurve_tC5342BF0F8735B85CB5E16FDD4C6FACC8AFAD3B7_il2cpp_TypeInfo_var);
		ES3Type_t8FBECB7AE75168648B9524E0C2A38DAD4555421D * L_62 = ((ES3Type_MinMaxCurve_tC5342BF0F8735B85CB5E16FDD4C6FACC8AFAD3B7_StaticFields*)il2cpp_codegen_static_fields_for(ES3Type_MinMaxCurve_tC5342BF0F8735B85CB5E16FDD4C6FACC8AFAD3B7_il2cpp_TypeInfo_var))->get_Instance_12();
		NullCheck((ES3Reader_t2780AF8AA61DA2A817115CEF8612AC0E494D03C9 *)L_61);
		MinMaxCurve_tF036239442AB2D438B1EDABEBC785426871084CD  L_63;
		L_63 = GenericVirtFuncInvoker1< MinMaxCurve_tF036239442AB2D438B1EDABEBC785426871084CD , ES3Type_t8FBECB7AE75168648B9524E0C2A38DAD4555421D * >::Invoke(ES3Reader_Read_TisMinMaxCurve_tF036239442AB2D438B1EDABEBC785426871084CD_mD285150CBFB52440643BBECB5ADF4EE8DE940535_RuntimeMethod_var, (ES3Reader_t2780AF8AA61DA2A817115CEF8612AC0E494D03C9 *)L_61, (ES3Type_t8FBECB7AE75168648B9524E0C2A38DAD4555421D *)L_62);
		TrailModule_set_lifetime_m57C898C42B9F18F5A0E88AAA7B10276CC158C39D((TrailModule_t95D15372971E64A1977B7587ABAA87B1A31EF5C8 *)(TrailModule_t95D15372971E64A1977B7587ABAA87B1A31EF5C8 *)(&V_0), (MinMaxCurve_tF036239442AB2D438B1EDABEBC785426871084CD )L_63, /*hidden argument*/NULL);
		// break;
		goto IL_038e;
	}

IL_028e:
	{
		// instance.lifetimeMultiplier = reader.Read<System.Single>(ES3Type_float.Instance);
		ES3Reader_t2780AF8AA61DA2A817115CEF8612AC0E494D03C9 * L_64 = ___reader0;
		IL2CPP_RUNTIME_CLASS_INIT(ES3Type_float_tF86B773C86731BD9AD79448B860BBB178FE77644_il2cpp_TypeInfo_var);
		ES3Type_t8FBECB7AE75168648B9524E0C2A38DAD4555421D * L_65 = ((ES3Type_float_tF86B773C86731BD9AD79448B860BBB178FE77644_StaticFields*)il2cpp_codegen_static_fields_for(ES3Type_float_tF86B773C86731BD9AD79448B860BBB178FE77644_il2cpp_TypeInfo_var))->get_Instance_12();
		NullCheck((ES3Reader_t2780AF8AA61DA2A817115CEF8612AC0E494D03C9 *)L_64);
		float L_66;
		L_66 = GenericVirtFuncInvoker1< float, ES3Type_t8FBECB7AE75168648B9524E0C2A38DAD4555421D * >::Invoke(ES3Reader_Read_TisSingle_tE07797BA3C98D4CA9B5A19413C19A76688AB899E_m4A0416374498BDA042B8EB21E49B72326D6CE5F4_RuntimeMethod_var, (ES3Reader_t2780AF8AA61DA2A817115CEF8612AC0E494D03C9 *)L_64, (ES3Type_t8FBECB7AE75168648B9524E0C2A38DAD4555421D *)L_65);
		TrailModule_set_lifetimeMultiplier_m23F95D65EE8C82152AE1CF2E41531EC2789A866B((TrailModule_t95D15372971E64A1977B7587ABAA87B1A31EF5C8 *)(TrailModule_t95D15372971E64A1977B7587ABAA87B1A31EF5C8 *)(&V_0), (float)L_66, /*hidden argument*/NULL);
		// break;
		goto IL_038e;
	}

IL_02a5:
	{
		// instance.minVertexDistance = reader.Read<System.Single>(ES3Type_float.Instance);
		ES3Reader_t2780AF8AA61DA2A817115CEF8612AC0E494D03C9 * L_67 = ___reader0;
		IL2CPP_RUNTIME_CLASS_INIT(ES3Type_float_tF86B773C86731BD9AD79448B860BBB178FE77644_il2cpp_TypeInfo_var);
		ES3Type_t8FBECB7AE75168648B9524E0C2A38DAD4555421D * L_68 = ((ES3Type_float_tF86B773C86731BD9AD79448B860BBB178FE77644_StaticFields*)il2cpp_codegen_static_fields_for(ES3Type_float_tF86B773C86731BD9AD79448B860BBB178FE77644_il2cpp_TypeInfo_var))->get_Instance_12();
		NullCheck((ES3Reader_t2780AF8AA61DA2A817115CEF8612AC0E494D03C9 *)L_67);
		float L_69;
		L_69 = GenericVirtFuncInvoker1< float, ES3Type_t8FBECB7AE75168648B9524E0C2A38DAD4555421D * >::Invoke(ES3Reader_Read_TisSingle_tE07797BA3C98D4CA9B5A19413C19A76688AB899E_m4A0416374498BDA042B8EB21E49B72326D6CE5F4_RuntimeMethod_var, (ES3Reader_t2780AF8AA61DA2A817115CEF8612AC0E494D03C9 *)L_67, (ES3Type_t8FBECB7AE75168648B9524E0C2A38DAD4555421D *)L_68);
		TrailModule_set_minVertexDistance_mF7C29F88FBF540CE4987F4CF9B141C624808FBC5((TrailModule_t95D15372971E64A1977B7587ABAA87B1A31EF5C8 *)(TrailModule_t95D15372971E64A1977B7587ABAA87B1A31EF5C8 *)(&V_0), (float)L_69, /*hidden argument*/NULL);
		// break;
		goto IL_038e;
	}

IL_02bc:
	{
		// instance.textureMode = reader.Read<UnityEngine.ParticleSystemTrailTextureMode>();
		ES3Reader_t2780AF8AA61DA2A817115CEF8612AC0E494D03C9 * L_70 = ___reader0;
		NullCheck((ES3Reader_t2780AF8AA61DA2A817115CEF8612AC0E494D03C9 *)L_70);
		int32_t L_71;
		L_71 = GenericVirtFuncInvoker0< int32_t >::Invoke(ES3Reader_Read_TisParticleSystemTrailTextureMode_tF3259187CA4D0A61EDB3A40E63CBF6C42641CE9F_m055DB1212E8BC34F385DF7D302F16241554E9730_RuntimeMethod_var, (ES3Reader_t2780AF8AA61DA2A817115CEF8612AC0E494D03C9 *)L_70);
		TrailModule_set_textureMode_mC1F8AE0D2965FC47BDBFF4F53E0673D5FB58CF28((TrailModule_t95D15372971E64A1977B7587ABAA87B1A31EF5C8 *)(TrailModule_t95D15372971E64A1977B7587ABAA87B1A31EF5C8 *)(&V_0), (int32_t)L_71, /*hidden argument*/NULL);
		// break;
		goto IL_038e;
	}

IL_02ce:
	{
		// instance.worldSpace = reader.Read<System.Boolean>(ES3Type_bool.Instance);
		ES3Reader_t2780AF8AA61DA2A817115CEF8612AC0E494D03C9 * L_72 = ___reader0;
		IL2CPP_RUNTIME_CLASS_INIT(ES3Type_bool_t8F309F7B9CC735FF1DEE68081B6E3CAB367745F4_il2cpp_TypeInfo_var);
		ES3Type_t8FBECB7AE75168648B9524E0C2A38DAD4555421D * L_73 = ((ES3Type_bool_t8F309F7B9CC735FF1DEE68081B6E3CAB367745F4_StaticFields*)il2cpp_codegen_static_fields_for(ES3Type_bool_t8F309F7B9CC735FF1DEE68081B6E3CAB367745F4_il2cpp_TypeInfo_var))->get_Instance_12();
		NullCheck((ES3Reader_t2780AF8AA61DA2A817115CEF8612AC0E494D03C9 *)L_72);
		bool L_74;
		L_74 = GenericVirtFuncInvoker1< bool, ES3Type_t8FBECB7AE75168648B9524E0C2A38DAD4555421D * >::Invoke(ES3Reader_Read_TisBoolean_t07D1E3F34E4813023D64F584DFF7B34C9D922F37_mC6D1B158268FF9B97822FF9F5B37FB1723FEDA22_RuntimeMethod_var, (ES3Reader_t2780AF8AA61DA2A817115CEF8612AC0E494D03C9 *)L_72, (ES3Type_t8FBECB7AE75168648B9524E0C2A38DAD4555421D *)L_73);
		TrailModule_set_worldSpace_m42A63AF4A96F24A621A29A0F35240195F0E56B1A((TrailModule_t95D15372971E64A1977B7587ABAA87B1A31EF5C8 *)(TrailModule_t95D15372971E64A1977B7587ABAA87B1A31EF5C8 *)(&V_0), (bool)L_74, /*hidden argument*/NULL);
		// break;
		goto IL_038e;
	}

IL_02e5:
	{
		// instance.dieWithParticles = reader.Read<System.Boolean>(ES3Type_bool.Instance);
		ES3Reader_t2780AF8AA61DA2A817115CEF8612AC0E494D03C9 * L_75 = ___reader0;
		IL2CPP_RUNTIME_CLASS_INIT(ES3Type_bool_t8F309F7B9CC735FF1DEE68081B6E3CAB367745F4_il2cpp_TypeInfo_var);
		ES3Type_t8FBECB7AE75168648B9524E0C2A38DAD4555421D * L_76 = ((ES3Type_bool_t8F309F7B9CC735FF1DEE68081B6E3CAB367745F4_StaticFields*)il2cpp_codegen_static_fields_for(ES3Type_bool_t8F309F7B9CC735FF1DEE68081B6E3CAB367745F4_il2cpp_TypeInfo_var))->get_Instance_12();
		NullCheck((ES3Reader_t2780AF8AA61DA2A817115CEF8612AC0E494D03C9 *)L_75);
		bool L_77;
		L_77 = GenericVirtFuncInvoker1< bool, ES3Type_t8FBECB7AE75168648B9524E0C2A38DAD4555421D * >::Invoke(ES3Reader_Read_TisBoolean_t07D1E3F34E4813023D64F584DFF7B34C9D922F37_mC6D1B158268FF9B97822FF9F5B37FB1723FEDA22_RuntimeMethod_var, (ES3Reader_t2780AF8AA61DA2A817115CEF8612AC0E494D03C9 *)L_75, (ES3Type_t8FBECB7AE75168648B9524E0C2A38DAD4555421D *)L_76);
		TrailModule_set_dieWithParticles_mB7C4E8DC2F908FDF6D57A77B54B821E360D8DA99((TrailModule_t95D15372971E64A1977B7587ABAA87B1A31EF5C8 *)(TrailModule_t95D15372971E64A1977B7587ABAA87B1A31EF5C8 *)(&V_0), (bool)L_77, /*hidden argument*/NULL);
		// break;
		goto IL_038e;
	}

IL_02fc:
	{
		// instance.sizeAffectsWidth = reader.Read<System.Boolean>(ES3Type_bool.Instance);
		ES3Reader_t2780AF8AA61DA2A817115CEF8612AC0E494D03C9 * L_78 = ___reader0;
		IL2CPP_RUNTIME_CLASS_INIT(ES3Type_bool_t8F309F7B9CC735FF1DEE68081B6E3CAB367745F4_il2cpp_TypeInfo_var);
		ES3Type_t8FBECB7AE75168648B9524E0C2A38DAD4555421D * L_79 = ((ES3Type_bool_t8F309F7B9CC735FF1DEE68081B6E3CAB367745F4_StaticFields*)il2cpp_codegen_static_fields_for(ES3Type_bool_t8F309F7B9CC735FF1DEE68081B6E3CAB367745F4_il2cpp_TypeInfo_var))->get_Instance_12();
		NullCheck((ES3Reader_t2780AF8AA61DA2A817115CEF8612AC0E494D03C9 *)L_78);
		bool L_80;
		L_80 = GenericVirtFuncInvoker1< bool, ES3Type_t8FBECB7AE75168648B9524E0C2A38DAD4555421D * >::Invoke(ES3Reader_Read_TisBoolean_t07D1E3F34E4813023D64F584DFF7B34C9D922F37_mC6D1B158268FF9B97822FF9F5B37FB1723FEDA22_RuntimeMethod_var, (ES3Reader_t2780AF8AA61DA2A817115CEF8612AC0E494D03C9 *)L_78, (ES3Type_t8FBECB7AE75168648B9524E0C2A38DAD4555421D *)L_79);
		TrailModule_set_sizeAffectsWidth_m3517856E39080DA69B447499C8846D2491B0ABF0((TrailModule_t95D15372971E64A1977B7587ABAA87B1A31EF5C8 *)(TrailModule_t95D15372971E64A1977B7587ABAA87B1A31EF5C8 *)(&V_0), (bool)L_80, /*hidden argument*/NULL);
		// break;
		goto IL_038e;
	}

IL_0310:
	{
		// instance.sizeAffectsLifetime = reader.Read<System.Boolean>(ES3Type_bool.Instance);
		ES3Reader_t2780AF8AA61DA2A817115CEF8612AC0E494D03C9 * L_81 = ___reader0;
		IL2CPP_RUNTIME_CLASS_INIT(ES3Type_bool_t8F309F7B9CC735FF1DEE68081B6E3CAB367745F4_il2cpp_TypeInfo_var);
		ES3Type_t8FBECB7AE75168648B9524E0C2A38DAD4555421D * L_82 = ((ES3Type_bool_t8F309F7B9CC735FF1DEE68081B6E3CAB367745F4_StaticFields*)il2cpp_codegen_static_fields_for(ES3Type_bool_t8F309F7B9CC735FF1DEE68081B6E3CAB367745F4_il2cpp_TypeInfo_var))->get_Instance_12();
		NullCheck((ES3Reader_t2780AF8AA61DA2A817115CEF8612AC0E494D03C9 *)L_81);
		bool L_83;
		L_83 = GenericVirtFuncInvoker1< bool, ES3Type_t8FBECB7AE75168648B9524E0C2A38DAD4555421D * >::Invoke(ES3Reader_Read_TisBoolean_t07D1E3F34E4813023D64F584DFF7B34C9D922F37_mC6D1B158268FF9B97822FF9F5B37FB1723FEDA22_RuntimeMethod_var, (ES3Reader_t2780AF8AA61DA2A817115CEF8612AC0E494D03C9 *)L_81, (ES3Type_t8FBECB7AE75168648B9524E0C2A38DAD4555421D *)L_82);
		TrailModule_set_sizeAffectsLifetime_m98BF4A6594193D824B52D88371CF963ACBA388FD((TrailModule_t95D15372971E64A1977B7587ABAA87B1A31EF5C8 *)(TrailModule_t95D15372971E64A1977B7587ABAA87B1A31EF5C8 *)(&V_0), (bool)L_83, /*hidden argument*/NULL);
		// break;
		goto IL_038e;
	}

IL_0324:
	{
		// instance.inheritParticleColor = reader.Read<System.Boolean>(ES3Type_bool.Instance);
		ES3Reader_t2780AF8AA61DA2A817115CEF8612AC0E494D03C9 * L_84 = ___reader0;
		IL2CPP_RUNTIME_CLASS_INIT(ES3Type_bool_t8F309F7B9CC735FF1DEE68081B6E3CAB367745F4_il2cpp_TypeInfo_var);
		ES3Type_t8FBECB7AE75168648B9524E0C2A38DAD4555421D * L_85 = ((ES3Type_bool_t8F309F7B9CC735FF1DEE68081B6E3CAB367745F4_StaticFields*)il2cpp_codegen_static_fields_for(ES3Type_bool_t8F309F7B9CC735FF1DEE68081B6E3CAB367745F4_il2cpp_TypeInfo_var))->get_Instance_12();
		NullCheck((ES3Reader_t2780AF8AA61DA2A817115CEF8612AC0E494D03C9 *)L_84);
		bool L_86;
		L_86 = GenericVirtFuncInvoker1< bool, ES3Type_t8FBECB7AE75168648B9524E0C2A38DAD4555421D * >::Invoke(ES3Reader_Read_TisBoolean_t07D1E3F34E4813023D64F584DFF7B34C9D922F37_mC6D1B158268FF9B97822FF9F5B37FB1723FEDA22_RuntimeMethod_var, (ES3Reader_t2780AF8AA61DA2A817115CEF8612AC0E494D03C9 *)L_84, (ES3Type_t8FBECB7AE75168648B9524E0C2A38DAD4555421D *)L_85);
		TrailModule_set_inheritParticleColor_mCD83E87B5E00F2BFFBE08AD2D1D68606283A4FEE((TrailModule_t95D15372971E64A1977B7587ABAA87B1A31EF5C8 *)(TrailModule_t95D15372971E64A1977B7587ABAA87B1A31EF5C8 *)(&V_0), (bool)L_86, /*hidden argument*/NULL);
		// break;
		goto IL_038e;
	}

IL_0338:
	{
		// instance.colorOverLifetime = reader.Read<UnityEngine.ParticleSystem.MinMaxGradient>(ES3Type_MinMaxGradient.Instance);
		ES3Reader_t2780AF8AA61DA2A817115CEF8612AC0E494D03C9 * L_87 = ___reader0;
		IL2CPP_RUNTIME_CLASS_INIT(ES3Type_MinMaxGradient_t5DD353D60E95642AB39D1C97C6FD6DD1B067D3CF_il2cpp_TypeInfo_var);
		ES3Type_t8FBECB7AE75168648B9524E0C2A38DAD4555421D * L_88 = ((ES3Type_MinMaxGradient_t5DD353D60E95642AB39D1C97C6FD6DD1B067D3CF_StaticFields*)il2cpp_codegen_static_fields_for(ES3Type_MinMaxGradient_t5DD353D60E95642AB39D1C97C6FD6DD1B067D3CF_il2cpp_TypeInfo_var))->get_Instance_12();
		NullCheck((ES3Reader_t2780AF8AA61DA2A817115CEF8612AC0E494D03C9 *)L_87);
		MinMaxGradient_tF4530B26F29D9635D670A33B9EE581EAC48C12B7  L_89;
		L_89 = GenericVirtFuncInvoker1< MinMaxGradient_tF4530B26F29D9635D670A33B9EE581EAC48C12B7 , ES3Type_t8FBECB7AE75168648B9524E0C2A38DAD4555421D * >::Invoke(ES3Reader_Read_TisMinMaxGradient_tF4530B26F29D9635D670A33B9EE581EAC48C12B7_m6A3DD8CBBAC5D32B838B6C4399009AB8AA512ACC_RuntimeMethod_var, (ES3Reader_t2780AF8AA61DA2A817115CEF8612AC0E494D03C9 *)L_87, (ES3Type_t8FBECB7AE75168648B9524E0C2A38DAD4555421D *)L_88);
		TrailModule_set_colorOverLifetime_mCD56BD4B75D3A3947069BA1B93FEC78AAE08DF27((TrailModule_t95D15372971E64A1977B7587ABAA87B1A31EF5C8 *)(TrailModule_t95D15372971E64A1977B7587ABAA87B1A31EF5C8 *)(&V_0), (MinMaxGradient_tF4530B26F29D9635D670A33B9EE581EAC48C12B7 )L_89, /*hidden argument*/NULL);
		// break;
		goto IL_038e;
	}

IL_034c:
	{
		// instance.widthOverTrail = reader.Read<UnityEngine.ParticleSystem.MinMaxCurve>(ES3Type_MinMaxCurve.Instance);
		ES3Reader_t2780AF8AA61DA2A817115CEF8612AC0E494D03C9 * L_90 = ___reader0;
		IL2CPP_RUNTIME_CLASS_INIT(ES3Type_MinMaxCurve_tC5342BF0F8735B85CB5E16FDD4C6FACC8AFAD3B7_il2cpp_TypeInfo_var);
		ES3Type_t8FBECB7AE75168648B9524E0C2A38DAD4555421D * L_91 = ((ES3Type_MinMaxCurve_tC5342BF0F8735B85CB5E16FDD4C6FACC8AFAD3B7_StaticFields*)il2cpp_codegen_static_fields_for(ES3Type_MinMaxCurve_tC5342BF0F8735B85CB5E16FDD4C6FACC8AFAD3B7_il2cpp_TypeInfo_var))->get_Instance_12();
		NullCheck((ES3Reader_t2780AF8AA61DA2A817115CEF8612AC0E494D03C9 *)L_90);
		MinMaxCurve_tF036239442AB2D438B1EDABEBC785426871084CD  L_92;
		L_92 = GenericVirtFuncInvoker1< MinMaxCurve_tF036239442AB2D438B1EDABEBC785426871084CD , ES3Type_t8FBECB7AE75168648B9524E0C2A38DAD4555421D * >::Invoke(ES3Reader_Read_TisMinMaxCurve_tF036239442AB2D438B1EDABEBC785426871084CD_mD285150CBFB52440643BBECB5ADF4EE8DE940535_RuntimeMethod_var, (ES3Reader_t2780AF8AA61DA2A817115CEF8612AC0E494D03C9 *)L_90, (ES3Type_t8FBECB7AE75168648B9524E0C2A38DAD4555421D *)L_91);
		TrailModule_set_widthOverTrail_m6C0A896EBFDED7CE46344B3A0B04212934F30DE1((TrailModule_t95D15372971E64A1977B7587ABAA87B1A31EF5C8 *)(TrailModule_t95D15372971E64A1977B7587ABAA87B1A31EF5C8 *)(&V_0), (MinMaxCurve_tF036239442AB2D438B1EDABEBC785426871084CD )L_92, /*hidden argument*/NULL);
		// break;
		goto IL_038e;
	}

IL_0360:
	{
		// instance.widthOverTrailMultiplier = reader.Read<System.Single>(ES3Type_float.Instance);
		ES3Reader_t2780AF8AA61DA2A817115CEF8612AC0E494D03C9 * L_93 = ___reader0;
		IL2CPP_RUNTIME_CLASS_INIT(ES3Type_float_tF86B773C86731BD9AD79448B860BBB178FE77644_il2cpp_TypeInfo_var);
		ES3Type_t8FBECB7AE75168648B9524E0C2A38DAD4555421D * L_94 = ((ES3Type_float_tF86B773C86731BD9AD79448B860BBB178FE77644_StaticFields*)il2cpp_codegen_static_fields_for(ES3Type_float_tF86B773C86731BD9AD79448B860BBB178FE77644_il2cpp_TypeInfo_var))->get_Instance_12();
		NullCheck((ES3Reader_t2780AF8AA61DA2A817115CEF8612AC0E494D03C9 *)L_93);
		float L_95;
		L_95 = GenericVirtFuncInvoker1< float, ES3Type_t8FBECB7AE75168648B9524E0C2A38DAD4555421D * >::Invoke(ES3Reader_Read_TisSingle_tE07797BA3C98D4CA9B5A19413C19A76688AB899E_m4A0416374498BDA042B8EB21E49B72326D6CE5F4_RuntimeMethod_var, (ES3Reader_t2780AF8AA61DA2A817115CEF8612AC0E494D03C9 *)L_93, (ES3Type_t8FBECB7AE75168648B9524E0C2A38DAD4555421D *)L_94);
		TrailModule_set_widthOverTrailMultiplier_m6A7EA2856CF30B710CCB528EA3EBFD1799C19BD4((TrailModule_t95D15372971E64A1977B7587ABAA87B1A31EF5C8 *)(TrailModule_t95D15372971E64A1977B7587ABAA87B1A31EF5C8 *)(&V_0), (float)L_95, /*hidden argument*/NULL);
		// break;
		goto IL_038e;
	}

IL_0374:
	{
		// instance.colorOverTrail = reader.Read<UnityEngine.ParticleSystem.MinMaxGradient>(ES3Type_MinMaxGradient.Instance);
		ES3Reader_t2780AF8AA61DA2A817115CEF8612AC0E494D03C9 * L_96 = ___reader0;
		IL2CPP_RUNTIME_CLASS_INIT(ES3Type_MinMaxGradient_t5DD353D60E95642AB39D1C97C6FD6DD1B067D3CF_il2cpp_TypeInfo_var);
		ES3Type_t8FBECB7AE75168648B9524E0C2A38DAD4555421D * L_97 = ((ES3Type_MinMaxGradient_t5DD353D60E95642AB39D1C97C6FD6DD1B067D3CF_StaticFields*)il2cpp_codegen_static_fields_for(ES3Type_MinMaxGradient_t5DD353D60E95642AB39D1C97C6FD6DD1B067D3CF_il2cpp_TypeInfo_var))->get_Instance_12();
		NullCheck((ES3Reader_t2780AF8AA61DA2A817115CEF8612AC0E494D03C9 *)L_96);
		MinMaxGradient_tF4530B26F29D9635D670A33B9EE581EAC48C12B7  L_98;
		L_98 = GenericVirtFuncInvoker1< MinMaxGradient_tF4530B26F29D9635D670A33B9EE581EAC48C12B7 , ES3Type_t8FBECB7AE75168648B9524E0C2A38DAD4555421D * >::Invoke(ES3Reader_Read_TisMinMaxGradient_tF4530B26F29D9635D670A33B9EE581EAC48C12B7_m6A3DD8CBBAC5D32B838B6C4399009AB8AA512ACC_RuntimeMethod_var, (ES3Reader_t2780AF8AA61DA2A817115CEF8612AC0E494D03C9 *)L_96, (ES3Type_t8FBECB7AE75168648B9524E0C2A38DAD4555421D *)L_97);
		TrailModule_set_colorOverTrail_m8440C6574C8310292B93D70EA4FE3EE8C40DF8DB((TrailModule_t95D15372971E64A1977B7587ABAA87B1A31EF5C8 *)(TrailModule_t95D15372971E64A1977B7587ABAA87B1A31EF5C8 *)(&V_0), (MinMaxGradient_tF4530B26F29D9635D670A33B9EE581EAC48C12B7 )L_98, /*hidden argument*/NULL);
		// break;
		goto IL_038e;
	}

IL_0388:
	{
		// reader.Skip();
		ES3Reader_t2780AF8AA61DA2A817115CEF8612AC0E494D03C9 * L_99 = ___reader0;
		NullCheck((ES3Reader_t2780AF8AA61DA2A817115CEF8612AC0E494D03C9 *)L_99);
		VirtActionInvoker0::Invoke(41 /* System.Void ES3Reader::Skip() */, (ES3Reader_t2780AF8AA61DA2A817115CEF8612AC0E494D03C9 *)L_99);
	}

IL_038e:
	{
		// while((propertyName = reader.ReadPropertyName()) != null)
		ES3Reader_t2780AF8AA61DA2A817115CEF8612AC0E494D03C9 * L_100 = ___reader0;
		NullCheck((ES3Reader_t2780AF8AA61DA2A817115CEF8612AC0E494D03C9 *)L_100);
		String_t* L_101;
		L_101 = VirtFuncInvoker0< String_t* >::Invoke(21 /* System.String ES3Reader::ReadPropertyName() */, (ES3Reader_t2780AF8AA61DA2A817115CEF8612AC0E494D03C9 *)L_100);
		String_t* L_102 = (String_t*)L_101;
		V_1 = (String_t*)L_102;
		if (L_102)
		{
			goto IL_000c;
		}
	}
	{
		// }
		return;
	}
}
// System.Void ES3Types.ES3Type_TrailModule::ReadInto<UnityEngine.ParticleSystem/MinMaxGradient>(ES3Reader,System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ES3Type_TrailModule_ReadInto_TisMinMaxGradient_tF4530B26F29D9635D670A33B9EE581EAC48C12B7_m6D5FDBB35455E19A461B0AD5341D89F382230FD6_gshared (ES3Type_TrailModule_tC773F73EC0443516DD128FF2B5AE010809742462 * __this, ES3Reader_t2780AF8AA61DA2A817115CEF8612AC0E494D03C9 * ___reader0, RuntimeObject * ___obj1, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ES3Reader_Read_TisBoolean_t07D1E3F34E4813023D64F584DFF7B34C9D922F37_mC6D1B158268FF9B97822FF9F5B37FB1723FEDA22_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ES3Reader_Read_TisMinMaxCurve_tF036239442AB2D438B1EDABEBC785426871084CD_mD285150CBFB52440643BBECB5ADF4EE8DE940535_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ES3Reader_Read_TisMinMaxGradient_tF4530B26F29D9635D670A33B9EE581EAC48C12B7_m6A3DD8CBBAC5D32B838B6C4399009AB8AA512ACC_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ES3Reader_Read_TisParticleSystemTrailTextureMode_tF3259187CA4D0A61EDB3A40E63CBF6C42641CE9F_m055DB1212E8BC34F385DF7D302F16241554E9730_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ES3Reader_Read_TisSingle_tE07797BA3C98D4CA9B5A19413C19A76688AB899E_m4A0416374498BDA042B8EB21E49B72326D6CE5F4_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ES3Type_MinMaxCurve_tC5342BF0F8735B85CB5E16FDD4C6FACC8AFAD3B7_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ES3Type_MinMaxGradient_t5DD353D60E95642AB39D1C97C6FD6DD1B067D3CF_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ES3Type_bool_t8F309F7B9CC735FF1DEE68081B6E3CAB367745F4_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ES3Type_float_tF86B773C86731BD9AD79448B860BBB178FE77644_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&TrailModule_t95D15372971E64A1977B7587ABAA87B1A31EF5C8_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral1D87A56AE67B2CD49CAE6E942C2FB7AD98925C00);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral354281948B6269615E32D856CF85B6F456724DAA);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral4221314F268D184F46688D45C85446821F1F1BC3);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral47C47DD09640803AD8016748EAE1F04DD1D41119);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral5C86338F177203D001C41D9C348A83D1338CC7D0);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral60126327537B7B8E6EE33C43FE0C5CA8BCC3A06A);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral87F70660D62DE5FC257FBADE9DA4EC9188597DE5);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralA967787586EC9E5A17A9C55E2002AB73A5E21A0A);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralADAEB0839588196B349BDB6CF33AFA3E0736360B);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralBE2893848F9FC647C2288DA6581A1522E9695182);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralBF540D6548854CC21630064FBA5390C9409C86F0);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralC580B374AA991574F91DFC86C068E7FAD661A3A4);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralE049DB547285CFCE1CB9A95934B6B6DCE2D219EC);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralF9D225733E1D10F9344C755C4A9C0870CD1DE97B);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralFE5F89F63E2381500F62A7CBD6954563BE44562F);
		s_Il2CppMethodInitialized = true;
	}
	TrailModule_t95D15372971E64A1977B7587ABAA87B1A31EF5C8  V_0;
	memset((&V_0), 0, sizeof(V_0));
	String_t* V_1 = NULL;
	uint32_t V_2 = 0;
	{
		// var instance = (UnityEngine.ParticleSystem.TrailModule)obj;
		RuntimeObject * L_0 = ___obj1;
		V_0 = (TrailModule_t95D15372971E64A1977B7587ABAA87B1A31EF5C8 )((*(TrailModule_t95D15372971E64A1977B7587ABAA87B1A31EF5C8 *)((TrailModule_t95D15372971E64A1977B7587ABAA87B1A31EF5C8 *)UnBox(L_0, TrailModule_t95D15372971E64A1977B7587ABAA87B1A31EF5C8_il2cpp_TypeInfo_var))));
		goto IL_038e;
	}

IL_000c:
	{
		String_t* L_1 = V_1;
		if (!L_1)
		{
			goto IL_0388;
		}
	}
	{
		String_t* L_2 = V_1;
		uint32_t L_3;
		L_3 = U3CPrivateImplementationDetailsU3E_ComputeStringHash_m3ADC1F612F9EE3DD518E6F0023A0DE0EE2B120A7((String_t*)L_2, /*hidden argument*/NULL);
		V_2 = (uint32_t)L_3;
		uint32_t L_4 = V_2;
		if ((!(((uint32_t)L_4) <= ((uint32_t)((int32_t)1376955374)))))
		{
			goto IL_008d;
		}
	}
	{
		uint32_t L_5 = V_2;
		if ((!(((uint32_t)L_5) <= ((uint32_t)((int32_t)494095910)))))
		{
			goto IL_004f;
		}
	}
	{
		uint32_t L_6 = V_2;
		if ((((int32_t)L_6) == ((int32_t)((int32_t)49525662))))
		{
			goto IL_010e;
		}
	}
	{
		uint32_t L_7 = V_2;
		if ((((int32_t)L_7) == ((int32_t)((int32_t)341298456))))
		{
			goto IL_021f;
		}
	}
	{
		uint32_t L_8 = V_2;
		if ((((int32_t)L_8) == ((int32_t)((int32_t)494095910))))
		{
			goto IL_0234;
		}
	}
	{
		goto IL_0388;
	}

IL_004f:
	{
		uint32_t L_9 = V_2;
		if ((!(((uint32_t)L_9) <= ((uint32_t)((int32_t)973733911)))))
		{
			goto IL_0072;
		}
	}
	{
		uint32_t L_10 = V_2;
		if ((((int32_t)L_10) == ((int32_t)((int32_t)559929418))))
		{
			goto IL_01b6;
		}
	}
	{
		uint32_t L_11 = V_2;
		if ((((int32_t)L_11) == ((int32_t)((int32_t)973733911))))
		{
			goto IL_0177;
		}
	}
	{
		goto IL_0388;
	}

IL_0072:
	{
		uint32_t L_12 = V_2;
		if ((((int32_t)L_12) == ((int32_t)((int32_t)1024708593))))
		{
			goto IL_014d;
		}
	}
	{
		uint32_t L_13 = V_2;
		if ((((int32_t)L_13) == ((int32_t)((int32_t)1376955374))))
		{
			goto IL_0138;
		}
	}
	{
		goto IL_0388;
	}

IL_008d:
	{
		uint32_t L_14 = V_2;
		if ((!(((uint32_t)L_14) <= ((uint32_t)((int32_t)-2100707162)))))
		{
			goto IL_00d3;
		}
	}
	{
		uint32_t L_15 = V_2;
		if ((!(((uint32_t)L_15) <= ((uint32_t)((int32_t)1975189197)))))
		{
			goto IL_00b8;
		}
	}
	{
		uint32_t L_16 = V_2;
		if ((((int32_t)L_16) == ((int32_t)((int32_t)1546474083))))
		{
			goto IL_020a;
		}
	}
	{
		uint32_t L_17 = V_2;
		if ((((int32_t)L_17) == ((int32_t)((int32_t)1975189197))))
		{
			goto IL_01cb;
		}
	}
	{
		goto IL_0388;
	}

IL_00b8:
	{
		uint32_t L_18 = V_2;
		if ((((int32_t)L_18) == ((int32_t)((int32_t)2053023684))))
		{
			goto IL_01a1;
		}
	}
	{
		uint32_t L_19 = V_2;
		if ((((int32_t)L_19) == ((int32_t)((int32_t)-2100707162))))
		{
			goto IL_0162;
		}
	}
	{
		goto IL_0388;
	}

IL_00d3:
	{
		uint32_t L_20 = V_2;
		if ((!(((uint32_t)L_20) <= ((uint32_t)((int32_t)-1319579393)))))
		{
			goto IL_00f6;
		}
	}
	{
		uint32_t L_21 = V_2;
		if ((((int32_t)L_21) == ((int32_t)((int32_t)-1562862963))))
		{
			goto IL_01e0;
		}
	}
	{
		uint32_t L_22 = V_2;
		if ((((int32_t)L_22) == ((int32_t)((int32_t)-1319579393))))
		{
			goto IL_018c;
		}
	}
	{
		goto IL_0388;
	}

IL_00f6:
	{
		uint32_t L_23 = V_2;
		if ((((int32_t)L_23) == ((int32_t)((int32_t)-1055777148))))
		{
			goto IL_0123;
		}
	}
	{
		uint32_t L_24 = V_2;
		if ((((int32_t)L_24) == ((int32_t)((int32_t)-413379935))))
		{
			goto IL_01f5;
		}
	}
	{
		goto IL_0388;
	}

IL_010e:
	{
		String_t* L_25 = V_1;
		bool L_26;
		L_26 = String_op_Equality_m50B3548E4AC232558190B0052877B290AA1D436A((String_t*)L_25, (String_t*)_stringLiteralF9D225733E1D10F9344C755C4A9C0870CD1DE97B, /*hidden argument*/NULL);
		if (L_26)
		{
			goto IL_0249;
		}
	}
	{
		goto IL_0388;
	}

IL_0123:
	{
		String_t* L_27 = V_1;
		bool L_28;
		L_28 = String_op_Equality_m50B3548E4AC232558190B0052877B290AA1D436A((String_t*)L_27, (String_t*)_stringLiteral60126327537B7B8E6EE33C43FE0C5CA8BCC3A06A, /*hidden argument*/NULL);
		if (L_28)
		{
			goto IL_0260;
		}
	}
	{
		goto IL_0388;
	}

IL_0138:
	{
		String_t* L_29 = V_1;
		bool L_30;
		L_30 = String_op_Equality_m50B3548E4AC232558190B0052877B290AA1D436A((String_t*)L_29, (String_t*)_stringLiteralBE2893848F9FC647C2288DA6581A1522E9695182, /*hidden argument*/NULL);
		if (L_30)
		{
			goto IL_0277;
		}
	}
	{
		goto IL_0388;
	}

IL_014d:
	{
		String_t* L_31 = V_1;
		bool L_32;
		L_32 = String_op_Equality_m50B3548E4AC232558190B0052877B290AA1D436A((String_t*)L_31, (String_t*)_stringLiteral4221314F268D184F46688D45C85446821F1F1BC3, /*hidden argument*/NULL);
		if (L_32)
		{
			goto IL_028e;
		}
	}
	{
		goto IL_0388;
	}

IL_0162:
	{
		String_t* L_33 = V_1;
		bool L_34;
		L_34 = String_op_Equality_m50B3548E4AC232558190B0052877B290AA1D436A((String_t*)L_33, (String_t*)_stringLiteral5C86338F177203D001C41D9C348A83D1338CC7D0, /*hidden argument*/NULL);
		if (L_34)
		{
			goto IL_02a5;
		}
	}
	{
		goto IL_0388;
	}

IL_0177:
	{
		String_t* L_35 = V_1;
		bool L_36;
		L_36 = String_op_Equality_m50B3548E4AC232558190B0052877B290AA1D436A((String_t*)L_35, (String_t*)_stringLiteralFE5F89F63E2381500F62A7CBD6954563BE44562F, /*hidden argument*/NULL);
		if (L_36)
		{
			goto IL_02bc;
		}
	}
	{
		goto IL_0388;
	}

IL_018c:
	{
		String_t* L_37 = V_1;
		bool L_38;
		L_38 = String_op_Equality_m50B3548E4AC232558190B0052877B290AA1D436A((String_t*)L_37, (String_t*)_stringLiteral87F70660D62DE5FC257FBADE9DA4EC9188597DE5, /*hidden argument*/NULL);
		if (L_38)
		{
			goto IL_02ce;
		}
	}
	{
		goto IL_0388;
	}

IL_01a1:
	{
		String_t* L_39 = V_1;
		bool L_40;
		L_40 = String_op_Equality_m50B3548E4AC232558190B0052877B290AA1D436A((String_t*)L_39, (String_t*)_stringLiteral354281948B6269615E32D856CF85B6F456724DAA, /*hidden argument*/NULL);
		if (L_40)
		{
			goto IL_02e5;
		}
	}
	{
		goto IL_0388;
	}

IL_01b6:
	{
		String_t* L_41 = V_1;
		bool L_42;
		L_42 = String_op_Equality_m50B3548E4AC232558190B0052877B290AA1D436A((String_t*)L_41, (String_t*)_stringLiteralADAEB0839588196B349BDB6CF33AFA3E0736360B, /*hidden argument*/NULL);
		if (L_42)
		{
			goto IL_02fc;
		}
	}
	{
		goto IL_0388;
	}

IL_01cb:
	{
		String_t* L_43 = V_1;
		bool L_44;
		L_44 = String_op_Equality_m50B3548E4AC232558190B0052877B290AA1D436A((String_t*)L_43, (String_t*)_stringLiteralC580B374AA991574F91DFC86C068E7FAD661A3A4, /*hidden argument*/NULL);
		if (L_44)
		{
			goto IL_0310;
		}
	}
	{
		goto IL_0388;
	}

IL_01e0:
	{
		String_t* L_45 = V_1;
		bool L_46;
		L_46 = String_op_Equality_m50B3548E4AC232558190B0052877B290AA1D436A((String_t*)L_45, (String_t*)_stringLiteralE049DB547285CFCE1CB9A95934B6B6DCE2D219EC, /*hidden argument*/NULL);
		if (L_46)
		{
			goto IL_0324;
		}
	}
	{
		goto IL_0388;
	}

IL_01f5:
	{
		String_t* L_47 = V_1;
		bool L_48;
		L_48 = String_op_Equality_m50B3548E4AC232558190B0052877B290AA1D436A((String_t*)L_47, (String_t*)_stringLiteralBF540D6548854CC21630064FBA5390C9409C86F0, /*hidden argument*/NULL);
		if (L_48)
		{
			goto IL_0338;
		}
	}
	{
		goto IL_0388;
	}

IL_020a:
	{
		String_t* L_49 = V_1;
		bool L_50;
		L_50 = String_op_Equality_m50B3548E4AC232558190B0052877B290AA1D436A((String_t*)L_49, (String_t*)_stringLiteral1D87A56AE67B2CD49CAE6E942C2FB7AD98925C00, /*hidden argument*/NULL);
		if (L_50)
		{
			goto IL_034c;
		}
	}
	{
		goto IL_0388;
	}

IL_021f:
	{
		String_t* L_51 = V_1;
		bool L_52;
		L_52 = String_op_Equality_m50B3548E4AC232558190B0052877B290AA1D436A((String_t*)L_51, (String_t*)_stringLiteralA967787586EC9E5A17A9C55E2002AB73A5E21A0A, /*hidden argument*/NULL);
		if (L_52)
		{
			goto IL_0360;
		}
	}
	{
		goto IL_0388;
	}

IL_0234:
	{
		String_t* L_53 = V_1;
		bool L_54;
		L_54 = String_op_Equality_m50B3548E4AC232558190B0052877B290AA1D436A((String_t*)L_53, (String_t*)_stringLiteral47C47DD09640803AD8016748EAE1F04DD1D41119, /*hidden argument*/NULL);
		if (L_54)
		{
			goto IL_0374;
		}
	}
	{
		goto IL_0388;
	}

IL_0249:
	{
		// instance.enabled = reader.Read<System.Boolean>(ES3Type_bool.Instance);
		ES3Reader_t2780AF8AA61DA2A817115CEF8612AC0E494D03C9 * L_55 = ___reader0;
		IL2CPP_RUNTIME_CLASS_INIT(ES3Type_bool_t8F309F7B9CC735FF1DEE68081B6E3CAB367745F4_il2cpp_TypeInfo_var);
		ES3Type_t8FBECB7AE75168648B9524E0C2A38DAD4555421D * L_56 = ((ES3Type_bool_t8F309F7B9CC735FF1DEE68081B6E3CAB367745F4_StaticFields*)il2cpp_codegen_static_fields_for(ES3Type_bool_t8F309F7B9CC735FF1DEE68081B6E3CAB367745F4_il2cpp_TypeInfo_var))->get_Instance_12();
		NullCheck((ES3Reader_t2780AF8AA61DA2A817115CEF8612AC0E494D03C9 *)L_55);
		bool L_57;
		L_57 = GenericVirtFuncInvoker1< bool, ES3Type_t8FBECB7AE75168648B9524E0C2A38DAD4555421D * >::Invoke(ES3Reader_Read_TisBoolean_t07D1E3F34E4813023D64F584DFF7B34C9D922F37_mC6D1B158268FF9B97822FF9F5B37FB1723FEDA22_RuntimeMethod_var, (ES3Reader_t2780AF8AA61DA2A817115CEF8612AC0E494D03C9 *)L_55, (ES3Type_t8FBECB7AE75168648B9524E0C2A38DAD4555421D *)L_56);
		TrailModule_set_enabled_mFC8451DDDF40CCBB3E32A4B30A001115F6346894((TrailModule_t95D15372971E64A1977B7587ABAA87B1A31EF5C8 *)(TrailModule_t95D15372971E64A1977B7587ABAA87B1A31EF5C8 *)(&V_0), (bool)L_57, /*hidden argument*/NULL);
		// break;
		goto IL_038e;
	}

IL_0260:
	{
		// instance.ratio = reader.Read<System.Single>(ES3Type_float.Instance);
		ES3Reader_t2780AF8AA61DA2A817115CEF8612AC0E494D03C9 * L_58 = ___reader0;
		IL2CPP_RUNTIME_CLASS_INIT(ES3Type_float_tF86B773C86731BD9AD79448B860BBB178FE77644_il2cpp_TypeInfo_var);
		ES3Type_t8FBECB7AE75168648B9524E0C2A38DAD4555421D * L_59 = ((ES3Type_float_tF86B773C86731BD9AD79448B860BBB178FE77644_StaticFields*)il2cpp_codegen_static_fields_for(ES3Type_float_tF86B773C86731BD9AD79448B860BBB178FE77644_il2cpp_TypeInfo_var))->get_Instance_12();
		NullCheck((ES3Reader_t2780AF8AA61DA2A817115CEF8612AC0E494D03C9 *)L_58);
		float L_60;
		L_60 = GenericVirtFuncInvoker1< float, ES3Type_t8FBECB7AE75168648B9524E0C2A38DAD4555421D * >::Invoke(ES3Reader_Read_TisSingle_tE07797BA3C98D4CA9B5A19413C19A76688AB899E_m4A0416374498BDA042B8EB21E49B72326D6CE5F4_RuntimeMethod_var, (ES3Reader_t2780AF8AA61DA2A817115CEF8612AC0E494D03C9 *)L_58, (ES3Type_t8FBECB7AE75168648B9524E0C2A38DAD4555421D *)L_59);
		TrailModule_set_ratio_m34E63B34E7B0E8D037AD45532B2E2D5BD0750189((TrailModule_t95D15372971E64A1977B7587ABAA87B1A31EF5C8 *)(TrailModule_t95D15372971E64A1977B7587ABAA87B1A31EF5C8 *)(&V_0), (float)L_60, /*hidden argument*/NULL);
		// break;
		goto IL_038e;
	}

IL_0277:
	{
		// instance.lifetime = reader.Read<UnityEngine.ParticleSystem.MinMaxCurve>(ES3Type_MinMaxCurve.Instance);
		ES3Reader_t2780AF8AA61DA2A817115CEF8612AC0E494D03C9 * L_61 = ___reader0;
		IL2CPP_RUNTIME_CLASS_INIT(ES3Type_MinMaxCurve_tC5342BF0F8735B85CB5E16FDD4C6FACC8AFAD3B7_il2cpp_TypeInfo_var);
		ES3Type_t8FBECB7AE75168648B9524E0C2A38DAD4555421D * L_62 = ((ES3Type_MinMaxCurve_tC5342BF0F8735B85CB5E16FDD4C6FACC8AFAD3B7_StaticFields*)il2cpp_codegen_static_fields_for(ES3Type_MinMaxCurve_tC5342BF0F8735B85CB5E16FDD4C6FACC8AFAD3B7_il2cpp_TypeInfo_var))->get_Instance_12();
		NullCheck((ES3Reader_t2780AF8AA61DA2A817115CEF8612AC0E494D03C9 *)L_61);
		MinMaxCurve_tF036239442AB2D438B1EDABEBC785426871084CD  L_63;
		L_63 = GenericVirtFuncInvoker1< MinMaxCurve_tF036239442AB2D438B1EDABEBC785426871084CD , ES3Type_t8FBECB7AE75168648B9524E0C2A38DAD4555421D * >::Invoke(ES3Reader_Read_TisMinMaxCurve_tF036239442AB2D438B1EDABEBC785426871084CD_mD285150CBFB52440643BBECB5ADF4EE8DE940535_RuntimeMethod_var, (ES3Reader_t2780AF8AA61DA2A817115CEF8612AC0E494D03C9 *)L_61, (ES3Type_t8FBECB7AE75168648B9524E0C2A38DAD4555421D *)L_62);
		TrailModule_set_lifetime_m57C898C42B9F18F5A0E88AAA7B10276CC158C39D((TrailModule_t95D15372971E64A1977B7587ABAA87B1A31EF5C8 *)(TrailModule_t95D15372971E64A1977B7587ABAA87B1A31EF5C8 *)(&V_0), (MinMaxCurve_tF036239442AB2D438B1EDABEBC785426871084CD )L_63, /*hidden argument*/NULL);
		// break;
		goto IL_038e;
	}

IL_028e:
	{
		// instance.lifetimeMultiplier = reader.Read<System.Single>(ES3Type_float.Instance);
		ES3Reader_t2780AF8AA61DA2A817115CEF8612AC0E494D03C9 * L_64 = ___reader0;
		IL2CPP_RUNTIME_CLASS_INIT(ES3Type_float_tF86B773C86731BD9AD79448B860BBB178FE77644_il2cpp_TypeInfo_var);
		ES3Type_t8FBECB7AE75168648B9524E0C2A38DAD4555421D * L_65 = ((ES3Type_float_tF86B773C86731BD9AD79448B860BBB178FE77644_StaticFields*)il2cpp_codegen_static_fields_for(ES3Type_float_tF86B773C86731BD9AD79448B860BBB178FE77644_il2cpp_TypeInfo_var))->get_Instance_12();
		NullCheck((ES3Reader_t2780AF8AA61DA2A817115CEF8612AC0E494D03C9 *)L_64);
		float L_66;
		L_66 = GenericVirtFuncInvoker1< float, ES3Type_t8FBECB7AE75168648B9524E0C2A38DAD4555421D * >::Invoke(ES3Reader_Read_TisSingle_tE07797BA3C98D4CA9B5A19413C19A76688AB899E_m4A0416374498BDA042B8EB21E49B72326D6CE5F4_RuntimeMethod_var, (ES3Reader_t2780AF8AA61DA2A817115CEF8612AC0E494D03C9 *)L_64, (ES3Type_t8FBECB7AE75168648B9524E0C2A38DAD4555421D *)L_65);
		TrailModule_set_lifetimeMultiplier_m23F95D65EE8C82152AE1CF2E41531EC2789A866B((TrailModule_t95D15372971E64A1977B7587ABAA87B1A31EF5C8 *)(TrailModule_t95D15372971E64A1977B7587ABAA87B1A31EF5C8 *)(&V_0), (float)L_66, /*hidden argument*/NULL);
		// break;
		goto IL_038e;
	}

IL_02a5:
	{
		// instance.minVertexDistance = reader.Read<System.Single>(ES3Type_float.Instance);
		ES3Reader_t2780AF8AA61DA2A817115CEF8612AC0E494D03C9 * L_67 = ___reader0;
		IL2CPP_RUNTIME_CLASS_INIT(ES3Type_float_tF86B773C86731BD9AD79448B860BBB178FE77644_il2cpp_TypeInfo_var);
		ES3Type_t8FBECB7AE75168648B9524E0C2A38DAD4555421D * L_68 = ((ES3Type_float_tF86B773C86731BD9AD79448B860BBB178FE77644_StaticFields*)il2cpp_codegen_static_fields_for(ES3Type_float_tF86B773C86731BD9AD79448B860BBB178FE77644_il2cpp_TypeInfo_var))->get_Instance_12();
		NullCheck((ES3Reader_t2780AF8AA61DA2A817115CEF8612AC0E494D03C9 *)L_67);
		float L_69;
		L_69 = GenericVirtFuncInvoker1< float, ES3Type_t8FBECB7AE75168648B9524E0C2A38DAD4555421D * >::Invoke(ES3Reader_Read_TisSingle_tE07797BA3C98D4CA9B5A19413C19A76688AB899E_m4A0416374498BDA042B8EB21E49B72326D6CE5F4_RuntimeMethod_var, (ES3Reader_t2780AF8AA61DA2A817115CEF8612AC0E494D03C9 *)L_67, (ES3Type_t8FBECB7AE75168648B9524E0C2A38DAD4555421D *)L_68);
		TrailModule_set_minVertexDistance_mF7C29F88FBF540CE4987F4CF9B141C624808FBC5((TrailModule_t95D15372971E64A1977B7587ABAA87B1A31EF5C8 *)(TrailModule_t95D15372971E64A1977B7587ABAA87B1A31EF5C8 *)(&V_0), (float)L_69, /*hidden argument*/NULL);
		// break;
		goto IL_038e;
	}

IL_02bc:
	{
		// instance.textureMode = reader.Read<UnityEngine.ParticleSystemTrailTextureMode>();
		ES3Reader_t2780AF8AA61DA2A817115CEF8612AC0E494D03C9 * L_70 = ___reader0;
		NullCheck((ES3Reader_t2780AF8AA61DA2A817115CEF8612AC0E494D03C9 *)L_70);
		int32_t L_71;
		L_71 = GenericVirtFuncInvoker0< int32_t >::Invoke(ES3Reader_Read_TisParticleSystemTrailTextureMode_tF3259187CA4D0A61EDB3A40E63CBF6C42641CE9F_m055DB1212E8BC34F385DF7D302F16241554E9730_RuntimeMethod_var, (ES3Reader_t2780AF8AA61DA2A817115CEF8612AC0E494D03C9 *)L_70);
		TrailModule_set_textureMode_mC1F8AE0D2965FC47BDBFF4F53E0673D5FB58CF28((TrailModule_t95D15372971E64A1977B7587ABAA87B1A31EF5C8 *)(TrailModule_t95D15372971E64A1977B7587ABAA87B1A31EF5C8 *)(&V_0), (int32_t)L_71, /*hidden argument*/NULL);
		// break;
		goto IL_038e;
	}

IL_02ce:
	{
		// instance.worldSpace = reader.Read<System.Boolean>(ES3Type_bool.Instance);
		ES3Reader_t2780AF8AA61DA2A817115CEF8612AC0E494D03C9 * L_72 = ___reader0;
		IL2CPP_RUNTIME_CLASS_INIT(ES3Type_bool_t8F309F7B9CC735FF1DEE68081B6E3CAB367745F4_il2cpp_TypeInfo_var);
		ES3Type_t8FBECB7AE75168648B9524E0C2A38DAD4555421D * L_73 = ((ES3Type_bool_t8F309F7B9CC735FF1DEE68081B6E3CAB367745F4_StaticFields*)il2cpp_codegen_static_fields_for(ES3Type_bool_t8F309F7B9CC735FF1DEE68081B6E3CAB367745F4_il2cpp_TypeInfo_var))->get_Instance_12();
		NullCheck((ES3Reader_t2780AF8AA61DA2A817115CEF8612AC0E494D03C9 *)L_72);
		bool L_74;
		L_74 = GenericVirtFuncInvoker1< bool, ES3Type_t8FBECB7AE75168648B9524E0C2A38DAD4555421D * >::Invoke(ES3Reader_Read_TisBoolean_t07D1E3F34E4813023D64F584DFF7B34C9D922F37_mC6D1B158268FF9B97822FF9F5B37FB1723FEDA22_RuntimeMethod_var, (ES3Reader_t2780AF8AA61DA2A817115CEF8612AC0E494D03C9 *)L_72, (ES3Type_t8FBECB7AE75168648B9524E0C2A38DAD4555421D *)L_73);
		TrailModule_set_worldSpace_m42A63AF4A96F24A621A29A0F35240195F0E56B1A((TrailModule_t95D15372971E64A1977B7587ABAA87B1A31EF5C8 *)(TrailModule_t95D15372971E64A1977B7587ABAA87B1A31EF5C8 *)(&V_0), (bool)L_74, /*hidden argument*/NULL);
		// break;
		goto IL_038e;
	}

IL_02e5:
	{
		// instance.dieWithParticles = reader.Read<System.Boolean>(ES3Type_bool.Instance);
		ES3Reader_t2780AF8AA61DA2A817115CEF8612AC0E494D03C9 * L_75 = ___reader0;
		IL2CPP_RUNTIME_CLASS_INIT(ES3Type_bool_t8F309F7B9CC735FF1DEE68081B6E3CAB367745F4_il2cpp_TypeInfo_var);
		ES3Type_t8FBECB7AE75168648B9524E0C2A38DAD4555421D * L_76 = ((ES3Type_bool_t8F309F7B9CC735FF1DEE68081B6E3CAB367745F4_StaticFields*)il2cpp_codegen_static_fields_for(ES3Type_bool_t8F309F7B9CC735FF1DEE68081B6E3CAB367745F4_il2cpp_TypeInfo_var))->get_Instance_12();
		NullCheck((ES3Reader_t2780AF8AA61DA2A817115CEF8612AC0E494D03C9 *)L_75);
		bool L_77;
		L_77 = GenericVirtFuncInvoker1< bool, ES3Type_t8FBECB7AE75168648B9524E0C2A38DAD4555421D * >::Invoke(ES3Reader_Read_TisBoolean_t07D1E3F34E4813023D64F584DFF7B34C9D922F37_mC6D1B158268FF9B97822FF9F5B37FB1723FEDA22_RuntimeMethod_var, (ES3Reader_t2780AF8AA61DA2A817115CEF8612AC0E494D03C9 *)L_75, (ES3Type_t8FBECB7AE75168648B9524E0C2A38DAD4555421D *)L_76);
		TrailModule_set_dieWithParticles_mB7C4E8DC2F908FDF6D57A77B54B821E360D8DA99((TrailModule_t95D15372971E64A1977B7587ABAA87B1A31EF5C8 *)(TrailModule_t95D15372971E64A1977B7587ABAA87B1A31EF5C8 *)(&V_0), (bool)L_77, /*hidden argument*/NULL);
		// break;
		goto IL_038e;
	}

IL_02fc:
	{
		// instance.sizeAffectsWidth = reader.Read<System.Boolean>(ES3Type_bool.Instance);
		ES3Reader_t2780AF8AA61DA2A817115CEF8612AC0E494D03C9 * L_78 = ___reader0;
		IL2CPP_RUNTIME_CLASS_INIT(ES3Type_bool_t8F309F7B9CC735FF1DEE68081B6E3CAB367745F4_il2cpp_TypeInfo_var);
		ES3Type_t8FBECB7AE75168648B9524E0C2A38DAD4555421D * L_79 = ((ES3Type_bool_t8F309F7B9CC735FF1DEE68081B6E3CAB367745F4_StaticFields*)il2cpp_codegen_static_fields_for(ES3Type_bool_t8F309F7B9CC735FF1DEE68081B6E3CAB367745F4_il2cpp_TypeInfo_var))->get_Instance_12();
		NullCheck((ES3Reader_t2780AF8AA61DA2A817115CEF8612AC0E494D03C9 *)L_78);
		bool L_80;
		L_80 = GenericVirtFuncInvoker1< bool, ES3Type_t8FBECB7AE75168648B9524E0C2A38DAD4555421D * >::Invoke(ES3Reader_Read_TisBoolean_t07D1E3F34E4813023D64F584DFF7B34C9D922F37_mC6D1B158268FF9B97822FF9F5B37FB1723FEDA22_RuntimeMethod_var, (ES3Reader_t2780AF8AA61DA2A817115CEF8612AC0E494D03C9 *)L_78, (ES3Type_t8FBECB7AE75168648B9524E0C2A38DAD4555421D *)L_79);
		TrailModule_set_sizeAffectsWidth_m3517856E39080DA69B447499C8846D2491B0ABF0((TrailModule_t95D15372971E64A1977B7587ABAA87B1A31EF5C8 *)(TrailModule_t95D15372971E64A1977B7587ABAA87B1A31EF5C8 *)(&V_0), (bool)L_80, /*hidden argument*/NULL);
		// break;
		goto IL_038e;
	}

IL_0310:
	{
		// instance.sizeAffectsLifetime = reader.Read<System.Boolean>(ES3Type_bool.Instance);
		ES3Reader_t2780AF8AA61DA2A817115CEF8612AC0E494D03C9 * L_81 = ___reader0;
		IL2CPP_RUNTIME_CLASS_INIT(ES3Type_bool_t8F309F7B9CC735FF1DEE68081B6E3CAB367745F4_il2cpp_TypeInfo_var);
		ES3Type_t8FBECB7AE75168648B9524E0C2A38DAD4555421D * L_82 = ((ES3Type_bool_t8F309F7B9CC735FF1DEE68081B6E3CAB367745F4_StaticFields*)il2cpp_codegen_static_fields_for(ES3Type_bool_t8F309F7B9CC735FF1DEE68081B6E3CAB367745F4_il2cpp_TypeInfo_var))->get_Instance_12();
		NullCheck((ES3Reader_t2780AF8AA61DA2A817115CEF8612AC0E494D03C9 *)L_81);
		bool L_83;
		L_83 = GenericVirtFuncInvoker1< bool, ES3Type_t8FBECB7AE75168648B9524E0C2A38DAD4555421D * >::Invoke(ES3Reader_Read_TisBoolean_t07D1E3F34E4813023D64F584DFF7B34C9D922F37_mC6D1B158268FF9B97822FF9F5B37FB1723FEDA22_RuntimeMethod_var, (ES3Reader_t2780AF8AA61DA2A817115CEF8612AC0E494D03C9 *)L_81, (ES3Type_t8FBECB7AE75168648B9524E0C2A38DAD4555421D *)L_82);
		TrailModule_set_sizeAffectsLifetime_m98BF4A6594193D824B52D88371CF963ACBA388FD((TrailModule_t95D15372971E64A1977B7587ABAA87B1A31EF5C8 *)(TrailModule_t95D15372971E64A1977B7587ABAA87B1A31EF5C8 *)(&V_0), (bool)L_83, /*hidden argument*/NULL);
		// break;
		goto IL_038e;
	}

IL_0324:
	{
		// instance.inheritParticleColor = reader.Read<System.Boolean>(ES3Type_bool.Instance);
		ES3Reader_t2780AF8AA61DA2A817115CEF8612AC0E494D03C9 * L_84 = ___reader0;
		IL2CPP_RUNTIME_CLASS_INIT(ES3Type_bool_t8F309F7B9CC735FF1DEE68081B6E3CAB367745F4_il2cpp_TypeInfo_var);
		ES3Type_t8FBECB7AE75168648B9524E0C2A38DAD4555421D * L_85 = ((ES3Type_bool_t8F309F7B9CC735FF1DEE68081B6E3CAB367745F4_StaticFields*)il2cpp_codegen_static_fields_for(ES3Type_bool_t8F309F7B9CC735FF1DEE68081B6E3CAB367745F4_il2cpp_TypeInfo_var))->get_Instance_12();
		NullCheck((ES3Reader_t2780AF8AA61DA2A817115CEF8612AC0E494D03C9 *)L_84);
		bool L_86;
		L_86 = GenericVirtFuncInvoker1< bool, ES3Type_t8FBECB7AE75168648B9524E0C2A38DAD4555421D * >::Invoke(ES3Reader_Read_TisBoolean_t07D1E3F34E4813023D64F584DFF7B34C9D922F37_mC6D1B158268FF9B97822FF9F5B37FB1723FEDA22_RuntimeMethod_var, (ES3Reader_t2780AF8AA61DA2A817115CEF8612AC0E494D03C9 *)L_84, (ES3Type_t8FBECB7AE75168648B9524E0C2A38DAD4555421D *)L_85);
		TrailModule_set_inheritParticleColor_mCD83E87B5E00F2BFFBE08AD2D1D68606283A4FEE((TrailModule_t95D15372971E64A1977B7587ABAA87B1A31EF5C8 *)(TrailModule_t95D15372971E64A1977B7587ABAA87B1A31EF5C8 *)(&V_0), (bool)L_86, /*hidden argument*/NULL);
		// break;
		goto IL_038e;
	}

IL_0338:
	{
		// instance.colorOverLifetime = reader.Read<UnityEngine.ParticleSystem.MinMaxGradient>(ES3Type_MinMaxGradient.Instance);
		ES3Reader_t2780AF8AA61DA2A817115CEF8612AC0E494D03C9 * L_87 = ___reader0;
		IL2CPP_RUNTIME_CLASS_INIT(ES3Type_MinMaxGradient_t5DD353D60E95642AB39D1C97C6FD6DD1B067D3CF_il2cpp_TypeInfo_var);
		ES3Type_t8FBECB7AE75168648B9524E0C2A38DAD4555421D * L_88 = ((ES3Type_MinMaxGradient_t5DD353D60E95642AB39D1C97C6FD6DD1B067D3CF_StaticFields*)il2cpp_codegen_static_fields_for(ES3Type_MinMaxGradient_t5DD353D60E95642AB39D1C97C6FD6DD1B067D3CF_il2cpp_TypeInfo_var))->get_Instance_12();
		NullCheck((ES3Reader_t2780AF8AA61DA2A817115CEF8612AC0E494D03C9 *)L_87);
		MinMaxGradient_tF4530B26F29D9635D670A33B9EE581EAC48C12B7  L_89;
		L_89 = GenericVirtFuncInvoker1< MinMaxGradient_tF4530B26F29D9635D670A33B9EE581EAC48C12B7 , ES3Type_t8FBECB7AE75168648B9524E0C2A38DAD4555421D * >::Invoke(ES3Reader_Read_TisMinMaxGradient_tF4530B26F29D9635D670A33B9EE581EAC48C12B7_m6A3DD8CBBAC5D32B838B6C4399009AB8AA512ACC_RuntimeMethod_var, (ES3Reader_t2780AF8AA61DA2A817115CEF8612AC0E494D03C9 *)L_87, (ES3Type_t8FBECB7AE75168648B9524E0C2A38DAD4555421D *)L_88);
		TrailModule_set_colorOverLifetime_mCD56BD4B75D3A3947069BA1B93FEC78AAE08DF27((TrailModule_t95D15372971E64A1977B7587ABAA87B1A31EF5C8 *)(TrailModule_t95D15372971E64A1977B7587ABAA87B1A31EF5C8 *)(&V_0), (MinMaxGradient_tF4530B26F29D9635D670A33B9EE581EAC48C12B7 )L_89, /*hidden argument*/NULL);
		// break;
		goto IL_038e;
	}

IL_034c:
	{
		// instance.widthOverTrail = reader.Read<UnityEngine.ParticleSystem.MinMaxCurve>(ES3Type_MinMaxCurve.Instance);
		ES3Reader_t2780AF8AA61DA2A817115CEF8612AC0E494D03C9 * L_90 = ___reader0;
		IL2CPP_RUNTIME_CLASS_INIT(ES3Type_MinMaxCurve_tC5342BF0F8735B85CB5E16FDD4C6FACC8AFAD3B7_il2cpp_TypeInfo_var);
		ES3Type_t8FBECB7AE75168648B9524E0C2A38DAD4555421D * L_91 = ((ES3Type_MinMaxCurve_tC5342BF0F8735B85CB5E16FDD4C6FACC8AFAD3B7_StaticFields*)il2cpp_codegen_static_fields_for(ES3Type_MinMaxCurve_tC5342BF0F8735B85CB5E16FDD4C6FACC8AFAD3B7_il2cpp_TypeInfo_var))->get_Instance_12();
		NullCheck((ES3Reader_t2780AF8AA61DA2A817115CEF8612AC0E494D03C9 *)L_90);
		MinMaxCurve_tF036239442AB2D438B1EDABEBC785426871084CD  L_92;
		L_92 = GenericVirtFuncInvoker1< MinMaxCurve_tF036239442AB2D438B1EDABEBC785426871084CD , ES3Type_t8FBECB7AE75168648B9524E0C2A38DAD4555421D * >::Invoke(ES3Reader_Read_TisMinMaxCurve_tF036239442AB2D438B1EDABEBC785426871084CD_mD285150CBFB52440643BBECB5ADF4EE8DE940535_RuntimeMethod_var, (ES3Reader_t2780AF8AA61DA2A817115CEF8612AC0E494D03C9 *)L_90, (ES3Type_t8FBECB7AE75168648B9524E0C2A38DAD4555421D *)L_91);
		TrailModule_set_widthOverTrail_m6C0A896EBFDED7CE46344B3A0B04212934F30DE1((TrailModule_t95D15372971E64A1977B7587ABAA87B1A31EF5C8 *)(TrailModule_t95D15372971E64A1977B7587ABAA87B1A31EF5C8 *)(&V_0), (MinMaxCurve_tF036239442AB2D438B1EDABEBC785426871084CD )L_92, /*hidden argument*/NULL);
		// break;
		goto IL_038e;
	}

IL_0360:
	{
		// instance.widthOverTrailMultiplier = reader.Read<System.Single>(ES3Type_float.Instance);
		ES3Reader_t2780AF8AA61DA2A817115CEF8612AC0E494D03C9 * L_93 = ___reader0;
		IL2CPP_RUNTIME_CLASS_INIT(ES3Type_float_tF86B773C86731BD9AD79448B860BBB178FE77644_il2cpp_TypeInfo_var);
		ES3Type_t8FBECB7AE75168648B9524E0C2A38DAD4555421D * L_94 = ((ES3Type_float_tF86B773C86731BD9AD79448B860BBB178FE77644_StaticFields*)il2cpp_codegen_static_fields_for(ES3Type_float_tF86B773C86731BD9AD79448B860BBB178FE77644_il2cpp_TypeInfo_var))->get_Instance_12();
		NullCheck((ES3Reader_t2780AF8AA61DA2A817115CEF8612AC0E494D03C9 *)L_93);
		float L_95;
		L_95 = GenericVirtFuncInvoker1< float, ES3Type_t8FBECB7AE75168648B9524E0C2A38DAD4555421D * >::Invoke(ES3Reader_Read_TisSingle_tE07797BA3C98D4CA9B5A19413C19A76688AB899E_m4A0416374498BDA042B8EB21E49B72326D6CE5F4_RuntimeMethod_var, (ES3Reader_t2780AF8AA61DA2A817115CEF8612AC0E494D03C9 *)L_93, (ES3Type_t8FBECB7AE75168648B9524E0C2A38DAD4555421D *)L_94);
		TrailModule_set_widthOverTrailMultiplier_m6A7EA2856CF30B710CCB528EA3EBFD1799C19BD4((TrailModule_t95D15372971E64A1977B7587ABAA87B1A31EF5C8 *)(TrailModule_t95D15372971E64A1977B7587ABAA87B1A31EF5C8 *)(&V_0), (float)L_95, /*hidden argument*/NULL);
		// break;
		goto IL_038e;
	}

IL_0374:
	{
		// instance.colorOverTrail = reader.Read<UnityEngine.ParticleSystem.MinMaxGradient>(ES3Type_MinMaxGradient.Instance);
		ES3Reader_t2780AF8AA61DA2A817115CEF8612AC0E494D03C9 * L_96 = ___reader0;
		IL2CPP_RUNTIME_CLASS_INIT(ES3Type_MinMaxGradient_t5DD353D60E95642AB39D1C97C6FD6DD1B067D3CF_il2cpp_TypeInfo_var);
		ES3Type_t8FBECB7AE75168648B9524E0C2A38DAD4555421D * L_97 = ((ES3Type_MinMaxGradient_t5DD353D60E95642AB39D1C97C6FD6DD1B067D3CF_StaticFields*)il2cpp_codegen_static_fields_for(ES3Type_MinMaxGradient_t5DD353D60E95642AB39D1C97C6FD6DD1B067D3CF_il2cpp_TypeInfo_var))->get_Instance_12();
		NullCheck((ES3Reader_t2780AF8AA61DA2A817115CEF8612AC0E494D03C9 *)L_96);
		MinMaxGradient_tF4530B26F29D9635D670A33B9EE581EAC48C12B7  L_98;
		L_98 = GenericVirtFuncInvoker1< MinMaxGradient_tF4530B26F29D9635D670A33B9EE581EAC48C12B7 , ES3Type_t8FBECB7AE75168648B9524E0C2A38DAD4555421D * >::Invoke(ES3Reader_Read_TisMinMaxGradient_tF4530B26F29D9635D670A33B9EE581EAC48C12B7_m6A3DD8CBBAC5D32B838B6C4399009AB8AA512ACC_RuntimeMethod_var, (ES3Reader_t2780AF8AA61DA2A817115CEF8612AC0E494D03C9 *)L_96, (ES3Type_t8FBECB7AE75168648B9524E0C2A38DAD4555421D *)L_97);
		TrailModule_set_colorOverTrail_m8440C6574C8310292B93D70EA4FE3EE8C40DF8DB((TrailModule_t95D15372971E64A1977B7587ABAA87B1A31EF5C8 *)(TrailModule_t95D15372971E64A1977B7587ABAA87B1A31EF5C8 *)(&V_0), (MinMaxGradient_tF4530B26F29D9635D670A33B9EE581EAC48C12B7 )L_98, /*hidden argument*/NULL);
		// break;
		goto IL_038e;
	}

IL_0388:
	{
		// reader.Skip();
		ES3Reader_t2780AF8AA61DA2A817115CEF8612AC0E494D03C9 * L_99 = ___reader0;
		NullCheck((ES3Reader_t2780AF8AA61DA2A817115CEF8612AC0E494D03C9 *)L_99);
		VirtActionInvoker0::Invoke(41 /* System.Void ES3Reader::Skip() */, (ES3Reader_t2780AF8AA61DA2A817115CEF8612AC0E494D03C9 *)L_99);
	}

IL_038e:
	{
		// while((propertyName = reader.ReadPropertyName()) != null)
		ES3Reader_t2780AF8AA61DA2A817115CEF8612AC0E494D03C9 * L_100 = ___reader0;
		NullCheck((ES3Reader_t2780AF8AA61DA2A817115CEF8612AC0E494D03C9 *)L_100);
		String_t* L_101;
		L_101 = VirtFuncInvoker0< String_t* >::Invoke(21 /* System.String ES3Reader::ReadPropertyName() */, (ES3Reader_t2780AF8AA61DA2A817115CEF8612AC0E494D03C9 *)L_100);
		String_t* L_102 = (String_t*)L_101;
		V_1 = (String_t*)L_102;
		if (L_102)
		{
			goto IL_000c;
		}
	}
	{
		// }
		return;
	}
}
// System.Void ES3Types.ES3Type_TrailModule::ReadInto<UnityEngine.ParticleSystem/NoiseModule>(ES3Reader,System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ES3Type_TrailModule_ReadInto_TisNoiseModule_t74C71EB8386C1CF92A748B051690D34F4CB04591_mBC4DC291562EC19272E15A538A7E288E4137A0A6_gshared (ES3Type_TrailModule_tC773F73EC0443516DD128FF2B5AE010809742462 * __this, ES3Reader_t2780AF8AA61DA2A817115CEF8612AC0E494D03C9 * ___reader0, RuntimeObject * ___obj1, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ES3Reader_Read_TisBoolean_t07D1E3F34E4813023D64F584DFF7B34C9D922F37_mC6D1B158268FF9B97822FF9F5B37FB1723FEDA22_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ES3Reader_Read_TisMinMaxCurve_tF036239442AB2D438B1EDABEBC785426871084CD_mD285150CBFB52440643BBECB5ADF4EE8DE940535_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ES3Reader_Read_TisMinMaxGradient_tF4530B26F29D9635D670A33B9EE581EAC48C12B7_m6A3DD8CBBAC5D32B838B6C4399009AB8AA512ACC_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ES3Reader_Read_TisParticleSystemTrailTextureMode_tF3259187CA4D0A61EDB3A40E63CBF6C42641CE9F_m055DB1212E8BC34F385DF7D302F16241554E9730_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ES3Reader_Read_TisSingle_tE07797BA3C98D4CA9B5A19413C19A76688AB899E_m4A0416374498BDA042B8EB21E49B72326D6CE5F4_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ES3Type_MinMaxCurve_tC5342BF0F8735B85CB5E16FDD4C6FACC8AFAD3B7_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ES3Type_MinMaxGradient_t5DD353D60E95642AB39D1C97C6FD6DD1B067D3CF_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ES3Type_bool_t8F309F7B9CC735FF1DEE68081B6E3CAB367745F4_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ES3Type_float_tF86B773C86731BD9AD79448B860BBB178FE77644_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&TrailModule_t95D15372971E64A1977B7587ABAA87B1A31EF5C8_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral1D87A56AE67B2CD49CAE6E942C2FB7AD98925C00);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral354281948B6269615E32D856CF85B6F456724DAA);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral4221314F268D184F46688D45C85446821F1F1BC3);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral47C47DD09640803AD8016748EAE1F04DD1D41119);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral5C86338F177203D001C41D9C348A83D1338CC7D0);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral60126327537B7B8E6EE33C43FE0C5CA8BCC3A06A);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral87F70660D62DE5FC257FBADE9DA4EC9188597DE5);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralA967787586EC9E5A17A9C55E2002AB73A5E21A0A);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralADAEB0839588196B349BDB6CF33AFA3E0736360B);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralBE2893848F9FC647C2288DA6581A1522E9695182);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralBF540D6548854CC21630064FBA5390C9409C86F0);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralC580B374AA991574F91DFC86C068E7FAD661A3A4);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralE049DB547285CFCE1CB9A95934B6B6DCE2D219EC);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralF9D225733E1D10F9344C755C4A9C0870CD1DE97B);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralFE5F89F63E2381500F62A7CBD6954563BE44562F);
		s_Il2CppMethodInitialized = true;
	}
	TrailModule_t95D15372971E64A1977B7587ABAA87B1A31EF5C8  V_0;
	memset((&V_0), 0, sizeof(V_0));
	String_t* V_1 = NULL;
	uint32_t V_2 = 0;
	{
		// var instance = (UnityEngine.ParticleSystem.TrailModule)obj;
		RuntimeObject * L_0 = ___obj1;
		V_0 = (TrailModule_t95D15372971E64A1977B7587ABAA87B1A31EF5C8 )((*(TrailModule_t95D15372971E64A1977B7587ABAA87B1A31EF5C8 *)((TrailModule_t95D15372971E64A1977B7587ABAA87B1A31EF5C8 *)UnBox(L_0, TrailModule_t95D15372971E64A1977B7587ABAA87B1A31EF5C8_il2cpp_TypeInfo_var))));
		goto IL_038e;
	}

IL_000c:
	{
		String_t* L_1 = V_1;
		if (!L_1)
		{
			goto IL_0388;
		}
	}
	{
		String_t* L_2 = V_1;
		uint32_t L_3;
		L_3 = U3CPrivateImplementationDetailsU3E_ComputeStringHash_m3ADC1F612F9EE3DD518E6F0023A0DE0EE2B120A7((String_t*)L_2, /*hidden argument*/NULL);
		V_2 = (uint32_t)L_3;
		uint32_t L_4 = V_2;
		if ((!(((uint32_t)L_4) <= ((uint32_t)((int32_t)1376955374)))))
		{
			goto IL_008d;
		}
	}
	{
		uint32_t L_5 = V_2;
		if ((!(((uint32_t)L_5) <= ((uint32_t)((int32_t)494095910)))))
		{
			goto IL_004f;
		}
	}
	{
		uint32_t L_6 = V_2;
		if ((((int32_t)L_6) == ((int32_t)((int32_t)49525662))))
		{
			goto IL_010e;
		}
	}
	{
		uint32_t L_7 = V_2;
		if ((((int32_t)L_7) == ((int32_t)((int32_t)341298456))))
		{
			goto IL_021f;
		}
	}
	{
		uint32_t L_8 = V_2;
		if ((((int32_t)L_8) == ((int32_t)((int32_t)494095910))))
		{
			goto IL_0234;
		}
	}
	{
		goto IL_0388;
	}

IL_004f:
	{
		uint32_t L_9 = V_2;
		if ((!(((uint32_t)L_9) <= ((uint32_t)((int32_t)973733911)))))
		{
			goto IL_0072;
		}
	}
	{
		uint32_t L_10 = V_2;
		if ((((int32_t)L_10) == ((int32_t)((int32_t)559929418))))
		{
			goto IL_01b6;
		}
	}
	{
		uint32_t L_11 = V_2;
		if ((((int32_t)L_11) == ((int32_t)((int32_t)973733911))))
		{
			goto IL_0177;
		}
	}
	{
		goto IL_0388;
	}

IL_0072:
	{
		uint32_t L_12 = V_2;
		if ((((int32_t)L_12) == ((int32_t)((int32_t)1024708593))))
		{
			goto IL_014d;
		}
	}
	{
		uint32_t L_13 = V_2;
		if ((((int32_t)L_13) == ((int32_t)((int32_t)1376955374))))
		{
			goto IL_0138;
		}
	}
	{
		goto IL_0388;
	}

IL_008d:
	{
		uint32_t L_14 = V_2;
		if ((!(((uint32_t)L_14) <= ((uint32_t)((int32_t)-2100707162)))))
		{
			goto IL_00d3;
		}
	}
	{
		uint32_t L_15 = V_2;
		if ((!(((uint32_t)L_15) <= ((uint32_t)((int32_t)1975189197)))))
		{
			goto IL_00b8;
		}
	}
	{
		uint32_t L_16 = V_2;
		if ((((int32_t)L_16) == ((int32_t)((int32_t)1546474083))))
		{
			goto IL_020a;
		}
	}
	{
		uint32_t L_17 = V_2;
		if ((((int32_t)L_17) == ((int32_t)((int32_t)1975189197))))
		{
			goto IL_01cb;
		}
	}
	{
		goto IL_0388;
	}

IL_00b8:
	{
		uint32_t L_18 = V_2;
		if ((((int32_t)L_18) == ((int32_t)((int32_t)2053023684))))
		{
			goto IL_01a1;
		}
	}
	{
		uint32_t L_19 = V_2;
		if ((((int32_t)L_19) == ((int32_t)((int32_t)-2100707162))))
		{
			goto IL_0162;
		}
	}
	{
		goto IL_0388;
	}

IL_00d3:
	{
		uint32_t L_20 = V_2;
		if ((!(((uint32_t)L_20) <= ((uint32_t)((int32_t)-1319579393)))))
		{
			goto IL_00f6;
		}
	}
	{
		uint32_t L_21 = V_2;
		if ((((int32_t)L_21) == ((int32_t)((int32_t)-1562862963))))
		{
			goto IL_01e0;
		}
	}
	{
		uint32_t L_22 = V_2;
		if ((((int32_t)L_22) == ((int32_t)((int32_t)-1319579393))))
		{
			goto IL_018c;
		}
	}
	{
		goto IL_0388;
	}

IL_00f6:
	{
		uint32_t L_23 = V_2;
		if ((((int32_t)L_23) == ((int32_t)((int32_t)-1055777148))))
		{
			goto IL_0123;
		}
	}
	{
		uint32_t L_24 = V_2;
		if ((((int32_t)L_24) == ((int32_t)((int32_t)-413379935))))
		{
			goto IL_01f5;
		}
	}
	{
		goto IL_0388;
	}

IL_010e:
	{
		String_t* L_25 = V_1;
		bool L_26;
		L_26 = String_op_Equality_m50B3548E4AC232558190B0052877B290AA1D436A((String_t*)L_25, (String_t*)_stringLiteralF9D225733E1D10F9344C755C4A9C0870CD1DE97B, /*hidden argument*/NULL);
		if (L_26)
		{
			goto IL_0249;
		}
	}
	{
		goto IL_0388;
	}

IL_0123:
	{
		String_t* L_27 = V_1;
		bool L_28;
		L_28 = String_op_Equality_m50B3548E4AC232558190B0052877B290AA1D436A((String_t*)L_27, (String_t*)_stringLiteral60126327537B7B8E6EE33C43FE0C5CA8BCC3A06A, /*hidden argument*/NULL);
		if (L_28)
		{
			goto IL_0260;
		}
	}
	{
		goto IL_0388;
	}

IL_0138:
	{
		String_t* L_29 = V_1;
		bool L_30;
		L_30 = String_op_Equality_m50B3548E4AC232558190B0052877B290AA1D436A((String_t*)L_29, (String_t*)_stringLiteralBE2893848F9FC647C2288DA6581A1522E9695182, /*hidden argument*/NULL);
		if (L_30)
		{
			goto IL_0277;
		}
	}
	{
		goto IL_0388;
	}

IL_014d:
	{
		String_t* L_31 = V_1;
		bool L_32;
		L_32 = String_op_Equality_m50B3548E4AC232558190B0052877B290AA1D436A((String_t*)L_31, (String_t*)_stringLiteral4221314F268D184F46688D45C85446821F1F1BC3, /*hidden argument*/NULL);
		if (L_32)
		{
			goto IL_028e;
		}
	}
	{
		goto IL_0388;
	}

IL_0162:
	{
		String_t* L_33 = V_1;
		bool L_34;
		L_34 = String_op_Equality_m50B3548E4AC232558190B0052877B290AA1D436A((String_t*)L_33, (String_t*)_stringLiteral5C86338F177203D001C41D9C348A83D1338CC7D0, /*hidden argument*/NULL);
		if (L_34)
		{
			goto IL_02a5;
		}
	}
	{
		goto IL_0388;
	}

IL_0177:
	{
		String_t* L_35 = V_1;
		bool L_36;
		L_36 = String_op_Equality_m50B3548E4AC232558190B0052877B290AA1D436A((String_t*)L_35, (String_t*)_stringLiteralFE5F89F63E2381500F62A7CBD6954563BE44562F, /*hidden argument*/NULL);
		if (L_36)
		{
			goto IL_02bc;
		}
	}
	{
		goto IL_0388;
	}

IL_018c:
	{
		String_t* L_37 = V_1;
		bool L_38;
		L_38 = String_op_Equality_m50B3548E4AC232558190B0052877B290AA1D436A((String_t*)L_37, (String_t*)_stringLiteral87F70660D62DE5FC257FBADE9DA4EC9188597DE5, /*hidden argument*/NULL);
		if (L_38)
		{
			goto IL_02ce;
		}
	}
	{
		goto IL_0388;
	}

IL_01a1:
	{
		String_t* L_39 = V_1;
		bool L_40;
		L_40 = String_op_Equality_m50B3548E4AC232558190B0052877B290AA1D436A((String_t*)L_39, (String_t*)_stringLiteral354281948B6269615E32D856CF85B6F456724DAA, /*hidden argument*/NULL);
		if (L_40)
		{
			goto IL_02e5;
		}
	}
	{
		goto IL_0388;
	}

IL_01b6:
	{
		String_t* L_41 = V_1;
		bool L_42;
		L_42 = String_op_Equality_m50B3548E4AC232558190B0052877B290AA1D436A((String_t*)L_41, (String_t*)_stringLiteralADAEB0839588196B349BDB6CF33AFA3E0736360B, /*hidden argument*/NULL);
		if (L_42)
		{
			goto IL_02fc;
		}
	}
	{
		goto IL_0388;
	}

IL_01cb:
	{
		String_t* L_43 = V_1;
		bool L_44;
		L_44 = String_op_Equality_m50B3548E4AC232558190B0052877B290AA1D436A((String_t*)L_43, (String_t*)_stringLiteralC580B374AA991574F91DFC86C068E7FAD661A3A4, /*hidden argument*/NULL);
		if (L_44)
		{
			goto IL_0310;
		}
	}
	{
		goto IL_0388;
	}

IL_01e0:
	{
		String_t* L_45 = V_1;
		bool L_46;
		L_46 = String_op_Equality_m50B3548E4AC232558190B0052877B290AA1D436A((String_t*)L_45, (String_t*)_stringLiteralE049DB547285CFCE1CB9A95934B6B6DCE2D219EC, /*hidden argument*/NULL);
		if (L_46)
		{
			goto IL_0324;
		}
	}
	{
		goto IL_0388;
	}

IL_01f5:
	{
		String_t* L_47 = V_1;
		bool L_48;
		L_48 = String_op_Equality_m50B3548E4AC232558190B0052877B290AA1D436A((String_t*)L_47, (String_t*)_stringLiteralBF540D6548854CC21630064FBA5390C9409C86F0, /*hidden argument*/NULL);
		if (L_48)
		{
			goto IL_0338;
		}
	}
	{
		goto IL_0388;
	}

IL_020a:
	{
		String_t* L_49 = V_1;
		bool L_50;
		L_50 = String_op_Equality_m50B3548E4AC232558190B0052877B290AA1D436A((String_t*)L_49, (String_t*)_stringLiteral1D87A56AE67B2CD49CAE6E942C2FB7AD98925C00, /*hidden argument*/NULL);
		if (L_50)
		{
			goto IL_034c;
		}
	}
	{
		goto IL_0388;
	}

IL_021f:
	{
		String_t* L_51 = V_1;
		bool L_52;
		L_52 = String_op_Equality_m50B3548E4AC232558190B0052877B290AA1D436A((String_t*)L_51, (String_t*)_stringLiteralA967787586EC9E5A17A9C55E2002AB73A5E21A0A, /*hidden argument*/NULL);
		if (L_52)
		{
			goto IL_0360;
		}
	}
	{
		goto IL_0388;
	}

IL_0234:
	{
		String_t* L_53 = V_1;
		bool L_54;
		L_54 = String_op_Equality_m50B3548E4AC232558190B0052877B290AA1D436A((String_t*)L_53, (String_t*)_stringLiteral47C47DD09640803AD8016748EAE1F04DD1D41119, /*hidden argument*/NULL);
		if (L_54)
		{
			goto IL_0374;
		}
	}
	{
		goto IL_0388;
	}

IL_0249:
	{
		// instance.enabled = reader.Read<System.Boolean>(ES3Type_bool.Instance);
		ES3Reader_t2780AF8AA61DA2A817115CEF8612AC0E494D03C9 * L_55 = ___reader0;
		IL2CPP_RUNTIME_CLASS_INIT(ES3Type_bool_t8F309F7B9CC735FF1DEE68081B6E3CAB367745F4_il2cpp_TypeInfo_var);
		ES3Type_t8FBECB7AE75168648B9524E0C2A38DAD4555421D * L_56 = ((ES3Type_bool_t8F309F7B9CC735FF1DEE68081B6E3CAB367745F4_StaticFields*)il2cpp_codegen_static_fields_for(ES3Type_bool_t8F309F7B9CC735FF1DEE68081B6E3CAB367745F4_il2cpp_TypeInfo_var))->get_Instance_12();
		NullCheck((ES3Reader_t2780AF8AA61DA2A817115CEF8612AC0E494D03C9 *)L_55);
		bool L_57;
		L_57 = GenericVirtFuncInvoker1< bool, ES3Type_t8FBECB7AE75168648B9524E0C2A38DAD4555421D * >::Invoke(ES3Reader_Read_TisBoolean_t07D1E3F34E4813023D64F584DFF7B34C9D922F37_mC6D1B158268FF9B97822FF9F5B37FB1723FEDA22_RuntimeMethod_var, (ES3Reader_t2780AF8AA61DA2A817115CEF8612AC0E494D03C9 *)L_55, (ES3Type_t8FBECB7AE75168648B9524E0C2A38DAD4555421D *)L_56);
		TrailModule_set_enabled_mFC8451DDDF40CCBB3E32A4B30A001115F6346894((TrailModule_t95D15372971E64A1977B7587ABAA87B1A31EF5C8 *)(TrailModule_t95D15372971E64A1977B7587ABAA87B1A31EF5C8 *)(&V_0), (bool)L_57, /*hidden argument*/NULL);
		// break;
		goto IL_038e;
	}

IL_0260:
	{
		// instance.ratio = reader.Read<System.Single>(ES3Type_float.Instance);
		ES3Reader_t2780AF8AA61DA2A817115CEF8612AC0E494D03C9 * L_58 = ___reader0;
		IL2CPP_RUNTIME_CLASS_INIT(ES3Type_float_tF86B773C86731BD9AD79448B860BBB178FE77644_il2cpp_TypeInfo_var);
		ES3Type_t8FBECB7AE75168648B9524E0C2A38DAD4555421D * L_59 = ((ES3Type_float_tF86B773C86731BD9AD79448B860BBB178FE77644_StaticFields*)il2cpp_codegen_static_fields_for(ES3Type_float_tF86B773C86731BD9AD79448B860BBB178FE77644_il2cpp_TypeInfo_var))->get_Instance_12();
		NullCheck((ES3Reader_t2780AF8AA61DA2A817115CEF8612AC0E494D03C9 *)L_58);
		float L_60;
		L_60 = GenericVirtFuncInvoker1< float, ES3Type_t8FBECB7AE75168648B9524E0C2A38DAD4555421D * >::Invoke(ES3Reader_Read_TisSingle_tE07797BA3C98D4CA9B5A19413C19A76688AB899E_m4A0416374498BDA042B8EB21E49B72326D6CE5F4_RuntimeMethod_var, (ES3Reader_t2780AF8AA61DA2A817115CEF8612AC0E494D03C9 *)L_58, (ES3Type_t8FBECB7AE75168648B9524E0C2A38DAD4555421D *)L_59);
		TrailModule_set_ratio_m34E63B34E7B0E8D037AD45532B2E2D5BD0750189((TrailModule_t95D15372971E64A1977B7587ABAA87B1A31EF5C8 *)(TrailModule_t95D15372971E64A1977B7587ABAA87B1A31EF5C8 *)(&V_0), (float)L_60, /*hidden argument*/NULL);
		// break;
		goto IL_038e;
	}

IL_0277:
	{
		// instance.lifetime = reader.Read<UnityEngine.ParticleSystem.MinMaxCurve>(ES3Type_MinMaxCurve.Instance);
		ES3Reader_t2780AF8AA61DA2A817115CEF8612AC0E494D03C9 * L_61 = ___reader0;
		IL2CPP_RUNTIME_CLASS_INIT(ES3Type_MinMaxCurve_tC5342BF0F8735B85CB5E16FDD4C6FACC8AFAD3B7_il2cpp_TypeInfo_var);
		ES3Type_t8FBECB7AE75168648B9524E0C2A38DAD4555421D * L_62 = ((ES3Type_MinMaxCurve_tC5342BF0F8735B85CB5E16FDD4C6FACC8AFAD3B7_StaticFields*)il2cpp_codegen_static_fields_for(ES3Type_MinMaxCurve_tC5342BF0F8735B85CB5E16FDD4C6FACC8AFAD3B7_il2cpp_TypeInfo_var))->get_Instance_12();
		NullCheck((ES3Reader_t2780AF8AA61DA2A817115CEF8612AC0E494D03C9 *)L_61);
		MinMaxCurve_tF036239442AB2D438B1EDABEBC785426871084CD  L_63;
		L_63 = GenericVirtFuncInvoker1< MinMaxCurve_tF036239442AB2D438B1EDABEBC785426871084CD , ES3Type_t8FBECB7AE75168648B9524E0C2A38DAD4555421D * >::Invoke(ES3Reader_Read_TisMinMaxCurve_tF036239442AB2D438B1EDABEBC785426871084CD_mD285150CBFB52440643BBECB5ADF4EE8DE940535_RuntimeMethod_var, (ES3Reader_t2780AF8AA61DA2A817115CEF8612AC0E494D03C9 *)L_61, (ES3Type_t8FBECB7AE75168648B9524E0C2A38DAD4555421D *)L_62);
		TrailModule_set_lifetime_m57C898C42B9F18F5A0E88AAA7B10276CC158C39D((TrailModule_t95D15372971E64A1977B7587ABAA87B1A31EF5C8 *)(TrailModule_t95D15372971E64A1977B7587ABAA87B1A31EF5C8 *)(&V_0), (MinMaxCurve_tF036239442AB2D438B1EDABEBC785426871084CD )L_63, /*hidden argument*/NULL);
		// break;
		goto IL_038e;
	}

IL_028e:
	{
		// instance.lifetimeMultiplier = reader.Read<System.Single>(ES3Type_float.Instance);
		ES3Reader_t2780AF8AA61DA2A817115CEF8612AC0E494D03C9 * L_64 = ___reader0;
		IL2CPP_RUNTIME_CLASS_INIT(ES3Type_float_tF86B773C86731BD9AD79448B860BBB178FE77644_il2cpp_TypeInfo_var);
		ES3Type_t8FBECB7AE75168648B9524E0C2A38DAD4555421D * L_65 = ((ES3Type_float_tF86B773C86731BD9AD79448B860BBB178FE77644_StaticFields*)il2cpp_codegen_static_fields_for(ES3Type_float_tF86B773C86731BD9AD79448B860BBB178FE77644_il2cpp_TypeInfo_var))->get_Instance_12();
		NullCheck((ES3Reader_t2780AF8AA61DA2A817115CEF8612AC0E494D03C9 *)L_64);
		float L_66;
		L_66 = GenericVirtFuncInvoker1< float, ES3Type_t8FBECB7AE75168648B9524E0C2A38DAD4555421D * >::Invoke(ES3Reader_Read_TisSingle_tE07797BA3C98D4CA9B5A19413C19A76688AB899E_m4A0416374498BDA042B8EB21E49B72326D6CE5F4_RuntimeMethod_var, (ES3Reader_t2780AF8AA61DA2A817115CEF8612AC0E494D03C9 *)L_64, (ES3Type_t8FBECB7AE75168648B9524E0C2A38DAD4555421D *)L_65);
		TrailModule_set_lifetimeMultiplier_m23F95D65EE8C82152AE1CF2E41531EC2789A866B((TrailModule_t95D15372971E64A1977B7587ABAA87B1A31EF5C8 *)(TrailModule_t95D15372971E64A1977B7587ABAA87B1A31EF5C8 *)(&V_0), (float)L_66, /*hidden argument*/NULL);
		// break;
		goto IL_038e;
	}

IL_02a5:
	{
		// instance.minVertexDistance = reader.Read<System.Single>(ES3Type_float.Instance);
		ES3Reader_t2780AF8AA61DA2A817115CEF8612AC0E494D03C9 * L_67 = ___reader0;
		IL2CPP_RUNTIME_CLASS_INIT(ES3Type_float_tF86B773C86731BD9AD79448B860BBB178FE77644_il2cpp_TypeInfo_var);
		ES3Type_t8FBECB7AE75168648B9524E0C2A38DAD4555421D * L_68 = ((ES3Type_float_tF86B773C86731BD9AD79448B860BBB178FE77644_StaticFields*)il2cpp_codegen_static_fields_for(ES3Type_float_tF86B773C86731BD9AD79448B860BBB178FE77644_il2cpp_TypeInfo_var))->get_Instance_12();
		NullCheck((ES3Reader_t2780AF8AA61DA2A817115CEF8612AC0E494D03C9 *)L_67);
		float L_69;
		L_69 = GenericVirtFuncInvoker1< float, ES3Type_t8FBECB7AE75168648B9524E0C2A38DAD4555421D * >::Invoke(ES3Reader_Read_TisSingle_tE07797BA3C98D4CA9B5A19413C19A76688AB899E_m4A0416374498BDA042B8EB21E49B72326D6CE5F4_RuntimeMethod_var, (ES3Reader_t2780AF8AA61DA2A817115CEF8612AC0E494D03C9 *)L_67, (ES3Type_t8FBECB7AE75168648B9524E0C2A38DAD4555421D *)L_68);
		TrailModule_set_minVertexDistance_mF7C29F88FBF540CE4987F4CF9B141C624808FBC5((TrailModule_t95D15372971E64A1977B7587ABAA87B1A31EF5C8 *)(TrailModule_t95D15372971E64A1977B7587ABAA87B1A31EF5C8 *)(&V_0), (float)L_69, /*hidden argument*/NULL);
		// break;
		goto IL_038e;
	}

IL_02bc:
	{
		// instance.textureMode = reader.Read<UnityEngine.ParticleSystemTrailTextureMode>();
		ES3Reader_t2780AF8AA61DA2A817115CEF8612AC0E494D03C9 * L_70 = ___reader0;
		NullCheck((ES3Reader_t2780AF8AA61DA2A817115CEF8612AC0E494D03C9 *)L_70);
		int32_t L_71;
		L_71 = GenericVirtFuncInvoker0< int32_t >::Invoke(ES3Reader_Read_TisParticleSystemTrailTextureMode_tF3259187CA4D0A61EDB3A40E63CBF6C42641CE9F_m055DB1212E8BC34F385DF7D302F16241554E9730_RuntimeMethod_var, (ES3Reader_t2780AF8AA61DA2A817115CEF8612AC0E494D03C9 *)L_70);
		TrailModule_set_textureMode_mC1F8AE0D2965FC47BDBFF4F53E0673D5FB58CF28((TrailModule_t95D15372971E64A1977B7587ABAA87B1A31EF5C8 *)(TrailModule_t95D15372971E64A1977B7587ABAA87B1A31EF5C8 *)(&V_0), (int32_t)L_71, /*hidden argument*/NULL);
		// break;
		goto IL_038e;
	}

IL_02ce:
	{
		// instance.worldSpace = reader.Read<System.Boolean>(ES3Type_bool.Instance);
		ES3Reader_t2780AF8AA61DA2A817115CEF8612AC0E494D03C9 * L_72 = ___reader0;
		IL2CPP_RUNTIME_CLASS_INIT(ES3Type_bool_t8F309F7B9CC735FF1DEE68081B6E3CAB367745F4_il2cpp_TypeInfo_var);
		ES3Type_t8FBECB7AE75168648B9524E0C2A38DAD4555421D * L_73 = ((ES3Type_bool_t8F309F7B9CC735FF1DEE68081B6E3CAB367745F4_StaticFields*)il2cpp_codegen_static_fields_for(ES3Type_bool_t8F309F7B9CC735FF1DEE68081B6E3CAB367745F4_il2cpp_TypeInfo_var))->get_Instance_12();
		NullCheck((ES3Reader_t2780AF8AA61DA2A817115CEF8612AC0E494D03C9 *)L_72);
		bool L_74;
		L_74 = GenericVirtFuncInvoker1< bool, ES3Type_t8FBECB7AE75168648B9524E0C2A38DAD4555421D * >::Invoke(ES3Reader_Read_TisBoolean_t07D1E3F34E4813023D64F584DFF7B34C9D922F37_mC6D1B158268FF9B97822FF9F5B37FB1723FEDA22_RuntimeMethod_var, (ES3Reader_t2780AF8AA61DA2A817115CEF8612AC0E494D03C9 *)L_72, (ES3Type_t8FBECB7AE75168648B9524E0C2A38DAD4555421D *)L_73);
		TrailModule_set_worldSpace_m42A63AF4A96F24A621A29A0F35240195F0E56B1A((TrailModule_t95D15372971E64A1977B7587ABAA87B1A31EF5C8 *)(TrailModule_t95D15372971E64A1977B7587ABAA87B1A31EF5C8 *)(&V_0), (bool)L_74, /*hidden argument*/NULL);
		// break;
		goto IL_038e;
	}

IL_02e5:
	{
		// instance.dieWithParticles = reader.Read<System.Boolean>(ES3Type_bool.Instance);
		ES3Reader_t2780AF8AA61DA2A817115CEF8612AC0E494D03C9 * L_75 = ___reader0;
		IL2CPP_RUNTIME_CLASS_INIT(ES3Type_bool_t8F309F7B9CC735FF1DEE68081B6E3CAB367745F4_il2cpp_TypeInfo_var);
		ES3Type_t8FBECB7AE75168648B9524E0C2A38DAD4555421D * L_76 = ((ES3Type_bool_t8F309F7B9CC735FF1DEE68081B6E3CAB367745F4_StaticFields*)il2cpp_codegen_static_fields_for(ES3Type_bool_t8F309F7B9CC735FF1DEE68081B6E3CAB367745F4_il2cpp_TypeInfo_var))->get_Instance_12();
		NullCheck((ES3Reader_t2780AF8AA61DA2A817115CEF8612AC0E494D03C9 *)L_75);
		bool L_77;
		L_77 = GenericVirtFuncInvoker1< bool, ES3Type_t8FBECB7AE75168648B9524E0C2A38DAD4555421D * >::Invoke(ES3Reader_Read_TisBoolean_t07D1E3F34E4813023D64F584DFF7B34C9D922F37_mC6D1B158268FF9B97822FF9F5B37FB1723FEDA22_RuntimeMethod_var, (ES3Reader_t2780AF8AA61DA2A817115CEF8612AC0E494D03C9 *)L_75, (ES3Type_t8FBECB7AE75168648B9524E0C2A38DAD4555421D *)L_76);
		TrailModule_set_dieWithParticles_mB7C4E8DC2F908FDF6D57A77B54B821E360D8DA99((TrailModule_t95D15372971E64A1977B7587ABAA87B1A31EF5C8 *)(TrailModule_t95D15372971E64A1977B7587ABAA87B1A31EF5C8 *)(&V_0), (bool)L_77, /*hidden argument*/NULL);
		// break;
		goto IL_038e;
	}

IL_02fc:
	{
		// instance.sizeAffectsWidth = reader.Read<System.Boolean>(ES3Type_bool.Instance);
		ES3Reader_t2780AF8AA61DA2A817115CEF8612AC0E494D03C9 * L_78 = ___reader0;
		IL2CPP_RUNTIME_CLASS_INIT(ES3Type_bool_t8F309F7B9CC735FF1DEE68081B6E3CAB367745F4_il2cpp_TypeInfo_var);
		ES3Type_t8FBECB7AE75168648B9524E0C2A38DAD4555421D * L_79 = ((ES3Type_bool_t8F309F7B9CC735FF1DEE68081B6E3CAB367745F4_StaticFields*)il2cpp_codegen_static_fields_for(ES3Type_bool_t8F309F7B9CC735FF1DEE68081B6E3CAB367745F4_il2cpp_TypeInfo_var))->get_Instance_12();
		NullCheck((ES3Reader_t2780AF8AA61DA2A817115CEF8612AC0E494D03C9 *)L_78);
		bool L_80;
		L_80 = GenericVirtFuncInvoker1< bool, ES3Type_t8FBECB7AE75168648B9524E0C2A38DAD4555421D * >::Invoke(ES3Reader_Read_TisBoolean_t07D1E3F34E4813023D64F584DFF7B34C9D922F37_mC6D1B158268FF9B97822FF9F5B37FB1723FEDA22_RuntimeMethod_var, (ES3Reader_t2780AF8AA61DA2A817115CEF8612AC0E494D03C9 *)L_78, (ES3Type_t8FBECB7AE75168648B9524E0C2A38DAD4555421D *)L_79);
		TrailModule_set_sizeAffectsWidth_m3517856E39080DA69B447499C8846D2491B0ABF0((TrailModule_t95D15372971E64A1977B7587ABAA87B1A31EF5C8 *)(TrailModule_t95D15372971E64A1977B7587ABAA87B1A31EF5C8 *)(&V_0), (bool)L_80, /*hidden argument*/NULL);
		// break;
		goto IL_038e;
	}

IL_0310:
	{
		// instance.sizeAffectsLifetime = reader.Read<System.Boolean>(ES3Type_bool.Instance);
		ES3Reader_t2780AF8AA61DA2A817115CEF8612AC0E494D03C9 * L_81 = ___reader0;
		IL2CPP_RUNTIME_CLASS_INIT(ES3Type_bool_t8F309F7B9CC735FF1DEE68081B6E3CAB367745F4_il2cpp_TypeInfo_var);
		ES3Type_t8FBECB7AE75168648B9524E0C2A38DAD4555421D * L_82 = ((ES3Type_bool_t8F309F7B9CC735FF1DEE68081B6E3CAB367745F4_StaticFields*)il2cpp_codegen_static_fields_for(ES3Type_bool_t8F309F7B9CC735FF1DEE68081B6E3CAB367745F4_il2cpp_TypeInfo_var))->get_Instance_12();
		NullCheck((ES3Reader_t2780AF8AA61DA2A817115CEF8612AC0E494D03C9 *)L_81);
		bool L_83;
		L_83 = GenericVirtFuncInvoker1< bool, ES3Type_t8FBECB7AE75168648B9524E0C2A38DAD4555421D * >::Invoke(ES3Reader_Read_TisBoolean_t07D1E3F34E4813023D64F584DFF7B34C9D922F37_mC6D1B158268FF9B97822FF9F5B37FB1723FEDA22_RuntimeMethod_var, (ES3Reader_t2780AF8AA61DA2A817115CEF8612AC0E494D03C9 *)L_81, (ES3Type_t8FBECB7AE75168648B9524E0C2A38DAD4555421D *)L_82);
		TrailModule_set_sizeAffectsLifetime_m98BF4A6594193D824B52D88371CF963ACBA388FD((TrailModule_t95D15372971E64A1977B7587ABAA87B1A31EF5C8 *)(TrailModule_t95D15372971E64A1977B7587ABAA87B1A31EF5C8 *)(&V_0), (bool)L_83, /*hidden argument*/NULL);
		// break;
		goto IL_038e;
	}

IL_0324:
	{
		// instance.inheritParticleColor = reader.Read<System.Boolean>(ES3Type_bool.Instance);
		ES3Reader_t2780AF8AA61DA2A817115CEF8612AC0E494D03C9 * L_84 = ___reader0;
		IL2CPP_RUNTIME_CLASS_INIT(ES3Type_bool_t8F309F7B9CC735FF1DEE68081B6E3CAB367745F4_il2cpp_TypeInfo_var);
		ES3Type_t8FBECB7AE75168648B9524E0C2A38DAD4555421D * L_85 = ((ES3Type_bool_t8F309F7B9CC735FF1DEE68081B6E3CAB367745F4_StaticFields*)il2cpp_codegen_static_fields_for(ES3Type_bool_t8F309F7B9CC735FF1DEE68081B6E3CAB367745F4_il2cpp_TypeInfo_var))->get_Instance_12();
		NullCheck((ES3Reader_t2780AF8AA61DA2A817115CEF8612AC0E494D03C9 *)L_84);
		bool L_86;
		L_86 = GenericVirtFuncInvoker1< bool, ES3Type_t8FBECB7AE75168648B9524E0C2A38DAD4555421D * >::Invoke(ES3Reader_Read_TisBoolean_t07D1E3F34E4813023D64F584DFF7B34C9D922F37_mC6D1B158268FF9B97822FF9F5B37FB1723FEDA22_RuntimeMethod_var, (ES3Reader_t2780AF8AA61DA2A817115CEF8612AC0E494D03C9 *)L_84, (ES3Type_t8FBECB7AE75168648B9524E0C2A38DAD4555421D *)L_85);
		TrailModule_set_inheritParticleColor_mCD83E87B5E00F2BFFBE08AD2D1D68606283A4FEE((TrailModule_t95D15372971E64A1977B7587ABAA87B1A31EF5C8 *)(TrailModule_t95D15372971E64A1977B7587ABAA87B1A31EF5C8 *)(&V_0), (bool)L_86, /*hidden argument*/NULL);
		// break;
		goto IL_038e;
	}

IL_0338:
	{
		// instance.colorOverLifetime = reader.Read<UnityEngine.ParticleSystem.MinMaxGradient>(ES3Type_MinMaxGradient.Instance);
		ES3Reader_t2780AF8AA61DA2A817115CEF8612AC0E494D03C9 * L_87 = ___reader0;
		IL2CPP_RUNTIME_CLASS_INIT(ES3Type_MinMaxGradient_t5DD353D60E95642AB39D1C97C6FD6DD1B067D3CF_il2cpp_TypeInfo_var);
		ES3Type_t8FBECB7AE75168648B9524E0C2A38DAD4555421D * L_88 = ((ES3Type_MinMaxGradient_t5DD353D60E95642AB39D1C97C6FD6DD1B067D3CF_StaticFields*)il2cpp_codegen_static_fields_for(ES3Type_MinMaxGradient_t5DD353D60E95642AB39D1C97C6FD6DD1B067D3CF_il2cpp_TypeInfo_var))->get_Instance_12();
		NullCheck((ES3Reader_t2780AF8AA61DA2A817115CEF8612AC0E494D03C9 *)L_87);
		MinMaxGradient_tF4530B26F29D9635D670A33B9EE581EAC48C12B7  L_89;
		L_89 = GenericVirtFuncInvoker1< MinMaxGradient_tF4530B26F29D9635D670A33B9EE581EAC48C12B7 , ES3Type_t8FBECB7AE75168648B9524E0C2A38DAD4555421D * >::Invoke(ES3Reader_Read_TisMinMaxGradient_tF4530B26F29D9635D670A33B9EE581EAC48C12B7_m6A3DD8CBBAC5D32B838B6C4399009AB8AA512ACC_RuntimeMethod_var, (ES3Reader_t2780AF8AA61DA2A817115CEF8612AC0E494D03C9 *)L_87, (ES3Type_t8FBECB7AE75168648B9524E0C2A38DAD4555421D *)L_88);
		TrailModule_set_colorOverLifetime_mCD56BD4B75D3A3947069BA1B93FEC78AAE08DF27((TrailModule_t95D15372971E64A1977B7587ABAA87B1A31EF5C8 *)(TrailModule_t95D15372971E64A1977B7587ABAA87B1A31EF5C8 *)(&V_0), (MinMaxGradient_tF4530B26F29D9635D670A33B9EE581EAC48C12B7 )L_89, /*hidden argument*/NULL);
		// break;
		goto IL_038e;
	}

IL_034c:
	{
		// instance.widthOverTrail = reader.Read<UnityEngine.ParticleSystem.MinMaxCurve>(ES3Type_MinMaxCurve.Instance);
		ES3Reader_t2780AF8AA61DA2A817115CEF8612AC0E494D03C9 * L_90 = ___reader0;
		IL2CPP_RUNTIME_CLASS_INIT(ES3Type_MinMaxCurve_tC5342BF0F8735B85CB5E16FDD4C6FACC8AFAD3B7_il2cpp_TypeInfo_var);
		ES3Type_t8FBECB7AE75168648B9524E0C2A38DAD4555421D * L_91 = ((ES3Type_MinMaxCurve_tC5342BF0F8735B85CB5E16FDD4C6FACC8AFAD3B7_StaticFields*)il2cpp_codegen_static_fields_for(ES3Type_MinMaxCurve_tC5342BF0F8735B85CB5E16FDD4C6FACC8AFAD3B7_il2cpp_TypeInfo_var))->get_Instance_12();
		NullCheck((ES3Reader_t2780AF8AA61DA2A817115CEF8612AC0E494D03C9 *)L_90);
		MinMaxCurve_tF036239442AB2D438B1EDABEBC785426871084CD  L_92;
		L_92 = GenericVirtFuncInvoker1< MinMaxCurve_tF036239442AB2D438B1EDABEBC785426871084CD , ES3Type_t8FBECB7AE75168648B9524E0C2A38DAD4555421D * >::Invoke(ES3Reader_Read_TisMinMaxCurve_tF036239442AB2D438B1EDABEBC785426871084CD_mD285150CBFB52440643BBECB5ADF4EE8DE940535_RuntimeMethod_var, (ES3Reader_t2780AF8AA61DA2A817115CEF8612AC0E494D03C9 *)L_90, (ES3Type_t8FBECB7AE75168648B9524E0C2A38DAD4555421D *)L_91);
		TrailModule_set_widthOverTrail_m6C0A896EBFDED7CE46344B3A0B04212934F30DE1((TrailModule_t95D15372971E64A1977B7587ABAA87B1A31EF5C8 *)(TrailModule_t95D15372971E64A1977B7587ABAA87B1A31EF5C8 *)(&V_0), (MinMaxCurve_tF036239442AB2D438B1EDABEBC785426871084CD )L_92, /*hidden argument*/NULL);
		// break;
		goto IL_038e;
	}

IL_0360:
	{
		// instance.widthOverTrailMultiplier = reader.Read<System.Single>(ES3Type_float.Instance);
		ES3Reader_t2780AF8AA61DA2A817115CEF8612AC0E494D03C9 * L_93 = ___reader0;
		IL2CPP_RUNTIME_CLASS_INIT(ES3Type_float_tF86B773C86731BD9AD79448B860BBB178FE77644_il2cpp_TypeInfo_var);
		ES3Type_t8FBECB7AE75168648B9524E0C2A38DAD4555421D * L_94 = ((ES3Type_float_tF86B773C86731BD9AD79448B860BBB178FE77644_StaticFields*)il2cpp_codegen_static_fields_for(ES3Type_float_tF86B773C86731BD9AD79448B860BBB178FE77644_il2cpp_TypeInfo_var))->get_Instance_12();
		NullCheck((ES3Reader_t2780AF8AA61DA2A817115CEF8612AC0E494D03C9 *)L_93);
		float L_95;
		L_95 = GenericVirtFuncInvoker1< float, ES3Type_t8FBECB7AE75168648B9524E0C2A38DAD4555421D * >::Invoke(ES3Reader_Read_TisSingle_tE07797BA3C98D4CA9B5A19413C19A76688AB899E_m4A0416374498BDA042B8EB21E49B72326D6CE5F4_RuntimeMethod_var, (ES3Reader_t2780AF8AA61DA2A817115CEF8612AC0E494D03C9 *)L_93, (ES3Type_t8FBECB7AE75168648B9524E0C2A38DAD4555421D *)L_94);
		TrailModule_set_widthOverTrailMultiplier_m6A7EA2856CF30B710CCB528EA3EBFD1799C19BD4((TrailModule_t95D15372971E64A1977B7587ABAA87B1A31EF5C8 *)(TrailModule_t95D15372971E64A1977B7587ABAA87B1A31EF5C8 *)(&V_0), (float)L_95, /*hidden argument*/NULL);
		// break;
		goto IL_038e;
	}

IL_0374:
	{
		// instance.colorOverTrail = reader.Read<UnityEngine.ParticleSystem.MinMaxGradient>(ES3Type_MinMaxGradient.Instance);
		ES3Reader_t2780AF8AA61DA2A817115CEF8612AC0E494D03C9 * L_96 = ___reader0;
		IL2CPP_RUNTIME_CLASS_INIT(ES3Type_MinMaxGradient_t5DD353D60E95642AB39D1C97C6FD6DD1B067D3CF_il2cpp_TypeInfo_var);
		ES3Type_t8FBECB7AE75168648B9524E0C2A38DAD4555421D * L_97 = ((ES3Type_MinMaxGradient_t5DD353D60E95642AB39D1C97C6FD6DD1B067D3CF_StaticFields*)il2cpp_codegen_static_fields_for(ES3Type_MinMaxGradient_t5DD353D60E95642AB39D1C97C6FD6DD1B067D3CF_il2cpp_TypeInfo_var))->get_Instance_12();
		NullCheck((ES3Reader_t2780AF8AA61DA2A817115CEF8612AC0E494D03C9 *)L_96);
		MinMaxGradient_tF4530B26F29D9635D670A33B9EE581EAC48C12B7  L_98;
		L_98 = GenericVirtFuncInvoker1< MinMaxGradient_tF4530B26F29D9635D670A33B9EE581EAC48C12B7 , ES3Type_t8FBECB7AE75168648B9524E0C2A38DAD4555421D * >::Invoke(ES3Reader_Read_TisMinMaxGradient_tF4530B26F29D9635D670A33B9EE581EAC48C12B7_m6A3DD8CBBAC5D32B838B6C4399009AB8AA512ACC_RuntimeMethod_var, (ES3Reader_t2780AF8AA61DA2A817115CEF8612AC0E494D03C9 *)L_96, (ES3Type_t8FBECB7AE75168648B9524E0C2A38DAD4555421D *)L_97);
		TrailModule_set_colorOverTrail_m8440C6574C8310292B93D70EA4FE3EE8C40DF8DB((TrailModule_t95D15372971E64A1977B7587ABAA87B1A31EF5C8 *)(TrailModule_t95D15372971E64A1977B7587ABAA87B1A31EF5C8 *)(&V_0), (MinMaxGradient_tF4530B26F29D9635D670A33B9EE581EAC48C12B7 )L_98, /*hidden argument*/NULL);
		// break;
		goto IL_038e;
	}

IL_0388:
	{
		// reader.Skip();
		ES3Reader_t2780AF8AA61DA2A817115CEF8612AC0E494D03C9 * L_99 = ___reader0;
		NullCheck((ES3Reader_t2780AF8AA61DA2A817115CEF8612AC0E494D03C9 *)L_99);
		VirtActionInvoker0::Invoke(41 /* System.Void ES3Reader::Skip() */, (ES3Reader_t2780AF8AA61DA2A817115CEF8612AC0E494D03C9 *)L_99);
	}

IL_038e:
	{
		// while((propertyName = reader.ReadPropertyName()) != null)
		ES3Reader_t2780AF8AA61DA2A817115CEF8612AC0E494D03C9 * L_100 = ___reader0;
		NullCheck((ES3Reader_t2780AF8AA61DA2A817115CEF8612AC0E494D03C9 *)L_100);
		String_t* L_101;
		L_101 = VirtFuncInvoker0< String_t* >::Invoke(21 /* System.String ES3Reader::ReadPropertyName() */, (ES3Reader_t2780AF8AA61DA2A817115CEF8612AC0E494D03C9 *)L_100);
		String_t* L_102 = (String_t*)L_101;
		V_1 = (String_t*)L_102;
		if (L_102)
		{
			goto IL_000c;
		}
	}
	{
		// }
		return;
	}
}
// System.Void ES3Types.ES3Type_TrailModule::ReadInto<UnityEngine.ParticleSystem/RotationBySpeedModule>(ES3Reader,System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ES3Type_TrailModule_ReadInto_TisRotationBySpeedModule_t9EFC4CF3826F9F6FF2AFC3F0C25CEBC8E36FF0AD_m6F0EDC2E07191B86044EE6ECC555E2B2D9EF367B_gshared (ES3Type_TrailModule_tC773F73EC0443516DD128FF2B5AE010809742462 * __this, ES3Reader_t2780AF8AA61DA2A817115CEF8612AC0E494D03C9 * ___reader0, RuntimeObject * ___obj1, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ES3Reader_Read_TisBoolean_t07D1E3F34E4813023D64F584DFF7B34C9D922F37_mC6D1B158268FF9B97822FF9F5B37FB1723FEDA22_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ES3Reader_Read_TisMinMaxCurve_tF036239442AB2D438B1EDABEBC785426871084CD_mD285150CBFB52440643BBECB5ADF4EE8DE940535_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ES3Reader_Read_TisMinMaxGradient_tF4530B26F29D9635D670A33B9EE581EAC48C12B7_m6A3DD8CBBAC5D32B838B6C4399009AB8AA512ACC_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ES3Reader_Read_TisParticleSystemTrailTextureMode_tF3259187CA4D0A61EDB3A40E63CBF6C42641CE9F_m055DB1212E8BC34F385DF7D302F16241554E9730_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ES3Reader_Read_TisSingle_tE07797BA3C98D4CA9B5A19413C19A76688AB899E_m4A0416374498BDA042B8EB21E49B72326D6CE5F4_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ES3Type_MinMaxCurve_tC5342BF0F8735B85CB5E16FDD4C6FACC8AFAD3B7_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ES3Type_MinMaxGradient_t5DD353D60E95642AB39D1C97C6FD6DD1B067D3CF_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ES3Type_bool_t8F309F7B9CC735FF1DEE68081B6E3CAB367745F4_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ES3Type_float_tF86B773C86731BD9AD79448B860BBB178FE77644_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&TrailModule_t95D15372971E64A1977B7587ABAA87B1A31EF5C8_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral1D87A56AE67B2CD49CAE6E942C2FB7AD98925C00);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral354281948B6269615E32D856CF85B6F456724DAA);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral4221314F268D184F46688D45C85446821F1F1BC3);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral47C47DD09640803AD8016748EAE1F04DD1D41119);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral5C86338F177203D001C41D9C348A83D1338CC7D0);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral60126327537B7B8E6EE33C43FE0C5CA8BCC3A06A);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral87F70660D62DE5FC257FBADE9DA4EC9188597DE5);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralA967787586EC9E5A17A9C55E2002AB73A5E21A0A);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralADAEB0839588196B349BDB6CF33AFA3E0736360B);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralBE2893848F9FC647C2288DA6581A1522E9695182);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralBF540D6548854CC21630064FBA5390C9409C86F0);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralC580B374AA991574F91DFC86C068E7FAD661A3A4);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralE049DB547285CFCE1CB9A95934B6B6DCE2D219EC);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralF9D225733E1D10F9344C755C4A9C0870CD1DE97B);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralFE5F89F63E2381500F62A7CBD6954563BE44562F);
		s_Il2CppMethodInitialized = true;
	}
	TrailModule_t95D15372971E64A1977B7587ABAA87B1A31EF5C8  V_0;
	memset((&V_0), 0, sizeof(V_0));
	String_t* V_1 = NULL;
	uint32_t V_2 = 0;
	{
		// var instance = (UnityEngine.ParticleSystem.TrailModule)obj;
		RuntimeObject * L_0 = ___obj1;
		V_0 = (TrailModule_t95D15372971E64A1977B7587ABAA87B1A31EF5C8 )((*(TrailModule_t95D15372971E64A1977B7587ABAA87B1A31EF5C8 *)((TrailModule_t95D15372971E64A1977B7587ABAA87B1A31EF5C8 *)UnBox(L_0, TrailModule_t95D15372971E64A1977B7587ABAA87B1A31EF5C8_il2cpp_TypeInfo_var))));
		goto IL_038e;
	}

IL_000c:
	{
		String_t* L_1 = V_1;
		if (!L_1)
		{
			goto IL_0388;
		}
	}
	{
		String_t* L_2 = V_1;
		uint32_t L_3;
		L_3 = U3CPrivateImplementationDetailsU3E_ComputeStringHash_m3ADC1F612F9EE3DD518E6F0023A0DE0EE2B120A7((String_t*)L_2, /*hidden argument*/NULL);
		V_2 = (uint32_t)L_3;
		uint32_t L_4 = V_2;
		if ((!(((uint32_t)L_4) <= ((uint32_t)((int32_t)1376955374)))))
		{
			goto IL_008d;
		}
	}
	{
		uint32_t L_5 = V_2;
		if ((!(((uint32_t)L_5) <= ((uint32_t)((int32_t)494095910)))))
		{
			goto IL_004f;
		}
	}
	{
		uint32_t L_6 = V_2;
		if ((((int32_t)L_6) == ((int32_t)((int32_t)49525662))))
		{
			goto IL_010e;
		}
	}
	{
		uint32_t L_7 = V_2;
		if ((((int32_t)L_7) == ((int32_t)((int32_t)341298456))))
		{
			goto IL_021f;
		}
	}
	{
		uint32_t L_8 = V_2;
		if ((((int32_t)L_8) == ((int32_t)((int32_t)494095910))))
		{
			goto IL_0234;
		}
	}
	{
		goto IL_0388;
	}

IL_004f:
	{
		uint32_t L_9 = V_2;
		if ((!(((uint32_t)L_9) <= ((uint32_t)((int32_t)973733911)))))
		{
			goto IL_0072;
		}
	}
	{
		uint32_t L_10 = V_2;
		if ((((int32_t)L_10) == ((int32_t)((int32_t)559929418))))
		{
			goto IL_01b6;
		}
	}
	{
		uint32_t L_11 = V_2;
		if ((((int32_t)L_11) == ((int32_t)((int32_t)973733911))))
		{
			goto IL_0177;
		}
	}
	{
		goto IL_0388;
	}

IL_0072:
	{
		uint32_t L_12 = V_2;
		if ((((int32_t)L_12) == ((int32_t)((int32_t)1024708593))))
		{
			goto IL_014d;
		}
	}
	{
		uint32_t L_13 = V_2;
		if ((((int32_t)L_13) == ((int32_t)((int32_t)1376955374))))
		{
			goto IL_0138;
		}
	}
	{
		goto IL_0388;
	}

IL_008d:
	{
		uint32_t L_14 = V_2;
		if ((!(((uint32_t)L_14) <= ((uint32_t)((int32_t)-2100707162)))))
		{
			goto IL_00d3;
		}
	}
	{
		uint32_t L_15 = V_2;
		if ((!(((uint32_t)L_15) <= ((uint32_t)((int32_t)1975189197)))))
		{
			goto IL_00b8;
		}
	}
	{
		uint32_t L_16 = V_2;
		if ((((int32_t)L_16) == ((int32_t)((int32_t)1546474083))))
		{
			goto IL_020a;
		}
	}
	{
		uint32_t L_17 = V_2;
		if ((((int32_t)L_17) == ((int32_t)((int32_t)1975189197))))
		{
			goto IL_01cb;
		}
	}
	{
		goto IL_0388;
	}

IL_00b8:
	{
		uint32_t L_18 = V_2;
		if ((((int32_t)L_18) == ((int32_t)((int32_t)2053023684))))
		{
			goto IL_01a1;
		}
	}
	{
		uint32_t L_19 = V_2;
		if ((((int32_t)L_19) == ((int32_t)((int32_t)-2100707162))))
		{
			goto IL_0162;
		}
	}
	{
		goto IL_0388;
	}

IL_00d3:
	{
		uint32_t L_20 = V_2;
		if ((!(((uint32_t)L_20) <= ((uint32_t)((int32_t)-1319579393)))))
		{
			goto IL_00f6;
		}
	}
	{
		uint32_t L_21 = V_2;
		if ((((int32_t)L_21) == ((int32_t)((int32_t)-1562862963))))
		{
			goto IL_01e0;
		}
	}
	{
		uint32_t L_22 = V_2;
		if ((((int32_t)L_22) == ((int32_t)((int32_t)-1319579393))))
		{
			goto IL_018c;
		}
	}
	{
		goto IL_0388;
	}

IL_00f6:
	{
		uint32_t L_23 = V_2;
		if ((((int32_t)L_23) == ((int32_t)((int32_t)-1055777148))))
		{
			goto IL_0123;
		}
	}
	{
		uint32_t L_24 = V_2;
		if ((((int32_t)L_24) == ((int32_t)((int32_t)-413379935))))
		{
			goto IL_01f5;
		}
	}
	{
		goto IL_0388;
	}

IL_010e:
	{
		String_t* L_25 = V_1;
		bool L_26;
		L_26 = String_op_Equality_m50B3548E4AC232558190B0052877B290AA1D436A((String_t*)L_25, (String_t*)_stringLiteralF9D225733E1D10F9344C755C4A9C0870CD1DE97B, /*hidden argument*/NULL);
		if (L_26)
		{
			goto IL_0249;
		}
	}
	{
		goto IL_0388;
	}

IL_0123:
	{
		String_t* L_27 = V_1;
		bool L_28;
		L_28 = String_op_Equality_m50B3548E4AC232558190B0052877B290AA1D436A((String_t*)L_27, (String_t*)_stringLiteral60126327537B7B8E6EE33C43FE0C5CA8BCC3A06A, /*hidden argument*/NULL);
		if (L_28)
		{
			goto IL_0260;
		}
	}
	{
		goto IL_0388;
	}

IL_0138:
	{
		String_t* L_29 = V_1;
		bool L_30;
		L_30 = String_op_Equality_m50B3548E4AC232558190B0052877B290AA1D436A((String_t*)L_29, (String_t*)_stringLiteralBE2893848F9FC647C2288DA6581A1522E9695182, /*hidden argument*/NULL);
		if (L_30)
		{
			goto IL_0277;
		}
	}
	{
		goto IL_0388;
	}

IL_014d:
	{
		String_t* L_31 = V_1;
		bool L_32;
		L_32 = String_op_Equality_m50B3548E4AC232558190B0052877B290AA1D436A((String_t*)L_31, (String_t*)_stringLiteral4221314F268D184F46688D45C85446821F1F1BC3, /*hidden argument*/NULL);
		if (L_32)
		{
			goto IL_028e;
		}
	}
	{
		goto IL_0388;
	}

IL_0162:
	{
		String_t* L_33 = V_1;
		bool L_34;
		L_34 = String_op_Equality_m50B3548E4AC232558190B0052877B290AA1D436A((String_t*)L_33, (String_t*)_stringLiteral5C86338F177203D001C41D9C348A83D1338CC7D0, /*hidden argument*/NULL);
		if (L_34)
		{
			goto IL_02a5;
		}
	}
	{
		goto IL_0388;
	}

IL_0177:
	{
		String_t* L_35 = V_1;
		bool L_36;
		L_36 = String_op_Equality_m50B3548E4AC232558190B0052877B290AA1D436A((String_t*)L_35, (String_t*)_stringLiteralFE5F89F63E2381500F62A7CBD6954563BE44562F, /*hidden argument*/NULL);
		if (L_36)
		{
			goto IL_02bc;
		}
	}
	{
		goto IL_0388;
	}

IL_018c:
	{
		String_t* L_37 = V_1;
		bool L_38;
		L_38 = String_op_Equality_m50B3548E4AC232558190B0052877B290AA1D436A((String_t*)L_37, (String_t*)_stringLiteral87F70660D62DE5FC257FBADE9DA4EC9188597DE5, /*hidden argument*/NULL);
		if (L_38)
		{
			goto IL_02ce;
		}
	}
	{
		goto IL_0388;
	}

IL_01a1:
	{
		String_t* L_39 = V_1;
		bool L_40;
		L_40 = String_op_Equality_m50B3548E4AC232558190B0052877B290AA1D436A((String_t*)L_39, (String_t*)_stringLiteral354281948B6269615E32D856CF85B6F456724DAA, /*hidden argument*/NULL);
		if (L_40)
		{
			goto IL_02e5;
		}
	}
	{
		goto IL_0388;
	}

IL_01b6:
	{
		String_t* L_41 = V_1;
		bool L_42;
		L_42 = String_op_Equality_m50B3548E4AC232558190B0052877B290AA1D436A((String_t*)L_41, (String_t*)_stringLiteralADAEB0839588196B349BDB6CF33AFA3E0736360B, /*hidden argument*/NULL);
		if (L_42)
		{
			goto IL_02fc;
		}
	}
	{
		goto IL_0388;
	}

IL_01cb:
	{
		String_t* L_43 = V_1;
		bool L_44;
		L_44 = String_op_Equality_m50B3548E4AC232558190B0052877B290AA1D436A((String_t*)L_43, (String_t*)_stringLiteralC580B374AA991574F91DFC86C068E7FAD661A3A4, /*hidden argument*/NULL);
		if (L_44)
		{
			goto IL_0310;
		}
	}
	{
		goto IL_0388;
	}

IL_01e0:
	{
		String_t* L_45 = V_1;
		bool L_46;
		L_46 = String_op_Equality_m50B3548E4AC232558190B0052877B290AA1D436A((String_t*)L_45, (String_t*)_stringLiteralE049DB547285CFCE1CB9A95934B6B6DCE2D219EC, /*hidden argument*/NULL);
		if (L_46)
		{
			goto IL_0324;
		}
	}
	{
		goto IL_0388;
	}

IL_01f5:
	{
		String_t* L_47 = V_1;
		bool L_48;
		L_48 = String_op_Equality_m50B3548E4AC232558190B0052877B290AA1D436A((String_t*)L_47, (String_t*)_stringLiteralBF540D6548854CC21630064FBA5390C9409C86F0, /*hidden argument*/NULL);
		if (L_48)
		{
			goto IL_0338;
		}
	}
	{
		goto IL_0388;
	}

IL_020a:
	{
		String_t* L_49 = V_1;
		bool L_50;
		L_50 = String_op_Equality_m50B3548E4AC232558190B0052877B290AA1D436A((String_t*)L_49, (String_t*)_stringLiteral1D87A56AE67B2CD49CAE6E942C2FB7AD98925C00, /*hidden argument*/NULL);
		if (L_50)
		{
			goto IL_034c;
		}
	}
	{
		goto IL_0388;
	}

IL_021f:
	{
		String_t* L_51 = V_1;
		bool L_52;
		L_52 = String_op_Equality_m50B3548E4AC232558190B0052877B290AA1D436A((String_t*)L_51, (String_t*)_stringLiteralA967787586EC9E5A17A9C55E2002AB73A5E21A0A, /*hidden argument*/NULL);
		if (L_52)
		{
			goto IL_0360;
		}
	}
	{
		goto IL_0388;
	}

IL_0234:
	{
		String_t* L_53 = V_1;
		bool L_54;
		L_54 = String_op_Equality_m50B3548E4AC232558190B0052877B290AA1D436A((String_t*)L_53, (String_t*)_stringLiteral47C47DD09640803AD8016748EAE1F04DD1D41119, /*hidden argument*/NULL);
		if (L_54)
		{
			goto IL_0374;
		}
	}
	{
		goto IL_0388;
	}

IL_0249:
	{
		// instance.enabled = reader.Read<System.Boolean>(ES3Type_bool.Instance);
		ES3Reader_t2780AF8AA61DA2A817115CEF8612AC0E494D03C9 * L_55 = ___reader0;
		IL2CPP_RUNTIME_CLASS_INIT(ES3Type_bool_t8F309F7B9CC735FF1DEE68081B6E3CAB367745F4_il2cpp_TypeInfo_var);
		ES3Type_t8FBECB7AE75168648B9524E0C2A38DAD4555421D * L_56 = ((ES3Type_bool_t8F309F7B9CC735FF1DEE68081B6E3CAB367745F4_StaticFields*)il2cpp_codegen_static_fields_for(ES3Type_bool_t8F309F7B9CC735FF1DEE68081B6E3CAB367745F4_il2cpp_TypeInfo_var))->get_Instance_12();
		NullCheck((ES3Reader_t2780AF8AA61DA2A817115CEF8612AC0E494D03C9 *)L_55);
		bool L_57;
		L_57 = GenericVirtFuncInvoker1< bool, ES3Type_t8FBECB7AE75168648B9524E0C2A38DAD4555421D * >::Invoke(ES3Reader_Read_TisBoolean_t07D1E3F34E4813023D64F584DFF7B34C9D922F37_mC6D1B158268FF9B97822FF9F5B37FB1723FEDA22_RuntimeMethod_var, (ES3Reader_t2780AF8AA61DA2A817115CEF8612AC0E494D03C9 *)L_55, (ES3Type_t8FBECB7AE75168648B9524E0C2A38DAD4555421D *)L_56);
		TrailModule_set_enabled_mFC8451DDDF40CCBB3E32A4B30A001115F6346894((TrailModule_t95D15372971E64A1977B7587ABAA87B1A31EF5C8 *)(TrailModule_t95D15372971E64A1977B7587ABAA87B1A31EF5C8 *)(&V_0), (bool)L_57, /*hidden argument*/NULL);
		// break;
		goto IL_038e;
	}

IL_0260:
	{
		// instance.ratio = reader.Read<System.Single>(ES3Type_float.Instance);
		ES3Reader_t2780AF8AA61DA2A817115CEF8612AC0E494D03C9 * L_58 = ___reader0;
		IL2CPP_RUNTIME_CLASS_INIT(ES3Type_float_tF86B773C86731BD9AD79448B860BBB178FE77644_il2cpp_TypeInfo_var);
		ES3Type_t8FBECB7AE75168648B9524E0C2A38DAD4555421D * L_59 = ((ES3Type_float_tF86B773C86731BD9AD79448B860BBB178FE77644_StaticFields*)il2cpp_codegen_static_fields_for(ES3Type_float_tF86B773C86731BD9AD79448B860BBB178FE77644_il2cpp_TypeInfo_var))->get_Instance_12();
		NullCheck((ES3Reader_t2780AF8AA61DA2A817115CEF8612AC0E494D03C9 *)L_58);
		float L_60;
		L_60 = GenericVirtFuncInvoker1< float, ES3Type_t8FBECB7AE75168648B9524E0C2A38DAD4555421D * >::Invoke(ES3Reader_Read_TisSingle_tE07797BA3C98D4CA9B5A19413C19A76688AB899E_m4A0416374498BDA042B8EB21E49B72326D6CE5F4_RuntimeMethod_var, (ES3Reader_t2780AF8AA61DA2A817115CEF8612AC0E494D03C9 *)L_58, (ES3Type_t8FBECB7AE75168648B9524E0C2A38DAD4555421D *)L_59);
		TrailModule_set_ratio_m34E63B34E7B0E8D037AD45532B2E2D5BD0750189((TrailModule_t95D15372971E64A1977B7587ABAA87B1A31EF5C8 *)(TrailModule_t95D15372971E64A1977B7587ABAA87B1A31EF5C8 *)(&V_0), (float)L_60, /*hidden argument*/NULL);
		// break;
		goto IL_038e;
	}

IL_0277:
	{
		// instance.lifetime = reader.Read<UnityEngine.ParticleSystem.MinMaxCurve>(ES3Type_MinMaxCurve.Instance);
		ES3Reader_t2780AF8AA61DA2A817115CEF8612AC0E494D03C9 * L_61 = ___reader0;
		IL2CPP_RUNTIME_CLASS_INIT(ES3Type_MinMaxCurve_tC5342BF0F8735B85CB5E16FDD4C6FACC8AFAD3B7_il2cpp_TypeInfo_var);
		ES3Type_t8FBECB7AE75168648B9524E0C2A38DAD4555421D * L_62 = ((ES3Type_MinMaxCurve_tC5342BF0F8735B85CB5E16FDD4C6FACC8AFAD3B7_StaticFields*)il2cpp_codegen_static_fields_for(ES3Type_MinMaxCurve_tC5342BF0F8735B85CB5E16FDD4C6FACC8AFAD3B7_il2cpp_TypeInfo_var))->get_Instance_12();
		NullCheck((ES3Reader_t2780AF8AA61DA2A817115CEF8612AC0E494D03C9 *)L_61);
		MinMaxCurve_tF036239442AB2D438B1EDABEBC785426871084CD  L_63;
		L_63 = GenericVirtFuncInvoker1< MinMaxCurve_tF036239442AB2D438B1EDABEBC785426871084CD , ES3Type_t8FBECB7AE75168648B9524E0C2A38DAD4555421D * >::Invoke(ES3Reader_Read_TisMinMaxCurve_tF036239442AB2D438B1EDABEBC785426871084CD_mD285150CBFB52440643BBECB5ADF4EE8DE940535_RuntimeMethod_var, (ES3Reader_t2780AF8AA61DA2A817115CEF8612AC0E494D03C9 *)L_61, (ES3Type_t8FBECB7AE75168648B9524E0C2A38DAD4555421D *)L_62);
		TrailModule_set_lifetime_m57C898C42B9F18F5A0E88AAA7B10276CC158C39D((TrailModule_t95D15372971E64A1977B7587ABAA87B1A31EF5C8 *)(TrailModule_t95D15372971E64A1977B7587ABAA87B1A31EF5C8 *)(&V_0), (MinMaxCurve_tF036239442AB2D438B1EDABEBC785426871084CD )L_63, /*hidden argument*/NULL);
		// break;
		goto IL_038e;
	}

IL_028e:
	{
		// instance.lifetimeMultiplier = reader.Read<System.Single>(ES3Type_float.Instance);
		ES3Reader_t2780AF8AA61DA2A817115CEF8612AC0E494D03C9 * L_64 = ___reader0;
		IL2CPP_RUNTIME_CLASS_INIT(ES3Type_float_tF86B773C86731BD9AD79448B860BBB178FE77644_il2cpp_TypeInfo_var);
		ES3Type_t8FBECB7AE75168648B9524E0C2A38DAD4555421D * L_65 = ((ES3Type_float_tF86B773C86731BD9AD79448B860BBB178FE77644_StaticFields*)il2cpp_codegen_static_fields_for(ES3Type_float_tF86B773C86731BD9AD79448B860BBB178FE77644_il2cpp_TypeInfo_var))->get_Instance_12();
		NullCheck((ES3Reader_t2780AF8AA61DA2A817115CEF8612AC0E494D03C9 *)L_64);
		float L_66;
		L_66 = GenericVirtFuncInvoker1< float, ES3Type_t8FBECB7AE75168648B9524E0C2A38DAD4555421D * >::Invoke(ES3Reader_Read_TisSingle_tE07797BA3C98D4CA9B5A19413C19A76688AB899E_m4A0416374498BDA042B8EB21E49B72326D6CE5F4_RuntimeMethod_var, (ES3Reader_t2780AF8AA61DA2A817115CEF8612AC0E494D03C9 *)L_64, (ES3Type_t8FBECB7AE75168648B9524E0C2A38DAD4555421D *)L_65);
		TrailModule_set_lifetimeMultiplier_m23F95D65EE8C82152AE1CF2E41531EC2789A866B((TrailModule_t95D15372971E64A1977B7587ABAA87B1A31EF5C8 *)(TrailModule_t95D15372971E64A1977B7587ABAA87B1A31EF5C8 *)(&V_0), (float)L_66, /*hidden argument*/NULL);
		// break;
		goto IL_038e;
	}

IL_02a5:
	{
		// instance.minVertexDistance = reader.Read<System.Single>(ES3Type_float.Instance);
		ES3Reader_t2780AF8AA61DA2A817115CEF8612AC0E494D03C9 * L_67 = ___reader0;
		IL2CPP_RUNTIME_CLASS_INIT(ES3Type_float_tF86B773C86731BD9AD79448B860BBB178FE77644_il2cpp_TypeInfo_var);
		ES3Type_t8FBECB7AE75168648B9524E0C2A38DAD4555421D * L_68 = ((ES3Type_float_tF86B773C86731BD9AD79448B860BBB178FE77644_StaticFields*)il2cpp_codegen_static_fields_for(ES3Type_float_tF86B773C86731BD9AD79448B860BBB178FE77644_il2cpp_TypeInfo_var))->get_Instance_12();
		NullCheck((ES3Reader_t2780AF8AA61DA2A817115CEF8612AC0E494D03C9 *)L_67);
		float L_69;
		L_69 = GenericVirtFuncInvoker1< float, ES3Type_t8FBECB7AE75168648B9524E0C2A38DAD4555421D * >::Invoke(ES3Reader_Read_TisSingle_tE07797BA3C98D4CA9B5A19413C19A76688AB899E_m4A0416374498BDA042B8EB21E49B72326D6CE5F4_RuntimeMethod_var, (ES3Reader_t2780AF8AA61DA2A817115CEF8612AC0E494D03C9 *)L_67, (ES3Type_t8FBECB7AE75168648B9524E0C2A38DAD4555421D *)L_68);
		TrailModule_set_minVertexDistance_mF7C29F88FBF540CE4987F4CF9B141C624808FBC5((TrailModule_t95D15372971E64A1977B7587ABAA87B1A31EF5C8 *)(TrailModule_t95D15372971E64A1977B7587ABAA87B1A31EF5C8 *)(&V_0), (float)L_69, /*hidden argument*/NULL);
		// break;
		goto IL_038e;
	}

IL_02bc:
	{
		// instance.textureMode = reader.Read<UnityEngine.ParticleSystemTrailTextureMode>();
		ES3Reader_t2780AF8AA61DA2A817115CEF8612AC0E494D03C9 * L_70 = ___reader0;
		NullCheck((ES3Reader_t2780AF8AA61DA2A817115CEF8612AC0E494D03C9 *)L_70);
		int32_t L_71;
		L_71 = GenericVirtFuncInvoker0< int32_t >::Invoke(ES3Reader_Read_TisParticleSystemTrailTextureMode_tF3259187CA4D0A61EDB3A40E63CBF6C42641CE9F_m055DB1212E8BC34F385DF7D302F16241554E9730_RuntimeMethod_var, (ES3Reader_t2780AF8AA61DA2A817115CEF8612AC0E494D03C9 *)L_70);
		TrailModule_set_textureMode_mC1F8AE0D2965FC47BDBFF4F53E0673D5FB58CF28((TrailModule_t95D15372971E64A1977B7587ABAA87B1A31EF5C8 *)(TrailModule_t95D15372971E64A1977B7587ABAA87B1A31EF5C8 *)(&V_0), (int32_t)L_71, /*hidden argument*/NULL);
		// break;
		goto IL_038e;
	}

IL_02ce:
	{
		// instance.worldSpace = reader.Read<System.Boolean>(ES3Type_bool.Instance);
		ES3Reader_t2780AF8AA61DA2A817115CEF8612AC0E494D03C9 * L_72 = ___reader0;
		IL2CPP_RUNTIME_CLASS_INIT(ES3Type_bool_t8F309F7B9CC735FF1DEE68081B6E3CAB367745F4_il2cpp_TypeInfo_var);
		ES3Type_t8FBECB7AE75168648B9524E0C2A38DAD4555421D * L_73 = ((ES3Type_bool_t8F309F7B9CC735FF1DEE68081B6E3CAB367745F4_StaticFields*)il2cpp_codegen_static_fields_for(ES3Type_bool_t8F309F7B9CC735FF1DEE68081B6E3CAB367745F4_il2cpp_TypeInfo_var))->get_Instance_12();
		NullCheck((ES3Reader_t2780AF8AA61DA2A817115CEF8612AC0E494D03C9 *)L_72);
		bool L_74;
		L_74 = GenericVirtFuncInvoker1< bool, ES3Type_t8FBECB7AE75168648B9524E0C2A38DAD4555421D * >::Invoke(ES3Reader_Read_TisBoolean_t07D1E3F34E4813023D64F584DFF7B34C9D922F37_mC6D1B158268FF9B97822FF9F5B37FB1723FEDA22_RuntimeMethod_var, (ES3Reader_t2780AF8AA61DA2A817115CEF8612AC0E494D03C9 *)L_72, (ES3Type_t8FBECB7AE75168648B9524E0C2A38DAD4555421D *)L_73);
		TrailModule_set_worldSpace_m42A63AF4A96F24A621A29A0F35240195F0E56B1A((TrailModule_t95D15372971E64A1977B7587ABAA87B1A31EF5C8 *)(TrailModule_t95D15372971E64A1977B7587ABAA87B1A31EF5C8 *)(&V_0), (bool)L_74, /*hidden argument*/NULL);
		// break;
		goto IL_038e;
	}

IL_02e5:
	{
		// instance.dieWithParticles = reader.Read<System.Boolean>(ES3Type_bool.Instance);
		ES3Reader_t2780AF8AA61DA2A817115CEF8612AC0E494D03C9 * L_75 = ___reader0;
		IL2CPP_RUNTIME_CLASS_INIT(ES3Type_bool_t8F309F7B9CC735FF1DEE68081B6E3CAB367745F4_il2cpp_TypeInfo_var);
		ES3Type_t8FBECB7AE75168648B9524E0C2A38DAD4555421D * L_76 = ((ES3Type_bool_t8F309F7B9CC735FF1DEE68081B6E3CAB367745F4_StaticFields*)il2cpp_codegen_static_fields_for(ES3Type_bool_t8F309F7B9CC735FF1DEE68081B6E3CAB367745F4_il2cpp_TypeInfo_var))->get_Instance_12();
		NullCheck((ES3Reader_t2780AF8AA61DA2A817115CEF8612AC0E494D03C9 *)L_75);
		bool L_77;
		L_77 = GenericVirtFuncInvoker1< bool, ES3Type_t8FBECB7AE75168648B9524E0C2A38DAD4555421D * >::Invoke(ES3Reader_Read_TisBoolean_t07D1E3F34E4813023D64F584DFF7B34C9D922F37_mC6D1B158268FF9B97822FF9F5B37FB1723FEDA22_RuntimeMethod_var, (ES3Reader_t2780AF8AA61DA2A817115CEF8612AC0E494D03C9 *)L_75, (ES3Type_t8FBECB7AE75168648B9524E0C2A38DAD4555421D *)L_76);
		TrailModule_set_dieWithParticles_mB7C4E8DC2F908FDF6D57A77B54B821E360D8DA99((TrailModule_t95D15372971E64A1977B7587ABAA87B1A31EF5C8 *)(TrailModule_t95D15372971E64A1977B7587ABAA87B1A31EF5C8 *)(&V_0), (bool)L_77, /*hidden argument*/NULL);
		// break;
		goto IL_038e;
	}

IL_02fc:
	{
		// instance.sizeAffectsWidth = reader.Read<System.Boolean>(ES3Type_bool.Instance);
		ES3Reader_t2780AF8AA61DA2A817115CEF8612AC0E494D03C9 * L_78 = ___reader0;
		IL2CPP_RUNTIME_CLASS_INIT(ES3Type_bool_t8F309F7B9CC735FF1DEE68081B6E3CAB367745F4_il2cpp_TypeInfo_var);
		ES3Type_t8FBECB7AE75168648B9524E0C2A38DAD4555421D * L_79 = ((ES3Type_bool_t8F309F7B9CC735FF1DEE68081B6E3CAB367745F4_StaticFields*)il2cpp_codegen_static_fields_for(ES3Type_bool_t8F309F7B9CC735FF1DEE68081B6E3CAB367745F4_il2cpp_TypeInfo_var))->get_Instance_12();
		NullCheck((ES3Reader_t2780AF8AA61DA2A817115CEF8612AC0E494D03C9 *)L_78);
		bool L_80;
		L_80 = GenericVirtFuncInvoker1< bool, ES3Type_t8FBECB7AE75168648B9524E0C2A38DAD4555421D * >::Invoke(ES3Reader_Read_TisBoolean_t07D1E3F34E4813023D64F584DFF7B34C9D922F37_mC6D1B158268FF9B97822FF9F5B37FB1723FEDA22_RuntimeMethod_var, (ES3Reader_t2780AF8AA61DA2A817115CEF8612AC0E494D03C9 *)L_78, (ES3Type_t8FBECB7AE75168648B9524E0C2A38DAD4555421D *)L_79);
		TrailModule_set_sizeAffectsWidth_m3517856E39080DA69B447499C8846D2491B0ABF0((TrailModule_t95D15372971E64A1977B7587ABAA87B1A31EF5C8 *)(TrailModule_t95D15372971E64A1977B7587ABAA87B1A31EF5C8 *)(&V_0), (bool)L_80, /*hidden argument*/NULL);
		// break;
		goto IL_038e;
	}

IL_0310:
	{
		// instance.sizeAffectsLifetime = reader.Read<System.Boolean>(ES3Type_bool.Instance);
		ES3Reader_t2780AF8AA61DA2A817115CEF8612AC0E494D03C9 * L_81 = ___reader0;
		IL2CPP_RUNTIME_CLASS_INIT(ES3Type_bool_t8F309F7B9CC735FF1DEE68081B6E3CAB367745F4_il2cpp_TypeInfo_var);
		ES3Type_t8FBECB7AE75168648B9524E0C2A38DAD4555421D * L_82 = ((ES3Type_bool_t8F309F7B9CC735FF1DEE68081B6E3CAB367745F4_StaticFields*)il2cpp_codegen_static_fields_for(ES3Type_bool_t8F309F7B9CC735FF1DEE68081B6E3CAB367745F4_il2cpp_TypeInfo_var))->get_Instance_12();
		NullCheck((ES3Reader_t2780AF8AA61DA2A817115CEF8612AC0E494D03C9 *)L_81);
		bool L_83;
		L_83 = GenericVirtFuncInvoker1< bool, ES3Type_t8FBECB7AE75168648B9524E0C2A38DAD4555421D * >::Invoke(ES3Reader_Read_TisBoolean_t07D1E3F34E4813023D64F584DFF7B34C9D922F37_mC6D1B158268FF9B97822FF9F5B37FB1723FEDA22_RuntimeMethod_var, (ES3Reader_t2780AF8AA61DA2A817115CEF8612AC0E494D03C9 *)L_81, (ES3Type_t8FBECB7AE75168648B9524E0C2A38DAD4555421D *)L_82);
		TrailModule_set_sizeAffectsLifetime_m98BF4A6594193D824B52D88371CF963ACBA388FD((TrailModule_t95D15372971E64A1977B7587ABAA87B1A31EF5C8 *)(TrailModule_t95D15372971E64A1977B7587ABAA87B1A31EF5C8 *)(&V_0), (bool)L_83, /*hidden argument*/NULL);
		// break;
		goto IL_038e;
	}

IL_0324:
	{
		// instance.inheritParticleColor = reader.Read<System.Boolean>(ES3Type_bool.Instance);
		ES3Reader_t2780AF8AA61DA2A817115CEF8612AC0E494D03C9 * L_84 = ___reader0;
		IL2CPP_RUNTIME_CLASS_INIT(ES3Type_bool_t8F309F7B9CC735FF1DEE68081B6E3CAB367745F4_il2cpp_TypeInfo_var);
		ES3Type_t8FBECB7AE75168648B9524E0C2A38DAD4555421D * L_85 = ((ES3Type_bool_t8F309F7B9CC735FF1DEE68081B6E3CAB367745F4_StaticFields*)il2cpp_codegen_static_fields_for(ES3Type_bool_t8F309F7B9CC735FF1DEE68081B6E3CAB367745F4_il2cpp_TypeInfo_var))->get_Instance_12();
		NullCheck((ES3Reader_t2780AF8AA61DA2A817115CEF8612AC0E494D03C9 *)L_84);
		bool L_86;
		L_86 = GenericVirtFuncInvoker1< bool, ES3Type_t8FBECB7AE75168648B9524E0C2A38DAD4555421D * >::Invoke(ES3Reader_Read_TisBoolean_t07D1E3F34E4813023D64F584DFF7B34C9D922F37_mC6D1B158268FF9B97822FF9F5B37FB1723FEDA22_RuntimeMethod_var, (ES3Reader_t2780AF8AA61DA2A817115CEF8612AC0E494D03C9 *)L_84, (ES3Type_t8FBECB7AE75168648B9524E0C2A38DAD4555421D *)L_85);
		TrailModule_set_inheritParticleColor_mCD83E87B5E00F2BFFBE08AD2D1D68606283A4FEE((TrailModule_t95D15372971E64A1977B7587ABAA87B1A31EF5C8 *)(TrailModule_t95D15372971E64A1977B7587ABAA87B1A31EF5C8 *)(&V_0), (bool)L_86, /*hidden argument*/NULL);
		// break;
		goto IL_038e;
	}

IL_0338:
	{
		// instance.colorOverLifetime = reader.Read<UnityEngine.ParticleSystem.MinMaxGradient>(ES3Type_MinMaxGradient.Instance);
		ES3Reader_t2780AF8AA61DA2A817115CEF8612AC0E494D03C9 * L_87 = ___reader0;
		IL2CPP_RUNTIME_CLASS_INIT(ES3Type_MinMaxGradient_t5DD353D60E95642AB39D1C97C6FD6DD1B067D3CF_il2cpp_TypeInfo_var);
		ES3Type_t8FBECB7AE75168648B9524E0C2A38DAD4555421D * L_88 = ((ES3Type_MinMaxGradient_t5DD353D60E95642AB39D1C97C6FD6DD1B067D3CF_StaticFields*)il2cpp_codegen_static_fields_for(ES3Type_MinMaxGradient_t5DD353D60E95642AB39D1C97C6FD6DD1B067D3CF_il2cpp_TypeInfo_var))->get_Instance_12();
		NullCheck((ES3Reader_t2780AF8AA61DA2A817115CEF8612AC0E494D03C9 *)L_87);
		MinMaxGradient_tF4530B26F29D9635D670A33B9EE581EAC48C12B7  L_89;
		L_89 = GenericVirtFuncInvoker1< MinMaxGradient_tF4530B26F29D9635D670A33B9EE581EAC48C12B7 , ES3Type_t8FBECB7AE75168648B9524E0C2A38DAD4555421D * >::Invoke(ES3Reader_Read_TisMinMaxGradient_tF4530B26F29D9635D670A33B9EE581EAC48C12B7_m6A3DD8CBBAC5D32B838B6C4399009AB8AA512ACC_RuntimeMethod_var, (ES3Reader_t2780AF8AA61DA2A817115CEF8612AC0E494D03C9 *)L_87, (ES3Type_t8FBECB7AE75168648B9524E0C2A38DAD4555421D *)L_88);
		TrailModule_set_colorOverLifetime_mCD56BD4B75D3A3947069BA1B93FEC78AAE08DF27((TrailModule_t95D15372971E64A1977B7587ABAA87B1A31EF5C8 *)(TrailModule_t95D15372971E64A1977B7587ABAA87B1A31EF5C8 *)(&V_0), (MinMaxGradient_tF4530B26F29D9635D670A33B9EE581EAC48C12B7 )L_89, /*hidden argument*/NULL);
		// break;
		goto IL_038e;
	}

IL_034c:
	{
		// instance.widthOverTrail = reader.Read<UnityEngine.ParticleSystem.MinMaxCurve>(ES3Type_MinMaxCurve.Instance);
		ES3Reader_t2780AF8AA61DA2A817115CEF8612AC0E494D03C9 * L_90 = ___reader0;
		IL2CPP_RUNTIME_CLASS_INIT(ES3Type_MinMaxCurve_tC5342BF0F8735B85CB5E16FDD4C6FACC8AFAD3B7_il2cpp_TypeInfo_var);
		ES3Type_t8FBECB7AE75168648B9524E0C2A38DAD4555421D * L_91 = ((ES3Type_MinMaxCurve_tC5342BF0F8735B85CB5E16FDD4C6FACC8AFAD3B7_StaticFields*)il2cpp_codegen_static_fields_for(ES3Type_MinMaxCurve_tC5342BF0F8735B85CB5E16FDD4C6FACC8AFAD3B7_il2cpp_TypeInfo_var))->get_Instance_12();
		NullCheck((ES3Reader_t2780AF8AA61DA2A817115CEF8612AC0E494D03C9 *)L_90);
		MinMaxCurve_tF036239442AB2D438B1EDABEBC785426871084CD  L_92;
		L_92 = GenericVirtFuncInvoker1< MinMaxCurve_tF036239442AB2D438B1EDABEBC785426871084CD , ES3Type_t8FBECB7AE75168648B9524E0C2A38DAD4555421D * >::Invoke(ES3Reader_Read_TisMinMaxCurve_tF036239442AB2D438B1EDABEBC785426871084CD_mD285150CBFB52440643BBECB5ADF4EE8DE940535_RuntimeMethod_var, (ES3Reader_t2780AF8AA61DA2A817115CEF8612AC0E494D03C9 *)L_90, (ES3Type_t8FBECB7AE75168648B9524E0C2A38DAD4555421D *)L_91);
		TrailModule_set_widthOverTrail_m6C0A896EBFDED7CE46344B3A0B04212934F30DE1((TrailModule_t95D15372971E64A1977B7587ABAA87B1A31EF5C8 *)(TrailModule_t95D15372971E64A1977B7587ABAA87B1A31EF5C8 *)(&V_0), (MinMaxCurve_tF036239442AB2D438B1EDABEBC785426871084CD )L_92, /*hidden argument*/NULL);
		// break;
		goto IL_038e;
	}

IL_0360:
	{
		// instance.widthOverTrailMultiplier = reader.Read<System.Single>(ES3Type_float.Instance);
		ES3Reader_t2780AF8AA61DA2A817115CEF8612AC0E494D03C9 * L_93 = ___reader0;
		IL2CPP_RUNTIME_CLASS_INIT(ES3Type_float_tF86B773C86731BD9AD79448B860BBB178FE77644_il2cpp_TypeInfo_var);
		ES3Type_t8FBECB7AE75168648B9524E0C2A38DAD4555421D * L_94 = ((ES3Type_float_tF86B773C86731BD9AD79448B860BBB178FE77644_StaticFields*)il2cpp_codegen_static_fields_for(ES3Type_float_tF86B773C86731BD9AD79448B860BBB178FE77644_il2cpp_TypeInfo_var))->get_Instance_12();
		NullCheck((ES3Reader_t2780AF8AA61DA2A817115CEF8612AC0E494D03C9 *)L_93);
		float L_95;
		L_95 = GenericVirtFuncInvoker1< float, ES3Type_t8FBECB7AE75168648B9524E0C2A38DAD4555421D * >::Invoke(ES3Reader_Read_TisSingle_tE07797BA3C98D4CA9B5A19413C19A76688AB899E_m4A0416374498BDA042B8EB21E49B72326D6CE5F4_RuntimeMethod_var, (ES3Reader_t2780AF8AA61DA2A817115CEF8612AC0E494D03C9 *)L_93, (ES3Type_t8FBECB7AE75168648B9524E0C2A38DAD4555421D *)L_94);
		TrailModule_set_widthOverTrailMultiplier_m6A7EA2856CF30B710CCB528EA3EBFD1799C19BD4((TrailModule_t95D15372971E64A1977B7587ABAA87B1A31EF5C8 *)(TrailModule_t95D15372971E64A1977B7587ABAA87B1A31EF5C8 *)(&V_0), (float)L_95, /*hidden argument*/NULL);
		// break;
		goto IL_038e;
	}

IL_0374:
	{
		// instance.colorOverTrail = reader.Read<UnityEngine.ParticleSystem.MinMaxGradient>(ES3Type_MinMaxGradient.Instance);
		ES3Reader_t2780AF8AA61DA2A817115CEF8612AC0E494D03C9 * L_96 = ___reader0;
		IL2CPP_RUNTIME_CLASS_INIT(ES3Type_MinMaxGradient_t5DD353D60E95642AB39D1C97C6FD6DD1B067D3CF_il2cpp_TypeInfo_var);
		ES3Type_t8FBECB7AE75168648B9524E0C2A38DAD4555421D * L_97 = ((ES3Type_MinMaxGradient_t5DD353D60E95642AB39D1C97C6FD6DD1B067D3CF_StaticFields*)il2cpp_codegen_static_fields_for(ES3Type_MinMaxGradient_t5DD353D60E95642AB39D1C97C6FD6DD1B067D3CF_il2cpp_TypeInfo_var))->get_Instance_12();
		NullCheck((ES3Reader_t2780AF8AA61DA2A817115CEF8612AC0E494D03C9 *)L_96);
		MinMaxGradient_tF4530B26F29D9635D670A33B9EE581EAC48C12B7  L_98;
		L_98 = GenericVirtFuncInvoker1< MinMaxGradient_tF4530B26F29D9635D670A33B9EE581EAC48C12B7 , ES3Type_t8FBECB7AE75168648B9524E0C2A38DAD4555421D * >::Invoke(ES3Reader_Read_TisMinMaxGradient_tF4530B26F29D9635D670A33B9EE581EAC48C12B7_m6A3DD8CBBAC5D32B838B6C4399009AB8AA512ACC_RuntimeMethod_var, (ES3Reader_t2780AF8AA61DA2A817115CEF8612AC0E494D03C9 *)L_96, (ES3Type_t8FBECB7AE75168648B9524E0C2A38DAD4555421D *)L_97);
		TrailModule_set_colorOverTrail_m8440C6574C8310292B93D70EA4FE3EE8C40DF8DB((TrailModule_t95D15372971E64A1977B7587ABAA87B1A31EF5C8 *)(TrailModule_t95D15372971E64A1977B7587ABAA87B1A31EF5C8 *)(&V_0), (MinMaxGradient_tF4530B26F29D9635D670A33B9EE581EAC48C12B7 )L_98, /*hidden argument*/NULL);
		// break;
		goto IL_038e;
	}

IL_0388:
	{
		// reader.Skip();
		ES3Reader_t2780AF8AA61DA2A817115CEF8612AC0E494D03C9 * L_99 = ___reader0;
		NullCheck((ES3Reader_t2780AF8AA61DA2A817115CEF8612AC0E494D03C9 *)L_99);
		VirtActionInvoker0::Invoke(41 /* System.Void ES3Reader::Skip() */, (ES3Reader_t2780AF8AA61DA2A817115CEF8612AC0E494D03C9 *)L_99);
	}

IL_038e:
	{
		// while((propertyName = reader.ReadPropertyName()) != null)
		ES3Reader_t2780AF8AA61DA2A817115CEF8612AC0E494D03C9 * L_100 = ___reader0;
		NullCheck((ES3Reader_t2780AF8AA61DA2A817115CEF8612AC0E494D03C9 *)L_100);
		String_t* L_101;
		L_101 = VirtFuncInvoker0< String_t* >::Invoke(21 /* System.String ES3Reader::ReadPropertyName() */, (ES3Reader_t2780AF8AA61DA2A817115CEF8612AC0E494D03C9 *)L_100);
		String_t* L_102 = (String_t*)L_101;
		V_1 = (String_t*)L_102;
		if (L_102)
		{
			goto IL_000c;
		}
	}
	{
		// }
		return;
	}
}
// System.Void ES3Types.ES3Type_TrailModule::ReadInto<UnityEngine.ParticleSystem/RotationOverLifetimeModule>(ES3Reader,System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ES3Type_TrailModule_ReadInto_TisRotationOverLifetimeModule_t78F62EF75295ADEF46B90235B7EB163AED016D2B_m205FB9CFE8D68E85AABCBC6579B84D2041726778_gshared (ES3Type_TrailModule_tC773F73EC0443516DD128FF2B5AE010809742462 * __this, ES3Reader_t2780AF8AA61DA2A817115CEF8612AC0E494D03C9 * ___reader0, RuntimeObject * ___obj1, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ES3Reader_Read_TisBoolean_t07D1E3F34E4813023D64F584DFF7B34C9D922F37_mC6D1B158268FF9B97822FF9F5B37FB1723FEDA22_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ES3Reader_Read_TisMinMaxCurve_tF036239442AB2D438B1EDABEBC785426871084CD_mD285150CBFB52440643BBECB5ADF4EE8DE940535_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ES3Reader_Read_TisMinMaxGradient_tF4530B26F29D9635D670A33B9EE581EAC48C12B7_m6A3DD8CBBAC5D32B838B6C4399009AB8AA512ACC_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ES3Reader_Read_TisParticleSystemTrailTextureMode_tF3259187CA4D0A61EDB3A40E63CBF6C42641CE9F_m055DB1212E8BC34F385DF7D302F16241554E9730_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ES3Reader_Read_TisSingle_tE07797BA3C98D4CA9B5A19413C19A76688AB899E_m4A0416374498BDA042B8EB21E49B72326D6CE5F4_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ES3Type_MinMaxCurve_tC5342BF0F8735B85CB5E16FDD4C6FACC8AFAD3B7_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ES3Type_MinMaxGradient_t5DD353D60E95642AB39D1C97C6FD6DD1B067D3CF_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ES3Type_bool_t8F309F7B9CC735FF1DEE68081B6E3CAB367745F4_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ES3Type_float_tF86B773C86731BD9AD79448B860BBB178FE77644_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&TrailModule_t95D15372971E64A1977B7587ABAA87B1A31EF5C8_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral1D87A56AE67B2CD49CAE6E942C2FB7AD98925C00);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral354281948B6269615E32D856CF85B6F456724DAA);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral4221314F268D184F46688D45C85446821F1F1BC3);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral47C47DD09640803AD8016748EAE1F04DD1D41119);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral5C86338F177203D001C41D9C348A83D1338CC7D0);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral60126327537B7B8E6EE33C43FE0C5CA8BCC3A06A);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral87F70660D62DE5FC257FBADE9DA4EC9188597DE5);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralA967787586EC9E5A17A9C55E2002AB73A5E21A0A);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralADAEB0839588196B349BDB6CF33AFA3E0736360B);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralBE2893848F9FC647C2288DA6581A1522E9695182);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralBF540D6548854CC21630064FBA5390C9409C86F0);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralC580B374AA991574F91DFC86C068E7FAD661A3A4);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralE049DB547285CFCE1CB9A95934B6B6DCE2D219EC);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralF9D225733E1D10F9344C755C4A9C0870CD1DE97B);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralFE5F89F63E2381500F62A7CBD6954563BE44562F);
		s_Il2CppMethodInitialized = true;
	}
	TrailModule_t95D15372971E64A1977B7587ABAA87B1A31EF5C8  V_0;
	memset((&V_0), 0, sizeof(V_0));
	String_t* V_1 = NULL;
	uint32_t V_2 = 0;
	{
		// var instance = (UnityEngine.ParticleSystem.TrailModule)obj;
		RuntimeObject * L_0 = ___obj1;
		V_0 = (TrailModule_t95D15372971E64A1977B7587ABAA87B1A31EF5C8 )((*(TrailModule_t95D15372971E64A1977B7587ABAA87B1A31EF5C8 *)((TrailModule_t95D15372971E64A1977B7587ABAA87B1A31EF5C8 *)UnBox(L_0, TrailModule_t95D15372971E64A1977B7587ABAA87B1A31EF5C8_il2cpp_TypeInfo_var))));
		goto IL_038e;
	}

IL_000c:
	{
		String_t* L_1 = V_1;
		if (!L_1)
		{
			goto IL_0388;
		}
	}
	{
		String_t* L_2 = V_1;
		uint32_t L_3;
		L_3 = U3CPrivateImplementationDetailsU3E_ComputeStringHash_m3ADC1F612F9EE3DD518E6F0023A0DE0EE2B120A7((String_t*)L_2, /*hidden argument*/NULL);
		V_2 = (uint32_t)L_3;
		uint32_t L_4 = V_2;
		if ((!(((uint32_t)L_4) <= ((uint32_t)((int32_t)1376955374)))))
		{
			goto IL_008d;
		}
	}
	{
		uint32_t L_5 = V_2;
		if ((!(((uint32_t)L_5) <= ((uint32_t)((int32_t)494095910)))))
		{
			goto IL_004f;
		}
	}
	{
		uint32_t L_6 = V_2;
		if ((((int32_t)L_6) == ((int32_t)((int32_t)49525662))))
		{
			goto IL_010e;
		}
	}
	{
		uint32_t L_7 = V_2;
		if ((((int32_t)L_7) == ((int32_t)((int32_t)341298456))))
		{
			goto IL_021f;
		}
	}
	{
		uint32_t L_8 = V_2;
		if ((((int32_t)L_8) == ((int32_t)((int32_t)494095910))))
		{
			goto IL_0234;
		}
	}
	{
		goto IL_0388;
	}

IL_004f:
	{
		uint32_t L_9 = V_2;
		if ((!(((uint32_t)L_9) <= ((uint32_t)((int32_t)973733911)))))
		{
			goto IL_0072;
		}
	}
	{
		uint32_t L_10 = V_2;
		if ((((int32_t)L_10) == ((int32_t)((int32_t)559929418))))
		{
			goto IL_01b6;
		}
	}
	{
		uint32_t L_11 = V_2;
		if ((((int32_t)L_11) == ((int32_t)((int32_t)973733911))))
		{
			goto IL_0177;
		}
	}
	{
		goto IL_0388;
	}

IL_0072:
	{
		uint32_t L_12 = V_2;
		if ((((int32_t)L_12) == ((int32_t)((int32_t)1024708593))))
		{
			goto IL_014d;
		}
	}
	{
		uint32_t L_13 = V_2;
		if ((((int32_t)L_13) == ((int32_t)((int32_t)1376955374))))
		{
			goto IL_0138;
		}
	}
	{
		goto IL_0388;
	}

IL_008d:
	{
		uint32_t L_14 = V_2;
		if ((!(((uint32_t)L_14) <= ((uint32_t)((int32_t)-2100707162)))))
		{
			goto IL_00d3;
		}
	}
	{
		uint32_t L_15 = V_2;
		if ((!(((uint32_t)L_15) <= ((uint32_t)((int32_t)1975189197)))))
		{
			goto IL_00b8;
		}
	}
	{
		uint32_t L_16 = V_2;
		if ((((int32_t)L_16) == ((int32_t)((int32_t)1546474083))))
		{
			goto IL_020a;
		}
	}
	{
		uint32_t L_17 = V_2;
		if ((((int32_t)L_17) == ((int32_t)((int32_t)1975189197))))
		{
			goto IL_01cb;
		}
	}
	{
		goto IL_0388;
	}

IL_00b8:
	{
		uint32_t L_18 = V_2;
		if ((((int32_t)L_18) == ((int32_t)((int32_t)2053023684))))
		{
			goto IL_01a1;
		}
	}
	{
		uint32_t L_19 = V_2;
		if ((((int32_t)L_19) == ((int32_t)((int32_t)-2100707162))))
		{
			goto IL_0162;
		}
	}
	{
		goto IL_0388;
	}

IL_00d3:
	{
		uint32_t L_20 = V_2;
		if ((!(((uint32_t)L_20) <= ((uint32_t)((int32_t)-1319579393)))))
		{
			goto IL_00f6;
		}
	}
	{
		uint32_t L_21 = V_2;
		if ((((int32_t)L_21) == ((int32_t)((int32_t)-1562862963))))
		{
			goto IL_01e0;
		}
	}
	{
		uint32_t L_22 = V_2;
		if ((((int32_t)L_22) == ((int32_t)((int32_t)-1319579393))))
		{
			goto IL_018c;
		}
	}
	{
		goto IL_0388;
	}

IL_00f6:
	{
		uint32_t L_23 = V_2;
		if ((((int32_t)L_23) == ((int32_t)((int32_t)-1055777148))))
		{
			goto IL_0123;
		}
	}
	{
		uint32_t L_24 = V_2;
		if ((((int32_t)L_24) == ((int32_t)((int32_t)-413379935))))
		{
			goto IL_01f5;
		}
	}
	{
		goto IL_0388;
	}

IL_010e:
	{
		String_t* L_25 = V_1;
		bool L_26;
		L_26 = String_op_Equality_m50B3548E4AC232558190B0052877B290AA1D436A((String_t*)L_25, (String_t*)_stringLiteralF9D225733E1D10F9344C755C4A9C0870CD1DE97B, /*hidden argument*/NULL);
		if (L_26)
		{
			goto IL_0249;
		}
	}
	{
		goto IL_0388;
	}

IL_0123:
	{
		String_t* L_27 = V_1;
		bool L_28;
		L_28 = String_op_Equality_m50B3548E4AC232558190B0052877B290AA1D436A((String_t*)L_27, (String_t*)_stringLiteral60126327537B7B8E6EE33C43FE0C5CA8BCC3A06A, /*hidden argument*/NULL);
		if (L_28)
		{
			goto IL_0260;
		}
	}
	{
		goto IL_0388;
	}

IL_0138:
	{
		String_t* L_29 = V_1;
		bool L_30;
		L_30 = String_op_Equality_m50B3548E4AC232558190B0052877B290AA1D436A((String_t*)L_29, (String_t*)_stringLiteralBE2893848F9FC647C2288DA6581A1522E9695182, /*hidden argument*/NULL);
		if (L_30)
		{
			goto IL_0277;
		}
	}
	{
		goto IL_0388;
	}

IL_014d:
	{
		String_t* L_31 = V_1;
		bool L_32;
		L_32 = String_op_Equality_m50B3548E4AC232558190B0052877B290AA1D436A((String_t*)L_31, (String_t*)_stringLiteral4221314F268D184F46688D45C85446821F1F1BC3, /*hidden argument*/NULL);
		if (L_32)
		{
			goto IL_028e;
		}
	}
	{
		goto IL_0388;
	}

IL_0162:
	{
		String_t* L_33 = V_1;
		bool L_34;
		L_34 = String_op_Equality_m50B3548E4AC232558190B0052877B290AA1D436A((String_t*)L_33, (String_t*)_stringLiteral5C86338F177203D001C41D9C348A83D1338CC7D0, /*hidden argument*/NULL);
		if (L_34)
		{
			goto IL_02a5;
		}
	}
	{
		goto IL_0388;
	}

IL_0177:
	{
		String_t* L_35 = V_1;
		bool L_36;
		L_36 = String_op_Equality_m50B3548E4AC232558190B0052877B290AA1D436A((String_t*)L_35, (String_t*)_stringLiteralFE5F89F63E2381500F62A7CBD6954563BE44562F, /*hidden argument*/NULL);
		if (L_36)
		{
			goto IL_02bc;
		}
	}
	{
		goto IL_0388;
	}

IL_018c:
	{
		String_t* L_37 = V_1;
		bool L_38;
		L_38 = String_op_Equality_m50B3548E4AC232558190B0052877B290AA1D436A((String_t*)L_37, (String_t*)_stringLiteral87F70660D62DE5FC257FBADE9DA4EC9188597DE5, /*hidden argument*/NULL);
		if (L_38)
		{
			goto IL_02ce;
		}
	}
	{
		goto IL_0388;
	}

IL_01a1:
	{
		String_t* L_39 = V_1;
		bool L_40;
		L_40 = String_op_Equality_m50B3548E4AC232558190B0052877B290AA1D436A((String_t*)L_39, (String_t*)_stringLiteral354281948B6269615E32D856CF85B6F456724DAA, /*hidden argument*/NULL);
		if (L_40)
		{
			goto IL_02e5;
		}
	}
	{
		goto IL_0388;
	}

IL_01b6:
	{
		String_t* L_41 = V_1;
		bool L_42;
		L_42 = String_op_Equality_m50B3548E4AC232558190B0052877B290AA1D436A((String_t*)L_41, (String_t*)_stringLiteralADAEB0839588196B349BDB6CF33AFA3E0736360B, /*hidden argument*/NULL);
		if (L_42)
		{
			goto IL_02fc;
		}
	}
	{
		goto IL_0388;
	}

IL_01cb:
	{
		String_t* L_43 = V_1;
		bool L_44;
		L_44 = String_op_Equality_m50B3548E4AC232558190B0052877B290AA1D436A((String_t*)L_43, (String_t*)_stringLiteralC580B374AA991574F91DFC86C068E7FAD661A3A4, /*hidden argument*/NULL);
		if (L_44)
		{
			goto IL_0310;
		}
	}
	{
		goto IL_0388;
	}

IL_01e0:
	{
		String_t* L_45 = V_1;
		bool L_46;
		L_46 = String_op_Equality_m50B3548E4AC232558190B0052877B290AA1D436A((String_t*)L_45, (String_t*)_stringLiteralE049DB547285CFCE1CB9A95934B6B6DCE2D219EC, /*hidden argument*/NULL);
		if (L_46)
		{
			goto IL_0324;
		}
	}
	{
		goto IL_0388;
	}

IL_01f5:
	{
		String_t* L_47 = V_1;
		bool L_48;
		L_48 = String_op_Equality_m50B3548E4AC232558190B0052877B290AA1D436A((String_t*)L_47, (String_t*)_stringLiteralBF540D6548854CC21630064FBA5390C9409C86F0, /*hidden argument*/NULL);
		if (L_48)
		{
			goto IL_0338;
		}
	}
	{
		goto IL_0388;
	}

IL_020a:
	{
		String_t* L_49 = V_1;
		bool L_50;
		L_50 = String_op_Equality_m50B3548E4AC232558190B0052877B290AA1D436A((String_t*)L_49, (String_t*)_stringLiteral1D87A56AE67B2CD49CAE6E942C2FB7AD98925C00, /*hidden argument*/NULL);
		if (L_50)
		{
			goto IL_034c;
		}
	}
	{
		goto IL_0388;
	}

IL_021f:
	{
		String_t* L_51 = V_1;
		bool L_52;
		L_52 = String_op_Equality_m50B3548E4AC232558190B0052877B290AA1D436A((String_t*)L_51, (String_t*)_stringLiteralA967787586EC9E5A17A9C55E2002AB73A5E21A0A, /*hidden argument*/NULL);
		if (L_52)
		{
			goto IL_0360;
		}
	}
	{
		goto IL_0388;
	}

IL_0234:
	{
		String_t* L_53 = V_1;
		bool L_54;
		L_54 = String_op_Equality_m50B3548E4AC232558190B0052877B290AA1D436A((String_t*)L_53, (String_t*)_stringLiteral47C47DD09640803AD8016748EAE1F04DD1D41119, /*hidden argument*/NULL);
		if (L_54)
		{
			goto IL_0374;
		}
	}
	{
		goto IL_0388;
	}

IL_0249:
	{
		// instance.enabled = reader.Read<System.Boolean>(ES3Type_bool.Instance);
		ES3Reader_t2780AF8AA61DA2A817115CEF8612AC0E494D03C9 * L_55 = ___reader0;
		IL2CPP_RUNTIME_CLASS_INIT(ES3Type_bool_t8F309F7B9CC735FF1DEE68081B6E3CAB367745F4_il2cpp_TypeInfo_var);
		ES3Type_t8FBECB7AE75168648B9524E0C2A38DAD4555421D * L_56 = ((ES3Type_bool_t8F309F7B9CC735FF1DEE68081B6E3CAB367745F4_StaticFields*)il2cpp_codegen_static_fields_for(ES3Type_bool_t8F309F7B9CC735FF1DEE68081B6E3CAB367745F4_il2cpp_TypeInfo_var))->get_Instance_12();
		NullCheck((ES3Reader_t2780AF8AA61DA2A817115CEF8612AC0E494D03C9 *)L_55);
		bool L_57;
		L_57 = GenericVirtFuncInvoker1< bool, ES3Type_t8FBECB7AE75168648B9524E0C2A38DAD4555421D * >::Invoke(ES3Reader_Read_TisBoolean_t07D1E3F34E4813023D64F584DFF7B34C9D922F37_mC6D1B158268FF9B97822FF9F5B37FB1723FEDA22_RuntimeMethod_var, (ES3Reader_t2780AF8AA61DA2A817115CEF8612AC0E494D03C9 *)L_55, (ES3Type_t8FBECB7AE75168648B9524E0C2A38DAD4555421D *)L_56);
		TrailModule_set_enabled_mFC8451DDDF40CCBB3E32A4B30A001115F6346894((TrailModule_t95D15372971E64A1977B7587ABAA87B1A31EF5C8 *)(TrailModule_t95D15372971E64A1977B7587ABAA87B1A31EF5C8 *)(&V_0), (bool)L_57, /*hidden argument*/NULL);
		// break;
		goto IL_038e;
	}

IL_0260:
	{
		// instance.ratio = reader.Read<System.Single>(ES3Type_float.Instance);
		ES3Reader_t2780AF8AA61DA2A817115CEF8612AC0E494D03C9 * L_58 = ___reader0;
		IL2CPP_RUNTIME_CLASS_INIT(ES3Type_float_tF86B773C86731BD9AD79448B860BBB178FE77644_il2cpp_TypeInfo_var);
		ES3Type_t8FBECB7AE75168648B9524E0C2A38DAD4555421D * L_59 = ((ES3Type_float_tF86B773C86731BD9AD79448B860BBB178FE77644_StaticFields*)il2cpp_codegen_static_fields_for(ES3Type_float_tF86B773C86731BD9AD79448B860BBB178FE77644_il2cpp_TypeInfo_var))->get_Instance_12();
		NullCheck((ES3Reader_t2780AF8AA61DA2A817115CEF8612AC0E494D03C9 *)L_58);
		float L_60;
		L_60 = GenericVirtFuncInvoker1< float, ES3Type_t8FBECB7AE75168648B9524E0C2A38DAD4555421D * >::Invoke(ES3Reader_Read_TisSingle_tE07797BA3C98D4CA9B5A19413C19A76688AB899E_m4A0416374498BDA042B8EB21E49B72326D6CE5F4_RuntimeMethod_var, (ES3Reader_t2780AF8AA61DA2A817115CEF8612AC0E494D03C9 *)L_58, (ES3Type_t8FBECB7AE75168648B9524E0C2A38DAD4555421D *)L_59);
		TrailModule_set_ratio_m34E63B34E7B0E8D037AD45532B2E2D5BD0750189((TrailModule_t95D15372971E64A1977B7587ABAA87B1A31EF5C8 *)(TrailModule_t95D15372971E64A1977B7587ABAA87B1A31EF5C8 *)(&V_0), (float)L_60, /*hidden argument*/NULL);
		// break;
		goto IL_038e;
	}

IL_0277:
	{
		// instance.lifetime = reader.Read<UnityEngine.ParticleSystem.MinMaxCurve>(ES3Type_MinMaxCurve.Instance);
		ES3Reader_t2780AF8AA61DA2A817115CEF8612AC0E494D03C9 * L_61 = ___reader0;
		IL2CPP_RUNTIME_CLASS_INIT(ES3Type_MinMaxCurve_tC5342BF0F8735B85CB5E16FDD4C6FACC8AFAD3B7_il2cpp_TypeInfo_var);
		ES3Type_t8FBECB7AE75168648B9524E0C2A38DAD4555421D * L_62 = ((ES3Type_MinMaxCurve_tC5342BF0F8735B85CB5E16FDD4C6FACC8AFAD3B7_StaticFields*)il2cpp_codegen_static_fields_for(ES3Type_MinMaxCurve_tC5342BF0F8735B85CB5E16FDD4C6FACC8AFAD3B7_il2cpp_TypeInfo_var))->get_Instance_12();
		NullCheck((ES3Reader_t2780AF8AA61DA2A817115CEF8612AC0E494D03C9 *)L_61);
		MinMaxCurve_tF036239442AB2D438B1EDABEBC785426871084CD  L_63;
		L_63 = GenericVirtFuncInvoker1< MinMaxCurve_tF036239442AB2D438B1EDABEBC785426871084CD , ES3Type_t8FBECB7AE75168648B9524E0C2A38DAD4555421D * >::Invoke(ES3Reader_Read_TisMinMaxCurve_tF036239442AB2D438B1EDABEBC785426871084CD_mD285150CBFB52440643BBECB5ADF4EE8DE940535_RuntimeMethod_var, (ES3Reader_t2780AF8AA61DA2A817115CEF8612AC0E494D03C9 *)L_61, (ES3Type_t8FBECB7AE75168648B9524E0C2A38DAD4555421D *)L_62);
		TrailModule_set_lifetime_m57C898C42B9F18F5A0E88AAA7B10276CC158C39D((TrailModule_t95D15372971E64A1977B7587ABAA87B1A31EF5C8 *)(TrailModule_t95D15372971E64A1977B7587ABAA87B1A31EF5C8 *)(&V_0), (MinMaxCurve_tF036239442AB2D438B1EDABEBC785426871084CD )L_63, /*hidden argument*/NULL);
		// break;
		goto IL_038e;
	}

IL_028e:
	{
		// instance.lifetimeMultiplier = reader.Read<System.Single>(ES3Type_float.Instance);
		ES3Reader_t2780AF8AA61DA2A817115CEF8612AC0E494D03C9 * L_64 = ___reader0;
		IL2CPP_RUNTIME_CLASS_INIT(ES3Type_float_tF86B773C86731BD9AD79448B860BBB178FE77644_il2cpp_TypeInfo_var);
		ES3Type_t8FBECB7AE75168648B9524E0C2A38DAD4555421D * L_65 = ((ES3Type_float_tF86B773C86731BD9AD79448B860BBB178FE77644_StaticFields*)il2cpp_codegen_static_fields_for(ES3Type_float_tF86B773C86731BD9AD79448B860BBB178FE77644_il2cpp_TypeInfo_var))->get_Instance_12();
		NullCheck((ES3Reader_t2780AF8AA61DA2A817115CEF8612AC0E494D03C9 *)L_64);
		float L_66;
		L_66 = GenericVirtFuncInvoker1< float, ES3Type_t8FBECB7AE75168648B9524E0C2A38DAD4555421D * >::Invoke(ES3Reader_Read_TisSingle_tE07797BA3C98D4CA9B5A19413C19A76688AB899E_m4A0416374498BDA042B8EB21E49B72326D6CE5F4_RuntimeMethod_var, (ES3Reader_t2780AF8AA61DA2A817115CEF8612AC0E494D03C9 *)L_64, (ES3Type_t8FBECB7AE75168648B9524E0C2A38DAD4555421D *)L_65);
		TrailModule_set_lifetimeMultiplier_m23F95D65EE8C82152AE1CF2E41531EC2789A866B((TrailModule_t95D15372971E64A1977B7587ABAA87B1A31EF5C8 *)(TrailModule_t95D15372971E64A1977B7587ABAA87B1A31EF5C8 *)(&V_0), (float)L_66, /*hidden argument*/NULL);
		// break;
		goto IL_038e;
	}

IL_02a5:
	{
		// instance.minVertexDistance = reader.Read<System.Single>(ES3Type_float.Instance);
		ES3Reader_t2780AF8AA61DA2A817115CEF8612AC0E494D03C9 * L_67 = ___reader0;
		IL2CPP_RUNTIME_CLASS_INIT(ES3Type_float_tF86B773C86731BD9AD79448B860BBB178FE77644_il2cpp_TypeInfo_var);
		ES3Type_t8FBECB7AE75168648B9524E0C2A38DAD4555421D * L_68 = ((ES3Type_float_tF86B773C86731BD9AD79448B860BBB178FE77644_StaticFields*)il2cpp_codegen_static_fields_for(ES3Type_float_tF86B773C86731BD9AD79448B860BBB178FE77644_il2cpp_TypeInfo_var))->get_Instance_12();
		NullCheck((ES3Reader_t2780AF8AA61DA2A817115CEF8612AC0E494D03C9 *)L_67);
		float L_69;
		L_69 = GenericVirtFuncInvoker1< float, ES3Type_t8FBECB7AE75168648B9524E0C2A38DAD4555421D * >::Invoke(ES3Reader_Read_TisSingle_tE07797BA3C98D4CA9B5A19413C19A76688AB899E_m4A0416374498BDA042B8EB21E49B72326D6CE5F4_RuntimeMethod_var, (ES3Reader_t2780AF8AA61DA2A817115CEF8612AC0E494D03C9 *)L_67, (ES3Type_t8FBECB7AE75168648B9524E0C2A38DAD4555421D *)L_68);
		TrailModule_set_minVertexDistance_mF7C29F88FBF540CE4987F4CF9B141C624808FBC5((TrailModule_t95D15372971E64A1977B7587ABAA87B1A31EF5C8 *)(TrailModule_t95D15372971E64A1977B7587ABAA87B1A31EF5C8 *)(&V_0), (float)L_69, /*hidden argument*/NULL);
		// break;
		goto IL_038e;
	}

IL_02bc:
	{
		// instance.textureMode = reader.Read<UnityEngine.ParticleSystemTrailTextureMode>();
		ES3Reader_t2780AF8AA61DA2A817115CEF8612AC0E494D03C9 * L_70 = ___reader0;
		NullCheck((ES3Reader_t2780AF8AA61DA2A817115CEF8612AC0E494D03C9 *)L_70);
		int32_t L_71;
		L_71 = GenericVirtFuncInvoker0< int32_t >::Invoke(ES3Reader_Read_TisParticleSystemTrailTextureMode_tF3259187CA4D0A61EDB3A40E63CBF6C42641CE9F_m055DB1212E8BC34F385DF7D302F16241554E9730_RuntimeMethod_var, (ES3Reader_t2780AF8AA61DA2A817115CEF8612AC0E494D03C9 *)L_70);
		TrailModule_set_textureMode_mC1F8AE0D2965FC47BDBFF4F53E0673D5FB58CF28((TrailModule_t95D15372971E64A1977B7587ABAA87B1A31EF5C8 *)(TrailModule_t95D15372971E64A1977B7587ABAA87B1A31EF5C8 *)(&V_0), (int32_t)L_71, /*hidden argument*/NULL);
		// break;
		goto IL_038e;
	}

IL_02ce:
	{
		// instance.worldSpace = reader.Read<System.Boolean>(ES3Type_bool.Instance);
		ES3Reader_t2780AF8AA61DA2A817115CEF8612AC0E494D03C9 * L_72 = ___reader0;
		IL2CPP_RUNTIME_CLASS_INIT(ES3Type_bool_t8F309F7B9CC735FF1DEE68081B6E3CAB367745F4_il2cpp_TypeInfo_var);
		ES3Type_t8FBECB7AE75168648B9524E0C2A38DAD4555421D * L_73 = ((ES3Type_bool_t8F309F7B9CC735FF1DEE68081B6E3CAB367745F4_StaticFields*)il2cpp_codegen_static_fields_for(ES3Type_bool_t8F309F7B9CC735FF1DEE68081B6E3CAB367745F4_il2cpp_TypeInfo_var))->get_Instance_12();
		NullCheck((ES3Reader_t2780AF8AA61DA2A817115CEF8612AC0E494D03C9 *)L_72);
		bool L_74;
		L_74 = GenericVirtFuncInvoker1< bool, ES3Type_t8FBECB7AE75168648B9524E0C2A38DAD4555421D * >::Invoke(ES3Reader_Read_TisBoolean_t07D1E3F34E4813023D64F584DFF7B34C9D922F37_mC6D1B158268FF9B97822FF9F5B37FB1723FEDA22_RuntimeMethod_var, (ES3Reader_t2780AF8AA61DA2A817115CEF8612AC0E494D03C9 *)L_72, (ES3Type_t8FBECB7AE75168648B9524E0C2A38DAD4555421D *)L_73);
		TrailModule_set_worldSpace_m42A63AF4A96F24A621A29A0F35240195F0E56B1A((TrailModule_t95D15372971E64A1977B7587ABAA87B1A31EF5C8 *)(TrailModule_t95D15372971E64A1977B7587ABAA87B1A31EF5C8 *)(&V_0), (bool)L_74, /*hidden argument*/NULL);
		// break;
		goto IL_038e;
	}

IL_02e5:
	{
		// instance.dieWithParticles = reader.Read<System.Boolean>(ES3Type_bool.Instance);
		ES3Reader_t2780AF8AA61DA2A817115CEF8612AC0E494D03C9 * L_75 = ___reader0;
		IL2CPP_RUNTIME_CLASS_INIT(ES3Type_bool_t8F309F7B9CC735FF1DEE68081B6E3CAB367745F4_il2cpp_TypeInfo_var);
		ES3Type_t8FBECB7AE75168648B9524E0C2A38DAD4555421D * L_76 = ((ES3Type_bool_t8F309F7B9CC735FF1DEE68081B6E3CAB367745F4_StaticFields*)il2cpp_codegen_static_fields_for(ES3Type_bool_t8F309F7B9CC735FF1DEE68081B6E3CAB367745F4_il2cpp_TypeInfo_var))->get_Instance_12();
		NullCheck((ES3Reader_t2780AF8AA61DA2A817115CEF8612AC0E494D03C9 *)L_75);
		bool L_77;
		L_77 = GenericVirtFuncInvoker1< bool, ES3Type_t8FBECB7AE75168648B9524E0C2A38DAD4555421D * >::Invoke(ES3Reader_Read_TisBoolean_t07D1E3F34E4813023D64F584DFF7B34C9D922F37_mC6D1B158268FF9B97822FF9F5B37FB1723FEDA22_RuntimeMethod_var, (ES3Reader_t2780AF8AA61DA2A817115CEF8612AC0E494D03C9 *)L_75, (ES3Type_t8FBECB7AE75168648B9524E0C2A38DAD4555421D *)L_76);
		TrailModule_set_dieWithParticles_mB7C4E8DC2F908FDF6D57A77B54B821E360D8DA99((TrailModule_t95D15372971E64A1977B7587ABAA87B1A31EF5C8 *)(TrailModule_t95D15372971E64A1977B7587ABAA87B1A31EF5C8 *)(&V_0), (bool)L_77, /*hidden argument*/NULL);
		// break;
		goto IL_038e;
	}

IL_02fc:
	{
		// instance.sizeAffectsWidth = reader.Read<System.Boolean>(ES3Type_bool.Instance);
		ES3Reader_t2780AF8AA61DA2A817115CEF8612AC0E494D03C9 * L_78 = ___reader0;
		IL2CPP_RUNTIME_CLASS_INIT(ES3Type_bool_t8F309F7B9CC735FF1DEE68081B6E3CAB367745F4_il2cpp_TypeInfo_var);
		ES3Type_t8FBECB7AE75168648B9524E0C2A38DAD4555421D * L_79 = ((ES3Type_bool_t8F309F7B9CC735FF1DEE68081B6E3CAB367745F4_StaticFields*)il2cpp_codegen_static_fields_for(ES3Type_bool_t8F309F7B9CC735FF1DEE68081B6E3CAB367745F4_il2cpp_TypeInfo_var))->get_Instance_12();
		NullCheck((ES3Reader_t2780AF8AA61DA2A817115CEF8612AC0E494D03C9 *)L_78);
		bool L_80;
		L_80 = GenericVirtFuncInvoker1< bool, ES3Type_t8FBECB7AE75168648B9524E0C2A38DAD4555421D * >::Invoke(ES3Reader_Read_TisBoolean_t07D1E3F34E4813023D64F584DFF7B34C9D922F37_mC6D1B158268FF9B97822FF9F5B37FB1723FEDA22_RuntimeMethod_var, (ES3Reader_t2780AF8AA61DA2A817115CEF8612AC0E494D03C9 *)L_78, (ES3Type_t8FBECB7AE75168648B9524E0C2A38DAD4555421D *)L_79);
		TrailModule_set_sizeAffectsWidth_m3517856E39080DA69B447499C8846D2491B0ABF0((TrailModule_t95D15372971E64A1977B7587ABAA87B1A31EF5C8 *)(TrailModule_t95D15372971E64A1977B7587ABAA87B1A31EF5C8 *)(&V_0), (bool)L_80, /*hidden argument*/NULL);
		// break;
		goto IL_038e;
	}

IL_0310:
	{
		// instance.sizeAffectsLifetime = reader.Read<System.Boolean>(ES3Type_bool.Instance);
		ES3Reader_t2780AF8AA61DA2A817115CEF8612AC0E494D03C9 * L_81 = ___reader0;
		IL2CPP_RUNTIME_CLASS_INIT(ES3Type_bool_t8F309F7B9CC735FF1DEE68081B6E3CAB367745F4_il2cpp_TypeInfo_var);
		ES3Type_t8FBECB7AE75168648B9524E0C2A38DAD4555421D * L_82 = ((ES3Type_bool_t8F309F7B9CC735FF1DEE68081B6E3CAB367745F4_StaticFields*)il2cpp_codegen_static_fields_for(ES3Type_bool_t8F309F7B9CC735FF1DEE68081B6E3CAB367745F4_il2cpp_TypeInfo_var))->get_Instance_12();
		NullCheck((ES3Reader_t2780AF8AA61DA2A817115CEF8612AC0E494D03C9 *)L_81);
		bool L_83;
		L_83 = GenericVirtFuncInvoker1< bool, ES3Type_t8FBECB7AE75168648B9524E0C2A38DAD4555421D * >::Invoke(ES3Reader_Read_TisBoolean_t07D1E3F34E4813023D64F584DFF7B34C9D922F37_mC6D1B158268FF9B97822FF9F5B37FB1723FEDA22_RuntimeMethod_var, (ES3Reader_t2780AF8AA61DA2A817115CEF8612AC0E494D03C9 *)L_81, (ES3Type_t8FBECB7AE75168648B9524E0C2A38DAD4555421D *)L_82);
		TrailModule_set_sizeAffectsLifetime_m98BF4A6594193D824B52D88371CF963ACBA388FD((TrailModule_t95D15372971E64A1977B7587ABAA87B1A31EF5C8 *)(TrailModule_t95D15372971E64A1977B7587ABAA87B1A31EF5C8 *)(&V_0), (bool)L_83, /*hidden argument*/NULL);
		// break;
		goto IL_038e;
	}

IL_0324:
	{
		// instance.inheritParticleColor = reader.Read<System.Boolean>(ES3Type_bool.Instance);
		ES3Reader_t2780AF8AA61DA2A817115CEF8612AC0E494D03C9 * L_84 = ___reader0;
		IL2CPP_RUNTIME_CLASS_INIT(ES3Type_bool_t8F309F7B9CC735FF1DEE68081B6E3CAB367745F4_il2cpp_TypeInfo_var);
		ES3Type_t8FBECB7AE75168648B9524E0C2A38DAD4555421D * L_85 = ((ES3Type_bool_t8F309F7B9CC735FF1DEE68081B6E3CAB367745F4_StaticFields*)il2cpp_codegen_static_fields_for(ES3Type_bool_t8F309F7B9CC735FF1DEE68081B6E3CAB367745F4_il2cpp_TypeInfo_var))->get_Instance_12();
		NullCheck((ES3Reader_t2780AF8AA61DA2A817115CEF8612AC0E494D03C9 *)L_84);
		bool L_86;
		L_86 = GenericVirtFuncInvoker1< bool, ES3Type_t8FBECB7AE75168648B9524E0C2A38DAD4555421D * >::Invoke(ES3Reader_Read_TisBoolean_t07D1E3F34E4813023D64F584DFF7B34C9D922F37_mC6D1B158268FF9B97822FF9F5B37FB1723FEDA22_RuntimeMethod_var, (ES3Reader_t2780AF8AA61DA2A817115CEF8612AC0E494D03C9 *)L_84, (ES3Type_t8FBECB7AE75168648B9524E0C2A38DAD4555421D *)L_85);
		TrailModule_set_inheritParticleColor_mCD83E87B5E00F2BFFBE08AD2D1D68606283A4FEE((TrailModule_t95D15372971E64A1977B7587ABAA87B1A31EF5C8 *)(TrailModule_t95D15372971E64A1977B7587ABAA87B1A31EF5C8 *)(&V_0), (bool)L_86, /*hidden argument*/NULL);
		// break;
		goto IL_038e;
	}

IL_0338:
	{
		// instance.colorOverLifetime = reader.Read<UnityEngine.ParticleSystem.MinMaxGradient>(ES3Type_MinMaxGradient.Instance);
		ES3Reader_t2780AF8AA61DA2A817115CEF8612AC0E494D03C9 * L_87 = ___reader0;
		IL2CPP_RUNTIME_CLASS_INIT(ES3Type_MinMaxGradient_t5DD353D60E95642AB39D1C97C6FD6DD1B067D3CF_il2cpp_TypeInfo_var);
		ES3Type_t8FBECB7AE75168648B9524E0C2A38DAD4555421D * L_88 = ((ES3Type_MinMaxGradient_t5DD353D60E95642AB39D1C97C6FD6DD1B067D3CF_StaticFields*)il2cpp_codegen_static_fields_for(ES3Type_MinMaxGradient_t5DD353D60E95642AB39D1C97C6FD6DD1B067D3CF_il2cpp_TypeInfo_var))->get_Instance_12();
		NullCheck((ES3Reader_t2780AF8AA61DA2A817115CEF8612AC0E494D03C9 *)L_87);
		MinMaxGradient_tF4530B26F29D9635D670A33B9EE581EAC48C12B7  L_89;
		L_89 = GenericVirtFuncInvoker1< MinMaxGradient_tF4530B26F29D9635D670A33B9EE581EAC48C12B7 , ES3Type_t8FBECB7AE75168648B9524E0C2A38DAD4555421D * >::Invoke(ES3Reader_Read_TisMinMaxGradient_tF4530B26F29D9635D670A33B9EE581EAC48C12B7_m6A3DD8CBBAC5D32B838B6C4399009AB8AA512ACC_RuntimeMethod_var, (ES3Reader_t2780AF8AA61DA2A817115CEF8612AC0E494D03C9 *)L_87, (ES3Type_t8FBECB7AE75168648B9524E0C2A38DAD4555421D *)L_88);
		TrailModule_set_colorOverLifetime_mCD56BD4B75D3A3947069BA1B93FEC78AAE08DF27((TrailModule_t95D15372971E64A1977B7587ABAA87B1A31EF5C8 *)(TrailModule_t95D15372971E64A1977B7587ABAA87B1A31EF5C8 *)(&V_0), (MinMaxGradient_tF4530B26F29D9635D670A33B9EE581EAC48C12B7 )L_89, /*hidden argument*/NULL);
		// break;
		goto IL_038e;
	}

IL_034c:
	{
		// instance.widthOverTrail = reader.Read<UnityEngine.ParticleSystem.MinMaxCurve>(ES3Type_MinMaxCurve.Instance);
		ES3Reader_t2780AF8AA61DA2A817115CEF8612AC0E494D03C9 * L_90 = ___reader0;
		IL2CPP_RUNTIME_CLASS_INIT(ES3Type_MinMaxCurve_tC5342BF0F8735B85CB5E16FDD4C6FACC8AFAD3B7_il2cpp_TypeInfo_var);
		ES3Type_t8FBECB7AE75168648B9524E0C2A38DAD4555421D * L_91 = ((ES3Type_MinMaxCurve_tC5342BF0F8735B85CB5E16FDD4C6FACC8AFAD3B7_StaticFields*)il2cpp_codegen_static_fields_for(ES3Type_MinMaxCurve_tC5342BF0F8735B85CB5E16FDD4C6FACC8AFAD3B7_il2cpp_TypeInfo_var))->get_Instance_12();
		NullCheck((ES3Reader_t2780AF8AA61DA2A817115CEF8612AC0E494D03C9 *)L_90);
		MinMaxCurve_tF036239442AB2D438B1EDABEBC785426871084CD  L_92;
		L_92 = GenericVirtFuncInvoker1< MinMaxCurve_tF036239442AB2D438B1EDABEBC785426871084CD , ES3Type_t8FBECB7AE75168648B9524E0C2A38DAD4555421D * >::Invoke(ES3Reader_Read_TisMinMaxCurve_tF036239442AB2D438B1EDABEBC785426871084CD_mD285150CBFB52440643BBECB5ADF4EE8DE940535_RuntimeMethod_var, (ES3Reader_t2780AF8AA61DA2A817115CEF8612AC0E494D03C9 *)L_90, (ES3Type_t8FBECB7AE75168648B9524E0C2A38DAD4555421D *)L_91);
		TrailModule_set_widthOverTrail_m6C0A896EBFDED7CE46344B3A0B04212934F30DE1((TrailModule_t95D15372971E64A1977B7587ABAA87B1A31EF5C8 *)(TrailModule_t95D15372971E64A1977B7587ABAA87B1A31EF5C8 *)(&V_0), (MinMaxCurve_tF036239442AB2D438B1EDABEBC785426871084CD )L_92, /*hidden argument*/NULL);
		// break;
		goto IL_038e;
	}

IL_0360:
	{
		// instance.widthOverTrailMultiplier = reader.Read<System.Single>(ES3Type_float.Instance);
		ES3Reader_t2780AF8AA61DA2A817115CEF8612AC0E494D03C9 * L_93 = ___reader0;
		IL2CPP_RUNTIME_CLASS_INIT(ES3Type_float_tF86B773C86731BD9AD79448B860BBB178FE77644_il2cpp_TypeInfo_var);
		ES3Type_t8FBECB7AE75168648B9524E0C2A38DAD4555421D * L_94 = ((ES3Type_float_tF86B773C86731BD9AD79448B860BBB178FE77644_StaticFields*)il2cpp_codegen_static_fields_for(ES3Type_float_tF86B773C86731BD9AD79448B860BBB178FE77644_il2cpp_TypeInfo_var))->get_Instance_12();
		NullCheck((ES3Reader_t2780AF8AA61DA2A817115CEF8612AC0E494D03C9 *)L_93);
		float L_95;
		L_95 = GenericVirtFuncInvoker1< float, ES3Type_t8FBECB7AE75168648B9524E0C2A38DAD4555421D * >::Invoke(ES3Reader_Read_TisSingle_tE07797BA3C98D4CA9B5A19413C19A76688AB899E_m4A0416374498BDA042B8EB21E49B72326D6CE5F4_RuntimeMethod_var, (ES3Reader_t2780AF8AA61DA2A817115CEF8612AC0E494D03C9 *)L_93, (ES3Type_t8FBECB7AE75168648B9524E0C2A38DAD4555421D *)L_94);
		TrailModule_set_widthOverTrailMultiplier_m6A7EA2856CF30B710CCB528EA3EBFD1799C19BD4((TrailModule_t95D15372971E64A1977B7587ABAA87B1A31EF5C8 *)(TrailModule_t95D15372971E64A1977B7587ABAA87B1A31EF5C8 *)(&V_0), (float)L_95, /*hidden argument*/NULL);
		// break;
		goto IL_038e;
	}

IL_0374:
	{
		// instance.colorOverTrail = reader.Read<UnityEngine.ParticleSystem.MinMaxGradient>(ES3Type_MinMaxGradient.Instance);
		ES3Reader_t2780AF8AA61DA2A817115CEF8612AC0E494D03C9 * L_96 = ___reader0;
		IL2CPP_RUNTIME_CLASS_INIT(ES3Type_MinMaxGradient_t5DD353D60E95642AB39D1C97C6FD6DD1B067D3CF_il2cpp_TypeInfo_var);
		ES3Type_t8FBECB7AE75168648B9524E0C2A38DAD4555421D * L_97 = ((ES3Type_MinMaxGradient_t5DD353D60E95642AB39D1C97C6FD6DD1B067D3CF_StaticFields*)il2cpp_codegen_static_fields_for(ES3Type_MinMaxGradient_t5DD353D60E95642AB39D1C97C6FD6DD1B067D3CF_il2cpp_TypeInfo_var))->get_Instance_12();
		NullCheck((ES3Reader_t2780AF8AA61DA2A817115CEF8612AC0E494D03C9 *)L_96);
		MinMaxGradient_tF4530B26F29D9635D670A33B9EE581EAC48C12B7  L_98;
		L_98 = GenericVirtFuncInvoker1< MinMaxGradient_tF4530B26F29D9635D670A33B9EE581EAC48C12B7 , ES3Type_t8FBECB7AE75168648B9524E0C2A38DAD4555421D * >::Invoke(ES3Reader_Read_TisMinMaxGradient_tF4530B26F29D9635D670A33B9EE581EAC48C12B7_m6A3DD8CBBAC5D32B838B6C4399009AB8AA512ACC_RuntimeMethod_var, (ES3Reader_t2780AF8AA61DA2A817115CEF8612AC0E494D03C9 *)L_96, (ES3Type_t8FBECB7AE75168648B9524E0C2A38DAD4555421D *)L_97);
		TrailModule_set_colorOverTrail_m8440C6574C8310292B93D70EA4FE3EE8C40DF8DB((TrailModule_t95D15372971E64A1977B7587ABAA87B1A31EF5C8 *)(TrailModule_t95D15372971E64A1977B7587ABAA87B1A31EF5C8 *)(&V_0), (MinMaxGradient_tF4530B26F29D9635D670A33B9EE581EAC48C12B7 )L_98, /*hidden argument*/NULL);
		// break;
		goto IL_038e;
	}

IL_0388:
	{
		// reader.Skip();
		ES3Reader_t2780AF8AA61DA2A817115CEF8612AC0E494D03C9 * L_99 = ___reader0;
		NullCheck((ES3Reader_t2780AF8AA61DA2A817115CEF8612AC0E494D03C9 *)L_99);
		VirtActionInvoker0::Invoke(41 /* System.Void ES3Reader::Skip() */, (ES3Reader_t2780AF8AA61DA2A817115CEF8612AC0E494D03C9 *)L_99);
	}

IL_038e:
	{
		// while((propertyName = reader.ReadPropertyName()) != null)
		ES3Reader_t2780AF8AA61DA2A817115CEF8612AC0E494D03C9 * L_100 = ___reader0;
		NullCheck((ES3Reader_t2780AF8AA61DA2A817115CEF8612AC0E494D03C9 *)L_100);
		String_t* L_101;
		L_101 = VirtFuncInvoker0< String_t* >::Invoke(21 /* System.String ES3Reader::ReadPropertyName() */, (ES3Reader_t2780AF8AA61DA2A817115CEF8612AC0E494D03C9 *)L_100);
		String_t* L_102 = (String_t*)L_101;
		V_1 = (String_t*)L_102;
		if (L_102)
		{
			goto IL_000c;
		}
	}
	{
		// }
		return;
	}
}
// System.Void ES3Types.ES3Type_TrailModule::ReadInto<UnityEngine.ParticleSystem/ShapeModule>(ES3Reader,System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ES3Type_TrailModule_ReadInto_TisShapeModule_t3A89D143F5CAF357ECCE8B4A4F2BBD57816F98CA_mD52D847F396855F77376A4FBA952E59F5C014845_gshared (ES3Type_TrailModule_tC773F73EC0443516DD128FF2B5AE010809742462 * __this, ES3Reader_t2780AF8AA61DA2A817115CEF8612AC0E494D03C9 * ___reader0, RuntimeObject * ___obj1, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ES3Reader_Read_TisBoolean_t07D1E3F34E4813023D64F584DFF7B34C9D922F37_mC6D1B158268FF9B97822FF9F5B37FB1723FEDA22_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ES3Reader_Read_TisMinMaxCurve_tF036239442AB2D438B1EDABEBC785426871084CD_mD285150CBFB52440643BBECB5ADF4EE8DE940535_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ES3Reader_Read_TisMinMaxGradient_tF4530B26F29D9635D670A33B9EE581EAC48C12B7_m6A3DD8CBBAC5D32B838B6C4399009AB8AA512ACC_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ES3Reader_Read_TisParticleSystemTrailTextureMode_tF3259187CA4D0A61EDB3A40E63CBF6C42641CE9F_m055DB1212E8BC34F385DF7D302F16241554E9730_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ES3Reader_Read_TisSingle_tE07797BA3C98D4CA9B5A19413C19A76688AB899E_m4A0416374498BDA042B8EB21E49B72326D6CE5F4_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ES3Type_MinMaxCurve_tC5342BF0F8735B85CB5E16FDD4C6FACC8AFAD3B7_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ES3Type_MinMaxGradient_t5DD353D60E95642AB39D1C97C6FD6DD1B067D3CF_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ES3Type_bool_t8F309F7B9CC735FF1DEE68081B6E3CAB367745F4_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ES3Type_float_tF86B773C86731BD9AD79448B860BBB178FE77644_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&TrailModule_t95D15372971E64A1977B7587ABAA87B1A31EF5C8_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral1D87A56AE67B2CD49CAE6E942C2FB7AD98925C00);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral354281948B6269615E32D856CF85B6F456724DAA);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral4221314F268D184F46688D45C85446821F1F1BC3);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral47C47DD09640803AD8016748EAE1F04DD1D41119);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral5C86338F177203D001C41D9C348A83D1338CC7D0);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral60126327537B7B8E6EE33C43FE0C5CA8BCC3A06A);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral87F70660D62DE5FC257FBADE9DA4EC9188597DE5);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralA967787586EC9E5A17A9C55E2002AB73A5E21A0A);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralADAEB0839588196B349BDB6CF33AFA3E0736360B);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralBE2893848F9FC647C2288DA6581A1522E9695182);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralBF540D6548854CC21630064FBA5390C9409C86F0);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralC580B374AA991574F91DFC86C068E7FAD661A3A4);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralE049DB547285CFCE1CB9A95934B6B6DCE2D219EC);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralF9D225733E1D10F9344C755C4A9C0870CD1DE97B);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralFE5F89F63E2381500F62A7CBD6954563BE44562F);
		s_Il2CppMethodInitialized = true;
	}
	TrailModule_t95D15372971E64A1977B7587ABAA87B1A31EF5C8  V_0;
	memset((&V_0), 0, sizeof(V_0));
	String_t* V_1 = NULL;
	uint32_t V_2 = 0;
	{
		// var instance = (UnityEngine.ParticleSystem.TrailModule)obj;
		RuntimeObject * L_0 = ___obj1;
		V_0 = (TrailModule_t95D15372971E64A1977B7587ABAA87B1A31EF5C8 )((*(TrailModule_t95D15372971E64A1977B7587ABAA87B1A31EF5C8 *)((TrailModule_t95D15372971E64A1977B7587ABAA87B1A31EF5C8 *)UnBox(L_0, TrailModule_t95D15372971E64A1977B7587ABAA87B1A31EF5C8_il2cpp_TypeInfo_var))));
		goto IL_038e;
	}

IL_000c:
	{
		String_t* L_1 = V_1;
		if (!L_1)
		{
			goto IL_0388;
		}
	}
	{
		String_t* L_2 = V_1;
		uint32_t L_3;
		L_3 = U3CPrivateImplementationDetailsU3E_ComputeStringHash_m3ADC1F612F9EE3DD518E6F0023A0DE0EE2B120A7((String_t*)L_2, /*hidden argument*/NULL);
		V_2 = (uint32_t)L_3;
		uint32_t L_4 = V_2;
		if ((!(((uint32_t)L_4) <= ((uint32_t)((int32_t)1376955374)))))
		{
			goto IL_008d;
		}
	}
	{
		uint32_t L_5 = V_2;
		if ((!(((uint32_t)L_5) <= ((uint32_t)((int32_t)494095910)))))
		{
			goto IL_004f;
		}
	}
	{
		uint32_t L_6 = V_2;
		if ((((int32_t)L_6) == ((int32_t)((int32_t)49525662))))
		{
			goto IL_010e;
		}
	}
	{
		uint32_t L_7 = V_2;
		if ((((int32_t)L_7) == ((int32_t)((int32_t)341298456))))
		{
			goto IL_021f;
		}
	}
	{
		uint32_t L_8 = V_2;
		if ((((int32_t)L_8) == ((int32_t)((int32_t)494095910))))
		{
			goto IL_0234;
		}
	}
	{
		goto IL_0388;
	}

IL_004f:
	{
		uint32_t L_9 = V_2;
		if ((!(((uint32_t)L_9) <= ((uint32_t)((int32_t)973733911)))))
		{
			goto IL_0072;
		}
	}
	{
		uint32_t L_10 = V_2;
		if ((((int32_t)L_10) == ((int32_t)((int32_t)559929418))))
		{
			goto IL_01b6;
		}
	}
	{
		uint32_t L_11 = V_2;
		if ((((int32_t)L_11) == ((int32_t)((int32_t)973733911))))
		{
			goto IL_0177;
		}
	}
	{
		goto IL_0388;
	}

IL_0072:
	{
		uint32_t L_12 = V_2;
		if ((((int32_t)L_12) == ((int32_t)((int32_t)1024708593))))
		{
			goto IL_014d;
		}
	}
	{
		uint32_t L_13 = V_2;
		if ((((int32_t)L_13) == ((int32_t)((int32_t)1376955374))))
		{
			goto IL_0138;
		}
	}
	{
		goto IL_0388;
	}

IL_008d:
	{
		uint32_t L_14 = V_2;
		if ((!(((uint32_t)L_14) <= ((uint32_t)((int32_t)-2100707162)))))
		{
			goto IL_00d3;
		}
	}
	{
		uint32_t L_15 = V_2;
		if ((!(((uint32_t)L_15) <= ((uint32_t)((int32_t)1975189197)))))
		{
			goto IL_00b8;
		}
	}
	{
		uint32_t L_16 = V_2;
		if ((((int32_t)L_16) == ((int32_t)((int32_t)1546474083))))
		{
			goto IL_020a;
		}
	}
	{
		uint32_t L_17 = V_2;
		if ((((int32_t)L_17) == ((int32_t)((int32_t)1975189197))))
		{
			goto IL_01cb;
		}
	}
	{
		goto IL_0388;
	}

IL_00b8:
	{
		uint32_t L_18 = V_2;
		if ((((int32_t)L_18) == ((int32_t)((int32_t)2053023684))))
		{
			goto IL_01a1;
		}
	}
	{
		uint32_t L_19 = V_2;
		if ((((int32_t)L_19) == ((int32_t)((int32_t)-2100707162))))
		{
			goto IL_0162;
		}
	}
	{
		goto IL_0388;
	}

IL_00d3:
	{
		uint32_t L_20 = V_2;
		if ((!(((uint32_t)L_20) <= ((uint32_t)((int32_t)-1319579393)))))
		{
			goto IL_00f6;
		}
	}
	{
		uint32_t L_21 = V_2;
		if ((((int32_t)L_21) == ((int32_t)((int32_t)-1562862963))))
		{
			goto IL_01e0;
		}
	}
	{
		uint32_t L_22 = V_2;
		if ((((int32_t)L_22) == ((int32_t)((int32_t)-1319579393))))
		{
			goto IL_018c;
		}
	}
	{
		goto IL_0388;
	}

IL_00f6:
	{
		uint32_t L_23 = V_2;
		if ((((int32_t)L_23) == ((int32_t)((int32_t)-1055777148))))
		{
			goto IL_0123;
		}
	}
	{
		uint32_t L_24 = V_2;
		if ((((int32_t)L_24) == ((int32_t)((int32_t)-413379935))))
		{
			goto IL_01f5;
		}
	}
	{
		goto IL_0388;
	}

IL_010e:
	{
		String_t* L_25 = V_1;
		bool L_26;
		L_26 = String_op_Equality_m50B3548E4AC232558190B0052877B290AA1D436A((String_t*)L_25, (String_t*)_stringLiteralF9D225733E1D10F9344C755C4A9C0870CD1DE97B, /*hidden argument*/NULL);
		if (L_26)
		{
			goto IL_0249;
		}
	}
	{
		goto IL_0388;
	}

IL_0123:
	{
		String_t* L_27 = V_1;
		bool L_28;
		L_28 = String_op_Equality_m50B3548E4AC232558190B0052877B290AA1D436A((String_t*)L_27, (String_t*)_stringLiteral60126327537B7B8E6EE33C43FE0C5CA8BCC3A06A, /*hidden argument*/NULL);
		if (L_28)
		{
			goto IL_0260;
		}
	}
	{
		goto IL_0388;
	}

IL_0138:
	{
		String_t* L_29 = V_1;
		bool L_30;
		L_30 = String_op_Equality_m50B3548E4AC232558190B0052877B290AA1D436A((String_t*)L_29, (String_t*)_stringLiteralBE2893848F9FC647C2288DA6581A1522E9695182, /*hidden argument*/NULL);
		if (L_30)
		{
			goto IL_0277;
		}
	}
	{
		goto IL_0388;
	}

IL_014d:
	{
		String_t* L_31 = V_1;
		bool L_32;
		L_32 = String_op_Equality_m50B3548E4AC232558190B0052877B290AA1D436A((String_t*)L_31, (String_t*)_stringLiteral4221314F268D184F46688D45C85446821F1F1BC3, /*hidden argument*/NULL);
		if (L_32)
		{
			goto IL_028e;
		}
	}
	{
		goto IL_0388;
	}

IL_0162:
	{
		String_t* L_33 = V_1;
		bool L_34;
		L_34 = String_op_Equality_m50B3548E4AC232558190B0052877B290AA1D436A((String_t*)L_33, (String_t*)_stringLiteral5C86338F177203D001C41D9C348A83D1338CC7D0, /*hidden argument*/NULL);
		if (L_34)
		{
			goto IL_02a5;
		}
	}
	{
		goto IL_0388;
	}

IL_0177:
	{
		String_t* L_35 = V_1;
		bool L_36;
		L_36 = String_op_Equality_m50B3548E4AC232558190B0052877B290AA1D436A((String_t*)L_35, (String_t*)_stringLiteralFE5F89F63E2381500F62A7CBD6954563BE44562F, /*hidden argument*/NULL);
		if (L_36)
		{
			goto IL_02bc;
		}
	}
	{
		goto IL_0388;
	}

IL_018c:
	{
		String_t* L_37 = V_1;
		bool L_38;
		L_38 = String_op_Equality_m50B3548E4AC232558190B0052877B290AA1D436A((String_t*)L_37, (String_t*)_stringLiteral87F70660D62DE5FC257FBADE9DA4EC9188597DE5, /*hidden argument*/NULL);
		if (L_38)
		{
			goto IL_02ce;
		}
	}
	{
		goto IL_0388;
	}

IL_01a1:
	{
		String_t* L_39 = V_1;
		bool L_40;
		L_40 = String_op_Equality_m50B3548E4AC232558190B0052877B290AA1D436A((String_t*)L_39, (String_t*)_stringLiteral354281948B6269615E32D856CF85B6F456724DAA, /*hidden argument*/NULL);
		if (L_40)
		{
			goto IL_02e5;
		}
	}
	{
		goto IL_0388;
	}

IL_01b6:
	{
		String_t* L_41 = V_1;
		bool L_42;
		L_42 = String_op_Equality_m50B3548E4AC232558190B0052877B290AA1D436A((String_t*)L_41, (String_t*)_stringLiteralADAEB0839588196B349BDB6CF33AFA3E0736360B, /*hidden argument*/NULL);
		if (L_42)
		{
			goto IL_02fc;
		}
	}
	{
		goto IL_0388;
	}

IL_01cb:
	{
		String_t* L_43 = V_1;
		bool L_44;
		L_44 = String_op_Equality_m50B3548E4AC232558190B0052877B290AA1D436A((String_t*)L_43, (String_t*)_stringLiteralC580B374AA991574F91DFC86C068E7FAD661A3A4, /*hidden argument*/NULL);
		if (L_44)
		{
			goto IL_0310;
		}
	}
	{
		goto IL_0388;
	}

IL_01e0:
	{
		String_t* L_45 = V_1;
		bool L_46;
		L_46 = String_op_Equality_m50B3548E4AC232558190B0052877B290AA1D436A((String_t*)L_45, (String_t*)_stringLiteralE049DB547285CFCE1CB9A95934B6B6DCE2D219EC, /*hidden argument*/NULL);
		if (L_46)
		{
			goto IL_0324;
		}
	}
	{
		goto IL_0388;
	}

IL_01f5:
	{
		String_t* L_47 = V_1;
		bool L_48;
		L_48 = String_op_Equality_m50B3548E4AC232558190B0052877B290AA1D436A((String_t*)L_47, (String_t*)_stringLiteralBF540D6548854CC21630064FBA5390C9409C86F0, /*hidden argument*/NULL);
		if (L_48)
		{
			goto IL_0338;
		}
	}
	{
		goto IL_0388;
	}

IL_020a:
	{
		String_t* L_49 = V_1;
		bool L_50;
		L_50 = String_op_Equality_m50B3548E4AC232558190B0052877B290AA1D436A((String_t*)L_49, (String_t*)_stringLiteral1D87A56AE67B2CD49CAE6E942C2FB7AD98925C00, /*hidden argument*/NULL);
		if (L_50)
		{
			goto IL_034c;
		}
	}
	{
		goto IL_0388;
	}

IL_021f:
	{
		String_t* L_51 = V_1;
		bool L_52;
		L_52 = String_op_Equality_m50B3548E4AC232558190B0052877B290AA1D436A((String_t*)L_51, (String_t*)_stringLiteralA967787586EC9E5A17A9C55E2002AB73A5E21A0A, /*hidden argument*/NULL);
		if (L_52)
		{
			goto IL_0360;
		}
	}
	{
		goto IL_0388;
	}

IL_0234:
	{
		String_t* L_53 = V_1;
		bool L_54;
		L_54 = String_op_Equality_m50B3548E4AC232558190B0052877B290AA1D436A((String_t*)L_53, (String_t*)_stringLiteral47C47DD09640803AD8016748EAE1F04DD1D41119, /*hidden argument*/NULL);
		if (L_54)
		{
			goto IL_0374;
		}
	}
	{
		goto IL_0388;
	}

IL_0249:
	{
		// instance.enabled = reader.Read<System.Boolean>(ES3Type_bool.Instance);
		ES3Reader_t2780AF8AA61DA2A817115CEF8612AC0E494D03C9 * L_55 = ___reader0;
		IL2CPP_RUNTIME_CLASS_INIT(ES3Type_bool_t8F309F7B9CC735FF1DEE68081B6E3CAB367745F4_il2cpp_TypeInfo_var);
		ES3Type_t8FBECB7AE75168648B9524E0C2A38DAD4555421D * L_56 = ((ES3Type_bool_t8F309F7B9CC735FF1DEE68081B6E3CAB367745F4_StaticFields*)il2cpp_codegen_static_fields_for(ES3Type_bool_t8F309F7B9CC735FF1DEE68081B6E3CAB367745F4_il2cpp_TypeInfo_var))->get_Instance_12();
		NullCheck((ES3Reader_t2780AF8AA61DA2A817115CEF8612AC0E494D03C9 *)L_55);
		bool L_57;
		L_57 = GenericVirtFuncInvoker1< bool, ES3Type_t8FBECB7AE75168648B9524E0C2A38DAD4555421D * >::Invoke(ES3Reader_Read_TisBoolean_t07D1E3F34E4813023D64F584DFF7B34C9D922F37_mC6D1B158268FF9B97822FF9F5B37FB1723FEDA22_RuntimeMethod_var, (ES3Reader_t2780AF8AA61DA2A817115CEF8612AC0E494D03C9 *)L_55, (ES3Type_t8FBECB7AE75168648B9524E0C2A38DAD4555421D *)L_56);
		TrailModule_set_enabled_mFC8451DDDF40CCBB3E32A4B30A001115F6346894((TrailModule_t95D15372971E64A1977B7587ABAA87B1A31EF5C8 *)(TrailModule_t95D15372971E64A1977B7587ABAA87B1A31EF5C8 *)(&V_0), (bool)L_57, /*hidden argument*/NULL);
		// break;
		goto IL_038e;
	}

IL_0260:
	{
		// instance.ratio = reader.Read<System.Single>(ES3Type_float.Instance);
		ES3Reader_t2780AF8AA61DA2A817115CEF8612AC0E494D03C9 * L_58 = ___reader0;
		IL2CPP_RUNTIME_CLASS_INIT(ES3Type_float_tF86B773C86731BD9AD79448B860BBB178FE77644_il2cpp_TypeInfo_var);
		ES3Type_t8FBECB7AE75168648B9524E0C2A38DAD4555421D * L_59 = ((ES3Type_float_tF86B773C86731BD9AD79448B860BBB178FE77644_StaticFields*)il2cpp_codegen_static_fields_for(ES3Type_float_tF86B773C86731BD9AD79448B860BBB178FE77644_il2cpp_TypeInfo_var))->get_Instance_12();
		NullCheck((ES3Reader_t2780AF8AA61DA2A817115CEF8612AC0E494D03C9 *)L_58);
		float L_60;
		L_60 = GenericVirtFuncInvoker1< float, ES3Type_t8FBECB7AE75168648B9524E0C2A38DAD4555421D * >::Invoke(ES3Reader_Read_TisSingle_tE07797BA3C98D4CA9B5A19413C19A76688AB899E_m4A0416374498BDA042B8EB21E49B72326D6CE5F4_RuntimeMethod_var, (ES3Reader_t2780AF8AA61DA2A817115CEF8612AC0E494D03C9 *)L_58, (ES3Type_t8FBECB7AE75168648B9524E0C2A38DAD4555421D *)L_59);
		TrailModule_set_ratio_m34E63B34E7B0E8D037AD45532B2E2D5BD0750189((TrailModule_t95D15372971E64A1977B7587ABAA87B1A31EF5C8 *)(TrailModule_t95D15372971E64A1977B7587ABAA87B1A31EF5C8 *)(&V_0), (float)L_60, /*hidden argument*/NULL);
		// break;
		goto IL_038e;
	}

IL_0277:
	{
		// instance.lifetime = reader.Read<UnityEngine.ParticleSystem.MinMaxCurve>(ES3Type_MinMaxCurve.Instance);
		ES3Reader_t2780AF8AA61DA2A817115CEF8612AC0E494D03C9 * L_61 = ___reader0;
		IL2CPP_RUNTIME_CLASS_INIT(ES3Type_MinMaxCurve_tC5342BF0F8735B85CB5E16FDD4C6FACC8AFAD3B7_il2cpp_TypeInfo_var);
		ES3Type_t8FBECB7AE75168648B9524E0C2A38DAD4555421D * L_62 = ((ES3Type_MinMaxCurve_tC5342BF0F8735B85CB5E16FDD4C6FACC8AFAD3B7_StaticFields*)il2cpp_codegen_static_fields_for(ES3Type_MinMaxCurve_tC5342BF0F8735B85CB5E16FDD4C6FACC8AFAD3B7_il2cpp_TypeInfo_var))->get_Instance_12();
		NullCheck((ES3Reader_t2780AF8AA61DA2A817115CEF8612AC0E494D03C9 *)L_61);
		MinMaxCurve_tF036239442AB2D438B1EDABEBC785426871084CD  L_63;
		L_63 = GenericVirtFuncInvoker1< MinMaxCurve_tF036239442AB2D438B1EDABEBC785426871084CD , ES3Type_t8FBECB7AE75168648B9524E0C2A38DAD4555421D * >::Invoke(ES3Reader_Read_TisMinMaxCurve_tF036239442AB2D438B1EDABEBC785426871084CD_mD285150CBFB52440643BBECB5ADF4EE8DE940535_RuntimeMethod_var, (ES3Reader_t2780AF8AA61DA2A817115CEF8612AC0E494D03C9 *)L_61, (ES3Type_t8FBECB7AE75168648B9524E0C2A38DAD4555421D *)L_62);
		TrailModule_set_lifetime_m57C898C42B9F18F5A0E88AAA7B10276CC158C39D((TrailModule_t95D15372971E64A1977B7587ABAA87B1A31EF5C8 *)(TrailModule_t95D15372971E64A1977B7587ABAA87B1A31EF5C8 *)(&V_0), (MinMaxCurve_tF036239442AB2D438B1EDABEBC785426871084CD )L_63, /*hidden argument*/NULL);
		// break;
		goto IL_038e;
	}

IL_028e:
	{
		// instance.lifetimeMultiplier = reader.Read<System.Single>(ES3Type_float.Instance);
		ES3Reader_t2780AF8AA61DA2A817115CEF8612AC0E494D03C9 * L_64 = ___reader0;
		IL2CPP_RUNTIME_CLASS_INIT(ES3Type_float_tF86B773C86731BD9AD79448B860BBB178FE77644_il2cpp_TypeInfo_var);
		ES3Type_t8FBECB7AE75168648B9524E0C2A38DAD4555421D * L_65 = ((ES3Type_float_tF86B773C86731BD9AD79448B860BBB178FE77644_StaticFields*)il2cpp_codegen_static_fields_for(ES3Type_float_tF86B773C86731BD9AD79448B860BBB178FE77644_il2cpp_TypeInfo_var))->get_Instance_12();
		NullCheck((ES3Reader_t2780AF8AA61DA2A817115CEF8612AC0E494D03C9 *)L_64);
		float L_66;
		L_66 = GenericVirtFuncInvoker1< float, ES3Type_t8FBECB7AE75168648B9524E0C2A38DAD4555421D * >::Invoke(ES3Reader_Read_TisSingle_tE07797BA3C98D4CA9B5A19413C19A76688AB899E_m4A0416374498BDA042B8EB21E49B72326D6CE5F4_RuntimeMethod_var, (ES3Reader_t2780AF8AA61DA2A817115CEF8612AC0E494D03C9 *)L_64, (ES3Type_t8FBECB7AE75168648B9524E0C2A38DAD4555421D *)L_65);
		TrailModule_set_lifetimeMultiplier_m23F95D65EE8C82152AE1CF2E41531EC2789A866B((TrailModule_t95D15372971E64A1977B7587ABAA87B1A31EF5C8 *)(TrailModule_t95D15372971E64A1977B7587ABAA87B1A31EF5C8 *)(&V_0), (float)L_66, /*hidden argument*/NULL);
		// break;
		goto IL_038e;
	}

IL_02a5:
	{
		// instance.minVertexDistance = reader.Read<System.Single>(ES3Type_float.Instance);
		ES3Reader_t2780AF8AA61DA2A817115CEF8612AC0E494D03C9 * L_67 = ___reader0;
		IL2CPP_RUNTIME_CLASS_INIT(ES3Type_float_tF86B773C86731BD9AD79448B860BBB178FE77644_il2cpp_TypeInfo_var);
		ES3Type_t8FBECB7AE75168648B9524E0C2A38DAD4555421D * L_68 = ((ES3Type_float_tF86B773C86731BD9AD79448B860BBB178FE77644_StaticFields*)il2cpp_codegen_static_fields_for(ES3Type_float_tF86B773C86731BD9AD79448B860BBB178FE77644_il2cpp_TypeInfo_var))->get_Instance_12();
		NullCheck((ES3Reader_t2780AF8AA61DA2A817115CEF8612AC0E494D03C9 *)L_67);
		float L_69;
		L_69 = GenericVirtFuncInvoker1< float, ES3Type_t8FBECB7AE75168648B9524E0C2A38DAD4555421D * >::Invoke(ES3Reader_Read_TisSingle_tE07797BA3C98D4CA9B5A19413C19A76688AB899E_m4A0416374498BDA042B8EB21E49B72326D6CE5F4_RuntimeMethod_var, (ES3Reader_t2780AF8AA61DA2A817115CEF8612AC0E494D03C9 *)L_67, (ES3Type_t8FBECB7AE75168648B9524E0C2A38DAD4555421D *)L_68);
		TrailModule_set_minVertexDistance_mF7C29F88FBF540CE4987F4CF9B141C624808FBC5((TrailModule_t95D15372971E64A1977B7587ABAA87B1A31EF5C8 *)(TrailModule_t95D15372971E64A1977B7587ABAA87B1A31EF5C8 *)(&V_0), (float)L_69, /*hidden argument*/NULL);
		// break;
		goto IL_038e;
	}

IL_02bc:
	{
		// instance.textureMode = reader.Read<UnityEngine.ParticleSystemTrailTextureMode>();
		ES3Reader_t2780AF8AA61DA2A817115CEF8612AC0E494D03C9 * L_70 = ___reader0;
		NullCheck((ES3Reader_t2780AF8AA61DA2A817115CEF8612AC0E494D03C9 *)L_70);
		int32_t L_71;
		L_71 = GenericVirtFuncInvoker0< int32_t >::Invoke(ES3Reader_Read_TisParticleSystemTrailTextureMode_tF3259187CA4D0A61EDB3A40E63CBF6C42641CE9F_m055DB1212E8BC34F385DF7D302F16241554E9730_RuntimeMethod_var, (ES3Reader_t2780AF8AA61DA2A817115CEF8612AC0E494D03C9 *)L_70);
		TrailModule_set_textureMode_mC1F8AE0D2965FC47BDBFF4F53E0673D5FB58CF28((TrailModule_t95D15372971E64A1977B7587ABAA87B1A31EF5C8 *)(TrailModule_t95D15372971E64A1977B7587ABAA87B1A31EF5C8 *)(&V_0), (int32_t)L_71, /*hidden argument*/NULL);
		// break;
		goto IL_038e;
	}

IL_02ce:
	{
		// instance.worldSpace = reader.Read<System.Boolean>(ES3Type_bool.Instance);
		ES3Reader_t2780AF8AA61DA2A817115CEF8612AC0E494D03C9 * L_72 = ___reader0;
		IL2CPP_RUNTIME_CLASS_INIT(ES3Type_bool_t8F309F7B9CC735FF1DEE68081B6E3CAB367745F4_il2cpp_TypeInfo_var);
		ES3Type_t8FBECB7AE75168648B9524E0C2A38DAD4555421D * L_73 = ((ES3Type_bool_t8F309F7B9CC735FF1DEE68081B6E3CAB367745F4_StaticFields*)il2cpp_codegen_static_fields_for(ES3Type_bool_t8F309F7B9CC735FF1DEE68081B6E3CAB367745F4_il2cpp_TypeInfo_var))->get_Instance_12();
		NullCheck((ES3Reader_t2780AF8AA61DA2A817115CEF8612AC0E494D03C9 *)L_72);
		bool L_74;
		L_74 = GenericVirtFuncInvoker1< bool, ES3Type_t8FBECB7AE75168648B9524E0C2A38DAD4555421D * >::Invoke(ES3Reader_Read_TisBoolean_t07D1E3F34E4813023D64F584DFF7B34C9D922F37_mC6D1B158268FF9B97822FF9F5B37FB1723FEDA22_RuntimeMethod_var, (ES3Reader_t2780AF8AA61DA2A817115CEF8612AC0E494D03C9 *)L_72, (ES3Type_t8FBECB7AE75168648B9524E0C2A38DAD4555421D *)L_73);
		TrailModule_set_worldSpace_m42A63AF4A96F24A621A29A0F35240195F0E56B1A((TrailModule_t95D15372971E64A1977B7587ABAA87B1A31EF5C8 *)(TrailModule_t95D15372971E64A1977B7587ABAA87B1A31EF5C8 *)(&V_0), (bool)L_74, /*hidden argument*/NULL);
		// break;
		goto IL_038e;
	}

IL_02e5:
	{
		// instance.dieWithParticles = reader.Read<System.Boolean>(ES3Type_bool.Instance);
		ES3Reader_t2780AF8AA61DA2A817115CEF8612AC0E494D03C9 * L_75 = ___reader0;
		IL2CPP_RUNTIME_CLASS_INIT(ES3Type_bool_t8F309F7B9CC735FF1DEE68081B6E3CAB367745F4_il2cpp_TypeInfo_var);
		ES3Type_t8FBECB7AE75168648B9524E0C2A38DAD4555421D * L_76 = ((ES3Type_bool_t8F309F7B9CC735FF1DEE68081B6E3CAB367745F4_StaticFields*)il2cpp_codegen_static_fields_for(ES3Type_bool_t8F309F7B9CC735FF1DEE68081B6E3CAB367745F4_il2cpp_TypeInfo_var))->get_Instance_12();
		NullCheck((ES3Reader_t2780AF8AA61DA2A817115CEF8612AC0E494D03C9 *)L_75);
		bool L_77;
		L_77 = GenericVirtFuncInvoker1< bool, ES3Type_t8FBECB7AE75168648B9524E0C2A38DAD4555421D * >::Invoke(ES3Reader_Read_TisBoolean_t07D1E3F34E4813023D64F584DFF7B34C9D922F37_mC6D1B158268FF9B97822FF9F5B37FB1723FEDA22_RuntimeMethod_var, (ES3Reader_t2780AF8AA61DA2A817115CEF8612AC0E494D03C9 *)L_75, (ES3Type_t8FBECB7AE75168648B9524E0C2A38DAD4555421D *)L_76);
		TrailModule_set_dieWithParticles_mB7C4E8DC2F908FDF6D57A77B54B821E360D8DA99((TrailModule_t95D15372971E64A1977B7587ABAA87B1A31EF5C8 *)(TrailModule_t95D15372971E64A1977B7587ABAA87B1A31EF5C8 *)(&V_0), (bool)L_77, /*hidden argument*/NULL);
		// break;
		goto IL_038e;
	}

IL_02fc:
	{
		// instance.sizeAffectsWidth = reader.Read<System.Boolean>(ES3Type_bool.Instance);
		ES3Reader_t2780AF8AA61DA2A817115CEF8612AC0E494D03C9 * L_78 = ___reader0;
		IL2CPP_RUNTIME_CLASS_INIT(ES3Type_bool_t8F309F7B9CC735FF1DEE68081B6E3CAB367745F4_il2cpp_TypeInfo_var);
		ES3Type_t8FBECB7AE75168648B9524E0C2A38DAD4555421D * L_79 = ((ES3Type_bool_t8F309F7B9CC735FF1DEE68081B6E3CAB367745F4_StaticFields*)il2cpp_codegen_static_fields_for(ES3Type_bool_t8F309F7B9CC735FF1DEE68081B6E3CAB367745F4_il2cpp_TypeInfo_var))->get_Instance_12();
		NullCheck((ES3Reader_t2780AF8AA61DA2A817115CEF8612AC0E494D03C9 *)L_78);
		bool L_80;
		L_80 = GenericVirtFuncInvoker1< bool, ES3Type_t8FBECB7AE75168648B9524E0C2A38DAD4555421D * >::Invoke(ES3Reader_Read_TisBoolean_t07D1E3F34E4813023D64F584DFF7B34C9D922F37_mC6D1B158268FF9B97822FF9F5B37FB1723FEDA22_RuntimeMethod_var, (ES3Reader_t2780AF8AA61DA2A817115CEF8612AC0E494D03C9 *)L_78, (ES3Type_t8FBECB7AE75168648B9524E0C2A38DAD4555421D *)L_79);
		TrailModule_set_sizeAffectsWidth_m3517856E39080DA69B447499C8846D2491B0ABF0((TrailModule_t95D15372971E64A1977B7587ABAA87B1A31EF5C8 *)(TrailModule_t95D15372971E64A1977B7587ABAA87B1A31EF5C8 *)(&V_0), (bool)L_80, /*hidden argument*/NULL);
		// break;
		goto IL_038e;
	}

IL_0310:
	{
		// instance.sizeAffectsLifetime = reader.Read<System.Boolean>(ES3Type_bool.Instance);
		ES3Reader_t2780AF8AA61DA2A817115CEF8612AC0E494D03C9 * L_81 = ___reader0;
		IL2CPP_RUNTIME_CLASS_INIT(ES3Type_bool_t8F309F7B9CC735FF1DEE68081B6E3CAB367745F4_il2cpp_TypeInfo_var);
		ES3Type_t8FBECB7AE75168648B9524E0C2A38DAD4555421D * L_82 = ((ES3Type_bool_t8F309F7B9CC735FF1DEE68081B6E3CAB367745F4_StaticFields*)il2cpp_codegen_static_fields_for(ES3Type_bool_t8F309F7B9CC735FF1DEE68081B6E3CAB367745F4_il2cpp_TypeInfo_var))->get_Instance_12();
		NullCheck((ES3Reader_t2780AF8AA61DA2A817115CEF8612AC0E494D03C9 *)L_81);
		bool L_83;
		L_83 = GenericVirtFuncInvoker1< bool, ES3Type_t8FBECB7AE75168648B9524E0C2A38DAD4555421D * >::Invoke(ES3Reader_Read_TisBoolean_t07D1E3F34E4813023D64F584DFF7B34C9D922F37_mC6D1B158268FF9B97822FF9F5B37FB1723FEDA22_RuntimeMethod_var, (ES3Reader_t2780AF8AA61DA2A817115CEF8612AC0E494D03C9 *)L_81, (ES3Type_t8FBECB7AE75168648B9524E0C2A38DAD4555421D *)L_82);
		TrailModule_set_sizeAffectsLifetime_m98BF4A6594193D824B52D88371CF963ACBA388FD((TrailModule_t95D15372971E64A1977B7587ABAA87B1A31EF5C8 *)(TrailModule_t95D15372971E64A1977B7587ABAA87B1A31EF5C8 *)(&V_0), (bool)L_83, /*hidden argument*/NULL);
		// break;
		goto IL_038e;
	}

IL_0324:
	{
		// instance.inheritParticleColor = reader.Read<System.Boolean>(ES3Type_bool.Instance);
		ES3Reader_t2780AF8AA61DA2A817115CEF8612AC0E494D03C9 * L_84 = ___reader0;
		IL2CPP_RUNTIME_CLASS_INIT(ES3Type_bool_t8F309F7B9CC735FF1DEE68081B6E3CAB367745F4_il2cpp_TypeInfo_var);
		ES3Type_t8FBECB7AE75168648B9524E0C2A38DAD4555421D * L_85 = ((ES3Type_bool_t8F309F7B9CC735FF1DEE68081B6E3CAB367745F4_StaticFields*)il2cpp_codegen_static_fields_for(ES3Type_bool_t8F309F7B9CC735FF1DEE68081B6E3CAB367745F4_il2cpp_TypeInfo_var))->get_Instance_12();
		NullCheck((ES3Reader_t2780AF8AA61DA2A817115CEF8612AC0E494D03C9 *)L_84);
		bool L_86;
		L_86 = GenericVirtFuncInvoker1< bool, ES3Type_t8FBECB7AE75168648B9524E0C2A38DAD4555421D * >::Invoke(ES3Reader_Read_TisBoolean_t07D1E3F34E4813023D64F584DFF7B34C9D922F37_mC6D1B158268FF9B97822FF9F5B37FB1723FEDA22_RuntimeMethod_var, (ES3Reader_t2780AF8AA61DA2A817115CEF8612AC0E494D03C9 *)L_84, (ES3Type_t8FBECB7AE75168648B9524E0C2A38DAD4555421D *)L_85);
		TrailModule_set_inheritParticleColor_mCD83E87B5E00F2BFFBE08AD2D1D68606283A4FEE((TrailModule_t95D15372971E64A1977B7587ABAA87B1A31EF5C8 *)(TrailModule_t95D15372971E64A1977B7587ABAA87B1A31EF5C8 *)(&V_0), (bool)L_86, /*hidden argument*/NULL);
		// break;
		goto IL_038e;
	}

IL_0338:
	{
		// instance.colorOverLifetime = reader.Read<UnityEngine.ParticleSystem.MinMaxGradient>(ES3Type_MinMaxGradient.Instance);
		ES3Reader_t2780AF8AA61DA2A817115CEF8612AC0E494D03C9 * L_87 = ___reader0;
		IL2CPP_RUNTIME_CLASS_INIT(ES3Type_MinMaxGradient_t5DD353D60E95642AB39D1C97C6FD6DD1B067D3CF_il2cpp_TypeInfo_var);
		ES3Type_t8FBECB7AE75168648B9524E0C2A38DAD4555421D * L_88 = ((ES3Type_MinMaxGradient_t5DD353D60E95642AB39D1C97C6FD6DD1B067D3CF_StaticFields*)il2cpp_codegen_static_fields_for(ES3Type_MinMaxGradient_t5DD353D60E95642AB39D1C97C6FD6DD1B067D3CF_il2cpp_TypeInfo_var))->get_Instance_12();
		NullCheck((ES3Reader_t2780AF8AA61DA2A817115CEF8612AC0E494D03C9 *)L_87);
		MinMaxGradient_tF4530B26F29D9635D670A33B9EE581EAC48C12B7  L_89;
		L_89 = GenericVirtFuncInvoker1< MinMaxGradient_tF4530B26F29D9635D670A33B9EE581EAC48C12B7 , ES3Type_t8FBECB7AE75168648B9524E0C2A38DAD4555421D * >::Invoke(ES3Reader_Read_TisMinMaxGradient_tF4530B26F29D9635D670A33B9EE581EAC48C12B7_m6A3DD8CBBAC5D32B838B6C4399009AB8AA512ACC_RuntimeMethod_var, (ES3Reader_t2780AF8AA61DA2A817115CEF8612AC0E494D03C9 *)L_87, (ES3Type_t8FBECB7AE75168648B9524E0C2A38DAD4555421D *)L_88);
		TrailModule_set_colorOverLifetime_mCD56BD4B75D3A3947069BA1B93FEC78AAE08DF27((TrailModule_t95D15372971E64A1977B7587ABAA87B1A31EF5C8 *)(TrailModule_t95D15372971E64A1977B7587ABAA87B1A31EF5C8 *)(&V_0), (MinMaxGradient_tF4530B26F29D9635D670A33B9EE581EAC48C12B7 )L_89, /*hidden argument*/NULL);
		// break;
		goto IL_038e;
	}

IL_034c:
	{
		// instance.widthOverTrail = reader.Read<UnityEngine.ParticleSystem.MinMaxCurve>(ES3Type_MinMaxCurve.Instance);
		ES3Reader_t2780AF8AA61DA2A817115CEF8612AC0E494D03C9 * L_90 = ___reader0;
		IL2CPP_RUNTIME_CLASS_INIT(ES3Type_MinMaxCurve_tC5342BF0F8735B85CB5E16FDD4C6FACC8AFAD3B7_il2cpp_TypeInfo_var);
		ES3Type_t8FBECB7AE75168648B9524E0C2A38DAD4555421D * L_91 = ((ES3Type_MinMaxCurve_tC5342BF0F8735B85CB5E16FDD4C6FACC8AFAD3B7_StaticFields*)il2cpp_codegen_static_fields_for(ES3Type_MinMaxCurve_tC5342BF0F8735B85CB5E16FDD4C6FACC8AFAD3B7_il2cpp_TypeInfo_var))->get_Instance_12();
		NullCheck((ES3Reader_t2780AF8AA61DA2A817115CEF8612AC0E494D03C9 *)L_90);
		MinMaxCurve_tF036239442AB2D438B1EDABEBC785426871084CD  L_92;
		L_92 = GenericVirtFuncInvoker1< MinMaxCurve_tF036239442AB2D438B1EDABEBC785426871084CD , ES3Type_t8FBECB7AE75168648B9524E0C2A38DAD4555421D * >::Invoke(ES3Reader_Read_TisMinMaxCurve_tF036239442AB2D438B1EDABEBC785426871084CD_mD285150CBFB52440643BBECB5ADF4EE8DE940535_RuntimeMethod_var, (ES3Reader_t2780AF8AA61DA2A817115CEF8612AC0E494D03C9 *)L_90, (ES3Type_t8FBECB7AE75168648B9524E0C2A38DAD4555421D *)L_91);
		TrailModule_set_widthOverTrail_m6C0A896EBFDED7CE46344B3A0B04212934F30DE1((TrailModule_t95D15372971E64A1977B7587ABAA87B1A31EF5C8 *)(TrailModule_t95D15372971E64A1977B7587ABAA87B1A31EF5C8 *)(&V_0), (MinMaxCurve_tF036239442AB2D438B1EDABEBC785426871084CD )L_92, /*hidden argument*/NULL);
		// break;
		goto IL_038e;
	}

IL_0360:
	{
		// instance.widthOverTrailMultiplier = reader.Read<System.Single>(ES3Type_float.Instance);
		ES3Reader_t2780AF8AA61DA2A817115CEF8612AC0E494D03C9 * L_93 = ___reader0;
		IL2CPP_RUNTIME_CLASS_INIT(ES3Type_float_tF86B773C86731BD9AD79448B860BBB178FE77644_il2cpp_TypeInfo_var);
		ES3Type_t8FBECB7AE75168648B9524E0C2A38DAD4555421D * L_94 = ((ES3Type_float_tF86B773C86731BD9AD79448B860BBB178FE77644_StaticFields*)il2cpp_codegen_static_fields_for(ES3Type_float_tF86B773C86731BD9AD79448B860BBB178FE77644_il2cpp_TypeInfo_var))->get_Instance_12();
		NullCheck((ES3Reader_t2780AF8AA61DA2A817115CEF8612AC0E494D03C9 *)L_93);
		float L_95;
		L_95 = GenericVirtFuncInvoker1< float, ES3Type_t8FBECB7AE75168648B9524E0C2A38DAD4555421D * >::Invoke(ES3Reader_Read_TisSingle_tE07797BA3C98D4CA9B5A19413C19A76688AB899E_m4A0416374498BDA042B8EB21E49B72326D6CE5F4_RuntimeMethod_var, (ES3Reader_t2780AF8AA61DA2A817115CEF8612AC0E494D03C9 *)L_93, (ES3Type_t8FBECB7AE75168648B9524E0C2A38DAD4555421D *)L_94);
		TrailModule_set_widthOverTrailMultiplier_m6A7EA2856CF30B710CCB528EA3EBFD1799C19BD4((TrailModule_t95D15372971E64A1977B7587ABAA87B1A31EF5C8 *)(TrailModule_t95D15372971E64A1977B7587ABAA87B1A31EF5C8 *)(&V_0), (float)L_95, /*hidden argument*/NULL);
		// break;
		goto IL_038e;
	}

IL_0374:
	{
		// instance.colorOverTrail = reader.Read<UnityEngine.ParticleSystem.MinMaxGradient>(ES3Type_MinMaxGradient.Instance);
		ES3Reader_t2780AF8AA61DA2A817115CEF8612AC0E494D03C9 * L_96 = ___reader0;
		IL2CPP_RUNTIME_CLASS_INIT(ES3Type_MinMaxGradient_t5DD353D60E95642AB39D1C97C6FD6DD1B067D3CF_il2cpp_TypeInfo_var);
		ES3Type_t8FBECB7AE75168648B9524E0C2A38DAD4555421D * L_97 = ((ES3Type_MinMaxGradient_t5DD353D60E95642AB39D1C97C6FD6DD1B067D3CF_StaticFields*)il2cpp_codegen_static_fields_for(ES3Type_MinMaxGradient_t5DD353D60E95642AB39D1C97C6FD6DD1B067D3CF_il2cpp_TypeInfo_var))->get_Instance_12();
		NullCheck((ES3Reader_t2780AF8AA61DA2A817115CEF8612AC0E494D03C9 *)L_96);
		MinMaxGradient_tF4530B26F29D9635D670A33B9EE581EAC48C12B7  L_98;
		L_98 = GenericVirtFuncInvoker1< MinMaxGradient_tF4530B26F29D9635D670A33B9EE581EAC48C12B7 , ES3Type_t8FBECB7AE75168648B9524E0C2A38DAD4555421D * >::Invoke(ES3Reader_Read_TisMinMaxGradient_tF4530B26F29D9635D670A33B9EE581EAC48C12B7_m6A3DD8CBBAC5D32B838B6C4399009AB8AA512ACC_RuntimeMethod_var, (ES3Reader_t2780AF8AA61DA2A817115CEF8612AC0E494D03C9 *)L_96, (ES3Type_t8FBECB7AE75168648B9524E0C2A38DAD4555421D *)L_97);
		TrailModule_set_colorOverTrail_m8440C6574C8310292B93D70EA4FE3EE8C40DF8DB((TrailModule_t95D15372971E64A1977B7587ABAA87B1A31EF5C8 *)(TrailModule_t95D15372971E64A1977B7587ABAA87B1A31EF5C8 *)(&V_0), (MinMaxGradient_tF4530B26F29D9635D670A33B9EE581EAC48C12B7 )L_98, /*hidden argument*/NULL);
		// break;
		goto IL_038e;
	}

IL_0388:
	{
		// reader.Skip();
		ES3Reader_t2780AF8AA61DA2A817115CEF8612AC0E494D03C9 * L_99 = ___reader0;
		NullCheck((ES3Reader_t2780AF8AA61DA2A817115CEF8612AC0E494D03C9 *)L_99);
		VirtActionInvoker0::Invoke(41 /* System.Void ES3Reader::Skip() */, (ES3Reader_t2780AF8AA61DA2A817115CEF8612AC0E494D03C9 *)L_99);
	}

IL_038e:
	{
		// while((propertyName = reader.ReadPropertyName()) != null)
		ES3Reader_t2780AF8AA61DA2A817115CEF8612AC0E494D03C9 * L_100 = ___reader0;
		NullCheck((ES3Reader_t2780AF8AA61DA2A817115CEF8612AC0E494D03C9 *)L_100);
		String_t* L_101;
		L_101 = VirtFuncInvoker0< String_t* >::Invoke(21 /* System.String ES3Reader::ReadPropertyName() */, (ES3Reader_t2780AF8AA61DA2A817115CEF8612AC0E494D03C9 *)L_100);
		String_t* L_102 = (String_t*)L_101;
		V_1 = (String_t*)L_102;
		if (L_102)
		{
			goto IL_000c;
		}
	}
	{
		// }
		return;
	}
}
// System.Void ES3Types.ES3Type_TrailModule::ReadInto<UnityEngine.ParticleSystem/SizeBySpeedModule>(ES3Reader,System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ES3Type_TrailModule_ReadInto_TisSizeBySpeedModule_t156070A63E0A483D36BCAE783BA554CDA7CAF752_m505A694FA440FC2A527A56B34097DF75CA6C00BB_gshared (ES3Type_TrailModule_tC773F73EC0443516DD128FF2B5AE010809742462 * __this, ES3Reader_t2780AF8AA61DA2A817115CEF8612AC0E494D03C9 * ___reader0, RuntimeObject * ___obj1, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ES3Reader_Read_TisBoolean_t07D1E3F34E4813023D64F584DFF7B34C9D922F37_mC6D1B158268FF9B97822FF9F5B37FB1723FEDA22_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ES3Reader_Read_TisMinMaxCurve_tF036239442AB2D438B1EDABEBC785426871084CD_mD285150CBFB52440643BBECB5ADF4EE8DE940535_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ES3Reader_Read_TisMinMaxGradient_tF4530B26F29D9635D670A33B9EE581EAC48C12B7_m6A3DD8CBBAC5D32B838B6C4399009AB8AA512ACC_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ES3Reader_Read_TisParticleSystemTrailTextureMode_tF3259187CA4D0A61EDB3A40E63CBF6C42641CE9F_m055DB1212E8BC34F385DF7D302F16241554E9730_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ES3Reader_Read_TisSingle_tE07797BA3C98D4CA9B5A19413C19A76688AB899E_m4A0416374498BDA042B8EB21E49B72326D6CE5F4_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ES3Type_MinMaxCurve_tC5342BF0F8735B85CB5E16FDD4C6FACC8AFAD3B7_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ES3Type_MinMaxGradient_t5DD353D60E95642AB39D1C97C6FD6DD1B067D3CF_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ES3Type_bool_t8F309F7B9CC735FF1DEE68081B6E3CAB367745F4_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ES3Type_float_tF86B773C86731BD9AD79448B860BBB178FE77644_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&TrailModule_t95D15372971E64A1977B7587ABAA87B1A31EF5C8_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral1D87A56AE67B2CD49CAE6E942C2FB7AD98925C00);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral354281948B6269615E32D856CF85B6F456724DAA);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral4221314F268D184F46688D45C85446821F1F1BC3);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral47C47DD09640803AD8016748EAE1F04DD1D41119);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral5C86338F177203D001C41D9C348A83D1338CC7D0);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral60126327537B7B8E6EE33C43FE0C5CA8BCC3A06A);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral87F70660D62DE5FC257FBADE9DA4EC9188597DE5);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralA967787586EC9E5A17A9C55E2002AB73A5E21A0A);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralADAEB0839588196B349BDB6CF33AFA3E0736360B);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralBE2893848F9FC647C2288DA6581A1522E9695182);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralBF540D6548854CC21630064FBA5390C9409C86F0);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralC580B374AA991574F91DFC86C068E7FAD661A3A4);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralE049DB547285CFCE1CB9A95934B6B6DCE2D219EC);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralF9D225733E1D10F9344C755C4A9C0870CD1DE97B);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralFE5F89F63E2381500F62A7CBD6954563BE44562F);
		s_Il2CppMethodInitialized = true;
	}
	TrailModule_t95D15372971E64A1977B7587ABAA87B1A31EF5C8  V_0;
	memset((&V_0), 0, sizeof(V_0));
	String_t* V_1 = NULL;
	uint32_t V_2 = 0;
	{
		// var instance = (UnityEngine.ParticleSystem.TrailModule)obj;
		RuntimeObject * L_0 = ___obj1;
		V_0 = (TrailModule_t95D15372971E64A1977B7587ABAA87B1A31EF5C8 )((*(TrailModule_t95D15372971E64A1977B7587ABAA87B1A31EF5C8 *)((TrailModule_t95D15372971E64A1977B7587ABAA87B1A31EF5C8 *)UnBox(L_0, TrailModule_t95D15372971E64A1977B7587ABAA87B1A31EF5C8_il2cpp_TypeInfo_var))));
		goto IL_038e;
	}

IL_000c:
	{
		String_t* L_1 = V_1;
		if (!L_1)
		{
			goto IL_0388;
		}
	}
	{
		String_t* L_2 = V_1;
		uint32_t L_3;
		L_3 = U3CPrivateImplementationDetailsU3E_ComputeStringHash_m3ADC1F612F9EE3DD518E6F0023A0DE0EE2B120A7((String_t*)L_2, /*hidden argument*/NULL);
		V_2 = (uint32_t)L_3;
		uint32_t L_4 = V_2;
		if ((!(((uint32_t)L_4) <= ((uint32_t)((int32_t)1376955374)))))
		{
			goto IL_008d;
		}
	}
	{
		uint32_t L_5 = V_2;
		if ((!(((uint32_t)L_5) <= ((uint32_t)((int32_t)494095910)))))
		{
			goto IL_004f;
		}
	}
	{
		uint32_t L_6 = V_2;
		if ((((int32_t)L_6) == ((int32_t)((int32_t)49525662))))
		{
			goto IL_010e;
		}
	}
	{
		uint32_t L_7 = V_2;
		if ((((int32_t)L_7) == ((int32_t)((int32_t)341298456))))
		{
			goto IL_021f;
		}
	}
	{
		uint32_t L_8 = V_2;
		if ((((int32_t)L_8) == ((int32_t)((int32_t)494095910))))
		{
			goto IL_0234;
		}
	}
	{
		goto IL_0388;
	}

IL_004f:
	{
		uint32_t L_9 = V_2;
		if ((!(((uint32_t)L_9) <= ((uint32_t)((int32_t)973733911)))))
		{
			goto IL_0072;
		}
	}
	{
		uint32_t L_10 = V_2;
		if ((((int32_t)L_10) == ((int32_t)((int32_t)559929418))))
		{
			goto IL_01b6;
		}
	}
	{
		uint32_t L_11 = V_2;
		if ((((int32_t)L_11) == ((int32_t)((int32_t)973733911))))
		{
			goto IL_0177;
		}
	}
	{
		goto IL_0388;
	}

IL_0072:
	{
		uint32_t L_12 = V_2;
		if ((((int32_t)L_12) == ((int32_t)((int32_t)1024708593))))
		{
			goto IL_014d;
		}
	}
	{
		uint32_t L_13 = V_2;
		if ((((int32_t)L_13) == ((int32_t)((int32_t)1376955374))))
		{
			goto IL_0138;
		}
	}
	{
		goto IL_0388;
	}

IL_008d:
	{
		uint32_t L_14 = V_2;
		if ((!(((uint32_t)L_14) <= ((uint32_t)((int32_t)-2100707162)))))
		{
			goto IL_00d3;
		}
	}
	{
		uint32_t L_15 = V_2;
		if ((!(((uint32_t)L_15) <= ((uint32_t)((int32_t)1975189197)))))
		{
			goto IL_00b8;
		}
	}
	{
		uint32_t L_16 = V_2;
		if ((((int32_t)L_16) == ((int32_t)((int32_t)1546474083))))
		{
			goto IL_020a;
		}
	}
	{
		uint32_t L_17 = V_2;
		if ((((int32_t)L_17) == ((int32_t)((int32_t)1975189197))))
		{
			goto IL_01cb;
		}
	}
	{
		goto IL_0388;
	}

IL_00b8:
	{
		uint32_t L_18 = V_2;
		if ((((int32_t)L_18) == ((int32_t)((int32_t)2053023684))))
		{
			goto IL_01a1;
		}
	}
	{
		uint32_t L_19 = V_2;
		if ((((int32_t)L_19) == ((int32_t)((int32_t)-2100707162))))
		{
			goto IL_0162;
		}
	}
	{
		goto IL_0388;
	}

IL_00d3:
	{
		uint32_t L_20 = V_2;
		if ((!(((uint32_t)L_20) <= ((uint32_t)((int32_t)-1319579393)))))
		{
			goto IL_00f6;
		}
	}
	{
		uint32_t L_21 = V_2;
		if ((((int32_t)L_21) == ((int32_t)((int32_t)-1562862963))))
		{
			goto IL_01e0;
		}
	}
	{
		uint32_t L_22 = V_2;
		if ((((int32_t)L_22) == ((int32_t)((int32_t)-1319579393))))
		{
			goto IL_018c;
		}
	}
	{
		goto IL_0388;
	}

IL_00f6:
	{
		uint32_t L_23 = V_2;
		if ((((int32_t)L_23) == ((int32_t)((int32_t)-1055777148))))
		{
			goto IL_0123;
		}
	}
	{
		uint32_t L_24 = V_2;
		if ((((int32_t)L_24) == ((int32_t)((int32_t)-413379935))))
		{
			goto IL_01f5;
		}
	}
	{
		goto IL_0388;
	}

IL_010e:
	{
		String_t* L_25 = V_1;
		bool L_26;
		L_26 = String_op_Equality_m50B3548E4AC232558190B0052877B290AA1D436A((String_t*)L_25, (String_t*)_stringLiteralF9D225733E1D10F9344C755C4A9C0870CD1DE97B, /*hidden argument*/NULL);
		if (L_26)
		{
			goto IL_0249;
		}
	}
	{
		goto IL_0388;
	}

IL_0123:
	{
		String_t* L_27 = V_1;
		bool L_28;
		L_28 = String_op_Equality_m50B3548E4AC232558190B0052877B290AA1D436A((String_t*)L_27, (String_t*)_stringLiteral60126327537B7B8E6EE33C43FE0C5CA8BCC3A06A, /*hidden argument*/NULL);
		if (L_28)
		{
			goto IL_0260;
		}
	}
	{
		goto IL_0388;
	}

IL_0138:
	{
		String_t* L_29 = V_1;
		bool L_30;
		L_30 = String_op_Equality_m50B3548E4AC232558190B0052877B290AA1D436A((String_t*)L_29, (String_t*)_stringLiteralBE2893848F9FC647C2288DA6581A1522E9695182, /*hidden argument*/NULL);
		if (L_30)
		{
			goto IL_0277;
		}
	}
	{
		goto IL_0388;
	}

IL_014d:
	{
		String_t* L_31 = V_1;
		bool L_32;
		L_32 = String_op_Equality_m50B3548E4AC232558190B0052877B290AA1D436A((String_t*)L_31, (String_t*)_stringLiteral4221314F268D184F46688D45C85446821F1F1BC3, /*hidden argument*/NULL);
		if (L_32)
		{
			goto IL_028e;
		}
	}
	{
		goto IL_0388;
	}

IL_0162:
	{
		String_t* L_33 = V_1;
		bool L_34;
		L_34 = String_op_Equality_m50B3548E4AC232558190B0052877B290AA1D436A((String_t*)L_33, (String_t*)_stringLiteral5C86338F177203D001C41D9C348A83D1338CC7D0, /*hidden argument*/NULL);
		if (L_34)
		{
			goto IL_02a5;
		}
	}
	{
		goto IL_0388;
	}

IL_0177:
	{
		String_t* L_35 = V_1;
		bool L_36;
		L_36 = String_op_Equality_m50B3548E4AC232558190B0052877B290AA1D436A((String_t*)L_35, (String_t*)_stringLiteralFE5F89F63E2381500F62A7CBD6954563BE44562F, /*hidden argument*/NULL);
		if (L_36)
		{
			goto IL_02bc;
		}
	}
	{
		goto IL_0388;
	}

IL_018c:
	{
		String_t* L_37 = V_1;
		bool L_38;
		L_38 = String_op_Equality_m50B3548E4AC232558190B0052877B290AA1D436A((String_t*)L_37, (String_t*)_stringLiteral87F70660D62DE5FC257FBADE9DA4EC9188597DE5, /*hidden argument*/NULL);
		if (L_38)
		{
			goto IL_02ce;
		}
	}
	{
		goto IL_0388;
	}

IL_01a1:
	{
		String_t* L_39 = V_1;
		bool L_40;
		L_40 = String_op_Equality_m50B3548E4AC232558190B0052877B290AA1D436A((String_t*)L_39, (String_t*)_stringLiteral354281948B6269615E32D856CF85B6F456724DAA, /*hidden argument*/NULL);
		if (L_40)
		{
			goto IL_02e5;
		}
	}
	{
		goto IL_0388;
	}

IL_01b6:
	{
		String_t* L_41 = V_1;
		bool L_42;
		L_42 = String_op_Equality_m50B3548E4AC232558190B0052877B290AA1D436A((String_t*)L_41, (String_t*)_stringLiteralADAEB0839588196B349BDB6CF33AFA3E0736360B, /*hidden argument*/NULL);
		if (L_42)
		{
			goto IL_02fc;
		}
	}
	{
		goto IL_0388;
	}

IL_01cb:
	{
		String_t* L_43 = V_1;
		bool L_44;
		L_44 = String_op_Equality_m50B3548E4AC232558190B0052877B290AA1D436A((String_t*)L_43, (String_t*)_stringLiteralC580B374AA991574F91DFC86C068E7FAD661A3A4, /*hidden argument*/NULL);
		if (L_44)
		{
			goto IL_0310;
		}
	}
	{
		goto IL_0388;
	}

IL_01e0:
	{
		String_t* L_45 = V_1;
		bool L_46;
		L_46 = String_op_Equality_m50B3548E4AC232558190B0052877B290AA1D436A((String_t*)L_45, (String_t*)_stringLiteralE049DB547285CFCE1CB9A95934B6B6DCE2D219EC, /*hidden argument*/NULL);
		if (L_46)
		{
			goto IL_0324;
		}
	}
	{
		goto IL_0388;
	}

IL_01f5:
	{
		String_t* L_47 = V_1;
		bool L_48;
		L_48 = String_op_Equality_m50B3548E4AC232558190B0052877B290AA1D436A((String_t*)L_47, (String_t*)_stringLiteralBF540D6548854CC21630064FBA5390C9409C86F0, /*hidden argument*/NULL);
		if (L_48)
		{
			goto IL_0338;
		}
	}
	{
		goto IL_0388;
	}

IL_020a:
	{
		String_t* L_49 = V_1;
		bool L_50;
		L_50 = String_op_Equality_m50B3548E4AC232558190B0052877B290AA1D436A((String_t*)L_49, (String_t*)_stringLiteral1D87A56AE67B2CD49CAE6E942C2FB7AD98925C00, /*hidden argument*/NULL);
		if (L_50)
		{
			goto IL_034c;
		}
	}
	{
		goto IL_0388;
	}

IL_021f:
	{
		String_t* L_51 = V_1;
		bool L_52;
		L_52 = String_op_Equality_m50B3548E4AC232558190B0052877B290AA1D436A((String_t*)L_51, (String_t*)_stringLiteralA967787586EC9E5A17A9C55E2002AB73A5E21A0A, /*hidden argument*/NULL);
		if (L_52)
		{
			goto IL_0360;
		}
	}
	{
		goto IL_0388;
	}

IL_0234:
	{
		String_t* L_53 = V_1;
		bool L_54;
		L_54 = String_op_Equality_m50B3548E4AC232558190B0052877B290AA1D436A((String_t*)L_53, (String_t*)_stringLiteral47C47DD09640803AD8016748EAE1F04DD1D41119, /*hidden argument*/NULL);
		if (L_54)
		{
			goto IL_0374;
		}
	}
	{
		goto IL_0388;
	}

IL_0249:
	{
		// instance.enabled = reader.Read<System.Boolean>(ES3Type_bool.Instance);
		ES3Reader_t2780AF8AA61DA2A817115CEF8612AC0E494D03C9 * L_55 = ___reader0;
		IL2CPP_RUNTIME_CLASS_INIT(ES3Type_bool_t8F309F7B9CC735FF1DEE68081B6E3CAB367745F4_il2cpp_TypeInfo_var);
		ES3Type_t8FBECB7AE75168648B9524E0C2A38DAD4555421D * L_56 = ((ES3Type_bool_t8F309F7B9CC735FF1DEE68081B6E3CAB367745F4_StaticFields*)il2cpp_codegen_static_fields_for(ES3Type_bool_t8F309F7B9CC735FF1DEE68081B6E3CAB367745F4_il2cpp_TypeInfo_var))->get_Instance_12();
		NullCheck((ES3Reader_t2780AF8AA61DA2A817115CEF8612AC0E494D03C9 *)L_55);
		bool L_57;
		L_57 = GenericVirtFuncInvoker1< bool, ES3Type_t8FBECB7AE75168648B9524E0C2A38DAD4555421D * >::Invoke(ES3Reader_Read_TisBoolean_t07D1E3F34E4813023D64F584DFF7B34C9D922F37_mC6D1B158268FF9B97822FF9F5B37FB1723FEDA22_RuntimeMethod_var, (ES3Reader_t2780AF8AA61DA2A817115CEF8612AC0E494D03C9 *)L_55, (ES3Type_t8FBECB7AE75168648B9524E0C2A38DAD4555421D *)L_56);
		TrailModule_set_enabled_mFC8451DDDF40CCBB3E32A4B30A001115F6346894((TrailModule_t95D15372971E64A1977B7587ABAA87B1A31EF5C8 *)(TrailModule_t95D15372971E64A1977B7587ABAA87B1A31EF5C8 *)(&V_0), (bool)L_57, /*hidden argument*/NULL);
		// break;
		goto IL_038e;
	}

IL_0260:
	{
		// instance.ratio = reader.Read<System.Single>(ES3Type_float.Instance);
		ES3Reader_t2780AF8AA61DA2A817115CEF8612AC0E494D03C9 * L_58 = ___reader0;
		IL2CPP_RUNTIME_CLASS_INIT(ES3Type_float_tF86B773C86731BD9AD79448B860BBB178FE77644_il2cpp_TypeInfo_var);
		ES3Type_t8FBECB7AE75168648B9524E0C2A38DAD4555421D * L_59 = ((ES3Type_float_tF86B773C86731BD9AD79448B860BBB178FE77644_StaticFields*)il2cpp_codegen_static_fields_for(ES3Type_float_tF86B773C86731BD9AD79448B860BBB178FE77644_il2cpp_TypeInfo_var))->get_Instance_12();
		NullCheck((ES3Reader_t2780AF8AA61DA2A817115CEF8612AC0E494D03C9 *)L_58);
		float L_60;
		L_60 = GenericVirtFuncInvoker1< float, ES3Type_t8FBECB7AE75168648B9524E0C2A38DAD4555421D * >::Invoke(ES3Reader_Read_TisSingle_tE07797BA3C98D4CA9B5A19413C19A76688AB899E_m4A0416374498BDA042B8EB21E49B72326D6CE5F4_RuntimeMethod_var, (ES3Reader_t2780AF8AA61DA2A817115CEF8612AC0E494D03C9 *)L_58, (ES3Type_t8FBECB7AE75168648B9524E0C2A38DAD4555421D *)L_59);
		TrailModule_set_ratio_m34E63B34E7B0E8D037AD45532B2E2D5BD0750189((TrailModule_t95D15372971E64A1977B7587ABAA87B1A31EF5C8 *)(TrailModule_t95D15372971E64A1977B7587ABAA87B1A31EF5C8 *)(&V_0), (float)L_60, /*hidden argument*/NULL);
		// break;
		goto IL_038e;
	}

IL_0277:
	{
		// instance.lifetime = reader.Read<UnityEngine.ParticleSystem.MinMaxCurve>(ES3Type_MinMaxCurve.Instance);
		ES3Reader_t2780AF8AA61DA2A817115CEF8612AC0E494D03C9 * L_61 = ___reader0;
		IL2CPP_RUNTIME_CLASS_INIT(ES3Type_MinMaxCurve_tC5342BF0F8735B85CB5E16FDD4C6FACC8AFAD3B7_il2cpp_TypeInfo_var);
		ES3Type_t8FBECB7AE75168648B9524E0C2A38DAD4555421D * L_62 = ((ES3Type_MinMaxCurve_tC5342BF0F8735B85CB5E16FDD4C6FACC8AFAD3B7_StaticFields*)il2cpp_codegen_static_fields_for(ES3Type_MinMaxCurve_tC5342BF0F8735B85CB5E16FDD4C6FACC8AFAD3B7_il2cpp_TypeInfo_var))->get_Instance_12();
		NullCheck((ES3Reader_t2780AF8AA61DA2A817115CEF8612AC0E494D03C9 *)L_61);
		MinMaxCurve_tF036239442AB2D438B1EDABEBC785426871084CD  L_63;
		L_63 = GenericVirtFuncInvoker1< MinMaxCurve_tF036239442AB2D438B1EDABEBC785426871084CD , ES3Type_t8FBECB7AE75168648B9524E0C2A38DAD4555421D * >::Invoke(ES3Reader_Read_TisMinMaxCurve_tF036239442AB2D438B1EDABEBC785426871084CD_mD285150CBFB52440643BBECB5ADF4EE8DE940535_RuntimeMethod_var, (ES3Reader_t2780AF8AA61DA2A817115CEF8612AC0E494D03C9 *)L_61, (ES3Type_t8FBECB7AE75168648B9524E0C2A38DAD4555421D *)L_62);
		TrailModule_set_lifetime_m57C898C42B9F18F5A0E88AAA7B10276CC158C39D((TrailModule_t95D15372971E64A1977B7587ABAA87B1A31EF5C8 *)(TrailModule_t95D15372971E64A1977B7587ABAA87B1A31EF5C8 *)(&V_0), (MinMaxCurve_tF036239442AB2D438B1EDABEBC785426871084CD )L_63, /*hidden argument*/NULL);
		// break;
		goto IL_038e;
	}

IL_028e:
	{
		// instance.lifetimeMultiplier = reader.Read<System.Single>(ES3Type_float.Instance);
		ES3Reader_t2780AF8AA61DA2A817115CEF8612AC0E494D03C9 * L_64 = ___reader0;
		IL2CPP_RUNTIME_CLASS_INIT(ES3Type_float_tF86B773C86731BD9AD79448B860BBB178FE77644_il2cpp_TypeInfo_var);
		ES3Type_t8FBECB7AE75168648B9524E0C2A38DAD4555421D * L_65 = ((ES3Type_float_tF86B773C86731BD9AD79448B860BBB178FE77644_StaticFields*)il2cpp_codegen_static_fields_for(ES3Type_float_tF86B773C86731BD9AD79448B860BBB178FE77644_il2cpp_TypeInfo_var))->get_Instance_12();
		NullCheck((ES3Reader_t2780AF8AA61DA2A817115CEF8612AC0E494D03C9 *)L_64);
		float L_66;
		L_66 = GenericVirtFuncInvoker1< float, ES3Type_t8FBECB7AE75168648B9524E0C2A38DAD4555421D * >::Invoke(ES3Reader_Read_TisSingle_tE07797BA3C98D4CA9B5A19413C19A76688AB899E_m4A0416374498BDA042B8EB21E49B72326D6CE5F4_RuntimeMethod_var, (ES3Reader_t2780AF8AA61DA2A817115CEF8612AC0E494D03C9 *)L_64, (ES3Type_t8FBECB7AE75168648B9524E0C2A38DAD4555421D *)L_65);
		TrailModule_set_lifetimeMultiplier_m23F95D65EE8C82152AE1CF2E41531EC2789A866B((TrailModule_t95D15372971E64A1977B7587ABAA87B1A31EF5C8 *)(TrailModule_t95D15372971E64A1977B7587ABAA87B1A31EF5C8 *)(&V_0), (float)L_66, /*hidden argument*/NULL);
		// break;
		goto IL_038e;
	}

IL_02a5:
	{
		// instance.minVertexDistance = reader.Read<System.Single>(ES3Type_float.Instance);
		ES3Reader_t2780AF8AA61DA2A817115CEF8612AC0E494D03C9 * L_67 = ___reader0;
		IL2CPP_RUNTIME_CLASS_INIT(ES3Type_float_tF86B773C86731BD9AD79448B860BBB178FE77644_il2cpp_TypeInfo_var);
		ES3Type_t8FBECB7AE75168648B9524E0C2A38DAD4555421D * L_68 = ((ES3Type_float_tF86B773C86731BD9AD79448B860BBB178FE77644_StaticFields*)il2cpp_codegen_static_fields_for(ES3Type_float_tF86B773C86731BD9AD79448B860BBB178FE77644_il2cpp_TypeInfo_var))->get_Instance_12();
		NullCheck((ES3Reader_t2780AF8AA61DA2A817115CEF8612AC0E494D03C9 *)L_67);
		float L_69;
		L_69 = GenericVirtFuncInvoker1< float, ES3Type_t8FBECB7AE75168648B9524E0C2A38DAD4555421D * >::Invoke(ES3Reader_Read_TisSingle_tE07797BA3C98D4CA9B5A19413C19A76688AB899E_m4A0416374498BDA042B8EB21E49B72326D6CE5F4_RuntimeMethod_var, (ES3Reader_t2780AF8AA61DA2A817115CEF8612AC0E494D03C9 *)L_67, (ES3Type_t8FBECB7AE75168648B9524E0C2A38DAD4555421D *)L_68);
		TrailModule_set_minVertexDistance_mF7C29F88FBF540CE4987F4CF9B141C624808FBC5((TrailModule_t95D15372971E64A1977B7587ABAA87B1A31EF5C8 *)(TrailModule_t95D15372971E64A1977B7587ABAA87B1A31EF5C8 *)(&V_0), (float)L_69, /*hidden argument*/NULL);
		// break;
		goto IL_038e;
	}

IL_02bc:
	{
		// instance.textureMode = reader.Read<UnityEngine.ParticleSystemTrailTextureMode>();
		ES3Reader_t2780AF8AA61DA2A817115CEF8612AC0E494D03C9 * L_70 = ___reader0;
		NullCheck((ES3Reader_t2780AF8AA61DA2A817115CEF8612AC0E494D03C9 *)L_70);
		int32_t L_71;
		L_71 = GenericVirtFuncInvoker0< int32_t >::Invoke(ES3Reader_Read_TisParticleSystemTrailTextureMode_tF3259187CA4D0A61EDB3A40E63CBF6C42641CE9F_m055DB1212E8BC34F385DF7D302F16241554E9730_RuntimeMethod_var, (ES3Reader_t2780AF8AA61DA2A817115CEF8612AC0E494D03C9 *)L_70);
		TrailModule_set_textureMode_mC1F8AE0D2965FC47BDBFF4F53E0673D5FB58CF28((TrailModule_t95D15372971E64A1977B7587ABAA87B1A31EF5C8 *)(TrailModule_t95D15372971E64A1977B7587ABAA87B1A31EF5C8 *)(&V_0), (int32_t)L_71, /*hidden argument*/NULL);
		// break;
		goto IL_038e;
	}

IL_02ce:
	{
		// instance.worldSpace = reader.Read<System.Boolean>(ES3Type_bool.Instance);
		ES3Reader_t2780AF8AA61DA2A817115CEF8612AC0E494D03C9 * L_72 = ___reader0;
		IL2CPP_RUNTIME_CLASS_INIT(ES3Type_bool_t8F309F7B9CC735FF1DEE68081B6E3CAB367745F4_il2cpp_TypeInfo_var);
		ES3Type_t8FBECB7AE75168648B9524E0C2A38DAD4555421D * L_73 = ((ES3Type_bool_t8F309F7B9CC735FF1DEE68081B6E3CAB367745F4_StaticFields*)il2cpp_codegen_static_fields_for(ES3Type_bool_t8F309F7B9CC735FF1DEE68081B6E3CAB367745F4_il2cpp_TypeInfo_var))->get_Instance_12();
		NullCheck((ES3Reader_t2780AF8AA61DA2A817115CEF8612AC0E494D03C9 *)L_72);
		bool L_74;
		L_74 = GenericVirtFuncInvoker1< bool, ES3Type_t8FBECB7AE75168648B9524E0C2A38DAD4555421D * >::Invoke(ES3Reader_Read_TisBoolean_t07D1E3F34E4813023D64F584DFF7B34C9D922F37_mC6D1B158268FF9B97822FF9F5B37FB1723FEDA22_RuntimeMethod_var, (ES3Reader_t2780AF8AA61DA2A817115CEF8612AC0E494D03C9 *)L_72, (ES3Type_t8FBECB7AE75168648B9524E0C2A38DAD4555421D *)L_73);
		TrailModule_set_worldSpace_m42A63AF4A96F24A621A29A0F35240195F0E56B1A((TrailModule_t95D15372971E64A1977B7587ABAA87B1A31EF5C8 *)(TrailModule_t95D15372971E64A1977B7587ABAA87B1A31EF5C8 *)(&V_0), (bool)L_74, /*hidden argument*/NULL);
		// break;
		goto IL_038e;
	}

IL_02e5:
	{
		// instance.dieWithParticles = reader.Read<System.Boolean>(ES3Type_bool.Instance);
		ES3Reader_t2780AF8AA61DA2A817115CEF8612AC0E494D03C9 * L_75 = ___reader0;
		IL2CPP_RUNTIME_CLASS_INIT(ES3Type_bool_t8F309F7B9CC735FF1DEE68081B6E3CAB367745F4_il2cpp_TypeInfo_var);
		ES3Type_t8FBECB7AE75168648B9524E0C2A38DAD4555421D * L_76 = ((ES3Type_bool_t8F309F7B9CC735FF1DEE68081B6E3CAB367745F4_StaticFields*)il2cpp_codegen_static_fields_for(ES3Type_bool_t8F309F7B9CC735FF1DEE68081B6E3CAB367745F4_il2cpp_TypeInfo_var))->get_Instance_12();
		NullCheck((ES3Reader_t2780AF8AA61DA2A817115CEF8612AC0E494D03C9 *)L_75);
		bool L_77;
		L_77 = GenericVirtFuncInvoker1< bool, ES3Type_t8FBECB7AE75168648B9524E0C2A38DAD4555421D * >::Invoke(ES3Reader_Read_TisBoolean_t07D1E3F34E4813023D64F584DFF7B34C9D922F37_mC6D1B158268FF9B97822FF9F5B37FB1723FEDA22_RuntimeMethod_var, (ES3Reader_t2780AF8AA61DA2A817115CEF8612AC0E494D03C9 *)L_75, (ES3Type_t8FBECB7AE75168648B9524E0C2A38DAD4555421D *)L_76);
		TrailModule_set_dieWithParticles_mB7C4E8DC2F908FDF6D57A77B54B821E360D8DA99((TrailModule_t95D15372971E64A1977B7587ABAA87B1A31EF5C8 *)(TrailModule_t95D15372971E64A1977B7587ABAA87B1A31EF5C8 *)(&V_0), (bool)L_77, /*hidden argument*/NULL);
		// break;
		goto IL_038e;
	}

IL_02fc:
	{
		// instance.sizeAffectsWidth = reader.Read<System.Boolean>(ES3Type_bool.Instance);
		ES3Reader_t2780AF8AA61DA2A817115CEF8612AC0E494D03C9 * L_78 = ___reader0;
		IL2CPP_RUNTIME_CLASS_INIT(ES3Type_bool_t8F309F7B9CC735FF1DEE68081B6E3CAB367745F4_il2cpp_TypeInfo_var);
		ES3Type_t8FBECB7AE75168648B9524E0C2A38DAD4555421D * L_79 = ((ES3Type_bool_t8F309F7B9CC735FF1DEE68081B6E3CAB367745F4_StaticFields*)il2cpp_codegen_static_fields_for(ES3Type_bool_t8F309F7B9CC735FF1DEE68081B6E3CAB367745F4_il2cpp_TypeInfo_var))->get_Instance_12();
		NullCheck((ES3Reader_t2780AF8AA61DA2A817115CEF8612AC0E494D03C9 *)L_78);
		bool L_80;
		L_80 = GenericVirtFuncInvoker1< bool, ES3Type_t8FBECB7AE75168648B9524E0C2A38DAD4555421D * >::Invoke(ES3Reader_Read_TisBoolean_t07D1E3F34E4813023D64F584DFF7B34C9D922F37_mC6D1B158268FF9B97822FF9F5B37FB1723FEDA22_RuntimeMethod_var, (ES3Reader_t2780AF8AA61DA2A817115CEF8612AC0E494D03C9 *)L_78, (ES3Type_t8FBECB7AE75168648B9524E0C2A38DAD4555421D *)L_79);
		TrailModule_set_sizeAffectsWidth_m3517856E39080DA69B447499C8846D2491B0ABF0((TrailModule_t95D15372971E64A1977B7587ABAA87B1A31EF5C8 *)(TrailModule_t95D15372971E64A1977B7587ABAA87B1A31EF5C8 *)(&V_0), (bool)L_80, /*hidden argument*/NULL);
		// break;
		goto IL_038e;
	}

IL_0310:
	{
		// instance.sizeAffectsLifetime = reader.Read<System.Boolean>(ES3Type_bool.Instance);
		ES3Reader_t2780AF8AA61DA2A817115CEF8612AC0E494D03C9 * L_81 = ___reader0;
		IL2CPP_RUNTIME_CLASS_INIT(ES3Type_bool_t8F309F7B9CC735FF1DEE68081B6E3CAB367745F4_il2cpp_TypeInfo_var);
		ES3Type_t8FBECB7AE75168648B9524E0C2A38DAD4555421D * L_82 = ((ES3Type_bool_t8F309F7B9CC735FF1DEE68081B6E3CAB367745F4_StaticFields*)il2cpp_codegen_static_fields_for(ES3Type_bool_t8F309F7B9CC735FF1DEE68081B6E3CAB367745F4_il2cpp_TypeInfo_var))->get_Instance_12();
		NullCheck((ES3Reader_t2780AF8AA61DA2A817115CEF8612AC0E494D03C9 *)L_81);
		bool L_83;
		L_83 = GenericVirtFuncInvoker1< bool, ES3Type_t8FBECB7AE75168648B9524E0C2A38DAD4555421D * >::Invoke(ES3Reader_Read_TisBoolean_t07D1E3F34E4813023D64F584DFF7B34C9D922F37_mC6D1B158268FF9B97822FF9F5B37FB1723FEDA22_RuntimeMethod_var, (ES3Reader_t2780AF8AA61DA2A817115CEF8612AC0E494D03C9 *)L_81, (ES3Type_t8FBECB7AE75168648B9524E0C2A38DAD4555421D *)L_82);
		TrailModule_set_sizeAffectsLifetime_m98BF4A6594193D824B52D88371CF963ACBA388FD((TrailModule_t95D15372971E64A1977B7587ABAA87B1A31EF5C8 *)(TrailModule_t95D15372971E64A1977B7587ABAA87B1A31EF5C8 *)(&V_0), (bool)L_83, /*hidden argument*/NULL);
		// break;
		goto IL_038e;
	}

IL_0324:
	{
		// instance.inheritParticleColor = reader.Read<System.Boolean>(ES3Type_bool.Instance);
		ES3Reader_t2780AF8AA61DA2A817115CEF8612AC0E494D03C9 * L_84 = ___reader0;
		IL2CPP_RUNTIME_CLASS_INIT(ES3Type_bool_t8F309F7B9CC735FF1DEE68081B6E3CAB367745F4_il2cpp_TypeInfo_var);
		ES3Type_t8FBECB7AE75168648B9524E0C2A38DAD4555421D * L_85 = ((ES3Type_bool_t8F309F7B9CC735FF1DEE68081B6E3CAB367745F4_StaticFields*)il2cpp_codegen_static_fields_for(ES3Type_bool_t8F309F7B9CC735FF1DEE68081B6E3CAB367745F4_il2cpp_TypeInfo_var))->get_Instance_12();
		NullCheck((ES3Reader_t2780AF8AA61DA2A817115CEF8612AC0E494D03C9 *)L_84);
		bool L_86;
		L_86 = GenericVirtFuncInvoker1< bool, ES3Type_t8FBECB7AE75168648B9524E0C2A38DAD4555421D * >::Invoke(ES3Reader_Read_TisBoolean_t07D1E3F34E4813023D64F584DFF7B34C9D922F37_mC6D1B158268FF9B97822FF9F5B37FB1723FEDA22_RuntimeMethod_var, (ES3Reader_t2780AF8AA61DA2A817115CEF8612AC0E494D03C9 *)L_84, (ES3Type_t8FBECB7AE75168648B9524E0C2A38DAD4555421D *)L_85);
		TrailModule_set_inheritParticleColor_mCD83E87B5E00F2BFFBE08AD2D1D68606283A4FEE((TrailModule_t95D15372971E64A1977B7587ABAA87B1A31EF5C8 *)(TrailModule_t95D15372971E64A1977B7587ABAA87B1A31EF5C8 *)(&V_0), (bool)L_86, /*hidden argument*/NULL);
		// break;
		goto IL_038e;
	}

IL_0338:
	{
		// instance.colorOverLifetime = reader.Read<UnityEngine.ParticleSystem.MinMaxGradient>(ES3Type_MinMaxGradient.Instance);
		ES3Reader_t2780AF8AA61DA2A817115CEF8612AC0E494D03C9 * L_87 = ___reader0;
		IL2CPP_RUNTIME_CLASS_INIT(ES3Type_MinMaxGradient_t5DD353D60E95642AB39D1C97C6FD6DD1B067D3CF_il2cpp_TypeInfo_var);
		ES3Type_t8FBECB7AE75168648B9524E0C2A38DAD4555421D * L_88 = ((ES3Type_MinMaxGradient_t5DD353D60E95642AB39D1C97C6FD6DD1B067D3CF_StaticFields*)il2cpp_codegen_static_fields_for(ES3Type_MinMaxGradient_t5DD353D60E95642AB39D1C97C6FD6DD1B067D3CF_il2cpp_TypeInfo_var))->get_Instance_12();
		NullCheck((ES3Reader_t2780AF8AA61DA2A817115CEF8612AC0E494D03C9 *)L_87);
		MinMaxGradient_tF4530B26F29D9635D670A33B9EE581EAC48C12B7  L_89;
		L_89 = GenericVirtFuncInvoker1< MinMaxGradient_tF4530B26F29D9635D670A33B9EE581EAC48C12B7 , ES3Type_t8FBECB7AE75168648B9524E0C2A38DAD4555421D * >::Invoke(ES3Reader_Read_TisMinMaxGradient_tF4530B26F29D9635D670A33B9EE581EAC48C12B7_m6A3DD8CBBAC5D32B838B6C4399009AB8AA512ACC_RuntimeMethod_var, (ES3Reader_t2780AF8AA61DA2A817115CEF8612AC0E494D03C9 *)L_87, (ES3Type_t8FBECB7AE75168648B9524E0C2A38DAD4555421D *)L_88);
		TrailModule_set_colorOverLifetime_mCD56BD4B75D3A3947069BA1B93FEC78AAE08DF27((TrailModule_t95D15372971E64A1977B7587ABAA87B1A31EF5C8 *)(TrailModule_t95D15372971E64A1977B7587ABAA87B1A31EF5C8 *)(&V_0), (MinMaxGradient_tF4530B26F29D9635D670A33B9EE581EAC48C12B7 )L_89, /*hidden argument*/NULL);
		// break;
		goto IL_038e;
	}

IL_034c:
	{
		// instance.widthOverTrail = reader.Read<UnityEngine.ParticleSystem.MinMaxCurve>(ES3Type_MinMaxCurve.Instance);
		ES3Reader_t2780AF8AA61DA2A817115CEF8612AC0E494D03C9 * L_90 = ___reader0;
		IL2CPP_RUNTIME_CLASS_INIT(ES3Type_MinMaxCurve_tC5342BF0F8735B85CB5E16FDD4C6FACC8AFAD3B7_il2cpp_TypeInfo_var);
		ES3Type_t8FBECB7AE75168648B9524E0C2A38DAD4555421D * L_91 = ((ES3Type_MinMaxCurve_tC5342BF0F8735B85CB5E16FDD4C6FACC8AFAD3B7_StaticFields*)il2cpp_codegen_static_fields_for(ES3Type_MinMaxCurve_tC5342BF0F8735B85CB5E16FDD4C6FACC8AFAD3B7_il2cpp_TypeInfo_var))->get_Instance_12();
		NullCheck((ES3Reader_t2780AF8AA61DA2A817115CEF8612AC0E494D03C9 *)L_90);
		MinMaxCurve_tF036239442AB2D438B1EDABEBC785426871084CD  L_92;
		L_92 = GenericVirtFuncInvoker1< MinMaxCurve_tF036239442AB2D438B1EDABEBC785426871084CD , ES3Type_t8FBECB7AE75168648B9524E0C2A38DAD4555421D * >::Invoke(ES3Reader_Read_TisMinMaxCurve_tF036239442AB2D438B1EDABEBC785426871084CD_mD285150CBFB52440643BBECB5ADF4EE8DE940535_RuntimeMethod_var, (ES3Reader_t2780AF8AA61DA2A817115CEF8612AC0E494D03C9 *)L_90, (ES3Type_t8FBECB7AE75168648B9524E0C2A38DAD4555421D *)L_91);
		TrailModule_set_widthOverTrail_m6C0A896EBFDED7CE46344B3A0B04212934F30DE1((TrailModule_t95D15372971E64A1977B7587ABAA87B1A31EF5C8 *)(TrailModule_t95D15372971E64A1977B7587ABAA87B1A31EF5C8 *)(&V_0), (MinMaxCurve_tF036239442AB2D438B1EDABEBC785426871084CD )L_92, /*hidden argument*/NULL);
		// break;
		goto IL_038e;
	}

IL_0360:
	{
		// instance.widthOverTrailMultiplier = reader.Read<System.Single>(ES3Type_float.Instance);
		ES3Reader_t2780AF8AA61DA2A817115CEF8612AC0E494D03C9 * L_93 = ___reader0;
		IL2CPP_RUNTIME_CLASS_INIT(ES3Type_float_tF86B773C86731BD9AD79448B860BBB178FE77644_il2cpp_TypeInfo_var);
		ES3Type_t8FBECB7AE75168648B9524E0C2A38DAD4555421D * L_94 = ((ES3Type_float_tF86B773C86731BD9AD79448B860BBB178FE77644_StaticFields*)il2cpp_codegen_static_fields_for(ES3Type_float_tF86B773C86731BD9AD79448B860BBB178FE77644_il2cpp_TypeInfo_var))->get_Instance_12();
		NullCheck((ES3Reader_t2780AF8AA61DA2A817115CEF8612AC0E494D03C9 *)L_93);
		float L_95;
		L_95 = GenericVirtFuncInvoker1< float, ES3Type_t8FBECB7AE75168648B9524E0C2A38DAD4555421D * >::Invoke(ES3Reader_Read_TisSingle_tE07797BA3C98D4CA9B5A19413C19A76688AB899E_m4A0416374498BDA042B8EB21E49B72326D6CE5F4_RuntimeMethod_var, (ES3Reader_t2780AF8AA61DA2A817115CEF8612AC0E494D03C9 *)L_93, (ES3Type_t8FBECB7AE75168648B9524E0C2A38DAD4555421D *)L_94);
		TrailModule_set_widthOverTrailMultiplier_m6A7EA2856CF30B710CCB528EA3EBFD1799C19BD4((TrailModule_t95D15372971E64A1977B7587ABAA87B1A31EF5C8 *)(TrailModule_t95D15372971E64A1977B7587ABAA87B1A31EF5C8 *)(&V_0), (float)L_95, /*hidden argument*/NULL);
		// break;
		goto IL_038e;
	}

IL_0374:
	{
		// instance.colorOverTrail = reader.Read<UnityEngine.ParticleSystem.MinMaxGradient>(ES3Type_MinMaxGradient.Instance);
		ES3Reader_t2780AF8AA61DA2A817115CEF8612AC0E494D03C9 * L_96 = ___reader0;
		IL2CPP_RUNTIME_CLASS_INIT(ES3Type_MinMaxGradient_t5DD353D60E95642AB39D1C97C6FD6DD1B067D3CF_il2cpp_TypeInfo_var);
		ES3Type_t8FBECB7AE75168648B9524E0C2A38DAD4555421D * L_97 = ((ES3Type_MinMaxGradient_t5DD353D60E95642AB39D1C97C6FD6DD1B067D3CF_StaticFields*)il2cpp_codegen_static_fields_for(ES3Type_MinMaxGradient_t5DD353D60E95642AB39D1C97C6FD6DD1B067D3CF_il2cpp_TypeInfo_var))->get_Instance_12();
		NullCheck((ES3Reader_t2780AF8AA61DA2A817115CEF8612AC0E494D03C9 *)L_96);
		MinMaxGradient_tF4530B26F29D9635D670A33B9EE581EAC48C12B7  L_98;
		L_98 = GenericVirtFuncInvoker1< MinMaxGradient_tF4530B26F29D9635D670A33B9EE581EAC48C12B7 , ES3Type_t8FBECB7AE75168648B9524E0C2A38DAD4555421D * >::Invoke(ES3Reader_Read_TisMinMaxGradient_tF4530B26F29D9635D670A33B9EE581EAC48C12B7_m6A3DD8CBBAC5D32B838B6C4399009AB8AA512ACC_RuntimeMethod_var, (ES3Reader_t2780AF8AA61DA2A817115CEF8612AC0E494D03C9 *)L_96, (ES3Type_t8FBECB7AE75168648B9524E0C2A38DAD4555421D *)L_97);
		TrailModule_set_colorOverTrail_m8440C6574C8310292B93D70EA4FE3EE8C40DF8DB((TrailModule_t95D15372971E64A1977B7587ABAA87B1A31EF5C8 *)(TrailModule_t95D15372971E64A1977B7587ABAA87B1A31EF5C8 *)(&V_0), (MinMaxGradient_tF4530B26F29D9635D670A33B9EE581EAC48C12B7 )L_98, /*hidden argument*/NULL);
		// break;
		goto IL_038e;
	}

IL_0388:
	{
		// reader.Skip();
		ES3Reader_t2780AF8AA61DA2A817115CEF8612AC0E494D03C9 * L_99 = ___reader0;
		NullCheck((ES3Reader_t2780AF8AA61DA2A817115CEF8612AC0E494D03C9 *)L_99);
		VirtActionInvoker0::Invoke(41 /* System.Void ES3Reader::Skip() */, (ES3Reader_t2780AF8AA61DA2A817115CEF8612AC0E494D03C9 *)L_99);
	}

IL_038e:
	{
		// while((propertyName = reader.ReadPropertyName()) != null)
		ES3Reader_t2780AF8AA61DA2A817115CEF8612AC0E494D03C9 * L_100 = ___reader0;
		NullCheck((ES3Reader_t2780AF8AA61DA2A817115CEF8612AC0E494D03C9 *)L_100);
		String_t* L_101;
		L_101 = VirtFuncInvoker0< String_t* >::Invoke(21 /* System.String ES3Reader::ReadPropertyName() */, (ES3Reader_t2780AF8AA61DA2A817115CEF8612AC0E494D03C9 *)L_100);
		String_t* L_102 = (String_t*)L_101;
		V_1 = (String_t*)L_102;
		if (L_102)
		{
			goto IL_000c;
		}
	}
	{
		// }
		return;
	}
}
// System.Void ES3Types.ES3Type_TrailModule::ReadInto<UnityEngine.ParticleSystem/SizeOverLifetimeModule>(ES3Reader,System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ES3Type_TrailModule_ReadInto_TisSizeOverLifetimeModule_t0EF80B7F6333637F781C2A0008F6DADBEA0B45BD_m31F76224112F19B867F5FF4FF158D43D5F34EC7A_gshared (ES3Type_TrailModule_tC773F73EC0443516DD128FF2B5AE010809742462 * __this, ES3Reader_t2780AF8AA61DA2A817115CEF8612AC0E494D03C9 * ___reader0, RuntimeObject * ___obj1, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ES3Reader_Read_TisBoolean_t07D1E3F34E4813023D64F584DFF7B34C9D922F37_mC6D1B158268FF9B97822FF9F5B37FB1723FEDA22_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ES3Reader_Read_TisMinMaxCurve_tF036239442AB2D438B1EDABEBC785426871084CD_mD285150CBFB52440643BBECB5ADF4EE8DE940535_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ES3Reader_Read_TisMinMaxGradient_tF4530B26F29D9635D670A33B9EE581EAC48C12B7_m6A3DD8CBBAC5D32B838B6C4399009AB8AA512ACC_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ES3Reader_Read_TisParticleSystemTrailTextureMode_tF3259187CA4D0A61EDB3A40E63CBF6C42641CE9F_m055DB1212E8BC34F385DF7D302F16241554E9730_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ES3Reader_Read_TisSingle_tE07797BA3C98D4CA9B5A19413C19A76688AB899E_m4A0416374498BDA042B8EB21E49B72326D6CE5F4_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ES3Type_MinMaxCurve_tC5342BF0F8735B85CB5E16FDD4C6FACC8AFAD3B7_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ES3Type_MinMaxGradient_t5DD353D60E95642AB39D1C97C6FD6DD1B067D3CF_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ES3Type_bool_t8F309F7B9CC735FF1DEE68081B6E3CAB367745F4_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ES3Type_float_tF86B773C86731BD9AD79448B860BBB178FE77644_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&TrailModule_t95D15372971E64A1977B7587ABAA87B1A31EF5C8_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral1D87A56AE67B2CD49CAE6E942C2FB7AD98925C00);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral354281948B6269615E32D856CF85B6F456724DAA);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral4221314F268D184F46688D45C85446821F1F1BC3);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral47C47DD09640803AD8016748EAE1F04DD1D41119);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral5C86338F177203D001C41D9C348A83D1338CC7D0);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral60126327537B7B8E6EE33C43FE0C5CA8BCC3A06A);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral87F70660D62DE5FC257FBADE9DA4EC9188597DE5);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralA967787586EC9E5A17A9C55E2002AB73A5E21A0A);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralADAEB0839588196B349BDB6CF33AFA3E0736360B);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralBE2893848F9FC647C2288DA6581A1522E9695182);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralBF540D6548854CC21630064FBA5390C9409C86F0);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralC580B374AA991574F91DFC86C068E7FAD661A3A4);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralE049DB547285CFCE1CB9A95934B6B6DCE2D219EC);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralF9D225733E1D10F9344C755C4A9C0870CD1DE97B);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralFE5F89F63E2381500F62A7CBD6954563BE44562F);
		s_Il2CppMethodInitialized = true;
	}
	TrailModule_t95D15372971E64A1977B7587ABAA87B1A31EF5C8  V_0;
	memset((&V_0), 0, sizeof(V_0));
	String_t* V_1 = NULL;
	uint32_t V_2 = 0;
	{
		// var instance = (UnityEngine.ParticleSystem.TrailModule)obj;
		RuntimeObject * L_0 = ___obj1;
		V_0 = (TrailModule_t95D15372971E64A1977B7587ABAA87B1A31EF5C8 )((*(TrailModule_t95D15372971E64A1977B7587ABAA87B1A31EF5C8 *)((TrailModule_t95D15372971E64A1977B7587ABAA87B1A31EF5C8 *)UnBox(L_0, TrailModule_t95D15372971E64A1977B7587ABAA87B1A31EF5C8_il2cpp_TypeInfo_var))));
		goto IL_038e;
	}

IL_000c:
	{
		String_t* L_1 = V_1;
		if (!L_1)
		{
			goto IL_0388;
		}
	}
	{
		String_t* L_2 = V_1;
		uint32_t L_3;
		L_3 = U3CPrivateImplementationDetailsU3E_ComputeStringHash_m3ADC1F612F9EE3DD518E6F0023A0DE0EE2B120A7((String_t*)L_2, /*hidden argument*/NULL);
		V_2 = (uint32_t)L_3;
		uint32_t L_4 = V_2;
		if ((!(((uint32_t)L_4) <= ((uint32_t)((int32_t)1376955374)))))
		{
			goto IL_008d;
		}
	}
	{
		uint32_t L_5 = V_2;
		if ((!(((uint32_t)L_5) <= ((uint32_t)((int32_t)494095910)))))
		{
			goto IL_004f;
		}
	}
	{
		uint32_t L_6 = V_2;
		if ((((int32_t)L_6) == ((int32_t)((int32_t)49525662))))
		{
			goto IL_010e;
		}
	}
	{
		uint32_t L_7 = V_2;
		if ((((int32_t)L_7) == ((int32_t)((int32_t)341298456))))
		{
			goto IL_021f;
		}
	}
	{
		uint32_t L_8 = V_2;
		if ((((int32_t)L_8) == ((int32_t)((int32_t)494095910))))
		{
			goto IL_0234;
		}
	}
	{
		goto IL_0388;
	}

IL_004f:
	{
		uint32_t L_9 = V_2;
		if ((!(((uint32_t)L_9) <= ((uint32_t)((int32_t)973733911)))))
		{
			goto IL_0072;
		}
	}
	{
		uint32_t L_10 = V_2;
		if ((((int32_t)L_10) == ((int32_t)((int32_t)559929418))))
		{
			goto IL_01b6;
		}
	}
	{
		uint32_t L_11 = V_2;
		if ((((int32_t)L_11) == ((int32_t)((int32_t)973733911))))
		{
			goto IL_0177;
		}
	}
	{
		goto IL_0388;
	}

IL_0072:
	{
		uint32_t L_12 = V_2;
		if ((((int32_t)L_12) == ((int32_t)((int32_t)1024708593))))
		{
			goto IL_014d;
		}
	}
	{
		uint32_t L_13 = V_2;
		if ((((int32_t)L_13) == ((int32_t)((int32_t)1376955374))))
		{
			goto IL_0138;
		}
	}
	{
		goto IL_0388;
	}

IL_008d:
	{
		uint32_t L_14 = V_2;
		if ((!(((uint32_t)L_14) <= ((uint32_t)((int32_t)-2100707162)))))
		{
			goto IL_00d3;
		}
	}
	{
		uint32_t L_15 = V_2;
		if ((!(((uint32_t)L_15) <= ((uint32_t)((int32_t)1975189197)))))
		{
			goto IL_00b8;
		}
	}
	{
		uint32_t L_16 = V_2;
		if ((((int32_t)L_16) == ((int32_t)((int32_t)1546474083))))
		{
			goto IL_020a;
		}
	}
	{
		uint32_t L_17 = V_2;
		if ((((int32_t)L_17) == ((int32_t)((int32_t)1975189197))))
		{
			goto IL_01cb;
		}
	}
	{
		goto IL_0388;
	}

IL_00b8:
	{
		uint32_t L_18 = V_2;
		if ((((int32_t)L_18) == ((int32_t)((int32_t)2053023684))))
		{
			goto IL_01a1;
		}
	}
	{
		uint32_t L_19 = V_2;
		if ((((int32_t)L_19) == ((int32_t)((int32_t)-2100707162))))
		{
			goto IL_0162;
		}
	}
	{
		goto IL_0388;
	}

IL_00d3:
	{
		uint32_t L_20 = V_2;
		if ((!(((uint32_t)L_20) <= ((uint32_t)((int32_t)-1319579393)))))
		{
			goto IL_00f6;
		}
	}
	{
		uint32_t L_21 = V_2;
		if ((((int32_t)L_21) == ((int32_t)((int32_t)-1562862963))))
		{
			goto IL_01e0;
		}
	}
	{
		uint32_t L_22 = V_2;
		if ((((int32_t)L_22) == ((int32_t)((int32_t)-1319579393))))
		{
			goto IL_018c;
		}
	}
	{
		goto IL_0388;
	}

IL_00f6:
	{
		uint32_t L_23 = V_2;
		if ((((int32_t)L_23) == ((int32_t)((int32_t)-1055777148))))
		{
			goto IL_0123;
		}
	}
	{
		uint32_t L_24 = V_2;
		if ((((int32_t)L_24) == ((int32_t)((int32_t)-413379935))))
		{
			goto IL_01f5;
		}
	}
	{
		goto IL_0388;
	}

IL_010e:
	{
		String_t* L_25 = V_1;
		bool L_26;
		L_26 = String_op_Equality_m50B3548E4AC232558190B0052877B290AA1D436A((String_t*)L_25, (String_t*)_stringLiteralF9D225733E1D10F9344C755C4A9C0870CD1DE97B, /*hidden argument*/NULL);
		if (L_26)
		{
			goto IL_0249;
		}
	}
	{
		goto IL_0388;
	}

IL_0123:
	{
		String_t* L_27 = V_1;
		bool L_28;
		L_28 = String_op_Equality_m50B3548E4AC232558190B0052877B290AA1D436A((String_t*)L_27, (String_t*)_stringLiteral60126327537B7B8E6EE33C43FE0C5CA8BCC3A06A, /*hidden argument*/NULL);
		if (L_28)
		{
			goto IL_0260;
		}
	}
	{
		goto IL_0388;
	}

IL_0138:
	{
		String_t* L_29 = V_1;
		bool L_30;
		L_30 = String_op_Equality_m50B3548E4AC232558190B0052877B290AA1D436A((String_t*)L_29, (String_t*)_stringLiteralBE2893848F9FC647C2288DA6581A1522E9695182, /*hidden argument*/NULL);
		if (L_30)
		{
			goto IL_0277;
		}
	}
	{
		goto IL_0388;
	}

IL_014d:
	{
		String_t* L_31 = V_1;
		bool L_32;
		L_32 = String_op_Equality_m50B3548E4AC232558190B0052877B290AA1D436A((String_t*)L_31, (String_t*)_stringLiteral4221314F268D184F46688D45C85446821F1F1BC3, /*hidden argument*/NULL);
		if (L_32)
		{
			goto IL_028e;
		}
	}
	{
		goto IL_0388;
	}

IL_0162:
	{
		String_t* L_33 = V_1;
		bool L_34;
		L_34 = String_op_Equality_m50B3548E4AC232558190B0052877B290AA1D436A((String_t*)L_33, (String_t*)_stringLiteral5C86338F177203D001C41D9C348A83D1338CC7D0, /*hidden argument*/NULL);
		if (L_34)
		{
			goto IL_02a5;
		}
	}
	{
		goto IL_0388;
	}

IL_0177:
	{
		String_t* L_35 = V_1;
		bool L_36;
		L_36 = String_op_Equality_m50B3548E4AC232558190B0052877B290AA1D436A((String_t*)L_35, (String_t*)_stringLiteralFE5F89F63E2381500F62A7CBD6954563BE44562F, /*hidden argument*/NULL);
		if (L_36)
		{
			goto IL_02bc;
		}
	}
	{
		goto IL_0388;
	}

IL_018c:
	{
		String_t* L_37 = V_1;
		bool L_38;
		L_38 = String_op_Equality_m50B3548E4AC232558190B0052877B290AA1D436A((String_t*)L_37, (String_t*)_stringLiteral87F70660D62DE5FC257FBADE9DA4EC9188597DE5, /*hidden argument*/NULL);
		if (L_38)
		{
			goto IL_02ce;
		}
	}
	{
		goto IL_0388;
	}

IL_01a1:
	{
		String_t* L_39 = V_1;
		bool L_40;
		L_40 = String_op_Equality_m50B3548E4AC232558190B0052877B290AA1D436A((String_t*)L_39, (String_t*)_stringLiteral354281948B6269615E32D856CF85B6F456724DAA, /*hidden argument*/NULL);
		if (L_40)
		{
			goto IL_02e5;
		}
	}
	{
		goto IL_0388;
	}

IL_01b6:
	{
		String_t* L_41 = V_1;
		bool L_42;
		L_42 = String_op_Equality_m50B3548E4AC232558190B0052877B290AA1D436A((String_t*)L_41, (String_t*)_stringLiteralADAEB0839588196B349BDB6CF33AFA3E0736360B, /*hidden argument*/NULL);
		if (L_42)
		{
			goto IL_02fc;
		}
	}
	{
		goto IL_0388;
	}

IL_01cb:
	{
		String_t* L_43 = V_1;
		bool L_44;
		L_44 = String_op_Equality_m50B3548E4AC232558190B0052877B290AA1D436A((String_t*)L_43, (String_t*)_stringLiteralC580B374AA991574F91DFC86C068E7FAD661A3A4, /*hidden argument*/NULL);
		if (L_44)
		{
			goto IL_0310;
		}
	}
	{
		goto IL_0388;
	}

IL_01e0:
	{
		String_t* L_45 = V_1;
		bool L_46;
		L_46 = String_op_Equality_m50B3548E4AC232558190B0052877B290AA1D436A((String_t*)L_45, (String_t*)_stringLiteralE049DB547285CFCE1CB9A95934B6B6DCE2D219EC, /*hidden argument*/NULL);
		if (L_46)
		{
			goto IL_0324;
		}
	}
	{
		goto IL_0388;
	}

IL_01f5:
	{
		String_t* L_47 = V_1;
		bool L_48;
		L_48 = String_op_Equality_m50B3548E4AC232558190B0052877B290AA1D436A((String_t*)L_47, (String_t*)_stringLiteralBF540D6548854CC21630064FBA5390C9409C86F0, /*hidden argument*/NULL);
		if (L_48)
		{
			goto IL_0338;
		}
	}
	{
		goto IL_0388;
	}

IL_020a:
	{
		String_t* L_49 = V_1;
		bool L_50;
		L_50 = String_op_Equality_m50B3548E4AC232558190B0052877B290AA1D436A((String_t*)L_49, (String_t*)_stringLiteral1D87A56AE67B2CD49CAE6E942C2FB7AD98925C00, /*hidden argument*/NULL);
		if (L_50)
		{
			goto IL_034c;
		}
	}
	{
		goto IL_0388;
	}

IL_021f:
	{
		String_t* L_51 = V_1;
		bool L_52;
		L_52 = String_op_Equality_m50B3548E4AC232558190B0052877B290AA1D436A((String_t*)L_51, (String_t*)_stringLiteralA967787586EC9E5A17A9C55E2002AB73A5E21A0A, /*hidden argument*/NULL);
		if (L_52)
		{
			goto IL_0360;
		}
	}
	{
		goto IL_0388;
	}

IL_0234:
	{
		String_t* L_53 = V_1;
		bool L_54;
		L_54 = String_op_Equality_m50B3548E4AC232558190B0052877B290AA1D436A((String_t*)L_53, (String_t*)_stringLiteral47C47DD09640803AD8016748EAE1F04DD1D41119, /*hidden argument*/NULL);
		if (L_54)
		{
			goto IL_0374;
		}
	}
	{
		goto IL_0388;
	}

IL_0249:
	{
		// instance.enabled = reader.Read<System.Boolean>(ES3Type_bool.Instance);
		ES3Reader_t2780AF8AA61DA2A817115CEF8612AC0E494D03C9 * L_55 = ___reader0;
		IL2CPP_RUNTIME_CLASS_INIT(ES3Type_bool_t8F309F7B9CC735FF1DEE68081B6E3CAB367745F4_il2cpp_TypeInfo_var);
		ES3Type_t8FBECB7AE75168648B9524E0C2A38DAD4555421D * L_56 = ((ES3Type_bool_t8F309F7B9CC735FF1DEE68081B6E3CAB367745F4_StaticFields*)il2cpp_codegen_static_fields_for(ES3Type_bool_t8F309F7B9CC735FF1DEE68081B6E3CAB367745F4_il2cpp_TypeInfo_var))->get_Instance_12();
		NullCheck((ES3Reader_t2780AF8AA61DA2A817115CEF8612AC0E494D03C9 *)L_55);
		bool L_57;
		L_57 = GenericVirtFuncInvoker1< bool, ES3Type_t8FBECB7AE75168648B9524E0C2A38DAD4555421D * >::Invoke(ES3Reader_Read_TisBoolean_t07D1E3F34E4813023D64F584DFF7B34C9D922F37_mC6D1B158268FF9B97822FF9F5B37FB1723FEDA22_RuntimeMethod_var, (ES3Reader_t2780AF8AA61DA2A817115CEF8612AC0E494D03C9 *)L_55, (ES3Type_t8FBECB7AE75168648B9524E0C2A38DAD4555421D *)L_56);
		TrailModule_set_enabled_mFC8451DDDF40CCBB3E32A4B30A001115F6346894((TrailModule_t95D15372971E64A1977B7587ABAA87B1A31EF5C8 *)(TrailModule_t95D15372971E64A1977B7587ABAA87B1A31EF5C8 *)(&V_0), (bool)L_57, /*hidden argument*/NULL);
		// break;
		goto IL_038e;
	}

IL_0260:
	{
		// instance.ratio = reader.Read<System.Single>(ES3Type_float.Instance);
		ES3Reader_t2780AF8AA61DA2A817115CEF8612AC0E494D03C9 * L_58 = ___reader0;
		IL2CPP_RUNTIME_CLASS_INIT(ES3Type_float_tF86B773C86731BD9AD79448B860BBB178FE77644_il2cpp_TypeInfo_var);
		ES3Type_t8FBECB7AE75168648B9524E0C2A38DAD4555421D * L_59 = ((ES3Type_float_tF86B773C86731BD9AD79448B860BBB178FE77644_StaticFields*)il2cpp_codegen_static_fields_for(ES3Type_float_tF86B773C86731BD9AD79448B860BBB178FE77644_il2cpp_TypeInfo_var))->get_Instance_12();
		NullCheck((ES3Reader_t2780AF8AA61DA2A817115CEF8612AC0E494D03C9 *)L_58);
		float L_60;
		L_60 = GenericVirtFuncInvoker1< float, ES3Type_t8FBECB7AE75168648B9524E0C2A38DAD4555421D * >::Invoke(ES3Reader_Read_TisSingle_tE07797BA3C98D4CA9B5A19413C19A76688AB899E_m4A0416374498BDA042B8EB21E49B72326D6CE5F4_RuntimeMethod_var, (ES3Reader_t2780AF8AA61DA2A817115CEF8612AC0E494D03C9 *)L_58, (ES3Type_t8FBECB7AE75168648B9524E0C2A38DAD4555421D *)L_59);
		TrailModule_set_ratio_m34E63B34E7B0E8D037AD45532B2E2D5BD0750189((TrailModule_t95D15372971E64A1977B7587ABAA87B1A31EF5C8 *)(TrailModule_t95D15372971E64A1977B7587ABAA87B1A31EF5C8 *)(&V_0), (float)L_60, /*hidden argument*/NULL);
		// break;
		goto IL_038e;
	}

IL_0277:
	{
		// instance.lifetime = reader.Read<UnityEngine.ParticleSystem.MinMaxCurve>(ES3Type_MinMaxCurve.Instance);
		ES3Reader_t2780AF8AA61DA2A817115CEF8612AC0E494D03C9 * L_61 = ___reader0;
		IL2CPP_RUNTIME_CLASS_INIT(ES3Type_MinMaxCurve_tC5342BF0F8735B85CB5E16FDD4C6FACC8AFAD3B7_il2cpp_TypeInfo_var);
		ES3Type_t8FBECB7AE75168648B9524E0C2A38DAD4555421D * L_62 = ((ES3Type_MinMaxCurve_tC5342BF0F8735B85CB5E16FDD4C6FACC8AFAD3B7_StaticFields*)il2cpp_codegen_static_fields_for(ES3Type_MinMaxCurve_tC5342BF0F8735B85CB5E16FDD4C6FACC8AFAD3B7_il2cpp_TypeInfo_var))->get_Instance_12();
		NullCheck((ES3Reader_t2780AF8AA61DA2A817115CEF8612AC0E494D03C9 *)L_61);
		MinMaxCurve_tF036239442AB2D438B1EDABEBC785426871084CD  L_63;
		L_63 = GenericVirtFuncInvoker1< MinMaxCurve_tF036239442AB2D438B1EDABEBC785426871084CD , ES3Type_t8FBECB7AE75168648B9524E0C2A38DAD4555421D * >::Invoke(ES3Reader_Read_TisMinMaxCurve_tF036239442AB2D438B1EDABEBC785426871084CD_mD285150CBFB52440643BBECB5ADF4EE8DE940535_RuntimeMethod_var, (ES3Reader_t2780AF8AA61DA2A817115CEF8612AC0E494D03C9 *)L_61, (ES3Type_t8FBECB7AE75168648B9524E0C2A38DAD4555421D *)L_62);
		TrailModule_set_lifetime_m57C898C42B9F18F5A0E88AAA7B10276CC158C39D((TrailModule_t95D15372971E64A1977B7587ABAA87B1A31EF5C8 *)(TrailModule_t95D15372971E64A1977B7587ABAA87B1A31EF5C8 *)(&V_0), (MinMaxCurve_tF036239442AB2D438B1EDABEBC785426871084CD )L_63, /*hidden argument*/NULL);
		// break;
		goto IL_038e;
	}

IL_028e:
	{
		// instance.lifetimeMultiplier = reader.Read<System.Single>(ES3Type_float.Instance);
		ES3Reader_t2780AF8AA61DA2A817115CEF8612AC0E494D03C9 * L_64 = ___reader0;
		IL2CPP_RUNTIME_CLASS_INIT(ES3Type_float_tF86B773C86731BD9AD79448B860BBB178FE77644_il2cpp_TypeInfo_var);
		ES3Type_t8FBECB7AE75168648B9524E0C2A38DAD4555421D * L_65 = ((ES3Type_float_tF86B773C86731BD9AD79448B860BBB178FE77644_StaticFields*)il2cpp_codegen_static_fields_for(ES3Type_float_tF86B773C86731BD9AD79448B860BBB178FE77644_il2cpp_TypeInfo_var))->get_Instance_12();
		NullCheck((ES3Reader_t2780AF8AA61DA2A817115CEF8612AC0E494D03C9 *)L_64);
		float L_66;
		L_66 = GenericVirtFuncInvoker1< float, ES3Type_t8FBECB7AE75168648B9524E0C2A38DAD4555421D * >::Invoke(ES3Reader_Read_TisSingle_tE07797BA3C98D4CA9B5A19413C19A76688AB899E_m4A0416374498BDA042B8EB21E49B72326D6CE5F4_RuntimeMethod_var, (ES3Reader_t2780AF8AA61DA2A817115CEF8612AC0E494D03C9 *)L_64, (ES3Type_t8FBECB7AE75168648B9524E0C2A38DAD4555421D *)L_65);
		TrailModule_set_lifetimeMultiplier_m23F95D65EE8C82152AE1CF2E41531EC2789A866B((TrailModule_t95D15372971E64A1977B7587ABAA87B1A31EF5C8 *)(TrailModule_t95D15372971E64A1977B7587ABAA87B1A31EF5C8 *)(&V_0), (float)L_66, /*hidden argument*/NULL);
		// break;
		goto IL_038e;
	}

IL_02a5:
	{
		// instance.minVertexDistance = reader.Read<System.Single>(ES3Type_float.Instance);
		ES3Reader_t2780AF8AA61DA2A817115CEF8612AC0E494D03C9 * L_67 = ___reader0;
		IL2CPP_RUNTIME_CLASS_INIT(ES3Type_float_tF86B773C86731BD9AD79448B860BBB178FE77644_il2cpp_TypeInfo_var);
		ES3Type_t8FBECB7AE75168648B9524E0C2A38DAD4555421D * L_68 = ((ES3Type_float_tF86B773C86731BD9AD79448B860BBB178FE77644_StaticFields*)il2cpp_codegen_static_fields_for(ES3Type_float_tF86B773C86731BD9AD79448B860BBB178FE77644_il2cpp_TypeInfo_var))->get_Instance_12();
		NullCheck((ES3Reader_t2780AF8AA61DA2A817115CEF8612AC0E494D03C9 *)L_67);
		float L_69;
		L_69 = GenericVirtFuncInvoker1< float, ES3Type_t8FBECB7AE75168648B9524E0C2A38DAD4555421D * >::Invoke(ES3Reader_Read_TisSingle_tE07797BA3C98D4CA9B5A19413C19A76688AB899E_m4A0416374498BDA042B8EB21E49B72326D6CE5F4_RuntimeMethod_var, (ES3Reader_t2780AF8AA61DA2A817115CEF8612AC0E494D03C9 *)L_67, (ES3Type_t8FBECB7AE75168648B9524E0C2A38DAD4555421D *)L_68);
		TrailModule_set_minVertexDistance_mF7C29F88FBF540CE4987F4CF9B141C624808FBC5((TrailModule_t95D15372971E64A1977B7587ABAA87B1A31EF5C8 *)(TrailModule_t95D15372971E64A1977B7587ABAA87B1A31EF5C8 *)(&V_0), (float)L_69, /*hidden argument*/NULL);
		// break;
		goto IL_038e;
	}

IL_02bc:
	{
		// instance.textureMode = reader.Read<UnityEngine.ParticleSystemTrailTextureMode>();
		ES3Reader_t2780AF8AA61DA2A817115CEF8612AC0E494D03C9 * L_70 = ___reader0;
		NullCheck((ES3Reader_t2780AF8AA61DA2A817115CEF8612AC0E494D03C9 *)L_70);
		int32_t L_71;
		L_71 = GenericVirtFuncInvoker0< int32_t >::Invoke(ES3Reader_Read_TisParticleSystemTrailTextureMode_tF3259187CA4D0A61EDB3A40E63CBF6C42641CE9F_m055DB1212E8BC34F385DF7D302F16241554E9730_RuntimeMethod_var, (ES3Reader_t2780AF8AA61DA2A817115CEF8612AC0E494D03C9 *)L_70);
		TrailModule_set_textureMode_mC1F8AE0D2965FC47BDBFF4F53E0673D5FB58CF28((TrailModule_t95D15372971E64A1977B7587ABAA87B1A31EF5C8 *)(TrailModule_t95D15372971E64A1977B7587ABAA87B1A31EF5C8 *)(&V_0), (int32_t)L_71, /*hidden argument*/NULL);
		// break;
		goto IL_038e;
	}

IL_02ce:
	{
		// instance.worldSpace = reader.Read<System.Boolean>(ES3Type_bool.Instance);
		ES3Reader_t2780AF8AA61DA2A817115CEF8612AC0E494D03C9 * L_72 = ___reader0;
		IL2CPP_RUNTIME_CLASS_INIT(ES3Type_bool_t8F309F7B9CC735FF1DEE68081B6E3CAB367745F4_il2cpp_TypeInfo_var);
		ES3Type_t8FBECB7AE75168648B9524E0C2A38DAD4555421D * L_73 = ((ES3Type_bool_t8F309F7B9CC735FF1DEE68081B6E3CAB367745F4_StaticFields*)il2cpp_codegen_static_fields_for(ES3Type_bool_t8F309F7B9CC735FF1DEE68081B6E3CAB367745F4_il2cpp_TypeInfo_var))->get_Instance_12();
		NullCheck((ES3Reader_t2780AF8AA61DA2A817115CEF8612AC0E494D03C9 *)L_72);
		bool L_74;
		L_74 = GenericVirtFuncInvoker1< bool, ES3Type_t8FBECB7AE75168648B9524E0C2A38DAD4555421D * >::Invoke(ES3Reader_Read_TisBoolean_t07D1E3F34E4813023D64F584DFF7B34C9D922F37_mC6D1B158268FF9B97822FF9F5B37FB1723FEDA22_RuntimeMethod_var, (ES3Reader_t2780AF8AA61DA2A817115CEF8612AC0E494D03C9 *)L_72, (ES3Type_t8FBECB7AE75168648B9524E0C2A38DAD4555421D *)L_73);
		TrailModule_set_worldSpace_m42A63AF4A96F24A621A29A0F35240195F0E56B1A((TrailModule_t95D15372971E64A1977B7587ABAA87B1A31EF5C8 *)(TrailModule_t95D15372971E64A1977B7587ABAA87B1A31EF5C8 *)(&V_0), (bool)L_74, /*hidden argument*/NULL);
		// break;
		goto IL_038e;
	}

IL_02e5:
	{
		// instance.dieWithParticles = reader.Read<System.Boolean>(ES3Type_bool.Instance);
		ES3Reader_t2780AF8AA61DA2A817115CEF8612AC0E494D03C9 * L_75 = ___reader0;
		IL2CPP_RUNTIME_CLASS_INIT(ES3Type_bool_t8F309F7B9CC735FF1DEE68081B6E3CAB367745F4_il2cpp_TypeInfo_var);
		ES3Type_t8FBECB7AE75168648B9524E0C2A38DAD4555421D * L_76 = ((ES3Type_bool_t8F309F7B9CC735FF1DEE68081B6E3CAB367745F4_StaticFields*)il2cpp_codegen_static_fields_for(ES3Type_bool_t8F309F7B9CC735FF1DEE68081B6E3CAB367745F4_il2cpp_TypeInfo_var))->get_Instance_12();
		NullCheck((ES3Reader_t2780AF8AA61DA2A817115CEF8612AC0E494D03C9 *)L_75);
		bool L_77;
		L_77 = GenericVirtFuncInvoker1< bool, ES3Type_t8FBECB7AE75168648B9524E0C2A38DAD4555421D * >::Invoke(ES3Reader_Read_TisBoolean_t07D1E3F34E4813023D64F584DFF7B34C9D922F37_mC6D1B158268FF9B97822FF9F5B37FB1723FEDA22_RuntimeMethod_var, (ES3Reader_t2780AF8AA61DA2A817115CEF8612AC0E494D03C9 *)L_75, (ES3Type_t8FBECB7AE75168648B9524E0C2A38DAD4555421D *)L_76);
		TrailModule_set_dieWithParticles_mB7C4E8DC2F908FDF6D57A77B54B821E360D8DA99((TrailModule_t95D15372971E64A1977B7587ABAA87B1A31EF5C8 *)(TrailModule_t95D15372971E64A1977B7587ABAA87B1A31EF5C8 *)(&V_0), (bool)L_77, /*hidden argument*/NULL);
		// break;
		goto IL_038e;
	}

IL_02fc:
	{
		// instance.sizeAffectsWidth = reader.Read<System.Boolean>(ES3Type_bool.Instance);
		ES3Reader_t2780AF8AA61DA2A817115CEF8612AC0E494D03C9 * L_78 = ___reader0;
		IL2CPP_RUNTIME_CLASS_INIT(ES3Type_bool_t8F309F7B9CC735FF1DEE68081B6E3CAB367745F4_il2cpp_TypeInfo_var);
		ES3Type_t8FBECB7AE75168648B9524E0C2A38DAD4555421D * L_79 = ((ES3Type_bool_t8F309F7B9CC735FF1DEE68081B6E3CAB367745F4_StaticFields*)il2cpp_codegen_static_fields_for(ES3Type_bool_t8F309F7B9CC735FF1DEE68081B6E3CAB367745F4_il2cpp_TypeInfo_var))->get_Instance_12();
		NullCheck((ES3Reader_t2780AF8AA61DA2A817115CEF8612AC0E494D03C9 *)L_78);
		bool L_80;
		L_80 = GenericVirtFuncInvoker1< bool, ES3Type_t8FBECB7AE75168648B9524E0C2A38DAD4555421D * >::Invoke(ES3Reader_Read_TisBoolean_t07D1E3F34E4813023D64F584DFF7B34C9D922F37_mC6D1B158268FF9B97822FF9F5B37FB1723FEDA22_RuntimeMethod_var, (ES3Reader_t2780AF8AA61DA2A817115CEF8612AC0E494D03C9 *)L_78, (ES3Type_t8FBECB7AE75168648B9524E0C2A38DAD4555421D *)L_79);
		TrailModule_set_sizeAffectsWidth_m3517856E39080DA69B447499C8846D2491B0ABF0((TrailModule_t95D15372971E64A1977B7587ABAA87B1A31EF5C8 *)(TrailModule_t95D15372971E64A1977B7587ABAA87B1A31EF5C8 *)(&V_0), (bool)L_80, /*hidden argument*/NULL);
		// break;
		goto IL_038e;
	}

IL_0310:
	{
		// instance.sizeAffectsLifetime = reader.Read<System.Boolean>(ES3Type_bool.Instance);
		ES3Reader_t2780AF8AA61DA2A817115CEF8612AC0E494D03C9 * L_81 = ___reader0;
		IL2CPP_RUNTIME_CLASS_INIT(ES3Type_bool_t8F309F7B9CC735FF1DEE68081B6E3CAB367745F4_il2cpp_TypeInfo_var);
		ES3Type_t8FBECB7AE75168648B9524E0C2A38DAD4555421D * L_82 = ((ES3Type_bool_t8F309F7B9CC735FF1DEE68081B6E3CAB367745F4_StaticFields*)il2cpp_codegen_static_fields_for(ES3Type_bool_t8F309F7B9CC735FF1DEE68081B6E3CAB367745F4_il2cpp_TypeInfo_var))->get_Instance_12();
		NullCheck((ES3Reader_t2780AF8AA61DA2A817115CEF8612AC0E494D03C9 *)L_81);
		bool L_83;
		L_83 = GenericVirtFuncInvoker1< bool, ES3Type_t8FBECB7AE75168648B9524E0C2A38DAD4555421D * >::Invoke(ES3Reader_Read_TisBoolean_t07D1E3F34E4813023D64F584DFF7B34C9D922F37_mC6D1B158268FF9B97822FF9F5B37FB1723FEDA22_RuntimeMethod_var, (ES3Reader_t2780AF8AA61DA2A817115CEF8612AC0E494D03C9 *)L_81, (ES3Type_t8FBECB7AE75168648B9524E0C2A38DAD4555421D *)L_82);
		TrailModule_set_sizeAffectsLifetime_m98BF4A6594193D824B52D88371CF963ACBA388FD((TrailModule_t95D15372971E64A1977B7587ABAA87B1A31EF5C8 *)(TrailModule_t95D15372971E64A1977B7587ABAA87B1A31EF5C8 *)(&V_0), (bool)L_83, /*hidden argument*/NULL);
		// break;
		goto IL_038e;
	}

IL_0324:
	{
		// instance.inheritParticleColor = reader.Read<System.Boolean>(ES3Type_bool.Instance);
		ES3Reader_t2780AF8AA61DA2A817115CEF8612AC0E494D03C9 * L_84 = ___reader0;
		IL2CPP_RUNTIME_CLASS_INIT(ES3Type_bool_t8F309F7B9CC735FF1DEE68081B6E3CAB367745F4_il2cpp_TypeInfo_var);
		ES3Type_t8FBECB7AE75168648B9524E0C2A38DAD4555421D * L_85 = ((ES3Type_bool_t8F309F7B9CC735FF1DEE68081B6E3CAB367745F4_StaticFields*)il2cpp_codegen_static_fields_for(ES3Type_bool_t8F309F7B9CC735FF1DEE68081B6E3CAB367745F4_il2cpp_TypeInfo_var))->get_Instance_12();
		NullCheck((ES3Reader_t2780AF8AA61DA2A817115CEF8612AC0E494D03C9 *)L_84);
		bool L_86;
		L_86 = GenericVirtFuncInvoker1< bool, ES3Type_t8FBECB7AE75168648B9524E0C2A38DAD4555421D * >::Invoke(ES3Reader_Read_TisBoolean_t07D1E3F34E4813023D64F584DFF7B34C9D922F37_mC6D1B158268FF9B97822FF9F5B37FB1723FEDA22_RuntimeMethod_var, (ES3Reader_t2780AF8AA61DA2A817115CEF8612AC0E494D03C9 *)L_84, (ES3Type_t8FBECB7AE75168648B9524E0C2A38DAD4555421D *)L_85);
		TrailModule_set_inheritParticleColor_mCD83E87B5E00F2BFFBE08AD2D1D68606283A4FEE((TrailModule_t95D15372971E64A1977B7587ABAA87B1A31EF5C8 *)(TrailModule_t95D15372971E64A1977B7587ABAA87B1A31EF5C8 *)(&V_0), (bool)L_86, /*hidden argument*/NULL);
		// break;
		goto IL_038e;
	}

IL_0338:
	{
		// instance.colorOverLifetime = reader.Read<UnityEngine.ParticleSystem.MinMaxGradient>(ES3Type_MinMaxGradient.Instance);
		ES3Reader_t2780AF8AA61DA2A817115CEF8612AC0E494D03C9 * L_87 = ___reader0;
		IL2CPP_RUNTIME_CLASS_INIT(ES3Type_MinMaxGradient_t5DD353D60E95642AB39D1C97C6FD6DD1B067D3CF_il2cpp_TypeInfo_var);
		ES3Type_t8FBECB7AE75168648B9524E0C2A38DAD4555421D * L_88 = ((ES3Type_MinMaxGradient_t5DD353D60E95642AB39D1C97C6FD6DD1B067D3CF_StaticFields*)il2cpp_codegen_static_fields_for(ES3Type_MinMaxGradient_t5DD353D60E95642AB39D1C97C6FD6DD1B067D3CF_il2cpp_TypeInfo_var))->get_Instance_12();
		NullCheck((ES3Reader_t2780AF8AA61DA2A817115CEF8612AC0E494D03C9 *)L_87);
		MinMaxGradient_tF4530B26F29D9635D670A33B9EE581EAC48C12B7  L_89;
		L_89 = GenericVirtFuncInvoker1< MinMaxGradient_tF4530B26F29D9635D670A33B9EE581EAC48C12B7 , ES3Type_t8FBECB7AE75168648B9524E0C2A38DAD4555421D * >::Invoke(ES3Reader_Read_TisMinMaxGradient_tF4530B26F29D9635D670A33B9EE581EAC48C12B7_m6A3DD8CBBAC5D32B838B6C4399009AB8AA512ACC_RuntimeMethod_var, (ES3Reader_t2780AF8AA61DA2A817115CEF8612AC0E494D03C9 *)L_87, (ES3Type_t8FBECB7AE75168648B9524E0C2A38DAD4555421D *)L_88);
		TrailModule_set_colorOverLifetime_mCD56BD4B75D3A3947069BA1B93FEC78AAE08DF27((TrailModule_t95D15372971E64A1977B7587ABAA87B1A31EF5C8 *)(TrailModule_t95D15372971E64A1977B7587ABAA87B1A31EF5C8 *)(&V_0), (MinMaxGradient_tF4530B26F29D9635D670A33B9EE581EAC48C12B7 )L_89, /*hidden argument*/NULL);
		// break;
		goto IL_038e;
	}

IL_034c:
	{
		// instance.widthOverTrail = reader.Read<UnityEngine.ParticleSystem.MinMaxCurve>(ES3Type_MinMaxCurve.Instance);
		ES3Reader_t2780AF8AA61DA2A817115CEF8612AC0E494D03C9 * L_90 = ___reader0;
		IL2CPP_RUNTIME_CLASS_INIT(ES3Type_MinMaxCurve_tC5342BF0F8735B85CB5E16FDD4C6FACC8AFAD3B7_il2cpp_TypeInfo_var);
		ES3Type_t8FBECB7AE75168648B9524E0C2A38DAD4555421D * L_91 = ((ES3Type_MinMaxCurve_tC5342BF0F8735B85CB5E16FDD4C6FACC8AFAD3B7_StaticFields*)il2cpp_codegen_static_fields_for(ES3Type_MinMaxCurve_tC5342BF0F8735B85CB5E16FDD4C6FACC8AFAD3B7_il2cpp_TypeInfo_var))->get_Instance_12();
		NullCheck((ES3Reader_t2780AF8AA61DA2A817115CEF8612AC0E494D03C9 *)L_90);
		MinMaxCurve_tF036239442AB2D438B1EDABEBC785426871084CD  L_92;
		L_92 = GenericVirtFuncInvoker1< MinMaxCurve_tF036239442AB2D438B1EDABEBC785426871084CD , ES3Type_t8FBECB7AE75168648B9524E0C2A38DAD4555421D * >::Invoke(ES3Reader_Read_TisMinMaxCurve_tF036239442AB2D438B1EDABEBC785426871084CD_mD285150CBFB52440643BBECB5ADF4EE8DE940535_RuntimeMethod_var, (ES3Reader_t2780AF8AA61DA2A817115CEF8612AC0E494D03C9 *)L_90, (ES3Type_t8FBECB7AE75168648B9524E0C2A38DAD4555421D *)L_91);
		TrailModule_set_widthOverTrail_m6C0A896EBFDED7CE46344B3A0B04212934F30DE1((TrailModule_t95D15372971E64A1977B7587ABAA87B1A31EF5C8 *)(TrailModule_t95D15372971E64A1977B7587ABAA87B1A31EF5C8 *)(&V_0), (MinMaxCurve_tF036239442AB2D438B1EDABEBC785426871084CD )L_92, /*hidden argument*/NULL);
		// break;
		goto IL_038e;
	}

IL_0360:
	{
		// instance.widthOverTrailMultiplier = reader.Read<System.Single>(ES3Type_float.Instance);
		ES3Reader_t2780AF8AA61DA2A817115CEF8612AC0E494D03C9 * L_93 = ___reader0;
		IL2CPP_RUNTIME_CLASS_INIT(ES3Type_float_tF86B773C86731BD9AD79448B860BBB178FE77644_il2cpp_TypeInfo_var);
		ES3Type_t8FBECB7AE75168648B9524E0C2A38DAD4555421D * L_94 = ((ES3Type_float_tF86B773C86731BD9AD79448B860BBB178FE77644_StaticFields*)il2cpp_codegen_static_fields_for(ES3Type_float_tF86B773C86731BD9AD79448B860BBB178FE77644_il2cpp_TypeInfo_var))->get_Instance_12();
		NullCheck((ES3Reader_t2780AF8AA61DA2A817115CEF8612AC0E494D03C9 *)L_93);
		float L_95;
		L_95 = GenericVirtFuncInvoker1< float, ES3Type_t8FBECB7AE75168648B9524E0C2A38DAD4555421D * >::Invoke(ES3Reader_Read_TisSingle_tE07797BA3C98D4CA9B5A19413C19A76688AB899E_m4A0416374498BDA042B8EB21E49B72326D6CE5F4_RuntimeMethod_var, (ES3Reader_t2780AF8AA61DA2A817115CEF8612AC0E494D03C9 *)L_93, (ES3Type_t8FBECB7AE75168648B9524E0C2A38DAD4555421D *)L_94);
		TrailModule_set_widthOverTrailMultiplier_m6A7EA2856CF30B710CCB528EA3EBFD1799C19BD4((TrailModule_t95D15372971E64A1977B7587ABAA87B1A31EF5C8 *)(TrailModule_t95D15372971E64A1977B7587ABAA87B1A31EF5C8 *)(&V_0), (float)L_95, /*hidden argument*/NULL);
		// break;
		goto IL_038e;
	}

IL_0374:
	{
		// instance.colorOverTrail = reader.Read<UnityEngine.ParticleSystem.MinMaxGradient>(ES3Type_MinMaxGradient.Instance);
		ES3Reader_t2780AF8AA61DA2A817115CEF8612AC0E494D03C9 * L_96 = ___reader0;
		IL2CPP_RUNTIME_CLASS_INIT(ES3Type_MinMaxGradient_t5DD353D60E95642AB39D1C97C6FD6DD1B067D3CF_il2cpp_TypeInfo_var);
		ES3Type_t8FBECB7AE75168648B9524E0C2A38DAD4555421D * L_97 = ((ES3Type_MinMaxGradient_t5DD353D60E95642AB39D1C97C6FD6DD1B067D3CF_StaticFields*)il2cpp_codegen_static_fields_for(ES3Type_MinMaxGradient_t5DD353D60E95642AB39D1C97C6FD6DD1B067D3CF_il2cpp_TypeInfo_var))->get_Instance_12();
		NullCheck((ES3Reader_t2780AF8AA61DA2A817115CEF8612AC0E494D03C9 *)L_96);
		MinMaxGradient_tF4530B26F29D9635D670A33B9EE581EAC48C12B7  L_98;
		L_98 = GenericVirtFuncInvoker1< MinMaxGradient_tF4530B26F29D9635D670A33B9EE581EAC48C12B7 , ES3Type_t8FBECB7AE75168648B9524E0C2A38DAD4555421D * >::Invoke(ES3Reader_Read_TisMinMaxGradient_tF4530B26F29D9635D670A33B9EE581EAC48C12B7_m6A3DD8CBBAC5D32B838B6C4399009AB8AA512ACC_RuntimeMethod_var, (ES3Reader_t2780AF8AA61DA2A817115CEF8612AC0E494D03C9 *)L_96, (ES3Type_t8FBECB7AE75168648B9524E0C2A38DAD4555421D *)L_97);
		TrailModule_set_colorOverTrail_m8440C6574C8310292B93D70EA4FE3EE8C40DF8DB((TrailModule_t95D15372971E64A1977B7587ABAA87B1A31EF5C8 *)(TrailModule_t95D15372971E64A1977B7587ABAA87B1A31EF5C8 *)(&V_0), (MinMaxGradient_tF4530B26F29D9635D670A33B9EE581EAC48C12B7 )L_98, /*hidden argument*/NULL);
		// break;
		goto IL_038e;
	}

IL_0388:
	{
		// reader.Skip();
		ES3Reader_t2780AF8AA61DA2A817115CEF8612AC0E494D03C9 * L_99 = ___reader0;
		NullCheck((ES3Reader_t2780AF8AA61DA2A817115CEF8612AC0E494D03C9 *)L_99);
		VirtActionInvoker0::Invoke(41 /* System.Void ES3Reader::Skip() */, (ES3Reader_t2780AF8AA61DA2A817115CEF8612AC0E494D03C9 *)L_99);
	}

IL_038e:
	{
		// while((propertyName = reader.ReadPropertyName()) != null)
		ES3Reader_t2780AF8AA61DA2A817115CEF8612AC0E494D03C9 * L_100 = ___reader0;
		NullCheck((ES3Reader_t2780AF8AA61DA2A817115CEF8612AC0E494D03C9 *)L_100);
		String_t* L_101;
		L_101 = VirtFuncInvoker0< String_t* >::Invoke(21 /* System.String ES3Reader::ReadPropertyName() */, (ES3Reader_t2780AF8AA61DA2A817115CEF8612AC0E494D03C9 *)L_100);
		String_t* L_102 = (String_t*)L_101;
		V_1 = (String_t*)L_102;
		if (L_102)
		{
			goto IL_000c;
		}
	}
	{
		// }
		return;
	}
}
// System.Void ES3Types.ES3Type_TrailModule::ReadInto<UnityEngine.ParticleSystem/SubEmittersModule>(ES3Reader,System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ES3Type_TrailModule_ReadInto_TisSubEmittersModule_t0336A6F2B5D3339D93468AED015E2356FBE9E61C_mD248355E88F5FC71E2712B46FC6B39EEC7D48B98_gshared (ES3Type_TrailModule_tC773F73EC0443516DD128FF2B5AE010809742462 * __this, ES3Reader_t2780AF8AA61DA2A817115CEF8612AC0E494D03C9 * ___reader0, RuntimeObject * ___obj1, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ES3Reader_Read_TisBoolean_t07D1E3F34E4813023D64F584DFF7B34C9D922F37_mC6D1B158268FF9B97822FF9F5B37FB1723FEDA22_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ES3Reader_Read_TisMinMaxCurve_tF036239442AB2D438B1EDABEBC785426871084CD_mD285150CBFB52440643BBECB5ADF4EE8DE940535_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ES3Reader_Read_TisMinMaxGradient_tF4530B26F29D9635D670A33B9EE581EAC48C12B7_m6A3DD8CBBAC5D32B838B6C4399009AB8AA512ACC_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ES3Reader_Read_TisParticleSystemTrailTextureMode_tF3259187CA4D0A61EDB3A40E63CBF6C42641CE9F_m055DB1212E8BC34F385DF7D302F16241554E9730_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ES3Reader_Read_TisSingle_tE07797BA3C98D4CA9B5A19413C19A76688AB899E_m4A0416374498BDA042B8EB21E49B72326D6CE5F4_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ES3Type_MinMaxCurve_tC5342BF0F8735B85CB5E16FDD4C6FACC8AFAD3B7_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ES3Type_MinMaxGradient_t5DD353D60E95642AB39D1C97C6FD6DD1B067D3CF_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ES3Type_bool_t8F309F7B9CC735FF1DEE68081B6E3CAB367745F4_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ES3Type_float_tF86B773C86731BD9AD79448B860BBB178FE77644_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&TrailModule_t95D15372971E64A1977B7587ABAA87B1A31EF5C8_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral1D87A56AE67B2CD49CAE6E942C2FB7AD98925C00);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral354281948B6269615E32D856CF85B6F456724DAA);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral4221314F268D184F46688D45C85446821F1F1BC3);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral47C47DD09640803AD8016748EAE1F04DD1D41119);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral5C86338F177203D001C41D9C348A83D1338CC7D0);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral60126327537B7B8E6EE33C43FE0C5CA8BCC3A06A);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral87F70660D62DE5FC257FBADE9DA4EC9188597DE5);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralA967787586EC9E5A17A9C55E2002AB73A5E21A0A);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralADAEB0839588196B349BDB6CF33AFA3E0736360B);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralBE2893848F9FC647C2288DA6581A1522E9695182);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralBF540D6548854CC21630064FBA5390C9409C86F0);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralC580B374AA991574F91DFC86C068E7FAD661A3A4);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralE049DB547285CFCE1CB9A95934B6B6DCE2D219EC);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralF9D225733E1D10F9344C755C4A9C0870CD1DE97B);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralFE5F89F63E2381500F62A7CBD6954563BE44562F);
		s_Il2CppMethodInitialized = true;
	}
	TrailModule_t95D15372971E64A1977B7587ABAA87B1A31EF5C8  V_0;
	memset((&V_0), 0, sizeof(V_0));
	String_t* V_1 = NULL;
	uint32_t V_2 = 0;
	{
		// var instance = (UnityEngine.ParticleSystem.TrailModule)obj;
		RuntimeObject * L_0 = ___obj1;
		V_0 = (TrailModule_t95D15372971E64A1977B7587ABAA87B1A31EF5C8 )((*(TrailModule_t95D15372971E64A1977B7587ABAA87B1A31EF5C8 *)((TrailModule_t95D15372971E64A1977B7587ABAA87B1A31EF5C8 *)UnBox(L_0, TrailModule_t95D15372971E64A1977B7587ABAA87B1A31EF5C8_il2cpp_TypeInfo_var))));
		goto IL_038e;
	}

IL_000c:
	{
		String_t* L_1 = V_1;
		if (!L_1)
		{
			goto IL_0388;
		}
	}
	{
		String_t* L_2 = V_1;
		uint32_t L_3;
		L_3 = U3CPrivateImplementationDetailsU3E_ComputeStringHash_m3ADC1F612F9EE3DD518E6F0023A0DE0EE2B120A7((String_t*)L_2, /*hidden argument*/NULL);
		V_2 = (uint32_t)L_3;
		uint32_t L_4 = V_2;
		if ((!(((uint32_t)L_4) <= ((uint32_t)((int32_t)1376955374)))))
		{
			goto IL_008d;
		}
	}
	{
		uint32_t L_5 = V_2;
		if ((!(((uint32_t)L_5) <= ((uint32_t)((int32_t)494095910)))))
		{
			goto IL_004f;
		}
	}
	{
		uint32_t L_6 = V_2;
		if ((((int32_t)L_6) == ((int32_t)((int32_t)49525662))))
		{
			goto IL_010e;
		}
	}
	{
		uint32_t L_7 = V_2;
		if ((((int32_t)L_7) == ((int32_t)((int32_t)341298456))))
		{
			goto IL_021f;
		}
	}
	{
		uint32_t L_8 = V_2;
		if ((((int32_t)L_8) == ((int32_t)((int32_t)494095910))))
		{
			goto IL_0234;
		}
	}
	{
		goto IL_0388;
	}

IL_004f:
	{
		uint32_t L_9 = V_2;
		if ((!(((uint32_t)L_9) <= ((uint32_t)((int32_t)973733911)))))
		{
			goto IL_0072;
		}
	}
	{
		uint32_t L_10 = V_2;
		if ((((int32_t)L_10) == ((int32_t)((int32_t)559929418))))
		{
			goto IL_01b6;
		}
	}
	{
		uint32_t L_11 = V_2;
		if ((((int32_t)L_11) == ((int32_t)((int32_t)973733911))))
		{
			goto IL_0177;
		}
	}
	{
		goto IL_0388;
	}

IL_0072:
	{
		uint32_t L_12 = V_2;
		if ((((int32_t)L_12) == ((int32_t)((int32_t)1024708593))))
		{
			goto IL_014d;
		}
	}
	{
		uint32_t L_13 = V_2;
		if ((((int32_t)L_13) == ((int32_t)((int32_t)1376955374))))
		{
			goto IL_0138;
		}
	}
	{
		goto IL_0388;
	}

IL_008d:
	{
		uint32_t L_14 = V_2;
		if ((!(((uint32_t)L_14) <= ((uint32_t)((int32_t)-2100707162)))))
		{
			goto IL_00d3;
		}
	}
	{
		uint32_t L_15 = V_2;
		if ((!(((uint32_t)L_15) <= ((uint32_t)((int32_t)1975189197)))))
		{
			goto IL_00b8;
		}
	}
	{
		uint32_t L_16 = V_2;
		if ((((int32_t)L_16) == ((int32_t)((int32_t)1546474083))))
		{
			goto IL_020a;
		}
	}
	{
		uint32_t L_17 = V_2;
		if ((((int32_t)L_17) == ((int32_t)((int32_t)1975189197))))
		{
			goto IL_01cb;
		}
	}
	{
		goto IL_0388;
	}

IL_00b8:
	{
		uint32_t L_18 = V_2;
		if ((((int32_t)L_18) == ((int32_t)((int32_t)2053023684))))
		{
			goto IL_01a1;
		}
	}
	{
		uint32_t L_19 = V_2;
		if ((((int32_t)L_19) == ((int32_t)((int32_t)-2100707162))))
		{
			goto IL_0162;
		}
	}
	{
		goto IL_0388;
	}

IL_00d3:
	{
		uint32_t L_20 = V_2;
		if ((!(((uint32_t)L_20) <= ((uint32_t)((int32_t)-1319579393)))))
		{
			goto IL_00f6;
		}
	}
	{
		uint32_t L_21 = V_2;
		if ((((int32_t)L_21) == ((int32_t)((int32_t)-1562862963))))
		{
			goto IL_01e0;
		}
	}
	{
		uint32_t L_22 = V_2;
		if ((((int32_t)L_22) == ((int32_t)((int32_t)-1319579393))))
		{
			goto IL_018c;
		}
	}
	{
		goto IL_0388;
	}

IL_00f6:
	{
		uint32_t L_23 = V_2;
		if ((((int32_t)L_23) == ((int32_t)((int32_t)-1055777148))))
		{
			goto IL_0123;
		}
	}
	{
		uint32_t L_24 = V_2;
		if ((((int32_t)L_24) == ((int32_t)((int32_t)-413379935))))
		{
			goto IL_01f5;
		}
	}
	{
		goto IL_0388;
	}

IL_010e:
	{
		String_t* L_25 = V_1;
		bool L_26;
		L_26 = String_op_Equality_m50B3548E4AC232558190B0052877B290AA1D436A((String_t*)L_25, (String_t*)_stringLiteralF9D225733E1D10F9344C755C4A9C0870CD1DE97B, /*hidden argument*/NULL);
		if (L_26)
		{
			goto IL_0249;
		}
	}
	{
		goto IL_0388;
	}

IL_0123:
	{
		String_t* L_27 = V_1;
		bool L_28;
		L_28 = String_op_Equality_m50B3548E4AC232558190B0052877B290AA1D436A((String_t*)L_27, (String_t*)_stringLiteral60126327537B7B8E6EE33C43FE0C5CA8BCC3A06A, /*hidden argument*/NULL);
		if (L_28)
		{
			goto IL_0260;
		}
	}
	{
		goto IL_0388;
	}

IL_0138:
	{
		String_t* L_29 = V_1;
		bool L_30;
		L_30 = String_op_Equality_m50B3548E4AC232558190B0052877B290AA1D436A((String_t*)L_29, (String_t*)_stringLiteralBE2893848F9FC647C2288DA6581A1522E9695182, /*hidden argument*/NULL);
		if (L_30)
		{
			goto IL_0277;
		}
	}
	{
		goto IL_0388;
	}

IL_014d:
	{
		String_t* L_31 = V_1;
		bool L_32;
		L_32 = String_op_Equality_m50B3548E4AC232558190B0052877B290AA1D436A((String_t*)L_31, (String_t*)_stringLiteral4221314F268D184F46688D45C85446821F1F1BC3, /*hidden argument*/NULL);
		if (L_32)
		{
			goto IL_028e;
		}
	}
	{
		goto IL_0388;
	}

IL_0162:
	{
		String_t* L_33 = V_1;
		bool L_34;
		L_34 = String_op_Equality_m50B3548E4AC232558190B0052877B290AA1D436A((String_t*)L_33, (String_t*)_stringLiteral5C86338F177203D001C41D9C348A83D1338CC7D0, /*hidden argument*/NULL);
		if (L_34)
		{
			goto IL_02a5;
		}
	}
	{
		goto IL_0388;
	}

IL_0177:
	{
		String_t* L_35 = V_1;
		bool L_36;
		L_36 = String_op_Equality_m50B3548E4AC232558190B0052877B290AA1D436A((String_t*)L_35, (String_t*)_stringLiteralFE5F89F63E2381500F62A7CBD6954563BE44562F, /*hidden argument*/NULL);
		if (L_36)
		{
			goto IL_02bc;
		}
	}
	{
		goto IL_0388;
	}

IL_018c:
	{
		String_t* L_37 = V_1;
		bool L_38;
		L_38 = String_op_Equality_m50B3548E4AC232558190B0052877B290AA1D436A((String_t*)L_37, (String_t*)_stringLiteral87F70660D62DE5FC257FBADE9DA4EC9188597DE5, /*hidden argument*/NULL);
		if (L_38)
		{
			goto IL_02ce;
		}
	}
	{
		goto IL_0388;
	}

IL_01a1:
	{
		String_t* L_39 = V_1;
		bool L_40;
		L_40 = String_op_Equality_m50B3548E4AC232558190B0052877B290AA1D436A((String_t*)L_39, (String_t*)_stringLiteral354281948B6269615E32D856CF85B6F456724DAA, /*hidden argument*/NULL);
		if (L_40)
		{
			goto IL_02e5;
		}
	}
	{
		goto IL_0388;
	}

IL_01b6:
	{
		String_t* L_41 = V_1;
		bool L_42;
		L_42 = String_op_Equality_m50B3548E4AC232558190B0052877B290AA1D436A((String_t*)L_41, (String_t*)_stringLiteralADAEB0839588196B349BDB6CF33AFA3E0736360B, /*hidden argument*/NULL);
		if (L_42)
		{
			goto IL_02fc;
		}
	}
	{
		goto IL_0388;
	}

IL_01cb:
	{
		String_t* L_43 = V_1;
		bool L_44;
		L_44 = String_op_Equality_m50B3548E4AC232558190B0052877B290AA1D436A((String_t*)L_43, (String_t*)_stringLiteralC580B374AA991574F91DFC86C068E7FAD661A3A4, /*hidden argument*/NULL);
		if (L_44)
		{
			goto IL_0310;
		}
	}
	{
		goto IL_0388;
	}

IL_01e0:
	{
		String_t* L_45 = V_1;
		bool L_46;
		L_46 = String_op_Equality_m50B3548E4AC232558190B0052877B290AA1D436A((String_t*)L_45, (String_t*)_stringLiteralE049DB547285CFCE1CB9A95934B6B6DCE2D219EC, /*hidden argument*/NULL);
		if (L_46)
		{
			goto IL_0324;
		}
	}
	{
		goto IL_0388;
	}

IL_01f5:
	{
		String_t* L_47 = V_1;
		bool L_48;
		L_48 = String_op_Equality_m50B3548E4AC232558190B0052877B290AA1D436A((String_t*)L_47, (String_t*)_stringLiteralBF540D6548854CC21630064FBA5390C9409C86F0, /*hidden argument*/NULL);
		if (L_48)
		{
			goto IL_0338;
		}
	}
	{
		goto IL_0388;
	}

IL_020a:
	{
		String_t* L_49 = V_1;
		bool L_50;
		L_50 = String_op_Equality_m50B3548E4AC232558190B0052877B290AA1D436A((String_t*)L_49, (String_t*)_stringLiteral1D87A56AE67B2CD49CAE6E942C2FB7AD98925C00, /*hidden argument*/NULL);
		if (L_50)
		{
			goto IL_034c;
		}
	}
	{
		goto IL_0388;
	}

IL_021f:
	{
		String_t* L_51 = V_1;
		bool L_52;
		L_52 = String_op_Equality_m50B3548E4AC232558190B0052877B290AA1D436A((String_t*)L_51, (String_t*)_stringLiteralA967787586EC9E5A17A9C55E2002AB73A5E21A0A, /*hidden argument*/NULL);
		if (L_52)
		{
			goto IL_0360;
		}
	}
	{
		goto IL_0388;
	}

IL_0234:
	{
		String_t* L_53 = V_1;
		bool L_54;
		L_54 = String_op_Equality_m50B3548E4AC232558190B0052877B290AA1D436A((String_t*)L_53, (String_t*)_stringLiteral47C47DD09640803AD8016748EAE1F04DD1D41119, /*hidden argument*/NULL);
		if (L_54)
		{
			goto IL_0374;
		}
	}
	{
		goto IL_0388;
	}

IL_0249:
	{
		// instance.enabled = reader.Read<System.Boolean>(ES3Type_bool.Instance);
		ES3Reader_t2780AF8AA61DA2A817115CEF8612AC0E494D03C9 * L_55 = ___reader0;
		IL2CPP_RUNTIME_CLASS_INIT(ES3Type_bool_t8F309F7B9CC735FF1DEE68081B6E3CAB367745F4_il2cpp_TypeInfo_var);
		ES3Type_t8FBECB7AE75168648B9524E0C2A38DAD4555421D * L_56 = ((ES3Type_bool_t8F309F7B9CC735FF1DEE68081B6E3CAB367745F4_StaticFields*)il2cpp_codegen_static_fields_for(ES3Type_bool_t8F309F7B9CC735FF1DEE68081B6E3CAB367745F4_il2cpp_TypeInfo_var))->get_Instance_12();
		NullCheck((ES3Reader_t2780AF8AA61DA2A817115CEF8612AC0E494D03C9 *)L_55);
		bool L_57;
		L_57 = GenericVirtFuncInvoker1< bool, ES3Type_t8FBECB7AE75168648B9524E0C2A38DAD4555421D * >::Invoke(ES3Reader_Read_TisBoolean_t07D1E3F34E4813023D64F584DFF7B34C9D922F37_mC6D1B158268FF9B97822FF9F5B37FB1723FEDA22_RuntimeMethod_var, (ES3Reader_t2780AF8AA61DA2A817115CEF8612AC0E494D03C9 *)L_55, (ES3Type_t8FBECB7AE75168648B9524E0C2A38DAD4555421D *)L_56);
		TrailModule_set_enabled_mFC8451DDDF40CCBB3E32A4B30A001115F6346894((TrailModule_t95D15372971E64A1977B7587ABAA87B1A31EF5C8 *)(TrailModule_t95D15372971E64A1977B7587ABAA87B1A31EF5C8 *)(&V_0), (bool)L_57, /*hidden argument*/NULL);
		// break;
		goto IL_038e;
	}

IL_0260:
	{
		// instance.ratio = reader.Read<System.Single>(ES3Type_float.Instance);
		ES3Reader_t2780AF8AA61DA2A817115CEF8612AC0E494D03C9 * L_58 = ___reader0;
		IL2CPP_RUNTIME_CLASS_INIT(ES3Type_float_tF86B773C86731BD9AD79448B860BBB178FE77644_il2cpp_TypeInfo_var);
		ES3Type_t8FBECB7AE75168648B9524E0C2A38DAD4555421D * L_59 = ((ES3Type_float_tF86B773C86731BD9AD79448B860BBB178FE77644_StaticFields*)il2cpp_codegen_static_fields_for(ES3Type_float_tF86B773C86731BD9AD79448B860BBB178FE77644_il2cpp_TypeInfo_var))->get_Instance_12();
		NullCheck((ES3Reader_t2780AF8AA61DA2A817115CEF8612AC0E494D03C9 *)L_58);
		float L_60;
		L_60 = GenericVirtFuncInvoker1< float, ES3Type_t8FBECB7AE75168648B9524E0C2A38DAD4555421D * >::Invoke(ES3Reader_Read_TisSingle_tE07797BA3C98D4CA9B5A19413C19A76688AB899E_m4A0416374498BDA042B8EB21E49B72326D6CE5F4_RuntimeMethod_var, (ES3Reader_t2780AF8AA61DA2A817115CEF8612AC0E494D03C9 *)L_58, (ES3Type_t8FBECB7AE75168648B9524E0C2A38DAD4555421D *)L_59);
		TrailModule_set_ratio_m34E63B34E7B0E8D037AD45532B2E2D5BD0750189((TrailModule_t95D15372971E64A1977B7587ABAA87B1A31EF5C8 *)(TrailModule_t95D15372971E64A1977B7587ABAA87B1A31EF5C8 *)(&V_0), (float)L_60, /*hidden argument*/NULL);
		// break;
		goto IL_038e;
	}

IL_0277:
	{
		// instance.lifetime = reader.Read<UnityEngine.ParticleSystem.MinMaxCurve>(ES3Type_MinMaxCurve.Instance);
		ES3Reader_t2780AF8AA61DA2A817115CEF8612AC0E494D03C9 * L_61 = ___reader0;
		IL2CPP_RUNTIME_CLASS_INIT(ES3Type_MinMaxCurve_tC5342BF0F8735B85CB5E16FDD4C6FACC8AFAD3B7_il2cpp_TypeInfo_var);
		ES3Type_t8FBECB7AE75168648B9524E0C2A38DAD4555421D * L_62 = ((ES3Type_MinMaxCurve_tC5342BF0F8735B85CB5E16FDD4C6FACC8AFAD3B7_StaticFields*)il2cpp_codegen_static_fields_for(ES3Type_MinMaxCurve_tC5342BF0F8735B85CB5E16FDD4C6FACC8AFAD3B7_il2cpp_TypeInfo_var))->get_Instance_12();
		NullCheck((ES3Reader_t2780AF8AA61DA2A817115CEF8612AC0E494D03C9 *)L_61);
		MinMaxCurve_tF036239442AB2D438B1EDABEBC785426871084CD  L_63;
		L_63 = GenericVirtFuncInvoker1< MinMaxCurve_tF036239442AB2D438B1EDABEBC785426871084CD , ES3Type_t8FBECB7AE75168648B9524E0C2A38DAD4555421D * >::Invoke(ES3Reader_Read_TisMinMaxCurve_tF036239442AB2D438B1EDABEBC785426871084CD_mD285150CBFB52440643BBECB5ADF4EE8DE940535_RuntimeMethod_var, (ES3Reader_t2780AF8AA61DA2A817115CEF8612AC0E494D03C9 *)L_61, (ES3Type_t8FBECB7AE75168648B9524E0C2A38DAD4555421D *)L_62);
		TrailModule_set_lifetime_m57C898C42B9F18F5A0E88AAA7B10276CC158C39D((TrailModule_t95D15372971E64A1977B7587ABAA87B1A31EF5C8 *)(TrailModule_t95D15372971E64A1977B7587ABAA87B1A31EF5C8 *)(&V_0), (MinMaxCurve_tF036239442AB2D438B1EDABEBC785426871084CD )L_63, /*hidden argument*/NULL);
		// break;
		goto IL_038e;
	}

IL_028e:
	{
		// instance.lifetimeMultiplier = reader.Read<System.Single>(ES3Type_float.Instance);
		ES3Reader_t2780AF8AA61DA2A817115CEF8612AC0E494D03C9 * L_64 = ___reader0;
		IL2CPP_RUNTIME_CLASS_INIT(ES3Type_float_tF86B773C86731BD9AD79448B860BBB178FE77644_il2cpp_TypeInfo_var);
		ES3Type_t8FBECB7AE75168648B9524E0C2A38DAD4555421D * L_65 = ((ES3Type_float_tF86B773C86731BD9AD79448B860BBB178FE77644_StaticFields*)il2cpp_codegen_static_fields_for(ES3Type_float_tF86B773C86731BD9AD79448B860BBB178FE77644_il2cpp_TypeInfo_var))->get_Instance_12();
		NullCheck((ES3Reader_t2780AF8AA61DA2A817115CEF8612AC0E494D03C9 *)L_64);
		float L_66;
		L_66 = GenericVirtFuncInvoker1< float, ES3Type_t8FBECB7AE75168648B9524E0C2A38DAD4555421D * >::Invoke(ES3Reader_Read_TisSingle_tE07797BA3C98D4CA9B5A19413C19A76688AB899E_m4A0416374498BDA042B8EB21E49B72326D6CE5F4_RuntimeMethod_var, (ES3Reader_t2780AF8AA61DA2A817115CEF8612AC0E494D03C9 *)L_64, (ES3Type_t8FBECB7AE75168648B9524E0C2A38DAD4555421D *)L_65);
		TrailModule_set_lifetimeMultiplier_m23F95D65EE8C82152AE1CF2E41531EC2789A866B((TrailModule_t95D15372971E64A1977B7587ABAA87B1A31EF5C8 *)(TrailModule_t95D15372971E64A1977B7587ABAA87B1A31EF5C8 *)(&V_0), (float)L_66, /*hidden argument*/NULL);
		// break;
		goto IL_038e;
	}

IL_02a5:
	{
		// instance.minVertexDistance = reader.Read<System.Single>(ES3Type_float.Instance);
		ES3Reader_t2780AF8AA61DA2A817115CEF8612AC0E494D03C9 * L_67 = ___reader0;
		IL2CPP_RUNTIME_CLASS_INIT(ES3Type_float_tF86B773C86731BD9AD79448B860BBB178FE77644_il2cpp_TypeInfo_var);
		ES3Type_t8FBECB7AE75168648B9524E0C2A38DAD4555421D * L_68 = ((ES3Type_float_tF86B773C86731BD9AD79448B860BBB178FE77644_StaticFields*)il2cpp_codegen_static_fields_for(ES3Type_float_tF86B773C86731BD9AD79448B860BBB178FE77644_il2cpp_TypeInfo_var))->get_Instance_12();
		NullCheck((ES3Reader_t2780AF8AA61DA2A817115CEF8612AC0E494D03C9 *)L_67);
		float L_69;
		L_69 = GenericVirtFuncInvoker1< float, ES3Type_t8FBECB7AE75168648B9524E0C2A38DAD4555421D * >::Invoke(ES3Reader_Read_TisSingle_tE07797BA3C98D4CA9B5A19413C19A76688AB899E_m4A0416374498BDA042B8EB21E49B72326D6CE5F4_RuntimeMethod_var, (ES3Reader_t2780AF8AA61DA2A817115CEF8612AC0E494D03C9 *)L_67, (ES3Type_t8FBECB7AE75168648B9524E0C2A38DAD4555421D *)L_68);
		TrailModule_set_minVertexDistance_mF7C29F88FBF540CE4987F4CF9B141C624808FBC5((TrailModule_t95D15372971E64A1977B7587ABAA87B1A31EF5C8 *)(TrailModule_t95D15372971E64A1977B7587ABAA87B1A31EF5C8 *)(&V_0), (float)L_69, /*hidden argument*/NULL);
		// break;
		goto IL_038e;
	}

IL_02bc:
	{
		// instance.textureMode = reader.Read<UnityEngine.ParticleSystemTrailTextureMode>();
		ES3Reader_t2780AF8AA61DA2A817115CEF8612AC0E494D03C9 * L_70 = ___reader0;
		NullCheck((ES3Reader_t2780AF8AA61DA2A817115CEF8612AC0E494D03C9 *)L_70);
		int32_t L_71;
		L_71 = GenericVirtFuncInvoker0< int32_t >::Invoke(ES3Reader_Read_TisParticleSystemTrailTextureMode_tF3259187CA4D0A61EDB3A40E63CBF6C42641CE9F_m055DB1212E8BC34F385DF7D302F16241554E9730_RuntimeMethod_var, (ES3Reader_t2780AF8AA61DA2A817115CEF8612AC0E494D03C9 *)L_70);
		TrailModule_set_textureMode_mC1F8AE0D2965FC47BDBFF4F53E0673D5FB58CF28((TrailModule_t95D15372971E64A1977B7587ABAA87B1A31EF5C8 *)(TrailModule_t95D15372971E64A1977B7587ABAA87B1A31EF5C8 *)(&V_0), (int32_t)L_71, /*hidden argument*/NULL);
		// break;
		goto IL_038e;
	}

IL_02ce:
	{
		// instance.worldSpace = reader.Read<System.Boolean>(ES3Type_bool.Instance);
		ES3Reader_t2780AF8AA61DA2A817115CEF8612AC0E494D03C9 * L_72 = ___reader0;
		IL2CPP_RUNTIME_CLASS_INIT(ES3Type_bool_t8F309F7B9CC735FF1DEE68081B6E3CAB367745F4_il2cpp_TypeInfo_var);
		ES3Type_t8FBECB7AE75168648B9524E0C2A38DAD4555421D * L_73 = ((ES3Type_bool_t8F309F7B9CC735FF1DEE68081B6E3CAB367745F4_StaticFields*)il2cpp_codegen_static_fields_for(ES3Type_bool_t8F309F7B9CC735FF1DEE68081B6E3CAB367745F4_il2cpp_TypeInfo_var))->get_Instance_12();
		NullCheck((ES3Reader_t2780AF8AA61DA2A817115CEF8612AC0E494D03C9 *)L_72);
		bool L_74;
		L_74 = GenericVirtFuncInvoker1< bool, ES3Type_t8FBECB7AE75168648B9524E0C2A38DAD4555421D * >::Invoke(ES3Reader_Read_TisBoolean_t07D1E3F34E4813023D64F584DFF7B34C9D922F37_mC6D1B158268FF9B97822FF9F5B37FB1723FEDA22_RuntimeMethod_var, (ES3Reader_t2780AF8AA61DA2A817115CEF8612AC0E494D03C9 *)L_72, (ES3Type_t8FBECB7AE75168648B9524E0C2A38DAD4555421D *)L_73);
		TrailModule_set_worldSpace_m42A63AF4A96F24A621A29A0F35240195F0E56B1A((TrailModule_t95D15372971E64A1977B7587ABAA87B1A31EF5C8 *)(TrailModule_t95D15372971E64A1977B7587ABAA87B1A31EF5C8 *)(&V_0), (bool)L_74, /*hidden argument*/NULL);
		// break;
		goto IL_038e;
	}

IL_02e5:
	{
		// instance.dieWithParticles = reader.Read<System.Boolean>(ES3Type_bool.Instance);
		ES3Reader_t2780AF8AA61DA2A817115CEF8612AC0E494D03C9 * L_75 = ___reader0;
		IL2CPP_RUNTIME_CLASS_INIT(ES3Type_bool_t8F309F7B9CC735FF1DEE68081B6E3CAB367745F4_il2cpp_TypeInfo_var);
		ES3Type_t8FBECB7AE75168648B9524E0C2A38DAD4555421D * L_76 = ((ES3Type_bool_t8F309F7B9CC735FF1DEE68081B6E3CAB367745F4_StaticFields*)il2cpp_codegen_static_fields_for(ES3Type_bool_t8F309F7B9CC735FF1DEE68081B6E3CAB367745F4_il2cpp_TypeInfo_var))->get_Instance_12();
		NullCheck((ES3Reader_t2780AF8AA61DA2A817115CEF8612AC0E494D03C9 *)L_75);
		bool L_77;
		L_77 = GenericVirtFuncInvoker1< bool, ES3Type_t8FBECB7AE75168648B9524E0C2A38DAD4555421D * >::Invoke(ES3Reader_Read_TisBoolean_t07D1E3F34E4813023D64F584DFF7B34C9D922F37_mC6D1B158268FF9B97822FF9F5B37FB1723FEDA22_RuntimeMethod_var, (ES3Reader_t2780AF8AA61DA2A817115CEF8612AC0E494D03C9 *)L_75, (ES3Type_t8FBECB7AE75168648B9524E0C2A38DAD4555421D *)L_76);
		TrailModule_set_dieWithParticles_mB7C4E8DC2F908FDF6D57A77B54B821E360D8DA99((TrailModule_t95D15372971E64A1977B7587ABAA87B1A31EF5C8 *)(TrailModule_t95D15372971E64A1977B7587ABAA87B1A31EF5C8 *)(&V_0), (bool)L_77, /*hidden argument*/NULL);
		// break;
		goto IL_038e;
	}

IL_02fc:
	{
		// instance.sizeAffectsWidth = reader.Read<System.Boolean>(ES3Type_bool.Instance);
		ES3Reader_t2780AF8AA61DA2A817115CEF8612AC0E494D03C9 * L_78 = ___reader0;
		IL2CPP_RUNTIME_CLASS_INIT(ES3Type_bool_t8F309F7B9CC735FF1DEE68081B6E3CAB367745F4_il2cpp_TypeInfo_var);
		ES3Type_t8FBECB7AE75168648B9524E0C2A38DAD4555421D * L_79 = ((ES3Type_bool_t8F309F7B9CC735FF1DEE68081B6E3CAB367745F4_StaticFields*)il2cpp_codegen_static_fields_for(ES3Type_bool_t8F309F7B9CC735FF1DEE68081B6E3CAB367745F4_il2cpp_TypeInfo_var))->get_Instance_12();
		NullCheck((ES3Reader_t2780AF8AA61DA2A817115CEF8612AC0E494D03C9 *)L_78);
		bool L_80;
		L_80 = GenericVirtFuncInvoker1< bool, ES3Type_t8FBECB7AE75168648B9524E0C2A38DAD4555421D * >::Invoke(ES3Reader_Read_TisBoolean_t07D1E3F34E4813023D64F584DFF7B34C9D922F37_mC6D1B158268FF9B97822FF9F5B37FB1723FEDA22_RuntimeMethod_var, (ES3Reader_t2780AF8AA61DA2A817115CEF8612AC0E494D03C9 *)L_78, (ES3Type_t8FBECB7AE75168648B9524E0C2A38DAD4555421D *)L_79);
		TrailModule_set_sizeAffectsWidth_m3517856E39080DA69B447499C8846D2491B0ABF0((TrailModule_t95D15372971E64A1977B7587ABAA87B1A31EF5C8 *)(TrailModule_t95D15372971E64A1977B7587ABAA87B1A31EF5C8 *)(&V_0), (bool)L_80, /*hidden argument*/NULL);
		// break;
		goto IL_038e;
	}

IL_0310:
	{
		// instance.sizeAffectsLifetime = reader.Read<System.Boolean>(ES3Type_bool.Instance);
		ES3Reader_t2780AF8AA61DA2A817115CEF8612AC0E494D03C9 * L_81 = ___reader0;
		IL2CPP_RUNTIME_CLASS_INIT(ES3Type_bool_t8F309F7B9CC735FF1DEE68081B6E3CAB367745F4_il2cpp_TypeInfo_var);
		ES3Type_t8FBECB7AE75168648B9524E0C2A38DAD4555421D * L_82 = ((ES3Type_bool_t8F309F7B9CC735FF1DEE68081B6E3CAB367745F4_StaticFields*)il2cpp_codegen_static_fields_for(ES3Type_bool_t8F309F7B9CC735FF1DEE68081B6E3CAB367745F4_il2cpp_TypeInfo_var))->get_Instance_12();
		NullCheck((ES3Reader_t2780AF8AA61DA2A817115CEF8612AC0E494D03C9 *)L_81);
		bool L_83;
		L_83 = GenericVirtFuncInvoker1< bool, ES3Type_t8FBECB7AE75168648B9524E0C2A38DAD4555421D * >::Invoke(ES3Reader_Read_TisBoolean_t07D1E3F34E4813023D64F584DFF7B34C9D922F37_mC6D1B158268FF9B97822FF9F5B37FB1723FEDA22_RuntimeMethod_var, (ES3Reader_t2780AF8AA61DA2A817115CEF8612AC0E494D03C9 *)L_81, (ES3Type_t8FBECB7AE75168648B9524E0C2A38DAD4555421D *)L_82);
		TrailModule_set_sizeAffectsLifetime_m98BF4A6594193D824B52D88371CF963ACBA388FD((TrailModule_t95D15372971E64A1977B7587ABAA87B1A31EF5C8 *)(TrailModule_t95D15372971E64A1977B7587ABAA87B1A31EF5C8 *)(&V_0), (bool)L_83, /*hidden argument*/NULL);
		// break;
		goto IL_038e;
	}

IL_0324:
	{
		// instance.inheritParticleColor = reader.Read<System.Boolean>(ES3Type_bool.Instance);
		ES3Reader_t2780AF8AA61DA2A817115CEF8612AC0E494D03C9 * L_84 = ___reader0;
		IL2CPP_RUNTIME_CLASS_INIT(ES3Type_bool_t8F309F7B9CC735FF1DEE68081B6E3CAB367745F4_il2cpp_TypeInfo_var);
		ES3Type_t8FBECB7AE75168648B9524E0C2A38DAD4555421D * L_85 = ((ES3Type_bool_t8F309F7B9CC735FF1DEE68081B6E3CAB367745F4_StaticFields*)il2cpp_codegen_static_fields_for(ES3Type_bool_t8F309F7B9CC735FF1DEE68081B6E3CAB367745F4_il2cpp_TypeInfo_var))->get_Instance_12();
		NullCheck((ES3Reader_t2780AF8AA61DA2A817115CEF8612AC0E494D03C9 *)L_84);
		bool L_86;
		L_86 = GenericVirtFuncInvoker1< bool, ES3Type_t8FBECB7AE75168648B9524E0C2A38DAD4555421D * >::Invoke(ES3Reader_Read_TisBoolean_t07D1E3F34E4813023D64F584DFF7B34C9D922F37_mC6D1B158268FF9B97822FF9F5B37FB1723FEDA22_RuntimeMethod_var, (ES3Reader_t2780AF8AA61DA2A817115CEF8612AC0E494D03C9 *)L_84, (ES3Type_t8FBECB7AE75168648B9524E0C2A38DAD4555421D *)L_85);
		TrailModule_set_inheritParticleColor_mCD83E87B5E00F2BFFBE08AD2D1D68606283A4FEE((TrailModule_t95D15372971E64A1977B7587ABAA87B1A31EF5C8 *)(TrailModule_t95D15372971E64A1977B7587ABAA87B1A31EF5C8 *)(&V_0), (bool)L_86, /*hidden argument*/NULL);
		// break;
		goto IL_038e;
	}

IL_0338:
	{
		// instance.colorOverLifetime = reader.Read<UnityEngine.ParticleSystem.MinMaxGradient>(ES3Type_MinMaxGradient.Instance);
		ES3Reader_t2780AF8AA61DA2A817115CEF8612AC0E494D03C9 * L_87 = ___reader0;
		IL2CPP_RUNTIME_CLASS_INIT(ES3Type_MinMaxGradient_t5DD353D60E95642AB39D1C97C6FD6DD1B067D3CF_il2cpp_TypeInfo_var);
		ES3Type_t8FBECB7AE75168648B9524E0C2A38DAD4555421D * L_88 = ((ES3Type_MinMaxGradient_t5DD353D60E95642AB39D1C97C6FD6DD1B067D3CF_StaticFields*)il2cpp_codegen_static_fields_for(ES3Type_MinMaxGradient_t5DD353D60E95642AB39D1C97C6FD6DD1B067D3CF_il2cpp_TypeInfo_var))->get_Instance_12();
		NullCheck((ES3Reader_t2780AF8AA61DA2A817115CEF8612AC0E494D03C9 *)L_87);
		MinMaxGradient_tF4530B26F29D9635D670A33B9EE581EAC48C12B7  L_89;
		L_89 = GenericVirtFuncInvoker1< MinMaxGradient_tF4530B26F29D9635D670A33B9EE581EAC48C12B7 , ES3Type_t8FBECB7AE75168648B9524E0C2A38DAD4555421D * >::Invoke(ES3Reader_Read_TisMinMaxGradient_tF4530B26F29D9635D670A33B9EE581EAC48C12B7_m6A3DD8CBBAC5D32B838B6C4399009AB8AA512ACC_RuntimeMethod_var, (ES3Reader_t2780AF8AA61DA2A817115CEF8612AC0E494D03C9 *)L_87, (ES3Type_t8FBECB7AE75168648B9524E0C2A38DAD4555421D *)L_88);
		TrailModule_set_colorOverLifetime_mCD56BD4B75D3A3947069BA1B93FEC78AAE08DF27((TrailModule_t95D15372971E64A1977B7587ABAA87B1A31EF5C8 *)(TrailModule_t95D15372971E64A1977B7587ABAA87B1A31EF5C8 *)(&V_0), (MinMaxGradient_tF4530B26F29D9635D670A33B9EE581EAC48C12B7 )L_89, /*hidden argument*/NULL);
		// break;
		goto IL_038e;
	}

IL_034c:
	{
		// instance.widthOverTrail = reader.Read<UnityEngine.ParticleSystem.MinMaxCurve>(ES3Type_MinMaxCurve.Instance);
		ES3Reader_t2780AF8AA61DA2A817115CEF8612AC0E494D03C9 * L_90 = ___reader0;
		IL2CPP_RUNTIME_CLASS_INIT(ES3Type_MinMaxCurve_tC5342BF0F8735B85CB5E16FDD4C6FACC8AFAD3B7_il2cpp_TypeInfo_var);
		ES3Type_t8FBECB7AE75168648B9524E0C2A38DAD4555421D * L_91 = ((ES3Type_MinMaxCurve_tC5342BF0F8735B85CB5E16FDD4C6FACC8AFAD3B7_StaticFields*)il2cpp_codegen_static_fields_for(ES3Type_MinMaxCurve_tC5342BF0F8735B85CB5E16FDD4C6FACC8AFAD3B7_il2cpp_TypeInfo_var))->get_Instance_12();
		NullCheck((ES3Reader_t2780AF8AA61DA2A817115CEF8612AC0E494D03C9 *)L_90);
		MinMaxCurve_tF036239442AB2D438B1EDABEBC785426871084CD  L_92;
		L_92 = GenericVirtFuncInvoker1< MinMaxCurve_tF036239442AB2D438B1EDABEBC785426871084CD , ES3Type_t8FBECB7AE75168648B9524E0C2A38DAD4555421D * >::Invoke(ES3Reader_Read_TisMinMaxCurve_tF036239442AB2D438B1EDABEBC785426871084CD_mD285150CBFB52440643BBECB5ADF4EE8DE940535_RuntimeMethod_var, (ES3Reader_t2780AF8AA61DA2A817115CEF8612AC0E494D03C9 *)L_90, (ES3Type_t8FBECB7AE75168648B9524E0C2A38DAD4555421D *)L_91);
		TrailModule_set_widthOverTrail_m6C0A896EBFDED7CE46344B3A0B04212934F30DE1((TrailModule_t95D15372971E64A1977B7587ABAA87B1A31EF5C8 *)(TrailModule_t95D15372971E64A1977B7587ABAA87B1A31EF5C8 *)(&V_0), (MinMaxCurve_tF036239442AB2D438B1EDABEBC785426871084CD )L_92, /*hidden argument*/NULL);
		// break;
		goto IL_038e;
	}

IL_0360:
	{
		// instance.widthOverTrailMultiplier = reader.Read<System.Single>(ES3Type_float.Instance);
		ES3Reader_t2780AF8AA61DA2A817115CEF8612AC0E494D03C9 * L_93 = ___reader0;
		IL2CPP_RUNTIME_CLASS_INIT(ES3Type_float_tF86B773C86731BD9AD79448B860BBB178FE77644_il2cpp_TypeInfo_var);
		ES3Type_t8FBECB7AE75168648B9524E0C2A38DAD4555421D * L_94 = ((ES3Type_float_tF86B773C86731BD9AD79448B860BBB178FE77644_StaticFields*)il2cpp_codegen_static_fields_for(ES3Type_float_tF86B773C86731BD9AD79448B860BBB178FE77644_il2cpp_TypeInfo_var))->get_Instance_12();
		NullCheck((ES3Reader_t2780AF8AA61DA2A817115CEF8612AC0E494D03C9 *)L_93);
		float L_95;
		L_95 = GenericVirtFuncInvoker1< float, ES3Type_t8FBECB7AE75168648B9524E0C2A38DAD4555421D * >::Invoke(ES3Reader_Read_TisSingle_tE07797BA3C98D4CA9B5A19413C19A76688AB899E_m4A0416374498BDA042B8EB21E49B72326D6CE5F4_RuntimeMethod_var, (ES3Reader_t2780AF8AA61DA2A817115CEF8612AC0E494D03C9 *)L_93, (ES3Type_t8FBECB7AE75168648B9524E0C2A38DAD4555421D *)L_94);
		TrailModule_set_widthOverTrailMultiplier_m6A7EA2856CF30B710CCB528EA3EBFD1799C19BD4((TrailModule_t95D15372971E64A1977B7587ABAA87B1A31EF5C8 *)(TrailModule_t95D15372971E64A1977B7587ABAA87B1A31EF5C8 *)(&V_0), (float)L_95, /*hidden argument*/NULL);
		// break;
		goto IL_038e;
	}

IL_0374:
	{
		// instance.colorOverTrail = reader.Read<UnityEngine.ParticleSystem.MinMaxGradient>(ES3Type_MinMaxGradient.Instance);
		ES3Reader_t2780AF8AA61DA2A817115CEF8612AC0E494D03C9 * L_96 = ___reader0;
		IL2CPP_RUNTIME_CLASS_INIT(ES3Type_MinMaxGradient_t5DD353D60E95642AB39D1C97C6FD6DD1B067D3CF_il2cpp_TypeInfo_var);
		ES3Type_t8FBECB7AE75168648B9524E0C2A38DAD4555421D * L_97 = ((ES3Type_MinMaxGradient_t5DD353D60E95642AB39D1C97C6FD6DD1B067D3CF_StaticFields*)il2cpp_codegen_static_fields_for(ES3Type_MinMaxGradient_t5DD353D60E95642AB39D1C97C6FD6DD1B067D3CF_il2cpp_TypeInfo_var))->get_Instance_12();
		NullCheck((ES3Reader_t2780AF8AA61DA2A817115CEF8612AC0E494D03C9 *)L_96);
		MinMaxGradient_tF4530B26F29D9635D670A33B9EE581EAC48C12B7  L_98;
		L_98 = GenericVirtFuncInvoker1< MinMaxGradient_tF4530B26F29D9635D670A33B9EE581EAC48C12B7 , ES3Type_t8FBECB7AE75168648B9524E0C2A38DAD4555421D * >::Invoke(ES3Reader_Read_TisMinMaxGradient_tF4530B26F29D9635D670A33B9EE581EAC48C12B7_m6A3DD8CBBAC5D32B838B6C4399009AB8AA512ACC_RuntimeMethod_var, (ES3Reader_t2780AF8AA61DA2A817115CEF8612AC0E494D03C9 *)L_96, (ES3Type_t8FBECB7AE75168648B9524E0C2A38DAD4555421D *)L_97);
		TrailModule_set_colorOverTrail_m8440C6574C8310292B93D70EA4FE3EE8C40DF8DB((TrailModule_t95D15372971E64A1977B7587ABAA87B1A31EF5C8 *)(TrailModule_t95D15372971E64A1977B7587ABAA87B1A31EF5C8 *)(&V_0), (MinMaxGradient_tF4530B26F29D9635D670A33B9EE581EAC48C12B7 )L_98, /*hidden argument*/NULL);
		// break;
		goto IL_038e;
	}

IL_0388:
	{
		// reader.Skip();
		ES3Reader_t2780AF8AA61DA2A817115CEF8612AC0E494D03C9 * L_99 = ___reader0;
		NullCheck((ES3Reader_t2780AF8AA61DA2A817115CEF8612AC0E494D03C9 *)L_99);
		VirtActionInvoker0::Invoke(41 /* System.Void ES3Reader::Skip() */, (ES3Reader_t2780AF8AA61DA2A817115CEF8612AC0E494D03C9 *)L_99);
	}

IL_038e:
	{
		// while((propertyName = reader.ReadPropertyName()) != null)
		ES3Reader_t2780AF8AA61DA2A817115CEF8612AC0E494D03C9 * L_100 = ___reader0;
		NullCheck((ES3Reader_t2780AF8AA61DA2A817115CEF8612AC0E494D03C9 *)L_100);
		String_t* L_101;
		L_101 = VirtFuncInvoker0< String_t* >::Invoke(21 /* System.String ES3Reader::ReadPropertyName() */, (ES3Reader_t2780AF8AA61DA2A817115CEF8612AC0E494D03C9 *)L_100);
		String_t* L_102 = (String_t*)L_101;
		V_1 = (String_t*)L_102;
		if (L_102)
		{
			goto IL_000c;
		}
	}
	{
		// }
		return;
	}
}
// System.Void ES3Types.ES3Type_TrailModule::ReadInto<UnityEngine.ParticleSystem/TextureSheetAnimationModule>(ES3Reader,System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ES3Type_TrailModule_ReadInto_TisTextureSheetAnimationModule_t66D02BA0838858C4921EFC059CC3412141A8FCF2_m841B6FF60EE175C96C28E4EC02855B7C52BF255A_gshared (ES3Type_TrailModule_tC773F73EC0443516DD128FF2B5AE010809742462 * __this, ES3Reader_t2780AF8AA61DA2A817115CEF8612AC0E494D03C9 * ___reader0, RuntimeObject * ___obj1, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ES3Reader_Read_TisBoolean_t07D1E3F34E4813023D64F584DFF7B34C9D922F37_mC6D1B158268FF9B97822FF9F5B37FB1723FEDA22_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ES3Reader_Read_TisMinMaxCurve_tF036239442AB2D438B1EDABEBC785426871084CD_mD285150CBFB52440643BBECB5ADF4EE8DE940535_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ES3Reader_Read_TisMinMaxGradient_tF4530B26F29D9635D670A33B9EE581EAC48C12B7_m6A3DD8CBBAC5D32B838B6C4399009AB8AA512ACC_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ES3Reader_Read_TisParticleSystemTrailTextureMode_tF3259187CA4D0A61EDB3A40E63CBF6C42641CE9F_m055DB1212E8BC34F385DF7D302F16241554E9730_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ES3Reader_Read_TisSingle_tE07797BA3C98D4CA9B5A19413C19A76688AB899E_m4A0416374498BDA042B8EB21E49B72326D6CE5F4_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ES3Type_MinMaxCurve_tC5342BF0F8735B85CB5E16FDD4C6FACC8AFAD3B7_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ES3Type_MinMaxGradient_t5DD353D60E95642AB39D1C97C6FD6DD1B067D3CF_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ES3Type_bool_t8F309F7B9CC735FF1DEE68081B6E3CAB367745F4_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ES3Type_float_tF86B773C86731BD9AD79448B860BBB178FE77644_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&TrailModule_t95D15372971E64A1977B7587ABAA87B1A31EF5C8_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral1D87A56AE67B2CD49CAE6E942C2FB7AD98925C00);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral354281948B6269615E32D856CF85B6F456724DAA);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral4221314F268D184F46688D45C85446821F1F1BC3);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral47C47DD09640803AD8016748EAE1F04DD1D41119);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral5C86338F177203D001C41D9C348A83D1338CC7D0);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral60126327537B7B8E6EE33C43FE0C5CA8BCC3A06A);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral87F70660D62DE5FC257FBADE9DA4EC9188597DE5);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralA967787586EC9E5A17A9C55E2002AB73A5E21A0A);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralADAEB0839588196B349BDB6CF33AFA3E0736360B);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralBE2893848F9FC647C2288DA6581A1522E9695182);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralBF540D6548854CC21630064FBA5390C9409C86F0);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralC580B374AA991574F91DFC86C068E7FAD661A3A4);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralE049DB547285CFCE1CB9A95934B6B6DCE2D219EC);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralF9D225733E1D10F9344C755C4A9C0870CD1DE97B);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralFE5F89F63E2381500F62A7CBD6954563BE44562F);
		s_Il2CppMethodInitialized = true;
	}
	TrailModule_t95D15372971E64A1977B7587ABAA87B1A31EF5C8  V_0;
	memset((&V_0), 0, sizeof(V_0));
	String_t* V_1 = NULL;
	uint32_t V_2 = 0;
	{
		// var instance = (UnityEngine.ParticleSystem.TrailModule)obj;
		RuntimeObject * L_0 = ___obj1;
		V_0 = (TrailModule_t95D15372971E64A1977B7587ABAA87B1A31EF5C8 )((*(TrailModule_t95D15372971E64A1977B7587ABAA87B1A31EF5C8 *)((TrailModule_t95D15372971E64A1977B7587ABAA87B1A31EF5C8 *)UnBox(L_0, TrailModule_t95D15372971E64A1977B7587ABAA87B1A31EF5C8_il2cpp_TypeInfo_var))));
		goto IL_038e;
	}

IL_000c:
	{
		String_t* L_1 = V_1;
		if (!L_1)
		{
			goto IL_0388;
		}
	}
	{
		String_t* L_2 = V_1;
		uint32_t L_3;
		L_3 = U3CPrivateImplementationDetailsU3E_ComputeStringHash_m3ADC1F612F9EE3DD518E6F0023A0DE0EE2B120A7((String_t*)L_2, /*hidden argument*/NULL);
		V_2 = (uint32_t)L_3;
		uint32_t L_4 = V_2;
		if ((!(((uint32_t)L_4) <= ((uint32_t)((int32_t)1376955374)))))
		{
			goto IL_008d;
		}
	}
	{
		uint32_t L_5 = V_2;
		if ((!(((uint32_t)L_5) <= ((uint32_t)((int32_t)494095910)))))
		{
			goto IL_004f;
		}
	}
	{
		uint32_t L_6 = V_2;
		if ((((int32_t)L_6) == ((int32_t)((int32_t)49525662))))
		{
			goto IL_010e;
		}
	}
	{
		uint32_t L_7 = V_2;
		if ((((int32_t)L_7) == ((int32_t)((int32_t)341298456))))
		{
			goto IL_021f;
		}
	}
	{
		uint32_t L_8 = V_2;
		if ((((int32_t)L_8) == ((int32_t)((int32_t)494095910))))
		{
			goto IL_0234;
		}
	}
	{
		goto IL_0388;
	}

IL_004f:
	{
		uint32_t L_9 = V_2;
		if ((!(((uint32_t)L_9) <= ((uint32_t)((int32_t)973733911)))))
		{
			goto IL_0072;
		}
	}
	{
		uint32_t L_10 = V_2;
		if ((((int32_t)L_10) == ((int32_t)((int32_t)559929418))))
		{
			goto IL_01b6;
		}
	}
	{
		uint32_t L_11 = V_2;
		if ((((int32_t)L_11) == ((int32_t)((int32_t)973733911))))
		{
			goto IL_0177;
		}
	}
	{
		goto IL_0388;
	}

IL_0072:
	{
		uint32_t L_12 = V_2;
		if ((((int32_t)L_12) == ((int32_t)((int32_t)1024708593))))
		{
			goto IL_014d;
		}
	}
	{
		uint32_t L_13 = V_2;
		if ((((int32_t)L_13) == ((int32_t)((int32_t)1376955374))))
		{
			goto IL_0138;
		}
	}
	{
		goto IL_0388;
	}

IL_008d:
	{
		uint32_t L_14 = V_2;
		if ((!(((uint32_t)L_14) <= ((uint32_t)((int32_t)-2100707162)))))
		{
			goto IL_00d3;
		}
	}
	{
		uint32_t L_15 = V_2;
		if ((!(((uint32_t)L_15) <= ((uint32_t)((int32_t)1975189197)))))
		{
			goto IL_00b8;
		}
	}
	{
		uint32_t L_16 = V_2;
		if ((((int32_t)L_16) == ((int32_t)((int32_t)1546474083))))
		{
			goto IL_020a;
		}
	}
	{
		uint32_t L_17 = V_2;
		if ((((int32_t)L_17) == ((int32_t)((int32_t)1975189197))))
		{
			goto IL_01cb;
		}
	}
	{
		goto IL_0388;
	}

IL_00b8:
	{
		uint32_t L_18 = V_2;
		if ((((int32_t)L_18) == ((int32_t)((int32_t)2053023684))))
		{
			goto IL_01a1;
		}
	}
	{
		uint32_t L_19 = V_2;
		if ((((int32_t)L_19) == ((int32_t)((int32_t)-2100707162))))
		{
			goto IL_0162;
		}
	}
	{
		goto IL_0388;
	}

IL_00d3:
	{
		uint32_t L_20 = V_2;
		if ((!(((uint32_t)L_20) <= ((uint32_t)((int32_t)-1319579393)))))
		{
			goto IL_00f6;
		}
	}
	{
		uint32_t L_21 = V_2;
		if ((((int32_t)L_21) == ((int32_t)((int32_t)-1562862963))))
		{
			goto IL_01e0;
		}
	}
	{
		uint32_t L_22 = V_2;
		if ((((int32_t)L_22) == ((int32_t)((int32_t)-1319579393))))
		{
			goto IL_018c;
		}
	}
	{
		goto IL_0388;
	}

IL_00f6:
	{
		uint32_t L_23 = V_2;
		if ((((int32_t)L_23) == ((int32_t)((int32_t)-1055777148))))
		{
			goto IL_0123;
		}
	}
	{
		uint32_t L_24 = V_2;
		if ((((int32_t)L_24) == ((int32_t)((int32_t)-413379935))))
		{
			goto IL_01f5;
		}
	}
	{
		goto IL_0388;
	}

IL_010e:
	{
		String_t* L_25 = V_1;
		bool L_26;
		L_26 = String_op_Equality_m50B3548E4AC232558190B0052877B290AA1D436A((String_t*)L_25, (String_t*)_stringLiteralF9D225733E1D10F9344C755C4A9C0870CD1DE97B, /*hidden argument*/NULL);
		if (L_26)
		{
			goto IL_0249;
		}
	}
	{
		goto IL_0388;
	}

IL_0123:
	{
		String_t* L_27 = V_1;
		bool L_28;
		L_28 = String_op_Equality_m50B3548E4AC232558190B0052877B290AA1D436A((String_t*)L_27, (String_t*)_stringLiteral60126327537B7B8E6EE33C43FE0C5CA8BCC3A06A, /*hidden argument*/NULL);
		if (L_28)
		{
			goto IL_0260;
		}
	}
	{
		goto IL_0388;
	}

IL_0138:
	{
		String_t* L_29 = V_1;
		bool L_30;
		L_30 = String_op_Equality_m50B3548E4AC232558190B0052877B290AA1D436A((String_t*)L_29, (String_t*)_stringLiteralBE2893848F9FC647C2288DA6581A1522E9695182, /*hidden argument*/NULL);
		if (L_30)
		{
			goto IL_0277;
		}
	}
	{
		goto IL_0388;
	}

IL_014d:
	{
		String_t* L_31 = V_1;
		bool L_32;
		L_32 = String_op_Equality_m50B3548E4AC232558190B0052877B290AA1D436A((String_t*)L_31, (String_t*)_stringLiteral4221314F268D184F46688D45C85446821F1F1BC3, /*hidden argument*/NULL);
		if (L_32)
		{
			goto IL_028e;
		}
	}
	{
		goto IL_0388;
	}

IL_0162:
	{
		String_t* L_33 = V_1;
		bool L_34;
		L_34 = String_op_Equality_m50B3548E4AC232558190B0052877B290AA1D436A((String_t*)L_33, (String_t*)_stringLiteral5C86338F177203D001C41D9C348A83D1338CC7D0, /*hidden argument*/NULL);
		if (L_34)
		{
			goto IL_02a5;
		}
	}
	{
		goto IL_0388;
	}

IL_0177:
	{
		String_t* L_35 = V_1;
		bool L_36;
		L_36 = String_op_Equality_m50B3548E4AC232558190B0052877B290AA1D436A((String_t*)L_35, (String_t*)_stringLiteralFE5F89F63E2381500F62A7CBD6954563BE44562F, /*hidden argument*/NULL);
		if (L_36)
		{
			goto IL_02bc;
		}
	}
	{
		goto IL_0388;
	}

IL_018c:
	{
		String_t* L_37 = V_1;
		bool L_38;
		L_38 = String_op_Equality_m50B3548E4AC232558190B0052877B290AA1D436A((String_t*)L_37, (String_t*)_stringLiteral87F70660D62DE5FC257FBADE9DA4EC9188597DE5, /*hidden argument*/NULL);
		if (L_38)
		{
			goto IL_02ce;
		}
	}
	{
		goto IL_0388;
	}

IL_01a1:
	{
		String_t* L_39 = V_1;
		bool L_40;
		L_40 = String_op_Equality_m50B3548E4AC232558190B0052877B290AA1D436A((String_t*)L_39, (String_t*)_stringLiteral354281948B6269615E32D856CF85B6F456724DAA, /*hidden argument*/NULL);
		if (L_40)
		{
			goto IL_02e5;
		}
	}
	{
		goto IL_0388;
	}

IL_01b6:
	{
		String_t* L_41 = V_1;
		bool L_42;
		L_42 = String_op_Equality_m50B3548E4AC232558190B0052877B290AA1D436A((String_t*)L_41, (String_t*)_stringLiteralADAEB0839588196B349BDB6CF33AFA3E0736360B, /*hidden argument*/NULL);
		if (L_42)
		{
			goto IL_02fc;
		}
	}
	{
		goto IL_0388;
	}

IL_01cb:
	{
		String_t* L_43 = V_1;
		bool L_44;
		L_44 = String_op_Equality_m50B3548E4AC232558190B0052877B290AA1D436A((String_t*)L_43, (String_t*)_stringLiteralC580B374AA991574F91DFC86C068E7FAD661A3A4, /*hidden argument*/NULL);
		if (L_44)
		{
			goto IL_0310;
		}
	}
	{
		goto IL_0388;
	}

IL_01e0:
	{
		String_t* L_45 = V_1;
		bool L_46;
		L_46 = String_op_Equality_m50B3548E4AC232558190B0052877B290AA1D436A((String_t*)L_45, (String_t*)_stringLiteralE049DB547285CFCE1CB9A95934B6B6DCE2D219EC, /*hidden argument*/NULL);
		if (L_46)
		{
			goto IL_0324;
		}
	}
	{
		goto IL_0388;
	}

IL_01f5:
	{
		String_t* L_47 = V_1;
		bool L_48;
		L_48 = String_op_Equality_m50B3548E4AC232558190B0052877B290AA1D436A((String_t*)L_47, (String_t*)_stringLiteralBF540D6548854CC21630064FBA5390C9409C86F0, /*hidden argument*/NULL);
		if (L_48)
		{
			goto IL_0338;
		}
	}
	{
		goto IL_0388;
	}

IL_020a:
	{
		String_t* L_49 = V_1;
		bool L_50;
		L_50 = String_op_Equality_m50B3548E4AC232558190B0052877B290AA1D436A((String_t*)L_49, (String_t*)_stringLiteral1D87A56AE67B2CD49CAE6E942C2FB7AD98925C00, /*hidden argument*/NULL);
		if (L_50)
		{
			goto IL_034c;
		}
	}
	{
		goto IL_0388;
	}

IL_021f:
	{
		String_t* L_51 = V_1;
		bool L_52;
		L_52 = String_op_Equality_m50B3548E4AC232558190B0052877B290AA1D436A((String_t*)L_51, (String_t*)_stringLiteralA967787586EC9E5A17A9C55E2002AB73A5E21A0A, /*hidden argument*/NULL);
		if (L_52)
		{
			goto IL_0360;
		}
	}
	{
		goto IL_0388;
	}

IL_0234:
	{
		String_t* L_53 = V_1;
		bool L_54;
		L_54 = String_op_Equality_m50B3548E4AC232558190B0052877B290AA1D436A((String_t*)L_53, (String_t*)_stringLiteral47C47DD09640803AD8016748EAE1F04DD1D41119, /*hidden argument*/NULL);
		if (L_54)
		{
			goto IL_0374;
		}
	}
	{
		goto IL_0388;
	}

IL_0249:
	{
		// instance.enabled = reader.Read<System.Boolean>(ES3Type_bool.Instance);
		ES3Reader_t2780AF8AA61DA2A817115CEF8612AC0E494D03C9 * L_55 = ___reader0;
		IL2CPP_RUNTIME_CLASS_INIT(ES3Type_bool_t8F309F7B9CC735FF1DEE68081B6E3CAB367745F4_il2cpp_TypeInfo_var);
		ES3Type_t8FBECB7AE75168648B9524E0C2A38DAD4555421D * L_56 = ((ES3Type_bool_t8F309F7B9CC735FF1DEE68081B6E3CAB367745F4_StaticFields*)il2cpp_codegen_static_fields_for(ES3Type_bool_t8F309F7B9CC735FF1DEE68081B6E3CAB367745F4_il2cpp_TypeInfo_var))->get_Instance_12();
		NullCheck((ES3Reader_t2780AF8AA61DA2A817115CEF8612AC0E494D03C9 *)L_55);
		bool L_57;
		L_57 = GenericVirtFuncInvoker1< bool, ES3Type_t8FBECB7AE75168648B9524E0C2A38DAD4555421D * >::Invoke(ES3Reader_Read_TisBoolean_t07D1E3F34E4813023D64F584DFF7B34C9D922F37_mC6D1B158268FF9B97822FF9F5B37FB1723FEDA22_RuntimeMethod_var, (ES3Reader_t2780AF8AA61DA2A817115CEF8612AC0E494D03C9 *)L_55, (ES3Type_t8FBECB7AE75168648B9524E0C2A38DAD4555421D *)L_56);
		TrailModule_set_enabled_mFC8451DDDF40CCBB3E32A4B30A001115F6346894((TrailModule_t95D15372971E64A1977B7587ABAA87B1A31EF5C8 *)(TrailModule_t95D15372971E64A1977B7587ABAA87B1A31EF5C8 *)(&V_0), (bool)L_57, /*hidden argument*/NULL);
		// break;
		goto IL_038e;
	}

IL_0260:
	{
		// instance.ratio = reader.Read<System.Single>(ES3Type_float.Instance);
		ES3Reader_t2780AF8AA61DA2A817115CEF8612AC0E494D03C9 * L_58 = ___reader0;
		IL2CPP_RUNTIME_CLASS_INIT(ES3Type_float_tF86B773C86731BD9AD79448B860BBB178FE77644_il2cpp_TypeInfo_var);
		ES3Type_t8FBECB7AE75168648B9524E0C2A38DAD4555421D * L_59 = ((ES3Type_float_tF86B773C86731BD9AD79448B860BBB178FE77644_StaticFields*)il2cpp_codegen_static_fields_for(ES3Type_float_tF86B773C86731BD9AD79448B860BBB178FE77644_il2cpp_TypeInfo_var))->get_Instance_12();
		NullCheck((ES3Reader_t2780AF8AA61DA2A817115CEF8612AC0E494D03C9 *)L_58);
		float L_60;
		L_60 = GenericVirtFuncInvoker1< float, ES3Type_t8FBECB7AE75168648B9524E0C2A38DAD4555421D * >::Invoke(ES3Reader_Read_TisSingle_tE07797BA3C98D4CA9B5A19413C19A76688AB899E_m4A0416374498BDA042B8EB21E49B72326D6CE5F4_RuntimeMethod_var, (ES3Reader_t2780AF8AA61DA2A817115CEF8612AC0E494D03C9 *)L_58, (ES3Type_t8FBECB7AE75168648B9524E0C2A38DAD4555421D *)L_59);
		TrailModule_set_ratio_m34E63B34E7B0E8D037AD45532B2E2D5BD0750189((TrailModule_t95D15372971E64A1977B7587ABAA87B1A31EF5C8 *)(TrailModule_t95D15372971E64A1977B7587ABAA87B1A31EF5C8 *)(&V_0), (float)L_60, /*hidden argument*/NULL);
		// break;
		goto IL_038e;
	}

IL_0277:
	{
		// instance.lifetime = reader.Read<UnityEngine.ParticleSystem.MinMaxCurve>(ES3Type_MinMaxCurve.Instance);
		ES3Reader_t2780AF8AA61DA2A817115CEF8612AC0E494D03C9 * L_61 = ___reader0;
		IL2CPP_RUNTIME_CLASS_INIT(ES3Type_MinMaxCurve_tC5342BF0F8735B85CB5E16FDD4C6FACC8AFAD3B7_il2cpp_TypeInfo_var);
		ES3Type_t8FBECB7AE75168648B9524E0C2A38DAD4555421D * L_62 = ((ES3Type_MinMaxCurve_tC5342BF0F8735B85CB5E16FDD4C6FACC8AFAD3B7_StaticFields*)il2cpp_codegen_static_fields_for(ES3Type_MinMaxCurve_tC5342BF0F8735B85CB5E16FDD4C6FACC8AFAD3B7_il2cpp_TypeInfo_var))->get_Instance_12();
		NullCheck((ES3Reader_t2780AF8AA61DA2A817115CEF8612AC0E494D03C9 *)L_61);
		MinMaxCurve_tF036239442AB2D438B1EDABEBC785426871084CD  L_63;
		L_63 = GenericVirtFuncInvoker1< MinMaxCurve_tF036239442AB2D438B1EDABEBC785426871084CD , ES3Type_t8FBECB7AE75168648B9524E0C2A38DAD4555421D * >::Invoke(ES3Reader_Read_TisMinMaxCurve_tF036239442AB2D438B1EDABEBC785426871084CD_mD285150CBFB52440643BBECB5ADF4EE8DE940535_RuntimeMethod_var, (ES3Reader_t2780AF8AA61DA2A817115CEF8612AC0E494D03C9 *)L_61, (ES3Type_t8FBECB7AE75168648B9524E0C2A38DAD4555421D *)L_62);
		TrailModule_set_lifetime_m57C898C42B9F18F5A0E88AAA7B10276CC158C39D((TrailModule_t95D15372971E64A1977B7587ABAA87B1A31EF5C8 *)(TrailModule_t95D15372971E64A1977B7587ABAA87B1A31EF5C8 *)(&V_0), (MinMaxCurve_tF036239442AB2D438B1EDABEBC785426871084CD )L_63, /*hidden argument*/NULL);
		// break;
		goto IL_038e;
	}

IL_028e:
	{
		// instance.lifetimeMultiplier = reader.Read<System.Single>(ES3Type_float.Instance);
		ES3Reader_t2780AF8AA61DA2A817115CEF8612AC0E494D03C9 * L_64 = ___reader0;
		IL2CPP_RUNTIME_CLASS_INIT(ES3Type_float_tF86B773C86731BD9AD79448B860BBB178FE77644_il2cpp_TypeInfo_var);
		ES3Type_t8FBECB7AE75168648B9524E0C2A38DAD4555421D * L_65 = ((ES3Type_float_tF86B773C86731BD9AD79448B860BBB178FE77644_StaticFields*)il2cpp_codegen_static_fields_for(ES3Type_float_tF86B773C86731BD9AD79448B860BBB178FE77644_il2cpp_TypeInfo_var))->get_Instance_12();
		NullCheck((ES3Reader_t2780AF8AA61DA2A817115CEF8612AC0E494D03C9 *)L_64);
		float L_66;
		L_66 = GenericVirtFuncInvoker1< float, ES3Type_t8FBECB7AE75168648B9524E0C2A38DAD4555421D * >::Invoke(ES3Reader_Read_TisSingle_tE07797BA3C98D4CA9B5A19413C19A76688AB899E_m4A0416374498BDA042B8EB21E49B72326D6CE5F4_RuntimeMethod_var, (ES3Reader_t2780AF8AA61DA2A817115CEF8612AC0E494D03C9 *)L_64, (ES3Type_t8FBECB7AE75168648B9524E0C2A38DAD4555421D *)L_65);
		TrailModule_set_lifetimeMultiplier_m23F95D65EE8C82152AE1CF2E41531EC2789A866B((TrailModule_t95D15372971E64A1977B7587ABAA87B1A31EF5C8 *)(TrailModule_t95D15372971E64A1977B7587ABAA87B1A31EF5C8 *)(&V_0), (float)L_66, /*hidden argument*/NULL);
		// break;
		goto IL_038e;
	}

IL_02a5:
	{
		// instance.minVertexDistance = reader.Read<System.Single>(ES3Type_float.Instance);
		ES3Reader_t2780AF8AA61DA2A817115CEF8612AC0E494D03C9 * L_67 = ___reader0;
		IL2CPP_RUNTIME_CLASS_INIT(ES3Type_float_tF86B773C86731BD9AD79448B860BBB178FE77644_il2cpp_TypeInfo_var);
		ES3Type_t8FBECB7AE75168648B9524E0C2A38DAD4555421D * L_68 = ((ES3Type_float_tF86B773C86731BD9AD79448B860BBB178FE77644_StaticFields*)il2cpp_codegen_static_fields_for(ES3Type_float_tF86B773C86731BD9AD79448B860BBB178FE77644_il2cpp_TypeInfo_var))->get_Instance_12();
		NullCheck((ES3Reader_t2780AF8AA61DA2A817115CEF8612AC0E494D03C9 *)L_67);
		float L_69;
		L_69 = GenericVirtFuncInvoker1< float, ES3Type_t8FBECB7AE75168648B9524E0C2A38DAD4555421D * >::Invoke(ES3Reader_Read_TisSingle_tE07797BA3C98D4CA9B5A19413C19A76688AB899E_m4A0416374498BDA042B8EB21E49B72326D6CE5F4_RuntimeMethod_var, (ES3Reader_t2780AF8AA61DA2A817115CEF8612AC0E494D03C9 *)L_67, (ES3Type_t8FBECB7AE75168648B9524E0C2A38DAD4555421D *)L_68);
		TrailModule_set_minVertexDistance_mF7C29F88FBF540CE4987F4CF9B141C624808FBC5((TrailModule_t95D15372971E64A1977B7587ABAA87B1A31EF5C8 *)(TrailModule_t95D15372971E64A1977B7587ABAA87B1A31EF5C8 *)(&V_0), (float)L_69, /*hidden argument*/NULL);
		// break;
		goto IL_038e;
	}

IL_02bc:
	{
		// instance.textureMode = reader.Read<UnityEngine.ParticleSystemTrailTextureMode>();
		ES3Reader_t2780AF8AA61DA2A817115CEF8612AC0E494D03C9 * L_70 = ___reader0;
		NullCheck((ES3Reader_t2780AF8AA61DA2A817115CEF8612AC0E494D03C9 *)L_70);
		int32_t L_71;
		L_71 = GenericVirtFuncInvoker0< int32_t >::Invoke(ES3Reader_Read_TisParticleSystemTrailTextureMode_tF3259187CA4D0A61EDB3A40E63CBF6C42641CE9F_m055DB1212E8BC34F385DF7D302F16241554E9730_RuntimeMethod_var, (ES3Reader_t2780AF8AA61DA2A817115CEF8612AC0E494D03C9 *)L_70);
		TrailModule_set_textureMode_mC1F8AE0D2965FC47BDBFF4F53E0673D5FB58CF28((TrailModule_t95D15372971E64A1977B7587ABAA87B1A31EF5C8 *)(TrailModule_t95D15372971E64A1977B7587ABAA87B1A31EF5C8 *)(&V_0), (int32_t)L_71, /*hidden argument*/NULL);
		// break;
		goto IL_038e;
	}

IL_02ce:
	{
		// instance.worldSpace = reader.Read<System.Boolean>(ES3Type_bool.Instance);
		ES3Reader_t2780AF8AA61DA2A817115CEF8612AC0E494D03C9 * L_72 = ___reader0;
		IL2CPP_RUNTIME_CLASS_INIT(ES3Type_bool_t8F309F7B9CC735FF1DEE68081B6E3CAB367745F4_il2cpp_TypeInfo_var);
		ES3Type_t8FBECB7AE75168648B9524E0C2A38DAD4555421D * L_73 = ((ES3Type_bool_t8F309F7B9CC735FF1DEE68081B6E3CAB367745F4_StaticFields*)il2cpp_codegen_static_fields_for(ES3Type_bool_t8F309F7B9CC735FF1DEE68081B6E3CAB367745F4_il2cpp_TypeInfo_var))->get_Instance_12();
		NullCheck((ES3Reader_t2780AF8AA61DA2A817115CEF8612AC0E494D03C9 *)L_72);
		bool L_74;
		L_74 = GenericVirtFuncInvoker1< bool, ES3Type_t8FBECB7AE75168648B9524E0C2A38DAD4555421D * >::Invoke(ES3Reader_Read_TisBoolean_t07D1E3F34E4813023D64F584DFF7B34C9D922F37_mC6D1B158268FF9B97822FF9F5B37FB1723FEDA22_RuntimeMethod_var, (ES3Reader_t2780AF8AA61DA2A817115CEF8612AC0E494D03C9 *)L_72, (ES3Type_t8FBECB7AE75168648B9524E0C2A38DAD4555421D *)L_73);
		TrailModule_set_worldSpace_m42A63AF4A96F24A621A29A0F35240195F0E56B1A((TrailModule_t95D15372971E64A1977B7587ABAA87B1A31EF5C8 *)(TrailModule_t95D15372971E64A1977B7587ABAA87B1A31EF5C8 *)(&V_0), (bool)L_74, /*hidden argument*/NULL);
		// break;
		goto IL_038e;
	}

IL_02e5:
	{
		// instance.dieWithParticles = reader.Read<System.Boolean>(ES3Type_bool.Instance);
		ES3Reader_t2780AF8AA61DA2A817115CEF8612AC0E494D03C9 * L_75 = ___reader0;
		IL2CPP_RUNTIME_CLASS_INIT(ES3Type_bool_t8F309F7B9CC735FF1DEE68081B6E3CAB367745F4_il2cpp_TypeInfo_var);
		ES3Type_t8FBECB7AE75168648B9524E0C2A38DAD4555421D * L_76 = ((ES3Type_bool_t8F309F7B9CC735FF1DEE68081B6E3CAB367745F4_StaticFields*)il2cpp_codegen_static_fields_for(ES3Type_bool_t8F309F7B9CC735FF1DEE68081B6E3CAB367745F4_il2cpp_TypeInfo_var))->get_Instance_12();
		NullCheck((ES3Reader_t2780AF8AA61DA2A817115CEF8612AC0E494D03C9 *)L_75);
		bool L_77;
		L_77 = GenericVirtFuncInvoker1< bool, ES3Type_t8FBECB7AE75168648B9524E0C2A38DAD4555421D * >::Invoke(ES3Reader_Read_TisBoolean_t07D1E3F34E4813023D64F584DFF7B34C9D922F37_mC6D1B158268FF9B97822FF9F5B37FB1723FEDA22_RuntimeMethod_var, (ES3Reader_t2780AF8AA61DA2A817115CEF8612AC0E494D03C9 *)L_75, (ES3Type_t8FBECB7AE75168648B9524E0C2A38DAD4555421D *)L_76);
		TrailModule_set_dieWithParticles_mB7C4E8DC2F908FDF6D57A77B54B821E360D8DA99((TrailModule_t95D15372971E64A1977B7587ABAA87B1A31EF5C8 *)(TrailModule_t95D15372971E64A1977B7587ABAA87B1A31EF5C8 *)(&V_0), (bool)L_77, /*hidden argument*/NULL);
		// break;
		goto IL_038e;
	}

IL_02fc:
	{
		// instance.sizeAffectsWidth = reader.Read<System.Boolean>(ES3Type_bool.Instance);
		ES3Reader_t2780AF8AA61DA2A817115CEF8612AC0E494D03C9 * L_78 = ___reader0;
		IL2CPP_RUNTIME_CLASS_INIT(ES3Type_bool_t8F309F7B9CC735FF1DEE68081B6E3CAB367745F4_il2cpp_TypeInfo_var);
		ES3Type_t8FBECB7AE75168648B9524E0C2A38DAD4555421D * L_79 = ((ES3Type_bool_t8F309F7B9CC735FF1DEE68081B6E3CAB367745F4_StaticFields*)il2cpp_codegen_static_fields_for(ES3Type_bool_t8F309F7B9CC735FF1DEE68081B6E3CAB367745F4_il2cpp_TypeInfo_var))->get_Instance_12();
		NullCheck((ES3Reader_t2780AF8AA61DA2A817115CEF8612AC0E494D03C9 *)L_78);
		bool L_80;
		L_80 = GenericVirtFuncInvoker1< bool, ES3Type_t8FBECB7AE75168648B9524E0C2A38DAD4555421D * >::Invoke(ES3Reader_Read_TisBoolean_t07D1E3F34E4813023D64F584DFF7B34C9D922F37_mC6D1B158268FF9B97822FF9F5B37FB1723FEDA22_RuntimeMethod_var, (ES3Reader_t2780AF8AA61DA2A817115CEF8612AC0E494D03C9 *)L_78, (ES3Type_t8FBECB7AE75168648B9524E0C2A38DAD4555421D *)L_79);
		TrailModule_set_sizeAffectsWidth_m3517856E39080DA69B447499C8846D2491B0ABF0((TrailModule_t95D15372971E64A1977B7587ABAA87B1A31EF5C8 *)(TrailModule_t95D15372971E64A1977B7587ABAA87B1A31EF5C8 *)(&V_0), (bool)L_80, /*hidden argument*/NULL);
		// break;
		goto IL_038e;
	}

IL_0310:
	{
		// instance.sizeAffectsLifetime = reader.Read<System.Boolean>(ES3Type_bool.Instance);
		ES3Reader_t2780AF8AA61DA2A817115CEF8612AC0E494D03C9 * L_81 = ___reader0;
		IL2CPP_RUNTIME_CLASS_INIT(ES3Type_bool_t8F309F7B9CC735FF1DEE68081B6E3CAB367745F4_il2cpp_TypeInfo_var);
		ES3Type_t8FBECB7AE75168648B9524E0C2A38DAD4555421D * L_82 = ((ES3Type_bool_t8F309F7B9CC735FF1DEE68081B6E3CAB367745F4_StaticFields*)il2cpp_codegen_static_fields_for(ES3Type_bool_t8F309F7B9CC735FF1DEE68081B6E3CAB367745F4_il2cpp_TypeInfo_var))->get_Instance_12();
		NullCheck((ES3Reader_t2780AF8AA61DA2A817115CEF8612AC0E494D03C9 *)L_81);
		bool L_83;
		L_83 = GenericVirtFuncInvoker1< bool, ES3Type_t8FBECB7AE75168648B9524E0C2A38DAD4555421D * >::Invoke(ES3Reader_Read_TisBoolean_t07D1E3F34E4813023D64F584DFF7B34C9D922F37_mC6D1B158268FF9B97822FF9F5B37FB1723FEDA22_RuntimeMethod_var, (ES3Reader_t2780AF8AA61DA2A817115CEF8612AC0E494D03C9 *)L_81, (ES3Type_t8FBECB7AE75168648B9524E0C2A38DAD4555421D *)L_82);
		TrailModule_set_sizeAffectsLifetime_m98BF4A6594193D824B52D88371CF963ACBA388FD((TrailModule_t95D15372971E64A1977B7587ABAA87B1A31EF5C8 *)(TrailModule_t95D15372971E64A1977B7587ABAA87B1A31EF5C8 *)(&V_0), (bool)L_83, /*hidden argument*/NULL);
		// break;
		goto IL_038e;
	}

IL_0324:
	{
		// instance.inheritParticleColor = reader.Read<System.Boolean>(ES3Type_bool.Instance);
		ES3Reader_t2780AF8AA61DA2A817115CEF8612AC0E494D03C9 * L_84 = ___reader0;
		IL2CPP_RUNTIME_CLASS_INIT(ES3Type_bool_t8F309F7B9CC735FF1DEE68081B6E3CAB367745F4_il2cpp_TypeInfo_var);
		ES3Type_t8FBECB7AE75168648B9524E0C2A38DAD4555421D * L_85 = ((ES3Type_bool_t8F309F7B9CC735FF1DEE68081B6E3CAB367745F4_StaticFields*)il2cpp_codegen_static_fields_for(ES3Type_bool_t8F309F7B9CC735FF1DEE68081B6E3CAB367745F4_il2cpp_TypeInfo_var))->get_Instance_12();
		NullCheck((ES3Reader_t2780AF8AA61DA2A817115CEF8612AC0E494D03C9 *)L_84);
		bool L_86;
		L_86 = GenericVirtFuncInvoker1< bool, ES3Type_t8FBECB7AE75168648B9524E0C2A38DAD4555421D * >::Invoke(ES3Reader_Read_TisBoolean_t07D1E3F34E4813023D64F584DFF7B34C9D922F37_mC6D1B158268FF9B97822FF9F5B37FB1723FEDA22_RuntimeMethod_var, (ES3Reader_t2780AF8AA61DA2A817115CEF8612AC0E494D03C9 *)L_84, (ES3Type_t8FBECB7AE75168648B9524E0C2A38DAD4555421D *)L_85);
		TrailModule_set_inheritParticleColor_mCD83E87B5E00F2BFFBE08AD2D1D68606283A4FEE((TrailModule_t95D15372971E64A1977B7587ABAA87B1A31EF5C8 *)(TrailModule_t95D15372971E64A1977B7587ABAA87B1A31EF5C8 *)(&V_0), (bool)L_86, /*hidden argument*/NULL);
		// break;
		goto IL_038e;
	}

IL_0338:
	{
		// instance.colorOverLifetime = reader.Read<UnityEngine.ParticleSystem.MinMaxGradient>(ES3Type_MinMaxGradient.Instance);
		ES3Reader_t2780AF8AA61DA2A817115CEF8612AC0E494D03C9 * L_87 = ___reader0;
		IL2CPP_RUNTIME_CLASS_INIT(ES3Type_MinMaxGradient_t5DD353D60E95642AB39D1C97C6FD6DD1B067D3CF_il2cpp_TypeInfo_var);
		ES3Type_t8FBECB7AE75168648B9524E0C2A38DAD4555421D * L_88 = ((ES3Type_MinMaxGradient_t5DD353D60E95642AB39D1C97C6FD6DD1B067D3CF_StaticFields*)il2cpp_codegen_static_fields_for(ES3Type_MinMaxGradient_t5DD353D60E95642AB39D1C97C6FD6DD1B067D3CF_il2cpp_TypeInfo_var))->get_Instance_12();
		NullCheck((ES3Reader_t2780AF8AA61DA2A817115CEF8612AC0E494D03C9 *)L_87);
		MinMaxGradient_tF4530B26F29D9635D670A33B9EE581EAC48C12B7  L_89;
		L_89 = GenericVirtFuncInvoker1< MinMaxGradient_tF4530B26F29D9635D670A33B9EE581EAC48C12B7 , ES3Type_t8FBECB7AE75168648B9524E0C2A38DAD4555421D * >::Invoke(ES3Reader_Read_TisMinMaxGradient_tF4530B26F29D9635D670A33B9EE581EAC48C12B7_m6A3DD8CBBAC5D32B838B6C4399009AB8AA512ACC_RuntimeMethod_var, (ES3Reader_t2780AF8AA61DA2A817115CEF8612AC0E494D03C9 *)L_87, (ES3Type_t8FBECB7AE75168648B9524E0C2A38DAD4555421D *)L_88);
		TrailModule_set_colorOverLifetime_mCD56BD4B75D3A3947069BA1B93FEC78AAE08DF27((TrailModule_t95D15372971E64A1977B7587ABAA87B1A31EF5C8 *)(TrailModule_t95D15372971E64A1977B7587ABAA87B1A31EF5C8 *)(&V_0), (MinMaxGradient_tF4530B26F29D9635D670A33B9EE581EAC48C12B7 )L_89, /*hidden argument*/NULL);
		// break;
		goto IL_038e;
	}

IL_034c:
	{
		// instance.widthOverTrail = reader.Read<UnityEngine.ParticleSystem.MinMaxCurve>(ES3Type_MinMaxCurve.Instance);
		ES3Reader_t2780AF8AA61DA2A817115CEF8612AC0E494D03C9 * L_90 = ___reader0;
		IL2CPP_RUNTIME_CLASS_INIT(ES3Type_MinMaxCurve_tC5342BF0F8735B85CB5E16FDD4C6FACC8AFAD3B7_il2cpp_TypeInfo_var);
		ES3Type_t8FBECB7AE75168648B9524E0C2A38DAD4555421D * L_91 = ((ES3Type_MinMaxCurve_tC5342BF0F8735B85CB5E16FDD4C6FACC8AFAD3B7_StaticFields*)il2cpp_codegen_static_fields_for(ES3Type_MinMaxCurve_tC5342BF0F8735B85CB5E16FDD4C6FACC8AFAD3B7_il2cpp_TypeInfo_var))->get_Instance_12();
		NullCheck((ES3Reader_t2780AF8AA61DA2A817115CEF8612AC0E494D03C9 *)L_90);
		MinMaxCurve_tF036239442AB2D438B1EDABEBC785426871084CD  L_92;
		L_92 = GenericVirtFuncInvoker1< MinMaxCurve_tF036239442AB2D438B1EDABEBC785426871084CD , ES3Type_t8FBECB7AE75168648B9524E0C2A38DAD4555421D * >::Invoke(ES3Reader_Read_TisMinMaxCurve_tF036239442AB2D438B1EDABEBC785426871084CD_mD285150CBFB52440643BBECB5ADF4EE8DE940535_RuntimeMethod_var, (ES3Reader_t2780AF8AA61DA2A817115CEF8612AC0E494D03C9 *)L_90, (ES3Type_t8FBECB7AE75168648B9524E0C2A38DAD4555421D *)L_91);
		TrailModule_set_widthOverTrail_m6C0A896EBFDED7CE46344B3A0B04212934F30DE1((TrailModule_t95D15372971E64A1977B7587ABAA87B1A31EF5C8 *)(TrailModule_t95D15372971E64A1977B7587ABAA87B1A31EF5C8 *)(&V_0), (MinMaxCurve_tF036239442AB2D438B1EDABEBC785426871084CD )L_92, /*hidden argument*/NULL);
		// break;
		goto IL_038e;
	}

IL_0360:
	{
		// instance.widthOverTrailMultiplier = reader.Read<System.Single>(ES3Type_float.Instance);
		ES3Reader_t2780AF8AA61DA2A817115CEF8612AC0E494D03C9 * L_93 = ___reader0;
		IL2CPP_RUNTIME_CLASS_INIT(ES3Type_float_tF86B773C86731BD9AD79448B860BBB178FE77644_il2cpp_TypeInfo_var);
		ES3Type_t8FBECB7AE75168648B9524E0C2A38DAD4555421D * L_94 = ((ES3Type_float_tF86B773C86731BD9AD79448B860BBB178FE77644_StaticFields*)il2cpp_codegen_static_fields_for(ES3Type_float_tF86B773C86731BD9AD79448B860BBB178FE77644_il2cpp_TypeInfo_var))->get_Instance_12();
		NullCheck((ES3Reader_t2780AF8AA61DA2A817115CEF8612AC0E494D03C9 *)L_93);
		float L_95;
		L_95 = GenericVirtFuncInvoker1< float, ES3Type_t8FBECB7AE75168648B9524E0C2A38DAD4555421D * >::Invoke(ES3Reader_Read_TisSingle_tE07797BA3C98D4CA9B5A19413C19A76688AB899E_m4A0416374498BDA042B8EB21E49B72326D6CE5F4_RuntimeMethod_var, (ES3Reader_t2780AF8AA61DA2A817115CEF8612AC0E494D03C9 *)L_93, (ES3Type_t8FBECB7AE75168648B9524E0C2A38DAD4555421D *)L_94);
		TrailModule_set_widthOverTrailMultiplier_m6A7EA2856CF30B710CCB528EA3EBFD1799C19BD4((TrailModule_t95D15372971E64A1977B7587ABAA87B1A31EF5C8 *)(TrailModule_t95D15372971E64A1977B7587ABAA87B1A31EF5C8 *)(&V_0), (float)L_95, /*hidden argument*/NULL);
		// break;
		goto IL_038e;
	}

IL_0374:
	{
		// instance.colorOverTrail = reader.Read<UnityEngine.ParticleSystem.MinMaxGradient>(ES3Type_MinMaxGradient.Instance);
		ES3Reader_t2780AF8AA61DA2A817115CEF8612AC0E494D03C9 * L_96 = ___reader0;
		IL2CPP_RUNTIME_CLASS_INIT(ES3Type_MinMaxGradient_t5DD353D60E95642AB39D1C97C6FD6DD1B067D3CF_il2cpp_TypeInfo_var);
		ES3Type_t8FBECB7AE75168648B9524E0C2A38DAD4555421D * L_97 = ((ES3Type_MinMaxGradient_t5DD353D60E95642AB39D1C97C6FD6DD1B067D3CF_StaticFields*)il2cpp_codegen_static_fields_for(ES3Type_MinMaxGradient_t5DD353D60E95642AB39D1C97C6FD6DD1B067D3CF_il2cpp_TypeInfo_var))->get_Instance_12();
		NullCheck((ES3Reader_t2780AF8AA61DA2A817115CEF8612AC0E494D03C9 *)L_96);
		MinMaxGradient_tF4530B26F29D9635D670A33B9EE581EAC48C12B7  L_98;
		L_98 = GenericVirtFuncInvoker1< MinMaxGradient_tF4530B26F29D9635D670A33B9EE581EAC48C12B7 , ES3Type_t8FBECB7AE75168648B9524E0C2A38DAD4555421D * >::Invoke(ES3Reader_Read_TisMinMaxGradient_tF4530B26F29D9635D670A33B9EE581EAC48C12B7_m6A3DD8CBBAC5D32B838B6C4399009AB8AA512ACC_RuntimeMethod_var, (ES3Reader_t2780AF8AA61DA2A817115CEF8612AC0E494D03C9 *)L_96, (ES3Type_t8FBECB7AE75168648B9524E0C2A38DAD4555421D *)L_97);
		TrailModule_set_colorOverTrail_m8440C6574C8310292B93D70EA4FE3EE8C40DF8DB((TrailModule_t95D15372971E64A1977B7587ABAA87B1A31EF5C8 *)(TrailModule_t95D15372971E64A1977B7587ABAA87B1A31EF5C8 *)(&V_0), (MinMaxGradient_tF4530B26F29D9635D670A33B9EE581EAC48C12B7 )L_98, /*hidden argument*/NULL);
		// break;
		goto IL_038e;
	}

IL_0388:
	{
		// reader.Skip();
		ES3Reader_t2780AF8AA61DA2A817115CEF8612AC0E494D03C9 * L_99 = ___reader0;
		NullCheck((ES3Reader_t2780AF8AA61DA2A817115CEF8612AC0E494D03C9 *)L_99);
		VirtActionInvoker0::Invoke(41 /* System.Void ES3Reader::Skip() */, (ES3Reader_t2780AF8AA61DA2A817115CEF8612AC0E494D03C9 *)L_99);
	}

IL_038e:
	{
		// while((propertyName = reader.ReadPropertyName()) != null)
		ES3Reader_t2780AF8AA61DA2A817115CEF8612AC0E494D03C9 * L_100 = ___reader0;
		NullCheck((ES3Reader_t2780AF8AA61DA2A817115CEF8612AC0E494D03C9 *)L_100);
		String_t* L_101;
		L_101 = VirtFuncInvoker0< String_t* >::Invoke(21 /* System.String ES3Reader::ReadPropertyName() */, (ES3Reader_t2780AF8AA61DA2A817115CEF8612AC0E494D03C9 *)L_100);
		String_t* L_102 = (String_t*)L_101;
		V_1 = (String_t*)L_102;
		if (L_102)
		{
			goto IL_000c;
		}
	}
	{
		// }
		return;
	}
}
