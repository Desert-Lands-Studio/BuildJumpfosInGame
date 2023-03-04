#include "pch-cpp.hpp"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif


#include <stdint.h>
#include <limits>


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

// System.Char[]
struct CharU5BU5D_t7B7FC5BC8091AA3B9CB0B29CDD80B5EE9254AA34;
// ES3Internal.ES3Member[]
struct ES3MemberU5BU5D_t10EB896E69226CE07D8ED3EFFA1A51616BAD952A;
// System.Int32[]
struct Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32;
// ES3Reader
struct ES3Reader_t2780AF8AA61DA2A817115CEF8612AC0E494D03C9;
// ES3Settings
struct ES3Settings_t2B338F5F7BE6842BF4489E6FF7B312DC5F6EBDB2;
// ES3Types.ES3Type
struct ES3Type_t8FBECB7AE75168648B9524E0C2A38DAD4555421D;
// ES3Types.ES3Type_RenderTexture
struct ES3Type_RenderTexture_t7B14573C56809AFDC0A1C481D6B61E2146DEF194;
// System.Collections.IEnumerator
struct IEnumerator_t5956F3AFB7ECF1117E3BC5890E7FC7B7F7A04105;
// UnityEngine.Object
struct Object_tF2F3778131EFF286AF62B7B013A170F95A91571A;
// UnityEngine.RenderTexture
struct RenderTexture_t5FE7A5B47EF962A0E8D7BEBA05E9FC87D49A1849;
// System.String
struct String_t;
// UnityEngine.Texture
struct Texture_t9FE0218A1EEDF266E8C85879FE123265CACC95AE;
// System.Type
struct Type_t;
// System.Void
struct Void_t700C6383A2A510C2CF4DD86DABD5CA9FF70ADAC5;
// ES3Reader/ES3ReaderPropertyEnumerator
struct ES3ReaderPropertyEnumerator_tFC854F4BE72BFA234682EB1909D92457534A979D;

IL2CPP_EXTERN_C RuntimeClass* ES3Type_bool_t8F309F7B9CC735FF1DEE68081B6E3CAB367745F4_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* ES3Type_float_tF86B773C86731BD9AD79448B860BBB178FE77644_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* ES3Type_int_tF64C15D40AD0CC7C15BCD1CEC3C5C6BF837BD167_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* ES3Type_string_tC47BFBE3CC816F3C70B51558C68F0C6470C5EFE5_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* IDisposable_t099785737FC6A1E3699919A94109383715A8D807_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* IEnumerator_t5956F3AFB7ECF1117E3BC5890E7FC7B7F7A04105_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* RenderTexture_t5FE7A5B47EF962A0E8D7BEBA05E9FC87D49A1849_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* String_t_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Texture_t9FE0218A1EEDF266E8C85879FE123265CACC95AE_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C String_t* _stringLiteral201D9D00BB60DC2318D21CF9902290EFE255D5DC;
IL2CPP_EXTERN_C String_t* _stringLiteral2ADFC3FFF7C52D554F0435A348A5345C9FCD7FF8;
IL2CPP_EXTERN_C String_t* _stringLiteral2E201D1972661439FD3C8523C55723E7E9BCC7DA;
IL2CPP_EXTERN_C String_t* _stringLiteral2EE7B6B0E37E14930BBA497867139BFD0617CE04;
IL2CPP_EXTERN_C String_t* _stringLiteral3A04F86957625CB28FA670EECF997E6BAD45BBE7;
IL2CPP_EXTERN_C String_t* _stringLiteral3BC15E3C2F40466B2DC85C4776499817B8306CBB;
IL2CPP_EXTERN_C String_t* _stringLiteral3F1522C8DB7943F2AE3AA1563D3AC25D9C8B93D1;
IL2CPP_EXTERN_C String_t* _stringLiteral53D3413057D7E52F44470A335C590748745352B1;
IL2CPP_EXTERN_C String_t* _stringLiteral647E0FB2B5E859CC4BD7C73623B82C8EFABA2563;
IL2CPP_EXTERN_C String_t* _stringLiteral65B008F04EC40A696263EF679CF274BD10999A5D;
IL2CPP_EXTERN_C String_t* _stringLiteral71C5F9C3E2F3C81C5BBC7FD313F6938654E61138;
IL2CPP_EXTERN_C String_t* _stringLiteral75C9716749EA210206E3467390B7A11F3F33DDFA;
IL2CPP_EXTERN_C String_t* _stringLiteral7606720A7AEF5939309A8E4FCB8274252FA3D7BF;
IL2CPP_EXTERN_C String_t* _stringLiteral7A4A6E2A7090298F814A9D44C89F8634249BEF07;
IL2CPP_EXTERN_C String_t* _stringLiteral7FF61C3A55BCA1287974D8740F945250B3F0F084;
IL2CPP_EXTERN_C String_t* _stringLiteral83AC9669A9053DD15B9F2E82D2CE2369EFE131BA;
IL2CPP_EXTERN_C String_t* _stringLiteral95F57476C0AA778364404E7CCCD7499BF1BF3757;
IL2CPP_EXTERN_C String_t* _stringLiteral9AB5ADF8A8A53110245466F7C226F7935F5FE95F;
IL2CPP_EXTERN_C String_t* _stringLiteralB49A1DF483856544CEC6018E8C944DB6E16A8D57;
IL2CPP_EXTERN_C String_t* _stringLiteralBA9362732D25B1644B7D8DEC5DF6F036A4A66DE5;
IL2CPP_EXTERN_C String_t* _stringLiteralC959D767B7F0BD38D9DA8A64A4750C3A0972E2A0;
IL2CPP_EXTERN_C String_t* _stringLiteralCD44AC57FFE6CAC7824F4CAA223F1BB8B4CB0D73;
IL2CPP_EXTERN_C String_t* _stringLiteralCE18B047107AA23D1AA9B2ED32D316148E02655F;
IL2CPP_EXTERN_C String_t* _stringLiteralEA8FBF382D8AC9EDB8FFC14A350641B987F5C631;
IL2CPP_EXTERN_C String_t* _stringLiteralEBF5FE0CBF3EEA67902EEA700B7216E3DB0D8E84;
IL2CPP_EXTERN_C String_t* _stringLiteralECAEEB225F8689DE45DEB4FA21CE34E1960B1B50;
IL2CPP_EXTERN_C String_t* _stringLiteralF23E83744C9D6FC70D71B723AAED8006D6780BCB;
IL2CPP_EXTERN_C String_t* _stringLiteralF2AF7DD0BFF41B7B35037F018DAABE7DCF357A7B;
IL2CPP_EXTERN_C String_t* _stringLiteralF38CFAE6A91D072D4453C29FF44D81D459A582F1;
IL2CPP_EXTERN_C String_t* _stringLiteralF3FA58C10BBB9830102605E24AF89DC619908DFA;
IL2CPP_EXTERN_C String_t* _stringLiteralF9EE582B77C320A1F6A3DF72205857C4248BAC79;
IL2CPP_EXTERN_C const RuntimeMethod* ES3Reader_Read_TisAnisotropicFiltering_tAC3D1448B262D5869946CD1CDD2C8DAE3A7A537B_mAF1268AAC3E461D6E0604A19FAF0325873B6EC8A_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* ES3Reader_Read_TisBoolean_t07D1E3F34E4813023D64F584DFF7B34C9D922F37_mC6D1B158268FF9B97822FF9F5B37FB1723FEDA22_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* ES3Reader_Read_TisFilterMode_tE90A08FD96A142C761463D65E524BCDBFEEE3D19_m9819C2A442797B4060B0D9A80CFA96CFD6102839_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* ES3Reader_Read_TisGraphicsFormat_t07A3C024BC77B843C53A369D6FC02ABD27D2AB1D_mCBD36004B10F649C93215AB4717F6F0D7118BF7D_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* ES3Reader_Read_TisInt32_tFDE5F8CD43D10453F6A2E0C77FE48C6CC7009046_m2B74AA6627F5B1D21171D56C42F71DE5A7C1B4A6_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* ES3Reader_Read_TisRenderTextureDescriptor_t67FF189E1F35AEB5D6C43A2D7103F3A8A8CA0B47_m427886ADAAF96C7BA9BD423544128494F96D69E7_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* ES3Reader_Read_TisRenderTextureFormat_t8371287102ED67772EF78229CF4AB9D38C2CD626_mE6358E03407F5C15B58B292C79D4770DE3FAC95A_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* ES3Reader_Read_TisRenderTextureMemoryless_t37547D68C2186D2650440F719302CDA4A3BB7F67_m3A980BA15AADBBB8393C3BC88CE17EEDDC89B027_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* ES3Reader_Read_TisSingle_tE07797BA3C98D4CA9B5A19413C19A76688AB899E_m4A0416374498BDA042B8EB21E49B72326D6CE5F4_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* ES3Reader_Read_TisString_t_m883861F3B58239392073ABF39876826EEB87DF9C_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* ES3Reader_Read_TisTextureDimension_tADCCB7C1D30E4D1182651BA9094B4DE61B63EACC_m19EAA3B93D10636C17A62A3D8437349223CFD988_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* ES3Reader_Read_TisTextureWrapMode_t86DDA8206E4AA784A1218D0DE3C5F6826D7549EB_m7926E449CD0B8BD56E5BF145DD0CCFE1C567F107_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* ES3Reader_Read_TisVRTextureUsage_t3C09DF3DD90B5620BC0AB6F8078DFEF4E607F645_m7DE3966E4815BB13132866CB005EEE5B90FF51C2_RuntimeMethod_var;


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

// ES3Reader/ES3ReaderPropertyEnumerator
struct ES3ReaderPropertyEnumerator_tFC854F4BE72BFA234682EB1909D92457534A979D  : public RuntimeObject
{
public:
	// ES3Reader ES3Reader/ES3ReaderPropertyEnumerator::reader
	ES3Reader_t2780AF8AA61DA2A817115CEF8612AC0E494D03C9 * ___reader_0;

public:
	inline static int32_t get_offset_of_reader_0() { return static_cast<int32_t>(offsetof(ES3ReaderPropertyEnumerator_tFC854F4BE72BFA234682EB1909D92457534A979D, ___reader_0)); }
	inline ES3Reader_t2780AF8AA61DA2A817115CEF8612AC0E494D03C9 * get_reader_0() const { return ___reader_0; }
	inline ES3Reader_t2780AF8AA61DA2A817115CEF8612AC0E494D03C9 ** get_address_of_reader_0() { return &___reader_0; }
	inline void set_reader_0(ES3Reader_t2780AF8AA61DA2A817115CEF8612AC0E494D03C9 * value)
	{
		___reader_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___reader_0), (void*)value);
	}
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


// ES3Types.ES3ObjectType
struct ES3ObjectType_tB106E6EA007FC780784E8BBBE7E152E474F456FF  : public ES3Type_t8FBECB7AE75168648B9524E0C2A38DAD4555421D
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


// ES3Types.ES3Type_string
struct ES3Type_string_tC47BFBE3CC816F3C70B51558C68F0C6470C5EFE5  : public ES3Type_t8FBECB7AE75168648B9524E0C2A38DAD4555421D
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


// UnityEngine.AnisotropicFiltering
struct AnisotropicFiltering_tAC3D1448B262D5869946CD1CDD2C8DAE3A7A537B 
{
public:
	// System.Int32 UnityEngine.AnisotropicFiltering::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(AnisotropicFiltering_tAC3D1448B262D5869946CD1CDD2C8DAE3A7A537B, ___value___2)); }
	inline int32_t get_value___2() const { return ___value___2; }
	inline int32_t* get_address_of_value___2() { return &___value___2; }
	inline void set_value___2(int32_t value)
	{
		___value___2 = value;
	}
};


// ES3Types.ES3Type_RenderTexture
struct ES3Type_RenderTexture_t7B14573C56809AFDC0A1C481D6B61E2146DEF194  : public ES3ObjectType_tB106E6EA007FC780784E8BBBE7E152E474F456FF
{
public:

public:
};


// UnityEngine.FilterMode
struct FilterMode_tE90A08FD96A142C761463D65E524BCDBFEEE3D19 
{
public:
	// System.Int32 UnityEngine.FilterMode::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(FilterMode_tE90A08FD96A142C761463D65E524BCDBFEEE3D19, ___value___2)); }
	inline int32_t get_value___2() const { return ___value___2; }
	inline int32_t* get_address_of_value___2() { return &___value___2; }
	inline void set_value___2(int32_t value)
	{
		___value___2 = value;
	}
};


// UnityEngine.Experimental.Rendering.GraphicsFormat
struct GraphicsFormat_t07A3C024BC77B843C53A369D6FC02ABD27D2AB1D 
{
public:
	// System.Int32 UnityEngine.Experimental.Rendering.GraphicsFormat::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(GraphicsFormat_t07A3C024BC77B843C53A369D6FC02ABD27D2AB1D, ___value___2)); }
	inline int32_t get_value___2() const { return ___value___2; }
	inline int32_t* get_address_of_value___2() { return &___value___2; }
	inline void set_value___2(int32_t value)
	{
		___value___2 = value;
	}
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

// UnityEngine.RenderTextureCreationFlags
struct RenderTextureCreationFlags_t24A9C99A84202C1F13828D9F5693BE46CFBD61F3 
{
public:
	// System.Int32 UnityEngine.RenderTextureCreationFlags::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(RenderTextureCreationFlags_t24A9C99A84202C1F13828D9F5693BE46CFBD61F3, ___value___2)); }
	inline int32_t get_value___2() const { return ___value___2; }
	inline int32_t* get_address_of_value___2() { return &___value___2; }
	inline void set_value___2(int32_t value)
	{
		___value___2 = value;
	}
};


// UnityEngine.RenderTextureFormat
struct RenderTextureFormat_t8371287102ED67772EF78229CF4AB9D38C2CD626 
{
public:
	// System.Int32 UnityEngine.RenderTextureFormat::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(RenderTextureFormat_t8371287102ED67772EF78229CF4AB9D38C2CD626, ___value___2)); }
	inline int32_t get_value___2() const { return ___value___2; }
	inline int32_t* get_address_of_value___2() { return &___value___2; }
	inline void set_value___2(int32_t value)
	{
		___value___2 = value;
	}
};


// UnityEngine.RenderTextureMemoryless
struct RenderTextureMemoryless_t37547D68C2186D2650440F719302CDA4A3BB7F67 
{
public:
	// System.Int32 UnityEngine.RenderTextureMemoryless::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(RenderTextureMemoryless_t37547D68C2186D2650440F719302CDA4A3BB7F67, ___value___2)); }
	inline int32_t get_value___2() const { return ___value___2; }
	inline int32_t* get_address_of_value___2() { return &___value___2; }
	inline void set_value___2(int32_t value)
	{
		___value___2 = value;
	}
};


// UnityEngine.Rendering.ShadowSamplingMode
struct ShadowSamplingMode_t864AB52A05C1F54A738E06F76F47CDF4C26CF7F9 
{
public:
	// System.Int32 UnityEngine.Rendering.ShadowSamplingMode::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(ShadowSamplingMode_t864AB52A05C1F54A738E06F76F47CDF4C26CF7F9, ___value___2)); }
	inline int32_t get_value___2() const { return ___value___2; }
	inline int32_t* get_address_of_value___2() { return &___value___2; }
	inline void set_value___2(int32_t value)
	{
		___value___2 = value;
	}
};


// UnityEngine.Rendering.TextureDimension
struct TextureDimension_tADCCB7C1D30E4D1182651BA9094B4DE61B63EACC 
{
public:
	// System.Int32 UnityEngine.Rendering.TextureDimension::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(TextureDimension_tADCCB7C1D30E4D1182651BA9094B4DE61B63EACC, ___value___2)); }
	inline int32_t get_value___2() const { return ___value___2; }
	inline int32_t* get_address_of_value___2() { return &___value___2; }
	inline void set_value___2(int32_t value)
	{
		___value___2 = value;
	}
};


// UnityEngine.TextureWrapMode
struct TextureWrapMode_t86DDA8206E4AA784A1218D0DE3C5F6826D7549EB 
{
public:
	// System.Int32 UnityEngine.TextureWrapMode::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(TextureWrapMode_t86DDA8206E4AA784A1218D0DE3C5F6826D7549EB, ___value___2)); }
	inline int32_t get_value___2() const { return ___value___2; }
	inline int32_t* get_address_of_value___2() { return &___value___2; }
	inline void set_value___2(int32_t value)
	{
		___value___2 = value;
	}
};


// UnityEngine.VRTextureUsage
struct VRTextureUsage_t3C09DF3DD90B5620BC0AB6F8078DFEF4E607F645 
{
public:
	// System.Int32 UnityEngine.VRTextureUsage::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(VRTextureUsage_t3C09DF3DD90B5620BC0AB6F8078DFEF4E607F645, ___value___2)); }
	inline int32_t get_value___2() const { return ___value___2; }
	inline int32_t* get_address_of_value___2() { return &___value___2; }
	inline void set_value___2(int32_t value)
	{
		___value___2 = value;
	}
};


// UnityEngine.RenderTextureDescriptor
struct RenderTextureDescriptor_t67FF189E1F35AEB5D6C43A2D7103F3A8A8CA0B47 
{
public:
	// System.Int32 UnityEngine.RenderTextureDescriptor::<width>k__BackingField
	int32_t ___U3CwidthU3Ek__BackingField_0;
	// System.Int32 UnityEngine.RenderTextureDescriptor::<height>k__BackingField
	int32_t ___U3CheightU3Ek__BackingField_1;
	// System.Int32 UnityEngine.RenderTextureDescriptor::<msaaSamples>k__BackingField
	int32_t ___U3CmsaaSamplesU3Ek__BackingField_2;
	// System.Int32 UnityEngine.RenderTextureDescriptor::<volumeDepth>k__BackingField
	int32_t ___U3CvolumeDepthU3Ek__BackingField_3;
	// System.Int32 UnityEngine.RenderTextureDescriptor::<mipCount>k__BackingField
	int32_t ___U3CmipCountU3Ek__BackingField_4;
	// UnityEngine.Experimental.Rendering.GraphicsFormat UnityEngine.RenderTextureDescriptor::_graphicsFormat
	int32_t ____graphicsFormat_5;
	// UnityEngine.Experimental.Rendering.GraphicsFormat UnityEngine.RenderTextureDescriptor::<stencilFormat>k__BackingField
	int32_t ___U3CstencilFormatU3Ek__BackingField_6;
	// System.Int32 UnityEngine.RenderTextureDescriptor::_depthBufferBits
	int32_t ____depthBufferBits_7;
	// UnityEngine.Rendering.TextureDimension UnityEngine.RenderTextureDescriptor::<dimension>k__BackingField
	int32_t ___U3CdimensionU3Ek__BackingField_9;
	// UnityEngine.Rendering.ShadowSamplingMode UnityEngine.RenderTextureDescriptor::<shadowSamplingMode>k__BackingField
	int32_t ___U3CshadowSamplingModeU3Ek__BackingField_10;
	// UnityEngine.VRTextureUsage UnityEngine.RenderTextureDescriptor::<vrUsage>k__BackingField
	int32_t ___U3CvrUsageU3Ek__BackingField_11;
	// UnityEngine.RenderTextureCreationFlags UnityEngine.RenderTextureDescriptor::_flags
	int32_t ____flags_12;
	// UnityEngine.RenderTextureMemoryless UnityEngine.RenderTextureDescriptor::<memoryless>k__BackingField
	int32_t ___U3CmemorylessU3Ek__BackingField_13;

public:
	inline static int32_t get_offset_of_U3CwidthU3Ek__BackingField_0() { return static_cast<int32_t>(offsetof(RenderTextureDescriptor_t67FF189E1F35AEB5D6C43A2D7103F3A8A8CA0B47, ___U3CwidthU3Ek__BackingField_0)); }
	inline int32_t get_U3CwidthU3Ek__BackingField_0() const { return ___U3CwidthU3Ek__BackingField_0; }
	inline int32_t* get_address_of_U3CwidthU3Ek__BackingField_0() { return &___U3CwidthU3Ek__BackingField_0; }
	inline void set_U3CwidthU3Ek__BackingField_0(int32_t value)
	{
		___U3CwidthU3Ek__BackingField_0 = value;
	}

	inline static int32_t get_offset_of_U3CheightU3Ek__BackingField_1() { return static_cast<int32_t>(offsetof(RenderTextureDescriptor_t67FF189E1F35AEB5D6C43A2D7103F3A8A8CA0B47, ___U3CheightU3Ek__BackingField_1)); }
	inline int32_t get_U3CheightU3Ek__BackingField_1() const { return ___U3CheightU3Ek__BackingField_1; }
	inline int32_t* get_address_of_U3CheightU3Ek__BackingField_1() { return &___U3CheightU3Ek__BackingField_1; }
	inline void set_U3CheightU3Ek__BackingField_1(int32_t value)
	{
		___U3CheightU3Ek__BackingField_1 = value;
	}

	inline static int32_t get_offset_of_U3CmsaaSamplesU3Ek__BackingField_2() { return static_cast<int32_t>(offsetof(RenderTextureDescriptor_t67FF189E1F35AEB5D6C43A2D7103F3A8A8CA0B47, ___U3CmsaaSamplesU3Ek__BackingField_2)); }
	inline int32_t get_U3CmsaaSamplesU3Ek__BackingField_2() const { return ___U3CmsaaSamplesU3Ek__BackingField_2; }
	inline int32_t* get_address_of_U3CmsaaSamplesU3Ek__BackingField_2() { return &___U3CmsaaSamplesU3Ek__BackingField_2; }
	inline void set_U3CmsaaSamplesU3Ek__BackingField_2(int32_t value)
	{
		___U3CmsaaSamplesU3Ek__BackingField_2 = value;
	}

	inline static int32_t get_offset_of_U3CvolumeDepthU3Ek__BackingField_3() { return static_cast<int32_t>(offsetof(RenderTextureDescriptor_t67FF189E1F35AEB5D6C43A2D7103F3A8A8CA0B47, ___U3CvolumeDepthU3Ek__BackingField_3)); }
	inline int32_t get_U3CvolumeDepthU3Ek__BackingField_3() const { return ___U3CvolumeDepthU3Ek__BackingField_3; }
	inline int32_t* get_address_of_U3CvolumeDepthU3Ek__BackingField_3() { return &___U3CvolumeDepthU3Ek__BackingField_3; }
	inline void set_U3CvolumeDepthU3Ek__BackingField_3(int32_t value)
	{
		___U3CvolumeDepthU3Ek__BackingField_3 = value;
	}

	inline static int32_t get_offset_of_U3CmipCountU3Ek__BackingField_4() { return static_cast<int32_t>(offsetof(RenderTextureDescriptor_t67FF189E1F35AEB5D6C43A2D7103F3A8A8CA0B47, ___U3CmipCountU3Ek__BackingField_4)); }
	inline int32_t get_U3CmipCountU3Ek__BackingField_4() const { return ___U3CmipCountU3Ek__BackingField_4; }
	inline int32_t* get_address_of_U3CmipCountU3Ek__BackingField_4() { return &___U3CmipCountU3Ek__BackingField_4; }
	inline void set_U3CmipCountU3Ek__BackingField_4(int32_t value)
	{
		___U3CmipCountU3Ek__BackingField_4 = value;
	}

	inline static int32_t get_offset_of__graphicsFormat_5() { return static_cast<int32_t>(offsetof(RenderTextureDescriptor_t67FF189E1F35AEB5D6C43A2D7103F3A8A8CA0B47, ____graphicsFormat_5)); }
	inline int32_t get__graphicsFormat_5() const { return ____graphicsFormat_5; }
	inline int32_t* get_address_of__graphicsFormat_5() { return &____graphicsFormat_5; }
	inline void set__graphicsFormat_5(int32_t value)
	{
		____graphicsFormat_5 = value;
	}

	inline static int32_t get_offset_of_U3CstencilFormatU3Ek__BackingField_6() { return static_cast<int32_t>(offsetof(RenderTextureDescriptor_t67FF189E1F35AEB5D6C43A2D7103F3A8A8CA0B47, ___U3CstencilFormatU3Ek__BackingField_6)); }
	inline int32_t get_U3CstencilFormatU3Ek__BackingField_6() const { return ___U3CstencilFormatU3Ek__BackingField_6; }
	inline int32_t* get_address_of_U3CstencilFormatU3Ek__BackingField_6() { return &___U3CstencilFormatU3Ek__BackingField_6; }
	inline void set_U3CstencilFormatU3Ek__BackingField_6(int32_t value)
	{
		___U3CstencilFormatU3Ek__BackingField_6 = value;
	}

	inline static int32_t get_offset_of__depthBufferBits_7() { return static_cast<int32_t>(offsetof(RenderTextureDescriptor_t67FF189E1F35AEB5D6C43A2D7103F3A8A8CA0B47, ____depthBufferBits_7)); }
	inline int32_t get__depthBufferBits_7() const { return ____depthBufferBits_7; }
	inline int32_t* get_address_of__depthBufferBits_7() { return &____depthBufferBits_7; }
	inline void set__depthBufferBits_7(int32_t value)
	{
		____depthBufferBits_7 = value;
	}

	inline static int32_t get_offset_of_U3CdimensionU3Ek__BackingField_9() { return static_cast<int32_t>(offsetof(RenderTextureDescriptor_t67FF189E1F35AEB5D6C43A2D7103F3A8A8CA0B47, ___U3CdimensionU3Ek__BackingField_9)); }
	inline int32_t get_U3CdimensionU3Ek__BackingField_9() const { return ___U3CdimensionU3Ek__BackingField_9; }
	inline int32_t* get_address_of_U3CdimensionU3Ek__BackingField_9() { return &___U3CdimensionU3Ek__BackingField_9; }
	inline void set_U3CdimensionU3Ek__BackingField_9(int32_t value)
	{
		___U3CdimensionU3Ek__BackingField_9 = value;
	}

	inline static int32_t get_offset_of_U3CshadowSamplingModeU3Ek__BackingField_10() { return static_cast<int32_t>(offsetof(RenderTextureDescriptor_t67FF189E1F35AEB5D6C43A2D7103F3A8A8CA0B47, ___U3CshadowSamplingModeU3Ek__BackingField_10)); }
	inline int32_t get_U3CshadowSamplingModeU3Ek__BackingField_10() const { return ___U3CshadowSamplingModeU3Ek__BackingField_10; }
	inline int32_t* get_address_of_U3CshadowSamplingModeU3Ek__BackingField_10() { return &___U3CshadowSamplingModeU3Ek__BackingField_10; }
	inline void set_U3CshadowSamplingModeU3Ek__BackingField_10(int32_t value)
	{
		___U3CshadowSamplingModeU3Ek__BackingField_10 = value;
	}

	inline static int32_t get_offset_of_U3CvrUsageU3Ek__BackingField_11() { return static_cast<int32_t>(offsetof(RenderTextureDescriptor_t67FF189E1F35AEB5D6C43A2D7103F3A8A8CA0B47, ___U3CvrUsageU3Ek__BackingField_11)); }
	inline int32_t get_U3CvrUsageU3Ek__BackingField_11() const { return ___U3CvrUsageU3Ek__BackingField_11; }
	inline int32_t* get_address_of_U3CvrUsageU3Ek__BackingField_11() { return &___U3CvrUsageU3Ek__BackingField_11; }
	inline void set_U3CvrUsageU3Ek__BackingField_11(int32_t value)
	{
		___U3CvrUsageU3Ek__BackingField_11 = value;
	}

	inline static int32_t get_offset_of__flags_12() { return static_cast<int32_t>(offsetof(RenderTextureDescriptor_t67FF189E1F35AEB5D6C43A2D7103F3A8A8CA0B47, ____flags_12)); }
	inline int32_t get__flags_12() const { return ____flags_12; }
	inline int32_t* get_address_of__flags_12() { return &____flags_12; }
	inline void set__flags_12(int32_t value)
	{
		____flags_12 = value;
	}

	inline static int32_t get_offset_of_U3CmemorylessU3Ek__BackingField_13() { return static_cast<int32_t>(offsetof(RenderTextureDescriptor_t67FF189E1F35AEB5D6C43A2D7103F3A8A8CA0B47, ___U3CmemorylessU3Ek__BackingField_13)); }
	inline int32_t get_U3CmemorylessU3Ek__BackingField_13() const { return ___U3CmemorylessU3Ek__BackingField_13; }
	inline int32_t* get_address_of_U3CmemorylessU3Ek__BackingField_13() { return &___U3CmemorylessU3Ek__BackingField_13; }
	inline void set_U3CmemorylessU3Ek__BackingField_13(int32_t value)
	{
		___U3CmemorylessU3Ek__BackingField_13 = value;
	}
};


// UnityEngine.Texture
struct Texture_t9FE0218A1EEDF266E8C85879FE123265CACC95AE  : public Object_tF2F3778131EFF286AF62B7B013A170F95A91571A
{
public:

public:
};


// UnityEngine.RenderTexture
struct RenderTexture_t5FE7A5B47EF962A0E8D7BEBA05E9FC87D49A1849  : public Texture_t9FE0218A1EEDF266E8C85879FE123265CACC95AE
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


// ES3Reader/ES3ReaderPropertyEnumerator


// ES3Reader/ES3ReaderPropertyEnumerator


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


// ES3Types.ES3ObjectType


// ES3Types.ES3ObjectType


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


// ES3Types.ES3Type_string

struct ES3Type_string_tC47BFBE3CC816F3C70B51558C68F0C6470C5EFE5_StaticFields
{
public:
	// ES3Types.ES3Type ES3Types.ES3Type_string::Instance
	ES3Type_t8FBECB7AE75168648B9524E0C2A38DAD4555421D * ___Instance_12;

public:
	inline static int32_t get_offset_of_Instance_12() { return static_cast<int32_t>(offsetof(ES3Type_string_tC47BFBE3CC816F3C70B51558C68F0C6470C5EFE5_StaticFields, ___Instance_12)); }
	inline ES3Type_t8FBECB7AE75168648B9524E0C2A38DAD4555421D * get_Instance_12() const { return ___Instance_12; }
	inline ES3Type_t8FBECB7AE75168648B9524E0C2A38DAD4555421D ** get_address_of_Instance_12() { return &___Instance_12; }
	inline void set_Instance_12(ES3Type_t8FBECB7AE75168648B9524E0C2A38DAD4555421D * value)
	{
		___Instance_12 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___Instance_12), (void*)value);
	}
};


// ES3Types.ES3Type_string


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


// System.Void


// System.Void


// UnityEngine.AnisotropicFiltering


// UnityEngine.AnisotropicFiltering


// ES3Types.ES3Type_RenderTexture

struct ES3Type_RenderTexture_t7B14573C56809AFDC0A1C481D6B61E2146DEF194_StaticFields
{
public:
	// ES3Types.ES3Type ES3Types.ES3Type_RenderTexture::Instance
	ES3Type_t8FBECB7AE75168648B9524E0C2A38DAD4555421D * ___Instance_12;

public:
	inline static int32_t get_offset_of_Instance_12() { return static_cast<int32_t>(offsetof(ES3Type_RenderTexture_t7B14573C56809AFDC0A1C481D6B61E2146DEF194_StaticFields, ___Instance_12)); }
	inline ES3Type_t8FBECB7AE75168648B9524E0C2A38DAD4555421D * get_Instance_12() const { return ___Instance_12; }
	inline ES3Type_t8FBECB7AE75168648B9524E0C2A38DAD4555421D ** get_address_of_Instance_12() { return &___Instance_12; }
	inline void set_Instance_12(ES3Type_t8FBECB7AE75168648B9524E0C2A38DAD4555421D * value)
	{
		___Instance_12 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___Instance_12), (void*)value);
	}
};


// ES3Types.ES3Type_RenderTexture


// UnityEngine.FilterMode


// UnityEngine.FilterMode


// UnityEngine.Experimental.Rendering.GraphicsFormat


// UnityEngine.Experimental.Rendering.GraphicsFormat


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


// UnityEngine.RenderTextureCreationFlags


// UnityEngine.RenderTextureCreationFlags


// UnityEngine.RenderTextureFormat


// UnityEngine.RenderTextureFormat


// UnityEngine.RenderTextureMemoryless


// UnityEngine.RenderTextureMemoryless


// UnityEngine.Rendering.ShadowSamplingMode


// UnityEngine.Rendering.ShadowSamplingMode


// UnityEngine.Rendering.TextureDimension


// UnityEngine.Rendering.TextureDimension


// UnityEngine.TextureWrapMode


// UnityEngine.TextureWrapMode


// UnityEngine.VRTextureUsage


// UnityEngine.VRTextureUsage


// UnityEngine.RenderTextureDescriptor

struct RenderTextureDescriptor_t67FF189E1F35AEB5D6C43A2D7103F3A8A8CA0B47_StaticFields
{
public:
	// System.Int32[] UnityEngine.RenderTextureDescriptor::depthFormatBits
	Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32* ___depthFormatBits_8;

public:
	inline static int32_t get_offset_of_depthFormatBits_8() { return static_cast<int32_t>(offsetof(RenderTextureDescriptor_t67FF189E1F35AEB5D6C43A2D7103F3A8A8CA0B47_StaticFields, ___depthFormatBits_8)); }
	inline Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32* get_depthFormatBits_8() const { return ___depthFormatBits_8; }
	inline Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32** get_address_of_depthFormatBits_8() { return &___depthFormatBits_8; }
	inline void set_depthFormatBits_8(Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32* value)
	{
		___depthFormatBits_8 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___depthFormatBits_8), (void*)value);
	}
};


// UnityEngine.RenderTextureDescriptor


// UnityEngine.Texture

struct Texture_t9FE0218A1EEDF266E8C85879FE123265CACC95AE_StaticFields
{
public:
	// System.Int32 UnityEngine.Texture::GenerateAllMips
	int32_t ___GenerateAllMips_4;

public:
	inline static int32_t get_offset_of_GenerateAllMips_4() { return static_cast<int32_t>(offsetof(Texture_t9FE0218A1EEDF266E8C85879FE123265CACC95AE_StaticFields, ___GenerateAllMips_4)); }
	inline int32_t get_GenerateAllMips_4() const { return ___GenerateAllMips_4; }
	inline int32_t* get_address_of_GenerateAllMips_4() { return &___GenerateAllMips_4; }
	inline void set_GenerateAllMips_4(int32_t value)
	{
		___GenerateAllMips_4 = value;
	}
};


// UnityEngine.Texture


// UnityEngine.RenderTexture


// UnityEngine.RenderTexture

#ifdef __clang__
#pragma clang diagnostic pop
#endif



// System.Collections.IEnumerator ES3Reader/ES3ReaderPropertyEnumerator::GetEnumerator()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* ES3ReaderPropertyEnumerator_GetEnumerator_m6C61168655E3736E7847E5CB1CD9BC6B48442FD4 (ES3ReaderPropertyEnumerator_tFC854F4BE72BFA234682EB1909D92457534A979D * __this, const RuntimeMethod* method);
// System.UInt32 <PrivateImplementationDetails>::ComputeStringHash(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR uint32_t U3CPrivateImplementationDetailsU3E_ComputeStringHash_m3ADC1F612F9EE3DD518E6F0023A0DE0EE2B120A7 (String_t* ___s0, const RuntimeMethod* method);
// System.Boolean System.String::op_Equality(System.String,System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool String_op_Equality_m50B3548E4AC232558190B0052877B290AA1D436A (String_t* ___a0, String_t* ___b1, const RuntimeMethod* method);
// System.Void UnityEngine.RenderTexture::set_useMipMap(System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void RenderTexture_set_useMipMap_mAE1437C3D7D21441891A612C3B812EE9C379F126 (RenderTexture_t5FE7A5B47EF962A0E8D7BEBA05E9FC87D49A1849 * __this, bool ___value0, const RuntimeMethod* method);
// System.Void UnityEngine.RenderTexture::set_memorylessMode(UnityEngine.RenderTextureMemoryless)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void RenderTexture_set_memorylessMode_mE48B2A38E9374A7BB419383B438790347474EFC1 (RenderTexture_t5FE7A5B47EF962A0E8D7BEBA05E9FC87D49A1849 * __this, int32_t ___value0, const RuntimeMethod* method);
// System.Void UnityEngine.RenderTexture::set_format(UnityEngine.RenderTextureFormat)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void RenderTexture_set_format_m32D42DC33DB151B69E81D0D93F36DE7450CFC23D (RenderTexture_t5FE7A5B47EF962A0E8D7BEBA05E9FC87D49A1849 * __this, int32_t ___value0, const RuntimeMethod* method);
// System.Void UnityEngine.RenderTexture::set_autoGenerateMips(System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void RenderTexture_set_autoGenerateMips_m0F02D60D4C4D4790B354451732F2DA6BA12D2E63 (RenderTexture_t5FE7A5B47EF962A0E8D7BEBA05E9FC87D49A1849 * __this, bool ___value0, const RuntimeMethod* method);
// System.Void UnityEngine.RenderTexture::set_volumeDepth(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void RenderTexture_set_volumeDepth_m01D7BD50386DDAE777CE3CB9B60FDD7DE798AC93 (RenderTexture_t5FE7A5B47EF962A0E8D7BEBA05E9FC87D49A1849 * __this, int32_t ___value0, const RuntimeMethod* method);
// System.Void UnityEngine.RenderTexture::set_antiAliasing(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void RenderTexture_set_antiAliasing_m4D37900B7E23CA0D33F109DB8DF21265DB70C38F (RenderTexture_t5FE7A5B47EF962A0E8D7BEBA05E9FC87D49A1849 * __this, int32_t ___value0, const RuntimeMethod* method);
// System.Void UnityEngine.RenderTexture::set_enableRandomWrite(System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void RenderTexture_set_enableRandomWrite_m024F49DB3CA3B02FA0EEBB3EACB37E6228CAA183 (RenderTexture_t5FE7A5B47EF962A0E8D7BEBA05E9FC87D49A1849 * __this, bool ___value0, const RuntimeMethod* method);
// System.Void UnityEngine.RenderTexture::set_isPowerOfTwo(System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void RenderTexture_set_isPowerOfTwo_mA6D34F610DF27C40422DF5815892B45C656F1317 (RenderTexture_t5FE7A5B47EF962A0E8D7BEBA05E9FC87D49A1849 * __this, bool ___value0, const RuntimeMethod* method);
// System.Void UnityEngine.RenderTexture::set_depth(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void RenderTexture_set_depth_mA57CEFEDDB45D0429FAC9532A631839F523944A3 (RenderTexture_t5FE7A5B47EF962A0E8D7BEBA05E9FC87D49A1849 * __this, int32_t ___value0, const RuntimeMethod* method);
// System.Void UnityEngine.RenderTexture::set_descriptor(UnityEngine.RenderTextureDescriptor)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void RenderTexture_set_descriptor_m3C8E31AE4644B23719A12345771D1B85EB6E5881 (RenderTexture_t5FE7A5B47EF962A0E8D7BEBA05E9FC87D49A1849 * __this, RenderTextureDescriptor_t67FF189E1F35AEB5D6C43A2D7103F3A8A8CA0B47  ___value0, const RuntimeMethod* method);
// System.Void UnityEngine.Texture::set_masterTextureLimit(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Texture_set_masterTextureLimit_m94A531A20A54A86AF7B88A56F72709CE556B7DFF (int32_t ___value0, const RuntimeMethod* method);
// System.Void UnityEngine.Texture::set_anisotropicFiltering(UnityEngine.AnisotropicFiltering)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Texture_set_anisotropicFiltering_mE2B639BF2681A8A0516C1C343C7E265ED60EAF16 (int32_t ___value0, const RuntimeMethod* method);
// System.Void UnityEngine.Texture::set_wrapMode(UnityEngine.TextureWrapMode)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Texture_set_wrapMode_m1233D2DF48DC20996F8EE26E866D4BDD2AC8050D (Texture_t9FE0218A1EEDF266E8C85879FE123265CACC95AE * __this, int32_t ___value0, const RuntimeMethod* method);
// System.Void UnityEngine.Texture::set_wrapModeU(UnityEngine.TextureWrapMode)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Texture_set_wrapModeU_mBD3CBD6880E9E767B91ED9E1B14C725A52D7A66E (Texture_t9FE0218A1EEDF266E8C85879FE123265CACC95AE * __this, int32_t ___value0, const RuntimeMethod* method);
// System.Void UnityEngine.Texture::set_wrapModeV(UnityEngine.TextureWrapMode)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Texture_set_wrapModeV_mCD51C11B4C90D7508113C744EDC09D04059403E5 (Texture_t9FE0218A1EEDF266E8C85879FE123265CACC95AE * __this, int32_t ___value0, const RuntimeMethod* method);
// System.Void UnityEngine.Texture::set_wrapModeW(UnityEngine.TextureWrapMode)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Texture_set_wrapModeW_m72C3239EA12A51D5031BD2A66C5E7B178EE9F65B (Texture_t9FE0218A1EEDF266E8C85879FE123265CACC95AE * __this, int32_t ___value0, const RuntimeMethod* method);
// System.Void UnityEngine.Texture::set_filterMode(UnityEngine.FilterMode)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Texture_set_filterMode_m045141DB0FEFE496885D45F5F23B15BC0E77C8D0 (Texture_t9FE0218A1EEDF266E8C85879FE123265CACC95AE * __this, int32_t ___value0, const RuntimeMethod* method);
// System.Void UnityEngine.Texture::set_anisoLevel(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Texture_set_anisoLevel_mE51360F6CD0562FD6355F8C0509B70A454CB33BE (Texture_t9FE0218A1EEDF266E8C85879FE123265CACC95AE * __this, int32_t ___value0, const RuntimeMethod* method);
// System.Void UnityEngine.Texture::set_mipMapBias(System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Texture_set_mipMapBias_m5057ADA9DBA8E8E30EC15EA5BABFA0734CE2821C (Texture_t9FE0218A1EEDF266E8C85879FE123265CACC95AE * __this, float ___value0, const RuntimeMethod* method);
// System.Void UnityEngine.Object::set_name(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Object_set_name_m87C4006618ADB325ABE5439DF159E10DD8DD0781 (Object_tF2F3778131EFF286AF62B7B013A170F95A91571A * __this, String_t* ___value0, const RuntimeMethod* method);
// System.Void UnityEngine.RenderTexture::set_vrUsage(UnityEngine.VRTextureUsage)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void RenderTexture_set_vrUsage_m9AF7F60442E3B933FDF274D801EA074D1A5ECB71 (RenderTexture_t5FE7A5B47EF962A0E8D7BEBA05E9FC87D49A1849 * __this, int32_t ___value0, const RuntimeMethod* method);
// System.Void UnityEngine.RenderTexture::set_graphicsFormat(UnityEngine.Experimental.Rendering.GraphicsFormat)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void RenderTexture_set_graphicsFormat_mA378AAD8BD876EE96637FF0A80A2AFEA4D852FAB (RenderTexture_t5FE7A5B47EF962A0E8D7BEBA05E9FC87D49A1849 * __this, int32_t ___value0, const RuntimeMethod* method);
// System.Void UnityEngine.RenderTexture::set_stencilFormat(UnityEngine.Experimental.Rendering.GraphicsFormat)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void RenderTexture_set_stencilFormat_m7C6E21FCDB7E786D403CFC9775105B050EFF19C7 (RenderTexture_t5FE7A5B47EF962A0E8D7BEBA05E9FC87D49A1849 * __this, int32_t ___value0, const RuntimeMethod* method);
// System.Void UnityEngine.RenderTexture::set_bindTextureMS(System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void RenderTexture_set_bindTextureMS_m6C26F6AB2DE8FE81BFCA60C936AA08EA7F1A7177 (RenderTexture_t5FE7A5B47EF962A0E8D7BEBA05E9FC87D49A1849 * __this, bool ___value0, const RuntimeMethod* method);
// System.Void UnityEngine.RenderTexture::set_useDynamicScale(System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void RenderTexture_set_useDynamicScale_m8F96571C7EDBEFAB9278E04A3F3EB67067A5AE29 (RenderTexture_t5FE7A5B47EF962A0E8D7BEBA05E9FC87D49A1849 * __this, bool ___value0, const RuntimeMethod* method);
// System.Void UnityEngine.Texture::set_streamingTextureForceLoadAll(System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Texture_set_streamingTextureForceLoadAll_m325117C0830BB9B4316CF41CEE045759FC52B7A3 (bool ___value0, const RuntimeMethod* method);
// System.Void UnityEngine.Texture::set_streamingTextureDiscardUnusedMips(System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Texture_set_streamingTextureDiscardUnusedMips_mE184CE016A8E0319B437D34E0DB61962CE17F5DC (bool ___value0, const RuntimeMethod* method);
// System.Void UnityEngine.Texture::set_allowThreadedTextureCreation(System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Texture_set_allowThreadedTextureCreation_m84D29394912B9CE876023963426256CBEB15A52E (bool ___value0, const RuntimeMethod* method);
// System.Void ES3Types.ES3Type_RenderTexture::ReadObject<UnityEngine.ParticleSystem/ForceOverLifetimeModule>(ES3Reader,System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ES3Type_RenderTexture_ReadObject_TisForceOverLifetimeModule_t55EF1F67023C6920BB93B40FAC17E5665E9BBCF7_mB795BF9675B34781976F5EC7663EA815E56CE4E0_gshared (ES3Type_RenderTexture_t7B14573C56809AFDC0A1C481D6B61E2146DEF194 * __this, ES3Reader_t2780AF8AA61DA2A817115CEF8612AC0E494D03C9 * ___reader0, RuntimeObject * ___obj1, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ES3Reader_Read_TisAnisotropicFiltering_tAC3D1448B262D5869946CD1CDD2C8DAE3A7A537B_mAF1268AAC3E461D6E0604A19FAF0325873B6EC8A_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ES3Reader_Read_TisBoolean_t07D1E3F34E4813023D64F584DFF7B34C9D922F37_mC6D1B158268FF9B97822FF9F5B37FB1723FEDA22_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ES3Reader_Read_TisFilterMode_tE90A08FD96A142C761463D65E524BCDBFEEE3D19_m9819C2A442797B4060B0D9A80CFA96CFD6102839_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ES3Reader_Read_TisGraphicsFormat_t07A3C024BC77B843C53A369D6FC02ABD27D2AB1D_mCBD36004B10F649C93215AB4717F6F0D7118BF7D_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ES3Reader_Read_TisInt32_tFDE5F8CD43D10453F6A2E0C77FE48C6CC7009046_m2B74AA6627F5B1D21171D56C42F71DE5A7C1B4A6_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ES3Reader_Read_TisRenderTextureDescriptor_t67FF189E1F35AEB5D6C43A2D7103F3A8A8CA0B47_m427886ADAAF96C7BA9BD423544128494F96D69E7_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ES3Reader_Read_TisRenderTextureFormat_t8371287102ED67772EF78229CF4AB9D38C2CD626_mE6358E03407F5C15B58B292C79D4770DE3FAC95A_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ES3Reader_Read_TisRenderTextureMemoryless_t37547D68C2186D2650440F719302CDA4A3BB7F67_m3A980BA15AADBBB8393C3BC88CE17EEDDC89B027_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ES3Reader_Read_TisSingle_tE07797BA3C98D4CA9B5A19413C19A76688AB899E_m4A0416374498BDA042B8EB21E49B72326D6CE5F4_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ES3Reader_Read_TisString_t_m883861F3B58239392073ABF39876826EEB87DF9C_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ES3Reader_Read_TisTextureDimension_tADCCB7C1D30E4D1182651BA9094B4DE61B63EACC_m19EAA3B93D10636C17A62A3D8437349223CFD988_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ES3Reader_Read_TisTextureWrapMode_t86DDA8206E4AA784A1218D0DE3C5F6826D7549EB_m7926E449CD0B8BD56E5BF145DD0CCFE1C567F107_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ES3Reader_Read_TisVRTextureUsage_t3C09DF3DD90B5620BC0AB6F8078DFEF4E607F645_m7DE3966E4815BB13132866CB005EEE5B90FF51C2_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ES3Type_bool_t8F309F7B9CC735FF1DEE68081B6E3CAB367745F4_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ES3Type_float_tF86B773C86731BD9AD79448B860BBB178FE77644_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ES3Type_int_tF64C15D40AD0CC7C15BCD1CEC3C5C6BF837BD167_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ES3Type_string_tC47BFBE3CC816F3C70B51558C68F0C6470C5EFE5_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IDisposable_t099785737FC6A1E3699919A94109383715A8D807_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IEnumerator_t5956F3AFB7ECF1117E3BC5890E7FC7B7F7A04105_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&RenderTexture_t5FE7A5B47EF962A0E8D7BEBA05E9FC87D49A1849_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&String_t_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Texture_t9FE0218A1EEDF266E8C85879FE123265CACC95AE_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral201D9D00BB60DC2318D21CF9902290EFE255D5DC);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral2ADFC3FFF7C52D554F0435A348A5345C9FCD7FF8);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral2E201D1972661439FD3C8523C55723E7E9BCC7DA);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral2EE7B6B0E37E14930BBA497867139BFD0617CE04);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral3A04F86957625CB28FA670EECF997E6BAD45BBE7);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral3BC15E3C2F40466B2DC85C4776499817B8306CBB);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral3F1522C8DB7943F2AE3AA1563D3AC25D9C8B93D1);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral53D3413057D7E52F44470A335C590748745352B1);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral647E0FB2B5E859CC4BD7C73623B82C8EFABA2563);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral65B008F04EC40A696263EF679CF274BD10999A5D);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral71C5F9C3E2F3C81C5BBC7FD313F6938654E61138);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral75C9716749EA210206E3467390B7A11F3F33DDFA);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral7606720A7AEF5939309A8E4FCB8274252FA3D7BF);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral7A4A6E2A7090298F814A9D44C89F8634249BEF07);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral7FF61C3A55BCA1287974D8740F945250B3F0F084);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral83AC9669A9053DD15B9F2E82D2CE2369EFE131BA);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral95F57476C0AA778364404E7CCCD7499BF1BF3757);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral9AB5ADF8A8A53110245466F7C226F7935F5FE95F);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralB49A1DF483856544CEC6018E8C944DB6E16A8D57);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralBA9362732D25B1644B7D8DEC5DF6F036A4A66DE5);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralC959D767B7F0BD38D9DA8A64A4750C3A0972E2A0);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralCD44AC57FFE6CAC7824F4CAA223F1BB8B4CB0D73);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralCE18B047107AA23D1AA9B2ED32D316148E02655F);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralEA8FBF382D8AC9EDB8FFC14A350641B987F5C631);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralEBF5FE0CBF3EEA67902EEA700B7216E3DB0D8E84);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralECAEEB225F8689DE45DEB4FA21CE34E1960B1B50);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralF23E83744C9D6FC70D71B723AAED8006D6780BCB);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralF2AF7DD0BFF41B7B35037F018DAABE7DCF357A7B);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralF38CFAE6A91D072D4453C29FF44D81D459A582F1);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralF3FA58C10BBB9830102605E24AF89DC619908DFA);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralF9EE582B77C320A1F6A3DF72205857C4248BAC79);
		s_Il2CppMethodInitialized = true;
	}
	RenderTexture_t5FE7A5B47EF962A0E8D7BEBA05E9FC87D49A1849 * V_0 = NULL;
	RuntimeObject* V_1 = NULL;
	String_t* V_2 = NULL;
	uint32_t V_3 = 0;
	RuntimeObject* V_4 = NULL;
	Exception_t * __last_unhandled_exception = 0;
	il2cpp::utils::ExceptionSupportStack<int32_t, 1> __leave_targets;
	{
		// var instance = (UnityEngine.RenderTexture)obj;
		RuntimeObject * L_0 = ___obj1;
		V_0 = (RenderTexture_t5FE7A5B47EF962A0E8D7BEBA05E9FC87D49A1849 *)((RenderTexture_t5FE7A5B47EF962A0E8D7BEBA05E9FC87D49A1849 *)Castclass((RuntimeObject*)L_0, RenderTexture_t5FE7A5B47EF962A0E8D7BEBA05E9FC87D49A1849_il2cpp_TypeInfo_var));
		// foreach (string propertyName in reader.Properties)
		ES3Reader_t2780AF8AA61DA2A817115CEF8612AC0E494D03C9 * L_1 = ___reader0;
		NullCheck((ES3Reader_t2780AF8AA61DA2A817115CEF8612AC0E494D03C9 *)L_1);
		ES3ReaderPropertyEnumerator_tFC854F4BE72BFA234682EB1909D92457534A979D * L_2;
		L_2 = VirtFuncInvoker0< ES3ReaderPropertyEnumerator_tFC854F4BE72BFA234682EB1909D92457534A979D * >::Invoke(39 /* ES3Reader/ES3ReaderPropertyEnumerator ES3Reader::get_Properties() */, (ES3Reader_t2780AF8AA61DA2A817115CEF8612AC0E494D03C9 *)L_1);
		NullCheck((ES3ReaderPropertyEnumerator_tFC854F4BE72BFA234682EB1909D92457534A979D *)L_2);
		RuntimeObject* L_3;
		L_3 = ES3ReaderPropertyEnumerator_GetEnumerator_m6C61168655E3736E7847E5CB1CD9BC6B48442FD4((ES3ReaderPropertyEnumerator_tFC854F4BE72BFA234682EB1909D92457534A979D *)L_2, /*hidden argument*/NULL);
		V_1 = (RuntimeObject*)L_3;
	}

IL_0013:
	try
	{ // begin try (depth: 1)
		{
			goto IL_0721;
		}

IL_0018:
		{
			// foreach (string propertyName in reader.Properties)
			RuntimeObject* L_4 = V_1;
			NullCheck((RuntimeObject*)L_4);
			RuntimeObject * L_5;
			L_5 = InterfaceFuncInvoker0< RuntimeObject * >::Invoke(1 /* System.Object System.Collections.IEnumerator::get_Current() */, IEnumerator_t5956F3AFB7ECF1117E3BC5890E7FC7B7F7A04105_il2cpp_TypeInfo_var, (RuntimeObject*)L_4);
			V_2 = (String_t*)((String_t*)Castclass((RuntimeObject*)L_5, String_t_il2cpp_TypeInfo_var));
			String_t* L_6 = V_2;
			if (!L_6)
			{
				goto IL_071b;
			}
		}

IL_002a:
		{
			String_t* L_7 = V_2;
			uint32_t L_8;
			L_8 = U3CPrivateImplementationDetailsU3E_ComputeStringHash_m3ADC1F612F9EE3DD518E6F0023A0DE0EE2B120A7((String_t*)L_7, /*hidden argument*/NULL);
			V_3 = (uint32_t)L_8;
			uint32_t L_9 = V_3;
			if ((!(((uint32_t)L_9) <= ((uint32_t)((int32_t)1508062721)))))
			{
				goto IL_0134;
			}
		}

IL_003c:
		{
			uint32_t L_10 = V_3;
			if ((!(((uint32_t)L_10) <= ((uint32_t)((int32_t)698754697)))))
			{
				goto IL_00b0;
			}
		}

IL_0044:
		{
			uint32_t L_11 = V_3;
			if ((!(((uint32_t)L_11) <= ((uint32_t)((int32_t)472844700)))))
			{
				goto IL_0072;
			}
		}

IL_004c:
		{
			uint32_t L_12 = V_3;
			if ((((int32_t)L_12) == ((int32_t)((int32_t)87590155))))
			{
				goto IL_043c;
			}
		}

IL_0057:
		{
			uint32_t L_13 = V_3;
			if ((((int32_t)L_13) == ((int32_t)((int32_t)301255720))))
			{
				goto IL_02d7;
			}
		}

IL_0062:
		{
			uint32_t L_14 = V_3;
			if ((((int32_t)L_14) == ((int32_t)((int32_t)472844700))))
			{
				goto IL_0283;
			}
		}

IL_006d:
		{
			goto IL_071b;
		}

IL_0072:
		{
			uint32_t L_15 = V_3;
			if ((!(((uint32_t)L_15) <= ((uint32_t)((int32_t)549791583)))))
			{
				goto IL_0095;
			}
		}

IL_007a:
		{
			uint32_t L_16 = V_3;
			if ((((int32_t)L_16) == ((int32_t)((int32_t)533013964))))
			{
				goto IL_03a9;
			}
		}

IL_0085:
		{
			uint32_t L_17 = V_3;
			if ((((int32_t)L_17) == ((int32_t)((int32_t)549791583))))
			{
				goto IL_03be;
			}
		}

IL_0090:
		{
			goto IL_071b;
		}

IL_0095:
		{
			uint32_t L_18 = V_3;
			if ((((int32_t)L_18) == ((int32_t)((int32_t)583346821))))
			{
				goto IL_0394;
			}
		}

IL_00a0:
		{
			uint32_t L_19 = V_3;
			if ((((int32_t)L_19) == ((int32_t)((int32_t)698754697))))
			{
				goto IL_02ec;
			}
		}

IL_00ab:
		{
			goto IL_071b;
		}

IL_00b0:
		{
			uint32_t L_20 = V_3;
			if ((!(((uint32_t)L_20) <= ((uint32_t)((int32_t)1235622516)))))
			{
				goto IL_00f6;
			}
		}

IL_00b8:
		{
			uint32_t L_21 = V_3;
			if ((!(((uint32_t)L_21) <= ((uint32_t)((int32_t)740612720)))))
			{
				goto IL_00db;
			}
		}

IL_00c0:
		{
			uint32_t L_22 = V_3;
			if ((((int32_t)L_22) == ((int32_t)((int32_t)705796271))))
			{
				goto IL_0316;
			}
		}

IL_00cb:
		{
			uint32_t L_23 = V_3;
			if ((((int32_t)L_23) == ((int32_t)((int32_t)740612720))))
			{
				goto IL_03d3;
			}
		}

IL_00d6:
		{
			goto IL_071b;
		}

IL_00db:
		{
			uint32_t L_24 = V_3;
			if ((((int32_t)L_24) == ((int32_t)((int32_t)1059843136))))
			{
				goto IL_0340;
			}
		}

IL_00e6:
		{
			uint32_t L_25 = V_3;
			if ((((int32_t)L_25) == ((int32_t)((int32_t)1235622516))))
			{
				goto IL_036a;
			}
		}

IL_00f1:
		{
			goto IL_071b;
		}

IL_00f6:
		{
			uint32_t L_26 = V_3;
			if ((!(((uint32_t)L_26) <= ((uint32_t)((int32_t)1320492961)))))
			{
				goto IL_0119;
			}
		}

IL_00fe:
		{
			uint32_t L_27 = V_3;
			if ((((int32_t)L_27) == ((int32_t)((int32_t)1310955452))))
			{
				goto IL_0490;
			}
		}

IL_0109:
		{
			uint32_t L_28 = V_3;
			if ((((int32_t)L_28) == ((int32_t)((int32_t)1320492961))))
			{
				goto IL_047b;
			}
		}

IL_0114:
		{
			goto IL_071b;
		}

IL_0119:
		{
			uint32_t L_29 = V_3;
			if ((((int32_t)L_29) == ((int32_t)((int32_t)1458352709))))
			{
				goto IL_0466;
			}
		}

IL_0124:
		{
			uint32_t L_30 = V_3;
			if ((((int32_t)L_30) == ((int32_t)((int32_t)1508062721))))
			{
				goto IL_04a5;
			}
		}

IL_012f:
		{
			goto IL_071b;
		}

IL_0134:
		{
			uint32_t L_31 = V_3;
			if ((!(((uint32_t)L_31) <= ((uint32_t)((int32_t)-1444332543)))))
			{
				goto IL_01c3;
			}
		}

IL_013f:
		{
			uint32_t L_32 = V_3;
			if ((!(((uint32_t)L_32) <= ((uint32_t)((int32_t)2129631044)))))
			{
				goto IL_0185;
			}
		}

IL_0147:
		{
			uint32_t L_33 = V_3;
			if ((!(((uint32_t)L_33) <= ((uint32_t)((int32_t)1640355324)))))
			{
				goto IL_016a;
			}
		}

IL_014f:
		{
			uint32_t L_34 = V_3;
			if ((((int32_t)L_34) == ((int32_t)((int32_t)1560124071))))
			{
				goto IL_04ba;
			}
		}

IL_015a:
		{
			uint32_t L_35 = V_3;
			if ((((int32_t)L_35) == ((int32_t)((int32_t)1640355324))))
			{
				goto IL_0451;
			}
		}

IL_0165:
		{
			goto IL_071b;
		}

IL_016a:
		{
			uint32_t L_36 = V_3;
			if ((((int32_t)L_36) == ((int32_t)((int32_t)1728801507))))
			{
				goto IL_026e;
			}
		}

IL_0175:
		{
			uint32_t L_37 = V_3;
			if ((((int32_t)L_37) == ((int32_t)((int32_t)2129631044))))
			{
				goto IL_03fd;
			}
		}

IL_0180:
		{
			goto IL_071b;
		}

IL_0185:
		{
			uint32_t L_38 = V_3;
			if ((!(((uint32_t)L_38) <= ((uint32_t)((int32_t)-1786286561)))))
			{
				goto IL_01a8;
			}
		}

IL_018d:
		{
			uint32_t L_39 = V_3;
			if ((((int32_t)L_39) == ((int32_t)((int32_t)-1925595674))))
			{
				goto IL_0412;
			}
		}

IL_0198:
		{
			uint32_t L_40 = V_3;
			if ((((int32_t)L_40) == ((int32_t)((int32_t)-1786286561))))
			{
				goto IL_0244;
			}
		}

IL_01a3:
		{
			goto IL_071b;
		}

IL_01a8:
		{
			uint32_t L_41 = V_3;
			if ((((int32_t)L_41) == ((int32_t)((int32_t)-1522491664))))
			{
				goto IL_0298;
			}
		}

IL_01b3:
		{
			uint32_t L_42 = V_3;
			if ((((int32_t)L_42) == ((int32_t)((int32_t)-1444332543))))
			{
				goto IL_0355;
			}
		}

IL_01be:
		{
			goto IL_071b;
		}

IL_01c3:
		{
			uint32_t L_43 = V_3;
			if ((!(((uint32_t)L_43) <= ((uint32_t)((int32_t)-558361902)))))
			{
				goto IL_0206;
			}
		}

IL_01cb:
		{
			uint32_t L_44 = V_3;
			if ((!(((uint32_t)L_44) <= ((uint32_t)((int32_t)-1180859054)))))
			{
				goto IL_01ee;
			}
		}

IL_01d3:
		{
			uint32_t L_45 = V_3;
			if ((((int32_t)L_45) == ((int32_t)((int32_t)-1335745110))))
			{
				goto IL_02c2;
			}
		}

IL_01de:
		{
			uint32_t L_46 = V_3;
			if ((((int32_t)L_46) == ((int32_t)((int32_t)-1180859054))))
			{
				goto IL_02ad;
			}
		}

IL_01e9:
		{
			goto IL_071b;
		}

IL_01ee:
		{
			uint32_t L_47 = V_3;
			if ((((int32_t)L_47) == ((int32_t)((int32_t)-708986046))))
			{
				goto IL_0259;
			}
		}

IL_01f6:
		{
			uint32_t L_48 = V_3;
			if ((((int32_t)L_48) == ((int32_t)((int32_t)-558361902))))
			{
				goto IL_037f;
			}
		}

IL_0201:
		{
			goto IL_071b;
		}

IL_0206:
		{
			uint32_t L_49 = V_3;
			if ((!(((uint32_t)L_49) <= ((uint32_t)((int32_t)-255211260)))))
			{
				goto IL_0229;
			}
		}

IL_020e:
		{
			uint32_t L_50 = V_3;
			if ((((int32_t)L_50) == ((int32_t)((int32_t)-345285761))))
			{
				goto IL_03e8;
			}
		}

IL_0219:
		{
			uint32_t L_51 = V_3;
			if ((((int32_t)L_51) == ((int32_t)((int32_t)-255211260))))
			{
				goto IL_0427;
			}
		}

IL_0224:
		{
			goto IL_071b;
		}

IL_0229:
		{
			uint32_t L_52 = V_3;
			if ((((int32_t)L_52) == ((int32_t)((int32_t)-42086080))))
			{
				goto IL_0301;
			}
		}

IL_0234:
		{
			uint32_t L_53 = V_3;
			if ((((int32_t)L_53) == ((int32_t)((int32_t)-25846038))))
			{
				goto IL_032b;
			}
		}

IL_023f:
		{
			goto IL_071b;
		}

IL_0244:
		{
			String_t* L_54 = V_2;
			bool L_55;
			L_55 = String_op_Equality_m50B3548E4AC232558190B0052877B290AA1D436A((String_t*)L_54, (String_t*)_stringLiteralEBF5FE0CBF3EEA67902EEA700B7216E3DB0D8E84, /*hidden argument*/NULL);
			if (L_55)
			{
				goto IL_04cf;
			}
		}

IL_0254:
		{
			goto IL_071b;
		}

IL_0259:
		{
			String_t* L_56 = V_2;
			bool L_57;
			L_57 = String_op_Equality_m50B3548E4AC232558190B0052877B290AA1D436A((String_t*)L_56, (String_t*)_stringLiteral647E0FB2B5E859CC4BD7C73623B82C8EFABA2563, /*hidden argument*/NULL);
			if (L_57)
			{
				goto IL_04e5;
			}
		}

IL_0269:
		{
			goto IL_071b;
		}

IL_026e:
		{
			String_t* L_58 = V_2;
			bool L_59;
			L_59 = String_op_Equality_m50B3548E4AC232558190B0052877B290AA1D436A((String_t*)L_58, (String_t*)_stringLiteralF9EE582B77C320A1F6A3DF72205857C4248BAC79, /*hidden argument*/NULL);
			if (L_59)
			{
				goto IL_04fb;
			}
		}

IL_027e:
		{
			goto IL_071b;
		}

IL_0283:
		{
			String_t* L_60 = V_2;
			bool L_61;
			L_61 = String_op_Equality_m50B3548E4AC232558190B0052877B290AA1D436A((String_t*)L_60, (String_t*)_stringLiteral53D3413057D7E52F44470A335C590748745352B1, /*hidden argument*/NULL);
			if (L_61)
			{
				goto IL_050c;
			}
		}

IL_0293:
		{
			goto IL_071b;
		}

IL_0298:
		{
			String_t* L_62 = V_2;
			bool L_63;
			L_63 = String_op_Equality_m50B3548E4AC232558190B0052877B290AA1D436A((String_t*)L_62, (String_t*)_stringLiteralC959D767B7F0BD38D9DA8A64A4750C3A0972E2A0, /*hidden argument*/NULL);
			if (L_63)
			{
				goto IL_0522;
			}
		}

IL_02a8:
		{
			goto IL_071b;
		}

IL_02ad:
		{
			String_t* L_64 = V_2;
			bool L_65;
			L_65 = String_op_Equality_m50B3548E4AC232558190B0052877B290AA1D436A((String_t*)L_64, (String_t*)_stringLiteral75C9716749EA210206E3467390B7A11F3F33DDFA, /*hidden argument*/NULL);
			if (L_65)
			{
				goto IL_0533;
			}
		}

IL_02bd:
		{
			goto IL_071b;
		}

IL_02c2:
		{
			String_t* L_66 = V_2;
			bool L_67;
			L_67 = String_op_Equality_m50B3548E4AC232558190B0052877B290AA1D436A((String_t*)L_66, (String_t*)_stringLiteral7606720A7AEF5939309A8E4FCB8274252FA3D7BF, /*hidden argument*/NULL);
			if (L_67)
			{
				goto IL_0544;
			}
		}

IL_02d2:
		{
			goto IL_071b;
		}

IL_02d7:
		{
			String_t* L_68 = V_2;
			bool L_69;
			L_69 = String_op_Equality_m50B3548E4AC232558190B0052877B290AA1D436A((String_t*)L_68, (String_t*)_stringLiteral71C5F9C3E2F3C81C5BBC7FD313F6938654E61138, /*hidden argument*/NULL);
			if (L_69)
			{
				goto IL_055a;
			}
		}

IL_02e7:
		{
			goto IL_071b;
		}

IL_02ec:
		{
			String_t* L_70 = V_2;
			bool L_71;
			L_71 = String_op_Equality_m50B3548E4AC232558190B0052877B290AA1D436A((String_t*)L_70, (String_t*)_stringLiteral3F1522C8DB7943F2AE3AA1563D3AC25D9C8B93D1, /*hidden argument*/NULL);
			if (L_71)
			{
				goto IL_0570;
			}
		}

IL_02fc:
		{
			goto IL_071b;
		}

IL_0301:
		{
			String_t* L_72 = V_2;
			bool L_73;
			L_73 = String_op_Equality_m50B3548E4AC232558190B0052877B290AA1D436A((String_t*)L_72, (String_t*)_stringLiteralF23E83744C9D6FC70D71B723AAED8006D6780BCB, /*hidden argument*/NULL);
			if (L_73)
			{
				goto IL_0586;
			}
		}

IL_0311:
		{
			goto IL_071b;
		}

IL_0316:
		{
			String_t* L_74 = V_2;
			bool L_75;
			L_75 = String_op_Equality_m50B3548E4AC232558190B0052877B290AA1D436A((String_t*)L_74, (String_t*)_stringLiteralB49A1DF483856544CEC6018E8C944DB6E16A8D57, /*hidden argument*/NULL);
			if (L_75)
			{
				goto IL_059c;
			}
		}

IL_0326:
		{
			goto IL_071b;
		}

IL_032b:
		{
			String_t* L_76 = V_2;
			bool L_77;
			L_77 = String_op_Equality_m50B3548E4AC232558190B0052877B290AA1D436A((String_t*)L_76, (String_t*)_stringLiteral3A04F86957625CB28FA670EECF997E6BAD45BBE7, /*hidden argument*/NULL);
			if (L_77)
			{
				goto IL_05b2;
			}
		}

IL_033b:
		{
			goto IL_071b;
		}

IL_0340:
		{
			String_t* L_78 = V_2;
			bool L_79;
			L_79 = String_op_Equality_m50B3548E4AC232558190B0052877B290AA1D436A((String_t*)L_78, (String_t*)_stringLiteral7A4A6E2A7090298F814A9D44C89F8634249BEF07, /*hidden argument*/NULL);
			if (L_79)
			{
				goto IL_05c8;
			}
		}

IL_0350:
		{
			goto IL_071b;
		}

IL_0355:
		{
			String_t* L_80 = V_2;
			bool L_81;
			L_81 = String_op_Equality_m50B3548E4AC232558190B0052877B290AA1D436A((String_t*)L_80, (String_t*)_stringLiteralF3FA58C10BBB9830102605E24AF89DC619908DFA, /*hidden argument*/NULL);
			if (L_81)
			{
				goto IL_05d9;
			}
		}

IL_0365:
		{
			goto IL_071b;
		}

IL_036a:
		{
			String_t* L_82 = V_2;
			bool L_83;
			L_83 = String_op_Equality_m50B3548E4AC232558190B0052877B290AA1D436A((String_t*)L_82, (String_t*)_stringLiteralBA9362732D25B1644B7D8DEC5DF6F036A4A66DE5, /*hidden argument*/NULL);
			if (L_83)
			{
				goto IL_05ee;
			}
		}

IL_037a:
		{
			goto IL_071b;
		}

IL_037f:
		{
			String_t* L_84 = V_2;
			bool L_85;
			L_85 = String_op_Equality_m50B3548E4AC232558190B0052877B290AA1D436A((String_t*)L_84, (String_t*)_stringLiteral95F57476C0AA778364404E7CCCD7499BF1BF3757, /*hidden argument*/NULL);
			if (L_85)
			{
				goto IL_05fe;
			}
		}

IL_038f:
		{
			goto IL_071b;
		}

IL_0394:
		{
			String_t* L_86 = V_2;
			bool L_87;
			L_87 = String_op_Equality_m50B3548E4AC232558190B0052877B290AA1D436A((String_t*)L_86, (String_t*)_stringLiteral9AB5ADF8A8A53110245466F7C226F7935F5FE95F, /*hidden argument*/NULL);
			if (L_87)
			{
				goto IL_060f;
			}
		}

IL_03a4:
		{
			goto IL_071b;
		}

IL_03a9:
		{
			String_t* L_88 = V_2;
			bool L_89;
			L_89 = String_op_Equality_m50B3548E4AC232558190B0052877B290AA1D436A((String_t*)L_88, (String_t*)_stringLiteralEA8FBF382D8AC9EDB8FFC14A350641B987F5C631, /*hidden argument*/NULL);
			if (L_89)
			{
				goto IL_0620;
			}
		}

IL_03b9:
		{
			goto IL_071b;
		}

IL_03be:
		{
			String_t* L_90 = V_2;
			bool L_91;
			L_91 = String_op_Equality_m50B3548E4AC232558190B0052877B290AA1D436A((String_t*)L_90, (String_t*)_stringLiteral201D9D00BB60DC2318D21CF9902290EFE255D5DC, /*hidden argument*/NULL);
			if (L_91)
			{
				goto IL_0631;
			}
		}

IL_03ce:
		{
			goto IL_071b;
		}

IL_03d3:
		{
			String_t* L_92 = V_2;
			bool L_93;
			L_93 = String_op_Equality_m50B3548E4AC232558190B0052877B290AA1D436A((String_t*)L_92, (String_t*)_stringLiteral65B008F04EC40A696263EF679CF274BD10999A5D, /*hidden argument*/NULL);
			if (L_93)
			{
				goto IL_0642;
			}
		}

IL_03e3:
		{
			goto IL_071b;
		}

IL_03e8:
		{
			String_t* L_94 = V_2;
			bool L_95;
			L_95 = String_op_Equality_m50B3548E4AC232558190B0052877B290AA1D436A((String_t*)L_94, (String_t*)_stringLiteralF38CFAE6A91D072D4453C29FF44D81D459A582F1, /*hidden argument*/NULL);
			if (L_95)
			{
				goto IL_0653;
			}
		}

IL_03f8:
		{
			goto IL_071b;
		}

IL_03fd:
		{
			String_t* L_96 = V_2;
			bool L_97;
			L_97 = String_op_Equality_m50B3548E4AC232558190B0052877B290AA1D436A((String_t*)L_96, (String_t*)_stringLiteral3BC15E3C2F40466B2DC85C4776499817B8306CBB, /*hidden argument*/NULL);
			if (L_97)
			{
				goto IL_0669;
			}
		}

IL_040d:
		{
			goto IL_071b;
		}

IL_0412:
		{
			String_t* L_98 = V_2;
			bool L_99;
			L_99 = String_op_Equality_m50B3548E4AC232558190B0052877B290AA1D436A((String_t*)L_98, (String_t*)_stringLiteralCE18B047107AA23D1AA9B2ED32D316148E02655F, /*hidden argument*/NULL);
			if (L_99)
			{
				goto IL_067f;
			}
		}

IL_0422:
		{
			goto IL_071b;
		}

IL_0427:
		{
			String_t* L_100 = V_2;
			bool L_101;
			L_101 = String_op_Equality_m50B3548E4AC232558190B0052877B290AA1D436A((String_t*)L_100, (String_t*)_stringLiteral83AC9669A9053DD15B9F2E82D2CE2369EFE131BA, /*hidden argument*/NULL);
			if (L_101)
			{
				goto IL_0695;
			}
		}

IL_0437:
		{
			goto IL_071b;
		}

IL_043c:
		{
			String_t* L_102 = V_2;
			bool L_103;
			L_103 = String_op_Equality_m50B3548E4AC232558190B0052877B290AA1D436A((String_t*)L_102, (String_t*)_stringLiteralECAEEB225F8689DE45DEB4FA21CE34E1960B1B50, /*hidden argument*/NULL);
			if (L_103)
			{
				goto IL_06a3;
			}
		}

IL_044c:
		{
			goto IL_071b;
		}

IL_0451:
		{
			String_t* L_104 = V_2;
			bool L_105;
			L_105 = String_op_Equality_m50B3548E4AC232558190B0052877B290AA1D436A((String_t*)L_104, (String_t*)_stringLiteral2EE7B6B0E37E14930BBA497867139BFD0617CE04, /*hidden argument*/NULL);
			if (L_105)
			{
				goto IL_06b1;
			}
		}

IL_0461:
		{
			goto IL_071b;
		}

IL_0466:
		{
			String_t* L_106 = V_2;
			bool L_107;
			L_107 = String_op_Equality_m50B3548E4AC232558190B0052877B290AA1D436A((String_t*)L_106, (String_t*)_stringLiteralF2AF7DD0BFF41B7B35037F018DAABE7DCF357A7B, /*hidden argument*/NULL);
			if (L_107)
			{
				goto IL_06bf;
			}
		}

IL_0476:
		{
			goto IL_071b;
		}

IL_047b:
		{
			String_t* L_108 = V_2;
			bool L_109;
			L_109 = String_op_Equality_m50B3548E4AC232558190B0052877B290AA1D436A((String_t*)L_108, (String_t*)_stringLiteral7FF61C3A55BCA1287974D8740F945250B3F0F084, /*hidden argument*/NULL);
			if (L_109)
			{
				goto IL_06d2;
			}
		}

IL_048b:
		{
			goto IL_071b;
		}

IL_0490:
		{
			String_t* L_110 = V_2;
			bool L_111;
			L_111 = String_op_Equality_m50B3548E4AC232558190B0052877B290AA1D436A((String_t*)L_110, (String_t*)_stringLiteral2ADFC3FFF7C52D554F0435A348A5345C9FCD7FF8, /*hidden argument*/NULL);
			if (L_111)
			{
				goto IL_06e5;
			}
		}

IL_04a0:
		{
			goto IL_071b;
		}

IL_04a5:
		{
			String_t* L_112 = V_2;
			bool L_113;
			L_113 = String_op_Equality_m50B3548E4AC232558190B0052877B290AA1D436A((String_t*)L_112, (String_t*)_stringLiteral2E201D1972661439FD3C8523C55723E7E9BCC7DA, /*hidden argument*/NULL);
			if (L_113)
			{
				goto IL_06f7;
			}
		}

IL_04b5:
		{
			goto IL_071b;
		}

IL_04ba:
		{
			String_t* L_114 = V_2;
			bool L_115;
			L_115 = String_op_Equality_m50B3548E4AC232558190B0052877B290AA1D436A((String_t*)L_114, (String_t*)_stringLiteralCD44AC57FFE6CAC7824F4CAA223F1BB8B4CB0D73, /*hidden argument*/NULL);
			if (L_115)
			{
				goto IL_0709;
			}
		}

IL_04ca:
		{
			goto IL_071b;
		}

IL_04cf:
		{
			// instance.width = reader.Read<System.Int32>(ES3Type_int.Instance);
			RenderTexture_t5FE7A5B47EF962A0E8D7BEBA05E9FC87D49A1849 * L_116 = V_0;
			ES3Reader_t2780AF8AA61DA2A817115CEF8612AC0E494D03C9 * L_117 = ___reader0;
			IL2CPP_RUNTIME_CLASS_INIT(ES3Type_int_tF64C15D40AD0CC7C15BCD1CEC3C5C6BF837BD167_il2cpp_TypeInfo_var);
			ES3Type_t8FBECB7AE75168648B9524E0C2A38DAD4555421D * L_118 = ((ES3Type_int_tF64C15D40AD0CC7C15BCD1CEC3C5C6BF837BD167_StaticFields*)il2cpp_codegen_static_fields_for(ES3Type_int_tF64C15D40AD0CC7C15BCD1CEC3C5C6BF837BD167_il2cpp_TypeInfo_var))->get_Instance_12();
			NullCheck((ES3Reader_t2780AF8AA61DA2A817115CEF8612AC0E494D03C9 *)L_117);
			int32_t L_119;
			L_119 = GenericVirtFuncInvoker1< int32_t, ES3Type_t8FBECB7AE75168648B9524E0C2A38DAD4555421D * >::Invoke(ES3Reader_Read_TisInt32_tFDE5F8CD43D10453F6A2E0C77FE48C6CC7009046_m2B74AA6627F5B1D21171D56C42F71DE5A7C1B4A6_RuntimeMethod_var, (ES3Reader_t2780AF8AA61DA2A817115CEF8612AC0E494D03C9 *)L_117, (ES3Type_t8FBECB7AE75168648B9524E0C2A38DAD4555421D *)L_118);
			NullCheck((Texture_t9FE0218A1EEDF266E8C85879FE123265CACC95AE *)L_116);
			VirtActionInvoker1< int32_t >::Invoke(6 /* System.Void UnityEngine.Texture::set_width(System.Int32) */, (Texture_t9FE0218A1EEDF266E8C85879FE123265CACC95AE *)L_116, (int32_t)L_119);
			// break;
			goto IL_0721;
		}

IL_04e5:
		{
			// instance.height = reader.Read<System.Int32>(ES3Type_int.Instance);
			RenderTexture_t5FE7A5B47EF962A0E8D7BEBA05E9FC87D49A1849 * L_120 = V_0;
			ES3Reader_t2780AF8AA61DA2A817115CEF8612AC0E494D03C9 * L_121 = ___reader0;
			IL2CPP_RUNTIME_CLASS_INIT(ES3Type_int_tF64C15D40AD0CC7C15BCD1CEC3C5C6BF837BD167_il2cpp_TypeInfo_var);
			ES3Type_t8FBECB7AE75168648B9524E0C2A38DAD4555421D * L_122 = ((ES3Type_int_tF64C15D40AD0CC7C15BCD1CEC3C5C6BF837BD167_StaticFields*)il2cpp_codegen_static_fields_for(ES3Type_int_tF64C15D40AD0CC7C15BCD1CEC3C5C6BF837BD167_il2cpp_TypeInfo_var))->get_Instance_12();
			NullCheck((ES3Reader_t2780AF8AA61DA2A817115CEF8612AC0E494D03C9 *)L_121);
			int32_t L_123;
			L_123 = GenericVirtFuncInvoker1< int32_t, ES3Type_t8FBECB7AE75168648B9524E0C2A38DAD4555421D * >::Invoke(ES3Reader_Read_TisInt32_tFDE5F8CD43D10453F6A2E0C77FE48C6CC7009046_m2B74AA6627F5B1D21171D56C42F71DE5A7C1B4A6_RuntimeMethod_var, (ES3Reader_t2780AF8AA61DA2A817115CEF8612AC0E494D03C9 *)L_121, (ES3Type_t8FBECB7AE75168648B9524E0C2A38DAD4555421D *)L_122);
			NullCheck((Texture_t9FE0218A1EEDF266E8C85879FE123265CACC95AE *)L_120);
			VirtActionInvoker1< int32_t >::Invoke(8 /* System.Void UnityEngine.Texture::set_height(System.Int32) */, (Texture_t9FE0218A1EEDF266E8C85879FE123265CACC95AE *)L_120, (int32_t)L_123);
			// break;
			goto IL_0721;
		}

IL_04fb:
		{
			// instance.dimension = reader.Read<UnityEngine.Rendering.TextureDimension>();
			RenderTexture_t5FE7A5B47EF962A0E8D7BEBA05E9FC87D49A1849 * L_124 = V_0;
			ES3Reader_t2780AF8AA61DA2A817115CEF8612AC0E494D03C9 * L_125 = ___reader0;
			NullCheck((ES3Reader_t2780AF8AA61DA2A817115CEF8612AC0E494D03C9 *)L_125);
			int32_t L_126;
			L_126 = GenericVirtFuncInvoker0< int32_t >::Invoke(ES3Reader_Read_TisTextureDimension_tADCCB7C1D30E4D1182651BA9094B4DE61B63EACC_m19EAA3B93D10636C17A62A3D8437349223CFD988_RuntimeMethod_var, (ES3Reader_t2780AF8AA61DA2A817115CEF8612AC0E494D03C9 *)L_125);
			NullCheck((Texture_t9FE0218A1EEDF266E8C85879FE123265CACC95AE *)L_124);
			VirtActionInvoker1< int32_t >::Invoke(10 /* System.Void UnityEngine.Texture::set_dimension(UnityEngine.Rendering.TextureDimension) */, (Texture_t9FE0218A1EEDF266E8C85879FE123265CACC95AE *)L_124, (int32_t)L_126);
			// break;
			goto IL_0721;
		}

IL_050c:
		{
			// instance.useMipMap = reader.Read<System.Boolean>(ES3Type_bool.Instance);
			RenderTexture_t5FE7A5B47EF962A0E8D7BEBA05E9FC87D49A1849 * L_127 = V_0;
			ES3Reader_t2780AF8AA61DA2A817115CEF8612AC0E494D03C9 * L_128 = ___reader0;
			IL2CPP_RUNTIME_CLASS_INIT(ES3Type_bool_t8F309F7B9CC735FF1DEE68081B6E3CAB367745F4_il2cpp_TypeInfo_var);
			ES3Type_t8FBECB7AE75168648B9524E0C2A38DAD4555421D * L_129 = ((ES3Type_bool_t8F309F7B9CC735FF1DEE68081B6E3CAB367745F4_StaticFields*)il2cpp_codegen_static_fields_for(ES3Type_bool_t8F309F7B9CC735FF1DEE68081B6E3CAB367745F4_il2cpp_TypeInfo_var))->get_Instance_12();
			NullCheck((ES3Reader_t2780AF8AA61DA2A817115CEF8612AC0E494D03C9 *)L_128);
			bool L_130;
			L_130 = GenericVirtFuncInvoker1< bool, ES3Type_t8FBECB7AE75168648B9524E0C2A38DAD4555421D * >::Invoke(ES3Reader_Read_TisBoolean_t07D1E3F34E4813023D64F584DFF7B34C9D922F37_mC6D1B158268FF9B97822FF9F5B37FB1723FEDA22_RuntimeMethod_var, (ES3Reader_t2780AF8AA61DA2A817115CEF8612AC0E494D03C9 *)L_128, (ES3Type_t8FBECB7AE75168648B9524E0C2A38DAD4555421D *)L_129);
			NullCheck((RenderTexture_t5FE7A5B47EF962A0E8D7BEBA05E9FC87D49A1849 *)L_127);
			RenderTexture_set_useMipMap_mAE1437C3D7D21441891A612C3B812EE9C379F126((RenderTexture_t5FE7A5B47EF962A0E8D7BEBA05E9FC87D49A1849 *)L_127, (bool)L_130, /*hidden argument*/NULL);
			// break;
			goto IL_0721;
		}

IL_0522:
		{
			// instance.memorylessMode = reader.Read<UnityEngine.RenderTextureMemoryless>();
			RenderTexture_t5FE7A5B47EF962A0E8D7BEBA05E9FC87D49A1849 * L_131 = V_0;
			ES3Reader_t2780AF8AA61DA2A817115CEF8612AC0E494D03C9 * L_132 = ___reader0;
			NullCheck((ES3Reader_t2780AF8AA61DA2A817115CEF8612AC0E494D03C9 *)L_132);
			int32_t L_133;
			L_133 = GenericVirtFuncInvoker0< int32_t >::Invoke(ES3Reader_Read_TisRenderTextureMemoryless_t37547D68C2186D2650440F719302CDA4A3BB7F67_m3A980BA15AADBBB8393C3BC88CE17EEDDC89B027_RuntimeMethod_var, (ES3Reader_t2780AF8AA61DA2A817115CEF8612AC0E494D03C9 *)L_132);
			NullCheck((RenderTexture_t5FE7A5B47EF962A0E8D7BEBA05E9FC87D49A1849 *)L_131);
			RenderTexture_set_memorylessMode_mE48B2A38E9374A7BB419383B438790347474EFC1((RenderTexture_t5FE7A5B47EF962A0E8D7BEBA05E9FC87D49A1849 *)L_131, (int32_t)L_133, /*hidden argument*/NULL);
			// break;
			goto IL_0721;
		}

IL_0533:
		{
			// instance.format = reader.Read<UnityEngine.RenderTextureFormat>();
			RenderTexture_t5FE7A5B47EF962A0E8D7BEBA05E9FC87D49A1849 * L_134 = V_0;
			ES3Reader_t2780AF8AA61DA2A817115CEF8612AC0E494D03C9 * L_135 = ___reader0;
			NullCheck((ES3Reader_t2780AF8AA61DA2A817115CEF8612AC0E494D03C9 *)L_135);
			int32_t L_136;
			L_136 = GenericVirtFuncInvoker0< int32_t >::Invoke(ES3Reader_Read_TisRenderTextureFormat_t8371287102ED67772EF78229CF4AB9D38C2CD626_mE6358E03407F5C15B58B292C79D4770DE3FAC95A_RuntimeMethod_var, (ES3Reader_t2780AF8AA61DA2A817115CEF8612AC0E494D03C9 *)L_135);
			NullCheck((RenderTexture_t5FE7A5B47EF962A0E8D7BEBA05E9FC87D49A1849 *)L_134);
			RenderTexture_set_format_m32D42DC33DB151B69E81D0D93F36DE7450CFC23D((RenderTexture_t5FE7A5B47EF962A0E8D7BEBA05E9FC87D49A1849 *)L_134, (int32_t)L_136, /*hidden argument*/NULL);
			// break;
			goto IL_0721;
		}

IL_0544:
		{
			// instance.autoGenerateMips = reader.Read<System.Boolean>(ES3Type_bool.Instance);
			RenderTexture_t5FE7A5B47EF962A0E8D7BEBA05E9FC87D49A1849 * L_137 = V_0;
			ES3Reader_t2780AF8AA61DA2A817115CEF8612AC0E494D03C9 * L_138 = ___reader0;
			IL2CPP_RUNTIME_CLASS_INIT(ES3Type_bool_t8F309F7B9CC735FF1DEE68081B6E3CAB367745F4_il2cpp_TypeInfo_var);
			ES3Type_t8FBECB7AE75168648B9524E0C2A38DAD4555421D * L_139 = ((ES3Type_bool_t8F309F7B9CC735FF1DEE68081B6E3CAB367745F4_StaticFields*)il2cpp_codegen_static_fields_for(ES3Type_bool_t8F309F7B9CC735FF1DEE68081B6E3CAB367745F4_il2cpp_TypeInfo_var))->get_Instance_12();
			NullCheck((ES3Reader_t2780AF8AA61DA2A817115CEF8612AC0E494D03C9 *)L_138);
			bool L_140;
			L_140 = GenericVirtFuncInvoker1< bool, ES3Type_t8FBECB7AE75168648B9524E0C2A38DAD4555421D * >::Invoke(ES3Reader_Read_TisBoolean_t07D1E3F34E4813023D64F584DFF7B34C9D922F37_mC6D1B158268FF9B97822FF9F5B37FB1723FEDA22_RuntimeMethod_var, (ES3Reader_t2780AF8AA61DA2A817115CEF8612AC0E494D03C9 *)L_138, (ES3Type_t8FBECB7AE75168648B9524E0C2A38DAD4555421D *)L_139);
			NullCheck((RenderTexture_t5FE7A5B47EF962A0E8D7BEBA05E9FC87D49A1849 *)L_137);
			RenderTexture_set_autoGenerateMips_m0F02D60D4C4D4790B354451732F2DA6BA12D2E63((RenderTexture_t5FE7A5B47EF962A0E8D7BEBA05E9FC87D49A1849 *)L_137, (bool)L_140, /*hidden argument*/NULL);
			// break;
			goto IL_0721;
		}

IL_055a:
		{
			// instance.volumeDepth = reader.Read<System.Int32>(ES3Type_int.Instance);
			RenderTexture_t5FE7A5B47EF962A0E8D7BEBA05E9FC87D49A1849 * L_141 = V_0;
			ES3Reader_t2780AF8AA61DA2A817115CEF8612AC0E494D03C9 * L_142 = ___reader0;
			IL2CPP_RUNTIME_CLASS_INIT(ES3Type_int_tF64C15D40AD0CC7C15BCD1CEC3C5C6BF837BD167_il2cpp_TypeInfo_var);
			ES3Type_t8FBECB7AE75168648B9524E0C2A38DAD4555421D * L_143 = ((ES3Type_int_tF64C15D40AD0CC7C15BCD1CEC3C5C6BF837BD167_StaticFields*)il2cpp_codegen_static_fields_for(ES3Type_int_tF64C15D40AD0CC7C15BCD1CEC3C5C6BF837BD167_il2cpp_TypeInfo_var))->get_Instance_12();
			NullCheck((ES3Reader_t2780AF8AA61DA2A817115CEF8612AC0E494D03C9 *)L_142);
			int32_t L_144;
			L_144 = GenericVirtFuncInvoker1< int32_t, ES3Type_t8FBECB7AE75168648B9524E0C2A38DAD4555421D * >::Invoke(ES3Reader_Read_TisInt32_tFDE5F8CD43D10453F6A2E0C77FE48C6CC7009046_m2B74AA6627F5B1D21171D56C42F71DE5A7C1B4A6_RuntimeMethod_var, (ES3Reader_t2780AF8AA61DA2A817115CEF8612AC0E494D03C9 *)L_142, (ES3Type_t8FBECB7AE75168648B9524E0C2A38DAD4555421D *)L_143);
			NullCheck((RenderTexture_t5FE7A5B47EF962A0E8D7BEBA05E9FC87D49A1849 *)L_141);
			RenderTexture_set_volumeDepth_m01D7BD50386DDAE777CE3CB9B60FDD7DE798AC93((RenderTexture_t5FE7A5B47EF962A0E8D7BEBA05E9FC87D49A1849 *)L_141, (int32_t)L_144, /*hidden argument*/NULL);
			// break;
			goto IL_0721;
		}

IL_0570:
		{
			// instance.antiAliasing = reader.Read<System.Int32>(ES3Type_int.Instance);
			RenderTexture_t5FE7A5B47EF962A0E8D7BEBA05E9FC87D49A1849 * L_145 = V_0;
			ES3Reader_t2780AF8AA61DA2A817115CEF8612AC0E494D03C9 * L_146 = ___reader0;
			IL2CPP_RUNTIME_CLASS_INIT(ES3Type_int_tF64C15D40AD0CC7C15BCD1CEC3C5C6BF837BD167_il2cpp_TypeInfo_var);
			ES3Type_t8FBECB7AE75168648B9524E0C2A38DAD4555421D * L_147 = ((ES3Type_int_tF64C15D40AD0CC7C15BCD1CEC3C5C6BF837BD167_StaticFields*)il2cpp_codegen_static_fields_for(ES3Type_int_tF64C15D40AD0CC7C15BCD1CEC3C5C6BF837BD167_il2cpp_TypeInfo_var))->get_Instance_12();
			NullCheck((ES3Reader_t2780AF8AA61DA2A817115CEF8612AC0E494D03C9 *)L_146);
			int32_t L_148;
			L_148 = GenericVirtFuncInvoker1< int32_t, ES3Type_t8FBECB7AE75168648B9524E0C2A38DAD4555421D * >::Invoke(ES3Reader_Read_TisInt32_tFDE5F8CD43D10453F6A2E0C77FE48C6CC7009046_m2B74AA6627F5B1D21171D56C42F71DE5A7C1B4A6_RuntimeMethod_var, (ES3Reader_t2780AF8AA61DA2A817115CEF8612AC0E494D03C9 *)L_146, (ES3Type_t8FBECB7AE75168648B9524E0C2A38DAD4555421D *)L_147);
			NullCheck((RenderTexture_t5FE7A5B47EF962A0E8D7BEBA05E9FC87D49A1849 *)L_145);
			RenderTexture_set_antiAliasing_m4D37900B7E23CA0D33F109DB8DF21265DB70C38F((RenderTexture_t5FE7A5B47EF962A0E8D7BEBA05E9FC87D49A1849 *)L_145, (int32_t)L_148, /*hidden argument*/NULL);
			// break;
			goto IL_0721;
		}

IL_0586:
		{
			// instance.enableRandomWrite = reader.Read<System.Boolean>(ES3Type_bool.Instance);
			RenderTexture_t5FE7A5B47EF962A0E8D7BEBA05E9FC87D49A1849 * L_149 = V_0;
			ES3Reader_t2780AF8AA61DA2A817115CEF8612AC0E494D03C9 * L_150 = ___reader0;
			IL2CPP_RUNTIME_CLASS_INIT(ES3Type_bool_t8F309F7B9CC735FF1DEE68081B6E3CAB367745F4_il2cpp_TypeInfo_var);
			ES3Type_t8FBECB7AE75168648B9524E0C2A38DAD4555421D * L_151 = ((ES3Type_bool_t8F309F7B9CC735FF1DEE68081B6E3CAB367745F4_StaticFields*)il2cpp_codegen_static_fields_for(ES3Type_bool_t8F309F7B9CC735FF1DEE68081B6E3CAB367745F4_il2cpp_TypeInfo_var))->get_Instance_12();
			NullCheck((ES3Reader_t2780AF8AA61DA2A817115CEF8612AC0E494D03C9 *)L_150);
			bool L_152;
			L_152 = GenericVirtFuncInvoker1< bool, ES3Type_t8FBECB7AE75168648B9524E0C2A38DAD4555421D * >::Invoke(ES3Reader_Read_TisBoolean_t07D1E3F34E4813023D64F584DFF7B34C9D922F37_mC6D1B158268FF9B97822FF9F5B37FB1723FEDA22_RuntimeMethod_var, (ES3Reader_t2780AF8AA61DA2A817115CEF8612AC0E494D03C9 *)L_150, (ES3Type_t8FBECB7AE75168648B9524E0C2A38DAD4555421D *)L_151);
			NullCheck((RenderTexture_t5FE7A5B47EF962A0E8D7BEBA05E9FC87D49A1849 *)L_149);
			RenderTexture_set_enableRandomWrite_m024F49DB3CA3B02FA0EEBB3EACB37E6228CAA183((RenderTexture_t5FE7A5B47EF962A0E8D7BEBA05E9FC87D49A1849 *)L_149, (bool)L_152, /*hidden argument*/NULL);
			// break;
			goto IL_0721;
		}

IL_059c:
		{
			// instance.isPowerOfTwo = reader.Read<System.Boolean>(ES3Type_bool.Instance);
			RenderTexture_t5FE7A5B47EF962A0E8D7BEBA05E9FC87D49A1849 * L_153 = V_0;
			ES3Reader_t2780AF8AA61DA2A817115CEF8612AC0E494D03C9 * L_154 = ___reader0;
			IL2CPP_RUNTIME_CLASS_INIT(ES3Type_bool_t8F309F7B9CC735FF1DEE68081B6E3CAB367745F4_il2cpp_TypeInfo_var);
			ES3Type_t8FBECB7AE75168648B9524E0C2A38DAD4555421D * L_155 = ((ES3Type_bool_t8F309F7B9CC735FF1DEE68081B6E3CAB367745F4_StaticFields*)il2cpp_codegen_static_fields_for(ES3Type_bool_t8F309F7B9CC735FF1DEE68081B6E3CAB367745F4_il2cpp_TypeInfo_var))->get_Instance_12();
			NullCheck((ES3Reader_t2780AF8AA61DA2A817115CEF8612AC0E494D03C9 *)L_154);
			bool L_156;
			L_156 = GenericVirtFuncInvoker1< bool, ES3Type_t8FBECB7AE75168648B9524E0C2A38DAD4555421D * >::Invoke(ES3Reader_Read_TisBoolean_t07D1E3F34E4813023D64F584DFF7B34C9D922F37_mC6D1B158268FF9B97822FF9F5B37FB1723FEDA22_RuntimeMethod_var, (ES3Reader_t2780AF8AA61DA2A817115CEF8612AC0E494D03C9 *)L_154, (ES3Type_t8FBECB7AE75168648B9524E0C2A38DAD4555421D *)L_155);
			NullCheck((RenderTexture_t5FE7A5B47EF962A0E8D7BEBA05E9FC87D49A1849 *)L_153);
			RenderTexture_set_isPowerOfTwo_mA6D34F610DF27C40422DF5815892B45C656F1317((RenderTexture_t5FE7A5B47EF962A0E8D7BEBA05E9FC87D49A1849 *)L_153, (bool)L_156, /*hidden argument*/NULL);
			// break;
			goto IL_0721;
		}

IL_05b2:
		{
			// instance.depth = reader.Read<System.Int32>(ES3Type_int.Instance);
			RenderTexture_t5FE7A5B47EF962A0E8D7BEBA05E9FC87D49A1849 * L_157 = V_0;
			ES3Reader_t2780AF8AA61DA2A817115CEF8612AC0E494D03C9 * L_158 = ___reader0;
			IL2CPP_RUNTIME_CLASS_INIT(ES3Type_int_tF64C15D40AD0CC7C15BCD1CEC3C5C6BF837BD167_il2cpp_TypeInfo_var);
			ES3Type_t8FBECB7AE75168648B9524E0C2A38DAD4555421D * L_159 = ((ES3Type_int_tF64C15D40AD0CC7C15BCD1CEC3C5C6BF837BD167_StaticFields*)il2cpp_codegen_static_fields_for(ES3Type_int_tF64C15D40AD0CC7C15BCD1CEC3C5C6BF837BD167_il2cpp_TypeInfo_var))->get_Instance_12();
			NullCheck((ES3Reader_t2780AF8AA61DA2A817115CEF8612AC0E494D03C9 *)L_158);
			int32_t L_160;
			L_160 = GenericVirtFuncInvoker1< int32_t, ES3Type_t8FBECB7AE75168648B9524E0C2A38DAD4555421D * >::Invoke(ES3Reader_Read_TisInt32_tFDE5F8CD43D10453F6A2E0C77FE48C6CC7009046_m2B74AA6627F5B1D21171D56C42F71DE5A7C1B4A6_RuntimeMethod_var, (ES3Reader_t2780AF8AA61DA2A817115CEF8612AC0E494D03C9 *)L_158, (ES3Type_t8FBECB7AE75168648B9524E0C2A38DAD4555421D *)L_159);
			NullCheck((RenderTexture_t5FE7A5B47EF962A0E8D7BEBA05E9FC87D49A1849 *)L_157);
			RenderTexture_set_depth_mA57CEFEDDB45D0429FAC9532A631839F523944A3((RenderTexture_t5FE7A5B47EF962A0E8D7BEBA05E9FC87D49A1849 *)L_157, (int32_t)L_160, /*hidden argument*/NULL);
			// break;
			goto IL_0721;
		}

IL_05c8:
		{
			// instance.descriptor = reader.Read<UnityEngine.RenderTextureDescriptor>();
			RenderTexture_t5FE7A5B47EF962A0E8D7BEBA05E9FC87D49A1849 * L_161 = V_0;
			ES3Reader_t2780AF8AA61DA2A817115CEF8612AC0E494D03C9 * L_162 = ___reader0;
			NullCheck((ES3Reader_t2780AF8AA61DA2A817115CEF8612AC0E494D03C9 *)L_162);
			RenderTextureDescriptor_t67FF189E1F35AEB5D6C43A2D7103F3A8A8CA0B47  L_163;
			L_163 = GenericVirtFuncInvoker0< RenderTextureDescriptor_t67FF189E1F35AEB5D6C43A2D7103F3A8A8CA0B47  >::Invoke(ES3Reader_Read_TisRenderTextureDescriptor_t67FF189E1F35AEB5D6C43A2D7103F3A8A8CA0B47_m427886ADAAF96C7BA9BD423544128494F96D69E7_RuntimeMethod_var, (ES3Reader_t2780AF8AA61DA2A817115CEF8612AC0E494D03C9 *)L_162);
			NullCheck((RenderTexture_t5FE7A5B47EF962A0E8D7BEBA05E9FC87D49A1849 *)L_161);
			RenderTexture_set_descriptor_m3C8E31AE4644B23719A12345771D1B85EB6E5881((RenderTexture_t5FE7A5B47EF962A0E8D7BEBA05E9FC87D49A1849 *)L_161, (RenderTextureDescriptor_t67FF189E1F35AEB5D6C43A2D7103F3A8A8CA0B47 )L_163, /*hidden argument*/NULL);
			// break;
			goto IL_0721;
		}

IL_05d9:
		{
			// UnityEngine.RenderTexture.masterTextureLimit = reader.Read<System.Int32>(ES3Type_int.Instance);
			ES3Reader_t2780AF8AA61DA2A817115CEF8612AC0E494D03C9 * L_164 = ___reader0;
			IL2CPP_RUNTIME_CLASS_INIT(ES3Type_int_tF64C15D40AD0CC7C15BCD1CEC3C5C6BF837BD167_il2cpp_TypeInfo_var);
			ES3Type_t8FBECB7AE75168648B9524E0C2A38DAD4555421D * L_165 = ((ES3Type_int_tF64C15D40AD0CC7C15BCD1CEC3C5C6BF837BD167_StaticFields*)il2cpp_codegen_static_fields_for(ES3Type_int_tF64C15D40AD0CC7C15BCD1CEC3C5C6BF837BD167_il2cpp_TypeInfo_var))->get_Instance_12();
			NullCheck((ES3Reader_t2780AF8AA61DA2A817115CEF8612AC0E494D03C9 *)L_164);
			int32_t L_166;
			L_166 = GenericVirtFuncInvoker1< int32_t, ES3Type_t8FBECB7AE75168648B9524E0C2A38DAD4555421D * >::Invoke(ES3Reader_Read_TisInt32_tFDE5F8CD43D10453F6A2E0C77FE48C6CC7009046_m2B74AA6627F5B1D21171D56C42F71DE5A7C1B4A6_RuntimeMethod_var, (ES3Reader_t2780AF8AA61DA2A817115CEF8612AC0E494D03C9 *)L_164, (ES3Type_t8FBECB7AE75168648B9524E0C2A38DAD4555421D *)L_165);
			IL2CPP_RUNTIME_CLASS_INIT(Texture_t9FE0218A1EEDF266E8C85879FE123265CACC95AE_il2cpp_TypeInfo_var);
			Texture_set_masterTextureLimit_m94A531A20A54A86AF7B88A56F72709CE556B7DFF((int32_t)L_166, /*hidden argument*/NULL);
			// break;
			goto IL_0721;
		}

IL_05ee:
		{
			// UnityEngine.RenderTexture.anisotropicFiltering = reader.Read<UnityEngine.AnisotropicFiltering>();
			ES3Reader_t2780AF8AA61DA2A817115CEF8612AC0E494D03C9 * L_167 = ___reader0;
			NullCheck((ES3Reader_t2780AF8AA61DA2A817115CEF8612AC0E494D03C9 *)L_167);
			int32_t L_168;
			L_168 = GenericVirtFuncInvoker0< int32_t >::Invoke(ES3Reader_Read_TisAnisotropicFiltering_tAC3D1448B262D5869946CD1CDD2C8DAE3A7A537B_mAF1268AAC3E461D6E0604A19FAF0325873B6EC8A_RuntimeMethod_var, (ES3Reader_t2780AF8AA61DA2A817115CEF8612AC0E494D03C9 *)L_167);
			IL2CPP_RUNTIME_CLASS_INIT(Texture_t9FE0218A1EEDF266E8C85879FE123265CACC95AE_il2cpp_TypeInfo_var);
			Texture_set_anisotropicFiltering_mE2B639BF2681A8A0516C1C343C7E265ED60EAF16((int32_t)L_168, /*hidden argument*/NULL);
			// break;
			goto IL_0721;
		}

IL_05fe:
		{
			// instance.wrapMode = reader.Read<UnityEngine.TextureWrapMode>();
			RenderTexture_t5FE7A5B47EF962A0E8D7BEBA05E9FC87D49A1849 * L_169 = V_0;
			ES3Reader_t2780AF8AA61DA2A817115CEF8612AC0E494D03C9 * L_170 = ___reader0;
			NullCheck((ES3Reader_t2780AF8AA61DA2A817115CEF8612AC0E494D03C9 *)L_170);
			int32_t L_171;
			L_171 = GenericVirtFuncInvoker0< int32_t >::Invoke(ES3Reader_Read_TisTextureWrapMode_t86DDA8206E4AA784A1218D0DE3C5F6826D7549EB_m7926E449CD0B8BD56E5BF145DD0CCFE1C567F107_RuntimeMethod_var, (ES3Reader_t2780AF8AA61DA2A817115CEF8612AC0E494D03C9 *)L_170);
			NullCheck((Texture_t9FE0218A1EEDF266E8C85879FE123265CACC95AE *)L_169);
			Texture_set_wrapMode_m1233D2DF48DC20996F8EE26E866D4BDD2AC8050D((Texture_t9FE0218A1EEDF266E8C85879FE123265CACC95AE *)L_169, (int32_t)L_171, /*hidden argument*/NULL);
			// break;
			goto IL_0721;
		}

IL_060f:
		{
			// instance.wrapModeU = reader.Read<UnityEngine.TextureWrapMode>();
			RenderTexture_t5FE7A5B47EF962A0E8D7BEBA05E9FC87D49A1849 * L_172 = V_0;
			ES3Reader_t2780AF8AA61DA2A817115CEF8612AC0E494D03C9 * L_173 = ___reader0;
			NullCheck((ES3Reader_t2780AF8AA61DA2A817115CEF8612AC0E494D03C9 *)L_173);
			int32_t L_174;
			L_174 = GenericVirtFuncInvoker0< int32_t >::Invoke(ES3Reader_Read_TisTextureWrapMode_t86DDA8206E4AA784A1218D0DE3C5F6826D7549EB_m7926E449CD0B8BD56E5BF145DD0CCFE1C567F107_RuntimeMethod_var, (ES3Reader_t2780AF8AA61DA2A817115CEF8612AC0E494D03C9 *)L_173);
			NullCheck((Texture_t9FE0218A1EEDF266E8C85879FE123265CACC95AE *)L_172);
			Texture_set_wrapModeU_mBD3CBD6880E9E767B91ED9E1B14C725A52D7A66E((Texture_t9FE0218A1EEDF266E8C85879FE123265CACC95AE *)L_172, (int32_t)L_174, /*hidden argument*/NULL);
			// break;
			goto IL_0721;
		}

IL_0620:
		{
			// instance.wrapModeV = reader.Read<UnityEngine.TextureWrapMode>();
			RenderTexture_t5FE7A5B47EF962A0E8D7BEBA05E9FC87D49A1849 * L_175 = V_0;
			ES3Reader_t2780AF8AA61DA2A817115CEF8612AC0E494D03C9 * L_176 = ___reader0;
			NullCheck((ES3Reader_t2780AF8AA61DA2A817115CEF8612AC0E494D03C9 *)L_176);
			int32_t L_177;
			L_177 = GenericVirtFuncInvoker0< int32_t >::Invoke(ES3Reader_Read_TisTextureWrapMode_t86DDA8206E4AA784A1218D0DE3C5F6826D7549EB_m7926E449CD0B8BD56E5BF145DD0CCFE1C567F107_RuntimeMethod_var, (ES3Reader_t2780AF8AA61DA2A817115CEF8612AC0E494D03C9 *)L_176);
			NullCheck((Texture_t9FE0218A1EEDF266E8C85879FE123265CACC95AE *)L_175);
			Texture_set_wrapModeV_mCD51C11B4C90D7508113C744EDC09D04059403E5((Texture_t9FE0218A1EEDF266E8C85879FE123265CACC95AE *)L_175, (int32_t)L_177, /*hidden argument*/NULL);
			// break;
			goto IL_0721;
		}

IL_0631:
		{
			// instance.wrapModeW = reader.Read<UnityEngine.TextureWrapMode>();
			RenderTexture_t5FE7A5B47EF962A0E8D7BEBA05E9FC87D49A1849 * L_178 = V_0;
			ES3Reader_t2780AF8AA61DA2A817115CEF8612AC0E494D03C9 * L_179 = ___reader0;
			NullCheck((ES3Reader_t2780AF8AA61DA2A817115CEF8612AC0E494D03C9 *)L_179);
			int32_t L_180;
			L_180 = GenericVirtFuncInvoker0< int32_t >::Invoke(ES3Reader_Read_TisTextureWrapMode_t86DDA8206E4AA784A1218D0DE3C5F6826D7549EB_m7926E449CD0B8BD56E5BF145DD0CCFE1C567F107_RuntimeMethod_var, (ES3Reader_t2780AF8AA61DA2A817115CEF8612AC0E494D03C9 *)L_179);
			NullCheck((Texture_t9FE0218A1EEDF266E8C85879FE123265CACC95AE *)L_178);
			Texture_set_wrapModeW_m72C3239EA12A51D5031BD2A66C5E7B178EE9F65B((Texture_t9FE0218A1EEDF266E8C85879FE123265CACC95AE *)L_178, (int32_t)L_180, /*hidden argument*/NULL);
			// break;
			goto IL_0721;
		}

IL_0642:
		{
			// instance.filterMode = reader.Read<UnityEngine.FilterMode>();
			RenderTexture_t5FE7A5B47EF962A0E8D7BEBA05E9FC87D49A1849 * L_181 = V_0;
			ES3Reader_t2780AF8AA61DA2A817115CEF8612AC0E494D03C9 * L_182 = ___reader0;
			NullCheck((ES3Reader_t2780AF8AA61DA2A817115CEF8612AC0E494D03C9 *)L_182);
			int32_t L_183;
			L_183 = GenericVirtFuncInvoker0< int32_t >::Invoke(ES3Reader_Read_TisFilterMode_tE90A08FD96A142C761463D65E524BCDBFEEE3D19_m9819C2A442797B4060B0D9A80CFA96CFD6102839_RuntimeMethod_var, (ES3Reader_t2780AF8AA61DA2A817115CEF8612AC0E494D03C9 *)L_182);
			NullCheck((Texture_t9FE0218A1EEDF266E8C85879FE123265CACC95AE *)L_181);
			Texture_set_filterMode_m045141DB0FEFE496885D45F5F23B15BC0E77C8D0((Texture_t9FE0218A1EEDF266E8C85879FE123265CACC95AE *)L_181, (int32_t)L_183, /*hidden argument*/NULL);
			// break;
			goto IL_0721;
		}

IL_0653:
		{
			// instance.anisoLevel = reader.Read<System.Int32>(ES3Type_int.Instance);
			RenderTexture_t5FE7A5B47EF962A0E8D7BEBA05E9FC87D49A1849 * L_184 = V_0;
			ES3Reader_t2780AF8AA61DA2A817115CEF8612AC0E494D03C9 * L_185 = ___reader0;
			IL2CPP_RUNTIME_CLASS_INIT(ES3Type_int_tF64C15D40AD0CC7C15BCD1CEC3C5C6BF837BD167_il2cpp_TypeInfo_var);
			ES3Type_t8FBECB7AE75168648B9524E0C2A38DAD4555421D * L_186 = ((ES3Type_int_tF64C15D40AD0CC7C15BCD1CEC3C5C6BF837BD167_StaticFields*)il2cpp_codegen_static_fields_for(ES3Type_int_tF64C15D40AD0CC7C15BCD1CEC3C5C6BF837BD167_il2cpp_TypeInfo_var))->get_Instance_12();
			NullCheck((ES3Reader_t2780AF8AA61DA2A817115CEF8612AC0E494D03C9 *)L_185);
			int32_t L_187;
			L_187 = GenericVirtFuncInvoker1< int32_t, ES3Type_t8FBECB7AE75168648B9524E0C2A38DAD4555421D * >::Invoke(ES3Reader_Read_TisInt32_tFDE5F8CD43D10453F6A2E0C77FE48C6CC7009046_m2B74AA6627F5B1D21171D56C42F71DE5A7C1B4A6_RuntimeMethod_var, (ES3Reader_t2780AF8AA61DA2A817115CEF8612AC0E494D03C9 *)L_185, (ES3Type_t8FBECB7AE75168648B9524E0C2A38DAD4555421D *)L_186);
			NullCheck((Texture_t9FE0218A1EEDF266E8C85879FE123265CACC95AE *)L_184);
			Texture_set_anisoLevel_mE51360F6CD0562FD6355F8C0509B70A454CB33BE((Texture_t9FE0218A1EEDF266E8C85879FE123265CACC95AE *)L_184, (int32_t)L_187, /*hidden argument*/NULL);
			// break;
			goto IL_0721;
		}

IL_0669:
		{
			// instance.mipMapBias = reader.Read<System.Single>(ES3Type_float.Instance);
			RenderTexture_t5FE7A5B47EF962A0E8D7BEBA05E9FC87D49A1849 * L_188 = V_0;
			ES3Reader_t2780AF8AA61DA2A817115CEF8612AC0E494D03C9 * L_189 = ___reader0;
			IL2CPP_RUNTIME_CLASS_INIT(ES3Type_float_tF86B773C86731BD9AD79448B860BBB178FE77644_il2cpp_TypeInfo_var);
			ES3Type_t8FBECB7AE75168648B9524E0C2A38DAD4555421D * L_190 = ((ES3Type_float_tF86B773C86731BD9AD79448B860BBB178FE77644_StaticFields*)il2cpp_codegen_static_fields_for(ES3Type_float_tF86B773C86731BD9AD79448B860BBB178FE77644_il2cpp_TypeInfo_var))->get_Instance_12();
			NullCheck((ES3Reader_t2780AF8AA61DA2A817115CEF8612AC0E494D03C9 *)L_189);
			float L_191;
			L_191 = GenericVirtFuncInvoker1< float, ES3Type_t8FBECB7AE75168648B9524E0C2A38DAD4555421D * >::Invoke(ES3Reader_Read_TisSingle_tE07797BA3C98D4CA9B5A19413C19A76688AB899E_m4A0416374498BDA042B8EB21E49B72326D6CE5F4_RuntimeMethod_var, (ES3Reader_t2780AF8AA61DA2A817115CEF8612AC0E494D03C9 *)L_189, (ES3Type_t8FBECB7AE75168648B9524E0C2A38DAD4555421D *)L_190);
			NullCheck((Texture_t9FE0218A1EEDF266E8C85879FE123265CACC95AE *)L_188);
			Texture_set_mipMapBias_m5057ADA9DBA8E8E30EC15EA5BABFA0734CE2821C((Texture_t9FE0218A1EEDF266E8C85879FE123265CACC95AE *)L_188, (float)L_191, /*hidden argument*/NULL);
			// break;
			goto IL_0721;
		}

IL_067f:
		{
			// instance.name = reader.Read<System.String>(ES3Type_string.Instance);
			RenderTexture_t5FE7A5B47EF962A0E8D7BEBA05E9FC87D49A1849 * L_192 = V_0;
			ES3Reader_t2780AF8AA61DA2A817115CEF8612AC0E494D03C9 * L_193 = ___reader0;
			IL2CPP_RUNTIME_CLASS_INIT(ES3Type_string_tC47BFBE3CC816F3C70B51558C68F0C6470C5EFE5_il2cpp_TypeInfo_var);
			ES3Type_t8FBECB7AE75168648B9524E0C2A38DAD4555421D * L_194 = ((ES3Type_string_tC47BFBE3CC816F3C70B51558C68F0C6470C5EFE5_StaticFields*)il2cpp_codegen_static_fields_for(ES3Type_string_tC47BFBE3CC816F3C70B51558C68F0C6470C5EFE5_il2cpp_TypeInfo_var))->get_Instance_12();
			NullCheck((ES3Reader_t2780AF8AA61DA2A817115CEF8612AC0E494D03C9 *)L_193);
			String_t* L_195;
			L_195 = GenericVirtFuncInvoker1< String_t*, ES3Type_t8FBECB7AE75168648B9524E0C2A38DAD4555421D * >::Invoke(ES3Reader_Read_TisString_t_m883861F3B58239392073ABF39876826EEB87DF9C_RuntimeMethod_var, (ES3Reader_t2780AF8AA61DA2A817115CEF8612AC0E494D03C9 *)L_193, (ES3Type_t8FBECB7AE75168648B9524E0C2A38DAD4555421D *)L_194);
			NullCheck((Object_tF2F3778131EFF286AF62B7B013A170F95A91571A *)L_192);
			Object_set_name_m87C4006618ADB325ABE5439DF159E10DD8DD0781((Object_tF2F3778131EFF286AF62B7B013A170F95A91571A *)L_192, (String_t*)L_195, /*hidden argument*/NULL);
			// break;
			goto IL_0721;
		}

IL_0695:
		{
			// instance.vrUsage = reader.Read<UnityEngine.VRTextureUsage>();
			RenderTexture_t5FE7A5B47EF962A0E8D7BEBA05E9FC87D49A1849 * L_196 = V_0;
			ES3Reader_t2780AF8AA61DA2A817115CEF8612AC0E494D03C9 * L_197 = ___reader0;
			NullCheck((ES3Reader_t2780AF8AA61DA2A817115CEF8612AC0E494D03C9 *)L_197);
			int32_t L_198;
			L_198 = GenericVirtFuncInvoker0< int32_t >::Invoke(ES3Reader_Read_TisVRTextureUsage_t3C09DF3DD90B5620BC0AB6F8078DFEF4E607F645_m7DE3966E4815BB13132866CB005EEE5B90FF51C2_RuntimeMethod_var, (ES3Reader_t2780AF8AA61DA2A817115CEF8612AC0E494D03C9 *)L_197);
			NullCheck((RenderTexture_t5FE7A5B47EF962A0E8D7BEBA05E9FC87D49A1849 *)L_196);
			RenderTexture_set_vrUsage_m9AF7F60442E3B933FDF274D801EA074D1A5ECB71((RenderTexture_t5FE7A5B47EF962A0E8D7BEBA05E9FC87D49A1849 *)L_196, (int32_t)L_198, /*hidden argument*/NULL);
			// break;
			goto IL_0721;
		}

IL_06a3:
		{
			// instance.graphicsFormat = reader.Read<UnityEngine.Experimental.Rendering.GraphicsFormat>();
			RenderTexture_t5FE7A5B47EF962A0E8D7BEBA05E9FC87D49A1849 * L_199 = V_0;
			ES3Reader_t2780AF8AA61DA2A817115CEF8612AC0E494D03C9 * L_200 = ___reader0;
			NullCheck((ES3Reader_t2780AF8AA61DA2A817115CEF8612AC0E494D03C9 *)L_200);
			int32_t L_201;
			L_201 = GenericVirtFuncInvoker0< int32_t >::Invoke(ES3Reader_Read_TisGraphicsFormat_t07A3C024BC77B843C53A369D6FC02ABD27D2AB1D_mCBD36004B10F649C93215AB4717F6F0D7118BF7D_RuntimeMethod_var, (ES3Reader_t2780AF8AA61DA2A817115CEF8612AC0E494D03C9 *)L_200);
			NullCheck((RenderTexture_t5FE7A5B47EF962A0E8D7BEBA05E9FC87D49A1849 *)L_199);
			RenderTexture_set_graphicsFormat_mA378AAD8BD876EE96637FF0A80A2AFEA4D852FAB((RenderTexture_t5FE7A5B47EF962A0E8D7BEBA05E9FC87D49A1849 *)L_199, (int32_t)L_201, /*hidden argument*/NULL);
			// break;
			goto IL_0721;
		}

IL_06b1:
		{
			// instance.stencilFormat = reader.Read<UnityEngine.Experimental.Rendering.GraphicsFormat>();
			RenderTexture_t5FE7A5B47EF962A0E8D7BEBA05E9FC87D49A1849 * L_202 = V_0;
			ES3Reader_t2780AF8AA61DA2A817115CEF8612AC0E494D03C9 * L_203 = ___reader0;
			NullCheck((ES3Reader_t2780AF8AA61DA2A817115CEF8612AC0E494D03C9 *)L_203);
			int32_t L_204;
			L_204 = GenericVirtFuncInvoker0< int32_t >::Invoke(ES3Reader_Read_TisGraphicsFormat_t07A3C024BC77B843C53A369D6FC02ABD27D2AB1D_mCBD36004B10F649C93215AB4717F6F0D7118BF7D_RuntimeMethod_var, (ES3Reader_t2780AF8AA61DA2A817115CEF8612AC0E494D03C9 *)L_203);
			NullCheck((RenderTexture_t5FE7A5B47EF962A0E8D7BEBA05E9FC87D49A1849 *)L_202);
			RenderTexture_set_stencilFormat_m7C6E21FCDB7E786D403CFC9775105B050EFF19C7((RenderTexture_t5FE7A5B47EF962A0E8D7BEBA05E9FC87D49A1849 *)L_202, (int32_t)L_204, /*hidden argument*/NULL);
			// break;
			goto IL_0721;
		}

IL_06bf:
		{
			// instance.bindTextureMS = reader.Read<System.Boolean>(ES3Type_bool.Instance);
			RenderTexture_t5FE7A5B47EF962A0E8D7BEBA05E9FC87D49A1849 * L_205 = V_0;
			ES3Reader_t2780AF8AA61DA2A817115CEF8612AC0E494D03C9 * L_206 = ___reader0;
			IL2CPP_RUNTIME_CLASS_INIT(ES3Type_bool_t8F309F7B9CC735FF1DEE68081B6E3CAB367745F4_il2cpp_TypeInfo_var);
			ES3Type_t8FBECB7AE75168648B9524E0C2A38DAD4555421D * L_207 = ((ES3Type_bool_t8F309F7B9CC735FF1DEE68081B6E3CAB367745F4_StaticFields*)il2cpp_codegen_static_fields_for(ES3Type_bool_t8F309F7B9CC735FF1DEE68081B6E3CAB367745F4_il2cpp_TypeInfo_var))->get_Instance_12();
			NullCheck((ES3Reader_t2780AF8AA61DA2A817115CEF8612AC0E494D03C9 *)L_206);
			bool L_208;
			L_208 = GenericVirtFuncInvoker1< bool, ES3Type_t8FBECB7AE75168648B9524E0C2A38DAD4555421D * >::Invoke(ES3Reader_Read_TisBoolean_t07D1E3F34E4813023D64F584DFF7B34C9D922F37_mC6D1B158268FF9B97822FF9F5B37FB1723FEDA22_RuntimeMethod_var, (ES3Reader_t2780AF8AA61DA2A817115CEF8612AC0E494D03C9 *)L_206, (ES3Type_t8FBECB7AE75168648B9524E0C2A38DAD4555421D *)L_207);
			NullCheck((RenderTexture_t5FE7A5B47EF962A0E8D7BEBA05E9FC87D49A1849 *)L_205);
			RenderTexture_set_bindTextureMS_m6C26F6AB2DE8FE81BFCA60C936AA08EA7F1A7177((RenderTexture_t5FE7A5B47EF962A0E8D7BEBA05E9FC87D49A1849 *)L_205, (bool)L_208, /*hidden argument*/NULL);
			// break;
			goto IL_0721;
		}

IL_06d2:
		{
			// instance.useDynamicScale = reader.Read<System.Boolean>(ES3Type_bool.Instance);
			RenderTexture_t5FE7A5B47EF962A0E8D7BEBA05E9FC87D49A1849 * L_209 = V_0;
			ES3Reader_t2780AF8AA61DA2A817115CEF8612AC0E494D03C9 * L_210 = ___reader0;
			IL2CPP_RUNTIME_CLASS_INIT(ES3Type_bool_t8F309F7B9CC735FF1DEE68081B6E3CAB367745F4_il2cpp_TypeInfo_var);
			ES3Type_t8FBECB7AE75168648B9524E0C2A38DAD4555421D * L_211 = ((ES3Type_bool_t8F309F7B9CC735FF1DEE68081B6E3CAB367745F4_StaticFields*)il2cpp_codegen_static_fields_for(ES3Type_bool_t8F309F7B9CC735FF1DEE68081B6E3CAB367745F4_il2cpp_TypeInfo_var))->get_Instance_12();
			NullCheck((ES3Reader_t2780AF8AA61DA2A817115CEF8612AC0E494D03C9 *)L_210);
			bool L_212;
			L_212 = GenericVirtFuncInvoker1< bool, ES3Type_t8FBECB7AE75168648B9524E0C2A38DAD4555421D * >::Invoke(ES3Reader_Read_TisBoolean_t07D1E3F34E4813023D64F584DFF7B34C9D922F37_mC6D1B158268FF9B97822FF9F5B37FB1723FEDA22_RuntimeMethod_var, (ES3Reader_t2780AF8AA61DA2A817115CEF8612AC0E494D03C9 *)L_210, (ES3Type_t8FBECB7AE75168648B9524E0C2A38DAD4555421D *)L_211);
			NullCheck((RenderTexture_t5FE7A5B47EF962A0E8D7BEBA05E9FC87D49A1849 *)L_209);
			RenderTexture_set_useDynamicScale_m8F96571C7EDBEFAB9278E04A3F3EB67067A5AE29((RenderTexture_t5FE7A5B47EF962A0E8D7BEBA05E9FC87D49A1849 *)L_209, (bool)L_212, /*hidden argument*/NULL);
			// break;
			goto IL_0721;
		}

IL_06e5:
		{
			// UnityEngine.RenderTexture.streamingTextureForceLoadAll = reader.Read<System.Boolean>(ES3Type_bool.Instance);
			ES3Reader_t2780AF8AA61DA2A817115CEF8612AC0E494D03C9 * L_213 = ___reader0;
			IL2CPP_RUNTIME_CLASS_INIT(ES3Type_bool_t8F309F7B9CC735FF1DEE68081B6E3CAB367745F4_il2cpp_TypeInfo_var);
			ES3Type_t8FBECB7AE75168648B9524E0C2A38DAD4555421D * L_214 = ((ES3Type_bool_t8F309F7B9CC735FF1DEE68081B6E3CAB367745F4_StaticFields*)il2cpp_codegen_static_fields_for(ES3Type_bool_t8F309F7B9CC735FF1DEE68081B6E3CAB367745F4_il2cpp_TypeInfo_var))->get_Instance_12();
			NullCheck((ES3Reader_t2780AF8AA61DA2A817115CEF8612AC0E494D03C9 *)L_213);
			bool L_215;
			L_215 = GenericVirtFuncInvoker1< bool, ES3Type_t8FBECB7AE75168648B9524E0C2A38DAD4555421D * >::Invoke(ES3Reader_Read_TisBoolean_t07D1E3F34E4813023D64F584DFF7B34C9D922F37_mC6D1B158268FF9B97822FF9F5B37FB1723FEDA22_RuntimeMethod_var, (ES3Reader_t2780AF8AA61DA2A817115CEF8612AC0E494D03C9 *)L_213, (ES3Type_t8FBECB7AE75168648B9524E0C2A38DAD4555421D *)L_214);
			IL2CPP_RUNTIME_CLASS_INIT(Texture_t9FE0218A1EEDF266E8C85879FE123265CACC95AE_il2cpp_TypeInfo_var);
			Texture_set_streamingTextureForceLoadAll_m325117C0830BB9B4316CF41CEE045759FC52B7A3((bool)L_215, /*hidden argument*/NULL);
			// break;
			goto IL_0721;
		}

IL_06f7:
		{
			// UnityEngine.RenderTexture.streamingTextureDiscardUnusedMips = reader.Read<System.Boolean>(ES3Type_bool.Instance);
			ES3Reader_t2780AF8AA61DA2A817115CEF8612AC0E494D03C9 * L_216 = ___reader0;
			IL2CPP_RUNTIME_CLASS_INIT(ES3Type_bool_t8F309F7B9CC735FF1DEE68081B6E3CAB367745F4_il2cpp_TypeInfo_var);
			ES3Type_t8FBECB7AE75168648B9524E0C2A38DAD4555421D * L_217 = ((ES3Type_bool_t8F309F7B9CC735FF1DEE68081B6E3CAB367745F4_StaticFields*)il2cpp_codegen_static_fields_for(ES3Type_bool_t8F309F7B9CC735FF1DEE68081B6E3CAB367745F4_il2cpp_TypeInfo_var))->get_Instance_12();
			NullCheck((ES3Reader_t2780AF8AA61DA2A817115CEF8612AC0E494D03C9 *)L_216);
			bool L_218;
			L_218 = GenericVirtFuncInvoker1< bool, ES3Type_t8FBECB7AE75168648B9524E0C2A38DAD4555421D * >::Invoke(ES3Reader_Read_TisBoolean_t07D1E3F34E4813023D64F584DFF7B34C9D922F37_mC6D1B158268FF9B97822FF9F5B37FB1723FEDA22_RuntimeMethod_var, (ES3Reader_t2780AF8AA61DA2A817115CEF8612AC0E494D03C9 *)L_216, (ES3Type_t8FBECB7AE75168648B9524E0C2A38DAD4555421D *)L_217);
			IL2CPP_RUNTIME_CLASS_INIT(Texture_t9FE0218A1EEDF266E8C85879FE123265CACC95AE_il2cpp_TypeInfo_var);
			Texture_set_streamingTextureDiscardUnusedMips_mE184CE016A8E0319B437D34E0DB61962CE17F5DC((bool)L_218, /*hidden argument*/NULL);
			// break;
			goto IL_0721;
		}

IL_0709:
		{
			// UnityEngine.RenderTexture.allowThreadedTextureCreation = reader.Read<System.Boolean>(ES3Type_bool.Instance);
			ES3Reader_t2780AF8AA61DA2A817115CEF8612AC0E494D03C9 * L_219 = ___reader0;
			IL2CPP_RUNTIME_CLASS_INIT(ES3Type_bool_t8F309F7B9CC735FF1DEE68081B6E3CAB367745F4_il2cpp_TypeInfo_var);
			ES3Type_t8FBECB7AE75168648B9524E0C2A38DAD4555421D * L_220 = ((ES3Type_bool_t8F309F7B9CC735FF1DEE68081B6E3CAB367745F4_StaticFields*)il2cpp_codegen_static_fields_for(ES3Type_bool_t8F309F7B9CC735FF1DEE68081B6E3CAB367745F4_il2cpp_TypeInfo_var))->get_Instance_12();
			NullCheck((ES3Reader_t2780AF8AA61DA2A817115CEF8612AC0E494D03C9 *)L_219);
			bool L_221;
			L_221 = GenericVirtFuncInvoker1< bool, ES3Type_t8FBECB7AE75168648B9524E0C2A38DAD4555421D * >::Invoke(ES3Reader_Read_TisBoolean_t07D1E3F34E4813023D64F584DFF7B34C9D922F37_mC6D1B158268FF9B97822FF9F5B37FB1723FEDA22_RuntimeMethod_var, (ES3Reader_t2780AF8AA61DA2A817115CEF8612AC0E494D03C9 *)L_219, (ES3Type_t8FBECB7AE75168648B9524E0C2A38DAD4555421D *)L_220);
			IL2CPP_RUNTIME_CLASS_INIT(Texture_t9FE0218A1EEDF266E8C85879FE123265CACC95AE_il2cpp_TypeInfo_var);
			Texture_set_allowThreadedTextureCreation_m84D29394912B9CE876023963426256CBEB15A52E((bool)L_221, /*hidden argument*/NULL);
			// break;
			goto IL_0721;
		}

IL_071b:
		{
			// reader.Skip();
			ES3Reader_t2780AF8AA61DA2A817115CEF8612AC0E494D03C9 * L_222 = ___reader0;
			NullCheck((ES3Reader_t2780AF8AA61DA2A817115CEF8612AC0E494D03C9 *)L_222);
			VirtActionInvoker0::Invoke(41 /* System.Void ES3Reader::Skip() */, (ES3Reader_t2780AF8AA61DA2A817115CEF8612AC0E494D03C9 *)L_222);
		}

IL_0721:
		{
			// foreach (string propertyName in reader.Properties)
			RuntimeObject* L_223 = V_1;
			NullCheck((RuntimeObject*)L_223);
			bool L_224;
			L_224 = InterfaceFuncInvoker0< bool >::Invoke(0 /* System.Boolean System.Collections.IEnumerator::MoveNext() */, IEnumerator_t5956F3AFB7ECF1117E3BC5890E7FC7B7F7A04105_il2cpp_TypeInfo_var, (RuntimeObject*)L_223);
			if (L_224)
			{
				goto IL_0018;
			}
		}

IL_072c:
		{
			IL2CPP_LEAVE(0x742, FINALLY_072e);
		}
	} // end try (depth: 1)
	catch(Il2CppExceptionWrapper& e)
	{
		__last_unhandled_exception = (Exception_t *)e.ex;
		goto FINALLY_072e;
	}

FINALLY_072e:
	{ // begin finally (depth: 1)
		{
			RuntimeObject* L_225 = V_1;
			V_4 = (RuntimeObject*)((RuntimeObject*)IsInst((RuntimeObject*)L_225, IDisposable_t099785737FC6A1E3699919A94109383715A8D807_il2cpp_TypeInfo_var));
			RuntimeObject* L_226 = V_4;
			if (!L_226)
			{
				goto IL_0741;
			}
		}

IL_073a:
		{
			RuntimeObject* L_227 = V_4;
			NullCheck((RuntimeObject*)L_227);
			InterfaceActionInvoker0::Invoke(0 /* System.Void System.IDisposable::Dispose() */, IDisposable_t099785737FC6A1E3699919A94109383715A8D807_il2cpp_TypeInfo_var, (RuntimeObject*)L_227);
		}

IL_0741:
		{
			IL2CPP_END_FINALLY(1838)
		}
	} // end finally (depth: 1)
	IL2CPP_CLEANUP(1838)
	{
		IL2CPP_RETHROW_IF_UNHANDLED(Exception_t *)
		IL2CPP_JUMP_TBL(0x742, IL_0742)
	}

IL_0742:
	{
		// }
		return;
	}
}
// System.Void ES3Types.ES3Type_RenderTexture::ReadObject<UnityEngine.ParticleSystem/InheritVelocityModule>(ES3Reader,System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ES3Type_RenderTexture_ReadObject_TisInheritVelocityModule_t25F2271E4D9ED5D27234CDD00271CB7D435D9619_m69D9439A980552F51CBAB0184DA9DB63849C44EA_gshared (ES3Type_RenderTexture_t7B14573C56809AFDC0A1C481D6B61E2146DEF194 * __this, ES3Reader_t2780AF8AA61DA2A817115CEF8612AC0E494D03C9 * ___reader0, RuntimeObject * ___obj1, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ES3Reader_Read_TisAnisotropicFiltering_tAC3D1448B262D5869946CD1CDD2C8DAE3A7A537B_mAF1268AAC3E461D6E0604A19FAF0325873B6EC8A_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ES3Reader_Read_TisBoolean_t07D1E3F34E4813023D64F584DFF7B34C9D922F37_mC6D1B158268FF9B97822FF9F5B37FB1723FEDA22_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ES3Reader_Read_TisFilterMode_tE90A08FD96A142C761463D65E524BCDBFEEE3D19_m9819C2A442797B4060B0D9A80CFA96CFD6102839_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ES3Reader_Read_TisGraphicsFormat_t07A3C024BC77B843C53A369D6FC02ABD27D2AB1D_mCBD36004B10F649C93215AB4717F6F0D7118BF7D_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ES3Reader_Read_TisInt32_tFDE5F8CD43D10453F6A2E0C77FE48C6CC7009046_m2B74AA6627F5B1D21171D56C42F71DE5A7C1B4A6_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ES3Reader_Read_TisRenderTextureDescriptor_t67FF189E1F35AEB5D6C43A2D7103F3A8A8CA0B47_m427886ADAAF96C7BA9BD423544128494F96D69E7_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ES3Reader_Read_TisRenderTextureFormat_t8371287102ED67772EF78229CF4AB9D38C2CD626_mE6358E03407F5C15B58B292C79D4770DE3FAC95A_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ES3Reader_Read_TisRenderTextureMemoryless_t37547D68C2186D2650440F719302CDA4A3BB7F67_m3A980BA15AADBBB8393C3BC88CE17EEDDC89B027_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ES3Reader_Read_TisSingle_tE07797BA3C98D4CA9B5A19413C19A76688AB899E_m4A0416374498BDA042B8EB21E49B72326D6CE5F4_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ES3Reader_Read_TisString_t_m883861F3B58239392073ABF39876826EEB87DF9C_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ES3Reader_Read_TisTextureDimension_tADCCB7C1D30E4D1182651BA9094B4DE61B63EACC_m19EAA3B93D10636C17A62A3D8437349223CFD988_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ES3Reader_Read_TisTextureWrapMode_t86DDA8206E4AA784A1218D0DE3C5F6826D7549EB_m7926E449CD0B8BD56E5BF145DD0CCFE1C567F107_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ES3Reader_Read_TisVRTextureUsage_t3C09DF3DD90B5620BC0AB6F8078DFEF4E607F645_m7DE3966E4815BB13132866CB005EEE5B90FF51C2_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ES3Type_bool_t8F309F7B9CC735FF1DEE68081B6E3CAB367745F4_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ES3Type_float_tF86B773C86731BD9AD79448B860BBB178FE77644_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ES3Type_int_tF64C15D40AD0CC7C15BCD1CEC3C5C6BF837BD167_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ES3Type_string_tC47BFBE3CC816F3C70B51558C68F0C6470C5EFE5_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IDisposable_t099785737FC6A1E3699919A94109383715A8D807_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IEnumerator_t5956F3AFB7ECF1117E3BC5890E7FC7B7F7A04105_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&RenderTexture_t5FE7A5B47EF962A0E8D7BEBA05E9FC87D49A1849_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&String_t_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Texture_t9FE0218A1EEDF266E8C85879FE123265CACC95AE_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral201D9D00BB60DC2318D21CF9902290EFE255D5DC);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral2ADFC3FFF7C52D554F0435A348A5345C9FCD7FF8);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral2E201D1972661439FD3C8523C55723E7E9BCC7DA);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral2EE7B6B0E37E14930BBA497867139BFD0617CE04);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral3A04F86957625CB28FA670EECF997E6BAD45BBE7);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral3BC15E3C2F40466B2DC85C4776499817B8306CBB);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral3F1522C8DB7943F2AE3AA1563D3AC25D9C8B93D1);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral53D3413057D7E52F44470A335C590748745352B1);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral647E0FB2B5E859CC4BD7C73623B82C8EFABA2563);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral65B008F04EC40A696263EF679CF274BD10999A5D);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral71C5F9C3E2F3C81C5BBC7FD313F6938654E61138);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral75C9716749EA210206E3467390B7A11F3F33DDFA);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral7606720A7AEF5939309A8E4FCB8274252FA3D7BF);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral7A4A6E2A7090298F814A9D44C89F8634249BEF07);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral7FF61C3A55BCA1287974D8740F945250B3F0F084);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral83AC9669A9053DD15B9F2E82D2CE2369EFE131BA);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral95F57476C0AA778364404E7CCCD7499BF1BF3757);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral9AB5ADF8A8A53110245466F7C226F7935F5FE95F);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralB49A1DF483856544CEC6018E8C944DB6E16A8D57);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralBA9362732D25B1644B7D8DEC5DF6F036A4A66DE5);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralC959D767B7F0BD38D9DA8A64A4750C3A0972E2A0);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralCD44AC57FFE6CAC7824F4CAA223F1BB8B4CB0D73);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralCE18B047107AA23D1AA9B2ED32D316148E02655F);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralEA8FBF382D8AC9EDB8FFC14A350641B987F5C631);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralEBF5FE0CBF3EEA67902EEA700B7216E3DB0D8E84);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralECAEEB225F8689DE45DEB4FA21CE34E1960B1B50);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralF23E83744C9D6FC70D71B723AAED8006D6780BCB);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralF2AF7DD0BFF41B7B35037F018DAABE7DCF357A7B);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralF38CFAE6A91D072D4453C29FF44D81D459A582F1);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralF3FA58C10BBB9830102605E24AF89DC619908DFA);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralF9EE582B77C320A1F6A3DF72205857C4248BAC79);
		s_Il2CppMethodInitialized = true;
	}
	RenderTexture_t5FE7A5B47EF962A0E8D7BEBA05E9FC87D49A1849 * V_0 = NULL;
	RuntimeObject* V_1 = NULL;
	String_t* V_2 = NULL;
	uint32_t V_3 = 0;
	RuntimeObject* V_4 = NULL;
	Exception_t * __last_unhandled_exception = 0;
	il2cpp::utils::ExceptionSupportStack<int32_t, 1> __leave_targets;
	{
		// var instance = (UnityEngine.RenderTexture)obj;
		RuntimeObject * L_0 = ___obj1;
		V_0 = (RenderTexture_t5FE7A5B47EF962A0E8D7BEBA05E9FC87D49A1849 *)((RenderTexture_t5FE7A5B47EF962A0E8D7BEBA05E9FC87D49A1849 *)Castclass((RuntimeObject*)L_0, RenderTexture_t5FE7A5B47EF962A0E8D7BEBA05E9FC87D49A1849_il2cpp_TypeInfo_var));
		// foreach (string propertyName in reader.Properties)
		ES3Reader_t2780AF8AA61DA2A817115CEF8612AC0E494D03C9 * L_1 = ___reader0;
		NullCheck((ES3Reader_t2780AF8AA61DA2A817115CEF8612AC0E494D03C9 *)L_1);
		ES3ReaderPropertyEnumerator_tFC854F4BE72BFA234682EB1909D92457534A979D * L_2;
		L_2 = VirtFuncInvoker0< ES3ReaderPropertyEnumerator_tFC854F4BE72BFA234682EB1909D92457534A979D * >::Invoke(39 /* ES3Reader/ES3ReaderPropertyEnumerator ES3Reader::get_Properties() */, (ES3Reader_t2780AF8AA61DA2A817115CEF8612AC0E494D03C9 *)L_1);
		NullCheck((ES3ReaderPropertyEnumerator_tFC854F4BE72BFA234682EB1909D92457534A979D *)L_2);
		RuntimeObject* L_3;
		L_3 = ES3ReaderPropertyEnumerator_GetEnumerator_m6C61168655E3736E7847E5CB1CD9BC6B48442FD4((ES3ReaderPropertyEnumerator_tFC854F4BE72BFA234682EB1909D92457534A979D *)L_2, /*hidden argument*/NULL);
		V_1 = (RuntimeObject*)L_3;
	}

IL_0013:
	try
	{ // begin try (depth: 1)
		{
			goto IL_0721;
		}

IL_0018:
		{
			// foreach (string propertyName in reader.Properties)
			RuntimeObject* L_4 = V_1;
			NullCheck((RuntimeObject*)L_4);
			RuntimeObject * L_5;
			L_5 = InterfaceFuncInvoker0< RuntimeObject * >::Invoke(1 /* System.Object System.Collections.IEnumerator::get_Current() */, IEnumerator_t5956F3AFB7ECF1117E3BC5890E7FC7B7F7A04105_il2cpp_TypeInfo_var, (RuntimeObject*)L_4);
			V_2 = (String_t*)((String_t*)Castclass((RuntimeObject*)L_5, String_t_il2cpp_TypeInfo_var));
			String_t* L_6 = V_2;
			if (!L_6)
			{
				goto IL_071b;
			}
		}

IL_002a:
		{
			String_t* L_7 = V_2;
			uint32_t L_8;
			L_8 = U3CPrivateImplementationDetailsU3E_ComputeStringHash_m3ADC1F612F9EE3DD518E6F0023A0DE0EE2B120A7((String_t*)L_7, /*hidden argument*/NULL);
			V_3 = (uint32_t)L_8;
			uint32_t L_9 = V_3;
			if ((!(((uint32_t)L_9) <= ((uint32_t)((int32_t)1508062721)))))
			{
				goto IL_0134;
			}
		}

IL_003c:
		{
			uint32_t L_10 = V_3;
			if ((!(((uint32_t)L_10) <= ((uint32_t)((int32_t)698754697)))))
			{
				goto IL_00b0;
			}
		}

IL_0044:
		{
			uint32_t L_11 = V_3;
			if ((!(((uint32_t)L_11) <= ((uint32_t)((int32_t)472844700)))))
			{
				goto IL_0072;
			}
		}

IL_004c:
		{
			uint32_t L_12 = V_3;
			if ((((int32_t)L_12) == ((int32_t)((int32_t)87590155))))
			{
				goto IL_043c;
			}
		}

IL_0057:
		{
			uint32_t L_13 = V_3;
			if ((((int32_t)L_13) == ((int32_t)((int32_t)301255720))))
			{
				goto IL_02d7;
			}
		}

IL_0062:
		{
			uint32_t L_14 = V_3;
			if ((((int32_t)L_14) == ((int32_t)((int32_t)472844700))))
			{
				goto IL_0283;
			}
		}

IL_006d:
		{
			goto IL_071b;
		}

IL_0072:
		{
			uint32_t L_15 = V_3;
			if ((!(((uint32_t)L_15) <= ((uint32_t)((int32_t)549791583)))))
			{
				goto IL_0095;
			}
		}

IL_007a:
		{
			uint32_t L_16 = V_3;
			if ((((int32_t)L_16) == ((int32_t)((int32_t)533013964))))
			{
				goto IL_03a9;
			}
		}

IL_0085:
		{
			uint32_t L_17 = V_3;
			if ((((int32_t)L_17) == ((int32_t)((int32_t)549791583))))
			{
				goto IL_03be;
			}
		}

IL_0090:
		{
			goto IL_071b;
		}

IL_0095:
		{
			uint32_t L_18 = V_3;
			if ((((int32_t)L_18) == ((int32_t)((int32_t)583346821))))
			{
				goto IL_0394;
			}
		}

IL_00a0:
		{
			uint32_t L_19 = V_3;
			if ((((int32_t)L_19) == ((int32_t)((int32_t)698754697))))
			{
				goto IL_02ec;
			}
		}

IL_00ab:
		{
			goto IL_071b;
		}

IL_00b0:
		{
			uint32_t L_20 = V_3;
			if ((!(((uint32_t)L_20) <= ((uint32_t)((int32_t)1235622516)))))
			{
				goto IL_00f6;
			}
		}

IL_00b8:
		{
			uint32_t L_21 = V_3;
			if ((!(((uint32_t)L_21) <= ((uint32_t)((int32_t)740612720)))))
			{
				goto IL_00db;
			}
		}

IL_00c0:
		{
			uint32_t L_22 = V_3;
			if ((((int32_t)L_22) == ((int32_t)((int32_t)705796271))))
			{
				goto IL_0316;
			}
		}

IL_00cb:
		{
			uint32_t L_23 = V_3;
			if ((((int32_t)L_23) == ((int32_t)((int32_t)740612720))))
			{
				goto IL_03d3;
			}
		}

IL_00d6:
		{
			goto IL_071b;
		}

IL_00db:
		{
			uint32_t L_24 = V_3;
			if ((((int32_t)L_24) == ((int32_t)((int32_t)1059843136))))
			{
				goto IL_0340;
			}
		}

IL_00e6:
		{
			uint32_t L_25 = V_3;
			if ((((int32_t)L_25) == ((int32_t)((int32_t)1235622516))))
			{
				goto IL_036a;
			}
		}

IL_00f1:
		{
			goto IL_071b;
		}

IL_00f6:
		{
			uint32_t L_26 = V_3;
			if ((!(((uint32_t)L_26) <= ((uint32_t)((int32_t)1320492961)))))
			{
				goto IL_0119;
			}
		}

IL_00fe:
		{
			uint32_t L_27 = V_3;
			if ((((int32_t)L_27) == ((int32_t)((int32_t)1310955452))))
			{
				goto IL_0490;
			}
		}

IL_0109:
		{
			uint32_t L_28 = V_3;
			if ((((int32_t)L_28) == ((int32_t)((int32_t)1320492961))))
			{
				goto IL_047b;
			}
		}

IL_0114:
		{
			goto IL_071b;
		}

IL_0119:
		{
			uint32_t L_29 = V_3;
			if ((((int32_t)L_29) == ((int32_t)((int32_t)1458352709))))
			{
				goto IL_0466;
			}
		}

IL_0124:
		{
			uint32_t L_30 = V_3;
			if ((((int32_t)L_30) == ((int32_t)((int32_t)1508062721))))
			{
				goto IL_04a5;
			}
		}

IL_012f:
		{
			goto IL_071b;
		}

IL_0134:
		{
			uint32_t L_31 = V_3;
			if ((!(((uint32_t)L_31) <= ((uint32_t)((int32_t)-1444332543)))))
			{
				goto IL_01c3;
			}
		}

IL_013f:
		{
			uint32_t L_32 = V_3;
			if ((!(((uint32_t)L_32) <= ((uint32_t)((int32_t)2129631044)))))
			{
				goto IL_0185;
			}
		}

IL_0147:
		{
			uint32_t L_33 = V_3;
			if ((!(((uint32_t)L_33) <= ((uint32_t)((int32_t)1640355324)))))
			{
				goto IL_016a;
			}
		}

IL_014f:
		{
			uint32_t L_34 = V_3;
			if ((((int32_t)L_34) == ((int32_t)((int32_t)1560124071))))
			{
				goto IL_04ba;
			}
		}

IL_015a:
		{
			uint32_t L_35 = V_3;
			if ((((int32_t)L_35) == ((int32_t)((int32_t)1640355324))))
			{
				goto IL_0451;
			}
		}

IL_0165:
		{
			goto IL_071b;
		}

IL_016a:
		{
			uint32_t L_36 = V_3;
			if ((((int32_t)L_36) == ((int32_t)((int32_t)1728801507))))
			{
				goto IL_026e;
			}
		}

IL_0175:
		{
			uint32_t L_37 = V_3;
			if ((((int32_t)L_37) == ((int32_t)((int32_t)2129631044))))
			{
				goto IL_03fd;
			}
		}

IL_0180:
		{
			goto IL_071b;
		}

IL_0185:
		{
			uint32_t L_38 = V_3;
			if ((!(((uint32_t)L_38) <= ((uint32_t)((int32_t)-1786286561)))))
			{
				goto IL_01a8;
			}
		}

IL_018d:
		{
			uint32_t L_39 = V_3;
			if ((((int32_t)L_39) == ((int32_t)((int32_t)-1925595674))))
			{
				goto IL_0412;
			}
		}

IL_0198:
		{
			uint32_t L_40 = V_3;
			if ((((int32_t)L_40) == ((int32_t)((int32_t)-1786286561))))
			{
				goto IL_0244;
			}
		}

IL_01a3:
		{
			goto IL_071b;
		}

IL_01a8:
		{
			uint32_t L_41 = V_3;
			if ((((int32_t)L_41) == ((int32_t)((int32_t)-1522491664))))
			{
				goto IL_0298;
			}
		}

IL_01b3:
		{
			uint32_t L_42 = V_3;
			if ((((int32_t)L_42) == ((int32_t)((int32_t)-1444332543))))
			{
				goto IL_0355;
			}
		}

IL_01be:
		{
			goto IL_071b;
		}

IL_01c3:
		{
			uint32_t L_43 = V_3;
			if ((!(((uint32_t)L_43) <= ((uint32_t)((int32_t)-558361902)))))
			{
				goto IL_0206;
			}
		}

IL_01cb:
		{
			uint32_t L_44 = V_3;
			if ((!(((uint32_t)L_44) <= ((uint32_t)((int32_t)-1180859054)))))
			{
				goto IL_01ee;
			}
		}

IL_01d3:
		{
			uint32_t L_45 = V_3;
			if ((((int32_t)L_45) == ((int32_t)((int32_t)-1335745110))))
			{
				goto IL_02c2;
			}
		}

IL_01de:
		{
			uint32_t L_46 = V_3;
			if ((((int32_t)L_46) == ((int32_t)((int32_t)-1180859054))))
			{
				goto IL_02ad;
			}
		}

IL_01e9:
		{
			goto IL_071b;
		}

IL_01ee:
		{
			uint32_t L_47 = V_3;
			if ((((int32_t)L_47) == ((int32_t)((int32_t)-708986046))))
			{
				goto IL_0259;
			}
		}

IL_01f6:
		{
			uint32_t L_48 = V_3;
			if ((((int32_t)L_48) == ((int32_t)((int32_t)-558361902))))
			{
				goto IL_037f;
			}
		}

IL_0201:
		{
			goto IL_071b;
		}

IL_0206:
		{
			uint32_t L_49 = V_3;
			if ((!(((uint32_t)L_49) <= ((uint32_t)((int32_t)-255211260)))))
			{
				goto IL_0229;
			}
		}

IL_020e:
		{
			uint32_t L_50 = V_3;
			if ((((int32_t)L_50) == ((int32_t)((int32_t)-345285761))))
			{
				goto IL_03e8;
			}
		}

IL_0219:
		{
			uint32_t L_51 = V_3;
			if ((((int32_t)L_51) == ((int32_t)((int32_t)-255211260))))
			{
				goto IL_0427;
			}
		}

IL_0224:
		{
			goto IL_071b;
		}

IL_0229:
		{
			uint32_t L_52 = V_3;
			if ((((int32_t)L_52) == ((int32_t)((int32_t)-42086080))))
			{
				goto IL_0301;
			}
		}

IL_0234:
		{
			uint32_t L_53 = V_3;
			if ((((int32_t)L_53) == ((int32_t)((int32_t)-25846038))))
			{
				goto IL_032b;
			}
		}

IL_023f:
		{
			goto IL_071b;
		}

IL_0244:
		{
			String_t* L_54 = V_2;
			bool L_55;
			L_55 = String_op_Equality_m50B3548E4AC232558190B0052877B290AA1D436A((String_t*)L_54, (String_t*)_stringLiteralEBF5FE0CBF3EEA67902EEA700B7216E3DB0D8E84, /*hidden argument*/NULL);
			if (L_55)
			{
				goto IL_04cf;
			}
		}

IL_0254:
		{
			goto IL_071b;
		}

IL_0259:
		{
			String_t* L_56 = V_2;
			bool L_57;
			L_57 = String_op_Equality_m50B3548E4AC232558190B0052877B290AA1D436A((String_t*)L_56, (String_t*)_stringLiteral647E0FB2B5E859CC4BD7C73623B82C8EFABA2563, /*hidden argument*/NULL);
			if (L_57)
			{
				goto IL_04e5;
			}
		}

IL_0269:
		{
			goto IL_071b;
		}

IL_026e:
		{
			String_t* L_58 = V_2;
			bool L_59;
			L_59 = String_op_Equality_m50B3548E4AC232558190B0052877B290AA1D436A((String_t*)L_58, (String_t*)_stringLiteralF9EE582B77C320A1F6A3DF72205857C4248BAC79, /*hidden argument*/NULL);
			if (L_59)
			{
				goto IL_04fb;
			}
		}

IL_027e:
		{
			goto IL_071b;
		}

IL_0283:
		{
			String_t* L_60 = V_2;
			bool L_61;
			L_61 = String_op_Equality_m50B3548E4AC232558190B0052877B290AA1D436A((String_t*)L_60, (String_t*)_stringLiteral53D3413057D7E52F44470A335C590748745352B1, /*hidden argument*/NULL);
			if (L_61)
			{
				goto IL_050c;
			}
		}

IL_0293:
		{
			goto IL_071b;
		}

IL_0298:
		{
			String_t* L_62 = V_2;
			bool L_63;
			L_63 = String_op_Equality_m50B3548E4AC232558190B0052877B290AA1D436A((String_t*)L_62, (String_t*)_stringLiteralC959D767B7F0BD38D9DA8A64A4750C3A0972E2A0, /*hidden argument*/NULL);
			if (L_63)
			{
				goto IL_0522;
			}
		}

IL_02a8:
		{
			goto IL_071b;
		}

IL_02ad:
		{
			String_t* L_64 = V_2;
			bool L_65;
			L_65 = String_op_Equality_m50B3548E4AC232558190B0052877B290AA1D436A((String_t*)L_64, (String_t*)_stringLiteral75C9716749EA210206E3467390B7A11F3F33DDFA, /*hidden argument*/NULL);
			if (L_65)
			{
				goto IL_0533;
			}
		}

IL_02bd:
		{
			goto IL_071b;
		}

IL_02c2:
		{
			String_t* L_66 = V_2;
			bool L_67;
			L_67 = String_op_Equality_m50B3548E4AC232558190B0052877B290AA1D436A((String_t*)L_66, (String_t*)_stringLiteral7606720A7AEF5939309A8E4FCB8274252FA3D7BF, /*hidden argument*/NULL);
			if (L_67)
			{
				goto IL_0544;
			}
		}

IL_02d2:
		{
			goto IL_071b;
		}

IL_02d7:
		{
			String_t* L_68 = V_2;
			bool L_69;
			L_69 = String_op_Equality_m50B3548E4AC232558190B0052877B290AA1D436A((String_t*)L_68, (String_t*)_stringLiteral71C5F9C3E2F3C81C5BBC7FD313F6938654E61138, /*hidden argument*/NULL);
			if (L_69)
			{
				goto IL_055a;
			}
		}

IL_02e7:
		{
			goto IL_071b;
		}

IL_02ec:
		{
			String_t* L_70 = V_2;
			bool L_71;
			L_71 = String_op_Equality_m50B3548E4AC232558190B0052877B290AA1D436A((String_t*)L_70, (String_t*)_stringLiteral3F1522C8DB7943F2AE3AA1563D3AC25D9C8B93D1, /*hidden argument*/NULL);
			if (L_71)
			{
				goto IL_0570;
			}
		}

IL_02fc:
		{
			goto IL_071b;
		}

IL_0301:
		{
			String_t* L_72 = V_2;
			bool L_73;
			L_73 = String_op_Equality_m50B3548E4AC232558190B0052877B290AA1D436A((String_t*)L_72, (String_t*)_stringLiteralF23E83744C9D6FC70D71B723AAED8006D6780BCB, /*hidden argument*/NULL);
			if (L_73)
			{
				goto IL_0586;
			}
		}

IL_0311:
		{
			goto IL_071b;
		}

IL_0316:
		{
			String_t* L_74 = V_2;
			bool L_75;
			L_75 = String_op_Equality_m50B3548E4AC232558190B0052877B290AA1D436A((String_t*)L_74, (String_t*)_stringLiteralB49A1DF483856544CEC6018E8C944DB6E16A8D57, /*hidden argument*/NULL);
			if (L_75)
			{
				goto IL_059c;
			}
		}

IL_0326:
		{
			goto IL_071b;
		}

IL_032b:
		{
			String_t* L_76 = V_2;
			bool L_77;
			L_77 = String_op_Equality_m50B3548E4AC232558190B0052877B290AA1D436A((String_t*)L_76, (String_t*)_stringLiteral3A04F86957625CB28FA670EECF997E6BAD45BBE7, /*hidden argument*/NULL);
			if (L_77)
			{
				goto IL_05b2;
			}
		}

IL_033b:
		{
			goto IL_071b;
		}

IL_0340:
		{
			String_t* L_78 = V_2;
			bool L_79;
			L_79 = String_op_Equality_m50B3548E4AC232558190B0052877B290AA1D436A((String_t*)L_78, (String_t*)_stringLiteral7A4A6E2A7090298F814A9D44C89F8634249BEF07, /*hidden argument*/NULL);
			if (L_79)
			{
				goto IL_05c8;
			}
		}

IL_0350:
		{
			goto IL_071b;
		}

IL_0355:
		{
			String_t* L_80 = V_2;
			bool L_81;
			L_81 = String_op_Equality_m50B3548E4AC232558190B0052877B290AA1D436A((String_t*)L_80, (String_t*)_stringLiteralF3FA58C10BBB9830102605E24AF89DC619908DFA, /*hidden argument*/NULL);
			if (L_81)
			{
				goto IL_05d9;
			}
		}

IL_0365:
		{
			goto IL_071b;
		}

IL_036a:
		{
			String_t* L_82 = V_2;
			bool L_83;
			L_83 = String_op_Equality_m50B3548E4AC232558190B0052877B290AA1D436A((String_t*)L_82, (String_t*)_stringLiteralBA9362732D25B1644B7D8DEC5DF6F036A4A66DE5, /*hidden argument*/NULL);
			if (L_83)
			{
				goto IL_05ee;
			}
		}

IL_037a:
		{
			goto IL_071b;
		}

IL_037f:
		{
			String_t* L_84 = V_2;
			bool L_85;
			L_85 = String_op_Equality_m50B3548E4AC232558190B0052877B290AA1D436A((String_t*)L_84, (String_t*)_stringLiteral95F57476C0AA778364404E7CCCD7499BF1BF3757, /*hidden argument*/NULL);
			if (L_85)
			{
				goto IL_05fe;
			}
		}

IL_038f:
		{
			goto IL_071b;
		}

IL_0394:
		{
			String_t* L_86 = V_2;
			bool L_87;
			L_87 = String_op_Equality_m50B3548E4AC232558190B0052877B290AA1D436A((String_t*)L_86, (String_t*)_stringLiteral9AB5ADF8A8A53110245466F7C226F7935F5FE95F, /*hidden argument*/NULL);
			if (L_87)
			{
				goto IL_060f;
			}
		}

IL_03a4:
		{
			goto IL_071b;
		}

IL_03a9:
		{
			String_t* L_88 = V_2;
			bool L_89;
			L_89 = String_op_Equality_m50B3548E4AC232558190B0052877B290AA1D436A((String_t*)L_88, (String_t*)_stringLiteralEA8FBF382D8AC9EDB8FFC14A350641B987F5C631, /*hidden argument*/NULL);
			if (L_89)
			{
				goto IL_0620;
			}
		}

IL_03b9:
		{
			goto IL_071b;
		}

IL_03be:
		{
			String_t* L_90 = V_2;
			bool L_91;
			L_91 = String_op_Equality_m50B3548E4AC232558190B0052877B290AA1D436A((String_t*)L_90, (String_t*)_stringLiteral201D9D00BB60DC2318D21CF9902290EFE255D5DC, /*hidden argument*/NULL);
			if (L_91)
			{
				goto IL_0631;
			}
		}

IL_03ce:
		{
			goto IL_071b;
		}

IL_03d3:
		{
			String_t* L_92 = V_2;
			bool L_93;
			L_93 = String_op_Equality_m50B3548E4AC232558190B0052877B290AA1D436A((String_t*)L_92, (String_t*)_stringLiteral65B008F04EC40A696263EF679CF274BD10999A5D, /*hidden argument*/NULL);
			if (L_93)
			{
				goto IL_0642;
			}
		}

IL_03e3:
		{
			goto IL_071b;
		}

IL_03e8:
		{
			String_t* L_94 = V_2;
			bool L_95;
			L_95 = String_op_Equality_m50B3548E4AC232558190B0052877B290AA1D436A((String_t*)L_94, (String_t*)_stringLiteralF38CFAE6A91D072D4453C29FF44D81D459A582F1, /*hidden argument*/NULL);
			if (L_95)
			{
				goto IL_0653;
			}
		}

IL_03f8:
		{
			goto IL_071b;
		}

IL_03fd:
		{
			String_t* L_96 = V_2;
			bool L_97;
			L_97 = String_op_Equality_m50B3548E4AC232558190B0052877B290AA1D436A((String_t*)L_96, (String_t*)_stringLiteral3BC15E3C2F40466B2DC85C4776499817B8306CBB, /*hidden argument*/NULL);
			if (L_97)
			{
				goto IL_0669;
			}
		}

IL_040d:
		{
			goto IL_071b;
		}

IL_0412:
		{
			String_t* L_98 = V_2;
			bool L_99;
			L_99 = String_op_Equality_m50B3548E4AC232558190B0052877B290AA1D436A((String_t*)L_98, (String_t*)_stringLiteralCE18B047107AA23D1AA9B2ED32D316148E02655F, /*hidden argument*/NULL);
			if (L_99)
			{
				goto IL_067f;
			}
		}

IL_0422:
		{
			goto IL_071b;
		}

IL_0427:
		{
			String_t* L_100 = V_2;
			bool L_101;
			L_101 = String_op_Equality_m50B3548E4AC232558190B0052877B290AA1D436A((String_t*)L_100, (String_t*)_stringLiteral83AC9669A9053DD15B9F2E82D2CE2369EFE131BA, /*hidden argument*/NULL);
			if (L_101)
			{
				goto IL_0695;
			}
		}

IL_0437:
		{
			goto IL_071b;
		}

IL_043c:
		{
			String_t* L_102 = V_2;
			bool L_103;
			L_103 = String_op_Equality_m50B3548E4AC232558190B0052877B290AA1D436A((String_t*)L_102, (String_t*)_stringLiteralECAEEB225F8689DE45DEB4FA21CE34E1960B1B50, /*hidden argument*/NULL);
			if (L_103)
			{
				goto IL_06a3;
			}
		}

IL_044c:
		{
			goto IL_071b;
		}

IL_0451:
		{
			String_t* L_104 = V_2;
			bool L_105;
			L_105 = String_op_Equality_m50B3548E4AC232558190B0052877B290AA1D436A((String_t*)L_104, (String_t*)_stringLiteral2EE7B6B0E37E14930BBA497867139BFD0617CE04, /*hidden argument*/NULL);
			if (L_105)
			{
				goto IL_06b1;
			}
		}

IL_0461:
		{
			goto IL_071b;
		}

IL_0466:
		{
			String_t* L_106 = V_2;
			bool L_107;
			L_107 = String_op_Equality_m50B3548E4AC232558190B0052877B290AA1D436A((String_t*)L_106, (String_t*)_stringLiteralF2AF7DD0BFF41B7B35037F018DAABE7DCF357A7B, /*hidden argument*/NULL);
			if (L_107)
			{
				goto IL_06bf;
			}
		}

IL_0476:
		{
			goto IL_071b;
		}

IL_047b:
		{
			String_t* L_108 = V_2;
			bool L_109;
			L_109 = String_op_Equality_m50B3548E4AC232558190B0052877B290AA1D436A((String_t*)L_108, (String_t*)_stringLiteral7FF61C3A55BCA1287974D8740F945250B3F0F084, /*hidden argument*/NULL);
			if (L_109)
			{
				goto IL_06d2;
			}
		}

IL_048b:
		{
			goto IL_071b;
		}

IL_0490:
		{
			String_t* L_110 = V_2;
			bool L_111;
			L_111 = String_op_Equality_m50B3548E4AC232558190B0052877B290AA1D436A((String_t*)L_110, (String_t*)_stringLiteral2ADFC3FFF7C52D554F0435A348A5345C9FCD7FF8, /*hidden argument*/NULL);
			if (L_111)
			{
				goto IL_06e5;
			}
		}

IL_04a0:
		{
			goto IL_071b;
		}

IL_04a5:
		{
			String_t* L_112 = V_2;
			bool L_113;
			L_113 = String_op_Equality_m50B3548E4AC232558190B0052877B290AA1D436A((String_t*)L_112, (String_t*)_stringLiteral2E201D1972661439FD3C8523C55723E7E9BCC7DA, /*hidden argument*/NULL);
			if (L_113)
			{
				goto IL_06f7;
			}
		}

IL_04b5:
		{
			goto IL_071b;
		}

IL_04ba:
		{
			String_t* L_114 = V_2;
			bool L_115;
			L_115 = String_op_Equality_m50B3548E4AC232558190B0052877B290AA1D436A((String_t*)L_114, (String_t*)_stringLiteralCD44AC57FFE6CAC7824F4CAA223F1BB8B4CB0D73, /*hidden argument*/NULL);
			if (L_115)
			{
				goto IL_0709;
			}
		}

IL_04ca:
		{
			goto IL_071b;
		}

IL_04cf:
		{
			// instance.width = reader.Read<System.Int32>(ES3Type_int.Instance);
			RenderTexture_t5FE7A5B47EF962A0E8D7BEBA05E9FC87D49A1849 * L_116 = V_0;
			ES3Reader_t2780AF8AA61DA2A817115CEF8612AC0E494D03C9 * L_117 = ___reader0;
			IL2CPP_RUNTIME_CLASS_INIT(ES3Type_int_tF64C15D40AD0CC7C15BCD1CEC3C5C6BF837BD167_il2cpp_TypeInfo_var);
			ES3Type_t8FBECB7AE75168648B9524E0C2A38DAD4555421D * L_118 = ((ES3Type_int_tF64C15D40AD0CC7C15BCD1CEC3C5C6BF837BD167_StaticFields*)il2cpp_codegen_static_fields_for(ES3Type_int_tF64C15D40AD0CC7C15BCD1CEC3C5C6BF837BD167_il2cpp_TypeInfo_var))->get_Instance_12();
			NullCheck((ES3Reader_t2780AF8AA61DA2A817115CEF8612AC0E494D03C9 *)L_117);
			int32_t L_119;
			L_119 = GenericVirtFuncInvoker1< int32_t, ES3Type_t8FBECB7AE75168648B9524E0C2A38DAD4555421D * >::Invoke(ES3Reader_Read_TisInt32_tFDE5F8CD43D10453F6A2E0C77FE48C6CC7009046_m2B74AA6627F5B1D21171D56C42F71DE5A7C1B4A6_RuntimeMethod_var, (ES3Reader_t2780AF8AA61DA2A817115CEF8612AC0E494D03C9 *)L_117, (ES3Type_t8FBECB7AE75168648B9524E0C2A38DAD4555421D *)L_118);
			NullCheck((Texture_t9FE0218A1EEDF266E8C85879FE123265CACC95AE *)L_116);
			VirtActionInvoker1< int32_t >::Invoke(6 /* System.Void UnityEngine.Texture::set_width(System.Int32) */, (Texture_t9FE0218A1EEDF266E8C85879FE123265CACC95AE *)L_116, (int32_t)L_119);
			// break;
			goto IL_0721;
		}

IL_04e5:
		{
			// instance.height = reader.Read<System.Int32>(ES3Type_int.Instance);
			RenderTexture_t5FE7A5B47EF962A0E8D7BEBA05E9FC87D49A1849 * L_120 = V_0;
			ES3Reader_t2780AF8AA61DA2A817115CEF8612AC0E494D03C9 * L_121 = ___reader0;
			IL2CPP_RUNTIME_CLASS_INIT(ES3Type_int_tF64C15D40AD0CC7C15BCD1CEC3C5C6BF837BD167_il2cpp_TypeInfo_var);
			ES3Type_t8FBECB7AE75168648B9524E0C2A38DAD4555421D * L_122 = ((ES3Type_int_tF64C15D40AD0CC7C15BCD1CEC3C5C6BF837BD167_StaticFields*)il2cpp_codegen_static_fields_for(ES3Type_int_tF64C15D40AD0CC7C15BCD1CEC3C5C6BF837BD167_il2cpp_TypeInfo_var))->get_Instance_12();
			NullCheck((ES3Reader_t2780AF8AA61DA2A817115CEF8612AC0E494D03C9 *)L_121);
			int32_t L_123;
			L_123 = GenericVirtFuncInvoker1< int32_t, ES3Type_t8FBECB7AE75168648B9524E0C2A38DAD4555421D * >::Invoke(ES3Reader_Read_TisInt32_tFDE5F8CD43D10453F6A2E0C77FE48C6CC7009046_m2B74AA6627F5B1D21171D56C42F71DE5A7C1B4A6_RuntimeMethod_var, (ES3Reader_t2780AF8AA61DA2A817115CEF8612AC0E494D03C9 *)L_121, (ES3Type_t8FBECB7AE75168648B9524E0C2A38DAD4555421D *)L_122);
			NullCheck((Texture_t9FE0218A1EEDF266E8C85879FE123265CACC95AE *)L_120);
			VirtActionInvoker1< int32_t >::Invoke(8 /* System.Void UnityEngine.Texture::set_height(System.Int32) */, (Texture_t9FE0218A1EEDF266E8C85879FE123265CACC95AE *)L_120, (int32_t)L_123);
			// break;
			goto IL_0721;
		}

IL_04fb:
		{
			// instance.dimension = reader.Read<UnityEngine.Rendering.TextureDimension>();
			RenderTexture_t5FE7A5B47EF962A0E8D7BEBA05E9FC87D49A1849 * L_124 = V_0;
			ES3Reader_t2780AF8AA61DA2A817115CEF8612AC0E494D03C9 * L_125 = ___reader0;
			NullCheck((ES3Reader_t2780AF8AA61DA2A817115CEF8612AC0E494D03C9 *)L_125);
			int32_t L_126;
			L_126 = GenericVirtFuncInvoker0< int32_t >::Invoke(ES3Reader_Read_TisTextureDimension_tADCCB7C1D30E4D1182651BA9094B4DE61B63EACC_m19EAA3B93D10636C17A62A3D8437349223CFD988_RuntimeMethod_var, (ES3Reader_t2780AF8AA61DA2A817115CEF8612AC0E494D03C9 *)L_125);
			NullCheck((Texture_t9FE0218A1EEDF266E8C85879FE123265CACC95AE *)L_124);
			VirtActionInvoker1< int32_t >::Invoke(10 /* System.Void UnityEngine.Texture::set_dimension(UnityEngine.Rendering.TextureDimension) */, (Texture_t9FE0218A1EEDF266E8C85879FE123265CACC95AE *)L_124, (int32_t)L_126);
			// break;
			goto IL_0721;
		}

IL_050c:
		{
			// instance.useMipMap = reader.Read<System.Boolean>(ES3Type_bool.Instance);
			RenderTexture_t5FE7A5B47EF962A0E8D7BEBA05E9FC87D49A1849 * L_127 = V_0;
			ES3Reader_t2780AF8AA61DA2A817115CEF8612AC0E494D03C9 * L_128 = ___reader0;
			IL2CPP_RUNTIME_CLASS_INIT(ES3Type_bool_t8F309F7B9CC735FF1DEE68081B6E3CAB367745F4_il2cpp_TypeInfo_var);
			ES3Type_t8FBECB7AE75168648B9524E0C2A38DAD4555421D * L_129 = ((ES3Type_bool_t8F309F7B9CC735FF1DEE68081B6E3CAB367745F4_StaticFields*)il2cpp_codegen_static_fields_for(ES3Type_bool_t8F309F7B9CC735FF1DEE68081B6E3CAB367745F4_il2cpp_TypeInfo_var))->get_Instance_12();
			NullCheck((ES3Reader_t2780AF8AA61DA2A817115CEF8612AC0E494D03C9 *)L_128);
			bool L_130;
			L_130 = GenericVirtFuncInvoker1< bool, ES3Type_t8FBECB7AE75168648B9524E0C2A38DAD4555421D * >::Invoke(ES3Reader_Read_TisBoolean_t07D1E3F34E4813023D64F584DFF7B34C9D922F37_mC6D1B158268FF9B97822FF9F5B37FB1723FEDA22_RuntimeMethod_var, (ES3Reader_t2780AF8AA61DA2A817115CEF8612AC0E494D03C9 *)L_128, (ES3Type_t8FBECB7AE75168648B9524E0C2A38DAD4555421D *)L_129);
			NullCheck((RenderTexture_t5FE7A5B47EF962A0E8D7BEBA05E9FC87D49A1849 *)L_127);
			RenderTexture_set_useMipMap_mAE1437C3D7D21441891A612C3B812EE9C379F126((RenderTexture_t5FE7A5B47EF962A0E8D7BEBA05E9FC87D49A1849 *)L_127, (bool)L_130, /*hidden argument*/NULL);
			// break;
			goto IL_0721;
		}

IL_0522:
		{
			// instance.memorylessMode = reader.Read<UnityEngine.RenderTextureMemoryless>();
			RenderTexture_t5FE7A5B47EF962A0E8D7BEBA05E9FC87D49A1849 * L_131 = V_0;
			ES3Reader_t2780AF8AA61DA2A817115CEF8612AC0E494D03C9 * L_132 = ___reader0;
			NullCheck((ES3Reader_t2780AF8AA61DA2A817115CEF8612AC0E494D03C9 *)L_132);
			int32_t L_133;
			L_133 = GenericVirtFuncInvoker0< int32_t >::Invoke(ES3Reader_Read_TisRenderTextureMemoryless_t37547D68C2186D2650440F719302CDA4A3BB7F67_m3A980BA15AADBBB8393C3BC88CE17EEDDC89B027_RuntimeMethod_var, (ES3Reader_t2780AF8AA61DA2A817115CEF8612AC0E494D03C9 *)L_132);
			NullCheck((RenderTexture_t5FE7A5B47EF962A0E8D7BEBA05E9FC87D49A1849 *)L_131);
			RenderTexture_set_memorylessMode_mE48B2A38E9374A7BB419383B438790347474EFC1((RenderTexture_t5FE7A5B47EF962A0E8D7BEBA05E9FC87D49A1849 *)L_131, (int32_t)L_133, /*hidden argument*/NULL);
			// break;
			goto IL_0721;
		}

IL_0533:
		{
			// instance.format = reader.Read<UnityEngine.RenderTextureFormat>();
			RenderTexture_t5FE7A5B47EF962A0E8D7BEBA05E9FC87D49A1849 * L_134 = V_0;
			ES3Reader_t2780AF8AA61DA2A817115CEF8612AC0E494D03C9 * L_135 = ___reader0;
			NullCheck((ES3Reader_t2780AF8AA61DA2A817115CEF8612AC0E494D03C9 *)L_135);
			int32_t L_136;
			L_136 = GenericVirtFuncInvoker0< int32_t >::Invoke(ES3Reader_Read_TisRenderTextureFormat_t8371287102ED67772EF78229CF4AB9D38C2CD626_mE6358E03407F5C15B58B292C79D4770DE3FAC95A_RuntimeMethod_var, (ES3Reader_t2780AF8AA61DA2A817115CEF8612AC0E494D03C9 *)L_135);
			NullCheck((RenderTexture_t5FE7A5B47EF962A0E8D7BEBA05E9FC87D49A1849 *)L_134);
			RenderTexture_set_format_m32D42DC33DB151B69E81D0D93F36DE7450CFC23D((RenderTexture_t5FE7A5B47EF962A0E8D7BEBA05E9FC87D49A1849 *)L_134, (int32_t)L_136, /*hidden argument*/NULL);
			// break;
			goto IL_0721;
		}

IL_0544:
		{
			// instance.autoGenerateMips = reader.Read<System.Boolean>(ES3Type_bool.Instance);
			RenderTexture_t5FE7A5B47EF962A0E8D7BEBA05E9FC87D49A1849 * L_137 = V_0;
			ES3Reader_t2780AF8AA61DA2A817115CEF8612AC0E494D03C9 * L_138 = ___reader0;
			IL2CPP_RUNTIME_CLASS_INIT(ES3Type_bool_t8F309F7B9CC735FF1DEE68081B6E3CAB367745F4_il2cpp_TypeInfo_var);
			ES3Type_t8FBECB7AE75168648B9524E0C2A38DAD4555421D * L_139 = ((ES3Type_bool_t8F309F7B9CC735FF1DEE68081B6E3CAB367745F4_StaticFields*)il2cpp_codegen_static_fields_for(ES3Type_bool_t8F309F7B9CC735FF1DEE68081B6E3CAB367745F4_il2cpp_TypeInfo_var))->get_Instance_12();
			NullCheck((ES3Reader_t2780AF8AA61DA2A817115CEF8612AC0E494D03C9 *)L_138);
			bool L_140;
			L_140 = GenericVirtFuncInvoker1< bool, ES3Type_t8FBECB7AE75168648B9524E0C2A38DAD4555421D * >::Invoke(ES3Reader_Read_TisBoolean_t07D1E3F34E4813023D64F584DFF7B34C9D922F37_mC6D1B158268FF9B97822FF9F5B37FB1723FEDA22_RuntimeMethod_var, (ES3Reader_t2780AF8AA61DA2A817115CEF8612AC0E494D03C9 *)L_138, (ES3Type_t8FBECB7AE75168648B9524E0C2A38DAD4555421D *)L_139);
			NullCheck((RenderTexture_t5FE7A5B47EF962A0E8D7BEBA05E9FC87D49A1849 *)L_137);
			RenderTexture_set_autoGenerateMips_m0F02D60D4C4D4790B354451732F2DA6BA12D2E63((RenderTexture_t5FE7A5B47EF962A0E8D7BEBA05E9FC87D49A1849 *)L_137, (bool)L_140, /*hidden argument*/NULL);
			// break;
			goto IL_0721;
		}

IL_055a:
		{
			// instance.volumeDepth = reader.Read<System.Int32>(ES3Type_int.Instance);
			RenderTexture_t5FE7A5B47EF962A0E8D7BEBA05E9FC87D49A1849 * L_141 = V_0;
			ES3Reader_t2780AF8AA61DA2A817115CEF8612AC0E494D03C9 * L_142 = ___reader0;
			IL2CPP_RUNTIME_CLASS_INIT(ES3Type_int_tF64C15D40AD0CC7C15BCD1CEC3C5C6BF837BD167_il2cpp_TypeInfo_var);
			ES3Type_t8FBECB7AE75168648B9524E0C2A38DAD4555421D * L_143 = ((ES3Type_int_tF64C15D40AD0CC7C15BCD1CEC3C5C6BF837BD167_StaticFields*)il2cpp_codegen_static_fields_for(ES3Type_int_tF64C15D40AD0CC7C15BCD1CEC3C5C6BF837BD167_il2cpp_TypeInfo_var))->get_Instance_12();
			NullCheck((ES3Reader_t2780AF8AA61DA2A817115CEF8612AC0E494D03C9 *)L_142);
			int32_t L_144;
			L_144 = GenericVirtFuncInvoker1< int32_t, ES3Type_t8FBECB7AE75168648B9524E0C2A38DAD4555421D * >::Invoke(ES3Reader_Read_TisInt32_tFDE5F8CD43D10453F6A2E0C77FE48C6CC7009046_m2B74AA6627F5B1D21171D56C42F71DE5A7C1B4A6_RuntimeMethod_var, (ES3Reader_t2780AF8AA61DA2A817115CEF8612AC0E494D03C9 *)L_142, (ES3Type_t8FBECB7AE75168648B9524E0C2A38DAD4555421D *)L_143);
			NullCheck((RenderTexture_t5FE7A5B47EF962A0E8D7BEBA05E9FC87D49A1849 *)L_141);
			RenderTexture_set_volumeDepth_m01D7BD50386DDAE777CE3CB9B60FDD7DE798AC93((RenderTexture_t5FE7A5B47EF962A0E8D7BEBA05E9FC87D49A1849 *)L_141, (int32_t)L_144, /*hidden argument*/NULL);
			// break;
			goto IL_0721;
		}

IL_0570:
		{
			// instance.antiAliasing = reader.Read<System.Int32>(ES3Type_int.Instance);
			RenderTexture_t5FE7A5B47EF962A0E8D7BEBA05E9FC87D49A1849 * L_145 = V_0;
			ES3Reader_t2780AF8AA61DA2A817115CEF8612AC0E494D03C9 * L_146 = ___reader0;
			IL2CPP_RUNTIME_CLASS_INIT(ES3Type_int_tF64C15D40AD0CC7C15BCD1CEC3C5C6BF837BD167_il2cpp_TypeInfo_var);
			ES3Type_t8FBECB7AE75168648B9524E0C2A38DAD4555421D * L_147 = ((ES3Type_int_tF64C15D40AD0CC7C15BCD1CEC3C5C6BF837BD167_StaticFields*)il2cpp_codegen_static_fields_for(ES3Type_int_tF64C15D40AD0CC7C15BCD1CEC3C5C6BF837BD167_il2cpp_TypeInfo_var))->get_Instance_12();
			NullCheck((ES3Reader_t2780AF8AA61DA2A817115CEF8612AC0E494D03C9 *)L_146);
			int32_t L_148;
			L_148 = GenericVirtFuncInvoker1< int32_t, ES3Type_t8FBECB7AE75168648B9524E0C2A38DAD4555421D * >::Invoke(ES3Reader_Read_TisInt32_tFDE5F8CD43D10453F6A2E0C77FE48C6CC7009046_m2B74AA6627F5B1D21171D56C42F71DE5A7C1B4A6_RuntimeMethod_var, (ES3Reader_t2780AF8AA61DA2A817115CEF8612AC0E494D03C9 *)L_146, (ES3Type_t8FBECB7AE75168648B9524E0C2A38DAD4555421D *)L_147);
			NullCheck((RenderTexture_t5FE7A5B47EF962A0E8D7BEBA05E9FC87D49A1849 *)L_145);
			RenderTexture_set_antiAliasing_m4D37900B7E23CA0D33F109DB8DF21265DB70C38F((RenderTexture_t5FE7A5B47EF962A0E8D7BEBA05E9FC87D49A1849 *)L_145, (int32_t)L_148, /*hidden argument*/NULL);
			// break;
			goto IL_0721;
		}

IL_0586:
		{
			// instance.enableRandomWrite = reader.Read<System.Boolean>(ES3Type_bool.Instance);
			RenderTexture_t5FE7A5B47EF962A0E8D7BEBA05E9FC87D49A1849 * L_149 = V_0;
			ES3Reader_t2780AF8AA61DA2A817115CEF8612AC0E494D03C9 * L_150 = ___reader0;
			IL2CPP_RUNTIME_CLASS_INIT(ES3Type_bool_t8F309F7B9CC735FF1DEE68081B6E3CAB367745F4_il2cpp_TypeInfo_var);
			ES3Type_t8FBECB7AE75168648B9524E0C2A38DAD4555421D * L_151 = ((ES3Type_bool_t8F309F7B9CC735FF1DEE68081B6E3CAB367745F4_StaticFields*)il2cpp_codegen_static_fields_for(ES3Type_bool_t8F309F7B9CC735FF1DEE68081B6E3CAB367745F4_il2cpp_TypeInfo_var))->get_Instance_12();
			NullCheck((ES3Reader_t2780AF8AA61DA2A817115CEF8612AC0E494D03C9 *)L_150);
			bool L_152;
			L_152 = GenericVirtFuncInvoker1< bool, ES3Type_t8FBECB7AE75168648B9524E0C2A38DAD4555421D * >::Invoke(ES3Reader_Read_TisBoolean_t07D1E3F34E4813023D64F584DFF7B34C9D922F37_mC6D1B158268FF9B97822FF9F5B37FB1723FEDA22_RuntimeMethod_var, (ES3Reader_t2780AF8AA61DA2A817115CEF8612AC0E494D03C9 *)L_150, (ES3Type_t8FBECB7AE75168648B9524E0C2A38DAD4555421D *)L_151);
			NullCheck((RenderTexture_t5FE7A5B47EF962A0E8D7BEBA05E9FC87D49A1849 *)L_149);
			RenderTexture_set_enableRandomWrite_m024F49DB3CA3B02FA0EEBB3EACB37E6228CAA183((RenderTexture_t5FE7A5B47EF962A0E8D7BEBA05E9FC87D49A1849 *)L_149, (bool)L_152, /*hidden argument*/NULL);
			// break;
			goto IL_0721;
		}

IL_059c:
		{
			// instance.isPowerOfTwo = reader.Read<System.Boolean>(ES3Type_bool.Instance);
			RenderTexture_t5FE7A5B47EF962A0E8D7BEBA05E9FC87D49A1849 * L_153 = V_0;
			ES3Reader_t2780AF8AA61DA2A817115CEF8612AC0E494D03C9 * L_154 = ___reader0;
			IL2CPP_RUNTIME_CLASS_INIT(ES3Type_bool_t8F309F7B9CC735FF1DEE68081B6E3CAB367745F4_il2cpp_TypeInfo_var);
			ES3Type_t8FBECB7AE75168648B9524E0C2A38DAD4555421D * L_155 = ((ES3Type_bool_t8F309F7B9CC735FF1DEE68081B6E3CAB367745F4_StaticFields*)il2cpp_codegen_static_fields_for(ES3Type_bool_t8F309F7B9CC735FF1DEE68081B6E3CAB367745F4_il2cpp_TypeInfo_var))->get_Instance_12();
			NullCheck((ES3Reader_t2780AF8AA61DA2A817115CEF8612AC0E494D03C9 *)L_154);
			bool L_156;
			L_156 = GenericVirtFuncInvoker1< bool, ES3Type_t8FBECB7AE75168648B9524E0C2A38DAD4555421D * >::Invoke(ES3Reader_Read_TisBoolean_t07D1E3F34E4813023D64F584DFF7B34C9D922F37_mC6D1B158268FF9B97822FF9F5B37FB1723FEDA22_RuntimeMethod_var, (ES3Reader_t2780AF8AA61DA2A817115CEF8612AC0E494D03C9 *)L_154, (ES3Type_t8FBECB7AE75168648B9524E0C2A38DAD4555421D *)L_155);
			NullCheck((RenderTexture_t5FE7A5B47EF962A0E8D7BEBA05E9FC87D49A1849 *)L_153);
			RenderTexture_set_isPowerOfTwo_mA6D34F610DF27C40422DF5815892B45C656F1317((RenderTexture_t5FE7A5B47EF962A0E8D7BEBA05E9FC87D49A1849 *)L_153, (bool)L_156, /*hidden argument*/NULL);
			// break;
			goto IL_0721;
		}

IL_05b2:
		{
			// instance.depth = reader.Read<System.Int32>(ES3Type_int.Instance);
			RenderTexture_t5FE7A5B47EF962A0E8D7BEBA05E9FC87D49A1849 * L_157 = V_0;
			ES3Reader_t2780AF8AA61DA2A817115CEF8612AC0E494D03C9 * L_158 = ___reader0;
			IL2CPP_RUNTIME_CLASS_INIT(ES3Type_int_tF64C15D40AD0CC7C15BCD1CEC3C5C6BF837BD167_il2cpp_TypeInfo_var);
			ES3Type_t8FBECB7AE75168648B9524E0C2A38DAD4555421D * L_159 = ((ES3Type_int_tF64C15D40AD0CC7C15BCD1CEC3C5C6BF837BD167_StaticFields*)il2cpp_codegen_static_fields_for(ES3Type_int_tF64C15D40AD0CC7C15BCD1CEC3C5C6BF837BD167_il2cpp_TypeInfo_var))->get_Instance_12();
			NullCheck((ES3Reader_t2780AF8AA61DA2A817115CEF8612AC0E494D03C9 *)L_158);
			int32_t L_160;
			L_160 = GenericVirtFuncInvoker1< int32_t, ES3Type_t8FBECB7AE75168648B9524E0C2A38DAD4555421D * >::Invoke(ES3Reader_Read_TisInt32_tFDE5F8CD43D10453F6A2E0C77FE48C6CC7009046_m2B74AA6627F5B1D21171D56C42F71DE5A7C1B4A6_RuntimeMethod_var, (ES3Reader_t2780AF8AA61DA2A817115CEF8612AC0E494D03C9 *)L_158, (ES3Type_t8FBECB7AE75168648B9524E0C2A38DAD4555421D *)L_159);
			NullCheck((RenderTexture_t5FE7A5B47EF962A0E8D7BEBA05E9FC87D49A1849 *)L_157);
			RenderTexture_set_depth_mA57CEFEDDB45D0429FAC9532A631839F523944A3((RenderTexture_t5FE7A5B47EF962A0E8D7BEBA05E9FC87D49A1849 *)L_157, (int32_t)L_160, /*hidden argument*/NULL);
			// break;
			goto IL_0721;
		}

IL_05c8:
		{
			// instance.descriptor = reader.Read<UnityEngine.RenderTextureDescriptor>();
			RenderTexture_t5FE7A5B47EF962A0E8D7BEBA05E9FC87D49A1849 * L_161 = V_0;
			ES3Reader_t2780AF8AA61DA2A817115CEF8612AC0E494D03C9 * L_162 = ___reader0;
			NullCheck((ES3Reader_t2780AF8AA61DA2A817115CEF8612AC0E494D03C9 *)L_162);
			RenderTextureDescriptor_t67FF189E1F35AEB5D6C43A2D7103F3A8A8CA0B47  L_163;
			L_163 = GenericVirtFuncInvoker0< RenderTextureDescriptor_t67FF189E1F35AEB5D6C43A2D7103F3A8A8CA0B47  >::Invoke(ES3Reader_Read_TisRenderTextureDescriptor_t67FF189E1F35AEB5D6C43A2D7103F3A8A8CA0B47_m427886ADAAF96C7BA9BD423544128494F96D69E7_RuntimeMethod_var, (ES3Reader_t2780AF8AA61DA2A817115CEF8612AC0E494D03C9 *)L_162);
			NullCheck((RenderTexture_t5FE7A5B47EF962A0E8D7BEBA05E9FC87D49A1849 *)L_161);
			RenderTexture_set_descriptor_m3C8E31AE4644B23719A12345771D1B85EB6E5881((RenderTexture_t5FE7A5B47EF962A0E8D7BEBA05E9FC87D49A1849 *)L_161, (RenderTextureDescriptor_t67FF189E1F35AEB5D6C43A2D7103F3A8A8CA0B47 )L_163, /*hidden argument*/NULL);
			// break;
			goto IL_0721;
		}

IL_05d9:
		{
			// UnityEngine.RenderTexture.masterTextureLimit = reader.Read<System.Int32>(ES3Type_int.Instance);
			ES3Reader_t2780AF8AA61DA2A817115CEF8612AC0E494D03C9 * L_164 = ___reader0;
			IL2CPP_RUNTIME_CLASS_INIT(ES3Type_int_tF64C15D40AD0CC7C15BCD1CEC3C5C6BF837BD167_il2cpp_TypeInfo_var);
			ES3Type_t8FBECB7AE75168648B9524E0C2A38DAD4555421D * L_165 = ((ES3Type_int_tF64C15D40AD0CC7C15BCD1CEC3C5C6BF837BD167_StaticFields*)il2cpp_codegen_static_fields_for(ES3Type_int_tF64C15D40AD0CC7C15BCD1CEC3C5C6BF837BD167_il2cpp_TypeInfo_var))->get_Instance_12();
			NullCheck((ES3Reader_t2780AF8AA61DA2A817115CEF8612AC0E494D03C9 *)L_164);
			int32_t L_166;
			L_166 = GenericVirtFuncInvoker1< int32_t, ES3Type_t8FBECB7AE75168648B9524E0C2A38DAD4555421D * >::Invoke(ES3Reader_Read_TisInt32_tFDE5F8CD43D10453F6A2E0C77FE48C6CC7009046_m2B74AA6627F5B1D21171D56C42F71DE5A7C1B4A6_RuntimeMethod_var, (ES3Reader_t2780AF8AA61DA2A817115CEF8612AC0E494D03C9 *)L_164, (ES3Type_t8FBECB7AE75168648B9524E0C2A38DAD4555421D *)L_165);
			IL2CPP_RUNTIME_CLASS_INIT(Texture_t9FE0218A1EEDF266E8C85879FE123265CACC95AE_il2cpp_TypeInfo_var);
			Texture_set_masterTextureLimit_m94A531A20A54A86AF7B88A56F72709CE556B7DFF((int32_t)L_166, /*hidden argument*/NULL);
			// break;
			goto IL_0721;
		}

IL_05ee:
		{
			// UnityEngine.RenderTexture.anisotropicFiltering = reader.Read<UnityEngine.AnisotropicFiltering>();
			ES3Reader_t2780AF8AA61DA2A817115CEF8612AC0E494D03C9 * L_167 = ___reader0;
			NullCheck((ES3Reader_t2780AF8AA61DA2A817115CEF8612AC0E494D03C9 *)L_167);
			int32_t L_168;
			L_168 = GenericVirtFuncInvoker0< int32_t >::Invoke(ES3Reader_Read_TisAnisotropicFiltering_tAC3D1448B262D5869946CD1CDD2C8DAE3A7A537B_mAF1268AAC3E461D6E0604A19FAF0325873B6EC8A_RuntimeMethod_var, (ES3Reader_t2780AF8AA61DA2A817115CEF8612AC0E494D03C9 *)L_167);
			IL2CPP_RUNTIME_CLASS_INIT(Texture_t9FE0218A1EEDF266E8C85879FE123265CACC95AE_il2cpp_TypeInfo_var);
			Texture_set_anisotropicFiltering_mE2B639BF2681A8A0516C1C343C7E265ED60EAF16((int32_t)L_168, /*hidden argument*/NULL);
			// break;
			goto IL_0721;
		}

IL_05fe:
		{
			// instance.wrapMode = reader.Read<UnityEngine.TextureWrapMode>();
			RenderTexture_t5FE7A5B47EF962A0E8D7BEBA05E9FC87D49A1849 * L_169 = V_0;
			ES3Reader_t2780AF8AA61DA2A817115CEF8612AC0E494D03C9 * L_170 = ___reader0;
			NullCheck((ES3Reader_t2780AF8AA61DA2A817115CEF8612AC0E494D03C9 *)L_170);
			int32_t L_171;
			L_171 = GenericVirtFuncInvoker0< int32_t >::Invoke(ES3Reader_Read_TisTextureWrapMode_t86DDA8206E4AA784A1218D0DE3C5F6826D7549EB_m7926E449CD0B8BD56E5BF145DD0CCFE1C567F107_RuntimeMethod_var, (ES3Reader_t2780AF8AA61DA2A817115CEF8612AC0E494D03C9 *)L_170);
			NullCheck((Texture_t9FE0218A1EEDF266E8C85879FE123265CACC95AE *)L_169);
			Texture_set_wrapMode_m1233D2DF48DC20996F8EE26E866D4BDD2AC8050D((Texture_t9FE0218A1EEDF266E8C85879FE123265CACC95AE *)L_169, (int32_t)L_171, /*hidden argument*/NULL);
			// break;
			goto IL_0721;
		}

IL_060f:
		{
			// instance.wrapModeU = reader.Read<UnityEngine.TextureWrapMode>();
			RenderTexture_t5FE7A5B47EF962A0E8D7BEBA05E9FC87D49A1849 * L_172 = V_0;
			ES3Reader_t2780AF8AA61DA2A817115CEF8612AC0E494D03C9 * L_173 = ___reader0;
			NullCheck((ES3Reader_t2780AF8AA61DA2A817115CEF8612AC0E494D03C9 *)L_173);
			int32_t L_174;
			L_174 = GenericVirtFuncInvoker0< int32_t >::Invoke(ES3Reader_Read_TisTextureWrapMode_t86DDA8206E4AA784A1218D0DE3C5F6826D7549EB_m7926E449CD0B8BD56E5BF145DD0CCFE1C567F107_RuntimeMethod_var, (ES3Reader_t2780AF8AA61DA2A817115CEF8612AC0E494D03C9 *)L_173);
			NullCheck((Texture_t9FE0218A1EEDF266E8C85879FE123265CACC95AE *)L_172);
			Texture_set_wrapModeU_mBD3CBD6880E9E767B91ED9E1B14C725A52D7A66E((Texture_t9FE0218A1EEDF266E8C85879FE123265CACC95AE *)L_172, (int32_t)L_174, /*hidden argument*/NULL);
			// break;
			goto IL_0721;
		}

IL_0620:
		{
			// instance.wrapModeV = reader.Read<UnityEngine.TextureWrapMode>();
			RenderTexture_t5FE7A5B47EF962A0E8D7BEBA05E9FC87D49A1849 * L_175 = V_0;
			ES3Reader_t2780AF8AA61DA2A817115CEF8612AC0E494D03C9 * L_176 = ___reader0;
			NullCheck((ES3Reader_t2780AF8AA61DA2A817115CEF8612AC0E494D03C9 *)L_176);
			int32_t L_177;
			L_177 = GenericVirtFuncInvoker0< int32_t >::Invoke(ES3Reader_Read_TisTextureWrapMode_t86DDA8206E4AA784A1218D0DE3C5F6826D7549EB_m7926E449CD0B8BD56E5BF145DD0CCFE1C567F107_RuntimeMethod_var, (ES3Reader_t2780AF8AA61DA2A817115CEF8612AC0E494D03C9 *)L_176);
			NullCheck((Texture_t9FE0218A1EEDF266E8C85879FE123265CACC95AE *)L_175);
			Texture_set_wrapModeV_mCD51C11B4C90D7508113C744EDC09D04059403E5((Texture_t9FE0218A1EEDF266E8C85879FE123265CACC95AE *)L_175, (int32_t)L_177, /*hidden argument*/NULL);
			// break;
			goto IL_0721;
		}

IL_0631:
		{
			// instance.wrapModeW = reader.Read<UnityEngine.TextureWrapMode>();
			RenderTexture_t5FE7A5B47EF962A0E8D7BEBA05E9FC87D49A1849 * L_178 = V_0;
			ES3Reader_t2780AF8AA61DA2A817115CEF8612AC0E494D03C9 * L_179 = ___reader0;
			NullCheck((ES3Reader_t2780AF8AA61DA2A817115CEF8612AC0E494D03C9 *)L_179);
			int32_t L_180;
			L_180 = GenericVirtFuncInvoker0< int32_t >::Invoke(ES3Reader_Read_TisTextureWrapMode_t86DDA8206E4AA784A1218D0DE3C5F6826D7549EB_m7926E449CD0B8BD56E5BF145DD0CCFE1C567F107_RuntimeMethod_var, (ES3Reader_t2780AF8AA61DA2A817115CEF8612AC0E494D03C9 *)L_179);
			NullCheck((Texture_t9FE0218A1EEDF266E8C85879FE123265CACC95AE *)L_178);
			Texture_set_wrapModeW_m72C3239EA12A51D5031BD2A66C5E7B178EE9F65B((Texture_t9FE0218A1EEDF266E8C85879FE123265CACC95AE *)L_178, (int32_t)L_180, /*hidden argument*/NULL);
			// break;
			goto IL_0721;
		}

IL_0642:
		{
			// instance.filterMode = reader.Read<UnityEngine.FilterMode>();
			RenderTexture_t5FE7A5B47EF962A0E8D7BEBA05E9FC87D49A1849 * L_181 = V_0;
			ES3Reader_t2780AF8AA61DA2A817115CEF8612AC0E494D03C9 * L_182 = ___reader0;
			NullCheck((ES3Reader_t2780AF8AA61DA2A817115CEF8612AC0E494D03C9 *)L_182);
			int32_t L_183;
			L_183 = GenericVirtFuncInvoker0< int32_t >::Invoke(ES3Reader_Read_TisFilterMode_tE90A08FD96A142C761463D65E524BCDBFEEE3D19_m9819C2A442797B4060B0D9A80CFA96CFD6102839_RuntimeMethod_var, (ES3Reader_t2780AF8AA61DA2A817115CEF8612AC0E494D03C9 *)L_182);
			NullCheck((Texture_t9FE0218A1EEDF266E8C85879FE123265CACC95AE *)L_181);
			Texture_set_filterMode_m045141DB0FEFE496885D45F5F23B15BC0E77C8D0((Texture_t9FE0218A1EEDF266E8C85879FE123265CACC95AE *)L_181, (int32_t)L_183, /*hidden argument*/NULL);
			// break;
			goto IL_0721;
		}

IL_0653:
		{
			// instance.anisoLevel = reader.Read<System.Int32>(ES3Type_int.Instance);
			RenderTexture_t5FE7A5B47EF962A0E8D7BEBA05E9FC87D49A1849 * L_184 = V_0;
			ES3Reader_t2780AF8AA61DA2A817115CEF8612AC0E494D03C9 * L_185 = ___reader0;
			IL2CPP_RUNTIME_CLASS_INIT(ES3Type_int_tF64C15D40AD0CC7C15BCD1CEC3C5C6BF837BD167_il2cpp_TypeInfo_var);
			ES3Type_t8FBECB7AE75168648B9524E0C2A38DAD4555421D * L_186 = ((ES3Type_int_tF64C15D40AD0CC7C15BCD1CEC3C5C6BF837BD167_StaticFields*)il2cpp_codegen_static_fields_for(ES3Type_int_tF64C15D40AD0CC7C15BCD1CEC3C5C6BF837BD167_il2cpp_TypeInfo_var))->get_Instance_12();
			NullCheck((ES3Reader_t2780AF8AA61DA2A817115CEF8612AC0E494D03C9 *)L_185);
			int32_t L_187;
			L_187 = GenericVirtFuncInvoker1< int32_t, ES3Type_t8FBECB7AE75168648B9524E0C2A38DAD4555421D * >::Invoke(ES3Reader_Read_TisInt32_tFDE5F8CD43D10453F6A2E0C77FE48C6CC7009046_m2B74AA6627F5B1D21171D56C42F71DE5A7C1B4A6_RuntimeMethod_var, (ES3Reader_t2780AF8AA61DA2A817115CEF8612AC0E494D03C9 *)L_185, (ES3Type_t8FBECB7AE75168648B9524E0C2A38DAD4555421D *)L_186);
			NullCheck((Texture_t9FE0218A1EEDF266E8C85879FE123265CACC95AE *)L_184);
			Texture_set_anisoLevel_mE51360F6CD0562FD6355F8C0509B70A454CB33BE((Texture_t9FE0218A1EEDF266E8C85879FE123265CACC95AE *)L_184, (int32_t)L_187, /*hidden argument*/NULL);
			// break;
			goto IL_0721;
		}

IL_0669:
		{
			// instance.mipMapBias = reader.Read<System.Single>(ES3Type_float.Instance);
			RenderTexture_t5FE7A5B47EF962A0E8D7BEBA05E9FC87D49A1849 * L_188 = V_0;
			ES3Reader_t2780AF8AA61DA2A817115CEF8612AC0E494D03C9 * L_189 = ___reader0;
			IL2CPP_RUNTIME_CLASS_INIT(ES3Type_float_tF86B773C86731BD9AD79448B860BBB178FE77644_il2cpp_TypeInfo_var);
			ES3Type_t8FBECB7AE75168648B9524E0C2A38DAD4555421D * L_190 = ((ES3Type_float_tF86B773C86731BD9AD79448B860BBB178FE77644_StaticFields*)il2cpp_codegen_static_fields_for(ES3Type_float_tF86B773C86731BD9AD79448B860BBB178FE77644_il2cpp_TypeInfo_var))->get_Instance_12();
			NullCheck((ES3Reader_t2780AF8AA61DA2A817115CEF8612AC0E494D03C9 *)L_189);
			float L_191;
			L_191 = GenericVirtFuncInvoker1< float, ES3Type_t8FBECB7AE75168648B9524E0C2A38DAD4555421D * >::Invoke(ES3Reader_Read_TisSingle_tE07797BA3C98D4CA9B5A19413C19A76688AB899E_m4A0416374498BDA042B8EB21E49B72326D6CE5F4_RuntimeMethod_var, (ES3Reader_t2780AF8AA61DA2A817115CEF8612AC0E494D03C9 *)L_189, (ES3Type_t8FBECB7AE75168648B9524E0C2A38DAD4555421D *)L_190);
			NullCheck((Texture_t9FE0218A1EEDF266E8C85879FE123265CACC95AE *)L_188);
			Texture_set_mipMapBias_m5057ADA9DBA8E8E30EC15EA5BABFA0734CE2821C((Texture_t9FE0218A1EEDF266E8C85879FE123265CACC95AE *)L_188, (float)L_191, /*hidden argument*/NULL);
			// break;
			goto IL_0721;
		}

IL_067f:
		{
			// instance.name = reader.Read<System.String>(ES3Type_string.Instance);
			RenderTexture_t5FE7A5B47EF962A0E8D7BEBA05E9FC87D49A1849 * L_192 = V_0;
			ES3Reader_t2780AF8AA61DA2A817115CEF8612AC0E494D03C9 * L_193 = ___reader0;
			IL2CPP_RUNTIME_CLASS_INIT(ES3Type_string_tC47BFBE3CC816F3C70B51558C68F0C6470C5EFE5_il2cpp_TypeInfo_var);
			ES3Type_t8FBECB7AE75168648B9524E0C2A38DAD4555421D * L_194 = ((ES3Type_string_tC47BFBE3CC816F3C70B51558C68F0C6470C5EFE5_StaticFields*)il2cpp_codegen_static_fields_for(ES3Type_string_tC47BFBE3CC816F3C70B51558C68F0C6470C5EFE5_il2cpp_TypeInfo_var))->get_Instance_12();
			NullCheck((ES3Reader_t2780AF8AA61DA2A817115CEF8612AC0E494D03C9 *)L_193);
			String_t* L_195;
			L_195 = GenericVirtFuncInvoker1< String_t*, ES3Type_t8FBECB7AE75168648B9524E0C2A38DAD4555421D * >::Invoke(ES3Reader_Read_TisString_t_m883861F3B58239392073ABF39876826EEB87DF9C_RuntimeMethod_var, (ES3Reader_t2780AF8AA61DA2A817115CEF8612AC0E494D03C9 *)L_193, (ES3Type_t8FBECB7AE75168648B9524E0C2A38DAD4555421D *)L_194);
			NullCheck((Object_tF2F3778131EFF286AF62B7B013A170F95A91571A *)L_192);
			Object_set_name_m87C4006618ADB325ABE5439DF159E10DD8DD0781((Object_tF2F3778131EFF286AF62B7B013A170F95A91571A *)L_192, (String_t*)L_195, /*hidden argument*/NULL);
			// break;
			goto IL_0721;
		}

IL_0695:
		{
			// instance.vrUsage = reader.Read<UnityEngine.VRTextureUsage>();
			RenderTexture_t5FE7A5B47EF962A0E8D7BEBA05E9FC87D49A1849 * L_196 = V_0;
			ES3Reader_t2780AF8AA61DA2A817115CEF8612AC0E494D03C9 * L_197 = ___reader0;
			NullCheck((ES3Reader_t2780AF8AA61DA2A817115CEF8612AC0E494D03C9 *)L_197);
			int32_t L_198;
			L_198 = GenericVirtFuncInvoker0< int32_t >::Invoke(ES3Reader_Read_TisVRTextureUsage_t3C09DF3DD90B5620BC0AB6F8078DFEF4E607F645_m7DE3966E4815BB13132866CB005EEE5B90FF51C2_RuntimeMethod_var, (ES3Reader_t2780AF8AA61DA2A817115CEF8612AC0E494D03C9 *)L_197);
			NullCheck((RenderTexture_t5FE7A5B47EF962A0E8D7BEBA05E9FC87D49A1849 *)L_196);
			RenderTexture_set_vrUsage_m9AF7F60442E3B933FDF274D801EA074D1A5ECB71((RenderTexture_t5FE7A5B47EF962A0E8D7BEBA05E9FC87D49A1849 *)L_196, (int32_t)L_198, /*hidden argument*/NULL);
			// break;
			goto IL_0721;
		}

IL_06a3:
		{
			// instance.graphicsFormat = reader.Read<UnityEngine.Experimental.Rendering.GraphicsFormat>();
			RenderTexture_t5FE7A5B47EF962A0E8D7BEBA05E9FC87D49A1849 * L_199 = V_0;
			ES3Reader_t2780AF8AA61DA2A817115CEF8612AC0E494D03C9 * L_200 = ___reader0;
			NullCheck((ES3Reader_t2780AF8AA61DA2A817115CEF8612AC0E494D03C9 *)L_200);
			int32_t L_201;
			L_201 = GenericVirtFuncInvoker0< int32_t >::Invoke(ES3Reader_Read_TisGraphicsFormat_t07A3C024BC77B843C53A369D6FC02ABD27D2AB1D_mCBD36004B10F649C93215AB4717F6F0D7118BF7D_RuntimeMethod_var, (ES3Reader_t2780AF8AA61DA2A817115CEF8612AC0E494D03C9 *)L_200);
			NullCheck((RenderTexture_t5FE7A5B47EF962A0E8D7BEBA05E9FC87D49A1849 *)L_199);
			RenderTexture_set_graphicsFormat_mA378AAD8BD876EE96637FF0A80A2AFEA4D852FAB((RenderTexture_t5FE7A5B47EF962A0E8D7BEBA05E9FC87D49A1849 *)L_199, (int32_t)L_201, /*hidden argument*/NULL);
			// break;
			goto IL_0721;
		}

IL_06b1:
		{
			// instance.stencilFormat = reader.Read<UnityEngine.Experimental.Rendering.GraphicsFormat>();
			RenderTexture_t5FE7A5B47EF962A0E8D7BEBA05E9FC87D49A1849 * L_202 = V_0;
			ES3Reader_t2780AF8AA61DA2A817115CEF8612AC0E494D03C9 * L_203 = ___reader0;
			NullCheck((ES3Reader_t2780AF8AA61DA2A817115CEF8612AC0E494D03C9 *)L_203);
			int32_t L_204;
			L_204 = GenericVirtFuncInvoker0< int32_t >::Invoke(ES3Reader_Read_TisGraphicsFormat_t07A3C024BC77B843C53A369D6FC02ABD27D2AB1D_mCBD36004B10F649C93215AB4717F6F0D7118BF7D_RuntimeMethod_var, (ES3Reader_t2780AF8AA61DA2A817115CEF8612AC0E494D03C9 *)L_203);
			NullCheck((RenderTexture_t5FE7A5B47EF962A0E8D7BEBA05E9FC87D49A1849 *)L_202);
			RenderTexture_set_stencilFormat_m7C6E21FCDB7E786D403CFC9775105B050EFF19C7((RenderTexture_t5FE7A5B47EF962A0E8D7BEBA05E9FC87D49A1849 *)L_202, (int32_t)L_204, /*hidden argument*/NULL);
			// break;
			goto IL_0721;
		}

IL_06bf:
		{
			// instance.bindTextureMS = reader.Read<System.Boolean>(ES3Type_bool.Instance);
			RenderTexture_t5FE7A5B47EF962A0E8D7BEBA05E9FC87D49A1849 * L_205 = V_0;
			ES3Reader_t2780AF8AA61DA2A817115CEF8612AC0E494D03C9 * L_206 = ___reader0;
			IL2CPP_RUNTIME_CLASS_INIT(ES3Type_bool_t8F309F7B9CC735FF1DEE68081B6E3CAB367745F4_il2cpp_TypeInfo_var);
			ES3Type_t8FBECB7AE75168648B9524E0C2A38DAD4555421D * L_207 = ((ES3Type_bool_t8F309F7B9CC735FF1DEE68081B6E3CAB367745F4_StaticFields*)il2cpp_codegen_static_fields_for(ES3Type_bool_t8F309F7B9CC735FF1DEE68081B6E3CAB367745F4_il2cpp_TypeInfo_var))->get_Instance_12();
			NullCheck((ES3Reader_t2780AF8AA61DA2A817115CEF8612AC0E494D03C9 *)L_206);
			bool L_208;
			L_208 = GenericVirtFuncInvoker1< bool, ES3Type_t8FBECB7AE75168648B9524E0C2A38DAD4555421D * >::Invoke(ES3Reader_Read_TisBoolean_t07D1E3F34E4813023D64F584DFF7B34C9D922F37_mC6D1B158268FF9B97822FF9F5B37FB1723FEDA22_RuntimeMethod_var, (ES3Reader_t2780AF8AA61DA2A817115CEF8612AC0E494D03C9 *)L_206, (ES3Type_t8FBECB7AE75168648B9524E0C2A38DAD4555421D *)L_207);
			NullCheck((RenderTexture_t5FE7A5B47EF962A0E8D7BEBA05E9FC87D49A1849 *)L_205);
			RenderTexture_set_bindTextureMS_m6C26F6AB2DE8FE81BFCA60C936AA08EA7F1A7177((RenderTexture_t5FE7A5B47EF962A0E8D7BEBA05E9FC87D49A1849 *)L_205, (bool)L_208, /*hidden argument*/NULL);
			// break;
			goto IL_0721;
		}

IL_06d2:
		{
			// instance.useDynamicScale = reader.Read<System.Boolean>(ES3Type_bool.Instance);
			RenderTexture_t5FE7A5B47EF962A0E8D7BEBA05E9FC87D49A1849 * L_209 = V_0;
			ES3Reader_t2780AF8AA61DA2A817115CEF8612AC0E494D03C9 * L_210 = ___reader0;
			IL2CPP_RUNTIME_CLASS_INIT(ES3Type_bool_t8F309F7B9CC735FF1DEE68081B6E3CAB367745F4_il2cpp_TypeInfo_var);
			ES3Type_t8FBECB7AE75168648B9524E0C2A38DAD4555421D * L_211 = ((ES3Type_bool_t8F309F7B9CC735FF1DEE68081B6E3CAB367745F4_StaticFields*)il2cpp_codegen_static_fields_for(ES3Type_bool_t8F309F7B9CC735FF1DEE68081B6E3CAB367745F4_il2cpp_TypeInfo_var))->get_Instance_12();
			NullCheck((ES3Reader_t2780AF8AA61DA2A817115CEF8612AC0E494D03C9 *)L_210);
			bool L_212;
			L_212 = GenericVirtFuncInvoker1< bool, ES3Type_t8FBECB7AE75168648B9524E0C2A38DAD4555421D * >::Invoke(ES3Reader_Read_TisBoolean_t07D1E3F34E4813023D64F584DFF7B34C9D922F37_mC6D1B158268FF9B97822FF9F5B37FB1723FEDA22_RuntimeMethod_var, (ES3Reader_t2780AF8AA61DA2A817115CEF8612AC0E494D03C9 *)L_210, (ES3Type_t8FBECB7AE75168648B9524E0C2A38DAD4555421D *)L_211);
			NullCheck((RenderTexture_t5FE7A5B47EF962A0E8D7BEBA05E9FC87D49A1849 *)L_209);
			RenderTexture_set_useDynamicScale_m8F96571C7EDBEFAB9278E04A3F3EB67067A5AE29((RenderTexture_t5FE7A5B47EF962A0E8D7BEBA05E9FC87D49A1849 *)L_209, (bool)L_212, /*hidden argument*/NULL);
			// break;
			goto IL_0721;
		}

IL_06e5:
		{
			// UnityEngine.RenderTexture.streamingTextureForceLoadAll = reader.Read<System.Boolean>(ES3Type_bool.Instance);
			ES3Reader_t2780AF8AA61DA2A817115CEF8612AC0E494D03C9 * L_213 = ___reader0;
			IL2CPP_RUNTIME_CLASS_INIT(ES3Type_bool_t8F309F7B9CC735FF1DEE68081B6E3CAB367745F4_il2cpp_TypeInfo_var);
			ES3Type_t8FBECB7AE75168648B9524E0C2A38DAD4555421D * L_214 = ((ES3Type_bool_t8F309F7B9CC735FF1DEE68081B6E3CAB367745F4_StaticFields*)il2cpp_codegen_static_fields_for(ES3Type_bool_t8F309F7B9CC735FF1DEE68081B6E3CAB367745F4_il2cpp_TypeInfo_var))->get_Instance_12();
			NullCheck((ES3Reader_t2780AF8AA61DA2A817115CEF8612AC0E494D03C9 *)L_213);
			bool L_215;
			L_215 = GenericVirtFuncInvoker1< bool, ES3Type_t8FBECB7AE75168648B9524E0C2A38DAD4555421D * >::Invoke(ES3Reader_Read_TisBoolean_t07D1E3F34E4813023D64F584DFF7B34C9D922F37_mC6D1B158268FF9B97822FF9F5B37FB1723FEDA22_RuntimeMethod_var, (ES3Reader_t2780AF8AA61DA2A817115CEF8612AC0E494D03C9 *)L_213, (ES3Type_t8FBECB7AE75168648B9524E0C2A38DAD4555421D *)L_214);
			IL2CPP_RUNTIME_CLASS_INIT(Texture_t9FE0218A1EEDF266E8C85879FE123265CACC95AE_il2cpp_TypeInfo_var);
			Texture_set_streamingTextureForceLoadAll_m325117C0830BB9B4316CF41CEE045759FC52B7A3((bool)L_215, /*hidden argument*/NULL);
			// break;
			goto IL_0721;
		}

IL_06f7:
		{
			// UnityEngine.RenderTexture.streamingTextureDiscardUnusedMips = reader.Read<System.Boolean>(ES3Type_bool.Instance);
			ES3Reader_t2780AF8AA61DA2A817115CEF8612AC0E494D03C9 * L_216 = ___reader0;
			IL2CPP_RUNTIME_CLASS_INIT(ES3Type_bool_t8F309F7B9CC735FF1DEE68081B6E3CAB367745F4_il2cpp_TypeInfo_var);
			ES3Type_t8FBECB7AE75168648B9524E0C2A38DAD4555421D * L_217 = ((ES3Type_bool_t8F309F7B9CC735FF1DEE68081B6E3CAB367745F4_StaticFields*)il2cpp_codegen_static_fields_for(ES3Type_bool_t8F309F7B9CC735FF1DEE68081B6E3CAB367745F4_il2cpp_TypeInfo_var))->get_Instance_12();
			NullCheck((ES3Reader_t2780AF8AA61DA2A817115CEF8612AC0E494D03C9 *)L_216);
			bool L_218;
			L_218 = GenericVirtFuncInvoker1< bool, ES3Type_t8FBECB7AE75168648B9524E0C2A38DAD4555421D * >::Invoke(ES3Reader_Read_TisBoolean_t07D1E3F34E4813023D64F584DFF7B34C9D922F37_mC6D1B158268FF9B97822FF9F5B37FB1723FEDA22_RuntimeMethod_var, (ES3Reader_t2780AF8AA61DA2A817115CEF8612AC0E494D03C9 *)L_216, (ES3Type_t8FBECB7AE75168648B9524E0C2A38DAD4555421D *)L_217);
			IL2CPP_RUNTIME_CLASS_INIT(Texture_t9FE0218A1EEDF266E8C85879FE123265CACC95AE_il2cpp_TypeInfo_var);
			Texture_set_streamingTextureDiscardUnusedMips_mE184CE016A8E0319B437D34E0DB61962CE17F5DC((bool)L_218, /*hidden argument*/NULL);
			// break;
			goto IL_0721;
		}

IL_0709:
		{
			// UnityEngine.RenderTexture.allowThreadedTextureCreation = reader.Read<System.Boolean>(ES3Type_bool.Instance);
			ES3Reader_t2780AF8AA61DA2A817115CEF8612AC0E494D03C9 * L_219 = ___reader0;
			IL2CPP_RUNTIME_CLASS_INIT(ES3Type_bool_t8F309F7B9CC735FF1DEE68081B6E3CAB367745F4_il2cpp_TypeInfo_var);
			ES3Type_t8FBECB7AE75168648B9524E0C2A38DAD4555421D * L_220 = ((ES3Type_bool_t8F309F7B9CC735FF1DEE68081B6E3CAB367745F4_StaticFields*)il2cpp_codegen_static_fields_for(ES3Type_bool_t8F309F7B9CC735FF1DEE68081B6E3CAB367745F4_il2cpp_TypeInfo_var))->get_Instance_12();
			NullCheck((ES3Reader_t2780AF8AA61DA2A817115CEF8612AC0E494D03C9 *)L_219);
			bool L_221;
			L_221 = GenericVirtFuncInvoker1< bool, ES3Type_t8FBECB7AE75168648B9524E0C2A38DAD4555421D * >::Invoke(ES3Reader_Read_TisBoolean_t07D1E3F34E4813023D64F584DFF7B34C9D922F37_mC6D1B158268FF9B97822FF9F5B37FB1723FEDA22_RuntimeMethod_var, (ES3Reader_t2780AF8AA61DA2A817115CEF8612AC0E494D03C9 *)L_219, (ES3Type_t8FBECB7AE75168648B9524E0C2A38DAD4555421D *)L_220);
			IL2CPP_RUNTIME_CLASS_INIT(Texture_t9FE0218A1EEDF266E8C85879FE123265CACC95AE_il2cpp_TypeInfo_var);
			Texture_set_allowThreadedTextureCreation_m84D29394912B9CE876023963426256CBEB15A52E((bool)L_221, /*hidden argument*/NULL);
			// break;
			goto IL_0721;
		}

IL_071b:
		{
			// reader.Skip();
			ES3Reader_t2780AF8AA61DA2A817115CEF8612AC0E494D03C9 * L_222 = ___reader0;
			NullCheck((ES3Reader_t2780AF8AA61DA2A817115CEF8612AC0E494D03C9 *)L_222);
			VirtActionInvoker0::Invoke(41 /* System.Void ES3Reader::Skip() */, (ES3Reader_t2780AF8AA61DA2A817115CEF8612AC0E494D03C9 *)L_222);
		}

IL_0721:
		{
			// foreach (string propertyName in reader.Properties)
			RuntimeObject* L_223 = V_1;
			NullCheck((RuntimeObject*)L_223);
			bool L_224;
			L_224 = InterfaceFuncInvoker0< bool >::Invoke(0 /* System.Boolean System.Collections.IEnumerator::MoveNext() */, IEnumerator_t5956F3AFB7ECF1117E3BC5890E7FC7B7F7A04105_il2cpp_TypeInfo_var, (RuntimeObject*)L_223);
			if (L_224)
			{
				goto IL_0018;
			}
		}

IL_072c:
		{
			IL2CPP_LEAVE(0x742, FINALLY_072e);
		}
	} // end try (depth: 1)
	catch(Il2CppExceptionWrapper& e)
	{
		__last_unhandled_exception = (Exception_t *)e.ex;
		goto FINALLY_072e;
	}

FINALLY_072e:
	{ // begin finally (depth: 1)
		{
			RuntimeObject* L_225 = V_1;
			V_4 = (RuntimeObject*)((RuntimeObject*)IsInst((RuntimeObject*)L_225, IDisposable_t099785737FC6A1E3699919A94109383715A8D807_il2cpp_TypeInfo_var));
			RuntimeObject* L_226 = V_4;
			if (!L_226)
			{
				goto IL_0741;
			}
		}

IL_073a:
		{
			RuntimeObject* L_227 = V_4;
			NullCheck((RuntimeObject*)L_227);
			InterfaceActionInvoker0::Invoke(0 /* System.Void System.IDisposable::Dispose() */, IDisposable_t099785737FC6A1E3699919A94109383715A8D807_il2cpp_TypeInfo_var, (RuntimeObject*)L_227);
		}

IL_0741:
		{
			IL2CPP_END_FINALLY(1838)
		}
	} // end finally (depth: 1)
	IL2CPP_CLEANUP(1838)
	{
		IL2CPP_RETHROW_IF_UNHANDLED(Exception_t *)
		IL2CPP_JUMP_TBL(0x742, IL_0742)
	}

IL_0742:
	{
		// }
		return;
	}
}
// System.Void ES3Types.ES3Type_RenderTexture::ReadObject<UnityEngine.ParticleSystem/LightsModule>(ES3Reader,System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ES3Type_RenderTexture_ReadObject_TisLightsModule_t74903A9B68956FEDBDCC81420474A4B9AE399705_m419D266CA9DF95A6CBC78CA564D15176E88CB028_gshared (ES3Type_RenderTexture_t7B14573C56809AFDC0A1C481D6B61E2146DEF194 * __this, ES3Reader_t2780AF8AA61DA2A817115CEF8612AC0E494D03C9 * ___reader0, RuntimeObject * ___obj1, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ES3Reader_Read_TisAnisotropicFiltering_tAC3D1448B262D5869946CD1CDD2C8DAE3A7A537B_mAF1268AAC3E461D6E0604A19FAF0325873B6EC8A_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ES3Reader_Read_TisBoolean_t07D1E3F34E4813023D64F584DFF7B34C9D922F37_mC6D1B158268FF9B97822FF9F5B37FB1723FEDA22_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ES3Reader_Read_TisFilterMode_tE90A08FD96A142C761463D65E524BCDBFEEE3D19_m9819C2A442797B4060B0D9A80CFA96CFD6102839_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ES3Reader_Read_TisGraphicsFormat_t07A3C024BC77B843C53A369D6FC02ABD27D2AB1D_mCBD36004B10F649C93215AB4717F6F0D7118BF7D_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ES3Reader_Read_TisInt32_tFDE5F8CD43D10453F6A2E0C77FE48C6CC7009046_m2B74AA6627F5B1D21171D56C42F71DE5A7C1B4A6_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ES3Reader_Read_TisRenderTextureDescriptor_t67FF189E1F35AEB5D6C43A2D7103F3A8A8CA0B47_m427886ADAAF96C7BA9BD423544128494F96D69E7_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ES3Reader_Read_TisRenderTextureFormat_t8371287102ED67772EF78229CF4AB9D38C2CD626_mE6358E03407F5C15B58B292C79D4770DE3FAC95A_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ES3Reader_Read_TisRenderTextureMemoryless_t37547D68C2186D2650440F719302CDA4A3BB7F67_m3A980BA15AADBBB8393C3BC88CE17EEDDC89B027_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ES3Reader_Read_TisSingle_tE07797BA3C98D4CA9B5A19413C19A76688AB899E_m4A0416374498BDA042B8EB21E49B72326D6CE5F4_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ES3Reader_Read_TisString_t_m883861F3B58239392073ABF39876826EEB87DF9C_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ES3Reader_Read_TisTextureDimension_tADCCB7C1D30E4D1182651BA9094B4DE61B63EACC_m19EAA3B93D10636C17A62A3D8437349223CFD988_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ES3Reader_Read_TisTextureWrapMode_t86DDA8206E4AA784A1218D0DE3C5F6826D7549EB_m7926E449CD0B8BD56E5BF145DD0CCFE1C567F107_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ES3Reader_Read_TisVRTextureUsage_t3C09DF3DD90B5620BC0AB6F8078DFEF4E607F645_m7DE3966E4815BB13132866CB005EEE5B90FF51C2_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ES3Type_bool_t8F309F7B9CC735FF1DEE68081B6E3CAB367745F4_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ES3Type_float_tF86B773C86731BD9AD79448B860BBB178FE77644_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ES3Type_int_tF64C15D40AD0CC7C15BCD1CEC3C5C6BF837BD167_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ES3Type_string_tC47BFBE3CC816F3C70B51558C68F0C6470C5EFE5_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IDisposable_t099785737FC6A1E3699919A94109383715A8D807_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IEnumerator_t5956F3AFB7ECF1117E3BC5890E7FC7B7F7A04105_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&RenderTexture_t5FE7A5B47EF962A0E8D7BEBA05E9FC87D49A1849_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&String_t_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Texture_t9FE0218A1EEDF266E8C85879FE123265CACC95AE_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral201D9D00BB60DC2318D21CF9902290EFE255D5DC);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral2ADFC3FFF7C52D554F0435A348A5345C9FCD7FF8);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral2E201D1972661439FD3C8523C55723E7E9BCC7DA);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral2EE7B6B0E37E14930BBA497867139BFD0617CE04);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral3A04F86957625CB28FA670EECF997E6BAD45BBE7);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral3BC15E3C2F40466B2DC85C4776499817B8306CBB);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral3F1522C8DB7943F2AE3AA1563D3AC25D9C8B93D1);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral53D3413057D7E52F44470A335C590748745352B1);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral647E0FB2B5E859CC4BD7C73623B82C8EFABA2563);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral65B008F04EC40A696263EF679CF274BD10999A5D);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral71C5F9C3E2F3C81C5BBC7FD313F6938654E61138);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral75C9716749EA210206E3467390B7A11F3F33DDFA);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral7606720A7AEF5939309A8E4FCB8274252FA3D7BF);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral7A4A6E2A7090298F814A9D44C89F8634249BEF07);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral7FF61C3A55BCA1287974D8740F945250B3F0F084);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral83AC9669A9053DD15B9F2E82D2CE2369EFE131BA);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral95F57476C0AA778364404E7CCCD7499BF1BF3757);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral9AB5ADF8A8A53110245466F7C226F7935F5FE95F);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralB49A1DF483856544CEC6018E8C944DB6E16A8D57);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralBA9362732D25B1644B7D8DEC5DF6F036A4A66DE5);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralC959D767B7F0BD38D9DA8A64A4750C3A0972E2A0);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralCD44AC57FFE6CAC7824F4CAA223F1BB8B4CB0D73);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralCE18B047107AA23D1AA9B2ED32D316148E02655F);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralEA8FBF382D8AC9EDB8FFC14A350641B987F5C631);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralEBF5FE0CBF3EEA67902EEA700B7216E3DB0D8E84);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralECAEEB225F8689DE45DEB4FA21CE34E1960B1B50);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralF23E83744C9D6FC70D71B723AAED8006D6780BCB);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralF2AF7DD0BFF41B7B35037F018DAABE7DCF357A7B);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralF38CFAE6A91D072D4453C29FF44D81D459A582F1);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralF3FA58C10BBB9830102605E24AF89DC619908DFA);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralF9EE582B77C320A1F6A3DF72205857C4248BAC79);
		s_Il2CppMethodInitialized = true;
	}
	RenderTexture_t5FE7A5B47EF962A0E8D7BEBA05E9FC87D49A1849 * V_0 = NULL;
	RuntimeObject* V_1 = NULL;
	String_t* V_2 = NULL;
	uint32_t V_3 = 0;
	RuntimeObject* V_4 = NULL;
	Exception_t * __last_unhandled_exception = 0;
	il2cpp::utils::ExceptionSupportStack<int32_t, 1> __leave_targets;
	{
		// var instance = (UnityEngine.RenderTexture)obj;
		RuntimeObject * L_0 = ___obj1;
		V_0 = (RenderTexture_t5FE7A5B47EF962A0E8D7BEBA05E9FC87D49A1849 *)((RenderTexture_t5FE7A5B47EF962A0E8D7BEBA05E9FC87D49A1849 *)Castclass((RuntimeObject*)L_0, RenderTexture_t5FE7A5B47EF962A0E8D7BEBA05E9FC87D49A1849_il2cpp_TypeInfo_var));
		// foreach (string propertyName in reader.Properties)
		ES3Reader_t2780AF8AA61DA2A817115CEF8612AC0E494D03C9 * L_1 = ___reader0;
		NullCheck((ES3Reader_t2780AF8AA61DA2A817115CEF8612AC0E494D03C9 *)L_1);
		ES3ReaderPropertyEnumerator_tFC854F4BE72BFA234682EB1909D92457534A979D * L_2;
		L_2 = VirtFuncInvoker0< ES3ReaderPropertyEnumerator_tFC854F4BE72BFA234682EB1909D92457534A979D * >::Invoke(39 /* ES3Reader/ES3ReaderPropertyEnumerator ES3Reader::get_Properties() */, (ES3Reader_t2780AF8AA61DA2A817115CEF8612AC0E494D03C9 *)L_1);
		NullCheck((ES3ReaderPropertyEnumerator_tFC854F4BE72BFA234682EB1909D92457534A979D *)L_2);
		RuntimeObject* L_3;
		L_3 = ES3ReaderPropertyEnumerator_GetEnumerator_m6C61168655E3736E7847E5CB1CD9BC6B48442FD4((ES3ReaderPropertyEnumerator_tFC854F4BE72BFA234682EB1909D92457534A979D *)L_2, /*hidden argument*/NULL);
		V_1 = (RuntimeObject*)L_3;
	}

IL_0013:
	try
	{ // begin try (depth: 1)
		{
			goto IL_0721;
		}

IL_0018:
		{
			// foreach (string propertyName in reader.Properties)
			RuntimeObject* L_4 = V_1;
			NullCheck((RuntimeObject*)L_4);
			RuntimeObject * L_5;
			L_5 = InterfaceFuncInvoker0< RuntimeObject * >::Invoke(1 /* System.Object System.Collections.IEnumerator::get_Current() */, IEnumerator_t5956F3AFB7ECF1117E3BC5890E7FC7B7F7A04105_il2cpp_TypeInfo_var, (RuntimeObject*)L_4);
			V_2 = (String_t*)((String_t*)Castclass((RuntimeObject*)L_5, String_t_il2cpp_TypeInfo_var));
			String_t* L_6 = V_2;
			if (!L_6)
			{
				goto IL_071b;
			}
		}

IL_002a:
		{
			String_t* L_7 = V_2;
			uint32_t L_8;
			L_8 = U3CPrivateImplementationDetailsU3E_ComputeStringHash_m3ADC1F612F9EE3DD518E6F0023A0DE0EE2B120A7((String_t*)L_7, /*hidden argument*/NULL);
			V_3 = (uint32_t)L_8;
			uint32_t L_9 = V_3;
			if ((!(((uint32_t)L_9) <= ((uint32_t)((int32_t)1508062721)))))
			{
				goto IL_0134;
			}
		}

IL_003c:
		{
			uint32_t L_10 = V_3;
			if ((!(((uint32_t)L_10) <= ((uint32_t)((int32_t)698754697)))))
			{
				goto IL_00b0;
			}
		}

IL_0044:
		{
			uint32_t L_11 = V_3;
			if ((!(((uint32_t)L_11) <= ((uint32_t)((int32_t)472844700)))))
			{
				goto IL_0072;
			}
		}

IL_004c:
		{
			uint32_t L_12 = V_3;
			if ((((int32_t)L_12) == ((int32_t)((int32_t)87590155))))
			{
				goto IL_043c;
			}
		}

IL_0057:
		{
			uint32_t L_13 = V_3;
			if ((((int32_t)L_13) == ((int32_t)((int32_t)301255720))))
			{
				goto IL_02d7;
			}
		}

IL_0062:
		{
			uint32_t L_14 = V_3;
			if ((((int32_t)L_14) == ((int32_t)((int32_t)472844700))))
			{
				goto IL_0283;
			}
		}

IL_006d:
		{
			goto IL_071b;
		}

IL_0072:
		{
			uint32_t L_15 = V_3;
			if ((!(((uint32_t)L_15) <= ((uint32_t)((int32_t)549791583)))))
			{
				goto IL_0095;
			}
		}

IL_007a:
		{
			uint32_t L_16 = V_3;
			if ((((int32_t)L_16) == ((int32_t)((int32_t)533013964))))
			{
				goto IL_03a9;
			}
		}

IL_0085:
		{
			uint32_t L_17 = V_3;
			if ((((int32_t)L_17) == ((int32_t)((int32_t)549791583))))
			{
				goto IL_03be;
			}
		}

IL_0090:
		{
			goto IL_071b;
		}

IL_0095:
		{
			uint32_t L_18 = V_3;
			if ((((int32_t)L_18) == ((int32_t)((int32_t)583346821))))
			{
				goto IL_0394;
			}
		}

IL_00a0:
		{
			uint32_t L_19 = V_3;
			if ((((int32_t)L_19) == ((int32_t)((int32_t)698754697))))
			{
				goto IL_02ec;
			}
		}

IL_00ab:
		{
			goto IL_071b;
		}

IL_00b0:
		{
			uint32_t L_20 = V_3;
			if ((!(((uint32_t)L_20) <= ((uint32_t)((int32_t)1235622516)))))
			{
				goto IL_00f6;
			}
		}

IL_00b8:
		{
			uint32_t L_21 = V_3;
			if ((!(((uint32_t)L_21) <= ((uint32_t)((int32_t)740612720)))))
			{
				goto IL_00db;
			}
		}

IL_00c0:
		{
			uint32_t L_22 = V_3;
			if ((((int32_t)L_22) == ((int32_t)((int32_t)705796271))))
			{
				goto IL_0316;
			}
		}

IL_00cb:
		{
			uint32_t L_23 = V_3;
			if ((((int32_t)L_23) == ((int32_t)((int32_t)740612720))))
			{
				goto IL_03d3;
			}
		}

IL_00d6:
		{
			goto IL_071b;
		}

IL_00db:
		{
			uint32_t L_24 = V_3;
			if ((((int32_t)L_24) == ((int32_t)((int32_t)1059843136))))
			{
				goto IL_0340;
			}
		}

IL_00e6:
		{
			uint32_t L_25 = V_3;
			if ((((int32_t)L_25) == ((int32_t)((int32_t)1235622516))))
			{
				goto IL_036a;
			}
		}

IL_00f1:
		{
			goto IL_071b;
		}

IL_00f6:
		{
			uint32_t L_26 = V_3;
			if ((!(((uint32_t)L_26) <= ((uint32_t)((int32_t)1320492961)))))
			{
				goto IL_0119;
			}
		}

IL_00fe:
		{
			uint32_t L_27 = V_3;
			if ((((int32_t)L_27) == ((int32_t)((int32_t)1310955452))))
			{
				goto IL_0490;
			}
		}

IL_0109:
		{
			uint32_t L_28 = V_3;
			if ((((int32_t)L_28) == ((int32_t)((int32_t)1320492961))))
			{
				goto IL_047b;
			}
		}

IL_0114:
		{
			goto IL_071b;
		}

IL_0119:
		{
			uint32_t L_29 = V_3;
			if ((((int32_t)L_29) == ((int32_t)((int32_t)1458352709))))
			{
				goto IL_0466;
			}
		}

IL_0124:
		{
			uint32_t L_30 = V_3;
			if ((((int32_t)L_30) == ((int32_t)((int32_t)1508062721))))
			{
				goto IL_04a5;
			}
		}

IL_012f:
		{
			goto IL_071b;
		}

IL_0134:
		{
			uint32_t L_31 = V_3;
			if ((!(((uint32_t)L_31) <= ((uint32_t)((int32_t)-1444332543)))))
			{
				goto IL_01c3;
			}
		}

IL_013f:
		{
			uint32_t L_32 = V_3;
			if ((!(((uint32_t)L_32) <= ((uint32_t)((int32_t)2129631044)))))
			{
				goto IL_0185;
			}
		}

IL_0147:
		{
			uint32_t L_33 = V_3;
			if ((!(((uint32_t)L_33) <= ((uint32_t)((int32_t)1640355324)))))
			{
				goto IL_016a;
			}
		}

IL_014f:
		{
			uint32_t L_34 = V_3;
			if ((((int32_t)L_34) == ((int32_t)((int32_t)1560124071))))
			{
				goto IL_04ba;
			}
		}

IL_015a:
		{
			uint32_t L_35 = V_3;
			if ((((int32_t)L_35) == ((int32_t)((int32_t)1640355324))))
			{
				goto IL_0451;
			}
		}

IL_0165:
		{
			goto IL_071b;
		}

IL_016a:
		{
			uint32_t L_36 = V_3;
			if ((((int32_t)L_36) == ((int32_t)((int32_t)1728801507))))
			{
				goto IL_026e;
			}
		}

IL_0175:
		{
			uint32_t L_37 = V_3;
			if ((((int32_t)L_37) == ((int32_t)((int32_t)2129631044))))
			{
				goto IL_03fd;
			}
		}

IL_0180:
		{
			goto IL_071b;
		}

IL_0185:
		{
			uint32_t L_38 = V_3;
			if ((!(((uint32_t)L_38) <= ((uint32_t)((int32_t)-1786286561)))))
			{
				goto IL_01a8;
			}
		}

IL_018d:
		{
			uint32_t L_39 = V_3;
			if ((((int32_t)L_39) == ((int32_t)((int32_t)-1925595674))))
			{
				goto IL_0412;
			}
		}

IL_0198:
		{
			uint32_t L_40 = V_3;
			if ((((int32_t)L_40) == ((int32_t)((int32_t)-1786286561))))
			{
				goto IL_0244;
			}
		}

IL_01a3:
		{
			goto IL_071b;
		}

IL_01a8:
		{
			uint32_t L_41 = V_3;
			if ((((int32_t)L_41) == ((int32_t)((int32_t)-1522491664))))
			{
				goto IL_0298;
			}
		}

IL_01b3:
		{
			uint32_t L_42 = V_3;
			if ((((int32_t)L_42) == ((int32_t)((int32_t)-1444332543))))
			{
				goto IL_0355;
			}
		}

IL_01be:
		{
			goto IL_071b;
		}

IL_01c3:
		{
			uint32_t L_43 = V_3;
			if ((!(((uint32_t)L_43) <= ((uint32_t)((int32_t)-558361902)))))
			{
				goto IL_0206;
			}
		}

IL_01cb:
		{
			uint32_t L_44 = V_3;
			if ((!(((uint32_t)L_44) <= ((uint32_t)((int32_t)-1180859054)))))
			{
				goto IL_01ee;
			}
		}

IL_01d3:
		{
			uint32_t L_45 = V_3;
			if ((((int32_t)L_45) == ((int32_t)((int32_t)-1335745110))))
			{
				goto IL_02c2;
			}
		}

IL_01de:
		{
			uint32_t L_46 = V_3;
			if ((((int32_t)L_46) == ((int32_t)((int32_t)-1180859054))))
			{
				goto IL_02ad;
			}
		}

IL_01e9:
		{
			goto IL_071b;
		}

IL_01ee:
		{
			uint32_t L_47 = V_3;
			if ((((int32_t)L_47) == ((int32_t)((int32_t)-708986046))))
			{
				goto IL_0259;
			}
		}

IL_01f6:
		{
			uint32_t L_48 = V_3;
			if ((((int32_t)L_48) == ((int32_t)((int32_t)-558361902))))
			{
				goto IL_037f;
			}
		}

IL_0201:
		{
			goto IL_071b;
		}

IL_0206:
		{
			uint32_t L_49 = V_3;
			if ((!(((uint32_t)L_49) <= ((uint32_t)((int32_t)-255211260)))))
			{
				goto IL_0229;
			}
		}

IL_020e:
		{
			uint32_t L_50 = V_3;
			if ((((int32_t)L_50) == ((int32_t)((int32_t)-345285761))))
			{
				goto IL_03e8;
			}
		}

IL_0219:
		{
			uint32_t L_51 = V_3;
			if ((((int32_t)L_51) == ((int32_t)((int32_t)-255211260))))
			{
				goto IL_0427;
			}
		}

IL_0224:
		{
			goto IL_071b;
		}

IL_0229:
		{
			uint32_t L_52 = V_3;
			if ((((int32_t)L_52) == ((int32_t)((int32_t)-42086080))))
			{
				goto IL_0301;
			}
		}

IL_0234:
		{
			uint32_t L_53 = V_3;
			if ((((int32_t)L_53) == ((int32_t)((int32_t)-25846038))))
			{
				goto IL_032b;
			}
		}

IL_023f:
		{
			goto IL_071b;
		}

IL_0244:
		{
			String_t* L_54 = V_2;
			bool L_55;
			L_55 = String_op_Equality_m50B3548E4AC232558190B0052877B290AA1D436A((String_t*)L_54, (String_t*)_stringLiteralEBF5FE0CBF3EEA67902EEA700B7216E3DB0D8E84, /*hidden argument*/NULL);
			if (L_55)
			{
				goto IL_04cf;
			}
		}

IL_0254:
		{
			goto IL_071b;
		}

IL_0259:
		{
			String_t* L_56 = V_2;
			bool L_57;
			L_57 = String_op_Equality_m50B3548E4AC232558190B0052877B290AA1D436A((String_t*)L_56, (String_t*)_stringLiteral647E0FB2B5E859CC4BD7C73623B82C8EFABA2563, /*hidden argument*/NULL);
			if (L_57)
			{
				goto IL_04e5;
			}
		}

IL_0269:
		{
			goto IL_071b;
		}

IL_026e:
		{
			String_t* L_58 = V_2;
			bool L_59;
			L_59 = String_op_Equality_m50B3548E4AC232558190B0052877B290AA1D436A((String_t*)L_58, (String_t*)_stringLiteralF9EE582B77C320A1F6A3DF72205857C4248BAC79, /*hidden argument*/NULL);
			if (L_59)
			{
				goto IL_04fb;
			}
		}

IL_027e:
		{
			goto IL_071b;
		}

IL_0283:
		{
			String_t* L_60 = V_2;
			bool L_61;
			L_61 = String_op_Equality_m50B3548E4AC232558190B0052877B290AA1D436A((String_t*)L_60, (String_t*)_stringLiteral53D3413057D7E52F44470A335C590748745352B1, /*hidden argument*/NULL);
			if (L_61)
			{
				goto IL_050c;
			}
		}

IL_0293:
		{
			goto IL_071b;
		}

IL_0298:
		{
			String_t* L_62 = V_2;
			bool L_63;
			L_63 = String_op_Equality_m50B3548E4AC232558190B0052877B290AA1D436A((String_t*)L_62, (String_t*)_stringLiteralC959D767B7F0BD38D9DA8A64A4750C3A0972E2A0, /*hidden argument*/NULL);
			if (L_63)
			{
				goto IL_0522;
			}
		}

IL_02a8:
		{
			goto IL_071b;
		}

IL_02ad:
		{
			String_t* L_64 = V_2;
			bool L_65;
			L_65 = String_op_Equality_m50B3548E4AC232558190B0052877B290AA1D436A((String_t*)L_64, (String_t*)_stringLiteral75C9716749EA210206E3467390B7A11F3F33DDFA, /*hidden argument*/NULL);
			if (L_65)
			{
				goto IL_0533;
			}
		}

IL_02bd:
		{
			goto IL_071b;
		}

IL_02c2:
		{
			String_t* L_66 = V_2;
			bool L_67;
			L_67 = String_op_Equality_m50B3548E4AC232558190B0052877B290AA1D436A((String_t*)L_66, (String_t*)_stringLiteral7606720A7AEF5939309A8E4FCB8274252FA3D7BF, /*hidden argument*/NULL);
			if (L_67)
			{
				goto IL_0544;
			}
		}

IL_02d2:
		{
			goto IL_071b;
		}

IL_02d7:
		{
			String_t* L_68 = V_2;
			bool L_69;
			L_69 = String_op_Equality_m50B3548E4AC232558190B0052877B290AA1D436A((String_t*)L_68, (String_t*)_stringLiteral71C5F9C3E2F3C81C5BBC7FD313F6938654E61138, /*hidden argument*/NULL);
			if (L_69)
			{
				goto IL_055a;
			}
		}

IL_02e7:
		{
			goto IL_071b;
		}

IL_02ec:
		{
			String_t* L_70 = V_2;
			bool L_71;
			L_71 = String_op_Equality_m50B3548E4AC232558190B0052877B290AA1D436A((String_t*)L_70, (String_t*)_stringLiteral3F1522C8DB7943F2AE3AA1563D3AC25D9C8B93D1, /*hidden argument*/NULL);
			if (L_71)
			{
				goto IL_0570;
			}
		}

IL_02fc:
		{
			goto IL_071b;
		}

IL_0301:
		{
			String_t* L_72 = V_2;
			bool L_73;
			L_73 = String_op_Equality_m50B3548E4AC232558190B0052877B290AA1D436A((String_t*)L_72, (String_t*)_stringLiteralF23E83744C9D6FC70D71B723AAED8006D6780BCB, /*hidden argument*/NULL);
			if (L_73)
			{
				goto IL_0586;
			}
		}

IL_0311:
		{
			goto IL_071b;
		}

IL_0316:
		{
			String_t* L_74 = V_2;
			bool L_75;
			L_75 = String_op_Equality_m50B3548E4AC232558190B0052877B290AA1D436A((String_t*)L_74, (String_t*)_stringLiteralB49A1DF483856544CEC6018E8C944DB6E16A8D57, /*hidden argument*/NULL);
			if (L_75)
			{
				goto IL_059c;
			}
		}

IL_0326:
		{
			goto IL_071b;
		}

IL_032b:
		{
			String_t* L_76 = V_2;
			bool L_77;
			L_77 = String_op_Equality_m50B3548E4AC232558190B0052877B290AA1D436A((String_t*)L_76, (String_t*)_stringLiteral3A04F86957625CB28FA670EECF997E6BAD45BBE7, /*hidden argument*/NULL);
			if (L_77)
			{
				goto IL_05b2;
			}
		}

IL_033b:
		{
			goto IL_071b;
		}

IL_0340:
		{
			String_t* L_78 = V_2;
			bool L_79;
			L_79 = String_op_Equality_m50B3548E4AC232558190B0052877B290AA1D436A((String_t*)L_78, (String_t*)_stringLiteral7A4A6E2A7090298F814A9D44C89F8634249BEF07, /*hidden argument*/NULL);
			if (L_79)
			{
				goto IL_05c8;
			}
		}

IL_0350:
		{
			goto IL_071b;
		}

IL_0355:
		{
			String_t* L_80 = V_2;
			bool L_81;
			L_81 = String_op_Equality_m50B3548E4AC232558190B0052877B290AA1D436A((String_t*)L_80, (String_t*)_stringLiteralF3FA58C10BBB9830102605E24AF89DC619908DFA, /*hidden argument*/NULL);
			if (L_81)
			{
				goto IL_05d9;
			}
		}

IL_0365:
		{
			goto IL_071b;
		}

IL_036a:
		{
			String_t* L_82 = V_2;
			bool L_83;
			L_83 = String_op_Equality_m50B3548E4AC232558190B0052877B290AA1D436A((String_t*)L_82, (String_t*)_stringLiteralBA9362732D25B1644B7D8DEC5DF6F036A4A66DE5, /*hidden argument*/NULL);
			if (L_83)
			{
				goto IL_05ee;
			}
		}

IL_037a:
		{
			goto IL_071b;
		}

IL_037f:
		{
			String_t* L_84 = V_2;
			bool L_85;
			L_85 = String_op_Equality_m50B3548E4AC232558190B0052877B290AA1D436A((String_t*)L_84, (String_t*)_stringLiteral95F57476C0AA778364404E7CCCD7499BF1BF3757, /*hidden argument*/NULL);
			if (L_85)
			{
				goto IL_05fe;
			}
		}

IL_038f:
		{
			goto IL_071b;
		}

IL_0394:
		{
			String_t* L_86 = V_2;
			bool L_87;
			L_87 = String_op_Equality_m50B3548E4AC232558190B0052877B290AA1D436A((String_t*)L_86, (String_t*)_stringLiteral9AB5ADF8A8A53110245466F7C226F7935F5FE95F, /*hidden argument*/NULL);
			if (L_87)
			{
				goto IL_060f;
			}
		}

IL_03a4:
		{
			goto IL_071b;
		}

IL_03a9:
		{
			String_t* L_88 = V_2;
			bool L_89;
			L_89 = String_op_Equality_m50B3548E4AC232558190B0052877B290AA1D436A((String_t*)L_88, (String_t*)_stringLiteralEA8FBF382D8AC9EDB8FFC14A350641B987F5C631, /*hidden argument*/NULL);
			if (L_89)
			{
				goto IL_0620;
			}
		}

IL_03b9:
		{
			goto IL_071b;
		}

IL_03be:
		{
			String_t* L_90 = V_2;
			bool L_91;
			L_91 = String_op_Equality_m50B3548E4AC232558190B0052877B290AA1D436A((String_t*)L_90, (String_t*)_stringLiteral201D9D00BB60DC2318D21CF9902290EFE255D5DC, /*hidden argument*/NULL);
			if (L_91)
			{
				goto IL_0631;
			}
		}

IL_03ce:
		{
			goto IL_071b;
		}

IL_03d3:
		{
			String_t* L_92 = V_2;
			bool L_93;
			L_93 = String_op_Equality_m50B3548E4AC232558190B0052877B290AA1D436A((String_t*)L_92, (String_t*)_stringLiteral65B008F04EC40A696263EF679CF274BD10999A5D, /*hidden argument*/NULL);
			if (L_93)
			{
				goto IL_0642;
			}
		}

IL_03e3:
		{
			goto IL_071b;
		}

IL_03e8:
		{
			String_t* L_94 = V_2;
			bool L_95;
			L_95 = String_op_Equality_m50B3548E4AC232558190B0052877B290AA1D436A((String_t*)L_94, (String_t*)_stringLiteralF38CFAE6A91D072D4453C29FF44D81D459A582F1, /*hidden argument*/NULL);
			if (L_95)
			{
				goto IL_0653;
			}
		}

IL_03f8:
		{
			goto IL_071b;
		}

IL_03fd:
		{
			String_t* L_96 = V_2;
			bool L_97;
			L_97 = String_op_Equality_m50B3548E4AC232558190B0052877B290AA1D436A((String_t*)L_96, (String_t*)_stringLiteral3BC15E3C2F40466B2DC85C4776499817B8306CBB, /*hidden argument*/NULL);
			if (L_97)
			{
				goto IL_0669;
			}
		}

IL_040d:
		{
			goto IL_071b;
		}

IL_0412:
		{
			String_t* L_98 = V_2;
			bool L_99;
			L_99 = String_op_Equality_m50B3548E4AC232558190B0052877B290AA1D436A((String_t*)L_98, (String_t*)_stringLiteralCE18B047107AA23D1AA9B2ED32D316148E02655F, /*hidden argument*/NULL);
			if (L_99)
			{
				goto IL_067f;
			}
		}

IL_0422:
		{
			goto IL_071b;
		}

IL_0427:
		{
			String_t* L_100 = V_2;
			bool L_101;
			L_101 = String_op_Equality_m50B3548E4AC232558190B0052877B290AA1D436A((String_t*)L_100, (String_t*)_stringLiteral83AC9669A9053DD15B9F2E82D2CE2369EFE131BA, /*hidden argument*/NULL);
			if (L_101)
			{
				goto IL_0695;
			}
		}

IL_0437:
		{
			goto IL_071b;
		}

IL_043c:
		{
			String_t* L_102 = V_2;
			bool L_103;
			L_103 = String_op_Equality_m50B3548E4AC232558190B0052877B290AA1D436A((String_t*)L_102, (String_t*)_stringLiteralECAEEB225F8689DE45DEB4FA21CE34E1960B1B50, /*hidden argument*/NULL);
			if (L_103)
			{
				goto IL_06a3;
			}
		}

IL_044c:
		{
			goto IL_071b;
		}

IL_0451:
		{
			String_t* L_104 = V_2;
			bool L_105;
			L_105 = String_op_Equality_m50B3548E4AC232558190B0052877B290AA1D436A((String_t*)L_104, (String_t*)_stringLiteral2EE7B6B0E37E14930BBA497867139BFD0617CE04, /*hidden argument*/NULL);
			if (L_105)
			{
				goto IL_06b1;
			}
		}

IL_0461:
		{
			goto IL_071b;
		}

IL_0466:
		{
			String_t* L_106 = V_2;
			bool L_107;
			L_107 = String_op_Equality_m50B3548E4AC232558190B0052877B290AA1D436A((String_t*)L_106, (String_t*)_stringLiteralF2AF7DD0BFF41B7B35037F018DAABE7DCF357A7B, /*hidden argument*/NULL);
			if (L_107)
			{
				goto IL_06bf;
			}
		}

IL_0476:
		{
			goto IL_071b;
		}

IL_047b:
		{
			String_t* L_108 = V_2;
			bool L_109;
			L_109 = String_op_Equality_m50B3548E4AC232558190B0052877B290AA1D436A((String_t*)L_108, (String_t*)_stringLiteral7FF61C3A55BCA1287974D8740F945250B3F0F084, /*hidden argument*/NULL);
			if (L_109)
			{
				goto IL_06d2;
			}
		}

IL_048b:
		{
			goto IL_071b;
		}

IL_0490:
		{
			String_t* L_110 = V_2;
			bool L_111;
			L_111 = String_op_Equality_m50B3548E4AC232558190B0052877B290AA1D436A((String_t*)L_110, (String_t*)_stringLiteral2ADFC3FFF7C52D554F0435A348A5345C9FCD7FF8, /*hidden argument*/NULL);
			if (L_111)
			{
				goto IL_06e5;
			}
		}

IL_04a0:
		{
			goto IL_071b;
		}

IL_04a5:
		{
			String_t* L_112 = V_2;
			bool L_113;
			L_113 = String_op_Equality_m50B3548E4AC232558190B0052877B290AA1D436A((String_t*)L_112, (String_t*)_stringLiteral2E201D1972661439FD3C8523C55723E7E9BCC7DA, /*hidden argument*/NULL);
			if (L_113)
			{
				goto IL_06f7;
			}
		}

IL_04b5:
		{
			goto IL_071b;
		}

IL_04ba:
		{
			String_t* L_114 = V_2;
			bool L_115;
			L_115 = String_op_Equality_m50B3548E4AC232558190B0052877B290AA1D436A((String_t*)L_114, (String_t*)_stringLiteralCD44AC57FFE6CAC7824F4CAA223F1BB8B4CB0D73, /*hidden argument*/NULL);
			if (L_115)
			{
				goto IL_0709;
			}
		}

IL_04ca:
		{
			goto IL_071b;
		}

IL_04cf:
		{
			// instance.width = reader.Read<System.Int32>(ES3Type_int.Instance);
			RenderTexture_t5FE7A5B47EF962A0E8D7BEBA05E9FC87D49A1849 * L_116 = V_0;
			ES3Reader_t2780AF8AA61DA2A817115CEF8612AC0E494D03C9 * L_117 = ___reader0;
			IL2CPP_RUNTIME_CLASS_INIT(ES3Type_int_tF64C15D40AD0CC7C15BCD1CEC3C5C6BF837BD167_il2cpp_TypeInfo_var);
			ES3Type_t8FBECB7AE75168648B9524E0C2A38DAD4555421D * L_118 = ((ES3Type_int_tF64C15D40AD0CC7C15BCD1CEC3C5C6BF837BD167_StaticFields*)il2cpp_codegen_static_fields_for(ES3Type_int_tF64C15D40AD0CC7C15BCD1CEC3C5C6BF837BD167_il2cpp_TypeInfo_var))->get_Instance_12();
			NullCheck((ES3Reader_t2780AF8AA61DA2A817115CEF8612AC0E494D03C9 *)L_117);
			int32_t L_119;
			L_119 = GenericVirtFuncInvoker1< int32_t, ES3Type_t8FBECB7AE75168648B9524E0C2A38DAD4555421D * >::Invoke(ES3Reader_Read_TisInt32_tFDE5F8CD43D10453F6A2E0C77FE48C6CC7009046_m2B74AA6627F5B1D21171D56C42F71DE5A7C1B4A6_RuntimeMethod_var, (ES3Reader_t2780AF8AA61DA2A817115CEF8612AC0E494D03C9 *)L_117, (ES3Type_t8FBECB7AE75168648B9524E0C2A38DAD4555421D *)L_118);
			NullCheck((Texture_t9FE0218A1EEDF266E8C85879FE123265CACC95AE *)L_116);
			VirtActionInvoker1< int32_t >::Invoke(6 /* System.Void UnityEngine.Texture::set_width(System.Int32) */, (Texture_t9FE0218A1EEDF266E8C85879FE123265CACC95AE *)L_116, (int32_t)L_119);
			// break;
			goto IL_0721;
		}

IL_04e5:
		{
			// instance.height = reader.Read<System.Int32>(ES3Type_int.Instance);
			RenderTexture_t5FE7A5B47EF962A0E8D7BEBA05E9FC87D49A1849 * L_120 = V_0;
			ES3Reader_t2780AF8AA61DA2A817115CEF8612AC0E494D03C9 * L_121 = ___reader0;
			IL2CPP_RUNTIME_CLASS_INIT(ES3Type_int_tF64C15D40AD0CC7C15BCD1CEC3C5C6BF837BD167_il2cpp_TypeInfo_var);
			ES3Type_t8FBECB7AE75168648B9524E0C2A38DAD4555421D * L_122 = ((ES3Type_int_tF64C15D40AD0CC7C15BCD1CEC3C5C6BF837BD167_StaticFields*)il2cpp_codegen_static_fields_for(ES3Type_int_tF64C15D40AD0CC7C15BCD1CEC3C5C6BF837BD167_il2cpp_TypeInfo_var))->get_Instance_12();
			NullCheck((ES3Reader_t2780AF8AA61DA2A817115CEF8612AC0E494D03C9 *)L_121);
			int32_t L_123;
			L_123 = GenericVirtFuncInvoker1< int32_t, ES3Type_t8FBECB7AE75168648B9524E0C2A38DAD4555421D * >::Invoke(ES3Reader_Read_TisInt32_tFDE5F8CD43D10453F6A2E0C77FE48C6CC7009046_m2B74AA6627F5B1D21171D56C42F71DE5A7C1B4A6_RuntimeMethod_var, (ES3Reader_t2780AF8AA61DA2A817115CEF8612AC0E494D03C9 *)L_121, (ES3Type_t8FBECB7AE75168648B9524E0C2A38DAD4555421D *)L_122);
			NullCheck((Texture_t9FE0218A1EEDF266E8C85879FE123265CACC95AE *)L_120);
			VirtActionInvoker1< int32_t >::Invoke(8 /* System.Void UnityEngine.Texture::set_height(System.Int32) */, (Texture_t9FE0218A1EEDF266E8C85879FE123265CACC95AE *)L_120, (int32_t)L_123);
			// break;
			goto IL_0721;
		}

IL_04fb:
		{
			// instance.dimension = reader.Read<UnityEngine.Rendering.TextureDimension>();
			RenderTexture_t5FE7A5B47EF962A0E8D7BEBA05E9FC87D49A1849 * L_124 = V_0;
			ES3Reader_t2780AF8AA61DA2A817115CEF8612AC0E494D03C9 * L_125 = ___reader0;
			NullCheck((ES3Reader_t2780AF8AA61DA2A817115CEF8612AC0E494D03C9 *)L_125);
			int32_t L_126;
			L_126 = GenericVirtFuncInvoker0< int32_t >::Invoke(ES3Reader_Read_TisTextureDimension_tADCCB7C1D30E4D1182651BA9094B4DE61B63EACC_m19EAA3B93D10636C17A62A3D8437349223CFD988_RuntimeMethod_var, (ES3Reader_t2780AF8AA61DA2A817115CEF8612AC0E494D03C9 *)L_125);
			NullCheck((Texture_t9FE0218A1EEDF266E8C85879FE123265CACC95AE *)L_124);
			VirtActionInvoker1< int32_t >::Invoke(10 /* System.Void UnityEngine.Texture::set_dimension(UnityEngine.Rendering.TextureDimension) */, (Texture_t9FE0218A1EEDF266E8C85879FE123265CACC95AE *)L_124, (int32_t)L_126);
			// break;
			goto IL_0721;
		}

IL_050c:
		{
			// instance.useMipMap = reader.Read<System.Boolean>(ES3Type_bool.Instance);
			RenderTexture_t5FE7A5B47EF962A0E8D7BEBA05E9FC87D49A1849 * L_127 = V_0;
			ES3Reader_t2780AF8AA61DA2A817115CEF8612AC0E494D03C9 * L_128 = ___reader0;
			IL2CPP_RUNTIME_CLASS_INIT(ES3Type_bool_t8F309F7B9CC735FF1DEE68081B6E3CAB367745F4_il2cpp_TypeInfo_var);
			ES3Type_t8FBECB7AE75168648B9524E0C2A38DAD4555421D * L_129 = ((ES3Type_bool_t8F309F7B9CC735FF1DEE68081B6E3CAB367745F4_StaticFields*)il2cpp_codegen_static_fields_for(ES3Type_bool_t8F309F7B9CC735FF1DEE68081B6E3CAB367745F4_il2cpp_TypeInfo_var))->get_Instance_12();
			NullCheck((ES3Reader_t2780AF8AA61DA2A817115CEF8612AC0E494D03C9 *)L_128);
			bool L_130;
			L_130 = GenericVirtFuncInvoker1< bool, ES3Type_t8FBECB7AE75168648B9524E0C2A38DAD4555421D * >::Invoke(ES3Reader_Read_TisBoolean_t07D1E3F34E4813023D64F584DFF7B34C9D922F37_mC6D1B158268FF9B97822FF9F5B37FB1723FEDA22_RuntimeMethod_var, (ES3Reader_t2780AF8AA61DA2A817115CEF8612AC0E494D03C9 *)L_128, (ES3Type_t8FBECB7AE75168648B9524E0C2A38DAD4555421D *)L_129);
			NullCheck((RenderTexture_t5FE7A5B47EF962A0E8D7BEBA05E9FC87D49A1849 *)L_127);
			RenderTexture_set_useMipMap_mAE1437C3D7D21441891A612C3B812EE9C379F126((RenderTexture_t5FE7A5B47EF962A0E8D7BEBA05E9FC87D49A1849 *)L_127, (bool)L_130, /*hidden argument*/NULL);
			// break;
			goto IL_0721;
		}

IL_0522:
		{
			// instance.memorylessMode = reader.Read<UnityEngine.RenderTextureMemoryless>();
			RenderTexture_t5FE7A5B47EF962A0E8D7BEBA05E9FC87D49A1849 * L_131 = V_0;
			ES3Reader_t2780AF8AA61DA2A817115CEF8612AC0E494D03C9 * L_132 = ___reader0;
			NullCheck((ES3Reader_t2780AF8AA61DA2A817115CEF8612AC0E494D03C9 *)L_132);
			int32_t L_133;
			L_133 = GenericVirtFuncInvoker0< int32_t >::Invoke(ES3Reader_Read_TisRenderTextureMemoryless_t37547D68C2186D2650440F719302CDA4A3BB7F67_m3A980BA15AADBBB8393C3BC88CE17EEDDC89B027_RuntimeMethod_var, (ES3Reader_t2780AF8AA61DA2A817115CEF8612AC0E494D03C9 *)L_132);
			NullCheck((RenderTexture_t5FE7A5B47EF962A0E8D7BEBA05E9FC87D49A1849 *)L_131);
			RenderTexture_set_memorylessMode_mE48B2A38E9374A7BB419383B438790347474EFC1((RenderTexture_t5FE7A5B47EF962A0E8D7BEBA05E9FC87D49A1849 *)L_131, (int32_t)L_133, /*hidden argument*/NULL);
			// break;
			goto IL_0721;
		}

IL_0533:
		{
			// instance.format = reader.Read<UnityEngine.RenderTextureFormat>();
			RenderTexture_t5FE7A5B47EF962A0E8D7BEBA05E9FC87D49A1849 * L_134 = V_0;
			ES3Reader_t2780AF8AA61DA2A817115CEF8612AC0E494D03C9 * L_135 = ___reader0;
			NullCheck((ES3Reader_t2780AF8AA61DA2A817115CEF8612AC0E494D03C9 *)L_135);
			int32_t L_136;
			L_136 = GenericVirtFuncInvoker0< int32_t >::Invoke(ES3Reader_Read_TisRenderTextureFormat_t8371287102ED67772EF78229CF4AB9D38C2CD626_mE6358E03407F5C15B58B292C79D4770DE3FAC95A_RuntimeMethod_var, (ES3Reader_t2780AF8AA61DA2A817115CEF8612AC0E494D03C9 *)L_135);
			NullCheck((RenderTexture_t5FE7A5B47EF962A0E8D7BEBA05E9FC87D49A1849 *)L_134);
			RenderTexture_set_format_m32D42DC33DB151B69E81D0D93F36DE7450CFC23D((RenderTexture_t5FE7A5B47EF962A0E8D7BEBA05E9FC87D49A1849 *)L_134, (int32_t)L_136, /*hidden argument*/NULL);
			// break;
			goto IL_0721;
		}

IL_0544:
		{
			// instance.autoGenerateMips = reader.Read<System.Boolean>(ES3Type_bool.Instance);
			RenderTexture_t5FE7A5B47EF962A0E8D7BEBA05E9FC87D49A1849 * L_137 = V_0;
			ES3Reader_t2780AF8AA61DA2A817115CEF8612AC0E494D03C9 * L_138 = ___reader0;
			IL2CPP_RUNTIME_CLASS_INIT(ES3Type_bool_t8F309F7B9CC735FF1DEE68081B6E3CAB367745F4_il2cpp_TypeInfo_var);
			ES3Type_t8FBECB7AE75168648B9524E0C2A38DAD4555421D * L_139 = ((ES3Type_bool_t8F309F7B9CC735FF1DEE68081B6E3CAB367745F4_StaticFields*)il2cpp_codegen_static_fields_for(ES3Type_bool_t8F309F7B9CC735FF1DEE68081B6E3CAB367745F4_il2cpp_TypeInfo_var))->get_Instance_12();
			NullCheck((ES3Reader_t2780AF8AA61DA2A817115CEF8612AC0E494D03C9 *)L_138);
			bool L_140;
			L_140 = GenericVirtFuncInvoker1< bool, ES3Type_t8FBECB7AE75168648B9524E0C2A38DAD4555421D * >::Invoke(ES3Reader_Read_TisBoolean_t07D1E3F34E4813023D64F584DFF7B34C9D922F37_mC6D1B158268FF9B97822FF9F5B37FB1723FEDA22_RuntimeMethod_var, (ES3Reader_t2780AF8AA61DA2A817115CEF8612AC0E494D03C9 *)L_138, (ES3Type_t8FBECB7AE75168648B9524E0C2A38DAD4555421D *)L_139);
			NullCheck((RenderTexture_t5FE7A5B47EF962A0E8D7BEBA05E9FC87D49A1849 *)L_137);
			RenderTexture_set_autoGenerateMips_m0F02D60D4C4D4790B354451732F2DA6BA12D2E63((RenderTexture_t5FE7A5B47EF962A0E8D7BEBA05E9FC87D49A1849 *)L_137, (bool)L_140, /*hidden argument*/NULL);
			// break;
			goto IL_0721;
		}

IL_055a:
		{
			// instance.volumeDepth = reader.Read<System.Int32>(ES3Type_int.Instance);
			RenderTexture_t5FE7A5B47EF962A0E8D7BEBA05E9FC87D49A1849 * L_141 = V_0;
			ES3Reader_t2780AF8AA61DA2A817115CEF8612AC0E494D03C9 * L_142 = ___reader0;
			IL2CPP_RUNTIME_CLASS_INIT(ES3Type_int_tF64C15D40AD0CC7C15BCD1CEC3C5C6BF837BD167_il2cpp_TypeInfo_var);
			ES3Type_t8FBECB7AE75168648B9524E0C2A38DAD4555421D * L_143 = ((ES3Type_int_tF64C15D40AD0CC7C15BCD1CEC3C5C6BF837BD167_StaticFields*)il2cpp_codegen_static_fields_for(ES3Type_int_tF64C15D40AD0CC7C15BCD1CEC3C5C6BF837BD167_il2cpp_TypeInfo_var))->get_Instance_12();
			NullCheck((ES3Reader_t2780AF8AA61DA2A817115CEF8612AC0E494D03C9 *)L_142);
			int32_t L_144;
			L_144 = GenericVirtFuncInvoker1< int32_t, ES3Type_t8FBECB7AE75168648B9524E0C2A38DAD4555421D * >::Invoke(ES3Reader_Read_TisInt32_tFDE5F8CD43D10453F6A2E0C77FE48C6CC7009046_m2B74AA6627F5B1D21171D56C42F71DE5A7C1B4A6_RuntimeMethod_var, (ES3Reader_t2780AF8AA61DA2A817115CEF8612AC0E494D03C9 *)L_142, (ES3Type_t8FBECB7AE75168648B9524E0C2A38DAD4555421D *)L_143);
			NullCheck((RenderTexture_t5FE7A5B47EF962A0E8D7BEBA05E9FC87D49A1849 *)L_141);
			RenderTexture_set_volumeDepth_m01D7BD50386DDAE777CE3CB9B60FDD7DE798AC93((RenderTexture_t5FE7A5B47EF962A0E8D7BEBA05E9FC87D49A1849 *)L_141, (int32_t)L_144, /*hidden argument*/NULL);
			// break;
			goto IL_0721;
		}

IL_0570:
		{
			// instance.antiAliasing = reader.Read<System.Int32>(ES3Type_int.Instance);
			RenderTexture_t5FE7A5B47EF962A0E8D7BEBA05E9FC87D49A1849 * L_145 = V_0;
			ES3Reader_t2780AF8AA61DA2A817115CEF8612AC0E494D03C9 * L_146 = ___reader0;
			IL2CPP_RUNTIME_CLASS_INIT(ES3Type_int_tF64C15D40AD0CC7C15BCD1CEC3C5C6BF837BD167_il2cpp_TypeInfo_var);
			ES3Type_t8FBECB7AE75168648B9524E0C2A38DAD4555421D * L_147 = ((ES3Type_int_tF64C15D40AD0CC7C15BCD1CEC3C5C6BF837BD167_StaticFields*)il2cpp_codegen_static_fields_for(ES3Type_int_tF64C15D40AD0CC7C15BCD1CEC3C5C6BF837BD167_il2cpp_TypeInfo_var))->get_Instance_12();
			NullCheck((ES3Reader_t2780AF8AA61DA2A817115CEF8612AC0E494D03C9 *)L_146);
			int32_t L_148;
			L_148 = GenericVirtFuncInvoker1< int32_t, ES3Type_t8FBECB7AE75168648B9524E0C2A38DAD4555421D * >::Invoke(ES3Reader_Read_TisInt32_tFDE5F8CD43D10453F6A2E0C77FE48C6CC7009046_m2B74AA6627F5B1D21171D56C42F71DE5A7C1B4A6_RuntimeMethod_var, (ES3Reader_t2780AF8AA61DA2A817115CEF8612AC0E494D03C9 *)L_146, (ES3Type_t8FBECB7AE75168648B9524E0C2A38DAD4555421D *)L_147);
			NullCheck((RenderTexture_t5FE7A5B47EF962A0E8D7BEBA05E9FC87D49A1849 *)L_145);
			RenderTexture_set_antiAliasing_m4D37900B7E23CA0D33F109DB8DF21265DB70C38F((RenderTexture_t5FE7A5B47EF962A0E8D7BEBA05E9FC87D49A1849 *)L_145, (int32_t)L_148, /*hidden argument*/NULL);
			// break;
			goto IL_0721;
		}

IL_0586:
		{
			// instance.enableRandomWrite = reader.Read<System.Boolean>(ES3Type_bool.Instance);
			RenderTexture_t5FE7A5B47EF962A0E8D7BEBA05E9FC87D49A1849 * L_149 = V_0;
			ES3Reader_t2780AF8AA61DA2A817115CEF8612AC0E494D03C9 * L_150 = ___reader0;
			IL2CPP_RUNTIME_CLASS_INIT(ES3Type_bool_t8F309F7B9CC735FF1DEE68081B6E3CAB367745F4_il2cpp_TypeInfo_var);
			ES3Type_t8FBECB7AE75168648B9524E0C2A38DAD4555421D * L_151 = ((ES3Type_bool_t8F309F7B9CC735FF1DEE68081B6E3CAB367745F4_StaticFields*)il2cpp_codegen_static_fields_for(ES3Type_bool_t8F309F7B9CC735FF1DEE68081B6E3CAB367745F4_il2cpp_TypeInfo_var))->get_Instance_12();
			NullCheck((ES3Reader_t2780AF8AA61DA2A817115CEF8612AC0E494D03C9 *)L_150);
			bool L_152;
			L_152 = GenericVirtFuncInvoker1< bool, ES3Type_t8FBECB7AE75168648B9524E0C2A38DAD4555421D * >::Invoke(ES3Reader_Read_TisBoolean_t07D1E3F34E4813023D64F584DFF7B34C9D922F37_mC6D1B158268FF9B97822FF9F5B37FB1723FEDA22_RuntimeMethod_var, (ES3Reader_t2780AF8AA61DA2A817115CEF8612AC0E494D03C9 *)L_150, (ES3Type_t8FBECB7AE75168648B9524E0C2A38DAD4555421D *)L_151);
			NullCheck((RenderTexture_t5FE7A5B47EF962A0E8D7BEBA05E9FC87D49A1849 *)L_149);
			RenderTexture_set_enableRandomWrite_m024F49DB3CA3B02FA0EEBB3EACB37E6228CAA183((RenderTexture_t5FE7A5B47EF962A0E8D7BEBA05E9FC87D49A1849 *)L_149, (bool)L_152, /*hidden argument*/NULL);
			// break;
			goto IL_0721;
		}

IL_059c:
		{
			// instance.isPowerOfTwo = reader.Read<System.Boolean>(ES3Type_bool.Instance);
			RenderTexture_t5FE7A5B47EF962A0E8D7BEBA05E9FC87D49A1849 * L_153 = V_0;
			ES3Reader_t2780AF8AA61DA2A817115CEF8612AC0E494D03C9 * L_154 = ___reader0;
			IL2CPP_RUNTIME_CLASS_INIT(ES3Type_bool_t8F309F7B9CC735FF1DEE68081B6E3CAB367745F4_il2cpp_TypeInfo_var);
			ES3Type_t8FBECB7AE75168648B9524E0C2A38DAD4555421D * L_155 = ((ES3Type_bool_t8F309F7B9CC735FF1DEE68081B6E3CAB367745F4_StaticFields*)il2cpp_codegen_static_fields_for(ES3Type_bool_t8F309F7B9CC735FF1DEE68081B6E3CAB367745F4_il2cpp_TypeInfo_var))->get_Instance_12();
			NullCheck((ES3Reader_t2780AF8AA61DA2A817115CEF8612AC0E494D03C9 *)L_154);
			bool L_156;
			L_156 = GenericVirtFuncInvoker1< bool, ES3Type_t8FBECB7AE75168648B9524E0C2A38DAD4555421D * >::Invoke(ES3Reader_Read_TisBoolean_t07D1E3F34E4813023D64F584DFF7B34C9D922F37_mC6D1B158268FF9B97822FF9F5B37FB1723FEDA22_RuntimeMethod_var, (ES3Reader_t2780AF8AA61DA2A817115CEF8612AC0E494D03C9 *)L_154, (ES3Type_t8FBECB7AE75168648B9524E0C2A38DAD4555421D *)L_155);
			NullCheck((RenderTexture_t5FE7A5B47EF962A0E8D7BEBA05E9FC87D49A1849 *)L_153);
			RenderTexture_set_isPowerOfTwo_mA6D34F610DF27C40422DF5815892B45C656F1317((RenderTexture_t5FE7A5B47EF962A0E8D7BEBA05E9FC87D49A1849 *)L_153, (bool)L_156, /*hidden argument*/NULL);
			// break;
			goto IL_0721;
		}

IL_05b2:
		{
			// instance.depth = reader.Read<System.Int32>(ES3Type_int.Instance);
			RenderTexture_t5FE7A5B47EF962A0E8D7BEBA05E9FC87D49A1849 * L_157 = V_0;
			ES3Reader_t2780AF8AA61DA2A817115CEF8612AC0E494D03C9 * L_158 = ___reader0;
			IL2CPP_RUNTIME_CLASS_INIT(ES3Type_int_tF64C15D40AD0CC7C15BCD1CEC3C5C6BF837BD167_il2cpp_TypeInfo_var);
			ES3Type_t8FBECB7AE75168648B9524E0C2A38DAD4555421D * L_159 = ((ES3Type_int_tF64C15D40AD0CC7C15BCD1CEC3C5C6BF837BD167_StaticFields*)il2cpp_codegen_static_fields_for(ES3Type_int_tF64C15D40AD0CC7C15BCD1CEC3C5C6BF837BD167_il2cpp_TypeInfo_var))->get_Instance_12();
			NullCheck((ES3Reader_t2780AF8AA61DA2A817115CEF8612AC0E494D03C9 *)L_158);
			int32_t L_160;
			L_160 = GenericVirtFuncInvoker1< int32_t, ES3Type_t8FBECB7AE75168648B9524E0C2A38DAD4555421D * >::Invoke(ES3Reader_Read_TisInt32_tFDE5F8CD43D10453F6A2E0C77FE48C6CC7009046_m2B74AA6627F5B1D21171D56C42F71DE5A7C1B4A6_RuntimeMethod_var, (ES3Reader_t2780AF8AA61DA2A817115CEF8612AC0E494D03C9 *)L_158, (ES3Type_t8FBECB7AE75168648B9524E0C2A38DAD4555421D *)L_159);
			NullCheck((RenderTexture_t5FE7A5B47EF962A0E8D7BEBA05E9FC87D49A1849 *)L_157);
			RenderTexture_set_depth_mA57CEFEDDB45D0429FAC9532A631839F523944A3((RenderTexture_t5FE7A5B47EF962A0E8D7BEBA05E9FC87D49A1849 *)L_157, (int32_t)L_160, /*hidden argument*/NULL);
			// break;
			goto IL_0721;
		}

IL_05c8:
		{
			// instance.descriptor = reader.Read<UnityEngine.RenderTextureDescriptor>();
			RenderTexture_t5FE7A5B47EF962A0E8D7BEBA05E9FC87D49A1849 * L_161 = V_0;
			ES3Reader_t2780AF8AA61DA2A817115CEF8612AC0E494D03C9 * L_162 = ___reader0;
			NullCheck((ES3Reader_t2780AF8AA61DA2A817115CEF8612AC0E494D03C9 *)L_162);
			RenderTextureDescriptor_t67FF189E1F35AEB5D6C43A2D7103F3A8A8CA0B47  L_163;
			L_163 = GenericVirtFuncInvoker0< RenderTextureDescriptor_t67FF189E1F35AEB5D6C43A2D7103F3A8A8CA0B47  >::Invoke(ES3Reader_Read_TisRenderTextureDescriptor_t67FF189E1F35AEB5D6C43A2D7103F3A8A8CA0B47_m427886ADAAF96C7BA9BD423544128494F96D69E7_RuntimeMethod_var, (ES3Reader_t2780AF8AA61DA2A817115CEF8612AC0E494D03C9 *)L_162);
			NullCheck((RenderTexture_t5FE7A5B47EF962A0E8D7BEBA05E9FC87D49A1849 *)L_161);
			RenderTexture_set_descriptor_m3C8E31AE4644B23719A12345771D1B85EB6E5881((RenderTexture_t5FE7A5B47EF962A0E8D7BEBA05E9FC87D49A1849 *)L_161, (RenderTextureDescriptor_t67FF189E1F35AEB5D6C43A2D7103F3A8A8CA0B47 )L_163, /*hidden argument*/NULL);
			// break;
			goto IL_0721;
		}

IL_05d9:
		{
			// UnityEngine.RenderTexture.masterTextureLimit = reader.Read<System.Int32>(ES3Type_int.Instance);
			ES3Reader_t2780AF8AA61DA2A817115CEF8612AC0E494D03C9 * L_164 = ___reader0;
			IL2CPP_RUNTIME_CLASS_INIT(ES3Type_int_tF64C15D40AD0CC7C15BCD1CEC3C5C6BF837BD167_il2cpp_TypeInfo_var);
			ES3Type_t8FBECB7AE75168648B9524E0C2A38DAD4555421D * L_165 = ((ES3Type_int_tF64C15D40AD0CC7C15BCD1CEC3C5C6BF837BD167_StaticFields*)il2cpp_codegen_static_fields_for(ES3Type_int_tF64C15D40AD0CC7C15BCD1CEC3C5C6BF837BD167_il2cpp_TypeInfo_var))->get_Instance_12();
			NullCheck((ES3Reader_t2780AF8AA61DA2A817115CEF8612AC0E494D03C9 *)L_164);
			int32_t L_166;
			L_166 = GenericVirtFuncInvoker1< int32_t, ES3Type_t8FBECB7AE75168648B9524E0C2A38DAD4555421D * >::Invoke(ES3Reader_Read_TisInt32_tFDE5F8CD43D10453F6A2E0C77FE48C6CC7009046_m2B74AA6627F5B1D21171D56C42F71DE5A7C1B4A6_RuntimeMethod_var, (ES3Reader_t2780AF8AA61DA2A817115CEF8612AC0E494D03C9 *)L_164, (ES3Type_t8FBECB7AE75168648B9524E0C2A38DAD4555421D *)L_165);
			IL2CPP_RUNTIME_CLASS_INIT(Texture_t9FE0218A1EEDF266E8C85879FE123265CACC95AE_il2cpp_TypeInfo_var);
			Texture_set_masterTextureLimit_m94A531A20A54A86AF7B88A56F72709CE556B7DFF((int32_t)L_166, /*hidden argument*/NULL);
			// break;
			goto IL_0721;
		}

IL_05ee:
		{
			// UnityEngine.RenderTexture.anisotropicFiltering = reader.Read<UnityEngine.AnisotropicFiltering>();
			ES3Reader_t2780AF8AA61DA2A817115CEF8612AC0E494D03C9 * L_167 = ___reader0;
			NullCheck((ES3Reader_t2780AF8AA61DA2A817115CEF8612AC0E494D03C9 *)L_167);
			int32_t L_168;
			L_168 = GenericVirtFuncInvoker0< int32_t >::Invoke(ES3Reader_Read_TisAnisotropicFiltering_tAC3D1448B262D5869946CD1CDD2C8DAE3A7A537B_mAF1268AAC3E461D6E0604A19FAF0325873B6EC8A_RuntimeMethod_var, (ES3Reader_t2780AF8AA61DA2A817115CEF8612AC0E494D03C9 *)L_167);
			IL2CPP_RUNTIME_CLASS_INIT(Texture_t9FE0218A1EEDF266E8C85879FE123265CACC95AE_il2cpp_TypeInfo_var);
			Texture_set_anisotropicFiltering_mE2B639BF2681A8A0516C1C343C7E265ED60EAF16((int32_t)L_168, /*hidden argument*/NULL);
			// break;
			goto IL_0721;
		}

IL_05fe:
		{
			// instance.wrapMode = reader.Read<UnityEngine.TextureWrapMode>();
			RenderTexture_t5FE7A5B47EF962A0E8D7BEBA05E9FC87D49A1849 * L_169 = V_0;
			ES3Reader_t2780AF8AA61DA2A817115CEF8612AC0E494D03C9 * L_170 = ___reader0;
			NullCheck((ES3Reader_t2780AF8AA61DA2A817115CEF8612AC0E494D03C9 *)L_170);
			int32_t L_171;
			L_171 = GenericVirtFuncInvoker0< int32_t >::Invoke(ES3Reader_Read_TisTextureWrapMode_t86DDA8206E4AA784A1218D0DE3C5F6826D7549EB_m7926E449CD0B8BD56E5BF145DD0CCFE1C567F107_RuntimeMethod_var, (ES3Reader_t2780AF8AA61DA2A817115CEF8612AC0E494D03C9 *)L_170);
			NullCheck((Texture_t9FE0218A1EEDF266E8C85879FE123265CACC95AE *)L_169);
			Texture_set_wrapMode_m1233D2DF48DC20996F8EE26E866D4BDD2AC8050D((Texture_t9FE0218A1EEDF266E8C85879FE123265CACC95AE *)L_169, (int32_t)L_171, /*hidden argument*/NULL);
			// break;
			goto IL_0721;
		}

IL_060f:
		{
			// instance.wrapModeU = reader.Read<UnityEngine.TextureWrapMode>();
			RenderTexture_t5FE7A5B47EF962A0E8D7BEBA05E9FC87D49A1849 * L_172 = V_0;
			ES3Reader_t2780AF8AA61DA2A817115CEF8612AC0E494D03C9 * L_173 = ___reader0;
			NullCheck((ES3Reader_t2780AF8AA61DA2A817115CEF8612AC0E494D03C9 *)L_173);
			int32_t L_174;
			L_174 = GenericVirtFuncInvoker0< int32_t >::Invoke(ES3Reader_Read_TisTextureWrapMode_t86DDA8206E4AA784A1218D0DE3C5F6826D7549EB_m7926E449CD0B8BD56E5BF145DD0CCFE1C567F107_RuntimeMethod_var, (ES3Reader_t2780AF8AA61DA2A817115CEF8612AC0E494D03C9 *)L_173);
			NullCheck((Texture_t9FE0218A1EEDF266E8C85879FE123265CACC95AE *)L_172);
			Texture_set_wrapModeU_mBD3CBD6880E9E767B91ED9E1B14C725A52D7A66E((Texture_t9FE0218A1EEDF266E8C85879FE123265CACC95AE *)L_172, (int32_t)L_174, /*hidden argument*/NULL);
			// break;
			goto IL_0721;
		}

IL_0620:
		{
			// instance.wrapModeV = reader.Read<UnityEngine.TextureWrapMode>();
			RenderTexture_t5FE7A5B47EF962A0E8D7BEBA05E9FC87D49A1849 * L_175 = V_0;
			ES3Reader_t2780AF8AA61DA2A817115CEF8612AC0E494D03C9 * L_176 = ___reader0;
			NullCheck((ES3Reader_t2780AF8AA61DA2A817115CEF8612AC0E494D03C9 *)L_176);
			int32_t L_177;
			L_177 = GenericVirtFuncInvoker0< int32_t >::Invoke(ES3Reader_Read_TisTextureWrapMode_t86DDA8206E4AA784A1218D0DE3C5F6826D7549EB_m7926E449CD0B8BD56E5BF145DD0CCFE1C567F107_RuntimeMethod_var, (ES3Reader_t2780AF8AA61DA2A817115CEF8612AC0E494D03C9 *)L_176);
			NullCheck((Texture_t9FE0218A1EEDF266E8C85879FE123265CACC95AE *)L_175);
			Texture_set_wrapModeV_mCD51C11B4C90D7508113C744EDC09D04059403E5((Texture_t9FE0218A1EEDF266E8C85879FE123265CACC95AE *)L_175, (int32_t)L_177, /*hidden argument*/NULL);
			// break;
			goto IL_0721;
		}

IL_0631:
		{
			// instance.wrapModeW = reader.Read<UnityEngine.TextureWrapMode>();
			RenderTexture_t5FE7A5B47EF962A0E8D7BEBA05E9FC87D49A1849 * L_178 = V_0;
			ES3Reader_t2780AF8AA61DA2A817115CEF8612AC0E494D03C9 * L_179 = ___reader0;
			NullCheck((ES3Reader_t2780AF8AA61DA2A817115CEF8612AC0E494D03C9 *)L_179);
			int32_t L_180;
			L_180 = GenericVirtFuncInvoker0< int32_t >::Invoke(ES3Reader_Read_TisTextureWrapMode_t86DDA8206E4AA784A1218D0DE3C5F6826D7549EB_m7926E449CD0B8BD56E5BF145DD0CCFE1C567F107_RuntimeMethod_var, (ES3Reader_t2780AF8AA61DA2A817115CEF8612AC0E494D03C9 *)L_179);
			NullCheck((Texture_t9FE0218A1EEDF266E8C85879FE123265CACC95AE *)L_178);
			Texture_set_wrapModeW_m72C3239EA12A51D5031BD2A66C5E7B178EE9F65B((Texture_t9FE0218A1EEDF266E8C85879FE123265CACC95AE *)L_178, (int32_t)L_180, /*hidden argument*/NULL);
			// break;
			goto IL_0721;
		}

IL_0642:
		{
			// instance.filterMode = reader.Read<UnityEngine.FilterMode>();
			RenderTexture_t5FE7A5B47EF962A0E8D7BEBA05E9FC87D49A1849 * L_181 = V_0;
			ES3Reader_t2780AF8AA61DA2A817115CEF8612AC0E494D03C9 * L_182 = ___reader0;
			NullCheck((ES3Reader_t2780AF8AA61DA2A817115CEF8612AC0E494D03C9 *)L_182);
			int32_t L_183;
			L_183 = GenericVirtFuncInvoker0< int32_t >::Invoke(ES3Reader_Read_TisFilterMode_tE90A08FD96A142C761463D65E524BCDBFEEE3D19_m9819C2A442797B4060B0D9A80CFA96CFD6102839_RuntimeMethod_var, (ES3Reader_t2780AF8AA61DA2A817115CEF8612AC0E494D03C9 *)L_182);
			NullCheck((Texture_t9FE0218A1EEDF266E8C85879FE123265CACC95AE *)L_181);
			Texture_set_filterMode_m045141DB0FEFE496885D45F5F23B15BC0E77C8D0((Texture_t9FE0218A1EEDF266E8C85879FE123265CACC95AE *)L_181, (int32_t)L_183, /*hidden argument*/NULL);
			// break;
			goto IL_0721;
		}

IL_0653:
		{
			// instance.anisoLevel = reader.Read<System.Int32>(ES3Type_int.Instance);
			RenderTexture_t5FE7A5B47EF962A0E8D7BEBA05E9FC87D49A1849 * L_184 = V_0;
			ES3Reader_t2780AF8AA61DA2A817115CEF8612AC0E494D03C9 * L_185 = ___reader0;
			IL2CPP_RUNTIME_CLASS_INIT(ES3Type_int_tF64C15D40AD0CC7C15BCD1CEC3C5C6BF837BD167_il2cpp_TypeInfo_var);
			ES3Type_t8FBECB7AE75168648B9524E0C2A38DAD4555421D * L_186 = ((ES3Type_int_tF64C15D40AD0CC7C15BCD1CEC3C5C6BF837BD167_StaticFields*)il2cpp_codegen_static_fields_for(ES3Type_int_tF64C15D40AD0CC7C15BCD1CEC3C5C6BF837BD167_il2cpp_TypeInfo_var))->get_Instance_12();
			NullCheck((ES3Reader_t2780AF8AA61DA2A817115CEF8612AC0E494D03C9 *)L_185);
			int32_t L_187;
			L_187 = GenericVirtFuncInvoker1< int32_t, ES3Type_t8FBECB7AE75168648B9524E0C2A38DAD4555421D * >::Invoke(ES3Reader_Read_TisInt32_tFDE5F8CD43D10453F6A2E0C77FE48C6CC7009046_m2B74AA6627F5B1D21171D56C42F71DE5A7C1B4A6_RuntimeMethod_var, (ES3Reader_t2780AF8AA61DA2A817115CEF8612AC0E494D03C9 *)L_185, (ES3Type_t8FBECB7AE75168648B9524E0C2A38DAD4555421D *)L_186);
			NullCheck((Texture_t9FE0218A1EEDF266E8C85879FE123265CACC95AE *)L_184);
			Texture_set_anisoLevel_mE51360F6CD0562FD6355F8C0509B70A454CB33BE((Texture_t9FE0218A1EEDF266E8C85879FE123265CACC95AE *)L_184, (int32_t)L_187, /*hidden argument*/NULL);
			// break;
			goto IL_0721;
		}

IL_0669:
		{
			// instance.mipMapBias = reader.Read<System.Single>(ES3Type_float.Instance);
			RenderTexture_t5FE7A5B47EF962A0E8D7BEBA05E9FC87D49A1849 * L_188 = V_0;
			ES3Reader_t2780AF8AA61DA2A817115CEF8612AC0E494D03C9 * L_189 = ___reader0;
			IL2CPP_RUNTIME_CLASS_INIT(ES3Type_float_tF86B773C86731BD9AD79448B860BBB178FE77644_il2cpp_TypeInfo_var);
			ES3Type_t8FBECB7AE75168648B9524E0C2A38DAD4555421D * L_190 = ((ES3Type_float_tF86B773C86731BD9AD79448B860BBB178FE77644_StaticFields*)il2cpp_codegen_static_fields_for(ES3Type_float_tF86B773C86731BD9AD79448B860BBB178FE77644_il2cpp_TypeInfo_var))->get_Instance_12();
			NullCheck((ES3Reader_t2780AF8AA61DA2A817115CEF8612AC0E494D03C9 *)L_189);
			float L_191;
			L_191 = GenericVirtFuncInvoker1< float, ES3Type_t8FBECB7AE75168648B9524E0C2A38DAD4555421D * >::Invoke(ES3Reader_Read_TisSingle_tE07797BA3C98D4CA9B5A19413C19A76688AB899E_m4A0416374498BDA042B8EB21E49B72326D6CE5F4_RuntimeMethod_var, (ES3Reader_t2780AF8AA61DA2A817115CEF8612AC0E494D03C9 *)L_189, (ES3Type_t8FBECB7AE75168648B9524E0C2A38DAD4555421D *)L_190);
			NullCheck((Texture_t9FE0218A1EEDF266E8C85879FE123265CACC95AE *)L_188);
			Texture_set_mipMapBias_m5057ADA9DBA8E8E30EC15EA5BABFA0734CE2821C((Texture_t9FE0218A1EEDF266E8C85879FE123265CACC95AE *)L_188, (float)L_191, /*hidden argument*/NULL);
			// break;
			goto IL_0721;
		}

IL_067f:
		{
			// instance.name = reader.Read<System.String>(ES3Type_string.Instance);
			RenderTexture_t5FE7A5B47EF962A0E8D7BEBA05E9FC87D49A1849 * L_192 = V_0;
			ES3Reader_t2780AF8AA61DA2A817115CEF8612AC0E494D03C9 * L_193 = ___reader0;
			IL2CPP_RUNTIME_CLASS_INIT(ES3Type_string_tC47BFBE3CC816F3C70B51558C68F0C6470C5EFE5_il2cpp_TypeInfo_var);
			ES3Type_t8FBECB7AE75168648B9524E0C2A38DAD4555421D * L_194 = ((ES3Type_string_tC47BFBE3CC816F3C70B51558C68F0C6470C5EFE5_StaticFields*)il2cpp_codegen_static_fields_for(ES3Type_string_tC47BFBE3CC816F3C70B51558C68F0C6470C5EFE5_il2cpp_TypeInfo_var))->get_Instance_12();
			NullCheck((ES3Reader_t2780AF8AA61DA2A817115CEF8612AC0E494D03C9 *)L_193);
			String_t* L_195;
			L_195 = GenericVirtFuncInvoker1< String_t*, ES3Type_t8FBECB7AE75168648B9524E0C2A38DAD4555421D * >::Invoke(ES3Reader_Read_TisString_t_m883861F3B58239392073ABF39876826EEB87DF9C_RuntimeMethod_var, (ES3Reader_t2780AF8AA61DA2A817115CEF8612AC0E494D03C9 *)L_193, (ES3Type_t8FBECB7AE75168648B9524E0C2A38DAD4555421D *)L_194);
			NullCheck((Object_tF2F3778131EFF286AF62B7B013A170F95A91571A *)L_192);
			Object_set_name_m87C4006618ADB325ABE5439DF159E10DD8DD0781((Object_tF2F3778131EFF286AF62B7B013A170F95A91571A *)L_192, (String_t*)L_195, /*hidden argument*/NULL);
			// break;
			goto IL_0721;
		}

IL_0695:
		{
			// instance.vrUsage = reader.Read<UnityEngine.VRTextureUsage>();
			RenderTexture_t5FE7A5B47EF962A0E8D7BEBA05E9FC87D49A1849 * L_196 = V_0;
			ES3Reader_t2780AF8AA61DA2A817115CEF8612AC0E494D03C9 * L_197 = ___reader0;
			NullCheck((ES3Reader_t2780AF8AA61DA2A817115CEF8612AC0E494D03C9 *)L_197);
			int32_t L_198;
			L_198 = GenericVirtFuncInvoker0< int32_t >::Invoke(ES3Reader_Read_TisVRTextureUsage_t3C09DF3DD90B5620BC0AB6F8078DFEF4E607F645_m7DE3966E4815BB13132866CB005EEE5B90FF51C2_RuntimeMethod_var, (ES3Reader_t2780AF8AA61DA2A817115CEF8612AC0E494D03C9 *)L_197);
			NullCheck((RenderTexture_t5FE7A5B47EF962A0E8D7BEBA05E9FC87D49A1849 *)L_196);
			RenderTexture_set_vrUsage_m9AF7F60442E3B933FDF274D801EA074D1A5ECB71((RenderTexture_t5FE7A5B47EF962A0E8D7BEBA05E9FC87D49A1849 *)L_196, (int32_t)L_198, /*hidden argument*/NULL);
			// break;
			goto IL_0721;
		}

IL_06a3:
		{
			// instance.graphicsFormat = reader.Read<UnityEngine.Experimental.Rendering.GraphicsFormat>();
			RenderTexture_t5FE7A5B47EF962A0E8D7BEBA05E9FC87D49A1849 * L_199 = V_0;
			ES3Reader_t2780AF8AA61DA2A817115CEF8612AC0E494D03C9 * L_200 = ___reader0;
			NullCheck((ES3Reader_t2780AF8AA61DA2A817115CEF8612AC0E494D03C9 *)L_200);
			int32_t L_201;
			L_201 = GenericVirtFuncInvoker0< int32_t >::Invoke(ES3Reader_Read_TisGraphicsFormat_t07A3C024BC77B843C53A369D6FC02ABD27D2AB1D_mCBD36004B10F649C93215AB4717F6F0D7118BF7D_RuntimeMethod_var, (ES3Reader_t2780AF8AA61DA2A817115CEF8612AC0E494D03C9 *)L_200);
			NullCheck((RenderTexture_t5FE7A5B47EF962A0E8D7BEBA05E9FC87D49A1849 *)L_199);
			RenderTexture_set_graphicsFormat_mA378AAD8BD876EE96637FF0A80A2AFEA4D852FAB((RenderTexture_t5FE7A5B47EF962A0E8D7BEBA05E9FC87D49A1849 *)L_199, (int32_t)L_201, /*hidden argument*/NULL);
			// break;
			goto IL_0721;
		}

IL_06b1:
		{
			// instance.stencilFormat = reader.Read<UnityEngine.Experimental.Rendering.GraphicsFormat>();
			RenderTexture_t5FE7A5B47EF962A0E8D7BEBA05E9FC87D49A1849 * L_202 = V_0;
			ES3Reader_t2780AF8AA61DA2A817115CEF8612AC0E494D03C9 * L_203 = ___reader0;
			NullCheck((ES3Reader_t2780AF8AA61DA2A817115CEF8612AC0E494D03C9 *)L_203);
			int32_t L_204;
			L_204 = GenericVirtFuncInvoker0< int32_t >::Invoke(ES3Reader_Read_TisGraphicsFormat_t07A3C024BC77B843C53A369D6FC02ABD27D2AB1D_mCBD36004B10F649C93215AB4717F6F0D7118BF7D_RuntimeMethod_var, (ES3Reader_t2780AF8AA61DA2A817115CEF8612AC0E494D03C9 *)L_203);
			NullCheck((RenderTexture_t5FE7A5B47EF962A0E8D7BEBA05E9FC87D49A1849 *)L_202);
			RenderTexture_set_stencilFormat_m7C6E21FCDB7E786D403CFC9775105B050EFF19C7((RenderTexture_t5FE7A5B47EF962A0E8D7BEBA05E9FC87D49A1849 *)L_202, (int32_t)L_204, /*hidden argument*/NULL);
			// break;
			goto IL_0721;
		}

IL_06bf:
		{
			// instance.bindTextureMS = reader.Read<System.Boolean>(ES3Type_bool.Instance);
			RenderTexture_t5FE7A5B47EF962A0E8D7BEBA05E9FC87D49A1849 * L_205 = V_0;
			ES3Reader_t2780AF8AA61DA2A817115CEF8612AC0E494D03C9 * L_206 = ___reader0;
			IL2CPP_RUNTIME_CLASS_INIT(ES3Type_bool_t8F309F7B9CC735FF1DEE68081B6E3CAB367745F4_il2cpp_TypeInfo_var);
			ES3Type_t8FBECB7AE75168648B9524E0C2A38DAD4555421D * L_207 = ((ES3Type_bool_t8F309F7B9CC735FF1DEE68081B6E3CAB367745F4_StaticFields*)il2cpp_codegen_static_fields_for(ES3Type_bool_t8F309F7B9CC735FF1DEE68081B6E3CAB367745F4_il2cpp_TypeInfo_var))->get_Instance_12();
			NullCheck((ES3Reader_t2780AF8AA61DA2A817115CEF8612AC0E494D03C9 *)L_206);
			bool L_208;
			L_208 = GenericVirtFuncInvoker1< bool, ES3Type_t8FBECB7AE75168648B9524E0C2A38DAD4555421D * >::Invoke(ES3Reader_Read_TisBoolean_t07D1E3F34E4813023D64F584DFF7B34C9D922F37_mC6D1B158268FF9B97822FF9F5B37FB1723FEDA22_RuntimeMethod_var, (ES3Reader_t2780AF8AA61DA2A817115CEF8612AC0E494D03C9 *)L_206, (ES3Type_t8FBECB7AE75168648B9524E0C2A38DAD4555421D *)L_207);
			NullCheck((RenderTexture_t5FE7A5B47EF962A0E8D7BEBA05E9FC87D49A1849 *)L_205);
			RenderTexture_set_bindTextureMS_m6C26F6AB2DE8FE81BFCA60C936AA08EA7F1A7177((RenderTexture_t5FE7A5B47EF962A0E8D7BEBA05E9FC87D49A1849 *)L_205, (bool)L_208, /*hidden argument*/NULL);
			// break;
			goto IL_0721;
		}

IL_06d2:
		{
			// instance.useDynamicScale = reader.Read<System.Boolean>(ES3Type_bool.Instance);
			RenderTexture_t5FE7A5B47EF962A0E8D7BEBA05E9FC87D49A1849 * L_209 = V_0;
			ES3Reader_t2780AF8AA61DA2A817115CEF8612AC0E494D03C9 * L_210 = ___reader0;
			IL2CPP_RUNTIME_CLASS_INIT(ES3Type_bool_t8F309F7B9CC735FF1DEE68081B6E3CAB367745F4_il2cpp_TypeInfo_var);
			ES3Type_t8FBECB7AE75168648B9524E0C2A38DAD4555421D * L_211 = ((ES3Type_bool_t8F309F7B9CC735FF1DEE68081B6E3CAB367745F4_StaticFields*)il2cpp_codegen_static_fields_for(ES3Type_bool_t8F309F7B9CC735FF1DEE68081B6E3CAB367745F4_il2cpp_TypeInfo_var))->get_Instance_12();
			NullCheck((ES3Reader_t2780AF8AA61DA2A817115CEF8612AC0E494D03C9 *)L_210);
			bool L_212;
			L_212 = GenericVirtFuncInvoker1< bool, ES3Type_t8FBECB7AE75168648B9524E0C2A38DAD4555421D * >::Invoke(ES3Reader_Read_TisBoolean_t07D1E3F34E4813023D64F584DFF7B34C9D922F37_mC6D1B158268FF9B97822FF9F5B37FB1723FEDA22_RuntimeMethod_var, (ES3Reader_t2780AF8AA61DA2A817115CEF8612AC0E494D03C9 *)L_210, (ES3Type_t8FBECB7AE75168648B9524E0C2A38DAD4555421D *)L_211);
			NullCheck((RenderTexture_t5FE7A5B47EF962A0E8D7BEBA05E9FC87D49A1849 *)L_209);
			RenderTexture_set_useDynamicScale_m8F96571C7EDBEFAB9278E04A3F3EB67067A5AE29((RenderTexture_t5FE7A5B47EF962A0E8D7BEBA05E9FC87D49A1849 *)L_209, (bool)L_212, /*hidden argument*/NULL);
			// break;
			goto IL_0721;
		}

IL_06e5:
		{
			// UnityEngine.RenderTexture.streamingTextureForceLoadAll = reader.Read<System.Boolean>(ES3Type_bool.Instance);
			ES3Reader_t2780AF8AA61DA2A817115CEF8612AC0E494D03C9 * L_213 = ___reader0;
			IL2CPP_RUNTIME_CLASS_INIT(ES3Type_bool_t8F309F7B9CC735FF1DEE68081B6E3CAB367745F4_il2cpp_TypeInfo_var);
			ES3Type_t8FBECB7AE75168648B9524E0C2A38DAD4555421D * L_214 = ((ES3Type_bool_t8F309F7B9CC735FF1DEE68081B6E3CAB367745F4_StaticFields*)il2cpp_codegen_static_fields_for(ES3Type_bool_t8F309F7B9CC735FF1DEE68081B6E3CAB367745F4_il2cpp_TypeInfo_var))->get_Instance_12();
			NullCheck((ES3Reader_t2780AF8AA61DA2A817115CEF8612AC0E494D03C9 *)L_213);
			bool L_215;
			L_215 = GenericVirtFuncInvoker1< bool, ES3Type_t8FBECB7AE75168648B9524E0C2A38DAD4555421D * >::Invoke(ES3Reader_Read_TisBoolean_t07D1E3F34E4813023D64F584DFF7B34C9D922F37_mC6D1B158268FF9B97822FF9F5B37FB1723FEDA22_RuntimeMethod_var, (ES3Reader_t2780AF8AA61DA2A817115CEF8612AC0E494D03C9 *)L_213, (ES3Type_t8FBECB7AE75168648B9524E0C2A38DAD4555421D *)L_214);
			IL2CPP_RUNTIME_CLASS_INIT(Texture_t9FE0218A1EEDF266E8C85879FE123265CACC95AE_il2cpp_TypeInfo_var);
			Texture_set_streamingTextureForceLoadAll_m325117C0830BB9B4316CF41CEE045759FC52B7A3((bool)L_215, /*hidden argument*/NULL);
			// break;
			goto IL_0721;
		}

IL_06f7:
		{
			// UnityEngine.RenderTexture.streamingTextureDiscardUnusedMips = reader.Read<System.Boolean>(ES3Type_bool.Instance);
			ES3Reader_t2780AF8AA61DA2A817115CEF8612AC0E494D03C9 * L_216 = ___reader0;
			IL2CPP_RUNTIME_CLASS_INIT(ES3Type_bool_t8F309F7B9CC735FF1DEE68081B6E3CAB367745F4_il2cpp_TypeInfo_var);
			ES3Type_t8FBECB7AE75168648B9524E0C2A38DAD4555421D * L_217 = ((ES3Type_bool_t8F309F7B9CC735FF1DEE68081B6E3CAB367745F4_StaticFields*)il2cpp_codegen_static_fields_for(ES3Type_bool_t8F309F7B9CC735FF1DEE68081B6E3CAB367745F4_il2cpp_TypeInfo_var))->get_Instance_12();
			NullCheck((ES3Reader_t2780AF8AA61DA2A817115CEF8612AC0E494D03C9 *)L_216);
			bool L_218;
			L_218 = GenericVirtFuncInvoker1< bool, ES3Type_t8FBECB7AE75168648B9524E0C2A38DAD4555421D * >::Invoke(ES3Reader_Read_TisBoolean_t07D1E3F34E4813023D64F584DFF7B34C9D922F37_mC6D1B158268FF9B97822FF9F5B37FB1723FEDA22_RuntimeMethod_var, (ES3Reader_t2780AF8AA61DA2A817115CEF8612AC0E494D03C9 *)L_216, (ES3Type_t8FBECB7AE75168648B9524E0C2A38DAD4555421D *)L_217);
			IL2CPP_RUNTIME_CLASS_INIT(Texture_t9FE0218A1EEDF266E8C85879FE123265CACC95AE_il2cpp_TypeInfo_var);
			Texture_set_streamingTextureDiscardUnusedMips_mE184CE016A8E0319B437D34E0DB61962CE17F5DC((bool)L_218, /*hidden argument*/NULL);
			// break;
			goto IL_0721;
		}

IL_0709:
		{
			// UnityEngine.RenderTexture.allowThreadedTextureCreation = reader.Read<System.Boolean>(ES3Type_bool.Instance);
			ES3Reader_t2780AF8AA61DA2A817115CEF8612AC0E494D03C9 * L_219 = ___reader0;
			IL2CPP_RUNTIME_CLASS_INIT(ES3Type_bool_t8F309F7B9CC735FF1DEE68081B6E3CAB367745F4_il2cpp_TypeInfo_var);
			ES3Type_t8FBECB7AE75168648B9524E0C2A38DAD4555421D * L_220 = ((ES3Type_bool_t8F309F7B9CC735FF1DEE68081B6E3CAB367745F4_StaticFields*)il2cpp_codegen_static_fields_for(ES3Type_bool_t8F309F7B9CC735FF1DEE68081B6E3CAB367745F4_il2cpp_TypeInfo_var))->get_Instance_12();
			NullCheck((ES3Reader_t2780AF8AA61DA2A817115CEF8612AC0E494D03C9 *)L_219);
			bool L_221;
			L_221 = GenericVirtFuncInvoker1< bool, ES3Type_t8FBECB7AE75168648B9524E0C2A38DAD4555421D * >::Invoke(ES3Reader_Read_TisBoolean_t07D1E3F34E4813023D64F584DFF7B34C9D922F37_mC6D1B158268FF9B97822FF9F5B37FB1723FEDA22_RuntimeMethod_var, (ES3Reader_t2780AF8AA61DA2A817115CEF8612AC0E494D03C9 *)L_219, (ES3Type_t8FBECB7AE75168648B9524E0C2A38DAD4555421D *)L_220);
			IL2CPP_RUNTIME_CLASS_INIT(Texture_t9FE0218A1EEDF266E8C85879FE123265CACC95AE_il2cpp_TypeInfo_var);
			Texture_set_allowThreadedTextureCreation_m84D29394912B9CE876023963426256CBEB15A52E((bool)L_221, /*hidden argument*/NULL);
			// break;
			goto IL_0721;
		}

IL_071b:
		{
			// reader.Skip();
			ES3Reader_t2780AF8AA61DA2A817115CEF8612AC0E494D03C9 * L_222 = ___reader0;
			NullCheck((ES3Reader_t2780AF8AA61DA2A817115CEF8612AC0E494D03C9 *)L_222);
			VirtActionInvoker0::Invoke(41 /* System.Void ES3Reader::Skip() */, (ES3Reader_t2780AF8AA61DA2A817115CEF8612AC0E494D03C9 *)L_222);
		}

IL_0721:
		{
			// foreach (string propertyName in reader.Properties)
			RuntimeObject* L_223 = V_1;
			NullCheck((RuntimeObject*)L_223);
			bool L_224;
			L_224 = InterfaceFuncInvoker0< bool >::Invoke(0 /* System.Boolean System.Collections.IEnumerator::MoveNext() */, IEnumerator_t5956F3AFB7ECF1117E3BC5890E7FC7B7F7A04105_il2cpp_TypeInfo_var, (RuntimeObject*)L_223);
			if (L_224)
			{
				goto IL_0018;
			}
		}

IL_072c:
		{
			IL2CPP_LEAVE(0x742, FINALLY_072e);
		}
	} // end try (depth: 1)
	catch(Il2CppExceptionWrapper& e)
	{
		__last_unhandled_exception = (Exception_t *)e.ex;
		goto FINALLY_072e;
	}

FINALLY_072e:
	{ // begin finally (depth: 1)
		{
			RuntimeObject* L_225 = V_1;
			V_4 = (RuntimeObject*)((RuntimeObject*)IsInst((RuntimeObject*)L_225, IDisposable_t099785737FC6A1E3699919A94109383715A8D807_il2cpp_TypeInfo_var));
			RuntimeObject* L_226 = V_4;
			if (!L_226)
			{
				goto IL_0741;
			}
		}

IL_073a:
		{
			RuntimeObject* L_227 = V_4;
			NullCheck((RuntimeObject*)L_227);
			InterfaceActionInvoker0::Invoke(0 /* System.Void System.IDisposable::Dispose() */, IDisposable_t099785737FC6A1E3699919A94109383715A8D807_il2cpp_TypeInfo_var, (RuntimeObject*)L_227);
		}

IL_0741:
		{
			IL2CPP_END_FINALLY(1838)
		}
	} // end finally (depth: 1)
	IL2CPP_CLEANUP(1838)
	{
		IL2CPP_RETHROW_IF_UNHANDLED(Exception_t *)
		IL2CPP_JUMP_TBL(0x742, IL_0742)
	}

IL_0742:
	{
		// }
		return;
	}
}
// System.Void ES3Types.ES3Type_RenderTexture::ReadObject<UnityEngine.ParticleSystem/LimitVelocityOverLifetimeModule>(ES3Reader,System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ES3Type_RenderTexture_ReadObject_TisLimitVelocityOverLifetimeModule_tA8F1AC2538B089795E58CC7AEC7E8D9E60B5669C_mC1A6F20D7FDD06211643F6C1CE617D85A3DC602A_gshared (ES3Type_RenderTexture_t7B14573C56809AFDC0A1C481D6B61E2146DEF194 * __this, ES3Reader_t2780AF8AA61DA2A817115CEF8612AC0E494D03C9 * ___reader0, RuntimeObject * ___obj1, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ES3Reader_Read_TisAnisotropicFiltering_tAC3D1448B262D5869946CD1CDD2C8DAE3A7A537B_mAF1268AAC3E461D6E0604A19FAF0325873B6EC8A_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ES3Reader_Read_TisBoolean_t07D1E3F34E4813023D64F584DFF7B34C9D922F37_mC6D1B158268FF9B97822FF9F5B37FB1723FEDA22_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ES3Reader_Read_TisFilterMode_tE90A08FD96A142C761463D65E524BCDBFEEE3D19_m9819C2A442797B4060B0D9A80CFA96CFD6102839_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ES3Reader_Read_TisGraphicsFormat_t07A3C024BC77B843C53A369D6FC02ABD27D2AB1D_mCBD36004B10F649C93215AB4717F6F0D7118BF7D_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ES3Reader_Read_TisInt32_tFDE5F8CD43D10453F6A2E0C77FE48C6CC7009046_m2B74AA6627F5B1D21171D56C42F71DE5A7C1B4A6_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ES3Reader_Read_TisRenderTextureDescriptor_t67FF189E1F35AEB5D6C43A2D7103F3A8A8CA0B47_m427886ADAAF96C7BA9BD423544128494F96D69E7_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ES3Reader_Read_TisRenderTextureFormat_t8371287102ED67772EF78229CF4AB9D38C2CD626_mE6358E03407F5C15B58B292C79D4770DE3FAC95A_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ES3Reader_Read_TisRenderTextureMemoryless_t37547D68C2186D2650440F719302CDA4A3BB7F67_m3A980BA15AADBBB8393C3BC88CE17EEDDC89B027_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ES3Reader_Read_TisSingle_tE07797BA3C98D4CA9B5A19413C19A76688AB899E_m4A0416374498BDA042B8EB21E49B72326D6CE5F4_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ES3Reader_Read_TisString_t_m883861F3B58239392073ABF39876826EEB87DF9C_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ES3Reader_Read_TisTextureDimension_tADCCB7C1D30E4D1182651BA9094B4DE61B63EACC_m19EAA3B93D10636C17A62A3D8437349223CFD988_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ES3Reader_Read_TisTextureWrapMode_t86DDA8206E4AA784A1218D0DE3C5F6826D7549EB_m7926E449CD0B8BD56E5BF145DD0CCFE1C567F107_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ES3Reader_Read_TisVRTextureUsage_t3C09DF3DD90B5620BC0AB6F8078DFEF4E607F645_m7DE3966E4815BB13132866CB005EEE5B90FF51C2_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ES3Type_bool_t8F309F7B9CC735FF1DEE68081B6E3CAB367745F4_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ES3Type_float_tF86B773C86731BD9AD79448B860BBB178FE77644_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ES3Type_int_tF64C15D40AD0CC7C15BCD1CEC3C5C6BF837BD167_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ES3Type_string_tC47BFBE3CC816F3C70B51558C68F0C6470C5EFE5_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IDisposable_t099785737FC6A1E3699919A94109383715A8D807_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IEnumerator_t5956F3AFB7ECF1117E3BC5890E7FC7B7F7A04105_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&RenderTexture_t5FE7A5B47EF962A0E8D7BEBA05E9FC87D49A1849_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&String_t_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Texture_t9FE0218A1EEDF266E8C85879FE123265CACC95AE_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral201D9D00BB60DC2318D21CF9902290EFE255D5DC);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral2ADFC3FFF7C52D554F0435A348A5345C9FCD7FF8);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral2E201D1972661439FD3C8523C55723E7E9BCC7DA);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral2EE7B6B0E37E14930BBA497867139BFD0617CE04);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral3A04F86957625CB28FA670EECF997E6BAD45BBE7);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral3BC15E3C2F40466B2DC85C4776499817B8306CBB);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral3F1522C8DB7943F2AE3AA1563D3AC25D9C8B93D1);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral53D3413057D7E52F44470A335C590748745352B1);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral647E0FB2B5E859CC4BD7C73623B82C8EFABA2563);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral65B008F04EC40A696263EF679CF274BD10999A5D);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral71C5F9C3E2F3C81C5BBC7FD313F6938654E61138);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral75C9716749EA210206E3467390B7A11F3F33DDFA);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral7606720A7AEF5939309A8E4FCB8274252FA3D7BF);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral7A4A6E2A7090298F814A9D44C89F8634249BEF07);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral7FF61C3A55BCA1287974D8740F945250B3F0F084);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral83AC9669A9053DD15B9F2E82D2CE2369EFE131BA);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral95F57476C0AA778364404E7CCCD7499BF1BF3757);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral9AB5ADF8A8A53110245466F7C226F7935F5FE95F);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralB49A1DF483856544CEC6018E8C944DB6E16A8D57);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralBA9362732D25B1644B7D8DEC5DF6F036A4A66DE5);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralC959D767B7F0BD38D9DA8A64A4750C3A0972E2A0);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralCD44AC57FFE6CAC7824F4CAA223F1BB8B4CB0D73);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralCE18B047107AA23D1AA9B2ED32D316148E02655F);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralEA8FBF382D8AC9EDB8FFC14A350641B987F5C631);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralEBF5FE0CBF3EEA67902EEA700B7216E3DB0D8E84);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralECAEEB225F8689DE45DEB4FA21CE34E1960B1B50);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralF23E83744C9D6FC70D71B723AAED8006D6780BCB);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralF2AF7DD0BFF41B7B35037F018DAABE7DCF357A7B);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralF38CFAE6A91D072D4453C29FF44D81D459A582F1);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralF3FA58C10BBB9830102605E24AF89DC619908DFA);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralF9EE582B77C320A1F6A3DF72205857C4248BAC79);
		s_Il2CppMethodInitialized = true;
	}
	RenderTexture_t5FE7A5B47EF962A0E8D7BEBA05E9FC87D49A1849 * V_0 = NULL;
	RuntimeObject* V_1 = NULL;
	String_t* V_2 = NULL;
	uint32_t V_3 = 0;
	RuntimeObject* V_4 = NULL;
	Exception_t * __last_unhandled_exception = 0;
	il2cpp::utils::ExceptionSupportStack<int32_t, 1> __leave_targets;
	{
		// var instance = (UnityEngine.RenderTexture)obj;
		RuntimeObject * L_0 = ___obj1;
		V_0 = (RenderTexture_t5FE7A5B47EF962A0E8D7BEBA05E9FC87D49A1849 *)((RenderTexture_t5FE7A5B47EF962A0E8D7BEBA05E9FC87D49A1849 *)Castclass((RuntimeObject*)L_0, RenderTexture_t5FE7A5B47EF962A0E8D7BEBA05E9FC87D49A1849_il2cpp_TypeInfo_var));
		// foreach (string propertyName in reader.Properties)
		ES3Reader_t2780AF8AA61DA2A817115CEF8612AC0E494D03C9 * L_1 = ___reader0;
		NullCheck((ES3Reader_t2780AF8AA61DA2A817115CEF8612AC0E494D03C9 *)L_1);
		ES3ReaderPropertyEnumerator_tFC854F4BE72BFA234682EB1909D92457534A979D * L_2;
		L_2 = VirtFuncInvoker0< ES3ReaderPropertyEnumerator_tFC854F4BE72BFA234682EB1909D92457534A979D * >::Invoke(39 /* ES3Reader/ES3ReaderPropertyEnumerator ES3Reader::get_Properties() */, (ES3Reader_t2780AF8AA61DA2A817115CEF8612AC0E494D03C9 *)L_1);
		NullCheck((ES3ReaderPropertyEnumerator_tFC854F4BE72BFA234682EB1909D92457534A979D *)L_2);
		RuntimeObject* L_3;
		L_3 = ES3ReaderPropertyEnumerator_GetEnumerator_m6C61168655E3736E7847E5CB1CD9BC6B48442FD4((ES3ReaderPropertyEnumerator_tFC854F4BE72BFA234682EB1909D92457534A979D *)L_2, /*hidden argument*/NULL);
		V_1 = (RuntimeObject*)L_3;
	}

IL_0013:
	try
	{ // begin try (depth: 1)
		{
			goto IL_0721;
		}

IL_0018:
		{
			// foreach (string propertyName in reader.Properties)
			RuntimeObject* L_4 = V_1;
			NullCheck((RuntimeObject*)L_4);
			RuntimeObject * L_5;
			L_5 = InterfaceFuncInvoker0< RuntimeObject * >::Invoke(1 /* System.Object System.Collections.IEnumerator::get_Current() */, IEnumerator_t5956F3AFB7ECF1117E3BC5890E7FC7B7F7A04105_il2cpp_TypeInfo_var, (RuntimeObject*)L_4);
			V_2 = (String_t*)((String_t*)Castclass((RuntimeObject*)L_5, String_t_il2cpp_TypeInfo_var));
			String_t* L_6 = V_2;
			if (!L_6)
			{
				goto IL_071b;
			}
		}

IL_002a:
		{
			String_t* L_7 = V_2;
			uint32_t L_8;
			L_8 = U3CPrivateImplementationDetailsU3E_ComputeStringHash_m3ADC1F612F9EE3DD518E6F0023A0DE0EE2B120A7((String_t*)L_7, /*hidden argument*/NULL);
			V_3 = (uint32_t)L_8;
			uint32_t L_9 = V_3;
			if ((!(((uint32_t)L_9) <= ((uint32_t)((int32_t)1508062721)))))
			{
				goto IL_0134;
			}
		}

IL_003c:
		{
			uint32_t L_10 = V_3;
			if ((!(((uint32_t)L_10) <= ((uint32_t)((int32_t)698754697)))))
			{
				goto IL_00b0;
			}
		}

IL_0044:
		{
			uint32_t L_11 = V_3;
			if ((!(((uint32_t)L_11) <= ((uint32_t)((int32_t)472844700)))))
			{
				goto IL_0072;
			}
		}

IL_004c:
		{
			uint32_t L_12 = V_3;
			if ((((int32_t)L_12) == ((int32_t)((int32_t)87590155))))
			{
				goto IL_043c;
			}
		}

IL_0057:
		{
			uint32_t L_13 = V_3;
			if ((((int32_t)L_13) == ((int32_t)((int32_t)301255720))))
			{
				goto IL_02d7;
			}
		}

IL_0062:
		{
			uint32_t L_14 = V_3;
			if ((((int32_t)L_14) == ((int32_t)((int32_t)472844700))))
			{
				goto IL_0283;
			}
		}

IL_006d:
		{
			goto IL_071b;
		}

IL_0072:
		{
			uint32_t L_15 = V_3;
			if ((!(((uint32_t)L_15) <= ((uint32_t)((int32_t)549791583)))))
			{
				goto IL_0095;
			}
		}

IL_007a:
		{
			uint32_t L_16 = V_3;
			if ((((int32_t)L_16) == ((int32_t)((int32_t)533013964))))
			{
				goto IL_03a9;
			}
		}

IL_0085:
		{
			uint32_t L_17 = V_3;
			if ((((int32_t)L_17) == ((int32_t)((int32_t)549791583))))
			{
				goto IL_03be;
			}
		}

IL_0090:
		{
			goto IL_071b;
		}

IL_0095:
		{
			uint32_t L_18 = V_3;
			if ((((int32_t)L_18) == ((int32_t)((int32_t)583346821))))
			{
				goto IL_0394;
			}
		}

IL_00a0:
		{
			uint32_t L_19 = V_3;
			if ((((int32_t)L_19) == ((int32_t)((int32_t)698754697))))
			{
				goto IL_02ec;
			}
		}

IL_00ab:
		{
			goto IL_071b;
		}

IL_00b0:
		{
			uint32_t L_20 = V_3;
			if ((!(((uint32_t)L_20) <= ((uint32_t)((int32_t)1235622516)))))
			{
				goto IL_00f6;
			}
		}

IL_00b8:
		{
			uint32_t L_21 = V_3;
			if ((!(((uint32_t)L_21) <= ((uint32_t)((int32_t)740612720)))))
			{
				goto IL_00db;
			}
		}

IL_00c0:
		{
			uint32_t L_22 = V_3;
			if ((((int32_t)L_22) == ((int32_t)((int32_t)705796271))))
			{
				goto IL_0316;
			}
		}

IL_00cb:
		{
			uint32_t L_23 = V_3;
			if ((((int32_t)L_23) == ((int32_t)((int32_t)740612720))))
			{
				goto IL_03d3;
			}
		}

IL_00d6:
		{
			goto IL_071b;
		}

IL_00db:
		{
			uint32_t L_24 = V_3;
			if ((((int32_t)L_24) == ((int32_t)((int32_t)1059843136))))
			{
				goto IL_0340;
			}
		}

IL_00e6:
		{
			uint32_t L_25 = V_3;
			if ((((int32_t)L_25) == ((int32_t)((int32_t)1235622516))))
			{
				goto IL_036a;
			}
		}

IL_00f1:
		{
			goto IL_071b;
		}

IL_00f6:
		{
			uint32_t L_26 = V_3;
			if ((!(((uint32_t)L_26) <= ((uint32_t)((int32_t)1320492961)))))
			{
				goto IL_0119;
			}
		}

IL_00fe:
		{
			uint32_t L_27 = V_3;
			if ((((int32_t)L_27) == ((int32_t)((int32_t)1310955452))))
			{
				goto IL_0490;
			}
		}

IL_0109:
		{
			uint32_t L_28 = V_3;
			if ((((int32_t)L_28) == ((int32_t)((int32_t)1320492961))))
			{
				goto IL_047b;
			}
		}

IL_0114:
		{
			goto IL_071b;
		}

IL_0119:
		{
			uint32_t L_29 = V_3;
			if ((((int32_t)L_29) == ((int32_t)((int32_t)1458352709))))
			{
				goto IL_0466;
			}
		}

IL_0124:
		{
			uint32_t L_30 = V_3;
			if ((((int32_t)L_30) == ((int32_t)((int32_t)1508062721))))
			{
				goto IL_04a5;
			}
		}

IL_012f:
		{
			goto IL_071b;
		}

IL_0134:
		{
			uint32_t L_31 = V_3;
			if ((!(((uint32_t)L_31) <= ((uint32_t)((int32_t)-1444332543)))))
			{
				goto IL_01c3;
			}
		}

IL_013f:
		{
			uint32_t L_32 = V_3;
			if ((!(((uint32_t)L_32) <= ((uint32_t)((int32_t)2129631044)))))
			{
				goto IL_0185;
			}
		}

IL_0147:
		{
			uint32_t L_33 = V_3;
			if ((!(((uint32_t)L_33) <= ((uint32_t)((int32_t)1640355324)))))
			{
				goto IL_016a;
			}
		}

IL_014f:
		{
			uint32_t L_34 = V_3;
			if ((((int32_t)L_34) == ((int32_t)((int32_t)1560124071))))
			{
				goto IL_04ba;
			}
		}

IL_015a:
		{
			uint32_t L_35 = V_3;
			if ((((int32_t)L_35) == ((int32_t)((int32_t)1640355324))))
			{
				goto IL_0451;
			}
		}

IL_0165:
		{
			goto IL_071b;
		}

IL_016a:
		{
			uint32_t L_36 = V_3;
			if ((((int32_t)L_36) == ((int32_t)((int32_t)1728801507))))
			{
				goto IL_026e;
			}
		}

IL_0175:
		{
			uint32_t L_37 = V_3;
			if ((((int32_t)L_37) == ((int32_t)((int32_t)2129631044))))
			{
				goto IL_03fd;
			}
		}

IL_0180:
		{
			goto IL_071b;
		}

IL_0185:
		{
			uint32_t L_38 = V_3;
			if ((!(((uint32_t)L_38) <= ((uint32_t)((int32_t)-1786286561)))))
			{
				goto IL_01a8;
			}
		}

IL_018d:
		{
			uint32_t L_39 = V_3;
			if ((((int32_t)L_39) == ((int32_t)((int32_t)-1925595674))))
			{
				goto IL_0412;
			}
		}

IL_0198:
		{
			uint32_t L_40 = V_3;
			if ((((int32_t)L_40) == ((int32_t)((int32_t)-1786286561))))
			{
				goto IL_0244;
			}
		}

IL_01a3:
		{
			goto IL_071b;
		}

IL_01a8:
		{
			uint32_t L_41 = V_3;
			if ((((int32_t)L_41) == ((int32_t)((int32_t)-1522491664))))
			{
				goto IL_0298;
			}
		}

IL_01b3:
		{
			uint32_t L_42 = V_3;
			if ((((int32_t)L_42) == ((int32_t)((int32_t)-1444332543))))
			{
				goto IL_0355;
			}
		}

IL_01be:
		{
			goto IL_071b;
		}

IL_01c3:
		{
			uint32_t L_43 = V_3;
			if ((!(((uint32_t)L_43) <= ((uint32_t)((int32_t)-558361902)))))
			{
				goto IL_0206;
			}
		}

IL_01cb:
		{
			uint32_t L_44 = V_3;
			if ((!(((uint32_t)L_44) <= ((uint32_t)((int32_t)-1180859054)))))
			{
				goto IL_01ee;
			}
		}

IL_01d3:
		{
			uint32_t L_45 = V_3;
			if ((((int32_t)L_45) == ((int32_t)((int32_t)-1335745110))))
			{
				goto IL_02c2;
			}
		}

IL_01de:
		{
			uint32_t L_46 = V_3;
			if ((((int32_t)L_46) == ((int32_t)((int32_t)-1180859054))))
			{
				goto IL_02ad;
			}
		}

IL_01e9:
		{
			goto IL_071b;
		}

IL_01ee:
		{
			uint32_t L_47 = V_3;
			if ((((int32_t)L_47) == ((int32_t)((int32_t)-708986046))))
			{
				goto IL_0259;
			}
		}

IL_01f6:
		{
			uint32_t L_48 = V_3;
			if ((((int32_t)L_48) == ((int32_t)((int32_t)-558361902))))
			{
				goto IL_037f;
			}
		}

IL_0201:
		{
			goto IL_071b;
		}

IL_0206:
		{
			uint32_t L_49 = V_3;
			if ((!(((uint32_t)L_49) <= ((uint32_t)((int32_t)-255211260)))))
			{
				goto IL_0229;
			}
		}

IL_020e:
		{
			uint32_t L_50 = V_3;
			if ((((int32_t)L_50) == ((int32_t)((int32_t)-345285761))))
			{
				goto IL_03e8;
			}
		}

IL_0219:
		{
			uint32_t L_51 = V_3;
			if ((((int32_t)L_51) == ((int32_t)((int32_t)-255211260))))
			{
				goto IL_0427;
			}
		}

IL_0224:
		{
			goto IL_071b;
		}

IL_0229:
		{
			uint32_t L_52 = V_3;
			if ((((int32_t)L_52) == ((int32_t)((int32_t)-42086080))))
			{
				goto IL_0301;
			}
		}

IL_0234:
		{
			uint32_t L_53 = V_3;
			if ((((int32_t)L_53) == ((int32_t)((int32_t)-25846038))))
			{
				goto IL_032b;
			}
		}

IL_023f:
		{
			goto IL_071b;
		}

IL_0244:
		{
			String_t* L_54 = V_2;
			bool L_55;
			L_55 = String_op_Equality_m50B3548E4AC232558190B0052877B290AA1D436A((String_t*)L_54, (String_t*)_stringLiteralEBF5FE0CBF3EEA67902EEA700B7216E3DB0D8E84, /*hidden argument*/NULL);
			if (L_55)
			{
				goto IL_04cf;
			}
		}

IL_0254:
		{
			goto IL_071b;
		}

IL_0259:
		{
			String_t* L_56 = V_2;
			bool L_57;
			L_57 = String_op_Equality_m50B3548E4AC232558190B0052877B290AA1D436A((String_t*)L_56, (String_t*)_stringLiteral647E0FB2B5E859CC4BD7C73623B82C8EFABA2563, /*hidden argument*/NULL);
			if (L_57)
			{
				goto IL_04e5;
			}
		}

IL_0269:
		{
			goto IL_071b;
		}

IL_026e:
		{
			String_t* L_58 = V_2;
			bool L_59;
			L_59 = String_op_Equality_m50B3548E4AC232558190B0052877B290AA1D436A((String_t*)L_58, (String_t*)_stringLiteralF9EE582B77C320A1F6A3DF72205857C4248BAC79, /*hidden argument*/NULL);
			if (L_59)
			{
				goto IL_04fb;
			}
		}

IL_027e:
		{
			goto IL_071b;
		}

IL_0283:
		{
			String_t* L_60 = V_2;
			bool L_61;
			L_61 = String_op_Equality_m50B3548E4AC232558190B0052877B290AA1D436A((String_t*)L_60, (String_t*)_stringLiteral53D3413057D7E52F44470A335C590748745352B1, /*hidden argument*/NULL);
			if (L_61)
			{
				goto IL_050c;
			}
		}

IL_0293:
		{
			goto IL_071b;
		}

IL_0298:
		{
			String_t* L_62 = V_2;
			bool L_63;
			L_63 = String_op_Equality_m50B3548E4AC232558190B0052877B290AA1D436A((String_t*)L_62, (String_t*)_stringLiteralC959D767B7F0BD38D9DA8A64A4750C3A0972E2A0, /*hidden argument*/NULL);
			if (L_63)
			{
				goto IL_0522;
			}
		}

IL_02a8:
		{
			goto IL_071b;
		}

IL_02ad:
		{
			String_t* L_64 = V_2;
			bool L_65;
			L_65 = String_op_Equality_m50B3548E4AC232558190B0052877B290AA1D436A((String_t*)L_64, (String_t*)_stringLiteral75C9716749EA210206E3467390B7A11F3F33DDFA, /*hidden argument*/NULL);
			if (L_65)
			{
				goto IL_0533;
			}
		}

IL_02bd:
		{
			goto IL_071b;
		}

IL_02c2:
		{
			String_t* L_66 = V_2;
			bool L_67;
			L_67 = String_op_Equality_m50B3548E4AC232558190B0052877B290AA1D436A((String_t*)L_66, (String_t*)_stringLiteral7606720A7AEF5939309A8E4FCB8274252FA3D7BF, /*hidden argument*/NULL);
			if (L_67)
			{
				goto IL_0544;
			}
		}

IL_02d2:
		{
			goto IL_071b;
		}

IL_02d7:
		{
			String_t* L_68 = V_2;
			bool L_69;
			L_69 = String_op_Equality_m50B3548E4AC232558190B0052877B290AA1D436A((String_t*)L_68, (String_t*)_stringLiteral71C5F9C3E2F3C81C5BBC7FD313F6938654E61138, /*hidden argument*/NULL);
			if (L_69)
			{
				goto IL_055a;
			}
		}

IL_02e7:
		{
			goto IL_071b;
		}

IL_02ec:
		{
			String_t* L_70 = V_2;
			bool L_71;
			L_71 = String_op_Equality_m50B3548E4AC232558190B0052877B290AA1D436A((String_t*)L_70, (String_t*)_stringLiteral3F1522C8DB7943F2AE3AA1563D3AC25D9C8B93D1, /*hidden argument*/NULL);
			if (L_71)
			{
				goto IL_0570;
			}
		}

IL_02fc:
		{
			goto IL_071b;
		}

IL_0301:
		{
			String_t* L_72 = V_2;
			bool L_73;
			L_73 = String_op_Equality_m50B3548E4AC232558190B0052877B290AA1D436A((String_t*)L_72, (String_t*)_stringLiteralF23E83744C9D6FC70D71B723AAED8006D6780BCB, /*hidden argument*/NULL);
			if (L_73)
			{
				goto IL_0586;
			}
		}

IL_0311:
		{
			goto IL_071b;
		}

IL_0316:
		{
			String_t* L_74 = V_2;
			bool L_75;
			L_75 = String_op_Equality_m50B3548E4AC232558190B0052877B290AA1D436A((String_t*)L_74, (String_t*)_stringLiteralB49A1DF483856544CEC6018E8C944DB6E16A8D57, /*hidden argument*/NULL);
			if (L_75)
			{
				goto IL_059c;
			}
		}

IL_0326:
		{
			goto IL_071b;
		}

IL_032b:
		{
			String_t* L_76 = V_2;
			bool L_77;
			L_77 = String_op_Equality_m50B3548E4AC232558190B0052877B290AA1D436A((String_t*)L_76, (String_t*)_stringLiteral3A04F86957625CB28FA670EECF997E6BAD45BBE7, /*hidden argument*/NULL);
			if (L_77)
			{
				goto IL_05b2;
			}
		}

IL_033b:
		{
			goto IL_071b;
		}

IL_0340:
		{
			String_t* L_78 = V_2;
			bool L_79;
			L_79 = String_op_Equality_m50B3548E4AC232558190B0052877B290AA1D436A((String_t*)L_78, (String_t*)_stringLiteral7A4A6E2A7090298F814A9D44C89F8634249BEF07, /*hidden argument*/NULL);
			if (L_79)
			{
				goto IL_05c8;
			}
		}

IL_0350:
		{
			goto IL_071b;
		}

IL_0355:
		{
			String_t* L_80 = V_2;
			bool L_81;
			L_81 = String_op_Equality_m50B3548E4AC232558190B0052877B290AA1D436A((String_t*)L_80, (String_t*)_stringLiteralF3FA58C10BBB9830102605E24AF89DC619908DFA, /*hidden argument*/NULL);
			if (L_81)
			{
				goto IL_05d9;
			}
		}

IL_0365:
		{
			goto IL_071b;
		}

IL_036a:
		{
			String_t* L_82 = V_2;
			bool L_83;
			L_83 = String_op_Equality_m50B3548E4AC232558190B0052877B290AA1D436A((String_t*)L_82, (String_t*)_stringLiteralBA9362732D25B1644B7D8DEC5DF6F036A4A66DE5, /*hidden argument*/NULL);
			if (L_83)
			{
				goto IL_05ee;
			}
		}

IL_037a:
		{
			goto IL_071b;
		}

IL_037f:
		{
			String_t* L_84 = V_2;
			bool L_85;
			L_85 = String_op_Equality_m50B3548E4AC232558190B0052877B290AA1D436A((String_t*)L_84, (String_t*)_stringLiteral95F57476C0AA778364404E7CCCD7499BF1BF3757, /*hidden argument*/NULL);
			if (L_85)
			{
				goto IL_05fe;
			}
		}

IL_038f:
		{
			goto IL_071b;
		}

IL_0394:
		{
			String_t* L_86 = V_2;
			bool L_87;
			L_87 = String_op_Equality_m50B3548E4AC232558190B0052877B290AA1D436A((String_t*)L_86, (String_t*)_stringLiteral9AB5ADF8A8A53110245466F7C226F7935F5FE95F, /*hidden argument*/NULL);
			if (L_87)
			{
				goto IL_060f;
			}
		}

IL_03a4:
		{
			goto IL_071b;
		}

IL_03a9:
		{
			String_t* L_88 = V_2;
			bool L_89;
			L_89 = String_op_Equality_m50B3548E4AC232558190B0052877B290AA1D436A((String_t*)L_88, (String_t*)_stringLiteralEA8FBF382D8AC9EDB8FFC14A350641B987F5C631, /*hidden argument*/NULL);
			if (L_89)
			{
				goto IL_0620;
			}
		}

IL_03b9:
		{
			goto IL_071b;
		}

IL_03be:
		{
			String_t* L_90 = V_2;
			bool L_91;
			L_91 = String_op_Equality_m50B3548E4AC232558190B0052877B290AA1D436A((String_t*)L_90, (String_t*)_stringLiteral201D9D00BB60DC2318D21CF9902290EFE255D5DC, /*hidden argument*/NULL);
			if (L_91)
			{
				goto IL_0631;
			}
		}

IL_03ce:
		{
			goto IL_071b;
		}

IL_03d3:
		{
			String_t* L_92 = V_2;
			bool L_93;
			L_93 = String_op_Equality_m50B3548E4AC232558190B0052877B290AA1D436A((String_t*)L_92, (String_t*)_stringLiteral65B008F04EC40A696263EF679CF274BD10999A5D, /*hidden argument*/NULL);
			if (L_93)
			{
				goto IL_0642;
			}
		}

IL_03e3:
		{
			goto IL_071b;
		}

IL_03e8:
		{
			String_t* L_94 = V_2;
			bool L_95;
			L_95 = String_op_Equality_m50B3548E4AC232558190B0052877B290AA1D436A((String_t*)L_94, (String_t*)_stringLiteralF38CFAE6A91D072D4453C29FF44D81D459A582F1, /*hidden argument*/NULL);
			if (L_95)
			{
				goto IL_0653;
			}
		}

IL_03f8:
		{
			goto IL_071b;
		}

IL_03fd:
		{
			String_t* L_96 = V_2;
			bool L_97;
			L_97 = String_op_Equality_m50B3548E4AC232558190B0052877B290AA1D436A((String_t*)L_96, (String_t*)_stringLiteral3BC15E3C2F40466B2DC85C4776499817B8306CBB, /*hidden argument*/NULL);
			if (L_97)
			{
				goto IL_0669;
			}
		}

IL_040d:
		{
			goto IL_071b;
		}

IL_0412:
		{
			String_t* L_98 = V_2;
			bool L_99;
			L_99 = String_op_Equality_m50B3548E4AC232558190B0052877B290AA1D436A((String_t*)L_98, (String_t*)_stringLiteralCE18B047107AA23D1AA9B2ED32D316148E02655F, /*hidden argument*/NULL);
			if (L_99)
			{
				goto IL_067f;
			}
		}

IL_0422:
		{
			goto IL_071b;
		}

IL_0427:
		{
			String_t* L_100 = V_2;
			bool L_101;
			L_101 = String_op_Equality_m50B3548E4AC232558190B0052877B290AA1D436A((String_t*)L_100, (String_t*)_stringLiteral83AC9669A9053DD15B9F2E82D2CE2369EFE131BA, /*hidden argument*/NULL);
			if (L_101)
			{
				goto IL_0695;
			}
		}

IL_0437:
		{
			goto IL_071b;
		}

IL_043c:
		{
			String_t* L_102 = V_2;
			bool L_103;
			L_103 = String_op_Equality_m50B3548E4AC232558190B0052877B290AA1D436A((String_t*)L_102, (String_t*)_stringLiteralECAEEB225F8689DE45DEB4FA21CE34E1960B1B50, /*hidden argument*/NULL);
			if (L_103)
			{
				goto IL_06a3;
			}
		}

IL_044c:
		{
			goto IL_071b;
		}

IL_0451:
		{
			String_t* L_104 = V_2;
			bool L_105;
			L_105 = String_op_Equality_m50B3548E4AC232558190B0052877B290AA1D436A((String_t*)L_104, (String_t*)_stringLiteral2EE7B6B0E37E14930BBA497867139BFD0617CE04, /*hidden argument*/NULL);
			if (L_105)
			{
				goto IL_06b1;
			}
		}

IL_0461:
		{
			goto IL_071b;
		}

IL_0466:
		{
			String_t* L_106 = V_2;
			bool L_107;
			L_107 = String_op_Equality_m50B3548E4AC232558190B0052877B290AA1D436A((String_t*)L_106, (String_t*)_stringLiteralF2AF7DD0BFF41B7B35037F018DAABE7DCF357A7B, /*hidden argument*/NULL);
			if (L_107)
			{
				goto IL_06bf;
			}
		}

IL_0476:
		{
			goto IL_071b;
		}

IL_047b:
		{
			String_t* L_108 = V_2;
			bool L_109;
			L_109 = String_op_Equality_m50B3548E4AC232558190B0052877B290AA1D436A((String_t*)L_108, (String_t*)_stringLiteral7FF61C3A55BCA1287974D8740F945250B3F0F084, /*hidden argument*/NULL);
			if (L_109)
			{
				goto IL_06d2;
			}
		}

IL_048b:
		{
			goto IL_071b;
		}

IL_0490:
		{
			String_t* L_110 = V_2;
			bool L_111;
			L_111 = String_op_Equality_m50B3548E4AC232558190B0052877B290AA1D436A((String_t*)L_110, (String_t*)_stringLiteral2ADFC3FFF7C52D554F0435A348A5345C9FCD7FF8, /*hidden argument*/NULL);
			if (L_111)
			{
				goto IL_06e5;
			}
		}

IL_04a0:
		{
			goto IL_071b;
		}

IL_04a5:
		{
			String_t* L_112 = V_2;
			bool L_113;
			L_113 = String_op_Equality_m50B3548E4AC232558190B0052877B290AA1D436A((String_t*)L_112, (String_t*)_stringLiteral2E201D1972661439FD3C8523C55723E7E9BCC7DA, /*hidden argument*/NULL);
			if (L_113)
			{
				goto IL_06f7;
			}
		}

IL_04b5:
		{
			goto IL_071b;
		}

IL_04ba:
		{
			String_t* L_114 = V_2;
			bool L_115;
			L_115 = String_op_Equality_m50B3548E4AC232558190B0052877B290AA1D436A((String_t*)L_114, (String_t*)_stringLiteralCD44AC57FFE6CAC7824F4CAA223F1BB8B4CB0D73, /*hidden argument*/NULL);
			if (L_115)
			{
				goto IL_0709;
			}
		}

IL_04ca:
		{
			goto IL_071b;
		}

IL_04cf:
		{
			// instance.width = reader.Read<System.Int32>(ES3Type_int.Instance);
			RenderTexture_t5FE7A5B47EF962A0E8D7BEBA05E9FC87D49A1849 * L_116 = V_0;
			ES3Reader_t2780AF8AA61DA2A817115CEF8612AC0E494D03C9 * L_117 = ___reader0;
			IL2CPP_RUNTIME_CLASS_INIT(ES3Type_int_tF64C15D40AD0CC7C15BCD1CEC3C5C6BF837BD167_il2cpp_TypeInfo_var);
			ES3Type_t8FBECB7AE75168648B9524E0C2A38DAD4555421D * L_118 = ((ES3Type_int_tF64C15D40AD0CC7C15BCD1CEC3C5C6BF837BD167_StaticFields*)il2cpp_codegen_static_fields_for(ES3Type_int_tF64C15D40AD0CC7C15BCD1CEC3C5C6BF837BD167_il2cpp_TypeInfo_var))->get_Instance_12();
			NullCheck((ES3Reader_t2780AF8AA61DA2A817115CEF8612AC0E494D03C9 *)L_117);
			int32_t L_119;
			L_119 = GenericVirtFuncInvoker1< int32_t, ES3Type_t8FBECB7AE75168648B9524E0C2A38DAD4555421D * >::Invoke(ES3Reader_Read_TisInt32_tFDE5F8CD43D10453F6A2E0C77FE48C6CC7009046_m2B74AA6627F5B1D21171D56C42F71DE5A7C1B4A6_RuntimeMethod_var, (ES3Reader_t2780AF8AA61DA2A817115CEF8612AC0E494D03C9 *)L_117, (ES3Type_t8FBECB7AE75168648B9524E0C2A38DAD4555421D *)L_118);
			NullCheck((Texture_t9FE0218A1EEDF266E8C85879FE123265CACC95AE *)L_116);
			VirtActionInvoker1< int32_t >::Invoke(6 /* System.Void UnityEngine.Texture::set_width(System.Int32) */, (Texture_t9FE0218A1EEDF266E8C85879FE123265CACC95AE *)L_116, (int32_t)L_119);
			// break;
			goto IL_0721;
		}

IL_04e5:
		{
			// instance.height = reader.Read<System.Int32>(ES3Type_int.Instance);
			RenderTexture_t5FE7A5B47EF962A0E8D7BEBA05E9FC87D49A1849 * L_120 = V_0;
			ES3Reader_t2780AF8AA61DA2A817115CEF8612AC0E494D03C9 * L_121 = ___reader0;
			IL2CPP_RUNTIME_CLASS_INIT(ES3Type_int_tF64C15D40AD0CC7C15BCD1CEC3C5C6BF837BD167_il2cpp_TypeInfo_var);
			ES3Type_t8FBECB7AE75168648B9524E0C2A38DAD4555421D * L_122 = ((ES3Type_int_tF64C15D40AD0CC7C15BCD1CEC3C5C6BF837BD167_StaticFields*)il2cpp_codegen_static_fields_for(ES3Type_int_tF64C15D40AD0CC7C15BCD1CEC3C5C6BF837BD167_il2cpp_TypeInfo_var))->get_Instance_12();
			NullCheck((ES3Reader_t2780AF8AA61DA2A817115CEF8612AC0E494D03C9 *)L_121);
			int32_t L_123;
			L_123 = GenericVirtFuncInvoker1< int32_t, ES3Type_t8FBECB7AE75168648B9524E0C2A38DAD4555421D * >::Invoke(ES3Reader_Read_TisInt32_tFDE5F8CD43D10453F6A2E0C77FE48C6CC7009046_m2B74AA6627F5B1D21171D56C42F71DE5A7C1B4A6_RuntimeMethod_var, (ES3Reader_t2780AF8AA61DA2A817115CEF8612AC0E494D03C9 *)L_121, (ES3Type_t8FBECB7AE75168648B9524E0C2A38DAD4555421D *)L_122);
			NullCheck((Texture_t9FE0218A1EEDF266E8C85879FE123265CACC95AE *)L_120);
			VirtActionInvoker1< int32_t >::Invoke(8 /* System.Void UnityEngine.Texture::set_height(System.Int32) */, (Texture_t9FE0218A1EEDF266E8C85879FE123265CACC95AE *)L_120, (int32_t)L_123);
			// break;
			goto IL_0721;
		}

IL_04fb:
		{
			// instance.dimension = reader.Read<UnityEngine.Rendering.TextureDimension>();
			RenderTexture_t5FE7A5B47EF962A0E8D7BEBA05E9FC87D49A1849 * L_124 = V_0;
			ES3Reader_t2780AF8AA61DA2A817115CEF8612AC0E494D03C9 * L_125 = ___reader0;
			NullCheck((ES3Reader_t2780AF8AA61DA2A817115CEF8612AC0E494D03C9 *)L_125);
			int32_t L_126;
			L_126 = GenericVirtFuncInvoker0< int32_t >::Invoke(ES3Reader_Read_TisTextureDimension_tADCCB7C1D30E4D1182651BA9094B4DE61B63EACC_m19EAA3B93D10636C17A62A3D8437349223CFD988_RuntimeMethod_var, (ES3Reader_t2780AF8AA61DA2A817115CEF8612AC0E494D03C9 *)L_125);
			NullCheck((Texture_t9FE0218A1EEDF266E8C85879FE123265CACC95AE *)L_124);
			VirtActionInvoker1< int32_t >::Invoke(10 /* System.Void UnityEngine.Texture::set_dimension(UnityEngine.Rendering.TextureDimension) */, (Texture_t9FE0218A1EEDF266E8C85879FE123265CACC95AE *)L_124, (int32_t)L_126);
			// break;
			goto IL_0721;
		}

IL_050c:
		{
			// instance.useMipMap = reader.Read<System.Boolean>(ES3Type_bool.Instance);
			RenderTexture_t5FE7A5B47EF962A0E8D7BEBA05E9FC87D49A1849 * L_127 = V_0;
			ES3Reader_t2780AF8AA61DA2A817115CEF8612AC0E494D03C9 * L_128 = ___reader0;
			IL2CPP_RUNTIME_CLASS_INIT(ES3Type_bool_t8F309F7B9CC735FF1DEE68081B6E3CAB367745F4_il2cpp_TypeInfo_var);
			ES3Type_t8FBECB7AE75168648B9524E0C2A38DAD4555421D * L_129 = ((ES3Type_bool_t8F309F7B9CC735FF1DEE68081B6E3CAB367745F4_StaticFields*)il2cpp_codegen_static_fields_for(ES3Type_bool_t8F309F7B9CC735FF1DEE68081B6E3CAB367745F4_il2cpp_TypeInfo_var))->get_Instance_12();
			NullCheck((ES3Reader_t2780AF8AA61DA2A817115CEF8612AC0E494D03C9 *)L_128);
			bool L_130;
			L_130 = GenericVirtFuncInvoker1< bool, ES3Type_t8FBECB7AE75168648B9524E0C2A38DAD4555421D * >::Invoke(ES3Reader_Read_TisBoolean_t07D1E3F34E4813023D64F584DFF7B34C9D922F37_mC6D1B158268FF9B97822FF9F5B37FB1723FEDA22_RuntimeMethod_var, (ES3Reader_t2780AF8AA61DA2A817115CEF8612AC0E494D03C9 *)L_128, (ES3Type_t8FBECB7AE75168648B9524E0C2A38DAD4555421D *)L_129);
			NullCheck((RenderTexture_t5FE7A5B47EF962A0E8D7BEBA05E9FC87D49A1849 *)L_127);
			RenderTexture_set_useMipMap_mAE1437C3D7D21441891A612C3B812EE9C379F126((RenderTexture_t5FE7A5B47EF962A0E8D7BEBA05E9FC87D49A1849 *)L_127, (bool)L_130, /*hidden argument*/NULL);
			// break;
			goto IL_0721;
		}

IL_0522:
		{
			// instance.memorylessMode = reader.Read<UnityEngine.RenderTextureMemoryless>();
			RenderTexture_t5FE7A5B47EF962A0E8D7BEBA05E9FC87D49A1849 * L_131 = V_0;
			ES3Reader_t2780AF8AA61DA2A817115CEF8612AC0E494D03C9 * L_132 = ___reader0;
			NullCheck((ES3Reader_t2780AF8AA61DA2A817115CEF8612AC0E494D03C9 *)L_132);
			int32_t L_133;
			L_133 = GenericVirtFuncInvoker0< int32_t >::Invoke(ES3Reader_Read_TisRenderTextureMemoryless_t37547D68C2186D2650440F719302CDA4A3BB7F67_m3A980BA15AADBBB8393C3BC88CE17EEDDC89B027_RuntimeMethod_var, (ES3Reader_t2780AF8AA61DA2A817115CEF8612AC0E494D03C9 *)L_132);
			NullCheck((RenderTexture_t5FE7A5B47EF962A0E8D7BEBA05E9FC87D49A1849 *)L_131);
			RenderTexture_set_memorylessMode_mE48B2A38E9374A7BB419383B438790347474EFC1((RenderTexture_t5FE7A5B47EF962A0E8D7BEBA05E9FC87D49A1849 *)L_131, (int32_t)L_133, /*hidden argument*/NULL);
			// break;
			goto IL_0721;
		}

IL_0533:
		{
			// instance.format = reader.Read<UnityEngine.RenderTextureFormat>();
			RenderTexture_t5FE7A5B47EF962A0E8D7BEBA05E9FC87D49A1849 * L_134 = V_0;
			ES3Reader_t2780AF8AA61DA2A817115CEF8612AC0E494D03C9 * L_135 = ___reader0;
			NullCheck((ES3Reader_t2780AF8AA61DA2A817115CEF8612AC0E494D03C9 *)L_135);
			int32_t L_136;
			L_136 = GenericVirtFuncInvoker0< int32_t >::Invoke(ES3Reader_Read_TisRenderTextureFormat_t8371287102ED67772EF78229CF4AB9D38C2CD626_mE6358E03407F5C15B58B292C79D4770DE3FAC95A_RuntimeMethod_var, (ES3Reader_t2780AF8AA61DA2A817115CEF8612AC0E494D03C9 *)L_135);
			NullCheck((RenderTexture_t5FE7A5B47EF962A0E8D7BEBA05E9FC87D49A1849 *)L_134);
			RenderTexture_set_format_m32D42DC33DB151B69E81D0D93F36DE7450CFC23D((RenderTexture_t5FE7A5B47EF962A0E8D7BEBA05E9FC87D49A1849 *)L_134, (int32_t)L_136, /*hidden argument*/NULL);
			// break;
			goto IL_0721;
		}

IL_0544:
		{
			// instance.autoGenerateMips = reader.Read<System.Boolean>(ES3Type_bool.Instance);
			RenderTexture_t5FE7A5B47EF962A0E8D7BEBA05E9FC87D49A1849 * L_137 = V_0;
			ES3Reader_t2780AF8AA61DA2A817115CEF8612AC0E494D03C9 * L_138 = ___reader0;
			IL2CPP_RUNTIME_CLASS_INIT(ES3Type_bool_t8F309F7B9CC735FF1DEE68081B6E3CAB367745F4_il2cpp_TypeInfo_var);
			ES3Type_t8FBECB7AE75168648B9524E0C2A38DAD4555421D * L_139 = ((ES3Type_bool_t8F309F7B9CC735FF1DEE68081B6E3CAB367745F4_StaticFields*)il2cpp_codegen_static_fields_for(ES3Type_bool_t8F309F7B9CC735FF1DEE68081B6E3CAB367745F4_il2cpp_TypeInfo_var))->get_Instance_12();
			NullCheck((ES3Reader_t2780AF8AA61DA2A817115CEF8612AC0E494D03C9 *)L_138);
			bool L_140;
			L_140 = GenericVirtFuncInvoker1< bool, ES3Type_t8FBECB7AE75168648B9524E0C2A38DAD4555421D * >::Invoke(ES3Reader_Read_TisBoolean_t07D1E3F34E4813023D64F584DFF7B34C9D922F37_mC6D1B158268FF9B97822FF9F5B37FB1723FEDA22_RuntimeMethod_var, (ES3Reader_t2780AF8AA61DA2A817115CEF8612AC0E494D03C9 *)L_138, (ES3Type_t8FBECB7AE75168648B9524E0C2A38DAD4555421D *)L_139);
			NullCheck((RenderTexture_t5FE7A5B47EF962A0E8D7BEBA05E9FC87D49A1849 *)L_137);
			RenderTexture_set_autoGenerateMips_m0F02D60D4C4D4790B354451732F2DA6BA12D2E63((RenderTexture_t5FE7A5B47EF962A0E8D7BEBA05E9FC87D49A1849 *)L_137, (bool)L_140, /*hidden argument*/NULL);
			// break;
			goto IL_0721;
		}

IL_055a:
		{
			// instance.volumeDepth = reader.Read<System.Int32>(ES3Type_int.Instance);
			RenderTexture_t5FE7A5B47EF962A0E8D7BEBA05E9FC87D49A1849 * L_141 = V_0;
			ES3Reader_t2780AF8AA61DA2A817115CEF8612AC0E494D03C9 * L_142 = ___reader0;
			IL2CPP_RUNTIME_CLASS_INIT(ES3Type_int_tF64C15D40AD0CC7C15BCD1CEC3C5C6BF837BD167_il2cpp_TypeInfo_var);
			ES3Type_t8FBECB7AE75168648B9524E0C2A38DAD4555421D * L_143 = ((ES3Type_int_tF64C15D40AD0CC7C15BCD1CEC3C5C6BF837BD167_StaticFields*)il2cpp_codegen_static_fields_for(ES3Type_int_tF64C15D40AD0CC7C15BCD1CEC3C5C6BF837BD167_il2cpp_TypeInfo_var))->get_Instance_12();
			NullCheck((ES3Reader_t2780AF8AA61DA2A817115CEF8612AC0E494D03C9 *)L_142);
			int32_t L_144;
			L_144 = GenericVirtFuncInvoker1< int32_t, ES3Type_t8FBECB7AE75168648B9524E0C2A38DAD4555421D * >::Invoke(ES3Reader_Read_TisInt32_tFDE5F8CD43D10453F6A2E0C77FE48C6CC7009046_m2B74AA6627F5B1D21171D56C42F71DE5A7C1B4A6_RuntimeMethod_var, (ES3Reader_t2780AF8AA61DA2A817115CEF8612AC0E494D03C9 *)L_142, (ES3Type_t8FBECB7AE75168648B9524E0C2A38DAD4555421D *)L_143);
			NullCheck((RenderTexture_t5FE7A5B47EF962A0E8D7BEBA05E9FC87D49A1849 *)L_141);
			RenderTexture_set_volumeDepth_m01D7BD50386DDAE777CE3CB9B60FDD7DE798AC93((RenderTexture_t5FE7A5B47EF962A0E8D7BEBA05E9FC87D49A1849 *)L_141, (int32_t)L_144, /*hidden argument*/NULL);
			// break;
			goto IL_0721;
		}

IL_0570:
		{
			// instance.antiAliasing = reader.Read<System.Int32>(ES3Type_int.Instance);
			RenderTexture_t5FE7A5B47EF962A0E8D7BEBA05E9FC87D49A1849 * L_145 = V_0;
			ES3Reader_t2780AF8AA61DA2A817115CEF8612AC0E494D03C9 * L_146 = ___reader0;
			IL2CPP_RUNTIME_CLASS_INIT(ES3Type_int_tF64C15D40AD0CC7C15BCD1CEC3C5C6BF837BD167_il2cpp_TypeInfo_var);
			ES3Type_t8FBECB7AE75168648B9524E0C2A38DAD4555421D * L_147 = ((ES3Type_int_tF64C15D40AD0CC7C15BCD1CEC3C5C6BF837BD167_StaticFields*)il2cpp_codegen_static_fields_for(ES3Type_int_tF64C15D40AD0CC7C15BCD1CEC3C5C6BF837BD167_il2cpp_TypeInfo_var))->get_Instance_12();
			NullCheck((ES3Reader_t2780AF8AA61DA2A817115CEF8612AC0E494D03C9 *)L_146);
			int32_t L_148;
			L_148 = GenericVirtFuncInvoker1< int32_t, ES3Type_t8FBECB7AE75168648B9524E0C2A38DAD4555421D * >::Invoke(ES3Reader_Read_TisInt32_tFDE5F8CD43D10453F6A2E0C77FE48C6CC7009046_m2B74AA6627F5B1D21171D56C42F71DE5A7C1B4A6_RuntimeMethod_var, (ES3Reader_t2780AF8AA61DA2A817115CEF8612AC0E494D03C9 *)L_146, (ES3Type_t8FBECB7AE75168648B9524E0C2A38DAD4555421D *)L_147);
			NullCheck((RenderTexture_t5FE7A5B47EF962A0E8D7BEBA05E9FC87D49A1849 *)L_145);
			RenderTexture_set_antiAliasing_m4D37900B7E23CA0D33F109DB8DF21265DB70C38F((RenderTexture_t5FE7A5B47EF962A0E8D7BEBA05E9FC87D49A1849 *)L_145, (int32_t)L_148, /*hidden argument*/NULL);
			// break;
			goto IL_0721;
		}

IL_0586:
		{
			// instance.enableRandomWrite = reader.Read<System.Boolean>(ES3Type_bool.Instance);
			RenderTexture_t5FE7A5B47EF962A0E8D7BEBA05E9FC87D49A1849 * L_149 = V_0;
			ES3Reader_t2780AF8AA61DA2A817115CEF8612AC0E494D03C9 * L_150 = ___reader0;
			IL2CPP_RUNTIME_CLASS_INIT(ES3Type_bool_t8F309F7B9CC735FF1DEE68081B6E3CAB367745F4_il2cpp_TypeInfo_var);
			ES3Type_t8FBECB7AE75168648B9524E0C2A38DAD4555421D * L_151 = ((ES3Type_bool_t8F309F7B9CC735FF1DEE68081B6E3CAB367745F4_StaticFields*)il2cpp_codegen_static_fields_for(ES3Type_bool_t8F309F7B9CC735FF1DEE68081B6E3CAB367745F4_il2cpp_TypeInfo_var))->get_Instance_12();
			NullCheck((ES3Reader_t2780AF8AA61DA2A817115CEF8612AC0E494D03C9 *)L_150);
			bool L_152;
			L_152 = GenericVirtFuncInvoker1< bool, ES3Type_t8FBECB7AE75168648B9524E0C2A38DAD4555421D * >::Invoke(ES3Reader_Read_TisBoolean_t07D1E3F34E4813023D64F584DFF7B34C9D922F37_mC6D1B158268FF9B97822FF9F5B37FB1723FEDA22_RuntimeMethod_var, (ES3Reader_t2780AF8AA61DA2A817115CEF8612AC0E494D03C9 *)L_150, (ES3Type_t8FBECB7AE75168648B9524E0C2A38DAD4555421D *)L_151);
			NullCheck((RenderTexture_t5FE7A5B47EF962A0E8D7BEBA05E9FC87D49A1849 *)L_149);
			RenderTexture_set_enableRandomWrite_m024F49DB3CA3B02FA0EEBB3EACB37E6228CAA183((RenderTexture_t5FE7A5B47EF962A0E8D7BEBA05E9FC87D49A1849 *)L_149, (bool)L_152, /*hidden argument*/NULL);
			// break;
			goto IL_0721;
		}

IL_059c:
		{
			// instance.isPowerOfTwo = reader.Read<System.Boolean>(ES3Type_bool.Instance);
			RenderTexture_t5FE7A5B47EF962A0E8D7BEBA05E9FC87D49A1849 * L_153 = V_0;
			ES3Reader_t2780AF8AA61DA2A817115CEF8612AC0E494D03C9 * L_154 = ___reader0;
			IL2CPP_RUNTIME_CLASS_INIT(ES3Type_bool_t8F309F7B9CC735FF1DEE68081B6E3CAB367745F4_il2cpp_TypeInfo_var);
			ES3Type_t8FBECB7AE75168648B9524E0C2A38DAD4555421D * L_155 = ((ES3Type_bool_t8F309F7B9CC735FF1DEE68081B6E3CAB367745F4_StaticFields*)il2cpp_codegen_static_fields_for(ES3Type_bool_t8F309F7B9CC735FF1DEE68081B6E3CAB367745F4_il2cpp_TypeInfo_var))->get_Instance_12();
			NullCheck((ES3Reader_t2780AF8AA61DA2A817115CEF8612AC0E494D03C9 *)L_154);
			bool L_156;
			L_156 = GenericVirtFuncInvoker1< bool, ES3Type_t8FBECB7AE75168648B9524E0C2A38DAD4555421D * >::Invoke(ES3Reader_Read_TisBoolean_t07D1E3F34E4813023D64F584DFF7B34C9D922F37_mC6D1B158268FF9B97822FF9F5B37FB1723FEDA22_RuntimeMethod_var, (ES3Reader_t2780AF8AA61DA2A817115CEF8612AC0E494D03C9 *)L_154, (ES3Type_t8FBECB7AE75168648B9524E0C2A38DAD4555421D *)L_155);
			NullCheck((RenderTexture_t5FE7A5B47EF962A0E8D7BEBA05E9FC87D49A1849 *)L_153);
			RenderTexture_set_isPowerOfTwo_mA6D34F610DF27C40422DF5815892B45C656F1317((RenderTexture_t5FE7A5B47EF962A0E8D7BEBA05E9FC87D49A1849 *)L_153, (bool)L_156, /*hidden argument*/NULL);
			// break;
			goto IL_0721;
		}

IL_05b2:
		{
			// instance.depth = reader.Read<System.Int32>(ES3Type_int.Instance);
			RenderTexture_t5FE7A5B47EF962A0E8D7BEBA05E9FC87D49A1849 * L_157 = V_0;
			ES3Reader_t2780AF8AA61DA2A817115CEF8612AC0E494D03C9 * L_158 = ___reader0;
			IL2CPP_RUNTIME_CLASS_INIT(ES3Type_int_tF64C15D40AD0CC7C15BCD1CEC3C5C6BF837BD167_il2cpp_TypeInfo_var);
			ES3Type_t8FBECB7AE75168648B9524E0C2A38DAD4555421D * L_159 = ((ES3Type_int_tF64C15D40AD0CC7C15BCD1CEC3C5C6BF837BD167_StaticFields*)il2cpp_codegen_static_fields_for(ES3Type_int_tF64C15D40AD0CC7C15BCD1CEC3C5C6BF837BD167_il2cpp_TypeInfo_var))->get_Instance_12();
			NullCheck((ES3Reader_t2780AF8AA61DA2A817115CEF8612AC0E494D03C9 *)L_158);
			int32_t L_160;
			L_160 = GenericVirtFuncInvoker1< int32_t, ES3Type_t8FBECB7AE75168648B9524E0C2A38DAD4555421D * >::Invoke(ES3Reader_Read_TisInt32_tFDE5F8CD43D10453F6A2E0C77FE48C6CC7009046_m2B74AA6627F5B1D21171D56C42F71DE5A7C1B4A6_RuntimeMethod_var, (ES3Reader_t2780AF8AA61DA2A817115CEF8612AC0E494D03C9 *)L_158, (ES3Type_t8FBECB7AE75168648B9524E0C2A38DAD4555421D *)L_159);
			NullCheck((RenderTexture_t5FE7A5B47EF962A0E8D7BEBA05E9FC87D49A1849 *)L_157);
			RenderTexture_set_depth_mA57CEFEDDB45D0429FAC9532A631839F523944A3((RenderTexture_t5FE7A5B47EF962A0E8D7BEBA05E9FC87D49A1849 *)L_157, (int32_t)L_160, /*hidden argument*/NULL);
			// break;
			goto IL_0721;
		}

IL_05c8:
		{
			// instance.descriptor = reader.Read<UnityEngine.RenderTextureDescriptor>();
			RenderTexture_t5FE7A5B47EF962A0E8D7BEBA05E9FC87D49A1849 * L_161 = V_0;
			ES3Reader_t2780AF8AA61DA2A817115CEF8612AC0E494D03C9 * L_162 = ___reader0;
			NullCheck((ES3Reader_t2780AF8AA61DA2A817115CEF8612AC0E494D03C9 *)L_162);
			RenderTextureDescriptor_t67FF189E1F35AEB5D6C43A2D7103F3A8A8CA0B47  L_163;
			L_163 = GenericVirtFuncInvoker0< RenderTextureDescriptor_t67FF189E1F35AEB5D6C43A2D7103F3A8A8CA0B47  >::Invoke(ES3Reader_Read_TisRenderTextureDescriptor_t67FF189E1F35AEB5D6C43A2D7103F3A8A8CA0B47_m427886ADAAF96C7BA9BD423544128494F96D69E7_RuntimeMethod_var, (ES3Reader_t2780AF8AA61DA2A817115CEF8612AC0E494D03C9 *)L_162);
			NullCheck((RenderTexture_t5FE7A5B47EF962A0E8D7BEBA05E9FC87D49A1849 *)L_161);
			RenderTexture_set_descriptor_m3C8E31AE4644B23719A12345771D1B85EB6E5881((RenderTexture_t5FE7A5B47EF962A0E8D7BEBA05E9FC87D49A1849 *)L_161, (RenderTextureDescriptor_t67FF189E1F35AEB5D6C43A2D7103F3A8A8CA0B47 )L_163, /*hidden argument*/NULL);
			// break;
			goto IL_0721;
		}

IL_05d9:
		{
			// UnityEngine.RenderTexture.masterTextureLimit = reader.Read<System.Int32>(ES3Type_int.Instance);
			ES3Reader_t2780AF8AA61DA2A817115CEF8612AC0E494D03C9 * L_164 = ___reader0;
			IL2CPP_RUNTIME_CLASS_INIT(ES3Type_int_tF64C15D40AD0CC7C15BCD1CEC3C5C6BF837BD167_il2cpp_TypeInfo_var);
			ES3Type_t8FBECB7AE75168648B9524E0C2A38DAD4555421D * L_165 = ((ES3Type_int_tF64C15D40AD0CC7C15BCD1CEC3C5C6BF837BD167_StaticFields*)il2cpp_codegen_static_fields_for(ES3Type_int_tF64C15D40AD0CC7C15BCD1CEC3C5C6BF837BD167_il2cpp_TypeInfo_var))->get_Instance_12();
			NullCheck((ES3Reader_t2780AF8AA61DA2A817115CEF8612AC0E494D03C9 *)L_164);
			int32_t L_166;
			L_166 = GenericVirtFuncInvoker1< int32_t, ES3Type_t8FBECB7AE75168648B9524E0C2A38DAD4555421D * >::Invoke(ES3Reader_Read_TisInt32_tFDE5F8CD43D10453F6A2E0C77FE48C6CC7009046_m2B74AA6627F5B1D21171D56C42F71DE5A7C1B4A6_RuntimeMethod_var, (ES3Reader_t2780AF8AA61DA2A817115CEF8612AC0E494D03C9 *)L_164, (ES3Type_t8FBECB7AE75168648B9524E0C2A38DAD4555421D *)L_165);
			IL2CPP_RUNTIME_CLASS_INIT(Texture_t9FE0218A1EEDF266E8C85879FE123265CACC95AE_il2cpp_TypeInfo_var);
			Texture_set_masterTextureLimit_m94A531A20A54A86AF7B88A56F72709CE556B7DFF((int32_t)L_166, /*hidden argument*/NULL);
			// break;
			goto IL_0721;
		}

IL_05ee:
		{
			// UnityEngine.RenderTexture.anisotropicFiltering = reader.Read<UnityEngine.AnisotropicFiltering>();
			ES3Reader_t2780AF8AA61DA2A817115CEF8612AC0E494D03C9 * L_167 = ___reader0;
			NullCheck((ES3Reader_t2780AF8AA61DA2A817115CEF8612AC0E494D03C9 *)L_167);
			int32_t L_168;
			L_168 = GenericVirtFuncInvoker0< int32_t >::Invoke(ES3Reader_Read_TisAnisotropicFiltering_tAC3D1448B262D5869946CD1CDD2C8DAE3A7A537B_mAF1268AAC3E461D6E0604A19FAF0325873B6EC8A_RuntimeMethod_var, (ES3Reader_t2780AF8AA61DA2A817115CEF8612AC0E494D03C9 *)L_167);
			IL2CPP_RUNTIME_CLASS_INIT(Texture_t9FE0218A1EEDF266E8C85879FE123265CACC95AE_il2cpp_TypeInfo_var);
			Texture_set_anisotropicFiltering_mE2B639BF2681A8A0516C1C343C7E265ED60EAF16((int32_t)L_168, /*hidden argument*/NULL);
			// break;
			goto IL_0721;
		}

IL_05fe:
		{
			// instance.wrapMode = reader.Read<UnityEngine.TextureWrapMode>();
			RenderTexture_t5FE7A5B47EF962A0E8D7BEBA05E9FC87D49A1849 * L_169 = V_0;
			ES3Reader_t2780AF8AA61DA2A817115CEF8612AC0E494D03C9 * L_170 = ___reader0;
			NullCheck((ES3Reader_t2780AF8AA61DA2A817115CEF8612AC0E494D03C9 *)L_170);
			int32_t L_171;
			L_171 = GenericVirtFuncInvoker0< int32_t >::Invoke(ES3Reader_Read_TisTextureWrapMode_t86DDA8206E4AA784A1218D0DE3C5F6826D7549EB_m7926E449CD0B8BD56E5BF145DD0CCFE1C567F107_RuntimeMethod_var, (ES3Reader_t2780AF8AA61DA2A817115CEF8612AC0E494D03C9 *)L_170);
			NullCheck((Texture_t9FE0218A1EEDF266E8C85879FE123265CACC95AE *)L_169);
			Texture_set_wrapMode_m1233D2DF48DC20996F8EE26E866D4BDD2AC8050D((Texture_t9FE0218A1EEDF266E8C85879FE123265CACC95AE *)L_169, (int32_t)L_171, /*hidden argument*/NULL);
			// break;
			goto IL_0721;
		}

IL_060f:
		{
			// instance.wrapModeU = reader.Read<UnityEngine.TextureWrapMode>();
			RenderTexture_t5FE7A5B47EF962A0E8D7BEBA05E9FC87D49A1849 * L_172 = V_0;
			ES3Reader_t2780AF8AA61DA2A817115CEF8612AC0E494D03C9 * L_173 = ___reader0;
			NullCheck((ES3Reader_t2780AF8AA61DA2A817115CEF8612AC0E494D03C9 *)L_173);
			int32_t L_174;
			L_174 = GenericVirtFuncInvoker0< int32_t >::Invoke(ES3Reader_Read_TisTextureWrapMode_t86DDA8206E4AA784A1218D0DE3C5F6826D7549EB_m7926E449CD0B8BD56E5BF145DD0CCFE1C567F107_RuntimeMethod_var, (ES3Reader_t2780AF8AA61DA2A817115CEF8612AC0E494D03C9 *)L_173);
			NullCheck((Texture_t9FE0218A1EEDF266E8C85879FE123265CACC95AE *)L_172);
			Texture_set_wrapModeU_mBD3CBD6880E9E767B91ED9E1B14C725A52D7A66E((Texture_t9FE0218A1EEDF266E8C85879FE123265CACC95AE *)L_172, (int32_t)L_174, /*hidden argument*/NULL);
			// break;
			goto IL_0721;
		}

IL_0620:
		{
			// instance.wrapModeV = reader.Read<UnityEngine.TextureWrapMode>();
			RenderTexture_t5FE7A5B47EF962A0E8D7BEBA05E9FC87D49A1849 * L_175 = V_0;
			ES3Reader_t2780AF8AA61DA2A817115CEF8612AC0E494D03C9 * L_176 = ___reader0;
			NullCheck((ES3Reader_t2780AF8AA61DA2A817115CEF8612AC0E494D03C9 *)L_176);
			int32_t L_177;
			L_177 = GenericVirtFuncInvoker0< int32_t >::Invoke(ES3Reader_Read_TisTextureWrapMode_t86DDA8206E4AA784A1218D0DE3C5F6826D7549EB_m7926E449CD0B8BD56E5BF145DD0CCFE1C567F107_RuntimeMethod_var, (ES3Reader_t2780AF8AA61DA2A817115CEF8612AC0E494D03C9 *)L_176);
			NullCheck((Texture_t9FE0218A1EEDF266E8C85879FE123265CACC95AE *)L_175);
			Texture_set_wrapModeV_mCD51C11B4C90D7508113C744EDC09D04059403E5((Texture_t9FE0218A1EEDF266E8C85879FE123265CACC95AE *)L_175, (int32_t)L_177, /*hidden argument*/NULL);
			// break;
			goto IL_0721;
		}

IL_0631:
		{
			// instance.wrapModeW = reader.Read<UnityEngine.TextureWrapMode>();
			RenderTexture_t5FE7A5B47EF962A0E8D7BEBA05E9FC87D49A1849 * L_178 = V_0;
			ES3Reader_t2780AF8AA61DA2A817115CEF8612AC0E494D03C9 * L_179 = ___reader0;
			NullCheck((ES3Reader_t2780AF8AA61DA2A817115CEF8612AC0E494D03C9 *)L_179);
			int32_t L_180;
			L_180 = GenericVirtFuncInvoker0< int32_t >::Invoke(ES3Reader_Read_TisTextureWrapMode_t86DDA8206E4AA784A1218D0DE3C5F6826D7549EB_m7926E449CD0B8BD56E5BF145DD0CCFE1C567F107_RuntimeMethod_var, (ES3Reader_t2780AF8AA61DA2A817115CEF8612AC0E494D03C9 *)L_179);
			NullCheck((Texture_t9FE0218A1EEDF266E8C85879FE123265CACC95AE *)L_178);
			Texture_set_wrapModeW_m72C3239EA12A51D5031BD2A66C5E7B178EE9F65B((Texture_t9FE0218A1EEDF266E8C85879FE123265CACC95AE *)L_178, (int32_t)L_180, /*hidden argument*/NULL);
			// break;
			goto IL_0721;
		}

IL_0642:
		{
			// instance.filterMode = reader.Read<UnityEngine.FilterMode>();
			RenderTexture_t5FE7A5B47EF962A0E8D7BEBA05E9FC87D49A1849 * L_181 = V_0;
			ES3Reader_t2780AF8AA61DA2A817115CEF8612AC0E494D03C9 * L_182 = ___reader0;
			NullCheck((ES3Reader_t2780AF8AA61DA2A817115CEF8612AC0E494D03C9 *)L_182);
			int32_t L_183;
			L_183 = GenericVirtFuncInvoker0< int32_t >::Invoke(ES3Reader_Read_TisFilterMode_tE90A08FD96A142C761463D65E524BCDBFEEE3D19_m9819C2A442797B4060B0D9A80CFA96CFD6102839_RuntimeMethod_var, (ES3Reader_t2780AF8AA61DA2A817115CEF8612AC0E494D03C9 *)L_182);
			NullCheck((Texture_t9FE0218A1EEDF266E8C85879FE123265CACC95AE *)L_181);
			Texture_set_filterMode_m045141DB0FEFE496885D45F5F23B15BC0E77C8D0((Texture_t9FE0218A1EEDF266E8C85879FE123265CACC95AE *)L_181, (int32_t)L_183, /*hidden argument*/NULL);
			// break;
			goto IL_0721;
		}

IL_0653:
		{
			// instance.anisoLevel = reader.Read<System.Int32>(ES3Type_int.Instance);
			RenderTexture_t5FE7A5B47EF962A0E8D7BEBA05E9FC87D49A1849 * L_184 = V_0;
			ES3Reader_t2780AF8AA61DA2A817115CEF8612AC0E494D03C9 * L_185 = ___reader0;
			IL2CPP_RUNTIME_CLASS_INIT(ES3Type_int_tF64C15D40AD0CC7C15BCD1CEC3C5C6BF837BD167_il2cpp_TypeInfo_var);
			ES3Type_t8FBECB7AE75168648B9524E0C2A38DAD4555421D * L_186 = ((ES3Type_int_tF64C15D40AD0CC7C15BCD1CEC3C5C6BF837BD167_StaticFields*)il2cpp_codegen_static_fields_for(ES3Type_int_tF64C15D40AD0CC7C15BCD1CEC3C5C6BF837BD167_il2cpp_TypeInfo_var))->get_Instance_12();
			NullCheck((ES3Reader_t2780AF8AA61DA2A817115CEF8612AC0E494D03C9 *)L_185);
			int32_t L_187;
			L_187 = GenericVirtFuncInvoker1< int32_t, ES3Type_t8FBECB7AE75168648B9524E0C2A38DAD4555421D * >::Invoke(ES3Reader_Read_TisInt32_tFDE5F8CD43D10453F6A2E0C77FE48C6CC7009046_m2B74AA6627F5B1D21171D56C42F71DE5A7C1B4A6_RuntimeMethod_var, (ES3Reader_t2780AF8AA61DA2A817115CEF8612AC0E494D03C9 *)L_185, (ES3Type_t8FBECB7AE75168648B9524E0C2A38DAD4555421D *)L_186);
			NullCheck((Texture_t9FE0218A1EEDF266E8C85879FE123265CACC95AE *)L_184);
			Texture_set_anisoLevel_mE51360F6CD0562FD6355F8C0509B70A454CB33BE((Texture_t9FE0218A1EEDF266E8C85879FE123265CACC95AE *)L_184, (int32_t)L_187, /*hidden argument*/NULL);
			// break;
			goto IL_0721;
		}

IL_0669:
		{
			// instance.mipMapBias = reader.Read<System.Single>(ES3Type_float.Instance);
			RenderTexture_t5FE7A5B47EF962A0E8D7BEBA05E9FC87D49A1849 * L_188 = V_0;
			ES3Reader_t2780AF8AA61DA2A817115CEF8612AC0E494D03C9 * L_189 = ___reader0;
			IL2CPP_RUNTIME_CLASS_INIT(ES3Type_float_tF86B773C86731BD9AD79448B860BBB178FE77644_il2cpp_TypeInfo_var);
			ES3Type_t8FBECB7AE75168648B9524E0C2A38DAD4555421D * L_190 = ((ES3Type_float_tF86B773C86731BD9AD79448B860BBB178FE77644_StaticFields*)il2cpp_codegen_static_fields_for(ES3Type_float_tF86B773C86731BD9AD79448B860BBB178FE77644_il2cpp_TypeInfo_var))->get_Instance_12();
			NullCheck((ES3Reader_t2780AF8AA61DA2A817115CEF8612AC0E494D03C9 *)L_189);
			float L_191;
			L_191 = GenericVirtFuncInvoker1< float, ES3Type_t8FBECB7AE75168648B9524E0C2A38DAD4555421D * >::Invoke(ES3Reader_Read_TisSingle_tE07797BA3C98D4CA9B5A19413C19A76688AB899E_m4A0416374498BDA042B8EB21E49B72326D6CE5F4_RuntimeMethod_var, (ES3Reader_t2780AF8AA61DA2A817115CEF8612AC0E494D03C9 *)L_189, (ES3Type_t8FBECB7AE75168648B9524E0C2A38DAD4555421D *)L_190);
			NullCheck((Texture_t9FE0218A1EEDF266E8C85879FE123265CACC95AE *)L_188);
			Texture_set_mipMapBias_m5057ADA9DBA8E8E30EC15EA5BABFA0734CE2821C((Texture_t9FE0218A1EEDF266E8C85879FE123265CACC95AE *)L_188, (float)L_191, /*hidden argument*/NULL);
			// break;
			goto IL_0721;
		}

IL_067f:
		{
			// instance.name = reader.Read<System.String>(ES3Type_string.Instance);
			RenderTexture_t5FE7A5B47EF962A0E8D7BEBA05E9FC87D49A1849 * L_192 = V_0;
			ES3Reader_t2780AF8AA61DA2A817115CEF8612AC0E494D03C9 * L_193 = ___reader0;
			IL2CPP_RUNTIME_CLASS_INIT(ES3Type_string_tC47BFBE3CC816F3C70B51558C68F0C6470C5EFE5_il2cpp_TypeInfo_var);
			ES3Type_t8FBECB7AE75168648B9524E0C2A38DAD4555421D * L_194 = ((ES3Type_string_tC47BFBE3CC816F3C70B51558C68F0C6470C5EFE5_StaticFields*)il2cpp_codegen_static_fields_for(ES3Type_string_tC47BFBE3CC816F3C70B51558C68F0C6470C5EFE5_il2cpp_TypeInfo_var))->get_Instance_12();
			NullCheck((ES3Reader_t2780AF8AA61DA2A817115CEF8612AC0E494D03C9 *)L_193);
			String_t* L_195;
			L_195 = GenericVirtFuncInvoker1< String_t*, ES3Type_t8FBECB7AE75168648B9524E0C2A38DAD4555421D * >::Invoke(ES3Reader_Read_TisString_t_m883861F3B58239392073ABF39876826EEB87DF9C_RuntimeMethod_var, (ES3Reader_t2780AF8AA61DA2A817115CEF8612AC0E494D03C9 *)L_193, (ES3Type_t8FBECB7AE75168648B9524E0C2A38DAD4555421D *)L_194);
			NullCheck((Object_tF2F3778131EFF286AF62B7B013A170F95A91571A *)L_192);
			Object_set_name_m87C4006618ADB325ABE5439DF159E10DD8DD0781((Object_tF2F3778131EFF286AF62B7B013A170F95A91571A *)L_192, (String_t*)L_195, /*hidden argument*/NULL);
			// break;
			goto IL_0721;
		}

IL_0695:
		{
			// instance.vrUsage = reader.Read<UnityEngine.VRTextureUsage>();
			RenderTexture_t5FE7A5B47EF962A0E8D7BEBA05E9FC87D49A1849 * L_196 = V_0;
			ES3Reader_t2780AF8AA61DA2A817115CEF8612AC0E494D03C9 * L_197 = ___reader0;
			NullCheck((ES3Reader_t2780AF8AA61DA2A817115CEF8612AC0E494D03C9 *)L_197);
			int32_t L_198;
			L_198 = GenericVirtFuncInvoker0< int32_t >::Invoke(ES3Reader_Read_TisVRTextureUsage_t3C09DF3DD90B5620BC0AB6F8078DFEF4E607F645_m7DE3966E4815BB13132866CB005EEE5B90FF51C2_RuntimeMethod_var, (ES3Reader_t2780AF8AA61DA2A817115CEF8612AC0E494D03C9 *)L_197);
			NullCheck((RenderTexture_t5FE7A5B47EF962A0E8D7BEBA05E9FC87D49A1849 *)L_196);
			RenderTexture_set_vrUsage_m9AF7F60442E3B933FDF274D801EA074D1A5ECB71((RenderTexture_t5FE7A5B47EF962A0E8D7BEBA05E9FC87D49A1849 *)L_196, (int32_t)L_198, /*hidden argument*/NULL);
			// break;
			goto IL_0721;
		}

IL_06a3:
		{
			// instance.graphicsFormat = reader.Read<UnityEngine.Experimental.Rendering.GraphicsFormat>();
			RenderTexture_t5FE7A5B47EF962A0E8D7BEBA05E9FC87D49A1849 * L_199 = V_0;
			ES3Reader_t2780AF8AA61DA2A817115CEF8612AC0E494D03C9 * L_200 = ___reader0;
			NullCheck((ES3Reader_t2780AF8AA61DA2A817115CEF8612AC0E494D03C9 *)L_200);
			int32_t L_201;
			L_201 = GenericVirtFuncInvoker0< int32_t >::Invoke(ES3Reader_Read_TisGraphicsFormat_t07A3C024BC77B843C53A369D6FC02ABD27D2AB1D_mCBD36004B10F649C93215AB4717F6F0D7118BF7D_RuntimeMethod_var, (ES3Reader_t2780AF8AA61DA2A817115CEF8612AC0E494D03C9 *)L_200);
			NullCheck((RenderTexture_t5FE7A5B47EF962A0E8D7BEBA05E9FC87D49A1849 *)L_199);
			RenderTexture_set_graphicsFormat_mA378AAD8BD876EE96637FF0A80A2AFEA4D852FAB((RenderTexture_t5FE7A5B47EF962A0E8D7BEBA05E9FC87D49A1849 *)L_199, (int32_t)L_201, /*hidden argument*/NULL);
			// break;
			goto IL_0721;
		}

IL_06b1:
		{
			// instance.stencilFormat = reader.Read<UnityEngine.Experimental.Rendering.GraphicsFormat>();
			RenderTexture_t5FE7A5B47EF962A0E8D7BEBA05E9FC87D49A1849 * L_202 = V_0;
			ES3Reader_t2780AF8AA61DA2A817115CEF8612AC0E494D03C9 * L_203 = ___reader0;
			NullCheck((ES3Reader_t2780AF8AA61DA2A817115CEF8612AC0E494D03C9 *)L_203);
			int32_t L_204;
			L_204 = GenericVirtFuncInvoker0< int32_t >::Invoke(ES3Reader_Read_TisGraphicsFormat_t07A3C024BC77B843C53A369D6FC02ABD27D2AB1D_mCBD36004B10F649C93215AB4717F6F0D7118BF7D_RuntimeMethod_var, (ES3Reader_t2780AF8AA61DA2A817115CEF8612AC0E494D03C9 *)L_203);
			NullCheck((RenderTexture_t5FE7A5B47EF962A0E8D7BEBA05E9FC87D49A1849 *)L_202);
			RenderTexture_set_stencilFormat_m7C6E21FCDB7E786D403CFC9775105B050EFF19C7((RenderTexture_t5FE7A5B47EF962A0E8D7BEBA05E9FC87D49A1849 *)L_202, (int32_t)L_204, /*hidden argument*/NULL);
			// break;
			goto IL_0721;
		}

IL_06bf:
		{
			// instance.bindTextureMS = reader.Read<System.Boolean>(ES3Type_bool.Instance);
			RenderTexture_t5FE7A5B47EF962A0E8D7BEBA05E9FC87D49A1849 * L_205 = V_0;
			ES3Reader_t2780AF8AA61DA2A817115CEF8612AC0E494D03C9 * L_206 = ___reader0;
			IL2CPP_RUNTIME_CLASS_INIT(ES3Type_bool_t8F309F7B9CC735FF1DEE68081B6E3CAB367745F4_il2cpp_TypeInfo_var);
			ES3Type_t8FBECB7AE75168648B9524E0C2A38DAD4555421D * L_207 = ((ES3Type_bool_t8F309F7B9CC735FF1DEE68081B6E3CAB367745F4_StaticFields*)il2cpp_codegen_static_fields_for(ES3Type_bool_t8F309F7B9CC735FF1DEE68081B6E3CAB367745F4_il2cpp_TypeInfo_var))->get_Instance_12();
			NullCheck((ES3Reader_t2780AF8AA61DA2A817115CEF8612AC0E494D03C9 *)L_206);
			bool L_208;
			L_208 = GenericVirtFuncInvoker1< bool, ES3Type_t8FBECB7AE75168648B9524E0C2A38DAD4555421D * >::Invoke(ES3Reader_Read_TisBoolean_t07D1E3F34E4813023D64F584DFF7B34C9D922F37_mC6D1B158268FF9B97822FF9F5B37FB1723FEDA22_RuntimeMethod_var, (ES3Reader_t2780AF8AA61DA2A817115CEF8612AC0E494D03C9 *)L_206, (ES3Type_t8FBECB7AE75168648B9524E0C2A38DAD4555421D *)L_207);
			NullCheck((RenderTexture_t5FE7A5B47EF962A0E8D7BEBA05E9FC87D49A1849 *)L_205);
			RenderTexture_set_bindTextureMS_m6C26F6AB2DE8FE81BFCA60C936AA08EA7F1A7177((RenderTexture_t5FE7A5B47EF962A0E8D7BEBA05E9FC87D49A1849 *)L_205, (bool)L_208, /*hidden argument*/NULL);
			// break;
			goto IL_0721;
		}

IL_06d2:
		{
			// instance.useDynamicScale = reader.Read<System.Boolean>(ES3Type_bool.Instance);
			RenderTexture_t5FE7A5B47EF962A0E8D7BEBA05E9FC87D49A1849 * L_209 = V_0;
			ES3Reader_t2780AF8AA61DA2A817115CEF8612AC0E494D03C9 * L_210 = ___reader0;
			IL2CPP_RUNTIME_CLASS_INIT(ES3Type_bool_t8F309F7B9CC735FF1DEE68081B6E3CAB367745F4_il2cpp_TypeInfo_var);
			ES3Type_t8FBECB7AE75168648B9524E0C2A38DAD4555421D * L_211 = ((ES3Type_bool_t8F309F7B9CC735FF1DEE68081B6E3CAB367745F4_StaticFields*)il2cpp_codegen_static_fields_for(ES3Type_bool_t8F309F7B9CC735FF1DEE68081B6E3CAB367745F4_il2cpp_TypeInfo_var))->get_Instance_12();
			NullCheck((ES3Reader_t2780AF8AA61DA2A817115CEF8612AC0E494D03C9 *)L_210);
			bool L_212;
			L_212 = GenericVirtFuncInvoker1< bool, ES3Type_t8FBECB7AE75168648B9524E0C2A38DAD4555421D * >::Invoke(ES3Reader_Read_TisBoolean_t07D1E3F34E4813023D64F584DFF7B34C9D922F37_mC6D1B158268FF9B97822FF9F5B37FB1723FEDA22_RuntimeMethod_var, (ES3Reader_t2780AF8AA61DA2A817115CEF8612AC0E494D03C9 *)L_210, (ES3Type_t8FBECB7AE75168648B9524E0C2A38DAD4555421D *)L_211);
			NullCheck((RenderTexture_t5FE7A5B47EF962A0E8D7BEBA05E9FC87D49A1849 *)L_209);
			RenderTexture_set_useDynamicScale_m8F96571C7EDBEFAB9278E04A3F3EB67067A5AE29((RenderTexture_t5FE7A5B47EF962A0E8D7BEBA05E9FC87D49A1849 *)L_209, (bool)L_212, /*hidden argument*/NULL);
			// break;
			goto IL_0721;
		}

IL_06e5:
		{
			// UnityEngine.RenderTexture.streamingTextureForceLoadAll = reader.Read<System.Boolean>(ES3Type_bool.Instance);
			ES3Reader_t2780AF8AA61DA2A817115CEF8612AC0E494D03C9 * L_213 = ___reader0;
			IL2CPP_RUNTIME_CLASS_INIT(ES3Type_bool_t8F309F7B9CC735FF1DEE68081B6E3CAB367745F4_il2cpp_TypeInfo_var);
			ES3Type_t8FBECB7AE75168648B9524E0C2A38DAD4555421D * L_214 = ((ES3Type_bool_t8F309F7B9CC735FF1DEE68081B6E3CAB367745F4_StaticFields*)il2cpp_codegen_static_fields_for(ES3Type_bool_t8F309F7B9CC735FF1DEE68081B6E3CAB367745F4_il2cpp_TypeInfo_var))->get_Instance_12();
			NullCheck((ES3Reader_t2780AF8AA61DA2A817115CEF8612AC0E494D03C9 *)L_213);
			bool L_215;
			L_215 = GenericVirtFuncInvoker1< bool, ES3Type_t8FBECB7AE75168648B9524E0C2A38DAD4555421D * >::Invoke(ES3Reader_Read_TisBoolean_t07D1E3F34E4813023D64F584DFF7B34C9D922F37_mC6D1B158268FF9B97822FF9F5B37FB1723FEDA22_RuntimeMethod_var, (ES3Reader_t2780AF8AA61DA2A817115CEF8612AC0E494D03C9 *)L_213, (ES3Type_t8FBECB7AE75168648B9524E0C2A38DAD4555421D *)L_214);
			IL2CPP_RUNTIME_CLASS_INIT(Texture_t9FE0218A1EEDF266E8C85879FE123265CACC95AE_il2cpp_TypeInfo_var);
			Texture_set_streamingTextureForceLoadAll_m325117C0830BB9B4316CF41CEE045759FC52B7A3((bool)L_215, /*hidden argument*/NULL);
			// break;
			goto IL_0721;
		}

IL_06f7:
		{
			// UnityEngine.RenderTexture.streamingTextureDiscardUnusedMips = reader.Read<System.Boolean>(ES3Type_bool.Instance);
			ES3Reader_t2780AF8AA61DA2A817115CEF8612AC0E494D03C9 * L_216 = ___reader0;
			IL2CPP_RUNTIME_CLASS_INIT(ES3Type_bool_t8F309F7B9CC735FF1DEE68081B6E3CAB367745F4_il2cpp_TypeInfo_var);
			ES3Type_t8FBECB7AE75168648B9524E0C2A38DAD4555421D * L_217 = ((ES3Type_bool_t8F309F7B9CC735FF1DEE68081B6E3CAB367745F4_StaticFields*)il2cpp_codegen_static_fields_for(ES3Type_bool_t8F309F7B9CC735FF1DEE68081B6E3CAB367745F4_il2cpp_TypeInfo_var))->get_Instance_12();
			NullCheck((ES3Reader_t2780AF8AA61DA2A817115CEF8612AC0E494D03C9 *)L_216);
			bool L_218;
			L_218 = GenericVirtFuncInvoker1< bool, ES3Type_t8FBECB7AE75168648B9524E0C2A38DAD4555421D * >::Invoke(ES3Reader_Read_TisBoolean_t07D1E3F34E4813023D64F584DFF7B34C9D922F37_mC6D1B158268FF9B97822FF9F5B37FB1723FEDA22_RuntimeMethod_var, (ES3Reader_t2780AF8AA61DA2A817115CEF8612AC0E494D03C9 *)L_216, (ES3Type_t8FBECB7AE75168648B9524E0C2A38DAD4555421D *)L_217);
			IL2CPP_RUNTIME_CLASS_INIT(Texture_t9FE0218A1EEDF266E8C85879FE123265CACC95AE_il2cpp_TypeInfo_var);
			Texture_set_streamingTextureDiscardUnusedMips_mE184CE016A8E0319B437D34E0DB61962CE17F5DC((bool)L_218, /*hidden argument*/NULL);
			// break;
			goto IL_0721;
		}

IL_0709:
		{
			// UnityEngine.RenderTexture.allowThreadedTextureCreation = reader.Read<System.Boolean>(ES3Type_bool.Instance);
			ES3Reader_t2780AF8AA61DA2A817115CEF8612AC0E494D03C9 * L_219 = ___reader0;
			IL2CPP_RUNTIME_CLASS_INIT(ES3Type_bool_t8F309F7B9CC735FF1DEE68081B6E3CAB367745F4_il2cpp_TypeInfo_var);
			ES3Type_t8FBECB7AE75168648B9524E0C2A38DAD4555421D * L_220 = ((ES3Type_bool_t8F309F7B9CC735FF1DEE68081B6E3CAB367745F4_StaticFields*)il2cpp_codegen_static_fields_for(ES3Type_bool_t8F309F7B9CC735FF1DEE68081B6E3CAB367745F4_il2cpp_TypeInfo_var))->get_Instance_12();
			NullCheck((ES3Reader_t2780AF8AA61DA2A817115CEF8612AC0E494D03C9 *)L_219);
			bool L_221;
			L_221 = GenericVirtFuncInvoker1< bool, ES3Type_t8FBECB7AE75168648B9524E0C2A38DAD4555421D * >::Invoke(ES3Reader_Read_TisBoolean_t07D1E3F34E4813023D64F584DFF7B34C9D922F37_mC6D1B158268FF9B97822FF9F5B37FB1723FEDA22_RuntimeMethod_var, (ES3Reader_t2780AF8AA61DA2A817115CEF8612AC0E494D03C9 *)L_219, (ES3Type_t8FBECB7AE75168648B9524E0C2A38DAD4555421D *)L_220);
			IL2CPP_RUNTIME_CLASS_INIT(Texture_t9FE0218A1EEDF266E8C85879FE123265CACC95AE_il2cpp_TypeInfo_var);
			Texture_set_allowThreadedTextureCreation_m84D29394912B9CE876023963426256CBEB15A52E((bool)L_221, /*hidden argument*/NULL);
			// break;
			goto IL_0721;
		}

IL_071b:
		{
			// reader.Skip();
			ES3Reader_t2780AF8AA61DA2A817115CEF8612AC0E494D03C9 * L_222 = ___reader0;
			NullCheck((ES3Reader_t2780AF8AA61DA2A817115CEF8612AC0E494D03C9 *)L_222);
			VirtActionInvoker0::Invoke(41 /* System.Void ES3Reader::Skip() */, (ES3Reader_t2780AF8AA61DA2A817115CEF8612AC0E494D03C9 *)L_222);
		}

IL_0721:
		{
			// foreach (string propertyName in reader.Properties)
			RuntimeObject* L_223 = V_1;
			NullCheck((RuntimeObject*)L_223);
			bool L_224;
			L_224 = InterfaceFuncInvoker0< bool >::Invoke(0 /* System.Boolean System.Collections.IEnumerator::MoveNext() */, IEnumerator_t5956F3AFB7ECF1117E3BC5890E7FC7B7F7A04105_il2cpp_TypeInfo_var, (RuntimeObject*)L_223);
			if (L_224)
			{
				goto IL_0018;
			}
		}

IL_072c:
		{
			IL2CPP_LEAVE(0x742, FINALLY_072e);
		}
	} // end try (depth: 1)
	catch(Il2CppExceptionWrapper& e)
	{
		__last_unhandled_exception = (Exception_t *)e.ex;
		goto FINALLY_072e;
	}

FINALLY_072e:
	{ // begin finally (depth: 1)
		{
			RuntimeObject* L_225 = V_1;
			V_4 = (RuntimeObject*)((RuntimeObject*)IsInst((RuntimeObject*)L_225, IDisposable_t099785737FC6A1E3699919A94109383715A8D807_il2cpp_TypeInfo_var));
			RuntimeObject* L_226 = V_4;
			if (!L_226)
			{
				goto IL_0741;
			}
		}

IL_073a:
		{
			RuntimeObject* L_227 = V_4;
			NullCheck((RuntimeObject*)L_227);
			InterfaceActionInvoker0::Invoke(0 /* System.Void System.IDisposable::Dispose() */, IDisposable_t099785737FC6A1E3699919A94109383715A8D807_il2cpp_TypeInfo_var, (RuntimeObject*)L_227);
		}

IL_0741:
		{
			IL2CPP_END_FINALLY(1838)
		}
	} // end finally (depth: 1)
	IL2CPP_CLEANUP(1838)
	{
		IL2CPP_RETHROW_IF_UNHANDLED(Exception_t *)
		IL2CPP_JUMP_TBL(0x742, IL_0742)
	}

IL_0742:
	{
		// }
		return;
	}
}
// System.Void ES3Types.ES3Type_RenderTexture::ReadObject<UnityEngine.ParticleSystem/MainModule>(ES3Reader,System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ES3Type_RenderTexture_ReadObject_TisMainModule_t671F49558CB1A3CFAAD637A7927C076EC2E61F0B_mB529A576BDFCB237F690CB652AEDA046251AAB2B_gshared (ES3Type_RenderTexture_t7B14573C56809AFDC0A1C481D6B61E2146DEF194 * __this, ES3Reader_t2780AF8AA61DA2A817115CEF8612AC0E494D03C9 * ___reader0, RuntimeObject * ___obj1, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ES3Reader_Read_TisAnisotropicFiltering_tAC3D1448B262D5869946CD1CDD2C8DAE3A7A537B_mAF1268AAC3E461D6E0604A19FAF0325873B6EC8A_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ES3Reader_Read_TisBoolean_t07D1E3F34E4813023D64F584DFF7B34C9D922F37_mC6D1B158268FF9B97822FF9F5B37FB1723FEDA22_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ES3Reader_Read_TisFilterMode_tE90A08FD96A142C761463D65E524BCDBFEEE3D19_m9819C2A442797B4060B0D9A80CFA96CFD6102839_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ES3Reader_Read_TisGraphicsFormat_t07A3C024BC77B843C53A369D6FC02ABD27D2AB1D_mCBD36004B10F649C93215AB4717F6F0D7118BF7D_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ES3Reader_Read_TisInt32_tFDE5F8CD43D10453F6A2E0C77FE48C6CC7009046_m2B74AA6627F5B1D21171D56C42F71DE5A7C1B4A6_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ES3Reader_Read_TisRenderTextureDescriptor_t67FF189E1F35AEB5D6C43A2D7103F3A8A8CA0B47_m427886ADAAF96C7BA9BD423544128494F96D69E7_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ES3Reader_Read_TisRenderTextureFormat_t8371287102ED67772EF78229CF4AB9D38C2CD626_mE6358E03407F5C15B58B292C79D4770DE3FAC95A_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ES3Reader_Read_TisRenderTextureMemoryless_t37547D68C2186D2650440F719302CDA4A3BB7F67_m3A980BA15AADBBB8393C3BC88CE17EEDDC89B027_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ES3Reader_Read_TisSingle_tE07797BA3C98D4CA9B5A19413C19A76688AB899E_m4A0416374498BDA042B8EB21E49B72326D6CE5F4_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ES3Reader_Read_TisString_t_m883861F3B58239392073ABF39876826EEB87DF9C_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ES3Reader_Read_TisTextureDimension_tADCCB7C1D30E4D1182651BA9094B4DE61B63EACC_m19EAA3B93D10636C17A62A3D8437349223CFD988_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ES3Reader_Read_TisTextureWrapMode_t86DDA8206E4AA784A1218D0DE3C5F6826D7549EB_m7926E449CD0B8BD56E5BF145DD0CCFE1C567F107_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ES3Reader_Read_TisVRTextureUsage_t3C09DF3DD90B5620BC0AB6F8078DFEF4E607F645_m7DE3966E4815BB13132866CB005EEE5B90FF51C2_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ES3Type_bool_t8F309F7B9CC735FF1DEE68081B6E3CAB367745F4_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ES3Type_float_tF86B773C86731BD9AD79448B860BBB178FE77644_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ES3Type_int_tF64C15D40AD0CC7C15BCD1CEC3C5C6BF837BD167_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ES3Type_string_tC47BFBE3CC816F3C70B51558C68F0C6470C5EFE5_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IDisposable_t099785737FC6A1E3699919A94109383715A8D807_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IEnumerator_t5956F3AFB7ECF1117E3BC5890E7FC7B7F7A04105_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&RenderTexture_t5FE7A5B47EF962A0E8D7BEBA05E9FC87D49A1849_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&String_t_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Texture_t9FE0218A1EEDF266E8C85879FE123265CACC95AE_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral201D9D00BB60DC2318D21CF9902290EFE255D5DC);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral2ADFC3FFF7C52D554F0435A348A5345C9FCD7FF8);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral2E201D1972661439FD3C8523C55723E7E9BCC7DA);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral2EE7B6B0E37E14930BBA497867139BFD0617CE04);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral3A04F86957625CB28FA670EECF997E6BAD45BBE7);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral3BC15E3C2F40466B2DC85C4776499817B8306CBB);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral3F1522C8DB7943F2AE3AA1563D3AC25D9C8B93D1);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral53D3413057D7E52F44470A335C590748745352B1);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral647E0FB2B5E859CC4BD7C73623B82C8EFABA2563);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral65B008F04EC40A696263EF679CF274BD10999A5D);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral71C5F9C3E2F3C81C5BBC7FD313F6938654E61138);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral75C9716749EA210206E3467390B7A11F3F33DDFA);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral7606720A7AEF5939309A8E4FCB8274252FA3D7BF);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral7A4A6E2A7090298F814A9D44C89F8634249BEF07);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral7FF61C3A55BCA1287974D8740F945250B3F0F084);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral83AC9669A9053DD15B9F2E82D2CE2369EFE131BA);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral95F57476C0AA778364404E7CCCD7499BF1BF3757);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral9AB5ADF8A8A53110245466F7C226F7935F5FE95F);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralB49A1DF483856544CEC6018E8C944DB6E16A8D57);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralBA9362732D25B1644B7D8DEC5DF6F036A4A66DE5);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralC959D767B7F0BD38D9DA8A64A4750C3A0972E2A0);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralCD44AC57FFE6CAC7824F4CAA223F1BB8B4CB0D73);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralCE18B047107AA23D1AA9B2ED32D316148E02655F);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralEA8FBF382D8AC9EDB8FFC14A350641B987F5C631);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralEBF5FE0CBF3EEA67902EEA700B7216E3DB0D8E84);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralECAEEB225F8689DE45DEB4FA21CE34E1960B1B50);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralF23E83744C9D6FC70D71B723AAED8006D6780BCB);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralF2AF7DD0BFF41B7B35037F018DAABE7DCF357A7B);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralF38CFAE6A91D072D4453C29FF44D81D459A582F1);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralF3FA58C10BBB9830102605E24AF89DC619908DFA);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralF9EE582B77C320A1F6A3DF72205857C4248BAC79);
		s_Il2CppMethodInitialized = true;
	}
	RenderTexture_t5FE7A5B47EF962A0E8D7BEBA05E9FC87D49A1849 * V_0 = NULL;
	RuntimeObject* V_1 = NULL;
	String_t* V_2 = NULL;
	uint32_t V_3 = 0;
	RuntimeObject* V_4 = NULL;
	Exception_t * __last_unhandled_exception = 0;
	il2cpp::utils::ExceptionSupportStack<int32_t, 1> __leave_targets;
	{
		// var instance = (UnityEngine.RenderTexture)obj;
		RuntimeObject * L_0 = ___obj1;
		V_0 = (RenderTexture_t5FE7A5B47EF962A0E8D7BEBA05E9FC87D49A1849 *)((RenderTexture_t5FE7A5B47EF962A0E8D7BEBA05E9FC87D49A1849 *)Castclass((RuntimeObject*)L_0, RenderTexture_t5FE7A5B47EF962A0E8D7BEBA05E9FC87D49A1849_il2cpp_TypeInfo_var));
		// foreach (string propertyName in reader.Properties)
		ES3Reader_t2780AF8AA61DA2A817115CEF8612AC0E494D03C9 * L_1 = ___reader0;
		NullCheck((ES3Reader_t2780AF8AA61DA2A817115CEF8612AC0E494D03C9 *)L_1);
		ES3ReaderPropertyEnumerator_tFC854F4BE72BFA234682EB1909D92457534A979D * L_2;
		L_2 = VirtFuncInvoker0< ES3ReaderPropertyEnumerator_tFC854F4BE72BFA234682EB1909D92457534A979D * >::Invoke(39 /* ES3Reader/ES3ReaderPropertyEnumerator ES3Reader::get_Properties() */, (ES3Reader_t2780AF8AA61DA2A817115CEF8612AC0E494D03C9 *)L_1);
		NullCheck((ES3ReaderPropertyEnumerator_tFC854F4BE72BFA234682EB1909D92457534A979D *)L_2);
		RuntimeObject* L_3;
		L_3 = ES3ReaderPropertyEnumerator_GetEnumerator_m6C61168655E3736E7847E5CB1CD9BC6B48442FD4((ES3ReaderPropertyEnumerator_tFC854F4BE72BFA234682EB1909D92457534A979D *)L_2, /*hidden argument*/NULL);
		V_1 = (RuntimeObject*)L_3;
	}

IL_0013:
	try
	{ // begin try (depth: 1)
		{
			goto IL_0721;
		}

IL_0018:
		{
			// foreach (string propertyName in reader.Properties)
			RuntimeObject* L_4 = V_1;
			NullCheck((RuntimeObject*)L_4);
			RuntimeObject * L_5;
			L_5 = InterfaceFuncInvoker0< RuntimeObject * >::Invoke(1 /* System.Object System.Collections.IEnumerator::get_Current() */, IEnumerator_t5956F3AFB7ECF1117E3BC5890E7FC7B7F7A04105_il2cpp_TypeInfo_var, (RuntimeObject*)L_4);
			V_2 = (String_t*)((String_t*)Castclass((RuntimeObject*)L_5, String_t_il2cpp_TypeInfo_var));
			String_t* L_6 = V_2;
			if (!L_6)
			{
				goto IL_071b;
			}
		}

IL_002a:
		{
			String_t* L_7 = V_2;
			uint32_t L_8;
			L_8 = U3CPrivateImplementationDetailsU3E_ComputeStringHash_m3ADC1F612F9EE3DD518E6F0023A0DE0EE2B120A7((String_t*)L_7, /*hidden argument*/NULL);
			V_3 = (uint32_t)L_8;
			uint32_t L_9 = V_3;
			if ((!(((uint32_t)L_9) <= ((uint32_t)((int32_t)1508062721)))))
			{
				goto IL_0134;
			}
		}

IL_003c:
		{
			uint32_t L_10 = V_3;
			if ((!(((uint32_t)L_10) <= ((uint32_t)((int32_t)698754697)))))
			{
				goto IL_00b0;
			}
		}

IL_0044:
		{
			uint32_t L_11 = V_3;
			if ((!(((uint32_t)L_11) <= ((uint32_t)((int32_t)472844700)))))
			{
				goto IL_0072;
			}
		}

IL_004c:
		{
			uint32_t L_12 = V_3;
			if ((((int32_t)L_12) == ((int32_t)((int32_t)87590155))))
			{
				goto IL_043c;
			}
		}

IL_0057:
		{
			uint32_t L_13 = V_3;
			if ((((int32_t)L_13) == ((int32_t)((int32_t)301255720))))
			{
				goto IL_02d7;
			}
		}

IL_0062:
		{
			uint32_t L_14 = V_3;
			if ((((int32_t)L_14) == ((int32_t)((int32_t)472844700))))
			{
				goto IL_0283;
			}
		}

IL_006d:
		{
			goto IL_071b;
		}

IL_0072:
		{
			uint32_t L_15 = V_3;
			if ((!(((uint32_t)L_15) <= ((uint32_t)((int32_t)549791583)))))
			{
				goto IL_0095;
			}
		}

IL_007a:
		{
			uint32_t L_16 = V_3;
			if ((((int32_t)L_16) == ((int32_t)((int32_t)533013964))))
			{
				goto IL_03a9;
			}
		}

IL_0085:
		{
			uint32_t L_17 = V_3;
			if ((((int32_t)L_17) == ((int32_t)((int32_t)549791583))))
			{
				goto IL_03be;
			}
		}

IL_0090:
		{
			goto IL_071b;
		}

IL_0095:
		{
			uint32_t L_18 = V_3;
			if ((((int32_t)L_18) == ((int32_t)((int32_t)583346821))))
			{
				goto IL_0394;
			}
		}

IL_00a0:
		{
			uint32_t L_19 = V_3;
			if ((((int32_t)L_19) == ((int32_t)((int32_t)698754697))))
			{
				goto IL_02ec;
			}
		}

IL_00ab:
		{
			goto IL_071b;
		}

IL_00b0:
		{
			uint32_t L_20 = V_3;
			if ((!(((uint32_t)L_20) <= ((uint32_t)((int32_t)1235622516)))))
			{
				goto IL_00f6;
			}
		}

IL_00b8:
		{
			uint32_t L_21 = V_3;
			if ((!(((uint32_t)L_21) <= ((uint32_t)((int32_t)740612720)))))
			{
				goto IL_00db;
			}
		}

IL_00c0:
		{
			uint32_t L_22 = V_3;
			if ((((int32_t)L_22) == ((int32_t)((int32_t)705796271))))
			{
				goto IL_0316;
			}
		}

IL_00cb:
		{
			uint32_t L_23 = V_3;
			if ((((int32_t)L_23) == ((int32_t)((int32_t)740612720))))
			{
				goto IL_03d3;
			}
		}

IL_00d6:
		{
			goto IL_071b;
		}

IL_00db:
		{
			uint32_t L_24 = V_3;
			if ((((int32_t)L_24) == ((int32_t)((int32_t)1059843136))))
			{
				goto IL_0340;
			}
		}

IL_00e6:
		{
			uint32_t L_25 = V_3;
			if ((((int32_t)L_25) == ((int32_t)((int32_t)1235622516))))
			{
				goto IL_036a;
			}
		}

IL_00f1:
		{
			goto IL_071b;
		}

IL_00f6:
		{
			uint32_t L_26 = V_3;
			if ((!(((uint32_t)L_26) <= ((uint32_t)((int32_t)1320492961)))))
			{
				goto IL_0119;
			}
		}

IL_00fe:
		{
			uint32_t L_27 = V_3;
			if ((((int32_t)L_27) == ((int32_t)((int32_t)1310955452))))
			{
				goto IL_0490;
			}
		}

IL_0109:
		{
			uint32_t L_28 = V_3;
			if ((((int32_t)L_28) == ((int32_t)((int32_t)1320492961))))
			{
				goto IL_047b;
			}
		}

IL_0114:
		{
			goto IL_071b;
		}

IL_0119:
		{
			uint32_t L_29 = V_3;
			if ((((int32_t)L_29) == ((int32_t)((int32_t)1458352709))))
			{
				goto IL_0466;
			}
		}

IL_0124:
		{
			uint32_t L_30 = V_3;
			if ((((int32_t)L_30) == ((int32_t)((int32_t)1508062721))))
			{
				goto IL_04a5;
			}
		}

IL_012f:
		{
			goto IL_071b;
		}

IL_0134:
		{
			uint32_t L_31 = V_3;
			if ((!(((uint32_t)L_31) <= ((uint32_t)((int32_t)-1444332543)))))
			{
				goto IL_01c3;
			}
		}

IL_013f:
		{
			uint32_t L_32 = V_3;
			if ((!(((uint32_t)L_32) <= ((uint32_t)((int32_t)2129631044)))))
			{
				goto IL_0185;
			}
		}

IL_0147:
		{
			uint32_t L_33 = V_3;
			if ((!(((uint32_t)L_33) <= ((uint32_t)((int32_t)1640355324)))))
			{
				goto IL_016a;
			}
		}

IL_014f:
		{
			uint32_t L_34 = V_3;
			if ((((int32_t)L_34) == ((int32_t)((int32_t)1560124071))))
			{
				goto IL_04ba;
			}
		}

IL_015a:
		{
			uint32_t L_35 = V_3;
			if ((((int32_t)L_35) == ((int32_t)((int32_t)1640355324))))
			{
				goto IL_0451;
			}
		}

IL_0165:
		{
			goto IL_071b;
		}

IL_016a:
		{
			uint32_t L_36 = V_3;
			if ((((int32_t)L_36) == ((int32_t)((int32_t)1728801507))))
			{
				goto IL_026e;
			}
		}

IL_0175:
		{
			uint32_t L_37 = V_3;
			if ((((int32_t)L_37) == ((int32_t)((int32_t)2129631044))))
			{
				goto IL_03fd;
			}
		}

IL_0180:
		{
			goto IL_071b;
		}

IL_0185:
		{
			uint32_t L_38 = V_3;
			if ((!(((uint32_t)L_38) <= ((uint32_t)((int32_t)-1786286561)))))
			{
				goto IL_01a8;
			}
		}

IL_018d:
		{
			uint32_t L_39 = V_3;
			if ((((int32_t)L_39) == ((int32_t)((int32_t)-1925595674))))
			{
				goto IL_0412;
			}
		}

IL_0198:
		{
			uint32_t L_40 = V_3;
			if ((((int32_t)L_40) == ((int32_t)((int32_t)-1786286561))))
			{
				goto IL_0244;
			}
		}

IL_01a3:
		{
			goto IL_071b;
		}

IL_01a8:
		{
			uint32_t L_41 = V_3;
			if ((((int32_t)L_41) == ((int32_t)((int32_t)-1522491664))))
			{
				goto IL_0298;
			}
		}

IL_01b3:
		{
			uint32_t L_42 = V_3;
			if ((((int32_t)L_42) == ((int32_t)((int32_t)-1444332543))))
			{
				goto IL_0355;
			}
		}

IL_01be:
		{
			goto IL_071b;
		}

IL_01c3:
		{
			uint32_t L_43 = V_3;
			if ((!(((uint32_t)L_43) <= ((uint32_t)((int32_t)-558361902)))))
			{
				goto IL_0206;
			}
		}

IL_01cb:
		{
			uint32_t L_44 = V_3;
			if ((!(((uint32_t)L_44) <= ((uint32_t)((int32_t)-1180859054)))))
			{
				goto IL_01ee;
			}
		}

IL_01d3:
		{
			uint32_t L_45 = V_3;
			if ((((int32_t)L_45) == ((int32_t)((int32_t)-1335745110))))
			{
				goto IL_02c2;
			}
		}

IL_01de:
		{
			uint32_t L_46 = V_3;
			if ((((int32_t)L_46) == ((int32_t)((int32_t)-1180859054))))
			{
				goto IL_02ad;
			}
		}

IL_01e9:
		{
			goto IL_071b;
		}

IL_01ee:
		{
			uint32_t L_47 = V_3;
			if ((((int32_t)L_47) == ((int32_t)((int32_t)-708986046))))
			{
				goto IL_0259;
			}
		}

IL_01f6:
		{
			uint32_t L_48 = V_3;
			if ((((int32_t)L_48) == ((int32_t)((int32_t)-558361902))))
			{
				goto IL_037f;
			}
		}

IL_0201:
		{
			goto IL_071b;
		}

IL_0206:
		{
			uint32_t L_49 = V_3;
			if ((!(((uint32_t)L_49) <= ((uint32_t)((int32_t)-255211260)))))
			{
				goto IL_0229;
			}
		}

IL_020e:
		{
			uint32_t L_50 = V_3;
			if ((((int32_t)L_50) == ((int32_t)((int32_t)-345285761))))
			{
				goto IL_03e8;
			}
		}

IL_0219:
		{
			uint32_t L_51 = V_3;
			if ((((int32_t)L_51) == ((int32_t)((int32_t)-255211260))))
			{
				goto IL_0427;
			}
		}

IL_0224:
		{
			goto IL_071b;
		}

IL_0229:
		{
			uint32_t L_52 = V_3;
			if ((((int32_t)L_52) == ((int32_t)((int32_t)-42086080))))
			{
				goto IL_0301;
			}
		}

IL_0234:
		{
			uint32_t L_53 = V_3;
			if ((((int32_t)L_53) == ((int32_t)((int32_t)-25846038))))
			{
				goto IL_032b;
			}
		}

IL_023f:
		{
			goto IL_071b;
		}

IL_0244:
		{
			String_t* L_54 = V_2;
			bool L_55;
			L_55 = String_op_Equality_m50B3548E4AC232558190B0052877B290AA1D436A((String_t*)L_54, (String_t*)_stringLiteralEBF5FE0CBF3EEA67902EEA700B7216E3DB0D8E84, /*hidden argument*/NULL);
			if (L_55)
			{
				goto IL_04cf;
			}
		}

IL_0254:
		{
			goto IL_071b;
		}

IL_0259:
		{
			String_t* L_56 = V_2;
			bool L_57;
			L_57 = String_op_Equality_m50B3548E4AC232558190B0052877B290AA1D436A((String_t*)L_56, (String_t*)_stringLiteral647E0FB2B5E859CC4BD7C73623B82C8EFABA2563, /*hidden argument*/NULL);
			if (L_57)
			{
				goto IL_04e5;
			}
		}

IL_0269:
		{
			goto IL_071b;
		}

IL_026e:
		{
			String_t* L_58 = V_2;
			bool L_59;
			L_59 = String_op_Equality_m50B3548E4AC232558190B0052877B290AA1D436A((String_t*)L_58, (String_t*)_stringLiteralF9EE582B77C320A1F6A3DF72205857C4248BAC79, /*hidden argument*/NULL);
			if (L_59)
			{
				goto IL_04fb;
			}
		}

IL_027e:
		{
			goto IL_071b;
		}

IL_0283:
		{
			String_t* L_60 = V_2;
			bool L_61;
			L_61 = String_op_Equality_m50B3548E4AC232558190B0052877B290AA1D436A((String_t*)L_60, (String_t*)_stringLiteral53D3413057D7E52F44470A335C590748745352B1, /*hidden argument*/NULL);
			if (L_61)
			{
				goto IL_050c;
			}
		}

IL_0293:
		{
			goto IL_071b;
		}

IL_0298:
		{
			String_t* L_62 = V_2;
			bool L_63;
			L_63 = String_op_Equality_m50B3548E4AC232558190B0052877B290AA1D436A((String_t*)L_62, (String_t*)_stringLiteralC959D767B7F0BD38D9DA8A64A4750C3A0972E2A0, /*hidden argument*/NULL);
			if (L_63)
			{
				goto IL_0522;
			}
		}

IL_02a8:
		{
			goto IL_071b;
		}

IL_02ad:
		{
			String_t* L_64 = V_2;
			bool L_65;
			L_65 = String_op_Equality_m50B3548E4AC232558190B0052877B290AA1D436A((String_t*)L_64, (String_t*)_stringLiteral75C9716749EA210206E3467390B7A11F3F33DDFA, /*hidden argument*/NULL);
			if (L_65)
			{
				goto IL_0533;
			}
		}

IL_02bd:
		{
			goto IL_071b;
		}

IL_02c2:
		{
			String_t* L_66 = V_2;
			bool L_67;
			L_67 = String_op_Equality_m50B3548E4AC232558190B0052877B290AA1D436A((String_t*)L_66, (String_t*)_stringLiteral7606720A7AEF5939309A8E4FCB8274252FA3D7BF, /*hidden argument*/NULL);
			if (L_67)
			{
				goto IL_0544;
			}
		}

IL_02d2:
		{
			goto IL_071b;
		}

IL_02d7:
		{
			String_t* L_68 = V_2;
			bool L_69;
			L_69 = String_op_Equality_m50B3548E4AC232558190B0052877B290AA1D436A((String_t*)L_68, (String_t*)_stringLiteral71C5F9C3E2F3C81C5BBC7FD313F6938654E61138, /*hidden argument*/NULL);
			if (L_69)
			{
				goto IL_055a;
			}
		}

IL_02e7:
		{
			goto IL_071b;
		}

IL_02ec:
		{
			String_t* L_70 = V_2;
			bool L_71;
			L_71 = String_op_Equality_m50B3548E4AC232558190B0052877B290AA1D436A((String_t*)L_70, (String_t*)_stringLiteral3F1522C8DB7943F2AE3AA1563D3AC25D9C8B93D1, /*hidden argument*/NULL);
			if (L_71)
			{
				goto IL_0570;
			}
		}

IL_02fc:
		{
			goto IL_071b;
		}

IL_0301:
		{
			String_t* L_72 = V_2;
			bool L_73;
			L_73 = String_op_Equality_m50B3548E4AC232558190B0052877B290AA1D436A((String_t*)L_72, (String_t*)_stringLiteralF23E83744C9D6FC70D71B723AAED8006D6780BCB, /*hidden argument*/NULL);
			if (L_73)
			{
				goto IL_0586;
			}
		}

IL_0311:
		{
			goto IL_071b;
		}

IL_0316:
		{
			String_t* L_74 = V_2;
			bool L_75;
			L_75 = String_op_Equality_m50B3548E4AC232558190B0052877B290AA1D436A((String_t*)L_74, (String_t*)_stringLiteralB49A1DF483856544CEC6018E8C944DB6E16A8D57, /*hidden argument*/NULL);
			if (L_75)
			{
				goto IL_059c;
			}
		}

IL_0326:
		{
			goto IL_071b;
		}

IL_032b:
		{
			String_t* L_76 = V_2;
			bool L_77;
			L_77 = String_op_Equality_m50B3548E4AC232558190B0052877B290AA1D436A((String_t*)L_76, (String_t*)_stringLiteral3A04F86957625CB28FA670EECF997E6BAD45BBE7, /*hidden argument*/NULL);
			if (L_77)
			{
				goto IL_05b2;
			}
		}

IL_033b:
		{
			goto IL_071b;
		}

IL_0340:
		{
			String_t* L_78 = V_2;
			bool L_79;
			L_79 = String_op_Equality_m50B3548E4AC232558190B0052877B290AA1D436A((String_t*)L_78, (String_t*)_stringLiteral7A4A6E2A7090298F814A9D44C89F8634249BEF07, /*hidden argument*/NULL);
			if (L_79)
			{
				goto IL_05c8;
			}
		}

IL_0350:
		{
			goto IL_071b;
		}

IL_0355:
		{
			String_t* L_80 = V_2;
			bool L_81;
			L_81 = String_op_Equality_m50B3548E4AC232558190B0052877B290AA1D436A((String_t*)L_80, (String_t*)_stringLiteralF3FA58C10BBB9830102605E24AF89DC619908DFA, /*hidden argument*/NULL);
			if (L_81)
			{
				goto IL_05d9;
			}
		}

IL_0365:
		{
			goto IL_071b;
		}

IL_036a:
		{
			String_t* L_82 = V_2;
			bool L_83;
			L_83 = String_op_Equality_m50B3548E4AC232558190B0052877B290AA1D436A((String_t*)L_82, (String_t*)_stringLiteralBA9362732D25B1644B7D8DEC5DF6F036A4A66DE5, /*hidden argument*/NULL);
			if (L_83)
			{
				goto IL_05ee;
			}
		}

IL_037a:
		{
			goto IL_071b;
		}

IL_037f:
		{
			String_t* L_84 = V_2;
			bool L_85;
			L_85 = String_op_Equality_m50B3548E4AC232558190B0052877B290AA1D436A((String_t*)L_84, (String_t*)_stringLiteral95F57476C0AA778364404E7CCCD7499BF1BF3757, /*hidden argument*/NULL);
			if (L_85)
			{
				goto IL_05fe;
			}
		}

IL_038f:
		{
			goto IL_071b;
		}

IL_0394:
		{
			String_t* L_86 = V_2;
			bool L_87;
			L_87 = String_op_Equality_m50B3548E4AC232558190B0052877B290AA1D436A((String_t*)L_86, (String_t*)_stringLiteral9AB5ADF8A8A53110245466F7C226F7935F5FE95F, /*hidden argument*/NULL);
			if (L_87)
			{
				goto IL_060f;
			}
		}

IL_03a4:
		{
			goto IL_071b;
		}

IL_03a9:
		{
			String_t* L_88 = V_2;
			bool L_89;
			L_89 = String_op_Equality_m50B3548E4AC232558190B0052877B290AA1D436A((String_t*)L_88, (String_t*)_stringLiteralEA8FBF382D8AC9EDB8FFC14A350641B987F5C631, /*hidden argument*/NULL);
			if (L_89)
			{
				goto IL_0620;
			}
		}

IL_03b9:
		{
			goto IL_071b;
		}

IL_03be:
		{
			String_t* L_90 = V_2;
			bool L_91;
			L_91 = String_op_Equality_m50B3548E4AC232558190B0052877B290AA1D436A((String_t*)L_90, (String_t*)_stringLiteral201D9D00BB60DC2318D21CF9902290EFE255D5DC, /*hidden argument*/NULL);
			if (L_91)
			{
				goto IL_0631;
			}
		}

IL_03ce:
		{
			goto IL_071b;
		}

IL_03d3:
		{
			String_t* L_92 = V_2;
			bool L_93;
			L_93 = String_op_Equality_m50B3548E4AC232558190B0052877B290AA1D436A((String_t*)L_92, (String_t*)_stringLiteral65B008F04EC40A696263EF679CF274BD10999A5D, /*hidden argument*/NULL);
			if (L_93)
			{
				goto IL_0642;
			}
		}

IL_03e3:
		{
			goto IL_071b;
		}

IL_03e8:
		{
			String_t* L_94 = V_2;
			bool L_95;
			L_95 = String_op_Equality_m50B3548E4AC232558190B0052877B290AA1D436A((String_t*)L_94, (String_t*)_stringLiteralF38CFAE6A91D072D4453C29FF44D81D459A582F1, /*hidden argument*/NULL);
			if (L_95)
			{
				goto IL_0653;
			}
		}

IL_03f8:
		{
			goto IL_071b;
		}

IL_03fd:
		{
			String_t* L_96 = V_2;
			bool L_97;
			L_97 = String_op_Equality_m50B3548E4AC232558190B0052877B290AA1D436A((String_t*)L_96, (String_t*)_stringLiteral3BC15E3C2F40466B2DC85C4776499817B8306CBB, /*hidden argument*/NULL);
			if (L_97)
			{
				goto IL_0669;
			}
		}

IL_040d:
		{
			goto IL_071b;
		}

IL_0412:
		{
			String_t* L_98 = V_2;
			bool L_99;
			L_99 = String_op_Equality_m50B3548E4AC232558190B0052877B290AA1D436A((String_t*)L_98, (String_t*)_stringLiteralCE18B047107AA23D1AA9B2ED32D316148E02655F, /*hidden argument*/NULL);
			if (L_99)
			{
				goto IL_067f;
			}
		}

IL_0422:
		{
			goto IL_071b;
		}

IL_0427:
		{
			String_t* L_100 = V_2;
			bool L_101;
			L_101 = String_op_Equality_m50B3548E4AC232558190B0052877B290AA1D436A((String_t*)L_100, (String_t*)_stringLiteral83AC9669A9053DD15B9F2E82D2CE2369EFE131BA, /*hidden argument*/NULL);
			if (L_101)
			{
				goto IL_0695;
			}
		}

IL_0437:
		{
			goto IL_071b;
		}

IL_043c:
		{
			String_t* L_102 = V_2;
			bool L_103;
			L_103 = String_op_Equality_m50B3548E4AC232558190B0052877B290AA1D436A((String_t*)L_102, (String_t*)_stringLiteralECAEEB225F8689DE45DEB4FA21CE34E1960B1B50, /*hidden argument*/NULL);
			if (L_103)
			{
				goto IL_06a3;
			}
		}

IL_044c:
		{
			goto IL_071b;
		}

IL_0451:
		{
			String_t* L_104 = V_2;
			bool L_105;
			L_105 = String_op_Equality_m50B3548E4AC232558190B0052877B290AA1D436A((String_t*)L_104, (String_t*)_stringLiteral2EE7B6B0E37E14930BBA497867139BFD0617CE04, /*hidden argument*/NULL);
			if (L_105)
			{
				goto IL_06b1;
			}
		}

IL_0461:
		{
			goto IL_071b;
		}

IL_0466:
		{
			String_t* L_106 = V_2;
			bool L_107;
			L_107 = String_op_Equality_m50B3548E4AC232558190B0052877B290AA1D436A((String_t*)L_106, (String_t*)_stringLiteralF2AF7DD0BFF41B7B35037F018DAABE7DCF357A7B, /*hidden argument*/NULL);
			if (L_107)
			{
				goto IL_06bf;
			}
		}

IL_0476:
		{
			goto IL_071b;
		}

IL_047b:
		{
			String_t* L_108 = V_2;
			bool L_109;
			L_109 = String_op_Equality_m50B3548E4AC232558190B0052877B290AA1D436A((String_t*)L_108, (String_t*)_stringLiteral7FF61C3A55BCA1287974D8740F945250B3F0F084, /*hidden argument*/NULL);
			if (L_109)
			{
				goto IL_06d2;
			}
		}

IL_048b:
		{
			goto IL_071b;
		}

IL_0490:
		{
			String_t* L_110 = V_2;
			bool L_111;
			L_111 = String_op_Equality_m50B3548E4AC232558190B0052877B290AA1D436A((String_t*)L_110, (String_t*)_stringLiteral2ADFC3FFF7C52D554F0435A348A5345C9FCD7FF8, /*hidden argument*/NULL);
			if (L_111)
			{
				goto IL_06e5;
			}
		}

IL_04a0:
		{
			goto IL_071b;
		}

IL_04a5:
		{
			String_t* L_112 = V_2;
			bool L_113;
			L_113 = String_op_Equality_m50B3548E4AC232558190B0052877B290AA1D436A((String_t*)L_112, (String_t*)_stringLiteral2E201D1972661439FD3C8523C55723E7E9BCC7DA, /*hidden argument*/NULL);
			if (L_113)
			{
				goto IL_06f7;
			}
		}

IL_04b5:
		{
			goto IL_071b;
		}

IL_04ba:
		{
			String_t* L_114 = V_2;
			bool L_115;
			L_115 = String_op_Equality_m50B3548E4AC232558190B0052877B290AA1D436A((String_t*)L_114, (String_t*)_stringLiteralCD44AC57FFE6CAC7824F4CAA223F1BB8B4CB0D73, /*hidden argument*/NULL);
			if (L_115)
			{
				goto IL_0709;
			}
		}

IL_04ca:
		{
			goto IL_071b;
		}

IL_04cf:
		{
			// instance.width = reader.Read<System.Int32>(ES3Type_int.Instance);
			RenderTexture_t5FE7A5B47EF962A0E8D7BEBA05E9FC87D49A1849 * L_116 = V_0;
			ES3Reader_t2780AF8AA61DA2A817115CEF8612AC0E494D03C9 * L_117 = ___reader0;
			IL2CPP_RUNTIME_CLASS_INIT(ES3Type_int_tF64C15D40AD0CC7C15BCD1CEC3C5C6BF837BD167_il2cpp_TypeInfo_var);
			ES3Type_t8FBECB7AE75168648B9524E0C2A38DAD4555421D * L_118 = ((ES3Type_int_tF64C15D40AD0CC7C15BCD1CEC3C5C6BF837BD167_StaticFields*)il2cpp_codegen_static_fields_for(ES3Type_int_tF64C15D40AD0CC7C15BCD1CEC3C5C6BF837BD167_il2cpp_TypeInfo_var))->get_Instance_12();
			NullCheck((ES3Reader_t2780AF8AA61DA2A817115CEF8612AC0E494D03C9 *)L_117);
			int32_t L_119;
			L_119 = GenericVirtFuncInvoker1< int32_t, ES3Type_t8FBECB7AE75168648B9524E0C2A38DAD4555421D * >::Invoke(ES3Reader_Read_TisInt32_tFDE5F8CD43D10453F6A2E0C77FE48C6CC7009046_m2B74AA6627F5B1D21171D56C42F71DE5A7C1B4A6_RuntimeMethod_var, (ES3Reader_t2780AF8AA61DA2A817115CEF8612AC0E494D03C9 *)L_117, (ES3Type_t8FBECB7AE75168648B9524E0C2A38DAD4555421D *)L_118);
			NullCheck((Texture_t9FE0218A1EEDF266E8C85879FE123265CACC95AE *)L_116);
			VirtActionInvoker1< int32_t >::Invoke(6 /* System.Void UnityEngine.Texture::set_width(System.Int32) */, (Texture_t9FE0218A1EEDF266E8C85879FE123265CACC95AE *)L_116, (int32_t)L_119);
			// break;
			goto IL_0721;
		}

IL_04e5:
		{
			// instance.height = reader.Read<System.Int32>(ES3Type_int.Instance);
			RenderTexture_t5FE7A5B47EF962A0E8D7BEBA05E9FC87D49A1849 * L_120 = V_0;
			ES3Reader_t2780AF8AA61DA2A817115CEF8612AC0E494D03C9 * L_121 = ___reader0;
			IL2CPP_RUNTIME_CLASS_INIT(ES3Type_int_tF64C15D40AD0CC7C15BCD1CEC3C5C6BF837BD167_il2cpp_TypeInfo_var);
			ES3Type_t8FBECB7AE75168648B9524E0C2A38DAD4555421D * L_122 = ((ES3Type_int_tF64C15D40AD0CC7C15BCD1CEC3C5C6BF837BD167_StaticFields*)il2cpp_codegen_static_fields_for(ES3Type_int_tF64C15D40AD0CC7C15BCD1CEC3C5C6BF837BD167_il2cpp_TypeInfo_var))->get_Instance_12();
			NullCheck((ES3Reader_t2780AF8AA61DA2A817115CEF8612AC0E494D03C9 *)L_121);
			int32_t L_123;
			L_123 = GenericVirtFuncInvoker1< int32_t, ES3Type_t8FBECB7AE75168648B9524E0C2A38DAD4555421D * >::Invoke(ES3Reader_Read_TisInt32_tFDE5F8CD43D10453F6A2E0C77FE48C6CC7009046_m2B74AA6627F5B1D21171D56C42F71DE5A7C1B4A6_RuntimeMethod_var, (ES3Reader_t2780AF8AA61DA2A817115CEF8612AC0E494D03C9 *)L_121, (ES3Type_t8FBECB7AE75168648B9524E0C2A38DAD4555421D *)L_122);
			NullCheck((Texture_t9FE0218A1EEDF266E8C85879FE123265CACC95AE *)L_120);
			VirtActionInvoker1< int32_t >::Invoke(8 /* System.Void UnityEngine.Texture::set_height(System.Int32) */, (Texture_t9FE0218A1EEDF266E8C85879FE123265CACC95AE *)L_120, (int32_t)L_123);
			// break;
			goto IL_0721;
		}

IL_04fb:
		{
			// instance.dimension = reader.Read<UnityEngine.Rendering.TextureDimension>();
			RenderTexture_t5FE7A5B47EF962A0E8D7BEBA05E9FC87D49A1849 * L_124 = V_0;
			ES3Reader_t2780AF8AA61DA2A817115CEF8612AC0E494D03C9 * L_125 = ___reader0;
			NullCheck((ES3Reader_t2780AF8AA61DA2A817115CEF8612AC0E494D03C9 *)L_125);
			int32_t L_126;
			L_126 = GenericVirtFuncInvoker0< int32_t >::Invoke(ES3Reader_Read_TisTextureDimension_tADCCB7C1D30E4D1182651BA9094B4DE61B63EACC_m19EAA3B93D10636C17A62A3D8437349223CFD988_RuntimeMethod_var, (ES3Reader_t2780AF8AA61DA2A817115CEF8612AC0E494D03C9 *)L_125);
			NullCheck((Texture_t9FE0218A1EEDF266E8C85879FE123265CACC95AE *)L_124);
			VirtActionInvoker1< int32_t >::Invoke(10 /* System.Void UnityEngine.Texture::set_dimension(UnityEngine.Rendering.TextureDimension) */, (Texture_t9FE0218A1EEDF266E8C85879FE123265CACC95AE *)L_124, (int32_t)L_126);
			// break;
			goto IL_0721;
		}

IL_050c:
		{
			// instance.useMipMap = reader.Read<System.Boolean>(ES3Type_bool.Instance);
			RenderTexture_t5FE7A5B47EF962A0E8D7BEBA05E9FC87D49A1849 * L_127 = V_0;
			ES3Reader_t2780AF8AA61DA2A817115CEF8612AC0E494D03C9 * L_128 = ___reader0;
			IL2CPP_RUNTIME_CLASS_INIT(ES3Type_bool_t8F309F7B9CC735FF1DEE68081B6E3CAB367745F4_il2cpp_TypeInfo_var);
			ES3Type_t8FBECB7AE75168648B9524E0C2A38DAD4555421D * L_129 = ((ES3Type_bool_t8F309F7B9CC735FF1DEE68081B6E3CAB367745F4_StaticFields*)il2cpp_codegen_static_fields_for(ES3Type_bool_t8F309F7B9CC735FF1DEE68081B6E3CAB367745F4_il2cpp_TypeInfo_var))->get_Instance_12();
			NullCheck((ES3Reader_t2780AF8AA61DA2A817115CEF8612AC0E494D03C9 *)L_128);
			bool L_130;
			L_130 = GenericVirtFuncInvoker1< bool, ES3Type_t8FBECB7AE75168648B9524E0C2A38DAD4555421D * >::Invoke(ES3Reader_Read_TisBoolean_t07D1E3F34E4813023D64F584DFF7B34C9D922F37_mC6D1B158268FF9B97822FF9F5B37FB1723FEDA22_RuntimeMethod_var, (ES3Reader_t2780AF8AA61DA2A817115CEF8612AC0E494D03C9 *)L_128, (ES3Type_t8FBECB7AE75168648B9524E0C2A38DAD4555421D *)L_129);
			NullCheck((RenderTexture_t5FE7A5B47EF962A0E8D7BEBA05E9FC87D49A1849 *)L_127);
			RenderTexture_set_useMipMap_mAE1437C3D7D21441891A612C3B812EE9C379F126((RenderTexture_t5FE7A5B47EF962A0E8D7BEBA05E9FC87D49A1849 *)L_127, (bool)L_130, /*hidden argument*/NULL);
			// break;
			goto IL_0721;
		}

IL_0522:
		{
			// instance.memorylessMode = reader.Read<UnityEngine.RenderTextureMemoryless>();
			RenderTexture_t5FE7A5B47EF962A0E8D7BEBA05E9FC87D49A1849 * L_131 = V_0;
			ES3Reader_t2780AF8AA61DA2A817115CEF8612AC0E494D03C9 * L_132 = ___reader0;
			NullCheck((ES3Reader_t2780AF8AA61DA2A817115CEF8612AC0E494D03C9 *)L_132);
			int32_t L_133;
			L_133 = GenericVirtFuncInvoker0< int32_t >::Invoke(ES3Reader_Read_TisRenderTextureMemoryless_t37547D68C2186D2650440F719302CDA4A3BB7F67_m3A980BA15AADBBB8393C3BC88CE17EEDDC89B027_RuntimeMethod_var, (ES3Reader_t2780AF8AA61DA2A817115CEF8612AC0E494D03C9 *)L_132);
			NullCheck((RenderTexture_t5FE7A5B47EF962A0E8D7BEBA05E9FC87D49A1849 *)L_131);
			RenderTexture_set_memorylessMode_mE48B2A38E9374A7BB419383B438790347474EFC1((RenderTexture_t5FE7A5B47EF962A0E8D7BEBA05E9FC87D49A1849 *)L_131, (int32_t)L_133, /*hidden argument*/NULL);
			// break;
			goto IL_0721;
		}

IL_0533:
		{
			// instance.format = reader.Read<UnityEngine.RenderTextureFormat>();
			RenderTexture_t5FE7A5B47EF962A0E8D7BEBA05E9FC87D49A1849 * L_134 = V_0;
			ES3Reader_t2780AF8AA61DA2A817115CEF8612AC0E494D03C9 * L_135 = ___reader0;
			NullCheck((ES3Reader_t2780AF8AA61DA2A817115CEF8612AC0E494D03C9 *)L_135);
			int32_t L_136;
			L_136 = GenericVirtFuncInvoker0< int32_t >::Invoke(ES3Reader_Read_TisRenderTextureFormat_t8371287102ED67772EF78229CF4AB9D38C2CD626_mE6358E03407F5C15B58B292C79D4770DE3FAC95A_RuntimeMethod_var, (ES3Reader_t2780AF8AA61DA2A817115CEF8612AC0E494D03C9 *)L_135);
			NullCheck((RenderTexture_t5FE7A5B47EF962A0E8D7BEBA05E9FC87D49A1849 *)L_134);
			RenderTexture_set_format_m32D42DC33DB151B69E81D0D93F36DE7450CFC23D((RenderTexture_t5FE7A5B47EF962A0E8D7BEBA05E9FC87D49A1849 *)L_134, (int32_t)L_136, /*hidden argument*/NULL);
			// break;
			goto IL_0721;
		}

IL_0544:
		{
			// instance.autoGenerateMips = reader.Read<System.Boolean>(ES3Type_bool.Instance);
			RenderTexture_t5FE7A5B47EF962A0E8D7BEBA05E9FC87D49A1849 * L_137 = V_0;
			ES3Reader_t2780AF8AA61DA2A817115CEF8612AC0E494D03C9 * L_138 = ___reader0;
			IL2CPP_RUNTIME_CLASS_INIT(ES3Type_bool_t8F309F7B9CC735FF1DEE68081B6E3CAB367745F4_il2cpp_TypeInfo_var);
			ES3Type_t8FBECB7AE75168648B9524E0C2A38DAD4555421D * L_139 = ((ES3Type_bool_t8F309F7B9CC735FF1DEE68081B6E3CAB367745F4_StaticFields*)il2cpp_codegen_static_fields_for(ES3Type_bool_t8F309F7B9CC735FF1DEE68081B6E3CAB367745F4_il2cpp_TypeInfo_var))->get_Instance_12();
			NullCheck((ES3Reader_t2780AF8AA61DA2A817115CEF8612AC0E494D03C9 *)L_138);
			bool L_140;
			L_140 = GenericVirtFuncInvoker1< bool, ES3Type_t8FBECB7AE75168648B9524E0C2A38DAD4555421D * >::Invoke(ES3Reader_Read_TisBoolean_t07D1E3F34E4813023D64F584DFF7B34C9D922F37_mC6D1B158268FF9B97822FF9F5B37FB1723FEDA22_RuntimeMethod_var, (ES3Reader_t2780AF8AA61DA2A817115CEF8612AC0E494D03C9 *)L_138, (ES3Type_t8FBECB7AE75168648B9524E0C2A38DAD4555421D *)L_139);
			NullCheck((RenderTexture_t5FE7A5B47EF962A0E8D7BEBA05E9FC87D49A1849 *)L_137);
			RenderTexture_set_autoGenerateMips_m0F02D60D4C4D4790B354451732F2DA6BA12D2E63((RenderTexture_t5FE7A5B47EF962A0E8D7BEBA05E9FC87D49A1849 *)L_137, (bool)L_140, /*hidden argument*/NULL);
			// break;
			goto IL_0721;
		}

IL_055a:
		{
			// instance.volumeDepth = reader.Read<System.Int32>(ES3Type_int.Instance);
			RenderTexture_t5FE7A5B47EF962A0E8D7BEBA05E9FC87D49A1849 * L_141 = V_0;
			ES3Reader_t2780AF8AA61DA2A817115CEF8612AC0E494D03C9 * L_142 = ___reader0;
			IL2CPP_RUNTIME_CLASS_INIT(ES3Type_int_tF64C15D40AD0CC7C15BCD1CEC3C5C6BF837BD167_il2cpp_TypeInfo_var);
			ES3Type_t8FBECB7AE75168648B9524E0C2A38DAD4555421D * L_143 = ((ES3Type_int_tF64C15D40AD0CC7C15BCD1CEC3C5C6BF837BD167_StaticFields*)il2cpp_codegen_static_fields_for(ES3Type_int_tF64C15D40AD0CC7C15BCD1CEC3C5C6BF837BD167_il2cpp_TypeInfo_var))->get_Instance_12();
			NullCheck((ES3Reader_t2780AF8AA61DA2A817115CEF8612AC0E494D03C9 *)L_142);
			int32_t L_144;
			L_144 = GenericVirtFuncInvoker1< int32_t, ES3Type_t8FBECB7AE75168648B9524E0C2A38DAD4555421D * >::Invoke(ES3Reader_Read_TisInt32_tFDE5F8CD43D10453F6A2E0C77FE48C6CC7009046_m2B74AA6627F5B1D21171D56C42F71DE5A7C1B4A6_RuntimeMethod_var, (ES3Reader_t2780AF8AA61DA2A817115CEF8612AC0E494D03C9 *)L_142, (ES3Type_t8FBECB7AE75168648B9524E0C2A38DAD4555421D *)L_143);
			NullCheck((RenderTexture_t5FE7A5B47EF962A0E8D7BEBA05E9FC87D49A1849 *)L_141);
			RenderTexture_set_volumeDepth_m01D7BD50386DDAE777CE3CB9B60FDD7DE798AC93((RenderTexture_t5FE7A5B47EF962A0E8D7BEBA05E9FC87D49A1849 *)L_141, (int32_t)L_144, /*hidden argument*/NULL);
			// break;
			goto IL_0721;
		}

IL_0570:
		{
			// instance.antiAliasing = reader.Read<System.Int32>(ES3Type_int.Instance);
			RenderTexture_t5FE7A5B47EF962A0E8D7BEBA05E9FC87D49A1849 * L_145 = V_0;
			ES3Reader_t2780AF8AA61DA2A817115CEF8612AC0E494D03C9 * L_146 = ___reader0;
			IL2CPP_RUNTIME_CLASS_INIT(ES3Type_int_tF64C15D40AD0CC7C15BCD1CEC3C5C6BF837BD167_il2cpp_TypeInfo_var);
			ES3Type_t8FBECB7AE75168648B9524E0C2A38DAD4555421D * L_147 = ((ES3Type_int_tF64C15D40AD0CC7C15BCD1CEC3C5C6BF837BD167_StaticFields*)il2cpp_codegen_static_fields_for(ES3Type_int_tF64C15D40AD0CC7C15BCD1CEC3C5C6BF837BD167_il2cpp_TypeInfo_var))->get_Instance_12();
			NullCheck((ES3Reader_t2780AF8AA61DA2A817115CEF8612AC0E494D03C9 *)L_146);
			int32_t L_148;
			L_148 = GenericVirtFuncInvoker1< int32_t, ES3Type_t8FBECB7AE75168648B9524E0C2A38DAD4555421D * >::Invoke(ES3Reader_Read_TisInt32_tFDE5F8CD43D10453F6A2E0C77FE48C6CC7009046_m2B74AA6627F5B1D21171D56C42F71DE5A7C1B4A6_RuntimeMethod_var, (ES3Reader_t2780AF8AA61DA2A817115CEF8612AC0E494D03C9 *)L_146, (ES3Type_t8FBECB7AE75168648B9524E0C2A38DAD4555421D *)L_147);
			NullCheck((RenderTexture_t5FE7A5B47EF962A0E8D7BEBA05E9FC87D49A1849 *)L_145);
			RenderTexture_set_antiAliasing_m4D37900B7E23CA0D33F109DB8DF21265DB70C38F((RenderTexture_t5FE7A5B47EF962A0E8D7BEBA05E9FC87D49A1849 *)L_145, (int32_t)L_148, /*hidden argument*/NULL);
			// break;
			goto IL_0721;
		}

IL_0586:
		{
			// instance.enableRandomWrite = reader.Read<System.Boolean>(ES3Type_bool.Instance);
			RenderTexture_t5FE7A5B47EF962A0E8D7BEBA05E9FC87D49A1849 * L_149 = V_0;
			ES3Reader_t2780AF8AA61DA2A817115CEF8612AC0E494D03C9 * L_150 = ___reader0;
			IL2CPP_RUNTIME_CLASS_INIT(ES3Type_bool_t8F309F7B9CC735FF1DEE68081B6E3CAB367745F4_il2cpp_TypeInfo_var);
			ES3Type_t8FBECB7AE75168648B9524E0C2A38DAD4555421D * L_151 = ((ES3Type_bool_t8F309F7B9CC735FF1DEE68081B6E3CAB367745F4_StaticFields*)il2cpp_codegen_static_fields_for(ES3Type_bool_t8F309F7B9CC735FF1DEE68081B6E3CAB367745F4_il2cpp_TypeInfo_var))->get_Instance_12();
			NullCheck((ES3Reader_t2780AF8AA61DA2A817115CEF8612AC0E494D03C9 *)L_150);
			bool L_152;
			L_152 = GenericVirtFuncInvoker1< bool, ES3Type_t8FBECB7AE75168648B9524E0C2A38DAD4555421D * >::Invoke(ES3Reader_Read_TisBoolean_t07D1E3F34E4813023D64F584DFF7B34C9D922F37_mC6D1B158268FF9B97822FF9F5B37FB1723FEDA22_RuntimeMethod_var, (ES3Reader_t2780AF8AA61DA2A817115CEF8612AC0E494D03C9 *)L_150, (ES3Type_t8FBECB7AE75168648B9524E0C2A38DAD4555421D *)L_151);
			NullCheck((RenderTexture_t5FE7A5B47EF962A0E8D7BEBA05E9FC87D49A1849 *)L_149);
			RenderTexture_set_enableRandomWrite_m024F49DB3CA3B02FA0EEBB3EACB37E6228CAA183((RenderTexture_t5FE7A5B47EF962A0E8D7BEBA05E9FC87D49A1849 *)L_149, (bool)L_152, /*hidden argument*/NULL);
			// break;
			goto IL_0721;
		}

IL_059c:
		{
			// instance.isPowerOfTwo = reader.Read<System.Boolean>(ES3Type_bool.Instance);
			RenderTexture_t5FE7A5B47EF962A0E8D7BEBA05E9FC87D49A1849 * L_153 = V_0;
			ES3Reader_t2780AF8AA61DA2A817115CEF8612AC0E494D03C9 * L_154 = ___reader0;
			IL2CPP_RUNTIME_CLASS_INIT(ES3Type_bool_t8F309F7B9CC735FF1DEE68081B6E3CAB367745F4_il2cpp_TypeInfo_var);
			ES3Type_t8FBECB7AE75168648B9524E0C2A38DAD4555421D * L_155 = ((ES3Type_bool_t8F309F7B9CC735FF1DEE68081B6E3CAB367745F4_StaticFields*)il2cpp_codegen_static_fields_for(ES3Type_bool_t8F309F7B9CC735FF1DEE68081B6E3CAB367745F4_il2cpp_TypeInfo_var))->get_Instance_12();
			NullCheck((ES3Reader_t2780AF8AA61DA2A817115CEF8612AC0E494D03C9 *)L_154);
			bool L_156;
			L_156 = GenericVirtFuncInvoker1< bool, ES3Type_t8FBECB7AE75168648B9524E0C2A38DAD4555421D * >::Invoke(ES3Reader_Read_TisBoolean_t07D1E3F34E4813023D64F584DFF7B34C9D922F37_mC6D1B158268FF9B97822FF9F5B37FB1723FEDA22_RuntimeMethod_var, (ES3Reader_t2780AF8AA61DA2A817115CEF8612AC0E494D03C9 *)L_154, (ES3Type_t8FBECB7AE75168648B9524E0C2A38DAD4555421D *)L_155);
			NullCheck((RenderTexture_t5FE7A5B47EF962A0E8D7BEBA05E9FC87D49A1849 *)L_153);
			RenderTexture_set_isPowerOfTwo_mA6D34F610DF27C40422DF5815892B45C656F1317((RenderTexture_t5FE7A5B47EF962A0E8D7BEBA05E9FC87D49A1849 *)L_153, (bool)L_156, /*hidden argument*/NULL);
			// break;
			goto IL_0721;
		}

IL_05b2:
		{
			// instance.depth = reader.Read<System.Int32>(ES3Type_int.Instance);
			RenderTexture_t5FE7A5B47EF962A0E8D7BEBA05E9FC87D49A1849 * L_157 = V_0;
			ES3Reader_t2780AF8AA61DA2A817115CEF8612AC0E494D03C9 * L_158 = ___reader0;
			IL2CPP_RUNTIME_CLASS_INIT(ES3Type_int_tF64C15D40AD0CC7C15BCD1CEC3C5C6BF837BD167_il2cpp_TypeInfo_var);
			ES3Type_t8FBECB7AE75168648B9524E0C2A38DAD4555421D * L_159 = ((ES3Type_int_tF64C15D40AD0CC7C15BCD1CEC3C5C6BF837BD167_StaticFields*)il2cpp_codegen_static_fields_for(ES3Type_int_tF64C15D40AD0CC7C15BCD1CEC3C5C6BF837BD167_il2cpp_TypeInfo_var))->get_Instance_12();
			NullCheck((ES3Reader_t2780AF8AA61DA2A817115CEF8612AC0E494D03C9 *)L_158);
			int32_t L_160;
			L_160 = GenericVirtFuncInvoker1< int32_t, ES3Type_t8FBECB7AE75168648B9524E0C2A38DAD4555421D * >::Invoke(ES3Reader_Read_TisInt32_tFDE5F8CD43D10453F6A2E0C77FE48C6CC7009046_m2B74AA6627F5B1D21171D56C42F71DE5A7C1B4A6_RuntimeMethod_var, (ES3Reader_t2780AF8AA61DA2A817115CEF8612AC0E494D03C9 *)L_158, (ES3Type_t8FBECB7AE75168648B9524E0C2A38DAD4555421D *)L_159);
			NullCheck((RenderTexture_t5FE7A5B47EF962A0E8D7BEBA05E9FC87D49A1849 *)L_157);
			RenderTexture_set_depth_mA57CEFEDDB45D0429FAC9532A631839F523944A3((RenderTexture_t5FE7A5B47EF962A0E8D7BEBA05E9FC87D49A1849 *)L_157, (int32_t)L_160, /*hidden argument*/NULL);
			// break;
			goto IL_0721;
		}

IL_05c8:
		{
			// instance.descriptor = reader.Read<UnityEngine.RenderTextureDescriptor>();
			RenderTexture_t5FE7A5B47EF962A0E8D7BEBA05E9FC87D49A1849 * L_161 = V_0;
			ES3Reader_t2780AF8AA61DA2A817115CEF8612AC0E494D03C9 * L_162 = ___reader0;
			NullCheck((ES3Reader_t2780AF8AA61DA2A817115CEF8612AC0E494D03C9 *)L_162);
			RenderTextureDescriptor_t67FF189E1F35AEB5D6C43A2D7103F3A8A8CA0B47  L_163;
			L_163 = GenericVirtFuncInvoker0< RenderTextureDescriptor_t67FF189E1F35AEB5D6C43A2D7103F3A8A8CA0B47  >::Invoke(ES3Reader_Read_TisRenderTextureDescriptor_t67FF189E1F35AEB5D6C43A2D7103F3A8A8CA0B47_m427886ADAAF96C7BA9BD423544128494F96D69E7_RuntimeMethod_var, (ES3Reader_t2780AF8AA61DA2A817115CEF8612AC0E494D03C9 *)L_162);
			NullCheck((RenderTexture_t5FE7A5B47EF962A0E8D7BEBA05E9FC87D49A1849 *)L_161);
			RenderTexture_set_descriptor_m3C8E31AE4644B23719A12345771D1B85EB6E5881((RenderTexture_t5FE7A5B47EF962A0E8D7BEBA05E9FC87D49A1849 *)L_161, (RenderTextureDescriptor_t67FF189E1F35AEB5D6C43A2D7103F3A8A8CA0B47 )L_163, /*hidden argument*/NULL);
			// break;
			goto IL_0721;
		}

IL_05d9:
		{
			// UnityEngine.RenderTexture.masterTextureLimit = reader.Read<System.Int32>(ES3Type_int.Instance);
			ES3Reader_t2780AF8AA61DA2A817115CEF8612AC0E494D03C9 * L_164 = ___reader0;
			IL2CPP_RUNTIME_CLASS_INIT(ES3Type_int_tF64C15D40AD0CC7C15BCD1CEC3C5C6BF837BD167_il2cpp_TypeInfo_var);
			ES3Type_t8FBECB7AE75168648B9524E0C2A38DAD4555421D * L_165 = ((ES3Type_int_tF64C15D40AD0CC7C15BCD1CEC3C5C6BF837BD167_StaticFields*)il2cpp_codegen_static_fields_for(ES3Type_int_tF64C15D40AD0CC7C15BCD1CEC3C5C6BF837BD167_il2cpp_TypeInfo_var))->get_Instance_12();
			NullCheck((ES3Reader_t2780AF8AA61DA2A817115CEF8612AC0E494D03C9 *)L_164);
			int32_t L_166;
			L_166 = GenericVirtFuncInvoker1< int32_t, ES3Type_t8FBECB7AE75168648B9524E0C2A38DAD4555421D * >::Invoke(ES3Reader_Read_TisInt32_tFDE5F8CD43D10453F6A2E0C77FE48C6CC7009046_m2B74AA6627F5B1D21171D56C42F71DE5A7C1B4A6_RuntimeMethod_var, (ES3Reader_t2780AF8AA61DA2A817115CEF8612AC0E494D03C9 *)L_164, (ES3Type_t8FBECB7AE75168648B9524E0C2A38DAD4555421D *)L_165);
			IL2CPP_RUNTIME_CLASS_INIT(Texture_t9FE0218A1EEDF266E8C85879FE123265CACC95AE_il2cpp_TypeInfo_var);
			Texture_set_masterTextureLimit_m94A531A20A54A86AF7B88A56F72709CE556B7DFF((int32_t)L_166, /*hidden argument*/NULL);
			// break;
			goto IL_0721;
		}

IL_05ee:
		{
			// UnityEngine.RenderTexture.anisotropicFiltering = reader.Read<UnityEngine.AnisotropicFiltering>();
			ES3Reader_t2780AF8AA61DA2A817115CEF8612AC0E494D03C9 * L_167 = ___reader0;
			NullCheck((ES3Reader_t2780AF8AA61DA2A817115CEF8612AC0E494D03C9 *)L_167);
			int32_t L_168;
			L_168 = GenericVirtFuncInvoker0< int32_t >::Invoke(ES3Reader_Read_TisAnisotropicFiltering_tAC3D1448B262D5869946CD1CDD2C8DAE3A7A537B_mAF1268AAC3E461D6E0604A19FAF0325873B6EC8A_RuntimeMethod_var, (ES3Reader_t2780AF8AA61DA2A817115CEF8612AC0E494D03C9 *)L_167);
			IL2CPP_RUNTIME_CLASS_INIT(Texture_t9FE0218A1EEDF266E8C85879FE123265CACC95AE_il2cpp_TypeInfo_var);
			Texture_set_anisotropicFiltering_mE2B639BF2681A8A0516C1C343C7E265ED60EAF16((int32_t)L_168, /*hidden argument*/NULL);
			// break;
			goto IL_0721;
		}

IL_05fe:
		{
			// instance.wrapMode = reader.Read<UnityEngine.TextureWrapMode>();
			RenderTexture_t5FE7A5B47EF962A0E8D7BEBA05E9FC87D49A1849 * L_169 = V_0;
			ES3Reader_t2780AF8AA61DA2A817115CEF8612AC0E494D03C9 * L_170 = ___reader0;
			NullCheck((ES3Reader_t2780AF8AA61DA2A817115CEF8612AC0E494D03C9 *)L_170);
			int32_t L_171;
			L_171 = GenericVirtFuncInvoker0< int32_t >::Invoke(ES3Reader_Read_TisTextureWrapMode_t86DDA8206E4AA784A1218D0DE3C5F6826D7549EB_m7926E449CD0B8BD56E5BF145DD0CCFE1C567F107_RuntimeMethod_var, (ES3Reader_t2780AF8AA61DA2A817115CEF8612AC0E494D03C9 *)L_170);
			NullCheck((Texture_t9FE0218A1EEDF266E8C85879FE123265CACC95AE *)L_169);
			Texture_set_wrapMode_m1233D2DF48DC20996F8EE26E866D4BDD2AC8050D((Texture_t9FE0218A1EEDF266E8C85879FE123265CACC95AE *)L_169, (int32_t)L_171, /*hidden argument*/NULL);
			// break;
			goto IL_0721;
		}

IL_060f:
		{
			// instance.wrapModeU = reader.Read<UnityEngine.TextureWrapMode>();
			RenderTexture_t5FE7A5B47EF962A0E8D7BEBA05E9FC87D49A1849 * L_172 = V_0;
			ES3Reader_t2780AF8AA61DA2A817115CEF8612AC0E494D03C9 * L_173 = ___reader0;
			NullCheck((ES3Reader_t2780AF8AA61DA2A817115CEF8612AC0E494D03C9 *)L_173);
			int32_t L_174;
			L_174 = GenericVirtFuncInvoker0< int32_t >::Invoke(ES3Reader_Read_TisTextureWrapMode_t86DDA8206E4AA784A1218D0DE3C5F6826D7549EB_m7926E449CD0B8BD56E5BF145DD0CCFE1C567F107_RuntimeMethod_var, (ES3Reader_t2780AF8AA61DA2A817115CEF8612AC0E494D03C9 *)L_173);
			NullCheck((Texture_t9FE0218A1EEDF266E8C85879FE123265CACC95AE *)L_172);
			Texture_set_wrapModeU_mBD3CBD6880E9E767B91ED9E1B14C725A52D7A66E((Texture_t9FE0218A1EEDF266E8C85879FE123265CACC95AE *)L_172, (int32_t)L_174, /*hidden argument*/NULL);
			// break;
			goto IL_0721;
		}

IL_0620:
		{
			// instance.wrapModeV = reader.Read<UnityEngine.TextureWrapMode>();
			RenderTexture_t5FE7A5B47EF962A0E8D7BEBA05E9FC87D49A1849 * L_175 = V_0;
			ES3Reader_t2780AF8AA61DA2A817115CEF8612AC0E494D03C9 * L_176 = ___reader0;
			NullCheck((ES3Reader_t2780AF8AA61DA2A817115CEF8612AC0E494D03C9 *)L_176);
			int32_t L_177;
			L_177 = GenericVirtFuncInvoker0< int32_t >::Invoke(ES3Reader_Read_TisTextureWrapMode_t86DDA8206E4AA784A1218D0DE3C5F6826D7549EB_m7926E449CD0B8BD56E5BF145DD0CCFE1C567F107_RuntimeMethod_var, (ES3Reader_t2780AF8AA61DA2A817115CEF8612AC0E494D03C9 *)L_176);
			NullCheck((Texture_t9FE0218A1EEDF266E8C85879FE123265CACC95AE *)L_175);
			Texture_set_wrapModeV_mCD51C11B4C90D7508113C744EDC09D04059403E5((Texture_t9FE0218A1EEDF266E8C85879FE123265CACC95AE *)L_175, (int32_t)L_177, /*hidden argument*/NULL);
			// break;
			goto IL_0721;
		}

IL_0631:
		{
			// instance.wrapModeW = reader.Read<UnityEngine.TextureWrapMode>();
			RenderTexture_t5FE7A5B47EF962A0E8D7BEBA05E9FC87D49A1849 * L_178 = V_0;
			ES3Reader_t2780AF8AA61DA2A817115CEF8612AC0E494D03C9 * L_179 = ___reader0;
			NullCheck((ES3Reader_t2780AF8AA61DA2A817115CEF8612AC0E494D03C9 *)L_179);
			int32_t L_180;
			L_180 = GenericVirtFuncInvoker0< int32_t >::Invoke(ES3Reader_Read_TisTextureWrapMode_t86DDA8206E4AA784A1218D0DE3C5F6826D7549EB_m7926E449CD0B8BD56E5BF145DD0CCFE1C567F107_RuntimeMethod_var, (ES3Reader_t2780AF8AA61DA2A817115CEF8612AC0E494D03C9 *)L_179);
			NullCheck((Texture_t9FE0218A1EEDF266E8C85879FE123265CACC95AE *)L_178);
			Texture_set_wrapModeW_m72C3239EA12A51D5031BD2A66C5E7B178EE9F65B((Texture_t9FE0218A1EEDF266E8C85879FE123265CACC95AE *)L_178, (int32_t)L_180, /*hidden argument*/NULL);
			// break;
			goto IL_0721;
		}

IL_0642:
		{
			// instance.filterMode = reader.Read<UnityEngine.FilterMode>();
			RenderTexture_t5FE7A5B47EF962A0E8D7BEBA05E9FC87D49A1849 * L_181 = V_0;
			ES3Reader_t2780AF8AA61DA2A817115CEF8612AC0E494D03C9 * L_182 = ___reader0;
			NullCheck((ES3Reader_t2780AF8AA61DA2A817115CEF8612AC0E494D03C9 *)L_182);
			int32_t L_183;
			L_183 = GenericVirtFuncInvoker0< int32_t >::Invoke(ES3Reader_Read_TisFilterMode_tE90A08FD96A142C761463D65E524BCDBFEEE3D19_m9819C2A442797B4060B0D9A80CFA96CFD6102839_RuntimeMethod_var, (ES3Reader_t2780AF8AA61DA2A817115CEF8612AC0E494D03C9 *)L_182);
			NullCheck((Texture_t9FE0218A1EEDF266E8C85879FE123265CACC95AE *)L_181);
			Texture_set_filterMode_m045141DB0FEFE496885D45F5F23B15BC0E77C8D0((Texture_t9FE0218A1EEDF266E8C85879FE123265CACC95AE *)L_181, (int32_t)L_183, /*hidden argument*/NULL);
			// break;
			goto IL_0721;
		}

IL_0653:
		{
			// instance.anisoLevel = reader.Read<System.Int32>(ES3Type_int.Instance);
			RenderTexture_t5FE7A5B47EF962A0E8D7BEBA05E9FC87D49A1849 * L_184 = V_0;
			ES3Reader_t2780AF8AA61DA2A817115CEF8612AC0E494D03C9 * L_185 = ___reader0;
			IL2CPP_RUNTIME_CLASS_INIT(ES3Type_int_tF64C15D40AD0CC7C15BCD1CEC3C5C6BF837BD167_il2cpp_TypeInfo_var);
			ES3Type_t8FBECB7AE75168648B9524E0C2A38DAD4555421D * L_186 = ((ES3Type_int_tF64C15D40AD0CC7C15BCD1CEC3C5C6BF837BD167_StaticFields*)il2cpp_codegen_static_fields_for(ES3Type_int_tF64C15D40AD0CC7C15BCD1CEC3C5C6BF837BD167_il2cpp_TypeInfo_var))->get_Instance_12();
			NullCheck((ES3Reader_t2780AF8AA61DA2A817115CEF8612AC0E494D03C9 *)L_185);
			int32_t L_187;
			L_187 = GenericVirtFuncInvoker1< int32_t, ES3Type_t8FBECB7AE75168648B9524E0C2A38DAD4555421D * >::Invoke(ES3Reader_Read_TisInt32_tFDE5F8CD43D10453F6A2E0C77FE48C6CC7009046_m2B74AA6627F5B1D21171D56C42F71DE5A7C1B4A6_RuntimeMethod_var, (ES3Reader_t2780AF8AA61DA2A817115CEF8612AC0E494D03C9 *)L_185, (ES3Type_t8FBECB7AE75168648B9524E0C2A38DAD4555421D *)L_186);
			NullCheck((Texture_t9FE0218A1EEDF266E8C85879FE123265CACC95AE *)L_184);
			Texture_set_anisoLevel_mE51360F6CD0562FD6355F8C0509B70A454CB33BE((Texture_t9FE0218A1EEDF266E8C85879FE123265CACC95AE *)L_184, (int32_t)L_187, /*hidden argument*/NULL);
			// break;
			goto IL_0721;
		}

IL_0669:
		{
			// instance.mipMapBias = reader.Read<System.Single>(ES3Type_float.Instance);
			RenderTexture_t5FE7A5B47EF962A0E8D7BEBA05E9FC87D49A1849 * L_188 = V_0;
			ES3Reader_t2780AF8AA61DA2A817115CEF8612AC0E494D03C9 * L_189 = ___reader0;
			IL2CPP_RUNTIME_CLASS_INIT(ES3Type_float_tF86B773C86731BD9AD79448B860BBB178FE77644_il2cpp_TypeInfo_var);
			ES3Type_t8FBECB7AE75168648B9524E0C2A38DAD4555421D * L_190 = ((ES3Type_float_tF86B773C86731BD9AD79448B860BBB178FE77644_StaticFields*)il2cpp_codegen_static_fields_for(ES3Type_float_tF86B773C86731BD9AD79448B860BBB178FE77644_il2cpp_TypeInfo_var))->get_Instance_12();
			NullCheck((ES3Reader_t2780AF8AA61DA2A817115CEF8612AC0E494D03C9 *)L_189);
			float L_191;
			L_191 = GenericVirtFuncInvoker1< float, ES3Type_t8FBECB7AE75168648B9524E0C2A38DAD4555421D * >::Invoke(ES3Reader_Read_TisSingle_tE07797BA3C98D4CA9B5A19413C19A76688AB899E_m4A0416374498BDA042B8EB21E49B72326D6CE5F4_RuntimeMethod_var, (ES3Reader_t2780AF8AA61DA2A817115CEF8612AC0E494D03C9 *)L_189, (ES3Type_t8FBECB7AE75168648B9524E0C2A38DAD4555421D *)L_190);
			NullCheck((Texture_t9FE0218A1EEDF266E8C85879FE123265CACC95AE *)L_188);
			Texture_set_mipMapBias_m5057ADA9DBA8E8E30EC15EA5BABFA0734CE2821C((Texture_t9FE0218A1EEDF266E8C85879FE123265CACC95AE *)L_188, (float)L_191, /*hidden argument*/NULL);
			// break;
			goto IL_0721;
		}

IL_067f:
		{
			// instance.name = reader.Read<System.String>(ES3Type_string.Instance);
			RenderTexture_t5FE7A5B47EF962A0E8D7BEBA05E9FC87D49A1849 * L_192 = V_0;
			ES3Reader_t2780AF8AA61DA2A817115CEF8612AC0E494D03C9 * L_193 = ___reader0;
			IL2CPP_RUNTIME_CLASS_INIT(ES3Type_string_tC47BFBE3CC816F3C70B51558C68F0C6470C5EFE5_il2cpp_TypeInfo_var);
			ES3Type_t8FBECB7AE75168648B9524E0C2A38DAD4555421D * L_194 = ((ES3Type_string_tC47BFBE3CC816F3C70B51558C68F0C6470C5EFE5_StaticFields*)il2cpp_codegen_static_fields_for(ES3Type_string_tC47BFBE3CC816F3C70B51558C68F0C6470C5EFE5_il2cpp_TypeInfo_var))->get_Instance_12();
			NullCheck((ES3Reader_t2780AF8AA61DA2A817115CEF8612AC0E494D03C9 *)L_193);
			String_t* L_195;
			L_195 = GenericVirtFuncInvoker1< String_t*, ES3Type_t8FBECB7AE75168648B9524E0C2A38DAD4555421D * >::Invoke(ES3Reader_Read_TisString_t_m883861F3B58239392073ABF39876826EEB87DF9C_RuntimeMethod_var, (ES3Reader_t2780AF8AA61DA2A817115CEF8612AC0E494D03C9 *)L_193, (ES3Type_t8FBECB7AE75168648B9524E0C2A38DAD4555421D *)L_194);
			NullCheck((Object_tF2F3778131EFF286AF62B7B013A170F95A91571A *)L_192);
			Object_set_name_m87C4006618ADB325ABE5439DF159E10DD8DD0781((Object_tF2F3778131EFF286AF62B7B013A170F95A91571A *)L_192, (String_t*)L_195, /*hidden argument*/NULL);
			// break;
			goto IL_0721;
		}

IL_0695:
		{
			// instance.vrUsage = reader.Read<UnityEngine.VRTextureUsage>();
			RenderTexture_t5FE7A5B47EF962A0E8D7BEBA05E9FC87D49A1849 * L_196 = V_0;
			ES3Reader_t2780AF8AA61DA2A817115CEF8612AC0E494D03C9 * L_197 = ___reader0;
			NullCheck((ES3Reader_t2780AF8AA61DA2A817115CEF8612AC0E494D03C9 *)L_197);
			int32_t L_198;
			L_198 = GenericVirtFuncInvoker0< int32_t >::Invoke(ES3Reader_Read_TisVRTextureUsage_t3C09DF3DD90B5620BC0AB6F8078DFEF4E607F645_m7DE3966E4815BB13132866CB005EEE5B90FF51C2_RuntimeMethod_var, (ES3Reader_t2780AF8AA61DA2A817115CEF8612AC0E494D03C9 *)L_197);
			NullCheck((RenderTexture_t5FE7A5B47EF962A0E8D7BEBA05E9FC87D49A1849 *)L_196);
			RenderTexture_set_vrUsage_m9AF7F60442E3B933FDF274D801EA074D1A5ECB71((RenderTexture_t5FE7A5B47EF962A0E8D7BEBA05E9FC87D49A1849 *)L_196, (int32_t)L_198, /*hidden argument*/NULL);
			// break;
			goto IL_0721;
		}

IL_06a3:
		{
			// instance.graphicsFormat = reader.Read<UnityEngine.Experimental.Rendering.GraphicsFormat>();
			RenderTexture_t5FE7A5B47EF962A0E8D7BEBA05E9FC87D49A1849 * L_199 = V_0;
			ES3Reader_t2780AF8AA61DA2A817115CEF8612AC0E494D03C9 * L_200 = ___reader0;
			NullCheck((ES3Reader_t2780AF8AA61DA2A817115CEF8612AC0E494D03C9 *)L_200);
			int32_t L_201;
			L_201 = GenericVirtFuncInvoker0< int32_t >::Invoke(ES3Reader_Read_TisGraphicsFormat_t07A3C024BC77B843C53A369D6FC02ABD27D2AB1D_mCBD36004B10F649C93215AB4717F6F0D7118BF7D_RuntimeMethod_var, (ES3Reader_t2780AF8AA61DA2A817115CEF8612AC0E494D03C9 *)L_200);
			NullCheck((RenderTexture_t5FE7A5B47EF962A0E8D7BEBA05E9FC87D49A1849 *)L_199);
			RenderTexture_set_graphicsFormat_mA378AAD8BD876EE96637FF0A80A2AFEA4D852FAB((RenderTexture_t5FE7A5B47EF962A0E8D7BEBA05E9FC87D49A1849 *)L_199, (int32_t)L_201, /*hidden argument*/NULL);
			// break;
			goto IL_0721;
		}

IL_06b1:
		{
			// instance.stencilFormat = reader.Read<UnityEngine.Experimental.Rendering.GraphicsFormat>();
			RenderTexture_t5FE7A5B47EF962A0E8D7BEBA05E9FC87D49A1849 * L_202 = V_0;
			ES3Reader_t2780AF8AA61DA2A817115CEF8612AC0E494D03C9 * L_203 = ___reader0;
			NullCheck((ES3Reader_t2780AF8AA61DA2A817115CEF8612AC0E494D03C9 *)L_203);
			int32_t L_204;
			L_204 = GenericVirtFuncInvoker0< int32_t >::Invoke(ES3Reader_Read_TisGraphicsFormat_t07A3C024BC77B843C53A369D6FC02ABD27D2AB1D_mCBD36004B10F649C93215AB4717F6F0D7118BF7D_RuntimeMethod_var, (ES3Reader_t2780AF8AA61DA2A817115CEF8612AC0E494D03C9 *)L_203);
			NullCheck((RenderTexture_t5FE7A5B47EF962A0E8D7BEBA05E9FC87D49A1849 *)L_202);
			RenderTexture_set_stencilFormat_m7C6E21FCDB7E786D403CFC9775105B050EFF19C7((RenderTexture_t5FE7A5B47EF962A0E8D7BEBA05E9FC87D49A1849 *)L_202, (int32_t)L_204, /*hidden argument*/NULL);
			// break;
			goto IL_0721;
		}

IL_06bf:
		{
			// instance.bindTextureMS = reader.Read<System.Boolean>(ES3Type_bool.Instance);
			RenderTexture_t5FE7A5B47EF962A0E8D7BEBA05E9FC87D49A1849 * L_205 = V_0;
			ES3Reader_t2780AF8AA61DA2A817115CEF8612AC0E494D03C9 * L_206 = ___reader0;
			IL2CPP_RUNTIME_CLASS_INIT(ES3Type_bool_t8F309F7B9CC735FF1DEE68081B6E3CAB367745F4_il2cpp_TypeInfo_var);
			ES3Type_t8FBECB7AE75168648B9524E0C2A38DAD4555421D * L_207 = ((ES3Type_bool_t8F309F7B9CC735FF1DEE68081B6E3CAB367745F4_StaticFields*)il2cpp_codegen_static_fields_for(ES3Type_bool_t8F309F7B9CC735FF1DEE68081B6E3CAB367745F4_il2cpp_TypeInfo_var))->get_Instance_12();
			NullCheck((ES3Reader_t2780AF8AA61DA2A817115CEF8612AC0E494D03C9 *)L_206);
			bool L_208;
			L_208 = GenericVirtFuncInvoker1< bool, ES3Type_t8FBECB7AE75168648B9524E0C2A38DAD4555421D * >::Invoke(ES3Reader_Read_TisBoolean_t07D1E3F34E4813023D64F584DFF7B34C9D922F37_mC6D1B158268FF9B97822FF9F5B37FB1723FEDA22_RuntimeMethod_var, (ES3Reader_t2780AF8AA61DA2A817115CEF8612AC0E494D03C9 *)L_206, (ES3Type_t8FBECB7AE75168648B9524E0C2A38DAD4555421D *)L_207);
			NullCheck((RenderTexture_t5FE7A5B47EF962A0E8D7BEBA05E9FC87D49A1849 *)L_205);
			RenderTexture_set_bindTextureMS_m6C26F6AB2DE8FE81BFCA60C936AA08EA7F1A7177((RenderTexture_t5FE7A5B47EF962A0E8D7BEBA05E9FC87D49A1849 *)L_205, (bool)L_208, /*hidden argument*/NULL);
			// break;
			goto IL_0721;
		}

IL_06d2:
		{
			// instance.useDynamicScale = reader.Read<System.Boolean>(ES3Type_bool.Instance);
			RenderTexture_t5FE7A5B47EF962A0E8D7BEBA05E9FC87D49A1849 * L_209 = V_0;
			ES3Reader_t2780AF8AA61DA2A817115CEF8612AC0E494D03C9 * L_210 = ___reader0;
			IL2CPP_RUNTIME_CLASS_INIT(ES3Type_bool_t8F309F7B9CC735FF1DEE68081B6E3CAB367745F4_il2cpp_TypeInfo_var);
			ES3Type_t8FBECB7AE75168648B9524E0C2A38DAD4555421D * L_211 = ((ES3Type_bool_t8F309F7B9CC735FF1DEE68081B6E3CAB367745F4_StaticFields*)il2cpp_codegen_static_fields_for(ES3Type_bool_t8F309F7B9CC735FF1DEE68081B6E3CAB367745F4_il2cpp_TypeInfo_var))->get_Instance_12();
			NullCheck((ES3Reader_t2780AF8AA61DA2A817115CEF8612AC0E494D03C9 *)L_210);
			bool L_212;
			L_212 = GenericVirtFuncInvoker1< bool, ES3Type_t8FBECB7AE75168648B9524E0C2A38DAD4555421D * >::Invoke(ES3Reader_Read_TisBoolean_t07D1E3F34E4813023D64F584DFF7B34C9D922F37_mC6D1B158268FF9B97822FF9F5B37FB1723FEDA22_RuntimeMethod_var, (ES3Reader_t2780AF8AA61DA2A817115CEF8612AC0E494D03C9 *)L_210, (ES3Type_t8FBECB7AE75168648B9524E0C2A38DAD4555421D *)L_211);
			NullCheck((RenderTexture_t5FE7A5B47EF962A0E8D7BEBA05E9FC87D49A1849 *)L_209);
			RenderTexture_set_useDynamicScale_m8F96571C7EDBEFAB9278E04A3F3EB67067A5AE29((RenderTexture_t5FE7A5B47EF962A0E8D7BEBA05E9FC87D49A1849 *)L_209, (bool)L_212, /*hidden argument*/NULL);
			// break;
			goto IL_0721;
		}

IL_06e5:
		{
			// UnityEngine.RenderTexture.streamingTextureForceLoadAll = reader.Read<System.Boolean>(ES3Type_bool.Instance);
			ES3Reader_t2780AF8AA61DA2A817115CEF8612AC0E494D03C9 * L_213 = ___reader0;
			IL2CPP_RUNTIME_CLASS_INIT(ES3Type_bool_t8F309F7B9CC735FF1DEE68081B6E3CAB367745F4_il2cpp_TypeInfo_var);
			ES3Type_t8FBECB7AE75168648B9524E0C2A38DAD4555421D * L_214 = ((ES3Type_bool_t8F309F7B9CC735FF1DEE68081B6E3CAB367745F4_StaticFields*)il2cpp_codegen_static_fields_for(ES3Type_bool_t8F309F7B9CC735FF1DEE68081B6E3CAB367745F4_il2cpp_TypeInfo_var))->get_Instance_12();
			NullCheck((ES3Reader_t2780AF8AA61DA2A817115CEF8612AC0E494D03C9 *)L_213);
			bool L_215;
			L_215 = GenericVirtFuncInvoker1< bool, ES3Type_t8FBECB7AE75168648B9524E0C2A38DAD4555421D * >::Invoke(ES3Reader_Read_TisBoolean_t07D1E3F34E4813023D64F584DFF7B34C9D922F37_mC6D1B158268FF9B97822FF9F5B37FB1723FEDA22_RuntimeMethod_var, (ES3Reader_t2780AF8AA61DA2A817115CEF8612AC0E494D03C9 *)L_213, (ES3Type_t8FBECB7AE75168648B9524E0C2A38DAD4555421D *)L_214);
			IL2CPP_RUNTIME_CLASS_INIT(Texture_t9FE0218A1EEDF266E8C85879FE123265CACC95AE_il2cpp_TypeInfo_var);
			Texture_set_streamingTextureForceLoadAll_m325117C0830BB9B4316CF41CEE045759FC52B7A3((bool)L_215, /*hidden argument*/NULL);
			// break;
			goto IL_0721;
		}

IL_06f7:
		{
			// UnityEngine.RenderTexture.streamingTextureDiscardUnusedMips = reader.Read<System.Boolean>(ES3Type_bool.Instance);
			ES3Reader_t2780AF8AA61DA2A817115CEF8612AC0E494D03C9 * L_216 = ___reader0;
			IL2CPP_RUNTIME_CLASS_INIT(ES3Type_bool_t8F309F7B9CC735FF1DEE68081B6E3CAB367745F4_il2cpp_TypeInfo_var);
			ES3Type_t8FBECB7AE75168648B9524E0C2A38DAD4555421D * L_217 = ((ES3Type_bool_t8F309F7B9CC735FF1DEE68081B6E3CAB367745F4_StaticFields*)il2cpp_codegen_static_fields_for(ES3Type_bool_t8F309F7B9CC735FF1DEE68081B6E3CAB367745F4_il2cpp_TypeInfo_var))->get_Instance_12();
			NullCheck((ES3Reader_t2780AF8AA61DA2A817115CEF8612AC0E494D03C9 *)L_216);
			bool L_218;
			L_218 = GenericVirtFuncInvoker1< bool, ES3Type_t8FBECB7AE75168648B9524E0C2A38DAD4555421D * >::Invoke(ES3Reader_Read_TisBoolean_t07D1E3F34E4813023D64F584DFF7B34C9D922F37_mC6D1B158268FF9B97822FF9F5B37FB1723FEDA22_RuntimeMethod_var, (ES3Reader_t2780AF8AA61DA2A817115CEF8612AC0E494D03C9 *)L_216, (ES3Type_t8FBECB7AE75168648B9524E0C2A38DAD4555421D *)L_217);
			IL2CPP_RUNTIME_CLASS_INIT(Texture_t9FE0218A1EEDF266E8C85879FE123265CACC95AE_il2cpp_TypeInfo_var);
			Texture_set_streamingTextureDiscardUnusedMips_mE184CE016A8E0319B437D34E0DB61962CE17F5DC((bool)L_218, /*hidden argument*/NULL);
			// break;
			goto IL_0721;
		}

IL_0709:
		{
			// UnityEngine.RenderTexture.allowThreadedTextureCreation = reader.Read<System.Boolean>(ES3Type_bool.Instance);
			ES3Reader_t2780AF8AA61DA2A817115CEF8612AC0E494D03C9 * L_219 = ___reader0;
			IL2CPP_RUNTIME_CLASS_INIT(ES3Type_bool_t8F309F7B9CC735FF1DEE68081B6E3CAB367745F4_il2cpp_TypeInfo_var);
			ES3Type_t8FBECB7AE75168648B9524E0C2A38DAD4555421D * L_220 = ((ES3Type_bool_t8F309F7B9CC735FF1DEE68081B6E3CAB367745F4_StaticFields*)il2cpp_codegen_static_fields_for(ES3Type_bool_t8F309F7B9CC735FF1DEE68081B6E3CAB367745F4_il2cpp_TypeInfo_var))->get_Instance_12();
			NullCheck((ES3Reader_t2780AF8AA61DA2A817115CEF8612AC0E494D03C9 *)L_219);
			bool L_221;
			L_221 = GenericVirtFuncInvoker1< bool, ES3Type_t8FBECB7AE75168648B9524E0C2A38DAD4555421D * >::Invoke(ES3Reader_Read_TisBoolean_t07D1E3F34E4813023D64F584DFF7B34C9D922F37_mC6D1B158268FF9B97822FF9F5B37FB1723FEDA22_RuntimeMethod_var, (ES3Reader_t2780AF8AA61DA2A817115CEF8612AC0E494D03C9 *)L_219, (ES3Type_t8FBECB7AE75168648B9524E0C2A38DAD4555421D *)L_220);
			IL2CPP_RUNTIME_CLASS_INIT(Texture_t9FE0218A1EEDF266E8C85879FE123265CACC95AE_il2cpp_TypeInfo_var);
			Texture_set_allowThreadedTextureCreation_m84D29394912B9CE876023963426256CBEB15A52E((bool)L_221, /*hidden argument*/NULL);
			// break;
			goto IL_0721;
		}

IL_071b:
		{
			// reader.Skip();
			ES3Reader_t2780AF8AA61DA2A817115CEF8612AC0E494D03C9 * L_222 = ___reader0;
			NullCheck((ES3Reader_t2780AF8AA61DA2A817115CEF8612AC0E494D03C9 *)L_222);
			VirtActionInvoker0::Invoke(41 /* System.Void ES3Reader::Skip() */, (ES3Reader_t2780AF8AA61DA2A817115CEF8612AC0E494D03C9 *)L_222);
		}

IL_0721:
		{
			// foreach (string propertyName in reader.Properties)
			RuntimeObject* L_223 = V_1;
			NullCheck((RuntimeObject*)L_223);
			bool L_224;
			L_224 = InterfaceFuncInvoker0< bool >::Invoke(0 /* System.Boolean System.Collections.IEnumerator::MoveNext() */, IEnumerator_t5956F3AFB7ECF1117E3BC5890E7FC7B7F7A04105_il2cpp_TypeInfo_var, (RuntimeObject*)L_223);
			if (L_224)
			{
				goto IL_0018;
			}
		}

IL_072c:
		{
			IL2CPP_LEAVE(0x742, FINALLY_072e);
		}
	} // end try (depth: 1)
	catch(Il2CppExceptionWrapper& e)
	{
		__last_unhandled_exception = (Exception_t *)e.ex;
		goto FINALLY_072e;
	}

FINALLY_072e:
	{ // begin finally (depth: 1)
		{
			RuntimeObject* L_225 = V_1;
			V_4 = (RuntimeObject*)((RuntimeObject*)IsInst((RuntimeObject*)L_225, IDisposable_t099785737FC6A1E3699919A94109383715A8D807_il2cpp_TypeInfo_var));
			RuntimeObject* L_226 = V_4;
			if (!L_226)
			{
				goto IL_0741;
			}
		}

IL_073a:
		{
			RuntimeObject* L_227 = V_4;
			NullCheck((RuntimeObject*)L_227);
			InterfaceActionInvoker0::Invoke(0 /* System.Void System.IDisposable::Dispose() */, IDisposable_t099785737FC6A1E3699919A94109383715A8D807_il2cpp_TypeInfo_var, (RuntimeObject*)L_227);
		}

IL_0741:
		{
			IL2CPP_END_FINALLY(1838)
		}
	} // end finally (depth: 1)
	IL2CPP_CLEANUP(1838)
	{
		IL2CPP_RETHROW_IF_UNHANDLED(Exception_t *)
		IL2CPP_JUMP_TBL(0x742, IL_0742)
	}

IL_0742:
	{
		// }
		return;
	}
}
// System.Void ES3Types.ES3Type_RenderTexture::ReadObject<UnityEngine.ParticleSystem/NoiseModule>(ES3Reader,System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ES3Type_RenderTexture_ReadObject_TisNoiseModule_t74C71EB8386C1CF92A748B051690D34F4CB04591_mD01365C83A404961EA6CF797D00F977BC14D2917_gshared (ES3Type_RenderTexture_t7B14573C56809AFDC0A1C481D6B61E2146DEF194 * __this, ES3Reader_t2780AF8AA61DA2A817115CEF8612AC0E494D03C9 * ___reader0, RuntimeObject * ___obj1, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ES3Reader_Read_TisAnisotropicFiltering_tAC3D1448B262D5869946CD1CDD2C8DAE3A7A537B_mAF1268AAC3E461D6E0604A19FAF0325873B6EC8A_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ES3Reader_Read_TisBoolean_t07D1E3F34E4813023D64F584DFF7B34C9D922F37_mC6D1B158268FF9B97822FF9F5B37FB1723FEDA22_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ES3Reader_Read_TisFilterMode_tE90A08FD96A142C761463D65E524BCDBFEEE3D19_m9819C2A442797B4060B0D9A80CFA96CFD6102839_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ES3Reader_Read_TisGraphicsFormat_t07A3C024BC77B843C53A369D6FC02ABD27D2AB1D_mCBD36004B10F649C93215AB4717F6F0D7118BF7D_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ES3Reader_Read_TisInt32_tFDE5F8CD43D10453F6A2E0C77FE48C6CC7009046_m2B74AA6627F5B1D21171D56C42F71DE5A7C1B4A6_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ES3Reader_Read_TisRenderTextureDescriptor_t67FF189E1F35AEB5D6C43A2D7103F3A8A8CA0B47_m427886ADAAF96C7BA9BD423544128494F96D69E7_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ES3Reader_Read_TisRenderTextureFormat_t8371287102ED67772EF78229CF4AB9D38C2CD626_mE6358E03407F5C15B58B292C79D4770DE3FAC95A_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ES3Reader_Read_TisRenderTextureMemoryless_t37547D68C2186D2650440F719302CDA4A3BB7F67_m3A980BA15AADBBB8393C3BC88CE17EEDDC89B027_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ES3Reader_Read_TisSingle_tE07797BA3C98D4CA9B5A19413C19A76688AB899E_m4A0416374498BDA042B8EB21E49B72326D6CE5F4_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ES3Reader_Read_TisString_t_m883861F3B58239392073ABF39876826EEB87DF9C_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ES3Reader_Read_TisTextureDimension_tADCCB7C1D30E4D1182651BA9094B4DE61B63EACC_m19EAA3B93D10636C17A62A3D8437349223CFD988_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ES3Reader_Read_TisTextureWrapMode_t86DDA8206E4AA784A1218D0DE3C5F6826D7549EB_m7926E449CD0B8BD56E5BF145DD0CCFE1C567F107_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ES3Reader_Read_TisVRTextureUsage_t3C09DF3DD90B5620BC0AB6F8078DFEF4E607F645_m7DE3966E4815BB13132866CB005EEE5B90FF51C2_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ES3Type_bool_t8F309F7B9CC735FF1DEE68081B6E3CAB367745F4_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ES3Type_float_tF86B773C86731BD9AD79448B860BBB178FE77644_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ES3Type_int_tF64C15D40AD0CC7C15BCD1CEC3C5C6BF837BD167_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ES3Type_string_tC47BFBE3CC816F3C70B51558C68F0C6470C5EFE5_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IDisposable_t099785737FC6A1E3699919A94109383715A8D807_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IEnumerator_t5956F3AFB7ECF1117E3BC5890E7FC7B7F7A04105_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&RenderTexture_t5FE7A5B47EF962A0E8D7BEBA05E9FC87D49A1849_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&String_t_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Texture_t9FE0218A1EEDF266E8C85879FE123265CACC95AE_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral201D9D00BB60DC2318D21CF9902290EFE255D5DC);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral2ADFC3FFF7C52D554F0435A348A5345C9FCD7FF8);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral2E201D1972661439FD3C8523C55723E7E9BCC7DA);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral2EE7B6B0E37E14930BBA497867139BFD0617CE04);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral3A04F86957625CB28FA670EECF997E6BAD45BBE7);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral3BC15E3C2F40466B2DC85C4776499817B8306CBB);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral3F1522C8DB7943F2AE3AA1563D3AC25D9C8B93D1);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral53D3413057D7E52F44470A335C590748745352B1);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral647E0FB2B5E859CC4BD7C73623B82C8EFABA2563);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral65B008F04EC40A696263EF679CF274BD10999A5D);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral71C5F9C3E2F3C81C5BBC7FD313F6938654E61138);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral75C9716749EA210206E3467390B7A11F3F33DDFA);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral7606720A7AEF5939309A8E4FCB8274252FA3D7BF);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral7A4A6E2A7090298F814A9D44C89F8634249BEF07);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral7FF61C3A55BCA1287974D8740F945250B3F0F084);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral83AC9669A9053DD15B9F2E82D2CE2369EFE131BA);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral95F57476C0AA778364404E7CCCD7499BF1BF3757);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral9AB5ADF8A8A53110245466F7C226F7935F5FE95F);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralB49A1DF483856544CEC6018E8C944DB6E16A8D57);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralBA9362732D25B1644B7D8DEC5DF6F036A4A66DE5);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralC959D767B7F0BD38D9DA8A64A4750C3A0972E2A0);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralCD44AC57FFE6CAC7824F4CAA223F1BB8B4CB0D73);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralCE18B047107AA23D1AA9B2ED32D316148E02655F);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralEA8FBF382D8AC9EDB8FFC14A350641B987F5C631);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralEBF5FE0CBF3EEA67902EEA700B7216E3DB0D8E84);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralECAEEB225F8689DE45DEB4FA21CE34E1960B1B50);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralF23E83744C9D6FC70D71B723AAED8006D6780BCB);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralF2AF7DD0BFF41B7B35037F018DAABE7DCF357A7B);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralF38CFAE6A91D072D4453C29FF44D81D459A582F1);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralF3FA58C10BBB9830102605E24AF89DC619908DFA);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralF9EE582B77C320A1F6A3DF72205857C4248BAC79);
		s_Il2CppMethodInitialized = true;
	}
	RenderTexture_t5FE7A5B47EF962A0E8D7BEBA05E9FC87D49A1849 * V_0 = NULL;
	RuntimeObject* V_1 = NULL;
	String_t* V_2 = NULL;
	uint32_t V_3 = 0;
	RuntimeObject* V_4 = NULL;
	Exception_t * __last_unhandled_exception = 0;
	il2cpp::utils::ExceptionSupportStack<int32_t, 1> __leave_targets;
	{
		// var instance = (UnityEngine.RenderTexture)obj;
		RuntimeObject * L_0 = ___obj1;
		V_0 = (RenderTexture_t5FE7A5B47EF962A0E8D7BEBA05E9FC87D49A1849 *)((RenderTexture_t5FE7A5B47EF962A0E8D7BEBA05E9FC87D49A1849 *)Castclass((RuntimeObject*)L_0, RenderTexture_t5FE7A5B47EF962A0E8D7BEBA05E9FC87D49A1849_il2cpp_TypeInfo_var));
		// foreach (string propertyName in reader.Properties)
		ES3Reader_t2780AF8AA61DA2A817115CEF8612AC0E494D03C9 * L_1 = ___reader0;
		NullCheck((ES3Reader_t2780AF8AA61DA2A817115CEF8612AC0E494D03C9 *)L_1);
		ES3ReaderPropertyEnumerator_tFC854F4BE72BFA234682EB1909D92457534A979D * L_2;
		L_2 = VirtFuncInvoker0< ES3ReaderPropertyEnumerator_tFC854F4BE72BFA234682EB1909D92457534A979D * >::Invoke(39 /* ES3Reader/ES3ReaderPropertyEnumerator ES3Reader::get_Properties() */, (ES3Reader_t2780AF8AA61DA2A817115CEF8612AC0E494D03C9 *)L_1);
		NullCheck((ES3ReaderPropertyEnumerator_tFC854F4BE72BFA234682EB1909D92457534A979D *)L_2);
		RuntimeObject* L_3;
		L_3 = ES3ReaderPropertyEnumerator_GetEnumerator_m6C61168655E3736E7847E5CB1CD9BC6B48442FD4((ES3ReaderPropertyEnumerator_tFC854F4BE72BFA234682EB1909D92457534A979D *)L_2, /*hidden argument*/NULL);
		V_1 = (RuntimeObject*)L_3;
	}

IL_0013:
	try
	{ // begin try (depth: 1)
		{
			goto IL_0721;
		}

IL_0018:
		{
			// foreach (string propertyName in reader.Properties)
			RuntimeObject* L_4 = V_1;
			NullCheck((RuntimeObject*)L_4);
			RuntimeObject * L_5;
			L_5 = InterfaceFuncInvoker0< RuntimeObject * >::Invoke(1 /* System.Object System.Collections.IEnumerator::get_Current() */, IEnumerator_t5956F3AFB7ECF1117E3BC5890E7FC7B7F7A04105_il2cpp_TypeInfo_var, (RuntimeObject*)L_4);
			V_2 = (String_t*)((String_t*)Castclass((RuntimeObject*)L_5, String_t_il2cpp_TypeInfo_var));
			String_t* L_6 = V_2;
			if (!L_6)
			{
				goto IL_071b;
			}
		}

IL_002a:
		{
			String_t* L_7 = V_2;
			uint32_t L_8;
			L_8 = U3CPrivateImplementationDetailsU3E_ComputeStringHash_m3ADC1F612F9EE3DD518E6F0023A0DE0EE2B120A7((String_t*)L_7, /*hidden argument*/NULL);
			V_3 = (uint32_t)L_8;
			uint32_t L_9 = V_3;
			if ((!(((uint32_t)L_9) <= ((uint32_t)((int32_t)1508062721)))))
			{
				goto IL_0134;
			}
		}

IL_003c:
		{
			uint32_t L_10 = V_3;
			if ((!(((uint32_t)L_10) <= ((uint32_t)((int32_t)698754697)))))
			{
				goto IL_00b0;
			}
		}

IL_0044:
		{
			uint32_t L_11 = V_3;
			if ((!(((uint32_t)L_11) <= ((uint32_t)((int32_t)472844700)))))
			{
				goto IL_0072;
			}
		}

IL_004c:
		{
			uint32_t L_12 = V_3;
			if ((((int32_t)L_12) == ((int32_t)((int32_t)87590155))))
			{
				goto IL_043c;
			}
		}

IL_0057:
		{
			uint32_t L_13 = V_3;
			if ((((int32_t)L_13) == ((int32_t)((int32_t)301255720))))
			{
				goto IL_02d7;
			}
		}

IL_0062:
		{
			uint32_t L_14 = V_3;
			if ((((int32_t)L_14) == ((int32_t)((int32_t)472844700))))
			{
				goto IL_0283;
			}
		}

IL_006d:
		{
			goto IL_071b;
		}

IL_0072:
		{
			uint32_t L_15 = V_3;
			if ((!(((uint32_t)L_15) <= ((uint32_t)((int32_t)549791583)))))
			{
				goto IL_0095;
			}
		}

IL_007a:
		{
			uint32_t L_16 = V_3;
			if ((((int32_t)L_16) == ((int32_t)((int32_t)533013964))))
			{
				goto IL_03a9;
			}
		}

IL_0085:
		{
			uint32_t L_17 = V_3;
			if ((((int32_t)L_17) == ((int32_t)((int32_t)549791583))))
			{
				goto IL_03be;
			}
		}

IL_0090:
		{
			goto IL_071b;
		}

IL_0095:
		{
			uint32_t L_18 = V_3;
			if ((((int32_t)L_18) == ((int32_t)((int32_t)583346821))))
			{
				goto IL_0394;
			}
		}

IL_00a0:
		{
			uint32_t L_19 = V_3;
			if ((((int32_t)L_19) == ((int32_t)((int32_t)698754697))))
			{
				goto IL_02ec;
			}
		}

IL_00ab:
		{
			goto IL_071b;
		}

IL_00b0:
		{
			uint32_t L_20 = V_3;
			if ((!(((uint32_t)L_20) <= ((uint32_t)((int32_t)1235622516)))))
			{
				goto IL_00f6;
			}
		}

IL_00b8:
		{
			uint32_t L_21 = V_3;
			if ((!(((uint32_t)L_21) <= ((uint32_t)((int32_t)740612720)))))
			{
				goto IL_00db;
			}
		}

IL_00c0:
		{
			uint32_t L_22 = V_3;
			if ((((int32_t)L_22) == ((int32_t)((int32_t)705796271))))
			{
				goto IL_0316;
			}
		}

IL_00cb:
		{
			uint32_t L_23 = V_3;
			if ((((int32_t)L_23) == ((int32_t)((int32_t)740612720))))
			{
				goto IL_03d3;
			}
		}

IL_00d6:
		{
			goto IL_071b;
		}

IL_00db:
		{
			uint32_t L_24 = V_3;
			if ((((int32_t)L_24) == ((int32_t)((int32_t)1059843136))))
			{
				goto IL_0340;
			}
		}

IL_00e6:
		{
			uint32_t L_25 = V_3;
			if ((((int32_t)L_25) == ((int32_t)((int32_t)1235622516))))
			{
				goto IL_036a;
			}
		}

IL_00f1:
		{
			goto IL_071b;
		}

IL_00f6:
		{
			uint32_t L_26 = V_3;
			if ((!(((uint32_t)L_26) <= ((uint32_t)((int32_t)1320492961)))))
			{
				goto IL_0119;
			}
		}

IL_00fe:
		{
			uint32_t L_27 = V_3;
			if ((((int32_t)L_27) == ((int32_t)((int32_t)1310955452))))
			{
				goto IL_0490;
			}
		}

IL_0109:
		{
			uint32_t L_28 = V_3;
			if ((((int32_t)L_28) == ((int32_t)((int32_t)1320492961))))
			{
				goto IL_047b;
			}
		}

IL_0114:
		{
			goto IL_071b;
		}

IL_0119:
		{
			uint32_t L_29 = V_3;
			if ((((int32_t)L_29) == ((int32_t)((int32_t)1458352709))))
			{
				goto IL_0466;
			}
		}

IL_0124:
		{
			uint32_t L_30 = V_3;
			if ((((int32_t)L_30) == ((int32_t)((int32_t)1508062721))))
			{
				goto IL_04a5;
			}
		}

IL_012f:
		{
			goto IL_071b;
		}

IL_0134:
		{
			uint32_t L_31 = V_3;
			if ((!(((uint32_t)L_31) <= ((uint32_t)((int32_t)-1444332543)))))
			{
				goto IL_01c3;
			}
		}

IL_013f:
		{
			uint32_t L_32 = V_3;
			if ((!(((uint32_t)L_32) <= ((uint32_t)((int32_t)2129631044)))))
			{
				goto IL_0185;
			}
		}

IL_0147:
		{
			uint32_t L_33 = V_3;
			if ((!(((uint32_t)L_33) <= ((uint32_t)((int32_t)1640355324)))))
			{
				goto IL_016a;
			}
		}

IL_014f:
		{
			uint32_t L_34 = V_3;
			if ((((int32_t)L_34) == ((int32_t)((int32_t)1560124071))))
			{
				goto IL_04ba;
			}
		}

IL_015a:
		{
			uint32_t L_35 = V_3;
			if ((((int32_t)L_35) == ((int32_t)((int32_t)1640355324))))
			{
				goto IL_0451;
			}
		}

IL_0165:
		{
			goto IL_071b;
		}

IL_016a:
		{
			uint32_t L_36 = V_3;
			if ((((int32_t)L_36) == ((int32_t)((int32_t)1728801507))))
			{
				goto IL_026e;
			}
		}

IL_0175:
		{
			uint32_t L_37 = V_3;
			if ((((int32_t)L_37) == ((int32_t)((int32_t)2129631044))))
			{
				goto IL_03fd;
			}
		}

IL_0180:
		{
			goto IL_071b;
		}

IL_0185:
		{
			uint32_t L_38 = V_3;
			if ((!(((uint32_t)L_38) <= ((uint32_t)((int32_t)-1786286561)))))
			{
				goto IL_01a8;
			}
		}

IL_018d:
		{
			uint32_t L_39 = V_3;
			if ((((int32_t)L_39) == ((int32_t)((int32_t)-1925595674))))
			{
				goto IL_0412;
			}
		}

IL_0198:
		{
			uint32_t L_40 = V_3;
			if ((((int32_t)L_40) == ((int32_t)((int32_t)-1786286561))))
			{
				goto IL_0244;
			}
		}

IL_01a3:
		{
			goto IL_071b;
		}

IL_01a8:
		{
			uint32_t L_41 = V_3;
			if ((((int32_t)L_41) == ((int32_t)((int32_t)-1522491664))))
			{
				goto IL_0298;
			}
		}

IL_01b3:
		{
			uint32_t L_42 = V_3;
			if ((((int32_t)L_42) == ((int32_t)((int32_t)-1444332543))))
			{
				goto IL_0355;
			}
		}

IL_01be:
		{
			goto IL_071b;
		}

IL_01c3:
		{
			uint32_t L_43 = V_3;
			if ((!(((uint32_t)L_43) <= ((uint32_t)((int32_t)-558361902)))))
			{
				goto IL_0206;
			}
		}

IL_01cb:
		{
			uint32_t L_44 = V_3;
			if ((!(((uint32_t)L_44) <= ((uint32_t)((int32_t)-1180859054)))))
			{
				goto IL_01ee;
			}
		}

IL_01d3:
		{
			uint32_t L_45 = V_3;
			if ((((int32_t)L_45) == ((int32_t)((int32_t)-1335745110))))
			{
				goto IL_02c2;
			}
		}

IL_01de:
		{
			uint32_t L_46 = V_3;
			if ((((int32_t)L_46) == ((int32_t)((int32_t)-1180859054))))
			{
				goto IL_02ad;
			}
		}

IL_01e9:
		{
			goto IL_071b;
		}

IL_01ee:
		{
			uint32_t L_47 = V_3;
			if ((((int32_t)L_47) == ((int32_t)((int32_t)-708986046))))
			{
				goto IL_0259;
			}
		}

IL_01f6:
		{
			uint32_t L_48 = V_3;
			if ((((int32_t)L_48) == ((int32_t)((int32_t)-558361902))))
			{
				goto IL_037f;
			}
		}

IL_0201:
		{
			goto IL_071b;
		}

IL_0206:
		{
			uint32_t L_49 = V_3;
			if ((!(((uint32_t)L_49) <= ((uint32_t)((int32_t)-255211260)))))
			{
				goto IL_0229;
			}
		}

IL_020e:
		{
			uint32_t L_50 = V_3;
			if ((((int32_t)L_50) == ((int32_t)((int32_t)-345285761))))
			{
				goto IL_03e8;
			}
		}

IL_0219:
		{
			uint32_t L_51 = V_3;
			if ((((int32_t)L_51) == ((int32_t)((int32_t)-255211260))))
			{
				goto IL_0427;
			}
		}

IL_0224:
		{
			goto IL_071b;
		}

IL_0229:
		{
			uint32_t L_52 = V_3;
			if ((((int32_t)L_52) == ((int32_t)((int32_t)-42086080))))
			{
				goto IL_0301;
			}
		}

IL_0234:
		{
			uint32_t L_53 = V_3;
			if ((((int32_t)L_53) == ((int32_t)((int32_t)-25846038))))
			{
				goto IL_032b;
			}
		}

IL_023f:
		{
			goto IL_071b;
		}

IL_0244:
		{
			String_t* L_54 = V_2;
			bool L_55;
			L_55 = String_op_Equality_m50B3548E4AC232558190B0052877B290AA1D436A((String_t*)L_54, (String_t*)_stringLiteralEBF5FE0CBF3EEA67902EEA700B7216E3DB0D8E84, /*hidden argument*/NULL);
			if (L_55)
			{
				goto IL_04cf;
			}
		}

IL_0254:
		{
			goto IL_071b;
		}

IL_0259:
		{
			String_t* L_56 = V_2;
			bool L_57;
			L_57 = String_op_Equality_m50B3548E4AC232558190B0052877B290AA1D436A((String_t*)L_56, (String_t*)_stringLiteral647E0FB2B5E859CC4BD7C73623B82C8EFABA2563, /*hidden argument*/NULL);
			if (L_57)
			{
				goto IL_04e5;
			}
		}

IL_0269:
		{
			goto IL_071b;
		}

IL_026e:
		{
			String_t* L_58 = V_2;
			bool L_59;
			L_59 = String_op_Equality_m50B3548E4AC232558190B0052877B290AA1D436A((String_t*)L_58, (String_t*)_stringLiteralF9EE582B77C320A1F6A3DF72205857C4248BAC79, /*hidden argument*/NULL);
			if (L_59)
			{
				goto IL_04fb;
			}
		}

IL_027e:
		{
			goto IL_071b;
		}

IL_0283:
		{
			String_t* L_60 = V_2;
			bool L_61;
			L_61 = String_op_Equality_m50B3548E4AC232558190B0052877B290AA1D436A((String_t*)L_60, (String_t*)_stringLiteral53D3413057D7E52F44470A335C590748745352B1, /*hidden argument*/NULL);
			if (L_61)
			{
				goto IL_050c;
			}
		}

IL_0293:
		{
			goto IL_071b;
		}

IL_0298:
		{
			String_t* L_62 = V_2;
			bool L_63;
			L_63 = String_op_Equality_m50B3548E4AC232558190B0052877B290AA1D436A((String_t*)L_62, (String_t*)_stringLiteralC959D767B7F0BD38D9DA8A64A4750C3A0972E2A0, /*hidden argument*/NULL);
			if (L_63)
			{
				goto IL_0522;
			}
		}

IL_02a8:
		{
			goto IL_071b;
		}

IL_02ad:
		{
			String_t* L_64 = V_2;
			bool L_65;
			L_65 = String_op_Equality_m50B3548E4AC232558190B0052877B290AA1D436A((String_t*)L_64, (String_t*)_stringLiteral75C9716749EA210206E3467390B7A11F3F33DDFA, /*hidden argument*/NULL);
			if (L_65)
			{
				goto IL_0533;
			}
		}

IL_02bd:
		{
			goto IL_071b;
		}

IL_02c2:
		{
			String_t* L_66 = V_2;
			bool L_67;
			L_67 = String_op_Equality_m50B3548E4AC232558190B0052877B290AA1D436A((String_t*)L_66, (String_t*)_stringLiteral7606720A7AEF5939309A8E4FCB8274252FA3D7BF, /*hidden argument*/NULL);
			if (L_67)
			{
				goto IL_0544;
			}
		}

IL_02d2:
		{
			goto IL_071b;
		}

IL_02d7:
		{
			String_t* L_68 = V_2;
			bool L_69;
			L_69 = String_op_Equality_m50B3548E4AC232558190B0052877B290AA1D436A((String_t*)L_68, (String_t*)_stringLiteral71C5F9C3E2F3C81C5BBC7FD313F6938654E61138, /*hidden argument*/NULL);
			if (L_69)
			{
				goto IL_055a;
			}
		}

IL_02e7:
		{
			goto IL_071b;
		}

IL_02ec:
		{
			String_t* L_70 = V_2;
			bool L_71;
			L_71 = String_op_Equality_m50B3548E4AC232558190B0052877B290AA1D436A((String_t*)L_70, (String_t*)_stringLiteral3F1522C8DB7943F2AE3AA1563D3AC25D9C8B93D1, /*hidden argument*/NULL);
			if (L_71)
			{
				goto IL_0570;
			}
		}

IL_02fc:
		{
			goto IL_071b;
		}

IL_0301:
		{
			String_t* L_72 = V_2;
			bool L_73;
			L_73 = String_op_Equality_m50B3548E4AC232558190B0052877B290AA1D436A((String_t*)L_72, (String_t*)_stringLiteralF23E83744C9D6FC70D71B723AAED8006D6780BCB, /*hidden argument*/NULL);
			if (L_73)
			{
				goto IL_0586;
			}
		}

IL_0311:
		{
			goto IL_071b;
		}

IL_0316:
		{
			String_t* L_74 = V_2;
			bool L_75;
			L_75 = String_op_Equality_m50B3548E4AC232558190B0052877B290AA1D436A((String_t*)L_74, (String_t*)_stringLiteralB49A1DF483856544CEC6018E8C944DB6E16A8D57, /*hidden argument*/NULL);
			if (L_75)
			{
				goto IL_059c;
			}
		}

IL_0326:
		{
			goto IL_071b;
		}

IL_032b:
		{
			String_t* L_76 = V_2;
			bool L_77;
			L_77 = String_op_Equality_m50B3548E4AC232558190B0052877B290AA1D436A((String_t*)L_76, (String_t*)_stringLiteral3A04F86957625CB28FA670EECF997E6BAD45BBE7, /*hidden argument*/NULL);
			if (L_77)
			{
				goto IL_05b2;
			}
		}

IL_033b:
		{
			goto IL_071b;
		}

IL_0340:
		{
			String_t* L_78 = V_2;
			bool L_79;
			L_79 = String_op_Equality_m50B3548E4AC232558190B0052877B290AA1D436A((String_t*)L_78, (String_t*)_stringLiteral7A4A6E2A7090298F814A9D44C89F8634249BEF07, /*hidden argument*/NULL);
			if (L_79)
			{
				goto IL_05c8;
			}
		}

IL_0350:
		{
			goto IL_071b;
		}

IL_0355:
		{
			String_t* L_80 = V_2;
			bool L_81;
			L_81 = String_op_Equality_m50B3548E4AC232558190B0052877B290AA1D436A((String_t*)L_80, (String_t*)_stringLiteralF3FA58C10BBB9830102605E24AF89DC619908DFA, /*hidden argument*/NULL);
			if (L_81)
			{
				goto IL_05d9;
			}
		}

IL_0365:
		{
			goto IL_071b;
		}

IL_036a:
		{
			String_t* L_82 = V_2;
			bool L_83;
			L_83 = String_op_Equality_m50B3548E4AC232558190B0052877B290AA1D436A((String_t*)L_82, (String_t*)_stringLiteralBA9362732D25B1644B7D8DEC5DF6F036A4A66DE5, /*hidden argument*/NULL);
			if (L_83)
			{
				goto IL_05ee;
			}
		}

IL_037a:
		{
			goto IL_071b;
		}

IL_037f:
		{
			String_t* L_84 = V_2;
			bool L_85;
			L_85 = String_op_Equality_m50B3548E4AC232558190B0052877B290AA1D436A((String_t*)L_84, (String_t*)_stringLiteral95F57476C0AA778364404E7CCCD7499BF1BF3757, /*hidden argument*/NULL);
			if (L_85)
			{
				goto IL_05fe;
			}
		}

IL_038f:
		{
			goto IL_071b;
		}

IL_0394:
		{
			String_t* L_86 = V_2;
			bool L_87;
			L_87 = String_op_Equality_m50B3548E4AC232558190B0052877B290AA1D436A((String_t*)L_86, (String_t*)_stringLiteral9AB5ADF8A8A53110245466F7C226F7935F5FE95F, /*hidden argument*/NULL);
			if (L_87)
			{
				goto IL_060f;
			}
		}

IL_03a4:
		{
			goto IL_071b;
		}

IL_03a9:
		{
			String_t* L_88 = V_2;
			bool L_89;
			L_89 = String_op_Equality_m50B3548E4AC232558190B0052877B290AA1D436A((String_t*)L_88, (String_t*)_stringLiteralEA8FBF382D8AC9EDB8FFC14A350641B987F5C631, /*hidden argument*/NULL);
			if (L_89)
			{
				goto IL_0620;
			}
		}

IL_03b9:
		{
			goto IL_071b;
		}

IL_03be:
		{
			String_t* L_90 = V_2;
			bool L_91;
			L_91 = String_op_Equality_m50B3548E4AC232558190B0052877B290AA1D436A((String_t*)L_90, (String_t*)_stringLiteral201D9D00BB60DC2318D21CF9902290EFE255D5DC, /*hidden argument*/NULL);
			if (L_91)
			{
				goto IL_0631;
			}
		}

IL_03ce:
		{
			goto IL_071b;
		}

IL_03d3:
		{
			String_t* L_92 = V_2;
			bool L_93;
			L_93 = String_op_Equality_m50B3548E4AC232558190B0052877B290AA1D436A((String_t*)L_92, (String_t*)_stringLiteral65B008F04EC40A696263EF679CF274BD10999A5D, /*hidden argument*/NULL);
			if (L_93)
			{
				goto IL_0642;
			}
		}

IL_03e3:
		{
			goto IL_071b;
		}

IL_03e8:
		{
			String_t* L_94 = V_2;
			bool L_95;
			L_95 = String_op_Equality_m50B3548E4AC232558190B0052877B290AA1D436A((String_t*)L_94, (String_t*)_stringLiteralF38CFAE6A91D072D4453C29FF44D81D459A582F1, /*hidden argument*/NULL);
			if (L_95)
			{
				goto IL_0653;
			}
		}

IL_03f8:
		{
			goto IL_071b;
		}

IL_03fd:
		{
			String_t* L_96 = V_2;
			bool L_97;
			L_97 = String_op_Equality_m50B3548E4AC232558190B0052877B290AA1D436A((String_t*)L_96, (String_t*)_stringLiteral3BC15E3C2F40466B2DC85C4776499817B8306CBB, /*hidden argument*/NULL);
			if (L_97)
			{
				goto IL_0669;
			}
		}

IL_040d:
		{
			goto IL_071b;
		}

IL_0412:
		{
			String_t* L_98 = V_2;
			bool L_99;
			L_99 = String_op_Equality_m50B3548E4AC232558190B0052877B290AA1D436A((String_t*)L_98, (String_t*)_stringLiteralCE18B047107AA23D1AA9B2ED32D316148E02655F, /*hidden argument*/NULL);
			if (L_99)
			{
				goto IL_067f;
			}
		}

IL_0422:
		{
			goto IL_071b;
		}

IL_0427:
		{
			String_t* L_100 = V_2;
			bool L_101;
			L_101 = String_op_Equality_m50B3548E4AC232558190B0052877B290AA1D436A((String_t*)L_100, (String_t*)_stringLiteral83AC9669A9053DD15B9F2E82D2CE2369EFE131BA, /*hidden argument*/NULL);
			if (L_101)
			{
				goto IL_0695;
			}
		}

IL_0437:
		{
			goto IL_071b;
		}

IL_043c:
		{
			String_t* L_102 = V_2;
			bool L_103;
			L_103 = String_op_Equality_m50B3548E4AC232558190B0052877B290AA1D436A((String_t*)L_102, (String_t*)_stringLiteralECAEEB225F8689DE45DEB4FA21CE34E1960B1B50, /*hidden argument*/NULL);
			if (L_103)
			{
				goto IL_06a3;
			}
		}

IL_044c:
		{
			goto IL_071b;
		}

IL_0451:
		{
			String_t* L_104 = V_2;
			bool L_105;
			L_105 = String_op_Equality_m50B3548E4AC232558190B0052877B290AA1D436A((String_t*)L_104, (String_t*)_stringLiteral2EE7B6B0E37E14930BBA497867139BFD0617CE04, /*hidden argument*/NULL);
			if (L_105)
			{
				goto IL_06b1;
			}
		}

IL_0461:
		{
			goto IL_071b;
		}

IL_0466:
		{
			String_t* L_106 = V_2;
			bool L_107;
			L_107 = String_op_Equality_m50B3548E4AC232558190B0052877B290AA1D436A((String_t*)L_106, (String_t*)_stringLiteralF2AF7DD0BFF41B7B35037F018DAABE7DCF357A7B, /*hidden argument*/NULL);
			if (L_107)
			{
				goto IL_06bf;
			}
		}

IL_0476:
		{
			goto IL_071b;
		}

IL_047b:
		{
			String_t* L_108 = V_2;
			bool L_109;
			L_109 = String_op_Equality_m50B3548E4AC232558190B0052877B290AA1D436A((String_t*)L_108, (String_t*)_stringLiteral7FF61C3A55BCA1287974D8740F945250B3F0F084, /*hidden argument*/NULL);
			if (L_109)
			{
				goto IL_06d2;
			}
		}

IL_048b:
		{
			goto IL_071b;
		}

IL_0490:
		{
			String_t* L_110 = V_2;
			bool L_111;
			L_111 = String_op_Equality_m50B3548E4AC232558190B0052877B290AA1D436A((String_t*)L_110, (String_t*)_stringLiteral2ADFC3FFF7C52D554F0435A348A5345C9FCD7FF8, /*hidden argument*/NULL);
			if (L_111)
			{
				goto IL_06e5;
			}
		}

IL_04a0:
		{
			goto IL_071b;
		}

IL_04a5:
		{
			String_t* L_112 = V_2;
			bool L_113;
			L_113 = String_op_Equality_m50B3548E4AC232558190B0052877B290AA1D436A((String_t*)L_112, (String_t*)_stringLiteral2E201D1972661439FD3C8523C55723E7E9BCC7DA, /*hidden argument*/NULL);
			if (L_113)
			{
				goto IL_06f7;
			}
		}

IL_04b5:
		{
			goto IL_071b;
		}

IL_04ba:
		{
			String_t* L_114 = V_2;
			bool L_115;
			L_115 = String_op_Equality_m50B3548E4AC232558190B0052877B290AA1D436A((String_t*)L_114, (String_t*)_stringLiteralCD44AC57FFE6CAC7824F4CAA223F1BB8B4CB0D73, /*hidden argument*/NULL);
			if (L_115)
			{
				goto IL_0709;
			}
		}

IL_04ca:
		{
			goto IL_071b;
		}

IL_04cf:
		{
			// instance.width = reader.Read<System.Int32>(ES3Type_int.Instance);
			RenderTexture_t5FE7A5B47EF962A0E8D7BEBA05E9FC87D49A1849 * L_116 = V_0;
			ES3Reader_t2780AF8AA61DA2A817115CEF8612AC0E494D03C9 * L_117 = ___reader0;
			IL2CPP_RUNTIME_CLASS_INIT(ES3Type_int_tF64C15D40AD0CC7C15BCD1CEC3C5C6BF837BD167_il2cpp_TypeInfo_var);
			ES3Type_t8FBECB7AE75168648B9524E0C2A38DAD4555421D * L_118 = ((ES3Type_int_tF64C15D40AD0CC7C15BCD1CEC3C5C6BF837BD167_StaticFields*)il2cpp_codegen_static_fields_for(ES3Type_int_tF64C15D40AD0CC7C15BCD1CEC3C5C6BF837BD167_il2cpp_TypeInfo_var))->get_Instance_12();
			NullCheck((ES3Reader_t2780AF8AA61DA2A817115CEF8612AC0E494D03C9 *)L_117);
			int32_t L_119;
			L_119 = GenericVirtFuncInvoker1< int32_t, ES3Type_t8FBECB7AE75168648B9524E0C2A38DAD4555421D * >::Invoke(ES3Reader_Read_TisInt32_tFDE5F8CD43D10453F6A2E0C77FE48C6CC7009046_m2B74AA6627F5B1D21171D56C42F71DE5A7C1B4A6_RuntimeMethod_var, (ES3Reader_t2780AF8AA61DA2A817115CEF8612AC0E494D03C9 *)L_117, (ES3Type_t8FBECB7AE75168648B9524E0C2A38DAD4555421D *)L_118);
			NullCheck((Texture_t9FE0218A1EEDF266E8C85879FE123265CACC95AE *)L_116);
			VirtActionInvoker1< int32_t >::Invoke(6 /* System.Void UnityEngine.Texture::set_width(System.Int32) */, (Texture_t9FE0218A1EEDF266E8C85879FE123265CACC95AE *)L_116, (int32_t)L_119);
			// break;
			goto IL_0721;
		}

IL_04e5:
		{
			// instance.height = reader.Read<System.Int32>(ES3Type_int.Instance);
			RenderTexture_t5FE7A5B47EF962A0E8D7BEBA05E9FC87D49A1849 * L_120 = V_0;
			ES3Reader_t2780AF8AA61DA2A817115CEF8612AC0E494D03C9 * L_121 = ___reader0;
			IL2CPP_RUNTIME_CLASS_INIT(ES3Type_int_tF64C15D40AD0CC7C15BCD1CEC3C5C6BF837BD167_il2cpp_TypeInfo_var);
			ES3Type_t8FBECB7AE75168648B9524E0C2A38DAD4555421D * L_122 = ((ES3Type_int_tF64C15D40AD0CC7C15BCD1CEC3C5C6BF837BD167_StaticFields*)il2cpp_codegen_static_fields_for(ES3Type_int_tF64C15D40AD0CC7C15BCD1CEC3C5C6BF837BD167_il2cpp_TypeInfo_var))->get_Instance_12();
			NullCheck((ES3Reader_t2780AF8AA61DA2A817115CEF8612AC0E494D03C9 *)L_121);
			int32_t L_123;
			L_123 = GenericVirtFuncInvoker1< int32_t, ES3Type_t8FBECB7AE75168648B9524E0C2A38DAD4555421D * >::Invoke(ES3Reader_Read_TisInt32_tFDE5F8CD43D10453F6A2E0C77FE48C6CC7009046_m2B74AA6627F5B1D21171D56C42F71DE5A7C1B4A6_RuntimeMethod_var, (ES3Reader_t2780AF8AA61DA2A817115CEF8612AC0E494D03C9 *)L_121, (ES3Type_t8FBECB7AE75168648B9524E0C2A38DAD4555421D *)L_122);
			NullCheck((Texture_t9FE0218A1EEDF266E8C85879FE123265CACC95AE *)L_120);
			VirtActionInvoker1< int32_t >::Invoke(8 /* System.Void UnityEngine.Texture::set_height(System.Int32) */, (Texture_t9FE0218A1EEDF266E8C85879FE123265CACC95AE *)L_120, (int32_t)L_123);
			// break;
			goto IL_0721;
		}

IL_04fb:
		{
			// instance.dimension = reader.Read<UnityEngine.Rendering.TextureDimension>();
			RenderTexture_t5FE7A5B47EF962A0E8D7BEBA05E9FC87D49A1849 * L_124 = V_0;
			ES3Reader_t2780AF8AA61DA2A817115CEF8612AC0E494D03C9 * L_125 = ___reader0;
			NullCheck((ES3Reader_t2780AF8AA61DA2A817115CEF8612AC0E494D03C9 *)L_125);
			int32_t L_126;
			L_126 = GenericVirtFuncInvoker0< int32_t >::Invoke(ES3Reader_Read_TisTextureDimension_tADCCB7C1D30E4D1182651BA9094B4DE61B63EACC_m19EAA3B93D10636C17A62A3D8437349223CFD988_RuntimeMethod_var, (ES3Reader_t2780AF8AA61DA2A817115CEF8612AC0E494D03C9 *)L_125);
			NullCheck((Texture_t9FE0218A1EEDF266E8C85879FE123265CACC95AE *)L_124);
			VirtActionInvoker1< int32_t >::Invoke(10 /* System.Void UnityEngine.Texture::set_dimension(UnityEngine.Rendering.TextureDimension) */, (Texture_t9FE0218A1EEDF266E8C85879FE123265CACC95AE *)L_124, (int32_t)L_126);
			// break;
			goto IL_0721;
		}

IL_050c:
		{
			// instance.useMipMap = reader.Read<System.Boolean>(ES3Type_bool.Instance);
			RenderTexture_t5FE7A5B47EF962A0E8D7BEBA05E9FC87D49A1849 * L_127 = V_0;
			ES3Reader_t2780AF8AA61DA2A817115CEF8612AC0E494D03C9 * L_128 = ___reader0;
			IL2CPP_RUNTIME_CLASS_INIT(ES3Type_bool_t8F309F7B9CC735FF1DEE68081B6E3CAB367745F4_il2cpp_TypeInfo_var);
			ES3Type_t8FBECB7AE75168648B9524E0C2A38DAD4555421D * L_129 = ((ES3Type_bool_t8F309F7B9CC735FF1DEE68081B6E3CAB367745F4_StaticFields*)il2cpp_codegen_static_fields_for(ES3Type_bool_t8F309F7B9CC735FF1DEE68081B6E3CAB367745F4_il2cpp_TypeInfo_var))->get_Instance_12();
			NullCheck((ES3Reader_t2780AF8AA61DA2A817115CEF8612AC0E494D03C9 *)L_128);
			bool L_130;
			L_130 = GenericVirtFuncInvoker1< bool, ES3Type_t8FBECB7AE75168648B9524E0C2A38DAD4555421D * >::Invoke(ES3Reader_Read_TisBoolean_t07D1E3F34E4813023D64F584DFF7B34C9D922F37_mC6D1B158268FF9B97822FF9F5B37FB1723FEDA22_RuntimeMethod_var, (ES3Reader_t2780AF8AA61DA2A817115CEF8612AC0E494D03C9 *)L_128, (ES3Type_t8FBECB7AE75168648B9524E0C2A38DAD4555421D *)L_129);
			NullCheck((RenderTexture_t5FE7A5B47EF962A0E8D7BEBA05E9FC87D49A1849 *)L_127);
			RenderTexture_set_useMipMap_mAE1437C3D7D21441891A612C3B812EE9C379F126((RenderTexture_t5FE7A5B47EF962A0E8D7BEBA05E9FC87D49A1849 *)L_127, (bool)L_130, /*hidden argument*/NULL);
			// break;
			goto IL_0721;
		}

IL_0522:
		{
			// instance.memorylessMode = reader.Read<UnityEngine.RenderTextureMemoryless>();
			RenderTexture_t5FE7A5B47EF962A0E8D7BEBA05E9FC87D49A1849 * L_131 = V_0;
			ES3Reader_t2780AF8AA61DA2A817115CEF8612AC0E494D03C9 * L_132 = ___reader0;
			NullCheck((ES3Reader_t2780AF8AA61DA2A817115CEF8612AC0E494D03C9 *)L_132);
			int32_t L_133;
			L_133 = GenericVirtFuncInvoker0< int32_t >::Invoke(ES3Reader_Read_TisRenderTextureMemoryless_t37547D68C2186D2650440F719302CDA4A3BB7F67_m3A980BA15AADBBB8393C3BC88CE17EEDDC89B027_RuntimeMethod_var, (ES3Reader_t2780AF8AA61DA2A817115CEF8612AC0E494D03C9 *)L_132);
			NullCheck((RenderTexture_t5FE7A5B47EF962A0E8D7BEBA05E9FC87D49A1849 *)L_131);
			RenderTexture_set_memorylessMode_mE48B2A38E9374A7BB419383B438790347474EFC1((RenderTexture_t5FE7A5B47EF962A0E8D7BEBA05E9FC87D49A1849 *)L_131, (int32_t)L_133, /*hidden argument*/NULL);
			// break;
			goto IL_0721;
		}

IL_0533:
		{
			// instance.format = reader.Read<UnityEngine.RenderTextureFormat>();
			RenderTexture_t5FE7A5B47EF962A0E8D7BEBA05E9FC87D49A1849 * L_134 = V_0;
			ES3Reader_t2780AF8AA61DA2A817115CEF8612AC0E494D03C9 * L_135 = ___reader0;
			NullCheck((ES3Reader_t2780AF8AA61DA2A817115CEF8612AC0E494D03C9 *)L_135);
			int32_t L_136;
			L_136 = GenericVirtFuncInvoker0< int32_t >::Invoke(ES3Reader_Read_TisRenderTextureFormat_t8371287102ED67772EF78229CF4AB9D38C2CD626_mE6358E03407F5C15B58B292C79D4770DE3FAC95A_RuntimeMethod_var, (ES3Reader_t2780AF8AA61DA2A817115CEF8612AC0E494D03C9 *)L_135);
			NullCheck((RenderTexture_t5FE7A5B47EF962A0E8D7BEBA05E9FC87D49A1849 *)L_134);
			RenderTexture_set_format_m32D42DC33DB151B69E81D0D93F36DE7450CFC23D((RenderTexture_t5FE7A5B47EF962A0E8D7BEBA05E9FC87D49A1849 *)L_134, (int32_t)L_136, /*hidden argument*/NULL);
			// break;
			goto IL_0721;
		}

IL_0544:
		{
			// instance.autoGenerateMips = reader.Read<System.Boolean>(ES3Type_bool.Instance);
			RenderTexture_t5FE7A5B47EF962A0E8D7BEBA05E9FC87D49A1849 * L_137 = V_0;
			ES3Reader_t2780AF8AA61DA2A817115CEF8612AC0E494D03C9 * L_138 = ___reader0;
			IL2CPP_RUNTIME_CLASS_INIT(ES3Type_bool_t8F309F7B9CC735FF1DEE68081B6E3CAB367745F4_il2cpp_TypeInfo_var);
			ES3Type_t8FBECB7AE75168648B9524E0C2A38DAD4555421D * L_139 = ((ES3Type_bool_t8F309F7B9CC735FF1DEE68081B6E3CAB367745F4_StaticFields*)il2cpp_codegen_static_fields_for(ES3Type_bool_t8F309F7B9CC735FF1DEE68081B6E3CAB367745F4_il2cpp_TypeInfo_var))->get_Instance_12();
			NullCheck((ES3Reader_t2780AF8AA61DA2A817115CEF8612AC0E494D03C9 *)L_138);
			bool L_140;
			L_140 = GenericVirtFuncInvoker1< bool, ES3Type_t8FBECB7AE75168648B9524E0C2A38DAD4555421D * >::Invoke(ES3Reader_Read_TisBoolean_t07D1E3F34E4813023D64F584DFF7B34C9D922F37_mC6D1B158268FF9B97822FF9F5B37FB1723FEDA22_RuntimeMethod_var, (ES3Reader_t2780AF8AA61DA2A817115CEF8612AC0E494D03C9 *)L_138, (ES3Type_t8FBECB7AE75168648B9524E0C2A38DAD4555421D *)L_139);
			NullCheck((RenderTexture_t5FE7A5B47EF962A0E8D7BEBA05E9FC87D49A1849 *)L_137);
			RenderTexture_set_autoGenerateMips_m0F02D60D4C4D4790B354451732F2DA6BA12D2E63((RenderTexture_t5FE7A5B47EF962A0E8D7BEBA05E9FC87D49A1849 *)L_137, (bool)L_140, /*hidden argument*/NULL);
			// break;
			goto IL_0721;
		}

IL_055a:
		{
			// instance.volumeDepth = reader.Read<System.Int32>(ES3Type_int.Instance);
			RenderTexture_t5FE7A5B47EF962A0E8D7BEBA05E9FC87D49A1849 * L_141 = V_0;
			ES3Reader_t2780AF8AA61DA2A817115CEF8612AC0E494D03C9 * L_142 = ___reader0;
			IL2CPP_RUNTIME_CLASS_INIT(ES3Type_int_tF64C15D40AD0CC7C15BCD1CEC3C5C6BF837BD167_il2cpp_TypeInfo_var);
			ES3Type_t8FBECB7AE75168648B9524E0C2A38DAD4555421D * L_143 = ((ES3Type_int_tF64C15D40AD0CC7C15BCD1CEC3C5C6BF837BD167_StaticFields*)il2cpp_codegen_static_fields_for(ES3Type_int_tF64C15D40AD0CC7C15BCD1CEC3C5C6BF837BD167_il2cpp_TypeInfo_var))->get_Instance_12();
			NullCheck((ES3Reader_t2780AF8AA61DA2A817115CEF8612AC0E494D03C9 *)L_142);
			int32_t L_144;
			L_144 = GenericVirtFuncInvoker1< int32_t, ES3Type_t8FBECB7AE75168648B9524E0C2A38DAD4555421D * >::Invoke(ES3Reader_Read_TisInt32_tFDE5F8CD43D10453F6A2E0C77FE48C6CC7009046_m2B74AA6627F5B1D21171D56C42F71DE5A7C1B4A6_RuntimeMethod_var, (ES3Reader_t2780AF8AA61DA2A817115CEF8612AC0E494D03C9 *)L_142, (ES3Type_t8FBECB7AE75168648B9524E0C2A38DAD4555421D *)L_143);
			NullCheck((RenderTexture_t5FE7A5B47EF962A0E8D7BEBA05E9FC87D49A1849 *)L_141);
			RenderTexture_set_volumeDepth_m01D7BD50386DDAE777CE3CB9B60FDD7DE798AC93((RenderTexture_t5FE7A5B47EF962A0E8D7BEBA05E9FC87D49A1849 *)L_141, (int32_t)L_144, /*hidden argument*/NULL);
			// break;
			goto IL_0721;
		}

IL_0570:
		{
			// instance.antiAliasing = reader.Read<System.Int32>(ES3Type_int.Instance);
			RenderTexture_t5FE7A5B47EF962A0E8D7BEBA05E9FC87D49A1849 * L_145 = V_0;
			ES3Reader_t2780AF8AA61DA2A817115CEF8612AC0E494D03C9 * L_146 = ___reader0;
			IL2CPP_RUNTIME_CLASS_INIT(ES3Type_int_tF64C15D40AD0CC7C15BCD1CEC3C5C6BF837BD167_il2cpp_TypeInfo_var);
			ES3Type_t8FBECB7AE75168648B9524E0C2A38DAD4555421D * L_147 = ((ES3Type_int_tF64C15D40AD0CC7C15BCD1CEC3C5C6BF837BD167_StaticFields*)il2cpp_codegen_static_fields_for(ES3Type_int_tF64C15D40AD0CC7C15BCD1CEC3C5C6BF837BD167_il2cpp_TypeInfo_var))->get_Instance_12();
			NullCheck((ES3Reader_t2780AF8AA61DA2A817115CEF8612AC0E494D03C9 *)L_146);
			int32_t L_148;
			L_148 = GenericVirtFuncInvoker1< int32_t, ES3Type_t8FBECB7AE75168648B9524E0C2A38DAD4555421D * >::Invoke(ES3Reader_Read_TisInt32_tFDE5F8CD43D10453F6A2E0C77FE48C6CC7009046_m2B74AA6627F5B1D21171D56C42F71DE5A7C1B4A6_RuntimeMethod_var, (ES3Reader_t2780AF8AA61DA2A817115CEF8612AC0E494D03C9 *)L_146, (ES3Type_t8FBECB7AE75168648B9524E0C2A38DAD4555421D *)L_147);
			NullCheck((RenderTexture_t5FE7A5B47EF962A0E8D7BEBA05E9FC87D49A1849 *)L_145);
			RenderTexture_set_antiAliasing_m4D37900B7E23CA0D33F109DB8DF21265DB70C38F((RenderTexture_t5FE7A5B47EF962A0E8D7BEBA05E9FC87D49A1849 *)L_145, (int32_t)L_148, /*hidden argument*/NULL);
			// break;
			goto IL_0721;
		}

IL_0586:
		{
			// instance.enableRandomWrite = reader.Read<System.Boolean>(ES3Type_bool.Instance);
			RenderTexture_t5FE7A5B47EF962A0E8D7BEBA05E9FC87D49A1849 * L_149 = V_0;
			ES3Reader_t2780AF8AA61DA2A817115CEF8612AC0E494D03C9 * L_150 = ___reader0;
			IL2CPP_RUNTIME_CLASS_INIT(ES3Type_bool_t8F309F7B9CC735FF1DEE68081B6E3CAB367745F4_il2cpp_TypeInfo_var);
			ES3Type_t8FBECB7AE75168648B9524E0C2A38DAD4555421D * L_151 = ((ES3Type_bool_t8F309F7B9CC735FF1DEE68081B6E3CAB367745F4_StaticFields*)il2cpp_codegen_static_fields_for(ES3Type_bool_t8F309F7B9CC735FF1DEE68081B6E3CAB367745F4_il2cpp_TypeInfo_var))->get_Instance_12();
			NullCheck((ES3Reader_t2780AF8AA61DA2A817115CEF8612AC0E494D03C9 *)L_150);
			bool L_152;
			L_152 = GenericVirtFuncInvoker1< bool, ES3Type_t8FBECB7AE75168648B9524E0C2A38DAD4555421D * >::Invoke(ES3Reader_Read_TisBoolean_t07D1E3F34E4813023D64F584DFF7B34C9D922F37_mC6D1B158268FF9B97822FF9F5B37FB1723FEDA22_RuntimeMethod_var, (ES3Reader_t2780AF8AA61DA2A817115CEF8612AC0E494D03C9 *)L_150, (ES3Type_t8FBECB7AE75168648B9524E0C2A38DAD4555421D *)L_151);
			NullCheck((RenderTexture_t5FE7A5B47EF962A0E8D7BEBA05E9FC87D49A1849 *)L_149);
			RenderTexture_set_enableRandomWrite_m024F49DB3CA3B02FA0EEBB3EACB37E6228CAA183((RenderTexture_t5FE7A5B47EF962A0E8D7BEBA05E9FC87D49A1849 *)L_149, (bool)L_152, /*hidden argument*/NULL);
			// break;
			goto IL_0721;
		}

IL_059c:
		{
			// instance.isPowerOfTwo = reader.Read<System.Boolean>(ES3Type_bool.Instance);
			RenderTexture_t5FE7A5B47EF962A0E8D7BEBA05E9FC87D49A1849 * L_153 = V_0;
			ES3Reader_t2780AF8AA61DA2A817115CEF8612AC0E494D03C9 * L_154 = ___reader0;
			IL2CPP_RUNTIME_CLASS_INIT(ES3Type_bool_t8F309F7B9CC735FF1DEE68081B6E3CAB367745F4_il2cpp_TypeInfo_var);
			ES3Type_t8FBECB7AE75168648B9524E0C2A38DAD4555421D * L_155 = ((ES3Type_bool_t8F309F7B9CC735FF1DEE68081B6E3CAB367745F4_StaticFields*)il2cpp_codegen_static_fields_for(ES3Type_bool_t8F309F7B9CC735FF1DEE68081B6E3CAB367745F4_il2cpp_TypeInfo_var))->get_Instance_12();
			NullCheck((ES3Reader_t2780AF8AA61DA2A817115CEF8612AC0E494D03C9 *)L_154);
			bool L_156;
			L_156 = GenericVirtFuncInvoker1< bool, ES3Type_t8FBECB7AE75168648B9524E0C2A38DAD4555421D * >::Invoke(ES3Reader_Read_TisBoolean_t07D1E3F34E4813023D64F584DFF7B34C9D922F37_mC6D1B158268FF9B97822FF9F5B37FB1723FEDA22_RuntimeMethod_var, (ES3Reader_t2780AF8AA61DA2A817115CEF8612AC0E494D03C9 *)L_154, (ES3Type_t8FBECB7AE75168648B9524E0C2A38DAD4555421D *)L_155);
			NullCheck((RenderTexture_t5FE7A5B47EF962A0E8D7BEBA05E9FC87D49A1849 *)L_153);
			RenderTexture_set_isPowerOfTwo_mA6D34F610DF27C40422DF5815892B45C656F1317((RenderTexture_t5FE7A5B47EF962A0E8D7BEBA05E9FC87D49A1849 *)L_153, (bool)L_156, /*hidden argument*/NULL);
			// break;
			goto IL_0721;
		}

IL_05b2:
		{
			// instance.depth = reader.Read<System.Int32>(ES3Type_int.Instance);
			RenderTexture_t5FE7A5B47EF962A0E8D7BEBA05E9FC87D49A1849 * L_157 = V_0;
			ES3Reader_t2780AF8AA61DA2A817115CEF8612AC0E494D03C9 * L_158 = ___reader0;
			IL2CPP_RUNTIME_CLASS_INIT(ES3Type_int_tF64C15D40AD0CC7C15BCD1CEC3C5C6BF837BD167_il2cpp_TypeInfo_var);
			ES3Type_t8FBECB7AE75168648B9524E0C2A38DAD4555421D * L_159 = ((ES3Type_int_tF64C15D40AD0CC7C15BCD1CEC3C5C6BF837BD167_StaticFields*)il2cpp_codegen_static_fields_for(ES3Type_int_tF64C15D40AD0CC7C15BCD1CEC3C5C6BF837BD167_il2cpp_TypeInfo_var))->get_Instance_12();
			NullCheck((ES3Reader_t2780AF8AA61DA2A817115CEF8612AC0E494D03C9 *)L_158);
			int32_t L_160;
			L_160 = GenericVirtFuncInvoker1< int32_t, ES3Type_t8FBECB7AE75168648B9524E0C2A38DAD4555421D * >::Invoke(ES3Reader_Read_TisInt32_tFDE5F8CD43D10453F6A2E0C77FE48C6CC7009046_m2B74AA6627F5B1D21171D56C42F71DE5A7C1B4A6_RuntimeMethod_var, (ES3Reader_t2780AF8AA61DA2A817115CEF8612AC0E494D03C9 *)L_158, (ES3Type_t8FBECB7AE75168648B9524E0C2A38DAD4555421D *)L_159);
			NullCheck((RenderTexture_t5FE7A5B47EF962A0E8D7BEBA05E9FC87D49A1849 *)L_157);
			RenderTexture_set_depth_mA57CEFEDDB45D0429FAC9532A631839F523944A3((RenderTexture_t5FE7A5B47EF962A0E8D7BEBA05E9FC87D49A1849 *)L_157, (int32_t)L_160, /*hidden argument*/NULL);
			// break;
			goto IL_0721;
		}

IL_05c8:
		{
			// instance.descriptor = reader.Read<UnityEngine.RenderTextureDescriptor>();
			RenderTexture_t5FE7A5B47EF962A0E8D7BEBA05E9FC87D49A1849 * L_161 = V_0;
			ES3Reader_t2780AF8AA61DA2A817115CEF8612AC0E494D03C9 * L_162 = ___reader0;
			NullCheck((ES3Reader_t2780AF8AA61DA2A817115CEF8612AC0E494D03C9 *)L_162);
			RenderTextureDescriptor_t67FF189E1F35AEB5D6C43A2D7103F3A8A8CA0B47  L_163;
			L_163 = GenericVirtFuncInvoker0< RenderTextureDescriptor_t67FF189E1F35AEB5D6C43A2D7103F3A8A8CA0B47  >::Invoke(ES3Reader_Read_TisRenderTextureDescriptor_t67FF189E1F35AEB5D6C43A2D7103F3A8A8CA0B47_m427886ADAAF96C7BA9BD423544128494F96D69E7_RuntimeMethod_var, (ES3Reader_t2780AF8AA61DA2A817115CEF8612AC0E494D03C9 *)L_162);
			NullCheck((RenderTexture_t5FE7A5B47EF962A0E8D7BEBA05E9FC87D49A1849 *)L_161);
			RenderTexture_set_descriptor_m3C8E31AE4644B23719A12345771D1B85EB6E5881((RenderTexture_t5FE7A5B47EF962A0E8D7BEBA05E9FC87D49A1849 *)L_161, (RenderTextureDescriptor_t67FF189E1F35AEB5D6C43A2D7103F3A8A8CA0B47 )L_163, /*hidden argument*/NULL);
			// break;
			goto IL_0721;
		}

IL_05d9:
		{
			// UnityEngine.RenderTexture.masterTextureLimit = reader.Read<System.Int32>(ES3Type_int.Instance);
			ES3Reader_t2780AF8AA61DA2A817115CEF8612AC0E494D03C9 * L_164 = ___reader0;
			IL2CPP_RUNTIME_CLASS_INIT(ES3Type_int_tF64C15D40AD0CC7C15BCD1CEC3C5C6BF837BD167_il2cpp_TypeInfo_var);
			ES3Type_t8FBECB7AE75168648B9524E0C2A38DAD4555421D * L_165 = ((ES3Type_int_tF64C15D40AD0CC7C15BCD1CEC3C5C6BF837BD167_StaticFields*)il2cpp_codegen_static_fields_for(ES3Type_int_tF64C15D40AD0CC7C15BCD1CEC3C5C6BF837BD167_il2cpp_TypeInfo_var))->get_Instance_12();
			NullCheck((ES3Reader_t2780AF8AA61DA2A817115CEF8612AC0E494D03C9 *)L_164);
			int32_t L_166;
			L_166 = GenericVirtFuncInvoker1< int32_t, ES3Type_t8FBECB7AE75168648B9524E0C2A38DAD4555421D * >::Invoke(ES3Reader_Read_TisInt32_tFDE5F8CD43D10453F6A2E0C77FE48C6CC7009046_m2B74AA6627F5B1D21171D56C42F71DE5A7C1B4A6_RuntimeMethod_var, (ES3Reader_t2780AF8AA61DA2A817115CEF8612AC0E494D03C9 *)L_164, (ES3Type_t8FBECB7AE75168648B9524E0C2A38DAD4555421D *)L_165);
			IL2CPP_RUNTIME_CLASS_INIT(Texture_t9FE0218A1EEDF266E8C85879FE123265CACC95AE_il2cpp_TypeInfo_var);
			Texture_set_masterTextureLimit_m94A531A20A54A86AF7B88A56F72709CE556B7DFF((int32_t)L_166, /*hidden argument*/NULL);
			// break;
			goto IL_0721;
		}

IL_05ee:
		{
			// UnityEngine.RenderTexture.anisotropicFiltering = reader.Read<UnityEngine.AnisotropicFiltering>();
			ES3Reader_t2780AF8AA61DA2A817115CEF8612AC0E494D03C9 * L_167 = ___reader0;
			NullCheck((ES3Reader_t2780AF8AA61DA2A817115CEF8612AC0E494D03C9 *)L_167);
			int32_t L_168;
			L_168 = GenericVirtFuncInvoker0< int32_t >::Invoke(ES3Reader_Read_TisAnisotropicFiltering_tAC3D1448B262D5869946CD1CDD2C8DAE3A7A537B_mAF1268AAC3E461D6E0604A19FAF0325873B6EC8A_RuntimeMethod_var, (ES3Reader_t2780AF8AA61DA2A817115CEF8612AC0E494D03C9 *)L_167);
			IL2CPP_RUNTIME_CLASS_INIT(Texture_t9FE0218A1EEDF266E8C85879FE123265CACC95AE_il2cpp_TypeInfo_var);
			Texture_set_anisotropicFiltering_mE2B639BF2681A8A0516C1C343C7E265ED60EAF16((int32_t)L_168, /*hidden argument*/NULL);
			// break;
			goto IL_0721;
		}

IL_05fe:
		{
			// instance.wrapMode = reader.Read<UnityEngine.TextureWrapMode>();
			RenderTexture_t5FE7A5B47EF962A0E8D7BEBA05E9FC87D49A1849 * L_169 = V_0;
			ES3Reader_t2780AF8AA61DA2A817115CEF8612AC0E494D03C9 * L_170 = ___reader0;
			NullCheck((ES3Reader_t2780AF8AA61DA2A817115CEF8612AC0E494D03C9 *)L_170);
			int32_t L_171;
			L_171 = GenericVirtFuncInvoker0< int32_t >::Invoke(ES3Reader_Read_TisTextureWrapMode_t86DDA8206E4AA784A1218D0DE3C5F6826D7549EB_m7926E449CD0B8BD56E5BF145DD0CCFE1C567F107_RuntimeMethod_var, (ES3Reader_t2780AF8AA61DA2A817115CEF8612AC0E494D03C9 *)L_170);
			NullCheck((Texture_t9FE0218A1EEDF266E8C85879FE123265CACC95AE *)L_169);
			Texture_set_wrapMode_m1233D2DF48DC20996F8EE26E866D4BDD2AC8050D((Texture_t9FE0218A1EEDF266E8C85879FE123265CACC95AE *)L_169, (int32_t)L_171, /*hidden argument*/NULL);
			// break;
			goto IL_0721;
		}

IL_060f:
		{
			// instance.wrapModeU = reader.Read<UnityEngine.TextureWrapMode>();
			RenderTexture_t5FE7A5B47EF962A0E8D7BEBA05E9FC87D49A1849 * L_172 = V_0;
			ES3Reader_t2780AF8AA61DA2A817115CEF8612AC0E494D03C9 * L_173 = ___reader0;
			NullCheck((ES3Reader_t2780AF8AA61DA2A817115CEF8612AC0E494D03C9 *)L_173);
			int32_t L_174;
			L_174 = GenericVirtFuncInvoker0< int32_t >::Invoke(ES3Reader_Read_TisTextureWrapMode_t86DDA8206E4AA784A1218D0DE3C5F6826D7549EB_m7926E449CD0B8BD56E5BF145DD0CCFE1C567F107_RuntimeMethod_var, (ES3Reader_t2780AF8AA61DA2A817115CEF8612AC0E494D03C9 *)L_173);
			NullCheck((Texture_t9FE0218A1EEDF266E8C85879FE123265CACC95AE *)L_172);
			Texture_set_wrapModeU_mBD3CBD6880E9E767B91ED9E1B14C725A52D7A66E((Texture_t9FE0218A1EEDF266E8C85879FE123265CACC95AE *)L_172, (int32_t)L_174, /*hidden argument*/NULL);
			// break;
			goto IL_0721;
		}

IL_0620:
		{
			// instance.wrapModeV = reader.Read<UnityEngine.TextureWrapMode>();
			RenderTexture_t5FE7A5B47EF962A0E8D7BEBA05E9FC87D49A1849 * L_175 = V_0;
			ES3Reader_t2780AF8AA61DA2A817115CEF8612AC0E494D03C9 * L_176 = ___reader0;
			NullCheck((ES3Reader_t2780AF8AA61DA2A817115CEF8612AC0E494D03C9 *)L_176);
			int32_t L_177;
			L_177 = GenericVirtFuncInvoker0< int32_t >::Invoke(ES3Reader_Read_TisTextureWrapMode_t86DDA8206E4AA784A1218D0DE3C5F6826D7549EB_m7926E449CD0B8BD56E5BF145DD0CCFE1C567F107_RuntimeMethod_var, (ES3Reader_t2780AF8AA61DA2A817115CEF8612AC0E494D03C9 *)L_176);
			NullCheck((Texture_t9FE0218A1EEDF266E8C85879FE123265CACC95AE *)L_175);
			Texture_set_wrapModeV_mCD51C11B4C90D7508113C744EDC09D04059403E5((Texture_t9FE0218A1EEDF266E8C85879FE123265CACC95AE *)L_175, (int32_t)L_177, /*hidden argument*/NULL);
			// break;
			goto IL_0721;
		}

IL_0631:
		{
			// instance.wrapModeW = reader.Read<UnityEngine.TextureWrapMode>();
			RenderTexture_t5FE7A5B47EF962A0E8D7BEBA05E9FC87D49A1849 * L_178 = V_0;
			ES3Reader_t2780AF8AA61DA2A817115CEF8612AC0E494D03C9 * L_179 = ___reader0;
			NullCheck((ES3Reader_t2780AF8AA61DA2A817115CEF8612AC0E494D03C9 *)L_179);
			int32_t L_180;
			L_180 = GenericVirtFuncInvoker0< int32_t >::Invoke(ES3Reader_Read_TisTextureWrapMode_t86DDA8206E4AA784A1218D0DE3C5F6826D7549EB_m7926E449CD0B8BD56E5BF145DD0CCFE1C567F107_RuntimeMethod_var, (ES3Reader_t2780AF8AA61DA2A817115CEF8612AC0E494D03C9 *)L_179);
			NullCheck((Texture_t9FE0218A1EEDF266E8C85879FE123265CACC95AE *)L_178);
			Texture_set_wrapModeW_m72C3239EA12A51D5031BD2A66C5E7B178EE9F65B((Texture_t9FE0218A1EEDF266E8C85879FE123265CACC95AE *)L_178, (int32_t)L_180, /*hidden argument*/NULL);
			// break;
			goto IL_0721;
		}

IL_0642:
		{
			// instance.filterMode = reader.Read<UnityEngine.FilterMode>();
			RenderTexture_t5FE7A5B47EF962A0E8D7BEBA05E9FC87D49A1849 * L_181 = V_0;
			ES3Reader_t2780AF8AA61DA2A817115CEF8612AC0E494D03C9 * L_182 = ___reader0;
			NullCheck((ES3Reader_t2780AF8AA61DA2A817115CEF8612AC0E494D03C9 *)L_182);
			int32_t L_183;
			L_183 = GenericVirtFuncInvoker0< int32_t >::Invoke(ES3Reader_Read_TisFilterMode_tE90A08FD96A142C761463D65E524BCDBFEEE3D19_m9819C2A442797B4060B0D9A80CFA96CFD6102839_RuntimeMethod_var, (ES3Reader_t2780AF8AA61DA2A817115CEF8612AC0E494D03C9 *)L_182);
			NullCheck((Texture_t9FE0218A1EEDF266E8C85879FE123265CACC95AE *)L_181);
			Texture_set_filterMode_m045141DB0FEFE496885D45F5F23B15BC0E77C8D0((Texture_t9FE0218A1EEDF266E8C85879FE123265CACC95AE *)L_181, (int32_t)L_183, /*hidden argument*/NULL);
			// break;
			goto IL_0721;
		}

IL_0653:
		{
			// instance.anisoLevel = reader.Read<System.Int32>(ES3Type_int.Instance);
			RenderTexture_t5FE7A5B47EF962A0E8D7BEBA05E9FC87D49A1849 * L_184 = V_0;
			ES3Reader_t2780AF8AA61DA2A817115CEF8612AC0E494D03C9 * L_185 = ___reader0;
			IL2CPP_RUNTIME_CLASS_INIT(ES3Type_int_tF64C15D40AD0CC7C15BCD1CEC3C5C6BF837BD167_il2cpp_TypeInfo_var);
			ES3Type_t8FBECB7AE75168648B9524E0C2A38DAD4555421D * L_186 = ((ES3Type_int_tF64C15D40AD0CC7C15BCD1CEC3C5C6BF837BD167_StaticFields*)il2cpp_codegen_static_fields_for(ES3Type_int_tF64C15D40AD0CC7C15BCD1CEC3C5C6BF837BD167_il2cpp_TypeInfo_var))->get_Instance_12();
			NullCheck((ES3Reader_t2780AF8AA61DA2A817115CEF8612AC0E494D03C9 *)L_185);
			int32_t L_187;
			L_187 = GenericVirtFuncInvoker1< int32_t, ES3Type_t8FBECB7AE75168648B9524E0C2A38DAD4555421D * >::Invoke(ES3Reader_Read_TisInt32_tFDE5F8CD43D10453F6A2E0C77FE48C6CC7009046_m2B74AA6627F5B1D21171D56C42F71DE5A7C1B4A6_RuntimeMethod_var, (ES3Reader_t2780AF8AA61DA2A817115CEF8612AC0E494D03C9 *)L_185, (ES3Type_t8FBECB7AE75168648B9524E0C2A38DAD4555421D *)L_186);
			NullCheck((Texture_t9FE0218A1EEDF266E8C85879FE123265CACC95AE *)L_184);
			Texture_set_anisoLevel_mE51360F6CD0562FD6355F8C0509B70A454CB33BE((Texture_t9FE0218A1EEDF266E8C85879FE123265CACC95AE *)L_184, (int32_t)L_187, /*hidden argument*/NULL);
			// break;
			goto IL_0721;
		}

IL_0669:
		{
			// instance.mipMapBias = reader.Read<System.Single>(ES3Type_float.Instance);
			RenderTexture_t5FE7A5B47EF962A0E8D7BEBA05E9FC87D49A1849 * L_188 = V_0;
			ES3Reader_t2780AF8AA61DA2A817115CEF8612AC0E494D03C9 * L_189 = ___reader0;
			IL2CPP_RUNTIME_CLASS_INIT(ES3Type_float_tF86B773C86731BD9AD79448B860BBB178FE77644_il2cpp_TypeInfo_var);
			ES3Type_t8FBECB7AE75168648B9524E0C2A38DAD4555421D * L_190 = ((ES3Type_float_tF86B773C86731BD9AD79448B860BBB178FE77644_StaticFields*)il2cpp_codegen_static_fields_for(ES3Type_float_tF86B773C86731BD9AD79448B860BBB178FE77644_il2cpp_TypeInfo_var))->get_Instance_12();
			NullCheck((ES3Reader_t2780AF8AA61DA2A817115CEF8612AC0E494D03C9 *)L_189);
			float L_191;
			L_191 = GenericVirtFuncInvoker1< float, ES3Type_t8FBECB7AE75168648B9524E0C2A38DAD4555421D * >::Invoke(ES3Reader_Read_TisSingle_tE07797BA3C98D4CA9B5A19413C19A76688AB899E_m4A0416374498BDA042B8EB21E49B72326D6CE5F4_RuntimeMethod_var, (ES3Reader_t2780AF8AA61DA2A817115CEF8612AC0E494D03C9 *)L_189, (ES3Type_t8FBECB7AE75168648B9524E0C2A38DAD4555421D *)L_190);
			NullCheck((Texture_t9FE0218A1EEDF266E8C85879FE123265CACC95AE *)L_188);
			Texture_set_mipMapBias_m5057ADA9DBA8E8E30EC15EA5BABFA0734CE2821C((Texture_t9FE0218A1EEDF266E8C85879FE123265CACC95AE *)L_188, (float)L_191, /*hidden argument*/NULL);
			// break;
			goto IL_0721;
		}

IL_067f:
		{
			// instance.name = reader.Read<System.String>(ES3Type_string.Instance);
			RenderTexture_t5FE7A5B47EF962A0E8D7BEBA05E9FC87D49A1849 * L_192 = V_0;
			ES3Reader_t2780AF8AA61DA2A817115CEF8612AC0E494D03C9 * L_193 = ___reader0;
			IL2CPP_RUNTIME_CLASS_INIT(ES3Type_string_tC47BFBE3CC816F3C70B51558C68F0C6470C5EFE5_il2cpp_TypeInfo_var);
			ES3Type_t8FBECB7AE75168648B9524E0C2A38DAD4555421D * L_194 = ((ES3Type_string_tC47BFBE3CC816F3C70B51558C68F0C6470C5EFE5_StaticFields*)il2cpp_codegen_static_fields_for(ES3Type_string_tC47BFBE3CC816F3C70B51558C68F0C6470C5EFE5_il2cpp_TypeInfo_var))->get_Instance_12();
			NullCheck((ES3Reader_t2780AF8AA61DA2A817115CEF8612AC0E494D03C9 *)L_193);
			String_t* L_195;
			L_195 = GenericVirtFuncInvoker1< String_t*, ES3Type_t8FBECB7AE75168648B9524E0C2A38DAD4555421D * >::Invoke(ES3Reader_Read_TisString_t_m883861F3B58239392073ABF39876826EEB87DF9C_RuntimeMethod_var, (ES3Reader_t2780AF8AA61DA2A817115CEF8612AC0E494D03C9 *)L_193, (ES3Type_t8FBECB7AE75168648B9524E0C2A38DAD4555421D *)L_194);
			NullCheck((Object_tF2F3778131EFF286AF62B7B013A170F95A91571A *)L_192);
			Object_set_name_m87C4006618ADB325ABE5439DF159E10DD8DD0781((Object_tF2F3778131EFF286AF62B7B013A170F95A91571A *)L_192, (String_t*)L_195, /*hidden argument*/NULL);
			// break;
			goto IL_0721;
		}

IL_0695:
		{
			// instance.vrUsage = reader.Read<UnityEngine.VRTextureUsage>();
			RenderTexture_t5FE7A5B47EF962A0E8D7BEBA05E9FC87D49A1849 * L_196 = V_0;
			ES3Reader_t2780AF8AA61DA2A817115CEF8612AC0E494D03C9 * L_197 = ___reader0;
			NullCheck((ES3Reader_t2780AF8AA61DA2A817115CEF8612AC0E494D03C9 *)L_197);
			int32_t L_198;
			L_198 = GenericVirtFuncInvoker0< int32_t >::Invoke(ES3Reader_Read_TisVRTextureUsage_t3C09DF3DD90B5620BC0AB6F8078DFEF4E607F645_m7DE3966E4815BB13132866CB005EEE5B90FF51C2_RuntimeMethod_var, (ES3Reader_t2780AF8AA61DA2A817115CEF8612AC0E494D03C9 *)L_197);
			NullCheck((RenderTexture_t5FE7A5B47EF962A0E8D7BEBA05E9FC87D49A1849 *)L_196);
			RenderTexture_set_vrUsage_m9AF7F60442E3B933FDF274D801EA074D1A5ECB71((RenderTexture_t5FE7A5B47EF962A0E8D7BEBA05E9FC87D49A1849 *)L_196, (int32_t)L_198, /*hidden argument*/NULL);
			// break;
			goto IL_0721;
		}

IL_06a3:
		{
			// instance.graphicsFormat = reader.Read<UnityEngine.Experimental.Rendering.GraphicsFormat>();
			RenderTexture_t5FE7A5B47EF962A0E8D7BEBA05E9FC87D49A1849 * L_199 = V_0;
			ES3Reader_t2780AF8AA61DA2A817115CEF8612AC0E494D03C9 * L_200 = ___reader0;
			NullCheck((ES3Reader_t2780AF8AA61DA2A817115CEF8612AC0E494D03C9 *)L_200);
			int32_t L_201;
			L_201 = GenericVirtFuncInvoker0< int32_t >::Invoke(ES3Reader_Read_TisGraphicsFormat_t07A3C024BC77B843C53A369D6FC02ABD27D2AB1D_mCBD36004B10F649C93215AB4717F6F0D7118BF7D_RuntimeMethod_var, (ES3Reader_t2780AF8AA61DA2A817115CEF8612AC0E494D03C9 *)L_200);
			NullCheck((RenderTexture_t5FE7A5B47EF962A0E8D7BEBA05E9FC87D49A1849 *)L_199);
			RenderTexture_set_graphicsFormat_mA378AAD8BD876EE96637FF0A80A2AFEA4D852FAB((RenderTexture_t5FE7A5B47EF962A0E8D7BEBA05E9FC87D49A1849 *)L_199, (int32_t)L_201, /*hidden argument*/NULL);
			// break;
			goto IL_0721;
		}

IL_06b1:
		{
			// instance.stencilFormat = reader.Read<UnityEngine.Experimental.Rendering.GraphicsFormat>();
			RenderTexture_t5FE7A5B47EF962A0E8D7BEBA05E9FC87D49A1849 * L_202 = V_0;
			ES3Reader_t2780AF8AA61DA2A817115CEF8612AC0E494D03C9 * L_203 = ___reader0;
			NullCheck((ES3Reader_t2780AF8AA61DA2A817115CEF8612AC0E494D03C9 *)L_203);
			int32_t L_204;
			L_204 = GenericVirtFuncInvoker0< int32_t >::Invoke(ES3Reader_Read_TisGraphicsFormat_t07A3C024BC77B843C53A369D6FC02ABD27D2AB1D_mCBD36004B10F649C93215AB4717F6F0D7118BF7D_RuntimeMethod_var, (ES3Reader_t2780AF8AA61DA2A817115CEF8612AC0E494D03C9 *)L_203);
			NullCheck((RenderTexture_t5FE7A5B47EF962A0E8D7BEBA05E9FC87D49A1849 *)L_202);
			RenderTexture_set_stencilFormat_m7C6E21FCDB7E786D403CFC9775105B050EFF19C7((RenderTexture_t5FE7A5B47EF962A0E8D7BEBA05E9FC87D49A1849 *)L_202, (int32_t)L_204, /*hidden argument*/NULL);
			// break;
			goto IL_0721;
		}

IL_06bf:
		{
			// instance.bindTextureMS = reader.Read<System.Boolean>(ES3Type_bool.Instance);
			RenderTexture_t5FE7A5B47EF962A0E8D7BEBA05E9FC87D49A1849 * L_205 = V_0;
			ES3Reader_t2780AF8AA61DA2A817115CEF8612AC0E494D03C9 * L_206 = ___reader0;
			IL2CPP_RUNTIME_CLASS_INIT(ES3Type_bool_t8F309F7B9CC735FF1DEE68081B6E3CAB367745F4_il2cpp_TypeInfo_var);
			ES3Type_t8FBECB7AE75168648B9524E0C2A38DAD4555421D * L_207 = ((ES3Type_bool_t8F309F7B9CC735FF1DEE68081B6E3CAB367745F4_StaticFields*)il2cpp_codegen_static_fields_for(ES3Type_bool_t8F309F7B9CC735FF1DEE68081B6E3CAB367745F4_il2cpp_TypeInfo_var))->get_Instance_12();
			NullCheck((ES3Reader_t2780AF8AA61DA2A817115CEF8612AC0E494D03C9 *)L_206);
			bool L_208;
			L_208 = GenericVirtFuncInvoker1< bool, ES3Type_t8FBECB7AE75168648B9524E0C2A38DAD4555421D * >::Invoke(ES3Reader_Read_TisBoolean_t07D1E3F34E4813023D64F584DFF7B34C9D922F37_mC6D1B158268FF9B97822FF9F5B37FB1723FEDA22_RuntimeMethod_var, (ES3Reader_t2780AF8AA61DA2A817115CEF8612AC0E494D03C9 *)L_206, (ES3Type_t8FBECB7AE75168648B9524E0C2A38DAD4555421D *)L_207);
			NullCheck((RenderTexture_t5FE7A5B47EF962A0E8D7BEBA05E9FC87D49A1849 *)L_205);
			RenderTexture_set_bindTextureMS_m6C26F6AB2DE8FE81BFCA60C936AA08EA7F1A7177((RenderTexture_t5FE7A5B47EF962A0E8D7BEBA05E9FC87D49A1849 *)L_205, (bool)L_208, /*hidden argument*/NULL);
			// break;
			goto IL_0721;
		}

IL_06d2:
		{
			// instance.useDynamicScale = reader.Read<System.Boolean>(ES3Type_bool.Instance);
			RenderTexture_t5FE7A5B47EF962A0E8D7BEBA05E9FC87D49A1849 * L_209 = V_0;
			ES3Reader_t2780AF8AA61DA2A817115CEF8612AC0E494D03C9 * L_210 = ___reader0;
			IL2CPP_RUNTIME_CLASS_INIT(ES3Type_bool_t8F309F7B9CC735FF1DEE68081B6E3CAB367745F4_il2cpp_TypeInfo_var);
			ES3Type_t8FBECB7AE75168648B9524E0C2A38DAD4555421D * L_211 = ((ES3Type_bool_t8F309F7B9CC735FF1DEE68081B6E3CAB367745F4_StaticFields*)il2cpp_codegen_static_fields_for(ES3Type_bool_t8F309F7B9CC735FF1DEE68081B6E3CAB367745F4_il2cpp_TypeInfo_var))->get_Instance_12();
			NullCheck((ES3Reader_t2780AF8AA61DA2A817115CEF8612AC0E494D03C9 *)L_210);
			bool L_212;
			L_212 = GenericVirtFuncInvoker1< bool, ES3Type_t8FBECB7AE75168648B9524E0C2A38DAD4555421D * >::Invoke(ES3Reader_Read_TisBoolean_t07D1E3F34E4813023D64F584DFF7B34C9D922F37_mC6D1B158268FF9B97822FF9F5B37FB1723FEDA22_RuntimeMethod_var, (ES3Reader_t2780AF8AA61DA2A817115CEF8612AC0E494D03C9 *)L_210, (ES3Type_t8FBECB7AE75168648B9524E0C2A38DAD4555421D *)L_211);
			NullCheck((RenderTexture_t5FE7A5B47EF962A0E8D7BEBA05E9FC87D49A1849 *)L_209);
			RenderTexture_set_useDynamicScale_m8F96571C7EDBEFAB9278E04A3F3EB67067A5AE29((RenderTexture_t5FE7A5B47EF962A0E8D7BEBA05E9FC87D49A1849 *)L_209, (bool)L_212, /*hidden argument*/NULL);
			// break;
			goto IL_0721;
		}

IL_06e5:
		{
			// UnityEngine.RenderTexture.streamingTextureForceLoadAll = reader.Read<System.Boolean>(ES3Type_bool.Instance);
			ES3Reader_t2780AF8AA61DA2A817115CEF8612AC0E494D03C9 * L_213 = ___reader0;
			IL2CPP_RUNTIME_CLASS_INIT(ES3Type_bool_t8F309F7B9CC735FF1DEE68081B6E3CAB367745F4_il2cpp_TypeInfo_var);
			ES3Type_t8FBECB7AE75168648B9524E0C2A38DAD4555421D * L_214 = ((ES3Type_bool_t8F309F7B9CC735FF1DEE68081B6E3CAB367745F4_StaticFields*)il2cpp_codegen_static_fields_for(ES3Type_bool_t8F309F7B9CC735FF1DEE68081B6E3CAB367745F4_il2cpp_TypeInfo_var))->get_Instance_12();
			NullCheck((ES3Reader_t2780AF8AA61DA2A817115CEF8612AC0E494D03C9 *)L_213);
			bool L_215;
			L_215 = GenericVirtFuncInvoker1< bool, ES3Type_t8FBECB7AE75168648B9524E0C2A38DAD4555421D * >::Invoke(ES3Reader_Read_TisBoolean_t07D1E3F34E4813023D64F584DFF7B34C9D922F37_mC6D1B158268FF9B97822FF9F5B37FB1723FEDA22_RuntimeMethod_var, (ES3Reader_t2780AF8AA61DA2A817115CEF8612AC0E494D03C9 *)L_213, (ES3Type_t8FBECB7AE75168648B9524E0C2A38DAD4555421D *)L_214);
			IL2CPP_RUNTIME_CLASS_INIT(Texture_t9FE0218A1EEDF266E8C85879FE123265CACC95AE_il2cpp_TypeInfo_var);
			Texture_set_streamingTextureForceLoadAll_m325117C0830BB9B4316CF41CEE045759FC52B7A3((bool)L_215, /*hidden argument*/NULL);
			// break;
			goto IL_0721;
		}

IL_06f7:
		{
			// UnityEngine.RenderTexture.streamingTextureDiscardUnusedMips = reader.Read<System.Boolean>(ES3Type_bool.Instance);
			ES3Reader_t2780AF8AA61DA2A817115CEF8612AC0E494D03C9 * L_216 = ___reader0;
			IL2CPP_RUNTIME_CLASS_INIT(ES3Type_bool_t8F309F7B9CC735FF1DEE68081B6E3CAB367745F4_il2cpp_TypeInfo_var);
			ES3Type_t8FBECB7AE75168648B9524E0C2A38DAD4555421D * L_217 = ((ES3Type_bool_t8F309F7B9CC735FF1DEE68081B6E3CAB367745F4_StaticFields*)il2cpp_codegen_static_fields_for(ES3Type_bool_t8F309F7B9CC735FF1DEE68081B6E3CAB367745F4_il2cpp_TypeInfo_var))->get_Instance_12();
			NullCheck((ES3Reader_t2780AF8AA61DA2A817115CEF8612AC0E494D03C9 *)L_216);
			bool L_218;
			L_218 = GenericVirtFuncInvoker1< bool, ES3Type_t8FBECB7AE75168648B9524E0C2A38DAD4555421D * >::Invoke(ES3Reader_Read_TisBoolean_t07D1E3F34E4813023D64F584DFF7B34C9D922F37_mC6D1B158268FF9B97822FF9F5B37FB1723FEDA22_RuntimeMethod_var, (ES3Reader_t2780AF8AA61DA2A817115CEF8612AC0E494D03C9 *)L_216, (ES3Type_t8FBECB7AE75168648B9524E0C2A38DAD4555421D *)L_217);
			IL2CPP_RUNTIME_CLASS_INIT(Texture_t9FE0218A1EEDF266E8C85879FE123265CACC95AE_il2cpp_TypeInfo_var);
			Texture_set_streamingTextureDiscardUnusedMips_mE184CE016A8E0319B437D34E0DB61962CE17F5DC((bool)L_218, /*hidden argument*/NULL);
			// break;
			goto IL_0721;
		}

IL_0709:
		{
			// UnityEngine.RenderTexture.allowThreadedTextureCreation = reader.Read<System.Boolean>(ES3Type_bool.Instance);
			ES3Reader_t2780AF8AA61DA2A817115CEF8612AC0E494D03C9 * L_219 = ___reader0;
			IL2CPP_RUNTIME_CLASS_INIT(ES3Type_bool_t8F309F7B9CC735FF1DEE68081B6E3CAB367745F4_il2cpp_TypeInfo_var);
			ES3Type_t8FBECB7AE75168648B9524E0C2A38DAD4555421D * L_220 = ((ES3Type_bool_t8F309F7B9CC735FF1DEE68081B6E3CAB367745F4_StaticFields*)il2cpp_codegen_static_fields_for(ES3Type_bool_t8F309F7B9CC735FF1DEE68081B6E3CAB367745F4_il2cpp_TypeInfo_var))->get_Instance_12();
			NullCheck((ES3Reader_t2780AF8AA61DA2A817115CEF8612AC0E494D03C9 *)L_219);
			bool L_221;
			L_221 = GenericVirtFuncInvoker1< bool, ES3Type_t8FBECB7AE75168648B9524E0C2A38DAD4555421D * >::Invoke(ES3Reader_Read_TisBoolean_t07D1E3F34E4813023D64F584DFF7B34C9D922F37_mC6D1B158268FF9B97822FF9F5B37FB1723FEDA22_RuntimeMethod_var, (ES3Reader_t2780AF8AA61DA2A817115CEF8612AC0E494D03C9 *)L_219, (ES3Type_t8FBECB7AE75168648B9524E0C2A38DAD4555421D *)L_220);
			IL2CPP_RUNTIME_CLASS_INIT(Texture_t9FE0218A1EEDF266E8C85879FE123265CACC95AE_il2cpp_TypeInfo_var);
			Texture_set_allowThreadedTextureCreation_m84D29394912B9CE876023963426256CBEB15A52E((bool)L_221, /*hidden argument*/NULL);
			// break;
			goto IL_0721;
		}

IL_071b:
		{
			// reader.Skip();
			ES3Reader_t2780AF8AA61DA2A817115CEF8612AC0E494D03C9 * L_222 = ___reader0;
			NullCheck((ES3Reader_t2780AF8AA61DA2A817115CEF8612AC0E494D03C9 *)L_222);
			VirtActionInvoker0::Invoke(41 /* System.Void ES3Reader::Skip() */, (ES3Reader_t2780AF8AA61DA2A817115CEF8612AC0E494D03C9 *)L_222);
		}

IL_0721:
		{
			// foreach (string propertyName in reader.Properties)
			RuntimeObject* L_223 = V_1;
			NullCheck((RuntimeObject*)L_223);
			bool L_224;
			L_224 = InterfaceFuncInvoker0< bool >::Invoke(0 /* System.Boolean System.Collections.IEnumerator::MoveNext() */, IEnumerator_t5956F3AFB7ECF1117E3BC5890E7FC7B7F7A04105_il2cpp_TypeInfo_var, (RuntimeObject*)L_223);
			if (L_224)
			{
				goto IL_0018;
			}
		}

IL_072c:
		{
			IL2CPP_LEAVE(0x742, FINALLY_072e);
		}
	} // end try (depth: 1)
	catch(Il2CppExceptionWrapper& e)
	{
		__last_unhandled_exception = (Exception_t *)e.ex;
		goto FINALLY_072e;
	}

FINALLY_072e:
	{ // begin finally (depth: 1)
		{
			RuntimeObject* L_225 = V_1;
			V_4 = (RuntimeObject*)((RuntimeObject*)IsInst((RuntimeObject*)L_225, IDisposable_t099785737FC6A1E3699919A94109383715A8D807_il2cpp_TypeInfo_var));
			RuntimeObject* L_226 = V_4;
			if (!L_226)
			{
				goto IL_0741;
			}
		}

IL_073a:
		{
			RuntimeObject* L_227 = V_4;
			NullCheck((RuntimeObject*)L_227);
			InterfaceActionInvoker0::Invoke(0 /* System.Void System.IDisposable::Dispose() */, IDisposable_t099785737FC6A1E3699919A94109383715A8D807_il2cpp_TypeInfo_var, (RuntimeObject*)L_227);
		}

IL_0741:
		{
			IL2CPP_END_FINALLY(1838)
		}
	} // end finally (depth: 1)
	IL2CPP_CLEANUP(1838)
	{
		IL2CPP_RETHROW_IF_UNHANDLED(Exception_t *)
		IL2CPP_JUMP_TBL(0x742, IL_0742)
	}

IL_0742:
	{
		// }
		return;
	}
}
// System.Void ES3Types.ES3Type_RenderTexture::ReadObject<UnityEngine.ParticleSystem/RotationBySpeedModule>(ES3Reader,System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ES3Type_RenderTexture_ReadObject_TisRotationBySpeedModule_t9EFC4CF3826F9F6FF2AFC3F0C25CEBC8E36FF0AD_m64F444624A16EBEADC4D54F36E11A8BBB904E498_gshared (ES3Type_RenderTexture_t7B14573C56809AFDC0A1C481D6B61E2146DEF194 * __this, ES3Reader_t2780AF8AA61DA2A817115CEF8612AC0E494D03C9 * ___reader0, RuntimeObject * ___obj1, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ES3Reader_Read_TisAnisotropicFiltering_tAC3D1448B262D5869946CD1CDD2C8DAE3A7A537B_mAF1268AAC3E461D6E0604A19FAF0325873B6EC8A_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ES3Reader_Read_TisBoolean_t07D1E3F34E4813023D64F584DFF7B34C9D922F37_mC6D1B158268FF9B97822FF9F5B37FB1723FEDA22_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ES3Reader_Read_TisFilterMode_tE90A08FD96A142C761463D65E524BCDBFEEE3D19_m9819C2A442797B4060B0D9A80CFA96CFD6102839_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ES3Reader_Read_TisGraphicsFormat_t07A3C024BC77B843C53A369D6FC02ABD27D2AB1D_mCBD36004B10F649C93215AB4717F6F0D7118BF7D_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ES3Reader_Read_TisInt32_tFDE5F8CD43D10453F6A2E0C77FE48C6CC7009046_m2B74AA6627F5B1D21171D56C42F71DE5A7C1B4A6_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ES3Reader_Read_TisRenderTextureDescriptor_t67FF189E1F35AEB5D6C43A2D7103F3A8A8CA0B47_m427886ADAAF96C7BA9BD423544128494F96D69E7_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ES3Reader_Read_TisRenderTextureFormat_t8371287102ED67772EF78229CF4AB9D38C2CD626_mE6358E03407F5C15B58B292C79D4770DE3FAC95A_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ES3Reader_Read_TisRenderTextureMemoryless_t37547D68C2186D2650440F719302CDA4A3BB7F67_m3A980BA15AADBBB8393C3BC88CE17EEDDC89B027_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ES3Reader_Read_TisSingle_tE07797BA3C98D4CA9B5A19413C19A76688AB899E_m4A0416374498BDA042B8EB21E49B72326D6CE5F4_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ES3Reader_Read_TisString_t_m883861F3B58239392073ABF39876826EEB87DF9C_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ES3Reader_Read_TisTextureDimension_tADCCB7C1D30E4D1182651BA9094B4DE61B63EACC_m19EAA3B93D10636C17A62A3D8437349223CFD988_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ES3Reader_Read_TisTextureWrapMode_t86DDA8206E4AA784A1218D0DE3C5F6826D7549EB_m7926E449CD0B8BD56E5BF145DD0CCFE1C567F107_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ES3Reader_Read_TisVRTextureUsage_t3C09DF3DD90B5620BC0AB6F8078DFEF4E607F645_m7DE3966E4815BB13132866CB005EEE5B90FF51C2_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ES3Type_bool_t8F309F7B9CC735FF1DEE68081B6E3CAB367745F4_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ES3Type_float_tF86B773C86731BD9AD79448B860BBB178FE77644_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ES3Type_int_tF64C15D40AD0CC7C15BCD1CEC3C5C6BF837BD167_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ES3Type_string_tC47BFBE3CC816F3C70B51558C68F0C6470C5EFE5_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IDisposable_t099785737FC6A1E3699919A94109383715A8D807_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IEnumerator_t5956F3AFB7ECF1117E3BC5890E7FC7B7F7A04105_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&RenderTexture_t5FE7A5B47EF962A0E8D7BEBA05E9FC87D49A1849_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&String_t_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Texture_t9FE0218A1EEDF266E8C85879FE123265CACC95AE_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral201D9D00BB60DC2318D21CF9902290EFE255D5DC);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral2ADFC3FFF7C52D554F0435A348A5345C9FCD7FF8);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral2E201D1972661439FD3C8523C55723E7E9BCC7DA);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral2EE7B6B0E37E14930BBA497867139BFD0617CE04);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral3A04F86957625CB28FA670EECF997E6BAD45BBE7);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral3BC15E3C2F40466B2DC85C4776499817B8306CBB);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral3F1522C8DB7943F2AE3AA1563D3AC25D9C8B93D1);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral53D3413057D7E52F44470A335C590748745352B1);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral647E0FB2B5E859CC4BD7C73623B82C8EFABA2563);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral65B008F04EC40A696263EF679CF274BD10999A5D);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral71C5F9C3E2F3C81C5BBC7FD313F6938654E61138);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral75C9716749EA210206E3467390B7A11F3F33DDFA);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral7606720A7AEF5939309A8E4FCB8274252FA3D7BF);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral7A4A6E2A7090298F814A9D44C89F8634249BEF07);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral7FF61C3A55BCA1287974D8740F945250B3F0F084);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral83AC9669A9053DD15B9F2E82D2CE2369EFE131BA);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral95F57476C0AA778364404E7CCCD7499BF1BF3757);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral9AB5ADF8A8A53110245466F7C226F7935F5FE95F);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralB49A1DF483856544CEC6018E8C944DB6E16A8D57);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralBA9362732D25B1644B7D8DEC5DF6F036A4A66DE5);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralC959D767B7F0BD38D9DA8A64A4750C3A0972E2A0);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralCD44AC57FFE6CAC7824F4CAA223F1BB8B4CB0D73);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralCE18B047107AA23D1AA9B2ED32D316148E02655F);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralEA8FBF382D8AC9EDB8FFC14A350641B987F5C631);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralEBF5FE0CBF3EEA67902EEA700B7216E3DB0D8E84);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralECAEEB225F8689DE45DEB4FA21CE34E1960B1B50);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralF23E83744C9D6FC70D71B723AAED8006D6780BCB);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralF2AF7DD0BFF41B7B35037F018DAABE7DCF357A7B);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralF38CFAE6A91D072D4453C29FF44D81D459A582F1);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralF3FA58C10BBB9830102605E24AF89DC619908DFA);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralF9EE582B77C320A1F6A3DF72205857C4248BAC79);
		s_Il2CppMethodInitialized = true;
	}
	RenderTexture_t5FE7A5B47EF962A0E8D7BEBA05E9FC87D49A1849 * V_0 = NULL;
	RuntimeObject* V_1 = NULL;
	String_t* V_2 = NULL;
	uint32_t V_3 = 0;
	RuntimeObject* V_4 = NULL;
	Exception_t * __last_unhandled_exception = 0;
	il2cpp::utils::ExceptionSupportStack<int32_t, 1> __leave_targets;
	{
		// var instance = (UnityEngine.RenderTexture)obj;
		RuntimeObject * L_0 = ___obj1;
		V_0 = (RenderTexture_t5FE7A5B47EF962A0E8D7BEBA05E9FC87D49A1849 *)((RenderTexture_t5FE7A5B47EF962A0E8D7BEBA05E9FC87D49A1849 *)Castclass((RuntimeObject*)L_0, RenderTexture_t5FE7A5B47EF962A0E8D7BEBA05E9FC87D49A1849_il2cpp_TypeInfo_var));
		// foreach (string propertyName in reader.Properties)
		ES3Reader_t2780AF8AA61DA2A817115CEF8612AC0E494D03C9 * L_1 = ___reader0;
		NullCheck((ES3Reader_t2780AF8AA61DA2A817115CEF8612AC0E494D03C9 *)L_1);
		ES3ReaderPropertyEnumerator_tFC854F4BE72BFA234682EB1909D92457534A979D * L_2;
		L_2 = VirtFuncInvoker0< ES3ReaderPropertyEnumerator_tFC854F4BE72BFA234682EB1909D92457534A979D * >::Invoke(39 /* ES3Reader/ES3ReaderPropertyEnumerator ES3Reader::get_Properties() */, (ES3Reader_t2780AF8AA61DA2A817115CEF8612AC0E494D03C9 *)L_1);
		NullCheck((ES3ReaderPropertyEnumerator_tFC854F4BE72BFA234682EB1909D92457534A979D *)L_2);
		RuntimeObject* L_3;
		L_3 = ES3ReaderPropertyEnumerator_GetEnumerator_m6C61168655E3736E7847E5CB1CD9BC6B48442FD4((ES3ReaderPropertyEnumerator_tFC854F4BE72BFA234682EB1909D92457534A979D *)L_2, /*hidden argument*/NULL);
		V_1 = (RuntimeObject*)L_3;
	}

IL_0013:
	try
	{ // begin try (depth: 1)
		{
			goto IL_0721;
		}

IL_0018:
		{
			// foreach (string propertyName in reader.Properties)
			RuntimeObject* L_4 = V_1;
			NullCheck((RuntimeObject*)L_4);
			RuntimeObject * L_5;
			L_5 = InterfaceFuncInvoker0< RuntimeObject * >::Invoke(1 /* System.Object System.Collections.IEnumerator::get_Current() */, IEnumerator_t5956F3AFB7ECF1117E3BC5890E7FC7B7F7A04105_il2cpp_TypeInfo_var, (RuntimeObject*)L_4);
			V_2 = (String_t*)((String_t*)Castclass((RuntimeObject*)L_5, String_t_il2cpp_TypeInfo_var));
			String_t* L_6 = V_2;
			if (!L_6)
			{
				goto IL_071b;
			}
		}

IL_002a:
		{
			String_t* L_7 = V_2;
			uint32_t L_8;
			L_8 = U3CPrivateImplementationDetailsU3E_ComputeStringHash_m3ADC1F612F9EE3DD518E6F0023A0DE0EE2B120A7((String_t*)L_7, /*hidden argument*/NULL);
			V_3 = (uint32_t)L_8;
			uint32_t L_9 = V_3;
			if ((!(((uint32_t)L_9) <= ((uint32_t)((int32_t)1508062721)))))
			{
				goto IL_0134;
			}
		}

IL_003c:
		{
			uint32_t L_10 = V_3;
			if ((!(((uint32_t)L_10) <= ((uint32_t)((int32_t)698754697)))))
			{
				goto IL_00b0;
			}
		}

IL_0044:
		{
			uint32_t L_11 = V_3;
			if ((!(((uint32_t)L_11) <= ((uint32_t)((int32_t)472844700)))))
			{
				goto IL_0072;
			}
		}

IL_004c:
		{
			uint32_t L_12 = V_3;
			if ((((int32_t)L_12) == ((int32_t)((int32_t)87590155))))
			{
				goto IL_043c;
			}
		}

IL_0057:
		{
			uint32_t L_13 = V_3;
			if ((((int32_t)L_13) == ((int32_t)((int32_t)301255720))))
			{
				goto IL_02d7;
			}
		}

IL_0062:
		{
			uint32_t L_14 = V_3;
			if ((((int32_t)L_14) == ((int32_t)((int32_t)472844700))))
			{
				goto IL_0283;
			}
		}

IL_006d:
		{
			goto IL_071b;
		}

IL_0072:
		{
			uint32_t L_15 = V_3;
			if ((!(((uint32_t)L_15) <= ((uint32_t)((int32_t)549791583)))))
			{
				goto IL_0095;
			}
		}

IL_007a:
		{
			uint32_t L_16 = V_3;
			if ((((int32_t)L_16) == ((int32_t)((int32_t)533013964))))
			{
				goto IL_03a9;
			}
		}

IL_0085:
		{
			uint32_t L_17 = V_3;
			if ((((int32_t)L_17) == ((int32_t)((int32_t)549791583))))
			{
				goto IL_03be;
			}
		}

IL_0090:
		{
			goto IL_071b;
		}

IL_0095:
		{
			uint32_t L_18 = V_3;
			if ((((int32_t)L_18) == ((int32_t)((int32_t)583346821))))
			{
				goto IL_0394;
			}
		}

IL_00a0:
		{
			uint32_t L_19 = V_3;
			if ((((int32_t)L_19) == ((int32_t)((int32_t)698754697))))
			{
				goto IL_02ec;
			}
		}

IL_00ab:
		{
			goto IL_071b;
		}

IL_00b0:
		{
			uint32_t L_20 = V_3;
			if ((!(((uint32_t)L_20) <= ((uint32_t)((int32_t)1235622516)))))
			{
				goto IL_00f6;
			}
		}

IL_00b8:
		{
			uint32_t L_21 = V_3;
			if ((!(((uint32_t)L_21) <= ((uint32_t)((int32_t)740612720)))))
			{
				goto IL_00db;
			}
		}

IL_00c0:
		{
			uint32_t L_22 = V_3;
			if ((((int32_t)L_22) == ((int32_t)((int32_t)705796271))))
			{
				goto IL_0316;
			}
		}

IL_00cb:
		{
			uint32_t L_23 = V_3;
			if ((((int32_t)L_23) == ((int32_t)((int32_t)740612720))))
			{
				goto IL_03d3;
			}
		}

IL_00d6:
		{
			goto IL_071b;
		}

IL_00db:
		{
			uint32_t L_24 = V_3;
			if ((((int32_t)L_24) == ((int32_t)((int32_t)1059843136))))
			{
				goto IL_0340;
			}
		}

IL_00e6:
		{
			uint32_t L_25 = V_3;
			if ((((int32_t)L_25) == ((int32_t)((int32_t)1235622516))))
			{
				goto IL_036a;
			}
		}

IL_00f1:
		{
			goto IL_071b;
		}

IL_00f6:
		{
			uint32_t L_26 = V_3;
			if ((!(((uint32_t)L_26) <= ((uint32_t)((int32_t)1320492961)))))
			{
				goto IL_0119;
			}
		}

IL_00fe:
		{
			uint32_t L_27 = V_3;
			if ((((int32_t)L_27) == ((int32_t)((int32_t)1310955452))))
			{
				goto IL_0490;
			}
		}

IL_0109:
		{
			uint32_t L_28 = V_3;
			if ((((int32_t)L_28) == ((int32_t)((int32_t)1320492961))))
			{
				goto IL_047b;
			}
		}

IL_0114:
		{
			goto IL_071b;
		}

IL_0119:
		{
			uint32_t L_29 = V_3;
			if ((((int32_t)L_29) == ((int32_t)((int32_t)1458352709))))
			{
				goto IL_0466;
			}
		}

IL_0124:
		{
			uint32_t L_30 = V_3;
			if ((((int32_t)L_30) == ((int32_t)((int32_t)1508062721))))
			{
				goto IL_04a5;
			}
		}

IL_012f:
		{
			goto IL_071b;
		}

IL_0134:
		{
			uint32_t L_31 = V_3;
			if ((!(((uint32_t)L_31) <= ((uint32_t)((int32_t)-1444332543)))))
			{
				goto IL_01c3;
			}
		}

IL_013f:
		{
			uint32_t L_32 = V_3;
			if ((!(((uint32_t)L_32) <= ((uint32_t)((int32_t)2129631044)))))
			{
				goto IL_0185;
			}
		}

IL_0147:
		{
			uint32_t L_33 = V_3;
			if ((!(((uint32_t)L_33) <= ((uint32_t)((int32_t)1640355324)))))
			{
				goto IL_016a;
			}
		}

IL_014f:
		{
			uint32_t L_34 = V_3;
			if ((((int32_t)L_34) == ((int32_t)((int32_t)1560124071))))
			{
				goto IL_04ba;
			}
		}

IL_015a:
		{
			uint32_t L_35 = V_3;
			if ((((int32_t)L_35) == ((int32_t)((int32_t)1640355324))))
			{
				goto IL_0451;
			}
		}

IL_0165:
		{
			goto IL_071b;
		}

IL_016a:
		{
			uint32_t L_36 = V_3;
			if ((((int32_t)L_36) == ((int32_t)((int32_t)1728801507))))
			{
				goto IL_026e;
			}
		}

IL_0175:
		{
			uint32_t L_37 = V_3;
			if ((((int32_t)L_37) == ((int32_t)((int32_t)2129631044))))
			{
				goto IL_03fd;
			}
		}

IL_0180:
		{
			goto IL_071b;
		}

IL_0185:
		{
			uint32_t L_38 = V_3;
			if ((!(((uint32_t)L_38) <= ((uint32_t)((int32_t)-1786286561)))))
			{
				goto IL_01a8;
			}
		}

IL_018d:
		{
			uint32_t L_39 = V_3;
			if ((((int32_t)L_39) == ((int32_t)((int32_t)-1925595674))))
			{
				goto IL_0412;
			}
		}

IL_0198:
		{
			uint32_t L_40 = V_3;
			if ((((int32_t)L_40) == ((int32_t)((int32_t)-1786286561))))
			{
				goto IL_0244;
			}
		}

IL_01a3:
		{
			goto IL_071b;
		}

IL_01a8:
		{
			uint32_t L_41 = V_3;
			if ((((int32_t)L_41) == ((int32_t)((int32_t)-1522491664))))
			{
				goto IL_0298;
			}
		}

IL_01b3:
		{
			uint32_t L_42 = V_3;
			if ((((int32_t)L_42) == ((int32_t)((int32_t)-1444332543))))
			{
				goto IL_0355;
			}
		}

IL_01be:
		{
			goto IL_071b;
		}

IL_01c3:
		{
			uint32_t L_43 = V_3;
			if ((!(((uint32_t)L_43) <= ((uint32_t)((int32_t)-558361902)))))
			{
				goto IL_0206;
			}
		}

IL_01cb:
		{
			uint32_t L_44 = V_3;
			if ((!(((uint32_t)L_44) <= ((uint32_t)((int32_t)-1180859054)))))
			{
				goto IL_01ee;
			}
		}

IL_01d3:
		{
			uint32_t L_45 = V_3;
			if ((((int32_t)L_45) == ((int32_t)((int32_t)-1335745110))))
			{
				goto IL_02c2;
			}
		}

IL_01de:
		{
			uint32_t L_46 = V_3;
			if ((((int32_t)L_46) == ((int32_t)((int32_t)-1180859054))))
			{
				goto IL_02ad;
			}
		}

IL_01e9:
		{
			goto IL_071b;
		}

IL_01ee:
		{
			uint32_t L_47 = V_3;
			if ((((int32_t)L_47) == ((int32_t)((int32_t)-708986046))))
			{
				goto IL_0259;
			}
		}

IL_01f6:
		{
			uint32_t L_48 = V_3;
			if ((((int32_t)L_48) == ((int32_t)((int32_t)-558361902))))
			{
				goto IL_037f;
			}
		}

IL_0201:
		{
			goto IL_071b;
		}

IL_0206:
		{
			uint32_t L_49 = V_3;
			if ((!(((uint32_t)L_49) <= ((uint32_t)((int32_t)-255211260)))))
			{
				goto IL_0229;
			}
		}

IL_020e:
		{
			uint32_t L_50 = V_3;
			if ((((int32_t)L_50) == ((int32_t)((int32_t)-345285761))))
			{
				goto IL_03e8;
			}
		}

IL_0219:
		{
			uint32_t L_51 = V_3;
			if ((((int32_t)L_51) == ((int32_t)((int32_t)-255211260))))
			{
				goto IL_0427;
			}
		}

IL_0224:
		{
			goto IL_071b;
		}

IL_0229:
		{
			uint32_t L_52 = V_3;
			if ((((int32_t)L_52) == ((int32_t)((int32_t)-42086080))))
			{
				goto IL_0301;
			}
		}

IL_0234:
		{
			uint32_t L_53 = V_3;
			if ((((int32_t)L_53) == ((int32_t)((int32_t)-25846038))))
			{
				goto IL_032b;
			}
		}

IL_023f:
		{
			goto IL_071b;
		}

IL_0244:
		{
			String_t* L_54 = V_2;
			bool L_55;
			L_55 = String_op_Equality_m50B3548E4AC232558190B0052877B290AA1D436A((String_t*)L_54, (String_t*)_stringLiteralEBF5FE0CBF3EEA67902EEA700B7216E3DB0D8E84, /*hidden argument*/NULL);
			if (L_55)
			{
				goto IL_04cf;
			}
		}

IL_0254:
		{
			goto IL_071b;
		}

IL_0259:
		{
			String_t* L_56 = V_2;
			bool L_57;
			L_57 = String_op_Equality_m50B3548E4AC232558190B0052877B290AA1D436A((String_t*)L_56, (String_t*)_stringLiteral647E0FB2B5E859CC4BD7C73623B82C8EFABA2563, /*hidden argument*/NULL);
			if (L_57)
			{
				goto IL_04e5;
			}
		}

IL_0269:
		{
			goto IL_071b;
		}

IL_026e:
		{
			String_t* L_58 = V_2;
			bool L_59;
			L_59 = String_op_Equality_m50B3548E4AC232558190B0052877B290AA1D436A((String_t*)L_58, (String_t*)_stringLiteralF9EE582B77C320A1F6A3DF72205857C4248BAC79, /*hidden argument*/NULL);
			if (L_59)
			{
				goto IL_04fb;
			}
		}

IL_027e:
		{
			goto IL_071b;
		}

IL_0283:
		{
			String_t* L_60 = V_2;
			bool L_61;
			L_61 = String_op_Equality_m50B3548E4AC232558190B0052877B290AA1D436A((String_t*)L_60, (String_t*)_stringLiteral53D3413057D7E52F44470A335C590748745352B1, /*hidden argument*/NULL);
			if (L_61)
			{
				goto IL_050c;
			}
		}

IL_0293:
		{
			goto IL_071b;
		}

IL_0298:
		{
			String_t* L_62 = V_2;
			bool L_63;
			L_63 = String_op_Equality_m50B3548E4AC232558190B0052877B290AA1D436A((String_t*)L_62, (String_t*)_stringLiteralC959D767B7F0BD38D9DA8A64A4750C3A0972E2A0, /*hidden argument*/NULL);
			if (L_63)
			{
				goto IL_0522;
			}
		}

IL_02a8:
		{
			goto IL_071b;
		}

IL_02ad:
		{
			String_t* L_64 = V_2;
			bool L_65;
			L_65 = String_op_Equality_m50B3548E4AC232558190B0052877B290AA1D436A((String_t*)L_64, (String_t*)_stringLiteral75C9716749EA210206E3467390B7A11F3F33DDFA, /*hidden argument*/NULL);
			if (L_65)
			{
				goto IL_0533;
			}
		}

IL_02bd:
		{
			goto IL_071b;
		}

IL_02c2:
		{
			String_t* L_66 = V_2;
			bool L_67;
			L_67 = String_op_Equality_m50B3548E4AC232558190B0052877B290AA1D436A((String_t*)L_66, (String_t*)_stringLiteral7606720A7AEF5939309A8E4FCB8274252FA3D7BF, /*hidden argument*/NULL);
			if (L_67)
			{
				goto IL_0544;
			}
		}

IL_02d2:
		{
			goto IL_071b;
		}

IL_02d7:
		{
			String_t* L_68 = V_2;
			bool L_69;
			L_69 = String_op_Equality_m50B3548E4AC232558190B0052877B290AA1D436A((String_t*)L_68, (String_t*)_stringLiteral71C5F9C3E2F3C81C5BBC7FD313F6938654E61138, /*hidden argument*/NULL);
			if (L_69)
			{
				goto IL_055a;
			}
		}

IL_02e7:
		{
			goto IL_071b;
		}

IL_02ec:
		{
			String_t* L_70 = V_2;
			bool L_71;
			L_71 = String_op_Equality_m50B3548E4AC232558190B0052877B290AA1D436A((String_t*)L_70, (String_t*)_stringLiteral3F1522C8DB7943F2AE3AA1563D3AC25D9C8B93D1, /*hidden argument*/NULL);
			if (L_71)
			{
				goto IL_0570;
			}
		}

IL_02fc:
		{
			goto IL_071b;
		}

IL_0301:
		{
			String_t* L_72 = V_2;
			bool L_73;
			L_73 = String_op_Equality_m50B3548E4AC232558190B0052877B290AA1D436A((String_t*)L_72, (String_t*)_stringLiteralF23E83744C9D6FC70D71B723AAED8006D6780BCB, /*hidden argument*/NULL);
			if (L_73)
			{
				goto IL_0586;
			}
		}

IL_0311:
		{
			goto IL_071b;
		}

IL_0316:
		{
			String_t* L_74 = V_2;
			bool L_75;
			L_75 = String_op_Equality_m50B3548E4AC232558190B0052877B290AA1D436A((String_t*)L_74, (String_t*)_stringLiteralB49A1DF483856544CEC6018E8C944DB6E16A8D57, /*hidden argument*/NULL);
			if (L_75)
			{
				goto IL_059c;
			}
		}

IL_0326:
		{
			goto IL_071b;
		}

IL_032b:
		{
			String_t* L_76 = V_2;
			bool L_77;
			L_77 = String_op_Equality_m50B3548E4AC232558190B0052877B290AA1D436A((String_t*)L_76, (String_t*)_stringLiteral3A04F86957625CB28FA670EECF997E6BAD45BBE7, /*hidden argument*/NULL);
			if (L_77)
			{
				goto IL_05b2;
			}
		}

IL_033b:
		{
			goto IL_071b;
		}

IL_0340:
		{
			String_t* L_78 = V_2;
			bool L_79;
			L_79 = String_op_Equality_m50B3548E4AC232558190B0052877B290AA1D436A((String_t*)L_78, (String_t*)_stringLiteral7A4A6E2A7090298F814A9D44C89F8634249BEF07, /*hidden argument*/NULL);
			if (L_79)
			{
				goto IL_05c8;
			}
		}

IL_0350:
		{
			goto IL_071b;
		}

IL_0355:
		{
			String_t* L_80 = V_2;
			bool L_81;
			L_81 = String_op_Equality_m50B3548E4AC232558190B0052877B290AA1D436A((String_t*)L_80, (String_t*)_stringLiteralF3FA58C10BBB9830102605E24AF89DC619908DFA, /*hidden argument*/NULL);
			if (L_81)
			{
				goto IL_05d9;
			}
		}

IL_0365:
		{
			goto IL_071b;
		}

IL_036a:
		{
			String_t* L_82 = V_2;
			bool L_83;
			L_83 = String_op_Equality_m50B3548E4AC232558190B0052877B290AA1D436A((String_t*)L_82, (String_t*)_stringLiteralBA9362732D25B1644B7D8DEC5DF6F036A4A66DE5, /*hidden argument*/NULL);
			if (L_83)
			{
				goto IL_05ee;
			}
		}

IL_037a:
		{
			goto IL_071b;
		}

IL_037f:
		{
			String_t* L_84 = V_2;
			bool L_85;
			L_85 = String_op_Equality_m50B3548E4AC232558190B0052877B290AA1D436A((String_t*)L_84, (String_t*)_stringLiteral95F57476C0AA778364404E7CCCD7499BF1BF3757, /*hidden argument*/NULL);
			if (L_85)
			{
				goto IL_05fe;
			}
		}

IL_038f:
		{
			goto IL_071b;
		}

IL_0394:
		{
			String_t* L_86 = V_2;
			bool L_87;
			L_87 = String_op_Equality_m50B3548E4AC232558190B0052877B290AA1D436A((String_t*)L_86, (String_t*)_stringLiteral9AB5ADF8A8A53110245466F7C226F7935F5FE95F, /*hidden argument*/NULL);
			if (L_87)
			{
				goto IL_060f;
			}
		}

IL_03a4:
		{
			goto IL_071b;
		}

IL_03a9:
		{
			String_t* L_88 = V_2;
			bool L_89;
			L_89 = String_op_Equality_m50B3548E4AC232558190B0052877B290AA1D436A((String_t*)L_88, (String_t*)_stringLiteralEA8FBF382D8AC9EDB8FFC14A350641B987F5C631, /*hidden argument*/NULL);
			if (L_89)
			{
				goto IL_0620;
			}
		}

IL_03b9:
		{
			goto IL_071b;
		}

IL_03be:
		{
			String_t* L_90 = V_2;
			bool L_91;
			L_91 = String_op_Equality_m50B3548E4AC232558190B0052877B290AA1D436A((String_t*)L_90, (String_t*)_stringLiteral201D9D00BB60DC2318D21CF9902290EFE255D5DC, /*hidden argument*/NULL);
			if (L_91)
			{
				goto IL_0631;
			}
		}

IL_03ce:
		{
			goto IL_071b;
		}

IL_03d3:
		{
			String_t* L_92 = V_2;
			bool L_93;
			L_93 = String_op_Equality_m50B3548E4AC232558190B0052877B290AA1D436A((String_t*)L_92, (String_t*)_stringLiteral65B008F04EC40A696263EF679CF274BD10999A5D, /*hidden argument*/NULL);
			if (L_93)
			{
				goto IL_0642;
			}
		}

IL_03e3:
		{
			goto IL_071b;
		}

IL_03e8:
		{
			String_t* L_94 = V_2;
			bool L_95;
			L_95 = String_op_Equality_m50B3548E4AC232558190B0052877B290AA1D436A((String_t*)L_94, (String_t*)_stringLiteralF38CFAE6A91D072D4453C29FF44D81D459A582F1, /*hidden argument*/NULL);
			if (L_95)
			{
				goto IL_0653;
			}
		}

IL_03f8:
		{
			goto IL_071b;
		}

IL_03fd:
		{
			String_t* L_96 = V_2;
			bool L_97;
			L_97 = String_op_Equality_m50B3548E4AC232558190B0052877B290AA1D436A((String_t*)L_96, (String_t*)_stringLiteral3BC15E3C2F40466B2DC85C4776499817B8306CBB, /*hidden argument*/NULL);
			if (L_97)
			{
				goto IL_0669;
			}
		}

IL_040d:
		{
			goto IL_071b;
		}

IL_0412:
		{
			String_t* L_98 = V_2;
			bool L_99;
			L_99 = String_op_Equality_m50B3548E4AC232558190B0052877B290AA1D436A((String_t*)L_98, (String_t*)_stringLiteralCE18B047107AA23D1AA9B2ED32D316148E02655F, /*hidden argument*/NULL);
			if (L_99)
			{
				goto IL_067f;
			}
		}

IL_0422:
		{
			goto IL_071b;
		}

IL_0427:
		{
			String_t* L_100 = V_2;
			bool L_101;
			L_101 = String_op_Equality_m50B3548E4AC232558190B0052877B290AA1D436A((String_t*)L_100, (String_t*)_stringLiteral83AC9669A9053DD15B9F2E82D2CE2369EFE131BA, /*hidden argument*/NULL);
			if (L_101)
			{
				goto IL_0695;
			}
		}

IL_0437:
		{
			goto IL_071b;
		}

IL_043c:
		{
			String_t* L_102 = V_2;
			bool L_103;
			L_103 = String_op_Equality_m50B3548E4AC232558190B0052877B290AA1D436A((String_t*)L_102, (String_t*)_stringLiteralECAEEB225F8689DE45DEB4FA21CE34E1960B1B50, /*hidden argument*/NULL);
			if (L_103)
			{
				goto IL_06a3;
			}
		}

IL_044c:
		{
			goto IL_071b;
		}

IL_0451:
		{
			String_t* L_104 = V_2;
			bool L_105;
			L_105 = String_op_Equality_m50B3548E4AC232558190B0052877B290AA1D436A((String_t*)L_104, (String_t*)_stringLiteral2EE7B6B0E37E14930BBA497867139BFD0617CE04, /*hidden argument*/NULL);
			if (L_105)
			{
				goto IL_06b1;
			}
		}

IL_0461:
		{
			goto IL_071b;
		}

IL_0466:
		{
			String_t* L_106 = V_2;
			bool L_107;
			L_107 = String_op_Equality_m50B3548E4AC232558190B0052877B290AA1D436A((String_t*)L_106, (String_t*)_stringLiteralF2AF7DD0BFF41B7B35037F018DAABE7DCF357A7B, /*hidden argument*/NULL);
			if (L_107)
			{
				goto IL_06bf;
			}
		}

IL_0476:
		{
			goto IL_071b;
		}

IL_047b:
		{
			String_t* L_108 = V_2;
			bool L_109;
			L_109 = String_op_Equality_m50B3548E4AC232558190B0052877B290AA1D436A((String_t*)L_108, (String_t*)_stringLiteral7FF61C3A55BCA1287974D8740F945250B3F0F084, /*hidden argument*/NULL);
			if (L_109)
			{
				goto IL_06d2;
			}
		}

IL_048b:
		{
			goto IL_071b;
		}

IL_0490:
		{
			String_t* L_110 = V_2;
			bool L_111;
			L_111 = String_op_Equality_m50B3548E4AC232558190B0052877B290AA1D436A((String_t*)L_110, (String_t*)_stringLiteral2ADFC3FFF7C52D554F0435A348A5345C9FCD7FF8, /*hidden argument*/NULL);
			if (L_111)
			{
				goto IL_06e5;
			}
		}

IL_04a0:
		{
			goto IL_071b;
		}

IL_04a5:
		{
			String_t* L_112 = V_2;
			bool L_113;
			L_113 = String_op_Equality_m50B3548E4AC232558190B0052877B290AA1D436A((String_t*)L_112, (String_t*)_stringLiteral2E201D1972661439FD3C8523C55723E7E9BCC7DA, /*hidden argument*/NULL);
			if (L_113)
			{
				goto IL_06f7;
			}
		}

IL_04b5:
		{
			goto IL_071b;
		}

IL_04ba:
		{
			String_t* L_114 = V_2;
			bool L_115;
			L_115 = String_op_Equality_m50B3548E4AC232558190B0052877B290AA1D436A((String_t*)L_114, (String_t*)_stringLiteralCD44AC57FFE6CAC7824F4CAA223F1BB8B4CB0D73, /*hidden argument*/NULL);
			if (L_115)
			{
				goto IL_0709;
			}
		}

IL_04ca:
		{
			goto IL_071b;
		}

IL_04cf:
		{
			// instance.width = reader.Read<System.Int32>(ES3Type_int.Instance);
			RenderTexture_t5FE7A5B47EF962A0E8D7BEBA05E9FC87D49A1849 * L_116 = V_0;
			ES3Reader_t2780AF8AA61DA2A817115CEF8612AC0E494D03C9 * L_117 = ___reader0;
			IL2CPP_RUNTIME_CLASS_INIT(ES3Type_int_tF64C15D40AD0CC7C15BCD1CEC3C5C6BF837BD167_il2cpp_TypeInfo_var);
			ES3Type_t8FBECB7AE75168648B9524E0C2A38DAD4555421D * L_118 = ((ES3Type_int_tF64C15D40AD0CC7C15BCD1CEC3C5C6BF837BD167_StaticFields*)il2cpp_codegen_static_fields_for(ES3Type_int_tF64C15D40AD0CC7C15BCD1CEC3C5C6BF837BD167_il2cpp_TypeInfo_var))->get_Instance_12();
			NullCheck((ES3Reader_t2780AF8AA61DA2A817115CEF8612AC0E494D03C9 *)L_117);
			int32_t L_119;
			L_119 = GenericVirtFuncInvoker1< int32_t, ES3Type_t8FBECB7AE75168648B9524E0C2A38DAD4555421D * >::Invoke(ES3Reader_Read_TisInt32_tFDE5F8CD43D10453F6A2E0C77FE48C6CC7009046_m2B74AA6627F5B1D21171D56C42F71DE5A7C1B4A6_RuntimeMethod_var, (ES3Reader_t2780AF8AA61DA2A817115CEF8612AC0E494D03C9 *)L_117, (ES3Type_t8FBECB7AE75168648B9524E0C2A38DAD4555421D *)L_118);
			NullCheck((Texture_t9FE0218A1EEDF266E8C85879FE123265CACC95AE *)L_116);
			VirtActionInvoker1< int32_t >::Invoke(6 /* System.Void UnityEngine.Texture::set_width(System.Int32) */, (Texture_t9FE0218A1EEDF266E8C85879FE123265CACC95AE *)L_116, (int32_t)L_119);
			// break;
			goto IL_0721;
		}

IL_04e5:
		{
			// instance.height = reader.Read<System.Int32>(ES3Type_int.Instance);
			RenderTexture_t5FE7A5B47EF962A0E8D7BEBA05E9FC87D49A1849 * L_120 = V_0;
			ES3Reader_t2780AF8AA61DA2A817115CEF8612AC0E494D03C9 * L_121 = ___reader0;
			IL2CPP_RUNTIME_CLASS_INIT(ES3Type_int_tF64C15D40AD0CC7C15BCD1CEC3C5C6BF837BD167_il2cpp_TypeInfo_var);
			ES3Type_t8FBECB7AE75168648B9524E0C2A38DAD4555421D * L_122 = ((ES3Type_int_tF64C15D40AD0CC7C15BCD1CEC3C5C6BF837BD167_StaticFields*)il2cpp_codegen_static_fields_for(ES3Type_int_tF64C15D40AD0CC7C15BCD1CEC3C5C6BF837BD167_il2cpp_TypeInfo_var))->get_Instance_12();
			NullCheck((ES3Reader_t2780AF8AA61DA2A817115CEF8612AC0E494D03C9 *)L_121);
			int32_t L_123;
			L_123 = GenericVirtFuncInvoker1< int32_t, ES3Type_t8FBECB7AE75168648B9524E0C2A38DAD4555421D * >::Invoke(ES3Reader_Read_TisInt32_tFDE5F8CD43D10453F6A2E0C77FE48C6CC7009046_m2B74AA6627F5B1D21171D56C42F71DE5A7C1B4A6_RuntimeMethod_var, (ES3Reader_t2780AF8AA61DA2A817115CEF8612AC0E494D03C9 *)L_121, (ES3Type_t8FBECB7AE75168648B9524E0C2A38DAD4555421D *)L_122);
			NullCheck((Texture_t9FE0218A1EEDF266E8C85879FE123265CACC95AE *)L_120);
			VirtActionInvoker1< int32_t >::Invoke(8 /* System.Void UnityEngine.Texture::set_height(System.Int32) */, (Texture_t9FE0218A1EEDF266E8C85879FE123265CACC95AE *)L_120, (int32_t)L_123);
			// break;
			goto IL_0721;
		}

IL_04fb:
		{
			// instance.dimension = reader.Read<UnityEngine.Rendering.TextureDimension>();
			RenderTexture_t5FE7A5B47EF962A0E8D7BEBA05E9FC87D49A1849 * L_124 = V_0;
			ES3Reader_t2780AF8AA61DA2A817115CEF8612AC0E494D03C9 * L_125 = ___reader0;
			NullCheck((ES3Reader_t2780AF8AA61DA2A817115CEF8612AC0E494D03C9 *)L_125);
			int32_t L_126;
			L_126 = GenericVirtFuncInvoker0< int32_t >::Invoke(ES3Reader_Read_TisTextureDimension_tADCCB7C1D30E4D1182651BA9094B4DE61B63EACC_m19EAA3B93D10636C17A62A3D8437349223CFD988_RuntimeMethod_var, (ES3Reader_t2780AF8AA61DA2A817115CEF8612AC0E494D03C9 *)L_125);
			NullCheck((Texture_t9FE0218A1EEDF266E8C85879FE123265CACC95AE *)L_124);
			VirtActionInvoker1< int32_t >::Invoke(10 /* System.Void UnityEngine.Texture::set_dimension(UnityEngine.Rendering.TextureDimension) */, (Texture_t9FE0218A1EEDF266E8C85879FE123265CACC95AE *)L_124, (int32_t)L_126);
			// break;
			goto IL_0721;
		}

IL_050c:
		{
			// instance.useMipMap = reader.Read<System.Boolean>(ES3Type_bool.Instance);
			RenderTexture_t5FE7A5B47EF962A0E8D7BEBA05E9FC87D49A1849 * L_127 = V_0;
			ES3Reader_t2780AF8AA61DA2A817115CEF8612AC0E494D03C9 * L_128 = ___reader0;
			IL2CPP_RUNTIME_CLASS_INIT(ES3Type_bool_t8F309F7B9CC735FF1DEE68081B6E3CAB367745F4_il2cpp_TypeInfo_var);
			ES3Type_t8FBECB7AE75168648B9524E0C2A38DAD4555421D * L_129 = ((ES3Type_bool_t8F309F7B9CC735FF1DEE68081B6E3CAB367745F4_StaticFields*)il2cpp_codegen_static_fields_for(ES3Type_bool_t8F309F7B9CC735FF1DEE68081B6E3CAB367745F4_il2cpp_TypeInfo_var))->get_Instance_12();
			NullCheck((ES3Reader_t2780AF8AA61DA2A817115CEF8612AC0E494D03C9 *)L_128);
			bool L_130;
			L_130 = GenericVirtFuncInvoker1< bool, ES3Type_t8FBECB7AE75168648B9524E0C2A38DAD4555421D * >::Invoke(ES3Reader_Read_TisBoolean_t07D1E3F34E4813023D64F584DFF7B34C9D922F37_mC6D1B158268FF9B97822FF9F5B37FB1723FEDA22_RuntimeMethod_var, (ES3Reader_t2780AF8AA61DA2A817115CEF8612AC0E494D03C9 *)L_128, (ES3Type_t8FBECB7AE75168648B9524E0C2A38DAD4555421D *)L_129);
			NullCheck((RenderTexture_t5FE7A5B47EF962A0E8D7BEBA05E9FC87D49A1849 *)L_127);
			RenderTexture_set_useMipMap_mAE1437C3D7D21441891A612C3B812EE9C379F126((RenderTexture_t5FE7A5B47EF962A0E8D7BEBA05E9FC87D49A1849 *)L_127, (bool)L_130, /*hidden argument*/NULL);
			// break;
			goto IL_0721;
		}

IL_0522:
		{
			// instance.memorylessMode = reader.Read<UnityEngine.RenderTextureMemoryless>();
			RenderTexture_t5FE7A5B47EF962A0E8D7BEBA05E9FC87D49A1849 * L_131 = V_0;
			ES3Reader_t2780AF8AA61DA2A817115CEF8612AC0E494D03C9 * L_132 = ___reader0;
			NullCheck((ES3Reader_t2780AF8AA61DA2A817115CEF8612AC0E494D03C9 *)L_132);
			int32_t L_133;
			L_133 = GenericVirtFuncInvoker0< int32_t >::Invoke(ES3Reader_Read_TisRenderTextureMemoryless_t37547D68C2186D2650440F719302CDA4A3BB7F67_m3A980BA15AADBBB8393C3BC88CE17EEDDC89B027_RuntimeMethod_var, (ES3Reader_t2780AF8AA61DA2A817115CEF8612AC0E494D03C9 *)L_132);
			NullCheck((RenderTexture_t5FE7A5B47EF962A0E8D7BEBA05E9FC87D49A1849 *)L_131);
			RenderTexture_set_memorylessMode_mE48B2A38E9374A7BB419383B438790347474EFC1((RenderTexture_t5FE7A5B47EF962A0E8D7BEBA05E9FC87D49A1849 *)L_131, (int32_t)L_133, /*hidden argument*/NULL);
			// break;
			goto IL_0721;
		}

IL_0533:
		{
			// instance.format = reader.Read<UnityEngine.RenderTextureFormat>();
			RenderTexture_t5FE7A5B47EF962A0E8D7BEBA05E9FC87D49A1849 * L_134 = V_0;
			ES3Reader_t2780AF8AA61DA2A817115CEF8612AC0E494D03C9 * L_135 = ___reader0;
			NullCheck((ES3Reader_t2780AF8AA61DA2A817115CEF8612AC0E494D03C9 *)L_135);
			int32_t L_136;
			L_136 = GenericVirtFuncInvoker0< int32_t >::Invoke(ES3Reader_Read_TisRenderTextureFormat_t8371287102ED67772EF78229CF4AB9D38C2CD626_mE6358E03407F5C15B58B292C79D4770DE3FAC95A_RuntimeMethod_var, (ES3Reader_t2780AF8AA61DA2A817115CEF8612AC0E494D03C9 *)L_135);
			NullCheck((RenderTexture_t5FE7A5B47EF962A0E8D7BEBA05E9FC87D49A1849 *)L_134);
			RenderTexture_set_format_m32D42DC33DB151B69E81D0D93F36DE7450CFC23D((RenderTexture_t5FE7A5B47EF962A0E8D7BEBA05E9FC87D49A1849 *)L_134, (int32_t)L_136, /*hidden argument*/NULL);
			// break;
			goto IL_0721;
		}

IL_0544:
		{
			// instance.autoGenerateMips = reader.Read<System.Boolean>(ES3Type_bool.Instance);
			RenderTexture_t5FE7A5B47EF962A0E8D7BEBA05E9FC87D49A1849 * L_137 = V_0;
			ES3Reader_t2780AF8AA61DA2A817115CEF8612AC0E494D03C9 * L_138 = ___reader0;
			IL2CPP_RUNTIME_CLASS_INIT(ES3Type_bool_t8F309F7B9CC735FF1DEE68081B6E3CAB367745F4_il2cpp_TypeInfo_var);
			ES3Type_t8FBECB7AE75168648B9524E0C2A38DAD4555421D * L_139 = ((ES3Type_bool_t8F309F7B9CC735FF1DEE68081B6E3CAB367745F4_StaticFields*)il2cpp_codegen_static_fields_for(ES3Type_bool_t8F309F7B9CC735FF1DEE68081B6E3CAB367745F4_il2cpp_TypeInfo_var))->get_Instance_12();
			NullCheck((ES3Reader_t2780AF8AA61DA2A817115CEF8612AC0E494D03C9 *)L_138);
			bool L_140;
			L_140 = GenericVirtFuncInvoker1< bool, ES3Type_t8FBECB7AE75168648B9524E0C2A38DAD4555421D * >::Invoke(ES3Reader_Read_TisBoolean_t07D1E3F34E4813023D64F584DFF7B34C9D922F37_mC6D1B158268FF9B97822FF9F5B37FB1723FEDA22_RuntimeMethod_var, (ES3Reader_t2780AF8AA61DA2A817115CEF8612AC0E494D03C9 *)L_138, (ES3Type_t8FBECB7AE75168648B9524E0C2A38DAD4555421D *)L_139);
			NullCheck((RenderTexture_t5FE7A5B47EF962A0E8D7BEBA05E9FC87D49A1849 *)L_137);
			RenderTexture_set_autoGenerateMips_m0F02D60D4C4D4790B354451732F2DA6BA12D2E63((RenderTexture_t5FE7A5B47EF962A0E8D7BEBA05E9FC87D49A1849 *)L_137, (bool)L_140, /*hidden argument*/NULL);
			// break;
			goto IL_0721;
		}

IL_055a:
		{
			// instance.volumeDepth = reader.Read<System.Int32>(ES3Type_int.Instance);
			RenderTexture_t5FE7A5B47EF962A0E8D7BEBA05E9FC87D49A1849 * L_141 = V_0;
			ES3Reader_t2780AF8AA61DA2A817115CEF8612AC0E494D03C9 * L_142 = ___reader0;
			IL2CPP_RUNTIME_CLASS_INIT(ES3Type_int_tF64C15D40AD0CC7C15BCD1CEC3C5C6BF837BD167_il2cpp_TypeInfo_var);
			ES3Type_t8FBECB7AE75168648B9524E0C2A38DAD4555421D * L_143 = ((ES3Type_int_tF64C15D40AD0CC7C15BCD1CEC3C5C6BF837BD167_StaticFields*)il2cpp_codegen_static_fields_for(ES3Type_int_tF64C15D40AD0CC7C15BCD1CEC3C5C6BF837BD167_il2cpp_TypeInfo_var))->get_Instance_12();
			NullCheck((ES3Reader_t2780AF8AA61DA2A817115CEF8612AC0E494D03C9 *)L_142);
			int32_t L_144;
			L_144 = GenericVirtFuncInvoker1< int32_t, ES3Type_t8FBECB7AE75168648B9524E0C2A38DAD4555421D * >::Invoke(ES3Reader_Read_TisInt32_tFDE5F8CD43D10453F6A2E0C77FE48C6CC7009046_m2B74AA6627F5B1D21171D56C42F71DE5A7C1B4A6_RuntimeMethod_var, (ES3Reader_t2780AF8AA61DA2A817115CEF8612AC0E494D03C9 *)L_142, (ES3Type_t8FBECB7AE75168648B9524E0C2A38DAD4555421D *)L_143);
			NullCheck((RenderTexture_t5FE7A5B47EF962A0E8D7BEBA05E9FC87D49A1849 *)L_141);
			RenderTexture_set_volumeDepth_m01D7BD50386DDAE777CE3CB9B60FDD7DE798AC93((RenderTexture_t5FE7A5B47EF962A0E8D7BEBA05E9FC87D49A1849 *)L_141, (int32_t)L_144, /*hidden argument*/NULL);
			// break;
			goto IL_0721;
		}

IL_0570:
		{
			// instance.antiAliasing = reader.Read<System.Int32>(ES3Type_int.Instance);
			RenderTexture_t5FE7A5B47EF962A0E8D7BEBA05E9FC87D49A1849 * L_145 = V_0;
			ES3Reader_t2780AF8AA61DA2A817115CEF8612AC0E494D03C9 * L_146 = ___reader0;
			IL2CPP_RUNTIME_CLASS_INIT(ES3Type_int_tF64C15D40AD0CC7C15BCD1CEC3C5C6BF837BD167_il2cpp_TypeInfo_var);
			ES3Type_t8FBECB7AE75168648B9524E0C2A38DAD4555421D * L_147 = ((ES3Type_int_tF64C15D40AD0CC7C15BCD1CEC3C5C6BF837BD167_StaticFields*)il2cpp_codegen_static_fields_for(ES3Type_int_tF64C15D40AD0CC7C15BCD1CEC3C5C6BF837BD167_il2cpp_TypeInfo_var))->get_Instance_12();
			NullCheck((ES3Reader_t2780AF8AA61DA2A817115CEF8612AC0E494D03C9 *)L_146);
			int32_t L_148;
			L_148 = GenericVirtFuncInvoker1< int32_t, ES3Type_t8FBECB7AE75168648B9524E0C2A38DAD4555421D * >::Invoke(ES3Reader_Read_TisInt32_tFDE5F8CD43D10453F6A2E0C77FE48C6CC7009046_m2B74AA6627F5B1D21171D56C42F71DE5A7C1B4A6_RuntimeMethod_var, (ES3Reader_t2780AF8AA61DA2A817115CEF8612AC0E494D03C9 *)L_146, (ES3Type_t8FBECB7AE75168648B9524E0C2A38DAD4555421D *)L_147);
			NullCheck((RenderTexture_t5FE7A5B47EF962A0E8D7BEBA05E9FC87D49A1849 *)L_145);
			RenderTexture_set_antiAliasing_m4D37900B7E23CA0D33F109DB8DF21265DB70C38F((RenderTexture_t5FE7A5B47EF962A0E8D7BEBA05E9FC87D49A1849 *)L_145, (int32_t)L_148, /*hidden argument*/NULL);
			// break;
			goto IL_0721;
		}

IL_0586:
		{
			// instance.enableRandomWrite = reader.Read<System.Boolean>(ES3Type_bool.Instance);
			RenderTexture_t5FE7A5B47EF962A0E8D7BEBA05E9FC87D49A1849 * L_149 = V_0;
			ES3Reader_t2780AF8AA61DA2A817115CEF8612AC0E494D03C9 * L_150 = ___reader0;
			IL2CPP_RUNTIME_CLASS_INIT(ES3Type_bool_t8F309F7B9CC735FF1DEE68081B6E3CAB367745F4_il2cpp_TypeInfo_var);
			ES3Type_t8FBECB7AE75168648B9524E0C2A38DAD4555421D * L_151 = ((ES3Type_bool_t8F309F7B9CC735FF1DEE68081B6E3CAB367745F4_StaticFields*)il2cpp_codegen_static_fields_for(ES3Type_bool_t8F309F7B9CC735FF1DEE68081B6E3CAB367745F4_il2cpp_TypeInfo_var))->get_Instance_12();
			NullCheck((ES3Reader_t2780AF8AA61DA2A817115CEF8612AC0E494D03C9 *)L_150);
			bool L_152;
			L_152 = GenericVirtFuncInvoker1< bool, ES3Type_t8FBECB7AE75168648B9524E0C2A38DAD4555421D * >::Invoke(ES3Reader_Read_TisBoolean_t07D1E3F34E4813023D64F584DFF7B34C9D922F37_mC6D1B158268FF9B97822FF9F5B37FB1723FEDA22_RuntimeMethod_var, (ES3Reader_t2780AF8AA61DA2A817115CEF8612AC0E494D03C9 *)L_150, (ES3Type_t8FBECB7AE75168648B9524E0C2A38DAD4555421D *)L_151);
			NullCheck((RenderTexture_t5FE7A5B47EF962A0E8D7BEBA05E9FC87D49A1849 *)L_149);
			RenderTexture_set_enableRandomWrite_m024F49DB3CA3B02FA0EEBB3EACB37E6228CAA183((RenderTexture_t5FE7A5B47EF962A0E8D7BEBA05E9FC87D49A1849 *)L_149, (bool)L_152, /*hidden argument*/NULL);
			// break;
			goto IL_0721;
		}

IL_059c:
		{
			// instance.isPowerOfTwo = reader.Read<System.Boolean>(ES3Type_bool.Instance);
			RenderTexture_t5FE7A5B47EF962A0E8D7BEBA05E9FC87D49A1849 * L_153 = V_0;
			ES3Reader_t2780AF8AA61DA2A817115CEF8612AC0E494D03C9 * L_154 = ___reader0;
			IL2CPP_RUNTIME_CLASS_INIT(ES3Type_bool_t8F309F7B9CC735FF1DEE68081B6E3CAB367745F4_il2cpp_TypeInfo_var);
			ES3Type_t8FBECB7AE75168648B9524E0C2A38DAD4555421D * L_155 = ((ES3Type_bool_t8F309F7B9CC735FF1DEE68081B6E3CAB367745F4_StaticFields*)il2cpp_codegen_static_fields_for(ES3Type_bool_t8F309F7B9CC735FF1DEE68081B6E3CAB367745F4_il2cpp_TypeInfo_var))->get_Instance_12();
			NullCheck((ES3Reader_t2780AF8AA61DA2A817115CEF8612AC0E494D03C9 *)L_154);
			bool L_156;
			L_156 = GenericVirtFuncInvoker1< bool, ES3Type_t8FBECB7AE75168648B9524E0C2A38DAD4555421D * >::Invoke(ES3Reader_Read_TisBoolean_t07D1E3F34E4813023D64F584DFF7B34C9D922F37_mC6D1B158268FF9B97822FF9F5B37FB1723FEDA22_RuntimeMethod_var, (ES3Reader_t2780AF8AA61DA2A817115CEF8612AC0E494D03C9 *)L_154, (ES3Type_t8FBECB7AE75168648B9524E0C2A38DAD4555421D *)L_155);
			NullCheck((RenderTexture_t5FE7A5B47EF962A0E8D7BEBA05E9FC87D49A1849 *)L_153);
			RenderTexture_set_isPowerOfTwo_mA6D34F610DF27C40422DF5815892B45C656F1317((RenderTexture_t5FE7A5B47EF962A0E8D7BEBA05E9FC87D49A1849 *)L_153, (bool)L_156, /*hidden argument*/NULL);
			// break;
			goto IL_0721;
		}

IL_05b2:
		{
			// instance.depth = reader.Read<System.Int32>(ES3Type_int.Instance);
			RenderTexture_t5FE7A5B47EF962A0E8D7BEBA05E9FC87D49A1849 * L_157 = V_0;
			ES3Reader_t2780AF8AA61DA2A817115CEF8612AC0E494D03C9 * L_158 = ___reader0;
			IL2CPP_RUNTIME_CLASS_INIT(ES3Type_int_tF64C15D40AD0CC7C15BCD1CEC3C5C6BF837BD167_il2cpp_TypeInfo_var);
			ES3Type_t8FBECB7AE75168648B9524E0C2A38DAD4555421D * L_159 = ((ES3Type_int_tF64C15D40AD0CC7C15BCD1CEC3C5C6BF837BD167_StaticFields*)il2cpp_codegen_static_fields_for(ES3Type_int_tF64C15D40AD0CC7C15BCD1CEC3C5C6BF837BD167_il2cpp_TypeInfo_var))->get_Instance_12();
			NullCheck((ES3Reader_t2780AF8AA61DA2A817115CEF8612AC0E494D03C9 *)L_158);
			int32_t L_160;
			L_160 = GenericVirtFuncInvoker1< int32_t, ES3Type_t8FBECB7AE75168648B9524E0C2A38DAD4555421D * >::Invoke(ES3Reader_Read_TisInt32_tFDE5F8CD43D10453F6A2E0C77FE48C6CC7009046_m2B74AA6627F5B1D21171D56C42F71DE5A7C1B4A6_RuntimeMethod_var, (ES3Reader_t2780AF8AA61DA2A817115CEF8612AC0E494D03C9 *)L_158, (ES3Type_t8FBECB7AE75168648B9524E0C2A38DAD4555421D *)L_159);
			NullCheck((RenderTexture_t5FE7A5B47EF962A0E8D7BEBA05E9FC87D49A1849 *)L_157);
			RenderTexture_set_depth_mA57CEFEDDB45D0429FAC9532A631839F523944A3((RenderTexture_t5FE7A5B47EF962A0E8D7BEBA05E9FC87D49A1849 *)L_157, (int32_t)L_160, /*hidden argument*/NULL);
			// break;
			goto IL_0721;
		}

IL_05c8:
		{
			// instance.descriptor = reader.Read<UnityEngine.RenderTextureDescriptor>();
			RenderTexture_t5FE7A5B47EF962A0E8D7BEBA05E9FC87D49A1849 * L_161 = V_0;
			ES3Reader_t2780AF8AA61DA2A817115CEF8612AC0E494D03C9 * L_162 = ___reader0;
			NullCheck((ES3Reader_t2780AF8AA61DA2A817115CEF8612AC0E494D03C9 *)L_162);
			RenderTextureDescriptor_t67FF189E1F35AEB5D6C43A2D7103F3A8A8CA0B47  L_163;
			L_163 = GenericVirtFuncInvoker0< RenderTextureDescriptor_t67FF189E1F35AEB5D6C43A2D7103F3A8A8CA0B47  >::Invoke(ES3Reader_Read_TisRenderTextureDescriptor_t67FF189E1F35AEB5D6C43A2D7103F3A8A8CA0B47_m427886ADAAF96C7BA9BD423544128494F96D69E7_RuntimeMethod_var, (ES3Reader_t2780AF8AA61DA2A817115CEF8612AC0E494D03C9 *)L_162);
			NullCheck((RenderTexture_t5FE7A5B47EF962A0E8D7BEBA05E9FC87D49A1849 *)L_161);
			RenderTexture_set_descriptor_m3C8E31AE4644B23719A12345771D1B85EB6E5881((RenderTexture_t5FE7A5B47EF962A0E8D7BEBA05E9FC87D49A1849 *)L_161, (RenderTextureDescriptor_t67FF189E1F35AEB5D6C43A2D7103F3A8A8CA0B47 )L_163, /*hidden argument*/NULL);
			// break;
			goto IL_0721;
		}

IL_05d9:
		{
			// UnityEngine.RenderTexture.masterTextureLimit = reader.Read<System.Int32>(ES3Type_int.Instance);
			ES3Reader_t2780AF8AA61DA2A817115CEF8612AC0E494D03C9 * L_164 = ___reader0;
			IL2CPP_RUNTIME_CLASS_INIT(ES3Type_int_tF64C15D40AD0CC7C15BCD1CEC3C5C6BF837BD167_il2cpp_TypeInfo_var);
			ES3Type_t8FBECB7AE75168648B9524E0C2A38DAD4555421D * L_165 = ((ES3Type_int_tF64C15D40AD0CC7C15BCD1CEC3C5C6BF837BD167_StaticFields*)il2cpp_codegen_static_fields_for(ES3Type_int_tF64C15D40AD0CC7C15BCD1CEC3C5C6BF837BD167_il2cpp_TypeInfo_var))->get_Instance_12();
			NullCheck((ES3Reader_t2780AF8AA61DA2A817115CEF8612AC0E494D03C9 *)L_164);
			int32_t L_166;
			L_166 = GenericVirtFuncInvoker1< int32_t, ES3Type_t8FBECB7AE75168648B9524E0C2A38DAD4555421D * >::Invoke(ES3Reader_Read_TisInt32_tFDE5F8CD43D10453F6A2E0C77FE48C6CC7009046_m2B74AA6627F5B1D21171D56C42F71DE5A7C1B4A6_RuntimeMethod_var, (ES3Reader_t2780AF8AA61DA2A817115CEF8612AC0E494D03C9 *)L_164, (ES3Type_t8FBECB7AE75168648B9524E0C2A38DAD4555421D *)L_165);
			IL2CPP_RUNTIME_CLASS_INIT(Texture_t9FE0218A1EEDF266E8C85879FE123265CACC95AE_il2cpp_TypeInfo_var);
			Texture_set_masterTextureLimit_m94A531A20A54A86AF7B88A56F72709CE556B7DFF((int32_t)L_166, /*hidden argument*/NULL);
			// break;
			goto IL_0721;
		}

IL_05ee:
		{
			// UnityEngine.RenderTexture.anisotropicFiltering = reader.Read<UnityEngine.AnisotropicFiltering>();
			ES3Reader_t2780AF8AA61DA2A817115CEF8612AC0E494D03C9 * L_167 = ___reader0;
			NullCheck((ES3Reader_t2780AF8AA61DA2A817115CEF8612AC0E494D03C9 *)L_167);
			int32_t L_168;
			L_168 = GenericVirtFuncInvoker0< int32_t >::Invoke(ES3Reader_Read_TisAnisotropicFiltering_tAC3D1448B262D5869946CD1CDD2C8DAE3A7A537B_mAF1268AAC3E461D6E0604A19FAF0325873B6EC8A_RuntimeMethod_var, (ES3Reader_t2780AF8AA61DA2A817115CEF8612AC0E494D03C9 *)L_167);
			IL2CPP_RUNTIME_CLASS_INIT(Texture_t9FE0218A1EEDF266E8C85879FE123265CACC95AE_il2cpp_TypeInfo_var);
			Texture_set_anisotropicFiltering_mE2B639BF2681A8A0516C1C343C7E265ED60EAF16((int32_t)L_168, /*hidden argument*/NULL);
			// break;
			goto IL_0721;
		}

IL_05fe:
		{
			// instance.wrapMode = reader.Read<UnityEngine.TextureWrapMode>();
			RenderTexture_t5FE7A5B47EF962A0E8D7BEBA05E9FC87D49A1849 * L_169 = V_0;
			ES3Reader_t2780AF8AA61DA2A817115CEF8612AC0E494D03C9 * L_170 = ___reader0;
			NullCheck((ES3Reader_t2780AF8AA61DA2A817115CEF8612AC0E494D03C9 *)L_170);
			int32_t L_171;
			L_171 = GenericVirtFuncInvoker0< int32_t >::Invoke(ES3Reader_Read_TisTextureWrapMode_t86DDA8206E4AA784A1218D0DE3C5F6826D7549EB_m7926E449CD0B8BD56E5BF145DD0CCFE1C567F107_RuntimeMethod_var, (ES3Reader_t2780AF8AA61DA2A817115CEF8612AC0E494D03C9 *)L_170);
			NullCheck((Texture_t9FE0218A1EEDF266E8C85879FE123265CACC95AE *)L_169);
			Texture_set_wrapMode_m1233D2DF48DC20996F8EE26E866D4BDD2AC8050D((Texture_t9FE0218A1EEDF266E8C85879FE123265CACC95AE *)L_169, (int32_t)L_171, /*hidden argument*/NULL);
			// break;
			goto IL_0721;
		}

IL_060f:
		{
			// instance.wrapModeU = reader.Read<UnityEngine.TextureWrapMode>();
			RenderTexture_t5FE7A5B47EF962A0E8D7BEBA05E9FC87D49A1849 * L_172 = V_0;
			ES3Reader_t2780AF8AA61DA2A817115CEF8612AC0E494D03C9 * L_173 = ___reader0;
			NullCheck((ES3Reader_t2780AF8AA61DA2A817115CEF8612AC0E494D03C9 *)L_173);
			int32_t L_174;
			L_174 = GenericVirtFuncInvoker0< int32_t >::Invoke(ES3Reader_Read_TisTextureWrapMode_t86DDA8206E4AA784A1218D0DE3C5F6826D7549EB_m7926E449CD0B8BD56E5BF145DD0CCFE1C567F107_RuntimeMethod_var, (ES3Reader_t2780AF8AA61DA2A817115CEF8612AC0E494D03C9 *)L_173);
			NullCheck((Texture_t9FE0218A1EEDF266E8C85879FE123265CACC95AE *)L_172);
			Texture_set_wrapModeU_mBD3CBD6880E9E767B91ED9E1B14C725A52D7A66E((Texture_t9FE0218A1EEDF266E8C85879FE123265CACC95AE *)L_172, (int32_t)L_174, /*hidden argument*/NULL);
			// break;
			goto IL_0721;
		}

IL_0620:
		{
			// instance.wrapModeV = reader.Read<UnityEngine.TextureWrapMode>();
			RenderTexture_t5FE7A5B47EF962A0E8D7BEBA05E9FC87D49A1849 * L_175 = V_0;
			ES3Reader_t2780AF8AA61DA2A817115CEF8612AC0E494D03C9 * L_176 = ___reader0;
			NullCheck((ES3Reader_t2780AF8AA61DA2A817115CEF8612AC0E494D03C9 *)L_176);
			int32_t L_177;
			L_177 = GenericVirtFuncInvoker0< int32_t >::Invoke(ES3Reader_Read_TisTextureWrapMode_t86DDA8206E4AA784A1218D0DE3C5F6826D7549EB_m7926E449CD0B8BD56E5BF145DD0CCFE1C567F107_RuntimeMethod_var, (ES3Reader_t2780AF8AA61DA2A817115CEF8612AC0E494D03C9 *)L_176);
			NullCheck((Texture_t9FE0218A1EEDF266E8C85879FE123265CACC95AE *)L_175);
			Texture_set_wrapModeV_mCD51C11B4C90D7508113C744EDC09D04059403E5((Texture_t9FE0218A1EEDF266E8C85879FE123265CACC95AE *)L_175, (int32_t)L_177, /*hidden argument*/NULL);
			// break;
			goto IL_0721;
		}

IL_0631:
		{
			// instance.wrapModeW = reader.Read<UnityEngine.TextureWrapMode>();
			RenderTexture_t5FE7A5B47EF962A0E8D7BEBA05E9FC87D49A1849 * L_178 = V_0;
			ES3Reader_t2780AF8AA61DA2A817115CEF8612AC0E494D03C9 * L_179 = ___reader0;
			NullCheck((ES3Reader_t2780AF8AA61DA2A817115CEF8612AC0E494D03C9 *)L_179);
			int32_t L_180;
			L_180 = GenericVirtFuncInvoker0< int32_t >::Invoke(ES3Reader_Read_TisTextureWrapMode_t86DDA8206E4AA784A1218D0DE3C5F6826D7549EB_m7926E449CD0B8BD56E5BF145DD0CCFE1C567F107_RuntimeMethod_var, (ES3Reader_t2780AF8AA61DA2A817115CEF8612AC0E494D03C9 *)L_179);
			NullCheck((Texture_t9FE0218A1EEDF266E8C85879FE123265CACC95AE *)L_178);
			Texture_set_wrapModeW_m72C3239EA12A51D5031BD2A66C5E7B178EE9F65B((Texture_t9FE0218A1EEDF266E8C85879FE123265CACC95AE *)L_178, (int32_t)L_180, /*hidden argument*/NULL);
			// break;
			goto IL_0721;
		}

IL_0642:
		{
			// instance.filterMode = reader.Read<UnityEngine.FilterMode>();
			RenderTexture_t5FE7A5B47EF962A0E8D7BEBA05E9FC87D49A1849 * L_181 = V_0;
			ES3Reader_t2780AF8AA61DA2A817115CEF8612AC0E494D03C9 * L_182 = ___reader0;
			NullCheck((ES3Reader_t2780AF8AA61DA2A817115CEF8612AC0E494D03C9 *)L_182);
			int32_t L_183;
			L_183 = GenericVirtFuncInvoker0< int32_t >::Invoke(ES3Reader_Read_TisFilterMode_tE90A08FD96A142C761463D65E524BCDBFEEE3D19_m9819C2A442797B4060B0D9A80CFA96CFD6102839_RuntimeMethod_var, (ES3Reader_t2780AF8AA61DA2A817115CEF8612AC0E494D03C9 *)L_182);
			NullCheck((Texture_t9FE0218A1EEDF266E8C85879FE123265CACC95AE *)L_181);
			Texture_set_filterMode_m045141DB0FEFE496885D45F5F23B15BC0E77C8D0((Texture_t9FE0218A1EEDF266E8C85879FE123265CACC95AE *)L_181, (int32_t)L_183, /*hidden argument*/NULL);
			// break;
			goto IL_0721;
		}

IL_0653:
		{
			// instance.anisoLevel = reader.Read<System.Int32>(ES3Type_int.Instance);
			RenderTexture_t5FE7A5B47EF962A0E8D7BEBA05E9FC87D49A1849 * L_184 = V_0;
			ES3Reader_t2780AF8AA61DA2A817115CEF8612AC0E494D03C9 * L_185 = ___reader0;
			IL2CPP_RUNTIME_CLASS_INIT(ES3Type_int_tF64C15D40AD0CC7C15BCD1CEC3C5C6BF837BD167_il2cpp_TypeInfo_var);
			ES3Type_t8FBECB7AE75168648B9524E0C2A38DAD4555421D * L_186 = ((ES3Type_int_tF64C15D40AD0CC7C15BCD1CEC3C5C6BF837BD167_StaticFields*)il2cpp_codegen_static_fields_for(ES3Type_int_tF64C15D40AD0CC7C15BCD1CEC3C5C6BF837BD167_il2cpp_TypeInfo_var))->get_Instance_12();
			NullCheck((ES3Reader_t2780AF8AA61DA2A817115CEF8612AC0E494D03C9 *)L_185);
			int32_t L_187;
			L_187 = GenericVirtFuncInvoker1< int32_t, ES3Type_t8FBECB7AE75168648B9524E0C2A38DAD4555421D * >::Invoke(ES3Reader_Read_TisInt32_tFDE5F8CD43D10453F6A2E0C77FE48C6CC7009046_m2B74AA6627F5B1D21171D56C42F71DE5A7C1B4A6_RuntimeMethod_var, (ES3Reader_t2780AF8AA61DA2A817115CEF8612AC0E494D03C9 *)L_185, (ES3Type_t8FBECB7AE75168648B9524E0C2A38DAD4555421D *)L_186);
			NullCheck((Texture_t9FE0218A1EEDF266E8C85879FE123265CACC95AE *)L_184);
			Texture_set_anisoLevel_mE51360F6CD0562FD6355F8C0509B70A454CB33BE((Texture_t9FE0218A1EEDF266E8C85879FE123265CACC95AE *)L_184, (int32_t)L_187, /*hidden argument*/NULL);
			// break;
			goto IL_0721;
		}

IL_0669:
		{
			// instance.mipMapBias = reader.Read<System.Single>(ES3Type_float.Instance);
			RenderTexture_t5FE7A5B47EF962A0E8D7BEBA05E9FC87D49A1849 * L_188 = V_0;
			ES3Reader_t2780AF8AA61DA2A817115CEF8612AC0E494D03C9 * L_189 = ___reader0;
			IL2CPP_RUNTIME_CLASS_INIT(ES3Type_float_tF86B773C86731BD9AD79448B860BBB178FE77644_il2cpp_TypeInfo_var);
			ES3Type_t8FBECB7AE75168648B9524E0C2A38DAD4555421D * L_190 = ((ES3Type_float_tF86B773C86731BD9AD79448B860BBB178FE77644_StaticFields*)il2cpp_codegen_static_fields_for(ES3Type_float_tF86B773C86731BD9AD79448B860BBB178FE77644_il2cpp_TypeInfo_var))->get_Instance_12();
			NullCheck((ES3Reader_t2780AF8AA61DA2A817115CEF8612AC0E494D03C9 *)L_189);
			float L_191;
			L_191 = GenericVirtFuncInvoker1< float, ES3Type_t8FBECB7AE75168648B9524E0C2A38DAD4555421D * >::Invoke(ES3Reader_Read_TisSingle_tE07797BA3C98D4CA9B5A19413C19A76688AB899E_m4A0416374498BDA042B8EB21E49B72326D6CE5F4_RuntimeMethod_var, (ES3Reader_t2780AF8AA61DA2A817115CEF8612AC0E494D03C9 *)L_189, (ES3Type_t8FBECB7AE75168648B9524E0C2A38DAD4555421D *)L_190);
			NullCheck((Texture_t9FE0218A1EEDF266E8C85879FE123265CACC95AE *)L_188);
			Texture_set_mipMapBias_m5057ADA9DBA8E8E30EC15EA5BABFA0734CE2821C((Texture_t9FE0218A1EEDF266E8C85879FE123265CACC95AE *)L_188, (float)L_191, /*hidden argument*/NULL);
			// break;
			goto IL_0721;
		}

IL_067f:
		{
			// instance.name = reader.Read<System.String>(ES3Type_string.Instance);
			RenderTexture_t5FE7A5B47EF962A0E8D7BEBA05E9FC87D49A1849 * L_192 = V_0;
			ES3Reader_t2780AF8AA61DA2A817115CEF8612AC0E494D03C9 * L_193 = ___reader0;
			IL2CPP_RUNTIME_CLASS_INIT(ES3Type_string_tC47BFBE3CC816F3C70B51558C68F0C6470C5EFE5_il2cpp_TypeInfo_var);
			ES3Type_t8FBECB7AE75168648B9524E0C2A38DAD4555421D * L_194 = ((ES3Type_string_tC47BFBE3CC816F3C70B51558C68F0C6470C5EFE5_StaticFields*)il2cpp_codegen_static_fields_for(ES3Type_string_tC47BFBE3CC816F3C70B51558C68F0C6470C5EFE5_il2cpp_TypeInfo_var))->get_Instance_12();
			NullCheck((ES3Reader_t2780AF8AA61DA2A817115CEF8612AC0E494D03C9 *)L_193);
			String_t* L_195;
			L_195 = GenericVirtFuncInvoker1< String_t*, ES3Type_t8FBECB7AE75168648B9524E0C2A38DAD4555421D * >::Invoke(ES3Reader_Read_TisString_t_m883861F3B58239392073ABF39876826EEB87DF9C_RuntimeMethod_var, (ES3Reader_t2780AF8AA61DA2A817115CEF8612AC0E494D03C9 *)L_193, (ES3Type_t8FBECB7AE75168648B9524E0C2A38DAD4555421D *)L_194);
			NullCheck((Object_tF2F3778131EFF286AF62B7B013A170F95A91571A *)L_192);
			Object_set_name_m87C4006618ADB325ABE5439DF159E10DD8DD0781((Object_tF2F3778131EFF286AF62B7B013A170F95A91571A *)L_192, (String_t*)L_195, /*hidden argument*/NULL);
			// break;
			goto IL_0721;
		}

IL_0695:
		{
			// instance.vrUsage = reader.Read<UnityEngine.VRTextureUsage>();
			RenderTexture_t5FE7A5B47EF962A0E8D7BEBA05E9FC87D49A1849 * L_196 = V_0;
			ES3Reader_t2780AF8AA61DA2A817115CEF8612AC0E494D03C9 * L_197 = ___reader0;
			NullCheck((ES3Reader_t2780AF8AA61DA2A817115CEF8612AC0E494D03C9 *)L_197);
			int32_t L_198;
			L_198 = GenericVirtFuncInvoker0< int32_t >::Invoke(ES3Reader_Read_TisVRTextureUsage_t3C09DF3DD90B5620BC0AB6F8078DFEF4E607F645_m7DE3966E4815BB13132866CB005EEE5B90FF51C2_RuntimeMethod_var, (ES3Reader_t2780AF8AA61DA2A817115CEF8612AC0E494D03C9 *)L_197);
			NullCheck((RenderTexture_t5FE7A5B47EF962A0E8D7BEBA05E9FC87D49A1849 *)L_196);
			RenderTexture_set_vrUsage_m9AF7F60442E3B933FDF274D801EA074D1A5ECB71((RenderTexture_t5FE7A5B47EF962A0E8D7BEBA05E9FC87D49A1849 *)L_196, (int32_t)L_198, /*hidden argument*/NULL);
			// break;
			goto IL_0721;
		}

IL_06a3:
		{
			// instance.graphicsFormat = reader.Read<UnityEngine.Experimental.Rendering.GraphicsFormat>();
			RenderTexture_t5FE7A5B47EF962A0E8D7BEBA05E9FC87D49A1849 * L_199 = V_0;
			ES3Reader_t2780AF8AA61DA2A817115CEF8612AC0E494D03C9 * L_200 = ___reader0;
			NullCheck((ES3Reader_t2780AF8AA61DA2A817115CEF8612AC0E494D03C9 *)L_200);
			int32_t L_201;
			L_201 = GenericVirtFuncInvoker0< int32_t >::Invoke(ES3Reader_Read_TisGraphicsFormat_t07A3C024BC77B843C53A369D6FC02ABD27D2AB1D_mCBD36004B10F649C93215AB4717F6F0D7118BF7D_RuntimeMethod_var, (ES3Reader_t2780AF8AA61DA2A817115CEF8612AC0E494D03C9 *)L_200);
			NullCheck((RenderTexture_t5FE7A5B47EF962A0E8D7BEBA05E9FC87D49A1849 *)L_199);
			RenderTexture_set_graphicsFormat_mA378AAD8BD876EE96637FF0A80A2AFEA4D852FAB((RenderTexture_t5FE7A5B47EF962A0E8D7BEBA05E9FC87D49A1849 *)L_199, (int32_t)L_201, /*hidden argument*/NULL);
			// break;
			goto IL_0721;
		}

IL_06b1:
		{
			// instance.stencilFormat = reader.Read<UnityEngine.Experimental.Rendering.GraphicsFormat>();
			RenderTexture_t5FE7A5B47EF962A0E8D7BEBA05E9FC87D49A1849 * L_202 = V_0;
			ES3Reader_t2780AF8AA61DA2A817115CEF8612AC0E494D03C9 * L_203 = ___reader0;
			NullCheck((ES3Reader_t2780AF8AA61DA2A817115CEF8612AC0E494D03C9 *)L_203);
			int32_t L_204;
			L_204 = GenericVirtFuncInvoker0< int32_t >::Invoke(ES3Reader_Read_TisGraphicsFormat_t07A3C024BC77B843C53A369D6FC02ABD27D2AB1D_mCBD36004B10F649C93215AB4717F6F0D7118BF7D_RuntimeMethod_var, (ES3Reader_t2780AF8AA61DA2A817115CEF8612AC0E494D03C9 *)L_203);
			NullCheck((RenderTexture_t5FE7A5B47EF962A0E8D7BEBA05E9FC87D49A1849 *)L_202);
			RenderTexture_set_stencilFormat_m7C6E21FCDB7E786D403CFC9775105B050EFF19C7((RenderTexture_t5FE7A5B47EF962A0E8D7BEBA05E9FC87D49A1849 *)L_202, (int32_t)L_204, /*hidden argument*/NULL);
			// break;
			goto IL_0721;
		}

IL_06bf:
		{
			// instance.bindTextureMS = reader.Read<System.Boolean>(ES3Type_bool.Instance);
			RenderTexture_t5FE7A5B47EF962A0E8D7BEBA05E9FC87D49A1849 * L_205 = V_0;
			ES3Reader_t2780AF8AA61DA2A817115CEF8612AC0E494D03C9 * L_206 = ___reader0;
			IL2CPP_RUNTIME_CLASS_INIT(ES3Type_bool_t8F309F7B9CC735FF1DEE68081B6E3CAB367745F4_il2cpp_TypeInfo_var);
			ES3Type_t8FBECB7AE75168648B9524E0C2A38DAD4555421D * L_207 = ((ES3Type_bool_t8F309F7B9CC735FF1DEE68081B6E3CAB367745F4_StaticFields*)il2cpp_codegen_static_fields_for(ES3Type_bool_t8F309F7B9CC735FF1DEE68081B6E3CAB367745F4_il2cpp_TypeInfo_var))->get_Instance_12();
			NullCheck((ES3Reader_t2780AF8AA61DA2A817115CEF8612AC0E494D03C9 *)L_206);
			bool L_208;
			L_208 = GenericVirtFuncInvoker1< bool, ES3Type_t8FBECB7AE75168648B9524E0C2A38DAD4555421D * >::Invoke(ES3Reader_Read_TisBoolean_t07D1E3F34E4813023D64F584DFF7B34C9D922F37_mC6D1B158268FF9B97822FF9F5B37FB1723FEDA22_RuntimeMethod_var, (ES3Reader_t2780AF8AA61DA2A817115CEF8612AC0E494D03C9 *)L_206, (ES3Type_t8FBECB7AE75168648B9524E0C2A38DAD4555421D *)L_207);
			NullCheck((RenderTexture_t5FE7A5B47EF962A0E8D7BEBA05E9FC87D49A1849 *)L_205);
			RenderTexture_set_bindTextureMS_m6C26F6AB2DE8FE81BFCA60C936AA08EA7F1A7177((RenderTexture_t5FE7A5B47EF962A0E8D7BEBA05E9FC87D49A1849 *)L_205, (bool)L_208, /*hidden argument*/NULL);
			// break;
			goto IL_0721;
		}

IL_06d2:
		{
			// instance.useDynamicScale = reader.Read<System.Boolean>(ES3Type_bool.Instance);
			RenderTexture_t5FE7A5B47EF962A0E8D7BEBA05E9FC87D49A1849 * L_209 = V_0;
			ES3Reader_t2780AF8AA61DA2A817115CEF8612AC0E494D03C9 * L_210 = ___reader0;
			IL2CPP_RUNTIME_CLASS_INIT(ES3Type_bool_t8F309F7B9CC735FF1DEE68081B6E3CAB367745F4_il2cpp_TypeInfo_var);
			ES3Type_t8FBECB7AE75168648B9524E0C2A38DAD4555421D * L_211 = ((ES3Type_bool_t8F309F7B9CC735FF1DEE68081B6E3CAB367745F4_StaticFields*)il2cpp_codegen_static_fields_for(ES3Type_bool_t8F309F7B9CC735FF1DEE68081B6E3CAB367745F4_il2cpp_TypeInfo_var))->get_Instance_12();
			NullCheck((ES3Reader_t2780AF8AA61DA2A817115CEF8612AC0E494D03C9 *)L_210);
			bool L_212;
			L_212 = GenericVirtFuncInvoker1< bool, ES3Type_t8FBECB7AE75168648B9524E0C2A38DAD4555421D * >::Invoke(ES3Reader_Read_TisBoolean_t07D1E3F34E4813023D64F584DFF7B34C9D922F37_mC6D1B158268FF9B97822FF9F5B37FB1723FEDA22_RuntimeMethod_var, (ES3Reader_t2780AF8AA61DA2A817115CEF8612AC0E494D03C9 *)L_210, (ES3Type_t8FBECB7AE75168648B9524E0C2A38DAD4555421D *)L_211);
			NullCheck((RenderTexture_t5FE7A5B47EF962A0E8D7BEBA05E9FC87D49A1849 *)L_209);
			RenderTexture_set_useDynamicScale_m8F96571C7EDBEFAB9278E04A3F3EB67067A5AE29((RenderTexture_t5FE7A5B47EF962A0E8D7BEBA05E9FC87D49A1849 *)L_209, (bool)L_212, /*hidden argument*/NULL);
			// break;
			goto IL_0721;
		}

IL_06e5:
		{
			// UnityEngine.RenderTexture.streamingTextureForceLoadAll = reader.Read<System.Boolean>(ES3Type_bool.Instance);
			ES3Reader_t2780AF8AA61DA2A817115CEF8612AC0E494D03C9 * L_213 = ___reader0;
			IL2CPP_RUNTIME_CLASS_INIT(ES3Type_bool_t8F309F7B9CC735FF1DEE68081B6E3CAB367745F4_il2cpp_TypeInfo_var);
			ES3Type_t8FBECB7AE75168648B9524E0C2A38DAD4555421D * L_214 = ((ES3Type_bool_t8F309F7B9CC735FF1DEE68081B6E3CAB367745F4_StaticFields*)il2cpp_codegen_static_fields_for(ES3Type_bool_t8F309F7B9CC735FF1DEE68081B6E3CAB367745F4_il2cpp_TypeInfo_var))->get_Instance_12();
			NullCheck((ES3Reader_t2780AF8AA61DA2A817115CEF8612AC0E494D03C9 *)L_213);
			bool L_215;
			L_215 = GenericVirtFuncInvoker1< bool, ES3Type_t8FBECB7AE75168648B9524E0C2A38DAD4555421D * >::Invoke(ES3Reader_Read_TisBoolean_t07D1E3F34E4813023D64F584DFF7B34C9D922F37_mC6D1B158268FF9B97822FF9F5B37FB1723FEDA22_RuntimeMethod_var, (ES3Reader_t2780AF8AA61DA2A817115CEF8612AC0E494D03C9 *)L_213, (ES3Type_t8FBECB7AE75168648B9524E0C2A38DAD4555421D *)L_214);
			IL2CPP_RUNTIME_CLASS_INIT(Texture_t9FE0218A1EEDF266E8C85879FE123265CACC95AE_il2cpp_TypeInfo_var);
			Texture_set_streamingTextureForceLoadAll_m325117C0830BB9B4316CF41CEE045759FC52B7A3((bool)L_215, /*hidden argument*/NULL);
			// break;
			goto IL_0721;
		}

IL_06f7:
		{
			// UnityEngine.RenderTexture.streamingTextureDiscardUnusedMips = reader.Read<System.Boolean>(ES3Type_bool.Instance);
			ES3Reader_t2780AF8AA61DA2A817115CEF8612AC0E494D03C9 * L_216 = ___reader0;
			IL2CPP_RUNTIME_CLASS_INIT(ES3Type_bool_t8F309F7B9CC735FF1DEE68081B6E3CAB367745F4_il2cpp_TypeInfo_var);
			ES3Type_t8FBECB7AE75168648B9524E0C2A38DAD4555421D * L_217 = ((ES3Type_bool_t8F309F7B9CC735FF1DEE68081B6E3CAB367745F4_StaticFields*)il2cpp_codegen_static_fields_for(ES3Type_bool_t8F309F7B9CC735FF1DEE68081B6E3CAB367745F4_il2cpp_TypeInfo_var))->get_Instance_12();
			NullCheck((ES3Reader_t2780AF8AA61DA2A817115CEF8612AC0E494D03C9 *)L_216);
			bool L_218;
			L_218 = GenericVirtFuncInvoker1< bool, ES3Type_t8FBECB7AE75168648B9524E0C2A38DAD4555421D * >::Invoke(ES3Reader_Read_TisBoolean_t07D1E3F34E4813023D64F584DFF7B34C9D922F37_mC6D1B158268FF9B97822FF9F5B37FB1723FEDA22_RuntimeMethod_var, (ES3Reader_t2780AF8AA61DA2A817115CEF8612AC0E494D03C9 *)L_216, (ES3Type_t8FBECB7AE75168648B9524E0C2A38DAD4555421D *)L_217);
			IL2CPP_RUNTIME_CLASS_INIT(Texture_t9FE0218A1EEDF266E8C85879FE123265CACC95AE_il2cpp_TypeInfo_var);
			Texture_set_streamingTextureDiscardUnusedMips_mE184CE016A8E0319B437D34E0DB61962CE17F5DC((bool)L_218, /*hidden argument*/NULL);
			// break;
			goto IL_0721;
		}

IL_0709:
		{
			// UnityEngine.RenderTexture.allowThreadedTextureCreation = reader.Read<System.Boolean>(ES3Type_bool.Instance);
			ES3Reader_t2780AF8AA61DA2A817115CEF8612AC0E494D03C9 * L_219 = ___reader0;
			IL2CPP_RUNTIME_CLASS_INIT(ES3Type_bool_t8F309F7B9CC735FF1DEE68081B6E3CAB367745F4_il2cpp_TypeInfo_var);
			ES3Type_t8FBECB7AE75168648B9524E0C2A38DAD4555421D * L_220 = ((ES3Type_bool_t8F309F7B9CC735FF1DEE68081B6E3CAB367745F4_StaticFields*)il2cpp_codegen_static_fields_for(ES3Type_bool_t8F309F7B9CC735FF1DEE68081B6E3CAB367745F4_il2cpp_TypeInfo_var))->get_Instance_12();
			NullCheck((ES3Reader_t2780AF8AA61DA2A817115CEF8612AC0E494D03C9 *)L_219);
			bool L_221;
			L_221 = GenericVirtFuncInvoker1< bool, ES3Type_t8FBECB7AE75168648B9524E0C2A38DAD4555421D * >::Invoke(ES3Reader_Read_TisBoolean_t07D1E3F34E4813023D64F584DFF7B34C9D922F37_mC6D1B158268FF9B97822FF9F5B37FB1723FEDA22_RuntimeMethod_var, (ES3Reader_t2780AF8AA61DA2A817115CEF8612AC0E494D03C9 *)L_219, (ES3Type_t8FBECB7AE75168648B9524E0C2A38DAD4555421D *)L_220);
			IL2CPP_RUNTIME_CLASS_INIT(Texture_t9FE0218A1EEDF266E8C85879FE123265CACC95AE_il2cpp_TypeInfo_var);
			Texture_set_allowThreadedTextureCreation_m84D29394912B9CE876023963426256CBEB15A52E((bool)L_221, /*hidden argument*/NULL);
			// break;
			goto IL_0721;
		}

IL_071b:
		{
			// reader.Skip();
			ES3Reader_t2780AF8AA61DA2A817115CEF8612AC0E494D03C9 * L_222 = ___reader0;
			NullCheck((ES3Reader_t2780AF8AA61DA2A817115CEF8612AC0E494D03C9 *)L_222);
			VirtActionInvoker0::Invoke(41 /* System.Void ES3Reader::Skip() */, (ES3Reader_t2780AF8AA61DA2A817115CEF8612AC0E494D03C9 *)L_222);
		}

IL_0721:
		{
			// foreach (string propertyName in reader.Properties)
			RuntimeObject* L_223 = V_1;
			NullCheck((RuntimeObject*)L_223);
			bool L_224;
			L_224 = InterfaceFuncInvoker0< bool >::Invoke(0 /* System.Boolean System.Collections.IEnumerator::MoveNext() */, IEnumerator_t5956F3AFB7ECF1117E3BC5890E7FC7B7F7A04105_il2cpp_TypeInfo_var, (RuntimeObject*)L_223);
			if (L_224)
			{
				goto IL_0018;
			}
		}

IL_072c:
		{
			IL2CPP_LEAVE(0x742, FINALLY_072e);
		}
	} // end try (depth: 1)
	catch(Il2CppExceptionWrapper& e)
	{
		__last_unhandled_exception = (Exception_t *)e.ex;
		goto FINALLY_072e;
	}

FINALLY_072e:
	{ // begin finally (depth: 1)
		{
			RuntimeObject* L_225 = V_1;
			V_4 = (RuntimeObject*)((RuntimeObject*)IsInst((RuntimeObject*)L_225, IDisposable_t099785737FC6A1E3699919A94109383715A8D807_il2cpp_TypeInfo_var));
			RuntimeObject* L_226 = V_4;
			if (!L_226)
			{
				goto IL_0741;
			}
		}

IL_073a:
		{
			RuntimeObject* L_227 = V_4;
			NullCheck((RuntimeObject*)L_227);
			InterfaceActionInvoker0::Invoke(0 /* System.Void System.IDisposable::Dispose() */, IDisposable_t099785737FC6A1E3699919A94109383715A8D807_il2cpp_TypeInfo_var, (RuntimeObject*)L_227);
		}

IL_0741:
		{
			IL2CPP_END_FINALLY(1838)
		}
	} // end finally (depth: 1)
	IL2CPP_CLEANUP(1838)
	{
		IL2CPP_RETHROW_IF_UNHANDLED(Exception_t *)
		IL2CPP_JUMP_TBL(0x742, IL_0742)
	}

IL_0742:
	{
		// }
		return;
	}
}
// System.Void ES3Types.ES3Type_RenderTexture::ReadObject<UnityEngine.ParticleSystem/RotationOverLifetimeModule>(ES3Reader,System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ES3Type_RenderTexture_ReadObject_TisRotationOverLifetimeModule_t78F62EF75295ADEF46B90235B7EB163AED016D2B_mF7C0C94620D0D4CF50BC0547DC869064C3D63765_gshared (ES3Type_RenderTexture_t7B14573C56809AFDC0A1C481D6B61E2146DEF194 * __this, ES3Reader_t2780AF8AA61DA2A817115CEF8612AC0E494D03C9 * ___reader0, RuntimeObject * ___obj1, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ES3Reader_Read_TisAnisotropicFiltering_tAC3D1448B262D5869946CD1CDD2C8DAE3A7A537B_mAF1268AAC3E461D6E0604A19FAF0325873B6EC8A_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ES3Reader_Read_TisBoolean_t07D1E3F34E4813023D64F584DFF7B34C9D922F37_mC6D1B158268FF9B97822FF9F5B37FB1723FEDA22_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ES3Reader_Read_TisFilterMode_tE90A08FD96A142C761463D65E524BCDBFEEE3D19_m9819C2A442797B4060B0D9A80CFA96CFD6102839_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ES3Reader_Read_TisGraphicsFormat_t07A3C024BC77B843C53A369D6FC02ABD27D2AB1D_mCBD36004B10F649C93215AB4717F6F0D7118BF7D_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ES3Reader_Read_TisInt32_tFDE5F8CD43D10453F6A2E0C77FE48C6CC7009046_m2B74AA6627F5B1D21171D56C42F71DE5A7C1B4A6_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ES3Reader_Read_TisRenderTextureDescriptor_t67FF189E1F35AEB5D6C43A2D7103F3A8A8CA0B47_m427886ADAAF96C7BA9BD423544128494F96D69E7_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ES3Reader_Read_TisRenderTextureFormat_t8371287102ED67772EF78229CF4AB9D38C2CD626_mE6358E03407F5C15B58B292C79D4770DE3FAC95A_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ES3Reader_Read_TisRenderTextureMemoryless_t37547D68C2186D2650440F719302CDA4A3BB7F67_m3A980BA15AADBBB8393C3BC88CE17EEDDC89B027_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ES3Reader_Read_TisSingle_tE07797BA3C98D4CA9B5A19413C19A76688AB899E_m4A0416374498BDA042B8EB21E49B72326D6CE5F4_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ES3Reader_Read_TisString_t_m883861F3B58239392073ABF39876826EEB87DF9C_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ES3Reader_Read_TisTextureDimension_tADCCB7C1D30E4D1182651BA9094B4DE61B63EACC_m19EAA3B93D10636C17A62A3D8437349223CFD988_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ES3Reader_Read_TisTextureWrapMode_t86DDA8206E4AA784A1218D0DE3C5F6826D7549EB_m7926E449CD0B8BD56E5BF145DD0CCFE1C567F107_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ES3Reader_Read_TisVRTextureUsage_t3C09DF3DD90B5620BC0AB6F8078DFEF4E607F645_m7DE3966E4815BB13132866CB005EEE5B90FF51C2_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ES3Type_bool_t8F309F7B9CC735FF1DEE68081B6E3CAB367745F4_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ES3Type_float_tF86B773C86731BD9AD79448B860BBB178FE77644_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ES3Type_int_tF64C15D40AD0CC7C15BCD1CEC3C5C6BF837BD167_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ES3Type_string_tC47BFBE3CC816F3C70B51558C68F0C6470C5EFE5_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IDisposable_t099785737FC6A1E3699919A94109383715A8D807_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IEnumerator_t5956F3AFB7ECF1117E3BC5890E7FC7B7F7A04105_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&RenderTexture_t5FE7A5B47EF962A0E8D7BEBA05E9FC87D49A1849_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&String_t_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Texture_t9FE0218A1EEDF266E8C85879FE123265CACC95AE_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral201D9D00BB60DC2318D21CF9902290EFE255D5DC);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral2ADFC3FFF7C52D554F0435A348A5345C9FCD7FF8);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral2E201D1972661439FD3C8523C55723E7E9BCC7DA);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral2EE7B6B0E37E14930BBA497867139BFD0617CE04);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral3A04F86957625CB28FA670EECF997E6BAD45BBE7);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral3BC15E3C2F40466B2DC85C4776499817B8306CBB);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral3F1522C8DB7943F2AE3AA1563D3AC25D9C8B93D1);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral53D3413057D7E52F44470A335C590748745352B1);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral647E0FB2B5E859CC4BD7C73623B82C8EFABA2563);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral65B008F04EC40A696263EF679CF274BD10999A5D);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral71C5F9C3E2F3C81C5BBC7FD313F6938654E61138);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral75C9716749EA210206E3467390B7A11F3F33DDFA);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral7606720A7AEF5939309A8E4FCB8274252FA3D7BF);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral7A4A6E2A7090298F814A9D44C89F8634249BEF07);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral7FF61C3A55BCA1287974D8740F945250B3F0F084);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral83AC9669A9053DD15B9F2E82D2CE2369EFE131BA);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral95F57476C0AA778364404E7CCCD7499BF1BF3757);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral9AB5ADF8A8A53110245466F7C226F7935F5FE95F);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralB49A1DF483856544CEC6018E8C944DB6E16A8D57);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralBA9362732D25B1644B7D8DEC5DF6F036A4A66DE5);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralC959D767B7F0BD38D9DA8A64A4750C3A0972E2A0);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralCD44AC57FFE6CAC7824F4CAA223F1BB8B4CB0D73);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralCE18B047107AA23D1AA9B2ED32D316148E02655F);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralEA8FBF382D8AC9EDB8FFC14A350641B987F5C631);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralEBF5FE0CBF3EEA67902EEA700B7216E3DB0D8E84);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralECAEEB225F8689DE45DEB4FA21CE34E1960B1B50);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralF23E83744C9D6FC70D71B723AAED8006D6780BCB);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralF2AF7DD0BFF41B7B35037F018DAABE7DCF357A7B);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralF38CFAE6A91D072D4453C29FF44D81D459A582F1);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralF3FA58C10BBB9830102605E24AF89DC619908DFA);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralF9EE582B77C320A1F6A3DF72205857C4248BAC79);
		s_Il2CppMethodInitialized = true;
	}
	RenderTexture_t5FE7A5B47EF962A0E8D7BEBA05E9FC87D49A1849 * V_0 = NULL;
	RuntimeObject* V_1 = NULL;
	String_t* V_2 = NULL;
	uint32_t V_3 = 0;
	RuntimeObject* V_4 = NULL;
	Exception_t * __last_unhandled_exception = 0;
	il2cpp::utils::ExceptionSupportStack<int32_t, 1> __leave_targets;
	{
		// var instance = (UnityEngine.RenderTexture)obj;
		RuntimeObject * L_0 = ___obj1;
		V_0 = (RenderTexture_t5FE7A5B47EF962A0E8D7BEBA05E9FC87D49A1849 *)((RenderTexture_t5FE7A5B47EF962A0E8D7BEBA05E9FC87D49A1849 *)Castclass((RuntimeObject*)L_0, RenderTexture_t5FE7A5B47EF962A0E8D7BEBA05E9FC87D49A1849_il2cpp_TypeInfo_var));
		// foreach (string propertyName in reader.Properties)
		ES3Reader_t2780AF8AA61DA2A817115CEF8612AC0E494D03C9 * L_1 = ___reader0;
		NullCheck((ES3Reader_t2780AF8AA61DA2A817115CEF8612AC0E494D03C9 *)L_1);
		ES3ReaderPropertyEnumerator_tFC854F4BE72BFA234682EB1909D92457534A979D * L_2;
		L_2 = VirtFuncInvoker0< ES3ReaderPropertyEnumerator_tFC854F4BE72BFA234682EB1909D92457534A979D * >::Invoke(39 /* ES3Reader/ES3ReaderPropertyEnumerator ES3Reader::get_Properties() */, (ES3Reader_t2780AF8AA61DA2A817115CEF8612AC0E494D03C9 *)L_1);
		NullCheck((ES3ReaderPropertyEnumerator_tFC854F4BE72BFA234682EB1909D92457534A979D *)L_2);
		RuntimeObject* L_3;
		L_3 = ES3ReaderPropertyEnumerator_GetEnumerator_m6C61168655E3736E7847E5CB1CD9BC6B48442FD4((ES3ReaderPropertyEnumerator_tFC854F4BE72BFA234682EB1909D92457534A979D *)L_2, /*hidden argument*/NULL);
		V_1 = (RuntimeObject*)L_3;
	}

IL_0013:
	try
	{ // begin try (depth: 1)
		{
			goto IL_0721;
		}

IL_0018:
		{
			// foreach (string propertyName in reader.Properties)
			RuntimeObject* L_4 = V_1;
			NullCheck((RuntimeObject*)L_4);
			RuntimeObject * L_5;
			L_5 = InterfaceFuncInvoker0< RuntimeObject * >::Invoke(1 /* System.Object System.Collections.IEnumerator::get_Current() */, IEnumerator_t5956F3AFB7ECF1117E3BC5890E7FC7B7F7A04105_il2cpp_TypeInfo_var, (RuntimeObject*)L_4);
			V_2 = (String_t*)((String_t*)Castclass((RuntimeObject*)L_5, String_t_il2cpp_TypeInfo_var));
			String_t* L_6 = V_2;
			if (!L_6)
			{
				goto IL_071b;
			}
		}

IL_002a:
		{
			String_t* L_7 = V_2;
			uint32_t L_8;
			L_8 = U3CPrivateImplementationDetailsU3E_ComputeStringHash_m3ADC1F612F9EE3DD518E6F0023A0DE0EE2B120A7((String_t*)L_7, /*hidden argument*/NULL);
			V_3 = (uint32_t)L_8;
			uint32_t L_9 = V_3;
			if ((!(((uint32_t)L_9) <= ((uint32_t)((int32_t)1508062721)))))
			{
				goto IL_0134;
			}
		}

IL_003c:
		{
			uint32_t L_10 = V_3;
			if ((!(((uint32_t)L_10) <= ((uint32_t)((int32_t)698754697)))))
			{
				goto IL_00b0;
			}
		}

IL_0044:
		{
			uint32_t L_11 = V_3;
			if ((!(((uint32_t)L_11) <= ((uint32_t)((int32_t)472844700)))))
			{
				goto IL_0072;
			}
		}

IL_004c:
		{
			uint32_t L_12 = V_3;
			if ((((int32_t)L_12) == ((int32_t)((int32_t)87590155))))
			{
				goto IL_043c;
			}
		}

IL_0057:
		{
			uint32_t L_13 = V_3;
			if ((((int32_t)L_13) == ((int32_t)((int32_t)301255720))))
			{
				goto IL_02d7;
			}
		}

IL_0062:
		{
			uint32_t L_14 = V_3;
			if ((((int32_t)L_14) == ((int32_t)((int32_t)472844700))))
			{
				goto IL_0283;
			}
		}

IL_006d:
		{
			goto IL_071b;
		}

IL_0072:
		{
			uint32_t L_15 = V_3;
			if ((!(((uint32_t)L_15) <= ((uint32_t)((int32_t)549791583)))))
			{
				goto IL_0095;
			}
		}

IL_007a:
		{
			uint32_t L_16 = V_3;
			if ((((int32_t)L_16) == ((int32_t)((int32_t)533013964))))
			{
				goto IL_03a9;
			}
		}

IL_0085:
		{
			uint32_t L_17 = V_3;
			if ((((int32_t)L_17) == ((int32_t)((int32_t)549791583))))
			{
				goto IL_03be;
			}
		}

IL_0090:
		{
			goto IL_071b;
		}

IL_0095:
		{
			uint32_t L_18 = V_3;
			if ((((int32_t)L_18) == ((int32_t)((int32_t)583346821))))
			{
				goto IL_0394;
			}
		}

IL_00a0:
		{
			uint32_t L_19 = V_3;
			if ((((int32_t)L_19) == ((int32_t)((int32_t)698754697))))
			{
				goto IL_02ec;
			}
		}

IL_00ab:
		{
			goto IL_071b;
		}

IL_00b0:
		{
			uint32_t L_20 = V_3;
			if ((!(((uint32_t)L_20) <= ((uint32_t)((int32_t)1235622516)))))
			{
				goto IL_00f6;
			}
		}

IL_00b8:
		{
			uint32_t L_21 = V_3;
			if ((!(((uint32_t)L_21) <= ((uint32_t)((int32_t)740612720)))))
			{
				goto IL_00db;
			}
		}

IL_00c0:
		{
			uint32_t L_22 = V_3;
			if ((((int32_t)L_22) == ((int32_t)((int32_t)705796271))))
			{
				goto IL_0316;
			}
		}

IL_00cb:
		{
			uint32_t L_23 = V_3;
			if ((((int32_t)L_23) == ((int32_t)((int32_t)740612720))))
			{
				goto IL_03d3;
			}
		}

IL_00d6:
		{
			goto IL_071b;
		}

IL_00db:
		{
			uint32_t L_24 = V_3;
			if ((((int32_t)L_24) == ((int32_t)((int32_t)1059843136))))
			{
				goto IL_0340;
			}
		}

IL_00e6:
		{
			uint32_t L_25 = V_3;
			if ((((int32_t)L_25) == ((int32_t)((int32_t)1235622516))))
			{
				goto IL_036a;
			}
		}

IL_00f1:
		{
			goto IL_071b;
		}

IL_00f6:
		{
			uint32_t L_26 = V_3;
			if ((!(((uint32_t)L_26) <= ((uint32_t)((int32_t)1320492961)))))
			{
				goto IL_0119;
			}
		}

IL_00fe:
		{
			uint32_t L_27 = V_3;
			if ((((int32_t)L_27) == ((int32_t)((int32_t)1310955452))))
			{
				goto IL_0490;
			}
		}

IL_0109:
		{
			uint32_t L_28 = V_3;
			if ((((int32_t)L_28) == ((int32_t)((int32_t)1320492961))))
			{
				goto IL_047b;
			}
		}

IL_0114:
		{
			goto IL_071b;
		}

IL_0119:
		{
			uint32_t L_29 = V_3;
			if ((((int32_t)L_29) == ((int32_t)((int32_t)1458352709))))
			{
				goto IL_0466;
			}
		}

IL_0124:
		{
			uint32_t L_30 = V_3;
			if ((((int32_t)L_30) == ((int32_t)((int32_t)1508062721))))
			{
				goto IL_04a5;
			}
		}

IL_012f:
		{
			goto IL_071b;
		}

IL_0134:
		{
			uint32_t L_31 = V_3;
			if ((!(((uint32_t)L_31) <= ((uint32_t)((int32_t)-1444332543)))))
			{
				goto IL_01c3;
			}
		}

IL_013f:
		{
			uint32_t L_32 = V_3;
			if ((!(((uint32_t)L_32) <= ((uint32_t)((int32_t)2129631044)))))
			{
				goto IL_0185;
			}
		}

IL_0147:
		{
			uint32_t L_33 = V_3;
			if ((!(((uint32_t)L_33) <= ((uint32_t)((int32_t)1640355324)))))
			{
				goto IL_016a;
			}
		}

IL_014f:
		{
			uint32_t L_34 = V_3;
			if ((((int32_t)L_34) == ((int32_t)((int32_t)1560124071))))
			{
				goto IL_04ba;
			}
		}

IL_015a:
		{
			uint32_t L_35 = V_3;
			if ((((int32_t)L_35) == ((int32_t)((int32_t)1640355324))))
			{
				goto IL_0451;
			}
		}

IL_0165:
		{
			goto IL_071b;
		}

IL_016a:
		{
			uint32_t L_36 = V_3;
			if ((((int32_t)L_36) == ((int32_t)((int32_t)1728801507))))
			{
				goto IL_026e;
			}
		}

IL_0175:
		{
			uint32_t L_37 = V_3;
			if ((((int32_t)L_37) == ((int32_t)((int32_t)2129631044))))
			{
				goto IL_03fd;
			}
		}

IL_0180:
		{
			goto IL_071b;
		}

IL_0185:
		{
			uint32_t L_38 = V_3;
			if ((!(((uint32_t)L_38) <= ((uint32_t)((int32_t)-1786286561)))))
			{
				goto IL_01a8;
			}
		}

IL_018d:
		{
			uint32_t L_39 = V_3;
			if ((((int32_t)L_39) == ((int32_t)((int32_t)-1925595674))))
			{
				goto IL_0412;
			}
		}

IL_0198:
		{
			uint32_t L_40 = V_3;
			if ((((int32_t)L_40) == ((int32_t)((int32_t)-1786286561))))
			{
				goto IL_0244;
			}
		}

IL_01a3:
		{
			goto IL_071b;
		}

IL_01a8:
		{
			uint32_t L_41 = V_3;
			if ((((int32_t)L_41) == ((int32_t)((int32_t)-1522491664))))
			{
				goto IL_0298;
			}
		}

IL_01b3:
		{
			uint32_t L_42 = V_3;
			if ((((int32_t)L_42) == ((int32_t)((int32_t)-1444332543))))
			{
				goto IL_0355;
			}
		}

IL_01be:
		{
			goto IL_071b;
		}

IL_01c3:
		{
			uint32_t L_43 = V_3;
			if ((!(((uint32_t)L_43) <= ((uint32_t)((int32_t)-558361902)))))
			{
				goto IL_0206;
			}
		}

IL_01cb:
		{
			uint32_t L_44 = V_3;
			if ((!(((uint32_t)L_44) <= ((uint32_t)((int32_t)-1180859054)))))
			{
				goto IL_01ee;
			}
		}

IL_01d3:
		{
			uint32_t L_45 = V_3;
			if ((((int32_t)L_45) == ((int32_t)((int32_t)-1335745110))))
			{
				goto IL_02c2;
			}
		}

IL_01de:
		{
			uint32_t L_46 = V_3;
			if ((((int32_t)L_46) == ((int32_t)((int32_t)-1180859054))))
			{
				goto IL_02ad;
			}
		}

IL_01e9:
		{
			goto IL_071b;
		}

IL_01ee:
		{
			uint32_t L_47 = V_3;
			if ((((int32_t)L_47) == ((int32_t)((int32_t)-708986046))))
			{
				goto IL_0259;
			}
		}

IL_01f6:
		{
			uint32_t L_48 = V_3;
			if ((((int32_t)L_48) == ((int32_t)((int32_t)-558361902))))
			{
				goto IL_037f;
			}
		}

IL_0201:
		{
			goto IL_071b;
		}

IL_0206:
		{
			uint32_t L_49 = V_3;
			if ((!(((uint32_t)L_49) <= ((uint32_t)((int32_t)-255211260)))))
			{
				goto IL_0229;
			}
		}

IL_020e:
		{
			uint32_t L_50 = V_3;
			if ((((int32_t)L_50) == ((int32_t)((int32_t)-345285761))))
			{
				goto IL_03e8;
			}
		}

IL_0219:
		{
			uint32_t L_51 = V_3;
			if ((((int32_t)L_51) == ((int32_t)((int32_t)-255211260))))
			{
				goto IL_0427;
			}
		}

IL_0224:
		{
			goto IL_071b;
		}

IL_0229:
		{
			uint32_t L_52 = V_3;
			if ((((int32_t)L_52) == ((int32_t)((int32_t)-42086080))))
			{
				goto IL_0301;
			}
		}

IL_0234:
		{
			uint32_t L_53 = V_3;
			if ((((int32_t)L_53) == ((int32_t)((int32_t)-25846038))))
			{
				goto IL_032b;
			}
		}

IL_023f:
		{
			goto IL_071b;
		}

IL_0244:
		{
			String_t* L_54 = V_2;
			bool L_55;
			L_55 = String_op_Equality_m50B3548E4AC232558190B0052877B290AA1D436A((String_t*)L_54, (String_t*)_stringLiteralEBF5FE0CBF3EEA67902EEA700B7216E3DB0D8E84, /*hidden argument*/NULL);
			if (L_55)
			{
				goto IL_04cf;
			}
		}

IL_0254:
		{
			goto IL_071b;
		}

IL_0259:
		{
			String_t* L_56 = V_2;
			bool L_57;
			L_57 = String_op_Equality_m50B3548E4AC232558190B0052877B290AA1D436A((String_t*)L_56, (String_t*)_stringLiteral647E0FB2B5E859CC4BD7C73623B82C8EFABA2563, /*hidden argument*/NULL);
			if (L_57)
			{
				goto IL_04e5;
			}
		}

IL_0269:
		{
			goto IL_071b;
		}

IL_026e:
		{
			String_t* L_58 = V_2;
			bool L_59;
			L_59 = String_op_Equality_m50B3548E4AC232558190B0052877B290AA1D436A((String_t*)L_58, (String_t*)_stringLiteralF9EE582B77C320A1F6A3DF72205857C4248BAC79, /*hidden argument*/NULL);
			if (L_59)
			{
				goto IL_04fb;
			}
		}

IL_027e:
		{
			goto IL_071b;
		}

IL_0283:
		{
			String_t* L_60 = V_2;
			bool L_61;
			L_61 = String_op_Equality_m50B3548E4AC232558190B0052877B290AA1D436A((String_t*)L_60, (String_t*)_stringLiteral53D3413057D7E52F44470A335C590748745352B1, /*hidden argument*/NULL);
			if (L_61)
			{
				goto IL_050c;
			}
		}

IL_0293:
		{
			goto IL_071b;
		}

IL_0298:
		{
			String_t* L_62 = V_2;
			bool L_63;
			L_63 = String_op_Equality_m50B3548E4AC232558190B0052877B290AA1D436A((String_t*)L_62, (String_t*)_stringLiteralC959D767B7F0BD38D9DA8A64A4750C3A0972E2A0, /*hidden argument*/NULL);
			if (L_63)
			{
				goto IL_0522;
			}
		}

IL_02a8:
		{
			goto IL_071b;
		}

IL_02ad:
		{
			String_t* L_64 = V_2;
			bool L_65;
			L_65 = String_op_Equality_m50B3548E4AC232558190B0052877B290AA1D436A((String_t*)L_64, (String_t*)_stringLiteral75C9716749EA210206E3467390B7A11F3F33DDFA, /*hidden argument*/NULL);
			if (L_65)
			{
				goto IL_0533;
			}
		}

IL_02bd:
		{
			goto IL_071b;
		}

IL_02c2:
		{
			String_t* L_66 = V_2;
			bool L_67;
			L_67 = String_op_Equality_m50B3548E4AC232558190B0052877B290AA1D436A((String_t*)L_66, (String_t*)_stringLiteral7606720A7AEF5939309A8E4FCB8274252FA3D7BF, /*hidden argument*/NULL);
			if (L_67)
			{
				goto IL_0544;
			}
		}

IL_02d2:
		{
			goto IL_071b;
		}

IL_02d7:
		{
			String_t* L_68 = V_2;
			bool L_69;
			L_69 = String_op_Equality_m50B3548E4AC232558190B0052877B290AA1D436A((String_t*)L_68, (String_t*)_stringLiteral71C5F9C3E2F3C81C5BBC7FD313F6938654E61138, /*hidden argument*/NULL);
			if (L_69)
			{
				goto IL_055a;
			}
		}

IL_02e7:
		{
			goto IL_071b;
		}

IL_02ec:
		{
			String_t* L_70 = V_2;
			bool L_71;
			L_71 = String_op_Equality_m50B3548E4AC232558190B0052877B290AA1D436A((String_t*)L_70, (String_t*)_stringLiteral3F1522C8DB7943F2AE3AA1563D3AC25D9C8B93D1, /*hidden argument*/NULL);
			if (L_71)
			{
				goto IL_0570;
			}
		}

IL_02fc:
		{
			goto IL_071b;
		}

IL_0301:
		{
			String_t* L_72 = V_2;
			bool L_73;
			L_73 = String_op_Equality_m50B3548E4AC232558190B0052877B290AA1D436A((String_t*)L_72, (String_t*)_stringLiteralF23E83744C9D6FC70D71B723AAED8006D6780BCB, /*hidden argument*/NULL);
			if (L_73)
			{
				goto IL_0586;
			}
		}

IL_0311:
		{
			goto IL_071b;
		}

IL_0316:
		{
			String_t* L_74 = V_2;
			bool L_75;
			L_75 = String_op_Equality_m50B3548E4AC232558190B0052877B290AA1D436A((String_t*)L_74, (String_t*)_stringLiteralB49A1DF483856544CEC6018E8C944DB6E16A8D57, /*hidden argument*/NULL);
			if (L_75)
			{
				goto IL_059c;
			}
		}

IL_0326:
		{
			goto IL_071b;
		}

IL_032b:
		{
			String_t* L_76 = V_2;
			bool L_77;
			L_77 = String_op_Equality_m50B3548E4AC232558190B0052877B290AA1D436A((String_t*)L_76, (String_t*)_stringLiteral3A04F86957625CB28FA670EECF997E6BAD45BBE7, /*hidden argument*/NULL);
			if (L_77)
			{
				goto IL_05b2;
			}
		}

IL_033b:
		{
			goto IL_071b;
		}

IL_0340:
		{
			String_t* L_78 = V_2;
			bool L_79;
			L_79 = String_op_Equality_m50B3548E4AC232558190B0052877B290AA1D436A((String_t*)L_78, (String_t*)_stringLiteral7A4A6E2A7090298F814A9D44C89F8634249BEF07, /*hidden argument*/NULL);
			if (L_79)
			{
				goto IL_05c8;
			}
		}

IL_0350:
		{
			goto IL_071b;
		}

IL_0355:
		{
			String_t* L_80 = V_2;
			bool L_81;
			L_81 = String_op_Equality_m50B3548E4AC232558190B0052877B290AA1D436A((String_t*)L_80, (String_t*)_stringLiteralF3FA58C10BBB9830102605E24AF89DC619908DFA, /*hidden argument*/NULL);
			if (L_81)
			{
				goto IL_05d9;
			}
		}

IL_0365:
		{
			goto IL_071b;
		}

IL_036a:
		{
			String_t* L_82 = V_2;
			bool L_83;
			L_83 = String_op_Equality_m50B3548E4AC232558190B0052877B290AA1D436A((String_t*)L_82, (String_t*)_stringLiteralBA9362732D25B1644B7D8DEC5DF6F036A4A66DE5, /*hidden argument*/NULL);
			if (L_83)
			{
				goto IL_05ee;
			}
		}

IL_037a:
		{
			goto IL_071b;
		}

IL_037f:
		{
			String_t* L_84 = V_2;
			bool L_85;
			L_85 = String_op_Equality_m50B3548E4AC232558190B0052877B290AA1D436A((String_t*)L_84, (String_t*)_stringLiteral95F57476C0AA778364404E7CCCD7499BF1BF3757, /*hidden argument*/NULL);
			if (L_85)
			{
				goto IL_05fe;
			}
		}

IL_038f:
		{
			goto IL_071b;
		}

IL_0394:
		{
			String_t* L_86 = V_2;
			bool L_87;
			L_87 = String_op_Equality_m50B3548E4AC232558190B0052877B290AA1D436A((String_t*)L_86, (String_t*)_stringLiteral9AB5ADF8A8A53110245466F7C226F7935F5FE95F, /*hidden argument*/NULL);
			if (L_87)
			{
				goto IL_060f;
			}
		}

IL_03a4:
		{
			goto IL_071b;
		}

IL_03a9:
		{
			String_t* L_88 = V_2;
			bool L_89;
			L_89 = String_op_Equality_m50B3548E4AC232558190B0052877B290AA1D436A((String_t*)L_88, (String_t*)_stringLiteralEA8FBF382D8AC9EDB8FFC14A350641B987F5C631, /*hidden argument*/NULL);
			if (L_89)
			{
				goto IL_0620;
			}
		}

IL_03b9:
		{
			goto IL_071b;
		}

IL_03be:
		{
			String_t* L_90 = V_2;
			bool L_91;
			L_91 = String_op_Equality_m50B3548E4AC232558190B0052877B290AA1D436A((String_t*)L_90, (String_t*)_stringLiteral201D9D00BB60DC2318D21CF9902290EFE255D5DC, /*hidden argument*/NULL);
			if (L_91)
			{
				goto IL_0631;
			}
		}

IL_03ce:
		{
			goto IL_071b;
		}

IL_03d3:
		{
			String_t* L_92 = V_2;
			bool L_93;
			L_93 = String_op_Equality_m50B3548E4AC232558190B0052877B290AA1D436A((String_t*)L_92, (String_t*)_stringLiteral65B008F04EC40A696263EF679CF274BD10999A5D, /*hidden argument*/NULL);
			if (L_93)
			{
				goto IL_0642;
			}
		}

IL_03e3:
		{
			goto IL_071b;
		}

IL_03e8:
		{
			String_t* L_94 = V_2;
			bool L_95;
			L_95 = String_op_Equality_m50B3548E4AC232558190B0052877B290AA1D436A((String_t*)L_94, (String_t*)_stringLiteralF38CFAE6A91D072D4453C29FF44D81D459A582F1, /*hidden argument*/NULL);
			if (L_95)
			{
				goto IL_0653;
			}
		}

IL_03f8:
		{
			goto IL_071b;
		}

IL_03fd:
		{
			String_t* L_96 = V_2;
			bool L_97;
			L_97 = String_op_Equality_m50B3548E4AC232558190B0052877B290AA1D436A((String_t*)L_96, (String_t*)_stringLiteral3BC15E3C2F40466B2DC85C4776499817B8306CBB, /*hidden argument*/NULL);
			if (L_97)
			{
				goto IL_0669;
			}
		}

IL_040d:
		{
			goto IL_071b;
		}

IL_0412:
		{
			String_t* L_98 = V_2;
			bool L_99;
			L_99 = String_op_Equality_m50B3548E4AC232558190B0052877B290AA1D436A((String_t*)L_98, (String_t*)_stringLiteralCE18B047107AA23D1AA9B2ED32D316148E02655F, /*hidden argument*/NULL);
			if (L_99)
			{
				goto IL_067f;
			}
		}

IL_0422:
		{
			goto IL_071b;
		}

IL_0427:
		{
			String_t* L_100 = V_2;
			bool L_101;
			L_101 = String_op_Equality_m50B3548E4AC232558190B0052877B290AA1D436A((String_t*)L_100, (String_t*)_stringLiteral83AC9669A9053DD15B9F2E82D2CE2369EFE131BA, /*hidden argument*/NULL);
			if (L_101)
			{
				goto IL_0695;
			}
		}

IL_0437:
		{
			goto IL_071b;
		}

IL_043c:
		{
			String_t* L_102 = V_2;
			bool L_103;
			L_103 = String_op_Equality_m50B3548E4AC232558190B0052877B290AA1D436A((String_t*)L_102, (String_t*)_stringLiteralECAEEB225F8689DE45DEB4FA21CE34E1960B1B50, /*hidden argument*/NULL);
			if (L_103)
			{
				goto IL_06a3;
			}
		}

IL_044c:
		{
			goto IL_071b;
		}

IL_0451:
		{
			String_t* L_104 = V_2;
			bool L_105;
			L_105 = String_op_Equality_m50B3548E4AC232558190B0052877B290AA1D436A((String_t*)L_104, (String_t*)_stringLiteral2EE7B6B0E37E14930BBA497867139BFD0617CE04, /*hidden argument*/NULL);
			if (L_105)
			{
				goto IL_06b1;
			}
		}

IL_0461:
		{
			goto IL_071b;
		}

IL_0466:
		{
			String_t* L_106 = V_2;
			bool L_107;
			L_107 = String_op_Equality_m50B3548E4AC232558190B0052877B290AA1D436A((String_t*)L_106, (String_t*)_stringLiteralF2AF7DD0BFF41B7B35037F018DAABE7DCF357A7B, /*hidden argument*/NULL);
			if (L_107)
			{
				goto IL_06bf;
			}
		}

IL_0476:
		{
			goto IL_071b;
		}

IL_047b:
		{
			String_t* L_108 = V_2;
			bool L_109;
			L_109 = String_op_Equality_m50B3548E4AC232558190B0052877B290AA1D436A((String_t*)L_108, (String_t*)_stringLiteral7FF61C3A55BCA1287974D8740F945250B3F0F084, /*hidden argument*/NULL);
			if (L_109)
			{
				goto IL_06d2;
			}
		}

IL_048b:
		{
			goto IL_071b;
		}

IL_0490:
		{
			String_t* L_110 = V_2;
			bool L_111;
			L_111 = String_op_Equality_m50B3548E4AC232558190B0052877B290AA1D436A((String_t*)L_110, (String_t*)_stringLiteral2ADFC3FFF7C52D554F0435A348A5345C9FCD7FF8, /*hidden argument*/NULL);
			if (L_111)
			{
				goto IL_06e5;
			}
		}

IL_04a0:
		{
			goto IL_071b;
		}

IL_04a5:
		{
			String_t* L_112 = V_2;
			bool L_113;
			L_113 = String_op_Equality_m50B3548E4AC232558190B0052877B290AA1D436A((String_t*)L_112, (String_t*)_stringLiteral2E201D1972661439FD3C8523C55723E7E9BCC7DA, /*hidden argument*/NULL);
			if (L_113)
			{
				goto IL_06f7;
			}
		}

IL_04b5:
		{
			goto IL_071b;
		}

IL_04ba:
		{
			String_t* L_114 = V_2;
			bool L_115;
			L_115 = String_op_Equality_m50B3548E4AC232558190B0052877B290AA1D436A((String_t*)L_114, (String_t*)_stringLiteralCD44AC57FFE6CAC7824F4CAA223F1BB8B4CB0D73, /*hidden argument*/NULL);
			if (L_115)
			{
				goto IL_0709;
			}
		}

IL_04ca:
		{
			goto IL_071b;
		}

IL_04cf:
		{
			// instance.width = reader.Read<System.Int32>(ES3Type_int.Instance);
			RenderTexture_t5FE7A5B47EF962A0E8D7BEBA05E9FC87D49A1849 * L_116 = V_0;
			ES3Reader_t2780AF8AA61DA2A817115CEF8612AC0E494D03C9 * L_117 = ___reader0;
			IL2CPP_RUNTIME_CLASS_INIT(ES3Type_int_tF64C15D40AD0CC7C15BCD1CEC3C5C6BF837BD167_il2cpp_TypeInfo_var);
			ES3Type_t8FBECB7AE75168648B9524E0C2A38DAD4555421D * L_118 = ((ES3Type_int_tF64C15D40AD0CC7C15BCD1CEC3C5C6BF837BD167_StaticFields*)il2cpp_codegen_static_fields_for(ES3Type_int_tF64C15D40AD0CC7C15BCD1CEC3C5C6BF837BD167_il2cpp_TypeInfo_var))->get_Instance_12();
			NullCheck((ES3Reader_t2780AF8AA61DA2A817115CEF8612AC0E494D03C9 *)L_117);
			int32_t L_119;
			L_119 = GenericVirtFuncInvoker1< int32_t, ES3Type_t8FBECB7AE75168648B9524E0C2A38DAD4555421D * >::Invoke(ES3Reader_Read_TisInt32_tFDE5F8CD43D10453F6A2E0C77FE48C6CC7009046_m2B74AA6627F5B1D21171D56C42F71DE5A7C1B4A6_RuntimeMethod_var, (ES3Reader_t2780AF8AA61DA2A817115CEF8612AC0E494D03C9 *)L_117, (ES3Type_t8FBECB7AE75168648B9524E0C2A38DAD4555421D *)L_118);
			NullCheck((Texture_t9FE0218A1EEDF266E8C85879FE123265CACC95AE *)L_116);
			VirtActionInvoker1< int32_t >::Invoke(6 /* System.Void UnityEngine.Texture::set_width(System.Int32) */, (Texture_t9FE0218A1EEDF266E8C85879FE123265CACC95AE *)L_116, (int32_t)L_119);
			// break;
			goto IL_0721;
		}

IL_04e5:
		{
			// instance.height = reader.Read<System.Int32>(ES3Type_int.Instance);
			RenderTexture_t5FE7A5B47EF962A0E8D7BEBA05E9FC87D49A1849 * L_120 = V_0;
			ES3Reader_t2780AF8AA61DA2A817115CEF8612AC0E494D03C9 * L_121 = ___reader0;
			IL2CPP_RUNTIME_CLASS_INIT(ES3Type_int_tF64C15D40AD0CC7C15BCD1CEC3C5C6BF837BD167_il2cpp_TypeInfo_var);
			ES3Type_t8FBECB7AE75168648B9524E0C2A38DAD4555421D * L_122 = ((ES3Type_int_tF64C15D40AD0CC7C15BCD1CEC3C5C6BF837BD167_StaticFields*)il2cpp_codegen_static_fields_for(ES3Type_int_tF64C15D40AD0CC7C15BCD1CEC3C5C6BF837BD167_il2cpp_TypeInfo_var))->get_Instance_12();
			NullCheck((ES3Reader_t2780AF8AA61DA2A817115CEF8612AC0E494D03C9 *)L_121);
			int32_t L_123;
			L_123 = GenericVirtFuncInvoker1< int32_t, ES3Type_t8FBECB7AE75168648B9524E0C2A38DAD4555421D * >::Invoke(ES3Reader_Read_TisInt32_tFDE5F8CD43D10453F6A2E0C77FE48C6CC7009046_m2B74AA6627F5B1D21171D56C42F71DE5A7C1B4A6_RuntimeMethod_var, (ES3Reader_t2780AF8AA61DA2A817115CEF8612AC0E494D03C9 *)L_121, (ES3Type_t8FBECB7AE75168648B9524E0C2A38DAD4555421D *)L_122);
			NullCheck((Texture_t9FE0218A1EEDF266E8C85879FE123265CACC95AE *)L_120);
			VirtActionInvoker1< int32_t >::Invoke(8 /* System.Void UnityEngine.Texture::set_height(System.Int32) */, (Texture_t9FE0218A1EEDF266E8C85879FE123265CACC95AE *)L_120, (int32_t)L_123);
			// break;
			goto IL_0721;
		}

IL_04fb:
		{
			// instance.dimension = reader.Read<UnityEngine.Rendering.TextureDimension>();
			RenderTexture_t5FE7A5B47EF962A0E8D7BEBA05E9FC87D49A1849 * L_124 = V_0;
			ES3Reader_t2780AF8AA61DA2A817115CEF8612AC0E494D03C9 * L_125 = ___reader0;
			NullCheck((ES3Reader_t2780AF8AA61DA2A817115CEF8612AC0E494D03C9 *)L_125);
			int32_t L_126;
			L_126 = GenericVirtFuncInvoker0< int32_t >::Invoke(ES3Reader_Read_TisTextureDimension_tADCCB7C1D30E4D1182651BA9094B4DE61B63EACC_m19EAA3B93D10636C17A62A3D8437349223CFD988_RuntimeMethod_var, (ES3Reader_t2780AF8AA61DA2A817115CEF8612AC0E494D03C9 *)L_125);
			NullCheck((Texture_t9FE0218A1EEDF266E8C85879FE123265CACC95AE *)L_124);
			VirtActionInvoker1< int32_t >::Invoke(10 /* System.Void UnityEngine.Texture::set_dimension(UnityEngine.Rendering.TextureDimension) */, (Texture_t9FE0218A1EEDF266E8C85879FE123265CACC95AE *)L_124, (int32_t)L_126);
			// break;
			goto IL_0721;
		}

IL_050c:
		{
			// instance.useMipMap = reader.Read<System.Boolean>(ES3Type_bool.Instance);
			RenderTexture_t5FE7A5B47EF962A0E8D7BEBA05E9FC87D49A1849 * L_127 = V_0;
			ES3Reader_t2780AF8AA61DA2A817115CEF8612AC0E494D03C9 * L_128 = ___reader0;
			IL2CPP_RUNTIME_CLASS_INIT(ES3Type_bool_t8F309F7B9CC735FF1DEE68081B6E3CAB367745F4_il2cpp_TypeInfo_var);
			ES3Type_t8FBECB7AE75168648B9524E0C2A38DAD4555421D * L_129 = ((ES3Type_bool_t8F309F7B9CC735FF1DEE68081B6E3CAB367745F4_StaticFields*)il2cpp_codegen_static_fields_for(ES3Type_bool_t8F309F7B9CC735FF1DEE68081B6E3CAB367745F4_il2cpp_TypeInfo_var))->get_Instance_12();
			NullCheck((ES3Reader_t2780AF8AA61DA2A817115CEF8612AC0E494D03C9 *)L_128);
			bool L_130;
			L_130 = GenericVirtFuncInvoker1< bool, ES3Type_t8FBECB7AE75168648B9524E0C2A38DAD4555421D * >::Invoke(ES3Reader_Read_TisBoolean_t07D1E3F34E4813023D64F584DFF7B34C9D922F37_mC6D1B158268FF9B97822FF9F5B37FB1723FEDA22_RuntimeMethod_var, (ES3Reader_t2780AF8AA61DA2A817115CEF8612AC0E494D03C9 *)L_128, (ES3Type_t8FBECB7AE75168648B9524E0C2A38DAD4555421D *)L_129);
			NullCheck((RenderTexture_t5FE7A5B47EF962A0E8D7BEBA05E9FC87D49A1849 *)L_127);
			RenderTexture_set_useMipMap_mAE1437C3D7D21441891A612C3B812EE9C379F126((RenderTexture_t5FE7A5B47EF962A0E8D7BEBA05E9FC87D49A1849 *)L_127, (bool)L_130, /*hidden argument*/NULL);
			// break;
			goto IL_0721;
		}

IL_0522:
		{
			// instance.memorylessMode = reader.Read<UnityEngine.RenderTextureMemoryless>();
			RenderTexture_t5FE7A5B47EF962A0E8D7BEBA05E9FC87D49A1849 * L_131 = V_0;
			ES3Reader_t2780AF8AA61DA2A817115CEF8612AC0E494D03C9 * L_132 = ___reader0;
			NullCheck((ES3Reader_t2780AF8AA61DA2A817115CEF8612AC0E494D03C9 *)L_132);
			int32_t L_133;
			L_133 = GenericVirtFuncInvoker0< int32_t >::Invoke(ES3Reader_Read_TisRenderTextureMemoryless_t37547D68C2186D2650440F719302CDA4A3BB7F67_m3A980BA15AADBBB8393C3BC88CE17EEDDC89B027_RuntimeMethod_var, (ES3Reader_t2780AF8AA61DA2A817115CEF8612AC0E494D03C9 *)L_132);
			NullCheck((RenderTexture_t5FE7A5B47EF962A0E8D7BEBA05E9FC87D49A1849 *)L_131);
			RenderTexture_set_memorylessMode_mE48B2A38E9374A7BB419383B438790347474EFC1((RenderTexture_t5FE7A5B47EF962A0E8D7BEBA05E9FC87D49A1849 *)L_131, (int32_t)L_133, /*hidden argument*/NULL);
			// break;
			goto IL_0721;
		}

IL_0533:
		{
			// instance.format = reader.Read<UnityEngine.RenderTextureFormat>();
			RenderTexture_t5FE7A5B47EF962A0E8D7BEBA05E9FC87D49A1849 * L_134 = V_0;
			ES3Reader_t2780AF8AA61DA2A817115CEF8612AC0E494D03C9 * L_135 = ___reader0;
			NullCheck((ES3Reader_t2780AF8AA61DA2A817115CEF8612AC0E494D03C9 *)L_135);
			int32_t L_136;
			L_136 = GenericVirtFuncInvoker0< int32_t >::Invoke(ES3Reader_Read_TisRenderTextureFormat_t8371287102ED67772EF78229CF4AB9D38C2CD626_mE6358E03407F5C15B58B292C79D4770DE3FAC95A_RuntimeMethod_var, (ES3Reader_t2780AF8AA61DA2A817115CEF8612AC0E494D03C9 *)L_135);
			NullCheck((RenderTexture_t5FE7A5B47EF962A0E8D7BEBA05E9FC87D49A1849 *)L_134);
			RenderTexture_set_format_m32D42DC33DB151B69E81D0D93F36DE7450CFC23D((RenderTexture_t5FE7A5B47EF962A0E8D7BEBA05E9FC87D49A1849 *)L_134, (int32_t)L_136, /*hidden argument*/NULL);
			// break;
			goto IL_0721;
		}

IL_0544:
		{
			// instance.autoGenerateMips = reader.Read<System.Boolean>(ES3Type_bool.Instance);
			RenderTexture_t5FE7A5B47EF962A0E8D7BEBA05E9FC87D49A1849 * L_137 = V_0;
			ES3Reader_t2780AF8AA61DA2A817115CEF8612AC0E494D03C9 * L_138 = ___reader0;
			IL2CPP_RUNTIME_CLASS_INIT(ES3Type_bool_t8F309F7B9CC735FF1DEE68081B6E3CAB367745F4_il2cpp_TypeInfo_var);
			ES3Type_t8FBECB7AE75168648B9524E0C2A38DAD4555421D * L_139 = ((ES3Type_bool_t8F309F7B9CC735FF1DEE68081B6E3CAB367745F4_StaticFields*)il2cpp_codegen_static_fields_for(ES3Type_bool_t8F309F7B9CC735FF1DEE68081B6E3CAB367745F4_il2cpp_TypeInfo_var))->get_Instance_12();
			NullCheck((ES3Reader_t2780AF8AA61DA2A817115CEF8612AC0E494D03C9 *)L_138);
			bool L_140;
			L_140 = GenericVirtFuncInvoker1< bool, ES3Type_t8FBECB7AE75168648B9524E0C2A38DAD4555421D * >::Invoke(ES3Reader_Read_TisBoolean_t07D1E3F34E4813023D64F584DFF7B34C9D922F37_mC6D1B158268FF9B97822FF9F5B37FB1723FEDA22_RuntimeMethod_var, (ES3Reader_t2780AF8AA61DA2A817115CEF8612AC0E494D03C9 *)L_138, (ES3Type_t8FBECB7AE75168648B9524E0C2A38DAD4555421D *)L_139);
			NullCheck((RenderTexture_t5FE7A5B47EF962A0E8D7BEBA05E9FC87D49A1849 *)L_137);
			RenderTexture_set_autoGenerateMips_m0F02D60D4C4D4790B354451732F2DA6BA12D2E63((RenderTexture_t5FE7A5B47EF962A0E8D7BEBA05E9FC87D49A1849 *)L_137, (bool)L_140, /*hidden argument*/NULL);
			// break;
			goto IL_0721;
		}

IL_055a:
		{
			// instance.volumeDepth = reader.Read<System.Int32>(ES3Type_int.Instance);
			RenderTexture_t5FE7A5B47EF962A0E8D7BEBA05E9FC87D49A1849 * L_141 = V_0;
			ES3Reader_t2780AF8AA61DA2A817115CEF8612AC0E494D03C9 * L_142 = ___reader0;
			IL2CPP_RUNTIME_CLASS_INIT(ES3Type_int_tF64C15D40AD0CC7C15BCD1CEC3C5C6BF837BD167_il2cpp_TypeInfo_var);
			ES3Type_t8FBECB7AE75168648B9524E0C2A38DAD4555421D * L_143 = ((ES3Type_int_tF64C15D40AD0CC7C15BCD1CEC3C5C6BF837BD167_StaticFields*)il2cpp_codegen_static_fields_for(ES3Type_int_tF64C15D40AD0CC7C15BCD1CEC3C5C6BF837BD167_il2cpp_TypeInfo_var))->get_Instance_12();
			NullCheck((ES3Reader_t2780AF8AA61DA2A817115CEF8612AC0E494D03C9 *)L_142);
			int32_t L_144;
			L_144 = GenericVirtFuncInvoker1< int32_t, ES3Type_t8FBECB7AE75168648B9524E0C2A38DAD4555421D * >::Invoke(ES3Reader_Read_TisInt32_tFDE5F8CD43D10453F6A2E0C77FE48C6CC7009046_m2B74AA6627F5B1D21171D56C42F71DE5A7C1B4A6_RuntimeMethod_var, (ES3Reader_t2780AF8AA61DA2A817115CEF8612AC0E494D03C9 *)L_142, (ES3Type_t8FBECB7AE75168648B9524E0C2A38DAD4555421D *)L_143);
			NullCheck((RenderTexture_t5FE7A5B47EF962A0E8D7BEBA05E9FC87D49A1849 *)L_141);
			RenderTexture_set_volumeDepth_m01D7BD50386DDAE777CE3CB9B60FDD7DE798AC93((RenderTexture_t5FE7A5B47EF962A0E8D7BEBA05E9FC87D49A1849 *)L_141, (int32_t)L_144, /*hidden argument*/NULL);
			// break;
			goto IL_0721;
		}

IL_0570:
		{
			// instance.antiAliasing = reader.Read<System.Int32>(ES3Type_int.Instance);
			RenderTexture_t5FE7A5B47EF962A0E8D7BEBA05E9FC87D49A1849 * L_145 = V_0;
			ES3Reader_t2780AF8AA61DA2A817115CEF8612AC0E494D03C9 * L_146 = ___reader0;
			IL2CPP_RUNTIME_CLASS_INIT(ES3Type_int_tF64C15D40AD0CC7C15BCD1CEC3C5C6BF837BD167_il2cpp_TypeInfo_var);
			ES3Type_t8FBECB7AE75168648B9524E0C2A38DAD4555421D * L_147 = ((ES3Type_int_tF64C15D40AD0CC7C15BCD1CEC3C5C6BF837BD167_StaticFields*)il2cpp_codegen_static_fields_for(ES3Type_int_tF64C15D40AD0CC7C15BCD1CEC3C5C6BF837BD167_il2cpp_TypeInfo_var))->get_Instance_12();
			NullCheck((ES3Reader_t2780AF8AA61DA2A817115CEF8612AC0E494D03C9 *)L_146);
			int32_t L_148;
			L_148 = GenericVirtFuncInvoker1< int32_t, ES3Type_t8FBECB7AE75168648B9524E0C2A38DAD4555421D * >::Invoke(ES3Reader_Read_TisInt32_tFDE5F8CD43D10453F6A2E0C77FE48C6CC7009046_m2B74AA6627F5B1D21171D56C42F71DE5A7C1B4A6_RuntimeMethod_var, (ES3Reader_t2780AF8AA61DA2A817115CEF8612AC0E494D03C9 *)L_146, (ES3Type_t8FBECB7AE75168648B9524E0C2A38DAD4555421D *)L_147);
			NullCheck((RenderTexture_t5FE7A5B47EF962A0E8D7BEBA05E9FC87D49A1849 *)L_145);
			RenderTexture_set_antiAliasing_m4D37900B7E23CA0D33F109DB8DF21265DB70C38F((RenderTexture_t5FE7A5B47EF962A0E8D7BEBA05E9FC87D49A1849 *)L_145, (int32_t)L_148, /*hidden argument*/NULL);
			// break;
			goto IL_0721;
		}

IL_0586:
		{
			// instance.enableRandomWrite = reader.Read<System.Boolean>(ES3Type_bool.Instance);
			RenderTexture_t5FE7A5B47EF962A0E8D7BEBA05E9FC87D49A1849 * L_149 = V_0;
			ES3Reader_t2780AF8AA61DA2A817115CEF8612AC0E494D03C9 * L_150 = ___reader0;
			IL2CPP_RUNTIME_CLASS_INIT(ES3Type_bool_t8F309F7B9CC735FF1DEE68081B6E3CAB367745F4_il2cpp_TypeInfo_var);
			ES3Type_t8FBECB7AE75168648B9524E0C2A38DAD4555421D * L_151 = ((ES3Type_bool_t8F309F7B9CC735FF1DEE68081B6E3CAB367745F4_StaticFields*)il2cpp_codegen_static_fields_for(ES3Type_bool_t8F309F7B9CC735FF1DEE68081B6E3CAB367745F4_il2cpp_TypeInfo_var))->get_Instance_12();
			NullCheck((ES3Reader_t2780AF8AA61DA2A817115CEF8612AC0E494D03C9 *)L_150);
			bool L_152;
			L_152 = GenericVirtFuncInvoker1< bool, ES3Type_t8FBECB7AE75168648B9524E0C2A38DAD4555421D * >::Invoke(ES3Reader_Read_TisBoolean_t07D1E3F34E4813023D64F584DFF7B34C9D922F37_mC6D1B158268FF9B97822FF9F5B37FB1723FEDA22_RuntimeMethod_var, (ES3Reader_t2780AF8AA61DA2A817115CEF8612AC0E494D03C9 *)L_150, (ES3Type_t8FBECB7AE75168648B9524E0C2A38DAD4555421D *)L_151);
			NullCheck((RenderTexture_t5FE7A5B47EF962A0E8D7BEBA05E9FC87D49A1849 *)L_149);
			RenderTexture_set_enableRandomWrite_m024F49DB3CA3B02FA0EEBB3EACB37E6228CAA183((RenderTexture_t5FE7A5B47EF962A0E8D7BEBA05E9FC87D49A1849 *)L_149, (bool)L_152, /*hidden argument*/NULL);
			// break;
			goto IL_0721;
		}

IL_059c:
		{
			// instance.isPowerOfTwo = reader.Read<System.Boolean>(ES3Type_bool.Instance);
			RenderTexture_t5FE7A5B47EF962A0E8D7BEBA05E9FC87D49A1849 * L_153 = V_0;
			ES3Reader_t2780AF8AA61DA2A817115CEF8612AC0E494D03C9 * L_154 = ___reader0;
			IL2CPP_RUNTIME_CLASS_INIT(ES3Type_bool_t8F309F7B9CC735FF1DEE68081B6E3CAB367745F4_il2cpp_TypeInfo_var);
			ES3Type_t8FBECB7AE75168648B9524E0C2A38DAD4555421D * L_155 = ((ES3Type_bool_t8F309F7B9CC735FF1DEE68081B6E3CAB367745F4_StaticFields*)il2cpp_codegen_static_fields_for(ES3Type_bool_t8F309F7B9CC735FF1DEE68081B6E3CAB367745F4_il2cpp_TypeInfo_var))->get_Instance_12();
			NullCheck((ES3Reader_t2780AF8AA61DA2A817115CEF8612AC0E494D03C9 *)L_154);
			bool L_156;
			L_156 = GenericVirtFuncInvoker1< bool, ES3Type_t8FBECB7AE75168648B9524E0C2A38DAD4555421D * >::Invoke(ES3Reader_Read_TisBoolean_t07D1E3F34E4813023D64F584DFF7B34C9D922F37_mC6D1B158268FF9B97822FF9F5B37FB1723FEDA22_RuntimeMethod_var, (ES3Reader_t2780AF8AA61DA2A817115CEF8612AC0E494D03C9 *)L_154, (ES3Type_t8FBECB7AE75168648B9524E0C2A38DAD4555421D *)L_155);
			NullCheck((RenderTexture_t5FE7A5B47EF962A0E8D7BEBA05E9FC87D49A1849 *)L_153);
			RenderTexture_set_isPowerOfTwo_mA6D34F610DF27C40422DF5815892B45C656F1317((RenderTexture_t5FE7A5B47EF962A0E8D7BEBA05E9FC87D49A1849 *)L_153, (bool)L_156, /*hidden argument*/NULL);
			// break;
			goto IL_0721;
		}

IL_05b2:
		{
			// instance.depth = reader.Read<System.Int32>(ES3Type_int.Instance);
			RenderTexture_t5FE7A5B47EF962A0E8D7BEBA05E9FC87D49A1849 * L_157 = V_0;
			ES3Reader_t2780AF8AA61DA2A817115CEF8612AC0E494D03C9 * L_158 = ___reader0;
			IL2CPP_RUNTIME_CLASS_INIT(ES3Type_int_tF64C15D40AD0CC7C15BCD1CEC3C5C6BF837BD167_il2cpp_TypeInfo_var);
			ES3Type_t8FBECB7AE75168648B9524E0C2A38DAD4555421D * L_159 = ((ES3Type_int_tF64C15D40AD0CC7C15BCD1CEC3C5C6BF837BD167_StaticFields*)il2cpp_codegen_static_fields_for(ES3Type_int_tF64C15D40AD0CC7C15BCD1CEC3C5C6BF837BD167_il2cpp_TypeInfo_var))->get_Instance_12();
			NullCheck((ES3Reader_t2780AF8AA61DA2A817115CEF8612AC0E494D03C9 *)L_158);
			int32_t L_160;
			L_160 = GenericVirtFuncInvoker1< int32_t, ES3Type_t8FBECB7AE75168648B9524E0C2A38DAD4555421D * >::Invoke(ES3Reader_Read_TisInt32_tFDE5F8CD43D10453F6A2E0C77FE48C6CC7009046_m2B74AA6627F5B1D21171D56C42F71DE5A7C1B4A6_RuntimeMethod_var, (ES3Reader_t2780AF8AA61DA2A817115CEF8612AC0E494D03C9 *)L_158, (ES3Type_t8FBECB7AE75168648B9524E0C2A38DAD4555421D *)L_159);
			NullCheck((RenderTexture_t5FE7A5B47EF962A0E8D7BEBA05E9FC87D49A1849 *)L_157);
			RenderTexture_set_depth_mA57CEFEDDB45D0429FAC9532A631839F523944A3((RenderTexture_t5FE7A5B47EF962A0E8D7BEBA05E9FC87D49A1849 *)L_157, (int32_t)L_160, /*hidden argument*/NULL);
			// break;
			goto IL_0721;
		}

IL_05c8:
		{
			// instance.descriptor = reader.Read<UnityEngine.RenderTextureDescriptor>();
			RenderTexture_t5FE7A5B47EF962A0E8D7BEBA05E9FC87D49A1849 * L_161 = V_0;
			ES3Reader_t2780AF8AA61DA2A817115CEF8612AC0E494D03C9 * L_162 = ___reader0;
			NullCheck((ES3Reader_t2780AF8AA61DA2A817115CEF8612AC0E494D03C9 *)L_162);
			RenderTextureDescriptor_t67FF189E1F35AEB5D6C43A2D7103F3A8A8CA0B47  L_163;
			L_163 = GenericVirtFuncInvoker0< RenderTextureDescriptor_t67FF189E1F35AEB5D6C43A2D7103F3A8A8CA0B47  >::Invoke(ES3Reader_Read_TisRenderTextureDescriptor_t67FF189E1F35AEB5D6C43A2D7103F3A8A8CA0B47_m427886ADAAF96C7BA9BD423544128494F96D69E7_RuntimeMethod_var, (ES3Reader_t2780AF8AA61DA2A817115CEF8612AC0E494D03C9 *)L_162);
			NullCheck((RenderTexture_t5FE7A5B47EF962A0E8D7BEBA05E9FC87D49A1849 *)L_161);
			RenderTexture_set_descriptor_m3C8E31AE4644B23719A12345771D1B85EB6E5881((RenderTexture_t5FE7A5B47EF962A0E8D7BEBA05E9FC87D49A1849 *)L_161, (RenderTextureDescriptor_t67FF189E1F35AEB5D6C43A2D7103F3A8A8CA0B47 )L_163, /*hidden argument*/NULL);
			// break;
			goto IL_0721;
		}

IL_05d9:
		{
			// UnityEngine.RenderTexture.masterTextureLimit = reader.Read<System.Int32>(ES3Type_int.Instance);
			ES3Reader_t2780AF8AA61DA2A817115CEF8612AC0E494D03C9 * L_164 = ___reader0;
			IL2CPP_RUNTIME_CLASS_INIT(ES3Type_int_tF64C15D40AD0CC7C15BCD1CEC3C5C6BF837BD167_il2cpp_TypeInfo_var);
			ES3Type_t8FBECB7AE75168648B9524E0C2A38DAD4555421D * L_165 = ((ES3Type_int_tF64C15D40AD0CC7C15BCD1CEC3C5C6BF837BD167_StaticFields*)il2cpp_codegen_static_fields_for(ES3Type_int_tF64C15D40AD0CC7C15BCD1CEC3C5C6BF837BD167_il2cpp_TypeInfo_var))->get_Instance_12();
			NullCheck((ES3Reader_t2780AF8AA61DA2A817115CEF8612AC0E494D03C9 *)L_164);
			int32_t L_166;
			L_166 = GenericVirtFuncInvoker1< int32_t, ES3Type_t8FBECB7AE75168648B9524E0C2A38DAD4555421D * >::Invoke(ES3Reader_Read_TisInt32_tFDE5F8CD43D10453F6A2E0C77FE48C6CC7009046_m2B74AA6627F5B1D21171D56C42F71DE5A7C1B4A6_RuntimeMethod_var, (ES3Reader_t2780AF8AA61DA2A817115CEF8612AC0E494D03C9 *)L_164, (ES3Type_t8FBECB7AE75168648B9524E0C2A38DAD4555421D *)L_165);
			IL2CPP_RUNTIME_CLASS_INIT(Texture_t9FE0218A1EEDF266E8C85879FE123265CACC95AE_il2cpp_TypeInfo_var);
			Texture_set_masterTextureLimit_m94A531A20A54A86AF7B88A56F72709CE556B7DFF((int32_t)L_166, /*hidden argument*/NULL);
			// break;
			goto IL_0721;
		}

IL_05ee:
		{
			// UnityEngine.RenderTexture.anisotropicFiltering = reader.Read<UnityEngine.AnisotropicFiltering>();
			ES3Reader_t2780AF8AA61DA2A817115CEF8612AC0E494D03C9 * L_167 = ___reader0;
			NullCheck((ES3Reader_t2780AF8AA61DA2A817115CEF8612AC0E494D03C9 *)L_167);
			int32_t L_168;
			L_168 = GenericVirtFuncInvoker0< int32_t >::Invoke(ES3Reader_Read_TisAnisotropicFiltering_tAC3D1448B262D5869946CD1CDD2C8DAE3A7A537B_mAF1268AAC3E461D6E0604A19FAF0325873B6EC8A_RuntimeMethod_var, (ES3Reader_t2780AF8AA61DA2A817115CEF8612AC0E494D03C9 *)L_167);
			IL2CPP_RUNTIME_CLASS_INIT(Texture_t9FE0218A1EEDF266E8C85879FE123265CACC95AE_il2cpp_TypeInfo_var);
			Texture_set_anisotropicFiltering_mE2B639BF2681A8A0516C1C343C7E265ED60EAF16((int32_t)L_168, /*hidden argument*/NULL);
			// break;
			goto IL_0721;
		}

IL_05fe:
		{
			// instance.wrapMode = reader.Read<UnityEngine.TextureWrapMode>();
			RenderTexture_t5FE7A5B47EF962A0E8D7BEBA05E9FC87D49A1849 * L_169 = V_0;
			ES3Reader_t2780AF8AA61DA2A817115CEF8612AC0E494D03C9 * L_170 = ___reader0;
			NullCheck((ES3Reader_t2780AF8AA61DA2A817115CEF8612AC0E494D03C9 *)L_170);
			int32_t L_171;
			L_171 = GenericVirtFuncInvoker0< int32_t >::Invoke(ES3Reader_Read_TisTextureWrapMode_t86DDA8206E4AA784A1218D0DE3C5F6826D7549EB_m7926E449CD0B8BD56E5BF145DD0CCFE1C567F107_RuntimeMethod_var, (ES3Reader_t2780AF8AA61DA2A817115CEF8612AC0E494D03C9 *)L_170);
			NullCheck((Texture_t9FE0218A1EEDF266E8C85879FE123265CACC95AE *)L_169);
			Texture_set_wrapMode_m1233D2DF48DC20996F8EE26E866D4BDD2AC8050D((Texture_t9FE0218A1EEDF266E8C85879FE123265CACC95AE *)L_169, (int32_t)L_171, /*hidden argument*/NULL);
			// break;
			goto IL_0721;
		}

IL_060f:
		{
			// instance.wrapModeU = reader.Read<UnityEngine.TextureWrapMode>();
			RenderTexture_t5FE7A5B47EF962A0E8D7BEBA05E9FC87D49A1849 * L_172 = V_0;
			ES3Reader_t2780AF8AA61DA2A817115CEF8612AC0E494D03C9 * L_173 = ___reader0;
			NullCheck((ES3Reader_t2780AF8AA61DA2A817115CEF8612AC0E494D03C9 *)L_173);
			int32_t L_174;
			L_174 = GenericVirtFuncInvoker0< int32_t >::Invoke(ES3Reader_Read_TisTextureWrapMode_t86DDA8206E4AA784A1218D0DE3C5F6826D7549EB_m7926E449CD0B8BD56E5BF145DD0CCFE1C567F107_RuntimeMethod_var, (ES3Reader_t2780AF8AA61DA2A817115CEF8612AC0E494D03C9 *)L_173);
			NullCheck((Texture_t9FE0218A1EEDF266E8C85879FE123265CACC95AE *)L_172);
			Texture_set_wrapModeU_mBD3CBD6880E9E767B91ED9E1B14C725A52D7A66E((Texture_t9FE0218A1EEDF266E8C85879FE123265CACC95AE *)L_172, (int32_t)L_174, /*hidden argument*/NULL);
			// break;
			goto IL_0721;
		}

IL_0620:
		{
			// instance.wrapModeV = reader.Read<UnityEngine.TextureWrapMode>();
			RenderTexture_t5FE7A5B47EF962A0E8D7BEBA05E9FC87D49A1849 * L_175 = V_0;
			ES3Reader_t2780AF8AA61DA2A817115CEF8612AC0E494D03C9 * L_176 = ___reader0;
			NullCheck((ES3Reader_t2780AF8AA61DA2A817115CEF8612AC0E494D03C9 *)L_176);
			int32_t L_177;
			L_177 = GenericVirtFuncInvoker0< int32_t >::Invoke(ES3Reader_Read_TisTextureWrapMode_t86DDA8206E4AA784A1218D0DE3C5F6826D7549EB_m7926E449CD0B8BD56E5BF145DD0CCFE1C567F107_RuntimeMethod_var, (ES3Reader_t2780AF8AA61DA2A817115CEF8612AC0E494D03C9 *)L_176);
			NullCheck((Texture_t9FE0218A1EEDF266E8C85879FE123265CACC95AE *)L_175);
			Texture_set_wrapModeV_mCD51C11B4C90D7508113C744EDC09D04059403E5((Texture_t9FE0218A1EEDF266E8C85879FE123265CACC95AE *)L_175, (int32_t)L_177, /*hidden argument*/NULL);
			// break;
			goto IL_0721;
		}

IL_0631:
		{
			// instance.wrapModeW = reader.Read<UnityEngine.TextureWrapMode>();
			RenderTexture_t5FE7A5B47EF962A0E8D7BEBA05E9FC87D49A1849 * L_178 = V_0;
			ES3Reader_t2780AF8AA61DA2A817115CEF8612AC0E494D03C9 * L_179 = ___reader0;
			NullCheck((ES3Reader_t2780AF8AA61DA2A817115CEF8612AC0E494D03C9 *)L_179);
			int32_t L_180;
			L_180 = GenericVirtFuncInvoker0< int32_t >::Invoke(ES3Reader_Read_TisTextureWrapMode_t86DDA8206E4AA784A1218D0DE3C5F6826D7549EB_m7926E449CD0B8BD56E5BF145DD0CCFE1C567F107_RuntimeMethod_var, (ES3Reader_t2780AF8AA61DA2A817115CEF8612AC0E494D03C9 *)L_179);
			NullCheck((Texture_t9FE0218A1EEDF266E8C85879FE123265CACC95AE *)L_178);
			Texture_set_wrapModeW_m72C3239EA12A51D5031BD2A66C5E7B178EE9F65B((Texture_t9FE0218A1EEDF266E8C85879FE123265CACC95AE *)L_178, (int32_t)L_180, /*hidden argument*/NULL);
			// break;
			goto IL_0721;
		}

IL_0642:
		{
			// instance.filterMode = reader.Read<UnityEngine.FilterMode>();
			RenderTexture_t5FE7A5B47EF962A0E8D7BEBA05E9FC87D49A1849 * L_181 = V_0;
			ES3Reader_t2780AF8AA61DA2A817115CEF8612AC0E494D03C9 * L_182 = ___reader0;
			NullCheck((ES3Reader_t2780AF8AA61DA2A817115CEF8612AC0E494D03C9 *)L_182);
			int32_t L_183;
			L_183 = GenericVirtFuncInvoker0< int32_t >::Invoke(ES3Reader_Read_TisFilterMode_tE90A08FD96A142C761463D65E524BCDBFEEE3D19_m9819C2A442797B4060B0D9A80CFA96CFD6102839_RuntimeMethod_var, (ES3Reader_t2780AF8AA61DA2A817115CEF8612AC0E494D03C9 *)L_182);
			NullCheck((Texture_t9FE0218A1EEDF266E8C85879FE123265CACC95AE *)L_181);
			Texture_set_filterMode_m045141DB0FEFE496885D45F5F23B15BC0E77C8D0((Texture_t9FE0218A1EEDF266E8C85879FE123265CACC95AE *)L_181, (int32_t)L_183, /*hidden argument*/NULL);
			// break;
			goto IL_0721;
		}

IL_0653:
		{
			// instance.anisoLevel = reader.Read<System.Int32>(ES3Type_int.Instance);
			RenderTexture_t5FE7A5B47EF962A0E8D7BEBA05E9FC87D49A1849 * L_184 = V_0;
			ES3Reader_t2780AF8AA61DA2A817115CEF8612AC0E494D03C9 * L_185 = ___reader0;
			IL2CPP_RUNTIME_CLASS_INIT(ES3Type_int_tF64C15D40AD0CC7C15BCD1CEC3C5C6BF837BD167_il2cpp_TypeInfo_var);
			ES3Type_t8FBECB7AE75168648B9524E0C2A38DAD4555421D * L_186 = ((ES3Type_int_tF64C15D40AD0CC7C15BCD1CEC3C5C6BF837BD167_StaticFields*)il2cpp_codegen_static_fields_for(ES3Type_int_tF64C15D40AD0CC7C15BCD1CEC3C5C6BF837BD167_il2cpp_TypeInfo_var))->get_Instance_12();
			NullCheck((ES3Reader_t2780AF8AA61DA2A817115CEF8612AC0E494D03C9 *)L_185);
			int32_t L_187;
			L_187 = GenericVirtFuncInvoker1< int32_t, ES3Type_t8FBECB7AE75168648B9524E0C2A38DAD4555421D * >::Invoke(ES3Reader_Read_TisInt32_tFDE5F8CD43D10453F6A2E0C77FE48C6CC7009046_m2B74AA6627F5B1D21171D56C42F71DE5A7C1B4A6_RuntimeMethod_var, (ES3Reader_t2780AF8AA61DA2A817115CEF8612AC0E494D03C9 *)L_185, (ES3Type_t8FBECB7AE75168648B9524E0C2A38DAD4555421D *)L_186);
			NullCheck((Texture_t9FE0218A1EEDF266E8C85879FE123265CACC95AE *)L_184);
			Texture_set_anisoLevel_mE51360F6CD0562FD6355F8C0509B70A454CB33BE((Texture_t9FE0218A1EEDF266E8C85879FE123265CACC95AE *)L_184, (int32_t)L_187, /*hidden argument*/NULL);
			// break;
			goto IL_0721;
		}

IL_0669:
		{
			// instance.mipMapBias = reader.Read<System.Single>(ES3Type_float.Instance);
			RenderTexture_t5FE7A5B47EF962A0E8D7BEBA05E9FC87D49A1849 * L_188 = V_0;
			ES3Reader_t2780AF8AA61DA2A817115CEF8612AC0E494D03C9 * L_189 = ___reader0;
			IL2CPP_RUNTIME_CLASS_INIT(ES3Type_float_tF86B773C86731BD9AD79448B860BBB178FE77644_il2cpp_TypeInfo_var);
			ES3Type_t8FBECB7AE75168648B9524E0C2A38DAD4555421D * L_190 = ((ES3Type_float_tF86B773C86731BD9AD79448B860BBB178FE77644_StaticFields*)il2cpp_codegen_static_fields_for(ES3Type_float_tF86B773C86731BD9AD79448B860BBB178FE77644_il2cpp_TypeInfo_var))->get_Instance_12();
			NullCheck((ES3Reader_t2780AF8AA61DA2A817115CEF8612AC0E494D03C9 *)L_189);
			float L_191;
			L_191 = GenericVirtFuncInvoker1< float, ES3Type_t8FBECB7AE75168648B9524E0C2A38DAD4555421D * >::Invoke(ES3Reader_Read_TisSingle_tE07797BA3C98D4CA9B5A19413C19A76688AB899E_m4A0416374498BDA042B8EB21E49B72326D6CE5F4_RuntimeMethod_var, (ES3Reader_t2780AF8AA61DA2A817115CEF8612AC0E494D03C9 *)L_189, (ES3Type_t8FBECB7AE75168648B9524E0C2A38DAD4555421D *)L_190);
			NullCheck((Texture_t9FE0218A1EEDF266E8C85879FE123265CACC95AE *)L_188);
			Texture_set_mipMapBias_m5057ADA9DBA8E8E30EC15EA5BABFA0734CE2821C((Texture_t9FE0218A1EEDF266E8C85879FE123265CACC95AE *)L_188, (float)L_191, /*hidden argument*/NULL);
			// break;
			goto IL_0721;
		}

IL_067f:
		{
			// instance.name = reader.Read<System.String>(ES3Type_string.Instance);
			RenderTexture_t5FE7A5B47EF962A0E8D7BEBA05E9FC87D49A1849 * L_192 = V_0;
			ES3Reader_t2780AF8AA61DA2A817115CEF8612AC0E494D03C9 * L_193 = ___reader0;
			IL2CPP_RUNTIME_CLASS_INIT(ES3Type_string_tC47BFBE3CC816F3C70B51558C68F0C6470C5EFE5_il2cpp_TypeInfo_var);
			ES3Type_t8FBECB7AE75168648B9524E0C2A38DAD4555421D * L_194 = ((ES3Type_string_tC47BFBE3CC816F3C70B51558C68F0C6470C5EFE5_StaticFields*)il2cpp_codegen_static_fields_for(ES3Type_string_tC47BFBE3CC816F3C70B51558C68F0C6470C5EFE5_il2cpp_TypeInfo_var))->get_Instance_12();
			NullCheck((ES3Reader_t2780AF8AA61DA2A817115CEF8612AC0E494D03C9 *)L_193);
			String_t* L_195;
			L_195 = GenericVirtFuncInvoker1< String_t*, ES3Type_t8FBECB7AE75168648B9524E0C2A38DAD4555421D * >::Invoke(ES3Reader_Read_TisString_t_m883861F3B58239392073ABF39876826EEB87DF9C_RuntimeMethod_var, (ES3Reader_t2780AF8AA61DA2A817115CEF8612AC0E494D03C9 *)L_193, (ES3Type_t8FBECB7AE75168648B9524E0C2A38DAD4555421D *)L_194);
			NullCheck((Object_tF2F3778131EFF286AF62B7B013A170F95A91571A *)L_192);
			Object_set_name_m87C4006618ADB325ABE5439DF159E10DD8DD0781((Object_tF2F3778131EFF286AF62B7B013A170F95A91571A *)L_192, (String_t*)L_195, /*hidden argument*/NULL);
			// break;
			goto IL_0721;
		}

IL_0695:
		{
			// instance.vrUsage = reader.Read<UnityEngine.VRTextureUsage>();
			RenderTexture_t5FE7A5B47EF962A0E8D7BEBA05E9FC87D49A1849 * L_196 = V_0;
			ES3Reader_t2780AF8AA61DA2A817115CEF8612AC0E494D03C9 * L_197 = ___reader0;
			NullCheck((ES3Reader_t2780AF8AA61DA2A817115CEF8612AC0E494D03C9 *)L_197);
			int32_t L_198;
			L_198 = GenericVirtFuncInvoker0< int32_t >::Invoke(ES3Reader_Read_TisVRTextureUsage_t3C09DF3DD90B5620BC0AB6F8078DFEF4E607F645_m7DE3966E4815BB13132866CB005EEE5B90FF51C2_RuntimeMethod_var, (ES3Reader_t2780AF8AA61DA2A817115CEF8612AC0E494D03C9 *)L_197);
			NullCheck((RenderTexture_t5FE7A5B47EF962A0E8D7BEBA05E9FC87D49A1849 *)L_196);
			RenderTexture_set_vrUsage_m9AF7F60442E3B933FDF274D801EA074D1A5ECB71((RenderTexture_t5FE7A5B47EF962A0E8D7BEBA05E9FC87D49A1849 *)L_196, (int32_t)L_198, /*hidden argument*/NULL);
			// break;
			goto IL_0721;
		}

IL_06a3:
		{
			// instance.graphicsFormat = reader.Read<UnityEngine.Experimental.Rendering.GraphicsFormat>();
			RenderTexture_t5FE7A5B47EF962A0E8D7BEBA05E9FC87D49A1849 * L_199 = V_0;
			ES3Reader_t2780AF8AA61DA2A817115CEF8612AC0E494D03C9 * L_200 = ___reader0;
			NullCheck((ES3Reader_t2780AF8AA61DA2A817115CEF8612AC0E494D03C9 *)L_200);
			int32_t L_201;
			L_201 = GenericVirtFuncInvoker0< int32_t >::Invoke(ES3Reader_Read_TisGraphicsFormat_t07A3C024BC77B843C53A369D6FC02ABD27D2AB1D_mCBD36004B10F649C93215AB4717F6F0D7118BF7D_RuntimeMethod_var, (ES3Reader_t2780AF8AA61DA2A817115CEF8612AC0E494D03C9 *)L_200);
			NullCheck((RenderTexture_t5FE7A5B47EF962A0E8D7BEBA05E9FC87D49A1849 *)L_199);
			RenderTexture_set_graphicsFormat_mA378AAD8BD876EE96637FF0A80A2AFEA4D852FAB((RenderTexture_t5FE7A5B47EF962A0E8D7BEBA05E9FC87D49A1849 *)L_199, (int32_t)L_201, /*hidden argument*/NULL);
			// break;
			goto IL_0721;
		}

IL_06b1:
		{
			// instance.stencilFormat = reader.Read<UnityEngine.Experimental.Rendering.GraphicsFormat>();
			RenderTexture_t5FE7A5B47EF962A0E8D7BEBA05E9FC87D49A1849 * L_202 = V_0;
			ES3Reader_t2780AF8AA61DA2A817115CEF8612AC0E494D03C9 * L_203 = ___reader0;
			NullCheck((ES3Reader_t2780AF8AA61DA2A817115CEF8612AC0E494D03C9 *)L_203);
			int32_t L_204;
			L_204 = GenericVirtFuncInvoker0< int32_t >::Invoke(ES3Reader_Read_TisGraphicsFormat_t07A3C024BC77B843C53A369D6FC02ABD27D2AB1D_mCBD36004B10F649C93215AB4717F6F0D7118BF7D_RuntimeMethod_var, (ES3Reader_t2780AF8AA61DA2A817115CEF8612AC0E494D03C9 *)L_203);
			NullCheck((RenderTexture_t5FE7A5B47EF962A0E8D7BEBA05E9FC87D49A1849 *)L_202);
			RenderTexture_set_stencilFormat_m7C6E21FCDB7E786D403CFC9775105B050EFF19C7((RenderTexture_t5FE7A5B47EF962A0E8D7BEBA05E9FC87D49A1849 *)L_202, (int32_t)L_204, /*hidden argument*/NULL);
			// break;
			goto IL_0721;
		}

IL_06bf:
		{
			// instance.bindTextureMS = reader.Read<System.Boolean>(ES3Type_bool.Instance);
			RenderTexture_t5FE7A5B47EF962A0E8D7BEBA05E9FC87D49A1849 * L_205 = V_0;
			ES3Reader_t2780AF8AA61DA2A817115CEF8612AC0E494D03C9 * L_206 = ___reader0;
			IL2CPP_RUNTIME_CLASS_INIT(ES3Type_bool_t8F309F7B9CC735FF1DEE68081B6E3CAB367745F4_il2cpp_TypeInfo_var);
			ES3Type_t8FBECB7AE75168648B9524E0C2A38DAD4555421D * L_207 = ((ES3Type_bool_t8F309F7B9CC735FF1DEE68081B6E3CAB367745F4_StaticFields*)il2cpp_codegen_static_fields_for(ES3Type_bool_t8F309F7B9CC735FF1DEE68081B6E3CAB367745F4_il2cpp_TypeInfo_var))->get_Instance_12();
			NullCheck((ES3Reader_t2780AF8AA61DA2A817115CEF8612AC0E494D03C9 *)L_206);
			bool L_208;
			L_208 = GenericVirtFuncInvoker1< bool, ES3Type_t8FBECB7AE75168648B9524E0C2A38DAD4555421D * >::Invoke(ES3Reader_Read_TisBoolean_t07D1E3F34E4813023D64F584DFF7B34C9D922F37_mC6D1B158268FF9B97822FF9F5B37FB1723FEDA22_RuntimeMethod_var, (ES3Reader_t2780AF8AA61DA2A817115CEF8612AC0E494D03C9 *)L_206, (ES3Type_t8FBECB7AE75168648B9524E0C2A38DAD4555421D *)L_207);
			NullCheck((RenderTexture_t5FE7A5B47EF962A0E8D7BEBA05E9FC87D49A1849 *)L_205);
			RenderTexture_set_bindTextureMS_m6C26F6AB2DE8FE81BFCA60C936AA08EA7F1A7177((RenderTexture_t5FE7A5B47EF962A0E8D7BEBA05E9FC87D49A1849 *)L_205, (bool)L_208, /*hidden argument*/NULL);
			// break;
			goto IL_0721;
		}

IL_06d2:
		{
			// instance.useDynamicScale = reader.Read<System.Boolean>(ES3Type_bool.Instance);
			RenderTexture_t5FE7A5B47EF962A0E8D7BEBA05E9FC87D49A1849 * L_209 = V_0;
			ES3Reader_t2780AF8AA61DA2A817115CEF8612AC0E494D03C9 * L_210 = ___reader0;
			IL2CPP_RUNTIME_CLASS_INIT(ES3Type_bool_t8F309F7B9CC735FF1DEE68081B6E3CAB367745F4_il2cpp_TypeInfo_var);
			ES3Type_t8FBECB7AE75168648B9524E0C2A38DAD4555421D * L_211 = ((ES3Type_bool_t8F309F7B9CC735FF1DEE68081B6E3CAB367745F4_StaticFields*)il2cpp_codegen_static_fields_for(ES3Type_bool_t8F309F7B9CC735FF1DEE68081B6E3CAB367745F4_il2cpp_TypeInfo_var))->get_Instance_12();
			NullCheck((ES3Reader_t2780AF8AA61DA2A817115CEF8612AC0E494D03C9 *)L_210);
			bool L_212;
			L_212 = GenericVirtFuncInvoker1< bool, ES3Type_t8FBECB7AE75168648B9524E0C2A38DAD4555421D * >::Invoke(ES3Reader_Read_TisBoolean_t07D1E3F34E4813023D64F584DFF7B34C9D922F37_mC6D1B158268FF9B97822FF9F5B37FB1723FEDA22_RuntimeMethod_var, (ES3Reader_t2780AF8AA61DA2A817115CEF8612AC0E494D03C9 *)L_210, (ES3Type_t8FBECB7AE75168648B9524E0C2A38DAD4555421D *)L_211);
			NullCheck((RenderTexture_t5FE7A5B47EF962A0E8D7BEBA05E9FC87D49A1849 *)L_209);
			RenderTexture_set_useDynamicScale_m8F96571C7EDBEFAB9278E04A3F3EB67067A5AE29((RenderTexture_t5FE7A5B47EF962A0E8D7BEBA05E9FC87D49A1849 *)L_209, (bool)L_212, /*hidden argument*/NULL);
			// break;
			goto IL_0721;
		}

IL_06e5:
		{
			// UnityEngine.RenderTexture.streamingTextureForceLoadAll = reader.Read<System.Boolean>(ES3Type_bool.Instance);
			ES3Reader_t2780AF8AA61DA2A817115CEF8612AC0E494D03C9 * L_213 = ___reader0;
			IL2CPP_RUNTIME_CLASS_INIT(ES3Type_bool_t8F309F7B9CC735FF1DEE68081B6E3CAB367745F4_il2cpp_TypeInfo_var);
			ES3Type_t8FBECB7AE75168648B9524E0C2A38DAD4555421D * L_214 = ((ES3Type_bool_t8F309F7B9CC735FF1DEE68081B6E3CAB367745F4_StaticFields*)il2cpp_codegen_static_fields_for(ES3Type_bool_t8F309F7B9CC735FF1DEE68081B6E3CAB367745F4_il2cpp_TypeInfo_var))->get_Instance_12();
			NullCheck((ES3Reader_t2780AF8AA61DA2A817115CEF8612AC0E494D03C9 *)L_213);
			bool L_215;
			L_215 = GenericVirtFuncInvoker1< bool, ES3Type_t8FBECB7AE75168648B9524E0C2A38DAD4555421D * >::Invoke(ES3Reader_Read_TisBoolean_t07D1E3F34E4813023D64F584DFF7B34C9D922F37_mC6D1B158268FF9B97822FF9F5B37FB1723FEDA22_RuntimeMethod_var, (ES3Reader_t2780AF8AA61DA2A817115CEF8612AC0E494D03C9 *)L_213, (ES3Type_t8FBECB7AE75168648B9524E0C2A38DAD4555421D *)L_214);
			IL2CPP_RUNTIME_CLASS_INIT(Texture_t9FE0218A1EEDF266E8C85879FE123265CACC95AE_il2cpp_TypeInfo_var);
			Texture_set_streamingTextureForceLoadAll_m325117C0830BB9B4316CF41CEE045759FC52B7A3((bool)L_215, /*hidden argument*/NULL);
			// break;
			goto IL_0721;
		}

IL_06f7:
		{
			// UnityEngine.RenderTexture.streamingTextureDiscardUnusedMips = reader.Read<System.Boolean>(ES3Type_bool.Instance);
			ES3Reader_t2780AF8AA61DA2A817115CEF8612AC0E494D03C9 * L_216 = ___reader0;
			IL2CPP_RUNTIME_CLASS_INIT(ES3Type_bool_t8F309F7B9CC735FF1DEE68081B6E3CAB367745F4_il2cpp_TypeInfo_var);
			ES3Type_t8FBECB7AE75168648B9524E0C2A38DAD4555421D * L_217 = ((ES3Type_bool_t8F309F7B9CC735FF1DEE68081B6E3CAB367745F4_StaticFields*)il2cpp_codegen_static_fields_for(ES3Type_bool_t8F309F7B9CC735FF1DEE68081B6E3CAB367745F4_il2cpp_TypeInfo_var))->get_Instance_12();
			NullCheck((ES3Reader_t2780AF8AA61DA2A817115CEF8612AC0E494D03C9 *)L_216);
			bool L_218;
			L_218 = GenericVirtFuncInvoker1< bool, ES3Type_t8FBECB7AE75168648B9524E0C2A38DAD4555421D * >::Invoke(ES3Reader_Read_TisBoolean_t07D1E3F34E4813023D64F584DFF7B34C9D922F37_mC6D1B158268FF9B97822FF9F5B37FB1723FEDA22_RuntimeMethod_var, (ES3Reader_t2780AF8AA61DA2A817115CEF8612AC0E494D03C9 *)L_216, (ES3Type_t8FBECB7AE75168648B9524E0C2A38DAD4555421D *)L_217);
			IL2CPP_RUNTIME_CLASS_INIT(Texture_t9FE0218A1EEDF266E8C85879FE123265CACC95AE_il2cpp_TypeInfo_var);
			Texture_set_streamingTextureDiscardUnusedMips_mE184CE016A8E0319B437D34E0DB61962CE17F5DC((bool)L_218, /*hidden argument*/NULL);
			// break;
			goto IL_0721;
		}

IL_0709:
		{
			// UnityEngine.RenderTexture.allowThreadedTextureCreation = reader.Read<System.Boolean>(ES3Type_bool.Instance);
			ES3Reader_t2780AF8AA61DA2A817115CEF8612AC0E494D03C9 * L_219 = ___reader0;
			IL2CPP_RUNTIME_CLASS_INIT(ES3Type_bool_t8F309F7B9CC735FF1DEE68081B6E3CAB367745F4_il2cpp_TypeInfo_var);
			ES3Type_t8FBECB7AE75168648B9524E0C2A38DAD4555421D * L_220 = ((ES3Type_bool_t8F309F7B9CC735FF1DEE68081B6E3CAB367745F4_StaticFields*)il2cpp_codegen_static_fields_for(ES3Type_bool_t8F309F7B9CC735FF1DEE68081B6E3CAB367745F4_il2cpp_TypeInfo_var))->get_Instance_12();
			NullCheck((ES3Reader_t2780AF8AA61DA2A817115CEF8612AC0E494D03C9 *)L_219);
			bool L_221;
			L_221 = GenericVirtFuncInvoker1< bool, ES3Type_t8FBECB7AE75168648B9524E0C2A38DAD4555421D * >::Invoke(ES3Reader_Read_TisBoolean_t07D1E3F34E4813023D64F584DFF7B34C9D922F37_mC6D1B158268FF9B97822FF9F5B37FB1723FEDA22_RuntimeMethod_var, (ES3Reader_t2780AF8AA61DA2A817115CEF8612AC0E494D03C9 *)L_219, (ES3Type_t8FBECB7AE75168648B9524E0C2A38DAD4555421D *)L_220);
			IL2CPP_RUNTIME_CLASS_INIT(Texture_t9FE0218A1EEDF266E8C85879FE123265CACC95AE_il2cpp_TypeInfo_var);
			Texture_set_allowThreadedTextureCreation_m84D29394912B9CE876023963426256CBEB15A52E((bool)L_221, /*hidden argument*/NULL);
			// break;
			goto IL_0721;
		}

IL_071b:
		{
			// reader.Skip();
			ES3Reader_t2780AF8AA61DA2A817115CEF8612AC0E494D03C9 * L_222 = ___reader0;
			NullCheck((ES3Reader_t2780AF8AA61DA2A817115CEF8612AC0E494D03C9 *)L_222);
			VirtActionInvoker0::Invoke(41 /* System.Void ES3Reader::Skip() */, (ES3Reader_t2780AF8AA61DA2A817115CEF8612AC0E494D03C9 *)L_222);
		}

IL_0721:
		{
			// foreach (string propertyName in reader.Properties)
			RuntimeObject* L_223 = V_1;
			NullCheck((RuntimeObject*)L_223);
			bool L_224;
			L_224 = InterfaceFuncInvoker0< bool >::Invoke(0 /* System.Boolean System.Collections.IEnumerator::MoveNext() */, IEnumerator_t5956F3AFB7ECF1117E3BC5890E7FC7B7F7A04105_il2cpp_TypeInfo_var, (RuntimeObject*)L_223);
			if (L_224)
			{
				goto IL_0018;
			}
		}

IL_072c:
		{
			IL2CPP_LEAVE(0x742, FINALLY_072e);
		}
	} // end try (depth: 1)
	catch(Il2CppExceptionWrapper& e)
	{
		__last_unhandled_exception = (Exception_t *)e.ex;
		goto FINALLY_072e;
	}

FINALLY_072e:
	{ // begin finally (depth: 1)
		{
			RuntimeObject* L_225 = V_1;
			V_4 = (RuntimeObject*)((RuntimeObject*)IsInst((RuntimeObject*)L_225, IDisposable_t099785737FC6A1E3699919A94109383715A8D807_il2cpp_TypeInfo_var));
			RuntimeObject* L_226 = V_4;
			if (!L_226)
			{
				goto IL_0741;
			}
		}

IL_073a:
		{
			RuntimeObject* L_227 = V_4;
			NullCheck((RuntimeObject*)L_227);
			InterfaceActionInvoker0::Invoke(0 /* System.Void System.IDisposable::Dispose() */, IDisposable_t099785737FC6A1E3699919A94109383715A8D807_il2cpp_TypeInfo_var, (RuntimeObject*)L_227);
		}

IL_0741:
		{
			IL2CPP_END_FINALLY(1838)
		}
	} // end finally (depth: 1)
	IL2CPP_CLEANUP(1838)
	{
		IL2CPP_RETHROW_IF_UNHANDLED(Exception_t *)
		IL2CPP_JUMP_TBL(0x742, IL_0742)
	}

IL_0742:
	{
		// }
		return;
	}
}
// System.Void ES3Types.ES3Type_RenderTexture::ReadObject<UnityEngine.ParticleSystem/ShapeModule>(ES3Reader,System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ES3Type_RenderTexture_ReadObject_TisShapeModule_t3A89D143F5CAF357ECCE8B4A4F2BBD57816F98CA_m0EC33952A574D2193D8F5140E8B9725BD04A59AE_gshared (ES3Type_RenderTexture_t7B14573C56809AFDC0A1C481D6B61E2146DEF194 * __this, ES3Reader_t2780AF8AA61DA2A817115CEF8612AC0E494D03C9 * ___reader0, RuntimeObject * ___obj1, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ES3Reader_Read_TisAnisotropicFiltering_tAC3D1448B262D5869946CD1CDD2C8DAE3A7A537B_mAF1268AAC3E461D6E0604A19FAF0325873B6EC8A_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ES3Reader_Read_TisBoolean_t07D1E3F34E4813023D64F584DFF7B34C9D922F37_mC6D1B158268FF9B97822FF9F5B37FB1723FEDA22_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ES3Reader_Read_TisFilterMode_tE90A08FD96A142C761463D65E524BCDBFEEE3D19_m9819C2A442797B4060B0D9A80CFA96CFD6102839_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ES3Reader_Read_TisGraphicsFormat_t07A3C024BC77B843C53A369D6FC02ABD27D2AB1D_mCBD36004B10F649C93215AB4717F6F0D7118BF7D_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ES3Reader_Read_TisInt32_tFDE5F8CD43D10453F6A2E0C77FE48C6CC7009046_m2B74AA6627F5B1D21171D56C42F71DE5A7C1B4A6_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ES3Reader_Read_TisRenderTextureDescriptor_t67FF189E1F35AEB5D6C43A2D7103F3A8A8CA0B47_m427886ADAAF96C7BA9BD423544128494F96D69E7_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ES3Reader_Read_TisRenderTextureFormat_t8371287102ED67772EF78229CF4AB9D38C2CD626_mE6358E03407F5C15B58B292C79D4770DE3FAC95A_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ES3Reader_Read_TisRenderTextureMemoryless_t37547D68C2186D2650440F719302CDA4A3BB7F67_m3A980BA15AADBBB8393C3BC88CE17EEDDC89B027_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ES3Reader_Read_TisSingle_tE07797BA3C98D4CA9B5A19413C19A76688AB899E_m4A0416374498BDA042B8EB21E49B72326D6CE5F4_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ES3Reader_Read_TisString_t_m883861F3B58239392073ABF39876826EEB87DF9C_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ES3Reader_Read_TisTextureDimension_tADCCB7C1D30E4D1182651BA9094B4DE61B63EACC_m19EAA3B93D10636C17A62A3D8437349223CFD988_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ES3Reader_Read_TisTextureWrapMode_t86DDA8206E4AA784A1218D0DE3C5F6826D7549EB_m7926E449CD0B8BD56E5BF145DD0CCFE1C567F107_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ES3Reader_Read_TisVRTextureUsage_t3C09DF3DD90B5620BC0AB6F8078DFEF4E607F645_m7DE3966E4815BB13132866CB005EEE5B90FF51C2_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ES3Type_bool_t8F309F7B9CC735FF1DEE68081B6E3CAB367745F4_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ES3Type_float_tF86B773C86731BD9AD79448B860BBB178FE77644_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ES3Type_int_tF64C15D40AD0CC7C15BCD1CEC3C5C6BF837BD167_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ES3Type_string_tC47BFBE3CC816F3C70B51558C68F0C6470C5EFE5_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IDisposable_t099785737FC6A1E3699919A94109383715A8D807_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IEnumerator_t5956F3AFB7ECF1117E3BC5890E7FC7B7F7A04105_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&RenderTexture_t5FE7A5B47EF962A0E8D7BEBA05E9FC87D49A1849_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&String_t_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Texture_t9FE0218A1EEDF266E8C85879FE123265CACC95AE_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral201D9D00BB60DC2318D21CF9902290EFE255D5DC);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral2ADFC3FFF7C52D554F0435A348A5345C9FCD7FF8);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral2E201D1972661439FD3C8523C55723E7E9BCC7DA);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral2EE7B6B0E37E14930BBA497867139BFD0617CE04);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral3A04F86957625CB28FA670EECF997E6BAD45BBE7);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral3BC15E3C2F40466B2DC85C4776499817B8306CBB);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral3F1522C8DB7943F2AE3AA1563D3AC25D9C8B93D1);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral53D3413057D7E52F44470A335C590748745352B1);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral647E0FB2B5E859CC4BD7C73623B82C8EFABA2563);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral65B008F04EC40A696263EF679CF274BD10999A5D);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral71C5F9C3E2F3C81C5BBC7FD313F6938654E61138);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral75C9716749EA210206E3467390B7A11F3F33DDFA);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral7606720A7AEF5939309A8E4FCB8274252FA3D7BF);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral7A4A6E2A7090298F814A9D44C89F8634249BEF07);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral7FF61C3A55BCA1287974D8740F945250B3F0F084);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral83AC9669A9053DD15B9F2E82D2CE2369EFE131BA);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral95F57476C0AA778364404E7CCCD7499BF1BF3757);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral9AB5ADF8A8A53110245466F7C226F7935F5FE95F);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralB49A1DF483856544CEC6018E8C944DB6E16A8D57);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralBA9362732D25B1644B7D8DEC5DF6F036A4A66DE5);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralC959D767B7F0BD38D9DA8A64A4750C3A0972E2A0);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralCD44AC57FFE6CAC7824F4CAA223F1BB8B4CB0D73);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralCE18B047107AA23D1AA9B2ED32D316148E02655F);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralEA8FBF382D8AC9EDB8FFC14A350641B987F5C631);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralEBF5FE0CBF3EEA67902EEA700B7216E3DB0D8E84);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralECAEEB225F8689DE45DEB4FA21CE34E1960B1B50);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralF23E83744C9D6FC70D71B723AAED8006D6780BCB);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralF2AF7DD0BFF41B7B35037F018DAABE7DCF357A7B);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralF38CFAE6A91D072D4453C29FF44D81D459A582F1);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralF3FA58C10BBB9830102605E24AF89DC619908DFA);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralF9EE582B77C320A1F6A3DF72205857C4248BAC79);
		s_Il2CppMethodInitialized = true;
	}
	RenderTexture_t5FE7A5B47EF962A0E8D7BEBA05E9FC87D49A1849 * V_0 = NULL;
	RuntimeObject* V_1 = NULL;
	String_t* V_2 = NULL;
	uint32_t V_3 = 0;
	RuntimeObject* V_4 = NULL;
	Exception_t * __last_unhandled_exception = 0;
	il2cpp::utils::ExceptionSupportStack<int32_t, 1> __leave_targets;
	{
		// var instance = (UnityEngine.RenderTexture)obj;
		RuntimeObject * L_0 = ___obj1;
		V_0 = (RenderTexture_t5FE7A5B47EF962A0E8D7BEBA05E9FC87D49A1849 *)((RenderTexture_t5FE7A5B47EF962A0E8D7BEBA05E9FC87D49A1849 *)Castclass((RuntimeObject*)L_0, RenderTexture_t5FE7A5B47EF962A0E8D7BEBA05E9FC87D49A1849_il2cpp_TypeInfo_var));
		// foreach (string propertyName in reader.Properties)
		ES3Reader_t2780AF8AA61DA2A817115CEF8612AC0E494D03C9 * L_1 = ___reader0;
		NullCheck((ES3Reader_t2780AF8AA61DA2A817115CEF8612AC0E494D03C9 *)L_1);
		ES3ReaderPropertyEnumerator_tFC854F4BE72BFA234682EB1909D92457534A979D * L_2;
		L_2 = VirtFuncInvoker0< ES3ReaderPropertyEnumerator_tFC854F4BE72BFA234682EB1909D92457534A979D * >::Invoke(39 /* ES3Reader/ES3ReaderPropertyEnumerator ES3Reader::get_Properties() */, (ES3Reader_t2780AF8AA61DA2A817115CEF8612AC0E494D03C9 *)L_1);
		NullCheck((ES3ReaderPropertyEnumerator_tFC854F4BE72BFA234682EB1909D92457534A979D *)L_2);
		RuntimeObject* L_3;
		L_3 = ES3ReaderPropertyEnumerator_GetEnumerator_m6C61168655E3736E7847E5CB1CD9BC6B48442FD4((ES3ReaderPropertyEnumerator_tFC854F4BE72BFA234682EB1909D92457534A979D *)L_2, /*hidden argument*/NULL);
		V_1 = (RuntimeObject*)L_3;
	}

IL_0013:
	try
	{ // begin try (depth: 1)
		{
			goto IL_0721;
		}

IL_0018:
		{
			// foreach (string propertyName in reader.Properties)
			RuntimeObject* L_4 = V_1;
			NullCheck((RuntimeObject*)L_4);
			RuntimeObject * L_5;
			L_5 = InterfaceFuncInvoker0< RuntimeObject * >::Invoke(1 /* System.Object System.Collections.IEnumerator::get_Current() */, IEnumerator_t5956F3AFB7ECF1117E3BC5890E7FC7B7F7A04105_il2cpp_TypeInfo_var, (RuntimeObject*)L_4);
			V_2 = (String_t*)((String_t*)Castclass((RuntimeObject*)L_5, String_t_il2cpp_TypeInfo_var));
			String_t* L_6 = V_2;
			if (!L_6)
			{
				goto IL_071b;
			}
		}

IL_002a:
		{
			String_t* L_7 = V_2;
			uint32_t L_8;
			L_8 = U3CPrivateImplementationDetailsU3E_ComputeStringHash_m3ADC1F612F9EE3DD518E6F0023A0DE0EE2B120A7((String_t*)L_7, /*hidden argument*/NULL);
			V_3 = (uint32_t)L_8;
			uint32_t L_9 = V_3;
			if ((!(((uint32_t)L_9) <= ((uint32_t)((int32_t)1508062721)))))
			{
				goto IL_0134;
			}
		}

IL_003c:
		{
			uint32_t L_10 = V_3;
			if ((!(((uint32_t)L_10) <= ((uint32_t)((int32_t)698754697)))))
			{
				goto IL_00b0;
			}
		}

IL_0044:
		{
			uint32_t L_11 = V_3;
			if ((!(((uint32_t)L_11) <= ((uint32_t)((int32_t)472844700)))))
			{
				goto IL_0072;
			}
		}

IL_004c:
		{
			uint32_t L_12 = V_3;
			if ((((int32_t)L_12) == ((int32_t)((int32_t)87590155))))
			{
				goto IL_043c;
			}
		}

IL_0057:
		{
			uint32_t L_13 = V_3;
			if ((((int32_t)L_13) == ((int32_t)((int32_t)301255720))))
			{
				goto IL_02d7;
			}
		}

IL_0062:
		{
			uint32_t L_14 = V_3;
			if ((((int32_t)L_14) == ((int32_t)((int32_t)472844700))))
			{
				goto IL_0283;
			}
		}

IL_006d:
		{
			goto IL_071b;
		}

IL_0072:
		{
			uint32_t L_15 = V_3;
			if ((!(((uint32_t)L_15) <= ((uint32_t)((int32_t)549791583)))))
			{
				goto IL_0095;
			}
		}

IL_007a:
		{
			uint32_t L_16 = V_3;
			if ((((int32_t)L_16) == ((int32_t)((int32_t)533013964))))
			{
				goto IL_03a9;
			}
		}

IL_0085:
		{
			uint32_t L_17 = V_3;
			if ((((int32_t)L_17) == ((int32_t)((int32_t)549791583))))
			{
				goto IL_03be;
			}
		}

IL_0090:
		{
			goto IL_071b;
		}

IL_0095:
		{
			uint32_t L_18 = V_3;
			if ((((int32_t)L_18) == ((int32_t)((int32_t)583346821))))
			{
				goto IL_0394;
			}
		}

IL_00a0:
		{
			uint32_t L_19 = V_3;
			if ((((int32_t)L_19) == ((int32_t)((int32_t)698754697))))
			{
				goto IL_02ec;
			}
		}

IL_00ab:
		{
			goto IL_071b;
		}

IL_00b0:
		{
			uint32_t L_20 = V_3;
			if ((!(((uint32_t)L_20) <= ((uint32_t)((int32_t)1235622516)))))
			{
				goto IL_00f6;
			}
		}

IL_00b8:
		{
			uint32_t L_21 = V_3;
			if ((!(((uint32_t)L_21) <= ((uint32_t)((int32_t)740612720)))))
			{
				goto IL_00db;
			}
		}

IL_00c0:
		{
			uint32_t L_22 = V_3;
			if ((((int32_t)L_22) == ((int32_t)((int32_t)705796271))))
			{
				goto IL_0316;
			}
		}

IL_00cb:
		{
			uint32_t L_23 = V_3;
			if ((((int32_t)L_23) == ((int32_t)((int32_t)740612720))))
			{
				goto IL_03d3;
			}
		}

IL_00d6:
		{
			goto IL_071b;
		}

IL_00db:
		{
			uint32_t L_24 = V_3;
			if ((((int32_t)L_24) == ((int32_t)((int32_t)1059843136))))
			{
				goto IL_0340;
			}
		}

IL_00e6:
		{
			uint32_t L_25 = V_3;
			if ((((int32_t)L_25) == ((int32_t)((int32_t)1235622516))))
			{
				goto IL_036a;
			}
		}

IL_00f1:
		{
			goto IL_071b;
		}

IL_00f6:
		{
			uint32_t L_26 = V_3;
			if ((!(((uint32_t)L_26) <= ((uint32_t)((int32_t)1320492961)))))
			{
				goto IL_0119;
			}
		}

IL_00fe:
		{
			uint32_t L_27 = V_3;
			if ((((int32_t)L_27) == ((int32_t)((int32_t)1310955452))))
			{
				goto IL_0490;
			}
		}

IL_0109:
		{
			uint32_t L_28 = V_3;
			if ((((int32_t)L_28) == ((int32_t)((int32_t)1320492961))))
			{
				goto IL_047b;
			}
		}

IL_0114:
		{
			goto IL_071b;
		}

IL_0119:
		{
			uint32_t L_29 = V_3;
			if ((((int32_t)L_29) == ((int32_t)((int32_t)1458352709))))
			{
				goto IL_0466;
			}
		}

IL_0124:
		{
			uint32_t L_30 = V_3;
			if ((((int32_t)L_30) == ((int32_t)((int32_t)1508062721))))
			{
				goto IL_04a5;
			}
		}

IL_012f:
		{
			goto IL_071b;
		}

IL_0134:
		{
			uint32_t L_31 = V_3;
			if ((!(((uint32_t)L_31) <= ((uint32_t)((int32_t)-1444332543)))))
			{
				goto IL_01c3;
			}
		}

IL_013f:
		{
			uint32_t L_32 = V_3;
			if ((!(((uint32_t)L_32) <= ((uint32_t)((int32_t)2129631044)))))
			{
				goto IL_0185;
			}
		}

IL_0147:
		{
			uint32_t L_33 = V_3;
			if ((!(((uint32_t)L_33) <= ((uint32_t)((int32_t)1640355324)))))
			{
				goto IL_016a;
			}
		}

IL_014f:
		{
			uint32_t L_34 = V_3;
			if ((((int32_t)L_34) == ((int32_t)((int32_t)1560124071))))
			{
				goto IL_04ba;
			}
		}

IL_015a:
		{
			uint32_t L_35 = V_3;
			if ((((int32_t)L_35) == ((int32_t)((int32_t)1640355324))))
			{
				goto IL_0451;
			}
		}

IL_0165:
		{
			goto IL_071b;
		}

IL_016a:
		{
			uint32_t L_36 = V_3;
			if ((((int32_t)L_36) == ((int32_t)((int32_t)1728801507))))
			{
				goto IL_026e;
			}
		}

IL_0175:
		{
			uint32_t L_37 = V_3;
			if ((((int32_t)L_37) == ((int32_t)((int32_t)2129631044))))
			{
				goto IL_03fd;
			}
		}

IL_0180:
		{
			goto IL_071b;
		}

IL_0185:
		{
			uint32_t L_38 = V_3;
			if ((!(((uint32_t)L_38) <= ((uint32_t)((int32_t)-1786286561)))))
			{
				goto IL_01a8;
			}
		}

IL_018d:
		{
			uint32_t L_39 = V_3;
			if ((((int32_t)L_39) == ((int32_t)((int32_t)-1925595674))))
			{
				goto IL_0412;
			}
		}

IL_0198:
		{
			uint32_t L_40 = V_3;
			if ((((int32_t)L_40) == ((int32_t)((int32_t)-1786286561))))
			{
				goto IL_0244;
			}
		}

IL_01a3:
		{
			goto IL_071b;
		}

IL_01a8:
		{
			uint32_t L_41 = V_3;
			if ((((int32_t)L_41) == ((int32_t)((int32_t)-1522491664))))
			{
				goto IL_0298;
			}
		}

IL_01b3:
		{
			uint32_t L_42 = V_3;
			if ((((int32_t)L_42) == ((int32_t)((int32_t)-1444332543))))
			{
				goto IL_0355;
			}
		}

IL_01be:
		{
			goto IL_071b;
		}

IL_01c3:
		{
			uint32_t L_43 = V_3;
			if ((!(((uint32_t)L_43) <= ((uint32_t)((int32_t)-558361902)))))
			{
				goto IL_0206;
			}
		}

IL_01cb:
		{
			uint32_t L_44 = V_3;
			if ((!(((uint32_t)L_44) <= ((uint32_t)((int32_t)-1180859054)))))
			{
				goto IL_01ee;
			}
		}

IL_01d3:
		{
			uint32_t L_45 = V_3;
			if ((((int32_t)L_45) == ((int32_t)((int32_t)-1335745110))))
			{
				goto IL_02c2;
			}
		}

IL_01de:
		{
			uint32_t L_46 = V_3;
			if ((((int32_t)L_46) == ((int32_t)((int32_t)-1180859054))))
			{
				goto IL_02ad;
			}
		}

IL_01e9:
		{
			goto IL_071b;
		}

IL_01ee:
		{
			uint32_t L_47 = V_3;
			if ((((int32_t)L_47) == ((int32_t)((int32_t)-708986046))))
			{
				goto IL_0259;
			}
		}

IL_01f6:
		{
			uint32_t L_48 = V_3;
			if ((((int32_t)L_48) == ((int32_t)((int32_t)-558361902))))
			{
				goto IL_037f;
			}
		}

IL_0201:
		{
			goto IL_071b;
		}

IL_0206:
		{
			uint32_t L_49 = V_3;
			if ((!(((uint32_t)L_49) <= ((uint32_t)((int32_t)-255211260)))))
			{
				goto IL_0229;
			}
		}

IL_020e:
		{
			uint32_t L_50 = V_3;
			if ((((int32_t)L_50) == ((int32_t)((int32_t)-345285761))))
			{
				goto IL_03e8;
			}
		}

IL_0219:
		{
			uint32_t L_51 = V_3;
			if ((((int32_t)L_51) == ((int32_t)((int32_t)-255211260))))
			{
				goto IL_0427;
			}
		}

IL_0224:
		{
			goto IL_071b;
		}

IL_0229:
		{
			uint32_t L_52 = V_3;
			if ((((int32_t)L_52) == ((int32_t)((int32_t)-42086080))))
			{
				goto IL_0301;
			}
		}

IL_0234:
		{
			uint32_t L_53 = V_3;
			if ((((int32_t)L_53) == ((int32_t)((int32_t)-25846038))))
			{
				goto IL_032b;
			}
		}

IL_023f:
		{
			goto IL_071b;
		}

IL_0244:
		{
			String_t* L_54 = V_2;
			bool L_55;
			L_55 = String_op_Equality_m50B3548E4AC232558190B0052877B290AA1D436A((String_t*)L_54, (String_t*)_stringLiteralEBF5FE0CBF3EEA67902EEA700B7216E3DB0D8E84, /*hidden argument*/NULL);
			if (L_55)
			{
				goto IL_04cf;
			}
		}

IL_0254:
		{
			goto IL_071b;
		}

IL_0259:
		{
			String_t* L_56 = V_2;
			bool L_57;
			L_57 = String_op_Equality_m50B3548E4AC232558190B0052877B290AA1D436A((String_t*)L_56, (String_t*)_stringLiteral647E0FB2B5E859CC4BD7C73623B82C8EFABA2563, /*hidden argument*/NULL);
			if (L_57)
			{
				goto IL_04e5;
			}
		}

IL_0269:
		{
			goto IL_071b;
		}

IL_026e:
		{
			String_t* L_58 = V_2;
			bool L_59;
			L_59 = String_op_Equality_m50B3548E4AC232558190B0052877B290AA1D436A((String_t*)L_58, (String_t*)_stringLiteralF9EE582B77C320A1F6A3DF72205857C4248BAC79, /*hidden argument*/NULL);
			if (L_59)
			{
				goto IL_04fb;
			}
		}

IL_027e:
		{
			goto IL_071b;
		}

IL_0283:
		{
			String_t* L_60 = V_2;
			bool L_61;
			L_61 = String_op_Equality_m50B3548E4AC232558190B0052877B290AA1D436A((String_t*)L_60, (String_t*)_stringLiteral53D3413057D7E52F44470A335C590748745352B1, /*hidden argument*/NULL);
			if (L_61)
			{
				goto IL_050c;
			}
		}

IL_0293:
		{
			goto IL_071b;
		}

IL_0298:
		{
			String_t* L_62 = V_2;
			bool L_63;
			L_63 = String_op_Equality_m50B3548E4AC232558190B0052877B290AA1D436A((String_t*)L_62, (String_t*)_stringLiteralC959D767B7F0BD38D9DA8A64A4750C3A0972E2A0, /*hidden argument*/NULL);
			if (L_63)
			{
				goto IL_0522;
			}
		}

IL_02a8:
		{
			goto IL_071b;
		}

IL_02ad:
		{
			String_t* L_64 = V_2;
			bool L_65;
			L_65 = String_op_Equality_m50B3548E4AC232558190B0052877B290AA1D436A((String_t*)L_64, (String_t*)_stringLiteral75C9716749EA210206E3467390B7A11F3F33DDFA, /*hidden argument*/NULL);
			if (L_65)
			{
				goto IL_0533;
			}
		}

IL_02bd:
		{
			goto IL_071b;
		}

IL_02c2:
		{
			String_t* L_66 = V_2;
			bool L_67;
			L_67 = String_op_Equality_m50B3548E4AC232558190B0052877B290AA1D436A((String_t*)L_66, (String_t*)_stringLiteral7606720A7AEF5939309A8E4FCB8274252FA3D7BF, /*hidden argument*/NULL);
			if (L_67)
			{
				goto IL_0544;
			}
		}

IL_02d2:
		{
			goto IL_071b;
		}

IL_02d7:
		{
			String_t* L_68 = V_2;
			bool L_69;
			L_69 = String_op_Equality_m50B3548E4AC232558190B0052877B290AA1D436A((String_t*)L_68, (String_t*)_stringLiteral71C5F9C3E2F3C81C5BBC7FD313F6938654E61138, /*hidden argument*/NULL);
			if (L_69)
			{
				goto IL_055a;
			}
		}

IL_02e7:
		{
			goto IL_071b;
		}

IL_02ec:
		{
			String_t* L_70 = V_2;
			bool L_71;
			L_71 = String_op_Equality_m50B3548E4AC232558190B0052877B290AA1D436A((String_t*)L_70, (String_t*)_stringLiteral3F1522C8DB7943F2AE3AA1563D3AC25D9C8B93D1, /*hidden argument*/NULL);
			if (L_71)
			{
				goto IL_0570;
			}
		}

IL_02fc:
		{
			goto IL_071b;
		}

IL_0301:
		{
			String_t* L_72 = V_2;
			bool L_73;
			L_73 = String_op_Equality_m50B3548E4AC232558190B0052877B290AA1D436A((String_t*)L_72, (String_t*)_stringLiteralF23E83744C9D6FC70D71B723AAED8006D6780BCB, /*hidden argument*/NULL);
			if (L_73)
			{
				goto IL_0586;
			}
		}

IL_0311:
		{
			goto IL_071b;
		}

IL_0316:
		{
			String_t* L_74 = V_2;
			bool L_75;
			L_75 = String_op_Equality_m50B3548E4AC232558190B0052877B290AA1D436A((String_t*)L_74, (String_t*)_stringLiteralB49A1DF483856544CEC6018E8C944DB6E16A8D57, /*hidden argument*/NULL);
			if (L_75)
			{
				goto IL_059c;
			}
		}

IL_0326:
		{
			goto IL_071b;
		}

IL_032b:
		{
			String_t* L_76 = V_2;
			bool L_77;
			L_77 = String_op_Equality_m50B3548E4AC232558190B0052877B290AA1D436A((String_t*)L_76, (String_t*)_stringLiteral3A04F86957625CB28FA670EECF997E6BAD45BBE7, /*hidden argument*/NULL);
			if (L_77)
			{
				goto IL_05b2;
			}
		}

IL_033b:
		{
			goto IL_071b;
		}

IL_0340:
		{
			String_t* L_78 = V_2;
			bool L_79;
			L_79 = String_op_Equality_m50B3548E4AC232558190B0052877B290AA1D436A((String_t*)L_78, (String_t*)_stringLiteral7A4A6E2A7090298F814A9D44C89F8634249BEF07, /*hidden argument*/NULL);
			if (L_79)
			{
				goto IL_05c8;
			}
		}

IL_0350:
		{
			goto IL_071b;
		}

IL_0355:
		{
			String_t* L_80 = V_2;
			bool L_81;
			L_81 = String_op_Equality_m50B3548E4AC232558190B0052877B290AA1D436A((String_t*)L_80, (String_t*)_stringLiteralF3FA58C10BBB9830102605E24AF89DC619908DFA, /*hidden argument*/NULL);
			if (L_81)
			{
				goto IL_05d9;
			}
		}

IL_0365:
		{
			goto IL_071b;
		}

IL_036a:
		{
			String_t* L_82 = V_2;
			bool L_83;
			L_83 = String_op_Equality_m50B3548E4AC232558190B0052877B290AA1D436A((String_t*)L_82, (String_t*)_stringLiteralBA9362732D25B1644B7D8DEC5DF6F036A4A66DE5, /*hidden argument*/NULL);
			if (L_83)
			{
				goto IL_05ee;
			}
		}

IL_037a:
		{
			goto IL_071b;
		}

IL_037f:
		{
			String_t* L_84 = V_2;
			bool L_85;
			L_85 = String_op_Equality_m50B3548E4AC232558190B0052877B290AA1D436A((String_t*)L_84, (String_t*)_stringLiteral95F57476C0AA778364404E7CCCD7499BF1BF3757, /*hidden argument*/NULL);
			if (L_85)
			{
				goto IL_05fe;
			}
		}

IL_038f:
		{
			goto IL_071b;
		}

IL_0394:
		{
			String_t* L_86 = V_2;
			bool L_87;
			L_87 = String_op_Equality_m50B3548E4AC232558190B0052877B290AA1D436A((String_t*)L_86, (String_t*)_stringLiteral9AB5ADF8A8A53110245466F7C226F7935F5FE95F, /*hidden argument*/NULL);
			if (L_87)
			{
				goto IL_060f;
			}
		}

IL_03a4:
		{
			goto IL_071b;
		}

IL_03a9:
		{
			String_t* L_88 = V_2;
			bool L_89;
			L_89 = String_op_Equality_m50B3548E4AC232558190B0052877B290AA1D436A((String_t*)L_88, (String_t*)_stringLiteralEA8FBF382D8AC9EDB8FFC14A350641B987F5C631, /*hidden argument*/NULL);
			if (L_89)
			{
				goto IL_0620;
			}
		}

IL_03b9:
		{
			goto IL_071b;
		}

IL_03be:
		{
			String_t* L_90 = V_2;
			bool L_91;
			L_91 = String_op_Equality_m50B3548E4AC232558190B0052877B290AA1D436A((String_t*)L_90, (String_t*)_stringLiteral201D9D00BB60DC2318D21CF9902290EFE255D5DC, /*hidden argument*/NULL);
			if (L_91)
			{
				goto IL_0631;
			}
		}

IL_03ce:
		{
			goto IL_071b;
		}

IL_03d3:
		{
			String_t* L_92 = V_2;
			bool L_93;
			L_93 = String_op_Equality_m50B3548E4AC232558190B0052877B290AA1D436A((String_t*)L_92, (String_t*)_stringLiteral65B008F04EC40A696263EF679CF274BD10999A5D, /*hidden argument*/NULL);
			if (L_93)
			{
				goto IL_0642;
			}
		}

IL_03e3:
		{
			goto IL_071b;
		}

IL_03e8:
		{
			String_t* L_94 = V_2;
			bool L_95;
			L_95 = String_op_Equality_m50B3548E4AC232558190B0052877B290AA1D436A((String_t*)L_94, (String_t*)_stringLiteralF38CFAE6A91D072D4453C29FF44D81D459A582F1, /*hidden argument*/NULL);
			if (L_95)
			{
				goto IL_0653;
			}
		}

IL_03f8:
		{
			goto IL_071b;
		}

IL_03fd:
		{
			String_t* L_96 = V_2;
			bool L_97;
			L_97 = String_op_Equality_m50B3548E4AC232558190B0052877B290AA1D436A((String_t*)L_96, (String_t*)_stringLiteral3BC15E3C2F40466B2DC85C4776499817B8306CBB, /*hidden argument*/NULL);
			if (L_97)
			{
				goto IL_0669;
			}
		}

IL_040d:
		{
			goto IL_071b;
		}

IL_0412:
		{
			String_t* L_98 = V_2;
			bool L_99;
			L_99 = String_op_Equality_m50B3548E4AC232558190B0052877B290AA1D436A((String_t*)L_98, (String_t*)_stringLiteralCE18B047107AA23D1AA9B2ED32D316148E02655F, /*hidden argument*/NULL);
			if (L_99)
			{
				goto IL_067f;
			}
		}

IL_0422:
		{
			goto IL_071b;
		}

IL_0427:
		{
			String_t* L_100 = V_2;
			bool L_101;
			L_101 = String_op_Equality_m50B3548E4AC232558190B0052877B290AA1D436A((String_t*)L_100, (String_t*)_stringLiteral83AC9669A9053DD15B9F2E82D2CE2369EFE131BA, /*hidden argument*/NULL);
			if (L_101)
			{
				goto IL_0695;
			}
		}

IL_0437:
		{
			goto IL_071b;
		}

IL_043c:
		{
			String_t* L_102 = V_2;
			bool L_103;
			L_103 = String_op_Equality_m50B3548E4AC232558190B0052877B290AA1D436A((String_t*)L_102, (String_t*)_stringLiteralECAEEB225F8689DE45DEB4FA21CE34E1960B1B50, /*hidden argument*/NULL);
			if (L_103)
			{
				goto IL_06a3;
			}
		}

IL_044c:
		{
			goto IL_071b;
		}

IL_0451:
		{
			String_t* L_104 = V_2;
			bool L_105;
			L_105 = String_op_Equality_m50B3548E4AC232558190B0052877B290AA1D436A((String_t*)L_104, (String_t*)_stringLiteral2EE7B6B0E37E14930BBA497867139BFD0617CE04, /*hidden argument*/NULL);
			if (L_105)
			{
				goto IL_06b1;
			}
		}

IL_0461:
		{
			goto IL_071b;
		}

IL_0466:
		{
			String_t* L_106 = V_2;
			bool L_107;
			L_107 = String_op_Equality_m50B3548E4AC232558190B0052877B290AA1D436A((String_t*)L_106, (String_t*)_stringLiteralF2AF7DD0BFF41B7B35037F018DAABE7DCF357A7B, /*hidden argument*/NULL);
			if (L_107)
			{
				goto IL_06bf;
			}
		}

IL_0476:
		{
			goto IL_071b;
		}

IL_047b:
		{
			String_t* L_108 = V_2;
			bool L_109;
			L_109 = String_op_Equality_m50B3548E4AC232558190B0052877B290AA1D436A((String_t*)L_108, (String_t*)_stringLiteral7FF61C3A55BCA1287974D8740F945250B3F0F084, /*hidden argument*/NULL);
			if (L_109)
			{
				goto IL_06d2;
			}
		}

IL_048b:
		{
			goto IL_071b;
		}

IL_0490:
		{
			String_t* L_110 = V_2;
			bool L_111;
			L_111 = String_op_Equality_m50B3548E4AC232558190B0052877B290AA1D436A((String_t*)L_110, (String_t*)_stringLiteral2ADFC3FFF7C52D554F0435A348A5345C9FCD7FF8, /*hidden argument*/NULL);
			if (L_111)
			{
				goto IL_06e5;
			}
		}

IL_04a0:
		{
			goto IL_071b;
		}

IL_04a5:
		{
			String_t* L_112 = V_2;
			bool L_113;
			L_113 = String_op_Equality_m50B3548E4AC232558190B0052877B290AA1D436A((String_t*)L_112, (String_t*)_stringLiteral2E201D1972661439FD3C8523C55723E7E9BCC7DA, /*hidden argument*/NULL);
			if (L_113)
			{
				goto IL_06f7;
			}
		}

IL_04b5:
		{
			goto IL_071b;
		}

IL_04ba:
		{
			String_t* L_114 = V_2;
			bool L_115;
			L_115 = String_op_Equality_m50B3548E4AC232558190B0052877B290AA1D436A((String_t*)L_114, (String_t*)_stringLiteralCD44AC57FFE6CAC7824F4CAA223F1BB8B4CB0D73, /*hidden argument*/NULL);
			if (L_115)
			{
				goto IL_0709;
			}
		}

IL_04ca:
		{
			goto IL_071b;
		}

IL_04cf:
		{
			// instance.width = reader.Read<System.Int32>(ES3Type_int.Instance);
			RenderTexture_t5FE7A5B47EF962A0E8D7BEBA05E9FC87D49A1849 * L_116 = V_0;
			ES3Reader_t2780AF8AA61DA2A817115CEF8612AC0E494D03C9 * L_117 = ___reader0;
			IL2CPP_RUNTIME_CLASS_INIT(ES3Type_int_tF64C15D40AD0CC7C15BCD1CEC3C5C6BF837BD167_il2cpp_TypeInfo_var);
			ES3Type_t8FBECB7AE75168648B9524E0C2A38DAD4555421D * L_118 = ((ES3Type_int_tF64C15D40AD0CC7C15BCD1CEC3C5C6BF837BD167_StaticFields*)il2cpp_codegen_static_fields_for(ES3Type_int_tF64C15D40AD0CC7C15BCD1CEC3C5C6BF837BD167_il2cpp_TypeInfo_var))->get_Instance_12();
			NullCheck((ES3Reader_t2780AF8AA61DA2A817115CEF8612AC0E494D03C9 *)L_117);
			int32_t L_119;
			L_119 = GenericVirtFuncInvoker1< int32_t, ES3Type_t8FBECB7AE75168648B9524E0C2A38DAD4555421D * >::Invoke(ES3Reader_Read_TisInt32_tFDE5F8CD43D10453F6A2E0C77FE48C6CC7009046_m2B74AA6627F5B1D21171D56C42F71DE5A7C1B4A6_RuntimeMethod_var, (ES3Reader_t2780AF8AA61DA2A817115CEF8612AC0E494D03C9 *)L_117, (ES3Type_t8FBECB7AE75168648B9524E0C2A38DAD4555421D *)L_118);
			NullCheck((Texture_t9FE0218A1EEDF266E8C85879FE123265CACC95AE *)L_116);
			VirtActionInvoker1< int32_t >::Invoke(6 /* System.Void UnityEngine.Texture::set_width(System.Int32) */, (Texture_t9FE0218A1EEDF266E8C85879FE123265CACC95AE *)L_116, (int32_t)L_119);
			// break;
			goto IL_0721;
		}

IL_04e5:
		{
			// instance.height = reader.Read<System.Int32>(ES3Type_int.Instance);
			RenderTexture_t5FE7A5B47EF962A0E8D7BEBA05E9FC87D49A1849 * L_120 = V_0;
			ES3Reader_t2780AF8AA61DA2A817115CEF8612AC0E494D03C9 * L_121 = ___reader0;
			IL2CPP_RUNTIME_CLASS_INIT(ES3Type_int_tF64C15D40AD0CC7C15BCD1CEC3C5C6BF837BD167_il2cpp_TypeInfo_var);
			ES3Type_t8FBECB7AE75168648B9524E0C2A38DAD4555421D * L_122 = ((ES3Type_int_tF64C15D40AD0CC7C15BCD1CEC3C5C6BF837BD167_StaticFields*)il2cpp_codegen_static_fields_for(ES3Type_int_tF64C15D40AD0CC7C15BCD1CEC3C5C6BF837BD167_il2cpp_TypeInfo_var))->get_Instance_12();
			NullCheck((ES3Reader_t2780AF8AA61DA2A817115CEF8612AC0E494D03C9 *)L_121);
			int32_t L_123;
			L_123 = GenericVirtFuncInvoker1< int32_t, ES3Type_t8FBECB7AE75168648B9524E0C2A38DAD4555421D * >::Invoke(ES3Reader_Read_TisInt32_tFDE5F8CD43D10453F6A2E0C77FE48C6CC7009046_m2B74AA6627F5B1D21171D56C42F71DE5A7C1B4A6_RuntimeMethod_var, (ES3Reader_t2780AF8AA61DA2A817115CEF8612AC0E494D03C9 *)L_121, (ES3Type_t8FBECB7AE75168648B9524E0C2A38DAD4555421D *)L_122);
			NullCheck((Texture_t9FE0218A1EEDF266E8C85879FE123265CACC95AE *)L_120);
			VirtActionInvoker1< int32_t >::Invoke(8 /* System.Void UnityEngine.Texture::set_height(System.Int32) */, (Texture_t9FE0218A1EEDF266E8C85879FE123265CACC95AE *)L_120, (int32_t)L_123);
			// break;
			goto IL_0721;
		}

IL_04fb:
		{
			// instance.dimension = reader.Read<UnityEngine.Rendering.TextureDimension>();
			RenderTexture_t5FE7A5B47EF962A0E8D7BEBA05E9FC87D49A1849 * L_124 = V_0;
			ES3Reader_t2780AF8AA61DA2A817115CEF8612AC0E494D03C9 * L_125 = ___reader0;
			NullCheck((ES3Reader_t2780AF8AA61DA2A817115CEF8612AC0E494D03C9 *)L_125);
			int32_t L_126;
			L_126 = GenericVirtFuncInvoker0< int32_t >::Invoke(ES3Reader_Read_TisTextureDimension_tADCCB7C1D30E4D1182651BA9094B4DE61B63EACC_m19EAA3B93D10636C17A62A3D8437349223CFD988_RuntimeMethod_var, (ES3Reader_t2780AF8AA61DA2A817115CEF8612AC0E494D03C9 *)L_125);
			NullCheck((Texture_t9FE0218A1EEDF266E8C85879FE123265CACC95AE *)L_124);
			VirtActionInvoker1< int32_t >::Invoke(10 /* System.Void UnityEngine.Texture::set_dimension(UnityEngine.Rendering.TextureDimension) */, (Texture_t9FE0218A1EEDF266E8C85879FE123265CACC95AE *)L_124, (int32_t)L_126);
			// break;
			goto IL_0721;
		}

IL_050c:
		{
			// instance.useMipMap = reader.Read<System.Boolean>(ES3Type_bool.Instance);
			RenderTexture_t5FE7A5B47EF962A0E8D7BEBA05E9FC87D49A1849 * L_127 = V_0;
			ES3Reader_t2780AF8AA61DA2A817115CEF8612AC0E494D03C9 * L_128 = ___reader0;
			IL2CPP_RUNTIME_CLASS_INIT(ES3Type_bool_t8F309F7B9CC735FF1DEE68081B6E3CAB367745F4_il2cpp_TypeInfo_var);
			ES3Type_t8FBECB7AE75168648B9524E0C2A38DAD4555421D * L_129 = ((ES3Type_bool_t8F309F7B9CC735FF1DEE68081B6E3CAB367745F4_StaticFields*)il2cpp_codegen_static_fields_for(ES3Type_bool_t8F309F7B9CC735FF1DEE68081B6E3CAB367745F4_il2cpp_TypeInfo_var))->get_Instance_12();
			NullCheck((ES3Reader_t2780AF8AA61DA2A817115CEF8612AC0E494D03C9 *)L_128);
			bool L_130;
			L_130 = GenericVirtFuncInvoker1< bool, ES3Type_t8FBECB7AE75168648B9524E0C2A38DAD4555421D * >::Invoke(ES3Reader_Read_TisBoolean_t07D1E3F34E4813023D64F584DFF7B34C9D922F37_mC6D1B158268FF9B97822FF9F5B37FB1723FEDA22_RuntimeMethod_var, (ES3Reader_t2780AF8AA61DA2A817115CEF8612AC0E494D03C9 *)L_128, (ES3Type_t8FBECB7AE75168648B9524E0C2A38DAD4555421D *)L_129);
			NullCheck((RenderTexture_t5FE7A5B47EF962A0E8D7BEBA05E9FC87D49A1849 *)L_127);
			RenderTexture_set_useMipMap_mAE1437C3D7D21441891A612C3B812EE9C379F126((RenderTexture_t5FE7A5B47EF962A0E8D7BEBA05E9FC87D49A1849 *)L_127, (bool)L_130, /*hidden argument*/NULL);
			// break;
			goto IL_0721;
		}

IL_0522:
		{
			// instance.memorylessMode = reader.Read<UnityEngine.RenderTextureMemoryless>();
			RenderTexture_t5FE7A5B47EF962A0E8D7BEBA05E9FC87D49A1849 * L_131 = V_0;
			ES3Reader_t2780AF8AA61DA2A817115CEF8612AC0E494D03C9 * L_132 = ___reader0;
			NullCheck((ES3Reader_t2780AF8AA61DA2A817115CEF8612AC0E494D03C9 *)L_132);
			int32_t L_133;
			L_133 = GenericVirtFuncInvoker0< int32_t >::Invoke(ES3Reader_Read_TisRenderTextureMemoryless_t37547D68C2186D2650440F719302CDA4A3BB7F67_m3A980BA15AADBBB8393C3BC88CE17EEDDC89B027_RuntimeMethod_var, (ES3Reader_t2780AF8AA61DA2A817115CEF8612AC0E494D03C9 *)L_132);
			NullCheck((RenderTexture_t5FE7A5B47EF962A0E8D7BEBA05E9FC87D49A1849 *)L_131);
			RenderTexture_set_memorylessMode_mE48B2A38E9374A7BB419383B438790347474EFC1((RenderTexture_t5FE7A5B47EF962A0E8D7BEBA05E9FC87D49A1849 *)L_131, (int32_t)L_133, /*hidden argument*/NULL);
			// break;
			goto IL_0721;
		}

IL_0533:
		{
			// instance.format = reader.Read<UnityEngine.RenderTextureFormat>();
			RenderTexture_t5FE7A5B47EF962A0E8D7BEBA05E9FC87D49A1849 * L_134 = V_0;
			ES3Reader_t2780AF8AA61DA2A817115CEF8612AC0E494D03C9 * L_135 = ___reader0;
			NullCheck((ES3Reader_t2780AF8AA61DA2A817115CEF8612AC0E494D03C9 *)L_135);
			int32_t L_136;
			L_136 = GenericVirtFuncInvoker0< int32_t >::Invoke(ES3Reader_Read_TisRenderTextureFormat_t8371287102ED67772EF78229CF4AB9D38C2CD626_mE6358E03407F5C15B58B292C79D4770DE3FAC95A_RuntimeMethod_var, (ES3Reader_t2780AF8AA61DA2A817115CEF8612AC0E494D03C9 *)L_135);
			NullCheck((RenderTexture_t5FE7A5B47EF962A0E8D7BEBA05E9FC87D49A1849 *)L_134);
			RenderTexture_set_format_m32D42DC33DB151B69E81D0D93F36DE7450CFC23D((RenderTexture_t5FE7A5B47EF962A0E8D7BEBA05E9FC87D49A1849 *)L_134, (int32_t)L_136, /*hidden argument*/NULL);
			// break;
			goto IL_0721;
		}

IL_0544:
		{
			// instance.autoGenerateMips = reader.Read<System.Boolean>(ES3Type_bool.Instance);
			RenderTexture_t5FE7A5B47EF962A0E8D7BEBA05E9FC87D49A1849 * L_137 = V_0;
			ES3Reader_t2780AF8AA61DA2A817115CEF8612AC0E494D03C9 * L_138 = ___reader0;
			IL2CPP_RUNTIME_CLASS_INIT(ES3Type_bool_t8F309F7B9CC735FF1DEE68081B6E3CAB367745F4_il2cpp_TypeInfo_var);
			ES3Type_t8FBECB7AE75168648B9524E0C2A38DAD4555421D * L_139 = ((ES3Type_bool_t8F309F7B9CC735FF1DEE68081B6E3CAB367745F4_StaticFields*)il2cpp_codegen_static_fields_for(ES3Type_bool_t8F309F7B9CC735FF1DEE68081B6E3CAB367745F4_il2cpp_TypeInfo_var))->get_Instance_12();
			NullCheck((ES3Reader_t2780AF8AA61DA2A817115CEF8612AC0E494D03C9 *)L_138);
			bool L_140;
			L_140 = GenericVirtFuncInvoker1< bool, ES3Type_t8FBECB7AE75168648B9524E0C2A38DAD4555421D * >::Invoke(ES3Reader_Read_TisBoolean_t07D1E3F34E4813023D64F584DFF7B34C9D922F37_mC6D1B158268FF9B97822FF9F5B37FB1723FEDA22_RuntimeMethod_var, (ES3Reader_t2780AF8AA61DA2A817115CEF8612AC0E494D03C9 *)L_138, (ES3Type_t8FBECB7AE75168648B9524E0C2A38DAD4555421D *)L_139);
			NullCheck((RenderTexture_t5FE7A5B47EF962A0E8D7BEBA05E9FC87D49A1849 *)L_137);
			RenderTexture_set_autoGenerateMips_m0F02D60D4C4D4790B354451732F2DA6BA12D2E63((RenderTexture_t5FE7A5B47EF962A0E8D7BEBA05E9FC87D49A1849 *)L_137, (bool)L_140, /*hidden argument*/NULL);
			// break;
			goto IL_0721;
		}

IL_055a:
		{
			// instance.volumeDepth = reader.Read<System.Int32>(ES3Type_int.Instance);
			RenderTexture_t5FE7A5B47EF962A0E8D7BEBA05E9FC87D49A1849 * L_141 = V_0;
			ES3Reader_t2780AF8AA61DA2A817115CEF8612AC0E494D03C9 * L_142 = ___reader0;
			IL2CPP_RUNTIME_CLASS_INIT(ES3Type_int_tF64C15D40AD0CC7C15BCD1CEC3C5C6BF837BD167_il2cpp_TypeInfo_var);
			ES3Type_t8FBECB7AE75168648B9524E0C2A38DAD4555421D * L_143 = ((ES3Type_int_tF64C15D40AD0CC7C15BCD1CEC3C5C6BF837BD167_StaticFields*)il2cpp_codegen_static_fields_for(ES3Type_int_tF64C15D40AD0CC7C15BCD1CEC3C5C6BF837BD167_il2cpp_TypeInfo_var))->get_Instance_12();
			NullCheck((ES3Reader_t2780AF8AA61DA2A817115CEF8612AC0E494D03C9 *)L_142);
			int32_t L_144;
			L_144 = GenericVirtFuncInvoker1< int32_t, ES3Type_t8FBECB7AE75168648B9524E0C2A38DAD4555421D * >::Invoke(ES3Reader_Read_TisInt32_tFDE5F8CD43D10453F6A2E0C77FE48C6CC7009046_m2B74AA6627F5B1D21171D56C42F71DE5A7C1B4A6_RuntimeMethod_var, (ES3Reader_t2780AF8AA61DA2A817115CEF8612AC0E494D03C9 *)L_142, (ES3Type_t8FBECB7AE75168648B9524E0C2A38DAD4555421D *)L_143);
			NullCheck((RenderTexture_t5FE7A5B47EF962A0E8D7BEBA05E9FC87D49A1849 *)L_141);
			RenderTexture_set_volumeDepth_m01D7BD50386DDAE777CE3CB9B60FDD7DE798AC93((RenderTexture_t5FE7A5B47EF962A0E8D7BEBA05E9FC87D49A1849 *)L_141, (int32_t)L_144, /*hidden argument*/NULL);
			// break;
			goto IL_0721;
		}

IL_0570:
		{
			// instance.antiAliasing = reader.Read<System.Int32>(ES3Type_int.Instance);
			RenderTexture_t5FE7A5B47EF962A0E8D7BEBA05E9FC87D49A1849 * L_145 = V_0;
			ES3Reader_t2780AF8AA61DA2A817115CEF8612AC0E494D03C9 * L_146 = ___reader0;
			IL2CPP_RUNTIME_CLASS_INIT(ES3Type_int_tF64C15D40AD0CC7C15BCD1CEC3C5C6BF837BD167_il2cpp_TypeInfo_var);
			ES3Type_t8FBECB7AE75168648B9524E0C2A38DAD4555421D * L_147 = ((ES3Type_int_tF64C15D40AD0CC7C15BCD1CEC3C5C6BF837BD167_StaticFields*)il2cpp_codegen_static_fields_for(ES3Type_int_tF64C15D40AD0CC7C15BCD1CEC3C5C6BF837BD167_il2cpp_TypeInfo_var))->get_Instance_12();
			NullCheck((ES3Reader_t2780AF8AA61DA2A817115CEF8612AC0E494D03C9 *)L_146);
			int32_t L_148;
			L_148 = GenericVirtFuncInvoker1< int32_t, ES3Type_t8FBECB7AE75168648B9524E0C2A38DAD4555421D * >::Invoke(ES3Reader_Read_TisInt32_tFDE5F8CD43D10453F6A2E0C77FE48C6CC7009046_m2B74AA6627F5B1D21171D56C42F71DE5A7C1B4A6_RuntimeMethod_var, (ES3Reader_t2780AF8AA61DA2A817115CEF8612AC0E494D03C9 *)L_146, (ES3Type_t8FBECB7AE75168648B9524E0C2A38DAD4555421D *)L_147);
			NullCheck((RenderTexture_t5FE7A5B47EF962A0E8D7BEBA05E9FC87D49A1849 *)L_145);
			RenderTexture_set_antiAliasing_m4D37900B7E23CA0D33F109DB8DF21265DB70C38F((RenderTexture_t5FE7A5B47EF962A0E8D7BEBA05E9FC87D49A1849 *)L_145, (int32_t)L_148, /*hidden argument*/NULL);
			// break;
			goto IL_0721;
		}

IL_0586:
		{
			// instance.enableRandomWrite = reader.Read<System.Boolean>(ES3Type_bool.Instance);
			RenderTexture_t5FE7A5B47EF962A0E8D7BEBA05E9FC87D49A1849 * L_149 = V_0;
			ES3Reader_t2780AF8AA61DA2A817115CEF8612AC0E494D03C9 * L_150 = ___reader0;
			IL2CPP_RUNTIME_CLASS_INIT(ES3Type_bool_t8F309F7B9CC735FF1DEE68081B6E3CAB367745F4_il2cpp_TypeInfo_var);
			ES3Type_t8FBECB7AE75168648B9524E0C2A38DAD4555421D * L_151 = ((ES3Type_bool_t8F309F7B9CC735FF1DEE68081B6E3CAB367745F4_StaticFields*)il2cpp_codegen_static_fields_for(ES3Type_bool_t8F309F7B9CC735FF1DEE68081B6E3CAB367745F4_il2cpp_TypeInfo_var))->get_Instance_12();
			NullCheck((ES3Reader_t2780AF8AA61DA2A817115CEF8612AC0E494D03C9 *)L_150);
			bool L_152;
			L_152 = GenericVirtFuncInvoker1< bool, ES3Type_t8FBECB7AE75168648B9524E0C2A38DAD4555421D * >::Invoke(ES3Reader_Read_TisBoolean_t07D1E3F34E4813023D64F584DFF7B34C9D922F37_mC6D1B158268FF9B97822FF9F5B37FB1723FEDA22_RuntimeMethod_var, (ES3Reader_t2780AF8AA61DA2A817115CEF8612AC0E494D03C9 *)L_150, (ES3Type_t8FBECB7AE75168648B9524E0C2A38DAD4555421D *)L_151);
			NullCheck((RenderTexture_t5FE7A5B47EF962A0E8D7BEBA05E9FC87D49A1849 *)L_149);
			RenderTexture_set_enableRandomWrite_m024F49DB3CA3B02FA0EEBB3EACB37E6228CAA183((RenderTexture_t5FE7A5B47EF962A0E8D7BEBA05E9FC87D49A1849 *)L_149, (bool)L_152, /*hidden argument*/NULL);
			// break;
			goto IL_0721;
		}

IL_059c:
		{
			// instance.isPowerOfTwo = reader.Read<System.Boolean>(ES3Type_bool.Instance);
			RenderTexture_t5FE7A5B47EF962A0E8D7BEBA05E9FC87D49A1849 * L_153 = V_0;
			ES3Reader_t2780AF8AA61DA2A817115CEF8612AC0E494D03C9 * L_154 = ___reader0;
			IL2CPP_RUNTIME_CLASS_INIT(ES3Type_bool_t8F309F7B9CC735FF1DEE68081B6E3CAB367745F4_il2cpp_TypeInfo_var);
			ES3Type_t8FBECB7AE75168648B9524E0C2A38DAD4555421D * L_155 = ((ES3Type_bool_t8F309F7B9CC735FF1DEE68081B6E3CAB367745F4_StaticFields*)il2cpp_codegen_static_fields_for(ES3Type_bool_t8F309F7B9CC735FF1DEE68081B6E3CAB367745F4_il2cpp_TypeInfo_var))->get_Instance_12();
			NullCheck((ES3Reader_t2780AF8AA61DA2A817115CEF8612AC0E494D03C9 *)L_154);
			bool L_156;
			L_156 = GenericVirtFuncInvoker1< bool, ES3Type_t8FBECB7AE75168648B9524E0C2A38DAD4555421D * >::Invoke(ES3Reader_Read_TisBoolean_t07D1E3F34E4813023D64F584DFF7B34C9D922F37_mC6D1B158268FF9B97822FF9F5B37FB1723FEDA22_RuntimeMethod_var, (ES3Reader_t2780AF8AA61DA2A817115CEF8612AC0E494D03C9 *)L_154, (ES3Type_t8FBECB7AE75168648B9524E0C2A38DAD4555421D *)L_155);
			NullCheck((RenderTexture_t5FE7A5B47EF962A0E8D7BEBA05E9FC87D49A1849 *)L_153);
			RenderTexture_set_isPowerOfTwo_mA6D34F610DF27C40422DF5815892B45C656F1317((RenderTexture_t5FE7A5B47EF962A0E8D7BEBA05E9FC87D49A1849 *)L_153, (bool)L_156, /*hidden argument*/NULL);
			// break;
			goto IL_0721;
		}

IL_05b2:
		{
			// instance.depth = reader.Read<System.Int32>(ES3Type_int.Instance);
			RenderTexture_t5FE7A5B47EF962A0E8D7BEBA05E9FC87D49A1849 * L_157 = V_0;
			ES3Reader_t2780AF8AA61DA2A817115CEF8612AC0E494D03C9 * L_158 = ___reader0;
			IL2CPP_RUNTIME_CLASS_INIT(ES3Type_int_tF64C15D40AD0CC7C15BCD1CEC3C5C6BF837BD167_il2cpp_TypeInfo_var);
			ES3Type_t8FBECB7AE75168648B9524E0C2A38DAD4555421D * L_159 = ((ES3Type_int_tF64C15D40AD0CC7C15BCD1CEC3C5C6BF837BD167_StaticFields*)il2cpp_codegen_static_fields_for(ES3Type_int_tF64C15D40AD0CC7C15BCD1CEC3C5C6BF837BD167_il2cpp_TypeInfo_var))->get_Instance_12();
			NullCheck((ES3Reader_t2780AF8AA61DA2A817115CEF8612AC0E494D03C9 *)L_158);
			int32_t L_160;
			L_160 = GenericVirtFuncInvoker1< int32_t, ES3Type_t8FBECB7AE75168648B9524E0C2A38DAD4555421D * >::Invoke(ES3Reader_Read_TisInt32_tFDE5F8CD43D10453F6A2E0C77FE48C6CC7009046_m2B74AA6627F5B1D21171D56C42F71DE5A7C1B4A6_RuntimeMethod_var, (ES3Reader_t2780AF8AA61DA2A817115CEF8612AC0E494D03C9 *)L_158, (ES3Type_t8FBECB7AE75168648B9524E0C2A38DAD4555421D *)L_159);
			NullCheck((RenderTexture_t5FE7A5B47EF962A0E8D7BEBA05E9FC87D49A1849 *)L_157);
			RenderTexture_set_depth_mA57CEFEDDB45D0429FAC9532A631839F523944A3((RenderTexture_t5FE7A5B47EF962A0E8D7BEBA05E9FC87D49A1849 *)L_157, (int32_t)L_160, /*hidden argument*/NULL);
			// break;
			goto IL_0721;
		}

IL_05c8:
		{
			// instance.descriptor = reader.Read<UnityEngine.RenderTextureDescriptor>();
			RenderTexture_t5FE7A5B47EF962A0E8D7BEBA05E9FC87D49A1849 * L_161 = V_0;
			ES3Reader_t2780AF8AA61DA2A817115CEF8612AC0E494D03C9 * L_162 = ___reader0;
			NullCheck((ES3Reader_t2780AF8AA61DA2A817115CEF8612AC0E494D03C9 *)L_162);
			RenderTextureDescriptor_t67FF189E1F35AEB5D6C43A2D7103F3A8A8CA0B47  L_163;
			L_163 = GenericVirtFuncInvoker0< RenderTextureDescriptor_t67FF189E1F35AEB5D6C43A2D7103F3A8A8CA0B47  >::Invoke(ES3Reader_Read_TisRenderTextureDescriptor_t67FF189E1F35AEB5D6C43A2D7103F3A8A8CA0B47_m427886ADAAF96C7BA9BD423544128494F96D69E7_RuntimeMethod_var, (ES3Reader_t2780AF8AA61DA2A817115CEF8612AC0E494D03C9 *)L_162);
			NullCheck((RenderTexture_t5FE7A5B47EF962A0E8D7BEBA05E9FC87D49A1849 *)L_161);
			RenderTexture_set_descriptor_m3C8E31AE4644B23719A12345771D1B85EB6E5881((RenderTexture_t5FE7A5B47EF962A0E8D7BEBA05E9FC87D49A1849 *)L_161, (RenderTextureDescriptor_t67FF189E1F35AEB5D6C43A2D7103F3A8A8CA0B47 )L_163, /*hidden argument*/NULL);
			// break;
			goto IL_0721;
		}

IL_05d9:
		{
			// UnityEngine.RenderTexture.masterTextureLimit = reader.Read<System.Int32>(ES3Type_int.Instance);
			ES3Reader_t2780AF8AA61DA2A817115CEF8612AC0E494D03C9 * L_164 = ___reader0;
			IL2CPP_RUNTIME_CLASS_INIT(ES3Type_int_tF64C15D40AD0CC7C15BCD1CEC3C5C6BF837BD167_il2cpp_TypeInfo_var);
			ES3Type_t8FBECB7AE75168648B9524E0C2A38DAD4555421D * L_165 = ((ES3Type_int_tF64C15D40AD0CC7C15BCD1CEC3C5C6BF837BD167_StaticFields*)il2cpp_codegen_static_fields_for(ES3Type_int_tF64C15D40AD0CC7C15BCD1CEC3C5C6BF837BD167_il2cpp_TypeInfo_var))->get_Instance_12();
			NullCheck((ES3Reader_t2780AF8AA61DA2A817115CEF8612AC0E494D03C9 *)L_164);
			int32_t L_166;
			L_166 = GenericVirtFuncInvoker1< int32_t, ES3Type_t8FBECB7AE75168648B9524E0C2A38DAD4555421D * >::Invoke(ES3Reader_Read_TisInt32_tFDE5F8CD43D10453F6A2E0C77FE48C6CC7009046_m2B74AA6627F5B1D21171D56C42F71DE5A7C1B4A6_RuntimeMethod_var, (ES3Reader_t2780AF8AA61DA2A817115CEF8612AC0E494D03C9 *)L_164, (ES3Type_t8FBECB7AE75168648B9524E0C2A38DAD4555421D *)L_165);
			IL2CPP_RUNTIME_CLASS_INIT(Texture_t9FE0218A1EEDF266E8C85879FE123265CACC95AE_il2cpp_TypeInfo_var);
			Texture_set_masterTextureLimit_m94A531A20A54A86AF7B88A56F72709CE556B7DFF((int32_t)L_166, /*hidden argument*/NULL);
			// break;
			goto IL_0721;
		}

IL_05ee:
		{
			// UnityEngine.RenderTexture.anisotropicFiltering = reader.Read<UnityEngine.AnisotropicFiltering>();
			ES3Reader_t2780AF8AA61DA2A817115CEF8612AC0E494D03C9 * L_167 = ___reader0;
			NullCheck((ES3Reader_t2780AF8AA61DA2A817115CEF8612AC0E494D03C9 *)L_167);
			int32_t L_168;
			L_168 = GenericVirtFuncInvoker0< int32_t >::Invoke(ES3Reader_Read_TisAnisotropicFiltering_tAC3D1448B262D5869946CD1CDD2C8DAE3A7A537B_mAF1268AAC3E461D6E0604A19FAF0325873B6EC8A_RuntimeMethod_var, (ES3Reader_t2780AF8AA61DA2A817115CEF8612AC0E494D03C9 *)L_167);
			IL2CPP_RUNTIME_CLASS_INIT(Texture_t9FE0218A1EEDF266E8C85879FE123265CACC95AE_il2cpp_TypeInfo_var);
			Texture_set_anisotropicFiltering_mE2B639BF2681A8A0516C1C343C7E265ED60EAF16((int32_t)L_168, /*hidden argument*/NULL);
			// break;
			goto IL_0721;
		}

IL_05fe:
		{
			// instance.wrapMode = reader.Read<UnityEngine.TextureWrapMode>();
			RenderTexture_t5FE7A5B47EF962A0E8D7BEBA05E9FC87D49A1849 * L_169 = V_0;
			ES3Reader_t2780AF8AA61DA2A817115CEF8612AC0E494D03C9 * L_170 = ___reader0;
			NullCheck((ES3Reader_t2780AF8AA61DA2A817115CEF8612AC0E494D03C9 *)L_170);
			int32_t L_171;
			L_171 = GenericVirtFuncInvoker0< int32_t >::Invoke(ES3Reader_Read_TisTextureWrapMode_t86DDA8206E4AA784A1218D0DE3C5F6826D7549EB_m7926E449CD0B8BD56E5BF145DD0CCFE1C567F107_RuntimeMethod_var, (ES3Reader_t2780AF8AA61DA2A817115CEF8612AC0E494D03C9 *)L_170);
			NullCheck((Texture_t9FE0218A1EEDF266E8C85879FE123265CACC95AE *)L_169);
			Texture_set_wrapMode_m1233D2DF48DC20996F8EE26E866D4BDD2AC8050D((Texture_t9FE0218A1EEDF266E8C85879FE123265CACC95AE *)L_169, (int32_t)L_171, /*hidden argument*/NULL);
			// break;
			goto IL_0721;
		}

IL_060f:
		{
			// instance.wrapModeU = reader.Read<UnityEngine.TextureWrapMode>();
			RenderTexture_t5FE7A5B47EF962A0E8D7BEBA05E9FC87D49A1849 * L_172 = V_0;
			ES3Reader_t2780AF8AA61DA2A817115CEF8612AC0E494D03C9 * L_173 = ___reader0;
			NullCheck((ES3Reader_t2780AF8AA61DA2A817115CEF8612AC0E494D03C9 *)L_173);
			int32_t L_174;
			L_174 = GenericVirtFuncInvoker0< int32_t >::Invoke(ES3Reader_Read_TisTextureWrapMode_t86DDA8206E4AA784A1218D0DE3C5F6826D7549EB_m7926E449CD0B8BD56E5BF145DD0CCFE1C567F107_RuntimeMethod_var, (ES3Reader_t2780AF8AA61DA2A817115CEF8612AC0E494D03C9 *)L_173);
			NullCheck((Texture_t9FE0218A1EEDF266E8C85879FE123265CACC95AE *)L_172);
			Texture_set_wrapModeU_mBD3CBD6880E9E767B91ED9E1B14C725A52D7A66E((Texture_t9FE0218A1EEDF266E8C85879FE123265CACC95AE *)L_172, (int32_t)L_174, /*hidden argument*/NULL);
			// break;
			goto IL_0721;
		}

IL_0620:
		{
			// instance.wrapModeV = reader.Read<UnityEngine.TextureWrapMode>();
			RenderTexture_t5FE7A5B47EF962A0E8D7BEBA05E9FC87D49A1849 * L_175 = V_0;
			ES3Reader_t2780AF8AA61DA2A817115CEF8612AC0E494D03C9 * L_176 = ___reader0;
			NullCheck((ES3Reader_t2780AF8AA61DA2A817115CEF8612AC0E494D03C9 *)L_176);
			int32_t L_177;
			L_177 = GenericVirtFuncInvoker0< int32_t >::Invoke(ES3Reader_Read_TisTextureWrapMode_t86DDA8206E4AA784A1218D0DE3C5F6826D7549EB_m7926E449CD0B8BD56E5BF145DD0CCFE1C567F107_RuntimeMethod_var, (ES3Reader_t2780AF8AA61DA2A817115CEF8612AC0E494D03C9 *)L_176);
			NullCheck((Texture_t9FE0218A1EEDF266E8C85879FE123265CACC95AE *)L_175);
			Texture_set_wrapModeV_mCD51C11B4C90D7508113C744EDC09D04059403E5((Texture_t9FE0218A1EEDF266E8C85879FE123265CACC95AE *)L_175, (int32_t)L_177, /*hidden argument*/NULL);
			// break;
			goto IL_0721;
		}

IL_0631:
		{
			// instance.wrapModeW = reader.Read<UnityEngine.TextureWrapMode>();
			RenderTexture_t5FE7A5B47EF962A0E8D7BEBA05E9FC87D49A1849 * L_178 = V_0;
			ES3Reader_t2780AF8AA61DA2A817115CEF8612AC0E494D03C9 * L_179 = ___reader0;
			NullCheck((ES3Reader_t2780AF8AA61DA2A817115CEF8612AC0E494D03C9 *)L_179);
			int32_t L_180;
			L_180 = GenericVirtFuncInvoker0< int32_t >::Invoke(ES3Reader_Read_TisTextureWrapMode_t86DDA8206E4AA784A1218D0DE3C5F6826D7549EB_m7926E449CD0B8BD56E5BF145DD0CCFE1C567F107_RuntimeMethod_var, (ES3Reader_t2780AF8AA61DA2A817115CEF8612AC0E494D03C9 *)L_179);
			NullCheck((Texture_t9FE0218A1EEDF266E8C85879FE123265CACC95AE *)L_178);
			Texture_set_wrapModeW_m72C3239EA12A51D5031BD2A66C5E7B178EE9F65B((Texture_t9FE0218A1EEDF266E8C85879FE123265CACC95AE *)L_178, (int32_t)L_180, /*hidden argument*/NULL);
			// break;
			goto IL_0721;
		}

IL_0642:
		{
			// instance.filterMode = reader.Read<UnityEngine.FilterMode>();
			RenderTexture_t5FE7A5B47EF962A0E8D7BEBA05E9FC87D49A1849 * L_181 = V_0;
			ES3Reader_t2780AF8AA61DA2A817115CEF8612AC0E494D03C9 * L_182 = ___reader0;
			NullCheck((ES3Reader_t2780AF8AA61DA2A817115CEF8612AC0E494D03C9 *)L_182);
			int32_t L_183;
			L_183 = GenericVirtFuncInvoker0< int32_t >::Invoke(ES3Reader_Read_TisFilterMode_tE90A08FD96A142C761463D65E524BCDBFEEE3D19_m9819C2A442797B4060B0D9A80CFA96CFD6102839_RuntimeMethod_var, (ES3Reader_t2780AF8AA61DA2A817115CEF8612AC0E494D03C9 *)L_182);
			NullCheck((Texture_t9FE0218A1EEDF266E8C85879FE123265CACC95AE *)L_181);
			Texture_set_filterMode_m045141DB0FEFE496885D45F5F23B15BC0E77C8D0((Texture_t9FE0218A1EEDF266E8C85879FE123265CACC95AE *)L_181, (int32_t)L_183, /*hidden argument*/NULL);
			// break;
			goto IL_0721;
		}

IL_0653:
		{
			// instance.anisoLevel = reader.Read<System.Int32>(ES3Type_int.Instance);
			RenderTexture_t5FE7A5B47EF962A0E8D7BEBA05E9FC87D49A1849 * L_184 = V_0;
			ES3Reader_t2780AF8AA61DA2A817115CEF8612AC0E494D03C9 * L_185 = ___reader0;
			IL2CPP_RUNTIME_CLASS_INIT(ES3Type_int_tF64C15D40AD0CC7C15BCD1CEC3C5C6BF837BD167_il2cpp_TypeInfo_var);
			ES3Type_t8FBECB7AE75168648B9524E0C2A38DAD4555421D * L_186 = ((ES3Type_int_tF64C15D40AD0CC7C15BCD1CEC3C5C6BF837BD167_StaticFields*)il2cpp_codegen_static_fields_for(ES3Type_int_tF64C15D40AD0CC7C15BCD1CEC3C5C6BF837BD167_il2cpp_TypeInfo_var))->get_Instance_12();
			NullCheck((ES3Reader_t2780AF8AA61DA2A817115CEF8612AC0E494D03C9 *)L_185);
			int32_t L_187;
			L_187 = GenericVirtFuncInvoker1< int32_t, ES3Type_t8FBECB7AE75168648B9524E0C2A38DAD4555421D * >::Invoke(ES3Reader_Read_TisInt32_tFDE5F8CD43D10453F6A2E0C77FE48C6CC7009046_m2B74AA6627F5B1D21171D56C42F71DE5A7C1B4A6_RuntimeMethod_var, (ES3Reader_t2780AF8AA61DA2A817115CEF8612AC0E494D03C9 *)L_185, (ES3Type_t8FBECB7AE75168648B9524E0C2A38DAD4555421D *)L_186);
			NullCheck((Texture_t9FE0218A1EEDF266E8C85879FE123265CACC95AE *)L_184);
			Texture_set_anisoLevel_mE51360F6CD0562FD6355F8C0509B70A454CB33BE((Texture_t9FE0218A1EEDF266E8C85879FE123265CACC95AE *)L_184, (int32_t)L_187, /*hidden argument*/NULL);
			// break;
			goto IL_0721;
		}

IL_0669:
		{
			// instance.mipMapBias = reader.Read<System.Single>(ES3Type_float.Instance);
			RenderTexture_t5FE7A5B47EF962A0E8D7BEBA05E9FC87D49A1849 * L_188 = V_0;
			ES3Reader_t2780AF8AA61DA2A817115CEF8612AC0E494D03C9 * L_189 = ___reader0;
			IL2CPP_RUNTIME_CLASS_INIT(ES3Type_float_tF86B773C86731BD9AD79448B860BBB178FE77644_il2cpp_TypeInfo_var);
			ES3Type_t8FBECB7AE75168648B9524E0C2A38DAD4555421D * L_190 = ((ES3Type_float_tF86B773C86731BD9AD79448B860BBB178FE77644_StaticFields*)il2cpp_codegen_static_fields_for(ES3Type_float_tF86B773C86731BD9AD79448B860BBB178FE77644_il2cpp_TypeInfo_var))->get_Instance_12();
			NullCheck((ES3Reader_t2780AF8AA61DA2A817115CEF8612AC0E494D03C9 *)L_189);
			float L_191;
			L_191 = GenericVirtFuncInvoker1< float, ES3Type_t8FBECB7AE75168648B9524E0C2A38DAD4555421D * >::Invoke(ES3Reader_Read_TisSingle_tE07797BA3C98D4CA9B5A19413C19A76688AB899E_m4A0416374498BDA042B8EB21E49B72326D6CE5F4_RuntimeMethod_var, (ES3Reader_t2780AF8AA61DA2A817115CEF8612AC0E494D03C9 *)L_189, (ES3Type_t8FBECB7AE75168648B9524E0C2A38DAD4555421D *)L_190);
			NullCheck((Texture_t9FE0218A1EEDF266E8C85879FE123265CACC95AE *)L_188);
			Texture_set_mipMapBias_m5057ADA9DBA8E8E30EC15EA5BABFA0734CE2821C((Texture_t9FE0218A1EEDF266E8C85879FE123265CACC95AE *)L_188, (float)L_191, /*hidden argument*/NULL);
			// break;
			goto IL_0721;
		}

IL_067f:
		{
			// instance.name = reader.Read<System.String>(ES3Type_string.Instance);
			RenderTexture_t5FE7A5B47EF962A0E8D7BEBA05E9FC87D49A1849 * L_192 = V_0;
			ES3Reader_t2780AF8AA61DA2A817115CEF8612AC0E494D03C9 * L_193 = ___reader0;
			IL2CPP_RUNTIME_CLASS_INIT(ES3Type_string_tC47BFBE3CC816F3C70B51558C68F0C6470C5EFE5_il2cpp_TypeInfo_var);
			ES3Type_t8FBECB7AE75168648B9524E0C2A38DAD4555421D * L_194 = ((ES3Type_string_tC47BFBE3CC816F3C70B51558C68F0C6470C5EFE5_StaticFields*)il2cpp_codegen_static_fields_for(ES3Type_string_tC47BFBE3CC816F3C70B51558C68F0C6470C5EFE5_il2cpp_TypeInfo_var))->get_Instance_12();
			NullCheck((ES3Reader_t2780AF8AA61DA2A817115CEF8612AC0E494D03C9 *)L_193);
			String_t* L_195;
			L_195 = GenericVirtFuncInvoker1< String_t*, ES3Type_t8FBECB7AE75168648B9524E0C2A38DAD4555421D * >::Invoke(ES3Reader_Read_TisString_t_m883861F3B58239392073ABF39876826EEB87DF9C_RuntimeMethod_var, (ES3Reader_t2780AF8AA61DA2A817115CEF8612AC0E494D03C9 *)L_193, (ES3Type_t8FBECB7AE75168648B9524E0C2A38DAD4555421D *)L_194);
			NullCheck((Object_tF2F3778131EFF286AF62B7B013A170F95A91571A *)L_192);
			Object_set_name_m87C4006618ADB325ABE5439DF159E10DD8DD0781((Object_tF2F3778131EFF286AF62B7B013A170F95A91571A *)L_192, (String_t*)L_195, /*hidden argument*/NULL);
			// break;
			goto IL_0721;
		}

IL_0695:
		{
			// instance.vrUsage = reader.Read<UnityEngine.VRTextureUsage>();
			RenderTexture_t5FE7A5B47EF962A0E8D7BEBA05E9FC87D49A1849 * L_196 = V_0;
			ES3Reader_t2780AF8AA61DA2A817115CEF8612AC0E494D03C9 * L_197 = ___reader0;
			NullCheck((ES3Reader_t2780AF8AA61DA2A817115CEF8612AC0E494D03C9 *)L_197);
			int32_t L_198;
			L_198 = GenericVirtFuncInvoker0< int32_t >::Invoke(ES3Reader_Read_TisVRTextureUsage_t3C09DF3DD90B5620BC0AB6F8078DFEF4E607F645_m7DE3966E4815BB13132866CB005EEE5B90FF51C2_RuntimeMethod_var, (ES3Reader_t2780AF8AA61DA2A817115CEF8612AC0E494D03C9 *)L_197);
			NullCheck((RenderTexture_t5FE7A5B47EF962A0E8D7BEBA05E9FC87D49A1849 *)L_196);
			RenderTexture_set_vrUsage_m9AF7F60442E3B933FDF274D801EA074D1A5ECB71((RenderTexture_t5FE7A5B47EF962A0E8D7BEBA05E9FC87D49A1849 *)L_196, (int32_t)L_198, /*hidden argument*/NULL);
			// break;
			goto IL_0721;
		}

IL_06a3:
		{
			// instance.graphicsFormat = reader.Read<UnityEngine.Experimental.Rendering.GraphicsFormat>();
			RenderTexture_t5FE7A5B47EF962A0E8D7BEBA05E9FC87D49A1849 * L_199 = V_0;
			ES3Reader_t2780AF8AA61DA2A817115CEF8612AC0E494D03C9 * L_200 = ___reader0;
			NullCheck((ES3Reader_t2780AF8AA61DA2A817115CEF8612AC0E494D03C9 *)L_200);
			int32_t L_201;
			L_201 = GenericVirtFuncInvoker0< int32_t >::Invoke(ES3Reader_Read_TisGraphicsFormat_t07A3C024BC77B843C53A369D6FC02ABD27D2AB1D_mCBD36004B10F649C93215AB4717F6F0D7118BF7D_RuntimeMethod_var, (ES3Reader_t2780AF8AA61DA2A817115CEF8612AC0E494D03C9 *)L_200);
			NullCheck((RenderTexture_t5FE7A5B47EF962A0E8D7BEBA05E9FC87D49A1849 *)L_199);
			RenderTexture_set_graphicsFormat_mA378AAD8BD876EE96637FF0A80A2AFEA4D852FAB((RenderTexture_t5FE7A5B47EF962A0E8D7BEBA05E9FC87D49A1849 *)L_199, (int32_t)L_201, /*hidden argument*/NULL);
			// break;
			goto IL_0721;
		}

IL_06b1:
		{
			// instance.stencilFormat = reader.Read<UnityEngine.Experimental.Rendering.GraphicsFormat>();
			RenderTexture_t5FE7A5B47EF962A0E8D7BEBA05E9FC87D49A1849 * L_202 = V_0;
			ES3Reader_t2780AF8AA61DA2A817115CEF8612AC0E494D03C9 * L_203 = ___reader0;
			NullCheck((ES3Reader_t2780AF8AA61DA2A817115CEF8612AC0E494D03C9 *)L_203);
			int32_t L_204;
			L_204 = GenericVirtFuncInvoker0< int32_t >::Invoke(ES3Reader_Read_TisGraphicsFormat_t07A3C024BC77B843C53A369D6FC02ABD27D2AB1D_mCBD36004B10F649C93215AB4717F6F0D7118BF7D_RuntimeMethod_var, (ES3Reader_t2780AF8AA61DA2A817115CEF8612AC0E494D03C9 *)L_203);
			NullCheck((RenderTexture_t5FE7A5B47EF962A0E8D7BEBA05E9FC87D49A1849 *)L_202);
			RenderTexture_set_stencilFormat_m7C6E21FCDB7E786D403CFC9775105B050EFF19C7((RenderTexture_t5FE7A5B47EF962A0E8D7BEBA05E9FC87D49A1849 *)L_202, (int32_t)L_204, /*hidden argument*/NULL);
			// break;
			goto IL_0721;
		}

IL_06bf:
		{
			// instance.bindTextureMS = reader.Read<System.Boolean>(ES3Type_bool.Instance);
			RenderTexture_t5FE7A5B47EF962A0E8D7BEBA05E9FC87D49A1849 * L_205 = V_0;
			ES3Reader_t2780AF8AA61DA2A817115CEF8612AC0E494D03C9 * L_206 = ___reader0;
			IL2CPP_RUNTIME_CLASS_INIT(ES3Type_bool_t8F309F7B9CC735FF1DEE68081B6E3CAB367745F4_il2cpp_TypeInfo_var);
			ES3Type_t8FBECB7AE75168648B9524E0C2A38DAD4555421D * L_207 = ((ES3Type_bool_t8F309F7B9CC735FF1DEE68081B6E3CAB367745F4_StaticFields*)il2cpp_codegen_static_fields_for(ES3Type_bool_t8F309F7B9CC735FF1DEE68081B6E3CAB367745F4_il2cpp_TypeInfo_var))->get_Instance_12();
			NullCheck((ES3Reader_t2780AF8AA61DA2A817115CEF8612AC0E494D03C9 *)L_206);
			bool L_208;
			L_208 = GenericVirtFuncInvoker1< bool, ES3Type_t8FBECB7AE75168648B9524E0C2A38DAD4555421D * >::Invoke(ES3Reader_Read_TisBoolean_t07D1E3F34E4813023D64F584DFF7B34C9D922F37_mC6D1B158268FF9B97822FF9F5B37FB1723FEDA22_RuntimeMethod_var, (ES3Reader_t2780AF8AA61DA2A817115CEF8612AC0E494D03C9 *)L_206, (ES3Type_t8FBECB7AE75168648B9524E0C2A38DAD4555421D *)L_207);
			NullCheck((RenderTexture_t5FE7A5B47EF962A0E8D7BEBA05E9FC87D49A1849 *)L_205);
			RenderTexture_set_bindTextureMS_m6C26F6AB2DE8FE81BFCA60C936AA08EA7F1A7177((RenderTexture_t5FE7A5B47EF962A0E8D7BEBA05E9FC87D49A1849 *)L_205, (bool)L_208, /*hidden argument*/NULL);
			// break;
			goto IL_0721;
		}

IL_06d2:
		{
			// instance.useDynamicScale = reader.Read<System.Boolean>(ES3Type_bool.Instance);
			RenderTexture_t5FE7A5B47EF962A0E8D7BEBA05E9FC87D49A1849 * L_209 = V_0;
			ES3Reader_t2780AF8AA61DA2A817115CEF8612AC0E494D03C9 * L_210 = ___reader0;
			IL2CPP_RUNTIME_CLASS_INIT(ES3Type_bool_t8F309F7B9CC735FF1DEE68081B6E3CAB367745F4_il2cpp_TypeInfo_var);
			ES3Type_t8FBECB7AE75168648B9524E0C2A38DAD4555421D * L_211 = ((ES3Type_bool_t8F309F7B9CC735FF1DEE68081B6E3CAB367745F4_StaticFields*)il2cpp_codegen_static_fields_for(ES3Type_bool_t8F309F7B9CC735FF1DEE68081B6E3CAB367745F4_il2cpp_TypeInfo_var))->get_Instance_12();
			NullCheck((ES3Reader_t2780AF8AA61DA2A817115CEF8612AC0E494D03C9 *)L_210);
			bool L_212;
			L_212 = GenericVirtFuncInvoker1< bool, ES3Type_t8FBECB7AE75168648B9524E0C2A38DAD4555421D * >::Invoke(ES3Reader_Read_TisBoolean_t07D1E3F34E4813023D64F584DFF7B34C9D922F37_mC6D1B158268FF9B97822FF9F5B37FB1723FEDA22_RuntimeMethod_var, (ES3Reader_t2780AF8AA61DA2A817115CEF8612AC0E494D03C9 *)L_210, (ES3Type_t8FBECB7AE75168648B9524E0C2A38DAD4555421D *)L_211);
			NullCheck((RenderTexture_t5FE7A5B47EF962A0E8D7BEBA05E9FC87D49A1849 *)L_209);
			RenderTexture_set_useDynamicScale_m8F96571C7EDBEFAB9278E04A3F3EB67067A5AE29((RenderTexture_t5FE7A5B47EF962A0E8D7BEBA05E9FC87D49A1849 *)L_209, (bool)L_212, /*hidden argument*/NULL);
			// break;
			goto IL_0721;
		}

IL_06e5:
		{
			// UnityEngine.RenderTexture.streamingTextureForceLoadAll = reader.Read<System.Boolean>(ES3Type_bool.Instance);
			ES3Reader_t2780AF8AA61DA2A817115CEF8612AC0E494D03C9 * L_213 = ___reader0;
			IL2CPP_RUNTIME_CLASS_INIT(ES3Type_bool_t8F309F7B9CC735FF1DEE68081B6E3CAB367745F4_il2cpp_TypeInfo_var);
			ES3Type_t8FBECB7AE75168648B9524E0C2A38DAD4555421D * L_214 = ((ES3Type_bool_t8F309F7B9CC735FF1DEE68081B6E3CAB367745F4_StaticFields*)il2cpp_codegen_static_fields_for(ES3Type_bool_t8F309F7B9CC735FF1DEE68081B6E3CAB367745F4_il2cpp_TypeInfo_var))->get_Instance_12();
			NullCheck((ES3Reader_t2780AF8AA61DA2A817115CEF8612AC0E494D03C9 *)L_213);
			bool L_215;
			L_215 = GenericVirtFuncInvoker1< bool, ES3Type_t8FBECB7AE75168648B9524E0C2A38DAD4555421D * >::Invoke(ES3Reader_Read_TisBoolean_t07D1E3F34E4813023D64F584DFF7B34C9D922F37_mC6D1B158268FF9B97822FF9F5B37FB1723FEDA22_RuntimeMethod_var, (ES3Reader_t2780AF8AA61DA2A817115CEF8612AC0E494D03C9 *)L_213, (ES3Type_t8FBECB7AE75168648B9524E0C2A38DAD4555421D *)L_214);
			IL2CPP_RUNTIME_CLASS_INIT(Texture_t9FE0218A1EEDF266E8C85879FE123265CACC95AE_il2cpp_TypeInfo_var);
			Texture_set_streamingTextureForceLoadAll_m325117C0830BB9B4316CF41CEE045759FC52B7A3((bool)L_215, /*hidden argument*/NULL);
			// break;
			goto IL_0721;
		}

IL_06f7:
		{
			// UnityEngine.RenderTexture.streamingTextureDiscardUnusedMips = reader.Read<System.Boolean>(ES3Type_bool.Instance);
			ES3Reader_t2780AF8AA61DA2A817115CEF8612AC0E494D03C9 * L_216 = ___reader0;
			IL2CPP_RUNTIME_CLASS_INIT(ES3Type_bool_t8F309F7B9CC735FF1DEE68081B6E3CAB367745F4_il2cpp_TypeInfo_var);
			ES3Type_t8FBECB7AE75168648B9524E0C2A38DAD4555421D * L_217 = ((ES3Type_bool_t8F309F7B9CC735FF1DEE68081B6E3CAB367745F4_StaticFields*)il2cpp_codegen_static_fields_for(ES3Type_bool_t8F309F7B9CC735FF1DEE68081B6E3CAB367745F4_il2cpp_TypeInfo_var))->get_Instance_12();
			NullCheck((ES3Reader_t2780AF8AA61DA2A817115CEF8612AC0E494D03C9 *)L_216);
			bool L_218;
			L_218 = GenericVirtFuncInvoker1< bool, ES3Type_t8FBECB7AE75168648B9524E0C2A38DAD4555421D * >::Invoke(ES3Reader_Read_TisBoolean_t07D1E3F34E4813023D64F584DFF7B34C9D922F37_mC6D1B158268FF9B97822FF9F5B37FB1723FEDA22_RuntimeMethod_var, (ES3Reader_t2780AF8AA61DA2A817115CEF8612AC0E494D03C9 *)L_216, (ES3Type_t8FBECB7AE75168648B9524E0C2A38DAD4555421D *)L_217);
			IL2CPP_RUNTIME_CLASS_INIT(Texture_t9FE0218A1EEDF266E8C85879FE123265CACC95AE_il2cpp_TypeInfo_var);
			Texture_set_streamingTextureDiscardUnusedMips_mE184CE016A8E0319B437D34E0DB61962CE17F5DC((bool)L_218, /*hidden argument*/NULL);
			// break;
			goto IL_0721;
		}

IL_0709:
		{
			// UnityEngine.RenderTexture.allowThreadedTextureCreation = reader.Read<System.Boolean>(ES3Type_bool.Instance);
			ES3Reader_t2780AF8AA61DA2A817115CEF8612AC0E494D03C9 * L_219 = ___reader0;
			IL2CPP_RUNTIME_CLASS_INIT(ES3Type_bool_t8F309F7B9CC735FF1DEE68081B6E3CAB367745F4_il2cpp_TypeInfo_var);
			ES3Type_t8FBECB7AE75168648B9524E0C2A38DAD4555421D * L_220 = ((ES3Type_bool_t8F309F7B9CC735FF1DEE68081B6E3CAB367745F4_StaticFields*)il2cpp_codegen_static_fields_for(ES3Type_bool_t8F309F7B9CC735FF1DEE68081B6E3CAB367745F4_il2cpp_TypeInfo_var))->get_Instance_12();
			NullCheck((ES3Reader_t2780AF8AA61DA2A817115CEF8612AC0E494D03C9 *)L_219);
			bool L_221;
			L_221 = GenericVirtFuncInvoker1< bool, ES3Type_t8FBECB7AE75168648B9524E0C2A38DAD4555421D * >::Invoke(ES3Reader_Read_TisBoolean_t07D1E3F34E4813023D64F584DFF7B34C9D922F37_mC6D1B158268FF9B97822FF9F5B37FB1723FEDA22_RuntimeMethod_var, (ES3Reader_t2780AF8AA61DA2A817115CEF8612AC0E494D03C9 *)L_219, (ES3Type_t8FBECB7AE75168648B9524E0C2A38DAD4555421D *)L_220);
			IL2CPP_RUNTIME_CLASS_INIT(Texture_t9FE0218A1EEDF266E8C85879FE123265CACC95AE_il2cpp_TypeInfo_var);
			Texture_set_allowThreadedTextureCreation_m84D29394912B9CE876023963426256CBEB15A52E((bool)L_221, /*hidden argument*/NULL);
			// break;
			goto IL_0721;
		}

IL_071b:
		{
			// reader.Skip();
			ES3Reader_t2780AF8AA61DA2A817115CEF8612AC0E494D03C9 * L_222 = ___reader0;
			NullCheck((ES3Reader_t2780AF8AA61DA2A817115CEF8612AC0E494D03C9 *)L_222);
			VirtActionInvoker0::Invoke(41 /* System.Void ES3Reader::Skip() */, (ES3Reader_t2780AF8AA61DA2A817115CEF8612AC0E494D03C9 *)L_222);
		}

IL_0721:
		{
			// foreach (string propertyName in reader.Properties)
			RuntimeObject* L_223 = V_1;
			NullCheck((RuntimeObject*)L_223);
			bool L_224;
			L_224 = InterfaceFuncInvoker0< bool >::Invoke(0 /* System.Boolean System.Collections.IEnumerator::MoveNext() */, IEnumerator_t5956F3AFB7ECF1117E3BC5890E7FC7B7F7A04105_il2cpp_TypeInfo_var, (RuntimeObject*)L_223);
			if (L_224)
			{
				goto IL_0018;
			}
		}

IL_072c:
		{
			IL2CPP_LEAVE(0x742, FINALLY_072e);
		}
	} // end try (depth: 1)
	catch(Il2CppExceptionWrapper& e)
	{
		__last_unhandled_exception = (Exception_t *)e.ex;
		goto FINALLY_072e;
	}

FINALLY_072e:
	{ // begin finally (depth: 1)
		{
			RuntimeObject* L_225 = V_1;
			V_4 = (RuntimeObject*)((RuntimeObject*)IsInst((RuntimeObject*)L_225, IDisposable_t099785737FC6A1E3699919A94109383715A8D807_il2cpp_TypeInfo_var));
			RuntimeObject* L_226 = V_4;
			if (!L_226)
			{
				goto IL_0741;
			}
		}

IL_073a:
		{
			RuntimeObject* L_227 = V_4;
			NullCheck((RuntimeObject*)L_227);
			InterfaceActionInvoker0::Invoke(0 /* System.Void System.IDisposable::Dispose() */, IDisposable_t099785737FC6A1E3699919A94109383715A8D807_il2cpp_TypeInfo_var, (RuntimeObject*)L_227);
		}

IL_0741:
		{
			IL2CPP_END_FINALLY(1838)
		}
	} // end finally (depth: 1)
	IL2CPP_CLEANUP(1838)
	{
		IL2CPP_RETHROW_IF_UNHANDLED(Exception_t *)
		IL2CPP_JUMP_TBL(0x742, IL_0742)
	}

IL_0742:
	{
		// }
		return;
	}
}
// System.Void ES3Types.ES3Type_RenderTexture::ReadObject<UnityEngine.ParticleSystem/SizeBySpeedModule>(ES3Reader,System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ES3Type_RenderTexture_ReadObject_TisSizeBySpeedModule_t156070A63E0A483D36BCAE783BA554CDA7CAF752_m20B4C7FF306994CF2FE640D23EF43213C6EB73D4_gshared (ES3Type_RenderTexture_t7B14573C56809AFDC0A1C481D6B61E2146DEF194 * __this, ES3Reader_t2780AF8AA61DA2A817115CEF8612AC0E494D03C9 * ___reader0, RuntimeObject * ___obj1, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ES3Reader_Read_TisAnisotropicFiltering_tAC3D1448B262D5869946CD1CDD2C8DAE3A7A537B_mAF1268AAC3E461D6E0604A19FAF0325873B6EC8A_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ES3Reader_Read_TisBoolean_t07D1E3F34E4813023D64F584DFF7B34C9D922F37_mC6D1B158268FF9B97822FF9F5B37FB1723FEDA22_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ES3Reader_Read_TisFilterMode_tE90A08FD96A142C761463D65E524BCDBFEEE3D19_m9819C2A442797B4060B0D9A80CFA96CFD6102839_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ES3Reader_Read_TisGraphicsFormat_t07A3C024BC77B843C53A369D6FC02ABD27D2AB1D_mCBD36004B10F649C93215AB4717F6F0D7118BF7D_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ES3Reader_Read_TisInt32_tFDE5F8CD43D10453F6A2E0C77FE48C6CC7009046_m2B74AA6627F5B1D21171D56C42F71DE5A7C1B4A6_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ES3Reader_Read_TisRenderTextureDescriptor_t67FF189E1F35AEB5D6C43A2D7103F3A8A8CA0B47_m427886ADAAF96C7BA9BD423544128494F96D69E7_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ES3Reader_Read_TisRenderTextureFormat_t8371287102ED67772EF78229CF4AB9D38C2CD626_mE6358E03407F5C15B58B292C79D4770DE3FAC95A_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ES3Reader_Read_TisRenderTextureMemoryless_t37547D68C2186D2650440F719302CDA4A3BB7F67_m3A980BA15AADBBB8393C3BC88CE17EEDDC89B027_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ES3Reader_Read_TisSingle_tE07797BA3C98D4CA9B5A19413C19A76688AB899E_m4A0416374498BDA042B8EB21E49B72326D6CE5F4_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ES3Reader_Read_TisString_t_m883861F3B58239392073ABF39876826EEB87DF9C_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ES3Reader_Read_TisTextureDimension_tADCCB7C1D30E4D1182651BA9094B4DE61B63EACC_m19EAA3B93D10636C17A62A3D8437349223CFD988_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ES3Reader_Read_TisTextureWrapMode_t86DDA8206E4AA784A1218D0DE3C5F6826D7549EB_m7926E449CD0B8BD56E5BF145DD0CCFE1C567F107_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ES3Reader_Read_TisVRTextureUsage_t3C09DF3DD90B5620BC0AB6F8078DFEF4E607F645_m7DE3966E4815BB13132866CB005EEE5B90FF51C2_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ES3Type_bool_t8F309F7B9CC735FF1DEE68081B6E3CAB367745F4_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ES3Type_float_tF86B773C86731BD9AD79448B860BBB178FE77644_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ES3Type_int_tF64C15D40AD0CC7C15BCD1CEC3C5C6BF837BD167_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ES3Type_string_tC47BFBE3CC816F3C70B51558C68F0C6470C5EFE5_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IDisposable_t099785737FC6A1E3699919A94109383715A8D807_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IEnumerator_t5956F3AFB7ECF1117E3BC5890E7FC7B7F7A04105_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&RenderTexture_t5FE7A5B47EF962A0E8D7BEBA05E9FC87D49A1849_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&String_t_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Texture_t9FE0218A1EEDF266E8C85879FE123265CACC95AE_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral201D9D00BB60DC2318D21CF9902290EFE255D5DC);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral2ADFC3FFF7C52D554F0435A348A5345C9FCD7FF8);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral2E201D1972661439FD3C8523C55723E7E9BCC7DA);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral2EE7B6B0E37E14930BBA497867139BFD0617CE04);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral3A04F86957625CB28FA670EECF997E6BAD45BBE7);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral3BC15E3C2F40466B2DC85C4776499817B8306CBB);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral3F1522C8DB7943F2AE3AA1563D3AC25D9C8B93D1);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral53D3413057D7E52F44470A335C590748745352B1);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral647E0FB2B5E859CC4BD7C73623B82C8EFABA2563);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral65B008F04EC40A696263EF679CF274BD10999A5D);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral71C5F9C3E2F3C81C5BBC7FD313F6938654E61138);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral75C9716749EA210206E3467390B7A11F3F33DDFA);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral7606720A7AEF5939309A8E4FCB8274252FA3D7BF);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral7A4A6E2A7090298F814A9D44C89F8634249BEF07);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral7FF61C3A55BCA1287974D8740F945250B3F0F084);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral83AC9669A9053DD15B9F2E82D2CE2369EFE131BA);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral95F57476C0AA778364404E7CCCD7499BF1BF3757);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral9AB5ADF8A8A53110245466F7C226F7935F5FE95F);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralB49A1DF483856544CEC6018E8C944DB6E16A8D57);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralBA9362732D25B1644B7D8DEC5DF6F036A4A66DE5);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralC959D767B7F0BD38D9DA8A64A4750C3A0972E2A0);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralCD44AC57FFE6CAC7824F4CAA223F1BB8B4CB0D73);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralCE18B047107AA23D1AA9B2ED32D316148E02655F);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralEA8FBF382D8AC9EDB8FFC14A350641B987F5C631);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralEBF5FE0CBF3EEA67902EEA700B7216E3DB0D8E84);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralECAEEB225F8689DE45DEB4FA21CE34E1960B1B50);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralF23E83744C9D6FC70D71B723AAED8006D6780BCB);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralF2AF7DD0BFF41B7B35037F018DAABE7DCF357A7B);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralF38CFAE6A91D072D4453C29FF44D81D459A582F1);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralF3FA58C10BBB9830102605E24AF89DC619908DFA);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralF9EE582B77C320A1F6A3DF72205857C4248BAC79);
		s_Il2CppMethodInitialized = true;
	}
	RenderTexture_t5FE7A5B47EF962A0E8D7BEBA05E9FC87D49A1849 * V_0 = NULL;
	RuntimeObject* V_1 = NULL;
	String_t* V_2 = NULL;
	uint32_t V_3 = 0;
	RuntimeObject* V_4 = NULL;
	Exception_t * __last_unhandled_exception = 0;
	il2cpp::utils::ExceptionSupportStack<int32_t, 1> __leave_targets;
	{
		// var instance = (UnityEngine.RenderTexture)obj;
		RuntimeObject * L_0 = ___obj1;
		V_0 = (RenderTexture_t5FE7A5B47EF962A0E8D7BEBA05E9FC87D49A1849 *)((RenderTexture_t5FE7A5B47EF962A0E8D7BEBA05E9FC87D49A1849 *)Castclass((RuntimeObject*)L_0, RenderTexture_t5FE7A5B47EF962A0E8D7BEBA05E9FC87D49A1849_il2cpp_TypeInfo_var));
		// foreach (string propertyName in reader.Properties)
		ES3Reader_t2780AF8AA61DA2A817115CEF8612AC0E494D03C9 * L_1 = ___reader0;
		NullCheck((ES3Reader_t2780AF8AA61DA2A817115CEF8612AC0E494D03C9 *)L_1);
		ES3ReaderPropertyEnumerator_tFC854F4BE72BFA234682EB1909D92457534A979D * L_2;
		L_2 = VirtFuncInvoker0< ES3ReaderPropertyEnumerator_tFC854F4BE72BFA234682EB1909D92457534A979D * >::Invoke(39 /* ES3Reader/ES3ReaderPropertyEnumerator ES3Reader::get_Properties() */, (ES3Reader_t2780AF8AA61DA2A817115CEF8612AC0E494D03C9 *)L_1);
		NullCheck((ES3ReaderPropertyEnumerator_tFC854F4BE72BFA234682EB1909D92457534A979D *)L_2);
		RuntimeObject* L_3;
		L_3 = ES3ReaderPropertyEnumerator_GetEnumerator_m6C61168655E3736E7847E5CB1CD9BC6B48442FD4((ES3ReaderPropertyEnumerator_tFC854F4BE72BFA234682EB1909D92457534A979D *)L_2, /*hidden argument*/NULL);
		V_1 = (RuntimeObject*)L_3;
	}

IL_0013:
	try
	{ // begin try (depth: 1)
		{
			goto IL_0721;
		}

IL_0018:
		{
			// foreach (string propertyName in reader.Properties)
			RuntimeObject* L_4 = V_1;
			NullCheck((RuntimeObject*)L_4);
			RuntimeObject * L_5;
			L_5 = InterfaceFuncInvoker0< RuntimeObject * >::Invoke(1 /* System.Object System.Collections.IEnumerator::get_Current() */, IEnumerator_t5956F3AFB7ECF1117E3BC5890E7FC7B7F7A04105_il2cpp_TypeInfo_var, (RuntimeObject*)L_4);
			V_2 = (String_t*)((String_t*)Castclass((RuntimeObject*)L_5, String_t_il2cpp_TypeInfo_var));
			String_t* L_6 = V_2;
			if (!L_6)
			{
				goto IL_071b;
			}
		}

IL_002a:
		{
			String_t* L_7 = V_2;
			uint32_t L_8;
			L_8 = U3CPrivateImplementationDetailsU3E_ComputeStringHash_m3ADC1F612F9EE3DD518E6F0023A0DE0EE2B120A7((String_t*)L_7, /*hidden argument*/NULL);
			V_3 = (uint32_t)L_8;
			uint32_t L_9 = V_3;
			if ((!(((uint32_t)L_9) <= ((uint32_t)((int32_t)1508062721)))))
			{
				goto IL_0134;
			}
		}

IL_003c:
		{
			uint32_t L_10 = V_3;
			if ((!(((uint32_t)L_10) <= ((uint32_t)((int32_t)698754697)))))
			{
				goto IL_00b0;
			}
		}

IL_0044:
		{
			uint32_t L_11 = V_3;
			if ((!(((uint32_t)L_11) <= ((uint32_t)((int32_t)472844700)))))
			{
				goto IL_0072;
			}
		}

IL_004c:
		{
			uint32_t L_12 = V_3;
			if ((((int32_t)L_12) == ((int32_t)((int32_t)87590155))))
			{
				goto IL_043c;
			}
		}

IL_0057:
		{
			uint32_t L_13 = V_3;
			if ((((int32_t)L_13) == ((int32_t)((int32_t)301255720))))
			{
				goto IL_02d7;
			}
		}

IL_0062:
		{
			uint32_t L_14 = V_3;
			if ((((int32_t)L_14) == ((int32_t)((int32_t)472844700))))
			{
				goto IL_0283;
			}
		}

IL_006d:
		{
			goto IL_071b;
		}

IL_0072:
		{
			uint32_t L_15 = V_3;
			if ((!(((uint32_t)L_15) <= ((uint32_t)((int32_t)549791583)))))
			{
				goto IL_0095;
			}
		}

IL_007a:
		{
			uint32_t L_16 = V_3;
			if ((((int32_t)L_16) == ((int32_t)((int32_t)533013964))))
			{
				goto IL_03a9;
			}
		}

IL_0085:
		{
			uint32_t L_17 = V_3;
			if ((((int32_t)L_17) == ((int32_t)((int32_t)549791583))))
			{
				goto IL_03be;
			}
		}

IL_0090:
		{
			goto IL_071b;
		}

IL_0095:
		{
			uint32_t L_18 = V_3;
			if ((((int32_t)L_18) == ((int32_t)((int32_t)583346821))))
			{
				goto IL_0394;
			}
		}

IL_00a0:
		{
			uint32_t L_19 = V_3;
			if ((((int32_t)L_19) == ((int32_t)((int32_t)698754697))))
			{
				goto IL_02ec;
			}
		}

IL_00ab:
		{
			goto IL_071b;
		}

IL_00b0:
		{
			uint32_t L_20 = V_3;
			if ((!(((uint32_t)L_20) <= ((uint32_t)((int32_t)1235622516)))))
			{
				goto IL_00f6;
			}
		}

IL_00b8:
		{
			uint32_t L_21 = V_3;
			if ((!(((uint32_t)L_21) <= ((uint32_t)((int32_t)740612720)))))
			{
				goto IL_00db;
			}
		}

IL_00c0:
		{
			uint32_t L_22 = V_3;
			if ((((int32_t)L_22) == ((int32_t)((int32_t)705796271))))
			{
				goto IL_0316;
			}
		}

IL_00cb:
		{
			uint32_t L_23 = V_3;
			if ((((int32_t)L_23) == ((int32_t)((int32_t)740612720))))
			{
				goto IL_03d3;
			}
		}

IL_00d6:
		{
			goto IL_071b;
		}

IL_00db:
		{
			uint32_t L_24 = V_3;
			if ((((int32_t)L_24) == ((int32_t)((int32_t)1059843136))))
			{
				goto IL_0340;
			}
		}

IL_00e6:
		{
			uint32_t L_25 = V_3;
			if ((((int32_t)L_25) == ((int32_t)((int32_t)1235622516))))
			{
				goto IL_036a;
			}
		}

IL_00f1:
		{
			goto IL_071b;
		}

IL_00f6:
		{
			uint32_t L_26 = V_3;
			if ((!(((uint32_t)L_26) <= ((uint32_t)((int32_t)1320492961)))))
			{
				goto IL_0119;
			}
		}

IL_00fe:
		{
			uint32_t L_27 = V_3;
			if ((((int32_t)L_27) == ((int32_t)((int32_t)1310955452))))
			{
				goto IL_0490;
			}
		}

IL_0109:
		{
			uint32_t L_28 = V_3;
			if ((((int32_t)L_28) == ((int32_t)((int32_t)1320492961))))
			{
				goto IL_047b;
			}
		}

IL_0114:
		{
			goto IL_071b;
		}

IL_0119:
		{
			uint32_t L_29 = V_3;
			if ((((int32_t)L_29) == ((int32_t)((int32_t)1458352709))))
			{
				goto IL_0466;
			}
		}

IL_0124:
		{
			uint32_t L_30 = V_3;
			if ((((int32_t)L_30) == ((int32_t)((int32_t)1508062721))))
			{
				goto IL_04a5;
			}
		}

IL_012f:
		{
			goto IL_071b;
		}

IL_0134:
		{
			uint32_t L_31 = V_3;
			if ((!(((uint32_t)L_31) <= ((uint32_t)((int32_t)-1444332543)))))
			{
				goto IL_01c3;
			}
		}

IL_013f:
		{
			uint32_t L_32 = V_3;
			if ((!(((uint32_t)L_32) <= ((uint32_t)((int32_t)2129631044)))))
			{
				goto IL_0185;
			}
		}

IL_0147:
		{
			uint32_t L_33 = V_3;
			if ((!(((uint32_t)L_33) <= ((uint32_t)((int32_t)1640355324)))))
			{
				goto IL_016a;
			}
		}

IL_014f:
		{
			uint32_t L_34 = V_3;
			if ((((int32_t)L_34) == ((int32_t)((int32_t)1560124071))))
			{
				goto IL_04ba;
			}
		}

IL_015a:
		{
			uint32_t L_35 = V_3;
			if ((((int32_t)L_35) == ((int32_t)((int32_t)1640355324))))
			{
				goto IL_0451;
			}
		}

IL_0165:
		{
			goto IL_071b;
		}

IL_016a:
		{
			uint32_t L_36 = V_3;
			if ((((int32_t)L_36) == ((int32_t)((int32_t)1728801507))))
			{
				goto IL_026e;
			}
		}

IL_0175:
		{
			uint32_t L_37 = V_3;
			if ((((int32_t)L_37) == ((int32_t)((int32_t)2129631044))))
			{
				goto IL_03fd;
			}
		}

IL_0180:
		{
			goto IL_071b;
		}

IL_0185:
		{
			uint32_t L_38 = V_3;
			if ((!(((uint32_t)L_38) <= ((uint32_t)((int32_t)-1786286561)))))
			{
				goto IL_01a8;
			}
		}

IL_018d:
		{
			uint32_t L_39 = V_3;
			if ((((int32_t)L_39) == ((int32_t)((int32_t)-1925595674))))
			{
				goto IL_0412;
			}
		}

IL_0198:
		{
			uint32_t L_40 = V_3;
			if ((((int32_t)L_40) == ((int32_t)((int32_t)-1786286561))))
			{
				goto IL_0244;
			}
		}

IL_01a3:
		{
			goto IL_071b;
		}

IL_01a8:
		{
			uint32_t L_41 = V_3;
			if ((((int32_t)L_41) == ((int32_t)((int32_t)-1522491664))))
			{
				goto IL_0298;
			}
		}

IL_01b3:
		{
			uint32_t L_42 = V_3;
			if ((((int32_t)L_42) == ((int32_t)((int32_t)-1444332543))))
			{
				goto IL_0355;
			}
		}

IL_01be:
		{
			goto IL_071b;
		}

IL_01c3:
		{
			uint32_t L_43 = V_3;
			if ((!(((uint32_t)L_43) <= ((uint32_t)((int32_t)-558361902)))))
			{
				goto IL_0206;
			}
		}

IL_01cb:
		{
			uint32_t L_44 = V_3;
			if ((!(((uint32_t)L_44) <= ((uint32_t)((int32_t)-1180859054)))))
			{
				goto IL_01ee;
			}
		}

IL_01d3:
		{
			uint32_t L_45 = V_3;
			if ((((int32_t)L_45) == ((int32_t)((int32_t)-1335745110))))
			{
				goto IL_02c2;
			}
		}

IL_01de:
		{
			uint32_t L_46 = V_3;
			if ((((int32_t)L_46) == ((int32_t)((int32_t)-1180859054))))
			{
				goto IL_02ad;
			}
		}

IL_01e9:
		{
			goto IL_071b;
		}

IL_01ee:
		{
			uint32_t L_47 = V_3;
			if ((((int32_t)L_47) == ((int32_t)((int32_t)-708986046))))
			{
				goto IL_0259;
			}
		}

IL_01f6:
		{
			uint32_t L_48 = V_3;
			if ((((int32_t)L_48) == ((int32_t)((int32_t)-558361902))))
			{
				goto IL_037f;
			}
		}

IL_0201:
		{
			goto IL_071b;
		}

IL_0206:
		{
			uint32_t L_49 = V_3;
			if ((!(((uint32_t)L_49) <= ((uint32_t)((int32_t)-255211260)))))
			{
				goto IL_0229;
			}
		}

IL_020e:
		{
			uint32_t L_50 = V_3;
			if ((((int32_t)L_50) == ((int32_t)((int32_t)-345285761))))
			{
				goto IL_03e8;
			}
		}

IL_0219:
		{
			uint32_t L_51 = V_3;
			if ((((int32_t)L_51) == ((int32_t)((int32_t)-255211260))))
			{
				goto IL_0427;
			}
		}

IL_0224:
		{
			goto IL_071b;
		}

IL_0229:
		{
			uint32_t L_52 = V_3;
			if ((((int32_t)L_52) == ((int32_t)((int32_t)-42086080))))
			{
				goto IL_0301;
			}
		}

IL_0234:
		{
			uint32_t L_53 = V_3;
			if ((((int32_t)L_53) == ((int32_t)((int32_t)-25846038))))
			{
				goto IL_032b;
			}
		}

IL_023f:
		{
			goto IL_071b;
		}

IL_0244:
		{
			String_t* L_54 = V_2;
			bool L_55;
			L_55 = String_op_Equality_m50B3548E4AC232558190B0052877B290AA1D436A((String_t*)L_54, (String_t*)_stringLiteralEBF5FE0CBF3EEA67902EEA700B7216E3DB0D8E84, /*hidden argument*/NULL);
			if (L_55)
			{
				goto IL_04cf;
			}
		}

IL_0254:
		{
			goto IL_071b;
		}

IL_0259:
		{
			String_t* L_56 = V_2;
			bool L_57;
			L_57 = String_op_Equality_m50B3548E4AC232558190B0052877B290AA1D436A((String_t*)L_56, (String_t*)_stringLiteral647E0FB2B5E859CC4BD7C73623B82C8EFABA2563, /*hidden argument*/NULL);
			if (L_57)
			{
				goto IL_04e5;
			}
		}

IL_0269:
		{
			goto IL_071b;
		}

IL_026e:
		{
			String_t* L_58 = V_2;
			bool L_59;
			L_59 = String_op_Equality_m50B3548E4AC232558190B0052877B290AA1D436A((String_t*)L_58, (String_t*)_stringLiteralF9EE582B77C320A1F6A3DF72205857C4248BAC79, /*hidden argument*/NULL);
			if (L_59)
			{
				goto IL_04fb;
			}
		}

IL_027e:
		{
			goto IL_071b;
		}

IL_0283:
		{
			String_t* L_60 = V_2;
			bool L_61;
			L_61 = String_op_Equality_m50B3548E4AC232558190B0052877B290AA1D436A((String_t*)L_60, (String_t*)_stringLiteral53D3413057D7E52F44470A335C590748745352B1, /*hidden argument*/NULL);
			if (L_61)
			{
				goto IL_050c;
			}
		}

IL_0293:
		{
			goto IL_071b;
		}

IL_0298:
		{
			String_t* L_62 = V_2;
			bool L_63;
			L_63 = String_op_Equality_m50B3548E4AC232558190B0052877B290AA1D436A((String_t*)L_62, (String_t*)_stringLiteralC959D767B7F0BD38D9DA8A64A4750C3A0972E2A0, /*hidden argument*/NULL);
			if (L_63)
			{
				goto IL_0522;
			}
		}

IL_02a8:
		{
			goto IL_071b;
		}

IL_02ad:
		{
			String_t* L_64 = V_2;
			bool L_65;
			L_65 = String_op_Equality_m50B3548E4AC232558190B0052877B290AA1D436A((String_t*)L_64, (String_t*)_stringLiteral75C9716749EA210206E3467390B7A11F3F33DDFA, /*hidden argument*/NULL);
			if (L_65)
			{
				goto IL_0533;
			}
		}

IL_02bd:
		{
			goto IL_071b;
		}

IL_02c2:
		{
			String_t* L_66 = V_2;
			bool L_67;
			L_67 = String_op_Equality_m50B3548E4AC232558190B0052877B290AA1D436A((String_t*)L_66, (String_t*)_stringLiteral7606720A7AEF5939309A8E4FCB8274252FA3D7BF, /*hidden argument*/NULL);
			if (L_67)
			{
				goto IL_0544;
			}
		}

IL_02d2:
		{
			goto IL_071b;
		}

IL_02d7:
		{
			String_t* L_68 = V_2;
			bool L_69;
			L_69 = String_op_Equality_m50B3548E4AC232558190B0052877B290AA1D436A((String_t*)L_68, (String_t*)_stringLiteral71C5F9C3E2F3C81C5BBC7FD313F6938654E61138, /*hidden argument*/NULL);
			if (L_69)
			{
				goto IL_055a;
			}
		}

IL_02e7:
		{
			goto IL_071b;
		}

IL_02ec:
		{
			String_t* L_70 = V_2;
			bool L_71;
			L_71 = String_op_Equality_m50B3548E4AC232558190B0052877B290AA1D436A((String_t*)L_70, (String_t*)_stringLiteral3F1522C8DB7943F2AE3AA1563D3AC25D9C8B93D1, /*hidden argument*/NULL);
			if (L_71)
			{
				goto IL_0570;
			}
		}

IL_02fc:
		{
			goto IL_071b;
		}

IL_0301:
		{
			String_t* L_72 = V_2;
			bool L_73;
			L_73 = String_op_Equality_m50B3548E4AC232558190B0052877B290AA1D436A((String_t*)L_72, (String_t*)_stringLiteralF23E83744C9D6FC70D71B723AAED8006D6780BCB, /*hidden argument*/NULL);
			if (L_73)
			{
				goto IL_0586;
			}
		}

IL_0311:
		{
			goto IL_071b;
		}

IL_0316:
		{
			String_t* L_74 = V_2;
			bool L_75;
			L_75 = String_op_Equality_m50B3548E4AC232558190B0052877B290AA1D436A((String_t*)L_74, (String_t*)_stringLiteralB49A1DF483856544CEC6018E8C944DB6E16A8D57, /*hidden argument*/NULL);
			if (L_75)
			{
				goto IL_059c;
			}
		}

IL_0326:
		{
			goto IL_071b;
		}

IL_032b:
		{
			String_t* L_76 = V_2;
			bool L_77;
			L_77 = String_op_Equality_m50B3548E4AC232558190B0052877B290AA1D436A((String_t*)L_76, (String_t*)_stringLiteral3A04F86957625CB28FA670EECF997E6BAD45BBE7, /*hidden argument*/NULL);
			if (L_77)
			{
				goto IL_05b2;
			}
		}

IL_033b:
		{
			goto IL_071b;
		}

IL_0340:
		{
			String_t* L_78 = V_2;
			bool L_79;
			L_79 = String_op_Equality_m50B3548E4AC232558190B0052877B290AA1D436A((String_t*)L_78, (String_t*)_stringLiteral7A4A6E2A7090298F814A9D44C89F8634249BEF07, /*hidden argument*/NULL);
			if (L_79)
			{
				goto IL_05c8;
			}
		}

IL_0350:
		{
			goto IL_071b;
		}

IL_0355:
		{
			String_t* L_80 = V_2;
			bool L_81;
			L_81 = String_op_Equality_m50B3548E4AC232558190B0052877B290AA1D436A((String_t*)L_80, (String_t*)_stringLiteralF3FA58C10BBB9830102605E24AF89DC619908DFA, /*hidden argument*/NULL);
			if (L_81)
			{
				goto IL_05d9;
			}
		}

IL_0365:
		{
			goto IL_071b;
		}

IL_036a:
		{
			String_t* L_82 = V_2;
			bool L_83;
			L_83 = String_op_Equality_m50B3548E4AC232558190B0052877B290AA1D436A((String_t*)L_82, (String_t*)_stringLiteralBA9362732D25B1644B7D8DEC5DF6F036A4A66DE5, /*hidden argument*/NULL);
			if (L_83)
			{
				goto IL_05ee;
			}
		}

IL_037a:
		{
			goto IL_071b;
		}

IL_037f:
		{
			String_t* L_84 = V_2;
			bool L_85;
			L_85 = String_op_Equality_m50B3548E4AC232558190B0052877B290AA1D436A((String_t*)L_84, (String_t*)_stringLiteral95F57476C0AA778364404E7CCCD7499BF1BF3757, /*hidden argument*/NULL);
			if (L_85)
			{
				goto IL_05fe;
			}
		}

IL_038f:
		{
			goto IL_071b;
		}

IL_0394:
		{
			String_t* L_86 = V_2;
			bool L_87;
			L_87 = String_op_Equality_m50B3548E4AC232558190B0052877B290AA1D436A((String_t*)L_86, (String_t*)_stringLiteral9AB5ADF8A8A53110245466F7C226F7935F5FE95F, /*hidden argument*/NULL);
			if (L_87)
			{
				goto IL_060f;
			}
		}

IL_03a4:
		{
			goto IL_071b;
		}

IL_03a9:
		{
			String_t* L_88 = V_2;
			bool L_89;
			L_89 = String_op_Equality_m50B3548E4AC232558190B0052877B290AA1D436A((String_t*)L_88, (String_t*)_stringLiteralEA8FBF382D8AC9EDB8FFC14A350641B987F5C631, /*hidden argument*/NULL);
			if (L_89)
			{
				goto IL_0620;
			}
		}

IL_03b9:
		{
			goto IL_071b;
		}

IL_03be:
		{
			String_t* L_90 = V_2;
			bool L_91;
			L_91 = String_op_Equality_m50B3548E4AC232558190B0052877B290AA1D436A((String_t*)L_90, (String_t*)_stringLiteral201D9D00BB60DC2318D21CF9902290EFE255D5DC, /*hidden argument*/NULL);
			if (L_91)
			{
				goto IL_0631;
			}
		}

IL_03ce:
		{
			goto IL_071b;
		}

IL_03d3:
		{
			String_t* L_92 = V_2;
			bool L_93;
			L_93 = String_op_Equality_m50B3548E4AC232558190B0052877B290AA1D436A((String_t*)L_92, (String_t*)_stringLiteral65B008F04EC40A696263EF679CF274BD10999A5D, /*hidden argument*/NULL);
			if (L_93)
			{
				goto IL_0642;
			}
		}

IL_03e3:
		{
			goto IL_071b;
		}

IL_03e8:
		{
			String_t* L_94 = V_2;
			bool L_95;
			L_95 = String_op_Equality_m50B3548E4AC232558190B0052877B290AA1D436A((String_t*)L_94, (String_t*)_stringLiteralF38CFAE6A91D072D4453C29FF44D81D459A582F1, /*hidden argument*/NULL);
			if (L_95)
			{
				goto IL_0653;
			}
		}

IL_03f8:
		{
			goto IL_071b;
		}

IL_03fd:
		{
			String_t* L_96 = V_2;
			bool L_97;
			L_97 = String_op_Equality_m50B3548E4AC232558190B0052877B290AA1D436A((String_t*)L_96, (String_t*)_stringLiteral3BC15E3C2F40466B2DC85C4776499817B8306CBB, /*hidden argument*/NULL);
			if (L_97)
			{
				goto IL_0669;
			}
		}

IL_040d:
		{
			goto IL_071b;
		}

IL_0412:
		{
			String_t* L_98 = V_2;
			bool L_99;
			L_99 = String_op_Equality_m50B3548E4AC232558190B0052877B290AA1D436A((String_t*)L_98, (String_t*)_stringLiteralCE18B047107AA23D1AA9B2ED32D316148E02655F, /*hidden argument*/NULL);
			if (L_99)
			{
				goto IL_067f;
			}
		}

IL_0422:
		{
			goto IL_071b;
		}

IL_0427:
		{
			String_t* L_100 = V_2;
			bool L_101;
			L_101 = String_op_Equality_m50B3548E4AC232558190B0052877B290AA1D436A((String_t*)L_100, (String_t*)_stringLiteral83AC9669A9053DD15B9F2E82D2CE2369EFE131BA, /*hidden argument*/NULL);
			if (L_101)
			{
				goto IL_0695;
			}
		}

IL_0437:
		{
			goto IL_071b;
		}

IL_043c:
		{
			String_t* L_102 = V_2;
			bool L_103;
			L_103 = String_op_Equality_m50B3548E4AC232558190B0052877B290AA1D436A((String_t*)L_102, (String_t*)_stringLiteralECAEEB225F8689DE45DEB4FA21CE34E1960B1B50, /*hidden argument*/NULL);
			if (L_103)
			{
				goto IL_06a3;
			}
		}

IL_044c:
		{
			goto IL_071b;
		}

IL_0451:
		{
			String_t* L_104 = V_2;
			bool L_105;
			L_105 = String_op_Equality_m50B3548E4AC232558190B0052877B290AA1D436A((String_t*)L_104, (String_t*)_stringLiteral2EE7B6B0E37E14930BBA497867139BFD0617CE04, /*hidden argument*/NULL);
			if (L_105)
			{
				goto IL_06b1;
			}
		}

IL_0461:
		{
			goto IL_071b;
		}

IL_0466:
		{
			String_t* L_106 = V_2;
			bool L_107;
			L_107 = String_op_Equality_m50B3548E4AC232558190B0052877B290AA1D436A((String_t*)L_106, (String_t*)_stringLiteralF2AF7DD0BFF41B7B35037F018DAABE7DCF357A7B, /*hidden argument*/NULL);
			if (L_107)
			{
				goto IL_06bf;
			}
		}

IL_0476:
		{
			goto IL_071b;
		}

IL_047b:
		{
			String_t* L_108 = V_2;
			bool L_109;
			L_109 = String_op_Equality_m50B3548E4AC232558190B0052877B290AA1D436A((String_t*)L_108, (String_t*)_stringLiteral7FF61C3A55BCA1287974D8740F945250B3F0F084, /*hidden argument*/NULL);
			if (L_109)
			{
				goto IL_06d2;
			}
		}

IL_048b:
		{
			goto IL_071b;
		}

IL_0490:
		{
			String_t* L_110 = V_2;
			bool L_111;
			L_111 = String_op_Equality_m50B3548E4AC232558190B0052877B290AA1D436A((String_t*)L_110, (String_t*)_stringLiteral2ADFC3FFF7C52D554F0435A348A5345C9FCD7FF8, /*hidden argument*/NULL);
			if (L_111)
			{
				goto IL_06e5;
			}
		}

IL_04a0:
		{
			goto IL_071b;
		}

IL_04a5:
		{
			String_t* L_112 = V_2;
			bool L_113;
			L_113 = String_op_Equality_m50B3548E4AC232558190B0052877B290AA1D436A((String_t*)L_112, (String_t*)_stringLiteral2E201D1972661439FD3C8523C55723E7E9BCC7DA, /*hidden argument*/NULL);
			if (L_113)
			{
				goto IL_06f7;
			}
		}

IL_04b5:
		{
			goto IL_071b;
		}

IL_04ba:
		{
			String_t* L_114 = V_2;
			bool L_115;
			L_115 = String_op_Equality_m50B3548E4AC232558190B0052877B290AA1D436A((String_t*)L_114, (String_t*)_stringLiteralCD44AC57FFE6CAC7824F4CAA223F1BB8B4CB0D73, /*hidden argument*/NULL);
			if (L_115)
			{
				goto IL_0709;
			}
		}

IL_04ca:
		{
			goto IL_071b;
		}

IL_04cf:
		{
			// instance.width = reader.Read<System.Int32>(ES3Type_int.Instance);
			RenderTexture_t5FE7A5B47EF962A0E8D7BEBA05E9FC87D49A1849 * L_116 = V_0;
			ES3Reader_t2780AF8AA61DA2A817115CEF8612AC0E494D03C9 * L_117 = ___reader0;
			IL2CPP_RUNTIME_CLASS_INIT(ES3Type_int_tF64C15D40AD0CC7C15BCD1CEC3C5C6BF837BD167_il2cpp_TypeInfo_var);
			ES3Type_t8FBECB7AE75168648B9524E0C2A38DAD4555421D * L_118 = ((ES3Type_int_tF64C15D40AD0CC7C15BCD1CEC3C5C6BF837BD167_StaticFields*)il2cpp_codegen_static_fields_for(ES3Type_int_tF64C15D40AD0CC7C15BCD1CEC3C5C6BF837BD167_il2cpp_TypeInfo_var))->get_Instance_12();
			NullCheck((ES3Reader_t2780AF8AA61DA2A817115CEF8612AC0E494D03C9 *)L_117);
			int32_t L_119;
			L_119 = GenericVirtFuncInvoker1< int32_t, ES3Type_t8FBECB7AE75168648B9524E0C2A38DAD4555421D * >::Invoke(ES3Reader_Read_TisInt32_tFDE5F8CD43D10453F6A2E0C77FE48C6CC7009046_m2B74AA6627F5B1D21171D56C42F71DE5A7C1B4A6_RuntimeMethod_var, (ES3Reader_t2780AF8AA61DA2A817115CEF8612AC0E494D03C9 *)L_117, (ES3Type_t8FBECB7AE75168648B9524E0C2A38DAD4555421D *)L_118);
			NullCheck((Texture_t9FE0218A1EEDF266E8C85879FE123265CACC95AE *)L_116);
			VirtActionInvoker1< int32_t >::Invoke(6 /* System.Void UnityEngine.Texture::set_width(System.Int32) */, (Texture_t9FE0218A1EEDF266E8C85879FE123265CACC95AE *)L_116, (int32_t)L_119);
			// break;
			goto IL_0721;
		}

IL_04e5:
		{
			// instance.height = reader.Read<System.Int32>(ES3Type_int.Instance);
			RenderTexture_t5FE7A5B47EF962A0E8D7BEBA05E9FC87D49A1849 * L_120 = V_0;
			ES3Reader_t2780AF8AA61DA2A817115CEF8612AC0E494D03C9 * L_121 = ___reader0;
			IL2CPP_RUNTIME_CLASS_INIT(ES3Type_int_tF64C15D40AD0CC7C15BCD1CEC3C5C6BF837BD167_il2cpp_TypeInfo_var);
			ES3Type_t8FBECB7AE75168648B9524E0C2A38DAD4555421D * L_122 = ((ES3Type_int_tF64C15D40AD0CC7C15BCD1CEC3C5C6BF837BD167_StaticFields*)il2cpp_codegen_static_fields_for(ES3Type_int_tF64C15D40AD0CC7C15BCD1CEC3C5C6BF837BD167_il2cpp_TypeInfo_var))->get_Instance_12();
			NullCheck((ES3Reader_t2780AF8AA61DA2A817115CEF8612AC0E494D03C9 *)L_121);
			int32_t L_123;
			L_123 = GenericVirtFuncInvoker1< int32_t, ES3Type_t8FBECB7AE75168648B9524E0C2A38DAD4555421D * >::Invoke(ES3Reader_Read_TisInt32_tFDE5F8CD43D10453F6A2E0C77FE48C6CC7009046_m2B74AA6627F5B1D21171D56C42F71DE5A7C1B4A6_RuntimeMethod_var, (ES3Reader_t2780AF8AA61DA2A817115CEF8612AC0E494D03C9 *)L_121, (ES3Type_t8FBECB7AE75168648B9524E0C2A38DAD4555421D *)L_122);
			NullCheck((Texture_t9FE0218A1EEDF266E8C85879FE123265CACC95AE *)L_120);
			VirtActionInvoker1< int32_t >::Invoke(8 /* System.Void UnityEngine.Texture::set_height(System.Int32) */, (Texture_t9FE0218A1EEDF266E8C85879FE123265CACC95AE *)L_120, (int32_t)L_123);
			// break;
			goto IL_0721;
		}

IL_04fb:
		{
			// instance.dimension = reader.Read<UnityEngine.Rendering.TextureDimension>();
			RenderTexture_t5FE7A5B47EF962A0E8D7BEBA05E9FC87D49A1849 * L_124 = V_0;
			ES3Reader_t2780AF8AA61DA2A817115CEF8612AC0E494D03C9 * L_125 = ___reader0;
			NullCheck((ES3Reader_t2780AF8AA61DA2A817115CEF8612AC0E494D03C9 *)L_125);
			int32_t L_126;
			L_126 = GenericVirtFuncInvoker0< int32_t >::Invoke(ES3Reader_Read_TisTextureDimension_tADCCB7C1D30E4D1182651BA9094B4DE61B63EACC_m19EAA3B93D10636C17A62A3D8437349223CFD988_RuntimeMethod_var, (ES3Reader_t2780AF8AA61DA2A817115CEF8612AC0E494D03C9 *)L_125);
			NullCheck((Texture_t9FE0218A1EEDF266E8C85879FE123265CACC95AE *)L_124);
			VirtActionInvoker1< int32_t >::Invoke(10 /* System.Void UnityEngine.Texture::set_dimension(UnityEngine.Rendering.TextureDimension) */, (Texture_t9FE0218A1EEDF266E8C85879FE123265CACC95AE *)L_124, (int32_t)L_126);
			// break;
			goto IL_0721;
		}

IL_050c:
		{
			// instance.useMipMap = reader.Read<System.Boolean>(ES3Type_bool.Instance);
			RenderTexture_t5FE7A5B47EF962A0E8D7BEBA05E9FC87D49A1849 * L_127 = V_0;
			ES3Reader_t2780AF8AA61DA2A817115CEF8612AC0E494D03C9 * L_128 = ___reader0;
			IL2CPP_RUNTIME_CLASS_INIT(ES3Type_bool_t8F309F7B9CC735FF1DEE68081B6E3CAB367745F4_il2cpp_TypeInfo_var);
			ES3Type_t8FBECB7AE75168648B9524E0C2A38DAD4555421D * L_129 = ((ES3Type_bool_t8F309F7B9CC735FF1DEE68081B6E3CAB367745F4_StaticFields*)il2cpp_codegen_static_fields_for(ES3Type_bool_t8F309F7B9CC735FF1DEE68081B6E3CAB367745F4_il2cpp_TypeInfo_var))->get_Instance_12();
			NullCheck((ES3Reader_t2780AF8AA61DA2A817115CEF8612AC0E494D03C9 *)L_128);
			bool L_130;
			L_130 = GenericVirtFuncInvoker1< bool, ES3Type_t8FBECB7AE75168648B9524E0C2A38DAD4555421D * >::Invoke(ES3Reader_Read_TisBoolean_t07D1E3F34E4813023D64F584DFF7B34C9D922F37_mC6D1B158268FF9B97822FF9F5B37FB1723FEDA22_RuntimeMethod_var, (ES3Reader_t2780AF8AA61DA2A817115CEF8612AC0E494D03C9 *)L_128, (ES3Type_t8FBECB7AE75168648B9524E0C2A38DAD4555421D *)L_129);
			NullCheck((RenderTexture_t5FE7A5B47EF962A0E8D7BEBA05E9FC87D49A1849 *)L_127);
			RenderTexture_set_useMipMap_mAE1437C3D7D21441891A612C3B812EE9C379F126((RenderTexture_t5FE7A5B47EF962A0E8D7BEBA05E9FC87D49A1849 *)L_127, (bool)L_130, /*hidden argument*/NULL);
			// break;
			goto IL_0721;
		}

IL_0522:
		{
			// instance.memorylessMode = reader.Read<UnityEngine.RenderTextureMemoryless>();
			RenderTexture_t5FE7A5B47EF962A0E8D7BEBA05E9FC87D49A1849 * L_131 = V_0;
			ES3Reader_t2780AF8AA61DA2A817115CEF8612AC0E494D03C9 * L_132 = ___reader0;
			NullCheck((ES3Reader_t2780AF8AA61DA2A817115CEF8612AC0E494D03C9 *)L_132);
			int32_t L_133;
			L_133 = GenericVirtFuncInvoker0< int32_t >::Invoke(ES3Reader_Read_TisRenderTextureMemoryless_t37547D68C2186D2650440F719302CDA4A3BB7F67_m3A980BA15AADBBB8393C3BC88CE17EEDDC89B027_RuntimeMethod_var, (ES3Reader_t2780AF8AA61DA2A817115CEF8612AC0E494D03C9 *)L_132);
			NullCheck((RenderTexture_t5FE7A5B47EF962A0E8D7BEBA05E9FC87D49A1849 *)L_131);
			RenderTexture_set_memorylessMode_mE48B2A38E9374A7BB419383B438790347474EFC1((RenderTexture_t5FE7A5B47EF962A0E8D7BEBA05E9FC87D49A1849 *)L_131, (int32_t)L_133, /*hidden argument*/NULL);
			// break;
			goto IL_0721;
		}

IL_0533:
		{
			// instance.format = reader.Read<UnityEngine.RenderTextureFormat>();
			RenderTexture_t5FE7A5B47EF962A0E8D7BEBA05E9FC87D49A1849 * L_134 = V_0;
			ES3Reader_t2780AF8AA61DA2A817115CEF8612AC0E494D03C9 * L_135 = ___reader0;
			NullCheck((ES3Reader_t2780AF8AA61DA2A817115CEF8612AC0E494D03C9 *)L_135);
			int32_t L_136;
			L_136 = GenericVirtFuncInvoker0< int32_t >::Invoke(ES3Reader_Read_TisRenderTextureFormat_t8371287102ED67772EF78229CF4AB9D38C2CD626_mE6358E03407F5C15B58B292C79D4770DE3FAC95A_RuntimeMethod_var, (ES3Reader_t2780AF8AA61DA2A817115CEF8612AC0E494D03C9 *)L_135);
			NullCheck((RenderTexture_t5FE7A5B47EF962A0E8D7BEBA05E9FC87D49A1849 *)L_134);
			RenderTexture_set_format_m32D42DC33DB151B69E81D0D93F36DE7450CFC23D((RenderTexture_t5FE7A5B47EF962A0E8D7BEBA05E9FC87D49A1849 *)L_134, (int32_t)L_136, /*hidden argument*/NULL);
			// break;
			goto IL_0721;
		}

IL_0544:
		{
			// instance.autoGenerateMips = reader.Read<System.Boolean>(ES3Type_bool.Instance);
			RenderTexture_t5FE7A5B47EF962A0E8D7BEBA05E9FC87D49A1849 * L_137 = V_0;
			ES3Reader_t2780AF8AA61DA2A817115CEF8612AC0E494D03C9 * L_138 = ___reader0;
			IL2CPP_RUNTIME_CLASS_INIT(ES3Type_bool_t8F309F7B9CC735FF1DEE68081B6E3CAB367745F4_il2cpp_TypeInfo_var);
			ES3Type_t8FBECB7AE75168648B9524E0C2A38DAD4555421D * L_139 = ((ES3Type_bool_t8F309F7B9CC735FF1DEE68081B6E3CAB367745F4_StaticFields*)il2cpp_codegen_static_fields_for(ES3Type_bool_t8F309F7B9CC735FF1DEE68081B6E3CAB367745F4_il2cpp_TypeInfo_var))->get_Instance_12();
			NullCheck((ES3Reader_t2780AF8AA61DA2A817115CEF8612AC0E494D03C9 *)L_138);
			bool L_140;
			L_140 = GenericVirtFuncInvoker1< bool, ES3Type_t8FBECB7AE75168648B9524E0C2A38DAD4555421D * >::Invoke(ES3Reader_Read_TisBoolean_t07D1E3F34E4813023D64F584DFF7B34C9D922F37_mC6D1B158268FF9B97822FF9F5B37FB1723FEDA22_RuntimeMethod_var, (ES3Reader_t2780AF8AA61DA2A817115CEF8612AC0E494D03C9 *)L_138, (ES3Type_t8FBECB7AE75168648B9524E0C2A38DAD4555421D *)L_139);
			NullCheck((RenderTexture_t5FE7A5B47EF962A0E8D7BEBA05E9FC87D49A1849 *)L_137);
			RenderTexture_set_autoGenerateMips_m0F02D60D4C4D4790B354451732F2DA6BA12D2E63((RenderTexture_t5FE7A5B47EF962A0E8D7BEBA05E9FC87D49A1849 *)L_137, (bool)L_140, /*hidden argument*/NULL);
			// break;
			goto IL_0721;
		}

IL_055a:
		{
			// instance.volumeDepth = reader.Read<System.Int32>(ES3Type_int.Instance);
			RenderTexture_t5FE7A5B47EF962A0E8D7BEBA05E9FC87D49A1849 * L_141 = V_0;
			ES3Reader_t2780AF8AA61DA2A817115CEF8612AC0E494D03C9 * L_142 = ___reader0;
			IL2CPP_RUNTIME_CLASS_INIT(ES3Type_int_tF64C15D40AD0CC7C15BCD1CEC3C5C6BF837BD167_il2cpp_TypeInfo_var);
			ES3Type_t8FBECB7AE75168648B9524E0C2A38DAD4555421D * L_143 = ((ES3Type_int_tF64C15D40AD0CC7C15BCD1CEC3C5C6BF837BD167_StaticFields*)il2cpp_codegen_static_fields_for(ES3Type_int_tF64C15D40AD0CC7C15BCD1CEC3C5C6BF837BD167_il2cpp_TypeInfo_var))->get_Instance_12();
			NullCheck((ES3Reader_t2780AF8AA61DA2A817115CEF8612AC0E494D03C9 *)L_142);
			int32_t L_144;
			L_144 = GenericVirtFuncInvoker1< int32_t, ES3Type_t8FBECB7AE75168648B9524E0C2A38DAD4555421D * >::Invoke(ES3Reader_Read_TisInt32_tFDE5F8CD43D10453F6A2E0C77FE48C6CC7009046_m2B74AA6627F5B1D21171D56C42F71DE5A7C1B4A6_RuntimeMethod_var, (ES3Reader_t2780AF8AA61DA2A817115CEF8612AC0E494D03C9 *)L_142, (ES3Type_t8FBECB7AE75168648B9524E0C2A38DAD4555421D *)L_143);
			NullCheck((RenderTexture_t5FE7A5B47EF962A0E8D7BEBA05E9FC87D49A1849 *)L_141);
			RenderTexture_set_volumeDepth_m01D7BD50386DDAE777CE3CB9B60FDD7DE798AC93((RenderTexture_t5FE7A5B47EF962A0E8D7BEBA05E9FC87D49A1849 *)L_141, (int32_t)L_144, /*hidden argument*/NULL);
			// break;
			goto IL_0721;
		}

IL_0570:
		{
			// instance.antiAliasing = reader.Read<System.Int32>(ES3Type_int.Instance);
			RenderTexture_t5FE7A5B47EF962A0E8D7BEBA05E9FC87D49A1849 * L_145 = V_0;
			ES3Reader_t2780AF8AA61DA2A817115CEF8612AC0E494D03C9 * L_146 = ___reader0;
			IL2CPP_RUNTIME_CLASS_INIT(ES3Type_int_tF64C15D40AD0CC7C15BCD1CEC3C5C6BF837BD167_il2cpp_TypeInfo_var);
			ES3Type_t8FBECB7AE75168648B9524E0C2A38DAD4555421D * L_147 = ((ES3Type_int_tF64C15D40AD0CC7C15BCD1CEC3C5C6BF837BD167_StaticFields*)il2cpp_codegen_static_fields_for(ES3Type_int_tF64C15D40AD0CC7C15BCD1CEC3C5C6BF837BD167_il2cpp_TypeInfo_var))->get_Instance_12();
			NullCheck((ES3Reader_t2780AF8AA61DA2A817115CEF8612AC0E494D03C9 *)L_146);
			int32_t L_148;
			L_148 = GenericVirtFuncInvoker1< int32_t, ES3Type_t8FBECB7AE75168648B9524E0C2A38DAD4555421D * >::Invoke(ES3Reader_Read_TisInt32_tFDE5F8CD43D10453F6A2E0C77FE48C6CC7009046_m2B74AA6627F5B1D21171D56C42F71DE5A7C1B4A6_RuntimeMethod_var, (ES3Reader_t2780AF8AA61DA2A817115CEF8612AC0E494D03C9 *)L_146, (ES3Type_t8FBECB7AE75168648B9524E0C2A38DAD4555421D *)L_147);
			NullCheck((RenderTexture_t5FE7A5B47EF962A0E8D7BEBA05E9FC87D49A1849 *)L_145);
			RenderTexture_set_antiAliasing_m4D37900B7E23CA0D33F109DB8DF21265DB70C38F((RenderTexture_t5FE7A5B47EF962A0E8D7BEBA05E9FC87D49A1849 *)L_145, (int32_t)L_148, /*hidden argument*/NULL);
			// break;
			goto IL_0721;
		}

IL_0586:
		{
			// instance.enableRandomWrite = reader.Read<System.Boolean>(ES3Type_bool.Instance);
			RenderTexture_t5FE7A5B47EF962A0E8D7BEBA05E9FC87D49A1849 * L_149 = V_0;
			ES3Reader_t2780AF8AA61DA2A817115CEF8612AC0E494D03C9 * L_150 = ___reader0;
			IL2CPP_RUNTIME_CLASS_INIT(ES3Type_bool_t8F309F7B9CC735FF1DEE68081B6E3CAB367745F4_il2cpp_TypeInfo_var);
			ES3Type_t8FBECB7AE75168648B9524E0C2A38DAD4555421D * L_151 = ((ES3Type_bool_t8F309F7B9CC735FF1DEE68081B6E3CAB367745F4_StaticFields*)il2cpp_codegen_static_fields_for(ES3Type_bool_t8F309F7B9CC735FF1DEE68081B6E3CAB367745F4_il2cpp_TypeInfo_var))->get_Instance_12();
			NullCheck((ES3Reader_t2780AF8AA61DA2A817115CEF8612AC0E494D03C9 *)L_150);
			bool L_152;
			L_152 = GenericVirtFuncInvoker1< bool, ES3Type_t8FBECB7AE75168648B9524E0C2A38DAD4555421D * >::Invoke(ES3Reader_Read_TisBoolean_t07D1E3F34E4813023D64F584DFF7B34C9D922F37_mC6D1B158268FF9B97822FF9F5B37FB1723FEDA22_RuntimeMethod_var, (ES3Reader_t2780AF8AA61DA2A817115CEF8612AC0E494D03C9 *)L_150, (ES3Type_t8FBECB7AE75168648B9524E0C2A38DAD4555421D *)L_151);
			NullCheck((RenderTexture_t5FE7A5B47EF962A0E8D7BEBA05E9FC87D49A1849 *)L_149);
			RenderTexture_set_enableRandomWrite_m024F49DB3CA3B02FA0EEBB3EACB37E6228CAA183((RenderTexture_t5FE7A5B47EF962A0E8D7BEBA05E9FC87D49A1849 *)L_149, (bool)L_152, /*hidden argument*/NULL);
			// break;
			goto IL_0721;
		}

IL_059c:
		{
			// instance.isPowerOfTwo = reader.Read<System.Boolean>(ES3Type_bool.Instance);
			RenderTexture_t5FE7A5B47EF962A0E8D7BEBA05E9FC87D49A1849 * L_153 = V_0;
			ES3Reader_t2780AF8AA61DA2A817115CEF8612AC0E494D03C9 * L_154 = ___reader0;
			IL2CPP_RUNTIME_CLASS_INIT(ES3Type_bool_t8F309F7B9CC735FF1DEE68081B6E3CAB367745F4_il2cpp_TypeInfo_var);
			ES3Type_t8FBECB7AE75168648B9524E0C2A38DAD4555421D * L_155 = ((ES3Type_bool_t8F309F7B9CC735FF1DEE68081B6E3CAB367745F4_StaticFields*)il2cpp_codegen_static_fields_for(ES3Type_bool_t8F309F7B9CC735FF1DEE68081B6E3CAB367745F4_il2cpp_TypeInfo_var))->get_Instance_12();
			NullCheck((ES3Reader_t2780AF8AA61DA2A817115CEF8612AC0E494D03C9 *)L_154);
			bool L_156;
			L_156 = GenericVirtFuncInvoker1< bool, ES3Type_t8FBECB7AE75168648B9524E0C2A38DAD4555421D * >::Invoke(ES3Reader_Read_TisBoolean_t07D1E3F34E4813023D64F584DFF7B34C9D922F37_mC6D1B158268FF9B97822FF9F5B37FB1723FEDA22_RuntimeMethod_var, (ES3Reader_t2780AF8AA61DA2A817115CEF8612AC0E494D03C9 *)L_154, (ES3Type_t8FBECB7AE75168648B9524E0C2A38DAD4555421D *)L_155);
			NullCheck((RenderTexture_t5FE7A5B47EF962A0E8D7BEBA05E9FC87D49A1849 *)L_153);
			RenderTexture_set_isPowerOfTwo_mA6D34F610DF27C40422DF5815892B45C656F1317((RenderTexture_t5FE7A5B47EF962A0E8D7BEBA05E9FC87D49A1849 *)L_153, (bool)L_156, /*hidden argument*/NULL);
			// break;
			goto IL_0721;
		}

IL_05b2:
		{
			// instance.depth = reader.Read<System.Int32>(ES3Type_int.Instance);
			RenderTexture_t5FE7A5B47EF962A0E8D7BEBA05E9FC87D49A1849 * L_157 = V_0;
			ES3Reader_t2780AF8AA61DA2A817115CEF8612AC0E494D03C9 * L_158 = ___reader0;
			IL2CPP_RUNTIME_CLASS_INIT(ES3Type_int_tF64C15D40AD0CC7C15BCD1CEC3C5C6BF837BD167_il2cpp_TypeInfo_var);
			ES3Type_t8FBECB7AE75168648B9524E0C2A38DAD4555421D * L_159 = ((ES3Type_int_tF64C15D40AD0CC7C15BCD1CEC3C5C6BF837BD167_StaticFields*)il2cpp_codegen_static_fields_for(ES3Type_int_tF64C15D40AD0CC7C15BCD1CEC3C5C6BF837BD167_il2cpp_TypeInfo_var))->get_Instance_12();
			NullCheck((ES3Reader_t2780AF8AA61DA2A817115CEF8612AC0E494D03C9 *)L_158);
			int32_t L_160;
			L_160 = GenericVirtFuncInvoker1< int32_t, ES3Type_t8FBECB7AE75168648B9524E0C2A38DAD4555421D * >::Invoke(ES3Reader_Read_TisInt32_tFDE5F8CD43D10453F6A2E0C77FE48C6CC7009046_m2B74AA6627F5B1D21171D56C42F71DE5A7C1B4A6_RuntimeMethod_var, (ES3Reader_t2780AF8AA61DA2A817115CEF8612AC0E494D03C9 *)L_158, (ES3Type_t8FBECB7AE75168648B9524E0C2A38DAD4555421D *)L_159);
			NullCheck((RenderTexture_t5FE7A5B47EF962A0E8D7BEBA05E9FC87D49A1849 *)L_157);
			RenderTexture_set_depth_mA57CEFEDDB45D0429FAC9532A631839F523944A3((RenderTexture_t5FE7A5B47EF962A0E8D7BEBA05E9FC87D49A1849 *)L_157, (int32_t)L_160, /*hidden argument*/NULL);
			// break;
			goto IL_0721;
		}

IL_05c8:
		{
			// instance.descriptor = reader.Read<UnityEngine.RenderTextureDescriptor>();
			RenderTexture_t5FE7A5B47EF962A0E8D7BEBA05E9FC87D49A1849 * L_161 = V_0;
			ES3Reader_t2780AF8AA61DA2A817115CEF8612AC0E494D03C9 * L_162 = ___reader0;
			NullCheck((ES3Reader_t2780AF8AA61DA2A817115CEF8612AC0E494D03C9 *)L_162);
			RenderTextureDescriptor_t67FF189E1F35AEB5D6C43A2D7103F3A8A8CA0B47  L_163;
			L_163 = GenericVirtFuncInvoker0< RenderTextureDescriptor_t67FF189E1F35AEB5D6C43A2D7103F3A8A8CA0B47  >::Invoke(ES3Reader_Read_TisRenderTextureDescriptor_t67FF189E1F35AEB5D6C43A2D7103F3A8A8CA0B47_m427886ADAAF96C7BA9BD423544128494F96D69E7_RuntimeMethod_var, (ES3Reader_t2780AF8AA61DA2A817115CEF8612AC0E494D03C9 *)L_162);
			NullCheck((RenderTexture_t5FE7A5B47EF962A0E8D7BEBA05E9FC87D49A1849 *)L_161);
			RenderTexture_set_descriptor_m3C8E31AE4644B23719A12345771D1B85EB6E5881((RenderTexture_t5FE7A5B47EF962A0E8D7BEBA05E9FC87D49A1849 *)L_161, (RenderTextureDescriptor_t67FF189E1F35AEB5D6C43A2D7103F3A8A8CA0B47 )L_163, /*hidden argument*/NULL);
			// break;
			goto IL_0721;
		}

IL_05d9:
		{
			// UnityEngine.RenderTexture.masterTextureLimit = reader.Read<System.Int32>(ES3Type_int.Instance);
			ES3Reader_t2780AF8AA61DA2A817115CEF8612AC0E494D03C9 * L_164 = ___reader0;
			IL2CPP_RUNTIME_CLASS_INIT(ES3Type_int_tF64C15D40AD0CC7C15BCD1CEC3C5C6BF837BD167_il2cpp_TypeInfo_var);
			ES3Type_t8FBECB7AE75168648B9524E0C2A38DAD4555421D * L_165 = ((ES3Type_int_tF64C15D40AD0CC7C15BCD1CEC3C5C6BF837BD167_StaticFields*)il2cpp_codegen_static_fields_for(ES3Type_int_tF64C15D40AD0CC7C15BCD1CEC3C5C6BF837BD167_il2cpp_TypeInfo_var))->get_Instance_12();
			NullCheck((ES3Reader_t2780AF8AA61DA2A817115CEF8612AC0E494D03C9 *)L_164);
			int32_t L_166;
			L_166 = GenericVirtFuncInvoker1< int32_t, ES3Type_t8FBECB7AE75168648B9524E0C2A38DAD4555421D * >::Invoke(ES3Reader_Read_TisInt32_tFDE5F8CD43D10453F6A2E0C77FE48C6CC7009046_m2B74AA6627F5B1D21171D56C42F71DE5A7C1B4A6_RuntimeMethod_var, (ES3Reader_t2780AF8AA61DA2A817115CEF8612AC0E494D03C9 *)L_164, (ES3Type_t8FBECB7AE75168648B9524E0C2A38DAD4555421D *)L_165);
			IL2CPP_RUNTIME_CLASS_INIT(Texture_t9FE0218A1EEDF266E8C85879FE123265CACC95AE_il2cpp_TypeInfo_var);
			Texture_set_masterTextureLimit_m94A531A20A54A86AF7B88A56F72709CE556B7DFF((int32_t)L_166, /*hidden argument*/NULL);
			// break;
			goto IL_0721;
		}

IL_05ee:
		{
			// UnityEngine.RenderTexture.anisotropicFiltering = reader.Read<UnityEngine.AnisotropicFiltering>();
			ES3Reader_t2780AF8AA61DA2A817115CEF8612AC0E494D03C9 * L_167 = ___reader0;
			NullCheck((ES3Reader_t2780AF8AA61DA2A817115CEF8612AC0E494D03C9 *)L_167);
			int32_t L_168;
			L_168 = GenericVirtFuncInvoker0< int32_t >::Invoke(ES3Reader_Read_TisAnisotropicFiltering_tAC3D1448B262D5869946CD1CDD2C8DAE3A7A537B_mAF1268AAC3E461D6E0604A19FAF0325873B6EC8A_RuntimeMethod_var, (ES3Reader_t2780AF8AA61DA2A817115CEF8612AC0E494D03C9 *)L_167);
			IL2CPP_RUNTIME_CLASS_INIT(Texture_t9FE0218A1EEDF266E8C85879FE123265CACC95AE_il2cpp_TypeInfo_var);
			Texture_set_anisotropicFiltering_mE2B639BF2681A8A0516C1C343C7E265ED60EAF16((int32_t)L_168, /*hidden argument*/NULL);
			// break;
			goto IL_0721;
		}

IL_05fe:
		{
			// instance.wrapMode = reader.Read<UnityEngine.TextureWrapMode>();
			RenderTexture_t5FE7A5B47EF962A0E8D7BEBA05E9FC87D49A1849 * L_169 = V_0;
			ES3Reader_t2780AF8AA61DA2A817115CEF8612AC0E494D03C9 * L_170 = ___reader0;
			NullCheck((ES3Reader_t2780AF8AA61DA2A817115CEF8612AC0E494D03C9 *)L_170);
			int32_t L_171;
			L_171 = GenericVirtFuncInvoker0< int32_t >::Invoke(ES3Reader_Read_TisTextureWrapMode_t86DDA8206E4AA784A1218D0DE3C5F6826D7549EB_m7926E449CD0B8BD56E5BF145DD0CCFE1C567F107_RuntimeMethod_var, (ES3Reader_t2780AF8AA61DA2A817115CEF8612AC0E494D03C9 *)L_170);
			NullCheck((Texture_t9FE0218A1EEDF266E8C85879FE123265CACC95AE *)L_169);
			Texture_set_wrapMode_m1233D2DF48DC20996F8EE26E866D4BDD2AC8050D((Texture_t9FE0218A1EEDF266E8C85879FE123265CACC95AE *)L_169, (int32_t)L_171, /*hidden argument*/NULL);
			// break;
			goto IL_0721;
		}

IL_060f:
		{
			// instance.wrapModeU = reader.Read<UnityEngine.TextureWrapMode>();
			RenderTexture_t5FE7A5B47EF962A0E8D7BEBA05E9FC87D49A1849 * L_172 = V_0;
			ES3Reader_t2780AF8AA61DA2A817115CEF8612AC0E494D03C9 * L_173 = ___reader0;
			NullCheck((ES3Reader_t2780AF8AA61DA2A817115CEF8612AC0E494D03C9 *)L_173);
			int32_t L_174;
			L_174 = GenericVirtFuncInvoker0< int32_t >::Invoke(ES3Reader_Read_TisTextureWrapMode_t86DDA8206E4AA784A1218D0DE3C5F6826D7549EB_m7926E449CD0B8BD56E5BF145DD0CCFE1C567F107_RuntimeMethod_var, (ES3Reader_t2780AF8AA61DA2A817115CEF8612AC0E494D03C9 *)L_173);
			NullCheck((Texture_t9FE0218A1EEDF266E8C85879FE123265CACC95AE *)L_172);
			Texture_set_wrapModeU_mBD3CBD6880E9E767B91ED9E1B14C725A52D7A66E((Texture_t9FE0218A1EEDF266E8C85879FE123265CACC95AE *)L_172, (int32_t)L_174, /*hidden argument*/NULL);
			// break;
			goto IL_0721;
		}

IL_0620:
		{
			// instance.wrapModeV = reader.Read<UnityEngine.TextureWrapMode>();
			RenderTexture_t5FE7A5B47EF962A0E8D7BEBA05E9FC87D49A1849 * L_175 = V_0;
			ES3Reader_t2780AF8AA61DA2A817115CEF8612AC0E494D03C9 * L_176 = ___reader0;
			NullCheck((ES3Reader_t2780AF8AA61DA2A817115CEF8612AC0E494D03C9 *)L_176);
			int32_t L_177;
			L_177 = GenericVirtFuncInvoker0< int32_t >::Invoke(ES3Reader_Read_TisTextureWrapMode_t86DDA8206E4AA784A1218D0DE3C5F6826D7549EB_m7926E449CD0B8BD56E5BF145DD0CCFE1C567F107_RuntimeMethod_var, (ES3Reader_t2780AF8AA61DA2A817115CEF8612AC0E494D03C9 *)L_176);
			NullCheck((Texture_t9FE0218A1EEDF266E8C85879FE123265CACC95AE *)L_175);
			Texture_set_wrapModeV_mCD51C11B4C90D7508113C744EDC09D04059403E5((Texture_t9FE0218A1EEDF266E8C85879FE123265CACC95AE *)L_175, (int32_t)L_177, /*hidden argument*/NULL);
			// break;
			goto IL_0721;
		}

IL_0631:
		{
			// instance.wrapModeW = reader.Read<UnityEngine.TextureWrapMode>();
			RenderTexture_t5FE7A5B47EF962A0E8D7BEBA05E9FC87D49A1849 * L_178 = V_0;
			ES3Reader_t2780AF8AA61DA2A817115CEF8612AC0E494D03C9 * L_179 = ___reader0;
			NullCheck((ES3Reader_t2780AF8AA61DA2A817115CEF8612AC0E494D03C9 *)L_179);
			int32_t L_180;
			L_180 = GenericVirtFuncInvoker0< int32_t >::Invoke(ES3Reader_Read_TisTextureWrapMode_t86DDA8206E4AA784A1218D0DE3C5F6826D7549EB_m7926E449CD0B8BD56E5BF145DD0CCFE1C567F107_RuntimeMethod_var, (ES3Reader_t2780AF8AA61DA2A817115CEF8612AC0E494D03C9 *)L_179);
			NullCheck((Texture_t9FE0218A1EEDF266E8C85879FE123265CACC95AE *)L_178);
			Texture_set_wrapModeW_m72C3239EA12A51D5031BD2A66C5E7B178EE9F65B((Texture_t9FE0218A1EEDF266E8C85879FE123265CACC95AE *)L_178, (int32_t)L_180, /*hidden argument*/NULL);
			// break;
			goto IL_0721;
		}

IL_0642:
		{
			// instance.filterMode = reader.Read<UnityEngine.FilterMode>();
			RenderTexture_t5FE7A5B47EF962A0E8D7BEBA05E9FC87D49A1849 * L_181 = V_0;
			ES3Reader_t2780AF8AA61DA2A817115CEF8612AC0E494D03C9 * L_182 = ___reader0;
			NullCheck((ES3Reader_t2780AF8AA61DA2A817115CEF8612AC0E494D03C9 *)L_182);
			int32_t L_183;
			L_183 = GenericVirtFuncInvoker0< int32_t >::Invoke(ES3Reader_Read_TisFilterMode_tE90A08FD96A142C761463D65E524BCDBFEEE3D19_m9819C2A442797B4060B0D9A80CFA96CFD6102839_RuntimeMethod_var, (ES3Reader_t2780AF8AA61DA2A817115CEF8612AC0E494D03C9 *)L_182);
			NullCheck((Texture_t9FE0218A1EEDF266E8C85879FE123265CACC95AE *)L_181);
			Texture_set_filterMode_m045141DB0FEFE496885D45F5F23B15BC0E77C8D0((Texture_t9FE0218A1EEDF266E8C85879FE123265CACC95AE *)L_181, (int32_t)L_183, /*hidden argument*/NULL);
			// break;
			goto IL_0721;
		}

IL_0653:
		{
			// instance.anisoLevel = reader.Read<System.Int32>(ES3Type_int.Instance);
			RenderTexture_t5FE7A5B47EF962A0E8D7BEBA05E9FC87D49A1849 * L_184 = V_0;
			ES3Reader_t2780AF8AA61DA2A817115CEF8612AC0E494D03C9 * L_185 = ___reader0;
			IL2CPP_RUNTIME_CLASS_INIT(ES3Type_int_tF64C15D40AD0CC7C15BCD1CEC3C5C6BF837BD167_il2cpp_TypeInfo_var);
			ES3Type_t8FBECB7AE75168648B9524E0C2A38DAD4555421D * L_186 = ((ES3Type_int_tF64C15D40AD0CC7C15BCD1CEC3C5C6BF837BD167_StaticFields*)il2cpp_codegen_static_fields_for(ES3Type_int_tF64C15D40AD0CC7C15BCD1CEC3C5C6BF837BD167_il2cpp_TypeInfo_var))->get_Instance_12();
			NullCheck((ES3Reader_t2780AF8AA61DA2A817115CEF8612AC0E494D03C9 *)L_185);
			int32_t L_187;
			L_187 = GenericVirtFuncInvoker1< int32_t, ES3Type_t8FBECB7AE75168648B9524E0C2A38DAD4555421D * >::Invoke(ES3Reader_Read_TisInt32_tFDE5F8CD43D10453F6A2E0C77FE48C6CC7009046_m2B74AA6627F5B1D21171D56C42F71DE5A7C1B4A6_RuntimeMethod_var, (ES3Reader_t2780AF8AA61DA2A817115CEF8612AC0E494D03C9 *)L_185, (ES3Type_t8FBECB7AE75168648B9524E0C2A38DAD4555421D *)L_186);
			NullCheck((Texture_t9FE0218A1EEDF266E8C85879FE123265CACC95AE *)L_184);
			Texture_set_anisoLevel_mE51360F6CD0562FD6355F8C0509B70A454CB33BE((Texture_t9FE0218A1EEDF266E8C85879FE123265CACC95AE *)L_184, (int32_t)L_187, /*hidden argument*/NULL);
			// break;
			goto IL_0721;
		}

IL_0669:
		{
			// instance.mipMapBias = reader.Read<System.Single>(ES3Type_float.Instance);
			RenderTexture_t5FE7A5B47EF962A0E8D7BEBA05E9FC87D49A1849 * L_188 = V_0;
			ES3Reader_t2780AF8AA61DA2A817115CEF8612AC0E494D03C9 * L_189 = ___reader0;
			IL2CPP_RUNTIME_CLASS_INIT(ES3Type_float_tF86B773C86731BD9AD79448B860BBB178FE77644_il2cpp_TypeInfo_var);
			ES3Type_t8FBECB7AE75168648B9524E0C2A38DAD4555421D * L_190 = ((ES3Type_float_tF86B773C86731BD9AD79448B860BBB178FE77644_StaticFields*)il2cpp_codegen_static_fields_for(ES3Type_float_tF86B773C86731BD9AD79448B860BBB178FE77644_il2cpp_TypeInfo_var))->get_Instance_12();
			NullCheck((ES3Reader_t2780AF8AA61DA2A817115CEF8612AC0E494D03C9 *)L_189);
			float L_191;
			L_191 = GenericVirtFuncInvoker1< float, ES3Type_t8FBECB7AE75168648B9524E0C2A38DAD4555421D * >::Invoke(ES3Reader_Read_TisSingle_tE07797BA3C98D4CA9B5A19413C19A76688AB899E_m4A0416374498BDA042B8EB21E49B72326D6CE5F4_RuntimeMethod_var, (ES3Reader_t2780AF8AA61DA2A817115CEF8612AC0E494D03C9 *)L_189, (ES3Type_t8FBECB7AE75168648B9524E0C2A38DAD4555421D *)L_190);
			NullCheck((Texture_t9FE0218A1EEDF266E8C85879FE123265CACC95AE *)L_188);
			Texture_set_mipMapBias_m5057ADA9DBA8E8E30EC15EA5BABFA0734CE2821C((Texture_t9FE0218A1EEDF266E8C85879FE123265CACC95AE *)L_188, (float)L_191, /*hidden argument*/NULL);
			// break;
			goto IL_0721;
		}

IL_067f:
		{
			// instance.name = reader.Read<System.String>(ES3Type_string.Instance);
			RenderTexture_t5FE7A5B47EF962A0E8D7BEBA05E9FC87D49A1849 * L_192 = V_0;
			ES3Reader_t2780AF8AA61DA2A817115CEF8612AC0E494D03C9 * L_193 = ___reader0;
			IL2CPP_RUNTIME_CLASS_INIT(ES3Type_string_tC47BFBE3CC816F3C70B51558C68F0C6470C5EFE5_il2cpp_TypeInfo_var);
			ES3Type_t8FBECB7AE75168648B9524E0C2A38DAD4555421D * L_194 = ((ES3Type_string_tC47BFBE3CC816F3C70B51558C68F0C6470C5EFE5_StaticFields*)il2cpp_codegen_static_fields_for(ES3Type_string_tC47BFBE3CC816F3C70B51558C68F0C6470C5EFE5_il2cpp_TypeInfo_var))->get_Instance_12();
			NullCheck((ES3Reader_t2780AF8AA61DA2A817115CEF8612AC0E494D03C9 *)L_193);
			String_t* L_195;
			L_195 = GenericVirtFuncInvoker1< String_t*, ES3Type_t8FBECB7AE75168648B9524E0C2A38DAD4555421D * >::Invoke(ES3Reader_Read_TisString_t_m883861F3B58239392073ABF39876826EEB87DF9C_RuntimeMethod_var, (ES3Reader_t2780AF8AA61DA2A817115CEF8612AC0E494D03C9 *)L_193, (ES3Type_t8FBECB7AE75168648B9524E0C2A38DAD4555421D *)L_194);
			NullCheck((Object_tF2F3778131EFF286AF62B7B013A170F95A91571A *)L_192);
			Object_set_name_m87C4006618ADB325ABE5439DF159E10DD8DD0781((Object_tF2F3778131EFF286AF62B7B013A170F95A91571A *)L_192, (String_t*)L_195, /*hidden argument*/NULL);
			// break;
			goto IL_0721;
		}

IL_0695:
		{
			// instance.vrUsage = reader.Read<UnityEngine.VRTextureUsage>();
			RenderTexture_t5FE7A5B47EF962A0E8D7BEBA05E9FC87D49A1849 * L_196 = V_0;
			ES3Reader_t2780AF8AA61DA2A817115CEF8612AC0E494D03C9 * L_197 = ___reader0;
			NullCheck((ES3Reader_t2780AF8AA61DA2A817115CEF8612AC0E494D03C9 *)L_197);
			int32_t L_198;
			L_198 = GenericVirtFuncInvoker0< int32_t >::Invoke(ES3Reader_Read_TisVRTextureUsage_t3C09DF3DD90B5620BC0AB6F8078DFEF4E607F645_m7DE3966E4815BB13132866CB005EEE5B90FF51C2_RuntimeMethod_var, (ES3Reader_t2780AF8AA61DA2A817115CEF8612AC0E494D03C9 *)L_197);
			NullCheck((RenderTexture_t5FE7A5B47EF962A0E8D7BEBA05E9FC87D49A1849 *)L_196);
			RenderTexture_set_vrUsage_m9AF7F60442E3B933FDF274D801EA074D1A5ECB71((RenderTexture_t5FE7A5B47EF962A0E8D7BEBA05E9FC87D49A1849 *)L_196, (int32_t)L_198, /*hidden argument*/NULL);
			// break;
			goto IL_0721;
		}

IL_06a3:
		{
			// instance.graphicsFormat = reader.Read<UnityEngine.Experimental.Rendering.GraphicsFormat>();
			RenderTexture_t5FE7A5B47EF962A0E8D7BEBA05E9FC87D49A1849 * L_199 = V_0;
			ES3Reader_t2780AF8AA61DA2A817115CEF8612AC0E494D03C9 * L_200 = ___reader0;
			NullCheck((ES3Reader_t2780AF8AA61DA2A817115CEF8612AC0E494D03C9 *)L_200);
			int32_t L_201;
			L_201 = GenericVirtFuncInvoker0< int32_t >::Invoke(ES3Reader_Read_TisGraphicsFormat_t07A3C024BC77B843C53A369D6FC02ABD27D2AB1D_mCBD36004B10F649C93215AB4717F6F0D7118BF7D_RuntimeMethod_var, (ES3Reader_t2780AF8AA61DA2A817115CEF8612AC0E494D03C9 *)L_200);
			NullCheck((RenderTexture_t5FE7A5B47EF962A0E8D7BEBA05E9FC87D49A1849 *)L_199);
			RenderTexture_set_graphicsFormat_mA378AAD8BD876EE96637FF0A80A2AFEA4D852FAB((RenderTexture_t5FE7A5B47EF962A0E8D7BEBA05E9FC87D49A1849 *)L_199, (int32_t)L_201, /*hidden argument*/NULL);
			// break;
			goto IL_0721;
		}

IL_06b1:
		{
			// instance.stencilFormat = reader.Read<UnityEngine.Experimental.Rendering.GraphicsFormat>();
			RenderTexture_t5FE7A5B47EF962A0E8D7BEBA05E9FC87D49A1849 * L_202 = V_0;
			ES3Reader_t2780AF8AA61DA2A817115CEF8612AC0E494D03C9 * L_203 = ___reader0;
			NullCheck((ES3Reader_t2780AF8AA61DA2A817115CEF8612AC0E494D03C9 *)L_203);
			int32_t L_204;
			L_204 = GenericVirtFuncInvoker0< int32_t >::Invoke(ES3Reader_Read_TisGraphicsFormat_t07A3C024BC77B843C53A369D6FC02ABD27D2AB1D_mCBD36004B10F649C93215AB4717F6F0D7118BF7D_RuntimeMethod_var, (ES3Reader_t2780AF8AA61DA2A817115CEF8612AC0E494D03C9 *)L_203);
			NullCheck((RenderTexture_t5FE7A5B47EF962A0E8D7BEBA05E9FC87D49A1849 *)L_202);
			RenderTexture_set_stencilFormat_m7C6E21FCDB7E786D403CFC9775105B050EFF19C7((RenderTexture_t5FE7A5B47EF962A0E8D7BEBA05E9FC87D49A1849 *)L_202, (int32_t)L_204, /*hidden argument*/NULL);
			// break;
			goto IL_0721;
		}

IL_06bf:
		{
			// instance.bindTextureMS = reader.Read<System.Boolean>(ES3Type_bool.Instance);
			RenderTexture_t5FE7A5B47EF962A0E8D7BEBA05E9FC87D49A1849 * L_205 = V_0;
			ES3Reader_t2780AF8AA61DA2A817115CEF8612AC0E494D03C9 * L_206 = ___reader0;
			IL2CPP_RUNTIME_CLASS_INIT(ES3Type_bool_t8F309F7B9CC735FF1DEE68081B6E3CAB367745F4_il2cpp_TypeInfo_var);
			ES3Type_t8FBECB7AE75168648B9524E0C2A38DAD4555421D * L_207 = ((ES3Type_bool_t8F309F7B9CC735FF1DEE68081B6E3CAB367745F4_StaticFields*)il2cpp_codegen_static_fields_for(ES3Type_bool_t8F309F7B9CC735FF1DEE68081B6E3CAB367745F4_il2cpp_TypeInfo_var))->get_Instance_12();
			NullCheck((ES3Reader_t2780AF8AA61DA2A817115CEF8612AC0E494D03C9 *)L_206);
			bool L_208;
			L_208 = GenericVirtFuncInvoker1< bool, ES3Type_t8FBECB7AE75168648B9524E0C2A38DAD4555421D * >::Invoke(ES3Reader_Read_TisBoolean_t07D1E3F34E4813023D64F584DFF7B34C9D922F37_mC6D1B158268FF9B97822FF9F5B37FB1723FEDA22_RuntimeMethod_var, (ES3Reader_t2780AF8AA61DA2A817115CEF8612AC0E494D03C9 *)L_206, (ES3Type_t8FBECB7AE75168648B9524E0C2A38DAD4555421D *)L_207);
			NullCheck((RenderTexture_t5FE7A5B47EF962A0E8D7BEBA05E9FC87D49A1849 *)L_205);
			RenderTexture_set_bindTextureMS_m6C26F6AB2DE8FE81BFCA60C936AA08EA7F1A7177((RenderTexture_t5FE7A5B47EF962A0E8D7BEBA05E9FC87D49A1849 *)L_205, (bool)L_208, /*hidden argument*/NULL);
			// break;
			goto IL_0721;
		}

IL_06d2:
		{
			// instance.useDynamicScale = reader.Read<System.Boolean>(ES3Type_bool.Instance);
			RenderTexture_t5FE7A5B47EF962A0E8D7BEBA05E9FC87D49A1849 * L_209 = V_0;
			ES3Reader_t2780AF8AA61DA2A817115CEF8612AC0E494D03C9 * L_210 = ___reader0;
			IL2CPP_RUNTIME_CLASS_INIT(ES3Type_bool_t8F309F7B9CC735FF1DEE68081B6E3CAB367745F4_il2cpp_TypeInfo_var);
			ES3Type_t8FBECB7AE75168648B9524E0C2A38DAD4555421D * L_211 = ((ES3Type_bool_t8F309F7B9CC735FF1DEE68081B6E3CAB367745F4_StaticFields*)il2cpp_codegen_static_fields_for(ES3Type_bool_t8F309F7B9CC735FF1DEE68081B6E3CAB367745F4_il2cpp_TypeInfo_var))->get_Instance_12();
			NullCheck((ES3Reader_t2780AF8AA61DA2A817115CEF8612AC0E494D03C9 *)L_210);
			bool L_212;
			L_212 = GenericVirtFuncInvoker1< bool, ES3Type_t8FBECB7AE75168648B9524E0C2A38DAD4555421D * >::Invoke(ES3Reader_Read_TisBoolean_t07D1E3F34E4813023D64F584DFF7B34C9D922F37_mC6D1B158268FF9B97822FF9F5B37FB1723FEDA22_RuntimeMethod_var, (ES3Reader_t2780AF8AA61DA2A817115CEF8612AC0E494D03C9 *)L_210, (ES3Type_t8FBECB7AE75168648B9524E0C2A38DAD4555421D *)L_211);
			NullCheck((RenderTexture_t5FE7A5B47EF962A0E8D7BEBA05E9FC87D49A1849 *)L_209);
			RenderTexture_set_useDynamicScale_m8F96571C7EDBEFAB9278E04A3F3EB67067A5AE29((RenderTexture_t5FE7A5B47EF962A0E8D7BEBA05E9FC87D49A1849 *)L_209, (bool)L_212, /*hidden argument*/NULL);
			// break;
			goto IL_0721;
		}

IL_06e5:
		{
			// UnityEngine.RenderTexture.streamingTextureForceLoadAll = reader.Read<System.Boolean>(ES3Type_bool.Instance);
			ES3Reader_t2780AF8AA61DA2A817115CEF8612AC0E494D03C9 * L_213 = ___reader0;
			IL2CPP_RUNTIME_CLASS_INIT(ES3Type_bool_t8F309F7B9CC735FF1DEE68081B6E3CAB367745F4_il2cpp_TypeInfo_var);
			ES3Type_t8FBECB7AE75168648B9524E0C2A38DAD4555421D * L_214 = ((ES3Type_bool_t8F309F7B9CC735FF1DEE68081B6E3CAB367745F4_StaticFields*)il2cpp_codegen_static_fields_for(ES3Type_bool_t8F309F7B9CC735FF1DEE68081B6E3CAB367745F4_il2cpp_TypeInfo_var))->get_Instance_12();
			NullCheck((ES3Reader_t2780AF8AA61DA2A817115CEF8612AC0E494D03C9 *)L_213);
			bool L_215;
			L_215 = GenericVirtFuncInvoker1< bool, ES3Type_t8FBECB7AE75168648B9524E0C2A38DAD4555421D * >::Invoke(ES3Reader_Read_TisBoolean_t07D1E3F34E4813023D64F584DFF7B34C9D922F37_mC6D1B158268FF9B97822FF9F5B37FB1723FEDA22_RuntimeMethod_var, (ES3Reader_t2780AF8AA61DA2A817115CEF8612AC0E494D03C9 *)L_213, (ES3Type_t8FBECB7AE75168648B9524E0C2A38DAD4555421D *)L_214);
			IL2CPP_RUNTIME_CLASS_INIT(Texture_t9FE0218A1EEDF266E8C85879FE123265CACC95AE_il2cpp_TypeInfo_var);
			Texture_set_streamingTextureForceLoadAll_m325117C0830BB9B4316CF41CEE045759FC52B7A3((bool)L_215, /*hidden argument*/NULL);
			// break;
			goto IL_0721;
		}

IL_06f7:
		{
			// UnityEngine.RenderTexture.streamingTextureDiscardUnusedMips = reader.Read<System.Boolean>(ES3Type_bool.Instance);
			ES3Reader_t2780AF8AA61DA2A817115CEF8612AC0E494D03C9 * L_216 = ___reader0;
			IL2CPP_RUNTIME_CLASS_INIT(ES3Type_bool_t8F309F7B9CC735FF1DEE68081B6E3CAB367745F4_il2cpp_TypeInfo_var);
			ES3Type_t8FBECB7AE75168648B9524E0C2A38DAD4555421D * L_217 = ((ES3Type_bool_t8F309F7B9CC735FF1DEE68081B6E3CAB367745F4_StaticFields*)il2cpp_codegen_static_fields_for(ES3Type_bool_t8F309F7B9CC735FF1DEE68081B6E3CAB367745F4_il2cpp_TypeInfo_var))->get_Instance_12();
			NullCheck((ES3Reader_t2780AF8AA61DA2A817115CEF8612AC0E494D03C9 *)L_216);
			bool L_218;
			L_218 = GenericVirtFuncInvoker1< bool, ES3Type_t8FBECB7AE75168648B9524E0C2A38DAD4555421D * >::Invoke(ES3Reader_Read_TisBoolean_t07D1E3F34E4813023D64F584DFF7B34C9D922F37_mC6D1B158268FF9B97822FF9F5B37FB1723FEDA22_RuntimeMethod_var, (ES3Reader_t2780AF8AA61DA2A817115CEF8612AC0E494D03C9 *)L_216, (ES3Type_t8FBECB7AE75168648B9524E0C2A38DAD4555421D *)L_217);
			IL2CPP_RUNTIME_CLASS_INIT(Texture_t9FE0218A1EEDF266E8C85879FE123265CACC95AE_il2cpp_TypeInfo_var);
			Texture_set_streamingTextureDiscardUnusedMips_mE184CE016A8E0319B437D34E0DB61962CE17F5DC((bool)L_218, /*hidden argument*/NULL);
			// break;
			goto IL_0721;
		}

IL_0709:
		{
			// UnityEngine.RenderTexture.allowThreadedTextureCreation = reader.Read<System.Boolean>(ES3Type_bool.Instance);
			ES3Reader_t2780AF8AA61DA2A817115CEF8612AC0E494D03C9 * L_219 = ___reader0;
			IL2CPP_RUNTIME_CLASS_INIT(ES3Type_bool_t8F309F7B9CC735FF1DEE68081B6E3CAB367745F4_il2cpp_TypeInfo_var);
			ES3Type_t8FBECB7AE75168648B9524E0C2A38DAD4555421D * L_220 = ((ES3Type_bool_t8F309F7B9CC735FF1DEE68081B6E3CAB367745F4_StaticFields*)il2cpp_codegen_static_fields_for(ES3Type_bool_t8F309F7B9CC735FF1DEE68081B6E3CAB367745F4_il2cpp_TypeInfo_var))->get_Instance_12();
			NullCheck((ES3Reader_t2780AF8AA61DA2A817115CEF8612AC0E494D03C9 *)L_219);
			bool L_221;
			L_221 = GenericVirtFuncInvoker1< bool, ES3Type_t8FBECB7AE75168648B9524E0C2A38DAD4555421D * >::Invoke(ES3Reader_Read_TisBoolean_t07D1E3F34E4813023D64F584DFF7B34C9D922F37_mC6D1B158268FF9B97822FF9F5B37FB1723FEDA22_RuntimeMethod_var, (ES3Reader_t2780AF8AA61DA2A817115CEF8612AC0E494D03C9 *)L_219, (ES3Type_t8FBECB7AE75168648B9524E0C2A38DAD4555421D *)L_220);
			IL2CPP_RUNTIME_CLASS_INIT(Texture_t9FE0218A1EEDF266E8C85879FE123265CACC95AE_il2cpp_TypeInfo_var);
			Texture_set_allowThreadedTextureCreation_m84D29394912B9CE876023963426256CBEB15A52E((bool)L_221, /*hidden argument*/NULL);
			// break;
			goto IL_0721;
		}

IL_071b:
		{
			// reader.Skip();
			ES3Reader_t2780AF8AA61DA2A817115CEF8612AC0E494D03C9 * L_222 = ___reader0;
			NullCheck((ES3Reader_t2780AF8AA61DA2A817115CEF8612AC0E494D03C9 *)L_222);
			VirtActionInvoker0::Invoke(41 /* System.Void ES3Reader::Skip() */, (ES3Reader_t2780AF8AA61DA2A817115CEF8612AC0E494D03C9 *)L_222);
		}

IL_0721:
		{
			// foreach (string propertyName in reader.Properties)
			RuntimeObject* L_223 = V_1;
			NullCheck((RuntimeObject*)L_223);
			bool L_224;
			L_224 = InterfaceFuncInvoker0< bool >::Invoke(0 /* System.Boolean System.Collections.IEnumerator::MoveNext() */, IEnumerator_t5956F3AFB7ECF1117E3BC5890E7FC7B7F7A04105_il2cpp_TypeInfo_var, (RuntimeObject*)L_223);
			if (L_224)
			{
				goto IL_0018;
			}
		}

IL_072c:
		{
			IL2CPP_LEAVE(0x742, FINALLY_072e);
		}
	} // end try (depth: 1)
	catch(Il2CppExceptionWrapper& e)
	{
		__last_unhandled_exception = (Exception_t *)e.ex;
		goto FINALLY_072e;
	}

FINALLY_072e:
	{ // begin finally (depth: 1)
		{
			RuntimeObject* L_225 = V_1;
			V_4 = (RuntimeObject*)((RuntimeObject*)IsInst((RuntimeObject*)L_225, IDisposable_t099785737FC6A1E3699919A94109383715A8D807_il2cpp_TypeInfo_var));
			RuntimeObject* L_226 = V_4;
			if (!L_226)
			{
				goto IL_0741;
			}
		}

IL_073a:
		{
			RuntimeObject* L_227 = V_4;
			NullCheck((RuntimeObject*)L_227);
			InterfaceActionInvoker0::Invoke(0 /* System.Void System.IDisposable::Dispose() */, IDisposable_t099785737FC6A1E3699919A94109383715A8D807_il2cpp_TypeInfo_var, (RuntimeObject*)L_227);
		}

IL_0741:
		{
			IL2CPP_END_FINALLY(1838)
		}
	} // end finally (depth: 1)
	IL2CPP_CLEANUP(1838)
	{
		IL2CPP_RETHROW_IF_UNHANDLED(Exception_t *)
		IL2CPP_JUMP_TBL(0x742, IL_0742)
	}

IL_0742:
	{
		// }
		return;
	}
}
// System.Void ES3Types.ES3Type_RenderTexture::ReadObject<UnityEngine.ParticleSystem/SizeOverLifetimeModule>(ES3Reader,System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ES3Type_RenderTexture_ReadObject_TisSizeOverLifetimeModule_t0EF80B7F6333637F781C2A0008F6DADBEA0B45BD_mC88659CB061AC7DB39A01F9CC73E4550D61EB41B_gshared (ES3Type_RenderTexture_t7B14573C56809AFDC0A1C481D6B61E2146DEF194 * __this, ES3Reader_t2780AF8AA61DA2A817115CEF8612AC0E494D03C9 * ___reader0, RuntimeObject * ___obj1, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ES3Reader_Read_TisAnisotropicFiltering_tAC3D1448B262D5869946CD1CDD2C8DAE3A7A537B_mAF1268AAC3E461D6E0604A19FAF0325873B6EC8A_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ES3Reader_Read_TisBoolean_t07D1E3F34E4813023D64F584DFF7B34C9D922F37_mC6D1B158268FF9B97822FF9F5B37FB1723FEDA22_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ES3Reader_Read_TisFilterMode_tE90A08FD96A142C761463D65E524BCDBFEEE3D19_m9819C2A442797B4060B0D9A80CFA96CFD6102839_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ES3Reader_Read_TisGraphicsFormat_t07A3C024BC77B843C53A369D6FC02ABD27D2AB1D_mCBD36004B10F649C93215AB4717F6F0D7118BF7D_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ES3Reader_Read_TisInt32_tFDE5F8CD43D10453F6A2E0C77FE48C6CC7009046_m2B74AA6627F5B1D21171D56C42F71DE5A7C1B4A6_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ES3Reader_Read_TisRenderTextureDescriptor_t67FF189E1F35AEB5D6C43A2D7103F3A8A8CA0B47_m427886ADAAF96C7BA9BD423544128494F96D69E7_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ES3Reader_Read_TisRenderTextureFormat_t8371287102ED67772EF78229CF4AB9D38C2CD626_mE6358E03407F5C15B58B292C79D4770DE3FAC95A_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ES3Reader_Read_TisRenderTextureMemoryless_t37547D68C2186D2650440F719302CDA4A3BB7F67_m3A980BA15AADBBB8393C3BC88CE17EEDDC89B027_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ES3Reader_Read_TisSingle_tE07797BA3C98D4CA9B5A19413C19A76688AB899E_m4A0416374498BDA042B8EB21E49B72326D6CE5F4_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ES3Reader_Read_TisString_t_m883861F3B58239392073ABF39876826EEB87DF9C_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ES3Reader_Read_TisTextureDimension_tADCCB7C1D30E4D1182651BA9094B4DE61B63EACC_m19EAA3B93D10636C17A62A3D8437349223CFD988_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ES3Reader_Read_TisTextureWrapMode_t86DDA8206E4AA784A1218D0DE3C5F6826D7549EB_m7926E449CD0B8BD56E5BF145DD0CCFE1C567F107_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ES3Reader_Read_TisVRTextureUsage_t3C09DF3DD90B5620BC0AB6F8078DFEF4E607F645_m7DE3966E4815BB13132866CB005EEE5B90FF51C2_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ES3Type_bool_t8F309F7B9CC735FF1DEE68081B6E3CAB367745F4_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ES3Type_float_tF86B773C86731BD9AD79448B860BBB178FE77644_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ES3Type_int_tF64C15D40AD0CC7C15BCD1CEC3C5C6BF837BD167_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ES3Type_string_tC47BFBE3CC816F3C70B51558C68F0C6470C5EFE5_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IDisposable_t099785737FC6A1E3699919A94109383715A8D807_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IEnumerator_t5956F3AFB7ECF1117E3BC5890E7FC7B7F7A04105_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&RenderTexture_t5FE7A5B47EF962A0E8D7BEBA05E9FC87D49A1849_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&String_t_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Texture_t9FE0218A1EEDF266E8C85879FE123265CACC95AE_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral201D9D00BB60DC2318D21CF9902290EFE255D5DC);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral2ADFC3FFF7C52D554F0435A348A5345C9FCD7FF8);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral2E201D1972661439FD3C8523C55723E7E9BCC7DA);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral2EE7B6B0E37E14930BBA497867139BFD0617CE04);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral3A04F86957625CB28FA670EECF997E6BAD45BBE7);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral3BC15E3C2F40466B2DC85C4776499817B8306CBB);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral3F1522C8DB7943F2AE3AA1563D3AC25D9C8B93D1);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral53D3413057D7E52F44470A335C590748745352B1);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral647E0FB2B5E859CC4BD7C73623B82C8EFABA2563);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral65B008F04EC40A696263EF679CF274BD10999A5D);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral71C5F9C3E2F3C81C5BBC7FD313F6938654E61138);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral75C9716749EA210206E3467390B7A11F3F33DDFA);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral7606720A7AEF5939309A8E4FCB8274252FA3D7BF);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral7A4A6E2A7090298F814A9D44C89F8634249BEF07);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral7FF61C3A55BCA1287974D8740F945250B3F0F084);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral83AC9669A9053DD15B9F2E82D2CE2369EFE131BA);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral95F57476C0AA778364404E7CCCD7499BF1BF3757);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral9AB5ADF8A8A53110245466F7C226F7935F5FE95F);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralB49A1DF483856544CEC6018E8C944DB6E16A8D57);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralBA9362732D25B1644B7D8DEC5DF6F036A4A66DE5);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralC959D767B7F0BD38D9DA8A64A4750C3A0972E2A0);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralCD44AC57FFE6CAC7824F4CAA223F1BB8B4CB0D73);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralCE18B047107AA23D1AA9B2ED32D316148E02655F);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralEA8FBF382D8AC9EDB8FFC14A350641B987F5C631);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralEBF5FE0CBF3EEA67902EEA700B7216E3DB0D8E84);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralECAEEB225F8689DE45DEB4FA21CE34E1960B1B50);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralF23E83744C9D6FC70D71B723AAED8006D6780BCB);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralF2AF7DD0BFF41B7B35037F018DAABE7DCF357A7B);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralF38CFAE6A91D072D4453C29FF44D81D459A582F1);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralF3FA58C10BBB9830102605E24AF89DC619908DFA);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralF9EE582B77C320A1F6A3DF72205857C4248BAC79);
		s_Il2CppMethodInitialized = true;
	}
	RenderTexture_t5FE7A5B47EF962A0E8D7BEBA05E9FC87D49A1849 * V_0 = NULL;
	RuntimeObject* V_1 = NULL;
	String_t* V_2 = NULL;
	uint32_t V_3 = 0;
	RuntimeObject* V_4 = NULL;
	Exception_t * __last_unhandled_exception = 0;
	il2cpp::utils::ExceptionSupportStack<int32_t, 1> __leave_targets;
	{
		// var instance = (UnityEngine.RenderTexture)obj;
		RuntimeObject * L_0 = ___obj1;
		V_0 = (RenderTexture_t5FE7A5B47EF962A0E8D7BEBA05E9FC87D49A1849 *)((RenderTexture_t5FE7A5B47EF962A0E8D7BEBA05E9FC87D49A1849 *)Castclass((RuntimeObject*)L_0, RenderTexture_t5FE7A5B47EF962A0E8D7BEBA05E9FC87D49A1849_il2cpp_TypeInfo_var));
		// foreach (string propertyName in reader.Properties)
		ES3Reader_t2780AF8AA61DA2A817115CEF8612AC0E494D03C9 * L_1 = ___reader0;
		NullCheck((ES3Reader_t2780AF8AA61DA2A817115CEF8612AC0E494D03C9 *)L_1);
		ES3ReaderPropertyEnumerator_tFC854F4BE72BFA234682EB1909D92457534A979D * L_2;
		L_2 = VirtFuncInvoker0< ES3ReaderPropertyEnumerator_tFC854F4BE72BFA234682EB1909D92457534A979D * >::Invoke(39 /* ES3Reader/ES3ReaderPropertyEnumerator ES3Reader::get_Properties() */, (ES3Reader_t2780AF8AA61DA2A817115CEF8612AC0E494D03C9 *)L_1);
		NullCheck((ES3ReaderPropertyEnumerator_tFC854F4BE72BFA234682EB1909D92457534A979D *)L_2);
		RuntimeObject* L_3;
		L_3 = ES3ReaderPropertyEnumerator_GetEnumerator_m6C61168655E3736E7847E5CB1CD9BC6B48442FD4((ES3ReaderPropertyEnumerator_tFC854F4BE72BFA234682EB1909D92457534A979D *)L_2, /*hidden argument*/NULL);
		V_1 = (RuntimeObject*)L_3;
	}

IL_0013:
	try
	{ // begin try (depth: 1)
		{
			goto IL_0721;
		}

IL_0018:
		{
			// foreach (string propertyName in reader.Properties)
			RuntimeObject* L_4 = V_1;
			NullCheck((RuntimeObject*)L_4);
			RuntimeObject * L_5;
			L_5 = InterfaceFuncInvoker0< RuntimeObject * >::Invoke(1 /* System.Object System.Collections.IEnumerator::get_Current() */, IEnumerator_t5956F3AFB7ECF1117E3BC5890E7FC7B7F7A04105_il2cpp_TypeInfo_var, (RuntimeObject*)L_4);
			V_2 = (String_t*)((String_t*)Castclass((RuntimeObject*)L_5, String_t_il2cpp_TypeInfo_var));
			String_t* L_6 = V_2;
			if (!L_6)
			{
				goto IL_071b;
			}
		}

IL_002a:
		{
			String_t* L_7 = V_2;
			uint32_t L_8;
			L_8 = U3CPrivateImplementationDetailsU3E_ComputeStringHash_m3ADC1F612F9EE3DD518E6F0023A0DE0EE2B120A7((String_t*)L_7, /*hidden argument*/NULL);
			V_3 = (uint32_t)L_8;
			uint32_t L_9 = V_3;
			if ((!(((uint32_t)L_9) <= ((uint32_t)((int32_t)1508062721)))))
			{
				goto IL_0134;
			}
		}

IL_003c:
		{
			uint32_t L_10 = V_3;
			if ((!(((uint32_t)L_10) <= ((uint32_t)((int32_t)698754697)))))
			{
				goto IL_00b0;
			}
		}

IL_0044:
		{
			uint32_t L_11 = V_3;
			if ((!(((uint32_t)L_11) <= ((uint32_t)((int32_t)472844700)))))
			{
				goto IL_0072;
			}
		}

IL_004c:
		{
			uint32_t L_12 = V_3;
			if ((((int32_t)L_12) == ((int32_t)((int32_t)87590155))))
			{
				goto IL_043c;
			}
		}

IL_0057:
		{
			uint32_t L_13 = V_3;
			if ((((int32_t)L_13) == ((int32_t)((int32_t)301255720))))
			{
				goto IL_02d7;
			}
		}

IL_0062:
		{
			uint32_t L_14 = V_3;
			if ((((int32_t)L_14) == ((int32_t)((int32_t)472844700))))
			{
				goto IL_0283;
			}
		}

IL_006d:
		{
			goto IL_071b;
		}

IL_0072:
		{
			uint32_t L_15 = V_3;
			if ((!(((uint32_t)L_15) <= ((uint32_t)((int32_t)549791583)))))
			{
				goto IL_0095;
			}
		}

IL_007a:
		{
			uint32_t L_16 = V_3;
			if ((((int32_t)L_16) == ((int32_t)((int32_t)533013964))))
			{
				goto IL_03a9;
			}
		}

IL_0085:
		{
			uint32_t L_17 = V_3;
			if ((((int32_t)L_17) == ((int32_t)((int32_t)549791583))))
			{
				goto IL_03be;
			}
		}

IL_0090:
		{
			goto IL_071b;
		}

IL_0095:
		{
			uint32_t L_18 = V_3;
			if ((((int32_t)L_18) == ((int32_t)((int32_t)583346821))))
			{
				goto IL_0394;
			}
		}

IL_00a0:
		{
			uint32_t L_19 = V_3;
			if ((((int32_t)L_19) == ((int32_t)((int32_t)698754697))))
			{
				goto IL_02ec;
			}
		}

IL_00ab:
		{
			goto IL_071b;
		}

IL_00b0:
		{
			uint32_t L_20 = V_3;
			if ((!(((uint32_t)L_20) <= ((uint32_t)((int32_t)1235622516)))))
			{
				goto IL_00f6;
			}
		}

IL_00b8:
		{
			uint32_t L_21 = V_3;
			if ((!(((uint32_t)L_21) <= ((uint32_t)((int32_t)740612720)))))
			{
				goto IL_00db;
			}
		}

IL_00c0:
		{
			uint32_t L_22 = V_3;
			if ((((int32_t)L_22) == ((int32_t)((int32_t)705796271))))
			{
				goto IL_0316;
			}
		}

IL_00cb:
		{
			uint32_t L_23 = V_3;
			if ((((int32_t)L_23) == ((int32_t)((int32_t)740612720))))
			{
				goto IL_03d3;
			}
		}

IL_00d6:
		{
			goto IL_071b;
		}

IL_00db:
		{
			uint32_t L_24 = V_3;
			if ((((int32_t)L_24) == ((int32_t)((int32_t)1059843136))))
			{
				goto IL_0340;
			}
		}

IL_00e6:
		{
			uint32_t L_25 = V_3;
			if ((((int32_t)L_25) == ((int32_t)((int32_t)1235622516))))
			{
				goto IL_036a;
			}
		}

IL_00f1:
		{
			goto IL_071b;
		}

IL_00f6:
		{
			uint32_t L_26 = V_3;
			if ((!(((uint32_t)L_26) <= ((uint32_t)((int32_t)1320492961)))))
			{
				goto IL_0119;
			}
		}

IL_00fe:
		{
			uint32_t L_27 = V_3;
			if ((((int32_t)L_27) == ((int32_t)((int32_t)1310955452))))
			{
				goto IL_0490;
			}
		}

IL_0109:
		{
			uint32_t L_28 = V_3;
			if ((((int32_t)L_28) == ((int32_t)((int32_t)1320492961))))
			{
				goto IL_047b;
			}
		}

IL_0114:
		{
			goto IL_071b;
		}

IL_0119:
		{
			uint32_t L_29 = V_3;
			if ((((int32_t)L_29) == ((int32_t)((int32_t)1458352709))))
			{
				goto IL_0466;
			}
		}

IL_0124:
		{
			uint32_t L_30 = V_3;
			if ((((int32_t)L_30) == ((int32_t)((int32_t)1508062721))))
			{
				goto IL_04a5;
			}
		}

IL_012f:
		{
			goto IL_071b;
		}

IL_0134:
		{
			uint32_t L_31 = V_3;
			if ((!(((uint32_t)L_31) <= ((uint32_t)((int32_t)-1444332543)))))
			{
				goto IL_01c3;
			}
		}

IL_013f:
		{
			uint32_t L_32 = V_3;
			if ((!(((uint32_t)L_32) <= ((uint32_t)((int32_t)2129631044)))))
			{
				goto IL_0185;
			}
		}

IL_0147:
		{
			uint32_t L_33 = V_3;
			if ((!(((uint32_t)L_33) <= ((uint32_t)((int32_t)1640355324)))))
			{
				goto IL_016a;
			}
		}

IL_014f:
		{
			uint32_t L_34 = V_3;
			if ((((int32_t)L_34) == ((int32_t)((int32_t)1560124071))))
			{
				goto IL_04ba;
			}
		}

IL_015a:
		{
			uint32_t L_35 = V_3;
			if ((((int32_t)L_35) == ((int32_t)((int32_t)1640355324))))
			{
				goto IL_0451;
			}
		}

IL_0165:
		{
			goto IL_071b;
		}

IL_016a:
		{
			uint32_t L_36 = V_3;
			if ((((int32_t)L_36) == ((int32_t)((int32_t)1728801507))))
			{
				goto IL_026e;
			}
		}

IL_0175:
		{
			uint32_t L_37 = V_3;
			if ((((int32_t)L_37) == ((int32_t)((int32_t)2129631044))))
			{
				goto IL_03fd;
			}
		}

IL_0180:
		{
			goto IL_071b;
		}

IL_0185:
		{
			uint32_t L_38 = V_3;
			if ((!(((uint32_t)L_38) <= ((uint32_t)((int32_t)-1786286561)))))
			{
				goto IL_01a8;
			}
		}

IL_018d:
		{
			uint32_t L_39 = V_3;
			if ((((int32_t)L_39) == ((int32_t)((int32_t)-1925595674))))
			{
				goto IL_0412;
			}
		}

IL_0198:
		{
			uint32_t L_40 = V_3;
			if ((((int32_t)L_40) == ((int32_t)((int32_t)-1786286561))))
			{
				goto IL_0244;
			}
		}

IL_01a3:
		{
			goto IL_071b;
		}

IL_01a8:
		{
			uint32_t L_41 = V_3;
			if ((((int32_t)L_41) == ((int32_t)((int32_t)-1522491664))))
			{
				goto IL_0298;
			}
		}

IL_01b3:
		{
			uint32_t L_42 = V_3;
			if ((((int32_t)L_42) == ((int32_t)((int32_t)-1444332543))))
			{
				goto IL_0355;
			}
		}

IL_01be:
		{
			goto IL_071b;
		}

IL_01c3:
		{
			uint32_t L_43 = V_3;
			if ((!(((uint32_t)L_43) <= ((uint32_t)((int32_t)-558361902)))))
			{
				goto IL_0206;
			}
		}

IL_01cb:
		{
			uint32_t L_44 = V_3;
			if ((!(((uint32_t)L_44) <= ((uint32_t)((int32_t)-1180859054)))))
			{
				goto IL_01ee;
			}
		}

IL_01d3:
		{
			uint32_t L_45 = V_3;
			if ((((int32_t)L_45) == ((int32_t)((int32_t)-1335745110))))
			{
				goto IL_02c2;
			}
		}

IL_01de:
		{
			uint32_t L_46 = V_3;
			if ((((int32_t)L_46) == ((int32_t)((int32_t)-1180859054))))
			{
				goto IL_02ad;
			}
		}

IL_01e9:
		{
			goto IL_071b;
		}

IL_01ee:
		{
			uint32_t L_47 = V_3;
			if ((((int32_t)L_47) == ((int32_t)((int32_t)-708986046))))
			{
				goto IL_0259;
			}
		}

IL_01f6:
		{
			uint32_t L_48 = V_3;
			if ((((int32_t)L_48) == ((int32_t)((int32_t)-558361902))))
			{
				goto IL_037f;
			}
		}

IL_0201:
		{
			goto IL_071b;
		}

IL_0206:
		{
			uint32_t L_49 = V_3;
			if ((!(((uint32_t)L_49) <= ((uint32_t)((int32_t)-255211260)))))
			{
				goto IL_0229;
			}
		}

IL_020e:
		{
			uint32_t L_50 = V_3;
			if ((((int32_t)L_50) == ((int32_t)((int32_t)-345285761))))
			{
				goto IL_03e8;
			}
		}

IL_0219:
		{
			uint32_t L_51 = V_3;
			if ((((int32_t)L_51) == ((int32_t)((int32_t)-255211260))))
			{
				goto IL_0427;
			}
		}

IL_0224:
		{
			goto IL_071b;
		}

IL_0229:
		{
			uint32_t L_52 = V_3;
			if ((((int32_t)L_52) == ((int32_t)((int32_t)-42086080))))
			{
				goto IL_0301;
			}
		}

IL_0234:
		{
			uint32_t L_53 = V_3;
			if ((((int32_t)L_53) == ((int32_t)((int32_t)-25846038))))
			{
				goto IL_032b;
			}
		}

IL_023f:
		{
			goto IL_071b;
		}

IL_0244:
		{
			String_t* L_54 = V_2;
			bool L_55;
			L_55 = String_op_Equality_m50B3548E4AC232558190B0052877B290AA1D436A((String_t*)L_54, (String_t*)_stringLiteralEBF5FE0CBF3EEA67902EEA700B7216E3DB0D8E84, /*hidden argument*/NULL);
			if (L_55)
			{
				goto IL_04cf;
			}
		}

IL_0254:
		{
			goto IL_071b;
		}

IL_0259:
		{
			String_t* L_56 = V_2;
			bool L_57;
			L_57 = String_op_Equality_m50B3548E4AC232558190B0052877B290AA1D436A((String_t*)L_56, (String_t*)_stringLiteral647E0FB2B5E859CC4BD7C73623B82C8EFABA2563, /*hidden argument*/NULL);
			if (L_57)
			{
				goto IL_04e5;
			}
		}

IL_0269:
		{
			goto IL_071b;
		}

IL_026e:
		{
			String_t* L_58 = V_2;
			bool L_59;
			L_59 = String_op_Equality_m50B3548E4AC232558190B0052877B290AA1D436A((String_t*)L_58, (String_t*)_stringLiteralF9EE582B77C320A1F6A3DF72205857C4248BAC79, /*hidden argument*/NULL);
			if (L_59)
			{
				goto IL_04fb;
			}
		}

IL_027e:
		{
			goto IL_071b;
		}

IL_0283:
		{
			String_t* L_60 = V_2;
			bool L_61;
			L_61 = String_op_Equality_m50B3548E4AC232558190B0052877B290AA1D436A((String_t*)L_60, (String_t*)_stringLiteral53D3413057D7E52F44470A335C590748745352B1, /*hidden argument*/NULL);
			if (L_61)
			{
				goto IL_050c;
			}
		}

IL_0293:
		{
			goto IL_071b;
		}

IL_0298:
		{
			String_t* L_62 = V_2;
			bool L_63;
			L_63 = String_op_Equality_m50B3548E4AC232558190B0052877B290AA1D436A((String_t*)L_62, (String_t*)_stringLiteralC959D767B7F0BD38D9DA8A64A4750C3A0972E2A0, /*hidden argument*/NULL);
			if (L_63)
			{
				goto IL_0522;
			}
		}

IL_02a8:
		{
			goto IL_071b;
		}

IL_02ad:
		{
			String_t* L_64 = V_2;
			bool L_65;
			L_65 = String_op_Equality_m50B3548E4AC232558190B0052877B290AA1D436A((String_t*)L_64, (String_t*)_stringLiteral75C9716749EA210206E3467390B7A11F3F33DDFA, /*hidden argument*/NULL);
			if (L_65)
			{
				goto IL_0533;
			}
		}

IL_02bd:
		{
			goto IL_071b;
		}

IL_02c2:
		{
			String_t* L_66 = V_2;
			bool L_67;
			L_67 = String_op_Equality_m50B3548E4AC232558190B0052877B290AA1D436A((String_t*)L_66, (String_t*)_stringLiteral7606720A7AEF5939309A8E4FCB8274252FA3D7BF, /*hidden argument*/NULL);
			if (L_67)
			{
				goto IL_0544;
			}
		}

IL_02d2:
		{
			goto IL_071b;
		}

IL_02d7:
		{
			String_t* L_68 = V_2;
			bool L_69;
			L_69 = String_op_Equality_m50B3548E4AC232558190B0052877B290AA1D436A((String_t*)L_68, (String_t*)_stringLiteral71C5F9C3E2F3C81C5BBC7FD313F6938654E61138, /*hidden argument*/NULL);
			if (L_69)
			{
				goto IL_055a;
			}
		}

IL_02e7:
		{
			goto IL_071b;
		}

IL_02ec:
		{
			String_t* L_70 = V_2;
			bool L_71;
			L_71 = String_op_Equality_m50B3548E4AC232558190B0052877B290AA1D436A((String_t*)L_70, (String_t*)_stringLiteral3F1522C8DB7943F2AE3AA1563D3AC25D9C8B93D1, /*hidden argument*/NULL);
			if (L_71)
			{
				goto IL_0570;
			}
		}

IL_02fc:
		{
			goto IL_071b;
		}

IL_0301:
		{
			String_t* L_72 = V_2;
			bool L_73;
			L_73 = String_op_Equality_m50B3548E4AC232558190B0052877B290AA1D436A((String_t*)L_72, (String_t*)_stringLiteralF23E83744C9D6FC70D71B723AAED8006D6780BCB, /*hidden argument*/NULL);
			if (L_73)
			{
				goto IL_0586;
			}
		}

IL_0311:
		{
			goto IL_071b;
		}

IL_0316:
		{
			String_t* L_74 = V_2;
			bool L_75;
			L_75 = String_op_Equality_m50B3548E4AC232558190B0052877B290AA1D436A((String_t*)L_74, (String_t*)_stringLiteralB49A1DF483856544CEC6018E8C944DB6E16A8D57, /*hidden argument*/NULL);
			if (L_75)
			{
				goto IL_059c;
			}
		}

IL_0326:
		{
			goto IL_071b;
		}

IL_032b:
		{
			String_t* L_76 = V_2;
			bool L_77;
			L_77 = String_op_Equality_m50B3548E4AC232558190B0052877B290AA1D436A((String_t*)L_76, (String_t*)_stringLiteral3A04F86957625CB28FA670EECF997E6BAD45BBE7, /*hidden argument*/NULL);
			if (L_77)
			{
				goto IL_05b2;
			}
		}

IL_033b:
		{
			goto IL_071b;
		}

IL_0340:
		{
			String_t* L_78 = V_2;
			bool L_79;
			L_79 = String_op_Equality_m50B3548E4AC232558190B0052877B290AA1D436A((String_t*)L_78, (String_t*)_stringLiteral7A4A6E2A7090298F814A9D44C89F8634249BEF07, /*hidden argument*/NULL);
			if (L_79)
			{
				goto IL_05c8;
			}
		}

IL_0350:
		{
			goto IL_071b;
		}

IL_0355:
		{
			String_t* L_80 = V_2;
			bool L_81;
			L_81 = String_op_Equality_m50B3548E4AC232558190B0052877B290AA1D436A((String_t*)L_80, (String_t*)_stringLiteralF3FA58C10BBB9830102605E24AF89DC619908DFA, /*hidden argument*/NULL);
			if (L_81)
			{
				goto IL_05d9;
			}
		}

IL_0365:
		{
			goto IL_071b;
		}

IL_036a:
		{
			String_t* L_82 = V_2;
			bool L_83;
			L_83 = String_op_Equality_m50B3548E4AC232558190B0052877B290AA1D436A((String_t*)L_82, (String_t*)_stringLiteralBA9362732D25B1644B7D8DEC5DF6F036A4A66DE5, /*hidden argument*/NULL);
			if (L_83)
			{
				goto IL_05ee;
			}
		}

IL_037a:
		{
			goto IL_071b;
		}

IL_037f:
		{
			String_t* L_84 = V_2;
			bool L_85;
			L_85 = String_op_Equality_m50B3548E4AC232558190B0052877B290AA1D436A((String_t*)L_84, (String_t*)_stringLiteral95F57476C0AA778364404E7CCCD7499BF1BF3757, /*hidden argument*/NULL);
			if (L_85)
			{
				goto IL_05fe;
			}
		}

IL_038f:
		{
			goto IL_071b;
		}

IL_0394:
		{
			String_t* L_86 = V_2;
			bool L_87;
			L_87 = String_op_Equality_m50B3548E4AC232558190B0052877B290AA1D436A((String_t*)L_86, (String_t*)_stringLiteral9AB5ADF8A8A53110245466F7C226F7935F5FE95F, /*hidden argument*/NULL);
			if (L_87)
			{
				goto IL_060f;
			}
		}

IL_03a4:
		{
			goto IL_071b;
		}

IL_03a9:
		{
			String_t* L_88 = V_2;
			bool L_89;
			L_89 = String_op_Equality_m50B3548E4AC232558190B0052877B290AA1D436A((String_t*)L_88, (String_t*)_stringLiteralEA8FBF382D8AC9EDB8FFC14A350641B987F5C631, /*hidden argument*/NULL);
			if (L_89)
			{
				goto IL_0620;
			}
		}

IL_03b9:
		{
			goto IL_071b;
		}

IL_03be:
		{
			String_t* L_90 = V_2;
			bool L_91;
			L_91 = String_op_Equality_m50B3548E4AC232558190B0052877B290AA1D436A((String_t*)L_90, (String_t*)_stringLiteral201D9D00BB60DC2318D21CF9902290EFE255D5DC, /*hidden argument*/NULL);
			if (L_91)
			{
				goto IL_0631;
			}
		}

IL_03ce:
		{
			goto IL_071b;
		}

IL_03d3:
		{
			String_t* L_92 = V_2;
			bool L_93;
			L_93 = String_op_Equality_m50B3548E4AC232558190B0052877B290AA1D436A((String_t*)L_92, (String_t*)_stringLiteral65B008F04EC40A696263EF679CF274BD10999A5D, /*hidden argument*/NULL);
			if (L_93)
			{
				goto IL_0642;
			}
		}

IL_03e3:
		{
			goto IL_071b;
		}

IL_03e8:
		{
			String_t* L_94 = V_2;
			bool L_95;
			L_95 = String_op_Equality_m50B3548E4AC232558190B0052877B290AA1D436A((String_t*)L_94, (String_t*)_stringLiteralF38CFAE6A91D072D4453C29FF44D81D459A582F1, /*hidden argument*/NULL);
			if (L_95)
			{
				goto IL_0653;
			}
		}

IL_03f8:
		{
			goto IL_071b;
		}

IL_03fd:
		{
			String_t* L_96 = V_2;
			bool L_97;
			L_97 = String_op_Equality_m50B3548E4AC232558190B0052877B290AA1D436A((String_t*)L_96, (String_t*)_stringLiteral3BC15E3C2F40466B2DC85C4776499817B8306CBB, /*hidden argument*/NULL);
			if (L_97)
			{
				goto IL_0669;
			}
		}

IL_040d:
		{
			goto IL_071b;
		}

IL_0412:
		{
			String_t* L_98 = V_2;
			bool L_99;
			L_99 = String_op_Equality_m50B3548E4AC232558190B0052877B290AA1D436A((String_t*)L_98, (String_t*)_stringLiteralCE18B047107AA23D1AA9B2ED32D316148E02655F, /*hidden argument*/NULL);
			if (L_99)
			{
				goto IL_067f;
			}
		}

IL_0422:
		{
			goto IL_071b;
		}

IL_0427:
		{
			String_t* L_100 = V_2;
			bool L_101;
			L_101 = String_op_Equality_m50B3548E4AC232558190B0052877B290AA1D436A((String_t*)L_100, (String_t*)_stringLiteral83AC9669A9053DD15B9F2E82D2CE2369EFE131BA, /*hidden argument*/NULL);
			if (L_101)
			{
				goto IL_0695;
			}
		}

IL_0437:
		{
			goto IL_071b;
		}

IL_043c:
		{
			String_t* L_102 = V_2;
			bool L_103;
			L_103 = String_op_Equality_m50B3548E4AC232558190B0052877B290AA1D436A((String_t*)L_102, (String_t*)_stringLiteralECAEEB225F8689DE45DEB4FA21CE34E1960B1B50, /*hidden argument*/NULL);
			if (L_103)
			{
				goto IL_06a3;
			}
		}

IL_044c:
		{
			goto IL_071b;
		}

IL_0451:
		{
			String_t* L_104 = V_2;
			bool L_105;
			L_105 = String_op_Equality_m50B3548E4AC232558190B0052877B290AA1D436A((String_t*)L_104, (String_t*)_stringLiteral2EE7B6B0E37E14930BBA497867139BFD0617CE04, /*hidden argument*/NULL);
			if (L_105)
			{
				goto IL_06b1;
			}
		}

IL_0461:
		{
			goto IL_071b;
		}

IL_0466:
		{
			String_t* L_106 = V_2;
			bool L_107;
			L_107 = String_op_Equality_m50B3548E4AC232558190B0052877B290AA1D436A((String_t*)L_106, (String_t*)_stringLiteralF2AF7DD0BFF41B7B35037F018DAABE7DCF357A7B, /*hidden argument*/NULL);
			if (L_107)
			{
				goto IL_06bf;
			}
		}

IL_0476:
		{
			goto IL_071b;
		}

IL_047b:
		{
			String_t* L_108 = V_2;
			bool L_109;
			L_109 = String_op_Equality_m50B3548E4AC232558190B0052877B290AA1D436A((String_t*)L_108, (String_t*)_stringLiteral7FF61C3A55BCA1287974D8740F945250B3F0F084, /*hidden argument*/NULL);
			if (L_109)
			{
				goto IL_06d2;
			}
		}

IL_048b:
		{
			goto IL_071b;
		}

IL_0490:
		{
			String_t* L_110 = V_2;
			bool L_111;
			L_111 = String_op_Equality_m50B3548E4AC232558190B0052877B290AA1D436A((String_t*)L_110, (String_t*)_stringLiteral2ADFC3FFF7C52D554F0435A348A5345C9FCD7FF8, /*hidden argument*/NULL);
			if (L_111)
			{
				goto IL_06e5;
			}
		}

IL_04a0:
		{
			goto IL_071b;
		}

IL_04a5:
		{
			String_t* L_112 = V_2;
			bool L_113;
			L_113 = String_op_Equality_m50B3548E4AC232558190B0052877B290AA1D436A((String_t*)L_112, (String_t*)_stringLiteral2E201D1972661439FD3C8523C55723E7E9BCC7DA, /*hidden argument*/NULL);
			if (L_113)
			{
				goto IL_06f7;
			}
		}

IL_04b5:
		{
			goto IL_071b;
		}

IL_04ba:
		{
			String_t* L_114 = V_2;
			bool L_115;
			L_115 = String_op_Equality_m50B3548E4AC232558190B0052877B290AA1D436A((String_t*)L_114, (String_t*)_stringLiteralCD44AC57FFE6CAC7824F4CAA223F1BB8B4CB0D73, /*hidden argument*/NULL);
			if (L_115)
			{
				goto IL_0709;
			}
		}

IL_04ca:
		{
			goto IL_071b;
		}

IL_04cf:
		{
			// instance.width = reader.Read<System.Int32>(ES3Type_int.Instance);
			RenderTexture_t5FE7A5B47EF962A0E8D7BEBA05E9FC87D49A1849 * L_116 = V_0;
			ES3Reader_t2780AF8AA61DA2A817115CEF8612AC0E494D03C9 * L_117 = ___reader0;
			IL2CPP_RUNTIME_CLASS_INIT(ES3Type_int_tF64C15D40AD0CC7C15BCD1CEC3C5C6BF837BD167_il2cpp_TypeInfo_var);
			ES3Type_t8FBECB7AE75168648B9524E0C2A38DAD4555421D * L_118 = ((ES3Type_int_tF64C15D40AD0CC7C15BCD1CEC3C5C6BF837BD167_StaticFields*)il2cpp_codegen_static_fields_for(ES3Type_int_tF64C15D40AD0CC7C15BCD1CEC3C5C6BF837BD167_il2cpp_TypeInfo_var))->get_Instance_12();
			NullCheck((ES3Reader_t2780AF8AA61DA2A817115CEF8612AC0E494D03C9 *)L_117);
			int32_t L_119;
			L_119 = GenericVirtFuncInvoker1< int32_t, ES3Type_t8FBECB7AE75168648B9524E0C2A38DAD4555421D * >::Invoke(ES3Reader_Read_TisInt32_tFDE5F8CD43D10453F6A2E0C77FE48C6CC7009046_m2B74AA6627F5B1D21171D56C42F71DE5A7C1B4A6_RuntimeMethod_var, (ES3Reader_t2780AF8AA61DA2A817115CEF8612AC0E494D03C9 *)L_117, (ES3Type_t8FBECB7AE75168648B9524E0C2A38DAD4555421D *)L_118);
			NullCheck((Texture_t9FE0218A1EEDF266E8C85879FE123265CACC95AE *)L_116);
			VirtActionInvoker1< int32_t >::Invoke(6 /* System.Void UnityEngine.Texture::set_width(System.Int32) */, (Texture_t9FE0218A1EEDF266E8C85879FE123265CACC95AE *)L_116, (int32_t)L_119);
			// break;
			goto IL_0721;
		}

IL_04e5:
		{
			// instance.height = reader.Read<System.Int32>(ES3Type_int.Instance);
			RenderTexture_t5FE7A5B47EF962A0E8D7BEBA05E9FC87D49A1849 * L_120 = V_0;
			ES3Reader_t2780AF8AA61DA2A817115CEF8612AC0E494D03C9 * L_121 = ___reader0;
			IL2CPP_RUNTIME_CLASS_INIT(ES3Type_int_tF64C15D40AD0CC7C15BCD1CEC3C5C6BF837BD167_il2cpp_TypeInfo_var);
			ES3Type_t8FBECB7AE75168648B9524E0C2A38DAD4555421D * L_122 = ((ES3Type_int_tF64C15D40AD0CC7C15BCD1CEC3C5C6BF837BD167_StaticFields*)il2cpp_codegen_static_fields_for(ES3Type_int_tF64C15D40AD0CC7C15BCD1CEC3C5C6BF837BD167_il2cpp_TypeInfo_var))->get_Instance_12();
			NullCheck((ES3Reader_t2780AF8AA61DA2A817115CEF8612AC0E494D03C9 *)L_121);
			int32_t L_123;
			L_123 = GenericVirtFuncInvoker1< int32_t, ES3Type_t8FBECB7AE75168648B9524E0C2A38DAD4555421D * >::Invoke(ES3Reader_Read_TisInt32_tFDE5F8CD43D10453F6A2E0C77FE48C6CC7009046_m2B74AA6627F5B1D21171D56C42F71DE5A7C1B4A6_RuntimeMethod_var, (ES3Reader_t2780AF8AA61DA2A817115CEF8612AC0E494D03C9 *)L_121, (ES3Type_t8FBECB7AE75168648B9524E0C2A38DAD4555421D *)L_122);
			NullCheck((Texture_t9FE0218A1EEDF266E8C85879FE123265CACC95AE *)L_120);
			VirtActionInvoker1< int32_t >::Invoke(8 /* System.Void UnityEngine.Texture::set_height(System.Int32) */, (Texture_t9FE0218A1EEDF266E8C85879FE123265CACC95AE *)L_120, (int32_t)L_123);
			// break;
			goto IL_0721;
		}

IL_04fb:
		{
			// instance.dimension = reader.Read<UnityEngine.Rendering.TextureDimension>();
			RenderTexture_t5FE7A5B47EF962A0E8D7BEBA05E9FC87D49A1849 * L_124 = V_0;
			ES3Reader_t2780AF8AA61DA2A817115CEF8612AC0E494D03C9 * L_125 = ___reader0;
			NullCheck((ES3Reader_t2780AF8AA61DA2A817115CEF8612AC0E494D03C9 *)L_125);
			int32_t L_126;
			L_126 = GenericVirtFuncInvoker0< int32_t >::Invoke(ES3Reader_Read_TisTextureDimension_tADCCB7C1D30E4D1182651BA9094B4DE61B63EACC_m19EAA3B93D10636C17A62A3D8437349223CFD988_RuntimeMethod_var, (ES3Reader_t2780AF8AA61DA2A817115CEF8612AC0E494D03C9 *)L_125);
			NullCheck((Texture_t9FE0218A1EEDF266E8C85879FE123265CACC95AE *)L_124);
			VirtActionInvoker1< int32_t >::Invoke(10 /* System.Void UnityEngine.Texture::set_dimension(UnityEngine.Rendering.TextureDimension) */, (Texture_t9FE0218A1EEDF266E8C85879FE123265CACC95AE *)L_124, (int32_t)L_126);
			// break;
			goto IL_0721;
		}

IL_050c:
		{
			// instance.useMipMap = reader.Read<System.Boolean>(ES3Type_bool.Instance);
			RenderTexture_t5FE7A5B47EF962A0E8D7BEBA05E9FC87D49A1849 * L_127 = V_0;
			ES3Reader_t2780AF8AA61DA2A817115CEF8612AC0E494D03C9 * L_128 = ___reader0;
			IL2CPP_RUNTIME_CLASS_INIT(ES3Type_bool_t8F309F7B9CC735FF1DEE68081B6E3CAB367745F4_il2cpp_TypeInfo_var);
			ES3Type_t8FBECB7AE75168648B9524E0C2A38DAD4555421D * L_129 = ((ES3Type_bool_t8F309F7B9CC735FF1DEE68081B6E3CAB367745F4_StaticFields*)il2cpp_codegen_static_fields_for(ES3Type_bool_t8F309F7B9CC735FF1DEE68081B6E3CAB367745F4_il2cpp_TypeInfo_var))->get_Instance_12();
			NullCheck((ES3Reader_t2780AF8AA61DA2A817115CEF8612AC0E494D03C9 *)L_128);
			bool L_130;
			L_130 = GenericVirtFuncInvoker1< bool, ES3Type_t8FBECB7AE75168648B9524E0C2A38DAD4555421D * >::Invoke(ES3Reader_Read_TisBoolean_t07D1E3F34E4813023D64F584DFF7B34C9D922F37_mC6D1B158268FF9B97822FF9F5B37FB1723FEDA22_RuntimeMethod_var, (ES3Reader_t2780AF8AA61DA2A817115CEF8612AC0E494D03C9 *)L_128, (ES3Type_t8FBECB7AE75168648B9524E0C2A38DAD4555421D *)L_129);
			NullCheck((RenderTexture_t5FE7A5B47EF962A0E8D7BEBA05E9FC87D49A1849 *)L_127);
			RenderTexture_set_useMipMap_mAE1437C3D7D21441891A612C3B812EE9C379F126((RenderTexture_t5FE7A5B47EF962A0E8D7BEBA05E9FC87D49A1849 *)L_127, (bool)L_130, /*hidden argument*/NULL);
			// break;
			goto IL_0721;
		}

IL_0522:
		{
			// instance.memorylessMode = reader.Read<UnityEngine.RenderTextureMemoryless>();
			RenderTexture_t5FE7A5B47EF962A0E8D7BEBA05E9FC87D49A1849 * L_131 = V_0;
			ES3Reader_t2780AF8AA61DA2A817115CEF8612AC0E494D03C9 * L_132 = ___reader0;
			NullCheck((ES3Reader_t2780AF8AA61DA2A817115CEF8612AC0E494D03C9 *)L_132);
			int32_t L_133;
			L_133 = GenericVirtFuncInvoker0< int32_t >::Invoke(ES3Reader_Read_TisRenderTextureMemoryless_t37547D68C2186D2650440F719302CDA4A3BB7F67_m3A980BA15AADBBB8393C3BC88CE17EEDDC89B027_RuntimeMethod_var, (ES3Reader_t2780AF8AA61DA2A817115CEF8612AC0E494D03C9 *)L_132);
			NullCheck((RenderTexture_t5FE7A5B47EF962A0E8D7BEBA05E9FC87D49A1849 *)L_131);
			RenderTexture_set_memorylessMode_mE48B2A38E9374A7BB419383B438790347474EFC1((RenderTexture_t5FE7A5B47EF962A0E8D7BEBA05E9FC87D49A1849 *)L_131, (int32_t)L_133, /*hidden argument*/NULL);
			// break;
			goto IL_0721;
		}

IL_0533:
		{
			// instance.format = reader.Read<UnityEngine.RenderTextureFormat>();
			RenderTexture_t5FE7A5B47EF962A0E8D7BEBA05E9FC87D49A1849 * L_134 = V_0;
			ES3Reader_t2780AF8AA61DA2A817115CEF8612AC0E494D03C9 * L_135 = ___reader0;
			NullCheck((ES3Reader_t2780AF8AA61DA2A817115CEF8612AC0E494D03C9 *)L_135);
			int32_t L_136;
			L_136 = GenericVirtFuncInvoker0< int32_t >::Invoke(ES3Reader_Read_TisRenderTextureFormat_t8371287102ED67772EF78229CF4AB9D38C2CD626_mE6358E03407F5C15B58B292C79D4770DE3FAC95A_RuntimeMethod_var, (ES3Reader_t2780AF8AA61DA2A817115CEF8612AC0E494D03C9 *)L_135);
			NullCheck((RenderTexture_t5FE7A5B47EF962A0E8D7BEBA05E9FC87D49A1849 *)L_134);
			RenderTexture_set_format_m32D42DC33DB151B69E81D0D93F36DE7450CFC23D((RenderTexture_t5FE7A5B47EF962A0E8D7BEBA05E9FC87D49A1849 *)L_134, (int32_t)L_136, /*hidden argument*/NULL);
			// break;
			goto IL_0721;
		}

IL_0544:
		{
			// instance.autoGenerateMips = reader.Read<System.Boolean>(ES3Type_bool.Instance);
			RenderTexture_t5FE7A5B47EF962A0E8D7BEBA05E9FC87D49A1849 * L_137 = V_0;
			ES3Reader_t2780AF8AA61DA2A817115CEF8612AC0E494D03C9 * L_138 = ___reader0;
			IL2CPP_RUNTIME_CLASS_INIT(ES3Type_bool_t8F309F7B9CC735FF1DEE68081B6E3CAB367745F4_il2cpp_TypeInfo_var);
			ES3Type_t8FBECB7AE75168648B9524E0C2A38DAD4555421D * L_139 = ((ES3Type_bool_t8F309F7B9CC735FF1DEE68081B6E3CAB367745F4_StaticFields*)il2cpp_codegen_static_fields_for(ES3Type_bool_t8F309F7B9CC735FF1DEE68081B6E3CAB367745F4_il2cpp_TypeInfo_var))->get_Instance_12();
			NullCheck((ES3Reader_t2780AF8AA61DA2A817115CEF8612AC0E494D03C9 *)L_138);
			bool L_140;
			L_140 = GenericVirtFuncInvoker1< bool, ES3Type_t8FBECB7AE75168648B9524E0C2A38DAD4555421D * >::Invoke(ES3Reader_Read_TisBoolean_t07D1E3F34E4813023D64F584DFF7B34C9D922F37_mC6D1B158268FF9B97822FF9F5B37FB1723FEDA22_RuntimeMethod_var, (ES3Reader_t2780AF8AA61DA2A817115CEF8612AC0E494D03C9 *)L_138, (ES3Type_t8FBECB7AE75168648B9524E0C2A38DAD4555421D *)L_139);
			NullCheck((RenderTexture_t5FE7A5B47EF962A0E8D7BEBA05E9FC87D49A1849 *)L_137);
			RenderTexture_set_autoGenerateMips_m0F02D60D4C4D4790B354451732F2DA6BA12D2E63((RenderTexture_t5FE7A5B47EF962A0E8D7BEBA05E9FC87D49A1849 *)L_137, (bool)L_140, /*hidden argument*/NULL);
			// break;
			goto IL_0721;
		}

IL_055a:
		{
			// instance.volumeDepth = reader.Read<System.Int32>(ES3Type_int.Instance);
			RenderTexture_t5FE7A5B47EF962A0E8D7BEBA05E9FC87D49A1849 * L_141 = V_0;
			ES3Reader_t2780AF8AA61DA2A817115CEF8612AC0E494D03C9 * L_142 = ___reader0;
			IL2CPP_RUNTIME_CLASS_INIT(ES3Type_int_tF64C15D40AD0CC7C15BCD1CEC3C5C6BF837BD167_il2cpp_TypeInfo_var);
			ES3Type_t8FBECB7AE75168648B9524E0C2A38DAD4555421D * L_143 = ((ES3Type_int_tF64C15D40AD0CC7C15BCD1CEC3C5C6BF837BD167_StaticFields*)il2cpp_codegen_static_fields_for(ES3Type_int_tF64C15D40AD0CC7C15BCD1CEC3C5C6BF837BD167_il2cpp_TypeInfo_var))->get_Instance_12();
			NullCheck((ES3Reader_t2780AF8AA61DA2A817115CEF8612AC0E494D03C9 *)L_142);
			int32_t L_144;
			L_144 = GenericVirtFuncInvoker1< int32_t, ES3Type_t8FBECB7AE75168648B9524E0C2A38DAD4555421D * >::Invoke(ES3Reader_Read_TisInt32_tFDE5F8CD43D10453F6A2E0C77FE48C6CC7009046_m2B74AA6627F5B1D21171D56C42F71DE5A7C1B4A6_RuntimeMethod_var, (ES3Reader_t2780AF8AA61DA2A817115CEF8612AC0E494D03C9 *)L_142, (ES3Type_t8FBECB7AE75168648B9524E0C2A38DAD4555421D *)L_143);
			NullCheck((RenderTexture_t5FE7A5B47EF962A0E8D7BEBA05E9FC87D49A1849 *)L_141);
			RenderTexture_set_volumeDepth_m01D7BD50386DDAE777CE3CB9B60FDD7DE798AC93((RenderTexture_t5FE7A5B47EF962A0E8D7BEBA05E9FC87D49A1849 *)L_141, (int32_t)L_144, /*hidden argument*/NULL);
			// break;
			goto IL_0721;
		}

IL_0570:
		{
			// instance.antiAliasing = reader.Read<System.Int32>(ES3Type_int.Instance);
			RenderTexture_t5FE7A5B47EF962A0E8D7BEBA05E9FC87D49A1849 * L_145 = V_0;
			ES3Reader_t2780AF8AA61DA2A817115CEF8612AC0E494D03C9 * L_146 = ___reader0;
			IL2CPP_RUNTIME_CLASS_INIT(ES3Type_int_tF64C15D40AD0CC7C15BCD1CEC3C5C6BF837BD167_il2cpp_TypeInfo_var);
			ES3Type_t8FBECB7AE75168648B9524E0C2A38DAD4555421D * L_147 = ((ES3Type_int_tF64C15D40AD0CC7C15BCD1CEC3C5C6BF837BD167_StaticFields*)il2cpp_codegen_static_fields_for(ES3Type_int_tF64C15D40AD0CC7C15BCD1CEC3C5C6BF837BD167_il2cpp_TypeInfo_var))->get_Instance_12();
			NullCheck((ES3Reader_t2780AF8AA61DA2A817115CEF8612AC0E494D03C9 *)L_146);
			int32_t L_148;
			L_148 = GenericVirtFuncInvoker1< int32_t, ES3Type_t8FBECB7AE75168648B9524E0C2A38DAD4555421D * >::Invoke(ES3Reader_Read_TisInt32_tFDE5F8CD43D10453F6A2E0C77FE48C6CC7009046_m2B74AA6627F5B1D21171D56C42F71DE5A7C1B4A6_RuntimeMethod_var, (ES3Reader_t2780AF8AA61DA2A817115CEF8612AC0E494D03C9 *)L_146, (ES3Type_t8FBECB7AE75168648B9524E0C2A38DAD4555421D *)L_147);
			NullCheck((RenderTexture_t5FE7A5B47EF962A0E8D7BEBA05E9FC87D49A1849 *)L_145);
			RenderTexture_set_antiAliasing_m4D37900B7E23CA0D33F109DB8DF21265DB70C38F((RenderTexture_t5FE7A5B47EF962A0E8D7BEBA05E9FC87D49A1849 *)L_145, (int32_t)L_148, /*hidden argument*/NULL);
			// break;
			goto IL_0721;
		}

IL_0586:
		{
			// instance.enableRandomWrite = reader.Read<System.Boolean>(ES3Type_bool.Instance);
			RenderTexture_t5FE7A5B47EF962A0E8D7BEBA05E9FC87D49A1849 * L_149 = V_0;
			ES3Reader_t2780AF8AA61DA2A817115CEF8612AC0E494D03C9 * L_150 = ___reader0;
			IL2CPP_RUNTIME_CLASS_INIT(ES3Type_bool_t8F309F7B9CC735FF1DEE68081B6E3CAB367745F4_il2cpp_TypeInfo_var);
			ES3Type_t8FBECB7AE75168648B9524E0C2A38DAD4555421D * L_151 = ((ES3Type_bool_t8F309F7B9CC735FF1DEE68081B6E3CAB367745F4_StaticFields*)il2cpp_codegen_static_fields_for(ES3Type_bool_t8F309F7B9CC735FF1DEE68081B6E3CAB367745F4_il2cpp_TypeInfo_var))->get_Instance_12();
			NullCheck((ES3Reader_t2780AF8AA61DA2A817115CEF8612AC0E494D03C9 *)L_150);
			bool L_152;
			L_152 = GenericVirtFuncInvoker1< bool, ES3Type_t8FBECB7AE75168648B9524E0C2A38DAD4555421D * >::Invoke(ES3Reader_Read_TisBoolean_t07D1E3F34E4813023D64F584DFF7B34C9D922F37_mC6D1B158268FF9B97822FF9F5B37FB1723FEDA22_RuntimeMethod_var, (ES3Reader_t2780AF8AA61DA2A817115CEF8612AC0E494D03C9 *)L_150, (ES3Type_t8FBECB7AE75168648B9524E0C2A38DAD4555421D *)L_151);
			NullCheck((RenderTexture_t5FE7A5B47EF962A0E8D7BEBA05E9FC87D49A1849 *)L_149);
			RenderTexture_set_enableRandomWrite_m024F49DB3CA3B02FA0EEBB3EACB37E6228CAA183((RenderTexture_t5FE7A5B47EF962A0E8D7BEBA05E9FC87D49A1849 *)L_149, (bool)L_152, /*hidden argument*/NULL);
			// break;
			goto IL_0721;
		}

IL_059c:
		{
			// instance.isPowerOfTwo = reader.Read<System.Boolean>(ES3Type_bool.Instance);
			RenderTexture_t5FE7A5B47EF962A0E8D7BEBA05E9FC87D49A1849 * L_153 = V_0;
			ES3Reader_t2780AF8AA61DA2A817115CEF8612AC0E494D03C9 * L_154 = ___reader0;
			IL2CPP_RUNTIME_CLASS_INIT(ES3Type_bool_t8F309F7B9CC735FF1DEE68081B6E3CAB367745F4_il2cpp_TypeInfo_var);
			ES3Type_t8FBECB7AE75168648B9524E0C2A38DAD4555421D * L_155 = ((ES3Type_bool_t8F309F7B9CC735FF1DEE68081B6E3CAB367745F4_StaticFields*)il2cpp_codegen_static_fields_for(ES3Type_bool_t8F309F7B9CC735FF1DEE68081B6E3CAB367745F4_il2cpp_TypeInfo_var))->get_Instance_12();
			NullCheck((ES3Reader_t2780AF8AA61DA2A817115CEF8612AC0E494D03C9 *)L_154);
			bool L_156;
			L_156 = GenericVirtFuncInvoker1< bool, ES3Type_t8FBECB7AE75168648B9524E0C2A38DAD4555421D * >::Invoke(ES3Reader_Read_TisBoolean_t07D1E3F34E4813023D64F584DFF7B34C9D922F37_mC6D1B158268FF9B97822FF9F5B37FB1723FEDA22_RuntimeMethod_var, (ES3Reader_t2780AF8AA61DA2A817115CEF8612AC0E494D03C9 *)L_154, (ES3Type_t8FBECB7AE75168648B9524E0C2A38DAD4555421D *)L_155);
			NullCheck((RenderTexture_t5FE7A5B47EF962A0E8D7BEBA05E9FC87D49A1849 *)L_153);
			RenderTexture_set_isPowerOfTwo_mA6D34F610DF27C40422DF5815892B45C656F1317((RenderTexture_t5FE7A5B47EF962A0E8D7BEBA05E9FC87D49A1849 *)L_153, (bool)L_156, /*hidden argument*/NULL);
			// break;
			goto IL_0721;
		}

IL_05b2:
		{
			// instance.depth = reader.Read<System.Int32>(ES3Type_int.Instance);
			RenderTexture_t5FE7A5B47EF962A0E8D7BEBA05E9FC87D49A1849 * L_157 = V_0;
			ES3Reader_t2780AF8AA61DA2A817115CEF8612AC0E494D03C9 * L_158 = ___reader0;
			IL2CPP_RUNTIME_CLASS_INIT(ES3Type_int_tF64C15D40AD0CC7C15BCD1CEC3C5C6BF837BD167_il2cpp_TypeInfo_var);
			ES3Type_t8FBECB7AE75168648B9524E0C2A38DAD4555421D * L_159 = ((ES3Type_int_tF64C15D40AD0CC7C15BCD1CEC3C5C6BF837BD167_StaticFields*)il2cpp_codegen_static_fields_for(ES3Type_int_tF64C15D40AD0CC7C15BCD1CEC3C5C6BF837BD167_il2cpp_TypeInfo_var))->get_Instance_12();
			NullCheck((ES3Reader_t2780AF8AA61DA2A817115CEF8612AC0E494D03C9 *)L_158);
			int32_t L_160;
			L_160 = GenericVirtFuncInvoker1< int32_t, ES3Type_t8FBECB7AE75168648B9524E0C2A38DAD4555421D * >::Invoke(ES3Reader_Read_TisInt32_tFDE5F8CD43D10453F6A2E0C77FE48C6CC7009046_m2B74AA6627F5B1D21171D56C42F71DE5A7C1B4A6_RuntimeMethod_var, (ES3Reader_t2780AF8AA61DA2A817115CEF8612AC0E494D03C9 *)L_158, (ES3Type_t8FBECB7AE75168648B9524E0C2A38DAD4555421D *)L_159);
			NullCheck((RenderTexture_t5FE7A5B47EF962A0E8D7BEBA05E9FC87D49A1849 *)L_157);
			RenderTexture_set_depth_mA57CEFEDDB45D0429FAC9532A631839F523944A3((RenderTexture_t5FE7A5B47EF962A0E8D7BEBA05E9FC87D49A1849 *)L_157, (int32_t)L_160, /*hidden argument*/NULL);
			// break;
			goto IL_0721;
		}

IL_05c8:
		{
			// instance.descriptor = reader.Read<UnityEngine.RenderTextureDescriptor>();
			RenderTexture_t5FE7A5B47EF962A0E8D7BEBA05E9FC87D49A1849 * L_161 = V_0;
			ES3Reader_t2780AF8AA61DA2A817115CEF8612AC0E494D03C9 * L_162 = ___reader0;
			NullCheck((ES3Reader_t2780AF8AA61DA2A817115CEF8612AC0E494D03C9 *)L_162);
			RenderTextureDescriptor_t67FF189E1F35AEB5D6C43A2D7103F3A8A8CA0B47  L_163;
			L_163 = GenericVirtFuncInvoker0< RenderTextureDescriptor_t67FF189E1F35AEB5D6C43A2D7103F3A8A8CA0B47  >::Invoke(ES3Reader_Read_TisRenderTextureDescriptor_t67FF189E1F35AEB5D6C43A2D7103F3A8A8CA0B47_m427886ADAAF96C7BA9BD423544128494F96D69E7_RuntimeMethod_var, (ES3Reader_t2780AF8AA61DA2A817115CEF8612AC0E494D03C9 *)L_162);
			NullCheck((RenderTexture_t5FE7A5B47EF962A0E8D7BEBA05E9FC87D49A1849 *)L_161);
			RenderTexture_set_descriptor_m3C8E31AE4644B23719A12345771D1B85EB6E5881((RenderTexture_t5FE7A5B47EF962A0E8D7BEBA05E9FC87D49A1849 *)L_161, (RenderTextureDescriptor_t67FF189E1F35AEB5D6C43A2D7103F3A8A8CA0B47 )L_163, /*hidden argument*/NULL);
			// break;
			goto IL_0721;
		}

IL_05d9:
		{
			// UnityEngine.RenderTexture.masterTextureLimit = reader.Read<System.Int32>(ES3Type_int.Instance);
			ES3Reader_t2780AF8AA61DA2A817115CEF8612AC0E494D03C9 * L_164 = ___reader0;
			IL2CPP_RUNTIME_CLASS_INIT(ES3Type_int_tF64C15D40AD0CC7C15BCD1CEC3C5C6BF837BD167_il2cpp_TypeInfo_var);
			ES3Type_t8FBECB7AE75168648B9524E0C2A38DAD4555421D * L_165 = ((ES3Type_int_tF64C15D40AD0CC7C15BCD1CEC3C5C6BF837BD167_StaticFields*)il2cpp_codegen_static_fields_for(ES3Type_int_tF64C15D40AD0CC7C15BCD1CEC3C5C6BF837BD167_il2cpp_TypeInfo_var))->get_Instance_12();
			NullCheck((ES3Reader_t2780AF8AA61DA2A817115CEF8612AC0E494D03C9 *)L_164);
			int32_t L_166;
			L_166 = GenericVirtFuncInvoker1< int32_t, ES3Type_t8FBECB7AE75168648B9524E0C2A38DAD4555421D * >::Invoke(ES3Reader_Read_TisInt32_tFDE5F8CD43D10453F6A2E0C77FE48C6CC7009046_m2B74AA6627F5B1D21171D56C42F71DE5A7C1B4A6_RuntimeMethod_var, (ES3Reader_t2780AF8AA61DA2A817115CEF8612AC0E494D03C9 *)L_164, (ES3Type_t8FBECB7AE75168648B9524E0C2A38DAD4555421D *)L_165);
			IL2CPP_RUNTIME_CLASS_INIT(Texture_t9FE0218A1EEDF266E8C85879FE123265CACC95AE_il2cpp_TypeInfo_var);
			Texture_set_masterTextureLimit_m94A531A20A54A86AF7B88A56F72709CE556B7DFF((int32_t)L_166, /*hidden argument*/NULL);
			// break;
			goto IL_0721;
		}

IL_05ee:
		{
			// UnityEngine.RenderTexture.anisotropicFiltering = reader.Read<UnityEngine.AnisotropicFiltering>();
			ES3Reader_t2780AF8AA61DA2A817115CEF8612AC0E494D03C9 * L_167 = ___reader0;
			NullCheck((ES3Reader_t2780AF8AA61DA2A817115CEF8612AC0E494D03C9 *)L_167);
			int32_t L_168;
			L_168 = GenericVirtFuncInvoker0< int32_t >::Invoke(ES3Reader_Read_TisAnisotropicFiltering_tAC3D1448B262D5869946CD1CDD2C8DAE3A7A537B_mAF1268AAC3E461D6E0604A19FAF0325873B6EC8A_RuntimeMethod_var, (ES3Reader_t2780AF8AA61DA2A817115CEF8612AC0E494D03C9 *)L_167);
			IL2CPP_RUNTIME_CLASS_INIT(Texture_t9FE0218A1EEDF266E8C85879FE123265CACC95AE_il2cpp_TypeInfo_var);
			Texture_set_anisotropicFiltering_mE2B639BF2681A8A0516C1C343C7E265ED60EAF16((int32_t)L_168, /*hidden argument*/NULL);
			// break;
			goto IL_0721;
		}

IL_05fe:
		{
			// instance.wrapMode = reader.Read<UnityEngine.TextureWrapMode>();
			RenderTexture_t5FE7A5B47EF962A0E8D7BEBA05E9FC87D49A1849 * L_169 = V_0;
			ES3Reader_t2780AF8AA61DA2A817115CEF8612AC0E494D03C9 * L_170 = ___reader0;
			NullCheck((ES3Reader_t2780AF8AA61DA2A817115CEF8612AC0E494D03C9 *)L_170);
			int32_t L_171;
			L_171 = GenericVirtFuncInvoker0< int32_t >::Invoke(ES3Reader_Read_TisTextureWrapMode_t86DDA8206E4AA784A1218D0DE3C5F6826D7549EB_m7926E449CD0B8BD56E5BF145DD0CCFE1C567F107_RuntimeMethod_var, (ES3Reader_t2780AF8AA61DA2A817115CEF8612AC0E494D03C9 *)L_170);
			NullCheck((Texture_t9FE0218A1EEDF266E8C85879FE123265CACC95AE *)L_169);
			Texture_set_wrapMode_m1233D2DF48DC20996F8EE26E866D4BDD2AC8050D((Texture_t9FE0218A1EEDF266E8C85879FE123265CACC95AE *)L_169, (int32_t)L_171, /*hidden argument*/NULL);
			// break;
			goto IL_0721;
		}

IL_060f:
		{
			// instance.wrapModeU = reader.Read<UnityEngine.TextureWrapMode>();
			RenderTexture_t5FE7A5B47EF962A0E8D7BEBA05E9FC87D49A1849 * L_172 = V_0;
			ES3Reader_t2780AF8AA61DA2A817115CEF8612AC0E494D03C9 * L_173 = ___reader0;
			NullCheck((ES3Reader_t2780AF8AA61DA2A817115CEF8612AC0E494D03C9 *)L_173);
			int32_t L_174;
			L_174 = GenericVirtFuncInvoker0< int32_t >::Invoke(ES3Reader_Read_TisTextureWrapMode_t86DDA8206E4AA784A1218D0DE3C5F6826D7549EB_m7926E449CD0B8BD56E5BF145DD0CCFE1C567F107_RuntimeMethod_var, (ES3Reader_t2780AF8AA61DA2A817115CEF8612AC0E494D03C9 *)L_173);
			NullCheck((Texture_t9FE0218A1EEDF266E8C85879FE123265CACC95AE *)L_172);
			Texture_set_wrapModeU_mBD3CBD6880E9E767B91ED9E1B14C725A52D7A66E((Texture_t9FE0218A1EEDF266E8C85879FE123265CACC95AE *)L_172, (int32_t)L_174, /*hidden argument*/NULL);
			// break;
			goto IL_0721;
		}

IL_0620:
		{
			// instance.wrapModeV = reader.Read<UnityEngine.TextureWrapMode>();
			RenderTexture_t5FE7A5B47EF962A0E8D7BEBA05E9FC87D49A1849 * L_175 = V_0;
			ES3Reader_t2780AF8AA61DA2A817115CEF8612AC0E494D03C9 * L_176 = ___reader0;
			NullCheck((ES3Reader_t2780AF8AA61DA2A817115CEF8612AC0E494D03C9 *)L_176);
			int32_t L_177;
			L_177 = GenericVirtFuncInvoker0< int32_t >::Invoke(ES3Reader_Read_TisTextureWrapMode_t86DDA8206E4AA784A1218D0DE3C5F6826D7549EB_m7926E449CD0B8BD56E5BF145DD0CCFE1C567F107_RuntimeMethod_var, (ES3Reader_t2780AF8AA61DA2A817115CEF8612AC0E494D03C9 *)L_176);
			NullCheck((Texture_t9FE0218A1EEDF266E8C85879FE123265CACC95AE *)L_175);
			Texture_set_wrapModeV_mCD51C11B4C90D7508113C744EDC09D04059403E5((Texture_t9FE0218A1EEDF266E8C85879FE123265CACC95AE *)L_175, (int32_t)L_177, /*hidden argument*/NULL);
			// break;
			goto IL_0721;
		}

IL_0631:
		{
			// instance.wrapModeW = reader.Read<UnityEngine.TextureWrapMode>();
			RenderTexture_t5FE7A5B47EF962A0E8D7BEBA05E9FC87D49A1849 * L_178 = V_0;
			ES3Reader_t2780AF8AA61DA2A817115CEF8612AC0E494D03C9 * L_179 = ___reader0;
			NullCheck((ES3Reader_t2780AF8AA61DA2A817115CEF8612AC0E494D03C9 *)L_179);
			int32_t L_180;
			L_180 = GenericVirtFuncInvoker0< int32_t >::Invoke(ES3Reader_Read_TisTextureWrapMode_t86DDA8206E4AA784A1218D0DE3C5F6826D7549EB_m7926E449CD0B8BD56E5BF145DD0CCFE1C567F107_RuntimeMethod_var, (ES3Reader_t2780AF8AA61DA2A817115CEF8612AC0E494D03C9 *)L_179);
			NullCheck((Texture_t9FE0218A1EEDF266E8C85879FE123265CACC95AE *)L_178);
			Texture_set_wrapModeW_m72C3239EA12A51D5031BD2A66C5E7B178EE9F65B((Texture_t9FE0218A1EEDF266E8C85879FE123265CACC95AE *)L_178, (int32_t)L_180, /*hidden argument*/NULL);
			// break;
			goto IL_0721;
		}

IL_0642:
		{
			// instance.filterMode = reader.Read<UnityEngine.FilterMode>();
			RenderTexture_t5FE7A5B47EF962A0E8D7BEBA05E9FC87D49A1849 * L_181 = V_0;
			ES3Reader_t2780AF8AA61DA2A817115CEF8612AC0E494D03C9 * L_182 = ___reader0;
			NullCheck((ES3Reader_t2780AF8AA61DA2A817115CEF8612AC0E494D03C9 *)L_182);
			int32_t L_183;
			L_183 = GenericVirtFuncInvoker0< int32_t >::Invoke(ES3Reader_Read_TisFilterMode_tE90A08FD96A142C761463D65E524BCDBFEEE3D19_m9819C2A442797B4060B0D9A80CFA96CFD6102839_RuntimeMethod_var, (ES3Reader_t2780AF8AA61DA2A817115CEF8612AC0E494D03C9 *)L_182);
			NullCheck((Texture_t9FE0218A1EEDF266E8C85879FE123265CACC95AE *)L_181);
			Texture_set_filterMode_m045141DB0FEFE496885D45F5F23B15BC0E77C8D0((Texture_t9FE0218A1EEDF266E8C85879FE123265CACC95AE *)L_181, (int32_t)L_183, /*hidden argument*/NULL);
			// break;
			goto IL_0721;
		}

IL_0653:
		{
			// instance.anisoLevel = reader.Read<System.Int32>(ES3Type_int.Instance);
			RenderTexture_t5FE7A5B47EF962A0E8D7BEBA05E9FC87D49A1849 * L_184 = V_0;
			ES3Reader_t2780AF8AA61DA2A817115CEF8612AC0E494D03C9 * L_185 = ___reader0;
			IL2CPP_RUNTIME_CLASS_INIT(ES3Type_int_tF64C15D40AD0CC7C15BCD1CEC3C5C6BF837BD167_il2cpp_TypeInfo_var);
			ES3Type_t8FBECB7AE75168648B9524E0C2A38DAD4555421D * L_186 = ((ES3Type_int_tF64C15D40AD0CC7C15BCD1CEC3C5C6BF837BD167_StaticFields*)il2cpp_codegen_static_fields_for(ES3Type_int_tF64C15D40AD0CC7C15BCD1CEC3C5C6BF837BD167_il2cpp_TypeInfo_var))->get_Instance_12();
			NullCheck((ES3Reader_t2780AF8AA61DA2A817115CEF8612AC0E494D03C9 *)L_185);
			int32_t L_187;
			L_187 = GenericVirtFuncInvoker1< int32_t, ES3Type_t8FBECB7AE75168648B9524E0C2A38DAD4555421D * >::Invoke(ES3Reader_Read_TisInt32_tFDE5F8CD43D10453F6A2E0C77FE48C6CC7009046_m2B74AA6627F5B1D21171D56C42F71DE5A7C1B4A6_RuntimeMethod_var, (ES3Reader_t2780AF8AA61DA2A817115CEF8612AC0E494D03C9 *)L_185, (ES3Type_t8FBECB7AE75168648B9524E0C2A38DAD4555421D *)L_186);
			NullCheck((Texture_t9FE0218A1EEDF266E8C85879FE123265CACC95AE *)L_184);
			Texture_set_anisoLevel_mE51360F6CD0562FD6355F8C0509B70A454CB33BE((Texture_t9FE0218A1EEDF266E8C85879FE123265CACC95AE *)L_184, (int32_t)L_187, /*hidden argument*/NULL);
			// break;
			goto IL_0721;
		}

IL_0669:
		{
			// instance.mipMapBias = reader.Read<System.Single>(ES3Type_float.Instance);
			RenderTexture_t5FE7A5B47EF962A0E8D7BEBA05E9FC87D49A1849 * L_188 = V_0;
			ES3Reader_t2780AF8AA61DA2A817115CEF8612AC0E494D03C9 * L_189 = ___reader0;
			IL2CPP_RUNTIME_CLASS_INIT(ES3Type_float_tF86B773C86731BD9AD79448B860BBB178FE77644_il2cpp_TypeInfo_var);
			ES3Type_t8FBECB7AE75168648B9524E0C2A38DAD4555421D * L_190 = ((ES3Type_float_tF86B773C86731BD9AD79448B860BBB178FE77644_StaticFields*)il2cpp_codegen_static_fields_for(ES3Type_float_tF86B773C86731BD9AD79448B860BBB178FE77644_il2cpp_TypeInfo_var))->get_Instance_12();
			NullCheck((ES3Reader_t2780AF8AA61DA2A817115CEF8612AC0E494D03C9 *)L_189);
			float L_191;
			L_191 = GenericVirtFuncInvoker1< float, ES3Type_t8FBECB7AE75168648B9524E0C2A38DAD4555421D * >::Invoke(ES3Reader_Read_TisSingle_tE07797BA3C98D4CA9B5A19413C19A76688AB899E_m4A0416374498BDA042B8EB21E49B72326D6CE5F4_RuntimeMethod_var, (ES3Reader_t2780AF8AA61DA2A817115CEF8612AC0E494D03C9 *)L_189, (ES3Type_t8FBECB7AE75168648B9524E0C2A38DAD4555421D *)L_190);
			NullCheck((Texture_t9FE0218A1EEDF266E8C85879FE123265CACC95AE *)L_188);
			Texture_set_mipMapBias_m5057ADA9DBA8E8E30EC15EA5BABFA0734CE2821C((Texture_t9FE0218A1EEDF266E8C85879FE123265CACC95AE *)L_188, (float)L_191, /*hidden argument*/NULL);
			// break;
			goto IL_0721;
		}

IL_067f:
		{
			// instance.name = reader.Read<System.String>(ES3Type_string.Instance);
			RenderTexture_t5FE7A5B47EF962A0E8D7BEBA05E9FC87D49A1849 * L_192 = V_0;
			ES3Reader_t2780AF8AA61DA2A817115CEF8612AC0E494D03C9 * L_193 = ___reader0;
			IL2CPP_RUNTIME_CLASS_INIT(ES3Type_string_tC47BFBE3CC816F3C70B51558C68F0C6470C5EFE5_il2cpp_TypeInfo_var);
			ES3Type_t8FBECB7AE75168648B9524E0C2A38DAD4555421D * L_194 = ((ES3Type_string_tC47BFBE3CC816F3C70B51558C68F0C6470C5EFE5_StaticFields*)il2cpp_codegen_static_fields_for(ES3Type_string_tC47BFBE3CC816F3C70B51558C68F0C6470C5EFE5_il2cpp_TypeInfo_var))->get_Instance_12();
			NullCheck((ES3Reader_t2780AF8AA61DA2A817115CEF8612AC0E494D03C9 *)L_193);
			String_t* L_195;
			L_195 = GenericVirtFuncInvoker1< String_t*, ES3Type_t8FBECB7AE75168648B9524E0C2A38DAD4555421D * >::Invoke(ES3Reader_Read_TisString_t_m883861F3B58239392073ABF39876826EEB87DF9C_RuntimeMethod_var, (ES3Reader_t2780AF8AA61DA2A817115CEF8612AC0E494D03C9 *)L_193, (ES3Type_t8FBECB7AE75168648B9524E0C2A38DAD4555421D *)L_194);
			NullCheck((Object_tF2F3778131EFF286AF62B7B013A170F95A91571A *)L_192);
			Object_set_name_m87C4006618ADB325ABE5439DF159E10DD8DD0781((Object_tF2F3778131EFF286AF62B7B013A170F95A91571A *)L_192, (String_t*)L_195, /*hidden argument*/NULL);
			// break;
			goto IL_0721;
		}

IL_0695:
		{
			// instance.vrUsage = reader.Read<UnityEngine.VRTextureUsage>();
			RenderTexture_t5FE7A5B47EF962A0E8D7BEBA05E9FC87D49A1849 * L_196 = V_0;
			ES3Reader_t2780AF8AA61DA2A817115CEF8612AC0E494D03C9 * L_197 = ___reader0;
			NullCheck((ES3Reader_t2780AF8AA61DA2A817115CEF8612AC0E494D03C9 *)L_197);
			int32_t L_198;
			L_198 = GenericVirtFuncInvoker0< int32_t >::Invoke(ES3Reader_Read_TisVRTextureUsage_t3C09DF3DD90B5620BC0AB6F8078DFEF4E607F645_m7DE3966E4815BB13132866CB005EEE5B90FF51C2_RuntimeMethod_var, (ES3Reader_t2780AF8AA61DA2A817115CEF8612AC0E494D03C9 *)L_197);
			NullCheck((RenderTexture_t5FE7A5B47EF962A0E8D7BEBA05E9FC87D49A1849 *)L_196);
			RenderTexture_set_vrUsage_m9AF7F60442E3B933FDF274D801EA074D1A5ECB71((RenderTexture_t5FE7A5B47EF962A0E8D7BEBA05E9FC87D49A1849 *)L_196, (int32_t)L_198, /*hidden argument*/NULL);
			// break;
			goto IL_0721;
		}

IL_06a3:
		{
			// instance.graphicsFormat = reader.Read<UnityEngine.Experimental.Rendering.GraphicsFormat>();
			RenderTexture_t5FE7A5B47EF962A0E8D7BEBA05E9FC87D49A1849 * L_199 = V_0;
			ES3Reader_t2780AF8AA61DA2A817115CEF8612AC0E494D03C9 * L_200 = ___reader0;
			NullCheck((ES3Reader_t2780AF8AA61DA2A817115CEF8612AC0E494D03C9 *)L_200);
			int32_t L_201;
			L_201 = GenericVirtFuncInvoker0< int32_t >::Invoke(ES3Reader_Read_TisGraphicsFormat_t07A3C024BC77B843C53A369D6FC02ABD27D2AB1D_mCBD36004B10F649C93215AB4717F6F0D7118BF7D_RuntimeMethod_var, (ES3Reader_t2780AF8AA61DA2A817115CEF8612AC0E494D03C9 *)L_200);
			NullCheck((RenderTexture_t5FE7A5B47EF962A0E8D7BEBA05E9FC87D49A1849 *)L_199);
			RenderTexture_set_graphicsFormat_mA378AAD8BD876EE96637FF0A80A2AFEA4D852FAB((RenderTexture_t5FE7A5B47EF962A0E8D7BEBA05E9FC87D49A1849 *)L_199, (int32_t)L_201, /*hidden argument*/NULL);
			// break;
			goto IL_0721;
		}

IL_06b1:
		{
			// instance.stencilFormat = reader.Read<UnityEngine.Experimental.Rendering.GraphicsFormat>();
			RenderTexture_t5FE7A5B47EF962A0E8D7BEBA05E9FC87D49A1849 * L_202 = V_0;
			ES3Reader_t2780AF8AA61DA2A817115CEF8612AC0E494D03C9 * L_203 = ___reader0;
			NullCheck((ES3Reader_t2780AF8AA61DA2A817115CEF8612AC0E494D03C9 *)L_203);
			int32_t L_204;
			L_204 = GenericVirtFuncInvoker0< int32_t >::Invoke(ES3Reader_Read_TisGraphicsFormat_t07A3C024BC77B843C53A369D6FC02ABD27D2AB1D_mCBD36004B10F649C93215AB4717F6F0D7118BF7D_RuntimeMethod_var, (ES3Reader_t2780AF8AA61DA2A817115CEF8612AC0E494D03C9 *)L_203);
			NullCheck((RenderTexture_t5FE7A5B47EF962A0E8D7BEBA05E9FC87D49A1849 *)L_202);
			RenderTexture_set_stencilFormat_m7C6E21FCDB7E786D403CFC9775105B050EFF19C7((RenderTexture_t5FE7A5B47EF962A0E8D7BEBA05E9FC87D49A1849 *)L_202, (int32_t)L_204, /*hidden argument*/NULL);
			// break;
			goto IL_0721;
		}

IL_06bf:
		{
			// instance.bindTextureMS = reader.Read<System.Boolean>(ES3Type_bool.Instance);
			RenderTexture_t5FE7A5B47EF962A0E8D7BEBA05E9FC87D49A1849 * L_205 = V_0;
			ES3Reader_t2780AF8AA61DA2A817115CEF8612AC0E494D03C9 * L_206 = ___reader0;
			IL2CPP_RUNTIME_CLASS_INIT(ES3Type_bool_t8F309F7B9CC735FF1DEE68081B6E3CAB367745F4_il2cpp_TypeInfo_var);
			ES3Type_t8FBECB7AE75168648B9524E0C2A38DAD4555421D * L_207 = ((ES3Type_bool_t8F309F7B9CC735FF1DEE68081B6E3CAB367745F4_StaticFields*)il2cpp_codegen_static_fields_for(ES3Type_bool_t8F309F7B9CC735FF1DEE68081B6E3CAB367745F4_il2cpp_TypeInfo_var))->get_Instance_12();
			NullCheck((ES3Reader_t2780AF8AA61DA2A817115CEF8612AC0E494D03C9 *)L_206);
			bool L_208;
			L_208 = GenericVirtFuncInvoker1< bool, ES3Type_t8FBECB7AE75168648B9524E0C2A38DAD4555421D * >::Invoke(ES3Reader_Read_TisBoolean_t07D1E3F34E4813023D64F584DFF7B34C9D922F37_mC6D1B158268FF9B97822FF9F5B37FB1723FEDA22_RuntimeMethod_var, (ES3Reader_t2780AF8AA61DA2A817115CEF8612AC0E494D03C9 *)L_206, (ES3Type_t8FBECB7AE75168648B9524E0C2A38DAD4555421D *)L_207);
			NullCheck((RenderTexture_t5FE7A5B47EF962A0E8D7BEBA05E9FC87D49A1849 *)L_205);
			RenderTexture_set_bindTextureMS_m6C26F6AB2DE8FE81BFCA60C936AA08EA7F1A7177((RenderTexture_t5FE7A5B47EF962A0E8D7BEBA05E9FC87D49A1849 *)L_205, (bool)L_208, /*hidden argument*/NULL);
			// break;
			goto IL_0721;
		}

IL_06d2:
		{
			// instance.useDynamicScale = reader.Read<System.Boolean>(ES3Type_bool.Instance);
			RenderTexture_t5FE7A5B47EF962A0E8D7BEBA05E9FC87D49A1849 * L_209 = V_0;
			ES3Reader_t2780AF8AA61DA2A817115CEF8612AC0E494D03C9 * L_210 = ___reader0;
			IL2CPP_RUNTIME_CLASS_INIT(ES3Type_bool_t8F309F7B9CC735FF1DEE68081B6E3CAB367745F4_il2cpp_TypeInfo_var);
			ES3Type_t8FBECB7AE75168648B9524E0C2A38DAD4555421D * L_211 = ((ES3Type_bool_t8F309F7B9CC735FF1DEE68081B6E3CAB367745F4_StaticFields*)il2cpp_codegen_static_fields_for(ES3Type_bool_t8F309F7B9CC735FF1DEE68081B6E3CAB367745F4_il2cpp_TypeInfo_var))->get_Instance_12();
			NullCheck((ES3Reader_t2780AF8AA61DA2A817115CEF8612AC0E494D03C9 *)L_210);
			bool L_212;
			L_212 = GenericVirtFuncInvoker1< bool, ES3Type_t8FBECB7AE75168648B9524E0C2A38DAD4555421D * >::Invoke(ES3Reader_Read_TisBoolean_t07D1E3F34E4813023D64F584DFF7B34C9D922F37_mC6D1B158268FF9B97822FF9F5B37FB1723FEDA22_RuntimeMethod_var, (ES3Reader_t2780AF8AA61DA2A817115CEF8612AC0E494D03C9 *)L_210, (ES3Type_t8FBECB7AE75168648B9524E0C2A38DAD4555421D *)L_211);
			NullCheck((RenderTexture_t5FE7A5B47EF962A0E8D7BEBA05E9FC87D49A1849 *)L_209);
			RenderTexture_set_useDynamicScale_m8F96571C7EDBEFAB9278E04A3F3EB67067A5AE29((RenderTexture_t5FE7A5B47EF962A0E8D7BEBA05E9FC87D49A1849 *)L_209, (bool)L_212, /*hidden argument*/NULL);
			// break;
			goto IL_0721;
		}

IL_06e5:
		{
			// UnityEngine.RenderTexture.streamingTextureForceLoadAll = reader.Read<System.Boolean>(ES3Type_bool.Instance);
			ES3Reader_t2780AF8AA61DA2A817115CEF8612AC0E494D03C9 * L_213 = ___reader0;
			IL2CPP_RUNTIME_CLASS_INIT(ES3Type_bool_t8F309F7B9CC735FF1DEE68081B6E3CAB367745F4_il2cpp_TypeInfo_var);
			ES3Type_t8FBECB7AE75168648B9524E0C2A38DAD4555421D * L_214 = ((ES3Type_bool_t8F309F7B9CC735FF1DEE68081B6E3CAB367745F4_StaticFields*)il2cpp_codegen_static_fields_for(ES3Type_bool_t8F309F7B9CC735FF1DEE68081B6E3CAB367745F4_il2cpp_TypeInfo_var))->get_Instance_12();
			NullCheck((ES3Reader_t2780AF8AA61DA2A817115CEF8612AC0E494D03C9 *)L_213);
			bool L_215;
			L_215 = GenericVirtFuncInvoker1< bool, ES3Type_t8FBECB7AE75168648B9524E0C2A38DAD4555421D * >::Invoke(ES3Reader_Read_TisBoolean_t07D1E3F34E4813023D64F584DFF7B34C9D922F37_mC6D1B158268FF9B97822FF9F5B37FB1723FEDA22_RuntimeMethod_var, (ES3Reader_t2780AF8AA61DA2A817115CEF8612AC0E494D03C9 *)L_213, (ES3Type_t8FBECB7AE75168648B9524E0C2A38DAD4555421D *)L_214);
			IL2CPP_RUNTIME_CLASS_INIT(Texture_t9FE0218A1EEDF266E8C85879FE123265CACC95AE_il2cpp_TypeInfo_var);
			Texture_set_streamingTextureForceLoadAll_m325117C0830BB9B4316CF41CEE045759FC52B7A3((bool)L_215, /*hidden argument*/NULL);
			// break;
			goto IL_0721;
		}

IL_06f7:
		{
			// UnityEngine.RenderTexture.streamingTextureDiscardUnusedMips = reader.Read<System.Boolean>(ES3Type_bool.Instance);
			ES3Reader_t2780AF8AA61DA2A817115CEF8612AC0E494D03C9 * L_216 = ___reader0;
			IL2CPP_RUNTIME_CLASS_INIT(ES3Type_bool_t8F309F7B9CC735FF1DEE68081B6E3CAB367745F4_il2cpp_TypeInfo_var);
			ES3Type_t8FBECB7AE75168648B9524E0C2A38DAD4555421D * L_217 = ((ES3Type_bool_t8F309F7B9CC735FF1DEE68081B6E3CAB367745F4_StaticFields*)il2cpp_codegen_static_fields_for(ES3Type_bool_t8F309F7B9CC735FF1DEE68081B6E3CAB367745F4_il2cpp_TypeInfo_var))->get_Instance_12();
			NullCheck((ES3Reader_t2780AF8AA61DA2A817115CEF8612AC0E494D03C9 *)L_216);
			bool L_218;
			L_218 = GenericVirtFuncInvoker1< bool, ES3Type_t8FBECB7AE75168648B9524E0C2A38DAD4555421D * >::Invoke(ES3Reader_Read_TisBoolean_t07D1E3F34E4813023D64F584DFF7B34C9D922F37_mC6D1B158268FF9B97822FF9F5B37FB1723FEDA22_RuntimeMethod_var, (ES3Reader_t2780AF8AA61DA2A817115CEF8612AC0E494D03C9 *)L_216, (ES3Type_t8FBECB7AE75168648B9524E0C2A38DAD4555421D *)L_217);
			IL2CPP_RUNTIME_CLASS_INIT(Texture_t9FE0218A1EEDF266E8C85879FE123265CACC95AE_il2cpp_TypeInfo_var);
			Texture_set_streamingTextureDiscardUnusedMips_mE184CE016A8E0319B437D34E0DB61962CE17F5DC((bool)L_218, /*hidden argument*/NULL);
			// break;
			goto IL_0721;
		}

IL_0709:
		{
			// UnityEngine.RenderTexture.allowThreadedTextureCreation = reader.Read<System.Boolean>(ES3Type_bool.Instance);
			ES3Reader_t2780AF8AA61DA2A817115CEF8612AC0E494D03C9 * L_219 = ___reader0;
			IL2CPP_RUNTIME_CLASS_INIT(ES3Type_bool_t8F309F7B9CC735FF1DEE68081B6E3CAB367745F4_il2cpp_TypeInfo_var);
			ES3Type_t8FBECB7AE75168648B9524E0C2A38DAD4555421D * L_220 = ((ES3Type_bool_t8F309F7B9CC735FF1DEE68081B6E3CAB367745F4_StaticFields*)il2cpp_codegen_static_fields_for(ES3Type_bool_t8F309F7B9CC735FF1DEE68081B6E3CAB367745F4_il2cpp_TypeInfo_var))->get_Instance_12();
			NullCheck((ES3Reader_t2780AF8AA61DA2A817115CEF8612AC0E494D03C9 *)L_219);
			bool L_221;
			L_221 = GenericVirtFuncInvoker1< bool, ES3Type_t8FBECB7AE75168648B9524E0C2A38DAD4555421D * >::Invoke(ES3Reader_Read_TisBoolean_t07D1E3F34E4813023D64F584DFF7B34C9D922F37_mC6D1B158268FF9B97822FF9F5B37FB1723FEDA22_RuntimeMethod_var, (ES3Reader_t2780AF8AA61DA2A817115CEF8612AC0E494D03C9 *)L_219, (ES3Type_t8FBECB7AE75168648B9524E0C2A38DAD4555421D *)L_220);
			IL2CPP_RUNTIME_CLASS_INIT(Texture_t9FE0218A1EEDF266E8C85879FE123265CACC95AE_il2cpp_TypeInfo_var);
			Texture_set_allowThreadedTextureCreation_m84D29394912B9CE876023963426256CBEB15A52E((bool)L_221, /*hidden argument*/NULL);
			// break;
			goto IL_0721;
		}

IL_071b:
		{
			// reader.Skip();
			ES3Reader_t2780AF8AA61DA2A817115CEF8612AC0E494D03C9 * L_222 = ___reader0;
			NullCheck((ES3Reader_t2780AF8AA61DA2A817115CEF8612AC0E494D03C9 *)L_222);
			VirtActionInvoker0::Invoke(41 /* System.Void ES3Reader::Skip() */, (ES3Reader_t2780AF8AA61DA2A817115CEF8612AC0E494D03C9 *)L_222);
		}

IL_0721:
		{
			// foreach (string propertyName in reader.Properties)
			RuntimeObject* L_223 = V_1;
			NullCheck((RuntimeObject*)L_223);
			bool L_224;
			L_224 = InterfaceFuncInvoker0< bool >::Invoke(0 /* System.Boolean System.Collections.IEnumerator::MoveNext() */, IEnumerator_t5956F3AFB7ECF1117E3BC5890E7FC7B7F7A04105_il2cpp_TypeInfo_var, (RuntimeObject*)L_223);
			if (L_224)
			{
				goto IL_0018;
			}
		}

IL_072c:
		{
			IL2CPP_LEAVE(0x742, FINALLY_072e);
		}
	} // end try (depth: 1)
	catch(Il2CppExceptionWrapper& e)
	{
		__last_unhandled_exception = (Exception_t *)e.ex;
		goto FINALLY_072e;
	}

FINALLY_072e:
	{ // begin finally (depth: 1)
		{
			RuntimeObject* L_225 = V_1;
			V_4 = (RuntimeObject*)((RuntimeObject*)IsInst((RuntimeObject*)L_225, IDisposable_t099785737FC6A1E3699919A94109383715A8D807_il2cpp_TypeInfo_var));
			RuntimeObject* L_226 = V_4;
			if (!L_226)
			{
				goto IL_0741;
			}
		}

IL_073a:
		{
			RuntimeObject* L_227 = V_4;
			NullCheck((RuntimeObject*)L_227);
			InterfaceActionInvoker0::Invoke(0 /* System.Void System.IDisposable::Dispose() */, IDisposable_t099785737FC6A1E3699919A94109383715A8D807_il2cpp_TypeInfo_var, (RuntimeObject*)L_227);
		}

IL_0741:
		{
			IL2CPP_END_FINALLY(1838)
		}
	} // end finally (depth: 1)
	IL2CPP_CLEANUP(1838)
	{
		IL2CPP_RETHROW_IF_UNHANDLED(Exception_t *)
		IL2CPP_JUMP_TBL(0x742, IL_0742)
	}

IL_0742:
	{
		// }
		return;
	}
}
// System.Void ES3Types.ES3Type_RenderTexture::ReadObject<UnityEngine.ParticleSystem/SubEmittersModule>(ES3Reader,System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ES3Type_RenderTexture_ReadObject_TisSubEmittersModule_t0336A6F2B5D3339D93468AED015E2356FBE9E61C_m2B66EECB267D0CACF843F269892511A65CD0F73D_gshared (ES3Type_RenderTexture_t7B14573C56809AFDC0A1C481D6B61E2146DEF194 * __this, ES3Reader_t2780AF8AA61DA2A817115CEF8612AC0E494D03C9 * ___reader0, RuntimeObject * ___obj1, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ES3Reader_Read_TisAnisotropicFiltering_tAC3D1448B262D5869946CD1CDD2C8DAE3A7A537B_mAF1268AAC3E461D6E0604A19FAF0325873B6EC8A_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ES3Reader_Read_TisBoolean_t07D1E3F34E4813023D64F584DFF7B34C9D922F37_mC6D1B158268FF9B97822FF9F5B37FB1723FEDA22_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ES3Reader_Read_TisFilterMode_tE90A08FD96A142C761463D65E524BCDBFEEE3D19_m9819C2A442797B4060B0D9A80CFA96CFD6102839_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ES3Reader_Read_TisGraphicsFormat_t07A3C024BC77B843C53A369D6FC02ABD27D2AB1D_mCBD36004B10F649C93215AB4717F6F0D7118BF7D_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ES3Reader_Read_TisInt32_tFDE5F8CD43D10453F6A2E0C77FE48C6CC7009046_m2B74AA6627F5B1D21171D56C42F71DE5A7C1B4A6_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ES3Reader_Read_TisRenderTextureDescriptor_t67FF189E1F35AEB5D6C43A2D7103F3A8A8CA0B47_m427886ADAAF96C7BA9BD423544128494F96D69E7_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ES3Reader_Read_TisRenderTextureFormat_t8371287102ED67772EF78229CF4AB9D38C2CD626_mE6358E03407F5C15B58B292C79D4770DE3FAC95A_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ES3Reader_Read_TisRenderTextureMemoryless_t37547D68C2186D2650440F719302CDA4A3BB7F67_m3A980BA15AADBBB8393C3BC88CE17EEDDC89B027_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ES3Reader_Read_TisSingle_tE07797BA3C98D4CA9B5A19413C19A76688AB899E_m4A0416374498BDA042B8EB21E49B72326D6CE5F4_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ES3Reader_Read_TisString_t_m883861F3B58239392073ABF39876826EEB87DF9C_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ES3Reader_Read_TisTextureDimension_tADCCB7C1D30E4D1182651BA9094B4DE61B63EACC_m19EAA3B93D10636C17A62A3D8437349223CFD988_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ES3Reader_Read_TisTextureWrapMode_t86DDA8206E4AA784A1218D0DE3C5F6826D7549EB_m7926E449CD0B8BD56E5BF145DD0CCFE1C567F107_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ES3Reader_Read_TisVRTextureUsage_t3C09DF3DD90B5620BC0AB6F8078DFEF4E607F645_m7DE3966E4815BB13132866CB005EEE5B90FF51C2_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ES3Type_bool_t8F309F7B9CC735FF1DEE68081B6E3CAB367745F4_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ES3Type_float_tF86B773C86731BD9AD79448B860BBB178FE77644_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ES3Type_int_tF64C15D40AD0CC7C15BCD1CEC3C5C6BF837BD167_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ES3Type_string_tC47BFBE3CC816F3C70B51558C68F0C6470C5EFE5_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IDisposable_t099785737FC6A1E3699919A94109383715A8D807_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IEnumerator_t5956F3AFB7ECF1117E3BC5890E7FC7B7F7A04105_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&RenderTexture_t5FE7A5B47EF962A0E8D7BEBA05E9FC87D49A1849_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&String_t_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Texture_t9FE0218A1EEDF266E8C85879FE123265CACC95AE_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral201D9D00BB60DC2318D21CF9902290EFE255D5DC);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral2ADFC3FFF7C52D554F0435A348A5345C9FCD7FF8);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral2E201D1972661439FD3C8523C55723E7E9BCC7DA);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral2EE7B6B0E37E14930BBA497867139BFD0617CE04);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral3A04F86957625CB28FA670EECF997E6BAD45BBE7);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral3BC15E3C2F40466B2DC85C4776499817B8306CBB);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral3F1522C8DB7943F2AE3AA1563D3AC25D9C8B93D1);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral53D3413057D7E52F44470A335C590748745352B1);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral647E0FB2B5E859CC4BD7C73623B82C8EFABA2563);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral65B008F04EC40A696263EF679CF274BD10999A5D);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral71C5F9C3E2F3C81C5BBC7FD313F6938654E61138);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral75C9716749EA210206E3467390B7A11F3F33DDFA);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral7606720A7AEF5939309A8E4FCB8274252FA3D7BF);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral7A4A6E2A7090298F814A9D44C89F8634249BEF07);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral7FF61C3A55BCA1287974D8740F945250B3F0F084);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral83AC9669A9053DD15B9F2E82D2CE2369EFE131BA);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral95F57476C0AA778364404E7CCCD7499BF1BF3757);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral9AB5ADF8A8A53110245466F7C226F7935F5FE95F);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralB49A1DF483856544CEC6018E8C944DB6E16A8D57);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralBA9362732D25B1644B7D8DEC5DF6F036A4A66DE5);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralC959D767B7F0BD38D9DA8A64A4750C3A0972E2A0);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralCD44AC57FFE6CAC7824F4CAA223F1BB8B4CB0D73);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralCE18B047107AA23D1AA9B2ED32D316148E02655F);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralEA8FBF382D8AC9EDB8FFC14A350641B987F5C631);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralEBF5FE0CBF3EEA67902EEA700B7216E3DB0D8E84);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralECAEEB225F8689DE45DEB4FA21CE34E1960B1B50);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralF23E83744C9D6FC70D71B723AAED8006D6780BCB);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralF2AF7DD0BFF41B7B35037F018DAABE7DCF357A7B);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralF38CFAE6A91D072D4453C29FF44D81D459A582F1);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralF3FA58C10BBB9830102605E24AF89DC619908DFA);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralF9EE582B77C320A1F6A3DF72205857C4248BAC79);
		s_Il2CppMethodInitialized = true;
	}
	RenderTexture_t5FE7A5B47EF962A0E8D7BEBA05E9FC87D49A1849 * V_0 = NULL;
	RuntimeObject* V_1 = NULL;
	String_t* V_2 = NULL;
	uint32_t V_3 = 0;
	RuntimeObject* V_4 = NULL;
	Exception_t * __last_unhandled_exception = 0;
	il2cpp::utils::ExceptionSupportStack<int32_t, 1> __leave_targets;
	{
		// var instance = (UnityEngine.RenderTexture)obj;
		RuntimeObject * L_0 = ___obj1;
		V_0 = (RenderTexture_t5FE7A5B47EF962A0E8D7BEBA05E9FC87D49A1849 *)((RenderTexture_t5FE7A5B47EF962A0E8D7BEBA05E9FC87D49A1849 *)Castclass((RuntimeObject*)L_0, RenderTexture_t5FE7A5B47EF962A0E8D7BEBA05E9FC87D49A1849_il2cpp_TypeInfo_var));
		// foreach (string propertyName in reader.Properties)
		ES3Reader_t2780AF8AA61DA2A817115CEF8612AC0E494D03C9 * L_1 = ___reader0;
		NullCheck((ES3Reader_t2780AF8AA61DA2A817115CEF8612AC0E494D03C9 *)L_1);
		ES3ReaderPropertyEnumerator_tFC854F4BE72BFA234682EB1909D92457534A979D * L_2;
		L_2 = VirtFuncInvoker0< ES3ReaderPropertyEnumerator_tFC854F4BE72BFA234682EB1909D92457534A979D * >::Invoke(39 /* ES3Reader/ES3ReaderPropertyEnumerator ES3Reader::get_Properties() */, (ES3Reader_t2780AF8AA61DA2A817115CEF8612AC0E494D03C9 *)L_1);
		NullCheck((ES3ReaderPropertyEnumerator_tFC854F4BE72BFA234682EB1909D92457534A979D *)L_2);
		RuntimeObject* L_3;
		L_3 = ES3ReaderPropertyEnumerator_GetEnumerator_m6C61168655E3736E7847E5CB1CD9BC6B48442FD4((ES3ReaderPropertyEnumerator_tFC854F4BE72BFA234682EB1909D92457534A979D *)L_2, /*hidden argument*/NULL);
		V_1 = (RuntimeObject*)L_3;
	}

IL_0013:
	try
	{ // begin try (depth: 1)
		{
			goto IL_0721;
		}

IL_0018:
		{
			// foreach (string propertyName in reader.Properties)
			RuntimeObject* L_4 = V_1;
			NullCheck((RuntimeObject*)L_4);
			RuntimeObject * L_5;
			L_5 = InterfaceFuncInvoker0< RuntimeObject * >::Invoke(1 /* System.Object System.Collections.IEnumerator::get_Current() */, IEnumerator_t5956F3AFB7ECF1117E3BC5890E7FC7B7F7A04105_il2cpp_TypeInfo_var, (RuntimeObject*)L_4);
			V_2 = (String_t*)((String_t*)Castclass((RuntimeObject*)L_5, String_t_il2cpp_TypeInfo_var));
			String_t* L_6 = V_2;
			if (!L_6)
			{
				goto IL_071b;
			}
		}

IL_002a:
		{
			String_t* L_7 = V_2;
			uint32_t L_8;
			L_8 = U3CPrivateImplementationDetailsU3E_ComputeStringHash_m3ADC1F612F9EE3DD518E6F0023A0DE0EE2B120A7((String_t*)L_7, /*hidden argument*/NULL);
			V_3 = (uint32_t)L_8;
			uint32_t L_9 = V_3;
			if ((!(((uint32_t)L_9) <= ((uint32_t)((int32_t)1508062721)))))
			{
				goto IL_0134;
			}
		}

IL_003c:
		{
			uint32_t L_10 = V_3;
			if ((!(((uint32_t)L_10) <= ((uint32_t)((int32_t)698754697)))))
			{
				goto IL_00b0;
			}
		}

IL_0044:
		{
			uint32_t L_11 = V_3;
			if ((!(((uint32_t)L_11) <= ((uint32_t)((int32_t)472844700)))))
			{
				goto IL_0072;
			}
		}

IL_004c:
		{
			uint32_t L_12 = V_3;
			if ((((int32_t)L_12) == ((int32_t)((int32_t)87590155))))
			{
				goto IL_043c;
			}
		}

IL_0057:
		{
			uint32_t L_13 = V_3;
			if ((((int32_t)L_13) == ((int32_t)((int32_t)301255720))))
			{
				goto IL_02d7;
			}
		}

IL_0062:
		{
			uint32_t L_14 = V_3;
			if ((((int32_t)L_14) == ((int32_t)((int32_t)472844700))))
			{
				goto IL_0283;
			}
		}

IL_006d:
		{
			goto IL_071b;
		}

IL_0072:
		{
			uint32_t L_15 = V_3;
			if ((!(((uint32_t)L_15) <= ((uint32_t)((int32_t)549791583)))))
			{
				goto IL_0095;
			}
		}

IL_007a:
		{
			uint32_t L_16 = V_3;
			if ((((int32_t)L_16) == ((int32_t)((int32_t)533013964))))
			{
				goto IL_03a9;
			}
		}

IL_0085:
		{
			uint32_t L_17 = V_3;
			if ((((int32_t)L_17) == ((int32_t)((int32_t)549791583))))
			{
				goto IL_03be;
			}
		}

IL_0090:
		{
			goto IL_071b;
		}

IL_0095:
		{
			uint32_t L_18 = V_3;
			if ((((int32_t)L_18) == ((int32_t)((int32_t)583346821))))
			{
				goto IL_0394;
			}
		}

IL_00a0:
		{
			uint32_t L_19 = V_3;
			if ((((int32_t)L_19) == ((int32_t)((int32_t)698754697))))
			{
				goto IL_02ec;
			}
		}

IL_00ab:
		{
			goto IL_071b;
		}

IL_00b0:
		{
			uint32_t L_20 = V_3;
			if ((!(((uint32_t)L_20) <= ((uint32_t)((int32_t)1235622516)))))
			{
				goto IL_00f6;
			}
		}

IL_00b8:
		{
			uint32_t L_21 = V_3;
			if ((!(((uint32_t)L_21) <= ((uint32_t)((int32_t)740612720)))))
			{
				goto IL_00db;
			}
		}

IL_00c0:
		{
			uint32_t L_22 = V_3;
			if ((((int32_t)L_22) == ((int32_t)((int32_t)705796271))))
			{
				goto IL_0316;
			}
		}

IL_00cb:
		{
			uint32_t L_23 = V_3;
			if ((((int32_t)L_23) == ((int32_t)((int32_t)740612720))))
			{
				goto IL_03d3;
			}
		}

IL_00d6:
		{
			goto IL_071b;
		}

IL_00db:
		{
			uint32_t L_24 = V_3;
			if ((((int32_t)L_24) == ((int32_t)((int32_t)1059843136))))
			{
				goto IL_0340;
			}
		}

IL_00e6:
		{
			uint32_t L_25 = V_3;
			if ((((int32_t)L_25) == ((int32_t)((int32_t)1235622516))))
			{
				goto IL_036a;
			}
		}

IL_00f1:
		{
			goto IL_071b;
		}

IL_00f6:
		{
			uint32_t L_26 = V_3;
			if ((!(((uint32_t)L_26) <= ((uint32_t)((int32_t)1320492961)))))
			{
				goto IL_0119;
			}
		}

IL_00fe:
		{
			uint32_t L_27 = V_3;
			if ((((int32_t)L_27) == ((int32_t)((int32_t)1310955452))))
			{
				goto IL_0490;
			}
		}

IL_0109:
		{
			uint32_t L_28 = V_3;
			if ((((int32_t)L_28) == ((int32_t)((int32_t)1320492961))))
			{
				goto IL_047b;
			}
		}

IL_0114:
		{
			goto IL_071b;
		}

IL_0119:
		{
			uint32_t L_29 = V_3;
			if ((((int32_t)L_29) == ((int32_t)((int32_t)1458352709))))
			{
				goto IL_0466;
			}
		}

IL_0124:
		{
			uint32_t L_30 = V_3;
			if ((((int32_t)L_30) == ((int32_t)((int32_t)1508062721))))
			{
				goto IL_04a5;
			}
		}

IL_012f:
		{
			goto IL_071b;
		}

IL_0134:
		{
			uint32_t L_31 = V_3;
			if ((!(((uint32_t)L_31) <= ((uint32_t)((int32_t)-1444332543)))))
			{
				goto IL_01c3;
			}
		}

IL_013f:
		{
			uint32_t L_32 = V_3;
			if ((!(((uint32_t)L_32) <= ((uint32_t)((int32_t)2129631044)))))
			{
				goto IL_0185;
			}
		}

IL_0147:
		{
			uint32_t L_33 = V_3;
			if ((!(((uint32_t)L_33) <= ((uint32_t)((int32_t)1640355324)))))
			{
				goto IL_016a;
			}
		}

IL_014f:
		{
			uint32_t L_34 = V_3;
			if ((((int32_t)L_34) == ((int32_t)((int32_t)1560124071))))
			{
				goto IL_04ba;
			}
		}

IL_015a:
		{
			uint32_t L_35 = V_3;
			if ((((int32_t)L_35) == ((int32_t)((int32_t)1640355324))))
			{
				goto IL_0451;
			}
		}

IL_0165:
		{
			goto IL_071b;
		}

IL_016a:
		{
			uint32_t L_36 = V_3;
			if ((((int32_t)L_36) == ((int32_t)((int32_t)1728801507))))
			{
				goto IL_026e;
			}
		}

IL_0175:
		{
			uint32_t L_37 = V_3;
			if ((((int32_t)L_37) == ((int32_t)((int32_t)2129631044))))
			{
				goto IL_03fd;
			}
		}

IL_0180:
		{
			goto IL_071b;
		}

IL_0185:
		{
			uint32_t L_38 = V_3;
			if ((!(((uint32_t)L_38) <= ((uint32_t)((int32_t)-1786286561)))))
			{
				goto IL_01a8;
			}
		}

IL_018d:
		{
			uint32_t L_39 = V_3;
			if ((((int32_t)L_39) == ((int32_t)((int32_t)-1925595674))))
			{
				goto IL_0412;
			}
		}

IL_0198:
		{
			uint32_t L_40 = V_3;
			if ((((int32_t)L_40) == ((int32_t)((int32_t)-1786286561))))
			{
				goto IL_0244;
			}
		}

IL_01a3:
		{
			goto IL_071b;
		}

IL_01a8:
		{
			uint32_t L_41 = V_3;
			if ((((int32_t)L_41) == ((int32_t)((int32_t)-1522491664))))
			{
				goto IL_0298;
			}
		}

IL_01b3:
		{
			uint32_t L_42 = V_3;
			if ((((int32_t)L_42) == ((int32_t)((int32_t)-1444332543))))
			{
				goto IL_0355;
			}
		}

IL_01be:
		{
			goto IL_071b;
		}

IL_01c3:
		{
			uint32_t L_43 = V_3;
			if ((!(((uint32_t)L_43) <= ((uint32_t)((int32_t)-558361902)))))
			{
				goto IL_0206;
			}
		}

IL_01cb:
		{
			uint32_t L_44 = V_3;
			if ((!(((uint32_t)L_44) <= ((uint32_t)((int32_t)-1180859054)))))
			{
				goto IL_01ee;
			}
		}

IL_01d3:
		{
			uint32_t L_45 = V_3;
			if ((((int32_t)L_45) == ((int32_t)((int32_t)-1335745110))))
			{
				goto IL_02c2;
			}
		}

IL_01de:
		{
			uint32_t L_46 = V_3;
			if ((((int32_t)L_46) == ((int32_t)((int32_t)-1180859054))))
			{
				goto IL_02ad;
			}
		}

IL_01e9:
		{
			goto IL_071b;
		}

IL_01ee:
		{
			uint32_t L_47 = V_3;
			if ((((int32_t)L_47) == ((int32_t)((int32_t)-708986046))))
			{
				goto IL_0259;
			}
		}

IL_01f6:
		{
			uint32_t L_48 = V_3;
			if ((((int32_t)L_48) == ((int32_t)((int32_t)-558361902))))
			{
				goto IL_037f;
			}
		}

IL_0201:
		{
			goto IL_071b;
		}

IL_0206:
		{
			uint32_t L_49 = V_3;
			if ((!(((uint32_t)L_49) <= ((uint32_t)((int32_t)-255211260)))))
			{
				goto IL_0229;
			}
		}

IL_020e:
		{
			uint32_t L_50 = V_3;
			if ((((int32_t)L_50) == ((int32_t)((int32_t)-345285761))))
			{
				goto IL_03e8;
			}
		}

IL_0219:
		{
			uint32_t L_51 = V_3;
			if ((((int32_t)L_51) == ((int32_t)((int32_t)-255211260))))
			{
				goto IL_0427;
			}
		}

IL_0224:
		{
			goto IL_071b;
		}

IL_0229:
		{
			uint32_t L_52 = V_3;
			if ((((int32_t)L_52) == ((int32_t)((int32_t)-42086080))))
			{
				goto IL_0301;
			}
		}

IL_0234:
		{
			uint32_t L_53 = V_3;
			if ((((int32_t)L_53) == ((int32_t)((int32_t)-25846038))))
			{
				goto IL_032b;
			}
		}

IL_023f:
		{
			goto IL_071b;
		}

IL_0244:
		{
			String_t* L_54 = V_2;
			bool L_55;
			L_55 = String_op_Equality_m50B3548E4AC232558190B0052877B290AA1D436A((String_t*)L_54, (String_t*)_stringLiteralEBF5FE0CBF3EEA67902EEA700B7216E3DB0D8E84, /*hidden argument*/NULL);
			if (L_55)
			{
				goto IL_04cf;
			}
		}

IL_0254:
		{
			goto IL_071b;
		}

IL_0259:
		{
			String_t* L_56 = V_2;
			bool L_57;
			L_57 = String_op_Equality_m50B3548E4AC232558190B0052877B290AA1D436A((String_t*)L_56, (String_t*)_stringLiteral647E0FB2B5E859CC4BD7C73623B82C8EFABA2563, /*hidden argument*/NULL);
			if (L_57)
			{
				goto IL_04e5;
			}
		}

IL_0269:
		{
			goto IL_071b;
		}

IL_026e:
		{
			String_t* L_58 = V_2;
			bool L_59;
			L_59 = String_op_Equality_m50B3548E4AC232558190B0052877B290AA1D436A((String_t*)L_58, (String_t*)_stringLiteralF9EE582B77C320A1F6A3DF72205857C4248BAC79, /*hidden argument*/NULL);
			if (L_59)
			{
				goto IL_04fb;
			}
		}

IL_027e:
		{
			goto IL_071b;
		}

IL_0283:
		{
			String_t* L_60 = V_2;
			bool L_61;
			L_61 = String_op_Equality_m50B3548E4AC232558190B0052877B290AA1D436A((String_t*)L_60, (String_t*)_stringLiteral53D3413057D7E52F44470A335C590748745352B1, /*hidden argument*/NULL);
			if (L_61)
			{
				goto IL_050c;
			}
		}

IL_0293:
		{
			goto IL_071b;
		}

IL_0298:
		{
			String_t* L_62 = V_2;
			bool L_63;
			L_63 = String_op_Equality_m50B3548E4AC232558190B0052877B290AA1D436A((String_t*)L_62, (String_t*)_stringLiteralC959D767B7F0BD38D9DA8A64A4750C3A0972E2A0, /*hidden argument*/NULL);
			if (L_63)
			{
				goto IL_0522;
			}
		}

IL_02a8:
		{
			goto IL_071b;
		}

IL_02ad:
		{
			String_t* L_64 = V_2;
			bool L_65;
			L_65 = String_op_Equality_m50B3548E4AC232558190B0052877B290AA1D436A((String_t*)L_64, (String_t*)_stringLiteral75C9716749EA210206E3467390B7A11F3F33DDFA, /*hidden argument*/NULL);
			if (L_65)
			{
				goto IL_0533;
			}
		}

IL_02bd:
		{
			goto IL_071b;
		}

IL_02c2:
		{
			String_t* L_66 = V_2;
			bool L_67;
			L_67 = String_op_Equality_m50B3548E4AC232558190B0052877B290AA1D436A((String_t*)L_66, (String_t*)_stringLiteral7606720A7AEF5939309A8E4FCB8274252FA3D7BF, /*hidden argument*/NULL);
			if (L_67)
			{
				goto IL_0544;
			}
		}

IL_02d2:
		{
			goto IL_071b;
		}

IL_02d7:
		{
			String_t* L_68 = V_2;
			bool L_69;
			L_69 = String_op_Equality_m50B3548E4AC232558190B0052877B290AA1D436A((String_t*)L_68, (String_t*)_stringLiteral71C5F9C3E2F3C81C5BBC7FD313F6938654E61138, /*hidden argument*/NULL);
			if (L_69)
			{
				goto IL_055a;
			}
		}

IL_02e7:
		{
			goto IL_071b;
		}

IL_02ec:
		{
			String_t* L_70 = V_2;
			bool L_71;
			L_71 = String_op_Equality_m50B3548E4AC232558190B0052877B290AA1D436A((String_t*)L_70, (String_t*)_stringLiteral3F1522C8DB7943F2AE3AA1563D3AC25D9C8B93D1, /*hidden argument*/NULL);
			if (L_71)
			{
				goto IL_0570;
			}
		}

IL_02fc:
		{
			goto IL_071b;
		}

IL_0301:
		{
			String_t* L_72 = V_2;
			bool L_73;
			L_73 = String_op_Equality_m50B3548E4AC232558190B0052877B290AA1D436A((String_t*)L_72, (String_t*)_stringLiteralF23E83744C9D6FC70D71B723AAED8006D6780BCB, /*hidden argument*/NULL);
			if (L_73)
			{
				goto IL_0586;
			}
		}

IL_0311:
		{
			goto IL_071b;
		}

IL_0316:
		{
			String_t* L_74 = V_2;
			bool L_75;
			L_75 = String_op_Equality_m50B3548E4AC232558190B0052877B290AA1D436A((String_t*)L_74, (String_t*)_stringLiteralB49A1DF483856544CEC6018E8C944DB6E16A8D57, /*hidden argument*/NULL);
			if (L_75)
			{
				goto IL_059c;
			}
		}

IL_0326:
		{
			goto IL_071b;
		}

IL_032b:
		{
			String_t* L_76 = V_2;
			bool L_77;
			L_77 = String_op_Equality_m50B3548E4AC232558190B0052877B290AA1D436A((String_t*)L_76, (String_t*)_stringLiteral3A04F86957625CB28FA670EECF997E6BAD45BBE7, /*hidden argument*/NULL);
			if (L_77)
			{
				goto IL_05b2;
			}
		}

IL_033b:
		{
			goto IL_071b;
		}

IL_0340:
		{
			String_t* L_78 = V_2;
			bool L_79;
			L_79 = String_op_Equality_m50B3548E4AC232558190B0052877B290AA1D436A((String_t*)L_78, (String_t*)_stringLiteral7A4A6E2A7090298F814A9D44C89F8634249BEF07, /*hidden argument*/NULL);
			if (L_79)
			{
				goto IL_05c8;
			}
		}

IL_0350:
		{
			goto IL_071b;
		}

IL_0355:
		{
			String_t* L_80 = V_2;
			bool L_81;
			L_81 = String_op_Equality_m50B3548E4AC232558190B0052877B290AA1D436A((String_t*)L_80, (String_t*)_stringLiteralF3FA58C10BBB9830102605E24AF89DC619908DFA, /*hidden argument*/NULL);
			if (L_81)
			{
				goto IL_05d9;
			}
		}

IL_0365:
		{
			goto IL_071b;
		}

IL_036a:
		{
			String_t* L_82 = V_2;
			bool L_83;
			L_83 = String_op_Equality_m50B3548E4AC232558190B0052877B290AA1D436A((String_t*)L_82, (String_t*)_stringLiteralBA9362732D25B1644B7D8DEC5DF6F036A4A66DE5, /*hidden argument*/NULL);
			if (L_83)
			{
				goto IL_05ee;
			}
		}

IL_037a:
		{
			goto IL_071b;
		}

IL_037f:
		{
			String_t* L_84 = V_2;
			bool L_85;
			L_85 = String_op_Equality_m50B3548E4AC232558190B0052877B290AA1D436A((String_t*)L_84, (String_t*)_stringLiteral95F57476C0AA778364404E7CCCD7499BF1BF3757, /*hidden argument*/NULL);
			if (L_85)
			{
				goto IL_05fe;
			}
		}

IL_038f:
		{
			goto IL_071b;
		}

IL_0394:
		{
			String_t* L_86 = V_2;
			bool L_87;
			L_87 = String_op_Equality_m50B3548E4AC232558190B0052877B290AA1D436A((String_t*)L_86, (String_t*)_stringLiteral9AB5ADF8A8A53110245466F7C226F7935F5FE95F, /*hidden argument*/NULL);
			if (L_87)
			{
				goto IL_060f;
			}
		}

IL_03a4:
		{
			goto IL_071b;
		}

IL_03a9:
		{
			String_t* L_88 = V_2;
			bool L_89;
			L_89 = String_op_Equality_m50B3548E4AC232558190B0052877B290AA1D436A((String_t*)L_88, (String_t*)_stringLiteralEA8FBF382D8AC9EDB8FFC14A350641B987F5C631, /*hidden argument*/NULL);
			if (L_89)
			{
				goto IL_0620;
			}
		}

IL_03b9:
		{
			goto IL_071b;
		}

IL_03be:
		{
			String_t* L_90 = V_2;
			bool L_91;
			L_91 = String_op_Equality_m50B3548E4AC232558190B0052877B290AA1D436A((String_t*)L_90, (String_t*)_stringLiteral201D9D00BB60DC2318D21CF9902290EFE255D5DC, /*hidden argument*/NULL);
			if (L_91)
			{
				goto IL_0631;
			}
		}

IL_03ce:
		{
			goto IL_071b;
		}

IL_03d3:
		{
			String_t* L_92 = V_2;
			bool L_93;
			L_93 = String_op_Equality_m50B3548E4AC232558190B0052877B290AA1D436A((String_t*)L_92, (String_t*)_stringLiteral65B008F04EC40A696263EF679CF274BD10999A5D, /*hidden argument*/NULL);
			if (L_93)
			{
				goto IL_0642;
			}
		}

IL_03e3:
		{
			goto IL_071b;
		}

IL_03e8:
		{
			String_t* L_94 = V_2;
			bool L_95;
			L_95 = String_op_Equality_m50B3548E4AC232558190B0052877B290AA1D436A((String_t*)L_94, (String_t*)_stringLiteralF38CFAE6A91D072D4453C29FF44D81D459A582F1, /*hidden argument*/NULL);
			if (L_95)
			{
				goto IL_0653;
			}
		}

IL_03f8:
		{
			goto IL_071b;
		}

IL_03fd:
		{
			String_t* L_96 = V_2;
			bool L_97;
			L_97 = String_op_Equality_m50B3548E4AC232558190B0052877B290AA1D436A((String_t*)L_96, (String_t*)_stringLiteral3BC15E3C2F40466B2DC85C4776499817B8306CBB, /*hidden argument*/NULL);
			if (L_97)
			{
				goto IL_0669;
			}
		}

IL_040d:
		{
			goto IL_071b;
		}

IL_0412:
		{
			String_t* L_98 = V_2;
			bool L_99;
			L_99 = String_op_Equality_m50B3548E4AC232558190B0052877B290AA1D436A((String_t*)L_98, (String_t*)_stringLiteralCE18B047107AA23D1AA9B2ED32D316148E02655F, /*hidden argument*/NULL);
			if (L_99)
			{
				goto IL_067f;
			}
		}

IL_0422:
		{
			goto IL_071b;
		}

IL_0427:
		{
			String_t* L_100 = V_2;
			bool L_101;
			L_101 = String_op_Equality_m50B3548E4AC232558190B0052877B290AA1D436A((String_t*)L_100, (String_t*)_stringLiteral83AC9669A9053DD15B9F2E82D2CE2369EFE131BA, /*hidden argument*/NULL);
			if (L_101)
			{
				goto IL_0695;
			}
		}

IL_0437:
		{
			goto IL_071b;
		}

IL_043c:
		{
			String_t* L_102 = V_2;
			bool L_103;
			L_103 = String_op_Equality_m50B3548E4AC232558190B0052877B290AA1D436A((String_t*)L_102, (String_t*)_stringLiteralECAEEB225F8689DE45DEB4FA21CE34E1960B1B50, /*hidden argument*/NULL);
			if (L_103)
			{
				goto IL_06a3;
			}
		}

IL_044c:
		{
			goto IL_071b;
		}

IL_0451:
		{
			String_t* L_104 = V_2;
			bool L_105;
			L_105 = String_op_Equality_m50B3548E4AC232558190B0052877B290AA1D436A((String_t*)L_104, (String_t*)_stringLiteral2EE7B6B0E37E14930BBA497867139BFD0617CE04, /*hidden argument*/NULL);
			if (L_105)
			{
				goto IL_06b1;
			}
		}

IL_0461:
		{
			goto IL_071b;
		}

IL_0466:
		{
			String_t* L_106 = V_2;
			bool L_107;
			L_107 = String_op_Equality_m50B3548E4AC232558190B0052877B290AA1D436A((String_t*)L_106, (String_t*)_stringLiteralF2AF7DD0BFF41B7B35037F018DAABE7DCF357A7B, /*hidden argument*/NULL);
			if (L_107)
			{
				goto IL_06bf;
			}
		}

IL_0476:
		{
			goto IL_071b;
		}

IL_047b:
		{
			String_t* L_108 = V_2;
			bool L_109;
			L_109 = String_op_Equality_m50B3548E4AC232558190B0052877B290AA1D436A((String_t*)L_108, (String_t*)_stringLiteral7FF61C3A55BCA1287974D8740F945250B3F0F084, /*hidden argument*/NULL);
			if (L_109)
			{
				goto IL_06d2;
			}
		}

IL_048b:
		{
			goto IL_071b;
		}

IL_0490:
		{
			String_t* L_110 = V_2;
			bool L_111;
			L_111 = String_op_Equality_m50B3548E4AC232558190B0052877B290AA1D436A((String_t*)L_110, (String_t*)_stringLiteral2ADFC3FFF7C52D554F0435A348A5345C9FCD7FF8, /*hidden argument*/NULL);
			if (L_111)
			{
				goto IL_06e5;
			}
		}

IL_04a0:
		{
			goto IL_071b;
		}

IL_04a5:
		{
			String_t* L_112 = V_2;
			bool L_113;
			L_113 = String_op_Equality_m50B3548E4AC232558190B0052877B290AA1D436A((String_t*)L_112, (String_t*)_stringLiteral2E201D1972661439FD3C8523C55723E7E9BCC7DA, /*hidden argument*/NULL);
			if (L_113)
			{
				goto IL_06f7;
			}
		}

IL_04b5:
		{
			goto IL_071b;
		}

IL_04ba:
		{
			String_t* L_114 = V_2;
			bool L_115;
			L_115 = String_op_Equality_m50B3548E4AC232558190B0052877B290AA1D436A((String_t*)L_114, (String_t*)_stringLiteralCD44AC57FFE6CAC7824F4CAA223F1BB8B4CB0D73, /*hidden argument*/NULL);
			if (L_115)
			{
				goto IL_0709;
			}
		}

IL_04ca:
		{
			goto IL_071b;
		}

IL_04cf:
		{
			// instance.width = reader.Read<System.Int32>(ES3Type_int.Instance);
			RenderTexture_t5FE7A5B47EF962A0E8D7BEBA05E9FC87D49A1849 * L_116 = V_0;
			ES3Reader_t2780AF8AA61DA2A817115CEF8612AC0E494D03C9 * L_117 = ___reader0;
			IL2CPP_RUNTIME_CLASS_INIT(ES3Type_int_tF64C15D40AD0CC7C15BCD1CEC3C5C6BF837BD167_il2cpp_TypeInfo_var);
			ES3Type_t8FBECB7AE75168648B9524E0C2A38DAD4555421D * L_118 = ((ES3Type_int_tF64C15D40AD0CC7C15BCD1CEC3C5C6BF837BD167_StaticFields*)il2cpp_codegen_static_fields_for(ES3Type_int_tF64C15D40AD0CC7C15BCD1CEC3C5C6BF837BD167_il2cpp_TypeInfo_var))->get_Instance_12();
			NullCheck((ES3Reader_t2780AF8AA61DA2A817115CEF8612AC0E494D03C9 *)L_117);
			int32_t L_119;
			L_119 = GenericVirtFuncInvoker1< int32_t, ES3Type_t8FBECB7AE75168648B9524E0C2A38DAD4555421D * >::Invoke(ES3Reader_Read_TisInt32_tFDE5F8CD43D10453F6A2E0C77FE48C6CC7009046_m2B74AA6627F5B1D21171D56C42F71DE5A7C1B4A6_RuntimeMethod_var, (ES3Reader_t2780AF8AA61DA2A817115CEF8612AC0E494D03C9 *)L_117, (ES3Type_t8FBECB7AE75168648B9524E0C2A38DAD4555421D *)L_118);
			NullCheck((Texture_t9FE0218A1EEDF266E8C85879FE123265CACC95AE *)L_116);
			VirtActionInvoker1< int32_t >::Invoke(6 /* System.Void UnityEngine.Texture::set_width(System.Int32) */, (Texture_t9FE0218A1EEDF266E8C85879FE123265CACC95AE *)L_116, (int32_t)L_119);
			// break;
			goto IL_0721;
		}

IL_04e5:
		{
			// instance.height = reader.Read<System.Int32>(ES3Type_int.Instance);
			RenderTexture_t5FE7A5B47EF962A0E8D7BEBA05E9FC87D49A1849 * L_120 = V_0;
			ES3Reader_t2780AF8AA61DA2A817115CEF8612AC0E494D03C9 * L_121 = ___reader0;
			IL2CPP_RUNTIME_CLASS_INIT(ES3Type_int_tF64C15D40AD0CC7C15BCD1CEC3C5C6BF837BD167_il2cpp_TypeInfo_var);
			ES3Type_t8FBECB7AE75168648B9524E0C2A38DAD4555421D * L_122 = ((ES3Type_int_tF64C15D40AD0CC7C15BCD1CEC3C5C6BF837BD167_StaticFields*)il2cpp_codegen_static_fields_for(ES3Type_int_tF64C15D40AD0CC7C15BCD1CEC3C5C6BF837BD167_il2cpp_TypeInfo_var))->get_Instance_12();
			NullCheck((ES3Reader_t2780AF8AA61DA2A817115CEF8612AC0E494D03C9 *)L_121);
			int32_t L_123;
			L_123 = GenericVirtFuncInvoker1< int32_t, ES3Type_t8FBECB7AE75168648B9524E0C2A38DAD4555421D * >::Invoke(ES3Reader_Read_TisInt32_tFDE5F8CD43D10453F6A2E0C77FE48C6CC7009046_m2B74AA6627F5B1D21171D56C42F71DE5A7C1B4A6_RuntimeMethod_var, (ES3Reader_t2780AF8AA61DA2A817115CEF8612AC0E494D03C9 *)L_121, (ES3Type_t8FBECB7AE75168648B9524E0C2A38DAD4555421D *)L_122);
			NullCheck((Texture_t9FE0218A1EEDF266E8C85879FE123265CACC95AE *)L_120);
			VirtActionInvoker1< int32_t >::Invoke(8 /* System.Void UnityEngine.Texture::set_height(System.Int32) */, (Texture_t9FE0218A1EEDF266E8C85879FE123265CACC95AE *)L_120, (int32_t)L_123);
			// break;
			goto IL_0721;
		}

IL_04fb:
		{
			// instance.dimension = reader.Read<UnityEngine.Rendering.TextureDimension>();
			RenderTexture_t5FE7A5B47EF962A0E8D7BEBA05E9FC87D49A1849 * L_124 = V_0;
			ES3Reader_t2780AF8AA61DA2A817115CEF8612AC0E494D03C9 * L_125 = ___reader0;
			NullCheck((ES3Reader_t2780AF8AA61DA2A817115CEF8612AC0E494D03C9 *)L_125);
			int32_t L_126;
			L_126 = GenericVirtFuncInvoker0< int32_t >::Invoke(ES3Reader_Read_TisTextureDimension_tADCCB7C1D30E4D1182651BA9094B4DE61B63EACC_m19EAA3B93D10636C17A62A3D8437349223CFD988_RuntimeMethod_var, (ES3Reader_t2780AF8AA61DA2A817115CEF8612AC0E494D03C9 *)L_125);
			NullCheck((Texture_t9FE0218A1EEDF266E8C85879FE123265CACC95AE *)L_124);
			VirtActionInvoker1< int32_t >::Invoke(10 /* System.Void UnityEngine.Texture::set_dimension(UnityEngine.Rendering.TextureDimension) */, (Texture_t9FE0218A1EEDF266E8C85879FE123265CACC95AE *)L_124, (int32_t)L_126);
			// break;
			goto IL_0721;
		}

IL_050c:
		{
			// instance.useMipMap = reader.Read<System.Boolean>(ES3Type_bool.Instance);
			RenderTexture_t5FE7A5B47EF962A0E8D7BEBA05E9FC87D49A1849 * L_127 = V_0;
			ES3Reader_t2780AF8AA61DA2A817115CEF8612AC0E494D03C9 * L_128 = ___reader0;
			IL2CPP_RUNTIME_CLASS_INIT(ES3Type_bool_t8F309F7B9CC735FF1DEE68081B6E3CAB367745F4_il2cpp_TypeInfo_var);
			ES3Type_t8FBECB7AE75168648B9524E0C2A38DAD4555421D * L_129 = ((ES3Type_bool_t8F309F7B9CC735FF1DEE68081B6E3CAB367745F4_StaticFields*)il2cpp_codegen_static_fields_for(ES3Type_bool_t8F309F7B9CC735FF1DEE68081B6E3CAB367745F4_il2cpp_TypeInfo_var))->get_Instance_12();
			NullCheck((ES3Reader_t2780AF8AA61DA2A817115CEF8612AC0E494D03C9 *)L_128);
			bool L_130;
			L_130 = GenericVirtFuncInvoker1< bool, ES3Type_t8FBECB7AE75168648B9524E0C2A38DAD4555421D * >::Invoke(ES3Reader_Read_TisBoolean_t07D1E3F34E4813023D64F584DFF7B34C9D922F37_mC6D1B158268FF9B97822FF9F5B37FB1723FEDA22_RuntimeMethod_var, (ES3Reader_t2780AF8AA61DA2A817115CEF8612AC0E494D03C9 *)L_128, (ES3Type_t8FBECB7AE75168648B9524E0C2A38DAD4555421D *)L_129);
			NullCheck((RenderTexture_t5FE7A5B47EF962A0E8D7BEBA05E9FC87D49A1849 *)L_127);
			RenderTexture_set_useMipMap_mAE1437C3D7D21441891A612C3B812EE9C379F126((RenderTexture_t5FE7A5B47EF962A0E8D7BEBA05E9FC87D49A1849 *)L_127, (bool)L_130, /*hidden argument*/NULL);
			// break;
			goto IL_0721;
		}

IL_0522:
		{
			// instance.memorylessMode = reader.Read<UnityEngine.RenderTextureMemoryless>();
			RenderTexture_t5FE7A5B47EF962A0E8D7BEBA05E9FC87D49A1849 * L_131 = V_0;
			ES3Reader_t2780AF8AA61DA2A817115CEF8612AC0E494D03C9 * L_132 = ___reader0;
			NullCheck((ES3Reader_t2780AF8AA61DA2A817115CEF8612AC0E494D03C9 *)L_132);
			int32_t L_133;
			L_133 = GenericVirtFuncInvoker0< int32_t >::Invoke(ES3Reader_Read_TisRenderTextureMemoryless_t37547D68C2186D2650440F719302CDA4A3BB7F67_m3A980BA15AADBBB8393C3BC88CE17EEDDC89B027_RuntimeMethod_var, (ES3Reader_t2780AF8AA61DA2A817115CEF8612AC0E494D03C9 *)L_132);
			NullCheck((RenderTexture_t5FE7A5B47EF962A0E8D7BEBA05E9FC87D49A1849 *)L_131);
			RenderTexture_set_memorylessMode_mE48B2A38E9374A7BB419383B438790347474EFC1((RenderTexture_t5FE7A5B47EF962A0E8D7BEBA05E9FC87D49A1849 *)L_131, (int32_t)L_133, /*hidden argument*/NULL);
			// break;
			goto IL_0721;
		}

IL_0533:
		{
			// instance.format = reader.Read<UnityEngine.RenderTextureFormat>();
			RenderTexture_t5FE7A5B47EF962A0E8D7BEBA05E9FC87D49A1849 * L_134 = V_0;
			ES3Reader_t2780AF8AA61DA2A817115CEF8612AC0E494D03C9 * L_135 = ___reader0;
			NullCheck((ES3Reader_t2780AF8AA61DA2A817115CEF8612AC0E494D03C9 *)L_135);
			int32_t L_136;
			L_136 = GenericVirtFuncInvoker0< int32_t >::Invoke(ES3Reader_Read_TisRenderTextureFormat_t8371287102ED67772EF78229CF4AB9D38C2CD626_mE6358E03407F5C15B58B292C79D4770DE3FAC95A_RuntimeMethod_var, (ES3Reader_t2780AF8AA61DA2A817115CEF8612AC0E494D03C9 *)L_135);
			NullCheck((RenderTexture_t5FE7A5B47EF962A0E8D7BEBA05E9FC87D49A1849 *)L_134);
			RenderTexture_set_format_m32D42DC33DB151B69E81D0D93F36DE7450CFC23D((RenderTexture_t5FE7A5B47EF962A0E8D7BEBA05E9FC87D49A1849 *)L_134, (int32_t)L_136, /*hidden argument*/NULL);
			// break;
			goto IL_0721;
		}

IL_0544:
		{
			// instance.autoGenerateMips = reader.Read<System.Boolean>(ES3Type_bool.Instance);
			RenderTexture_t5FE7A5B47EF962A0E8D7BEBA05E9FC87D49A1849 * L_137 = V_0;
			ES3Reader_t2780AF8AA61DA2A817115CEF8612AC0E494D03C9 * L_138 = ___reader0;
			IL2CPP_RUNTIME_CLASS_INIT(ES3Type_bool_t8F309F7B9CC735FF1DEE68081B6E3CAB367745F4_il2cpp_TypeInfo_var);
			ES3Type_t8FBECB7AE75168648B9524E0C2A38DAD4555421D * L_139 = ((ES3Type_bool_t8F309F7B9CC735FF1DEE68081B6E3CAB367745F4_StaticFields*)il2cpp_codegen_static_fields_for(ES3Type_bool_t8F309F7B9CC735FF1DEE68081B6E3CAB367745F4_il2cpp_TypeInfo_var))->get_Instance_12();
			NullCheck((ES3Reader_t2780AF8AA61DA2A817115CEF8612AC0E494D03C9 *)L_138);
			bool L_140;
			L_140 = GenericVirtFuncInvoker1< bool, ES3Type_t8FBECB7AE75168648B9524E0C2A38DAD4555421D * >::Invoke(ES3Reader_Read_TisBoolean_t07D1E3F34E4813023D64F584DFF7B34C9D922F37_mC6D1B158268FF9B97822FF9F5B37FB1723FEDA22_RuntimeMethod_var, (ES3Reader_t2780AF8AA61DA2A817115CEF8612AC0E494D03C9 *)L_138, (ES3Type_t8FBECB7AE75168648B9524E0C2A38DAD4555421D *)L_139);
			NullCheck((RenderTexture_t5FE7A5B47EF962A0E8D7BEBA05E9FC87D49A1849 *)L_137);
			RenderTexture_set_autoGenerateMips_m0F02D60D4C4D4790B354451732F2DA6BA12D2E63((RenderTexture_t5FE7A5B47EF962A0E8D7BEBA05E9FC87D49A1849 *)L_137, (bool)L_140, /*hidden argument*/NULL);
			// break;
			goto IL_0721;
		}

IL_055a:
		{
			// instance.volumeDepth = reader.Read<System.Int32>(ES3Type_int.Instance);
			RenderTexture_t5FE7A5B47EF962A0E8D7BEBA05E9FC87D49A1849 * L_141 = V_0;
			ES3Reader_t2780AF8AA61DA2A817115CEF8612AC0E494D03C9 * L_142 = ___reader0;
			IL2CPP_RUNTIME_CLASS_INIT(ES3Type_int_tF64C15D40AD0CC7C15BCD1CEC3C5C6BF837BD167_il2cpp_TypeInfo_var);
			ES3Type_t8FBECB7AE75168648B9524E0C2A38DAD4555421D * L_143 = ((ES3Type_int_tF64C15D40AD0CC7C15BCD1CEC3C5C6BF837BD167_StaticFields*)il2cpp_codegen_static_fields_for(ES3Type_int_tF64C15D40AD0CC7C15BCD1CEC3C5C6BF837BD167_il2cpp_TypeInfo_var))->get_Instance_12();
			NullCheck((ES3Reader_t2780AF8AA61DA2A817115CEF8612AC0E494D03C9 *)L_142);
			int32_t L_144;
			L_144 = GenericVirtFuncInvoker1< int32_t, ES3Type_t8FBECB7AE75168648B9524E0C2A38DAD4555421D * >::Invoke(ES3Reader_Read_TisInt32_tFDE5F8CD43D10453F6A2E0C77FE48C6CC7009046_m2B74AA6627F5B1D21171D56C42F71DE5A7C1B4A6_RuntimeMethod_var, (ES3Reader_t2780AF8AA61DA2A817115CEF8612AC0E494D03C9 *)L_142, (ES3Type_t8FBECB7AE75168648B9524E0C2A38DAD4555421D *)L_143);
			NullCheck((RenderTexture_t5FE7A5B47EF962A0E8D7BEBA05E9FC87D49A1849 *)L_141);
			RenderTexture_set_volumeDepth_m01D7BD50386DDAE777CE3CB9B60FDD7DE798AC93((RenderTexture_t5FE7A5B47EF962A0E8D7BEBA05E9FC87D49A1849 *)L_141, (int32_t)L_144, /*hidden argument*/NULL);
			// break;
			goto IL_0721;
		}

IL_0570:
		{
			// instance.antiAliasing = reader.Read<System.Int32>(ES3Type_int.Instance);
			RenderTexture_t5FE7A5B47EF962A0E8D7BEBA05E9FC87D49A1849 * L_145 = V_0;
			ES3Reader_t2780AF8AA61DA2A817115CEF8612AC0E494D03C9 * L_146 = ___reader0;
			IL2CPP_RUNTIME_CLASS_INIT(ES3Type_int_tF64C15D40AD0CC7C15BCD1CEC3C5C6BF837BD167_il2cpp_TypeInfo_var);
			ES3Type_t8FBECB7AE75168648B9524E0C2A38DAD4555421D * L_147 = ((ES3Type_int_tF64C15D40AD0CC7C15BCD1CEC3C5C6BF837BD167_StaticFields*)il2cpp_codegen_static_fields_for(ES3Type_int_tF64C15D40AD0CC7C15BCD1CEC3C5C6BF837BD167_il2cpp_TypeInfo_var))->get_Instance_12();
			NullCheck((ES3Reader_t2780AF8AA61DA2A817115CEF8612AC0E494D03C9 *)L_146);
			int32_t L_148;
			L_148 = GenericVirtFuncInvoker1< int32_t, ES3Type_t8FBECB7AE75168648B9524E0C2A38DAD4555421D * >::Invoke(ES3Reader_Read_TisInt32_tFDE5F8CD43D10453F6A2E0C77FE48C6CC7009046_m2B74AA6627F5B1D21171D56C42F71DE5A7C1B4A6_RuntimeMethod_var, (ES3Reader_t2780AF8AA61DA2A817115CEF8612AC0E494D03C9 *)L_146, (ES3Type_t8FBECB7AE75168648B9524E0C2A38DAD4555421D *)L_147);
			NullCheck((RenderTexture_t5FE7A5B47EF962A0E8D7BEBA05E9FC87D49A1849 *)L_145);
			RenderTexture_set_antiAliasing_m4D37900B7E23CA0D33F109DB8DF21265DB70C38F((RenderTexture_t5FE7A5B47EF962A0E8D7BEBA05E9FC87D49A1849 *)L_145, (int32_t)L_148, /*hidden argument*/NULL);
			// break;
			goto IL_0721;
		}

IL_0586:
		{
			// instance.enableRandomWrite = reader.Read<System.Boolean>(ES3Type_bool.Instance);
			RenderTexture_t5FE7A5B47EF962A0E8D7BEBA05E9FC87D49A1849 * L_149 = V_0;
			ES3Reader_t2780AF8AA61DA2A817115CEF8612AC0E494D03C9 * L_150 = ___reader0;
			IL2CPP_RUNTIME_CLASS_INIT(ES3Type_bool_t8F309F7B9CC735FF1DEE68081B6E3CAB367745F4_il2cpp_TypeInfo_var);
			ES3Type_t8FBECB7AE75168648B9524E0C2A38DAD4555421D * L_151 = ((ES3Type_bool_t8F309F7B9CC735FF1DEE68081B6E3CAB367745F4_StaticFields*)il2cpp_codegen_static_fields_for(ES3Type_bool_t8F309F7B9CC735FF1DEE68081B6E3CAB367745F4_il2cpp_TypeInfo_var))->get_Instance_12();
			NullCheck((ES3Reader_t2780AF8AA61DA2A817115CEF8612AC0E494D03C9 *)L_150);
			bool L_152;
			L_152 = GenericVirtFuncInvoker1< bool, ES3Type_t8FBECB7AE75168648B9524E0C2A38DAD4555421D * >::Invoke(ES3Reader_Read_TisBoolean_t07D1E3F34E4813023D64F584DFF7B34C9D922F37_mC6D1B158268FF9B97822FF9F5B37FB1723FEDA22_RuntimeMethod_var, (ES3Reader_t2780AF8AA61DA2A817115CEF8612AC0E494D03C9 *)L_150, (ES3Type_t8FBECB7AE75168648B9524E0C2A38DAD4555421D *)L_151);
			NullCheck((RenderTexture_t5FE7A5B47EF962A0E8D7BEBA05E9FC87D49A1849 *)L_149);
			RenderTexture_set_enableRandomWrite_m024F49DB3CA3B02FA0EEBB3EACB37E6228CAA183((RenderTexture_t5FE7A5B47EF962A0E8D7BEBA05E9FC87D49A1849 *)L_149, (bool)L_152, /*hidden argument*/NULL);
			// break;
			goto IL_0721;
		}

IL_059c:
		{
			// instance.isPowerOfTwo = reader.Read<System.Boolean>(ES3Type_bool.Instance);
			RenderTexture_t5FE7A5B47EF962A0E8D7BEBA05E9FC87D49A1849 * L_153 = V_0;
			ES3Reader_t2780AF8AA61DA2A817115CEF8612AC0E494D03C9 * L_154 = ___reader0;
			IL2CPP_RUNTIME_CLASS_INIT(ES3Type_bool_t8F309F7B9CC735FF1DEE68081B6E3CAB367745F4_il2cpp_TypeInfo_var);
			ES3Type_t8FBECB7AE75168648B9524E0C2A38DAD4555421D * L_155 = ((ES3Type_bool_t8F309F7B9CC735FF1DEE68081B6E3CAB367745F4_StaticFields*)il2cpp_codegen_static_fields_for(ES3Type_bool_t8F309F7B9CC735FF1DEE68081B6E3CAB367745F4_il2cpp_TypeInfo_var))->get_Instance_12();
			NullCheck((ES3Reader_t2780AF8AA61DA2A817115CEF8612AC0E494D03C9 *)L_154);
			bool L_156;
			L_156 = GenericVirtFuncInvoker1< bool, ES3Type_t8FBECB7AE75168648B9524E0C2A38DAD4555421D * >::Invoke(ES3Reader_Read_TisBoolean_t07D1E3F34E4813023D64F584DFF7B34C9D922F37_mC6D1B158268FF9B97822FF9F5B37FB1723FEDA22_RuntimeMethod_var, (ES3Reader_t2780AF8AA61DA2A817115CEF8612AC0E494D03C9 *)L_154, (ES3Type_t8FBECB7AE75168648B9524E0C2A38DAD4555421D *)L_155);
			NullCheck((RenderTexture_t5FE7A5B47EF962A0E8D7BEBA05E9FC87D49A1849 *)L_153);
			RenderTexture_set_isPowerOfTwo_mA6D34F610DF27C40422DF5815892B45C656F1317((RenderTexture_t5FE7A5B47EF962A0E8D7BEBA05E9FC87D49A1849 *)L_153, (bool)L_156, /*hidden argument*/NULL);
			// break;
			goto IL_0721;
		}

IL_05b2:
		{
			// instance.depth = reader.Read<System.Int32>(ES3Type_int.Instance);
			RenderTexture_t5FE7A5B47EF962A0E8D7BEBA05E9FC87D49A1849 * L_157 = V_0;
			ES3Reader_t2780AF8AA61DA2A817115CEF8612AC0E494D03C9 * L_158 = ___reader0;
			IL2CPP_RUNTIME_CLASS_INIT(ES3Type_int_tF64C15D40AD0CC7C15BCD1CEC3C5C6BF837BD167_il2cpp_TypeInfo_var);
			ES3Type_t8FBECB7AE75168648B9524E0C2A38DAD4555421D * L_159 = ((ES3Type_int_tF64C15D40AD0CC7C15BCD1CEC3C5C6BF837BD167_StaticFields*)il2cpp_codegen_static_fields_for(ES3Type_int_tF64C15D40AD0CC7C15BCD1CEC3C5C6BF837BD167_il2cpp_TypeInfo_var))->get_Instance_12();
			NullCheck((ES3Reader_t2780AF8AA61DA2A817115CEF8612AC0E494D03C9 *)L_158);
			int32_t L_160;
			L_160 = GenericVirtFuncInvoker1< int32_t, ES3Type_t8FBECB7AE75168648B9524E0C2A38DAD4555421D * >::Invoke(ES3Reader_Read_TisInt32_tFDE5F8CD43D10453F6A2E0C77FE48C6CC7009046_m2B74AA6627F5B1D21171D56C42F71DE5A7C1B4A6_RuntimeMethod_var, (ES3Reader_t2780AF8AA61DA2A817115CEF8612AC0E494D03C9 *)L_158, (ES3Type_t8FBECB7AE75168648B9524E0C2A38DAD4555421D *)L_159);
			NullCheck((RenderTexture_t5FE7A5B47EF962A0E8D7BEBA05E9FC87D49A1849 *)L_157);
			RenderTexture_set_depth_mA57CEFEDDB45D0429FAC9532A631839F523944A3((RenderTexture_t5FE7A5B47EF962A0E8D7BEBA05E9FC87D49A1849 *)L_157, (int32_t)L_160, /*hidden argument*/NULL);
			// break;
			goto IL_0721;
		}

IL_05c8:
		{
			// instance.descriptor = reader.Read<UnityEngine.RenderTextureDescriptor>();
			RenderTexture_t5FE7A5B47EF962A0E8D7BEBA05E9FC87D49A1849 * L_161 = V_0;
			ES3Reader_t2780AF8AA61DA2A817115CEF8612AC0E494D03C9 * L_162 = ___reader0;
			NullCheck((ES3Reader_t2780AF8AA61DA2A817115CEF8612AC0E494D03C9 *)L_162);
			RenderTextureDescriptor_t67FF189E1F35AEB5D6C43A2D7103F3A8A8CA0B47  L_163;
			L_163 = GenericVirtFuncInvoker0< RenderTextureDescriptor_t67FF189E1F35AEB5D6C43A2D7103F3A8A8CA0B47  >::Invoke(ES3Reader_Read_TisRenderTextureDescriptor_t67FF189E1F35AEB5D6C43A2D7103F3A8A8CA0B47_m427886ADAAF96C7BA9BD423544128494F96D69E7_RuntimeMethod_var, (ES3Reader_t2780AF8AA61DA2A817115CEF8612AC0E494D03C9 *)L_162);
			NullCheck((RenderTexture_t5FE7A5B47EF962A0E8D7BEBA05E9FC87D49A1849 *)L_161);
			RenderTexture_set_descriptor_m3C8E31AE4644B23719A12345771D1B85EB6E5881((RenderTexture_t5FE7A5B47EF962A0E8D7BEBA05E9FC87D49A1849 *)L_161, (RenderTextureDescriptor_t67FF189E1F35AEB5D6C43A2D7103F3A8A8CA0B47 )L_163, /*hidden argument*/NULL);
			// break;
			goto IL_0721;
		}

IL_05d9:
		{
			// UnityEngine.RenderTexture.masterTextureLimit = reader.Read<System.Int32>(ES3Type_int.Instance);
			ES3Reader_t2780AF8AA61DA2A817115CEF8612AC0E494D03C9 * L_164 = ___reader0;
			IL2CPP_RUNTIME_CLASS_INIT(ES3Type_int_tF64C15D40AD0CC7C15BCD1CEC3C5C6BF837BD167_il2cpp_TypeInfo_var);
			ES3Type_t8FBECB7AE75168648B9524E0C2A38DAD4555421D * L_165 = ((ES3Type_int_tF64C15D40AD0CC7C15BCD1CEC3C5C6BF837BD167_StaticFields*)il2cpp_codegen_static_fields_for(ES3Type_int_tF64C15D40AD0CC7C15BCD1CEC3C5C6BF837BD167_il2cpp_TypeInfo_var))->get_Instance_12();
			NullCheck((ES3Reader_t2780AF8AA61DA2A817115CEF8612AC0E494D03C9 *)L_164);
			int32_t L_166;
			L_166 = GenericVirtFuncInvoker1< int32_t, ES3Type_t8FBECB7AE75168648B9524E0C2A38DAD4555421D * >::Invoke(ES3Reader_Read_TisInt32_tFDE5F8CD43D10453F6A2E0C77FE48C6CC7009046_m2B74AA6627F5B1D21171D56C42F71DE5A7C1B4A6_RuntimeMethod_var, (ES3Reader_t2780AF8AA61DA2A817115CEF8612AC0E494D03C9 *)L_164, (ES3Type_t8FBECB7AE75168648B9524E0C2A38DAD4555421D *)L_165);
			IL2CPP_RUNTIME_CLASS_INIT(Texture_t9FE0218A1EEDF266E8C85879FE123265CACC95AE_il2cpp_TypeInfo_var);
			Texture_set_masterTextureLimit_m94A531A20A54A86AF7B88A56F72709CE556B7DFF((int32_t)L_166, /*hidden argument*/NULL);
			// break;
			goto IL_0721;
		}

IL_05ee:
		{
			// UnityEngine.RenderTexture.anisotropicFiltering = reader.Read<UnityEngine.AnisotropicFiltering>();
			ES3Reader_t2780AF8AA61DA2A817115CEF8612AC0E494D03C9 * L_167 = ___reader0;
			NullCheck((ES3Reader_t2780AF8AA61DA2A817115CEF8612AC0E494D03C9 *)L_167);
			int32_t L_168;
			L_168 = GenericVirtFuncInvoker0< int32_t >::Invoke(ES3Reader_Read_TisAnisotropicFiltering_tAC3D1448B262D5869946CD1CDD2C8DAE3A7A537B_mAF1268AAC3E461D6E0604A19FAF0325873B6EC8A_RuntimeMethod_var, (ES3Reader_t2780AF8AA61DA2A817115CEF8612AC0E494D03C9 *)L_167);
			IL2CPP_RUNTIME_CLASS_INIT(Texture_t9FE0218A1EEDF266E8C85879FE123265CACC95AE_il2cpp_TypeInfo_var);
			Texture_set_anisotropicFiltering_mE2B639BF2681A8A0516C1C343C7E265ED60EAF16((int32_t)L_168, /*hidden argument*/NULL);
			// break;
			goto IL_0721;
		}

IL_05fe:
		{
			// instance.wrapMode = reader.Read<UnityEngine.TextureWrapMode>();
			RenderTexture_t5FE7A5B47EF962A0E8D7BEBA05E9FC87D49A1849 * L_169 = V_0;
			ES3Reader_t2780AF8AA61DA2A817115CEF8612AC0E494D03C9 * L_170 = ___reader0;
			NullCheck((ES3Reader_t2780AF8AA61DA2A817115CEF8612AC0E494D03C9 *)L_170);
			int32_t L_171;
			L_171 = GenericVirtFuncInvoker0< int32_t >::Invoke(ES3Reader_Read_TisTextureWrapMode_t86DDA8206E4AA784A1218D0DE3C5F6826D7549EB_m7926E449CD0B8BD56E5BF145DD0CCFE1C567F107_RuntimeMethod_var, (ES3Reader_t2780AF8AA61DA2A817115CEF8612AC0E494D03C9 *)L_170);
			NullCheck((Texture_t9FE0218A1EEDF266E8C85879FE123265CACC95AE *)L_169);
			Texture_set_wrapMode_m1233D2DF48DC20996F8EE26E866D4BDD2AC8050D((Texture_t9FE0218A1EEDF266E8C85879FE123265CACC95AE *)L_169, (int32_t)L_171, /*hidden argument*/NULL);
			// break;
			goto IL_0721;
		}

IL_060f:
		{
			// instance.wrapModeU = reader.Read<UnityEngine.TextureWrapMode>();
			RenderTexture_t5FE7A5B47EF962A0E8D7BEBA05E9FC87D49A1849 * L_172 = V_0;
			ES3Reader_t2780AF8AA61DA2A817115CEF8612AC0E494D03C9 * L_173 = ___reader0;
			NullCheck((ES3Reader_t2780AF8AA61DA2A817115CEF8612AC0E494D03C9 *)L_173);
			int32_t L_174;
			L_174 = GenericVirtFuncInvoker0< int32_t >::Invoke(ES3Reader_Read_TisTextureWrapMode_t86DDA8206E4AA784A1218D0DE3C5F6826D7549EB_m7926E449CD0B8BD56E5BF145DD0CCFE1C567F107_RuntimeMethod_var, (ES3Reader_t2780AF8AA61DA2A817115CEF8612AC0E494D03C9 *)L_173);
			NullCheck((Texture_t9FE0218A1EEDF266E8C85879FE123265CACC95AE *)L_172);
			Texture_set_wrapModeU_mBD3CBD6880E9E767B91ED9E1B14C725A52D7A66E((Texture_t9FE0218A1EEDF266E8C85879FE123265CACC95AE *)L_172, (int32_t)L_174, /*hidden argument*/NULL);
			// break;
			goto IL_0721;
		}

IL_0620:
		{
			// instance.wrapModeV = reader.Read<UnityEngine.TextureWrapMode>();
			RenderTexture_t5FE7A5B47EF962A0E8D7BEBA05E9FC87D49A1849 * L_175 = V_0;
			ES3Reader_t2780AF8AA61DA2A817115CEF8612AC0E494D03C9 * L_176 = ___reader0;
			NullCheck((ES3Reader_t2780AF8AA61DA2A817115CEF8612AC0E494D03C9 *)L_176);
			int32_t L_177;
			L_177 = GenericVirtFuncInvoker0< int32_t >::Invoke(ES3Reader_Read_TisTextureWrapMode_t86DDA8206E4AA784A1218D0DE3C5F6826D7549EB_m7926E449CD0B8BD56E5BF145DD0CCFE1C567F107_RuntimeMethod_var, (ES3Reader_t2780AF8AA61DA2A817115CEF8612AC0E494D03C9 *)L_176);
			NullCheck((Texture_t9FE0218A1EEDF266E8C85879FE123265CACC95AE *)L_175);
			Texture_set_wrapModeV_mCD51C11B4C90D7508113C744EDC09D04059403E5((Texture_t9FE0218A1EEDF266E8C85879FE123265CACC95AE *)L_175, (int32_t)L_177, /*hidden argument*/NULL);
			// break;
			goto IL_0721;
		}

IL_0631:
		{
			// instance.wrapModeW = reader.Read<UnityEngine.TextureWrapMode>();
			RenderTexture_t5FE7A5B47EF962A0E8D7BEBA05E9FC87D49A1849 * L_178 = V_0;
			ES3Reader_t2780AF8AA61DA2A817115CEF8612AC0E494D03C9 * L_179 = ___reader0;
			NullCheck((ES3Reader_t2780AF8AA61DA2A817115CEF8612AC0E494D03C9 *)L_179);
			int32_t L_180;
			L_180 = GenericVirtFuncInvoker0< int32_t >::Invoke(ES3Reader_Read_TisTextureWrapMode_t86DDA8206E4AA784A1218D0DE3C5F6826D7549EB_m7926E449CD0B8BD56E5BF145DD0CCFE1C567F107_RuntimeMethod_var, (ES3Reader_t2780AF8AA61DA2A817115CEF8612AC0E494D03C9 *)L_179);
			NullCheck((Texture_t9FE0218A1EEDF266E8C85879FE123265CACC95AE *)L_178);
			Texture_set_wrapModeW_m72C3239EA12A51D5031BD2A66C5E7B178EE9F65B((Texture_t9FE0218A1EEDF266E8C85879FE123265CACC95AE *)L_178, (int32_t)L_180, /*hidden argument*/NULL);
			// break;
			goto IL_0721;
		}

IL_0642:
		{
			// instance.filterMode = reader.Read<UnityEngine.FilterMode>();
			RenderTexture_t5FE7A5B47EF962A0E8D7BEBA05E9FC87D49A1849 * L_181 = V_0;
			ES3Reader_t2780AF8AA61DA2A817115CEF8612AC0E494D03C9 * L_182 = ___reader0;
			NullCheck((ES3Reader_t2780AF8AA61DA2A817115CEF8612AC0E494D03C9 *)L_182);
			int32_t L_183;
			L_183 = GenericVirtFuncInvoker0< int32_t >::Invoke(ES3Reader_Read_TisFilterMode_tE90A08FD96A142C761463D65E524BCDBFEEE3D19_m9819C2A442797B4060B0D9A80CFA96CFD6102839_RuntimeMethod_var, (ES3Reader_t2780AF8AA61DA2A817115CEF8612AC0E494D03C9 *)L_182);
			NullCheck((Texture_t9FE0218A1EEDF266E8C85879FE123265CACC95AE *)L_181);
			Texture_set_filterMode_m045141DB0FEFE496885D45F5F23B15BC0E77C8D0((Texture_t9FE0218A1EEDF266E8C85879FE123265CACC95AE *)L_181, (int32_t)L_183, /*hidden argument*/NULL);
			// break;
			goto IL_0721;
		}

IL_0653:
		{
			// instance.anisoLevel = reader.Read<System.Int32>(ES3Type_int.Instance);
			RenderTexture_t5FE7A5B47EF962A0E8D7BEBA05E9FC87D49A1849 * L_184 = V_0;
			ES3Reader_t2780AF8AA61DA2A817115CEF8612AC0E494D03C9 * L_185 = ___reader0;
			IL2CPP_RUNTIME_CLASS_INIT(ES3Type_int_tF64C15D40AD0CC7C15BCD1CEC3C5C6BF837BD167_il2cpp_TypeInfo_var);
			ES3Type_t8FBECB7AE75168648B9524E0C2A38DAD4555421D * L_186 = ((ES3Type_int_tF64C15D40AD0CC7C15BCD1CEC3C5C6BF837BD167_StaticFields*)il2cpp_codegen_static_fields_for(ES3Type_int_tF64C15D40AD0CC7C15BCD1CEC3C5C6BF837BD167_il2cpp_TypeInfo_var))->get_Instance_12();
			NullCheck((ES3Reader_t2780AF8AA61DA2A817115CEF8612AC0E494D03C9 *)L_185);
			int32_t L_187;
			L_187 = GenericVirtFuncInvoker1< int32_t, ES3Type_t8FBECB7AE75168648B9524E0C2A38DAD4555421D * >::Invoke(ES3Reader_Read_TisInt32_tFDE5F8CD43D10453F6A2E0C77FE48C6CC7009046_m2B74AA6627F5B1D21171D56C42F71DE5A7C1B4A6_RuntimeMethod_var, (ES3Reader_t2780AF8AA61DA2A817115CEF8612AC0E494D03C9 *)L_185, (ES3Type_t8FBECB7AE75168648B9524E0C2A38DAD4555421D *)L_186);
			NullCheck((Texture_t9FE0218A1EEDF266E8C85879FE123265CACC95AE *)L_184);
			Texture_set_anisoLevel_mE51360F6CD0562FD6355F8C0509B70A454CB33BE((Texture_t9FE0218A1EEDF266E8C85879FE123265CACC95AE *)L_184, (int32_t)L_187, /*hidden argument*/NULL);
			// break;
			goto IL_0721;
		}

IL_0669:
		{
			// instance.mipMapBias = reader.Read<System.Single>(ES3Type_float.Instance);
			RenderTexture_t5FE7A5B47EF962A0E8D7BEBA05E9FC87D49A1849 * L_188 = V_0;
			ES3Reader_t2780AF8AA61DA2A817115CEF8612AC0E494D03C9 * L_189 = ___reader0;
			IL2CPP_RUNTIME_CLASS_INIT(ES3Type_float_tF86B773C86731BD9AD79448B860BBB178FE77644_il2cpp_TypeInfo_var);
			ES3Type_t8FBECB7AE75168648B9524E0C2A38DAD4555421D * L_190 = ((ES3Type_float_tF86B773C86731BD9AD79448B860BBB178FE77644_StaticFields*)il2cpp_codegen_static_fields_for(ES3Type_float_tF86B773C86731BD9AD79448B860BBB178FE77644_il2cpp_TypeInfo_var))->get_Instance_12();
			NullCheck((ES3Reader_t2780AF8AA61DA2A817115CEF8612AC0E494D03C9 *)L_189);
			float L_191;
			L_191 = GenericVirtFuncInvoker1< float, ES3Type_t8FBECB7AE75168648B9524E0C2A38DAD4555421D * >::Invoke(ES3Reader_Read_TisSingle_tE07797BA3C98D4CA9B5A19413C19A76688AB899E_m4A0416374498BDA042B8EB21E49B72326D6CE5F4_RuntimeMethod_var, (ES3Reader_t2780AF8AA61DA2A817115CEF8612AC0E494D03C9 *)L_189, (ES3Type_t8FBECB7AE75168648B9524E0C2A38DAD4555421D *)L_190);
			NullCheck((Texture_t9FE0218A1EEDF266E8C85879FE123265CACC95AE *)L_188);
			Texture_set_mipMapBias_m5057ADA9DBA8E8E30EC15EA5BABFA0734CE2821C((Texture_t9FE0218A1EEDF266E8C85879FE123265CACC95AE *)L_188, (float)L_191, /*hidden argument*/NULL);
			// break;
			goto IL_0721;
		}

IL_067f:
		{
			// instance.name = reader.Read<System.String>(ES3Type_string.Instance);
			RenderTexture_t5FE7A5B47EF962A0E8D7BEBA05E9FC87D49A1849 * L_192 = V_0;
			ES3Reader_t2780AF8AA61DA2A817115CEF8612AC0E494D03C9 * L_193 = ___reader0;
			IL2CPP_RUNTIME_CLASS_INIT(ES3Type_string_tC47BFBE3CC816F3C70B51558C68F0C6470C5EFE5_il2cpp_TypeInfo_var);
			ES3Type_t8FBECB7AE75168648B9524E0C2A38DAD4555421D * L_194 = ((ES3Type_string_tC47BFBE3CC816F3C70B51558C68F0C6470C5EFE5_StaticFields*)il2cpp_codegen_static_fields_for(ES3Type_string_tC47BFBE3CC816F3C70B51558C68F0C6470C5EFE5_il2cpp_TypeInfo_var))->get_Instance_12();
			NullCheck((ES3Reader_t2780AF8AA61DA2A817115CEF8612AC0E494D03C9 *)L_193);
			String_t* L_195;
			L_195 = GenericVirtFuncInvoker1< String_t*, ES3Type_t8FBECB7AE75168648B9524E0C2A38DAD4555421D * >::Invoke(ES3Reader_Read_TisString_t_m883861F3B58239392073ABF39876826EEB87DF9C_RuntimeMethod_var, (ES3Reader_t2780AF8AA61DA2A817115CEF8612AC0E494D03C9 *)L_193, (ES3Type_t8FBECB7AE75168648B9524E0C2A38DAD4555421D *)L_194);
			NullCheck((Object_tF2F3778131EFF286AF62B7B013A170F95A91571A *)L_192);
			Object_set_name_m87C4006618ADB325ABE5439DF159E10DD8DD0781((Object_tF2F3778131EFF286AF62B7B013A170F95A91571A *)L_192, (String_t*)L_195, /*hidden argument*/NULL);
			// break;
			goto IL_0721;
		}

IL_0695:
		{
			// instance.vrUsage = reader.Read<UnityEngine.VRTextureUsage>();
			RenderTexture_t5FE7A5B47EF962A0E8D7BEBA05E9FC87D49A1849 * L_196 = V_0;
			ES3Reader_t2780AF8AA61DA2A817115CEF8612AC0E494D03C9 * L_197 = ___reader0;
			NullCheck((ES3Reader_t2780AF8AA61DA2A817115CEF8612AC0E494D03C9 *)L_197);
			int32_t L_198;
			L_198 = GenericVirtFuncInvoker0< int32_t >::Invoke(ES3Reader_Read_TisVRTextureUsage_t3C09DF3DD90B5620BC0AB6F8078DFEF4E607F645_m7DE3966E4815BB13132866CB005EEE5B90FF51C2_RuntimeMethod_var, (ES3Reader_t2780AF8AA61DA2A817115CEF8612AC0E494D03C9 *)L_197);
			NullCheck((RenderTexture_t5FE7A5B47EF962A0E8D7BEBA05E9FC87D49A1849 *)L_196);
			RenderTexture_set_vrUsage_m9AF7F60442E3B933FDF274D801EA074D1A5ECB71((RenderTexture_t5FE7A5B47EF962A0E8D7BEBA05E9FC87D49A1849 *)L_196, (int32_t)L_198, /*hidden argument*/NULL);
			// break;
			goto IL_0721;
		}

IL_06a3:
		{
			// instance.graphicsFormat = reader.Read<UnityEngine.Experimental.Rendering.GraphicsFormat>();
			RenderTexture_t5FE7A5B47EF962A0E8D7BEBA05E9FC87D49A1849 * L_199 = V_0;
			ES3Reader_t2780AF8AA61DA2A817115CEF8612AC0E494D03C9 * L_200 = ___reader0;
			NullCheck((ES3Reader_t2780AF8AA61DA2A817115CEF8612AC0E494D03C9 *)L_200);
			int32_t L_201;
			L_201 = GenericVirtFuncInvoker0< int32_t >::Invoke(ES3Reader_Read_TisGraphicsFormat_t07A3C024BC77B843C53A369D6FC02ABD27D2AB1D_mCBD36004B10F649C93215AB4717F6F0D7118BF7D_RuntimeMethod_var, (ES3Reader_t2780AF8AA61DA2A817115CEF8612AC0E494D03C9 *)L_200);
			NullCheck((RenderTexture_t5FE7A5B47EF962A0E8D7BEBA05E9FC87D49A1849 *)L_199);
			RenderTexture_set_graphicsFormat_mA378AAD8BD876EE96637FF0A80A2AFEA4D852FAB((RenderTexture_t5FE7A5B47EF962A0E8D7BEBA05E9FC87D49A1849 *)L_199, (int32_t)L_201, /*hidden argument*/NULL);
			// break;
			goto IL_0721;
		}

IL_06b1:
		{
			// instance.stencilFormat = reader.Read<UnityEngine.Experimental.Rendering.GraphicsFormat>();
			RenderTexture_t5FE7A5B47EF962A0E8D7BEBA05E9FC87D49A1849 * L_202 = V_0;
			ES3Reader_t2780AF8AA61DA2A817115CEF8612AC0E494D03C9 * L_203 = ___reader0;
			NullCheck((ES3Reader_t2780AF8AA61DA2A817115CEF8612AC0E494D03C9 *)L_203);
			int32_t L_204;
			L_204 = GenericVirtFuncInvoker0< int32_t >::Invoke(ES3Reader_Read_TisGraphicsFormat_t07A3C024BC77B843C53A369D6FC02ABD27D2AB1D_mCBD36004B10F649C93215AB4717F6F0D7118BF7D_RuntimeMethod_var, (ES3Reader_t2780AF8AA61DA2A817115CEF8612AC0E494D03C9 *)L_203);
			NullCheck((RenderTexture_t5FE7A5B47EF962A0E8D7BEBA05E9FC87D49A1849 *)L_202);
			RenderTexture_set_stencilFormat_m7C6E21FCDB7E786D403CFC9775105B050EFF19C7((RenderTexture_t5FE7A5B47EF962A0E8D7BEBA05E9FC87D49A1849 *)L_202, (int32_t)L_204, /*hidden argument*/NULL);
			// break;
			goto IL_0721;
		}

IL_06bf:
		{
			// instance.bindTextureMS = reader.Read<System.Boolean>(ES3Type_bool.Instance);
			RenderTexture_t5FE7A5B47EF962A0E8D7BEBA05E9FC87D49A1849 * L_205 = V_0;
			ES3Reader_t2780AF8AA61DA2A817115CEF8612AC0E494D03C9 * L_206 = ___reader0;
			IL2CPP_RUNTIME_CLASS_INIT(ES3Type_bool_t8F309F7B9CC735FF1DEE68081B6E3CAB367745F4_il2cpp_TypeInfo_var);
			ES3Type_t8FBECB7AE75168648B9524E0C2A38DAD4555421D * L_207 = ((ES3Type_bool_t8F309F7B9CC735FF1DEE68081B6E3CAB367745F4_StaticFields*)il2cpp_codegen_static_fields_for(ES3Type_bool_t8F309F7B9CC735FF1DEE68081B6E3CAB367745F4_il2cpp_TypeInfo_var))->get_Instance_12();
			NullCheck((ES3Reader_t2780AF8AA61DA2A817115CEF8612AC0E494D03C9 *)L_206);
			bool L_208;
			L_208 = GenericVirtFuncInvoker1< bool, ES3Type_t8FBECB7AE75168648B9524E0C2A38DAD4555421D * >::Invoke(ES3Reader_Read_TisBoolean_t07D1E3F34E4813023D64F584DFF7B34C9D922F37_mC6D1B158268FF9B97822FF9F5B37FB1723FEDA22_RuntimeMethod_var, (ES3Reader_t2780AF8AA61DA2A817115CEF8612AC0E494D03C9 *)L_206, (ES3Type_t8FBECB7AE75168648B9524E0C2A38DAD4555421D *)L_207);
			NullCheck((RenderTexture_t5FE7A5B47EF962A0E8D7BEBA05E9FC87D49A1849 *)L_205);
			RenderTexture_set_bindTextureMS_m6C26F6AB2DE8FE81BFCA60C936AA08EA7F1A7177((RenderTexture_t5FE7A5B47EF962A0E8D7BEBA05E9FC87D49A1849 *)L_205, (bool)L_208, /*hidden argument*/NULL);
			// break;
			goto IL_0721;
		}

IL_06d2:
		{
			// instance.useDynamicScale = reader.Read<System.Boolean>(ES3Type_bool.Instance);
			RenderTexture_t5FE7A5B47EF962A0E8D7BEBA05E9FC87D49A1849 * L_209 = V_0;
			ES3Reader_t2780AF8AA61DA2A817115CEF8612AC0E494D03C9 * L_210 = ___reader0;
			IL2CPP_RUNTIME_CLASS_INIT(ES3Type_bool_t8F309F7B9CC735FF1DEE68081B6E3CAB367745F4_il2cpp_TypeInfo_var);
			ES3Type_t8FBECB7AE75168648B9524E0C2A38DAD4555421D * L_211 = ((ES3Type_bool_t8F309F7B9CC735FF1DEE68081B6E3CAB367745F4_StaticFields*)il2cpp_codegen_static_fields_for(ES3Type_bool_t8F309F7B9CC735FF1DEE68081B6E3CAB367745F4_il2cpp_TypeInfo_var))->get_Instance_12();
			NullCheck((ES3Reader_t2780AF8AA61DA2A817115CEF8612AC0E494D03C9 *)L_210);
			bool L_212;
			L_212 = GenericVirtFuncInvoker1< bool, ES3Type_t8FBECB7AE75168648B9524E0C2A38DAD4555421D * >::Invoke(ES3Reader_Read_TisBoolean_t07D1E3F34E4813023D64F584DFF7B34C9D922F37_mC6D1B158268FF9B97822FF9F5B37FB1723FEDA22_RuntimeMethod_var, (ES3Reader_t2780AF8AA61DA2A817115CEF8612AC0E494D03C9 *)L_210, (ES3Type_t8FBECB7AE75168648B9524E0C2A38DAD4555421D *)L_211);
			NullCheck((RenderTexture_t5FE7A5B47EF962A0E8D7BEBA05E9FC87D49A1849 *)L_209);
			RenderTexture_set_useDynamicScale_m8F96571C7EDBEFAB9278E04A3F3EB67067A5AE29((RenderTexture_t5FE7A5B47EF962A0E8D7BEBA05E9FC87D49A1849 *)L_209, (bool)L_212, /*hidden argument*/NULL);
			// break;
			goto IL_0721;
		}

IL_06e5:
		{
			// UnityEngine.RenderTexture.streamingTextureForceLoadAll = reader.Read<System.Boolean>(ES3Type_bool.Instance);
			ES3Reader_t2780AF8AA61DA2A817115CEF8612AC0E494D03C9 * L_213 = ___reader0;
			IL2CPP_RUNTIME_CLASS_INIT(ES3Type_bool_t8F309F7B9CC735FF1DEE68081B6E3CAB367745F4_il2cpp_TypeInfo_var);
			ES3Type_t8FBECB7AE75168648B9524E0C2A38DAD4555421D * L_214 = ((ES3Type_bool_t8F309F7B9CC735FF1DEE68081B6E3CAB367745F4_StaticFields*)il2cpp_codegen_static_fields_for(ES3Type_bool_t8F309F7B9CC735FF1DEE68081B6E3CAB367745F4_il2cpp_TypeInfo_var))->get_Instance_12();
			NullCheck((ES3Reader_t2780AF8AA61DA2A817115CEF8612AC0E494D03C9 *)L_213);
			bool L_215;
			L_215 = GenericVirtFuncInvoker1< bool, ES3Type_t8FBECB7AE75168648B9524E0C2A38DAD4555421D * >::Invoke(ES3Reader_Read_TisBoolean_t07D1E3F34E4813023D64F584DFF7B34C9D922F37_mC6D1B158268FF9B97822FF9F5B37FB1723FEDA22_RuntimeMethod_var, (ES3Reader_t2780AF8AA61DA2A817115CEF8612AC0E494D03C9 *)L_213, (ES3Type_t8FBECB7AE75168648B9524E0C2A38DAD4555421D *)L_214);
			IL2CPP_RUNTIME_CLASS_INIT(Texture_t9FE0218A1EEDF266E8C85879FE123265CACC95AE_il2cpp_TypeInfo_var);
			Texture_set_streamingTextureForceLoadAll_m325117C0830BB9B4316CF41CEE045759FC52B7A3((bool)L_215, /*hidden argument*/NULL);
			// break;
			goto IL_0721;
		}

IL_06f7:
		{
			// UnityEngine.RenderTexture.streamingTextureDiscardUnusedMips = reader.Read<System.Boolean>(ES3Type_bool.Instance);
			ES3Reader_t2780AF8AA61DA2A817115CEF8612AC0E494D03C9 * L_216 = ___reader0;
			IL2CPP_RUNTIME_CLASS_INIT(ES3Type_bool_t8F309F7B9CC735FF1DEE68081B6E3CAB367745F4_il2cpp_TypeInfo_var);
			ES3Type_t8FBECB7AE75168648B9524E0C2A38DAD4555421D * L_217 = ((ES3Type_bool_t8F309F7B9CC735FF1DEE68081B6E3CAB367745F4_StaticFields*)il2cpp_codegen_static_fields_for(ES3Type_bool_t8F309F7B9CC735FF1DEE68081B6E3CAB367745F4_il2cpp_TypeInfo_var))->get_Instance_12();
			NullCheck((ES3Reader_t2780AF8AA61DA2A817115CEF8612AC0E494D03C9 *)L_216);
			bool L_218;
			L_218 = GenericVirtFuncInvoker1< bool, ES3Type_t8FBECB7AE75168648B9524E0C2A38DAD4555421D * >::Invoke(ES3Reader_Read_TisBoolean_t07D1E3F34E4813023D64F584DFF7B34C9D922F37_mC6D1B158268FF9B97822FF9F5B37FB1723FEDA22_RuntimeMethod_var, (ES3Reader_t2780AF8AA61DA2A817115CEF8612AC0E494D03C9 *)L_216, (ES3Type_t8FBECB7AE75168648B9524E0C2A38DAD4555421D *)L_217);
			IL2CPP_RUNTIME_CLASS_INIT(Texture_t9FE0218A1EEDF266E8C85879FE123265CACC95AE_il2cpp_TypeInfo_var);
			Texture_set_streamingTextureDiscardUnusedMips_mE184CE016A8E0319B437D34E0DB61962CE17F5DC((bool)L_218, /*hidden argument*/NULL);
			// break;
			goto IL_0721;
		}

IL_0709:
		{
			// UnityEngine.RenderTexture.allowThreadedTextureCreation = reader.Read<System.Boolean>(ES3Type_bool.Instance);
			ES3Reader_t2780AF8AA61DA2A817115CEF8612AC0E494D03C9 * L_219 = ___reader0;
			IL2CPP_RUNTIME_CLASS_INIT(ES3Type_bool_t8F309F7B9CC735FF1DEE68081B6E3CAB367745F4_il2cpp_TypeInfo_var);
			ES3Type_t8FBECB7AE75168648B9524E0C2A38DAD4555421D * L_220 = ((ES3Type_bool_t8F309F7B9CC735FF1DEE68081B6E3CAB367745F4_StaticFields*)il2cpp_codegen_static_fields_for(ES3Type_bool_t8F309F7B9CC735FF1DEE68081B6E3CAB367745F4_il2cpp_TypeInfo_var))->get_Instance_12();
			NullCheck((ES3Reader_t2780AF8AA61DA2A817115CEF8612AC0E494D03C9 *)L_219);
			bool L_221;
			L_221 = GenericVirtFuncInvoker1< bool, ES3Type_t8FBECB7AE75168648B9524E0C2A38DAD4555421D * >::Invoke(ES3Reader_Read_TisBoolean_t07D1E3F34E4813023D64F584DFF7B34C9D922F37_mC6D1B158268FF9B97822FF9F5B37FB1723FEDA22_RuntimeMethod_var, (ES3Reader_t2780AF8AA61DA2A817115CEF8612AC0E494D03C9 *)L_219, (ES3Type_t8FBECB7AE75168648B9524E0C2A38DAD4555421D *)L_220);
			IL2CPP_RUNTIME_CLASS_INIT(Texture_t9FE0218A1EEDF266E8C85879FE123265CACC95AE_il2cpp_TypeInfo_var);
			Texture_set_allowThreadedTextureCreation_m84D29394912B9CE876023963426256CBEB15A52E((bool)L_221, /*hidden argument*/NULL);
			// break;
			goto IL_0721;
		}

IL_071b:
		{
			// reader.Skip();
			ES3Reader_t2780AF8AA61DA2A817115CEF8612AC0E494D03C9 * L_222 = ___reader0;
			NullCheck((ES3Reader_t2780AF8AA61DA2A817115CEF8612AC0E494D03C9 *)L_222);
			VirtActionInvoker0::Invoke(41 /* System.Void ES3Reader::Skip() */, (ES3Reader_t2780AF8AA61DA2A817115CEF8612AC0E494D03C9 *)L_222);
		}

IL_0721:
		{
			// foreach (string propertyName in reader.Properties)
			RuntimeObject* L_223 = V_1;
			NullCheck((RuntimeObject*)L_223);
			bool L_224;
			L_224 = InterfaceFuncInvoker0< bool >::Invoke(0 /* System.Boolean System.Collections.IEnumerator::MoveNext() */, IEnumerator_t5956F3AFB7ECF1117E3BC5890E7FC7B7F7A04105_il2cpp_TypeInfo_var, (RuntimeObject*)L_223);
			if (L_224)
			{
				goto IL_0018;
			}
		}

IL_072c:
		{
			IL2CPP_LEAVE(0x742, FINALLY_072e);
		}
	} // end try (depth: 1)
	catch(Il2CppExceptionWrapper& e)
	{
		__last_unhandled_exception = (Exception_t *)e.ex;
		goto FINALLY_072e;
	}

FINALLY_072e:
	{ // begin finally (depth: 1)
		{
			RuntimeObject* L_225 = V_1;
			V_4 = (RuntimeObject*)((RuntimeObject*)IsInst((RuntimeObject*)L_225, IDisposable_t099785737FC6A1E3699919A94109383715A8D807_il2cpp_TypeInfo_var));
			RuntimeObject* L_226 = V_4;
			if (!L_226)
			{
				goto IL_0741;
			}
		}

IL_073a:
		{
			RuntimeObject* L_227 = V_4;
			NullCheck((RuntimeObject*)L_227);
			InterfaceActionInvoker0::Invoke(0 /* System.Void System.IDisposable::Dispose() */, IDisposable_t099785737FC6A1E3699919A94109383715A8D807_il2cpp_TypeInfo_var, (RuntimeObject*)L_227);
		}

IL_0741:
		{
			IL2CPP_END_FINALLY(1838)
		}
	} // end finally (depth: 1)
	IL2CPP_CLEANUP(1838)
	{
		IL2CPP_RETHROW_IF_UNHANDLED(Exception_t *)
		IL2CPP_JUMP_TBL(0x742, IL_0742)
	}

IL_0742:
	{
		// }
		return;
	}
}
// System.Void ES3Types.ES3Type_RenderTexture::ReadObject<UnityEngine.ParticleSystem/TextureSheetAnimationModule>(ES3Reader,System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ES3Type_RenderTexture_ReadObject_TisTextureSheetAnimationModule_t66D02BA0838858C4921EFC059CC3412141A8FCF2_m2F46EC078C2C061636F36FD87D7C8895C205B3E6_gshared (ES3Type_RenderTexture_t7B14573C56809AFDC0A1C481D6B61E2146DEF194 * __this, ES3Reader_t2780AF8AA61DA2A817115CEF8612AC0E494D03C9 * ___reader0, RuntimeObject * ___obj1, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ES3Reader_Read_TisAnisotropicFiltering_tAC3D1448B262D5869946CD1CDD2C8DAE3A7A537B_mAF1268AAC3E461D6E0604A19FAF0325873B6EC8A_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ES3Reader_Read_TisBoolean_t07D1E3F34E4813023D64F584DFF7B34C9D922F37_mC6D1B158268FF9B97822FF9F5B37FB1723FEDA22_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ES3Reader_Read_TisFilterMode_tE90A08FD96A142C761463D65E524BCDBFEEE3D19_m9819C2A442797B4060B0D9A80CFA96CFD6102839_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ES3Reader_Read_TisGraphicsFormat_t07A3C024BC77B843C53A369D6FC02ABD27D2AB1D_mCBD36004B10F649C93215AB4717F6F0D7118BF7D_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ES3Reader_Read_TisInt32_tFDE5F8CD43D10453F6A2E0C77FE48C6CC7009046_m2B74AA6627F5B1D21171D56C42F71DE5A7C1B4A6_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ES3Reader_Read_TisRenderTextureDescriptor_t67FF189E1F35AEB5D6C43A2D7103F3A8A8CA0B47_m427886ADAAF96C7BA9BD423544128494F96D69E7_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ES3Reader_Read_TisRenderTextureFormat_t8371287102ED67772EF78229CF4AB9D38C2CD626_mE6358E03407F5C15B58B292C79D4770DE3FAC95A_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ES3Reader_Read_TisRenderTextureMemoryless_t37547D68C2186D2650440F719302CDA4A3BB7F67_m3A980BA15AADBBB8393C3BC88CE17EEDDC89B027_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ES3Reader_Read_TisSingle_tE07797BA3C98D4CA9B5A19413C19A76688AB899E_m4A0416374498BDA042B8EB21E49B72326D6CE5F4_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ES3Reader_Read_TisString_t_m883861F3B58239392073ABF39876826EEB87DF9C_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ES3Reader_Read_TisTextureDimension_tADCCB7C1D30E4D1182651BA9094B4DE61B63EACC_m19EAA3B93D10636C17A62A3D8437349223CFD988_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ES3Reader_Read_TisTextureWrapMode_t86DDA8206E4AA784A1218D0DE3C5F6826D7549EB_m7926E449CD0B8BD56E5BF145DD0CCFE1C567F107_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ES3Reader_Read_TisVRTextureUsage_t3C09DF3DD90B5620BC0AB6F8078DFEF4E607F645_m7DE3966E4815BB13132866CB005EEE5B90FF51C2_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ES3Type_bool_t8F309F7B9CC735FF1DEE68081B6E3CAB367745F4_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ES3Type_float_tF86B773C86731BD9AD79448B860BBB178FE77644_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ES3Type_int_tF64C15D40AD0CC7C15BCD1CEC3C5C6BF837BD167_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ES3Type_string_tC47BFBE3CC816F3C70B51558C68F0C6470C5EFE5_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IDisposable_t099785737FC6A1E3699919A94109383715A8D807_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IEnumerator_t5956F3AFB7ECF1117E3BC5890E7FC7B7F7A04105_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&RenderTexture_t5FE7A5B47EF962A0E8D7BEBA05E9FC87D49A1849_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&String_t_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Texture_t9FE0218A1EEDF266E8C85879FE123265CACC95AE_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral201D9D00BB60DC2318D21CF9902290EFE255D5DC);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral2ADFC3FFF7C52D554F0435A348A5345C9FCD7FF8);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral2E201D1972661439FD3C8523C55723E7E9BCC7DA);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral2EE7B6B0E37E14930BBA497867139BFD0617CE04);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral3A04F86957625CB28FA670EECF997E6BAD45BBE7);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral3BC15E3C2F40466B2DC85C4776499817B8306CBB);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral3F1522C8DB7943F2AE3AA1563D3AC25D9C8B93D1);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral53D3413057D7E52F44470A335C590748745352B1);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral647E0FB2B5E859CC4BD7C73623B82C8EFABA2563);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral65B008F04EC40A696263EF679CF274BD10999A5D);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral71C5F9C3E2F3C81C5BBC7FD313F6938654E61138);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral75C9716749EA210206E3467390B7A11F3F33DDFA);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral7606720A7AEF5939309A8E4FCB8274252FA3D7BF);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral7A4A6E2A7090298F814A9D44C89F8634249BEF07);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral7FF61C3A55BCA1287974D8740F945250B3F0F084);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral83AC9669A9053DD15B9F2E82D2CE2369EFE131BA);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral95F57476C0AA778364404E7CCCD7499BF1BF3757);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral9AB5ADF8A8A53110245466F7C226F7935F5FE95F);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralB49A1DF483856544CEC6018E8C944DB6E16A8D57);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralBA9362732D25B1644B7D8DEC5DF6F036A4A66DE5);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralC959D767B7F0BD38D9DA8A64A4750C3A0972E2A0);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralCD44AC57FFE6CAC7824F4CAA223F1BB8B4CB0D73);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralCE18B047107AA23D1AA9B2ED32D316148E02655F);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralEA8FBF382D8AC9EDB8FFC14A350641B987F5C631);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralEBF5FE0CBF3EEA67902EEA700B7216E3DB0D8E84);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralECAEEB225F8689DE45DEB4FA21CE34E1960B1B50);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralF23E83744C9D6FC70D71B723AAED8006D6780BCB);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralF2AF7DD0BFF41B7B35037F018DAABE7DCF357A7B);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralF38CFAE6A91D072D4453C29FF44D81D459A582F1);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralF3FA58C10BBB9830102605E24AF89DC619908DFA);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralF9EE582B77C320A1F6A3DF72205857C4248BAC79);
		s_Il2CppMethodInitialized = true;
	}
	RenderTexture_t5FE7A5B47EF962A0E8D7BEBA05E9FC87D49A1849 * V_0 = NULL;
	RuntimeObject* V_1 = NULL;
	String_t* V_2 = NULL;
	uint32_t V_3 = 0;
	RuntimeObject* V_4 = NULL;
	Exception_t * __last_unhandled_exception = 0;
	il2cpp::utils::ExceptionSupportStack<int32_t, 1> __leave_targets;
	{
		// var instance = (UnityEngine.RenderTexture)obj;
		RuntimeObject * L_0 = ___obj1;
		V_0 = (RenderTexture_t5FE7A5B47EF962A0E8D7BEBA05E9FC87D49A1849 *)((RenderTexture_t5FE7A5B47EF962A0E8D7BEBA05E9FC87D49A1849 *)Castclass((RuntimeObject*)L_0, RenderTexture_t5FE7A5B47EF962A0E8D7BEBA05E9FC87D49A1849_il2cpp_TypeInfo_var));
		// foreach (string propertyName in reader.Properties)
		ES3Reader_t2780AF8AA61DA2A817115CEF8612AC0E494D03C9 * L_1 = ___reader0;
		NullCheck((ES3Reader_t2780AF8AA61DA2A817115CEF8612AC0E494D03C9 *)L_1);
		ES3ReaderPropertyEnumerator_tFC854F4BE72BFA234682EB1909D92457534A979D * L_2;
		L_2 = VirtFuncInvoker0< ES3ReaderPropertyEnumerator_tFC854F4BE72BFA234682EB1909D92457534A979D * >::Invoke(39 /* ES3Reader/ES3ReaderPropertyEnumerator ES3Reader::get_Properties() */, (ES3Reader_t2780AF8AA61DA2A817115CEF8612AC0E494D03C9 *)L_1);
		NullCheck((ES3ReaderPropertyEnumerator_tFC854F4BE72BFA234682EB1909D92457534A979D *)L_2);
		RuntimeObject* L_3;
		L_3 = ES3ReaderPropertyEnumerator_GetEnumerator_m6C61168655E3736E7847E5CB1CD9BC6B48442FD4((ES3ReaderPropertyEnumerator_tFC854F4BE72BFA234682EB1909D92457534A979D *)L_2, /*hidden argument*/NULL);
		V_1 = (RuntimeObject*)L_3;
	}

IL_0013:
	try
	{ // begin try (depth: 1)
		{
			goto IL_0721;
		}

IL_0018:
		{
			// foreach (string propertyName in reader.Properties)
			RuntimeObject* L_4 = V_1;
			NullCheck((RuntimeObject*)L_4);
			RuntimeObject * L_5;
			L_5 = InterfaceFuncInvoker0< RuntimeObject * >::Invoke(1 /* System.Object System.Collections.IEnumerator::get_Current() */, IEnumerator_t5956F3AFB7ECF1117E3BC5890E7FC7B7F7A04105_il2cpp_TypeInfo_var, (RuntimeObject*)L_4);
			V_2 = (String_t*)((String_t*)Castclass((RuntimeObject*)L_5, String_t_il2cpp_TypeInfo_var));
			String_t* L_6 = V_2;
			if (!L_6)
			{
				goto IL_071b;
			}
		}

IL_002a:
		{
			String_t* L_7 = V_2;
			uint32_t L_8;
			L_8 = U3CPrivateImplementationDetailsU3E_ComputeStringHash_m3ADC1F612F9EE3DD518E6F0023A0DE0EE2B120A7((String_t*)L_7, /*hidden argument*/NULL);
			V_3 = (uint32_t)L_8;
			uint32_t L_9 = V_3;
			if ((!(((uint32_t)L_9) <= ((uint32_t)((int32_t)1508062721)))))
			{
				goto IL_0134;
			}
		}

IL_003c:
		{
			uint32_t L_10 = V_3;
			if ((!(((uint32_t)L_10) <= ((uint32_t)((int32_t)698754697)))))
			{
				goto IL_00b0;
			}
		}

IL_0044:
		{
			uint32_t L_11 = V_3;
			if ((!(((uint32_t)L_11) <= ((uint32_t)((int32_t)472844700)))))
			{
				goto IL_0072;
			}
		}

IL_004c:
		{
			uint32_t L_12 = V_3;
			if ((((int32_t)L_12) == ((int32_t)((int32_t)87590155))))
			{
				goto IL_043c;
			}
		}

IL_0057:
		{
			uint32_t L_13 = V_3;
			if ((((int32_t)L_13) == ((int32_t)((int32_t)301255720))))
			{
				goto IL_02d7;
			}
		}

IL_0062:
		{
			uint32_t L_14 = V_3;
			if ((((int32_t)L_14) == ((int32_t)((int32_t)472844700))))
			{
				goto IL_0283;
			}
		}

IL_006d:
		{
			goto IL_071b;
		}

IL_0072:
		{
			uint32_t L_15 = V_3;
			if ((!(((uint32_t)L_15) <= ((uint32_t)((int32_t)549791583)))))
			{
				goto IL_0095;
			}
		}

IL_007a:
		{
			uint32_t L_16 = V_3;
			if ((((int32_t)L_16) == ((int32_t)((int32_t)533013964))))
			{
				goto IL_03a9;
			}
		}

IL_0085:
		{
			uint32_t L_17 = V_3;
			if ((((int32_t)L_17) == ((int32_t)((int32_t)549791583))))
			{
				goto IL_03be;
			}
		}

IL_0090:
		{
			goto IL_071b;
		}

IL_0095:
		{
			uint32_t L_18 = V_3;
			if ((((int32_t)L_18) == ((int32_t)((int32_t)583346821))))
			{
				goto IL_0394;
			}
		}

IL_00a0:
		{
			uint32_t L_19 = V_3;
			if ((((int32_t)L_19) == ((int32_t)((int32_t)698754697))))
			{
				goto IL_02ec;
			}
		}

IL_00ab:
		{
			goto IL_071b;
		}

IL_00b0:
		{
			uint32_t L_20 = V_3;
			if ((!(((uint32_t)L_20) <= ((uint32_t)((int32_t)1235622516)))))
			{
				goto IL_00f6;
			}
		}

IL_00b8:
		{
			uint32_t L_21 = V_3;
			if ((!(((uint32_t)L_21) <= ((uint32_t)((int32_t)740612720)))))
			{
				goto IL_00db;
			}
		}

IL_00c0:
		{
			uint32_t L_22 = V_3;
			if ((((int32_t)L_22) == ((int32_t)((int32_t)705796271))))
			{
				goto IL_0316;
			}
		}

IL_00cb:
		{
			uint32_t L_23 = V_3;
			if ((((int32_t)L_23) == ((int32_t)((int32_t)740612720))))
			{
				goto IL_03d3;
			}
		}

IL_00d6:
		{
			goto IL_071b;
		}

IL_00db:
		{
			uint32_t L_24 = V_3;
			if ((((int32_t)L_24) == ((int32_t)((int32_t)1059843136))))
			{
				goto IL_0340;
			}
		}

IL_00e6:
		{
			uint32_t L_25 = V_3;
			if ((((int32_t)L_25) == ((int32_t)((int32_t)1235622516))))
			{
				goto IL_036a;
			}
		}

IL_00f1:
		{
			goto IL_071b;
		}

IL_00f6:
		{
			uint32_t L_26 = V_3;
			if ((!(((uint32_t)L_26) <= ((uint32_t)((int32_t)1320492961)))))
			{
				goto IL_0119;
			}
		}

IL_00fe:
		{
			uint32_t L_27 = V_3;
			if ((((int32_t)L_27) == ((int32_t)((int32_t)1310955452))))
			{
				goto IL_0490;
			}
		}

IL_0109:
		{
			uint32_t L_28 = V_3;
			if ((((int32_t)L_28) == ((int32_t)((int32_t)1320492961))))
			{
				goto IL_047b;
			}
		}

IL_0114:
		{
			goto IL_071b;
		}

IL_0119:
		{
			uint32_t L_29 = V_3;
			if ((((int32_t)L_29) == ((int32_t)((int32_t)1458352709))))
			{
				goto IL_0466;
			}
		}

IL_0124:
		{
			uint32_t L_30 = V_3;
			if ((((int32_t)L_30) == ((int32_t)((int32_t)1508062721))))
			{
				goto IL_04a5;
			}
		}

IL_012f:
		{
			goto IL_071b;
		}

IL_0134:
		{
			uint32_t L_31 = V_3;
			if ((!(((uint32_t)L_31) <= ((uint32_t)((int32_t)-1444332543)))))
			{
				goto IL_01c3;
			}
		}

IL_013f:
		{
			uint32_t L_32 = V_3;
			if ((!(((uint32_t)L_32) <= ((uint32_t)((int32_t)2129631044)))))
			{
				goto IL_0185;
			}
		}

IL_0147:
		{
			uint32_t L_33 = V_3;
			if ((!(((uint32_t)L_33) <= ((uint32_t)((int32_t)1640355324)))))
			{
				goto IL_016a;
			}
		}

IL_014f:
		{
			uint32_t L_34 = V_3;
			if ((((int32_t)L_34) == ((int32_t)((int32_t)1560124071))))
			{
				goto IL_04ba;
			}
		}

IL_015a:
		{
			uint32_t L_35 = V_3;
			if ((((int32_t)L_35) == ((int32_t)((int32_t)1640355324))))
			{
				goto IL_0451;
			}
		}

IL_0165:
		{
			goto IL_071b;
		}

IL_016a:
		{
			uint32_t L_36 = V_3;
			if ((((int32_t)L_36) == ((int32_t)((int32_t)1728801507))))
			{
				goto IL_026e;
			}
		}

IL_0175:
		{
			uint32_t L_37 = V_3;
			if ((((int32_t)L_37) == ((int32_t)((int32_t)2129631044))))
			{
				goto IL_03fd;
			}
		}

IL_0180:
		{
			goto IL_071b;
		}

IL_0185:
		{
			uint32_t L_38 = V_3;
			if ((!(((uint32_t)L_38) <= ((uint32_t)((int32_t)-1786286561)))))
			{
				goto IL_01a8;
			}
		}

IL_018d:
		{
			uint32_t L_39 = V_3;
			if ((((int32_t)L_39) == ((int32_t)((int32_t)-1925595674))))
			{
				goto IL_0412;
			}
		}

IL_0198:
		{
			uint32_t L_40 = V_3;
			if ((((int32_t)L_40) == ((int32_t)((int32_t)-1786286561))))
			{
				goto IL_0244;
			}
		}

IL_01a3:
		{
			goto IL_071b;
		}

IL_01a8:
		{
			uint32_t L_41 = V_3;
			if ((((int32_t)L_41) == ((int32_t)((int32_t)-1522491664))))
			{
				goto IL_0298;
			}
		}

IL_01b3:
		{
			uint32_t L_42 = V_3;
			if ((((int32_t)L_42) == ((int32_t)((int32_t)-1444332543))))
			{
				goto IL_0355;
			}
		}

IL_01be:
		{
			goto IL_071b;
		}

IL_01c3:
		{
			uint32_t L_43 = V_3;
			if ((!(((uint32_t)L_43) <= ((uint32_t)((int32_t)-558361902)))))
			{
				goto IL_0206;
			}
		}

IL_01cb:
		{
			uint32_t L_44 = V_3;
			if ((!(((uint32_t)L_44) <= ((uint32_t)((int32_t)-1180859054)))))
			{
				goto IL_01ee;
			}
		}

IL_01d3:
		{
			uint32_t L_45 = V_3;
			if ((((int32_t)L_45) == ((int32_t)((int32_t)-1335745110))))
			{
				goto IL_02c2;
			}
		}

IL_01de:
		{
			uint32_t L_46 = V_3;
			if ((((int32_t)L_46) == ((int32_t)((int32_t)-1180859054))))
			{
				goto IL_02ad;
			}
		}

IL_01e9:
		{
			goto IL_071b;
		}

IL_01ee:
		{
			uint32_t L_47 = V_3;
			if ((((int32_t)L_47) == ((int32_t)((int32_t)-708986046))))
			{
				goto IL_0259;
			}
		}

IL_01f6:
		{
			uint32_t L_48 = V_3;
			if ((((int32_t)L_48) == ((int32_t)((int32_t)-558361902))))
			{
				goto IL_037f;
			}
		}

IL_0201:
		{
			goto IL_071b;
		}

IL_0206:
		{
			uint32_t L_49 = V_3;
			if ((!(((uint32_t)L_49) <= ((uint32_t)((int32_t)-255211260)))))
			{
				goto IL_0229;
			}
		}

IL_020e:
		{
			uint32_t L_50 = V_3;
			if ((((int32_t)L_50) == ((int32_t)((int32_t)-345285761))))
			{
				goto IL_03e8;
			}
		}

IL_0219:
		{
			uint32_t L_51 = V_3;
			if ((((int32_t)L_51) == ((int32_t)((int32_t)-255211260))))
			{
				goto IL_0427;
			}
		}

IL_0224:
		{
			goto IL_071b;
		}

IL_0229:
		{
			uint32_t L_52 = V_3;
			if ((((int32_t)L_52) == ((int32_t)((int32_t)-42086080))))
			{
				goto IL_0301;
			}
		}

IL_0234:
		{
			uint32_t L_53 = V_3;
			if ((((int32_t)L_53) == ((int32_t)((int32_t)-25846038))))
			{
				goto IL_032b;
			}
		}

IL_023f:
		{
			goto IL_071b;
		}

IL_0244:
		{
			String_t* L_54 = V_2;
			bool L_55;
			L_55 = String_op_Equality_m50B3548E4AC232558190B0052877B290AA1D436A((String_t*)L_54, (String_t*)_stringLiteralEBF5FE0CBF3EEA67902EEA700B7216E3DB0D8E84, /*hidden argument*/NULL);
			if (L_55)
			{
				goto IL_04cf;
			}
		}

IL_0254:
		{
			goto IL_071b;
		}

IL_0259:
		{
			String_t* L_56 = V_2;
			bool L_57;
			L_57 = String_op_Equality_m50B3548E4AC232558190B0052877B290AA1D436A((String_t*)L_56, (String_t*)_stringLiteral647E0FB2B5E859CC4BD7C73623B82C8EFABA2563, /*hidden argument*/NULL);
			if (L_57)
			{
				goto IL_04e5;
			}
		}

IL_0269:
		{
			goto IL_071b;
		}

IL_026e:
		{
			String_t* L_58 = V_2;
			bool L_59;
			L_59 = String_op_Equality_m50B3548E4AC232558190B0052877B290AA1D436A((String_t*)L_58, (String_t*)_stringLiteralF9EE582B77C320A1F6A3DF72205857C4248BAC79, /*hidden argument*/NULL);
			if (L_59)
			{
				goto IL_04fb;
			}
		}

IL_027e:
		{
			goto IL_071b;
		}

IL_0283:
		{
			String_t* L_60 = V_2;
			bool L_61;
			L_61 = String_op_Equality_m50B3548E4AC232558190B0052877B290AA1D436A((String_t*)L_60, (String_t*)_stringLiteral53D3413057D7E52F44470A335C590748745352B1, /*hidden argument*/NULL);
			if (L_61)
			{
				goto IL_050c;
			}
		}

IL_0293:
		{
			goto IL_071b;
		}

IL_0298:
		{
			String_t* L_62 = V_2;
			bool L_63;
			L_63 = String_op_Equality_m50B3548E4AC232558190B0052877B290AA1D436A((String_t*)L_62, (String_t*)_stringLiteralC959D767B7F0BD38D9DA8A64A4750C3A0972E2A0, /*hidden argument*/NULL);
			if (L_63)
			{
				goto IL_0522;
			}
		}

IL_02a8:
		{
			goto IL_071b;
		}

IL_02ad:
		{
			String_t* L_64 = V_2;
			bool L_65;
			L_65 = String_op_Equality_m50B3548E4AC232558190B0052877B290AA1D436A((String_t*)L_64, (String_t*)_stringLiteral75C9716749EA210206E3467390B7A11F3F33DDFA, /*hidden argument*/NULL);
			if (L_65)
			{
				goto IL_0533;
			}
		}

IL_02bd:
		{
			goto IL_071b;
		}

IL_02c2:
		{
			String_t* L_66 = V_2;
			bool L_67;
			L_67 = String_op_Equality_m50B3548E4AC232558190B0052877B290AA1D436A((String_t*)L_66, (String_t*)_stringLiteral7606720A7AEF5939309A8E4FCB8274252FA3D7BF, /*hidden argument*/NULL);
			if (L_67)
			{
				goto IL_0544;
			}
		}

IL_02d2:
		{
			goto IL_071b;
		}

IL_02d7:
		{
			String_t* L_68 = V_2;
			bool L_69;
			L_69 = String_op_Equality_m50B3548E4AC232558190B0052877B290AA1D436A((String_t*)L_68, (String_t*)_stringLiteral71C5F9C3E2F3C81C5BBC7FD313F6938654E61138, /*hidden argument*/NULL);
			if (L_69)
			{
				goto IL_055a;
			}
		}

IL_02e7:
		{
			goto IL_071b;
		}

IL_02ec:
		{
			String_t* L_70 = V_2;
			bool L_71;
			L_71 = String_op_Equality_m50B3548E4AC232558190B0052877B290AA1D436A((String_t*)L_70, (String_t*)_stringLiteral3F1522C8DB7943F2AE3AA1563D3AC25D9C8B93D1, /*hidden argument*/NULL);
			if (L_71)
			{
				goto IL_0570;
			}
		}

IL_02fc:
		{
			goto IL_071b;
		}

IL_0301:
		{
			String_t* L_72 = V_2;
			bool L_73;
			L_73 = String_op_Equality_m50B3548E4AC232558190B0052877B290AA1D436A((String_t*)L_72, (String_t*)_stringLiteralF23E83744C9D6FC70D71B723AAED8006D6780BCB, /*hidden argument*/NULL);
			if (L_73)
			{
				goto IL_0586;
			}
		}

IL_0311:
		{
			goto IL_071b;
		}

IL_0316:
		{
			String_t* L_74 = V_2;
			bool L_75;
			L_75 = String_op_Equality_m50B3548E4AC232558190B0052877B290AA1D436A((String_t*)L_74, (String_t*)_stringLiteralB49A1DF483856544CEC6018E8C944DB6E16A8D57, /*hidden argument*/NULL);
			if (L_75)
			{
				goto IL_059c;
			}
		}

IL_0326:
		{
			goto IL_071b;
		}

IL_032b:
		{
			String_t* L_76 = V_2;
			bool L_77;
			L_77 = String_op_Equality_m50B3548E4AC232558190B0052877B290AA1D436A((String_t*)L_76, (String_t*)_stringLiteral3A04F86957625CB28FA670EECF997E6BAD45BBE7, /*hidden argument*/NULL);
			if (L_77)
			{
				goto IL_05b2;
			}
		}

IL_033b:
		{
			goto IL_071b;
		}

IL_0340:
		{
			String_t* L_78 = V_2;
			bool L_79;
			L_79 = String_op_Equality_m50B3548E4AC232558190B0052877B290AA1D436A((String_t*)L_78, (String_t*)_stringLiteral7A4A6E2A7090298F814A9D44C89F8634249BEF07, /*hidden argument*/NULL);
			if (L_79)
			{
				goto IL_05c8;
			}
		}

IL_0350:
		{
			goto IL_071b;
		}

IL_0355:
		{
			String_t* L_80 = V_2;
			bool L_81;
			L_81 = String_op_Equality_m50B3548E4AC232558190B0052877B290AA1D436A((String_t*)L_80, (String_t*)_stringLiteralF3FA58C10BBB9830102605E24AF89DC619908DFA, /*hidden argument*/NULL);
			if (L_81)
			{
				goto IL_05d9;
			}
		}

IL_0365:
		{
			goto IL_071b;
		}

IL_036a:
		{
			String_t* L_82 = V_2;
			bool L_83;
			L_83 = String_op_Equality_m50B3548E4AC232558190B0052877B290AA1D436A((String_t*)L_82, (String_t*)_stringLiteralBA9362732D25B1644B7D8DEC5DF6F036A4A66DE5, /*hidden argument*/NULL);
			if (L_83)
			{
				goto IL_05ee;
			}
		}

IL_037a:
		{
			goto IL_071b;
		}

IL_037f:
		{
			String_t* L_84 = V_2;
			bool L_85;
			L_85 = String_op_Equality_m50B3548E4AC232558190B0052877B290AA1D436A((String_t*)L_84, (String_t*)_stringLiteral95F57476C0AA778364404E7CCCD7499BF1BF3757, /*hidden argument*/NULL);
			if (L_85)
			{
				goto IL_05fe;
			}
		}

IL_038f:
		{
			goto IL_071b;
		}

IL_0394:
		{
			String_t* L_86 = V_2;
			bool L_87;
			L_87 = String_op_Equality_m50B3548E4AC232558190B0052877B290AA1D436A((String_t*)L_86, (String_t*)_stringLiteral9AB5ADF8A8A53110245466F7C226F7935F5FE95F, /*hidden argument*/NULL);
			if (L_87)
			{
				goto IL_060f;
			}
		}

IL_03a4:
		{
			goto IL_071b;
		}

IL_03a9:
		{
			String_t* L_88 = V_2;
			bool L_89;
			L_89 = String_op_Equality_m50B3548E4AC232558190B0052877B290AA1D436A((String_t*)L_88, (String_t*)_stringLiteralEA8FBF382D8AC9EDB8FFC14A350641B987F5C631, /*hidden argument*/NULL);
			if (L_89)
			{
				goto IL_0620;
			}
		}

IL_03b9:
		{
			goto IL_071b;
		}

IL_03be:
		{
			String_t* L_90 = V_2;
			bool L_91;
			L_91 = String_op_Equality_m50B3548E4AC232558190B0052877B290AA1D436A((String_t*)L_90, (String_t*)_stringLiteral201D9D00BB60DC2318D21CF9902290EFE255D5DC, /*hidden argument*/NULL);
			if (L_91)
			{
				goto IL_0631;
			}
		}

IL_03ce:
		{
			goto IL_071b;
		}

IL_03d3:
		{
			String_t* L_92 = V_2;
			bool L_93;
			L_93 = String_op_Equality_m50B3548E4AC232558190B0052877B290AA1D436A((String_t*)L_92, (String_t*)_stringLiteral65B008F04EC40A696263EF679CF274BD10999A5D, /*hidden argument*/NULL);
			if (L_93)
			{
				goto IL_0642;
			}
		}

IL_03e3:
		{
			goto IL_071b;
		}

IL_03e8:
		{
			String_t* L_94 = V_2;
			bool L_95;
			L_95 = String_op_Equality_m50B3548E4AC232558190B0052877B290AA1D436A((String_t*)L_94, (String_t*)_stringLiteralF38CFAE6A91D072D4453C29FF44D81D459A582F1, /*hidden argument*/NULL);
			if (L_95)
			{
				goto IL_0653;
			}
		}

IL_03f8:
		{
			goto IL_071b;
		}

IL_03fd:
		{
			String_t* L_96 = V_2;
			bool L_97;
			L_97 = String_op_Equality_m50B3548E4AC232558190B0052877B290AA1D436A((String_t*)L_96, (String_t*)_stringLiteral3BC15E3C2F40466B2DC85C4776499817B8306CBB, /*hidden argument*/NULL);
			if (L_97)
			{
				goto IL_0669;
			}
		}

IL_040d:
		{
			goto IL_071b;
		}

IL_0412:
		{
			String_t* L_98 = V_2;
			bool L_99;
			L_99 = String_op_Equality_m50B3548E4AC232558190B0052877B290AA1D436A((String_t*)L_98, (String_t*)_stringLiteralCE18B047107AA23D1AA9B2ED32D316148E02655F, /*hidden argument*/NULL);
			if (L_99)
			{
				goto IL_067f;
			}
		}

IL_0422:
		{
			goto IL_071b;
		}

IL_0427:
		{
			String_t* L_100 = V_2;
			bool L_101;
			L_101 = String_op_Equality_m50B3548E4AC232558190B0052877B290AA1D436A((String_t*)L_100, (String_t*)_stringLiteral83AC9669A9053DD15B9F2E82D2CE2369EFE131BA, /*hidden argument*/NULL);
			if (L_101)
			{
				goto IL_0695;
			}
		}

IL_0437:
		{
			goto IL_071b;
		}

IL_043c:
		{
			String_t* L_102 = V_2;
			bool L_103;
			L_103 = String_op_Equality_m50B3548E4AC232558190B0052877B290AA1D436A((String_t*)L_102, (String_t*)_stringLiteralECAEEB225F8689DE45DEB4FA21CE34E1960B1B50, /*hidden argument*/NULL);
			if (L_103)
			{
				goto IL_06a3;
			}
		}

IL_044c:
		{
			goto IL_071b;
		}

IL_0451:
		{
			String_t* L_104 = V_2;
			bool L_105;
			L_105 = String_op_Equality_m50B3548E4AC232558190B0052877B290AA1D436A((String_t*)L_104, (String_t*)_stringLiteral2EE7B6B0E37E14930BBA497867139BFD0617CE04, /*hidden argument*/NULL);
			if (L_105)
			{
				goto IL_06b1;
			}
		}

IL_0461:
		{
			goto IL_071b;
		}

IL_0466:
		{
			String_t* L_106 = V_2;
			bool L_107;
			L_107 = String_op_Equality_m50B3548E4AC232558190B0052877B290AA1D436A((String_t*)L_106, (String_t*)_stringLiteralF2AF7DD0BFF41B7B35037F018DAABE7DCF357A7B, /*hidden argument*/NULL);
			if (L_107)
			{
				goto IL_06bf;
			}
		}

IL_0476:
		{
			goto IL_071b;
		}

IL_047b:
		{
			String_t* L_108 = V_2;
			bool L_109;
			L_109 = String_op_Equality_m50B3548E4AC232558190B0052877B290AA1D436A((String_t*)L_108, (String_t*)_stringLiteral7FF61C3A55BCA1287974D8740F945250B3F0F084, /*hidden argument*/NULL);
			if (L_109)
			{
				goto IL_06d2;
			}
		}

IL_048b:
		{
			goto IL_071b;
		}

IL_0490:
		{
			String_t* L_110 = V_2;
			bool L_111;
			L_111 = String_op_Equality_m50B3548E4AC232558190B0052877B290AA1D436A((String_t*)L_110, (String_t*)_stringLiteral2ADFC3FFF7C52D554F0435A348A5345C9FCD7FF8, /*hidden argument*/NULL);
			if (L_111)
			{
				goto IL_06e5;
			}
		}

IL_04a0:
		{
			goto IL_071b;
		}

IL_04a5:
		{
			String_t* L_112 = V_2;
			bool L_113;
			L_113 = String_op_Equality_m50B3548E4AC232558190B0052877B290AA1D436A((String_t*)L_112, (String_t*)_stringLiteral2E201D1972661439FD3C8523C55723E7E9BCC7DA, /*hidden argument*/NULL);
			if (L_113)
			{
				goto IL_06f7;
			}
		}

IL_04b5:
		{
			goto IL_071b;
		}

IL_04ba:
		{
			String_t* L_114 = V_2;
			bool L_115;
			L_115 = String_op_Equality_m50B3548E4AC232558190B0052877B290AA1D436A((String_t*)L_114, (String_t*)_stringLiteralCD44AC57FFE6CAC7824F4CAA223F1BB8B4CB0D73, /*hidden argument*/NULL);
			if (L_115)
			{
				goto IL_0709;
			}
		}

IL_04ca:
		{
			goto IL_071b;
		}

IL_04cf:
		{
			// instance.width = reader.Read<System.Int32>(ES3Type_int.Instance);
			RenderTexture_t5FE7A5B47EF962A0E8D7BEBA05E9FC87D49A1849 * L_116 = V_0;
			ES3Reader_t2780AF8AA61DA2A817115CEF8612AC0E494D03C9 * L_117 = ___reader0;
			IL2CPP_RUNTIME_CLASS_INIT(ES3Type_int_tF64C15D40AD0CC7C15BCD1CEC3C5C6BF837BD167_il2cpp_TypeInfo_var);
			ES3Type_t8FBECB7AE75168648B9524E0C2A38DAD4555421D * L_118 = ((ES3Type_int_tF64C15D40AD0CC7C15BCD1CEC3C5C6BF837BD167_StaticFields*)il2cpp_codegen_static_fields_for(ES3Type_int_tF64C15D40AD0CC7C15BCD1CEC3C5C6BF837BD167_il2cpp_TypeInfo_var))->get_Instance_12();
			NullCheck((ES3Reader_t2780AF8AA61DA2A817115CEF8612AC0E494D03C9 *)L_117);
			int32_t L_119;
			L_119 = GenericVirtFuncInvoker1< int32_t, ES3Type_t8FBECB7AE75168648B9524E0C2A38DAD4555421D * >::Invoke(ES3Reader_Read_TisInt32_tFDE5F8CD43D10453F6A2E0C77FE48C6CC7009046_m2B74AA6627F5B1D21171D56C42F71DE5A7C1B4A6_RuntimeMethod_var, (ES3Reader_t2780AF8AA61DA2A817115CEF8612AC0E494D03C9 *)L_117, (ES3Type_t8FBECB7AE75168648B9524E0C2A38DAD4555421D *)L_118);
			NullCheck((Texture_t9FE0218A1EEDF266E8C85879FE123265CACC95AE *)L_116);
			VirtActionInvoker1< int32_t >::Invoke(6 /* System.Void UnityEngine.Texture::set_width(System.Int32) */, (Texture_t9FE0218A1EEDF266E8C85879FE123265CACC95AE *)L_116, (int32_t)L_119);
			// break;
			goto IL_0721;
		}

IL_04e5:
		{
			// instance.height = reader.Read<System.Int32>(ES3Type_int.Instance);
			RenderTexture_t5FE7A5B47EF962A0E8D7BEBA05E9FC87D49A1849 * L_120 = V_0;
			ES3Reader_t2780AF8AA61DA2A817115CEF8612AC0E494D03C9 * L_121 = ___reader0;
			IL2CPP_RUNTIME_CLASS_INIT(ES3Type_int_tF64C15D40AD0CC7C15BCD1CEC3C5C6BF837BD167_il2cpp_TypeInfo_var);
			ES3Type_t8FBECB7AE75168648B9524E0C2A38DAD4555421D * L_122 = ((ES3Type_int_tF64C15D40AD0CC7C15BCD1CEC3C5C6BF837BD167_StaticFields*)il2cpp_codegen_static_fields_for(ES3Type_int_tF64C15D40AD0CC7C15BCD1CEC3C5C6BF837BD167_il2cpp_TypeInfo_var))->get_Instance_12();
			NullCheck((ES3Reader_t2780AF8AA61DA2A817115CEF8612AC0E494D03C9 *)L_121);
			int32_t L_123;
			L_123 = GenericVirtFuncInvoker1< int32_t, ES3Type_t8FBECB7AE75168648B9524E0C2A38DAD4555421D * >::Invoke(ES3Reader_Read_TisInt32_tFDE5F8CD43D10453F6A2E0C77FE48C6CC7009046_m2B74AA6627F5B1D21171D56C42F71DE5A7C1B4A6_RuntimeMethod_var, (ES3Reader_t2780AF8AA61DA2A817115CEF8612AC0E494D03C9 *)L_121, (ES3Type_t8FBECB7AE75168648B9524E0C2A38DAD4555421D *)L_122);
			NullCheck((Texture_t9FE0218A1EEDF266E8C85879FE123265CACC95AE *)L_120);
			VirtActionInvoker1< int32_t >::Invoke(8 /* System.Void UnityEngine.Texture::set_height(System.Int32) */, (Texture_t9FE0218A1EEDF266E8C85879FE123265CACC95AE *)L_120, (int32_t)L_123);
			// break;
			goto IL_0721;
		}

IL_04fb:
		{
			// instance.dimension = reader.Read<UnityEngine.Rendering.TextureDimension>();
			RenderTexture_t5FE7A5B47EF962A0E8D7BEBA05E9FC87D49A1849 * L_124 = V_0;
			ES3Reader_t2780AF8AA61DA2A817115CEF8612AC0E494D03C9 * L_125 = ___reader0;
			NullCheck((ES3Reader_t2780AF8AA61DA2A817115CEF8612AC0E494D03C9 *)L_125);
			int32_t L_126;
			L_126 = GenericVirtFuncInvoker0< int32_t >::Invoke(ES3Reader_Read_TisTextureDimension_tADCCB7C1D30E4D1182651BA9094B4DE61B63EACC_m19EAA3B93D10636C17A62A3D8437349223CFD988_RuntimeMethod_var, (ES3Reader_t2780AF8AA61DA2A817115CEF8612AC0E494D03C9 *)L_125);
			NullCheck((Texture_t9FE0218A1EEDF266E8C85879FE123265CACC95AE *)L_124);
			VirtActionInvoker1< int32_t >::Invoke(10 /* System.Void UnityEngine.Texture::set_dimension(UnityEngine.Rendering.TextureDimension) */, (Texture_t9FE0218A1EEDF266E8C85879FE123265CACC95AE *)L_124, (int32_t)L_126);
			// break;
			goto IL_0721;
		}

IL_050c:
		{
			// instance.useMipMap = reader.Read<System.Boolean>(ES3Type_bool.Instance);
			RenderTexture_t5FE7A5B47EF962A0E8D7BEBA05E9FC87D49A1849 * L_127 = V_0;
			ES3Reader_t2780AF8AA61DA2A817115CEF8612AC0E494D03C9 * L_128 = ___reader0;
			IL2CPP_RUNTIME_CLASS_INIT(ES3Type_bool_t8F309F7B9CC735FF1DEE68081B6E3CAB367745F4_il2cpp_TypeInfo_var);
			ES3Type_t8FBECB7AE75168648B9524E0C2A38DAD4555421D * L_129 = ((ES3Type_bool_t8F309F7B9CC735FF1DEE68081B6E3CAB367745F4_StaticFields*)il2cpp_codegen_static_fields_for(ES3Type_bool_t8F309F7B9CC735FF1DEE68081B6E3CAB367745F4_il2cpp_TypeInfo_var))->get_Instance_12();
			NullCheck((ES3Reader_t2780AF8AA61DA2A817115CEF8612AC0E494D03C9 *)L_128);
			bool L_130;
			L_130 = GenericVirtFuncInvoker1< bool, ES3Type_t8FBECB7AE75168648B9524E0C2A38DAD4555421D * >::Invoke(ES3Reader_Read_TisBoolean_t07D1E3F34E4813023D64F584DFF7B34C9D922F37_mC6D1B158268FF9B97822FF9F5B37FB1723FEDA22_RuntimeMethod_var, (ES3Reader_t2780AF8AA61DA2A817115CEF8612AC0E494D03C9 *)L_128, (ES3Type_t8FBECB7AE75168648B9524E0C2A38DAD4555421D *)L_129);
			NullCheck((RenderTexture_t5FE7A5B47EF962A0E8D7BEBA05E9FC87D49A1849 *)L_127);
			RenderTexture_set_useMipMap_mAE1437C3D7D21441891A612C3B812EE9C379F126((RenderTexture_t5FE7A5B47EF962A0E8D7BEBA05E9FC87D49A1849 *)L_127, (bool)L_130, /*hidden argument*/NULL);
			// break;
			goto IL_0721;
		}

IL_0522:
		{
			// instance.memorylessMode = reader.Read<UnityEngine.RenderTextureMemoryless>();
			RenderTexture_t5FE7A5B47EF962A0E8D7BEBA05E9FC87D49A1849 * L_131 = V_0;
			ES3Reader_t2780AF8AA61DA2A817115CEF8612AC0E494D03C9 * L_132 = ___reader0;
			NullCheck((ES3Reader_t2780AF8AA61DA2A817115CEF8612AC0E494D03C9 *)L_132);
			int32_t L_133;
			L_133 = GenericVirtFuncInvoker0< int32_t >::Invoke(ES3Reader_Read_TisRenderTextureMemoryless_t37547D68C2186D2650440F719302CDA4A3BB7F67_m3A980BA15AADBBB8393C3BC88CE17EEDDC89B027_RuntimeMethod_var, (ES3Reader_t2780AF8AA61DA2A817115CEF8612AC0E494D03C9 *)L_132);
			NullCheck((RenderTexture_t5FE7A5B47EF962A0E8D7BEBA05E9FC87D49A1849 *)L_131);
			RenderTexture_set_memorylessMode_mE48B2A38E9374A7BB419383B438790347474EFC1((RenderTexture_t5FE7A5B47EF962A0E8D7BEBA05E9FC87D49A1849 *)L_131, (int32_t)L_133, /*hidden argument*/NULL);
			// break;
			goto IL_0721;
		}

IL_0533:
		{
			// instance.format = reader.Read<UnityEngine.RenderTextureFormat>();
			RenderTexture_t5FE7A5B47EF962A0E8D7BEBA05E9FC87D49A1849 * L_134 = V_0;
			ES3Reader_t2780AF8AA61DA2A817115CEF8612AC0E494D03C9 * L_135 = ___reader0;
			NullCheck((ES3Reader_t2780AF8AA61DA2A817115CEF8612AC0E494D03C9 *)L_135);
			int32_t L_136;
			L_136 = GenericVirtFuncInvoker0< int32_t >::Invoke(ES3Reader_Read_TisRenderTextureFormat_t8371287102ED67772EF78229CF4AB9D38C2CD626_mE6358E03407F5C15B58B292C79D4770DE3FAC95A_RuntimeMethod_var, (ES3Reader_t2780AF8AA61DA2A817115CEF8612AC0E494D03C9 *)L_135);
			NullCheck((RenderTexture_t5FE7A5B47EF962A0E8D7BEBA05E9FC87D49A1849 *)L_134);
			RenderTexture_set_format_m32D42DC33DB151B69E81D0D93F36DE7450CFC23D((RenderTexture_t5FE7A5B47EF962A0E8D7BEBA05E9FC87D49A1849 *)L_134, (int32_t)L_136, /*hidden argument*/NULL);
			// break;
			goto IL_0721;
		}

IL_0544:
		{
			// instance.autoGenerateMips = reader.Read<System.Boolean>(ES3Type_bool.Instance);
			RenderTexture_t5FE7A5B47EF962A0E8D7BEBA05E9FC87D49A1849 * L_137 = V_0;
			ES3Reader_t2780AF8AA61DA2A817115CEF8612AC0E494D03C9 * L_138 = ___reader0;
			IL2CPP_RUNTIME_CLASS_INIT(ES3Type_bool_t8F309F7B9CC735FF1DEE68081B6E3CAB367745F4_il2cpp_TypeInfo_var);
			ES3Type_t8FBECB7AE75168648B9524E0C2A38DAD4555421D * L_139 = ((ES3Type_bool_t8F309F7B9CC735FF1DEE68081B6E3CAB367745F4_StaticFields*)il2cpp_codegen_static_fields_for(ES3Type_bool_t8F309F7B9CC735FF1DEE68081B6E3CAB367745F4_il2cpp_TypeInfo_var))->get_Instance_12();
			NullCheck((ES3Reader_t2780AF8AA61DA2A817115CEF8612AC0E494D03C9 *)L_138);
			bool L_140;
			L_140 = GenericVirtFuncInvoker1< bool, ES3Type_t8FBECB7AE75168648B9524E0C2A38DAD4555421D * >::Invoke(ES3Reader_Read_TisBoolean_t07D1E3F34E4813023D64F584DFF7B34C9D922F37_mC6D1B158268FF9B97822FF9F5B37FB1723FEDA22_RuntimeMethod_var, (ES3Reader_t2780AF8AA61DA2A817115CEF8612AC0E494D03C9 *)L_138, (ES3Type_t8FBECB7AE75168648B9524E0C2A38DAD4555421D *)L_139);
			NullCheck((RenderTexture_t5FE7A5B47EF962A0E8D7BEBA05E9FC87D49A1849 *)L_137);
			RenderTexture_set_autoGenerateMips_m0F02D60D4C4D4790B354451732F2DA6BA12D2E63((RenderTexture_t5FE7A5B47EF962A0E8D7BEBA05E9FC87D49A1849 *)L_137, (bool)L_140, /*hidden argument*/NULL);
			// break;
			goto IL_0721;
		}

IL_055a:
		{
			// instance.volumeDepth = reader.Read<System.Int32>(ES3Type_int.Instance);
			RenderTexture_t5FE7A5B47EF962A0E8D7BEBA05E9FC87D49A1849 * L_141 = V_0;
			ES3Reader_t2780AF8AA61DA2A817115CEF8612AC0E494D03C9 * L_142 = ___reader0;
			IL2CPP_RUNTIME_CLASS_INIT(ES3Type_int_tF64C15D40AD0CC7C15BCD1CEC3C5C6BF837BD167_il2cpp_TypeInfo_var);
			ES3Type_t8FBECB7AE75168648B9524E0C2A38DAD4555421D * L_143 = ((ES3Type_int_tF64C15D40AD0CC7C15BCD1CEC3C5C6BF837BD167_StaticFields*)il2cpp_codegen_static_fields_for(ES3Type_int_tF64C15D40AD0CC7C15BCD1CEC3C5C6BF837BD167_il2cpp_TypeInfo_var))->get_Instance_12();
			NullCheck((ES3Reader_t2780AF8AA61DA2A817115CEF8612AC0E494D03C9 *)L_142);
			int32_t L_144;
			L_144 = GenericVirtFuncInvoker1< int32_t, ES3Type_t8FBECB7AE75168648B9524E0C2A38DAD4555421D * >::Invoke(ES3Reader_Read_TisInt32_tFDE5F8CD43D10453F6A2E0C77FE48C6CC7009046_m2B74AA6627F5B1D21171D56C42F71DE5A7C1B4A6_RuntimeMethod_var, (ES3Reader_t2780AF8AA61DA2A817115CEF8612AC0E494D03C9 *)L_142, (ES3Type_t8FBECB7AE75168648B9524E0C2A38DAD4555421D *)L_143);
			NullCheck((RenderTexture_t5FE7A5B47EF962A0E8D7BEBA05E9FC87D49A1849 *)L_141);
			RenderTexture_set_volumeDepth_m01D7BD50386DDAE777CE3CB9B60FDD7DE798AC93((RenderTexture_t5FE7A5B47EF962A0E8D7BEBA05E9FC87D49A1849 *)L_141, (int32_t)L_144, /*hidden argument*/NULL);
			// break;
			goto IL_0721;
		}

IL_0570:
		{
			// instance.antiAliasing = reader.Read<System.Int32>(ES3Type_int.Instance);
			RenderTexture_t5FE7A5B47EF962A0E8D7BEBA05E9FC87D49A1849 * L_145 = V_0;
			ES3Reader_t2780AF8AA61DA2A817115CEF8612AC0E494D03C9 * L_146 = ___reader0;
			IL2CPP_RUNTIME_CLASS_INIT(ES3Type_int_tF64C15D40AD0CC7C15BCD1CEC3C5C6BF837BD167_il2cpp_TypeInfo_var);
			ES3Type_t8FBECB7AE75168648B9524E0C2A38DAD4555421D * L_147 = ((ES3Type_int_tF64C15D40AD0CC7C15BCD1CEC3C5C6BF837BD167_StaticFields*)il2cpp_codegen_static_fields_for(ES3Type_int_tF64C15D40AD0CC7C15BCD1CEC3C5C6BF837BD167_il2cpp_TypeInfo_var))->get_Instance_12();
			NullCheck((ES3Reader_t2780AF8AA61DA2A817115CEF8612AC0E494D03C9 *)L_146);
			int32_t L_148;
			L_148 = GenericVirtFuncInvoker1< int32_t, ES3Type_t8FBECB7AE75168648B9524E0C2A38DAD4555421D * >::Invoke(ES3Reader_Read_TisInt32_tFDE5F8CD43D10453F6A2E0C77FE48C6CC7009046_m2B74AA6627F5B1D21171D56C42F71DE5A7C1B4A6_RuntimeMethod_var, (ES3Reader_t2780AF8AA61DA2A817115CEF8612AC0E494D03C9 *)L_146, (ES3Type_t8FBECB7AE75168648B9524E0C2A38DAD4555421D *)L_147);
			NullCheck((RenderTexture_t5FE7A5B47EF962A0E8D7BEBA05E9FC87D49A1849 *)L_145);
			RenderTexture_set_antiAliasing_m4D37900B7E23CA0D33F109DB8DF21265DB70C38F((RenderTexture_t5FE7A5B47EF962A0E8D7BEBA05E9FC87D49A1849 *)L_145, (int32_t)L_148, /*hidden argument*/NULL);
			// break;
			goto IL_0721;
		}

IL_0586:
		{
			// instance.enableRandomWrite = reader.Read<System.Boolean>(ES3Type_bool.Instance);
			RenderTexture_t5FE7A5B47EF962A0E8D7BEBA05E9FC87D49A1849 * L_149 = V_0;
			ES3Reader_t2780AF8AA61DA2A817115CEF8612AC0E494D03C9 * L_150 = ___reader0;
			IL2CPP_RUNTIME_CLASS_INIT(ES3Type_bool_t8F309F7B9CC735FF1DEE68081B6E3CAB367745F4_il2cpp_TypeInfo_var);
			ES3Type_t8FBECB7AE75168648B9524E0C2A38DAD4555421D * L_151 = ((ES3Type_bool_t8F309F7B9CC735FF1DEE68081B6E3CAB367745F4_StaticFields*)il2cpp_codegen_static_fields_for(ES3Type_bool_t8F309F7B9CC735FF1DEE68081B6E3CAB367745F4_il2cpp_TypeInfo_var))->get_Instance_12();
			NullCheck((ES3Reader_t2780AF8AA61DA2A817115CEF8612AC0E494D03C9 *)L_150);
			bool L_152;
			L_152 = GenericVirtFuncInvoker1< bool, ES3Type_t8FBECB7AE75168648B9524E0C2A38DAD4555421D * >::Invoke(ES3Reader_Read_TisBoolean_t07D1E3F34E4813023D64F584DFF7B34C9D922F37_mC6D1B158268FF9B97822FF9F5B37FB1723FEDA22_RuntimeMethod_var, (ES3Reader_t2780AF8AA61DA2A817115CEF8612AC0E494D03C9 *)L_150, (ES3Type_t8FBECB7AE75168648B9524E0C2A38DAD4555421D *)L_151);
			NullCheck((RenderTexture_t5FE7A5B47EF962A0E8D7BEBA05E9FC87D49A1849 *)L_149);
			RenderTexture_set_enableRandomWrite_m024F49DB3CA3B02FA0EEBB3EACB37E6228CAA183((RenderTexture_t5FE7A5B47EF962A0E8D7BEBA05E9FC87D49A1849 *)L_149, (bool)L_152, /*hidden argument*/NULL);
			// break;
			goto IL_0721;
		}

IL_059c:
		{
			// instance.isPowerOfTwo = reader.Read<System.Boolean>(ES3Type_bool.Instance);
			RenderTexture_t5FE7A5B47EF962A0E8D7BEBA05E9FC87D49A1849 * L_153 = V_0;
			ES3Reader_t2780AF8AA61DA2A817115CEF8612AC0E494D03C9 * L_154 = ___reader0;
			IL2CPP_RUNTIME_CLASS_INIT(ES3Type_bool_t8F309F7B9CC735FF1DEE68081B6E3CAB367745F4_il2cpp_TypeInfo_var);
			ES3Type_t8FBECB7AE75168648B9524E0C2A38DAD4555421D * L_155 = ((ES3Type_bool_t8F309F7B9CC735FF1DEE68081B6E3CAB367745F4_StaticFields*)il2cpp_codegen_static_fields_for(ES3Type_bool_t8F309F7B9CC735FF1DEE68081B6E3CAB367745F4_il2cpp_TypeInfo_var))->get_Instance_12();
			NullCheck((ES3Reader_t2780AF8AA61DA2A817115CEF8612AC0E494D03C9 *)L_154);
			bool L_156;
			L_156 = GenericVirtFuncInvoker1< bool, ES3Type_t8FBECB7AE75168648B9524E0C2A38DAD4555421D * >::Invoke(ES3Reader_Read_TisBoolean_t07D1E3F34E4813023D64F584DFF7B34C9D922F37_mC6D1B158268FF9B97822FF9F5B37FB1723FEDA22_RuntimeMethod_var, (ES3Reader_t2780AF8AA61DA2A817115CEF8612AC0E494D03C9 *)L_154, (ES3Type_t8FBECB7AE75168648B9524E0C2A38DAD4555421D *)L_155);
			NullCheck((RenderTexture_t5FE7A5B47EF962A0E8D7BEBA05E9FC87D49A1849 *)L_153);
			RenderTexture_set_isPowerOfTwo_mA6D34F610DF27C40422DF5815892B45C656F1317((RenderTexture_t5FE7A5B47EF962A0E8D7BEBA05E9FC87D49A1849 *)L_153, (bool)L_156, /*hidden argument*/NULL);
			// break;
			goto IL_0721;
		}

IL_05b2:
		{
			// instance.depth = reader.Read<System.Int32>(ES3Type_int.Instance);
			RenderTexture_t5FE7A5B47EF962A0E8D7BEBA05E9FC87D49A1849 * L_157 = V_0;
			ES3Reader_t2780AF8AA61DA2A817115CEF8612AC0E494D03C9 * L_158 = ___reader0;
			IL2CPP_RUNTIME_CLASS_INIT(ES3Type_int_tF64C15D40AD0CC7C15BCD1CEC3C5C6BF837BD167_il2cpp_TypeInfo_var);
			ES3Type_t8FBECB7AE75168648B9524E0C2A38DAD4555421D * L_159 = ((ES3Type_int_tF64C15D40AD0CC7C15BCD1CEC3C5C6BF837BD167_StaticFields*)il2cpp_codegen_static_fields_for(ES3Type_int_tF64C15D40AD0CC7C15BCD1CEC3C5C6BF837BD167_il2cpp_TypeInfo_var))->get_Instance_12();
			NullCheck((ES3Reader_t2780AF8AA61DA2A817115CEF8612AC0E494D03C9 *)L_158);
			int32_t L_160;
			L_160 = GenericVirtFuncInvoker1< int32_t, ES3Type_t8FBECB7AE75168648B9524E0C2A38DAD4555421D * >::Invoke(ES3Reader_Read_TisInt32_tFDE5F8CD43D10453F6A2E0C77FE48C6CC7009046_m2B74AA6627F5B1D21171D56C42F71DE5A7C1B4A6_RuntimeMethod_var, (ES3Reader_t2780AF8AA61DA2A817115CEF8612AC0E494D03C9 *)L_158, (ES3Type_t8FBECB7AE75168648B9524E0C2A38DAD4555421D *)L_159);
			NullCheck((RenderTexture_t5FE7A5B47EF962A0E8D7BEBA05E9FC87D49A1849 *)L_157);
			RenderTexture_set_depth_mA57CEFEDDB45D0429FAC9532A631839F523944A3((RenderTexture_t5FE7A5B47EF962A0E8D7BEBA05E9FC87D49A1849 *)L_157, (int32_t)L_160, /*hidden argument*/NULL);
			// break;
			goto IL_0721;
		}

IL_05c8:
		{
			// instance.descriptor = reader.Read<UnityEngine.RenderTextureDescriptor>();
			RenderTexture_t5FE7A5B47EF962A0E8D7BEBA05E9FC87D49A1849 * L_161 = V_0;
			ES3Reader_t2780AF8AA61DA2A817115CEF8612AC0E494D03C9 * L_162 = ___reader0;
			NullCheck((ES3Reader_t2780AF8AA61DA2A817115CEF8612AC0E494D03C9 *)L_162);
			RenderTextureDescriptor_t67FF189E1F35AEB5D6C43A2D7103F3A8A8CA0B47  L_163;
			L_163 = GenericVirtFuncInvoker0< RenderTextureDescriptor_t67FF189E1F35AEB5D6C43A2D7103F3A8A8CA0B47  >::Invoke(ES3Reader_Read_TisRenderTextureDescriptor_t67FF189E1F35AEB5D6C43A2D7103F3A8A8CA0B47_m427886ADAAF96C7BA9BD423544128494F96D69E7_RuntimeMethod_var, (ES3Reader_t2780AF8AA61DA2A817115CEF8612AC0E494D03C9 *)L_162);
			NullCheck((RenderTexture_t5FE7A5B47EF962A0E8D7BEBA05E9FC87D49A1849 *)L_161);
			RenderTexture_set_descriptor_m3C8E31AE4644B23719A12345771D1B85EB6E5881((RenderTexture_t5FE7A5B47EF962A0E8D7BEBA05E9FC87D49A1849 *)L_161, (RenderTextureDescriptor_t67FF189E1F35AEB5D6C43A2D7103F3A8A8CA0B47 )L_163, /*hidden argument*/NULL);
			// break;
			goto IL_0721;
		}

IL_05d9:
		{
			// UnityEngine.RenderTexture.masterTextureLimit = reader.Read<System.Int32>(ES3Type_int.Instance);
			ES3Reader_t2780AF8AA61DA2A817115CEF8612AC0E494D03C9 * L_164 = ___reader0;
			IL2CPP_RUNTIME_CLASS_INIT(ES3Type_int_tF64C15D40AD0CC7C15BCD1CEC3C5C6BF837BD167_il2cpp_TypeInfo_var);
			ES3Type_t8FBECB7AE75168648B9524E0C2A38DAD4555421D * L_165 = ((ES3Type_int_tF64C15D40AD0CC7C15BCD1CEC3C5C6BF837BD167_StaticFields*)il2cpp_codegen_static_fields_for(ES3Type_int_tF64C15D40AD0CC7C15BCD1CEC3C5C6BF837BD167_il2cpp_TypeInfo_var))->get_Instance_12();
			NullCheck((ES3Reader_t2780AF8AA61DA2A817115CEF8612AC0E494D03C9 *)L_164);
			int32_t L_166;
			L_166 = GenericVirtFuncInvoker1< int32_t, ES3Type_t8FBECB7AE75168648B9524E0C2A38DAD4555421D * >::Invoke(ES3Reader_Read_TisInt32_tFDE5F8CD43D10453F6A2E0C77FE48C6CC7009046_m2B74AA6627F5B1D21171D56C42F71DE5A7C1B4A6_RuntimeMethod_var, (ES3Reader_t2780AF8AA61DA2A817115CEF8612AC0E494D03C9 *)L_164, (ES3Type_t8FBECB7AE75168648B9524E0C2A38DAD4555421D *)L_165);
			IL2CPP_RUNTIME_CLASS_INIT(Texture_t9FE0218A1EEDF266E8C85879FE123265CACC95AE_il2cpp_TypeInfo_var);
			Texture_set_masterTextureLimit_m94A531A20A54A86AF7B88A56F72709CE556B7DFF((int32_t)L_166, /*hidden argument*/NULL);
			// break;
			goto IL_0721;
		}

IL_05ee:
		{
			// UnityEngine.RenderTexture.anisotropicFiltering = reader.Read<UnityEngine.AnisotropicFiltering>();
			ES3Reader_t2780AF8AA61DA2A817115CEF8612AC0E494D03C9 * L_167 = ___reader0;
			NullCheck((ES3Reader_t2780AF8AA61DA2A817115CEF8612AC0E494D03C9 *)L_167);
			int32_t L_168;
			L_168 = GenericVirtFuncInvoker0< int32_t >::Invoke(ES3Reader_Read_TisAnisotropicFiltering_tAC3D1448B262D5869946CD1CDD2C8DAE3A7A537B_mAF1268AAC3E461D6E0604A19FAF0325873B6EC8A_RuntimeMethod_var, (ES3Reader_t2780AF8AA61DA2A817115CEF8612AC0E494D03C9 *)L_167);
			IL2CPP_RUNTIME_CLASS_INIT(Texture_t9FE0218A1EEDF266E8C85879FE123265CACC95AE_il2cpp_TypeInfo_var);
			Texture_set_anisotropicFiltering_mE2B639BF2681A8A0516C1C343C7E265ED60EAF16((int32_t)L_168, /*hidden argument*/NULL);
			// break;
			goto IL_0721;
		}

IL_05fe:
		{
			// instance.wrapMode = reader.Read<UnityEngine.TextureWrapMode>();
			RenderTexture_t5FE7A5B47EF962A0E8D7BEBA05E9FC87D49A1849 * L_169 = V_0;
			ES3Reader_t2780AF8AA61DA2A817115CEF8612AC0E494D03C9 * L_170 = ___reader0;
			NullCheck((ES3Reader_t2780AF8AA61DA2A817115CEF8612AC0E494D03C9 *)L_170);
			int32_t L_171;
			L_171 = GenericVirtFuncInvoker0< int32_t >::Invoke(ES3Reader_Read_TisTextureWrapMode_t86DDA8206E4AA784A1218D0DE3C5F6826D7549EB_m7926E449CD0B8BD56E5BF145DD0CCFE1C567F107_RuntimeMethod_var, (ES3Reader_t2780AF8AA61DA2A817115CEF8612AC0E494D03C9 *)L_170);
			NullCheck((Texture_t9FE0218A1EEDF266E8C85879FE123265CACC95AE *)L_169);
			Texture_set_wrapMode_m1233D2DF48DC20996F8EE26E866D4BDD2AC8050D((Texture_t9FE0218A1EEDF266E8C85879FE123265CACC95AE *)L_169, (int32_t)L_171, /*hidden argument*/NULL);
			// break;
			goto IL_0721;
		}

IL_060f:
		{
			// instance.wrapModeU = reader.Read<UnityEngine.TextureWrapMode>();
			RenderTexture_t5FE7A5B47EF962A0E8D7BEBA05E9FC87D49A1849 * L_172 = V_0;
			ES3Reader_t2780AF8AA61DA2A817115CEF8612AC0E494D03C9 * L_173 = ___reader0;
			NullCheck((ES3Reader_t2780AF8AA61DA2A817115CEF8612AC0E494D03C9 *)L_173);
			int32_t L_174;
			L_174 = GenericVirtFuncInvoker0< int32_t >::Invoke(ES3Reader_Read_TisTextureWrapMode_t86DDA8206E4AA784A1218D0DE3C5F6826D7549EB_m7926E449CD0B8BD56E5BF145DD0CCFE1C567F107_RuntimeMethod_var, (ES3Reader_t2780AF8AA61DA2A817115CEF8612AC0E494D03C9 *)L_173);
			NullCheck((Texture_t9FE0218A1EEDF266E8C85879FE123265CACC95AE *)L_172);
			Texture_set_wrapModeU_mBD3CBD6880E9E767B91ED9E1B14C725A52D7A66E((Texture_t9FE0218A1EEDF266E8C85879FE123265CACC95AE *)L_172, (int32_t)L_174, /*hidden argument*/NULL);
			// break;
			goto IL_0721;
		}

IL_0620:
		{
			// instance.wrapModeV = reader.Read<UnityEngine.TextureWrapMode>();
			RenderTexture_t5FE7A5B47EF962A0E8D7BEBA05E9FC87D49A1849 * L_175 = V_0;
			ES3Reader_t2780AF8AA61DA2A817115CEF8612AC0E494D03C9 * L_176 = ___reader0;
			NullCheck((ES3Reader_t2780AF8AA61DA2A817115CEF8612AC0E494D03C9 *)L_176);
			int32_t L_177;
			L_177 = GenericVirtFuncInvoker0< int32_t >::Invoke(ES3Reader_Read_TisTextureWrapMode_t86DDA8206E4AA784A1218D0DE3C5F6826D7549EB_m7926E449CD0B8BD56E5BF145DD0CCFE1C567F107_RuntimeMethod_var, (ES3Reader_t2780AF8AA61DA2A817115CEF8612AC0E494D03C9 *)L_176);
			NullCheck((Texture_t9FE0218A1EEDF266E8C85879FE123265CACC95AE *)L_175);
			Texture_set_wrapModeV_mCD51C11B4C90D7508113C744EDC09D04059403E5((Texture_t9FE0218A1EEDF266E8C85879FE123265CACC95AE *)L_175, (int32_t)L_177, /*hidden argument*/NULL);
			// break;
			goto IL_0721;
		}

IL_0631:
		{
			// instance.wrapModeW = reader.Read<UnityEngine.TextureWrapMode>();
			RenderTexture_t5FE7A5B47EF962A0E8D7BEBA05E9FC87D49A1849 * L_178 = V_0;
			ES3Reader_t2780AF8AA61DA2A817115CEF8612AC0E494D03C9 * L_179 = ___reader0;
			NullCheck((ES3Reader_t2780AF8AA61DA2A817115CEF8612AC0E494D03C9 *)L_179);
			int32_t L_180;
			L_180 = GenericVirtFuncInvoker0< int32_t >::Invoke(ES3Reader_Read_TisTextureWrapMode_t86DDA8206E4AA784A1218D0DE3C5F6826D7549EB_m7926E449CD0B8BD56E5BF145DD0CCFE1C567F107_RuntimeMethod_var, (ES3Reader_t2780AF8AA61DA2A817115CEF8612AC0E494D03C9 *)L_179);
			NullCheck((Texture_t9FE0218A1EEDF266E8C85879FE123265CACC95AE *)L_178);
			Texture_set_wrapModeW_m72C3239EA12A51D5031BD2A66C5E7B178EE9F65B((Texture_t9FE0218A1EEDF266E8C85879FE123265CACC95AE *)L_178, (int32_t)L_180, /*hidden argument*/NULL);
			// break;
			goto IL_0721;
		}

IL_0642:
		{
			// instance.filterMode = reader.Read<UnityEngine.FilterMode>();
			RenderTexture_t5FE7A5B47EF962A0E8D7BEBA05E9FC87D49A1849 * L_181 = V_0;
			ES3Reader_t2780AF8AA61DA2A817115CEF8612AC0E494D03C9 * L_182 = ___reader0;
			NullCheck((ES3Reader_t2780AF8AA61DA2A817115CEF8612AC0E494D03C9 *)L_182);
			int32_t L_183;
			L_183 = GenericVirtFuncInvoker0< int32_t >::Invoke(ES3Reader_Read_TisFilterMode_tE90A08FD96A142C761463D65E524BCDBFEEE3D19_m9819C2A442797B4060B0D9A80CFA96CFD6102839_RuntimeMethod_var, (ES3Reader_t2780AF8AA61DA2A817115CEF8612AC0E494D03C9 *)L_182);
			NullCheck((Texture_t9FE0218A1EEDF266E8C85879FE123265CACC95AE *)L_181);
			Texture_set_filterMode_m045141DB0FEFE496885D45F5F23B15BC0E77C8D0((Texture_t9FE0218A1EEDF266E8C85879FE123265CACC95AE *)L_181, (int32_t)L_183, /*hidden argument*/NULL);
			// break;
			goto IL_0721;
		}

IL_0653:
		{
			// instance.anisoLevel = reader.Read<System.Int32>(ES3Type_int.Instance);
			RenderTexture_t5FE7A5B47EF962A0E8D7BEBA05E9FC87D49A1849 * L_184 = V_0;
			ES3Reader_t2780AF8AA61DA2A817115CEF8612AC0E494D03C9 * L_185 = ___reader0;
			IL2CPP_RUNTIME_CLASS_INIT(ES3Type_int_tF64C15D40AD0CC7C15BCD1CEC3C5C6BF837BD167_il2cpp_TypeInfo_var);
			ES3Type_t8FBECB7AE75168648B9524E0C2A38DAD4555421D * L_186 = ((ES3Type_int_tF64C15D40AD0CC7C15BCD1CEC3C5C6BF837BD167_StaticFields*)il2cpp_codegen_static_fields_for(ES3Type_int_tF64C15D40AD0CC7C15BCD1CEC3C5C6BF837BD167_il2cpp_TypeInfo_var))->get_Instance_12();
			NullCheck((ES3Reader_t2780AF8AA61DA2A817115CEF8612AC0E494D03C9 *)L_185);
			int32_t L_187;
			L_187 = GenericVirtFuncInvoker1< int32_t, ES3Type_t8FBECB7AE75168648B9524E0C2A38DAD4555421D * >::Invoke(ES3Reader_Read_TisInt32_tFDE5F8CD43D10453F6A2E0C77FE48C6CC7009046_m2B74AA6627F5B1D21171D56C42F71DE5A7C1B4A6_RuntimeMethod_var, (ES3Reader_t2780AF8AA61DA2A817115CEF8612AC0E494D03C9 *)L_185, (ES3Type_t8FBECB7AE75168648B9524E0C2A38DAD4555421D *)L_186);
			NullCheck((Texture_t9FE0218A1EEDF266E8C85879FE123265CACC95AE *)L_184);
			Texture_set_anisoLevel_mE51360F6CD0562FD6355F8C0509B70A454CB33BE((Texture_t9FE0218A1EEDF266E8C85879FE123265CACC95AE *)L_184, (int32_t)L_187, /*hidden argument*/NULL);
			// break;
			goto IL_0721;
		}

IL_0669:
		{
			// instance.mipMapBias = reader.Read<System.Single>(ES3Type_float.Instance);
			RenderTexture_t5FE7A5B47EF962A0E8D7BEBA05E9FC87D49A1849 * L_188 = V_0;
			ES3Reader_t2780AF8AA61DA2A817115CEF8612AC0E494D03C9 * L_189 = ___reader0;
			IL2CPP_RUNTIME_CLASS_INIT(ES3Type_float_tF86B773C86731BD9AD79448B860BBB178FE77644_il2cpp_TypeInfo_var);
			ES3Type_t8FBECB7AE75168648B9524E0C2A38DAD4555421D * L_190 = ((ES3Type_float_tF86B773C86731BD9AD79448B860BBB178FE77644_StaticFields*)il2cpp_codegen_static_fields_for(ES3Type_float_tF86B773C86731BD9AD79448B860BBB178FE77644_il2cpp_TypeInfo_var))->get_Instance_12();
			NullCheck((ES3Reader_t2780AF8AA61DA2A817115CEF8612AC0E494D03C9 *)L_189);
			float L_191;
			L_191 = GenericVirtFuncInvoker1< float, ES3Type_t8FBECB7AE75168648B9524E0C2A38DAD4555421D * >::Invoke(ES3Reader_Read_TisSingle_tE07797BA3C98D4CA9B5A19413C19A76688AB899E_m4A0416374498BDA042B8EB21E49B72326D6CE5F4_RuntimeMethod_var, (ES3Reader_t2780AF8AA61DA2A817115CEF8612AC0E494D03C9 *)L_189, (ES3Type_t8FBECB7AE75168648B9524E0C2A38DAD4555421D *)L_190);
			NullCheck((Texture_t9FE0218A1EEDF266E8C85879FE123265CACC95AE *)L_188);
			Texture_set_mipMapBias_m5057ADA9DBA8E8E30EC15EA5BABFA0734CE2821C((Texture_t9FE0218A1EEDF266E8C85879FE123265CACC95AE *)L_188, (float)L_191, /*hidden argument*/NULL);
			// break;
			goto IL_0721;
		}

IL_067f:
		{
			// instance.name = reader.Read<System.String>(ES3Type_string.Instance);
			RenderTexture_t5FE7A5B47EF962A0E8D7BEBA05E9FC87D49A1849 * L_192 = V_0;
			ES3Reader_t2780AF8AA61DA2A817115CEF8612AC0E494D03C9 * L_193 = ___reader0;
			IL2CPP_RUNTIME_CLASS_INIT(ES3Type_string_tC47BFBE3CC816F3C70B51558C68F0C6470C5EFE5_il2cpp_TypeInfo_var);
			ES3Type_t8FBECB7AE75168648B9524E0C2A38DAD4555421D * L_194 = ((ES3Type_string_tC47BFBE3CC816F3C70B51558C68F0C6470C5EFE5_StaticFields*)il2cpp_codegen_static_fields_for(ES3Type_string_tC47BFBE3CC816F3C70B51558C68F0C6470C5EFE5_il2cpp_TypeInfo_var))->get_Instance_12();
			NullCheck((ES3Reader_t2780AF8AA61DA2A817115CEF8612AC0E494D03C9 *)L_193);
			String_t* L_195;
			L_195 = GenericVirtFuncInvoker1< String_t*, ES3Type_t8FBECB7AE75168648B9524E0C2A38DAD4555421D * >::Invoke(ES3Reader_Read_TisString_t_m883861F3B58239392073ABF39876826EEB87DF9C_RuntimeMethod_var, (ES3Reader_t2780AF8AA61DA2A817115CEF8612AC0E494D03C9 *)L_193, (ES3Type_t8FBECB7AE75168648B9524E0C2A38DAD4555421D *)L_194);
			NullCheck((Object_tF2F3778131EFF286AF62B7B013A170F95A91571A *)L_192);
			Object_set_name_m87C4006618ADB325ABE5439DF159E10DD8DD0781((Object_tF2F3778131EFF286AF62B7B013A170F95A91571A *)L_192, (String_t*)L_195, /*hidden argument*/NULL);
			// break;
			goto IL_0721;
		}

IL_0695:
		{
			// instance.vrUsage = reader.Read<UnityEngine.VRTextureUsage>();
			RenderTexture_t5FE7A5B47EF962A0E8D7BEBA05E9FC87D49A1849 * L_196 = V_0;
			ES3Reader_t2780AF8AA61DA2A817115CEF8612AC0E494D03C9 * L_197 = ___reader0;
			NullCheck((ES3Reader_t2780AF8AA61DA2A817115CEF8612AC0E494D03C9 *)L_197);
			int32_t L_198;
			L_198 = GenericVirtFuncInvoker0< int32_t >::Invoke(ES3Reader_Read_TisVRTextureUsage_t3C09DF3DD90B5620BC0AB6F8078DFEF4E607F645_m7DE3966E4815BB13132866CB005EEE5B90FF51C2_RuntimeMethod_var, (ES3Reader_t2780AF8AA61DA2A817115CEF8612AC0E494D03C9 *)L_197);
			NullCheck((RenderTexture_t5FE7A5B47EF962A0E8D7BEBA05E9FC87D49A1849 *)L_196);
			RenderTexture_set_vrUsage_m9AF7F60442E3B933FDF274D801EA074D1A5ECB71((RenderTexture_t5FE7A5B47EF962A0E8D7BEBA05E9FC87D49A1849 *)L_196, (int32_t)L_198, /*hidden argument*/NULL);
			// break;
			goto IL_0721;
		}

IL_06a3:
		{
			// instance.graphicsFormat = reader.Read<UnityEngine.Experimental.Rendering.GraphicsFormat>();
			RenderTexture_t5FE7A5B47EF962A0E8D7BEBA05E9FC87D49A1849 * L_199 = V_0;
			ES3Reader_t2780AF8AA61DA2A817115CEF8612AC0E494D03C9 * L_200 = ___reader0;
			NullCheck((ES3Reader_t2780AF8AA61DA2A817115CEF8612AC0E494D03C9 *)L_200);
			int32_t L_201;
			L_201 = GenericVirtFuncInvoker0< int32_t >::Invoke(ES3Reader_Read_TisGraphicsFormat_t07A3C024BC77B843C53A369D6FC02ABD27D2AB1D_mCBD36004B10F649C93215AB4717F6F0D7118BF7D_RuntimeMethod_var, (ES3Reader_t2780AF8AA61DA2A817115CEF8612AC0E494D03C9 *)L_200);
			NullCheck((RenderTexture_t5FE7A5B47EF962A0E8D7BEBA05E9FC87D49A1849 *)L_199);
			RenderTexture_set_graphicsFormat_mA378AAD8BD876EE96637FF0A80A2AFEA4D852FAB((RenderTexture_t5FE7A5B47EF962A0E8D7BEBA05E9FC87D49A1849 *)L_199, (int32_t)L_201, /*hidden argument*/NULL);
			// break;
			goto IL_0721;
		}

IL_06b1:
		{
			// instance.stencilFormat = reader.Read<UnityEngine.Experimental.Rendering.GraphicsFormat>();
			RenderTexture_t5FE7A5B47EF962A0E8D7BEBA05E9FC87D49A1849 * L_202 = V_0;
			ES3Reader_t2780AF8AA61DA2A817115CEF8612AC0E494D03C9 * L_203 = ___reader0;
			NullCheck((ES3Reader_t2780AF8AA61DA2A817115CEF8612AC0E494D03C9 *)L_203);
			int32_t L_204;
			L_204 = GenericVirtFuncInvoker0< int32_t >::Invoke(ES3Reader_Read_TisGraphicsFormat_t07A3C024BC77B843C53A369D6FC02ABD27D2AB1D_mCBD36004B10F649C93215AB4717F6F0D7118BF7D_RuntimeMethod_var, (ES3Reader_t2780AF8AA61DA2A817115CEF8612AC0E494D03C9 *)L_203);
			NullCheck((RenderTexture_t5FE7A5B47EF962A0E8D7BEBA05E9FC87D49A1849 *)L_202);
			RenderTexture_set_stencilFormat_m7C6E21FCDB7E786D403CFC9775105B050EFF19C7((RenderTexture_t5FE7A5B47EF962A0E8D7BEBA05E9FC87D49A1849 *)L_202, (int32_t)L_204, /*hidden argument*/NULL);
			// break;
			goto IL_0721;
		}

IL_06bf:
		{
			// instance.bindTextureMS = reader.Read<System.Boolean>(ES3Type_bool.Instance);
			RenderTexture_t5FE7A5B47EF962A0E8D7BEBA05E9FC87D49A1849 * L_205 = V_0;
			ES3Reader_t2780AF8AA61DA2A817115CEF8612AC0E494D03C9 * L_206 = ___reader0;
			IL2CPP_RUNTIME_CLASS_INIT(ES3Type_bool_t8F309F7B9CC735FF1DEE68081B6E3CAB367745F4_il2cpp_TypeInfo_var);
			ES3Type_t8FBECB7AE75168648B9524E0C2A38DAD4555421D * L_207 = ((ES3Type_bool_t8F309F7B9CC735FF1DEE68081B6E3CAB367745F4_StaticFields*)il2cpp_codegen_static_fields_for(ES3Type_bool_t8F309F7B9CC735FF1DEE68081B6E3CAB367745F4_il2cpp_TypeInfo_var))->get_Instance_12();
			NullCheck((ES3Reader_t2780AF8AA61DA2A817115CEF8612AC0E494D03C9 *)L_206);
			bool L_208;
			L_208 = GenericVirtFuncInvoker1< bool, ES3Type_t8FBECB7AE75168648B9524E0C2A38DAD4555421D * >::Invoke(ES3Reader_Read_TisBoolean_t07D1E3F34E4813023D64F584DFF7B34C9D922F37_mC6D1B158268FF9B97822FF9F5B37FB1723FEDA22_RuntimeMethod_var, (ES3Reader_t2780AF8AA61DA2A817115CEF8612AC0E494D03C9 *)L_206, (ES3Type_t8FBECB7AE75168648B9524E0C2A38DAD4555421D *)L_207);
			NullCheck((RenderTexture_t5FE7A5B47EF962A0E8D7BEBA05E9FC87D49A1849 *)L_205);
			RenderTexture_set_bindTextureMS_m6C26F6AB2DE8FE81BFCA60C936AA08EA7F1A7177((RenderTexture_t5FE7A5B47EF962A0E8D7BEBA05E9FC87D49A1849 *)L_205, (bool)L_208, /*hidden argument*/NULL);
			// break;
			goto IL_0721;
		}

IL_06d2:
		{
			// instance.useDynamicScale = reader.Read<System.Boolean>(ES3Type_bool.Instance);
			RenderTexture_t5FE7A5B47EF962A0E8D7BEBA05E9FC87D49A1849 * L_209 = V_0;
			ES3Reader_t2780AF8AA61DA2A817115CEF8612AC0E494D03C9 * L_210 = ___reader0;
			IL2CPP_RUNTIME_CLASS_INIT(ES3Type_bool_t8F309F7B9CC735FF1DEE68081B6E3CAB367745F4_il2cpp_TypeInfo_var);
			ES3Type_t8FBECB7AE75168648B9524E0C2A38DAD4555421D * L_211 = ((ES3Type_bool_t8F309F7B9CC735FF1DEE68081B6E3CAB367745F4_StaticFields*)il2cpp_codegen_static_fields_for(ES3Type_bool_t8F309F7B9CC735FF1DEE68081B6E3CAB367745F4_il2cpp_TypeInfo_var))->get_Instance_12();
			NullCheck((ES3Reader_t2780AF8AA61DA2A817115CEF8612AC0E494D03C9 *)L_210);
			bool L_212;
			L_212 = GenericVirtFuncInvoker1< bool, ES3Type_t8FBECB7AE75168648B9524E0C2A38DAD4555421D * >::Invoke(ES3Reader_Read_TisBoolean_t07D1E3F34E4813023D64F584DFF7B34C9D922F37_mC6D1B158268FF9B97822FF9F5B37FB1723FEDA22_RuntimeMethod_var, (ES3Reader_t2780AF8AA61DA2A817115CEF8612AC0E494D03C9 *)L_210, (ES3Type_t8FBECB7AE75168648B9524E0C2A38DAD4555421D *)L_211);
			NullCheck((RenderTexture_t5FE7A5B47EF962A0E8D7BEBA05E9FC87D49A1849 *)L_209);
			RenderTexture_set_useDynamicScale_m8F96571C7EDBEFAB9278E04A3F3EB67067A5AE29((RenderTexture_t5FE7A5B47EF962A0E8D7BEBA05E9FC87D49A1849 *)L_209, (bool)L_212, /*hidden argument*/NULL);
			// break;
			goto IL_0721;
		}

IL_06e5:
		{
			// UnityEngine.RenderTexture.streamingTextureForceLoadAll = reader.Read<System.Boolean>(ES3Type_bool.Instance);
			ES3Reader_t2780AF8AA61DA2A817115CEF8612AC0E494D03C9 * L_213 = ___reader0;
			IL2CPP_RUNTIME_CLASS_INIT(ES3Type_bool_t8F309F7B9CC735FF1DEE68081B6E3CAB367745F4_il2cpp_TypeInfo_var);
			ES3Type_t8FBECB7AE75168648B9524E0C2A38DAD4555421D * L_214 = ((ES3Type_bool_t8F309F7B9CC735FF1DEE68081B6E3CAB367745F4_StaticFields*)il2cpp_codegen_static_fields_for(ES3Type_bool_t8F309F7B9CC735FF1DEE68081B6E3CAB367745F4_il2cpp_TypeInfo_var))->get_Instance_12();
			NullCheck((ES3Reader_t2780AF8AA61DA2A817115CEF8612AC0E494D03C9 *)L_213);
			bool L_215;
			L_215 = GenericVirtFuncInvoker1< bool, ES3Type_t8FBECB7AE75168648B9524E0C2A38DAD4555421D * >::Invoke(ES3Reader_Read_TisBoolean_t07D1E3F34E4813023D64F584DFF7B34C9D922F37_mC6D1B158268FF9B97822FF9F5B37FB1723FEDA22_RuntimeMethod_var, (ES3Reader_t2780AF8AA61DA2A817115CEF8612AC0E494D03C9 *)L_213, (ES3Type_t8FBECB7AE75168648B9524E0C2A38DAD4555421D *)L_214);
			IL2CPP_RUNTIME_CLASS_INIT(Texture_t9FE0218A1EEDF266E8C85879FE123265CACC95AE_il2cpp_TypeInfo_var);
			Texture_set_streamingTextureForceLoadAll_m325117C0830BB9B4316CF41CEE045759FC52B7A3((bool)L_215, /*hidden argument*/NULL);
			// break;
			goto IL_0721;
		}

IL_06f7:
		{
			// UnityEngine.RenderTexture.streamingTextureDiscardUnusedMips = reader.Read<System.Boolean>(ES3Type_bool.Instance);
			ES3Reader_t2780AF8AA61DA2A817115CEF8612AC0E494D03C9 * L_216 = ___reader0;
			IL2CPP_RUNTIME_CLASS_INIT(ES3Type_bool_t8F309F7B9CC735FF1DEE68081B6E3CAB367745F4_il2cpp_TypeInfo_var);
			ES3Type_t8FBECB7AE75168648B9524E0C2A38DAD4555421D * L_217 = ((ES3Type_bool_t8F309F7B9CC735FF1DEE68081B6E3CAB367745F4_StaticFields*)il2cpp_codegen_static_fields_for(ES3Type_bool_t8F309F7B9CC735FF1DEE68081B6E3CAB367745F4_il2cpp_TypeInfo_var))->get_Instance_12();
			NullCheck((ES3Reader_t2780AF8AA61DA2A817115CEF8612AC0E494D03C9 *)L_216);
			bool L_218;
			L_218 = GenericVirtFuncInvoker1< bool, ES3Type_t8FBECB7AE75168648B9524E0C2A38DAD4555421D * >::Invoke(ES3Reader_Read_TisBoolean_t07D1E3F34E4813023D64F584DFF7B34C9D922F37_mC6D1B158268FF9B97822FF9F5B37FB1723FEDA22_RuntimeMethod_var, (ES3Reader_t2780AF8AA61DA2A817115CEF8612AC0E494D03C9 *)L_216, (ES3Type_t8FBECB7AE75168648B9524E0C2A38DAD4555421D *)L_217);
			IL2CPP_RUNTIME_CLASS_INIT(Texture_t9FE0218A1EEDF266E8C85879FE123265CACC95AE_il2cpp_TypeInfo_var);
			Texture_set_streamingTextureDiscardUnusedMips_mE184CE016A8E0319B437D34E0DB61962CE17F5DC((bool)L_218, /*hidden argument*/NULL);
			// break;
			goto IL_0721;
		}

IL_0709:
		{
			// UnityEngine.RenderTexture.allowThreadedTextureCreation = reader.Read<System.Boolean>(ES3Type_bool.Instance);
			ES3Reader_t2780AF8AA61DA2A817115CEF8612AC0E494D03C9 * L_219 = ___reader0;
			IL2CPP_RUNTIME_CLASS_INIT(ES3Type_bool_t8F309F7B9CC735FF1DEE68081B6E3CAB367745F4_il2cpp_TypeInfo_var);
			ES3Type_t8FBECB7AE75168648B9524E0C2A38DAD4555421D * L_220 = ((ES3Type_bool_t8F309F7B9CC735FF1DEE68081B6E3CAB367745F4_StaticFields*)il2cpp_codegen_static_fields_for(ES3Type_bool_t8F309F7B9CC735FF1DEE68081B6E3CAB367745F4_il2cpp_TypeInfo_var))->get_Instance_12();
			NullCheck((ES3Reader_t2780AF8AA61DA2A817115CEF8612AC0E494D03C9 *)L_219);
			bool L_221;
			L_221 = GenericVirtFuncInvoker1< bool, ES3Type_t8FBECB7AE75168648B9524E0C2A38DAD4555421D * >::Invoke(ES3Reader_Read_TisBoolean_t07D1E3F34E4813023D64F584DFF7B34C9D922F37_mC6D1B158268FF9B97822FF9F5B37FB1723FEDA22_RuntimeMethod_var, (ES3Reader_t2780AF8AA61DA2A817115CEF8612AC0E494D03C9 *)L_219, (ES3Type_t8FBECB7AE75168648B9524E0C2A38DAD4555421D *)L_220);
			IL2CPP_RUNTIME_CLASS_INIT(Texture_t9FE0218A1EEDF266E8C85879FE123265CACC95AE_il2cpp_TypeInfo_var);
			Texture_set_allowThreadedTextureCreation_m84D29394912B9CE876023963426256CBEB15A52E((bool)L_221, /*hidden argument*/NULL);
			// break;
			goto IL_0721;
		}

IL_071b:
		{
			// reader.Skip();
			ES3Reader_t2780AF8AA61DA2A817115CEF8612AC0E494D03C9 * L_222 = ___reader0;
			NullCheck((ES3Reader_t2780AF8AA61DA2A817115CEF8612AC0E494D03C9 *)L_222);
			VirtActionInvoker0::Invoke(41 /* System.Void ES3Reader::Skip() */, (ES3Reader_t2780AF8AA61DA2A817115CEF8612AC0E494D03C9 *)L_222);
		}

IL_0721:
		{
			// foreach (string propertyName in reader.Properties)
			RuntimeObject* L_223 = V_1;
			NullCheck((RuntimeObject*)L_223);
			bool L_224;
			L_224 = InterfaceFuncInvoker0< bool >::Invoke(0 /* System.Boolean System.Collections.IEnumerator::MoveNext() */, IEnumerator_t5956F3AFB7ECF1117E3BC5890E7FC7B7F7A04105_il2cpp_TypeInfo_var, (RuntimeObject*)L_223);
			if (L_224)
			{
				goto IL_0018;
			}
		}

IL_072c:
		{
			IL2CPP_LEAVE(0x742, FINALLY_072e);
		}
	} // end try (depth: 1)
	catch(Il2CppExceptionWrapper& e)
	{
		__last_unhandled_exception = (Exception_t *)e.ex;
		goto FINALLY_072e;
	}

FINALLY_072e:
	{ // begin finally (depth: 1)
		{
			RuntimeObject* L_225 = V_1;
			V_4 = (RuntimeObject*)((RuntimeObject*)IsInst((RuntimeObject*)L_225, IDisposable_t099785737FC6A1E3699919A94109383715A8D807_il2cpp_TypeInfo_var));
			RuntimeObject* L_226 = V_4;
			if (!L_226)
			{
				goto IL_0741;
			}
		}

IL_073a:
		{
			RuntimeObject* L_227 = V_4;
			NullCheck((RuntimeObject*)L_227);
			InterfaceActionInvoker0::Invoke(0 /* System.Void System.IDisposable::Dispose() */, IDisposable_t099785737FC6A1E3699919A94109383715A8D807_il2cpp_TypeInfo_var, (RuntimeObject*)L_227);
		}

IL_0741:
		{
			IL2CPP_END_FINALLY(1838)
		}
	} // end finally (depth: 1)
	IL2CPP_CLEANUP(1838)
	{
		IL2CPP_RETHROW_IF_UNHANDLED(Exception_t *)
		IL2CPP_JUMP_TBL(0x742, IL_0742)
	}

IL_0742:
	{
		// }
		return;
	}
}
// System.Void ES3Types.ES3Type_RenderTexture::ReadObject<UnityEngine.ParticleSystem/TrailModule>(ES3Reader,System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ES3Type_RenderTexture_ReadObject_TisTrailModule_t95D15372971E64A1977B7587ABAA87B1A31EF5C8_mA9320E21482A5CF37F3E822AF46E28519486506C_gshared (ES3Type_RenderTexture_t7B14573C56809AFDC0A1C481D6B61E2146DEF194 * __this, ES3Reader_t2780AF8AA61DA2A817115CEF8612AC0E494D03C9 * ___reader0, RuntimeObject * ___obj1, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ES3Reader_Read_TisAnisotropicFiltering_tAC3D1448B262D5869946CD1CDD2C8DAE3A7A537B_mAF1268AAC3E461D6E0604A19FAF0325873B6EC8A_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ES3Reader_Read_TisBoolean_t07D1E3F34E4813023D64F584DFF7B34C9D922F37_mC6D1B158268FF9B97822FF9F5B37FB1723FEDA22_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ES3Reader_Read_TisFilterMode_tE90A08FD96A142C761463D65E524BCDBFEEE3D19_m9819C2A442797B4060B0D9A80CFA96CFD6102839_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ES3Reader_Read_TisGraphicsFormat_t07A3C024BC77B843C53A369D6FC02ABD27D2AB1D_mCBD36004B10F649C93215AB4717F6F0D7118BF7D_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ES3Reader_Read_TisInt32_tFDE5F8CD43D10453F6A2E0C77FE48C6CC7009046_m2B74AA6627F5B1D21171D56C42F71DE5A7C1B4A6_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ES3Reader_Read_TisRenderTextureDescriptor_t67FF189E1F35AEB5D6C43A2D7103F3A8A8CA0B47_m427886ADAAF96C7BA9BD423544128494F96D69E7_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ES3Reader_Read_TisRenderTextureFormat_t8371287102ED67772EF78229CF4AB9D38C2CD626_mE6358E03407F5C15B58B292C79D4770DE3FAC95A_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ES3Reader_Read_TisRenderTextureMemoryless_t37547D68C2186D2650440F719302CDA4A3BB7F67_m3A980BA15AADBBB8393C3BC88CE17EEDDC89B027_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ES3Reader_Read_TisSingle_tE07797BA3C98D4CA9B5A19413C19A76688AB899E_m4A0416374498BDA042B8EB21E49B72326D6CE5F4_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ES3Reader_Read_TisString_t_m883861F3B58239392073ABF39876826EEB87DF9C_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ES3Reader_Read_TisTextureDimension_tADCCB7C1D30E4D1182651BA9094B4DE61B63EACC_m19EAA3B93D10636C17A62A3D8437349223CFD988_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ES3Reader_Read_TisTextureWrapMode_t86DDA8206E4AA784A1218D0DE3C5F6826D7549EB_m7926E449CD0B8BD56E5BF145DD0CCFE1C567F107_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ES3Reader_Read_TisVRTextureUsage_t3C09DF3DD90B5620BC0AB6F8078DFEF4E607F645_m7DE3966E4815BB13132866CB005EEE5B90FF51C2_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ES3Type_bool_t8F309F7B9CC735FF1DEE68081B6E3CAB367745F4_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ES3Type_float_tF86B773C86731BD9AD79448B860BBB178FE77644_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ES3Type_int_tF64C15D40AD0CC7C15BCD1CEC3C5C6BF837BD167_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ES3Type_string_tC47BFBE3CC816F3C70B51558C68F0C6470C5EFE5_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IDisposable_t099785737FC6A1E3699919A94109383715A8D807_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IEnumerator_t5956F3AFB7ECF1117E3BC5890E7FC7B7F7A04105_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&RenderTexture_t5FE7A5B47EF962A0E8D7BEBA05E9FC87D49A1849_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&String_t_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Texture_t9FE0218A1EEDF266E8C85879FE123265CACC95AE_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral201D9D00BB60DC2318D21CF9902290EFE255D5DC);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral2ADFC3FFF7C52D554F0435A348A5345C9FCD7FF8);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral2E201D1972661439FD3C8523C55723E7E9BCC7DA);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral2EE7B6B0E37E14930BBA497867139BFD0617CE04);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral3A04F86957625CB28FA670EECF997E6BAD45BBE7);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral3BC15E3C2F40466B2DC85C4776499817B8306CBB);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral3F1522C8DB7943F2AE3AA1563D3AC25D9C8B93D1);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral53D3413057D7E52F44470A335C590748745352B1);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral647E0FB2B5E859CC4BD7C73623B82C8EFABA2563);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral65B008F04EC40A696263EF679CF274BD10999A5D);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral71C5F9C3E2F3C81C5BBC7FD313F6938654E61138);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral75C9716749EA210206E3467390B7A11F3F33DDFA);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral7606720A7AEF5939309A8E4FCB8274252FA3D7BF);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral7A4A6E2A7090298F814A9D44C89F8634249BEF07);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral7FF61C3A55BCA1287974D8740F945250B3F0F084);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral83AC9669A9053DD15B9F2E82D2CE2369EFE131BA);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral95F57476C0AA778364404E7CCCD7499BF1BF3757);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral9AB5ADF8A8A53110245466F7C226F7935F5FE95F);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralB49A1DF483856544CEC6018E8C944DB6E16A8D57);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralBA9362732D25B1644B7D8DEC5DF6F036A4A66DE5);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralC959D767B7F0BD38D9DA8A64A4750C3A0972E2A0);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralCD44AC57FFE6CAC7824F4CAA223F1BB8B4CB0D73);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralCE18B047107AA23D1AA9B2ED32D316148E02655F);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralEA8FBF382D8AC9EDB8FFC14A350641B987F5C631);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralEBF5FE0CBF3EEA67902EEA700B7216E3DB0D8E84);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralECAEEB225F8689DE45DEB4FA21CE34E1960B1B50);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralF23E83744C9D6FC70D71B723AAED8006D6780BCB);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralF2AF7DD0BFF41B7B35037F018DAABE7DCF357A7B);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralF38CFAE6A91D072D4453C29FF44D81D459A582F1);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralF3FA58C10BBB9830102605E24AF89DC619908DFA);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralF9EE582B77C320A1F6A3DF72205857C4248BAC79);
		s_Il2CppMethodInitialized = true;
	}
	RenderTexture_t5FE7A5B47EF962A0E8D7BEBA05E9FC87D49A1849 * V_0 = NULL;
	RuntimeObject* V_1 = NULL;
	String_t* V_2 = NULL;
	uint32_t V_3 = 0;
	RuntimeObject* V_4 = NULL;
	Exception_t * __last_unhandled_exception = 0;
	il2cpp::utils::ExceptionSupportStack<int32_t, 1> __leave_targets;
	{
		// var instance = (UnityEngine.RenderTexture)obj;
		RuntimeObject * L_0 = ___obj1;
		V_0 = (RenderTexture_t5FE7A5B47EF962A0E8D7BEBA05E9FC87D49A1849 *)((RenderTexture_t5FE7A5B47EF962A0E8D7BEBA05E9FC87D49A1849 *)Castclass((RuntimeObject*)L_0, RenderTexture_t5FE7A5B47EF962A0E8D7BEBA05E9FC87D49A1849_il2cpp_TypeInfo_var));
		// foreach (string propertyName in reader.Properties)
		ES3Reader_t2780AF8AA61DA2A817115CEF8612AC0E494D03C9 * L_1 = ___reader0;
		NullCheck((ES3Reader_t2780AF8AA61DA2A817115CEF8612AC0E494D03C9 *)L_1);
		ES3ReaderPropertyEnumerator_tFC854F4BE72BFA234682EB1909D92457534A979D * L_2;
		L_2 = VirtFuncInvoker0< ES3ReaderPropertyEnumerator_tFC854F4BE72BFA234682EB1909D92457534A979D * >::Invoke(39 /* ES3Reader/ES3ReaderPropertyEnumerator ES3Reader::get_Properties() */, (ES3Reader_t2780AF8AA61DA2A817115CEF8612AC0E494D03C9 *)L_1);
		NullCheck((ES3ReaderPropertyEnumerator_tFC854F4BE72BFA234682EB1909D92457534A979D *)L_2);
		RuntimeObject* L_3;
		L_3 = ES3ReaderPropertyEnumerator_GetEnumerator_m6C61168655E3736E7847E5CB1CD9BC6B48442FD4((ES3ReaderPropertyEnumerator_tFC854F4BE72BFA234682EB1909D92457534A979D *)L_2, /*hidden argument*/NULL);
		V_1 = (RuntimeObject*)L_3;
	}

IL_0013:
	try
	{ // begin try (depth: 1)
		{
			goto IL_0721;
		}

IL_0018:
		{
			// foreach (string propertyName in reader.Properties)
			RuntimeObject* L_4 = V_1;
			NullCheck((RuntimeObject*)L_4);
			RuntimeObject * L_5;
			L_5 = InterfaceFuncInvoker0< RuntimeObject * >::Invoke(1 /* System.Object System.Collections.IEnumerator::get_Current() */, IEnumerator_t5956F3AFB7ECF1117E3BC5890E7FC7B7F7A04105_il2cpp_TypeInfo_var, (RuntimeObject*)L_4);
			V_2 = (String_t*)((String_t*)Castclass((RuntimeObject*)L_5, String_t_il2cpp_TypeInfo_var));
			String_t* L_6 = V_2;
			if (!L_6)
			{
				goto IL_071b;
			}
		}

IL_002a:
		{
			String_t* L_7 = V_2;
			uint32_t L_8;
			L_8 = U3CPrivateImplementationDetailsU3E_ComputeStringHash_m3ADC1F612F9EE3DD518E6F0023A0DE0EE2B120A7((String_t*)L_7, /*hidden argument*/NULL);
			V_3 = (uint32_t)L_8;
			uint32_t L_9 = V_3;
			if ((!(((uint32_t)L_9) <= ((uint32_t)((int32_t)1508062721)))))
			{
				goto IL_0134;
			}
		}

IL_003c:
		{
			uint32_t L_10 = V_3;
			if ((!(((uint32_t)L_10) <= ((uint32_t)((int32_t)698754697)))))
			{
				goto IL_00b0;
			}
		}

IL_0044:
		{
			uint32_t L_11 = V_3;
			if ((!(((uint32_t)L_11) <= ((uint32_t)((int32_t)472844700)))))
			{
				goto IL_0072;
			}
		}

IL_004c:
		{
			uint32_t L_12 = V_3;
			if ((((int32_t)L_12) == ((int32_t)((int32_t)87590155))))
			{
				goto IL_043c;
			}
		}

IL_0057:
		{
			uint32_t L_13 = V_3;
			if ((((int32_t)L_13) == ((int32_t)((int32_t)301255720))))
			{
				goto IL_02d7;
			}
		}

IL_0062:
		{
			uint32_t L_14 = V_3;
			if ((((int32_t)L_14) == ((int32_t)((int32_t)472844700))))
			{
				goto IL_0283;
			}
		}

IL_006d:
		{
			goto IL_071b;
		}

IL_0072:
		{
			uint32_t L_15 = V_3;
			if ((!(((uint32_t)L_15) <= ((uint32_t)((int32_t)549791583)))))
			{
				goto IL_0095;
			}
		}

IL_007a:
		{
			uint32_t L_16 = V_3;
			if ((((int32_t)L_16) == ((int32_t)((int32_t)533013964))))
			{
				goto IL_03a9;
			}
		}

IL_0085:
		{
			uint32_t L_17 = V_3;
			if ((((int32_t)L_17) == ((int32_t)((int32_t)549791583))))
			{
				goto IL_03be;
			}
		}

IL_0090:
		{
			goto IL_071b;
		}

IL_0095:
		{
			uint32_t L_18 = V_3;
			if ((((int32_t)L_18) == ((int32_t)((int32_t)583346821))))
			{
				goto IL_0394;
			}
		}

IL_00a0:
		{
			uint32_t L_19 = V_3;
			if ((((int32_t)L_19) == ((int32_t)((int32_t)698754697))))
			{
				goto IL_02ec;
			}
		}

IL_00ab:
		{
			goto IL_071b;
		}

IL_00b0:
		{
			uint32_t L_20 = V_3;
			if ((!(((uint32_t)L_20) <= ((uint32_t)((int32_t)1235622516)))))
			{
				goto IL_00f6;
			}
		}

IL_00b8:
		{
			uint32_t L_21 = V_3;
			if ((!(((uint32_t)L_21) <= ((uint32_t)((int32_t)740612720)))))
			{
				goto IL_00db;
			}
		}

IL_00c0:
		{
			uint32_t L_22 = V_3;
			if ((((int32_t)L_22) == ((int32_t)((int32_t)705796271))))
			{
				goto IL_0316;
			}
		}

IL_00cb:
		{
			uint32_t L_23 = V_3;
			if ((((int32_t)L_23) == ((int32_t)((int32_t)740612720))))
			{
				goto IL_03d3;
			}
		}

IL_00d6:
		{
			goto IL_071b;
		}

IL_00db:
		{
			uint32_t L_24 = V_3;
			if ((((int32_t)L_24) == ((int32_t)((int32_t)1059843136))))
			{
				goto IL_0340;
			}
		}

IL_00e6:
		{
			uint32_t L_25 = V_3;
			if ((((int32_t)L_25) == ((int32_t)((int32_t)1235622516))))
			{
				goto IL_036a;
			}
		}

IL_00f1:
		{
			goto IL_071b;
		}

IL_00f6:
		{
			uint32_t L_26 = V_3;
			if ((!(((uint32_t)L_26) <= ((uint32_t)((int32_t)1320492961)))))
			{
				goto IL_0119;
			}
		}

IL_00fe:
		{
			uint32_t L_27 = V_3;
			if ((((int32_t)L_27) == ((int32_t)((int32_t)1310955452))))
			{
				goto IL_0490;
			}
		}

IL_0109:
		{
			uint32_t L_28 = V_3;
			if ((((int32_t)L_28) == ((int32_t)((int32_t)1320492961))))
			{
				goto IL_047b;
			}
		}

IL_0114:
		{
			goto IL_071b;
		}

IL_0119:
		{
			uint32_t L_29 = V_3;
			if ((((int32_t)L_29) == ((int32_t)((int32_t)1458352709))))
			{
				goto IL_0466;
			}
		}

IL_0124:
		{
			uint32_t L_30 = V_3;
			if ((((int32_t)L_30) == ((int32_t)((int32_t)1508062721))))
			{
				goto IL_04a5;
			}
		}

IL_012f:
		{
			goto IL_071b;
		}

IL_0134:
		{
			uint32_t L_31 = V_3;
			if ((!(((uint32_t)L_31) <= ((uint32_t)((int32_t)-1444332543)))))
			{
				goto IL_01c3;
			}
		}

IL_013f:
		{
			uint32_t L_32 = V_3;
			if ((!(((uint32_t)L_32) <= ((uint32_t)((int32_t)2129631044)))))
			{
				goto IL_0185;
			}
		}

IL_0147:
		{
			uint32_t L_33 = V_3;
			if ((!(((uint32_t)L_33) <= ((uint32_t)((int32_t)1640355324)))))
			{
				goto IL_016a;
			}
		}

IL_014f:
		{
			uint32_t L_34 = V_3;
			if ((((int32_t)L_34) == ((int32_t)((int32_t)1560124071))))
			{
				goto IL_04ba;
			}
		}

IL_015a:
		{
			uint32_t L_35 = V_3;
			if ((((int32_t)L_35) == ((int32_t)((int32_t)1640355324))))
			{
				goto IL_0451;
			}
		}

IL_0165:
		{
			goto IL_071b;
		}

IL_016a:
		{
			uint32_t L_36 = V_3;
			if ((((int32_t)L_36) == ((int32_t)((int32_t)1728801507))))
			{
				goto IL_026e;
			}
		}

IL_0175:
		{
			uint32_t L_37 = V_3;
			if ((((int32_t)L_37) == ((int32_t)((int32_t)2129631044))))
			{
				goto IL_03fd;
			}
		}

IL_0180:
		{
			goto IL_071b;
		}

IL_0185:
		{
			uint32_t L_38 = V_3;
			if ((!(((uint32_t)L_38) <= ((uint32_t)((int32_t)-1786286561)))))
			{
				goto IL_01a8;
			}
		}

IL_018d:
		{
			uint32_t L_39 = V_3;
			if ((((int32_t)L_39) == ((int32_t)((int32_t)-1925595674))))
			{
				goto IL_0412;
			}
		}

IL_0198:
		{
			uint32_t L_40 = V_3;
			if ((((int32_t)L_40) == ((int32_t)((int32_t)-1786286561))))
			{
				goto IL_0244;
			}
		}

IL_01a3:
		{
			goto IL_071b;
		}

IL_01a8:
		{
			uint32_t L_41 = V_3;
			if ((((int32_t)L_41) == ((int32_t)((int32_t)-1522491664))))
			{
				goto IL_0298;
			}
		}

IL_01b3:
		{
			uint32_t L_42 = V_3;
			if ((((int32_t)L_42) == ((int32_t)((int32_t)-1444332543))))
			{
				goto IL_0355;
			}
		}

IL_01be:
		{
			goto IL_071b;
		}

IL_01c3:
		{
			uint32_t L_43 = V_3;
			if ((!(((uint32_t)L_43) <= ((uint32_t)((int32_t)-558361902)))))
			{
				goto IL_0206;
			}
		}

IL_01cb:
		{
			uint32_t L_44 = V_3;
			if ((!(((uint32_t)L_44) <= ((uint32_t)((int32_t)-1180859054)))))
			{
				goto IL_01ee;
			}
		}

IL_01d3:
		{
			uint32_t L_45 = V_3;
			if ((((int32_t)L_45) == ((int32_t)((int32_t)-1335745110))))
			{
				goto IL_02c2;
			}
		}

IL_01de:
		{
			uint32_t L_46 = V_3;
			if ((((int32_t)L_46) == ((int32_t)((int32_t)-1180859054))))
			{
				goto IL_02ad;
			}
		}

IL_01e9:
		{
			goto IL_071b;
		}

IL_01ee:
		{
			uint32_t L_47 = V_3;
			if ((((int32_t)L_47) == ((int32_t)((int32_t)-708986046))))
			{
				goto IL_0259;
			}
		}

IL_01f6:
		{
			uint32_t L_48 = V_3;
			if ((((int32_t)L_48) == ((int32_t)((int32_t)-558361902))))
			{
				goto IL_037f;
			}
		}

IL_0201:
		{
			goto IL_071b;
		}

IL_0206:
		{
			uint32_t L_49 = V_3;
			if ((!(((uint32_t)L_49) <= ((uint32_t)((int32_t)-255211260)))))
			{
				goto IL_0229;
			}
		}

IL_020e:
		{
			uint32_t L_50 = V_3;
			if ((((int32_t)L_50) == ((int32_t)((int32_t)-345285761))))
			{
				goto IL_03e8;
			}
		}

IL_0219:
		{
			uint32_t L_51 = V_3;
			if ((((int32_t)L_51) == ((int32_t)((int32_t)-255211260))))
			{
				goto IL_0427;
			}
		}

IL_0224:
		{
			goto IL_071b;
		}

IL_0229:
		{
			uint32_t L_52 = V_3;
			if ((((int32_t)L_52) == ((int32_t)((int32_t)-42086080))))
			{
				goto IL_0301;
			}
		}

IL_0234:
		{
			uint32_t L_53 = V_3;
			if ((((int32_t)L_53) == ((int32_t)((int32_t)-25846038))))
			{
				goto IL_032b;
			}
		}

IL_023f:
		{
			goto IL_071b;
		}

IL_0244:
		{
			String_t* L_54 = V_2;
			bool L_55;
			L_55 = String_op_Equality_m50B3548E4AC232558190B0052877B290AA1D436A((String_t*)L_54, (String_t*)_stringLiteralEBF5FE0CBF3EEA67902EEA700B7216E3DB0D8E84, /*hidden argument*/NULL);
			if (L_55)
			{
				goto IL_04cf;
			}
		}

IL_0254:
		{
			goto IL_071b;
		}

IL_0259:
		{
			String_t* L_56 = V_2;
			bool L_57;
			L_57 = String_op_Equality_m50B3548E4AC232558190B0052877B290AA1D436A((String_t*)L_56, (String_t*)_stringLiteral647E0FB2B5E859CC4BD7C73623B82C8EFABA2563, /*hidden argument*/NULL);
			if (L_57)
			{
				goto IL_04e5;
			}
		}

IL_0269:
		{
			goto IL_071b;
		}

IL_026e:
		{
			String_t* L_58 = V_2;
			bool L_59;
			L_59 = String_op_Equality_m50B3548E4AC232558190B0052877B290AA1D436A((String_t*)L_58, (String_t*)_stringLiteralF9EE582B77C320A1F6A3DF72205857C4248BAC79, /*hidden argument*/NULL);
			if (L_59)
			{
				goto IL_04fb;
			}
		}

IL_027e:
		{
			goto IL_071b;
		}

IL_0283:
		{
			String_t* L_60 = V_2;
			bool L_61;
			L_61 = String_op_Equality_m50B3548E4AC232558190B0052877B290AA1D436A((String_t*)L_60, (String_t*)_stringLiteral53D3413057D7E52F44470A335C590748745352B1, /*hidden argument*/NULL);
			if (L_61)
			{
				goto IL_050c;
			}
		}

IL_0293:
		{
			goto IL_071b;
		}

IL_0298:
		{
			String_t* L_62 = V_2;
			bool L_63;
			L_63 = String_op_Equality_m50B3548E4AC232558190B0052877B290AA1D436A((String_t*)L_62, (String_t*)_stringLiteralC959D767B7F0BD38D9DA8A64A4750C3A0972E2A0, /*hidden argument*/NULL);
			if (L_63)
			{
				goto IL_0522;
			}
		}

IL_02a8:
		{
			goto IL_071b;
		}

IL_02ad:
		{
			String_t* L_64 = V_2;
			bool L_65;
			L_65 = String_op_Equality_m50B3548E4AC232558190B0052877B290AA1D436A((String_t*)L_64, (String_t*)_stringLiteral75C9716749EA210206E3467390B7A11F3F33DDFA, /*hidden argument*/NULL);
			if (L_65)
			{
				goto IL_0533;
			}
		}

IL_02bd:
		{
			goto IL_071b;
		}

IL_02c2:
		{
			String_t* L_66 = V_2;
			bool L_67;
			L_67 = String_op_Equality_m50B3548E4AC232558190B0052877B290AA1D436A((String_t*)L_66, (String_t*)_stringLiteral7606720A7AEF5939309A8E4FCB8274252FA3D7BF, /*hidden argument*/NULL);
			if (L_67)
			{
				goto IL_0544;
			}
		}

IL_02d2:
		{
			goto IL_071b;
		}

IL_02d7:
		{
			String_t* L_68 = V_2;
			bool L_69;
			L_69 = String_op_Equality_m50B3548E4AC232558190B0052877B290AA1D436A((String_t*)L_68, (String_t*)_stringLiteral71C5F9C3E2F3C81C5BBC7FD313F6938654E61138, /*hidden argument*/NULL);
			if (L_69)
			{
				goto IL_055a;
			}
		}

IL_02e7:
		{
			goto IL_071b;
		}

IL_02ec:
		{
			String_t* L_70 = V_2;
			bool L_71;
			L_71 = String_op_Equality_m50B3548E4AC232558190B0052877B290AA1D436A((String_t*)L_70, (String_t*)_stringLiteral3F1522C8DB7943F2AE3AA1563D3AC25D9C8B93D1, /*hidden argument*/NULL);
			if (L_71)
			{
				goto IL_0570;
			}
		}

IL_02fc:
		{
			goto IL_071b;
		}

IL_0301:
		{
			String_t* L_72 = V_2;
			bool L_73;
			L_73 = String_op_Equality_m50B3548E4AC232558190B0052877B290AA1D436A((String_t*)L_72, (String_t*)_stringLiteralF23E83744C9D6FC70D71B723AAED8006D6780BCB, /*hidden argument*/NULL);
			if (L_73)
			{
				goto IL_0586;
			}
		}

IL_0311:
		{
			goto IL_071b;
		}

IL_0316:
		{
			String_t* L_74 = V_2;
			bool L_75;
			L_75 = String_op_Equality_m50B3548E4AC232558190B0052877B290AA1D436A((String_t*)L_74, (String_t*)_stringLiteralB49A1DF483856544CEC6018E8C944DB6E16A8D57, /*hidden argument*/NULL);
			if (L_75)
			{
				goto IL_059c;
			}
		}

IL_0326:
		{
			goto IL_071b;
		}

IL_032b:
		{
			String_t* L_76 = V_2;
			bool L_77;
			L_77 = String_op_Equality_m50B3548E4AC232558190B0052877B290AA1D436A((String_t*)L_76, (String_t*)_stringLiteral3A04F86957625CB28FA670EECF997E6BAD45BBE7, /*hidden argument*/NULL);
			if (L_77)
			{
				goto IL_05b2;
			}
		}

IL_033b:
		{
			goto IL_071b;
		}

IL_0340:
		{
			String_t* L_78 = V_2;
			bool L_79;
			L_79 = String_op_Equality_m50B3548E4AC232558190B0052877B290AA1D436A((String_t*)L_78, (String_t*)_stringLiteral7A4A6E2A7090298F814A9D44C89F8634249BEF07, /*hidden argument*/NULL);
			if (L_79)
			{
				goto IL_05c8;
			}
		}

IL_0350:
		{
			goto IL_071b;
		}

IL_0355:
		{
			String_t* L_80 = V_2;
			bool L_81;
			L_81 = String_op_Equality_m50B3548E4AC232558190B0052877B290AA1D436A((String_t*)L_80, (String_t*)_stringLiteralF3FA58C10BBB9830102605E24AF89DC619908DFA, /*hidden argument*/NULL);
			if (L_81)
			{
				goto IL_05d9;
			}
		}

IL_0365:
		{
			goto IL_071b;
		}

IL_036a:
		{
			String_t* L_82 = V_2;
			bool L_83;
			L_83 = String_op_Equality_m50B3548E4AC232558190B0052877B290AA1D436A((String_t*)L_82, (String_t*)_stringLiteralBA9362732D25B1644B7D8DEC5DF6F036A4A66DE5, /*hidden argument*/NULL);
			if (L_83)
			{
				goto IL_05ee;
			}
		}

IL_037a:
		{
			goto IL_071b;
		}

IL_037f:
		{
			String_t* L_84 = V_2;
			bool L_85;
			L_85 = String_op_Equality_m50B3548E4AC232558190B0052877B290AA1D436A((String_t*)L_84, (String_t*)_stringLiteral95F57476C0AA778364404E7CCCD7499BF1BF3757, /*hidden argument*/NULL);
			if (L_85)
			{
				goto IL_05fe;
			}
		}

IL_038f:
		{
			goto IL_071b;
		}

IL_0394:
		{
			String_t* L_86 = V_2;
			bool L_87;
			L_87 = String_op_Equality_m50B3548E4AC232558190B0052877B290AA1D436A((String_t*)L_86, (String_t*)_stringLiteral9AB5ADF8A8A53110245466F7C226F7935F5FE95F, /*hidden argument*/NULL);
			if (L_87)
			{
				goto IL_060f;
			}
		}

IL_03a4:
		{
			goto IL_071b;
		}

IL_03a9:
		{
			String_t* L_88 = V_2;
			bool L_89;
			L_89 = String_op_Equality_m50B3548E4AC232558190B0052877B290AA1D436A((String_t*)L_88, (String_t*)_stringLiteralEA8FBF382D8AC9EDB8FFC14A350641B987F5C631, /*hidden argument*/NULL);
			if (L_89)
			{
				goto IL_0620;
			}
		}

IL_03b9:
		{
			goto IL_071b;
		}

IL_03be:
		{
			String_t* L_90 = V_2;
			bool L_91;
			L_91 = String_op_Equality_m50B3548E4AC232558190B0052877B290AA1D436A((String_t*)L_90, (String_t*)_stringLiteral201D9D00BB60DC2318D21CF9902290EFE255D5DC, /*hidden argument*/NULL);
			if (L_91)
			{
				goto IL_0631;
			}
		}

IL_03ce:
		{
			goto IL_071b;
		}

IL_03d3:
		{
			String_t* L_92 = V_2;
			bool L_93;
			L_93 = String_op_Equality_m50B3548E4AC232558190B0052877B290AA1D436A((String_t*)L_92, (String_t*)_stringLiteral65B008F04EC40A696263EF679CF274BD10999A5D, /*hidden argument*/NULL);
			if (L_93)
			{
				goto IL_0642;
			}
		}

IL_03e3:
		{
			goto IL_071b;
		}

IL_03e8:
		{
			String_t* L_94 = V_2;
			bool L_95;
			L_95 = String_op_Equality_m50B3548E4AC232558190B0052877B290AA1D436A((String_t*)L_94, (String_t*)_stringLiteralF38CFAE6A91D072D4453C29FF44D81D459A582F1, /*hidden argument*/NULL);
			if (L_95)
			{
				goto IL_0653;
			}
		}

IL_03f8:
		{
			goto IL_071b;
		}

IL_03fd:
		{
			String_t* L_96 = V_2;
			bool L_97;
			L_97 = String_op_Equality_m50B3548E4AC232558190B0052877B290AA1D436A((String_t*)L_96, (String_t*)_stringLiteral3BC15E3C2F40466B2DC85C4776499817B8306CBB, /*hidden argument*/NULL);
			if (L_97)
			{
				goto IL_0669;
			}
		}

IL_040d:
		{
			goto IL_071b;
		}

IL_0412:
		{
			String_t* L_98 = V_2;
			bool L_99;
			L_99 = String_op_Equality_m50B3548E4AC232558190B0052877B290AA1D436A((String_t*)L_98, (String_t*)_stringLiteralCE18B047107AA23D1AA9B2ED32D316148E02655F, /*hidden argument*/NULL);
			if (L_99)
			{
				goto IL_067f;
			}
		}

IL_0422:
		{
			goto IL_071b;
		}

IL_0427:
		{
			String_t* L_100 = V_2;
			bool L_101;
			L_101 = String_op_Equality_m50B3548E4AC232558190B0052877B290AA1D436A((String_t*)L_100, (String_t*)_stringLiteral83AC9669A9053DD15B9F2E82D2CE2369EFE131BA, /*hidden argument*/NULL);
			if (L_101)
			{
				goto IL_0695;
			}
		}

IL_0437:
		{
			goto IL_071b;
		}

IL_043c:
		{
			String_t* L_102 = V_2;
			bool L_103;
			L_103 = String_op_Equality_m50B3548E4AC232558190B0052877B290AA1D436A((String_t*)L_102, (String_t*)_stringLiteralECAEEB225F8689DE45DEB4FA21CE34E1960B1B50, /*hidden argument*/NULL);
			if (L_103)
			{
				goto IL_06a3;
			}
		}

IL_044c:
		{
			goto IL_071b;
		}

IL_0451:
		{
			String_t* L_104 = V_2;
			bool L_105;
			L_105 = String_op_Equality_m50B3548E4AC232558190B0052877B290AA1D436A((String_t*)L_104, (String_t*)_stringLiteral2EE7B6B0E37E14930BBA497867139BFD0617CE04, /*hidden argument*/NULL);
			if (L_105)
			{
				goto IL_06b1;
			}
		}

IL_0461:
		{
			goto IL_071b;
		}

IL_0466:
		{
			String_t* L_106 = V_2;
			bool L_107;
			L_107 = String_op_Equality_m50B3548E4AC232558190B0052877B290AA1D436A((String_t*)L_106, (String_t*)_stringLiteralF2AF7DD0BFF41B7B35037F018DAABE7DCF357A7B, /*hidden argument*/NULL);
			if (L_107)
			{
				goto IL_06bf;
			}
		}

IL_0476:
		{
			goto IL_071b;
		}

IL_047b:
		{
			String_t* L_108 = V_2;
			bool L_109;
			L_109 = String_op_Equality_m50B3548E4AC232558190B0052877B290AA1D436A((String_t*)L_108, (String_t*)_stringLiteral7FF61C3A55BCA1287974D8740F945250B3F0F084, /*hidden argument*/NULL);
			if (L_109)
			{
				goto IL_06d2;
			}
		}

IL_048b:
		{
			goto IL_071b;
		}

IL_0490:
		{
			String_t* L_110 = V_2;
			bool L_111;
			L_111 = String_op_Equality_m50B3548E4AC232558190B0052877B290AA1D436A((String_t*)L_110, (String_t*)_stringLiteral2ADFC3FFF7C52D554F0435A348A5345C9FCD7FF8, /*hidden argument*/NULL);
			if (L_111)
			{
				goto IL_06e5;
			}
		}

IL_04a0:
		{
			goto IL_071b;
		}

IL_04a5:
		{
			String_t* L_112 = V_2;
			bool L_113;
			L_113 = String_op_Equality_m50B3548E4AC232558190B0052877B290AA1D436A((String_t*)L_112, (String_t*)_stringLiteral2E201D1972661439FD3C8523C55723E7E9BCC7DA, /*hidden argument*/NULL);
			if (L_113)
			{
				goto IL_06f7;
			}
		}

IL_04b5:
		{
			goto IL_071b;
		}

IL_04ba:
		{
			String_t* L_114 = V_2;
			bool L_115;
			L_115 = String_op_Equality_m50B3548E4AC232558190B0052877B290AA1D436A((String_t*)L_114, (String_t*)_stringLiteralCD44AC57FFE6CAC7824F4CAA223F1BB8B4CB0D73, /*hidden argument*/NULL);
			if (L_115)
			{
				goto IL_0709;
			}
		}

IL_04ca:
		{
			goto IL_071b;
		}

IL_04cf:
		{
			// instance.width = reader.Read<System.Int32>(ES3Type_int.Instance);
			RenderTexture_t5FE7A5B47EF962A0E8D7BEBA05E9FC87D49A1849 * L_116 = V_0;
			ES3Reader_t2780AF8AA61DA2A817115CEF8612AC0E494D03C9 * L_117 = ___reader0;
			IL2CPP_RUNTIME_CLASS_INIT(ES3Type_int_tF64C15D40AD0CC7C15BCD1CEC3C5C6BF837BD167_il2cpp_TypeInfo_var);
			ES3Type_t8FBECB7AE75168648B9524E0C2A38DAD4555421D * L_118 = ((ES3Type_int_tF64C15D40AD0CC7C15BCD1CEC3C5C6BF837BD167_StaticFields*)il2cpp_codegen_static_fields_for(ES3Type_int_tF64C15D40AD0CC7C15BCD1CEC3C5C6BF837BD167_il2cpp_TypeInfo_var))->get_Instance_12();
			NullCheck((ES3Reader_t2780AF8AA61DA2A817115CEF8612AC0E494D03C9 *)L_117);
			int32_t L_119;
			L_119 = GenericVirtFuncInvoker1< int32_t, ES3Type_t8FBECB7AE75168648B9524E0C2A38DAD4555421D * >::Invoke(ES3Reader_Read_TisInt32_tFDE5F8CD43D10453F6A2E0C77FE48C6CC7009046_m2B74AA6627F5B1D21171D56C42F71DE5A7C1B4A6_RuntimeMethod_var, (ES3Reader_t2780AF8AA61DA2A817115CEF8612AC0E494D03C9 *)L_117, (ES3Type_t8FBECB7AE75168648B9524E0C2A38DAD4555421D *)L_118);
			NullCheck((Texture_t9FE0218A1EEDF266E8C85879FE123265CACC95AE *)L_116);
			VirtActionInvoker1< int32_t >::Invoke(6 /* System.Void UnityEngine.Texture::set_width(System.Int32) */, (Texture_t9FE0218A1EEDF266E8C85879FE123265CACC95AE *)L_116, (int32_t)L_119);
			// break;
			goto IL_0721;
		}

IL_04e5:
		{
			// instance.height = reader.Read<System.Int32>(ES3Type_int.Instance);
			RenderTexture_t5FE7A5B47EF962A0E8D7BEBA05E9FC87D49A1849 * L_120 = V_0;
			ES3Reader_t2780AF8AA61DA2A817115CEF8612AC0E494D03C9 * L_121 = ___reader0;
			IL2CPP_RUNTIME_CLASS_INIT(ES3Type_int_tF64C15D40AD0CC7C15BCD1CEC3C5C6BF837BD167_il2cpp_TypeInfo_var);
			ES3Type_t8FBECB7AE75168648B9524E0C2A38DAD4555421D * L_122 = ((ES3Type_int_tF64C15D40AD0CC7C15BCD1CEC3C5C6BF837BD167_StaticFields*)il2cpp_codegen_static_fields_for(ES3Type_int_tF64C15D40AD0CC7C15BCD1CEC3C5C6BF837BD167_il2cpp_TypeInfo_var))->get_Instance_12();
			NullCheck((ES3Reader_t2780AF8AA61DA2A817115CEF8612AC0E494D03C9 *)L_121);
			int32_t L_123;
			L_123 = GenericVirtFuncInvoker1< int32_t, ES3Type_t8FBECB7AE75168648B9524E0C2A38DAD4555421D * >::Invoke(ES3Reader_Read_TisInt32_tFDE5F8CD43D10453F6A2E0C77FE48C6CC7009046_m2B74AA6627F5B1D21171D56C42F71DE5A7C1B4A6_RuntimeMethod_var, (ES3Reader_t2780AF8AA61DA2A817115CEF8612AC0E494D03C9 *)L_121, (ES3Type_t8FBECB7AE75168648B9524E0C2A38DAD4555421D *)L_122);
			NullCheck((Texture_t9FE0218A1EEDF266E8C85879FE123265CACC95AE *)L_120);
			VirtActionInvoker1< int32_t >::Invoke(8 /* System.Void UnityEngine.Texture::set_height(System.Int32) */, (Texture_t9FE0218A1EEDF266E8C85879FE123265CACC95AE *)L_120, (int32_t)L_123);
			// break;
			goto IL_0721;
		}

IL_04fb:
		{
			// instance.dimension = reader.Read<UnityEngine.Rendering.TextureDimension>();
			RenderTexture_t5FE7A5B47EF962A0E8D7BEBA05E9FC87D49A1849 * L_124 = V_0;
			ES3Reader_t2780AF8AA61DA2A817115CEF8612AC0E494D03C9 * L_125 = ___reader0;
			NullCheck((ES3Reader_t2780AF8AA61DA2A817115CEF8612AC0E494D03C9 *)L_125);
			int32_t L_126;
			L_126 = GenericVirtFuncInvoker0< int32_t >::Invoke(ES3Reader_Read_TisTextureDimension_tADCCB7C1D30E4D1182651BA9094B4DE61B63EACC_m19EAA3B93D10636C17A62A3D8437349223CFD988_RuntimeMethod_var, (ES3Reader_t2780AF8AA61DA2A817115CEF8612AC0E494D03C9 *)L_125);
			NullCheck((Texture_t9FE0218A1EEDF266E8C85879FE123265CACC95AE *)L_124);
			VirtActionInvoker1< int32_t >::Invoke(10 /* System.Void UnityEngine.Texture::set_dimension(UnityEngine.Rendering.TextureDimension) */, (Texture_t9FE0218A1EEDF266E8C85879FE123265CACC95AE *)L_124, (int32_t)L_126);
			// break;
			goto IL_0721;
		}

IL_050c:
		{
			// instance.useMipMap = reader.Read<System.Boolean>(ES3Type_bool.Instance);
			RenderTexture_t5FE7A5B47EF962A0E8D7BEBA05E9FC87D49A1849 * L_127 = V_0;
			ES3Reader_t2780AF8AA61DA2A817115CEF8612AC0E494D03C9 * L_128 = ___reader0;
			IL2CPP_RUNTIME_CLASS_INIT(ES3Type_bool_t8F309F7B9CC735FF1DEE68081B6E3CAB367745F4_il2cpp_TypeInfo_var);
			ES3Type_t8FBECB7AE75168648B9524E0C2A38DAD4555421D * L_129 = ((ES3Type_bool_t8F309F7B9CC735FF1DEE68081B6E3CAB367745F4_StaticFields*)il2cpp_codegen_static_fields_for(ES3Type_bool_t8F309F7B9CC735FF1DEE68081B6E3CAB367745F4_il2cpp_TypeInfo_var))->get_Instance_12();
			NullCheck((ES3Reader_t2780AF8AA61DA2A817115CEF8612AC0E494D03C9 *)L_128);
			bool L_130;
			L_130 = GenericVirtFuncInvoker1< bool, ES3Type_t8FBECB7AE75168648B9524E0C2A38DAD4555421D * >::Invoke(ES3Reader_Read_TisBoolean_t07D1E3F34E4813023D64F584DFF7B34C9D922F37_mC6D1B158268FF9B97822FF9F5B37FB1723FEDA22_RuntimeMethod_var, (ES3Reader_t2780AF8AA61DA2A817115CEF8612AC0E494D03C9 *)L_128, (ES3Type_t8FBECB7AE75168648B9524E0C2A38DAD4555421D *)L_129);
			NullCheck((RenderTexture_t5FE7A5B47EF962A0E8D7BEBA05E9FC87D49A1849 *)L_127);
			RenderTexture_set_useMipMap_mAE1437C3D7D21441891A612C3B812EE9C379F126((RenderTexture_t5FE7A5B47EF962A0E8D7BEBA05E9FC87D49A1849 *)L_127, (bool)L_130, /*hidden argument*/NULL);
			// break;
			goto IL_0721;
		}

IL_0522:
		{
			// instance.memorylessMode = reader.Read<UnityEngine.RenderTextureMemoryless>();
			RenderTexture_t5FE7A5B47EF962A0E8D7BEBA05E9FC87D49A1849 * L_131 = V_0;
			ES3Reader_t2780AF8AA61DA2A817115CEF8612AC0E494D03C9 * L_132 = ___reader0;
			NullCheck((ES3Reader_t2780AF8AA61DA2A817115CEF8612AC0E494D03C9 *)L_132);
			int32_t L_133;
			L_133 = GenericVirtFuncInvoker0< int32_t >::Invoke(ES3Reader_Read_TisRenderTextureMemoryless_t37547D68C2186D2650440F719302CDA4A3BB7F67_m3A980BA15AADBBB8393C3BC88CE17EEDDC89B027_RuntimeMethod_var, (ES3Reader_t2780AF8AA61DA2A817115CEF8612AC0E494D03C9 *)L_132);
			NullCheck((RenderTexture_t5FE7A5B47EF962A0E8D7BEBA05E9FC87D49A1849 *)L_131);
			RenderTexture_set_memorylessMode_mE48B2A38E9374A7BB419383B438790347474EFC1((RenderTexture_t5FE7A5B47EF962A0E8D7BEBA05E9FC87D49A1849 *)L_131, (int32_t)L_133, /*hidden argument*/NULL);
			// break;
			goto IL_0721;
		}

IL_0533:
		{
			// instance.format = reader.Read<UnityEngine.RenderTextureFormat>();
			RenderTexture_t5FE7A5B47EF962A0E8D7BEBA05E9FC87D49A1849 * L_134 = V_0;
			ES3Reader_t2780AF8AA61DA2A817115CEF8612AC0E494D03C9 * L_135 = ___reader0;
			NullCheck((ES3Reader_t2780AF8AA61DA2A817115CEF8612AC0E494D03C9 *)L_135);
			int32_t L_136;
			L_136 = GenericVirtFuncInvoker0< int32_t >::Invoke(ES3Reader_Read_TisRenderTextureFormat_t8371287102ED67772EF78229CF4AB9D38C2CD626_mE6358E03407F5C15B58B292C79D4770DE3FAC95A_RuntimeMethod_var, (ES3Reader_t2780AF8AA61DA2A817115CEF8612AC0E494D03C9 *)L_135);
			NullCheck((RenderTexture_t5FE7A5B47EF962A0E8D7BEBA05E9FC87D49A1849 *)L_134);
			RenderTexture_set_format_m32D42DC33DB151B69E81D0D93F36DE7450CFC23D((RenderTexture_t5FE7A5B47EF962A0E8D7BEBA05E9FC87D49A1849 *)L_134, (int32_t)L_136, /*hidden argument*/NULL);
			// break;
			goto IL_0721;
		}

IL_0544:
		{
			// instance.autoGenerateMips = reader.Read<System.Boolean>(ES3Type_bool.Instance);
			RenderTexture_t5FE7A5B47EF962A0E8D7BEBA05E9FC87D49A1849 * L_137 = V_0;
			ES3Reader_t2780AF8AA61DA2A817115CEF8612AC0E494D03C9 * L_138 = ___reader0;
			IL2CPP_RUNTIME_CLASS_INIT(ES3Type_bool_t8F309F7B9CC735FF1DEE68081B6E3CAB367745F4_il2cpp_TypeInfo_var);
			ES3Type_t8FBECB7AE75168648B9524E0C2A38DAD4555421D * L_139 = ((ES3Type_bool_t8F309F7B9CC735FF1DEE68081B6E3CAB367745F4_StaticFields*)il2cpp_codegen_static_fields_for(ES3Type_bool_t8F309F7B9CC735FF1DEE68081B6E3CAB367745F4_il2cpp_TypeInfo_var))->get_Instance_12();
			NullCheck((ES3Reader_t2780AF8AA61DA2A817115CEF8612AC0E494D03C9 *)L_138);
			bool L_140;
			L_140 = GenericVirtFuncInvoker1< bool, ES3Type_t8FBECB7AE75168648B9524E0C2A38DAD4555421D * >::Invoke(ES3Reader_Read_TisBoolean_t07D1E3F34E4813023D64F584DFF7B34C9D922F37_mC6D1B158268FF9B97822FF9F5B37FB1723FEDA22_RuntimeMethod_var, (ES3Reader_t2780AF8AA61DA2A817115CEF8612AC0E494D03C9 *)L_138, (ES3Type_t8FBECB7AE75168648B9524E0C2A38DAD4555421D *)L_139);
			NullCheck((RenderTexture_t5FE7A5B47EF962A0E8D7BEBA05E9FC87D49A1849 *)L_137);
			RenderTexture_set_autoGenerateMips_m0F02D60D4C4D4790B354451732F2DA6BA12D2E63((RenderTexture_t5FE7A5B47EF962A0E8D7BEBA05E9FC87D49A1849 *)L_137, (bool)L_140, /*hidden argument*/NULL);
			// break;
			goto IL_0721;
		}

IL_055a:
		{
			// instance.volumeDepth = reader.Read<System.Int32>(ES3Type_int.Instance);
			RenderTexture_t5FE7A5B47EF962A0E8D7BEBA05E9FC87D49A1849 * L_141 = V_0;
			ES3Reader_t2780AF8AA61DA2A817115CEF8612AC0E494D03C9 * L_142 = ___reader0;
			IL2CPP_RUNTIME_CLASS_INIT(ES3Type_int_tF64C15D40AD0CC7C15BCD1CEC3C5C6BF837BD167_il2cpp_TypeInfo_var);
			ES3Type_t8FBECB7AE75168648B9524E0C2A38DAD4555421D * L_143 = ((ES3Type_int_tF64C15D40AD0CC7C15BCD1CEC3C5C6BF837BD167_StaticFields*)il2cpp_codegen_static_fields_for(ES3Type_int_tF64C15D40AD0CC7C15BCD1CEC3C5C6BF837BD167_il2cpp_TypeInfo_var))->get_Instance_12();
			NullCheck((ES3Reader_t2780AF8AA61DA2A817115CEF8612AC0E494D03C9 *)L_142);
			int32_t L_144;
			L_144 = GenericVirtFuncInvoker1< int32_t, ES3Type_t8FBECB7AE75168648B9524E0C2A38DAD4555421D * >::Invoke(ES3Reader_Read_TisInt32_tFDE5F8CD43D10453F6A2E0C77FE48C6CC7009046_m2B74AA6627F5B1D21171D56C42F71DE5A7C1B4A6_RuntimeMethod_var, (ES3Reader_t2780AF8AA61DA2A817115CEF8612AC0E494D03C9 *)L_142, (ES3Type_t8FBECB7AE75168648B9524E0C2A38DAD4555421D *)L_143);
			NullCheck((RenderTexture_t5FE7A5B47EF962A0E8D7BEBA05E9FC87D49A1849 *)L_141);
			RenderTexture_set_volumeDepth_m01D7BD50386DDAE777CE3CB9B60FDD7DE798AC93((RenderTexture_t5FE7A5B47EF962A0E8D7BEBA05E9FC87D49A1849 *)L_141, (int32_t)L_144, /*hidden argument*/NULL);
			// break;
			goto IL_0721;
		}

IL_0570:
		{
			// instance.antiAliasing = reader.Read<System.Int32>(ES3Type_int.Instance);
			RenderTexture_t5FE7A5B47EF962A0E8D7BEBA05E9FC87D49A1849 * L_145 = V_0;
			ES3Reader_t2780AF8AA61DA2A817115CEF8612AC0E494D03C9 * L_146 = ___reader0;
			IL2CPP_RUNTIME_CLASS_INIT(ES3Type_int_tF64C15D40AD0CC7C15BCD1CEC3C5C6BF837BD167_il2cpp_TypeInfo_var);
			ES3Type_t8FBECB7AE75168648B9524E0C2A38DAD4555421D * L_147 = ((ES3Type_int_tF64C15D40AD0CC7C15BCD1CEC3C5C6BF837BD167_StaticFields*)il2cpp_codegen_static_fields_for(ES3Type_int_tF64C15D40AD0CC7C15BCD1CEC3C5C6BF837BD167_il2cpp_TypeInfo_var))->get_Instance_12();
			NullCheck((ES3Reader_t2780AF8AA61DA2A817115CEF8612AC0E494D03C9 *)L_146);
			int32_t L_148;
			L_148 = GenericVirtFuncInvoker1< int32_t, ES3Type_t8FBECB7AE75168648B9524E0C2A38DAD4555421D * >::Invoke(ES3Reader_Read_TisInt32_tFDE5F8CD43D10453F6A2E0C77FE48C6CC7009046_m2B74AA6627F5B1D21171D56C42F71DE5A7C1B4A6_RuntimeMethod_var, (ES3Reader_t2780AF8AA61DA2A817115CEF8612AC0E494D03C9 *)L_146, (ES3Type_t8FBECB7AE75168648B9524E0C2A38DAD4555421D *)L_147);
			NullCheck((RenderTexture_t5FE7A5B47EF962A0E8D7BEBA05E9FC87D49A1849 *)L_145);
			RenderTexture_set_antiAliasing_m4D37900B7E23CA0D33F109DB8DF21265DB70C38F((RenderTexture_t5FE7A5B47EF962A0E8D7BEBA05E9FC87D49A1849 *)L_145, (int32_t)L_148, /*hidden argument*/NULL);
			// break;
			goto IL_0721;
		}

IL_0586:
		{
			// instance.enableRandomWrite = reader.Read<System.Boolean>(ES3Type_bool.Instance);
			RenderTexture_t5FE7A5B47EF962A0E8D7BEBA05E9FC87D49A1849 * L_149 = V_0;
			ES3Reader_t2780AF8AA61DA2A817115CEF8612AC0E494D03C9 * L_150 = ___reader0;
			IL2CPP_RUNTIME_CLASS_INIT(ES3Type_bool_t8F309F7B9CC735FF1DEE68081B6E3CAB367745F4_il2cpp_TypeInfo_var);
			ES3Type_t8FBECB7AE75168648B9524E0C2A38DAD4555421D * L_151 = ((ES3Type_bool_t8F309F7B9CC735FF1DEE68081B6E3CAB367745F4_StaticFields*)il2cpp_codegen_static_fields_for(ES3Type_bool_t8F309F7B9CC735FF1DEE68081B6E3CAB367745F4_il2cpp_TypeInfo_var))->get_Instance_12();
			NullCheck((ES3Reader_t2780AF8AA61DA2A817115CEF8612AC0E494D03C9 *)L_150);
			bool L_152;
			L_152 = GenericVirtFuncInvoker1< bool, ES3Type_t8FBECB7AE75168648B9524E0C2A38DAD4555421D * >::Invoke(ES3Reader_Read_TisBoolean_t07D1E3F34E4813023D64F584DFF7B34C9D922F37_mC6D1B158268FF9B97822FF9F5B37FB1723FEDA22_RuntimeMethod_var, (ES3Reader_t2780AF8AA61DA2A817115CEF8612AC0E494D03C9 *)L_150, (ES3Type_t8FBECB7AE75168648B9524E0C2A38DAD4555421D *)L_151);
			NullCheck((RenderTexture_t5FE7A5B47EF962A0E8D7BEBA05E9FC87D49A1849 *)L_149);
			RenderTexture_set_enableRandomWrite_m024F49DB3CA3B02FA0EEBB3EACB37E6228CAA183((RenderTexture_t5FE7A5B47EF962A0E8D7BEBA05E9FC87D49A1849 *)L_149, (bool)L_152, /*hidden argument*/NULL);
			// break;
			goto IL_0721;
		}

IL_059c:
		{
			// instance.isPowerOfTwo = reader.Read<System.Boolean>(ES3Type_bool.Instance);
			RenderTexture_t5FE7A5B47EF962A0E8D7BEBA05E9FC87D49A1849 * L_153 = V_0;
			ES3Reader_t2780AF8AA61DA2A817115CEF8612AC0E494D03C9 * L_154 = ___reader0;
			IL2CPP_RUNTIME_CLASS_INIT(ES3Type_bool_t8F309F7B9CC735FF1DEE68081B6E3CAB367745F4_il2cpp_TypeInfo_var);
			ES3Type_t8FBECB7AE75168648B9524E0C2A38DAD4555421D * L_155 = ((ES3Type_bool_t8F309F7B9CC735FF1DEE68081B6E3CAB367745F4_StaticFields*)il2cpp_codegen_static_fields_for(ES3Type_bool_t8F309F7B9CC735FF1DEE68081B6E3CAB367745F4_il2cpp_TypeInfo_var))->get_Instance_12();
			NullCheck((ES3Reader_t2780AF8AA61DA2A817115CEF8612AC0E494D03C9 *)L_154);
			bool L_156;
			L_156 = GenericVirtFuncInvoker1< bool, ES3Type_t8FBECB7AE75168648B9524E0C2A38DAD4555421D * >::Invoke(ES3Reader_Read_TisBoolean_t07D1E3F34E4813023D64F584DFF7B34C9D922F37_mC6D1B158268FF9B97822FF9F5B37FB1723FEDA22_RuntimeMethod_var, (ES3Reader_t2780AF8AA61DA2A817115CEF8612AC0E494D03C9 *)L_154, (ES3Type_t8FBECB7AE75168648B9524E0C2A38DAD4555421D *)L_155);
			NullCheck((RenderTexture_t5FE7A5B47EF962A0E8D7BEBA05E9FC87D49A1849 *)L_153);
			RenderTexture_set_isPowerOfTwo_mA6D34F610DF27C40422DF5815892B45C656F1317((RenderTexture_t5FE7A5B47EF962A0E8D7BEBA05E9FC87D49A1849 *)L_153, (bool)L_156, /*hidden argument*/NULL);
			// break;
			goto IL_0721;
		}

IL_05b2:
		{
			// instance.depth = reader.Read<System.Int32>(ES3Type_int.Instance);
			RenderTexture_t5FE7A5B47EF962A0E8D7BEBA05E9FC87D49A1849 * L_157 = V_0;
			ES3Reader_t2780AF8AA61DA2A817115CEF8612AC0E494D03C9 * L_158 = ___reader0;
			IL2CPP_RUNTIME_CLASS_INIT(ES3Type_int_tF64C15D40AD0CC7C15BCD1CEC3C5C6BF837BD167_il2cpp_TypeInfo_var);
			ES3Type_t8FBECB7AE75168648B9524E0C2A38DAD4555421D * L_159 = ((ES3Type_int_tF64C15D40AD0CC7C15BCD1CEC3C5C6BF837BD167_StaticFields*)il2cpp_codegen_static_fields_for(ES3Type_int_tF64C15D40AD0CC7C15BCD1CEC3C5C6BF837BD167_il2cpp_TypeInfo_var))->get_Instance_12();
			NullCheck((ES3Reader_t2780AF8AA61DA2A817115CEF8612AC0E494D03C9 *)L_158);
			int32_t L_160;
			L_160 = GenericVirtFuncInvoker1< int32_t, ES3Type_t8FBECB7AE75168648B9524E0C2A38DAD4555421D * >::Invoke(ES3Reader_Read_TisInt32_tFDE5F8CD43D10453F6A2E0C77FE48C6CC7009046_m2B74AA6627F5B1D21171D56C42F71DE5A7C1B4A6_RuntimeMethod_var, (ES3Reader_t2780AF8AA61DA2A817115CEF8612AC0E494D03C9 *)L_158, (ES3Type_t8FBECB7AE75168648B9524E0C2A38DAD4555421D *)L_159);
			NullCheck((RenderTexture_t5FE7A5B47EF962A0E8D7BEBA05E9FC87D49A1849 *)L_157);
			RenderTexture_set_depth_mA57CEFEDDB45D0429FAC9532A631839F523944A3((RenderTexture_t5FE7A5B47EF962A0E8D7BEBA05E9FC87D49A1849 *)L_157, (int32_t)L_160, /*hidden argument*/NULL);
			// break;
			goto IL_0721;
		}

IL_05c8:
		{
			// instance.descriptor = reader.Read<UnityEngine.RenderTextureDescriptor>();
			RenderTexture_t5FE7A5B47EF962A0E8D7BEBA05E9FC87D49A1849 * L_161 = V_0;
			ES3Reader_t2780AF8AA61DA2A817115CEF8612AC0E494D03C9 * L_162 = ___reader0;
			NullCheck((ES3Reader_t2780AF8AA61DA2A817115CEF8612AC0E494D03C9 *)L_162);
			RenderTextureDescriptor_t67FF189E1F35AEB5D6C43A2D7103F3A8A8CA0B47  L_163;
			L_163 = GenericVirtFuncInvoker0< RenderTextureDescriptor_t67FF189E1F35AEB5D6C43A2D7103F3A8A8CA0B47  >::Invoke(ES3Reader_Read_TisRenderTextureDescriptor_t67FF189E1F35AEB5D6C43A2D7103F3A8A8CA0B47_m427886ADAAF96C7BA9BD423544128494F96D69E7_RuntimeMethod_var, (ES3Reader_t2780AF8AA61DA2A817115CEF8612AC0E494D03C9 *)L_162);
			NullCheck((RenderTexture_t5FE7A5B47EF962A0E8D7BEBA05E9FC87D49A1849 *)L_161);
			RenderTexture_set_descriptor_m3C8E31AE4644B23719A12345771D1B85EB6E5881((RenderTexture_t5FE7A5B47EF962A0E8D7BEBA05E9FC87D49A1849 *)L_161, (RenderTextureDescriptor_t67FF189E1F35AEB5D6C43A2D7103F3A8A8CA0B47 )L_163, /*hidden argument*/NULL);
			// break;
			goto IL_0721;
		}

IL_05d9:
		{
			// UnityEngine.RenderTexture.masterTextureLimit = reader.Read<System.Int32>(ES3Type_int.Instance);
			ES3Reader_t2780AF8AA61DA2A817115CEF8612AC0E494D03C9 * L_164 = ___reader0;
			IL2CPP_RUNTIME_CLASS_INIT(ES3Type_int_tF64C15D40AD0CC7C15BCD1CEC3C5C6BF837BD167_il2cpp_TypeInfo_var);
			ES3Type_t8FBECB7AE75168648B9524E0C2A38DAD4555421D * L_165 = ((ES3Type_int_tF64C15D40AD0CC7C15BCD1CEC3C5C6BF837BD167_StaticFields*)il2cpp_codegen_static_fields_for(ES3Type_int_tF64C15D40AD0CC7C15BCD1CEC3C5C6BF837BD167_il2cpp_TypeInfo_var))->get_Instance_12();
			NullCheck((ES3Reader_t2780AF8AA61DA2A817115CEF8612AC0E494D03C9 *)L_164);
			int32_t L_166;
			L_166 = GenericVirtFuncInvoker1< int32_t, ES3Type_t8FBECB7AE75168648B9524E0C2A38DAD4555421D * >::Invoke(ES3Reader_Read_TisInt32_tFDE5F8CD43D10453F6A2E0C77FE48C6CC7009046_m2B74AA6627F5B1D21171D56C42F71DE5A7C1B4A6_RuntimeMethod_var, (ES3Reader_t2780AF8AA61DA2A817115CEF8612AC0E494D03C9 *)L_164, (ES3Type_t8FBECB7AE75168648B9524E0C2A38DAD4555421D *)L_165);
			IL2CPP_RUNTIME_CLASS_INIT(Texture_t9FE0218A1EEDF266E8C85879FE123265CACC95AE_il2cpp_TypeInfo_var);
			Texture_set_masterTextureLimit_m94A531A20A54A86AF7B88A56F72709CE556B7DFF((int32_t)L_166, /*hidden argument*/NULL);
			// break;
			goto IL_0721;
		}

IL_05ee:
		{
			// UnityEngine.RenderTexture.anisotropicFiltering = reader.Read<UnityEngine.AnisotropicFiltering>();
			ES3Reader_t2780AF8AA61DA2A817115CEF8612AC0E494D03C9 * L_167 = ___reader0;
			NullCheck((ES3Reader_t2780AF8AA61DA2A817115CEF8612AC0E494D03C9 *)L_167);
			int32_t L_168;
			L_168 = GenericVirtFuncInvoker0< int32_t >::Invoke(ES3Reader_Read_TisAnisotropicFiltering_tAC3D1448B262D5869946CD1CDD2C8DAE3A7A537B_mAF1268AAC3E461D6E0604A19FAF0325873B6EC8A_RuntimeMethod_var, (ES3Reader_t2780AF8AA61DA2A817115CEF8612AC0E494D03C9 *)L_167);
			IL2CPP_RUNTIME_CLASS_INIT(Texture_t9FE0218A1EEDF266E8C85879FE123265CACC95AE_il2cpp_TypeInfo_var);
			Texture_set_anisotropicFiltering_mE2B639BF2681A8A0516C1C343C7E265ED60EAF16((int32_t)L_168, /*hidden argument*/NULL);
			// break;
			goto IL_0721;
		}

IL_05fe:
		{
			// instance.wrapMode = reader.Read<UnityEngine.TextureWrapMode>();
			RenderTexture_t5FE7A5B47EF962A0E8D7BEBA05E9FC87D49A1849 * L_169 = V_0;
			ES3Reader_t2780AF8AA61DA2A817115CEF8612AC0E494D03C9 * L_170 = ___reader0;
			NullCheck((ES3Reader_t2780AF8AA61DA2A817115CEF8612AC0E494D03C9 *)L_170);
			int32_t L_171;
			L_171 = GenericVirtFuncInvoker0< int32_t >::Invoke(ES3Reader_Read_TisTextureWrapMode_t86DDA8206E4AA784A1218D0DE3C5F6826D7549EB_m7926E449CD0B8BD56E5BF145DD0CCFE1C567F107_RuntimeMethod_var, (ES3Reader_t2780AF8AA61DA2A817115CEF8612AC0E494D03C9 *)L_170);
			NullCheck((Texture_t9FE0218A1EEDF266E8C85879FE123265CACC95AE *)L_169);
			Texture_set_wrapMode_m1233D2DF48DC20996F8EE26E866D4BDD2AC8050D((Texture_t9FE0218A1EEDF266E8C85879FE123265CACC95AE *)L_169, (int32_t)L_171, /*hidden argument*/NULL);
			// break;
			goto IL_0721;
		}

IL_060f:
		{
			// instance.wrapModeU = reader.Read<UnityEngine.TextureWrapMode>();
			RenderTexture_t5FE7A5B47EF962A0E8D7BEBA05E9FC87D49A1849 * L_172 = V_0;
			ES3Reader_t2780AF8AA61DA2A817115CEF8612AC0E494D03C9 * L_173 = ___reader0;
			NullCheck((ES3Reader_t2780AF8AA61DA2A817115CEF8612AC0E494D03C9 *)L_173);
			int32_t L_174;
			L_174 = GenericVirtFuncInvoker0< int32_t >::Invoke(ES3Reader_Read_TisTextureWrapMode_t86DDA8206E4AA784A1218D0DE3C5F6826D7549EB_m7926E449CD0B8BD56E5BF145DD0CCFE1C567F107_RuntimeMethod_var, (ES3Reader_t2780AF8AA61DA2A817115CEF8612AC0E494D03C9 *)L_173);
			NullCheck((Texture_t9FE0218A1EEDF266E8C85879FE123265CACC95AE *)L_172);
			Texture_set_wrapModeU_mBD3CBD6880E9E767B91ED9E1B14C725A52D7A66E((Texture_t9FE0218A1EEDF266E8C85879FE123265CACC95AE *)L_172, (int32_t)L_174, /*hidden argument*/NULL);
			// break;
			goto IL_0721;
		}

IL_0620:
		{
			// instance.wrapModeV = reader.Read<UnityEngine.TextureWrapMode>();
			RenderTexture_t5FE7A5B47EF962A0E8D7BEBA05E9FC87D49A1849 * L_175 = V_0;
			ES3Reader_t2780AF8AA61DA2A817115CEF8612AC0E494D03C9 * L_176 = ___reader0;
			NullCheck((ES3Reader_t2780AF8AA61DA2A817115CEF8612AC0E494D03C9 *)L_176);
			int32_t L_177;
			L_177 = GenericVirtFuncInvoker0< int32_t >::Invoke(ES3Reader_Read_TisTextureWrapMode_t86DDA8206E4AA784A1218D0DE3C5F6826D7549EB_m7926E449CD0B8BD56E5BF145DD0CCFE1C567F107_RuntimeMethod_var, (ES3Reader_t2780AF8AA61DA2A817115CEF8612AC0E494D03C9 *)L_176);
			NullCheck((Texture_t9FE0218A1EEDF266E8C85879FE123265CACC95AE *)L_175);
			Texture_set_wrapModeV_mCD51C11B4C90D7508113C744EDC09D04059403E5((Texture_t9FE0218A1EEDF266E8C85879FE123265CACC95AE *)L_175, (int32_t)L_177, /*hidden argument*/NULL);
			// break;
			goto IL_0721;
		}

IL_0631:
		{
			// instance.wrapModeW = reader.Read<UnityEngine.TextureWrapMode>();
			RenderTexture_t5FE7A5B47EF962A0E8D7BEBA05E9FC87D49A1849 * L_178 = V_0;
			ES3Reader_t2780AF8AA61DA2A817115CEF8612AC0E494D03C9 * L_179 = ___reader0;
			NullCheck((ES3Reader_t2780AF8AA61DA2A817115CEF8612AC0E494D03C9 *)L_179);
			int32_t L_180;
			L_180 = GenericVirtFuncInvoker0< int32_t >::Invoke(ES3Reader_Read_TisTextureWrapMode_t86DDA8206E4AA784A1218D0DE3C5F6826D7549EB_m7926E449CD0B8BD56E5BF145DD0CCFE1C567F107_RuntimeMethod_var, (ES3Reader_t2780AF8AA61DA2A817115CEF8612AC0E494D03C9 *)L_179);
			NullCheck((Texture_t9FE0218A1EEDF266E8C85879FE123265CACC95AE *)L_178);
			Texture_set_wrapModeW_m72C3239EA12A51D5031BD2A66C5E7B178EE9F65B((Texture_t9FE0218A1EEDF266E8C85879FE123265CACC95AE *)L_178, (int32_t)L_180, /*hidden argument*/NULL);
			// break;
			goto IL_0721;
		}

IL_0642:
		{
			// instance.filterMode = reader.Read<UnityEngine.FilterMode>();
			RenderTexture_t5FE7A5B47EF962A0E8D7BEBA05E9FC87D49A1849 * L_181 = V_0;
			ES3Reader_t2780AF8AA61DA2A817115CEF8612AC0E494D03C9 * L_182 = ___reader0;
			NullCheck((ES3Reader_t2780AF8AA61DA2A817115CEF8612AC0E494D03C9 *)L_182);
			int32_t L_183;
			L_183 = GenericVirtFuncInvoker0< int32_t >::Invoke(ES3Reader_Read_TisFilterMode_tE90A08FD96A142C761463D65E524BCDBFEEE3D19_m9819C2A442797B4060B0D9A80CFA96CFD6102839_RuntimeMethod_var, (ES3Reader_t2780AF8AA61DA2A817115CEF8612AC0E494D03C9 *)L_182);
			NullCheck((Texture_t9FE0218A1EEDF266E8C85879FE123265CACC95AE *)L_181);
			Texture_set_filterMode_m045141DB0FEFE496885D45F5F23B15BC0E77C8D0((Texture_t9FE0218A1EEDF266E8C85879FE123265CACC95AE *)L_181, (int32_t)L_183, /*hidden argument*/NULL);
			// break;
			goto IL_0721;
		}

IL_0653:
		{
			// instance.anisoLevel = reader.Read<System.Int32>(ES3Type_int.Instance);
			RenderTexture_t5FE7A5B47EF962A0E8D7BEBA05E9FC87D49A1849 * L_184 = V_0;
			ES3Reader_t2780AF8AA61DA2A817115CEF8612AC0E494D03C9 * L_185 = ___reader0;
			IL2CPP_RUNTIME_CLASS_INIT(ES3Type_int_tF64C15D40AD0CC7C15BCD1CEC3C5C6BF837BD167_il2cpp_TypeInfo_var);
			ES3Type_t8FBECB7AE75168648B9524E0C2A38DAD4555421D * L_186 = ((ES3Type_int_tF64C15D40AD0CC7C15BCD1CEC3C5C6BF837BD167_StaticFields*)il2cpp_codegen_static_fields_for(ES3Type_int_tF64C15D40AD0CC7C15BCD1CEC3C5C6BF837BD167_il2cpp_TypeInfo_var))->get_Instance_12();
			NullCheck((ES3Reader_t2780AF8AA61DA2A817115CEF8612AC0E494D03C9 *)L_185);
			int32_t L_187;
			L_187 = GenericVirtFuncInvoker1< int32_t, ES3Type_t8FBECB7AE75168648B9524E0C2A38DAD4555421D * >::Invoke(ES3Reader_Read_TisInt32_tFDE5F8CD43D10453F6A2E0C77FE48C6CC7009046_m2B74AA6627F5B1D21171D56C42F71DE5A7C1B4A6_RuntimeMethod_var, (ES3Reader_t2780AF8AA61DA2A817115CEF8612AC0E494D03C9 *)L_185, (ES3Type_t8FBECB7AE75168648B9524E0C2A38DAD4555421D *)L_186);
			NullCheck((Texture_t9FE0218A1EEDF266E8C85879FE123265CACC95AE *)L_184);
			Texture_set_anisoLevel_mE51360F6CD0562FD6355F8C0509B70A454CB33BE((Texture_t9FE0218A1EEDF266E8C85879FE123265CACC95AE *)L_184, (int32_t)L_187, /*hidden argument*/NULL);
			// break;
			goto IL_0721;
		}

IL_0669:
		{
			// instance.mipMapBias = reader.Read<System.Single>(ES3Type_float.Instance);
			RenderTexture_t5FE7A5B47EF962A0E8D7BEBA05E9FC87D49A1849 * L_188 = V_0;
			ES3Reader_t2780AF8AA61DA2A817115CEF8612AC0E494D03C9 * L_189 = ___reader0;
			IL2CPP_RUNTIME_CLASS_INIT(ES3Type_float_tF86B773C86731BD9AD79448B860BBB178FE77644_il2cpp_TypeInfo_var);
			ES3Type_t8FBECB7AE75168648B9524E0C2A38DAD4555421D * L_190 = ((ES3Type_float_tF86B773C86731BD9AD79448B860BBB178FE77644_StaticFields*)il2cpp_codegen_static_fields_for(ES3Type_float_tF86B773C86731BD9AD79448B860BBB178FE77644_il2cpp_TypeInfo_var))->get_Instance_12();
			NullCheck((ES3Reader_t2780AF8AA61DA2A817115CEF8612AC0E494D03C9 *)L_189);
			float L_191;
			L_191 = GenericVirtFuncInvoker1< float, ES3Type_t8FBECB7AE75168648B9524E0C2A38DAD4555421D * >::Invoke(ES3Reader_Read_TisSingle_tE07797BA3C98D4CA9B5A19413C19A76688AB899E_m4A0416374498BDA042B8EB21E49B72326D6CE5F4_RuntimeMethod_var, (ES3Reader_t2780AF8AA61DA2A817115CEF8612AC0E494D03C9 *)L_189, (ES3Type_t8FBECB7AE75168648B9524E0C2A38DAD4555421D *)L_190);
			NullCheck((Texture_t9FE0218A1EEDF266E8C85879FE123265CACC95AE *)L_188);
			Texture_set_mipMapBias_m5057ADA9DBA8E8E30EC15EA5BABFA0734CE2821C((Texture_t9FE0218A1EEDF266E8C85879FE123265CACC95AE *)L_188, (float)L_191, /*hidden argument*/NULL);
			// break;
			goto IL_0721;
		}

IL_067f:
		{
			// instance.name = reader.Read<System.String>(ES3Type_string.Instance);
			RenderTexture_t5FE7A5B47EF962A0E8D7BEBA05E9FC87D49A1849 * L_192 = V_0;
			ES3Reader_t2780AF8AA61DA2A817115CEF8612AC0E494D03C9 * L_193 = ___reader0;
			IL2CPP_RUNTIME_CLASS_INIT(ES3Type_string_tC47BFBE3CC816F3C70B51558C68F0C6470C5EFE5_il2cpp_TypeInfo_var);
			ES3Type_t8FBECB7AE75168648B9524E0C2A38DAD4555421D * L_194 = ((ES3Type_string_tC47BFBE3CC816F3C70B51558C68F0C6470C5EFE5_StaticFields*)il2cpp_codegen_static_fields_for(ES3Type_string_tC47BFBE3CC816F3C70B51558C68F0C6470C5EFE5_il2cpp_TypeInfo_var))->get_Instance_12();
			NullCheck((ES3Reader_t2780AF8AA61DA2A817115CEF8612AC0E494D03C9 *)L_193);
			String_t* L_195;
			L_195 = GenericVirtFuncInvoker1< String_t*, ES3Type_t8FBECB7AE75168648B9524E0C2A38DAD4555421D * >::Invoke(ES3Reader_Read_TisString_t_m883861F3B58239392073ABF39876826EEB87DF9C_RuntimeMethod_var, (ES3Reader_t2780AF8AA61DA2A817115CEF8612AC0E494D03C9 *)L_193, (ES3Type_t8FBECB7AE75168648B9524E0C2A38DAD4555421D *)L_194);
			NullCheck((Object_tF2F3778131EFF286AF62B7B013A170F95A91571A *)L_192);
			Object_set_name_m87C4006618ADB325ABE5439DF159E10DD8DD0781((Object_tF2F3778131EFF286AF62B7B013A170F95A91571A *)L_192, (String_t*)L_195, /*hidden argument*/NULL);
			// break;
			goto IL_0721;
		}

IL_0695:
		{
			// instance.vrUsage = reader.Read<UnityEngine.VRTextureUsage>();
			RenderTexture_t5FE7A5B47EF962A0E8D7BEBA05E9FC87D49A1849 * L_196 = V_0;
			ES3Reader_t2780AF8AA61DA2A817115CEF8612AC0E494D03C9 * L_197 = ___reader0;
			NullCheck((ES3Reader_t2780AF8AA61DA2A817115CEF8612AC0E494D03C9 *)L_197);
			int32_t L_198;
			L_198 = GenericVirtFuncInvoker0< int32_t >::Invoke(ES3Reader_Read_TisVRTextureUsage_t3C09DF3DD90B5620BC0AB6F8078DFEF4E607F645_m7DE3966E4815BB13132866CB005EEE5B90FF51C2_RuntimeMethod_var, (ES3Reader_t2780AF8AA61DA2A817115CEF8612AC0E494D03C9 *)L_197);
			NullCheck((RenderTexture_t5FE7A5B47EF962A0E8D7BEBA05E9FC87D49A1849 *)L_196);
			RenderTexture_set_vrUsage_m9AF7F60442E3B933FDF274D801EA074D1A5ECB71((RenderTexture_t5FE7A5B47EF962A0E8D7BEBA05E9FC87D49A1849 *)L_196, (int32_t)L_198, /*hidden argument*/NULL);
			// break;
			goto IL_0721;
		}

IL_06a3:
		{
			// instance.graphicsFormat = reader.Read<UnityEngine.Experimental.Rendering.GraphicsFormat>();
			RenderTexture_t5FE7A5B47EF962A0E8D7BEBA05E9FC87D49A1849 * L_199 = V_0;
			ES3Reader_t2780AF8AA61DA2A817115CEF8612AC0E494D03C9 * L_200 = ___reader0;
			NullCheck((ES3Reader_t2780AF8AA61DA2A817115CEF8612AC0E494D03C9 *)L_200);
			int32_t L_201;
			L_201 = GenericVirtFuncInvoker0< int32_t >::Invoke(ES3Reader_Read_TisGraphicsFormat_t07A3C024BC77B843C53A369D6FC02ABD27D2AB1D_mCBD36004B10F649C93215AB4717F6F0D7118BF7D_RuntimeMethod_var, (ES3Reader_t2780AF8AA61DA2A817115CEF8612AC0E494D03C9 *)L_200);
			NullCheck((RenderTexture_t5FE7A5B47EF962A0E8D7BEBA05E9FC87D49A1849 *)L_199);
			RenderTexture_set_graphicsFormat_mA378AAD8BD876EE96637FF0A80A2AFEA4D852FAB((RenderTexture_t5FE7A5B47EF962A0E8D7BEBA05E9FC87D49A1849 *)L_199, (int32_t)L_201, /*hidden argument*/NULL);
			// break;
			goto IL_0721;
		}

IL_06b1:
		{
			// instance.stencilFormat = reader.Read<UnityEngine.Experimental.Rendering.GraphicsFormat>();
			RenderTexture_t5FE7A5B47EF962A0E8D7BEBA05E9FC87D49A1849 * L_202 = V_0;
			ES3Reader_t2780AF8AA61DA2A817115CEF8612AC0E494D03C9 * L_203 = ___reader0;
			NullCheck((ES3Reader_t2780AF8AA61DA2A817115CEF8612AC0E494D03C9 *)L_203);
			int32_t L_204;
			L_204 = GenericVirtFuncInvoker0< int32_t >::Invoke(ES3Reader_Read_TisGraphicsFormat_t07A3C024BC77B843C53A369D6FC02ABD27D2AB1D_mCBD36004B10F649C93215AB4717F6F0D7118BF7D_RuntimeMethod_var, (ES3Reader_t2780AF8AA61DA2A817115CEF8612AC0E494D03C9 *)L_203);
			NullCheck((RenderTexture_t5FE7A5B47EF962A0E8D7BEBA05E9FC87D49A1849 *)L_202);
			RenderTexture_set_stencilFormat_m7C6E21FCDB7E786D403CFC9775105B050EFF19C7((RenderTexture_t5FE7A5B47EF962A0E8D7BEBA05E9FC87D49A1849 *)L_202, (int32_t)L_204, /*hidden argument*/NULL);
			// break;
			goto IL_0721;
		}

IL_06bf:
		{
			// instance.bindTextureMS = reader.Read<System.Boolean>(ES3Type_bool.Instance);
			RenderTexture_t5FE7A5B47EF962A0E8D7BEBA05E9FC87D49A1849 * L_205 = V_0;
			ES3Reader_t2780AF8AA61DA2A817115CEF8612AC0E494D03C9 * L_206 = ___reader0;
			IL2CPP_RUNTIME_CLASS_INIT(ES3Type_bool_t8F309F7B9CC735FF1DEE68081B6E3CAB367745F4_il2cpp_TypeInfo_var);
			ES3Type_t8FBECB7AE75168648B9524E0C2A38DAD4555421D * L_207 = ((ES3Type_bool_t8F309F7B9CC735FF1DEE68081B6E3CAB367745F4_StaticFields*)il2cpp_codegen_static_fields_for(ES3Type_bool_t8F309F7B9CC735FF1DEE68081B6E3CAB367745F4_il2cpp_TypeInfo_var))->get_Instance_12();
			NullCheck((ES3Reader_t2780AF8AA61DA2A817115CEF8612AC0E494D03C9 *)L_206);
			bool L_208;
			L_208 = GenericVirtFuncInvoker1< bool, ES3Type_t8FBECB7AE75168648B9524E0C2A38DAD4555421D * >::Invoke(ES3Reader_Read_TisBoolean_t07D1E3F34E4813023D64F584DFF7B34C9D922F37_mC6D1B158268FF9B97822FF9F5B37FB1723FEDA22_RuntimeMethod_var, (ES3Reader_t2780AF8AA61DA2A817115CEF8612AC0E494D03C9 *)L_206, (ES3Type_t8FBECB7AE75168648B9524E0C2A38DAD4555421D *)L_207);
			NullCheck((RenderTexture_t5FE7A5B47EF962A0E8D7BEBA05E9FC87D49A1849 *)L_205);
			RenderTexture_set_bindTextureMS_m6C26F6AB2DE8FE81BFCA60C936AA08EA7F1A7177((RenderTexture_t5FE7A5B47EF962A0E8D7BEBA05E9FC87D49A1849 *)L_205, (bool)L_208, /*hidden argument*/NULL);
			// break;
			goto IL_0721;
		}

IL_06d2:
		{
			// instance.useDynamicScale = reader.Read<System.Boolean>(ES3Type_bool.Instance);
			RenderTexture_t5FE7A5B47EF962A0E8D7BEBA05E9FC87D49A1849 * L_209 = V_0;
			ES3Reader_t2780AF8AA61DA2A817115CEF8612AC0E494D03C9 * L_210 = ___reader0;
			IL2CPP_RUNTIME_CLASS_INIT(ES3Type_bool_t8F309F7B9CC735FF1DEE68081B6E3CAB367745F4_il2cpp_TypeInfo_var);
			ES3Type_t8FBECB7AE75168648B9524E0C2A38DAD4555421D * L_211 = ((ES3Type_bool_t8F309F7B9CC735FF1DEE68081B6E3CAB367745F4_StaticFields*)il2cpp_codegen_static_fields_for(ES3Type_bool_t8F309F7B9CC735FF1DEE68081B6E3CAB367745F4_il2cpp_TypeInfo_var))->get_Instance_12();
			NullCheck((ES3Reader_t2780AF8AA61DA2A817115CEF8612AC0E494D03C9 *)L_210);
			bool L_212;
			L_212 = GenericVirtFuncInvoker1< bool, ES3Type_t8FBECB7AE75168648B9524E0C2A38DAD4555421D * >::Invoke(ES3Reader_Read_TisBoolean_t07D1E3F34E4813023D64F584DFF7B34C9D922F37_mC6D1B158268FF9B97822FF9F5B37FB1723FEDA22_RuntimeMethod_var, (ES3Reader_t2780AF8AA61DA2A817115CEF8612AC0E494D03C9 *)L_210, (ES3Type_t8FBECB7AE75168648B9524E0C2A38DAD4555421D *)L_211);
			NullCheck((RenderTexture_t5FE7A5B47EF962A0E8D7BEBA05E9FC87D49A1849 *)L_209);
			RenderTexture_set_useDynamicScale_m8F96571C7EDBEFAB9278E04A3F3EB67067A5AE29((RenderTexture_t5FE7A5B47EF962A0E8D7BEBA05E9FC87D49A1849 *)L_209, (bool)L_212, /*hidden argument*/NULL);
			// break;
			goto IL_0721;
		}

IL_06e5:
		{
			// UnityEngine.RenderTexture.streamingTextureForceLoadAll = reader.Read<System.Boolean>(ES3Type_bool.Instance);
			ES3Reader_t2780AF8AA61DA2A817115CEF8612AC0E494D03C9 * L_213 = ___reader0;
			IL2CPP_RUNTIME_CLASS_INIT(ES3Type_bool_t8F309F7B9CC735FF1DEE68081B6E3CAB367745F4_il2cpp_TypeInfo_var);
			ES3Type_t8FBECB7AE75168648B9524E0C2A38DAD4555421D * L_214 = ((ES3Type_bool_t8F309F7B9CC735FF1DEE68081B6E3CAB367745F4_StaticFields*)il2cpp_codegen_static_fields_for(ES3Type_bool_t8F309F7B9CC735FF1DEE68081B6E3CAB367745F4_il2cpp_TypeInfo_var))->get_Instance_12();
			NullCheck((ES3Reader_t2780AF8AA61DA2A817115CEF8612AC0E494D03C9 *)L_213);
			bool L_215;
			L_215 = GenericVirtFuncInvoker1< bool, ES3Type_t8FBECB7AE75168648B9524E0C2A38DAD4555421D * >::Invoke(ES3Reader_Read_TisBoolean_t07D1E3F34E4813023D64F584DFF7B34C9D922F37_mC6D1B158268FF9B97822FF9F5B37FB1723FEDA22_RuntimeMethod_var, (ES3Reader_t2780AF8AA61DA2A817115CEF8612AC0E494D03C9 *)L_213, (ES3Type_t8FBECB7AE75168648B9524E0C2A38DAD4555421D *)L_214);
			IL2CPP_RUNTIME_CLASS_INIT(Texture_t9FE0218A1EEDF266E8C85879FE123265CACC95AE_il2cpp_TypeInfo_var);
			Texture_set_streamingTextureForceLoadAll_m325117C0830BB9B4316CF41CEE045759FC52B7A3((bool)L_215, /*hidden argument*/NULL);
			// break;
			goto IL_0721;
		}

IL_06f7:
		{
			// UnityEngine.RenderTexture.streamingTextureDiscardUnusedMips = reader.Read<System.Boolean>(ES3Type_bool.Instance);
			ES3Reader_t2780AF8AA61DA2A817115CEF8612AC0E494D03C9 * L_216 = ___reader0;
			IL2CPP_RUNTIME_CLASS_INIT(ES3Type_bool_t8F309F7B9CC735FF1DEE68081B6E3CAB367745F4_il2cpp_TypeInfo_var);
			ES3Type_t8FBECB7AE75168648B9524E0C2A38DAD4555421D * L_217 = ((ES3Type_bool_t8F309F7B9CC735FF1DEE68081B6E3CAB367745F4_StaticFields*)il2cpp_codegen_static_fields_for(ES3Type_bool_t8F309F7B9CC735FF1DEE68081B6E3CAB367745F4_il2cpp_TypeInfo_var))->get_Instance_12();
			NullCheck((ES3Reader_t2780AF8AA61DA2A817115CEF8612AC0E494D03C9 *)L_216);
			bool L_218;
			L_218 = GenericVirtFuncInvoker1< bool, ES3Type_t8FBECB7AE75168648B9524E0C2A38DAD4555421D * >::Invoke(ES3Reader_Read_TisBoolean_t07D1E3F34E4813023D64F584DFF7B34C9D922F37_mC6D1B158268FF9B97822FF9F5B37FB1723FEDA22_RuntimeMethod_var, (ES3Reader_t2780AF8AA61DA2A817115CEF8612AC0E494D03C9 *)L_216, (ES3Type_t8FBECB7AE75168648B9524E0C2A38DAD4555421D *)L_217);
			IL2CPP_RUNTIME_CLASS_INIT(Texture_t9FE0218A1EEDF266E8C85879FE123265CACC95AE_il2cpp_TypeInfo_var);
			Texture_set_streamingTextureDiscardUnusedMips_mE184CE016A8E0319B437D34E0DB61962CE17F5DC((bool)L_218, /*hidden argument*/NULL);
			// break;
			goto IL_0721;
		}

IL_0709:
		{
			// UnityEngine.RenderTexture.allowThreadedTextureCreation = reader.Read<System.Boolean>(ES3Type_bool.Instance);
			ES3Reader_t2780AF8AA61DA2A817115CEF8612AC0E494D03C9 * L_219 = ___reader0;
			IL2CPP_RUNTIME_CLASS_INIT(ES3Type_bool_t8F309F7B9CC735FF1DEE68081B6E3CAB367745F4_il2cpp_TypeInfo_var);
			ES3Type_t8FBECB7AE75168648B9524E0C2A38DAD4555421D * L_220 = ((ES3Type_bool_t8F309F7B9CC735FF1DEE68081B6E3CAB367745F4_StaticFields*)il2cpp_codegen_static_fields_for(ES3Type_bool_t8F309F7B9CC735FF1DEE68081B6E3CAB367745F4_il2cpp_TypeInfo_var))->get_Instance_12();
			NullCheck((ES3Reader_t2780AF8AA61DA2A817115CEF8612AC0E494D03C9 *)L_219);
			bool L_221;
			L_221 = GenericVirtFuncInvoker1< bool, ES3Type_t8FBECB7AE75168648B9524E0C2A38DAD4555421D * >::Invoke(ES3Reader_Read_TisBoolean_t07D1E3F34E4813023D64F584DFF7B34C9D922F37_mC6D1B158268FF9B97822FF9F5B37FB1723FEDA22_RuntimeMethod_var, (ES3Reader_t2780AF8AA61DA2A817115CEF8612AC0E494D03C9 *)L_219, (ES3Type_t8FBECB7AE75168648B9524E0C2A38DAD4555421D *)L_220);
			IL2CPP_RUNTIME_CLASS_INIT(Texture_t9FE0218A1EEDF266E8C85879FE123265CACC95AE_il2cpp_TypeInfo_var);
			Texture_set_allowThreadedTextureCreation_m84D29394912B9CE876023963426256CBEB15A52E((bool)L_221, /*hidden argument*/NULL);
			// break;
			goto IL_0721;
		}

IL_071b:
		{
			// reader.Skip();
			ES3Reader_t2780AF8AA61DA2A817115CEF8612AC0E494D03C9 * L_222 = ___reader0;
			NullCheck((ES3Reader_t2780AF8AA61DA2A817115CEF8612AC0E494D03C9 *)L_222);
			VirtActionInvoker0::Invoke(41 /* System.Void ES3Reader::Skip() */, (ES3Reader_t2780AF8AA61DA2A817115CEF8612AC0E494D03C9 *)L_222);
		}

IL_0721:
		{
			// foreach (string propertyName in reader.Properties)
			RuntimeObject* L_223 = V_1;
			NullCheck((RuntimeObject*)L_223);
			bool L_224;
			L_224 = InterfaceFuncInvoker0< bool >::Invoke(0 /* System.Boolean System.Collections.IEnumerator::MoveNext() */, IEnumerator_t5956F3AFB7ECF1117E3BC5890E7FC7B7F7A04105_il2cpp_TypeInfo_var, (RuntimeObject*)L_223);
			if (L_224)
			{
				goto IL_0018;
			}
		}

IL_072c:
		{
			IL2CPP_LEAVE(0x742, FINALLY_072e);
		}
	} // end try (depth: 1)
	catch(Il2CppExceptionWrapper& e)
	{
		__last_unhandled_exception = (Exception_t *)e.ex;
		goto FINALLY_072e;
	}

FINALLY_072e:
	{ // begin finally (depth: 1)
		{
			RuntimeObject* L_225 = V_1;
			V_4 = (RuntimeObject*)((RuntimeObject*)IsInst((RuntimeObject*)L_225, IDisposable_t099785737FC6A1E3699919A94109383715A8D807_il2cpp_TypeInfo_var));
			RuntimeObject* L_226 = V_4;
			if (!L_226)
			{
				goto IL_0741;
			}
		}

IL_073a:
		{
			RuntimeObject* L_227 = V_4;
			NullCheck((RuntimeObject*)L_227);
			InterfaceActionInvoker0::Invoke(0 /* System.Void System.IDisposable::Dispose() */, IDisposable_t099785737FC6A1E3699919A94109383715A8D807_il2cpp_TypeInfo_var, (RuntimeObject*)L_227);
		}

IL_0741:
		{
			IL2CPP_END_FINALLY(1838)
		}
	} // end finally (depth: 1)
	IL2CPP_CLEANUP(1838)
	{
		IL2CPP_RETHROW_IF_UNHANDLED(Exception_t *)
		IL2CPP_JUMP_TBL(0x742, IL_0742)
	}

IL_0742:
	{
		// }
		return;
	}
}
